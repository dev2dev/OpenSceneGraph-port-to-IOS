// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/CopyOp>
#include <osg/Material>
#include <osg/Node>
#include <osg/NodeVisitor>
#include <osg/Object>
#include <osgPresentation/AnimationMaterial>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(osgPresentation::AnimationMaterial::LoopMode)
	I_DeclaringFile("osgPresentation/AnimationMaterial");
	I_EnumLabel(osgPresentation::AnimationMaterial::SWING);
	I_EnumLabel(osgPresentation::AnimationMaterial::LOOP);
	I_EnumLabel(osgPresentation::AnimationMaterial::NO_LOOPING);
END_REFLECTOR

TYPE_NAME_ALIAS(std::map< double COMMA  osg::ref_ptr< osg::Material > >, osgPresentation::AnimationMaterial::TimeControlPointMap)

BEGIN_OBJECT_REFLECTOR(osgPresentation::AnimationMaterial)
	I_DeclaringFile("osgPresentation/AnimationMaterial");
	I_VirtualBaseType(osg::Object);
	I_Constructor0(____AnimationMaterial,
	               "",
	               "");
	I_ConstructorWithDefaults2(IN, const osgPresentation::AnimationMaterial &, ap, , IN, const osg::CopyOp &, copyop, osg::CopyOp::SHALLOW_COPY,
	                           ____AnimationMaterial__C5_AnimationMaterial_R1__C5_osg_CopyOp_R1,
	                           "",
	                           "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method2(bool, getMaterial, IN, double, time, IN, osg::Material &, material,
	          Properties::NON_VIRTUAL,
	          __bool__getMaterial__double__osg_Material_R1,
	          "get the transformation matrix for a point in time. ",
	          "");
	I_Method2(void, insert, IN, double, time, IN, osg::Material *, material,
	          Properties::NON_VIRTUAL,
	          __void__insert__double__osg_Material_P1,
	          "",
	          "");
	I_Method0(double, getFirstTime,
	          Properties::NON_VIRTUAL,
	          __double__getFirstTime,
	          "",
	          "");
	I_Method0(double, getLastTime,
	          Properties::NON_VIRTUAL,
	          __double__getLastTime,
	          "",
	          "");
	I_Method0(double, getPeriod,
	          Properties::NON_VIRTUAL,
	          __double__getPeriod,
	          "",
	          "");
	I_Method1(void, setLoopMode, IN, osgPresentation::AnimationMaterial::LoopMode, lm,
	          Properties::NON_VIRTUAL,
	          __void__setLoopMode__LoopMode,
	          "",
	          "");
	I_Method0(osgPresentation::AnimationMaterial::LoopMode, getLoopMode,
	          Properties::NON_VIRTUAL,
	          __LoopMode__getLoopMode,
	          "",
	          "");
	I_Method0(osgPresentation::AnimationMaterial::TimeControlPointMap &, getTimeControlPointMap,
	          Properties::NON_VIRTUAL,
	          __TimeControlPointMap_R1__getTimeControlPointMap,
	          "",
	          "");
	I_Method0(const osgPresentation::AnimationMaterial::TimeControlPointMap &, getTimeControlPointMap,
	          Properties::NON_VIRTUAL,
	          __C5_TimeControlPointMap_R1__getTimeControlPointMap,
	          "",
	          "");
	I_Method1(void, read, IN, std::istream &, in,
	          Properties::NON_VIRTUAL,
	          __void__read__std_istream_R1,
	          "read the anumation path from a flat ascii file stream. ",
	          "");
	I_Method1(void, write, IN, std::ostream &, out,
	          Properties::NON_VIRTUAL,
	          __void__write__std_ostream_R1,
	          "write the anumation path to a flat ascii file stream. ",
	          "");
	I_Method0(bool, requiresBlending,
	          Properties::NON_VIRTUAL,
	          __bool__requiresBlending,
	          "",
	          "");
	I_ProtectedMethod4(void, interpolate, IN, osg::Material &, material, IN, float, r, IN, const osg::Material &, lhs, IN, const osg::Material &, rhs,
	                   Properties::NON_VIRTUAL,
	                   Properties::CONST,
	                   __void__interpolate__osg_Material_R1__float__C5_osg_Material_R1__C5_osg_Material_R1,
	                   "",
	                   "");
	I_SimpleProperty(double, FirstTime, 
	                 __double__getFirstTime, 
	                 0);
	I_SimpleProperty(double, LastTime, 
	                 __double__getLastTime, 
	                 0);
	I_SimpleProperty(osgPresentation::AnimationMaterial::LoopMode, LoopMode, 
	                 __LoopMode__getLoopMode, 
	                 __void__setLoopMode__LoopMode);
	I_SimpleProperty(double, Period, 
	                 __double__getPeriod, 
	                 0);
	I_SimpleProperty(osgPresentation::AnimationMaterial::TimeControlPointMap &, TimeControlPointMap, 
	                 __TimeControlPointMap_R1__getTimeControlPointMap, 
	                 0);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(osgPresentation::AnimationMaterialCallback)
	I_DeclaringFile("osgPresentation/AnimationMaterial");
	I_BaseType(osg::NodeCallback);
	I_Constructor0(____AnimationMaterialCallback,
	               "",
	               "");
	I_Constructor2(IN, const osgPresentation::AnimationMaterialCallback &, apc, IN, const osg::CopyOp &, copyop,
	               ____AnimationMaterialCallback__C5_AnimationMaterialCallback_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Method0(osg::Object *, cloneType,
	          Properties::VIRTUAL,
	          __osg_Object_P1__cloneType,
	          "Clone the type of an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(osg::Object *, clone, IN, const osg::CopyOp &, x,
	          Properties::VIRTUAL,
	          __osg_Object_P1__clone__C5_osg_CopyOp_R1,
	          "Clone an object, with Object* return type. ",
	          "Must be defined by derived classes. ");
	I_Method1(bool, isSameKindAs, IN, const osg::Object *, obj,
	          Properties::VIRTUAL,
	          __bool__isSameKindAs__C5_osg_Object_P1,
	          "",
	          "");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_ConstructorWithDefaults3(IN, osgPresentation::AnimationMaterial *, ap, , IN, double, timeOffset, 0.0f, IN, double, timeMultiplier, 1.0f,
	                           ____AnimationMaterialCallback__AnimationMaterial_P1__double__double,
	                           "",
	                           "");
	I_Method1(void, setAnimationMaterial, IN, osgPresentation::AnimationMaterial *, path,
	          Properties::NON_VIRTUAL,
	          __void__setAnimationMaterial__AnimationMaterial_P1,
	          "",
	          "");
	I_Method0(osgPresentation::AnimationMaterial *, getAnimationMaterial,
	          Properties::NON_VIRTUAL,
	          __AnimationMaterial_P1__getAnimationMaterial,
	          "",
	          "");
	I_Method0(const osgPresentation::AnimationMaterial *, getAnimationMaterial,
	          Properties::NON_VIRTUAL,
	          __C5_AnimationMaterial_P1__getAnimationMaterial,
	          "",
	          "");
	I_Method1(void, setTimeOffset, IN, double, offset,
	          Properties::NON_VIRTUAL,
	          __void__setTimeOffset__double,
	          "",
	          "");
	I_Method0(double, getTimeOffset,
	          Properties::NON_VIRTUAL,
	          __double__getTimeOffset,
	          "",
	          "");
	I_Method1(void, setTimeMultiplier, IN, double, multiplier,
	          Properties::NON_VIRTUAL,
	          __void__setTimeMultiplier__double,
	          "",
	          "");
	I_Method0(double, getTimeMultiplier,
	          Properties::NON_VIRTUAL,
	          __double__getTimeMultiplier,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::NON_VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method1(void, setPause, IN, bool, pause,
	          Properties::NON_VIRTUAL,
	          __void__setPause__bool,
	          "",
	          "");
	I_Method0(double, getAnimationTime,
	          Properties::NON_VIRTUAL,
	          __double__getAnimationTime,
	          "get the animation time that is used to specify the position along the AnimationMaterial. ",
	          "Animation time is computed from the formula ((_latestTime-_firstTime)-_timeOffset)*_timeMultiplier. ");
	I_Method1(void, update, IN, osg::Node &, node,
	          Properties::NON_VIRTUAL,
	          __void__update__osg_Node_R1,
	          "",
	          "");
	I_SimpleProperty(osgPresentation::AnimationMaterial *, AnimationMaterial, 
	                 __AnimationMaterial_P1__getAnimationMaterial, 
	                 __void__setAnimationMaterial__AnimationMaterial_P1);
	I_SimpleProperty(double, AnimationTime, 
	                 __double__getAnimationTime, 
	                 0);
	I_SimpleProperty(bool, Pause, 
	                 0, 
	                 __void__setPause__bool);
	I_SimpleProperty(double, TimeMultiplier, 
	                 __double__getTimeMultiplier, 
	                 __void__setTimeMultiplier__double);
	I_SimpleProperty(double, TimeOffset, 
	                 __double__getTimeOffset, 
	                 __void__setTimeOffset__double);
	I_PublicMemberProperty(osg::ref_ptr< osgPresentation::AnimationMaterial >, _animationMaterial);
	I_PublicMemberProperty(bool, _useInverseMatrix);
	I_PublicMemberProperty(double, _timeOffset);
	I_PublicMemberProperty(double, _timeMultiplier);
	I_PublicMemberProperty(double, _firstTime);
	I_PublicMemberProperty(double, _latestTime);
	I_PublicMemberProperty(bool, _pause);
	I_PublicMemberProperty(double, _pauseTime);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osg::Material >)
	I_DeclaringFile("osg/ref_ptr");
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osg::Material *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osg::Material > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osg::Material *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osg::Material *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osg::Material > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osg::Material *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_MAP_REFLECTOR(std::map< double COMMA  osg::ref_ptr< osg::Material > >)

