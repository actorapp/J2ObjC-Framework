//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/inject/javax_inject/build_result/java/javax/inject/Singleton.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxInjectSingleton")
#ifdef RESTRICT_JavaxInjectSingleton
#define INCLUDE_ALL_JavaxInjectSingleton 0
#else
#define INCLUDE_ALL_JavaxInjectSingleton 1
#endif
#undef RESTRICT_JavaxInjectSingleton

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxInjectSingleton_) && (INCLUDE_ALL_JavaxInjectSingleton || defined(INCLUDE_JavaxInjectSingleton))
#define JavaxInjectSingleton_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Identifies a type that the injector only instantiates once.
 Not inherited.
 - seealso: javax.inject.Scope @@Scope
 */
@protocol JavaxInjectSingleton < JavaLangAnnotationAnnotation >

@end

@interface JavaxInjectSingleton : NSObject < JavaxInjectSingleton >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxInjectSingleton)

FOUNDATION_EXPORT id<JavaxInjectSingleton> create_JavaxInjectSingleton();

J2OBJC_TYPE_LITERAL_HEADER(JavaxInjectSingleton)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxInjectSingleton")
