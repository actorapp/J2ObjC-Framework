//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/DataTruncation.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlDataTruncation")
#ifdef RESTRICT_JavaSqlDataTruncation
#define INCLUDE_ALL_JavaSqlDataTruncation 0
#else
#define INCLUDE_ALL_JavaSqlDataTruncation 1
#endif
#undef RESTRICT_JavaSqlDataTruncation

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlDataTruncation_) && (INCLUDE_ALL_JavaSqlDataTruncation || defined(INCLUDE_JavaSqlDataTruncation))
#define JavaSqlDataTruncation_

#define RESTRICT_JavaSqlSQLWarning 1
#define INCLUDE_JavaSqlSQLWarning 1
#include "../../java/sql/SQLWarning.h"

/*!
 @brief An exception  thrown as a <code>DataTruncation</code> exception
 (on writes) or reported as a
 <code>DataTruncation</code> warning (on reads)
 when a data values is unexpectedly truncated for reasons other than its having
 execeeded <code>MaxFieldSize</code>.
 <P>The SQLstate for a <code>DataTruncation</code> during read is <code>01004</code>.
 <P>The SQLstate for a <code>DataTruncation</code> during write is <code>22001</code>.
 */
@interface JavaSqlDataTruncation : JavaSqlSQLWarning

#pragma mark Public

/*!
 @brief Creates a <code>DataTruncation</code> object
 with the SQLState initialized
 to 01004 when <code>read</code> is set to <code>true</code> and 22001
 when <code>read</code> is set to <code>false</code>,
 the reason set to "Data truncation", the
 vendor code set to 0, and
 the other fields set to the given values.
 The <code>cause</code> is not initialized, and may subsequently be
 initialized by a call to the
 <code>Throwable.initCause(java.lang.Throwable)</code> method.
 <p>
 @param index The index of the parameter or column value
 @param parameter true if a parameter value was truncated
 @param read true if a read was truncated
 @param dataSize the original size of the data
 @param transferSize the size after truncation
 */
- (instancetype)initWithInt:(jint)index
                withBoolean:(jboolean)parameter
                withBoolean:(jboolean)read
                    withInt:(jint)dataSize
                    withInt:(jint)transferSize;

/*!
 @brief Creates a <code>DataTruncation</code> object
 with the SQLState initialized
 to 01004 when <code>read</code> is set to <code>true</code> and 22001
 when <code>read</code> is set to <code>false</code>,
 the reason set to "Data truncation", the
 vendor code set to 0, and
 the other fields set to the given values.
 <p>
 @param index The index of the parameter or column value
 @param parameter true if a parameter value was truncated
 @param read true if a read was truncated
 @param dataSize the original size of the data
 @param transferSize the size after truncation
 @param cause the underlying reason for this <code>DataTruncation</code>
 (which is saved for later retrieval by the <code>getCause()</code> method);
 may be null indicating the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithInt:(jint)index
                withBoolean:(jboolean)parameter
                withBoolean:(jboolean)read
                    withInt:(jint)dataSize
                    withInt:(jint)transferSize
            withNSException:(NSException *)cause;

/*!
 @brief Gets the number of bytes of data that should have been transferred.
 This number may be approximate if data conversions were being
 performed.  The value may be <code>-1</code> if the size is unknown.
 @return the number of bytes of data that should have been transferred
 */
- (jint)getDataSize;

/*!
 @brief Retrieves the index of the column or parameter that was truncated.
 <P>This may be -1 if the column or parameter index is unknown, in
 which case the <code>parameter</code> and <code>read</code> fields should be ignored.
 @return the index of the truncated paramter or column value
 */
- (jint)getIndex;

/*!
 @brief Indicates whether the value truncated was a parameter value or
 a column value.
 @return <code>true</code> if the value truncated was a parameter;
 <code>false</code> if it was a column value
 */
- (jboolean)getParameter;

/*!
 @brief Indicates whether or not the value was truncated on a read.
 @return <code>true</code> if the value was truncated when read from
 the database; <code>false</code> if the data was truncated on a write
 */
- (jboolean)getRead;

/*!
 @brief Gets the number of bytes of data actually transferred.
 The value may be <code>-1</code> if the size is unknown.
 @return the number of bytes of data actually transferred
 */
- (jint)getTransferSize;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlDataTruncation)

FOUNDATION_EXPORT void JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_(JavaSqlDataTruncation *self, jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize);

FOUNDATION_EXPORT JavaSqlDataTruncation *new_JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDataTruncation *create_JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize);

FOUNDATION_EXPORT void JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_withNSException_(JavaSqlDataTruncation *self, jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize, NSException *cause);

FOUNDATION_EXPORT JavaSqlDataTruncation *new_JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_withNSException_(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlDataTruncation *create_JavaSqlDataTruncation_initWithInt_withBoolean_withBoolean_withInt_withInt_withNSException_(jint index, jboolean parameter, jboolean read, jint dataSize, jint transferSize, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlDataTruncation)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlDataTruncation")
