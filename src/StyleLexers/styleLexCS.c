#include "StyleLexers.h"

// ----------------------------------------------------------------------------

KEYWORDLIST KeyWords_CS = {
"abstract add alias as ascending async await base bool break by byte case catch char checked class const "
"continue decimal default delegate descending do double dynamic else enum equals event explicit extern "
"false finally fixed float for foreach from get global goto group if implicit in int interface internal "
"into is join let lock long namespace new null object on operator orderby out override params partial "
"private protected public readonly ref remove return sbyte sealed select set short sizeof stackalloc "
"static string struct switch this throw true try typeof uint ulong unchecked unsafe ushort using value var "
"virtual void volatile where while yield",
"", "",
"AccessViolationException Action ActivationContext Activator AggregateException AppDomain "
"AppDomainInitializer AppDomainManager AppDomainManagerInitializationOptions AppDomainSetup "
"AppDomainUnloadedException ApplicationException ApplicationId ApplicationIdentity ArgIterator "
"ArgumentException ArgumentNullException ArgumentOutOfRangeException ArithmeticException Array ArrayList "
"ArraySegment ArrayTypeMismatchException AssemblyLoadEventArgs AssemblyLoadEventHandler AsyncCallback "
"Attribute AttributeTargets AttributeUsage AttributeUsageAttribute BadImageFormatException "
"Base64FormattingOptions BinaryReader BinaryWriter BitArray BitConverter BlockingCollection Boolean Buffer "
"BufferedStream Byte CLSCompliant CLSCompliantAttribute CannotUnloadAppDomainException "
"CaseInsensitiveComparer CaseInsensitiveHashCodeProvider Char CharEnumerator CollectionBase "
"CollectionDataContract CollectionDataContractAttribute Color Comparer Comparison ConcurrentBag "
"ConcurrentDictionary ConcurrentQueue ConcurrentStack ConformanceLevel Console ConsoleCancelEventArgs "
"ConsoleCancelEventHandler ConsoleColor ConsoleKey ConsoleKeyInfo ConsoleModifiers ConsoleSpecialKey "
"ContextBoundObject ContextMarshalException ContextStatic ContextStaticAttribute ContractNamespace "
"ContractNamespaceAttribute Convert Converter CrossAppDomainDelegate DBNull DataContract "
"DataContractAttribute DataContractResolver DataContractSerializer DataMember DataMemberAttribute "
"DataMisalignedException DateTime DateTimeKind DateTimeOffset DayOfWeek Decimal Delegate Dictionary "
"DictionaryBase DictionaryEntry Directory DirectoryInfo DirectoryNotFoundException DivideByZeroException "
"DllNotFoundException Double DriveInfo DriveNotFoundException DriveType DtdProcessing "
"DuplicateWaitObjectException EndOfStreamException EntityHandling EntryPointNotFoundException Enum "
"EnumMember EnumMemberAttribute Environment EnvironmentVariableTarget EqualityComparer ErrorEventArgs "
"ErrorEventHandler EventArgs EventHandler Exception ExecutionEngineException ExportOptions "
"ExtensionDataObject FieldAccessException File FileAccess FileAttributes FileFormatException FileInfo "
"FileLoadException FileMode FileNotFoundException FileOptions FileShare FileStream FileStyleUriParser "
"FileSystemEventArgs FileSystemEventHandler FileSystemInfo FileSystemWatcher Flags FlagsAttribute "
"FormatException Formatter FormatterConverter FormatterServices Formatting FtpStyleUriParser Func GC "
"GCCollectionMode GCNotificationStatus GenericUriParser GenericUriParserOptions GopherStyleUriParser Guid "
"HandleInheritability HashSet Hashtable HttpStyleUriParser IAppDomainSetup IAsyncResult ICloneable "
"ICollection IComparable IComparer IConvertible ICustomFormatter IDataContractSurrogate "
"IDeserializationCallback IDictionary IDictionaryEnumerator IDisposable IEnumerable IEnumerator "
"IEqualityComparer IEquatable IExtensibleDataObject IFormatProvider IFormattable IFormatter "
"IFormatterConverter IFragmentCapableXmlDictionaryWriter IHasXmlNode IHashCodeProvider IList IODescription "
"IODescriptionAttribute IOException IObjectReference IObservable IObserver IProducerConsumerCollection "
"ISafeSerializationData ISerializable ISerializationSurrogate IServiceProvider ISet IStreamProvider "
"IStructuralComparable IStructuralEquatable ISurrogateSelector IXPathNavigable IXmlBinaryReaderInitializer "
"IXmlBinaryWriterInitializer IXmlDictionary IXmlLineInfo IXmlMtomReaderInitializer "
"IXmlMtomWriterInitializer IXmlNamespaceResolver IXmlSchemaInfo IXmlTextReaderInitializer "
"IXmlTextWriterInitializer IXsltContextFunction IXsltContextVariable IgnoreDataMember "
"IgnoreDataMemberAttribute ImportOptions IndexOutOfRangeException InsufficientExecutionStackException "
"InsufficientMemoryException Int16 Int32 Int64 IntPtr InternalBufferOverflowException InvalidCastException "
"InvalidDataContractException InvalidDataException InvalidOperationException InvalidProgramException "
"InvalidTimeZoneException KeyNotFoundException KeyValuePair KeyedByTypeCollection KnownType "
"KnownTypeAttribute Lazy LdapStyleUriParser LinkedList LinkedListNode List LoadOptions LoaderOptimization "
"LoaderOptimizationAttribute LocalDataStoreSlot MTAThread MTAThreadAttribute MarshalByRefObject Math "
"MemberAccessException MemoryStream MethodAccessException MidpointRounding MissingFieldException "
"MissingMemberException MissingMethodException ModuleHandle MulticastDelegate "
"MulticastNotSupportedException NameTable NamespaceHandling NetDataContractSerializer "
"NetPipeStyleUriParser NetTcpStyleUriParser NewLineHandling NewsStyleUriParser NonSerialized "
"NonSerializedAttribute NotFiniteNumberException NotImplementedException NotSupportedException "
"NotifyFilters NullReferenceException Nullable Object ObjectDisposedException ObjectIDGenerator "
"ObjectManager Obsolete ObsoleteAttribute OnDeserialized OnDeserializedAttribute OnDeserializing "
"OnDeserializingAttribute OnSerialized OnSerializedAttribute OnSerializing OnSerializingAttribute "
"OnXmlDictionaryReaderClose OperatingSystem OperationCanceledException OptionalField "
"OptionalFieldAttribute OrderablePartitioner OutOfMemoryException OverflowException ParamArray "
"ParamArrayAttribute Partitioner Path PathTooLongException PipeException PlatformID "
"PlatformNotSupportedException Predicate Queue Random RankException ReadOnlyCollectionBase ReadState "
"ReaderOptions RenamedEventArgs RenamedEventHandler ResolveEventArgs ResolveEventHandler "
"RuntimeArgumentHandle RuntimeFieldHandle RuntimeMethodHandle RuntimeTypeHandle SByte STAThread "
"STAThreadAttribute SafeSerializationEventArgs SaveOptions SearchOption SeekOrigin Serializable "
"SerializableAttribute SerializationBinder SerializationEntry SerializationException SerializationInfo "
"SerializationInfoEnumerator SerializationObjectManager Single SortedDictionary SortedList SortedSet Stack "
"StackOverflowException Stream StreamReader StreamWriter StreamingContext StreamingContextStates String "
"StringBuilder StringComparer StringComparison StringReader StringSplitOptions StringWriter "
"StructuralComparisons SurrogateSelector SynchronizedCollection SynchronizedKeyedCollection "
"SynchronizedReadOnlyCollection SystemException TextReader TextWriter ThreadStatic ThreadStaticAttribute "
"TimeSpan TimeZone TimeZoneInfo TimeZoneNotFoundException TimeoutException Tuple Type TypeAccessException "
"TypeCode TypeInitializationException TypeLoadException TypeUnloadedException TypedReference UInt16 UInt32 "
"UInt64 UIntPtr UnauthorizedAccessException UnhandledExceptionEventArgs UnhandledExceptionEventHandler "
"UniqueId UnmanagedMemoryAccessor UnmanagedMemoryStream Uri UriBuilder UriComponents UriFormat "
"UriFormatException UriHostNameType UriIdnScope UriKind UriParser UriPartial UriTemplate "
"UriTemplateEquivalenceComparer UriTemplateMatch UriTemplateMatchException UriTemplateTable "
"UriTypeConverter ValidationEventArgs ValidationEventHandler ValidationType ValueType Version Void "
"WaitForChangedResult WatcherChangeTypes WeakReference WhitespaceHandling WriteState XAttribute XCData "
"XComment XContainer XDeclaration XDocument XDocumentType XElement XName XNamespace XNode "
"XNodeDocumentOrderComparer XNodeEqualityComparer XObject XObjectChange XObjectChangeEventArgs "
"XPathDocument XPathException XPathExpression XPathItem XPathNamespaceScope XPathNavigator "
"XPathNodeIterator XPathNodeType XPathQueryGenerator XPathResultType XProcessingInstruction "
"XStreamingElement XText XmlAtomicValue XmlAttribute XmlAttributeCollection XmlBinaryReaderSession "
"XmlBinaryWriterSession XmlCDataSection XmlCaseOrder XmlCharacterData XmlComment XmlConvert "
"XmlDataDocument XmlDataType XmlDateTimeSerializationMode XmlDeclaration XmlDictionary XmlDictionaryReader "
"XmlDictionaryReaderQuotas XmlDictionaryString XmlDictionaryWriter XmlDocument XmlDocumentFragment "
"XmlDocumentType XmlElement XmlEntity XmlEntityReference XmlException XmlImplementation XmlLinkedNode "
"XmlNameTable XmlNamedNodeMap XmlNamespaceManager XmlNamespaceScope XmlNode XmlNodeChangedAction "
"XmlNodeChangedEventArgs XmlNodeChangedEventHandler XmlNodeList XmlNodeOrder XmlNodeReader XmlNodeType "
"XmlNotation XmlObjectSerializer XmlOutputMethod XmlParserContext XmlProcessingInstruction "
"XmlQualifiedName XmlReader XmlReaderSettings XmlResolver XmlSchema XmlSchemaAll XmlSchemaAnnotated "
"XmlSchemaAnnotation XmlSchemaAny XmlSchemaAnyAttribute XmlSchemaAppInfo XmlSchemaAttribute "
"XmlSchemaAttributeGroup XmlSchemaAttributeGroupRef XmlSchemaChoice XmlSchemaCollection "
"XmlSchemaCollectionEnumerator XmlSchemaCompilationSettings XmlSchemaComplexContent "
"XmlSchemaComplexContentExtension XmlSchemaComplexContentRestriction XmlSchemaComplexType XmlSchemaContent "
"XmlSchemaContentModel XmlSchemaContentProcessing XmlSchemaContentType XmlSchemaDatatype "
"XmlSchemaDatatypeVariety XmlSchemaDerivationMethod XmlSchemaDocumentation XmlSchemaElement "
"XmlSchemaEnumerationFacet XmlSchemaException XmlSchemaExternal XmlSchemaFacet XmlSchemaForm "
"XmlSchemaFractionDigitsFacet XmlSchemaGroup XmlSchemaGroupBase XmlSchemaGroupRef "
"XmlSchemaIdentityConstraint XmlSchemaImport XmlSchemaInclude XmlSchemaInference "
"XmlSchemaInference.InferenceOption XmlSchemaInferenceException XmlSchemaInfo XmlSchemaKey XmlSchemaKeyref "
"XmlSchemaLengthFacet XmlSchemaMaxExclusiveFacet XmlSchemaMaxInclusiveFacet XmlSchemaMaxLengthFacet "
"XmlSchemaMinExclusiveFacet XmlSchemaMinInclusiveFacet XmlSchemaMinLengthFacet XmlSchemaNotation "
"XmlSchemaNumericFacet XmlSchemaObject XmlSchemaObjectCollection XmlSchemaObjectEnumerator "
"XmlSchemaObjectTable XmlSchemaParticle XmlSchemaPatternFacet XmlSchemaRedefine XmlSchemaSequence "
"XmlSchemaSet XmlSchemaSimpleContent XmlSchemaSimpleContentExtension XmlSchemaSimpleContentRestriction "
"XmlSchemaSimpleType XmlSchemaSimpleTypeContent XmlSchemaSimpleTypeList XmlSchemaSimpleTypeRestriction "
"XmlSchemaSimpleTypeUnion XmlSchemaTotalDigitsFacet XmlSchemaType XmlSchemaUnique XmlSchemaUse "
"XmlSchemaValidationException XmlSchemaValidationFlags XmlSchemaValidator XmlSchemaValidity "
"XmlSchemaWhiteSpaceFacet XmlSchemaXPath XmlSecureResolver XmlSerializableServices XmlSeverityType "
"XmlSignificantWhitespace XmlSortOrder XmlSpace XmlText XmlTextReader XmlTextWriter XmlTokenizedType "
"XmlTypeCode XmlUrlResolver XmlValidatingReader XmlValueGetter XmlWhitespace XmlWriter XmlWriterSettings "
"XsdDataContractExporter XsdDataContractImporter XslCompiledTransform XslTransform XsltArgumentList "
"XsltCompileException XsltContext XsltException XsltMessageEncounteredEventArgs "
"XsltMessageEncounteredEventHandler XsltSettings",
NULL,
};


EDITLEXER lexCS = { 
SCLEX_CPP, IDS_LEX_CSHARP_SRC, L"C# Source Code", L"cs; csx; vala", L"", 
&KeyWords_CS, {
    { {STYLE_DEFAULT}, IDS_LEX_STR_63126, L"Default", L"", L"" },
    //{ {SCE_C_DEFAULT}, IDS_LEX_STR_63126, L"C Default", L"", L"" },
    { {SCE_C_COMMENT}, IDS_LEX_STR_63127, L"Comment", L"fore:#008000", L"" },
    { {SCE_C_WORD}, IDS_LEX_STR_63128, L"Keyword", L"bold; fore:#804000", L"" },
    { {SCE_C_IDENTIFIER}, IDS_LEX_STR_63129, L"Identifier", L"", L"" },
    { {MULTI_STYLE(SCE_C_STRING,SCE_C_CHARACTER,SCE_C_STRINGEOL,0)}, IDS_LEX_STR_63131, L"String", L"fore:#008000", L"" },
    { {SCE_C_VERBATIM}, IDS_LEX_STR_63134, L"Verbatim String", L"fore:#008000", L"" },
    { {SCE_C_NUMBER}, IDS_LEX_STR_63130, L"Number", L"fore:#FF0000", L"" },
    { {SCE_C_OPERATOR}, IDS_LEX_STR_63132, L"Operator", L"fore:#B000B0", L"" },
    { {SCE_C_PREPROCESSOR}, IDS_LEX_STR_63133, L"Preprocessor", L"fore:#FF8000", L"" },
    //{ {SCE_C_UUID}, L"UUID", L"", L"" },
    //{ {SCE_C_REGEX}, L"Regex", L"", L"" },
    //{ {SCE_C_WORD}, L"Word 2", L"", L"" },
    { {SCE_C_GLOBALCLASS}, IDS_LEX_STR_63304, L"Global Class", L"fore:#2B91AF", L"" },
    EDITLEXER_SENTINEL } };
