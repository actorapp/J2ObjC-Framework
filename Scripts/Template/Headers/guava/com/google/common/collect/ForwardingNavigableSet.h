//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingNavigableSet.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingNavigableSet
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingNavigableSet

#if !defined (ComGoogleCommonCollectForwardingNavigableSet_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet || defined(INCLUDE_ComGoogleCommonCollectForwardingNavigableSet))
#define ComGoogleCommonCollectForwardingNavigableSet_

#define RESTRICT_ComGoogleCommonCollectForwardingSortedSet 1
#define INCLUDE_ComGoogleCommonCollectForwardingSortedSet 1
#include "../../../../../com/google/common/collect/ForwardingSortedSet.h"

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "../../../../../java/util/NavigableSet.h"

@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectForwardingNavigableSet : ComGoogleCommonCollectForwardingSortedSet < JavaUtilNavigableSet >

#pragma mark Public

- (id)ceilingWithId:(id)e;

- (id<JavaUtilIterator>)descendingIterator;

- (id<JavaUtilNavigableSet>)descendingSet;

- (id)floorWithId:(id)e;

- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

- (id)higherWithId:(id)e;

- (id)lowerWithId:(id)e;

- (id)pollFirst;

- (id)pollLast;

- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilNavigableSet>)delegate;

- (id)standardCeilingWithId:(id)e;

- (id)standardFirst;

- (id)standardFloorWithId:(id)e;

- (id<JavaUtilSortedSet>)standardHeadSetWithId:(id)toElement;

- (id)standardHigherWithId:(id)e;

- (id)standardLast;

- (id)standardLowerWithId:(id)e;

- (id)standardPollFirst;

- (id)standardPollLast;

- (id<JavaUtilNavigableSet>)standardSubSetWithId:(id)fromElement
                                     withBoolean:(jboolean)fromInclusive
                                          withId:(id)toElement
                                     withBoolean:(jboolean)toInclusive;

- (id<JavaUtilSortedSet>)standardSubSetWithId:(id)fromElement
                                       withId:(id)toElement;

- (id<JavaUtilSortedSet>)standardTailSetWithId:(id)fromElement;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingNavigableSet_init(ComGoogleCommonCollectForwardingNavigableSet *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableSet)

#endif

#if !defined (ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet || defined(INCLUDE_ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet))
#define ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_

#define RESTRICT_ComGoogleCommonCollectSets 1
#define INCLUDE_ComGoogleCommonCollectSets_DescendingSet 1
#include "../../../../../com/google/common/collect/Sets.h"

@class ComGoogleCommonCollectForwardingNavigableSet;

@interface ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet : ComGoogleCommonCollectSets_DescendingSet

#pragma mark Public

- (instancetype)initWithComGoogleCommonCollectForwardingNavigableSet:(ComGoogleCommonCollectForwardingNavigableSet *)outer$;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_initWithComGoogleCommonCollectForwardingNavigableSet_(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet *self, ComGoogleCommonCollectForwardingNavigableSet *outer$);

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet *new_ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_initWithComGoogleCommonCollectForwardingNavigableSet_(ComGoogleCommonCollectForwardingNavigableSet *outer$) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet *create_ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet_initWithComGoogleCommonCollectForwardingNavigableSet_(ComGoogleCommonCollectForwardingNavigableSet *outer$);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingNavigableSet_StandardDescendingSet)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingNavigableSet")
