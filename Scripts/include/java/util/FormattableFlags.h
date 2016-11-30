//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/FormattableFlags.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFormattableFlags")
#ifdef RESTRICT_JavaUtilFormattableFlags
#define INCLUDE_ALL_JavaUtilFormattableFlags 0
#else
#define INCLUDE_ALL_JavaUtilFormattableFlags 1
#endif
#undef RESTRICT_JavaUtilFormattableFlags

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFormattableFlags_) && (INCLUDE_ALL_JavaUtilFormattableFlags || defined(INCLUDE_JavaUtilFormattableFlags))
#define JavaUtilFormattableFlags_

/*!
 @brief FormattableFlags are used as a parameter to
 <code>Formattable.formatTo(Formatter,int,int,int)</code> and change the output
 format in <code>Formattable</code>s.
 The validation and interpretation of the
 flags must be done by the implementations.
 - seealso: Formattable
 */
@interface JavaUtilFormattableFlags : NSObject

+ (jint)LEFT_JUSTIFY;

+ (jint)UPPERCASE;

+ (jint)ALTERNATE;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFormattableFlags)

/*!
 @brief Denotes the output is to be left-justified.
 In order to fill the minimum
 width requirement, spaces('\u0020') will be appended at the end of the
 specified output element. If no such flag is set, the output is
 right-justified.
 The flag corresponds to '-' ('\u002d') in the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_LEFT_JUSTIFY();
#define JavaUtilFormattableFlags_LEFT_JUSTIFY 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, LEFT_JUSTIFY, jint)

/*!
 @brief Denotes the output is to be converted to upper case in the way the locale
 parameter of Formatter.formatTo() requires.
 The output has the same
 effect as <code>String.toUpperCase(java.util.Locale)</code>.
 This flag corresponds to <code>'^' ('\u005e')</code> in the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_UPPERCASE();
#define JavaUtilFormattableFlags_UPPERCASE 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, UPPERCASE, jint)

/*!
 @brief Denotes the output is to be formatted in an alternate form.
 The definition
 of the alternate form is determined by the <code>Formattable</code>.
 This flag corresponds to <code>'#' ('\u0023')</code> in the format specifier.
 */
inline jint JavaUtilFormattableFlags_get_ALTERNATE();
#define JavaUtilFormattableFlags_ALTERNATE 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilFormattableFlags, ALTERNATE, jint)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFormattableFlags)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFormattableFlags")