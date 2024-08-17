#include "Game/Entities/PelletItem.h"
#include "Game/Entities/PelletOtakara.h"
#include "Game/Navi.h"
#include "PSSystem/PSMainSide_ObjSound.h"
#include "PSM/BossSeq.h"
#include "PSM/EnemyBoss.h"
#include "PSM/Tsuyukusa.h"
#include "PSM/WorkItem.h"
#include "PSM/ObjCalc.h"
#include "PSM/CreaturePrm.h"
#include "PSM/Navi.h"
#include "PSMath.h"
#include "utilityU.h"

namespace PSM {

f32 sBoss_ViewDist    = 1300.0f;
f32 sBoss_ViewDistVol = 0.3f;
f32 sBoss_DistMax     = 4000.0f;
EnemyBigBoss* EnemyBigBoss::sBigBoss;

/**
 * @note Address: N/A
 * @note Size: 0x50
 */
ObjBase::ObjBase()
    : JSULink<ObjBase>(this)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045CE64
 * @note Size: 0x80
 */
ObjBase::~ObjBase() { }

/**
 * @note Address: 0x8045CEE4
 * @note Size: 0x4C
 */
void ObjMgr::frameEnd_onPlaySe()
{
	FOREACH_NODE(JSULink<ObjBase>, mHead, link) { link->getObject()->frameEnd_onPlaySe(); }
}

/**
 * @note Address: 0x8045CF30
 * @note Size: 0x104
 */
ObjMgr::~ObjMgr()
{
	if (mScenes) {
		mScenes->detachObjMgr();
	}

	while (mHead) {
		JSULink<ObjBase>* link = (JSULink<ObjBase>*)mHead;
		ObjBase* obj           = link->getObject();
		remove(obj);
		delete obj;
	}
	sInstance = nullptr;
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
Creature::Creature(Game::Creature* gameObj)
    : mGameObj(gameObj)
{
	P2ASSERTLINE(97, gameObj);
	P2ASSERTLINE(98, PSSystem::SingletonBase<ObjMgr>::sInstance);
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x3C
 */
bool Creature::isVisible()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045D034
 * @note Size: 0x58
 */
void Creature::exec()
{
	if (!mGameObj->sound_culling()) {
		onCalcOn();
	}
}

/**
 * @note Address: 0x8045D08C
 * @note Size: 0x128
 */
bool Creature::judgeNearWithPlayer(const Vec& pos1, const Vec& pos2, f32 near, f32 far)
{
	return PSMath::calcDistanceInRange(pos1, pos2, near, far);
}

/**
 * @note Address: 0x8045D1B4
 * @note Size: 0xA0
 */
bool Creature::isNear(Game::Creature* obj, f32 near)
{
	Vec* pos  = (Vec*)mGameObj->getSound_PosPtr();
	Vec* pos2 = (Vec*)obj->getSound_PosPtr();

	return judgeNearWithPlayer(*pos, *pos2, near, near / 2);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	stw      r30, 8(r1)
	mr       r30, r3
	fmr      f31, f1
	lwz      r3, 0x2c(r3)
	mr       r31, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x100(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	mr       r31, r0
	lwz      r12, 0x100(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0x28(r30)
	mr       r5, r3
	lfs      f0, lbl_80520C54@sda21(r2)
	fmr      f1, f31
	lwz      r12, 0x34(r12)
	mr       r3, r30
	fmuls    f2, f31, f0
	mr       r4, r31
	mtctr    r12
	bctrl
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8045D254
 * @note Size: 0x70
 */
u8 Creature::getPlayingHandleNum()
{
	JAInter::Object* jai = getJAIObject();
	u8 num               = 0;
	for (u8 i = 0; i < jai->mHandleCount; i++) {
		if (jai->mSounds[i]) {
			num++;
		}
	}
	return num;
}

/**
 * @note Address: 0x8045D2C4
 * @note Size: 0x15C
 */
void Creature::loopCalc(FrameCalcArg& arg)
{
	JAInter::Object* jai = arg.mObj->getJAIObject();
	Vec& pos             = jai->_28;
	f32& dist            = *arg.mDist;
	P2ASSERTLINE(170, jai->_24);

	u8 players = PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this);
	PSMTXMultVec(*JAIBasic::msBasic->mCameras[players].mMtx, jai->_24, &pos);
	dist = pikmin2_sqrtf((pos.x * pos.x) + (pos.y * pos.y) + (pos.z * pos.z));

	for (u8 i = 0; i < jai->mHandleCount; i++) {
		JAISound* se = jai->mSounds[i];
		if (se) {
			JAISound_0x34* data                   = se->mSoundObj;
			data->mPosition                       = pos;
			data->mDistance                       = dist;
			static_cast<SeSound*>(se)->mPlayerNum = players;
		}
	}

	f32& pan = *arg.mPan;
	pan      = SeSound::calcPan(pos, dist);

	f32& dolby = *arg.mDolby;
	dolby      = SeSound::calcDolby(pos, dist);
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stmw     r27, 0xc(r1)
	mr       r27, r3
	mr       r28, r4
	lwz      r3, 0(r4)
	lwz      r12, 0x28(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r31, r3
	lwz      r29, 4(r28)
	lwz      r0, 0x24(r3)
	addi     r30, r31, 0x28
	cmplwi   r0, 0
	bne      lbl_8045D324
	lis      r3, lbl_8049CFA0@ha
	lis      r5, lbl_8049CFB8@ha
	addi     r3, r3, lbl_8049CFA0@l
	li       r4, 0xaa
	addi     r5, r5, lbl_8049CFB8@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045D324:
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) mr r4,
r27 lwz      r12, 0(r3) lwz      r12, 0xc(r12) mtctr    r12 bctrl mr       r27,
r3 lwz      r3, msBasic__8JAIBasic@sda21(r13) clrlwi   r0, r27, 0x18 lwz r4,
0x24(r31) mulli    r0, r0, 0xc lwz      r3, 4(r3) mr       r5, r30 add      r3,
r3, r0 lwz      r3, 8(r3) bl       PSMTXMultVec lfs      f1, 0(r30) lfs      f0,
4(r30) fmuls    f1, f1, f1 lfs      f2, 8(r30) fmuls    f0, f0, f0 fmuls    f2,
f2, f2 fadds    f0, f1, f0 fadds    f1, f2, f0 bl       pikmin2_sqrtf__Ff stfs
f1, 0(r29) li       r5, 0 b        lbl_8045D3D4

lbl_8045D394:
	lwz      r3, 0x1c(r31)
	rlwinm   r0, r5, 2, 0x16, 0x1d
	lwzx     r3, r3, r0
	cmplwi   r3, 0
	beq      lbl_8045D3D0
	lwz      r4, 0x34(r3)
	lfs      f0, 0(r30)
	stfs     f0, 0(r4)
	lfs      f0, 4(r30)
	stfs     f0, 4(r4)
	lfs      f0, 8(r30)
	stfs     f0, 8(r4)
	lfs      f0, 0(r29)
	stfs     f0, 0x18(r4)
	stb      r27, 0x49c(r3)

lbl_8045D3D0:
	addi     r5, r5, 1

lbl_8045D3D4:
	lbz      r0, 0x19(r31)
	clrlwi   r3, r5, 0x18
	cmplw    r3, r0
	blt      lbl_8045D394
	lwz      r27, 8(r28)
	mr       r3, r30
	lfs      f1, 0(r29)
	bl       calcPan__Q23PSM7SeSoundFRC3Vecf
	stfs     f1, 0(r27)
	mr       r3, r30
	lwz      r27, 0xc(r28)
	lfs      f1, 0(r29)
	bl       calcDolby__Q23PSM7SeSoundFRC3Vecf
	stfs     f1, 0(r27)
	lmw      r27, 0xc(r1)
	lwz      r0, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x8045D420
 * @note Size: 0x380
 */
JAISound* Creature::startSoundInner(PSM::StartSoundArg& arg)
{
	if (mGameObj->sound_culling()) {
		return nullptr;
	}

	if (!static_cast<SceneBase*>(PSMGetSceneMgrCheck()->getEndScene())->getSeSceneGate(this, arg.mSoundID)) {
		return nullptr;
	}

	u32 sound            = arg.mSoundID;
	u32 unk              = arg._08;
	JAInter::Object* jai = arg.mObj->getJAIObject();
	JAISound** temp      = nullptr;
	if (!(sound & 0x800)) {
		temp = jai->getUseSoundHandlePointer(sound);
	}
	if (!temp) {
		temp = jai->getFreeSoundHandlePointer();
	}

	if (temp) {
		JAInter::Actor actor(this, jai->_24, 0, 0);
		u8 players = PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this);
		JAIBasic::msBasic->startSoundActorT(sound, temp, &actor, unk, players);
		onPlayingSe(sound, *temp);
		if (*temp) {
			(*temp)->_1A = true;
		}
		return *temp;
	} else {
		u8 prio = 255;
		u8 id   = 255;
		for (u8 i = 0; i < jai->mHandleCount; i++) {
			if (!((1 << i) & jai->mUseHandleFlag) && jai->mSounds[i]->mSoundInfo->mPriority <= prio) {
				id   = i;
				prio = jai->mSounds[i]->mSoundInfo->mPriority;
			}
		}

		if (id == 255 || JAInter::SoundTable::getInfoPointer(sound)->mPriority >= prio) {
			return nullptr;
		}
		jai->handleStop(id, 0);

		JAInter::Actor actor(this, jai->_24, 0, 0);
		u8 players = PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this);
		JAIBasic::msBasic->startSoundActorT(sound, getHandleArea(id), &actor, unk, players);
		onPlayingSe(sound, *getHandleArea(id));
		JAISound* se = jai->mSounds[id];
		if (se) {
			(se)->_1A = true;
		}
		return se;
	}
	return nullptr;
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	lis      r5, lbl_8049CFA0@ha
	stw      r0, 0x54(r1)
	stmw     r25, 0x34(r1)
	mr       r25, r3
	mr       r28, r4
	addi     r26, r5, lbl_8049CFA0@l
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x104(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045D464
	li       r3, 0
	b        lbl_8045D78C

lbl_8045D464:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_8045D484
	addi     r3, r26, 0x30
	addi     r5, r26, 0x18
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045D484:
	lwz      r27, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r27, 0
	bne      lbl_8045D4A4
	addi     r3, r26, 0x30
	addi     r5, r26, 0x18
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045D4A4:
	lwz      r0, 8(r27)
	cmplwi   r0, 0
	bne      lbl_8045D4C4
	addi     r3, r26, 0x3c
	addi     r5, r26, 0x18
	li       r4, 0xa1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045D4C4:
	lwz      r3, 8(r27)
	mr       r4, r25
	lwz      r5, 4(r28)
	lwz      r12, 0(r3)
	lwz      r12, 0x38(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045D4F0
	li       r3, 0
	b        lbl_8045D78C

lbl_8045D4F0:
	lwz      r29, 0(r28)
	lwz      r31, 4(r28)
	mr       r3, r29
	lwz      r30, 8(r28)
	lwz      r12, 0x28(r29)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	rlwinm.  r0, r31, 0, 0x14, 0x14
	li       r26, 0
	mr       r28, r3
	bne      lbl_8045D538
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r26, r3

lbl_8045D538:
	cmplwi   r26, 0
	bne      lbl_8045D558
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	mr       r26, r3

lbl_8045D558:
	cmplwi   r26, 0
	beq      lbl_8045D604
	cmplwi   r29, 0
	lwz      r7, 0x24(r28)
	bne      lbl_8045D574
	mr       r3, r7
	b        lbl_8045D578

lbl_8045D574:
	mr       r3, r29

lbl_8045D578:
	li       r6, -1
	li       r5, 0
	li       r0, 1
	stw      r3, 0x1c(r1)
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) mr r4,
r25 stw      r7, 0x20(r1) stw      r6, 0x24(r1) stw      r5, 0x28(r1) stb r0,
0x2c(r1) lwz      r12, 0(r3) lwz      r12, 0xc(r12) mtctr    r12 bctrl mr r8, r3
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mr       r4, r31
	mr       r5, r26
	mr       r7, r30
	addi     r6, r1, 0x1c
	bl
"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc" mr
r3, r25 mr       r4, r31 lwz      r12, 0x28(r25) lwz      r5, 0(r26) lwz r12,
0x38(r12) mtctr    r12 bctrl lwz      r3, 0(r26) cmplwi   r3, 0 beq lbl_8045D5FC
	li       r0, 1
	stb      r0, 0x1a(r3)

lbl_8045D5FC:
	lwz      r3, 0(r26)
	b        lbl_8045D78C

lbl_8045D604:
	lbz      r6, 0x19(r28)
	li       r27, 0xff
	li       r26, 0xff
	li       r7, 0
	li       r5, 1
	b        lbl_8045D65C

lbl_8045D61C:
	clrlwi   r3, r7, 0x18
	lwz      r0, 0x20(r28)
	slw      r3, r5, r3
	and.     r0, r3, r0
	bne      lbl_8045D658
	lwz      r4, 0x1c(r28)
	rlwinm   r3, r7, 2, 0x16, 0x1d
	clrlwi   r0, r27, 0x18
	lwzx     r3, r4, r3
	lwz      r3, 0x44(r3)
	lbz      r3, 4(r3)
	cmplw    r3, r0
	bgt      lbl_8045D658
	mr       r27, r3
	mr       r26, r7

lbl_8045D658:
	addi     r7, r7, 1

lbl_8045D65C:
	clrlwi   r0, r7, 0x18
	cmplw    r0, r6
	blt      lbl_8045D61C
	clrlwi   r0, r26, 0x18
	cmplwi   r0, 0xff
	beq      lbl_8045D788
	mr       r3, r31
	bl       getInfoPointer__Q27JAInter10SoundTableFUl
	lbz      r3, 4(r3)
	clrlwi   r0, r27, 0x18
	cmplw    r3, r0
	blt      lbl_8045D788
	mr       r3, r28
	mr       r4, r26
	lwz      r12, 0(r28)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl
	cmplwi   r29, 0
	lwz      r7, 0x24(r28)
	bne      lbl_8045D6BC
	mr       r3, r7
	b        lbl_8045D6C0

lbl_8045D6BC:
	mr       r3, r29

lbl_8045D6C0:
	li       r6, -1
	li       r5, 0
	li       r0, 1
	stw      r3, 8(r1)
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) mr r4,
r25 stw      r7, 0xc(r1) stw      r6, 0x10(r1) stw      r5, 0x14(r1) stb r0,
0x18(r1) lwz      r12, 0(r3) lwz      r12, 0xc(r12) mtctr    r12 bctrl lwz r12,
0x28(r25) mr       r27, r3 mr       r3, r25 mr       r4, r26 lwz      r12,
0x3c(r12) mtctr    r12 bctrl mr       r5, r3 lwz      r3,
msBasic__8JAIBasic@sda21(r13) mr       r4, r31 mr       r7, r30 mr       r8, r27
	addi     r6, r1, 8
	bl
"startSoundActorT<8JAISound>__8JAIBasicFUlPP8JAISoundPQ27JAInter5ActorUlUc" mr
r3, r25 mr       r4, r26 lwz      r12, 0x28(r25) lwz      r12, 0x3c(r12) mtctr
r12 bctrl mr       r5, r3 mr       r3, r25 lwz      r12, 0x28(r25) mr       r4,
r31 lwz      r5, 0(r5) lwz      r12, 0x38(r12) mtctr    r12 bctrl lwz      r3,
0x1c(r28) rlwinm   r0, r26, 2, 0x16, 0x1d lwzx     r3, r3, r0 cmplwi   r3, 0 beq
lbl_8045D78C li       r0, 1 stb      r0, 0x1a(r3) b        lbl_8045D78C

lbl_8045D788:
	li       r3, 0

lbl_8045D78C:
	lmw      r25, 0x34(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x8045D7A0
 * @note Size: 0x4
 */
void Creature::onPlayingSe(u32, JAISound*) { }

/**
 * @note Address: 0x8045D7A4
 * @note Size: 0x10C
 */
CreatureObj::CreatureObj(Game::Creature* gameObj, u8 p2)
    : Creature(gameObj)
    , JAInter::Object(reinterpret_cast<Vec*>(gameObj->getSound_PosPtr()), JKRGetCurrentHeap(), p2)
{
}

/**
 * @note Address: 0x8045D948
 * @note Size: 0x3C
 */
JAISound* CreatureObj::startSound(u32 soundID, u32 a2)
{
	StartSoundArg arg(this, soundID, a2);
	return startSoundInner(arg);
}

/**
 * @note Address: 0x8045D984
 * @note Size: 0x8C
 */
void CreatureObj::startSound(u8 id, u32 soundID, u32 a3)
{
	u8 players = PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this);
	JAIBasic::msBasic->startSoundVecT(soundID, &mSounds[id], _24, a3, 0, players);
}

/**
 * @note Address: 0x8045DA10
 * @note Size: 0xA8
 */
void CreatureObj::startSound(JAISound** se, u32 soundID, u32 a3)
{
	JUT_PANICLINE(395, "使用禁止再生関数"); // "Disabled playback functions"

	JAIBasic::msBasic->startSoundVecT(soundID, se, _24, a3, 0, PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this));
}

/**
 * @note Address: 0x8045DAB8
 * @note Size: 0x4C
 */
void CreatureObj::frameEnd_onPlaySe()
{
	FrameCalcArg arg(this, &mDistance, &mPan, &mDolby);
	loopCalc(arg);
}

/**
 * @note Address: N/A
 * @note Size: 0x118
 */
inline CreatureAnime::CreatureAnime(Game::Creature* gameObj, u8 p2)
    : Creature(gameObj)
    , JAIAnimeSound(reinterpret_cast<Vec*>(gameObj->getSound_PosPtr()), JKRGetCurrentHeap(), p2)
    , _AC(0.0f)
    , _B0(0.0f)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045DB04
 * @note Size: 0x148
 */
void CreatureAnime::startAnimSound(u32 soundID, JAISound** se, JAInter::Actor* actor, u8)
{
	if (mGameObj->sound_culling()) {
		return;
	}

	if (static_cast<SceneBase*>(PSMGetSceneMgrCheck()->getEndScene())->getSeSceneGate(this, soundID)) {
		actor->mObj = this;

		u8 players = PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this);
		JAIAnimeSound::startAnimSound(soundID, se, actor, players);
		P2ASSERTLINE(441, se);
		onPlayingSe(soundID, *se);
	}
}

/**
 * @note Address: 0x8045DC4C
 * @note Size: 0x3C
 */
JAISound* CreatureAnime::startSound(u32 soundID, u32 a2)
{
	StartSoundArg arg(this, soundID, a2);
	return startSoundInner(arg);
}

/**
 * @note Address: 0x8045DC88
 * @note Size: 0xB0
 */
void CreatureAnime::startSound(u8 id, u32 soundID, u32 a3)
{
	JUT_PANICLINE(466, "使用禁止再生関数"); // "Disabled playback functions"

	JAIBasic::msBasic->startSoundVecT(soundID, &mSounds[id], _24, a3, 0,
	                                  PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this));
}

/**
 * @note Address: 0x8045DD38
 * @note Size: 0xA8
 */
void CreatureAnime::startSound(JAISound** se, u32 soundID, u32 a3)
{
	JUT_PANICLINE(482, "使用禁止再生関数"); // "Disabled playback functions"

	JAIBasic::msBasic->startSoundVecT(soundID, se, _24, a3, 0, PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this));
}

/**
 * @note Address: 0x8045DDE0
 * @note Size: 0x40
 */
void CreatureAnime::setAnime(JAIAnimeSoundData* data, u32 a1, f32 a2, f32 a3)
{
	if (data != mSoundData) {

		if ((int)data == 0xffffffff) {
			data = nullptr;
		}
		initActorAnimSound(data, a1, a2, a3);
	}
}

/**
 * @note Address: 0x8045DE20
 * @note Size: 0x304
 */
void CreatureAnime::playActorAnimSound(JAInter::Actor* actor, f32 pitchmod, u8 a2)
{
	JUT_ASSERTLINE(549, mSoundData->mEntryNum < mAnimID, "JAIAnimeSound::playActorAnimSound  dataCounterが異常です。\n");
	JAIAnimeSoundData* data = &mSoundData[mAnimID];
	u8 max                  = mHandleCount;
	for (u8 i = 0; i < max; i++) {
		u8* handle = mSoundStatus;
		if (handle[i]) {
			JAISound* se = mSounds[i];
			if (!se) {
				break;
			}
			if (data->_08 != se->mSoundID) {
				continue;
			}
			if (!(data->_08 & 0xc00)) {
				mAnimID += mSoundFlags;
				return;
			} else {
				break;
			}
		}

		if (!(mUseHandleFlag & 1 << i)) {
			JAISound** se = mSounds;
			if (!se) {
				break;
			}
			if (i != max - 1) {
				continue;
			}
			int a1 = 0;
			int a2 = 0;
			for (u8 j = 0; j < max; j++) {
				if (!handle[j] && (se[j]->_2C < a1)) {
					a1 = se[j]->_2C;
					a2 = j;
				}
			}

			// if (a2 != max && (!(data->_10[0] & 8) || _6C == data->_10[7]) && _5C == 1 && (max & 2 == 0) || (_5C == -1 && (max & 1 == 0)))
			// {
			JAISound** sound = &mSounds[a2];
			if (*sound) {
				handleStop(a2, 0);
			}
			startAnimSound(data->_08, sound, actor, a2);
			if (*sound) {
				mBasEntries[a2]  = (JAIAnimeFrameSoundData*)data;
				mSoundStatus[a2] = true;
				(*sound)->setVolume((f32)data->_08 / 127.0f, 0, SOUNDPARAM_Unk5);
				(*sound)->setPitch((f32)data->_18 * (1.0f - pitchmod), 0, SOUNDPARAM_Unk5);
			}
			//}
			mAnimID += mSoundFlags;
			return;
		}
	}
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stmw     r24, 0x20(r1)
	mr       r26, r3
	fmr      f31, f1
	lwz      r3, 0xa8(r3)
	mr       r27, r4
	lwz      r4, 0x98(r26)
	mr       r28, r5
	lhz      r0, 0(r3)
	li       r30, 0
	cmplw    r4, r0
	blt      lbl_8045DE7C
	lis      r3, lbl_8049CFA0@ha
	lis      r5, lbl_8049CFFC@ha
	addi     r3, r3, lbl_8049CFA0@l
	li       r4, 0x225
	addi     r5, r5, lbl_8049CFFC@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8045DE7C:
	lwz      r0, 0x98(r26)
	lwz      r5, 0xa8(r26)
	slwi     r4, r0, 5
	lbz      r3, 0x49(r26)
	addi     r31, r4, 8
	add      r31, r5, r31
	b        lbl_8045DF88

lbl_8045DE98:
	lwz      r6, 0x70(r26)
	clrlwi   r5, r30, 0x18
	lbzx     r0, r6, r5
	cmplwi   r0, 0
	beq      lbl_8045DEF4
	lwz      r4, 0x4c(r26)
	slwi     r0, r5, 2
	lwzx     r5, r4, r0
	cmplwi   r5, 0
	beq      lbl_8045DF94
	lwz      r4, 0(r31)
	lwz      r0, 0x20(r5)
	cmplw    r4, r0
	beq      lbl_8045DED8
	addi     r30, r30, 1
	b        lbl_8045DF88

lbl_8045DED8:
	rlwinm.  r0, r4, 0, 0x14, 0x15
	bne      lbl_8045DF94
	lwz      r3, 0x98(r26)
	lwz      r0, 0x8c(r26)
	add      r0, r3, r0
	stw      r0, 0x98(r26)
	b        lbl_8045E108

lbl_8045DEF4:
	li       r0, 1
	lwz      r4, 0x50(r26)
	slw      r0, r0, r5
	and.     r0, r4, r0
	beq      lbl_8045DF10
	addi     r30, r30, 1
	b        lbl_8045DF88

lbl_8045DF10:
	lwz      r7, 0x4c(r26)
	slwi     r0, r5, 2
	lwzx     r0, r7, r0
	cmplwi   r0, 0
	beq      lbl_8045DF94
	addi     r0, r3, -1
	cmpw     r5, r0
	bne      lbl_8045DF84
	li       r5, 0
	li       r8, 0
	li       r9, 0
	b        lbl_8045DF70

lbl_8045DF40:
	clrlwi   r4, r9, 0x18
	lbzx     r0, r6, r4
	cmplwi   r0, 0
	bne      lbl_8045DF6C
	slwi     r0, r4, 2
	lwzx     r4, r7, r0
	lwz      r0, 0x2c(r4)
	cmplw    r5, r0
	bge      lbl_8045DF6C
	mr       r5, r0
	mr       r8, r9

lbl_8045DF6C:
	addi     r9, r9, 1

lbl_8045DF70:
	clrlwi   r0, r9, 0x18
	cmplw    r0, r3
	blt      lbl_8045DF40
	mr       r30, r8
	b        lbl_8045DF94

lbl_8045DF84:
	addi     r30, r30, 1

lbl_8045DF88:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	blt      lbl_8045DE98

lbl_8045DF94:
	clrlwi   r0, r30, 0x18
	cmplw    r0, r3
	beq      lbl_8045E0F8
	lwz      r4, 0x10(r31)
	rlwinm.  r0, r4, 0, 0x1c, 0x1c
	beq      lbl_8045DFBC
	lwz      r3, 0x9c(r26)
	lbz      r0, 0x16(r31)
	cmplw    r3, r0
	bne      lbl_8045E0F8

lbl_8045DFBC:
	lwz      r3, 0x8c(r26)
	cmplwi   r3, 1
	bne      lbl_8045DFD0
	rlwinm.  r0, r4, 0, 0x1e, 0x1e
	beq      lbl_8045DFE4

lbl_8045DFD0:
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8045E0F8
	clrlwi.  r0, r4, 0x1f
	bne      lbl_8045E0F8

lbl_8045DFE4:
	lwz      r0, 0x4c(r26)
	rlwinm   r25, r30, 2, 0x16, 0x1d
	clrlwi   r24, r30, 0x18
	add      r29, r0, r25
	lwz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_8045E01C
	addi     r3, r26, 0x30
	mr       r4, r30
	lwz      r12, 0x30(r26)
	li       r5, 0
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_8045E01C:
	mr       r3, r26
	mr       r5, r29
	lwz      r12, 0x28(r26)
	mr       r6, r27
	mr       r7, r28
	lwz      r4, 0(r31)
	lwz      r12, 0x94(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0(r29)
	cmplwi   r0, 0
	beq      lbl_8045E0F8
	lwz      r3, 0x74(r26)
	lis      r0, 0x4330
	li       r6, 1
	stw      r0, 8(r1)
	lfd      f2, lbl_80520C68@sda21(r2)
	li       r4, 0
	stwx     r31, r3, r25
	li       r5, 5
	lfs      f0, lbl_80520C58@sda21(r2)
	lwz      r3, 0x70(r26)
	stbx     r6, r3, r24
	lbz      r0, 0x14(r31)
	lwz      r3, 0(r29)
	stw      r0, 0xc(r1)
	lwz      r12, 0x10(r3)
	lfd      f1, 8(r1)
	lwz      r12, 0x1c(r12)
	fsubs    f1, f1, f2
	fdivs    f1, f1, f0
	mtctr    r12
	bctrl
	lbz      r3, 0x15(r31)
	lis      r0, 0x4330
	lfs      f0, lbl_80520C5C@sda21(r2)
	li       r4, 0
	extsb    r5, r3
	lwz      r3, 0(r29)
	xoris    r5, r5, 0x8000
	stw      r0, 0x10(r1)
	lwz      r12, 0x10(r3)
	fsubs    f2, f31, f0
	stw      r5, 0x14(r1)
	li       r5, 5
	lfd      f3, lbl_80520C70@sda21(r2)
	lfd      f0, 0x10(r1)
	lfs      f1, lbl_80520C60@sda21(r2)
	fsubs    f3, f0, f3
	lfs      f0, 0xc(r31)
	lwz      r12, 0x2c(r12)
	fmuls    f2, f3, f2
	fmadds   f1, f2, f1, f0
	mtctr    r12
	bctrl

lbl_8045E0F8:
	lwz      r3, 0x98(r26)
	lwz      r0, 0x8c(r26)
	add      r0, r3, r0
	stw      r0, 0x98(r26)

lbl_8045E108:
	psq_l    f31, 72(r1), 0, qr0
	lfd      f31, 0x40(r1)
	lmw      r24, 0x20(r1)
	lwz      r0, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
}

/**
 * @note Address: 0x8045E124
 * @note Size: 0xB4
 */
void CreatureAnime::exec()
{
	bool prev = mActive;
	mActive   = mGameObj->sound_culling() == 0;
	if (mActive) {
		if (prev == 0) {
			onCalcTurnOn();
		}
		onCalcOn();
	} else if (prev == 1) {
		onCalcTurnOff();
	}
}

/**
 * @note Address: 0x8045E1D8
 * @note Size: 0xC8
 */
void CreatureAnime::onCalcOn()
{
	JAInter::Actor actor(this, _24, 0, 0);

	setAnimSoundActor(&actor, mGameObj->getSound_CurrAnimFrame(), mGameObj->getSound_CurrAnimSpeed(),
	                  PSSystem::SingletonBase<ObjCalcBase>::sInstance->getPlayerNo(this));
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stfd     f31, 0x28(r1)
	stw      r31, 0x24(r1)
	stw      r30, 0x20(r1)
	or.      r30, r3, r3
	lwz      r7, 0x54(r3)
	bne      lbl_8045E204
	mr       r4, r7
	b        lbl_8045E208

lbl_8045E204:
	mr       r4, r30

lbl_8045E208:
	li       r6, -1
	li       r5, 0
	li       r0, 1
	stw      r4, 8(r1)
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) mr r4,
r30 stw      r7, 0xc(r1) stw      r6, 0x10(r1) stw      r5, 0x14(r1) stb r0,
0x18(r1) lwz      r12, 0(r3) lwz      r12, 0xc(r12) mtctr    r12 bctrl mr r31,
r3 lwz      r3, 0x2c(r30) lwz      r12, 0(r3) lwz      r12, 0x10c(r12) mtctr r12
	bctrl
	lwz      r3, 0x2c(r30)
	fmr      f31, f1
	lwz      r12, 0(r3)
	lwz      r12, 0x108(r12)
	mtctr    r12
	bctrl
	fmr      f2, f31
	mr       r5, r31
	addi     r3, r30, 0x30
	addi     r4, r1, 8
	bl       setAnimSoundActor__13JAIAnimeSoundFPQ27JAInter5ActorffUc
	lwz      r0, 0x34(r1)
	lfd      f31, 0x28(r1)
	lwz      r31, 0x24(r1)
	lwz      r30, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8045E2A0
 * @note Size: 0x24
 */
void CreatureAnime::onCalcTurnOn() { static_cast<Game::EnemyBase*>(mGameObj)->setPSEnemyBaseAnime(); }

/**
 * @note Address: 0x8045E2C4
 * @note Size: 0x4
 */
void CreatureAnime::onCalcTurnOff() { }

/**
 * @note Address: 0x8045E2C8
 * @note Size: 0x4C
 */
void CreatureAnime::frameEnd_onPlaySe()
{
	FrameCalcArg arg(this, &mDistance, &mPan, &mDolby);
	loopCalc(arg);
}

/**
 * @note Address: 0x8045E314
 * @note Size: 0x4C
 */
void BattleLink::battleOn()
{
	ActorDirector_Battle* dir = PSMGetBattleD();
	if (dir && dir->mActor) {
		dir->mActor->append(this);
	}
}

/**
 * @note Address: 0x8045E360
 * @note Size: 0x4C
 */
void BattleLink::battleOff()
{
	ActorDirector_Battle* dir = PSMGetBattleD();
	if (dir && dir->mActor) {
		dir->mActor->remove(this);
	}
}

/**
 * @note Address: 0x8045E3AC
 * @note Size: 0x4C
 */
void KehaiLink::kehaiOn()
{
	ActorDirector_Kehai* dir = PSMGetKehaiD();
	if (dir && dir->mActor) {
		dir->mActor->append(this);
	}
}

/**
 * @note Address: 0x8045E3F8
 * @note Size: 0x4C
 */
void KehaiLink::kehaiOff()
{
	ActorDirector_Kehai* dir = PSMGetKehaiD();
	if (dir && dir->mActor) {
		dir->mActor->remove(this);
	}
}

/**
 * @note Address: 0x8045E444
 * @note Size: 0x180
 */
EnemyBase::EnemyBase(Game::EnemyBase* gameObj, u8 p2)
    : CreatureAnime(gameObj, p2)
    , BattleLink(gameObj)
    , KehaiLink(gameObj)
{
}

/**
 * @note Address: 0x8045E6A0
 * @note Size: 0x174
 */
void EnemyBase::startAnimSound(u32 soundID, JAISound** se, JAInter::Actor* actor, u8 a1)
{
	if ((static_cast<Game::EnemyBase*>(mGameObj)->isEvent(0, Game::EB_Bittered))) {
		u32 id = soundID;
		if ((id == PSSE_EN_DOPING_GAS_FREEZE || id == PSSE_EN_DOPING_ROCK_FLICK || id == PSSE_EN_DOPING_FLICK_LAST
		     || id == PSSE_EN_DOPING_ROCK_BREAK)
		    || ((id >> 12) & 0xf) == 2) {
			CreatureAnime::startAnimSound(soundID, se, actor, a1);
		}
	}
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r7, 0x804A
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  subi      r31, r7, 0x3060
	  lwz       r3, 0x2C(r3)
	  lwz       r0, 0x1E0(r3)
	  rlwinm.   r0,r0,0,22,22
	  beq-      .loc_0x58
	  cmplwi    r27, 0x50B0
	  beq-      .loc_0x58
	  subi      r0, r27, 0x58B1
	  cmplwi    r0, 0x2
	  ble-      .loc_0x58
	  rlwinm    r0,r27,20,28,31
	  cmplwi    r0, 0x2
	  bne-      .loc_0x160

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x104(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x160
	  lwz       r0, -0x6780(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x90
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1D3
	  crclr     6, 0x6
	  bl        -0x4340EC

	.loc_0x90:
	  lwz       r30, -0x6780(r13)
	  cmplwi    r30, 0
	  bne-      .loc_0xB0
	  addi      r3, r31, 0x30
	  addi      r5, r31, 0x18
	  li        r4, 0x1DC
	  crclr     6, 0x6
	  bl        -0x43410C

	.loc_0xB0:
	  lwz       r0, 0x8(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xD0
	  addi      r3, r31, 0x3C
	  addi      r5, r31, 0x18
	  li        r4, 0xA1
	  crclr     6, 0x6
	  bl        -0x43412C

	.loc_0xD0:
	  lwz       r3, 0x8(r30)
	  mr        r4, r26
	  mr        r5, r27
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x160
	  stw       r26, 0x0(r29)
	  mr        r4, r26
	  lwz       r3, -0x6E4C(r13)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r7, r3
	  mr        r4, r27
	  mr        r5, r28
	  mr        r6, r29
	  addi      r3, r26, 0x30
	  bl        -0x3B2B74
	  cmplwi    r28, 0
	  bne-      .loc_0x144
	  addi      r3, r31, 0
	  addi      r5, r31, 0x18
	  li        r4, 0x1B9
	  crclr     6, 0x6
	  bl        -0x4341A0

	.loc_0x144:
	  mr        r3, r26
	  mr        r4, r27
	  lwz       r12, 0x28(r26)
	  lwz       r5, 0x0(r28)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl

	.loc_0x160:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/**
 * @note Address: 0x8045E814
 * @note Size: 0x5C
 */
JAISound* EnemyBase::startSoundInner(PSM::StartSoundArg& arg)
{
	if ((static_cast<Game::EnemyBase*>(mGameObj)->isEvent(0, Game::EB_Bittered))) {
		u32 id = arg.mSoundID;
		if ((id == PSSE_EN_DOPING_GAS_FREEZE || id == PSSE_EN_DOPING_ROCK_FLICK || id == PSSE_EN_DOPING_FLICK_LAST
		     || id == PSSE_EN_DOPING_ROCK_BREAK)
		    || ((id >> 12) & 0xf) != 2) {
			return nullptr;
		}
	}
	return Creature::startSoundInner(arg);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r5, 0x2c(r3)
	lwz      r0, 0x1e0(r5)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8045E85C
	lwz      r5, 4(r4)
	cmplwi   r5, 0x50b0
	beq      lbl_8045E85C
	addi     r0, r5, -22705
	cmplwi   r0, 2
	ble      lbl_8045E85C
	rlwinm   r0, r5, 0x14, 0x1c, 0x1f
	cmplwi   r0, 2
	beq      lbl_8045E85C
	li       r3, 0
	b        lbl_8045E860

	lbl_8045E85C:
	bl       startSoundInner__Q23PSM8CreatureFRQ23PSM13StartSoundArg

	lbl_8045E860:
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8045E870
 * @note Size: 0x44
 */
void EnemyBase::onCalcTurnOn()
{
	static_cast<Game::EnemyBase*>(mGameObj)->setPSEnemyBaseAnime();
	updateKehai();
}

/**
 * @note Address: 0x8045E8B4
 * @note Size: 0x4C
 */
void EnemyBase::onCalcTurnOff()
{
	battleOff();
	kehaiOff();
}

/**
 * @note Address: 0x8045E900
 * @note Size: 0xF0
 */
void EnemyBase::onCalcOn()
{
	CreatureAnime::onCalcOn();
	updateBattle();
	updateKehai();
}

/**
 * @note Address: 0x8045E9F0
 * @note Size: 0x60
 */
void EnemyBase::battleOff()
{
	BattleLink::battleOff();
	updateKehai();
}

/**
 * @note Address: 0x8045EA50
 * @note Size: 0x88
 */
void EnemyBase::updateKehai()
{
	bool state = calcKehai();
	bool list  = KehaiLink::mList;
	if (state && !list) {
		kehaiOn();
	} else if (!state && list) {
		kehaiOff();
	}
}

/**
 * @note Address: 0x8045EAD8
 * @note Size: 0xC8
 */
void EnemyBase::updateBattle()
{
	if (mGameObj->isAlive()) {
		Game::EnemyBase* obj = static_cast<Game::EnemyBase*>(mGameObj);
		if (obj->mSfxEmotion == 2 && !BattleLink::mList) {
			battleOn();
		} else if (obj->mSfxEmotion != 2 && BattleLink::mList) {
			battleOff();
		}
	} else {
		if (BattleLink::mList) {
			battleOff();
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x2c(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045EB6C
	lwz      r3, 0x2c(r31)
	lbz      r0, 0x1f0(r3)
	cmplwi   r0, 2
	bne      lbl_8045EB3C
	lwz      r0, 0xbc(r31)
	cmplwi   r0, 0
	bne      lbl_8045EB3C
	addi     r3, r31, 0xb8
	lwz      r12, 0xc8(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	b        lbl_8045EB8C

lbl_8045EB3C:
	lbz      r0, 0x1f0(r3)
	cmplwi   r0, 2
	beq      lbl_8045EB8C
	lwz      r0, 0xbc(r31)
	cmplwi   r0, 0
	beq      lbl_8045EB8C
	mr       r3, r31
	lwz      r12, 0x28(r31)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl
	b        lbl_8045EB8C

lbl_8045EB6C:
	lwz      r0, 0xbc(r31)
	cmplwi   r0, 0
	beq      lbl_8045EB8C
	mr       r3, r31
	lwz      r12, 0x28(r31)
	lwz      r12, 0xc4(r12)
	mtctr    r12
	bctrl

lbl_8045EB8C:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8045EBA0
 * @note Size: 0x338
 */
bool EnemyBase::calcKehai()
{
	Game::EnemyBase* enemy = static_cast<Game::EnemyBase*>(mGameObj);
	if (!enemy->isAlive() || enemy->isUnderground()) {
		return false;
	}

	Vec& enemypos = *(Vec*)enemy->getSound_PosPtr();
	Iterator<Game::Navi> iterator(Game::naviMgr);
	CI_LOOP(iterator)
	{
		Game::Navi* navi = *iterator;
		if (navi->mController1) {
			Vector3f pos = navi->getPosition();
			volatile Vec pos2;
			pos2.x = pos.x;
			pos2.y = pos.y;
			pos2.z = pos.z;
			if (judgeNearWithPlayer(enemypos, *(Vec*)&pos, CreaturePrm::cVolZeroDist_Kehai[getCastType() - 2],
			                        CreaturePrm::cVolZeroDist_InnerSize_Kehai[getCastType() - 2])) {
				return true;
			}
		}
	}
	return false;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	stw      r0, 0x64(r1)
	stfd     f31, 0x50(r1)
	psq_st   f31, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	mr       r30, r3
	lwz      r31, 0x2c(r3)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xa8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045EBFC
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0xd0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045EC04

lbl_8045EBFC:
	li       r3, 0
	b        lbl_8045EEB8

lbl_8045EC04:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x100(r12)
	mtctr    r12
	bctrl
	li       r4, 0
	lwz      r0, naviMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r4, 0x38(r1)
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r4, 0
	stw      r5, 0x2c(r1)
	mr       r31, r3
	stw      r4, 0x30(r1)
	stw      r0, 0x34(r1)
	bne      lbl_8045EC60
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8045EE94

lbl_8045EC60:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8045ECD0

lbl_8045EC7C:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045EE94
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_8045ECD0:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045EC7C
	b        lbl_8045EE94

lbl_8045ECF0:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x278(r3)
	cmplwi   r0, 0
	beq      lbl_8045EDD8
	mr       r4, r3
	addi     r3, r1, 0x14
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r3, r30
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 8(r1)
	stfs     f1, 0xc(r1)
	lwz      r5, 8(r1)
	stfs     f0, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r0, 0x10(r1)
	stw      r5, 0x20(r1)
	stw      r4, 0x24(r1)
	stw      r0, 0x28(r1)
	lwz      r12, 0x28(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	slwi     r5, r3, 2
	mr       r3, r30
	lwz      r12, 0x28(r30)
	lis      r4, cVolZeroDist_InnerSize_Kehai__Q23PSM11CreaturePrm@ha
	addi     r0, r4, cVolZeroDist_InnerSize_Kehai__Q23PSM11CreaturePrm@l
	lwz      r12, 0x1c(r12)
	add      r4, r0, r5
	lfs      f31, -8(r4)
	mtctr    r12
	bctrl
	lwz      r12, 0x28(r30)
	lis      r4, cVolZeroDist_Kehai__Q23PSM11CreaturePrm@ha
	slwi     r5, r3, 2
	fmr      f2, f31
	addi     r0, r4, cVolZeroDist_Kehai__Q23PSM11CreaturePrm@l
	lwz      r12, 0x34(r12)
	add      r5, r0, r5
	mr       r3, r30
	lfs      f1, -8(r5)
	mr       r4, r31
	addi     r5, r1, 0x20
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045EDD8
	li       r3, 1
	b        lbl_8045EEB8

lbl_8045EDD8:
	lwz      r0, 0x38(r1)
	cmplwi   r0, 0
	bne      lbl_8045EE04
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8045EE94

lbl_8045EE04:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)
	b        lbl_8045EE78

lbl_8045EE24:
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x38(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045EE94
	lwz      r3, 0x34(r1)
	lwz      r4, 0x30(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x30(r1)

lbl_8045EE78:
	lwz      r12, 0x2c(r1)
	addi     r3, r1, 0x2c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045EE24

lbl_8045EE94:
	lwz      r3, 0x34(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x30(r1)
	cmplw    r4, r3
	bne      lbl_8045ECF0
	li       r3, 0

lbl_8045EEB8:
	psq_l    f31, 88(r1), 0, qr0
	lwz      r0, 0x64(r1)
	lfd      f31, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/**
 * @note Address: 0x8045EED8
 * @note Size: 0x94
 */
bool EnemyBase::judgeNearWithPlayer(const Vec& enemyPosition, const Vec& naviPosition, f32 distanceX, f32 distanceY)
{
	f32 x = enemyPosition.x - naviPosition.x;
	if (!(x >= 0.0f)) {
		x = -x;
	}

	if (x < distanceX) {
		x = enemyPosition.y - naviPosition.y;
		x = (x >= 0.0f) ? x : -x;

		if (x < distanceX) {
			x = enemyPosition.z - naviPosition.z;
			x = (x >= 0.0f) ? x : -x;
			if (x < distanceX)
				return true;
		}
	}

	return false;
	/*
	lfs      f3, 0(r4)
	lfs      f2, 0(r5)
	lfs      f0, lbl_80520C50@sda21(r2)
	fsubs    f2, f3, f2
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8045EEF8
	b        lbl_8045EEFC

lbl_8045EEF8:
	fneg     f2, f2

lbl_8045EEFC:
	fcmpo    cr0, f2, f1
	bge      lbl_8045EF64
	lfs      f3, 4(r4)
	lfs      f2, 4(r5)
	lfs      f0, lbl_80520C50@sda21(r2)
	fsubs    f2, f3, f2
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8045EF24
	b        lbl_8045EF28

lbl_8045EF24:
	fneg     f2, f2

lbl_8045EF28:
	fcmpo    cr0, f2, f1
	bge      lbl_8045EF64
	lfs      f3, 8(r4)
	lfs      f2, 8(r5)
	lfs      f0, lbl_80520C50@sda21(r2)
	fsubs    f2, f3, f2
	fcmpo    cr0, f2, f0
	cror     2, 1, 2
	bne      lbl_8045EF50
	b        lbl_8045EF54

lbl_8045EF50:
	fneg     f2, f2

lbl_8045EF54:
	fcmpo    cr0, f2, f1
	bge      lbl_8045EF64
	li       r3, 1
	blr

lbl_8045EF64:
	li       r3, 0
	blr
	*/
}

/**
 * @note Address: 0x8045EF6C
 * @note Size: 0x1AC
 */
EnemyNotAggressive::EnemyNotAggressive(Game::EnemyBase* gameObj, u8 p2)
    : EnemyBase(gameObj, p2)
{
}

/**
 * @note Address: 0x8045F118
 * @note Size: 0x160
 */
Tsuyukusa::Tsuyukusa(Game::Creature* gameObj)
    : CreatureObj(gameObj, 2)
    , mIsEnabled(FALSE)
    , mLink(gameObj)
{
	P2ASSERTLINE(1078, gameObj);
}

/**
 * @note Address: 0x8045F278
 * @note Size: 0xB8
 */
void Tsuyukusa::noukouFrameWork(bool enable)
{
	PSM::ListDirectorActor* actor = PSMGetGroundD()->mActor;
	P2ASSERTLINE(1086, actor);
	if (enable == true && mIsEnabled == 0) {
		actor->append(&mLink);
	} else if (!enable && mIsEnabled == true) {
		actor->remove(&mLink);
	}
	mIsEnabled = enable;
}

/**
 * @note Address: 0x8045F330
 * @note Size: 0x128
 */
bool EnemyBig::judgeNearWithPlayer(const Vec& pos1, const Vec& pos2, f32 min, f32 max)
{
	return Creature::judgeNearWithPlayer(pos1, pos2, min, max);
}

/**
 * @note Address: N/A
 * @note Size: 0x1F0
 */
inline EnemyBoss::EnemyBoss(Game::EnemyBase* gameObj)
    : EnemyBase(gameObj, 4)
    , mNaviDistance(10000000.0f)
    , mDisappearTimer(-1)
    , _E8(-1)
    , mLink(this)
    , mAppearFlag(false)
    , mIsFirstAppear(0)
    , _FE(1)
    , mHasReset(0)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x8045F458
 * @note Size: 0x74
 */
void EnemyBoss::onPlayingSe(u32, JAISound* sound)
{
	if (sound) {
		PSGame::SoundTable::SePerspInfo info;
		info.set(1.0f, sBoss_ViewDist, sBoss_ViewDistVol, sBoss_DistMax, 0.0f);
		static_cast<SeSound*>(sound)->specializePerspCalc(info);
	}
}

/**
 * @note Address: 0x8045F4CC
 * @note Size: 0x14
 */
bool EnemyBoss::judgeNearWithPlayer(const Vec&, const Vec&, f32 min, f32) { return mNaviDistance < min; }

/**
 * @note Address: 0x8045F4E0
 * @note Size: 0xB4
 */
void EnemyBoss::exec() { EnemyBase::exec(); }

/**
 * @note Address: 0x8045F594
 * @note Size: 0xF8
 */
void EnemyBoss::onCalcOn()
{
	calcDistance();
	EnemyBase::onCalcOn();
}

/**
 * @note Address: 0x8045F68C
 * @note Size: 0x364
 */
void EnemyBoss::calcDistance()
{
	f32 dist = 10000000.0f;
	Iterator<Game::Navi> iterator(Game::naviMgr);
	CI_LOOP(iterator)
	{
		Game::Navi* navi = *iterator;
		if (navi->isAlive()) {
			Vector3f pos     = mGameObj->getPosition();
			Vector3f navipos = navi->getPosition();
			f32 cdist        = pos.distance(navipos);
			if (cdist < dist) {
				dist = cdist;
			}
		}
	}
	mNaviDistance = dist;
	/*
	stwu     r1, -0xa0(r1)
	mflr     r0
	stw      r0, 0xa4(r1)
	stfd     f31, 0x90(r1)
	psq_st   f31, 152(r1), 0, qr0
	stw      r31, 0x8c(r1)
	stw      r30, 0x88(r1)
	li       r4, 0
	lwz      r0, naviMgr__4Game@sda21(r13)
	lis      r5, "__vt__22Iterator<Q24Game4Navi>"@ha
	stw      r4, 0x80(r1)
	addi     r5, r5, "__vt__22Iterator<Q24Game4Navi>"@l
	cmplwi   r4, 0
	stw      r5, 0x74(r1)
	mr       r31, r3
	lfs      f31, lbl_80520C78@sda21(r2)
	stw      r4, 0x78(r1)
	stw      r0, 0x7c(r1)
	bne      lbl_8045F6F4
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_8045F9AC

lbl_8045F6F4:
	mr       r3, r0
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_8045F764

lbl_8045F710:
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x80(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045F9AC
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)

lbl_8045F764:
	lwz      r12, 0x74(r1)
	addi     r3, r1, 0x74
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045F710
	b        lbl_8045F9AC

lbl_8045F784:
	lwz      r3, 0x7c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x278(r3)
	mr       r30, r3
	cmplwi   r0, 0
	beq      lbl_8045F8F0
	lwz      r4, 0x2c(r31)
	addi     r3, r1, 0x44
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x44(r1)
	mr       r4, r30
	lfs      f1, 0x48(r1)
	addi     r3, r1, 0x5c
	lfs      f0, 0x4c(r1)
	stfs     f2, 0x2c(r1)
	lwz      r12, 0(r30)
	stfs     f1, 0x30(r1)
	lwz      r6, 0x2c(r1)
	stfs     f0, 0x34(r1)
	lwz      r5, 0x30(r1)
	lwz      r0, 0x34(r1)
	lwz      r12, 8(r12)
	stw      r6, 0x50(r1)
	stw      r5, 0x54(r1)
	stw      r0, 0x58(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x5c(r1)
	lfs      f1, 0x60(r1)
	stfs     f0, 0x38(r1)
	lfs      f0, 0x64(r1)
	stfs     f1, 0x3c(r1)
	lwz      r0, 0x38(r1)
	lwz      r3, 0x3c(r1)
	stfs     f0, 0x40(r1)
	lfs      f0, 0x50(r1)
	stw      r0, 0x68(r1)
	lwz      r0, 0x40(r1)
	stw      r3, 0x6c(r1)
	lfs      f1, 0x68(r1)
	stw      r0, 0x70(r1)
	fsubs    f3, f1, f0
	lfs      f2, 0x6c(r1)
	lfs      f0, 0x54(r1)
	lfs      f1, 0x70(r1)
	fsubs    f2, f2, f0
	lfs      f0, 0x58(r1)
	stfs     f3, 0x20(r1)
	fsubs    f1, f1, f0
	lfs      f0, lbl_80520C50@sda21(r2)
	stfs     f2, 0x24(r1)
	lwz      r0, 0x20(r1)
	lwz      r3, 0x24(r1)
	stfs     f1, 0x28(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x28(r1)
	stw      r3, 0xc(r1)
	lfs      f2, 8(r1)
	lfs      f1, 0xc(r1)
	stw      r0, 0x10(r1)
	fmuls    f3, f2, f2
	fmuls    f2, f1, f1
	lfs      f1, 0x10(r1)
	stfs     f3, 8(r1)
	fmuls    f1, f1, f1
	stfs     f2, 0xc(r1)
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stfs     f1, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x18(r1)
	lfs      f2, 0x14(r1)
	lfs      f1, 0x18(r1)
	stw      r0, 0x1c(r1)
	fadds    f1, f2, f1
	lfs      f2, 0x1c(r1)
	fadds    f1, f2, f1
	fcmpo    cr0, f1, f0
	ble      lbl_8045F8E4
	frsqrte  f0, f1
	fmuls    f1, f0, f1

lbl_8045F8E4:
	fcmpo    cr0, f1, f31
	bge      lbl_8045F8F0
	fmr      f31, f1

lbl_8045F8F0:
	lwz      r0, 0x80(r1)
	cmplwi   r0, 0
	bne      lbl_8045F91C
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_8045F9AC

lbl_8045F91C:
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)
	b        lbl_8045F990

lbl_8045F93C:
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x80(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8045F9AC
	lwz      r3, 0x7c(r1)
	lwz      r4, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x78(r1)

lbl_8045F990:
	lwz      r12, 0x74(r1)
	addi     r3, r1, 0x74
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8045F93C

lbl_8045F9AC:
	lwz      r3, 0x7c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x78(r1)
	cmplw    r4, r3
	bne      lbl_8045F784
	stfs     f31, 0xe0(r31)
	psq_l    f31, 152(r1), 0, qr0
	lwz      r0, 0xa4(r1)
	lfd      f31, 0x90(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0xa0
	blr
	*/
}

/**
 * @note Address: 0x8045F9F0
 * @note Size: 0x140
 */
void EnemyBoss::setAppearFlag(bool flag)
{
	mAppearFlag             = flag;
	PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
	mgr->checkScene();
	SceneBase* scene = static_cast<SceneBase*>(mgr->mScenes->mChild);
	if (scene && scene->getSeSceneGate(this, 0)) {
		if (flag == true) {
			if (!mIsFirstAppear) {
				mIsFirstAppear = true;
				onAppear1st();
			}
			onAppear();
		} else {
			onDisappear();
		}
	}
}

/**
 * @note Address: 0x8045FB30
 * @note Size: 0x5C
 */
void EnemyBoss::dyingFrameWork()
{
	if (_E8 != 0xffffffff) {
		_E8++;
	}
	if (_E8 & 0x10000000 && (_E8 & 0xfffffff) >= 180) {
		setKilled();
	}
}

/**
 * @note Address: 0x8045FB8C
 * @note Size: 0x234
 */
void EnemyBoss::onDeathMotionTop()
{
	_E8               = 0;
	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->mEnemyBossList.append(&mLink);
	}

	if (PSMGetGameScene()) {
		bool canJump = true;
		FOREACH_NODE(JSULink<EnemyBoss>, PSSystem::SingletonBase<BossBgmFader::Mgr>::getInstance()->mTypedProc.getFirst(), link)
		{
			EnemyBoss* obj = link->getObject();
			if (obj->_FE && obj->_E8 == -1) {
				canJump = false;
			}
		}
		if (canJump) {
			jumpRequest(PSM::EnemyMidBoss::BossBgm_Defeated);
		}
	}
}

/**
 * @note Address: 0x8045FDC0
 * @note Size: 0x15C
 */
void EnemyBoss::setKilled()
{
	if (_E8 < 180) {
		_E8 |= 0x10000000;
		return;
	}

	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->mEnemyBossList.remove(&mLink);
	}

	if (_FE) {
		_E8         = -1;
		mAppearFlag = false;
		_FE         = false;
		if (scene) {
			scene->bossKilled(this);
		}
		mDisappearTimer = 0;
	}
}

/**
 * @note Address: 0x8045FF1C
 * @note Size: 0x24
 */
bool EnemyBoss::isOnDisappearing() { return mDisappearTimer != 0xffff; }

/**
 * @note Address: 0x8045FF40
 * @note Size: 0x30
 */
void EnemyBoss::updateDisappearing()
{
	if (mDisappearTimer == 0xffff) {
		return;
	}
	mDisappearTimer++;
	if (mDisappearTimer > 120) {
		mDisappearTimer = 0xffff;
	}
}

/**
 * @note Address: 0x8045FF70
 * @note Size: 0x260
 */
EnemyMidBoss::EnemyMidBoss(Game::EnemyBase* gameObj)
    : EnemyBoss(gameObj)
    , mNumLinks(0xFFFF)
    , _104(500.0f)
    , mLink(this)
    , _118(0)
{
	BossBgmFader::Mgr* mgr = BossBgmFader::Mgr::sInstance;
	if (mgr) {
		mNumLinks = mgr->mTypedProc.getNumLinks();
		mgr->appendTarget(&mLink);
	}
}

/**
 * @note Address: 0x804601D0
 * @note Size: 0x1A8
 */
EnemyBoss::~EnemyBoss() { }

/**
 * @note Address: 0x80460378
 * @note Size: 0x21C
 */
void EnemyMidBoss::onCalcOn()
{
	EnemyBoss::onCalcOn();
	if (_118 && !mAppearFlag) {
		Scene_Game* scene = PSMGetGameScene();
		if (scene && scene->getSeSceneGate(this, 0) && mNaviDistance < _104) {
			mAppearFlag             = true;
			PSSystem::SceneMgr* mgr = PSMGetSceneMgrCheck();
			mgr->checkScene();
			SceneBase* scene = static_cast<SceneBase*>(mgr->mScenes->mChild);
			if (scene && scene->getSeSceneGate(this, 0)) {
				if (!mIsFirstAppear) {
					mIsFirstAppear = true;
					onAppear1st();
				}
				onAppear();
			}
			_118 = false;
		}
	}
}

/**
 * @note Address: 0x80460594
 * @note Size: 0xEC
 */
void EnemyMidBoss::jumpRequest(u16 state)
{
	MiddleBossSeq* seq = PSMGetMiddleBossSeq();
	if (seq && seq) {
		seq->mCurrBossObj = this;
		seq->requestJumpBgmOnBeat(state);
	}
}

/**
 * @note Address: 0x80460680
 * @note Size: 0x10C
 */
void EnemyMidBoss::onAppear1st()
{
	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->bossAppear(this, PSM::EnemyMidBoss::BossBgm_Appear);
	}
}

/**
 * @note Address: 0x8046078C
 * @note Size: 0x60
 */
void EnemyMidBoss::postPikiAttack(bool flag)
{
	if (PSSystem::SingletonBase<BossBgmFader::Mgr>::sInstance) {
		DirectorUpdator* dir = PSSystem::SingletonBase<BossBgmFader::Mgr>::sInstance->mTypedProc.mDirectorUpdator;
		if (dir) {
			if (flag) {
				dir->directOn(mNumLinks);
			} else {
				dir->directOff(mNumLinks);
			}
		}
	}
}

/**
 * @note Address: 0x804607EC
 * @note Size: 0x68
 */
EnemyBigBoss::EnemyBigBoss(Game::EnemyBase* gameObj)
    : EnemyMidBoss(gameObj)
    , mCurrBgmState(1)
{
	sBigBoss = this;
}

/**
 * @note Address: 0x80460854
 * @note Size: 0x1F0
 */
EnemyMidBoss::~EnemyMidBoss() { }

/**
 * @note Address: 0x80460A44
 * @note Size: 0x88
 */
EnemyBigBoss::~EnemyBigBoss() { sBigBoss = nullptr; }

/**
 * @note Address: 0x80460ACC
 * @note Size: 0xE8
 */
void EnemyBigBoss::jumpRequest(u16 state)
{
	MiddleBossSeq* seq = PSMGetMiddleBossSeq();
	if (seq) {
		seq->mCurrBossObj = this;
		seq->requestJumpBgmOnBeat(state);
	}
}

/**
 * @note Address: 0x80460BB4
 * @note Size: 0x38
 */
void EnemyBigBoss::onDeathMotionTop()
{
	_E8 = 0;
	jumpRequest(BigBossBgm_Defeated);
}

/**
 * @note Address: 0x80460BEC
 * @note Size: 0x10C
 */
void EnemyBigBoss::onAppear1st()
{
	Scene_Game* scene = PSMGetGameScene();
	if (scene) {
		scene->bossAppear(this, mCurrBgmState);
	}
}

/**
 * @note Address: 0x80460CF8
 * @note Size: 0xBC
 * Adjusts pitch for chappy sounds
 */
void Enemy_SpecialChappy::onPlayingSe(u32 soundID, JAISound* sound)
{
	if (!sound) {
		return;
	}

	if (soundID >= PSSE_EN_CHAPPY_WALK && PSSE_EN_CHAPPY_EAT >= soundID && soundID != PSSE_EN_CHAPPY_DEAD
	    && soundID != PSSE_EN_CHAPPY_BITE2) {
		sound->setPitch(0.8f, 0, SOUNDPARAM_Unk0);
	} else if (soundID == PSSE_EN_CHAPPY_DEAD) {
		sound->setPitch(0.65f, 0, SOUNDPARAM_Unk0);
	} else if (soundID == PSSE_EN_CHAPPY_BITE2) {
		sound->setPitch(0.8f, 20, SOUNDPARAM_Unk0);
	}
}

/**
 * @note Address: 0x80460DB4
 * @note Size: 0x2C
 */
void DirectorLink::eventStart() { eventRestart(); }

/**
 * @note Address: 0x80460DE0
 * @note Size: 0x4C
 */
void DirectorLink::eventRestart()
{
	ListDirectorActor* actor = getListDirectorActor();
	if (actor) {
		actor->append(this);
	}
}

/**
 * @note Address: 0x80460E2C
 * @note Size: 0x4C
 */
void DirectorLink::eventStop()
{
	ListDirectorActor* actor = getListDirectorActor();
	if (actor) {
		actor->remove(this);
	}
}

/**
 * @note Address: 0x80460E78
 * @note Size: 0x2C
 */
void DirectorLink::eventFinish() { eventStop(); }

/**
 * @note Address: 0x80460EA4
 * @note Size: 0x34
 */
ListDirectorActor* EventLink::getListDirectorActor()
{
	ActorDirector_Scaled* actor = PSMGetEventD();
	if (actor) {
		return actor->mActor;
	}
	return nullptr;
}

/**
 * @note Address: 0x80460ED8
 * @note Size: 0x34
 */
ListDirectorActor* OtakaraEventLink::getListDirectorActor()
{
	ActorDirector_TrackOn* actor = PSMGetOtakaraEventD();
	if (actor) {
		return (ListDirectorActor*)actor->mActor;
	}
	return nullptr;
}

/**
 * @note Address: 0x80460F0C
 * @note Size: 0x4
 */
void OtakaraEventLink::eventFinish() { }

/**
 * @note Address: 0x80460F10
 * @note Size: 0x250
 */
ActorDirector_TrackOn* OtakaraEventLink_2PBattle::getTargetDirector()
{
	P2ASSERTLINE(1699, getObject());

	Otakara* obj = static_cast<Otakara*>(getObject()->getPSCreature());
	P2ASSERTLINE(1701, obj);

	P2ASSERTLINE(1706, obj->isTreasure());

	Game::Onyon* onyon           = obj->mOnyon;
	ActorDirector_TrackOn* actor = nullptr;
	switch (obj->mBedamaType) {
	case Otakara::PSMBedama_None:
		actor = nullptr;
		break;
	case Otakara::PSMBedama_Cherry:
		if (onyon) {
			if (onyon->mOnyonType == ONYON_TYPE_BLUE) {
				actor = PSMGetIchouForLugieD();
			} else if (onyon->mOnyonType == ONYON_TYPE_RED) {
				actor = PSMGetIchouForOrimerD();
			} else {
				JUT_PANICLINE(1780, "P2Assert");
			}
		}
		break;
	case Otakara::PSMBedama_Yellow:
		P2ASSERTLINE(1787, onyon);
		if (onyon->mOnyonType == ONYON_TYPE_BLUE) {
			actor = PSMGetBeedamaForLugieD();
		} else if (onyon->mOnyonType == ONYON_TYPE_RED) {
			actor = PSMGetBeedamaForOrimerD();
		} else {
			JUT_PANICLINE(1794, "P2Assert");
		}
		break;
	case Otakara::PSMBedama_Red:
		actor = PSMGetBeedamaForLugieD();
		break;
	case Otakara::PSMBedama_Blue:
		actor = PSMGetBeedamaForOrimerD();
		break;
	}

	P2ASSERTLINE(1818, actor);
	return actor;
}

/**
 * @note Address: 0x80461160
 * @note Size: 0x194
 */
void OtakaraEventLink_2PBattle::eventStart()
{
	P2ASSERTLINE(1699, getObject());

	Otakara* obj = static_cast<Otakara*>(getObject()->getPSCreature());
	P2ASSERTLINE(1701, obj);

	P2ASSERTLINE(1706, obj->isTreasure());

	if (!obj->canFinish()) {
		ActorDirector_TrackOn* director = getTargetDirector();
		if (director->mActor) {
			static_cast<ListDirectorActor*>(director->mActor)->append(this);
		}
	}
}

/**
 * @note Address: 0x804612F4
 * @note Size: 0x2C
 */
void OtakaraEventLink_2PBattle::eventRestart() { eventStart(); }

/**
 * @note Address: 0x80461320
 * @note Size: 0x194
 */
void OtakaraEventLink_2PBattle::eventStop()
{
	P2ASSERTLINE(1699, getObject());

	Otakara* obj = static_cast<Otakara*>(getObject()->getPSCreature());
	P2ASSERTLINE(1701, obj);

	P2ASSERTLINE(1706, obj->isTreasure());

	if (!obj->canFinish()) {
		ActorDirector_TrackOn* director = getTargetDirector();
		if (director->mActor) {
			static_cast<ListDirectorActor*>(director->mActor)->remove(this);
		}
	}
}

/**
 * @note Address: 0x804614B4
 * @note Size: 0x2C
 */
void OtakaraEventLink_2PBattle::eventFinish() { eventStop(); }

/**
 * @note Address: 0x804614E0
 * @note Size: 0x140
 */
ListDirectorActor* OtakaraEventLink_2PBattle::getListDirectorActor()
{
	P2ASSERTLINE(1699, getObject());

	Otakara* obj = static_cast<Otakara*>(getObject()->getPSCreature());
	P2ASSERTLINE(1701, obj);

	P2ASSERTLINE(1706, obj->isTreasure());

	P2ASSERTLINE(1891, (int)obj->mBedamaType == Otakara::PSMBedama_None);

	return (ListDirectorActor*)PSMGetOtakaraEventD()->mActor;
}

/**
 * @note Address: 0x80461620
 * @note Size: 0x170
 */
WorkItem::WorkItem(Game::BaseItem* gameObj)
    : EventBase(gameObj, 2)
    , mLink(gameObj)
{
}

/**
 * @note Address: 0x80461790
 * @note Size: 0x30
 */
void WorkItem::eventStart() { mLink.eventStart(); }

/**
 * @note Address: 0x804617C0
 * @note Size: 0x30
 */
void WorkItem::eventRestart() { mLink.eventRestart(); }

/**
 * @note Address: 0x804617F0
 * @note Size: 0x30
 */
void WorkItem::eventStop() { mLink.eventStop(); }

/**
 * @note Address: 0x80461820
 * @note Size: 0x30
 */
void WorkItem::eventFinish() { mLink.eventFinish(); }

/**
 * @note Address: 0x80461850
 * @note Size: 0x1A0
 */
void Otakara::setGoalOnyon(Game::Creature* onyon)
{
	if ((int)mBedamaType == PSMBedama_Blue || (int)mBedamaType == PSMBedama_Red || (int)mBedamaType == PSMBedama_Yellow) {
		return;
	}

	Game::Creature* old = mOnyon;
	mOnyon              = static_cast<Game::Onyon*>(onyon);
	otakaraCheckEvent(this);
	if (mOtaEvent->is2PBattle()) {

		if (!mOnyon) {
			if ((int)mBedamaType == PSMBedama_Blue || (int)mBedamaType == PSMBedama_Red) {
				P2ASSERTLINE(2014, mOtaEvent);
				ListDirectorActor* actor
				    = static_cast<ListDirectorActor*>(static_cast<OtakaraEventLink_2PBattle*>(mOtaEvent)->getTargetDirector()->mActor);
				actor->remove(mOtaEvent);
			}
		} else if (old && old != mOnyon && (int)mBedamaType == PSMBedama_Yellow) {
			mOnyon = static_cast<Game::Onyon*>(old);
			P2ASSERTLINE(2030, mOtaEvent);
			ListDirectorActor* actor
			    = static_cast<ListDirectorActor*>(static_cast<OtakaraEventLink_2PBattle*>(mOtaEvent)->getTargetDirector()->mActor);
			actor->remove(mOtaEvent);
			mOnyon = static_cast<Game::Onyon*>(onyon);

			P2ASSERTLINE(2041, mOtaEvent);
			actor = static_cast<ListDirectorActor*>(static_cast<OtakaraEventLink_2PBattle*>(mOtaEvent)->getTargetDirector()->mActor);
			actor->append(mOtaEvent);
		}
	}
}

/**
 * @note Address: 0x804619F0
 * @note Size: 0xDC
 */
void Otakara::otakaraEventStart()
{
	P2ASSERTLINE(2058, mOtaEvent);
	if (!is2PBattle()) {
		mEventLink.eventStart();
	}
	P2ASSERTLINE(2074, mOtaEvent);
	mOtaEvent->eventStart();
}

/**
 * @note Address: 0x80461ACC
 * @note Size: 0xDC
 */
void Otakara::otakaraEventRestart()
{
	P2ASSERTLINE(2082, mOtaEvent);
	P2ASSERTLINE(2058, mOtaEvent);
	if (!is2PBattle()) {
		mEventLink.eventRestart();
	}
	mOtaEvent->eventRestart();
}

/**
 * @note Address: 0x80461BA8
 * @note Size: 0xDC
 */
void Otakara::otakaraEventStop()
{
	P2ASSERTLINE(2094, mOtaEvent);
	P2ASSERTLINE(2058, mOtaEvent);
	if (!is2PBattle()) {
		mEventLink.eventStop();
	}
	mOtaEvent->eventStop();
}

/**
 * @note Address: 0x80461C84
 * @note Size: 0xDC
 */
void Otakara::otakaraEventFinish()
{
	P2ASSERTLINE(2106, mOtaEvent);
	P2ASSERTLINE(2058, mOtaEvent);
	if (!is2PBattle()) {
		mEventLink.eventFinish();
	}
	mOtaEvent->eventFinish();
}

/**
 * @note Address: 0x80461D60
 * @note Size: 0x224
 */
PelletOtakara::PelletOtakara(Game::PelletOtakara::Object* gameObj, bool is2PBattle)
    : Otakara(gameObj)
{
	if (!is2PBattle) {
		mOtaEvent = new OtakaraEventLink(gameObj);
	} else {
		mOtaEvent = new OtakaraEventLink_2PBattle(gameObj);
	}
}

/**
 * @note Address: 0x80461F84
 * @note Size: 0x148
 */
Otakara::~Otakara() { }

/**
 * @note Address: 0x804620CC
 * @note Size: 0x1D4
 */
PelletItem::PelletItem(Game::PelletItem::Object* gameObj)
    : Otakara(gameObj)
{
	mOtaEvent = new OtakaraEventLink(gameObj);
}

/**
 * @note Address: 0x804622A0
 * @note Size: 0x148
 */
Piki::Piki(Game::Piki* p)
    : CreatureObj(p, 2)
    , mFreeCounter(-1)
    , mHummingCounter(-1)
{
}

/**
 * @note Address: 0x804623E8
 * @note Size: 0x180
 */
void Piki::onCalcOn()
{
	if (mFreeCounter != -1) {
		mFreeCounter++;
	}

	u32 a = mHummingCounter;
	if (static_cast<Game::Piki*>(mGameObj)->isWalking()) {
		if (a == -1) {
			mHummingCounter = 0;
		} else {
			mHummingCounter++;
		}
		Scene_Game* scene = PSMGetGameScene();
		if (scene) {
			PikiHummingMgr* mgr = scene->mHummingMgr;
			P2ASSERTLINE(2180, mgr);
			mgr->play(this);
		}
	} else {
		mHummingCounter = -1;
	}
}

/**
 * @note Address: 0x80462568
 * @note Size: 0xC
 */
void Piki::becomeFree() { mFreeCounter = 0; }

/**
 * @note Address: 0x80462574
 * @note Size: 0xC
 */
void Piki::becomeNotFree() { mFreeCounter = -1; }

/**
 * @note Address: 0x80462580
 * @note Size: 0x144
 */
JAISound* Piki::startFreePikiSound(u32 soundID, u32 time, u32 flag)
{
	if (PSMCheckSceneIsDemo() && soundID == PSSE_PK_VC_AKUBI) {
		return nullptr;
	}
	soundID = checkHappaChappySE(soundID);
	if (soundID == 0xffffffff) {
		return nullptr;
	}
	if (mFreeCounter == -1) {
		return startSound(soundID, flag);
	}
	if (mFreeCounter >= (int)time) {
		return startSound(soundID, flag);
	}
	return nullptr;
}

/**
 * @note Address: 0x804626C4
 * @note Size: 0x70
 */
JAISound* Piki::startPikiSound(JAInter::Object* obj, u32 soundID, u32 flag)
{
	soundID = checkHappaChappySE(soundID);
	if (soundID == 0xffffffff) {
		return nullptr;
	}
	return obj->startSound(soundID, flag);
}

/**
 * @note Address: 0x80462734
 * @note Size: 0xB4
 */
JAISound* Piki::startPikiSetSound(JAInter::Object* obj, u32 soundID, PSGame::SeMgr::SetSeId set, u32 flag)
{
	soundID = checkHappaChappySE(soundID);
	if (soundID == 0xffffffff) {
		return nullptr;
	}
	return PSSystem::getSeMgrInstance()->mSetSeList[(u8)set]->startSound(obj, soundID, flag);
}

/**
 * @note Address: 0x804627E8
 * @note Size: 0x1D4
 */
JAISound* Piki::startFreePikiSetSound(u32 soundID, PSGame::SeMgr::SetSeId set, u32 time, u32 flag)
{
	if (PSMCheckSceneIsDemo() && soundID == PSSE_PK_VC_AKUBI) {
		return nullptr;
	}
	if (mFreeCounter == -1) {
		return startPikiSetSound(this, soundID, set, flag);
	}
	if (mFreeCounter >= (int)time) {
		return startPikiSetSound(this, soundID, set, flag);
	}
	return nullptr;
}

/**
 * @note Address: 0x804629BC
 * @note Size: 0x104
 */
u32 Piki::checkHappaChappySE(u32 id)
{
	if (static_cast<Game::Piki*>(mGameObj)->getKind() != Game::Bulbmin) {
		return id;
	}

	switch (id) {
	case PSSE_PK_VC_BREAKUP:
		id = PSSE_PK_HAPPA_BREAKUP;
		break;
	case PSSE_PK_VC_CALLED:
		id = PSSE_PK_HAPPA_CALLED;
		break;
	case PSSE_PK_VC_THROW_WAIT:
		id = PSSE_PK_HAPPA_THROW_WAIT;
		break;
	case PSSE_PK_VC_THROWN:
		id = PSSE_PK_HAPPA_THROWN;
		break;
	case PSSE_PK_VC_EATEN:
		id = PSSE_PK_HAPPA_EATEN;
		break;
	case PSSE_PK_VC_GHOST:
		id = PSSE_PK_HAPPA_GHOST;
		break;
	case PSSE_PK_VC_JUMP_INTO_HOLE:
		id = PSSE_PK_HAPPA_JUMP_HOLE;
		break;
	case PSSE_PK_VC_FALL:
	case PSSE_PK_VC_BLOWN_DEAD:
		id = PSSE_PK_HAPPA_FALL;
		break;
	case PSSE_PK_VC_PRESSED:
		id = PSSE_PK_HAPPA_PRESSED;
		break;
	case PSSE_PK_FLOWER_VOICE:
		id = PSSE_PK_HAPPA_FLOWER;
		break;
	case PSSE_PK_FLOWER_FALL_VOICE:
		id = PSSE_PK_HAPPA_FLOWER_FALL;
		break;
	case PSSE_PL_PULLOUT_PIKI:
		id = PSSE_PK_HAPPA_PULLOUT;
		break;
	case PSSE_PK_VC_LIFT_TRY:
		id = PSSE_PK_HAPPA_LIFT_TRY;
		break;
	case PSSE_PK_VC_LIFT_SUCCESS:
		id = PSSE_PK_HAPPA_LIFT_SUCCESS;
		break;
	case PSSE_PK_VC_LIFT_MOVE:
		id = PSSE_PK_HAPPA_LIFT_MOVE;
		break;
	case PSSE_PK_VC_ATTACK:
		id = PSSE_PK_HAPPA_ATTACK;
		break;
	case PSSE_PK_VC_DOPING:
		id = PSSE_PK_HAPPA_DOPING;
		break;
	case PSSE_PK_VC_DOPE_ATTACK:
		id = PSSE_PK_HAPPA_DOPE_ATTACK;
		break;
	case PSSE_PK_VC_DOPE_END:
		id = PSSE_PK_HAPPA_DOPE_END;
		break;
	case PSSE_PK_VC_SCATTERED:
		id = PSSE_PK_HAPPA_SCATTERED;
		break;
	case PSSE_PK_VC_DIGGING:
		id = PSSE_PK_HAPPA_DIGGING;
		break;
	case PSSE_PK_VC_SAVED:
		id = PSSE_PK_HAPPA_SAVED;
		break;
	case PSSE_PK_VC_PANIC:
		id = PSSE_PK_HAPPA_PANIC;
		break;
	case PSSE_PK_SE_ATTACH:
	case PSSE_PK_SE_KARABURI:
	case PSSE_PK_SE_ATTACKHIT:
	case PSSE_PK_SE_WATER_IN:
	case PSSE_PK_SE_HIT_FOUNTAIN:
	case PSSE_PK_SE_HIT_HARDWALL:
	case PSSE_PK_SE_HIT_SOFTWALL:
	case PSSE_PK_SE_HIT_CONCRETEWALL:
	case PSSE_PK_SE_HIT_BRIDGE:
	case PSSE_PK_SE_HIT_STONE:
	case PSSE_PK_SE_PULL_GRASS:
	case PSSE_EN_KURAGE_GET_PIKI:
	case PSSE_PK_SE_STABBED:
	case PSSE_PK_VC_DRINK:
	case PSSE_PK_SE_HIT_ELEC_GATE:
		break;
	default:
		id = -1;
	}
	return id;
}

/**
 * @note Address: 0x80462AC0
 * @note Size: 0x138
 */
Navi::Navi(Game::Navi* gameObj)
    : CreatureObj(gameObj, 2)
    , mCurrSound(nullptr)
{
}

/**
 * @note Address: 0x80462BF8
 * @note Size: 0x24
 */
void Navi::init(u16 rappa) { mRappa.init(rappa); }

/**
 * @note Address: 0x80462C1C
 * @note Size: 0x28
 */
void Navi::setShacho() { mRappa.setId(137); }

/**
 * @note Address: 0x80462C44
 * @note Size: 0x50
 */
void Navi::stopWaitVoice()
{
	if (mCurrSound) {
		mCurrSound->stop(0);
		mCurrSound = nullptr;
	}
}

/**
 * @note Address: 0x80462C94
 * @note Size: 0x108
 */
JAISound* Navi::startSound(u32 soundID, u32 flag)
{
	switch (soundID) {
	case PSSE_PL_SLEEP_ORIMA:
	case PSSE_PL_PUNCH_ORIMA:
	case PSSE_PL_GORYU_PLAYER:
	case PSSE_PL_WAKEUP_ORIMA:
		stopWaitVoice();
		break;
	case PSSE_PL_ORIMA_DAMAGE:
		startSound(getManType() + PSSE_PL_DAMAGE_ORIMA, 0);
		return;
	}

	PSM::StartSoundArg arg(this, soundID, flag);
	JAISound* se = startSoundInner(arg);
	if (soundID >= PSSE_PL_WAIT_JUMP_ORIMA && soundID <= PSSE_PL_WAIT_CHAT_SHACHO) {
		mCurrSound = se;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r4
	cmpwi    r30, 0x897
	stw      r29, 0x24(r1)
	mr       r29, r3
	bge      lbl_80462CE0
	cmpwi    r30, 0x88d
	bge      lbl_80462CD4
	cmpwi    r30, 0x80f
	beq      lbl_80462D20
	b        lbl_80462D48

lbl_80462CD4:
	cmpwi    r30, 0x893
	bge      lbl_80462D48
	b        lbl_80462CF4

lbl_80462CE0:
	cmpwi    r30, 0x89d
	beq      lbl_80462CF4
	bge      lbl_80462D48
	cmpwi    r30, 0x899
	bge      lbl_80462D48

lbl_80462CF4:
	lwz      r3, 0x90(r29)
	cmplwi   r3, 0
	beq      lbl_80462D48
	lwz      r12, 0x10(r3)
	li       r4, 0
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	stw      r0, 0x90(r29)
	b        lbl_80462D48

lbl_80462D20:
	bl       getManType__Q23PSM4NaviFv
	mr       r4, r3
	mr       r3, r29
	lwz      r12, 0x28(r29)
	addi     r4, r4, 0x890
	li       r5, 0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	b        lbl_80462D80

lbl_80462D48:
	stw      r29, 8(r1)
	mr       r3, r29
	addi     r4, r1, 8
	stw      r30, 0xc(r1)
	stw      r31, 0x10(r1)
	lwz      r12, 0x28(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 0x874
	blt      lbl_80462D80
	cmplwi   r30, 0x888
	bgt      lbl_80462D80
	stw      r3, 0x90(r29)

lbl_80462D80:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x80462D9C
 * @note Size: 0x28
 */
int Navi::getManType()
{
	if (mRappa.mId == 13) {
		return 0;
	}

	if (mRappa.mId == 14) {
		return 4; // should be 1 but everything breaks
	}
	return 2;
	/*
	lwz      r0, 0x88(r3)
	cmplwi   r0, 0xd
	bne      lbl_80462DB0
	li       r3, 0
	blr

lbl_80462DB0:
	cmplwi   r0, 0xe
	li       r3, 2
	bnelr
	li       r3, 1
	blr
	*/
}

/**
 * @note Address: 0x80462DC4
 * @note Size: 0xA0
 */
JAISound* Navi::playShugoSE()
{
	u32 sound;
	if (getManType() == 0) {
		sound = PSSE_PL_SHUGO;
	} else {
		sound = (getManType() - 1 == 1) + 0xa0;
	}
	return startSound(sound, 0);

	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x88(r3)
	cmplwi   r4, 0xd
	bne      lbl_80462DE4
	li       r0, 0
	b        lbl_80462DF8

lbl_80462DE4:
	cmplwi   r4, 0xe
	bne      lbl_80462DF4
	li       r0, 1
	b        lbl_80462DF8

lbl_80462DF4:
	li       r0, 2

lbl_80462DF8:
	cmpwi    r0, 0
	bne      lbl_80462E08
	li       r4, 7
	b        lbl_80462E40

lbl_80462E08:
	cmplwi   r4, 0xd
	bne      lbl_80462E18
	li       r5, 0
	b        lbl_80462E2C

lbl_80462E18:
	cmplwi   r4, 0xe
	bne      lbl_80462E28
	li       r5, 1
	b        lbl_80462E2C

lbl_80462E28:
	li       r5, 2

lbl_80462E2C:
	addi     r4, r5, -1
	subfic   r0, r5, 1
	nor      r0, r4, r0
	srawi    r4, r0, 0x1f
	addi     r4, r4, 0xa0

lbl_80462E40:
	lwz      r12, 0x28(r3)
	li       r5, 0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80462E64
 * @note Size: 0xA0
 */
JAISound* Navi::playKaisanSE()
{
	u32 sound;
	if (getManType() == 0) {
		sound = PSSE_PL_KAISAN;
	} else {
		sound = ((getManType() - 1) == 1) + PSSE_PL_KAISAN_SHACHO;
	}
	return startSound(sound, 0);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r4, 0x88(r3)
	cmplwi   r4, 0xd
	bne      lbl_80462E84
	li       r0, 0
	b        lbl_80462E98

lbl_80462E84:
	cmplwi   r4, 0xe
	bne      lbl_80462E94
	li       r0, 1
	b        lbl_80462E98

lbl_80462E94:
	li       r0, 2

lbl_80462E98:
	cmpwi    r0, 0
	bne      lbl_80462EA8
	li       r4, 0x808
	b        lbl_80462EE0

lbl_80462EA8:
	cmplwi   r4, 0xd
	bne      lbl_80462EB8
	li       r5, 0
	b        lbl_80462ECC

lbl_80462EB8:
	cmplwi   r4, 0xe
	bne      lbl_80462EC8
	li       r5, 1
	b        lbl_80462ECC

lbl_80462EC8:
	li       r5, 2

lbl_80462ECC:
	addi     r4, r5, -1
	subfic   r0, r5, 1
	nor      r0, r4, r0
	srawi    r4, r0, 0x1f
	addi     r4, r4, 0x8a2

lbl_80462EE0:
	lwz      r12, 0x28(r3)
	li       r5, 0
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x80462F04
 * @note Size: 0x130
 */
void Navi::playWalkSound(PSM::Navi::FootType type, int id)
{
	int test               = type + (id * 2);
	PSGame::RandId& randid = PSSystem::getSeMgrInstance()->mRandid;

	if (static_cast<Game::Navi*>(mGameObj)->isWalking()) {
		stopWaitVoice();
	}

	randid.mId   = 0.7f;
	JAISe* sound = randid.startSound(this, test, 2, 0);
	randid.mId   = -1.0f;

	if (sound) {
		sound->setPortData(10, getManType());
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	slwi     r5, r5, 1
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	add      r30, r4, r5
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) cmplwi   r0,
0 bne      lbl_80462F50 lis      r3, lbl_8049CFD0@ha lis      r5,
lbl_8049CFB8@ha addi     r3, r3, lbl_8049CFD0@l li       r4, 0x237 addi     r5,
r5, lbl_8049CFB8@l crclr    6 bl       panic_f__12JUTExceptionFPCciPCce

lbl_80462F50:
	lwz      r3, 0x2c(r29)
	lwz      r4,
"sInstance__Q28PSSystem30SingletonBase<Q26PSGame5SeMgr>"@sda21(r13) lwz r12,
0(r3) addi     r31, r4, 0x24 lwz      r12, 0x21c(r12) mtctr    r12 bctrl clrlwi.
r0, r3, 0x18 beq      lbl_80462F9C lwz      r3, 0x90(r29) cmplwi   r3, 0 beq
lbl_80462F9C lwz      r12, 0x10(r3) li       r4, 0 lwz      r12, 0x14(r12) mtctr
r12 bctrl li       r0, 0 stw      r0, 0x90(r29)

lbl_80462F9C:
	lfs      f0, lbl_80520C88@sda21(r2)
	cmplwi   r29, 0
	mr       r4, r29
	stfs     f0, 0(r31)
	beq      lbl_80462FB4
	addi     r4, r29, 0x30

lbl_80462FB4:
	mr       r3, r31
	mr       r5, r30
	li       r6, 2
	li       r7, 0
	bl       startSound__Q26PSGame6RandIdFPQ27JAInter6ObjectUlUlUl
	lfs      f0, cNotUsingMasterIdRatio__Q26PSGame6RandId@sda21(r13)
	cmplwi   r3, 0
	stfs     f0, 0(r31)
	beq      lbl_80463018
	lwz      r0, 0x88(r29)
	cmplwi   r0, 0xd
	bne      lbl_80462FEC
	li       r0, 0
	b        lbl_80463000

lbl_80462FEC:
	cmplwi   r0, 0xe
	bne      lbl_80462FFC
	li       r0, 1
	b        lbl_80463000

lbl_80462FFC:
	li       r0, 2

lbl_80463000:
	lwz      r12, 0x10(r3)
	clrlwi   r5, r0, 0x10
	li       r4, 0xa
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl

lbl_80463018:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/**
 * @note Address: 0x80463034
 * @note Size: 0x158
 */
Cluster::Cluster(Game::Creature* gameObj, PSSystem::ClusterSe::Factory& factory)
    : CreatureObj(gameObj, 2)
{
	mClusterSeMgr = new PSSystem::ClusterSe::Mgr;
	mClusterSeMgr->constructParts(factory);
}

/**
 * @note Address: 0x8046318C
 * @note Size: 0x60
 */
void Cluster::startClusterSound(u8 count)
{
	exec();
	mClusterSeMgr->play(count, this);
}

} // namespace PSM

/**
 * @note Address: 0x804631EC
 * @note Size: 0x58
 */
void PSSetCurCameraNo(u8 cams)
{
	static_cast<PSM::ObjCalc_SingleGame*>(PSSystem::SingletonBase<PSM::ObjCalcBase>::getInstance())->mPlayerNum = cams;
}

/**
 * @note Address: 0x80463244
 * @note Size: 0x8
 */
f32 PSMGetNoukouDist() { return PSM::CreaturePrm::cNoukouDistance; }

/**
 * @note Address: 0x8046324C
 * @note Size: 0x70
 */
void PSSetLastBeedamaDirection(bool isOlimar, bool isOn)
{
	PSM::ActorDirector_TrackOn* director;
	if (isOlimar) {
		director = PSMGetBeedamaForOrimerD();
	} else {
		director = PSMGetBeedamaForLugieD();
	}

	if (director) {
		if (isOn) {
			director->directOn();
		} else {
			director->directOff();
		}
	}
}
