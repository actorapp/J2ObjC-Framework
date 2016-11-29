//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/progress/ThreadSafeMockingProgress.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalProgressThreadSafeMockingProgress")
#ifdef RESTRICT_OrgMockitoInternalProgressThreadSafeMockingProgress
#define INCLUDE_ALL_OrgMockitoInternalProgressThreadSafeMockingProgress 0
#else
#define INCLUDE_ALL_OrgMockitoInternalProgressThreadSafeMockingProgress 1
#endif
#undef RESTRICT_OrgMockitoInternalProgressThreadSafeMockingProgress

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalProgressThreadSafeMockingProgress_) && (INCLUDE_ALL_OrgMockitoInternalProgressThreadSafeMockingProgress || defined(INCLUDE_OrgMockitoInternalProgressThreadSafeMockingProgress))
#define OrgMockitoInternalProgressThreadSafeMockingProgress_

#define RESTRICT_OrgMockitoInternalProgressMockingProgress 1
#define INCLUDE_OrgMockitoInternalProgressMockingProgress 1
#include "../../../../org/mockito/internal/progress/MockingProgress.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../java/io/Serializable.h"

@class IOSClass;
@protocol OrgMockitoInternalListenersMockingProgressListener;
@protocol OrgMockitoInternalProgressArgumentMatcherStorage;
@protocol OrgMockitoInternalProgressIOngoingStubbing;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoVerificationVerificationMode;

@interface OrgMockitoInternalProgressThreadSafeMockingProgress : NSObject < OrgMockitoInternalProgressMockingProgress, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id<OrgMockitoInternalProgressArgumentMatcherStorage>)getArgumentMatcherStorage;

- (void)mockingStartedWithId:(id)mock
                withIOSClass:(IOSClass *)classToMock;

- (id<OrgMockitoInternalProgressIOngoingStubbing>)pullOngoingStubbing;

- (id<OrgMockitoVerificationVerificationMode>)pullVerificationMode;

- (void)reportOngoingStubbingWithOrgMockitoInternalProgressIOngoingStubbing:(id<OrgMockitoInternalProgressIOngoingStubbing>)iOngoingStubbing;

- (void)reset;

- (void)resetOngoingStubbing;

- (void)setListenerWithOrgMockitoInternalListenersMockingProgressListener:(id<OrgMockitoInternalListenersMockingProgressListener>)listener;

- (void)stubbingCompletedWithOrgMockitoInvocationInvocation:(id<OrgMockitoInvocationInvocation>)invocation;

- (void)stubbingStarted;

- (NSString *)description;

- (void)validateState;

- (void)verificationStartedWithOrgMockitoVerificationVerificationMode:(id<OrgMockitoVerificationVerificationMode>)verify;

#pragma mark Package-Private

+ (id<OrgMockitoInternalProgressMockingProgress>)threadSafely;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalProgressThreadSafeMockingProgress)

FOUNDATION_EXPORT id<OrgMockitoInternalProgressMockingProgress> OrgMockitoInternalProgressThreadSafeMockingProgress_threadSafely();

FOUNDATION_EXPORT void OrgMockitoInternalProgressThreadSafeMockingProgress_init(OrgMockitoInternalProgressThreadSafeMockingProgress *self);

FOUNDATION_EXPORT OrgMockitoInternalProgressThreadSafeMockingProgress *new_OrgMockitoInternalProgressThreadSafeMockingProgress_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalProgressThreadSafeMockingProgress *create_OrgMockitoInternalProgressThreadSafeMockingProgress_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalProgressThreadSafeMockingProgress)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalProgressThreadSafeMockingProgress")
