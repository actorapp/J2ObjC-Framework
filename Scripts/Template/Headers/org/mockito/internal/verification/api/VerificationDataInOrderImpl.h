//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/api/VerificationDataInOrderImpl.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl")
#ifdef RESTRICT_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl
#define INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_) && (INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl || defined(INCLUDE_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl))
#define OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_

#define RESTRICT_OrgMockitoInternalVerificationApiVerificationDataInOrder 1
#define INCLUDE_OrgMockitoInternalVerificationApiVerificationDataInOrder 1
#include "../../../../../org/mockito/internal/verification/api/VerificationDataInOrder.h"

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;

@interface OrgMockitoInternalVerificationApiVerificationDataInOrderImpl : NSObject < OrgMockitoInternalVerificationApiVerificationDataInOrder >

#pragma mark Public

- (instancetype)initWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)inOrder
                                                       withJavaUtilList:(id<JavaUtilList>)allInvocations
                      withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<JavaUtilList>)getAllInvocations;

- (id<OrgMockitoInternalVerificationApiInOrderContext>)getOrderingContext;

- (OrgMockitoInternalInvocationInvocationMatcher *)getWanted;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_initWithOrgMockitoInternalVerificationApiInOrderContext_withJavaUtilList_withOrgMockitoInternalInvocationInvocationMatcher_(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl *self, id<OrgMockitoInternalVerificationApiInOrderContext> inOrder, id<JavaUtilList> allInvocations, OrgMockitoInternalInvocationInvocationMatcher *wanted);

FOUNDATION_EXPORT OrgMockitoInternalVerificationApiVerificationDataInOrderImpl *new_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_initWithOrgMockitoInternalVerificationApiInOrderContext_withJavaUtilList_withOrgMockitoInternalInvocationInvocationMatcher_(id<OrgMockitoInternalVerificationApiInOrderContext> inOrder, id<JavaUtilList> allInvocations, OrgMockitoInternalInvocationInvocationMatcher *wanted) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationApiVerificationDataInOrderImpl *create_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl_initWithOrgMockitoInternalVerificationApiInOrderContext_withJavaUtilList_withOrgMockitoInternalInvocationInvocationMatcher_(id<OrgMockitoInternalVerificationApiInOrderContext> inOrder, id<JavaUtilList> allInvocations, OrgMockitoInternalInvocationInvocationMatcher *wanted);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationApiVerificationDataInOrderImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationApiVerificationDataInOrderImpl")
