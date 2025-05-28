#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct VirtualActionInvoker6
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, T6, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5, T6 p6)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, p6, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>
struct IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t889CCC5EFE6A6E3DAB66C7475F56D94D53F43D0E;
// Sirenix.Serialization.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414;
// Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Sirenix.Serialization.Utilities.FastTypeComparer
struct FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.ICustomAttributeProvider
struct ICustomAttributeProvider_tC47C1E6A3DC1ADA77819AF705CC1D1175315876D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Sirenix.Serialization.Utilities.ImmutableList
struct ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD;
// Sirenix.Serialization.Utilities.MemberAliasFieldInfo
struct MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656;
// Sirenix.Serialization.Utilities.MemberAliasMethodInfo
struct MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18;
// Sirenix.Serialization.Utilities.MemberAliasPropertyInfo
struct MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Reflection.TypeFilter
struct TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Sirenix.Serialization.Utilities.WeakValueGetter
struct WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3;
// Sirenix.Serialization.Utilities.WeakValueSetter
struct WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0;
// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED;
// Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15;
// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tE7E1AA343FB803D617ED6EB44F4A1C0923987C21;
// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tB50ED1D6A392747492A28F475F91BF2C154F7EEF;
// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t7DE2533D793AD11318B20BDF9CFDFB0D3EA5613D;
// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49
struct U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD;
// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50
struct U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB;
// Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55
struct U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1;
IL2CPP_EXTERN_C String_t* _stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814;
IL2CPP_EXTERN_C String_t* _stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E;
IL2CPP_EXTERN_C String_t* _stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645;
IL2CPP_EXTERN_C String_t* _stringLiteral18BBD42CCE9B175CCD6F5CA37762D740A0B5A5C4;
IL2CPP_EXTERN_C String_t* _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral22363B2DA57DE0197C3DC04546321A605E3FFE02;
IL2CPP_EXTERN_C String_t* _stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D;
IL2CPP_EXTERN_C String_t* _stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B;
IL2CPP_EXTERN_C String_t* _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3;
IL2CPP_EXTERN_C String_t* _stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F;
IL2CPP_EXTERN_C String_t* _stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90;
IL2CPP_EXTERN_C String_t* _stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079;
IL2CPP_EXTERN_C String_t* _stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59;
IL2CPP_EXTERN_C String_t* _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6;
IL2CPP_EXTERN_C String_t* _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6;
IL2CPP_EXTERN_C String_t* _stringLiteral6C92044AA503422C8954E73697B146F1E63C9334;
IL2CPP_EXTERN_C String_t* _stringLiteral85E9CE6AD4896D7DAC7FD63267FC79467CB4862F;
IL2CPP_EXTERN_C String_t* _stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D;
IL2CPP_EXTERN_C String_t* _stringLiteral90A683BBF1FEB32AEC0B5DED0CC88DD136FC5CE7;
IL2CPP_EXTERN_C String_t* _stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D;
IL2CPP_EXTERN_C String_t* _stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B;
IL2CPP_EXTERN_C String_t* _stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427;
IL2CPP_EXTERN_C String_t* _stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E;
IL2CPP_EXTERN_C String_t* _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8;
IL2CPP_EXTERN_C String_t* _stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_mE968971AB6E9A412FDB6E90869E5CA8E5ACFDB50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_m15AB187D9728A51EACB6E2E44B5D0B6E26009359_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m28F8A42114DE24FC6C34ED9D59F4044FF2F1CF30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m120F4089F7A721670196CA1C703F7CA58060C017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_mDC7138036F1240939E1F79DCE246044A4247CA98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_m53DE8B16CE1ACD252E902C383F6ECB241E8D6FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Add_m5F336C9204CD98F21F7168A844DD7F219146A7ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Clear_m11BA43CD0772AD9CE5D71A5EC8500D04DF020EDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Insert_m7E0CFAD102C4BED8BEF7F2E642DC07A8D73E654C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_RemoveAt_m913C2F47C5B8B4FF044B61544E0CA3C486C07CC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_Remove_m266092BA6380A1A595D503B415E43B0AD3C5E6EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList_System_Collections_IList_set_Item_m630BA6436B91738C6891612A49B9DE607B7E3D0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ImmutableList__ctor_mCE912BFBB1722C1AECB7EDDB307E79CB64C73889_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_Reset_m95CBEBBE9733EC8DAE84455209D194E6F8548B49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_Reset_m058F33E63849F8E58960027976D56A0A2AF7A744_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_Reset_m81EF47C465701FF2E02FA9CF4E1350DFD267AD0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m84E0417231B60237F9966B732EA3B2F31536F54D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m4585F32601CFA7305F45EA357ED8D63429ECEFC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_mCB23D504DEA6DA96AE4231F9E696D2AB892D0C0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mD08BFAA86294FEEFED4B1FB219DC6200B03CD3DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m8B5313AE281B6104042A76D973EC727A61C49EDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m1A0C872C7A27DC84B97BA512D71117ADCE05C502_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_mD1280455F65C26C2D5FD7136703BC31798226832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_m0DE1754A98B38703E82000A738AD833528268846_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityExtensions_SafeIsUnityNull_m6E7C9703117460205E46C387FFECFB514480246A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_MemoryCopy_m2FF651B6F23D59D8D9D29A6BFEA30DFD75278F76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringFromBytes_m577D384ECCC0DAD912AF0A7410AA8BA412BB09C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtilities_StringToBytes_m47C191284C1676E35355A0FD43E90D71EF16DD0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// Sirenix.Serialization.Utilities.EmitUtilities
struct EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94  : public RuntimeObject
{
};

struct EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_StaticFields
{
	// System.Reflection.Assembly Sirenix.Serialization.Utilities.EmitUtilities::EngineAssembly
	Assembly_t* ___EngineAssembly_0;
};

// Sirenix.Serialization.Utilities.FastTypeComparer
struct FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE  : public RuntimeObject
{
};

struct FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_StaticFields
{
	// Sirenix.Serialization.Utilities.FastTypeComparer Sirenix.Serialization.Utilities.FastTypeComparer::Instance
	FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* ___Instance_0;
};

// Sirenix.Serialization.Utilities.Flags
struct Flags_tAA380BAFB0562EEBDAD2AB395DB9EDDD533C6E1C  : public RuntimeObject
{
};

// Sirenix.Serialization.Utilities.ImmutableList
struct ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD  : public RuntimeObject
{
	// System.Collections.IList Sirenix.Serialization.Utilities.ImmutableList::innerList
	RuntimeObject* ___innerList_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0  : public RuntimeObject
{
};

struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_StaticFields
{
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeName
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeName_0;
	// System.Reflection.TypeFilter System.Reflection.Module::FilterTypeNameIgnoreCase
	TypeFilter_tD8F0A4CFBE6E8F8FA8D673113A73026EDA4640BA* ___FilterTypeNameIgnoreCase_1;
};
// Native definition for P/Invoke marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Module
struct Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0_marshaled_com
{
};

// System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F  : public RuntimeObject
{
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_0;
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t* ___ClassImpl_1;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject* ___DefaultValueImpl_2;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t* ___MemberImpl_3;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_4;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_5;
};
// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_pinvoke
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	char* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F_marshaled_com
{
	int32_t ___AttrsImpl_0;
	Type_t* ___ClassImpl_1;
	Il2CppIUnknown* ___DefaultValueImpl_2;
	MemberInfo_t* ___MemberImpl_3;
	Il2CppChar* ___NameImpl_4;
	int32_t ___PositionImpl_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// Sirenix.Serialization.Utilities.UnityExtensions
struct UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A  : public RuntimeObject
{
};

struct UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields
{
	// Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr> Sirenix.Serialization.Utilities.UnityExtensions::UnityObjectCachedPtrFieldGetter
	ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* ___UnityObjectCachedPtrFieldGetter_0;
};

// Sirenix.Serialization.Utilities.UnityVersion
struct UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A  : public RuntimeObject
{
};

struct UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields
{
	// System.Int32 Sirenix.Serialization.Utilities.UnityVersion::Major
	int32_t ___Major_0;
	// System.Int32 Sirenix.Serialization.Utilities.UnityVersion::Minor
	int32_t ___Minor_1;
};

// Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities
struct UnsafeUtilities_tA8B80810ACCF0E14F0F45B4A6E01932F16EFCE38  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass10_0
struct U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass10_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass14_0
struct U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963  : public RuntimeObject
{
	// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass14_0::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass15_0
struct U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4  : public RuntimeObject
{
	// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass15_0::propertyInfo
	PropertyInfo_t* ___propertyInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass23_0
struct U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C  : public RuntimeObject
{
	// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass23_0::methodInfo
	MethodInfo_t* ___methodInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED  : public RuntimeObject
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass7_0::fieldInfo
	FieldInfo_t* ___fieldInfo_0;
};

// Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25
struct U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Sirenix.Serialization.Utilities.ImmutableList Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>4__this
	ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* ___U3CU3E4__this_2;
	// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tE7E1AA343FB803D617ED6EB44F4A1C0923987C21  : public RuntimeObject
{
	// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass31_0::method
	MethodInfo_t* ___method_0;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass47_0
struct U3CU3Ec__DisplayClass47_0_tB50ED1D6A392747492A28F475F91BF2C154F7EEF  : public RuntimeObject
{
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass47_0::methodName
	String_t* ___methodName_0;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass48_0
struct U3CU3Ec__DisplayClass48_0_t7DE2533D793AD11318B20BDF9CFDFB0D3EA5613D  : public RuntimeObject
{
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass48_0::methodName
	String_t* ___methodName_0;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49
struct U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::type
	Type_t* ___type_3;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<currentType>5__2
	Type_t* ___U3CcurrentTypeU3E5__2_7;
	// System.Reflection.MemberInfo[] Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<>7__wrap2
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___U3CU3E7__wrap2_8;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::<>7__wrap3
	int32_t ___U3CU3E7__wrap3_9;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50
struct U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>2__current
	MemberInfo_t* ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::type
	Type_t* ___type_3;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::flags
	int32_t ___flags_5;
	// System.Reflection.BindingFlags Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>3__flags
	int32_t ___U3CU3E3__flags_6;
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::name
	String_t* ___name_7;
	// System.String Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>3__name
	String_t* ___U3CU3E3__name_8;
	// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_9;
};

// Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55
struct U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436  : public RuntimeObject
{
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>2__current
	Type_t* ___U3CU3E2__current_1;
	// System.Int32 Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::type
	Type_t* ___type_3;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>3__type
	Type_t* ___U3CU3E3__type_4;
	// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::includeSelf
	bool ___includeSelf_5;
	// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::<>3__includeSelf
	bool ___U3CU3E3__includeSelf_6;
	// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::<current>5__2
	Type_t* ___U3CcurrentU3E5__2_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_6_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_6_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_7_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_7_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_8_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_8_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_9_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_9_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_9_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_0;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_1;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_2;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_3;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_4;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t741396FC32ABDA9AA236C8BB159DEEA850DE1B17 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t741396FC32ABDA9AA236C8BB159DEEA850DE1B17__padding[256];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t5BB50946CCA6324A2450442AAED3334F91FE8320  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t5BB50946CCA6324A2450442AAED3334F91FE8320_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::21244F82B210125632917591768F6BF22EB6861F80C6C25A25BD26DFB580EA7B
	__StaticArrayInitTypeSizeU3D256_t741396FC32ABDA9AA236C8BB159DEEA850DE1B17 ___21244F82B210125632917591768F6BF22EB6861F80C6C25A25BD26DFB580EA7B_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Sirenix.Serialization.Utilities.MemberAliasFieldInfo
struct MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656  : public FieldInfo_t
{
	// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.MemberAliasFieldInfo::aliasedField
	FieldInfo_t* ___aliasedField_1;
	// System.String Sirenix.Serialization.Utilities.MemberAliasFieldInfo::mangledName
	String_t* ___mangledName_2;
};

// Sirenix.Serialization.Utilities.MemberAliasPropertyInfo
struct MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA  : public PropertyInfo_t
{
	// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::aliasedProperty
	PropertyInfo_t* ___aliasedProperty_1;
	// System.String Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::mangledName
	String_t* ___mangledName_2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeMethodHandle
struct RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 
{
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities/Struct256Bit
struct Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A 
{
	// System.Decimal Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities/Struct256Bit::d1
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d1_0;
	// System.Decimal Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities/Struct256Bit::d2
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___d2_1;
};

// Sirenix.Serialization.Utilities.MemberAliasMethodInfo
struct MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18  : public MethodInfo_t
{
	// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasMethodInfo::aliasedMethod
	MethodInfo_t* ___aliasedMethod_1;
	// System.String Sirenix.Serialization.Utilities.MemberAliasMethodInfo::mangledName
	String_t* ___mangledName_2;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.ValueGetter`2<System.Object,System.IntPtr>
struct ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>
struct ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Sirenix.Serialization.Utilities.WeakValueGetter
struct WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3  : public MulticastDelegate_t
{
};

// Sirenix.Serialization.Utilities.WeakValueSetter
struct WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65  : public MulticastDelegate_t
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* m_Items[1];

	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_tBC2D68304851A59EFB2EAE6B168714CD45445F2F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265  : public RuntimeArray
{
	ALIGN_FIELD (8) MethodInfo_t* m_Items[1];

	inline MethodInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// Sirenix.Serialization.Utilities.ValueGetter`2<InstanceType,FieldType> Sirenix.Serialization.Utilities.EmitUtilities::CreateInstanceFieldGetter<System.Object,System.IntPtr>(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414* EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_m6A239C29FF9CA6DDA4A8E9F840412C777640091C_gshared (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method) ;
// FieldType Sirenix.Serialization.Utilities.ValueGetter`2<System.Object,System.IntPtr>::Invoke(InstanceType&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_mC6FDDFB9939D99C3A2312F88394AAED91B0984BC_gshared_inline (ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414* __this, RuntimeObject** ___instance0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49__ctor_mE02E4CF13A9C2B57FF7848A11FBD91A9AA7F9F61 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m37934FD9072DDBFCA759881B2D1E1F7785972F18 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mC30A9F749F5A3E0374D0D6C39AB036823DC79EDA (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_System_IDisposable_Dispose_m0FD611AD9E5EA8A21A103A997548A8C64A3D87C0 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions::GetAllMembers(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeExtensions_GetAllMembers_mEB91F0825655A28B9FF2E3AC7B481A9B8A01F40D (Type_t* ___type0, int32_t ___flags1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50__ctor_mEA7B40C0E2B63AA7D0EC366BB00F401DE1491133 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m57C6236864F6C1D173C4A2B60DEAB8EBFFD52CE2 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55__ctor_mFB516D1A22040F953046518573E4906B47FD2BB9 (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m29E8464443001274D4D422551CDBE217BB6008EB (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Inequality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// Sirenix.Serialization.Utilities.ValueGetter`2<InstanceType,FieldType> Sirenix.Serialization.Utilities.EmitUtilities::CreateInstanceFieldGetter<UnityEngine.Object,System.IntPtr>(System.Reflection.FieldInfo)
inline ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90 (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method)
{
	return ((  ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* (*) (FieldInfo_t*, const RuntimeMethod*))EmitUtilities_CreateInstanceFieldGetter_TisRuntimeObject_TisIntPtr_t_m6A239C29FF9CA6DDA4A8E9F840412C777640091C_gshared)(___fieldInfo0, method);
}
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// FieldType Sirenix.Serialization.Utilities.ValueGetter`2<UnityEngine.Object,System.IntPtr>::Invoke(InstanceType&)
inline intptr_t ValueGetter_2_Invoke_m3398DBC4F65272B44F2BB361E081532DBB87116C_inline (ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** ___instance0, const RuntimeMethod* method)
{
	return ((  intptr_t (*) (ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3*, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C**, const RuntimeMethod*))ValueGetter_2_Invoke_mC6FDDFB9939D99C3A2312F88394AAED91B0984BC_gshared_inline)(__this, ___instance0, method);
}
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.Assembly::op_Equality(System.Reflection.Assembly,System.Reflection.Assembly)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB (Assembly_t* ___left0, Assembly_t* ___right1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m03328FB084A7D3CBB8FB6EED127A3DC54A0EF544 (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::op_Equality(System.Reflection.FieldInfo,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74 (FieldInfo_t* ___left0, FieldInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.FieldInfo::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139 (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.FieldInfoExtensions::DeAliasField(System.Reflection.FieldInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72 (FieldInfo_t* ___fieldInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8 (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mD0B4A707D698ED8CC18E292D887F89F9A0A4A311 (U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mFCFC9011D4617EC0FE9AD150B3F978A717441C51 (U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m803DDE9F6B05AD81CBD934E9D207B7D3B72AB808 (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34 (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mB410F24F18D9A696CEF95A8C822920CDA6694F73 (U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* __this, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.PropertyInfo::op_Equality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F (PropertyInfo_t* ___left0, PropertyInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.PropertyInfoExtensions::DeAliasProperty(System.Reflection.PropertyInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE (PropertyInfo_t* ___propertyInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___left0, MethodInfo_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E (MethodBase_t* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m4441CF37F0BADA0B978E802A179C303D1C44CD77 (U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MethodInfoExtensions::DeAliasMethod(System.Reflection.MethodInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9 (MethodInfo_t* ___methodInfo0, bool ___throwOnNotAliased1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4 (Type_t* ___type0, MethodInfo_t* ___method1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m18D45B18F60A43CB0E84294B9C91DDF74C66D034 (U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.FastTypeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__ctor_m96FDA0B2719EF764A2336C02F7A2CF573EA4C26B (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_GetEnumerator_m5516440CC191369757EE85F2988C6224060663FD (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mADF4798474AFAAAF22F526DB3789B94746AEC7A0 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m32BE744D1FF1B9C0E511C6A37DCEE82A14E3CA77 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F (FieldInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.MethodInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B (MethodInfo_t* __this, const RuntimeMethod* method) ;
// System.Void System.Reflection.PropertyInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138 (PropertyInfo_t* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___c0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.InteropServices.GCHandle::get_IsAllocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC (RuntimeObject* ___value0, int32_t ___type1, const RuntimeMethod* method) ;
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::get_OffsetToStringData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD (const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void* System.IntPtr::ToPointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_m8ADD1534F42A70CC5CD6D6F02B0C147A3A6A8FC2 (U3CU3Ec__DisplayClass31_0_tE7E1AA343FB803D617ED6EB44F4A1C0923987C21* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass31_0::<GetCastMethodDelegate>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass31_0_U3CGetCastMethodDelegateU3Eb__0_mE414F771B3D8CC886FDD5AA2487DECFAF2EDEDFB (U3CU3Ec__DisplayClass31_0_tE7E1AA343FB803D617ED6EB44F4A1C0923987C21* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = __this->___method_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		RuntimeObject* L_3 = ___obj0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_3);
		NullCheck(L_0);
		RuntimeObject* L_4;
		L_4 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, NULL, L_2, NULL);
		return L_4;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass47_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass47_0__ctor_mAC81820D0C113FE6FDE7ECA4E5394CD1299435C1 (U3CU3Ec__DisplayClass47_0_tB50ED1D6A392747492A28F475F91BF2C154F7EEF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass47_0::<GetOperatorMethod>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass47_0_U3CGetOperatorMethodU3Eb__0_mB04E2C9E9B7B12401EC205E0773E71EFE670B3AE (U3CU3Ec__DisplayClass47_0_tB50ED1D6A392747492A28F475F91BF2C154F7EEF* __this, MethodInfo_t* ___m0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->___methodName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass48_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass48_0__ctor_m6111D06268078D5C1185EDFC33002A4B6EC6D264 (U3CU3Ec__DisplayClass48_0_t7DE2533D793AD11318B20BDF9CFDFB0D3EA5613D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<>c__DisplayClass48_0::<GetOperatorMethods>b__0(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass48_0_U3CGetOperatorMethodsU3Eb__0_m3D0485B7F5BF74103189A7F54E75E4F4279B53C7 (U3CU3Ec__DisplayClass48_0_t7DE2533D793AD11318B20BDF9CFDFB0D3EA5613D* __this, MethodInfo_t* ___x0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		String_t* L_2 = __this->___methodName_0;
		bool L_3;
		L_3 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, L_2, NULL);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49__ctor_mE02E4CF13A9C2B57FF7848A11FBD91A9AA7F9F61 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49_System_IDisposable_Dispose_m118F5008DABDE5514B3EE059A547CB84EDABA113 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__49_MoveNext_m048D3447C859C26BC7A1AF8C77AAEEC441436C34 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MemberInfo_t* V_1 = NULL;
	MemberInfo_t* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0077;
			}
			case 2:
			{
				goto IL_00f4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_2 = __this->___type_3;
		__this->___U3CcurrentTypeU3E5__2_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentTypeU3E5__2_7), (void*)L_2);
		int32_t L_3 = __this->___flags_5;
		if ((!(((uint32_t)((int32_t)((int32_t)L_3&2))) == ((uint32_t)2))))
		{
			goto IL_00a8;
		}
	}
	{
		Type_t* L_4 = __this->___U3CcurrentTypeU3E5__2_7;
		int32_t L_5 = __this->___flags_5;
		NullCheck(L_4);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_6;
		L_6 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(128 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_4, L_5);
		__this->___U3CU3E7__wrap2_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)L_6);
		__this->___U3CU3E7__wrap3_9 = 0;
		goto IL_008c;
	}

IL_0059:
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_7 = __this->___U3CU3E7__wrap2_8;
		int32_t L_8 = __this->___U3CU3E7__wrap3_9;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		MemberInfo_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		MemberInfo_t* L_11 = V_1;
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0077:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_12 = __this->___U3CU3E7__wrap3_9;
		__this->___U3CU3E7__wrap3_9 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_008c:
	{
		int32_t L_13 = __this->___U3CU3E7__wrap3_9;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_14 = __this->___U3CU3E7__wrap2_8;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0059;
		}
	}
	{
		__this->___U3CU3E7__wrap2_8 = (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL);
		goto IL_0142;
	}

IL_00a8:
	{
		int32_t L_15 = __this->___flags_5;
		__this->___flags_5 = ((int32_t)((int32_t)L_15|2));
	}

IL_00b6:
	{
		Type_t* L_16 = __this->___U3CcurrentTypeU3E5__2_7;
		int32_t L_17 = __this->___flags_5;
		NullCheck(L_16);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_18;
		L_18 = VirtualFuncInvoker1< MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*, int32_t >::Invoke(128 /* System.Reflection.MemberInfo[] System.Type::GetMembers(System.Reflection.BindingFlags) */, L_16, L_17);
		__this->___U3CU3E7__wrap2_8 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)L_18);
		__this->___U3CU3E7__wrap3_9 = 0;
		goto IL_0109;
	}

IL_00d6:
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_19 = __this->___U3CU3E7__wrap2_8;
		int32_t L_20 = __this->___U3CU3E7__wrap3_9;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MemberInfo_t* L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		V_2 = L_22;
		MemberInfo_t* L_23 = V_2;
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00f4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_24 = __this->___U3CU3E7__wrap3_9;
		__this->___U3CU3E7__wrap3_9 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0109:
	{
		int32_t L_25 = __this->___U3CU3E7__wrap3_9;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_26 = __this->___U3CU3E7__wrap2_8;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_00d6;
		}
	}
	{
		__this->___U3CU3E7__wrap2_8 = (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap2_8), (void*)(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL);
		Type_t* L_27 = __this->___U3CcurrentTypeU3E5__2_7;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(157 /* System.Type System.Type::get_BaseType() */, L_27);
		__this->___U3CcurrentTypeU3E5__2_7 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentTypeU3E5__2_7), (void*)L_28);
		Type_t* L_29 = __this->___U3CcurrentTypeU3E5__2_7;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_29, (Type_t*)NULL, NULL);
		if (L_30)
		{
			goto IL_00b6;
		}
	}

IL_0142:
	{
		return (bool)0;
	}
}
// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_m62C421EC965E292446CE7E2EF97D07215A91EC66 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_Reset_m95CBEBBE9733EC8DAE84455209D194E6F8548B49 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_Reset_m95CBEBBE9733EC8DAE84455209D194E6F8548B49_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_IEnumerator_get_Current_mA88DAA97E5C8419EBA932C487C658441E28EC5F9 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m37934FD9072DDBFCA759881B2D1E1F7785972F18 (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* L_3 = (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetAllMembersU3Ed__49__ctor_mE02E4CF13A9C2B57FF7848A11FBD91A9AA7F9F61(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* L_6 = V_0;
		int32_t L_7 = __this->___U3CU3E3__flags_6;
		NullCheck(L_6);
		L_6->___flags_5 = L_7;
		U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__49::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__49_System_Collections_IEnumerable_GetEnumerator_m712BCB9A189F878247A47B52BF99B70753726D3D (U3CGetAllMembersU3Ed__49_t9F7E68769B8CE792D6DB2DA675CC1206E6036FFD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__49_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m37934FD9072DDBFCA759881B2D1E1F7785972F18(__this, NULL);
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50__ctor_mEA7B40C0E2B63AA7D0EC366BB00F401DE1491133 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_System_IDisposable_Dispose_m0FD611AD9E5EA8A21A103A997548A8C64A3D87C0 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mC30A9F749F5A3E0374D0D6C39AB036823DC79EDA(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetAllMembersU3Ed__50_MoveNext_m0D7FA6C77BE173E47CA8826EDFF62FAA5367B3C1 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	MemberInfo_t* V_2 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_0099:
			{// begin fault (depth: 1)
				U3CGetAllMembersU3Ed__50_System_IDisposable_Dispose_m0FD611AD9E5EA8A21A103A997548A8C64A3D87C0(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				int32_t L_1 = V_1;
				if (!L_1)
				{
					goto IL_0015_1;
				}
			}
			{
				int32_t L_2 = V_1;
				if ((((int32_t)L_2) == ((int32_t)1)))
				{
					goto IL_0073_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_00a0;
			}

IL_0015_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				Type_t* L_3 = __this->___type_3;
				int32_t L_4 = __this->___flags_5;
				il2cpp_codegen_runtime_class_init_inline(TypeExtensions_t64F202663D46FE6B6690C6AECD6A2AD5BED4DE49_il2cpp_TypeInfo_var);
				RuntimeObject* L_5;
				L_5 = TypeExtensions_GetAllMembers_mEB91F0825655A28B9FF2E3AC7B481A9B8A01F40D(L_3, L_4, NULL);
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>::GetEnumerator() */, IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_9 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_9), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_007b_1;
			}

IL_0042_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_9;
				NullCheck(L_7);
				MemberInfo_t* L_8;
				L_8 = InterfaceFuncInvoker0< MemberInfo_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo>::get_Current() */, IEnumerator_1_t17A98E9C91AD59AC8DCA7D9C70E659E9F6583901_il2cpp_TypeInfo_var, L_7);
				V_2 = L_8;
				MemberInfo_t* L_9 = V_2;
				NullCheck(L_9);
				String_t* L_10;
				L_10 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
				String_t* L_11 = __this->___name_7;
				bool L_12;
				L_12 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, L_11, NULL);
				if (L_12)
				{
					goto IL_007b_1;
				}
			}
			{
				MemberInfo_t* L_13 = V_2;
				__this->___U3CU3E2__current_1 = L_13;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_00a0;
			}

IL_0073_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_007b_1:
			{
				RuntimeObject* L_14 = __this->___U3CU3E7__wrap1_9;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0042_1;
				}
			}
			{
				U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mC30A9F749F5A3E0374D0D6C39AB036823DC79EDA(__this, NULL);
				__this->___U3CU3E7__wrap1_9 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_9), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a0:
	{
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_U3CU3Em__Finally1_mC30A9F749F5A3E0374D0D6C39AB036823DC79EDA (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_9;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap1_9;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Reflection.MemberInfo Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.Generic.IEnumerator<System.Reflection.MemberInfo>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfo_t* U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumeratorU3CSystem_Reflection_MemberInfoU3E_get_Current_mE9B429750C57283A58A054A4D54FE0277EE18026 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_Reset_m058F33E63849F8E58960027976D56A0A2AF7A744 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_Reset_m058F33E63849F8E58960027976D56A0A2AF7A744_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_IEnumerator_get_Current_m91CA20959269B747456BDCAD968FD763AF4060E4 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	{
		MemberInfo_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Reflection.MemberInfo> Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.Generic.IEnumerable<System.Reflection.MemberInfo>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m57C6236864F6C1D173C4A2B60DEAB8EBFFD52CE2 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* L_3 = (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB*)il2cpp_codegen_object_new(U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetAllMembersU3Ed__50__ctor_mEA7B40C0E2B63AA7D0EC366BB00F401DE1491133(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* L_6 = V_0;
		String_t* L_7 = __this->___U3CU3E3__name_8;
		NullCheck(L_6);
		L_6->___name_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___name_7), (void*)L_7);
		U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* L_8 = V_0;
		int32_t L_9 = __this->___U3CU3E3__flags_6;
		NullCheck(L_8);
		L_8->___flags_5 = L_9;
		U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.TypeExtensions/<GetAllMembers>d__50::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetAllMembersU3Ed__50_System_Collections_IEnumerable_GetEnumerator_m47B847BC1016C1A213B5E65F6D1E6A1D1C6DFBD4 (U3CGetAllMembersU3Ed__50_t18BD4E0BF12C8C9C1AA82F7167185A133F3D68AB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetAllMembersU3Ed__50_System_Collections_Generic_IEnumerableU3CSystem_Reflection_MemberInfoU3E_GetEnumerator_m57C6236864F6C1D173C4A2B60DEAB8EBFFD52CE2(__this, NULL);
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55__ctor_mFB516D1A22040F953046518573E4906B47FD2BB9 (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55_System_IDisposable_Dispose_mB53402F9B5B4BEF1D7B5BB8AB32F2E62F980E251 (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetBaseClassesU3Ed__55_MoveNext_m62048B3F57057708F1B400D1B236248FE8AECE20 (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0062;
			}
			case 2:
			{
				goto IL_0091;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_2 = __this->___type_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, (Type_t*)NULL, NULL);
		if (L_3)
		{
			goto IL_0043;
		}
	}
	{
		Type_t* L_4 = __this->___type_3;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(157 /* System.Type System.Type::get_BaseType() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_5, (Type_t*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0045;
		}
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		bool L_7 = __this->___includeSelf_5;
		if (!L_7)
		{
			goto IL_0069;
		}
	}
	{
		Type_t* L_8 = __this->___type_3;
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0062:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0069:
	{
		Type_t* L_9 = __this->___type_3;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(157 /* System.Type System.Type::get_BaseType() */, L_9);
		__this->___U3CcurrentU3E5__2_7 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__2_7), (void*)L_10);
		goto IL_00a9;
	}

IL_007c:
	{
		Type_t* L_11 = __this->___U3CcurrentU3E5__2_7;
		__this->___U3CU3E2__current_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_0091:
	{
		__this->___U3CU3E1__state_0 = (-1);
		Type_t* L_12 = __this->___U3CcurrentU3E5__2_7;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(157 /* System.Type System.Type::get_BaseType() */, L_12);
		__this->___U3CcurrentU3E5__2_7 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CcurrentU3E5__2_7), (void*)L_13);
	}

IL_00a9:
	{
		Type_t* L_14 = __this->___U3CcurrentU3E5__2_7;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_14, (Type_t*)NULL, NULL);
		if (L_15)
		{
			goto IL_007c;
		}
	}
	{
		return (bool)0;
	}
}
// System.Type Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.Generic.IEnumerator<System.Type>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_TypeU3E_get_Current_mA4E66B69F016A35F5EE5DD325E3FBE8F4215D11C (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_Reset_m81EF47C465701FF2E02FA9CF4E1350DFD267AD0B (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_Reset_m81EF47C465701FF2E02FA9CF4E1350DFD267AD0B_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerator_get_Current_mE0833FDC1E4B6EE2BF35F5421344C36A90579733 (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Type> Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.Generic.IEnumerable<System.Type>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m29E8464443001274D4D422551CDBE217BB6008EB (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0029;
	}

IL_0022:
	{
		U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* L_3 = (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436*)il2cpp_codegen_object_new(U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CGetBaseClassesU3Ed__55__ctor_mFB516D1A22040F953046518573E4906B47FD2BB9(L_3, 0, NULL);
		V_0 = L_3;
	}

IL_0029:
	{
		U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* L_4 = V_0;
		Type_t* L_5 = __this->___U3CU3E3__type_4;
		NullCheck(L_4);
		L_4->___type_3 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___type_3), (void*)L_5);
		U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* L_6 = V_0;
		bool L_7 = __this->___U3CU3E3__includeSelf_6;
		NullCheck(L_6);
		L_6->___includeSelf_5 = L_7;
		U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* L_8 = V_0;
		return L_8;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.TypeExtensions/<GetBaseClasses>d__55::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGetBaseClassesU3Ed__55_System_Collections_IEnumerable_GetEnumerator_mF35F0639E48A1C693B823AE3D0F1C0215B18714F (U3CGetBaseClassesU3Ed__55_t88C151879FC41A4266F7BA35961E49A8F5257436* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CGetBaseClassesU3Ed__55_System_Collections_Generic_IEnumerableU3CSystem_TypeU3E_GetEnumerator_m29E8464443001274D4D422551CDBE217BB6008EB(__this, NULL);
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.UnityExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityExtensions__cctor_m296D38516B48AEE4616EB09E5AAABDB28DE639AE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		FieldInfo_t* L_2;
		L_2 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(121 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, _stringLiteral03AB2C403B6556E5A76B2BE4E510934AD585B8A1, ((int32_t)52));
		V_0 = L_2;
		FieldInfo_t* L_3 = V_0;
		bool L_4;
		L_4 = FieldInfo_op_Inequality_m95789A98E646494987E66A9E4188DCA86185066B(L_3, (FieldInfo_t*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		FieldInfo_t* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var);
		ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* L_6;
		L_6 = EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90(L_5, EmitUtilities_CreateInstanceFieldGetter_TisObject_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_TisIntPtr_t_m544CA7599F311CABD8DA618E96FA8E61D464BA90_RuntimeMethod_var);
		((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0), (void*)L_6);
	}

IL_002b:
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.UnityExtensions::SafeIsUnityNull(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityExtensions_SafeIsUnityNull_m6E7C9703117460205E46C387FFECFB514480246A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}

IL_0005:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* L_1 = ((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_2 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB27BC2DBD9E4582303E95015D30F8DB415DB3D4B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityExtensions_SafeIsUnityNull_m6E7C9703117460205E46C387FFECFB514480246A_RuntimeMethod_var)));
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var);
		ValueGetter_2_tC4C534DE23389193AAAFD0B6B75F9A27086BD1F3* L_3 = ((UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_StaticFields*)il2cpp_codegen_static_fields_for(UnityExtensions_t55C19CE7E5B71B1A979C612D1D7B364528547C5A_il2cpp_TypeInfo_var))->___UnityObjectCachedPtrFieldGetter_0;
		NullCheck(L_3);
		intptr_t L_4;
		L_4 = ValueGetter_2_Invoke_m3398DBC4F65272B44F2BB361E081532DBB87116C_inline(L_3, (&___obj0), NULL);
		V_0 = L_4;
		intptr_t L_5 = V_0;
		intptr_t L_6 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_7;
		L_7 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_5, L_6, NULL);
		return L_7;
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
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_Multicast(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* currentDelegate = reinterpret_cast<WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instance0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenInst(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	NullCheck(___instance0);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___instance0, method);
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStatic(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___instance0, method);
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStaticInvoker(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, ___instance0);
}
RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_ClosedStaticInvoker(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject** >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instance0);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueGetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202_Multicast;
}
// System.Object Sirenix.Serialization.Utilities.WeakValueGetter::Invoke(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_Invoke_m29E98A4AF0715BE24ED6F61876EFEAD90798C202 (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Serialization.Utilities.WeakValueGetter::BeginInvoke(System.Object&,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_BeginInvoke_mAAB495801A7CA3E3E1343BB07F4CF12489D7FCCB (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = *___instance0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Object Sirenix.Serialization.Utilities.WeakValueGetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueGetter_EndInvoke_m93A96CB80D83B1A2F8255C10E68DA6EF5814C538 (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* __this, RuntimeObject** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___instance0,
	};
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_Multicast(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* currentDelegate = reinterpret_cast<WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___instance0, ___value1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenInst(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	NullCheck(___instance0);
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instance0, ___value1, method);
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStatic(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___instance0, ___value1, method);
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStaticInvoker(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject**, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___instance0, ___value1);
}
void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_ClosedStaticInvoker(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject**, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___instance0, ___value1);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34 (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA_Multicast;
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::Invoke(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_Invoke_m8162DB1E2BE0725157061FF3F0D401009F3AB7CA (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, ___value1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Sirenix.Serialization.Utilities.WeakValueSetter::BeginInvoke(System.Object&,System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WeakValueSetter_BeginInvoke_m72CDD76B20BBC3767F8B377EA8BBFF0BA59E40BE (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___value1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = *___instance0;
	__d_args[1] = ___value1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Sirenix.Serialization.Utilities.WeakValueSetter::EndInvoke(System.Object&,System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakValueSetter_EndInvoke_m6AF313A78005B761B958FE40447537F0ADA11A6C (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* __this, RuntimeObject** ___instance0, RuntimeObject* ___result1, const RuntimeMethod* method) 
{
	void* ___out_args[] = {
	___instance0,
	};
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result1, ___out_args);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Sirenix.Serialization.Utilities.EmitUtilities::get_CanEmit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmitUtilities_get_CanEmit_m68C101B0002E10980F429FD2FF576533CC1F515F (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.EmitUtilities::EmitIsIllegalForMember(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EmitUtilities_EmitIsIllegalForMember_m5C2B33CCE0F2E52B4ED1FB96E1E91082DAD72429 (MemberInfo_t* ___member0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t* L_0 = ___member0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_1, (Type_t*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		MemberInfo_t* L_3 = ___member0;
		NullCheck(L_3);
		Type_t* L_4;
		L_4 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_3);
		NullCheck(L_4);
		Assembly_t* L_5;
		L_5 = VirtualFuncInvoker0< Assembly_t* >::Invoke(41 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_4);
		il2cpp_codegen_runtime_class_init_inline(EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var);
		Assembly_t* L_6 = ((EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_StaticFields*)il2cpp_codegen_static_fields_for(EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var))->___EngineAssembly_0;
		bool L_7;
		L_7 = Assembly_op_Equality_m1E2666F9D0537F02AB32F14B4458C98C4851CEAB(L_5, L_6, NULL);
		return L_7;
	}

IL_0024:
	{
		return (bool)0;
	}
}
// System.Func`1<System.Object> Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakStaticFieldGetter(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4 (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_mD1280455F65C26C2D5FD7136703BC31798226832_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_0 = (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass5_0__ctor_m03328FB084A7D3CBB8FB6EED127A3DC54A0EF544(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4_RuntimeMethod_var)));
	}

IL_0026:
	{
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_7 = V_0;
		NullCheck(L_7);
		FieldInfo_t* L_8 = L_7->___fieldInfo_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_8, NULL);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldGetter_m07C96A50F111398BA38F66E039F184D7FAEC44D4_RuntimeMethod_var)));
	}

IL_003e:
	{
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_11 = V_0;
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_12 = V_0;
		NullCheck(L_12);
		FieldInfo_t* L_13 = L_12->___fieldInfo_0;
		FieldInfo_t* L_14;
		L_14 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_13, (bool)0, NULL);
		NullCheck(L_11);
		L_11->___fieldInfo_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___fieldInfo_0), (void*)L_14);
		U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* L_15 = V_0;
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_16 = (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*)il2cpp_codegen_object_new(Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_mD1280455F65C26C2D5FD7136703BC31798226832_RuntimeMethod_var), NULL);
		return L_16;
	}
}
// System.Action`1<System.Object> Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakStaticFieldSetter(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A (FieldInfo_t* ___fieldInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_m0DE1754A98B38703E82000A738AD833528268846_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* L_0 = (U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass7_0__ctor_mD0B4A707D698ED8CC18E292D887F89F9A0A4A311(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo0;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A_RuntimeMethod_var)));
	}

IL_0026:
	{
		U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* L_7 = V_0;
		NullCheck(L_7);
		FieldInfo_t* L_8 = L_7->___fieldInfo_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_8, NULL);
		if (L_9)
		{
			goto IL_003e;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0C4A74813E03670A3DDF68FD7559A475174A5814)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakStaticFieldSetter_m8FC8005D5D10F68D7C5C0096B5F9BCCAA2A04F7A_RuntimeMethod_var)));
	}

IL_003e:
	{
		U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* L_11 = V_0;
		U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* L_12 = V_0;
		NullCheck(L_12);
		FieldInfo_t* L_13 = L_12->___fieldInfo_0;
		FieldInfo_t* L_14;
		L_14 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_13, (bool)0, NULL);
		NullCheck(L_11);
		L_11->___fieldInfo_0 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___fieldInfo_0), (void*)L_14);
		U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* L_15 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_16 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_m0DE1754A98B38703E82000A738AD833528268846_RuntimeMethod_var), NULL);
		return L_16;
	}
}
// Sirenix.Serialization.Utilities.WeakValueGetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstanceFieldGetter(System.Type,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B (Type_t* ___instanceType0, FieldInfo_t* ___fieldInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m4585F32601CFA7305F45EA357ED8D63429ECEFC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* L_0 = (U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass10_0__ctor_mFCFC9011D4617EC0FE9AD150B3F978A717441C51(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo1;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var)));
	}

IL_0026:
	{
		Type_t* L_7 = ___instanceType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var)));
	}

IL_003a:
	{
		U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* L_10 = V_0;
		NullCheck(L_10);
		FieldInfo_t* L_11 = L_10->___fieldInfo_0;
		NullCheck(L_11);
		bool L_12;
		L_12 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_11, NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldGetter_mF076C9251C95FEEA5E19786A3BEA9AF8A8BB032B_RuntimeMethod_var)));
	}

IL_0052:
	{
		U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* L_14 = V_0;
		U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* L_15 = V_0;
		NullCheck(L_15);
		FieldInfo_t* L_16 = L_15->___fieldInfo_0;
		FieldInfo_t* L_17;
		L_17 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_16, (bool)0, NULL);
		NullCheck(L_14);
		L_14->___fieldInfo_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___fieldInfo_0), (void*)L_17);
		U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* L_18 = V_0;
		WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* L_19 = (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3*)il2cpp_codegen_object_new(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m4585F32601CFA7305F45EA357ED8D63429ECEFC0_RuntimeMethod_var), NULL);
		return L_19;
	}
}
// Sirenix.Serialization.Utilities.WeakValueSetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstanceFieldSetter(System.Type,System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C (Type_t* ___instanceType0, FieldInfo_t* ___fieldInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_mCB23D504DEA6DA96AE4231F9E696D2AB892D0C0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_0 = (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass13_0__ctor_m803DDE9F6B05AD81CBD934E9D207B7D3B72AB808(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_1 = V_0;
		FieldInfo_t* L_2 = ___fieldInfo1;
		NullCheck(L_1);
		L_1->___fieldInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___fieldInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_3 = V_0;
		NullCheck(L_3);
		FieldInfo_t* L_4 = L_3->___fieldInfo_0;
		bool L_5;
		L_5 = FieldInfo_op_Equality_mA38D84E1D9AA016F414CF2265C4B0DB1FEBBAB74(L_4, (FieldInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral24B384F1E033EC12CCBD648496627CAE231B092D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var)));
	}

IL_0026:
	{
		Type_t* L_7 = ___instanceType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var)));
	}

IL_003a:
	{
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_10 = V_0;
		NullCheck(L_10);
		FieldInfo_t* L_11 = L_10->___fieldInfo_0;
		NullCheck(L_11);
		bool L_12;
		L_12 = FieldInfo_get_IsStatic_mEBBEB7B19A48D3E11BE830F3704C131A681F6139(L_11, NULL);
		if (!L_12)
		{
			goto IL_0052;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB2C992F5B74F2E286B3734B39409FFBE6FCC4427)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceFieldSetter_m4E839ACB142D864C4452DB212CE62F026F89770C_RuntimeMethod_var)));
	}

IL_0052:
	{
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_14 = V_0;
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_15 = V_0;
		NullCheck(L_15);
		FieldInfo_t* L_16 = L_15->___fieldInfo_0;
		FieldInfo_t* L_17;
		L_17 = FieldInfoExtensions_DeAliasField_mE608CF82A86CA35D1B00E1C65EE187F54E7E8A72(L_16, (bool)0, NULL);
		NullCheck(L_14);
		L_14->___fieldInfo_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&L_14->___fieldInfo_0), (void*)L_17);
		U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* L_18 = V_0;
		WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* L_19 = (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65*)il2cpp_codegen_object_new(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_mCB23D504DEA6DA96AE4231F9E696D2AB892D0C0D_RuntimeMethod_var), NULL);
		return L_19;
	}
}
// Sirenix.Serialization.Utilities.WeakValueGetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstancePropertyGetter(System.Type,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB (Type_t* ___instanceType0, PropertyInfo_t* ___propertyInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mD08BFAA86294FEEFED4B1FB219DC6200B03CD3DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_0 = (U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass14_0__ctor_mB410F24F18D9A696CEF95A8C822920CDA6694F73(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_1 = V_0;
		PropertyInfo_t* L_2 = ___propertyInfo1;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_3 = V_0;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = L_3->___propertyInfo_0;
		bool L_5;
		L_5 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_4, (PropertyInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0026:
	{
		Type_t* L_7 = ___instanceType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_003a:
	{
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_10 = V_0;
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_11 = V_0;
		NullCheck(L_11);
		PropertyInfo_t* L_12 = L_11->___propertyInfo_0;
		PropertyInfo_t* L_13;
		L_13 = PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE(L_12, (bool)0, NULL);
		NullCheck(L_10);
		L_10->___propertyInfo_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___propertyInfo_0), (void*)L_13);
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_14 = V_0;
		NullCheck(L_14);
		PropertyInfo_t* L_15 = L_14->___propertyInfo_0;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		NullCheck(L_16);
		if (!(((RuntimeArray*)L_16)->max_length))
		{
			goto IL_0065;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0065:
	{
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_18 = V_0;
		NullCheck(L_18);
		PropertyInfo_t* L_19 = L_18->___propertyInfo_0;
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(31 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_19, (bool)1);
		V_1 = L_20;
		MethodInfo_t* L_21 = V_1;
		bool L_22;
		L_22 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_21, (MethodInfo_t*)NULL, NULL);
		if (!L_22)
		{
			goto IL_0086;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85E9CE6AD4896D7DAC7FD63267FC79467CB4862F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0086:
	{
		MethodInfo_t* L_24 = V_1;
		NullCheck(L_24);
		bool L_25;
		L_25 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_24, NULL);
		if (!L_25)
		{
			goto IL_0099;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_26 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_26);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertyGetter_mA9E8E326B898C24638193A29AAF1BD7E8F2527CB_RuntimeMethod_var)));
	}

IL_0099:
	{
		U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* L_27 = V_0;
		WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3* L_28 = (WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3*)il2cpp_codegen_object_new(WeakValueGetter_t6856D99874AE2E2F4A86997D7B85C3CD9622ADD3_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WeakValueGetter__ctor_m1A26FA25BC25A32D1775B6E4CB03D9429B707EEF(L_28, L_27, (intptr_t)((void*)U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mD08BFAA86294FEEFED4B1FB219DC6200B03CD3DB_RuntimeMethod_var), NULL);
		return L_28;
	}
}
// Sirenix.Serialization.Utilities.WeakValueSetter Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstancePropertySetter(System.Type,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327 (Type_t* ___instanceType0, PropertyInfo_t* ___propertyInfo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m8B5313AE281B6104042A76D973EC727A61C49EDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* V_0 = NULL;
	MethodInfo_t* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_0 = (U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass15_0__ctor_m4441CF37F0BADA0B978E802A179C303D1C44CD77(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_1 = V_0;
		PropertyInfo_t* L_2 = ___propertyInfo1;
		NullCheck(L_1);
		L_1->___propertyInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___propertyInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_3 = V_0;
		NullCheck(L_3);
		PropertyInfo_t* L_4 = L_3->___propertyInfo_0;
		bool L_5;
		L_5 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_4, (PropertyInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBC35FFDE20578F35F7D80AA15EBCB02F42463C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_0026:
	{
		Type_t* L_7 = ___instanceType0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, (Type_t*)NULL, NULL);
		if (!L_8)
		{
			goto IL_003a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_9 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6C92044AA503422C8954E73697B146F1E63C9334)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_003a:
	{
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_10 = V_0;
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_11 = V_0;
		NullCheck(L_11);
		PropertyInfo_t* L_12 = L_11->___propertyInfo_0;
		PropertyInfo_t* L_13;
		L_13 = PropertyInfoExtensions_DeAliasProperty_mDA02CBC479A3DB1DEF0FD46E2B57482D1AFFFCAE(L_12, (bool)0, NULL);
		NullCheck(L_10);
		L_10->___propertyInfo_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___propertyInfo_0), (void*)L_13);
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_14 = V_0;
		NullCheck(L_14);
		PropertyInfo_t* L_15 = L_14->___propertyInfo_0;
		NullCheck(L_15);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_16;
		L_16 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_15);
		NullCheck(L_16);
		if (!(((RuntimeArray*)L_16)->max_length))
		{
			goto IL_0065;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_17 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral26DCB2051A67733E4E3E244BAEEA1FD347E9473B)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_0065:
	{
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_18 = V_0;
		NullCheck(L_18);
		PropertyInfo_t* L_19 = L_18->___propertyInfo_0;
		NullCheck(L_19);
		MethodInfo_t* L_20;
		L_20 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(33 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_19, (bool)1);
		V_1 = L_20;
		MethodInfo_t* L_21 = V_1;
		NullCheck(L_21);
		bool L_22;
		L_22 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_21, NULL);
		if (!L_22)
		{
			goto IL_0085;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_23);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47E25B7BC471508BCFDD9553C340FE99DAB34C4A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstancePropertySetter_m16F911C946F2942811C3ED372EB0070E977E3327_RuntimeMethod_var)));
	}

IL_0085:
	{
		U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* L_24 = V_0;
		WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65* L_25 = (WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65*)il2cpp_codegen_object_new(WeakValueSetter_t07D6E43171A6824D3F1C9DB65CDB46AE19F84A65_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		WeakValueSetter__ctor_m625DC041A75E241CE1D7C8099550A37CACED2D34(L_25, L_24, (intptr_t)((void*)U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m8B5313AE281B6104042A76D973EC727A61C49EDD_RuntimeMethod_var), NULL);
		return L_25;
	}
}
// System.Action Sirenix.Serialization.Utilities.EmitUtilities::CreateStaticMethodCaller(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24 (MethodInfo_t* ___methodInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t* L_0 = ___methodInfo0;
		bool L_1;
		L_1 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_0, (MethodInfo_t*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var)));
	}

IL_0014:
	{
		MethodInfo_t* L_3 = ___methodInfo0;
		NullCheck(L_3);
		bool L_4;
		L_4 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_3, NULL);
		if (L_4)
		{
			goto IL_0037;
		}
	}
	{
		MethodInfo_t* L_5 = ___methodInfo0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22363B2DA57DE0197C3DC04546321A605E3FFE02)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_8 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var)));
	}

IL_0037:
	{
		MethodInfo_t* L_9 = ___methodInfo0;
		NullCheck(L_9);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_10;
		L_10 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(29 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_9);
		NullCheck(L_10);
		if (!(((RuntimeArray*)L_10)->max_length))
		{
			goto IL_004b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateStaticMethodCaller_m6FF3E364F161CDAA3A0AE9AF61844CEFD2FABF24_RuntimeMethod_var)));
	}

IL_004b:
	{
		MethodInfo_t* L_12 = ___methodInfo0;
		MethodInfo_t* L_13;
		L_13 = MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9(L_12, (bool)0, NULL);
		___methodInfo0 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		MethodInfo_t* L_16 = ___methodInfo0;
		Delegate_t* L_17;
		L_17 = Delegate_CreateDelegate_m166F8149A673DE0A735634C1AB9DE71FD34A6BB4(L_15, L_16, NULL);
		return ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_17, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
	}
}
// System.Action`1<System.Object> Sirenix.Serialization.Utilities.EmitUtilities::CreateWeakInstanceMethodCaller(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC (MethodInfo_t* ___methodInfo0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m1A0C872C7A27DC84B97BA512D71117ADCE05C502_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_0 = (U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass23_0__ctor_m18D45B18F60A43CB0E84294B9C91DDF74C66D034(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_1 = V_0;
		MethodInfo_t* L_2 = ___methodInfo0;
		NullCheck(L_1);
		L_1->___methodInfo_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___methodInfo_0), (void*)L_2);
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_3 = V_0;
		NullCheck(L_3);
		MethodInfo_t* L_4 = L_3->___methodInfo_0;
		bool L_5;
		L_5 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_4, (MethodInfo_t*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9BCDF92088B43A83757528F5CA0E89E3A8EA051D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var)));
	}

IL_0026:
	{
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_7 = V_0;
		NullCheck(L_7);
		MethodInfo_t* L_8 = L_7->___methodInfo_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = MethodBase_get_IsStatic_mD2921396167EC4F99E2ADC46C39CCCEC3CD0E16E(L_8, NULL);
		if (!L_9)
		{
			goto IL_0053;
		}
	}
	{
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_10 = V_0;
		NullCheck(L_10);
		MethodInfo_t* L_11 = L_10->___methodInfo_0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_11);
		String_t* L_13;
		L_13 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6624D8C33CE15A1906D8F3BBF68FABBE8E179079)), L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral90A683BBF1FEB32AEC0B5DED0CC88DD136FC5CE7)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_14 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_14, L_13, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var)));
	}

IL_0053:
	{
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_15 = V_0;
		NullCheck(L_15);
		MethodInfo_t* L_16 = L_15->___methodInfo_0;
		NullCheck(L_16);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_17;
		L_17 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(29 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_16);
		NullCheck(L_17);
		if (!(((RuntimeArray*)L_17)->max_length))
		{
			goto IL_006c;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_18 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_18);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBBD2D161BE39B692B416EC33FBD72BE2EE0DEF4E)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EmitUtilities_CreateWeakInstanceMethodCaller_mF8F56B3512A3119F519D496D5B10EC243732A0DC_RuntimeMethod_var)));
	}

IL_006c:
	{
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_19 = V_0;
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_20 = V_0;
		NullCheck(L_20);
		MethodInfo_t* L_21 = L_20->___methodInfo_0;
		MethodInfo_t* L_22;
		L_22 = MethodInfoExtensions_DeAliasMethod_m1726F1DAFF763E08868ABDE92351E7A173A55DB9(L_21, (bool)0, NULL);
		NullCheck(L_19);
		L_19->___methodInfo_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&L_19->___methodInfo_0), (void*)L_22);
		U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* L_23 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_24 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m1A0C872C7A27DC84B97BA512D71117ADCE05C502_RuntimeMethod_var), NULL);
		return L_24;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmitUtilities__cctor_m76F61BF26A9B17280A3146767A27024FBB89BC19 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		Assembly_t* L_2;
		L_2 = VirtualFuncInvoker0< Assembly_t* >::Invoke(41 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
		((EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_StaticFields*)il2cpp_codegen_static_fields_for(EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var))->___EngineAssembly_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_StaticFields*)il2cpp_codegen_static_fields_for(EmitUtilities_t09D4F58999CB7534475A28274E0E9741D3B8AE94_il2cpp_TypeInfo_var))->___EngineAssembly_0), (void*)L_2);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass10_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass10_0__ctor_mFCFC9011D4617EC0FE9AD150B3F978A717441C51 (U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass10_0::<CreateWeakInstanceFieldGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass10_0_U3CCreateWeakInstanceFieldGetterU3Eb__0_m4585F32601CFA7305F45EA357ED8D63429ECEFC0 (U3CU3Ec__DisplayClass10_0_t7ECC60519DEF23ECD4209E7670CCF05CEC47006B* __this, RuntimeObject** ___classInstance0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(33 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_2);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m803DDE9F6B05AD81CBD934E9D207B7D3B72AB808 (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass13_0::<CreateWeakInstanceFieldSetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0_U3CCreateWeakInstanceFieldSetterU3Eb__0_mCB23D504DEA6DA96AE4231F9E696D2AB892D0C0D (U3CU3Ec__DisplayClass13_0_t8A9756D67690E9BA2E12F15001B5031B0F73E1FF* __this, RuntimeObject** ___classInstance0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		RuntimeObject* L_3 = ___value1;
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, L_2, L_3, NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass14_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass14_0__ctor_mB410F24F18D9A696CEF95A8C822920CDA6694F73 (U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass14_0::<CreateWeakInstancePropertyGetter>b__0(System.Object&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass14_0_U3CCreateWeakInstancePropertyGetterU3Eb__0_mD08BFAA86294FEEFED4B1FB219DC6200B03CD3DB (U3CU3Ec__DisplayClass14_0_tCD01782381B0E17ACE6E7B062CB94C5CBB58A963* __this, RuntimeObject** ___classInstance0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___propertyInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(34 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_0, L_2, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass15_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0__ctor_m4441CF37F0BADA0B978E802A179C303D1C44CD77 (U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass15_0::<CreateWeakInstancePropertySetter>b__0(System.Object&,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass15_0_U3CCreateWeakInstancePropertySetterU3Eb__0_m8B5313AE281B6104042A76D973EC727A61C49EDD (U3CU3Ec__DisplayClass15_0_t7BA757E6ACCC59CB82EF757129112F224D26E0F4* __this, RuntimeObject** ___classInstance0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___propertyInfo_0;
		RuntimeObject** L_1 = ___classInstance0;
		RuntimeObject* L_2 = *((RuntimeObject**)L_1);
		RuntimeObject* L_3 = ___value1;
		NullCheck(L_0);
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(36 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, L_0, L_2, L_3, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass23_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0__ctor_m18D45B18F60A43CB0E84294B9C91DDF74C66D034 (U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass23_0::<CreateWeakInstanceMethodCaller>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass23_0_U3CCreateWeakInstanceMethodCallerU3Eb__0_m1A0C872C7A27DC84B97BA512D71117ADCE05C502 (U3CU3Ec__DisplayClass23_0_tD0ACFBF93C2D730C6F6737AEFCC92A079A09F29C* __this, RuntimeObject* ___classInstance0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___methodInfo_0;
		RuntimeObject* L_1 = ___classInstance0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_0, L_1, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m03328FB084A7D3CBB8FB6EED127A3DC54A0EF544 (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass5_0::<CreateWeakStaticFieldGetter>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass5_0_U3CCreateWeakStaticFieldGetterU3Eb__0_mD1280455F65C26C2D5FD7136703BC31798226832 (U3CU3Ec__DisplayClass5_0_tABD579AB1AA27D95CB1109159D7DFA19BD38CBF0* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(33 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, NULL);
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
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mD0B4A707D698ED8CC18E292D887F89F9A0A4A311 (U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.EmitUtilities/<>c__DisplayClass7_0::<CreateWeakStaticFieldSetter>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0_U3CCreateWeakStaticFieldSetterU3Eb__0_m0DE1754A98B38703E82000A738AD833528268846 (U3CU3Ec__DisplayClass7_0_tA136ACAC1CE9C00E6045799D55D2C229EAA54BED* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___fieldInfo_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_0, NULL, L_1, NULL);
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
// System.Boolean Sirenix.Serialization.Utilities.FastTypeComparer::Equals(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FastTypeComparer_Equals_m4DD380AA88301E1313D3A25DCF166FFA3D52EF45 (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, Type_t* ___x0, Type_t* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___x0;
		Type_t* L_1 = ___y1;
		if ((!(((RuntimeObject*)(Type_t*)L_0) == ((RuntimeObject*)(Type_t*)L_1))))
		{
			goto IL_0006;
		}
	}
	{
		return (bool)1;
	}

IL_0006:
	{
		Type_t* L_2 = ___x0;
		Type_t* L_3 = ___y1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_3, NULL);
		return L_4;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.FastTypeComparer::GetHashCode(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FastTypeComparer_GetHashCode_m849BA595C40F2017EDD043A0DB7DCD0CABCD3EF6 (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, Type_t* ___obj0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___obj0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// System.Void Sirenix.Serialization.Utilities.FastTypeComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__ctor_m96FDA0B2719EF764A2336C02F7A2CF573EA4C26B (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.FastTypeComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastTypeComparer__cctor_m209448F65F511827ED78ABEB809407D1122FF771 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE* L_0 = (FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE*)il2cpp_codegen_object_new(FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FastTypeComparer__ctor_m96FDA0B2719EF764A2336C02F7A2CF573EA4C26B(L_0, NULL);
		((FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_StaticFields*)il2cpp_codegen_static_fields_for(FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_StaticFields*)il2cpp_codegen_static_fields_for(FastTypeComparer_tEB6C0E1B9CFBAA6F47DC55D92BEE2EB3FE72DADE_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.Serialization.Utilities.ImmutableList::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList__ctor_mCE912BFBB1722C1AECB7EDDB307E79CB64C73889 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___innerList0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___innerList0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral18BBD42CCE9B175CCD6F5CA37762D740A0B5A5C4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList__ctor_mCE912BFBB1722C1AECB7EDDB307E79CB64C73889_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___innerList0;
		__this->___innerList_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___innerList_0), (void*)L_2);
		return;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.ImmutableList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_get_Count_m7828BFD4F85A8442277A0501E7DCD99F91725ED4 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsFixedSize_m7FD0FC09A5D0FCAE8E50208040A4F491EDBF5788 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsReadOnly_m0FA34035647E2539F3157FCF0012EABBED98E1C6 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::get_IsSynchronized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_get_IsSynchronized_mFB865BD5A2665BB0A517911510A5E38415BA9771 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.Collections.ICollection::get_IsSynchronized() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_get_SyncRoot_m0CB0BED1C67BFAD5B7784D412B962C9875129038 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_IList_get_Item_m17EA78D79692747BE77D8B0D54A761E725CD07A5 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_set_Item_m630BA6436B91738C6891612A49B9DE607B7E3D0D (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_set_Item_m630BA6436B91738C6891612A49B9DE607B7E3D0D_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_get_Item_mB3F270642CF194A7189B3DC1BA435E256B18F5C7 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_m53DE8B16CE1ACD252E902C383F6ECB241E8D6FAF (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_set_Item_m53DE8B16CE1ACD252E902C383F6ECB241E8D6FAF_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_get_Item_mFC0B7C19E77911CFF8438541F039879934843B63 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_Contains_mE28C6C42022673857E3A8028514651CF9D6B5F33 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::CopyTo(System.Object[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_CopyTo_mEF23193C9393D293C38A8277763BEEA69940E7F6 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, (RuntimeArray*)L_1, L_2);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_CopyTo_mCBC0388686CC6C9E7B0E1FAF717923B2A06C4602 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeArray* ___array0, int32_t ___index1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeArray* L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_GetEnumerator_m5516440CC191369757EE85F2988C6224060663FD (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Collections.IEnumerator Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_IEnumerable_GetEnumerator_mBAA59B9C9A3481A48F54180FDF091EBA6B393C8D (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = ImmutableList_GetEnumerator_m5516440CC191369757EE85F2988C6224060663FD(__this, NULL);
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Object> Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImmutableList_System_Collections_Generic_IEnumerableU3CSystem_ObjectU3E_GetEnumerator_m111F5CA6EF8550A6B475DB353DFD0072488B767C (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* L_0 = (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15*)il2cpp_codegen_object_new(U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mADF4798474AFAAAF22F526DB3789B94746AEC7A0(L_0, 0, NULL);
		U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_System_Collections_IList_Add_m5F336C9204CD98F21F7168A844DD7F219146A7ED (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Add_m5F336C9204CD98F21F7168A844DD7F219146A7ED_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Clear_m11BA43CD0772AD9CE5D71A5EC8500D04DF020EDE (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Clear_m11BA43CD0772AD9CE5D71A5EC8500D04DF020EDE_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Insert_m7E0CFAD102C4BED8BEF7F2E642DC07A8D73E654C (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Insert_m7E0CFAD102C4BED8BEF7F2E642DC07A8D73E654C_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_Remove_m266092BA6380A1A595D503B415E43B0AD3C5E6EB (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_Remove_m266092BA6380A1A595D503B415E43B0AD3C5E6EB_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_IList_RemoveAt_m913C2F47C5B8B4FF044B61544E0CA3C486C07CC3 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_IList_RemoveAt_m913C2F47C5B8B4FF044B61544E0CA3C486C07CC3_RuntimeMethod_var)));
	}
}
// System.Int32 Sirenix.Serialization.Utilities.ImmutableList::IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ImmutableList_IndexOf_m9639B1DA370C09763887CE1E52B5E97BB0299562 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___innerList_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_mDC7138036F1240939E1F79DCE246044A4247CA98 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_RemoveAt_mDC7138036F1240939E1F79DCE246044A4247CA98_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.IList<System.Object>.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m120F4089F7A721670196CA1C703F7CA58060C017 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_IListU3CSystem_ObjectU3E_Insert_m120F4089F7A721670196CA1C703F7CA58060C017_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_mE968971AB6E9A412FDB6E90869E5CA8E5ACFDB50 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Add_mE968971AB6E9A412FDB6E90869E5CA8E5ACFDB50_RuntimeMethod_var)));
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_m15AB187D9728A51EACB6E2E44B5D0B6E26009359 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Clear_m15AB187D9728A51EACB6E2E44B5D0B6E26009359_RuntimeMethod_var)));
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList::System.Collections.Generic.ICollection<System.Object>.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m28F8A42114DE24FC6C34ED9D59F4044FF2F1CF30 (ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral11BB164D688C6C6C1533A7397D67080EE5771645)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ImmutableList_System_Collections_Generic_ICollectionU3CSystem_ObjectU3E_Remove_m28F8A42114DE24FC6C34ED9D59F4044FF2F1CF30_RuntimeMethod_var)));
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
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25__ctor_mADF4798474AFAAAF22F526DB3789B94746AEC7A0 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m32BE744D1FF1B9C0E511C6A37DCEE82A14E3CA77 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_MoveNext_mC73EED533DB47F0D085F342EE47D069CE0635E9F (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_007f:
			{// begin fault (depth: 1)
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_IDisposable_Dispose_m32BE744D1FF1B9C0E511C6A37DCEE82A14E3CA77(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* L_1 = __this->___U3CU3E4__this_2;
				V_2 = L_1;
				int32_t L_2 = V_1;
				if (!L_2)
				{
					goto IL_0019_1;
				}
			}
			{
				int32_t L_3 = V_1;
				if ((((int32_t)L_3) == ((int32_t)1)))
				{
					goto IL_0059_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0086;
			}

IL_0019_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				ImmutableList_t2102F96321090E6C1BAA186F4B55F9CFD5154ABD* L_4 = V_2;
				NullCheck(L_4);
				RuntimeObject* L_5 = L_4->___innerList_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_5);
				__this->___U3CU3E7__wrap1_3 = L_6;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_6);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0061_1;
			}

IL_003b_1:
			{
				RuntimeObject* L_7 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_7);
				RuntimeObject* L_8;
				L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_7);
				V_3 = L_8;
				RuntimeObject* L_9 = V_3;
				__this->___U3CU3E2__current_1 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_9);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0086;
			}

IL_0059_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0061_1:
			{
				RuntimeObject* L_10 = __this->___U3CU3E7__wrap1_3;
				NullCheck(L_10);
				bool L_11;
				L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B(__this, NULL);
				__this->___U3CU3E7__wrap1_3 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(RuntimeObject*)NULL);
				V_0 = (bool)0;
				goto IL_0086;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0086:
	{
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_U3CU3Em__Finally1_m1AFA84BE50CB992E494E23FE6A5978DB421F552B (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap1_3;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_2);
	}

IL_001c:
	{
		return;
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD86C11DD70AAE6D35B814AE61CECBBD5B0602263 (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m84E0417231B60237F9966B732EA3B2F31536F54D (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_Reset_m84E0417231B60237F9966B732EA3B2F31536F54D_RuntimeMethod_var)));
	}
}
// System.Object Sirenix.Serialization.Utilities.ImmutableList/<System-Collections-Generic-IEnumerable<System-Object>-GetEnumerator>d__25::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_System_Collections_IEnumerator_get_Current_m72668B9740B67F6EB92C0D5495E99A4AE178207D (U3CSystemU2DCollectionsU2DGenericU2DIEnumerableU3CSystemU2DObjectU3EU2DGetEnumeratorU3Ed__25_t95AA0716211DDB77B0B74E47A6BA83F1C8BC4F15* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Sirenix.Serialization.Utilities.MemberAliasFieldInfo::.ctor(System.Reflection.FieldInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo__ctor_mCB9C05B9C2293EDB24E8436D2E3F0697FE0F0B02 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, FieldInfo_t* ___field0, String_t* ___namePrefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F(__this, NULL);
		FieldInfo_t* L_0 = ___field0;
		__this->___aliasedField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedField_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		FieldInfo_t* L_2 = __this->___aliasedField_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasFieldInfo::.ctor(System.Reflection.FieldInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo__ctor_m20039287489493AF511593AA95D8A10A78C3D1E4 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, FieldInfo_t* ___field0, String_t* ___namePrefix1, String_t* ___separatorString2, const RuntimeMethod* method) 
{
	{
		FieldInfo__ctor_m8424D98FC7039BEC250ED437607B5D73352F0A0F(__this, NULL);
		FieldInfo_t* L_0 = ___field0;
		__this->___aliasedField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedField_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		String_t* L_2 = ___separatorString2;
		FieldInfo_t* L_3 = __this->___aliasedField_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		return;
	}
}
// System.Reflection.FieldInfo Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_AliasedField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* MemberAliasFieldInfo_get_AliasedField_mD5DE35FBCA9EBBF8164EC578CDE3E4FCA88889CF (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		return L_0;
	}
}
// System.Reflection.Module Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* MemberAliasFieldInfo_get_Module_m551572B9253F550AC44460F47AE7B6BD5373AE64 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_1;
		L_1 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(15 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_0);
		return L_1;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_MetadataToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasFieldInfo_get_MetadataToken_m44EF00F7AAFA566C00AA9461CD9DF3EE5251691A (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_0);
		return L_1;
	}
}
// System.String Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasFieldInfo_get_Name_m68B29D87B16B5867543DD2D7DEC40E51564172A1 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_DeclaringType_mFB0D953603CD26525592FB585664ECF8EE35DF0E (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_ReflectedType_mB9ACE0708FDFBED4DB3A83C4852A3B9DF5BE5CD0 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_FieldType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasFieldInfo_get_FieldType_m336B84E7D02EA4CDA415B3BC8C9C02993C8834CA (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(25 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_0);
		return L_1;
	}
}
// System.RuntimeFieldHandle Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_FieldHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 MemberAliasFieldInfo_get_FieldHandle_m314EBDB56AFCF5561CF318CA77026103A5F0DFBD (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_1;
		L_1 = VirtualFuncInvoker0< RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 >::Invoke(32 /* System.RuntimeFieldHandle System.Reflection.FieldInfo::get_FieldHandle() */, L_0);
		return L_1;
	}
}
// System.Reflection.FieldAttributes Sirenix.Serialization.Utilities.MemberAliasFieldInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasFieldInfo_get_Attributes_m8CAFD1D8B1E8992A8C1E728A9FF1CE944AB10773 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(24 /* System.Reflection.FieldAttributes System.Reflection.FieldInfo::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasFieldInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasFieldInfo_GetCustomAttributes_m661DD5E88FF744737902AB7A0E7CB6E10C0AF249 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		bool L_1 = ___inherit0;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(18 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasFieldInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasFieldInfo_GetCustomAttributes_mD822ADDF91AE4FC43BEBBDBB660B12B3431FBCEB (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(19 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasFieldInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasFieldInfo_IsDefined_mA4233BE131924606F4C1DA7F38A60358A4D654BC (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(17 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Object Sirenix.Serialization.Utilities.MemberAliasFieldInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasFieldInfo_GetValue_m43B8E140281F3E57360001D21DDBCEC8708F59F5 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		RuntimeObject* L_1 = ___obj0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(33 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_0, L_1);
		return L_2;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasFieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasFieldInfo_SetValue_mE758D6D1F9EF239DD43547651933E5303B8269C0 (MemberAliasFieldInfo_t77A70FFCFC8B8A8999876A16C79BDC1B340A0656* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, int32_t ___invokeAttr2, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) 
{
	{
		FieldInfo_t* L_0 = __this->___aliasedField_1;
		RuntimeObject* L_1 = ___obj0;
		RuntimeObject* L_2 = ___value1;
		int32_t L_3 = ___invokeAttr2;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_4 = ___binder3;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___culture4;
		NullCheck(L_0);
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(35 /* System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
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
// System.Void Sirenix.Serialization.Utilities.MemberAliasMethodInfo::.ctor(System.Reflection.MethodInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasMethodInfo__ctor_mCA59A1100CC964CDA0625D20C497E6999FE83134 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, MethodInfo_t* ___method0, String_t* ___namePrefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B(__this, NULL);
		MethodInfo_t* L_0 = ___method0;
		__this->___aliasedMethod_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedMethod_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		MethodInfo_t* L_2 = __this->___aliasedMethod_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasMethodInfo::.ctor(System.Reflection.MethodInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasMethodInfo__ctor_mE3B05932400C0D2B6B9DC81C4CEBB0192555807B (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, MethodInfo_t* ___method0, String_t* ___namePrefix1, String_t* ___separatorString2, const RuntimeMethod* method) 
{
	{
		MethodInfo__ctor_mFA9E34BB41CAC506D1CE042B8F5A90ACF1A9952B(__this, NULL);
		MethodInfo_t* L_0 = ___method0;
		__this->___aliasedMethod_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedMethod_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		String_t* L_2 = ___separatorString2;
		MethodInfo_t* L_3 = __this->___aliasedMethod_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		return;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_AliasedMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_get_AliasedMethod_mE6D71392C2BF6D6E8DEB276007EEC701E50BA6FB (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		return L_0;
	}
}
// System.Reflection.ICustomAttributeProvider Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_ReturnTypeCustomAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasMethodInfo_get_ReturnTypeCustomAttributes_m28BC353A550C394BB0C66784385669942CB7284C (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(76 /* System.Reflection.ICustomAttributeProvider System.Reflection.MethodInfo::get_ReturnTypeCustomAttributes() */, L_0);
		return L_1;
	}
}
// System.RuntimeMethodHandle Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_MethodHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 MemberAliasMethodInfo_get_MethodHandle_m6F6D96D0A4DE1E592BE5459ECAD7C8D993FE190F (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 L_1;
		L_1 = VirtualFuncInvoker0< RuntimeMethodHandle_tB35B96E97214DCBE20B0B02B1E687884B34680B2 >::Invoke(55 /* System.RuntimeMethodHandle System.Reflection.MethodBase::get_MethodHandle() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodAttributes Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasMethodInfo_get_Attributes_m480788A419382792719523A038381BD4758115B3 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(30 /* System.Reflection.MethodAttributes System.Reflection.MethodBase::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_ReturnType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_ReturnType_m8166C37E9BB530C0EDDBF42BF066E8562E618CC9 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(72 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_DeclaringType_mD833DC51CD1E9FF9965865941947734480707AF7 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.String Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasMethodInfo_get_Name_mA22598842CE369187194DC6E58FE53166246C637 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasMethodInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasMethodInfo_get_ReflectedType_m4EB95F3FA641CCBE5FA416EE7ED6A6F340F6EDE6 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetBaseDefinition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasMethodInfo_GetBaseDefinition_m634B30ECA3AF1630D185402E84AE797671932670 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		MethodInfo_t* L_1;
		L_1 = VirtualFuncInvoker0< MethodInfo_t* >::Invoke(75 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::GetBaseDefinition() */, L_0);
		return L_1;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasMethodInfo_GetCustomAttributes_mD671B84DBE79A97BC2AABEA8CD1822C9E6C33DED (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		bool L_1 = ___inherit0;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(18 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasMethodInfo_GetCustomAttributes_mB27C6ED016F9E733AB9171DFEBBC0224817F14B1 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(19 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.MethodImplAttributes Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetMethodImplementationFlags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasMethodInfo_GetMethodImplementationFlags_mD7D0BB3F16A0D4D9281981EE007FF96EE07BC033 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(32 /* System.Reflection.MethodImplAttributes System.Reflection.MethodBase::GetMethodImplementationFlags() */, L_0);
		return L_1;
	}
}
// System.Reflection.ParameterInfo[] Sirenix.Serialization.Utilities.MemberAliasMethodInfo::GetParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* MemberAliasMethodInfo_GetParameters_m9FEE47545B8E171945C25E47D4C6465FA0420F61 (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(29 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		return L_1;
	}
}
// System.Object Sirenix.Serialization.Utilities.MemberAliasMethodInfo::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasMethodInfo_Invoke_mF14F5A56A3D05B70CE547EEA5970935DDEEC803A (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, RuntimeObject* ___obj0, int32_t ___invokeAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		RuntimeObject* L_1 = ___obj0;
		int32_t L_2 = ___invokeAttr1;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_3 = ___binder2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___parameters3;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___culture4;
		NullCheck(L_0);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(54 /* System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasMethodInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasMethodInfo_IsDefined_mBCD31AFC3488C28E0D21544B5F4A0F3D39468AFF (MemberAliasMethodInfo_t078C23D9E3EC71690C015F8F9746D76A5D5CEB18* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		MethodInfo_t* L_0 = __this->___aliasedMethod_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(17 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
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
// System.Void Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::.ctor(System.Reflection.PropertyInfo,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo__ctor_m1F431189698DA5CCAF178803346125DE042EF7FD (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, PropertyInfo_t* ___prop0, String_t* ___namePrefix1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138(__this, NULL);
		PropertyInfo_t* L_0 = ___prop0;
		__this->___aliasedProperty_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedProperty_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		PropertyInfo_t* L_2 = __this->___aliasedProperty_1;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_3, NULL);
		__this->___mangledName_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_4);
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::.ctor(System.Reflection.PropertyInfo,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo__ctor_m45CF1372243CD4F9FC8419FB1B00DC67E63EC4BA (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, PropertyInfo_t* ___prop0, String_t* ___namePrefix1, String_t* ___separatorString2, const RuntimeMethod* method) 
{
	{
		PropertyInfo__ctor_m09B380762225589F785BDF7D42E98D6695BE0138(__this, NULL);
		PropertyInfo_t* L_0 = ___prop0;
		__this->___aliasedProperty_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___aliasedProperty_1), (void*)L_0);
		String_t* L_1 = ___namePrefix1;
		String_t* L_2 = ___separatorString2;
		PropertyInfo_t* L_3 = __this->___aliasedProperty_1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_1, L_2, L_4, NULL);
		__this->___mangledName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mangledName_2), (void*)L_5);
		return;
	}
}
// System.Reflection.PropertyInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_AliasedProperty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* MemberAliasPropertyInfo_get_AliasedProperty_m641D01DDC45E3CB59762B653EAC3982678D3CB30 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		return L_0;
	}
}
// System.Reflection.Module Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_Module()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* MemberAliasPropertyInfo_get_Module_m6456A7C4EB9A9337EC6A618B8B8834ED0815D543 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* L_1;
		L_1 = VirtualFuncInvoker0< Module_tABB9217F7F2BA3E0F4277D03C2B234A7313BB8D0* >::Invoke(15 /* System.Reflection.Module System.Reflection.MemberInfo::get_Module() */, L_0);
		return L_1;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_MetadataToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasPropertyInfo_get_MetadataToken_m00733A20AD94BF25DCA5ABCA2463750A5B41240D (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 System.Reflection.MemberInfo::get_MetadataToken() */, L_0);
		return L_1;
	}
}
// System.String Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemberAliasPropertyInfo_get_Name_m8478561E15AA8793D5CE305C80AE102664058856 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___mangledName_2;
		return L_0;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_DeclaringType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_DeclaringType_m5EE64491B0C6FFEF0D65C00665515855C41FF510 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(13 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_ReflectedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_ReflectedType_m6BE6A78981C3245E8D55DC42B209674006C8007E (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(14 /* System.Type System.Reflection.MemberInfo::get_ReflectedType() */, L_0);
		return L_1;
	}
}
// System.Type Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_PropertyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MemberAliasPropertyInfo_get_PropertyType_m6BDE48A5C4CDD238AE14D44D6D819E215E1DA93F (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = VirtualFuncInvoker0< Type_t* >::Invoke(24 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_0);
		return L_1;
	}
}
// System.Reflection.PropertyAttributes Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_Attributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemberAliasPropertyInfo_get_Attributes_m5C724055200D676BF9A56958CBF5699C91AAD48E (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(26 /* System.Reflection.PropertyAttributes System.Reflection.PropertyInfo::get_Attributes() */, L_0);
		return L_1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_CanRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_get_CanRead_mD5EA4A48BB3E4001A129C2B43271A611DAFE950B (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::get_CanWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_get_CanWrite_m50AD61E70943222228B857C3983B632B47A9A41C (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(28 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetCustomAttributes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasPropertyInfo_GetCustomAttributes_m949A7675A4879D26F731DAF7254420797EAFE7FB (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___inherit0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___inherit0;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = VirtualFuncInvoker1< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, bool >::Invoke(18 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetCustomAttributes(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* MemberAliasPropertyInfo_GetCustomAttributes_mD8EB32BD818620C2B99296F8FC47DC752FFF6F6D (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3;
		L_3 = VirtualFuncInvoker2< ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, Type_t*, bool >::Invoke(19 /* System.Object[] System.Reflection.MemberInfo::GetCustomAttributes(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::IsDefined(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberAliasPropertyInfo_IsDefined_m6067E404CF645FC7F10FF837203693FC8B45E5CB (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, Type_t* ___attributeType0, bool ___inherit1, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		Type_t* L_1 = ___attributeType0;
		bool L_2 = ___inherit1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker2< bool, Type_t*, bool >::Invoke(17 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Reflection.MethodInfo[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetAccessors(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* MemberAliasPropertyInfo_GetAccessors_m1D4142704FB37B90E21027CCC9C7014FFF88BF67 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___nonPublic0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___nonPublic0;
		NullCheck(L_0);
		MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfoU5BU5D_tDF3670604A0AECF814A0B0BA09B91FBF0D6A3265*, bool >::Invoke(29 /* System.Reflection.MethodInfo[] System.Reflection.PropertyInfo::GetAccessors(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetGetMethod(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasPropertyInfo_GetGetMethod_mE61D727EEAF419D9320C9B06159BA8FFDAB6C082 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___nonPublic0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___nonPublic0;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(31 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetGetMethod(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Reflection.ParameterInfo[] Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetIndexParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* MemberAliasPropertyInfo_GetIndexParameters_m3EB47949BEFF17E00B959E919471049143FBCC1F (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		NullCheck(L_0);
		ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* L_1;
		L_1 = VirtualFuncInvoker0< ParameterInfoU5BU5D_t86995AB4A1693393FE29B058CC3FD727DF0B984C* >::Invoke(25 /* System.Reflection.ParameterInfo[] System.Reflection.PropertyInfo::GetIndexParameters() */, L_0);
		return L_1;
	}
}
// System.Reflection.MethodInfo Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetSetMethod(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* MemberAliasPropertyInfo_GetSetMethod_mA8B76946F16615A8F1943496E01F99CFEE184AE4 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, bool ___nonPublic0, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		bool L_1 = ___nonPublic0;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(33 /* System.Reflection.MethodInfo System.Reflection.PropertyInfo::GetSetMethod(System.Boolean) */, L_0, L_1);
		return L_2;
	}
}
// System.Object Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemberAliasPropertyInfo_GetValue_m26BCB43F2743C43620BCBB6771B015121D72F2A7 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, RuntimeObject* ___obj0, int32_t ___invokeAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___index3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		RuntimeObject* L_1 = ___obj0;
		int32_t L_2 = ___invokeAttr1;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_3 = ___binder2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___index3;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_5 = ___culture4;
		NullCheck(L_0);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker5< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(35 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5);
		return L_6;
	}
}
// System.Void Sirenix.Serialization.Utilities.MemberAliasPropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemberAliasPropertyInfo_SetValue_mDF6AEF28785C28E301B8C0F3B76B5FC11ADC84B8 (MemberAliasPropertyInfo_tDB36839ED484DE4CF93345C594180C78DA84C1EA* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, int32_t ___invokeAttr2, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder3, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___index4, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture5, const RuntimeMethod* method) 
{
	{
		PropertyInfo_t* L_0 = __this->___aliasedProperty_1;
		RuntimeObject* L_1 = ___obj0;
		RuntimeObject* L_2 = ___value1;
		int32_t L_3 = ___invokeAttr2;
		Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* L_4 = ___binder3;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = ___index4;
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_6 = ___culture5;
		NullCheck(L_0);
		VirtualActionInvoker6< RuntimeObject*, RuntimeObject*, int32_t, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* >::Invoke(37 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo) */, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
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
// System.Void Sirenix.Serialization.Utilities.UnityVersion::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion__cctor_mA00556508979E501FCD11C98462FC44DAAF6B595 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		V_0 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) >= ((int32_t)2)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_5;
		L_5 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6A825010D5EA79C01DD8A61B9868ED1079027C59, L_5, _stringLiteral1FE371F4FD106F2E23AD17CE17DD19CBEAB4C201, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_6, NULL);
		return;
	}

IL_0036:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8 = 0;
		String_t* L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		bool L_10;
		L_10 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_9, (&((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Major_0), NULL);
		if (L_10)
		{
			goto IL_007b;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6B467E9437ABC9E94BFC901F0C0D1B5CB4BA7FA6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15 = 0;
		String_t* L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_13;
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		String_t* L_19;
		L_19 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_19);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_18;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_21;
		L_21 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_20, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_21, NULL);
	}

IL_007b:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23 = 1;
		String_t* L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		bool L_25;
		L_25 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_24, (&((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Minor_1), NULL);
		if (L_25)
		{
			goto IL_00c0;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3125A7BAD1D9F6BD71BCEE4C2B9156FDFD2007D3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = V_0;
		NullCheck(L_29);
		int32_t L_30 = 1;
		String_t* L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral6BE0C776B3F645DA91BB7E44C3B8DF8B543935F6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		String_t* L_34;
		L_34 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_34);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_33;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, _stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralC7A7939E82BEFEF8DDB755713442AA62963F09F8);
		String_t* L_36;
		L_36 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_35, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_36, NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.UnityVersion::EnsureLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityVersion_EnsureLoaded_m7D800CCD41FE93C89A43BDE35B778DCDE79425DD (const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Sirenix.Serialization.Utilities.UnityVersion::IsVersionOrGreater(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityVersion_IsVersionOrGreater_m7A0F0616FBD246D9B118F5E2CA1298CBA6E30181 (int32_t ___major0, int32_t ___minor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Major_0;
		int32_t L_1 = ___major0;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		int32_t L_2 = ((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Major_0;
		int32_t L_3 = ___major0;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_3))))
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var);
		int32_t L_4 = ((UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_StaticFields*)il2cpp_codegen_static_fields_for(UnityVersion_t16EF2C7CE867BC3D53F68062667CF67C22896C9A_il2cpp_TypeInfo_var))->___Minor_1;
		int32_t L_5 = ___minor1;
		return (bool)((((int32_t)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		return (bool)0;
	}

IL_001e:
	{
		return (bool)1;
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
// System.String Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::StringFromBytes(System.Byte[],System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnsafeUtilities_StringFromBytes_m577D384ECCC0DAD912AF0A7410AA8BA412BB09C4 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, int32_t ___charLength1, bool ___needs16BitSupport2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	Il2CppChar* V_3 = NULL;
	String_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	uint16_t* V_6 = NULL;
	intptr_t V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Il2CppChar* V_9 = NULL;
	String_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	Il2CppChar* V_14 = NULL;
	String_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	uint8_t* V_17 = NULL;
	int32_t V_18 = 0;
	Il2CppChar* V_19 = NULL;
	String_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	uint8_t* V_22 = NULL;
	int32_t V_23 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_0006;
		}
	}
	{
		int32_t L_1 = ___charLength1;
		G_B3_0 = L_1;
		goto IL_0009;
	}

IL_0006:
	{
		int32_t L_2 = ___charLength1;
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_2, 2));
	}

IL_0009:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___buffer0;
		NullCheck(L_3);
		int32_t L_4 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) >= ((int32_t)L_4)))
		{
			goto IL_002c;
		}
	}
	{
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringFromBytes_m577D384ECCC0DAD912AF0A7410AA8BA412BB09C4_RuntimeMethod_var)));
	}

IL_002c:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		int32_t L_8 = ___charLength1;
		String_t* L_9;
		L_9 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)32), L_8, NULL);
		V_2 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01bc:
			{// begin finally (depth: 1)
				{
					bool L_10;
					L_10 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_10)
					{
						goto IL_01cc;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_01cc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer0;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_12;
				L_12 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_11, 3, NULL);
				V_1 = L_12;
				bool L_13 = ___needs16BitSupport2;
				if (!L_13)
				{
					goto IL_0104_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_14 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_14)
				{
					goto IL_00a2_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009e_1:
					{// begin finally (depth: 2)
						V_4 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_15 = V_2;
						V_4 = L_15;
						String_t* L_16 = V_4;
						V_3 = (Il2CppChar*)((uintptr_t)L_16);
						Il2CppChar* L_17 = V_3;
						if (!L_17)
						{
							goto IL_0064_2;
						}
					}
					{
						Il2CppChar* L_18 = V_3;
						int32_t L_19;
						L_19 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_3 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, L_19));
					}

IL_0064_2:
					{
						intptr_t L_20;
						L_20 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_20;
						void* L_21;
						L_21 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_5 = (uint16_t*)L_21;
						Il2CppChar* L_22 = V_3;
						V_6 = (uint16_t*)L_22;
						V_8 = 0;
						goto IL_0094_2;
					}

IL_007e_2:
					{
						uint16_t* L_23 = V_6;
						uint16_t* L_24 = L_23;
						V_6 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_24, 2));
						uint16_t* L_25 = V_5;
						uint16_t* L_26 = L_25;
						V_5 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
						int32_t L_27 = *((uint16_t*)L_26);
						*((int16_t*)L_24) = (int16_t)L_27;
						int32_t L_28 = V_8;
						V_8 = ((int32_t)il2cpp_codegen_add(L_28, 2));
					}

IL_0094_2:
					{
						int32_t L_29 = V_8;
						int32_t L_30 = V_0;
						if ((((int32_t)L_29) < ((int32_t)L_30)))
						{
							goto IL_007e_2;
						}
					}
					{
						goto IL_01cd;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a2_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0100_1:
					{// begin finally (depth: 2)
						V_10 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_31 = V_2;
						V_10 = L_31;
						String_t* L_32 = V_10;
						V_9 = (Il2CppChar*)((uintptr_t)L_32);
						Il2CppChar* L_33 = V_9;
						if (!L_33)
						{
							goto IL_00b9_2;
						}
					}
					{
						Il2CppChar* L_34 = V_9;
						int32_t L_35;
						L_35 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_9 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, L_35));
					}

IL_00b9_2:
					{
						intptr_t L_36;
						L_36 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_36;
						void* L_37;
						L_37 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_11 = (uint8_t*)L_37;
						Il2CppChar* L_38 = V_9;
						V_12 = (uint8_t*)L_38;
						V_13 = 0;
						goto IL_00f6_2;
					}

IL_00d4_2:
					{
						uint8_t* L_39 = V_12;
						uint8_t* L_40 = V_11;
						int32_t L_41 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, 1)));
						*((int8_t*)L_39) = (int8_t)L_41;
						uint8_t* L_42 = V_12;
						uint8_t* L_43 = V_11;
						int32_t L_44 = *((uint8_t*)L_43);
						*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, 1))) = (int8_t)L_44;
						uint8_t* L_45 = V_11;
						V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, 2));
						uint8_t* L_46 = V_12;
						V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, 2));
						int32_t L_47 = V_13;
						V_13 = ((int32_t)il2cpp_codegen_add(L_47, 2));
					}

IL_00f6_2:
					{
						int32_t L_48 = V_13;
						int32_t L_49 = V_0;
						if ((((int32_t)L_48) < ((int32_t)L_49)))
						{
							goto IL_00d4_2;
						}
					}
					{
						goto IL_01cd;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0104_1:
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_50 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_50)
				{
					goto IL_0163_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_015f_1:
					{// begin finally (depth: 2)
						V_15 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_51 = V_2;
						V_15 = L_51;
						String_t* L_52 = V_15;
						V_14 = (Il2CppChar*)((uintptr_t)L_52);
						Il2CppChar* L_53 = V_14;
						if (!L_53)
						{
							goto IL_0121_2;
						}
					}
					{
						Il2CppChar* L_54 = V_14;
						int32_t L_55;
						L_55 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_14 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_54, L_55));
					}

IL_0121_2:
					{
						intptr_t L_56;
						L_56 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_56;
						void* L_57;
						L_57 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_16 = (uint8_t*)L_57;
						Il2CppChar* L_58 = V_14;
						V_17 = (uint8_t*)L_58;
						V_18 = 0;
						goto IL_0158_2;
					}

IL_013c_2:
					{
						uint8_t* L_59 = V_17;
						uint8_t* L_60 = L_59;
						V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_60, 1));
						uint8_t* L_61 = V_16;
						uint8_t* L_62 = L_61;
						V_16 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_62, 1));
						int32_t L_63 = *((uint8_t*)L_62);
						*((int8_t*)L_60) = (int8_t)L_63;
						uint8_t* L_64 = V_17;
						V_17 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_64, 1));
						int32_t L_65 = V_18;
						V_18 = ((int32_t)il2cpp_codegen_add(L_65, 1));
					}

IL_0158_2:
					{
						int32_t L_66 = V_18;
						int32_t L_67 = V_0;
						if ((((int32_t)L_66) < ((int32_t)L_67)))
						{
							goto IL_013c_2;
						}
					}
					{
						goto IL_01cd;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0163_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01b8_1:
					{// begin finally (depth: 2)
						V_20 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_68 = V_2;
						V_20 = L_68;
						String_t* L_69 = V_20;
						V_19 = (Il2CppChar*)((uintptr_t)L_69);
						Il2CppChar* L_70 = V_19;
						if (!L_70)
						{
							goto IL_017a_2;
						}
					}
					{
						Il2CppChar* L_71 = V_19;
						int32_t L_72;
						L_72 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_19 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_71, L_72));
					}

IL_017a_2:
					{
						intptr_t L_73;
						L_73 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_7 = L_73;
						void* L_74;
						L_74 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_7), NULL);
						V_21 = (uint8_t*)L_74;
						Il2CppChar* L_75 = V_19;
						V_22 = (uint8_t*)L_75;
						V_23 = 0;
						goto IL_01b1_2;
					}

IL_0195_2:
					{
						uint8_t* L_76 = V_22;
						V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_76, 1));
						uint8_t* L_77 = V_22;
						uint8_t* L_78 = L_77;
						V_22 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_78, 1));
						uint8_t* L_79 = V_21;
						uint8_t* L_80 = L_79;
						V_21 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_80, 1));
						int32_t L_81 = *((uint8_t*)L_80);
						*((int8_t*)L_78) = (int8_t)L_81;
						int32_t L_82 = V_23;
						V_23 = ((int32_t)il2cpp_codegen_add(L_82, 1));
					}

IL_01b1_2:
					{
						int32_t L_83 = V_23;
						int32_t L_84 = V_0;
						if ((((int32_t)L_83) < ((int32_t)L_84)))
						{
							goto IL_0195_2;
						}
					}
					{
						goto IL_01cd;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01cd:
	{
		String_t* L_85 = V_2;
		return L_85;
	}
}
// System.Int32 Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::StringToBytes(System.Byte[],System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtilities_StringToBytes_m47C191284C1676E35355A0FD43E90D71EF16DD0F (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, String_t* ___value1, bool ___needs16BitSupport2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	Il2CppChar* V_2 = NULL;
	String_t* V_3 = NULL;
	uint16_t* V_4 = NULL;
	uint16_t* V_5 = NULL;
	intptr_t V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	Il2CppChar* V_8 = NULL;
	String_t* V_9 = NULL;
	uint8_t* V_10 = NULL;
	uint8_t* V_11 = NULL;
	int32_t V_12 = 0;
	Il2CppChar* V_13 = NULL;
	String_t* V_14 = NULL;
	uint8_t* V_15 = NULL;
	uint8_t* V_16 = NULL;
	int32_t V_17 = 0;
	Il2CppChar* V_18 = NULL;
	String_t* V_19 = NULL;
	uint8_t* V_20 = NULL;
	uint8_t* V_21 = NULL;
	int32_t V_22 = 0;
	int32_t G_B3_0 = 0;
	{
		bool L_0 = ___needs16BitSupport2;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		String_t* L_1 = ___value1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		G_B3_0 = L_2;
		goto IL_0013;
	}

IL_000b:
	{
		String_t* L_3 = ___value1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		G_B3_0 = ((int32_t)il2cpp_codegen_multiply(L_4, 2));
	}

IL_0013:
	{
		V_0 = G_B3_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___buffer0;
		NullCheck(L_5);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) >= ((int32_t)L_6)))
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_8;
		L_8 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0FBEE35345E8D388C523672DCD1D97721575F12E)), L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral87064437EF311884667DAB55AAFBBAC160D0E41D)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_9 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_9, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_StringToBytes_m47C191284C1676E35355A0FD43E90D71EF16DD0F_RuntimeMethod_var)));
	}

IL_0036:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01ba:
			{// begin finally (depth: 1)
				{
					bool L_10;
					L_10 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_10)
					{
						goto IL_01ca;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_01ca:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11 = ___buffer0;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_12;
				L_12 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC((RuntimeObject*)L_11, 3, NULL);
				V_1 = L_12;
				bool L_13 = ___needs16BitSupport2;
				if (!L_13)
				{
					goto IL_0102_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_14 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_14)
				{
					goto IL_00a0_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_009d_1:
					{// begin finally (depth: 2)
						V_3 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_15 = ___value1;
						V_3 = L_15;
						String_t* L_16 = V_3;
						V_2 = (Il2CppChar*)((uintptr_t)L_16);
						Il2CppChar* L_17 = V_2;
						if (!L_17)
						{
							goto IL_0063_2;
						}
					}
					{
						Il2CppChar* L_18 = V_2;
						int32_t L_19;
						L_19 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_2 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_18, L_19));
					}

IL_0063_2:
					{
						Il2CppChar* L_20 = V_2;
						V_4 = (uint16_t*)L_20;
						intptr_t L_21;
						L_21 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_21;
						void* L_22;
						L_22 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_5 = (uint16_t*)L_22;
						V_7 = 0;
						goto IL_0093_2;
					}

IL_007d_2:
					{
						uint16_t* L_23 = V_5;
						uint16_t* L_24 = L_23;
						V_5 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_24, 2));
						uint16_t* L_25 = V_4;
						uint16_t* L_26 = L_25;
						V_4 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_26, 2));
						int32_t L_27 = *((uint16_t*)L_26);
						*((int16_t*)L_24) = (int16_t)L_27;
						int32_t L_28 = V_7;
						V_7 = ((int32_t)il2cpp_codegen_add(L_28, 2));
					}

IL_0093_2:
					{
						int32_t L_29 = V_7;
						int32_t L_30 = V_0;
						if ((((int32_t)L_29) < ((int32_t)L_30)))
						{
							goto IL_007d_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00a0_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00fe_1:
					{// begin finally (depth: 2)
						V_9 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_31 = ___value1;
						V_9 = L_31;
						String_t* L_32 = V_9;
						V_8 = (Il2CppChar*)((uintptr_t)L_32);
						Il2CppChar* L_33 = V_8;
						if (!L_33)
						{
							goto IL_00b7_2;
						}
					}
					{
						Il2CppChar* L_34 = V_8;
						int32_t L_35;
						L_35 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_8 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_34, L_35));
					}

IL_00b7_2:
					{
						Il2CppChar* L_36 = V_8;
						V_10 = (uint8_t*)L_36;
						intptr_t L_37;
						L_37 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_37;
						void* L_38;
						L_38 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_11 = (uint8_t*)L_38;
						V_12 = 0;
						goto IL_00f4_2;
					}

IL_00d2_2:
					{
						uint8_t* L_39 = V_11;
						uint8_t* L_40 = V_10;
						int32_t L_41 = *((uint8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, 1)));
						*((int8_t*)L_39) = (int8_t)L_41;
						uint8_t* L_42 = V_11;
						uint8_t* L_43 = V_10;
						int32_t L_44 = *((uint8_t*)L_43);
						*((int8_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_42, 1))) = (int8_t)L_44;
						uint8_t* L_45 = V_10;
						V_10 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_45, 2));
						uint8_t* L_46 = V_11;
						V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_46, 2));
						int32_t L_47 = V_12;
						V_12 = ((int32_t)il2cpp_codegen_add(L_47, 2));
					}

IL_00f4_2:
					{
						int32_t L_48 = V_12;
						int32_t L_49 = V_0;
						if ((((int32_t)L_48) < ((int32_t)L_49)))
						{
							goto IL_00d2_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0102_1:
			{
				il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
				bool L_50 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
				if (!L_50)
				{
					goto IL_0161_1;
				}
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_015d_1:
					{// begin finally (depth: 2)
						V_14 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_51 = ___value1;
						V_14 = L_51;
						String_t* L_52 = V_14;
						V_13 = (Il2CppChar*)((uintptr_t)L_52);
						Il2CppChar* L_53 = V_13;
						if (!L_53)
						{
							goto IL_011f_2;
						}
					}
					{
						Il2CppChar* L_54 = V_13;
						int32_t L_55;
						L_55 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_13 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_54, L_55));
					}

IL_011f_2:
					{
						Il2CppChar* L_56 = V_13;
						V_15 = (uint8_t*)L_56;
						intptr_t L_57;
						L_57 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_57;
						void* L_58;
						L_58 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_16 = (uint8_t*)L_58;
						V_17 = 0;
						goto IL_0156_2;
					}

IL_013a_2:
					{
						uint8_t* L_59 = V_15;
						V_15 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_59, 1));
						uint8_t* L_60 = V_16;
						uint8_t* L_61 = L_60;
						V_16 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_61, 1));
						uint8_t* L_62 = V_15;
						uint8_t* L_63 = L_62;
						V_15 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_63, 1));
						int32_t L_64 = *((uint8_t*)L_63);
						*((int8_t*)L_61) = (int8_t)L_64;
						int32_t L_65 = V_17;
						V_17 = ((int32_t)il2cpp_codegen_add(L_65, 1));
					}

IL_0156_2:
					{
						int32_t L_66 = V_17;
						int32_t L_67 = V_0;
						if ((((int32_t)L_66) < ((int32_t)L_67)))
						{
							goto IL_013a_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0161_1:
			{
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01b6_1:
					{// begin finally (depth: 2)
						V_19 = (String_t*)NULL;
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						String_t* L_68 = ___value1;
						V_19 = L_68;
						String_t* L_69 = V_19;
						V_18 = (Il2CppChar*)((uintptr_t)L_69);
						Il2CppChar* L_70 = V_18;
						if (!L_70)
						{
							goto IL_0178_2;
						}
					}
					{
						Il2CppChar* L_71 = V_18;
						int32_t L_72;
						L_72 = RuntimeHelpers_get_OffsetToStringData_m90A5D27EF88BE9432BF7093B7D7E7A0ACB0A8FBD(NULL);
						V_18 = ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_71, L_72));
					}

IL_0178_2:
					{
						Il2CppChar* L_73 = V_18;
						V_20 = (uint8_t*)L_73;
						intptr_t L_74;
						L_74 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
						V_6 = L_74;
						void* L_75;
						L_75 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_6), NULL);
						V_21 = (uint8_t*)L_75;
						V_22 = 0;
						goto IL_01af_2;
					}

IL_0193_2:
					{
						uint8_t* L_76 = V_21;
						uint8_t* L_77 = L_76;
						V_21 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_77, 1));
						uint8_t* L_78 = V_20;
						uint8_t* L_79 = L_78;
						V_20 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_79, 1));
						int32_t L_80 = *((uint8_t*)L_79);
						*((int8_t*)L_77) = (int8_t)L_80;
						uint8_t* L_81 = V_20;
						V_20 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_81, 1));
						int32_t L_82 = V_22;
						V_22 = ((int32_t)il2cpp_codegen_add(L_82, 1));
					}

IL_01af_2:
					{
						int32_t L_83 = V_22;
						int32_t L_84 = V_0;
						if ((((int32_t)L_83) < ((int32_t)L_84)))
						{
							goto IL_0193_2;
						}
					}
					{
						goto IL_01cb;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01cb:
	{
		int32_t L_85 = V_0;
		return L_85;
	}
}
// System.Void Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Void*,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m1D9E410C2CF82F3FD52B7CB894F4258FB4EBEB89 (void* ___from0, void* ___to1, int32_t ___bytes2, const RuntimeMethod* method) 
{
	uint8_t* V_0 = NULL;
	Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* V_1 = NULL;
	Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* V_2 = NULL;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* V_5 = NULL;
	{
		void* L_0 = ___to1;
		int32_t L_1 = ___bytes2;
		V_0 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, L_1));
		void* L_2 = ___from0;
		V_1 = (Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_2;
		void* L_3 = ___to1;
		V_2 = (Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_3;
		goto IL_0032;
	}

IL_000a:
	{
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_4 = V_2;
		V_5 = L_4;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_5 = V_5;
		uint32_t L_6 = sizeof(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A);
		V_2 = ((Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)il2cpp_codegen_add((intptr_t)L_5, (int32_t)L_6));
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_7 = V_5;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_8 = V_1;
		V_5 = L_8;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_9 = V_5;
		uint32_t L_10 = sizeof(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A);
		V_1 = ((Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)il2cpp_codegen_add((intptr_t)L_9, (int32_t)L_10));
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_11 = V_5;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A L_12 = (*(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_11);
		*(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)L_7 = L_12;
	}

IL_0032:
	{
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_13 = V_2;
		uint32_t L_14 = sizeof(Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A);
		uint8_t* L_15 = V_0;
		if ((!(((uintptr_t)((Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A*)il2cpp_codegen_add((intptr_t)L_13, (int32_t)L_14))) > ((uintptr_t)L_15))))
		{
			goto IL_000a;
		}
	}
	{
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_16 = V_1;
		V_3 = (uint8_t*)L_16;
		Struct256Bit_t371C16C018092C6EF4CB77A3D7A3C16D9AD51D1A* L_17 = V_2;
		V_4 = (uint8_t*)L_17;
		goto IL_0052;
	}

IL_0044:
	{
		uint8_t* L_18 = V_4;
		uint8_t* L_19 = L_18;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, 1));
		uint8_t* L_20 = V_3;
		uint8_t* L_21 = L_20;
		V_3 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_21, 1));
		int32_t L_22 = *((uint8_t*)L_21);
		*((int8_t*)L_19) = (int8_t)L_22;
	}

IL_0052:
	{
		uint8_t* L_23 = V_4;
		uint8_t* L_24 = V_0;
		if ((!(((uintptr_t)L_23) >= ((uintptr_t)L_24))))
		{
			goto IL_0044;
		}
	}
	{
		return;
	}
}
// System.Void Sirenix.Serialization.Utilities.Unsafe.UnsafeUtilities::MemoryCopy(System.Object,System.Object,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtilities_MemoryCopy_m2FF651B6F23D59D8D9D29A6BFEA30DFD75278F76 (RuntimeObject* ___from0, RuntimeObject* ___to1, int32_t ___byteCount2, int32_t ___fromByteOffset3, int32_t ___toByteOffset4, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	uint64_t* V_7 = NULL;
	uint64_t* V_8 = NULL;
	intptr_t V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	uint8_t* V_11 = NULL;
	uint8_t* V_12 = NULL;
	int32_t V_13 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		il2cpp_codegen_initobj((&V_1), sizeof(GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC));
		int32_t L_0 = ___fromByteOffset3;
		if (((int32_t)(L_0%8)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = ___toByteOffset4;
		if (!((int32_t)(L_1%8)))
		{
			goto IL_0039;
		}
	}

IL_001b:
	{
		V_2 = 8;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_3;
		L_3 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral45E91B775C05667BB0C4313D3AF0298D560E3F90)), L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3F530C05EDCBF7716458575421F02CF2C179352F)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_4, L_3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnsafeUtilities_MemoryCopy_m2FF651B6F23D59D8D9D29A6BFEA30DFD75278F76_RuntimeMethod_var)));
	}

IL_0039:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00f1:
			{// begin finally (depth: 1)
				{
					bool L_5;
					L_5 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_0), NULL);
					if (!L_5)
					{
						goto IL_0101;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
				}

IL_0101:
				{
					bool L_6;
					L_6 = GCHandle_get_IsAllocated_m241908103D8D867E11CCAB73C918729825E86843((&V_1), NULL);
					if (!L_6)
					{
						goto IL_0111;
					}
				}
				{
					GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_1), NULL);
				}

IL_0111:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_7 = ___byteCount2;
				V_3 = ((int32_t)(L_7%8));
				int32_t L_8 = ___byteCount2;
				int32_t L_9 = V_3;
				V_4 = ((int32_t)(((int32_t)il2cpp_codegen_subtract(L_8, L_9))/8));
				int32_t L_10 = ___fromByteOffset3;
				V_5 = ((int32_t)(L_10/8));
				int32_t L_11 = ___toByteOffset4;
				V_6 = ((int32_t)(L_11/8));
				RuntimeObject* L_12 = ___from0;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_13;
				L_13 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_12, 3, NULL);
				V_0 = L_13;
				RuntimeObject* L_14 = ___to1;
				GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_15;
				L_15 = GCHandle_Alloc_m3BFD398427352FC756FFE078F01A504B681352EC(L_14, 3, NULL);
				V_1 = L_15;
				intptr_t L_16;
				L_16 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_0), NULL);
				V_9 = L_16;
				void* L_17;
				L_17 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_9), NULL);
				V_7 = (uint64_t*)L_17;
				intptr_t L_18;
				L_18 = GCHandle_AddrOfPinnedObject_m9C047E154D6F0FE66BE003AB99F0B67A2CA953A6((&V_1), NULL);
				V_9 = L_18;
				void* L_19;
				L_19 = IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline((&V_9), NULL);
				V_8 = (uint64_t*)L_19;
				int32_t L_20 = V_5;
				if ((((int32_t)L_20) <= ((int32_t)0)))
				{
					goto IL_0093_1;
				}
			}
			{
				uint64_t* L_21 = V_7;
				int32_t L_22 = V_5;
				V_7 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_21, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_22), 8))));
			}

IL_0093_1:
			{
				int32_t L_23 = V_6;
				if ((((int32_t)L_23) <= ((int32_t)0)))
				{
					goto IL_00a2_1;
				}
			}
			{
				uint64_t* L_24 = V_8;
				int32_t L_25 = V_6;
				V_8 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_24, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_25), 8))));
			}

IL_00a2_1:
			{
				V_10 = 0;
				goto IL_00bd_1;
			}

IL_00a7_1:
			{
				uint64_t* L_26 = V_8;
				uint64_t* L_27 = L_26;
				V_8 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_27, 8));
				uint64_t* L_28 = V_7;
				uint64_t* L_29 = L_28;
				V_7 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_29, 8));
				int64_t L_30 = *((int64_t*)L_29);
				*((int64_t*)L_27) = (int64_t)L_30;
				int32_t L_31 = V_10;
				V_10 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_00bd_1:
			{
				int32_t L_32 = V_10;
				int32_t L_33 = V_4;
				if ((((int32_t)L_32) < ((int32_t)L_33)))
				{
					goto IL_00a7_1;
				}
			}
			{
				int32_t L_34 = V_3;
				if ((((int32_t)L_34) <= ((int32_t)0)))
				{
					goto IL_00ef_1;
				}
			}
			{
				uint64_t* L_35 = V_7;
				V_11 = (uint8_t*)L_35;
				uint64_t* L_36 = V_8;
				V_12 = (uint8_t*)L_36;
				V_13 = 0;
				goto IL_00ea_1;
			}

IL_00d4_1:
			{
				uint8_t* L_37 = V_12;
				uint8_t* L_38 = L_37;
				V_12 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_38, 1));
				uint8_t* L_39 = V_11;
				uint8_t* L_40 = L_39;
				V_11 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_40, 1));
				int32_t L_41 = *((uint8_t*)L_40);
				*((int8_t*)L_38) = (int8_t)L_41;
				int32_t L_42 = V_13;
				V_13 = ((int32_t)il2cpp_codegen_add(L_42, 1));
			}

IL_00ea_1:
			{
				int32_t L_43 = V_13;
				int32_t L_44 = V_3;
				if ((((int32_t)L_43) < ((int32_t)L_44)))
				{
					goto IL_00d4_1;
				}
			}

IL_00ef_1:
			{
				goto IL_0112;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0112:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void* IntPtr_ToPointer_m1A0612EED3A1C8B8850BE2943CFC42523064B4F6_inline (intptr_t* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = *__this;
		return (void*)(L_0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ValueGetter_2_Invoke_mC6FDDFB9939D99C3A2312F88394AAED91B0984BC_gshared_inline (ValueGetter_2_t9C9A5BA3B2F3F1ABCE61E85799EF299E57CB0414* __this, RuntimeObject** ___instance0, const RuntimeMethod* method) 
{
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, RuntimeObject**, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___instance0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
