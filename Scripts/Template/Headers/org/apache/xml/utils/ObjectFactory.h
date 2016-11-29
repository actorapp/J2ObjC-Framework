//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xml/utils/ObjectFactory.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectFactory")
#ifdef RESTRICT_OrgApacheXmlUtilsObjectFactory
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectFactory 0
#else
#define INCLUDE_ALL_OrgApacheXmlUtilsObjectFactory 1
#endif
#undef RESTRICT_OrgApacheXmlUtilsObjectFactory

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXmlUtilsObjectFactory_) && (INCLUDE_ALL_OrgApacheXmlUtilsObjectFactory || defined(INCLUDE_OrgApacheXmlUtilsObjectFactory))
#define OrgApacheXmlUtilsObjectFactory_

@class IOSClass;
@class JavaLangClassLoader;

/*!
 @brief This class is duplicated for each JAXP subpackage so keep it in sync.
 It is package private and therefore is not exposed as part of the JAXP
 API.
 <p>
 This code is designed to implement the JAXP 1.1 spec pluggability
 feature and is designed to run on JDK version 1.1 and
 later, and to compile on JDK 1.2 and onward.  
 The code also runs both as part of an unbundled jar file and
 when bundled as part of the JDK.
 <p>
 This class was moved from the <code>javax.xml.parsers.ObjectFactory</code>
 class and modified to be used as a general utility for creating objects 
 dynamically.
 @version $Id:  $
 */
@interface OrgApacheXmlUtilsObjectFactory : NSObject

#pragma mark Package-Private

- (instancetype)init;

/*!
 @brief Finds the implementation Class object in the specified order.
 The
 specified order is the following:
 <ol>
 <li>query the system property using <code>System.getProperty</code>
 <li>read <code>META-INF/services/<i>factoryId</i></code> file
 <li>use fallback classname
 </ol>
 @return instance of factory, never null
 @param factoryId             Name of the factory to find, same as
 a property name
 @param fallbackClassName     Implementation class name, if nothing else
 is found.  Use null to mean no fallback.
 @exception ObjectFactory.ConfigurationError
 */
+ (id)createObjectWithNSString:(NSString *)factoryId
                  withNSString:(NSString *)fallbackClassName;

/*!
 @brief Finds the implementation Class object in the specified order.
 The
 specified order is the following:
 <ol>
 <li>query the system property using <code>System.getProperty</code>
 <li>read <code>$java.home/lib/<i>propertiesFilename</i></code> file
 <li>read <code>META-INF/services/<i>factoryId</i></code> file
 <li>use fallback classname
 </ol>
 @return instance of factory, never null
 @param factoryId             Name of the factory to find, same as
 a property name
 @param propertiesFilename The filename in the $java.home/lib directory
 of the properties file.  If none specified,
 ${java.home}/lib/xalan.properties will be used.
 @param fallbackClassName     Implementation class name, if nothing else
 is found.  Use null to mean no fallback.
 @exception ObjectFactory.ConfigurationError
 */
+ (id)createObjectWithNSString:(NSString *)factoryId
                  withNSString:(NSString *)propertiesFilename
                  withNSString:(NSString *)fallbackClassName;

/*!
 @brief Figure out which ClassLoader to use.
 For JDK 1.2 and later use
 the context ClassLoader.
 */
+ (JavaLangClassLoader *)findClassLoader;

/*!
 @brief Find a Class using the specified ClassLoader
 */
+ (IOSClass *)findProviderClassWithNSString:(NSString *)className_
                    withJavaLangClassLoader:(JavaLangClassLoader *)cl
                                withBoolean:(jboolean)doFallback;

/*!
 @brief Finds the implementation Class object in the specified order.
 The
 specified order is the following:
 <ol>
 <li>query the system property using <code>System.getProperty</code>
 <li>read <code>$java.home/lib/<i>propertiesFilename</i></code> file
 <li>read <code>META-INF/services/<i>factoryId</i></code> file
 <li>use fallback classname
 </ol>
 @return Class object of factory, never null
 @param factoryId             Name of the factory to find, same as
 a property name
 @param propertiesFilename The filename in the $java.home/lib directory
 of the properties file.  If none specified,
 ${java.home}/lib/xalan.properties will be used.
 @param fallbackClassName     Implementation class name, if nothing else
 is found.  Use null to mean no fallback.
 @exception ObjectFactory.ConfigurationError
 */
+ (IOSClass *)lookUpFactoryClassWithNSString:(NSString *)factoryId;

/*!
 @brief Finds the implementation Class object in the specified order.
 The
 specified order is the following:
 <ol>
 <li>query the system property using <code>System.getProperty</code>
 <li>read <code>$java.home/lib/<i>propertiesFilename</i></code> file
 <li>read <code>META-INF/services/<i>factoryId</i></code> file
 <li>use fallback classname
 </ol>
 @return Class object that provides factory service, never null
 @param factoryId             Name of the factory to find, same as
 a property name
 @param propertiesFilename The filename in the $java.home/lib directory
 of the properties file.  If none specified,
 ${java.home}/lib/xalan.properties will be used.
 @param fallbackClassName     Implementation class name, if nothing else
 is found.  Use null to mean no fallback.
 @exception ObjectFactory.ConfigurationError
 */
+ (IOSClass *)lookUpFactoryClassWithNSString:(NSString *)factoryId
                                withNSString:(NSString *)propertiesFilename
                                withNSString:(NSString *)fallbackClassName;

/*!
 @brief Finds the name of the required implementation class in the specified
 order.
 The specified order is the following:
 <ol>
 <li>query the system property using <code>System.getProperty</code>
 <li>read <code>$java.home/lib/<i>propertiesFilename</i></code> file
 <li>read <code>META-INF/services/<i>factoryId</i></code> file
 <li>use fallback classname
 </ol>
 @return name of class that provides factory service, never null
 @param factoryId             Name of the factory to find, same as
 a property name
 @param propertiesFilename The filename in the $java.home/lib directory
 of the properties file.  If none specified,
 ${java.home}/lib/xalan.properties will be used.
 @param fallbackClassName     Implementation class name, if nothing else
 is found.  Use null to mean no fallback.
 @exception ObjectFactory.ConfigurationError
 */
+ (NSString *)lookUpFactoryClassNameWithNSString:(NSString *)factoryId
                                    withNSString:(NSString *)propertiesFilename
                                    withNSString:(NSString *)fallbackClassName;

/*!
 @brief Create an instance of a class using the specified ClassLoader
 */
+ (id)newInstanceWithNSString:(NSString *)className_
      withJavaLangClassLoader:(JavaLangClassLoader *)cl
                  withBoolean:(jboolean)doFallback OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(OrgApacheXmlUtilsObjectFactory)

FOUNDATION_EXPORT id OrgApacheXmlUtilsObjectFactory_createObjectWithNSString_withNSString_(NSString *factoryId, NSString *fallbackClassName);

FOUNDATION_EXPORT id OrgApacheXmlUtilsObjectFactory_createObjectWithNSString_withNSString_withNSString_(NSString *factoryId, NSString *propertiesFilename, NSString *fallbackClassName);

FOUNDATION_EXPORT IOSClass *OrgApacheXmlUtilsObjectFactory_lookUpFactoryClassWithNSString_(NSString *factoryId);

FOUNDATION_EXPORT IOSClass *OrgApacheXmlUtilsObjectFactory_lookUpFactoryClassWithNSString_withNSString_withNSString_(NSString *factoryId, NSString *propertiesFilename, NSString *fallbackClassName);

FOUNDATION_EXPORT NSString *OrgApacheXmlUtilsObjectFactory_lookUpFactoryClassNameWithNSString_withNSString_withNSString_(NSString *factoryId, NSString *propertiesFilename, NSString *fallbackClassName);

FOUNDATION_EXPORT JavaLangClassLoader *OrgApacheXmlUtilsObjectFactory_findClassLoader();

FOUNDATION_EXPORT id OrgApacheXmlUtilsObjectFactory_newInstanceWithNSString_withJavaLangClassLoader_withBoolean_(NSString *className_, JavaLangClassLoader *cl, jboolean doFallback);

FOUNDATION_EXPORT IOSClass *OrgApacheXmlUtilsObjectFactory_findProviderClassWithNSString_withJavaLangClassLoader_withBoolean_(NSString *className_, JavaLangClassLoader *cl, jboolean doFallback);

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectFactory_init(OrgApacheXmlUtilsObjectFactory *self);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectFactory *new_OrgApacheXmlUtilsObjectFactory_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectFactory *create_OrgApacheXmlUtilsObjectFactory_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsObjectFactory)

#endif

#if !defined (OrgApacheXmlUtilsObjectFactory_ConfigurationError_) && (INCLUDE_ALL_OrgApacheXmlUtilsObjectFactory || defined(INCLUDE_OrgApacheXmlUtilsObjectFactory_ConfigurationError))
#define OrgApacheXmlUtilsObjectFactory_ConfigurationError_

#define RESTRICT_JavaLangError 1
#define INCLUDE_JavaLangError 1
#include "../../../../java/lang/Error.h"

@class JavaLangException;

/*!
 @brief A configuration error.
 */
@interface OrgApacheXmlUtilsObjectFactory_ConfigurationError : JavaLangError

+ (jlong)serialVersionUID;

#pragma mark Package-Private

/*!
 @brief Construct a new instance with the specified detail string and
 exception.
 */
- (instancetype)initWithNSString:(NSString *)msg
           withJavaLangException:(JavaLangException *)x;

/*!
 @brief Returns the exception associated to this error.
 */
- (JavaLangException *)getException;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgApacheXmlUtilsObjectFactory_ConfigurationError)

inline jlong OrgApacheXmlUtilsObjectFactory_ConfigurationError_get_serialVersionUID();
#define OrgApacheXmlUtilsObjectFactory_ConfigurationError_serialVersionUID 2036619216663421552LL
J2OBJC_STATIC_FIELD_CONSTANT(OrgApacheXmlUtilsObjectFactory_ConfigurationError, serialVersionUID, jlong)

FOUNDATION_EXPORT void OrgApacheXmlUtilsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(OrgApacheXmlUtilsObjectFactory_ConfigurationError *self, NSString *msg, JavaLangException *x);

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectFactory_ConfigurationError *new_OrgApacheXmlUtilsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXmlUtilsObjectFactory_ConfigurationError *create_OrgApacheXmlUtilsObjectFactory_ConfigurationError_initWithNSString_withJavaLangException_(NSString *msg, JavaLangException *x);

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXmlUtilsObjectFactory_ConfigurationError)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXmlUtilsObjectFactory")
