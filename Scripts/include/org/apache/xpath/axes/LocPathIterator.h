//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/axes/LocPathIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathAxesLocPathIterator")
#ifdef RESTRICT_OrgApacheXpathAxesLocPathIterator
#define INCLUDE_ALL_OrgApacheXpathAxesLocPathIterator 0
#else
#define INCLUDE_ALL_OrgApacheXpathAxesLocPathIterator 1
#endif
#undef RESTRICT_OrgApacheXpathAxesLocPathIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathAxesLocPathIterator_) && (INCLUDE_ALL_OrgApacheXpathAxesLocPathIterator || defined(INCLUDE_OrgApacheXpathAxesLocPathIterator))
#define OrgApacheXpathAxesLocPathIterator_

#define RESTRICT_OrgApacheXpathAxesPredicatedNodeTest 1
#define INCLUDE_OrgApacheXpathAxesPredicatedNodeTest 1
#include "org/apache/xpath/axes/PredicatedNodeTest.h"

#define RESTRICT_OrgApacheXmlDtmDTMIterator 1
#define INCLUDE_OrgApacheXmlDtmDTMIterator 1
#include "org/apache/xml/dtm/DTMIterator.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

#define RESTRICT_OrgApacheXpathAxesPathComponent 1
#define INCLUDE_OrgApacheXpathAxesPathComponent 1
#include "org/apache/xpath/axes/PathComponent.h"

@class OrgApacheXmlDtmDTMManager;
@class OrgApacheXpathAxesIteratorPool;
@class OrgApacheXpathCompilerCompiler;
@class OrgApacheXpathObjectsXObject;
@class OrgApacheXpathXPathContext;
@class OrgApacheXpathXPathVisitor;
@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlDtmDTMFilter;
@protocol OrgApacheXmlUtilsPrefixResolver;
@protocol OrgApacheXpathExpressionOwner;
@protocol OrgXmlSaxContentHandler;

/*!
 @brief This class extends NodeSetDTM, which implements NodeIterator,
 and fetches nodes one at a time in document order based on a XPath
 <a href="http://www.w3.org/TR/xpath#NT-LocationPath>LocationPath</a>.
 <p>If setShouldCacheNodes(true) is called,
 as each node is iterated via nextNode(), the node is also stored
 in the NodeVector, so that previousNode() can easily be done, except in
 the case where the LocPathIterator is "owned" by a UnionPathIterator,
 in which case the UnionPathIterator will cache the nodes.</p>
  advanced
 */
@interface OrgApacheXpathAxesLocPathIterator : OrgApacheXpathAxesPredicatedNodeTest < NSCopying, OrgApacheXmlDtmDTMIterator, JavaIoSerializable, OrgApacheXpathAxesPathComponent > {
 @public
  /*!
   @brief Control over whether it is OK for detach to reset the iterator.
   */
  jboolean m_allowDetach_;
  /*!
   @brief The pool for cloned iterators.
   Iterators need to be cloned
 because the hold running state, and thus the original iterator
 expression from the stylesheet pool can not be used.          
   */
  OrgApacheXpathAxesIteratorPool *m_clones_;
  /*!
   @brief The dtm of the context node.
   Careful about using this... it may not 
 be the dtm of the current node.
   */
  id<OrgApacheXmlDtmDTM> m_cdtm_;
  /*!
   @brief The stack frame index for this iterator.
   */
  jint m_stackFrame_;
  /*!
   @brief The last node that was fetched, usually by nextNode.
   */
  jint m_lastFetched_;
  /*!
   @brief The context node for this iterator, which doesn't change through
 the course of the iteration.
   */
  jint m_context_;
  /*!
   @brief The node context from where the expression is being
 executed from (i.e. for current() support).
   Different
 from m_context in that this is the context for the entire
 expression, rather than the context for the subexpression.
   */
  jint m_currentContextNode_;
  /*!
   @brief The current position of the context node.
   */
  jint m_pos_;
  jint m_length_;
  /*!
   @brief The XPathContext reference, needed for execution of many
 operations.
   */
  OrgApacheXpathXPathContext *m_execContext_;
}

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Specify if it's OK for detach to release the iterator for reuse.
 @param allowRelease true if it is OK for detach to release this iterator 
 for pooling.
 */
- (void)allowDetachToReleaseWithBoolean:(jboolean)allowRelease;

/*!
 @brief Given an select expression and a context, evaluate the XPath
 and return the resulting iterator.
 @param xctxt The execution context.
 @param contextNode The node that "." expresses.
 @throws TransformerException thrown if the active ProblemListener decides
 the error condition is severe enough to halt processing.
 @throws javax.xml.transform.TransformerException
  experimental
 */
- (id<OrgApacheXmlDtmDTMIterator>)asIteratorWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                                                   withInt:(jint)contextNode;

/*!
 @brief Return the first node out of the nodeset, if this expression is 
 a nodeset expression.
 This is the default implementation for 
 nodesets.  Derived classes should try and override this and return a 
 value without having to do a clone operation.
 @param xctxt The XPath runtime context.
 @return the first node out of the nodeset, or DTM.NULL.
 */
- (jint)asNodeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Evaluate this operation directly to a boolean.
 @param xctxt The runtime execution context.
 @return The result of the operation as a boolean.
 @throws javax.xml.transform.TransformerException
 */
- (jboolean)bool__WithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 - seealso: org.apache.xpath.XPathVisitable#callVisitors(ExpressionOwner,XPathVisitor)
 */
- (void)callVisitorsWithOrgApacheXpathExpressionOwner:(id<OrgApacheXpathExpressionOwner>)owner
                       withOrgApacheXpathXPathVisitor:(OrgApacheXpathXPathVisitor *)visitor;

/*!
 @brief Get a cloned Iterator that is reset to the beginning
 of the query.
 @return A cloned NodeIterator set of the start of the query.
 @throws CloneNotSupportedException
 */
- (id<OrgApacheXmlDtmDTMIterator>)cloneWithReset;

/*!
 @brief Detaches the iterator from the set which it iterated over, releasing
 any computational resources and placing the iterator in the INVALID
 state.
 After<code>detach</code> has been invoked, calls to
 <code>nextNode</code> or<code>previousNode</code> will raise the
 exception INVALID_STATE_ERR.
 */
- (void)detach;

/*!
 @brief Execute this iterator, meaning create a clone that can
 store state, and initialize it for fast execution from
 the current runtime state.
 When this is called, no actual
 query from the current context node is performed.
 @param xctxt The XPath execution context.
 @return An XNodeSet reference that holds this iterator.
 @throws javax.xml.transform.TransformerException
 */
- (OrgApacheXpathObjectsXObject *)executeWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief Execute an expression in the XPath runtime context, and return the
 result of the expression.
 @param xctxt The XPath runtime context.
 @param handler The target content handler.
 @return The result of the expression in the form of a <code>XObject</code>.
 @throws javax.xml.transform.TransformerException if a runtime exception
 occurs.
 @throws org.xml.sax.SAXException
 */
- (void)executeCharsToContentHandlerWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt
                                       withOrgXmlSaxContentHandler:(id<OrgXmlSaxContentHandler>)handler;

/*!
 @brief Get the analysis bits for this walker, as defined in the WalkerFactory.
 @return One of WalkerFactory#BIT_DESCENDANT, etc.
 */
- (jint)getAnalysisBits;

/*!
 @brief Returns the axis being iterated, if it is known.
 @return Axis.CHILD, etc., or -1 if the axis is not known or is of multiple 
 types.
 */
- (jint)getAxis;

/*!
 @brief The node context for the iterator.
 @return The node context, same as getRoot().
 */
- (jint)getContext;

/*!
 @brief The node context from where the expression is being
 executed from (i.e. for current() support).
 @return The top-level node context of the entire expression.
 */
- (jint)getCurrentContextNode;

/*!
 @brief Return the last fetched node.
 Needed to support the UnionPathIterator.
 @return The last fetched node, or null if the last fetch was null.
 */
- (jint)getCurrentNode;

/*!
 @brief Get the current position, which is one less than
 the next nextNode() call will retrieve.
 i.e. if
 you call getCurrentPos() and the return is 0, the next
 fetch will take place at index 1.
 @return A value greater than or equal to zero that indicates the next
 node position to fetch.
 */
- (jint)getCurrentPos;

/*!
 @brief Get an instance of a DTM that "owns" a node handle.
 Since a node 
 iterator may be passed without a DTMManager, this allows the 
 caller to easily get the DTM using just the iterator.
 @param nodeHandle the nodeHandle.
 @return a non-null DTM reference.
 */
- (id<OrgApacheXmlDtmDTM>)getDTMWithInt:(jint)nodeHandle;

/*!
 @brief Get an instance of the DTMManager.
 Since a node 
 iterator may be passed without a DTMManager, this allows the 
 caller to easily get the DTMManager using just the iterator.
 @return a non-null DTMManager reference.
 */
- (OrgApacheXmlDtmDTMManager *)getDTMManager;

/*!
 @brief The value of this flag determines whether the children of entity
 reference nodes are visible to the iterator.
 If false, they will be
 skipped over.
 <br> To produce a view of the document that has entity references
 expanded and does not expose the entity reference node itself, use the
 whatToShow flags to hide the entity reference node and set
 expandEntityReferences to true when creating the iterator. To produce
 a view of the document that has entity reference nodes but no entity
 expansion, use the whatToShow flags to show the entity reference node
 and set expandEntityReferences to false.
 @return Always true, since entity reference nodes are not
 visible in the XPath model.
 */
- (jboolean)getExpandEntityReferences;

/*!
 @brief The filter used to screen nodes.
 Not used at this time,
 this is here only to fullfill the DOM NodeIterator
 interface.
 @return Always null.
 - seealso: org.w3c.dom.traversal.NodeIterator
 */
- (id<OrgApacheXmlDtmDTMFilter>)getFilter;

/*!
 @brief Tells if we've found the last node yet.
 @return true if the last nextNode returned null.
 */
- (jboolean)getFoundLast;

/*!
 @brief Get if this is an iterator at the upper level of
 the XPath.
 @return true if this location path is at the top level of the
 expression.
  advanced
 */
- (jboolean)getIsTopLevel;

/*!
 - seealso: PredicatedNodeTest#getLastPos(XPathContext)
 */
- (jint)getLastPosWithOrgApacheXpathXPathContext:(OrgApacheXpathXPathContext *)xctxt;

/*!
 @brief The number of nodes in the list.
 The range of valid child node indices
 is 0 to <code>length-1</code> inclusive.
 @return The number of nodes in the list, always greater or equal to zero.
 */
- (jint)getLength;

/*!
 @brief Return the saved reference to the prefix resolver that
 was in effect when this iterator was created.
 @return The prefix resolver or this iterator, which may be null.
 */
- (id<OrgApacheXmlUtilsPrefixResolver>)getPrefixResolver;

/*!
 @brief The root node of the Iterator, as specified when it was created.
 @return The "root" of this iterator, which, in XPath terms,
 is the node context for this iterator.
 */
- (jint)getRoot;

/*!
 @brief This attribute determines which node types are presented via the
 iterator.
 The available set of constants is defined in the
 <code>NodeFilter</code> interface.
 <p>This is somewhat useless at this time, since it doesn't
 really return information that tells what this iterator will
 show.  It is here only to fullfill the DOM NodeIterator
 interface.</p>
 @return For now, always NodeFilter.SHOW_ALL & ~NodeFilter.SHOW_ENTITY_REFERENCE.
 - seealso: org.w3c.dom.traversal.NodeIterator
 */
- (jint)getWhatToShow;

/*!
 @brief The XPath execution context we are operating on.
 @return XPath execution context this iterator is operating on,
 or null if setRoot has not been called.
 */
- (OrgApacheXpathXPathContext *)getXPathContext;

/*!
 @brief Increment the current position in the node set.
 */
- (void)incrementCurrentPos;

/*!
 @brief Returns true if all the nodes in the iteration well be returned in document 
 order.
 @return true as a default.
 */
- (jboolean)isDocOrdered;

/*!
 @brief Tells if this NodeSetDTM is "fresh", in other words, if
 the first nextNode() that is called will return the
 first node in the set.
 @return true of nextNode has not been called.
 */
- (jboolean)isFresh;

/*!
 @brief Tells if this iterator can have nodes added to it or set via 
 the <code>setItem(int node, int index)</code> method.
 @return True if the nodelist can be mutated.
 */
- (jboolean)isMutable;

/*!
 @brief Tell if the expression is a nodeset expression.
 @return true if the expression can be represented as a nodeset.
 */
- (jboolean)isNodesetExpr;

/*!
 @brief Returns the <code>index</code> th item in the collection.
 If
 <code>index</code> is greater than or equal to the number of nodes in
 the list, this returns <code>null</code> .
 @param index  Index into the collection.
 @return The node at the <code>index</code> th position in the
 <code>NodeList</code> , or <code>null</code> if that is not a valid
 index.
 */
- (jint)itemWithInt:(jint)index;

/*!
 @brief Returns the next node in the set and advances the position of the
 iterator in the set.
 After a NodeIterator is created, the first call
 to nextNode() returns the first node in the set.
 @return The next <code>Node</code> in the set being iterated over, or
 <code>null</code> if there are no more members in that set.
 */
- (jint)nextNode;

/*!
 @brief Returns the previous node in the set and moves the position of the
 iterator backwards in the set.
 @return The previous <code>Node</code> in the set being iterated over,
 or<code>null</code> if there are no more members in that set.
 */
- (jint)previousNode;

/*!
 @brief Reset the iterator.
 */
- (void)reset;

/*!
 @brief If an index is requested, NodeSetDTM will call this method
 to run the iterator to the index.
 By default this sets
 m_next to the index.  If the index argument is -1, this
 signals that the iterator should be run to the end.
 @param index The index to run to, or -1 if the iterator
 should run to the end.
 */
- (void)runToWithInt:(jint)index;

/*!
 @brief Set the current context node for this iterator.
 @param n Must be a non-null reference to the node context.
 */
- (void)setCurrentContextNodeWithInt:(jint)n;

/*!
 @brief Set the current position in the node set.
 @param i Must be a valid index greater
 than or equal to zero and less than m_cachedNodes.size().
 */
- (void)setCurrentPosWithInt:(jint)i;

/*!
 @brief Set the environment in which this iterator operates, which should provide:
 a node (the context node... same value as "root" defined below) 
 a pair of non-zero positive integers (the context position and the context size) 
 a set of variable bindings 
 a function library 
 the set of namespace declarations in scope for the expression.
 <p>At this time the exact implementation of this environment is application 
 dependent.  Probably a proper interface will be created fairly soon.</p>
 @param environment The environment object.
 */
- (void)setEnvironmentWithId:(id)environment;

/*!
 @brief Set if this is an iterator at the upper level of
 the XPath.
 @param b true if this location path is at the top level of the
 expression.
  advanced
 */
- (void)setIsTopLevelWithBoolean:(jboolean)b;

/*!
 @brief Sets the node at the specified index of this vector to be the
 specified node.
 The previous component at that position is discarded.
 <p>The index must be a value greater than or equal to 0 and less
 than the current size of the vector.  
 The iterator must be in cached mode.</p>
 <p>Meant to be used for sorted iterators.</p>
 @param node Node to set
 @param index Index of where to set the node
 */
- (void)setItemWithInt:(jint)node
               withInt:(jint)index;

/*!
 @brief Initialize the context values for this expression
 after it is cloned.
 @param context The XPath runtime context for this
 transformation.
 */
- (void)setRootWithInt:(jint)context
                withId:(id)environment;

/*!
 @brief If setShouldCacheNodes(true) is called, then nodes will
 be cached.
 They are not cached by default.
 @param b True if this iterator should cache nodes.
 */
- (void)setShouldCacheNodesWithBoolean:(jboolean)b;

/*!
 @brief Get the length of the cached nodes.
 <p>Note: for the moment at least, this only returns
 the size of the nodes that have been fetched to date,
 it doesn't attempt to run to the end to make sure we
 have found everything.  This should be reviewed.</p>
 @return The size of the current cache list.
 */
- (jint)size;

#pragma mark Protected

/*!
 @brief Create a LocPathIterator object.
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
 @brief Bottleneck the return of a next node, to make returns
 easier from nextNode().
 @param nextNode The next node found, may be null.
 @return The same node that was passed as an argument.
 */
- (jint)returnNextNodeWithInt:(jint)nextNode;

/*!
 @brief Set the next position index of this iterator.
 @param next A value greater than or equal to zero that indicates the next
 node position to fetch.
 */
- (void)setNextPositionWithInt:(jint)next;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXpathAxesLocPathIterator)

J2OBJC_FIELD_SETTER(OrgApacheXpathAxesLocPathIterator, m_clones_, OrgApacheXpathAxesIteratorPool *)
J2OBJC_FIELD_SETTER(OrgApacheXpathAxesLocPathIterator, m_cdtm_, id<OrgApacheXmlDtmDTM>)
J2OBJC_FIELD_SETTER(OrgApacheXpathAxesLocPathIterator, m_execContext_, OrgApacheXpathXPathContext *)

inline jlong OrgApacheXpathAxesLocPathIterator_get_serialVersionUID();
#define OrgApacheXpathAxesLocPathIterator_serialVersionUID -4602476357268405754LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXpathAxesLocPathIterator, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXpathAxesLocPathIterator_init(OrgApacheXpathAxesLocPathIterator *self);

FOUNDATION_EXPORT void OrgApacheXpathAxesLocPathIterator_initWithOrgApacheXmlUtilsPrefixResolver_(OrgApacheXpathAxesLocPathIterator *self, id<OrgApacheXmlUtilsPrefixResolver> nscontext);

FOUNDATION_EXPORT void OrgApacheXpathAxesLocPathIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_(OrgApacheXpathAxesLocPathIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis);

FOUNDATION_EXPORT void OrgApacheXpathAxesLocPathIterator_initWithOrgApacheXpathCompilerCompiler_withInt_withInt_withBoolean_(OrgApacheXpathAxesLocPathIterator *self, OrgApacheXpathCompilerCompiler *compiler, jint opPos, jint analysis, jboolean shouldLoadWalkers);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathAxesLocPathIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathAxesLocPathIterator")
