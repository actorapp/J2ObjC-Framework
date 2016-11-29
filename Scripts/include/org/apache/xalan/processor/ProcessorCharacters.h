//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/processor/ProcessorCharacters.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorCharacters")
#ifdef RESTRICT_OrgApacheXalanProcessorProcessorCharacters
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorCharacters 0
#else
#define INCLUDE_ALL_OrgApacheXalanProcessorProcessorCharacters 1
#endif
#undef RESTRICT_OrgApacheXalanProcessorProcessorCharacters

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanProcessorProcessorCharacters_) && (INCLUDE_ALL_OrgApacheXalanProcessorProcessorCharacters || defined(INCLUDE_OrgApacheXalanProcessorProcessorCharacters))
#define OrgApacheXalanProcessorProcessorCharacters_

#define RESTRICT_OrgApacheXalanProcessorXSLTElementProcessor 1
#define INCLUDE_OrgApacheXalanProcessorXSLTElementProcessor 1
#include "org/apache/xalan/processor/XSLTElementProcessor.h"

@class IOSCharArray;
@class OrgApacheXalanProcessorStylesheetHandler;
@class OrgApacheXalanTemplatesElemText;
@protocol OrgW3cDomNode;

/*!
 @brief This class processes character events for a XSLT template element.
 - seealso: <a href="http://www.w3.org/TR/xslt#dtd">XSLT DTD</a>
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Creating-the-Result-Tree">section-Creating-the-Result-Tree in XSLT Specification</a>
 */
@interface OrgApacheXalanProcessorProcessorCharacters : OrgApacheXalanProcessorXSLTElementProcessor {
 @public
  id<OrgW3cDomNode> m_firstBackPointer_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Receive notification of character data inside an element.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 @param ch The characters.
 @param start The start position in the character array.
 @param length The number of characters to use from the
 character array.
 @throws org.xml.sax.SAXException Any SAX exception, possibly
 wrapping another exception.
 - seealso: org.xml.sax.ContentHandler#characters
 */
- (void)charactersWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                 withCharArray:(IOSCharArray *)ch
                                                       withInt:(jint)start
                                                       withInt:(jint)length;

/*!
 @brief Receive notification of the end of an element.
 @param handler The calling StylesheetHandler/TemplatesBuilder.
 @param uri The Namespace URI, or the empty string if the
 element has no Namespace URI or if Namespace
 processing is not being performed.
 @param localName The local name (without prefix), or the
 empty string if Namespace processing is not being
 performed.
 @param rawName The raw XML 1.0 name (with prefix), or the
 empty string if raw names are not available.
 - seealso: org.apache.xalan.processor.StylesheetHandler#startElement
 - seealso: org.apache.xalan.processor.StylesheetHandler#endElement
 - seealso: org.xml.sax.ContentHandler#startElement
 - seealso: org.xml.sax.ContentHandler#endElement
 - seealso: org.xml.sax.Attributes
 */
- (void)endElementWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler
                                                  withNSString:(NSString *)uri
                                                  withNSString:(NSString *)localName
                                                  withNSString:(NSString *)rawName;

/*!
 @brief Receive notification of the start of the non-text event.
 This
 is sent to the current processor when any non-text event occurs.
 @param handler non-null reference to current StylesheetHandler that is constructing the Templates.
 */
- (void)startNonTextWithOrgApacheXalanProcessorStylesheetHandler:(OrgApacheXalanProcessorStylesheetHandler *)handler;

#pragma mark Package-Private

/*!
 @brief Set the current setXslTextElement.
 The xsl:text 
 processor will call this to set a preserve space state.
 @param xslTextElement The current xslTextElement that 
 is preserving state, or null.
 */
- (void)setXslTextElementWithOrgApacheXalanTemplatesElemText:(OrgApacheXalanTemplatesElemText *)xslTextElement;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanProcessorProcessorCharacters)

J2OBJC_FIELD_SETTER(OrgApacheXalanProcessorProcessorCharacters, m_firstBackPointer_, id<OrgW3cDomNode>)

inline jlong OrgApacheXalanProcessorProcessorCharacters_get_serialVersionUID();
#define OrgApacheXalanProcessorProcessorCharacters_serialVersionUID 8632900007814162650LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanProcessorProcessorCharacters, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanProcessorProcessorCharacters_init(OrgApacheXalanProcessorProcessorCharacters *self);

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorCharacters *new_OrgApacheXalanProcessorProcessorCharacters_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanProcessorProcessorCharacters *create_OrgApacheXalanProcessorProcessorCharacters_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanProcessorProcessorCharacters)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanProcessorProcessorCharacters")
