//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/NoRouteToHostException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetNoRouteToHostException")
#ifdef RESTRICT_JavaNetNoRouteToHostException
#define INCLUDE_ALL_JavaNetNoRouteToHostException 0
#else
#define INCLUDE_ALL_JavaNetNoRouteToHostException 1
#endif
#undef RESTRICT_JavaNetNoRouteToHostException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetNoRouteToHostException_) && (INCLUDE_ALL_JavaNetNoRouteToHostException || defined(INCLUDE_JavaNetNoRouteToHostException))
#define JavaNetNoRouteToHostException_

#define RESTRICT_JavaNetSocketException 1
#define INCLUDE_JavaNetSocketException 1
#include "../../java/net/SocketException.h"

/*!
 @brief Signals that an error occurred while attempting to connect a
 socket to a remote address and port.
 Typically, the remote
 host cannot be reached because of an intervening firewall, or
 if an intermediate router is down.
 @since JDK1.1
 */
@interface JavaNetNoRouteToHostException : JavaNetSocketException

#pragma mark Public

/*!
 @brief Construct a new NoRouteToHostException with no detailed message.
 */
- (instancetype)init;

/*!
 @brief Constructs a new NoRouteToHostException with the specified detail
 message as to why the remote host cannot be reached.
 A detail message is a String that gives a specific
 description of this error.
 @param msg the detail message
 */
- (instancetype)initWithNSString:(NSString *)msg;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetNoRouteToHostException)

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_initWithNSString_(JavaNetNoRouteToHostException *self, NSString *msg);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetNoRouteToHostException *create_JavaNetNoRouteToHostException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaNetNoRouteToHostException_init(JavaNetNoRouteToHostException *self);

FOUNDATION_EXPORT JavaNetNoRouteToHostException *new_JavaNetNoRouteToHostException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetNoRouteToHostException *create_JavaNetNoRouteToHostException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaNetNoRouteToHostException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetNoRouteToHostException")
