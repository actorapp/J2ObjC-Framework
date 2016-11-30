//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/Flushable.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoFlushable")
#ifdef RESTRICT_JavaIoFlushable
#define INCLUDE_ALL_JavaIoFlushable 0
#else
#define INCLUDE_ALL_JavaIoFlushable 1
#endif
#undef RESTRICT_JavaIoFlushable

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoFlushable_) && (INCLUDE_ALL_JavaIoFlushable || defined(INCLUDE_JavaIoFlushable))
#define JavaIoFlushable_

/*!
 @brief A <tt>Flushable</tt> is a destination of data that can be flushed.
 The
 flush method is invoked to write any buffered output to the underlying
 stream.
 @since 1.5
 */
@protocol JavaIoFlushable < JavaObject >

/*!
 @brief Flushes this stream by writing any buffered output to the underlying
 stream.
 @throws IOException If an I/O error occurs
 */
- (void)flush;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoFlushable)

J2OBJC_TYPE_LITERAL_HEADER(JavaIoFlushable)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoFlushable")