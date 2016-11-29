//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/frameworks/base/core/java/android/util/SparseIntArray.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AndroidUtilSparseIntArray")
#ifdef RESTRICT_AndroidUtilSparseIntArray
#define INCLUDE_ALL_AndroidUtilSparseIntArray 0
#else
#define INCLUDE_ALL_AndroidUtilSparseIntArray 1
#endif
#undef RESTRICT_AndroidUtilSparseIntArray

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (AndroidUtilSparseIntArray_) && (INCLUDE_ALL_AndroidUtilSparseIntArray || defined(INCLUDE_AndroidUtilSparseIntArray))
#define AndroidUtilSparseIntArray_

/*!
 @brief SparseIntArrays map integers to integers.
 Unlike a normal array of integers,
 there can be gaps in the indices.  It is intended to be more memory efficient
 than using a HashMap to map Integers to Integers, both because it avoids
 auto-boxing keys and values and its data structure doesn't rely on an extra entry object
 for each mapping.
 <p>Note that this container keeps its mappings in an array data structure,
 using a binary search to find keys.  The implementation is not intended to be appropriate for
 data structures
 that may contain large numbers of items.  It is generally slower than a traditional
 HashMap, since lookups require a binary search and adds and removes require inserting
 and deleting entries in the array.  For containers holding up to hundreds of items,
 the performance difference is not significant, less than 50%.</p>
 <p>It is possible to iterate over the items in this container using
 <code>keyAt(int)</code> and <code>valueAt(int)</code>. Iterating over the keys using
 <code>keyAt(int)</code> with ascending values of the index will return the
 keys in ascending order, or the values corresponding to the keys in ascending
 order in the case of <code>valueAt(int)<code>.</p>
 */
@interface AndroidUtilSparseIntArray : NSObject < NSCopying >

#pragma mark Public

/*!
 @brief Creates a new SparseIntArray containing no mappings.
 */
- (instancetype)init;

/*!
 @brief Creates a new SparseIntArray containing no mappings that will not
 require any additional memory allocation to store the specified
 number of mappings.
 If you supply an initial capacity of 0, the
 sparse array will be initialized with a light-weight representation
 not requiring any additional array allocations.
 */
- (instancetype)initWithInt:(jint)initialCapacity;

/*!
 @brief Puts a key/value pair into the array, optimizing for the case where
 the key is greater than all existing keys in the array.
 */
- (void)appendWithInt:(jint)key
              withInt:(jint)value;

/*!
 @brief Removes all key-value mappings from this SparseIntArray.
 */
- (void)clear;

- (AndroidUtilSparseIntArray *)clone;

/*!
 @brief Removes the mapping from the specified key, if there was any.
 */
- (void)delete__WithInt:(jint)key;

/*!
 @brief Gets the int mapped from the specified key, or <code>0</code>
 if no such mapping has been made.
 */
- (jint)getWithInt:(jint)key;

/*!
 @brief Gets the int mapped from the specified key, or the specified value
 if no such mapping has been made.
 */
- (jint)getWithInt:(jint)key
           withInt:(jint)valueIfKeyNotFound;

/*!
 @brief Returns the index for which <code>keyAt</code> would return the
 specified key, or a negative number if the specified
 key is not mapped.
 */
- (jint)indexOfKeyWithInt:(jint)key;

/*!
 @brief Returns an index for which <code>valueAt</code> would return the
 specified key, or a negative number if no keys map to the
 specified value.
 Beware that this is a linear search, unlike lookups by key,
 and that multiple keys can map to the same value and this will
 find only one of them.
 */
- (jint)indexOfValueWithInt:(jint)value;

/*!
 @brief Given an index in the range <code>0...size()-1</code>, returns
 the key from the <code>index</code>th key-value mapping that this
 SparseIntArray stores.
 <p>The keys corresponding to indices in ascending order are guaranteed to
 be in ascending order, e.g., <code>keyAt(0)</code> will return the
 smallest key and <code>keyAt(size()-1)</code> will return the largest
 key.</p>
 */
- (jint)keyAtWithInt:(jint)index;

/*!
 @brief Adds a mapping from the specified key to the specified value,
 replacing the previous mapping from the specified key if there
 was one.
 */
- (void)putWithInt:(jint)key
           withInt:(jint)value;

/*!
 @brief Removes the mapping at the given index.
 */
- (void)removeAtWithInt:(jint)index;

/*!
 @brief Returns the number of key-value mappings that this SparseIntArray
 currently stores.
 */
- (jint)size;

/*!
 @brief 
 <p>This implementation composes a string by iterating over its mappings.
 */
- (NSString *)description;

/*!
 @brief Given an index in the range <code>0...size()-1</code>, returns
 the value from the <code>index</code>th key-value mapping that this
 SparseIntArray stores.
 <p>The values corresponding to indices in ascending order are guaranteed
 to be associated with keys in ascending order, e.g.,
 <code>valueAt(0)</code> will return the value associated with the
 smallest key and <code>valueAt(size()-1)</code> will return the value
 associated with the largest key.</p>
 */
- (jint)valueAtWithInt:(jint)index;

@end

J2OBJC_EMPTY_STATIC_INIT(AndroidUtilSparseIntArray)

FOUNDATION_EXPORT void AndroidUtilSparseIntArray_init(AndroidUtilSparseIntArray *self);

FOUNDATION_EXPORT AndroidUtilSparseIntArray *new_AndroidUtilSparseIntArray_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilSparseIntArray *create_AndroidUtilSparseIntArray_init();

FOUNDATION_EXPORT void AndroidUtilSparseIntArray_initWithInt_(AndroidUtilSparseIntArray *self, jint initialCapacity);

FOUNDATION_EXPORT AndroidUtilSparseIntArray *new_AndroidUtilSparseIntArray_initWithInt_(jint initialCapacity) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT AndroidUtilSparseIntArray *create_AndroidUtilSparseIntArray_initWithInt_(jint initialCapacity);

J2OBJC_TYPE_LITERAL_HEADER(AndroidUtilSparseIntArray)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_AndroidUtilSparseIntArray")
