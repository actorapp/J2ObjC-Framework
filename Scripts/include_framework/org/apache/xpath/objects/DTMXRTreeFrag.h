//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/DTMXRTreeFrag.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsDTMXRTreeFrag")
#ifdef RESTRICT_OrgApacheXpathObjectsDTMXRTreeFrag
#define INCLUDE_ALL_OrgApacheXpathObjectsDTMXRTreeFrag 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsDTMXRTreeFrag 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsDTMXRTreeFrag

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathObjectsDTMXRTreeFrag_) && (INCLUDE_ALL_OrgApacheXpathObjectsDTMXRTreeFrag || defined(INCLUDE_OrgApacheXpathObjectsDTMXRTreeFrag))
#define OrgApacheXpathObjectsDTMXRTreeFrag_

@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTM;

@interface OrgApacheXpathObjectsDTMXRTreeFrag : NSObject

#pragma mark Public

- (instancetype)initWithInt:(jint)dtmIdentity
withOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

- (void)destruct;

- (jboolean)isEqual:(id)obj;

- (jint)getDTMIdentity;

- (NSUInteger)hash;

#pragma mark Package-Private

- (id<OrgApacheXmlDtmDTM>)getDTM;

- (OrgApacheXpathXPathContext *)getXPathContext;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsDTMXRTreeFrag)

FOUNDATION_EXPORT void OrgApacheXpathObjectsDTMXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_(OrgApacheXpathObjectsDTMXRTreeFrag *self, jint dtmIdentity, OrgApacheXpathXPathContext *xctxt);

FOUNDATION_EXPORT OrgApacheXpathObjectsDTMXRTreeFrag *new_OrgApacheXpathObjectsDTMXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_(jint dtmIdentity, OrgApacheXpathXPathContext *xctxt) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsDTMXRTreeFrag *create_OrgApacheXpathObjectsDTMXRTreeFrag_initWithInt_withOrgApacheXpathXPathContext_(jint dtmIdentity, OrgApacheXpathXPathContext *xctxt);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsDTMXRTreeFrag)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsDTMXRTreeFrag")
