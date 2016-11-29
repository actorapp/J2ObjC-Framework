//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/io/NotSerializableException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoNotSerializableException")
#ifdef RESTRICT_JavaIoNotSerializableException
#define INCLUDE_ALL_JavaIoNotSerializableException 0
#else
#define INCLUDE_ALL_JavaIoNotSerializableException 1
#endif
#undef RESTRICT_JavaIoNotSerializableException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoNotSerializableException_) && (INCLUDE_ALL_JavaIoNotSerializableException || defined(INCLUDE_JavaIoNotSerializableException))
#define JavaIoNotSerializableException_

#define RESTRICT_JavaIoObjectStreamException 1
#define INCLUDE_JavaIoObjectStreamException 1
#include "../../java/io/ObjectStreamException.h"

/*!
 @brief Thrown when an instance is required to have a Serializable interface.
 The serialization runtime or the class of the instance can throw
 this exception. The argument should be the name of the class.
 @author unascribed
 @since JDK1.1
 */
@interface JavaIoNotSerializableException : JavaIoObjectStreamException

#pragma mark Public

/*!
 @brief Constructs a NotSerializableException object.
 */
- (instancetype)init;

/*!
 @brief Constructs a NotSerializableException object with message string.
 @param classname Class of the instance being serialized/deserialized.
 */
- (instancetype)initWithNSString:(NSString *)classname;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoNotSerializableException)

FOUNDATION_EXPORT void JavaIoNotSerializableException_initWithNSString_(JavaIoNotSerializableException *self, NSString *classname);

FOUNDATION_EXPORT JavaIoNotSerializableException *new_JavaIoNotSerializableException_initWithNSString_(NSString *classname) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoNotSerializableException *create_JavaIoNotSerializableException_initWithNSString_(NSString *classname);

FOUNDATION_EXPORT void JavaIoNotSerializableException_init(JavaIoNotSerializableException *self);

FOUNDATION_EXPORT JavaIoNotSerializableException *new_JavaIoNotSerializableException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoNotSerializableException *create_JavaIoNotSerializableException_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaIoNotSerializableException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoNotSerializableException")
