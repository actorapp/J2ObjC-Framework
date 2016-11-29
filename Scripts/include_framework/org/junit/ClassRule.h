//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/tball/src/j2objc/junit/build_result/java/org/junit/ClassRule.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_OrgJunitClassRule")
#ifdef RESTRICT_OrgJunitClassRule
#define INCLUDE_ALL_OrgJunitClassRule 0
#else
#define INCLUDE_ALL_OrgJunitClassRule 1
#endif
#undef RESTRICT_OrgJunitClassRule

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (OrgJunitClassRule_) && (INCLUDE_ALL_OrgJunitClassRule || defined(INCLUDE_OrgJunitClassRule))
#define OrgJunitClassRule_

#define RESTRICT_JavaLangAnnotationAnnotation 1
#define INCLUDE_JavaLangAnnotationAnnotation 1
#include "../../java/lang/annotation/Annotation.h"

@class IOSClass;

/*!
 @brief Annotates static fields that reference rules or methods that return them.
 A field must be public,
 static, and a subtype of <code>org.junit.rules.TestRule</code>.  A method must be public static, and return
 a subtype of <code>org.junit.rules.TestRule</code>.<p>
 The <code>org.junit.runners.model.Statement</code> passed
 to the <code>org.junit.rules.TestRule</code> will run any <code>BeforeClass</code> methods,
 then the entire body of the test class (all contained methods, if it is
 a standard JUnit test class, or all contained classes, if it is a
 <code>org.junit.runners.Suite</code>), and finally any <code>AfterClass</code> methods.
 The statement passed to the <code>org.junit.rules.TestRule</code> will never throw an exception,
 and throwing an exception from the <code>org.junit.rules.TestRule</code> will result in undefined
 behavior.  This means that some <code>org.junit.rules.TestRule</code>s, such as
 <code>org.junit.rules.ErrorCollector</code>,
 <code>org.junit.rules.ExpectedException</code>,
 and <code>org.junit.rules.Timeout</code>,
 have undefined behavior when used as <code>ClassRule</code>s.
 If there are multiple
 annotated <code>ClassRule</code>s on a class, they will be applied in an order
 that depends on your JVM's implementation of the reflection API, which is
 undefined, in general. However, Rules defined by fields will always be applied
 before Rules defined by methods.
 For example, here is a test suite that connects to a server once before
 all the test classes run, and disconnects after they are finished:
 @code

  &#064;RunWith(Suite.class)
  &#064;SuiteClasses({A.class, B.class, C.class})
  public class UsesExternalResource {
     public static Server myServer= new Server();
     &#064;ClassRule
     public static ExternalResource resource= new ExternalResource() {
       &#064;Override
       protected void before() throws Throwable {
          myServer.connect();
      }
      &#064;Override
      protected void after() {
 	        myServer.disconnect();
      }
   };
  }
  
@endcode
 and the same using a method
 @code

  &#064;RunWith(Suite.class)
  &#064;SuiteClasses({A.class, B.class, C.class})
  public class UsesExternalResource {
     public static Server myServer= new Server();
     &#064;ClassRule
     public static ExternalResource getResource() {
         return new ExternalResource() {
             &#064;Override
             protected void before() throws Throwable {
                 myServer.connect();
             }
             &#064;Override
             protected void after() {
                 myServer.disconnect();
             }
         };
     }
  }
  
@endcode
 For more information and more examples, see <code>org.junit.rules.TestRule</code>.
 @since 4.9
 */
@protocol OrgJunitClassRule < JavaLangAnnotationAnnotation >

@end

@interface OrgJunitClassRule : NSObject < OrgJunitClassRule >

@end

J2OBJC_EMPTY_STATIC_INIT(OrgJunitClassRule)

FOUNDATION_EXPORT id<OrgJunitClassRule> create_OrgJunitClassRule();

J2OBJC_TYPE_LITERAL_HEADER(OrgJunitClassRule)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_OrgJunitClassRule")
