//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/serializer/dom3/DOM3SerializerImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3SerializerImpl")
#ifdef RESTRICT_OrgApacheXmlSerializerDom3DOM3SerializerImpl
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3SerializerImpl 0
#else
#define INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3SerializerImpl 1
#endif
#undef RESTRICT_OrgApacheXmlSerializerDom3DOM3SerializerImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlSerializerDom3DOM3SerializerImpl_) && (INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3SerializerImpl || defined(INCLUDE_OrgApacheXmlSerializerDom3DOM3SerializerImpl))
#define OrgApacheXmlSerializerDom3DOM3SerializerImpl_

#define RESTRICT_OrgApacheXmlSerializerDOM3Serializer 1
#define INCLUDE_OrgApacheXmlSerializerDOM3Serializer 1
#include "org/apache/xml/serializer/DOM3Serializer.h"

@class IOSCharArray;
@protocol OrgApacheXmlSerializerSerializationHandler;
@protocol OrgW3cDomDOMErrorHandler;
@protocol OrgW3cDomLsLSSerializerFilter;
@protocol OrgW3cDomNode;

/*!
 @brief This class implements the DOM3Serializer interface.
  internal
 */
@interface OrgApacheXmlSerializerDom3DOM3SerializerImpl : NSObject < OrgApacheXmlSerializerDOM3Serializer >

#pragma mark Public

/*!
 @brief Constructor
 @param handler An instance of the SerializationHandler interface.
 */
- (instancetype)initWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)handler;

/*!
 @brief Returns a DOMErrorHandler set on the DOM Level 3 Serializer.
 This interface is a public API.
 @return A Level 3 DOMErrorHandler
 */
- (id<OrgW3cDomDOMErrorHandler>)getErrorHandler;

/*!
 @brief Gets the end-of-line sequence of characters to be used during serialization.
 */
- (IOSCharArray *)getNewLine;

/*!
 @brief Returns a LSSerializerFilter set on the DOM Level 3 Serializer to filter nodes
 during serialization.
 This interface is a public API.
 @return The Level 3 LSSerializerFilter
 */
- (id<OrgW3cDomLsLSSerializerFilter>)getNodeFilter;

/*!
 @brief Serializes the Level 3 DOM node by creating an instance of DOM3TreeWalker
 which traverses the DOM tree and invokes handler events to serialize
 the DOM NOde.
 Throws an exception only if an I/O exception occured
 while serializing.
 This interface is a public API.
 @param node the Level 3 DOM node to serialize
 @throws IOException if an I/O exception occured while serializing
 */
- (void)serializeDOM3WithOrgW3cDomNode:(id<OrgW3cDomNode>)node;

/*!
 @brief Sets a DOMErrorHandler on the DOM Level 3 Serializer.
 This interface is a public API.
 @param handler the Level 3 DOMErrorHandler
 */
- (void)setErrorHandlerWithOrgW3cDomDOMErrorHandler:(id<OrgW3cDomDOMErrorHandler>)handler;

/*!
 @brief Sets the end-of-line sequence of characters to be used during serialization.
 @param newLine The end-of-line sequence of characters to be used during serialization.
 */
- (void)setNewLineWithCharArray:(IOSCharArray *)newLine;

/*!
 @brief Sets a LSSerializerFilter on the DOM Level 3 Serializer to filter nodes
 during serialization.
 This interface is a public API.
 @param filter the Level 3 LSSerializerFilter
 */
- (void)setNodeFilterWithOrgW3cDomLsLSSerializerFilter:(id<OrgW3cDomLsLSSerializerFilter>)filter;

/*!
 @brief Sets a SerializationHandler on the DOM Serializer.
 This interface is a public API.
 @param handler An instance of SerializationHandler
 */
- (void)setSerializationHandlerWithOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlSerializerDom3DOM3SerializerImpl)

FOUNDATION_EXPORT void OrgApacheXmlSerializerDom3DOM3SerializerImpl_initWithOrgApacheXmlSerializerSerializationHandler_(OrgApacheXmlSerializerDom3DOM3SerializerImpl *self, id<OrgApacheXmlSerializerSerializationHandler> handler);

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOM3SerializerImpl *new_OrgApacheXmlSerializerDom3DOM3SerializerImpl_initWithOrgApacheXmlSerializerSerializationHandler_(id<OrgApacheXmlSerializerSerializationHandler> handler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlSerializerDom3DOM3SerializerImpl *create_OrgApacheXmlSerializerDom3DOM3SerializerImpl_initWithOrgApacheXmlSerializerSerializationHandler_(id<OrgApacheXmlSerializerSerializationHandler> handler);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlSerializerDom3DOM3SerializerImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlSerializerDom3DOM3SerializerImpl")
