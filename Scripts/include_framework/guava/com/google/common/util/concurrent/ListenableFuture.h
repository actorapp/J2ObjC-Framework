//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/ListenableFuture.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFuture")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentListenableFuture
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFuture 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFuture 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentListenableFuture

#if !defined (ComGoogleCommonUtilConcurrentListenableFuture_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFuture || defined(INCLUDE_ComGoogleCommonUtilConcurrentListenableFuture))
#define ComGoogleCommonUtilConcurrentListenableFuture_

#define RESTRICT_JavaUtilConcurrentFuture 1
#define INCLUDE_JavaUtilConcurrentFuture 1
#include "../../../../../../java/util/concurrent/Future.h"

@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;

@protocol ComGoogleCommonUtilConcurrentListenableFuture < JavaUtilConcurrentFuture, JavaObject >

- (void)addListenerWithJavaLangRunnable:(id<JavaLangRunnable>)listener
         withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentListenableFuture)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentListenableFuture)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentListenableFuture")
