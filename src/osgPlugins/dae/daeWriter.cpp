/*
 * Copyright 2006 Sony Computer Entertainment Inc.
 *
 * Licensed under the SCEA Shared Source License, Version 1.0 (the "License"); you may not use this 
 * file except in compliance with the License. You may obtain a copy of the License at:
 * http://research.scea.com/scea_shared_source_license.html
 *
 * Unless required by applicable law or agreed to in writing, software distributed under the License 
 * is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or 
 * implied. See the License for the specific language governing permissions and limitations under the 
 * License. 
 */

#include "daeWriter.h"

#include <dom/domCOLLADA.h>

#include <dom/domNode.h>
#include <dom/domConstants.h>

#include <sstream>


namespace osgDAE {

std::string toString(const osg::Vec3f& value)
{
    std::stringstream str;
    str << value.x() << " " << value.y() << " " << value.z();
    return str.str();
}

std::string toString(const osg::Vec3d& value)
{
    std::stringstream str;
    str << value.x() << " " << value.y() << " " << value.z();
    return str.str();
}

std::string toString(const osg::Matrix& value)
{
    std::stringstream str;
    str << value(0,0) << " " << value(1,0) << " " << value(2,0) << " " << value(3,0) << " "
        << value(0,1) << " " << value(1,1) << " " << value(2,1) << " " << value(3,1) << " "
        << value(0,2) << " " << value(1,2) << " " << value(2,2) << " " << value(3,2) << " "
        << value(0,3) << " " << value(1,3) << " " << value(2,3) << " " << value(3,3);
    return str.str();
}


daeWriter::daeWriter( DAE *dae_, const std::string &fileURI, bool _usePolygons,  bool googleMode, TraversalMode tm, bool _writeExtras, bool earthTex, bool zUpAxis, bool forceTexture) : osg::NodeVisitor( tm ),
                                        dae(dae_),
                                        _domLibraryAnimations(NULL),
                                        writeExtras(_writeExtras),
                                        rootName(*dae_),
                                        usePolygons (_usePolygons),
                                        m_GoogleMode(googleMode),
                                        m_EarthTex(earthTex),
                                        m_ZUpAxis(zUpAxis),
                                        m_ForceTexture(forceTexture),
                                        m_CurrentRenderingHint(osg::StateSet::DEFAULT_BIN)
{
    success = true;

    dae->setDatabase( NULL );
    dae->setIOPlugin( NULL );
    //create document
    dae->getDatabase()->createDocument( fileURI.c_str(), &doc );
    dom = (domCOLLADA*)doc->getDomRoot();
    //create scene and instance visual scene
    domCOLLADA::domScene *scene = daeSafeCast< domCOLLADA::domScene >( dom->add( COLLADA_ELEMENT_SCENE ) );
    domInstanceWithExtra *ivs = daeSafeCast< domInstanceWithExtra >( scene->add( COLLADA_ELEMENT_INSTANCE_VISUAL_SCENE ) );
    ivs->setUrl( "#defaultScene" );
    //create library visual scenes and a visual scene and the root node
    lib_vis_scenes = daeSafeCast<domLibrary_visual_scenes>( dom->add( COLLADA_ELEMENT_LIBRARY_VISUAL_SCENES ) );
    vs = daeSafeCast< domVisual_scene >( lib_vis_scenes->add( COLLADA_ELEMENT_VISUAL_SCENE ) );
    vs->setId( "defaultScene" );
    currentNode = daeSafeCast< domNode >( vs->add( COLLADA_ELEMENT_NODE ) );
    currentNode->setId( "sceneRoot" );

    //create Asset
    createAssetTag(m_ZUpAxis);

    lib_cameras = NULL;
    lib_effects = NULL;
    lib_controllers = NULL;
    lib_geoms = NULL;
    lib_lights = NULL;
    lib_mats = NULL;

    lastDepth = 0;

    // Clean up caches
    uniqueNames.clear();

    currentStateSet = new osg::StateSet();
}

daeWriter::~daeWriter()
{
}

void daeWriter::debugPrint( osg::Node &node )
{
#ifdef _DEBUG
    std::string indent = "";
    for ( unsigned int i = 0; i < _nodePath.size(); i++ )
    {
        indent += "  ";
    }
    OSG_INFO << indent << node.className() << std::endl;
#endif
}


void daeWriter::setRootNode( const osg::Node &node )
{
    std::string fname = osgDB::findDataFile( node.getName() );

    const_cast<osg::Node*>(&node)->accept( _animatedNodeCollector );
}

//### provide a name to node
std::string daeWriter::getNodeName(const osg::Node & node,const std::string & defaultName)
{
    std::string nodeName;
    if (node.getName().empty())
        nodeName=uniquify(defaultName);
    else
        nodeName=uniquify(node.getName());
    return nodeName;
}

//NODE
void daeWriter::apply( osg::Node &node )
{
    debugPrint( node );

    writeNodeExtra(node);

    traverse( node );
}


std::string daeWriter::uniquify( const std::string &name )
{
    std::map< std::string, int >::iterator iter = uniqueNames.find( name );
    if ( iter != uniqueNames.end() )
    {
        iter->second++;
        std::ostringstream num;
        num << std::dec << iter->second;
        return name + "_" + num.str();
    }
    else
    {
        uniqueNames.insert( std::make_pair( name, 0 ) );
        return name;
    }
    return "";
}

void daeWriter::createAssetTag( bool isZUpAxis )
{
    domAsset *asset = daeSafeCast< domAsset >(dom->add( COLLADA_ELEMENT_ASSET ) );
    domAsset::domCreated *c = daeSafeCast< domAsset::domCreated >(asset->add(COLLADA_ELEMENT_CREATED));
    domAsset::domModified *m = daeSafeCast< domAsset::domModified >(asset->add(COLLADA_ELEMENT_MODIFIED));
    domAsset::domUnit *u = daeSafeCast< domAsset::domUnit >(asset->add(COLLADA_ELEMENT_UNIT));
    domAsset::domUp_axis *up = daeSafeCast< domAsset::domUp_axis >(asset->add(COLLADA_ELEMENT_UP_AXIS));
    up->setValue(UPAXISTYPE_Z_UP);

    //TODO : set date and time
    c->setValue( "2006-07-25T00:00:00Z" );
    m->setValue( "2006-07-25T00:00:00Z" );
    
    u->setName( "meter" );
    u->setMeter( 1 );
}

void daeWriter::traverse (osg::Node &node)
{
    pushStateSet(node.getStateSet());

    osg::NodeVisitor::traverse( node );

    popStateSet(node.getStateSet());
}

void daeWriter::pushStateSet(osg::StateSet* ss)
{
  if (NULL!=ss) {
    // Save our current stateset
    stateSetStack.push(currentStateSet.get());
    
    // merge with node stateset
    currentStateSet = static_cast<osg::StateSet*>(currentStateSet->clone(osg::CopyOp::SHALLOW_COPY));
    currentStateSet->merge(*ss);    
  }
}


void daeWriter::popStateSet(osg::StateSet* ss)
{
    if (NULL!=ss) {
      // restore the previous stateset
      currentStateSet = stateSetStack.top();
      stateSetStack.pop();
    }
}

} // namespace osgdae
