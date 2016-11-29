//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/UnaryOperator.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionUnaryOperator")
#ifdef RESTRICT_JavaUtilFunctionUnaryOperator
#define INCLUDE_ALL_JavaUtilFunctionUnaryOperator 0
#else
#define INCLUDE_ALL_JavaUtilFunctionUnaryOperator 1
#endif
#undef RESTRICT_JavaUtilFunctionUnaryOperator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionUnaryOperator_) && (INCLUDE_ALL_JavaUtilFunctionUnaryOperator || defined(INCLUDE_JavaUtilFunctionUnaryOperator))
#define JavaUtilFunctionUnaryOperator_

#define RESTRICT_JavaUtilFunctionFunction 1
#define INCLUDE_JavaUtilFunctionFunction 1
#include "../../../java/util/function/Function.h"

/*!
 @brief Represents an operation on a single operand that produces a result of the
 same type as its operand.
 This is a specialization of <code>Function</code> for
 the case where the operand and result are of the same type.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>apply(Object)</code>.
 - seealso: Function
 @since 1.8
 */
@protocol JavaUtilFunctionUnaryOperator < JavaUtilFunctionFunction, JavaObject >

@end

@interface JavaUtilFunctionUnaryOperator : NSObject < JavaUtilFunctionUnaryOperator >

/*!
 @brief Returns a unary operator that always returns its input argument.
 @return a unary operator that always returns its input argument
 */
+ (id<JavaUtilFunctionUnaryOperator>)identity;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionUnaryOperator)

FOUNDATION_EXPORT id<JavaUtilFunctionUnaryOperator> JavaUtilFunctionUnaryOperator_identity();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionUnaryOperator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionUnaryOperator")
