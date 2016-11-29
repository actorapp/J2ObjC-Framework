//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/objc/java/java/util/Spliterator.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilSpliterator")
#ifdef RESTRICT_JavaUtilSpliterator
#define INCLUDE_ALL_JavaUtilSpliterator 0
#else
#define INCLUDE_ALL_JavaUtilSpliterator 1
#endif
#undef RESTRICT_JavaUtilSpliterator
#ifdef INCLUDE_JavaUtilSpliterator_OfDouble
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilSpliterator_OfLong
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilSpliterator_OfInt
#define INCLUDE_JavaUtilSpliterator_OfPrimitive 1
#endif
#ifdef INCLUDE_JavaUtilSpliterator_OfPrimitive
#define INCLUDE_JavaUtilSpliterator 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilSpliterator_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator))
#define JavaUtilSpliterator_

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

/*!
 @brief An object for traversing and partitioning elements of a source.
 The source
 of elements covered by a Spliterator could be, for example, an array, a
 <code>Collection</code>, an IO channel, or a generator function.
 <p>A Spliterator may traverse elements individually (<code>tryAdvance()</code>
 ) or sequentially in bulk
 (<code>forEachRemaining()</code>).
 <p>A Spliterator may also partition off some of its elements (using
 <code>trySplit</code>) as another Spliterator, to be used in
 possibly-parallel operations.  Operations using a Spliterator that
 cannot split, or does so in a highly imbalanced or inefficient
 manner, are unlikely to benefit from parallelism.  Traversal
 and splitting exhaust elements; each Spliterator is useful for only a single
 bulk computation.
 <p>A Spliterator also reports a set of <code>characteristics()</code> of its
 structure, source, and elements from among <code>ORDERED</code>,
 <code>DISTINCT</code>, <code>SORTED</code>, <code>SIZED</code>, <code>NONNULL</code>,
 <code>IMMUTABLE</code>, <code>CONCURRENT</code>, and <code>SUBSIZED</code>. These may
 be employed by Spliterator clients to control, specialize or simplify
 computation.  For example, a Spliterator for a <code>Collection</code> would
 report <code>SIZED</code>, a Spliterator for a <code>Set</code> would report
 <code>DISTINCT</code>, and a Spliterator for a <code>SortedSet</code> would also
 report <code>SORTED</code>.  Characteristics are reported as a simple unioned bit
 set.
 Some characteristics additionally constrain method behavior; for example if
 <code>ORDERED</code>, traversal methods must conform to their documented ordering.
 New characteristics may be defined in the future, so implementors should not
 assign meanings to unlisted values.
 <p><a name="binding">A Spliterator that does not report <code>IMMUTABLE</code> or
 <code>CONCURRENT</code> is expected to have a documented policy concerning:
 when the spliterator <em>binds</em> to the element source; and detection of
 structural interference of the element source detected after binding.</a>  A
 <em>late-binding</em> Spliterator binds to the source of elements at the
 point of first traversal, first split, or first query for estimated size,
 rather than at the time the Spliterator is created.  A Spliterator that is
 not <em>late-binding</em> binds to the source of elements at the point of
 construction or first invocation of any method.  Modifications made to the
 source prior to binding are reflected when the Spliterator is traversed.
 After binding a Spliterator should, on a best-effort basis, throw
 <code>ConcurrentModificationException</code> if structural interference is
 detected.  Spliterators that do this are called <em>fail-fast</em>.  The
 bulk traversal method (<code>forEachRemaining()</code>) of a
 Spliterator may optimize traversal and check for structural interference
 after all elements have been traversed, rather than checking per-element and
 failing immediately.
 <p>Spliterators can provide an estimate of the number of remaining elements
 via the <code>estimateSize</code> method.  Ideally, as reflected in characteristic
 <code>SIZED</code>, this value corresponds exactly to the number of elements
 that would be encountered in a successful traversal.  However, even when not
 exactly known, an estimated value value may still be useful to operations
 being performed on the source, such as helping to determine whether it is
 preferable to split further or traverse the remaining elements sequentially.
 <p>Despite their obvious utility in parallel algorithms, spliterators are not
 expected to be thread-safe; instead, implementations of parallel algorithms
 using spliterators should ensure that the spliterator is only used by one
 thread at a time.  This is generally easy to attain via <em>serial
 thread-confinement</em>, which often is a natural consequence of typical
 parallel algorithms that work by recursive decomposition.  A thread calling
 <code>trySplit()</code> may hand over the returned Spliterator to another thread,
 which in turn may traverse or further split that Spliterator.  The behaviour
 of splitting and traversal is undefined if two or more threads operate
 concurrently on the same spliterator.  If the original thread hands a
 spliterator off to another thread for processing, it is best if that handoff
 occurs before any elements are consumed with <code>tryAdvance()</code>
 , as certain guarantees (such as the accuracy of
 <code>estimateSize()</code> for <code>SIZED</code> spliterators) are only valid before
 traversal has begun.
 <p>Primitive subtype specializations of <code>Spliterator</code> are provided for
 <code>int</code>, <code>long</code>, and <code>double</code> values.
 The subtype default implementations of
 <code>Spliterator.tryAdvance(java.util.function.Consumer)</code>
 and <code>Spliterator.forEachRemaining(java.util.function.Consumer)</code> box
 primitive values to instances of their corresponding wrapper class.  Such
 boxing may undermine any performance advantages gained by using the primitive
 specializations.  To avoid boxing, the corresponding primitive-based methods
 should be used.  For example,
 <code>Spliterator.OfInt.tryAdvance(java.util.function.IntConsumer)</code>
 and <code>Spliterator.OfInt.forEachRemaining(java.util.function.IntConsumer)</code>
 should be used in preference to
 <code>Spliterator.OfInt.tryAdvance(java.util.function.Consumer)</code> and
 <code>Spliterator.OfInt.forEachRemaining(java.util.function.Consumer)</code>.
 Traversal of primitive values using boxing-based methods
 <code>tryAdvance()</code> and
 <code>forEachRemaining()</code>
 does not affect the order in which the values, transformed to boxed values,
 are encountered.
 <p>Spliterators, like <code>Iterators</code>s, are for traversing the elements of
 a source.  The <code>Spliterator</code> API was designed to support efficient
 parallel traversal in addition to sequential traversal, by supporting
 decomposition as well as single-element iteration.  In addition, the
 protocol for accessing elements via a Spliterator is designed to impose
 smaller per-element overhead than <code>Iterator</code>, and to avoid the inherent
 race involved in having separate methods for <code>hasNext()</code> and
 <code>next()</code>.
 <p>For mutable sources, arbitrary and non-deterministic behavior may occur if
 the source is structurally interfered with (elements added, replaced, or
 removed) between the time that the Spliterator binds to its data source and
 the end of traversal.  For example, such interference will produce arbitrary,
 non-deterministic results when using the <code>java.util.stream</code> framework.
 <p>Structural interference of a source can be managed in the following ways
 (in approximate order of decreasing desirability):
 <ul>
 <li>The source cannot be structurally interfered with.
 <br>For example, an instance of
 <code>java.util.concurrent.CopyOnWriteArrayList</code> is an immutable source.
 A Spliterator created from the source reports a characteristic of
 <code>IMMUTABLE</code>.</li>
 <li>The source manages concurrent modifications.
 <br>For example, a key set of a <code>java.util.concurrent.ConcurrentHashMap</code>
 is a concurrent source.  A Spliterator created from the source reports a
 characteristic of <code>CONCURRENT</code>.</li>
 <li>The mutable source provides a late-binding and fail-fast Spliterator.
 <br>Late binding narrows the window during which interference can affect
 the calculation; fail-fast detects, on a best-effort basis, that structural
 interference has occurred after traversal has commenced and throws
 <code>ConcurrentModificationException</code>.  For example, <code>ArrayList</code>,
 and many other non-concurrent <code>Collection</code> classes in the JDK, provide
 a late-binding, fail-fast spliterator.</li>
 <li>The mutable source provides a non-late-binding but fail-fast Spliterator.
 <br>The source increases the likelihood of throwing
 <code>ConcurrentModificationException</code> since the window of potential
 interference is larger.</li>
 <li>The mutable source provides a late-binding and non-fail-fast Spliterator.
 <br>The source risks arbitrary, non-deterministic behavior after traversal
 has commenced since interference is not detected.
 </li>
 <li>The mutable source provides a non-late-binding and non-fail-fast
 Spliterator.
 <br>The source increases the risk of arbitrary, non-deterministic behavior
 since non-detected interference may occur after construction.
 </li>
 </ul>
 <p><b>Example.</b> Here is a class (not a very useful one, except
 for illustration) that maintains an array in which the actual data
 are held in even locations, and unrelated tag data are held in odd
 locations. Its Spliterator ignores the tags.
 @code
 
  class TaggedArray<T> 
   private final Object[] elements; // immutable after construction
   TaggedArray(T[] data, Object[] tags) {
     int size = data.length;
     if (tags.length != size) throw new IllegalArgumentException();
     this.elements = new Object[2 * size];
     for (int i = 0, j = 0; i < size; ++i) {
       elements[j++] = data[i];
       elements[j++] = tags[i];
     }
   }
   public Spliterator<T> spliterator() {
     return new TaggedArraySpliterator<>(elements, 0, elements.length);
   }
   static class TaggedArraySpliterator<T> implements Spliterator<T> {
     private final Object[] array;
     private int origin; // current index, advanced on split or traversal
     private final int fence; // one past the greatest index
     TaggedArraySpliterator(Object[] array, int origin, int fence) {
       this.array = array; this.origin = origin; this.fence = fence;
     }
     public void forEachRemaining(Consumer<? super T> action) {
       for (; origin < fence; origin += 2)
         action.accept((T) array[origin]);
     }
     public boolean tryAdvance(Consumer<? super T> action) {
       if (origin < fence) {
         action.accept((T) array[origin]);
         origin += 2;
         return true;
       }
       else // cannot advance
         return false;
     }
     public Spliterator<T> trySplit() {
       int lo = origin; // divide range in half
       int mid = ((lo + fence) >>> 1) & ~1; // force midpoint to be even
       if (lo < mid) { // split out left half
         origin = mid; // reset this Spliterator's origin
         return new TaggedArraySpliterator<>(array, lo, mid);
       }
       else       // too small to split
         return null;
     }
     public long estimateSize() {
       return (long)((fence - origin) / 2);
     }
     public int characteristics() {
       return ORDERED | SIZED | IMMUTABLE | SUBSIZED;
     }
   }
  
@endcode
 <p>As an example how a parallel computation framework, such as the
 <code>java.util.stream</code> package, would use Spliterator in a parallel
 computation, here is one way to implement an associated parallel forEach,
 that illustrates the primary usage idiom of splitting off subtasks until
 the estimated amount of work is small enough to perform
 sequentially. Here we assume that the order of processing across
 subtasks doesn't matter; different (forked) tasks may further split
 and process elements concurrently in undetermined order.  This
 example uses a <code>java.util.concurrent.CountedCompleter</code>;
 similar usages apply to other parallel task constructions.
 @code

  static <T> void parEach(TaggedArray<T> a, Consumer<T> action) 
   Spliterator<T> s = a.spliterator();
   long targetBatchSize = s.estimateSize() / (ForkJoinPool.getCommonPoolParallelism() * 8);
   new ParEach(null, s, action, targetBatchSize).invoke();
  }
  static class ParEach<T> extends CountedCompleter<Void> {
   final Spliterator<T> spliterator;
   final Consumer<T> action;
   final long targetBatchSize;
   ParEach(ParEach<T> parent, Spliterator<T> spliterator,
           Consumer<T> action, long targetBatchSize) {
     super(parent);
     this.spliterator = spliterator; this.action = action;
     this.targetBatchSize = targetBatchSize;
   }
   public void compute() {
     Spliterator<T> sub;
     while (spliterator.estimateSize() > targetBatchSize &&
            (sub = spliterator.trySplit()) != null) {
       addToPendingCount(1);
       new ParEach<>(this, sub, action, targetBatchSize).fork();
     }
     spliterator.forEachRemaining(action);
     propagateCompletion();
   }
  
@endcode
 If the boolean system property <code>org.openjdk.java.util.stream.tripwire</code>
 is set to <code>true</code> then diagnostic warnings are reported if boxing of
 primitive values occur when operating on primitive subtype specializations.
 - seealso: Collection
 @since 1.8
 */
@protocol JavaUtilSpliterator < JavaObject >

/*!
 @brief If a remaining element exists, performs the given action on it,
 returning <code>true</code>; else returns <code>false</code>.
 If this
 Spliterator is <code>ORDERED</code> the action is performed on the
 next element in encounter order.  Exceptions thrown by the
 action are relayed to the caller.
 @param action The action
 @return <code>false</code> if no remaining elements existed
 upon entry to this method, else <code>true</code>.
 @throws NullPointerException if the specified action is null
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 @brief Performs the given action for each remaining element, sequentially in
 the current thread, until all elements have been processed or the action
 throws an exception.
 If this Spliterator is <code>ORDERED</code>, actions
 are performed in encounter order.  Exceptions thrown by the action
 are relayed to the caller.
 The default implementation repeatedly invokes <code>tryAdvance</code> until
 it returns <code>false</code>.  It should be overridden whenever possible.
 @param action The action
 @throws NullPointerException if the specified action is null
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 @brief If this spliterator can be partitioned, returns a Spliterator
 covering elements, that will, upon return from this method, not
 be covered by this Spliterator.
 <p>If this Spliterator is <code>ORDERED</code>, the returned Spliterator
 must cover a strict prefix of the elements.
 <p>Unless this Spliterator covers an infinite number of elements,
 repeated calls to <code>trySplit()</code> must eventually return <code>null</code>.
 Upon non-null return:
 <ul>
 <li>the value reported for <code>estimateSize()</code> before splitting,
 must, after splitting, be greater than or equal to <code>estimateSize()</code>
 for this and the returned Spliterator; and</li>
 <li>if this Spliterator is <code>SUBSIZED</code>, then <code>estimateSize()</code>
 for this spliterator before splitting must be equal to the sum of
 <code>estimateSize()</code> for this and the returned Spliterator after
 splitting.</li>
 </ul>
 <p>This method may return <code>null</code> for any reason,
 including emptiness, inability to split after traversal has
 commenced, data structure constraints, and efficiency
 considerations.
 An ideal <code>trySplit</code> method efficiently (without
 traversal) divides its elements exactly in half, allowing
 balanced parallel computation.  Many departures from this ideal
 remain highly effective; for example, only approximately
 splitting an approximately balanced tree, or for a tree in
 which leaf nodes may contain either one or two elements,
 failing to further split these nodes.  However, large
 deviations in balance and/or overly inefficient <code>trySplit</code>
  mechanics typically result in poor parallel
 performance.
 @return a <code>Spliterator</code> covering some portion of the
 elements, or <code>null</code> if this spliterator cannot be split
 */
- (id<JavaUtilSpliterator>)trySplit;

/*!
 @brief Returns an estimate of the number of elements that would be
 encountered by a <code>forEachRemaining</code> traversal, or returns <code>Long.MAX_VALUE</code>
  if infinite, unknown, or too expensive to compute.
 <p>If this Spliterator is <code>SIZED</code> and has not yet been partially
 traversed or split, or this Spliterator is <code>SUBSIZED</code> and has
 not yet been partially traversed, this estimate must be an accurate
 count of elements that would be encountered by a complete traversal.
 Otherwise, this estimate may be arbitrarily inaccurate, but must decrease
 as specified across invocations of <code>trySplit</code>.
 Even an inexact estimate is often useful and inexpensive to compute.
 For example, a sub-spliterator of an approximately balanced binary tree
 may return a value that estimates the number of elements to be half of
 that of its parent; if the root Spliterator does not maintain an
 accurate count, it could estimate size to be the power of two
 corresponding to its maximum depth.
 @return the estimated size, or <code>Long.MAX_VALUE</code> if infinite,
 unknown, or too expensive to compute.
 */
- (jlong)estimateSize;

/*!
 @brief Convenience method that returns <code>estimateSize()</code> if this
 Spliterator is <code>SIZED</code>, else <code>-1</code>.
 The default implementation returns the result of <code>estimateSize()</code>
 if the Spliterator reports a characteristic of <code>SIZED</code>, and
 <code>-1</code> otherwise.
 @return the exact size, if known, else <code>-1</code>.
 */
- (jlong)getExactSizeIfKnown;

/*!
 @brief Returns a set of characteristics of this Spliterator and its
 elements.
 The result is represented as ORed values from <code>ORDERED</code>
 , <code>DISTINCT</code>, <code>SORTED</code>, <code>SIZED</code>,
 <code>NONNULL</code>, <code>IMMUTABLE</code>, <code>CONCURRENT</code>,
 <code>SUBSIZED</code>.  Repeated calls to <code>characteristics()</code> on
 a given spliterator, prior to or in-between calls to <code>trySplit</code>,
 should always return the same result.
 <p>If a Spliterator reports an inconsistent set of
 characteristics (either those returned from a single invocation
 or across multiple invocations), no guarantees can be made
 about any computation using this Spliterator.
  The characteristics of a given spliterator before splitting
 may differ from the characteristics after splitting.  For specific
 examples see the characteristic values <code>SIZED</code>, <code>SUBSIZED</code>
 and <code>CONCURRENT</code>.
 @return a representation of characteristics
 */
- (jint)characteristics;

/*!
 @brief Returns <code>true</code> if this Spliterator's <code>characteristics</code>
  contain all of the given characteristics.
 The default implementation returns true if the corresponding bits
 of the given characteristics are set.
 @param characteristics the characteristics to check for
 @return <code>true</code> if all the specified characteristics are present,
 else <code>false</code>
 */
- (jboolean)hasCharacteristicsWithInt:(jint)characteristics;

/*!
 @brief If this Spliterator's source is <code>SORTED</code> by a <code>Comparator</code>,
 returns that <code>Comparator</code>.
 If the source is <code>SORTED</code> in
 natural order, returns <code>null</code>.  Otherwise,
 if the source is not <code>SORTED</code>, throws <code>IllegalStateException</code>.
 The default implementation always throws <code>IllegalStateException</code>.
 @return a Comparator, or <code>null</code> if the elements are sorted in the
 natural order.
 @throws IllegalStateException if the spliterator does not report
 a characteristic of <code>SORTED</code>.
 */
- (id<JavaUtilComparator>)getComparator;

@end

@interface JavaUtilSpliterator : NSObject < JavaUtilSpliterator >

+ (jint)ORDERED;

+ (jint)DISTINCT;

+ (jint)SORTED;

+ (jint)SIZED;

+ (jint)NONNULL;

+ (jint)IMMUTABLE;

+ (jint)CONCURRENT;

+ (jint)SUBSIZED;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator)

/*!
 @brief Characteristic value signifying that an encounter order is defined for
 elements.
 If so, this Spliterator guarantees that method
 <code>trySplit</code> splits a strict prefix of elements, that method
 <code>tryAdvance</code> steps by one element in prefix order, and that
 <code>forEachRemaining</code> performs actions in encounter order.
 <p>A <code>Collection</code> has an encounter order if the corresponding
 <code>Collection.iterator</code> documents an order. If so, the encounter
 order is the same as the documented order. Otherwise, a collection does
 not have an encounter order.
  Encounter order is guaranteed to be ascending index order for
 any <code>List</code>. But no order is guaranteed for hash-based collections
 such as <code>HashSet</code>. Clients of a Spliterator that reports
 <code>ORDERED</code> are expected to preserve ordering constraints in
 non-commutative parallel computations.
 */
inline jint JavaUtilSpliterator_get_ORDERED();
#define JavaUtilSpliterator_ORDERED 16
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, ORDERED, jint)

/*!
 @brief Characteristic value signifying that, for each pair of
 encountered elements <code>x, y</code>, <code>!
 x.equals(y)</code>. This
 applies for example, to a Spliterator based on a <code>Set</code>.
 */
inline jint JavaUtilSpliterator_get_DISTINCT();
#define JavaUtilSpliterator_DISTINCT 1
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, DISTINCT, jint)

/*!
 @brief Characteristic value signifying that encounter order follows a defined
 sort order.
 If so, method <code>getComparator()</code> returns the associated
 Comparator, or <code>null</code> if all elements are <code>Comparable</code> and
 are sorted by their natural ordering.
 <p>A Spliterator that reports <code>SORTED</code> must also report
 <code>ORDERED</code>.
  The spliterators for <code>Collection</code> classes in the JDK that
 implement <code>NavigableSet</code> or <code>SortedSet</code> report <code>SORTED</code>.
 */
inline jint JavaUtilSpliterator_get_SORTED();
#define JavaUtilSpliterator_SORTED 4
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, SORTED, jint)

/*!
 @brief Characteristic value signifying that the value returned from
 <code>estimateSize()</code> prior to traversal or splitting represents a
 finite size that, in the absence of structural source modification,
 represents an exact count of the number of elements that would be
 encountered by a complete traversal.
  Most Spliterators for Collections, that cover all elements of a
 <code>Collection</code> report this characteristic. Sub-spliterators, such as
 those for <code>HashSet</code>, that cover a sub-set of elements and
 approximate their reported size do not.
 */
inline jint JavaUtilSpliterator_get_SIZED();
#define JavaUtilSpliterator_SIZED 64
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, SIZED, jint)

/*!
 @brief Characteristic value signifying that the source guarantees that
 encountered elements will not be <code>null</code>.
 (This applies,
 for example, to most concurrent collections, queues, and maps.)
 */
inline jint JavaUtilSpliterator_get_NONNULL();
#define JavaUtilSpliterator_NONNULL 256
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, NONNULL, jint)

/*!
 @brief Characteristic value signifying that the element source cannot be
 structurally modified; that is, elements cannot be added, replaced, or
 removed, so such changes cannot occur during traversal.
 A Spliterator
 that does not report <code>IMMUTABLE</code> or <code>CONCURRENT</code> is expected
 to have a documented policy (for example throwing
 <code>ConcurrentModificationException</code>) concerning structural
 interference detected during traversal.
 */
inline jint JavaUtilSpliterator_get_IMMUTABLE();
#define JavaUtilSpliterator_IMMUTABLE 1024
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, IMMUTABLE, jint)

/*!
 @brief Characteristic value signifying that the element source may be safely
 concurrently modified (allowing additions, replacements, and/or removals)
 by multiple threads without external synchronization.
 If so, the
 Spliterator is expected to have a documented policy concerning the impact
 of modifications during traversal.
 <p>A top-level Spliterator should not report both <code>CONCURRENT</code> and
 <code>SIZED</code>, since the finite size, if known, may change if the source
 is concurrently modified during traversal. Such a Spliterator is
 inconsistent and no guarantees can be made about any computation using
 that Spliterator. Sub-spliterators may report <code>SIZED</code> if the
 sub-split size is known and additions or removals to the source are not
 reflected when traversing.
  Most concurrent collections maintain a consistency policy
 guaranteeing accuracy with respect to elements present at the point of
 Spliterator construction, but possibly not reflecting subsequent
 additions or removals.
 */
inline jint JavaUtilSpliterator_get_CONCURRENT();
#define JavaUtilSpliterator_CONCURRENT 4096
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, CONCURRENT, jint)

/*!
 @brief Characteristic value signifying that all Spliterators resulting from
 <code>trySplit()</code> will be both <code>SIZED</code> and <code>SUBSIZED</code>.
 (This means that all child Spliterators, whether direct or indirect, will
 be <code>SIZED</code>.)
 <p>A Spliterator that does not report <code>SIZED</code> as required by
 <code>SUBSIZED</code> is inconsistent and no guarantees can be made about any
 computation using that Spliterator.
  Some spliterators, such as the top-level spliterator for an
 approximately balanced binary tree, will report <code>SIZED</code> but not
 <code>SUBSIZED</code>, since it is common to know the size of the entire tree
 but not the exact sizes of subtrees.
 */
inline jint JavaUtilSpliterator_get_SUBSIZED();
#define JavaUtilSpliterator_SUBSIZED 16384
J2OBJC_STATIC_FIELD_CONSTANT(JavaUtilSpliterator, SUBSIZED, jint)

FOUNDATION_EXPORT void JavaUtilSpliterator_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT jlong JavaUtilSpliterator_getExactSizeIfKnown(id<JavaUtilSpliterator> self);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_hasCharacteristicsWithInt_(id<JavaUtilSpliterator> self, jint characteristics);

FOUNDATION_EXPORT id<JavaUtilComparator> JavaUtilSpliterator_getComparator(id<JavaUtilSpliterator> self);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator)

#endif

#if !defined (JavaUtilSpliterator_OfPrimitive_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfPrimitive))
#define JavaUtilSpliterator_OfPrimitive_

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;

/*!
 @brief A Spliterator specialized for primitive values.
 - seealso: Spliterator.OfInt
 - seealso: Spliterator.OfLong
 - seealso: Spliterator.OfDouble
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfPrimitive < JavaUtilSpliterator, JavaObject >

- (id<JavaUtilSpliterator_OfPrimitive>)trySplit;

/*!
 @brief If a remaining element exists, performs the given action on it,
 returning <code>true</code>; else returns <code>false</code>.
 If this
 Spliterator is <code>ORDERED</code> the action is performed on the
 next element in encounter order.  Exceptions thrown by the
 action are relayed to the caller.
 @param action The action
 @return <code>false</code> if no remaining elements existed
 upon entry to this method, else <code>true</code>.
 @throws NullPointerException if the specified action is null
 */
- (jboolean)tryAdvanceWithId:(id)action;

/*!
 @brief Performs the given action for each remaining element, sequentially in
 the current thread, until all elements have been processed or the
 action throws an exception.
 If this Spliterator is <code>ORDERED</code>,
 actions are performed in encounter order.  Exceptions thrown by the
 action are relayed to the caller.
 The default implementation repeatedly invokes <code>tryAdvance</code>
 until it returns <code>false</code>.  It should be overridden whenever
 possible.
 @param action The action
 @throws NullPointerException if the specified action is null
 */
- (void)forEachRemainingWithId:(id)action;

@end

@interface JavaUtilSpliterator_OfPrimitive : NSObject < JavaUtilSpliterator_OfPrimitive >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfPrimitive)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfPrimitive_forEachRemainingWithId_(id<JavaUtilSpliterator_OfPrimitive> self, id action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfPrimitive)

#endif

#if !defined (JavaUtilSpliterator_OfInt_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfInt))
#define JavaUtilSpliterator_OfInt_

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionIntConsumer;

/*!
 @brief A Spliterator specialized for <code>int</code> values.
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfInt < JavaUtilSpliterator_OfPrimitive, JavaObject >

- (id<JavaUtilSpliterator_OfInt>)trySplit;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionIntConsumer>)action;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionIntConsumer>)action;

/*!
 
 If the action is an instance of <code>IntConsumer</code> then it is cast
 to <code>IntConsumer</code> and passed to
 <code>tryAdvance(java.util.function.IntConsumer)</code>; otherwise
 the action is adapted to an instance of <code>IntConsumer</code>, by
 boxing the argument of <code>IntConsumer</code>, and then passed to
 <code>tryAdvance(java.util.function.IntConsumer)</code>.
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 
 If the action is an instance of <code>IntConsumer</code> then it is cast
 to <code>IntConsumer</code> and passed to
 <code>forEachRemaining(java.util.function.IntConsumer)</code>; otherwise
 the action is adapted to an instance of <code>IntConsumer</code>, by
 boxing the argument of <code>IntConsumer</code>, and then passed to
 <code>forEachRemaining(java.util.function.IntConsumer)</code>.
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

@interface JavaUtilSpliterator_OfInt : NSObject < JavaUtilSpliterator_OfInt >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfInt)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfInt_forEachRemainingWithJavaUtilFunctionIntConsumer_(id<JavaUtilSpliterator_OfInt> self, id<JavaUtilFunctionIntConsumer> action);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_OfInt_tryAdvanceWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfInt> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT void JavaUtilSpliterator_OfInt_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfInt> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfInt)

#endif

#if !defined (JavaUtilSpliterator_OfLong_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfLong))
#define JavaUtilSpliterator_OfLong_

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionLongConsumer;

/*!
 @brief A Spliterator specialized for <code>long</code> values.
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfLong < JavaUtilSpliterator_OfPrimitive, JavaObject >

- (id<JavaUtilSpliterator_OfLong>)trySplit;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionLongConsumer>)action;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionLongConsumer>)action;

/*!
 
 If the action is an instance of <code>LongConsumer</code> then it is cast
 to <code>LongConsumer</code> and passed to
 <code>tryAdvance(java.util.function.LongConsumer)</code>; otherwise
 the action is adapted to an instance of <code>LongConsumer</code>, by
 boxing the argument of <code>LongConsumer</code>, and then passed to
 <code>tryAdvance(java.util.function.LongConsumer)</code>.
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 
 If the action is an instance of <code>LongConsumer</code> then it is cast
 to <code>LongConsumer</code> and passed to
 <code>forEachRemaining(java.util.function.LongConsumer)</code>; otherwise
 the action is adapted to an instance of <code>LongConsumer</code>, by
 boxing the argument of <code>LongConsumer</code>, and then passed to
 <code>forEachRemaining(java.util.function.LongConsumer)</code>.
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

@interface JavaUtilSpliterator_OfLong : NSObject < JavaUtilSpliterator_OfLong >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfLong)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfLong_forEachRemainingWithJavaUtilFunctionLongConsumer_(id<JavaUtilSpliterator_OfLong> self, id<JavaUtilFunctionLongConsumer> action);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_OfLong_tryAdvanceWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfLong> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT void JavaUtilSpliterator_OfLong_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfLong> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfLong)

#endif

#if !defined (JavaUtilSpliterator_OfDouble_) && (INCLUDE_ALL_JavaUtilSpliterator || defined(INCLUDE_JavaUtilSpliterator_OfDouble))
#define JavaUtilSpliterator_OfDouble_

@protocol JavaUtilComparator;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionDoubleConsumer;

/*!
 @brief A Spliterator specialized for <code>double</code> values.
 @since 1.8
 */
@protocol JavaUtilSpliterator_OfDouble < JavaUtilSpliterator_OfPrimitive, JavaObject >

- (id<JavaUtilSpliterator_OfDouble>)trySplit;

- (jboolean)tryAdvanceWithId:(id<JavaUtilFunctionDoubleConsumer>)action;

- (void)forEachRemainingWithId:(id<JavaUtilFunctionDoubleConsumer>)action;

/*!
 
 If the action is an instance of <code>DoubleConsumer</code> then it is
 cast to <code>DoubleConsumer</code> and passed to
 <code>tryAdvance(java.util.function.DoubleConsumer)</code>; otherwise
 the action is adapted to an instance of <code>DoubleConsumer</code>, by
 boxing the argument of <code>DoubleConsumer</code>, and then passed to
 <code>tryAdvance(java.util.function.DoubleConsumer)</code>.
 */
- (jboolean)tryAdvanceWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

/*!
 
 If the action is an instance of <code>DoubleConsumer</code> then it is
 cast to <code>DoubleConsumer</code> and passed to
 <code>forEachRemaining(java.util.function.DoubleConsumer)</code>;
 otherwise the action is adapted to an instance of
 <code>DoubleConsumer</code>, by boxing the argument of
 <code>DoubleConsumer</code>, and then passed to
 <code>forEachRemaining(java.util.function.DoubleConsumer)</code>.
 */
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id<JavaUtilFunctionConsumer>)action;

@end

@interface JavaUtilSpliterator_OfDouble : NSObject < JavaUtilSpliterator_OfDouble >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilSpliterator_OfDouble)

FOUNDATION_EXPORT void JavaUtilSpliterator_OfDouble_forEachRemainingWithJavaUtilFunctionDoubleConsumer_(id<JavaUtilSpliterator_OfDouble> self, id<JavaUtilFunctionDoubleConsumer> action);

FOUNDATION_EXPORT jboolean JavaUtilSpliterator_OfDouble_tryAdvanceWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfDouble> self, id<JavaUtilFunctionConsumer> action);

FOUNDATION_EXPORT void JavaUtilSpliterator_OfDouble_forEachRemainingWithJavaUtilFunctionConsumer_(id<JavaUtilSpliterator_OfDouble> self, id<JavaUtilFunctionConsumer> action);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilSpliterator_OfDouble)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilSpliterator")
