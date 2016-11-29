//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/AbstractRangeSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet")
#ifdef RESTRICT_ComGoogleCommonCollectAbstractRangeSet
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectAbstractRangeSet

#if !defined (ComGoogleCommonCollectAbstractRangeSet_) && (INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet || defined(INCLUDE_ComGoogleCommonCollectAbstractRangeSet))
#define ComGoogleCommonCollectAbstractRangeSet_

#define RESTRICT_ComGoogleCommonCollectRangeSet 1
#define INCLUDE_ComGoogleCommonCollectRangeSet 1
#include "../../../../../com/google/common/collect/RangeSet.h"

@class ComGoogleCommonCollectRange;
@protocol JavaLangComparable;

@interface ComGoogleCommonCollectAbstractRangeSet : NSObject < ComGoogleCommonCollectRangeSet >

#pragma mark Public

- (void)addWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)addAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (void)clear;

- (jboolean)containsWithJavaLangComparable:(id<JavaLangComparable>)value;

- (jboolean)enclosesWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)otherRange;

- (jboolean)enclosesAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (jboolean)isEqual:(id)obj;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (ComGoogleCommonCollectRange *)rangeContainingWithJavaLangComparable:(id<JavaLangComparable>)value;

- (void)removeWithComGoogleCommonCollectRange:(ComGoogleCommonCollectRange *)range;

- (void)removeAllWithComGoogleCommonCollectRangeSet:(id<ComGoogleCommonCollectRangeSet>)other;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectAbstractRangeSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectAbstractRangeSet_init(ComGoogleCommonCollectAbstractRangeSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectAbstractRangeSet)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectAbstractRangeSet")
