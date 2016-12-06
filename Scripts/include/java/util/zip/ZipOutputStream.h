//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/ZipOutputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipZipOutputStream")
#ifdef RESTRICT_JavaUtilZipZipOutputStream
#define INCLUDE_ALL_JavaUtilZipZipOutputStream 0
#else
#define INCLUDE_ALL_JavaUtilZipZipOutputStream 1
#endif
#undef RESTRICT_JavaUtilZipZipOutputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipZipOutputStream_) && (INCLUDE_ALL_JavaUtilZipZipOutputStream || defined(INCLUDE_JavaUtilZipZipOutputStream))
#define JavaUtilZipZipOutputStream_

#define RESTRICT_JavaUtilZipDeflaterOutputStream 1
#define INCLUDE_JavaUtilZipDeflaterOutputStream 1
#include "java/util/zip/DeflaterOutputStream.h"

#define RESTRICT_JavaUtilZipZipConstants 1
#define INCLUDE_JavaUtilZipZipConstants 1
#include "java/util/zip/ZipConstants.h"

@class IOSByteArray;
@class JavaIoOutputStream;
@class JavaUtilZipZipEntry;

/*!
 @brief Used to write (compress) data into zip files.
 <p><code>ZipOutputStream</code> is used to write <code>ZipEntry</code>s to the underlying
 stream. Output from <code>ZipOutputStream</code> can be read using <code>ZipFile</code>
 or <code>ZipInputStream</code>.
 <p>While <code>DeflaterOutputStream</code> can write compressed zip file
 entries, this extension can write uncompressed entries as well.
 Use <code>ZipEntry.setMethod</code> or <code>setMethod</code> with the <code>ZipEntry.STORED</code> flag.
 <h3>Example</h3>
 <p>Using <code>ZipOutputStream</code> is a little more complicated than <code>GZIPOutputStream</code>
 because zip files are containers that can contain multiple files. This code creates a zip
 file containing several files, similar to the <code>zip(1)</code> utility.
 @code

  OutputStream os = ...
  ZipOutputStream zos = new ZipOutputStream(new BufferedOutputStream(os));
  try {
     for (int i = 0; i < fileCount; ++i) {
         String filename = ...
         byte[] bytes = ...
         ZipEntry entry = new ZipEntry(filename);
         zos.putNextEntry(entry);
         zos.write(bytes);
         zos.closeEntry();
     }
  } finally {
     zos.close();
  }
  
@endcode
 */
@interface JavaUtilZipZipOutputStream : JavaUtilZipDeflaterOutputStream < JavaUtilZipZipConstants >

+ (jint)DEFLATED;

+ (jint)STORED;

#pragma mark Public

/*!
 @brief Constructs a new <code>ZipOutputStream</code> that writes a zip file to the given
 <code>OutputStream</code>.
 <p>UTF-8 will be used to encode the file comment, entry names and comments.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os;

/*!
  for testing only.
 */
- (instancetype)initWithJavaIoOutputStream:(JavaIoOutputStream *)os
                               withBoolean:(jboolean)forceZip64;

/*!
 @brief Closes the current <code>ZipEntry</code>, if any, and the underlying output
 stream.
 If the stream is already closed this method does nothing.
 @throws IOException
 If an error occurs closing the stream.
 */
- (void)close;

/*!
 @brief Closes the current <code>ZipEntry</code>.
 Any entry terminal data is written
 to the underlying stream.
 @throws IOException
 If an error occurs closing the entry.
 */
- (void)closeEntry;

/*!
 @brief Indicates that all entries have been written to the stream.
 Any terminal
 information is written to the underlying stream.
 @throws IOException
 if an error occurs while terminating the stream.
 */
- (void)finish;

/*!
 @brief Writes entry information to the underlying stream.
 Data associated with
 the entry can then be written using <code>write()</code>. After data is
 written <code>closeEntry()</code> must be called to complete the writing of
 the entry to the underlying stream.
 @param ze
 the <code>ZipEntry</code> to store.
 @throws IOException
 If an error occurs storing the entry.
 - seealso: #write
 */
- (void)putNextEntryWithJavaUtilZipZipEntry:(JavaUtilZipZipEntry *)ze;

/*!
 @brief Sets the comment associated with the file being written.
 See <code>ZipFile.getComment</code>.
 @throws IllegalArgumentException if the comment is >= 64 Ki encoded bytes.
 */
- (void)setCommentWithNSString:(NSString *)comment;

/*!
 @brief Sets the <a href="Deflater.html#compression_level">compression level</a> to be used
 for writing entry data.
 */
- (void)setLevelWithInt:(jint)level;

/*!
 @brief Sets the default compression method to be used when a <code>ZipEntry</code> doesn't
 explicitly specify a method.
 See <code>ZipEntry.setMethod</code> for more details.
 */
- (void)setMethodWithInt:(jint)method;

/*!
 @brief Writes data for the current entry to the underlying stream.
 @throws IOException
 If an error occurs writing to the stream
 */
- (void)writeWithByteArray:(IOSByteArray *)buffer
                   withInt:(jint)offset
                   withInt:(jint)byteCount;

#pragma mark Package-Private

+ (jint)writeIntAsUint16WithJavaIoOutputStream:(JavaIoOutputStream *)os
                                       withInt:(jint)i;

+ (jlong)writeLongAsUint32WithJavaIoOutputStream:(JavaIoOutputStream *)os
                                        withLong:(jlong)i;

+ (jlong)writeLongAsUint64WithJavaIoOutputStream:(JavaIoOutputStream *)os
                                        withLong:(jlong)i;

@end

J2OBJC_STATIC_INIT(JavaUtilZipZipOutputStream)

/*!
 @brief Indicates deflated entries.
 */
inline jint JavaUtilZipZipOutputStream_get_DEFLATED();
#define JavaUtilZipZipOutputStream_DEFLATED 8
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipOutputStream, DEFLATED, jint)

/*!
 @brief Indicates uncompressed entries.
 */
inline jint JavaUtilZipZipOutputStream_get_STORED();
#define JavaUtilZipZipOutputStream_STORED 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilZipZipOutputStream, STORED, jint)

FOUNDATION_EXPORT void JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_(JavaUtilZipZipOutputStream *self, JavaIoOutputStream *os);

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *new_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *os) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *create_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_(JavaIoOutputStream *os);

FOUNDATION_EXPORT void JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaUtilZipZipOutputStream *self, JavaIoOutputStream *os, jboolean forceZip64);

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *new_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *os, jboolean forceZip64) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipZipOutputStream *create_JavaUtilZipZipOutputStream_initWithJavaIoOutputStream_withBoolean_(JavaIoOutputStream *os, jboolean forceZip64);

FOUNDATION_EXPORT jlong JavaUtilZipZipOutputStream_writeLongAsUint32WithJavaIoOutputStream_withLong_(JavaIoOutputStream *os, jlong i);

FOUNDATION_EXPORT jlong JavaUtilZipZipOutputStream_writeLongAsUint64WithJavaIoOutputStream_withLong_(JavaIoOutputStream *os, jlong i);

FOUNDATION_EXPORT jint JavaUtilZipZipOutputStream_writeIntAsUint16WithJavaIoOutputStream_withInt_(JavaIoOutputStream *os, jint i);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipZipOutputStream)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipZipOutputStream")
