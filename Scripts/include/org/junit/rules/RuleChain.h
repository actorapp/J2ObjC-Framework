//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/rules/RuleChain.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitRulesRuleChain")
#ifdef RESTRICT_OrgJunitRulesRuleChain
#define INCLUDE_ALL_OrgJunitRulesRuleChain 0
#else
#define INCLUDE_ALL_OrgJunitRulesRuleChain 1
#endif
#undef RESTRICT_OrgJunitRulesRuleChain

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitRulesRuleChain_) && (INCLUDE_ALL_OrgJunitRulesRuleChain || defined(INCLUDE_OrgJunitRulesRuleChain))
#define OrgJunitRulesRuleChain_

#define RESTRICT_OrgJunitRulesTestRule 1
#define INCLUDE_OrgJunitRulesTestRule 1
#include "org/junit/rules/TestRule.h"

@class OrgJunitRunnerDescription;
@class OrgJunitRunnersModelStatement;

/*!
 @brief The RuleChain rule allows ordering of TestRules.
 You create a
 <code>RuleChain</code> with <code>outerRule(TestRule)</code> and subsequent calls of
 <code>around(TestRule)</code>:
 @code

  public static class UseRuleChain {
 	&#064;Rule
 	public RuleChain chain= RuleChain
 	                       .outerRule(new LoggingRule("outer rule")
 	                       .around(new LoggingRule("middle rule")
 	                       .around(new LoggingRule("inner rule");
 	&#064;Test
 	public void example() {
 		assertTrue(true);
     }
  }
  
@endcode
 writes the log
 @code

  starting outer rule
  starting middle rule
  starting inner rule
  finished inner rule
  finished middle rule
  finished outer rule
  
@endcode
 @since 4.10
 */
@interface OrgJunitRulesRuleChain : NSObject < OrgJunitRulesTestRule >

#pragma mark Public

/*!
 
 */
- (OrgJunitRunnersModelStatement *)applyWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)base
                                            withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

/*!
 @brief Create a new <code>RuleChain</code>, which encloses the <code>nextRule</code> with
 the rules of the current <code>RuleChain</code>.
 @param enclosedRule the rule to enclose.
 @return a new <code>RuleChain</code>.
 */
- (OrgJunitRulesRuleChain *)aroundWithOrgJunitRulesTestRule:(id<OrgJunitRulesTestRule>)enclosedRule;

/*!
 @brief Returns a <code>RuleChain</code> without a <code>TestRule</code>.
 This method may
 be the starting point of a <code>RuleChain</code>.
 @return a <code>RuleChain</code> without a <code>TestRule</code>.
 */
+ (OrgJunitRulesRuleChain *)emptyRuleChain;

/*!
 @brief Returns a <code>RuleChain</code> with a single <code>TestRule</code>.
 This method
 is the usual starting point of a <code>RuleChain</code>.
 @param outerRule the outer rule of the <code>RuleChain</code>.
 @return a <code>RuleChain</code> with a single <code>TestRule</code>.
 */
+ (OrgJunitRulesRuleChain *)outerRuleWithOrgJunitRulesTestRule:(id<OrgJunitRulesTestRule>)outerRule;

@end

J2OBJC_STATIC_INIT(OrgJunitRulesRuleChain)

FOUNDATION_EXPORT OrgJunitRulesRuleChain *OrgJunitRulesRuleChain_emptyRuleChain();

FOUNDATION_EXPORT OrgJunitRulesRuleChain *OrgJunitRulesRuleChain_outerRuleWithOrgJunitRulesTestRule_(id<OrgJunitRulesTestRule> outerRule);

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitRulesRuleChain)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitRulesRuleChain")
