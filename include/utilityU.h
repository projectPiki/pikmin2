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

void* PSChangeBgm_ChallengeGame();
void PSMCancelToPauseOffMainBgm();
PSM::ActorDirector_Battle* PSMGetBattleD();
PSSystem::DirectorBase* PSMGetBattleDirector(u8 directorID);
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

#endif
