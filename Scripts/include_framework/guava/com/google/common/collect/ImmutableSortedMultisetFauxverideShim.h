//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ImmutableSortedMultisetFauxverideShim.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim")
#ifdef RESTRICT_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim 1
#endif
#undef RESTRICT_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim

#if !defined (ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_) && (INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim || defined(INCLUDE_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim))
#define ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_

#define RESTRICT_ComGoogleCommonCollectImmutableMultiset 1
#define INCLUDE_ComGoogleCommonCollectImmutableMultiset 1
#include "../../../../../com/google/common/collect/ImmutableMultiset.h"

@class ComGoogleCommonCollectImmutableSortedMultiset;
@class ComGoogleCommonCollectImmutableSortedMultiset_Builder;
@class IOSObjectArray;

@interface ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim : ComGoogleCommonCollectImmutableMultiset

#pragma mark Public

+ (ComGoogleCommonCollectImmutableSortedMultiset_Builder *)builder;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)copyOfWithNSObjectArray:(IOSObjectArray *)elements OBJC_METHOD_FAMILY_NONE;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)element;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4
                                                     withId:(id)e5;

+ (ComGoogleCommonCollectImmutableSortedMultiset *)ofWithId:(id)e1
                                                     withId:(id)e2
                                                     withId:(id)e3
                                                     withId:(id)e4
                                                     withId:(id)e5
                                                     withId:(id)e6
                                          withNSObjectArray:(IOSObjectArray *)remaining;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim)

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset_Builder *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_builder();

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_(id element);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_(id e1, id e2);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_(id e1, id e2, id e3);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_(id e1, id e2, id e3, id e4);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_withId_(id e1, id e2, id e3, id e4, id e5);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_ofWithId_withId_withId_withId_withId_withId_withNSObjectArray_(id e1, id e2, id e3, id e4, id e5, id e6, IOSObjectArray *remaining);

FOUNDATION_EXPORT ComGoogleCommonCollectImmutableSortedMultiset *ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_copyOfWithNSObjectArray_(IOSObjectArray *elements);

FOUNDATION_EXPORT void ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim_init(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectImmutableSortedMultisetFauxverideShim")
