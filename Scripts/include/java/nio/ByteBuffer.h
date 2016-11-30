//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/ByteBuffer.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioByteBuffer")
#ifdef RESTRICT_JavaNioByteBuffer
#define INCLUDE_ALL_JavaNioByteBuffer 0
#else
#define INCLUDE_ALL_JavaNioByteBuffer 1
#endif
#undef RESTRICT_JavaNioByteBuffer

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioByteBuffer_) && (INCLUDE_ALL_JavaNioByteBuffer || defined(INCLUDE_JavaNioByteBuffer))
#define JavaNioByteBuffer_

#define RESTRICT_JavaNioBuffer 1
#define INCLUDE_JavaNioBuffer 1
#include "java/nio/Buffer.h"

#define RESTRICT_JavaLangComparable 1
#define INCLUDE_JavaLangComparable 1
#include "java/lang/Comparable.h"

@class IOSByteArray;
@class JavaNioByteOrder;
@class JavaNioCharBuffer;
@class JavaNioDoubleBuffer;
@class JavaNioFloatBuffer;
@class JavaNioIntBuffer;
@class JavaNioLongBuffer;
@class JavaNioShortBuffer;

/*!
 @brief A buffer for bytes.
 <p>
 A byte buffer can be created in either one of the following ways:
 <ul>
 <li><code>Allocate</code> a new byte array and create a buffer
 based on it;</li>
 <li><code>Allocate</code> a memory block and create a direct
 buffer based on it;</li>
 <li><code>Wrap</code> an existing byte array to create a new
 buffer.</li>
 </ul>
 */
@interface JavaNioByteBuffer : JavaNioBuffer < JavaLangComparable > {
 @public
  /*!
   @brief The byte order of this buffer, default is <code>BIG_ENDIAN</code>.
   */
  JavaNioByteOrder *order_;
}

#pragma mark Public

/*!
 @brief Creates a byte buffer based on a newly allocated byte array.
 @param capacity
 the capacity of the new buffer
 @return the created byte buffer.
 @throws IllegalArgumentException
 if <code>capacity < 0</code>.
 */
+ (JavaNioByteBuffer *)allocateWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Creates a direct byte buffer based on a newly allocated memory block.
 @param capacity
 the capacity of the new buffer
 @return the created byte buffer.
 @throws IllegalArgumentException
 if <code>capacity < 0</code>.
 */
+ (JavaNioByteBuffer *)allocateDirectWithInt:(jint)capacity OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Returns the byte array which this buffer is based on, if there is one.
 @return the byte array which this buffer is based on.
 @throws ReadOnlyBufferException
 if this buffer is based on a read-only array.
 @throws UnsupportedOperationException
 if this buffer is not based on an array.
 */
- (IOSByteArray *)array;

/*!
 @brief Returns the offset of the byte array which this buffer is based on, if
 there is one.
 <p>
 The offset is the index of the array which corresponds to the zero
 position of the buffer.
 @return the offset of the byte array which this buffer is based on.
 @throws ReadOnlyBufferException
 if this buffer is based on a read-only array.
 @throws UnsupportedOperationException
 if this buffer is not based on an array.
 */
- (jint)arrayOffset;

/*!
 @brief Returns a char buffer which is based on the remaining content of this
 byte buffer.
 <p>
 The new buffer's position is zero, its limit and capacity is the number
 of remaining bytes divided by two, and its mark is not set. The new
 buffer's read-only property and byte order are the same as this buffer's.
 The new buffer is direct if this byte buffer is direct.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioCharBuffer *)asCharBuffer;

/*!
 @brief Returns a double buffer which is based on the remaining content of this
 byte buffer.
 <p>
 The new buffer's position is zero, its limit and capacity is the number
 of remaining bytes divided by eight, and its mark is not set. The new
 buffer's read-only property and byte order are the same as this buffer's.
 The new buffer is direct if this byte buffer is direct.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioDoubleBuffer *)asDoubleBuffer;

/*!
 @brief Returns a float buffer which is based on the remaining content of this
 byte buffer.
 <p>
 The new buffer's position is zero, its limit and capacity is the number
 of remaining bytes divided by four, and its mark is not set. The new
 buffer's read-only property and byte order are the same as this buffer's.
 The new buffer is direct if this byte buffer is direct.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioFloatBuffer *)asFloatBuffer;

/*!
 @brief Returns a int buffer which is based on the remaining content of this byte
 buffer.
 <p>
 The new buffer's position is zero, its limit and capacity is the number
 of remaining bytes divided by four, and its mark is not set. The new
 buffer's read-only property and byte order are the same as this buffer's.
 The new buffer is direct if this byte buffer is direct.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioIntBuffer *)asIntBuffer;

/*!
 @brief Returns a long buffer which is based on the remaining content of this
 byte buffer.
 <p>
 The new buffer's position is zero, its limit and capacity is the number
 of remaining bytes divided by eight, and its mark is not set. The new
 buffer's read-only property and byte order are the same as this buffer's.
 The new buffer is direct if this byte buffer is direct.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioLongBuffer *)asLongBuffer;

/*!
 @brief Returns a read-only buffer that shares its content with this buffer.
 <p>
 The returned buffer is guaranteed to be a new instance, even if this
 buffer is read-only itself. The new buffer's position, limit, capacity
 and mark are the same as this buffer.
 <p>
 The new buffer shares its content with this buffer, which means this
 buffer's change of content will be visible to the new buffer. The two
 buffer's position, limit and mark are independent.
 @return a read-only version of this buffer.
 */
- (JavaNioByteBuffer *)asReadOnlyBuffer;

/*!
 @brief Returns a short buffer which is based on the remaining content of this
 byte buffer.
 <p>
 The new buffer's position is zero, its limit and capacity is the number
 of remaining bytes divided by two, and its mark is not set. The new
 buffer's read-only property and byte order are the same as this buffer's.
 The new buffer is direct if this byte buffer is direct.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioShortBuffer *)asShortBuffer;

/*!
 @brief Compacts this byte buffer.
 <p>
 The remaining bytes will be moved to the head of the
 buffer, starting from position zero. Then the position is set to
 <code>remaining()</code>; the limit is set to capacity; the mark is
 cleared.
 @return <code>this</code>
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)compact;

/*!
 @brief Compares the remaining bytes of this buffer to another byte buffer's
 remaining bytes.
 @param otherBuffer
 another byte buffer.
 @return a negative value if this is less than <code>other</code>; 0 if this
 equals to <code>other</code>; a positive value if this is greater
 than <code>other</code>.
 @throws ClassCastException
 if <code>other</code> is not a byte buffer.
 */
- (jint)compareToWithId:(JavaNioByteBuffer *)otherBuffer;

/*!
 @brief Returns a duplicated buffer that shares its content with this buffer.
 <p>
 The duplicated buffer's position, limit, capacity and mark are the same
 as this buffer's. The duplicated buffer's read-only property is the same
 as this buffer's.
 <p>Note that <i>in contrast to all non-<code>byte</code> buffers</i>,
 byte order is not preserved in the duplicate, and is instead set to
 big-endian.
 <p>The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioByteBuffer *)duplicate;

/*!
 @brief Checks whether this byte buffer is equal to another object.
 <p>
 If <code>other</code> is not a byte buffer then <code>false</code> is returned. Two
 byte buffers are equal if and only if their remaining bytes are exactly
 the same. Position, limit, capacity and mark are not considered.
 @param other
 the object to compare with this byte buffer.
 @return <code>true</code> if this byte buffer is equal to <code>other</code>,
 <code>false</code> otherwise.
 */
- (jboolean)isEqual:(id)other;

/*!
 @brief Returns the byte at the current position and increases the position by 1.
 @return the byte at the current position.
 @throws BufferUnderflowException
 if the position is equal or greater than limit.
 */
- (jbyte)get;

/*!
 @brief Reads bytes from the current position into the specified byte array and
 increases the position by the number of bytes read.
 <p>
 Calling this method has the same effect as
 <code>get(dst, 0, dst.length)</code>.
 @param dst
 the destination byte array.
 @return <code>this</code>
 @throws BufferUnderflowException
 if <code>dst.length</code> is greater than <code>remaining()</code>.
 */
- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst;

/*!
 @brief Reads bytes from the current position into the specified byte array,
 starting at the specified offset, and increases the position by the
 number of bytes read.
 @param dst
 the target byte array.
 @param dstOffset
 the offset of the byte array, must not be negative and
 not greater than <code>dst.length</code>.
 @param byteCount
 the number of bytes to read, must not be negative and not
 greater than <code>dst.length - dstOffset</code>
 @return <code>this</code>
 @throws IndexOutOfBoundsException if <code>dstOffset < 0 ||  byteCount < 0</code>
 @throws BufferUnderflowException if <code>byteCount > remaining()</code>
 */
- (JavaNioByteBuffer *)getWithByteArray:(IOSByteArray *)dst
                                withInt:(jint)dstOffset
                                withInt:(jint)byteCount;

/*!
 @brief Returns the byte at the specified index and does not change the position.
 @param index
 the index, must not be negative and less than limit.
 @return the byte at the specified index.
 @throws IndexOutOfBoundsException
 if index is invalid.
 */
- (jbyte)getWithInt:(jint)index;

/*!
 @brief Returns the char at the current position and increases the position by 2.
 <p>
 The 2 bytes starting at the current position are composed into a char
 according to the current byte order and returned.
 @return the char at the current position.
 @throws BufferUnderflowException
 if the position is greater than <code>limit - 2</code>.
 */
- (jchar)getChar;

/*!
 @brief Returns the char at the specified index.
 <p>
 The 2 bytes starting from the specified index are composed into a char
 according to the current byte order and returned. The position is not
 changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 2</code>.
 @return the char at the specified index.
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 */
- (jchar)getCharWithInt:(jint)index;

/*!
 @brief Returns the double at the current position and increases the position by
 8.
 <p>
 The 8 bytes starting from the current position are composed into a double
 according to the current byte order and returned.
 @return the double at the current position.
 @throws BufferUnderflowException
 if the position is greater than <code>limit - 8</code>.
 */
- (jdouble)getDouble;

/*!
 @brief Returns the double at the specified index.
 <p>
 The 8 bytes starting at the specified index are composed into a double
 according to the current byte order and returned. The position is not
 changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 8</code>.
 @return the double at the specified index.
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 */
- (jdouble)getDoubleWithInt:(jint)index;

/*!
 @brief Returns the float at the current position and increases the position by
 4.
 <p>
 The 4 bytes starting at the current position are composed into a float
 according to the current byte order and returned.
 @return the float at the current position.
 @throws BufferUnderflowException
 if the position is greater than <code>limit - 4</code>.
 */
- (jfloat)getFloat;

/*!
 @brief Returns the float at the specified index.
 <p>
 The 4 bytes starting at the specified index are composed into a float
 according to the current byte order and returned. The position is not
 changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 4</code>.
 @return the float at the specified index.
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 */
- (jfloat)getFloatWithInt:(jint)index;

/*!
 @brief Returns the int at the current position and increases the position by 4.
 <p>
 The 4 bytes starting at the current position are composed into a int
 according to the current byte order and returned.
 @return the int at the current position.
 @throws BufferUnderflowException
 if the position is greater than <code>limit - 4</code>.
 */
- (jint)getInt;

/*!
 @brief Returns the int at the specified index.
 <p>
 The 4 bytes starting at the specified index are composed into a int
 according to the current byte order and returned. The position is not
 changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 4</code>.
 @return the int at the specified index.
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 */
- (jint)getIntWithInt:(jint)index;

/*!
 @brief Returns the long at the current position and increases the position by 8.
 <p>
 The 8 bytes starting at the current position are composed into a long
 according to the current byte order and returned.
 @return the long at the current position.
 @throws BufferUnderflowException
 if the position is greater than <code>limit - 8</code>.
 */
- (jlong)getLong;

/*!
 @brief Returns the long at the specified index.
 <p>
 The 8 bytes starting at the specified index are composed into a long
 according to the current byte order and returned. The position is not
 changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 8</code>.
 @return the long at the specified index.
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 */
- (jlong)getLongWithInt:(jint)index;

/*!
 @brief Returns the short at the current position and increases the position by 2.
 <p>
 The 2 bytes starting at the current position are composed into a short
 according to the current byte order and returned.
 @return the short at the current position.
 @throws BufferUnderflowException
 if the position is greater than <code>limit - 2</code>.
 */
- (jshort)getShort;

/*!
 @brief Returns the short at the specified index.
 <p>
 The 2 bytes starting at the specified index are composed into a short
 according to the current byte order and returned. The position is not
 changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 2</code>.
 @return the short at the specified index.
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 */
- (jshort)getShortWithInt:(jint)index;

- (jboolean)hasArray;

/*!
 @brief Calculates this buffer's hash code from the remaining chars.
 The
 position, limit, capacity and mark don't affect the hash code.
 @return the hash code calculated from the remaining bytes.
 */
- (NSUInteger)hash;

/*!
 @brief Indicates whether this buffer is direct.
 @return <code>true</code> if this buffer is direct, <code>false</code> otherwise.
 */
- (jboolean)isDirect;

/*!
 @brief Indicates whether this buffer is still valid.
 @return <code>true</code> if this buffer is valid, <code>false</code> if the
 buffer was invalidated and should not be used anymore.
 */
- (jboolean)isValid;

/*!
 @brief Returns the byte order used by this buffer when converting bytes from/to
 other primitive types.
 <p>
 The default byte order of byte buffer is always
 <code>BIG_ENDIAN</code>
 @return the byte order used by this buffer when converting bytes from/to
 other primitive types.
 */
- (JavaNioByteOrder *)order;

/*!
 @brief Sets the byte order of this buffer.
 @param byteOrder
 the byte order to set. If <code>null</code> then the order
 will be <code>LITTLE_ENDIAN</code>.
 @return <code>this</code>
 - seealso: ByteOrder
 */
- (JavaNioByteBuffer *)orderWithJavaNioByteOrder:(JavaNioByteOrder *)byteOrder;

/*!
 @brief Writes the given byte to the current position and increases the position
 by 1.
 @param b
 the byte to write.
 @return <code>this</code>
 @throws BufferOverflowException
 if position is equal or greater than limit.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putWithByte:(jbyte)b;

/*!
 @brief Writes bytes in the given byte array to the current position and
 increases the position by the number of bytes written.
 <p>
 Calling this method has the same effect as
 <code>put(src, 0, src.length)</code>.
 @param src
 the source byte array.
 @return <code>this</code>
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>src.length</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src;

/*!
 @brief Writes bytes in the given byte array, starting from the specified offset,
 to the current position and increases the position by the number of bytes
 written.
 @param src
 the source byte array.
 @param srcOffset
 the offset of byte array, must not be negative and not greater
 than <code>src.length</code>.
 @param byteCount
 the number of bytes to write, must not be negative and not
 greater than <code>src.length - srcOffset</code>.
 @return <code>this</code>
 @throws BufferOverflowException
 if <code>remaining()</code> is less than <code>byteCount</code>.
 @throws IndexOutOfBoundsException
 if either <code>srcOffset</code> or <code>byteCount</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putWithByteArray:(IOSByteArray *)src
                                withInt:(jint)srcOffset
                                withInt:(jint)byteCount;

/*!
 @brief Writes all the remaining bytes of the <code>src</code> byte buffer to this
 buffer's current position, and increases both buffers' position by the
 number of bytes copied.
 @param src
 the source byte buffer.
 @return <code>this</code>
 @throws BufferOverflowException
 if <code>src.remaining()</code> is greater than this buffer's
 <code>remaining()</code>.
 @throws IllegalArgumentException
 if <code>src</code> is this buffer.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putWithJavaNioByteBuffer:(JavaNioByteBuffer *)src;

/*!
 @brief Write a byte to the specified index of this buffer without changing the
 position.
 @param index
 the index, must not be negative and less than the limit.
 @param b
 the byte to write.
 @return <code>this</code>
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putWithInt:(jint)index
                         withByte:(jbyte)b;

/*!
 @brief Writes the given char to the current position and increases the position
 by 2.
 <p>
 The char is converted to bytes using the current byte order.
 @param value
 the char to write.
 @return <code>this</code>
 @throws BufferOverflowException
 if position is greater than <code>limit - 2</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putCharWithChar:(jchar)value;

/*!
 @brief Writes the given char to the specified index of this buffer.
 <p>
 The char is converted to bytes using the current byte order. The position
 is not changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 2</code>.
 @param value
 the char to write.
 @return <code>this</code>
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putCharWithInt:(jint)index
                             withChar:(jchar)value;

/*!
 @brief Writes the given double to the current position and increases the position
 by 8.
 <p>
 The double is converted to bytes using the current byte order.
 @param value
 the double to write.
 @return <code>this</code>
 @throws BufferOverflowException
 if position is greater than <code>limit - 8</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putDoubleWithDouble:(jdouble)value;

/*!
 @brief Writes the given double to the specified index of this buffer.
 <p>
 The double is converted to bytes using the current byte order. The
 position is not changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 8</code>.
 @param value
 the double to write.
 @return <code>this</code>
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putDoubleWithInt:(jint)index
                             withDouble:(jdouble)value;

/*!
 @brief Writes the given float to the current position and increases the position
 by 4.
 <p>
 The float is converted to bytes using the current byte order.
 @param value
 the float to write.
 @return <code>this</code>
 @throws BufferOverflowException
 if position is greater than <code>limit - 4</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putFloatWithFloat:(jfloat)value;

/*!
 @brief Writes the given float to the specified index of this buffer.
 <p>
 The float is converted to bytes using the current byte order. The
 position is not changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 4</code>.
 @param value
 the float to write.
 @return <code>this</code>
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putFloatWithInt:(jint)index
                             withFloat:(jfloat)value;

/*!
 @brief Writes the given int to the current position and increases the position by
 4.
 <p>
 The int is converted to bytes using the current byte order.
 @param value
 the int to write.
 @return <code>this</code>
 @throws BufferOverflowException
 if position is greater than <code>limit - 4</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putIntWithInt:(jint)value;

/*!
 @brief Writes the given int to the specified index of this buffer.
 <p>
 The int is converted to bytes using the current byte order. The position
 is not changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 4</code>.
 @param value
 the int to write.
 @return <code>this</code>
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putIntWithInt:(jint)index
                             withInt:(jint)value;

/*!
 @brief Writes the given long to the specified index of this buffer.
 <p>
 The long is converted to bytes using the current byte order. The position
 is not changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 8</code>.
 @param value
 the long to write.
 @return <code>this</code>
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putLongWithInt:(jint)index
                             withLong:(jlong)value;

/*!
 @brief Writes the given long to the current position and increases the position
 by 8.
 <p>
 The long is converted to bytes using the current byte order.
 @param value
 the long to write.
 @return <code>this</code>
 @throws BufferOverflowException
 if position is greater than <code>limit - 8</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putLongWithLong:(jlong)value;

/*!
 @brief Writes the given short to the specified index of this buffer.
 <p>
 The short is converted to bytes using the current byte order. The
 position is not changed.
 @param index
 the index, must not be negative and equal or less than
 <code>limit - 2</code>.
 @param value
 the short to write.
 @return <code>this</code>
 @throws IndexOutOfBoundsException
 if <code>index</code> is invalid.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putShortWithInt:(jint)index
                             withShort:(jshort)value;

/*!
 @brief Writes the given short to the current position and increases the position
 by 2.
 <p>
 The short is converted to bytes using the current byte order.
 @param value
 the short to write.
 @return <code>this</code>
 @throws BufferOverflowException
 if position is greater than <code>limit - 2</code>.
 @throws ReadOnlyBufferException
 if no changes may be made to the contents of this buffer.
 */
- (JavaNioByteBuffer *)putShortWithShort:(jshort)value;

/*!
 @brief Returns a sliced buffer that shares its content with this buffer.
 <p>
 The sliced buffer's capacity will be this buffer's
 <code>remaining()</code>, and it's zero position will correspond to
 this buffer's current position. The new buffer's position will be 0,
 limit will be its capacity, and its mark is cleared. The new buffer's
 read-only property and byte order are the same as this buffer's.
 <p>
 The new buffer shares its content with this buffer, which means either
 buffer's change of content will be visible to the other. The two buffers'
 position, limit and mark are independent.
 */
- (JavaNioByteBuffer *)slice;

/*!
 @brief Creates a new byte buffer by wrapping the given byte array.
 <p>
 Calling this method has the same effect as
 <code>wrap(array, 0, array.length)</code>.
 @param array
 the byte array which the new buffer will be based on
 @return the created byte buffer.
 */
+ (JavaNioByteBuffer *)wrapWithByteArray:(IOSByteArray *)array;

/*!
 @brief Creates a new byte buffer by wrapping the given byte array.
 <p>
 The new buffer's position will be <code>start</code>, limit will be
 <code>start + byteCount</code>, capacity will be the length of the array.
 @param array
 the byte array which the new buffer will be based on.
 @param start
 the start index, must not be negative and not greater than
 <code>array.length</code>.
 @param byteCount
 the length, must not be negative and not greater than
 <code>array.length - start</code>.
 @return the created byte buffer.
 @throws IndexOutOfBoundsException
 if either <code>start</code> or <code>byteCount</code> is invalid.
 */
+ (JavaNioByteBuffer *)wrapWithByteArray:(IOSByteArray *)array
                                 withInt:(jint)start
                                 withInt:(jint)byteCount;

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)capacity
                   withLong:(jlong)effectiveDirectAddress;

/*!
 @brief Child class implements this method to realize <code>array()</code>.
 - seealso: #array()
 */
- (IOSByteArray *)protectedArray;

/*!
 @brief Child class implements this method to realize <code>arrayOffset()</code>.
 - seealso: #arrayOffset()
 */
- (jint)protectedArrayOffset;

/*!
 @brief Child class implements this method to realize <code>hasArray()</code>.
 - seealso: #hasArray()
 */
- (jboolean)protectedHasArray;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioByteBuffer)

J2OBJC_FIELD_SETTER(JavaNioByteBuffer, order_, JavaNioByteOrder *)

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_allocateWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_allocateDirectWithInt_(jint capacity);

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_wrapWithByteArray_(IOSByteArray *array);

FOUNDATION_EXPORT JavaNioByteBuffer *JavaNioByteBuffer_wrapWithByteArray_withInt_withInt_(IOSByteArray *array, jint start, jint byteCount);

FOUNDATION_EXPORT void JavaNioByteBuffer_initWithInt_withLong_(JavaNioByteBuffer *self, jint capacity, jlong effectiveDirectAddress);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioByteBuffer)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioByteBuffer")
