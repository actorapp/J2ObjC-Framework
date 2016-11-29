//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/VerifyException.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseVerifyException")
#ifdef RESTRICT_ComGoogleCommonBaseVerifyException
#define INCLUDE_ALL_ComGoogleCommonBaseVerifyException 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseVerifyException 1
#endif
#undef RESTRICT_ComGoogleCommonBaseVerifyException

#if !defined (ComGoogleCommonBaseVerifyException_) && (INCLUDE_ALL_ComGoogleCommonBaseVerifyException || defined(INCLUDE_ComGoogleCommonBaseVerifyException))
#define ComGoogleCommonBaseVerifyException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../../../../java/lang/RuntimeException.h"

@interface ComGoogleCommonBaseVerifyException : JavaLangRuntimeException

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
                 withNSException:(NSException *)cause;

- (instancetype)initWithNSException:(NSException *)cause;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseVerifyException)

FOUNDATION_EXPORT void ComGoogleCommonBaseVerifyException_init(ComGoogleCommonBaseVerifyException *self);

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *new_ComGoogleCommonBaseVerifyException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *create_ComGoogleCommonBaseVerifyException_init();

FOUNDATION_EXPORT void ComGoogleCommonBaseVerifyException_initWithNSString_(ComGoogleCommonBaseVerifyException *self, NSString *message);

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *new_ComGoogleCommonBaseVerifyException_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *create_ComGoogleCommonBaseVerifyException_initWithNSString_(NSString *message);

FOUNDATION_EXPORT void ComGoogleCommonBaseVerifyException_initWithNSException_(ComGoogleCommonBaseVerifyException *self, NSException *cause);

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *new_ComGoogleCommonBaseVerifyException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *create_ComGoogleCommonBaseVerifyException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void ComGoogleCommonBaseVerifyException_initWithNSString_withNSException_(ComGoogleCommonBaseVerifyException *self, NSString *message, NSException *cause);

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *new_ComGoogleCommonBaseVerifyException_initWithNSString_withNSException_(NSString *message, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonBaseVerifyException *create_ComGoogleCommonBaseVerifyException_initWithNSString_withNSException_(NSString *message, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseVerifyException)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseVerifyException")
