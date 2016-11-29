//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/LongFunction.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionLongFunction")
#ifdef RESTRICT_JavaUtilFunctionLongFunction
#define INCLUDE_ALL_JavaUtilFunctionLongFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionLongFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionLongFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionLongFunction_) && (INCLUDE_ALL_JavaUtilFunctionLongFunction || defined(INCLUDE_JavaUtilFunctionLongFunction))
#define JavaUtilFunctionLongFunction_

/*!
 @brief Represents a function that accepts a long-valued argument and produces a
 result.
 This is the <code>long</code>-consuming primitive specialization for
 <code>Function</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>apply(long)</code>.
 - seealso: Function
 @since 1.8
 */
@protocol JavaUtilFunctionLongFunction < JavaObject >

/*!
 @brief Applies this function to the given argument.
 @param value the function argument
 @return the function result
 */
- (id)applyWithLong:(jlong)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionLongFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionLongFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionLongFunction")
