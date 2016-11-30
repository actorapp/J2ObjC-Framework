//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/Date.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlDate")
#ifdef RESTRICT_JavaSqlDate
#define INCLUDE_ALL_JavaSqlDate 0
#else
#define INCLUDE_ALL_JavaSqlDate 1
#endif
#undef RESTRICT_JavaSqlDate

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlDate_) && (INCLUDE_ALL_JavaSqlDate || defined(INCLUDE_JavaSqlDate))
#define JavaSqlDate_

#define RESTRICT_JavaUtilDate 1
#define INCLUDE_JavaUtilDate 1
#include "../../java/util/Date.h"

/*!
 @brief <P>A thin wrapper around a millisecond value that allows
 JDBC to identify this as an SQL <code>DATE</code> value.
 A
 milliseconds value represents the number of milliseconds that
 have passed since January 1, 1970 00:00:00.000 GMT.
 <p>
 To conform with the definition of SQL <code>DATE</code>, the
 millisecond values wrapped by a <code>java.sql.Date</code> instance
 must be 'normalized' by setting the
 hours, minutes, seconds, and milliseconds to zero in the particular
 time zone with which the instance is associated.
 */
@interface JavaSqlDate : JavaUtilDate

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs a <code>Date</code> object initialized with the given
 year, month, and day.
 <P>
 The result is undefined if a given argument is out of bounds.
 @param year the year minus 1900; must be 0 to 8099. (Note that
 8099 is 9999 minus 1900.)
 @param month 0 to 11
 @param day 1 to 31
 */
- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)day __attribute__((deprecated));

/*!
 @brief Constructs a <code>Date</code> object using the given milliseconds
 time value.
 If the given milliseconds value contains time
 information, the driver will set the time components to the
 time in the default time zone (the time zone of the Java virtual
 machine running the application) that corresponds to zero GMT.
 @param date milliseconds since January 1, 1970, 00:00:00 GMT not
 to exceed the milliseconds representation for the year 8099.
 A negative number indicates the number of milliseconds
 before January 1, 1970, 00:00:00 GMT.
 */
- (instancetype)initWithLong:(jlong)date;

/*!
 @exception java.lang.IllegalArgumentException if this method is invoked
 - seealso: #setHours
 */
- (jint)getHours __attribute__((deprecated));

/*!
 @exception java.lang.IllegalArgumentException if this method is invoked
 - seealso: #setMinutes
 */
- (jint)getMinutes __attribute__((deprecated));

/*!
 @exception java.lang.IllegalArgumentException if this method is invoked
 - seealso: #setSeconds
 */
- (jint)getSeconds __attribute__((deprecated));

/*!
 @exception java.lang.IllegalArgumentException if this method is invoked
 - seealso: #getHours
 */
- (void)setHoursWithInt:(jint)i __attribute__((deprecated));

/*!
 @exception java.lang.IllegalArgumentException if this method is invoked
 - seealso: #getMinutes
 */
- (void)setMinutesWithInt:(jint)i __attribute__((deprecated));

/*!
 @exception java.lang.IllegalArgumentException if this method is invoked
 - seealso: #getSeconds
 */
- (void)setSecondsWithInt:(jint)i __attribute__((deprecated));

/*!
 @brief Sets an existing <code>Date</code> object
 using the given milliseconds time value.
 If the given milliseconds value contains time information,
 the driver will set the time components to the
 time in the default time zone (the time zone of the Java virtual
 machine running the application) that corresponds to zero GMT.
 @param date milliseconds since January 1, 1970, 00:00:00 GMT not
 to exceed the milliseconds representation for the year 8099.
 A negative number indicates the number of milliseconds
 before January 1, 1970, 00:00:00 GMT.
 */
- (void)setTimeWithLong:(jlong)date;

/*!
 @brief Formats a date in the date escape format yyyy-mm-dd.
 <P>
 @return a String in yyyy-mm-dd format
 */
- (NSString *)description;

/*!
 @brief Converts a string in JDBC date escape format to
 a <code>Date</code> value.
 @param s a <code>String</code> object representing a date in
 in the format "yyyy-[m]m-[d]d". The leading zero for <code>mm</code>
 and <code>dd</code> may also be omitted.
 @return a <code>java.sql.Date</code> object representing the
 given date
 @throws IllegalArgumentException if the date given is not in the
 JDBC date escape format (yyyy-[m]m-[d]d)
 */
+ (JavaSqlDate *)valueOfWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlDate)

/*!
 @brief Private serial version unique ID to ensure serialization
 compatibility.
 */
inline jlong JavaSqlDate_get_serialVersionUID();
#define JavaSqlDate_serialVersionUID 1511598038487230103LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlDate, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaSqlDate_initWithInt_withInt_withInt_(JavaSqlDate *self, jint year, jint month, jint day);

FOUNDATION_EXPORT JavaSqlDate *new_JavaSqlDate_initWithInt_withInt_withInt_(jint year, jint month, jint day) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDate *create_JavaSqlDate_initWithInt_withInt_withInt_(jint year, jint month, jint day);

FOUNDATION_EXPORT void JavaSqlDate_initWithLong_(JavaSqlDate *self, jlong date);

FOUNDATION_EXPORT JavaSqlDate *new_JavaSqlDate_initWithLong_(jlong date) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDate *create_JavaSqlDate_initWithLong_(jlong date);

FOUNDATION_EXPORT JavaSqlDate *JavaSqlDate_valueOfWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlDate)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlDate")
