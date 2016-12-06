//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/atomic/AtomicLong.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicLong")
#ifdef RESTRICT_JavaUtilConcurrentAtomicAtomicLong
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicLong 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicLong 1
#endif
#undef RESTRICT_JavaUtilConcurrentAtomicAtomicLong

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentAtomicAtomicLong_) && (INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicLong || defined(INCLUDE_JavaUtilConcurrentAtomicAtomicLong))
#define JavaUtilConcurrentAtomicAtomicLong_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

/*!
 @brief A <code>long</code> value that may be updated atomically.
 See the
 <code>java.util.concurrent.atomic</code> package specification for
 description of the properties of atomic variables. An
 <code>AtomicLong</code> is used in applications such as atomically
 incremented sequence numbers, and cannot be used as a replacement
 for a <code>java.lang.Long</code>. However, this class does extend
 <code>Number</code> to allow uniform access by tools and utilities that
 deal with numerically-based classes.
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentAtomicAtomicLong : NSNumber < JavaIoSerializable >

+ (jboolean)VM_SUPPORTS_LONG_CAS;

#pragma mark Public

/*!
 @brief Creates a new AtomicLong with initial value <code>0</code>.
 */
- (instancetype)init;

/*!
 @brief Creates a new AtomicLong with the given initial value.
 @param initialValue the initial value
 */
- (instancetype)initWithLong:(jlong)initialValue;

/*!
 @brief Atomically adds the given value to the current value.
 @param delta the value to add
 @return the updated value
 */
- (jlong)addAndGetWithLong:(jlong)delta;

/*!
 @brief Atomically sets the value to the given updated value
 if the current value <code>==</code> the expected value.
 @param expect the expected value
 @param update the new value
 @return true if successful. False return indicates that
 the actual value was not equal to the expected value.
 */
- (jboolean)compareAndSetWithLong:(jlong)expect
                         withLong:(jlong)update;

/*!
 @brief Atomically decrements by one the current value.
 @return the updated value
 */
- (jlong)decrementAndGet;

/*!
 @brief Returns the value of this <code>AtomicLong</code> as a <code>double</code>
 after a widening primitive conversion.
 */
- (jdouble)doubleValue;

/*!
 @brief Returns the value of this <code>AtomicLong</code> as a <code>float</code>
 after a widening primitive conversion.
 */
- (jfloat)floatValue;

/*!
 @brief Gets the current value.
 @return the current value
 */
- (jlong)get;

/*!
 @brief Atomically adds the given value to the current value.
 @param delta the value to add
 @return the previous value
 */
- (jlong)getAndAddWithLong:(jlong)delta;

/*!
 @brief Atomically decrements by one the current value.
 @return the previous value
 */
- (jlong)getAndDecrement;

/*!
 @brief Atomically increments by one the current value.
 @return the previous value
 */
- (jlong)getAndIncrement;

/*!
 @brief Atomically sets to the given value and returns the old value.
 @param newValue the new value
 @return the previous value
 */
- (jlong)getAndSetWithLong:(jlong)newValue;

/*!
 @brief Atomically increments by one the current value.
 @return the updated value
 */
- (jlong)incrementAndGet;

/*!
 @brief Returns the value of this <code>AtomicLong</code> as an <code>int</code>
 after a narrowing primitive conversion.
 */
- (jint)intValue;

/*!
 @brief Eventually sets to the given value.
 @param newValue the new value
 @since 1.6
 */
- (void)lazySetWithLong:(jlong)newValue;

/*!
 @brief Returns the value of this <code>AtomicLong</code> as a <code>long</code>.
 */
- (jlong)longLongValue;

/*!
 @brief Sets to the given value.
 @param newValue the new value
 */
- (void)setWithLong:(jlong)newValue;

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
- (jboolean)weakCompareAndSetWithLong:(jlong)expect
                             withLong:(jlong)update;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentAtomicAtomicLong)

/*!
 @brief Records whether the underlying JVM supports lockless
 compareAndSwap for longs.
 While the Unsafe.compareAndSwapLong
 method works in either case, some constructions should be
 handled at Java level to avoid locking user-visible locks.
 */
inline jboolean JavaUtilConcurrentAtomicAtomicLong_get_VM_SUPPORTS_LONG_CAS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT jboolean JavaUtilConcurrentAtomicAtomicLong_VM_SUPPORTS_LONG_CAS;
J2OBJC_STATIC_FIELD_PRIMITIVE_FINAL(JavaUtilConcurrentAtomicAtomicLong, VM_SUPPORTS_LONG_CAS, jboolean)

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicLong_initWithLong_(JavaUtilConcurrentAtomicAtomicLong *self, jlong initialValue);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLong *new_JavaUtilConcurrentAtomicAtomicLong_initWithLong_(jlong initialValue) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLong *create_JavaUtilConcurrentAtomicAtomicLong_initWithLong_(jlong initialValue);

FOUNDATION_EXPORT void JavaUtilConcurrentAtomicAtomicLong_init(JavaUtilConcurrentAtomicAtomicLong *self);

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLong *new_JavaUtilConcurrentAtomicAtomicLong_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentAtomicAtomicLong *create_JavaUtilConcurrentAtomicAtomicLong_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentAtomicAtomicLong)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentAtomicAtomicLong")
