#include "PSM/BossBgmFader.h"
#include "PSM/Scene.h"
#include "PSGame/Global.h"
#include "PSM/BossSeq.h"
#include "JSystem/JAudio/JALCalc.h"
#include "utilityU.h"

namespace PSM {
namespace BossBgmFader {

/**
 * @note Address: N/A
 * @note Size: 0xC8
 */
TypedProc::TypedProc(f32 farDist, f32 nearDist)
{
	mFarDist     = farDist;
	mMiddleDist  = (farDist - nearDist);
	mNearDist    = nearDist;
	mStopDist    = mMiddleDist / 2.0f;
	mCurrState   = 0;
	mPrevState   = 0;
	mCurrObj     = nullptr;
	mMaxDistance = 1000000000.0f;
	P2ASSERTLINE(47, mNearDist > 0.0f);
}

/**
 * @note Address: 0x8046C6B8
 * @note Size: 0x1D8
 */
void TypedProc::update()
{
	f32 maxDist     = 1000000000.0f;
	f32 defaultDist = mMaxDistance;
	mCurrObj        = nullptr;

	for (JSULinkIterator<EnemyBoss> iter(getFirst()); iter != nullptr; iter++) {
		if (iter.getObject()->mAppearFlag) {
			f32 dist = iter.getObject()->mNaviDistance;
			if (dist < maxDist) {
				maxDist  = dist;
				mCurrObj = iter.getObject();
			}
		}
	}

	if (maxDist > 9000000.0f) {
		maxDist = defaultDist;
	}

	f32 maxDist2      = 100000000.0f;
	EnemyBoss* newObj = nullptr;
	FOREACH_NODE(JSULink<EnemyBoss>, getFirst(), link)
	{
		link->getObject()->updateDisappearing();
		if (link->getObject()->isOnDisappearing()) {
			f32 dist = link->getObject()->mNaviDistance;
			if (dist <= maxDist2) {
				maxDist2 = dist;
				newObj   = link->getObject();
			}
		}
	}

	if (mCurrObj) {
		if (maxDist < mStopDist) {
			mCurrState = 0;
			mCurrState |= 3;
		} else if (maxDist < mMiddleDist) {
			mCurrState = 0;
			mCurrState |= 2;
		} else if (maxDist < mFarDist) {
			mCurrState = 0;
			mCurrState |= 1;
		} else {
			mCurrState = 0;
		}
	} else {
		mCurrState = 0;
	}

	if (newObj && maxDist2 < mFarDist && mCurrState == 0) {
		mCurrState = 0;
		mCurrState |= 4;
		mCurrObj = newObj;
		maxDist  = maxDist2;
	}
	mMaxDistance = maxDist;
}

/**
 * @note Address: N/A
 * @note Size: 0x100
 */
void TypedProc::getBossFadeVolume() { mNearDist = 1.0f; }

/**
 * @note Address: 0x8046C890
 * @note Size: 0x3C
 */
void TypedProc_MidBoss::update()
{
	TypedProc::update();
	if (mDirectorUpdator) {
		mDirectorUpdator->frameEndWork();
	}
}

/**
 * @note Address: 0x8046C8CC
 * @note Size: 0xEC
 */
Mgr::Mgr()
    : PSSystem::SingletonBase<Mgr>(this)
    , mTypedProc(1000.0f, 400.0f)
{
	mTypedProc.mNeedJump = false;
}

/**
 * @note Address: 0x8046C9B8
 * @note Size: 0x24
 */
void Mgr::appendTarget(JSULink<EnemyBoss>* obj) { mTypedProc.append(obj); }

/**
 * @note Address: 0x8046C9DC
 * @note Size: 0x768
 */
void Mgr::exec()
{

	mTypedProc.update();
	JAISound* mainSound = *PSGetDirectedMainBgmA()->getHandleP();

	PSM::MiddleBossSeq* bossSeq = PSMGetMiddleBossSeq();
	JAISound* bossSound         = (bossSeq) ? *bossSeq->getHandleP() : nullptr;

	JAISound* chSound = nullptr;
	Scene_Game* scene = PSMGetGameScene();
	if (scene && scene->getSceneInfoA()->mSceneType == PSGame::SceneInfo::CHALLENGE_MODE) {
		PSSystem::SeqBase* seq = PSSystemChildSceneData(2);
		chSound                = (seq) ? *seq->getHandleP() : nullptr;
	}

	if (mTypedProc.mCurrState == 3) {
		if (mTypedProc.mPrevState != 3) {
			PSSystem::DirectorBase* director = PSMGetBattleDirector(1);
			if (director) {
				director->directOn();
			}
		}
	} else if (mTypedProc.mPrevState == 3) {
		PSSystem::DirectorBase* director = PSMGetBattleDirector(1);
		if (director) {
			director->directOff();
		}
	}

	if (!mTypedProc.mNeedJump) {
		int state = mTypedProc.mCurrState;
		if (state == 0 && mTypedProc.mPrevState) {
			MiddleBossSeq* seq = PSMGetMiddleBossSeq();
			if (seq->_130) {
				seq->requestJumpBgmOnBeat(0);
			}
		} else if ((state == 3 || state == 2) && (mTypedProc.mPrevState == 1 || mTypedProc.mPrevState == 0)) {
			MiddleBossSeq* seq = PSMGetMiddleBossSeq();
			if (!seq->_130) {
				seq->requestJumpBgmOnBeat(1);
			}
		}
	}

	switch (mTypedProc.mCurrState) {
	case 2:
	case 3:
		if (mainSound) {
			mainSound->setVolume(0.0f, 40, 0);
		}
		if (chSound) {
			chSound->setVolume(0.0f, 40, 0);
		}
		if (bossSound) {
			bossSound->setVolume(1.0f, 40, 0);
		}

		break;
	case 1:
		f32 calc = mTypedProc.mMaxDistance - mTypedProc.mMiddleDist;
		P2ASSERTBOUNDSINCLUSIVELINE2(167, 0.0f, calc, mTypedProc.mNearDist);
		calc = JALCalc::linearTransform(calc, 0.0f, mTypedProc.mNearDist, 1.0f, 0.0f, false);
		P2ASSERTBOUNDSINCLUSIVELINE2(172, 0.0f, calc, 1.0f);
		f32 inv = 1.0f - calc;
		if (mainSound) {
			mainSound->setVolume(inv, 40, 0);
		}
		if (chSound) {
			chSound->setVolume(inv, 40, 0);
		}
		if (bossSound) {
			bossSound->setVolume(calc, 40, 0);
		}

		break;
	case 0:
		if (mainSound) {
			mainSound->setVolume(1.0f, 40, 0);
		}
		if (chSound) {
			chSound->setVolume(1.0f, 40, 0);
		}
		if (bossSound) {
			bossSound->setVolume(0.0f, 40, 0);
		}
		break;
	case 4:
		if (mainSound) {
			mainSound->setVolume(0.0f, 40, 0);
		}
		if (chSound) {
			chSound->setVolume(0.0f, 40, 0);
		}
		if (bossSound) {
			bossSound->setVolume(0.0f, 40, 0);
		}
		break;
	}
	mTypedProc.mPrevState = mTypedProc.mCurrState;
	mTypedProc.mNeedJump  = 0;
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stfd     f31, 0x30(r1)
	psq_st   f31, 56(r1), 0, qr0
	stfd     f30, 0x20(r1)
	psq_st   f30, 40(r1), 0, qr0
	stmw     r26, 8(r1)
	mr       r27, r3
	lis      r4, lbl_8049D9A8@ha
	addi     r3, r27, 4
	lwz      r12, 0x10(r27)
	addi     r31, r4, lbl_8049D9A8@l
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	bl       PSGetDirectedMainBgmA__Fv
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	lwz      r30, 0(r3)
	cmplwi   r0, 0
	bne      lbl_8046CA54
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CA54:
	lwz      r28, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r28, 0
	bne      lbl_8046CA74
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CA74:
	lwz      r0, 4(r28)
	cmplwi   r0, 0
	bne      lbl_8046CA94
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CA94:
	lwz      r3, 4(r28)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046CAAC
	li       r3, 0
	b        lbl_8046CAB0

lbl_8046CAAC:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv

lbl_8046CAB0:
	cmplwi   r3, 0
	beq      lbl_8046CAD0
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r29, 0(r3)
	b        lbl_8046CAD4

lbl_8046CAD0:
	li       r29, 0

lbl_8046CAD4:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	li       r28, 0
	cmplwi   r0, 0
	bne      lbl_8046CAF8
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CAF8:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CB18
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CB18:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CB38
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CB38:
	lwz      r3, 4(r26)
	lwz      r26, 4(r3)
	cmplwi   r26, 0
	bne      lbl_8046CB5C
	addi     r3, r31, 0x30
	addi     r5, r31, 0x3c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CB5C:
	mr       r3, r26
	lwz      r12, 0(r26)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8046CB7C
	b        lbl_8046CB80

lbl_8046CB7C:
	li       r26, 0

lbl_8046CB80:
	cmplwi   r26, 0
	beq      lbl_8046CC54
	mr       r3, r26
	bl       getSceneInfoA__Q23PSM9SceneBaseFv
	lbz      r0, 6(r3)
	cmplwi   r0, 6
	bne      lbl_8046CC54
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046CBBC
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CBBC:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CBDC
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CBDC:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CBFC
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CBFC:
	lwz      r3, 4(r26)
	lwz      r26, 4(r3)
	cmplwi   r26, 0
	bne      lbl_8046CC20
	addi     r3, r31, 0x30
	addi     r5, r31, 0x3c
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CC20:
	addi     r3, r26, 0x10
	li       r4, 2
	bl       getSeq__Q28PSSystem6SeqMgrFUl
	cmplwi   r3, 0
	beq      lbl_8046CC4C
	lwz      r12, 0x10(r3)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r3)
	b        lbl_8046CC50

lbl_8046CC4C:
	li       r0, 0

lbl_8046CC50:
	mr       r28, r0

lbl_8046CC54:
	lwz      r0, 0x24(r27)
	cmpwi    r0, 3
	bne      lbl_8046CC90
	lwz      r0, 0x28(r27)
	cmpwi    r0, 3
	beq      lbl_8046CCBC
	li       r3, 1
	bl       PSMGetBattleDirector__FUc
	cmplwi   r3, 0
	beq      lbl_8046CCBC
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	b        lbl_8046CCBC

lbl_8046CC90:
	lwz      r0, 0x28(r27)
	cmpwi    r0, 3
	bne      lbl_8046CCBC
	li       r3, 1
	bl       PSMGetBattleDirector__FUc
	cmplwi   r3, 0
	beq      lbl_8046CCBC
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl

lbl_8046CCBC:
	lbz      r0, 0x38(r27)
	cmplwi   r0, 0
	bne      lbl_8046CE40
	lwz      r3, 0x24(r27)
	cmpwi    r3, 0
	bne      lbl_8046CD80
	lwz      r0, 0x28(r27)
	cmpwi    r0, 0
	beq      lbl_8046CD80
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046CD00
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CD00:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CD20
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CD20:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CD40
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CD40:
	lwz      r3, 4(r26)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046CD58
	li       r3, 0
	b        lbl_8046CD5C

lbl_8046CD58:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv

lbl_8046CD5C:
	lhz      r0, 0x130(r3)
	cmplwi   r0, 0
	beq      lbl_8046CE40
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl
	b        lbl_8046CE40

lbl_8046CD80:
	cmpwi    r3, 3
	beq      lbl_8046CD90
	cmpwi    r3, 2
	bne      lbl_8046CE40

lbl_8046CD90:
	lwz      r0, 0x28(r27)
	cmpwi    r0, 1
	beq      lbl_8046CDA4
	cmpwi    r0, 0
	bne      lbl_8046CE40

lbl_8046CDA4:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8046CDC4
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CDC4:
	lwz      r26, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r26, 0
	bne      lbl_8046CDE4
	addi     r3, r31, 0x24
	addi     r5, r31, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CDE4:
	lwz      r0, 4(r26)
	cmplwi   r0, 0
	bne      lbl_8046CE04
	addi     r3, r31, 0x30
	addi     r5, r31, 0x18
	li       r4, 0xc7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CE04:
	lwz      r3, 4(r26)
	lwz      r3, 4(r3)
	cmplwi   r3, 0
	bne      lbl_8046CE1C
	li       r3, 0
	b        lbl_8046CE20

lbl_8046CE1C:
	bl       getMiddleBossBgm__Q26PSGame8PikSceneFv

lbl_8046CE20:
	lhz      r0, 0x130(r3)
	cmplwi   r0, 0
	bne      lbl_8046CE40
	lwz      r12, 0x10(r3)
	li       r4, 1
	lwz      r12, 0x54(r12)
	mtctr    r12
	bctrl

lbl_8046CE40:
	lwz      r0, 0x24(r27)
	cmpwi    r0, 1
	beq      lbl_8046CEE4
	bge      lbl_8046CE5C
	cmpwi    r0, 0
	bge      lbl_8046D01C
	b        lbl_8046D110

lbl_8046CE5C:
	cmpwi    r0, 4
	beq      lbl_8046D098
	bge      lbl_8046D110
	cmplwi   r30, 0
	beq      lbl_8046CE90
	mr       r3, r30
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CE90:
	cmplwi   r28, 0
	beq      lbl_8046CEB8
	mr       r3, r28
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CEB8:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	lfs      f1, lbl_80520CCC@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046D110

lbl_8046CEE4:
	lfs      f2, 0x30(r27)
	li       r0, 0
	lfs      f1, 0x18(r27)
	lfs      f0, lbl_80520CC0@sda21(r2)
	fsubs    f31, f2, f1
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8046CF18
	lfs      f0, 0x1c(r27)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8046CF18
	li       r0, 1

lbl_8046CF18:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046CF34
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0xa7
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CF34:
	lfs      f2, lbl_80520CC0@sda21(r2)
	fmr      f1, f31
	lfs      f3, 0x1c(r27)
	li       r3, 0
	fmr      f5, f2
	lfs      f4, lbl_80520CCC@sda21(r2)
	bl       linearTransform__7JALCalcFfffffb
	fmr      f31, f1
	lfs      f0, lbl_80520CC0@sda21(r2)
	li       r0, 0
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8046CF7C
	lfs      f0, lbl_80520CCC@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 0, 2
	bne      lbl_8046CF7C
	li       r0, 1

lbl_8046CF7C:
	clrlwi.  r0, r0, 0x18
	bne      lbl_8046CF98
	addi     r3, r31, 0
	addi     r5, r31, 0x18
	li       r4, 0xac
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8046CF98:
	lfs      f0, lbl_80520CCC@sda21(r2)
	cmplwi   r30, 0
	fsubs    f30, f0, f31
	beq      lbl_8046CFC8
	mr       r3, r30
	fmr      f1, f30
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CFC8:
	cmplwi   r28, 0
	beq      lbl_8046CFF0
	mr       r3, r28
	fmr      f1, f30
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046CFF0:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	fmr      f1, f31
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046D110

lbl_8046D01C:
	cmplwi   r30, 0
	beq      lbl_8046D044
	mr       r3, r30
	lfs      f1, lbl_80520CCC@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D044:
	cmplwi   r28, 0
	beq      lbl_8046D06C
	mr       r3, r28
	lfs      f1, lbl_80520CCC@sda21(r2)
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D06C:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	b        lbl_8046D110

lbl_8046D098:
	cmplwi   r30, 0
	beq      lbl_8046D0C0
	mr       r3, r30
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r30)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D0C0:
	cmplwi   r28, 0
	beq      lbl_8046D0E8
	mr       r3, r28
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r28)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D0E8:
	cmplwi   r29, 0
	beq      lbl_8046D110
	mr       r3, r29
	lfs      f1, lbl_80520CC0@sda21(r2)
	lwz      r12, 0x10(r29)
	li       r4, 0x28
	li       r5, 0
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl

lbl_8046D110:
	lwz      r3, 0x24(r27)
	li       r0, 0
	stw      r3, 0x28(r27)
	stb      r0, 0x38(r27)
	psq_l    f31, 56(r1), 0, qr0
	lfd      f31, 0x30(r1)
	psq_l    f30, 40(r1), 0, qr0
	lfd      f30, 0x20(r1)
	lmw      r26, 8(r1)
	lwz      r0, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace BossBgmFader
} // namespace PSM
