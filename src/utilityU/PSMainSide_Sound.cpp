#include "P2Macros.h"
#include "PSM/Creature.h"
#include "PSM/ObjMgr.h"
#include "PSGame/SoundTable.h"
#include "PSM/Se.h"
#include "PSSystem/PSCommon.h"
#include "JSystem/JAudio/JALCalc.h"
#include "PSSystem/PSSystemIF.h"
#include "PSM/CreaturePrm.h"
#include "nans.h"

static const u32 padding[] = { 0, 0, 0 };

namespace PSM {

f32 SeSound::cDol_0Rad    = 1.0316;
f32 SeSound::cDol_HalfRad = 1.5707999;
f32 SeSound::cDol_FullRad = 2.1099999;
f32 SeSound::cPan_MaxAmp  = 0.98;
f32 SeSound::cCenterRad   = 1.57;

const f32 SeSound::smACosPrm[] = {
	3.141592f,   2.941258f,  2.857799f,   2.793427f,   2.738877f,   2.690566f,  2.6466579f, 2.606066f,   2.568079f,   2.532207f,
	2.4980919f,  2.465462f,  2.434109f,   2.403867f,   2.374599f,   2.346194f,  2.3185589f, 2.291615f,   2.265295f,   2.2395389f,
	2.214298f,   2.1895249f, 2.165182f,   2.141233f,   2.1176469f,  2.0943949f, 2.0714509f, 2.0487909f,  2.026395f,   2.004241f,
	1.982313f,   1.960593f,  1.939064f,   1.917713f,   1.896526f,   1.875489f,  1.854591f,  1.833819f,   1.813162f,   1.792611f,
	1.772154f,   1.751783f,  1.731487f,   1.711258f,   1.691086f,   1.670964f,  1.650882f,  1.630832f,   1.6108069f,  1.590798f,
	1.570796f,   1.550795f,  1.530786f,   1.5107599f,  1.490711f,   1.470629f,  1.450507f,  1.430335f,   1.4101059f,  1.38981f,
	1.369439f,   1.348982f,  1.328431f,   1.3077739f,  1.287002f,   1.266104f,  1.245067f,  1.223879f,   1.202528f,   1.181f,
	1.1592799f,  1.137351f,  1.115198f,   1.092801f,   1.070142f,   1.047198f,  1.023945f,  1.000359f,   0.97641098f, 0.95206797f,
	0.927295f,   0.902054f,  0.876298f,   0.849978f,   0.82303399f, 0.795399f,  0.766994f,  0.73772597f, 0.70748299f, 0.676131f,
	0.64350098f, 0.609386f,  0.57351297f, 0.53552699f, 0.49493399f, 0.451027f,  0.402716f,  0.34816599f, 0.28379399f, 0.200335f,
	0.0f,
};

/*
 * --INFO--
 * Address:	80470F0C
 * Size:	000078
 */
SeSound* SeSound::makeSeSound() { return new SeSound; }

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
f32 SeSound::psACos(f32 val)
{
	int mod = (val + 1.0f) * 50.0f;
	if (mod < 0) {
		return smACosPrm[0];
	} else if (mod >= 101) {
		return smACosPrm[100];
	}
	return smACosPrm[mod];
}

/*
 * --INFO--
 * Address:	80470F84
 * Size:	000004
 */
void SeSound::onGet() { }

/*
 * --INFO--
 * Address:	80470F88
 * Size:	0000A4
 */
void SeSound::onRelease()
{
	if (_1A == 0) {
		return;
	}
	if (_38 == nullptr) {
		return;
	}

	Creature* creature = static_cast<Creature*>(_38);
	P2ASSERTLINE(184, creature);

	if (creature->getPlayingHandleNum() != 0) {
		return;
	}
	ObjMgr::getInstance()->remove(creature);
}

/*
 * --INFO--
 * Address:	8047102C
 * Size:	000154
 */
void SeSound::initParameter(void* d1, JAInter::Actor* actor, u32 a1, u32 a2, u8 a3, JAInter::SoundInfo* info)
{
	JAISound::initParameter(d1, actor, a1, a2, a3, info);
	mPerspInfo.mIsSpecialSound = false;
	if (_1A) {
		if (_38) {
			Creature* creature = static_cast<Creature*>(_38);
			P2ASSERTLINE(208, creature);

			if (creature->getPlayingHandleNum() == 0) {
				ObjMgr::getInstance()->append(creature);
			}
		}
	}

	P2ASSERTLINE(215, info);

	u32 num = (u32)info->_00 >> 0x1c;
	if (num) {
		_4A0 = (num / 15.0f) * JALCalc::getRandom_0_1();
		_4A0 = _4A0 < 0.0f ? 0.0f : _4A0 > 1.0f ? 1.0f : _4A0;
	} else {
		_4A0 = 0.0f;
	}
}

/*
 * --INFO--
 * Address:	80471180
 * Size:	0002D8
 */
f32 SeSound::setDistanceVolumeCommon(f32, u8 flag)
{
	setFxmix(CreaturePrm::cSeFxMix, 0, 1);
	f32 dist = _34->_18;
	u8 test  = isValidSeType(mSoundID);

	f32 dist2;
	if (mPerspInfo.mIsSpecialSound == true) {
		dist2 = calcVolumeSpecialized(dist);
	} else {
		dist2 = calcVolume(dist, flag, test);
	}
	dist2 = dist2 - _4A0;
	if (!_1A || _38) {
		PSM::SceneBase* scene = static_cast<PSM::SceneBase*>(PSMGetSceneMgrCheck()->getEndScene());
		P2ASSERTLINE(261, scene);
		f32 calc = scene->getCamDistVol(_49C);
		JUT_ASSERTLINE(269, calc != 0.0f, "\nSE called at invalid timming\n(%08x)\n", mSoundID);
		dist2 *= calc;
		f32 fx = static_cast<PSM::Scene_Cave*>(PSMGetChildScene())->getSceneFx();
		setFxmix(fx, 0, 2);
	}
	return dist2 < 0.0f ? 0.0f : dist2 > 1.0f ? 1.0f : dist2;

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
	lwz      r12, 0x10(r3)
	lis      r5, lbl_8049DC30@ha
	mr       r29, r4
	mr       r31, r3
	lwz      r12, 0x34(r12)
	addi     r30, r5, lbl_8049DC30@l
	lfs      f1, cSeFxMix__Q23PSM11CreaturePrm@sda21(r2)
	li       r4, 0
	li       r5, 1
	mtctr    r12
	bctrl
	lwz      r0, 0x20(r31)
	lwz      r3, 0x34(r31)
	rlwinm.  r4, r0, 2, 0x1e, 0x1f
	lfs      f31, 0x18(r3)
	rlwinm   r3, r0, 0x14, 0x1c, 0x1f
	bne      lbl_804711F0
	b        lbl_80471244

lbl_804711F0:
	cmplwi   r4, 2
	bne      lbl_80471210
	addi     r3, r30, 0x1d0
	addi     r5, r30, 0x1b8
	li       r4, 0x1f
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	b        lbl_8047122C

lbl_80471210:
	cmplwi   r4, 3
	bne      lbl_8047122C
	addi     r3, r30, 0x1d0
	addi     r5, r30, 0x1b8
	li       r4, 0x23
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8047122C:
	addi     r3, r30, 0x1d0
	addi     r5, r30, 0x1b8
	li       r4, 0x25
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce
	li       r3, 0

lbl_80471244:
	lbz      r0, 0x498(r31)
	clrlwi   r4, r3, 0x18
	cmplwi   r0, 1
	bne      lbl_80471264
	fmr      f1, f31
	mr       r3, r31
	bl       calcVolumeSpecialized__Q23PSM7SeSoundFf
	b        lbl_80471270

lbl_80471264:
	fmr      f1, f31
	mr       r3, r29
	bl       calcVolume__Q23PSM7SeSoundFfUcUc

lbl_80471270:
	lfs      f0, 0x4a0(r31)
	lbz      r0, 0x1a(r31)
	fsubs    f30, f1, f0
	cmplwi   r0, 0
	beq      lbl_80471290
	lwz      r0, 0x38(r31)
	cmplwi   r0, 0
	beq      lbl_80471408

lbl_80471290:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r0, 0
	bne      lbl_804712B0
	addi     r3, r30, 0x1e0
	addi     r5, r30, 0x1b8
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804712B0:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_804712D0
	addi     r3, r30, 0x1e0
	addi     r5, r30, 0x1b8
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804712D0:
	lwz      r0, 8(r29)
	cmplwi   r0, 0
	bne      lbl_804712F0
	addi     r3, r30, 0x1ec
	addi     r5, r30, 0x1b8
	li       r4, 0xa1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804712F0:
	lwz      r29, 8(r29)
	cmplwi   r29, 0
	bne      lbl_80471310
	addi     r3, r30, 0x1a0
	addi     r5, r30, 0x1b8
	li       r4, 0x105
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471310:
	mr       r3, r29
	lbz      r4, 0x49c(r31)
	lwz      r12, 0(r29)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	fmr      f31, f1
	lfs      f0, lbl_80520D94@sda21(r2)
	fcmpu    cr0, f0, f31
	bne      lbl_80471350
	lwz      r6, 0x20(r31)
	addi     r3, r30, 0x1a0
	addi     r5, r30, 0x1f8
	li       r4, 0x10d
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471350:
	lwz      r0, spSceneMgr__8PSSystem@sda21(r13)
	fmuls    f30, f30, f31
	cmplwi   r0, 0
	bne      lbl_80471374
	addi     r3, r30, 0x1e0
	addi     r5, r30, 0x1b8
	li       r4, 0x1d3
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471374:
	lwz      r29, spSceneMgr__8PSSystem@sda21(r13)
	cmplwi   r29, 0
	bne      lbl_80471394
	addi     r3, r30, 0x1e0
	addi     r5, r30, 0x1b8
	li       r4, 0x1dc
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80471394:
	lwz      r0, 4(r29)
	cmplwi   r0, 0
	bne      lbl_804713B4
	addi     r3, r30, 0x1ec
	addi     r5, r30, 0x1b8
	li       r4, 0xcf
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804713B4:
	lwz      r3, 4(r29)
	lwz      r29, 4(r3)
	cmplwi   r29, 0
	bne      lbl_804713D8
	addi     r3, r30, 0x1ec
	addi     r5, r30, 0x220
	li       r4, 0xd1
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804713D8:
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x30(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0x10(r31)
	li       r5, 2
	lwz      r12, 0x34(r12)
	mtctr    r12
	bctrl

lbl_80471408:
	lfs      f1, lbl_80520D94@sda21(r2)
	fcmpo    cr0, f30, f1
	bge      lbl_80471418
	b        lbl_8047142C

lbl_80471418:
	lfs      f1, lbl_80520D90@sda21(r2)
	fcmpo    cr0, f30, f1
	ble      lbl_80471428
	b        lbl_8047142C

lbl_80471428:
	fmr      f1, f30

lbl_8047142C:
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
 * Address:	80471458
 * Size:	000044
 */
void SeSound::specializePerspCalc(const PSGame::SoundTable::SePerspInfo& info)
{
	mPerspInfo                 = info;
	mPerspInfo.mIsSpecialSound = true;
}

/*
 * --INFO--
 * Address:	8047149C
 * Size:	00006C
 */
f32 SeSound::calcVolumeSpecialized(float p1)
{
	P2ASSERTLINE(294, mPerspInfo.mIsSpecialSound == true);
	return mPerspInfo.getDistVol(p1, 0);
}

/*
 * --INFO--
 * Address:	80471508
 * Size:	00008C
 */
f32 SeSound::calcVolume(f32 p1, u8 p2, u8 p3)
{
	PSGame::SoundTable::CategoryMgr* mgr = PSGame::SoundTable::CategoryMgr::sInstance;
	PSSystem::getSoundCategoryInfo(mgr, p3)->getDistVol(p1, p2);
}

/*
 * --INFO--
 * Address:	80471594
 * Size:	0000B8
 */
void SeSound::setSeDistancePan(u8 flag)
{
	f32 calc = 0.5f;
	if (!_1A) {
		calc = calcPan(_34->_00, _34->_18);
	} else {
		if (_38) {
			Creature* creature = static_cast<Creature*>(_38);
			P2ASSERTLINE(337, creature);
			calc = creature->getJAIObject()->_38;
		}
	}
	setSeInterPan(4, calc, flag, 0);
}

/*
 * --INFO--
 * Address:	8047164C
 * Size:	0000C8
 */
f32 SeSound::calcPan(const Vec& pos, f32 modifier)
{
	f32 calc = (modifier <= 0.0f) ? cCenterRad : psACos(-pos.x / modifier);

	static f32 panRatio;
	static s8 init;
	if (!init) {
		init     = true;
		panRatio = cPan_MaxAmp / 3.1415f;
	}

	f32 ret = panRatio * calc;
	if (ret > 1.0f) {
		return 1.0f;
	}
	return ret;
}

/*
 * --INFO--
 * Address:	80471714
 * Size:	000088
 */
void SeSound::setSeDistanceDolby(u8 flag)
{
	f32 calc = 0.0f;
	if (!_1A) {
		calc = calcDolby(_34->_00, _34->_18);
	} else {
		if (_38) {
			Creature* creature = static_cast<Creature*>(_38);
			calc               = creature->getJAIObject()->_3C;
		}
	}
	setSeInterDolby(4, calc, flag, 0);
}

/*
 * --INFO--
 * Address:	8047179C
 * Size:	00010C
 */
f32 SeSound::calcDolby(const Vec& pos, f32 modifier)
{
	if (modifier <= 0.0f) {
		return 0.0f;
	}

	f32 calc = psACos(-pos.z / modifier);

	f32 dolby;
	if (calc < cDol_0Rad) {
		dolby = 0.0f;

	} else if (calc < cDol_HalfRad) {
		dolby = (0.5f / (cDol_HalfRad - cDol_0Rad)) * (calc - cDol_0Rad);

	} else if (calc < cDol_FullRad) {
		dolby = (0.5f / (cDol_FullRad - cDol_HalfRad)) * (calc - cDol_HalfRad) + 0.5f;

	} else {
		dolby = 1.0f;
	}

	if (dolby > 1.0f) {
		return 1.0f;
	}

	if (dolby < 0.0f) {
		return 0.0f;
	}

	return dolby;
}

} // namespace PSM
