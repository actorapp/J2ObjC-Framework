//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/core/SubstringMatcher.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreSubstringMatcher")
#ifdef RESTRICT_OrgHamcrestCoreSubstringMatcher
#define INCLUDE_ALL_OrgHamcrestCoreSubstringMatcher 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreSubstringMatcher 1
#endif
#undef RESTRICT_OrgHamcrestCoreSubstringMatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreSubstringMatcher_) && (INCLUDE_ALL_OrgHamcrestCoreSubstringMatcher || defined(INCLUDE_OrgHamcrestCoreSubstringMatcher))
#define OrgHamcrestCoreSubstringMatcher_

#define RESTRICT_OrgHamcrestTypeSafeMatcher 1
#define INCLUDE_OrgHamcrestTypeSafeMatcher 1
#include "../../../org/hamcrest/TypeSafeMatcher.h"

@protocol OrgHamcrestDescription;

@interface OrgHamcrestCoreSubstringMatcher : OrgHamcrestTypeSafeMatcher {
 @public
  NSString *substring_;
}

#pragma mark Public

- (void)describeMismatchSafelyWithId:(NSString *)item
          withOrgHamcrestDescription:(id<OrgHamcrestDescription>)mismatchDescription;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesSafelyWithId:(NSString *)item;

#pragma mark Protected

- (instancetype)initWithNSString:(NSString *)substring;

- (jboolean)evalSubstringOfWithNSString:(NSString *)string;

- (NSString *)relationship;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreSubstringMatcher)

J2OBJC_FIELD_SETTER(OrgHamcrestCoreSubstringMatcher, substring_, NSString *)

FOUNDATION_EXPORT void OrgHamcrestCoreSubstringMatcher_initWithNSString_(OrgHamcrestCoreSubstringMatcher *self, NSString *substring);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreSubstringMatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreSubstringMatcher")
