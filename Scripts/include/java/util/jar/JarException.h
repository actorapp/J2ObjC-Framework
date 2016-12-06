//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/jar/JarException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilJarJarException")
#ifdef RESTRICT_JavaUtilJarJarException
#define INCLUDE_ALL_JavaUtilJarJarException 0
#else
#define INCLUDE_ALL_JavaUtilJarJarException 1
#endif
#undef RESTRICT_JavaUtilJarJarException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilJarJarException_) && (INCLUDE_ALL_JavaUtilJarJarException || defined(INCLUDE_JavaUtilJarJarException))
#define JavaUtilJarJarException_

#define RESTRICT_JavaUtilZipZipException 1
#define INCLUDE_JavaUtilZipZipException 1
#include "java/util/zip/ZipException.h"

/*!
 @brief Signals that an error of some sort has occurred while reading from
 or writing to a JAR file.
 @author David Connelly
 @since 1.2
 */
@interface JavaUtilJarJarException : JavaUtilZipZipException

#pragma mark Public

/*!
 @brief Constructs a JarException with no detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs a JarException with the specified detail message.
 @param s the detail message
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilJarJarException)

FOUNDATION_EXPORT void JavaUtilJarJarException_init(JavaUtilJarJarException *self);

FOUNDATION_EXPORT JavaUtilJarJarException *new_JavaUtilJarJarException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilJarJarException *create_JavaUtilJarJarException_init();

FOUNDATION_EXPORT void JavaUtilJarJarException_initWithNSString_(JavaUtilJarJarException *self, NSString *s);

FOUNDATION_EXPORT JavaUtilJarJarException *new_JavaUtilJarJarException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilJarJarException *create_JavaUtilJarJarException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilJarJarException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilJarJarException")
