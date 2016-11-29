//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/stubbing/defaultanswers/ReturnsSmartNulls.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls")
#ifdef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls 0
#else
#define INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls 1
#endif
#undef RESTRICT_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_) && (INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls || defined(INCLUDE_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls))
#define OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_

#define RESTRICT_OrgMockitoStubbingAnswer 1
#define INCLUDE_OrgMockitoStubbingAnswer 1
#include "../../../../../org/mockito/stubbing/Answer.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../../../java/io/Serializable.h"

@protocol OrgMockitoInvocationInvocationOnMock;

/*!
 @brief Optional Answer that can be used with
 <code>Mockito.mock(Class,Answer)</code>
 <p>
 This implementation can be helpful when working with legacy code.
 Unstubbed
 methods often return null. If your code uses the object returned by an
 unstubbed call you get a NullPointerException. This implementation of
 Answer returns SmartNulls instead of nulls.
 SmartNull gives nicer exception message than NPE because it points out the
 line where unstubbed method was called. You just click on the stack trace.
 <p>
 ReturnsSmartNulls first tries to return ordinary return values (see
 <code>ReturnsMoreEmptyValues</code>) then it tries to return SmartNull. If the
 return type is not mockable (e.g. final) then ordinary null is returned.
 <p>
 ReturnsSmartNulls will be probably the default return values strategy in
 Mockito 2.0
 */
@interface OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls : NSObject < OrgMockitoStubbingAnswer, JavaIoSerializable >

#pragma mark Public

- (instancetype)init;

- (id)answerWithOrgMockitoInvocationInvocationOnMock:(id<OrgMockitoInvocationInvocationOnMock>)invocation;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls)

FOUNDATION_EXPORT void OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_init(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls *self);

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls *new_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls *create_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalStubbingDefaultanswersReturnsSmartNulls")
