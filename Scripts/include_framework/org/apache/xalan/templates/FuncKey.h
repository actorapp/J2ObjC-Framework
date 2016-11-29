//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/FuncKey.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncKey")
#ifdef RESTRICT_OrgApacheXalanTemplatesFuncKey
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncKey 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncKey 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesFuncKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesFuncKey_) && (INCLUDE_ALL_OrgApacheXalanTemplatesFuncKey || defined(INCLUDE_OrgApacheXalanTemplatesFuncKey))
#define OrgApacheXalanTemplatesFuncKey_

#define RESTRICT_OrgApacheXpathFunctionsFunction2Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction2Args 1
#include "../../../../org/apache/xpath/functions/Function2Args.h"

@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Key() function.
  advanced
 */
@interface OrgApacheXalanTemplatesFuncKey : OrgApacheXpathFunctionsFunction2Args

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Execute the function.
 The function must return
 a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

@end

J2OBJC_STATIC_INIT(OrgApacheXalanTemplatesFuncKey)

inline jlong OrgApacheXalanTemplatesFuncKey_get_serialVersionUID();
#define OrgApacheXalanTemplatesFuncKey_serialVersionUID 9089293100115347340LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesFuncKey, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesFuncKey_init(OrgApacheXalanTemplatesFuncKey *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncKey *new_OrgApacheXalanTemplatesFuncKey_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncKey *create_OrgApacheXalanTemplatesFuncKey_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesFuncKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncKey")
