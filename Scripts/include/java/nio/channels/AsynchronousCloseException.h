//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/AsynchronousCloseException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsAsynchronousCloseException")
#ifdef RESTRICT_JavaNioChannelsAsynchronousCloseException
#define INCLUDE_ALL_JavaNioChannelsAsynchronousCloseException 0
#else
#define INCLUDE_ALL_JavaNioChannelsAsynchronousCloseException 1
#endif
#undef RESTRICT_JavaNioChannelsAsynchronousCloseException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsAsynchronousCloseException_) && (INCLUDE_ALL_JavaNioChannelsAsynchronousCloseException || defined(INCLUDE_JavaNioChannelsAsynchronousCloseException))
#define JavaNioChannelsAsynchronousCloseException_

#define RESTRICT_JavaNioChannelsClosedChannelException 1
#define INCLUDE_JavaNioChannelsClosedChannelException 1
#include "java/nio/channels/ClosedChannelException.h"

/*!
 @brief Checked exception received by a thread when another thread closes the
 channel or the part of the channel upon which it is blocked in an I/O
 operation.
 @since 1.4
 */
@interface JavaNioChannelsAsynchronousCloseException : JavaNioChannelsClosedChannelException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsAsynchronousCloseException)

FOUNDATION_EXPORT void JavaNioChannelsAsynchronousCloseException_init(JavaNioChannelsAsynchronousCloseException *self);

FOUNDATION_EXPORT JavaNioChannelsAsynchronousCloseException *new_JavaNioChannelsAsynchronousCloseException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsAsynchronousCloseException *create_JavaNioChannelsAsynchronousCloseException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsAsynchronousCloseException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsAsynchronousCloseException")
