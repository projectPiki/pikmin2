#include "Game/pelletMgr.h"
#include "og/Screen/DispMember.h"
#include "Screen/Game2DMgr.h"
#include "PSSystem/PSSystemIF.h"
#include "Game/gamePlayData.h"
#include "Game/MoviePlayer.h"
#include "Game/GameLight.h"
#include "P2JME/P2JME.h"
#include "Controller.h"
#include "Sys/DrawBuffers.h"
#include "nans.h"

namespace Game {

struct OtakaraArray {
	int a;
	f32 b;
} asArrayOtakara[] = { { -1, 1.0f } };

/*
 * --INFO--
 * Address:	8023B534
 * Size:	000064
 */
void BaseGameSection::drawOtakaraWindow(Graphics& gfx)
{
	j3dSys.reinitGX();
	j3dSys.drawInit();
	do_drawOtakaraWindow(gfx);
}

/*
 * --INFO--
 * Address:	8023B598
 * Size:	000094
 */
void BaseGameSection::setDraw2DCreature(Creature* creature)
{
	if (creature) {
		if (mDraw2DCreature) {
			mDraw2DCreature->getCreatureName();
			mDraw2DCreature->getCreatureID();

			creature->getCreatureName();
			creature->getCreatureID();
		}
	}

	mDraw2DCreature = creature;
}

/*
 * --INFO--
 * Address:	8023B62C
 * Size:	0001E0
 */
void BaseGameSection::startZoomWindow()
{
	mTreasureGetState    = 1;
	mDraw2DCreatureScale = 0.0f;

	SysShape::Model* model = mDraw2DCreature->mModel;
	f32 modelRadius        = model->getRoughBoundingRadius();
	Vector3f center        = model->getRoughCenter();
	Vector3f* vecPtr       = &center;

	if (mDraw2DCreature->getObjType() == OBJTYPE_Honey) {
		modelRadius *= 1.5f;
	}

	if (mDraw2DCreature->getObjType() == OBJTYPE_Pellet) {
		Pellet* p = (Pellet*)mDraw2DCreature;
		if (p->getKind() == PELTYPE_TREASURE) {
			int configIdx = p->getConfigIndex();
			for (int i = 0; asArrayOtakara[i].a != -1; i++) {
				if (configIdx == asArrayOtakara[i].a) {
					modelRadius /= asArrayOtakara[i].b;
					break;
				}
			}
		} else {
			p->getKind();
		}
	}

	f32 properDist = mTreasureZoomCamera->calcProperDistance(20.0f, modelRadius);
	Vector3f pos(0.0f, center.length(), 0.0f);
	mTreasureZoomCamera->init(properDist, properDist * JMath::sincosTable_.mTable[256].first, pos, mControllerP1);
}

/*
 * --INFO--
 * Address:	8023B80C
 * Size:	000258
 */
void BaseGameSection::startKantei2D()
{
	if (mDraw2DCreature->isPellet()) {
		Pellet* obj = static_cast<Pellet*>(mDraw2DCreature);
		if (obj->getKind() == PELTYPE_TREASURE || obj->getKind() == PELTYPE_UPGRADE) {
			og::Screen::DispMemberKantei disp;
			PelletConfig* config  = obj->mConfig;
			int totalmoney        = playData->mPokoCount;
			int cavemoney         = playData->mCavePokoCount;
			disp.mPelletValue     = config->mParams.mMoney.mData;
			disp.mDelegate        = mKanteiDelegate;
			disp.mPelletMessageID = config->mParams.mMessage.mData;

			u32 idk1, idk2;
			P2JME::convertU64ToMessageID(disp.mPelletMessageID, &idk1, &idk2);

			disp.mTotalPokosCave = cavemoney;
			disp.mTotalPokos     = totalmoney + cavemoney;
			disp.mPelletOffset   = PelletList::Mgr::getOffsetFromDictionaryNo(obj->mConfig->mParams.mDictionary.mData - 1);
			if (gameSystem->isMultiplayerMode()) {
				disp.mSecondaryController = mControllerP2;
			} else {
				disp.mSecondaryController = nullptr;
			}
			Screen::gGame2DMgr->setGamePad(mControllerP1);
			Screen::gGame2DMgr->open_Kantei(disp);
		} else {
			og::Screen::DispMemberSpecialItem disp;
			disp.mDelegate = mKanteiDelegate;
			Screen::gGame2DMgr->setGamePad(mControllerP1);
			Screen::gGame2DMgr->open_SpecialItem(disp);
		}

	} else {
		og::Screen::DispMemberSpecialItem disp;
		disp.mDelegate = mKanteiDelegate;
		Screen::gGame2DMgr->setGamePad(mControllerP1);
		Screen::gGame2DMgr->open_SpecialItem(disp);
	}
}

/*
 * --INFO--
 * Address:	8023BA64
 * Size:	0000CC
 */
void BaseGameSection::onKanteiDone(Rectf& rect)
{
	f32 oldy = rect.p1.y;
	f32 oldx = rect.p1.x;
	f32 test = (oldy + oldx) * 0.5f;
	// startZoomWindow();
	u16 x = sys->getRenderModeObj()->fbWidth;
	u16 y = sys->getRenderModeObj()->efbHeight;

	f32 offs = 0.0f;
	f32 newy = -(y * 0.5f - test);
	Rectf newrect(0.0f, newy, x + offs, newy + y);
	mTreasureGetViewport->setRect(newrect);
	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	lfs      f3, 4(r4)
	lfs      f2, 0xc(r4)
	lfs      f1, 0(r4)
	lfs      f0, 8(r4)
	fadds    f3, f3, f2
	lfs      f2, lbl_8051A584@sda21(r2)
	fadds    f0, f1, f0
	fmuls    f1, f3, f2
	fmuls    f0, f0, f2
	stfs     f1, 0xc(r1)
	stfs     f0, 8(r1)
	bl       startZoomWindow__Q24Game15BaseGameSectionFv
	bl       getRenderModeObj__6SystemFv
	lhz      r31, 4(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r3, 6(r3)
	lis      r0, 0x4330
	lfs      f2, lbl_8051A578@sda21(r2)
	addi     r4, r1, 0x10
	stw      r3, 0x24(r1)
	lfd      f3, lbl_8051A588@sda21(r2)
	stw      r0, 0x20(r1)
	lfs      f1, lbl_8051A584@sda21(r2)
	lfd      f0, 0x20(r1)
	stw      r31, 0x2c(r1)
	fsubs    f4, f0, f3
	lfs      f0, 0xc(r1)
	stw      r0, 0x28(r1)
	fnmsubs  f5, f1, f4, f0
	lfd      f0, 0x28(r1)
	stfs     f2, 0x10(r1)
	fsubs    f1, f0, f3
	fadds    f0, f5, f4
	stfs     f5, 0x14(r1)
	fadds    f1, f2, f1
	stfs     f0, 0x1c(r1)
	stfs     f1, 0x18(r1)
	lwz      r3, 0x138(r30)
	bl       "setRect__8ViewportFR7Rect<f>"
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023BB30
 * Size:	000114
 */
void BaseGameSection::ZoomCamera::init(f32 dist1, f32 dist2, Vector3f& pos, Controller* control)
{
	mController = control;
	f32 angle   = HALF_PI;
	f32 dist    = dist2 / dist1;
	mAngleX     = HALF_PI;
	if (dist >= 1.0f) {
		angle = HALF_PI;
	} else if (dist <= -1.0f) {
		angle = -HALF_PI;
	} else if (dist < 0.0f) {
		angle = -JMath::asinAcosTable_.mTable[(u32)(-dist * 1023.5f)];
	} else {
		angle = JMath::asinAcosTable_.mTable[(u32)(dist * 1023.5f)];
	}
	mAngleY = angle;
	_1A8    = angle;

	_1A0 = dist1;
	_1A4 = dist1;
	_1A0 *= 0.75f;
	mLookAtPosition = pos;
	makeLookAt();
}

/*
 * --INFO--
 * Address:	8023BC44
 * Size:	0002B0
 */
void BaseGameSection::ZoomCamera::makeLookAt()
{
	f32 sinY    = sinf(mAngleY);
	f32 hFactor = sinY * _1A0;

	f32 cosY = cosf(mAngleY);
	f32 y    = cosY * _1A0;

	f32 sinX = sinf(mAngleX);
	f32 x    = hFactor * sinX;

	f32 cosX = cosf(mAngleX);
	f32 z    = hFactor * cosX;

	mPosition = Vector3f(mLookAtPosition.x + x, mLookAtPosition.y + y, mLookAtPosition.z + z);

	f32 val1 = sinf(mAngleX);
	f32 z2   = -val1 * cosf(mAngleY);

	f32 y2 = sinf(mAngleY);

	f32 val2 = cosf(mAngleX);
	f32 x2   = -val2 * cosf(mAngleY);

	_18C = Vector3f(x2, y2, z2);
	/*
	stwu     r1, -0x70(r1)
	lfs      f0, lbl_8051A578@sda21(r2)
	lfs      f3, 0x19c(r3)
	fcmpo    cr0, f3, f0
	bge      lbl_8023BC84
	lfs      f0, lbl_8051A5A8@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 8(r1)
	lwz      r0, 0xc(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f1, f0
	b        lbl_8023BCA8

lbl_8023BC84:
	lfs      f0, lbl_8051A5AC@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r4, r4, sincosTable___5JMath@l
	fmuls    f0, f3, f0
	fctiwz   f0, f0
	stfd     f0, 0x10(r1)
	lwz      r0, 0x14(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0

lbl_8023BCA8:
	lfs      f4, 0x1a0(r3)
	lfs      f0, lbl_8051A578@sda21(r2)
	fmuls    f7, f4, f1
	fcmpo    cr0, f3, f0
	bge      lbl_8023BCC0
	fneg     f3, f3

lbl_8023BCC0:
	lfs      f2, lbl_8051A5AC@sda21(r2)
	lis      r4, sincosTable___5JMath@ha
	addi     r5, r4, sincosTable___5JMath@l
	lfs      f6, 0x198(r3)
	fmuls    f1, f3, f2
	lfs      f0, lbl_8051A578@sda21(r2)
	addi     r4, r5, 4
	fcmpo    cr0, f6, f0
	fctiwz   f0, f1
	stfd     f0, 0x18(r1)
	lwz      r0, 0x1c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fmuls    f8, f4, f0
	bge      lbl_8023BD20
	lfs      f0, lbl_8051A5A8@sda21(r2)
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f1, f0
	b        lbl_8023BD38

lbl_8023BD20:
	fmuls    f0, f6, f2
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0

lbl_8023BD38:
	lfs      f0, lbl_8051A578@sda21(r2)
	fmuls    f5, f7, f1
	fcmpo    cr0, f6, f0
	bge      lbl_8023BD4C
	fneg     f6, f6

lbl_8023BD4C:
	lfs      f2, lbl_8051A5AC@sda21(r2)
	lfs      f4, 0x188(r3)
	fmuls    f1, f6, f2
	lfs      f0, 0x184(r3)
	lfs      f3, 0x180(r3)
	fadds    f4, f4, f5
	fadds    f6, f0, f8
	lfs      f0, lbl_8051A578@sda21(r2)
	fctiwz   f1, f1
	stfd     f1, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0
	fmuls    f1, f7, f1
	fadds    f1, f3, f1
	stfs     f1, 0x174(r3)
	stfs     f6, 0x178(r3)
	stfs     f4, 0x17c(r3)
	lfs      f6, 0x198(r3)
	fcmpo    cr0, f6, f0
	bge      lbl_8023BDCC
	lfs      f0, lbl_8051A5A8@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f0, f6, f0
	fctiwz   f0, f0
	stfd     f0, 0x38(r1)
	lwz      r0, 0x3c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f1, f0
	b        lbl_8023BDEC

lbl_8023BDCC:
	fmuls    f0, f6, f2
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x40(r1)
	lwz      r0, 0x44(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r5, r0

lbl_8023BDEC:
	lfs      f5, 0x19c(r3)
	lfs      f0, lbl_8051A578@sda21(r2)
	fmr      f4, f5
	fcmpo    cr0, f5, f0
	bge      lbl_8023BE04
	fneg     f4, f5

lbl_8023BE04:
	lfs      f2, lbl_8051A5AC@sda21(r2)
	fneg     f3, f1
	lfs      f0, lbl_8051A578@sda21(r2)
	fmuls    f1, f4, f2
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x48(r1)
	lwz      r0, 0x4c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fmuls    f3, f3, f0
	bge      lbl_8023BE60
	lfs      f0, lbl_8051A5A8@sda21(r2)
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x50(r1)
	lwz      r0, 0x54(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r5, r0
	fneg     f2, f0
	b        lbl_8023BE80

lbl_8023BE60:
	fmuls    f0, f5, f2
	lis      r5, sincosTable___5JMath@ha
	addi     r5, r5, sincosTable___5JMath@l
	fctiwz   f0, f0
	stfd     f0, 0x58(r1)
	lwz      r0, 0x5c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f2, r5, r0

lbl_8023BE80:
	lfs      f0, lbl_8051A578@sda21(r2)
	fcmpo    cr0, f6, f0
	bge      lbl_8023BE90
	fneg     f6, f6

lbl_8023BE90:
	lfs      f1, lbl_8051A5AC@sda21(r2)
	lfs      f0, lbl_8051A578@sda21(r2)
	fmuls    f1, f6, f1
	fcmpo    cr0, f5, f0
	fctiwz   f0, f1
	stfd     f0, 0x60(r1)
	lwz      r0, 0x64(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f1, r4, r0
	bge      lbl_8023BEBC
	fneg     f5, f5

lbl_8023BEBC:
	lfs      f0, lbl_8051A5AC@sda21(r2)
	fneg     f1, f1
	fmuls    f0, f5, f0
	fctiwz   f0, f0
	stfd     f0, 0x68(r1)
	lwz      r0, 0x6c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fmuls    f0, f1, f0
	stfs     f0, 0x18c(r3)
	stfs     f2, 0x190(r3)
	stfs     f3, 0x194(r3)
	addi     r1, r1, 0x70
	blr
	*/
}

/*
 * --INFO--
 * Address:	8023BEF4
 * Size:	000164
 */
bool BaseGameSection::ZoomCamera::doUpdate()
{
	bool check1 = false; // r4
	bool check2 = false; // r5

	f32 x   = mController->mMStick.mXPos;
	f32 val = x; // f3

	f64 absX = fabs(x);
	if ((f32)absX < 0.2f) {
		val = 0.0f;
	}

	bool cStickXCheck = (f32)absX < 0.2f;
	if (!cStickXCheck) {
		check1 = true;
	}

	mAngleX -= (PI / 25) * val;

	if (mAngleX >= TAU) {
		mAngleX -= TAU;
	} else if (mAngleX < 0.0f) {
		mAngleX += TAU;
	}

	f32 y    = mController->mMStick.mYPos;
	f32 val2 = y; // f3

	f64 absY = fabs(y);
	if ((f32)absY < 0.2f) {
		val2 = 0.0f;
	}

	bool cStickYCheck = (f32)absY < 0.2f;
	if (!cStickYCheck) {
		check2 = true;
	}

	mAngleY -= (PI / 50) * val2;

	f32 lowerLim = _1A8 - TORADIANS(30.6f);
	f32 upperLim = TORADIANS(30.6f) + _1A8;

	if (mAngleY < lowerLim) {
		mAngleY = lowerLim;
		check2  = false;
	} else if (mAngleY > upperLim) {
		mAngleY = upperLim;
		check2  = false;
	}

	if (check1 || check2) {
		PSSystem::spSysIF->playSystemSe(PSSE_SY_OTAKARA_SCROLL, 0);
	}
	makeLookAt();
}

/*
 * --INFO--
 * Address:	8023C058
 * Size:	000410
 */
void BaseGameSection::do_drawOtakaraWindow(Graphics& gfx)
{
	if (!gameSystem->isZukanMode()) {
		f32 time = sys->mDeltaTime;
		if (mDraw2DCreature && mDraw2DCreature->isPellet()) {
			Pellet* obj = static_cast<Pellet*>(mDraw2DCreature);
			if ((obj->getKind() == PELTYPE_TREASURE || obj->getKind() == PELTYPE_UPGRADE) && !Screen::gGame2DMgr->update_Kantei()
			    && mTreasureGetState == 2) {
				mTreasureGetState = 4;
				if (moviePlayer) {
					moviePlayer->unsuspend(1, false);
				}
			}
		}
		switch (mTreasureGetState) {
		case 0:
			return;
		case 1:
			mDraw2DCreatureScale += time * 2.0f;
			if (mDraw2DCreatureScale >= 1.0f) {
				mDraw2DCreatureScale = 1.0f;
				mTreasureGetState    = 2;
				_144                 = 6.0f;
			}
			break;
		case 2:
			break;
		case 3:
			mDraw2DCreatureScale = -(time * 10.0f - mDraw2DCreatureScale);
			mDraw2DCreatureScale = 0.0f;
			mDraw2DCreatureScale = 0.0f; // you know, just to be sure
			mTreasureGetState    = 0;
			if (moviePlayer) {
				moviePlayer->unsuspend(1, false);
			}
		}
		mTreasureLightMgr->update();
		Matrixf mtx;
		PSMTXIdentity(mtx.mMatrix.mtxView);
		mTreasureLightMgr->set(mtx);
		mTreasureZoomCamera->update();

		u16 y = sys->getRenderModeObj()->efbHeight;
		u16 x = sys->getRenderModeObj()->fbWidth;
		Rectf bounds(0.0f, 0.0f, x, y);
		gfx.clearZBuffer(bounds);

		Mtx mtx2;
		PSMTXCopy(j3dSys.mViewMtx, mtx2);
		Viewport* vp = mTreasureGetViewport;
		if (mDraw2DCreature) {
			vp->setJ3DViewMtx(false);
			Camera* cam = mTreasureZoomCamera;
			cam->setProjection();
			Matrixf* cammtx = cam->getViewMatrix(false);
			PSMTXCopy(cammtx->mMatrix.mtxView, j3dSys.mViewMtx);

			mDraw2DCreature->mLod.setFlag(AILOD_IsVisVP0 | AILOD_IsVisVP1 | AILOD_IsVisible);

			PSMTXIdentity(mDraw2DCreature->mBaseTrMatrix.mMatrix.mtxView);
			f32 scale = mDraw2DCreatureScale;
			scale *= scale;
			Vec scaleVec;
			scaleVec.x = scale;
			scaleVec.y = scale;
			scaleVec.z = scale;

			Vec* vecPtr = &scaleVec;

			Mtx mtx;
			PSMTXIdentity(mtx);
			PSMTXCopy(mtx, mDraw2DCreature->mModel->mJ3dModel->mPosMtx);
			mDraw2DCreature->doSetView(0);
			mDraw2DCreature->mModel->mJ3dModel->mModelScale = scaleVec;
			mDraw2DCreature->mModel->mJ3dModel->calc();

			SysShape::Model::setViewCalcModeInd();
			mDraw2DCreature->doViewCalc();
			SysShape::Model::setViewCalcModeImm();
			mDraw2DCreature->doViewCalc();
			setDrawBuffer(5);
			mDraw2DCreature->doEntry();
			setDrawBuffer(0);
		}
		vp->setViewport();
		vp->setProjection();

		mDrawBuffer1->get(5)->draw();
		mDrawBuffer2->get(5)->draw();
		mDrawBuffer1->get(5)->frameInit();
		mDrawBuffer2->get(5)->frameInit();

		PSMTXCopy(mtx2, j3dSys.mViewMtx);
		j3dSys.reinitGX();
	}
}

} // namespace Game
