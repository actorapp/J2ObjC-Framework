//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/ObjectInputStream.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaIoObjectInputStream")
#ifdef RESTRICT_JavaIoObjectInputStream
#define INCLUDE_ALL_JavaIoObjectInputStream 0
#else
#define INCLUDE_ALL_JavaIoObjectInputStream 1
#endif
#undef RESTRICT_JavaIoObjectInputStream

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaIoObjectInputStream_) && (INCLUDE_ALL_JavaIoObjectInputStream || defined(INCLUDE_JavaIoObjectInputStream))
#define JavaIoObjectInputStream_

#define RESTRICT_JavaIoInputStream 1
#define INCLUDE_JavaIoInputStream 1
#include "java/io/InputStream.h"

#define RESTRICT_JavaIoObjectInput 1
#define INCLUDE_JavaIoObjectInput 1
#include "java/io/ObjectInput.h"

#define RESTRICT_JavaIoObjectStreamConstants 1
#define INCLUDE_JavaIoObjectStreamConstants 1
#include "java/io/ObjectStreamConstants.h"

@class IOSByteArray;
@class IOSClass;
@class IOSObjectArray;
@class JavaIoObjectInputStream_GetField;
@class JavaIoObjectStreamClass;
@protocol JavaIoObjectInputValidation;

/*!
 @brief A specialized <code>InputStream</code> that is able to read (deserialize) Java
 objects as well as primitive data types (int, byte, char etc.).
 The data has
 typically been saved using an ObjectOutputStream.
 - seealso: ObjectOutputStream
 - seealso: ObjectInput
 - seealso: Serializable
 - seealso: Externalizable
 */
@interface JavaIoObjectInputStream : JavaIoInputStream < JavaIoObjectInput, JavaIoObjectStreamConstants >

#pragma mark Public

/*!
 @brief Constructs a new ObjectInputStream that reads from the InputStream
 <code>input</code>.
 @param input
 the non-null source InputStream to filter reads on.
 @throws IOException
 if an error occurs while reading the stream header.
 @throws StreamCorruptedException
 if the source stream does not contain serialized objects that
 can be read.
 */
- (instancetype)initWithJavaIoInputStream:(JavaIoInputStream *)input;

- (jint)available;

/*!
 @brief Closes this stream.
 This implementation closes the source stream.
 @throws IOException
 if an error occurs while closing this stream.
 */
- (void)close;

/*!
 @brief Default method to read objects from this stream.
 Serializable fields
 defined in the object's class and superclasses are read from the source
 stream.
 @throws ClassNotFoundException
 if the object's class cannot be found.
 @throws IOException
 if an I/O error occurs while reading the object data.
 @throws NotActiveException
 if this method is not called from <code>readObject()</code>.
 - seealso: ObjectOutputStream#defaultWriteObject
 */
- (void)defaultReadObject;

/*!
 @brief Reads a single byte from the source stream and returns it as an integer
 in the range from 0 to 255.
 Returns -1 if the end of the source stream
 has been reached. Blocks if no input is available.
 @return the byte read or -1 if the end of the source stream has been
 reached.
 @throws IOException
 if an error occurs while reading from this stream.
 */
- (jint)read;

/*!
 @brief Reads at most <code>length</code> bytes from the source stream and stores them
 in byte array <code>buffer</code> starting at offset <code>count</code>.
 Blocks
 until <code>count</code> bytes have been read, the end of the source stream is
 detected or an exception is thrown.
 @param buffer
 the array in which to store the bytes read.
 @param byteOffset
 the initial position in <code>buffer</code> to store the bytes
 read from the source stream.
 @param byteCount
 the maximum number of bytes to store in <code>buffer</code>.
 @return the number of bytes read or -1 if the end of the source input
 stream has been reached.
 @throws IndexOutOfBoundsException
 if <code>offset < 0</code> or <code>length < 0</code>, or if
 <code>offset + length</code> is greater than the length of
 <code>buffer</code>.
 @throws IOException
 if an error occurs while reading from this stream.
 @throws NullPointerException
 if <code>buffer</code> is <code>null</code>.
 */
- (jint)readWithByteArray:(IOSByteArray *)buffer
                  withInt:(jint)byteOffset
                  withInt:(jint)byteCount;

/*!
 @brief Reads a boolean from the source stream.
 @return the boolean value read from the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jboolean)readBoolean;

/*!
 @brief Reads a byte (8 bit) from the source stream.
 @return the byte value read from the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jbyte)readByte;

/*!
 @brief Reads a character (16 bit) from the source stream.
 @return the char value read from the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jchar)readChar;

/*!
 @brief Reads a double (64 bit) from the source stream.
 @return the double value read from the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jdouble)readDouble;

/*!
 @brief Reads the persistent fields of the object that is currently being read
 from the source stream.
 The values read are stored in a GetField object
 that provides access to the persistent fields. This GetField object is
 then returned.
 @return the GetField object from which persistent fields can be accessed
 by name.
 @throws ClassNotFoundException
 if the class of an object being deserialized can not be
 found.
 @throws IOException
 if an error occurs while reading from this stream.
 @throws NotActiveException
 if this stream is currently not reading an object.
 */
- (JavaIoObjectInputStream_GetField *)readFields;

/*!
 @brief Reads a float (32 bit) from the source stream.
 @return the float value read from the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jfloat)readFloat;

/*!
 @brief Reads bytes from the source stream into the byte array <code>dst</code>.
 This method will block until <code>dst.length</code> bytes have been read.
 @param dst
 the array in which to store the bytes read.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (void)readFullyWithByteArray:(IOSByteArray *)dst;

/*!
 @brief Reads <code>byteCount</code> bytes from the source stream into the byte array <code>dst</code>.
 @param dst
 the byte array in which to store the bytes read.
 @param offset
 the initial position in <code>dst</code> to store the bytes
 read from the source stream.
 @param byteCount
 the number of bytes to read.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (void)readFullyWithByteArray:(IOSByteArray *)dst
                       withInt:(jint)offset
                       withInt:(jint)byteCount;

/*!
 @brief Reads an integer (32 bit) from the source stream.
 @return the integer value read from the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jint)readInt;

/*!
 @brief Reads the next line from the source stream.
 Lines are terminated by
 <code>'\r'</code>, <code>'\n'</code>, <code>"\r\n"</code> or an <code>EOF</code>.
 @return the string read from the source stream.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (NSString *)readLine __attribute__((deprecated));

/*!
 @brief Reads a long (64 bit) from the source stream.
 @return the long value read from the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jlong)readLong;

/*!
 @brief Reads the next object from the source stream.
 @return the object read from the source stream.
 @throws ClassNotFoundException
 if the class of one of the objects in the object graph cannot
 be found.
 @throws IOException
 if an error occurs while reading from the source stream.
 @throws OptionalDataException
 if primitive data types were found instead of an object.
 - seealso: ObjectOutputStream#writeObject(Object)
 */
- (id)readObject;

/*!
 @brief Reads a short (16 bit) from the source stream.
 @return the short value read from the source stream.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jshort)readShort;

/*!
 @brief Reads the next unshared object from the source stream.
 @return the new object read.
 @throws ClassNotFoundException
 if the class of one of the objects in the object graph cannot
 be found.
 @throws IOException
 if an error occurs while reading from the source stream.
 - seealso: ObjectOutputStream#writeUnshared
 */
- (id)readUnshared;

/*!
 @brief Reads an unsigned byte (8 bit) from the source stream.
 @return the unsigned byte value read from the source stream packaged in
 an integer.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jint)readUnsignedByte;

/*!
 @brief Reads an unsigned short (16 bit) from the source stream.
 @return the unsigned short value read from the source stream packaged in
 an integer.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (jint)readUnsignedShort;

/*!
 @brief Reads a string encoded in <code>modified UTF-8</code> from the
 source stream.
 @return the string encoded in <code>modified UTF-8</code> read from
 the source stream.
 @throws EOFException
 if the end of the input is reached before the read
 request can be satisfied.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (NSString *)readUTF;

/*!
 @brief Registers a callback for post-deserialization validation of objects.
 It
 allows to perform additional consistency checks before the <code>readObject()</code>
  method of this class returns its result to the caller. This
 method can only be called from within the <code>readObject()</code> method of
 a class that implements "special" deserialization rules. It can be called
 multiple times. Validation callbacks are then done in order of decreasing
 priority, defined by <code>priority</code>.
 @param object
 an object that can validate itself by receiving a callback.
 @param priority
 the validator's priority.
 @throws InvalidObjectException
 if <code>object</code> is <code>null</code>.
 @throws NotActiveException
 if this stream is currently not reading objects. In that
 case, calling this method is not allowed.
 - seealso: ObjectInputValidation#validateObject()
 */
- (void)registerValidationWithJavaIoObjectInputValidation:(id<JavaIoObjectInputValidation>)object
                                                  withInt:(jint)priority;

/*!
 @brief Skips <code>length</code> bytes on the source stream.
 This method should not
 be used to skip bytes at any arbitrary position, just when reading
 primitive data types (int, char etc).
 @param length
 the number of bytes to skip.
 @return the number of bytes actually skipped.
 @throws IOException
 if an error occurs while skipping bytes on the source stream.
 @throws NullPointerException
 if the source stream is <code>null</code>.
 */
- (jint)skipBytesWithInt:(jint)length;

#pragma mark Protected

/*!
 @brief Constructs a new ObjectInputStream.
 This default constructor can be used
 by subclasses that do not want to use the public constructor if it
 allocates unneeded data.
 @throws IOException
 if an error occurs when creating this stream.
 */
- (instancetype)init;

/*!
 @brief Enables object replacement for this stream.
 By default this is not
 enabled. Only trusted subclasses (loaded with system class loader) are
 allowed to change this status.
 @param enable
 <code>true</code> to enable object replacement; <code>false</code> to
 disable it.
 @return the previous setting.
 - seealso: #resolveObject
 - seealso: ObjectOutputStream#enableReplaceObject
 */
- (jboolean)enableResolveObjectWithBoolean:(jboolean)enable;

/*!
 @brief Reads a class descriptor from the source stream.
 @return the class descriptor read from the source stream.
 @throws ClassNotFoundException
 if a class for one of the objects cannot be found.
 @throws IOException
 if an error occurs while reading from the source stream.
 */
- (JavaIoObjectStreamClass *)readClassDescriptor;

/*!
 @brief Method to be overridden by subclasses to read the next object from the
 source stream.
 @return the object read from the source stream.
 @throws ClassNotFoundException
 if the class of one of the objects in the object graph cannot
 be found.
 @throws IOException
 if an error occurs while reading from the source stream.
 @throws OptionalDataException
 if primitive data types were found instead of an object.
 - seealso: ObjectOutputStream#writeObjectOverride
 */
- (id)readObjectOverride;

/*!
 @brief Reads and validates the ObjectInputStream header from the source stream.
 @throws IOException
 if an error occurs while reading from the source stream.
 @throws StreamCorruptedException
 if the source stream does not contain readable serialized
 objects.
 */
- (void)readStreamHeader;

/*!
 @brief Loads the Java class corresponding to the class descriptor <code>osClass</code>
  that has just been read from the source stream.
 @param osClass
 an ObjectStreamClass read from the source stream.
 @return a Class corresponding to the descriptor <code>osClass</code>.
 @throws ClassNotFoundException
 if the class for an object cannot be found.
 @throws IOException
 if an I/O error occurs while creating the class.
 - seealso: ObjectOutputStream#annotateClass(Class)
 */
- (IOSClass *)resolveClassWithJavaIoObjectStreamClass:(JavaIoObjectStreamClass *)osClass;

/*!
 @brief Allows trusted subclasses to substitute the specified original <code>object</code>
  with a new object.
 Object substitution has to be activated first
 with calling <code>enableResolveObject(true)</code>. This implementation just
 returns <code>object</code>.
 @param object
 the original object for which a replacement may be defined.
 @return the replacement object for <code>object</code>.
 @throws IOException
 if any I/O error occurs while creating the replacement
 object.
 - seealso: #enableResolveObject
 - seealso: ObjectOutputStream#enableReplaceObject
 - seealso: ObjectOutputStream#replaceObject
 */
- (id)resolveObjectWithId:(id)object;

/*!
 @brief Creates the proxy class that implements the interfaces specified in
 <code>interfaceNames</code>.
 @param interfaceNames
 the interfaces used to create the proxy class.
 @return the proxy class.
 @throws ClassNotFoundException
 if the proxy class or any of the specified interfaces cannot
 be created.
 @throws IOException
 if an error occurs while reading from the source stream.
 - seealso: ObjectOutputStream#annotateProxyClass(Class)
 */
- (IOSClass *)resolveProxyClassWithNSStringArray:(IOSObjectArray *)interfaceNames;

@end

J2OBJC_STATIC_INIT(JavaIoObjectInputStream)

FOUNDATION_EXPORT void JavaIoObjectInputStream_init(JavaIoObjectInputStream *self);

FOUNDATION_EXPORT JavaIoObjectInputStream *new_JavaIoObjectInputStream_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoObjectInputStream *create_JavaIoObjectInputStream_init();

FOUNDATION_EXPORT void JavaIoObjectInputStream_initWithJavaIoInputStream_(JavaIoObjectInputStream *self, JavaIoInputStream *input);

FOUNDATION_EXPORT JavaIoObjectInputStream *new_JavaIoObjectInputStream_initWithJavaIoInputStream_(JavaIoInputStream *input) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoObjectInputStream *create_JavaIoObjectInputStream_initWithJavaIoInputStream_(JavaIoInputStream *input);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectInputStream)

#endif

#if !defined (JavaIoObjectInputStream_InputValidationDesc_) && (INCLUDE_ALL_JavaIoObjectInputStream || defined(INCLUDE_JavaIoObjectInputStream_InputValidationDesc))
#define JavaIoObjectInputStream_InputValidationDesc_

@protocol JavaIoObjectInputValidation;

@interface JavaIoObjectInputStream_InputValidationDesc : NSObject {
 @public
  id<JavaIoObjectInputValidation> validator_;
  jint priority_;
}

#pragma mark Package-Private

- (instancetype)init;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectInputStream_InputValidationDesc)

J2OBJC_FIELD_SETTER(JavaIoObjectInputStream_InputValidationDesc, validator_, id<JavaIoObjectInputValidation>)

FOUNDATION_EXPORT void JavaIoObjectInputStream_InputValidationDesc_init(JavaIoObjectInputStream_InputValidationDesc *self);

FOUNDATION_EXPORT JavaIoObjectInputStream_InputValidationDesc *new_JavaIoObjectInputStream_InputValidationDesc_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaIoObjectInputStream_InputValidationDesc *create_JavaIoObjectInputStream_InputValidationDesc_init();

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectInputStream_InputValidationDesc)

#endif

#if !defined (JavaIoObjectInputStream_GetField_) && (INCLUDE_ALL_JavaIoObjectInputStream || defined(INCLUDE_JavaIoObjectInputStream_GetField))
#define JavaIoObjectInputStream_GetField_

@class JavaIoObjectStreamClass;

/*!
 @brief GetField is an inner class that provides access to the persistent fields
 read from the source stream.
 */
@interface JavaIoObjectInputStream_GetField : NSObject

#pragma mark Public

- (instancetype)init;

/*!
 @brief Indicates if the field identified by <code>name</code> is defaulted.
 This
 means that it has no value in this stream.
 @param name
 the name of the field to check.
 @return <code>true</code> if the field is defaulted, <code>false</code>
 otherwise.
 @throws IllegalArgumentException
 if <code>name</code> does not identify a serializable field.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 */
- (jboolean)defaultedWithNSString:(NSString *)name;

/*!
 @brief Gets the value of the boolean field identified by <code>name</code> from
 the persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>boolean</code>.
 */
- (jboolean)getWithNSString:(NSString *)name
                withBoolean:(jboolean)defaultValue;

/*!
 @brief Gets the value of the byte field identified by <code>name</code> from the
 persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>byte</code>.
 */
- (jbyte)getWithNSString:(NSString *)name
                withByte:(jbyte)defaultValue;

/*!
 @brief Gets the value of the character field identified by <code>name</code> from
 the persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>char</code>.
 */
- (jchar)getWithNSString:(NSString *)name
                withChar:(jchar)defaultValue;

/*!
 @brief Gets the value of the double field identified by <code>name</code> from
 the persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>double</code>.
 */
- (jdouble)getWithNSString:(NSString *)name
                withDouble:(jdouble)defaultValue;

/*!
 @brief Gets the value of the float field identified by <code>name</code> from the
 persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>float</code> is
 not <code>char</code>.
 */
- (jfloat)getWithNSString:(NSString *)name
                withFloat:(jfloat)defaultValue;

/*!
 @brief Gets the value of the integer field identified by <code>name</code> from
 the persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>int</code>.
 */
- (jint)getWithNSString:(NSString *)name
                withInt:(jint)defaultValue;

/*!
 @brief Gets the value of the long field identified by <code>name</code> from the
 persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>long</code>.
 */
- (jlong)getWithNSString:(NSString *)name
                withLong:(jlong)defaultValue;

/*!
 @brief Gets the value of the object field identified by <code>name</code> from
 the persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>Object</code>.
 */
- (id)getWithNSString:(NSString *)name
               withId:(id)defaultValue;

/*!
 @brief Gets the value of the short field identified by <code>name</code> from the
 persistent field.
 @param name
 the name of the field to get.
 @param defaultValue
 the default value that is used if the field does not have
 a value when read from the source stream.
 @return the value of the field identified by <code>name</code>.
 @throws IOException
 if an error occurs while reading from the source input
 stream.
 @throws IllegalArgumentException
 if the type of the field identified by <code>name</code> is
 not <code>short</code>.
 */
- (jshort)getWithNSString:(NSString *)name
                withShort:(jshort)defaultValue;

/*!
 @brief Gets the ObjectStreamClass that describes a field.
 @return the descriptor class for a serialized field.
 */
- (JavaIoObjectStreamClass *)getObjectStreamClass;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaIoObjectInputStream_GetField)

FOUNDATION_EXPORT void JavaIoObjectInputStream_GetField_init(JavaIoObjectInputStream_GetField *self);

J2OBJC_TYPE_LITERAL_HEADER(JavaIoObjectInputStream_GetField)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaIoObjectInputStream")
