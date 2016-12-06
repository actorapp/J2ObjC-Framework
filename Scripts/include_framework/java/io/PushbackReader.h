//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/PushbackReader.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoPushbackReader")
#ifdef RESTRICT_JavaIoPushbackReader
#define INCLUDE_ALL_JavaIoPushbackReader 0
#else
#define INCLUDE_ALL_JavaIoPushbackReader 1
#endif
#undef RESTRICT_JavaIoPushbackReader

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoPushbackReader_) && (INCLUDE_ALL_JavaIoPushbackReader || defined(INCLUDE_JavaIoPushbackReader))
#define JavaIoPushbackReader_

#define RESTRICT_JavaIoFilterReader 1
#define INCLUDE_JavaIoFilterReader 1
#include "../../java/io/FilterReader.h"

@class IOSCharArray;
@class JavaIoReader;

/*!
 @brief A character-stream reader that allows characters to be pushed back into the
 stream.
 @author Mark Reinhold
 @since JDK1.1
 */
@interface JavaIoPushbackReader : JavaIoFilterReader

#pragma mark Public

/*!
 @brief Creates a new pushback reader with a one-character pushback buffer.
 @param inArg  The reader from which characters will be read
 */
- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg;

/*!
 @brief Creates a new pushback reader with a pushback buffer of the given size.
 @param inArg   The reader from which characters will be read
 @param size The size of the pushback buffer
 @exception IllegalArgumentException if size is <= 0
 */
- (instancetype)initWithJavaIoReader:(JavaIoReader *)inArg
                             withInt:(jint)size;

/*!
 @brief Closes the stream and releases any system resources associated with
 it.
 Once the stream has been closed, further read(),
 unread(), ready(), or skip() invocations will throw an IOException.
 Closing a previously closed stream has no effect.
 @exception IOException  If an I/O error occurs
 */
- (void)close;

/*!
 @brief Marks the present position in the stream.
 The <code>mark</code>
 for class <code>PushbackReader</code> always throws an exception.
 @exception IOException  Always, since mark is not supported
 */
- (void)markWithInt:(jint)readAheadLimit;

/*!
 @brief Tells whether this stream supports the mark() operation, which it does
 not.
 */
- (jboolean)markSupported;

/*!
 @brief Reads a single character.
 @return The character read, or -1 if the end of the stream has been
 reached
 @exception IOException  If an I/O error occurs
 */
- (jint)read;

/*!
 @brief Reads characters into a portion of an array.
 @param cbuf  Destination buffer
 @param off   Offset at which to start writing characters
 @param len   Maximum number of characters to read
 @return The number of characters read, or -1 if the end of the
 stream has been reached
 @exception IOException  If an I/O error occurs
 */
- (jint)readWithCharArray:(IOSCharArray *)cbuf
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Tells whether this stream is ready to be read.
 @exception IOException  If an I/O error occurs
 */
- (jboolean)ready;

/*!
 @brief Resets the stream.
 The <code>reset</code> method of
 <code>PushbackReader</code> always throws an exception.
 @exception IOException  Always, since reset is not supported
 */
- (void)reset;

/*!
 @brief Skips characters.
 This method will block until some characters are
 available, an I/O error occurs, or the end of the stream is reached.
 @param n  The number of characters to skip
 @return The number of characters actually skipped
 @exception IllegalArgumentException  If <code>n</code> is negative.
 @exception IOException  If an I/O error occurs
 */
- (jlong)skipWithLong:(jlong)n;

/*!
 @brief Pushes back an array of characters by copying it to the front of the
 pushback buffer.
 After this method returns, the next character to be
 read will have the value <code>cbuf[0]</code>, the character after that
 will have the value <code>cbuf[1]</code>, and so forth.
 @param cbuf  Character array to push back
 @exception IOException  If there is insufficient room in the pushback
 buffer, or if some other I/O error occurs
 */
- (void)unreadWithCharArray:(IOSCharArray *)cbuf;

/*!
 @brief Pushes back a portion of an array of characters by copying it to the
 front of the pushback buffer.
 After this method returns, the next
 character to be read will have the value <code>cbuf[off]</code>, the
 character after that will have the value <code>cbuf[off+1]</code>, and
 so forth.
 @param cbuf  Character array
 @param off   Offset of first character to push back
 @param len   Number of characters to push back
 @exception IOException  If there is insufficient room in the pushback
 buffer, or if some other I/O error occurs
 */
- (void)unreadWithCharArray:(IOSCharArray *)cbuf
                    withInt:(jint)off
                    withInt:(jint)len;

/*!
 @brief Pushes back a single character by copying it to the front of the
 pushback buffer.
 After this method returns, the next character to be read
 will have the value <code>(char)c</code>.
 @param c  The int value representing a character to be pushed back
 @exception IOException  If the pushback buffer is full,
 or if some other I/O error occurs
 */
- (void)unreadWithInt:(jint)c;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPushbackReader)

FOUNDATION_EXPORT void JavaIoPushbackReader_initWithJavaIoReader_withInt_(JavaIoPushbackReader *self, JavaIoReader *inArg, jint size);

FOUNDATION_EXPORT JavaIoPushbackReader *new_JavaIoPushbackReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPushbackReader *create_JavaIoPushbackReader_initWithJavaIoReader_withInt_(JavaIoReader *inArg, jint size);

FOUNDATION_EXPORT void JavaIoPushbackReader_initWithJavaIoReader_(JavaIoPushbackReader *self, JavaIoReader *inArg);

FOUNDATION_EXPORT JavaIoPushbackReader *new_JavaIoPushbackReader_initWithJavaIoReader_(JavaIoReader *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPushbackReader *create_JavaIoPushbackReader_initWithJavaIoReader_(JavaIoReader *inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPushbackReader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoPushbackReader")
