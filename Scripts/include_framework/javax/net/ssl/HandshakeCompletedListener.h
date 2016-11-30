//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/HandshakeCompletedListener.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslHandshakeCompletedListener")
#ifdef RESTRICT_JavaxNetSslHandshakeCompletedListener
#define INCLUDE_ALL_JavaxNetSslHandshakeCompletedListener 0
#else
#define INCLUDE_ALL_JavaxNetSslHandshakeCompletedListener 1
#endif
#undef RESTRICT_JavaxNetSslHandshakeCompletedListener

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslHandshakeCompletedListener_) && (INCLUDE_ALL_JavaxNetSslHandshakeCompletedListener || defined(INCLUDE_JavaxNetSslHandshakeCompletedListener))
#define JavaxNetSslHandshakeCompletedListener_

#define RESTRICT_JavaUtilEventListener 1
#define INCLUDE_JavaUtilEventListener 1
#include "../../../java/util/EventListener.h"

@class JavaxNetSslHandshakeCompletedEvent;

/*!
 @brief The listener to be implemented to receive event notifications on completion
 of SSL handshake on an SSL connection.
 */
@protocol JavaxNetSslHandshakeCompletedListener < JavaUtilEventListener, JavaObject >

/*!
 @brief The callback method that is invoked when a SSL handshake is completed.
 @param event
 the information on the completed SSL handshake event.
 */
- (void)handshakeCompletedWithJavaxNetSslHandshakeCompletedEvent:(JavaxNetSslHandshakeCompletedEvent *)event;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslHandshakeCompletedListener)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslHandshakeCompletedListener)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslHandshakeCompletedListener")