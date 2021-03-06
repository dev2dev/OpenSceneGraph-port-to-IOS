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

#include <osg/Vec2d>
#include <osg/Vec2f>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

#include <osg/io_utils>
	
TYPE_NAME_ALIAS(double, osg::Vec2d::value_type)

BEGIN_VALUE_REFLECTOR(osg::Vec2d)
	I_ReaderWriter(osgIntrospection::StdReaderWriter<reflected_type>);	// user-defined
	I_Comparator(osgIntrospection::PartialOrderComparator<reflected_type>);	// user-defined
	I_DeclaringFile("osg/Vec2d");
	I_Constructor0(____Vec2d,
	               "",
	               "");
	I_Constructor2(IN, osg::Vec2d::value_type, x, IN, osg::Vec2d::value_type, y,
	               ____Vec2d__value_type__value_type,
	               "",
	               "");
	I_Constructor1(IN, const osg::Vec2f &, vec,
	               Properties::NON_EXPLICIT,
	               ____Vec2d__C5_Vec2f_R1,
	               "",
	               "");
	I_Method0(osg::Vec2d::value_type *, ptr,
	          Properties::NON_VIRTUAL,
	          __value_type_P1__ptr,
	          "",
	          "");
	I_Method0(const osg::Vec2d::value_type *, ptr,
	          Properties::NON_VIRTUAL,
	          __C5_value_type_P1__ptr,
	          "",
	          "");
	I_Method2(void, set, IN, osg::Vec2d::value_type, x, IN, osg::Vec2d::value_type, y,
	          Properties::NON_VIRTUAL,
	          __void__set__value_type__value_type,
	          "",
	          "");
	I_Method0(osg::Vec2d::value_type &, x,
	          Properties::NON_VIRTUAL,
	          __value_type_R1__x,
	          "",
	          "");
	I_Method0(osg::Vec2d::value_type &, y,
	          Properties::NON_VIRTUAL,
	          __value_type_R1__y,
	          "",
	          "");
	I_Method0(osg::Vec2d::value_type, x,
	          Properties::NON_VIRTUAL,
	          __value_type__x,
	          "",
	          "");
	I_Method0(osg::Vec2d::value_type, y,
	          Properties::NON_VIRTUAL,
	          __value_type__y,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(bool, isNaN,
	          Properties::NON_VIRTUAL,
	          __bool__isNaN,
	          "",
	          "");
	I_Method0(osg::Vec2d::value_type, length,
	          Properties::NON_VIRTUAL,
	          __value_type__length,
	          "Length of the vector = sqrt( vec . ",
	          "vec ) ");
	I_Method0(osg::Vec2d::value_type, length2,
	          Properties::NON_VIRTUAL,
	          __value_type__length2,
	          "Length squared of the vector = vec . ",
	          "vec ");
	I_Method0(osg::Vec2d::value_type, normalize,
	          Properties::NON_VIRTUAL,
	          __value_type__normalize,
	          "Normalize the vector so that it has length unity. ",
	          "Returns the previous length of the vector. ");
END_REFLECTOR

