//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/RuntimePermission.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangRuntimePermission")
#ifdef RESTRICT_JavaLangRuntimePermission
#define INCLUDE_ALL_JavaLangRuntimePermission 0
#else
#define INCLUDE_ALL_JavaLangRuntimePermission 1
#endif
#undef RESTRICT_JavaLangRuntimePermission

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangRuntimePermission_) && (INCLUDE_ALL_JavaLangRuntimePermission || defined(INCLUDE_JavaLangRuntimePermission))
#define JavaLangRuntimePermission_

#define RESTRICT_JavaSecurityBasicPermission 1
#define INCLUDE_JavaSecurityBasicPermission 1
#include "java/security/BasicPermission.h"

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaLangRuntimePermission : JavaSecurityBasicPermission

#pragma mark Public

- (instancetype)initWithNSString:(NSString *)name;

- (instancetype)initWithNSString:(NSString *)name
                    withNSString:(NSString *)actions;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangRuntimePermission)

FOUNDATION_EXPORT void JavaLangRuntimePermission_initWithNSString_(JavaLangRuntimePermission *self, NSString *name);

FOUNDATION_EXPORT JavaLangRuntimePermission *new_JavaLangRuntimePermission_initWithNSString_(NSString *name) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimePermission *create_JavaLangRuntimePermission_initWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaLangRuntimePermission_initWithNSString_withNSString_(JavaLangRuntimePermission *self, NSString *name, NSString *actions);

FOUNDATION_EXPORT JavaLangRuntimePermission *new_JavaLangRuntimePermission_initWithNSString_withNSString_(NSString *name, NSString *actions) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangRuntimePermission *create_JavaLangRuntimePermission_initWithNSString_withNSString_(NSString *name, NSString *actions);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangRuntimePermission)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangRuntimePermission")
