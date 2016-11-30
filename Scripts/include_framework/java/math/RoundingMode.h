//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/math/src/main/java/java/math/RoundingMode.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaMathRoundingMode")
#ifdef RESTRICT_JavaMathRoundingMode
#define INCLUDE_ALL_JavaMathRoundingMode 0
#else
#define INCLUDE_ALL_JavaMathRoundingMode 1
#endif
#undef RESTRICT_JavaMathRoundingMode

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaMathRoundingMode_) && (INCLUDE_ALL_JavaMathRoundingMode || defined(INCLUDE_JavaMathRoundingMode))
#define JavaMathRoundingMode_

#define RESTRICT_JavaLangEnum 1
#define INCLUDE_JavaLangEnum 1
#include "../../java/lang/Enum.h"

@class IOSObjectArray;

typedef NS_ENUM(NSUInteger, JavaMathRoundingMode_Enum) {
  JavaMathRoundingMode_Enum_UP = 0,
  JavaMathRoundingMode_Enum_DOWN = 1,
  JavaMathRoundingMode_Enum_CEILING = 2,
  JavaMathRoundingMode_Enum_FLOOR = 3,
  JavaMathRoundingMode_Enum_HALF_UP = 4,
  JavaMathRoundingMode_Enum_HALF_DOWN = 5,
  JavaMathRoundingMode_Enum_HALF_EVEN = 6,
  JavaMathRoundingMode_Enum_UNNECESSARY = 7,
};

/*!
 @brief Specifies the rounding behavior for operations whose results cannot be
 represented exactly.
 */
@interface JavaMathRoundingMode : JavaLangEnum < NSCopying >

+ (JavaMathRoundingMode * __nonnull)UP;

+ (JavaMathRoundingMode * __nonnull)DOWN;

+ (JavaMathRoundingMode * __nonnull)CEILING;

+ (JavaMathRoundingMode * __nonnull)FLOOR;

+ (JavaMathRoundingMode * __nonnull)HALF_UP;

+ (JavaMathRoundingMode * __nonnull)HALF_DOWN;

+ (JavaMathRoundingMode * __nonnull)HALF_EVEN;

+ (JavaMathRoundingMode * __nonnull)UNNECESSARY;

#pragma mark Public

/*!
 @brief Converts rounding mode constants from class <code>BigDecimal</code> into
 <code>RoundingMode</code> values.
 @param mode
 rounding mode constant as defined in class <code>BigDecimal</code>
 @return corresponding rounding mode object
 */
+ (JavaMathRoundingMode *)valueOfWithInt:(jint)mode;

+ (JavaMathRoundingMode *)valueOfWithNSString:(NSString *)name;

+ (IOSObjectArray *)values;

#pragma mark Package-Private

- (id)copyWithZone:(NSZone *)zone;
- (JavaMathRoundingMode_Enum)toNSEnum;

@end

J2OBJC_STATIC_INIT(JavaMathRoundingMode)

/*! INTERNAL ONLY - Use enum accessors declared below. */
FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_values_[];

/*!
 @brief Rounding mode where positive values are rounded towards positive infinity
 and negative values towards negative infinity.
 <br>
 Rule: <code>x.round().abs() >= x.abs()</code>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_UP();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, UP)

/*!
 @brief Rounding mode where the values are rounded towards zero.
 <br>
 Rule: <code>x.round().abs() <= x.abs()</code>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_DOWN();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, DOWN)

/*!
 @brief Rounding mode to round towards positive infinity.
 For positive values
 this rounding mode behaves as <code>UP</code>, for negative values as
 <code>DOWN</code>.
 <br>
 Rule: <code>x.round() >= x</code>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_CEILING();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, CEILING)

/*!
 @brief Rounding mode to round towards negative infinity.
 For positive values
 this rounding mode behaves as <code>DOWN</code>, for negative values as
 <code>UP</code>.
 <br>
 Rule: <code>x.round() <= x</code>
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_FLOOR();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, FLOOR)

/*!
 @brief Rounding mode where values are rounded towards the nearest neighbor.
 Ties
 are broken by rounding up.
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_HALF_UP();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, HALF_UP)

/*!
 @brief Rounding mode where values are rounded towards the nearest neighbor.
 Ties
 are broken by rounding down.
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_HALF_DOWN();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, HALF_DOWN)

/*!
 @brief Rounding mode where values are rounded towards the nearest neighbor.
 Ties
 are broken by rounding to the even neighbor.
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_HALF_EVEN();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, HALF_EVEN)

/*!
 @brief Rounding mode where the rounding operations throws an ArithmeticException
 for the case that rounding is necessary, i.e. for the case that the value
 cannot be represented exactly.
 */
inline JavaMathRoundingMode *JavaMathRoundingMode_get_UNNECESSARY();
J2OBJC_ENUM_CONSTANT(JavaMathRoundingMode, UNNECESSARY)

FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_valueOfWithInt_(jint mode);

FOUNDATION_EXPORT IOSObjectArray *JavaMathRoundingMode_values();

FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT JavaMathRoundingMode *JavaMathRoundingMode_fromOrdinal(NSUInteger ordinal);

J2OBJC_TYPE_LITERAL_HEADER(JavaMathRoundingMode)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaMathRoundingMode")