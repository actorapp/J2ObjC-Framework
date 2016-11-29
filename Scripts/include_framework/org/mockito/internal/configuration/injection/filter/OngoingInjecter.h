//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/internal/configuration/injection/filter/OngoingInjecter.java
//

#include "../../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter")
#ifdef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter 0
#else
#define INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter 1
#endif
#undef RESTRICT_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter_) && (INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter || defined(INCLUDE_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter))
#define OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter_

/*!
 @brief Allow the ongoing injection of a mock candidate.
 */
@protocol OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter < JavaObject >

/*!
 @brief Inject the mock.
 <p>
 Please check the actual implementation.
 </p>
 @return the mock that was injected, <code>null</code> otherwise.
 */
- (id)thenInject;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoInternalConfigurationInjectionFilterOngoingInjecter")
