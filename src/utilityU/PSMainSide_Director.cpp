#include "PSSystem/SeqTrack.h"
#include "PSM/ObjCalc.h"
#include "PSM/Otakara.h"
#include "PSGame/Global.h"
#include "PSAutoBgm/PSAutoBgm.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSM/CreaturePrm.h"
#include "Game/Navi.h"
#include "utilityU.h"
#include "PSM/BossSeq.h"

namespace PSM {

/**
 * @note Address: 0x80456AF8
 * @note Size: 0x80
 */
DamageDirector::DamageDirector()
    : mPitchMod1(0.1f)
    , mPitchMod2(5.0f)
    , mDuration(225)
{
}

/**
 * @note Address: 0x80456BF8
 * @note Size: 0x34
 */
void DamageDirector::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).pitchModulation(mPitchMod1, mPitchMod2, mDuration, this);
}

/**
 * @note Address: 0x80456C2C
 * @note Size: 0x3C
 */
void DamageDirector::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80456CE8
 * @note Size: 0x30
 */
void TempoChangeDirectorBase::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).tempoChange(mTempoValue, mTimeBase, this);
}

/**
 * @note Address: 0x80456D18
 * @note Size: 0x30
 */
void TempoChangeDirectorBase::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackRoot&>(seqTrack).tempoChange(1.0f, mTimeBase, this);
}

/**
 * @note Address: 0x80456D48
 * @note Size: 0x84
 */
ActorDirector_TempoChange::ActorDirector_TempoChange() { }

/**
 * @note Address: 0x80456E5C
 * @note Size: 0x3C
 */
void ActorDirector_TempoChange::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80456E98
 * @note Size: 0x78
 */
PikminNumberDirector::PikminNumberDirector(int numTracks, u8 mask, PSSystem::DirectedBgm& bgm)
    : SwitcherDirector(numTracks, "pikminD  ")
    , mMaskId(mask)
{
}

/**
 * @note Address: 0x80456F10
 * @note Size: 0x4C
 */
void PikminNumberDirector::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	seqTrack.getTaskEntryList();
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).setIdMask(mMaskId, this);
}

/**
 * @note Address: 0x80456F5C
 * @note Size: 0x2C
 */
void PikminNumberDirector::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).setIdMask(0, this);
}

/**
 * @note Address: 0x80456F88
 * @note Size: 0x3C
 */
void PikminNumberDirector::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80456FC4
 * @note Size: 0x94
 */
PikminNumberDirector_AutoBgm::PikminNumberDirector_AutoBgm(int numTracks, u8 mask, PSSystem::DirectedBgm& bgm)
    : PikminNumberDirector(numTracks, mask, bgm)
    , mDirectedBgm(&bgm)
{
}

/**
 * @note Address: 0x804570E8
 * @note Size: 0x88
 */
void PikminNumberDirector_AutoBgm::directOnTrack(PSSystem::SeqTrackBase& track)
{
	JSULink<PSAutoBgm::MeloArrBase>* link;
	PSAutoBgm::Track* subtrack = getTrack(track);
	PSAutoBgm::AutoBgm* bgm    = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm);
	bgm->mMeloArr.mIsActive    = true;

	for (link = bgm->mMeloArr.mList.getFirst(); link; link = link->getNext()) {
		PSAutoBgm::MeloArrBase* melo = link->getObject();
		bool valid                   = (bool)melo->_18 == 1;
		if (valid) {
			melo->directOn(subtrack);
		}
	}
}

/**
 * @note Address: 0x80457170
 * @note Size: 0x88
 */
void PikminNumberDirector_AutoBgm::directOffTrack(PSSystem::SeqTrackBase& track)
{
	JSULink<PSAutoBgm::MeloArrBase>* link;
	PSAutoBgm::Track* subtrack = getTrack(track);
	PSAutoBgm::AutoBgm* bgm    = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm);
	bgm->mMeloArr.mIsActive    = false;

	for (link = bgm->mMeloArr.mList.getFirst(); link; link = link->getNext()) {
		PSAutoBgm::MeloArrBase* melo = link->getObject();
		bool valid                   = (bool)melo->_18 == 1;
		if (valid) {
			melo->directOff(subtrack);
		}
	}
}

/**
 * @note Address: 0x804571F8
 * @note Size: 0xB8
 */
PSAutoBgm::Track* PikminNumberDirector_AutoBgm::getTrack(PSSystem::SeqTrackBase& parent)
{
	PSSystem::TaskEntryMgr* mgr = parent.getTaskEntryList();
	u8 trackNum                 = (u8)(mgr->mTrack->_348 & 0xf);
	P2ASSERTLINE(194, trackNum < static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm)->mConductorMgr.mPrmSetRc->getChildNum());
	PSAutoBgm::Track* track = static_cast<PSAutoBgm::AutoBgm*>(mDirectedBgm)->mConductorMgr.mPrmSetRc->getChild(trackNum);
	P2ASSERTLINE(196, track);
	return track;
}

/**
 * @note Address: 0x804572B0
 * @note Size: 0x7C
 */
TrackOnDirectorBase::TrackOnDirectorBase(int numTracks, const char* name, s32 fadeIn, s32 fadeOut)
    : SwitcherDirector(numTracks, name)
    , mFadeInValue(fadeIn)
    , mFadeOutValue(fadeOut)
    , mEnableType(0)
{
}

/**
 * @note Address: 0x8045732C
 * @note Size: 0x34
 */
void TrackOnDirectorBase::onPlayInit(JASTrack* track)
{
	track->mPauseStatus |= 0x60;
	track->muteTrack(true);
}

/**
 * @note Address: 0x80457360
 * @note Size: 0x50
 */
void TrackOnDirectorBase::directOnTrack(PSSystem::SeqTrackBase& seqTrack)
{
	if (mEnableType) {
		static_cast<PSSystem::SeqTrackChild&>(seqTrack).muteOffAndFadeIn(0.0f, 0, this);
	} else {
		static_cast<PSSystem::SeqTrackChild&>(seqTrack).muteOffAndFadeIn(1.0f, mFadeInValue, this);
	}
}

/**
 * @note Address: 0x804573B0
 * @note Size: 0x2C
 */
void TrackOnDirectorBase::directOffTrack(PSSystem::SeqTrackBase& seqTrack)
{
	static_cast<PSSystem::SeqTrackChild&>(seqTrack).fadeoutAndMute(mFadeOutValue, this);
}

/**
 * @note Address: 0x804573DC
 * @note Size: 0x90
 */
void TrackOnDirector_Voting::execInner()
{
	if (mVoteState == 0 && isUnderDirection()) {
		directOff();
	} else if (mVoteState != 0 && !isUnderDirection()) {
		directOn();
	}
	mVoteState = 0;
}

/**
 * @note Address: 0x804574FC
 * @note Size: 0xFC
 */
void TrackOnDirector_Scaled::underDirection()
{
	f32 rate = 1.0f;
	if (!PSSystem::DirectorBase::sToolMode) {
		rate          = getNearestDistance();
		mCurrDistance = rate;
		rate          = JALCalc::linearTransform(mCurrDistance, mStartDistance, mEndDistance, 0.0f, 1.0f, false);
	}

	fadeAllTracks(rate, &mFadeDuration);
}

/**
 * @note Address: 0x804575F8
 * @note Size: 0x8C
 */
void ListDirectorActor::onUpdateFromMasterD()
{
	if (!mHead && mDirectorChild->isUnderDirection()) {
		mDirectorChild->directOff();
	} else if (mHead && !mDirectorChild->isUnderDirection()) {
		mDirectorChild->directOn();
	}
}

/**
 * @note Address: 0x80457684
 * @note Size: 0x98
 */
ActorDirector_TrackOn::ActorDirector_TrackOn(const char* name, int numTracks, s32 fadeIn, s32 fadeOut)
    : TrackOnDirectorBase(numTracks, name, fadeIn, fadeOut)
{
}

/**
 * @note Address: 0x8045771C
 * @note Size: 0x3C
 */
void ActorDirector_TrackOn::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80457758
 * @note Size: 0xF4
 */
ActorDirector_Scaled::ActorDirector_Scaled(const char* name, int trackCount, f32 endDistance, f32 startDistance, s32 fadeIn, s32 fadeOut,
                                           u32 fadeDuration)
    : TrackOnDirector_Scaled(name, trackCount, endDistance, startDistance, fadeIn, fadeOut, fadeDuration)
{
}

/**
 * @note Address: 0x804578EC
 * @note Size: 0x3C
 */
void ActorDirector_Scaled::execInner()
{
	if (mActor) {
		mActor->exec(this);
	}
}

/**
 * @note Address: 0x80457928
 * @note Size: 0x614
 */
f32 ActorDirector_Scaled::getNearestDistance()
{
	bool is1P   = PSSystem::SingletonBase<PSM::ObjCalcBase>::getInstance()->is1PGame();
	f32 minDist = 100000.0f;
	if (!is1P) {
		Game::Navi* olimar = Game::naviMgr->getAt(NAVIID_Olimar);
		Game::Navi* louie  = Game::naviMgr->getAt(NAVIID_Louie);
		P2ASSERTBOOLLINE(394, olimar && louie);

		Vector3f oPos = olimar->getPosition();
		Vector3f lPos = louie->getPosition();

		FOREACH_NODE(JSULink<Game::Creature>, mActor->getFirst(), link)
		{
			Game::Creature* obj = link->getObject();
			Vector3f objpos     = obj->getPosition();
			f32 p1Dist          = oPos.distance(objpos);
			f32 p2Dist          = lPos.distance(objpos);
			if (p1Dist <= p2Dist) {
				if (p1Dist < minDist) {
					onSetMinDistObj(obj);
					minDist = p1Dist;
				}
			} else if (p2Dist < minDist) {
				onSetMinDistObj(obj);
				minDist = p2Dist;
			}
		}

	} else {
		Game::Navi* navi = Game::naviMgr->getActiveNavi();
		Vector3f naviPos;
		if (!navi) {
			u8 id                = PSSystem::SingletonBase<PSM::ObjCalcBase>::sInstance->getPlayerNo(nullptr);
			JAInter::Camera* cam = &JAIBasic::msBasic->mCameras[id];
			naviPos              = (*cam->mVec1);
		} else {
			naviPos = navi->getPosition();
		}

		FOREACH_NODE(JSULink<Game::Creature>, mActor->getFirst(), link)
		{
			Game::Creature* obj = link->getObject();
			Vector3f objpos     = obj->getPosition();
			f32 dist            = naviPos.distance(objpos);
			if (dist < minDist) {
				minDist = dist;
				onSetMinDistObj(obj);
			}
		}
	}
	/*
	stwu     r1, -0x1d0(r1)
	mflr     r0
	stw      r0, 0x1d4(r1)
	stfd     f31, 0x1c0(r1)
	psq_st   f31, 456(r1), 0, qr0
	stfd     f30, 0x1b0(r1)
	psq_st   f30, 440(r1), 0, qr0
	stfd     f29, 0x1a0(r1)
	psq_st   f29, 424(r1), 0, qr0
	stfd     f28, 0x190(r1)
	psq_st   f28, 408(r1), 0, qr0
	stfd     f27, 0x180(r1)
	psq_st   f27, 392(r1), 0, qr0
	stfd     f26, 0x170(r1)
	psq_st   f26, 376(r1), 0, qr0
	stfd     f25, 0x160(r1)
	psq_st   f25, 360(r1), 0, qr0
	stfd     f24, 0x150(r1)
	psq_st   f24, 344(r1), 0, qr0
	stw      r31, 0x14c(r1)
	stw      r30, 0x148(r1)
	stw      r29, 0x144(r1)
	stw      r28, 0x140(r1)
	lwz      r0,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) lis r4,
lbl_8049CD98@ha mr       r30, r3 cmplwi   r0, 0 addi     r31, r4, lbl_8049CD98@l
	bne      lbl_804579B0
	addi     r3, r31, 0x58
	addi     r5, r31, 0x3c
	li       r4, 0x89
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804579B0:
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) lwz r12,
0(r3) lwz      r12, 0x18(r12) mtctr    r12 bctrl clrlwi.  r0, r3, 0x18 lfs f24,
lbl_80520C18@sda21(r2) bne      lbl_80457D14 lwz      r3,
naviMgr__4Game@sda21(r13) li       r4, 0 lwz      r12, 0(r3) lwz      r12,
0x24(r12) mtctr    r12 bctrl mr       r0, r3 lwz      r3,
naviMgr__4Game@sda21(r13) mr       r29, r0 li       r4, 1 lwz      r12, 0(r3)
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	cmplwi   r29, 0
	mr       r28, r3
	li       r0, 0
	beq      lbl_80457A24
	cmplwi   r28, 0
	beq      lbl_80457A24
	li       r0, 1

lbl_80457A24:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80457A40
	addi     r3, r31, 0x24
	addi     r5, r31, 0x3c
	li       r4, 0x18a
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80457A40:
	mr       r4, r29
	addi     r3, r1, 0x134
	lwz      r12, 0(r29)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	mr       r4, r28
	addi     r3, r1, 0x128
	lwz      r12, 0(r28)
	lfs      f30, 0x134(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x138(r1)
	lfs      f28, 0x13c(r1)
	mtctr    r12
	bctrl
	lwz      r3, 0x64(r30)
	lfs      f27, 0x128(r1)
	cmplwi   r3, 0
	lfs      f26, 0x12c(r1)
	lfs      f25, 0x130(r1)
	beq      lbl_80457A98
	addi     r3, r3, 0xc

lbl_80457A98:
	lwz      r31, 0(r3)
	lfs      f31, lbl_80520C10@sda21(r2)
	b        lbl_80457D08

lbl_80457AA4:
	lwz      r4, 0(r31)
	addi     r3, r1, 0x11c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f1, 0x120(r1)
	lfs      f0, 0x11c(r1)
	stfs     f30, 0xa4(r1)
	lfs      f2, 0x124(r1)
	stfs     f29, 0xa8(r1)
	lwz      r0, 0xa4(r1)
	stfs     f0, 0xb0(r1)
	lwz      r6, 0xa8(r1)
	stfs     f1, 0xb4(r1)
	lwz      r4, 0xb0(r1)
	lwz      r3, 0xb4(r1)
	stfs     f28, 0xac(r1)
	lfs      f0, 0x11c(r1)
	stfs     f2, 0xb8(r1)
	lwz      r5, 0xac(r1)
	stw      r0, 0x104(r1)
	lwz      r0, 0xb8(r1)
	stw      r6, 0x108(r1)
	lfs      f5, 0x104(r1)
	stw      r4, 0x110(r1)
	lfs      f3, 0x108(r1)
	stw      r3, 0x114(r1)
	lfs      f6, 0x110(r1)
	lfs      f4, 0x114(r1)
	stw      r5, 0x10c(r1)
	fsubs    f6, f6, f5
	fsubs    f5, f4, f3
	stw      r0, 0x118(r1)
	lfs      f3, 0x10c(r1)
	lfs      f4, 0x118(r1)
	stfs     f6, 0x68(r1)
	fsubs    f3, f4, f3
	stfs     f5, 0x6c(r1)
	lwz      r0, 0x68(r1)
	lwz      r3, 0x6c(r1)
	stfs     f3, 0x70(r1)
	stw      r0, 0x50(r1)
	lwz      r0, 0x70(r1)
	stw      r3, 0x54(r1)
	lfs      f4, 0x50(r1)
	lfs      f3, 0x54(r1)
	stw      r0, 0x58(r1)
	fmuls    f5, f4, f4
	fmuls    f4, f3, f3
	lfs      f3, 0x58(r1)
	stfs     f5, 0x50(r1)
	fmuls    f3, f3, f3
	stfs     f4, 0x54(r1)
	lwz      r0, 0x50(r1)
	lwz      r3, 0x54(r1)
	stfs     f3, 0x58(r1)
	stw      r0, 0x5c(r1)
	lwz      r0, 0x58(r1)
	stw      r3, 0x60(r1)
	lfs      f4, 0x5c(r1)
	lfs      f3, 0x60(r1)
	stw      r0, 0x64(r1)
	fadds    f3, f4, f3
	lfs      f4, 0x64(r1)
	fadds    f4, f4, f3
	fcmpo    cr0, f4, f31
	ble      lbl_80457BBC
	frsqrte  f3, f4
	fmuls    f4, f3, f4

lbl_80457BBC:
	stfs     f27, 0x8c(r1)
	stfs     f26, 0x90(r1)
	lwz      r0, 0x8c(r1)
	stfs     f0, 0x98(r1)
	lwz      r6, 0x90(r1)
	stfs     f1, 0x9c(r1)
	lwz      r4, 0x98(r1)
	lwz      r3, 0x9c(r1)
	stfs     f25, 0x94(r1)
	stfs     f2, 0xa0(r1)
	lwz      r5, 0x94(r1)
	stw      r0, 0xec(r1)
	lwz      r0, 0xa0(r1)
	stw      r6, 0xf0(r1)
	lfs      f2, 0xec(r1)
	stw      r4, 0xf8(r1)
	lfs      f0, 0xf0(r1)
	stw      r3, 0xfc(r1)
	lfs      f3, 0xf8(r1)
	lfs      f1, 0xfc(r1)
	stw      r5, 0xf4(r1)
	fsubs    f3, f3, f2
	fsubs    f2, f1, f0
	stw      r0, 0x100(r1)
	lfs      f0, 0xf4(r1)
	lfs      f1, 0x100(r1)
	stfs     f3, 0x44(r1)
	fsubs    f0, f1, f0
	stfs     f2, 0x48(r1)
	lwz      r0, 0x44(r1)
	lwz      r3, 0x48(r1)
	stfs     f0, 0x4c(r1)
	stw      r0, 0x2c(r1)
	lwz      r0, 0x4c(r1)
	stw      r3, 0x30(r1)
	lfs      f1, 0x2c(r1)
	lfs      f0, 0x30(r1)
	stw      r0, 0x34(r1)
	fmuls    f2, f1, f1
	fmuls    f1, f0, f0
	lfs      f0, 0x34(r1)
	stfs     f2, 0x2c(r1)
	fmuls    f0, f0, f0
	stfs     f1, 0x30(r1)
	lwz      r0, 0x2c(r1)
	lwz      r3, 0x30(r1)
	stfs     f0, 0x34(r1)
	stw      r0, 0x38(r1)
	lwz      r0, 0x34(r1)
	stw      r3, 0x3c(r1)
	lfs      f1, 0x38(r1)
	lfs      f0, 0x3c(r1)
	stw      r0, 0x40(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x40(r1)
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f31
	ble      lbl_80457CAC
	frsqrte  f1, f0
	fmuls    f0, f1, f0

lbl_80457CAC:
	fcmpo    cr0, f4, f0
	cror     2, 0, 2
	bne      lbl_80457CE0
	fcmpo    cr0, f4, f24
	bge      lbl_80457D04
	mr       r3, r30
	fmr      f24, f4
	lwz      r12, 0(r30)
	lwz      r4, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	b        lbl_80457D04

lbl_80457CE0:
	fcmpo    cr0, f0, f24
	bge      lbl_80457D04
	mr       r3, r30
	fmr      f24, f0
	lwz      r12, 0(r30)
	lwz      r4, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_80457D04:
	lwz      r31, 0xc(r31)

lbl_80457D08:
	cmplwi   r31, 0
	bne      lbl_80457AA4
	b        lbl_80457ED8

lbl_80457D14:
	lwz      r3, naviMgr__4Game@sda21(r13)
	bl       getActiveNavi__Q24Game7NaviMgrFv
	cmplwi   r3, 0
	bne      lbl_80457D60
	lwz      r3,
"sInstance__Q28PSSystem34SingletonBase<Q23PSM11ObjCalcBase>"@sda21(r13) li r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	lwz      r3, msBasic__8JAIBasic@sda21(r13)
	mulli    r0, r0, 0xc
	lwz      r3, 4(r3)
	lwzx     r3, r3, r0
	lfs      f25, 0(r3)
	lfs      f26, 4(r3)
	lfs      f27, 8(r3)
	b        lbl_80457D84

lbl_80457D60:
	mr       r4, r3
	addi     r3, r1, 0xe0
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f25, 0xe0(r1)
	lfs      f26, 0xe4(r1)
	lfs      f27, 0xe8(r1)

lbl_80457D84:
	lwz      r3, 0x64(r30)
	lfs      f28, lbl_80520C10@sda21(r2)
	lwz      r31, 0xc(r3)
	b        lbl_80457ED0

lbl_80457D94:
	lwz      r4, 0(r31)
	addi     r3, r1, 0xd4
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0xd4(r1)
	lfs      f1, 0xd8(r1)
	stfs     f25, 0x74(r1)
	lfs      f0, 0xdc(r1)
	stfs     f26, 0x78(r1)
	lwz      r0, 0x74(r1)
	stfs     f2, 0x80(r1)
	lwz      r6, 0x78(r1)
	stfs     f1, 0x84(r1)
	lwz      r4, 0x80(r1)
	lwz      r3, 0x84(r1)
	stfs     f27, 0x7c(r1)
	stfs     f0, 0x88(r1)
	lwz      r5, 0x7c(r1)
	stw      r0, 0xbc(r1)
	lwz      r0, 0x88(r1)
	stw      r6, 0xc0(r1)
	lfs      f2, 0xbc(r1)
	stw      r4, 0xc8(r1)
	lfs      f0, 0xc0(r1)
	stw      r3, 0xcc(r1)
	lfs      f3, 0xc8(r1)
	lfs      f1, 0xcc(r1)
	stw      r5, 0xc4(r1)
	fsubs    f3, f3, f2
	fsubs    f2, f1, f0
	stw      r0, 0xd0(r1)
	lfs      f0, 0xc4(r1)
	lfs      f1, 0xd0(r1)
	stfs     f3, 0x20(r1)
	fsubs    f0, f1, f0
	stfs     f2, 0x24(r1)
	lwz      r0, 0x20(r1)
	lwz      r3, 0x24(r1)
	stfs     f0, 0x28(r1)
	stw      r0, 8(r1)
	lwz      r0, 0x28(r1)
	stw      r3, 0xc(r1)
	lfs      f1, 8(r1)
	lfs      f0, 0xc(r1)
	stw      r0, 0x10(r1)
	fmuls    f2, f1, f1
	fmuls    f1, f0, f0
	lfs      f0, 0x10(r1)
	stfs     f2, 8(r1)
	fmuls    f0, f0, f0
	stfs     f1, 0xc(r1)
	lwz      r0, 8(r1)
	lwz      r3, 0xc(r1)
	stfs     f0, 0x10(r1)
	stw      r0, 0x14(r1)
	lwz      r0, 0x10(r1)
	stw      r3, 0x18(r1)
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	stw      r0, 0x1c(r1)
	fadds    f0, f1, f0
	lfs      f1, 0x1c(r1)
	fadds    f0, f1, f0
	fcmpo    cr0, f0, f28
	ble      lbl_80457EA8
	frsqrte  f1, f0
	fmuls    f0, f1, f0

lbl_80457EA8:
	fcmpo    cr0, f0, f24
	bge      lbl_80457ECC
	mr       r3, r30
	fmr      f24, f0
	lwz      r12, 0(r30)
	lwz      r4, 0(r31)
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl

lbl_80457ECC:
	lwz      r31, 0xc(r31)

lbl_80457ED0:
	cmplwi   r31, 0
	bne      lbl_80457D94

lbl_80457ED8:
	fmr      f1, f24
	psq_l    f31, 456(r1), 0, qr0
	lfd      f31, 0x1c0(r1)
	psq_l    f30, 440(r1), 0, qr0
	lfd      f30, 0x1b0(r1)
	psq_l    f29, 424(r1), 0, qr0
	lfd      f29, 0x1a0(r1)
	psq_l    f28, 408(r1), 0, qr0
	lfd      f28, 0x190(r1)
	psq_l    f27, 392(r1), 0, qr0
	lfd      f27, 0x180(r1)
	psq_l    f26, 376(r1), 0, qr0
	lfd      f26, 0x170(r1)
	psq_l    f25, 360(r1), 0, qr0
	lfd      f25, 0x160(r1)
	psq_l    f24, 344(r1), 0, qr0
	lfd      f24, 0x150(r1)
	lwz      r31, 0x14c(r1)
	lwz      r30, 0x148(r1)
	lwz      r29, 0x144(r1)
	lwz      r0, 0x1d4(r1)
	lwz      r28, 0x140(r1)
	mtlr     r0
	addi     r1, r1, 0x1d0
	blr
	*/
}

/**
 * @note Address: 0x80457F3C
 * @note Size: 0xE4
 */
ActorDirector_Enemy::ActorDirector_Enemy(const char* name, int trackCount, s32 fadeIn, s32 fadeOut, u32 fadeDuration)
    : ActorDirector_Scaled(name, trackCount, 1.0f, 0.0f, fadeIn, fadeOut, fadeDuration)
    , mGameObject(nullptr)
{
}

/**
 * @note Address: 0x804580D0
 * @note Size: 0x8
 */
void ActorDirector_Enemy::onSetMinDistObj(Game::Creature* obj) { mGameObject = static_cast<Game::EnemyBase*>(obj); }

/**
 * @note Address: 0x804580D8
 * @note Size: 0x1D0
 */
void ActorDirector_Enemy::underDirection()
{
	mGameObject = nullptr;
	f32 rate    = 1.0f;
	if (!PSSystem::DirectorBase::sToolMode) {
		if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::PIKLOPEDIA) {
			rate = 1.0f;
		} else {
			rate          = getNearestDistance();
			mCurrDistance = rate;
			f32 zeroDist  = getVolZeroDist(mGameObject);
			f32 maxDist   = getVolMaxDist(mGameObject);
			rate          = JALCalc::linearTransform(mCurrDistance, zeroDist, maxDist, 0.0f, 1.0f, false);
		}
	}

	fadeAllTracks(rate, &mFadeDuration);
}

/**
 * @note Address: 0x804582A8
 * @note Size: 0x44
 */
f32 ActorDirector_Battle::getVolZeroDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolZeroDist_Battle[id];
}

/**
 * @note Address: 0x804582EC
 * @note Size: 0x44
 */
f32 ActorDirector_Battle::getVolMaxDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolMaxDist_Battle[id];
}

/**
 * @note Address: 0x80458330
 * @note Size: 0x44
 */
f32 ActorDirector_Kehai::getVolZeroDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolZeroDist_Kehai[id];
}

/**
 * @note Address: 0x80458374
 * @note Size: 0x44
 */
f32 ActorDirector_Kehai::getVolMaxDist(Game::EnemyBase* enemy)
{
	int id = enemy->mSoundObj->getCastType() - 2;
	return CreaturePrm::cVolMaxDist_Kehai[id];
}

// exists here but doesnt seem to be used by any panics
static const char* unusedpath = "PSMainSide_ObjSound.h";

/**
 * @note Address: 0x804583B8
 * @note Size: 0x7C
 */
PikAttackDirector::PikAttackDirector(int numTracks)
    : TrackOnDirectorBase(numTracks, "pikatkD  ", 100, 100)
{
}

/**
 * @note Address: 0x80458434
 * @note Size: 0x7C
 */
ExiteDirector::ExiteDirector(int numTracks)
    : TrackOnDirectorBase(numTracks, "tentionD ", 100, 100)
{
}

/**
 * @note Address: 0x804584B0
 * @note Size: 0x68
 */
DirectorUpdator::DirectorUpdator(PSSystem::DirectorBase* director, u8 number, PSM::DirectorUpdator::Type type)
    : mUpdateNum(number)
    , mType(type)
    , _08(0)
    , _09(0)
    , mDirector(director)
{
	P2ASSERTLINE(698, number != 0);
}

/**
 * @note Address: 0x80458518
 * @note Size: 0x34
 */
void DirectorUpdator::directOn(u8 id)
{
	if (_09 & (1 << id)) {
		return;
	}
	_08 |= 1 << id;
	_09 |= 1 << id;
}

/**
 * @note Address: 0x8045854C
 * @note Size: 0x34
 */
void DirectorUpdator::directOff(u8 id)
{
	if (_09 & (1 << id)) {
		return;
	}
	_08 &= ~(1 << id);
	_09 |= 1 << id;
}

/**
 * @note Address: 0x80458580
 * @note Size: 0x12C
 */
void DirectorUpdator::frameEndWork()
{
	if (mDirector) {
		bool end = false;
		switch (mType) {
		case PSM::DirectorUpdator::TYPE_0:
			for (u8 i = 0; i < mUpdateNum; i++) {
				if (_08 & 1 << i) {
					end = true;
					break;
				}
			}
			break;
		case PSM::DirectorUpdator::TYPE_1:
			end = true;
			for (u8 i = 0; i < mUpdateNum; i++) {
				if (!(_08 & 1 << i)) {
					end = false;
					break;
				}
			}
			break;
		}

		if (end) {
			if (!mDirector->isUnderDirection()) {
				mDirector->directOn();
			}
		} else {
			if (mDirector->isUnderDirection()) {
				mDirector->directOff();
			}
		}
		_08 = 0;
		_09 = 0;
	}
}

} // namespace PSM

/**
 * @note Address: 0x804586AC
 * @note Size: 0x148
 */
PSSystem::DirectorBase* PSMGetBattleDirector(u8 directorID)
{
	PSM::MiddleBossSeq* seq = PSMGetMiddleBossSeq();
	if (!seq) {
		return nullptr;
	}
	bool isDirected = seq->getCastType() == PSSystem::SeqBase::TYPE_DirectedBgm || seq->getCastType() == PSSystem::SeqBase::TYPE_JumpBgmSeq;
	P2ASSERTLINE(810, isDirected);
	return seq->getDirectorP(directorID);
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
bool PSIs2PBattleStage()
{
	// is2PBattle needs to spawn as a weak function.
	// this is absolutely not the code that should be here but i'm lazy. -HP
	PSM::Otakara ota(nullptr);
	return ota.is2PBattle();
}

/**
 * @note Address: 0x804587F4
 * @note Size: 0x108
 */
PSM::ActorDirector_Kehai* PSMGetKehaiD()
{
	// kehai = air/presence/hint = enemy near

	// 2P BATTLE
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Kehai*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_EnemyNear));
		}
		return nullptr;
	}

	// everything else
	PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
	if (bgm) {
		return static_cast<PSM::ActorDirector_Kehai*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_EnemyNear));
	}
	return nullptr;
}

/**
 * @note Address: 0x804588FC
 * @note Size: 0x108
 */
PSM::ActorDirector_Battle* PSMGetBattleD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_Battle));
		}
		return nullptr;
	} else {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Battle));
		}
		return nullptr;
	}
}

/**
 * @note Address: 0x80458A04
 * @note Size: 0x108
 */
PSM::ActorDirector_Scaled* PSMGetEventD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_Working));
		}
		return nullptr;
	} else {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Battle*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Working));
		}
		return nullptr;
	}
}

/**
 * @note Address: 0x80458B0C
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetOtakaraEventD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Treasure));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80458BFC
 * @note Size: 0x194
 */
PSM::ActorDirector_Scaled* PSMGetGroundD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE && !PSGameGetSceneInfo()->isCaveFloor()) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_Scaled*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Ground));
		}
		return nullptr;
	}

	return nullptr;
}

/**
 * @note Address: 0x80458D90
 * @note Size: 0xF0
 */
PSM::PikminNumberDirector* PSMGetPikminNumD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::PikminNumberDirector*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Pikmin));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80458E80
 * @note Size: 0xF0
 */
PSM::DamageDirector* PSMGetDamageD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::DamageDirector*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Damage));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80458F70
 * @note Size: 0xF0
 */
PSM::ActorDirector_TempoChange* PSMGetLifeD()
{
	if (PSGameGetSceneInfo()->mSceneType != PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TempoChange*>(bgm->getDirectorP(PSM::DirectorMgr_Scene::Director_Tempo));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459060
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetBeedamaForOrimerD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_OlimarMarble));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459150
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetBeedamaForLugieD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_LouieMarble));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459240
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetIchouForOrimerD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_OlimarIchou));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459330
 * @note Size: 0xF0
 */
PSM::ActorDirector_TrackOn* PSMGetIchouForLugieD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::ActorDirector_TrackOn*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_LouieIchou));
		}
		return nullptr;
	}
	return nullptr;
}

/**
 * @note Address: 0x80459420
 * @note Size: 0xF0
 */
PSM::TrackOnDirector_Voting* PSMGetPikiBattleD()
{
	if (PSGameGetSceneInfo()->mSceneType == PSGame::SceneInfo::TWO_PLAYER_BATTLE) {
		PSSystem::DirectedBgm* bgm = PSGetDirectedMainBgm();
		if (bgm) {
			return static_cast<PSM::TrackOnDirector_Voting*>(bgm->getDirectorP(PSM::DirectorMgr_2PBattle::Director2P_PikBattle));
		}
		return nullptr;
	}
	return nullptr;
}
