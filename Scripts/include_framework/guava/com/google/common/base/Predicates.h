//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Predicates.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBasePredicates")
#ifdef RESTRICT_ComGoogleCommonBasePredicates
#define INCLUDE_ALL_ComGoogleCommonBasePredicates 0
#else
#define INCLUDE_ALL_ComGoogleCommonBasePredicates 1
#endif
#undef RESTRICT_ComGoogleCommonBasePredicates

#if !defined (ComGoogleCommonBasePredicates_) && (INCLUDE_ALL_ComGoogleCommonBasePredicates || defined(INCLUDE_ComGoogleCommonBasePredicates))
#define ComGoogleCommonBasePredicates_

@class IOSClass;
@class IOSObjectArray;
@class JavaUtilRegexPattern;
@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol JavaLangIterable;
@protocol JavaUtilCollection;
@protocol JavaUtilList;

@interface ComGoogleCommonBasePredicates : NSObject

#pragma mark Public

+ (id<ComGoogleCommonBasePredicate>)alwaysFalse;

+ (id<ComGoogleCommonBasePredicate>)alwaysTrue;

+ (id<ComGoogleCommonBasePredicate>)and__WithJavaLangIterable:(id<JavaLangIterable>)components;

+ (id<ComGoogleCommonBasePredicate>)and__WithComGoogleCommonBasePredicateArray:(IOSObjectArray *)components;

+ (id<ComGoogleCommonBasePredicate>)and__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)first
                                         withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)second;

+ (id<ComGoogleCommonBasePredicate>)assignableFromWithIOSClass:(IOSClass *)clazz;

+ (id<ComGoogleCommonBasePredicate>)composeWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate
                                            withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)function;

+ (id<ComGoogleCommonBasePredicate>)containsWithJavaUtilRegexPattern:(JavaUtilRegexPattern *)pattern;

+ (id<ComGoogleCommonBasePredicate>)containsPatternWithNSString:(NSString *)pattern;

+ (id<ComGoogleCommonBasePredicate>)equalToWithId:(id)target;

+ (id<ComGoogleCommonBasePredicate>)inWithJavaUtilCollection:(id<JavaUtilCollection>)target;

+ (id<ComGoogleCommonBasePredicate>)instanceOfWithIOSClass:(IOSClass *)clazz;

+ (id<ComGoogleCommonBasePredicate>)isNull;

+ (id<ComGoogleCommonBasePredicate>)not__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<ComGoogleCommonBasePredicate>)notNull;

+ (id<ComGoogleCommonBasePredicate>)or__WithJavaLangIterable:(id<JavaLangIterable>)components;

+ (id<ComGoogleCommonBasePredicate>)or__WithComGoogleCommonBasePredicateArray:(IOSObjectArray *)components;

+ (id<ComGoogleCommonBasePredicate>)or__WithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)first
                                        withComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)second;

#pragma mark Package-Private

+ (id<JavaUtilList>)defensiveCopyWithJavaLangIterable:(id<JavaLangIterable>)iterable;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBasePredicates)

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_alwaysTrue();

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_alwaysFalse();

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_isNull();

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_notNull();

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_not__WithComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithJavaLangIterable_(id<JavaLangIterable> components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithComGoogleCommonBasePredicateArray_(IOSObjectArray *components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_and__WithComGoogleCommonBasePredicate_withComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> first, id<ComGoogleCommonBasePredicate> second);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithJavaLangIterable_(id<JavaLangIterable> components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithComGoogleCommonBasePredicateArray_(IOSObjectArray *components);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_or__WithComGoogleCommonBasePredicate_withComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> first, id<ComGoogleCommonBasePredicate> second);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_equalToWithId_(id target);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_instanceOfWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_assignableFromWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_inWithJavaUtilCollection_(id<JavaUtilCollection> target);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_composeWithComGoogleCommonBasePredicate_withComGoogleCommonBaseFunction_(id<ComGoogleCommonBasePredicate> predicate, id<ComGoogleCommonBaseFunction> function);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_containsPatternWithNSString_(NSString *pattern);

FOUNDATION_EXPORT id<ComGoogleCommonBasePredicate> ComGoogleCommonBasePredicates_containsWithJavaUtilRegexPattern_(JavaUtilRegexPattern *pattern);

FOUNDATION_EXPORT id<JavaUtilList> ComGoogleCommonBasePredicates_defensiveCopyWithJavaLangIterable_(id<JavaLangIterable> iterable);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBasePredicates)

#endif

#if !defined (ComGoogleCommonBasePredicates_ObjectPredicate_) && (INCLUDE_ALL_ComGoogleCommonBasePredicates || defined(INCLUDE_ComGoogleCommonBasePredicates_ObjectPredicate))
#define ComGoogleCommonBasePredicates_ObjectPredicate_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonBasePredicate 1
#define INCLUDE_ComGoogleCommonBasePredicate 1
#include "../../../../../com/google/common/base/Predicate.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonBasePredicates_ObjectPredicate_Enum) {
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_ALWAYS_TRUE = 0,
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_ALWAYS_FALSE = 1,
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_IS_NULL = 2,
  ComGoogleCommonBasePredicates_ObjectPredicate_Enum_NOT_NULL = 3,
};

@interface ComGoogleCommonBasePredicates_ObjectPredicate : JavaLangEnum < NSCopying, ComGoogleCommonBasePredicate >

#pragma mark Public

+ (ComGoogleCommonBasePredicates_ObjectPredicate *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id<ComGoogleCommonBasePredicate>)withNarrowedType;

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonBasePredicates_ObjectPredicate)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_values_[];

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_ALWAYS_TRUE();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, ALWAYS_TRUE)

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_ALWAYS_FALSE();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, ALWAYS_FALSE)

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_IS_NULL();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, IS_NULL)

inline ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_get_NOT_NULL();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonBasePredicates_ObjectPredicate, NOT_NULL)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonBasePredicates_ObjectPredicate_values();

FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonBasePredicates_ObjectPredicate *ComGoogleCommonBasePredicates_ObjectPredicate_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBasePredicates_ObjectPredicate)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBasePredicates")
