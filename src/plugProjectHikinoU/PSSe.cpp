#include "PSGame/SeMgr.h"
#include "PSGame/PSSe.h"
#include "PSGame/EnvSe.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSSystem/PSSystemIF.h"
#include "trig.h"
#include "CNode.h"

namespace PSGame {
f32 Rappa::cRatio                  = 15.0f;
u16 Rappa::cBaseWaitTime           = 3;
Rappa* Rappa::sRappa[2]            = { nullptr, nullptr };
f32 RandId::cNotUsingMasterIdRatio = -1.0f;

/**
 * @note Address: 0x8033F158
 * @note Size: 0x210
 */
SeMgr::SeMgr()
    : PSSystem::SingletonBase<SeMgr>(this)
    , mRandid()
    , mSound(nullptr)
{
	for (int i = 0; i < 8; i++) {
		mSetSeList[i] = nullptr;
	}

	mSetSeList[0] = new SetSe("ピキSE間引き設定", 0, 3);               // "Pixel SE thinning setting"
	mSetSeList[1] = new SetSe("ピキ物運び音", 9, 9);                   // "piki hauling sound"
	mSetSeList[2] = new SetSe("ピキ仕事叩き音", 0, 5);                 // "Piki job tapping sound"
	mSetSeList[4] = new SetSe("ピキ呑み込まれもがき声", 20, 20);       // "Piki swallowed and struggle voice"
	mSetSeList[5] = new SetSe("チャレンジモードのトップ画面用", 0, 2); // "For challenge mode top screen"
	mSetSeList[6] = new SetSe("ピキ着水音用", 2, 5);                   // "For Piki landing sound"
	mSetSeList[7] = new SetSe("ピキパニックラン用", 4, 10);            // "For Piki Panic Run"
	mSetSeList[3] = new SetSe("敵汎用", 20, 9);                        // "Enemy General Purpose"

	for (u8 i = 0; i < 8; i++) {
		P2ASSERTLINE(44, mSetSeList[i]);
	}
}

/**
 * @note Address: 0x8033F368
 * @note Size: 0x120
 */
void SeMgr::playMessageVoice(u32 soundID, bool flag)
{
	f32 calc = 1.0f;
	f32 mod  = RandId::cNotUsingMasterIdRatio;
	int message;
	switch (soundID) {
	case PSSE_MP_VOX_HEAD_A_FLAT:
		message = 10;
		break;
	case PSSE_MP_VOX_BODY_MN:
		if (!flag) {
			calc = 0.5f;
		}
		mod     = 0.0f;
		message = 15;
		break;
	case PSSE_MP_VOX_FOOT_A_UP:
		message = 15;
		break;
	default:
		return;
	}

	P2ASSERTLINE(90, message != 0xffffffff);
	bool test = JALCalc::getRandom_0_1() < calc ? true : false;

	if (test) {
		mRandid.mId = mod;
		mRandid.playSystemSe(soundID, &mSound, message, 0);
		mRandid.mId = RandId::cNotUsingMasterIdRatio;
	}
}

/**
 * @note Address: 0x8033F488
 * @note Size: 0x3C
 */
void SeMgr::stopMessageVoice()
{
	if (mSound) {
		mSound->stop(0);
	}
}

/**
 * @note Address: 0x8033F4C4
 * @note Size: 0x50
 */
Rappa::Rappa()
{
	mId         = -1;
	mDelay      = 0;
	mTableIndex = 0;
}

/**
 * @note Address: 0x8033F514
 * @note Size: 0xA0
 */
void Rappa::init(u16 id)
{
	bool check = true;
	// something dumb along these lines
	if (bool(-id) == 1) {
		check = false;
	}
	P2ASSERTLINE(180, check);

	u32 val    = -(id == 0);
	mId        = val + 14;
	sRappa[id] = this;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 1
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r30, 8(r1)
	mr       r30, r4
	clrlwi   r4, r4, 0x10
	subfic   r0, r4, 1
	orc      r3, r5, r4
	srwi     r0, r0, 1
	subf     r0, r0, r3
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_8033F554
	li       r5, 0

lbl_8033F554:
	clrlwi.  r0, r5, 0x18
	bne      lbl_8033F578
	lis      r3, lbl_804900C8@ha
	lis      r5, lbl_804900D4@ha
	addi     r3, r3, lbl_804900C8@l
	li       r4, 0xb4
	addi     r5, r5, lbl_804900D4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033F578:
	clrlwi   r3, r30, 0x10
	rlwinm   r0, r30, 2, 0xe, 0x1d
	cntlzw   r4, r3
	addi     r3, r13, sRappa__Q26PSGame5Rappa@sda21
	rlwinm   r4, r4, 0x1b, 0x1f, 0x1f
	neg      r4, r4
	addi     r4, r4, 0xe
	stw      r4, 0x18(r31)
	stwx     r31, r3, r0
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/**
 * @note Address: 0x8033F5B4
 * @note Size: 0x8
 */
void Rappa::setId(u32 id) { mId = id; }

/**
 * @note Address: 0x8033F5BC
 * @note Size: 0x98
 */
Rappa::~Rappa()
{
	for (u8 i = 0; i < 2; i++) {
		if (sRappa[i] == this) {
			sRappa[i] = nullptr;
		}
	}
}

/**
 * @note Address: 0x8033F654
 * @note Size: 0x170
 */
JAISound* Rappa::playRappa(bool flag, f32 x, f32 y, JAInter::Object* obj)
{
	P2ASSERTLINE(204, mId != -1);

	JAISound* sound = nullptr;
	if (flag == true) {
		f32 absY = (y >= 0.0f) ? y : -y;
		f32 absX = (x >= 0.0f) ? x : -x;

		f32 min = (absX > absY) ? absX : absY;

		if (min < 0.1f) {
			sound = nullptr;
		} else {
			sound = obj->startSound(mId, 0);

			f32 val = (min - 1.0f);
			val *= -1.0f;
			f32 comp      = (val < 0.0f) ? 0.0f : (val > 1.0f) ? 1.0f : val;
			int extraWait = comp * cRatio;
			mDelay        = extraWait + cBaseWaitTime;
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
	mr       r29, r3
	fmr      f30, f1
	lwz      r3, 0x18(r3)
	fmr      f31, f2
	mr       r30, r4
	mr       r31, r5
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8033F6BC
	lis      r3, lbl_804900C8@ha
	lis      r5, lbl_804900D4@ha
	addi     r3, r3, lbl_804900C8@l
	li       r4, 0xcc
	addi     r5, r5, lbl_804900D4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033F6BC:
	clrlwi   r0, r30, 0x18
	li       r3, 0
	cmplwi   r0, 1
	bne      lbl_8033F798
	lfs      f0, lbl_8051E198@sda21(r2)
	fcmpo    cr0, f31, f0
	cror     2, 1, 2
	bne      lbl_8033F6E4
	fmr      f1, f31
	b        lbl_8033F6E8

lbl_8033F6E4:
	fneg     f1, f31

lbl_8033F6E8:
	lfs      f0, lbl_8051E198@sda21(r2)
	fcmpo    cr0, f30, f0
	cror     2, 1, 2
	bne      lbl_8033F700
	fmr      f31, f30
	b        lbl_8033F704

lbl_8033F700:
	fneg     f31, f30

lbl_8033F704:
	fcmpo    cr0, f31, f1
	ble      lbl_8033F710
	b        lbl_8033F714

lbl_8033F710:
	fmr      f31, f1

lbl_8033F714:
	lfs      f0, lbl_8051E19C@sda21(r2)
	fcmpo    cr0, f31, f0
	bge      lbl_8033F728
	li       r3, 0
	b        lbl_8033F798

lbl_8033F728:
	mr       r3, r31
	lwz      r4, 0x18(r29)
	lwz      r12, 0(r31)
	li       r5, 0
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lfs      f1, lbl_8051E190@sda21(r2)
	lfs      f0, lbl_8051E1A0@sda21(r2)
	fsubs    f3, f31, f1
	lfs      f2, lbl_8051E198@sda21(r2)
	fmuls    f3, f3, f0
	fcmpo    cr0, f3, f2
	bge      lbl_8033F764
	b        lbl_8033F778

lbl_8033F764:
	fcmpo    cr0, f3, f1
	ble      lbl_8033F774
	fmr      f2, f1
	b        lbl_8033F778

lbl_8033F774:
	fmr      f2, f3

lbl_8033F778:
	lfs      f0, cRatio__Q26PSGame5Rappa@sda21(r13)
	lhz      r0, cBaseWaitTime__Q26PSGame5Rappa@sda21(r13)
	fmuls    f2, f2, f0
	fctiwz   f0, f2
	stfd     f0, 8(r1)
	lwz      r4, 0xc(r1)
	add      r0, r4, r0
	sth      r0, 0x1c(r29)

lbl_8033F798:
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
 * @note Address: 0x8033F7C4
 * @note Size: 0x3C
 */
u16 Rappa::syncCpu_WaitChk(JASTrack* track)
{
	track->readPortAppDirect(0xb, &mTableIndex);
	return mDelay;
}

/**
 * @note Address: 0x8033F800
 * @note Size: 0x8
 */
u16 Rappa::syncCpu_TblNo(JASTrack* track) { return mTableIndex; }

/**
 * @note Address: 0x8033F808
 * @note Size: 0x78
 */
SetSe::SetSe(const char* name, s16 min, s16 max)
{
	mCounter   = 0;
	mMinId     = min;
	mMaxId     = max;
	mMaxCount  = min;
	mStatus    = -1;
	mCounter2  = 0;
	mSounds[0] = nullptr;
	mSounds[1] = nullptr;
	P2ASSERTLINE(319, max >= 0);
}

/**
 * @note Address: 0x8033F880
 * @note Size: 0x38
 */
void SetSe::exec()
{
	if (mCounter > mMaxCount)
		mStatus = -1;
	if (mStatus == -1)
		return;
	mCounter++;
}

/**
 * @note Address: 0x8033F8B8
 * @note Size: 0xB8
 */
JAISound* SetSe::startSound(JAInter::Object* obj, u32 id1, u32 flag)
{
	P2ASSERTLINE(336, obj);
	if (mStatus == -1) {
		JAISound* ret = obj->startSound(id1, flag);
		startCounter(id1);
		return ret;
	}

	return nullptr;
}

/**
 * @note Address: 0x8033F970
 * @note Size: 0xA0
 */
JAISound* SetSe::playSystemSe(u32 soundID, u32 flag)
{
	JAISound* ret;
	if (mStatus == -1) {
		PSSystem::spSysIF->playSystemSe(soundID, &mSounds[mCounter2], flag);
		startCounter(soundID);
		ret = mSounds[mCounter2];
		mCounter2++;
		if (mCounter2 == 2) {
			mCounter2 = 0;
		}
	} else {
		ret = nullptr;
	}
	return ret;
}

/**
 * @note Address: 0x8033FA10
 * @note Size: 0x84
 */
void SetSe::startCounter(u32 id)
{
	mCounter  = 0;
	mStatus   = id;
	mMaxCount = mMaxId * JALCalc::getRandom_0_1() + mMinId;
}

/**
 * @note Address: 0x8033FA94
 * @note Size: 0xC
 */
RandId::RandId() { mId = cNotUsingMasterIdRatio; }

/**
 * @note Address: N/A
 * @note Size: 0x1B0
 */
u32 RandId::getRandomId(u32 soundID, u32 range)
{
	if (mId == -1.0f) {
		P2ASSERTLINE(426, range > 1);
		u32 inc = range * JALCalc::getRandom_0_1();
		P2ASSERTLINE(429, inc < range);
		return soundID + inc;
	}

	P2ASSERTLINE(432, mId >= 0.0f);
	P2ASSERTLINE(433, range > 1);
	f32 comp = JALCalc::getRandom_0_1() - mId;
	if (comp < 0.0f) {
		return soundID;
	}

	f32 dec = (1.0f - mId) / ((f32)range - 1.0f);
	for (int i = 1; i < range; i++) {
		comp -= dec;
		if (comp < 0.0f) {
			return soundID + i;
		}
	}
	P2ASSERTLINE(451, false);
	return soundID;
}

/**
 * @note Address: 0x8033FAA0
 * @note Size: 0x1E8
 */
JAISe* RandId::startSound(JAInter::Object* obj, u32 soundID, u32 range, u32 flag)
{
	u32 randomID = getRandomId(soundID, range);
	P2ASSERTLINE(460, obj);
	obj->startSound(randomID, flag);
}

/**
 * @note Address: 0x8033FC88
 * @note Size: 0x1B8
 */
void RandId::playSystemSe(u32 soundID, JAISound** sound, u32 range, u32 flag)
{
	u32 randomID = getRandomId(soundID, range);
	PSSystem::spSysIF->playSystemSe(randomID, sound, flag);
}

/**
 * @note Address: 0x8033FE40
 * @note Size: 0x74
 */
void EnvSe_Pan::setPanAndDolby(JAISound* sound)
{
	sound->setPan(mPanDolby[PD_Pan], 0, SOUNDPARAM_Unk0);
	sound->setDolby(mPanDolby[PD_Dolby], 0, SOUNDPARAM_Unk0);
}

/**
 * @note Address: 0x8033FEB4
 * @note Size: 0x60
 */
EnvSe_Perspective::EnvSe_Perspective(u32 soundID, f32 volume, Vec pos)
    : EnvSeBase(soundID, volume)
{
	mPosition = pos;
}

/**
 * @note Address: 0x8033FF14
 * @note Size: 0x4C
 */
JAISound* EnvSe_Perspective::play()
{
	PSSystem::spSysIF->startSoundVecT(mSoundID, &mSound, &mPosition, 0, 0, 4);
	return mSound;
}

/**
 * @note Address: 0x8033FF60
 * @note Size: 0x88
 */
EnvSe_AutoPan::EnvSe_AutoPan(u32 soundID, f32 pan, f32 dolby, f32 volume, f32 panInc, f32 dolbyInc)
    : EnvSe_Pan(soundID, volume, pan, dolby)
{
	mStepValues[PD_Pan]     = panInc;
	mStepValues[PD_Dolby]   = dolbyInc;
	mIsIncreasing[PD_Pan]   = true;
	mIsIncreasing[PD_Dolby] = true;
}

/**
 * @note Address: 0x8033FFE8
 * @note Size: 0xC
 */
void EnvSe_AutoPan::setDirection(bool isPanIncrease, bool isDolbyIncrease)
{
	mIsIncreasing[PD_Pan]   = isPanIncrease;
	mIsIncreasing[PD_Dolby] = isDolbyIncrease;
}

/**
 * @note Address: 0x8033FFF4
 * @note Size: 0x11C
 */
void EnvSe_AutoPan::setPanAndDolby(JAISound* sound)
{
	// loop through both pan and dolby
	for (u8 i = 0; i < PD_Count; i++) {
		if (mIsIncreasing[i]) {
			mPanDolby[i] += mStepValues[i];
			if (mPanDolby[i] > 1.0f) {
				mPanDolby[i]     = 2.0f - mPanDolby[i];
				mIsIncreasing[i] = false;
			}
		} else {
			mPanDolby[i] -= mStepValues[i];
			if (mPanDolby[i] < 0.0f) {
				mPanDolby[i] *= -1.0f;
				mIsIncreasing[i] = true;
			}
		}
	}

	sound->setPan(mPanDolby[PD_Pan], 0, SOUNDPARAM_Unk0);
	sound->setDolby(mPanDolby[PD_Dolby], 0, SOUNDPARAM_Unk0);
}

/**
 * @note Address: 0x80340110
 * @note Size: 0x21C
 */
Builder_EvnSe_Perspective::Builder_EvnSe_Perspective(JGeometry::TBox3f box)
    : _18(0)
    , _1C(0)
    , _20(0)
    , mBox(box)
    , _3C(0.0f)
{
	mBox.absolute();
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	bl       __ct__11JKRDisposerFv
	lis      r3, __vt__Q26PSGame25Builder_EvnSe_Perspective@ha
	li       r0, 0
	addi     r3, r3, __vt__Q26PSGame25Builder_EvnSe_Perspective@l
	lfs      f1, 0(r31)
	stw      r3, 0(r30)
	addi     r3, r30, 0x40
	lfs      f0, 4(r31)
	stb      r0, 0x18(r30)
	lfs      f4, 8(r31)
	stw      r0, 0x1c(r30)
	lfs      f3, 0xc(r31)
	stw      r0, 0x20(r30)
	lfs      f2, 0x10(r31)
	stfs     f1, 0x24(r30)
	lfs      f1, 0x14(r31)
	stfs     f0, 0x28(r30)
	lfs      f0, lbl_8051E198@sda21(r2)
	stfs     f4, 0x2c(r30)
	stfs     f3, 0x30(r30)
	stfs     f2, 0x34(r30)
	stfs     f1, 0x38(r30)
	stfs     f0, 0x3c(r30)
	bl       initiate__10JSUPtrListFv
	lfs      f0, 0x30(r30)
	li       r0, 0
	lfs      f2, 0x24(r30)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bne      lbl_803401D0
	lfs      f1, 0x34(r30)
	lfs      f0, 0x28(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803401D0
	lfs      f1, 0x38(r30)
	lfs      f0, 0x2c(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_803401D0
	li       r0, 1

lbl_803401D0:
	clrlwi.  r0, r0, 0x18
	bne      lbl_80340310
	lwz      r0, 0x24(r30)
	lwz      r6, 0x28(r30)
	stw      r0, 8(r1)
	lwz      r5, 0x2c(r30)
	lfs      f0, 8(r1)
	lwz      r4, 0x30(r30)
	lwz      r3, 0x34(r30)
	fcmpo    cr0, f2, f0
	lwz      r0, 0x38(r30)
	stw      r6, 0xc(r1)
	stw      r5, 0x10(r1)
	stw      r4, 0x14(r1)
	stw      r3, 0x18(r1)
	stw      r0, 0x1c(r1)
	cror     2, 1, 2
	bne      lbl_8034021C
	stfs     f0, 0x24(r30)

lbl_8034021C:
	lfs      f0, 0x28(r30)
	lfs      f1, 0xc(r1)
	fcmpo    cr0, f0, f1
	cror     2, 1, 2
	bne      lbl_80340234
	stfs     f1, 0x28(r30)

lbl_80340234:
	lfs      f0, 0x2c(r30)
	lfs      f2, 0x10(r1)
	fcmpo    cr0, f0, f2
	cror     2, 1, 2
	bne      lbl_8034024C
	stfs     f2, 0x2c(r30)

lbl_8034024C:
	lfs      f0, 0x24(r30)
	lfs      f3, 0x14(r1)
	fcmpo    cr0, f0, f3
	cror     2, 1, 2
	bne      lbl_80340264
	stfs     f3, 0x24(r30)

lbl_80340264:
	lfs      f0, 0x28(r30)
	lfs      f4, 0x18(r1)
	fcmpo    cr0, f0, f4
	cror     2, 1, 2
	bne      lbl_8034027C
	stfs     f4, 0x28(r30)

lbl_8034027C:
	lfs      f0, 0x2c(r30)
	lfs      f5, 0x1c(r1)
	fcmpo    cr0, f0, f5
	cror     2, 1, 2
	bne      lbl_80340294
	stfs     f5, 0x2c(r30)

lbl_80340294:
	lfs      f0, 0x30(r30)
	lfs      f6, 8(r1)
	fcmpo    cr0, f0, f6
	cror     2, 0, 2
	bne      lbl_803402AC
	stfs     f6, 0x30(r30)

lbl_803402AC:
	lfs      f0, 0x34(r30)
	fcmpo    cr0, f0, f1
	cror     2, 0, 2
	bne      lbl_803402C0
	stfs     f1, 0x34(r30)

lbl_803402C0:
	lfs      f0, 0x38(r30)
	fcmpo    cr0, f0, f2
	cror     2, 0, 2
	bne      lbl_803402D4
	stfs     f2, 0x38(r30)

lbl_803402D4:
	lfs      f0, 0x30(r30)
	fcmpo    cr0, f0, f3
	cror     2, 0, 2
	bne      lbl_803402E8
	stfs     f3, 0x30(r30)

lbl_803402E8:
	lfs      f0, 0x34(r30)
	fcmpo    cr0, f0, f4
	cror     2, 0, 2
	bne      lbl_803402FC
	stfs     f4, 0x34(r30)

lbl_803402FC:
	lfs      f0, 0x38(r30)
	fcmpo    cr0, f0, f5
	cror     2, 0, 2
	bne      lbl_80340310
	stfs     f5, 0x38(r30)

lbl_80340310:
	lwz      r0, 0x34(r1)
	mr       r3, r30
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/**
 * @note Address: 0x8034032C
 * @note Size: 0x2D0
 */
void Builder_EvnSe_Perspective::build(f32 p1, PSSystem::EnvSeMgr* mgr)
{
	P2ASSERTLINE(596, mgr);
	f32 sizeX = mBox.mMax.x - mBox.mMin.x;
	f32 sizeZ = mBox.mMax.z - mBox.mMin.z;

	if (!_18) {
		f32* temp = &sizeX;
		int* val  = &_1C;
		while (true) {
			*val = *temp / 1000.0f;
			if (val == &_20) {
				temp = &sizeZ;
				val  = &_20;
				break;
			}
		}
	} else {
		P2ASSERTBOOLLINE(639, _1C > 0 && _20 > 0);
	}

	f32 thingA = sizeX / f32(_1C);
	f32 thingB = thingA / 2 + mBox.mMin.x;

	f32 thingC = sizeZ / f32(_20);
	f32 thingD = thingC / 2 + mBox.mMin.y;

	for (int i = 0; i < _1C; i++) {

		f32 outX = thingA * f32(i) + thingB;
		for (int j = 0; j < _20; j++) {
			f32 outZ = thingC * f32(j) + thingD;

			// this panic needs to be an inline in PSCommon.h
			// its also terrible and idk if any of this is right
			JUT_ASSERTLINE(210, mList.mNextLink, "リンクがありません"); // No link
			PSSystem::IdLink* link = (PSSystem::IdLink*)mList.mNextLink;
			mList.mNextLink        = (PSSystem::IdLink*)link->getNext();
			if (!mList.mNextLink) {
				mList.mNextLink = (PSSystem::IdLink*)mList.mHead;
			}

			Vec pos;
			pos.x                 = outX;
			pos.y                 = _3C;
			pos.z                 = outZ;
			EnvSe_Perspective* se = newSeObj(mList.mNextLink->mId, p1, pos);
			P2ASSERTLINE(662, se);
			onBuild(se);
			mgr->mEnvList.append(se);
		}
	}

	/*
	stwu     r1, -0xc0(r1)
	mflr     r0
	stw      r0, 0xc4(r1)
	stfd     f31, 0xb0(r1)
	psq_st   f31, 184(r1), 0, qr0
	stfd     f30, 0xa0(r1)
	psq_st   f30, 168(r1), 0, qr0
	stfd     f29, 0x90(r1)
	psq_st   f29, 152(r1), 0, qr0
	stfd     f28, 0x80(r1)
	psq_st   f28, 136(r1), 0, qr0
	stfd     f27, 0x70(r1)
	psq_st   f27, 120(r1), 0, qr0
	stfd     f26, 0x60(r1)
	psq_st   f26, 104(r1), 0, qr0
	stmw     r25, 0x44(r1)
	or.      r27, r4, r4
	fmr      f31, f1
	lis      r4, lbl_80490038@ha
	mr       r26, r3
	addi     r30, r4, lbl_80490038@l
	bne      lbl_80340398
	addi     r3, r30, 0x90
	addi     r5, r30, 0x9c
	li       r4, 0x254
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80340398:
	lfs      f3, 0x30(r26)
	lfs      f2, 0x24(r26)
	lfs      f1, 0x38(r26)
	lfs      f0, 0x2c(r26)
	fsubs    f29, f3, f2
	fsubs    f28, f1, f0
	stfs     f29, 0xc(r1)
	stfs     f28, 8(r1)
	lbz      r0, 0x18(r26)
	cmplwi   r0, 0
	bne      lbl_80340400
	lfs      f1, lbl_8051E1BC@sda21(r2)
	addi     r4, r26, 0x1c
	addi     r3, r1, 0xc
	addi     r0, r26, 0x20

lbl_803403D4:
	lfs      f0, 0(r3)
	cmplw    r4, r0
	fdivs    f0, f0, f1
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r3, 0x2c(r1)
	stw      r3, 0(r4)
	beq      lbl_8034043C
	mr       r4, r0
	addi     r3, r1, 8
	b        lbl_803403D4

lbl_80340400:
	lwz      r0, 0x1c(r26)
	li       r3, 0
	cmpwi    r0, 0
	ble      lbl_80340420
	lwz      r0, 0x20(r26)
	cmpwi    r0, 0
	ble      lbl_80340420
	li       r3, 1

lbl_80340420:
	clrlwi.  r0, r3, 0x18
	bne      lbl_8034043C
	addi     r3, r30, 0x90
	addi     r5, r30, 0x9c
	li       r4, 0x27f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8034043C:
	lwz      r3, 0x1c(r26)
	lis      r31, 0x4330
	lwz      r0, 0x20(r26)
	li       r29, 0
	xoris    r3, r3, 0x8000
	lfs      f5, 0x3c(r26)
	xoris    r0, r0, 0x8000
	stw      r3, 0x2c(r1)
	lfd      f30, lbl_8051E1A8@sda21(r2)
	stw      r31, 0x28(r1)
	lfs      f2, lbl_8051E194@sda21(r2)
	lfd      f0, 0x28(r1)
	stw      r0, 0x34(r1)
	fsubs    f4, f0, f30
	lfs      f1, 0x24(r26)
	stw      r31, 0x30(r1)
	lfs      f0, 0x2c(r26)
	lfd      f3, 0x30(r1)
	fdivs    f29, f29, f4
	stfs     f5, 0x20(r1)
	fsubs    f3, f3, f30
	fmadds   f27, f29, f2, f1
	fdivs    f28, f28, f3
	fmadds   f26, f28, f2, f0
	b        lbl_803405AC

lbl_803404A0:
	xoris    r0, r29, 0x8000
	stw      r31, 0x30(r1)
	li       r28, 0
	stw      r0, 0x34(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f30
	fmadds   f0, f29, f0, f27
	stfs     f0, 0x1c(r1)
	b        lbl_8034059C

lbl_803404C4:
	xoris    r3, r28, 0x8000
	lwz      r0, 0x4c(r26)
	stw      r3, 0x34(r1)
	cmplwi   r0, 0
	stw      r31, 0x30(r1)
	lfd      f0, 0x30(r1)
	fsubs    f0, f0, f30
	fmadds   f0, f28, f0, f26
	stfs     f0, 0x24(r1)
	bne      lbl_80340500
	addi     r3, r30, 0xa8
	addi     r5, r30, 0xb4
	li       r4, 0xd2
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80340500:
	lwz      r3, 0x4c(r26)
	lwz      r0, 0xc(r3)
	stw      r0, 0x4c(r26)
	lwz      r0, 0x4c(r26)
	cmplwi   r0, 0
	bne      lbl_80340520
	lwz      r0, 0x40(r26)
	stw      r0, 0x4c(r26)

lbl_80340520:
	lwz      r4, 0x10(r3)
	fmr      f1, f31
	lwz      r7, 0x1c(r1)
	mr       r3, r26
	lwz      r6, 0x20(r1)
	addi     r5, r1, 0x10
	lwz      r0, 0x24(r1)
	stw      r7, 0x10(r1)
	stw      r6, 0x14(r1)
	stw      r0, 0x18(r1)
	lwz      r12, 0(r26)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	or.      r25, r3, r3
	bne      lbl_80340574
	addi     r3, r30, 0x90
	addi     r5, r30, 0x9c
	li       r4, 0x296
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80340574:
	mr       r3, r26
	mr       r4, r25
	lwz      r12, 0(r26)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r3, r27
	mr       r4, r25
	bl       append__10JSUPtrListFP10JSUPtrLink
	addi     r28, r28, 1

lbl_8034059C:
	lwz      r0, 0x20(r26)
	cmpw     r28, r0
	blt      lbl_803404C4
	addi     r29, r29, 1

lbl_803405AC:
	lwz      r0, 0x1c(r26)
	cmpw     r29, r0
	blt      lbl_803404A0
	psq_l    f31, 184(r1), 0, qr0
	lfd      f31, 0xb0(r1)
	psq_l    f30, 168(r1), 0, qr0
	lfd      f30, 0xa0(r1)
	psq_l    f29, 152(r1), 0, qr0
	lfd      f29, 0x90(r1)
	psq_l    f28, 136(r1), 0, qr0
	lfd      f28, 0x80(r1)
	psq_l    f27, 120(r1), 0, qr0
	lfd      f27, 0x70(r1)
	psq_l    f26, 104(r1), 0, qr0
	lfd      f26, 0x60(r1)
	lmw      r25, 0x44(r1)
	lwz      r0, 0xc4(r1)
	mtlr     r0
	addi     r1, r1, 0xc0
	blr
	*/
}

/**
 * @note Address: 0x803405FC
 * @note Size: 0xAC
 */
EnvSe_Perspective* Builder_EvnSe_Perspective::newSeObj(u32 soundID, f32 volume, Vec pos)
{
	return new EnvSe_Perspective(soundID, volume, pos);
}

/**
 * @note Address: 0x803406A8
 * @note Size: 0xC8
 */
Builder_EvnSe_Perspective::~Builder_EvnSe_Perspective() { }

} // namespace PSGame
