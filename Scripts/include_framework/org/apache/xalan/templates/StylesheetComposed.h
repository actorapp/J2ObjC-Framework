//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/StylesheetComposed.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetComposed")
#ifdef RESTRICT_OrgApacheXalanTemplatesStylesheetComposed
#define INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetComposed 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetComposed 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesStylesheetComposed

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesStylesheetComposed_) && (INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetComposed || defined(INCLUDE_OrgApacheXalanTemplatesStylesheetComposed))
#define OrgApacheXalanTemplatesStylesheetComposed_

#define RESTRICT_OrgApacheXalanTemplatesStylesheet 1
#define INCLUDE_OrgApacheXalanTemplatesStylesheet 1
#include "../../../../org/apache/xalan/templates/Stylesheet.h"

@class JavaUtilVector;

/*!
 @brief Represents a stylesheet that has methods that resolve includes and
 imports.
 It has methods on it that
 return "composed" properties, which mean that:
 <ol>
 <li>Properties that are aggregates, like OutputProperties, will
 be composed of properties declared in this stylsheet and all
 included stylesheets.</li>
 <li>Properties that aren't found, will be searched for first in
 the includes, and, if none are located, will be searched for in
 the imports.</li>
 <li>Properties in that are not atomic on a stylesheet will
 have the form getXXXComposed. Some properties, like version and id,
 are not inherited, and so won't have getXXXComposed methods.</li>
 </ol>
 <p>In some cases getXXXComposed methods may calculate the composed
 values dynamically, while in other cases they may store the composed
 values.</p>
 */
@interface OrgApacheXalanTemplatesStylesheetComposed : OrgApacheXalanTemplatesStylesheet

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Uses an XSL stylesheet document.
 @param parent  The including or importing stylesheet.
 */
- (instancetype)initWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)parent;

/*!
 @brief Get the number of import in this stylesheet's composed list.
 @return the number of imports in this stylesheet's composed list.
 */
- (jint)getEndImportCountComposed;

/*!
 @brief Get a stylesheet from the "import" list.
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 @param i Index of stylesheet in import list
 @return The stylesheet at the given index
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesStylesheetComposed *)getImportComposedWithInt:(jint)i;

/*!
 @brief Get the precedence of this stylesheet in the global import list.
 The lowest precedence is 0.  A higher number has a higher precedence.
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 @return the precedence of this stylesheet in the global import list.
 */
- (jint)getImportCountComposed;

/*!
 @brief Get an "xsl:include" property.
 - seealso: <a href="http://www.w3.org/TR/xslt#include">include in XSLT Specification</a>
 @param i Index of stylesheet in "include" list
 @return The stylesheet at the given index in the "include" list
 @throws ArrayIndexOutOfBoundsException
 */
- (OrgApacheXalanTemplatesStylesheet *)getIncludeComposedWithInt:(jint)i;

/*!
 @brief Get the number of included stylesheets.
 - seealso: <a href="http://www.w3.org/TR/xslt#import">import in XSLT Specification</a>
 @return the number of included stylesheets.
 */
- (jint)getIncludeCountComposed;

/*!
 @brief Tell if this can be cast to a StylesheetComposed, meaning, you
 can ask questions from getXXXComposed functions.
 @return True since this is a StylesheetComposed
 */
- (jboolean)isAggregatedType;

/*!
 @brief Adds all recomposable values for this precedence level into the recomposableElements Vector
 that was passed in as the first parameter.
 All elements added to the
 recomposableElements vector should extend ElemTemplateElement.
 @param recomposableElements a Vector of ElemTemplateElement objects that we will add all of
 our recomposable objects to.
 */
- (void)recomposeWithJavaUtilVector:(JavaUtilVector *)recomposableElements;

/*!
 @brief For compilation support, we need the option of overwriting
 (rather than appending to) previous composition.
 We could phase out the old API in favor of this one, but I'm
 holding off until we've made up our minds about compilation.
 ADDED 9/5/2000 to support compilation experiment.
 NOTE: GLP 29-Nov-00 I've left this method in so that CompilingStylesheetHandler will compile.  However,
 I'm not sure why it's needed or what it does and I've commented out the body.
 - seealso: <a href="http://www.w3.org/TR/xslt#section-Defining-Template-Rules">section-Defining-Template-Rules in XSLT Specification</a>
 @param flushFirst Flag indicating the option of overwriting
 (rather than appending to) previous composition.
 @throws TransformerException
 */
- (void)recomposeTemplatesWithBoolean:(jboolean)flushFirst;

#pragma mark Package-Private

/*!
 @brief Recalculate the precedence of this stylesheet in the global
 import list.
 The lowest precedence stylesheet is 0.  A higher
 number has a higher precedence.
 */
- (void)recomposeImports;

/*!
 @brief Recompose the value of the composed include list.
 Builds a composite
 list of all stylesheets included by this stylesheet to any depth.
 @param including Stylesheet to recompose
 */
- (void)recomposeIncludesWithOrgApacheXalanTemplatesStylesheet:(OrgApacheXalanTemplatesStylesheet *)including;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesStylesheetComposed)

inline jlong OrgApacheXalanTemplatesStylesheetComposed_get_serialVersionUID();
#define OrgApacheXalanTemplatesStylesheetComposed_serialVersionUID -3444072247410233923LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesStylesheetComposed, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesStylesheetComposed_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheetComposed *self, OrgApacheXalanTemplatesStylesheet *parent);

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetComposed *new_OrgApacheXalanTemplatesStylesheetComposed_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *parent) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesStylesheetComposed *create_OrgApacheXalanTemplatesStylesheetComposed_initWithOrgApacheXalanTemplatesStylesheet_(OrgApacheXalanTemplatesStylesheet *parent);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesStylesheetComposed)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesStylesheetComposed")
