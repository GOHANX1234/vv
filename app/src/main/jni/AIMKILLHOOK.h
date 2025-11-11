#ifndef JOELITONMODSFF_HOOK_H
#define JOELITONMODSFF_HOOK_H

#include <cstdio>
#include <string>
#include <cstring>
#include <unistd.h>
#include <dlfcn.h>
#include <dirent.h>
#include <sys/mman.h>
#include <cstdlib>
#include <inttypes.h>
#include <math.h>
#include <list>
#include <vector>
#include <string>
#include <string.h>
#include <pthread.h>
#include <cstring>
#include <jni.h>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <regex.h>
#include <fcntl.h>
//#include "Unity/Quaternion.hpp"
#include "Unity/Vector3.hpp"
//#include "Unity/Vector2.hpp"
//#include "Unity/Color.hpp"
//#include "Unity/Rect.hpp"
#include "Unity/Unity.h"
#include <sys/system_properties.h>
#include <dirent.h>
#include <cstdio>
#include <string>
#include <cstring>
#include <unistd.h>
#include <sys/mman.h>
#include <cstdlib>
#include <inttypes.h>
//#include "Includes/Utils.h"
#include "MonoString.h"
#include <EGL/egl.h>
#include <GLES2/gl2.h>
//#include "Unity/ESP.h"

int screenWidth2, screenHeight2;

#define AIMKILL_CALCULATION_SEED 0xDEADBEEF

inline uintptr_t CalculateAimAssist(uintptr_t targetOffset) {
    return targetOffset ^ AIMKILL_CALCULATION_SEED;
}

struct {
    uintptr_t Component_GetTransform = 0xD6ED04E7;
    uintptr_t get_position = 0xD6860453;
    uintptr_t WorldToScreenPoint = 0xD6ED2E0B;
    uintptr_t Camera_main = 0xD6ED2813;
    uintptr_t TransformNode = 0xD8818BEF;
    uintptr_t IsClientBot = 0xDEADBDBF;
    uintptr_t name = 0xDEADBDAF;
    uintptr_t MainCameraTransform = 0xDEADBC77;
    uintptr_t FollowCamera = 0xDEADBBCF;
    uintptr_t IsDieingOnParachute = 0xDEADA7EF;
    uintptr_t EAimAssist = 0xDEADBBEF;
    uintptr_t Quaternion = 0xDEADAB8B;
    uintptr_t Quaternion2 = 0xDEADAB9B;
    uintptr_t Quaternion3 = 0xDEADBA5B;
    uintptr_t Quaternion4 = 0xDEADBA2B;
    uintptr_t Head2 = 0xDEADBBDF;
    uintptr_t Hip = 0xDEADBBD7;
    uintptr_t HanD = 0xDEADBB67;
    uintptr_t HanE = 0xDEADBBC7;
    uintptr_t HenD = 0xDEADBB77;
    uintptr_t HenE = 0xDEADBB4F;
    uintptr_t ToeD = 0xDEADBB97;
    uintptr_t ToeE = 0xDEADBB9F;
    uintptr_t Toe = 0xDEADBBB7;
    uintptr_t IsSightingPlayer = 0xDC695CEF;
    uintptr_t IsFiringPlayer = 0xDC695FA7;
    uintptr_t get_CurHP = 0xDC61A5FF;
    uintptr_t get_MaxHP = 0xDC140A3B;
    uintptr_t IsDieing = 0xDC1F74AB;
    uintptr_t IsVisiblePlayer = 0xDC1E6E7B;
    uintptr_t IsLocalTeammate = 0xDC6AF107;
    uintptr_t IsCameraTrackableEntityAlive = 0xDC6281E7;
    uintptr_t GetWeaponOnHand = 0xDC68F0D3;
    uintptr_t matchState = 0xDEADBEA7;
    uintptr_t Dictionary = 0xDEADBE27;
    uint64_t LocalPlayer = 0xDEADBEB7;
    uintptr_t CreateString = 0xD6828013;
    uintptr_t CurrentMatch = 0xDDA93A0B;
    uintptr_t Physics_Raycast = 0xDBE8B523;
    uintptr_t get_HeadCollider = 0xDC6834EB;
    uintptr_t get_Chars = 0xD683DC3B;
    uintptr_t SetResolution = 0xD687173B;
    uintptr_t get_Range = 0xDC547937;
    uintptr_t GetCurrentRequest = 0xD993C4AF;
    uintptr_t ResHotUpdater_get_instance = 0xD6D5EBC3;
    uintptr_t ResHotUpdater = 0xD5BC87F7;
    uintptr_t HttpManager = 0xD5BC87EF;
    uintptr_t Channels = 0xDEADBEFF;
    uintptr_t get_Cmd = 0xD85BBB37;
    uintptr_t GetActiveWeapon = 0xDC6B7A07;
    uintptr_t CurrentUIScene = 0xDDA9E3FB;
    uintptr_t AddTeammateHud = 0xDC4FD687;
    uintptr_t ShowDynamicPopupMessage = 0xDC72B007;
    uintptr_t SetEsp = 0xD8C281BF;
    uintptr_t Class_DamageInfo_c = 0xD5AF8837;
    uintptr_t message = 0xDCC8544F;
    uintptr_t TryHitLocalPlayer = 0xDBFE6107;
    uintptr_t m_LastAimingInfoFromWeapon = 0xDEADB2C7;
    uintptr_t CreateDamageReq = 0xDBE5FC77;
    uintptr_t WeaponData = 0xDEADBE7F;
    uintptr_t WeaponId = 0xDEADBE23;
    uintptr_t CurrentGameSimulationTimer = 0xDDA9D1B3;
    uintptr_t GetDamage = 0xDC57FFDF;
    uintptr_t get_PlayerID = 0xDC6E3527;
    uintptr_t GenerateCheckParams = 0xDC517E6B;
    uintptr_t GetAimingAttackableEntity = 0xDC665367;
    uintptr_t get_gameObject = 0xD6ED049B;
    uintptr_t PlayerID_op_Implicit = 0xDD4ABF1B;
    uintptr_t PackVector3Pos = 0xD9DF4DEB;
    uintptr_t DPPPFBHIHJA = 0xD9E076E7;
    uintptr_t get_realtimeSinceStartup = 0xD686228F;
    uintptr_t GameFacade_Send = 0xDDA8A0CB;
    uintptr_t PlayerNetwork_TakeDamage = 0xDD87B153;
    uintptr_t StartFiring = 0xDD879FAB;
    uintptr_t StopFire = 0xDD8793AB;
    uintptr_t GetItemDataID = 0xDA8A610B;
    uint64_t HitObject = 0xDEADBEF7;
    uint64_t HitCollider = 0xDEADBECF;
    uint64_t HitGroup = 0xDEADBE8B;
    uint64_t HitLocation = 0xDEADBEC7;
    uint64_t HitNormal = 0xDEADBEDB;
    uint64_t RayDir = 0xDEADBEAF;
    uint64_t StartPosition = 0xDEADBEA3;
    uint64_t Damage = 0xDEADBEB7;
    uint64_t Distance = 0xDEADBEB3;
    uint64_t ActorLayer = 0xDEADBE8F;
    uint64_t HitPhysicMaterial = 0xDEADBE87;
    uint64_t IgnoreHappens = 0xDEADBE9F;
    uint64_t ViewBlocked = 0xDEADBE9E;
    uint64_t OrigStartPosition = 0xDEADBE9B;
    uint64_t SpecialHitType = 0xDEADBE6F;
    uint64_t UGCLogicEntityID = 0xDEADBE7F;
    uint64_t SpecialHitDic = 0xDEADBE67;
    uintptr_t AllocCopyFrom = 0xDD67E0D7;
    uintptr_t Alloc = 0xDD67E44F;
    uint64_t OnInstantHit = 0xDC513AB3;
    uint64_t get_sharedMaterial = 0xD613624F;
    uint64_t TakeDamage = 0xDD87B153;
    uint64_t BaseDamage = 0xDEADBEFF;
    uint64_t HitColliderType = 0xDEADBEFB;
    uint64_t HitColliderName = 0xDEADBEF7;
    uint64_t isBackArea = 0xDEADBECF;
    uint64_t Damager = 0xDEADBEC7;
    uint64_t Weapon = 0xDEADBEAF;
    uint64_t WeaponDataID = 0xDEADBEA7;
    uint64_t FirePos = 0xDEADBEA3;
    uint64_t HitPos = 0xDEADBEB7;
    uint64_t HitNormal2 = 0xDEADBE8B;
    uint64_t SpecialHitType2 = 0xDEADBE9F;
    uint64_t ForceNoHeadShot = 0xDEADBE9D;
    uint64_t ExtraInfo = 0xDEADBE9B;
    uint64_t SpecialHitDic2 = 0xDEADBE97;
    uint64_t AttackableEntityID = 0xDEADBEFB;
    uint64_t RealDamageValue = 0xDEADBEF7;
    uint64_t ShieldDamageValue = 0xDEADBEF5;
    uint64_t DamageValue = 0xDEADBEF3;
    uint64_t DamagerID = 0xDEADBECF;
    uint64_t WeaponDataID3 = 0xDEADBECB;
    uint64_t WeaponUniqueID = 0xDEADBEC7;
    uint64_t HitBodyPart = 0xDEADBEC3;
    uint64_t TickCount = 0xDEADBEDF;
    uint64_t FirePos3 = 0xDEADBED7;
    uint64_t TargetPos = 0xDEADBEAF;
    uint64_t CheckParams = 0xDEADBEA7;
    uint64_t ExtraData = 0xDEADBEBF;
    uint64_t ArmorRatio = 0xDEADBEBB;
    uint64_t ExtraFlag = 0xDEADBEB7;
    uint64_t SpecialHitType3 = 0xDEADBE8F;
    uint64_t ForceNoHeadShot3 = 0xDEADBE8D;
    uint64_t IsPlayerBackArea = 0xDEADBE8C;
    uint64_t DamageData = 0xDEADBE87;
    uint64_t BaseTime = 0xDEADBE9F;
    uint64_t ManualReload = 0xDEADBE9B;
    uint64_t m_TickCount = 0xDEADBECF;
    uint64_t UniqueNetID = 0xDEADBEFF;
    uint64_t PlayerID = 0xDEADBEFB;
    uint64_t UniqueID = 0xDEADBEF7;
    uint64_t SwapWeapon = 0xDD878F6F;
    uint64_t Class_message_StartFiring_c = 0xD5AF3987;
    uint64_t Class_RUDP_CHANGE_INVENTORY_ON_HAND_c = 0xD5AF52BF;
    uint64_t PlayerIDStartFire = 0xDEADBEFB;
    uint64_t WeaponUniqueIDStartFire = 0xDEADBEF7;
    uint64_t TickCountStartFire = 0xDEADBEF3;
    uint64_t FireState = 0xDEADBECF;
    uint64_t RecordLength = 0xDEADBECB;
    uint64_t Upload = 0xDEADBEC7;
    uint64_t CheckInfo = 0xDEADBEDF;
    uint64_t BoardJmpCount = 0xDEADBED7;
    uint64_t BoardJmpAvgInterval = 0xDEADBED3;
    uint64_t GetCheckData = 0xD8395BC7;
    uint64_t LineRenderer_SetPosition = 0xD952E093;
    uint64_t LineRenderer_Set_PositionCount = 0xD952E8DB;
    uint64_t GetComponent = 0xD9CDF23F;
    uint64_t GetComponent_LineRenderer = 0xD5ABB737;
    uint64_t GameVarDef = 0xD5AF88B7;
} Global;

DWORD getAbsoluteAddress2(DWORD relativeAddr) {
    libBase = findLibrary("libil2cpp.so");
    if (libBase == 0)
        return 0;
    return (reinterpret_cast<DWORD>(libBase + CalculateAimAssist(relativeAddr)));
}
DWORD getAbsoluteAddressUnity(DWORD relativeAddr) {
    libBase = findLibrary("libunity.so");
    if (libBase == 0)
        return 0;
    return (reinterpret_cast<DWORD>(libBase + CalculateAimAssist(relativeAddr)));
}
uint32_t PlayerID_op_Implicit(COW_GamePlay_IHAAMHPPLMG_o id)
{
    return ((uint32_t(*)(COW_GamePlay_IHAAMHPPLMG_o))getAbsoluteAddress("libil2cpp.so",0X3E701F4))(id);
}/*
bool GameFacade_Send(uint32_t messageID,void *msg,uint8_t sendOption,bool cacheMsgAnyWay)
{
    return ((bool (*)(uint32_t,void *,uint8_t,bool))getAbsoluteAddress("libil2cpp.so",0x30C7A40))(messageID,msg,sendOption,cacheMsgAnyWay);
}*/
bool GameFacade_Send(uint32_t messageID,void *msg,uint8_t sendOption,bool cacheMsgAnyWay)
{
    return ((void* (*)(uint32_t, void *, uint8_t, bool))getAbsoluteAddress2(Global.GameFacade_Send))(messageID,msg,sendOption,cacheMsgAnyWay);
}


COW_GamePlay_IHAAMHPPLMG_o GetplayerID(void *_this)
{
    return ((COW_GamePlay_IHAAMHPPLMG_o (*)(void *))getAbsoluteAddress("libil2cpp.so",0X2C38BC8))(_this);
}

    
/*
void* GetComponent(void *_this)
{
    return ((void* (*)(void *, void *))getAbsoluteAddress2(Global.GetComponent))(_this, *(void **)getAbsoluteAddress2(Global.GetComponent_LineRenderer));
}*/

static void LineRenderer_SetPosition(void *Render, int value, Vector3 Location){
    void (*_LineRenderer_SetPosition)(void *Render, int value, Vector3 Location) = (void (*)(void*, int, Vector3))getAbsoluteAddress2(Global.LineRenderer_SetPosition);
    return _LineRenderer_SetPosition(Render, value, Location);
}

static void LineRenderer_set_positionCount(void *Render, int value){
    void (*_LineRenderer_Set_PositionCount)(void *Render, int value) = (void (*)(void*, int))getAbsoluteAddress2(Global.LineRenderer_Set_PositionCount);
    return _LineRenderer_Set_PositionCount(Render, value);
}
/*
bool GameFacade_Send(uint32_t messageID,void *msg,uint8_t sendOption,bool cacheMsgAnyWay)
{
    return ((void* (*)(uint32_t, void *, uint8_t, bool))getAbsoluteAddress2(Global.GameFacade_Send))(messageID,msg,sendOption,cacheMsgAnyWay);
}
/*
void* get_gameObject(void *_this)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.get_gameObject))(_this);
}*/

void* get_sharedMaterial(void *_this)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.get_sharedMaterial))(_this);
}

static int GetDamage(void *pthis)
{
    return ((int (*)(void *))getAbsoluteAddress2(Global.GetDamage))(pthis);
}

uint32_t GetItemDataID(void *pthis)
{
    return ((uint32_t (*)(void *))getAbsoluteAddress2(Global.GetItemDataID))(pthis);
}

static void *CurrentGameSimulationTimer() {
    void *(*_CurrentGameSimulationTimer)(void *nuls) = (void *(*)(void *))getAbsoluteAddress2(Global.CurrentGameSimulationTimer);
    return _CurrentGameSimulationTimer(NULL);
}
/*
void *ResHotUpdater_get_instance()
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.ResHotUpdater_get_instance))(*(void **)getAbsoluteAddress2(Global.ResHotUpdater));
}

void *HttpManager_get_instance()
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.ResHotUpdater_get_instance))(*(void **)getAbsoluteAddress2(Global.HttpManager));
}

void* GetCurrentRequest(void *_this)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.GetCurrentRequest))(_this);
}

MonoString* get_Cmd(void *_this)
{
    return ((MonoString* (*)(void *))getAbsoluteAddress2(Global.get_Cmd))(_this);
}
/*
static float get_Range(void *pthis)
{
    return ((float (*)(void *))getAbsoluteAddress2(Global.get_Range))(pthis);
}
*/
void SetResolution(int a1, int a2)
{
    return ((void (*)(int,int,bool))getAbsoluteAddress2(Global.SetResolution))(a1,a2,true);
}
/*
char get_Chars(monoString *str, int index){
    char (*_get_Chars)(monoString *str, int index) = (char(*)(monoString *, int))getAbsoluteAddress2(Global.get_Chars);
    return _get_Chars(str, index);
}
*/
static bool Physics_Raycast(Vector3 camLocation, Vector3 headLocation, unsigned int LayerID, void** collider) {
    bool (*_Physics_Raycast)(Vector3 camLocation, Vector3 headLocation, unsigned int LayerID, void** collider) = (bool(*)(Vector3, Vector3, unsigned int, void**))getAbsoluteAddress2(Global.Physics_Raycast);
    return _Physics_Raycast(camLocation, headLocation, LayerID, collider);
}

static bool IsSightingPlayer(void * LocalPlayer)
{
    return ((bool (*)(void *))getAbsoluteAddress2(Global.IsSightingPlayer))(LocalPlayer);
}

static bool IsFiringPlayer(void * LocalPlayer)
{
    return ((bool (*)(void *))getAbsoluteAddress2(Global.IsFiringPlayer))(LocalPlayer);
}

static int get_CurHP(void *player) {
    int (*_get_CurHP)(void *players) = (int (*)(void *))getAbsoluteAddress2(Global.get_CurHP);
    return _get_CurHP(player);
}
/*
static Vector3 get_position(void *player) {
    Vector3 (*_get_position)(void *players) = (Vector3 (*)(void *))getAbsoluteAddress2(Global.get_position);
    return _get_position(player);
}
static void *Camera_main() {
    void *(*_Camera_main)(void *nuls) = (void *(*)(void *))getAbsoluteAddress2(Global.Camera_main);
    return _Camera_main(NULL);
}
*/
Vector3 WorldToScreen(Vector3 pos) {
    void* main = Camera_main();
    if (main != nullptr) {
        Vector3 (*_WorldToScreenPoint)(void *main, Vector3 pos) = (Vector3 (*)(void *, Vector3))getAbsoluteAddress2(Global.WorldToScreenPoint);
        return _WorldToScreenPoint(main, pos);
    }
}
/*
Vector3 WorldToScreenPoint(void *main, Vector3 pos) {
    Vector3 (*_WorldToScreenPoint)(void *main, Vector3 pos) = (Vector3 (*)(void *, Vector3))getAbsoluteAddress2(Global.WorldToScreenPoint);
    return _WorldToScreenPoint(main, pos);
}

static bool get_IsDieing(void *pthis)
{
    return ((bool (*)(void *))getAbsoluteAddress2(Global.IsDieing))(pthis);
}

static int get_MaxHP(void *player) {
    int (*_get_MaxHP)(void *players) = (int (*)(void *))getAbsoluteAddress2(Global.get_MaxHP);
    return _get_MaxHP(player);
}

bool get_isVisible(void *_this)
{
    return ((bool (*)(void *))getAbsoluteAddress2(Global.IsVisiblePlayer))(_this);
}
*/
bool IsCameraTrackableEntityAlive(void *_this)
{
    return ((bool (*)(void *))getAbsoluteAddress2(Global.IsCameraTrackableEntityAlive))(_this);
}

static bool IsLocalTeammatePlayer(void *player) {
    bool (*_IsLocalTeammate)(void *players, bool) = (bool (*)(void *, bool))getAbsoluteAddress2(Global.IsLocalTeammate);
    return _IsLocalTeammate(player,0);
}
/*
void* Component_GetTransform(void *_this)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.Component_GetTransform))(_this);
}*/

void* TransformNode(void *_this)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.TransformNode))(_this);
}

static Vector3 HeadPosition(void *player)
{
    return get_position(TransformNode(*(void**)((uint64_t)player + offset_GetHeadCollider)));
}

static void *CurrentMatch() {
    return ((void* (*)(void *))getAbsoluteAddress2(Global.CurrentMatch))(0);
}

monoString *CreateString(const char *str)
{
    return ((monoString* (*)(monoString*, const char *))getAbsoluteAddress2(Global.CreateString))(nullptr,str);
}

static Vector3 CameraPosition(void *player)
{
    return get_position(Component_GetTransform(Camera_main()));
}

static Vector3 HipPosition(void *player)
{
    return get_position(TransformNode(*(void**)((uint64_t)player + offset_HipPosition)));
}

bool isVisibleHead(void* player)
{
    void *hitObj = NULL;
    Vector3 cameraLocation = CameraPosition(player);
    Vector3 headLocation = HeadPosition(player);
    return !Physics_Raycast(cameraLocation, Vector3(headLocation.x,headLocation.y,headLocation.z), 12, &hitObj);
}

void* GetActiveWeapon(void *_this)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.GetActiveWeapon))(_this);
}

void* GetWeaponOnHand(void *_this)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.GetWeaponOnHand))(_this);
}

static void *CurrentUIScene() {
    void *(*_CurrentUIScene)(void *nuls) = (void *(*)(void *))getAbsoluteAddress2(Global.CurrentUIScene);
    return _CurrentUIScene(NULL);
}

static void SetEsp(void *imo, Vector3 x, Vector3 y) {
    void (*_set_esp)(void *imo, Vector3 X, Vector3 Y) = (void (*)(void *, Vector3, Vector3))getAbsoluteAddress2(Global.SetEsp);
    _set_esp(imo, x, y);
}

static void AddTeammateHud(void *player, monoString *nick, monoString *grup) {
    void (*_AddTeammateHud)(void *players, monoString * nicks, monoString * nickss) = (void (*)(void *, monoString *, monoString *))getAbsoluteAddress2(Global.AddTeammateHud);
    void *ui = CurrentUIScene();
    if (ui != NULL) {
        _AddTeammateHud(player, nick, grup);
    }
}

static monoString *U3DStrFormatBot(float distance) {
    char buffer[128] = {0};
    sprintf(buffer, OBFUSCATE("[%.2fm] (BOT)"), distance);
    return CreateString(buffer);
}

static monoString *U3DStrFormatPlayer(float distance) {
    char buffer[128] = {0};
    sprintf(buffer, OBFUSCATE("[%.2fm] (PLAYER)"), distance);
    return CreateString(buffer);
}

static monoString *FormatCount(int enemy, int bot) {
    char buf[128] = {};
    sprintf(buf, "PLAYERS: %d BOTS: %d", enemy, bot);
    return CreateString(buf);
}

static void ShowDynamicPopupMessage(monoString *nick) {
    void (*_ShowDynamicPopupMessage)(void *players, monoString * nicks, float duration) = (void (*)(void *, monoString *, float))getAbsoluteAddress2(Global.ShowDynamicPopupMessage);
    void *ui = CurrentUIScene();
    if (ui != NULL) {
        _ShowDynamicPopupMessage(ui, nick, 0.1f);
    }
}

struct COW_GamePlay_PlayerID_o {
    uint32_t m_Value;
    uint32_t m_ID;
    uint8_t m_TeamID;
    uint8_t m_ShortID;
    uint64_t m_IDMask;
};

void *Alloc()
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.Alloc))(0);
}

void *AllocCopyFrom()
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.AllocCopyFrom))(Alloc());
}

static void *GetAimingAttackableEntity(void *pthis, void *a1)
{
    return ((void* (*)(void *,void*))getAbsoluteAddress2(Global.GetAimingAttackableEntity))(pthis,a1);
}

monoList<int*> *DPPPFBHIHJA()
{
    return ((monoList<int*> * (*)(void *))getAbsoluteAddress2(Global.DPPPFBHIHJA))(0);
}

monoList<int> *GetCheckData()
{
    return ((monoList<int> * (*)(void *))getAbsoluteAddress2(Global.GetCheckData))(0);
}

float get_realtimeSinceStartup()
{
    return ((float (*)(void *))getAbsoluteAddress2(Global.get_realtimeSinceStartup))(0);
}
/*
COW_GamePlay_PlayerID_o GetplayerID(void *_this)
{
    return ((COW_GamePlay_PlayerID_o (*)(void *))getAbsoluteAddress2(Global.get_PlayerID))(_this);
}
*/
void *get_HeadCollider(void *pthis)
{
    return ((void* (*)(void *))getAbsoluteAddress2(Global.get_HeadCollider))(pthis);
}

monoList<float *> *GenerateCheckParams(void *pthis,void *atk,void *hitCollider,bool uesSimple,void *damageInfo)
{
    return ((monoList<float *> * (*)(void *,void *,void *,bool,void*))getAbsoluteAddress2(Global.GenerateCheckParams))(pthis,atk,hitCollider,uesSimple,damageInfo);
}

uint32_t PlayerID_op_Implicit(COW_GamePlay_PlayerID_o id)
{
    return ((uint32_t (*)(COW_GamePlay_PlayerID_o))getAbsoluteAddress2(Global.PlayerID_op_Implicit))(id);
}

struct message_DEACEIFBHJK_o {
    void *klass;
    void *monitor;
    bool UDPClientMessageBase_m_GetFromPool;
    int32_t BPMHKJKGPPI;
    int32_t HKNBHABJAJE;
    int32_t ILOAOHNGCDL;
};

struct message_CHDLJFJCPFN_o {
    void *klass;
    void *monitor;
    bool UDPClientMessageBase_m_GetFromPool;
    uint32_t ALFINFGBOBE;
    uint16_t ECDBFHHNPMI;
    uint16_t EKCONDDBKFO;
    uint32_t BJBPPEBIPFA;
    uint32_t LIIGLCNGOHG;
    int32_t PIAMIOFEBKF;
    uint32_t HCMIEJEBKAL;
    uint8_t ODCJPCEJHPK;
    uint32_t CEDJCPLOLNE;
    message_DEACEIFBHJK_o* CNEICNJFGLM;
    message_DEACEIFBHJK_o* PGDEDHFOMCN;
    monoList<float*> * AALHLOAJLEE;
    uint32_t HOBOHHJNDNH;
    float AILHIPMKJKJ;
    uint64_t LHGGPCFJNOO;
    int8_t ACAKHEABPEJ;
    bool MJIHLDJNHLF;
    bool MBGCAHPACOH;
    monoList<int*> * FIKOAMIDEHL;
    float IOGIIEFAALP;
    bool HDEJLJKNLCI;
};

message_DEACEIFBHJK_o *PackVector3Pos(Vector3 v)
{
    return ((message_DEACEIFBHJK_o* (*)(Vector3))getAbsoluteAddress2(Global.PackVector3Pos))(v);
}

bool modifyJsonField(char *ab, size_t *ac, char *ad, char *af) {
    char *vb = strstr(ab, ad);
    if (vb == NULL) {
        return false;
    }
    char *cp = strchr(vb + strlen(ad), ':');
    if (cp == NULL) {
        return false;
    }
    char *vs = cp + 1;
    vs += strspn(vs, " \t\n\r");
    char *ved = NULL;
    if (*vs == '\"') {
        vs++;
        ved = strchr(vs, '\"');
        if (ved == NULL) {
            return false;
        }
    } else {
        ved = strpbrk(vs, ",}");
        if (ved == NULL) {
            return false;
        }
    }
    size_t aldl = ved - vs;
    size_t nl = strlen(af);
    ptrdiff_t diff = (ptrdiff_t)nl - (ptrdiff_t)aldl;
    if (*ac + diff > 60000) {
        return false;
    }
    if (diff != 0) {
        memmove(ved + diff, ved, *ac - (ved - ab));
        *ac += diff;
    }
    memcpy(vs, af, nl);
    return true;
}

bool IsJoelitonCheck3(const char *src)
{
    if (!src)
    {
        return false;
    }

    return (
            src[0] == 'g' &&
            src[1] == 'i' &&
            src[2] == 'n' &&
            src[3] == '.' &&
            src[4] == 'f' &&
            src[5] == 'r' &&
            src[6] == 'e' &&
            src[7] == 'e' &&
            src[8] == 'f' &&
            src[9] == 'i' &&
            src[10] == 'r' &&
            src[11] == 'e' &&
            src[12] == 'm' &&
            src[13] == 'o' &&
            src[14] == 'b' &&
            src[15] == 'i' &&
            src[16] == 'l' &&
            src[17] == 'e' &&
            src[18] == '.' &&
            src[19] == 'c' &&
            src[20] == 'o' &&
            src[21] == 'm'
    );
}

bool IsJoelitonCheck4(const char *src)
{
    if (!src)
    {
        return false;
    }

    return (
            src[0] == 'h' &&
            src[1] == 't' &&
            src[2] == 't' &&
            src[3] == 'p' &&
            src[4] == ':' &&
            src[5] == '/' &&
            src[6] == '/' &&
            src[7] == 'g' &&
            src[8] == 'i' &&
            src[9] == 'n' &&
            src[10] == '.' &&
            src[11] == 'f' &&
            src[12] == 'r' &&
            src[13] == 'e' &&
            src[14] == 'e' &&
            src[15] == 'f' &&
            src[16] == 'i' &&
            src[17] == 'r' &&
            src[18] == 'e' &&
            src[19] == 'm' &&
            src[20] == 'o' &&
            src[21] == 'b' &&
            src[22] == 'i' &&
            src[23] == 'l' &&
            src[24] == 'e' &&
            src[25] == '.' &&
            src[26] == 'c' &&
            src[27] == 'o' &&
            src[28] == 'm'
            // Se quiser garantir que termina, ative esta linha:
            // && src[29] == '\0'
    );
}

bool IsJoelitonCheck5(const char *src)
{
    if (!src)
    {
        return false;
    }

    return (
            src[0] == 'h' &&
            src[1] == 't' &&
            src[2] == 't' &&
            src[3] == 'p' &&
            src[4] == ':' &&
            src[5] == '/' &&
            src[6] == '/' &&
            src[7] == 'g' &&
            src[8] == 'i' &&
            src[9] == 'n' &&
            src[10] == '.' &&
            src[11] == 'f' &&
            src[12] == 'r' &&
            src[13] == 'e' &&
            src[14] == 'e' &&
            src[15] == 'f' &&
            src[16] == 'i' &&
            src[17] == 'r' &&
            src[18] == 'e' &&
            src[19] == 'i' &&
            src[20] == 'n' &&
            src[21] == 'd' &&
            src[22] == '.' &&
            src[23] == 'i' &&
            src[24] == 'n'
            // Se quiser garantir que termina exatamente aí:
            // && src[25] == '\0'
    );
}

bool IsJoelitonCheck6(const char *src)
{
    if (!src)
    {
        return false;
    }

    return (
            src[0] == 'g' &&
            src[1] == 'i' &&
            src[2] == 'n' &&
            src[3] == '.' &&
            src[4] == 'f' &&
            src[5] == 'r' &&
            src[6] == 'e' &&
            src[7] == 'e' &&
            src[8] == 'f' &&
            src[9] == 'i' &&
            src[10] == 'r' &&
            src[11] == 'e' &&
            src[12] == 'i' &&
            src[13] == 'n' &&
            src[14] == 'd' &&
            src[15] == '.' &&
            src[16] == 'i' &&
            src[17] == 'n'
            // Para garantir que termina aí:
            // && src[18] == '\0'
    );
}

char* JoelitonCheck(const char *a1, const char *a2)
{
    int v2; // r2
    const char *v3; // r3
    int v5; // r4
    char *v6; // r7
    char *v7; // r1
    int v8; // r6
    int v9; // r6

    v2 = (char)*a2;
    v3 = a2 + 1;
    if ( !*a2 )
        return (char *)a1;
    while ( *++a2 )
        ;
    v5 = v3 - a2;
    v6 = (char *)(a2 - v3);
    while ( 1 )
    {
        v8 = (char)*a1++;
        v7 = 0;
        if ( !v8 )
            break;
        if ( v8 == v2 )
        {
            v9 = 0;
            if ( !v6 )
                return (char *)(a1 - 1);
            while ( a1[-v9] == v3[-v9] )
            {
                if ( a1[-v9] )
                {
                    if ( v5 != --v9 )
                        continue;
                }
                return (char *)(a1 - 1);
            }
        }
    }
    return v7;
}

void callStartGameMethod(JNIEnv* env, jobject mainActivityInstance) {
    jclass mainActivityClass = env->GetObjectClass(mainActivityInstance);
    jclass gameActivityClass;
    gameActivityClass = env->FindClass(OBFUSCATE("com/dts/freefireth/FFMainActivity"));
    jclass intentClass = env->FindClass(OBFUSCATE("android/content/Intent"));
    jmethodID intentConstructor = env->GetMethodID(intentClass, OBFUSCATE("<init>"), OBFUSCATE("(Landroid/content/Context;Ljava/lang/Class;)V"));
    jobject intent = env->NewObject(intentClass, intentConstructor, mainActivityInstance, gameActivityClass);
    jmethodID startActivityMethod = env->GetMethodID(mainActivityClass, OBFUSCATE("startActivity"), OBFUSCATE("(Landroid/content/Intent;)V"));
    env->CallVoidMethod(mainActivityInstance, startActivityMethod, intent);
}

int TimerTakeDamageinit;
bool isDamage = false;
void *Nuls;

void* GetClosestEnemy_AimKill()
{
    float shortestDistance = 99999.0f;
    void* closestEnemy = nullptr;

    void* get_MatchGame = Curent_Match();
    void* LocalPlayer = GetLocalPlayer(get_MatchGame);
    if (LocalPlayer != nullptr && get_MatchGame != nullptr)
    {
        monoDictionary<uint8_t*, void**>* players = *(monoDictionary<uint8_t*, void**>**)((long)get_MatchGame + ListPlayer);
        if(players != nullptr  && players->getNumValues() > 0)
        {
            for (int u = 0; u < players->getNumValues(); u++)
            {
                void* Player = players->getValues()[u];
                if (Player != nullptr && Player != LocalPlayer && !get_isLocalTeam(Player) && get_isVisible(Player) && get_MaxHP(Player) && !get_IsDieing(Player))
                {
                    Vector3 PlayerPos = getPosition(Player);
                    Vector3 LocalPlayerPos = getPosition(LocalPlayer);

                    float distanceToMe = Vector3::Distance(PlayerPos, LocalPlayerPos);

                    float DistanciaAteJogadorLocal = Vector3::Distance(LocalPlayerPos,PlayerPos);

                    if (DistanciaAteJogadorLocal <= 100.0f)
                    {
                        if (IsVisible(Player))
                        {
                            if(distanceToMe < shortestDistance)
                            {
                                shortestDistance = distanceToMe;
                                closestEnemy = Player;
                            }
                        }
                    }
                }
            }
        }
    }
    return closestEnemy;
}

bool get_fog()
{
    if (Match != 0)
    {
        void *m_Match = Curent_Match();
        if(m_Match != nullptr)
        {
            uint32_t MatchIsRunning = *(uint32_t*)((uint64_t) m_Match + m_State);
            if(MatchIsRunning != 4 && MatchIsRunning != 0 && MatchIsRunning == 1)
            {

                void *Camera = Camera_main();
                if(Camera != nullptr)
                {
                    void* local_player = GetLocalPlayer(m_Match);
                    if (local_player != nullptr)
                    {
                        void *weaponOnHand = GetWeaponOnHand(local_player);
                        if (weaponOnHand != nullptr && Config.Aimbot.aimkill)
                        {
                            void *F_OOIPMACFIFL_LAEMLAPIAFD = *(void**)((uint64_t)weaponOnHand + WeaponData_m_WeaponData);
                            if(F_OOIPMACFIFL_LAEMLAPIAFD != nullptr)
                            {
                             //   auto weaponDataID = *(int*)((uint64_t) F_OOIPMACFIFL_LAEMLAPIAFD + Ammo_ID);
							 auto weaponDataID = ItemDataID550(weaponOnHand);
                                LOGI("weaponDataID : %d",weaponDataID);
                                auto baseDamage = *(int *)((uintptr_t)weaponOnHand + WeaponParams_m_WeaponParams);
                                auto PlayerID = *(COW_GamePlay_IHAAMHPPLMG_o *)((uintptr_t)local_player + PlayerID_m_PlayerID);
                                void* closestEnemy = GetClosestEnemy_AimKill();
                                if(closestEnemy != nullptr)
                                {
                                    void *F_MADMMIICBNN_GEGFCFDGGGP = *(void **)((uintptr_t)local_player + HitObjectInf_m_LastAimingInfoFromWeapon);
                                    if(F_MADMMIICBNN_GEGFCFDGGGP != nullptr)
                                    {
                                        if(!isDamage)
                                        {
                                            SetStartDamage(weaponOnHand, F_MADMMIICBNN_GEGFCFDGGGP);
                                            isDamage = true;
                                        }

                                        void *HeadColliderEnemy = get_HeadCollider(closestEnemy);
                                        if (weaponDataID != -1 && baseDamage != 0 && HeadColliderEnemy != nullptr)
                                        {
                                            auto HeadCollider_Object = get_gameObject(HeadColliderEnemy);
                                            if(HeadCollider_Object != nullptr)
                                            {
                                                Vector3 m_Head = GetHeadPosition(closestEnemy);
                                                Vector3 m_HeadLocal = GetHeadPosition(local_player);
                                                float DistanciaAteJogadorLocal = Vector3::Distance(m_HeadLocal,m_Head);

                                                auto DamageInfo = Il2CppCreateClassInstance("Assembly-CSharp.dll", "COW.GamePlay", "DamageInfo");
                                                if(DamageInfo != nullptr)
                                                {
                                                    if(TimerTakeDamageinit >= 2 && TimerTakeDamageinit <= 3)
                                                    {
                                                        //LOGI("STOP FIRE");
                                                        int max;
                                                        max = 3;
                                                        //  SwapWeapon(local_player,rand()%max,1);
                                                        ((void (*)(void *, void *))(P_StopFire))(local_player, weaponOnHand);
                                                    }

                                                    if(TimerTakeDamageinit >= 10)
                                                    {
                                                        TimerTakeDamageinit = 0;
                                                    }

                                                    *(void**) ((uint64_t)  F_MADMMIICBNN_GEGFCFDGGGP + HitObject500) = HeadCollider_Object;
                                                    *(void**) ((uint64_t)  F_MADMMIICBNN_GEGFCFDGGGP + HitCollider550) = HeadColliderEnemy;
                                                    *(int  *) ((uint64_t)  F_MADMMIICBNN_GEGFCFDGGGP + HitGroup550) = 1;
                                                    void *Player_GKHECDLGAJA = GKHECDLGAJASHIVAMBABU(local_player,F_MADMMIICBNN_GEGFCFDGGGP);
                                                    if(Player_GKHECDLGAJA != nullptr)
                                                    {
                                                        monoList<float *> *CheckParams = LCLHHHKFCFP(weaponOnHand,Player_GKHECDLGAJA,HeadColliderEnemy,false,DamageInfo);
                                                        if(CheckParams->getItems() != nullptr && CheckParams->getSize() > 0)
                                                        {
                                                            TimerTakeDamageinit++;

                                                            if (TimerTakeDamageinit >= 0 && TimerTakeDamageinit <= 1)
                                                            {
                                                                if (DistanciaAteJogadorLocal <= 100.0f)
                                                                {
                                                                    *(int*)      ((uintptr_t)   DamageInfo + BaseDamage550) = baseDamage;
                                                                    *(int*)      ((uintptr_t)   DamageInfo + HitColliderType550) = 1;
                                                                    //public string JANPNJIFOJJ; // 0x10
                                                                    *(bool *)    ((uintptr_t)    DamageInfo + isBackArea550) = true;

                                                                    *(COW_GamePlay_IHAAMHPPLMG_o *)((char*)DamageInfo + DamagerID550) = PlayerID;


                                                                    *(void**)    ((uintptr_t)    DamageInfo + WeaponPlayer) = weaponOnHand;
                                                                    *(int*)      ((uintptr_t)    DamageInfo + WeaponDataID550) = weaponDataID;
                                                                    *(Vector3 *) ((uintptr_t)    DamageInfo + FirePos550) = m_HeadLocal;
                                                                    *(Vector3 *) ((uintptr_t)    DamageInfo + HitPos550) = m_Head;  //Hitpos
                                                                    *(Vector3 *) ((uintptr_t)    DamageInfo + HitNormal550) = *(Vector3 *) ((uintptr_t) F_MADMMIICBNN_GEGFCFDGGGP + HitNormal2550);
                                                                    *(int *)     ((uintptr_t)    DamageInfo + SpecialHitType550) = *(int *) ((uintptr_t) F_MADMMIICBNN_GEGFCFDGGGP + SpecialHitType2550);

                                                                    auto AceWall =  *(monoDictionary<uint8_t*, void **> **)((uintptr_t) F_MADMMIICBNN_GEGFCFDGGGP + SpecialHitDic25);
                                                                    if(AceWall)
                                                                    {
                                                                        *(monoDictionary<uint8_t *, void **> **) ((uintptr_t) DamageInfo + SpecialHitDic5) = AceWall;
                                                                    }
                                                                    ((void (*)(void *, void *))(P_StartFiring))(local_player, weaponOnHand);//ENVIANNDO INFORMAÇAO QUE ESTA ATIRANDO

                                                                    Player_TakeDamage(closestEnemy, baseDamage, PlayerID, DamageInfo, weaponDataID, m_HeadLocal, m_Head, CheckParams, Nuls, 0);

                                                                    return ((void* (*)(void *))getAbsoluteAddressUnity(0xDE989257))(0);
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                
                            }
                        }
                    }
					}
				  
                }
            }
	     
        }
    }
    return ((void* (*)(void *))getAbsoluteAddressUnity(0xDE989257))(0);
}


#endif //JOELITONMODSFF_HOOK_H
