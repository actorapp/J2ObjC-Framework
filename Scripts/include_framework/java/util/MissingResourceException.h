//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/MissingResourceException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilMissingResourceException")
#ifdef RESTRICT_JavaUtilMissingResourceException
#define INCLUDE_ALL_JavaUtilMissingResourceException 0
#else
#define INCLUDE_ALL_JavaUtilMissingResourceException 1
#endif
#undef RESTRICT_JavaUtilMissingResourceException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilMissingResourceException_) && (INCLUDE_ALL_JavaUtilMissingResourceException || defined(INCLUDE_JavaUtilMissingResourceException))
#define JavaUtilMissingResourceException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../java/lang/RuntimeException.h"

/*!
 @brief Signals that a resource is missing.
 - seealso: java.lang.Exception
 - seealso: ResourceBundle
 @author Mark Davis
 @since JDK1.1
 */
@interface JavaUtilMissingResourceException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a MissingResourceException with the specified information.
 A detail message is a String that describes this particular exception.
 @param s the detail message
 @param className_ the name of the resource class
 @param key the key for the missing resource.
 */
- (instancetype)initWithNSString:(NSString *)s
                    withNSString:(NSString *)className_
                    withNSString:(NSString *)key;

/*!
 @brief Gets parameter passed by constructor.
 @return the name of the resource class
 */
- (NSString *)getClassName;

/*!
 @brief Gets parameter passed by constructor.
 @return the key for the missing resource
 */
- (NSString *)getKey;

#pragma mark Package-Private

/*!
 @brief Constructs a <code>MissingResourceException</code> with
 <code>message</code>, <code>className</code>, <code>key</code>,
 and <code>cause</code>.
 This constructor is package private for
 use by <code>ResourceBundle.getBundle</code>.
 @param message
 the detail message
 @param className_
 the name of the resource class
 @param key
 the key for the missing resource.
 @param cause
 the cause (which is saved for later retrieval by the
 <code>Throwable.getCause()</code> method). (A null value is
 permitted, and indicates that the cause is nonexistent
 or unknown.)
 */
- (instancetype)initWithNSString:(NSString *)message
                    withNSString:(NSString *)className_
                    withNSString:(NSString *)key
                 withNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilMissingResourceException)

FOUNDATION_EXPORT void JavaUtilMissingResourceException_initWithNSString_withNSString_withNSString_(JavaUtilMissingResourceException *self, NSString *s, NSString *className_, NSString *key);

FOUNDATION_EXPORT JavaUtilMissingResourceException *new_JavaUtilMissingResourceException_initWithNSString_withNSString_withNSString_(NSString *s, NSString *className_, NSString *key) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilMissingResourceException *create_JavaUtilMissingResourceException_initWithNSString_withNSString_withNSString_(NSString *s, NSString *className_, NSString *key);

FOUNDATION_EXPORT void JavaUtilMissingResourceException_initWithNSString_withNSString_withNSString_withNSException_(JavaUtilMissingResourceException *self, NSString *message, NSString *className_, NSString *key, NSException *cause);

FOUNDATION_EXPORT JavaUtilMissingResourceException *new_JavaUtilMissingResourceException_initWithNSString_withNSString_withNSString_withNSException_(NSString *message, NSString *className_, NSString *key, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilMissingResourceException *create_JavaUtilMissingResourceException_initWithNSString_withNSString_withNSString_withNSException_(NSString *message, NSString *className_, NSString *key, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilMissingResourceException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilMissingResourceException")