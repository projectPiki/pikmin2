#include "Game/SnakeJointMgr.h"

namespace Game {

namespace {
const f32 cJointModRatio[6] = { 0.0f, 0.2f, 0.4f, 0.6f, 0.8f, 1.0f };
}; // namespace

static SnakeJointMgr* sSnakeJointMgr;

/**
 * @note Address: 0x802D1634
 * @note Size: 0x38
 */
static bool SnakeJointCallBack(J3DJoint* joint, int idx)
{
	if (idx == 0 && sSnakeJointMgr) {
		sSnakeJointMgr->makeMatrix();
	}

	return false;
}

/**
 * @note Address: 0x802D166C
 * @note Size: 0x3C
 */
SnakeJointMgr::SnakeJointMgr(EnemyBase* enemy)
{
	sSnakeJointMgr = nullptr;
	mObj           = enemy;
	for (int i = 0; i < 6; i++) {
		mJointMatrices[i] = nullptr;
	}
	mState = SNAKEJOINT_Finish;
	_20    = 0.0f;
	_28    = 0.0f;
	_24    = 0.0f;
}

/**
 * @note Address: 0x802D16A8
 * @note Size: 0xB8
 */
void SnakeJointMgr::setupCallBackJoint()
{
	char* joints[6]        = { "bodyjnt3", "bodyjnt4", "bodyjnt5", "bodyjnt6", "bodyjnt7", "bodyjnt8" };
	SysShape::Model* model = getModel();
	for (int i = 0; i < 6; i++) {
		SysShape::Joint* joint = model->getJoint(joints[i]);
		if (joint) {
			mJointMatrices[i] = joint->getWorldMatrix();
			if (i == 5) {
				joint->mJ3d->mFunction = &SnakeJointCallBack;
			}
		}
	}
}

/**
 * @note Address: 0x802D1760
 * @note Size: 0x20
 */
void SnakeJointMgr::startModify(f32 p1, f32 p2)
{
	mState = SNAKEJOINT_Modify;
	_20    = p1;
	_28    = p2;
	_24    = p2;
	_2C    = 0.0f;
}

/**
 * @note Address: 0x802D1780
 * @note Size: 0x1C
 */
void SnakeJointMgr::returnModify(f32 p1)
{
	mState = SNAKEJOINT_ReturnModify;
	_28    = p1;
	_24    = p1;
	_2C    = 1.0f;
}

/**
 * @note Address: 0x802D179C
 * @note Size: 0xC
 */
void SnakeJointMgr::finishModify()
{
	mState = SNAKEJOINT_Finish;
}

/**
 * @note Address: 0x802D17A8
 * @note Size: 0x80
 */
void SnakeJointMgr::doAnimation()
{
	sSnakeJointMgr = this;
	if (mState == SNAKEJOINT_Finish) {
		return;
	}

	_28 -= 30.0f * sys->mDeltaTime;
	if (_28 < 0.0f) {
		_28 = 0.0f;
	}

	if (mState == SNAKEJOINT_Modify) {
		_2C = 1.0f - (_28 / _24);
		return;
	}

	if (mState == SNAKEJOINT_ReturnModify) {
		_2C = _28 / _24;
	}
}

/**
 * @note Address: 0x802D1828
 * @note Size: 0xC
 */
void SnakeJointMgr::finishAnimation()
{
	sSnakeJointMgr = nullptr;
}

/**
 * @note Address: 0x802D1834
 * @note Size: 0x2AC
 */
void SnakeJointMgr::makeMatrix()
{
	if (mState == SNAKEJOINT_Finish) {
		return;
	}

	f32 dists[5];

	for (int i = 0; i < 6; i++) {
		Vector3f pos;
		mJointMatrices[i]->getTranslation(pos);

		if (i < 5) {
			Vector3f newPos;
			mJointMatrices[i + 1]->getTranslation(newPos);
			dists[i] = pos.distance(newPos);
		}

		f32 modRatio = (cJointModRatio[i] * _20);
		pos.y += _2C * modRatio;
		mJointMatrices[i]->setColumn(3, pos);
	}

	for (int i = 0; i < 5; i++) {
		Vector3f pos;
		mJointMatrices[i]->getTranslation(pos);
		Vector3f nextPos;
		mJointMatrices[i + 1]->getTranslation(nextPos);
		Vector3f xVec;
		xVec.x         = nextPos.x - pos.x;
		xVec.y         = nextPos.y - pos.y;
		xVec.z         = nextPos.z - pos.z;
		Vector3f nextZ = mJointMatrices[i]->getColumn(2);
		Vector3f yVec;
		Vector3f zVec;
		yVec    = cross(nextZ, xVec);
		zVec    = cross(xVec, yVec);
		f32 len = xVec.normalise();
		yVec.normalise();
		zVec.normalise();

		xVec *= len / dists[i];
		mJointMatrices[i]->setColumn(0, xVec);
		mJointMatrices[i]->setColumn(1, yVec);
		mJointMatrices[i]->setColumn(2, zVec);
	}

	PSMTXCopy(mJointMatrices[5]->mMatrix.mtxView, J3DSys::mCurrentMtx);
}
} // namespace Game
