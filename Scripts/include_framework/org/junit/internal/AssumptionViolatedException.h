//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/AssumptionViolatedException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException")
#ifdef RESTRICT_OrgJunitInternalAssumptionViolatedException
#define INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException 0
#else
#define INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException 1
#endif
#undef RESTRICT_OrgJunitInternalAssumptionViolatedException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalAssumptionViolatedException_) && (INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException || defined(INCLUDE_OrgJunitInternalAssumptionViolatedException))
#define OrgJunitInternalAssumptionViolatedException_

#define RESTRICT_JavaLangRuntimeException 1
#define INCLUDE_JavaLangRuntimeException 1
#include "../../../java/lang/RuntimeException.h"

#define RESTRICT_OrgHamcrestSelfDescribing 1
#define INCLUDE_OrgHamcrestSelfDescribing 1
#include "../../../org/hamcrest/SelfDescribing.h"

@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief An exception class used to implement <i>assumptions</i> (state in which a given test
 is meaningful and should or should not be executed).
 A test for which an assumption
 fails should not generate a test case failure.
 - seealso: Assume
 */
@interface OrgJunitInternalAssumptionViolatedException : JavaLangRuntimeException < OrgHamcrestSelfDescribing >

#pragma mark Public

/*!
 @brief An assumption exception with the given <i>value</i> (String or
 Throwable) and an additional failing <code>Matcher</code>.
 */
- (instancetype)initWithId:(id)value
    withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief An assumption exception with the given message only.
 */
- (instancetype)initWithNSString:(NSString *)assumption;

- (instancetype)initWithNSString:(NSString *)assumption
                     withBoolean:(jboolean)valueMatcher
                          withId:(id)value
          withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief An assumption exception with the given <i>value</i> (String or
 Throwable) and an additional failing <code>Matcher</code>.
 */
- (instancetype)initWithNSString:(NSString *)assumption
                          withId:(id)value
          withOrgHamcrestMatcher:(id<OrgHamcrestMatcher>)matcher;

/*!
 @brief An assumption exception with the given message and a cause.
 */
- (instancetype)initWithNSString:(NSString *)assumption
                 withNSException:(NSException *)t;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalAssumptionViolatedException)

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_withBoolean_withId_withOrgHamcrestMatcher_(NSString *assumption, jboolean valueMatcher, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithId_withOrgHamcrestMatcher_(id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(NSString *assumption, id value, id<OrgHamcrestMatcher> matcher) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_withId_withOrgHamcrestMatcher_(NSString *assumption, id value, id<OrgHamcrestMatcher> matcher);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_(NSString *assumption) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_(NSString *assumption);

FOUNDATION_EXPORT void OrgJunitInternalAssumptionViolatedException_initWithNSString_withNSException_(OrgJunitInternalAssumptionViolatedException *self, NSString *assumption, NSException *t);

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *new_OrgJunitInternalAssumptionViolatedException_initWithNSString_withNSException_(NSString *assumption, NSException *t) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalAssumptionViolatedException *create_OrgJunitInternalAssumptionViolatedException_initWithNSString_withNSException_(NSString *assumption, NSException *t);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalAssumptionViolatedException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalAssumptionViolatedException")
