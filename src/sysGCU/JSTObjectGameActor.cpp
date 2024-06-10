#include "Game/P2JST/ObjectActor.h"
#include "Game/MoviePlayer.h"
#include "Game/Piki.h"
#include "Game/MapMgr.h"
#include "nans.h"

static const u32 padding[]    = { 0, 0, 0 };
static const char className[] = "ObjectGameActor";

namespace Game {
namespace P2JST {

/**
 * @note Address: 0x8042FDA8
 * @note Size: 0x94
 */
ObjectGameActor::ObjectGameActor(char const* name, MoviePlayer* movie, Creature* obj)
    : ObjectActor(name, movie)
{
	mGameObject   = obj;
	mSRTCommand   = 0;
	mActorArchive = MoviePlayer::mArchive;
	reset();
	obj->movie_begin(true);
	mRotation2 = 0.0f;
}

/**
 * @note Address: 0x8042FE3C
 * @note Size: 0x54
 */
void ObjectGameActor::reset()
{
	mSRTCommand          = 0;
	mDoExtraSetTranslate = false;
	mCurrCommandCount    = 0;
	mUserDataNum         = 0;
	for (int i = 0; i < 4; i++) {
		mCommandIDs[i]       = -1;
		mMovieCommandData[i] = -1;
	}
	mRotation2 = 0.0f;
}

/**
 * @note Address: 0x8042FE90
 * @note Size: 0x124
 */
void ObjectGameActor::stop()
{
	SysShape::Model* mdl = mGameObject->mModel;
	if (mdl) {
		for (int i = 0; i < mGameObject->mModel->mJointCount; i++) {
			mdl->getJ3DModel()->getModelData()->getJointNodePointer(i)->setMtxCalc(nullptr);
		}
		mGameObject->setMovieMotion(false);
	}

	mGameObject->movieStartAnimation(0);
	mGameObject->movie_end(true);

	if (mSRTCommand == 1) {
		mGameObject->movieSetFaceDir(mObjectFaceDir);
		if (mGameObject->isNavi()) {
			mGameObject->getCreatureID();
		}
	}

	SysShape::Model* model = mGameObject->mModel;
	if (model) {
		model->mJ3dModel->calc();
	}
}

/**
 * @note Address: 0x8042FFB4
 * @note Size: 0x4D8
 */
void ObjectGameActor::update()
{
	if (mGameObject->mModel) {
		if (mGameObject->isNavi() && moviePlayer->isFlag(MVP_IsFinished)) {
			Piki* piki = static_cast<Piki*>(mGameObject);
			piki->mAnimator.mSelfAnimator.animate(10.0f);
			piki->mAnimator.mBoundAnimator.animate(10.0f);
			piki->mModel->mJ3dModel->calc();
		}
		SysShape::Joint* joint = mGameObject->mModel->mJoints;
		if (joint) {
			Matrixf* mtx   = joint->getWorldMatrix();
			mObjectFaceDir = JMath::atanTable_.atan2_(mtx->mMatrix.structView.zx, mtx->mMatrix.structView.zz);
			if (mGameObject->isNavi()) {
				mGameObject->getCreatureID();
			}
		}
	}

	for (int i = 0; i < mCurrCommandCount; i++) {
		if (mCommandIDs[i] >= CC_MovieCommand1) {
			mGameObject->movieUserCommand(mCommandIDs[i], mMoviePlayer);
		} else if (mCommandIDs[i] == CC_StartAnimation) {
			mGameObject->movieStartAnimation(mMovieCommandData[i]);
		} else if (mCommandIDs[i] == 1) {
			void* file = mActorArchive->getIdxResource(mMovieCommandData[i]);
			if (file) {
				sys->startChangeCurrentHeap(moviePlayer->mMovieHeap);
				SysShape::AnimInfo* anim = new SysShape::AnimInfo;
				anim->attach(mGameObject->mModel->mJ3dModel->mModelData, file);
				mGameObject->movieStartDemoAnimation(anim);
				mGameObject->setMovieMotion(true);
				if (mMoviePlayer && mMoviePlayer->isFlag(MVP_IsFinished)) {
					mGameObject->movieSetAnimationLastFrame();
				}
				sys->endChangeCurrentHeap();
			}
		}
	}

	if (mDoExtraSetTranslate) {
		Vector3f pos = Vector3f(moviePlayer->mTransform);
		mGameObject->movieSetTranslation(pos, moviePlayer->mTransformAngle);
	}

	switch (mSRTCommand) {
	case 5:
		Vector3f pos = Vector3f(moviePlayer->mTransform);
		mGameObject->movieSetTranslation(pos, moviePlayer->mTransformAngle);
		mDoExtraSetTranslate = true;
		break;
	case 4:
		JUT_PANICLINE(365, "DON\'T USE [SRT_COMMAND_GOTO]\n");
		if (mapMgr) {
			mTranslation2.y = mapMgr->getMinY(mTranslation2);
		}
		if (moviePlayer->isFlag(MVP_IsFinished)) {
			mGameObject->movieSetTranslation(mTranslation2, 0.0f);
			moviePlayer->unsuspend(1, false);
			mSRTCommand = 0;
		} else if (mGameObject->movieGotoPosition(mTranslation2)) {
			moviePlayer->unsuspend(1, false);
			mSRTCommand = 0;
		}
		break;
	case 3:
		f32 calc = mRotation2.y * DEG2RAD * PI;
		mGameObject->movieSetTranslation(mTranslation2, calc);
		break;
	case 1:
		mGameObject->movieSetTranslation(mTranslation2, moviePlayer->mTransformAngle);
		break;
	case 2:
		if (mapMgr) {
			mTranslation2.y = mapMgr->getMinY(mTranslation2);
		}
		mGameObject->movieSetTranslation(mTranslation2, moviePlayer->mTransformAngle);
		break;
	}

	mCurrCommandCount = 0;
	mUserDataNum      = 0;
	for (int i = 0; i < 4; i++) {
		mCommandIDs[i]       = -1;
		mMovieCommandData[i] = -1;
	}
}

/**
 * @note Address: 0x8043048C
 * @note Size: 0x74
 */
void ObjectGameActor::JSGSetAnimation(u32 id)
{
	JUT_ASSERTLINE(441, mCurrCommandCount < 4, "too many commands !\n");
	mCommandIDs[mCurrCommandCount++] = id;
}

/**
 * @note Address: 0x80430500
 * @note Size: 0x8
 */
void ObjectGameActor::JSGSetShape(u32 command) { mSRTCommand = command; }

/**
 * @note Address: 0x80430508
 * @note Size: 0x1C
 */
void ObjectGameActor::JSGSetTranslation(Vec const& pos) { mTranslation2 = pos; }

/**
 * @note Address: 0x80430524
 * @note Size: 0x58
 */
void ObjectGameActor::JSGGetTranslation(Vec* pos) const
{
	Vector3f pos2 = mGameObject->getPosition();
	pos->x        = pos2.x;
	pos->y        = pos2.y;
	pos->z        = pos2.z;
}

/**
 * @note Address: 0x8043057C
 * @note Size: 0x1C
 */
void ObjectGameActor::JSGSetRotation(Vec const& rot) { mRotation2 = rot; }

/**
 * @note Address: 0x80430598
 * @note Size: 0x1C
 */
void ObjectGameActor::JSGGetRotation(Vec* rot) const
{
	rot->x = mRotation2.x;
	rot->y = mRotation2.y;
	rot->z = mRotation2.z;
}

/**
 * @note Address: 0x804305B4
 * @note Size: 0xE0
 */
int ObjectGameActor::JSGFindNodeID(char const* name) const
{
	P2ASSERTLINE(492, mGameObject);
	P2ASSERTLINE(493, mGameObject->mModel);
	SysShape::Joint* joint = mGameObject->mModel->getJoint(const_cast<char*>(name));
	JUT_ASSERTLINE(499, joint, "(%s) joint %s not found\n", JSGGetName(), name);
	return joint->mJ3d->mJointIdx;
}

/**
 * @note Address: 0x80430694
 * @note Size: 0xD8
 */
bool ObjectGameActor::JSGGetNodeTransformation(u32 id, Mtx mtx) const
{
	P2ASSERTLINE(509, mGameObject);
	P2ASSERTLINE(510, mGameObject->mModel);
	SysShape::Joint* joint = &mGameObject->mModel->mJoints[id];
	JUT_ASSERTLINE(516, joint, "(%s) joint %d not found\n", JSGGetName(), id);
	PSMTXCopy(joint->getWorldMatrix()->mMatrix.mtxView, mtx);
	return true;
}

/**
 * @note Address: 0x8043076C
 * @note Size: 0x138
 */
void ObjectGameActor::parseUserData_(u32 data1, void const* data2)
{
	int count = mCurrCommandCount - 1;
	JUT_ASSERTLINE(531, count >= 0, "command <-> userData mismatch ! (%d)\n", mUserDataNum);
	JUT_ASSERTLINE(534, count < 4, "too many userdata (%d)\n", mUserDataNum);
	mUserDataNum++;

	JStudio::stb::data::TParse_TParagraph_data::TData tdata;
	JStudio::stb::data::TParse_TParagraph_data data(data2);
	data.getData(&tdata);
	if (tdata.mStatus) {
		bool test = false;
		if (tdata.mData && tdata.mStatus == 0x32 && tdata.mDataBlockEnd) {
			test = true;
		}
		if (test) {
			for (u16* i = (u16*)tdata.mData; i != (u16*)tdata.mData + tdata.mDataSize; i++) {
				mMovieCommandData[count] = i[0];
			}
		}
	}

	/*
	stwu     r1, -0x40(r1)
	mflr     r0
	lis      r4, lbl_8049A210@ha
	stw      r0, 0x44(r1)
	stw      r31, 0x3c(r1)
	mr       r31, r3
	stw      r30, 0x38(r1)
	addi     r30, r4, lbl_8049A210@l
	stw      r29, 0x34(r1)
	stw      r28, 0x30(r1)
	mr       r28, r5
	lwz      r3, 0x74(r3)
	addic.   r29, r3, -1
	bge      lbl_804307BC
	lwz      r6, 0xb0(r31)
	addi     r3, r30, 0x1c
	addi     r5, r30, 0xb0
	li       r4, 0x213
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804307BC:
	cmpwi    r29, 4
	blt      lbl_804307DC
	lwz      r6, 0xb0(r31)
	addi     r3, r30, 0x1c
	addi     r5, r30, 0xd8
	li       r4, 0x216
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_804307DC:
	lwz      r5, 0xb0(r31)
	addi     r3, r1, 8
	addi     r4, r1, 0x1c
	addi     r0, r5, 1
	stw      r0, 0xb0(r31)
	stw      r28, 8(r1)
	bl
getData__Q47JStudio3stb4data22TParse_TParagraph_dataCFPQ57JStudio3stb4data22TParse_TParagraph_data5TData
	lbz      r0, 0x1c(r1)
	cmplwi   r0, 0
	beq      lbl_80430884
	lwz      r4, 0x28(r1)
	li       r3, 0
	cmplwi   r4, 0
	beq      lbl_8043082C
	cmplwi   r0, 0x32
	bne      lbl_8043082C
	lwz      r0, 0x2c(r1)
	cmplwi   r0, 0
	beq      lbl_8043082C
	li       r3, 1

lbl_8043082C:
	clrlwi.  r0, r3, 0x18
	beq      lbl_80430884
	slwi     r3, r29, 1
	stw      r4, 0x18(r1)
	addi     r5, r3, 0xb4
	b        lbl_8043085C

lbl_80430844:
	lwz      r4, 0x18(r1)
	lwz      r3, 0x18(r1)
	lhz      r4, 0(r4)
	addi     r0, r3, 2
	sthx     r4, r31, r5
	stw      r0, 0x18(r1)

lbl_8043085C:
	lwz      r0, 0x24(r1)
	lwz      r4, 0x28(r1)
	slwi     r3, r0, 1
	lwz      r0, 0x18(r1)
	add      r4, r4, r3
	cmplw    r0, r4
	stw      r4, 0x14(r1)
	stw      r4, 0x10(r1)
	stw      r0, 0xc(r1)
	bne      lbl_80430844

lbl_80430884:
	lwz      r0, 0x44(r1)
	lwz      r31, 0x3c(r1)
	lwz      r30, 0x38(r1)
	lwz      r29, 0x34(r1)
	lwz      r28, 0x30(r1)
	mtlr     r0
	addi     r1, r1, 0x40
	blr
	*/
}

} // namespace P2JST
} // namespace Game
