//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/spec/PKCS8EncodedKeySpec.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec")
#ifdef RESTRICT_JavaSecuritySpecPKCS8EncodedKeySpec
#define INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec 0
#else
#define INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec 1
#endif
#undef RESTRICT_JavaSecuritySpecPKCS8EncodedKeySpec

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecuritySpecPKCS8EncodedKeySpec_) && (INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec || defined(INCLUDE_JavaSecuritySpecPKCS8EncodedKeySpec))
#define JavaSecuritySpecPKCS8EncodedKeySpec_

#define RESTRICT_JavaSecuritySpecEncodedKeySpec 1
#define INCLUDE_JavaSecuritySpecEncodedKeySpec 1
#include "../../../java/security/spec/EncodedKeySpec.h"

@class IOSByteArray;

/*!
 @brief The key specification for an encoded private key in ASN.1 format as defined
 in the PKCS#8 standard.
 */
@interface JavaSecuritySpecPKCS8EncodedKeySpec : JavaSecuritySpecEncodedKeySpec

#pragma mark Public

/*!
 @brief Creates a new <code>PKCS8EncodedKeySpec</code> with the specified encoded key
 bytes.
 @param encodedKey
 the encoded key bytes.
 */
- (instancetype)initWithByteArray:(IOSByteArray *)encodedKey;

/*!
 @brief Returns a copy of the encoded key bytes.
 @return a copy of the encoded key bytes.
 */
- (IOSByteArray *)getEncoded;

/*!
 @brief Returns the name of the encoding format of this encoded key
 specification.
 @return the string "PKCS#8".
 */
- (NSString *)getFormat;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecuritySpecPKCS8EncodedKeySpec)

FOUNDATION_EXPORT void JavaSecuritySpecPKCS8EncodedKeySpec_initWithByteArray_(JavaSecuritySpecPKCS8EncodedKeySpec *self, IOSByteArray *encodedKey);

FOUNDATION_EXPORT JavaSecuritySpecPKCS8EncodedKeySpec *new_JavaSecuritySpecPKCS8EncodedKeySpec_initWithByteArray_(IOSByteArray *encodedKey) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaSecuritySpecPKCS8EncodedKeySpec *create_JavaSecuritySpecPKCS8EncodedKeySpec_initWithByteArray_(IOSByteArray *encodedKey);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecuritySpecPKCS8EncodedKeySpec)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecuritySpecPKCS8EncodedKeySpec")
