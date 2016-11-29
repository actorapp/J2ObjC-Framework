//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/UncaughtExceptionHandlers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers

#if !defined (ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers || defined(INCLUDE_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers))
#define ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_

@protocol JavaLangThread_UncaughtExceptionHandler;

@interface ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers : NSObject

#pragma mark Public

+ (id<JavaLangThread_UncaughtExceptionHandler>)systemExit;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers)

FOUNDATION_EXPORT id<JavaLangThread_UncaughtExceptionHandler> ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_systemExit();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers)

#endif

#if !defined (ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers || defined(INCLUDE_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter))
#define ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_

#define RESTRICT_JavaLangThread 1
#define INCLUDE_JavaLangThread_UncaughtExceptionHandler 1
#include "java/lang/Thread.h"

@class JavaLangRuntime;
@class JavaLangThread;

@interface ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter : NSObject < JavaLangThread_UncaughtExceptionHandler >

#pragma mark Public

- (void)uncaughtExceptionWithJavaLangThread:(JavaLangThread *)t
                            withNSException:(NSException *)e;

#pragma mark Package-Private

- (instancetype)initWithJavaLangRuntime:(JavaLangRuntime *)runtime;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *self, JavaLangRuntime *runtime);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *new_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(JavaLangRuntime *runtime) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter *create_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter_initWithJavaLangRuntime_(JavaLangRuntime *runtime);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers_Exiter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentUncaughtExceptionHandlers")
