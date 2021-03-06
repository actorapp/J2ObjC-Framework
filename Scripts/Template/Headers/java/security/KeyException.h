//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/KeyException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityKeyException")
#ifdef RESTRICT_JavaSecurityKeyException
#define INCLUDE_ALL_JavaSecurityKeyException 0
#else
#define INCLUDE_ALL_JavaSecurityKeyException 1
#endif
#undef RESTRICT_JavaSecurityKeyException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityKeyException_) && (INCLUDE_ALL_JavaSecurityKeyException || defined(INCLUDE_JavaSecurityKeyException))
#define JavaSecurityKeyException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../java/security/GeneralSecurityException.h"

/*!
 @brief <code>KeyException</code> is the common superclass of all key related exceptions.
 */
@interface JavaSecurityKeyException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a new instance of <code>KeyException</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new instance of <code>KeyException</code> with the given message.
 @param msg
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Constructs a new instance of <code>KeyException</code> with the given message
 and the cause.
 @param message
 the detail message for this exception.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new instance of <code>KeyException</code> with the cause.
 @param cause
 the exception which is the cause for this exception.
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityKeyException)

FOUNDATION_EXPORT void JavaSecurityKeyException_initWithNSString_(JavaSecurityKeyException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityKeyException_init(JavaSecurityKeyException *self);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_init();

FOUNDATION_EXPORT void JavaSecurityKeyException_initWithNSString_withNSException_(JavaSecurityKeyException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityKeyException_initWithNSException_(JavaSecurityKeyException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityKeyException *new_JavaSecurityKeyException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityKeyException *create_JavaSecurityKeyException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityKeyException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityKeyException")
