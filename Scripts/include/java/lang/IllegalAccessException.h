//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/lang/IllegalAccessException.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangIllegalAccessException")
#ifdef RESTRICT_JavaLangIllegalAccessException
#define INCLUDE_ALL_JavaLangIllegalAccessException 0
#else
#define INCLUDE_ALL_JavaLangIllegalAccessException 1
#endif
#undef RESTRICT_JavaLangIllegalAccessException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangIllegalAccessException_) && (INCLUDE_ALL_JavaLangIllegalAccessException || defined(INCLUDE_JavaLangIllegalAccessException))
#define JavaLangIllegalAccessException_

#define RESTRICT_JavaLangReflectiveOperationException 1
#define INCLUDE_JavaLangReflectiveOperationException 1
#include "java/lang/ReflectiveOperationException.h"

/*!
 @brief An IllegalAccessException is thrown when an application tries
 to reflectively create an instance (other than an array),
 set or get a field, or invoke a method, but the currently
 executing method does not have access to the definition of
 the specified class, field, method or constructor.
 @author unascribed
 - seealso: Class#newInstance()
 - seealso: java.lang.reflect.Field#set(Object,Object)
 - seealso: java.lang.reflect.Field#setBoolean(Object,boolean)
 - seealso: java.lang.reflect.Field#setByte(Object,byte)
 - seealso: java.lang.reflect.Field#setShort(Object,short)
 - seealso: java.lang.reflect.Field#setChar(Object,char)
 - seealso: java.lang.reflect.Field#setInt(Object,int)
 - seealso: java.lang.reflect.Field#setLong(Object,long)
 - seealso: java.lang.reflect.Field#setFloat(Object,float)
 - seealso: java.lang.reflect.Field#setDouble(Object,double)
 - seealso: java.lang.reflect.Field#get(Object)
 - seealso: java.lang.reflect.Field#getBoolean(Object)
 - seealso: java.lang.reflect.Field#getByte(Object)
 - seealso: java.lang.reflect.Field#getShort(Object)
 - seealso: java.lang.reflect.Field#getChar(Object)
 - seealso: java.lang.reflect.Field#getInt(Object)
 - seealso: java.lang.reflect.Field#getLong(Object)
 - seealso: java.lang.reflect.Field#getFloat(Object)
 - seealso: java.lang.reflect.Field#getDouble(Object)
 - seealso: java.lang.reflect.Method#invoke(Object,Object[])
 - seealso: java.lang.reflect.Constructor#newInstance(Object[])
 @since JDK1.0
 */
@interface JavaLangIllegalAccessException : JavaLangReflectiveOperationException

#pragma mark Public

/*!
 @brief Constructs an <code>IllegalAccessException</code> without a
 detail message.
 */
- (instancetype)init;

/*!
 @brief Constructs an <code>IllegalAccessException</code> with a detail message.
 @param s   the detail message.
 */
- (instancetype)initWithNSString:(NSString *)s;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangIllegalAccessException)

FOUNDATION_EXPORT void JavaLangIllegalAccessException_init(JavaLangIllegalAccessException *self);

FOUNDATION_EXPORT JavaLangIllegalAccessException *new_JavaLangIllegalAccessException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalAccessException *create_JavaLangIllegalAccessException_init();

FOUNDATION_EXPORT void JavaLangIllegalAccessException_initWithNSString_(JavaLangIllegalAccessException *self, NSString *s);

FOUNDATION_EXPORT JavaLangIllegalAccessException *new_JavaLangIllegalAccessException_initWithNSString_(NSString *s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangIllegalAccessException *create_JavaLangIllegalAccessException_initWithNSString_(NSString *s);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangIllegalAccessException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangIllegalAccessException")
