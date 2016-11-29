//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/exceptions/verification/NoInteractionsWanted.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoExceptionsVerificationNoInteractionsWanted")
#ifdef RESTRICT_OrgMockitoExceptionsVerificationNoInteractionsWanted
#define INCLUDE_ALL_OrgMockitoExceptionsVerificationNoInteractionsWanted 0
#else
#define INCLUDE_ALL_OrgMockitoExceptionsVerificationNoInteractionsWanted 1
#endif
#undef RESTRICT_OrgMockitoExceptionsVerificationNoInteractionsWanted

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoExceptionsVerificationNoInteractionsWanted_) && (INCLUDE_ALL_OrgMockitoExceptionsVerificationNoInteractionsWanted || defined(INCLUDE_OrgMockitoExceptionsVerificationNoInteractionsWanted))
#define OrgMockitoExceptionsVerificationNoInteractionsWanted_

#define RESTRICT_OrgMockitoExceptionsBaseMockitoAssertionError 1
#define INCLUDE_OrgMockitoExceptionsBaseMockitoAssertionError 1
#include "org/mockito/exceptions/base/MockitoAssertionError.h"

/*!
 @brief No interactions wanted.
 See exception's cause for location of undesired invocation.
 */
@interface OrgMockitoExceptionsVerificationNoInteractionsWanted : OrgMockitoExceptionsBaseMockitoAssertionError

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoExceptionsVerificationNoInteractionsWanted)

FOUNDATION_EXPORT void OrgMockitoExceptionsVerificationNoInteractionsWanted_initWithNSString_(OrgMockitoExceptionsVerificationNoInteractionsWanted *self, NSString *message);

FOUNDATION_EXPORT OrgMockitoExceptionsVerificationNoInteractionsWanted *new_OrgMockitoExceptionsVerificationNoInteractionsWanted_initWithNSString_(NSString *message) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoExceptionsVerificationNoInteractionsWanted *create_OrgMockitoExceptionsVerificationNoInteractionsWanted_initWithNSString_(NSString *message);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoExceptionsVerificationNoInteractionsWanted)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoExceptionsVerificationNoInteractionsWanted")
