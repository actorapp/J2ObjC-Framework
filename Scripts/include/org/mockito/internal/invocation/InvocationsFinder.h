//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/invocation/InvocationsFinder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder")
#ifdef RESTRICT_OrgMockitoInternalInvocationInvocationsFinder
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder 0
#else
#define INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder 1
#endif
#undef RESTRICT_OrgMockitoInternalInvocationInvocationsFinder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalInvocationInvocationsFinder_) && (INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder || defined(INCLUDE_OrgMockitoInternalInvocationInvocationsFinder))
#define OrgMockitoInternalInvocationInvocationsFinder_

@class OrgMockitoInternalInvocationInvocationMatcher;
@protocol JavaUtilList;
@protocol OrgMockitoInternalVerificationApiInOrderContext;
@protocol OrgMockitoInvocationInvocation;
@protocol OrgMockitoInvocationLocation;

@interface OrgMockitoInternalInvocationInvocationsFinder : NSObject

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilList>)findAllMatchingUnverifiedChunksWithJavaUtilList:(id<JavaUtilList>)invocations
                  withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)orderingContext;

- (id<OrgMockitoInvocationInvocation>)findFirstMatchingUnverifiedInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                                          withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                        withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations;

/*!
 @brief i3 is unverified here:
 i1, i2, i3
 v
 all good here:
 i1, i2, i3
 v   v
 @param context
 @param orderedInvocations
 */
- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedInOrderWithOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context
                                                                                                   withJavaUtilList:(id<JavaUtilList>)orderedInvocations;

- (id<JavaUtilList>)findInvocationsWithJavaUtilList:(id<JavaUtilList>)invocations
  withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

/*!
 @brief some examples how it works:
 Given invocations sequence:
 1,1,2,1
 if wanted is 1 and mode is times(2) then returns
 1,1  
 if wanted is 1 and mode is atLeast() then returns
 1,1,1
 if wanted is 1 and mode is times(x), where x !
 = 2 then returns
 1,1,1
 */
- (id<JavaUtilList>)findMatchingChunkWithJavaUtilList:(id<JavaUtilList>)invocations
    withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted
                                              withInt:(jint)wantedCount
  withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<OrgMockitoInvocationInvocation>)findPreviousVerifiedInOrderWithJavaUtilList:(id<JavaUtilList>)invocations
                              withOrgMockitoInternalVerificationApiInOrderContext:(id<OrgMockitoInternalVerificationApiInOrderContext>)context;

- (id<OrgMockitoInvocationInvocation>)findSimilarInvocationWithJavaUtilList:(id<JavaUtilList>)invocations
                          withOrgMockitoInternalInvocationInvocationMatcher:(OrgMockitoInternalInvocationInvocationMatcher *)wanted;

- (id<OrgMockitoInvocationLocation>)getLastLocationWithJavaUtilList:(id<JavaUtilList>)invocations;

#pragma mark Package-Private

- (id<OrgMockitoInvocationInvocation>)findFirstUnverifiedWithJavaUtilList:(id<JavaUtilList>)invocations
                                                                   withId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalInvocationInvocationsFinder)

FOUNDATION_EXPORT void OrgMockitoInternalInvocationInvocationsFinder_init(OrgMockitoInternalInvocationInvocationsFinder *self);

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationsFinder *new_OrgMockitoInternalInvocationInvocationsFinder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalInvocationInvocationsFinder *create_OrgMockitoInternalInvocationInvocationsFinder_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalInvocationInvocationsFinder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalInvocationInvocationsFinder")
