//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/core/IsNull.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestCoreIsNull")
#ifdef RESTRICT_OrgHamcrestCoreIsNull
#define INCLUDE_ALL_OrgHamcrestCoreIsNull 0
#else
#define INCLUDE_ALL_OrgHamcrestCoreIsNull 1
#endif
#undef RESTRICT_OrgHamcrestCoreIsNull

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestCoreIsNull_) && (INCLUDE_ALL_OrgHamcrestCoreIsNull || defined(INCLUDE_OrgHamcrestCoreIsNull))
#define OrgHamcrestCoreIsNull_

#define RESTRICT_OrgHamcrestBaseMatcher 1
#define INCLUDE_OrgHamcrestBaseMatcher 1
#include "org/hamcrest/BaseMatcher.h"

@class IOSClass;
@protocol OrgHamcrestDescription;
@protocol OrgHamcrestMatcher;

/*!
 @brief Is the value null?
 */
@interface OrgHamcrestCoreIsNull : OrgHamcrestBaseMatcher

#pragma mark Public

- (instancetype)init;

- (void)describeToWithOrgHamcrestDescription:(id<OrgHamcrestDescription>)description_;

- (jboolean)matchesWithId:(id)o;

/*!
 @brief A shortcut to the frequently used <code>not(nullValue())</code>.
 <p/>
 For example:
 @code
assertThat(cheese, is(notNullValue()))
@endcode
 instead of:
 @code
assertThat(cheese, is(not(nullValue())))
@endcode
 */
+ (id<OrgHamcrestMatcher>)notNullValue;

/*!
 @brief A shortcut to the frequently used <code>not(nullValue(X.class)).
 Accepts a
 single dummy argument to facilitate type inference.</code>.
 <p/>
 For example:
 @code
assertThat(cheese, is(notNullValue(X.class)))
@endcode
 instead of:
 @code
assertThat(cheese, is(not(nullValue(X.class))))
@endcode
 @param type
 dummy parameter used to infer the generic type of the returned matcher
 */
+ (id<OrgHamcrestMatcher>)notNullValueWithIOSClass:(IOSClass *)type;

/*!
 @brief Creates a matcher that matches if examined object is <code>null</code>.
 <p/>
 For example:
 @code
assertThat(cheese, is(nullValue())
@endcode
 */
+ (id<OrgHamcrestMatcher>)nullValue;

/*!
 @brief Creates a matcher that matches if examined object is <code>null</code>.
 Accepts a
 single dummy argument to facilitate type inference.
 <p/>
 For example:
 @code
assertThat(cheese, is(nullValue(Cheese.class))
@endcode
 @param type
 dummy parameter used to infer the generic type of the returned matcher
 */
+ (id<OrgHamcrestMatcher>)nullValueWithIOSClass:(IOSClass *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestCoreIsNull)

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNull_nullValue();

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNull_notNullValue();

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNull_nullValueWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT id<OrgHamcrestMatcher> OrgHamcrestCoreIsNull_notNullValueWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT void OrgHamcrestCoreIsNull_init(OrgHamcrestCoreIsNull *self);

FOUNDATION_EXPORT OrgHamcrestCoreIsNull *new_OrgHamcrestCoreIsNull_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestCoreIsNull *create_OrgHamcrestCoreIsNull_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestCoreIsNull)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestCoreIsNull")
