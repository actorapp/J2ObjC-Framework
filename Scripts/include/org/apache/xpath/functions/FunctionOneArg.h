//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/FunctionOneArg.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionOneArg")
#ifdef RESTRICT_OrgApacheXpathFunctionsFunctionOneArg
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionOneArg 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsFunctionOneArg 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsFunctionOneArg

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsFunctionOneArg_) && (INCLUDE_ALL_OrgApacheXpathFunctionsFunctionOneArg || defined(INCLUDE_OrgApacheXpathFunctionsFunctionOneArg))
#define OrgApacheXpathFunctionsFunctionOneArg_

#define RESTRICT_OrgApacheXpathFunctionsFunction 1
#define INCLUDE_OrgApacheXpathFunctionsFunction 1
#include "org/apache/xpath/functions/Function.h"

#define RESTRICT_OrgApacheXpathExpressionOwner 1
#define INCLUDE_OrgApacheXpathExpressionOwner 1
#include "org/apache/xpath/ExpressionOwner.h"

@class JavaUtilVector;
@class OrgApacheXpathExpression;
@class OrgApacheXpathXPathVisitor;

/*!
 @brief Base class for functions that accept one argument.
  advanced
 */
@interface OrgApacheXpathFunctionsFunctionOneArg : OrgApacheXpathFunctionsFunction < OrgApacheXpathExpressionOwner > {
 @public
  /*!
   @brief The first argument passed to the function (at index 0).
     
   */
  OrgApacheXpathExpression *m_arg0_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

- (instancetype)init;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner,XPathVisitor)
 */
- (void)callArgVisitorsWithOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Tell if this expression or it's subexpressions can traverse outside 
 the current subtree.
 @return true if traversal outside the context node's subtree can occur.
 */
- (jboolean)canTraverseOutsideSubtree;

/*!
 @brief Check that the number of arguments passed to this function is correct.
 @param argNum The number of arguments that is being passed to the function.
 @throws WrongNumberArgsException
 */
- (void)checkNumberArgsWithInt:(jint)argNum;

/*!
 - seealso: Expression#deepEquals(Expression)
 */
- (jboolean)deepEqualsWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)expr;

/*!
 @brief This function is used to fixup variables from QNames to stack frame 
 indexes at stylesheet build time.
 @param vars List of QNames that correspond to variables.  This list 
 should be searched backwards for the first qualified name that 
 corresponds to the variable reference qname.  The position of the 
 QName in the vector from the start of the vector will be its position 
 in the stack frame (but variables above the globalsTop value will need 
 to be offset to the current stack frame).
 */
- (void)fixupVariablesWithJavaUtilVector:(JavaUtilVector *)vars
                                 withInt:(jint)globalsSize;

/*!
 @brief Return the first argument passed to the function (at index 0).
 @return An expression that represents the first argument passed to the 
 function.
 */
- (OrgApacheXpathExpression *)getArg0;

/*!
 - seealso: ExpressionOwner#getExpression()
 */
- (OrgApacheXpathExpression *)getExpression;

/*!
 @brief Set an argument expression for a function.
 This method is called by the 
 XPath compiler.
 @param arg non-null expression that represents the argument.
 @param argNum The argument number index.
 @throws WrongNumberArgsException If the argNum parameter is greater than 0.
 */
- (void)setArgWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)arg
                                   withInt:(jint)argNum;

/*!
 - seealso: ExpressionOwner#setExpression(Expression)
 */
- (void)setExpressionWithOrgApacheXpathExpression:(OrgApacheXpathExpression *)exp;

#pragma mark Protected

/*!
 @brief Constructs and throws a WrongNumberArgException with the appropriate
 message for this function object.
 @throws WrongNumberArgsException
 */
- (void)reportWrongNumberArgs;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathFunctionsFunctionOneArg)

J2OBJC_FIELD_SETTER(OrgApacheXpathFunctionsFunctionOneArg, m_arg0_, OrgApacheXpathExpression *)

inline jlong OrgApacheXpathFunctionsFunctionOneArg_get_serialVersionUID();
#define OrgApacheXpathFunctionsFunctionOneArg_serialVersionUID -5180174180765609758LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathFunctionsFunctionOneArg, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathFunctionsFunctionOneArg_init(OrgApacheXpathFunctionsFunctionOneArg *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionOneArg *new_OrgApacheXpathFunctionsFunctionOneArg_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsFunctionOneArg *create_OrgApacheXpathFunctionsFunctionOneArg_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsFunctionOneArg)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsFunctionOneArg")
