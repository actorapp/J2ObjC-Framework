//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/CacheBuilder.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder")
#ifdef RESTRICT_ComGoogleCommonCacheCacheBuilder
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder 1
#endif
#undef RESTRICT_ComGoogleCommonCacheCacheBuilder

#if !defined (ComGoogleCommonCacheCacheBuilder_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder))
#define ComGoogleCommonCacheCacheBuilder_

@class ComGoogleCommonBaseEquivalence;
@class ComGoogleCommonBaseTicker;
@class ComGoogleCommonCacheCacheBuilderSpec;
@class ComGoogleCommonCacheCacheLoader;
@class ComGoogleCommonCacheCacheStats;
@class ComGoogleCommonCacheLocalCache_Strength;
@class JavaUtilConcurrentTimeUnit;
@protocol ComGoogleCommonBaseSupplier;
@protocol ComGoogleCommonCacheCache;
@protocol ComGoogleCommonCacheLoadingCache;
@protocol ComGoogleCommonCacheRemovalListener;
@protocol ComGoogleCommonCacheWeigher;

@interface ComGoogleCommonCacheCacheBuilder : NSObject {
 @public
  jboolean strictParsing_;
  jint initialCapacity_;
  jint concurrencyLevel_;
  jlong maximumSize_;
  jlong maximumWeight_;
  id<ComGoogleCommonCacheWeigher> weigher_;
  ComGoogleCommonCacheLocalCache_Strength *keyStrength_;
  ComGoogleCommonCacheLocalCache_Strength *valueStrength_;
  jlong expireAfterWriteNanos_;
  jlong expireAfterAccessNanos_;
  jlong refreshNanos_;
  ComGoogleCommonBaseEquivalence *keyEquivalence_;
  ComGoogleCommonBaseEquivalence *valueEquivalence_;
  id<ComGoogleCommonCacheRemovalListener> removalListener_;
  ComGoogleCommonBaseTicker *ticker_;
  id<ComGoogleCommonBaseSupplier> statsCounterSupplier_;
}

#pragma mark Public

- (id<ComGoogleCommonCacheCache>)build;

- (id<ComGoogleCommonCacheLoadingCache>)buildWithComGoogleCommonCacheCacheLoader:(ComGoogleCommonCacheCacheLoader *)loader;

- (ComGoogleCommonCacheCacheBuilder *)concurrencyLevelWithInt:(jint)concurrencyLevel;

- (ComGoogleCommonCacheCacheBuilder *)expireAfterAccessWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (ComGoogleCommonCacheCacheBuilder *)expireAfterWriteWithLong:(jlong)duration
                                withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

+ (ComGoogleCommonCacheCacheBuilder *)fromWithComGoogleCommonCacheCacheBuilderSpec:(ComGoogleCommonCacheCacheBuilderSpec *)spec;

+ (ComGoogleCommonCacheCacheBuilder *)fromWithNSString:(NSString *)spec;

- (ComGoogleCommonCacheCacheBuilder *)initialCapacityWithInt:(jint)initialCapacity OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCacheCacheBuilder *)maximumSizeWithLong:(jlong)size;

- (ComGoogleCommonCacheCacheBuilder *)maximumWeightWithLong:(jlong)weight;

+ (ComGoogleCommonCacheCacheBuilder *)newBuilder OBJC_METHOD_FAMILY_NONE;

- (ComGoogleCommonCacheCacheBuilder *)recordStats;

- (ComGoogleCommonCacheCacheBuilder *)refreshAfterWriteWithLong:(jlong)duration
                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (ComGoogleCommonCacheCacheBuilder *)removalListenerWithComGoogleCommonCacheRemovalListener:(id<ComGoogleCommonCacheRemovalListener>)listener;

- (ComGoogleCommonCacheCacheBuilder *)softValues;

- (ComGoogleCommonCacheCacheBuilder *)tickerWithComGoogleCommonBaseTicker:(ComGoogleCommonBaseTicker *)ticker;

- (NSString *)description;

- (ComGoogleCommonCacheCacheBuilder *)weakKeys;

- (ComGoogleCommonCacheCacheBuilder *)weakValues;

- (ComGoogleCommonCacheCacheBuilder *)weigherWithComGoogleCommonCacheWeigher:(id<ComGoogleCommonCacheWeigher>)weigher;

#pragma mark Package-Private

- (instancetype)init;

- (jint)getConcurrencyLevel;

- (jlong)getExpireAfterAccessNanos;

- (jlong)getExpireAfterWriteNanos;

- (jint)getInitialCapacity;

- (ComGoogleCommonBaseEquivalence *)getKeyEquivalence;

- (ComGoogleCommonCacheLocalCache_Strength *)getKeyStrength;

- (jlong)getMaximumWeight;

- (jlong)getRefreshNanos;

- (id<ComGoogleCommonCacheRemovalListener>)getRemovalListener;

- (id<ComGoogleCommonBaseSupplier>)getStatsCounterSupplier;

- (ComGoogleCommonBaseTicker *)getTickerWithBoolean:(jboolean)recordsTime;

- (ComGoogleCommonBaseEquivalence *)getValueEquivalence;

- (ComGoogleCommonCacheLocalCache_Strength *)getValueStrength;

- (id<ComGoogleCommonCacheWeigher>)getWeigher;

- (jboolean)isRecordingStats;

- (ComGoogleCommonCacheCacheBuilder *)keyEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

- (ComGoogleCommonCacheCacheBuilder *)lenientParsing;

- (ComGoogleCommonCacheCacheBuilder *)setKeyStrengthWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

- (ComGoogleCommonCacheCacheBuilder *)setValueStrengthWithComGoogleCommonCacheLocalCache_Strength:(ComGoogleCommonCacheLocalCache_Strength *)strength;

- (ComGoogleCommonCacheCacheBuilder *)valueEquivalenceWithComGoogleCommonBaseEquivalence:(ComGoogleCommonBaseEquivalence *)equivalence;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder)

J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, weigher_, id<ComGoogleCommonCacheWeigher>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueStrength_, ComGoogleCommonCacheLocalCache_Strength *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, keyEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, valueEquivalence_, ComGoogleCommonBaseEquivalence *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, removalListener_, id<ComGoogleCommonCacheRemovalListener>)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, ticker_, ComGoogleCommonBaseTicker *)
J2OBJC_FIELD_SETTER(ComGoogleCommonCacheCacheBuilder, statsCounterSupplier_, id<ComGoogleCommonBaseSupplier>)

inline id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_get_NULL_STATS_COUNTER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_NULL_STATS_COUNTER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, NULL_STATS_COUNTER, id<ComGoogleCommonBaseSupplier>)

inline ComGoogleCommonCacheCacheStats *ComGoogleCommonCacheCacheBuilder_get_EMPTY_STATS();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheStats *ComGoogleCommonCacheCacheBuilder_EMPTY_STATS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, EMPTY_STATS, ComGoogleCommonCacheCacheStats *)

inline id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_get_CACHE_STATS_COUNTER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<ComGoogleCommonBaseSupplier> ComGoogleCommonCacheCacheBuilder_CACHE_STATS_COUNTER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, CACHE_STATS_COUNTER, id<ComGoogleCommonBaseSupplier>)

inline ComGoogleCommonBaseTicker *ComGoogleCommonCacheCacheBuilder_get_NULL_TICKER();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT ComGoogleCommonBaseTicker *ComGoogleCommonCacheCacheBuilder_NULL_TICKER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(ComGoogleCommonCacheCacheBuilder, NULL_TICKER, ComGoogleCommonBaseTicker *)

inline jint ComGoogleCommonCacheCacheBuilder_get_UNSET_INT();
#define ComGoogleCommonCacheCacheBuilder_UNSET_INT -1
J2OBJC_STATIC_FIELD_CONSTANT(ComGoogleCommonCacheCacheBuilder, UNSET_INT, jint)

FOUNDATION_EXPORT void ComGoogleCommonCacheCacheBuilder_init(ComGoogleCommonCacheCacheBuilder *self);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *new_ComGoogleCommonCacheCacheBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *create_ComGoogleCommonCacheCacheBuilder_init();

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_newBuilder();

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithComGoogleCommonCacheCacheBuilderSpec_(ComGoogleCommonCacheCacheBuilderSpec *spec);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder *ComGoogleCommonCacheCacheBuilder_fromWithNSString_(NSString *spec);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_NullListener_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder_NullListener))
#define ComGoogleCommonCacheCacheBuilder_NullListener_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonCacheRemovalListener 1
#define INCLUDE_ComGoogleCommonCacheRemovalListener 1
#include "../../../../../com/google/common/cache/RemovalListener.h"

@class ComGoogleCommonCacheRemovalNotification;
@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCacheCacheBuilder_NullListener_Enum) {
  ComGoogleCommonCacheCacheBuilder_NullListener_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonCacheCacheBuilder_NullListener : JavaLangEnum < NSCopying, ComGoogleCommonCacheRemovalListener >

#pragma mark Public

- (void)onRemovalWithComGoogleCommonCacheRemovalNotification:(ComGoogleCommonCacheRemovalNotification *)notification;

+ (ComGoogleCommonCacheCacheBuilder_NullListener *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_NullListener)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_values_[];

inline ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCacheCacheBuilder_NullListener, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_NullListener_values();

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_NullListener *ComGoogleCommonCacheCacheBuilder_NullListener_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_NullListener)

#endif

#if !defined (ComGoogleCommonCacheCacheBuilder_OneWeigher_) && (INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder || defined(INCLUDE_ComGoogleCommonCacheCacheBuilder_OneWeigher))
#define ComGoogleCommonCacheCacheBuilder_OneWeigher_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../../../../java/lang/Enum.h"

#define RESTRICT_ComGoogleCommonCacheWeigher 1
#define INCLUDE_ComGoogleCommonCacheWeigher 1
#include "../../../../../com/google/common/cache/Weigher.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum) {
  ComGoogleCommonCacheCacheBuilder_OneWeigher_Enum_INSTANCE = 0,
};

@interface ComGoogleCommonCacheCacheBuilder_OneWeigher : JavaLangEnum < NSCopying, ComGoogleCommonCacheWeigher >

#pragma mark Public

+ (ComGoogleCommonCacheCacheBuilder_OneWeigher *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

- (jint)weighWithId:(id)key
             withId:(id)value;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonCacheCacheBuilder_OneWeigher)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_values_[];

inline ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_get_INSTANCE();
J2OBJC_ENUM_CONSTANT(ComGoogleCommonCacheCacheBuilder_OneWeigher, INSTANCE)

FOUNDATION_EXPORT IOSObjectArray *ComGoogleCommonCacheCacheBuilder_OneWeigher_values();

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT ComGoogleCommonCacheCacheBuilder_OneWeigher *ComGoogleCommonCacheCacheBuilder_OneWeigher_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheCacheBuilder_OneWeigher)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheCacheBuilder")
