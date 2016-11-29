//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/framework/AssertionFailedError.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkAssertionFailedError")
#ifdef RESTRICT_JunitFrameworkAssertionFailedError
#define INCLUDE_ALL_JunitFrameworkAssertionFailedError 0
#else
#define INCLUDE_ALL_JunitFrameworkAssertionFailedError 1
#endif
#undef RESTRICT_JunitFrameworkAssertionFailedError

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitFrameworkAssertionFailedError_) && (INCLUDE_ALL_JunitFrameworkAssertionFailedError || defined(INCLUDE_JunitFrameworkAssertionFailedError))
#define JunitFrameworkAssertionFailedError_

#define RESTRICT_JavaLangAssertionError 1
#define INCLUDE_JavaLangAssertionError 1
#include "java/lang/AssertionError.h"

/*!
 @brief Thrown when an assertion failed.
 */
@interface JunitFrameworkAssertionFailedError : JavaLangAssertionError

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkAssertionFailedError)

FOUNDATION_EXPORT void JunitFrameworkAssertionFailedError_init(JunitFrameworkAssertionFailedError *self);

FOUNDATION_EXPORT JunitFrameworkAssertionFailedError *new_JunitFrameworkAssertionFailedError_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkAssertionFailedError *create_JunitFrameworkAssertionFailedError_init();

FOUNDATION_EXPORT void JunitFrameworkAssertionFailedError_initWithNSString_(JunitFrameworkAssertionFailedError *self, NSString *message);

FOUNDATION_EXPORT JunitFrameworkAssertionFailedError *new_JunitFrameworkAssertionFailedError_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkAssertionFailedError *create_JunitFrameworkAssertionFailedError_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkAssertionFailedError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkAssertionFailedError")
