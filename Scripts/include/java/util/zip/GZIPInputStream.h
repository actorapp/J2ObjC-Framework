//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/GZIPInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipGZIPInputStream")
#ifdef RESTRICT_JavaUtilZipGZIPInputStream
#define INCLUDE_ALL_JavaUtilZipGZIPInputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipGZIPInputStream 1
#endif
#undef RESTRICT_JavaUtilZipGZIPInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipGZIPInputStream_) && (INCLUDE_ALL_JavaUtilZipGZIPInputStream || defined(INCLUDE_JavaUtilZipGZIPInputStream))
#define JavaUtilZipGZIPInputStream_

#define RESTRICT_JavaUtilZipInflaterInputStream 1
#define INCLUDE_JavaUtilZipInflaterInputStream 1
#include "java/util/zip/InflaterInputStream.h"

@class IOSByteArray;
@class JavaIoInputStream;
@class JavaUtilZipCRC32;

/*!
 @brief The <code>GZIPInputStream</code> class is used to read data stored in the GZIP
 format, reading and decompressing GZIP data from the underlying stream into
 its buffer.
 <h3>Example</h3>
 <p>Using <code>GZIPInputStream</code> is easier than <code>ZipInputStream</code>
 because GZIP is only for compression, and is not a container for multiple files.
 This code decompresses the data from a GZIP stream, similar to the <code>gunzip(1)</code> utility.
 @code

  InputStream is = ...
  GZIPInputStream zis = new GZIPInputStream(new BufferedInputStream(is));
  try {
     // Reading from 'zis' gets you the uncompressed bytes...
     processStream(zis);
  } finally {
     zis.close();
  }
  
@endcode
 <p>Note that this class ignores all remaining data at the end of the last
 GZIP member.
 */
@interface JavaUtilZipGZIPInputStream : JavaUtilZipInflaterInputStream {
 @public
  /*!
   @brief The checksum algorithm used when handling uncompressed data.
   */
  JavaUtilZipCRC32 *crc_;
  /*!
   @brief Indicates the end of the input stream.
   */
  jboolean eos_;
}

+ (jint)GZIP_MAGIC;

#pragma mark Public

/*!
 @brief Construct a <code>GZIPInputStream</code> to read from GZIP data from the
 underlying stream.
 @param is
 the <code>InputStream</code> to read data from.
 @throws IOException
 if an <code>IOException</code> occurs.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is;

/*!
 @brief Construct a <code>GZIPInputStream</code> to read from GZIP data from the
 underlying stream.
 Set the internal buffer size to <code>size</code>.
 @param is
 the <code>InputStream</code> to read data from.
 @param size
 the internal read buffer size.
 @throws IOException
 if an <code>IOException</code> occurs.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)is
                                  withInt:(jint)size;

/*!
 @brief Closes this stream and any underlying streams.
 */
- (void)close;

- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipGZIPInputStream)

J2OBJC_FIELD_SETTER(JavaUtilZipGZIPInputStream, crc_, JavaUtilZipCRC32 *)

/*!
 @brief The magic header for the GZIP format.
 */
inline jint JavaUtilZipGZIPInputStream_get_GZIP_MAGIC();
#define JavaUtilZipGZIPInputStream_GZIP_MAGIC 35615
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipGZIPInputStream, GZIP_MAGIC, jint)

FOUNDATION_EXPORT void JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaUtilZipGZIPInputStream *self, JavaIoInputStream *is);

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *new_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaIoInputStream *is) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *create_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_(JavaIoInputStream *is);

FOUNDATION_EXPORT void JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaUtilZipGZIPInputStream *self, JavaIoInputStream *is, jint size);

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *new_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *is, jint size) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipGZIPInputStream *create_JavaUtilZipGZIPInputStream_initWithJavaIoInputStream_withInt_(JavaIoInputStream *is, jint size);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipGZIPInputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipGZIPInputStream")
