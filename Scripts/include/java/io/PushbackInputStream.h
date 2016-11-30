//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/PushbackInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoPushbackInputStream")
#ifdef RESTRICT_JavaIoPushbackInputStream
#define INCLUDE_ALL_JavaIoPushbackInputStream 0
#else
#define INCLUDE_ALL_JavaIoPushbackInputStream 1
#endif
#undef RESTRICT_JavaIoPushbackInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoPushbackInputStream_) && (INCLUDE_ALL_JavaIoPushbackInputStream || defined(INCLUDE_JavaIoPushbackInputStream))
#define JavaIoPushbackInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;

/*!
 @brief A <code>PushbackInputStream</code> adds
 functionality to another input stream, namely
 the  ability to "push back" or "unread"
 one byte.
 This is useful in situations where
 it is  convenient for a fragment of code
 to read an indefinite number of data bytes
 that  are delimited by a particular byte
 value; after reading the terminating byte,
 the  code fragment can "unread" it, so that
 the next read operation on the input stream
 will reread the byte that was pushed back.
 For example, bytes representing the  characters
 constituting an identifier might be terminated
 by a byte representing an  operator character;
 a method whose job is to read just an identifier
 can read until it  sees the operator and
 then push the operator back to be re-read.
 @author David Connelly
 @author Jonathan Payne
 @since JDK1.0
 */
@interface JavaIoPushbackInputStream : JavaIoFilterInputStream {
 @public
  /*!
   @brief The pushback buffer.
   @since JDK1.1
   */
  IOSByteArray *buf_;
  /*!
   @brief The position within the pushback buffer from which the next byte will
 be read.
   When the buffer is empty, <code>pos</code> is equal to
 <code>buf.length</code>; when the buffer is full, <code>pos</code> is
 equal to zero.
   @since JDK1.1
   */
  jint pos_;
}

#pragma mark Public

/*!
 @brief Creates a <code>PushbackInputStream</code>
 and saves its  argument, the input stream
 <code>in</code>, for later use.
 Initially,
 there is no pushed-back byte  (the field
 <code>pushBack</code> is initialized to
 <code>-1</code>).
 @param inArg   the input stream from which bytes will be read.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Creates a <code>PushbackInputStream</code>
 with a pushback buffer of the specified <code>size</code>,
 and saves its  argument, the input stream
 <code>in</code>, for later use.
 Initially,
 there is no pushed-back byte  (the field
 <code>pushBack</code> is initialized to
 <code>-1</code>).
 @param inArg    the input stream from which bytes will be read.
 @param size  the size of the pushback buffer.
 @exception IllegalArgumentException if size is <= 0
 @since JDK1.1
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                                  withInt:(jint)size;

/*!
 @brief Returns an estimate of the number of bytes that can be read (or
 skipped over) from this input stream without blocking by the next
 invocation of a method for this input stream.
 The next invocation might be
 the same thread or another thread.  A single read or skip of this
 many bytes will not block, but may read or skip fewer bytes.
 <p> The method returns the sum of the number of bytes that have been
 pushed back and the value returned by <code>available</code>
 .
 @return the number of bytes that can be read (or skipped over) from
 the input stream without blocking.
 @exception IOException  if this input stream has been closed by
 invoking its <code>close()</code> method,
 or an I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 - seealso: java.io.InputStream#available()
 */
- (jint)available;

/*!
 @brief Closes this input stream and releases any system resources
 associated with the stream.
 Once the stream has been closed, further read(), unread(),
 available(), reset(), or skip() invocations will throw an IOException.
 Closing a previously closed stream has no effect.
 @exception IOException  if an I/O error occurs.
 */
- (void)close;

/*!
 @brief Marks the current position in this input stream.
 <p> The <code>mark</code> method of <code>PushbackInputStream</code>
 does nothing.
 @param readlimit   the maximum limit of bytes that can be read before
 the mark position becomes invalid.
 - seealso: java.io.InputStream#reset()
 */
- (void)markWithInt:(jint)readlimit;

/*!
 @brief Tests if this input stream supports the <code>mark</code> and
 <code>reset</code> methods, which it does not.
 @return <code>false</code>, since this class does not support the
 <code>mark</code> and <code>reset</code> methods.
 - seealso: java.io.InputStream#mark(int)
 - seealso: java.io.InputStream#reset()
 */
- (jboolean)markSupported;

/*!
 @brief Reads the next byte of data from this input stream.
 The value
 byte is returned as an <code>int</code> in the range
 <code>0</code> to <code>255</code>. If no byte is available
 because the end of the stream has been reached, the value
 <code>-1</code> is returned. This method blocks until input data
 is available, the end of the stream is detected, or an exception
 is thrown.
 <p> This method returns the most recently pushed-back byte, if there is
 one, and otherwise calls the <code>read</code> method of its underlying
 input stream and returns whatever value that method returns.
 @return the next byte of data, or <code>-1</code> if the end of the
 stream has been reached.
 @exception IOException  if this input stream has been closed by
 invoking its <code>close()</code> method,
 or an I/O error occurs.
 - seealso: java.io.InputStream#read()
 */
- (jint)read;

/*!
 @brief Reads up to <code>len</code> bytes of data from this input stream into
 an array of bytes.
 This method first reads any pushed-back bytes; after
 that, if fewer than <code>len</code> bytes have been read then it
 reads from the underlying input stream. If <code>len</code> is not zero, the method
 blocks until at least 1 byte of input is available; otherwise, no
 bytes are read and <code>0</code> is returned.
 @param b     the buffer into which the data is read.
 @param off   the start offset in the destination array <code>b</code>
 @param len   the maximum number of bytes read.
 @return the total number of bytes read into the buffer, or
 <code>-1</code> if there is no more data because the end of
 the stream has been reached.
 @exception NullPointerException If <code>b</code> is <code>null</code>.
 @exception IndexOutOfBoundsException If <code>off</code> is negative,
 <code>len</code> is negative, or <code>len</code> is greater than
 <code>b.length - off</code>
 @exception IOException  if this input stream has been closed by
 invoking its <code>close()</code> method,
 or an I/O error occurs.
 - seealso: java.io.InputStream#read(byte[],int,int)
 */
- (jint)readWithByteArray:(IOSByteArray *)b
                  withInt:(jint)off
                  withInt:(jint)len;

/*!
 @brief Repositions this stream to the position at the time the
 <code>mark</code> method was last called on this input stream.
 <p> The method <code>reset</code> for class
 <code>PushbackInputStream</code> does nothing except throw an
 <code>IOException</code>.
 @exception IOException  if this method is invoked.
 - seealso: java.io.InputStream#mark(int)
 - seealso: java.io.IOException
 */
- (void)reset;

/*!
 @brief Skips over and discards <code>n</code> bytes of data from this
 input stream.
 The <code>skip</code> method may, for a variety of
 reasons, end up skipping over some smaller number of bytes,
 possibly zero.  If <code>n</code> is negative, no bytes are skipped.
 <p> The <code>skip</code> method of <code>PushbackInputStream</code>
 first skips over the bytes in the pushback buffer, if any.  It then
 calls the <code>skip</code> method of the underlying input stream if
 more bytes need to be skipped.  The actual number of bytes skipped
 is returned.
 @param n
 @exception IOException  if the stream does not support seek,
 or the stream has been closed by
 invoking its <code>close()</code> method,
 or an I/O error occurs.
 - seealso: java.io.FilterInputStream#in
 - seealso: java.io.InputStream#skip(long n)
 @since 1.2
 */
- (jlong)skipWithLong:(jlong)n;

/*!
 @brief Pushes back an array of bytes by copying it to the front of the
 pushback buffer.
 After this method returns, the next byte to be read
 will have the value <code>b[0]</code>, the byte after that will have the
 value <code>b[1]</code>, and so forth.
 @param b the byte array to push back
 @exception IOException If there is not enough room in the pushback
 buffer for the specified number of bytes,
 or this input stream has been closed by
 invoking its <code>close()</code> method.
 @since JDK1.1
 */
- (void)unreadWithByteArray:(IOSByteArray *)b;

/*!
 @brief Pushes back a portion of an array of bytes by copying it to the front
 of the pushback buffer.
 After this method returns, the next byte to be
 read will have the value <code>b[off]</code>, the byte after that will
 have the value <code>b[off+1]</code>, and so forth.
 @param b the byte array to push back.
 @param off the start offset of the data.
 @param len the number of bytes to push back.
 @exception IOException If there is not enough room in the pushback
 buffer for the specified number of bytes,
 or this input stream has been closed by
 invoking its <code>close()</code> method.
 @since JDK1.1
 */
- (void)unreadWithByteArray:(IOSByteArray *)b
                    withInt:(jint)off
                    withInt:(jint)len;

/*!
 @brief Pushes back a byte by copying it to the front of the pushback buffer.
 After this method returns, the next byte to be read will have the value
 <code>(byte)b</code>.
 @param b   the <code>int</code> value whose low-order
 byte is to be pushed back.
 @exception IOException If there is not enough room in the pushback
 buffer for the byte, or this input stream has been closed by
 invoking its <code>close()</code> method.
 */
- (void)unreadWithInt:(jint)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoPushbackInputStream)

J2OBJC_FIELD_SETTER(JavaIoPushbackInputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaIoPushbackInputStream_initWithJavaIoInputStream_withInt_(JavaIoPushbackInputStream *self, JavaIoInputStream *inArg, jint size);

FOUNDATION_EXPORT JavaIoPushbackInputStream *new_JavaIoPushbackInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPushbackInputStream *create_JavaIoPushbackInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *inArg, jint size);

FOUNDATION_EXPORT void JavaIoPushbackInputStream_initWithJavaIoInputStream_(JavaIoPushbackInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaIoPushbackInputStream *new_JavaIoPushbackInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoPushbackInputStream *create_JavaIoPushbackInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoPushbackInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoPushbackInputStream")