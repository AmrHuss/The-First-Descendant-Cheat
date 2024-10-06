#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NXPWebBrowserWidget

#include "Basic.hpp"


namespace SDK::Params
{

// Function NXPWebBrowserWidget.NXPWebBrowser.BindUObject
// 0x0020 (0x0020 - 0x0000)
struct NXPWebBrowser_BindUObject final
{
public:
	class FString                                 Name_0;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Object;                                            // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsPermanent;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NXPWebBrowser_BindUObject) == 0x000008, "Wrong alignment on NXPWebBrowser_BindUObject");
static_assert(sizeof(NXPWebBrowser_BindUObject) == 0x000020, "Wrong size on NXPWebBrowser_BindUObject");
static_assert(offsetof(NXPWebBrowser_BindUObject, Name_0) == 0x000000, "Member 'NXPWebBrowser_BindUObject::Name_0' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_BindUObject, Object) == 0x000010, "Member 'NXPWebBrowser_BindUObject::Object' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_BindUObject, bIsPermanent) == 0x000018, "Member 'NXPWebBrowser_BindUObject::bIsPermanent' has a wrong offset!");

// Function NXPWebBrowserWidget.NXPWebBrowser.ExecuteJavascript
// 0x0010 (0x0010 - 0x0000)
struct NXPWebBrowser_ExecuteJavascript final
{
public:
	class FString                                 ScriptText;                                        // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NXPWebBrowser_ExecuteJavascript) == 0x000008, "Wrong alignment on NXPWebBrowser_ExecuteJavascript");
static_assert(sizeof(NXPWebBrowser_ExecuteJavascript) == 0x000010, "Wrong size on NXPWebBrowser_ExecuteJavascript");
static_assert(offsetof(NXPWebBrowser_ExecuteJavascript, ScriptText) == 0x000000, "Member 'NXPWebBrowser_ExecuteJavascript::ScriptText' has a wrong offset!");

// Function NXPWebBrowserWidget.NXPWebBrowser.LoadString
// 0x0020 (0x0020 - 0x0000)
struct NXPWebBrowser_LoadString final
{
public:
	class FString                                 Contents;                                          // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 DummyURL;                                          // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NXPWebBrowser_LoadString) == 0x000008, "Wrong alignment on NXPWebBrowser_LoadString");
static_assert(sizeof(NXPWebBrowser_LoadString) == 0x000020, "Wrong size on NXPWebBrowser_LoadString");
static_assert(offsetof(NXPWebBrowser_LoadString, Contents) == 0x000000, "Member 'NXPWebBrowser_LoadString::Contents' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_LoadString, DummyURL) == 0x000010, "Member 'NXPWebBrowser_LoadString::DummyURL' has a wrong offset!");

// Function NXPWebBrowserWidget.NXPWebBrowser.LoadURL
// 0x0010 (0x0010 - 0x0000)
struct NXPWebBrowser_LoadURL final
{
public:
	class FString                                 NewUrl;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NXPWebBrowser_LoadURL) == 0x000008, "Wrong alignment on NXPWebBrowser_LoadURL");
static_assert(sizeof(NXPWebBrowser_LoadURL) == 0x000010, "Wrong size on NXPWebBrowser_LoadURL");
static_assert(offsetof(NXPWebBrowser_LoadURL, NewUrl) == 0x000000, "Member 'NXPWebBrowser_LoadURL::NewUrl' has a wrong offset!");

// DelegateFunction NXPWebBrowserWidget.NXPWebBrowser.OnBeforePopup__DelegateSignature
// 0x0020 (0x0020 - 0x0000)
struct NXPWebBrowser_OnBeforePopup__DelegateSignature final
{
public:
	class FString                                 URL;                                               // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Frame;                                             // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NXPWebBrowser_OnBeforePopup__DelegateSignature) == 0x000008, "Wrong alignment on NXPWebBrowser_OnBeforePopup__DelegateSignature");
static_assert(sizeof(NXPWebBrowser_OnBeforePopup__DelegateSignature) == 0x000020, "Wrong size on NXPWebBrowser_OnBeforePopup__DelegateSignature");
static_assert(offsetof(NXPWebBrowser_OnBeforePopup__DelegateSignature, URL) == 0x000000, "Member 'NXPWebBrowser_OnBeforePopup__DelegateSignature::URL' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_OnBeforePopup__DelegateSignature, Frame) == 0x000010, "Member 'NXPWebBrowser_OnBeforePopup__DelegateSignature::Frame' has a wrong offset!");

// DelegateFunction NXPWebBrowserWidget.NXPWebBrowser.OnConsoleMessage__DelegateSignature
// 0x0028 (0x0028 - 0x0000)
struct NXPWebBrowser_OnConsoleMessage__DelegateSignature final
{
public:
	class FString                                 Message;                                           // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Source;                                            // 0x0010(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         Line;                                              // 0x0020(0x0004)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NXPWebBrowser_OnConsoleMessage__DelegateSignature) == 0x000008, "Wrong alignment on NXPWebBrowser_OnConsoleMessage__DelegateSignature");
static_assert(sizeof(NXPWebBrowser_OnConsoleMessage__DelegateSignature) == 0x000028, "Wrong size on NXPWebBrowser_OnConsoleMessage__DelegateSignature");
static_assert(offsetof(NXPWebBrowser_OnConsoleMessage__DelegateSignature, Message) == 0x000000, "Member 'NXPWebBrowser_OnConsoleMessage__DelegateSignature::Message' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_OnConsoleMessage__DelegateSignature, Source) == 0x000010, "Member 'NXPWebBrowser_OnConsoleMessage__DelegateSignature::Source' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_OnConsoleMessage__DelegateSignature, Line) == 0x000020, "Member 'NXPWebBrowser_OnConsoleMessage__DelegateSignature::Line' has a wrong offset!");

// DelegateFunction NXPWebBrowserWidget.NXPWebBrowser.OnUrlChanged__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct NXPWebBrowser_OnUrlChanged__DelegateSignature final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(NXPWebBrowser_OnUrlChanged__DelegateSignature) == 0x000008, "Wrong alignment on NXPWebBrowser_OnUrlChanged__DelegateSignature");
static_assert(sizeof(NXPWebBrowser_OnUrlChanged__DelegateSignature) == 0x000018, "Wrong size on NXPWebBrowser_OnUrlChanged__DelegateSignature");
static_assert(offsetof(NXPWebBrowser_OnUrlChanged__DelegateSignature, Text) == 0x000000, "Member 'NXPWebBrowser_OnUrlChanged__DelegateSignature::Text' has a wrong offset!");

// Function NXPWebBrowserWidget.NXPWebBrowser.UnbindUObject
// 0x0020 (0x0020 - 0x0000)
struct NXPWebBrowser_UnbindUObject final
{
public:
	class FString                                 Name_0;                                            // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                                Object;                                            // 0x0010(0x0008)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bIsPermanent;                                      // 0x0018(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(NXPWebBrowser_UnbindUObject) == 0x000008, "Wrong alignment on NXPWebBrowser_UnbindUObject");
static_assert(sizeof(NXPWebBrowser_UnbindUObject) == 0x000020, "Wrong size on NXPWebBrowser_UnbindUObject");
static_assert(offsetof(NXPWebBrowser_UnbindUObject, Name_0) == 0x000000, "Member 'NXPWebBrowser_UnbindUObject::Name_0' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_UnbindUObject, Object) == 0x000010, "Member 'NXPWebBrowser_UnbindUObject::Object' has a wrong offset!");
static_assert(offsetof(NXPWebBrowser_UnbindUObject, bIsPermanent) == 0x000018, "Member 'NXPWebBrowser_UnbindUObject::bIsPermanent' has a wrong offset!");

// Function NXPWebBrowserWidget.NXPWebBrowser.GetTitleText
// 0x0018 (0x0018 - 0x0000)
struct NXPWebBrowser_GetTitleText final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(NXPWebBrowser_GetTitleText) == 0x000008, "Wrong alignment on NXPWebBrowser_GetTitleText");
static_assert(sizeof(NXPWebBrowser_GetTitleText) == 0x000018, "Wrong size on NXPWebBrowser_GetTitleText");
static_assert(offsetof(NXPWebBrowser_GetTitleText, ReturnValue) == 0x000000, "Member 'NXPWebBrowser_GetTitleText::ReturnValue' has a wrong offset!");

// Function NXPWebBrowserWidget.NXPWebBrowser.GetUrl
// 0x0010 (0x0010 - 0x0000)
struct NXPWebBrowser_GetUrl final
{
public:
	class FString                                 ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(NXPWebBrowser_GetUrl) == 0x000008, "Wrong alignment on NXPWebBrowser_GetUrl");
static_assert(sizeof(NXPWebBrowser_GetUrl) == 0x000010, "Wrong size on NXPWebBrowser_GetUrl");
static_assert(offsetof(NXPWebBrowser_GetUrl, ReturnValue) == 0x000000, "Member 'NXPWebBrowser_GetUrl::ReturnValue' has a wrong offset!");

}

