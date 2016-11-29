//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/SortedSet.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilSortedSet")
#ifdef RESTRICT_JavaUtilSortedSet
#define INCLUDE_ALL_JavaUtilSortedSet 0
#else
#define INCLUDE_ALL_JavaUtilSortedSet 1
#endif
#undef RESTRICT_JavaUtilSortedSet

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilSortedSet_) && (INCLUDE_ALL_JavaUtilSortedSet || defined(INCLUDE_JavaUtilSortedSet))
#define JavaUtilSortedSet_

#define RESTRICT_JavaUtilSet 1
#define INCLUDE_JavaUtilSet 1
#include "../../java/util/Set.h"

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

/*!
 @brief A <code>Set</code> that further provides a <i>total ordering</i> on its elements.
 The elements are ordered using their natural
 ordering
 , or by a <code>Comparator</code> typically provided at sorted
 set creation time.  The set's iterator will traverse the set in
 ascending element order. Several additional operations are provided
 to take advantage of the ordering.  (This interface is the set
 analogue of <code>SortedMap</code>.)
 <p>All elements inserted into a sorted set must implement the <tt>Comparable</tt>
 interface (or be accepted by the specified comparator).  Furthermore, all
 such elements must be <i>mutually comparable</i>: <tt>e1.compareTo(e2)</tt>
 (or <tt>comparator.compare(e1, e2)</tt>) must not throw a
 <tt>ClassCastException</tt> for any elements <tt>e1</tt> and <tt>e2</tt> in
 the sorted set.  Attempts to violate this restriction will cause the
 offending method or constructor invocation to throw a
 <tt>ClassCastException</tt>.
 <p>Note that the ordering maintained by a sorted set (whether or not an
 explicit comparator is provided) must be <i>consistent with equals</i> if
 the sorted set is to correctly implement the <tt>Set</tt> interface.  (See
 the <tt>Comparable</tt> interface or <tt>Comparator</tt> interface for a
 precise definition of <i>consistent with equals</i>.)  This is so because
 the <tt>Set</tt> interface is defined in terms of the <tt>equals</tt>
 operation, but a sorted set performs all element comparisons using its
 <tt>compareTo</tt> (or <tt>compare</tt>) method, so two elements that are
 deemed equal by this method are, from the standpoint of the sorted set,
 equal.  The behavior of a sorted set <i>is</i> well-defined even if its
 ordering is inconsistent with equals; it just fails to obey the general
 contract of the <tt>Set</tt> interface.
 <p>All general-purpose sorted set implementation classes should
 provide four "standard" constructors: 1) A void (no arguments)
 constructor, which creates an empty sorted set sorted according to
 the natural ordering of its elements.  2) A constructor with a
 single argument of type <tt>Comparator</tt>, which creates an empty
 sorted set sorted according to the specified comparator.  3) A
 constructor with a single argument of type <tt>Collection</tt>,
 which creates a new sorted set with the same elements as its
 argument, sorted according to the natural ordering of the elements.
 4) A constructor with a single argument of type <tt>SortedSet</tt>,
 which creates a new sorted set with the same elements and the same
 ordering as the input sorted set.  There is no way to enforce this
 recommendation, as interfaces cannot contain constructors.
 <p>Note: several methods return subsets with restricted ranges.
 Such ranges are <i>half-open</i>, that is, they include their low
 endpoint but not their high endpoint (where applicable).
 If you need a <i>closed range</i> (which includes both endpoints), and
 the element type allows for calculation of the successor of a given
 value, merely request the subrange from <tt>lowEndpoint</tt> to
 <tt>successor(highEndpoint)</tt>.  For example, suppose that <tt>s</tt>
 is a sorted set of strings.  The following idiom obtains a view
 containing all of the strings in <tt>s</tt> from <tt>low</tt> to
 <tt>high</tt>, inclusive:
@code

   
@endcode
 A similar technique can be used to generate an <i>open range</i> (which
 contains neither endpoint).  The following idiom obtains a view
 containing all of the Strings in <tt>s</tt> from <tt>low</tt> to
 <tt>high</tt>, exclusive:
@code

   
@endcode
 <p>This interface is a member of the
 <a href="/../technotes/guides/collections/index.html">
 Java Collections Framework</a>.
 @author Josh Bloch
 - seealso: Set
 - seealso: TreeSet
 - seealso: SortedMap
 - seealso: Collection
 - seealso: Comparable
 - seealso: Comparator
 - seealso: ClassCastException
 @since 1.2
 */
@protocol JavaUtilSortedSet < JavaUtilSet, JavaObject >

/*!
 @brief Returns the comparator used to order the elements in this set,
 or <tt>null</tt> if this set uses the natural ordering
  of its elements.
 @return the comparator used to order the elements in this set,
 or <tt>null</tt> if this set uses the natural ordering
 of its elements
 */
- (id<JavaUtilComparator>)comparator;

/*!
 @brief Returns a view of the portion of this set whose elements range
 from <tt>fromElement</tt>, inclusive, to <tt>toElement</tt>,
 exclusive.
 (If <tt>fromElement</tt> and <tt>toElement</tt> are
 equal, the returned set is empty.)  The returned set is backed
 by this set, so changes in the returned set are reflected in
 this set, and vice-versa.  The returned set supports all
 optional set operations that this set supports.
 <p>The returned set will throw an <tt>IllegalArgumentException</tt>
 on an attempt to insert an element outside its range.
 @param fromElement low endpoint (inclusive) of the returned set
 @param toElement high endpoint (exclusive) of the returned set
 @return a view of the portion of this set whose elements range from
 <tt>fromElement</tt>, inclusive, to <tt>toElement</tt>, exclusive
 @throws ClassCastException if <tt>fromElement</tt> and
 <tt>toElement</tt> cannot be compared to one another using this
 set's comparator (or, if the set has no comparator, using
 natural ordering).  Implementations may, but are not required
 to, throw this exception if <tt>fromElement</tt> or
 <tt>toElement</tt> cannot be compared to elements currently in
 the set.
 @throws NullPointerException if <tt>fromElement</tt> or
 <tt>toElement</tt> is null and this set does not permit null
 elements
 @throws IllegalArgumentException if <tt>fromElement</tt> is
 greater than <tt>toElement</tt>; or if this set itself
 has a restricted range, and <tt>fromElement</tt> or
 <tt>toElement</tt> lies outside the bounds of the range
 */
- (id<JavaUtilSortedSet>)subSetWithId:(id)fromElement
                               withId:(id)toElement;

/*!
 @brief Returns a view of the portion of this set whose elements are
 strictly less than <tt>toElement</tt>.
 The returned set is
 backed by this set, so changes in the returned set are
 reflected in this set, and vice-versa.  The returned set
 supports all optional set operations that this set supports.
 <p>The returned set will throw an <tt>IllegalArgumentException</tt>
 on an attempt to insert an element outside its range.
 @param toElement high endpoint (exclusive) of the returned set
 @return a view of the portion of this set whose elements are strictly
 less than <tt>toElement</tt>
 @throws ClassCastException if <tt>toElement</tt> is not compatible
 with this set's comparator (or, if the set has no comparator,
 if <tt>toElement</tt> does not implement <code>Comparable</code>).
 Implementations may, but are not required to, throw this
 exception if <tt>toElement</tt> cannot be compared to elements
 currently in the set.
 @throws NullPointerException if <tt>toElement</tt> is null and
 this set does not permit null elements
 @throws IllegalArgumentException if this set itself has a
 restricted range, and <tt>toElement</tt> lies outside the
 bounds of the range
 */
- (id<JavaUtilSortedSet>)headSetWithId:(id)toElement;

/*!
 @brief Returns a view of the portion of this set whose elements are
 greater than or equal to <tt>fromElement</tt>.
 The returned
 set is backed by this set, so changes in the returned set are
 reflected in this set, and vice-versa.  The returned set
 supports all optional set operations that this set supports.
 <p>The returned set will throw an <tt>IllegalArgumentException</tt>
 on an attempt to insert an element outside its range.
 @param fromElement low endpoint (inclusive) of the returned set
 @return a view of the portion of this set whose elements are greater
 than or equal to <tt>fromElement</tt>
 @throws ClassCastException if <tt>fromElement</tt> is not compatible
 with this set's comparator (or, if the set has no comparator,
 if <tt>fromElement</tt> does not implement <code>Comparable</code>).
 Implementations may, but are not required to, throw this
 exception if <tt>fromElement</tt> cannot be compared to elements
 currently in the set.
 @throws NullPointerException if <tt>fromElement</tt> is null
 and this set does not permit null elements
 @throws IllegalArgumentException if this set itself has a
 restricted range, and <tt>fromElement</tt> lies outside the
 bounds of the range
 */
- (id<JavaUtilSortedSet>)tailSetWithId:(id)fromElement;

/*!
 @brief Returns the first (lowest) element currently in this set.
 @return the first (lowest) element currently in this set
 @throws NoSuchElementException if this set is empty
 */
- (id)first;

/*!
 @brief Returns the last (highest) element currently in this set.
 @return the last (highest) element currently in this set
 @throws NoSuchElementException if this set is empty
 */
- (id)last;

/*!
 @brief Creates a <code>Spliterator</code> over the elements in this sorted set.
 <p>The <code>Spliterator</code> reports <code>Spliterator.DISTINCT</code>,
 <code>Spliterator.SORTED</code> and <code>Spliterator.ORDERED</code>.
 Implementations should document the reporting of additional
 characteristic values.
 <p>The spliterator's comparator (see
 <code>java.util.Spliterator.getComparator()</code>) must be <code>null</code> if
 the sorted set's comparator (see <code>comparator()</code>) is <code>null</code>.
 Otherwise, the spliterator's comparator must be the same as or impose the
 same total ordering as the sorted set's comparator.
 The default implementation creates a
 <em><a href="Spliterator.html#binding">late-binding</a></em> spliterator
 from the sorted set's <code>Iterator</code>.  The spliterator inherits the
 <em>fail-fast</em> properties of the set's iterator.  The
 spliterator's comparator is the same as the sorted set's comparator.
 <p>
 The created <code>Spliterator</code> additionally reports
 <code>Spliterator.SIZED</code>.
 The created <code>Spliterator</code> additionally reports
 <code>Spliterator.SUBSIZED</code>.
 @return a <code>Spliterator</code> over the elements in this sorted set
 @since 1.8
 */
- (id<JavaUtilSpliterator>)spliterator;

@end

@interface JavaUtilSortedSet : NSObject < JavaUtilSortedSet >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSortedSet)

FOUNDATION_EXPORT id<JavaUtilSpliterator> JavaUtilSortedSet_spliterator(id<JavaUtilSortedSet> self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSortedSet)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilSortedSet")
