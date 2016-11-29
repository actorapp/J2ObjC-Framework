//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/cache/LongAdder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCacheLongAdder")
#ifdef RESTRICT_ComGoogleCommonCacheLongAdder
#define INCLUDE_ALL_ComGoogleCommonCacheLongAdder 0
#else
#define INCLUDE_ALL_ComGoogleCommonCacheLongAdder 1
#endif
#undef RESTRICT_ComGoogleCommonCacheLongAdder

#if !defined (ComGoogleCommonCacheLongAdder_) && (INCLUDE_ALL_ComGoogleCommonCacheLongAdder || defined(INCLUDE_ComGoogleCommonCacheLongAdder))
#define ComGoogleCommonCacheLongAdder_

#define RESTRICT_ComGoogleCommonCacheStriped64 1
#define INCLUDE_ComGoogleCommonCacheStriped64 1
#include "com/google/common/cache/Striped64.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_ComGoogleCommonCacheLongAddable 1
#define INCLUDE_ComGoogleCommonCacheLongAddable 1
#include "com/google/common/cache/LongAddable.h"

@interface ComGoogleCommonCacheLongAdder : ComGoogleCommonCacheStriped64 < JavaIoSerializable, ComGoogleCommonCacheLongAddable >

#pragma mark Public

- (instancetype)init;

- (void)addWithLong:(jlong)x;

- (void)decrement;

- (jdouble)doubleValue;

- (jfloat)floatValue;

- (void)increment;

- (jint)intValue;

- (jlong)longLongValue;

- (void)reset;

- (jlong)sum;

- (jlong)sumThenReset;

- (NSString *)description;

#pragma mark Package-Private

- (jlong)fnWithLong:(jlong)v
           withLong:(jlong)x;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCacheLongAdder)

FOUNDATION_EXPORT void ComGoogleCommonCacheLongAdder_init(ComGoogleCommonCacheLongAdder *self);

FOUNDATION_EXPORT ComGoogleCommonCacheLongAdder *new_ComGoogleCommonCacheLongAdder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonCacheLongAdder *create_ComGoogleCommonCacheLongAdder_init();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCacheLongAdder)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCacheLongAdder")
