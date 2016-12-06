//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/NullPointerException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangNullPointerException")
#ifdef RESTRICT_JavaLangNullPointerException
#define INCLUDE_ALL_JavaLangNullPointerException 0
#else
#define INCLUDE_ALL_JavaLangNullPointerException 1
#endif
#undef RESTRICT_JavaLangNullPointerException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangNullPointerException_) && (INCLUDE_ALL_JavaLangNullPointerException || defined(INCLUDE_JavaLangNullPointerException))
#define JavaLangNullPointerException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "java/lang/RuntimeException.h"

/*!
 @brief Thrown when an application attempts to use <code>null</code> in a
 case where an object is required.
 These include:
 <ul>
 <li>Calling the instance method of a <code>null</code> object.
 <li>Accessing or modifying the field of a <code>null</code> object.
 <li>Taking the length of <code>null</code> as if it were an array.
 <li>Accessing or modifying the slots of <code>null</code> as if it
 were an array.
 <li>Throwing <code>null</code> as if it were a <code>Throwable</code>
 value.
 </ul>
 <p>
 Applications should throw instances of this class to indicate
 other illegal uses of the <code>null</code> object.
 <code>NullPointerException</code> objects may be constructed by the
 virtual machine as if suppression were disabled and/or the
 stack trace was not writable
 .
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangNullPointerException : JavaLangRuntimeException

#pragma mark Public

/*!
 @brief Constructs a <code>NullPointerException</code> with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>NullPointerException</code> with the specified
 detail message.
 @param s   the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangNullPointerException)

FOUNDATION_EXPORT void JavaLangNullPointerException_init(JavaLangNullPointerException *self);

FOUNDATION_EXPORT JavaLangNullPointerException *new_JavaLangNullPointerException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNullPointerException *create_JavaLangNullPointerException_init();

FOUNDATION_EXPORT void JavaLangNullPointerException_initWithNSString_(JavaLangNullPointerException *self, NSString *s);

FOUNDATION_EXPORT JavaLangNullPointerException *new_JavaLangNullPointerException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangNullPointerException *create_JavaLangNullPointerException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangNullPointerException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangNullPointerException")
