//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/TreeBasedTable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeBasedTable")
#ifdef RESTRICT_ComGoogleCommonCollectTreeBasedTable
#define INCLUDE_ALL_ComGoogleCommonCollectTreeBasedTable 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectTreeBasedTable 1
#endif
#undef RESTRICT_ComGoogleCommonCollectTreeBasedTable

#if !defined (ComGoogleCommonCollectTreeBasedTable_) && (INCLUDE_ALL_ComGoogleCommonCollectTreeBasedTable || defined(INCLUDE_ComGoogleCommonCollectTreeBasedTable))
#define ComGoogleCommonCollectTreeBasedTable_

#define RESTRICT_ComGoogleCommonCollectStandardRowSortedTable 1
#define INCLUDE_ComGoogleCommonCollectStandardRowSortedTable 1
#include "com/google/common/collect/StandardRowSortedTable.h"

@protocol JavaUtilComparator;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedMap;
@protocol JavaUtilSortedSet;

@interface ComGoogleCommonCollectTreeBasedTable : ComGoogleCommonCollectStandardRowSortedTable

#pragma mark Public

- (id<JavaUtilComparator>)columnComparator;

+ (ComGoogleCommonCollectTreeBasedTable *)create;

+ (ComGoogleCommonCollectTreeBasedTable *)createWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                                                withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

+ (ComGoogleCommonCollectTreeBasedTable *)createWithComGoogleCommonCollectTreeBasedTable:(ComGoogleCommonCollectTreeBasedTable *)table;

- (id<JavaUtilSortedMap>)rowWithId:(id)rowKey;

- (id<JavaUtilComparator>)rowComparator;

- (id<JavaUtilSortedSet>)rowKeySet;

- (id<JavaUtilSortedMap>)rowMap;

#pragma mark Package-Private

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)rowComparator
                    withJavaUtilComparator:(id<JavaUtilComparator>)columnComparator;

- (id<JavaUtilIterator>)createColumnKeyIterator;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectTreeBasedTable)

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_create();

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_createWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *ComGoogleCommonCollectTreeBasedTable_createWithComGoogleCommonCollectTreeBasedTable_(ComGoogleCommonCollectTreeBasedTable *table);

FOUNDATION_EXPORT void ComGoogleCommonCollectTreeBasedTable_initWithJavaUtilComparator_withJavaUtilComparator_(ComGoogleCommonCollectTreeBasedTable *self, id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *new_ComGoogleCommonCollectTreeBasedTable_initWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCollectTreeBasedTable *create_ComGoogleCommonCollectTreeBasedTable_initWithJavaUtilComparator_withJavaUtilComparator_(id<JavaUtilComparator> rowComparator, id<JavaUtilComparator> columnComparator);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectTreeBasedTable)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectTreeBasedTable")
