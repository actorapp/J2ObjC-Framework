//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/hamcrest/internal/ArrayIterator.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgHamcrestInternalArrayIterator")
#ifdef RESTRICT_OrgHamcrestInternalArrayIterator
#define INCLUDE_ALL_OrgHamcrestInternalArrayIterator 0
#else
#define INCLUDE_ALL_OrgHamcrestInternalArrayIterator 1
#endif
#undef RESTRICT_OrgHamcrestInternalArrayIterator

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgHamcrestInternalArrayIterator_) && (INCLUDE_ALL_OrgHamcrestInternalArrayIterator || defined(INCLUDE_OrgHamcrestInternalArrayIterator))
#define OrgHamcrestInternalArrayIterator_

#define RESTRICT_JavaUtilIterator 1
#define INCLUDE_JavaUtilIterator 1
#include "java/util/Iterator.h"

@protocol JavaUtilFunctionConsumer;

@interface OrgHamcrestInternalArrayIterator : NSObject < JavaUtilIterator >

#pragma mark Public

- (instancetype)initWithId:(id)array;

- (jboolean)hasNext;

- (id)next;

- (void)remove;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgHamcrestInternalArrayIterator)

FOUNDATION_EXPORT void OrgHamcrestInternalArrayIterator_initWithId_(OrgHamcrestInternalArrayIterator *self, id array);

FOUNDATION_EXPORT OrgHamcrestInternalArrayIterator *new_OrgHamcrestInternalArrayIterator_initWithId_(id array) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgHamcrestInternalArrayIterator *create_OrgHamcrestInternalArrayIterator_initWithId_(id array);

J2OBJC_TYPE_LITERAL_HEADER(OrgHamcrestInternalArrayIterator)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgHamcrestInternalArrayIterator")
