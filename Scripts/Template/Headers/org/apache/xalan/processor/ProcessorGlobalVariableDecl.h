//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorGlobalVariableDecl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalVariableDecl")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorGlobalVariableDecl
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalVariableDecl 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalVariableDecl 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorGlobalVariableDecl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorProcessorGlobalVariableDecl_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalVariableDecl || defined(INCLUDE_OrgApacheXalanProcessorProcessorGlobalVariableDecl))
#define OrgApacheXalanProcessorProcessorGlobalVariableDecl_

#define RESTRICT_OrgApacheXalanProcessorProcessorTemplateElem 1
#define INCLUDE_OrgApacheXalanProcessorProcessorTemplateElem 1
#include "../../../../org/apache/xalan/processor/ProcessorTemplateElem.h"

@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesElemTemplateElement;

/*!
 @brief This class processes parse events for an xsl:variable element.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#top-level-variables">top-level-variables in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorGlobalVariableDecl : OrgApacheXalanProcessorProcessorTemplateElem

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Receive notification of the end of an element.
 @param name The element type name.
 @param attributes The specified or defaulted attributes.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param uri The Namespace URI, or an empty string.
 @param localName The local name (without prefix), or empty string if not namespace processing.
 @param rawName The qualified name (with prefix).
 */
- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

#pragma mark Protected

/*!
 @brief Append the current template element to the current
 template element, and then push it onto the current template
 element stack.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param elem The non-null reference to the ElemVariable element.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 */
- (void)appendAndPushWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                   withOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)elem;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorGlobalVariableDecl)

inline jlong OrgApacheXalanProcessorProcessorGlobalVariableDecl_get_serialVersionUID();
#define OrgApacheXalanProcessorProcessorGlobalVariableDecl_serialVersionUID -5954332402269819582LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorGlobalVariableDecl, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorGlobalVariableDecl_init(OrgApacheXalanProcessorProcessorGlobalVariableDecl *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorGlobalVariableDecl *new_OrgApacheXalanProcessorProcessorGlobalVariableDecl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorGlobalVariableDecl *create_OrgApacheXalanProcessorProcessorGlobalVariableDecl_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorGlobalVariableDecl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorGlobalVariableDecl")
