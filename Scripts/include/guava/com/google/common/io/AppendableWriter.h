//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/io/AppendableWriter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonIoAppendableWriter")
#ifdef RESTRICT_ComGoogleCommonIoAppendableWriter
#define INCLUDE_ALL_ComGoogleCommonIoAppendableWriter 0
#else
#define INCLUDE_ALL_ComGoogleCommonIoAppendableWriter 1
#endif
#undef RESTRICT_ComGoogleCommonIoAppendableWriter

#if !defined (ComGoogleCommonIoAppendableWriter_) && (INCLUDE_ALL_ComGoogleCommonIoAppendableWriter || defined(INCLUDE_ComGoogleCommonIoAppendableWriter))
#define ComGoogleCommonIoAppendableWriter_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "java/io/Writer.h"

@class IOSCharArray;
@protocol JavaLangAppendable;
@protocol JavaLangCharSequence;

@interface ComGoogleCommonIoAppendableWriter : JavaIoWriter

#pragma mark Public

- (JavaIoWriter *)appendWithChar:(jchar)c;

- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSeq;

- (JavaIoWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)charSeq
                                         withInt:(jint)start
                                         withInt:(jint)end;

- (void)close;

- (void)flush;

- (void)writeWithCharArray:(IOSCharArray *)cbuf
                   withInt:(jint)off
                   withInt:(jint)len;

- (void)writeWithInt:(jint)c;

- (void)writeWithNSString:(NSString *)str;

- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)off
                  withInt:(jint)len;

#pragma mark Package-Private

- (instancetype)initWithJavaLangAppendable:(id<JavaLangAppendable>)target;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonIoAppendableWriter)

FOUNDATION_EXPORT void ComGoogleCommonIoAppendableWriter_initWithJavaLangAppendable_(ComGoogleCommonIoAppendableWriter *self, id<JavaLangAppendable> target);

FOUNDATION_EXPORT ComGoogleCommonIoAppendableWriter *new_ComGoogleCommonIoAppendableWriter_initWithJavaLangAppendable_(id<JavaLangAppendable> target) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleCommonIoAppendableWriter *create_ComGoogleCommonIoAppendableWriter_initWithJavaLangAppendable_(id<JavaLangAppendable> target);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonIoAppendableWriter)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonIoAppendableWriter")
