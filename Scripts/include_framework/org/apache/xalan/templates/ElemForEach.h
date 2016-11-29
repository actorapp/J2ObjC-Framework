//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemForEach.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemForEach")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemForEach
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemForEach 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemForEach 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemForEach

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemForEach_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemForEach || defined(INCLUDE_OrgApacheXalanTemplatesElemForEach))
#define OrgApacheXalanTemplatesElemForEach_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplateElement 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplateElement 1
#include "../../../../org/apache/xalan/templates/ElemTemplateElement.h"

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "../../../../org/apache/xpath/ExpressionOwner.h"

@class JavaUtilVector;
@class OrgApacheXalanTemplatesElemSort;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTemplatesXSLTVisitor;
@class OrgApacheXalanTransformerTransformerImpl;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPath;
@class OrgApacheXpathXPathContext;
@protocol OrgApacheXmlDtmDTMIterator;

/*!
 @brief Implement xsl:for-each.
 @code

  <!ELEMENT xsl:for-each
  (#PCDATA
   %instructions;
   %result-elements;
   | xsl:sort)
  >
  <!ATTLIST xsl:for-each
   select %expr; #REQUIRED
   %space-att;
  >
  
@endcode
 - seealso: <a href="http://www.w3.org/TR/xslt#for-each">for-each in XSLT Specification</a>
  advanced
 */
@interface OrgApacheXalanTemplatesElemForEach : OrgApacheXalanTemplatesElemTemplateElement < OrgApacheXpathExpressionOwner > {
 @public
  /*!
   @brief This is set by an "xalan-doc-cache-off" pi, or the old "xalan:doc-cache-off" pi.
   The old form of the PI only works for XML parsers that are not namespace aware.
 It tells the engine that
 documents created in the location paths executed by this element
 will not be reparsed. It's set by StylesheetHandler during
 construction. Note that this feature applies _only_ to xsl:for-each
 elements in its current incarnation; a more general cache management
 solution is desperately needed.
   */
  jboolean m_doc_cache_off_;
  /*!
   @brief The "select" expression.
   */
  OrgApacheXpathExpression *m_selectExpression_;
  /*!
   @brief Used to fix bug#16889
 Store XPath away for later processing.
   */
  OrgApacheXpathXPath *m_xpath_;
  /*!
   @brief Vector containing the xsl:sort elements associated with this element.
   */
  JavaUtilVector *m_sortElems_;
}

+ (jlong)serialVersionUID;

+ (jboolean)DEBUG_;

#pragma mark Public

/*!
 @brief Construct a element representing xsl:for-each.
 */
- (instancetype)init;

/*!
 @brief Add a child to the child list
 .
 <!ELEMENT xsl:apply-templates (xsl:sort|xsl:with-param)*>
 <!ATTLIST xsl:apply-templates
 select %expr; "node()"
 mode %qname; #IMPLIED
 >
 @param newChild Child to add to child list
 @return Child just added to child list
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)appendChildWithOrgApacheXalanTemplatesElemTemplateElement:(OrgApacheXalanTemplatesElemTemplateElement *)newChild;

/*!
 @brief Call the children visitors.
 @param visitor The visitor whose appropriate method will be called.
 */
- (void)callChildVisitorsWithOrgApacheXalanTemplatesXSLTVisitor:(OrgApacheXalanTemplatesXSLTVisitor *)visitor
                                                    withBoolean:(jboolean)callAttributes;

/*!
 @brief This function is called after everything else has been
 recomposed, and allows the template to set remaining
 values that may be based on some other property that
 depends on recomposition.
 NEEDSDOC @@param sroot
 @throws TransformerException
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief This after the template's children have been composed.
 */
- (void)endComposeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

/*!
 @brief Execute the xsl:for-each transformation
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException
 */
- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 @brief Return the node name.
 @return The element's name
 */
- (NSString *)getNodeName;

/*!
 @brief Get the "select" attribute.
 @return The XPath expression for the "select" attribute.
 */
- (OrgApacheXpathExpression *)getSelect;

/*!
 @brief Get a xsl:sort element associated with this element.
 @param i Index of xsl:sort element to get
 @return xsl:sort element at given index
 */
- (OrgApacheXalanTemplatesElemSort *)getSortElemWithInt:(jint)i;

/*!
 @brief Get the count xsl:sort elements associated with this element.
 @return The number of xsl:sort elements.
 */
- (jint)getSortElemCount;

/*!
 @brief Get an int constant identifying the type of element.
 - seealso: org.apache.xalan.templates.Constants
 @return The token ID for this element
 */
- (jint)getXSLToken;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

/*!
 @brief Set the "select" attribute.
 @param xpath The XPath expression for the "select" attribute.
 */
- (void)setSelectWithOrgApacheXpathXPath:(OrgApacheXpathXPath *)xpath;

/*!
 @brief Set a xsl:sort element associated with this element.
 @param sortElem xsl:sort element to set
 */
- (void)setSortElemWithOrgApacheXalanTemplatesElemSort:(OrgApacheXalanTemplatesElemSort *)sortElem;

/*!
 @brief Sort given nodes
 @param xctxt The XPath runtime state for the sort.
 @param keys Vector of sort keyx
 @param sourceNodes Iterator of nodes to sort
 @return iterator of sorted nodes
 @throws TransformerException
 */
- (id<OrgApacheXmlDtmDTMIterator>)sortNodesWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                       withJavaUtilVector:(JavaUtilVector *)keys
                                           withOrgApacheXmlDtmDTMIterator:(id<OrgApacheXmlDtmDTMIterator>)sourceNodes;

/*!
 @brief Perform a query if needed, and call transformNode for each child.
 @param transformer non-null reference to the the current transform-time state.
 @throws TransformerException Thrown in a variety of circumstances.
  advanced
 */
- (void)transformSelectedNodesWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer;

#pragma mark Protected

/*!
 @brief Get template element associated with this
 @return template element associated with this (itself)
 */
- (OrgApacheXalanTemplatesElemTemplateElement *)getTemplateMatch;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemForEach)

J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemForEach, m_selectExpression_, OrgApacheXpathExpression *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemForEach, m_xpath_, OrgApacheXpathXPath *)
J2OBJC_FIELD_SETTER(OrgApacheXalanTemplatesElemForEach, m_sortElems_, JavaUtilVector *)

inline jlong OrgApacheXalanTemplatesElemForEach_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemForEach_serialVersionUID 6018140636363583690LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemForEach, serialVersionUID, jlong)

/*!
 @brief Set true to request some basic status reports
 */
inline jboolean OrgApacheXalanTemplatesElemForEach_get_DEBUG();
#define OrgApacheXalanTemplatesElemForEach_DEBUG false
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemForEach, DEBUG, jboolean)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemForEach_init(OrgApacheXalanTemplatesElemForEach *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemForEach *new_OrgApacheXalanTemplatesElemForEach_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemForEach *create_OrgApacheXalanTemplatesElemForEach_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemForEach)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemForEach")
