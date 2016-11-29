//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/util/concurrent/AbstractExecutionThreadService.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService")
#ifdef RESTRICT_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService 0
#else
#define INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService 1
#endif
#undef RESTRICT_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService

#if !defined (ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_) && (INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService || defined(INCLUDE_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService))
#define ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_

#define RESTRICT_ComGoogleCommonUtilConcurrentService 1
#define INCLUDE_ComGoogleCommonUtilConcurrentService 1
#include "com/google/common/util/concurrent/Service.h"

@class ComGoogleCommonUtilConcurrentService_Listener;
@class ComGoogleCommonUtilConcurrentService_State;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilConcurrentExecutor;

@interface ComGoogleCommonUtilConcurrentAbstractExecutionThreadService : NSObject < ComGoogleCommonUtilConcurrentService >

#pragma mark Public

- (void)addListenerWithComGoogleCommonUtilConcurrentService_Listener:(ComGoogleCommonUtilConcurrentService_Listener *)listener
                                      withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)awaitRunning;

- (void)awaitRunningWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)awaitTerminated;

- (void)awaitTerminatedWithLong:(jlong)timeout
 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (NSException *)failureCause;

- (jboolean)isRunning;

- (id<ComGoogleCommonUtilConcurrentService>)startAsync;

- (ComGoogleCommonUtilConcurrentService_State *)state;

- (id<ComGoogleCommonUtilConcurrentService>)stopAsync;

- (NSString *)description;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilConcurrentExecutor>)executor;

- (void)run;

- (NSString *)serviceName;

- (void)shutDown;

- (void)startUp;

- (void)triggerShutdown;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService)

FOUNDATION_EXPORT void ComGoogleCommonUtilConcurrentAbstractExecutionThreadService_init(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonUtilConcurrentAbstractExecutionThreadService)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonUtilConcurrentAbstractExecutionThreadService")
