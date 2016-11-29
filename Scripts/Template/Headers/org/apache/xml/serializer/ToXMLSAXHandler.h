//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/ToXMLSAXHandler.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerToXMLSAXHandler")
#ifdef RESTRICT_OrgApacheXmlSerializerToXMLSAXHandler
#define INCLUDE_ALL_OrgApacheXmlSerializerToXMLSAXHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerToXMLSAXHandler 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerToXMLSAXHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerToXMLSAXHandler_) && (INCLUDE_ALL_OrgApacheXmlSerializerToXMLSAXHandler || defined(INCLUDE_OrgApacheXmlSerializerToXMLSAXHandler))
#define OrgApacheXmlSerializerToXMLSAXHandler_

#define RESTRICT_OrgApacheXmlSerializerToSAXHandler 1
#define INCLUDE_OrgApacheXmlSerializerToSAXHandler 1
#include "../../../../org/apache/xml/serializer/ToSAXHandler.h"

@class IOSCharArray;
@class JavaIoOutputStream;
@class JavaIoWriter;
@class JavaUtilProperties;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxAttributes;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxExtLexicalHandler;
@protocol OrgXmlSaxLocator;

/*!
 @brief This class receives notification of SAX-like events, and with gathered
 information over these calls it will invoke the equivalent SAX methods
 on a handler, the ultimate xsl:output method is known to be "xml".
 This class is not a public API.
  internal
 */
@interface OrgApacheXmlSerializerToXMLSAXHandler : OrgApacheXmlSerializerToSAXHandler {
 @public
  /*!
   @brief Keeps track of whether output escaping is currently enabled
   */
  jboolean m_escapeSetting_;
}

#pragma mark Public

- (instancetype)init;

- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler
                 withOrgXmlSaxExtLexicalHandler:(id<OrgXmlSaxExtLexicalHandler>)lex
                                   withNSString:(NSString *)encoding;

- (instancetype)initWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler
                                   withNSString:(NSString *)encoding;

/*!
 @brief Adds the given attribute to the set of attributes, and also makes sure
 that the needed prefix/uri mapping is declared, but only if there is a
 currently open element.
 @param uri the URI of the attribute
 @param localName the local name of the attribute
 @param rawName    the qualified name of the attribute
 @param type the type of the attribute (probably CDATA)
 @param value the value of the attribute
 @param XSLAttribute true if this attribute is coming from an xsl:attribute element
 - seealso: ExtendedContentHandler#addAttribute(String,String,String,String,String)
 */
- (void)addAttributeWithNSString:(NSString *)uri
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)rawName
                    withNSString:(NSString *)type
                    withNSString:(NSString *)value
                     withBoolean:(jboolean)XSLAttribute;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#attributeDecl(String,String,String,String,String)
 */
- (void)attributeDeclWithNSString:(NSString *)arg0
                     withNSString:(NSString *)arg1
                     withNSString:(NSString *)arg2
                     withNSString:(NSString *)arg3
                     withNSString:(NSString *)arg4;

- (void)charactersWithCharArray:(IOSCharArray *)ch
                        withInt:(jint)off
                        withInt:(jint)len;

/*!
 - seealso: ExtendedContentHandler#characters(String)
 */
- (void)charactersWithNSString:(NSString *)chars;

/*!
 @brief Closes ane open cdata tag, and
 unlike the this.endCDATA() method (from the LexicalHandler) interface,
 this "internal" method will send the endCDATA() call to the wrapped
 handler.
 */
- (void)closeCDATA;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#comment(char[],int,int)
 */
- (void)commentWithCharArray:(IOSCharArray *)arg0
                     withInt:(jint)arg1
                     withInt:(jint)arg2;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#elementDecl(String,String)
 */
- (void)elementDeclWithNSString:(NSString *)arg0
                   withNSString:(NSString *)arg1;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#endCDATA()
 */
- (void)endCDATA;

/*!
 @brief Receives notification of the end of the document.
 - seealso: org.xml.sax.ContentHandler#endDocument()
 */
- (void)endDocument;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#endDTD()
 */
- (void)endDTD;

/*!
 - seealso: ExtendedContentHandler#endElement(String)
 */
- (void)endElementWithNSString:(NSString *)elemName;

/*!
 - seealso: org.xml.sax.ContentHandler#endElement(String,String,String)
 */
- (void)endElementWithNSString:(NSString *)namespaceURI
                  withNSString:(NSString *)localName
                  withNSString:(NSString *)qName;

/*!
 - seealso: org.xml.sax.ContentHandler#endPrefixMapping(String)
 */
- (void)endPrefixMappingWithNSString:(NSString *)prefix;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#externalEntityDecl(String,String,String)
 */
- (void)externalEntityDeclWithNSString:(NSString *)arg0
                          withNSString:(NSString *)arg1
                          withNSString:(NSString *)arg2;

/*!
 - seealso: Serializer#getOutputFormat()
 */
- (JavaUtilProperties *)getOutputFormat;

/*!
 - seealso: Serializer#getOutputStream()
 */
- (JavaIoOutputStream *)getOutputStream;

/*!
 - seealso: Serializer#getWriter()
 */
- (JavaIoWriter *)getWriter;

/*!
 - seealso: org.xml.sax.ContentHandler#ignorableWhitespace(char[],int,int)
 */
- (void)ignorableWhitespaceWithCharArray:(IOSCharArray *)arg0
                                 withInt:(jint)arg1
                                 withInt:(jint)arg2;

/*!
 @brief Do nothing for SAX.
 */
- (void)indentWithInt:(jint)n;

/*!
 - seealso: org.xml.sax.ext.DeclHandler#internalEntityDecl(String,String)
 */
- (void)internalEntityDeclWithNSString:(NSString *)arg0
                          withNSString:(NSString *)arg1;

/*!
 @brief Send a namespace declaration in the output document.
 The namespace
 declaration will not be include if the namespace is already in scope
 with the same prefix.
 */
- (void)namespaceAfterStartElementWithNSString:(NSString *)prefix
                                  withNSString:(NSString *)uri;

/*!
 - seealso: org.xml.sax.ContentHandler#processingInstruction(String,String)
 Send a processing instruction to the output document
 */
- (void)processingInstructionWithNSString:(NSString *)target
                             withNSString:(NSString *)data;

/*!
 @brief Try's to reset the super class and reset this class for 
 re-use, so that you don't need to create a new serializer 
 (mostly for performance reasons).
 @return true if the class was successfuly reset.
 - seealso: Serializer#reset()
 */
- (jboolean)reset;

/*!
 - seealso: DOMSerializer#serialize(Node)
 */
- (void)serializeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 - seealso: org.xml.sax.ContentHandler#setDocumentLocator(Locator)
 */
- (void)setDocumentLocatorWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)arg0;

/*!
 - seealso: SerializationHandler#setEscaping(boolean)
 */
- (jboolean)setEscapingWithBoolean:(jboolean)escape;

/*!
 - seealso: Serializer#setOutputFormat(Properties)
 */
- (void)setOutputFormatWithJavaUtilProperties:(JavaUtilProperties *)format;

/*!
 - seealso: Serializer#setOutputStream(OutputStream)
 */
- (void)setOutputStreamWithJavaIoOutputStream:(JavaIoOutputStream *)output;

/*!
 - seealso: Serializer#setWriter(Writer)
 */
- (void)setWriterWithJavaIoWriter:(JavaIoWriter *)writer;

/*!
 - seealso: org.xml.sax.ContentHandler#skippedEntity(String)
 */
- (void)skippedEntityWithNSString:(NSString *)arg0;

- (void)startCDATA;

- (void)startElementWithNSString:(NSString *)elementName;

/*!
 @brief Start an element in the output document.
 This might be an XML element
 (<elem>data</elem> type) or a CDATA section.
 */
- (void)startElementWithNSString:(NSString *)elementNamespaceURI
                    withNSString:(NSString *)elementLocalName
                    withNSString:(NSString *)elementName;

/*!
 - seealso: org.xml.sax.ContentHandler#startElement(String,String,String,Attributes)
 */
- (void)startElementWithNSString:(NSString *)namespaceURI
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)name
         withOrgXmlSaxAttributes:(id<OrgXmlSaxAttributes>)atts;

/*!
 - seealso: org.xml.sax.ext.LexicalHandler#startEntity(String)
 */
- (void)startEntityWithNSString:(NSString *)arg0;

/*!
 - seealso: org.xml.sax.ContentHandler#startPrefixMapping(String,String)
 @param prefix The prefix that maps to the URI
 @param uri The URI for the namespace
 */
- (void)startPrefixMappingWithNSString:(NSString *)prefix
                          withNSString:(NSString *)uri;

/*!
 @brief Remember the prefix/uri mapping at the current nested element depth.
 - seealso: org.xml.sax.ContentHandler#startPrefixMapping(String,String)
 @param prefix The prefix that maps to the URI
 @param uri The URI for the namespace
 @param shouldFlush a flag indicating if the mapping applies to the
 current element or an up coming child (not used).
 */
- (jboolean)startPrefixMappingWithNSString:(NSString *)prefix
                              withNSString:(NSString *)uri
                               withBoolean:(jboolean)shouldFlush;

#pragma mark Protected

/*!
 @brief This method is called when all the data needed for a call to the
 SAX handler's startElement() method has been gathered.
 */
- (void)closeStartTag;

/*!
 @brief Undeclare the namespace that is currently pointed to by a given
 prefix.
 Inform SAX handler if prefix was previously mapped.
 */
- (jboolean)popNamespaceWithNSString:(NSString *)prefix;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerToXMLSAXHandler)

FOUNDATION_EXPORT void OrgApacheXmlSerializerToXMLSAXHandler_init(OrgApacheXmlSerializerToXMLSAXHandler *self);

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLSAXHandler *new_OrgApacheXmlSerializerToXMLSAXHandler_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLSAXHandler *create_OrgApacheXmlSerializerToXMLSAXHandler_init();

FOUNDATION_EXPORT void OrgApacheXmlSerializerToXMLSAXHandler_initWithOrgXmlSaxContentHandler_withNSString_(OrgApacheXmlSerializerToXMLSAXHandler *self, id<OrgXmlSaxContentHandler> handler, NSString *encoding);

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLSAXHandler *new_OrgApacheXmlSerializerToXMLSAXHandler_initWithOrgXmlSaxContentHandler_withNSString_(id<OrgXmlSaxContentHandler> handler, NSString *encoding) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLSAXHandler *create_OrgApacheXmlSerializerToXMLSAXHandler_initWithOrgXmlSaxContentHandler_withNSString_(id<OrgXmlSaxContentHandler> handler, NSString *encoding);

FOUNDATION_EXPORT void OrgApacheXmlSerializerToXMLSAXHandler_initWithOrgXmlSaxContentHandler_withOrgXmlSaxExtLexicalHandler_withNSString_(OrgApacheXmlSerializerToXMLSAXHandler *self, id<OrgXmlSaxContentHandler> handler, id<OrgXmlSaxExtLexicalHandler> lex, NSString *encoding);

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLSAXHandler *new_OrgApacheXmlSerializerToXMLSAXHandler_initWithOrgXmlSaxContentHandler_withOrgXmlSaxExtLexicalHandler_withNSString_(id<OrgXmlSaxContentHandler> handler, id<OrgXmlSaxExtLexicalHandler> lex, NSString *encoding) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerToXMLSAXHandler *create_OrgApacheXmlSerializerToXMLSAXHandler_initWithOrgXmlSaxContentHandler_withOrgXmlSaxExtLexicalHandler_withNSString_(id<OrgXmlSaxContentHandler> handler, id<OrgXmlSaxExtLexicalHandler> lex, NSString *encoding);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerToXMLSAXHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerToXMLSAXHandler")
