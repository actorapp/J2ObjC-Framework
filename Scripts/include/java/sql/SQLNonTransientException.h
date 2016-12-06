//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/sql/SQLNonTransientException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSqlSQLNonTransientException")
#ifdef RESTRICT_JavaSqlSQLNonTransientException
#define INCLUDE_ALL_JavaSqlSQLNonTransientException 0
#else
#define INCLUDE_ALL_JavaSqlSQLNonTransientException 1
#endif
#undef RESTRICT_JavaSqlSQLNonTransientException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSqlSQLNonTransientException_) && (INCLUDE_ALL_JavaSqlSQLNonTransientException || defined(INCLUDE_JavaSqlSQLNonTransientException))
#define JavaSqlSQLNonTransientException_

#define RESTRICT_JavaSqlSQLException 1
#define INCLUDE_JavaSqlSQLException 1
#include "java/sql/SQLException.h"

/*!
 @brief The subclass of <code>SQLException</code> thrown when an instance where a retry
 of the same operation would fail unless the cause of the <code>SQLException</code>
 is corrected.
 <p>
 @since 1.6
 */
@interface JavaSqlSQLNonTransientException : JavaSqlSQLException

#pragma mark Public

/*!
 @brief Constructs a <code>SQLNonTransientException</code> object.
 The <code>reason</code>, <code>SQLState</code> are initialized
 to <code>null</code> and the vendor code is initialized to 0.
 The <code>cause</code> is not initialized, and may subsequently be
 initialized by a call to the
 <code>Throwable.initCause(java.lang.Throwable)</code> method.
 <p>
 @since 1.6
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>SQLNonTransientException</code> object
 with a given <code>reason</code>.
 The <code>SQLState</code>
 is initialized to <code>null</code> and the vender code is initialized
 to 0.
 The <code>cause</code> is not initialized, and may subsequently be
 initialized by a call to the
 <code>Throwable.initCause(java.lang.Throwable)</code> method.
 <p>
 @param reason a description of the exception
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason;

/*!
 @brief Constructs a <code>SQLNonTransientException</code> object
 with a given <code>reason</code> and <code>SQLState</code>.
 The <code>cause</code> is not initialized, and may subsequently be
 initialized by a call to the
 <code>Throwable.initCause(java.lang.Throwable)</code> method. The vendor code
 is initialized to 0.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState;

/*!
 @brief Constructs a <code>SQLNonTransientException</code> object
 with a given <code>reason</code>, <code>SQLState</code>  and
 <code>vendorCode</code>.
 The <code>cause</code> is not initialized, and may subsequently be
 initialized by a call to the
 <code>Throwable.initCause(java.lang.Throwable)</code> method.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor specific exception code
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode;

/*!
 @brief Constructs a <code>SQLNonTransientException</code> object
 with a given
 <code>reason</code>, <code>SQLState</code>, <code>vendorCode</code>
 and  <code>cause</code>.
 <p>
 @param reason a description of the exception
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param vendorCode a database vendor-specific exception code
 @param cause the underlying reason for this <code>SQLException</code> (which is saved for later retrieval by the <code>getCause()</code> method); may be null indicating
 the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                         withInt:(jint)vendorCode
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a <code>SQLNonTransientException</code> object
 with a given
 <code>reason</code>, <code>SQLState</code> and  <code>cause</code>.
 The vendor code is initialized to 0.
 <p>
 @param reason a description of the exception.
 @param SQLState an XOPEN or SQL:2003 code identifying the exception
 @param cause the underlying reason for this <code>SQLException</code> (which is saved for later retrieval by the <code>getCause()</code> method); may be null indicating
 the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                    withNSString:(NSString *)SQLState
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a <code>SQLTransientException</code> object
 with a given
 <code>reason</code> and  <code>cause</code>.
 The <code>SQLState</code> is  initialized to <code>null</code>
 and the vendor code is initialized to 0.
 <p>
 @param reason a description of the exception.
 @param cause the underlying reason for this <code>SQLException</code> (which is saved for later retrieval by the <code>getCause()</code> method); may be null indicating
 the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSString:(NSString *)reason
                 withNSException:(NSException *)cause;

/*!
 @brief Constructs a <code>SQLNonTransientException</code> object
 with a given  <code>cause</code>.
 The <code>SQLState</code> is initialized
 to <code>null</code> and the vendor code is initialized to 0.
 The <code>reason</code>  is initialized to <code>null</code> if
 <code>cause==null</code> or to <code>cause.toString()</code> if
 <code>cause!=null</code>.
 <p>
 @param cause the underlying reason for this <code>SQLException</code> (which is saved for later retrieval by the <code>getCause()</code> method); may be null indicating
 the cause is non-existent or unknown.
 @since 1.6
 */
- (instancetype)initWithNSException:(NSException *)cause;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSqlSQLNonTransientException)

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_init(JavaSqlSQLNonTransientException *self);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_init();

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_(JavaSqlSQLNonTransientException *self, NSString *reason);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_(NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_initWithNSString_(NSString *reason);

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_initWithNSString_withNSString_(NSString *reason, NSString *SQLState);

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_(NSString *reason, NSString *SQLState, jint vendorCode);

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSException_(JavaSqlSQLNonTransientException *self, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSException_(NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_initWithNSException_(NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSException_(JavaSqlSQLNonTransientException *self, NSString *reason, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSException_(NSString *reason, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_initWithNSString_withNSException_(NSString *reason, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_withNSException_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *SQLState, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *SQLState, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withNSException_(NSString *reason, NSString *SQLState, NSException *cause);

FOUNDATION_EXPORT void JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_withNSException_(JavaSqlSQLNonTransientException *self, NSString *reason, NSString *SQLState, jint vendorCode, NSException *cause);

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *new_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *SQLState, jint vendorCode, NSException *cause) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSqlSQLNonTransientException *create_JavaSqlSQLNonTransientException_initWithNSString_withNSString_withInt_withNSException_(NSString *reason, NSString *SQLState, jint vendorCode, NSException *cause);

J2OBJC_TYPE_LITERAL_HEADER(JavaSqlSQLNonTransientException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSqlSQLNonTransientException")
