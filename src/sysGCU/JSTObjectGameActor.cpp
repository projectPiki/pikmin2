#include "Game/P2JST/ObjectActor.h"
#include "Game/MoviePlayer.h"
#include "Game/Piki.h"
#include "Game/MapMgr.h"
#include "nans.h"
#include "JSystem/JStudio/stb.h"

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
	if (mGameObject->mModel) {
		for (int i = 0; i < mGameObject->mModel->mJointCount; i++) {
			mGameObject->mModel->getJ3DModel()->getModelData()->getJointNodePointer(i)->setMtxCalc(nullptr);
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
			piki->mAnimator.mSelfAnimator.animate(1.0f);
			piki->mAnimator.mBoundAnimator.animate(1.0f);
			piki->mModel->mJ3dModel->calc();
		}
		SysShape::Joint* joint = mGameObject->mModel->mJoints;
		if (joint) {
			Matrixf* mtx   = joint->getWorldMatrix();
			mObjectFaceDir = JMAAtan2Radian(mtx->mMatrix.structView.zx, mtx->mMatrix.structView.zz);
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
void ObjectGameActor::JSGSetShape(u32 command)
{
	mSRTCommand = command;
}

/**
 * @note Address: 0x80430508
 * @note Size: 0x1C
 */
void ObjectGameActor::JSGSetTranslation(Vec const& pos)
{
	mTranslation2 = pos;
}

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
void ObjectGameActor::JSGSetRotation(Vec const& rot)
{
	mRotation2 = rot;
}

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

	JStudio::stb::TParseData_fixed<0x32, JGadget::binary::TValueIterator_misaligned<u16> /**/> data(data2);
	if (!data.isEnd()) {
		if (data.isValid()) {
			for (JGadget::binary::TValueIterator_misaligned<u16> i(data.begin()); i != data.end(); ++i) {
				mMovieCommandData[count] = *i;
			}
		}
	}
}

} // namespace P2JST
} // namespace Game
