//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/DefaultSSLServerSocketFactory.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslDefaultSSLServerSocketFactory")
#ifdef RESTRICT_JavaxNetSslDefaultSSLServerSocketFactory
#define INCLUDE_ALL_JavaxNetSslDefaultSSLServerSocketFactory 0
#else
#define INCLUDE_ALL_JavaxNetSslDefaultSSLServerSocketFactory 1
#endif
#undef RESTRICT_JavaxNetSslDefaultSSLServerSocketFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslDefaultSSLServerSocketFactory_) && (INCLUDE_ALL_JavaxNetSslDefaultSSLServerSocketFactory || defined(INCLUDE_JavaxNetSslDefaultSSLServerSocketFactory))
#define JavaxNetSslDefaultSSLServerSocketFactory_

#define RESTRICT_JavaxNetSslSSLServerSocketFactory 1
#define INCLUDE_JavaxNetSslSSLServerSocketFactory 1
#include "../../../javax/net/ssl/SSLServerSocketFactory.h"

@class IOSObjectArray;
@class JavaNetInetAddress;
@class JavaNetServerSocket;

/*!
 @brief Default inoperative implementation of javax.net.ssl.SSLServerSocketFactory
 */
@interface JavaxNetSslDefaultSSLServerSocketFactory : JavaxNetSslSSLServerSocketFactory

#pragma mark Public

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog;

- (JavaNetServerSocket *)createServerSocketWithInt:(jint)port
                                           withInt:(jint)backlog
                            withJavaNetInetAddress:(JavaNetInetAddress *)iAddress;

- (IOSObjectArray *)getDefaultCipherSuites;

- (IOSObjectArray *)getSupportedCipherSuites;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)mes;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxNetSslDefaultSSLServerSocketFactory)

FOUNDATION_EXPORT void JavaxNetSslDefaultSSLServerSocketFactory_initWithNSString_(JavaxNetSslDefaultSSLServerSocketFactory *self, NSString *mes);

FOUNDATION_EXPORT JavaxNetSslDefaultSSLServerSocketFactory *new_JavaxNetSslDefaultSSLServerSocketFactory_initWithNSString_(NSString *mes) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslDefaultSSLServerSocketFactory *create_JavaxNetSslDefaultSSLServerSocketFactory_initWithNSString_(NSString *mes);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslDefaultSSLServerSocketFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslDefaultSSLServerSocketFactory")
