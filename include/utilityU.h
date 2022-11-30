#ifndef _UTILITYU_
#define _UTILITYU_

#include "types.h"
#include "PSM/DirectorMgr.h"
#include "PSM/Scene.h"
#include "PSM/WorldMapRocket.h"
#include "PSM/Cluster.h"
#include "PSM/Creature.h"
#include "JSystem/JAI/JAIStream.h"
#include "JSystem/JAI/JAISound.h"
#include "JSystem/JAI/JAISe.h"
#include "Game/EnemyBase.h"
#include "SoundID.h"

// namespace PSM {
// 	struct DirectorBase;
// 	f32 sBoss_DistMax = 4000.0f;
// 	f32 sBoss_ViewDist = 1300.0f;
// 	f32 sBoss_ViewDistVol = 0.3f;
// 	f32 sCamFov = 0.25f;
// }

void PSChangeBgm_ChallengeGame();
void PSCancelToPauseOffMainBgm();
PSM::ActorDirector_Battle* PSMGetBattleD();
PSSystem::DirectorBase* PSMGetBattleDirector(u8);
PSM::ActorDirector_TrackOn* PSMGetBeedamaForLugieD();
PSM::ActorDirector_TrackOn* PSMGetBeedamaForOrimerD();
PSM::DamageDirector* PSMGetDamageD();
PSM::ActorDirector_Scaled* PSMGetEventD();
PSM::SceneBase* PSMGetGameSceneA();
PSM::ActorDirector_Scaled* PSMGetGroundD();
PSM::ActorDirector_TrackOn* PSMGetIchouForLugieD();
PSM::ActorDirector_TrackOn* PSMGetIchouForOrimerD();
PSM::ActorDirector_Kehai* PSMGetKehaiD();
PSM::ActorDirector_TempoChange* PSMGetLifeD();
f64 PSMGetNoukouDist(); // { return 300.0; };
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
JAIStream* PSStartEnemyDownSmokeSE(Game::EnemyBase*, f32);
JAIStream* PSStartEnemyDownWatSE(f64, Game::EnemyBase*);
JAISound* PSStartEnemyFatalHitSE(Game::EnemyBase*, f32);
int PSStartEnemyGhostSE(Game::EnemyBase*, f32);
JAISound* PSStartSoundVec(SoundID, Vec*);
JAISe* PSStartTreasureLaderSE(f64);
JAISe* PSStartTreasureLaderNoiseSE(f64, u8, u32, u32, u8);
u8 PSStop2DStream();

// f32 sLaderNoiseFuefukiSensMax = 0.3f;
// f32 sLaderNoiseFuefukiSensMin;
// s16 sLaderNoiseFuefukiTimerCenter = 0x3C;
// s16 sLaderNoiseFuefukiTimerRandam = 0x08;
// f32 sLaderNoiseFuefukiVolumeMax = 0.5f;
// f32 sLaderNoiseFuefukiVolumeMin = 0.25f;
// s16 sLaderNoiseTimer;
// f32 sLaderNoiseVolumeExp = 7.18f;
// s16 sLaderNoiseWait;
// f32 sTreasureLader_DistanceExp = 5.0f;
// f32 sTreasureLader_MinimumVolume = 0.3f;
// f32 sTreasureLader_Pitch = 1.04f;
// f32 sTreasureLader_PitchDistance;

#endif
