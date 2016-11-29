//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/Verifier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesVerifier")
#ifdef RESTRICT_OrgJunitRulesVerifier
#define INCLUDE_ALL_OrgJunitRulesVerifier 0
#else
#define INCLUDE_ALL_OrgJunitRulesVerifier 1
#endif
#undef RESTRICT_OrgJunitRulesVerifier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRulesVerifier_) && (INCLUDE_ALL_OrgJunitRulesVerifier || defined(INCLUDE_OrgJunitRulesVerifier))
#define OrgJunitRulesVerifier_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "org/junit/rules/TestRule.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;

/*!
 @brief Verifier is a base class for Rules like ErrorCollector, which can turn
 otherwise passing test methods into failing tests if a verification check is
 failed
 @code

     public static class ErrorLogVerifier() {
        private ErrorLog errorLog = new ErrorLog();
        &#064;Rule
        public Verifier verifier = new Verifier() {
           &#064;Override public void verify() {
              assertTrue(errorLog.isEmpty());
           }
        }
        &#064;Test public void testThatMightWriteErrorLog() {
           // ...
        }
     }
  
@endcode
 @since 4.7
 */
@interface OrgJunitRulesVerifier : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

#pragma mark Protected

/*!
 @brief Override this to add verification logic.
 Overrides should throw an
 exception to indicate that verification failed.
 */
- (void)verify;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitRulesVerifier)

FOUNDATION_EXPORT void OrgJunitRulesVerifier_init(OrgJunitRulesVerifier *self);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesVerifier)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesVerifier")
