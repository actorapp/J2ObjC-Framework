//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/jsr305/build_result/java/javax/annotation/Syntax.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationSyntax")
#ifdef RESTRICT_JavaxAnnotationSyntax
#define INCLUDE_ALL_JavaxAnnotationSyntax 0
#else
#define INCLUDE_ALL_JavaxAnnotationSyntax 1
#endif
#undef RESTRICT_JavaxAnnotationSyntax

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationSyntax_) && (INCLUDE_ALL_JavaxAnnotationSyntax || defined(INCLUDE_JavaxAnnotationSyntax))
#define JavaxAnnotationSyntax_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;
@class JavaxAnnotationMetaWhen;

/*!
 @brief This annotation a value that is of a particular syntax, such as Java syntax
 or regular expression syntax.
 This can be used to provide syntax checking of
 constant values at compile time, run time checking at runtime, and can assist
 IDEs in deciding how to interpret String constants (e.g., should a
 refactoring that renames method x() to y() update the String constant "x()").
 */
@protocol JavaxAnnotationSyntax < JavaLangAnnotationAnnotation >

@property (readonly) NSString *value;
@property (readonly) JavaxAnnotationMetaWhen *when;

@end

@interface JavaxAnnotationSyntax : NSObject < JavaxAnnotationSyntax > {
 @public
  NSString *value_;
  JavaxAnnotationMetaWhen *when_;
}

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationSyntax)

FOUNDATION_EXPORT id<JavaxAnnotationSyntax> create_JavaxAnnotationSyntax(NSString *value, JavaxAnnotationMetaWhen *when);

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationSyntax)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationSyntax")
