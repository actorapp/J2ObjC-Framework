//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/junit/framework/ComparisonCompactor.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JunitFrameworkComparisonCompactor")
#ifdef RESTRICT_JunitFrameworkComparisonCompactor
#define INCLUDE_ALL_JunitFrameworkComparisonCompactor 0
#else
#define INCLUDE_ALL_JunitFrameworkComparisonCompactor 1
#endif
#undef RESTRICT_JunitFrameworkComparisonCompactor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JunitFrameworkComparisonCompactor_) && (INCLUDE_ALL_JunitFrameworkComparisonCompactor || defined(INCLUDE_JunitFrameworkComparisonCompactor))
#define JunitFrameworkComparisonCompactor_

@interface JunitFrameworkComparisonCompactor : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)contextLength
               withNSString:(NSString *)expected
               withNSString:(NSString *)actual;

- (NSString *)compactWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(JunitFrameworkComparisonCompactor)

FOUNDATION_EXPORT void JunitFrameworkComparisonCompactor_initWithInt_withNSString_withNSString_(JunitFrameworkComparisonCompactor *self, jint contextLength, NSString *expected, NSString *actual);

FOUNDATION_EXPORT JunitFrameworkComparisonCompactor *new_JunitFrameworkComparisonCompactor_initWithInt_withNSString_withNSString_(jint contextLength, NSString *expected, NSString *actual) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JunitFrameworkComparisonCompactor *create_JunitFrameworkComparisonCompactor_initWithInt_withNSString_withNSString_(jint contextLength, NSString *expected, NSString *actual);

J2OBJC_TYPE_LITERAL_HEADER(JunitFrameworkComparisonCompactor)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JunitFrameworkComparisonCompactor")
