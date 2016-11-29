//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:../java_deps/build_result/guava-19.0-sources.jar!com/google/common/collect/ForwardingQueue.java
//

#include "../../../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue")
#ifdef RESTRICT_ComGoogleCommonCollectForwardingQueue
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue 0
#else
#define INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue 1
#endif
#undef RESTRICT_ComGoogleCommonCollectForwardingQueue

#if !defined (ComGoogleCommonCollectForwardingQueue_) && (INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue || defined(INCLUDE_ComGoogleCommonCollectForwardingQueue))
#define ComGoogleCommonCollectForwardingQueue_

#define RESTRICT_ComGoogleCommonCollectForwardingCollection 1
#define INCLUDE_ComGoogleCommonCollectForwardingCollection 1
#include "../../../../../com/google/common/collect/ForwardingCollection.h"

#define RESTRICT_JavaUtilQueue 1
#define INCLUDE_JavaUtilQueue 1
#include "../../../../../java/util/Queue.h"

@interface ComGoogleCommonCollectForwardingQueue : ComGoogleCommonCollectForwardingCollection < JavaUtilQueue >

#pragma mark Public

- (id)element;

- (jboolean)offerWithId:(id)o;

- (id)peek;

- (id)poll;

- (id)remove;

#pragma mark Protected

- (instancetype)init;

- (id<JavaUtilQueue>)delegate;

- (jboolean)standardOfferWithId:(id)e;

- (id)standardPeek;

- (id)standardPoll;

#pragma mark Package-Private

@end

J2OBJC_EMPTY_STATIC_INIT(ComGoogleCommonCollectForwardingQueue)

FOUNDATION_EXPORT void ComGoogleCommonCollectForwardingQueue_init(ComGoogleCommonCollectForwardingQueue *self);

J2OBJC_TYPE_LITERAL_HEADER(ComGoogleCommonCollectForwardingQueue)

#endif

#pragma pop_macro("INCLUDE_ALL_ComGoogleCommonCollectForwardingQueue")
