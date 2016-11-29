//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/Answers.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoAnswers")
#ifdef RESTRICT_OrgMockitoAnswers
#define INCLUDE_ALL_OrgMockitoAnswers 0
#else
#define INCLUDE_ALL_OrgMockitoAnswers 1
#endif
#undef RESTRICT_OrgMockitoAnswers

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoAnswers_) && (INCLUDE_ALL_OrgMockitoAnswers || defined(INCLUDE_OrgMockitoAnswers))
#define OrgMockitoAnswers_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "java/lang/Enum.h"

@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;

typedef NS_ENUM(NSUInteger, OrgMockitoAnswers_Enum) {
  OrgMockitoAnswers_Enum_RETURNS_DEFAULTS = 0,
  OrgMockitoAnswers_Enum_RETURNS_SMART_NULLS = 1,
  OrgMockitoAnswers_Enum_RETURNS_MOCKS = 2,
  OrgMockitoAnswers_Enum_RETURNS_DEEP_STUBS = 3,
  OrgMockitoAnswers_Enum_CALLS_REAL_METHODS = 4,
};

/*!
 @brief Enumeration of pre-configured mock answers
 <p>
 You can use it to pass extra parameters to &#064;Mock annotation, see more info here: <code>Mock</code>
 <p>
 Example:
 <pre class="code"><code class="java">
 &#064;Mock(answer = RETURNS_DEEP_STUBS) UserProvider userProvider;
 
@endcode
 <b>This is not the full list</b> of Answers available in Mockito.
 Some interesting answers can be found in org.mockito.stubbing.answers package.
 */
@interface OrgMockitoAnswers : JavaLangEnum < NSCopying >

+ (OrgMockitoAnswers * __nonnull)RETURNS_DEFAULTS;

+ (OrgMockitoAnswers * __nonnull)RETURNS_SMART_NULLS;

+ (OrgMockitoAnswers * __nonnull)RETURNS_MOCKS;

+ (OrgMockitoAnswers * __nonnull)RETURNS_DEEP_STUBS;

+ (OrgMockitoAnswers * __nonnull)CALLS_REAL_METHODS;

#pragma mark Public

- (id<OrgMockitoStubbingAnswer>)get;

+ (OrgMockitoAnswers *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;
- (OrgMockitoAnswers_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(OrgMockitoAnswers)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT OrgMockitoAnswers *OrgMockitoAnswers_values_[];

/*!
 @brief The default configured answer of every mock.
 <p>Please see the <code>org.mockito.Mockito.RETURNS_DEFAULTS</code> documentation for more details.</p>
 - seealso: org.mockito.Mockito#RETURNS_DEFAULTS
 */
inline OrgMockitoAnswers *OrgMockitoAnswers_get_RETURNS_DEFAULTS();
J2OBJC_ENUM_CONSTANT(OrgMockitoAnswers, RETURNS_DEFAULTS)

/*!
 @brief An answer that returns smart-nulls.
 <p>Please see the <code>org.mockito.Mockito.RETURNS_SMART_NULLS</code> documentation for more details.</p>
 - seealso: org.mockito.Mockito#RETURNS_SMART_NULLS
 */
inline OrgMockitoAnswers *OrgMockitoAnswers_get_RETURNS_SMART_NULLS();
J2OBJC_ENUM_CONSTANT(OrgMockitoAnswers, RETURNS_SMART_NULLS)

/*!
 @brief An answer that returns <strong>mocks</strong> (not stubs).
 <p>Please see the <code>org.mockito.Mockito.RETURNS_MOCKS</code> documentation for more details.</p>
 - seealso: org.mockito.Mockito#RETURNS_MOCKS
 */
inline OrgMockitoAnswers *OrgMockitoAnswers_get_RETURNS_MOCKS();
J2OBJC_ENUM_CONSTANT(OrgMockitoAnswers, RETURNS_MOCKS)

/*!
 @brief An answer that returns <strong>deep stubs</strong> (not mocks).
 <p>Please see the <code>org.mockito.Mockito.RETURNS_DEEP_STUBS</code> documentation for more details.</p>
 - seealso: org.mockito.Mockito#RETURNS_DEEP_STUBS
 */
inline OrgMockitoAnswers *OrgMockitoAnswers_get_RETURNS_DEEP_STUBS();
J2OBJC_ENUM_CONSTANT(OrgMockitoAnswers, RETURNS_DEEP_STUBS)

/*!
 @brief An answer that calls the real methods (used for partial mocks).
 <p>Please see the <code>org.mockito.Mockito.CALLS_REAL_METHODS</code> documentation for more details.</p>
 - seealso: org.mockito.Mockito#CALLS_REAL_METHODS
 */
inline OrgMockitoAnswers *OrgMockitoAnswers_get_CALLS_REAL_METHODS();
J2OBJC_ENUM_CONSTANT(OrgMockitoAnswers, CALLS_REAL_METHODS)

FOUNDATION_EXPORT IOSObjectArray *OrgMockitoAnswers_values();

FOUNDATION_EXPORT OrgMockitoAnswers *OrgMockitoAnswers_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT OrgMockitoAnswers *OrgMockitoAnswers_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoAnswers)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoAnswers")
