//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/Pipe.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsPipe")
#ifdef RESTRICT_JavaNioChannelsPipe
#define INCLUDE_ALL_JavaNioChannelsPipe 0
#else
#define INCLUDE_ALL_JavaNioChannelsPipe 1
#endif
#undef RESTRICT_JavaNioChannelsPipe

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsPipe_) && (INCLUDE_ALL_JavaNioChannelsPipe || defined(INCLUDE_JavaNioChannelsPipe))
#define JavaNioChannelsPipe_

@class JavaNioChannelsPipe_SinkChannel;
@class JavaNioChannelsPipe_SourceChannel;

/*!
 @brief A pipe contains two channels, forming a unidirectional pipe.
 One is the writable sink channel,
 and the other is the readable source channel. When bytes are written into the writable
 channel they can be read from the readable channel. Bytes are read in the order in which they
 were written.
 */
@interface JavaNioChannelsPipe : NSObject

#pragma mark Public

/*!
 @brief Returns a new pipe from the default - seealso: java.nio.channels.spi.SelectorProvider.
 @throws IOException
 if an I/O error occurs.
 */
+ (JavaNioChannelsPipe *)open;

/*!
 @brief Returns the sink channel of the pipe.
 @return a writable sink channel of the pipe.
 */
- (JavaNioChannelsPipe_SinkChannel *)sink;

/*!
 @brief Returns the source channel of the pipe.
 @return a readable source channel of the pipe.
 */
- (JavaNioChannelsPipe_SourceChannel *)source;

#pragma mark Protected

/*!
 @brief The protected default constructor.
 */
- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsPipe)

FOUNDATION_EXPORT JavaNioChannelsPipe *JavaNioChannelsPipe_open();

FOUNDATION_EXPORT void JavaNioChannelsPipe_init(JavaNioChannelsPipe *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsPipe)

#endif

#if !defined (JavaNioChannelsPipe_SinkChannel_) && (INCLUDE_ALL_JavaNioChannelsPipe || defined(INCLUDE_JavaNioChannelsPipe_SinkChannel))
#define JavaNioChannelsPipe_SinkChannel_

#define RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel 1
#define INCLUDE_JavaNioChannelsSpiAbstractSelectableChannel 1
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

#define RESTRICT_JavaNioChannelsWritableByteChannel 1
#define INCLUDE_JavaNioChannelsWritableByteChannel 1
#include "java/nio/channels/WritableByteChannel.h"

#define RESTRICT_JavaNioChannelsGatheringByteChannel 1
#define INCLUDE_JavaNioChannelsGatheringByteChannel 1
#include "java/nio/channels/GatheringByteChannel.h"

@class JavaNioChannelsSpiSelectorProvider;

/*!
 @brief Writable sink channel used to write to a pipe.
 */
@interface JavaNioChannelsPipe_SinkChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsWritableByteChannel, JavaNioChannelsGatheringByteChannel >

#pragma mark Public

/*!
 @brief Indicates that this channel only supports writing.
 @return a static value of OP_WRITE.
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Constructs a new <code>SinkChannel</code>.
 @param provider
 the provider of the channel.
 */
- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsPipe_SinkChannel)

FOUNDATION_EXPORT void JavaNioChannelsPipe_SinkChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsPipe_SinkChannel *self, JavaNioChannelsSpiSelectorProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsPipe_SinkChannel)

#endif

#if !defined (JavaNioChannelsPipe_SourceChannel_) && (INCLUDE_ALL_JavaNioChannelsPipe || defined(INCLUDE_JavaNioChannelsPipe_SourceChannel))
#define JavaNioChannelsPipe_SourceChannel_

#define RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel 1
#define INCLUDE_JavaNioChannelsSpiAbstractSelectableChannel 1
#include "java/nio/channels/spi/AbstractSelectableChannel.h"

#define RESTRICT_JavaNioChannelsReadableByteChannel 1
#define INCLUDE_JavaNioChannelsReadableByteChannel 1
#include "java/nio/channels/ReadableByteChannel.h"

#define RESTRICT_JavaNioChannelsScatteringByteChannel 1
#define INCLUDE_JavaNioChannelsScatteringByteChannel 1
#include "java/nio/channels/ScatteringByteChannel.h"

@class JavaNioChannelsSpiSelectorProvider;

/*!
 @brief Readable source channel used to read from a pipe.
 */
@interface JavaNioChannelsPipe_SourceChannel : JavaNioChannelsSpiAbstractSelectableChannel < JavaNioChannelsReadableByteChannel, JavaNioChannelsScatteringByteChannel >

#pragma mark Public

/*!
 @brief Indicates that this channel only supports reading.
 @return a static value of OP_READ.
 */
- (jint)validOps;

#pragma mark Protected

/*!
 @brief Constructs a new <code>SourceChannel</code>.
 @param provider
 the provider of the channel.
 */
- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)provider;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsPipe_SourceChannel)

FOUNDATION_EXPORT void JavaNioChannelsPipe_SourceChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsPipe_SourceChannel *self, JavaNioChannelsSpiSelectorProvider *provider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsPipe_SourceChannel)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsPipe")
