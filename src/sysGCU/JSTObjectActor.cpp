#include "Game/P2JST/ObjectActor.h"
#include "Game/MoviePlayer.h"
#include "JSystem/J3D/J3DAnmLoader.h"
#include "JSystem/J3D/J3DModelLoader.h"
#include "Game/GameSystem.h"
#include "JSystem/JStudio/stb-data-parse.h"
#include "Viewport.h"
#include "nans.h"

static const u32 filler[]    = { 0, 0, 0 };
static const char filename[] = "JSTObjectActor";

namespace Game {

namespace P2JST {

/**
 * @note Address: 0x8042E960
 * @note Size: 0xD0
 */
ObjectActor::ObjectActor(char const* name, MoviePlayer* movie)
    : ObjectBase(name, movie)
    , mModelData(nullptr)
    , mModel(nullptr)
    , mAnmTransform(nullptr)
    , mMtxCalcAnm(nullptr)
    , mArchive(nullptr)
    , mTranslation(govNAN_)
    , mRotation(govNAN_)
    , mScaling(govNAN_)
    , mShape(*(u32*)&govNAN_.x) // these should be gu32NAN but it wont cooperate
    , mAnimation(*(u32*)&govNAN_.x)
    , mAnimFrame(gfNAN_)
    , mAnimFrameMax(gfNAN_)
    , mModelFileId(*(u32*)&govNAN_.x)
    , mAnimationFileId(*(u32*)&govNAN_.x)
{

	mArchive = MoviePlayer::mArchive;
}

/**
 * @note Address: 0x8042EA30
 * @note Size: 0x68
 */
ObjectActor::~ObjectActor()
{
}

/**
 * @note Address: 0x8042EA98
 * @note Size: 0x70
 */
void ObjectActor::reset()
{
	// this probably shouldnt be needed but it matches here (not in the ctor above)
	u32 test = gu32NAN_.a;

	mTranslation     = govNAN_;
	mRotation        = govNAN_;
	mScaling         = govNAN_;
	mShape           = test;
	mAnimation       = test;
	mAnimFrame       = gfNAN_;
	mAnimFrameMax    = gfNAN_;
	mModelFileId     = test;
	mAnimationFileId = test;
	mScaling.z       = 1.0f;
	mScaling.y       = 1.0f;
	mScaling.x       = 1.0f;
	mAnimFrame       = 0.0f;
}

/**
 * @note Address: 0x8042EB08
 * @note Size: 0x390
 */
void ObjectActor::update()
{
	if (mShape != mModelFileId) {
		setShape();
	}
	if (mAnimation != mAnimationFileId) {
		setAnim();
	}

	Matrixf mtx2, mtx1;
	f32 sinAngle, cosAngle, angle;

	PSMTXIdentity(mtx1.mMatrix.mtxView);
	Vector3f pos1(mTranslation);
	mtx1.setTranslation(pos1);

	// Z COMPONENT

	angle    = MTXDegToRad(mRotation.z);
	sinAngle = sin(angle);
	cosAngle = cos(angle);

	// The order these are set doesn't work with setColumn or setRow
	mtx2.mMatrix.structView.xx = cosAngle;
	mtx2.mMatrix.structView.xy = sinAngle;
	mtx2.mMatrix.structView.yx = -sinAngle;

	mtx2.mMatrix.structView.yy = cosAngle;
	mtx2.mMatrix.structView.zz = 1.0f;
	mtx2.mMatrix.structView.yz = 0.0f;

	mtx2.mMatrix.structView.zy = 0.0f;
	mtx2.mMatrix.structView.xz = 0.0f;
	mtx2.mMatrix.structView.zx = 0.0f;

	Vector3f pos(0.0f);
	mtx2.setTranslation(pos);

	Mtx out;
	PSMTXConcat(mtx1.mMatrix.mtxView, mtx2.mMatrix.mtxView, out);

	// Y COMPONENT

	angle    = MTXDegToRad(mRotation.y);
	sinAngle = sin(angle);
	cosAngle = cos(angle);

	mtx2.mMatrix.structView.zx = sinAngle;
	mtx2.mMatrix.structView.yy = 1.0f;
	mtx2.mMatrix.structView.xx = cosAngle;

	mtx2.mMatrix.structView.xz = -sinAngle;
	mtx2.mMatrix.structView.zz = cosAngle;
	mtx2.mMatrix.structView.yz = 0.0f;

	mtx2.mMatrix.structView.zy = 0.0f;
	mtx2.mMatrix.structView.xy = 0.0f;
	mtx2.mMatrix.structView.yx = 0.0f;

	Vector3f pos2(0.0f);
	mtx2.setTranslation(pos2);
	PSMTXConcat(out, mtx2.mMatrix.mtxView, mtx1.mMatrix.mtxView);

	// X COMPONENT

	angle    = MTXDegToRad(mRotation.x);
	sinAngle = sin(angle);
	cosAngle = cos(angle);

	mtx2.mMatrix.structView.yz = sinAngle;
	mtx2.mMatrix.structView.xx = 1.0f;
	mtx2.mMatrix.structView.yy = cosAngle;

	mtx2.mMatrix.structView.zy = -sinAngle;
	mtx2.mMatrix.structView.zz = cosAngle;
	mtx2.mMatrix.structView.xz = 0.0f;

	mtx2.mMatrix.structView.zx = 0.0f;
	mtx2.mMatrix.structView.xy = 0.0f;
	mtx2.mMatrix.structView.yx = 0.0f;

	Vector3f pos3(0.0f);
	mtx2.setTranslation(pos3);
	PSMTXConcat(mtx1.mMatrix.mtxView, mtx2.mMatrix.mtxView, out);

	if (!mModel) {
		return;
	}

	PSMTXCopy(out, mModel->mPosMtx);
	mModel->setBaseScale(mScaling);

	if (mAnmTransform) {
		mAnimFrame += 1.0f;
		if (mAnimFrame > mAnimFrameMax) {
			mAnimFrame = mAnimFrameMax;
		}
		mAnmTransform->setFrame(mAnimFrame);
	}

	SysShape::Model::setViewCalcModeInd();
	Viewport* vp = moviePlayer->mViewport;
	if (vp) {
		vp->setJ3DViewMtx(false);
		vp->setViewport();
		vp->setProjection();
	}

	Matrixf mtx3;
	Vector3f pos4(mTranslation);
	Vector3f rot;
	rot.x = TORADIANS(mRotation.x);
	rot.y = TORADIANS(mRotation.y);
	rot.z = TORADIANS(mRotation.z);
	mtx3.makeTR(pos4, rot);
	PSMTXCopy(mtx3.mMatrix.mtxView, mModel->mPosMtx);

	mModel->setBaseScale(Vector3f(1.0f));

	mModel->calc();
	mModel->getMtxBuffer()->mCurrentViewNumber = 0;
	mModel->viewCalc();
}

/**
 * @note Address: 0x8042EE98
 * @note Size: 0x68
 */
void ObjectActor::entry()
{
	if (mModel) {
		gameSystem->mSection->setDrawBuffer(DB_MapLayer);
		mModel->entry();
		gameSystem->mSection->setDrawBuffer(DB_NormalLayer);
	}
}

/**
 * @note Address: 0x8042EF00
 * @note Size: 0x1A4
 */
bool ObjectActor::setShape()
{
	if (moviePlayer->isFlag(MVP_IsFinished)) {
		return; // doesnt specify true or false
	}

	sys->startChangeCurrentHeap(moviePlayer->mMovieHeap);

	int id = mShape;
	if (id == gu32NAN_.a) {
		sys->endChangeCurrentHeap();
		return false;
	}

	if (id == mModelFileId) {
		sys->endChangeCurrentHeap();
		return true;
	}

	void* file = mArchive->getIdxResource(id);
	if (!file) {
		sys->endChangeCurrentHeap();
		return false;
	}

	u32 flag = 0x240000;
	// use different flags for the day results background model (makes it ignore fog)
	if (strcmp(mName, "bg")) {
		flag |= J3DMLF_Material_PE_FogOff;
	} else {
		flag |= J3DMLF_Material_PE_Full;
	}
	mModelData = J3DModelLoaderDataBase::load(file, flag);
	JUT_ASSERTLINE(281, mModelData, "ModelData null");

	if (!mModelData) {
		sys->endChangeCurrentHeap();
		return false;
	}

	mModel = new J3DModel(mModelData, 0, 1);
	JUT_ASSERTLINE(290, mModel, "pModel_ null");
	mModelFileId = mShape;
	sys->endChangeCurrentHeap();
	return true;
}

/**
 * @note Address: 0x8042F0A4
 * @note Size: 0x128
 */
bool ObjectActor::setAnim()
{
	if (moviePlayer->isFlag(MVP_IsFinished)) {
		return; // doesnt specify true or false
	}

	sys->startChangeCurrentHeap(moviePlayer->mMovieHeap);

	int id = mAnimation;
	if (id == gu32NAN_.a) {
		sys->endChangeCurrentHeap();
		return false;
	}

	if (id == mAnimationFileId) {
		sys->endChangeCurrentHeap();
		return true;
	}

	void* file = mArchive->getIdxResource(id);
	if (!file) {
		sys->endChangeCurrentHeap();
		return false;
	}

	mAnmTransform = static_cast<J3DAnmTransform*>(J3DAnmLoaderDataBase::load(file));
	if (!mAnmTransform) {
		sys->endChangeCurrentHeap();
		return false;
	}

	mMtxCalcAnm = J3DNewMtxCalcAnm(mModelData->mJointTree.mFlags & J3DMLF_MtxTypeMask, mAnmTransform);
	mModelData->getJointNodePointer(0)->setMtxCalc(mMtxCalcAnm);
	mAnimFrameMax    = mAnmTransform->getTotalFrameCount();
	mAnimationFileId = mAnimation;
	sys->endChangeCurrentHeap();
	return true;
}

/**
 * @note Address: 0x8042F1CC
 * @note Size: 0x38
 */
void ObjectActor::mountArchive()
{
	JUT_PANICLINE(359, "DON\'T CALL THIS !\n");
}

/**
 * @note Address: 0x8042F204
 * @note Size: 0x260
 */
void ObjectActor::parseUserData_(u32 p1, void const* p2)
{
	OSReport("data-ID : %u (0x%08x)\n", p1, p2);
	JStudio::stb::data::TParse_TParagraph_data v1(p2);
	JStudio::stb::data::TParse_TParagraph_data::TData v2;
	v1.getData(&v2);
	if (v2.mStatus == 0) {
		return;
	}
	if (v2.mData == 0 || v2.mStatus != 0x22 || v2.mDataBlockEnd == nullptr) {
		return;
	}

	OSReport("int16:%d,%d,%d\n");
	OSReport("char:%d,%c,%c\n");

	JStudio::stb::data::TParse_TParagraph_data v4(p2);
	JStudio::stb::data::TParse_TParagraph_data::TData v3;
	v4.getData(&v3);
	if (v3.mData && v3.isLoaded()) {
		char* str = (char*)v3.mFileCount;
		for (int i = 0; i < v3.mDataSize;) {
			OSReport("string:%u,%s\n", i, str);
			i++;
			str = strchr(str, 0) + 1;
		}
	}
	/*
	stwu     r1, -0xb0(r1)
	mflr     r0
	lis      r3, lbl_8049A158@ha
	stw      r0, 0xb4(r1)
	stw      r31, 0xac(r1)
	addi     r31, r3, lbl_8049A158@l
	addi     r3, r31, 0x64
	stw      r30, 0xa8(r1)
	stw      r29, 0xa4(r1)
	mr       r29, r5
	crclr    6
	bl       OSReport
	stw      r29, 0x20(r1)
	addi     r3, r1, 0x20
	addi     r4, r1, 0x8c
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r0, 0x8c(r1)
	cmplwi   r0, 0
	beq      lbl_8042F448
	lwz      r4, 0x98(r1)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_8042F278
	cmplwi   r0, 0x22
	bne      lbl_8042F278
	lwz      r0, 0x9c(r1)
	cmplwi   r0, 0
	beq      lbl_8042F278
	li       r3, 1

lbl_8042F278:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042F448
	stw      r4, 0x60(r1)
	b        lbl_8042F2D8

lbl_8042F288:
	lwz      r8, 0x60(r1)
	addi     r3, r31, 0x7c
	lwz      r4, 0x60(r1)
	subf     r7, r9, r8
	stw      r9, 0x58(r1)
	rlwinm   r0, r7, 0, 0, 0x1e
	lha      r5, 0(r4)
	lhax     r6, r9, r0
	srwi     r4, r7, 1
	stw      r8, 0x48(r1)
	stw      r9, 0x44(r1)
	stw      r9, 0x1c(r1)
	stw      r8, 0x18(r1)
	stw      r9, 0x40(r1)
	stw      r9, 0x3c(r1)
	crclr    6
	bl       OSReport
	lwz      r3, 0x60(r1)
	addi     r0, r3, 2
	stw      r0, 0x60(r1)

lbl_8042F2D8:
	lwz      r0, 0x94(r1)
	lwz      r9, 0x98(r1)
	slwi     r3, r0, 1
	lwz      r0, 0x60(r1)
	add      r3, r9, r3
	cmplw    r0, r3
	stw      r3, 0x54(r1)
	stw      r3, 0x38(r1)
	stw      r0, 0x34(r1)
	bne      lbl_8042F288
	lwz      r0, 0x60(r1)
	addi     r3, r1, 0x14
	addi     r4, r1, 0x78
	stw      r0, 0x14(r1)
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r0, 0x78(r1)
	cmplwi   r0, 0
	beq      lbl_8042F448
	lwz      r4, 0x84(r1)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_8042F348
	cmplwi   r0, 0x51
	bne      lbl_8042F348
	lwz      r0, 0x88(r1)
	cmplwi   r0, 0
	beq      lbl_8042F348
	li       r3, 1

lbl_8042F348:
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042F448
	stw      r4, 0x5c(r1)
	b        lbl_8042F3A0

lbl_8042F358:
	lwz      r7, 0x5c(r1)
	addi     r3, r31, 0x8c
	lwz      r5, 0x5c(r1)
	subf     r4, r8, r7
	stw      r8, 0x50(r1)
	lbz      r5, 0(r5)
	lbzx     r0, r8, r4
	stw      r8, 0x10(r1)
	extsb    r5, r5
	extsb    r6, r0
	stw      r7, 0xc(r1)
	stw      r8, 0x30(r1)
	stw      r8, 0x2c(r1)
	crclr    6
	bl       OSReport
	lwz      r3, 0x5c(r1)
	addi     r0, r3, 1
	stw      r0, 0x5c(r1)

lbl_8042F3A0:
	lwz      r8, 0x84(r1)
	lwz      r3, 0x80(r1)
	lwz      r0, 0x5c(r1)
	add      r3, r8, r3
	cmplw    r0, r3
	stw      r3, 0x4c(r1)
	stw      r3, 0x28(r1)
	stw      r0, 0x24(r1)
	bne      lbl_8042F358
	lwz      r0, 0x5c(r1)
	addi     r3, r1, 8
	addi     r4, r1, 0x64
	stw      r0, 8(r1)
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r3, 0x64(r1)
	cmplwi   r3, 0
	beq      lbl_8042F448
	lwz      r4, 0x70(r1)
	li       r0, 0
	cmplwi   r4, 0
	beq      lbl_8042F400
	cmplwi   r3, 0x60
	bne      lbl_8042F400
	li       r0, 1

lbl_8042F400:
	clrlwi.  r0, r0, 0x18
	beq      lbl_8042F448
	mr       r30, r4
	li       r29, 0
	b        lbl_8042F43C

lbl_8042F414:
	mr       r4, r29
	mr       r5, r30
	addi     r3, r31, 0x9c
	crclr    6
	bl       OSReport
	mr       r3, r30
	li       r4, 0
	addi     r29, r29, 1
	bl       strchr
	addi     r30, r3, 1

lbl_8042F43C:
	lwz      r0, 0x6c(r1)
	cmplw    r29, r0
	blt      lbl_8042F414

lbl_8042F448:
	lwz      r0, 0xb4(r1)
	lwz      r31, 0xac(r1)
	lwz      r30, 0xa8(r1)
	lwz      r29, 0xa4(r1)
	mtlr     r0
	addi     r1, r1, 0xb0
	blr
	*/
}

/**
 * @note Address: 0x8042F464
 * @note Size: 0x6C
 */
int ObjectActor::JSGFindNodeID(char const* name) const
{
	P2ASSERTLINE(428, mModelData);
	return mModelData->getJointName()->getIndex(name);
}

/**
 * @note Address: 0x8042F4D0
 * @note Size: 0x8C
 */
bool ObjectActor::JSGGetNodeTransformation(u32 id, Mtx mtx) const
{
	P2ASSERTLINE(434, mModel);
	PSMTXCopy(mModel->mMtxBuffer->mWorldMatrices[(u16)id], mtx);
	return true;
}

/**
 * @note Address: 0x8042F55C
 * @note Size: 0x8
 */
char const* ObjectActor::JSGGetName() const
{
	return mName;
}

/**
 * @note Address: 0x8042F564
 * @note Size: 0x8
 */
void ObjectActor::JSGSetFlag(u32 a1)
{
	mFlags = a1;
}

/**
 * @note Address: 0x8042F56C
 * @note Size: 0x8
 */
u32 ObjectActor::JSGGetFlag() const
{
	return mFlags;
}

/**
 * @note Address: 0x8042F574
 * @note Size: 0x38
 */
void ObjectActor::JSGSetData(u32 data1, void const* data2, u32 data3)
{
	_14 = data1;
	_18 = data2;
	_1C = data3;
	parseUserData_(data1, data2);
}

/**
 * @note Address: 0x8042F5AC
 * @note Size: 0x1C
 */
void ObjectActor::JSGSetTranslation(Vec const& translate)
{
	mTranslation = translate;
}

/**
 * @note Address: 0x8042F5C8
 * @note Size: 0x1C
 */
void ObjectActor::JSGGetTranslation(Vec* translate) const
{
	translate->x = mTranslation.x;
	translate->y = mTranslation.y;
	translate->z = mTranslation.z;
}

/**
 * @note Address: 0x8042F5E4
 * @note Size: 0x1C
 */
void ObjectActor::JSGSetRotation(Vec const& rotate)
{
	mRotation = rotate;
}

/**
 * @note Address: 0x8042F600
 * @note Size: 0x1C
 */
void ObjectActor::JSGGetRotation(Vec* rotate) const
{
	rotate->x = mRotation.x;
	rotate->y = mRotation.y;
	rotate->z = mRotation.z;
}

/**
 * @note Address: 0x8042F61C
 * @note Size: 0x1C
 */
void ObjectActor::JSGSetScaling(Vec const& scale)
{
	mScaling = scale;
}

/**
 * @note Address: 0x8042F638
 * @note Size: 0x1C
 */
void ObjectActor::JSGGetScaling(Vec* scale) const
{
	scale->x = mScaling.x;
	scale->y = mScaling.y;
	scale->z = mScaling.z;
}

/**
 * @note Address: 0x8042F654
 * @note Size: 0x8
 */
void ObjectActor::JSGSetShape(u32 a1)
{
	mShape = a1;
}

/**
 * @note Address: 0x8042F65C
 * @note Size: 0x8
 */
int ObjectActor::JSGGetShape() const
{
	return mShape;
}

/**
 * @note Address: 0x8042F664
 * @note Size: 0x8
 */
void ObjectActor::JSGSetAnimation(u32 a1)
{
	mAnimation = a1;
}

/**
 * @note Address: 0x8042F66C
 * @note Size: 0x8
 */
int ObjectActor::JSGGetAnimation() const
{
	return mAnimation;
}

/**
 * @note Address: 0x8042F674
 * @note Size: 0x8
 */
f32 ObjectActor::JSGGetAnimationFrameMax() const
{
	return mAnimFrameMax;
}

/**
 * @note Address: 0x8042F67C
 * @note Size: 0x4
 */
void ObjectActor::JSGSetAnimationFrame(f32)
{
}

/**
 * @note Address: 0x8042F680
 * @note Size: 0x8
 */
f32 ObjectActor::JSGGetAnimationFrame() const
{
	return mAnimFrame;
}

} // namespace P2JST
} // namespace Game
