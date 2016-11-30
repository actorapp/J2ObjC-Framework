//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/testing/mockito/build_result/java/org/mockito/BDDMockito.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgMockitoBDDMockito")
#ifdef RESTRICT_OrgMockitoBDDMockito
#define INCLUDE_ALL_OrgMockitoBDDMockito 0
#else
#define INCLUDE_ALL_OrgMockitoBDDMockito 1
#endif
#undef RESTRICT_OrgMockitoBDDMockito
#ifdef INCLUDE_OrgMockitoBDDMockito_BDDStubberImpl
#define INCLUDE_OrgMockitoBDDMockito_BDDStubber 1
#endif
#ifdef INCLUDE_OrgMockitoBDDMockito_BDDOngoingStubbingImpl
#define INCLUDE_OrgMockitoBDDMockito_BDDMyOngoingStubbing 1
#endif

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgMockitoBDDMockito_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito))
#define OrgMockitoBDDMockito_

#define RESTRICT_OrgMockitoMockito 1
#define INCLUDE_OrgMockitoMockito 1
#include "../../org/mockito/Mockito.h"

@class IOSClass;
@protocol OrgMockitoBDDMockito_BDDMyOngoingStubbing;
@protocol OrgMockitoBDDMockito_BDDStubber;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief Behavior Driven Development style of writing tests uses <b>//given //when //then</b> comments as fundamental parts of your test methods.
 This is exactly how we write our tests and we warmly encourage you to do so!
 <p>
 Start learning about BDD here: <a href="http://en.wikipedia.org/wiki/Behavior_Driven_Development">http://en.wikipedia.org/wiki/Behavior_Driven_Development</a>
 <p>
 The problem is that current stubbing api with canonical role of <b>when</b> word does not integrate nicely with <b>//given //when //then</b> comments.
 It's because stubbing belongs to <b>given</b> component of the test and not to the <b>when</b> component of the test. 
 Hence <code>BDDMockito</code> class introduces an alias so that you stub method calls with <code>BDDMockito.given(Object)</code> method. 
 Now it really nicely integrates with the <b>given</b> component of a BDD style test!    
 <p>
 Here is how the test might look like: 
 <pre class="code"><code class="java">
 import static org.mockito.BDDMockito.*;
 Seller seller = mock(Seller.class);
 Shop shop = new Shop(seller);
 public void shouldBuyBread() throws Exception {
 //given  
 given(seller.askForBread()).willReturn(new Bread());
 //when
 Goods goods = shop.buyBread();
 //then
 assertThat(goods, containBread());
 }  
 
@endcode
 Stubbing voids with throwables:
 <pre class="code"><code class="java">
 //given
 willThrow(new RuntimeException("boo")).given(mock).foo();
 //when
 Result result = systemUnderTest.perform();
 //then
 assertEquals(failure, result);
 
@endcode
 <p>
 One of the purposes of BDDMockito is also to show how to tailor the mocking syntax to a different programming style.
 @since 1.8.0
 */
@interface OrgMockitoBDDMockito : OrgMockitoMockito

#pragma mark Public

- (instancetype)init;

/*!
 @brief see original <code>Mockito.when(Object)</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)givenWithId:(id)methodCall;

/*!
 @brief see original <code>Mockito.doAnswer(Answer)</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief see original <code>Mockito.doCallRealMethod()</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willCallRealMethod;

/*!
 @brief see original <code>Mockito.doNothing()</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willDoNothing;

/*!
 @brief see original <code>Mockito.doReturn(Object)</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned;

/*!
 @brief see original <code>Mockito.doThrow(Throwable)</code>
 @since 1.9.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown;

/*!
 @brief see original <code>Mockito.doThrow(Throwable)</code>
 @since 1.8.0
 */
+ (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithNSException:(NSException *)toBeThrown;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito)

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDMyOngoingStubbing> OrgMockitoBDDMockito_givenWithId_(id methodCall);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithNSException_(NSException *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willThrowWithIOSClass_(IOSClass *toBeThrown);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willAnswerWithOrgMockitoStubbingAnswer_(id<OrgMockitoStubbingAnswer> answer);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willDoNothing();

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willReturnWithId_(id toBeReturned);

FOUNDATION_EXPORT id<OrgMockitoBDDMockito_BDDStubber> OrgMockitoBDDMockito_willCallRealMethod();

FOUNDATION_EXPORT void OrgMockitoBDDMockito_init(OrgMockitoBDDMockito *self);

FOUNDATION_EXPORT OrgMockitoBDDMockito *new_OrgMockitoBDDMockito_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoBDDMockito *create_OrgMockitoBDDMockito_init();

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito)

#endif

#if !defined (OrgMockitoBDDMockito_BDDMyOngoingStubbing_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDMyOngoingStubbing))
#define OrgMockitoBDDMockito_BDDMyOngoingStubbing_

@class IOSObjectArray;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief See original <code>OngoingStubbing</code>
 @since 1.8.0
 */
@protocol OrgMockitoBDDMockito_BDDMyOngoingStubbing < JavaObject >

/*!
 @brief See original <code>OngoingStubbing.thenAnswer(Answer)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief See original <code>OngoingStubbing.then(Answer)</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief See original <code>OngoingStubbing.thenReturn(Object)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value;

/*!
 @brief See original <code>OngoingStubbing.thenReturn(Object,Object[])</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value
                                                withNSObjectArray:(IOSObjectArray *)values;

/*!
 @brief See original <code>OngoingStubbing.thenThrow(Throwable...)
 </code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithNSExceptionArray:(IOSObjectArray *)throwables;

/*!
 @brief See original <code>OngoingStubbing.thenThrow(Class[])</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithIOSClassArray:(IOSObjectArray *)throwableClasses;

/*!
 @brief See original <code>OngoingStubbing.thenCallRealMethod()</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willCallRealMethod;

/*!
 @brief See original <code>OngoingStubbing.getMock()</code>
 @since 1.9.0
 */
- (id)getMock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDMyOngoingStubbing)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDMyOngoingStubbing)

#endif

#if !defined (OrgMockitoBDDMockito_BDDOngoingStubbingImpl_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDOngoingStubbingImpl))
#define OrgMockitoBDDMockito_BDDOngoingStubbingImpl_

@class IOSObjectArray;
@protocol OrgMockitoBDDMockito_BDDMyOngoingStubbing;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingOngoingStubbing;

@interface OrgMockitoBDDMockito_BDDOngoingStubbingImpl : NSObject < OrgMockitoBDDMockito_BDDMyOngoingStubbing >

#pragma mark Public

- (instancetype)initWithOrgMockitoStubbingOngoingStubbing:(id<OrgMockitoStubbingOngoingStubbing>)ongoingStubbing;

- (id)getMock;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willCallRealMethod;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willReturnWithId:(id)value
                                                withNSObjectArray:(IOSObjectArray *)values;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithIOSClassArray:(IOSObjectArray *)throwableClasses;

- (id<OrgMockitoBDDMockito_BDDMyOngoingStubbing>)willThrowWithNSExceptionArray:(IOSObjectArray *)throwables;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDOngoingStubbingImpl)

FOUNDATION_EXPORT void OrgMockitoBDDMockito_BDDOngoingStubbingImpl_initWithOrgMockitoStubbingOngoingStubbing_(OrgMockitoBDDMockito_BDDOngoingStubbingImpl *self, id<OrgMockitoStubbingOngoingStubbing> ongoingStubbing);

FOUNDATION_EXPORT OrgMockitoBDDMockito_BDDOngoingStubbingImpl *new_OrgMockitoBDDMockito_BDDOngoingStubbingImpl_initWithOrgMockitoStubbingOngoingStubbing_(id<OrgMockitoStubbingOngoingStubbing> ongoingStubbing) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoBDDMockito_BDDOngoingStubbingImpl *create_OrgMockitoBDDMockito_BDDOngoingStubbingImpl_initWithOrgMockitoStubbingOngoingStubbing_(id<OrgMockitoStubbingOngoingStubbing> ongoingStubbing);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDOngoingStubbingImpl)

#endif

#if !defined (OrgMockitoBDDMockito_BDDStubber_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDStubber))
#define OrgMockitoBDDMockito_BDDStubber_

@class IOSClass;
@protocol OrgMockitoStubbingAnswer;

/*!
 @brief See original <code>Stubber</code>
 @since 1.8.0
 */
@protocol OrgMockitoBDDMockito_BDDStubber < JavaObject >

/*!
 @brief See original <code>Stubber.doAnswer(Answer)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

/*!
 @brief See original <code>Stubber.doNothing()</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willNothing;

/*!
 @brief See original <code>Stubber.doReturn(Object)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned;

/*!
 @brief See original <code>Stubber.doThrow(Throwable)</code>
 @since 1.8.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithNSException:(NSException *)toBeThrown;

/*!
 @brief See original <code>Stubber.doThrow(Class)</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown;

/*!
 @brief See original <code>Stubber.doCallRealMethod()</code>
 @since 1.9.0
 */
- (id<OrgMockitoBDDMockito_BDDStubber>)willCallRealMethod;

/*!
 @brief See original <code>Stubber.when(Object)</code>
 @since 1.8.0
 */
- (id)givenWithId:(id)mock;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDStubber)

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDStubber)

#endif

#if !defined (OrgMockitoBDDMockito_BDDStubberImpl_) && (INCLUDE_ALL_OrgMockitoBDDMockito || defined(INCLUDE_OrgMockitoBDDMockito_BDDStubberImpl))
#define OrgMockitoBDDMockito_BDDStubberImpl_

@class IOSClass;
@protocol OrgMockitoBDDMockito_BDDStubber;
@protocol OrgMockitoStubbingAnswer;
@protocol OrgMockitoStubbingStubber;

@interface OrgMockitoBDDMockito_BDDStubberImpl : NSObject < OrgMockitoBDDMockito_BDDStubber >

#pragma mark Public

- (instancetype)initWithOrgMockitoStubbingStubber:(id<OrgMockitoStubbingStubber>)mockitoStubber;

- (id)givenWithId:(id)mock;

- (id<OrgMockitoBDDMockito_BDDStubber>)willAnswerWithOrgMockitoStubbingAnswer:(id<OrgMockitoStubbingAnswer>)answer;

- (id<OrgMockitoBDDMockito_BDDStubber>)willCallRealMethod;

- (id<OrgMockitoBDDMockito_BDDStubber>)willNothing;

- (id<OrgMockitoBDDMockito_BDDStubber>)willReturnWithId:(id)toBeReturned;

- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithIOSClass:(IOSClass *)toBeThrown;

- (id<OrgMockitoBDDMockito_BDDStubber>)willThrowWithNSException:(NSException *)toBeThrown;

@end

J2OBJC_EMPTY_STATIC_INIT(OrgMockitoBDDMockito_BDDStubberImpl)

FOUNDATION_EXPORT void OrgMockitoBDDMockito_BDDStubberImpl_initWithOrgMockitoStubbingStubber_(OrgMockitoBDDMockito_BDDStubberImpl *self, id<OrgMockitoStubbingStubber> mockitoStubber);

FOUNDATION_EXPORT OrgMockitoBDDMockito_BDDStubberImpl *new_OrgMockitoBDDMockito_BDDStubberImpl_initWithOrgMockitoStubbingStubber_(id<OrgMockitoStubbingStubber> mockitoStubber) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT OrgMockitoBDDMockito_BDDStubberImpl *create_OrgMockitoBDDMockito_BDDStubberImpl_initWithOrgMockitoStubbingStubber_(id<OrgMockitoStubbingStubber> mockitoStubber);

J2OBJC_TYPE_LITERAL_HEADER(OrgMockitoBDDMockito_BDDStubberImpl)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgMockitoBDDMockito")