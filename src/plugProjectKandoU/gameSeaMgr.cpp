#include "Game/seaMgr.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/GameSystem.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "System.h"
#include "nans.h"

static const u32 padding[3] = { 0, 0, 0 };

namespace Game {

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
WaterBox::WaterBox()
    : mFlags(0)
{
	mFlags = 0;
	mFlags |= WBF_Unknown1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B8
 */
AABBWaterBox::AABBWaterBox()
{
	mLoweredAmount    = 0.0f;
	mState            = WaterBox_Active;
	mLoweringGoalDiff = 0.0f;
	_14               = 0.0f;
	mWaterTop         = 0.0f;
	mModel            = nullptr;
	mWaterHeight      = 0.0f;
	mFbTexture        = nullptr;
}

/*
 * --INFO--
 * Address:	801AE448
 * Size:	000028
 */
void AABBWaterBox::startDown(f32 diff)
{
	if (mState != WaterBox_Active) {
		return;
	}
	mLoweringGoalDiff = diff;
	_14               = 0.0f;
	mState            = WaterBox_Lowering;
	mLowerTimer       = 0.0f;
}

/*
 * --INFO--
 * Address:	801AE470
 * Size:	000038
 */
void AABBWaterBox::startUp(f32)
{
	JUT_PANICLINE(167, "‚Ü‚ñ‚¾! startUp\n"); // "Manda"
}

/*
 * --INFO--
 * Address:	801AE4A8
 * Size:	0000B8
 */
inline bool AABBWaterBox::update()
{
	switch (mState) {
	case WaterBox_Lowering:
		mLoweredAmount = -(mLowerTimer * sys->mDeltaTime - mLoweredAmount);
		mLowerTimer += sys->mDeltaTime * 5.0f;
		mWaterHeight = mWaterTop + mLoweredAmount;
		if (mLoweredAmount <= mLoweringGoalDiff) {
			mLoweredAmount = mLoweringGoalDiff;
			mState         = WaterBox_Dead;
			mapMgr->mSeaMgr->delNode(this);
			return true;
		}
		break;
	}
	mWaterHeight = mWaterTop + mLoweredAmount;
	return false;
}

/*
 * --INFO--
 * Address:	801AE560
 * Size:	0001B0
 */
void AABBWaterBox::attachModel(J3DModelData* modelData, Sys::MatTexAnimation* anm, float divide)
{
	mFbTexIndex          = -1;
	mFbTexture           = nullptr;
	mModel               = new SysShape::Model(modelData, 0, 2);
	mModel->mIsAnimating = true;

	mXzPieceSize.x    = FABS(mBounds.mMax.x - mBounds.mMin.x) / divide;
	mXzPieceSize.y    = FABS(mBounds.mMax.z - mBounds.mMin.z) / divide;
	mCenterPosition.x = (mBounds.mMin.x + mBounds.mMax.x) * 0.5f;
	mCenterPosition.z = (mBounds.mMin.z + mBounds.mMax.z) * 0.5f;
	mCenterPosition.y = mWaterTop + mLoweredAmount;
	mMatAnimator.start(anm);
	calcMatrix();
	mWaterHeight = mWaterTop + mLoweredAmount;
	for (u16 i = 0; i < mModel->mJ3dModel->mModelData->mMaterialTable.mTextures->mNum; i++) {
		if (strcmp(mModel->mJ3dModel->mModelData->mMaterialTable.mTextureNames->getName(i), "fbtex_dummy") == 0) {
			mFbTexture  = mModel->mJ3dModel->mModelData->mMaterialTable.mTextures;
			mFbTexIndex = i;
		}
	}
}

/*
 * --INFO--
 * Address:	801AE710
 * Size:	0000A0
 */
void AABBWaterBox::calcMatrix()
{
	if (mModel) {
		mCenterPosition.y = mWaterTop + mLoweredAmount;
		Vector3f v1(mXzPieceSize.x, 1.0f, mXzPieceSize.y);
		Matrixf mtx;
		mtx.makeSRT(v1, Vector3f::zero, mCenterPosition);
		PSMTXCopy(mtx.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
	}
}

/*
 * --INFO--
 * Address:	801AE7B0
 * Size:	000048
 */
void AABBWaterBox::doAnimation()
{
	mMatAnimator.animate(30.0f);
	calcMatrix();
}

/*
 * --INFO--
 * Address:	801AE7F8
 * Size:	000030
 */
void AABBWaterBox::doSetView(int viewportNumber)
{
	if (mModel) {
		mModel->setCurrentViewNo((u16)viewportNumber);
	}
}

/*
 * --INFO--
 * Address:	801AE828
 * Size:	00002C
 */
void AABBWaterBox::doViewCalc()
{
	if (mModel) {
		mModel->viewCalc();
	}
}

/*
 * --INFO--
 * Address:	801AE854
 * Size:	000538
 */
void AABBWaterBox::doEntry()
{
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stw      r31, 0x7c(r1)
	mr       r31, r3
	stw      r30, 0x78(r1)
	lwz      r4, gameSystem__4Game@sda21(r13)
	cmplwi   r4, 0
	beq      lbl_801AE914
	lwz      r3, 0x44(r4)
	cmpwi    r3, 0
	beq      lbl_801AE914
	cmpwi    r3, 4
	beq      lbl_801AE914
	cmpwi    r3, 2
	li       r0, 0
	beq      lbl_801AE8A0
	cmpwi    r3, 3
	bne      lbl_801AE8A4

lbl_801AE8A0:
	li       r0, 1

lbl_801AE8A4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801AE8CC
	cmpwi    r3, 1
	li       r0, 0
	beq      lbl_801AE8C0
	cmpwi    r3, 3
	bne      lbl_801AE8C4

lbl_801AE8C0:
	li       r0, 1

lbl_801AE8C4:
	clrlwi.  r0, r0, 0x18
	beq      lbl_801AE914

lbl_801AE8CC:
	cmplwi   r4, 0
	beq      lbl_801AED74
	mr       r3, r4
	li       r4, 4
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801AED74

lbl_801AE914:
	lwz      r0, 0x44(r4)
	cmpwi    r0, 0
	bne      lbl_801AEB20
	lwz      r30, 0x58(r4)
	lwz      r0, 0xe4(r30)
	cmpwi    r0, 2
	bne      lbl_801AEB20
	cmplwi   r4, 0
	beq      lbl_801AED74
	mr       r3, r4
	li       r4, 4
	bl       setDrawBuffer__Q24Game10GameSystemFi
	addi     r3, r1, 0x48
	bl       PSMTXIdentity
	lwz      r3, 0x50(r31)
	li       r4, 3
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x60(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lfs      f0, 0x48(r1)
	lfs      f1, lbl_80519328@sda21(r2)
	stfs     f0, 0x24(r3)
	lfs      f0, lbl_80519334@sda21(r2)
	lfs      f2, 0x4c(r1)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x50(r1)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x54(r1)
	stfs     f2, 0x30(r3)
	lfs      f2, 0x58(r1)
	stfs     f2, 0x34(r3)
	lfs      f2, 0x5c(r1)
	stfs     f2, 0x38(r3)
	lfs      f2, 0x60(r1)
	stfs     f2, 0x3c(r3)
	lfs      f2, 0x64(r1)
	stfs     f2, 0x40(r3)
	lfs      f2, 0x68(r1)
	stfs     f2, 0x44(r3)
	lfs      f2, 0x6c(r1)
	stfs     f2, 0x48(r3)
	lfs      f2, 0x70(r1)
	stfs     f2, 0x4c(r3)
	lfs      f2, 0x74(r1)
	stfs     f2, 0x50(r3)
	stfs     f1, 0x5c(r3)
	stfs     f1, 0x58(r3)
	stfs     f1, 0x54(r3)
	stfs     f0, 0x60(r3)
	lwz      r4, 0xf4(r30)
	lwz      r3, 0x60(r31)
	lha      r0, 0x64(r31)
	lwz      r4, 0x20(r4)
	lwz      r6, 4(r3)
	rlwinm   r0, r0, 5, 0xb, 0x1a
	lbz      r5, 0(r4)
	add      r6, r6, r0
	stb      r5, 0(r6)
	lbz      r5, 1(r4)
	stb      r5, 1(r6)
	lhz      r5, 2(r4)
	sth      r5, 2(r6)
	lhz      r5, 4(r4)
	sth      r5, 4(r6)
	lbz      r5, 6(r4)
	stb      r5, 6(r6)
	lbz      r5, 7(r4)
	stb      r5, 7(r6)
	lbz      r5, 8(r4)
	stb      r5, 8(r6)
	lbz      r5, 9(r4)
	stb      r5, 9(r6)
	lhz      r5, 0xa(r4)
	sth      r5, 0xa(r6)
	lwz      r5, 0xc(r4)
	stw      r5, 0xc(r6)
	lbz      r5, 0x10(r4)
	stb      r5, 0x10(r6)
	lbz      r5, 0x11(r4)
	stb      r5, 0x11(r6)
	lbz      r5, 0x12(r4)
	stb      r5, 0x12(r6)
	lbz      r5, 0x13(r4)
	stb      r5, 0x13(r6)
	lbz      r5, 0x14(r4)
	stb      r5, 0x14(r6)
	lbz      r5, 0x15(r4)
	stb      r5, 0x15(r6)
	lbz      r5, 0x16(r4)
	stb      r5, 0x16(r6)
	lbz      r5, 0x17(r4)
	stb      r5, 0x17(r6)
	lbz      r5, 0x18(r4)
	stb      r5, 0x18(r6)
	lbz      r5, 0x19(r4)
	stb      r5, 0x19(r6)
	lha      r5, 0x1a(r4)
	sth      r5, 0x1a(r6)
	lwz      r5, 0x1c(r4)
	stw      r5, 0x1c(r6)
	lwz      r5, 4(r3)
	add      r6, r5, r0
	lwz      r5, 0x1c(r6)
	add      r5, r4, r5
	subf     r5, r6, r5
	stw      r5, 0x1c(r6)
	lwz      r3, 4(r3)
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	b        lbl_801AED74

lbl_801AEB20:
	lwz      r3, sys@sda21(r13)
	addi     r4, r1, 8
	lwz      r3, 0x24(r3)
	lwz      r3, 0x25c(r3)
	lwz      r3, 0x44(r3)
	addi     r3, r3, 0xb4
	bl       PSMTX44Copy
	lfs      f5, 0x38(r1)
	lfs      f4, 0x3c(r1)
	lfs      f1, lbl_80519328@sda21(r2)
	lfs      f3, 0x40(r1)
	lfs      f2, 0x44(r1)
	lfs      f0, lbl_80519334@sda21(r2)
	stfs     f5, 0x28(r1)
	stfs     f4, 0x2c(r1)
	stfs     f3, 0x30(r1)
	stfs     f2, 0x34(r1)
	stfs     f1, 0x38(r1)
	stfs     f1, 0x3c(r1)
	stfs     f1, 0x40(r1)
	stfs     f0, 0x44(r1)
	lwz      r0, 0x50(r31)
	cmplwi   r0, 0
	beq      lbl_801AED74
	lwz      r3, gameSystem__4Game@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_801AED5C
	li       r4, 4
	bl       setDrawBuffer__Q24Game10GameSystemFi
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x60(r31)
	cmplwi   r0, 0
	beq      lbl_801AED5C
	lwz      r3, 0x50(r31)
	li       r4, 3
	lwz      r3, 8(r3)
	lwz      r3, 4(r3)
	lwz      r3, 0x60(r3)
	lwz      r3, 0(r3)
	lwz      r3, 0x28(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x50(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r1)
	lfs      f1, lbl_80519328@sda21(r2)
	stfs     f0, 0x24(r3)
	lfs      f0, lbl_80519334@sda21(r2)
	lfs      f2, 0xc(r1)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x10(r1)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x14(r1)
	stfs     f2, 0x30(r3)
	lfs      f2, 0x18(r1)
	stfs     f2, 0x34(r3)
	lfs      f2, 0x1c(r1)
	stfs     f2, 0x38(r3)
	lfs      f2, 0x20(r1)
	stfs     f2, 0x3c(r3)
	lfs      f2, 0x24(r1)
	stfs     f2, 0x40(r3)
	lfs      f2, 0x28(r1)
	stfs     f2, 0x44(r3)
	lfs      f2, 0x2c(r1)
	stfs     f2, 0x48(r3)
	lfs      f2, 0x30(r1)
	stfs     f2, 0x4c(r3)
	lfs      f2, 0x34(r1)
	stfs     f2, 0x50(r3)
	stfs     f1, 0x5c(r3)
	stfs     f1, 0x58(r3)
	stfs     f1, 0x54(r3)
	stfs     f0, 0x60(r3)
	lwz      r3, gameSystem__4Game@sda21(r13)
	lha      r0, 0x64(r31)
	lwz      r4, 0x54(r3)
	lwz      r3, 0x60(r31)
	rlwinm   r0, r0, 5, 0xb, 0x1a
	lwz      r4, 0x20(r4)
	lwz      r6, 4(r3)
	lbz      r5, 0(r4)
	add      r6, r6, r0
	stb      r5, 0(r6)
	lbz      r5, 1(r4)
	stb      r5, 1(r6)
	lhz      r5, 2(r4)
	sth      r5, 2(r6)
	lhz      r5, 4(r4)
	sth      r5, 4(r6)
	lbz      r5, 6(r4)
	stb      r5, 6(r6)
	lbz      r5, 7(r4)
	stb      r5, 7(r6)
	lbz      r5, 8(r4)
	stb      r5, 8(r6)
	lbz      r5, 9(r4)
	stb      r5, 9(r6)
	lhz      r5, 0xa(r4)
	sth      r5, 0xa(r6)
	lwz      r5, 0xc(r4)
	stw      r5, 0xc(r6)
	lbz      r5, 0x10(r4)
	stb      r5, 0x10(r6)
	lbz      r5, 0x11(r4)
	stb      r5, 0x11(r6)
	lbz      r5, 0x12(r4)
	stb      r5, 0x12(r6)
	lbz      r5, 0x13(r4)
	stb      r5, 0x13(r6)
	lbz      r5, 0x14(r4)
	stb      r5, 0x14(r6)
	lbz      r5, 0x15(r4)
	stb      r5, 0x15(r6)
	lbz      r5, 0x16(r4)
	stb      r5, 0x16(r6)
	lbz      r5, 0x17(r4)
	stb      r5, 0x17(r6)
	lbz      r5, 0x18(r4)
	stb      r5, 0x18(r6)
	lbz      r5, 0x19(r4)
	stb      r5, 0x19(r6)
	lha      r5, 0x1a(r4)
	sth      r5, 0x1a(r6)
	lwz      r5, 0x1c(r4)
	stw      r5, 0x1c(r6)
	lwz      r5, 4(r3)
	add      r6, r5, r0
	lwz      r5, 0x1c(r6)
	add      r5, r4, r5
	subf     r5, r6, r5
	stw      r5, 0x1c(r6)
	lwz      r3, 4(r3)
	add      r3, r3, r0
	lwz      r0, 0xc(r3)
	add      r0, r4, r0
	subf     r0, r3, r0
	stw      r0, 0xc(r3)

lbl_801AED5C:
	lwz      r3, 0x50(r31)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl

lbl_801AED74:
	lwz      r0, 0x84(r1)
	lwz      r31, 0x7c(r1)
	lwz      r30, 0x78(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * update__Q24Game6SeaMgrFv
 * --INFO--
 * Address:	801AED8C
 * Size:	000210
 */
void SeaMgr::update()
{
	bool isRefreshNeeded = false;
	Iterator<WaterBox> iterator(this);
	CI_LOOP(iterator)
	{
		WaterBox* item = (*iterator);
		if (item->update()) {
			isRefreshNeeded = true;
		}
	}
	if (isRefreshNeeded) {
		mapMgr->mRouteMgr->refreshWater();
	}
}

/*
 * --INFO--
 * Address:	801AEF9C
 * Size:	000104
 */
bool AABBWaterBox::inWater(Sys::Sphere& collision)
{
	if (mWaterHeight - 3.0f < collision.mPosition.y) {
		return false;
	}
	// TODO: The rest
	/*
	lfs      f1, 0x34(r3)
	lfs      f0, lbl_8051933C@sda21(r2)
	lfs      f2, 4(r4)
	fsubs    f0, f1, f0
	fcmpo    cr0, f2, f0
	ble      lbl_801AEFBC
	li       r3, 0
	blr

lbl_801AEFBC:
	lfs      f1, 0(r4)
	lfs      f0, 0xc(r4)
	lfs      f4, 0x24(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x18(r3)
	fadds    f1, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AEFE4
	li       r3, 0
	blr

lbl_801AEFE4:
	fcmpo    cr0, f1, f3
	bge      lbl_801AEFF4
	li       r3, 0
	blr

lbl_801AEFF4:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF00C
	fcmpo    cr0, f3, f1
	cror     2, 0, 2
	beq      lbl_801AF02C

lbl_801AF00C:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF024
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF02C

lbl_801AF024:
	li       r3, 0
	blr

lbl_801AF02C:
	lfs      f1, 8(r4)
	lfs      f4, 0x2c(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x20(r3)
	fadds    f0, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AF050
	li       r3, 0
	blr

lbl_801AF050:
	fcmpo    cr0, f0, f3
	bge      lbl_801AF060
	li       r3, 0
	blr

lbl_801AF060:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF078
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	beq      lbl_801AF098

lbl_801AF078:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF090
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF098

lbl_801AF090:
	li       r3, 0
	blr

lbl_801AF098:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AF0A0
 * Size:	0000E4
 */
bool AABBWaterBox::inWater2d(Sys::Sphere&)
{
	/*
	lfs      f1, 0(r4)
	lfs      f0, 0xc(r4)
	lfs      f4, 0x24(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x18(r3)
	fadds    f1, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AF0C8
	li       r3, 0
	blr

lbl_801AF0C8:
	fcmpo    cr0, f1, f3
	bge      lbl_801AF0D8
	li       r3, 0
	blr

lbl_801AF0D8:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF0F0
	fcmpo    cr0, f3, f1
	cror     2, 0, 2
	beq      lbl_801AF110

lbl_801AF0F0:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF108
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF110

lbl_801AF108:
	li       r3, 0
	blr

lbl_801AF110:
	lfs      f1, 8(r4)
	lfs      f4, 0x2c(r3)
	fsubs    f2, f1, f0
	lfs      f3, 0x20(r3)
	fadds    f0, f1, f0
	fcmpo    cr0, f4, f2
	bge      lbl_801AF134
	li       r3, 0
	blr

lbl_801AF134:
	fcmpo    cr0, f0, f3
	bge      lbl_801AF144
	li       r3, 0
	blr

lbl_801AF144:
	fcmpo    cr0, f2, f3
	cror     2, 0, 2
	bne      lbl_801AF15C
	fcmpo    cr0, f3, f0
	cror     2, 0, 2
	beq      lbl_801AF17C

lbl_801AF15C:
	fcmpo    cr0, f3, f2
	cror     2, 0, 2
	bne      lbl_801AF174
	fcmpo    cr0, f2, f4
	cror     2, 0, 2
	beq      lbl_801AF17C

lbl_801AF174:
	li       r3, 0
	blr

lbl_801AF17C:
	li       r3, 1
	blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000060
 */
// void create__Q24Game12AABBWaterBoxFR10Vector3f R10Vector3f()
void AABBWaterBox::create(Vector3f&, Vector3f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AF184
 * Size:	0001C8
 */
void AABBWaterBox::globalise(Game::AABBWaterBox* other, Matrixf& p2)
{
	Vector3f vecs[4];
	mBounds = other->mBounds;
	vecs[0] = Vector3f(mBounds.mMin);
	vecs[2] = Vector3f(mBounds.mMax);
	vecs[1] = Vector3f(mBounds.mMin);
	vecs[3] = Vector3f(mBounds.mMax);

	mBounds.mMin.x = 32768.0f;
	mBounds.mMin.y = 32768.0f;
	mBounds.mMin.z = 32768.0f;
	mBounds.mMax.x = -32768.0f;
	mBounds.mMax.y = -32768.0f;
	mBounds.mMax.z = -32768.0f;

	vecs[3].y = vecs[1].y;

	for (int i = 0; i < 4; i++) {
		Vec result;
		PSMTXMultVec(p2.mMatrix.mtxView, (Vec*)&vecs[i], &result);
		vecs[i] = result;
		if (vecs[i].x < mBounds.mMin.x) {
			mBounds.mMin.x = vecs[i].x;
		}
		if (vecs[i].y < mBounds.mMin.y) {
			mBounds.mMin.y = vecs[i].y;
		}
		if (vecs[i].z < mBounds.mMin.z) {
			mBounds.mMin.z = vecs[i].z;
		}
		if (vecs[i].x > mBounds.mMax.x) {
			mBounds.mMax.x = vecs[i].x;
		}
		if (vecs[i].y > mBounds.mMax.y) {
			mBounds.mMax.y = vecs[i].y;
		}
		if (vecs[i].z > mBounds.mMax.z) {
			mBounds.mMax.z = vecs[i].z;
		}
	}

	mWaterTop = other->mWaterTop;
	mBounds.mMin.y -= 1000.0f;
	mWaterTop      = mBounds.mMax.y;
	mState         = 0;
	mLoweredAmount = 0.0f;
	_14            = 0.0f;
	/*
	stwu     r1, -0x60(r1)
	mflr     r0
	lfs      f1, lbl_80519320@sda21(r2)
	stw      r0, 0x64(r1)
	stmw     r27, 0x4c(r1)
	mr       r28, r4
	mr       r27, r3
	mr       r29, r5
	addi     r31, r1, 0x14
	li       r30, 0
	lfs      f0, 0x18(r4)
	stfs     f0, 0x18(r3)
	lfs      f0, lbl_80519324@sda21(r2)
	lfs      f2, 0x1c(r4)
	stfs     f2, 0x1c(r3)
	lfs      f2, 0x20(r4)
	stfs     f2, 0x20(r3)
	lfs      f2, 0x24(r4)
	stfs     f2, 0x24(r3)
	lfs      f2, 0x28(r4)
	stfs     f2, 0x28(r3)
	lfs      f2, 0x2c(r4)
	stfs     f2, 0x2c(r3)
	lfs      f2, 0x18(r3)
	stfs     f2, 0x14(r1)
	lfs      f2, 0x1c(r3)
	stfs     f2, 0x18(r1)
	lfs      f2, 0x20(r3)
	stfs     f2, 0x1c(r1)
	lfs      f2, 0x24(r3)
	stfs     f2, 0x2c(r1)
	lfs      f2, 0x28(r3)
	stfs     f2, 0x30(r1)
	lfs      f2, 0x2c(r3)
	stfs     f2, 0x34(r1)
	lfs      f4, 0x2c(r3)
	lfs      f3, 0x1c(r3)
	lfs      f2, 0x18(r3)
	stfs     f2, 0x20(r1)
	stfs     f3, 0x24(r1)
	stfs     f4, 0x28(r1)
	lfs      f4, 0x20(r3)
	lfs      f2, 0x24(r3)
	stfs     f2, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f4, 0x40(r1)
	stfs     f1, 0x18(r3)
	stfs     f1, 0x1c(r3)
	stfs     f1, 0x20(r3)
	stfs     f0, 0x24(r3)
	stfs     f0, 0x28(r3)
	stfs     f0, 0x2c(r3)

lbl_801AF254:
	mr       r3, r29
	mr       r4, r31
	addi     r5, r1, 8
	bl       PSMTXMultVec
	lfs      f0, 8(r1)
	lfs      f1, 0xc(r1)
	stfs     f0, 0(r31)
	lfs      f0, 0x10(r1)
	stfs     f1, 4(r31)
	stfs     f0, 8(r31)
	lfs      f1, 0(r31)
	lfs      f0, 0x18(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_801AF290
	stfs     f1, 0x18(r27)

lbl_801AF290:
	lfs      f1, 4(r31)
	lfs      f0, 0x1c(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_801AF2A4
	stfs     f1, 0x1c(r27)

lbl_801AF2A4:
	lfs      f1, 8(r31)
	lfs      f0, 0x20(r27)
	fcmpo    cr0, f1, f0
	bge      lbl_801AF2B8
	stfs     f1, 0x20(r27)

lbl_801AF2B8:
	lfs      f1, 0(r31)
	lfs      f0, 0x24(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_801AF2CC
	stfs     f1, 0x24(r27)

lbl_801AF2CC:
	lfs      f1, 4(r31)
	lfs      f0, 0x28(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_801AF2E0
	stfs     f1, 0x28(r27)

lbl_801AF2E0:
	lfs      f1, 8(r31)
	lfs      f0, 0x2c(r27)
	fcmpo    cr0, f1, f0
	ble      lbl_801AF2F4
	stfs     f1, 0x2c(r27)

lbl_801AF2F4:
	addi     r30, r30, 1
	addi     r31, r31, 0xc
	cmpwi    r30, 4
	blt      lbl_801AF254
	lfs      f0, 0x30(r28)
	li       r0, 0
	lfs      f1, lbl_80519340@sda21(r2)
	stfs     f0, 0x30(r27)
	lfs      f0, lbl_80519328@sda21(r2)
	lfs      f2, 0x1c(r27)
	fsubs    f1, f2, f1
	stfs     f1, 0x1c(r27)
	lfs      f1, 0x28(r27)
	stfs     f1, 0x30(r27)
	sth      r0, 8(r27)
	stfs     f0, 0xc(r27)
	stfs     f0, 0x14(r27)
	lmw      r27, 0x4c(r1)
	lwz      r0, 0x64(r1)
	mtlr     r0
	addi     r1, r1, 0x60
	blr
	*/
}

/*
 * --INFO--
 * Address:	801AF34C
 * Size:	000004
 */
void AABBWaterBox::directDraw(Graphics&) { }

/*
 * __ct__Q24Game6SeaMgrFv
 * --INFO--
 * Address:	801AF350
 * Size:	0002F8
 */
SeaMgr::SeaMgr()
{
	mModelCount = 1;
	mModelData  = new J3DModelData*[mModelCount];

	JKRArchive* archive;
	if (Game::gameSystem && !Game::gameSystem->isMultiplayerMode()) {
		archive = JKRArchive::mount("user/Kando/map/waterbox.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	} else {
		archive = JKRArchive::mount("user/Kando/map/waterbox2p.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	}
	P2ASSERTLINE(527, archive);

	void* file;
	if (Game::gameSystem && !Game::gameSystem->isMultiplayerMode()) {
		file = archive->getResource("100x100/mizu100x100.bmd");
	} else {
		file = archive->getResource("2p/2p.bmd");
	}

	u32 flags;
	if (Game::gameSystem && Game::gameSystem->isMultiplayerMode()) {
		flags = 0x20240010;
	} else {
		flags = 0x21240010;
	}

	mModelData[0] = J3DModelLoaderDataBase::load(file, flags);
	SysShape::Model::enableMaterialAnim(mModelData[0], 0);
	mAnimations = new Sys::MatTexAnimation[mModelCount];

	if (Game::gameSystem && !Game::gameSystem->isMultiplayerMode()) {
		file = archive->getResource("100x100/mizu100x100.btk");
	} else {
		file = archive->getResource("2p/2p.btk");
	}
	P2ASSERTLINE(567, file);
	mAnimations[0].attachResource(file, mModelData[0]);
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 * @matchedSize
 */
void SeaMgr::addWaterBox(WaterBox* wb)
{
	// INLINED FUNCTION
	TObjectNode<Game::WaterBox>* node = new TObjectNode<Game::WaterBox>;
	node->mContents                   = wb;
	wb->attachModel(*mModelData, mAnimations, 100.0f);
	mNode.add(node);
}

/*
 * --INFO--
 * Address:	801AF868
 * Size:	000004
 */
void WaterBox::attachModel(J3DModelData*, Sys::MatTexAnimation*, f32) { }

/*
 * findWater__Q24Game6SeaMgrFRQ23Sys6Sphere
 * --INFO--
 * Address:	801AF86C
 * Size:	000214
 */
WaterBox* SeaMgr::findWater(Sys::Sphere& collision)
{
	Iterator<WaterBox> iterator(this);
	CI_LOOP(iterator)
	{
		WaterBox* item = (*iterator);
		if (item->inWater(collision)) {
			return item;
		}
	}
	return nullptr;
}

/*
 * findWater2d__Q24Game6SeaMgrFRQ23Sys6Sphere
 * --INFO--
 * Address:	801AFA80
 * Size:	000214
 */
WaterBox* SeaMgr::findWater2d(Sys::Sphere& collision)
{
	Iterator<WaterBox> iterator(this);
	CI_LOOP(iterator)
	{
		WaterBox* item = (*iterator);
		if (item->inWater2d(collision)) {
			return item;
		}
	}
	return nullptr;
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void SeaMgr::directDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801AFC9C
 * Size:	00020C
 */
void SeaMgr::read(Stream& input)
{
	input.readInt(); // unused version value

	int wbCount = input.readInt();
	for (int i = 0; i < wbCount; i++) {
		BoundBox boundBox;
		boundBox.read(input);
		AABBWaterBox* wb = new AABBWaterBox;
		boundBox.mMin.y -= 1000.0f;
		wb->mBounds                       = boundBox;
		wb->mWaterTop                     = boundBox.mMax.y;
		wb->mState                        = AABBWaterBox::WaterBox_Active;
		wb->mLoweredAmount                = 0.0f;
		wb->_14                           = 0.0f;
		TObjectNode<Game::WaterBox>* node = new TObjectNode<Game::WaterBox>;
		node->mContents                   = wb;
		wb->attachModel(*mModelData, mAnimations, 100.0f);
		mNode.add(node);
	}
}

/*
 * --INFO--
 * Address:	801AFEA8
 * Size:	000308
 */
void SeaMgr::addSeaMgr(SeaMgr* otherMgr, Matrixf& p2)
{
	Iterator<WaterBox> iterator(otherMgr);
	CI_LOOP(iterator)
	{
		WaterBox* otherWB = *iterator;
		AABBWaterBox* wb  = new AABBWaterBox;
		wb->globalise((AABBWaterBox*)otherWB, p2);
		addWaterBox(wb);
	}
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	lis      r6, "__vt__26Iterator<Q24Game8WaterBox>"@ha
	stw      r0, 0x34(r1)
	li       r0, 0
	addi     r6, r6, "__vt__26Iterator<Q24Game8WaterBox>"@l
	stw      r31, 0x2c(r1)
	cmplwi   r0, 0
	mr       r31, r5
	stw      r30, 0x28(r1)
	mr       r30, r3
	stw      r29, 0x24(r1)
	stw      r28, 0x20(r1)
	stw      r0, 0x14(r1)
	stw      r6, 8(r1)
	stw      r0, 0xc(r1)
	stw      r4, 0x10(r1)
	bne      lbl_801AFF0C
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B0170

lbl_801AFF0C:
	mr       r3, r4
	lwz      r12, 0(r4)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801AFF7C

lbl_801AFF28:
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
	bne      lbl_801B0170
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801AFF7C:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801AFF28
	b        lbl_801B0170

lbl_801AFF9C:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r29, r3
	li       r3, 0x68
	bl       __nw__FUl
	or.      r28, r3, r3
	beq      lbl_801B0050
	lis      r4, __vt__Q24Game8WaterBox@ha
	lis      r3, __vt__Q24Game12AABBWaterBox@ha
	addi     r0, r4, __vt__Q24Game8WaterBox@l
	li       r4, 0
	stw      r0, 0(r28)
	addi     r0, r3, __vt__Q24Game12AABBWaterBox@l
	lfs      f1, lbl_80519320@sda21(r2)
	addi     r3, r28, 0x54
	stb      r4, 4(r28)
	lfs      f0, lbl_80519324@sda21(r2)
	stb      r4, 4(r28)
	lbz      r4, 4(r28)
	ori      r4, r4, 1
	stb      r4, 4(r28)
	stw      r0, 0(r28)
	stfs     f1, 0x18(r28)
	stfs     f1, 0x1c(r28)
	stfs     f1, 0x20(r28)
	stfs     f0, 0x24(r28)
	stfs     f0, 0x28(r28)
	stfs     f0, 0x2c(r28)
	bl       __ct__Q23Sys15MatBaseAnimatorFv
	lis      r3, __vt__Q23Sys15MatLoopAnimator@ha
	lfs      f0, lbl_80519328@sda21(r2)
	addi     r3, r3, __vt__Q23Sys15MatLoopAnimator@l
	li       r0, 0
	stw      r3, 0x54(r28)
	stfs     f0, 0xc(r28)
	sth      r0, 8(r28)
	stfs     f0, 0x10(r28)
	stfs     f0, 0x14(r28)
	stfs     f0, 0x30(r28)
	stw      r0, 0x50(r28)
	stfs     f0, 0x34(r28)
	stw      r0, 0x60(r28)

lbl_801B0050:
	mr       r3, r28
	mr       r4, r29
	mr       r5, r31
	bl       globalise__Q24Game12AABBWaterBoxFPQ24Game12AABBWaterBoxR7Matrixf
	li       r3, 0x1c
	bl       __nw__FUl
	or.      r29, r3, r3
	beq      lbl_801B0080
	bl       __ct__5CNodeFv
	lis      r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@ha
	addi     r0, r3, "__vt__29TObjectNode<Q24Game8WaterBox>"@l
	stw      r0, 0(r29)

lbl_801B0080:
	stw      r28, 0x18(r29)
	mr       r3, r28
	lfs      f1, lbl_80519344@sda21(r2)
	lwz      r12, 0(r28)
	lwz      r4, 0x40(r30)
	lwz      r12, 0x40(r12)
	lwz      r4, 0(r4)
	lwz      r5, 0x44(r30)
	mtctr    r12
	bctrl
	mr       r4, r29
	addi     r3, r30, 0x20
	bl       add__5CNodeFP5CNode
	lwz      r0, 0x14(r1)
	cmplwi   r0, 0
	bne      lbl_801B00E0
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B0170

lbl_801B00E0:
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)
	b        lbl_801B0154

lbl_801B0100:
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
	bne      lbl_801B0170
	lwz      r3, 0x10(r1)
	lwz      r4, 0xc(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0xc(r1)

lbl_801B0154:
	lwz      r12, 8(r1)
	addi     r3, r1, 8
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801B0100

lbl_801B0170:
	lwz      r3, 0x10(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0xc(r1)
	cmplw    r4, r3
	bne      lbl_801AFF9C
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	lwz      r29, 0x24(r1)
	lwz      r28, 0x20(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

} // namespace Game
