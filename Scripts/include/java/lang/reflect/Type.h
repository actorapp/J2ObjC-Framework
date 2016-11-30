//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/reflect/Type.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectType")
#ifdef RESTRICT_JavaLangReflectType
#define INCLUDE_ALL_JavaLangReflectType 0
#else
#define INCLUDE_ALL_JavaLangReflectType 1
#endif
#undef RESTRICT_JavaLangReflectType

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectType_) && (INCLUDE_ALL_JavaLangReflectType || defined(INCLUDE_JavaLangReflectType))
#define JavaLangReflectType_

/*!
 @brief Type is the common superinterface for all types in the Java
 programming language.
 These include raw types, parameterized types,
 array types, type variables and primitive types.
 @since 1.5
 */
@protocol JavaLangReflectType < JavaObject >

/*!
 @brief Returns a string describing this type, including information
 about any type parameters.
  The default implementation calls <code>toString</code>.
 @return a string describing this type
 @since 1.8
  Pending tests
 */
- (NSString *)getTypeName;

@end

@interface JavaLangReflectType : NSObject < JavaLangReflectType >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectType)

FOUNDATION_EXPORT NSString *JavaLangReflectType_getTypeName(id<JavaLangReflectType> self);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectType)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectType")