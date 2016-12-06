//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/CharArrayReader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoCharArrayReader")
#ifdef RESTRICT_JavaIoCharArrayReader
#define INCLUDE_ALL_JavaIoCharArrayReader 0
#else
#define INCLUDE_ALL_JavaIoCharArrayReader 1
#endif
#undef RESTRICT_JavaIoCharArrayReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoCharArrayReader_) && (INCLUDE_ALL_JavaIoCharArrayReader || defined(INCLUDE_JavaIoCharArrayReader))
#define JavaIoCharArrayReader_

#define RESTRICT_JavaIoReader 1
#define INCLUDE_JavaIoReader 1
#include "../../java/io/Reader.h"

@class IOSCharArray;

/*!
 @brief This class implements a character buffer that can be used as a
 character-input stream.
 @author Herb Jellinek
 @since JDK1.1
 */
@interface JavaIoCharArrayReader : JavaIoReader {
 @public
  /*!
   @brief The character buffer.
   */
  IOSCharArray *buf_;
  /*!
   @brief The current buffer position.
   */
  jint pos_;
  /*!
   @brief The position of mark in buffer.
   */
  jint markedPos_;
  /*!
   @brief The index of the end of this buffer.
   There is not valid
 data at or beyond this index.
   */
  jint count_;
}

#pragma mark Public

/*!
 @brief Creates a CharArrayReader from the specified array of chars.
 @param buf       Input buffer (not copied)
 */
- (instancetype)initWithCharArray:(IOSCharArray *)buf;

/*!
 @brief Creates a CharArrayReader from the specified array of chars.
 <p> The resulting reader will start reading at the given
 <tt>offset</tt>.  The total number of <tt>char</tt> values that can be
 read from this reader will be either <tt>length</tt> or
 <tt>buf.length-offset</tt>, whichever is smaller.
 @throws IllegalArgumentException
 If <tt>offset</tt> is negative or greater than
 <tt>buf.length</tt>, or if <tt>length</tt> is negative, or if
 the sum of these two values is negative.
 @param buf       Input buffer (not copied)
 @param offset    Offset of the first char to read
 @param length    Number of chars to read
 */
- (instancetype)initWithCharArray:(IOSCharArray *)buf
                          withInt:(jint)offset
                          withInt:(jint)length;

/*!
 @brief Closes the stream and releases any system resources associated with
 it.
 Once the stream has been closed, further read(), ready(),
 mark(), reset(), or skip() invocations will throw an IOException.
 Closing a previously closed stream has no effect.
 */
- (void)close;

/*!
 @brief Marks the present position in the stream.
 Subsequent calls to reset()
 will reposition the stream to this point.
 @param readAheadLimit  Limit on the number of characters that may be
 read while still preserving the mark.  Because
 the stream's input comes from a character array,
 there is no actual limit; hence this argument is
 ignored.
 @exception IOException  If an I/O error occurs
 */
- (void)markWithInt:(jint)readAheadLimit;

/*!
 @brief Tells whether this stream supports the mark() operation, which it does.
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single character.
 @exception IOException  If an I/O error occurs
 */
- (jint)read;

/*!
 @brief Reads characters into a portion of an array.
 @param b  Destination buffer
 @param off  Offset at which to start storing characters
 @param len   Maximum number of characters to read
 @return The actual number of characters read, or -1 if
 the end of the stream has been reached
 @exception IOException  If an I/O error occurs
 */
- (jint)readWithCharArray:(IOSCharArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Tells whether this stream is ready to be read.
 Character-array readers
 are always ready to be read.
 @exception IOException  If an I/O error occurs
 */
- (jboolean)ready;

/*!
 @brief Resets the stream to the most recent mark, or to the beginning if it has
 never been marked.
 @exception IOException  If an I/O error occurs
 */
- (void)reset;

/*!
 @brief Skips characters.
 Returns the number of characters that were skipped.
 <p>The <code>n</code> parameter may be negative, even though the
 <code>skip</code> method of the <code>Reader</code> superclass throws
 an exception in this case. If <code>n</code> is negative, then
 this method does nothing and returns <code>0</code>.
 @param n The number of characters to skip
 @return The number of characters actually skipped
 @exception IOException If the stream is closed, or an I/O error occurs
 */
- (jlong)skipWithLong:(jlong)n;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoCharArrayReader)

J2OBJC_FIELD_SETTER(JavaIoCharArrayReader, buf_, IOSCharArray *)

FOUNDATION_EXPORT void JavaIoCharArrayReader_initWithCharArray_(JavaIoCharArrayReader *self, IOSCharArray *buf);

FOUNDATION_EXPORT JavaIoCharArrayReader *new_JavaIoCharArrayReader_initWithCharArray_(IOSCharArray *buf) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharArrayReader *create_JavaIoCharArrayReader_initWithCharArray_(IOSCharArray *buf);

FOUNDATION_EXPORT void JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(JavaIoCharArrayReader *self, IOSCharArray *buf, jint offset, jint length);

FOUNDATION_EXPORT JavaIoCharArrayReader *new_JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(IOSCharArray *buf, jint offset, jint length) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoCharArrayReader *create_JavaIoCharArrayReader_initWithCharArray_withInt_withInt_(IOSCharArray *buf, jint offset, jint length);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoCharArrayReader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoCharArrayReader")
