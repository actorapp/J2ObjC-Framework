//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/concurrent/ScheduledThreadPoolExecutor.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilConcurrentScheduledThreadPoolExecutor")
#ifdef RESTRICT_JavaUtilConcurrentScheduledThreadPoolExecutor
#define INCLUDE_ALL_JavaUtilConcurrentScheduledThreadPoolExecutor 0
#else
#define INCLUDE_ALL_JavaUtilConcurrentScheduledThreadPoolExecutor 1
#endif
#undef RESTRICT_JavaUtilConcurrentScheduledThreadPoolExecutor

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilConcurrentScheduledThreadPoolExecutor_) && (INCLUDE_ALL_JavaUtilConcurrentScheduledThreadPoolExecutor || defined(INCLUDE_JavaUtilConcurrentScheduledThreadPoolExecutor))
#define JavaUtilConcurrentScheduledThreadPoolExecutor_

#define RESTRICT_JavaUtilConcurrentThreadPoolExecutor 1
#define INCLUDE_JavaUtilConcurrentThreadPoolExecutor 1
#include "../../../java/util/concurrent/ThreadPoolExecutor.h"

#define RESTRICT_JavaUtilConcurrentScheduledExecutorService 1
#define INCLUDE_JavaUtilConcurrentScheduledExecutorService 1
#include "../../../java/util/concurrent/ScheduledExecutorService.h"

@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentBlockingQueue;
@protocol JavaUtilConcurrentCallable;
@protocol JavaUtilConcurrentFuture;
@protocol JavaUtilConcurrentRejectedExecutionHandler;
@protocol JavaUtilConcurrentRunnableScheduledFuture;
@protocol JavaUtilConcurrentScheduledFuture;
@protocol JavaUtilConcurrentThreadFactory;
@protocol JavaUtilList;

/*!
 @brief A <code>ThreadPoolExecutor</code> that can additionally schedule
 commands to run after a given delay, or to execute periodically.
 This class is preferable to <code>java.util.Timer</code> when multiple
 worker threads are needed, or when the additional flexibility or
 capabilities of <code>ThreadPoolExecutor</code> (which this class
 extends) are required.
 <p>Delayed tasks execute no sooner than they are enabled, but
 without any real-time guarantees about when, after they are
 enabled, they will commence. Tasks scheduled for exactly the same
 execution time are enabled in first-in-first-out (FIFO) order of
 submission.
 <p>When a submitted task is cancelled before it is run, execution
 is suppressed. By default, such a cancelled task is not
 automatically removed from the work queue until its delay
 elapses. While this enables further inspection and monitoring, it
 may also cause unbounded retention of cancelled tasks.
 <p>Successive executions of a periodic task scheduled via
 <code>scheduleAtFixedRate</code> or
 <code>scheduleWithFixedDelay</code> do not overlap. While different
 executions may be performed by different threads, the effects of
 prior executions <a
 href="package-summary.html#MemoryVisibility"><i>happen-before</i></a>
 those of subsequent ones.
 <p>While this class inherits from <code>ThreadPoolExecutor</code>, a few
 of the inherited tuning methods are not useful for it. In
 particular, because it acts as a fixed-sized pool using
 <code>corePoolSize</code> threads and an unbounded queue, adjustments
 to <code>maximumPoolSize</code> have no useful effect. Additionally, it
 is almost never a good idea to set <code>corePoolSize</code> to zero or
 use <code>allowCoreThreadTimeOut</code> because this may leave the pool
 without threads to handle tasks once they become eligible to run.
 <p><b>Extension notes:</b> This class overrides the
 <code>execute</code> and
 <code>submit</code>
 methods to generate internal <code>ScheduledFuture</code> objects to
 control per-task delays and scheduling.  To preserve
 functionality, any further overrides of these methods in
 subclasses must invoke superclass versions, which effectively
 disables additional task customization.  However, this class
 provides alternative protected extension method
 <code>decorateTask</code> (one version each for <code>Runnable</code> and
 <code>Callable</code>) that can be used to customize the concrete task
 types used to execute commands entered via <code>execute</code>,
 <code>submit</code>, <code>schedule</code>, <code>scheduleAtFixedRate</code>,
 and <code>scheduleWithFixedDelay</code>.  By default, a
 <code>ScheduledThreadPoolExecutor</code> uses a task type extending
 <code>FutureTask</code>. However, this may be modified or replaced using
 subclasses of the form:
 @code
 
  public class CustomScheduledExecutor extends ScheduledThreadPoolExecutor 
   static class CustomTask<V> implements RunnableScheduledFuture<V> { ... }
   protected <V> RunnableScheduledFuture<V> decorateTask(
                Runnable r, RunnableScheduledFuture<V> task) {
       return new CustomTask<V>(r, task);
   }
   protected <V> RunnableScheduledFuture<V> decorateTask(
                Callable<V> c, RunnableScheduledFuture<V> task) {
       return new CustomTask<V>(c, task);
   }
   // ... add constructors, etc.
  
@endcode
 @since 1.5
 @author Doug Lea
 */
@interface JavaUtilConcurrentScheduledThreadPoolExecutor : JavaUtilConcurrentThreadPoolExecutor < JavaUtilConcurrentScheduledExecutorService >

#pragma mark Public

/*!
 @brief Creates a new <code>ScheduledThreadPoolExecutor</code> with the
 given core pool size.
 @param corePoolSize the number of threads to keep in the pool, even
 if they are idle, unless <code>allowCoreThreadTimeOut</code> is set
 @throws IllegalArgumentException if <code>corePoolSize < 0</code>
 */
- (instancetype)initWithInt:(jint)corePoolSize;

/*!
 @brief Creates a new <code>ScheduledThreadPoolExecutor</code> with the
 given initial parameters.
 @param corePoolSize the number of threads to keep in the pool, even
 if they are idle, unless <code>allowCoreThreadTimeOut</code> is set
 @param handler the handler to use when execution is blocked
 because the thread bounds and queue capacities are reached
 @throws IllegalArgumentException if <code>corePoolSize < 0</code>
 @throws NullPointerException if <code>handler</code> is null
 */
- (instancetype)initWithInt:(jint)corePoolSize
withJavaUtilConcurrentRejectedExecutionHandler:(id<JavaUtilConcurrentRejectedExecutionHandler>)handler;

/*!
 @brief Creates a new <code>ScheduledThreadPoolExecutor</code> with the
 given initial parameters.
 @param corePoolSize the number of threads to keep in the pool, even
 if they are idle, unless <code>allowCoreThreadTimeOut</code> is set
 @param threadFactory the factory to use when the executor
 creates a new thread
 @throws IllegalArgumentException if <code>corePoolSize < 0</code>
 @throws NullPointerException if <code>threadFactory</code> is null
 */
- (instancetype)initWithInt:(jint)corePoolSize
withJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory;

/*!
 @brief Creates a new <code>ScheduledThreadPoolExecutor</code> with the
 given initial parameters.
 @param corePoolSize the number of threads to keep in the pool, even
 if they are idle, unless <code>allowCoreThreadTimeOut</code> is set
 @param threadFactory the factory to use when the executor
 creates a new thread
 @param handler the handler to use when execution is blocked
 because the thread bounds and queue capacities are reached
 @throws IllegalArgumentException if <code>corePoolSize < 0</code>
 @throws NullPointerException if <code>threadFactory</code> or
 <code>handler</code> is null
 */
- (instancetype)initWithInt:(jint)corePoolSize
withJavaUtilConcurrentThreadFactory:(id<JavaUtilConcurrentThreadFactory>)threadFactory
withJavaUtilConcurrentRejectedExecutionHandler:(id<JavaUtilConcurrentRejectedExecutionHandler>)handler;

/*!
 @brief Executes <code>command</code> with zero required delay.
 This has effect equivalent to
 <code>schedule(command, 0, anyUnit)</code>.
 Note that inspections of the queue and of the list returned by
 <code>shutdownNow</code> will access the zero-delayed
 <code>ScheduledFuture</code>, not the <code>command</code> itself.
 <p>A consequence of the use of <code>ScheduledFuture</code> objects is
 that <code>afterExecute</code> is always
 called with a null second <code>Throwable</code> argument, even if the
 <code>command</code> terminated abruptly.  Instead, the <code>Throwable</code>
 thrown by such a task can be obtained via <code>Future.get</code>.
 @throws RejectedExecutionException at discretion of
 <code>RejectedExecutionHandler</code>, if the task
 cannot be accepted for execution because the
 executor has been shut down
 @throws NullPointerException
 */
- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)command;

/*!
 @brief Gets the policy on whether to continue executing existing
 periodic tasks even when this executor has been <code>shutdown</code>.
 In this case, these tasks will only terminate upon
 <code>shutdownNow</code> or after setting the policy to
 <code>false</code> when already shutdown.
 This value is by default <code>false</code>.
 @return <code>true</code> if will continue after shutdown
 - seealso: #setContinueExistingPeriodicTasksAfterShutdownPolicy
 */
- (jboolean)getContinueExistingPeriodicTasksAfterShutdownPolicy;

/*!
 @brief Gets the policy on whether to execute existing delayed
 tasks even when this executor has been <code>shutdown</code>.
 In this case, these tasks will only terminate upon
 <code>shutdownNow</code>, or after setting the policy to
 <code>false</code> when already shutdown.
 This value is by default <code>true</code>.
 @return <code>true</code> if will execute after shutdown
 - seealso: #setExecuteExistingDelayedTasksAfterShutdownPolicy
 */
- (jboolean)getExecuteExistingDelayedTasksAfterShutdownPolicy;

/*!
 @brief Returns the task queue used by this executor.
 Each element of this list is a <code>ScheduledFuture</code>.
 For tasks submitted via one of the <code>schedule</code> methods, the
 element will be identical to the returned <code>ScheduledFuture</code>.
 For tasks submitted using <code>execute</code>, the element will be a
 zero-delay <code>ScheduledFuture</code>.
 <p>Iteration over this queue is <em>not</em> guaranteed to traverse
 tasks in the order in which they will execute.
 @return the task queue
 */
- (id<JavaUtilConcurrentBlockingQueue>)getQueue;

/*!
 @brief Gets the policy on whether cancelled tasks should be immediately
 removed from the work queue at time of cancellation.
 This value is
 by default <code>false</code>.
 @return <code>true</code> if cancelled tasks are immediately removed
 from the queue
 - seealso: #setRemoveOnCancelPolicy
 @since 1.7
 */
- (jboolean)getRemoveOnCancelPolicy;

/*!
 @throws RejectedExecutionException
 @throws NullPointerException
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                                                       withLong:(jlong)delay
                                                 withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @throws RejectedExecutionException
 @throws NullPointerException
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                             withLong:(jlong)delay
                                       withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @throws RejectedExecutionException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleAtFixedRateWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                        withLong:(jlong)initialDelay
                                                                        withLong:(jlong)period
                                                  withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @throws RejectedExecutionException
 @throws NullPointerException
 @throws IllegalArgumentException
 */
- (id<JavaUtilConcurrentScheduledFuture>)scheduleWithFixedDelayWithJavaLangRunnable:(id<JavaLangRunnable>)command
                                                                           withLong:(jlong)initialDelay
                                                                           withLong:(jlong)delay
                                                     withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

/*!
 @brief Sets the policy on whether to continue executing existing
 periodic tasks even when this executor has been <code>shutdown</code>.
 In this case, these tasks will only terminate upon
 <code>shutdownNow</code> or after setting the policy to
 <code>false</code> when already shutdown.
 This value is by default <code>false</code>.
 @param value if <code>true</code>, continue after shutdown, else don't
 - seealso: #getContinueExistingPeriodicTasksAfterShutdownPolicy
 */
- (void)setContinueExistingPeriodicTasksAfterShutdownPolicyWithBoolean:(jboolean)value;

/*!
 @brief Sets the policy on whether to execute existing delayed
 tasks even when this executor has been <code>shutdown</code>.
 In this case, these tasks will only terminate upon
 <code>shutdownNow</code>, or after setting the policy to
 <code>false</code> when already shutdown.
 This value is by default <code>true</code>.
 @param value if <code>true</code>, execute after shutdown, else don't
 - seealso: #getExecuteExistingDelayedTasksAfterShutdownPolicy
 */
- (void)setExecuteExistingDelayedTasksAfterShutdownPolicyWithBoolean:(jboolean)value;

/*!
 @brief Sets the policy on whether cancelled tasks should be immediately
 removed from the work queue at time of cancellation.
 This value is
 by default <code>false</code>.
 @param value if <code>true</code>, remove on cancellation, else don't
 - seealso: #getRemoveOnCancelPolicy
 @since 1.7
 */
- (void)setRemoveOnCancelPolicyWithBoolean:(jboolean)value;

/*!
 @brief Initiates an orderly shutdown in which previously submitted
 tasks are executed, but no new tasks will be accepted.
 Invocation has no additional effect if already shut down.
 <p>This method does not wait for previously submitted tasks to
 complete execution.  Use <code>awaitTermination</code>
 to do that.
 <p>If the <code>ExecuteExistingDelayedTasksAfterShutdownPolicy</code>
 has been set <code>false</code>, existing delayed tasks whose delays
 have not yet elapsed are cancelled.  And unless the <code>ContinueExistingPeriodicTasksAfterShutdownPolicy</code>
  has been set
 <code>true</code>, future executions of existing periodic tasks will
 be cancelled.
 */
- (void)shutdown;

/*!
 @brief Attempts to stop all actively executing tasks, halts the
 processing of waiting tasks, and returns a list of the tasks
 that were awaiting execution.
 <p>This method does not wait for actively executing tasks to
 terminate.  Use <code>awaitTermination</code> to
 do that.
 <p>There are no guarantees beyond best-effort attempts to stop
 processing actively executing tasks.  This implementation
 cancels tasks via <code>Thread.interrupt</code>, so any task that
 fails to respond to interrupts may never terminate.
 @return list of tasks that never commenced execution.
 Each element of this list is a <code>ScheduledFuture</code>.
 For tasks submitted via one of the <code>schedule</code>
 methods, the element will be identical to the returned
 <code>ScheduledFuture</code>.  For tasks submitted using
 <code>execute</code>, the element will be a zero-delay <code>ScheduledFuture</code>
 .
 */
- (id<JavaUtilList>)shutdownNow;

/*!
 @throws RejectedExecutionException
 @throws NullPointerException
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)task;

/*!
 @throws RejectedExecutionException
 @throws NullPointerException
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task;

/*!
 @throws RejectedExecutionException
 @throws NullPointerException
 */
- (id<JavaUtilConcurrentFuture>)submitWithJavaLangRunnable:(id<JavaLangRunnable>)task
                                                    withId:(id)result;

#pragma mark Protected

/*!
 @brief Modifies or replaces the task used to execute a callable.
 This method can be used to override the concrete
 class used for managing internal tasks.
 The default implementation simply returns the given task.
 @param callable the submitted Callable
 @param task the task created to execute the callable
 @return a task that can execute the callable
 @since 1.6
 */
- (id<JavaUtilConcurrentRunnableScheduledFuture>)decorateTaskWithJavaUtilConcurrentCallable:(id<JavaUtilConcurrentCallable>)callable
                                              withJavaUtilConcurrentRunnableScheduledFuture:(id<JavaUtilConcurrentRunnableScheduledFuture>)task;

/*!
 @brief Modifies or replaces the task used to execute a runnable.
 This method can be used to override the concrete
 class used for managing internal tasks.
 The default implementation simply returns the given task.
 @param runnable the submitted Runnable
 @param task the task created to execute the runnable
 @return a task that can execute the runnable
 @since 1.6
 */
- (id<JavaUtilConcurrentRunnableScheduledFuture>)decorateTaskWithJavaLangRunnable:(id<JavaLangRunnable>)runnable
                                    withJavaUtilConcurrentRunnableScheduledFuture:(id<JavaUtilConcurrentRunnableScheduledFuture>)task;

#pragma mark Package-Private

/*!
 @brief Returns true if can run a task given current run state
 and run-after-shutdown parameters.
 @param periodic true if this task periodic, false if delayed
 */
- (jboolean)canRunInCurrentRunStateWithBoolean:(jboolean)periodic;

/*!
 @brief Returns current nanosecond time.
 */
- (jlong)now;

/*!
 @brief Cancels and clears the queue of all tasks that should not be run
 due to shutdown policy.
 Invoked within super.shutdown.
 */
- (void)onShutdown;

/*!
 @brief Requeues a periodic task unless current run state precludes it.
 Same idea as delayedExecute except drops task rather than rejecting.
 @param task the task
 */
- (void)reExecutePeriodicWithJavaUtilConcurrentRunnableScheduledFuture:(id<JavaUtilConcurrentRunnableScheduledFuture>)task;

/*!
 @brief Returns the nanoTime-based trigger time of a delayed action.
 */
- (jlong)triggerTimeWithLong:(jlong)delay;

@end

J2OBJC_STATIC_INIT(JavaUtilConcurrentScheduledThreadPoolExecutor)

FOUNDATION_EXPORT void JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_(JavaUtilConcurrentScheduledThreadPoolExecutor *self, jint corePoolSize);

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *new_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_(jint corePoolSize) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *create_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_(jint corePoolSize);

FOUNDATION_EXPORT void JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentThreadFactory_(JavaUtilConcurrentScheduledThreadPoolExecutor *self, jint corePoolSize, id<JavaUtilConcurrentThreadFactory> threadFactory);

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *new_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentThreadFactory_(jint corePoolSize, id<JavaUtilConcurrentThreadFactory> threadFactory) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *create_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentThreadFactory_(jint corePoolSize, id<JavaUtilConcurrentThreadFactory> threadFactory);

FOUNDATION_EXPORT void JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentRejectedExecutionHandler_(JavaUtilConcurrentScheduledThreadPoolExecutor *self, jint corePoolSize, id<JavaUtilConcurrentRejectedExecutionHandler> handler);

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *new_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentRejectedExecutionHandler_(jint corePoolSize, id<JavaUtilConcurrentRejectedExecutionHandler> handler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *create_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentRejectedExecutionHandler_(jint corePoolSize, id<JavaUtilConcurrentRejectedExecutionHandler> handler);

FOUNDATION_EXPORT void JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentThreadFactory_withJavaUtilConcurrentRejectedExecutionHandler_(JavaUtilConcurrentScheduledThreadPoolExecutor *self, jint corePoolSize, id<JavaUtilConcurrentThreadFactory> threadFactory, id<JavaUtilConcurrentRejectedExecutionHandler> handler);

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *new_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentThreadFactory_withJavaUtilConcurrentRejectedExecutionHandler_(jint corePoolSize, id<JavaUtilConcurrentThreadFactory> threadFactory, id<JavaUtilConcurrentRejectedExecutionHandler> handler) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor *create_JavaUtilConcurrentScheduledThreadPoolExecutor_initWithInt_withJavaUtilConcurrentThreadFactory_withJavaUtilConcurrentRejectedExecutionHandler_(jint corePoolSize, id<JavaUtilConcurrentThreadFactory> threadFactory, id<JavaUtilConcurrentRejectedExecutionHandler> handler);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentScheduledThreadPoolExecutor)

#endif

#if !defined (JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue_) && (INCLUDE_ALL_JavaUtilConcurrentScheduledThreadPoolExecutor || defined(INCLUDE_JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue))
#define JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue_

#define RESTRICT_JavaUtilAbstractQueue 1
#define INCLUDE_JavaUtilAbstractQueue 1
#include "../../../java/util/AbstractQueue.h"

#define RESTRICT_JavaUtilConcurrentBlockingQueue 1
#define INCLUDE_JavaUtilConcurrentBlockingQueue 1
#include "../../../java/util/concurrent/BlockingQueue.h"

@class IOSObjectArray;
@class JavaUtilConcurrentTimeUnit;
@protocol JavaLangRunnable;
@protocol JavaUtilCollection;
@protocol JavaUtilConcurrentRunnableScheduledFuture;
@protocol JavaUtilIterator;

/*!
 @brief Specialized delay queue.
 To mesh with TPE declarations, this
 class must be declared as a BlockingQueue<Runnable> even though
 it can only hold RunnableScheduledFutures.
 */
@interface JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue : JavaUtilAbstractQueue < JavaUtilConcurrentBlockingQueue >

#pragma mark Public

- (jboolean)addWithId:(id<JavaLangRunnable>)e;

- (void)clear;

- (jboolean)containsWithId:(id)x;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)drainToWithJavaUtilCollection:(id<JavaUtilCollection>)c
                              withInt:(jint)maxElements;

- (id<JavaLangRunnable>)element;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)offerWithId:(id<JavaLangRunnable>)x;

- (jboolean)offerWithId:(id<JavaLangRunnable>)e
               withLong:(jlong)timeout
withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (id<JavaUtilConcurrentRunnableScheduledFuture>)peek;

- (id<JavaUtilConcurrentRunnableScheduledFuture>)poll;

- (id<JavaUtilConcurrentRunnableScheduledFuture>)pollWithLong:(jlong)timeout
                               withJavaUtilConcurrentTimeUnit:(JavaUtilConcurrentTimeUnit *)unit;

- (void)putWithId:(id<JavaLangRunnable>)e;

- (jint)remainingCapacity;

- (id<JavaLangRunnable>)remove;

- (jboolean)removeWithId:(id)x;

- (jint)size;

- (id<JavaUtilConcurrentRunnableScheduledFuture>)take;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue)

FOUNDATION_EXPORT void JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue_init(JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue *self);

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue *new_JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue *create_JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilConcurrentScheduledThreadPoolExecutor_DelayedWorkQueue)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilConcurrentScheduledThreadPoolExecutor")
