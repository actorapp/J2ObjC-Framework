//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/TimeLimiter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentTimeLimiter")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentTimeLimiter
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentTimeLimiter 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentTimeLimiter 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentTimeLimiter

#if !defined (ComGoogleCommonUtilConcurrentTimeLimiter_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentTimeLimiter || defined(INCLUDE_ComGoogleCommonUtilConcurrentTimeLimiter))
#define ComGoogleCommonUtilConcurrentTimeLimiter_

@class IOSClass;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentCallable;

@protocol ComGoogleCommonUtilConcurrentTimeLimiter < JavaObject >

- (id)newProxyWithId:(id)target
        withIOSClass:(IOSClass *)interfaceType
            withLong:(jlong)timeoutDuration
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit OBJC_METHOD_FAMILY_NONE;

- (id)callWithTimeoutWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                           withLong:(jlong)timeoutDuration
                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)timeoutUnit
                                        withBoolean:(jboolean)interruptible;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonUtilConcurrentTimeLimiter)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentTimeLimiter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentTimeLimiter")
