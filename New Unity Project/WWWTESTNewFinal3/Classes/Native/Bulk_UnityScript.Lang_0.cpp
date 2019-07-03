﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// UnityScript.Lang.Array
struct Array_t201190492;
// System.Collections.CollectionBase
struct CollectionBase_t2727926298;
// System.Collections.IEnumerable
struct IEnumerable_t1941168011;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t2718874744;
// System.String
struct String_t;
// System.ArgumentNullException
struct ArgumentNullException_t1615371798;
// UnityScript.Lang.ListUpdateableEnumerator
struct ListUpdateableEnumerator_t1416462507;
// System.Collections.IList
struct IList_t2094931216;
// UnityScript.Lang.UnityRuntimeServices
struct UnityRuntimeServices_t2934608295;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Void
struct Void_t1185182177;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;

extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern const uint32_t Array__ctor_m2237513838_MetadataUsageId;
extern const RuntimeType* IEnumerable_t1941168011_0_0_0_var;
extern RuntimeClass* IEnumerable_t1941168011_il2cpp_TypeInfo_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* RuntimeServices_t2098243569_il2cpp_TypeInfo_var;
extern const uint32_t Array__ctor_m2327926978_MetadataUsageId;
extern RuntimeClass* Array_t201190492_il2cpp_TypeInfo_var;
extern const uint32_t Array_op_Implicit_m3525264133_MetadataUsageId;
extern String_t* _stringLiteral3452614532;
extern const uint32_t Array_ToString_m3417706069_MetadataUsageId;
extern RuntimeClass* ArgumentNullException_t1615371798_il2cpp_TypeInfo_var;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Array_AddRange_m3375156810_RuntimeMethod_var;
extern String_t* _stringLiteral3723644332;
extern const uint32_t Array_AddRange_m3375156810_MetadataUsageId;
extern RuntimeClass* ICollection_t3904884886_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ListUpdateableEnumerator_MoveNext_m1628762651_RuntimeMethod_var;
extern const uint32_t ListUpdateableEnumerator_MoveNext_m1628762651_MetadataUsageId;
extern RuntimeClass* IList_t2094931216_il2cpp_TypeInfo_var;
extern const uint32_t ListUpdateableEnumerator_get_Current_m4190261509_MetadataUsageId;
extern const uint32_t ListUpdateableEnumerator_Update_m2092098050_MetadataUsageId;
extern const RuntimeType* Extensions_t2136153417_0_0_0_var;
extern RuntimeClass* UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices__cctor_m2916083412_MetadataUsageId;
extern const RuntimeType* IList_t2094931216_0_0_0_var;
extern RuntimeClass* ListUpdateableEnumerator_t1416462507_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_GetEnumerator_m3657935816_MetadataUsageId;
extern const RuntimeMethod* UnityRuntimeServices_Update_m1021602195_RuntimeMethod_var;
extern String_t* _stringLiteral3452614587;
extern const uint32_t UnityRuntimeServices_Update_m1021602195_MetadataUsageId;
extern RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_IsValueTypeArray_m2000658229_MetadataUsageId;
extern const RuntimeType* IEnumerator_t1853284238_0_0_0_var;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern const uint32_t UnityRuntimeServices_U24static_initializerU24_m2925988559_MetadataUsageId;

struct ObjectU5BU5D_t2843939325;


#ifndef U3CMODULEU3E_T692745549_H
#define U3CMODULEU3E_T692745549_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745549 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745549_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef UNITYRUNTIMESERVICES_T2934608295_H
#define UNITYRUNTIMESERVICES_T2934608295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.UnityRuntimeServices
struct  UnityRuntimeServices_t2934608295  : public RuntimeObject
{
public:

public:
};

struct UnityRuntimeServices_t2934608295_StaticFields
{
public:
	// System.Collections.IEnumerator UnityScript.Lang.UnityRuntimeServices::EmptyEnumerator
	RuntimeObject* ___EmptyEnumerator_0;
	// System.Type UnityScript.Lang.UnityRuntimeServices::EnumeratorType
	Type_t * ___EnumeratorType_1;
	// System.Boolean UnityScript.Lang.UnityRuntimeServices::Initialized
	bool ___Initialized_2;

public:
	inline static int32_t get_offset_of_EmptyEnumerator_0() { return static_cast<int32_t>(offsetof(UnityRuntimeServices_t2934608295_StaticFields, ___EmptyEnumerator_0)); }
	inline RuntimeObject* get_EmptyEnumerator_0() const { return ___EmptyEnumerator_0; }
	inline RuntimeObject** get_address_of_EmptyEnumerator_0() { return &___EmptyEnumerator_0; }
	inline void set_EmptyEnumerator_0(RuntimeObject* value)
	{
		___EmptyEnumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyEnumerator_0), value);
	}

	inline static int32_t get_offset_of_EnumeratorType_1() { return static_cast<int32_t>(offsetof(UnityRuntimeServices_t2934608295_StaticFields, ___EnumeratorType_1)); }
	inline Type_t * get_EnumeratorType_1() const { return ___EnumeratorType_1; }
	inline Type_t ** get_address_of_EnumeratorType_1() { return &___EnumeratorType_1; }
	inline void set_EnumeratorType_1(Type_t * value)
	{
		___EnumeratorType_1 = value;
		Il2CppCodeGenWriteBarrier((&___EnumeratorType_1), value);
	}

	inline static int32_t get_offset_of_Initialized_2() { return static_cast<int32_t>(offsetof(UnityRuntimeServices_t2934608295_StaticFields, ___Initialized_2)); }
	inline bool get_Initialized_2() const { return ___Initialized_2; }
	inline bool* get_address_of_Initialized_2() { return &___Initialized_2; }
	inline void set_Initialized_2(bool value)
	{
		___Initialized_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYRUNTIMESERVICES_T2934608295_H
#ifndef UNITYBUILTINS_T735674257_H
#define UNITYBUILTINS_T735674257_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.UnityBuiltins
struct  UnityBuiltins_t735674257  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYBUILTINS_T735674257_H
#ifndef LISTUPDATEABLEENUMERATOR_T1416462507_H
#define LISTUPDATEABLEENUMERATOR_T1416462507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.ListUpdateableEnumerator
struct  ListUpdateableEnumerator_t1416462507  : public RuntimeObject
{
public:
	// System.Collections.IList UnityScript.Lang.ListUpdateableEnumerator::_list
	RuntimeObject* ____list_0;
	// System.Int32 UnityScript.Lang.ListUpdateableEnumerator::_current
	int32_t ____current_1;

public:
	inline static int32_t get_offset_of__list_0() { return static_cast<int32_t>(offsetof(ListUpdateableEnumerator_t1416462507, ____list_0)); }
	inline RuntimeObject* get__list_0() const { return ____list_0; }
	inline RuntimeObject** get_address_of__list_0() { return &____list_0; }
	inline void set__list_0(RuntimeObject* value)
	{
		____list_0 = value;
		Il2CppCodeGenWriteBarrier((&____list_0), value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(ListUpdateableEnumerator_t1416462507, ____current_1)); }
	inline int32_t get__current_1() const { return ____current_1; }
	inline int32_t* get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(int32_t value)
	{
		____current_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTUPDATEABLEENUMERATOR_T1416462507_H
#ifndef EXTENSIONS_T2136153417_H
#define EXTENSIONS_T2136153417_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.Extensions
struct  Extensions_t2136153417  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENSIONS_T2136153417_H
#ifndef ARRAYLIST_T2718874744_H
#define ARRAYLIST_T2718874744_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ArrayList
struct  ArrayList_t2718874744  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t2843939325* ____items_2;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__items_2() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____items_2)); }
	inline ObjectU5BU5D_t2843939325* get__items_2() const { return ____items_2; }
	inline ObjectU5BU5D_t2843939325** get_address_of__items_2() { return &____items_2; }
	inline void set__items_2(ObjectU5BU5D_t2843939325* value)
	{
		____items_2 = value;
		Il2CppCodeGenWriteBarrier((&____items_2), value);
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct ArrayList_t2718874744_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::EmptyArray
	ObjectU5BU5D_t2843939325* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(ArrayList_t2718874744_StaticFields, ___EmptyArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYLIST_T2718874744_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef COLLECTIONBASE_T2727926298_H
#define COLLECTIONBASE_T2727926298_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.CollectionBase
struct  CollectionBase_t2727926298  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t2718874744 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_t2727926298, ___list_0)); }
	inline ArrayList_t2718874744 * get_list_0() const { return ___list_0; }
	inline ArrayList_t2718874744 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t2718874744 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONBASE_T2727926298_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ARRAY_T201190492_H
#define ARRAY_T201190492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityScript.Lang.Array
struct  Array_t201190492  : public CollectionBase_t2727926298
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAY_T201190492_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef ARGUMENTNULLEXCEPTION_T1615371798_H
#define ARGUMENTNULLEXCEPTION_T1615371798_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t1615371798  : public ArgumentException_t132251570
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T1615371798_H
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};



// System.Void System.Collections.CollectionBase::.ctor()
extern "C"  void CollectionBase__ctor_m3343513710 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::Add(System.Object)
extern "C"  void Array_Add_m1348904885 (Array_t201190492 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::AddRange(System.Collections.IEnumerable)
extern "C"  void Array_AddRange_m3375156810 (Array_t201190492 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Array::get_Length()
extern "C"  int32_t Array_get_Length_m21610649 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Object Boo.Lang.Runtime.RuntimeServices::Coerce(System.Object,System.Type)
extern "C"  RuntimeObject * RuntimeServices_Coerce_m1663619687 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.Array::.ctor(System.Collections.IEnumerable)
extern "C"  void Array__ctor_m2237513838 (Array_t201190492 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
extern "C"  int32_t CollectionBase_get_Count_m1708965601 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsArray()
extern "C"  bool Type_get_IsArray_m2591212821 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  RuntimeArray * Array_ToBuiltin_m286161891 (Array_t201190492 * __this, Type_t * ___type0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
extern "C"  ArrayList_t2718874744 * CollectionBase_get_InnerList_m132195395 (CollectionBase_t2727926298 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityScript.Lang.Array::push(System.Object)
extern "C"  int32_t Array_push_m1323333897 (Array_t201190492 * __this, RuntimeObject * ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m1413994798 (Array_t201190492 * __this, String_t* ___seperator0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String Boo.Lang.Builtins::join(System.Collections.IEnumerable,System.String)
extern "C"  String_t* Builtins_join_m864932387 (RuntimeObject * __this /* static, unused */, RuntimeObject* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m1170824041 (ArgumentNullException_t1615371798 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.UnityRuntimeServices::$static_initializer$()
extern "C"  void UnityRuntimeServices_U24static_initializerU24_m2925988559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Boo.Lang.Runtime.RuntimeServices::RegisterExtensions(System.Type)
extern "C"  void RuntimeServices_RegisterExtensions_m618331591 (RuntimeObject * __this /* static, unused */, Type_t * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityScript.Lang.UnityRuntimeServices::IsValueTypeArray(System.Object)
extern "C"  bool UnityRuntimeServices_IsValueTypeArray_m2000658229 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.ListUpdateableEnumerator::.ctor(System.Collections.IList)
extern "C"  void ListUpdateableEnumerator__ctor_m185314677 (ListUpdateableEnumerator_t1416462507 * __this, RuntimeObject* ___list0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerable Boo.Lang.Runtime.RuntimeServices::GetEnumerable(System.Object)
extern "C"  RuntimeObject* RuntimeServices_GetEnumerable_m2712819723 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Update(System.Object)
extern "C"  void ListUpdateableEnumerator_Update_m2092098050 (ListUpdateableEnumerator_t1416462507 * __this, RuntimeObject * ___newValue0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Object::GetType()
extern "C"  Type_t * Object_GetType_m88164663 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Type::get_IsValueType()
extern "C"  bool Type_get_IsValueType_m3108065642 (Type_t * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Array::GetEnumerator()
extern "C"  RuntimeObject* Array_GetEnumerator_m4277730612 (RuntimeArray * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.Array::.ctor()
extern "C"  void Array__ctor_m800917792 (Array_t201190492 * __this, const RuntimeMethod* method)
{
	{
		CollectionBase__ctor_m3343513710(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityScript.Lang.Array::.ctor(System.Collections.IEnumerable)
extern "C"  void Array__ctor_m2237513838 (Array_t201190492 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array__ctor_m2237513838_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		CollectionBase__ctor_m3343513710(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___collection0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1 = ___collection0;
		Array_Add_m1348904885(__this, L_1, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		RuntimeObject* L_2 = ___collection0;
		Array_AddRange_m3375156810(__this, L_2, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void UnityScript.Lang.Array::.ctor(System.Object[])
extern "C"  void Array__ctor_m2327926978 (Array_t201190492 * __this, ObjectU5BU5D_t2843939325* ___items0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array__ctor_m2327926978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * G_B4_0 = NULL;
	Array_t201190492 * G_B4_1 = NULL;
	RuntimeObject * G_B3_0 = NULL;
	Array_t201190492 * G_B3_1 = NULL;
	{
		CollectionBase__ctor_m3343513710(__this, /*hidden argument*/NULL);
		ObjectU5BU5D_t2843939325* L_0 = ___items0;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		int32_t L_1 = Array_get_Length_m21610649((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_2 = ___items0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		RuntimeObject * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_4, IEnumerable_t1941168011_il2cpp_TypeInfo_var)))
		{
			goto IL_004c;
		}
	}
	{
		ObjectU5BU5D_t2843939325* L_5 = ___items0;
		NullCheck(L_5);
		int32_t L_6 = 0;
		RuntimeObject * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		RuntimeObject * L_8 = L_7;
		G_B3_0 = L_8;
		G_B3_1 = __this;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_8, IEnumerable_t1941168011_il2cpp_TypeInfo_var)))
		{
			G_B4_0 = L_8;
			G_B4_1 = __this;
			goto IL_003d;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_9 = { reinterpret_cast<intptr_t> (IEnumerable_t1941168011_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		RuntimeObject * L_11 = RuntimeServices_Coerce_m1663619687(NULL /*static, unused*/, G_B3_0, L_10, /*hidden argument*/NULL);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_1;
	}

IL_003d:
	{
		NullCheck(G_B4_1);
		Array_AddRange_m3375156810(G_B4_1, ((RuntimeObject*)Castclass((RuntimeObject*)G_B4_0, IEnumerable_t1941168011_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		goto IL_0053;
	}

IL_004c:
	{
		ObjectU5BU5D_t2843939325* L_12 = ___items0;
		Array_AddRange_m3375156810(__this, (RuntimeObject*)(RuntimeObject*)L_12, /*hidden argument*/NULL);
	}

IL_0053:
	{
		return;
	}
}
// UnityScript.Lang.Array UnityScript.Lang.Array::op_Implicit(System.Array)
extern "C"  Array_t201190492 * Array_op_Implicit_m3525264133 (RuntimeObject * __this /* static, unused */, RuntimeArray * ___a0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_op_Implicit_m3525264133_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Array_t201190492 * G_B3_0 = NULL;
	{
		RuntimeArray * L_0 = ___a0;
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		G_B3_0 = ((Array_t201190492 *)(NULL));
		goto IL_0017;
	}

IL_000c:
	{
		RuntimeArray * L_1 = ___a0;
		Array_t201190492 * L_2 = (Array_t201190492 *)il2cpp_codegen_object_new(Array_t201190492_il2cpp_TypeInfo_var);
		Array__ctor_m2237513838(L_2, ((RuntimeObject*)IsInst((RuntimeObject*)L_1, IEnumerable_t1941168011_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B3_0 = L_2;
	}

IL_0017:
	{
		return G_B3_0;
	}
}
// System.Int32 UnityScript.Lang.Array::get_length()
extern "C"  int32_t Array_get_length_m219024605 (Array_t201190492 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = CollectionBase_get_Count_m1708965601(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object UnityScript.Lang.Array::Coerce(System.Type)
extern "C"  RuntimeObject * Array_Coerce_m1836350909 (Array_t201190492 * __this, Type_t * ___toType0, const RuntimeMethod* method)
{
	RuntimeArray * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___toType0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsArray_m2591212821(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		Type_t * L_2 = ___toType0;
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		RuntimeArray * L_4 = Array_ToBuiltin_m286161891(__this, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_001d;
	}

IL_001c:
	{
		G_B3_0 = ((RuntimeArray *)(__this));
	}

IL_001d:
	{
		return G_B3_0;
	}
}
// System.Array UnityScript.Lang.Array::ToBuiltin(System.Type)
extern "C"  RuntimeArray * Array_ToBuiltin_m286161891 (Array_t201190492 * __this, Type_t * ___type0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		Type_t * L_1 = ___type0;
		NullCheck(L_0);
		RuntimeArray * L_2 = VirtFuncInvoker1< RuntimeArray *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::Add(System.Object)
extern "C"  void Array_Add_m1348904885 (Array_t201190492 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Int32 UnityScript.Lang.Array::push(System.Object)
extern "C"  int32_t Array_push_m1323333897 (Array_t201190492 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		ArrayList_t2718874744 * L_2 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 System.Collections.ArrayList::get_Count() */, L_2);
		return L_3;
	}
}
// System.Int32 UnityScript.Lang.Array::Push(System.Object)
extern "C"  int32_t Array_Push_m3498950697 (Array_t201190492 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1 = Array_push_m1323333897(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String UnityScript.Lang.Array::ToString()
extern "C"  String_t* Array_ToString_m3417706069 (Array_t201190492 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_ToString_m3417706069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Array_Join_m1413994798(__this, _stringLiteral3452614532, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.String UnityScript.Lang.Array::Join(System.String)
extern "C"  String_t* Array_Join_m1413994798 (Array_t201190492 * __this, String_t* ___seperator0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___seperator0;
		String_t* L_2 = Builtins_join_m864932387(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Object UnityScript.Lang.Array::get_Item(System.Int32)
extern "C"  RuntimeObject * Array_get_Item_m2706975785 (Array_t201190492 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		ArrayList_t2718874744 * L_0 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2 = VirtFuncInvoker1< RuntimeObject *, int32_t >::Invoke(21 /* System.Object System.Collections.ArrayList::get_Item(System.Int32) */, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.Array::AddRange(System.Collections.IEnumerable)
extern "C"  void Array_AddRange_m3375156810 (Array_t201190492 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Array_AddRange_m3375156810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___collection0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3723644332, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Array_AddRange_m3375156810_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject* L_2 = ___collection0;
		NullCheck(L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_2);
		V_1 = L_3;
		goto IL_0031;
	}

IL_001d:
	{
		RuntimeObject* L_4 = V_1;
		NullCheck(L_4);
		RuntimeObject * L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		ArrayList_t2718874744 * L_6 = CollectionBase_get_InnerList_m132195395(__this, /*hidden argument*/NULL);
		RuntimeObject * L_7 = V_0;
		NullCheck(L_6);
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_6, L_7);
	}

IL_0031:
	{
		RuntimeObject* L_8 = V_1;
		NullCheck(L_8);
		bool L_9 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, L_8);
		if (L_9)
		{
			goto IL_001d;
		}
	}
	{
		return;
	}
}
// System.Void UnityScript.Lang.Array::OnValidate(System.Object)
extern "C"  void Array_OnValidate_m893129634 (Array_t201190492 * __this, RuntimeObject * ___newValue0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityScript.Lang.Extensions::get_length(System.Array)
extern "C"  int32_t Extensions_get_length_m2314046232 (RuntimeObject * __this /* static, unused */, RuntimeArray * ___a0, const RuntimeMethod* method)
{
	{
		RuntimeArray * L_0 = ___a0;
		NullCheck(L_0);
		int32_t L_1 = Array_get_Length_m21610649(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.ListUpdateableEnumerator::.ctor(System.Collections.IList)
extern "C"  void ListUpdateableEnumerator__ctor_m185314677 (ListUpdateableEnumerator_t1416462507 * __this, RuntimeObject* ___list0, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		__this->set__current_1((-1));
		RuntimeObject* L_0 = ___list0;
		__this->set__list_0(L_0);
		return;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Reset()
extern "C"  void ListUpdateableEnumerator_Reset_m1074916302 (ListUpdateableEnumerator_t1416462507 * __this, const RuntimeMethod* method)
{
	{
		__this->set__current_1((-1));
		return;
	}
}
// System.Boolean UnityScript.Lang.ListUpdateableEnumerator::MoveNext()
extern "C"  bool ListUpdateableEnumerator_MoveNext_m1628762651 (ListUpdateableEnumerator_t1416462507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_MoveNext_m1628762651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get__current_1();
		if (((int64_t)L_0 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_0 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), NULL, ListUpdateableEnumerator_MoveNext_m1628762651_RuntimeMethod_var);
		__this->set__current_1(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		int32_t L_1 = __this->get__current_1();
		RuntimeObject* L_2 = __this->get__list_0();
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t3904884886_il2cpp_TypeInfo_var, L_2);
		return (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
	}
}
// System.Object UnityScript.Lang.ListUpdateableEnumerator::get_Current()
extern "C"  RuntimeObject * ListUpdateableEnumerator_get_Current_m4190261509 (ListUpdateableEnumerator_t1416462507 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_get_Current_m4190261509_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_0();
		int32_t L_1 = __this->get__current_1();
		NullCheck(L_0);
		RuntimeObject * L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(2 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t2094931216_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void UnityScript.Lang.ListUpdateableEnumerator::Update(System.Object)
extern "C"  void ListUpdateableEnumerator_Update_m2092098050 (ListUpdateableEnumerator_t1416462507 * __this, RuntimeObject * ___newValue0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ListUpdateableEnumerator_Update_m2092098050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get__list_0();
		int32_t L_1 = __this->get__current_1();
		RuntimeObject * L_2 = ___newValue0;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.IList::set_Item(System.Int32,System.Object) */, IList_t2094931216_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityScript.Lang.UnityBuiltins::parseInt(System.Int32)
extern "C"  int32_t UnityBuiltins_parseInt_m2463755066 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		return L_0;
	}
}
// System.Single UnityScript.Lang.UnityBuiltins::parseFloat(System.Int32)
extern "C"  float UnityBuiltins_parseFloat_m1877834587 (RuntimeObject * __this /* static, unused */, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		return (((float)((float)L_0)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityScript.Lang.UnityRuntimeServices::.cctor()
extern "C"  void UnityRuntimeServices__cctor_m2916083412 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices__cctor_m2916083412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityRuntimeServices_U24static_initializerU24_m2925988559(NULL /*static, unused*/, /*hidden argument*/NULL);
		RuntimeTypeHandle_t3027515415  L_0 = { reinterpret_cast<intptr_t> (Extensions_t2136153417_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		RuntimeServices_RegisterExtensions_m618331591(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		((UnityRuntimeServices_t2934608295_StaticFields*)il2cpp_codegen_static_fields_for(UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var))->set_Initialized_2((bool)1);
		return;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::.ctor()
extern "C"  void UnityRuntimeServices__ctor_m2632089821 (UnityRuntimeServices_t2934608295 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator UnityScript.Lang.UnityRuntimeServices::GetEnumerator(System.Object)
extern "C"  RuntimeObject* UnityRuntimeServices_GetEnumerator_m3657935816 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_GetEnumerator_m3657935816_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B12_0 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((UnityRuntimeServices_t2934608295_StaticFields*)il2cpp_codegen_static_fields_for(UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var))->get_EmptyEnumerator_0();
		G_B12_0 = L_1;
		goto IL_0086;
	}

IL_0010:
	{
		RuntimeObject * L_2 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var);
		bool L_3 = UnityRuntimeServices_IsValueTypeArray_m2000658229(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((Array_t201190492 *)IsInstClass((RuntimeObject*)L_4, Array_t201190492_il2cpp_TypeInfo_var)))
		{
			goto IL_0050;
		}
	}

IL_0026:
	{
		RuntimeObject * L_5 = ___obj0;
		RuntimeObject * L_6 = L_5;
		G_B5_0 = L_6;
		if (((RuntimeObject*)IsInst((RuntimeObject*)L_6, IList_t2094931216_il2cpp_TypeInfo_var)))
		{
			G_B6_0 = L_6;
			goto IL_0041;
		}
	}
	{
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (IList_t2094931216_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		RuntimeObject * L_9 = RuntimeServices_Coerce_m1663619687(NULL /*static, unused*/, G_B5_0, L_8, /*hidden argument*/NULL);
		G_B6_0 = L_9;
	}

IL_0041:
	{
		ListUpdateableEnumerator_t1416462507 * L_10 = (ListUpdateableEnumerator_t1416462507 *)il2cpp_codegen_object_new(ListUpdateableEnumerator_t1416462507_il2cpp_TypeInfo_var);
		ListUpdateableEnumerator__ctor_m185314677(L_10, ((RuntimeObject*)Castclass((RuntimeObject*)G_B6_0, IList_t2094931216_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		G_B12_0 = ((RuntimeObject*)(L_10));
		goto IL_0086;
	}

IL_0050:
	{
		RuntimeObject * L_11 = ___obj0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IEnumerable_t1941168011_il2cpp_TypeInfo_var));
		RuntimeObject* L_12 = V_0;
		if (!L_12)
		{
			goto IL_0068;
		}
	}
	{
		RuntimeObject* L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_13);
		G_B12_0 = L_14;
		goto IL_0086;
	}

IL_0068:
	{
		RuntimeObject * L_15 = ___obj0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IEnumerator_t1853284238_il2cpp_TypeInfo_var));
		RuntimeObject* L_16 = V_1;
		if (!L_16)
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject* L_17 = V_1;
		G_B12_0 = L_17;
		goto IL_0086;
	}

IL_007b:
	{
		RuntimeObject * L_18 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(RuntimeServices_t2098243569_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = RuntimeServices_GetEnumerable_m2712819723(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		RuntimeObject* L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t1941168011_il2cpp_TypeInfo_var, L_19);
		G_B12_0 = L_20;
	}

IL_0086:
	{
		return G_B12_0;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::Update(System.Collections.IEnumerator,System.Object)
extern "C"  void UnityRuntimeServices_Update_m1021602195 (RuntimeObject * __this /* static, unused */, RuntimeObject* ___e0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_Update_m1021602195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___e0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		ArgumentNullException_t1615371798 * L_1 = (ArgumentNullException_t1615371798 *)il2cpp_codegen_object_new(ArgumentNullException_t1615371798_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1170824041(L_1, _stringLiteral3452614587, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, UnityRuntimeServices_Update_m1021602195_RuntimeMethod_var);
	}

IL_0011:
	{
		RuntimeObject* L_2 = ___e0;
		if (((ListUpdateableEnumerator_t1416462507 *)IsInstClass((RuntimeObject*)L_2, ListUpdateableEnumerator_t1416462507_il2cpp_TypeInfo_var)))
		{
			goto IL_0021;
		}
	}
	{
		goto IL_002d;
	}

IL_0021:
	{
		RuntimeObject* L_3 = ___e0;
		RuntimeObject * L_4 = ___newValue1;
		NullCheck(((ListUpdateableEnumerator_t1416462507 *)CastclassClass((RuntimeObject*)L_3, ListUpdateableEnumerator_t1416462507_il2cpp_TypeInfo_var)));
		ListUpdateableEnumerator_Update_m2092098050(((ListUpdateableEnumerator_t1416462507 *)CastclassClass((RuntimeObject*)L_3, ListUpdateableEnumerator_t1416462507_il2cpp_TypeInfo_var)), L_4, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Boolean UnityScript.Lang.UnityRuntimeServices::IsValueTypeArray(System.Object)
extern "C"  bool UnityRuntimeServices_IsValueTypeArray_m2000658229 (RuntimeObject * __this /* static, unused */, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_IsValueTypeArray_m2000658229_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeArray *)IsInstClass((RuntimeObject*)L_0, RuntimeArray_il2cpp_TypeInfo_var)))
		{
			goto IL_0011;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0021;
	}

IL_0011:
	{
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_1);
		Type_t * L_2 = Object_GetType_m88164663(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Type_t * L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Type::GetElementType() */, L_2);
		NullCheck(L_3);
		bool L_4 = Type_get_IsValueType_m3108065642(L_3, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_4));
	}

IL_0021:
	{
		return (bool)G_B3_0;
	}
}
// System.Void UnityScript.Lang.UnityRuntimeServices::$static_initializer$()
extern "C"  void UnityRuntimeServices_U24static_initializerU24_m2925988559 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UnityRuntimeServices_U24static_initializerU24_m2925988559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeArray *)(RuntimeArray *)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)));
		RuntimeObject* L_0 = Array_GetEnumerator_m4277730612((RuntimeArray *)(RuntimeArray *)((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var);
		((UnityRuntimeServices_t2934608295_StaticFields*)il2cpp_codegen_static_fields_for(UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var))->set_EmptyEnumerator_0(L_0);
		RuntimeTypeHandle_t3027515415  L_1 = { reinterpret_cast<intptr_t> (IEnumerator_t1853284238_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		((UnityRuntimeServices_t2934608295_StaticFields*)il2cpp_codegen_static_fields_for(UnityRuntimeServices_t2934608295_il2cpp_TypeInfo_var))->set_EnumeratorType_1(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
