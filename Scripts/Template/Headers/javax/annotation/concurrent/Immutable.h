//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/jsr305/build_result/java/javax/annotation/concurrent/Immutable.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxAnnotationConcurrentImmutable")
#ifdef RESTRICT_JavaxAnnotationConcurrentImmutable
#define INCLUDE_ALL_JavaxAnnotationConcurrentImmutable 0
#else
#define INCLUDE_ALL_JavaxAnnotationConcurrentImmutable 1
#endif
#undef RESTRICT_JavaxAnnotationConcurrentImmutable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxAnnotationConcurrentImmutable_) && (INCLUDE_ALL_JavaxAnnotationConcurrentImmutable || defined(INCLUDE_JavaxAnnotationConcurrentImmutable))
#define JavaxAnnotationConcurrentImmutable_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../../java/lang/annotation/Annotation.h"

/*!
 @brief Immutable
 The class to which this annotation is applied is immutable.
 This means that
 its state cannot be seen to change by callers. Of necessity this means that
 all public fields are final, and that all public final reference fields refer
 to other immutable objects, and that methods do not publish references to any
 internal state which is mutable by implementation even if not by design.
 Immutable objects may still have internal mutable state for purposes of
 performance optimization; some state variables may be lazily computed, so
 long as they are computed from immutable state and that callers cannot tell
 the difference.
 Immutable objects are inherently thread-safe; they may be passed between
 threads or published without synchronization.
 */
@protocol JavaxAnnotationConcurrentImmutable < JavaLangAnnotationAnnotation >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxAnnotationConcurrentImmutable)

J2OBJC_TYPE_LITERAL_HEADER(JavaxAnnotationConcurrentImmutable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxAnnotationConcurrentImmutable")
