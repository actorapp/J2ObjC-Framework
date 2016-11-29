//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AccessController.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityAccessController")
#ifdef RESTRICT_JavaSecurityAccessController
#define INCLUDE_ALL_JavaSecurityAccessController 0
#else
#define INCLUDE_ALL_JavaSecurityAccessController 1
#endif
#undef RESTRICT_JavaSecurityAccessController

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityAccessController_) && (INCLUDE_ALL_JavaSecurityAccessController || defined(INCLUDE_JavaSecurityAccessController))
#define JavaSecurityAccessController_

@class JavaSecurityAccessControlContext;
@class JavaSecurityPermission;
@protocol JavaSecurityPrivilegedAction;
@protocol JavaSecurityPrivilegedExceptionAction;

/*!
 @brief Legacy security code; do not use.
 */
@interface JavaSecurityAccessController : NSObject

#pragma mark Public

+ (void)checkPermissionWithJavaSecurityPermission:(JavaSecurityPermission *)permission;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action
              withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action
                       withJavaSecurityAccessControlContext:(JavaSecurityAccessControlContext *)context;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction:(id<JavaSecurityPrivilegedAction>)action;

/*!
 @brief Calls <code>action.run()</code>.
 */
+ (id)doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction:(id<JavaSecurityPrivilegedExceptionAction>)action;

+ (JavaSecurityAccessControlContext *)getContext;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAccessController)

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedAction_(id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedAction_withJavaSecurityAccessControlContext_(id<JavaSecurityPrivilegedAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedExceptionAction_(id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithJavaSecurityPrivilegedExceptionAction_withJavaSecurityAccessControlContext_(id<JavaSecurityPrivilegedExceptionAction> action, JavaSecurityAccessControlContext *context);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithCombinerWithJavaSecurityPrivilegedAction_(id<JavaSecurityPrivilegedAction> action);

FOUNDATION_EXPORT id JavaSecurityAccessController_doPrivilegedWithCombinerWithJavaSecurityPrivilegedExceptionAction_(id<JavaSecurityPrivilegedExceptionAction> action);

FOUNDATION_EXPORT void JavaSecurityAccessController_checkPermissionWithJavaSecurityPermission_(JavaSecurityPermission *permission);

FOUNDATION_EXPORT JavaSecurityAccessControlContext *JavaSecurityAccessController_getContext();

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAccessController)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityAccessController")
