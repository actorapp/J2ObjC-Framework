//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/UTFDataFormatException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoUTFDataFormatException")
#ifdef RESTRICT_JavaIoUTFDataFormatException
#define INCLUDE_ALL_JavaIoUTFDataFormatException 0
#else
#define INCLUDE_ALL_JavaIoUTFDataFormatException 1
#endif
#undef RESTRICT_JavaIoUTFDataFormatException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoUTFDataFormatException_) && (INCLUDE_ALL_JavaIoUTFDataFormatException || defined(INCLUDE_JavaIoUTFDataFormatException))
#define JavaIoUTFDataFormatException_

#define RESTRICT_JavaIoIOException 1
#define INCLUDE_JavaIoIOException 1
#include "java/io/IOException.h"

/*!
 @brief Signals that a malformed string in
 <a href="DataInput.html#modified-utf-8">modified UTF-8</a>
 format has been read in a data
 input stream or by any class that implements the data input
 interface.
 See the
 <a href="DataInput.html#modified-utf-8"><code>DataInput</code></a>
 class description for the format in
 which modified UTF-8 strings are read and written.
 @author Frank Yellin
 - seealso: java.io.DataInput
 - seealso: java.io.DataInputStream#readUTF(java.io.DataInput)
 - seealso: java.io.IOException
 @since JDK1.0
 */
@interface JavaIoUTFDataFormatException : JavaIoIOException

#pragma mark Public

/*!
 @brief Constructs a <code>UTFDataFormatException</code> with
 <code>null</code> as its error detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a <code>UTFDataFormatException</code> with the
 specified detail message.
 The string <code>s</code> can be
 retrieved later by the
 <code><code>java.lang.Throwable.getMessage</code></code>
 method of class <code>java.lang.Throwable</code>.
 @param s   the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoUTFDataFormatException)

FOUNDATION_EXPORT void JavaIoUTFDataFormatException_init(JavaIoUTFDataFormatException *self);

FOUNDATION_EXPORT JavaIoUTFDataFormatException *new_JavaIoUTFDataFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoUTFDataFormatException *create_JavaIoUTFDataFormatException_init();

FOUNDATION_EXPORT void JavaIoUTFDataFormatException_initWithNSString_(JavaIoUTFDataFormatException *self, NSString *s);

FOUNDATION_EXPORT JavaIoUTFDataFormatException *new_JavaIoUTFDataFormatException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoUTFDataFormatException *create_JavaIoUTFDataFormatException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoUTFDataFormatException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoUTFDataFormatException")
