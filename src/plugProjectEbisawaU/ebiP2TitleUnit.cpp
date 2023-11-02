#include "ebi/title/TTitle.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "ebiP2TitleUnit";

namespace ebi {
namespace title {

/*
 * --INFO--
 * Address:	........
 * Size:	0000A8
 */
void E3DModel_set2DCoordToBaseTRMatrix_(J3DModel* model, Vector2f& pos, Vector2f& angle, f32 scale)
{
	Mtx& mtx = model->mPosMtx;
	f32 y    = -angle.y;
	f32 x    = angle.x;
	f32 zero = 0.0f;
	f32 one  = 1.0f;

	model->mPosMtx[0][0] = one * y - zero;
	model->mPosMtx[0][1] = 0.0f;
	model->mPosMtx[0][2] = x;
	model->mPosMtx[0][3] = pos.x;

	model->mPosMtx[1][0] = (zero * x) - (zero * y);
	model->mPosMtx[1][1] = 1.0f;
	model->mPosMtx[1][2] = 0.0f;
	model->mPosMtx[1][3] = 0.0f;

	model->mPosMtx[2][0] = -(one * x - zero);
	model->mPosMtx[2][1] = 0.0f;
	model->mPosMtx[2][2] = y;
	model->mPosMtx[2][3] = -pos.y;

	Mtx temp;
	PSMTXScale(temp, scale, scale, scale);
	PSMTXConcat(mtx, temp, mtx);
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
void TObjBase::calcModelBaseMtx_() { E3DModel_set2DCoordToBaseTRMatrix_(mModel, mPosition, mAngle, mParms[1]); }

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
		bounds.mCenter = mPosition;
		bounds.out(&otherObj->mPosition);
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
	    J3DUNewMtxCalcAnm(mMainModelData->mJointTree.mFlags & 15, mAnimWait, mAnimWind, nullptr, nullptr, (J3DMtxCalcFlag)0));

	mParms[0] = 0.0f;

	mModel = new J3DModel(mMainModelData, 0x20000, 1);

	mFrameCtrlWait.init(mAnimWait->mMaxFrame);
	mFrameCtrlWait.mAttribute = 2;
	mFrameCtrlWait.mRate      = sys->mDeltaTime * 60.0f * 0.5f;

	mFrameCtrlWind.init(mAnimWind->mMaxFrame);
	mFrameCtrlWind.mAttribute = 2;
	mFrameCtrlWind.mRate      = sys->mDeltaTime * 60.0f * 0.5f;
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
		mAnimWait->mCurrentFrame                            = mFrameCtrlWait.mFrame;
		mModel->mModelData->mJointTree.mJoints[0]->mMtxCalc = mAnimMtxCalcWait;
		break;
	case 1:
		mFrameCtrlWait.update();
		mFrameCtrlWind.update();
		mAnimWait->mCurrentFrame = mFrameCtrlWait.mFrame;
		mAnimWind->mCurrentFrame = mFrameCtrlWind.mFrame;
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

		calc      = 1.0f - calc;
		f32 calc2 = determineAnimRate(calc);
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
	mFrameCtrl.mAttribute = 0;
	mFrameCtrl.mRate      = sys->mDeltaTime * 60.0f * 0.5f;
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
	mAnim->mCurrentFrame                                = mFrameCtrl.mFrame;
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

	for (u16 i = 0; i < mModel->getModelData()->getMaterialNum(); i++) {
		J3DMaterialAnm* anm = new J3DMaterialAnm;
		mModel->mModelData->getMaterialNodePointer(i)->change();
		mModel->mModelData->getMaterialNodePointer(i)->mMaterialAnm = anm;
	}

	j3dSys.ErrorReport(mModel->mModelData->getMaterialTable().entryTevRegAnimator(mAnimColor));
}

/*
 * --INFO--
 * Address:	803C1750
 * Size:	0000A0
 */
void TBlackPlane::start()
{
	mFrameCtrl.init(mAnim->mMaxFrame - 2);
	mFrameCtrl.mAttribute = 0;
	mFrameCtrl.mRate      = sys->mDeltaTime * 60.0f * 0.5f;

	mFrameCtrlColor.init(mAnimColor->mMaxFrame - 2);
	mFrameCtrlColor.mAttribute = 0;
	mFrameCtrlColor.mRate      = sys->mDeltaTime * 60.0f * 0.5f;
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

	mAnimColor->mCurrentFrame                           = mFrameCtrlColor.mFrame;
	mAnim->mCurrentFrame                                = mFrameCtrl.mFrame;
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
	mFrameCtrl.mFrame      = mFrameCtrl.mEnd;
	mFrameCtrlColor.mFrame = mFrameCtrlColor.mEnd;
}

/*
 * --INFO--
 * Address:	803C199C
 * Size:	000078
 */
Vector3f TBlackPlane::getCameraPos()
{
	int id          = mModel->mModelData->mJointTree.mNametab->getIndex("black_plane");
	Mtx* mtx        = &mModel->mMtxBuffer->mWorldMatrices[id];
	Vector3f result = Vector3f((*mtx)[0][3], (*mtx)[1][3], (*mtx)[2][3]);
	return result;
}

} // namespace title
} // namespace ebi
