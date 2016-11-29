//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/IntToLongFunction.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionIntToLongFunction")
#ifdef RESTRICT_JavaUtilFunctionIntToLongFunction
#define INCLUDE_ALL_JavaUtilFunctionIntToLongFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionIntToLongFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionIntToLongFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionIntToLongFunction_) && (INCLUDE_ALL_JavaUtilFunctionIntToLongFunction || defined(INCLUDE_JavaUtilFunctionIntToLongFunction))
#define JavaUtilFunctionIntToLongFunction_

/*!
 @brief Represents a function that accepts an int-valued argument and produces a
 long-valued result.
 This is the <code>int</code>-to-<code>long</code> primitive
 specialization for <code>Function</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>applyAsLong(int)</code>.
 - seealso: Function
 @since 1.8
 */
@protocol JavaUtilFunctionIntToLongFunction < JavaObject >

/*!
 @brief Applies this function to the given argument.
 @param value the function argument
 @return the function result
 */
- (jlong)applyAsLongWithInt:(jint)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionIntToLongFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionIntToLongFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionIntToLongFunction")
