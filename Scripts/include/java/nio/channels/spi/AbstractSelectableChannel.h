//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/channels/spi/AbstractSelectableChannel.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel")
#ifdef RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel 0
#else
#define INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel 1
#endif
#undef RESTRICT_JavaNioChannelsSpiAbstractSelectableChannel

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNioChannelsSpiAbstractSelectableChannel_) && (INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel || defined(INCLUDE_JavaNioChannelsSpiAbstractSelectableChannel))
#define JavaNioChannelsSpiAbstractSelectableChannel_

#define RESTRICT_JavaNioChannelsSelectableChannel 1
#define INCLUDE_JavaNioChannelsSelectableChannel 1
#include "java/nio/channels/SelectableChannel.h"

@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiSelectorProvider;

/*!
 @brief <code>AbstractSelectableChannel</code> is the base implementation class for
 selectable channels.
 It declares methods for registering, unregistering and
 closing selectable channels. It is thread-safe.
 */
@interface JavaNioChannelsSpiAbstractSelectableChannel : JavaNioChannelsSelectableChannel {
 @public
  jboolean isBlocking_;
}

#pragma mark Public

/*!
 @brief Gets the object used for the synchronization of <code>register</code> and
 <code>configureBlocking</code>.
 @return the synchronization object.
 */
- (id)blockingLock;

/*!
 @brief Sets the blocking mode of this channel.
 A call to this method blocks if
 other calls to this method or to <code>register</code> are executing. The
 actual setting of the mode is done by calling
 <code>implConfigureBlocking(boolean)</code>.
 - seealso: java.nio.channels.SelectableChannel#configureBlocking(boolean)
 @param blockingMode
 <code>true</code> for setting this channel's mode to blocking,
 <code>false</code> to set it to non-blocking.
 @return this channel.
 @throws ClosedChannelException
 if this channel is closed.
 @throws IllegalBlockingModeException
 if <code>block</code> is <code>true</code> and this channel has been
 registered with at least one selector.
 @throws IOException
 if an I/O error occurs.
 */
- (JavaNioChannelsSelectableChannel *)configureBlockingWithBoolean:(jboolean)blockingMode;

/*!
 @brief Indicates whether this channel is in blocking mode.
 @return <code>true</code> if this channel is blocking, <code>false</code>
 otherwise.
 */
- (jboolean)isBlocking;

/*!
 @brief Indicates whether this channel is registered with one or more selectors.
 @return <code>true</code> if this channel is registered with a selector,
 <code>false</code> otherwise.
 */
- (jboolean)isRegistered;

/*!
 @brief Gets this channel's selection key for the specified selector.
 @param selector
 the selector with which this channel has been registered.
 @return the selection key for the channel or <code>null</code> if this channel
 has not been registered with <code>selector</code>.
 */
- (JavaNioChannelsSelectionKey *)keyForWithJavaNioChannelsSelector:(JavaNioChannelsSelector *)selector;

/*!
 @brief Returns the selector provider that has created this channel.
 - seealso: java.nio.channels.SelectableChannel#provider()
 @return this channel's selector provider.
 */
- (JavaNioChannelsSpiSelectorProvider *)provider;

/*!
 @brief Registers this channel with the specified selector for the specified
 interest set.
 If the channel is already registered with the selector, the
 <code>interest set</code> is updated to <code>interestSet</code> and
 the corresponding selection key is returned. If the channel is not yet
 registered, this method calls the <code>register</code> method of
 <code>selector</code> and adds the selection key to this channel's key set.
 @param selector
 the selector with which to register this channel.
 @param interestSet
 this channel's <code>interest set</code>.
 @param attachment
 the object to attach, can be <code>null</code>.
 @return the selection key for this registration.
 @throws CancelledKeyException
 if this channel is registered but its key has been canceled.
 @throws ClosedChannelException
 if this channel is closed.
 @throws IllegalArgumentException
 if <code>interestSet</code> is not supported by this channel.
 @throws IllegalBlockingModeException
 if this channel is in blocking mode.
 @throws IllegalSelectorException
 if this channel does not have the same provider as the given
 selector.
 */
- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSelector:(JavaNioChannelsSelector *)selector
                                                               withInt:(jint)interestSet
                                                                withId:(id)attachment;

#pragma mark Protected

/*!
 @brief Constructs a new <code>AbstractSelectableChannel</code>.
 @param selectorProvider
 the selector provider that creates this channel.
 */
- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

/*!
 @brief Implements the channel closing behavior.
 Calls
 <code>implCloseSelectableChannel()</code> first, then loops through the list
 of selection keys and cancels them, which unregisters this channel from
 all selectors it is registered with.
 @throws IOException
 if a problem occurs while closing the channel.
 */
- (void)implCloseChannel;

/*!
 @brief Implements the closing function of the SelectableChannel.
 This method is
 called from <code>implCloseChannel()</code>.
 @throws IOException
 if an I/O exception occurs.
 */
- (void)implCloseSelectableChannel;

/*!
 @brief Implements the configuration of blocking/non-blocking mode.
 @param blocking true for blocking, false for non-blocking.
 @throws IOException
 if an I/O error occurs.
 */
- (void)implConfigureBlockingWithBoolean:(jboolean)blocking;

#pragma mark Package-Private

- (void)deregisterWithJavaNioChannelsSelectionKey:(JavaNioChannelsSelectionKey *)k;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioChannelsSpiAbstractSelectableChannel)

FOUNDATION_EXPORT void JavaNioChannelsSpiAbstractSelectableChannel_initWithJavaNioChannelsSpiSelectorProvider_(JavaNioChannelsSpiAbstractSelectableChannel *self, JavaNioChannelsSpiSelectorProvider *selectorProvider);

J2OBJC_TYPE_LITERAL_HEADER(JavaNioChannelsSpiAbstractSelectableChannel)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNioChannelsSpiAbstractSelectableChannel")
