//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/InstantiationError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInstantiationError")
#ifdef RESTRICT_JavaLangInstantiationError
#define INCLUDE_ALL_JavaLangInstantiationError 0
#else
#define INCLUDE_ALL_JavaLangInstantiationError 1
#endif
#undef RESTRICT_JavaLangInstantiationError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangInstantiationError_) && (INCLUDE_ALL_JavaLangInstantiationError || defined(INCLUDE_JavaLangInstantiationError))
#define JavaLangInstantiationError_

#define RESTRICT_JavaLangIncompatibleClassChangeError 1
#define INCLUDE_JavaLangIncompatibleClassChangeError 1
#include "java/lang/IncompatibleClassChangeError.h"

/*!
 @brief Thrown when an application tries to use the Java <code>new</code>
 construct to instantiate an abstract class or an interface.
 <p>
 Normally, this error is caught by the compiler; this error can
 only occur at run time if the definition of a class has
 incompatibly changed.
 @author unascribed
 @since JDK1.0
 */
@interface JavaLangInstantiationError : JavaLangIncompatibleClassChangeError

#pragma mark Public

/*!
 @brief Constructs an <code>InstantiationError</code> with no detail  message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>InstantiationError</code> with the specified
 detail message.
 @param s   the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInstantiationError)

FOUNDATION_EXPORT void JavaLangInstantiationError_init(JavaLangInstantiationError *self);

FOUNDATION_EXPORT JavaLangInstantiationError *new_JavaLangInstantiationError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInstantiationError *create_JavaLangInstantiationError_init();

FOUNDATION_EXPORT void JavaLangInstantiationError_initWithNSString_(JavaLangInstantiationError *self, NSString *s);

FOUNDATION_EXPORT JavaLangInstantiationError *new_JavaLangInstantiationError_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInstantiationError *create_JavaLangInstantiationError_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInstantiationError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangInstantiationError")
