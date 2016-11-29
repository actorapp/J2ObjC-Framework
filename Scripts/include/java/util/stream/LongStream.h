//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/stream/LongStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilStreamLongStream")
#ifdef RESTRICT_JavaUtilStreamLongStream
#define INCLUDE_ALL_JavaUtilStreamLongStream 0
#else
#define INCLUDE_ALL_JavaUtilStreamLongStream 1
#endif
#undef RESTRICT_JavaUtilStreamLongStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilStreamLongStream_) && (INCLUDE_ALL_JavaUtilStreamLongStream || defined(INCLUDE_JavaUtilStreamLongStream))
#define JavaUtilStreamLongStream_

#define RESTRICT_JavaUtilStreamBaseStream 1
#define INCLUDE_JavaUtilStreamBaseStream 1
#include "java/util/stream/BaseStream.h"

@class IOSLongArray;
@class JavaUtilLongSummaryStatistics;
@class JavaUtilOptionalDouble;
@class JavaUtilOptionalLong;
@protocol JavaLangRunnable;
@protocol JavaUtilFunctionBiConsumer;
@protocol JavaUtilFunctionLongBinaryOperator;
@protocol JavaUtilFunctionLongConsumer;
@protocol JavaUtilFunctionLongFunction;
@protocol JavaUtilFunctionLongPredicate;
@protocol JavaUtilFunctionLongSupplier;
@protocol JavaUtilFunctionLongToDoubleFunction;
@protocol JavaUtilFunctionLongToIntFunction;
@protocol JavaUtilFunctionLongUnaryOperator;
@protocol JavaUtilFunctionObjLongConsumer;
@protocol JavaUtilFunctionSupplier;
@protocol JavaUtilPrimitiveIterator_OfLong;
@protocol JavaUtilSpliterator_OfLong;
@protocol JavaUtilStreamDoubleStream;
@protocol JavaUtilStreamIntStream;
@protocol JavaUtilStreamLongStream_Builder;
@protocol JavaUtilStreamStream;

/*!
 @brief A sequence of primitive long-valued elements supporting sequential and parallel
 aggregate operations.
 This is the <code>long</code> primitive specialization of
 <code>Stream</code>.
 <p>The following example illustrates an aggregate operation using
 <code>Stream</code> and <code>LongStream</code>, computing the sum of the weights of the
 red widgets:
 @code
    long sum = widgets.stream()
                       .filter(w -> w.getColor() == RED)
                       .mapToLong(w -> w.getWeight())
                       .sum();
 
@endcode
 See the class documentation for <code>Stream</code> and the package documentation
 for <a href="package-summary.html">java.util.stream</a> for additional
 specification of streams, stream operations, stream pipelines, and
 parallelism.
 @since 1.8
 - seealso: Stream
 - seealso: <a href="package-summary.html">java.util.stream</a>
 */
@protocol JavaUtilStreamLongStream < JavaUtilStreamBaseStream, JavaObject >

/*!
 @brief Returns a stream consisting of the elements of this stream that match
 the given predicate.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 @param predicate a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 predicate to apply to each element to determine if it
 should be included
 @return the new stream
 */
- (id<JavaUtilStreamLongStream>)filterWithJavaUtilFunctionLongPredicate:(id<JavaUtilFunctionLongPredicate>)predicate;

/*!
 @brief Returns a stream consisting of the results of applying the given
 function to the elements of this stream.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 @param mapper a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function to apply to each element
 @return the new stream
 */
- (id<JavaUtilStreamLongStream>)mapWithJavaUtilFunctionLongUnaryOperator:(id<JavaUtilFunctionLongUnaryOperator>)mapper;

/*!
 @brief Returns an object-valued <code>Stream</code> consisting of the results of
 applying the given function to the elements of this stream.
 <p>This is an <a href="package-summary.html#StreamOps">
 intermediate operation</a>.
 @param mapper a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function to apply to each element
 @return the new stream
 */
- (id<JavaUtilStreamStream>)mapToObjWithJavaUtilFunctionLongFunction:(id<JavaUtilFunctionLongFunction>)mapper;

/*!
 @brief Returns an <code>IntStream</code> consisting of the results of applying the
 given function to the elements of this stream.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 @param mapper a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function to apply to each element
 @return the new stream
 */
- (id<JavaUtilStreamIntStream>)mapToIntWithJavaUtilFunctionLongToIntFunction:(id<JavaUtilFunctionLongToIntFunction>)mapper;

/*!
 @brief Returns a <code>DoubleStream</code> consisting of the results of applying the
 given function to the elements of this stream.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 @param mapper a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function to apply to each element
 @return the new stream
 */
- (id<JavaUtilStreamDoubleStream>)mapToDoubleWithJavaUtilFunctionLongToDoubleFunction:(id<JavaUtilFunctionLongToDoubleFunction>)mapper;

/*!
 @brief Returns a stream consisting of the results of replacing each element of
 this stream with the contents of a mapped stream produced by applying
 the provided mapping function to each element.
 Each mapped stream is
 <code>closed</code> after its contents
 have been placed into this stream.  (If a mapped stream is <code>null</code>
 an empty stream is used, instead.)
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 @param mapper a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function to apply to each element which produces a
 <code>LongStream</code> of new values
 @return the new stream
 - seealso: Stream#flatMap(Function)
 */
- (id<JavaUtilStreamLongStream>)flatMapWithJavaUtilFunctionLongFunction:(id<JavaUtilFunctionLongFunction>)mapper;

/*!
 @brief Returns a stream consisting of the distinct elements of this stream.
 <p>This is a <a href="package-summary.html#StreamOps">stateful
 intermediate operation</a>.
 @return the new stream
 */
- (id<JavaUtilStreamLongStream>)distinct;

/*!
 @brief Returns a stream consisting of the elements of this stream in sorted
 order.
 <p>This is a <a href="package-summary.html#StreamOps">stateful
 intermediate operation</a>.
 @return the new stream
 */
- (id<JavaUtilStreamLongStream>)sorted;

/*!
 @brief Returns a stream consisting of the elements of this stream, additionally
 performing the provided action on each element as elements are consumed
 from the resulting stream.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 <p>For parallel stream pipelines, the action may be called at
 whatever time and in whatever thread the element is made available by the
 upstream operation.  If the action modifies shared state,
 it is responsible for providing the required synchronization.
  This method exists mainly to support debugging, where you want
 to see the elements as they flow past a certain point in a pipeline:
 @code
    LongStream.of(1, 2, 3, 4)
         .filter(e -> e > 2)
         .peek(e -> System.out.println("Filtered value: " + e))
         .map(e -> e * e)
         .peek(e -> System.out.println("Mapped value: " + e))
         .sum();
 
@endcode
 @param action a <a href="package-summary.html#NonInterference">
 non-interfering</a> action to perform on the elements as
 they are consumed from the stream
 @return the new stream
 */
- (id<JavaUtilStreamLongStream>)peekWithJavaUtilFunctionLongConsumer:(id<JavaUtilFunctionLongConsumer>)action;

/*!
 @brief Returns a stream consisting of the elements of this stream, truncated
 to be no longer than <code>maxSize</code> in length.
 <p>This is a <a href="package-summary.html#StreamOps">short-circuiting
 stateful intermediate operation</a>.
 While <code>limit()</code> is generally a cheap operation on sequential
 stream pipelines, it can be quite expensive on ordered parallel pipelines,
 especially for large values of <code>maxSize</code>, since <code>limit(n)</code>
 is constrained to return not just any <em>n</em> elements, but the
 <em>first n</em> elements in the encounter order.  Using an unordered
 stream source (such as <code>generate(LongSupplier)</code>) or removing the
 ordering constraint with <code>unordered()</code> may result in significant
 speedups of <code>limit()</code> in parallel pipelines, if the semantics of
 your situation permit.  If consistency with encounter order is required,
 and you are experiencing poor performance or memory utilization with
 <code>limit()</code> in parallel pipelines, switching to sequential execution
 with <code>sequential()</code> may improve performance.
 @param maxSize the number of elements the stream should be limited to
 @return the new stream
 @throws IllegalArgumentException if <code>maxSize</code> is negative
 */
- (id<JavaUtilStreamLongStream>)limitWithLong:(jlong)maxSize;

/*!
 @brief Returns a stream consisting of the remaining elements of this stream
 after discarding the first <code>n</code> elements of the stream.
 If this stream contains fewer than <code>n</code> elements then an
 empty stream will be returned.
 <p>This is a <a href="package-summary.html#StreamOps">stateful
 intermediate operation</a>.
 While <code>skip()</code> is generally a cheap operation on sequential
 stream pipelines, it can be quite expensive on ordered parallel pipelines,
 especially for large values of <code>n</code>, since <code>skip(n)</code>
 is constrained to skip not just any <em>n</em> elements, but the
 <em>first n</em> elements in the encounter order.  Using an unordered
 stream source (such as <code>generate(LongSupplier)</code>) or removing the
 ordering constraint with <code>unordered()</code> may result in significant
 speedups of <code>skip()</code> in parallel pipelines, if the semantics of
 your situation permit.  If consistency with encounter order is required,
 and you are experiencing poor performance or memory utilization with
 <code>skip()</code> in parallel pipelines, switching to sequential execution
 with <code>sequential()</code> may improve performance.
 @param n the number of leading elements to skip
 @return the new stream
 @throws IllegalArgumentException if <code>n</code> is negative
 */
- (id<JavaUtilStreamLongStream>)skipWithLong:(jlong)n;

/*!
 @brief Performs an action for each element of this stream.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 <p>For parallel stream pipelines, this operation does <em>not</em>
 guarantee to respect the encounter order of the stream, as doing so
 would sacrifice the benefit of parallelism.  For any given element, the
 action may be performed at whatever time and in whatever thread the
 library chooses.  If the action accesses shared state, it is
 responsible for providing the required synchronization.
 @param action a <a href="package-summary.html#NonInterference">
 non-interfering</a> action to perform on the elements
 */
- (void)forEachWithJavaUtilFunctionLongConsumer:(id<JavaUtilFunctionLongConsumer>)action;

/*!
 @brief Performs an action for each element of this stream, guaranteeing that
 each element is processed in encounter order for streams that have a
 defined encounter order.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @param action a <a href="package-summary.html#NonInterference">
 non-interfering</a> action to perform on the elements
 - seealso: #forEach(LongConsumer)
 */
- (void)forEachOrderedWithJavaUtilFunctionLongConsumer:(id<JavaUtilFunctionLongConsumer>)action;

/*!
 @brief Returns an array containing the elements of this stream.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @return an array containing the elements of this stream
 */
- (IOSLongArray *)toArray;

/*!
 @brief Performs a <a href="package-summary.html#Reduction">reduction</a> on the
 elements of this stream, using the provided identity value and an
 <a href="package-summary.html#Associativity">associative</a>
 accumulation function, and returns the reduced value.
 This is equivalent
 to:
 @code
    long result = identity;
     for (long element : this stream)
         result = accumulator.applyAsLong(result, element)
     return result;
 
@endcode
 but is not constrained to execute sequentially.
 <p>The <code>identity</code> value must be an identity for the accumulator
 function. This means that for all <code>x</code>,
 <code>accumulator.apply(identity, x)</code> is equal to <code>x</code>.
 The <code>accumulator</code> function must be an
 <a href="package-summary.html#Associativity">associative</a> function.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
  Sum, min, max, and average are all special cases of reduction.
 Summing a stream of numbers can be expressed as:
 @code
    long sum = integers.reduce(0, (a, b) -> a+b);
 
@endcode
 or more compactly:
 @code
    long sum = integers.reduce(0, Long::sum);
 
@endcode
 <p>While this may seem a more roundabout way to perform an aggregation
 compared to simply mutating a running total in a loop, reduction
 operations parallelize more gracefully, without needing additional
 synchronization and with greatly reduced risk of data races.
 @param identity the identity value for the accumulating function
 @param op an <a href="package-summary.html#Associativity">associative</a>,
 <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function for combining two values
 @return the result of the reduction
 - seealso: #sum()
 - seealso: #min()
 - seealso: #max()
 - seealso: #average()
 */
- (jlong)reduceWithLong:(jlong)identity
withJavaUtilFunctionLongBinaryOperator:(id<JavaUtilFunctionLongBinaryOperator>)op;

/*!
 @brief Performs a <a href="package-summary.html#Reduction">reduction</a> on the
 elements of this stream, using an
 <a href="package-summary.html#Associativity">associative</a> accumulation
 function, and returns an <code>OptionalLong</code> describing the reduced value,
 if any.
 This is equivalent to:
 @code
    boolean foundAny = false;
     long result = null;
     for (long element : this stream) 
         if (!foundAny) {
             foundAny = true;
             result = element;
         }
         else
             result = accumulator.applyAsLong(result, element);
     }
     return foundAny ? OptionalLong.of(result) : OptionalLong.empty();
  
@endcode
 but is not constrained to execute sequentially.
 <p>The <code>accumulator</code> function must be an
 <a href="package-summary.html#Associativity">associative</a> function.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @param op an <a href="package-summary.html#Associativity">associative</a>,
 <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function for combining two values
 @return the result of the reduction
 - seealso: #reduce(long,LongBinaryOperator)
 */
- (JavaUtilOptionalLong *)reduceWithJavaUtilFunctionLongBinaryOperator:(id<JavaUtilFunctionLongBinaryOperator>)op;

/*!
 @brief Performs a <a href="package-summary.html#MutableReduction">mutable
 reduction</a> operation on the elements of this stream.
 A mutable
 reduction is one in which the reduced value is a mutable result container,
 such as an <code>ArrayList</code>, and elements are incorporated by updating
 the state of the result rather than by replacing the result.  This
 produces a result equivalent to:
 @code
    R result = supplier.get();
     for (long element : this stream)
         accumulator.accept(result, element);
     return result;
 
@endcode
 <p>Like <code>reduce(long,LongBinaryOperator)</code>, <code>collect</code> operations
 can be parallelized without requiring additional synchronization.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @param supplier a function that creates a new result container. For a
 parallel execution, this function may be called
 multiple times and must return a fresh value each time.
 @param accumulator an <a href="package-summary.html#Associativity">associative</a>,
 <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function for incorporating an additional element into a result
 @param combiner an <a href="package-summary.html#Associativity">associative</a>,
 <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 function for combining two values, which must be
 compatible with the accumulator function
 @return the result of the reduction
 - seealso: Stream#collect(Supplier,BiConsumer,BiConsumer)
 */
- (id)collectWithJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier>)supplier
      withJavaUtilFunctionObjLongConsumer:(id<JavaUtilFunctionObjLongConsumer>)accumulator
           withJavaUtilFunctionBiConsumer:(id<JavaUtilFunctionBiConsumer>)combiner;

/*!
 @brief Returns the sum of elements in this stream.
 This is a special case
 of a <a href="package-summary.html#Reduction">reduction</a>
 and is equivalent to:
 @code
    return reduce(0, Long::sum);
 
@endcode
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @return the sum of elements in this stream
 */
- (jlong)sum;

/*!
 @brief Returns an <code>OptionalLong</code> describing the minimum element of this
 stream, or an empty optional if this stream is empty.
 This is a special
 case of a <a href="package-summary.html#Reduction">reduction</a>
 and is equivalent to:
 @code
    return reduce(Long::min);
 
@endcode
 <p>This is a <a href="package-summary.html#StreamOps">terminal operation</a>.
 @return an <code>OptionalLong</code> containing the minimum element of this
 stream, or an empty <code>OptionalLong</code> if the stream is empty
 */
- (JavaUtilOptionalLong *)min;

/*!
 @brief Returns an <code>OptionalLong</code> describing the maximum element of this
 stream, or an empty optional if this stream is empty.
 This is a special
 case of a <a href="package-summary.html#Reduction">reduction</a>
 and is equivalent to:
 @code
    return reduce(Long::max);
 
@endcode
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @return an <code>OptionalLong</code> containing the maximum element of this
 stream, or an empty <code>OptionalLong</code> if the stream is empty
 */
- (JavaUtilOptionalLong *)max;

/*!
 @brief Returns the count of elements in this stream.
 This is a special case of
 a <a href="package-summary.html#Reduction">reduction</a> and is
 equivalent to:
 @code
    return map(e -> 1L).sum();
 
@endcode
 <p>This is a <a href="package-summary.html#StreamOps">terminal operation</a>.
 @return the count of elements in this stream
 */
- (jlong)count;

/*!
 @brief Returns an <code>OptionalDouble</code> describing the arithmetic mean of elements of
 this stream, or an empty optional if this stream is empty.
 This is a
 special case of a
 <a href="package-summary.html#Reduction">reduction</a>.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @return an <code>OptionalDouble</code> containing the average element of this
 stream, or an empty optional if the stream is empty
 */
- (JavaUtilOptionalDouble *)average;

/*!
 @brief Returns a <code>LongSummaryStatistics</code> describing various summary data
 about the elements of this stream.
 This is a special case of a
 <a href="package-summary.html#Reduction">reduction</a>.
 <p>This is a <a href="package-summary.html#StreamOps">terminal
 operation</a>.
 @return a <code>LongSummaryStatistics</code> describing various summary data
 about the elements of this stream
 */
- (JavaUtilLongSummaryStatistics *)summaryStatistics;

/*!
 @brief Returns whether any elements of this stream match the provided
 predicate.
 May not evaluate the predicate on all elements if not
 necessary for determining the result.  If the stream is empty then
 <code>false</code> is returned and the predicate is not evaluated.
 <p>This is a <a href="package-summary.html#StreamOps">short-circuiting
 terminal operation</a>.
 This method evaluates the <em>existential quantification</em> of the
 predicate over the elements of the stream (for some x P(x)).
 @param predicate a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 predicate to apply to elements of this stream
 @return <code>true</code> if any elements of the stream match the provided
 predicate, otherwise <code>false</code>
 */
- (jboolean)anyMatchWithJavaUtilFunctionLongPredicate:(id<JavaUtilFunctionLongPredicate>)predicate;

/*!
 @brief Returns whether all elements of this stream match the provided predicate.
 May not evaluate the predicate on all elements if not necessary for
 determining the result.  If the stream is empty then <code>true</code> is
 returned and the predicate is not evaluated.
 <p>This is a <a href="package-summary.html#StreamOps">short-circuiting
 terminal operation</a>.
 This method evaluates the <em>universal quantification</em> of the
 predicate over the elements of the stream (for all x P(x)).  If the
 stream is empty, the quantification is said to be <em>vacuously
 satisfied</em> and is always <code>true</code> (regardless of P(x)).
 @param predicate a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 predicate to apply to elements of this stream
 @return <code>true</code> if either all elements of the stream match the
 provided predicate or the stream is empty, otherwise <code>false</code>
 */
- (jboolean)allMatchWithJavaUtilFunctionLongPredicate:(id<JavaUtilFunctionLongPredicate>)predicate;

/*!
 @brief Returns whether no elements of this stream match the provided predicate.
 May not evaluate the predicate on all elements if not necessary for
 determining the result.  If the stream is empty then <code>true</code> is
 returned and the predicate is not evaluated.
 <p>This is a <a href="package-summary.html#StreamOps">short-circuiting
 terminal operation</a>.
 This method evaluates the <em>universal quantification</em> of the
 negated predicate over the elements of the stream (for all x ~P(x)).  If
 the stream is empty, the quantification is said to be vacuously satisfied
 and is always <code>true</code>, regardless of P(x).
 @param predicate a <a href="package-summary.html#NonInterference">non-interfering</a>,
 <a href="package-summary.html#Statelessness">stateless</a>
 predicate to apply to elements of this stream
 @return <code>true</code> if either no elements of the stream match the
 provided predicate or the stream is empty, otherwise <code>false</code>
 */
- (jboolean)noneMatchWithJavaUtilFunctionLongPredicate:(id<JavaUtilFunctionLongPredicate>)predicate;

/*!
 @brief Returns an <code>OptionalLong</code> describing the first element of this
 stream, or an empty <code>OptionalLong</code> if the stream is empty.
 If the
 stream has no encounter order, then any element may be returned.
 <p>This is a <a href="package-summary.html#StreamOps">short-circuiting
 terminal operation</a>.
 @return an <code>OptionalLong</code> describing the first element of this
 stream, or an empty <code>OptionalLong</code> if the stream is empty
 */
- (JavaUtilOptionalLong *)findFirst;

/*!
 @brief Returns an <code>OptionalLong</code> describing some element of the stream, or
 an empty <code>OptionalLong</code> if the stream is empty.
 <p>This is a <a href="package-summary.html#StreamOps">short-circuiting
 terminal operation</a>.
 <p>The behavior of this operation is explicitly nondeterministic; it is
 free to select any element in the stream.  This is to allow for maximal
 performance in parallel operations; the cost is that multiple invocations
 on the same source may not return the same result.  (If a stable result
 is desired, use <code>findFirst()</code> instead.)
 @return an <code>OptionalLong</code> describing some element of this stream,
 or an empty <code>OptionalLong</code> if the stream is empty
 - seealso: #findFirst()
 */
- (JavaUtilOptionalLong *)findAny;

/*!
 @brief Returns a <code>DoubleStream</code> consisting of the elements of this stream,
 converted to <code>double</code>.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 @return a <code>DoubleStream</code> consisting of the elements of this stream,
 converted to <code>double</code>
 */
- (id<JavaUtilStreamDoubleStream>)asDoubleStream;

/*!
 @brief Returns a <code>Stream</code> consisting of the elements of this stream,
 each boxed to a <code>Long</code>.
 <p>This is an <a href="package-summary.html#StreamOps">intermediate
 operation</a>.
 @return a <code>Stream</code> consistent of the elements of this stream,
 each boxed to <code>Long</code>
 */
- (id<JavaUtilStreamStream>)boxed;

- (id<JavaUtilStreamLongStream>)sequential;

- (id<JavaUtilStreamLongStream>)parallel;

- (id<JavaUtilPrimitiveIterator_OfLong>)iterator;

- (id<JavaUtilSpliterator_OfLong>)spliterator;

- (id<JavaUtilStreamLongStream>)unordered;

- (id<JavaUtilStreamLongStream>)onCloseWithJavaLangRunnable:(id<JavaLangRunnable>)arg0;

@end

@interface JavaUtilStreamLongStream : NSObject

/*!
 @brief Returns a builder for a <code>LongStream</code>.
 @return a stream builder
 */
+ (id<JavaUtilStreamLongStream_Builder>)builder;

/*!
 @brief Returns an empty sequential <code>LongStream</code>.
 @return an empty sequential stream
 */
+ (id<JavaUtilStreamLongStream>)empty;

/*!
 @brief Returns a sequential <code>LongStream</code> containing a single element.
 @param t the single element
 @return a singleton sequential stream
 */
+ (id<JavaUtilStreamLongStream>)ofWithLong:(jlong)t;

/*!
 @brief Returns a sequential ordered stream whose elements are the specified values.
 @param values the elements of the new stream
 @return the new stream
 */
+ (id<JavaUtilStreamLongStream>)ofWithLongArray:(IOSLongArray *)values;

/*!
 @brief Returns an infinite sequential ordered <code>LongStream</code> produced by iterative
 application of a function <code>f</code> to an initial element <code>seed</code>,
 producing a <code>Stream</code> consisting of <code>seed</code>, <code>f(seed)</code>,
 <code>f(f(seed))</code>, etc.
 <p>The first element (position <code>0</code>) in the <code>LongStream</code> will
 be the provided <code>seed</code>.  For <code>n > 0</code>, the element at position
 <code>n</code>, will be the result of applying the function <code>f</code> to the
 element at position <code>n - 1</code>.
 @param seed the initial element
 @param f a function to be applied to to the previous element to produce
 a new element
 @return a new sequential <code>LongStream</code>
 */
+ (id<JavaUtilStreamLongStream>)iterateWithLong:(jlong)seed
          withJavaUtilFunctionLongUnaryOperator:(id<JavaUtilFunctionLongUnaryOperator>)f;

/*!
 @brief Returns an infinite sequential unordered stream where each element is
 generated by the provided <code>LongSupplier</code>.
 This is suitable for
 generating constant streams, streams of random elements, etc.
 @param s the <code>LongSupplier</code> for generated elements
 @return a new infinite sequential unordered <code>LongStream</code>
 */
+ (id<JavaUtilStreamLongStream>)generateWithJavaUtilFunctionLongSupplier:(id<JavaUtilFunctionLongSupplier>)s;

/*!
 @brief Returns a sequential ordered <code>LongStream</code> from <code>startInclusive</code>
 (inclusive) to <code>endExclusive</code> (exclusive) by an incremental step of
 <code>1</code>.
 <p>An equivalent sequence of increasing values can be produced
 sequentially using a <code>for</code> loop as follows:
 @code

     for (long i = startInclusive; i < endExclusive ; i++) ... }
  
@endcode
 @param startInclusive the (inclusive) initial value
 @param endExclusive the exclusive upper bound
 @return a sequential <code>LongStream</code> for the range of <code>long</code>
 elements
 */
+ (id<JavaUtilStreamLongStream>)rangeWithLong:(jlong)startInclusive
                                     withLong:(jlong)endExclusive;

/*!
 @brief Returns a sequential ordered <code>LongStream</code> from <code>startInclusive</code>
 (inclusive) to <code>endInclusive</code> (inclusive) by an incremental step of
 <code>1</code>.
 <p>An equivalent sequence of increasing values can be produced
 sequentially using a <code>for</code> loop as follows:
 @code

     for (long i = startInclusive; i <= endInclusive ; i++) ... }
  
@endcode
 @param startInclusive the (inclusive) initial value
 @param endInclusive the inclusive upper bound
 @return a sequential <code>LongStream</code> for the range of <code>long</code>
 elements
 */
+ (id<JavaUtilStreamLongStream>)rangeClosedWithLong:(jlong)startInclusive
                                           withLong:(jlong)endInclusive;

/*!
 @brief Creates a lazily concatenated stream whose elements are all the
 elements of the first stream followed by all the elements of the
 second stream.
 The resulting stream is ordered if both
 of the input streams are ordered, and parallel if either of the input
 streams is parallel.  When the resulting stream is closed, the close
 handlers for both input streams are invoked.
 Use caution when constructing streams from repeated concatenation.
 Accessing an element of a deeply concatenated stream can result in deep
 call chains, or even <code>StackOverflowException</code>.
 @param a the first stream
 @param b the second stream
 @return the concatenation of the two input streams
 */
+ (id<JavaUtilStreamLongStream>)concatWithJavaUtilStreamLongStream:(id<JavaUtilStreamLongStream>)a
                                      withJavaUtilStreamLongStream:(id<JavaUtilStreamLongStream>)b;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamLongStream)

FOUNDATION_EXPORT id<JavaUtilStreamLongStream_Builder> JavaUtilStreamLongStream_builder();

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_empty();

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_ofWithLong_(jlong t);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_ofWithLongArray_(IOSLongArray *values);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_iterateWithLong_withJavaUtilFunctionLongUnaryOperator_(jlong seed, id<JavaUtilFunctionLongUnaryOperator> f);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_generateWithJavaUtilFunctionLongSupplier_(id<JavaUtilFunctionLongSupplier> s);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_rangeWithLong_withLong_(jlong startInclusive, jlong endExclusive);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_rangeClosedWithLong_withLong_(jlong startInclusive, jlong endInclusive);

FOUNDATION_EXPORT id<JavaUtilStreamLongStream> JavaUtilStreamLongStream_concatWithJavaUtilStreamLongStream_withJavaUtilStreamLongStream_(id<JavaUtilStreamLongStream> a, id<JavaUtilStreamLongStream> b);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamLongStream)

#endif

#if !defined (JavaUtilStreamLongStream_Builder_) && (INCLUDE_ALL_JavaUtilStreamLongStream || defined(INCLUDE_JavaUtilStreamLongStream_Builder))
#define JavaUtilStreamLongStream_Builder_

#define RESTRICT_JavaUtilFunctionLongConsumer 1
#define INCLUDE_JavaUtilFunctionLongConsumer 1
#include "java/util/function/LongConsumer.h"

@protocol JavaUtilStreamLongStream;

/*!
 @brief A mutable builder for a <code>LongStream</code>.
 <p>A stream builder has a lifecycle, which starts in a building
 phase, during which elements can be added, and then transitions to a built
 phase, after which elements may not be added.  The built phase begins
 begins when the <code>build()</code> method is called, which creates an
 ordered stream whose elements are the elements that were added to the
 stream builder, in the order they were added.
 - seealso: LongStream#builder()
 @since 1.8
 */
@protocol JavaUtilStreamLongStream_Builder < JavaUtilFunctionLongConsumer, JavaObject >

/*!
 @brief Adds an element to the stream being built.
 @throws IllegalStateException if the builder has already transitioned
 to the built state
 */
- (void)acceptWithLong:(jlong)t;

/*!
 @brief Adds an element to the stream being built.
 The default implementation behaves as if:
 @code
    accept(t)
     return this;
 
@endcode
 @param t the element to add
 @return <code>this</code> builder
 @throws IllegalStateException if the builder has already transitioned
 to the built state
 */
- (id<JavaUtilStreamLongStream_Builder>)addWithLong:(jlong)t;

/*!
 @brief Builds the stream, transitioning this builder to the built state.
 An <code>IllegalStateException</code> is thrown if there are further
 attempts to operate on the builder after it has entered the built
 state.
 @return the built stream
 @throws IllegalStateException if the builder has already transitioned
 to the built state
 */
- (id<JavaUtilStreamLongStream>)build;

@end

@interface JavaUtilStreamLongStream_Builder : NSObject < JavaUtilStreamLongStream_Builder >

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilStreamLongStream_Builder)

FOUNDATION_EXPORT id<JavaUtilStreamLongStream_Builder> JavaUtilStreamLongStream_Builder_addWithLong_(id<JavaUtilStreamLongStream_Builder> self, jlong t);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilStreamLongStream_Builder)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilStreamLongStream")
