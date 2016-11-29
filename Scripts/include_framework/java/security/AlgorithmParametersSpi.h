//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/AlgorithmParametersSpi.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi")
#ifdef RESTRICT_JavaSecurityAlgorithmParametersSpi
#define INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi 0
#else
#define INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi 1
#endif
#undef RESTRICT_JavaSecurityAlgorithmParametersSpi

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaSecurityAlgorithmParametersSpi_) && (INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi || defined(INCLUDE_JavaSecurityAlgorithmParametersSpi))
#define JavaSecurityAlgorithmParametersSpi_

@class IOSByteArray;
@class IOSClass;
@protocol JavaSecuritySpecAlgorithmParameterSpec;

/*!
 @brief <code>AlgorithmParametersSpi</code> is the Service Provider Interface (SPI)
 definition for <code>AlgorithmParameters</code>.
 - seealso: AlgorithmParameters
 */
@interface JavaSecurityAlgorithmParametersSpi : NSObject

#pragma mark Public

- (instancetype)init;

#pragma mark Protected

/*!
 @brief Returns the parameters in their default encoding format.
 The default
 encoding format is ASN.1.
 @return the encoded parameters.
 @throws IOException
 if this <code>AlgorithmParametersSpi</code> has already been
 initialized, or if this parameters could not be encoded.
 */
- (IOSByteArray *)engineGetEncoded;

/*!
 @brief Returns the parameters in the specified encoding format.
 @param format
 the name of the encoding format.
 @return the encoded parameters.
 @throws IOException
 if this <code>AlgorithmParametersSpi</code> has already been
 initialized, or if this parameters could not be encoded.
 */
- (IOSByteArray *)engineGetEncodedWithNSString:(NSString *)format;

/*!
 @brief Returns the <code>AlgorithmParameterSpec</code> for this <code>AlgorithmParametersSpi</code>
 .
 @param paramSpec
 the type of the parameter specification in which this
 parameters should be converted.
 @return the <code>AlgorithmParameterSpec</code> for this <code>AlgorithmParametersSpi</code>
 .
 @throws InvalidParameterSpecException
 if this <code>AlgorithmParametersSpi</code> has already been
 initialized, or if this parameters could not be converted to
 the specified class.
 */
- (id<JavaSecuritySpecAlgorithmParameterSpec>)engineGetParameterSpecWithIOSClass:(IOSClass *)paramSpec;

/*!
 @brief Initializes this <code>AlgorithmParametersSpi</code> with the specified
 <code>AlgorithmParameterSpec</code>.
 @param paramSpec
 the parameter specification.
 @throws InvalidParameterSpecException
 if this <code>AlgorithmParametersSpi</code> has already been
 initialized or the given <code>paramSpec</code> is not appropriate
 for initializing this <code>AlgorithmParametersSpi</code>.
 */
- (void)engineInitWithJavaSecuritySpecAlgorithmParameterSpec:(id<JavaSecuritySpecAlgorithmParameterSpec>)paramSpec;

/*!
 @brief Initializes this <code>AlgorithmParametersSpi</code> with the specified
 <code>byte[]</code> using the default decoding format for parameters.
 The
 default encoding format is ASN.1.
 @param params
 the encoded parameters.
 @throws IOException
 if this <code>AlgorithmParametersSpi</code> has already been
 initialized, or the parameter could not be encoded.
 */
- (void)engineInitWithByteArray:(IOSByteArray *)params;

/*!
 @brief Initializes this <code>AlgorithmParametersSpi</code> with the specified
 <code>byte[]</code> using the specified decoding format.
 @param params
 the encoded parameters.
 @param format
 the name of the decoding format.
 @throws IOException
 if this <code>AlgorithmParametersSpi</code> has already been
 initialized, or the parameter could not be encoded.
 */
- (void)engineInitWithByteArray:(IOSByteArray *)params
                   withNSString:(NSString *)format;

/*!
 @brief Returns a string containing a concise, human-readable description of this
 <code>AlgorithmParametersSpi</code>.
 @return a printable representation for this <code>AlgorithmParametersSpi</code>
 .
 */
- (NSString *)engineToString;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaSecurityAlgorithmParametersSpi)

FOUNDATION_EXPORT void JavaSecurityAlgorithmParametersSpi_init(JavaSecurityAlgorithmParametersSpi *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaSecurityAlgorithmParametersSpi)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaSecurityAlgorithmParametersSpi")
