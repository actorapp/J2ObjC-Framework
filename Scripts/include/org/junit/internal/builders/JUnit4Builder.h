//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/internal/builders/JUnit4Builder.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitInternalBuildersJUnit4Builder")
#ifdef RESTRICT_OrgJunitInternalBuildersJUnit4Builder
#define INCLUDE_ALL_OrgJunitInternalBuildersJUnit4Builder 0
#else
#define INCLUDE_ALL_OrgJunitInternalBuildersJUnit4Builder 1
#endif
#undef RESTRICT_OrgJunitInternalBuildersJUnit4Builder

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitInternalBuildersJUnit4Builder_) && (INCLUDE_ALL_OrgJunitInternalBuildersJUnit4Builder || defined(INCLUDE_OrgJunitInternalBuildersJUnit4Builder))
#define OrgJunitInternalBuildersJUnit4Builder_

#define RESTRICT_OrgJunitRunnersModelRunnerBuilder 1
#define INCLUDE_OrgJunitRunnersModelRunnerBuilder 1
#include "org/junit/runners/model/RunnerBuilder.h"

@class IOSClass;
@class OrgJunitRunnerRunner;

@interface OrgJunitInternalBuildersJUnit4Builder : OrgJunitRunnersModelRunnerBuilder

#pragma mark Public

- (instancetype)init;

- (OrgJunitRunnerRunner *)runnerForClassWithIOSClass:(IOSClass *)testClass;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitInternalBuildersJUnit4Builder)

FOUNDATION_EXPORT void OrgJunitInternalBuildersJUnit4Builder_init(OrgJunitInternalBuildersJUnit4Builder *self);

FOUNDATION_EXPORT OrgJunitInternalBuildersJUnit4Builder *new_OrgJunitInternalBuildersJUnit4Builder_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgJunitInternalBuildersJUnit4Builder *create_OrgJunitInternalBuildersJUnit4Builder_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitInternalBuildersJUnit4Builder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitInternalBuildersJUnit4Builder")
