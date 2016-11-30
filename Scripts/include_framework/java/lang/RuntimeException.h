//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/RuntimeException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRuntimeException")
#ifdef RESTRICT_JavaLangRuntimeException
#define INCLUDE_ALL_JavaLangRuntimeException 0
#else
#define INCLUDE_ALL_JavaLangRuntimeException 1
#endif
#undef RESTRICT_JavaLangRuntimeException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRuntimeException_) && (INCLUDE_ALL_JavaLangRuntimeException || defined(INCLUDE_JavaLangRuntimeException))
#define JavaLangRuntimeException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

/*!
 @brief <code>RuntimeException</code> is the superclass of those
 exceptions that can be thrown during the normal operation of the
 Java Virtual Machine.
 <p><code>RuntimeException</code> and its subclasses are <em>unchecked
 exceptions</em>.  Unchecked exceptions do <em>not</em> need to be
 declared in a method or constructor's <code>throws</code> clause if they
 can be thrown by the execution of the method or constructor and
 propagate outside the method or constructor boundary.
 @author Frank Yellin
  11.2 Compile-Time Checking of Exceptions
 @since JDK1.0
 */
@interface JavaLangRuntimeException : JavaLangException

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs a new runtime exception with <code>null</code> as its
 detail message.
 The cause is not initialized, and may subsequently be
 initialized by a call to <code>initCause</code>.
 */
- (instancetype)init;

/*!
 @brief Constructs a new runtime exception with the specified detail message.
 The cause is not initialized, and may subsequently be initialized by a
 call to <code>initCause</code>.
 @param message   the detail message. The detail message is saved for
 later retrieval by the <code>getMessage()</code> method.
 */
- (instancetype)initWithNSString:(NSString *)message;

/*!
 @brief Constructs a new runtime exception with the specified detail message and
 cause.
 <p>Note that the detail message associated with
 <code>cause</code> is <i>not</i> automatically incorporated in
 this runtime exception's detail message.
 @param message the detail message (which is saved for later retrieval
 by the <code>getMessage()</code> method).
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <tt>null</tt> value is
 permitted, and indicates that the cause is nonexistent or
 unknown.)
 @since 1.4
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a new runtime exception with the specified cause and a
 detail message of <tt>(cause==null ?
 null : cause.toString())</tt>
 (which typically contains the class and detail message of
 <tt>cause</tt>).  This constructor is useful for runtime exceptions
 that are little more than wrappers for other throwables.
 @param cause the cause (which is saved for later retrieval by the
 <code>getCause()</code> method).  (A <tt>null</tt> value is
 permitted, and indicates that the cause is nonexistent or
 unknown.)
 @since 1.4
 */
- (instancetype)initWithNSException:(NSException *)cause;

#pragma mark Protected

/*!
 @brief Constructs a new runtime exception with the specified detail
 message, cause, suppression enabled or disabled, and writable
 stack trace enabled or disabled.
 @param message the detail message.
 @param cause the cause.  (A <code>null</code> value is permitted,
 and indicates that the cause is nonexistent or unknown.)
 @param enableSuppression whether or not suppression is enabled
 or disabled
 @param writableStackTrace whether or not the stack trace should
 be writable
 @since 1.7
 */
- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause
                     withBoolean:(jboolean)enableSuppression
                     withBoolean:(jboolean)writableStackTrace;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRuntimeException)

inline jlong JavaLangRuntimeException_get_serialVersionUID();
#define JavaLangRuntimeException_serialVersionUID -7034897190745766939LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangRuntimeException, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaLangRuntimeException_init(JavaLangRuntimeException *self);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_init();

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSString_(JavaLangRuntimeException *self, NSString *message);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSString_withNSException_(JavaLangRuntimeException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSException_(JavaLangRuntimeException *self, NSException *cause);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaLangRuntimeException_initWithNSString_withNSException_withBoolean_withBoolean_(JavaLangRuntimeException *self, NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

FOUNDATION_EXPORT JavaLangRuntimeException *new_JavaLangRuntimeException_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimeException *create_JavaLangRuntimeException_initWithNSString_withNSException_withBoolean_withBoolean_(NSString *message, NSException *cause, jboolean enableSuppression, jboolean writableStackTrace);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRuntimeException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangRuntimeException")
