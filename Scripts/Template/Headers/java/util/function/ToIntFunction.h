//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/ToIntFunction.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionToIntFunction")
#ifdef RESTRICT_JavaUtilFunctionToIntFunction
#define INCLUDE_ALL_JavaUtilFunctionToIntFunction 0
#else
#define INCLUDE_ALL_JavaUtilFunctionToIntFunction 1
#endif
#undef RESTRICT_JavaUtilFunctionToIntFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionToIntFunction_) && (INCLUDE_ALL_JavaUtilFunctionToIntFunction || defined(INCLUDE_JavaUtilFunctionToIntFunction))
#define JavaUtilFunctionToIntFunction_

/*!
 @brief Represents a function that produces an int-valued result.
 This is the
 <code>int</code>-producing primitive specialization for <code>Function</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>applyAsInt(Object)</code>.
 - seealso: Function
 @since 1.8
 */
@protocol JavaUtilFunctionToIntFunction < JavaObject >

/*!
 @brief Applies this function to the given argument.
 @param value the function argument
 @return the function result
 */
- (jint)applyAsIntWithId:(id)value;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionToIntFunction)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionToIntFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionToIntFunction")
