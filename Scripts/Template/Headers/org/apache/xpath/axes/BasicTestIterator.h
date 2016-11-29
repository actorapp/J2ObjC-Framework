//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/BasicTestIterator.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesBasicTestIterator")
#ifdef RESTRICT_OrgApacheXpathAxesBasicTestIterator
#define INCLUDE_ALL_OrgApacheXpathAxesBasicTestIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesBasicTestIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesBasicTestIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesBasicTestIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesBasicTestIterator || defined(INCLUDE_OrgApacheXpathAxesBasicTestIterator))
#define OrgApacheXpathAxesBasicTestIterator_

#define RESTRICT_OrgApacheXpathAxesLocPathIterator 1
#define INCLUDE_OrgApacheXpathAxesLocPathIterator 1
#include "../../../../org/apache/xpath/axes/LocPathIterator.h"

@class OrgApacheXpathCompilerCompiler;
@protocol OrgApacheXmlDtmDTMIterator;
@protocol OrgApacheXmlUtilsPrefixResolver;

/*!
 @brief Base for iterators that handle predicates.
 Does the basic next 
 node logic, so all the derived iterator has to do is get the 
 next node.
 */
@interface OrgApacheXpathAxesBasicTestIterator : OrgApacheXpathAxesLocPathIterator

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Get a cloned Iterator that is reset to the beginning
 of the query.
 @return A cloned NodeIterator set of the start of the query.
 @throws CloneNotSupportedException
 */
- (id<OrgApacheXmlDtmDTMIterator>)cloneWithReset;

/*!
 @brief Returns the next node in the set and advances the position of the
 iterator in the set.
 After a NodeIterator is created, the first call
 to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
 <code>null</code> if there are no more members in that set.
 */
- (jint)nextNode;

#pragma mark Protected

/*!
 @brief Create a LocPathIterator object.
 @param nscontext The namespace context for this iterator,
 should be OK if null.
 */
- (instancetype)init;

/*!
 @brief Create a LocPathIterator object, including creation
 of step walkers from the opcode list, and call back
 into the Compiler to create predicate expressions.
 @param compiler The Compiler which is creating
 this expression.
 @param opPos The position of this iterator in the
 opcode list from the compiler.
 @throws javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis;

/*!
 @brief Create a LocPathIterator object, including creation
 of step walkers from the opcode list, and call back
 into the Compiler to create predicate expressions.
 @param compiler The Compiler which is creating
 this expression.
 @param opPos The position of this iterator in the
 opcode list from the compiler.
 @param shouldLoadWalkers True if walkers should be
 loaded, or false if this is a derived iterator and
 it doesn't wish to load child walkers.
 @throws javax.xml.transform.TransformerException
 */
- (instancetype)initWithOrgApacheXpathCompilerCompiler:(OrgApacheXpathCompilerCompiler *)compiler
                                               withInt:(jint)opPos
                                               withInt:(jint)analysis
                                           withBoolean:(jboolean)shouldLoadWalkers;

/*!
 @brief Create a LocPathIterator object.
 @param nscontext The namespace context for this iterator,
 should be OK if null.
 */
- (instancetype)initWithOrgApacheXmlUtilsPrefixResolver:(id<OrgApacheXmlUtilsPrefixResolver>)nscontext;

/*!
 @brief Get the next node via getNextXXX.
 Bottlenecked for derived class override.
 @return The next node on the axis, or DTM.NULL.
 */
- (jint)getNextNode;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesBasicTestIterator)

inline jlong OrgApacheXpathAxesBasicTestIterator_get_serialVersionUID();
#define OrgApacheXpathAxesBasicTestIterator_serialVersionUID 3505378079378096623LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesBasicTestIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesBasicTestIterator_init(OrgApacheXpathAxesBasicTestIterator *self);

FOUNDATION_EXPORT void OrgApacheXpathAxesBasicTestIterator_initWithOrgApacheXmlUtilsPrefixResolver_(OrgApacheXpathAxesBasicTestIterator *self, id<OrgApacheXmlUtilsPrefixResolver> nscontext);

FOUNDATION_EXPORT void OrgApacheXpathAxesBasicTestIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesBasicTestIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT void OrgApacheXpathAxesBasicTestIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_withBoolean_(OrgApacheXpathAxesBasicTestIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis, jboolean shouldLoadWalkers);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesBasicTestIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesBasicTestIterator")
