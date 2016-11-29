//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/DTMFilter.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMFilter")
#ifdef RESTRICT_OrgApacheXmlDtmDTMFilter
#define INCLUDE_ALL_OrgApacheXmlDtmDTMFilter 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmDTMFilter 1
#endif
#undef RESTRICT_OrgApacheXmlDtmDTMFilter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmDTMFilter_) && (INCLUDE_ALL_OrgApacheXmlDtmDTMFilter || defined(INCLUDE_OrgApacheXmlDtmDTMFilter))
#define OrgApacheXmlDtmDTMFilter_

/*!
 @brief Simple filter for doing node tests.
 Note the semantics of this are
 somewhat different that the DOM's NodeFilter.
 */
@protocol OrgApacheXmlDtmDTMFilter < JavaObject >

/*!
 @brief Test whether a specified node is visible in the logical view of a
 <code>DTMIterator</code>.
 Normally, this function
 will be called by the implementation of <code>DTMIterator</code>; 
 it is not normally called directly from
 user code.
 @param nodeHandle int Handle of the node.
 @param whatToShow one of SHOW_XXX values.
 @return one of FILTER_ACCEPT, FILTER_REJECT, or FILTER_SKIP.
 */
- (jshort)acceptNodeWithInt:(jint)nodeHandle
                    withInt:(jint)whatToShow;

/*!
 @brief Test whether a specified node is visible in the logical view of a
 <code>DTMIterator</code>.
 Normally, this function
 will be called by the implementation of <code>DTMIterator</code>; 
 it is not normally called directly from
 user code.
 <p>
 TODO: Should this be setNameMatch(expandedName) followed by accept()?
 Or will we really be testing a different name at every invocation?
 <p>%REVIEW% Under what circumstances will this be used? The cases
 I've considered are just as easy and just about as efficient if
 the name test is performed in the DTMIterator... -- Joe</p>
 <p>%REVIEW% Should that 0xFFFF have a mnemonic assigned to it?
 Also: This representation is assuming the expanded name is indeed
 split into high/low 16-bit halfwords. If we ever change the
 balance between namespace and localname bits (eg because we
 decide there are many more localnames than namespaces, which is
 fairly likely), this is going to break. It might be safer to
 encapsulate the details with a makeExpandedName method and make
 that responsible for setting up the wildcard version as well.</p>
 @param nodeHandle int Handle of the node.
 @param whatToShow one of SHOW_XXX values.
 @param expandedName a value defining the exanded name as defined in 
 the DTM interface.  Wild cards will be defined 
 by 0xFFFF in the namespace and/or localname
 portion of the expandedName.
 @return one of FILTER_ACCEPT, FILTER_REJECT, or FILTER_SKIP.
 */
- (jshort)acceptNodeWithInt:(jint)nodeHandle
                    withInt:(jint)whatToShow
                    withInt:(jint)expandedName;

@end

@interface OrgApacheXmlDtmDTMFilter : NSObject

+ (jint)SHOW_ALL;

+ (jint)SHOW_ELEMENT;

+ (jint)SHOW_ATTRIBUTE;

+ (jint)SHOW_TEXT;

+ (jint)SHOW_CDATA_SECTION;

+ (jint)SHOW_ENTITY_REFERENCE;

+ (jint)SHOW_ENTITY;

+ (jint)SHOW_PROCESSING_INSTRUCTION;

+ (jint)SHOW_COMMENT;

+ (jint)SHOW_DOCUMENT;

+ (jint)SHOW_DOCUMENT_TYPE;

+ (jint)SHOW_DOCUMENT_FRAGMENT;

+ (jint)SHOW_NOTATION;

+ (jint)SHOW_NAMESPACE;

+ (jint)SHOW_BYFUNCTION;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmDTMFilter)

/*!
 @brief Show all <code>Nodes</code>.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ALL();
#define OrgApacheXmlDtmDTMFilter_SHOW_ALL -1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ALL, jint)

/*!
 @brief Show <code>Element</code> nodes.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ELEMENT();
#define OrgApacheXmlDtmDTMFilter_SHOW_ELEMENT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ELEMENT, jint)

/*!
 @brief Show <code>Attr</code> nodes.
 This is meaningful only when creating an
 iterator or tree-walker with an attribute node as its
 <code>root</code>; in this case, it means that the attribute node
 will appear in the first position of the iteration or traversal.
 Since attributes are never children of other nodes, they do not
 appear when traversing over the main document tree.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ATTRIBUTE();
#define OrgApacheXmlDtmDTMFilter_SHOW_ATTRIBUTE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ATTRIBUTE, jint)

/*!
 @brief Show <code>Text</code> nodes.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_TEXT();
#define OrgApacheXmlDtmDTMFilter_SHOW_TEXT 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_TEXT, jint)

/*!
 @brief Show <code>CDATASection</code> nodes.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_CDATA_SECTION();
#define OrgApacheXmlDtmDTMFilter_SHOW_CDATA_SECTION 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_CDATA_SECTION, jint)

/*!
 @brief Show <code>EntityReference</code> nodes.
 Note that if Entity References
 have been fully expanded while the tree was being constructed, these
 nodes will not appear and this mask has no effect.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ENTITY_REFERENCE();
#define OrgApacheXmlDtmDTMFilter_SHOW_ENTITY_REFERENCE 16
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ENTITY_REFERENCE, jint)

/*!
 @brief Show <code>Entity</code> nodes.
 This is meaningful only when creating
 an iterator or tree-walker with an<code> Entity</code> node as its
 <code>root</code>; in this case, it means that the <code>Entity</code>
 node will appear in the first position of the traversal. Since
 entities are not part of the document tree, they do not appear when
 traversing over the main document tree.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_ENTITY();
#define OrgApacheXmlDtmDTMFilter_SHOW_ENTITY 32
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_ENTITY, jint)

/*!
 @brief Show <code>ProcessingInstruction</code> nodes.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_PROCESSING_INSTRUCTION();
#define OrgApacheXmlDtmDTMFilter_SHOW_PROCESSING_INSTRUCTION 64
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_PROCESSING_INSTRUCTION, jint)

/*!
 @brief Show <code>Comment</code> nodes.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_COMMENT();
#define OrgApacheXmlDtmDTMFilter_SHOW_COMMENT 128
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_COMMENT, jint)

/*!
 @brief Show <code>Document</code> nodes.
 (Of course, as with Attributes
 and such, this is meaningful only when the iteration root is the
 Document itself, since Document has no parent.)
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_DOCUMENT();
#define OrgApacheXmlDtmDTMFilter_SHOW_DOCUMENT 256
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_DOCUMENT, jint)

/*!
 @brief Show <code>DocumentType</code> nodes.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_DOCUMENT_TYPE();
#define OrgApacheXmlDtmDTMFilter_SHOW_DOCUMENT_TYPE 512
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_DOCUMENT_TYPE, jint)

/*!
 @brief Show <code>DocumentFragment</code> nodes.
 (Of course, as with
 Attributes and such, this is meaningful only when the iteration
 root is the Document itself, since DocumentFragment has no parent.)
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_DOCUMENT_FRAGMENT();
#define OrgApacheXmlDtmDTMFilter_SHOW_DOCUMENT_FRAGMENT 1024
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_DOCUMENT_FRAGMENT, jint)

/*!
 @brief Show <code>Notation</code> nodes.
 This is meaningful only when creating
 an iterator or tree-walker with a <code>Notation</code> node as its
 <code>root</code>; in this case, it means that the
 <code>Notation</code> node will appear in the first position of the
 traversal. Since notations are not part of the document tree, they do
 not appear when traversing over the main document tree.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_NOTATION();
#define OrgApacheXmlDtmDTMFilter_SHOW_NOTATION 2048
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_NOTATION, jint)

/*!
 @brief This bit instructs the iterator to show namespace nodes, which
 are modeled by DTM but not by the DOM.
 Make sure this does not
 conflict with <code>org.w3c.dom.traversal.NodeFilter</code>.
 <p>
 %REVIEW% Might be safer to start from higher bits and work down,
 to leave room for the DOM to expand its set of constants... Or,
 possibly, to create a DTM-specific field for these additional bits.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_NAMESPACE();
#define OrgApacheXmlDtmDTMFilter_SHOW_NAMESPACE 4096
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_NAMESPACE, jint)

/*!
 @brief Special bit for filters implementing match patterns starting with
 a function.
 Make sure this does not conflict with
 <code>org.w3c.dom.traversal.NodeFilter</code>.
 <p>
 %REVIEW% Might be safer to start from higher bits and work down,
 to leave room for the DOM to expand its set of constants... Or,
 possibly, to create a DTM-specific field for these additional bits.
 */
inline jint OrgApacheXmlDtmDTMFilter_get_SHOW_BYFUNCTION();
#define OrgApacheXmlDtmDTMFilter_SHOW_BYFUNCTION 65536
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmDTMFilter, SHOW_BYFUNCTION, jint)

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmDTMFilter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmDTMFilter")
