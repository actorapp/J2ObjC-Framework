//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/IOException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoIOException")
#ifdef RESTRICT_JavaIoIOException
#define INCLUDE_ALL_JavaIoIOException 0
#else
#define INCLUDE_ALL_JavaIoIOException 1
#endif
#undef RESTRICT_JavaIoIOException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoIOException_) && (INCLUDE_ALL_JavaIoIOException || defined(INCLUDE_JavaIoIOException))
#define JavaIoIOException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

/*!
 @brief Signals that an I/O exception of some sort has occurred.
 This
 class is the general class of exceptions produced by failed or
 interrupted I/O operations.
 @author unascribed
 - seealso: java.io.InputStream
 - seealso: java.io.OutputStream
 @since JDK1.0
 */
@interface JavaIoIOException : JavaLangException

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs an <code>IOException</code> with <code>null</code>
 as its error detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>IOException</code> with the specified detail message.
 @param message
 The detail message (which is saved for later retrieval
 by the <code>getMessage()</code> method)
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs an <code>IOException</code> with the specified detail message
 and cause.
 <p> Note that the detail message associated with <code>cause</code> is
 <i>not</i> automatically incorporated into this exception's detail
 message.
 @param message
 The detail message (which is saved for later retrieval
 by the <code>getMessage()</code> method)
 @param cause
 The cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A null value is permitted,
 and indicates that the cause is nonexistent or unknown.)
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs an <code>IOException</code> with the specified cause and a
 detail message of <code>(cause==null ?
 null : cause.toString())</code>
 (which typically contains the class and detail message of <code>cause</code>).
 This constructor is useful for IO exceptions that are little more
 than wrappers for other throwables.
 @param cause
 The cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A null value is permitted,
 and indicates that the cause is nonexistent or unknown.)
 @since 1.6
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoIOException)

inline jlong JavaIoIOException_get_serialVersionUID();
#define JavaIoIOException_serialVersionUID 7818375828146090155LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaIoIOException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaIoIOException_init(JavaIoIOException *self);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_init();

FOUNDATION_EXPORT void JavaIoIOException_initWithNSString_(JavaIoIOException *self, NSString *message);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaIoIOException_initWithNSString_withNSException_(JavaIoIOException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaIoIOException_initWithNSException_(JavaIoIOException *self, NSException *cause);

FOUNDATION_EXPORT JavaIoIOException *new_JavaIoIOException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoIOException *create_JavaIoIOException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoIOException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoIOException")
