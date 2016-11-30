//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/NioUtils.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioNioUtils")
#ifdef RESTRICT_JavaNioNioUtils
#define INCLUDE_ALL_JavaNioNioUtils 0
#else
#define INCLUDE_ALL_JavaNioNioUtils 1
#endif
#undef RESTRICT_JavaNioNioUtils

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioNioUtils_) && (INCLUDE_ALL_JavaNioNioUtils || defined(INCLUDE_JavaNioNioUtils))
#define JavaNioNioUtils_

@class IOSByteArray;
@class JavaIoFileDescriptor;
@class JavaNioByteBuffer;
@class JavaNioChannelsFileChannel;

/*!
  internal use only
 */
@interface JavaNioNioUtils : NSObject

+ (jint)NO_MAP_MODE;

+ (jint)PRIVATE;

+ (jint)READ_ONLY;

+ (jint)READ_WRITE;

#pragma mark Public

+ (void)freeDirectBufferWithJavaNioByteBuffer:(JavaNioByteBuffer *)buffer;

/*!
 @brief Helps bridge between io and nio.
 */
+ (JavaNioChannelsFileChannel *)newFileChannelWithId:(id)stream
                            withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                             withInt:(jint)mode OBJC_METHOD_FAMILY_NONE;

+ (JavaNioChannelsFileChannel *)newFileChannelSafeWithId:(id)stream
                                withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                                 withInt:(jint)mode OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Exposes the array backing a non-direct ByteBuffer, even if the ByteBuffer is read-only.
 Normally, attempting to access the array backing a read-only buffer throws.
 */
+ (IOSByteArray *)unsafeArrayWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

/*!
 @brief Exposes the array offset for the array backing a non-direct ByteBuffer,
 even if the ByteBuffer is read-only.
 */
+ (jint)unsafeArrayOffsetWithJavaNioByteBuffer:(JavaNioByteBuffer *)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioNioUtils)

inline jint JavaNioNioUtils_get_NO_MAP_MODE();
#define JavaNioNioUtils_NO_MAP_MODE 0
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioNioUtils, NO_MAP_MODE, jint)

inline jint JavaNioNioUtils_get_PRIVATE();
#define JavaNioNioUtils_PRIVATE 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioNioUtils, PRIVATE, jint)

inline jint JavaNioNioUtils_get_READ_ONLY();
#define JavaNioNioUtils_READ_ONLY 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioNioUtils, READ_ONLY, jint)

inline jint JavaNioNioUtils_get_READ_WRITE();
#define JavaNioNioUtils_READ_WRITE 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaNioNioUtils, READ_WRITE, jint)

FOUNDATION_EXPORT void JavaNioNioUtils_freeDirectBufferWithJavaNioByteBuffer_(JavaNioByteBuffer *buffer);

FOUNDATION_EXPORT JavaNioChannelsFileChannel *JavaNioNioUtils_newFileChannelWithId_withJavaIoFileDescriptor_withInt_(id stream, JavaIoFileDescriptor *fd, jint mode);

FOUNDATION_EXPORT JavaNioChannelsFileChannel *JavaNioNioUtils_newFileChannelSafeWithId_withJavaIoFileDescriptor_withInt_(id stream, JavaIoFileDescriptor *fd, jint mode);

FOUNDATION_EXPORT IOSByteArray *JavaNioNioUtils_unsafeArrayWithJavaNioByteBuffer_(JavaNioByteBuffer *b);

FOUNDATION_EXPORT jint JavaNioNioUtils_unsafeArrayOffsetWithJavaNioByteBuffer_(JavaNioByteBuffer *b);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioNioUtils)

#endif

#if !defined (JavaNioNioUtils_ChannelFactory_) && (INCLUDE_ALL_JavaNioNioUtils || defined(INCLUDE_JavaNioNioUtils_ChannelFactory))
#define JavaNioNioUtils_ChannelFactory_

@class JavaIoFileDescriptor;
@class JavaNioChannelsFileChannel;

@protocol JavaNioNioUtils_ChannelFactory < JavaObject >

- (JavaNioChannelsFileChannel *)newFileChannelWithId:(id)stream
                            withJavaIoFileDescriptor:(JavaIoFileDescriptor *)fd
                                             withInt:(jint)mode OBJC_METHOD_FAMILY_NONE;

@end

@interface JavaNioNioUtils_ChannelFactory : NSObject

+ (id<JavaNioNioUtils_ChannelFactory>)INSTANCE;

@end

J2OBJC_STATIC_INIT(JavaNioNioUtils_ChannelFactory)

inline id<JavaNioNioUtils_ChannelFactory> JavaNioNioUtils_ChannelFactory_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaNioNioUtils_ChannelFactory> JavaNioNioUtils_ChannelFactory_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNioNioUtils_ChannelFactory, INSTANCE, id<JavaNioNioUtils_ChannelFactory>)

J2OBJC_TYPE_LITERAL_HEADER(JavaNioNioUtils_ChannelFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioNioUtils")
