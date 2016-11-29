//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: src/main/java/org/mockito/internal/creation/ios/IosMockMaker.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalCreationIosIosMockMaker")
#ifdef RESTRICT_OrgMockitoInternalCreationIosIosMockMaker
#define INCLUDE_ALL_OrgMockitoInternalCreationIosIosMockMaker 0
#else
#define INCLUDE_ALL_OrgMockitoInternalCreationIosIosMockMaker 1
#endif
#undef RESTRICT_OrgMockitoInternalCreationIosIosMockMaker

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalCreationIosIosMockMaker_) && (INCLUDE_ALL_OrgMockitoInternalCreationIosIosMockMaker || defined(INCLUDE_OrgMockitoInternalCreationIosIosMockMaker))
#define OrgMockitoInternalCreationIosIosMockMaker_

#define RESTRICT_OrgMockitoPluginsMockMaker 1
#define INCLUDE_OrgMockitoPluginsMockMaker 1
#include "../../../../../org/mockito/plugins/MockMaker.h"

@class IOSClass;
@class IOSObjectArray;
@protocol OrgMockitoInvocationMockHandler;
@protocol OrgMockitoMockMockCreationSettings;

/*!
 @brief MockMaker implementation for iOS.
 Unlike the JRE and Android versions,
 this class creates mocks for classes using the Objective-C runtime.
 @author Tom Ball
 */
@interface OrgMockitoInternalCreationIosIosMockMaker : NSObject < OrgMockitoPluginsMockMaker >

#pragma mark Public

- (instancetype)init;

- (id)createMockWithOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings
                   withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)handler;

- (id<OrgMockitoInvocationMockHandler>)getHandlerWithId:(id)mock;

- (void)resetMockWithId:(id)mock
withOrgMockitoInvocationMockHandler:(id<OrgMockitoInvocationMockHandler>)newHandler
withOrgMockitoMockMockCreationSettings:(id<OrgMockitoMockMockCreationSettings>)settings;

#pragma mark Package-Private

- (IOSClass *)getProxyClassWithIOSClass:(IOSClass *)typeToMock
                      withIOSClassArray:(IOSObjectArray *)interfaces;

@end

J2OBJC_STATIC_INIT(OrgMockitoInternalCreationIosIosMockMaker)

FOUNDATION_EXPORT void OrgMockitoInternalCreationIosIosMockMaker_init(OrgMockitoInternalCreationIosIosMockMaker *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationIosIosMockMaker *new_OrgMockitoInternalCreationIosIosMockMaker_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationIosIosMockMaker *create_OrgMockitoInternalCreationIosIosMockMaker_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationIosIosMockMaker)

#endif

#if !defined (OrgMockitoInternalCreationIosIosMockMaker_ClassProxy_) && (INCLUDE_ALL_OrgMockitoInternalCreationIosIosMockMaker || defined(INCLUDE_OrgMockitoInternalCreationIosIosMockMaker_ClassProxy))
#define OrgMockitoInternalCreationIosIosMockMaker_ClassProxy_

@protocol JavaLangReflectInvocationHandler;

@interface OrgMockitoInternalCreationIosIosMockMaker_ClassProxy : NSObject {
 @public
  id<JavaLangReflectInvocationHandler> $__handler_;
}

#pragma mark Package-Private

- (instancetype)init;

- (id<JavaLangReflectInvocationHandler>)getHandler;

- (void)setHandlerWithJavaLangReflectInvocationHandler:(id<JavaLangReflectInvocationHandler>)handler;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy)

J2OBJC_FIELD_SETTER(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy, $__handler_, id<JavaLangReflectInvocationHandler>)

FOUNDATION_EXPORT void OrgMockitoInternalCreationIosIosMockMaker_ClassProxy_init(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy *self);

FOUNDATION_EXPORT OrgMockitoInternalCreationIosIosMockMaker_ClassProxy *new_OrgMockitoInternalCreationIosIosMockMaker_ClassProxy_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalCreationIosIosMockMaker_ClassProxy *create_OrgMockitoInternalCreationIosIosMockMaker_ClassProxy_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalCreationIosIosMockMaker_ClassProxy)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalCreationIosIosMockMaker")
