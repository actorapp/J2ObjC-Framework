//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ConcurrentSkipListSet.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentConcurrentSkipListSet")
#ifdef RESTRICT_JavaUtilConcurrentConcurrentSkipListSet
#define INCLUDE_ALL_JavaUtilConcurrentConcurrentSkipListSet 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentConcurrentSkipListSet 1
#endif
#undef RESTRICT_JavaUtilConcurrentConcurrentSkipListSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentConcurrentSkipListSet_) && (INCLUDE_ALL_JavaUtilConcurrentConcurrentSkipListSet || defined(INCLUDE_JavaUtilConcurrentConcurrentSkipListSet))
#define JavaUtilConcurrentConcurrentSkipListSet_

#define RESTRICT_JavaUtilAbstractSet 1
#define INCLUDE_JavaUtilAbstractSet 1
#include "../../../java/util/AbstractSet.h"

#define RESTRICT_JavaUtilNavigableSet 1
#define INCLUDE_JavaUtilNavigableSet 1
#include "../../../java/util/NavigableSet.h"

#define RESTRICT_JavaIoSerializable 1
#define INCLUDE_JavaIoSerializable 1
#include "../../../java/io/Serializable.h"

@protocol JavaUtilCollection;
@protocol JavaUtilComparator;
@protocol JavaUtilConcurrentConcurrentNavigableMap;
@protocol JavaUtilIterator;
@protocol JavaUtilSortedSet;
@protocol JavaUtilSpliterator;

/*!
 @brief A scalable concurrent <code>NavigableSet</code> implementation based on
 a <code>ConcurrentSkipListMap</code>.
 The elements of the set are kept
 sorted according to their natural ordering,
 or by a <code>Comparator</code> provided at set creation time, depending
 on which constructor is used.
 <p>This implementation provides expected average <i>log(n)</i> time
 cost for the <code>contains</code>, <code>add</code>, and <code>remove</code>
 operations and their variants.  Insertion, removal, and access
 operations safely execute concurrently by multiple threads.
 Iterators are <i>weakly consistent</i>, returning elements
 reflecting the state of the set at some point at or since the
 creation of the iterator.  They do <em>not</em> throw <code>ConcurrentModificationException</code>
 , and may proceed concurrently with
 other operations.  Ascending ordered views and their iterators are
 faster than descending ones.
 <p>Beware that, unlike in most collections, the <code>size</code>
 method is <em>not</em> a constant-time operation. Because of the
 asynchronous nature of these sets, determining the current number
 of elements requires a traversal of the elements, and so may report
 inaccurate results if this collection is modified during traversal.
 Additionally, the bulk operations <code>addAll</code>,
 <code>removeAll</code>, <code>retainAll</code>, <code>containsAll</code>,
 <code>equals</code>, and <code>toArray</code> are <em>not</em> guaranteed
 to be performed atomically. For example, an iterator operating
 concurrently with an <code>addAll</code> operation might view only some
 of the added elements.
 <p>This class and its iterators implement all of the
 <em>optional</em> methods of the <code>Set</code> and <code>Iterator</code>
 interfaces. Like most other concurrent collection implementations,
 this class does not permit the use of <code>null</code> elements,
 because <code>null</code> arguments and return values cannot be reliably
 distinguished from the absence of elements.
 @author Doug Lea
 @since 1.6
 */
@interface JavaUtilConcurrentConcurrentSkipListSet : JavaUtilAbstractSet < JavaUtilNavigableSet, NSCopying, JavaIoSerializable >

#pragma mark Public

/*!
 @brief Constructs a new, empty set that orders its elements according to
 their natural ordering.
 */
- (instancetype)init;

/*!
 @brief Constructs a new set containing the elements in the specified
 collection, that orders its elements according to their
 natural ordering.
 @param c The elements that will comprise the new set
 @throws ClassCastException if the elements in <code>c</code> are
 not <code>Comparable</code>, or are not mutually comparable
 @throws NullPointerException if the specified collection or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Constructs a new, empty set that orders its elements according to
 the specified comparator.
 @param comparator the comparator that will be used to order this set.
 If <code>null</code>, the natural
 ordering
  of the elements will be used.
 */
- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

/*!
 @brief Constructs a new set containing the same elements and using the
 same ordering as the specified sorted set.
 @param s sorted set whose elements will comprise the new set
 @throws NullPointerException if the specified sorted set or any
 of its elements are null
 */
- (instancetype)initWithJavaUtilSortedSet:(id<JavaUtilSortedSet>)s;

/*!
 @brief Adds the specified element to this set if it is not already present.
 More formally, adds the specified element <code>e</code> to this set if
 the set contains no element <code>e2</code> such that <code>e.equals(e2)</code>.
 If this set already contains the element, the call leaves the set
 unchanged and returns <code>false</code>.
 @param e element to be added to this set
 @return <code>true</code> if this set did not already contain the
 specified element
 @throws ClassCastException if <code>e</code> cannot be compared
 with the elements currently in this set
 @throws NullPointerException if the specified element is null
 */
- (jboolean)addWithId:(id)e;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 */
- (id)ceilingWithId:(id)e;

/*!
 @brief Removes all of the elements from this set.
 */
- (void)clear;

/*!
 @brief Returns a shallow copy of this <code>ConcurrentSkipListSet</code>
 instance.
 (The elements themselves are not cloned.)
 @return a shallow copy of this set
 */
- (JavaUtilConcurrentConcurrentSkipListSet *)clone;

- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns <code>true</code> if this set contains the specified element.
 More formally, returns <code>true</code> if and only if this set
 contains an element <code>e</code> such that <code>o.equals(e)</code>.
 @param o object to be checked for containment in this set
 @return <code>true</code> if this set contains the specified element
 @throws ClassCastException if the specified element cannot be
 compared with the elements currently in this set
 @throws NullPointerException if the specified element is null
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Returns an iterator over the elements in this set in descending order.
 @return an iterator over the elements in this set in descending order
 */
- (id<JavaUtilIterator>)descendingIterator;

/*!
 @brief Returns a reverse order view of the elements contained in this set.
 The descending set is backed by this set, so changes to the set are
 reflected in the descending set, and vice-versa.
 <p>The returned set has an ordering equivalent to
 <code>Collections.reverseOrder</code><code>(comparator())</code>.
 The expression <code>s.descendingSet().descendingSet()</code> returns a
 view of <code>s</code> essentially equivalent to <code>s</code>.
 @return a reverse order view of this set
 */
- (id<JavaUtilNavigableSet>)descendingSet;

/*!
 @brief Compares the specified object with this set for equality.
 Returns
 <code>true</code> if the specified object is also a set, the two sets
 have the same size, and every member of the specified set is
 contained in this set (or equivalently, every member of this set is
 contained in the specified set).  This definition ensures that the
 equals method works properly across different implementations of the
 set interface.
 @param o the object to be compared for equality with this set
 @return <code>true</code> if the specified object is equal to this set
 */
- (jboolean)isEqual:(id)o;

/*!
 @throws NoSuchElementException
 */
- (id)first;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 */
- (id)floorWithId:(id)e;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>toElement</code> is null
 @throws IllegalArgumentException
 */
- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>toElement</code> is null
 @throws IllegalArgumentException
 */
- (id<JavaUtilNavigableSet>)headSetWithId:(id)toElement
                              withBoolean:(jboolean)inclusive;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 */
- (id)higherWithId:(id)e;

/*!
 @brief Returns <code>true</code> if this set contains no elements.
 @return <code>true</code> if this set contains no elements
 */
- (jboolean)isEmpty;

/*!
 @brief Returns an iterator over the elements in this set in ascending order.
 @return an iterator over the elements in this set in ascending order
 */
- (id<JavaUtilIterator>)iterator;

/*!
 @throws NoSuchElementException
 */
- (id)last;

/*!
 @throws ClassCastException
 @throws NullPointerException if the specified element is null
 */
- (id)lowerWithId:(id)e;

- (id)pollFirst;

- (id)pollLast;

/*!
 @brief Removes the specified element from this set if it is present.
 More formally, removes an element <code>e</code> such that
 <code>o.equals(e)</code>, if this set contains such an element.
 Returns <code>true</code> if this set contained the element (or
 equivalently, if this set changed as a result of the call).
 (This set will not contain the element once the call returns.)
 @param o object to be removed from this set, if present
 @return <code>true</code> if this set contained the specified element
 @throws ClassCastException if <code>o</code> cannot be compared
 with the elements currently in this set
 @throws NullPointerException if the specified element is null
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Removes from this set all of its elements that are contained in
 the specified collection.
 If the specified collection is also
 a set, this operation effectively modifies this set so that its
 value is the <i>asymmetric set difference</i> of the two sets.
 @param c collection containing elements to be removed from this set
 @return <code>true</code> if this set changed as a result of the call
 @throws ClassCastException if the types of one or more elements in this
 set are incompatible with the specified collection
 @throws NullPointerException if the specified collection or any
 of its elements are null
 */
- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Returns the number of elements in this set.
 If this set
 contains more than <code>Integer.MAX_VALUE</code> elements, it
 returns <code>Integer.MAX_VALUE</code>.
 <p>Beware that, unlike in most collections, this method is
 <em>NOT</em> a constant-time operation. Because of the
 asynchronous nature of these sets, determining the current
 number of elements requires traversing them all to count them.
 Additionally, it is possible for the size to change during
 execution of this method, in which case the returned result
 will be inaccurate. Thus, this method is typically not very
 useful in concurrent applications.
 @return the number of elements in this set
 */
- (jint)size;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> or
 <code>toElement</code> is null
 @throws IllegalArgumentException
 */
- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                             withBoolean:(jboolean)fromInclusive
                                  withId:(id)toElement
                             withBoolean:(jboolean)toInclusive;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> or
 <code>toElement</code> is null
 @throws IllegalArgumentException
 */
- (id<JavaUtilNavigableSet>)subSetWithId:(id)fromElement
                                  withId:(id)toElement;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> is null
 @throws IllegalArgumentException
 */
- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement;

/*!
 @throws ClassCastException
 @throws NullPointerException if <code>fromElement</code> is null
 @throws IllegalArgumentException
 */
- (id<JavaUtilNavigableSet>)tailSetWithId:(id)fromElement
                              withBoolean:(jboolean)inclusive;

#pragma mark Package-Private

/*!
 @brief For use by submaps
 */
- (instancetype)initWithJavaUtilConcurrentConcurrentNavigableMap:(id<JavaUtilConcurrentConcurrentNavigableMap>)m;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentConcurrentSkipListSet)

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentSkipListSet_init(JavaUtilConcurrentConcurrentSkipListSet *self);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *new_JavaUtilConcurrentConcurrentSkipListSet_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *create_JavaUtilConcurrentConcurrentSkipListSet_init();

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilComparator_(JavaUtilConcurrentConcurrentSkipListSet *self, id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *new_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *create_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilComparator_(id<JavaUtilComparator> comparator);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilCollection_(JavaUtilConcurrentConcurrentSkipListSet *self, id<JavaUtilCollection> c);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *new_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilCollection_(id<JavaUtilCollection> c) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *create_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilCollection_(id<JavaUtilCollection> c);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilSortedSet_(JavaUtilConcurrentConcurrentSkipListSet *self, id<JavaUtilSortedSet> s);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *new_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> s) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *create_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilSortedSet_(id<JavaUtilSortedSet> s);

FOUNDATION_EXPORT void JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilConcurrentConcurrentNavigableMap_(JavaUtilConcurrentConcurrentSkipListSet *self, id<JavaUtilConcurrentConcurrentNavigableMap> m);

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *new_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilConcurrentConcurrentNavigableMap_(id<JavaUtilConcurrentConcurrentNavigableMap> m) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentConcurrentSkipListSet *create_JavaUtilConcurrentConcurrentSkipListSet_initWithJavaUtilConcurrentConcurrentNavigableMap_(id<JavaUtilConcurrentConcurrentNavigableMap> m);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentConcurrentSkipListSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentConcurrentSkipListSet")
