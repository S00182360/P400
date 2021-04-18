#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>
struct Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988;
// System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>
struct Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A;
// System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>
struct Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3;
// System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>
struct HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEqualityComparer`1<MLAPI.INetworkUpdateSystem>
struct IEqualityComparer_1_t6679AFA974BDE25B5BC8DF898274EC1100A3458B;
// System.Collections.Generic.IEqualityComparer`1<MLAPI.NetworkUpdateStage>
struct IEqualityComparer_1_tE4932DBBFF80FDF70714B181361E46D5EC394F6F;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.Dictionary`2/KeyCollection<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>
struct KeyCollection_tB0EDC02753D188BE5C0BD7CF08867061F5B1E114;
// System.Collections.Generic.Dictionary`2/KeyCollection<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>
struct KeyCollection_tD1D8215FE0DBFFDB25320EBC0641B1A13A5AEBB1;
// System.Collections.Generic.Dictionary`2/ValueCollection<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>
struct ValueCollection_t83186BD51EBAD4DA944AD54C893384F5F7211BB2;
// System.Collections.Generic.Dictionary`2/ValueCollection<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>
struct ValueCollection_tCB3CEF8974F2107986E40DCE0D700585F2E7F065;
// System.Collections.Generic.Dictionary`2/Entry<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>[]
struct EntryU5BU5D_tCF47F47740FF10A7F64ADA8DD4646A4805956909;
// System.Collections.Generic.Dictionary`2/Entry<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>[]
struct EntryU5BU5D_t2814ADD1D017769C2B9DA620DC321F38396C8E4E;
// System.Collections.Generic.HashSet`1/Slot<MLAPI.INetworkUpdateSystem>[]
struct SlotU5BU5D_tCDE66530981352F44EDE365B7F3E0A045FBA35CF;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// MLAPI.INetworkUpdateSystem[]
struct INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// MLAPI.INetworkUpdateSystem
struct INetworkUpdateSystem_tF0A6742AE7072BDA8CBECF8CF58495FF3A1992E7;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA;
// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c
struct U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800;
// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c
struct U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8;
// MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c
struct U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56;
// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c
struct U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED;
// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c
struct U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16;
// MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c
struct U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D;
// MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c
struct U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4;

IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkUpdateSystem_tF0A6742AE7072BDA8CBECF8CF58495FF3A1992E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m8B6F132CDEAED586903778201899953BBFA0CF4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mDF53AF33575641845F47A3D69A3480B4F8F94BED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3D70CDB61CF9E4B42263527C4E9A71028F8C3A9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE215610E38669A61377EA244F2904C23FBDD25CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m0EFE47617A50272B8BEE6F056BFC7CD4BB0CD036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m39C1361BA4787D42D0B4B763DE3CA2BF2B9081ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m143A6F0DFFD917675CA8D2DCBA5A98B8125B8F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m3812ADEA6D8A1B152830B4F332386F575E595B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* EarlyUpdate_t683E44A9E9836945CA0E577E02CA23D9E88B5095_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FixedUpdate_t4607F2480384D5A8F0BF5E9F9538A48BFC87C323_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Initialization_t7B2536C5EC00EAB0948F09401B106F9A2BB5D7B4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PhysicsUpdate_tF321BF0A833E955AED90F182BBC9D6D7D40F2F25_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PlayerSendFrameComplete_tFCB4A131339039D456553596DC33CD625CFF7AAC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PostLateUpdate_tB0EEFB945E792D3FC9007281EA8A6BADD1A0231A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PreLateUpdate_tCA98ABCD94D2218D5F53C5DC83C455011E9550A2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* PreUpdate_tC8EA9C6C460E1A7DC72849545F052D2D3E297775_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptRunBehaviourFixedUpdate_t7FE48475D8C09E8A4FF93E60B9CEA5B69EC9B203_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptRunBehaviourLateUpdate_t58F4C9331E2958013C6CB7FEF18E370AD5043B9A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptRunBehaviourUpdate_tAAEB9BAF1DB9036DFA153F433C2D719A7BC30536_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ScriptRunDelayedStartupFrame_tCD3EB2C533206E2243EDBEC265AE32D963A12298_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com;
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke;

struct INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF;
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t36C286AEB34119DE115EF5FE379DE670F7CCE284 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>
struct  Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tCF47F47740FF10A7F64ADA8DD4646A4805956909* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB0EDC02753D188BE5C0BD7CF08867061F5B1E114 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t83186BD51EBAD4DA944AD54C893384F5F7211BB2 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___entries_1)); }
	inline EntryU5BU5D_tCF47F47740FF10A7F64ADA8DD4646A4805956909* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tCF47F47740FF10A7F64ADA8DD4646A4805956909** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tCF47F47740FF10A7F64ADA8DD4646A4805956909* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___keys_7)); }
	inline KeyCollection_tB0EDC02753D188BE5C0BD7CF08867061F5B1E114 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB0EDC02753D188BE5C0BD7CF08867061F5B1E114 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB0EDC02753D188BE5C0BD7CF08867061F5B1E114 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ___values_8)); }
	inline ValueCollection_t83186BD51EBAD4DA944AD54C893384F5F7211BB2 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t83186BD51EBAD4DA944AD54C893384F5F7211BB2 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t83186BD51EBAD4DA944AD54C893384F5F7211BB2 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>
struct  Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t2814ADD1D017769C2B9DA620DC321F38396C8E4E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD1D8215FE0DBFFDB25320EBC0641B1A13A5AEBB1 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tCB3CEF8974F2107986E40DCE0D700585F2E7F065 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___entries_1)); }
	inline EntryU5BU5D_t2814ADD1D017769C2B9DA620DC321F38396C8E4E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t2814ADD1D017769C2B9DA620DC321F38396C8E4E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t2814ADD1D017769C2B9DA620DC321F38396C8E4E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___keys_7)); }
	inline KeyCollection_tD1D8215FE0DBFFDB25320EBC0641B1A13A5AEBB1 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD1D8215FE0DBFFDB25320EBC0641B1A13A5AEBB1 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD1D8215FE0DBFFDB25320EBC0641B1A13A5AEBB1 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ___values_8)); }
	inline ValueCollection_tCB3CEF8974F2107986E40DCE0D700585F2E7F065 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tCB3CEF8974F2107986E40DCE0D700585F2E7F065 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tCB3CEF8974F2107986E40DCE0D700585F2E7F065 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>
struct  HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tCDE66530981352F44EDE365B7F3E0A045FBA35CF* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____slots_8)); }
	inline SlotU5BU5D_tCDE66530981352F44EDE365B7F3E0A045FBA35CF* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tCDE66530981352F44EDE365B7F3E0A045FBA35CF** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tCDE66530981352F44EDE365B7F3E0A045FBA35CF* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct  HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// MLAPI.Profiling.ProfilerCountersInfo
struct  ProfilerCountersInfo_t662029FA6D4E4E9F2E62870CC55C5600655909D2  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c
struct  U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<>9
	U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c
struct  U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<>9
	U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c
struct  U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::<>9
	U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c
struct  U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<>9
	U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c
struct  U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<>9
	U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c
struct  U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::<>9
	U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c
struct  U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields
{
public:
	// MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::<>9
	U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * ___U3CU3E9_0;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::<>9__0_0
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___U3CU3E9__0_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields, ___U3CU3E9__0_0_1)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate
struct  NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkFixedUpdate
struct  NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkInitialization
struct  NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate
struct  NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate
struct  NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkPreUpdate
struct  NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77__padding[1];
	};

public:
};


// MLAPI.NetworkUpdateLoop/NetworkUpdate
struct  NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93 
{
public:
	union
	{
		struct
		{
		};
		uint8_t NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93__padding[1];
	};

public:
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.ByteEnum
struct  ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307 
{
public:
	// System.Byte System.ByteEnum::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ByteEnum_t39285A9D8C7F88982FF718C04A9FA1AE64827307, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// MLAPI.NetworkUpdateStage
struct  NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1 
{
public:
	// System.Byte MLAPI.NetworkUpdateStage::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.LowLevel.PlayerLoopSystem
struct  PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C 
{
public:
	// System.Type UnityEngine.LowLevel.PlayerLoopSystem::type
	Type_t * ___type_0;
	// UnityEngine.LowLevel.PlayerLoopSystem[] UnityEngine.LowLevel.PlayerLoopSystem::subSystemList
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* ___subSystemList_1;
	// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction UnityEngine.LowLevel.PlayerLoopSystem::updateDelegate
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * ___updateDelegate_2;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::updateFunction
	intptr_t ___updateFunction_3;
	// System.IntPtr UnityEngine.LowLevel.PlayerLoopSystem::loopConditionFunction
	intptr_t ___loopConditionFunction_4;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_subSystemList_1() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___subSystemList_1)); }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* get_subSystemList_1() const { return ___subSystemList_1; }
	inline PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17** get_address_of_subSystemList_1() { return &___subSystemList_1; }
	inline void set_subSystemList_1(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* value)
	{
		___subSystemList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subSystemList_1), (void*)value);
	}

	inline static int32_t get_offset_of_updateDelegate_2() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateDelegate_2)); }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * get_updateDelegate_2() const { return ___updateDelegate_2; }
	inline UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA ** get_address_of_updateDelegate_2() { return &___updateDelegate_2; }
	inline void set_updateDelegate_2(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * value)
	{
		___updateDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___updateDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_updateFunction_3() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___updateFunction_3)); }
	inline intptr_t get_updateFunction_3() const { return ___updateFunction_3; }
	inline intptr_t* get_address_of_updateFunction_3() { return &___updateFunction_3; }
	inline void set_updateFunction_3(intptr_t value)
	{
		___updateFunction_3 = value;
	}

	inline static int32_t get_offset_of_loopConditionFunction_4() { return static_cast<int32_t>(offsetof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C, ___loopConditionFunction_4)); }
	inline intptr_t get_loopConditionFunction_4() const { return ___loopConditionFunction_4; }
	inline intptr_t* get_address_of_loopConditionFunction_4() { return &___loopConditionFunction_4; }
	inline void set_loopConditionFunction_4(intptr_t value)
	{
		___loopConditionFunction_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_pinvoke* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};
// Native definition for COM marshalling of UnityEngine.LowLevel.PlayerLoopSystem
struct PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com
{
	Type_t * ___type_0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C_marshaled_com* ___subSystemList_1;
	Il2CppMethodPointer ___updateDelegate_2;
	intptr_t ___updateFunction_3;
	intptr_t ___loopConditionFunction_4;
};

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// MLAPI.NetworkUpdateLoop/LoopSystemPosition
struct  LoopSystemPosition_tAB727E11D1F08DD0762EDD9A57BD5D0114376202 
{
public:
	// System.Int32 MLAPI.NetworkUpdateLoop/LoopSystemPosition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoopSystemPosition_tAB727E11D1F08DD0762EDD9A57BD5D0114376202, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// MLAPI.NetworkUpdateLoop
struct  NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975  : public RuntimeObject
{
public:

public:
};

struct NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>> MLAPI.NetworkUpdateLoop::s_UpdateSystem_Sets
	Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * ___s_UpdateSystem_Sets_0;
	// System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]> MLAPI.NetworkUpdateLoop::s_UpdateSystem_Arrays
	Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * ___s_UpdateSystem_Arrays_1;
	// MLAPI.NetworkUpdateStage MLAPI.NetworkUpdateLoop::UpdateStage
	uint8_t ___UpdateStage_3;

public:
	inline static int32_t get_offset_of_s_UpdateSystem_Sets_0() { return static_cast<int32_t>(offsetof(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields, ___s_UpdateSystem_Sets_0)); }
	inline Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * get_s_UpdateSystem_Sets_0() const { return ___s_UpdateSystem_Sets_0; }
	inline Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A ** get_address_of_s_UpdateSystem_Sets_0() { return &___s_UpdateSystem_Sets_0; }
	inline void set_s_UpdateSystem_Sets_0(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * value)
	{
		___s_UpdateSystem_Sets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSystem_Sets_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_UpdateSystem_Arrays_1() { return static_cast<int32_t>(offsetof(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields, ___s_UpdateSystem_Arrays_1)); }
	inline Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * get_s_UpdateSystem_Arrays_1() const { return ___s_UpdateSystem_Arrays_1; }
	inline Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 ** get_address_of_s_UpdateSystem_Arrays_1() { return &___s_UpdateSystem_Arrays_1; }
	inline void set_s_UpdateSystem_Arrays_1(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * value)
	{
		___s_UpdateSystem_Arrays_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UpdateSystem_Arrays_1), (void*)value);
	}

	inline static int32_t get_offset_of_UpdateStage_3() { return static_cast<int32_t>(offsetof(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields, ___UpdateStage_3)); }
	inline uint8_t get_UpdateStage_3() const { return ___UpdateStage_3; }
	inline uint8_t* get_address_of_UpdateStage_3() { return &___UpdateStage_3; }
	inline void set_UpdateStage_3(uint8_t value)
	{
		___UpdateStage_3 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction
struct  UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// MLAPI.INetworkUpdateSystem[]
struct INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
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
// UnityEngine.LowLevel.PlayerLoopSystem[]
struct PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  m_Items[1];

public:
	inline PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
	inline PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___subSystemList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___updateDelegate_2), (void*)NULL);
		#endif
	}
};


// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mB1BD995056039C2AD2CE07E04A53E652A6C039B9_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m0ED5FEF3A5E5E1AFCE9C2F5CAB746A29C7730059_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mEA5665B69C064636B283B6E324FAEA99DDC82A18_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, uint8_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.ByteEnum,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared (Dictionary_2_tF6533D4775708EB95178ECDC1D347094A5009988 * __this, uint8_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1_CopyTo_mAF0CEBFD6D92A6464C518262E7C2F33E0FB2AB37_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>::.ctor()
inline void Dictionary_2__ctor_mE215610E38669A61377EA244F2904C23FBDD25CC (Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A *, const RuntimeMethod*))Dictionary_2__ctor_mB1BD995056039C2AD2CE07E04A53E652A6C039B9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>::.ctor()
inline void Dictionary_2__ctor_m3D70CDB61CF9E4B42263527C4E9A71028F8C3A9A (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 *, const RuntimeMethod*))Dictionary_2__ctor_mB1BD995056039C2AD2CE07E04A53E652A6C039B9_gshared)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>::.ctor()
inline void HashSet_1__ctor_m3812ADEA6D8A1B152830B4F332386F575E595B9A (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>::Add(!0,!1)
inline void Dictionary_2_Add_mDF53AF33575641845F47A3D69A3480B4F8F94BED (Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * __this, uint8_t ___key0, HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A *, uint8_t, HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *, const RuntimeMethod*))Dictionary_2_Add_m0ED5FEF3A5E5E1AFCE9C2F5CAB746A29C7730059_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>::Add(!0,!1)
inline void Dictionary_2_Add_m8B6F132CDEAED586903778201899953BBFA0CF4D (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * __this, uint8_t ___key0, INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 *, uint8_t, INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF*, const RuntimeMethod*))Dictionary_2_Add_m0ED5FEF3A5E5E1AFCE9C2F5CAB746A29C7730059_gshared)(__this, ___key0, ___value1, method);
}
// System.Void MLAPI.NetworkUpdateLoop::RegisterNetworkUpdate(MLAPI.INetworkUpdateSystem,MLAPI.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RegisterNetworkUpdate_mE13C8826C9FC2F7E90D6D266AF1899DCE87BF72E (RuntimeObject* ___updateSystem0, uint8_t ___updateStage1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>>::get_Item(!0)
inline HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8 (Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * (*) (Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_mEA5665B69C064636B283B6E324FAEA99DDC82A18_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>::Contains(!0)
inline bool HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5 (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *, RuntimeObject*, const RuntimeMethod*))HashSet_1_Contains_m91084DCF8BFB10517C15219307054B7B971AC8A5_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>::Add(!0)
inline bool HashSet_1_Add_m39C1361BA4787D42D0B4B763DE3CA2BF2B9081ED (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *, RuntimeObject*, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>::get_Count()
inline int32_t HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_inline (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>::get_Item(!0)
inline INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * __this, uint8_t ___key0, const RuntimeMethod* method)
{
	return ((  INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* (*) (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 *, uint8_t, const RuntimeMethod*))Dictionary_2_get_Item_mEA5665B69C064636B283B6E324FAEA99DDC82A18_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<MLAPI.NetworkUpdateStage,MLAPI.INetworkUpdateSystem[]>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m0EFE47617A50272B8BEE6F056BFC7CD4BB0CD036 (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * __this, uint8_t ___key0, INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 *, uint8_t, INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF*, const RuntimeMethod*))Dictionary_2_set_Item_m9215D95723C41AEB3C238805171E3D7928C90206_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>::CopyTo(!0[])
inline void HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19 (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * __this, INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* ___array0, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *, INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF*, const RuntimeMethod*))HashSet_1_CopyTo_mAF0CEBFD6D92A6464C518262E7C2F33E0FB2AB37_gshared)(__this, ___array0, method);
}
// System.Void MLAPI.NetworkUpdateLoop::UnregisterNetworkUpdate(MLAPI.INetworkUpdateSystem,MLAPI.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_UnregisterNetworkUpdate_m8D79D898B3EF6DB6947C211676D900D02EC74AC3 (RuntimeObject* ___updateSystem0, uint8_t ___updateStage1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<MLAPI.INetworkUpdateSystem>::Remove(!0)
inline bool HashSet_1_Remove_m143A6F0DFFD917675CA8D2DCBA5A98B8125B8F42 (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *, RuntimeObject*, const RuntimeMethod*))HashSet_1_Remove_m05A1DBBB51DD02B44F81FDB9ECDDED8304381F1D_gshared)(__this, ___item0, method);
}
// System.Void MLAPI.NetworkUpdateLoop::UnregisterLoopSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_UnregisterLoopSystems_m65AC0C228234850B2D4A25C42FC40CDD0412740F (const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop::RegisterLoopSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RegisterLoopSystems_m2180E854B7845C57316CD9E7863977F2DE5E4414 (const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem UnityEngine.LowLevel.PlayerLoop::GetCurrentPlayerLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  PlayerLoop_GetCurrentPlayerLoop_m5F27C5F3331C9C976BD6CAA61A241AE97CEA90EC (const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkInitialization::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkInitialization_CreateLoopSystem_m93F251B6F1B2D20AA97C4DC5A4424550544F1A42 (const RuntimeMethod* method);
// System.Boolean MLAPI.NetworkUpdateLoop::TryAddLoopSystem(UnityEngine.LowLevel.PlayerLoopSystem&,UnityEngine.LowLevel.PlayerLoopSystem,System.Type,MLAPI.NetworkUpdateLoop/LoopSystemPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55 (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * ___parentLoopSystem0, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  ___childLoopSystem1, Type_t * ___anchorSystemType2, int32_t ___loopSystemPosition3, const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkEarlyUpdate_CreateLoopSystem_m12C9CE6C40E56F7635D235E8D106745AAD77AA37 (const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkFixedUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkFixedUpdate_CreateLoopSystem_mEC86040F69E9DE40B761CE82E2B69CFC4460A431 (const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPreUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreUpdate_CreateLoopSystem_m7B6575CFD08C511A1914F22C7F850E8047C1537B (const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkUpdate_CreateLoopSystem_m415195C5A1631D153BC829CA0BF5D1532CB285ED (const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreLateUpdate_CreateLoopSystem_m693CBDBD03B76D394AE814044DCDB464B50E8182 (const RuntimeMethod* method);
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPostLateUpdate_CreateLoopSystem_mFDA8CE751D45DF8BB0E45CA62D8D9417DCB35A0A (const RuntimeMethod* method);
// System.Void UnityEngine.LowLevel.PlayerLoop::SetPlayerLoop(UnityEngine.LowLevel.PlayerLoopSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerLoop_SetPlayerLoop_m07E0BE8203AE23454CF82BBF4BAFF0F6FB4E294D (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  ___loop0, const RuntimeMethod* method);
// System.Boolean MLAPI.NetworkUpdateLoop::TryRemoveLoopSystem(UnityEngine.LowLevel.PlayerLoopSystem&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * ___parentLoopSystem0, Type_t * ___childSystemType1, const RuntimeMethod* method);
// System.Void UnityEngine.LowLevel.PlayerLoopSystem/UpdateFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319 (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2B13C1B74F4E81103D5F4BCB9D19E5AFAD305DB5 (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop::RunNetworkUpdateStage(MLAPI.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6 (uint8_t ___updateStage0, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE135C8BF42D12E4C497D880418869652E8D66BA9 (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9A245CFBAE70653A9AAEBAC0931087A5B6AA077 (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4892922627A2134C6E433C5FB213845895DD6EFC (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5F608C89C8980413AE77A02C7FC3307601C186ED (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6D20CD4786B764C1EE32107C65DB7B0DD57C837 (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * __this, const RuntimeMethod* method);
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B5EFFE96354374A0E1F7AC8124E34EEA35620FA (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * __this, const RuntimeMethod* method);
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
// System.Void MLAPI.NetworkUpdateLoop::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop__cctor_m09536AB1372ABB3A800B44A6E9F35B70144AA7B6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m8B6F132CDEAED586903778201899953BBFA0CF4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mDF53AF33575641845F47A3D69A3480B4F8F94BED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3D70CDB61CF9E4B42263527C4E9A71028F8C3A9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE215610E38669A61377EA244F2904C23FBDD25CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m3812ADEA6D8A1B152830B4F332386F575E595B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint8_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// s_UpdateSystem_Sets = new Dictionary<NetworkUpdateStage, HashSet<INetworkUpdateSystem>>();
		Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * L_0 = (Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A *)il2cpp_codegen_object_new(Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE215610E38669A61377EA244F2904C23FBDD25CC(L_0, /*hidden argument*/Dictionary_2__ctor_mE215610E38669A61377EA244F2904C23FBDD25CC_RuntimeMethod_var);
		((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->set_s_UpdateSystem_Sets_0(L_0);
		// s_UpdateSystem_Arrays = new Dictionary<NetworkUpdateStage, INetworkUpdateSystem[]>();
		Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * L_1 = (Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 *)il2cpp_codegen_object_new(Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3D70CDB61CF9E4B42263527C4E9A71028F8C3A9A(L_1, /*hidden argument*/Dictionary_2__ctor_m3D70CDB61CF9E4B42263527C4E9A71028F8C3A9A_RuntimeMethod_var);
		((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->set_s_UpdateSystem_Arrays_1(L_1);
		// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_4;
		L_4 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
	}

IL_0029:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005c;
		}

IL_002b:
		{
			// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
			RuntimeObject* L_6 = V_0;
			NullCheck(L_6);
			RuntimeObject * L_7;
			L_7 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
			V_1 = ((*(uint8_t*)((uint8_t*)UnBox(L_7, NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_il2cpp_TypeInfo_var))));
			// s_UpdateSystem_Sets.Add(updateStage, new HashSet<INetworkUpdateSystem>());
			Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * L_8 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Sets_0();
			uint8_t L_9 = V_1;
			HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_10 = (HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA *)il2cpp_codegen_object_new(HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA_il2cpp_TypeInfo_var);
			HashSet_1__ctor_m3812ADEA6D8A1B152830B4F332386F575E595B9A(L_10, /*hidden argument*/HashSet_1__ctor_m3812ADEA6D8A1B152830B4F332386F575E595B9A_RuntimeMethod_var);
			NullCheck(L_8);
			Dictionary_2_Add_mDF53AF33575641845F47A3D69A3480B4F8F94BED(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_Add_mDF53AF33575641845F47A3D69A3480B4F8F94BED_RuntimeMethod_var);
			// s_UpdateSystem_Arrays.Add(updateStage, new INetworkUpdateSystem[k_UpdateSystem_InitialArrayCapacity]);
			Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * L_11 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Arrays_1();
			uint8_t L_12 = V_1;
			INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_13 = (INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF*)(INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF*)SZArrayNew(INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
			NullCheck(L_11);
			Dictionary_2_Add_m8B6F132CDEAED586903778201899953BBFA0CF4D(L_11, L_12, L_13, /*hidden argument*/Dictionary_2_Add_m8B6F132CDEAED586903778201899953BBFA0CF4D_RuntimeMethod_var);
		}

IL_005c:
		{
			// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_002b;
			}
		}

IL_0064:
		{
			IL2CPP_LEAVE(0x77, FINALLY_0066);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0066;
	}

FINALLY_0066:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_16, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_17 = V_2;
			if (!L_17)
			{
				goto IL_0076;
			}
		}

IL_0070:
		{
			RuntimeObject* L_18 = V_2;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_0076:
		{
			IL2CPP_END_FINALLY(102)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(102)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x77, IL_0077)
	}

IL_0077:
	{
		// }
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::RegisterAllNetworkUpdates(MLAPI.INetworkUpdateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RegisterAllNetworkUpdates_m9B7DE2405F9BDCEF3A1B5B7FD1C38E6CEC5F723D (RuntimeObject* ___updateSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint8_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0017:
		{
			// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_1 = ((*(uint8_t*)((uint8_t*)UnBox(L_5, NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_il2cpp_TypeInfo_var))));
			// RegisterNetworkUpdate(updateSystem, updateStage);
			RuntimeObject* L_6 = ___updateSystem0;
			uint8_t L_7 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
			NetworkUpdateLoop_RegisterNetworkUpdate_mE13C8826C9FC2F7E90D6D266AF1899DCE87BF72E(L_6, L_7, /*hidden argument*/NULL);
		}

IL_002a:
		{
			// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0017;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_2;
			if (!L_11)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::RegisterNetworkUpdate(MLAPI.INetworkUpdateSystem,MLAPI.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RegisterNetworkUpdate_mE13C8826C9FC2F7E90D6D266AF1899DCE87BF72E (RuntimeObject* ___updateSystem0, uint8_t ___updateStage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m0EFE47617A50272B8BEE6F056BFC7CD4BB0CD036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m39C1361BA4787D42D0B4B763DE3CA2BF2B9081ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * V_0 = NULL;
	int32_t V_1 = 0;
	INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* V_2 = NULL;
	int32_t V_3 = 0;
	INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* V_4 = NULL;
	{
		// var sysSet = s_UpdateSystem_Sets[updateStage];
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * L_0 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Sets_0();
		uint8_t L_1 = ___updateStage1;
		NullCheck(L_0);
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_2;
		L_2 = Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8_RuntimeMethod_var);
		V_0 = L_2;
		// if (!sysSet.Contains(updateSystem))
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_3 = V_0;
		RuntimeObject* L_4 = ___updateSystem0;
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5(L_3, L_4, /*hidden argument*/HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5_RuntimeMethod_var);
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		// sysSet.Add(updateSystem);
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_6 = V_0;
		RuntimeObject* L_7 = ___updateSystem0;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Add_m39C1361BA4787D42D0B4B763DE3CA2BF2B9081ED(L_6, L_7, /*hidden argument*/HashSet_1_Add_m39C1361BA4787D42D0B4B763DE3CA2BF2B9081ED_RuntimeMethod_var);
		// int setLen = sysSet.Count;
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_inline(L_9, /*hidden argument*/HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_RuntimeMethod_var);
		V_1 = L_10;
		// var sysArr = s_UpdateSystem_Arrays[updateStage];
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * L_11 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Arrays_1();
		uint8_t L_12 = ___updateStage1;
		NullCheck(L_11);
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_13;
		L_13 = Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B_RuntimeMethod_var);
		V_2 = L_13;
		// int arrLen = sysArr.Length;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_14 = V_2;
		NullCheck(L_14);
		V_3 = ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)));
		// if (setLen > arrLen)
		int32_t L_15 = V_1;
		int32_t L_16 = V_3;
		if ((((int32_t)L_15) <= ((int32_t)L_16)))
		{
			goto IL_0053;
		}
	}
	{
		// sysArr = s_UpdateSystem_Arrays[updateStage] = new INetworkUpdateSystem[arrLen *= 2];
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * L_17 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Arrays_1();
		uint8_t L_18 = ___updateStage1;
		int32_t L_19 = V_3;
		int32_t L_20 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2));
		V_3 = L_20;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_21 = (INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF*)(INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF*)SZArrayNew(INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF_il2cpp_TypeInfo_var, (uint32_t)L_20);
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_22 = L_21;
		V_4 = L_22;
		NullCheck(L_17);
		Dictionary_2_set_Item_m0EFE47617A50272B8BEE6F056BFC7CD4BB0CD036(L_17, L_18, L_22, /*hidden argument*/Dictionary_2_set_Item_m0EFE47617A50272B8BEE6F056BFC7CD4BB0CD036_RuntimeMethod_var);
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_23 = V_4;
		V_2 = L_23;
	}

IL_0053:
	{
		// sysSet.CopyTo(sysArr);
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_24 = V_0;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_25 = V_2;
		NullCheck(L_24);
		HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19(L_24, L_25, /*hidden argument*/HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19_RuntimeMethod_var);
		// if (setLen < arrLen)
		int32_t L_26 = V_1;
		int32_t L_27 = V_3;
		if ((((int32_t)L_26) >= ((int32_t)L_27)))
		{
			goto IL_0062;
		}
	}
	{
		// sysArr[setLen] = null;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_28 = V_2;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, NULL);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(L_29), (RuntimeObject*)NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::UnregisterAllNetworkUpdates(MLAPI.INetworkUpdateSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_UnregisterAllNetworkUpdates_m02BB4580104D3054944E50FB1C8219423322C031 (RuntimeObject* ___updateSystem0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	uint8_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_2;
		L_2 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002a;
		}

IL_0017:
		{
			// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			V_1 = ((*(uint8_t*)((uint8_t*)UnBox(L_5, NetworkUpdateStage_t9234BDF968545C0351B6CC20D0EFE1D357E618F1_il2cpp_TypeInfo_var))));
			// UnregisterNetworkUpdate(updateSystem, updateStage);
			RuntimeObject* L_6 = ___updateSystem0;
			uint8_t L_7 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
			NetworkUpdateLoop_UnregisterNetworkUpdate_m8D79D898B3EF6DB6947C211676D900D02EC74AC3(L_6, L_7, /*hidden argument*/NULL);
		}

IL_002a:
		{
			// foreach (NetworkUpdateStage updateStage in Enum.GetValues(typeof(NetworkUpdateStage)))
			RuntimeObject* L_8 = V_0;
			NullCheck(L_8);
			bool L_9;
			L_9 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_8);
			if (L_9)
			{
				goto IL_0017;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x45, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_10 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_11 = V_2;
			if (!L_11)
			{
				goto IL_0044;
			}
		}

IL_003e:
		{
			RuntimeObject* L_12 = V_2;
			NullCheck(L_12);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_12);
		}

IL_0044:
		{
			IL2CPP_END_FINALLY(52)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::UnregisterNetworkUpdate(MLAPI.INetworkUpdateSystem,MLAPI.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_UnregisterNetworkUpdate_m8D79D898B3EF6DB6947C211676D900D02EC74AC3 (RuntimeObject* ___updateSystem0, uint8_t ___updateStage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m143A6F0DFFD917675CA8D2DCBA5A98B8125B8F42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * V_0 = NULL;
	int32_t V_1 = 0;
	INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// var sysSet = s_UpdateSystem_Sets[updateStage];
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		Dictionary_2_t71A62CE7805965B9A0FB4CFE11DA627826DC488A * L_0 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Sets_0();
		uint8_t L_1 = ___updateStage1;
		NullCheck(L_0);
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_2;
		L_2 = Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m576A770FFF1090F9DEC503633806555FBC57A4B8_RuntimeMethod_var);
		V_0 = L_2;
		// if (sysSet.Contains(updateSystem))
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_3 = V_0;
		RuntimeObject* L_4 = ___updateSystem0;
		NullCheck(L_3);
		bool L_5;
		L_5 = HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5(L_3, L_4, /*hidden argument*/HashSet_1_Contains_mE5519C84EEF9F74F0F1D619E877C30D0FB3AD2B5_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// sysSet.Remove(updateSystem);
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_6 = V_0;
		RuntimeObject* L_7 = ___updateSystem0;
		NullCheck(L_6);
		bool L_8;
		L_8 = HashSet_1_Remove_m143A6F0DFFD917675CA8D2DCBA5A98B8125B8F42(L_6, L_7, /*hidden argument*/HashSet_1_Remove_m143A6F0DFFD917675CA8D2DCBA5A98B8125B8F42_RuntimeMethod_var);
		// int setLen = sysSet.Count;
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_inline(L_9, /*hidden argument*/HashSet_1_get_Count_mE4061B29D372D15F420A282AF59ABC8CE0F9E70D_RuntimeMethod_var);
		V_1 = L_10;
		// var sysArr = s_UpdateSystem_Arrays[updateStage];
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * L_11 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Arrays_1();
		uint8_t L_12 = ___updateStage1;
		NullCheck(L_11);
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_13;
		L_13 = Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B(L_11, L_12, /*hidden argument*/Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B_RuntimeMethod_var);
		V_2 = L_13;
		// int arrLen = sysArr.Length;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_14 = V_2;
		NullCheck(L_14);
		V_3 = ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)));
		// sysSet.CopyTo(sysArr);
		HashSet_1_t3750AABC8800FF6B79C0EA88C25A324749D54FEA * L_15 = V_0;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_16 = V_2;
		NullCheck(L_15);
		HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19(L_15, L_16, /*hidden argument*/HashSet_1_CopyTo_mF8A96BF64D5C561FA457C9B98D825B04C2BC0E19_RuntimeMethod_var);
		// if (setLen < arrLen)
		int32_t L_17 = V_1;
		int32_t L_18 = V_3;
		if ((((int32_t)L_17) >= ((int32_t)L_18)))
		{
			goto IL_0043;
		}
	}
	{
		// sysArr[setLen] = null;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_19 = V_2;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, NULL);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::RunNetworkUpdateStage(MLAPI.NetworkUpdateStage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6 (uint8_t ___updateStage0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkUpdateSystem_tF0A6742AE7072BDA8CBECF8CF58495FF3A1992E7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		// UpdateStage = updateStage;
		uint8_t L_0 = ___updateStage0;
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->set_UpdateStage_3(L_0);
		// var sysArr = s_UpdateSystem_Arrays[updateStage];
		Dictionary_2_t25B6B4F567171406EB20F52A7371531CB222A1E3 * L_1 = ((NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_StaticFields*)il2cpp_codegen_static_fields_for(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var))->get_s_UpdateSystem_Arrays_1();
		uint8_t L_2 = ___updateStage0;
		NullCheck(L_1);
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_3;
		L_3 = Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m20CB92BC19A9BB653DCC8B65CF4E71BCB62E2F7B_RuntimeMethod_var);
		V_0 = L_3;
		// int arrLen = sysArr.Length;
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_4 = V_0;
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		// for (int curIdx = 0; curIdx < arrLen; curIdx++)
		V_2 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		// var curSys = sysArr[curIdx];
		INetworkUpdateSystemU5BU5D_t381FC3F8CCE67FF664C83354C59EDEC99FE8E7BF* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_3 = L_8;
		// if (curSys == null)
		RuntimeObject* L_9 = V_3;
		if (!L_9)
		{
			goto IL_0030;
		}
	}
	{
		// curSys.NetworkUpdate(updateStage);
		RuntimeObject* L_10 = V_3;
		uint8_t L_11 = ___updateStage0;
		NullCheck(L_10);
		InterfaceActionInvoker1< uint8_t >::Invoke(0 /* System.Void MLAPI.INetworkUpdateSystem::NetworkUpdate(MLAPI.NetworkUpdateStage) */, INetworkUpdateSystem_tF0A6742AE7072BDA8CBECF8CF58495FF3A1992E7_il2cpp_TypeInfo_var, L_10, L_11);
		// for (int curIdx = 0; curIdx < arrLen; curIdx++)
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002c:
	{
		// for (int curIdx = 0; curIdx < arrLen; curIdx++)
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_001a;
		}
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_Initialize_m086892D5B1F2D59F5B6A650C1A361CC88AF382A2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnregisterLoopSystems();
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_UnregisterLoopSystems_m65AC0C228234850B2D4A25C42FC40CDD0412740F(/*hidden argument*/NULL);
		// RegisterLoopSystems();
		NetworkUpdateLoop_RegisterLoopSystems_m2180E854B7845C57316CD9E7863977F2DE5E4414(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean MLAPI.NetworkUpdateLoop::TryAddLoopSystem(UnityEngine.LowLevel.PlayerLoopSystem&,UnityEngine.LowLevel.PlayerLoopSystem,System.Type,MLAPI.NetworkUpdateLoop/LoopSystemPosition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55 (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * ___parentLoopSystem0, PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  ___childLoopSystem1, Type_t * ___anchorSystemType2, int32_t ___loopSystemPosition3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B13_0 = 0;
	{
		// int systemPosition = -1;
		V_0 = (-1);
		// if (anchorSystemType != null)
		Type_t * L_0 = ___anchorSystemType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_0, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// for (int i = 0; i < parentLoopSystem.subSystemList.Length; i++)
		V_2 = 0;
		goto IL_0038;
	}

IL_000f:
	{
		// var subsystem = parentLoopSystem.subSystemList[i];
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_2 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_3 = L_2->get_subSystemList_1();
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		// if (subsystem.type == anchorSystemType)
		Type_t * L_7 = L_6.get_type_0();
		Type_t * L_8 = ___anchorSystemType2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0034;
		}
	}
	{
		// systemPosition = loopSystemPosition == LoopSystemPosition.After ? i + 1 : i;
		int32_t L_10 = ___loopSystemPosition3;
		if (!L_10)
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_11 = V_2;
		G_B6_0 = L_11;
		goto IL_0031;
	}

IL_002e:
	{
		int32_t L_12 = V_2;
		G_B6_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0031:
	{
		V_0 = G_B6_0;
		// break;
		goto IL_0054;
	}

IL_0034:
	{
		// for (int i = 0; i < parentLoopSystem.subSystemList.Length; i++)
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0038:
	{
		// for (int i = 0; i < parentLoopSystem.subSystemList.Length; i++)
		int32_t L_14 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_15 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_16 = L_15->get_subSystemList_1();
		NullCheck(L_16);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))))
		{
			goto IL_000f;
		}
	}
	{
		// }
		goto IL_0054;
	}

IL_0045:
	{
		// systemPosition = loopSystemPosition == LoopSystemPosition.After ? parentLoopSystem.subSystemList.Length : 0;
		int32_t L_17 = ___loopSystemPosition3;
		if (!L_17)
		{
			goto IL_004b;
		}
	}
	{
		G_B13_0 = 0;
		goto IL_0053;
	}

IL_004b:
	{
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_18 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_19 = L_18->get_subSystemList_1();
		NullCheck(L_19);
		G_B13_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)));
	}

IL_0053:
	{
		V_0 = G_B13_0;
	}

IL_0054:
	{
		// if (systemPosition == -1) return false;
		int32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_005a;
		}
	}
	{
		// if (systemPosition == -1) return false;
		return (bool)0;
	}

IL_005a:
	{
		// var newSubsystemList = new PlayerLoopSystem[parentLoopSystem.subSystemList.Length + 1];
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_21 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_22 = L_21->get_subSystemList_1();
		NullCheck(L_22);
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_23 = (PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17*)(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17*)SZArrayNew(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length))), (int32_t)1)));
		V_1 = L_23;
		// if (systemPosition > 0) Array.Copy(parentLoopSystem.subSystemList, newSubsystemList, systemPosition);
		int32_t L_24 = V_0;
		if ((((int32_t)L_24) <= ((int32_t)0)))
		{
			goto IL_007b;
		}
	}
	{
		// if (systemPosition > 0) Array.Copy(parentLoopSystem.subSystemList, newSubsystemList, systemPosition);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_25 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_26 = L_25->get_subSystemList_1();
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_27 = V_1;
		int32_t L_28 = V_0;
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_26, (RuntimeArray *)(RuntimeArray *)L_27, L_28, /*hidden argument*/NULL);
	}

IL_007b:
	{
		// newSubsystemList[systemPosition] = childLoopSystem;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_29 = V_1;
		int32_t L_30 = V_0;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_31 = ___childLoopSystem1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C )L_31);
		// if (systemPosition < parentLoopSystem.subSystemList.Length) Array.Copy(parentLoopSystem.subSystemList, systemPosition, newSubsystemList, systemPosition + 1, parentLoopSystem.subSystemList.Length - systemPosition);
		int32_t L_32 = V_0;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_33 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_34 = L_33->get_subSystemList_1();
		NullCheck(L_34);
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))))
		{
			goto IL_00a8;
		}
	}
	{
		// if (systemPosition < parentLoopSystem.subSystemList.Length) Array.Copy(parentLoopSystem.subSystemList, systemPosition, newSubsystemList, systemPosition + 1, parentLoopSystem.subSystemList.Length - systemPosition);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_35 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_36 = L_35->get_subSystemList_1();
		int32_t L_37 = V_0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_38 = V_1;
		int32_t L_39 = V_0;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_40 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_41 = L_40->get_subSystemList_1();
		NullCheck(L_41);
		int32_t L_42 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_36, L_37, (RuntimeArray *)(RuntimeArray *)L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length))), (int32_t)L_42)), /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// parentLoopSystem.subSystemList = newSubsystemList;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_43 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_44 = V_1;
		L_43->set_subSystemList_1(L_44);
		// return true;
		return (bool)1;
	}
}
// System.Boolean MLAPI.NetworkUpdateLoop::TryRemoveLoopSystem(UnityEngine.LowLevel.PlayerLoopSystem&,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * ___parentLoopSystem0, Type_t * ___childSystemType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// int systemPosition = -1;
		V_0 = (-1);
		// for (int i = 0; i < parentLoopSystem.subSystemList.Length; i++)
		V_2 = 0;
		goto IL_0027;
	}

IL_0006:
	{
		// var subsystem = parentLoopSystem.subSystemList[i];
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_0 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_1 = L_0->get_subSystemList_1();
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// if (subsystem.type == childSystemType)
		Type_t * L_5 = L_4.get_type_0();
		Type_t * L_6 = ___childSystemType1;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0023;
		}
	}
	{
		// systemPosition = i;
		int32_t L_8 = V_2;
		V_0 = L_8;
		// break;
		goto IL_0032;
	}

IL_0023:
	{
		// for (int i = 0; i < parentLoopSystem.subSystemList.Length; i++)
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0027:
	{
		// for (int i = 0; i < parentLoopSystem.subSystemList.Length; i++)
		int32_t L_10 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_11 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_12 = L_11->get_subSystemList_1();
		NullCheck(L_12);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0006;
		}
	}

IL_0032:
	{
		// if (systemPosition == -1) return false;
		int32_t L_13 = V_0;
		if ((!(((uint32_t)L_13) == ((uint32_t)(-1)))))
		{
			goto IL_0038;
		}
	}
	{
		// if (systemPosition == -1) return false;
		return (bool)0;
	}

IL_0038:
	{
		// var newSubsystemList = new PlayerLoopSystem[parentLoopSystem.subSystemList.Length - 1];
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_14 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_15 = L_14->get_subSystemList_1();
		NullCheck(L_15);
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_16 = (PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17*)(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17*)SZArrayNew(PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))), (int32_t)1)));
		V_1 = L_16;
		// if (systemPosition > 0) Array.Copy(parentLoopSystem.subSystemList, newSubsystemList, systemPosition);
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		// if (systemPosition > 0) Array.Copy(parentLoopSystem.subSystemList, newSubsystemList, systemPosition);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_18 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_19 = L_18->get_subSystemList_1();
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_20 = V_1;
		int32_t L_21 = V_0;
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_19, (RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// if (systemPosition < parentLoopSystem.subSystemList.Length - 1) Array.Copy(parentLoopSystem.subSystemList, systemPosition + 1, newSubsystemList, systemPosition, parentLoopSystem.subSystemList.Length - systemPosition - 1);
		int32_t L_22 = V_0;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_23 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_24 = L_23->get_subSystemList_1();
		NullCheck(L_24);
		if ((((int32_t)L_22) >= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), (int32_t)1)))))
		{
			goto IL_0082;
		}
	}
	{
		// if (systemPosition < parentLoopSystem.subSystemList.Length - 1) Array.Copy(parentLoopSystem.subSystemList, systemPosition + 1, newSubsystemList, systemPosition, parentLoopSystem.subSystemList.Length - systemPosition - 1);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_25 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_26 = L_25->get_subSystemList_1();
		int32_t L_27 = V_0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_28 = V_1;
		int32_t L_29 = V_0;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_30 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_31 = L_30->get_subSystemList_1();
		NullCheck(L_31);
		int32_t L_32 = V_0;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_26, ((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)), (RuntimeArray *)(RuntimeArray *)L_28, L_29, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), (int32_t)L_32)), (int32_t)1)), /*hidden argument*/NULL);
	}

IL_0082:
	{
		// parentLoopSystem.subSystemList = newSubsystemList;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_33 = ___parentLoopSystem0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_34 = V_1;
		L_33->set_subSystemList_1(L_34);
		// return true;
		return (bool)1;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::RegisterLoopSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_RegisterLoopSystems_m2180E854B7845C57316CD9E7863977F2DE5E4414 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyUpdate_t683E44A9E9836945CA0E577E02CA23D9E88B5095_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedUpdate_t4607F2480384D5A8F0BF5E9F9538A48BFC87C323_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Initialization_t7B2536C5EC00EAB0948F09401B106F9A2BB5D7B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhysicsUpdate_tF321BF0A833E955AED90F182BBC9D6D7D40F2F25_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerSendFrameComplete_tFCB4A131339039D456553596DC33CD625CFF7AAC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostLateUpdate_tB0EEFB945E792D3FC9007281EA8A6BADD1A0231A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreLateUpdate_tCA98ABCD94D2218D5F53C5DC83C455011E9550A2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreUpdate_tC8EA9C6C460E1A7DC72849545F052D2D3E297775_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptRunBehaviourFixedUpdate_t7FE48475D8C09E8A4FF93E60B9CEA5B69EC9B203_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptRunBehaviourLateUpdate_t58F4C9331E2958013C6CB7FEF18E370AD5043B9A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptRunBehaviourUpdate_tAAEB9BAF1DB9036DFA153F433C2D719A7BC30536_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScriptRunDelayedStartupFrame_tCD3EB2C533206E2243EDBEC265AE32D963A12298_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * V_2 = NULL;
	{
		// var rootPlayerLoop = PlayerLoop.GetCurrentPlayerLoop();
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_0;
		L_0 = PlayerLoop_GetCurrentPlayerLoop_m5F27C5F3331C9C976BD6CAA61A241AE97CEA90EC(/*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < rootPlayerLoop.subSystemList.Length; i++)
		V_1 = 0;
		goto IL_016f;
	}

IL_000d:
	{
		// ref var currentSystem = ref rootPlayerLoop.subSystemList[i];
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_1 = V_0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_2 = L_1.get_subSystemList_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		V_2 = (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// if (currentSystem.type == typeof(Initialization))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_4 = V_2;
		Type_t * L_5 = L_4->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Initialization_t7B2536C5EC00EAB0948F09401B106F9A2BB5D7B4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// TryAddLoopSystem(ref currentSystem, NetworkInitialization.CreateLoopSystem(), null, LoopSystemPosition.After);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_9 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_10;
		L_10 = NetworkInitialization_CreateLoopSystem_m93F251B6F1B2D20AA97C4DC5A4424550544F1A42(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_9, L_10, (Type_t *)NULL, 0, /*hidden argument*/NULL);
		// }
		goto IL_016b;
	}

IL_0044:
	{
		// else if (currentSystem.type == typeof(EarlyUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_12 = V_2;
		Type_t * L_13 = L_12->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_14 = { reinterpret_cast<intptr_t> (EarlyUpdate_t683E44A9E9836945CA0E577E02CA23D9E88B5095_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_15;
		L_15 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_14, /*hidden argument*/NULL);
		bool L_16;
		L_16 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_13, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0077;
		}
	}
	{
		// TryAddLoopSystem(ref currentSystem, NetworkEarlyUpdate.CreateLoopSystem(), typeof(EarlyUpdate.ScriptRunDelayedStartupFrame), LoopSystemPosition.Before);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_17 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_18;
		L_18 = NetworkEarlyUpdate_CreateLoopSystem_m12C9CE6C40E56F7635D235E8D106745AAD77AA37(/*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (ScriptRunDelayedStartupFrame_tCD3EB2C533206E2243EDBEC265AE32D963A12298_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_17, L_18, L_20, 1, /*hidden argument*/NULL);
		// }
		goto IL_016b;
	}

IL_0077:
	{
		// else if (currentSystem.type == typeof(FixedUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_22 = V_2;
		Type_t * L_23 = L_22->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (FixedUpdate_t4607F2480384D5A8F0BF5E9F9538A48BFC87C323_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00aa;
		}
	}
	{
		// TryAddLoopSystem(ref currentSystem, NetworkFixedUpdate.CreateLoopSystem(), typeof(FixedUpdate.ScriptRunBehaviourFixedUpdate), LoopSystemPosition.Before);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_27 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_28;
		L_28 = NetworkFixedUpdate_CreateLoopSystem_mEC86040F69E9DE40B761CE82E2B69CFC4460A431(/*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_29 = { reinterpret_cast<intptr_t> (ScriptRunBehaviourFixedUpdate_t7FE48475D8C09E8A4FF93E60B9CEA5B69EC9B203_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_30;
		L_30 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_31;
		L_31 = NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_27, L_28, L_30, 1, /*hidden argument*/NULL);
		// }
		goto IL_016b;
	}

IL_00aa:
	{
		// else if (currentSystem.type == typeof(PreUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_32 = V_2;
		Type_t * L_33 = L_32->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_34 = { reinterpret_cast<intptr_t> (PreUpdate_tC8EA9C6C460E1A7DC72849545F052D2D3E297775_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_35;
		L_35 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_34, /*hidden argument*/NULL);
		bool L_36;
		L_36 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_33, L_35, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00dd;
		}
	}
	{
		// TryAddLoopSystem(ref currentSystem, NetworkPreUpdate.CreateLoopSystem(), typeof(PreUpdate.PhysicsUpdate), LoopSystemPosition.Before);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_37 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_38;
		L_38 = NetworkPreUpdate_CreateLoopSystem_m7B6575CFD08C511A1914F22C7F850E8047C1537B(/*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_39 = { reinterpret_cast<intptr_t> (PhysicsUpdate_tF321BF0A833E955AED90F182BBC9D6D7D40F2F25_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40;
		L_40 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_37, L_38, L_40, 1, /*hidden argument*/NULL);
		// }
		goto IL_016b;
	}

IL_00dd:
	{
		// else if (currentSystem.type == typeof(Update))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_42 = V_2;
		Type_t * L_43 = L_42->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_44 = { reinterpret_cast<intptr_t> (Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_45;
		L_45 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_44, /*hidden argument*/NULL);
		bool L_46;
		L_46 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_43, L_45, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_010d;
		}
	}
	{
		// TryAddLoopSystem(ref currentSystem, NetworkUpdate.CreateLoopSystem(), typeof(Update.ScriptRunBehaviourUpdate), LoopSystemPosition.Before);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_47 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_48;
		L_48 = NetworkUpdate_CreateLoopSystem_m415195C5A1631D153BC829CA0BF5D1532CB285ED(/*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (ScriptRunBehaviourUpdate_tAAEB9BAF1DB9036DFA153F433C2D719A7BC30536_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_47, L_48, L_50, 1, /*hidden argument*/NULL);
		// }
		goto IL_016b;
	}

IL_010d:
	{
		// else if (currentSystem.type == typeof(PreLateUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_52 = V_2;
		Type_t * L_53 = L_52->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_54 = { reinterpret_cast<intptr_t> (PreLateUpdate_tCA98ABCD94D2218D5F53C5DC83C455011E9550A2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_55;
		L_55 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_54, /*hidden argument*/NULL);
		bool L_56;
		L_56 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_53, L_55, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_013d;
		}
	}
	{
		// TryAddLoopSystem(ref currentSystem, NetworkPreLateUpdate.CreateLoopSystem(), typeof(PreLateUpdate.ScriptRunBehaviourLateUpdate), LoopSystemPosition.Before);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_57 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_58;
		L_58 = NetworkPreLateUpdate_CreateLoopSystem_m693CBDBD03B76D394AE814044DCDB464B50E8182(/*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_59 = { reinterpret_cast<intptr_t> (ScriptRunBehaviourLateUpdate_t58F4C9331E2958013C6CB7FEF18E370AD5043B9A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_60;
		L_60 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_59, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_57, L_58, L_60, 1, /*hidden argument*/NULL);
		// }
		goto IL_016b;
	}

IL_013d:
	{
		// else if (currentSystem.type == typeof(PostLateUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_62 = V_2;
		Type_t * L_63 = L_62->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_64 = { reinterpret_cast<intptr_t> (PostLateUpdate_tB0EEFB945E792D3FC9007281EA8A6BADD1A0231A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_65;
		L_65 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_64, /*hidden argument*/NULL);
		bool L_66;
		L_66 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_63, L_65, /*hidden argument*/NULL);
		if (!L_66)
		{
			goto IL_016b;
		}
	}
	{
		// TryAddLoopSystem(ref currentSystem, NetworkPostLateUpdate.CreateLoopSystem(), typeof(PostLateUpdate.PlayerSendFrameComplete), LoopSystemPosition.After);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_67 = V_2;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_68;
		L_68 = NetworkPostLateUpdate_CreateLoopSystem_mFDA8CE751D45DF8BB0E45CA62D8D9417DCB35A0A(/*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_69 = { reinterpret_cast<intptr_t> (PlayerSendFrameComplete_tFCB4A131339039D456553596DC33CD625CFF7AAC_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_70;
		L_70 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_69, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_71;
		L_71 = NetworkUpdateLoop_TryAddLoopSystem_m51E941A96170FD555B8A3F3714D345E9C37FEB55((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_67, L_68, L_70, 0, /*hidden argument*/NULL);
	}

IL_016b:
	{
		// for (int i = 0; i < rootPlayerLoop.subSystemList.Length; i++)
		int32_t L_72 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_016f:
	{
		// for (int i = 0; i < rootPlayerLoop.subSystemList.Length; i++)
		int32_t L_73 = V_1;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_74 = V_0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_75 = L_74.get_subSystemList_1();
		NullCheck(L_75);
		if ((((int32_t)L_73) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_75)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// PlayerLoop.SetPlayerLoop(rootPlayerLoop);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_76 = V_0;
		PlayerLoop_SetPlayerLoop_m07E0BE8203AE23454CF82BBF4BAFF0F6FB4E294D(L_76, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop::UnregisterLoopSystems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkUpdateLoop_UnregisterLoopSystems_m65AC0C228234850B2D4A25C42FC40CDD0412740F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EarlyUpdate_t683E44A9E9836945CA0E577E02CA23D9E88B5095_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FixedUpdate_t4607F2480384D5A8F0BF5E9F9538A48BFC87C323_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Initialization_t7B2536C5EC00EAB0948F09401B106F9A2BB5D7B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PostLateUpdate_tB0EEFB945E792D3FC9007281EA8A6BADD1A0231A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreLateUpdate_tCA98ABCD94D2218D5F53C5DC83C455011E9550A2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PreUpdate_tC8EA9C6C460E1A7DC72849545F052D2D3E297775_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * V_2 = NULL;
	{
		// var rootPlayerLoop = PlayerLoop.GetCurrentPlayerLoop();
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_0;
		L_0 = PlayerLoop_GetCurrentPlayerLoop_m5F27C5F3331C9C976BD6CAA61A241AE97CEA90EC(/*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < rootPlayerLoop.subSystemList.Length; i++)
		V_1 = 0;
		goto IL_014b;
	}

IL_000d:
	{
		// ref var currentSystem = ref rootPlayerLoop.subSystemList[i];
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_1 = V_0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_2 = L_1.get_subSystemList_1();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		V_2 = (PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)));
		// if (currentSystem.type == typeof(Initialization))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_4 = V_2;
		Type_t * L_5 = L_4->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Initialization_t7B2536C5EC00EAB0948F09401B106F9A2BB5D7B4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		bool L_8;
		L_8 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// TryRemoveLoopSystem(ref currentSystem, typeof(NetworkInitialization));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_9 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_9, L_11, /*hidden argument*/NULL);
		// }
		goto IL_0147;
	}

IL_0047:
	{
		// else if (currentSystem.type == typeof(EarlyUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_13 = V_2;
		Type_t * L_14 = L_13->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_15 = { reinterpret_cast<intptr_t> (EarlyUpdate_t683E44A9E9836945CA0E577E02CA23D9E88B5095_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_16;
		L_16 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_15, /*hidden argument*/NULL);
		bool L_17;
		L_17 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_14, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0074;
		}
	}
	{
		// TryRemoveLoopSystem(ref currentSystem, typeof(NetworkEarlyUpdate));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_18 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_18, L_20, /*hidden argument*/NULL);
		// }
		goto IL_0147;
	}

IL_0074:
	{
		// else if (currentSystem.type == typeof(FixedUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_22 = V_2;
		Type_t * L_23 = L_22->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_24 = { reinterpret_cast<intptr_t> (FixedUpdate_t4607F2480384D5A8F0BF5E9F9538A48BFC87C323_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_25;
		L_25 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_24, /*hidden argument*/NULL);
		bool L_26;
		L_26 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_23, L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00a1;
		}
	}
	{
		// TryRemoveLoopSystem(ref currentSystem, typeof(NetworkFixedUpdate));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_27 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29;
		L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_27, L_29, /*hidden argument*/NULL);
		// }
		goto IL_0147;
	}

IL_00a1:
	{
		// else if (currentSystem.type == typeof(PreUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_31 = V_2;
		Type_t * L_32 = L_31->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (PreUpdate_tC8EA9C6C460E1A7DC72849545F052D2D3E297775_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		bool L_35;
		L_35 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_32, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00cb;
		}
	}
	{
		// TryRemoveLoopSystem(ref currentSystem, typeof(NetworkPreUpdate));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_36 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_37, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_36, L_38, /*hidden argument*/NULL);
		// }
		goto IL_0147;
	}

IL_00cb:
	{
		// else if (currentSystem.type == typeof(Update))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_40 = V_2;
		Type_t * L_41 = L_40->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_42 = { reinterpret_cast<intptr_t> (Update_t32B2954EA10F244F78F2D823FD13488A82A4D9EE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_43;
		L_43 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_42, /*hidden argument*/NULL);
		bool L_44;
		L_44 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_41, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_00f5;
		}
	}
	{
		// TryRemoveLoopSystem(ref currentSystem, typeof(NetworkUpdate));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_45 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_46 = { reinterpret_cast<intptr_t> (NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_47;
		L_47 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_45, L_47, /*hidden argument*/NULL);
		// }
		goto IL_0147;
	}

IL_00f5:
	{
		// else if (currentSystem.type == typeof(PreLateUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_49 = V_2;
		Type_t * L_50 = L_49->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_51 = { reinterpret_cast<intptr_t> (PreLateUpdate_tCA98ABCD94D2218D5F53C5DC83C455011E9550A2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_52;
		L_52 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_51, /*hidden argument*/NULL);
		bool L_53;
		L_53 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_50, L_52, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_011f;
		}
	}
	{
		// TryRemoveLoopSystem(ref currentSystem, typeof(NetworkPreLateUpdate));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_54 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_55, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_57;
		L_57 = NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_54, L_56, /*hidden argument*/NULL);
		// }
		goto IL_0147;
	}

IL_011f:
	{
		// else if (currentSystem.type == typeof(PostLateUpdate))
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_58 = V_2;
		Type_t * L_59 = L_58->get_type_0();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_60 = { reinterpret_cast<intptr_t> (PostLateUpdate_tB0EEFB945E792D3FC9007281EA8A6BADD1A0231A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_61;
		L_61 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_60, /*hidden argument*/NULL);
		bool L_62;
		L_62 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_59, L_61, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0147;
		}
	}
	{
		// TryRemoveLoopSystem(ref currentSystem, typeof(NetworkPostLateUpdate));
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * L_63 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_64 = { reinterpret_cast<intptr_t> (NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_65;
		L_65 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_64, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = NetworkUpdateLoop_TryRemoveLoopSystem_m1B5331C7E4414FFCC94914848CE0588EE801C23A((PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C *)L_63, L_65, /*hidden argument*/NULL);
	}

IL_0147:
	{
		// for (int i = 0; i < rootPlayerLoop.subSystemList.Length; i++)
		int32_t L_67 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
	}

IL_014b:
	{
		// for (int i = 0; i < rootPlayerLoop.subSystemList.Length; i++)
		int32_t L_68 = V_1;
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_69 = V_0;
		PlayerLoopSystemU5BU5D_t3BA4C765F5D8A6C384A54624258E9A167CA8CD17* L_70 = L_69.get_subSystemList_1();
		NullCheck(L_70);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// PlayerLoop.SetPlayerLoop(rootPlayerLoop);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_71 = V_0;
		PlayerLoop_SetPlayerLoop_m07E0BE8203AE23454CF82BBF4BAFF0F6FB4E294D(L_71, /*hidden argument*/NULL);
		// }
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkEarlyUpdate_CreateLoopSystem_m12C9CE6C40E56F7635D235E8D106745AAD77AA37 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkEarlyUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.EarlyUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkEarlyUpdate_t479652BD48725B36367492FA72864FCC71E5DBFE_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * L_4 = ((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
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
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkFixedUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkFixedUpdate_CreateLoopSystem_mEC86040F69E9DE40B761CE82E2B69CFC4460A431 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkFixedUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.FixedUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkFixedUpdate_tBB90D1862102CD5FA8603B9523DF28307372546A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * L_4 = ((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
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
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkInitialization::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkInitialization_CreateLoopSystem_m93F251B6F1B2D20AA97C4DC5A4424550544F1A42 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkInitialization),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Initialization)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkInitialization_t9CA79804F071F80BD1715A2475F734F08D9C7E63_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * L_4 = ((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
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
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPostLateUpdate_CreateLoopSystem_mFDA8CE751D45DF8BB0E45CA62D8D9417DCB35A0A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPostLateUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PostLateUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPostLateUpdate_t7F3126BE760A3B007F1AABD4C9E201F908332B3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * L_4 = ((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
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
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreLateUpdate_CreateLoopSystem_m693CBDBD03B76D394AE814044DCDB464B50E8182 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPreLateUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreLateUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPreLateUpdate_t536C07C25A0F343BD11C8DCF5BA2988ED71CA0CA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * L_4 = ((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
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
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkPreUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkPreUpdate_CreateLoopSystem_m7B6575CFD08C511A1914F22C7F850E8047C1537B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkPreUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreUpdate)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkPreUpdate_t9A2C5A970CE74462140F3359EDC0EFE38BBEDE77_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * L_4 = ((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
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
// UnityEngine.LowLevel.PlayerLoopSystem MLAPI.NetworkUpdateLoop/NetworkUpdate::CreateLoopSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  NetworkUpdate_CreateLoopSystem_m415195C5A1631D153BC829CA0BF5D1532CB285ED (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B2_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B2_1 = NULL;
	UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * G_B1_0 = NULL;
	PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C * G_B1_1 = NULL;
	{
		// return new PlayerLoopSystem
		// {
		//     type = typeof(NetworkUpdate),
		//     updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Update)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C ));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (NetworkUpdate_t6F4ADFC346A53105D6B78B4C4236D38CD45A8F93_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		(&V_0)->set_type_0(L_1);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_2 = ((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->get_U3CU3E9__0_0_1();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			goto IL_003a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * L_4 = ((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_5 = (UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA *)il2cpp_codegen_object_new(UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA_il2cpp_TypeInfo_var);
		UpdateFunction__ctor_mB10AB83A3F547AC95FF726E8A7B5FF9C16EC1319(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E_RuntimeMethod_var), /*hidden argument*/NULL);
		UpdateFunction_tEDC2A88F61F179480CAA9443E6ADDA3F126B8AEA * L_6 = L_5;
		((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->set_U3CU3E9__0_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_003a:
	{
		G_B2_1->set_updateDelegate_2(G_B2_0);
		PlayerLoopSystem_t3C4FAE5D2149A8DBB8BED0C2AE9B957B7830E54C  L_7 = V_0;
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
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m4CEB37A34F4C96630D86DF36BA44A1E24B296327 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * L_0 = (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 *)il2cpp_codegen_object_new(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m2B13C1B74F4E81103D5F4BCB9D19E5AFAD305DB5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2B13C1B74F4E81103D5F4BCB9D19E5AFAD305DB5 (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkEarlyUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m8D260FCA85760FCB3A38EFBA700E9F6F3AC8C1EC (U3CU3Ec_tB893D6DBE084A96080D80B8D359A8E19B66C9800 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.EarlyUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(2, /*hidden argument*/NULL);
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
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m17B131EF85682646A63DD9006D482E89ED8657A8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * L_0 = (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 *)il2cpp_codegen_object_new(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE135C8BF42D12E4C497D880418869652E8D66BA9(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE135C8BF42D12E4C497D880418869652E8D66BA9 (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkFixedUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m5EF61EC582F69FC74A9557438638E98C67F7F72C (U3CU3Ec_t4D3FD6E4BAACA599CFFEC4076A2A5C98B0A21EE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.FixedUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(3, /*hidden argument*/NULL);
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
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m07A28E827E8EB81B68A89B430AAA1B4A83037B5C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * L_0 = (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 *)il2cpp_codegen_object_new(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE9A245CFBAE70653A9AAEBAC0931087A5B6AA077(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE9A245CFBAE70653A9AAEBAC0931087A5B6AA077 (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkInitialization/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m3DA848EAB6520DE82FA6E676B740A680074AE2EB (U3CU3Ec_tACB3EFC55E4F18C57FDE06C1A248FF1A7B089E56 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Initialization)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(1, /*hidden argument*/NULL);
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
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB4FDF9004596B94C7BFF233EB6A02ADDBF0D6060 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * L_0 = (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED *)il2cpp_codegen_object_new(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m4892922627A2134C6E433C5FB213845895DD6EFC(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m4892922627A2134C6E433C5FB213845895DD6EFC (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPostLateUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m6AAF43D7F3275579BC25E687CD358B880AA4D85E (U3CU3Ec_tB824F35E32F86D32131114C10A8EF11C9829FCED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PostLateUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(6, /*hidden argument*/NULL);
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
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m50D14DBD525BFB0C0102F1687D047CD062DB0675 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * L_0 = (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 *)il2cpp_codegen_object_new(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5F608C89C8980413AE77A02C7FC3307601C186ED(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5F608C89C8980413AE77A02C7FC3307601C186ED (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreLateUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_mAFE958D5B72B06F09015E416D49CB46E25420131 (U3CU3Ec_t0BA7613B971F1F94862F97660FCBAF11036D8F16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreLateUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(5, /*hidden argument*/NULL);
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
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDE94D24EF1717850B1279FE435A9F92A18D5885F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * L_0 = (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D *)il2cpp_codegen_object_new(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mD6D20CD4786B764C1EE32107C65DB7B0DD57C837(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD6D20CD4786B764C1EE32107C65DB7B0DD57C837 (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkPreUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m19DC8E986C54FCA24DB9FF8E7D029BD982024E7E (U3CU3Ec_tCEA9AB552983A1FD8A437CCC5F0C97305C1B6B6D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.PreUpdate)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(4, /*hidden argument*/NULL);
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
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD4690B4D48B478B4A95BE7C53E0C1FCAA6E89690 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * L_0 = (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 *)il2cpp_codegen_object_new(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3B5EFFE96354374A0E1F7AC8124E34EEA35620FA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3B5EFFE96354374A0E1F7AC8124E34EEA35620FA (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MLAPI.NetworkUpdateLoop/NetworkUpdate/<>c::<CreateLoopSystem>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CCreateLoopSystemU3Eb__0_0_m2FBCB4EAA155F7A7C8307B4CBD3BB2E677F7657E (U3CU3Ec_t3FB2B66037CDC66630B7FC6718B2A9972C9A80E4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// updateDelegate = () => RunNetworkUpdateStage(NetworkUpdateStage.Update)
		IL2CPP_RUNTIME_CLASS_INIT(NetworkUpdateLoop_t32C2E4D98299B3A4337E8185E148E472A2B27975_il2cpp_TypeInfo_var);
		NetworkUpdateLoop_RunNetworkUpdateStage_mFB91EA24D90F2BB8D821F13842B3D32E4E7F38C6(0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
