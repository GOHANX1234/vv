#pragma once
#include "Hook.h"
/*
bool IsVisible(void * player){
if(player != NULL) {
void *hitObj = NULL;
Vector3 cameraLocation = Transform_GetPosition(Component_GetTransform(Camera_main()));
Vector3 headLocation = Transform_GetPosition(Component_GetTransform(Player_GetHeadCollider(player)));
return !Physics_Raycast(cameraLocation, headLocation, 12, &hitObj);
}
return false;
}

void* GetClosestEnemy() {
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
}

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
}*/
