//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/OptionalLong.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilOptionalLong")
#ifdef RESTRICT_JavaUtilOptionalLong
#define INCLUDE_ALL_JavaUtilOptionalLong 0
#else
#define INCLUDE_ALL_JavaUtilOptionalLong 1
#endif
#undef RESTRICT_JavaUtilOptionalLong

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilOptionalLong_) && (INCLUDE_ALL_JavaUtilOptionalLong || defined(INCLUDE_JavaUtilOptionalLong))
#define JavaUtilOptionalLong_

@protocol JavaUtilFunctionLongConsumer;
@protocol JavaUtilFunctionLongSupplier;
@protocol JavaUtilFunctionSupplier;

/*!
 @brief A container object which may or may not contain a <code>long</code> value.
 If a value is present, <code>isPresent()</code> will return <code>true</code> and
 <code>getAsLong()</code> will return the value.
 <p>Additional methods that depend on the presence or absence of a contained
 value are provided, such as <code>orElse()</code>
 (return a default value if value not present) and
 <code>ifPresent()</code> (execute a block
 of code if the value is present).
 @since 1.8
 */
@interface JavaUtilOptionalLong : NSObject

#pragma mark Public

/*!
 @brief Returns an empty <code>OptionalLong</code> instance.
 No value is present for this
 OptionalLong.
  Though it may be tempting to do so, avoid testing if an object
 is empty by comparing with <code>==</code> against instances returned by
 <code>Option.empty()</code>. There is no guarantee that it is a singleton.
 Instead, use <code>isPresent()</code>.
 @return an empty <code>OptionalLong</code>.
 */
+ (JavaUtilOptionalLong *)empty;

/*!
 @brief Indicates whether some other object is "equal to" this OptionalLong.
 The
 other object is considered equal if:
 <ul>
 <li>it is also an <code>OptionalLong</code> and;
 <li>both instances have no value present or;
 <li>the present values are "equal to" each other via <code>==</code>.
 </ul>
 @param obj an object to be tested for equality
 @return {code true} if the other object is "equal to" this object
 otherwise <code>false</code>
 */
- (jboolean)isEqual:(id)obj;

/*!
 @brief If a value is present in this <code>OptionalLong</code>, returns the value,
 otherwise throws <code>NoSuchElementException</code>.
 @return the value held by this <code>OptionalLong</code>
 @throws NoSuchElementException if there is no value present
 - seealso: OptionalLong#isPresent()
 */
- (jlong)getAsLong;

/*!
 @brief Returns the hash code value of the present value, if any, or 0 (zero) if
 no value is present.
 @return hash code value of the present value or 0 if no value is present
 */
- (NSUInteger)hash;

/*!
 @brief Have the specified consumer accept the value if a value is present,
 otherwise do nothing.
 @param consumer block to be executed if a value is present
 @throws NullPointerException if value is present and <code>consumer</code> is
 null
 */
- (void)ifPresentWithJavaUtilFunctionLongConsumer:(id<JavaUtilFunctionLongConsumer>)consumer;

/*!
 @brief Return <code>true</code> if there is a value present, otherwise <code>false</code>.
 @return <code>true</code> if there is a value present, otherwise <code>false</code>
 */
- (jboolean)isPresent;

/*!
 @brief Return an <code>OptionalLong</code> with the specified value present.
 @param value the value to be present
 @return an <code>OptionalLong</code> with the value present
 */
+ (JavaUtilOptionalLong *)ofWithLong:(jlong)value;

/*!
 @brief Return the value if present, otherwise return <code>other</code>.
 @param other the value to be returned if there is no value present
 @return the value, if present, otherwise <code>other</code>
 */
- (jlong)orElseWithLong:(jlong)other;

/*!
 @brief Return the value if present, otherwise invoke <code>other</code> and return
 the result of that invocation.
 @param other a <code>LongSupplier</code> whose result is returned if no value
 is present
 @return the value if present otherwise the result of <code>other.getAsLong()</code>
 @throws NullPointerException if value is not present and <code>other</code> is
 null
 */
- (jlong)orElseGetWithJavaUtilFunctionLongSupplier:(id<JavaUtilFunctionLongSupplier>)other;

/*!
 @brief Return the contained value, if present, otherwise throw an exception
 to be created by the provided supplier.
  A method reference to the exception constructor with an empty
 argument list can be used as the supplier. For example,
 <code>IllegalStateException::new</code>
 @param exceptionSupplier The supplier which will return the exception to
 be thrown
 @return the present value
 @throws X if there is no value present
 @throws NullPointerException if no value is present and
 <code>exceptionSupplier</code> is null
 */
- (jlong)orElseThrowWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)exceptionSupplier;

/*!
 @brief 
 Returns a non-empty string representation of this object suitable for
 debugging.
 The exact presentation format is unspecified and may vary
 between implementations and versions.
  If a value is present the result must include its string
 representation in the result. Empty and present instances must be
 unambiguously differentiable.
 @return the string representation of this instance
 */
- (NSString *)description;

@end

J2OBJC_STATIC_INIT(JavaUtilOptionalLong)

FOUNDATION_EXPORT JavaUtilOptionalLong *JavaUtilOptionalLong_empty();

FOUNDATION_EXPORT JavaUtilOptionalLong *JavaUtilOptionalLong_ofWithLong_(jlong value);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilOptionalLong)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilOptionalLong")