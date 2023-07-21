#include "ebi/title/TTitle.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "nans.h"

static const char idk[]  = "\0\0\0\0\0\0\0\0\0";
static const char name[] = "ebiP2TitleUnit";

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void E3DModel_set2DCoordToBaseTRMatrix_(J3DModel* model, Vector2f& pos, Vector2f& angle, f32 scale)
{
	f32 y    = -angle.y;
	f32 x    = angle.x;
	f32 zero = 0.0f;
	f32 one  = 1.0f;

	model->mPosMtx[0][0] = y * one - zero;
	model->mPosMtx[0][1] = 0.0f;
	model->mPosMtx[0][2] = x;
	model->mPosMtx[0][3] = pos.x;

	model->mPosMtx[1][0] = (zero * x) - (y * zero);
	model->mPosMtx[1][1] = 1.0f;
	model->mPosMtx[1][2] = 0.0f;
	model->mPosMtx[1][3] = 0.0f;

	model->mPosMtx[2][0] = -(one * x - zero);
	model->mPosMtx[2][1] = 0.0f;
	model->mPosMtx[2][2] = y;
	model->mPosMtx[2][3] = -pos.y;

	Mtx temp;
	PSMTXScale(temp, scale, scale, scale);
	PSMTXConcat(model->mPosMtx, temp, model->mPosMtx);
}

/*
 * --INFO--
 * Address:	803C0AF8
 * Size:	000088
 */
bool TParamBase::loadSettingFile(JKRArchive* arc, char* path)
{
	void* file = arc->getResource(path);
	if (file) {
		RamStream stream(file, -1);
		stream.resetPosition(true, 1);
		read(stream);
		return true;
	}
	return false;
}

/*
 * --INFO--
 * Address:	803C0B80
 * Size:	0000B0
 */
void TObjBase::calcModelBaseMtx_() { E3DModel_set2DCoordToBaseTRMatrix_(mModel, mPos, mAngle, mParms[1]); }

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void TObjBase::pushOut_(Vector2f&)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C0C30
 * Size:	000094
 */
void TObjBase::pushOut(TObjBase* otherObj)
{
	if (isCalc() && otherObj->isCalc()) {
		EGECircle2f bounds;
		bounds.mRadius = mParms[2] + otherObj->mParms[2];
		bounds.mCenter = mPos;
		bounds.out(&otherObj->mPos);
	}
}

/*
 * --INFO--
 * Address:	803C0CC4
 * Size:	000220
 */
void TMapBase::setArchive(JKRArchive* arc)
{
	void* file = arc->getResource("opening.bmd");
	P2ASSERTLINE(96, file);
	mMainModelData = J3DModelLoaderDataBase::load(file, 0x20100000);

	file = arc->getResource("opening_wait.bck");
	P2ASSERTLINE(106, file);
	mAnimWait = static_cast<J3DAnmTransform*>(J3DAnmLoaderDataBase::load(file));

	file = arc->getResource("opening_kaze.bck");
	P2ASSERTLINE(111, file);
	mAnimWind = static_cast<J3DAnmTransform*>(J3DAnmLoaderDataBase::load(file));

	mMainModelData->newSharedDisplayList(0x40000);
	mMainModelData->makeSharedDL();

	mAnimMtxCalcWait = J3DNewMtxCalcAnm(mMainModelData->mJointTree.mFlags & 15, mAnimWait);
	mAnimMtxCalcWind = static_cast<J3DMtxCalcAnmBase*>(
	    J3DUNewMtxCalcAnm(mMainModelData->mJointTree.mFlags & 15, mAnimWait, mAnimWind, nullptr, nullptr, 0));

	mParms[0] = 0.0f;

	mModel = new J3DModel(mMainModelData, 0x20000, 1);

	mFrameCtrlWait.init(mAnimWait->mMaxFrame);
	mFrameCtrlWait.mAttr      = 2;
	mFrameCtrlWait.mAnimSpeed = sys->mDeltaTime * 60.0f * 0.5f;

	mFrameCtrlWind.init(mAnimWind->mMaxFrame);
	mFrameCtrlWind.mAttr      = 2;
	mFrameCtrlWind.mAnimSpeed = sys->mDeltaTime * 60.0f * 0.5f;
}

/*
 * --INFO--
 * Address:	803C0EE4
 * Size:	000048
 */
void TMapBase::startWind(f32 time)
{
	mState        = 1;
	u32 wind      = time / sys->mDeltaTime;
	mWindTimer    = wind;
	mWindTimerMax = wind;
}

/*
 * --INFO--
 * Address:	803C0F2C
 * Size:	00027C
 */
void TMapBase::update()
{
	calcModelBaseMtx_();

	if (!mWindTimer) {
		mState = 0;
	}

	switch (mState) {
	case 0:
		mFrameCtrlWait.update();
		mAnimWait->mCurrentFrame                            = mFrameCtrlWait.mCurrTime;
		mModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnimMtxCalcWait;
		break;
	case 1:
		mFrameCtrlWait.update();
		mFrameCtrlWind.update();
		mAnimWait->mCurrentFrame = mFrameCtrlWait.mCurrTime;
		mAnimWind->mCurrentFrame = mFrameCtrlWind.mCurrTime;
		J3DMtxCalcAnmBase* anm   = mAnimMtxCalcWind;
		if (mWindTimer) {
			mWindTimer--;
		}
		f32 calc;
		if (mWindTimerMax) {
			calc = (f32)mWindTimer / (f32)mWindTimerMax;
		} else {
			calc = 0.0f;
		}
		f32 calc2 = 1.0f;
		calc      = 1.0f - calc;
		if (calc <= 0.2f) {
			calc2 = calc / 0.2f;
		} else if (calc <= 0.8f) {
			calc2 = calc * -(5.0f) + 5.0f;
		}
		anm->setWeight(0, 1.0f - calc2);
		anm->setWeight(1, calc2);
		mModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = anm;
		break;
	}

	mModel->calc();
	mModel->entry();
	mModel->viewCalc();
}

/*
 * --INFO--
 * Address:	803C11A8
 * Size:	000150
 */
void TBGEnemyBase::setArchive(JKRArchive* arc)
{
	void* file = arc->getResource("enemy.bmd");
	P2ASSERTLINE(199, file);
	mMainModelData = J3DModelLoaderDataBase::load(file, 0x20100000);

	file = arc->getResource("enemy.bck");
	P2ASSERTLINE(209, file);
	mAnim = static_cast<J3DAnmTransform*>(J3DAnmLoaderDataBase::load(file));

	mMainModelData->newSharedDisplayList(0x40000);
	mMainModelData->makeSharedDL();

	mAnimMtxCalc = J3DNewMtxCalcAnm(mMainModelData->mJointTree.mFlags & 15, mAnim);

	mParms[0] = 0.0f;

	mModel = new J3DModel(mMainModelData, 0x20000, 1);
}

/*
 * --INFO--
 * Address:	803C12F8
 * Size:	00005C
 */
void TBGEnemyBase::start()
{
	mFrameCtrl.init(mAnim->mMaxFrame);
	mFrameCtrl.mAttr      = 0;
	mFrameCtrl.mAnimSpeed = sys->mDeltaTime * 60.0f * 0.5f;
}

/*
 * --INFO--
 * Address:	803C1354
 * Size:	000124
 */
void TBGEnemyBase::update()
{
	calcModelBaseMtx_();

	mFrameCtrl.update();
	mAnim->mCurrentFrame                                = mFrameCtrl.mCurrTime;
	mModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnimMtxCalc;

	mModel->calc();
	mModel->entry();
	mModel->viewCalc();
}

/*
 * --INFO--
 * Address:	803C1478
 * Size:	0002D8
 */
void TBlackPlane::setArchive(JKRArchive* arc)
{
	void* file = arc->getResource("cam.bmd");
	P2ASSERTLINE(258, file);
	mMainModelData = J3DModelLoaderDataBase::load(file, 0x10100000);

	file = arc->getResource("cam.bck");
	P2ASSERTLINE(268, file);
	mAnim = static_cast<J3DAnmTransform*>(J3DAnmLoaderDataBase::load(file));

	file = arc->getResource("cam.brk");
	P2ASSERTLINE(273, file);
	mAnimColor = static_cast<J3DAnmTevRegKey*>(J3DAnmLoaderDataBase::load(file));

	mAnimMtxCalc = J3DNewMtxCalcAnm(mMainModelData->mJointTree.mFlags & 15, mAnim);

	mParms[0] = 0.0f;

	mModel = new J3DModel(mMainModelData, 0x20000, 1);

	mAnimColor->searchUpdateMaterialID(mModel->mModelData);

	for (u16 i = 0; i < (u32)mModel->mModelData->mMaterialTable.mMaterialNum; i++) {
		J3DMaterialAnm* anm = new J3DMaterialAnm;
		mModel->mModelData->mMaterialTable.mMaterials[i]->change();
		mModel->mModelData->mMaterialTable.mMaterials[i]->mAnm = anm;
	}

	j3dSys.ErrorReport(mModel->mModelData->mMaterialTable.entryTevRegAnimator(mAnimColor));
	/*
stwu     r1, -0x20(r1)
mflr     r0
stw      r0, 0x24(r1)
stw      r31, 0x1c(r1)
mr       r31, r3
stw      r30, 0x18(r1)
stw      r29, 0x14(r1)
mr       r29, r4
mr       r3, r29
addi     r4, r2, lbl_8051F860@sda21
stw      r28, 0x10(r1)
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r28, r3, r3
bne      lbl_803C14D8
lis      r3, lbl_80496200@ha
lis      r5, lbl_80496214@ha
addi     r3, r3, lbl_80496200@l
li       r4, 0x102
addi     r5, r5, lbl_80496214@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C14D8:
mr       r3, r28
lis      r4, 0x1010
bl       load__22J3DModelLoaderDataBaseFPCvUl
stw      r3, 0x2c(r31)
mr       r3, r29
addi     r4, r2, lbl_8051F868@sda21
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r28, r3, r3
bne      lbl_803C1524
lis      r3, lbl_80496200@ha
lis      r5, lbl_80496214@ha
addi     r3, r3, lbl_80496200@l
li       r4, 0x10c
addi     r5, r5, lbl_80496214@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C1524:
mr       r3, r28
bl       load__20J3DAnmLoaderDataBaseFPCv
stw      r3, 0x44(r31)
mr       r3, r29
addi     r4, r2, lbl_8051F870@sda21
lwz      r12, 0(r29)
lwz      r12, 0x14(r12)
mtctr    r12
bctrl
or.      r28, r3, r3
bne      lbl_803C156C
lis      r3, lbl_80496200@ha
lis      r5, lbl_80496214@ha
addi     r3, r3, lbl_80496200@l
li       r4, 0x111
addi     r5, r5, lbl_80496214@l
crclr    6
bl       panic_f__12JUTExceptionFPCciPCce

lbl_803C156C:
mr       r3, r28
bl       load__20J3DAnmLoaderDataBaseFPCv
stw      r3, 0x60(r31)
lwz      r3, 0x2c(r31)
lwz      r4, 0x44(r31)
lwz      r0, 0x18(r3)
clrlwi   r3, r0, 0x1c
bl       J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
stw      r3, 0x48(r31)
li       r3, 0xdc
lfs      f0, lbl_8051F83C@sda21(r2)
stfs     f0, 0x14(r31)
bl       __nw__FUl
or.      r29, r3, r3
beq      lbl_803C15E0
lis      r3, __vt__8J3DModel@ha
lwz      r30, 0x2c(r31)
addi     r0, r3, __vt__8J3DModel@l
mr       r28, r29
stw      r0, 0(r29)
addi     r3, r28, 0x88
bl       init__15J3DVertexBufferFv
mr       r3, r28
bl       initialize__8J3DModelFv
mr       r3, r28
mr       r4, r30
lis      r5, 2
li       r6, 1
bl       entryModelData__8J3DModelFP12J3DModelDataUlUl

lbl_803C15E0:
stw      r29, 0x28(r31)
lwz      r4, 0x28(r31)
lwz      r3, 0x60(r31)
lwz      r4, 4(r4)
bl       searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData
li       r29, 0
b        lbl_803C16FC

lbl_803C15FC:
li       r3, 0xf4
bl       __nw__FUl
or.      r30, r3, r3
beq      lbl_803C16C0
lis      r3, __vt__14J3DMaterialAnm@ha
lis      r4, __ct__14J3DMatColorAnmFv@ha
addi     r0, r3, __vt__14J3DMaterialAnm@l
li       r6, 8
lis      r3, __dt__14J3DMatColorAnmFv@ha
stw      r0, 0(r30)
addi     r5, r3, __dt__14J3DMatColorAnmFv@l
addi     r4, r4, __ct__14J3DMatColorAnmFv@l
addi     r3, r30, 4
li       r7, 2
bl       __construct_array
lis      r3, __ct__12J3DTexMtxAnmFv@ha
lis      r5, __dt__12J3DTexMtxAnmFv@ha
addi     r4, r3, __ct__12J3DTexMtxAnmFv@l
li       r6, 8
addi     r3, r30, 0x14
addi     r5, r5, __dt__12J3DTexMtxAnmFv@l
li       r7, 8
bl       __construct_array
lis      r3, __ct__11J3DTexNoAnmFv@ha
lis      r5, __dt__11J3DTexNoAnmFv@ha
addi     r4, r3, __ct__11J3DTexNoAnmFv@l
li       r6, 0xc
addi     r3, r30, 0x54
addi     r5, r5, __dt__11J3DTexNoAnmFv@l
li       r7, 8
bl       __construct_array
lis      r3, __ct__14J3DTevColorAnmFv@ha
lis      r5, __dt__14J3DTevColorAnmFv@ha
addi     r4, r3, __ct__14J3DTevColorAnmFv@l
li       r6, 8
addi     r3, r30, 0xb4
addi     r5, r5, __dt__14J3DTevColorAnmFv@l
li       r7, 4
bl       __construct_array
lis      r3, __ct__15J3DTevKColorAnmFv@ha
lis      r5, __dt__15J3DTevKColorAnmFv@ha
addi     r4, r3, __ct__15J3DTevKColorAnmFv@l
li       r6, 8
addi     r3, r30, 0xd4
addi     r5, r5, __dt__15J3DTevKColorAnmFv@l
li       r7, 4
bl       __construct_array
mr       r3, r30
bl       initialize__14J3DMaterialAnmFv

lbl_803C16C0:
lwz      r3, 0x28(r31)
rlwinm   r28, r29, 2, 0xe, 0x1d
lwz      r3, 4(r3)
lwz      r3, 0x60(r3)
lwzx     r3, r3, r28
lwz      r12, 0(r3)
lwz      r12, 0x2c(r12)
mtctr    r12
bctrl
lwz      r3, 0x28(r31)
addi     r29, r29, 1
lwz      r3, 4(r3)
lwz      r3, 0x60(r3)
lwzx     r3, r3, r28
stw      r30, 0x3c(r3)

lbl_803C16FC:
lwz      r4, 0x28(r31)
clrlwi   r3, r29, 0x10
lwz      r5, 4(r4)
lhz      r0, 0x5c(r5)
cmplw    r3, r0
blt      lbl_803C15FC
lwz      r4, 0x60(r31)
addi     r3, r5, 0x58
bl       entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey
lis      r5, j3dSys@ha
mr       r4, r3
addi     r3, r5, j3dSys@l
bl       ErrorReport__6J3DSysCF10J3DErrType
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
 * Address:	803C1750
 * Size:	0000A0
 */
void TBlackPlane::start()
{
	mFrameCtrl.init(mAnim->mMaxFrame - 2);
	mFrameCtrl.mAttr      = 0;
	mFrameCtrl.mAnimSpeed = sys->mDeltaTime * 60.0f * 0.5f;

	mFrameCtrlColor.init(mAnimColor->mMaxFrame - 2);
	mFrameCtrlColor.mAttr      = 0;
	mFrameCtrlColor.mAnimSpeed = sys->mDeltaTime * 60.0f * 0.5f;
}

/*
 * --INFO--
 * Address:	803C17F0
 * Size:	000110
 */
void TBlackPlane::updateBeforeCamera()
{
	calcModelBaseMtx_();

	mFrameCtrl.update();
	mFrameCtrlColor.update();

	mAnimColor->mCurrentFrame                           = mFrameCtrlColor.mCurrTime;
	mAnim->mCurrentFrame                                = mFrameCtrl.mCurrTime;
	mModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnimMtxCalc;

	mModel->calc();
}

/*
 * --INFO--
 * Address:	803C1900
 * Size:	000050
 */
void TBlackPlane::updateAfterCamera()
{
	mModel->entry();
	mModel->viewCalc();
}

/*
 * --INFO--
 * Address:	803C1950
 * Size:	00004C
 */
void TBlackPlane::setLogo()
{
	mFrameCtrl.mCurrTime      = mFrameCtrl._08;
	mFrameCtrlColor.mCurrTime = mFrameCtrlColor._08;
}

/*
 * --INFO--
 * Address:	803C199C
 * Size:	000078
 */
Vector3f TBlackPlane::getCameraPos()
{
	int id   = mModel->mModelData->mJointTree.mNametab->getIndex("black_plane");
	Mtx* mtx = &mModel->mMtxBuffer->mWorldMatrices[id];
	return Vector3f((*mtx)[0][3], (*mtx)[1][3], (*mtx)[2][3]);
}

} // namespace title
} // namespace ebi
