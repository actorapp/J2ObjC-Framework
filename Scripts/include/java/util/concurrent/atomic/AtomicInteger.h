//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicInteger.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicInteger")
#ifdef RESTRICT_JavaUtilConcurrentAtomicAtomicInteger
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicInteger 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicInteger 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicAtomicInteger

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentAtomicAtomicInteger_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicInteger || defined(INCLUDE_JavaUtilConcurrentAtomicAtomicInteger))
#define JavaUtilConcurrentAtomicAtomicInteger_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief An <code>int</code> value that may be updated atomically.
 See the
 <code>java.util.concurrent.atomic</code> package specification for
 description of the properties of atomic variables. An
 <code>AtomicInteger</code> is used in applications such as atomically
 incremented counters, and cannot be used as a replacement for an
 <code>java.lang.Integer</code>. However, this class does extend
 <code>Number</code> to allow uniform access by tools and utilities that
 deal with numerically-based classes.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicInteger : NSNumber < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Creates a new AtomicInteger with initial value <code>0</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new AtomicInteger with the given initial value.
 @param initialValue the initial value
 */
- (instancetype)initWithInt:(jint)initialValue;

/*!
 @brief Atomically adds the given value to the current value.
 @param delta the value to add
 @return the updated value
 */
- (jint)addAndGetWithInt:(jint)delta;

/*!
 @brief Atomically sets the value to the given updated value
 if the current value <code>==</code> the expected value.
 @param expect the expected value
 @param update the new value
 @return true if successful. False return indicates that
 the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithInt:(jint)expect
                         withInt:(jint)update;

/*!
 @brief Atomically decrements by one the current value.
 @return the updated value
 */
- (jint)decrementAndGet;

/*!
 @brief Returns the value of this <code>AtomicInteger</code> as a <code>double</code>
 after a widening primitive conversion.
 */
- (jdouble)doubleValue;

/*!
 @brief Returns the value of this <code>AtomicInteger</code> as a <code>float</code>
 after a widening primitive conversion.
 */
- (jfloat)floatValue;

/*!
 @brief Gets the current value.
 @return the current value
 */
- (jint)get;

/*!
 @brief Atomically adds the given value to the current value.
 @param delta the value to add
 @return the previous value
 */
- (jint)getAndAddWithInt:(jint)delta;

/*!
 @brief Atomically decrements by one the current value.
 @return the previous value
 */
- (jint)getAndDecrement;

/*!
 @brief Atomically increments by one the current value.
 @return the previous value
 */
- (jint)getAndIncrement;

/*!
 @brief Atomically sets to the given value and returns the old value.
 @param newValue the new value
 @return the previous value
 */
- (jint)getAndSetWithInt:(jint)newValue;

/*!
 @brief Atomically increments by one the current value.
 @return the updated value
 */
- (jint)incrementAndGet;

/*!
 @brief Returns the value of this <code>AtomicInteger</code> as an <code>int</code>.
 */
- (jint)intValue;

/*!
 @brief Eventually sets to the given value.
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithInt:(jint)newValue;

/*!
 @brief Returns the value of this <code>AtomicInteger</code> as a <code>long</code>
 after a widening primitive conversion.
 */
- (jlong)longLongValue;

/*!
 @brief Sets to the given value.
 @param newValue the new value
 */
- (void)setWithInt:(jint)newValue;

/*!
 @brief Returns the String representation of the current value.
 @return the String representation of the current value
 */
- (NSString *)description;

/*!
 @brief Atomically sets the value to the given updated value
 if the current value <code>==</code> the expected value.
 <p><a href="package-summary.html#weakCompareAndSet">May fail
 spuriously and does not provide ordering guarantees</a>, so is
 only rarely an appropriate alternative to <code>compareAndSet</code>.
 @param expect the expected value
 @param update the new value
 @return true if successful
 */
- (jboolean)weakCompareAndSetWithInt:(jint)expect
                             withInt:(jint)update;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentAtomicAtomicInteger)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicInteger_initWithInt_(JavaUtilConcurrentAtomicAtomicInteger *self, jint initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *new_JavaUtilConcurrentAtomicAtomicInteger_initWithInt_(jint initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *create_JavaUtilConcurrentAtomicAtomicInteger_initWithInt_(jint initialValue);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicInteger_init(JavaUtilConcurrentAtomicAtomicInteger *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *new_JavaUtilConcurrentAtomicAtomicInteger_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicInteger *create_JavaUtilConcurrentAtomicAtomicInteger_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicInteger)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicInteger")
