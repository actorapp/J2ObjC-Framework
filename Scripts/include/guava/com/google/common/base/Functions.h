//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/Functions.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFunctions")
#ifdef RESTRICT_ComGoogleCommonBaseFunctions
#define INCLUDE_ALL_ComGoogleCommonBaseFunctions 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFunctions 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFunctions

#if !defined (ComGoogleCommonBaseFunctions_) && (INCLUDE_ALL_ComGoogleCommonBaseFunctions || defined(INCLUDE_ComGoogleCommonBaseFunctions))
#define ComGoogleCommonBaseFunctions_

@protocol ComGoogleCommonBaseFunction;
@protocol ComGoogleCommonBasePredicate;
@protocol ComGoogleCommonBaseSupplier;
@protocol JavaUtilMap;

@interface ComGoogleCommonBaseFunctions : NSObject

#pragma mark Public

+ (id<ComGoogleCommonBaseFunction>)composeWithComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)g
                                          withComGoogleCommonBaseFunction:(id<ComGoogleCommonBaseFunction>)f;

+ (id<ComGoogleCommonBaseFunction>)constantWithId:(id)value;

+ (id<ComGoogleCommonBaseFunction>)forMapWithJavaUtilMap:(id<JavaUtilMap>)map
                                                  withId:(id)defaultValue;

+ (id<ComGoogleCommonBaseFunction>)forMapWithJavaUtilMap:(id<JavaUtilMap>)map;

+ (id<ComGoogleCommonBaseFunction>)forPredicateWithComGoogleCommonBasePredicate:(id<ComGoogleCommonBasePredicate>)predicate;

+ (id<ComGoogleCommonBaseFunction>)forSupplierWithComGoogleCommonBaseSupplier:(id<ComGoogleCommonBaseSupplier>)supplier;

+ (id<ComGoogleCommonBaseFunction>)identity;

+ (id<ComGoogleCommonBaseFunction>)toStringFunction;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFunctions)

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_toStringFunction();

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_identity();

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forMapWithJavaUtilMap_(id<JavaUtilMap> map);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forMapWithJavaUtilMap_withId_(id<JavaUtilMap> map, id defaultValue);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_composeWithComGoogleCommonBaseFunction_withComGoogleCommonBaseFunction_(id<ComGoogleCommonBaseFunction> g, id<ComGoogleCommonBaseFunction> f);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forPredicateWithComGoogleCommonBasePredicate_(id<ComGoogleCommonBasePredicate> predicate);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_constantWithId_(id value);

FOUNDATION_EXPORT id<ComGoogleCommonBaseFunction> ComGoogleCommonBaseFunctions_forSupplierWithComGoogleCommonBaseSupplier_(id<ComGoogleCommonBaseSupplier> supplier);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFunctions)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFunctions")
