//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/RSAMultiPrimePrivateCrtKeySpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec")
#ifdef RESTRICT_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec
#define INCLUDE_ALL_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec || defined(INCLUDE_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec))
#define JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec_

#define RESTRICT_JavaSecuritySpecRSAPrivateKeySpec 1
#define INCLUDE_JavaSecuritySpecRSAPrivateKeySpec 1
#include "java/security/spec/RSAPrivateKeySpec.h"

@class IOSObjectArray;
@class JavaMathBigInteger;

/*!
 @brief The key specification of a RSA multi-prime private key with the Chinese
 Remainder Theorem (CRT) information values used.
 <p>
 Defined in the <a
 href="http://www.rsa.com/rsalabs/pubs/PKCS/html/pkcs-1.html">PKCS #1 v2.1</a>
 standard.
 */
@interface JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec : JavaSecuritySpecRSAPrivateKeySpec

#pragma mark Public

/*!
 @brief Creates a new <code>RSAMultiPrimePrivateCrtKeySpec</code> with the specified
 modulus, public exponent, private exponent, prime factors, prime
 exponents, crt coefficient, and additional primes.
 @param modulus
 the modulus <code>n</code>.
 @param publicExponent
 the public exponent <code>e</code>.
 @param privateExponent
 the private exponent <code>d</code>.
 @param primeP
 the prime factor <code>p</code> of <code>n</code>.
 @param primeQ
 the prime factor <code>q</code> of <code>n</code>.
 @param primeExponentP
 the exponent of the prime <code>p</code>.
 @param primeExponentQ
 the exponent of the prime <code>q</code>.
 @param crtCoefficient
 the CRT coefficient <code>q^-1 mod p</code>.
 @param otherPrimeInfo
 the information for the additional primes or <code>null</code> if
 there are only the two primes (<code>p, q</code>).
 @throws IllegalArgumentException
 if <code>otherPrimeInfo</code> is not null but empty.
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)modulus
                    withJavaMathBigInteger:(JavaMathBigInteger *)publicExponent
                    withJavaMathBigInteger:(JavaMathBigInteger *)privateExponent
                    withJavaMathBigInteger:(JavaMathBigInteger *)primeP
                    withJavaMathBigInteger:(JavaMathBigInteger *)primeQ
                    withJavaMathBigInteger:(JavaMathBigInteger *)primeExponentP
                    withJavaMathBigInteger:(JavaMathBigInteger *)primeExponentQ
                    withJavaMathBigInteger:(JavaMathBigInteger *)crtCoefficient
withJavaSecuritySpecRSAOtherPrimeInfoArray:(IOSObjectArray *)otherPrimeInfo;

/*!
 @brief Returns the CRT coefficient, <code>q^-1 mod p</code>.
 @return the CRT coefficient, <code>q^-1 mod p</code>.
 */
- (JavaMathBigInteger *)getCrtCoefficient;

/*!
 @brief Returns the information for the additional primes.
 @return the information for the additional primes, or <code>null</code> if
 there are only the two primes (<code>p, q</code>).
 */
- (IOSObjectArray *)getOtherPrimeInfo;

/*!
 @brief Returns the exponent of the prime <code>p</code>.
 @return the exponent of the prime <code>p</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentP;

/*!
 @brief Returns the exponent of the prime <code>q</code>.
 @return the exponent of the prime <code>q</code>.
 */
- (JavaMathBigInteger *)getPrimeExponentQ;

/*!
 @brief Returns the prime factor <code>p</code>.
 @return the prime factor <code>p</code>.
 */
- (JavaMathBigInteger *)getPrimeP;

/*!
 @brief Returns the prime factor <code>q</code>.
 @return the prime factor <code>q</code>.
 */
- (JavaMathBigInteger *)getPrimeQ;

/*!
 @brief Returns the public exponent <code>e</code>.
 @return the public exponent <code>e</code>.
 */
- (JavaMathBigInteger *)getPublicExponent;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaSecuritySpecRSAOtherPrimeInfoArray_(JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec *self, JavaMathBigInteger *modulus, JavaMathBigInteger *publicExponent, JavaMathBigInteger *privateExponent, JavaMathBigInteger *primeP, JavaMathBigInteger *primeQ, JavaMathBigInteger *primeExponentP, JavaMathBigInteger *primeExponentQ, JavaMathBigInteger *crtCoefficient, IOSObjectArray *otherPrimeInfo);

FOUNDATION_EXPORT JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec *new_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaSecuritySpecRSAOtherPrimeInfoArray_(JavaMathBigInteger *modulus, JavaMathBigInteger *publicExponent, JavaMathBigInteger *privateExponent, JavaMathBigInteger *primeP, JavaMathBigInteger *primeQ, JavaMathBigInteger *primeExponentP, JavaMathBigInteger *primeExponentQ, JavaMathBigInteger *crtCoefficient, IOSObjectArray *otherPrimeInfo) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec *create_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_withJavaSecuritySpecRSAOtherPrimeInfoArray_(JavaMathBigInteger *modulus, JavaMathBigInteger *publicExponent, JavaMathBigInteger *privateExponent, JavaMathBigInteger *primeP, JavaMathBigInteger *primeQ, JavaMathBigInteger *primeExponentP, JavaMathBigInteger *primeExponentQ, JavaMathBigInteger *crtCoefficient, IOSObjectArray *otherPrimeInfo);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecRSAMultiPrimePrivateCrtKeySpec")
