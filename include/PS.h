#ifndef _PS_H
#define _PS_H

#include "types.h"

struct Vec;

namespace Game {
struct EnemyBase;
}

void PSChangeBgm_ChallengeGame();

void PSPause_StartMenuOn();
void PSPause_StartMenuOff();

void PSPauseOn(uchar, uchar);
void PSPauseOff();

void PSStart2DStream(ulong);
void PSStop2DStream();

void PSStartChallengeTimeUpStream();
void PSStartEnemyDownSmokeSE(Game::EnemyBase*, float);
void PSStartEnemyDownWatSE(Game::EnemyBase*, float);
void PSStartEnemyFatalHitSE(Game::EnemyBase*, float);
void PSStartEnemyGhostSE(Game::EnemyBase*, float);
void PSStartSoundVec(ulong, Vec*);
void PSStartTreasureLaderSE(float);
void PSStartTresureLaderNoiseSE(uchar, float, float);
void PSMuteSE_on2D();
void PSMuteOffSE_on2D();

#endif
