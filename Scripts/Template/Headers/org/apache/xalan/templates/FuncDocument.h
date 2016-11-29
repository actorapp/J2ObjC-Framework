//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/templates/FuncDocument.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncDocument")
#ifdef RESTRICT_OrgApacheXalanTemplatesFuncDocument
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncDocument 0
#else
#define INCLUDE_ALL_OrgApacheXalanTemplatesFuncDocument 1
#endif
#undef RESTRICT_OrgApacheXalanTemplatesFuncDocument

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTemplatesFuncDocument_) && (INCLUDE_ALL_OrgApacheXalanTemplatesFuncDocument || defined(INCLUDE_OrgApacheXalanTemplatesFuncDocument))
#define OrgApacheXalanTemplatesFuncDocument_

#define RESTRICT_OrgApacheXpathFunctionsFunction2Args 1
#define INCLUDE_OrgApacheXpathFunctionsFunction2Args 1
#include "../../../../org/apache/xpath/functions/Function2Args.h"

@class IOSObjectArray;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;

/*!
 @brief Execute the Doc() function.
 When the document function has exactly one argument and the argument
 is a node-set, then the result is the union, for each node in the
 argument node-set, of the result of calling the document function with
 the first argument being the string-value of the node, and the second
 argument being a node-set with the node as its only member. When the
 document function has two arguments and the first argument is a node-set,
 then the result is the union, for each node in the argument node-set,
 of the result of calling the document function with the first argument
 being the string-value of the node, and with the second argument being
 the second argument passed to the document function.
  advanced
 */
@interface OrgApacheXalanTemplatesFuncDocument : OrgApacheXpathFunctionsFunction2Args

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 @brief Overide the superclass method to allow one or two arguments.
 @param argNum Number of arguments passed in to this function
 @throws WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 @brief Tell the user of an error, and probably throw an
 exception.
 @param xctxt The XPath runtime state.
 @param msg The error message key
 @param args Arguments to be used in the error message
 @throws XSLProcessorException thrown if the active ProblemListener and XPathContext decide
 the error condition is severe enough to halt processing.
 @throws javax.xml.transform.TransformerException
 */
- (void)errorWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                               withNSString:(NSString *)msg
                          withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Execute the function.
 The function must return
 a valid object.
 @param xctxt The current execution context.
 @return A valid XObject.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Tell if the expression is a nodeset expression.
 @return true if the expression can be represented as a nodeset.
 */
- (jboolean)isNodesetExpr;

/*!
 @brief Warn the user of a problem.
 @param xctxt The XPath runtime state.
 @param msg Warning message key
 @param args Arguments to be used in the warning message
 @throws XSLProcessorException thrown if the active ProblemListener and XPathContext decide
 the error condition is severe enough to halt processing.
 @throws javax.xml.transform.TransformerException
 */
- (void)warnWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                              withNSString:(NSString *)msg
                         withNSObjectArray:(IOSObjectArray *)args;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
 message for this function object.
 @throws WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

#pragma mark Package-Private

/*!
 @brief Get the document from the given URI and base
 @param xctxt The XPath runtime state.
 @param context The current context node
 @param uri Relative(?) URI of the document
 @param base Base to resolve relative URI from.
 @return The document Node pointing to the document at the given URI
 or null
 @throws javax.xml.transform.TransformerException
 */
- (jint)getDocWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                     withInt:(jint)context
                                withNSString:(NSString *)uri
                                withNSString:(NSString *)base;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTemplatesFuncDocument)

inline jlong OrgApacheXalanTemplatesFuncDocument_get_serialVersionUID();
#define OrgApacheXalanTemplatesFuncDocument_serialVersionUID 2483304325971281424LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXalanTemplatesFuncDocument, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXalanTemplatesFuncDocument_init(OrgApacheXalanTemplatesFuncDocument *self);

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncDocument *new_OrgApacheXalanTemplatesFuncDocument_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTemplatesFuncDocument *create_OrgApacheXalanTemplatesFuncDocument_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTemplatesFuncDocument)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTemplatesFuncDocument")
