//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/IllegalBlockingModeException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException")
#ifdef RESTRICT_JavaNioChannelsIllegalBlockingModeException
#define INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException 0
#else
#define INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException 1
#endif
#undef RESTRICT_JavaNioChannelsIllegalBlockingModeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsIllegalBlockingModeException_) && (INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException || defined(INCLUDE_JavaNioChannelsIllegalBlockingModeException))
#define JavaNioChannelsIllegalBlockingModeException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "java/lang/IllegalStateException.h"

/*!
 @brief Unchecked exception thrown when a blocking-mode-specific operation
 is invoked upon a channel in the incorrect blocking mode.
 @since 1.4
 */
@interface JavaNioChannelsIllegalBlockingModeException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsIllegalBlockingModeException)

FOUNDATION_EXPORT void JavaNioChannelsIllegalBlockingModeException_init(JavaNioChannelsIllegalBlockingModeException *self);

FOUNDATION_EXPORT JavaNioChannelsIllegalBlockingModeException *new_JavaNioChannelsIllegalBlockingModeException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsIllegalBlockingModeException *create_JavaNioChannelsIllegalBlockingModeException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsIllegalBlockingModeException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsIllegalBlockingModeException")
