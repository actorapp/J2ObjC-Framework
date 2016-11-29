//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xalan/extensions/ExtensionNamespaceSupport.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespaceSupport")
#ifdef RESTRICT_OrgApacheXalanExtensionsExtensionNamespaceSupport
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespaceSupport 0
#else
#define INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespaceSupport 1
#endif
#undef RESTRICT_OrgApacheXalanExtensionsExtensionNamespaceSupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXalanExtensionsExtensionNamespaceSupport_) && (INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespaceSupport || defined(INCLUDE_OrgApacheXalanExtensionsExtensionNamespaceSupport))
#define OrgApacheXalanExtensionsExtensionNamespaceSupport_

@class IOSObjectArray;
@class OrgApacheXalanExtensionsExtensionHandler;

/*!
 @brief During styleseet composition, an ExtensionNamespaceSupport object is created for each extension 
 namespace the stylesheet uses.
 At the beginning of a transformation, TransformerImpl generates
 an ExtensionHandler for each of these objects and adds an entry to the ExtensionsTable hashtable.
 */
@interface OrgApacheXalanExtensionsExtensionNamespaceSupport : NSObject {
 @public
  NSString *m_namespace_;
  NSString *m_handlerClass_;
  IOSObjectArray *m_sig_;
  IOSObjectArray *m_args_;
}

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)namespace_
                    withNSString:(NSString *)handlerClass
               withNSObjectArray:(IOSObjectArray *)constructorArgs;

- (NSString *)getNamespace;

/*!
 @brief Launch the ExtensionHandler that this ExtensionNamespaceSupport object defines.
 */
- (OrgApacheXalanExtensionsExtensionHandler *)launch;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXalanExtensionsExtensionNamespaceSupport)

J2OBJC_FIELD_SETTER(OrgApacheXalanExtensionsExtensionNamespaceSupport, m_namespace_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanExtensionsExtensionNamespaceSupport, m_handlerClass_, NSString *)
J2OBJC_FIELD_SETTER(OrgApacheXalanExtensionsExtensionNamespaceSupport, m_sig_, IOSObjectArray *)
J2OBJC_FIELD_SETTER(OrgApacheXalanExtensionsExtensionNamespaceSupport, m_args_, IOSObjectArray *)

FOUNDATION_EXPORT void OrgApacheXalanExtensionsExtensionNamespaceSupport_initWithNSString_withNSString_withNSObjectArray_(OrgApacheXalanExtensionsExtensionNamespaceSupport *self, NSString *namespace_, NSString *handlerClass, IOSObjectArray *constructorArgs);

FOUNDATION_EXPORT OrgApacheXalanExtensionsExtensionNamespaceSupport *new_OrgApacheXalanExtensionsExtensionNamespaceSupport_initWithNSString_withNSString_withNSObjectArray_(NSString *namespace_, NSString *handlerClass, IOSObjectArray *constructorArgs) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXalanExtensionsExtensionNamespaceSupport *create_OrgApacheXalanExtensionsExtensionNamespaceSupport_initWithNSString_withNSString_withNSObjectArray_(NSString *namespace_, NSString *handlerClass, IOSObjectArray *constructorArgs);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXalanExtensionsExtensionNamespaceSupport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXalanExtensionsExtensionNamespaceSupport")
