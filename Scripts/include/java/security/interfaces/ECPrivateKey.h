//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/interfaces/ECPrivateKey.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey")
#ifdef RESTRICT_JavaSecurityInterfacesECPrivateKey
#define INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey 0
#else
#define INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey 1
#endif
#undef RESTRICT_JavaSecurityInterfacesECPrivateKey

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityInterfacesECPrivateKey_) && (INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey || defined(INCLUDE_JavaSecurityInterfacesECPrivateKey))
#define JavaSecurityInterfacesECPrivateKey_

#define RESTRICT_JavaSecurityPrivateKey 1
#define INCLUDE_JavaSecurityPrivateKey 1
#include "java/security/PrivateKey.h"

#define RESTRICT_JavaSecurityInterfacesECKey 1
#define INCLUDE_JavaSecurityInterfacesECKey 1
#include "java/security/interfaces/ECKey.h"

@class JavaMathBigInteger;

/*!
 @brief The interface for an Elliptic Curve (EC) private key.
 */
@protocol JavaSecurityInterfacesECPrivateKey < JavaSecurityPrivateKey, JavaSecurityInterfacesECKey, JavaObject >

/*!
 @brief Returns the private value <code>S</code>.
 @return the private value <code>S</code>.
 */
- (JavaMathBigInteger *)getS;

@end

@interface JavaSecurityInterfacesECPrivateKey : NSObject

+ (jlong)serialVersionUID;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityInterfacesECPrivateKey)

/*!
 @brief The serial version identifier.
 */
inline jlong JavaSecurityInterfacesECPrivateKey_get_serialVersionUID();
#define JavaSecurityInterfacesECPrivateKey_serialVersionUID -7896394956925609184LL
J2OBJC_STATIC_FIELD_CONSTANT(JavaSecurityInterfacesECPrivateKey, serialVersionUID, jlong)

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityInterfacesECPrivateKey)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityInterfacesECPrivateKey")