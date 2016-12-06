//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/net/ssl/KeyManagerFactory.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxNetSslKeyManagerFactory")
#ifdef RESTRICT_JavaxNetSslKeyManagerFactory
#define INCLUDE_ALL_JavaxNetSslKeyManagerFactory 0
#else
#define INCLUDE_ALL_JavaxNetSslKeyManagerFactory 1
#endif
#undef RESTRICT_JavaxNetSslKeyManagerFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxNetSslKeyManagerFactory_) && (INCLUDE_ALL_JavaxNetSslKeyManagerFactory || defined(INCLUDE_JavaxNetSslKeyManagerFactory))
#define JavaxNetSslKeyManagerFactory_

@class IOSCharArray;
@class IOSObjectArray;
@class JavaSecurityKeyStore;
@class JavaSecurityProvider;
@class JavaxNetSslKeyManagerFactorySpi;
@protocol JavaxNetSslManagerFactoryParameters;

/*!
 @brief The public API for <code>KeyManagerFactory</code> implementations.
 */
@interface JavaxNetSslKeyManagerFactory : NSObject

#pragma mark Public

/*!
 @brief Returns the name of the key management algorithm.
 @return the name of the key management algorithm.
 */
- (NSString *)getAlgorithm;

/*!
 @brief Returns the default key manager factory algorithm name.
 <p>
 The default algorithm name is specified by the security property:
 <code>'ssl.KeyManagerFactory.algorithm'</code>.
 @return the default algorithm name.
 */
+ (NSString *)getDefaultAlgorithm;

/*!
 @brief Creates a new <code>KeyManagerFactory</code> instance for the specified key
 management algorithm.
 @param algorithm
 the name of the requested key management algorithm.
 @return a key manager factory for the requested algorithm.
 @throws NoSuchAlgorithmException
 if no installed provider can provide the requested algorithm.
 @throws buf
 if <code>algorithm</code> is <code>null</code> (instead of
 NoSuchAlgorithmException as in 1.4 release)
 */
+ (JavaxNetSslKeyManagerFactory *)getInstanceWithNSString:(NSString *)algorithm;

/*!
 @brief Creates a new <code>KeyManagerFactory</code> instance for the specified key
 management algorithm from the specified provider.
 @param algorithm
 the name of the requested key management algorithm name.
 @param provider
 the provider that provides the requested algorithm.
 @return a key manager factory for the requested algorithm.
 @throws NoSuchAlgorithmException
 if the specified provider cannot provide the requested
 algorithm.
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code> (instead of
 NoSuchAlgorithmException as in 1.4 release)
 */
+ (JavaxNetSslKeyManagerFactory *)getInstanceWithNSString:(NSString *)algorithm
                                 withJavaSecurityProvider:(JavaSecurityProvider *)provider;

/*!
 @brief Creates a new <code>KeyManagerFactory</code> instance for the specified key
 management algorithm from the specified provider.
 @param algorithm
 the name of the requested key management algorithm name.
 @param provider
 the name of the provider that provides the requested
 algorithm.
 @return a key manager factory for the requested algorithm.
 @throws NoSuchAlgorithmException
 if the specified provider cannot provide the requested
 algorithm.
 @throws NoSuchProviderException
 if the specified provider does not exist.
 @throws NullPointerException
 if <code>algorithm</code> is <code>null</code> (instead of
 NoSuchAlgorithmException as in 1.4 release)
 */
+ (JavaxNetSslKeyManagerFactory *)getInstanceWithNSString:(NSString *)algorithm
                                             withNSString:(NSString *)provider;

/*!
 @brief Returns a list of key managers, one instance for each type of key in the
 key store.
 @return a list of key managers.
 */
- (IOSObjectArray *)getKeyManagers;

/*!
 @brief Returns the provider for this <code>KeyManagerFactory</code> instance.
 @return the provider for this <code>KeyManagerFactory</code> instance.
 */
- (JavaSecurityProvider *)getProvider;

/*!
 @brief Initializes this instance with the specified key store and password.
 @param ks
 the key store or <code>null</code> to use the default key store.
 @param password
 the password for the specified key store or <code>null</code> if no
 key store is provided.
 @throws KeyStoreException
 if initializing this key manager factory fails.
 @throws NoSuchAlgorithmException
 if a required algorithm is not available.
 @throws UnrecoverableKeyException
 if a key cannot be recovered.
 */
- (void)init__WithJavaSecurityKeyStore:(JavaSecurityKeyStore *)ks
                         withCharArray:(IOSCharArray *)password OBJC_METHOD_FAMILY_NONE;

/*!
 @brief Initializes this instance with the specified factory parameters.
 @param spec
 the factory parameters.
 @throws InvalidAlgorithmParameterException
 if an error occurs.
 */
- (void)init__WithJavaxNetSslManagerFactoryParameters:(id<JavaxNetSslManagerFactoryParameters>)spec OBJC_METHOD_FAMILY_NONE;

#pragma mark Protected

/*!
 @brief Creates a new <code>KeyManagerFactory</code>.
 @param factorySpi
 the implementation delegate.
 @param provider
 the provider.
 @param algorithm
 the key management algorithm name.
 */
- (instancetype)initWithJavaxNetSslKeyManagerFactorySpi:(JavaxNetSslKeyManagerFactorySpi *)factorySpi
                               withJavaSecurityProvider:(JavaSecurityProvider *)provider
                                           withNSString:(NSString *)algorithm;

@end

J2OBJC_STATIC_INIT(JavaxNetSslKeyManagerFactory)

FOUNDATION_EXPORT NSString *JavaxNetSslKeyManagerFactory_getDefaultAlgorithm();

FOUNDATION_EXPORT JavaxNetSslKeyManagerFactory *JavaxNetSslKeyManagerFactory_getInstanceWithNSString_(NSString *algorithm);

FOUNDATION_EXPORT JavaxNetSslKeyManagerFactory *JavaxNetSslKeyManagerFactory_getInstanceWithNSString_withNSString_(NSString *algorithm, NSString *provider);

FOUNDATION_EXPORT JavaxNetSslKeyManagerFactory *JavaxNetSslKeyManagerFactory_getInstanceWithNSString_withJavaSecurityProvider_(NSString *algorithm, JavaSecurityProvider *provider);

FOUNDATION_EXPORT void JavaxNetSslKeyManagerFactory_initWithJavaxNetSslKeyManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslKeyManagerFactory *self, JavaxNetSslKeyManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm);

FOUNDATION_EXPORT JavaxNetSslKeyManagerFactory *new_JavaxNetSslKeyManagerFactory_initWithJavaxNetSslKeyManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslKeyManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaxNetSslKeyManagerFactory *create_JavaxNetSslKeyManagerFactory_initWithJavaxNetSslKeyManagerFactorySpi_withJavaSecurityProvider_withNSString_(JavaxNetSslKeyManagerFactorySpi *factorySpi, JavaSecurityProvider *provider, NSString *algorithm);

J2OBJC_TYPE_LITERAL_HEADER(JavaxNetSslKeyManagerFactory)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxNetSslKeyManagerFactory")
