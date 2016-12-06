//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/IllegalArgumentException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIllegalArgumentException")
#ifdef RESTRICT_JavaLangIllegalArgumentException
#define INCLUDE_ALL_JavaLangIllegalArgumentException 0
#else
#define INCLUDE_ALL_JavaLangIllegalArgumentException 1
#endif
#undef RESTRICT_JavaLangIllegalArgumentException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIllegalArgumentException_) && (INCLUDE_ALL_JavaLangIllegalArgumentException || defined(INCLUDE_JavaLangIllegalArgumentException))
#define JavaLangIllegalArgumentException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief Thrown to indicate that a method has been passed an illegal or
 inappropriate argument.
 @author unascribed
 - seealso: java.lang.Thread#setPriority(int)
 @since JDK1.0
 */
@interface JavaLangIllegalArgumentException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs an <code>IllegalArgumentException</code> with no
 detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>IllegalArgumentException</code> with the
 specified detail message.
 @param s   the detail message.
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

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalArgumentException)

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_init(JavaLangIllegalArgumentException *self);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalArgumentException *create_JavaLangIllegalArgumentException_init();

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_initWithNSString_(JavaLangIllegalArgumentException *self, NSString *s);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalArgumentException *create_JavaLangIllegalArgumentException_initWithNSString_(NSString *s);

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_initWithNSString_withNSException_(JavaLangIllegalArgumentException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalArgumentException *create_JavaLangIllegalArgumentException_initWithNSString_withNSException_(NSString *message, NSException *cause);

FOUNDATION_EXPORT void JavaLangIllegalArgumentException_initWithNSException_(JavaLangIllegalArgumentException *self, NSException *cause);

FOUNDATION_EXPORT JavaLangIllegalArgumentException *new_JavaLangIllegalArgumentException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalArgumentException *create_JavaLangIllegalArgumentException_initWithNSException_(NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalArgumentException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIllegalArgumentException")
