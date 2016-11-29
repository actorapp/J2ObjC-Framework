//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemCallTemplate.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemCallTemplate")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemCallTemplate
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemCallTemplate 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemCallTemplate 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemCallTemplate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemCallTemplate_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemCallTemplate || defined(INCLUDE_OrgApacheXalanTemplatesElemCallTemplate))
#define OrgApacheXalanTemplatesElemCallTemplate_

#define RESTRICT_OrgApacheXalanTemplatesElemForEach 1
#define INCLUDE_OrgApacheXalanTemplatesElemForEach 1
#include "../../../../org/apache/xalan/templates/ElemForEach.h"

@class IOSObjectArray;
@class OrgApacheXalanTemplatesElemTemplateElement;
@class OrgApacheXalanTemplatesElemWithParam;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXmlUtilsQName;

/*!
 @brief Implement xsl:call-template.
 @code

  &amp;!ELEMENT xsl:call-template (xsl:with-param)*>
  &amp;!ATTLIST xsl:call-template
   name %qname; #REQUIRED
  &amp;
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#named-templates">named-templates in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemCallTemplate : OrgApacheXalanTemplatesElemForEach {
 @public
  /*!
   @brief An xsl:call-template element invokes a template by name;
 it has a required name attribute that identifies the template to be invoked.
   */
  OrgApacheXmlUtilsQName *m_templateName_;
  /*!
   @brief Vector of xsl:param elements associated with this element.
    
   */
  IOSObjectArray *m_paramElems_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Add a child to the child list
 .
 <!ELEMENT xsl:apply-templates (xsl:sort|xsl:with-param)*>
 <!ATTLIST xsl:apply-templates
 select %expr; "node()"
 mode %qname; #IMPLIED
 >
 @param newChild Child to add to this node's children list
 @return The child that was just added the children list
 @throws DOMException
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttrs;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief This after the template's children have been composed.
 */
- (void)endComposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Invoke a named template.
 - seealso: <a href="http://www.w3.org/TR/xslt#named-templates">named-templates in XSLT Specification</a>
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 @brief Get the "name" attribute.
 An xsl:call-template element invokes a template by name;
 it has a required name attribute that identifies the template to be invoked.
 @return Name attribute of this element
 */
- (OrgApacheXmlUtilsQName *)getName;

/*!
 @brief Return the node name.
 @return The name of this element
 */
- (NSString *)getNodeName;

/*!
 @brief Get a xsl:param element associated with this element.
 @param i Index of element to find
 @return xsl:param element at given index
 */
- (OrgApacheXalanTemplatesElemWithParam *)getParamElemWithInt:(jint)i;

/*!
 @brief Get the count xsl:param elements associated with this element.
 @return The number of xsl:param elements.
 */
- (jint)getParamElemCount;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 @brief Set the "name" attribute.
 An xsl:call-template element invokes a template by name;
 it has a required name attribute that identifies the template to be invoked.
 @param name Name attribute to set
 */
- (void)setNameWithOrgApacheXmlUtilsQName:(OrgApacheXmlUtilsQName *)name;

/*!
 @brief Set a xsl:param element associated with this element.
 @param ParamElem xsl:param element to set.
 */
- (void)setParamElemWithOrgApacheXalanTemplatesElemWithParam:(OrgApacheXalanTemplatesElemWithParam *)ParamElem;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemCallTemplate)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemCallTemplate, m_templateName_, OrgApacheXmlUtilsQName *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemCallTemplate, m_paramElems_, IOSObjectArray *)

inline jlong OrgApacheXalanTemplatesElemCallTemplate_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemCallTemplate_serialVersionUID 5009634612916030591LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemCallTemplate, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemCallTemplate_init(OrgApacheXalanTemplatesElemCallTemplate *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemCallTemplate *new_OrgApacheXalanTemplatesElemCallTemplate_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemCallTemplate *create_OrgApacheXalanTemplatesElemCallTemplate_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemCallTemplate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemCallTemplate")
