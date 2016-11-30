//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/Timestamp.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlTimestamp")
#ifdef RESTRICT_JavaSqlTimestamp
#define INCLUDE_ALL_JavaSqlTimestamp 0
#else
#define INCLUDE_ALL_JavaSqlTimestamp 1
#endif
#undef RESTRICT_JavaSqlTimestamp

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlTimestamp_) && (INCLUDE_ALL_JavaSqlTimestamp || defined(INCLUDE_JavaSqlTimestamp))
#define JavaSqlTimestamp_

#define RESTRICT_JavaUtilDate 1
#define INCLUDE_JavaUtilDate 1
#include "java/util/Date.h"

/*!
 @brief <P>A thin wrapper around <code>java.util.Date</code> that allows
 the JDBC API to identify this as an SQL <code>TIMESTAMP</code> value.
 It adds the ability
 to hold the SQL <code>TIMESTAMP</code> fractional seconds value, by allowing
 the specification of fractional seconds to a precision of nanoseconds.
 A Timestamp also provides formatting and
 parsing operations to support the JDBC escape syntax for timestamp values.
 <p>The precision of a Timestamp object is calculated to be either:
 <ul>
 <li><code>19 </code>, which is the number of characters in yyyy-mm-dd hh:mm:ss
 <li> <code> 20 + s </code>, which is the number
 of characters in the yyyy-mm-dd hh:mm:ss.[fff...] and <code>s</code> represents  the scale of the given Timestamp,
 its fractional seconds precision.
 </ul>
 <P><B>Note:</B> This type is a composite of a <code>java.util.Date</code> and a
 separate nanoseconds value. Only integral seconds are stored in the
 <code>java.util.Date</code> component. The fractional seconds - the nanos - are
 separate.  The <code>Timestamp.equals(Object)</code> method never returns
 <code>true</code> when passed an object
 that isn't an instance of <code>java.sql.Timestamp</code>,
 because the nanos component of a date is unknown.
 As a result, the <code>Timestamp.equals(Object)</code>
 method is not symmetric with respect to the
 <code>java.util.Date.equals(Object)</code>
 method.  Also, the <code>hashCode</code> method uses the underlying
 <code>java.util.Date</code>
 implementation and therefore does not include nanos in its computation.
 <P>
 Due to the differences between the <code>Timestamp</code> class
 and the <code>java.util.Date</code>
 class mentioned above, it is recommended that code not view
 <code>Timestamp</code> values generically as an instance of
 <code>java.util.Date</code>.  The
 inheritance relationship between <code>Timestamp</code>
 and <code>java.util.Date</code> really
 denotes implementation inheritance, and not type inheritance.
 */
@interface JavaSqlTimestamp : JavaUtilDate

+ (jlong)serialVersionUID;

#pragma mark Public

/*!
 @brief Constructs a <code>Timestamp</code> object initialized
 with the given values.
 @param year the year minus 1900
 @param month 0 to 11
 @param date 1 to 31
 @param hour 0 to 23
 @param minute 0 to 59
 @param second 0 to 59
 @param nano 0 to 999,999,999
 @exception IllegalArgumentException if the nano argument is out of bounds
 */
- (instancetype)initWithInt:(jint)year
                    withInt:(jint)month
                    withInt:(jint)date
                    withInt:(jint)hour
                    withInt:(jint)minute
                    withInt:(jint)second
                    withInt:(jint)nano __attribute__((deprecated));

/*!
 @brief Constructs a <code>Timestamp</code> object
 using a milliseconds time value.
 The
 integral seconds are stored in the underlying date value; the
 fractional seconds are stored in the <code>nanos</code> field of
 the <code>Timestamp</code> object.
 @param time milliseconds since January 1, 1970, 00:00:00 GMT.
 A negative number is the number of milliseconds before
 January 1, 1970, 00:00:00 GMT.
 - seealso: java.util.Calendar
 */
- (instancetype)initWithLong:(jlong)time;

/*!
 @brief Indicates whether this <code>Timestamp</code> object is
 later than the given <code>Timestamp</code> object.
 @param ts the <code>Timestamp</code> value to compare with
 @return <code>true</code> if this <code>Timestamp</code> object is later;
 <code>false</code> otherwise
 */
- (jboolean)afterWithJavaSqlTimestamp:(JavaSqlTimestamp *)ts;

/*!
 @brief Indicates whether this <code>Timestamp</code> object is
 earlier than the given <code>Timestamp</code> object.
 @param ts the <code>Timestamp</code> value to compare with
 @return <code>true</code> if this <code>Timestamp</code> object is earlier;
 <code>false</code> otherwise
 */
- (jboolean)beforeWithJavaSqlTimestamp:(JavaSqlTimestamp *)ts;

/*!
 @brief Compares this <code>Timestamp</code> object to the given
 <code>Date</code> object.
 @param o the <code>Date</code> to be compared to
 this <code>Timestamp</code> object
 @return the value <code>0</code> if this <code>Timestamp</code> object
 and the given object are equal; a value less than <code>0</code>
 if this  <code>Timestamp</code> object is before the given argument;
 and a value greater than <code>0</code> if this
 <code>Timestamp</code> object is after the given argument.
 @since 1.5
 */
- (jint)compareToWithId:(JavaUtilDate *)o;

/*!
 @brief Compares this <code>Timestamp</code> object to the given
 <code>Timestamp</code> object.
 @param ts   the <code>Timestamp</code> object to be compared to
 this <code>Timestamp</code> object
 @return the value <code>0</code> if the two <code>Timestamp</code>
 objects are equal; a value less than <code>0</code> if this
 <code>Timestamp</code> object is before the given argument;
 and a value greater than <code>0</code> if this
 <code>Timestamp</code> object is after the given argument.
 @since 1.4
 */
- (jint)compareToWithJavaSqlTimestamp:(JavaSqlTimestamp *)ts;

/*!
 @brief Tests to see if this <code>Timestamp</code> object is
 equal to the given object.
 This version of the method <code>equals</code> has been added
 to fix the incorrect
 signature of <code>Timestamp.equals(Timestamp)</code> and to preserve backward
 compatibility with existing class files.
 Note: This method is not symmetric with respect to the
 <code>equals(Object)</code> method in the base class.
 @param ts the <code>Object</code> value to compare with
 @return <code>true</code> if the given <code>Object</code> is an instance
 of a <code>Timestamp</code> that
 is equal to this <code>Timestamp</code> object;
 <code>false</code> otherwise
 */
- (jboolean)isEqual:(id)ts;

/*!
 @brief Tests to see if this <code>Timestamp</code> object is
 equal to the given <code>Timestamp</code> object.
 @param ts the <code>Timestamp</code> value to compare with
 @return <code>true</code> if the given <code>Timestamp</code>
 object is equal to this <code>Timestamp</code> object;
 <code>false</code> otherwise
 */
- (jboolean)equalsWithJavaSqlTimestamp:(JavaSqlTimestamp *)ts;

/*!
 @brief Gets this <code>Timestamp</code> object's <code>nanos</code> value.
 @return this <code>Timestamp</code> object's fractional seconds component
 - seealso: #setNanos
 */
- (jint)getNanos;

/*!
 @brief Returns the number of milliseconds since January 1, 1970, 00:00:00 GMT
 represented by this <code>Timestamp</code> object.
 @return the number of milliseconds since January 1, 1970, 00:00:00 GMT
 represented by this date.
 - seealso: #setTime
 */
- (jlong)getTime;

/*!
 @brief 
 The <code>hashCode</code> method uses the underlying <code>java.util.Date</code>
 implementation and therefore does not include nanos in its computation.
 */
- (NSUInteger)hash;

/*!
 @brief Sets this <code>Timestamp</code> object's <code>nanos</code> field
 to the given value.
 @param n the new fractional seconds component
 @exception java.lang.IllegalArgumentException if the given argument
 is greater than 999999999 or less than 0
 - seealso: #getNanos
 */
- (void)setNanosWithInt:(jint)n;

/*!
 @brief Sets this <code>Timestamp</code> object to represent a point in time that is
 <tt>time</tt> milliseconds after January 1, 1970 00:00:00 GMT.
 @param time   the number of milliseconds.
 - seealso: #getTime
 - seealso: #Timestamp(long time)
 - seealso: java.util.Calendar
 */
- (void)setTimeWithLong:(jlong)time;

/*!
 @brief Formats a timestamp in JDBC timestamp escape format.
 <code>yyyy-mm-dd hh:mm:ss.fffffffff</code>,
 where <code>ffffffffff</code> indicates nanoseconds.
 <P>
 @return a <code>String</code> object in
 <code>yyyy-mm-dd hh:mm:ss.fffffffff</code> format
 */
- (NSString *)description;

/*!
 @brief Converts a <code>String</code> object in JDBC timestamp escape format to a
 <code>Timestamp</code> value.
 @param s timestamp in format <code>yyyy-[m]m-[d]d hh:mm:ss[.f...]</code>.  The
 fractional seconds may be omitted. The leading zero for <code>mm</code>
 and <code>dd</code> may also be omitted.
 @return corresponding <code>Timestamp</code> value
 @exception java.lang.IllegalArgumentException if the given argument
 does not have the format <code>yyyy-[m]m-[d]d hh:mm:ss[.f...]</code>
 */
+ (JavaSqlTimestamp *)valueOfWithNSString:(NSString *)s;

@end

J2OBJC_STATIC_INIT(JavaSqlTimestamp)

inline jlong JavaSqlTimestamp_get_serialVersionUID();
#define JavaSqlTimestamp_serialVersionUID 2745179027874758501LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSqlTimestamp, serialVersionUID, jlong)

FOUNDATION_EXPORT void JavaSqlTimestamp_initWithInt_withInt_withInt_withInt_withInt_withInt_withInt_(JavaSqlTimestamp *self, jint year, jint month, jint date, jint hour, jint minute, jint second, jint nano);

FOUNDATION_EXPORT JavaSqlTimestamp *new_JavaSqlTimestamp_initWithInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute, jint second, jint nano) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTimestamp *create_JavaSqlTimestamp_initWithInt_withInt_withInt_withInt_withInt_withInt_withInt_(jint year, jint month, jint date, jint hour, jint minute, jint second, jint nano);

FOUNDATION_EXPORT void JavaSqlTimestamp_initWithLong_(JavaSqlTimestamp *self, jlong time);

FOUNDATION_EXPORT JavaSqlTimestamp *new_JavaSqlTimestamp_initWithLong_(jlong time) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlTimestamp *create_JavaSqlTimestamp_initWithLong_(jlong time);

FOUNDATION_EXPORT JavaSqlTimestamp *JavaSqlTimestamp_valueOfWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlTimestamp)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlTimestamp")
