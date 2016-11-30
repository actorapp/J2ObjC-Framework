//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/DataInput.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoDataInput")
#ifdef RESTRICT_JavaIoDataInput
#define INCLUDE_ALL_JavaIoDataInput 0
#else
#define INCLUDE_ALL_JavaIoDataInput 1
#endif
#undef RESTRICT_JavaIoDataInput

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoDataInput_) && (INCLUDE_ALL_JavaIoDataInput || defined(INCLUDE_JavaIoDataInput))
#define JavaIoDataInput_

@class IOSByteArray;

/*!
 @brief Defines an interface for classes that are able to read big-endian typed data from some
 source.
 Typically, this data has been written by a class which implements
 <code>DataOutput</code>. Types that can be read include byte, 16-bit short, 32-bit
 int, 32-bit float, 64-bit long, 64-bit double, byte strings, and MUTF-8
 strings.
 <h3>MUTF-8 (Modified UTF-8) Encoding</h3>
 <p>
 When encoding strings as UTF, implementations of <code>DataInput</code> and
 <code>DataOutput</code> use a slightly modified form of UTF-8, hereafter referred
 to as MUTF-8. This form is identical to standard UTF-8, except:
 <ul>
 <li>Only the one-, two-, and three-byte encodings are used.</li>
 <li>Code points in the range <code>U+10000</code> &hellip;
 <code>U+10ffff</code> are encoded as a surrogate pair, each of which is
 represented as a three-byte encoded value.</li>
 <li>The code point <code>U+0000</code> is encoded in two-byte form.</li>
 </ul>
 <p>
 Please refer to <a href="http://unicode.org">The Unicode Standard</a> for
 further information about character encoding. MUTF-8 is actually closer to
 the (relatively less well-known) encoding <a
 href="http://www.unicode.org/reports/tr26/">CESU-8</a> than to UTF-8 per se.
 - seealso: DataInputStream
 - seealso: RandomAccessFile
 */
@protocol JavaIoDataInput < JavaObject >

/*!
 @brief Reads a boolean.
 @return the next boolean value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeBoolean(boolean)
 */
- (jboolean)readBoolean;

/*!
 @brief Reads an 8-bit byte value.
 @return the next byte value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeByte(int)
 */
- (jbyte)readByte;

/*!
 @brief Reads a big-endian 16-bit character value.
 @return the next char value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeChar(int)
 */
- (jchar)readChar;

/*!
 @brief Reads a big-endian 64-bit double value.
 @return the next double value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeDouble(double)
 */
- (jdouble)readDouble;

/*!
 @brief Reads a big-endian 32-bit float value.
 @return the next float value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeFloat(float)
 */
- (jfloat)readFloat;

/*!
 @brief Equivalent to <code>readFully(dst, 0, dst.length);</code>.
 */
- (void)readFullyWithByteArray:(IOSByteArray *)dst;

/*!
 @brief Reads <code>byteCount</code> bytes from this stream and stores them in the byte
 array <code>dst</code> starting at <code>offset</code>.
 If <code>byteCount</code> is zero, then this
 method returns without reading any bytes. Otherwise, this method blocks until
 <code>byteCount</code> bytes have been read. If insufficient bytes are available,
 <code>EOFException</code> is thrown. If an I/O error occurs, <code>IOException</code> is
 thrown. When an exception is thrown, some bytes may have been consumed from the stream
 and written into the array.
 @param dst
 the byte array into which the data is read.
 @param offset
 the offset in <code>dst</code> at which to store the bytes.
 @param byteCount
 the number of bytes to read.
 @throws EOFException
 if the end of the source stream is reached before enough
 bytes have been read.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>byteCount < 0</code>, or
 <code>offset + byteCount > dst.length</code>.
 @throws IOException
 if a problem occurs while reading from this stream.
 @throws NullPointerException
 if <code>dst</code> is null.
 */
- (void)readFullyWithByteArray:(IOSByteArray *)dst
                       withInt:(jint)offset
                       withInt:(jint)byteCount;

/*!
 @brief Reads a big-endian 32-bit integer value.
 @return the next int value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeInt(int)
 */
- (jint)readInt;

/*!
 @brief Returns a string containing the next line of text available from this
 stream.
 A line is made of zero or more characters followed by <code>'\n'</code>
 , <code>'\r'</code>, <code>"\r\n"</code> or the end of the stream. The string
 does not include the newline sequence.
 @return the contents of the line or null if no characters have been read
 before the end of the stream.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 */
- (NSString *)readLine;

/*!
 @brief Reads a big-endian 64-bit long value.
 @return the next long value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeLong(long)
 */
- (jlong)readLong;

/*!
 @brief Reads a big-endian 16-bit short value.
 @return the next short value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeShort(int)
 */
- (jshort)readShort;

/*!
 @brief Reads an unsigned 8-bit byte value and returns it as an int.
 @return the next unsigned byte value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeByte(int)
 */
- (jint)readUnsignedByte;

/*!
 @brief Reads a big-endian 16-bit unsigned short value and returns it as an int.
 @return the next unsigned short value.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeShort(int)
 */
- (jint)readUnsignedShort;

/*!
 @brief Reads a string encoded with <code>modified UTF-8</code>.
 @return the next string encoded with <code>modified UTF-8</code>.
 @throws EOFException if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an I/O error occurs while reading.
 - seealso: DataOutput#writeUTF(java.lang.String)
 */
- (NSString *)readUTF;

/*!
 @brief Skips <code>count</code> number of bytes.
 This method will not throw an
 <code>EOFException</code> if the end of the input is reached before
 <code>count</code> bytes where skipped.
 @param count
 the number of bytes to skip.
 @return the number of bytes actually skipped.
 @throws IOException
 if a problem occurs during skipping.
 */
- (jint)skipBytesWithInt:(jint)count;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoDataInput)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoDataInput)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoDataInput")