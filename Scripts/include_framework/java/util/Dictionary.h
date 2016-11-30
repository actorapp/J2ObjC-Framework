//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/Dictionary.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilDictionary")
#ifdef RESTRICT_JavaUtilDictionary
#define INCLUDE_ALL_JavaUtilDictionary 0
#else
#define INCLUDE_ALL_JavaUtilDictionary 1
#endif
#undef RESTRICT_JavaUtilDictionary

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilDictionary_) && (INCLUDE_ALL_JavaUtilDictionary || defined(INCLUDE_JavaUtilDictionary))
#define JavaUtilDictionary_

@protocol JavaUtilEnumeration;

/*!
 @brief The <code>Dictionary</code> class is the abstract parent of any
 class, such as <code>Hashtable</code>, which maps keys to values.
 Every key and every value is an object. In any one <tt>Dictionary</tt>
 object, every key is associated with at most one value. Given a
 <tt>Dictionary</tt> and a key, the associated element can be looked up.
 Any non-<code>null</code> object can be used as a key and as a value.
 <p>
 As a rule, the <code>equals</code> method should be used by
 implementations of this class to decide if two keys are the same.
 <p>
 <strong>NOTE: This class is obsolete.  New implementations should
 implement the Map interface, rather than extending this class.</strong>
 @author unascribed
 - seealso: java.util.Map
 - seealso: java.lang.Object#equals(java.lang.Object)
 - seealso: java.lang.Object#hashCode()
 - seealso: java.util.Hashtable
 @since JDK1.0
 */
@interface JavaUtilDictionary : NSObject

#pragma mark Public

/*!
 @brief Sole constructor.
 (For invocation by subclass constructors, typically
 implicit.)
 */
- (instancetype)init;

/*!
 @brief Returns an enumeration of the values in this dictionary.
 The general
 contract for the <tt>elements</tt> method is that an
 <tt>Enumeration</tt> is returned that will generate all the elements
 contained in entries in this dictionary.
 @return an enumeration of the values in this dictionary.
 - seealso: java.util.Dictionary#keys()
 - seealso: java.util.Enumeration
 */
- (id<JavaUtilEnumeration>)elements;

/*!
 @brief Returns the value to which the key is mapped in this dictionary.
 The general contract for the <tt>isEmpty</tt> method is that if this
 dictionary contains an entry for the specified key, the associated
 value is returned; otherwise, <tt>null</tt> is returned.
 @return the value to which the key is mapped in this dictionary;
 @param key   a key in this dictionary.
 <code>null</code> if the key is not mapped to any value in
 this dictionary.
 @exception NullPointerException if the <tt>key</tt> is <tt>null</tt>.
 - seealso: java.util.Dictionary#put(java.lang.Object,java.lang.Object)
 */
- (id)getWithId:(id)key;

/*!
 @brief Tests if this dictionary maps no keys to value.
 The general contract
 for the <tt>isEmpty</tt> method is that the result is true if and only
 if this dictionary contains no entries.
 @return <code>true</code> if this dictionary maps no keys to values;
 <code>false</code> otherwise.
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an enumeration of the keys in this dictionary.
 The general
 contract for the keys method is that an <tt>Enumeration</tt> object
 is returned that will generate all the keys for which this dictionary
 contains entries.
 @return an enumeration of the keys in this dictionary.
 - seealso: java.util.Dictionary#elements()
 - seealso: java.util.Enumeration
 */
- (id<JavaUtilEnumeration>)keys;

/*!
 @brief Maps the specified <code>key</code> to the specified
 <code>value</code> in this dictionary.
 Neither the key nor the
 value can be <code>null</code>.
 <p>
 If this dictionary already contains an entry for the specified
 <tt>key</tt>, the value already in this dictionary for that
 <tt>key</tt> is returned, after modifying the entry to contain the
 new element. <p>If this dictionary does not already have an entry
 for the specified <tt>key</tt>, an entry is created for the
 specified <tt>key</tt> and <tt>value</tt>, and <tt>null</tt> is
 returned.
 <p>
 The <code>value</code> can be retrieved by calling the
 <code>get</code> method with a <code>key</code> that is equal to
 the original <code>key</code>.
 @param key     the hashtable key.
 @param value   the value.
 @return the previous value to which the <code>key</code> was mapped
 in this dictionary, or <code>null</code> if the key did not
 have a previous mapping.
 @exception NullPointerException  if the <code>key</code> or
 <code>value</code> is <code>null</code>.
 - seealso: java.lang.Object#equals(java.lang.Object)
 - seealso: java.util.Dictionary#get(java.lang.Object)
 */
- (id)putWithId:(id)key
         withId:(id)value;

/*!
 @brief Removes the <code>key</code> (and its corresponding
 <code>value</code>) from this dictionary.
 This method does nothing
 if the <code>key</code> is not in this dictionary.
 @param key   the key that needs to be removed.
 @return the value to which the <code>key</code> had been mapped in this
 dictionary, or <code>null</code> if the key did not have a
 mapping.
 @exception NullPointerException if <tt>key</tt> is <tt>null</tt>.
 */
- (id)removeWithId:(id)key;

/*!
 @brief Returns the number of entries (distinct keys) in this dictionary.
 @return the number of keys in this dictionary.
 */
- (jint)size;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilDictionary)

FOUNDATION_EXPORT void JavaUtilDictionary_init(JavaUtilDictionary *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilDictionary)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilDictionary")
