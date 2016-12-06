//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/SSLSession.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslSSLSession")
#ifdef RESTRICT_JavaxNetSslSSLSession
#define INCLUDE_ALL_JavaxNetSslSSLSession 0
#else
#define INCLUDE_ALL_JavaxNetSslSSLSession 1
#endif
#undef RESTRICT_JavaxNetSslSSLSession

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslSSLSession_) && (INCLUDE_ALL_JavaxNetSslSSLSession || defined(INCLUDE_JavaxNetSslSSLSession))
#define JavaxNetSslSSLSession_

@class IOSByteArray;
@class IOSObjectArray;
@protocol JavaSecurityPrincipal;
@protocol JavaxNetSslSSLSessionContext;

/*!
 @brief The interface representing an SSL session.
 */
@protocol JavaxNetSslSSLSession < JavaObject >

/*!
 @brief Returns the maximum size that an application buffer can be for this
 session.
 @return the maximum application buffer size.
 */
- (jint)getApplicationBufferSize;

/*!
 @brief Returns the name of the cipher suite used in this session.
 @return the name of the cipher suite used in this session.
 */
- (NSString *)getCipherSuite;

/*!
 @brief Returns the time this session was created, in milliseconds since midnight
 January 1st 1970 UTC.
 @return the time the session was created.
 */
- (jlong)getCreationTime;

/*!
 @brief Returns this sessions identifier.
 @return this sessions identifier.
 */
- (IOSByteArray *)getId;

/*!
 @brief Returns the time this session was last accessed, in milliseconds since
 midnight January 1st 1970 UTC.
 @return the time this session was last accessed.
 */
- (jlong)getLastAccessedTime;

/*!
 @brief Returns the list of certificates that were used to identify the local
 side to the peer during the handshake.
 @return the list of certificates, ordered from local certificate to
 CA's certificates.
 */
- (IOSObjectArray *)getLocalCertificates;

/*!
 @brief Returns the principal used to identify the local side to the peer during
 the handshake.
 @return the principal used to identify the local side.
 */
- (id<JavaSecurityPrincipal>)getLocalPrincipal;

/*!
 @brief Returns the maximum size that a network buffer can be for this session.
 @return the maximum network buffer size.
 */
- (jint)getPacketBufferSize;

/*!
 @brief Returns the list of certificates the peer used to identify itself during
 the handshake.
 <p>
 Note: this method exists for compatility reasons, use
 <code>getPeerCertificates()</code> instead.
 @return the list of certificates, ordered from the identity certificate to
 the CA's certificates
 @throws SSLPeerUnverifiedException
 if the identity of the peer is not verified.
 */
- (IOSObjectArray *)getPeerCertificateChain;

/*!
 @brief Returns the list of certificates the peer used to identify itself during
 the handshake.
 @return the list of certificates, ordered from the identity certificate to
 the CA's certificates.
 @throws SSLPeerUnverifiedException
 if the identity of the peer is not verified.
 */
- (IOSObjectArray *)getPeerCertificates;

/*!
 @brief Returns the host name of the peer of this session.
 The host name is not
 authenticated.
 @return the host name of the peer of this session, or <code>null</code> if no
 host name is available.
 */
- (NSString *)getPeerHost;

/*!
 @brief Returns the port number of the peer of this session.
 The port number is
 not authenticated.
 @return the port number of the peer, of <code>-1</code> is no port number is
 available.
 */
- (jint)getPeerPort;

/*!
 @brief Returns the principal identifying the peer during the handshake.
 @return the principal identifying the peer.
 @throws SSLPeerUnverifiedException
 if the identity of the peer has not been verified.
 */
- (id<JavaSecurityPrincipal>)getPeerPrincipal;

/*!
 @brief Returns the protocol name that is used for all connections in this
 session.
 @return the protocol name that is used for all connections in this
 session.
 */
- (NSString *)getProtocol;

/*!
 @brief Returns the context of this session, or null if no context is available.
 */
- (id<JavaxNetSslSSLSessionContext>)getSessionContext;

/*!
 @brief Returns the object bound to the specified name in this session's
 application layer data.
 @param name
 the name of the bound value.
 @return the value bound to the specified name, or <code>null</code> if the
 specified name does not exist or is not accessible in the current
 access control context.
 @throws IllegalArgumentException
 if <code>name</code> is <code>null</code>.
 */
- (id)getValueWithNSString:(NSString *)name;

/*!
 @brief Returns the list of the object names bound to this session's application
 layer data..
 <p>
 Depending on the current access control context, the list of object names
 may be different.
 @return the list of the object names bound to this session's application
 layer data.
 */
- (IOSObjectArray *)getValueNames;

/*!
 @brief Invalidates this session.
 <p>
 No new connections can be created, but any existing connection remains
 valid until it is closed.
 */
- (void)invalidate;

/*!
 @brief Returns whether this session is valid.
 @return <code>true</code> if this session is valid, otherwise <code>false</code>.
 */
- (jboolean)isValid;

/*!
 @brief Binds the specified object under the specified name in this session's
 application layer data.
 <p>
 For bindings (new or existing) implementing the
 <code>SSLSessionBindingListener</code> interface the object will be notified.
 @param name
 the name to bind the object to.
 @param value
 the object to bind.
 @throws IllegalArgumentException
 if either <code>name</code> or <code>value</code> is <code>null</code>.
 */
- (void)putValueWithNSString:(NSString *)name
                      withId:(id)value;

/*!
 @brief Removes the binding for the specified name in this session's application
 layer data.
 If the existing binding implements the
 <code>SSLSessionBindingListener</code> interface the object will be notified.
 @param name
 the binding to remove.
 @throws IllegalArgumentException
 if <code>name</code> is <code>null</code>.
 */
- (void)removeValueWithNSString:(NSString *)name;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslSSLSession)

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslSSLSession)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslSSLSession")
