//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/StandardCharsets.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioCharsetStandardCharsets")
#ifdef RESTRICT_JavaNioCharsetStandardCharsets
#define INCLUDE_ALL_JavaNioCharsetStandardCharsets 0
#else
#define INCLUDE_ALL_JavaNioCharsetStandardCharsets 1
#endif
#undef RESTRICT_JavaNioCharsetStandardCharsets

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioCharsetStandardCharsets_) && (INCLUDE_ALL_JavaNioCharsetStandardCharsets || defined(INCLUDE_JavaNioCharsetStandardCharsets))
#define JavaNioCharsetStandardCharsets_

@class JavaNioCharsetCharset;

/*!
 @brief Constant definitions for the standard Charsets.
 @since 1.7
 */
@interface JavaNioCharsetStandardCharsets : NSObject

+ (JavaNioCharsetCharset *)ISO_8859_1;

+ (JavaNioCharsetCharset *)US_ASCII;

+ (JavaNioCharsetCharset *)UTF_16;

+ (JavaNioCharsetCharset *)UTF_16BE;

+ (JavaNioCharsetCharset *)UTF_16LE;

+ (JavaNioCharsetCharset *)UTF_8;

@end

J2OBJC_STATIC_INIT(JavaNioCharsetStandardCharsets)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_ISO_8859_1();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_ISO_8859_1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, ISO_8859_1, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_US_ASCII();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_US_ASCII;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, US_ASCII, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16BE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16BE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16BE, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_16LE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_16LE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_16LE, JavaNioCharsetCharset *)

inline JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_get_UTF_8();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNioCharsetCharset *JavaNioCharsetStandardCharsets_UTF_8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioCharsetStandardCharsets, UTF_8, JavaNioCharsetCharset *)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetStandardCharsets)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioCharsetStandardCharsets")
