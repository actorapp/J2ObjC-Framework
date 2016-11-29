//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/CharSink.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoCharSink")
#ifdef RESTRICT_ComGoogleCommonIoCharSink
#define INCLUDE_ALL_ComGoogleCommonIoCharSink 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoCharSink 1
#endif
#undef RESTRICT_ComGoogleCommonIoCharSink

#if !defined (ComGoogleCommonIoCharSink_) && (INCLUDE_ALL_ComGoogleCommonIoCharSink || defined(INCLUDE_ComGoogleCommonIoCharSink))
#define ComGoogleCommonIoCharSink_

@class JavaIoWriter;
@protocol JavaLangCharSequence;
@protocol JavaLangIterable;
@protocol JavaLangReadable;

@interface ComGoogleCommonIoCharSink : NSObject

#pragma mark Public

- (JavaIoWriter *)openBufferedStream;

- (JavaIoWriter *)openStream;

- (void)writeWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSequence;

- (jlong)writeFromWithJavaLangReadable:(id<JavaLangReadable>)readable;

- (void)writeLinesWithJavaLangIterable:(id<JavaLangIterable>)lines;

- (void)writeLinesWithJavaLangIterable:(id<JavaLangIterable>)lines
                          withNSString:(NSString *)lineSeparator;

#pragma mark Protected

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoCharSink)

FOUNDATION_EXPORT void ComGoogleCommonIoCharSink_init(ComGoogleCommonIoCharSink *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoCharSink)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoCharSink")
