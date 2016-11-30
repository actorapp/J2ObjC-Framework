//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/BlockingQueue.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentBlockingQueue")
#ifdef RESTRICT_JavaUtilConcurrentBlockingQueue
#define INCLUDE_ALL_JavaUtilConcurrentBlockingQueue 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentBlockingQueue 1
#endif
#undef RESTRICT_JavaUtilConcurrentBlockingQueue

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentBlockingQueue_) && (INCLUDE_ALL_JavaUtilConcurrentBlockingQueue || defined(INCLUDE_JavaUtilConcurrentBlockingQueue))
#define JavaUtilConcurrentBlockingQueue_

#define RESTRICT_JavaUtilQueue 1
#define INCLUDE_JavaUtilQueue 1
#include "java/util/Queue.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaUtilCollection;
@protocol JavaUtilFunctionConsumer;
@protocol JavaUtilFunctionPredicate;
@protocol JavaUtilSpliterator;
@protocol JavaUtilStreamStream;

/*!
 @brief A <code>java.util.Queue</code> that additionally supports operations
 that wait for the queue to become non-empty when retrieving an
 element, and wait for space to become available in the queue when
 storing an element.
 <p><code>BlockingQueue</code> methods come in four forms, with different ways
 of handling operations that cannot be satisfied immediately, but may be
 satisfied at some point in the future:
 one throws an exception, the second returns a special value (either
 <code>null</code> or <code>false</code>, depending on the operation), the third
 blocks the current thread indefinitely until the operation can succeed,
 and the fourth blocks for only a given maximum time limit before giving
 up.  These methods are summarized in the following table:
 <p>
 <table BORDER CELLPADDING=3 CELLSPACING=1>
 <caption>Summary of BlockingQueue methods</caption>
 <tr>
 <td></td>
 <td ALIGN=CENTER><em>Throws exception</em></td>
 <td ALIGN=CENTER><em>Special value</em></td>
 <td ALIGN=CENTER><em>Blocks</em></td>
 <td ALIGN=CENTER><em>Times out</em></td>
 </tr>
 <tr>
 <td><b>Insert</b></td>
 <td><code>add(e)</code></td>
 <td><code>offer(e)</code></td>
 <td><code>put(e)</code></td>
 <td><code>offer(e, time, unit)</code></td>
 </tr>
 <tr>
 <td><b>Remove</b></td>
 <td><code>remove()</code></td>
 <td><code>poll()</code></td>
 <td><code>take()</code></td>
 <td><code>poll(time, unit)</code></td>
 </tr>
 <tr>
 <td><b>Examine</b></td>
 <td><code>element()</code></td>
 <td><code>peek()</code></td>
 <td><em>not applicable</em></td>
 <td><em>not applicable</em></td>
 </tr>
 </table>
 <p>A <code>BlockingQueue</code> does not accept <code>null</code> elements.
 Implementations throw <code>NullPointerException</code> on attempts
 to <code>add</code>, <code>put</code> or <code>offer</code> a <code>null</code>.  A
 <code>null</code> is used as a sentinel value to indicate failure of
 <code>poll</code> operations.
 <p>A <code>BlockingQueue</code> may be capacity bounded. At any given
 time it may have a <code>remainingCapacity</code> beyond which no
 additional elements can be <code>put</code> without blocking.
 A <code>BlockingQueue</code> without any intrinsic capacity constraints always
 reports a remaining capacity of <code>Integer.MAX_VALUE</code>.
 <p><code>BlockingQueue</code> implementations are designed to be used
 primarily for producer-consumer queues, but additionally support
 the <code>java.util.Collection</code> interface.  So, for example, it is
 possible to remove an arbitrary element from a queue using
 <code>remove(x)</code>. However, such operations are in general
 <em>not</em> performed very efficiently, and are intended for only
 occasional use, such as when a queued message is cancelled.
 <p><code>BlockingQueue</code> implementations are thread-safe.  All
 queuing methods achieve their effects atomically using internal
 locks or other forms of concurrency control. However, the
 <em>bulk</em> Collection operations <code>addAll</code>,
 <code>containsAll</code>, <code>retainAll</code> and <code>removeAll</code> are
 <em>not</em> necessarily performed atomically unless specified
 otherwise in an implementation. So it is possible, for example, for
 <code>addAll(c)</code> to fail (throwing an exception) after adding
 only some of the elements in <code>c</code>.
 <p>A <code>BlockingQueue</code> does <em>not</em> intrinsically support
 any kind of &quot;close&quot; or &quot;shutdown&quot; operation to
 indicate that no more items will be added.  The needs and usage of
 such features tend to be implementation-dependent. For example, a
 common tactic is for producers to insert special
 <em>end-of-stream</em> or <em>poison</em> objects, that are
 interpreted accordingly when taken by consumers.
 <p>
 Usage example, based on a typical producer-consumer scenario.
 Note that a <code>BlockingQueue</code> can safely be used with multiple
 producers and multiple consumers.
 @code
 
  class Producer implements Runnable 
   private final BlockingQueue queue;
   Producer(BlockingQueue q) { queue = q; }
   public void run() {
     try {
       while (true) { queue.put(produce()); }
     } catch (InterruptedException ex) { ... handle ...}
   }
   Object produce() { ... }
  }
  class Consumer implements Runnable {
   private final BlockingQueue queue;
   Consumer(BlockingQueue q) { queue = q; }
   public void run() {
     try {
       while (true) { consume(queue.take()); }
     } catch (InterruptedException ex) { ... handle ...}
   }
   void consume(Object x) { ... }
  }
  class Setup {
   void main() {
     BlockingQueue q = new SomeQueueImplementation();
     Producer p = new Producer(q);
     Consumer c1 = new Consumer(q);
     Consumer c2 = new Consumer(q);
     new Thread(p).start();
     new Thread(c1).start();
     new Thread(c2).start();
   }
  
@endcode
 <p>Memory consistency effects: As with other concurrent
 collections, actions in a thread prior to placing an object into a
 <code>BlockingQueue</code>
 <a href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
 actions subsequent to the access or removal of that element from
 the <code>BlockingQueue</code> in another thread.
 @since 1.5
 @author Doug Lea
 */
@protocol JavaUtilConcurrentBlockingQueue < JavaUtilQueue, JavaObject >

/*!
 @brief Inserts the specified element into this queue if it is possible to do
 so immediately without violating capacity restrictions, returning
 <code>true</code> upon success and throwing an
 <code>IllegalStateException</code> if no space is currently available.
 When using a capacity-restricted queue, it is generally preferable to
 use <code>offer</code>.
 @param e the element to add
 @return <code>true</code> (as specified by <code>Collection.add</code>)
 @throws IllegalStateException if the element cannot be added at this
 time due to capacity restrictions
 @throws ClassCastException if the class of the specified element
 prevents it from being added to this queue
 @throws NullPointerException if the specified element is null
 @throws IllegalArgumentException if some property of the specified
 element prevents it from being added to this queue
 */
- (jboolean)addWithId:(id)e;

/*!
 @brief Inserts the specified element into this queue if it is possible to do
 so immediately without violating capacity restrictions, returning
 <code>true</code> upon success and <code>false</code> if no space is currently
 available.
 When using a capacity-restricted queue, this method is
 generally preferable to <code>add</code>, which can fail to insert an
 element only by throwing an exception.
 @param e the element to add
 @return <code>true</code> if the element was added to this queue, else
 <code>false</code>
 @throws ClassCastException if the class of the specified element
 prevents it from being added to this queue
 @throws NullPointerException if the specified element is null
 @throws IllegalArgumentException if some property of the specified
 element prevents it from being added to this queue
 */
- (jboolean)offerWithId:(id)e;

/*!
 @brief Inserts the specified element into this queue, waiting if necessary
 for space to become available.
 @param e the element to add
 @throws InterruptedException if interrupted while waiting
 @throws ClassCastException if the class of the specified element
 prevents it from being added to this queue
 @throws NullPointerException if the specified element is null
 @throws IllegalArgumentException if some property of the specified
 element prevents it from being added to this queue
 */
- (void)putWithId:(id)e;

/*!
 @brief Inserts the specified element into this queue, waiting up to the
 specified wait time if necessary for space to become available.
 @param e the element to add
 @param timeout how long to wait before giving up, in units of
 <code>unit</code>
 @param unit a <code>TimeUnit</code> determining how to interpret the
 <code>timeout</code> parameter
 @return <code>true</code> if successful, or <code>false</code> if
 the specified waiting time elapses before space is available
 @throws InterruptedException if interrupted while waiting
 @throws ClassCastException if the class of the specified element
 prevents it from being added to this queue
 @throws NullPointerException if the specified element is null
 @throws IllegalArgumentException if some property of the specified
 element prevents it from being added to this queue
 */
- (jboolean)offerWithId:(id)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Retrieves and removes the head of this queue, waiting if necessary
 until an element becomes available.
 @return the head of this queue
 @throws InterruptedException if interrupted while waiting
 */
- (id)take;

/*!
 @brief Retrieves and removes the head of this queue, waiting up to the
 specified wait time if necessary for an element to become available.
 @param timeout how long to wait before giving up, in units of
 <code>unit</code>
 @param unit a <code>TimeUnit</code> determining how to interpret the
 <code>timeout</code> parameter
 @return the head of this queue, or <code>null</code> if the
 specified waiting time elapses before an element is available
 @throws InterruptedException if interrupted while waiting
 */
- (id)pollWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Returns the number of additional elements that this queue can ideally
 (in the absence of memory or resource constraints) accept without
 blocking, or <code>Integer.MAX_VALUE</code> if there is no intrinsic
 limit.
 <p>Note that you <em>cannot</em> always tell if an attempt to insert
 an element will succeed by inspecting <code>remainingCapacity</code>
 because it may be the case that another thread is about to
 insert or remove an element.
 @return the remaining capacity
 */
- (jint)remainingCapacity;

/*!
 @brief Removes a single instance of the specified element from this queue,
 if it is present.
 More formally, removes an element <code>e</code> such
 that <code>o.equals(e)</code>, if this queue contains one or more such
 elements.
 Returns <code>true</code> if this queue contained the specified element
 (or equivalently, if this queue changed as a result of the call).
 @param o element to be removed from this queue, if present
 @return <code>true</code> if this queue changed as a result of the call
 @throws ClassCastException if the class of the specified element
 is incompatible with this queue
 (<a href="../Collection.html#optional-restrictions">optional</a>)
 @throws NullPointerException if the specified element is null
 (<a href="../Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)removeWithId:(id)o;

/*!
 @brief Returns <code>true</code> if this queue contains the specified element.
 More formally, returns <code>true</code> if and only if this queue contains
 at least one element <code>e</code> such that <code>o.equals(e)</code>.
 @param o object to be checked for containment in this queue
 @return <code>true</code> if this queue contains the specified element
 @throws ClassCastException if the class of the specified element
 is incompatible with this queue
 (<a href="../Collection.html#optional-restrictions">optional</a>)
 @throws NullPointerException if the specified element is null
 (<a href="../Collection.html#optional-restrictions">optional</a>)
 */
- (jboolean)containsWithId:(id)o;

/*!
 @brief Removes all available elements from this queue and adds them
 to the given collection.
 This operation may be more
 efficient than repeatedly polling this queue.  A failure
 encountered while attempting to add elements to
 collection <code>c</code> may result in elements being in neither,
 either or both collections when the associated exception is
 thrown.  Attempts to drain a queue to itself result in
 <code>IllegalArgumentException</code>. Further, the behavior of
 this operation is undefined if the specified collection is
 modified while the operation is in progress.
 @param c the collection to transfer elements into
 @return the number of elements transferred
 @throws UnsupportedOperationException if addition of elements
 is not supported by the specified collection
 @throws ClassCastException if the class of an element of this queue
 prevents it from being added to the specified collection
 @throws NullPointerException if the specified collection is null
 @throws IllegalArgumentException if the specified collection is this
 queue, or some property of an element of this queue prevents
 it from being added to the specified collection
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

/*!
 @brief Removes at most the given number of available elements from
 this queue and adds them to the given collection.
 A failure
 encountered while attempting to add elements to
 collection <code>c</code> may result in elements being in neither,
 either or both collections when the associated exception is
 thrown.  Attempts to drain a queue to itself result in
 <code>IllegalArgumentException</code>. Further, the behavior of
 this operation is undefined if the specified collection is
 modified while the operation is in progress.
 @param c the collection to transfer elements into
 @param maxElements the maximum number of elements to transfer
 @return the number of elements transferred
 @throws UnsupportedOperationException if addition of elements
 is not supported by the specified collection
 @throws ClassCastException if the class of an element of this queue
 prevents it from being added to the specified collection
 @throws NullPointerException if the specified collection is null
 @throws IllegalArgumentException if the specified collection is this
 queue, or some property of an element of this queue prevents
 it from being added to the specified collection
 */
- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

@end

@interface JavaUtilConcurrentBlockingQueue : NSObject < JavaUtilConcurrentBlockingQueue >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentBlockingQueue)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentBlockingQueue)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentBlockingQueue")