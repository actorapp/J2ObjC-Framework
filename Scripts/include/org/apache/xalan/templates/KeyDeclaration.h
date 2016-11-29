//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/KeyDeclaration.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesKeyDeclaration")
#ifdef RESTRICT_OrgApacheXalanTemplatesKeyDeclaration
#define INCLUDE_ALL_OrgApacheXalanTemplatesKeyDeclaration 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesKeyDeclaration 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesKeyDeclaration

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesKeyDeclaration_) && (INCLUDE_ALL_OrgApacheXalanTemplatesKeyDeclaration || defined(INCLUDE_OrgApacheXalanTemplatesKeyDeclaration))
#define OrgApacheXalanTemplatesKeyDeclaration_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "org/apache/xalan/templates/ElemTemplateElement.h"

@class OrgApacheXalanTemplatesStylesheet;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXmlUtilsQName;
@class OrgApacheXpathXPath;

/*!
 @brief Holds the attribute declarations for the xsl:keys element.
 A stylesheet declares a set of keys for each document using
 the xsl:key element. When this set of keys contains a member
 with node x, name y and value z, we say that node x has a key
 with name y and value z.
 - seealso: <a href="http://www.w3.org/TR/xslt#key">key in XSLT Specification</a>
  internal
 */
@interface OrgApacheXalanTemplatesKeyDeclaration : OrgApacheXalanTemplatesElemTemplateElement

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs a new element representing the xsl:key.
 The parameters
 are needed to prioritize this key element as part of the recomposing
 process.  For this element, they are not automatically created
 because the element is never added on to the stylesheet parent.
 */
- (instancetype)initWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)parentNode
                                                  withInt:(jint)docOrderNumber;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Get the "match" attribute.
 The match attribute is a Pattern; an xsl:key element gives
 information about the keys of any node that matches the
 pattern specified in the match attribute.
 - seealso: <a href="http://www.w3.org/TR/xslt#patterns">patterns in XSLT Specification</a>
 @return Value of the "match" attribute.
 */
- (OrgApacheXpathXPath *)getMatch;

/*!
 @brief Get the "name" attribute.
 The name attribute specifies the name of the key. The value
 of the name attribute is a QName, which is expanded as
 described in [2.4 Qualified Names].
 @return Value of the "name" attribute.
 */
- (OrgApacheXmlUtilsQName *)getName;

/*!
 @brief Return the node name.
 @return the element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "use" attribute.
 The use attribute is an expression specifying the values
 of the key; the expression is evaluated once for each node
 that matches the pattern.
 @return Value of the "use" attribute.
 */
- (OrgApacheXpathXPath *)getUse;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief This function is called during recomposition to
 control how this element is composed.
 @param root The root stylesheet for this transformation.
 */
- (void)recomposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)root;

/*!
 @brief Set the "match" attribute.
 The match attribute is a Pattern; an xsl:key element gives
 information about the keys of any node that matches the
 pattern specified in the match attribute.
 - seealso: <a href="http://www.w3.org/TR/xslt#patterns">patterns in XSLT Specification</a>
 @param v Value to set for the "match" attribute.
 */
- (void)setMatchWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

/*!
 @brief Set the "name" attribute.
 The name attribute specifies the name of the key. The value
 of the name attribute is a QName, which is expanded as
 described in [2.4 Qualified Names].
 @param name Value to set for the "name" attribute.
 */
- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

/*!
 @brief Set the "use" attribute.
 The use attribute is an expression specifying the values
 of the key; the expression is evaluated once for each node
 that matches the pattern.
 @param v Value to set for the "use" attribute.
 */
- (void)setUseWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)v;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesKeyDeclaration)

inline jlong OrgApacheXalanTemplatesKeyDeclaration_get_serialVersionUID();
#define OrgApacheXalanTemplatesKeyDeclaration_serialVersionUID 7724030248631137918LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesKeyDeclaration, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesKeyDeclaration_initWithOrgApacheXalanTemplatesStylesheet_withInt_(OrgApacheXalanTemplatesKeyDeclaration *self, OrgApacheXalanTemplatesStylesheet *parentNode, jint docOrderNumber);

FOUNDATION_EXPORT OrgApacheXalanTemplatesKeyDeclaration *new_OrgApacheXalanTemplatesKeyDeclaration_initWithOrgApacheXalanTemplatesStylesheet_withInt_(OrgApacheXalanTemplatesStylesheet *parentNode, jint docOrderNumber) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesKeyDeclaration *create_OrgApacheXalanTemplatesKeyDeclaration_initWithOrgApacheXalanTemplatesStylesheet_withInt_(OrgApacheXalanTemplatesStylesheet *parentNode, jint docOrderNumber);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesKeyDeclaration)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesKeyDeclaration")
