//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/PermissionCollection.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityPermissionCollection")
#ifdef RESTRICT_JavaSecurityPermissionCollection
#define INCLUDE_ALL_JavaSecurityPermissionCollection 0
#else
#define INCLUDE_ALL_JavaSecurityPermissionCollection 1
#endif
#undef RESTRICT_JavaSecurityPermissionCollection

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityPermissionCollection_) && (INCLUDE_ALL_JavaSecurityPermissionCollection || defined(INCLUDE_JavaSecurityPermissionCollection))
#define JavaSecurityPermissionCollection_

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "java/io/Serializable.h"

@class JavaSecurityPermission;
@protocol JavaUtilEnumeration;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityPermissionCollection : NSObject < JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (void)addWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (id<JavaUtilEnumeration>)elements;

- (jboolean)impliesWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

- (jboolean)isReadOnly;

- (void)setReadOnly;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityPermissionCollection)

FOUNDATION_EXPORT void JavaSecurityPermissionCollection_init(JavaSecurityPermissionCollection *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityPermissionCollection)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityPermissionCollection")
