//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/javax/xml/transform/Source.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaxXmlTransformSource")
#ifdef RESTRICT_JavaxXmlTransformSource
#define INCLUDE_ALL_JavaxXmlTransformSource 0
#else
#define INCLUDE_ALL_JavaxXmlTransformSource 1
#endif
#undef RESTRICT_JavaxXmlTransformSource

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaxXmlTransformSource_) && (INCLUDE_ALL_JavaxXmlTransformSource || defined(INCLUDE_JavaxXmlTransformSource))
#define JavaxXmlTransformSource_

/*!
 @brief An object that implements this interface contains the information
 needed to act as source input (XML source or transformation instructions).
 */
@protocol JavaxXmlTransformSource < JavaObject >

/*!
 @brief Set the system identifier for this Source.
 <p>The system identifier is optional if the source does not
 get its data from a URL, but it may still be useful to provide one.
 The application can use a system identifier, for example, to resolve
 relative URIs and to include in error messages and warnings.</p>
 @param systemId The system identifier as a URL string.
 */
- (void)setSystemIdWithNSString:(NSString *)systemId;

/*!
 @brief Get the system identifier that was set with setSystemId.
 @return The system identifier that was set with setSystemId, or null
 if setSystemId was not called.
 */
- (NSString *)getSystemId;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaxXmlTransformSource)

J2OBJC_TYPE_LITERAL_HEADER(JavaxXmlTransformSource)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaxXmlTransformSource")
