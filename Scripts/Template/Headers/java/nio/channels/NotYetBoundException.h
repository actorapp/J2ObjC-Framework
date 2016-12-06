//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/nio/channels/NotYetBoundException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsNotYetBoundException")
#ifdef RESTRICT_JavaNioChannelsNotYetBoundException
#define INCLUDE_ALL_JavaNioChannelsNotYetBoundException 0
#else
#define INCLUDE_ALL_JavaNioChannelsNotYetBoundException 1
#endif
#undef RESTRICT_JavaNioChannelsNotYetBoundException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsNotYetBoundException_) && (INCLUDE_ALL_JavaNioChannelsNotYetBoundException || defined(INCLUDE_JavaNioChannelsNotYetBoundException))
#define JavaNioChannelsNotYetBoundException_

#define RESTRICT_JavaLangIllegalStateException 1
#define INCLUDE_JavaLangIllegalStateException 1
#include "../../../java/lang/IllegalStateException.h"

/*!
 @brief Unchecked exception thrown when an attempt is made to invoke an I/O
 operation upon a server socket channel that is not yet bound.
 @since 1.4
 */
@interface JavaNioChannelsNotYetBoundException : JavaLangIllegalStateException

#pragma mark Public

/*!
 @brief Constructs an instance of this class.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsNotYetBoundException)

FOUNDATION_EXPORT void JavaNioChannelsNotYetBoundException_init(JavaNioChannelsNotYetBoundException *self);

FOUNDATION_EXPORT JavaNioChannelsNotYetBoundException *new_JavaNioChannelsNotYetBoundException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNioChannelsNotYetBoundException *create_JavaNioChannelsNotYetBoundException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsNotYetBoundException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsNotYetBoundException")
