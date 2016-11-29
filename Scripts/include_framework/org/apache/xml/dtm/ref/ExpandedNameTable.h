//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/ExpandedNameTable.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable")
#ifdef RESTRICT_OrgApacheXmlDtmRefExpandedNameTable
#define INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefExpandedNameTable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefExpandedNameTable_) && (INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable || defined(INCLUDE_OrgApacheXmlDtmRefExpandedNameTable))
#define OrgApacheXmlDtmRefExpandedNameTable_

@class IOSObjectArray;
@class OrgApacheXmlDtmRefExtendedType;

/*!
 @brief This is a default implementation of a table that manages mappings from
 expanded names to expandedNameIDs.
 %OPT% The performance of the getExpandedTypeID() method is very important 
 to DTM building. To get the best performance out of this class, we implement
 a simple hash algorithm directly into this class, instead of using the
 inefficient java.util.Hashtable. The code for the get and put operations
 are combined in getExpandedTypeID() method to share the same hash calculation
 code. We only need to implement the rehash() interface which is used to
 expand the hash table.
 */
@interface OrgApacheXmlDtmRefExpandedNameTable : NSObject {
 @public
  /*!
   @brief Workspace for lookup.
   NOT THREAD SAFE!
   */
  OrgApacheXmlDtmRefExtendedType *hashET_;
}

+ (jint)ELEMENT;

+ (jint)ATTRIBUTE;

+ (jint)TEXT;

+ (jint)CDATA_SECTION;

+ (jint)ENTITY_REFERENCE;

+ (jint)ENTITY;

+ (jint)PROCESSING_INSTRUCTION;

+ (jint)COMMENT;

+ (jint)DOCUMENT;

+ (jint)DOCUMENT_TYPE;

+ (jint)DOCUMENT_FRAGMENT;

+ (jint)NOTATION;

+ (jint)NAMESPACE;

#pragma mark Public

/*!
 @brief Create an expanded name table.
 */
- (instancetype)init;

/*!
 @brief Given a type, return an expanded name ID.Any additional nodes that are
 created that have this expanded name will use this ID.
 @return the expanded-name id of the node.
 */
- (jint)getExpandedTypeIDWithInt:(jint)type;

/*!
 @brief Given an expanded name represented by namespace, local name and node type,
 return an ID.
 If the expanded-name does not exist in the internal tables,
 the entry will be created, and the ID will be returned.  Any additional 
 nodes that are created that have this expanded name will use this ID.
 @param namespace_ The namespace
 @param localName The local name
 @param type The node type
 @return the expanded-name id of the node.
 */
- (jint)getExpandedTypeIDWithNSString:(NSString *)namespace_
                         withNSString:(NSString *)localName
                              withInt:(jint)type;

/*!
 @brief Given an expanded name represented by namespace, local name and node type,
 return an ID.
 If the expanded-name does not exist in the internal tables,
 the entry will be created, and the ID will be returned.  Any additional 
 nodes that are created that have this expanded name will use this ID.
 <p>
 If searchOnly is true, we will return -1 if the name is not found in the 
 table, otherwise the name is added to the table and the expanded name id
 of the new entry is returned.
 @param namespace_ The namespace
 @param localName The local name
 @param type The node type
 @param searchOnly If it is true, we will only search for the expanded name.
 -1 is return is the name is not found.
 @return the expanded-name id of the node.
 */
- (jint)getExpandedTypeIDWithNSString:(NSString *)namespace_
                         withNSString:(NSString *)localName
                              withInt:(jint)type
                          withBoolean:(jboolean)searchOnly;

/*!
 @brief Return the array of extended types
 @return The array of extended types
 */
- (IOSObjectArray *)getExtendedTypes;

/*!
 @brief Given an expanded-name ID, return the local name part.
 @param ExpandedNameID an ID that represents an expanded-name.
 @return String Local name of this node, or null if the node has no name.
 */
- (NSString *)getLocalNameWithInt:(jint)ExpandedNameID;

/*!
 @brief Given an expanded-name ID, return the local name ID.
 @param ExpandedNameID an ID that represents an expanded-name.
 @return The id of this local name.
 */
- (jint)getLocalNameIDWithInt:(jint)ExpandedNameID;

/*!
 @brief Given an expanded-name ID, return the namespace URI part.
 @param ExpandedNameID an ID that represents an expanded-name.
 @return String URI value of this node's namespace, or null if no
 namespace was resolved.
 */
- (NSString *)getNamespaceWithInt:(jint)ExpandedNameID;

/*!
 @brief Given an expanded-name ID, return the namespace URI ID.
 @param ExpandedNameID an ID that represents an expanded-name.
 @return The id of this namespace.
 */
- (jint)getNamespaceIDWithInt:(jint)ExpandedNameID;

/*!
 @brief Return the size of the ExpandedNameTable
 @return The size of the ExpandedNameTable
 */
- (jint)getSize;

/*!
 @brief Given an expanded-name ID, return the local name ID.
 @param ExpandedNameID an ID that represents an expanded-name.
 @return The id of this local name.
 */
- (jshort)getTypeWithInt:(jint)ExpandedNameID;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlDtmRefExpandedNameTable)

J2OBJC_FIELD_SETTER(OrgApacheXmlDtmRefExpandedNameTable, hashET_, OrgApacheXmlDtmRefExtendedType *)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ELEMENT();
#define OrgApacheXmlDtmRefExpandedNameTable_ELEMENT 1
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ELEMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ATTRIBUTE();
#define OrgApacheXmlDtmRefExpandedNameTable_ATTRIBUTE 2
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ATTRIBUTE, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_TEXT();
#define OrgApacheXmlDtmRefExpandedNameTable_TEXT 3
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, TEXT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_CDATA_SECTION();
#define OrgApacheXmlDtmRefExpandedNameTable_CDATA_SECTION 4
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, CDATA_SECTION, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ENTITY_REFERENCE();
#define OrgApacheXmlDtmRefExpandedNameTable_ENTITY_REFERENCE 5
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ENTITY_REFERENCE, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_ENTITY();
#define OrgApacheXmlDtmRefExpandedNameTable_ENTITY 6
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, ENTITY, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_PROCESSING_INSTRUCTION();
#define OrgApacheXmlDtmRefExpandedNameTable_PROCESSING_INSTRUCTION 7
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, PROCESSING_INSTRUCTION, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_COMMENT();
#define OrgApacheXmlDtmRefExpandedNameTable_COMMENT 8
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, COMMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_DOCUMENT();
#define OrgApacheXmlDtmRefExpandedNameTable_DOCUMENT 9
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, DOCUMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_DOCUMENT_TYPE();
#define OrgApacheXmlDtmRefExpandedNameTable_DOCUMENT_TYPE 10
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, DOCUMENT_TYPE, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_DOCUMENT_FRAGMENT();
#define OrgApacheXmlDtmRefExpandedNameTable_DOCUMENT_FRAGMENT 11
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, DOCUMENT_FRAGMENT, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_NOTATION();
#define OrgApacheXmlDtmRefExpandedNameTable_NOTATION 12
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, NOTATION, jint)

inline jint OrgApacheXmlDtmRefExpandedNameTable_get_NAMESPACE();
#define OrgApacheXmlDtmRefExpandedNameTable_NAMESPACE 13
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlDtmRefExpandedNameTable, NAMESPACE, jint)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefExpandedNameTable_init(OrgApacheXmlDtmRefExpandedNameTable *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefExpandedNameTable *new_OrgApacheXmlDtmRefExpandedNameTable_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefExpandedNameTable *create_OrgApacheXmlDtmRefExpandedNameTable_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefExpandedNameTable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefExpandedNameTable")
