//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/VoidMethodStubbableImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingVoidMethodStubbableImpl")
#ifdef RESTRICT_OrgMockitoInternalStubbingVoidMethodStubbableImpl
#define INCLUDE_ALL_OrgMockitoInternalStubbingVoidMethodStubbableImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingVoidMethodStubbableImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingVoidMethodStubbableImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingVoidMethodStubbableImpl_) && (INCLUDE_ALL_OrgMockitoInternalStubbingVoidMethodStubbableImpl || defined(INCLUDE_OrgMockitoInternalStubbingVoidMethodStubbableImpl))
#define OrgMockitoInternalStubbingVoidMethodStubbableImpl_

#define RESTRICT_OrgMockitoStubbingVoidMethodStubbable 1
#define INCLUDE_OrgMockitoStubbingVoidMethodStubbable 1
#include "org/mockito/stubbing/VoidMethodStubbable.h"

@class OrgMockitoInternalStubbingInvocationContainerImpl;
@protocol OrgMockitoStubbingAnswer;

@interface OrgMockitoInternalStubbingVoidMethodStubbableImpl : NSObject < OrgMockitoStubbingVoidMethodStubbable >

#pragma mark Public

- (instancetype)initWithId:(id)mock
withOrgMockitoInternalStubbingInvocationContainerImpl:(OrgMockitoInternalStubbingInvocationContainerImpl *)invocationContainerImpl;

- (id)on;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toReturn;

- (id<OrgMockitoStubbingVoidMethodStubbable>)toThrowWithNSException:(NSException *)throwable;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingVoidMethodStubbableImpl)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingVoidMethodStubbableImpl_initWithId_withOrgMockitoInternalStubbingInvocationContainerImpl_(OrgMockitoInternalStubbingVoidMethodStubbableImpl *self, id mock, OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl);

FOUNDATION_EXPORT OrgMockitoInternalStubbingVoidMethodStubbableImpl *new_OrgMockitoInternalStubbingVoidMethodStubbableImpl_initWithId_withOrgMockitoInternalStubbingInvocationContainerImpl_(id mock, OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingVoidMethodStubbableImpl *create_OrgMockitoInternalStubbingVoidMethodStubbableImpl_initWithId_withOrgMockitoInternalStubbingInvocationContainerImpl_(id mock, OrgMockitoInternalStubbingInvocationContainerImpl *invocationContainerImpl);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingVoidMethodStubbableImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingVoidMethodStubbableImpl")
