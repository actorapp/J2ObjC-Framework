//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/verification/AtMost.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalVerificationAtMost")
#ifdef RESTRICT_OrgMockitoInternalVerificationAtMost
#define INCLUDE_ALL_OrgMockitoInternalVerificationAtMost 0
#else
#define INCLUDE_ALL_OrgMockitoInternalVerificationAtMost 1
#endif
#undef RESTRICT_OrgMockitoInternalVerificationAtMost

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalVerificationAtMost_) && (INCLUDE_ALL_OrgMockitoInternalVerificationAtMost || defined(INCLUDE_OrgMockitoInternalVerificationAtMost))
#define OrgMockitoInternalVerificationAtMost_

#define RESTRICT_OrgMockitoVerificationVerificationMode 1
#define INCLUDE_OrgMockitoVerificationVerificationMode 1
#include "../../../../org/mockito/verification/VerificationMode.h"

@protocol OrgMockitoInternalVerificationApiVerificationData;

@interface OrgMockitoInternalVerificationAtMost : NSObject < OrgMockitoVerificationVerificationMode >

#pragma mark Public

- (instancetype)initWithInt:(jint)maxNumberOfInvocations;

- (void)verifyWithOrgMockitoInternalVerificationApiVerificationData:(id<OrgMockitoInternalVerificationApiVerificationData>)data;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalVerificationAtMost)

FOUNDATION_EXPORT void OrgMockitoInternalVerificationAtMost_initWithInt_(OrgMockitoInternalVerificationAtMost *self, jint maxNumberOfInvocations);

FOUNDATION_EXPORT OrgMockitoInternalVerificationAtMost *new_OrgMockitoInternalVerificationAtMost_initWithInt_(jint maxNumberOfInvocations) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalVerificationAtMost *create_OrgMockitoInternalVerificationAtMost_initWithInt_(jint maxNumberOfInvocations);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalVerificationAtMost)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalVerificationAtMost")
