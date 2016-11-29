//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/net/Inet4Address.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaNetInet4Address")
#ifdef RESTRICT_JavaNetInet4Address
#define INCLUDE_ALL_JavaNetInet4Address 0
#else
#define INCLUDE_ALL_JavaNetInet4Address 1
#endif
#undef RESTRICT_JavaNetInet4Address

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaNetInet4Address_) && (INCLUDE_ALL_JavaNetInet4Address || defined(INCLUDE_JavaNetInet4Address))
#define JavaNetInet4Address_

#define RESTRICT_JavaNetInetAddress 1
#define INCLUDE_JavaNetInetAddress 1
#include "../../java/net/InetAddress.h"

@class IOSByteArray;

/*!
 @brief An IPv4 address.
 See <code>InetAddress</code>.
 */
@interface JavaNetInet4Address : JavaNetInetAddress

+ (JavaNetInetAddress *)ANY;

+ (JavaNetInetAddress *)ALL;

+ (JavaNetInetAddress *)LOOPBACK;

#pragma mark Public

- (jboolean)isAnyLocalAddress;

- (jboolean)isLinkLocalAddress;

- (jboolean)isLoopbackAddress;

- (jboolean)isMCGlobal;

- (jboolean)isMCLinkLocal;

- (jboolean)isMCNodeLocal;

- (jboolean)isMCOrgLocal;

- (jboolean)isMCSiteLocal;

- (jboolean)isMulticastAddress;

- (jboolean)isSiteLocalAddress;

#pragma mark Package-Private

- (instancetype)initWithByteArray:(IOSByteArray *)ipaddress
                     withNSString:(NSString *)hostName;

@end

J2OBJC_STATIC_INIT(JavaNetInet4Address)

/*!
 */
inline JavaNetInetAddress *JavaNetInet4Address_get_ANY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ANY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet4Address, ANY, JavaNetInetAddress *)

/*!
 */
inline JavaNetInetAddress *JavaNetInet4Address_get_ALL();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_ALL;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet4Address, ALL, JavaNetInetAddress *)

/*!
 */
inline JavaNetInetAddress *JavaNetInet4Address_get_LOOPBACK();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT JavaNetInetAddress *JavaNetInet4Address_LOOPBACK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaNetInet4Address, LOOPBACK, JavaNetInetAddress *)

FOUNDATION_EXPORT void JavaNetInet4Address_initWithByteArray_withNSString_(JavaNetInet4Address *self, IOSByteArray *ipaddress, NSString *hostName);

FOUNDATION_EXPORT JavaNetInet4Address *new_JavaNetInet4Address_initWithByteArray_withNSString_(IOSByteArray *ipaddress, NSString *hostName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaNetInet4Address *create_JavaNetInet4Address_initWithByteArray_withNSString_(IOSByteArray *ipaddress, NSString *hostName);

J2OBJC_TYPE_LITERAL_HEADER(JavaNetInet4Address)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaNetInet4Address")
