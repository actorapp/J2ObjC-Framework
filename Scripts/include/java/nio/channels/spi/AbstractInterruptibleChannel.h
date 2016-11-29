//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/spi/AbstractInterruptibleChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel")
#ifdef RESTRICT_JavaNioChannelsSpiAbstractInterruptibleChannel
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel 1
#endif
#undef RESTRICT_JavaNioChannelsSpiAbstractInterruptibleChannel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsSpiAbstractInterruptibleChannel_) && (INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel || defined(INCLUDE_JavaNioChannelsSpiAbstractInterruptibleChannel))
#define JavaNioChannelsSpiAbstractInterruptibleChannel_

#define RESTRICT_JavaNioChannelsChannel 1
#define INCLUDE_JavaNioChannelsChannel 1
#include "java/nio/channels/Channel.h"

#define RESTRICT_JavaNioChannelsInterruptibleChannel 1
#define INCLUDE_JavaNioChannelsInterruptibleChannel 1
#include "java/nio/channels/InterruptibleChannel.h"

/*!
 @brief <code>AbstractInterruptibleChannel</code> is the root class for interruptible
 channels.
 <p>
 The basic usage pattern for an interruptible channel is to invoke
 <code>begin()</code> before any I/O operation that potentially blocks
 indefinitely, then <code>end(boolean)</code> after completing the operation. The
 argument to the <code>end</code> method should indicate if the I/O operation has
 actually completed so that any change may be visible to the invoker.
 */
@interface JavaNioChannelsSpiAbstractInterruptibleChannel : NSObject < JavaNioChannelsChannel, JavaNioChannelsInterruptibleChannel > {
 @public
  volatile_jboolean interrupted_;
}

#pragma mark Public

/*!
 @brief Closes an open channel.
 If the channel is already closed then this method
 has no effect, otherwise it closes the receiver via the
 <code>implCloseChannel</code> method.
 <p>
 If an attempt is made to perform an operation on a closed channel then a
 <code>java.nio.channels.ClosedChannelException</code> is thrown.
 <p>
 If multiple threads attempt to simultaneously close a channel, then only
 one thread will run the closure code and the others will be blocked until
 the first one completes.
 @throws IOException
 if a problem occurs while closing this channel.
 - seealso: java.nio.channels.Channel#close()
 */
- (void)close;

- (jboolean)isOpen;

#pragma mark Protected

- (instancetype)init;

/*!
 @brief Indicates the beginning of a code section that includes an I/O operation
 that is potentially blocking.
 After this operation, the application
 should invoke the corresponding <code>end(boolean)</code> method.
 */
- (void)begin;

/*!
 @brief Indicates the end of a code section that has been started with
 <code>begin()</code> and that includes a potentially blocking I/O operation.
 @param success
 pass <code>true</code> if the blocking operation has succeeded and
 has had a noticeable effect; <code>false</code> otherwise.
 @throws AsynchronousCloseException
 if this channel is closed by another thread while this method
 is executing.
 @throws ClosedByInterruptException
 if another thread interrupts the calling thread while this
 method is executing.
 */
- (void)endWithBoolean:(jboolean)success;

/*!
 @brief Implements the channel closing behavior.
 <p>
 Closes the channel with a guarantee that the channel is not currently
 closed through another invocation of <code>close()</code> and that the method
 is thread-safe.
 <p>
 Any outstanding threads blocked on I/O operations on this channel must be
 released with either a normal return code, or by throwing an
 <code>AsynchronousCloseException</code>.
 @throws IOException
 if a problem occurs while closing the channel.
 */
- (void)implCloseChannel;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractInterruptibleChannel)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractInterruptibleChannel_init(JavaNioChannelsSpiAbstractInterruptibleChannel *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractInterruptibleChannel)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractInterruptibleChannel")
