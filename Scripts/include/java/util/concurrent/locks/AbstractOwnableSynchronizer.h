//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/locks/AbstractOwnableSynchronizer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentLocksAbstractOwnableSynchronizer")
#ifdef RESTRICT_JavaUtilConcurrentLocksAbstractOwnableSynchronizer
#define INCLUDE_ALL_JavaUtilConcurrentLocksAbstractOwnableSynchronizer 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentLocksAbstractOwnableSynchronizer 1
#endif
#undef RESTRICT_JavaUtilConcurrentLocksAbstractOwnableSynchronizer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentLocksAbstractOwnableSynchronizer_) && (INCLUDE_ALL_JavaUtilConcurrentLocksAbstractOwnableSynchronizer || defined(INCLUDE_JavaUtilConcurrentLocksAbstractOwnableSynchronizer))
#define JavaUtilConcurrentLocksAbstractOwnableSynchronizer_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaLangThread;

/*!
 @brief A synchronizer that may be exclusively owned by a thread.
 This
 class provides a basis for creating locks and related synchronizers
 that may entail a notion of ownership.  The
 <tt>AbstractOwnableSynchronizer</tt> class itself does not manage or
 use this information. However, subclasses and tools may use
 appropriately maintained values to help control and monitor access
 and provide diagnostics.
 @since 1.6
 @author Doug Lea
 */
@interface JavaUtilConcurrentLocksAbstractOwnableSynchronizer : NSObject < JavaIoSerializable >

#pragma mark Protected

/*!
 @brief Empty constructor for use by subclasses.
 */
- (instancetype)init;

/*!
 @brief Returns the thread last set by
 <tt>setExclusiveOwnerThread</tt>, or <tt>null</tt> if never
 set.
 This method does not otherwise impose any synchronization
 or <tt>volatile</tt> field accesses.
 @return the owner thread
 */
- (JavaLangThread *)getExclusiveOwnerThread;

/*!
 @brief Sets the thread that currently owns exclusive access.
 A
 <tt>null</tt> argument indicates that no thread owns access.
 This method does not otherwise impose any synchronization or
 <tt>volatile</tt> field accesses.
 */
- (void)setExclusiveOwnerThreadWithJavaLangThread:(JavaLangThread *)t;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentLocksAbstractOwnableSynchronizer)

FOUNDATION_EXPORT void JavaUtilConcurrentLocksAbstractOwnableSynchronizer_init(JavaUtilConcurrentLocksAbstractOwnableSynchronizer *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentLocksAbstractOwnableSynchronizer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentLocksAbstractOwnableSynchronizer")
