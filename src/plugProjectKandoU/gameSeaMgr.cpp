#include "Game/seaMgr.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/GameSystem.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "JSystem/J3D/J3DTexMtx.h"
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
{
	mFlags.clear();
	setFlag(WBF_Unknown1);
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
bool AABBWaterBox::update()
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
void AABBWaterBox::attachModel(J3DModelData* modelData, Sys::MatTexAnimation* anm, f32 scale)
{
	mFbTexIndex          = -1;
	mFbTexture           = nullptr;
	mModel               = new SysShape::Model(modelData, 0, 2);
	mModel->mIsAnimating = true;

	mXzPieceSize.x    = FABS(mBounds.mMax.x - mBounds.mMin.x) / scale;
	mXzPieceSize.y    = FABS(mBounds.mMax.z - mBounds.mMin.z) / scale;
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
	if (gameSystem && !gameSystem->isStoryMode() && !gameSystem->isZukanMode()
	    && (!gameSystem->isChallengeMode()
	        || gameSystem->isMultiplayerMode())) // WHY NOT JUST CHECK ISMULTIPLAYER. THERE'S NO OTHER OPTION.
	{
		if (gameSystem) { // kando pls. why are we doing this. let us out.
			gameSystem->setDrawBuffer(4);
			mModel->mJ3dModel->calcMaterial();
			mModel->mJ3dModel->entry();
		}
		return;
	}

	if (gameSystem->isStoryMode()) {
		BaseGameSection* section = gameSystem->getSection();
		if (section->mPrevNaviIdx == 2) {
			if (gameSystem) {
				gameSystem->setDrawBuffer(4);
				Mtx copyMatrix;
				PSMTXIdentity(copyMatrix);
				J3DTexMtx* texMtx = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterials[0]->mTexGenBlock->getTexMtx(3); // good lord
				texMtx->mTexMtxInfo.mEffectMtx[0][0] = copyMatrix[0][0];
				texMtx->mTexMtxInfo.mEffectMtx[0][1] = copyMatrix[0][1];
				texMtx->mTexMtxInfo.mEffectMtx[0][2] = copyMatrix[0][2];
				texMtx->mTexMtxInfo.mEffectMtx[0][3] = copyMatrix[0][3];
				texMtx->mTexMtxInfo.mEffectMtx[1][0] = copyMatrix[1][0];
				texMtx->mTexMtxInfo.mEffectMtx[1][1] = copyMatrix[1][1];
				texMtx->mTexMtxInfo.mEffectMtx[1][2] = copyMatrix[1][2];
				texMtx->mTexMtxInfo.mEffectMtx[1][3] = copyMatrix[1][3];
				texMtx->mTexMtxInfo.mEffectMtx[2][0] = copyMatrix[2][0];
				texMtx->mTexMtxInfo.mEffectMtx[2][1] = copyMatrix[2][1];
				texMtx->mTexMtxInfo.mEffectMtx[2][2] = copyMatrix[2][2];
				texMtx->mTexMtxInfo.mEffectMtx[2][3] = copyMatrix[2][3];
				texMtx->mTexMtxInfo.mEffectMtx[3][0] = texMtx->mTexMtxInfo.mEffectMtx[3][1] = texMtx->mTexMtxInfo.mEffectMtx[3][2] = 0.0f;
				texMtx->mTexMtxInfo.mEffectMtx[3][3]                                                                               = 1.0f;

				u16 id                   = getFbTexIndex();
				J3DTexture* texData      = getFbTexture();
				const ResTIMG* timg      = section->mMizuTexture->getTexInfo();
				*texData->getResTIMG(id) = *timg;
				texData->setImageOffset((u32)timg, id);
				texData->setPaletteOffset((u32)timg, id);
				mModel->mJ3dModel->calcMaterial();
				mModel->mJ3dModel->entry();
			}
			return;
		}
	}

	Mtx44 copyMatrix;
	PSMTX44Copy(sys->mGfx->mCurrentViewport->mCamera->mProjectionMtx, copyMatrix);
	copyMatrix[2][0] = copyMatrix[3][0];
	copyMatrix[2][1] = copyMatrix[3][1];
	copyMatrix[2][2] = copyMatrix[3][2];
	copyMatrix[2][3] = copyMatrix[3][3];

	copyMatrix[3][0] = 0.0f;
	copyMatrix[3][1] = 0.0f;
	copyMatrix[3][2] = 0.0f;
	copyMatrix[3][3] = 1.0f;

	if (!mModel) {
		return;
	}

	if (gameSystem) {
		gameSystem->setDrawBuffer(4);
		mModel->mJ3dModel->calcMaterial();

		if (mFbTexture) {
			J3DTexMtx* texMtx = mModel->mJ3dModel->mModelData->mMaterialTable.mMaterials[0]->mTexGenBlock->getTexMtx(3); // good lord x2
			texMtx->mTexMtxInfo.mEffectMtx[0][0] = copyMatrix[0][0];
			texMtx->mTexMtxInfo.mEffectMtx[0][1] = copyMatrix[0][1];
			texMtx->mTexMtxInfo.mEffectMtx[0][2] = copyMatrix[0][2];
			texMtx->mTexMtxInfo.mEffectMtx[0][3] = copyMatrix[0][3];
			texMtx->mTexMtxInfo.mEffectMtx[1][0] = copyMatrix[1][0];
			texMtx->mTexMtxInfo.mEffectMtx[1][1] = copyMatrix[1][1];
			texMtx->mTexMtxInfo.mEffectMtx[1][2] = copyMatrix[1][2];
			texMtx->mTexMtxInfo.mEffectMtx[1][3] = copyMatrix[1][3];
			texMtx->mTexMtxInfo.mEffectMtx[2][0] = copyMatrix[2][0];
			texMtx->mTexMtxInfo.mEffectMtx[2][1] = copyMatrix[2][1];
			texMtx->mTexMtxInfo.mEffectMtx[2][2] = copyMatrix[2][2];
			texMtx->mTexMtxInfo.mEffectMtx[2][3] = copyMatrix[2][3];
			texMtx->mTexMtxInfo.mEffectMtx[3][0] = texMtx->mTexMtxInfo.mEffectMtx[3][1] = texMtx->mTexMtxInfo.mEffectMtx[3][2] = 0.0f;
			texMtx->mTexMtxInfo.mEffectMtx[3][3]                                                                               = 1.0f;

			u16 id                   = getFbTexIndex();
			J3DTexture* texData      = getFbTexture();
			const ResTIMG* timg      = gameSystem->getXfbTexture()->getTexInfo();
			*texData->getResTIMG(id) = *timg;
			texData->setImageOffset((u32)timg, id);
			texData->setPaletteOffset((u32)timg, id);
		}
	}

	mModel->mJ3dModel->entry();
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
	if (collision.mPosition.y > mWaterHeight - 3.0f) {
		return false;
	}

	f32 minColl = collision.mPosition.x - collision.mRadius;
	f32 maxColl = collision.mPosition.x + collision.mRadius;

	f32 min = mBounds.mMin.x;
	f32 max = mBounds.mMax.x;

	if (max < minColl) {
		return false;
	}

	if (maxColl < min) {
		return false;
	}

	if ((!(minColl <= min) || !(min <= maxColl)) && (!(min <= minColl) || !(minColl <= max))) {
		return false;
	}

	maxColl = collision.mPosition.z + collision.mRadius;
	minColl = collision.mPosition.z - collision.mRadius;

	max = mBounds.mMax.z;
	min = mBounds.mMin.z;

	if (max < minColl) {
		return false;
	}

	if (maxColl < min) {
		return false;
	}

	if ((!(minColl <= min) || !(min <= maxColl)) && (!(min <= minColl) || !(minColl <= max))) {
		return false;
	}

	return true;
}

/*
 * --INFO--
 * Address:	801AF0A0
 * Size:	0000E4
 */
bool AABBWaterBox::inWater2d(Sys::Sphere& collision)
{
	f32 minColl = collision.mPosition.x - collision.mRadius;
	f32 maxColl = collision.mPosition.x + collision.mRadius;

	f32 min = mBounds.mMin.x;
	f32 max = mBounds.mMax.x;

	if (max < minColl) {
		return false;
	}

	if (maxColl < min) {
		return false;
	}

	if ((!(minColl <= min) || !(min <= maxColl)) && (!(min <= minColl) || !(minColl <= max))) {
		return false;
	}

	maxColl = collision.mPosition.z + collision.mRadius;
	minColl = collision.mPosition.z - collision.mRadius;

	max = mBounds.mMax.z;
	min = mBounds.mMin.z;

	if (max < minColl) {
		return false;
	}

	if (maxColl < min) {
		return false;
	}

	if ((!(minColl <= min) || !(min <= maxColl)) && (!(min <= minColl) || !(minColl <= max))) {
		return false;
	}

	return true;
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

	// this is such a dumb way to manip this
	mBounds.getMin(vecs[0]);
	mBounds.getMax(vecs[2]);
	vecs[1] = Vector3f(mBounds.mMin.x, mBounds.mMin.y, mBounds.mMax.z);
	vecs[3] = Vector3f(mBounds.mMax.x, mBounds.mMin.y, mBounds.mMin.z);

	mBounds.mMin = Vector3f(32768.0f);
	mBounds.mMax = Vector3f(-32768.0f);

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
		archive = JKRMountArchive("user/Kando/map/waterbox.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
	} else {
		archive = JKRMountArchive("user/Kando/map/waterbox2p.szs", JKRArchive::EMM_Mem, nullptr, JKRArchive::EMD_Head);
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
}

} // namespace Game
