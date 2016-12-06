//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/SAXParseException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxSAXParseException")
#ifdef RESTRICT_OrgXmlSaxSAXParseException
#define INCLUDE_ALL_OrgXmlSaxSAXParseException 0
#else
#define INCLUDE_ALL_OrgXmlSaxSAXParseException 1
#endif
#undef RESTRICT_OrgXmlSaxSAXParseException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxSAXParseException_) && (INCLUDE_ALL_OrgXmlSaxSAXParseException || defined(INCLUDE_OrgXmlSaxSAXParseException))
#define OrgXmlSaxSAXParseException_

#define RESTRICT_OrgXmlSaxSAXException 1
#define INCLUDE_OrgXmlSaxSAXException 1
#include "org/xml/sax/SAXException.h"

@class JavaLangException;
@protocol OrgXmlSaxLocator;

/*!
 @brief Encapsulate an XML parse error or warning.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>This exception may include information for locating the error
 in the original XML document, as if it came from a <code>Locator</code>
 object.  Note that although the application
 will receive a SAXParseException as the argument to the handlers
 in the <code>ErrorHandler</code> interface,
 the application is not actually required to throw the exception;
 instead, it can simply read the information in it and take a
 different action.</p>
 <p>Since this exception is a subclass of <code>SAXException</code>
 , it inherits the ability to wrap another exception.</p>
 @since SAX 1.0
 @author David Megginson
 @version 2.0.1 (sax2r2)
 - seealso: org.xml.sax.SAXException
 - seealso: org.xml.sax.Locator
 - seealso: org.xml.sax.ErrorHandler
 */
@interface OrgXmlSaxSAXParseException : OrgXmlSaxSAXException

#pragma mark Public

/*!
 @brief Create a new SAXParseException from a message and a Locator.
 <p>This constructor is especially useful when an application is
 creating its own exception from within a <code>ContentHandler</code>
  callback.</p>
 @param message The error or warning message.
 @param locator The locator object for the error or warning (may be
 null).
 - seealso: org.xml.sax.Locator
 */
- (instancetype)initWithNSString:(NSString *)message
            withOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Wrap an existing exception in a SAXParseException.
 <p>This constructor is especially useful when an application is
 creating its own exception from within a <code>ContentHandler</code>
  callback, and needs to wrap an existing exception that is not a
 subclass of <code>SAXException</code>.</p>
 @param message The error or warning message, or null to
 use the message from the embedded exception.
 @param locator The locator object for the error or warning (may be
 null).
 @param e Any exception.
 - seealso: org.xml.sax.Locator
 */
- (instancetype)initWithNSString:(NSString *)message
            withOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator
           withJavaLangException:(JavaLangException *)e;

/*!
 @brief Create a new SAXParseException.
 <p>This constructor is most useful for parser writers.</p>
 <p>All parameters except the message are as if
 they were provided by a <code>Locator</code>.  For example, if the
 system identifier is a URL (including relative filename), the
 caller must resolve it fully before creating the exception.</p>
 @param message The error or warning message.
 @param publicId The public identifier of the entity that generated
 the error or warning.
 @param systemId The system identifier of the entity that generated
 the error or warning.
 @param lineNumber The line number of the end of the text that
 caused the error or warning.
 @param columnNumber The column number of the end of the text that
 cause the error or warning.
 */
- (instancetype)initWithNSString:(NSString *)message
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId
                         withInt:(jint)lineNumber
                         withInt:(jint)columnNumber;

/*!
 @brief Create a new SAXParseException with an embedded exception.
 <p>This constructor is most useful for parser writers who
 need to wrap an exception that is not a subclass of
 <code>SAXException</code>.</p>
 <p>All parameters except the message and exception are as if
 they were provided by a <code>Locator</code>.  For example, if the
 system identifier is a URL (including relative filename), the
 caller must resolve it fully before creating the exception.</p>
 @param message The error or warning message, or null to use
 the message from the embedded exception.
 @param publicId The public identifier of the entity that generated
 the error or warning.
 @param systemId The system identifier of the entity that generated
 the error or warning.
 @param lineNumber The line number of the end of the text that
 caused the error or warning.
 @param columnNumber The column number of the end of the text that
 cause the error or warning.
 @param e Another exception to embed in this one.
 */
- (instancetype)initWithNSString:(NSString *)message
                    withNSString:(NSString *)publicId
                    withNSString:(NSString *)systemId
                         withInt:(jint)lineNumber
                         withInt:(jint)columnNumber
           withJavaLangException:(JavaLangException *)e;

/*!
 @brief The column number of the end of the text where the exception occurred.
 <p>The first column in a line is position 1.</p>
 @return An integer representing the column number, or -1
 if none is available.
 - seealso: org.xml.sax.Locator#getColumnNumber
 */
- (jint)getColumnNumber;

/*!
 @brief The line number of the end of the text where the exception occurred.
 <p>The first line is line 1.</p>
 @return An integer representing the line number, or -1
 if none is available.
 - seealso: org.xml.sax.Locator#getLineNumber
 */
- (jint)getLineNumber;

/*!
 @brief Get the public identifier of the entity where the exception occurred.
 @return A string containing the public identifier, or null
 if none is available.
 - seealso: org.xml.sax.Locator#getPublicId
 */
- (NSString *)getPublicId;

/*!
 @brief Get the system identifier of the entity where the exception occurred.
 <p>If the system identifier is a URL, it will have been resolved
 fully.</p>
 @return A string containing the system identifier, or null
 if none is available.
 - seealso: org.xml.sax.Locator#getSystemId
 */
- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxSAXParseException)

FOUNDATION_EXPORT void OrgXmlSaxSAXParseException_initWithNSString_withOrgXmlSaxLocator_(OrgXmlSaxSAXParseException *self, NSString *message, id<OrgXmlSaxLocator> locator);

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *new_OrgXmlSaxSAXParseException_initWithNSString_withOrgXmlSaxLocator_(NSString *message, id<OrgXmlSaxLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *create_OrgXmlSaxSAXParseException_initWithNSString_withOrgXmlSaxLocator_(NSString *message, id<OrgXmlSaxLocator> locator);

FOUNDATION_EXPORT void OrgXmlSaxSAXParseException_initWithNSString_withOrgXmlSaxLocator_withJavaLangException_(OrgXmlSaxSAXParseException *self, NSString *message, id<OrgXmlSaxLocator> locator, JavaLangException *e);

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *new_OrgXmlSaxSAXParseException_initWithNSString_withOrgXmlSaxLocator_withJavaLangException_(NSString *message, id<OrgXmlSaxLocator> locator, JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *create_OrgXmlSaxSAXParseException_initWithNSString_withOrgXmlSaxLocator_withJavaLangException_(NSString *message, id<OrgXmlSaxLocator> locator, JavaLangException *e);

FOUNDATION_EXPORT void OrgXmlSaxSAXParseException_initWithNSString_withNSString_withNSString_withInt_withInt_(OrgXmlSaxSAXParseException *self, NSString *message, NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber);

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *new_OrgXmlSaxSAXParseException_initWithNSString_withNSString_withNSString_withInt_withInt_(NSString *message, NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *create_OrgXmlSaxSAXParseException_initWithNSString_withNSString_withNSString_withInt_withInt_(NSString *message, NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber);

FOUNDATION_EXPORT void OrgXmlSaxSAXParseException_initWithNSString_withNSString_withNSString_withInt_withInt_withJavaLangException_(OrgXmlSaxSAXParseException *self, NSString *message, NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber, JavaLangException *e);

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *new_OrgXmlSaxSAXParseException_initWithNSString_withNSString_withNSString_withInt_withInt_withJavaLangException_(NSString *message, NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber, JavaLangException *e) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxSAXParseException *create_OrgXmlSaxSAXParseException_initWithNSString_withNSString_withNSString_withInt_withInt_withJavaLangException_(NSString *message, NSString *publicId, NSString *systemId, jint lineNumber, jint columnNumber, JavaLangException *e);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxSAXParseException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxSAXParseException")
