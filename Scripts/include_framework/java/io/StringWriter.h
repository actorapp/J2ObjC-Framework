//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/StringWriter.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoStringWriter")
#ifdef RESTRICT_JavaIoStringWriter
#define INCLUDE_ALL_JavaIoStringWriter 0
#else
#define INCLUDE_ALL_JavaIoStringWriter 1
#endif
#undef RESTRICT_JavaIoStringWriter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoStringWriter_) && (INCLUDE_ALL_JavaIoStringWriter || defined(INCLUDE_JavaIoStringWriter))
#define JavaIoStringWriter_

#define RESTRICT_JavaIoWriter 1
#define INCLUDE_JavaIoWriter 1
#include "../../java/io/Writer.h"

@class IOSCharArray;
@class JavaLangStringBuffer;
@protocol JavaLangCharSequence;

/*!
 @brief A character stream that collects its output in a string buffer, which can
 then be used to construct a string.
 <p>
 Closing a <tt>StringWriter</tt> has no effect. The methods in this class
 can be called after the stream has been closed without generating an
 <tt>IOException</tt>.
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoStringWriter : JavaIoWriter

#pragma mark Public

/*!
 @brief Create a new string writer using the default initial string-buffer
 size.
 */
- (instancetype)init;

/*!
 @brief Create a new string writer using the specified initial string-buffer
 size.
 @param initialSize
 The number of <tt>char</tt> values that will fit into this buffer
 before it is automatically expanded
 @throws IllegalArgumentException
 If <tt>initialSize</tt> is negative
 */
- (instancetype)initWithInt:(jint)initialSize;

/*!
 @brief Appends the specified character to this writer.
 <p> An invocation of this method of the form <tt>out.append(c)</tt>
 behaves in exactly the same way as the invocation
 @code

     
@endcode
 @param c
 The 16-bit character to append
 @return This writer
 @since 1.5
 */
- (JavaIoStringWriter *)appendWithChar:(jchar)c;

/*!
 @brief Appends the specified character sequence to this writer.
 <p> An invocation of this method of the form <tt>out.append(csq)</tt>
 behaves in exactly the same way as the invocation
 @code

     
@endcode
 <p> Depending on the specification of <tt>toString</tt> for the
 character sequence <tt>csq</tt>, the entire sequence may not be
 appended. For instance, invoking the <tt>toString</tt> method of a
 character buffer will return a subsequence whose content depends upon
 the buffer's position and limit.
 @param csq
 The character sequence to append.  If <tt>csq</tt> is
 <tt>null</tt>, then the four characters <tt>"null"</tt> are
 appended to this writer.
 @return This writer
 @since 1.5
 */
- (JavaIoStringWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq;

/*!
 @brief Appends a subsequence of the specified character sequence to this writer.
 <p> An invocation of this method of the form <tt>out.append(csq, start,
 end)</tt> when <tt>csq</tt> is not <tt>null</tt>, behaves in
 exactly the same way as the invocation
 @code

     
@endcode
 @param csq
 The character sequence from which a subsequence will be
 appended.  If <tt>csq</tt> is <tt>null</tt>, then characters
 will be appended as if <tt>csq</tt> contained the four
 characters <tt>"null"</tt>.
 @param start
 The index of the first character in the subsequence
 @param end
 The index of the character following the last character in the
 subsequence
 @return This writer
 @throws IndexOutOfBoundsException
 If <tt>start</tt> or <tt>end</tt> are negative, <tt>start</tt>
 is greater than <tt>end</tt>, or <tt>end</tt> is greater than
 <tt>csq.length()</tt>
 @since 1.5
 */
- (JavaIoStringWriter *)appendWithJavaLangCharSequence:(id<JavaLangCharSequence>)csq
                                               withInt:(jint)start
                                               withInt:(jint)end;

/*!
 @brief Closing a <tt>StringWriter</tt> has no effect.
 The methods in this
 class can be called after the stream has been closed without generating
 an <tt>IOException</tt>.
 */
- (void)close;

/*!
 @brief Flush the stream.
 */
- (void)flush;

/*!
 @brief Return the string buffer itself.
 @return StringBuffer holding the current buffer value.
 */
- (JavaLangStringBuffer *)getBuffer;

/*!
 @brief Return the buffer's current value as a string.
 */
- (NSString *)description;

/*!
 @brief Write a portion of an array of characters.
 @param cbuf  Array of characters
 @param off   Offset from which to start writing characters
 @param len   Number of characters to write
 */
- (void)writeWithCharArray:(IOSCharArray *)cbuf
                   withInt:(jint)off
                   withInt:(jint)len;

/*!
 @brief Write a single character.
 */
- (void)writeWithInt:(jint)c;

/*!
 @brief Write a string.
 */
- (void)writeWithNSString:(NSString *)str;

/*!
 @brief Write a portion of a string.
 @param str  String to be written
 @param off  Offset from which to start writing characters
 @param len  Number of characters to write
 */
- (void)writeWithNSString:(NSString *)str
                  withInt:(jint)off
                  withInt:(jint)len;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoStringWriter)

FOUNDATION_EXPORT void JavaIoStringWriter_init(JavaIoStringWriter *self);

FOUNDATION_EXPORT JavaIoStringWriter *new_JavaIoStringWriter_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStringWriter *create_JavaIoStringWriter_init();

FOUNDATION_EXPORT void JavaIoStringWriter_initWithInt_(JavaIoStringWriter *self, jint initialSize);

FOUNDATION_EXPORT JavaIoStringWriter *new_JavaIoStringWriter_initWithInt_(jint initialSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoStringWriter *create_JavaIoStringWriter_initWithInt_(jint initialSize);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoStringWriter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoStringWriter")
