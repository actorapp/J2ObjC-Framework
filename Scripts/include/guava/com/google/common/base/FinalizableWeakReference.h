//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/base/FinalizableWeakReference.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference")
#ifdef RESTRICT_ComGoogleCommonBaseFinalizableWeakReference
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference 0
#else
#define INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference 1
#endif
#undef RESTRICT_ComGoogleCommonBaseFinalizableWeakReference

#if !defined (ComGoogleCommonBaseFinalizableWeakReference_) && (INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference || defined(INCLUDE_ComGoogleCommonBaseFinalizableWeakReference))
#define ComGoogleCommonBaseFinalizableWeakReference_

#define RESTRICT_JavaLangRefWeakReference 1
#define INCLUDE_JavaLangRefWeakReference 1
#include "java/lang/ref/WeakReference.h"

#define RESTRICT_ComGoogleCommonBaseFinalizableReference 1
#define INCLUDE_ComGoogleCommonBaseFinalizableReference 1
#include "com/google/common/base/FinalizableReference.h"

@class ComGoogleCommonBaseFinalizableReferenceQueue;

@interface ComGoogleCommonBaseFinalizableWeakReference : JavaLangRefWeakReference < ComGoogleCommonBaseFinalizableReference >

#pragma mark Protected

- (instancetype)initWithId:(id)referent
withComGoogleCommonBaseFinalizableReferenceQueue:(ComGoogleCommonBaseFinalizableReferenceQueue *)queue;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonBaseFinalizableWeakReference)

FOUNDATION_EXPORT void ComGoogleCommonBaseFinalizableWeakReference_initWithId_withComGoogleCommonBaseFinalizableReferenceQueue_(ComGoogleCommonBaseFinalizableWeakReference *self, id referent, ComGoogleCommonBaseFinalizableReferenceQueue *queue);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonBaseFinalizableWeakReference)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonBaseFinalizableWeakReference")
