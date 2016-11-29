//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/objects/XNull.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNull")
#ifdef RESTRICT_OrgApacheXpathObjectsXNull
#define INCLUDE_ALL_OrgApacheXpathObjectsXNull 0
#else
#define INCLUDE_ALL_OrgApacheXpathObjectsXNull 1
#endif
#undef RESTRICT_OrgApacheXpathObjectsXNull

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathObjectsXNull_) && (INCLUDE_ALL_OrgApacheXpathObjectsXNull || defined(INCLUDE_OrgApacheXpathObjectsXNull))
#define OrgApacheXpathObjectsXNull_

#define RESTRICT_OrgApacheXpathObjectsXNodeSet 1
#define INCLUDE_OrgApacheXpathObjectsXNodeSet 1
#include "../../../../org/apache/xpath/objects/XNodeSet.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief This class represents an XPath null object, and is capable of
 converting the null to other types, such as a string.
  general
 */
@interface OrgApacheXpathObjectsXNull : OrgApacheXpathObjectsXNodeSet

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Create an XObject.
 */
- (instancetype)init;

/*!
 @brief Cast result object to a boolean.
 @return false
 */
- (jboolean)bool__;

/*!
 @brief Tell if two objects are functionally equal.
 @param obj2 Object to compare this to
 @return True if the given object is of type CLASS_NULL
 */
- (jboolean)equalsWithOrgApacheXpathObjectsXObject:(OrgApacheXpathObjectsXObject *)obj2;

/*!
 @brief Tell what kind of class this is.
 @return type CLASS_NULL
 */
- (jint)getType;

/*!
 @brief Given a request type, return the equivalent string.
 For diagnostic purposes.
 @return type string "#CLASS_NULL"
 */
- (NSString *)getTypeString;

/*!
 @brief Cast result object to a number.
 @return 0.0
 */
- (jdouble)num;

/*!
 @brief Cast result object to a result tree fragment.
 @param support XPath context to use for the conversion
 @return The object as a result tree fragment.
 */
- (jint)rtfWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)support;

/*!
 @brief Cast result object to a string.
 @return empty string ""
 */
- (NSString *)str;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathObjectsXNull)

inline jlong OrgApacheXpathObjectsXNull_get_serialVersionUID();
#define OrgApacheXpathObjectsXNull_serialVersionUID -6841683711458983005LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathObjectsXNull, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathObjectsXNull_init(OrgApacheXpathObjectsXNull *self);

FOUNDATION_EXPORT OrgApacheXpathObjectsXNull *new_OrgApacheXpathObjectsXNull_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathObjectsXNull *create_OrgApacheXpathObjectsXNull_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathObjectsXNull)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathObjectsXNull")
