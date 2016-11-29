//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: Classes/com/google/j2objc/util/ScopedLocalRef.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleJ2objcUtilScopedLocalRef")
#ifdef RESTRICT_ComGoogleJ2objcUtilScopedLocalRef
#define INCLUDE_ALL_ComGoogleJ2objcUtilScopedLocalRef 0
#else
#define INCLUDE_ALL_ComGoogleJ2objcUtilScopedLocalRef 1
#endif
#undef RESTRICT_ComGoogleJ2objcUtilScopedLocalRef

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (ComGoogleJ2objcUtilScopedLocalRef_) && (INCLUDE_ALL_ComGoogleJ2objcUtilScopedLocalRef || defined(INCLUDE_ComGoogleJ2objcUtilScopedLocalRef))
#define ComGoogleJ2objcUtilScopedLocalRef_

/*!
 @brief Lightweight container that maintains a reference within a scope,
 regardless of variable's origin.
 */
@interface ComGoogleJ2objcUtilScopedLocalRef : NSObject {
 @public
  id var_;
}

#pragma mark Public

- (instancetype)initWithId:(id)var;

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleJ2objcUtilScopedLocalRef)

J2OBJC_FIELD_SETTER(ComGoogleJ2objcUtilScopedLocalRef, var_, id)

FOUNDATION_EXPORT void ComGoogleJ2objcUtilScopedLocalRef_initWithId_(ComGoogleJ2objcUtilScopedLocalRef *self, id var);

FOUNDATION_EXPORT ComGoogleJ2objcUtilScopedLocalRef *new_ComGoogleJ2objcUtilScopedLocalRef_initWithId_(id var) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT ComGoogleJ2objcUtilScopedLocalRef *create_ComGoogleJ2objcUtilScopedLocalRef_initWithId_(id var);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleJ2objcUtilScopedLocalRef)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_ComGoogleJ2objcUtilScopedLocalRef")
