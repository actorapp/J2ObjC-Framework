//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsEmptyValues.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues))
#define OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "../../../../../org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@class IOSClass;
@class OrgMockitoInternalUtilObjectMethodsGuru;
@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Default answer of every Mockito mock.
 <ul>
 <li>
 Returns appropriate primitive for primitive-returning methods
 </li>
 <li>
 Returns consistent values for primitive wrapper classes (e.g. int-returning method retuns 0 <b>and</b> Integer-returning method returns 0, too)
 </li>
 <li>
 Returns empty collection for collection-returning methods (works for most commonly used collection types)
 </li>
 <li>
 Returns description of mock for toString() method
 </li>
 <li>
 Returns non-zero for Comparable#compareTo(T other) method (see issue 184)
 </li>
 <li>
 Returns null for everything else
 </li>
 </ul>
 */
@interface OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable > {
 @public
  OrgMockitoInternalUtilObjectMethodsGuru *methodsGuru_;
}

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

#pragma mark Package-Private

- (id)returnValueForWithIOSClass:(IOSClass *)type;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues)

J2OBJC_FIELD_SETTER(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues, methodsGuru_, OrgMockitoInternalUtilObjectMethodsGuru *)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_init(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues *new_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues *create_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsEmptyValues")
