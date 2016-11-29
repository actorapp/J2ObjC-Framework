//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/helpers/XMLReaderFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxHelpersXMLReaderFactory")
#ifdef RESTRICT_OrgXmlSaxHelpersXMLReaderFactory
#define INCLUDE_ALL_OrgXmlSaxHelpersXMLReaderFactory 0
#else
#define INCLUDE_ALL_OrgXmlSaxHelpersXMLReaderFactory 1
#endif
#undef RESTRICT_OrgXmlSaxHelpersXMLReaderFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxHelpersXMLReaderFactory_) && (INCLUDE_ALL_OrgXmlSaxHelpersXMLReaderFactory || defined(INCLUDE_OrgXmlSaxHelpersXMLReaderFactory))
#define OrgXmlSaxHelpersXMLReaderFactory_

@protocol OrgXmlSaxXMLReader;

/*!
 @brief Factory for creating an XML reader.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 See <a href='http://www.saxproject.org'>http://www.saxproject.org</a>
 for further information.
 </blockquote>
 <p>This class contains static methods for creating an XML reader
 from an explicit class name, or based on runtime defaults:</p>
 @code

  try {
   XMLReader myReader = XMLReaderFactory.createXMLReader();
  } catch (SAXException e) {
   System.err.println(e.getMessage());
  }
  
@endcode
 <p><strong>Note to Distributions bundled with parsers:</strong>
 You should modify the implementation of the no-arguments
 <em>createXMLReader</em> to handle cases where the external
 configuration mechanisms aren't set up.  That method should do its
 best to return a parser when one is in the class path, even when
 nothing bound its class name to <code>org.xml.sax.driver</code> so
 those configuration mechanisms would see it.</p>
 @since SAX 2.0
 @author David Megginson, David Brownell
 @version 2.0.1 (sax2r2)
 */
@interface OrgXmlSaxHelpersXMLReaderFactory : NSObject

#pragma mark Public

/*!
 @brief Attempt to create an XMLReader from system defaults.
 In environments which can support it, the name of the XMLReader
 class is determined by trying each these options in order, and
 using the first one which succeeds:</p> <ul>
 <li>If the system property <code>org.xml.sax.driver</code>
 has a value, that is used as an XMLReader class name. </li>
 <li>The JAR "Services API" is used to look for a class name
 in the <em>META-INF/services/org.xml.sax.driver</em> file in
 jarfiles available to the runtime.</li>
 <li> SAX parser distributions are strongly encouraged to provide
 a default XMLReader class name that will take effect only when
 previous options (on this list) are not successful.</li>
 <li>Finally, if <code>ParserFactory.makeParser()</code> can
 return a system default SAX1 parser, that parser is wrapped in
 a <code>ParserAdapter</code>.  (This is a migration aid for SAX1
 environments, where the <code>org.xml.sax.parser</code> system
 property will often be usable.) </li>
 </ul>
 <p> In environments such as small embedded systems, which can not
 support that flexibility, other mechanisms to determine the default
 may be used. </p>
 <p>Note that many Java environments allow system properties to be
 initialized on a command line.  This means that <em>in most cases</em>
 setting a good value for that property ensures that calls to this
 method will succeed, except when security policies intervene.
 This will also maximize application portability to older SAX
 environments, with less robust implementations of this method.
 </p>
 @return A new XMLReader.
 @exception org.xml.sax.SAXException If no default XMLReader class
 can be identified and instantiated.
 - seealso: #createXMLReader(java.lang.String)
 */
+ (id<OrgXmlSaxXMLReader>)createXMLReader;

/*!
 @brief Attempt to create an XML reader from a class name.
 <p>Given a class name, this method attempts to load
 and instantiate the class as an XML reader.</p>
 @param className_ the name of the class that should be instantiated.
 <p>Note that this method will not be usable in environments where
 the caller (perhaps an applet) is not permitted to load classes
 dynamically.</p>
 @return A new XML reader.
 @exception org.xml.sax.SAXException If the class cannot be
 loaded, instantiated, and cast to XMLReader.
 - seealso: #createXMLReader()
 */
+ (id<OrgXmlSaxXMLReader>)createXMLReaderWithNSString:(NSString *)className_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxHelpersXMLReaderFactory)

FOUNDATION_EXPORT id<OrgXmlSaxXMLReader> OrgXmlSaxHelpersXMLReaderFactory_createXMLReader();

FOUNDATION_EXPORT id<OrgXmlSaxXMLReader> OrgXmlSaxHelpersXMLReaderFactory_createXMLReaderWithNSString_(NSString *className_);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxHelpersXMLReaderFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxHelpersXMLReaderFactory")
