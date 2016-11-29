//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/SortedMultiset.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedMultiset")
#ifdef RESTRICT_ComGoogleCommonCollectSortedMultiset
#define INCLUDE_ALL_ComGoogleCommonCollectSortedMultiset 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectSortedMultiset 1
#endif
#undef RESTRICT_ComGoogleCommonCollectSortedMultiset

#if !defined (ComGoogleCommonCollectSortedMultiset_) && (INCLUDE_ALL_ComGoogleCommonCollectSortedMultiset || defined(INCLUDE_ComGoogleCommonCollectSortedMultiset))
#define ComGoogleCommonCollectSortedMultiset_

#define RESTRICT_ComGoogleCommonCollectSortedMultisetBridge 1
#define INCLUDE_ComGoogleCommonCollectSortedMultisetBridge 1
#include "../../../../../com/google/common/collect/SortedMultisetBridge.h"

#define RESTRICT_ComGoogleCommonCollectSortedIterable 1
#define INCLUDE_ComGoogleCommonCollectSortedIterable 1
#include "../../../../../com/google/common/collect/SortedIterable.h"

@class ComGoogleCommonCollectBoundType;
@protocol ComGoogleCommonCollectMultiset_Entry;
@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilIterator;
@protocol JavaUtilNavigableSet;
@protocol JavaUtilSet;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

@protocol ComGoogleCommonCollectSortedMultiset < ComGoogleCommonCollectSortedMultisetBridge, ComGoogleCommonCollectSortedIterable, JavaObject >

- (id<JavaUtilComparator>)comparator;

- (id<ComGoogleCommonCollectMultiset_Entry>)firstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)lastEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollFirstEntry;

- (id<ComGoogleCommonCollectMultiset_Entry>)pollLastEntry;

- (id<JavaUtilNavigableSet>)elementSet;

- (id<JavaUtilSet>)entrySet;

- (id<JavaUtilIterator>)iterator;

- (id<ComGoogleCommonCollectSortedMultiset>)descendingMultiset;

- (id<ComGoogleCommonCollectSortedMultiset>)headMultisetWithId:(id)upperBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

- (id<ComGoogleCommonCollectSortedMultiset>)subMultisetWithId:(id)lowerBound
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)lowerBoundType
                                                       withId:(id)upperBound
                          withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)upperBoundType;

- (id<ComGoogleCommonCollectSortedMultiset>)tailMultisetWithId:(id)lowerBound
                           withComGoogleCommonCollectBoundType:(ComGoogleCommonCollectBoundType *)boundType;

@end

@interface ComGoogleCommonCollectSortedMultiset : NSObject < ComGoogleCommonCollectSortedMultiset >

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectSortedMultiset)

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectSortedMultiset)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectSortedMultiset")
