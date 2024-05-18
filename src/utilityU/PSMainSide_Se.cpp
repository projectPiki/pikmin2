#include "P2Macros.h"
#include "PSM/ObjCalc.h"
#include "PSM/Cluster.h"
#include "PSSystem/ClusterSe.h"
#include "PSM/WorldMapRocket.h"
#include "PSM/PikiHumming.h"
#include "PSSystem/PSSystemIF.h"
#include "JSystem/JAudio/JALCalc.h"
#include "Game/EnemyBase.h"
#include "Game/Navi.h"
#include "Game/Piki.h"
#include "Game/CPlate.h"
#include "PSM/EnemyBase.h"
#include "PSM/BossSeq.h"
#include "PSM/CreaturePrm.h"
#include "utilityU.h"

namespace PSM {

/**
 * @note Address: 0x8046D144
 * @note Size: 0x21C
 */
PSSystem::ClusterSe::PartInitArg ClusterFactory::partInit(u8 unknownID)
{
	PSSystem::ClusterSe::PartInitArg arg;
	switch (mType) {
	case 0: {
		switch (unknownID) {
		case 0:
			arg.mMaxEnemyCount           = 0x19;
			arg.mVolumeDecreaseThreshold = 0x19;
			arg.mVolumeIncreaseThreshold = 0x16;
			arg.mMinEnemyCount           = 0x10;
			arg.mSoundID                 = PSSE_EN_BUTTERFLY_L;
			break;
		case 1:
			arg.mMaxEnemyCount           = 0x16;
			arg.mVolumeDecreaseThreshold = 0x10;
			arg.mVolumeIncreaseThreshold = 0x0e;
			arg.mMinEnemyCount           = 0x08;
			arg.mSoundID                 = PSSE_EN_BUTTERFLY_M;
			break;
		case 2:
			arg.mMaxEnemyCount           = 0x0e;
			arg.mVolumeDecreaseThreshold = 0x08;
			arg.mVolumeIncreaseThreshold = 0x05;
			arg.mMinEnemyCount           = 0x00;
			arg.mSoundID                 = PSSE_EN_BUTTERFLY_S;
			break;
		default:
			P2ASSERTLINE(62, false);
		}
		break;
	}
	case 1: {
		switch (unknownID) {
		case 0:
			arg.mMaxEnemyCount           = 0x64;
			arg.mVolumeIncreaseThreshold = 0x46;
			arg.mMinEnemyCount           = 0x3c;
			break;
		case 1:
			arg.mMaxEnemyCount           = 0x46;
			arg.mVolumeDecreaseThreshold = 0x3c;
			arg.mVolumeIncreaseThreshold = 0x28;
			arg.mMinEnemyCount           = 0x1e;
			break;
		case 2:
			arg.mMaxEnemyCount           = 0x28;
			arg.mVolumeDecreaseThreshold = 0x1e;
			arg.mVolumeIncreaseThreshold = 0x0a;
			arg.mMinEnemyCount           = 0x00;
			break;
		default:
			P2ASSERTLINE(95, false);
		}
		break;
	}
	default:
		P2ASSERTLINE(100, false);
		break;
	}
	return arg;
}

/**
 * @note Address: 0x8046D360
 * @note Size: 0x74
 */
WorldMapRocket::WorldMapRocket()
    : JADHioNode(nullptr)
{
	mState     = PSMRocket_Inactive;
	mStartPosX = 0.0f;
	mEndPosX   = 608.0f;
	_10        = 4.0f;
	mStartPosY = 100.0f;
	mEndPosY   = 260.0f;
	_1C        = 4.0f;
}

/**
 * @note Address: 0x8046D3D4
 * @note Size: 0x60
 */
WorldMapRocket::~WorldMapRocket() { }

/**
 * @note Address: 0x8046D434
 * @note Size: 0x490
 */
JAISe* WorldMapRocket::startRocketSE(f32 posX, f32 posY)
{
	JAISe* se = PSSystem::spSysIF->playSystemSe(PSSE_SY_ROCKET_SMOKE, 0);

	static f32 tmpVol;
	static s8 init;

	if (se) {
		f32 curPosX = JALCalc::linearTransform(posX, mStartPosX, mEndPosX, 0.0f, 1.0f, false);
		if (curPosX < 0.5f) {
			curPosX = JALCalc::getParamByExp(curPosX, 0.0f, 0.5f, _10, 0.0f, 0.5f, JALCalc::CS_POSITIVE_CURVE);
		} else {
			curPosX = JALCalc::getParamByExp(curPosX, 0.5f, 1.0f, _10, 0.5f, 1.0f, JALCalc::CS_NEGATIVE_CURVE);
		}

		f32 curPosY = JALCalc::linearTransform(posY, mStartPosY, mEndPosY, 0.0f, 1.0f, false);
		if (curPosY < 0.5f) {
			curPosY = JALCalc::getParamByExp(curPosY, 0.0f, 0.5f, _1C, 0.0f, 0.5f, JALCalc::CS_POSITIVE_CURVE);
		} else {
			curPosY = JALCalc::getParamByExp(curPosY, 0.5f, 1.0f, _1C, 0.5f, 1.0f, JALCalc::CS_NEGATIVE_CURVE);
		}

		if (mState != PSMRocket_3) {
			se->setPan(curPosX, 0, SOUNDPARAM_Unk0);
			se->setDolby(curPosY, 0, SOUNDPARAM_Unk0);
		}

		switch (mState) {
		case PSMRocket_Appear:
			se->setVolume(1.0f, 2, SOUNDPARAM_Unk0);
			se->setPitch(2.0f, 2, SOUNDPARAM_Unk0);
			if (se->getPitch(SOUNDPARAM_Unk0) >= 2.0f) {
				mState = PSMRocket_4;
			}
			break;
		case PSMRocket_2:
			se->setVolume(1.0f, 2, SOUNDPARAM_Unk0);
			se->setPitch(2.0f, 2, SOUNDPARAM_Unk0);
			if (se->getPitch(SOUNDPARAM_Unk0) >= 2.0f) {
				mState = PSMRocket_4;
			}
			break;
		case PSMRocket_3:
			se->setVolume(1.0f, 5, SOUNDPARAM_Unk0);
			se->setPitch(2.0f, 5, SOUNDPARAM_Unk0);
			if (se->getPitch(SOUNDPARAM_Unk0) >= 3.0f) {
				mState = PSMRocket_4;
			}
			break;
		case PSMRocket_4:
			se->setVolume(0.5f, 30, SOUNDPARAM_Unk0);
			se->setPitch(1.0f, 30, SOUNDPARAM_Unk0);
			break;
		case PSMRocket_Idle:
			se->setVolume(0.5f, 10, SOUNDPARAM_Unk0);
			se->setPitch(1.0f, 10, SOUNDPARAM_Unk0);
			break;
		case PSMRocket_6:
			if (!init) {
				tmpVol = se->getVolume(SOUNDPARAM_Unk0);
				init   = true;
			}
			se->setVolume(0.1f, 2, SOUNDPARAM_Unk0);
			break;
		case PSMRocket_7:
			se->setVolume(tmpVol, 5, SOUNDPARAM_Unk0);
			if (se->getVolume(SOUNDPARAM_Unk0) == tmpVol) {
				if (tmpVol < 0.5f) {
					mState = PSMRocket_Idle;
				} else {
					mState = PSMRocket_4;
				}
			}
			break;
		case PSMRocket_Inactive:
			se->setVolume(0.0f, 0, SOUNDPARAM_Unk0);
			se->setPitch(0.0f, 0, SOUNDPARAM_Unk0);
			break;
		}
	}
	return se;
}
} // namespace PSM

static u16 sLaderNoiseTimer   = 0;
static int sLaderNoiseWait    = 0;
f32 sLaderNoiseFuefukiSensMin = 0.0f;

f32 sTreasureLader_PitchDistance  = 0.77f;
f32 sTreasureLader_Pitch          = 1.04f;
f32 sTreasureLader_DistanceExp    = 5.0f;
f32 sTreasureLader_MinimumVolume  = 0.3f;
f32 sLaderNoiseVolumeExp          = 7.18f;
s16 sLaderNoiseFuefukiTimerCenter = 0x3C;
s16 sLaderNoiseFuefukiTimerRandam = 0x08;
f32 sLaderNoiseFuefukiSensMax     = 0.3f;
f32 sLaderNoiseFuefukiVolumeMin   = 0.25f;
f32 sLaderNoiseFuefukiVolumeMax   = 0.5f;

namespace PSM {
/**
 * @note Address: 0x8046D8C4
 * @note Size: 0x8
 */
void WorldMapRocket::stateChange(rocketState a1) { mState = a1; }

/**
 * @note Address: 0x8046D8CC
 * @note Size: 0x4
 */
PikiHumming::PikiHumming() { }

/**
 * @note Address: 0x8046D8D0
 * @note Size: 0xFC
 */
PikiHummingMgr::PikiHummingMgr()
{
	_00     = 10;
	mState  = 0;
	mCurrID = 0;

	mHummingArray         = new PikiHumming[3];
	PikiHumming* shouting = &mHummingArray[0];
	shouting->mActiveID   = 0;
	shouting->mSoundID    = PSSE_PK_SHOUT01;
	shouting->mCounterMax = 72;
	shouting->_0C         = 4;
	shouting->_00         = 0;
	shouting->mIsActive   = 0;
	shouting->mCounter    = -1;

	PikiHumming* ainoutaRU = &mHummingArray[1];
	ainoutaRU->mActiveID   = 1;
	ainoutaRU->mSoundID    = PSSE_PK_AINOUTA_RU;
	ainoutaRU->mCounterMax = 300;
	ainoutaRU->_0C         = 2;
	ainoutaRU->_00         = 0;
	ainoutaRU->mIsActive   = 0;
	ainoutaRU->mCounter    = -1;

	PikiHumming* humming = &mHummingArray[2];
	humming->mActiveID   = 2;
	humming->mSoundID    = PSSE_PK_HUMING01;
	humming->mCounterMax = 160;
	humming->_0C         = 3;
	humming->_00         = 0;
	humming->mIsActive   = 0;
	humming->mCounter    = -1;
}

/**
 * @note Address: 0x8046D9CC
 * @note Size: 0x624
 */
void PikiHummingMgr::exec()
{
	Iterator<Game::Navi> iNavi(Game::naviMgr);
	bool hasNavi = false;
	CI_LOOP(iNavi)
	{
		Game::Navi* navi = *iNavi;
		if (navi->isWalking()) {
			hasNavi = true;
			break;
		}
	}

	int newState     = 0;
	Game::Navi* navi = Game::naviMgr->getActiveNavi();
	if (navi) {
		int id = navi->mNaviIndex;
		P2ASSERTBOUNDSINCLUSIVELINE(394, 0, id, 1);
		if (Game::GameStat::formationPikis.getCount(id, Game::Red) == 20 && Game::GameStat::formationPikis.getCount(id, Game::Blue) == 20
		    && Game::GameStat::formationPikis.getCount(id, Game::Yellow) == 20
		    && Game::GameStat::formationPikis.getCount(id, Game::Purple) == 20
		    && Game::GameStat::formationPikis.getCount(id, Game::White) == 20) {
			newState = 1;
		}
	}

	if (newState != 1) {
		Scene_Game* scene = PSMGetGameScene();
		if (scene->isPollutUp() && (u32)scene->getPollutUpTimer() > 60) {
			newState = 2;
		}
	}

	if (navi && navi->mCPlateMgr && navi->mCPlateMgr->mActiveGroupSize > 0 && hasNavi) {
		mDoAiNoUta = true;
	} else {
		mDoAiNoUta = false;
	}
	mState = newState;
	for (u8 i = 0; i < 3; i++) {
		bool test        = true;
		PikiHumming* hum = &mHummingArray[i];
		u8 doPlay        = mDoAiNoUta;
		if ((mState == hum->mActiveID) || !doPlay) {
			if (hum->mCounter == -1) {
				hum->_00 = 0;
			}
			test = false;
		}
		hum->mIsActive = false;
		if (test) {
			if (hum->_00 - (hum->_00 / hum->mCounterMax) * hum->mCounterMax == 0) {
				hum->mIsActive = true;
				hum->_00       = 0;
			}
			hum->_00++;
		}
		if (hum->mCounter >= 0) {
			hum->mCounter++;
			if (hum->mCounter >= hum->mCounterMax) {
				hum->mCounter = -1;
			}
		}
	}
	mCurrID = 0;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	li       r4, 0
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r0, 0x44(r1)
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r4, 0
	lis      r6, lbl_8049DA08@ha
	stmw     r25, 0x24(r1)
	mr       r26, r3
	addi     r30, r6, lbl_8049DA08@l
	li       r29, 0
	lwz      r0, naviMgr__4Game@sda21(r13)
	stw      r5, 8(r1)
	stw      r4, 0x14(r1)
	stw      r4, 0xc(r1)
	stw      r0, 0x10(r1)
	bne      lbl_8046DA30
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DBB0

lbl_8046DA30:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DAA0

lbl_8046DA4C:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046DBB0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8046DAA0:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DA4C
	b        lbl_8046DBB0

lbl_8046DAC0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	lwz      r12, 0x21c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DAF4
	li       r29, 1
	b        lbl_8046DBD0

lbl_8046DAF4:
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_8046DB20
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DBB0

lbl_8046DB20:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_8046DB94

lbl_8046DB40:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8046DBB0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_8046DB94:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DB40

lbl_8046DBB0:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_8046DAC0

lbl_8046DBD0:
	lwz      r3, naviMgr__4Game@sda21(r13)
	li       r28, 0
	bl       getActiveNavi__Q24Game7NaviMgrFv
	or.      r31, r3, r3
	beq      lbl_8046DDD4
	lhz      r27, 0x2dc(r31)
	li       r0, 0
	cmpwi    r27, 0
	blt      lbl_8046DC00
	cmpwi    r27, 1
	bgt      lbl_8046DC00
	li       r0, 1

lbl_8046DC00:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DC1C
	addi     r3, r30, 0
	addi     r5, r30, 0x14
	li       r4, 0x18a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DC1C:
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DC34
	cmpwi    r27, 7
	bge      lbl_8046DC34
	li       r0, 1

lbl_8046DC34:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DC50
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DC50:
	lis      r3, formationPikis__Q24Game8GameStat@ha
	slwi     r5, r27, 5
	addi     r0, r3, formationPikis__Q24Game8GameStat@l
	li       r4, 1
	add      r25, r0, r5
	mr       r3, r25
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DC98
	cmpwi    r27, 7
	bge      lbl_8046DC98
	li       r0, 1

lbl_8046DC98:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DCB4
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DCB4:
	mr       r3, r25
	li       r4, 0
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DCEC
	cmpwi    r27, 7
	bge      lbl_8046DCEC
	li       r0, 1

lbl_8046DCEC:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DD08
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DD08:
	mr       r3, r25
	li       r4, 2
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DD40
	cmpwi    r27, 7
	bge      lbl_8046DD40
	li       r0, 1

lbl_8046DD40:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DD5C
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DD5C:
	mr       r3, r25
	li       r4, 3
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	cmpwi    r27, 0
	li       r0, 0
	blt      lbl_8046DD94
	cmpwi    r27, 7
	bge      lbl_8046DD94
	li       r0, 1

lbl_8046DD94:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046DDB0
	addi     r3, r30, 0x20
	addi     r5, r30, 0x14
	li       r4, 0x77
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DDB0:
	mr       r3, r25
	li       r4, 4
	lwz      r12, 0(r25)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x14
	bne      lbl_8046DDD4
	li       r28, 1

lbl_8046DDD4:
	cmpwi    r28, 1
	beq      lbl_8046DEC0
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046DDFC
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DDFC:
	lwz      r27, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r27, 0
	bne      lbl_8046DE1C
	addi     r3, r30, 0x2c
	addi     r5, r30, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DE1C:
	lwz      r0, 4(r27)
	cmplwi   r0, 0
	bne      lbl_8046DE3C
	addi     r3, r30, 0x38
	addi     r5, r30, 0x14
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DE3C:
	lwz      r3, 4(r27)
	lwz      r27, 4(r3)
	cmplwi   r27, 0
	bne      lbl_8046DE60
	addi     r3, r30, 0x38
	addi     r5, r30, 0x44
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046DE60:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DE80
	b        lbl_8046DE84

lbl_8046DE80:
	li       r27, 0

lbl_8046DE84:
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046DEC0
	mr       r3, r27
	lwz      r12, 0(r27)
	lwz      r12, 0x70(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0x3c
	ble      lbl_8046DEC0
	li       r28, 2

lbl_8046DEC0:
	cmplwi   r31, 0
	beq      lbl_8046DEF4
	lwz      r3, 0x254(r31)
	cmplwi   r3, 0
	beq      lbl_8046DEF4
	lwz      r0, 0xbc(r3)
	cmpwi    r0, 0
	ble      lbl_8046DEF4
	clrlwi.  r0, r29, 0x18
	beq      lbl_8046DEF4
	li       r0, 1
	stb      r0, 0x10(r26)
	b        lbl_8046DEFC

lbl_8046DEF4:
	li       r0, 0
	stb      r0, 0x10(r26)

lbl_8046DEFC:
	stw      r28, 4(r26)
	li       r3, 0
	b        lbl_8046DFC8

lbl_8046DF08:
	clrlwi   r0, r3, 0x18
	lwz      r4, 0xc(r26)
	mulli    r0, r0, 0x1c
	lwz      r6, 4(r26)
	lbz      r8, 0x10(r26)
	li       r5, 1
	add      r7, r4, r0
	lwz      r0, 0x14(r7)
	subf     r0, r0, r6
	cntlzw   r0, r0
	rlwinm.  r0, r0, 0x1b, 0x18, 0x1f
	beq      lbl_8046DF40
	cmplwi   r8, 0
	bne      lbl_8046DF58

lbl_8046DF40:
	lwz      r0, 0x10(r7)
	cmpwi    r0, -1
	bne      lbl_8046DF54
	li       r0, 0
	stw      r0, 0(r7)

lbl_8046DF54:
	li       r5, 0

lbl_8046DF58:
	li       r6, 0
	clrlwi.  r0, r5, 0x18
	stb      r6, 0x18(r7)
	beq      lbl_8046DF98
	lwz      r5, 0(r7)
	lwz      r4, 8(r7)
	divwu    r0, r5, r4
	mullw    r0, r0, r4
	subf.    r0, r0, r5
	bne      lbl_8046DF8C
	li       r0, 1
	stb      r0, 0x18(r7)
	stw      r6, 0(r7)

lbl_8046DF8C:
	lwz      r4, 0(r7)
	addi     r0, r4, 1
	stw      r0, 0(r7)

lbl_8046DF98:
	lwz      r4, 0x10(r7)
	cmpwi    r4, 0
	blt      lbl_8046DFC4
	addi     r0, r4, 1
	stw      r0, 0x10(r7)
	lwz      r4, 0x10(r7)
	lwz      r0, 8(r7)
	cmpw     r4, r0
	blt      lbl_8046DFC4
	li       r0, -1
	stw      r0, 0x10(r7)

lbl_8046DFC4:
	addi     r3, r3, 1

lbl_8046DFC8:
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	blt      lbl_8046DF08
	li       r0, 0
	stw      r0, 8(r26)
	lmw      r25, 0x24(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8046DFF0
 * @note Size: 0xC4
 */
void PikiHummingMgr::play(PSM::Piki* piki)
{
	if (mDoAiNoUta && (piki->mHummingCounter >= _00)) {
		mCurrID++;
		if (mCurrID < 4 && mHummingArray[mState].mIsActive) {
			PikiHumming* hum = &mHummingArray[mState];
			u32 id           = static_cast<Game::Piki*>(piki->mGameObj)->getFormationSlotID();
			u32 test         = hum->_0C;
			test             = hum->mSoundID + (id - (id / hum->_0C) * test);
			piki->startPikiSound(piki, test, 0);
			hum->mCounter = 0;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	lbz      r0, 0x10(r3)
	cmplwi   r0, 0
	beq      lbl_8046E09C
	lwz      r4, 0x74(r31)
	lwz      r0, 0(r3)
	cmplw    r4, r0
	blt      lbl_8046E09C
	lwz      r4, 8(r3)
	addi     r0, r4, 1
	stw      r0, 8(r3)
	lwz      r0, 8(r3)
	cmpwi    r0, 4
	bge      lbl_8046E09C
	lwz      r0, 4(r3)
	lwz      r3, 0xc(r3)
	mulli    r0, r0, 0x1c
	add      r30, r3, r0
	lbz      r0, 0x18(r30)
	cmplwi   r0, 0
	beq      lbl_8046E09C
	lwz      r3, 0x2c(r31)
	bl       getFormationSlotID__Q24Game4PikiFv
	lwz      r5, 0xc(r30)
	cmplwi   r31, 0
	lwz      r6, 4(r30)
	mr       r4, r31
	divwu    r0, r3, r5
	mullw    r0, r0, r5
	subf     r0, r0, r3
	add      r5, r6, r0
	beq      lbl_8046E088
	addi     r4, r31, 0x30

lbl_8046E088:
	mr       r3, r31
	li       r6, 0
	bl       startPikiSound__Q23PSM4PikiFPQ27JAInter6ObjectUlUl
	li       r0, 0
	stw      r0, 0x10(r30)

lbl_8046E09C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace PSM

/**
 * @note Address: 0x8046E0B4
 * @note Size: 0x15C
 */
PSM::SeSound* PSStartSoundVec(u32 soundID, Vec* vec)
{
	if (!static_cast<PSM::SceneBase*>(PSMGetSceneMgrCheck()->getEndScene())->getSeSceneGate(nullptr, soundID)) {
		return nullptr;
	}

	u8 playerNo = PSM::ObjCalcBase::getInstance()->getPlayerNo(*vec);
	P2ASSERTLINE(522, vec);

	JAISound* soundHandle = nullptr;
	PSSystem::spSysIF->startSoundVecReturnHandleT(&soundHandle, soundID, vec, 0, 0, playerNo);
	return static_cast<PSM::SeSound*>(soundHandle);
}

/**
 * @note Address: 0x8046E210
 * @note Size: 0x6C
 */
PSM::Cluster* newPSCluster_SijimiChou(Game::Creature* creature)
{
	PSM::ClusterFactory factory;
	return new PSM::Cluster(creature, factory);
}

/**
 * @note Address: 0x8046E27C
 * @note Size: 0x198
 */
JAISound* PSStartEnemyGhostSE(Game::EnemyBase* enemy, f32)
{
	JAISound* ghost = enemy->getJAIObject()->startSound(PSSE_EN_ENEMY_GHOST, 0);
	if (ghost) {
		f32 volume = 0.0f;
		f32 pitch  = 0.0f;
		switch (enemy->getEnemyTypeID()) {
		case Game::EnemyTypeID::EnemyID_KingChappy:
			volume = 1.0f;
			pitch  = 0.8f;
			break;
		case Game::EnemyTypeID::EnemyID_FireChappy:
		case Game::EnemyTypeID::EnemyID_KumaChappy:
		case Game::EnemyTypeID::EnemyID_OoPanModoki:
			volume = 1.0f;
			pitch  = 0.9f;
			break;
		case Game::EnemyTypeID::EnemyID_Chappy:
		case Game::EnemyTypeID::EnemyID_BlueChappy:
		case Game::EnemyTypeID::EnemyID_YellowChappy:
			volume = 1.0f;
			pitch  = 1.0f;
			break;
		case Game::EnemyTypeID::EnemyID_MiniHoudai:
			volume = 1.0f;
			pitch  = 1.1f;
			break;
		case Game::EnemyTypeID::EnemyID_SnakeCrow:
		case Game::EnemyTypeID::EnemyID_SnakeWhole:
		case Game::EnemyTypeID::EnemyID_Kabuto:
		case Game::EnemyTypeID::EnemyID_Hana:
			volume = 1.0f;
			pitch  = 1.2f;
			break;
		case Game::EnemyTypeID::EnemyID_Armor:
		case Game::EnemyTypeID::EnemyID_Catfish:
		case Game::EnemyTypeID::EnemyID_Miulin:
		case Game::EnemyTypeID::EnemyID_BombSarai:
			volume = 0.9f;
			pitch  = 1.3f;
			break;
		case Game::EnemyTypeID::EnemyID_Frog:
		case Game::EnemyTypeID::EnemyID_MaroFrog:
		case Game::EnemyTypeID::EnemyID_Tank:
		case Game::EnemyTypeID::EnemyID_Wtank:
			volume = 0.8f;
			pitch  = 1.4f;
			break;
		case Game::EnemyTypeID::EnemyID_Sarai:
		case Game::EnemyTypeID::EnemyID_ElecBug:
		case Game::EnemyTypeID::EnemyID_Demon:
		case Game::EnemyTypeID::EnemyID_PanModoki:
		case Game::EnemyTypeID::EnemyID_Fuefuki:
		case Game::EnemyTypeID::EnemyID_Jigumo:
		case Game::EnemyTypeID::EnemyID_LeafChappy:
			volume = 0.7f;
			pitch  = 1.5f;
			break;
		case Game::EnemyTypeID::EnemyID_Kochappy:
		case Game::EnemyTypeID::EnemyID_BlueKochappy:
		case Game::EnemyTypeID::EnemyID_YellowKochappy:
		case Game::EnemyTypeID::EnemyID_KumaKochappy:
		case Game::EnemyTypeID::EnemyID_Sokkuri:
			volume = 0.6f;
			pitch  = 1.6f;
			break;
		case Game::EnemyTypeID::EnemyID_Tadpole:
		case Game::EnemyTypeID::EnemyID_Baby:
			volume = 0.6f;
			pitch  = 1.7f;
			break;

		case Game::EnemyTypeID::EnemyID_UjiA:
		case Game::EnemyTypeID::EnemyID_UjiB:
		case Game::EnemyTypeID::EnemyID_Tobi:
		case Game::EnemyTypeID::EnemyID_TamagoMushi:
			volume = 0.5f;
			pitch  = 2.0f;
			break;
		case Game::EnemyTypeID::EnemyID_FireOtakara:
		case Game::EnemyTypeID::EnemyID_WaterOtakara:
		case Game::EnemyTypeID::EnemyID_GasOtakara:
		case Game::EnemyTypeID::EnemyID_ElecOtakara:
			volume = 0.6f;
			pitch  = 1.8f;
			break;
		case Game::EnemyTypeID::EnemyID_ShijimiChou:
			volume = 0.4f;
			pitch  = 2.3f;
			break;
		}
		ghost->setVolume(volume, 0, SOUNDPARAM_Unk0);
		ghost->setPitch(pitch, 0, SOUNDPARAM_Unk0);
	}
	return ghost;
}

/**
 * @note Address: 0x8046E414
 * @note Size: 0x27C
 */
JAISound* PSStartEnemyFatalHitSE(Game::EnemyBase* enemy, f32 p2)
{
	JAISound* sound = PSStartSoundVec(PSSE_EN_ENEMY_FATAL_HIT, reinterpret_cast<Vec*>(enemy->getSound_PosPtr()));
	if (sound) {
		Sys::Sphere sphere;
		enemy->getBoundingSphere(sphere);
		f32 rad    = sphere.mRadius;
		f32 volume = JALCalc::getParamByExp(rad, 5.0f, 250.0f, 5.0f, 0.5f, 1.5f, JALCalc::CS_NEGATIVE_CURVE);
		if (volume > 1.0f) {
			volume = 1.0f;
		}
		if (volume < 0.5f) {
			volume = 0.5f;
		}

		f32 pitch = JALCalc::getParamByExp(rad, 250.0f, 5.0f, 5.0f, 0.7f, 1.7f, JALCalc::CS_POSITIVE_CURVE);
		if (pitch > 1.7f) {
			pitch = 1.7f;
		}
		if (pitch < 0.7f) {
			pitch = 0.7f;
		}

		sound->setVolume(volume, 0, SOUNDPARAM_Unk0);
		sound->setPitch(pitch, 0, SOUNDPARAM_Unk0);
	}
	return sound;
}

/**
 * @note Address: 0x8046E690
 * @note Size: 0x1B0
 */
JAISound* PSStartEnemyDownSmokeSE(Game::EnemyBase* enemy, f32 scale)
{
	if (scale == 0.0f || scale < 0.0f) {
		return nullptr;
	}

	JAISound* sound;
	if (scale < 0.3f) {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_SOIL_S, 0);
		if (sound) {
			sound->setPitch(JALCalc::linearTransform(scale, 0.0f, 0.3f, 1.0f, 0.8f, false), 0, SOUNDPARAM_Unk0);
		}
	} else if (scale < 0.7f) {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_SOIL_M, 0);
		if (sound) {
			sound->setPitch(JALCalc::linearTransform(scale, 0.3f, 0.7f, 1.5f, 0.6f, false), 0, SOUNDPARAM_Unk0);
		}
	} else {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_SOIL_L, 0);
		if (sound) {
			sound->setPitch(JALCalc::linearTransform(scale, 0.7f, 2.0f, 1.5f, 0.8f, false), 0, SOUNDPARAM_Unk0);
		}
	}
	return sound;
}

/**
 * @note Address: 0x8046E840
 * @note Size: 0x200
 */
JAISound* PSStartEnemyDownWatSE(Game::EnemyBase* enemy, f32 p2)
{
	JAISound* sound;
	if (p2 == 0 || p2 < 0.0f) {
		return nullptr;
	}
	if (p2 < 0.3f) {
		JAIAnimeSound* soundObj = enemy->mSoundObj;
		PSGame::SeMgr* mgr      = PSSystem::getSeMgrInstance();
		sound                   = mgr->mSetSeList[6]->startSound(soundObj, PSSE_EV_ITEM_LAND_WATER1_S, 0);
		if (sound) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.0f, 0.3f, 1.0f, 0.8f, false), 0, SOUNDPARAM_Unk0);
		}
	} else if (p2 < 0.7f) {
		JAIAnimeSound* soundObj = enemy->mSoundObj;
		PSGame::SeMgr* mgr      = PSSystem::getSeMgrInstance();
		sound                   = mgr->mSetSeList[6]->startSound(soundObj, PSSE_EV_ITEM_LAND_WATER1_M, 0);
		if (sound) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.3f, 0.7f, 1.5f, 0.6f, false), 0, SOUNDPARAM_Unk0);
		}
	} else {
		sound = enemy->getJAIObject()->startSound(PSSE_EV_ITEM_LAND_WATER1_L, 0);
		if (sound) {
			sound->setPitch(JALCalc::linearTransform(p2, 0.7f, 1.5f, 1.8f, 0.8f, false), 0, SOUNDPARAM_Unk0);
		}
	}
	return sound;
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	fmr      f31, f1
	lfs      f0, lbl_80520CE0@sda21(r2)
	fcmpu    cr0, f0, f31
	beq      lbl_8046E870
	fcmpo    cr0, f31, f0
	bge      lbl_8046E878

lbl_8046E870:
	li       r3, 0
	b        lbl_8046EA24

lbl_8046E878:
	lfs      f0, lbl_80520D10@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8046E918
	lwz      r31, 0x28c(r3)
	cmplwi   r31, 0
	beq      lbl_8046E894
	addi     r31, r31, 0x30

lbl_8046E894:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_8046E8BC lis      r3, lbl_8049DA34@ha lis      r5,
lbl_8049DA1C@ha addi     r3, r3, lbl_8049DA34@l li       r4, 0x237 addi     r5,
r5, lbl_8049DA1C@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E8BC:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) mr       r4,
r31 li       r5, 0x380b li       r6, 0 lwz      r3, 0x1c(r3) bl
startSound__Q26PSGame5SetSeFPQ27JAInter6ObjectUlUl or.      r31, r3, r3 beq
lbl_8046EA20 fmr      f1, f31 lfs      f2, lbl_80520CE0@sda21(r2) lfs      f3,
lbl_80520D10@sda21(r2) li       r3, 0 lfs      f4, lbl_80520CF4@sda21(r2) lfs
f5, lbl_80520D18@sda21(r2) bl       linearTransform__7JALCalcFfffffb mr r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046EA20

lbl_8046E918:
	lfs      f0, lbl_80520D30@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8046E9B8
	lwz      r31, 0x28c(r3)
	cmplwi   r31, 0
	beq      lbl_8046E934
	addi     r31, r31, 0x30

lbl_8046E934:
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_8046E95C lis      r3, lbl_8049DA34@ha lis      r5,
lbl_8049DA1C@ha addi     r3, r3, lbl_8049DA34@l li       r4, 0x237 addi     r5,
r5, lbl_8049DA1C@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046E95C:
	lwz      r3,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) mr       r4,
r31 li       r5, 0x380c li       r6, 0 lwz      r3, 0x1c(r3) bl
startSound__Q26PSGame5SetSeFPQ27JAInter6ObjectUlUl or.      r31, r3, r3 beq
lbl_8046EA20 fmr      f1, f31 lfs      f2, lbl_80520D10@sda21(r2) lfs      f3,
lbl_80520D30@sda21(r2) li       r3, 0 lfs      f4, lbl_80520D0C@sda21(r2) lfs
f5, lbl_80520D34@sda21(r2) bl       linearTransform__7JALCalcFfffffb mr r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046EA20

lbl_8046E9B8:
	lwz      r12, 0(r3)
	lwz      r12, 0xf4(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	li       r4, 0x380d
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	or.      r31, r3, r3
	beq      lbl_8046EA20
	fmr      f1, f31
	lfs      f2, lbl_80520D30@sda21(r2)
	lfs      f3, lbl_80520D0C@sda21(r2)
	li       r3, 0
	lfs      f4, lbl_80520D40@sda21(r2)
	lfs      f5, lbl_80520D18@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046EA20:
	mr       r3, r31

lbl_8046EA24:
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8046EA40
 * @note Size: 0x260
 */
JAISe* PSStartTreasureLaderSE(f32 rate)
{
	JAISe* sound = PSSystem::spSysIF->playSystemSe(PSSE_SY_TRESURE_LADER, 0);
	if (sound) {
		f32 calc;
		if (rate < sTreasureLader_PitchDistance) {
			calc = JALCalc::getParamByExp(rate, 0.0f, 0.77f, sTreasureLader_DistanceExp, sTreasureLader_MinimumVolume, 1.0f,
			                              JALCalc::CS_POSITIVE_CURVE);
		} else {
			calc = JALCalc::linearTransform(rate, 0.77f, 1.0f, 1.0f, 0.7f, false);
		}
		u16 calc2 = JALCalc::linearTransform(rate, 0.3f, 1.0f, 0.0f, 127.0f, false);
		if (calc2 > 128) {
			calc2 = 127;
		}
		sound->setPortData(12, calc2);
		PSM::MiddleBossSeq* seq = PSMGetMiddleBossSeq();
		if (seq && *seq->getHandleP()) {
			f32 vol = (*seq->getHandleP())->getVolume(SOUNDPARAM_Unk0);
			if (vol > 0.0f) {
				calc *= JALCalc::linearTransform(vol, 0.0f, 1.0f, 1.0f, 0.2f, true);
			}
		}
		sound->setVolume(calc, 0, SOUNDPARAM_Unk0);
		if (rate > sTreasureLader_PitchDistance) {
			sound->setPitch(sTreasureLader_Pitch, 0, SOUNDPARAM_Unk0);
		}
	}
	return sound;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	fmr      f30, f1
	lis      r4, lbl_8049DA08@ha
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	addi     r31, r4, lbl_8049DA08@l
	li       r4, 0x1874
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	or.      r29, r3, r3
	beq      lbl_8046EC70
	lfs      f0, sTreasureLader_PitchDistance@sda21(r13)
	fcmpo    cr0, f30, f0
	bge      lbl_8046EABC
	fmr      f1, f30
	lfs      f2, lbl_80520CE0@sda21(r2)
	fmr      f3, f0
	lfs      f4, sTreasureLader_DistanceExp@sda21(r13)
	lfs      f5, sTreasureLader_MinimumVolume@sda21(r13)
	li       r3, 1
	lfs      f6, lbl_80520CF4@sda21(r2)
	bl       getParamByExp__7JALCalcFffffffQ27JALCalc9CurveSign
	b        lbl_8046EAD8

lbl_8046EABC:
	lfs      f3, lbl_80520CF4@sda21(r2)
	fmr      f1, f30
	fmr      f2, f0
	lfs      f5, lbl_80520D30@sda21(r2)
	fmr      f4, f3
	li       r3, 0
	bl       linearTransform__7JALCalcFfffffb

lbl_8046EAD8:
	fmr      f31, f1
	lfs      f2, lbl_80520D10@sda21(r2)
	fmr      f1, f30
	lfs      f3, lbl_80520CF4@sda21(r2)
	lfs      f4, lbl_80520CE0@sda21(r2)
	li       r3, 0
	lfs      f5, lbl_80520D50@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	fctiwz   f0, f1
	stfd     f0, 8(r1)
	lwz      r5, 0xc(r1)
	clrlwi   r0, r5, 0x10
	cmplwi   r0, 0x80
	ble      lbl_8046EB14
	li       r5, 0x7f

lbl_8046EB14:
	lwz      r12, 0x10(r29)
	mr       r3, r29
	li       r4, 0xc
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046EB4C
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EB4C:
	lwz      r30, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r30, 0
	bne      lbl_8046EB6C
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EB6C:
	lwz      r0, 4(r30)
	cmplwi   r0, 0
	bne      lbl_8046EB8C
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EB8C:
	lwz      r3, 4(r30)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046EBA4
	li       r31, 0
	b        lbl_8046EBAC

lbl_8046EBA4:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r31, r3

lbl_8046EBAC:
	cmplwi   r31, 0
	beq      lbl_8046EC24
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8046EC24
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_80520CE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_8046EC24
	lfs      f3, lbl_80520CF4@sda21(r2)
	li       r3, 1
	lfs      f5, lbl_80520D54@sda21(r2)
	fmr      f4, f3
	bl       linearTransform__7JALCalcFfffffb
	fmuls    f31, f31, f1

lbl_8046EC24:
	mr       r3, r29
	fmr      f1, f31
	lwz      r12, 0x10(r29)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lfs      f0, sTreasureLader_PitchDistance@sda21(r13)
	fcmpo    cr0, f30, f0
	ble      lbl_8046EC70
	mr       r3, r29
	lfs      f1, sTreasureLader_Pitch@sda21(r13)
	lwz      r12, 0x10(r29)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046EC70:
	mr       r3, r29
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r0, 0x44(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8046ECA0
 * @note Size: 0x450
 */
JAISe* PSStartTresureLaderNoiseSE(u8 state, f32 a1, f32)
{
	JAISe* sound = nullptr;
	switch (state) {
	case 3:
		sLaderNoiseTimer++;
		if (sLaderNoiseTimer > sLaderNoiseWait) {
			sound            = PSSystem::spSysIF->playSystemSe(PSSE_SY_LADER_NOISE_SINGLE, 0);
			f32 delay        = JALCalc::getRandom(sLaderNoiseFuefukiTimerRandam, JALCalc::cEqualCSlope, JALCalc::cEqualPSlope);
			sLaderNoiseTimer = 0;
			sLaderNoiseWait  = sLaderNoiseFuefukiTimerCenter + delay;
			if (sound) {
				f32 calc = JALCalc::getParamByExp(a1, sLaderNoiseFuefukiSensMin, sLaderNoiseFuefukiSensMax, sLaderNoiseVolumeExp,
				                                  sLaderNoiseFuefukiVolumeMin, sLaderNoiseFuefukiVolumeMax, JALCalc::CS_POSITIVE_CURVE);
				PSM::MiddleBossSeq* seq = PSMGetMiddleBossSeq();
				if (seq && *seq->getHandleP()) {
					f32 vol = (*seq->getHandleP())->getVolume(SOUNDPARAM_Unk0);
					if (vol > 0.0f) {
						calc *= JALCalc::linearTransform(vol, 0.0f, 1.0f, 1.0f, 0.2f, true);
					}
				}
				sound->setVolume(calc, 0, SOUNDPARAM_Unk0);
			}
		}
		break;
	case 4:
		sLaderNoiseTimer++;
		if (sLaderNoiseTimer > sLaderNoiseWait) {
			sound            = PSSystem::spSysIF->playSystemSe(PSSE_SY_LADER_NOISE_SINGLE, 0);
			f32 delay        = JALCalc::getRandom(sLaderNoiseFuefukiTimerRandam / 6, JALCalc::cEqualCSlope, JALCalc::cEqualPSlope);
			sLaderNoiseTimer = 0;
			sLaderNoiseWait  = sLaderNoiseFuefukiTimerRandam / 6 + delay;
			if (sound) {
				PSM::MiddleBossSeq* seq = PSMGetMiddleBossSeq();
				if (seq && *seq->getHandleP()) {
					f32 vol = (*seq->getHandleP())->getVolume(SOUNDPARAM_Unk0);
					if (vol > 0.0f) {
						f32 calc = JALCalc::linearTransform(vol, 0.0f, 1.0f, 1.0f, 0.2f, true);
						sound->setVolume(calc, 0, SOUNDPARAM_Unk0);
					}
				}
				sound->setPitch(1.2f, 0, SOUNDPARAM_Unk0);
			}
		}
		break;
	}
	return sound;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stw      r31, 0x2c(r1)
	stw      r30, 0x28(r1)
	stw      r29, 0x24(r1)
	clrlwi   r0, r3, 0x18
	lis      r3, lbl_8049DA08@ha
	fmr      f31, f1
	cmpwi    r0, 4
	addi     r31, r3, lbl_8049DA08@l
	li       r30, 0
	beq      lbl_8046EED0
	bge      lbl_8046F0C8
	cmpwi    r0, 3
	bge      lbl_8046ECF0
	b        lbl_8046F0C8
	b        lbl_8046F0C8

lbl_8046ECF0:
	lhz      r3, sLaderNoiseTimer@sda21(r13)
	lha      r0, sLaderNoiseWait@sda21(r13)
	addi     r4, r3, 1
	clrlwi   r3, r4, 0x10
	sth      r4, sLaderNoiseTimer@sda21(r13)
	cmpw     r3, r0
	ble      lbl_8046ED88
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1887
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lha      r4, sLaderNoiseFuefukiTimerRandam@sda21(r13)
	lis      r0, 0x4330
	stw      r0, 8(r1)
	mr       r30, r3
	xoris    r0, r4, 0x8000
	lfd      f1, lbl_80520D58@sda21(r2)
	stw      r0, 0xc(r1)
	lfs      f2, cEqualCSlope__7JALCalc@sda21(r2)
	lfd      f0, 8(r1)
	lfs      f3, cEqualPSlope__7JALCalc@sda21(r2)
	fsubs    f1, f0, f1
	bl       getRandom__7JALCalcFfff
	lha      r4, sLaderNoiseFuefukiTimerCenter@sda21(r13)
	lis      r3, 0x4330
	li       r0, 0
	stw      r3, 0x10(r1)
	xoris    r3, r4, 0x8000
	lfd      f2, lbl_80520D58@sda21(r2)
	stw      r3, 0x14(r1)
	lfd      f0, 0x10(r1)
	sth      r0, sLaderNoiseTimer@sda21(r13)
	fsubs    f0, f0, f2
	fadds    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	sth      r0, sLaderNoiseWait@sda21(r13)

lbl_8046ED88:
	cmplwi   r30, 0
	beq      lbl_8046F0C8
	fmr      f1, f31
	lfs      f2, sLaderNoiseFuefukiSensMin@sda21(r13)
	lfs      f3, sLaderNoiseFuefukiSensMax@sda21(r13)
	li       r3, 1
	lfs      f4, sLaderNoiseVolumeExp@sda21(r13)
	lfs      f5, sLaderNoiseFuefukiVolumeMin@sda21(r13)
	lfs      f6, sLaderNoiseFuefukiVolumeMax@sda21(r13)
	bl       getParamByExp__7JALCalcFffffffQ27JALCalc9CurveSign
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	fmr      f31, f1
	cmplwi   r0, 0
	bne      lbl_8046EDD4
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EDD4:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_8046EDF4
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EDF4:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8046EE14
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EE14:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046EE2C
	li       r31, 0
	b        lbl_8046EE34

lbl_8046EE2C:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r31, r3

lbl_8046EE34:
	cmplwi   r31, 0
	beq      lbl_8046EEAC
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8046EEAC
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_80520CE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_8046EEAC
	lfs      f3, lbl_80520CF4@sda21(r2)
	li       r3, 1
	lfs      f5, lbl_80520D54@sda21(r2)
	fmr      f4, f3
	bl       linearTransform__7JALCalcFfffffb
	fmuls    f31, f31, f1

lbl_8046EEAC:
	mr       r3, r30
	fmr      f1, f31
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046F0C8

lbl_8046EED0:
	lhz      r3, sLaderNoiseTimer@sda21(r13)
	lha      r0, sLaderNoiseWait@sda21(r13)
	addi     r4, r3, 1
	clrlwi   r3, r4, 0x10
	sth      r4, sLaderNoiseTimer@sda21(r13)
	cmpw     r3, r0
	ble      lbl_8046EF90
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1887
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl
	lis      r4, 0x2AAAAAAB@ha
	lha      r5, sLaderNoiseFuefukiTimerRandam@sda21(r13)
	addi     r4, r4, 0x2AAAAAAB@l
	lis      r0, 0x4330
	mulhw    r4, r4, r5
	stw      r0, 0x18(r1)
	lfd      f1, lbl_80520D58@sda21(r2)
	mr       r30, r3
	lfs      f2, cEqualCSlope__7JALCalc@sda21(r2)
	lfs      f3, cEqualPSlope__7JALCalc@sda21(r2)
	srwi     r0, r4, 0x1f
	add      r0, r4, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0x1c(r1)
	lfd      f0, 0x18(r1)
	fsubs    f1, f0, f1
	bl       getRandom__7JALCalcFfff
	lis      r3, 0x2AAAAAAB@ha
	lha      r0, sLaderNoiseFuefukiTimerCenter@sda21(r13)
	addi     r4, r3, 0x2AAAAAAB@l
	lis      r3, 0x4330
	mulhw    r4, r4, r0
	li       r0, 0
	stw      r3, 0x10(r1)
	lfd      f2, lbl_80520D58@sda21(r2)
	sth      r0, sLaderNoiseTimer@sda21(r13)
	srwi     r0, r4, 0x1f
	add      r0, r4, r0
	xoris    r0, r0, 0x8000
	stw      r0, 0x14(r1)
	lfd      f0, 0x10(r1)
	fsubs    f0, f0, f2
	fadds    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	sth      r0, sLaderNoiseWait@sda21(r13)

lbl_8046EF90:
	cmplwi   r30, 0
	beq      lbl_8046F0C8
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046EFB8
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EFB8:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_8046EFD8
	addi     r3, r31, 0x2c
	addi     r5, r31, 0x14
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EFD8:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_8046EFF8
	addi     r3, r31, 0x38
	addi     r5, r31, 0x14
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046EFF8:
	lwz      r3, 4(r29)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046F010
	li       r31, 0
	b        lbl_8046F018

lbl_8046F010:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv
	mr       r31, r3

lbl_8046F018:
	cmplwi   r31, 0
	beq      lbl_8046F0A8
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	cmplwi   r0, 0
	beq      lbl_8046F0A8
	mr       r3, r31
	lwz      r12, 0x10(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0(r3)
	li       r4, 0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lfs      f2, lbl_80520CE0@sda21(r2)
	fcmpo    cr0, f1, f2
	ble      lbl_8046F0A8
	lfs      f3, lbl_80520CF4@sda21(r2)
	li       r3, 1
	lfs      f5, lbl_80520D54@sda21(r2)
	fmr      f4, f3
	bl       linearTransform__7JALCalcFfffffb
	mr       r3, r30
	li       r4, 0
	lwz      r12, 0x10(r30)
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046F0A8:
	mr       r3, r30
	lfs      f1, lbl_80520D24@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl

lbl_8046F0C8:
	mr       r3, r30
	psq_l    f31, 56(r1), 0, qr0
	lwz      r0, 0x44(r1)
	lfd      f31, 0x30(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/**
 * @note Address: 0x8046F0F0
 * @note Size: 0xB0
 */
PSM::WorldMapRocket* PSMGetWorldMapRocket()
{
	PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
	mgr->checkScene();
	PSM::Scene_WorldMap* scene = static_cast<PSM::Scene_WorldMap*>(mgr->mScenes->getChildScene());
	if (scene) {
		return scene->mRocket;
	}
	return nullptr;
}

/**
 * @note Address: 0x8046F1A0
 * @note Size: 0x7C
 */
void PSPlayCaveHoleSound(PSM::Creature* obj)
{
	PSM::SeSound* sound = static_cast<PSM::SeSound*>(static_cast<PSM::CreatureObj*>(obj)->startSound(PSSE_EV_POLUTION_NOISE, 0));
	if (sound) {
		sound->specializePerspCalc(PSSystem::SingletonBase<PSM::CreaturePrm>::getInstance()->mPersp);
	}
}
