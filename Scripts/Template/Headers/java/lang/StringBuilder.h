//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/StringBuilder.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangStringBuilder")
#ifdef RESTRICT_JavaLangStringBuilder
#define INCLUDE_ALL_JavaLangStringBuilder 0
#else
#define INCLUDE_ALL_JavaLangStringBuilder 1
#endif
#undef RESTRICT_JavaLangStringBuilder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangStringBuilder_) && (INCLUDE_ALL_JavaLangStringBuilder || defined(INCLUDE_JavaLangStringBuilder))
#define JavaLangStringBuilder_

#define RESTRICT_JavaLangAbstractStringBuilder 1
#define INCLUDE_JavaLangAbstractStringBuilder 1
#include "../../java/lang/AbstractStringBuilder.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../java/io/Serializable.h"

@class IOSCharArray;
@class JavaLangStringBuffer;
@protocol JavaLangCharSequence;

/*!
 @brief A modifiable <code>sequence of characters</code> for use in creating
 strings.
 This class is intended as a direct replacement of
 <code>StringBuffer</code> for non-concurrent use; unlike <code>StringBuffer</code> this
 class is not synchronized.
 <p>For particularly complex string-building needs, consider <code>java.util.Formatter</code>.
 <p>The majority of the modification methods on this class return <code>this</code>
  so that method calls can be chained together. For example:
 <code>new StringBuilder("a").append("b").append("c").toString()</code>.
 - seealso: CharSequence
 - seealso: Appendable
 - seealso: StringBuffer
 - seealso: String
 - seealso: String#format
 @since 1.5
 */
@interface JavaLangStringBuilder : JavaLangAbstractStringBuilder < JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs an instance with an initial capacity of <code>16</code>.
 - seealso: #capacity()
 */
- (instancetype)init;

/*!
 @brief Constructs an instance that's initialized with the contents of the
 specified <code>CharSequence</code>.
 The capacity of the new builder will be
 the length of the <code>CharSequence</code> plus 16.
 @param seq
 the <code>CharSequence</code> to copy into the builder.
 @throws NullPointerException
 if <code>seq</code> is <code>null</code>.
 */
- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)seq;

/*!
 @brief Constructs an instance with the specified capacity.
 @param capacity
 the initial capacity to use.
 @throws NegativeArraySizeException
 if the specified <code>capacity</code> is negative.
 - seealso: #capacity()
 */
- (instancetype)initWithInt:(jint)capacity;

/*!
 @brief Constructs an instance that's initialized with the contents of the
 specified <code>String</code>.
 The capacity of the new builder will be the
 length of the <code>String</code> plus 16.
 @param str
 the <code>String</code> to copy into the builder.
 @throws NullPointerException
 if <code>str</code> is <code>null</code>.
 */
- (instancetype)initWithNSString:(NSString *)str;

/*!
 @brief Appends the string representation of the specified <code>boolean</code> value.
 The <code>boolean</code> value is converted to a String according to the rule
 defined by <code>String.valueOf(boolean)</code>.
 @param b
 the <code>boolean</code> value to append.
 @return this builder.
 - seealso: String#valueOf(boolean)
 */
- (JavaLangStringBuilder *)appendWithBoolean:(jboolean)b;

/*!
 @brief Appends the string representation of the specified <code>char</code> value.
 The <code>char</code> value is converted to a string according to the rule
 defined by <code>String.valueOf(char)</code>.
 @param c
 the <code>char</code> value to append.
 @return this builder.
 - seealso: String#valueOf(char)
 */
- (JavaLangStringBuilder *)appendWithChar:(jchar)c;

/*!
 @brief Appends the string representation of the specified <code>char[]</code>.
 The <code>char[]</code> is converted to a string according to the rule
 defined by <code>String.valueOf(char[])</code>.
 @param chars
 the <code>char[]</code> to append..
 @return this builder.
 - seealso: String#valueOf(char[])
 */
- (JavaLangStringBuilder *)appendWithCharArray:(IOSCharArray *)chars;

/*!
 @brief Appends the string representation of the specified subset of the <code>char[]</code>
 .
 The <code>char[]</code> value is converted to a String according to
 the rule defined by <code>String.valueOf(char[],int,int)</code>.
 @param str
 the <code>char[]</code> to append.
 @param offset
 the inclusive offset index.
 @param len
 the number of characters.
 @return this builder.
 @throws ArrayIndexOutOfBoundsException
 if <code>offset</code> and <code>len</code> do not specify a valid
 subsequence.
 - seealso: String#valueOf(char[],int,int)
 */
- (JavaLangStringBuilder *)appendWithCharArray:(IOSCharArray *)str
                                       withInt:(jint)offset
                                       withInt:(jint)len;

/*!
 @brief Appends the string representation of the specified <code>CharSequence</code>.
 If the <code>CharSequence</code> is <code>null</code>, then the string <code>"null"</code>
  is appended.
 @param csq
 the <code>CharSequence</code> to append.
 @return this builder.
 */
- (JavaLangStringBuilder *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends the string representation of the specified subsequence of the
 <code>CharSequence</code>.
 If the <code>CharSequence</code> is <code>null</code>, then
 the string <code>"null"</code> is used to extract the subsequence from.
 @param csq
 the <code>CharSequence</code> to append.
 @param start
 the beginning index.
 @param end
 the ending index.
 @return this builder.
 @throws IndexOutOfBoundsException
 if <code>start</code> or <code>end</code> are negative, <code>start</code>
 is greater than <code>end</code> or <code>end</code> is greater than
 the length of <code>csq</code>.
 */
- (JavaLangStringBuilder *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                                  withInt:(jint)start
                                                  withInt:(jint)end;

/*!
 @brief Appends the string representation of the specified <code>double</code> value.
 The <code>double</code> value is converted to a string according to the rule
 defined by <code>String.valueOf(double)</code>.
 @param d
 the <code>double</code> value to append.
 @return this builder.
 - seealso: String#valueOf(double)
 */
- (JavaLangStringBuilder *)appendWithDouble:(jdouble)d;

/*!
 @brief Appends the string representation of the specified <code>float</code> value.
 The <code>float</code> value is converted to a string according to the rule
 defined by <code>String.valueOf(float)</code>.
 @param f
 the <code>float</code> value to append.
 @return this builder.
 - seealso: String#valueOf(float)
 */
- (JavaLangStringBuilder *)appendWithFloat:(jfloat)f;

/*!
 @brief Appends the string representation of the specified <code>int</code> value.
 The
 <code>int</code> value is converted to a string according to the rule defined
 by <code>String.valueOf(int)</code>.
 @param i
 the <code>int</code> value to append.
 @return this builder.
 - seealso: String#valueOf(int)
 */
- (JavaLangStringBuilder *)appendWithInt:(jint)i;

/*!
 @brief Appends the string representation of the specified <code>long</code> value.
 The <code>long</code> value is converted to a string according to the rule
 defined by <code>String.valueOf(long)</code>.
 @param l
 the <code>long</code> value.
 @return this builder.
 - seealso: String#valueOf(long)
 */
- (JavaLangStringBuilder *)appendWithLong:(jlong)l;

/*!
 @brief Appends the string representation of the specified <code>Object</code>.
 The <code>Object</code> value is converted to a string according to the rule
 defined by <code>String.valueOf(Object)</code>.
 @param obj
 the <code>Object</code> to append.
 @return this builder.
 - seealso: String#valueOf(Object)
 */
- (JavaLangStringBuilder *)appendWithId:(id)obj;

/*!
 @brief Appends the contents of the specified string.
 If the string is <code>null</code>
 , then the string <code>"null"</code> is appended.
 @param str
 the string to append.
 @return this builder.
 */
- (JavaLangStringBuilder *)appendWithNSString:(NSString *)str;

/*!
 @brief Appends the contents of the specified <code>StringBuffer</code>.
 If the
 StringBuffer is <code>null</code>, then the string <code>"null"</code> is
 appended.
 @param sb
 the <code>StringBuffer</code> to append.
 @return this builder.
 */
- (JavaLangStringBuilder *)appendWithJavaLangStringBuffer:(JavaLangStringBuffer *)sb;

/*!
 @brief Appends the encoded Unicode code point.
 The code point is converted to a
 <code>char[]</code> as defined by <code>Character.toChars(int)</code>.
 @param codePoint
 the Unicode code point to encode and append.
 @return this builder.
 - seealso: Character#toChars(int)
 */
- (JavaLangStringBuilder *)appendCodePointWithInt:(jint)codePoint;

/*!
 @brief Deletes a sequence of characters specified by <code>start</code> and <code>end</code>
 .
 Shifts any remaining characters to the left.
 @param start
 the inclusive start index.
 @param end
 the exclusive end index.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>start</code> is less than zero, greater than the current
 length or greater than <code>end</code>.
 */
- (JavaLangStringBuilder *)delete__WithInt:(jint)start
                                   withInt:(jint)end;

/*!
 @brief Deletes the character at the specified index. shifts any remaining
 characters to the left.
 @param index
 the index of the character to delete.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>index</code> is less than zero or is greater than or
 equal to the current length.
 */
- (JavaLangStringBuilder *)deleteCharAtWithInt:(jint)index;

/*!
 @brief Inserts the string representation of the specified <code>boolean</code> value
 at the specified <code>offset</code>.
 The <code>boolean</code> value is converted
 to a string according to the rule defined by
 <code>String.valueOf(boolean)</code>.
 @param offset
 the index to insert at.
 @param b
 the <code>boolean</code> value to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length</code>.
 - seealso: String#valueOf(boolean)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                             withBoolean:(jboolean)b;

/*!
 @brief Inserts the string representation of the specified <code>char</code> value at
 the specified <code>offset</code>.
 The <code>char</code> value is converted to a
 string according to the rule defined by <code>String.valueOf(char)</code>.
 @param offset
 the index to insert at.
 @param c
 the <code>char</code> value to insert.
 @return this builder.
 @throws IndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 - seealso: String#valueOf(char)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                                withChar:(jchar)c;

/*!
 @brief Inserts the string representation of the specified <code>char[]</code> at the
 specified <code>offset</code>.
 The <code>char[]</code> value is converted to a
 String according to the rule defined by <code>String.valueOf(char[])</code>.
 @param offset
 the index to insert at.
 @param ch
 the <code>char[]</code> to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 - seealso: String#valueOf(char[])
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                           withCharArray:(IOSCharArray *)ch;

/*!
 @brief Inserts the string representation of the specified subsequence of the
 <code>char[]</code> at the specified <code>offset</code>.
 The <code>char[]</code> value
 is converted to a String according to the rule defined by
 <code>String.valueOf(char[],int,int)</code>.
 @param offset
 the index to insert at.
 @param str
 the <code>char[]</code> to insert.
 @param strOffset
 the inclusive index.
 @param strLen
 the number of characters.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>, or <code>strOffset</code> and <code>strLen</code> do
 not specify a valid subsequence.
 - seealso: String#valueOf(char[],int,int)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                           withCharArray:(IOSCharArray *)str
                                 withInt:(jint)strOffset
                                 withInt:(jint)strLen;

/*!
 @brief Inserts the string representation of the specified <code>CharSequence</code>
 at the specified <code>offset</code>.
 The <code>CharSequence</code> is converted
 to a String as defined by <code>CharSequence.toString()</code>. If <code>s</code>
 is <code>null</code>, then the String <code>"null"</code> is inserted.
 @param offset
 the index to insert at.
 @param s
 the <code>CharSequence</code> to insert.
 @return this builder.
 @throws IndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 - seealso: CharSequence#toString()
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                withJavaLangCharSequence:(id<JavaLangCharSequence>)s;

/*!
 @brief Inserts the string representation of the specified subsequence of the
 <code>CharSequence</code> at the specified <code>offset</code>.
 The <code>CharSequence</code>
  is converted to a String as defined by
 <code>CharSequence.subSequence(int,int)</code>. If the <code>CharSequence</code>
 is <code>null</code>, then the string <code>"null"</code> is used to determine the
 subsequence.
 @param offset
 the index to insert at.
 @param s
 the <code>CharSequence</code> to insert.
 @param start
 the start of the subsequence of the character sequence.
 @param end
 the end of the subsequence of the character sequence.
 @return this builder.
 @throws IndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>, or <code>start</code> and <code>end</code> do not
 specify a valid subsequence.
 - seealso: CharSequence#subSequence(int,int)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                withJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                 withInt:(jint)start
                                 withInt:(jint)end;

/*!
 @brief Inserts the string representation of the specified <code>double</code> value
 at the specified <code>offset</code>.
 The <code>double</code> value is converted
 to a String according to the rule defined by
 <code>String.valueOf(double)</code>.
 @param offset
 the index to insert at.
 @param d
 the <code>double</code> value to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 - seealso: String#valueOf(double)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                              withDouble:(jdouble)d;

/*!
 @brief Inserts the string representation of the specified <code>float</code> value at
 the specified <code>offset</code>.
 The <code>float</code> value is converted to a
 string according to the rule defined by <code>String.valueOf(float)</code>.
 @param offset
 the index to insert at.
 @param f
 the <code>float</code> value to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 - seealso: String#valueOf(float)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                               withFloat:(jfloat)f;

/*!
 @brief Inserts the string representation of the specified <code>int</code> value at
 the specified <code>offset</code>.
 The <code>int</code> value is converted to a
 String according to the rule defined by <code>String.valueOf(int)</code>.
 @param offset
 the index to insert at.
 @param i
 the <code>int</code> value to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 - seealso: String#valueOf(int)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                                 withInt:(jint)i;

/*!
 @brief Inserts the string representation of the specified <code>long</code> value at
 the specified <code>offset</code>.
 The <code>long</code> value is converted to a
 String according to the rule defined by <code>String.valueOf(long)</code>.
 @param offset
 the index to insert at.
 @param l
 the <code>long</code> value to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 {code length()}.
 - seealso: String#valueOf(long)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                                withLong:(jlong)l;

/*!
 @brief Inserts the string representation of the specified <code>Object</code> at the
 specified <code>offset</code>.
 The <code>Object</code> value is converted to a
 String according to the rule defined by <code>String.valueOf(Object)</code>.
 @param offset
 the index to insert at.
 @param obj
 the <code>Object</code> to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 - seealso: String#valueOf(Object)
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                                  withId:(id)obj;

/*!
 @brief Inserts the specified string at the specified <code>offset</code>.
 If the
 specified string is null, then the String <code>"null"</code> is inserted.
 @param offset
 the index to insert at.
 @param str
 the <code>String</code> to insert.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>offset</code> is negative or greater than the current
 <code>length()</code>.
 */
- (JavaLangStringBuilder *)insertWithInt:(jint)offset
                            withNSString:(NSString *)str;

- (jint)length;

/*!
 @brief Replaces the specified subsequence in this builder with the specified
 string.
 @param start
 the inclusive begin index.
 @param end
 the exclusive end index.
 @param string
 the replacement string.
 @return this builder.
 @throws StringIndexOutOfBoundsException
 if <code>start</code> is negative, greater than the current
 <code>length()</code> or greater than <code>end</code>.
 @throws NullPointerException
 if <code>str</code> is <code>null</code>.
 */
- (JavaLangStringBuilder *)replaceWithInt:(jint)start
                                  withInt:(jint)end
                             withNSString:(NSString *)string;

/*!
 @brief Reverses the order of characters in this builder.
 @return this buffer.
 */
- (JavaLangStringBuilder *)reverse;

- (id<JavaLangCharSequence>)subSequenceFrom:(jint)start
                                         to:(jint)end;

/*!
 @brief Returns the contents of this builder.
 @return the string representation of the data in this builder.
 */
- (NSString *)description;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangStringBuilder)

FOUNDATION_EXPORT void JavaLangStringBuilder_init(JavaLangStringBuilder *self);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_init();

FOUNDATION_EXPORT void JavaLangStringBuilder_initWithInt_(JavaLangStringBuilder *self, jint capacity);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_initWithInt_(jint capacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_initWithInt_(jint capacity);

FOUNDATION_EXPORT void JavaLangStringBuilder_initWithJavaLangCharSequence_(JavaLangStringBuilder *self, id<JavaLangCharSequence> seq);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_initWithJavaLangCharSequence_(id<JavaLangCharSequence> seq);

FOUNDATION_EXPORT void JavaLangStringBuilder_initWithNSString_(JavaLangStringBuilder *self, NSString *str);

FOUNDATION_EXPORT JavaLangStringBuilder *new_JavaLangStringBuilder_initWithNSString_(NSString *str) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangStringBuilder *create_JavaLangStringBuilder_initWithNSString_(NSString *str);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangStringBuilder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangStringBuilder")
