//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorKey.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorKey")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorKey
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorKey 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorKey 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorProcessorKey_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorKey || defined(INCLUDE_OrgApacheXalanProcessorProcessorKey))
#define OrgApacheXalanProcessorProcessorKey_

#define RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor 1
#define INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor 1
#include "../../../../org/apache/xalan/processor/XSLTElementProcessor.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesElemTemplateElement;
@protocol OrgXmlSaxAttributes;

/*!
 @brief TransformerFactory for xsl:key markup.
 @code

  <!ELEMENT xsl:key EMPTY>
  <!ATTLIST xsl:key
   name %qname; #REQUIRED
   match %pattern; #REQUIRED
   use %expr; #REQUIRED
  >
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#key">key in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorKey : OrgApacheXalanProcessorXSLTElementProcessor

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Receive notification of the start of an xsl:key element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the
 element has no Namespace URI or if Namespace
 processing is not being performed.
 @param localName The local name (without prefix), or the
 empty string if Namespace processing is not being
 performed.
 @param rawName The raw XML 1.0 name (with prefix), or the
 empty string if raw names are not available.
 @param attributes The attributes attached to the element.  If
 there are no attributes, it shall be an empty
 Attributes object.
 */
- (void)startElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                    withNSString:(NSString *)uri
                                                    withNSString:(NSString *)localName
                                                    withNSString:(NSString *)rawName
                                         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes;

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Set the properties of an object from the given attribute list.
 @param handler The stylesheet's Content handler, needed for
 error reporting.
 @param rawName The raw name of the owner element, needed for
 error reporting.
 @param attributes The list of attributes.
 @param target The target element where the properties will be set.
 */
- (void)setPropertiesFromAttributesWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                                   withNSString:(NSString *)rawName
                                                        withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)attributes
                                 withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)target;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorKey)

inline jlong OrgApacheXalanProcessorProcessorKey_get_serialVersionUID();
#define OrgApacheXalanProcessorProcessorKey_serialVersionUID 4285205417566822979LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorKey, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorKey_init(OrgApacheXalanProcessorProcessorKey *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorKey *new_OrgApacheXalanProcessorProcessorKey_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorKey *create_OrgApacheXalanProcessorProcessorKey_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorKey")
