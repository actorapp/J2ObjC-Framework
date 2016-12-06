//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/text/TextWatcher.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidTextTextWatcher")
#ifdef RESTRICT_AndroidTextTextWatcher
#define INCLUDE_ALL_AndroidTextTextWatcher 0
#else
#define INCLUDE_ALL_AndroidTextTextWatcher 1
#endif
#undef RESTRICT_AndroidTextTextWatcher

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidTextTextWatcher_) && (INCLUDE_ALL_AndroidTextTextWatcher || defined(INCLUDE_AndroidTextTextWatcher))
#define AndroidTextTextWatcher_

#define RESTRICT_AndroidTextNoCopySpan 1
#define INCLUDE_AndroidTextNoCopySpan 1
#include "../../android/text/NoCopySpan.h"

@protocol AndroidTextEditable;
@protocol JavaLangCharSequence;

/*!
 @brief When an object of a type is attached to an Editable, its methods will
 be called when the text is changed.
 */
@protocol AndroidTextTextWatcher < AndroidTextNoCopySpan, JavaObject >

/*!
 @brief This method is called to notify you that, within <code>s</code>,
 the <code>count</code> characters beginning at <code>start</code>
 are about to be replaced by new text with length <code>after</code>.
 It is an error to attempt to make changes to <code>s</code> from
 this callback.
 */
- (void)beforeTextChangedWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                          withInt:(jint)start
                                          withInt:(jint)count
                                          withInt:(jint)after;

/*!
 @brief This method is called to notify you that, within <code>s</code>,
 the <code>count</code> characters beginning at <code>start</code>
 have just replaced old text that had length <code>before</code>.
 It is an error to attempt to make changes to <code>s</code> from
 this callback.
 */
- (void)onTextChangedWithJavaLangCharSequence:(id<JavaLangCharSequence>)s
                                      withInt:(jint)start
                                      withInt:(jint)before
                                      withInt:(jint)count;

/*!
 @brief This method is called to notify you that, somewhere within
 <code>s</code>, the text has been changed.
 It is legitimate to make further changes to <code>s</code> from
 this callback, but be careful not to get yourself into an infinite
 loop, because any changes you make will cause this method to be
 called again recursively.
 (You are not told where the change took place because other
 afterTextChanged() methods may already have made other changes
 and invalidated the offsets.  But if you need to know here,
 you can use <code>Spannable.setSpan</code> in <code>onTextChanged</code>
 to mark your place and then look up from here where the span
 ended up.
 */
- (void)afterTextChangedWithAndroidTextEditable:(id<AndroidTextEditable>)s;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidTextTextWatcher)

J2OBJC_TYPE_LITERAL_HEADER(AndroidTextTextWatcher)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidTextTextWatcher")
