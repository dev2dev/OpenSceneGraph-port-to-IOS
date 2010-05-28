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

#include <osgViewer/api/Carbon/GraphicsHandleCarbon>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_VALUE_REFLECTOR(osgViewer::GraphicsHandleCarbon)
	I_DeclaringFile("osgViewer/api/Carbon/GraphicsHandleCarbon");
	I_Constructor0(____GraphicsHandleCarbon,
	               "",
	               "");
	I_Method1(void, setAGLContext, IN, AGLContext, context,
	          Properties::NON_VIRTUAL,
	          __void__setAGLContext__AGLContext,
	          "Set native AGL graphics context. ",
	          "");
	I_Method0(AGLContext, getAGLContext,
	          Properties::NON_VIRTUAL,
	          __AGLContext__getAGLContext,
	          "Get native AGL graphics context. ",
	          "");
	I_SimpleProperty(AGLContext, AGLContext, 
	                 __AGLContext__getAGLContext, 
	                 __void__setAGLContext__AGLContext);
END_REFLECTOR

