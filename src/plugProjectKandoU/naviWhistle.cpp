#include "Game/Navi.h"
#include "Game/NaviParms.h"
#include "Game/CurrTriInfo.h"
#include "Game/MapMgr.h"
#include "Game/gamePlayData.h"
#include "Game/PlatInstance.h"
#include "trig.h"

namespace Game {

/*
 * __ct
 * --INFO--
 * Address:	80165088
 * Size:	000034
 */
NaviWhistle::NaviWhistle(Game::Navi* navi)
    : mNavi(navi)
{
	init();
}

/*
 * --INFO--
 * Address:	801650BC
 * Size:	000128
 * TODO: Needs NaviParms
 */
void NaviWhistle::init()
{
	mState            = 0;
	mRadius           = 10.0f;
	mActiveTime       = 0.0f;
	mColor            = Color4(255, 150, 0, 120);
	const f32 faceDir = mNavi->getFaceDir();
	NaviParms* parms  = static_cast<NaviParms*>(mNavi->mParms);
	f32 v1            = parms->mNaviParms.mP046.mValue * 0.5f;
	mNaviOffsetVec    = Vector3f(sinf(faceDir) * v1, 0.0f, cosf(faceDir) * v1);

	updatePosition();
}

/*
 * --INFO--
 * Address:	801651E4
 * Size:	000190
 */
void NaviWhistle::updatePosition()
{
	mPosition = mNavi->getPosition() + mNaviOffsetVec;

	CurrTriInfo info;
	f32 y          = 0.0f;
	info.mPosition = mPosition;
	if (mapMgr) {
		info._0C = false;
		mapMgr->getCurrTri(info);
		y       = info.mMinY;
		mNormal = info.mNormalVec;
	}

	if (platMgr) {
		info.mMinY = FLOAT_DIST_MIN;
		platMgr->getCurrTri(info);
		f32 minY = info.mMinY;
		if (minY > y) {
			mNormal = info.mNormalVec;
			y       = minY;
		}
	}

	mPosition.y = y;
	mPosition   = mPosition + mNormal;
}

/*
 * --INFO--
 * Address:	80165374
 * Size:	000078
 */
void NaviWhistle::start()
{
	mIsWhistleActive = false;

	switch (mState) {
	case Whistle_Inactive:
		mState           = 1;
		mActiveTime      = 0.0f;
		NaviParms* parms = static_cast<NaviParms*>(mNavi->mParms);
		mRadius          = parms->mNaviParms.mP053.mValue;
		return;
	case Whistle_Timeout:
		mState      = 1;
		mActiveTime = 0.0f;
		parms       = static_cast<NaviParms*>(mNavi->mParms);
		mRadius     = parms->mNaviParms.mP053.mValue;
		return;
	}
}

/*
 * --INFO--
 * Address:	801653EC
 * Size:	000034
 */

void NaviWhistle::stop()
{
	switch (mState) {

	case Whistle_Active:
		mState           = 2;
		mActiveTime      = 0.0f;
		mIsWhistleActive = true;
		return;
	case Whistle_Inactive:
	case Whistle_Timeout:
	default:
		return;
	}
}

/*
 * --INFO--
 * Address:	80165420
 * Size:	000010
 */
bool NaviWhistle::timeout() { return mState == Whistle_Inactive; }

/*
 * --INFO--
 * Address:	80165430
 * Size:	0000F4
 */
void NaviWhistle::setFaceDir(f32 dir)
{
	f32 dist = mNaviOffsetVec.length();

	mNaviOffsetVec = Vector3f(dist * sinf(dir), 0.0f, dist * cosf(dir));
}

/*
 * --INFO--
 * Address:	80165524
 * Size:	0001F4
 */
void NaviWhistle::updateWhistle()
{
	switch (mState) {
	case Whistle_Inactive:
		mColor.r = 255;
		mColor.g = 120;
		mColor.b = 0;
		mColor.a = 120;
		break;
	case Whistle_Active:
		NaviParms* parms = static_cast<NaviParms*>(mNavi->mParms);
		f32 growth       = mActiveTime / parms->mNaviParms.mP002.mValue;
		f32 zero         = 0.0f;
		mColor.r         = (growth * -175.0f + 255.0f);
		mColor.g         = (growth * -110.0f + 120.0f);
		mColor.b         = (growth * 255.0f + zero);
		mColor.a         = (growth * zero + 120.0f);
		mActiveTime += sys->mDeltaTime;
		Navi* navi = mNavi;
		parms      = static_cast<NaviParms*>(mNavi->mParms);
		if (mActiveTime > parms->mNaviParms.mP002.mValue) {
			mActiveTime = 0.0f;
			mState      = Whistle_Timeout;
		} else {
			OlimarData* data = navi->getOlimarData();
			f32 maxSize;
			if (data->hasItem(OlimarData::ODII_AmplifiedAmplifier)) {
				parms   = naviMgr->mNaviParms;
				maxSize = parms->mNaviParms.mQ007.mValue;
			} else {
				parms   = naviMgr->mNaviParms;
				maxSize = parms->mNaviParms.mP001.mValue;
			}
			parms     = static_cast<NaviParms*>(mNavi->mParms);
			f32 ratio = mActiveTime / parms->mNaviParms.mP002();
			f32 diff  = maxSize - parms->mNaviParms.mP053();
			mRadius   = ratio * diff + parms->mNaviParms.mP053();
		}
		break;
	case Whistle_Timeout:
		parms    = static_cast<NaviParms*>(mNavi->mParms);
		mColor.a = (1.0f - mActiveTime / parms->mNaviParms.mP003.mValue) * 120.0f;
		mActiveTime += sys->mDeltaTime;

		parms = static_cast<NaviParms*>(mNavi->mParms);
		if (mActiveTime > parms->mNaviParms.mP003.mValue) {
			mActiveTime = 0.0f;
			mState      = Whistle_Inactive;
			mRadius     = 10.0f;
		}
		break;
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r3
	lhz      r0, 0x28(r3)
	cmpwi    r0, 1
	beq      lbl_80165580
	bge      lbl_80165554
	cmpwi    r0, 0
	bge      lbl_80165560
	b        lbl_80165704

lbl_80165554:
	cmpwi    r0, 3
	bge      lbl_80165704
	b        lbl_8016568C

lbl_80165560:
	li       r0, 0xff
	li       r3, 0x78
	stb      r0, 0x38(r31)
	li       r0, 0
	stb      r3, 0x39(r31)
	stb      r0, 0x3a(r31)
	stb      r3, 0x3b(r31)
	b        lbl_80165704

lbl_80165580:
	lwz      r3, 0x34(r31)
	lfs      f2, 0x2c(r31)
	lwz      r3, 0xc0(r3)
	lfs      f3, lbl_80518904@sda21(r2)
	lfs      f0, 0x368(r3)
	lfs      f1, lbl_80518900@sda21(r2)
	fdivs    f6, f2, f0
	lfs      f2, lbl_805188E4@sda21(r2)
	lfs      f4, lbl_80518908@sda21(r2)
	lfs      f0, lbl_8051890C@sda21(r2)
	fmadds   f3, f6, f3, f1
	fmadds   f0, f6, f0, f4
	fmadds   f1, f6, f1, f2
	fctiwz   f5, f3
	fctiwz   f3, f0
	fmadds   f0, f6, f2, f4
	stfd     f5, 8(r1)
	fctiwz   f1, f1
	stfd     f3, 0x10(r1)
	fctiwz   f0, f0
	lwz      r0, 0xc(r1)
	stfd     f1, 0x18(r1)
	lwz      r3, 0x14(r1)
	stb      r0, 0x38(r31)
	lwz      r0, 0x1c(r1)
	stb      r3, 0x39(r31)
	stfd     f0, 0x20(r1)
	stb      r0, 0x3a(r31)
	lwz      r0, 0x24(r1)
	stb      r0, 0x3b(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x34(r31)
	lfs      f1, 0x2c(r31)
	lwz      r4, 0xc0(r3)
	lfs      f0, 0x368(r4)
	fcmpo    cr0, f1, f0
	ble      lbl_80165634
	stfs     f2, 0x2c(r31)
	li       r0, 2
	sth      r0, 0x28(r31)
	b        lbl_80165704

lbl_80165634:
	bl       getOlimarData__Q24Game4NaviFv
	li       r4, 2
	bl       hasItem__Q24Game10OlimarDataFi
	clrlwi.  r0, r3, 0x18
	beq      lbl_80165658
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f3, 0xbd8(r3)
	b        lbl_80165664

lbl_80165658:
	lwz      r3, naviMgr__4Game@sda21(r13)
	lwz      r3, 0xc8(r3)
	lfs      f3, 0x318(r3)

lbl_80165664:
	lwz      r3, 0x34(r31)
	lfs      f2, 0x2c(r31)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x368(r3)
	lfs      f1, 0x340(r3)
	fdivs    f2, f2, f0
	fsubs    f0, f3, f1
	fmadds   f0, f2, f0, f1
	stfs     f0, 0x24(r31)
	b        lbl_80165704

lbl_8016568C:
	lwz      r3, 0x34(r31)
	lfs      f1, 0x2c(r31)
	lwz      r3, 0xc0(r3)
	lfs      f2, lbl_805188FC@sda21(r2)
	lfs      f0, 0x390(r3)
	lfs      f3, lbl_80518908@sda21(r2)
	fdivs    f0, f1, f0
	fsubs    f0, f2, f0
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	stb      r0, 0x3b(r31)
	lwz      r3, sys@sda21(r13)
	lfs      f1, 0x2c(r31)
	lfs      f0, 0x54(r3)
	fadds    f0, f1, f0
	stfs     f0, 0x2c(r31)
	lwz      r3, 0x34(r31)
	lfs      f1, 0x2c(r31)
	lwz      r3, 0xc0(r3)
	lfs      f0, 0x390(r3)
	fcmpo    cr0, f1, f0
	ble      lbl_80165704
	lfs      f1, lbl_805188E4@sda21(r2)
	li       r0, 0
	lfs      f0, lbl_805188E0@sda21(r2)
	stfs     f1, 0x2c(r31)
	sth      r0, 0x28(r31)
	stfs     f0, 0x24(r31)

lbl_80165704:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80165718
 * Size:	0001D4
 */
void NaviWhistle::update(Vector3f& stick, bool active)
{
	Vector3f res;
	if (active) {
		res = 0.0f;
	} else {
		res              = stick;
		f32 dist         = res.normalise();
		NaviParms* parms = static_cast<NaviParms*>(mNavi->mParms);
		res *= parms->mNaviParms.mP047.mValue;
		f32 time = sys->mDeltaTime;
		res *= time;
		res += mNaviOffsetVec;
		dist = res.normalise();
		res *= dist;
		res *= time;
		res += mNaviOffsetVec;
		// wtf is this
	}
	mNaviOffsetVec = res;

	updatePosition(); // why... wont... you... NOT INLINE
	updateWhistle();
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stfd     f31, 0x10(r1)
	psq_st   f31, 24(r1), 0, qr0
	stw      r31, 0xc(r1)
	clrlwi.  r0, r5, 0x18
	mr       r31, r3
	beq      lbl_8016574C
	lfs      f1, lbl_805188E4@sda21(r2)
	fmr      f2, f1
	fmr      f3, f1
	b        lbl_801658B4

lbl_8016574C:
	lfs      f3, 4(r4)
	lfs      f9, 8(r4)
	fmuls    f1, f3, f3
	lfs      f2, 0(r4)
	fmuls    f4, f9, f9
	lfs      f0, lbl_805188E4@sda21(r2)
	fmadds   f1, f2, f2, f1
	fadds    f1, f4, f1
	fcmpo    cr0, f1, f0
	ble      lbl_80165784
	ble      lbl_80165788
	frsqrte  f0, f1
	fmuls    f1, f0, f1
	b        lbl_80165788

lbl_80165784:
	fmr      f1, f0

lbl_80165788:
	lfs      f0, lbl_805188E4@sda21(r2)
	fcmpo    cr0, f1, f0
	ble      lbl_801657A8
	lfs      f0, lbl_805188FC@sda21(r2)
	fdivs    f0, f0, f1
	fmuls    f2, f2, f0
	fmuls    f3, f3, f0
	fmuls    f9, f9, f0

lbl_801657A8:
	lwz      r4, 0x34(r31)
	lwz      r3, sys@sda21(r13)
	lwz      r4, 0xc0(r4)
	lfs      f0, 0x54(r3)
	lfs      f1, 0x9a8(r4)
	lfs      f5, 4(r31)
	fmuls    f8, f3, f1
	lfs      f4, 8(r31)
	fmuls    f7, f2, f1
	lfs      f6, 0(r31)
	fmuls    f9, f9, f1
	lfs      f11, lbl_805188E4@sda21(r2)
	fmuls    f2, f8, f0
	fmuls    f3, f9, f0
	fmuls    f1, f7, f0
	fadds    f2, f2, f5
	fadds    f3, f3, f4
	fadds    f1, f1, f6
	fmuls    f12, f2, f2
	fmuls    f13, f3, f3
	fmadds   f10, f1, f1, f12
	fadds    f31, f13, f10
	fcmpo    cr0, f31, f11
	ble      lbl_8016581C
	ble      lbl_80165818
	frsqrte  f10, f31
	fmuls    f11, f10, f31
	b        lbl_8016581C

lbl_80165818:
	fmr      f11, f31

lbl_8016581C:
	lfs      f10, 0x980(r4)
	fcmpo    cr0, f11, f10
	cror     2, 1, 2
	bne      lbl_801658B4
	lfs      f11, lbl_805188E4@sda21(r2)
	fcmpo    cr0, f31, f11
	ble      lbl_80165854
	fmadds   f10, f1, f1, f12
	fadds    f12, f13, f10
	fcmpo    cr0, f12, f11
	ble      lbl_80165858
	frsqrte  f10, f12
	fmuls    f12, f10, f12
	b        lbl_80165858

lbl_80165854:
	fmr      f12, f11

lbl_80165858:
	lfs      f10, lbl_805188E4@sda21(r2)
	fcmpo    cr0, f12, f10
	ble      lbl_80165878
	lfs      f10, lbl_805188FC@sda21(r2)
	fdivs    f10, f10, f12
	fmuls    f1, f1, f10
	fmuls    f2, f2, f10
	fmuls    f3, f3, f10

lbl_80165878:
	fmuls    f10, f2, f8
	fmadds   f10, f1, f7, f10
	fmadds   f11, f3, f9, f10
	fmuls    f10, f1, f11
	fmuls    f2, f2, f11
	fmuls    f1, f3, f11
	fsubs    f3, f7, f10
	fsubs    f2, f8, f2
	fsubs    f7, f9, f1
	fmuls    f1, f3, f0
	fmuls    f2, f2, f0
	fmuls    f0, f7, f0
	fadds    f1, f1, f6
	fadds    f2, f2, f5
	fadds    f3, f0, f4

lbl_801658B4:
	stfs     f1, 0(r31)
	mr       r3, r31
	stfs     f2, 4(r31)
	stfs     f3, 8(r31)
	bl       updatePosition__Q24Game11NaviWhistleFv
	mr       r3, r31
	bl       updateWhistle__Q24Game11NaviWhistleFv
	psq_l    f31, 24(r1), 0, qr0
	lwz      r0, 0x24(r1)
	lfd      f31, 0x10(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
