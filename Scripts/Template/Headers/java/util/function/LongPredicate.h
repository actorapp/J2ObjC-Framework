//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/LongPredicate.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionLongPredicate")
#ifdef RESTRICT_JavaUtilFunctionLongPredicate
#define INCLUDE_ALL_JavaUtilFunctionLongPredicate 0
#else
#define INCLUDE_ALL_JavaUtilFunctionLongPredicate 1
#endif
#undef RESTRICT_JavaUtilFunctionLongPredicate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionLongPredicate_) && (INCLUDE_ALL_JavaUtilFunctionLongPredicate || defined(INCLUDE_JavaUtilFunctionLongPredicate))
#define JavaUtilFunctionLongPredicate_

/*!
 @brief Represents a predicate (boolean-valued function) of one <code>long</code>-valued
 argument.
 This is the <code>long</code>-consuming primitive type specialization of
 <code>Predicate</code>.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>test(long)</code>.
 - seealso: Predicate
 @since 1.8
 */
@protocol JavaUtilFunctionLongPredicate < JavaObject >

/*!
 @brief Evaluates this predicate on the given argument.
 @param value the input argument
 @return <code>true</code> if the input argument matches the predicate,
 otherwise <code>false</code>
 */
- (jboolean)testWithLong:(jlong)value;

/*!
 @brief Returns a composed predicate that represents a short-circuiting logical
 AND of this predicate and another.
 When evaluating the composed
 predicate, if this predicate is <code>false</code>, then the <code>other</code>
 predicate is not evaluated.
 <p>Any exceptions thrown during evaluation of either predicate are relayed
 to the caller; if evaluation of this predicate throws an exception, the
 <code>other</code> predicate will not be evaluated.
 @param other a predicate that will be logically-ANDed with this
 predicate
 @return a composed predicate that represents the short-circuiting logical
 AND of this predicate and the <code>other</code> predicate
 @throws NullPointerException if other is null
 */
- (id<JavaUtilFunctionLongPredicate>)and__WithJavaUtilFunctionLongPredicate:(id<JavaUtilFunctionLongPredicate>)other;

/*!
 @brief Returns a predicate that represents the logical negation of this
 predicate.
 @return a predicate that represents the logical negation of this
 predicate
 */
- (id<JavaUtilFunctionLongPredicate>)negate;

/*!
 @brief Returns a composed predicate that represents a short-circuiting logical
 OR of this predicate and another.
 When evaluating the composed
 predicate, if this predicate is <code>true</code>, then the <code>other</code>
 predicate is not evaluated.
 <p>Any exceptions thrown during evaluation of either predicate are relayed
 to the caller; if evaluation of this predicate throws an exception, the
 <code>other</code> predicate will not be evaluated.
 @param other a predicate that will be logically-ORed with this
 predicate
 @return a composed predicate that represents the short-circuiting logical
 OR of this predicate and the <code>other</code> predicate
 @throws NullPointerException if other is null
 */
- (id<JavaUtilFunctionLongPredicate>)or__WithJavaUtilFunctionLongPredicate:(id<JavaUtilFunctionLongPredicate>)other;

@end

@interface JavaUtilFunctionLongPredicate : NSObject < JavaUtilFunctionLongPredicate >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionLongPredicate)

FOUNDATION_EXPORT id<JavaUtilFunctionLongPredicate> JavaUtilFunctionLongPredicate_and__WithJavaUtilFunctionLongPredicate_(id<JavaUtilFunctionLongPredicate> self, id<JavaUtilFunctionLongPredicate> other);

FOUNDATION_EXPORT id<JavaUtilFunctionLongPredicate> JavaUtilFunctionLongPredicate_negate(id<JavaUtilFunctionLongPredicate> self);

FOUNDATION_EXPORT id<JavaUtilFunctionLongPredicate> JavaUtilFunctionLongPredicate_or__WithJavaUtilFunctionLongPredicate_(id<JavaUtilFunctionLongPredicate> self, id<JavaUtilFunctionLongPredicate> other);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionLongPredicate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionLongPredicate")
