//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/xalan/third_party/android/platform/external/apache-xml/src/main/java/org/apache/xpath/res/XPATHMessages.java
//

#include "../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgApacheXpathResXPATHMessages")
#ifdef RESTRICT_OrgApacheXpathResXPATHMessages
#define INCLUDE_ALL_OrgApacheXpathResXPATHMessages 0
#else
#define INCLUDE_ALL_OrgApacheXpathResXPATHMessages 1
#endif
#undef RESTRICT_OrgApacheXpathResXPATHMessages

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgApacheXpathResXPATHMessages_) && (INCLUDE_ALL_OrgApacheXpathResXPATHMessages || defined(INCLUDE_OrgApacheXpathResXPATHMessages))
#define OrgApacheXpathResXPATHMessages_

#define RESTRICT_OrgApacheXmlResXMLMessages 1
#define INCLUDE_OrgApacheXmlResXMLMessages 1
#include "../../../../org/apache/xml/res/XMLMessages.h"

@class IOSObjectArray;
@class JavaUtilListResourceBundle;

/*!
 @brief A utility class for issuing XPath error messages.
  internal
 */
@interface OrgApacheXpathResXPATHMessages : OrgApacheXmlResXMLMessages

#pragma mark Public

- (instancetype)init;

/*!
 @brief Creates a message from the specified key and replacement
 arguments, localized to the given locale.
 @param msgKey    The key for the message text.
 @param args      The arguments to be used as replacement text
 in the message created.
 @return The formatted message string.
 */
+ (NSString *)createXPATHMessageWithNSString:(NSString *)msgKey
                           withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Creates a message from the specified key and replacement
 arguments, localized to the given locale.
 @param fResourceBundle The resource bundle to use.
 @param msgKey  The message key to use.
 @param args      The arguments to be used as replacement text
 in the message created.
 @return The formatted message string.
 */
+ (NSString *)createXPATHMsgWithJavaUtilListResourceBundle:(JavaUtilListResourceBundle *)fResourceBundle
                                              withNSString:(NSString *)msgKey
                                         withNSObjectArray:(IOSObjectArray *)args;

/*!
 @brief Creates a message from the specified key and replacement
 arguments, localized to the given locale.
 @param msgKey The key for the message text.
 @param args      The arguments to be used as replacement text
 in the message created.
 @return The formatted warning string.
 */
+ (NSString *)createXPATHWarningWithNSString:(NSString *)msgKey
                           withNSObjectArray:(IOSObjectArray *)args;

@end

J2OBJC_STATIC_INIT(OrgApacheXpathResXPATHMessages)

FOUNDATION_EXPORT NSString *OrgApacheXpathResXPATHMessages_createXPATHMessageWithNSString_withNSObjectArray_(NSString *msgKey, IOSObjectArray *args);

FOUNDATION_EXPORT NSString *OrgApacheXpathResXPATHMessages_createXPATHWarningWithNSString_withNSObjectArray_(NSString *msgKey, IOSObjectArray *args);

FOUNDATION_EXPORT NSString *OrgApacheXpathResXPATHMessages_createXPATHMsgWithJavaUtilListResourceBundle_withNSString_withNSObjectArray_(JavaUtilListResourceBundle *fResourceBundle, NSString *msgKey, IOSObjectArray *args);

FOUNDATION_EXPORT void OrgApacheXpathResXPATHMessages_init(OrgApacheXpathResXPATHMessages *self);

FOUNDATION_EXPORT OrgApacheXpathResXPATHMessages *new_OrgApacheXpathResXPATHMessages_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgApacheXpathResXPATHMessages *create_OrgApacheXpathResXPATHMessages_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgApacheXpathResXPATHMessages)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgApacheXpathResXPATHMessages")
