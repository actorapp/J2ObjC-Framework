//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XMLStringFactoryImpl.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl")
#ifdef RESTRICT_OrgApacheXpathObjectsXMLStringFactoryImpl
#define INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXMLStringFactoryImpl

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathObjectsXMLStringFactoryImpl_) && (INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl || defined(INCLUDE_OrgApacheXpathObjectsXMLStringFactoryImpl))
#define OrgApacheXpathObjectsXMLStringFactoryImpl_

#define RESTRICT_OrgApacheXmlUtilsXMLStringFactory 1
#define INCLUDE_OrgApacheXmlUtilsXMLStringFactory 1
#include "org/apache/xml/utils/XMLStringFactory.h"

@class IOSCharArray;
@class OrgApacheXmlUtilsFastStringBuffer;
@protocol OrgApacheXmlUtilsXMLString;

/*!
 @brief Class XMLStringFactoryImpl creates XString versions of XMLStrings.
  internal
 */
@interface OrgApacheXpathObjectsXMLStringFactoryImpl : OrgApacheXmlUtilsXMLStringFactory

#pragma mark Public

- (instancetype)init;

/*!
 @brief Get a cheap representation of an empty string.
 @return An non-null reference to an XMLString that represents "".
 */
- (id<OrgApacheXmlUtilsXMLString>)emptystr;

/*!
 @brief Get the XMLStringFactory to pass to DTM construction.
 @return A never-null static reference to a String factory.
 */
+ (OrgApacheXmlUtilsXMLStringFactory *)getFactory;

/*!
 @brief Create a XMLString from a FastStringBuffer.
 @param string FastStringBuffer reference, which must be non-null.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @return An XMLString object that wraps the FastStringBuffer reference.
 */
- (id<OrgApacheXmlUtilsXMLString>)newstrWithCharArray:(IOSCharArray *)string
                                              withInt:(jint)start
                                              withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create a XMLString from a FastStringBuffer.
 @param fsb FastStringBuffer reference, which must be non-null.
 @param start The start position in the array.
 @param length The number of characters to read from the array.
 @return An XMLString object that wraps the FastStringBuffer reference.
 */
- (id<OrgApacheXmlUtilsXMLString>)newstrWithOrgApacheXmlUtilsFastStringBuffer:(OrgApacheXmlUtilsFastStringBuffer *)fsb
                                                                      withInt:(jint)start
                                                                      withInt:(jint)length OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Create a new XMLString from a Java string.
 @param string Java String reference, which must be non-null.
 @return An XMLString object that wraps the String reference.
 */
- (id<OrgApacheXmlUtilsXMLString>)newstrWithNSString:(NSString *)string OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathObjectsXMLStringFactoryImpl)

FOUNDATION_EXPORT OrgApacheXmlUtilsXMLStringFactory *OrgApacheXpathObjectsXMLStringFactoryImpl_getFactory();

FOUNDATION_EXPORT void OrgApacheXpathObjectsXMLStringFactoryImpl_init(OrgApacheXpathObjectsXMLStringFactoryImpl *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsXMLStringFactoryImpl *new_OrgApacheXpathObjectsXMLStringFactoryImpl_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXMLStringFactoryImpl *create_OrgApacheXpathObjectsXMLStringFactoryImpl_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXMLStringFactoryImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXMLStringFactoryImpl")
