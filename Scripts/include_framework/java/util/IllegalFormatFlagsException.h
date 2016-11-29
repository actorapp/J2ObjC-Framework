//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/IllegalFormatFlagsException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilIllegalFormatFlagsException")
#ifdef RESTRICT_JavaUtilIllegalFormatFlagsException
#define INCLUDE_ALL_JavaUtilIllegalFormatFlagsException 0
#else
#define INCLUDE_ALL_JavaUtilIllegalFormatFlagsException 1
#endif
#undef RESTRICT_JavaUtilIllegalFormatFlagsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilIllegalFormatFlagsException_) && (INCLUDE_ALL_JavaUtilIllegalFormatFlagsException || defined(INCLUDE_JavaUtilIllegalFormatFlagsException))
#define JavaUtilIllegalFormatFlagsException_

#define RESTRICT_JavaUtilIllegalFormatException 1
#define INCLUDE_JavaUtilIllegalFormatException 1
#include "../../java/util/IllegalFormatException.h"

/*!
 @brief Unchecked exception thrown when an illegal combination flags is given.
 <p> Unless otherwise specified, passing a <tt>null</tt> argument to any
 method or constructor in this class will cause a <code>NullPointerException</code>
  to be thrown.
 @since 1.5
 */
@interface JavaUtilIllegalFormatFlagsException : JavaUtilIllegalFormatException

#pragma mark Public

/*!
 @brief Constructs an instance of this class with the specified flags.
 @param f
 The set of format flags which contain an illegal combination
 */
- (instancetype)initWithNSString:(NSString *)f;

/*!
 @brief Returns the set of flags which contains an illegal combination.
 @return The flags
 */
- (NSString *)getFlags;

- (NSString *)getMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilIllegalFormatFlagsException)

FOUNDATION_EXPORT void JavaUtilIllegalFormatFlagsException_initWithNSString_(JavaUtilIllegalFormatFlagsException *self, NSString *f);

FOUNDATION_EXPORT JavaUtilIllegalFormatFlagsException *new_JavaUtilIllegalFormatFlagsException_initWithNSString_(NSString *f) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilIllegalFormatFlagsException *create_JavaUtilIllegalFormatFlagsException_initWithNSString_(NSString *f);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilIllegalFormatFlagsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilIllegalFormatFlagsException")
