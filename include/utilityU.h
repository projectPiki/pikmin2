#ifndef _UTILITYU_
#define _UTILITYU_

#include "types.h"
#include "PSM/DirectorMgr.h"
#include "PSM/Scene.h"
#include "PSM/WorldMapRocket.h"
#include "PSM/Cluster.h"
#include "PSM/Creature.h"
#include "JSystem/JAudio/JAI/JAIStream.h"
#include "JSystem/JAudio/JAI/JAISound.h"
#include "JSystem/JAudio/JAI/JAISe.h"
#include "Game/EnemyBase.h"
#include "SoundID.h"
#include "PSM/Director.h"

// namespace PSM {
// 	struct DirectorBase;
// 	f32 sBoss_DistMax = 4000.0f;
// 	f32 sBoss_ViewDist = 1300.0f;
// 	f32 sBoss_ViewDistVol = 0.3f;
// 	f32 sCamFov = 0.25f;
// }

void* PSChangeBgm_ChallengeGame();
void PSMCancelToPauseOffMainBgm();
PSM::ActorDirector_Battle* PSMGetBattleD();
PSSystem::DirectorBase* PSMGetBattleDirector(u8);
PSM::ActorDirector_TrackOn* PSMGetBeedamaForLugieD();
PSM::ActorDirector_TrackOn* PSMGetBeedamaForOrimerD();
PSM::DamageDirector* PSMGetDamageD();
PSM::ActorDirector_Scaled* PSMGetEventD();
PSM::Scene_Game* PSMGetGameSceneA();
PSM::ActorDirector_Scaled* PSMGetGroundD();
PSM::ActorDirector_TrackOn* PSMGetIchouForLugieD();
PSM::ActorDirector_TrackOn* PSMGetIchouForOrimerD();
PSM::ActorDirector_Kehai* PSMGetKehaiD();
PSM::ActorDirector_TempoChange* PSMGetLifeD();
f32 PSMGetNoukouDist(); // { return 300.0; };
PSM::ActorDirector_TrackOn* PSMGetOtakaraEventD();
PSM::TrackOnDirector_Voting* PSMGetPikiBattleD();
PSM::PikminNumberDirector* PSMGetPikminNumD();
PSM::WorldMapRocket* PSMGetWorldMapRocket();
void PSMuteOffSE_on2D();
void PSMuteSE_on2D();
void PSPause_StartMenuOff();
void PSPause_StartMenuOn();
void PSPauseOff();
void PSPauseOn(u8, u8);
void PSPlayCaveHoleSound(::PSM::Creature*);
void PSSetCurCameraNo(u8);
void PSSetLastBeedamaDirection(bool, bool);
void PSStart2DStream(u32);
void PSStartChallengeTimeUpStream();
JAISound* PSStartEnemyDownSmokeSE(Game::EnemyBase*, f32);
JAIStream* PSStartEnemyDownWatSE(f64, Game::EnemyBase*);
JAISound* PSStartEnemyFatalHitSE(Game::EnemyBase*, f32);
JAISound* PSStartEnemyGhostSE(Game::EnemyBase*, f32);
JAISound* PSStartSoundVec(SoundID, Vec*);
JAISe* PSStartTreasureLaderSE(f32);
JAISe* PSStartTreasureLaderNoiseSE(u8, f32, f32);
u8 PSStop2DStream();

// not sure how to handle these for PSMainSide_Se
// static f32 sLaderNoiseFuefukiSensMax; // = 0.3f;
// static f32 sLaderNoiseFuefukiSensMin;
// static s16 sLaderNoiseFuefukiTimerCenter; // = 0x3C;
// static s16 sLaderNoiseFuefukiTimerRandam; // = 0x08;
// static f32 sLaderNoiseFuefukiVolumeMax;   // = 0.5f;
// static f32 sLaderNoiseFuefukiVolumeMin;   // = 0.25f;
// static u16 sLaderNoiseTimer;
// static f32 sLaderNoiseVolumeExp; // = 7.18f;
// static s16 sLaderNoiseWait;
// static f32 sTreasureLader_DistanceExp;   // = 5.0f;
// static f32 sTreasureLader_MinimumVolume; //= 0.3f;
// static f32 sTreasureLader_Pitch;         //= 1.04f;
// static f32 sTreasureLader_PitchDistance; //= 0.77f;

#endif
