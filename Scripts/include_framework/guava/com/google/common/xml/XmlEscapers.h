//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/xml/XmlEscapers.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonXmlXmlEscapers")
#ifdef RESTRICT_ComGoogleCommonXmlXmlEscapers
#define INCLUDE_ALL_ComGoogleCommonXmlXmlEscapers 0
#else
#define INCLUDE_ALL_ComGoogleCommonXmlXmlEscapers 1
#endif
#undef RESTRICT_ComGoogleCommonXmlXmlEscapers

#if !defined (ComGoogleCommonXmlXmlEscapers_) && (INCLUDE_ALL_ComGoogleCommonXmlXmlEscapers || defined(INCLUDE_ComGoogleCommonXmlXmlEscapers))
#define ComGoogleCommonXmlXmlEscapers_

@class ComGoogleCommonEscapeEscaper;

@interface ComGoogleCommonXmlXmlEscapers : NSObject

#pragma mark Public

+ (ComGoogleCommonEscapeEscaper *)xmlAttributeEscaper;

+ (ComGoogleCommonEscapeEscaper *)xmlContentEscaper;

@end

J2OBJC_STATIC_INIT(ComGoogleCommonXmlXmlEscapers)

FOUNDATION_EXPORT ComGoogleCommonEscapeEscaper *ComGoogleCommonXmlXmlEscapers_xmlContentEscaper();

FOUNDATION_EXPORT ComGoogleCommonEscapeEscaper *ComGoogleCommonXmlXmlEscapers_xmlAttributeEscaper();

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonXmlXmlEscapers)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonXmlXmlEscapers")
