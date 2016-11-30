//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/functions/SecuritySupport.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport")
#ifdef RESTRICT_OrgApacheXpathFunctionsSecuritySupport
#define INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport 0
#else
#define INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport 1
#endif
#undef RESTRICT_OrgApacheXpathFunctionsSecuritySupport

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathFunctionsSecuritySupport_) && (INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport || defined(INCLUDE_OrgApacheXpathFunctionsSecuritySupport))
#define OrgApacheXpathFunctionsSecuritySupport_

@class JavaIoFile;
@class JavaIoFileInputStream;
@class JavaIoInputStream;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each Xalan-Java subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the Xalan-Java
 API.
 Base class with security related methods that work on JDK 1.1.
 */
@interface OrgApacheXpathFunctionsSecuritySupport : NSObject

#pragma mark Package-Private

- (instancetype)init;

- (JavaLangClassLoader *)getContextClassLoader;

- (jboolean)getFileExistsWithJavaIoFile:(JavaIoFile *)f;

- (JavaIoFileInputStream *)getFileInputStreamWithJavaIoFile:(JavaIoFile *)file;

/*!
 @brief Return an appropriate instance of this class, depending on whether
 we're on a JDK 1.1 or J2SE 1.2 (or later) system.
 */
+ (OrgApacheXpathFunctionsSecuritySupport *)getInstance;

- (jlong)getLastModifiedWithJavaIoFile:(JavaIoFile *)f;

- (JavaLangClassLoader *)getParentClassLoaderWithJavaLangClassLoader:(JavaLangClassLoader *)cl;

- (JavaIoInputStream *)getResourceAsStreamWithJavaLangClassLoader:(JavaLangClassLoader *)cl
                                                     withNSString:(NSString *)name;

- (JavaLangClassLoader *)getSystemClassLoader;

- (NSString *)getSystemPropertyWithNSString:(NSString *)propName;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathFunctionsSecuritySupport)

FOUNDATION_EXPORT OrgApacheXpathFunctionsSecuritySupport *OrgApacheXpathFunctionsSecuritySupport_getInstance();

FOUNDATION_EXPORT void OrgApacheXpathFunctionsSecuritySupport_init(OrgApacheXpathFunctionsSecuritySupport *self);

FOUNDATION_EXPORT OrgApacheXpathFunctionsSecuritySupport *new_OrgApacheXpathFunctionsSecuritySupport_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathFunctionsSecuritySupport *create_OrgApacheXpathFunctionsSecuritySupport_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathFunctionsSecuritySupport)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathFunctionsSecuritySupport")