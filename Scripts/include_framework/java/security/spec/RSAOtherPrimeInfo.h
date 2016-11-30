//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/RSAOtherPrimeInfo.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo")
#ifdef RESTRICT_JavaSecuritySpecRSAOtherPrimeInfo
#define INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo 0
#else
#define INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo 1
#endif
#undef RESTRICT_JavaSecuritySpecRSAOtherPrimeInfo

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecRSAOtherPrimeInfo_) && (INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo || defined(INCLUDE_JavaSecuritySpecRSAOtherPrimeInfo))
#define JavaSecuritySpecRSAOtherPrimeInfo_

@class JavaMathBigInteger;

/*!
 @brief The additional prime information specified as triplet of primes, a prime
 exponent, and a Chinese Remainder Theorem (CRT) coefficient.
 <p>
 Defined in the <a
 href="http://www.rsa.com/rsalabs/pubs/PKCS/html/pkcs-1.html">PKCS #1 v2.1</a>
 standard.
 */
@interface JavaSecuritySpecRSAOtherPrimeInfo : NSObject

#pragma mark Public

/*!
 @brief Creates a new <code>RSAOtherPrimeInfo</code> with the specified prime,
 exponent, and CRT coefficient.
 @param prime
 the prime factor.
 @param primeExponent
 the prime exponent.
 @param crtCoefficient
 the CRT coefficient.
 */
- (instancetype)initWithJavaMathBigInteger:(JavaMathBigInteger *)prime
                    withJavaMathBigInteger:(JavaMathBigInteger *)primeExponent
                    withJavaMathBigInteger:(JavaMathBigInteger *)crtCoefficient;

/*!
 @brief Returns the CRT coefficient.
 @return the CRT coefficient.
 */
- (JavaMathBigInteger *)getCrtCoefficient;

/*!
 @brief Returns the exponent.
 @return the exponent.
 */
- (JavaMathBigInteger *)getExponent;

/*!
 @brief Returns the prime factor.
 @return the prime factor.
 */
- (JavaMathBigInteger *)getPrime;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecRSAOtherPrimeInfo)

FOUNDATION_EXPORT void JavaSecuritySpecRSAOtherPrimeInfo_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaSecuritySpecRSAOtherPrimeInfo *self, JavaMathBigInteger *prime, JavaMathBigInteger *primeExponent, JavaMathBigInteger *crtCoefficient);

FOUNDATION_EXPORT JavaSecuritySpecRSAOtherPrimeInfo *new_JavaSecuritySpecRSAOtherPrimeInfo_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *prime, JavaMathBigInteger *primeExponent, JavaMathBigInteger *crtCoefficient) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecRSAOtherPrimeInfo *create_JavaSecuritySpecRSAOtherPrimeInfo_initWithJavaMathBigInteger_withJavaMathBigInteger_withJavaMathBigInteger_(JavaMathBigInteger *prime, JavaMathBigInteger *primeExponent, JavaMathBigInteger *crtCoefficient);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecRSAOtherPrimeInfo)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecRSAOtherPrimeInfo")
