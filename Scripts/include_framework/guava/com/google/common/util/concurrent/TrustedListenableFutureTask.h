//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/TrustedListenableFutureTask.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask

#if !defined (ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask || defined(INCLUDE_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask))
#define ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_

#define RESTRICT_ComGoogleCommonUtilConcurrentAbstractFuture 1
#define INCLUDE_ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture 1
#include "../../../../../../com/google/common/util/concurrent/AbstractFuture.h"

#define RESTRICT_JavaUtilConcurrentRunnableFuture 1
#define INCLUDE_JavaUtilConcurrentRunnableFuture 1
#include "../../../../../../java/util/concurrent/RunnableFuture.h"

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentCallable;

@interface ComGoogleCommonUtilConcurrentTrustedListenableFutureTask : ComGoogleCommonUtilConcurrentAbstractFuture_TrustedFuture < JavaUtilConcurrentRunnableFuture >

#pragma mark Public

- (void)run;

#pragma mark Protected

- (void)interruptTask;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

+ (ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *)createWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable;

+ (ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *)createWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                                                                  withId:(id)result;

- (void)done;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentTrustedListenableFutureTask)

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_createWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_createWithJavaLangRunnable_withId_(id<JavaLangRunnable> runnable, id result);

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initWithJavaUtilConcurrentCallable_(ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *self, id<JavaUtilConcurrentCallable> callable);

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *new_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentTrustedListenableFutureTask *create_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask_initWithJavaUtilConcurrentCallable_(id<JavaUtilConcurrentCallable> callable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentTrustedListenableFutureTask)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentTrustedListenableFutureTask")
