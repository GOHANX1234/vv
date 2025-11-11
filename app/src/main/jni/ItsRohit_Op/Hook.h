
#pragma once

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <pthread.h>
#include <imgui.h>
#include <imgui_internal.h>
#include <Il2Cpp.h>
#include <Tools.h>
#include <Vector3.hpp>
#include <Color.h>
#include "aimbot.h"
#include "obfuscate.h"
#include "Unity/unity.h"
#include "Class.h"
#include "Rect.h"
//inline static int g_GlHeight, g_GlWidth;
#include "Bools.h"
#include <math.h>
#include <stdio.h>
inline static int g_GlHeight, g_GlWidth;
typedef char PACKAGENAME;
//#include "MemoryPatch.h"
// Khai Báo
struct MassKill {
float Sucks1 = 10.0f;
bool Sucks = false;
float FrontOffset = 0.10f;
}Mass;

const float MAX_DISTANCE = 99999.0f;
const float AIM_ANGLE_MULTIPLIER = 70.0f;
static int aimPosition = 0;
const float NECK_OFFSET = -0.15f;
const float CHEST_OFFSET = -0.35f;
static int aimSmoothing = 0;
static bool ignoreKnockedEnemies = false;
bool aimbotTrigger = true;

bool aimbotAim = true;
bool aimbotAuto = false;
bool aimvisivel = false;

bool Fov = false;
bool Startgs = true;
bool Funcoes = true;
bool AimbotEsp = false;
bool thongtin = false;
bool box = false;
bool line = false;
bool health = false;
bool Inimigos = true;
bool Hexagono = false;
bool Nick = false;
bool NewLaser = false;
bool Crosshair = false;
bool NewInfoPlayer = true;
bool DadosEnemy = true;
bool Esqueleto = false;
bool telegram = true;
bool EspLine = true;
const int TOP_LEFT = 0;
const int TOP = 1;
const int BOTTOM = 2;
const int CENTER = 3;
const int DISABLED = 4;
int currentLinePosition = TOP;

const int BOX_TYPE_1 = 0;
const int BOX_TYPE_2 = 1;
const int BOX_TYPE_3 = 2;
const int BOX_TYPE_4 = 3;
const int BOX_DISABLED = 4;
int currentBoxType = BOX_TYPE_1;

int selectedStyle = 1;
static int currentStyleIndex = 0;

bool Camera = true;
bool Aaa = false;

int CounterType = 0;  
int ESPMode = 0; 
// ================= LINE POSITION SELECTOR =================
static int linePos = 1;  // Default Top Center
int AimBoneMode = 2; // 0 = Foot, 1 = Chest, 2 = Head

struct up {
bool UpPlayer = false;
float UpPos = 0.20f;
}Up;

#define ICON_FA_TELEGRAM "\xef\x8b\x86" // U+f2c6
#define ICON_FA_EXCLAMATION_TRIANGLE "\xef\x81\xb1" 

                
float density = -1;
struct cfg {
    bool aimbot;
        
    int aim_type = 0;
    int aim_target = 1;
    struct _esp {
        bool Box = false;
        bool Box3D = false;
        bool Line = false;
                bool Info = false;
                //bool Egline = false;
        bool Health = false;
        bool Distance = false;
        bool IsName = false;
        bool Path = false;
        bool Esp360 = false;
        bool Target = false;
                bool Bypass = false;
                float LineThickness = 1.7f;   // Thickness of the ESP line
                
                // Individual ESP Colors (initialized from Jm_mods for backward compatibility)
                ImVec4 LineColor = ImVec4(1.5f, 2.0f, 1.5f, 2.0f);     // ESP Line color
                ImVec4 BoxColor = ImVec4(1.5f, 2.0f, 1.5f, 2.0f);      // ESP Box color
                ImVec4 NameColor = ImVec4(1.5f, 2.0f, 1.5f, 2.0f);     // ESP Name color
                ImVec4 DistanceColor = ImVec4(1.5f, 2.0f, 1.5f, 2.0f); // ESP Distance color

    }ESP;
struct _Aimbot {
bool aimkill = false;
bool speedon = false;
}Aimbot;
}inline Config;
//bool AimWhen3 = false;
///bool AimWhen2 = true;
//bool aimbotTrigger = false;
//bool box = false;
//bool totalEnemies = true;
//bool AimWhen1 = false;
//boo prince.Egline = false;
bool showbox1 = false;
bool showline1 = false;
bool camxa = false;
//bool EspGranada = false;
//EspGrenade = !EspGrenade;
bool showline2 = false;
bool AimSilent = false;
bool camcao = false;
bool showline = false;
bool speedrun = false;
bool Firewall = true;
//bool health = false;
bool Headshot = false;
bool AimNewF = true;
//int showline = 0;
bool Manix999 = false;
bool fastSwitch = false;


bool ActiveFeature = true;
int SetDamage = 1;
float AimFov2 = 360.0f;
bool SilentAim = false;
bool AimVisible2 = true;
bool RenderWatermark = true;
float DistanceTele = 0;




//const char* line[] = {OBFUSCATE("Esp Line 1"),OBFUSCATE("Esp Line 2"),OBFUSCATE("Esp Line 3")};

int showbox = 1;
//MemoryPatch  Resetguest,DouleGun,nightmod,WallHack2;

//const char* box[] = {OBFUSCATE("Esp Box"),OBFUSCATE("Esp Box 3D")};

struct sColor {
        float circle[4] = {0 / 255.0f, 255 / 255.0f, 0 / 255.0f, 255 / 255.0f};

                float box[4] = {255 / 255.0f, 255 / 255.0f, 255 / 255.0f, 255 / 255.0f};
        float line1[4] = {255 / 255.0f, 255 / 255.0f, 255 / 255.0f, 255 / 255.0f};
        float box1[4] = {255 / 255.0f, 255 / 255.0f, 255 / 255.0f, 255 / 255.0f};
        float box3d1[4] = {255 / 255.0f, 255 / 255.0f, 255 / 255.0f, 255 / 255.0f};
        float info1[4] = {0 / 255.0f, 0 / 255.0f, 0 / 255.0f, 255 / 255.0f};

        float line2[4] = {255 / 255.0f, 0 / 255.0f, 0 / 255.0f, 255 / 255.0f};
        float box2[4] = {255 / 255.0f, 0 / 255.0f, 0 / 255.0f, 255 / 255.0f};
        float box3d2[4] = {255 / 255.0f, 0 / 255.0f, 0 / 255.0f, 255 / 255.0f};
        float info2[4] = {255 / 255.0f, 0 / 255.0f, 0 / 255.0f, 255 / 255.0f};
};
sColor Color;
bool Reset = false;



bool isOutsideScreen(ImVec2 pos, ImVec2 screen) {
    if (pos.y < 0) {
        return true;
    }
    if (pos.x > screen.x) {
        return true;
    }
    if (pos.y > screen.y) {
        return true;
    }
    return pos.x < 0;
}

ImVec2 pushToScreenBorder(ImVec2 Pos, ImVec2 screen, int offset) {
    int x = (int) Pos.x;
    int y = (int) Pos.y;
    
    if (Pos.y < 0) {
        y = -offset;
    }
    
    if (Pos.x > screen.x) {
        x = (int) screen.x + offset;
    }
    
    if (Pos.y > screen.y) {
        y = (int) screen.y + offset;
    }
    
    if (Pos.x < 0) {
        x = -offset;
    }
    return ImVec2(x, y);
}

static float tm = 127 / 255.f;

void(*Set_Aim)(void* _this);
void _Set_Aim(void* _this) {
    return;
    return Set_Aim(_this);
}

// BYPASS
bool(*Bypass)(void* bypass); 
bool _Bypass(void* bypass) { 
    return false;
}

bool(*FixGame)(void* _this);
bool _FixGame(void* _this) {
    if (_this != NULL) {
        return true;
    }
}

bool(*BypassESP)(void* _this);
bool _BypassESP(void* _this) {
    return true;
}

bool(*Bypass2)(void* _this);
bool _Bypass2(void* _this) {
    return true;
}

void DrawCircleHealth(ImVec2 position, int health, int max_health, float radius) {
    float a_max = ((3.14159265359f * 2.0f));
    ImU32 healthColor = IM_COL32(45, 180, 45, 255);
    if (health <= (max_health * 0.6)) {
        healthColor = IM_COL32(180, 180, 45, 255);
    }
    if (health < (max_health * 0.3)) {
        healthColor = IM_COL32(180, 45, 45, 255);
    }
    ImGui::GetForegroundDrawList()->PathArcTo(position, radius, (-(a_max / 4.0f)) + (a_max / max_health) * (max_health - health), a_max - (a_max / 4.0f));
    ImGui::GetForegroundDrawList()->PathStroke(healthColor, ImDrawFlags_None, 4);
}

void drawText2(int x, int y, long color, const char *str, float size) {
    ImGui::GetBackgroundDrawList()->AddText(NULL, size, ImVec2(x, y), color, str);
}

void DrawRectFilled(int x, int y, int w, int h, ImColor color) {
    ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), color, 0, 0);
}

void DrawRectFilledHealth(int x, int y, int w, int h, ImVec4 color) {
    ImGui::GetBackgroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), ImGui::ColorConvertFloat4ToU32(color), 0, 0);
}

void DrawTriangle(int x1, int y1, int x2, int y2, int x3, int y3, int color, int T) {
    ImGui::GetBackgroundDrawList()->AddTriangleFilled(ImVec2(x1, y1), ImVec2(x2, y2), ImVec2(x3, y3), color);
}

void DrawHealths(Rect box, float entityHealth, float maxHealth, int TeamID, const char* name, long color) {
    float x = box.x - (140 - box.w) / 2;
    float y = box.y;
    char dis[20];
    // sprintf(dis, "%0.fM", d);

    char TeamText[20];
    sprintf(TeamText, "%d", (int)TeamID);
    ImVec4 HPColor = ImVec4{1, 1, 0, 127 / 255.f}; // Màu mặc định cho máu

    if (entityHealth < maxHealth) {
        float healthPercentage = entityHealth / maxHealth;

        if (healthPercentage < 0.3f) {
            HPColor = ImVec4{0.5f, 0.0f, 0.0f, 127 / 255.f}; // Màu đỏ cho máu thấp
        } else if (healthPercentage < 0.6f) {
            HPColor = ImVec4{1, 0, 0, 127 / 255.f}; // Màu cam cho máu trung bình
        }
    }

    tm = 100.f / 255.f;
    DrawRectFilled(x - strlen(name), y - 41, 120 + strlen(name) * 2, 20, color); // Đám mây nền cho tên người chơi
    tm = 255.f / 255.f;
    DrawRectFilled(x - strlen(name), box.y - 41, 25, 20, color);
    if (strlen(TeamText) < 2) {
        drawText2(x + 6 - strlen(name), box.y - 42, ImColor(255,255,255), TeamText, 18.943);
    } else {
        drawText2(x - strlen(name), box.y - 42, ImColor(255,255,255), TeamText, 18.943);
    }
    drawText2(x + 28 - strlen(name), y - 43, ImColor(255,255,255), name, 18.943);
    float maxWidth = 120; // Độ dài tối đa của thanh máu
    float healthBarWidth = entityHealth * maxWidth / maxHealth; // Độ dài thanh máu dựa trên tỷ lệ máu hiện tại và máu tối đa
    DrawRectFilledHealth(x - maxWidth / 2, y - 18, healthBarWidth, 8, HPColor);// cập nhật vị trí và kích thước của thanh máu
    drawText2(x + 125 + strlen(name), y - 43, ImColor(255,255,255), dis,18.943);
    DrawTriangle(box.x + box.w / 2 - 10, y - 8, box.x + box.w / 2 + 15 - 10, y - 8, box.x + box.w / 2 - 2, y, ImColor(255,255,255), 1);
}

static float SetFieldOfView = 0, GetFieldOfView = 0;

float (*get_deltaTime)();
float smoothSpeedAIM = 5; 
void *MyPlayer = NULL;
bool Drone;

const float RADAR_SIZE = 200.0f; // kích thước của radar
const ImVec2 RADAR_CENTER(100.0f, 100.0f); // tọa độ trung tâm của radar

float x,y;
float enemy1 = 2.0f;

inline void DrawAIMBOT(float screenWidth, float screenHeight) { 
}

void DroneView() {
    if (GetFieldOfView == 0) {
        GetFieldOfView = get_fieldOfView();
    }
    if (SetFieldOfView > 0 && GetFieldOfView != 0) {
        set_fieldOfView((float)GetFieldOfView + SetFieldOfView);
    }
    if (SetFieldOfView == 0 && GetFieldOfView != 0) {
        set_fieldOfView((float)GetFieldOfView);
    }
}

Quaternion GetRotationToTheLocation(Vector3 Target, float Height, Vector3 MyEnemy) {
return Quaternion::LookRotation((Target + Vector3(0, Height, 0)) - MyEnemy, Vector3(0, 1, 0));
}

bool isVisible(void *enemy)  {
    if(enemy != NULL)  {
         void *hitObj = NULL;
         auto Camera = Transform_GetPosition(Component_GetTransform(Camera_main()));
         auto Target = Transform_GetPosition(Component_GetTransform(Player_GetHeadCollider(enemy)));
         return !Physics_Raycast(Camera, Target, 12, &hitObj);
    }
    return false;
}
bool Visible_Check(void *closestEnemy) {
    void *Object = static_cast<void *>(nullptr);
    Vector3 Camera = Transform_INTERNAL_GetPosition(Component_GetTransform(Camera_main()));
    Vector3 Collider = Transform_INTERNAL_GetPosition(Component_GetTransform(GetHeadCollider(closestEnemy)));
    if (!Cristiano_RayVery(Camera, Collider, 12, &Object)) {
        return true;
    } else {
        return false;
    }
}
void *GetClosestEnemy() {
    float shortestDistance = 9999;
    void* closestEnemy = NULL;   
     
    void* get_MatchGame = Curent_Match();
    void* LocalPlayer = GetLocalPlayer(get_MatchGame);

    if (LocalPlayer != NULL && get_MatchGame != NULL && Enable && get_MatchGame) {
        monoDictionary<uint8_t *, void **> *players = *(monoDictionary<uint8_t*, void **> **)((long)get_MatchGame + ListPlayer);
        
        for (int u = 0; u < players->getNumValues(); u++) {
            void* Player = players->getValues()[u]; 
            if (Player != NULL && !get_isLocalTeam(Player) && !get_IsDieing(Player) && get_isVisible(Player) && get_MaxHP(Player)) {    
                Vector3 PlayerPos = getPosition(Player);
                Vector3 LocalPlayerPos = getPosition(LocalPlayer);
                Vector3 pos2 = WorldToScreenPoint(Camera_main(), PlayerPos);
                bool isFov1 = isFov(Vector3(pos2.x, pos2.y), Vector3(g_GlWidth / 2, g_GlHeight / 2), Fov_Aim);
            
                
                
                
                float distance = Vector3::Distance(LocalPlayerPos, PlayerPos);
                if (distance < 1000) {
                    Vector3 targetDir = Vector3::Normalized(PlayerPos - LocalPlayerPos);
                    float angle = Vector3::Angle(targetDir, GetForward(Component_GetTransform(Camera_main()))) * 100.0;             
            
                    if (angle <= Fov_Aim && isFov1 && angle < shortestDistance) {
                     if(isVisible(Player)) {
                        shortestDistance = angle;
                        closestEnemy = Player;
                    }
                   }
                }
            }
        }
    }
    return closestEnemy;
}






void *EnemyVisible(void *match) {
    if(!match || !ActiveFeature) {
        return nullptr;
    }
    float shortestDistance = 99999.0f;
    float maxAngle=AimFov2;
    void* closestEnemy = NULL;
    void* LocalPlayer = GetLocalPlayer(match);
    if(LocalPlayer != nullptr) {
        monoDictionary<uint8_t *, void **> *players = *(monoDictionary<uint8_t*, void **> **)((long)match + offset_Dictionary);        
        for(int u = 0; u < players->getNumValues(); u++) {
            void* Player = players->getValues()[u];
            if(Player != NULL && !get_isLocalTeam(Player) && !get_IsDieing(Player) && get_isVisible(Player) && get_MaxHP(Player)) {
               Vector3 PlayerPos = GetHeadPosition(Player);
               Vector3 LocalPlayerPos = GetHeadPosition(LocalPlayer);              
               Vector3 targetDir = Vector3::Normalized(PlayerPos - LocalPlayerPos);
               float angle = Vector3::Angle(targetDir, GetForward(Component_GetTransform(Camera_main()))) * 100.0;
               if (!get_God(Player)) {
                if (AimVisible2) {
                    if (Visible_Check(Player)) {
                       if(angle <= maxAngle) {
                        if(angle < shortestDistance) {
                            shortestDistance = angle;
                            closestEnemy = Player;
                            }
                        }
                    }
                }else if (!AimVisible2) {
                      if(angle <= maxAngle) {
                       if(angle < shortestDistance) {
                            shortestDistance = angle;
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

void *GetClosestEnemy2(void *match) {
    if(!match || !ActiveFeature) {
        return nullptr;
    }
    float shortestDistance = 99999.0f;
    float maxAngle=AimFov2;
    void* closestEnemy = NULL;
    void* LocalPlayer = GetLocalPlayer(match);
    if(LocalPlayer != nullptr) {
        monoDictionary<uint8_t *, void **> *players = *(monoDictionary<uint8_t*, void **> **)((long)match + offset_Dictionary);        
        for(int u = 0; u < players->getNumValues(); u++) {
            void* Player = players->getValues()[u];
            if(Player != NULL && !get_isLocalTeam(Player) && !get_IsDieing(Player) && get_isVisible(Player) && get_MaxHP(Player)) {
               Vector3 PlayerPos = GetHeadPosition(Player);
               Vector3 LocalPlayerPos = GetHeadPosition(LocalPlayer);              
               Vector3 targetDir = Vector3::Normalized(PlayerPos - LocalPlayerPos);
               float angle = Vector3::Angle(targetDir, GetForward(Component_GetTransform(Camera_main()))) * 100.0;
               if (!get_God(Player)) {
                       if(angle <= maxAngle) {
                        if(angle < shortestDistance) {
                            shortestDistance = angle;
                            closestEnemy = Player;
                            }
                        }
                    }
                }
           }
       }
    return closestEnemy;
}
void Aimbot2(void *LocalPlayer, void *Player) {
void* CurrentMatch = Curent_Match();
  if(CurrentMatch != nullptr) {
     void* LocalPlayer = GetLocalPlayer(CurrentMatch);
         if(LocalPlayer != nullptr) {
         void *WeaponHand = GetWeaponOnHand1(Current_Local_Player());
         void *camera = Camera_main();

            void* closestEnemy = GetClosestEnemy2(CurrentMatch);
            if(closestEnemy != nullptr) {
            Vector3 LocalPlayerPos2 = GetAttackableCenterWS(LocalPlayer);
            Vector3 LocalPlayerPos = GetHeadPosition(LocalPlayer);
            Vector3 PlayerLocation = CameraMain(LocalPlayer);
            Vector3 PlayerHeadPos = GetHeadPosition(closestEnemy);
             Vector3 PositionRoot = WorldToScreenPoint(camera, Transform_INTERNAL_GetPosition(Component_GetTransform(closestEnemy)));
             Vector3 PositionHead = WorldToScreenPoint(camera, Transform_INTERNAL_GetPosition(Component_GetTransform(closestEnemy)) + Vector3(0, 1.9f, 0));
             float distance = Vector3::Distance(PlayerHeadPos, LocalPlayerPos);
             DistanceTele = distance;
              auto *Player = EnemyVisible(CurrentMatch);
                if (Player != nullptr && EnemyVisible != LocalPlayer) {
                
           if (Aim == 0) {
             SetDamage = 1;
           }else if (Aim == 1) {
             SetDamage = 0;
           }
           
           

          
          
           
    
          
      
      }
      }}}
      

}
bool isEnemyInRangeWeapon(void *player, void *enemy, void* weapon)
{
    if (player != nullptr && enemy != nullptr && weapon != nullptr)
    {
        Vector3 EnemyHeadPosition = GetHeadPosition(enemy);
        Vector3 PlayerHeadPosition = GetHeadPosition(player);
        float distance = Vector3::Distance(PlayerHeadPosition, EnemyHeadPosition);
        float range = get_Range(weapon);

        if (distance <= range) {
            return true;
        }
    }
    return false;
}
struct HitObjectInfo {
    void *klass;
    void *monitor;
    bool m_IsInPool;
    void *HitObject;
    void *HitCollider;
    Vector3 HitLocation;
    Vector3 HitNormal;
    Vector3 RayDir;
    Vector3 StartPosition;
    int32_t Damage;
    float Distance;
    int32_t ActorLayer;
    int32_t HitGroup;
    void *HitPhysicMaterial;
    bool IgnoreHappens;
    bool ViewBlocked;
    struct Vector3 OrigStartPosition;
    uint8_t SpecialHitType;
    uint32_t SpecialHitLevelObjID;
};
struct PlayerID_MKFEKBKJCKE_o;

struct PlayerID {
    uint32_t NBPDJAAAFBH;
    uint32_t JEDDPHIHGKL;
    uint8_t IOICFFEKAIL;
    uint8_t PHAFNFOFFDB;
    uint64_t BNFAIDHEHOM;
};

struct DamageInfo2_o {
    void *klass;
    void *monitor;
    int32_t DBLBLKADCNP;
    int32_t KENBMOOEHBG;
    monoString* JANPNJIFOJJ;
    bool NNNADMOFPIE;
    PlayerID DHGCIEKPBFA;
    void* GPBDEDFKJNA;
    int32_t PIAMIOFEBKF;
    Vector3 CNEICNJFGLM;
    Vector3 HECJHKEDFEB;
    Vector3 JNLGFLFLBHO;
    uint8_t ACAKHEABPEJ;
    bool MJIHLDJNHLF;
    int32_t LOKIMAEAPCB;
    monoDictionary<uint8_t*, void **> *FHLFLAHCIBN;
};


int (*orig_PlayerNetwork_TakeDamage)(void *ClosestEnemy, int baseDamage, PlayerID damager, DamageInfo2_o *damageInfo, int weaponDataID, Vector3 firePos, Vector3 hitPos, monoList<float> checkParams, void *damagerWeaponDynamicInfo, int damagerVehicleID);
int hook_PlayerNetwork_TakeDamage(void *ClosestEnemy, int baseDamage, PlayerID damager, DamageInfo2_o *damageInfo, int weaponDataID, Vector3 firePos, Vector3 hitPos, monoList<float> checkParams, void *damagerWeaponDynamicInfo, int damagerVehicleID){
   //  DamageInfoHook = damageInfo;
     void* CurrentMatch = Curent_Match();
     void* LocalPlayer = GetLocalPlayer(CurrentMatch);
       firePos = GetHeadPosition(LocalPlayer);
       hitPos = GetHeadPosition(ClosestEnemy);
   if (ClosestEnemy != NULL && Headshot){
   if (damageInfo != NULL) {
     *(int *)((long) damageInfo + offset_BodyPart) = 1;
   }
  }
  return orig_PlayerNetwork_TakeDamage(ClosestEnemy, baseDamage, damager, damageInfo, weaponDataID, firePos, hitPos, checkParams, damagerWeaponDynamicInfo, damagerVehicleID);
}




int (*old_BLAGCMCGEJG1)(void *, HitObjectInfo *);
int BLAGCMCGEJG1(void *ist, HitObjectInfo *HitObject){
 if (SilentAim) {
  if (HitObject != nullptr){
    void *current_match = Curent_Match();
      if (current_match != NULL){
       void* local_player = GetLocalPlayer(current_match);
        if (local_player != NULL){
         void* WeaponHand = GetWeaponOnHand1(local_player);
         auto *ClosestEnemy = EnemyVisible(current_match);
          if (ClosestEnemy != nullptr){
            if (isEnemyInRangeWeapon(local_player, ClosestEnemy, WeaponHand)) {
            Vector3 EnemyLocation;
             if (SetDamage == 1) {
               EnemyLocation = GetHeadPosition(ClosestEnemy);
               }else if (SetDamage == 0){
               EnemyLocation = GetHipPosition(ClosestEnemy);}
               Vector3 PlayerLocation = CameraMain(local_player);
               HitObject->HitObject = get_gameObject(GetHeadCollider(ClosestEnemy));
               HitObject->HitCollider = GetHeadCollider(ClosestEnemy);
               HitObject->HitLocation = EnemyLocation;
               HitObject->HitNormal = EnemyLocation;
               HitObject->RayDir = Vector3::Normalized(EnemyLocation - PlayerLocation);
               HitObject->StartPosition = PlayerLocation;
               HitObject->OrigStartPosition = PlayerLocation;
               HitObject->SpecialHitType = 0;
               HitObject->HitGroup = 1;
               HitObject->IgnoreHappens = false;
               HitObject->ViewBlocked = false;
                    }
                 }
              }
           }
        }
     }
 return old_BLAGCMCGEJG1(ist, HitObject);
}








int damageCooldown = 0;
int tS1,tS2,tS3;


void _DarkUpdateX(void *player) {
  if (player != nullptr) {
      void *current_match = Curent_Match();
        if (current_match != NULL) {
          auto *PlayerS = EnemyVisible(current_match);
           void *local_player = Current_Local_Player();              
            if (local_player == NULL) {
                local_player = GetLocalPlayerOrObServer();
            }
            if (local_player != NULL) {
                void *fakeCamPlayer = get_MyFollowCamera(local_player);
                void *fakeCamEnemy = get_MyFollowCamera(player);
                if (fakeCamPlayer != NULL && fakeCamEnemy != NULL) {
                    void *fakeCamPlayerTF = Component_GetTransform(fakeCamPlayer);
                    void *fakeCamEnemyTF = Component_GetTransform(player);
                    if (fakeCamPlayerTF != NULL && fakeCamEnemyTF != NULL){
                        Vector3 fakeCamPlayerPos = Transform_INTERNAL_GetPosition(fakeCamPlayerTF);
                        Vector3 fakeCamEnemyPos = Transform_INTERNAL_GetPosition(fakeCamEnemyTF);
                        float distance = Vector3::Distance(fakeCamPlayerPos, fakeCamEnemyPos);
                        if (player != local_player){
                            if (distance > 0.1f) {
                                bool isSameTeam = get_isLocalTeam(player);
                                bool isVisible = get_isVisible(player);
                                bool isDieing = get_IsDieing(player);
                                if (!isSameTeam && isVisible && !isDieing) {
                                    if (ActiveFeature) {
                                Aimbot2(local_player, player);
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

bool IsVisible(void * player){
if(player != NULL) {
void *hitObj = NULL;
Vector3 cameraLocation = Transform_GetPosition(Component_GetTransform(Camera_main()));
Vector3 headLocation = Transform_GetPosition(Component_GetTransform(Player_GetHeadCollider(player)));
return !Physics_Raycast(cameraLocation, headLocation, 12, &hitObj);
}
return false;
}

/*void* GetClosestEnemy() {
float shortestDistance = MAX_DISTANCE;
void* closestEnemy = NULL; 
void* get_MatchGame = Curent_Match();
void* LocalPlayer = GetLocalPlayer(get_MatchGame);
if (LocalPlayer != NULL && get_MatchGame != NULL && Startgs) {
monoDictionary<uint8_t*, void**>* players = *(monoDictionary<uint8_t*, void**>**)((long)get_MatchGame + ListPlayer);
for (int u = 0; u < players->getNumValues(); u++) {
void* Player = players->getValues()[u]; 
if (Player != NULL && !get_isLocalTeam(Player) 
&& (ignoreKnockedEnemies || !get_IsDieing(Player))
&& get_isVisible(Player) && get_MaxHP(Player)) {
Vector3 PlayerPos = getPosition(Player);
Vector3 LocalPlayerPos = getPosition(LocalPlayer);
float distance = Vector3::Distance(LocalPlayerPos, PlayerPos);
Vector3 targetDir = Vector3::Normalized(PlayerPos - LocalPlayerPos);
float angle = Vector3::Angle(targetDir, GetForward(Component_GetTransform(Camera_main()))) * AIM_ANGLE_MULTIPLIER;
if (distance < Aimdis && angle <= Fov_Aim) {
if (angle < shortestDistance) {
shortestDistance = angle;
closestEnemy = Player;
}
}
}
}
}
return closestEnemy;
}*/

Vector3 GetAdjustedPosition(void* closestEnemy) {
Vector3 headPos = GetHeadPosition(closestEnemy);
if (aimPosition == 1) {
headPos.y += NECK_OFFSET;
} else if (aimPosition == 2) {
Vector3 hipPos = GetHipPosition(closestEnemy);
headPos = Vector3::Lerp(headPos, hipPos, 0.5f);
} else if (aimPosition == 3) {
headPos = GetHipPosition(closestEnemy);
}
return headPos;
}

Quaternion GetCameraRotation(void* localPlayer) {
return GetRotation(Component_GetTransform(Camera_main()));
}

void Aimbott() {
if (!AimbotEsp) return;
void* current_Match = Curent_Match();
void* local_player = GetLocalPlayer(current_Match);
void* closestEnemy = GetClosestEnemy();
if (closestEnemy != NULL && local_player != NULL && current_Match != NULL) {
Vector3 enemyLocation = GetAdjustedPosition(closestEnemy);
Vector3 playerLocation = CameraMain(local_player);
Quaternion currentRotation = GetCameraRotation(local_player);
Quaternion targetRotation = GetRotationToLocation(enemyLocation, 0.1f, playerLocation);
Quaternion smoothRotation;
if (aimSmoothing == 0) {
smoothRotation = targetRotation;
} else {
float smoothFactor = aimSmoothing / 10.0f;
smoothRotation = Quaternion::Slerp(currentRotation, targetRotation, smoothFactor);
}
bool isScopeOn = get_IsSighting(local_player);
bool isFiring = get_IsFiring(local_player);
if (aimbotAuto) {
set_aim(local_player, smoothRotation);
} else if (aimbotTrigger && isFiring) {
set_aim(local_player, smoothRotation);
} else if (aimbotAim && isScopeOn) {
set_aim(local_player, smoothRotation);
} else if (aimbotTrigger && aimbotAim && (isFiring || isScopeOn)) {
set_aim(local_player, smoothRotation);
}
}
}
        

inline void DrawESP(float screenWidth, float screenHeight) {
    ImDrawList* draw = ImGui::GetBackgroundDrawList();
        

    // Store the counter bottom position for ESP lines and box dimensions for counter alignment
    static float counterBottomY = 110.0f;
    static float dexterBoxY = 10.0f;
    static float dexterBoxHeight = 40.0f;
    int totalEnemies = 0;

    // ===== DEXXTER BOX - ALWAYS VISIBLE =====
    {
        const char* boxText = "DEXXTER";
        float boxFontSize = 28.0f;
        
        // Get proper font metrics for accurate sizing
        ImFont* font = ImGui::GetFont();
        float fontScale = boxFontSize / font->FontSize;
        ImVec2 textSize = font->CalcTextSizeA(boxFontSize, FLT_MAX, 0.0f, boxText);
        float textHeight = (font->Ascent - font->Descent) * fontScale;
        
        // Compact padding for tight fit
        float boxPaddingX = 10.0f;
        float boxPaddingY = 6.0f;
        float boxWidth = textSize.x + (boxPaddingX * 2);
        float boxHeight = textHeight + (boxPaddingY * 2);
        float boxX = (screenWidth / 2.0f) - (boxWidth / 2.0f);
        float boxY = 10.0f;
        
        // Store for counter alignment
        dexterBoxY = boxY;
        dexterBoxHeight = boxHeight;
        
        // Draw black background
        draw->AddRectFilled(
            ImVec2(boxX, boxY),
            ImVec2(boxX + boxWidth, boxY + boxHeight),
            IM_COL32(0, 0, 0, 255)
        );
        
        // Draw green border
        draw->AddRect(
            ImVec2(boxX, boxY),
            ImVec2(boxX + boxWidth, boxY + boxHeight),
            IM_COL32(50, 255, 50, 255),
            0.0f, 0, 2.0f
        );
        
        // Draw thick green line at bottom of box
        draw->AddLine(
            ImVec2(boxX, boxY + boxHeight),
            ImVec2(boxX + boxWidth, boxY + boxHeight),
            IM_COL32(50, 255, 50, 255),
            4.0f
        );
        
        // Draw DEXXTER text with perfect centering using font descent adjustment
        float textX = boxX + (boxWidth - textSize.x) / 2.0f;
        float textY = boxY + (boxHeight - textHeight) / 2.0f - (font->Descent * fontScale);
        draw->AddText(NULL, boxFontSize, ImVec2(textX, textY), IM_COL32(255, 255, 255, 255), boxText);
        
        // ESP lines will start from the bottom thick green line
        counterBottomY = boxY + boxHeight;
    }
    // ===== END DEXXTER BOX =====

        if (Enable) {
        void* current_Match = Curent_Match();
        void* local_player = GetLocalPlayer(current_Match);

        if (local_player && current_Match) {
            auto* players = *(monoDictionary<uint8_t*, void**>**)((long)current_Match + ListPlayer);
            void* camera = Camera_main();

            if (players && camera) {
                // PASS 1: Count enemies only
                for (int u = 0; u < players->getNumValues(); u++) {
                    void* closestEnemy = players->getValues()[u];
                    if (closestEnemy != local_player && closestEnemy && get_isVisible(closestEnemy) && !get_isLocalTeam(closestEnemy)) {
                        Vector3 Toepos = getPosition(closestEnemy);
                        Vector3 Toeposi = WorldToScreenPoint(camera, Toepos);
                        if (Toeposi.z < 1) continue;

                        Vector3 HeadPos = getPosition(closestEnemy) + Vector3(0, 1.9f, 0);
                        Vector3 HeadPosition = WorldToScreenPoint(camera, HeadPos);
                        if (HeadPosition.z < 1) continue;
                        
                        totalEnemies++;
                    }
                }
                
                // Render player counter positioned below DEXXTER box
                if (totalEnemies > 0) {
                    std::string enemiesCount = std::to_string(totalEnemies);
                    
                    // Use proper font metrics for pixel-perfect positioning
                    ImFont* font = ImGui::GetFont();
                    float counterFontSize = 45.0f;
                    float counterScale = counterFontSize / font->FontSize;
                    float textHeight = (font->Ascent - font->Descent) * counterScale;
                    
                    // Calculate total width of all digits with tight spacing
                    float totalWidth = 0.0f;
                    for (size_t i = 0; i < enemiesCount.length(); i++) {
                        std::string digit(1, enemiesCount[i]);
                        ImVec2 digitSize = font->CalcTextSizeA(counterFontSize, FLT_MAX, 0.0f, digit.c_str());
                        totalWidth += digitSize.x;
                        if (i < enemiesCount.length() - 1) {
                            totalWidth += digitSize.x * 0.15f; // Tight gap (85% of digit width)
                        }
                    }
                    
                    // Calculate baseline Y to position counter below DEXXTER box with proper spacing
                    float counterSpacing = ImGui::GetStyle().ItemSpacing.y;
                    float textTop = counterBottomY + counterSpacing;
                    float baselineY = textTop - (font->Descent * counterScale);
                    
                    // Start X position (centered horizontally)
                    float currentX = (screenWidth / 2.0f) - (totalWidth / 2.0f);
                    
                    // Draw each digit with alternating red and green colors
                    for (size_t i = 0; i < enemiesCount.length(); i++) {
                        std::string digit(1, enemiesCount[i]);
                        ImVec2 digitSize = font->CalcTextSizeA(counterFontSize, FLT_MAX, 0.0f, digit.c_str());
                        
                        // Alternate between red and green
                        ImColor digitColor = (i % 2 == 0) ? ImColor(255, 50, 50) : ImColor(50, 255, 50);
                        
                        draw->AddText(NULL, counterFontSize, ImVec2(currentX, baselineY), digitColor, digit.c_str());
                        currentX += digitSize.x + (digitSize.x * 0.15f); // Move to next digit with tight spacing
                    }
                }
                
                // PASS 2: Draw ESP elements for each enemy
                for (int u = 0; u < players->getNumValues(); u++) {
                    void* closestEnemy = players->getValues()[u];
                    if (closestEnemy != local_player && closestEnemy && get_isVisible(closestEnemy) && !get_isLocalTeam(closestEnemy)) {
                        Vector3 Toepos = getPosition(closestEnemy);
                        Vector3 Toeposi = WorldToScreenPoint(camera, Toepos);
                        if (Toeposi.z < 1) continue;

                        Vector3 HeadPos = getPosition(closestEnemy) + Vector3(0, 1.9f, 0);
                        Vector3 HeadPosition = WorldToScreenPoint(camera, HeadPos);
                        if (HeadPosition.z < 1) continue;

                        

                        float distance = Vector3::Distance(getPosition(local_player), Toepos);
                        float Height = abs(HeadPosition.y - Toeposi.y) * (1.2 / 1.1);
                        float Width = Height * 0.50f;
                        Rect rect = Rect(HeadPosition.x - Width / 2.f, screenHeight - HeadPosition.y, Width, Height);

                if (Mass.Sucks) {
    if (closestEnemy != NULL && local_player != NULL && closestEnemy != local_player && !get_IsDieing(closestEnemy)) {
        void* playerTransform = Component_GetTransform(local_player);
        void* enemyTransform  = Component_GetTransform(closestEnemy);

        if (playerTransform != NULL && enemyTransform != NULL) {
            Vector3 LocalPlayerPos = Transform_GetPosition(playerTransform);
            Vector3 EnemyPos       = Transform_GetPosition(enemyTransform);

            float distance = Vector3::Distance(LocalPlayerPos, EnemyPos);

            if (distance <= Mass.Sucks1) {
                Vector3 forward = GetForward(playerTransform);
                Vector3 newPos  = LocalPlayerPos + (forward * Mass.FrontOffset);

                // Optional: Validate newPos sanity
                if (isfinite(newPos.x) && isfinite(newPos.y) && isfinite(newPos.z)) {
                    Transform_INTERNAL_SetPosition(enemyTransform, Vvector3(newPos.x, newPos.y, newPos.z));
                }
            }
        }
    }
}
        
if (Up.UpPlayer) {
if (get_isVisible(local_player)) {
void *_TeleCarTP = Component_GetTransform(closestEnemy);
void *_MountTF = _TeleCarTP;
Vector3 MountTF =Transform_INTERNAL_GetPosition(_MountTF) -(GetForward(_MountTF) * 0.0f);
Transform_INTERNAL_SetPosition(Component_GetTransform(closestEnemy),Vvector3(MountTF.x, MountTF.y+Up.UpPos, MountTF.z));
}
}

//=====================================P20 CODE START =========================================///


//=====================================P20 CODE END =========================================///
// ✅ Agar banda down hai to transparent color use karo
bool isDown = get_IsDieing(closestEnemy);

// --- BOX ESP ---
if (Config.ESP.Box) {
    int x = rect.x;
    int y = rect.y;
    int w = rect.w;
    int h = rect.h;

    ImColor boxColor = isDown 
        ? ImColor(0, 0, 0, 0)    // Down hai to transparent
        : ImColor((ImVec4)Config.ESP.BoxColor);

    ImColor topColor    = isDown ? ImColor(0,0,0,0) : ImColor(Config.ESP.BoxColor.x, Config.ESP.BoxColor.y, Config.ESP.BoxColor.z, 0.02f);
    ImColor bottomColor = isDown ? ImColor(0,0,0,0) : ImColor(Config.ESP.BoxColor.x, Config.ESP.BoxColor.y, Config.ESP.BoxColor.z, 1.0f);

    draw->AddRectFilledMultiColor(
        ImVec2(x, y),
        ImVec2(x + w, y + h),
        topColor, topColor,
        bottomColor, bottomColor
    );

    draw->AddRect(ImVec2(x, y), ImVec2(x + w, y + h), boxColor, 0.0f, 0, 1.5f);
}

// --- LINE ESP ---
if (Config.ESP.Line) {
    ImGuiIO& io = ImGui::GetIO();
    // ESP lines now start from below the player counter background
    ImVec2 screenCenter = ImVec2(io.DisplaySize.x / 2, counterBottomY);
    ImVec2 enemyPos = ImVec2(rect.x + rect.w / 2, rect.y + rect.h / 35);

    ImColor lineColor = isDown ? ImColor(0,0,0,0) : ImColor(Config.ESP.LineColor);

    draw->AddLine(screenCenter, enemyPos, lineColor, Config.ESP.LineThickness);
}

// --- HEALTH ESP (isko hide karna hai down hone par?) ---
if (Config.ESP.Health && !isDown) {   // ✅ Down hai to health bhi hide
    int currentHP = GetHp(closestEnemy);
    int maxHP = get_MaxHP(closestEnemy);

    float healthBarWidth = 5.0f;
    float healthBarHeight = rect.h;
    float healthX = rect.x + rect.w + 5;
    float healthY = rect.y;

    draw->AddRectFilled(ImVec2(healthX, healthY),    
                        ImVec2(healthX + healthBarWidth, healthY + healthBarHeight),    
                        ImColor(0, 0, 0, 180));    

    ImColor healthColor = (currentHP > maxHP * 0.6) ? ImColor(0, 255, 0, 255) :       
                          (currentHP > maxHP * 0.3) ? ImColor(255, 255, 0, 255) :      
                          ImColor(255, 0, 0, 255);    

    float hpPerc = (currentHP / (float)maxHP);    
    draw->AddRectFilled(ImVec2(healthX, healthY + healthBarHeight * (1 - hpPerc)),    
                        ImVec2(healthX + healthBarWidth, healthY + healthBarHeight),    
                        healthColor);
}

// --- NAME ESP ---
if (Config.ESP.IsName && !isDown) {   // ✅ Down hai to hide
    monoString* Nick = get_NickName(closestEnemy);
    std::string names;
    if (Nick != nullptr) {
        int nick_Len = Nick->getLength();
        for (int i = 0; i < nick_Len; i++) {
            char data = get_Chars(Nick, i);
            names += isascii(data) ? data : '?';
        }
    }

    if (!names.empty()) {
        float textScale = 0.7f;
        ImVec2 textSize = ImGui::CalcTextSize(names.c_str());

        // ✅ Head ke bilkul center me upar
        float textX = rect.x + (rect.w / 2) - (textSize.x * textScale / 2);
        float textY = rect.y - (textSize.y * textScale) - 5;   // head se thoda gap

        draw->AddText(nullptr, 18 * textScale, ImVec2(textX, textY),
                      ImColor(Config.ESP.NameColor), names.c_str());
    }
}

// --- DISTANCE ESP ---
if (Config.ESP.Distance && !isDown) {   // ✅ Down hai to hide
    std::string distanceText = "[" + std::to_string((int)distance) + "M]";
    float distScale = 0.7f;
    ImVec2 distSize = ImGui::CalcTextSize(distanceText.c_str());

    // ✅ Feet ke bilkul center me niche
    float distX = rect.x + (rect.w / 2) - (distSize.x * distScale / 2);
    float distY = rect.y + rect.h + (distSize.y * distScale) + 5;  // feet ke thoda niche

    draw->AddText(nullptr, 16 * distScale, ImVec2(distX, distY),
                  ImColor(Config.ESP.DistanceColor), distanceText.c_str());
}
                    }
                }
                                
                                
                                }
                                
                                
                
                
                
    
}


/*
if (Config.ESP.Box) {
    int x = rect.x;
    int y = rect.y;
    int w = rect.w;
    int h = rect.h;

    ImColor boxColor = get_IsDieing(closestEnemy) 
    ? ImColor(255, 0, 0, 255) 
    : ImColor((ImVec4)Jm_mods);

    ImColor topColor    = ImColor(Jm_mods.x, Jm_mods.y, Jm_mods.z, 0.02f);
    ImColor bottomColor = ImColor(Jm_mods.x, Jm_mods.y, Jm_mods.z, 1.0f);

    draw->AddRectFilledMultiColor(
        ImVec2(x, y),
        ImVec2(x + w, y + h),
        topColor, topColor,
        bottomColor, bottomColor
    );

    draw->AddRect(ImVec2(x, y), ImVec2(x + w, y + h), boxColor, 0.0f, 0, 1.5f);
}

if (Config.ESP.Line) {
    ImGuiIO& io = ImGui::GetIO();   // ✅ Add this line

    ImVec2 screenCenter = ImVec2(io.DisplaySize.x / 2, 0);
    ImVec2 enemyPos = ImVec2(rect.x + rect.w / 2, rect.y + rect.h / 35);

    ImColor lineColor(Jm_mods);

    if (get_IsDieing(closestEnemy)) {
        lineColor = ImColor(255, 0, 0);
    }

    draw->AddLine(screenCenter, enemyPos, lineColor, Config.ESP.LineThickness);
}

int xx = rect.x + rect.w + 2;
int yy = rect.y;

// --- Health ESP ---
  if (Config.ESP.Health) {
        int currentHP = GetHp(closestEnemy);
        int maxHP = get_MaxHP(closestEnemy);

        float healthBarWidth = 5.0f;   // Patla bar
        float healthBarHeight = rect.h;
        float healthX = rect.x + rect.w + 5;  // Bande ke right side
        float healthY = rect.y;

        // Background black
        draw->AddRectFilled(ImVec2(healthX, healthY),
                            ImVec2(healthX + healthBarWidth, healthY + healthBarHeight),
                            ImColor(0, 0, 0, 180));

        // HP color choose
        ImColor healthColor = (currentHP > maxHP * 0.6) ? ImColor(0, 255, 0, 255) :   
                              (currentHP > maxHP * 0.3) ? ImColor(255, 255, 0, 255) :  
                              ImColor(255, 0, 0, 255);

        // Fill health
        float hpPerc = (currentHP / (float)maxHP);
        draw->AddRectFilled(ImVec2(healthX, healthY + healthBarHeight * (1 - hpPerc)),
                            ImVec2(healthX + healthBarWidth, healthY + healthBarHeight),
                            healthColor);
    }

// --- Name ESP ---
// --- Name ESP ---
if (Config.ESP.IsName) {
    monoString* Nick = get_NickName(closestEnemy);
    std::string names;
    if (Nick != nullptr) {
        int nick_Len = Nick->getLength();
        for (int i = 0; i < nick_Len; i++) {
            char data = get_Chars(Nick, i);
            names += isascii(data) ? data : '?';
        }
    }

    if (!names.empty()) {
        float textScale = 0.7f; 
        ImVec2 textSize = ImGui::CalcTextSize(names.c_str());
        float textX = rect.x + (rect.w / 2) - (textSize.x * textScale / 2);
        float textY = rect.y - textSize.y - 2; // Head ke upar thoda margin
        draw->AddText(nullptr, 18 * textScale, ImVec2(textX, textY),
                      ImColor(Config.ESP.NameColor), names.c_str());
    }
}

// --- Distance ESP ---
if (Config.ESP.Distance) {
    std::string distanceText = "[" + std::to_string((int)distance) + "M]";
    float distScale = 0.7f; 
    ImVec2 distSize = ImGui::CalcTextSize(distanceText.c_str());
    float distX = rect.x + (rect.w / 2) - (distSize.x * distScale / 2);
    float distY = rect.y + rect.h + 2; // Pairon ke neeche thoda margin
    draw->AddText(nullptr, 16 * distScale, ImVec2(distX, distY),
                  ImColor(Config.ESP.DistanceColor), distanceText.c_str());
}
*/



    }
}
                    
                
                                
                                
                                
                                
                                
                
                
                
    
