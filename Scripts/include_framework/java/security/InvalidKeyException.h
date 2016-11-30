//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/InvalidKeyException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInvalidKeyException")
#ifdef RESTRICT_JavaSecurityInvalidKeyException
#define INCLUDE_ALL_JavaSecurityInvalidKeyException 0
#else
#define INCLUDE_ALL_JavaSecurityInvalidKeyException 1
#endif
#undef RESTRICT_JavaSecurityInvalidKeyException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInvalidKeyException_) && (INCLUDE_ALL_JavaSecurityInvalidKeyException || defined(INCLUDE_JavaSecurityInvalidKeyException))
#define JavaSecurityInvalidKeyException_

#define RESTRICT_JavaSecurityKeyException 1
#define INCLUDE_JavaSecurityKeyException 1
#include "../../java/security/KeyException.h"

/*!
 @brief This is the exception for invalid Keys (invalid encoding, wrong
 length, uninitialized, etc).
 @author Benjamin Renaud
 */
@interface JavaSecurityInvalidKeyException : JavaSecurityKeyException

#pragma mark Public

/*!
 @brief Constructs an InvalidKeyException with no detail message.
 A
 detail message is a String that describes this particular
 exception.
 */
- (instancetype)init;

/*!
 @brief Constructs an InvalidKeyException with the specified detail
 message.
 A detail message is a String that describes this
 particular exception.
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>InvalidKeyException</code> with the specified
 detail message and cause.
 @param message the detail message (which is saved for later retrieval
 by the <code>getMessage()</code> method).
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <code>null</code> value is permitted,
 and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Creates a <code>InvalidKeyException</code> with the specified cause
 and a detail message of <code>(cause==null ?
 null : cause.toString())</code>
 (which typically contains the class and detail message of
 <code>cause</code>).
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <code>null</code> value is permitted,
 and indicates that the cause is nonexistent or unknown.)
 @since 1.5
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInvalidKeyException)

FOUNDATION_EXPORT void JavaSecurityInvalidKeyException_init(JavaSecurityInvalidKeyException *self);

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *new_JavaSecurityInvalidKeyException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *create_JavaSecurityInvalidKeyException_init();

FOUNDATION_EXPORT void JavaSecurityInvalidKeyException_initWithNSString_(JavaSecurityInvalidKeyException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *new_JavaSecurityInvalidKeyException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *create_JavaSecurityInvalidKeyException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityInvalidKeyException_initWithNSString_withNSException_(JavaSecurityInvalidKeyException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *new_JavaSecurityInvalidKeyException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *create_JavaSecurityInvalidKeyException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityInvalidKeyException_initWithNSException_(JavaSecurityInvalidKeyException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *new_JavaSecurityInvalidKeyException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityInvalidKeyException *create_JavaSecurityInvalidKeyException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInvalidKeyException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInvalidKeyException")