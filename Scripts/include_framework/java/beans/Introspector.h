//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: apache_harmony/classlib/modules/beans/src/main/java/java/beans/Introspector.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaBeansIntrospector")
#ifdef RESTRICT_JavaBeansIntrospector
#define INCLUDE_ALL_JavaBeansIntrospector 0
#else
#define INCLUDE_ALL_JavaBeansIntrospector 1
#endif
#undef RESTRICT_JavaBeansIntrospector

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaBeansIntrospector_) && (INCLUDE_ALL_JavaBeansIntrospector || defined(INCLUDE_JavaBeansIntrospector))
#define JavaBeansIntrospector_

@class IOSClass;
@class IOSObjectArray;
@protocol JavaBeansBeanInfo;

/*!
 @brief The <code>Introspector</code> is a utility for developers to figure out
 which properties, events, and methods a JavaBean supports.
 <p>
 The <code>Introspector</code> class walks over the class/superclass chain
 of the target bean class. At each level it checks if there is a matching
 <code>BeanInfo</code> class which provides explicit information about the
 bean, and if so uses that explicit information. Otherwise it uses the low
 level reflection APIs to study the target class and uses design patterns to
 analyze its behaviour and then proceeds to continue the introspection with
 its baseclass.
 </p>
 <p>
 To look for the explicit information of a bean:
 </p>
 <ol>
 <li>The <code>Introspector</code> appends "BeanInfo" to the qualified name
 of the bean class, try to use the new class as the "BeanInfo" class. If the
 "BeanInfo" class exsits and returns non-null value when queried for explicit
 information, use the explicit information</li>
 <li>If the first step fails, the <code>Introspector</code> will extract a
 simple class name of the bean class by removing the package name from the
 qualified name of the bean class, append "BeanInfo" to it. And look for the
 simple class name in the packages defined in the "BeanInfo" search path (The
 default "BeanInfo" search path is <code>sun.beans.infos</code>). If it
 finds a "BeanInfo" class and the "BeanInfo" class returns non-null value when
 queried for explicit information, use the explicit information</li>
 </ol>
 */
@interface JavaBeansIntrospector : NSObject

+ (jint)IGNORE_ALL_BEANINFO;

+ (jint)IGNORE_IMMEDIATE_BEANINFO;

+ (jint)USE_ALL_BEANINFO;

#pragma mark Public

/*!
 @brief Decapitalizes a given string according to the rule:
 <ul>
 <li>If the first or only character is Upper Case, it is made Lower Case
 <li>UNLESS the second character is also Upper Case, when the String is
 returned unchanged <eul>
 @param name -
 the String to decapitalize
 @return the decapitalized version of the String
 */
+ (NSString *)decapitalizeWithNSString:(NSString *)name;

/*!
 @brief Flushes all <code>BeanInfo</code> caches.
 */
+ (void)flushCaches;

/*!
 @brief Flushes the <code>BeanInfo</code> caches of the specified bean class
 @param clazz
 the specified bean class
 */
+ (void)flushFromCachesWithIOSClass:(IOSClass *)clazz;

/*!
 @brief Gets the <code>BeanInfo</code> object which contains the information of
 the properties, events and methods of the specified bean class.
 <p>
 The <code>Introspector</code> will cache the <code>BeanInfo</code>
 object. Subsequent calls to this method will be answered with the cached
 data.
 </p>
 @param beanClass
 the specified bean class.
 @return the <code>BeanInfo</code> of the bean class.
 @throws IntrospectionException
 */
+ (id<JavaBeansBeanInfo>)getBeanInfoWithIOSClass:(IOSClass *)beanClass;

/*!
 @brief Gets the <code>BeanInfo</code> object which contains the information of
 the properties, events and methods of the specified bean class.
 It will
 not introspect the "stopclass" and its super class.
 <p>
 The <code>Introspector</code> will cache the <code>BeanInfo</code>
 object. Subsequent calls to this method will be answered with the cached
 data.
 </p>
 @param beanClass
 the specified beanClass.
 @param stopClass
 the sopt class which should be super class of the bean class.
 May be null.
 @return the <code>BeanInfo</code> of the bean class.
 @throws IntrospectionException
 */
+ (id<JavaBeansBeanInfo>)getBeanInfoWithIOSClass:(IOSClass *)beanClass
                                    withIOSClass:(IOSClass *)stopClass;

/*!
 @brief Gets the <code>BeanInfo</code> object which contains the information of
 the properties, events and methods of the specified bean class.
 <ol>
 <li>If <code>flag==IGNORE_ALL_BEANINFO</code>, the
 <code>Introspector</code> will ignore all <code>BeanInfo</code>
 class.</li>
 <li>If <code>flag==IGNORE_IMMEDIATE_BEANINFO</code>, the
 <code>Introspector</code> will ignore the <code>BeanInfo</code> class
 of the current bean class.</li>
 <li>If <code>flag==USE_ALL_BEANINFO</code>, the
 <code>Introspector</code> will use all <code>BeanInfo</code> class
 which have been found.</li>
 </ol>
 <p>
 The <code>Introspector</code> will cache the <code>BeanInfo</code>
 object. Subsequent calls to this method will be answered with the cached
 data.
 </p>
 @param beanClass
 the specified bean class.
 @param flags
 the flag to control the usage of the explicit
 <code>BeanInfo</code> class.
 @return the <code>BeanInfo</code> of the bean class.
 @throws IntrospectionException
 */
+ (id<JavaBeansBeanInfo>)getBeanInfoWithIOSClass:(IOSClass *)beanClass
                                         withInt:(jint)flags;

/*!
 @brief Gets an array of search packages.
 @return an array of search packages.
 */
+ (IOSObjectArray *)getBeanInfoSearchPath;

/*!
 @brief Sets the search packages.
 @param path the new search packages to be set.
 */
+ (void)setBeanInfoSearchPathWithNSStringArray:(IOSObjectArray *)path;

@end

J2OBJC_STATIC_INIT(JavaBeansIntrospector)

/*!
 @brief Constant values to indicate that the <code>Introspector</code> will
 ignore all <code>BeanInfo</code> class.
 */
inline jint JavaBeansIntrospector_get_IGNORE_ALL_BEANINFO();
#define JavaBeansIntrospector_IGNORE_ALL_BEANINFO 3
J2OBJC_STATIC_FIELD_CONSTANT(JavaBeansIntrospector, IGNORE_ALL_BEANINFO, jint)

/*!
 @brief Constant values to indicate that the <code>Introspector</code> will
 ignore the <code>BeanInfo</code> class of the current bean class.
 */
inline jint JavaBeansIntrospector_get_IGNORE_IMMEDIATE_BEANINFO();
#define JavaBeansIntrospector_IGNORE_IMMEDIATE_BEANINFO 2
J2OBJC_STATIC_FIELD_CONSTANT(JavaBeansIntrospector, IGNORE_IMMEDIATE_BEANINFO, jint)

/*!
 @brief Constant values to indicate that the <code>Introspector</code> will use
 all <code>BeanInfo</code> class which have been found.
 This is the default one.
 */
inline jint JavaBeansIntrospector_get_USE_ALL_BEANINFO();
#define JavaBeansIntrospector_USE_ALL_BEANINFO 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaBeansIntrospector, USE_ALL_BEANINFO, jint)

FOUNDATION_EXPORT NSString *JavaBeansIntrospector_decapitalizeWithNSString_(NSString *name);

FOUNDATION_EXPORT void JavaBeansIntrospector_flushCaches();

FOUNDATION_EXPORT void JavaBeansIntrospector_flushFromCachesWithIOSClass_(IOSClass *clazz);

FOUNDATION_EXPORT id<JavaBeansBeanInfo> JavaBeansIntrospector_getBeanInfoWithIOSClass_(IOSClass *beanClass);

FOUNDATION_EXPORT id<JavaBeansBeanInfo> JavaBeansIntrospector_getBeanInfoWithIOSClass_withIOSClass_(IOSClass *beanClass, IOSClass *stopClass);

FOUNDATION_EXPORT id<JavaBeansBeanInfo> JavaBeansIntrospector_getBeanInfoWithIOSClass_withInt_(IOSClass *beanClass, jint flags);

FOUNDATION_EXPORT IOSObjectArray *JavaBeansIntrospector_getBeanInfoSearchPath();

FOUNDATION_EXPORT void JavaBeansIntrospector_setBeanInfoSearchPathWithNSStringArray_(IOSObjectArray *path);

J2OBJC_TYPE_LITERAL_HEADER(JavaBeansIntrospector)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaBeansIntrospector")
