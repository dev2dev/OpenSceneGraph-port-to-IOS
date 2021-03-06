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

#include <OpenThreads/Mutex>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_ENUM_REFLECTOR(OpenThreads::Mutex::MutexType)
	I_DeclaringFile("OpenThreads/Mutex");
	I_EnumLabel(OpenThreads::Mutex::MUTEX_NORMAL);
	I_EnumLabel(OpenThreads::Mutex::MUTEX_RECURSIVE);
END_REFLECTOR

BEGIN_OBJECT_REFLECTOR(OpenThreads::Mutex)
	I_DeclaringFile("OpenThreads/Mutex");
	I_ConstructorWithDefaults1(IN, OpenThreads::Mutex::MutexType, type, OpenThreads::Mutex::MUTEX_NORMAL,
	                           Properties::NON_EXPLICIT,
	                           ____Mutex__MutexType,
	                           "Constructor. ",
	                           "");
	I_Method0(OpenThreads::Mutex::MutexType, getMutexType,
	          Properties::NON_VIRTUAL,
	          __MutexType__getMutexType,
	          "",
	          "");
	I_Method0(int, lock,
	          Properties::VIRTUAL,
	          __int__lock,
	          "Lock the mutex. ",
	          "0 if normal, -1 if errno set, errno code otherwise.  ");
	I_Method0(int, unlock,
	          Properties::VIRTUAL,
	          __int__unlock,
	          "Unlock the mutex. ",
	          "0 if normal, -1 if errno set, errno code otherwise.  ");
	I_Method0(int, trylock,
	          Properties::VIRTUAL,
	          __int__trylock,
	          "Test if mutex can be locked. ",
	          "0 if normal, -1 if errno set, errno code otherwise.  ");
	I_SimpleProperty(OpenThreads::Mutex::MutexType, MutexType, 
	                 __MutexType__getMutexType, 
	                 0);
END_REFLECTOR

