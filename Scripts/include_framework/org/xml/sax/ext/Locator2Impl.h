//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/org/xml/sax/ext/Locator2Impl.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgXmlSaxExtLocator2Impl")
#ifdef RESTRICT_OrgXmlSaxExtLocator2Impl
#define INCLUDE_ALL_OrgXmlSaxExtLocator2Impl 0
#else
#define INCLUDE_ALL_OrgXmlSaxExtLocator2Impl 1
#endif
#undef RESTRICT_OrgXmlSaxExtLocator2Impl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgXmlSaxExtLocator2Impl_) && (INCLUDE_ALL_OrgXmlSaxExtLocator2Impl || defined(INCLUDE_OrgXmlSaxExtLocator2Impl))
#define OrgXmlSaxExtLocator2Impl_

#define RESTRICT_OrgXmlSaxHelpersLocatorImpl 1
#define INCLUDE_OrgXmlSaxHelpersLocatorImpl 1
#include "../../../../org/xml/sax/helpers/LocatorImpl.h"

#define RESTRICT_OrgXmlSaxExtLocator2 1
#define INCLUDE_OrgXmlSaxExtLocator2 1
#include "../../../../org/xml/sax/ext/Locator2.h"

@protocol OrgXmlSaxLocator;

/*!
 @brief SAX2 extension helper for holding additional Entity information,
 implementing the <code>Locator2</code> interface.
 <blockquote>
 <em>This module, both source code and documentation, is in the
 Public Domain, and comes with <strong>NO WARRANTY</strong>.</em>
 </blockquote>
 <p> This is not part of core-only SAX2 distributions.</p>
 @since SAX 2.0.2
 @author David Brownell
 @version TBS
 */
@interface OrgXmlSaxExtLocator2Impl : OrgXmlSaxHelpersLocatorImpl < OrgXmlSaxExtLocator2 >

#pragma mark Public

/*!
 @brief Construct a new, empty Locator2Impl object.
 This will not normally be useful, since the main purpose
 of this class is to make a snapshot of an existing Locator.
 */
- (instancetype)init;

/*!
 @brief Copy an existing Locator or Locator2 object.
 If the object implements Locator2, values of the
 <em>encoding</em> and <em>version</em>strings are copied,
 otherwise they set to <em>null</em>.
 @param locator The existing Locator object.
 */
- (instancetype)initWithOrgXmlSaxLocator:(id<OrgXmlSaxLocator>)locator;

/*!
 @brief Returns the current value of the encoding property.
 @return the current value of the encoding property.
 - seealso: #setEncoding
 */
- (NSString *)getEncoding;

/*!
 @brief Returns the current value of the version property.
 @return the current value of the version property.
 - seealso: #setXMLVersion
 */
- (NSString *)getXMLVersion;

/*!
 @brief Assigns the current value of the encoding property.
 @param encoding the new "encoding" value
 - seealso: #getEncoding
 */
- (void)setEncodingWithNSString:(NSString *)encoding;

/*!
 @brief Assigns the current value of the version property.
 @param version_ the new "version" value
 - seealso: #getXMLVersion
 */
- (void)setXMLVersionWithNSString:(NSString *)version_;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgXmlSaxExtLocator2Impl)

FOUNDATION_EXPORT void OrgXmlSaxExtLocator2Impl_init(OrgXmlSaxExtLocator2Impl *self);

FOUNDATION_EXPORT OrgXmlSaxExtLocator2Impl *new_OrgXmlSaxExtLocator2Impl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxExtLocator2Impl *create_OrgXmlSaxExtLocator2Impl_init();

FOUNDATION_EXPORT void OrgXmlSaxExtLocator2Impl_initWithOrgXmlSaxLocator_(OrgXmlSaxExtLocator2Impl *self, id<OrgXmlSaxLocator> locator);

FOUNDATION_EXPORT OrgXmlSaxExtLocator2Impl *new_OrgXmlSaxExtLocator2Impl_initWithOrgXmlSaxLocator_(id<OrgXmlSaxLocator> locator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgXmlSaxExtLocator2Impl *create_OrgXmlSaxExtLocator2Impl_initWithOrgXmlSaxLocator_(id<OrgXmlSaxLocator> locator);

J2OBJC_TYPE_LITERAL_HEADER(OrgXmlSaxExtLocator2Impl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgXmlSaxExtLocator2Impl")
