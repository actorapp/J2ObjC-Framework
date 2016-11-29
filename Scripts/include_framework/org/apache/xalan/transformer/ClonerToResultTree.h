//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/transformer/ClonerToResultTree.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanTransformerClonerToResultTree")
#ifdef RESTRICT_OrgApacheXalanTransformerClonerToResultTree
#define INCLUDE_ALL_OrgApacheXalanTransformerClonerToResultTree 0
#else
#define INCLUDE_ALL_OrgApacheXalanTransformerClonerToResultTree 1
#endif
#undef RESTRICT_OrgApacheXalanTransformerClonerToResultTree

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanTransformerClonerToResultTree_) && (INCLUDE_ALL_OrgApacheXalanTransformerClonerToResultTree || defined(INCLUDE_OrgApacheXalanTransformerClonerToResultTree))
#define OrgApacheXalanTransformerClonerToResultTree_

@protocol OrgApacheXmlDtmDTM;
@protocol OrgApacheXmlSerializerSerializationHandler;

/*!
 @brief Class used to clone a node, possibly including its children to 
 a result tree.
  internal
 */
@interface OrgApacheXalanTransformerClonerToResultTree : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Clone an element with or without children.
 TODO: Fix or figure out node clone failure!
 the error condition is severe enough to halt processing.
 @param node The node to clone
 @param shouldCloneAttributes Flag indicating whether to 
 clone children attributes
 @throws TransformerException
 */
+ (void)cloneToResultTreeWithInt:(jint)node
                         withInt:(jint)nodeType
          withOrgApacheXmlDtmDTM:(id<OrgApacheXmlDtmDTM>)dtm
withOrgApacheXmlSerializerSerializationHandler:(id<OrgApacheXmlSerializerSerializationHandler>)rth
                     withBoolean:(jboolean)shouldCloneAttributes;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanTransformerClonerToResultTree)

FOUNDATION_EXPORT void OrgApacheXalanTransformerClonerToResultTree_cloneToResultTreeWithInt_withInt_withOrgApacheXmlDtmDTM_withOrgApacheXmlSerializerSerializationHandler_withBoolean_(jint node, jint nodeType, id<OrgApacheXmlDtmDTM> dtm, id<OrgApacheXmlSerializerSerializationHandler> rth, jboolean shouldCloneAttributes);

FOUNDATION_EXPORT void OrgApacheXalanTransformerClonerToResultTree_init(OrgApacheXalanTransformerClonerToResultTree *self);

FOUNDATION_EXPORT OrgApacheXalanTransformerClonerToResultTree *new_OrgApacheXalanTransformerClonerToResultTree_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanTransformerClonerToResultTree *create_OrgApacheXalanTransformerClonerToResultTree_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanTransformerClonerToResultTree)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanTransformerClonerToResultTree")
