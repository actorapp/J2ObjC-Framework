//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/SpannableStringInternal.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextSpannableStringInternal")
#ifdef RESTRICT_AndroidTextSpannableStringInternal
#define INCLUDE_ALL_AndroidTextSpannableStringInternal 0
#else
#define INCLUDE_ALL_AndroidTextSpannableStringInternal 1
#endif
#undef RESTRICT_AndroidTextSpannableStringInternal

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTextSpannableStringInternal_) && (INCLUDE_ALL_AndroidTextSpannableStringInternal || defined(INCLUDE_AndroidTextSpannableStringInternal))
#define AndroidTextSpannableStringInternal_

#define RESTRICT_JavaLangCharSequence 1
#define INCLUDE_JavaLangCharSequence 1
#include "../../java/lang/CharSequence.h"

@class IOSCharArray;
@class IOSClass;
@class IOSObjectArray;
@protocol JavaUtilStreamIntStream;

@interface AndroidTextSpannableStringInternal : NSObject < JavaLangCharSequence >

+ (IOSObjectArray *)EMPTY;

#pragma mark Public

- (jchar)charAtWithInt:(jint)i;

- (jboolean)isEqual:(id)o;

- (void)getCharsWithInt:(jint)start
                withInt:(jint)end
          withCharArray:(IOSCharArray *)dest
                withInt:(jint)off;

- (jint)getSpanEndWithId:(id)what;

- (jint)getSpanFlagsWithId:(id)what;

- (IOSObjectArray *)getSpansWithInt:(jint)queryStart
                            withInt:(jint)queryEnd
                       withIOSClass:(IOSClass *)kind;

- (jint)getSpanStartWithId:(id)what;

- (NSUInteger)hash;

- (jint)length;

- (jint)nextSpanTransitionWithInt:(jint)start
                          withInt:(jint)limit
                     withIOSClass:(IOSClass *)kind;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithJavaLangCharSequence:(id<JavaLangCharSequence>)source
                                     withInt:(jint)start
                                     withInt:(jint)end;

- (void)removeSpanWithId:(id)what;

- (void)setSpanWithId:(id)what
              withInt:(jint)start
              withInt:(jint)end
              withInt:(jint)flags;

@end

J2OBJC_STATIC_INIT(AndroidTextSpannableStringInternal)

inline IOSObjectArray *AndroidTextSpannableStringInternal_get_EMPTY();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT IOSObjectArray *AndroidTextSpannableStringInternal_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(AndroidTextSpannableStringInternal, EMPTY, IOSObjectArray *)

FOUNDATION_EXPORT void AndroidTextSpannableStringInternal_initWithJavaLangCharSequence_withInt_withInt_(AndroidTextSpannableStringInternal *self, id<JavaLangCharSequence> source, jint start, jint end);

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextSpannableStringInternal)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextSpannableStringInternal")