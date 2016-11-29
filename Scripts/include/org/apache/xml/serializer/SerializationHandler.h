//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/SerializationHandler.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializationHandler")
#ifdef RESTRICT_OrgApacheXmlSerializerSerializationHandler
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializationHandler 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerSerializationHandler 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerSerializationHandler

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerSerializationHandler_) && (INCLUDE_ALL_OrgApacheXmlSerializerSerializationHandler || defined(INCLUDE_OrgApacheXmlSerializerSerializationHandler))
#define OrgApacheXmlSerializerSerializationHandler_

#define RESTRICT_OrgApacheXmlSerializerExtendedContentHandler 1
#define INCLUDE_OrgApacheXmlSerializerExtendedContentHandler 1
#include "org/apache/xml/serializer/ExtendedContentHandler.h"

#define RESTRICT_OrgApacheXmlSerializerExtendedLexicalHandler 1
#define INCLUDE_OrgApacheXmlSerializerExtendedLexicalHandler 1
#include "org/apache/xml/serializer/ExtendedLexicalHandler.h"

#define RESTRICT_OrgApacheXmlSerializerXSLOutputAttributes 1
#define INCLUDE_OrgApacheXmlSerializerXSLOutputAttributes 1
#include "org/apache/xml/serializer/XSLOutputAttributes.h"

#define RESTRICT_OrgXmlSaxExtDeclHandler 1
#define INCLUDE_OrgXmlSaxExtDeclHandler 1
#include "org/xml/sax/ext/DeclHandler.h"

#define RESTRICT_OrgXmlSaxDTDHandler 1
#define INCLUDE_OrgXmlSaxDTDHandler 1
#include "org/xml/sax/DTDHandler.h"

#define RESTRICT_OrgXmlSaxErrorHandler 1
#define INCLUDE_OrgXmlSaxErrorHandler 1
#include "org/xml/sax/ErrorHandler.h"

#define RESTRICT_OrgApacheXmlSerializerDOMSerializer 1
#define INCLUDE_OrgApacheXmlSerializerDOMSerializer 1
#include "org/apache/xml/serializer/DOMSerializer.h"

#define RESTRICT_OrgApacheXmlSerializerSerializer 1
#define INCLUDE_OrgApacheXmlSerializerSerializer 1
#include "org/apache/xml/serializer/Serializer.h"

@class JavaxXmlTransformTransformer;
@class OrgApacheXmlSerializerNamespaceMappings;
@protocol OrgW3cDomNode;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This interface is the one that a serializer implements.
 It is a group of
 other interfaces, such as ExtendedContentHandler, ExtendedLexicalHandler etc.
 In addition there are other methods, such as reset().
 This class is public only because it is used in another package,
 it is not a public API.
  internal
 */
@protocol OrgApacheXmlSerializerSerializationHandler < OrgApacheXmlSerializerExtendedContentHandler, OrgApacheXmlSerializerExtendedLexicalHandler, OrgApacheXmlSerializerXSLOutputAttributes, OrgXmlSaxExtDeclHandler, OrgXmlSaxDTDHandler, OrgXmlSaxErrorHandler, OrgApacheXmlSerializerDOMSerializer, OrgApacheXmlSerializerSerializer, JavaObject >

/*!
 @brief Set the SAX Content handler that the serializer sends its output to.
 This
 method only applies to a ToSAXHandler, not to a ToStream serializer.
 - seealso: Serializer#asContentHandler()
 - seealso: ToSAXHandler
 */
- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)ch;

- (void)close;

/*!
 @brief Notify that the serializer should take this DOM node as input to be
 serialized.
 @param node the DOM node to be serialized.
 @throws IOException
 */
- (void)serializeWithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Turns special character escaping on/off.
 Note that characters will
 never, even if this option is set to 'true', be escaped within
 CDATA sections in output XML documents.
 @param escape true if escaping is to be set on.
 */
- (jboolean)setEscapingWithBoolean:(jboolean)escape;

/*!
 @brief Set the number of spaces to indent for each indentation level.
 @param spaces the number of spaces to indent for each indentation level.
 */
- (void)setIndentAmountWithInt:(jint)spaces;

/*!
 @brief Set the transformer associated with the serializer.
 @param transformer the transformer associated with the serializer.
 */
- (void)setTransformerWithJavaxXmlTransformTransformer:(JavaxXmlTransformTransformer *)transformer;

/*!
 @brief Get the transformer associated with the serializer.
 @return Transformer the transformer associated with the serializer.
 */
- (JavaxXmlTransformTransformer *)getTransformer;

/*!
 @brief Used only by TransformerSnapshotImpl to restore the serialization 
 to a previous state.
 @param mappings NamespaceMappings
 */
- (void)setNamespaceMappingsWithOrgApacheXmlSerializerNamespaceMappings:(OrgApacheXmlSerializerNamespaceMappings *)mappings;

/*!
 @brief A SerializationHandler accepts SAX-like events, so
 it can accumulate attributes or namespace nodes after
 a startElement().
 <p>
 If the SerializationHandler has a Writer or OutputStream, 
 a call to this method will flush such accumulated 
 events as a closed start tag for an element.
 <p>
 If the SerializationHandler wraps a ContentHandler,
 a call to this method will flush such accumulated
 events as a SAX (not SAX-like) calls to
 startPrefixMapping() and startElement().
 <p>
 If one calls endDocument() then one need not call
 this method since a call to endDocument() will
 do what this method does. However, in some
 circumstances, such as with document fragments,
 endDocument() is not called and it may be
 necessary to call this method to flush
 any pending events.
 <p> 
 For performance reasons this method should not be called
 very often. 
 */
- (void)flushPending;

/*!
 @brief Default behavior is to expand DTD entities,
 that is the initall default value is true.
 @param expand true if DTD entities are to be expanded,
 false if they are to be left as DTD entity references.
 */
- (void)setDTDEntityExpansionWithBoolean:(jboolean)expand;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerSerializationHandler)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerSerializationHandler)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerSerializationHandler")
