//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/dtm/ref/SecuritySupport12.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport12")
#ifdef RESTRICT_OrgApacheXmlDtmRefSecuritySupport12
#define INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport12 0
#else
#define INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport12 1
#endif
#undef RESTRICT_OrgApacheXmlDtmRefSecuritySupport12

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlDtmRefSecuritySupport12_) && (INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport12 || defined(INCLUDE_OrgApacheXmlDtmRefSecuritySupport12))
#define OrgApacheXmlDtmRefSecuritySupport12_

#define RESTRICT_OrgApacheXmlDtmRefSecuritySupport 1
#define INCLUDE_OrgApacheXmlDtmRefSecuritySupport 1
#include "../../../../../org/apache/xml/dtm/ref/SecuritySupport.h"

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each Xalan-Java subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the Xalan-Java
 API.
 Security related methods that only work on J2SE 1.2 and newer.
 */
@interface OrgApacheXmlDtmRefSecuritySupport12 : OrgApacheXmlDtmRefSecuritySupport

#pragma mark Package-Private

- (instancetype)init;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlDtmRefSecuritySupport12)

FOUNDATION_EXPORT void OrgApacheXmlDtmRefSecuritySupport12_init(OrgApacheXmlDtmRefSecuritySupport12 *self);

FOUNDATION_EXPORT OrgApacheXmlDtmRefSecuritySupport12 *new_OrgApacheXmlDtmRefSecuritySupport12_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlDtmRefSecuritySupport12 *create_OrgApacheXmlDtmRefSecuritySupport12_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlDtmRefSecuritySupport12)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlDtmRefSecuritySupport12")
