//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/xml/src/main/java/org/xmlpull/v1/sax2/Driver.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlpullV1Sax2Driver")
#ifdef RESTRICT_OrgXmlpullV1Sax2Driver
#define INCLUDE_ALL_OrgXmlpullV1Sax2Driver 0
#else
#define INCLUDE_ALL_OrgXmlpullV1Sax2Driver 1
#endif
#undef RESTRICT_OrgXmlpullV1Sax2Driver

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlpullV1Sax2Driver_) && (INCLUDE_ALL_OrgXmlpullV1Sax2Driver || defined(INCLUDE_OrgXmlpullV1Sax2Driver))
#define OrgXmlpullV1Sax2Driver_

#define RESTRICT_OrgXmlSaxLocator 1
#define INCLUDE_OrgXmlSaxLocator 1
#include "../../../../org/xml/sax/Locator.h"

#define RESTRICT_OrgXmlSaxXMLReader 1
#define INCLUDE_OrgXmlSaxXMLReader 1
#include "../../../../org/xml/sax/XMLReader.h"

#define RESTRICT_OrgXmlSaxAttributes 1
#define INCLUDE_OrgXmlSaxAttributes 1
#include "../../../../org/xml/sax/Attributes.h"

@class OrgXmlSaxInputSource;
@protocol OrgXmlSaxContentHandler;
@protocol OrgXmlSaxDTDHandler;
@protocol OrgXmlSaxEntityResolver;
@protocol OrgXmlSaxErrorHandler;
@protocol OrgXmlpullV1XmlPullParser;

/*!
 @brief SAX2 Driver that pulls events from XmlPullParser
 and comverts them into SAX2 callbacks.
 @author <a href="http://www.extreme.indiana.edu/~aslom/">Aleksander Slominski</a>
 */
@interface OrgXmlpullV1Sax2Driver : NSObject < OrgXmlSaxLocator, OrgXmlSaxXMLReader, OrgXmlSaxAttributes > {
 @public
  id<OrgXmlSaxContentHandler> contentHandler_;
  id<OrgXmlSaxErrorHandler> errorHandler_;
  NSString *systemId_;
  id<OrgXmlpullV1XmlPullParser> pp_;
}

+ (NSString *)DECLARATION_HANDLER_PROPERTY;

+ (NSString *)LEXICAL_HANDLER_PROPERTY;

+ (NSString *)NAMESPACES_FEATURE;

+ (NSString *)NAMESPACE_PREFIXES_FEATURE;

+ (NSString *)VALIDATION_FEATURE;

+ (NSString *)APACHE_SCHEMA_VALIDATION_FEATURE;

+ (NSString *)APACHE_DYNAMIC_VALIDATION_FEATURE;

#pragma mark Public

/*!
 */
- (instancetype)init;

- (instancetype)initWithOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)pp;

- (jint)getColumnNumber;

- (id<OrgXmlSaxContentHandler>)getContentHandler;

- (id<OrgXmlSaxDTDHandler>)getDTDHandler;

- (id<OrgXmlSaxEntityResolver>)getEntityResolver;

- (id<OrgXmlSaxErrorHandler>)getErrorHandler;

- (jboolean)getFeatureWithNSString:(NSString *)name;

- (jint)getIndexWithNSString:(NSString *)qName;

- (jint)getIndexWithNSString:(NSString *)uri
                withNSString:(NSString *)localName;

- (jint)getLength;

- (jint)getLineNumber;

- (NSString *)getLocalNameWithInt:(jint)index;

- (id)getPropertyWithNSString:(NSString *)name;

- (NSString *)getPublicId;

- (NSString *)getQNameWithInt:(jint)index;

- (NSString *)getSystemId;

- (NSString *)getTypeWithInt:(jint)index;

- (NSString *)getTypeWithNSString:(NSString *)qName;

- (NSString *)getTypeWithNSString:(NSString *)uri
                     withNSString:(NSString *)localName;

- (NSString *)getURIWithInt:(jint)index;

- (NSString *)getValueWithInt:(jint)index;

- (NSString *)getValueWithNSString:(NSString *)qName;

- (NSString *)getValueWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

- (void)parseWithOrgXmlSaxInputSource:(OrgXmlSaxInputSource *)source;

- (void)parseWithNSString:(NSString *)systemId;

- (void)parseSubTreeWithOrgXmlpullV1XmlPullParser:(id<OrgXmlpullV1XmlPullParser>)pp;

- (void)setContentHandlerWithOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

- (void)setDTDHandlerWithOrgXmlSaxDTDHandler:(id<OrgXmlSaxDTDHandler>)handler;

- (void)setEntityResolverWithOrgXmlSaxEntityResolver:(id<OrgXmlSaxEntityResolver>)resolver;

- (void)setErrorHandlerWithOrgXmlSaxErrorHandler:(id<OrgXmlSaxErrorHandler>)handler;

- (void)setFeatureWithNSString:(NSString *)name
                   withBoolean:(jboolean)value;

- (void)setPropertyWithNSString:(NSString *)name
                         withId:(id)value;

#pragma mark Protected

/*!
 @brief Calls <code>startElement</code>
 on the <code>ContentHandler</code> with <code>this</code> driver object as the
 <code>Attributes</code> implementation.
 In default implementation
 <code>Attributes</code> object is valid only during this method call and may not
 be stored. Sub-classes can overwrite this method to cache attributes.
 */
- (void)startElementWithNSString:(NSString *)namespace_
                    withNSString:(NSString *)localName
                    withNSString:(NSString *)qName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlpullV1Sax2Driver)

J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, contentHandler_, id<OrgXmlSaxContentHandler>)
J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, errorHandler_, id<OrgXmlSaxErrorHandler>)
J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, systemId_, NSString *)
J2OBJC_FIELD_SETTER(OrgXmlpullV1Sax2Driver, pp_, id<OrgXmlpullV1XmlPullParser>)

inline NSString *OrgXmlpullV1Sax2Driver_get_DECLARATION_HANDLER_PROPERTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_DECLARATION_HANDLER_PROPERTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlpullV1Sax2Driver, DECLARATION_HANDLER_PROPERTY, NSString *)

inline NSString *OrgXmlpullV1Sax2Driver_get_LEXICAL_HANDLER_PROPERTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_LEXICAL_HANDLER_PROPERTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlpullV1Sax2Driver, LEXICAL_HANDLER_PROPERTY, NSString *)

inline NSString *OrgXmlpullV1Sax2Driver_get_NAMESPACES_FEATURE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_NAMESPACES_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlpullV1Sax2Driver, NAMESPACES_FEATURE, NSString *)

inline NSString *OrgXmlpullV1Sax2Driver_get_NAMESPACE_PREFIXES_FEATURE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_NAMESPACE_PREFIXES_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlpullV1Sax2Driver, NAMESPACE_PREFIXES_FEATURE, NSString *)

inline NSString *OrgXmlpullV1Sax2Driver_get_VALIDATION_FEATURE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_VALIDATION_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlpullV1Sax2Driver, VALIDATION_FEATURE, NSString *)

inline NSString *OrgXmlpullV1Sax2Driver_get_APACHE_SCHEMA_VALIDATION_FEATURE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_APACHE_SCHEMA_VALIDATION_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlpullV1Sax2Driver, APACHE_SCHEMA_VALIDATION_FEATURE, NSString *)

inline NSString *OrgXmlpullV1Sax2Driver_get_APACHE_DYNAMIC_VALIDATION_FEATURE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT NSString *OrgXmlpullV1Sax2Driver_APACHE_DYNAMIC_VALIDATION_FEATURE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(OrgXmlpullV1Sax2Driver, APACHE_DYNAMIC_VALIDATION_FEATURE, NSString *)

FOUNDATION_EXPORT void OrgXmlpullV1Sax2Driver_init(OrgXmlpullV1Sax2Driver *self);

FOUNDATION_EXPORT OrgXmlpullV1Sax2Driver *new_OrgXmlpullV1Sax2Driver_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlpullV1Sax2Driver *create_OrgXmlpullV1Sax2Driver_init();

FOUNDATION_EXPORT void OrgXmlpullV1Sax2Driver_initWithOrgXmlpullV1XmlPullParser_(OrgXmlpullV1Sax2Driver *self, id<OrgXmlpullV1XmlPullParser> pp);

FOUNDATION_EXPORT OrgXmlpullV1Sax2Driver *new_OrgXmlpullV1Sax2Driver_initWithOrgXmlpullV1XmlPullParser_(id<OrgXmlpullV1XmlPullParser> pp) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlpullV1Sax2Driver *create_OrgXmlpullV1Sax2Driver_initWithOrgXmlpullV1XmlPullParser_(id<OrgXmlpullV1XmlPullParser> pp);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlpullV1Sax2Driver)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlpullV1Sax2Driver")
