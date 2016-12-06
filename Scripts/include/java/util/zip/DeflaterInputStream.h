//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/DeflaterInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipDeflaterInputStream")
#ifdef RESTRICT_JavaUtilZipDeflaterInputStream
#define INCLUDE_ALL_JavaUtilZipDeflaterInputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipDeflaterInputStream 1
#endif
#undef RESTRICT_JavaUtilZipDeflaterInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipDeflaterInputStream_) && (INCLUDE_ALL_JavaUtilZipDeflaterInputStream || defined(INCLUDE_JavaUtilZipDeflaterInputStream))
#define JavaUtilZipDeflaterInputStream_

#define RESTRICT_JavaIoFilterInputStream 1
#define INCLUDE_JavaIoFilterInputStream 1
#include "java/io/FilterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipDeflater;

/*!
 @brief An <code>InputStream</code> filter to compress data.
 Callers read
 compressed data in the "deflate" format from the uncompressed
 underlying stream.
 @since 1.6
 */
@interface JavaUtilZipDeflaterInputStream : JavaIoFilterInputStream {
 @public
  JavaUtilZipDeflater *def_;
  IOSByteArray *buf_;
}

#pragma mark Public

/*!
 @brief Constructs a <code>DeflaterInputStream</code> with a new <code>Deflater</code> and an
 implementation-defined default internal buffer size.
 <code>in</code> is a source of
 uncompressed data, and this stream will be a source of compressed data.
 @param inArg the source <code>InputStream</code>
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Constructs a <code>DeflaterInputStream</code> with the given <code>Deflater</code> and an
 implementation-defined default internal buffer size.
 <code>in</code> is a source of
 uncompressed data, and this stream will be a source of compressed data.
 @param inArg the source <code>InputStream</code>
 @param deflater the <code>Deflater</code> to be used for compression
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                  withJavaUtilZipDeflater:(JavaUtilZipDeflater *)deflater;

/*!
 @brief Constructs a <code>DeflaterInputStream</code> with the given <code>Deflater</code> and
 given internal buffer size.
 <code>in</code> is a source of
 uncompressed data, and this stream will be a source of compressed data.
 @param inArg the source <code>InputStream</code>
 @param deflater the <code>Deflater</code> to be used for compression
 @param bufferSize the length in bytes of the internal buffer
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)inArg
                  withJavaUtilZipDeflater:(JavaUtilZipDeflater *)deflater
                                  withInt:(jint)bufferSize;

/*!
 @brief Returns 0 when when this stream has exhausted its input; and 1 otherwise.
 A result of 1 does not guarantee that further bytes can be returned,
 with or without blocking.
 <p>Although consistent with the RI, this behavior is inconsistent with
 <code>InputStream.available()</code>, and violates the <a
 href="http://en.wikipedia.org/wiki/Liskov_substitution_principle">Liskov
 Substitution Principle</a>. This method should not be used.
 @return 0 if no further bytes are available. Otherwise returns 1,
 which suggests (but does not guarantee) that additional bytes are
 available.
 @throws IOException if this stream is closed or an error occurs
 */
- (jint)available;

/*!
 @brief Closes the underlying input stream and discards any remaining uncompressed
 data.
 */
- (void)close;

/*!
 @brief This operation is not supported and does nothing.
 */
- (void)markWithInt:(jint)limit;

/*!
 @brief Returns false because <code>DeflaterInputStream</code> does not support
 <code>mark</code>/<code>reset</code>.
 */
- (jboolean)markSupported;

/*!
 @brief Reads a byte from the compressed input stream.
 The result will be a byte of compressed
 data corresponding to an uncompressed byte or bytes read from the underlying stream.
 @return the byte or -1 if the end of the stream has been reached.
 */
- (jint)read;

/*!
 @brief Reads up to <code>byteCount</code> bytes of compressed data into a byte buffer.
 The result will be bytes of compressed
 data corresponding to an uncompressed byte or bytes read from the underlying stream.
 Returns the number of bytes read or -1 if the end of the compressed input
 stream has been reached.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief This operation is not supported and throws <code>IOException</code>.
 */
- (void)reset;

/*!
 @brief 
 <p>Note: if <code>n > Integer.MAX_VALUE</code>, this stream will only attempt to
 skip <code>Integer.MAX_VALUE</code> bytes.
 */
- (jlong)skipWithLong:(jlong)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDeflaterInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterInputStream, def_, JavaUtilZipDeflater *)
J2OBJC_FIELD_SETTER(JavaUtilZipDeflaterInputStream, buf_, IOSByteArray *)

FOUNDATION_EXPORT void JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_(JavaUtilZipDeflaterInputStream *self, JavaIoInputStream *inArg);

FOUNDATION_EXPORT JavaUtilZipDeflaterInputStream *new_JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterInputStream *create_JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_(JavaIoInputStream *inArg);

FOUNDATION_EXPORT void JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipDeflater_(JavaUtilZipDeflaterInputStream *self, JavaIoInputStream *inArg, JavaUtilZipDeflater *deflater);

FOUNDATION_EXPORT JavaUtilZipDeflaterInputStream *new_JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipDeflater_(JavaIoInputStream *inArg, JavaUtilZipDeflater *deflater) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterInputStream *create_JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipDeflater_(JavaIoInputStream *inArg, JavaUtilZipDeflater *deflater);

FOUNDATION_EXPORT void JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipDeflater_withInt_(JavaUtilZipDeflaterInputStream *self, JavaIoInputStream *inArg, JavaUtilZipDeflater *deflater, jint bufferSize);

FOUNDATION_EXPORT JavaUtilZipDeflaterInputStream *new_JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipDeflater_withInt_(JavaIoInputStream *inArg, JavaUtilZipDeflater *deflater, jint bufferSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDeflaterInputStream *create_JavaUtilZipDeflaterInputStream_initWithJavaIoInputStream_withJavaUtilZipDeflater_withInt_(JavaIoInputStream *inArg, JavaUtilZipDeflater *deflater, jint bufferSize);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDeflaterInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipDeflaterInputStream")
