//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/cert/CertificateException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityCertCertificateException")
#ifdef RESTRICT_JavaSecurityCertCertificateException
#define INCLUDE_ALL_JavaSecurityCertCertificateException 0
#else
#define INCLUDE_ALL_JavaSecurityCertCertificateException 1
#endif
#undef RESTRICT_JavaSecurityCertCertificateException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityCertCertificateException_) && (INCLUDE_ALL_JavaSecurityCertCertificateException || defined(INCLUDE_JavaSecurityCertCertificateException))
#define JavaSecurityCertCertificateException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "../../../java/security/GeneralSecurityException.h"

/*!
 @brief This exception indicates one of a variety of certificate problems.
 @author Hemma Prafullchandra
 - seealso: Certificate
 */
@interface JavaSecurityCertCertificateException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a certificate exception with no detail message.
 A detail
 message is a String that describes this particular exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a certificate exception with the given detail
 message.
 A detail message is a String that describes this
 particular exception.
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>CertificateException</code> with the specified
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
 @brief Creates a <code>CertificateException</code> with the specified cause
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

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityCertCertificateException)

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_init(JavaSecurityCertCertificateException *self);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_init();

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSString_(JavaSecurityCertCertificateException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSString_withNSException_(JavaSecurityCertCertificateException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecurityCertCertificateException_initWithNSException_(JavaSecurityCertCertificateException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecurityCertCertificateException *new_JavaSecurityCertCertificateException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecurityCertCertificateException *create_JavaSecurityCertCertificateException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityCertCertificateException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityCertCertificateException")
