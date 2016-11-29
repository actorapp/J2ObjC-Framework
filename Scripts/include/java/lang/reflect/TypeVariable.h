//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/reflect/TypeVariable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangReflectTypeVariable")
#ifdef RESTRICT_JavaLangReflectTypeVariable
#define INCLUDE_ALL_JavaLangReflectTypeVariable 0
#else
#define INCLUDE_ALL_JavaLangReflectTypeVariable 1
#endif
#undef RESTRICT_JavaLangReflectTypeVariable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangReflectTypeVariable_) && (INCLUDE_ALL_JavaLangReflectTypeVariable || defined(INCLUDE_JavaLangReflectTypeVariable))
#define JavaLangReflectTypeVariable_

#define RESTRICT_JavaLangReflectType 1
#define INCLUDE_JavaLangReflectType 1
#include "java/lang/reflect/Type.h"

@class IOSObjectArray;
@protocol JavaLangReflectGenericDeclaration;

/*!
 @brief This interface represents a type variables such as <code>'T'</code> in <code>'public interface Comparable<T>'</code>
 , the bounded <code>'T'</code> in <code>'public interface A<T extends Number>'</code>
  or the multiple bounded <code>'T'</code>
  in <code>'public interface B<T extends Number & Cloneable>'</code>.
 @since 1.5
 */
@protocol JavaLangReflectTypeVariable < JavaLangReflectType, JavaObject >

/*!
 @brief Returns the upper bounds of this type variable.
 <code>Object</code> is the
 implicit upper bound if no other bounds are declared.
 @return the upper bounds of this type variable
 @throws TypeNotPresentException
 if any of the bounds points to a missing type
 @throws MalformedParameterizedTypeException
 if any of the bounds points to a type that cannot be
 instantiated for some reason
 */
- (IOSObjectArray *)getBounds;

/*!
 @brief Returns the language construct that declares this type variable.
 @return the generic declaration
 */
- (id<JavaLangReflectGenericDeclaration>)getGenericDeclaration;

/*!
 @brief Returns the name of this type variable as it is specified in source
 code.
 @return the name of this type variable
 */
- (NSString *)getName;

@end

@interface JavaLangReflectTypeVariable : NSObject < JavaLangReflectTypeVariable >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangReflectTypeVariable)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangReflectTypeVariable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangReflectTypeVariable")
