//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/net/URISyntaxException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetURISyntaxException")
#ifdef RESTRICT_JavaNetURISyntaxException
#define INCLUDE_ALL_JavaNetURISyntaxException 0
#else
#define INCLUDE_ALL_JavaNetURISyntaxException 1
#endif
#undef RESTRICT_JavaNetURISyntaxException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetURISyntaxException_) && (INCLUDE_ALL_JavaNetURISyntaxException || defined(INCLUDE_JavaNetURISyntaxException))
#define JavaNetURISyntaxException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../java/lang/Exception.h"

/*!
 @brief Checked exception thrown to indicate that a string could not be parsed as a
 URI reference.
 @author Mark Reinhold
 - seealso: URI
 @since 1.4
 */
@interface JavaNetURISyntaxException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs an instance from the given input string and reason.
 The
 resulting object will have an error index of <code>-1</code>.
 @param input   The input string
 @param reason  A string explaining why the input could not be parsed
 @throws NullPointerException
 If either the input or reason strings are <code>null</code>
 */
- (instancetype)initWithNSString:(NSString *)input
                    withNSString:(NSString *)reason;

/*!
 @brief Constructs an instance from the given input string, reason, and error
 index.
 @param input   The input string
 @param reason  A string explaining why the input could not be parsed
 @param index   The index at which the parse error occurred,
 or <code>-1</code> if the index is not known
 @throws NullPointerException
 If either the input or reason strings are <code>null</code>
 @throws IllegalArgumentException
 If the error index is less than <code>-1</code>
 */
- (instancetype)initWithNSString:(NSString *)input
                    withNSString:(NSString *)reason
                         withInt:(jint)index;

/*!
 @brief Returns an index into the input string of the position at which the
 parse error occurred, or <code>-1</code> if this position is not known.
 @return The error index
 */
- (jint)getIndex;

/*!
 @brief Returns the input string.
 @return The input string
 */
- (NSString *)getInput;

/*!
 @brief Returns a string describing the parse error.
 The resulting string
 consists of the reason string followed by a colon character
 (<code>':'</code>), a space, and the input string.  If the error index is
 defined then the string <code>" at index "</code> followed by the index, in
 decimal, is inserted after the reason string and before the colon
 character.
 @return A string describing the parse error
 */
- (NSString *)getMessage;

/*!
 @brief Returns a string explaining why the input string could not be parsed.
 @return The reason string
 */
- (NSString *)getReason;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNetURISyntaxException)

FOUNDATION_EXPORT void JavaNetURISyntaxException_initWithNSString_withNSString_withInt_(JavaNetURISyntaxException *self, NSString *input, NSString *reason, jint index);

FOUNDATION_EXPORT JavaNetURISyntaxException *new_JavaNetURISyntaxException_initWithNSString_withNSString_withInt_(NSString *input, NSString *reason, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURISyntaxException *create_JavaNetURISyntaxException_initWithNSString_withNSString_withInt_(NSString *input, NSString *reason, jint index);

FOUNDATION_EXPORT void JavaNetURISyntaxException_initWithNSString_withNSString_(JavaNetURISyntaxException *self, NSString *input, NSString *reason);

FOUNDATION_EXPORT JavaNetURISyntaxException *new_JavaNetURISyntaxException_initWithNSString_withNSString_(NSString *input, NSString *reason) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetURISyntaxException *create_JavaNetURISyntaxException_initWithNSString_withNSString_(NSString *input, NSString *reason);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetURISyntaxException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetURISyntaxException")
