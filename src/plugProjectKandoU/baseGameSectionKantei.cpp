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
	Vector3f length(0.0f, vecPtr->length(), 0.0f);
	mTreasureZoomCamera->init(properDist, properDist * JMath::sincosTable_.mTable[256].first, length, mControllerP1);
	/*
	stwu     r1, -0x50(r1)
	mflr     r0
	stw      r0, 0x54(r1)
	stfd     f31, 0x40(r1)
	psq_st   f31, 72(r1), 0, qr0
	stw      r31, 0x3c(r1)
	stw      r30, 0x38(r1)
	mr       r30, r3
	li       r0, 1
	stw      r0, 0x134(r3)
	lfs      f0, lbl_8051A578@sda21(r2)
	stfs     f0, 0x140(r3)
	lwz      r3, 0x13c(r3)
	lwz      r31, 0x174(r3)
	mr       r3, r31
	bl       getRoughBoundingRadius__Q28SysShape5ModelFv
	fmr      f31, f1
	mr       r4, r31
	addi     r3, r1, 8
	bl       getRoughCenter__Q28SysShape5ModelFv
	lwz      r3, 0x13c(r30)
	lfs      f2, 8(r1)
	lwz      r12, 0(r3)
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	lwz      r12, 0x28(r12)
	stfs     f2, 0x20(r1)
	stfs     f1, 0x24(r1)
	stfs     f0, 0x28(r1)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x406
	bne      lbl_8023B6BC
	lfs      f0, lbl_8051A57C@sda21(r2)
	fmuls    f31, f31, f0

lbl_8023B6BC:
	lwz      r3, 0x13c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x10
	cmplwi   r0, 0x401
	bne      lbl_8023B760
	lwz      r31, 0x13c(r30)
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	bne      lbl_8023B74C
	mr       r3, r31
	bl       getConfigIndex__Q24Game6PelletFv
	li       r5, 0
	addi     r4, r13, asArrayOtakara__4Game@sda21
	b        lbl_8023B73C

lbl_8023B714:
	cmpw     r3, r0
	bne      lbl_8023B734
	slwi     r0, r5, 3
	addi     r3, r13, asArrayOtakara__4Game@sda21
	add      r3, r3, r0
	lfs      f0, 4(r3)
	fdivs    f31, f31, f0
	b        lbl_8023B760

lbl_8023B734:
	addi     r4, r4, 8
	addi     r5, r5, 1

lbl_8023B73C:
	lwz      r0, 0(r4)
	cmpwi    r0, -1
	bne      lbl_8023B714
	b        lbl_8023B760

lbl_8023B74C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl

lbl_8023B760:
	fmr      f2, f31
	lwz      r3, 0x14c(r30)
	lfs      f1, lbl_8051A580@sda21(r2)
	bl       calcProperDistance__6CameraFff
	lfs      f5, 0x20(r1)
	lfs      f2, 0x24(r1)
	fmuls    f0, f5, f5
	lfs      f3, 0x28(r1)
	fmuls    f4, f2, f2
	lfs      f2, lbl_8051A578@sda21(r2)
	fmuls    f3, f3, f3
	fadds    f0, f0, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8023B7B8
	fmadds   f0, f5, f5, f4
	fadds    f0, f3, f0
	fcmpo    cr0, f0, f2
	ble      lbl_8023B7BC
	frsqrte  f2, f0
	fmuls    f0, f2, f0
	b        lbl_8023B7BC

lbl_8023B7B8:
	fmr      f0, f2

lbl_8023B7BC:
	lis      r3, sincosTable___5JMath@ha
	lfs      f3, lbl_8051A578@sda21(r2)
	addi     r3, r3, sincosTable___5JMath@l
	stfs     f0, 0x18(r1)
	lfs      f0, 0x800(r3)
	addi     r4, r1, 0x14
	stfs     f3, 0x14(r1)
	fmuls    f2, f1, f0
	stfs     f3, 0x1c(r1)
	lwz      r3, 0x14c(r30)
	lwz      r5, 0x10c(r30)
	bl "init__Q34Game15BaseGameSection10ZoomCameraFffR10Vector3<f>P10Controller"
	psq_l    f31, 72(r1), 0, qr0
	lwz      r0, 0x54(r1)
	lfd      f31, 0x40(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	mtlr     r0
	addi     r1, r1, 0x50
	blr
	*/
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
		if (dist <= -1.0f) {
			angle = -HALF_PI;
		} else if (dist < 0.0f) {
			angle = -JMath::asinAcosTable_.mTable[(u32)(-dist * 1023.5f)];
		} else {
			angle = JMath::asinAcosTable_.mTable[(u32)(dist * 1023.5f)];
		}
	}
	mAngleY = angle;
	_1A8    = angle;

	_1A0 = dist1;
	_1A4 = dist1;
	_1A0 *= 0.75f;
	mLookAtPosition = pos;
	makeLookAt();
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  fmr       f31, f1
	  mr        r30, r3
	  lfs       f0, -0x3DCC(r2)
	  mr        r31, r4
	  stw       r5, 0x1AC(r3)
	  fdivs     f2, f2, f31
	  lfs       f1, -0x3DD0(r2)
	  stfs      f1, 0x198(r3)
	  fcmpo     cr0, f2, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x4C
	  b         .loc_0xB4

	.loc_0x4C:
	  lfs       f0, -0x3DC8(r2)
	  fcmpo     cr0, f2, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x64
	  lfs       f1, -0x3DC4(r2)
	  b         .loc_0xB4

	.loc_0x64:
	  lfs       f0, -0x3DE8(r2)
	  fcmpo     cr0, f2, f0
	  bge-      .loc_0x98
	  fneg      f0, f2
	  lfs       f1, -0x3DC0(r2)
	  fmuls     f1, f1, f0
	  bl        -0x17A060
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfsx      f0, r3, r0
	  fneg      f1, f0
	  b         .loc_0xB4

	.loc_0x98:
	  lfs       f0, -0x3DC0(r2)
	  fmuls     f1, f0, f2
	  bl        -0x17A084
	  lis       r4, 0x8051
	  rlwinm    r0,r3,2,0,29
	  subi      r3, r4, 0x1E00
	  lfsx      f1, r3, r0

	.loc_0xB4:
	  stfs      f1, 0x19C(r30)
	  mr        r3, r30
	  lfs       f0, -0x3DBC(r2)
	  stfs      f1, 0x1A8(r30)
	  stfs      f31, 0x1A0(r30)
	  stfs      f31, 0x1A4(r30)
	  lfs       f1, 0x1A0(r30)
	  fmuls     f0, f1, f0
	  stfs      f0, 0x1A0(r30)
	  lfs       f0, 0x0(r31)
	  stfs      f0, 0x180(r30)
	  lfs       f0, 0x4(r31)
	  stfs      f0, 0x184(r30)
	  lfs       f0, 0x8(r31)
	  stfs      f0, 0x188(r30)
	  bl        .loc_0x114
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x114:
	*/
}

/*
 * --INFO--
 * Address:	8023BC44
 * Size:	0002B0
 */
void BaseGameSection::ZoomCamera::makeLookAt()
{
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
	PSSystem::spSysIF->playSystemSe(PSSE_SY_OTAKARA_SCROLL, 0);
	makeLookAt();
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	lfs      f0, lbl_8051A5B0@sda21(r2)
	li       r4, 0
	stw      r0, 0x14(r1)
	li       r5, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	lwz      r3, 0x1ac(r3)
	lfs      f1, 0x48(r3)
	fabs     f2, f1
	fmr      f3, f1
	frsp     f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8023BF34
	lfs      f3, lbl_8051A578@sda21(r2)

lbl_8023BF34:
	frsp     f1, f2
	lfs      f0, lbl_8051A5B0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_8023BF50
	li       r4, 1

lbl_8023BF50:
	lfs      f2, lbl_8051A5B4@sda21(r2)
	lfs      f0, 0x198(r31)
	lfs      f1, lbl_8051A5B8@sda21(r2)
	fnmsubs  f0, f2, f3, f0
	stfs     f0, 0x198(r31)
	lfs      f2, 0x198(r31)
	fcmpo    cr0, f2, f1
	cror     2, 1, 2
	bne      lbl_8023BF80
	fsubs    f0, f2, f1
	stfs     f0, 0x198(r31)
	b        lbl_8023BF94

lbl_8023BF80:
	lfs      f0, lbl_8051A578@sda21(r2)
	fcmpo    cr0, f2, f0
	bge      lbl_8023BF94
	fadds    f0, f2, f1
	stfs     f0, 0x198(r31)

lbl_8023BF94:
	lwz      r3, 0x1ac(r31)
	lfs      f0, lbl_8051A5B0@sda21(r2)
	lfs      f1, 0x4c(r3)
	fabs     f2, f1
	fmr      f3, f1
	frsp     f1, f2
	fcmpo    cr0, f1, f0
	bge      lbl_8023BFB8
	lfs      f3, lbl_8051A578@sda21(r2)

lbl_8023BFB8:
	frsp     f1, f2
	lfs      f0, lbl_8051A5B0@sda21(r2)
	fcmpo    cr0, f1, f0
	mfcr     r0
	rlwinm.  r0, r0, 1, 0x1f, 0x1f
	bne      lbl_8023BFD4
	li       r5, 1

lbl_8023BFD4:
	lfs      f2, lbl_8051A5BC@sda21(r2)
	lfs      f1, 0x19c(r31)
	lfs      f0, lbl_8051A5C0@sda21(r2)
	fnmsubs  f1, f2, f3, f1
	stfs     f1, 0x19c(r31)
	lfs      f1, 0x1a8(r31)
	lfs      f2, 0x19c(r31)
	fsubs    f3, f1, f0
	fadds    f0, f0, f1
	fcmpo    cr0, f2, f3
	bge      lbl_8023C00C
	stfs     f3, 0x19c(r31)
	li       r5, 0
	b        lbl_8023C01C

lbl_8023C00C:
	fcmpo    cr0, f2, f0
	ble      lbl_8023C01C
	stfs     f0, 0x19c(r31)
	li       r5, 0

lbl_8023C01C:
	clrlwi.  r0, r4, 0x18
	bne      lbl_8023C02C
	clrlwi.  r0, r5, 0x18
	beq      lbl_8023C03C

lbl_8023C02C:
	lwz      r3, spSysIF__8PSSystem@sda21(r13)
	li       r4, 0x1084
	li       r5, 0
	bl       playSystemSe__Q28PSSystem5SysIFFUlUl

lbl_8023C03C:
	mr       r3, r31
	bl       makeLookAt__Q34Game15BaseGameSection10ZoomCameraFv
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
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
		case 3:
			mDraw2DCreatureScale = -(time * 10.0f - mDraw2DCreatureScale);
			mDraw2DCreatureScale = 0.0f;
			mDraw2DCreatureScale = 0.0f; // you know, just to be sure
			mTreasureGetState    = 0;
			if (moviePlayer) {
				moviePlayer->unsuspend(1, false);
			}
			break;
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

			mDraw2DCreature->mLod.setFlag(AILOD_IsVisVP1 | AILOD_IsVisVP2 | AILOD_IsVisible);

			PSMTXIdentity(mDraw2DCreature->mBaseTrMatrix.mMatrix.mtxView);
			Vec scale;
			scale.x = (mDraw2DCreatureScale * mDraw2DCreatureScale);
			scale.y = (mDraw2DCreatureScale * mDraw2DCreatureScale);
			scale.z = (mDraw2DCreatureScale * mDraw2DCreatureScale);

			Mtx mtx;
			PSMTXIdentity(mtx);
			PSMTXCopy(mtx, mDraw2DCreature->mModel->mJ3dModel->mPosMtx);
			mDraw2DCreature->setAlive(false);
			mDraw2DCreature->mModel->mJ3dModel->mModelScale = scale;
			mDraw2DCreature->mModel->mJ3dModel->calcMaterial();

			SysShape::Model::setViewCalcModeInd();
			mDraw2DCreature->isAlive();
			SysShape::Model::setViewCalcModeImm();
			mDraw2DCreature->isAlive();
			setDrawBuffer(5);
			mDraw2DCreature->isAlive();
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
	/*
	stwu     r1, -0xf0(r1)
	mflr     r0
	stw      r0, 0xf4(r1)
	stfd     f31, 0xe0(r1)
	psq_st   f31, 232(r1), 0, qr0
	stw      r31, 0xdc(r1)
	stw      r30, 0xd8(r1)
	stw      r29, 0xd4(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	mr       r30, r3
	mr       r31, r4
	lwz      r0, 0x44(r5)
	cmpwi    r0, 4
	beq      lbl_8023C444
	lwz      r3, 0x13c(r30)
	lwz      r4, sys@sda21(r13)
	cmplwi   r3, 0
	lfs      f31, 0x54(r4)
	beq      lbl_8023C13C
	lwz      r12, 0(r3)
	lwz      r12, 0x80(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8023C13C
	lwz      r29, 0x13c(r30)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 3
	beq      lbl_8023C100
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi   r0, r3, 0x18
	cmplwi   r0, 4
	bne      lbl_8023C13C

lbl_8023C100:
	lwz      r3, gGame2DMgr__6Screen@sda21(r13)
	bl       update_Kantei__Q26Screen9Game2DMgrFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8023C13C
	lwz      r0, 0x134(r30)
	cmpwi    r0, 2
	bne      lbl_8023C13C
	li       r0, 4
	stw      r0, 0x134(r30)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8023C13C
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb

lbl_8023C13C:
	lwz      r0, 0x134(r30)
	cmpwi    r0, 2
	beq      lbl_8023C1E4
	bge      lbl_8023C15C
	cmpwi    r0, 0
	beq      lbl_8023C444
	bge      lbl_8023C16C
	b        lbl_8023C1E4

lbl_8023C15C:
	cmpwi    r0, 4
	bge      lbl_8023C1E4
	b        lbl_8023C1A8
	b        lbl_8023C444

lbl_8023C16C:
	lfs      f2, lbl_8051A5C4@sda21(r2)
	lfs      f1, 0x140(r30)
	lfs      f0, lbl_8051A594@sda21(r2)
	fmadds   f1, f2, f31, f1
	stfs     f1, 0x140(r30)
	lfs      f1, 0x140(r30)
	fcmpo    cr0, f1, f0
	cror     2, 1, 2
	bne      lbl_8023C1E4
	stfs     f0, 0x140(r30)
	li       r0, 2
	lfs      f0, lbl_8051A5C8@sda21(r2)
	stw      r0, 0x134(r30)
	stfs     f0, 0x144(r30)
	b        lbl_8023C1E4

lbl_8023C1A8:
	lfs      f2, lbl_8051A5CC@sda21(r2)
	li       r0, 0
	lfs      f1, 0x140(r30)
	lfs      f0, lbl_8051A578@sda21(r2)
	fnmsubs  f1, f2, f31, f1
	stfs     f1, 0x140(r30)
	stfs     f0, 0x140(r30)
	stfs     f0, 0x140(r30)
	stw      r0, 0x134(r30)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_8023C1E4
	li       r4, 1
	li       r5, 0
	bl       unsuspend__Q24Game11MoviePlayerFlb

lbl_8023C1E4:
	lwz      r3, 0xf8(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	addi     r3, r1, 0x84
	bl       PSMTXIdentity
	lwz      r3, 0xf8(r30)
	addi     r4, r1, 0x84
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x14c(r30)
	bl       update__6CameraFv
	bl       getRenderModeObj__6SystemFv
	lhz      r29, 6(r3)
	bl       getRenderModeObj__6SystemFv
	lhz      r4, 4(r3)
	lis      r0, 0x4330
	lfs      f3, lbl_8051A578@sda21(r2)
	mr       r3, r31
	stw      r4, 0xbc(r1)
	addi     r4, r1, 0x14
	lfd      f2, lbl_8051A588@sda21(r2)
	stw      r0, 0xb8(r1)
	lfd      f0, 0xb8(r1)
	stw      r29, 0xc4(r1)
	fsubs    f1, f0, f2
	stw      r0, 0xc0(r1)
	lfd      f0, 0xc0(r1)
	stfs     f3, 0x14(r1)
	fsubs    f0, f0, f2
	stfs     f3, 0x18(r1)
	stfs     f1, 0x1c(r1)
	stfs     f0, 0x20(r1)
	bl       "clearZBuffer__8GraphicsFR7Rect<f>"
	lis      r3, j3dSys@ha
	addi     r4, r1, 0x54
	addi     r3, r3, j3dSys@l
	bl       PSMTXCopy
	lwz      r0, 0x13c(r30)
	lwz      r29, 0x138(r30)
	cmplwi   r0, 0
	beq      lbl_8023C3D8
	mr       r3, r29
	li       r4, 0
	bl       setJ3DViewMtx__8ViewportFb
	lwz      r31, 0x14c(r30)
	mr       r3, r31
	bl       setProjection__6CameraFv
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	lis      r4, j3dSys@ha
	addi     r4, r4, j3dSys@l
	bl       PSMTXCopy
	lwz      r3, 0x13c(r30)
	lbz      r0, 0xd8(r3)
	ori      r0, r0, 0x34
	stb      r0, 0xd8(r3)
	lwz      r3, 0x13c(r30)
	addi     r3, r3, 0x138
	bl       PSMTXIdentity
	lfs      f0, 0x140(r30)
	addi     r3, r1, 0x24
	fmuls    f0, f0, f0
	stfs     f0, 8(r1)
	stfs     f0, 0xc(r1)
	stfs     f0, 0x10(r1)
	bl       PSMTXIdentity
	lwz      r4, 0x13c(r30)
	addi     r3, r1, 0x24
	lwz      r4, 0x174(r4)
	lwz      r4, 8(r4)
	addi     r4, r4, 0x24
	bl       PSMTXCopy
	lwz      r3, 0x13c(r30)
	li       r4, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x13c(r30)
	lfs      f2, 8(r1)
	lwz      r3, 0x174(r3)
	lfs      f1, 0xc(r1)
	lwz      r3, 8(r3)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f0, 0x20(r3)
	lwz      r3, 0x13c(r30)
	lwz      r3, 0x174(r3)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	bl       setViewCalcModeInd__Q28SysShape5ModelFv
	lwz      r3, 0x13c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	bl       setViewCalcModeImm__Q28SysShape5ModelFv
	lwz      r3, 0x13c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x48(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 5
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi
	lwz      r3, 0x13c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	mr       r3, r30
	li       r4, 0
	bl       setDrawBuffer__Q24Game15BaseGameSectionFi

lbl_8023C3D8:
	mr       r3, r29
	bl       setViewport__8ViewportFv
	mr       r3, r29
	bl       setProjection__8ViewportFv
	lwz      r3, 0x12c(r30)
	li       r4, 5
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x130(r30)
	li       r4, 5
	bl       get__Q23Sys11DrawBuffersFi
	bl       draw__Q23Sys10DrawBufferFv
	lwz      r3, 0x12c(r30)
	li       r4, 5
	bl       get__Q23Sys11DrawBuffersFi
	bl       frameInit__Q23Sys10DrawBufferFv
	lwz      r3, 0x130(r30)
	li       r4, 5
	bl       get__Q23Sys11DrawBuffersFi
	bl       frameInit__Q23Sys10DrawBufferFv
	lis      r4, j3dSys@ha
	addi     r3, r1, 0x54
	addi     r4, r4, j3dSys@l
	bl       PSMTXCopy
	lis      r3, j3dSys@ha
	addi     r3, r3, j3dSys@l
	bl       reinitGX__6J3DSysFv

lbl_8023C444:
	psq_l    f31, 232(r1), 0, qr0
	lwz      r0, 0xf4(r1)
	lfd      f31, 0xe0(r1)
	lwz      r31, 0xdc(r1)
	lwz      r30, 0xd8(r1)
	lwz      r29, 0xd4(r1)
	mtlr     r0
	addi     r1, r1, 0xf0
	blr
	*/
}

} // namespace Game
