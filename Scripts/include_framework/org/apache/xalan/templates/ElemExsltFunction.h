//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/ElemExsltFunction.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFunction")
#ifdef RESTRICT_OrgApacheXalanTemplatesElemExsltFunction
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFunction 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFunction 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesElemExsltFunction

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesElemExsltFunction_) && (INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFunction || defined(INCLUDE_OrgApacheXalanTemplatesElemExsltFunction))
#define OrgApacheXalanTemplatesElemExsltFunction_

#define RESTRICT_OrgApacheXalanTemplatesElemTemplate 1
#define INCLUDE_OrgApacheXalanTemplatesElemTemplate 1
#include "../../../../org/apache/xalan/templates/ElemTemplate.h"

@class IOSObjectArray;
@class OrgApacheXalanTemplatesStylesheetRoot;
@class OrgApacheXalanTransformerTransformerImpl;

/*!
 @brief Implement func:function.
  advanced
 */
@interface OrgApacheXalanTemplatesElemExsltFunction : OrgApacheXalanTemplatesElemTemplate

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Called after everything else has been
 recomposed, and allows the function to set remaining
 values that may be based on some other property that
 depends on recomposition.
 */
- (void)composeWithOrgApacheXalanTemplatesStylesheetRoot:(OrgApacheXalanTemplatesStylesheetRoot *)sroot;

- (void)executeWithOrgApacheXalanTransformerTransformerImpl:(OrgApacheXalanTransformerTransformerImpl *)transformer
                      withOrgApacheXpathObjectsXObjectArray:(IOSObjectArray *)args;

/*!
 @brief Return the node name, defined in the
 Constants class.
 - seealso: org.apache.xalan.templates.Constants
 @return The node name
 */
- (NSString *)getNodeName;

/*!
 @brief Get an integer representation of the element type.
 @return An integer representation of the element, defined in the
 Constants class.
 - seealso: org.apache.xalan.templates.Constants
 */
- (jint)getXSLToken;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesElemExsltFunction)

inline jlong OrgApacheXalanTemplatesElemExsltFunction_get_serialVersionUID();
#define OrgApacheXalanTemplatesElemExsltFunction_serialVersionUID 272154954793534771LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesElemExsltFunction, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesElemExsltFunction_init(OrgApacheXalanTemplatesElemExsltFunction *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExsltFunction *new_OrgApacheXalanTemplatesElemExsltFunction_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesElemExsltFunction *create_OrgApacheXalanTemplatesElemExsltFunction_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesElemExsltFunction)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesElemExsltFunction")
