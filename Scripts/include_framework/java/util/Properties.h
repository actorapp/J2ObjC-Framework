//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/platform/libcore/ojluni/src/objc/java/java/util/Properties.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilProperties")
#ifdef RESTRICT_JavaUtilProperties
#define INCLUDE_ALL_JavaUtilProperties 0
#else
#define INCLUDE_ALL_JavaUtilProperties 1
#endif
#undef RESTRICT_JavaUtilProperties

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilProperties_) && (INCLUDE_ALL_JavaUtilProperties || defined(INCLUDE_JavaUtilProperties))
#define JavaUtilProperties_

#define RESTRICT_JavaUtilHashtable 1
#define INCLUDE_JavaUtilHashtable 1
#include "../../java/util/Hashtable.h"

@class JavaIoInputStream;
@class JavaIoOutputStream;
@class JavaIoPrintStream;
@class JavaIoPrintWriter;
@class JavaIoReader;
@class JavaIoWriter;
@protocol JavaUtilEnumeration;
@protocol JavaUtilSet;

/*!
 @brief The <code>Properties</code> class represents a persistent set of
 properties.
 The <code>Properties</code> can be saved to a stream
 or loaded from a stream. Each key and its corresponding value in
 the property list is a string.
 <p>
 A property list can contain another property list as its
 "defaults"; this second property list is searched if
 the property key is not found in the original property list.
 <p>
 Because <code>Properties</code> inherits from <code>Hashtable</code>, the
 <code>put</code> and <code>putAll</code> methods can be applied to a
 <code>Properties</code> object.  Their use is strongly discouraged as they
 allow the caller to insert entries whose keys or values are not
 <code>Strings</code>.  The <code>setProperty</code> method should be used
 instead.  If the <code>store</code> or <code>save</code> method is called
 on a "compromised" <code>Properties</code> object that contains a
 non-<code>String</code> key or value, the call will fail. Similarly,
 the call to the <code>propertyNames</code> or <code>list</code> method
 will fail if it is called on a "compromised" <code>Properties</code>
 object that contains a non-<code>String</code> key.
 <p>
 The <code>load(Reader)</code> <tt>/</tt>
 <code>store(Writer, String)</code>
 methods load and store properties from and to a character based stream
 in a simple line-oriented format specified below.
 The <code>load(InputStream)</code> <tt>/</tt>
 <code>store(OutputStream, String)</code>
 methods work the same way as the load(Reader)/store(Writer, String) pair, except
 the input/output stream is encoded in ISO 8859-1 character encoding.
 Characters that cannot be directly represented in this encoding can be written using
 Unicode escapes as defined in section 3.3 of
 <cite>The Java&trade; Language Specification</cite>;
 only a single 'u' character is allowed in an escape
 sequence. The native2ascii tool can be used to convert property files to and
 from other character encodings.
 <p> The <code>loadFromXML(InputStream)</code> and <code>storeToXML(OutputStream,String,String)</code>
  methods load and store properties
 in a simple XML format.  By default the UTF-8 character encoding is used,
 however a specific encoding may be specified if required.  An XML properties
 document has the following DOCTYPE declaration:
 @code

  &lt;!DOCTYPE properties SYSTEM "http://java.sun.com/dtd/properties.dtd"&gt;
  
@endcode
 Note that the system URI (http://java.sun.com/dtd/properties.dtd) is
 <i>not</i> accessed when exporting or importing properties; it merely
 serves as a string to uniquely identify the DTD, which is:
 @code

    &lt;?xml version="1.0" encoding="UTF-8"?&gt;
    &lt;!-- DTD for properties --&gt;
    &lt;!ELEMENT properties ( comment?, entry* ) &gt;
    &lt;!ATTLIST properties version CDATA #FIXED "1.0"&gt;
    &lt;!ELEMENT comment (#PCDATA) &gt;
    &lt;!ELEMENT entry (#PCDATA) &gt;
    &lt;!ATTLIST entry key CDATA #REQUIRED&gt;
  
@endcode
 <p>This class is thread-safe: multiple threads can share a single
 <tt>Properties</tt> object without the need for external synchronization.
 - seealso: <a href="{@@docRoot}/../technotes/tools/solaris/native2ascii.html">native2ascii tool for Solaris</a>
 - seealso: <a href="{@@docRoot}/../technotes/tools/windows/native2ascii.html">native2ascii tool for Windows</a>
 @author Arthur van Hoff
 @author Michael McCloskey
 @author Xueming Shen
 @since JDK1.0
 */
@interface JavaUtilProperties : JavaUtilHashtable {
 @public
  /*!
   @brief A property list that contains default values for any keys not
 found in this property list.
   */
  JavaUtilProperties *defaults_;
}

#pragma mark Public

/*!
 @brief Creates an empty property list with no default values.
 */
- (instancetype)init;

/*!
 @brief Creates an empty property list with the specified defaults.
 @param defaults   the defaults.
 */
- (instancetype)initWithJavaUtilProperties:(JavaUtilProperties *)defaults;

/*!
 @brief Searches for the property with the specified key in this property list.
 If the key is not found in this property list, the default property list,
 and its defaults, recursively, are then checked. The method returns
 <code>null</code> if the property is not found.
 @param key   the property key.
 @return the value in this property list with the specified key value.
 - seealso: #setProperty
 - seealso: #defaults
 */
- (NSString *)getPropertyWithNSString:(NSString *)key;

/*!
 @brief Searches for the property with the specified key in this property list.
 If the key is not found in this property list, the default property list,
 and its defaults, recursively, are then checked. The method returns the
 default value argument if the property is not found.
 @param key            the hashtable key.
 @param defaultValue   a default value.
 @return the value in this property list with the specified key value.
 - seealso: #setProperty
 - seealso: #defaults
 */
- (NSString *)getPropertyWithNSString:(NSString *)key
                         withNSString:(NSString *)defaultValue;

/*!
 @brief Prints this property list out to the specified output stream.
 This method is useful for debugging.
 @param outArg   an output stream.
 @throws ClassCastException if any key in this property list
 is not a string.
 */
- (void)listWithJavaIoPrintStream:(JavaIoPrintStream *)outArg;

/*!
 @brief Prints this property list out to the specified output stream.
 This method is useful for debugging.
 @param outArg   an output stream.
 @throws ClassCastException if any key in this property list
 is not a string.
 @since JDK1.1
 */
- (void)listWithJavaIoPrintWriter:(JavaIoPrintWriter *)outArg;

/*!
 @brief Reads a property list (key and element pairs) from the input
 byte stream.
 The input stream is in a simple line-oriented
 format as specified in
 <code>load(Reader)</code> and is assumed to use
 the ISO 8859-1 character encoding; that is each byte is one Latin1
 character. Characters not in Latin1, and certain special characters,
 are represented in keys and elements using Unicode escapes as defined in
 section 3.3 of
 <cite>The Java&trade; Language Specification</cite>.
 <p>
 The specified stream remains open after this method returns.
 @param inStream   the input stream.
 @exception IOException  if an error occurred when reading from the
 input stream.
 @throws IllegalArgumentException if the input stream contains a
 malformed Unicode escape sequence.
 @since 1.2
 */
- (void)load__WithJavaIoInputStream:(JavaIoInputStream *)inStream;

/*!
 @brief Reads a property list (key and element pairs) from the input
 character stream in a simple line-oriented format.
 <p>
 Properties are processed in terms of lines. There are two
 kinds of line, <i>natural lines</i> and <i>logical lines</i>.
 A natural line is defined as a line of
 characters that is terminated either by a set of line terminator
 characters (<code>\n</code> or <code>\r</code> or <code>\r\n</code>)
 or by the end of the stream. A natural line may be either a blank line,
 a comment line, or hold all or some of a key-element pair. A logical
 line holds all the data of a key-element pair, which may be spread
 out across several adjacent natural lines by escaping
 the line terminator sequence with a backslash character
 <code>\</code>.  Note that a comment line cannot be extended
 in this manner; every natural line that is a comment must have
 its own comment indicator, as described below. Lines are read from
 input until the end of the stream is reached.
 <p>
 A natural line that contains only white space characters is
 considered blank and is ignored.  A comment line has an ASCII
 <code>'#'</code> or <code>'!'</code> as its first non-white
 space character; comment lines are also ignored and do not
 encode key-element information.  In addition to line
 terminators, this format considers the characters space
 (<code>' '</code>, <code>'&#92;u0020'</code>), tab
 (<code>'\t'</code>, <code>'&#92;u0009'</code>), and form feed
 (<code>'\f'</code>, <code>'&#92;u000C'</code>) to be white
 space.
 <p>
 If a logical line is spread across several natural lines, the
 backslash escaping the line terminator sequence, the line
 terminator sequence, and any white space at the start of the
 following line have no affect on the key or element values.
 The remainder of the discussion of key and element parsing
 (when loading) will assume all the characters constituting
 the key and element appear on a single natural line after
 line continuation characters have been removed.  Note that
 it is <i>not</i> sufficient to only examine the character
 preceding a line terminator sequence to decide if the line
 terminator is escaped; there must be an odd number of
 contiguous backslashes for the line terminator to be escaped.
 Since the input is processed from left to right, a
 non-zero even number of 2<i>n</i> contiguous backslashes
 before a line terminator (or elsewhere) encodes <i>n</i>
 backslashes after escape processing.
 <p>
 The key contains all of the characters in the line starting
 with the first non-white space character and up to, but not
 including, the first unescaped <code>'='</code>,
 <code>':'</code>, or white space character other than a line
 terminator. All of these key termination characters may be
 included in the key by escaping them with a preceding backslash
 character; for example,<p>
 <code>\:\=</code><p>
 would be the two-character key <code>":="</code>.  Line
 terminator characters can be included using <code>\r</code> and
 <code>\n</code> escape sequences.  Any white space after the
 key is skipped; if the first non-white space character after
 the key is <code>'='</code> or <code>':'</code>, then it is
 ignored and any white space characters after it are also
 skipped.  All remaining characters on the line become part of
 the associated element string; if there are no remaining
 characters, the element is the empty string
 <code>&quot;&quot;</code>.  Once the raw character sequences
 constituting the key and element are identified, escape
 processing is performed as described above.
 <p>
 As an example, each of the following three lines specifies the key
 <code>"Truth"</code> and the associated element value
 <code>"Beauty"</code>:
 <p>
 @code

  Truth = Beauty
  Truth:Beauty
  Truth                    :Beauty
  
@endcode
 As another example, the following three lines specify a single
 property:
 <p>
 @code

  fruits                           apple, banana, pear, \
                                  cantaloupe, watermelon, \
                                  kiwi, mango
  
@endcode
 The key is <code>"fruits"</code> and the associated element is:
 <p>
 @code
"apple, banana, pear, cantaloupe, watermelon, kiwi, mango"
@endcode
 Note that a space appears before each <code>\</code> so that a space
 will appear after each comma in the final result; the <code>\</code>,
 line terminator, and leading white space on the continuation line are
 merely discarded and are <i>not</i> replaced by one or more other
 characters.
 <p>
 As a third example, the line:
 <p>
 @code
cheeses
  
@endcode
 specifies that the key is <code>"cheeses"</code> and the associated
 element is the empty string <code>""</code>.<p>
 <p>
 <a name="unicodeescapes"></a>
 Characters in keys and elements can be represented in escape
 sequences similar to those used for character and string literals
 (see sections 3.3 and 3.10.6 of
 <cite>The Java&trade; Language Specification</cite>).
 The differences from the character escape sequences and Unicode
 escapes used for characters and strings are:
 <ul>
 <li> Octal escapes are not recognized.
 <li> The character sequence <code>\b</code> does <i>not</i>
 represent a backspace character.
 <li> The method does not treat a backslash character,
 <code>\</code>, before a non-valid escape character as an
 error; the backslash is silently dropped.  For example, in a
 Java string the sequence <code>"\z"</code> would cause a
 compile time error.  In contrast, this method silently drops
 the backslash.  Therefore, this method treats the two character
 sequence <code>"\b"</code> as equivalent to the single
 character <code>'b'</code>.
 <li> Escapes are not necessary for single and double quotes;
 however, by the rule above, single and double quote characters
 preceded by a backslash still yield single and double quote
 characters, respectively.
 <li> Only a single 'u' character is allowed in a Uniocde escape
 sequence.
 </ul>
 <p>
 The specified stream remains open after this method returns.
 @param reader   the input character stream.
 @throws IOException  if an error occurred when reading from the
 input stream.
 @throws IllegalArgumentException if a malformed Unicode escape
 appears in the input.
 @since 1.6
 */
- (void)load__WithJavaIoReader:(JavaIoReader *)reader;

/*!
 @brief Loads all of the properties represented by the XML document on the
 specified input stream into this properties table.
 <p>The XML document must have the following DOCTYPE declaration:
 @code

  &lt;!DOCTYPE properties SYSTEM "http://java.sun.com/dtd/properties.dtd"&gt;
  
@endcode
 Furthermore, the document must satisfy the properties DTD described
 above.
 <p>The specified stream is closed after this method returns.
 @param inArg the input stream from which to read the XML document.
 @throws IOException if reading from the specified input stream
 results in an <tt>IOException</tt>.
 @throws InvalidPropertiesFormatException Data on input stream does not
 constitute a valid XML document with the mandated document type.
 @throws NullPointerException if <code>in</code> is null.
 - seealso: #storeToXML(OutputStream,String,String)
 @since 1.5
 */
- (void)loadFromXMLWithJavaIoInputStream:(JavaIoInputStream *)inArg;

/*!
 @brief Returns an enumeration of all the keys in this property list,
 including distinct keys in the default property list if a key
 of the same name has not already been found from the main
 properties list.
 @return an enumeration of all the keys in this property list, including
 the keys in the default property list.
 @throws ClassCastException if any key in this property list
 is not a string.
 - seealso: java.util.Enumeration
 - seealso: java.util.Properties#defaults
 - seealso: #stringPropertyNames
 */
- (id<JavaUtilEnumeration>)propertyNames;

/*!
 @brief Calls the <code>store(OutputStream out, String comments)</code> method
 and suppresses IOExceptions that were thrown.
 @param outArg      an output stream.
 @param comments   a description of the property list.
 @exception ClassCastException  if this <code>Properties</code> object
 contains any keys or values that are not
 <code>Strings</code>.
 */
- (void)saveWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                      withNSString:(NSString *)comments __attribute__((deprecated));

/*!
 @brief Calls the <tt>Hashtable</tt> method <code>put</code>.
 Provided for
 parallelism with the <tt>getProperty</tt> method. Enforces use of
 strings for property keys and values. The value returned is the
 result of the <tt>Hashtable</tt> call to <code>put</code>.
 @param key the key to be placed into this property list.
 @param value the value corresponding to <tt>key</tt>.
 @return the previous value of the specified key in this property
 list, or <code>null</code> if it did not have one.
 - seealso: #getProperty
 @since 1.2
 */
- (id)setPropertyWithNSString:(NSString *)key
                 withNSString:(NSString *)value;

/*!
 @brief Writes this property list (key and element pairs) in this
 <code>Properties</code> table to the output stream in a format suitable
 for loading into a <code>Properties</code> table using the
 <code>load(InputStream)</code> method.
 <p>
 Properties from the defaults table of this <code>Properties</code>
 table (if any) are <i>not</i> written out by this method.
 <p>
 This method outputs the comments, properties keys and values in
 the same format as specified in
 <code>store(Writer)</code>,
 with the following differences:
 <ul>
 <li>The stream is written using the ISO 8859-1 character encoding.
 <li>Characters not in Latin-1 in the comments are written as
 <code>&#92;u</code><i>xxxx</i> for their appropriate unicode
 hexadecimal value <i>xxxx</i>.
 <li>Characters less than <code>&#92;u0020</code> and characters greater
 than <code>&#92;u007E</code> in property keys or values are written
 as <code>&#92;u</code><i>xxxx</i> for the appropriate hexadecimal
 value <i>xxxx</i>.
 </ul>
 <p>
 After the entries have been written, the output stream is flushed.
 The output stream remains open after this method returns.
 <p>
 @param outArg      an output stream.
 @param comments   a description of the property list.
 @exception IOException if writing this property list to the specified
 output stream throws an <tt>IOException</tt>.
 @exception ClassCastException  if this <code>Properties</code> object
 contains any keys or values that are not <code>Strings</code>.
 @exception NullPointerException  if <code>out</code> is null.
 @since 1.2
 */
- (void)storeWithJavaIoOutputStream:(JavaIoOutputStream *)outArg
                       withNSString:(NSString *)comments;

/*!
 @brief Writes this property list (key and element pairs) in this
 <code>Properties</code> table to the output character stream in a
 format suitable for using the <code>load(Reader)</code>
 method.
 <p>
 Properties from the defaults table of this <code>Properties</code>
 table (if any) are <i>not</i> written out by this method.
 <p>
 If the comments argument is not null, then an ASCII <code>#</code>
 character, the comments string, and a line separator are first written
 to the output stream. Thus, the <code>comments</code> can serve as an
 identifying comment. Any one of a line feed ('\n'), a carriage
 return ('\r'), or a carriage return followed immediately by a line feed
 in comments is replaced by a line separator generated by the <code>Writer</code>
 and if the next character in comments is not character <code>#</code> or
 character <code>!</code> then an ASCII <code>#</code> is written out
 after that line separator.
 <p>
 Next, a comment line is always written, consisting of an ASCII
 <code>#</code> character, the current date and time (as if produced
 by the <code>toString</code> method of <code>Date</code> for the
 current time), and a line separator as generated by the <code>Writer</code>.
 <p>
 Then every entry in this <code>Properties</code> table is
 written out, one per line. For each entry the key string is
 written, then an ASCII <code>=</code>, then the associated
 element string. For the key, all space characters are
 written with a preceding <code>\</code> character.  For the
 element, leading space characters, but not embedded or trailing
 space characters, are written with a preceding <code>\</code>
 character. The key and element characters <code>#</code>,
 <code>!</code>, <code>=</code>, and <code>:</code> are written
 with a preceding backslash to ensure that they are properly loaded.
 <p>
 After the entries have been written, the output stream is flushed.
 The output stream remains open after this method returns.
 <p>
 @param writer      an output character stream writer.
 @param comments   a description of the property list.
 @exception IOException if writing this property list to the specified
 output stream throws an <tt>IOException</tt>.
 @exception ClassCastException  if this <code>Properties</code> object
 contains any keys or values that are not <code>Strings</code>.
 @exception NullPointerException  if <code>writer</code> is null.
 @since 1.6
 */
- (void)storeWithJavaIoWriter:(JavaIoWriter *)writer
                 withNSString:(NSString *)comments;

/*!
 @brief Emits an XML document representing all of the properties contained
 in this table.
 <p> An invocation of this method of the form <tt>props.storeToXML(os,
 comment)</tt> behaves in exactly the same way as the invocation
 <tt>props.storeToXML(os, comment, "UTF-8");</tt>.
 @param os the output stream on which to emit the XML document.
 @param comment a description of the property list, or <code>null</code>
 if no comment is desired.
 @throws IOException if writing to the specified output stream
 results in an <tt>IOException</tt>.
 @throws NullPointerException if <code>os</code> is null.
 @throws ClassCastException  if this <code>Properties</code> object
 contains any keys or values that are not
 <code>Strings</code>.
 - seealso: #loadFromXML(InputStream)
 @since 1.5
 */
- (void)storeToXMLWithJavaIoOutputStream:(JavaIoOutputStream *)os
                            withNSString:(NSString *)comment;

/*!
 @brief Emits an XML document representing all of the properties contained
 in this table, using the specified encoding.
 <p>The XML document will have the following DOCTYPE declaration:
 @code

  &lt;!DOCTYPE properties SYSTEM "http://java.sun.com/dtd/properties.dtd"&gt;
  
@endcode
 <p>If the specified comment is <code>null</code> then no comment
 will be stored in the document.
 <p>The specified stream remains open after this method returns.
 @param os        the output stream on which to emit the XML document.
 @param comment   a description of the property list, or <code>null</code>
 if no comment is desired.
 @param encoding the name of a supported
 <a href="../lang/package-summary.html#charenc">
 character encoding</a>
 @throws IOException if writing to the specified output stream
 results in an <tt>IOException</tt>.
 @throws NullPointerException if <code>os</code> is <code>null</code>,
 or if <code>encoding</code> is <code>null</code>.
 @throws ClassCastException  if this <code>Properties</code> object
 contains any keys or values that are not
 <code>Strings</code>.
 - seealso: #loadFromXML(InputStream)
 @since 1.5
 */
- (void)storeToXMLWithJavaIoOutputStream:(JavaIoOutputStream *)os
                            withNSString:(NSString *)comment
                            withNSString:(NSString *)encoding;

/*!
 @brief Returns a set of keys in this property list where
 the key and its corresponding value are strings,
 including distinct keys in the default property list if a key
 of the same name has not already been found from the main
 properties list.
 Properties whose key or value is not
 of type <tt>String</tt> are omitted.
 <p>
 The returned set is not backed by the <tt>Properties</tt> object.
 Changes to this <tt>Properties</tt> are not reflected in the set,
 or vice versa.
 @return a set of keys in this property list where
 the key and its corresponding value are strings,
 including the keys in the default property list.
 - seealso: java.util.Properties#defaults
 @since 1.6
 */
- (id<JavaUtilSet>)stringPropertyNames;

@end

J2OBJC_STATIC_INIT(JavaUtilProperties)

J2OBJC_FIELD_SETTER(JavaUtilProperties, defaults_, JavaUtilProperties *)

FOUNDATION_EXPORT void JavaUtilProperties_init(JavaUtilProperties *self);

FOUNDATION_EXPORT JavaUtilProperties *new_JavaUtilProperties_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilProperties *create_JavaUtilProperties_init();

FOUNDATION_EXPORT void JavaUtilProperties_initWithJavaUtilProperties_(JavaUtilProperties *self, JavaUtilProperties *defaults);

FOUNDATION_EXPORT JavaUtilProperties *new_JavaUtilProperties_initWithJavaUtilProperties_(JavaUtilProperties *defaults) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilProperties *create_JavaUtilProperties_initWithJavaUtilProperties_(JavaUtilProperties *defaults);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilProperties)

#endif

#if !defined (JavaUtilProperties_LineReader_) && (INCLUDE_ALL_JavaUtilProperties || defined(INCLUDE_JavaUtilProperties_LineReader))
#define JavaUtilProperties_LineReader_

@class IOSByteArray;
@class IOSCharArray;
@class JavaIoInputStream;
@class JavaIoReader;
@class JavaUtilProperties;

@interface JavaUtilProperties_LineReader : NSObject {
 @public
  IOSByteArray *inByteBuf_;
  IOSCharArray *inCharBuf_;
  IOSCharArray *lineBuf_;
  jint inLimit_;
  jint inOff_;
  JavaIoInputStream *inStream_;
  JavaIoReader *reader_;
}

#pragma mark Public

- (instancetype)initWithJavaUtilProperties:(JavaUtilProperties *)outer$
                     withJavaIoInputStream:(JavaIoInputStream *)inStream;

- (instancetype)initWithJavaUtilProperties:(JavaUtilProperties *)outer$
                          withJavaIoReader:(JavaIoReader *)reader;

#pragma mark Package-Private

- (jint)readLine;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilProperties_LineReader)

J2OBJC_FIELD_SETTER(JavaUtilProperties_LineReader, inByteBuf_, IOSByteArray *)
J2OBJC_FIELD_SETTER(JavaUtilProperties_LineReader, inCharBuf_, IOSCharArray *)
J2OBJC_FIELD_SETTER(JavaUtilProperties_LineReader, lineBuf_, IOSCharArray *)
J2OBJC_FIELD_SETTER(JavaUtilProperties_LineReader, inStream_, JavaIoInputStream *)
J2OBJC_FIELD_SETTER(JavaUtilProperties_LineReader, reader_, JavaIoReader *)

FOUNDATION_EXPORT void JavaUtilProperties_LineReader_initWithJavaUtilProperties_withJavaIoInputStream_(JavaUtilProperties_LineReader *self, JavaUtilProperties *outer$, JavaIoInputStream *inStream);

FOUNDATION_EXPORT JavaUtilProperties_LineReader *new_JavaUtilProperties_LineReader_initWithJavaUtilProperties_withJavaIoInputStream_(JavaUtilProperties *outer$, JavaIoInputStream *inStream) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilProperties_LineReader *create_JavaUtilProperties_LineReader_initWithJavaUtilProperties_withJavaIoInputStream_(JavaUtilProperties *outer$, JavaIoInputStream *inStream);

FOUNDATION_EXPORT void JavaUtilProperties_LineReader_initWithJavaUtilProperties_withJavaIoReader_(JavaUtilProperties_LineReader *self, JavaUtilProperties *outer$, JavaIoReader *reader);

FOUNDATION_EXPORT JavaUtilProperties_LineReader *new_JavaUtilProperties_LineReader_initWithJavaUtilProperties_withJavaIoReader_(JavaUtilProperties *outer$, JavaIoReader *reader) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilProperties_LineReader *create_JavaUtilProperties_LineReader_initWithJavaUtilProperties_withJavaIoReader_(JavaUtilProperties *outer$, JavaIoReader *reader);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilProperties_LineReader)

#endif

#if !defined (JavaUtilProperties_XmlLoader_) && (INCLUDE_ALL_JavaUtilProperties || defined(INCLUDE_JavaUtilProperties_XmlLoader))
#define JavaUtilProperties_XmlLoader_

@class JavaIoInputStream;
@class JavaUtilProperties;

/*!
 @brief Creates a dynamic dependency on XML support so that XML support can be excluded from the
 application binary without incurring link errors.
 */
@protocol JavaUtilProperties_XmlLoader < JavaObject >

- (void)load__WithJavaUtilProperties:(JavaUtilProperties *)p
               withJavaIoInputStream:(JavaIoInputStream *)inArg;

@end

@interface JavaUtilProperties_XmlLoader : NSObject

+ (id<JavaUtilProperties_XmlLoader>)INSTANCE;

@end

J2OBJC_STATIC_INIT(JavaUtilProperties_XmlLoader)

inline id<JavaUtilProperties_XmlLoader> JavaUtilProperties_XmlLoader_get_INSTANCE();
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT id<JavaUtilProperties_XmlLoader> JavaUtilProperties_XmlLoader_INSTANCE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(JavaUtilProperties_XmlLoader, INSTANCE, id<JavaUtilProperties_XmlLoader>)

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilProperties_XmlLoader)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilProperties")
