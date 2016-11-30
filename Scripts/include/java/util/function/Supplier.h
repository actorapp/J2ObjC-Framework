//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/main/java/java/util/function/Supplier.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilFunctionSupplier")
#ifdef RESTRICT_JavaUtilFunctionSupplier
#define INCLUDE_ALL_JavaUtilFunctionSupplier 0
#else
#define INCLUDE_ALL_JavaUtilFunctionSupplier 1
#endif
#undef RESTRICT_JavaUtilFunctionSupplier

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilFunctionSupplier_) && (INCLUDE_ALL_JavaUtilFunctionSupplier || defined(INCLUDE_JavaUtilFunctionSupplier))
#define JavaUtilFunctionSupplier_

/*!
 @brief Represents a supplier of results.
 <p>There is no requirement that a new or distinct result be returned each
 time the supplier is invoked.
 <p>This is a <a href="package-summary.html">functional interface</a>
 whose functional method is <code>get()</code>.
 @since 1.8
 */
@protocol JavaUtilFunctionSupplier < JavaObject >

/*!
 @brief Gets a result.
 @return a result
 */
- (id)get;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilFunctionSupplier)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilFunctionSupplier)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilFunctionSupplier")