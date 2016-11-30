//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/security/SignatureException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySignatureException")
#ifdef RESTRICT_JavaSecuritySignatureException
#define INCLUDE_ALL_JavaSecuritySignatureException 0
#else
#define INCLUDE_ALL_JavaSecuritySignatureException 1
#endif
#undef RESTRICT_JavaSecuritySignatureException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySignatureException_) && (INCLUDE_ALL_JavaSecuritySignatureException || defined(INCLUDE_JavaSecuritySignatureException))
#define JavaSecuritySignatureException_

#define RESTRICT_JavaSecurityGeneralSecurityException 1
#define INCLUDE_JavaSecurityGeneralSecurityException 1
#include "java/security/GeneralSecurityException.h"

/*!
 @brief This is the generic Signature exception.
 @author Benjamin Renaud
 */
@interface JavaSecuritySignatureException : JavaSecurityGeneralSecurityException

#pragma mark Public

/*!
 @brief Constructs a SignatureException with no detail message.
 A
 detail message is a String that describes this particular
 exception.
 */
- (instancetype)init;

/*!
 @brief Constructs a SignatureException with the specified detail
 message.
 A detail message is a String that describes this
 particular exception.
 @param msg the detail message.
 */
- (instancetype)initWithNSString:(NSString *)msg;

/*!
 @brief Creates a <code>SignatureException</code> with the specified
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
 @brief Creates a <code>SignatureException</code> with the specified cause
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

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySignatureException)

FOUNDATION_EXPORT void JavaSecuritySignatureException_init(JavaSecuritySignatureException *self);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_init();

FOUNDATION_EXPORT void JavaSecuritySignatureException_initWithNSString_(JavaSecuritySignatureException *self, NSString *msg);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_initWithNSString_(NSString *msg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_initWithNSString_(NSString *msg);

FOUNDATION_EXPORT void JavaSecuritySignatureException_initWithNSString_withNSException_(JavaSecuritySignatureException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaSecuritySignatureException_initWithNSException_(JavaSecuritySignatureException *self, NSException *cause);

FOUNDATION_EXPORT JavaSecuritySignatureException *new_JavaSecuritySignatureException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySignatureException *create_JavaSecuritySignatureException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySignatureException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySignatureException")
