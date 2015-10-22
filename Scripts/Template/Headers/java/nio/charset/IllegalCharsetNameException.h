//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/IllegalCharsetNameException.java
//

#ifndef _JavaNioCharsetIllegalCharsetNameException_H_
#define _JavaNioCharsetIllegalCharsetNameException_H_

#include <j2objc/J2ObjC_header.h>
#include <j2objc/java/lang/IllegalArgumentException.h>

/*!
 @brief An <code>IllegalCharsetNameException</code> is thrown when an illegal charset name
 is encountered.
 */
@interface JavaNioCharsetIllegalCharsetNameException : JavaLangIllegalArgumentException

#pragma mark Public

/*!
 @brief Constructs a new <code>IllegalCharsetNameException</code> with the supplied
 charset name.
 @param charsetName
 the encountered illegal charset name.
 */
- (instancetype)initWithNSString:(NSString *)charsetName;

/*!
 @brief Returns the encountered illegal charset name.
 */
- (NSString *)getCharsetName;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaNioCharsetIllegalCharsetNameException)

FOUNDATION_EXPORT void JavaNioCharsetIllegalCharsetNameException_initWithNSString_(JavaNioCharsetIllegalCharsetNameException *self, NSString *charsetName);

FOUNDATION_EXPORT JavaNioCharsetIllegalCharsetNameException *new_JavaNioCharsetIllegalCharsetNameException_initWithNSString_(NSString *charsetName) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(JavaNioCharsetIllegalCharsetNameException)

#endif // _JavaNioCharsetIllegalCharsetNameException_H_