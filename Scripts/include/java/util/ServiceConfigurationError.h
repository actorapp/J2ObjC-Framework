//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/ServiceConfigurationError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilServiceConfigurationError")
#ifdef RESTRICT_JavaUtilServiceConfigurationError
#define INCLUDE_ALL_JavaUtilServiceConfigurationError 0
#else
#define INCLUDE_ALL_JavaUtilServiceConfigurationError 1
#endif
#undef RESTRICT_JavaUtilServiceConfigurationError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilServiceConfigurationError_) && (INCLUDE_ALL_JavaUtilServiceConfigurationError || defined(INCLUDE_JavaUtilServiceConfigurationError))
#define JavaUtilServiceConfigurationError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "java/lang/Error.h"

/*!
 @brief Error thrown when something goes wrong while loading a service provider.
 <p> This error will be thrown in the following situations:
 <ul>
 <li> The format of a provider-configuration file violates the <a
 href="ServiceLoader.html#format">specification</a>; </li>
 <li> An <code>IOException</code> occurs while reading a
 provider-configuration file; </li>
 <li> A concrete provider class named in a provider-configuration file
 cannot be found; </li>
 <li> A concrete provider class is not a subclass of the service class;
 </li>
 <li> A concrete provider class cannot be instantiated; or
 <li> Some other kind of error occurs. </li>
 </ul>
 @author Mark Reinhold
 @since 1.6
 */
@interface JavaUtilServiceConfigurationError : JavaLangError

#pragma mark Public

/*!
 @brief Constructs a new instance with the specified message.
 @param msg  The message, or <tt>null</tt> if there is no message
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance with the specified message and cause.
 @param msg  The message, or <tt>null</tt> if there is no message
 @param cause  The cause, or <tt>null</tt> if the cause is nonexistent
 or unknown
 */
- (instancetype)initWithNSString:(NSString *)msg
                 withNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilServiceConfigurationError)

FOUNDATION_EXPORT void JavaUtilServiceConfigurationError_initWithNSString_(JavaUtilServiceConfigurationError *self, NSString *msg);

FOUNDATION_EXPORT JavaUtilServiceConfigurationError *new_JavaUtilServiceConfigurationError_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilServiceConfigurationError *create_JavaUtilServiceConfigurationError_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaUtilServiceConfigurationError_initWithNSString_withNSException_(JavaUtilServiceConfigurationError *self, NSString *msg, NSException *cause);

FOUNDATION_EXPORT JavaUtilServiceConfigurationError *new_JavaUtilServiceConfigurationError_initWithNSString_withNSException_(NSString *msg, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilServiceConfigurationError *create_JavaUtilServiceConfigurationError_initWithNSString_withNSException_(NSString *msg, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilServiceConfigurationError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilServiceConfigurationError")
