//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/Attributes2.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxExtAttributes2")
#ifdef RESTRICT_OrgXmlSaxExtAttributes2
#define INCLUDE_ALL_OrgXmlSaxExtAttributes2 0
#else
#define INCLUDE_ALL_OrgXmlSaxExtAttributes2 1
#endif
#undef RESTRICT_OrgXmlSaxExtAttributes2

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxExtAttributes2_) && (INCLUDE_ALL_OrgXmlSaxExtAttributes2 || defined(INCLUDE_OrgXmlSaxExtAttributes2))
#define OrgXmlSaxExtAttributes2_

#define RESTRICT_OrgXmlSaxAttributes 1
#define INCLUDE_OrgXmlSaxAttributes 1
#include "org/xml/sax/Attributes.h"

/*!
 @brief SAX2 extension to augment the per-attribute information
 provided though <code>Attributes</code>.
 If an implementation supports this extension, the attributes
 provided in <code>ContentHandler.startElement()</code>
  will implement this interface,
 and the <em>http://xml.org/sax/features/use-attributes2</em>
 feature flag will have the value <em>true</em>.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 </blockquote>
 <p> XMLReader implementations are not required to support this
 information, and it is not part of core-only SAX2 distributions.</p>
 <p>Note that if an attribute was defaulted (<em>!isSpecified()</em>)
 it will of necessity also have been declared (<em>isDeclared()</em>)
 in the DTD.
 Similarly if an attribute's type is anything except CDATA, then it
 must have been declared.
 </p>
 @since SAX 2.0 (extensions 1.1 alpha)
 @author David Brownell
 @version TBS
 */
@protocol OrgXmlSaxExtAttributes2 < OrgXmlSaxAttributes, JavaObject >

/*!
 @brief Returns false unless the attribute was declared in the DTD.
 This helps distinguish two kinds of attributes that SAX reports
 as CDATA:  ones that were declared (and hence are usually valid),
 and those that were not (and which are never valid).
 @param index The attribute index (zero-based).
 @return true if the attribute was declared in the DTD,
 false otherwise.
 @exception java.lang.ArrayIndexOutOfBoundsException When the
 supplied index does not identify an attribute.
 */
- (jboolean)isDeclaredWithInt:(jint)index;

/*!
 @brief Returns false unless the attribute was declared in the DTD.
 This helps distinguish two kinds of attributes that SAX reports
 as CDATA:  ones that were declared (and hence are usually valid),
 and those that were not (and which are never valid).
 @param qName The XML qualified (prefixed) name.
 @return true if the attribute was declared in the DTD,
 false otherwise.
 @exception java.lang.IllegalArgumentException When the
 supplied name does not identify an attribute.
 */
- (jboolean)isDeclaredWithNSString:(NSString *)qName;

/*!
 @brief Returns false unless the attribute was declared in the DTD.
 This helps distinguish two kinds of attributes that SAX reports
 as CDATA:  ones that were declared (and hence are usually valid),
 and those that were not (and which are never valid).
 <p>Remember that since DTDs do not "understand" namespaces, the
 namespace URI associated with an attribute may not have come from
 the DTD.  The declaration will have applied to the attribute's
 <em>qName</em>.
 @param uri The Namespace URI, or the empty string if
 the name has no Namespace URI.
 @param localName The attribute's local name.
 @return true if the attribute was declared in the DTD,
 false otherwise.
 @exception java.lang.IllegalArgumentException When the
 supplied names do not identify an attribute.
 */
- (jboolean)isDeclaredWithNSString:(NSString *)uri
                      withNSString:(NSString *)localName;

/*!
 @brief Returns true unless the attribute value was provided
 by DTD defaulting.
 @param index The attribute index (zero-based).
 @return true if the value was found in the XML text,
 false if the value was provided by DTD defaulting.
 @exception java.lang.ArrayIndexOutOfBoundsException When the
 supplied index does not identify an attribute.
 */
- (jboolean)isSpecifiedWithInt:(jint)index;

/*!
 @brief Returns true unless the attribute value was provided
 by DTD defaulting.
 <p>Remember that since DTDs do not "understand" namespaces, the
 namespace URI associated with an attribute may not have come from
 the DTD.  The declaration will have applied to the attribute's
 <em>qName</em>.
 @param uri The Namespace URI, or the empty string if
 the name has no Namespace URI.
 @param localName The attribute's local name.
 @return true if the value was found in the XML text,
 false if the value was provided by DTD defaulting.
 @exception java.lang.IllegalArgumentException When the
 supplied names do not identify an attribute.
 */
- (jboolean)isSpecifiedWithNSString:(NSString *)uri
                       withNSString:(NSString *)localName;

/*!
 @brief Returns true unless the attribute value was provided
 by DTD defaulting.
 @param qName The XML qualified (prefixed) name.
 @return true if the value was found in the XML text,
 false if the value was provided by DTD defaulting.
 @exception java.lang.IllegalArgumentException When the
 supplied name does not identify an attribute.
 */
- (jboolean)isSpecifiedWithNSString:(NSString *)qName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtAttributes2)

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtAttributes2)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxExtAttributes2")
