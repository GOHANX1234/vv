#ifndef KILLFEED_CUSTOMIZER_H
#define KILLFEED_CUSTOMIZER_H

#include <Il2Cpp.h>
#include "Unity/Unity.h"

static monoString* cached_DexterProName = nullptr;
static monoString* cached_GreenColor = nullptr;
static monoString* cached_RedColor = nullptr;

#define offset_GameFacade_get_Instance (uintptr_t) Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("COW"), OBFUSCATE("GameFacade"), OBFUSCATE("get_Instance"), 0)
#define offset_GameFacade_get_UIFacade (uintptr_t) Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("COW"), OBFUSCATE("GameFacade"), OBFUSCATE("get_UIFacade"), 0)
#define offset_UIFacade_GetView (uintptr_t) Il2CppGetMethodOffset(OBFUSCATE("Assembly-CSharp.dll"), OBFUSCATE("COW"), OBFUSCATE("UIFacade"), OBFUSCATE("GetView"), 1)

#define offset_PendingNotification_set_KillerName (uintptr_t) 0x3d59084
#define offset_PendingNotification_get_KillerName (uintptr_t) 0x3d59100
#define offset_PendingNotification_m_KillerName 0x40
#define offset_PendingNotification_KillerNameColor 0x58
#define offset_PendingNotification_BeKilledNameColor 0x60
#define offset_PendingNotification_KillerId 0x10

#define offset_UIHudKillNotificationController_m_PendingNotificationRegular 0xc0
#define offset_UIHudKillNotificationController_m_PendingNotificationWeaponWithSkin 0xc8

template <typename T>
struct monoQueue {
    void *unk0;
    void *unk1;
    monoArray<T> *array;
    int head;
    int tail;
    int size;
    int version;
    
    int getSize() {
        return size;
    }
    
    monoArray<T>* getArray() {
        return array;
    }
};

struct PlayerID {
    uint32_t m_Value;
    uint32_t m_ID;
    uint8_t m_TeamID;
    uint8_t m_ShortID;
    uint64_t m_IDMask;
};

void InitializeKillFeedCache() {
    if (!cached_DexterProName) {
        cached_DexterProName = reinterpret_cast<monoString*>(il2cpp_string_new("DEXXTER PRO"));
    }
    if (!cached_GreenColor) {
        cached_GreenColor = reinterpret_cast<monoString*>(il2cpp_string_new("#00FF00FF"));
    }
    if (!cached_RedColor) {
        cached_RedColor = reinterpret_cast<monoString*>(il2cpp_string_new("#FF0000FF"));
    }
}

void* GetLocalPlayer() {
    void* match = reinterpret_cast<void*(*)(void*)>(Match)(nullptr);
    if (!match) return nullptr;
    return *reinterpret_cast<void**>((uint64_t)match + Local);
}

uint32_t GetLocalPlayerID() {
    void* localPlayer = GetLocalPlayer();
    if (!localPlayer) return 0;
    
    PlayerID* playerID = reinterpret_cast<PlayerID*>((uint64_t)localPlayer + 0x18);
    return playerID ? playerID->m_Value : 0;
}

void SetPendingNotificationKillerName(void* notification, monoString* name) {
    if (!notification) return;
    
    typedef void (*SetKillerNameFunc)(void*, monoString*);
    SetKillerNameFunc setKillerName = (SetKillerNameFunc)(offset_PendingNotification_set_KillerName);
    if (setKillerName) {
        setKillerName(notification, name);
    }
}

void SetPendingNotificationColors(void* notification, monoString* killerColor, monoString* actionColor) {
    if (!notification) return;
    
    monoString** killerColorPtr = reinterpret_cast<monoString**>((uint64_t)notification + offset_PendingNotification_KillerNameColor);
    if (killerColorPtr) {
        *killerColorPtr = killerColor;
    }
    
    monoString** actionColorPtr = reinterpret_cast<monoString**>((uint64_t)notification + offset_PendingNotification_BeKilledNameColor);
    if (actionColorPtr) {
        *actionColorPtr = actionColor;
    }
}

void ProcessKillFeedNotifications() {
    if (!cached_DexterProName || !cached_GreenColor || !cached_RedColor) {
        InitializeKillFeedCache();
        return;
    }
    
    uint32_t localPlayerID = GetLocalPlayerID();
    if (localPlayerID == 0) return;
    
    void* uiScene = reinterpret_cast<void*(*)(void*)>(offset_CurrentUIScene)(nullptr);
    if (!uiScene) return;
    
    void* killNotiCtrl = *reinterpret_cast<void**>((uint64_t)uiScene + 0x340);
    if (!killNotiCtrl) return;
    
    monoQueue<void*>* regularQueue = *reinterpret_cast<monoQueue<void*>**>((uint64_t)killNotiCtrl + offset_UIHudKillNotificationController_m_PendingNotificationRegular);
    
    if (regularQueue && regularQueue->getSize() > 0) {
        monoArray<void*>* notifArray = regularQueue->getArray();
        if (notifArray && notifArray->max_length > 0) {
            void** notifications = (void**)notifArray->getPointer();
            int queueSize = regularQueue->getSize();
            int head = regularQueue->head;
            int arrayLength = notifArray->max_length;
            
            for (int i = 0; i < queueSize; i++) {
                int index = (head + i) % arrayLength;
                void* notification = notifications[index];
                if (!notification) continue;
                
                PlayerID* killerID = reinterpret_cast<PlayerID*>((uint64_t)notification + offset_PendingNotification_KillerId);
                if (killerID && killerID->m_Value == localPlayerID) {
                    SetPendingNotificationKillerName(notification, cached_DexterProName);
                    SetPendingNotificationColors(notification, cached_GreenColor, cached_RedColor);
                }
            }
        }
    }
    
    monoQueue<void*>* weaponQueue = *reinterpret_cast<monoQueue<void*>**>((uint64_t)killNotiCtrl + offset_UIHudKillNotificationController_m_PendingNotificationWeaponWithSkin);
    
    if (weaponQueue && weaponQueue->getSize() > 0) {
        monoArray<void*>* notifArray = weaponQueue->getArray();
        if (notifArray && notifArray->max_length > 0) {
            void** notifications = (void**)notifArray->getPointer();
            int queueSize = weaponQueue->getSize();
            int head = weaponQueue->head;
            int arrayLength = notifArray->max_length;
            
            for (int i = 0; i < queueSize; i++) {
                int index = (head + i) % arrayLength;
                void* notification = notifications[index];
                if (!notification) continue;
                
                PlayerID* killerID = reinterpret_cast<PlayerID*>((uint64_t)notification + offset_PendingNotification_KillerId);
                if (killerID && killerID->m_Value == localPlayerID) {
                    SetPendingNotificationKillerName(notification, cached_DexterProName);
                    SetPendingNotificationColors(notification, cached_GreenColor, cached_RedColor);
                }
            }
        }
    }
}

#endif
