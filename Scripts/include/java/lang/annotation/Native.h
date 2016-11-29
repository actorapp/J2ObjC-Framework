//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/annotation/Native.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangAnnotationNative")
#ifdef RESTRICT_JavaLangAnnotationNative
#define INCLUDE_ALL_JavaLangAnnotationNative 0
#else
#define INCLUDE_ALL_JavaLangAnnotationNative 1
#endif
#undef RESTRICT_JavaLangAnnotationNative

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangAnnotationNative_) && (INCLUDE_ALL_JavaLangAnnotationNative || defined(INCLUDE_JavaLangAnnotationNative))
#define JavaLangAnnotationNative_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "java/lang/annotation/Annotation.h"

/*!
 @brief Indicates that a field defining a constant value may be referenced
 from native code.
 The annotation may be used as a hint by tools that generate native
 header files to determine whether a header file is required, and
 if so, what declarations it should contain.
 @since 1.8
 */
@protocol JavaLangAnnotationNative < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangAnnotationNative)

J2OBJC_TYPE_LITERAL_HEADER(JavaLangAnnotationNative)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangAnnotationNative")
