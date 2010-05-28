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
#include <osg/Object>
#include <osgAnimation/ActionBlendOut>
#include <osgAnimation/ActionVisitor>
#include <osgAnimation/Animation>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgAnimation::ActionBlendOut)
	I_DeclaringFile("osgAnimation/ActionBlendOut");
	I_BaseType(osgAnimation::Action);
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
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "return the name of the object's class type. ",
	          "Must be defined by derived classes. ");
	I_Method0(const char *, libraryName,
	          Properties::VIRTUAL,
	          __C5_char_P1__libraryName,
	          "return the name of the object's library. ",
	          "Must be defined by derived classes. The OpenSceneGraph convention is that the namespace of a library is the same as the library name. ");
	I_Method1(void, accept, IN, osgAnimation::ActionVisitor &, nv,
	          Properties::VIRTUAL,
	          __void__accept__osgAnimation_ActionVisitor_R1,
	          "",
	          "");
	I_Constructor0(____ActionBlendOut,
	               "",
	               "");
	I_Constructor2(IN, const osgAnimation::ActionBlendOut &, a, IN, const osg::CopyOp &, c,
	               ____ActionBlendOut__C5_ActionBlendOut_R1__C5_osg_CopyOp_R1,
	               "",
	               "");
	I_Constructor2(IN, osgAnimation::Animation *, animation, IN, double, duration,
	               ____ActionBlendOut__Animation_P1__double,
	               "",
	               "");
	I_Method0(osgAnimation::Animation *, getAnimation,
	          Properties::NON_VIRTUAL,
	          __Animation_P1__getAnimation,
	          "",
	          "");
	I_Method0(double, getWeight,
	          Properties::NON_VIRTUAL,
	          __double__getWeight,
	          "",
	          "");
	I_Method1(void, computeWeight, IN, unsigned int, frame,
	          Properties::NON_VIRTUAL,
	          __void__computeWeight__unsigned_int,
	          "",
	          "");
	I_SimpleProperty(osgAnimation::Animation *, Animation, 
	                 __Animation_P1__getAnimation, 
	                 0);
	I_SimpleProperty(double, Weight, 
	                 __double__getWeight, 
	                 0);
END_REFLECTOR

