//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/IllegalStateException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIllegalStateException")
#ifdef RESTRICT_JavaLangIllegalStateException
#define INCLUDE_ALL_JavaLangIllegalStateException 0
#else
#define INCLUDE_ALL_JavaLangIllegalStateException 1
#endif
#undef RESTRICT_JavaLangIllegalStateException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIllegalStateException_) && (INCLUDE_ALL_JavaLangIllegalStateException || defined(INCLUDE_JavaLangIllegalStateException))
#define JavaLangIllegalStateException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief Signals that a method has been invoked at an illegal or
 inappropriate time.
 In other words, the Java environment or
 Java application is not in an appropriate state for the requested
 operation.
 @author Jonni Kanerva
 @since JDK1.1
 */
@interface JavaLangIllegalStateException : JavaLangRuntimeException

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs an IllegalStateException with no detail message.
 A detail message is a String that describes this particular exception.
 */
- (instancetype)init;

/*!
 @brief Constructs an IllegalStateException with the specified detail
 message.
 A detail message is a String that describes this particular
 exception.
 @param s the String that contains a detailed message
 */
- (instancetype)initWithNSString:(NSString *)s;

/*!
 @brief Constructs a new exception with the specified detail message and
 cause.
 <p>Note that the detail message associated with <code>cause</code> is
 <i>not</i> automatically incorporated in this exception's detail
 message.
 @param message the detail message (which is saved for later retrieval
 by the <code>Throwable.getMessage()</code> method).
 @param cause the cause (which is saved for later retrieval by the
 <code>Throwable.getCause()</code> method).  (A <tt>null</tt> value
 is permitted, and indicates that the cause is nonexistent or
 unknown.)
 @since 1.5
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new exception with the specified cause and a detail
 message of <tt>(cause==null ?
 null : cause.toString())</tt> (which
 typically contains the class and detail message of <tt>cause</tt>).
 This constructor is useful for exceptions that are little more than
 wrappers for other throwables (for example, <code>java.security.PrivilegedActionException</code>
 ).
 @param cause the cause (which is saved for later retrieval by the
 <code>Throwable.getCause()</code> method).  (A <tt>null</tt> value is
 permitted, and indicates that the cause is nonexistent or
 unknown.)
 @since 1.5
 */
- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalStateException)

inline jlong JavaLangIllegalStateException_get_serialVersionUID();
#define JavaLangIllegalStateException_serialVersionUID -1848914673093119416LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangIllegalStateException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaLangIllegalStateException_init(JavaLangIllegalStateException *self);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalStateException *create_JavaLangIllegalStateException_init();

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithNSString_(JavaLangIllegalStateException *self, NSString *s);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalStateException *create_JavaLangIllegalStateException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithNSString_withNSException_(JavaLangIllegalStateException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalStateException *create_JavaLangIllegalStateException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaLangIllegalStateException_initWithNSException_(JavaLangIllegalStateException *self, NSException *cause);

FOUNDATION_EXPORT JavaLangIllegalStateException *new_JavaLangIllegalStateException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalStateException *create_JavaLangIllegalStateException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalStateException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIllegalStateException")
