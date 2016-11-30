//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/WritePendingException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsWritePendingException")
#ifdef RESTRICT_JavaNioChannelsWritePendingException
#define INCLUDE_ALL_JavaNioChannelsWritePendingException 0
#else
#define INCLUDE_ALL_JavaNioChannelsWritePendingException 1
#endif
#undef RESTRICT_JavaNioChannelsWritePendingException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsWritePendingException_) && (INCLUDE_ALL_JavaNioChannelsWritePendingException || defined(INCLUDE_JavaNioChannelsWritePendingException))
#define JavaNioChannelsWritePendingException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "../../../java/lang/IllegalStateException.h"

/*!
 @brief Unchecked exception thrown when an attempt is made to write to an
 asynchronous socket channel and a previous write has not completed.
 @since 1.7
 */
@interface JavaNioChannelsWritePendingException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsWritePendingException)

FOUNDATION_EXPORT void JavaNioChannelsWritePendingException_init(JavaNioChannelsWritePendingException *self);

FOUNDATION_EXPORT JavaNioChannelsWritePendingException *new_JavaNioChannelsWritePendingException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsWritePendingException *create_JavaNioChannelsWritePendingException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsWritePendingException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsWritePendingException")