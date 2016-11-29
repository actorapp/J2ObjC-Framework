//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/NoConnectionPendingException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsNoConnectionPendingException")
#ifdef RESTRICT_JavaNioChannelsNoConnectionPendingException
#define INCLUDE_ALL_JavaNioChannelsNoConnectionPendingException 0
#else
#define INCLUDE_ALL_JavaNioChannelsNoConnectionPendingException 1
#endif
#undef RESTRICT_JavaNioChannelsNoConnectionPendingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsNoConnectionPendingException_) && (INCLUDE_ALL_JavaNioChannelsNoConnectionPendingException || defined(INCLUDE_JavaNioChannelsNoConnectionPendingException))
#define JavaNioChannelsNoConnectionPendingException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

/*!
 @brief Unchecked exception thrown when the <code>finishConnect</code>
  method of a <code>SocketChannel</code> is invoked without first
 successfully invoking its <code>connect</code> method.
 @since 1.4
 */
@interface JavaNioChannelsNoConnectionPendingException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNoConnectionPendingException)

FOUNDATION_EXPORT void JavaNioChannelsNoConnectionPendingException_init(JavaNioChannelsNoConnectionPendingException *self);

FOUNDATION_EXPORT JavaNioChannelsNoConnectionPendingException *new_JavaNioChannelsNoConnectionPendingException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsNoConnectionPendingException *create_JavaNioChannelsNoConnectionPendingException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNoConnectionPendingException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsNoConnectionPendingException")
