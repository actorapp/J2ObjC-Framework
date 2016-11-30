//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/IllegalFormatException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilIllegalFormatException")
#ifdef RESTRICT_JavaUtilIllegalFormatException
#define INCLUDE_ALL_JavaUtilIllegalFormatException 0
#else
#define INCLUDE_ALL_JavaUtilIllegalFormatException 1
#endif
#undef RESTRICT_JavaUtilIllegalFormatException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilIllegalFormatException_) && (INCLUDE_ALL_JavaUtilIllegalFormatException || defined(INCLUDE_JavaUtilIllegalFormatException))
#define JavaUtilIllegalFormatException_

#define RESTRICT_JavaLangIllegalArgumentException 1
#define INCLUDE_JavaLangIllegalArgumentException 1
#include "../../java/lang/IllegalArgumentException.h"

/*!
 @brief Unchecked exception thrown when a format string contains an illegal syntax
 or a format specifier that is incompatible with the given arguments.
 Only
 explicit subtypes of this exception which correspond to specific errors
 should be instantiated.
 @since 1.5
 */
@interface JavaUtilIllegalFormatException : JavaLangIllegalArgumentException

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatException_init(JavaUtilIllegalFormatException *self);

FOUNDATION_EXPORT JavaUtilIllegalFormatException *new_JavaUtilIllegalFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilIllegalFormatException *create_JavaUtilIllegalFormatException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilIllegalFormatException")