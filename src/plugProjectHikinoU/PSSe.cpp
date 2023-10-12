#include "PSGame/SeMgr.h"
#include "PSGame/Rappa.h"
#include "PSGame/EnvSe.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSSystem/PSSystemIF.h"

namespace PSGame {

/*
 * --INFO--
 * Address:	8033F158
 * Size:	000210
 */
SeMgr::SeMgr()
    // : PSSystem::SingletonBase<SeMgr>(this)
    : mRandid()
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

/*
 * --INFO--
 * Address:	8033F368
 * Size:	000120
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
			calc = 0.0f;
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

/*
 * --INFO--
 * Address:	8033F488
 * Size:	00003C
 */
void SeMgr::stopMessageVoice()
{
	if (mSound) {
		mSound->stop(0);
	}
}

/*
 * --INFO--
 * Address:	8033F4C4
 * Size:	000050
 */
Rappa::Rappa()
{
	mId    = -1;
	mWait  = 0;
	mTblNo = 0;
}

/*
 * --INFO--
 * Address:	8033F514
 * Size:	0000A0
 */
void Rappa::init(u16 id)
{
	P2ASSERTLINE(180, (bool)id < 2);
	mId        = 0xe - id;
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

/*
 * --INFO--
 * Address:	8033F5B4
 * Size:	000008
 */
void Rappa::setId(u32 id) { mId = id; }

/*
 * --INFO--
 * Address:	8033F5BC
 * Size:	000098
 */
Rappa::~Rappa()
{
	for (int i = 0; i <= 1; i++) {
		if (sRappa[i] == this) {
			sRappa[i] = nullptr;
		}
	}
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	or.      r30, r3, r3
	beq      lbl_8033F638
	lis      r3, __vt__Q26PSGame5Rappa@ha
	li       r6, 0
	addi     r0, r3, __vt__Q26PSGame5Rappa@l
	addi     r5, r13, sRappa__Q26PSGame5Rappa@sda21
	stw      r0, 0(r30)
	li       r3, 0
	b        lbl_8033F610

lbl_8033F5F8:
	rlwinm   r4, r6, 2, 0x16, 0x1d
	lwzx     r0, r5, r4
	cmplw    r0, r30
	bne      lbl_8033F60C
	stwx     r3, r5, r4

lbl_8033F60C:
	addi     r6, r6, 1

lbl_8033F610:
	clrlwi   r0, r6, 0x18
	cmplwi   r0, 2
	blt      lbl_8033F5F8
	mr       r3, r30
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r31
	ble      lbl_8033F638
	mr       r3, r30
	bl       __dl__FPv

lbl_8033F638:
	lwz      r0, 0x14(r1)
	mr       r3, r30
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033F654
 * Size:	000170
 */
bool Rappa::playRappa(bool flag, f32 x, f32 y, JAInter::Object* obj)
{
	P2ASSERTLINE(204, mId != -1);

	bool ret = false;
	if (flag) {
		if (y < 0.0f) {
			y = -y;
		}
		if (x < 0.0f) {
			x = -x;
		}
		if (y < x) {
			y = x;
		}

		if (y > 0.1f) {
			ret = false;
		} else {
			obj->startSound(mId, 0);
			f32 comp = _sqrtf((y - 1.0f) * -1.0f);
			mWait    = comp * 15.0f + cBaseWaitTime;
		}
	}
	return ret;
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

/*
 * --INFO--
 * Address:	8033F7C4
 * Size:	00003C
 */
u32 Rappa::syncCpu_WaitChk(JASTrack* track)
{
	track->readPortAppDirect(0xb, &mTblNo);
	return mWait;
}

/*
 * --INFO--
 * Address:	8033F800
 * Size:	000008
 */
u32 Rappa::syncCpu_TblNo(JASTrack* track) { return mTblNo; }

/*
 * --INFO--
 * Address:	8033F808
 * Size:	000078
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

/*
 * --INFO--
 * Address:	8033F880
 * Size:	000038
 */
void SetSe::exec()
{
	if (mCounter > mMaxCount)
		mStatus = -1;
	if (mStatus == -1)
		return;
	mCounter++;
}

/*
 * --INFO--
 * Address:	8033F8B8
 * Size:	0000B8
 */
JAISound* SetSe::startSound(JAInter::Object* obj, u32 id1, u32 flag)
{
	P2ASSERTLINE(336, obj);
	if (mStatus == -1) {
		JAISound* ret = obj->startSound(id1, flag);
		startCounter(id1);
		return ret;
	} else {
		return nullptr;
	}
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	stw      r29, 0x14(r1)
	or.      r29, r4, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	bne      lbl_8033F904
	lis      r3, lbl_804900C8@ha
	lis      r5, lbl_804900D4@ha
	addi     r3, r3, lbl_804900C8@l
	li       r4, 0x150
	addi     r5, r5, lbl_804900D4@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8033F904:
	lwz      r3, 8(r28)
	addis    r0, r3, 1
	cmplwi   r0, 0xffff
	bne      lbl_8033F94C
	mr       r3, r29
	mr       r4, r30
	lwz      r12, 0(r29)
	mr       r5, r31
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	mr       r0, r3
	mr       r3, r28
	mr       r31, r0
	mr       r4, r30
	bl       startCounter__Q26PSGame5SetSeFUl
	mr       r3, r31
	b        lbl_8033F950

lbl_8033F94C:
	li       r3, 0

lbl_8033F950:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033F970
 * Size:	0000A0
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

/*
 * --INFO--
 * Address:	8033FA10
 * Size:	000084
 */
void SetSe::startCounter(u32 id)
{
	mCounter  = 0;
	mStatus   = id;
	mMaxCount = mMaxId * JALCalc::getRandom_0_1() + mMinId;
}

/*
 * --INFO--
 * Address:	8033FA94
 * Size:	00000C
 */
RandId::RandId() { mId = cNotUsingMasterIdRatio; }

/*
 * --INFO--
 * Address:	8033FAA0
 * Size:	0001E8
 */
void RandId::startSound(JAInter::Object* obj, u32 soundID, u32 range, u32 flag)
{
	if (mId == -1.0f) {
		P2ASSERTLINE(426, range > 1);
		u32 inc = range * JALCalc::getRandom_0_1();
		P2ASSERTLINE(429, inc < range);
		soundID += inc;
	} else {
		P2ASSERTLINE(432, mId >= 0.0f);
		P2ASSERTLINE(433, range > 1);
		f32 comp = JALCalc::getRandom_0_1() - mId;
		if (comp > 0.0f) {
			P2ASSERTLINE(451, range > 1);
			for (int i = 0; i < range; i++) {
				comp -= (1.0f - mId) / range - 1.0f;
				if (comp < 0.0f)
					soundID += i;
				break;
			}
		}
	}
	P2ASSERTLINE(460, obj);
	obj->startSound(soundID, flag);
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1C0(r2)
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  lfs       f1, 0x0(r3)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0xAC
	  cmplwi    r30, 0x1
	  bgt-      .loc_0x58
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1AA
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x3154B4

	.loc_0x58:
	  bl        -0x285604
	  lis       r0, 0x4330
	  stw       r30, 0xC(r1)
	  lfd       f2, -0x1B0(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fmuls     f1, f0, f1
	  bl        -0x27DFCC
	  mr        r27, r3
	  cmplw     r27, r30
	  blt-      .loc_0xA4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1AD
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x315500

	.loc_0xA4:
	  add       r27, r29, r27
	  b         .loc_0x194

	.loc_0xAC:
	  lfs       f0, -0x1C8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  beq-      .loc_0xD8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1B0
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x315534

	.loc_0xD8:
	  cmplwi    r30, 0x1
	  bgt-      .loc_0xFC
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1B1
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x315558

	.loc_0xFC:
	  bl        -0x2856A8
	  lfs       f0, 0x0(r27)
	  lfs       f4, -0x1C8(r2)
	  fsubs     f5, f1, f0
	  fcmpo     cr0, f5, f4
	  bge-      .loc_0x11C
	  mr        r27, r29
	  b         .loc_0x194

	.loc_0x11C:
	  lis       r3, 0x4330
	  lfs       f3, -0x1D0(r2)
	  stw       r30, 0xC(r1)
	  subi      r0, r30, 0x1
	  lfd       f1, -0x1B0(r2)
	  fsubs     f2, f3, f0
	  stw       r3, 0x8(r1)
	  li        r3, 0x1
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f0, f3
	  fdivs     f0, f2, f0
	  mtctr     r0
	  cmplwi    r30, 0x1
	  ble-      .loc_0x174

	.loc_0x158:
	  fsubs     f5, f5, f0
	  fcmpo     cr0, f5, f4
	  bge-      .loc_0x16C
	  add       r27, r29, r3
	  b         .loc_0x194

	.loc_0x16C:
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x158

	.loc_0x174:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1C3
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x3155EC
	  mr        r27, r29

	.loc_0x194:
	  cmplwi    r28, 0
	  bne-      .loc_0x1B8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1CC
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x315614

	.loc_0x1B8:
	  mr        r3, r28
	  mr        r4, r27
	  lwz       r12, 0x0(r28)
	  mr        r5, r31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033FC88
 * Size:	0001B8
 */
void RandId::playSystemSe(u32 soundID, JAISound** sound, u32 range, u32 flag)
{
	if (mId == -1.0f) {
		P2ASSERTLINE(426, range > 1);
		u32 inc = range * JALCalc::getRandom_0_1();
		P2ASSERTLINE(429, inc < range);
		soundID += inc;
	} else {
		P2ASSERTLINE(432, mId >= 0.0f);
		P2ASSERTLINE(433, range > 1);
		f32 comp = JALCalc::getRandom_0_1() - mId;
		if (comp > 0.0f) {
			P2ASSERTLINE(451, range > 1);
			for (int i = 0; i < range; i++) {
				comp -= (1.0f - mId) / range - 1.0f;
				if (comp < 0.0f)
					soundID += i;
				break;
			}
		}
	}
	PSSystem::spSysIF->playSystemSe(soundID, sound, flag);
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lfs       f0, -0x1C0(r2)
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  lfs       f1, 0x0(r3)
	  fcmpu     cr0, f0, f1
	  bne-      .loc_0xAC
	  cmplwi    r30, 0x1
	  bgt-      .loc_0x58
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1AA
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x31569C

	.loc_0x58:
	  bl        -0x2857EC
	  lis       r0, 0x4330
	  stw       r30, 0xC(r1)
	  lfd       f2, -0x1B0(r2)
	  stw       r0, 0x8(r1)
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f2
	  fmuls     f1, f0, f1
	  bl        -0x27E1B4
	  mr        r27, r3
	  cmplw     r27, r30
	  blt-      .loc_0xA4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1AD
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x3156E8

	.loc_0xA4:
	  add       r4, r28, r27
	  b         .loc_0x194

	.loc_0xAC:
	  lfs       f0, -0x1C8(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  beq-      .loc_0xD8
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1B0
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x31571C

	.loc_0xD8:
	  cmplwi    r30, 0x1
	  bgt-      .loc_0xFC
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1B1
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x315740

	.loc_0xFC:
	  bl        -0x285890
	  lfs       f0, 0x0(r27)
	  lfs       f4, -0x1C8(r2)
	  fsubs     f5, f1, f0
	  fcmpo     cr0, f5, f4
	  bge-      .loc_0x11C
	  mr        r4, r28
	  b         .loc_0x194

	.loc_0x11C:
	  lis       r3, 0x4330
	  lfs       f3, -0x1D0(r2)
	  stw       r30, 0xC(r1)
	  subi      r0, r30, 0x1
	  lfd       f1, -0x1B0(r2)
	  fsubs     f2, f3, f0
	  stw       r3, 0x8(r1)
	  li        r3, 0x1
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fsubs     f0, f0, f3
	  fdivs     f0, f2, f0
	  mtctr     r0
	  cmplwi    r30, 0x1
	  ble-      .loc_0x174

	.loc_0x158:
	  fsubs     f5, f5, f0
	  fcmpo     cr0, f5, f4
	  bge-      .loc_0x16C
	  add       r4, r28, r3
	  b         .loc_0x194

	.loc_0x16C:
	  addi      r3, r3, 0x1
	  bdnz+     .loc_0x158

	.loc_0x174:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0xC8
	  li        r4, 0x1C3
	  addi      r5, r5, 0xD4
	  crclr     6, 0x6
	  bl        -0x3157D4
	  mr        r4, r28

	.loc_0x194:
	  lwz       r3, -0x67A8(r13)
	  mr        r5, r29
	  mr        r6, r31
	  bl        -0x77B8
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8033FE40
 * Size:	000074
 */
void EnvSe_Pan::setPanAndDolby(JAISound* sound)
{
	sound->setPan(mPan, 0, 0);
	sound->setDolby(mDolby, 0, 0);
}

/*
 * --INFO--
 * Address:	8033FEB4
 * Size:	000060
 */
EnvSe_Perspective::EnvSe_Perspective(u32 a1, f32 a2, Vec a3)
    : EnvSeBase(a1, a2)
{
	mVec = a3;
}

/*
 * --INFO--
 * Address:	8033FF14
 * Size:	00004C
 */
JAISound* EnvSe_Perspective::play()
{
	PSSystem::spSysIF->startSoundVecT(mSoundID, &mSound, &mVec, 0, 0, 4);
	return mSound;
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r7, 0
	li       r8, 0
	stw      r0, 0x14(r1)
	li       r9, 4
	stw      r31, 0xc(r1)
	mr       r31, r3
	addi     r5, r31, 0x34
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	addi     r6, r31, 0x3c
	lwz      r4, 0x24(r31)
	bl       "startSoundVecT<8JAISound>__8JAIBasicFUlPP8JAISoundP3VecUlUlUc"
	lwz      r0, 0x14(r1)
	lwz      r3, 0x34(r31)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033FF60
 * Size:	000088
 */
EnvSe_AutoPan::EnvSe_AutoPan(u32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6)
    : EnvSe_Pan(a1, a2)
{
	mPan       = a3;
	mDolby     = a4;
	_44        = a5;
	_48        = a6;
	mIsDolby   = true;
	mDirection = true;
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	addi     r11, r1, 0x30
	bl       _savefpr_28
	stw      r31, 0xc(r1)
	fmr      f28, f1
	mr       r31, r3
	fmr      f29, f2
	fmr      f30, f4
	fmr      f31, f5
	fmr      f1, f3
	bl       __ct__Q28PSSystem9EnvSeBaseFUlf
	lis      r4, __vt__Q26PSGame9EnvSe_Pan@ha
	lis      r3, __vt__Q26PSGame13EnvSe_AutoPan@ha
	addi     r4, r4, __vt__Q26PSGame9EnvSe_Pan@l
	li       r0, 1
	stw      r4, 0x10(r31)
	addi     r4, r3, __vt__Q26PSGame13EnvSe_AutoPan@l
	mr       r3, r31
	stfs     f28, 0x3c(r31)
	stfs     f29, 0x40(r31)
	stw      r4, 0x10(r31)
	stfs     f30, 0x44(r31)
	stfs     f31, 0x48(r31)
	stb      r0, 0x4c(r31)
	stb      r0, 0x4d(r31)
	addi     r11, r1, 0x30
	bl       _restfpr_28
	lwz      r0, 0x34(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	8033FFE8
 * Size:	00000C
 */
void EnvSe_AutoPan::setDirection(bool dolby, bool dir)
{
	mIsDolby   = dolby;
	mDirection = dir;
}

/*
 * --INFO--
 * Address:	8033FFF4
 * Size:	00011C
 */
void EnvSe_AutoPan::setPanAndDolby(JAISound* sound)
{
	for (int i = 0; i < 2; i++) { }

	sound->setPan(mPan, 0, 0);
	sound->setDolby(mDolby, 0, 0);
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	li       r5, 0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	b        lbl_803400AC

lbl_80340018:
	clrlwi   r3, r5, 0x18
	addi     r4, r3, 0x4c
	lbzx     r0, r30, r4
	cmplwi   r0, 0
	beq      lbl_8034006C
	slwi     r0, r3, 2
	lfs      f0, lbl_8051E190@sda21(r2)
	add      r3, r30, r0
	lfs      f2, 0x3c(r3)
	lfs      f1, 0x44(r3)
	fadds    f1, f2, f1
	stfs     f1, 0x3c(r3)
	lfs      f1, 0x3c(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_803400A8
	lfs      f0, lbl_8051E1B8@sda21(r2)
	li       r0, 0
	fsubs    f0, f0, f1
	stfs     f0, 0x3c(r3)
	stbx     r0, r30, r4
	b        lbl_803400A8

lbl_8034006C:
	slwi     r0, r3, 2
	lfs      f0, lbl_8051E198@sda21(r2)
	add      r3, r30, r0
	lfs      f2, 0x3c(r3)
	lfs      f1, 0x44(r3)
	fsubs    f1, f2, f1
	stfs     f1, 0x3c(r3)
	lfs      f1, 0x3c(r3)
	fcmpo    cr0, f1, f0
	bge      lbl_803400A8
	lfs      f0, lbl_8051E1A0@sda21(r2)
	li       r0, 1
	fmuls    f0, f1, f0
	stfs     f0, 0x3c(r3)
	stbx     r0, r30, r4

lbl_803400A8:
	addi     r5, r5, 1

lbl_803400AC:
	clrlwi   r0, r5, 0x18
	cmplwi   r0, 2
	blt      lbl_80340018
	mr       r3, r31
	lfs      f1, 0x3c(r30)
	lwz      r12, 0x10(r31)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x24(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	lfs      f1, 0x40(r30)
	lwz      r12, 0x10(r31)
	li       r4, 0
	li       r5, 0
	lwz      r12, 0x3c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80340110
 * Size:	00021C
 */
Builder_EvnSe_Perspective::Builder_EvnSe_Perspective(JGeometry::TBox3f box)
{
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

/*
 * --INFO--
 * Address:	8034032C
 * Size:	0002D0
 */
void Builder_EvnSe_Perspective::build(f32, PSSystem::EnvSeMgr*)
{
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

/*
 * --INFO--
 * Address:	803405FC
 * Size:	0000AC
 */
EnvSe_Perspective* Builder_EvnSe_Perspective::newSeObj(u32 flag, f32 a2, Vec vec) { return new EnvSe_Perspective(flag, a2, vec); }

/*
 * --INFO--
 * Address:	803406A8
 * Size:	0000C8
 */
Builder_EvnSe_Perspective::~Builder_EvnSe_Perspective()
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	or.      r29, r3, r3
	beq      lbl_80340750
	lis      r3, __vt__Q26PSGame25Builder_EvnSe_Perspective@ha
	addic.   r0, r29, 0x40
	addi     r0, r3, __vt__Q26PSGame25Builder_EvnSe_Perspective@l
	stw      r0, 0(r29)
	beq      lbl_80340734
	b        lbl_80340714

lbl_803406E4:
	mr       r4, r31
	addi     r3, r29, 0x40
	bl       remove__10JSUPtrListFP10JSUPtrLink
	lwz      r31, 0(r31)
	cmplwi   r31, 0
	beq      lbl_80340714
	beq      lbl_8034070C
	mr       r3, r31
	li       r4, 0
	bl       __dt__10JSUPtrLinkFv

lbl_8034070C:
	mr       r3, r31
	bl       __dl__FPv

lbl_80340714:
	lwz      r31, 0x40(r29)
	cmplwi   r31, 0
	bne      lbl_803406E4
	addic.   r0, r29, 0x40
	beq      lbl_80340734
	addi     r3, r29, 0x40
	li       r4, 0
	bl       __dt__10JSUPtrListFv

lbl_80340734:
	mr       r3, r29
	li       r4, 0
	bl       __dt__11JKRDisposerFv
	extsh.   r0, r30
	ble      lbl_80340750
	mr       r3, r29
	bl       __dl__FPv

lbl_80340750:
	lwz      r0, 0x24(r1)
	mr       r3, r29
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

} // namespace PSGame
