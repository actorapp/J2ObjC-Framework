//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/lambda/java/java/lang/invoke/MethodHandles.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangInvokeMethodHandles")
#ifdef RESTRICT_JavaLangInvokeMethodHandles
#define INCLUDE_ALL_JavaLangInvokeMethodHandles 0
#else
#define INCLUDE_ALL_JavaLangInvokeMethodHandles 1
#endif
#undef RESTRICT_JavaLangInvokeMethodHandles

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangInvokeMethodHandles_) && (INCLUDE_ALL_JavaLangInvokeMethodHandles || defined(INCLUDE_JavaLangInvokeMethodHandles))
#define JavaLangInvokeMethodHandles_

@class IOSClass;
@class IOSIntArray;
@class IOSObjectArray;
@class JavaLangInvokeMethodHandle;
@class JavaLangInvokeMethodHandles_Lookup;
@class JavaLangInvokeMethodType;
@protocol JavaLangReflectMember;
@protocol JavaUtilList;

@interface JavaLangInvokeMethodHandles : NSObject

#pragma mark Public

- (instancetype)init;

+ (JavaLangInvokeMethodHandle *)arrayElementGetterWithIOSClass:(IOSClass *)arrayClass;

+ (JavaLangInvokeMethodHandle *)arrayElementSetterWithIOSClass:(IOSClass *)arrayClass;

+ (JavaLangInvokeMethodHandle *)catchExceptionWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                                withIOSClass:(IOSClass *)exType
                                              withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)handler;

+ (JavaLangInvokeMethodHandle *)collectArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                                       withInt:(jint)pos
                                                withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)filter;

+ (JavaLangInvokeMethodHandle *)constantWithIOSClass:(IOSClass *)type
                                              withId:(id)value;

+ (JavaLangInvokeMethodHandle *)dropArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                                    withInt:(jint)pos
                                                          withIOSClassArray:(IOSObjectArray *)valueTypes;

+ (JavaLangInvokeMethodHandle *)dropArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                                    withInt:(jint)pos
                                                           withJavaUtilList:(id<JavaUtilList>)valueTypes;

+ (JavaLangInvokeMethodHandle *)exactInvokerWithJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type;

+ (JavaLangInvokeMethodHandle *)explicitCastArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                       withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)newType;

+ (JavaLangInvokeMethodHandle *)filterArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                                      withInt:(jint)pos
                                          withJavaLangInvokeMethodHandleArray:(IOSObjectArray *)filters;

+ (JavaLangInvokeMethodHandle *)filterReturnValueWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                 withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)filter;

+ (JavaLangInvokeMethodHandle *)foldArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                             withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)combiner;

+ (JavaLangInvokeMethodHandle *)guardWithTestWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)test
                                             withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                             withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)fallback;

+ (JavaLangInvokeMethodHandle *)identityWithIOSClass:(IOSClass *)type;

+ (JavaLangInvokeMethodHandle *)insertArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                                      withInt:(jint)pos
                                                            withNSObjectArray:(IOSObjectArray *)values;

+ (JavaLangInvokeMethodHandle *)invokerWithJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type;

+ (JavaLangInvokeMethodHandles_Lookup *)lookup;

+ (JavaLangInvokeMethodHandle *)permuteArgumentsWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target
                                                  withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)newType
                                                                  withIntArray:(IOSIntArray *)reorder;

+ (JavaLangInvokeMethodHandles_Lookup *)publicLookup;

+ (id<JavaLangReflectMember>)reflectAsWithIOSClass:(IOSClass *)expected
                    withJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target;

+ (JavaLangInvokeMethodHandle *)spreadInvokerWithJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type
                                                                  withInt:(jint)leadingArgCount;

+ (JavaLangInvokeMethodHandle *)throwExceptionWithIOSClass:(IOSClass *)returnType
                                              withIOSClass:(IOSClass *)exType;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInvokeMethodHandles)

FOUNDATION_EXPORT JavaLangInvokeMethodHandles_Lookup *JavaLangInvokeMethodHandles_lookup();

FOUNDATION_EXPORT JavaLangInvokeMethodHandles_Lookup *JavaLangInvokeMethodHandles_publicLookup();

FOUNDATION_EXPORT id<JavaLangReflectMember> JavaLangInvokeMethodHandles_reflectAsWithIOSClass_withJavaLangInvokeMethodHandle_(IOSClass *expected, JavaLangInvokeMethodHandle *target);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_arrayElementGetterWithIOSClass_(IOSClass *arrayClass);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_arrayElementSetterWithIOSClass_(IOSClass *arrayClass);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_spreadInvokerWithJavaLangInvokeMethodType_withInt_(JavaLangInvokeMethodType *type, jint leadingArgCount);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_exactInvokerWithJavaLangInvokeMethodType_(JavaLangInvokeMethodType *type);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_invokerWithJavaLangInvokeMethodType_(JavaLangInvokeMethodType *type);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_explicitCastArgumentsWithJavaLangInvokeMethodHandle_withJavaLangInvokeMethodType_(JavaLangInvokeMethodHandle *target, JavaLangInvokeMethodType *newType);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_permuteArgumentsWithJavaLangInvokeMethodHandle_withJavaLangInvokeMethodType_withIntArray_(JavaLangInvokeMethodHandle *target, JavaLangInvokeMethodType *newType, IOSIntArray *reorder);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_constantWithIOSClass_withId_(IOSClass *type, id value);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_identityWithIOSClass_(IOSClass *type);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_insertArgumentsWithJavaLangInvokeMethodHandle_withInt_withNSObjectArray_(JavaLangInvokeMethodHandle *target, jint pos, IOSObjectArray *values);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_dropArgumentsWithJavaLangInvokeMethodHandle_withInt_withJavaUtilList_(JavaLangInvokeMethodHandle *target, jint pos, id<JavaUtilList> valueTypes);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_dropArgumentsWithJavaLangInvokeMethodHandle_withInt_withIOSClassArray_(JavaLangInvokeMethodHandle *target, jint pos, IOSObjectArray *valueTypes);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_filterArgumentsWithJavaLangInvokeMethodHandle_withInt_withJavaLangInvokeMethodHandleArray_(JavaLangInvokeMethodHandle *target, jint pos, IOSObjectArray *filters);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_collectArgumentsWithJavaLangInvokeMethodHandle_withInt_withJavaLangInvokeMethodHandle_(JavaLangInvokeMethodHandle *target, jint pos, JavaLangInvokeMethodHandle *filter);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_filterReturnValueWithJavaLangInvokeMethodHandle_withJavaLangInvokeMethodHandle_(JavaLangInvokeMethodHandle *target, JavaLangInvokeMethodHandle *filter);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_foldArgumentsWithJavaLangInvokeMethodHandle_withJavaLangInvokeMethodHandle_(JavaLangInvokeMethodHandle *target, JavaLangInvokeMethodHandle *combiner);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_guardWithTestWithJavaLangInvokeMethodHandle_withJavaLangInvokeMethodHandle_withJavaLangInvokeMethodHandle_(JavaLangInvokeMethodHandle *test, JavaLangInvokeMethodHandle *target, JavaLangInvokeMethodHandle *fallback);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_catchExceptionWithJavaLangInvokeMethodHandle_withIOSClass_withJavaLangInvokeMethodHandle_(JavaLangInvokeMethodHandle *target, IOSClass *exType, JavaLangInvokeMethodHandle *handler);

FOUNDATION_EXPORT JavaLangInvokeMethodHandle *JavaLangInvokeMethodHandles_throwExceptionWithIOSClass_withIOSClass_(IOSClass *returnType, IOSClass *exType);

FOUNDATION_EXPORT void JavaLangInvokeMethodHandles_init(JavaLangInvokeMethodHandles *self);

FOUNDATION_EXPORT JavaLangInvokeMethodHandles *new_JavaLangInvokeMethodHandles_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInvokeMethodHandles *create_JavaLangInvokeMethodHandles_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInvokeMethodHandles)

#endif

#if !defined (JavaLangInvokeMethodHandles_Lookup_) && (INCLUDE_ALL_JavaLangInvokeMethodHandles || defined(INCLUDE_JavaLangInvokeMethodHandles_Lookup))
#define JavaLangInvokeMethodHandles_Lookup_

@class IOSClass;
@class JavaLangInvokeMethodHandle;
@class JavaLangInvokeMethodType;
@class JavaLangReflectConstructor;
@class JavaLangReflectField;
@class JavaLangReflectMethod;
@protocol JavaLangInvokeMethodHandleInfo;

@interface JavaLangInvokeMethodHandles_Lookup : NSObject

+ (jint)PUBLIC;

+ (jint)PRIVATE;

+ (jint)PROTECTED;

+ (jint)PACKAGE;

#pragma mark Public

- (instancetype)init;

- (JavaLangInvokeMethodHandle *)bindWithId:(id)receiver
                              withNSString:(NSString *)name
              withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type;

- (JavaLangInvokeMethodHandle *)findConstructorWithIOSClass:(IOSClass *)refc
                               withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type;

- (JavaLangInvokeMethodHandle *)findGetterWithIOSClass:(IOSClass *)refc
                                          withNSString:(NSString *)name
                                          withIOSClass:(IOSClass *)type;

- (JavaLangInvokeMethodHandle *)findSetterWithIOSClass:(IOSClass *)refc
                                          withNSString:(NSString *)name
                                          withIOSClass:(IOSClass *)type;

- (JavaLangInvokeMethodHandle *)findSpecialWithIOSClass:(IOSClass *)refc
                                           withNSString:(NSString *)name
                           withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type
                                           withIOSClass:(IOSClass *)specialCaller;

- (JavaLangInvokeMethodHandle *)findStaticWithIOSClass:(IOSClass *)refc
                                          withNSString:(NSString *)name
                          withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type;

- (JavaLangInvokeMethodHandle *)findStaticGetterWithIOSClass:(IOSClass *)refc
                                                withNSString:(NSString *)name
                                                withIOSClass:(IOSClass *)type;

- (JavaLangInvokeMethodHandle *)findStaticSetterWithIOSClass:(IOSClass *)refc
                                                withNSString:(NSString *)name
                                                withIOSClass:(IOSClass *)type;

- (JavaLangInvokeMethodHandle *)findVirtualWithIOSClass:(IOSClass *)refc
                                           withNSString:(NSString *)name
                           withJavaLangInvokeMethodType:(JavaLangInvokeMethodType *)type;

- (JavaLangInvokeMethodHandles_Lookup *)inWithIOSClass:(IOSClass *)requestedLookupClass;

- (IOSClass *)lookupClass;

- (jint)lookupModes;

- (id<JavaLangInvokeMethodHandleInfo>)revealDirectWithJavaLangInvokeMethodHandle:(JavaLangInvokeMethodHandle *)target;

- (JavaLangInvokeMethodHandle *)unreflectWithJavaLangReflectMethod:(JavaLangReflectMethod *)m;

- (JavaLangInvokeMethodHandle *)unreflectConstructorWithJavaLangReflectConstructor:(JavaLangReflectConstructor *)c;

- (JavaLangInvokeMethodHandle *)unreflectGetterWithJavaLangReflectField:(JavaLangReflectField *)f;

- (JavaLangInvokeMethodHandle *)unreflectSetterWithJavaLangReflectField:(JavaLangReflectField *)f;

- (JavaLangInvokeMethodHandle *)unreflectSpecialWithJavaLangReflectMethod:(JavaLangReflectMethod *)m
                                                             withIOSClass:(IOSClass *)specialCaller;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangInvokeMethodHandles_Lookup)

inline jint JavaLangInvokeMethodHandles_Lookup_get_PUBLIC();
#define JavaLangInvokeMethodHandles_Lookup_PUBLIC 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandles_Lookup, PUBLIC, jint)

inline jint JavaLangInvokeMethodHandles_Lookup_get_PRIVATE();
#define JavaLangInvokeMethodHandles_Lookup_PRIVATE 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandles_Lookup, PRIVATE, jint)

inline jint JavaLangInvokeMethodHandles_Lookup_get_PROTECTED();
#define JavaLangInvokeMethodHandles_Lookup_PROTECTED 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandles_Lookup, PROTECTED, jint)

inline jint JavaLangInvokeMethodHandles_Lookup_get_PACKAGE();
#define JavaLangInvokeMethodHandles_Lookup_PACKAGE 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaLangInvokeMethodHandles_Lookup, PACKAGE, jint)

FOUNDATION_EXPORT void JavaLangInvokeMethodHandles_Lookup_init(JavaLangInvokeMethodHandles_Lookup *self);

FOUNDATION_EXPORT JavaLangInvokeMethodHandles_Lookup *new_JavaLangInvokeMethodHandles_Lookup_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangInvokeMethodHandles_Lookup *create_JavaLangInvokeMethodHandles_Lookup_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaLangInvokeMethodHandles_Lookup)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangInvokeMethodHandles")
