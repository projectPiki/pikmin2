#include "Game/Entities/SnakeCrow.h"
#include "Game/MapMgr.h"

namespace Game {
namespace SnakeCrow {
namespace {
const f32 cSphereShadowRadius[8] = { 17.5f, 17.5f, 15.0f, 12.0f, 10.0f, 7.5f, 6.5f, 17.5f };
const f32 cTubeShadowRadius[8]   = { 17.5f, 16.5f, 13.5f, 11.0f, 9.0f, 7.0f, 6.0f, 7.5f };
} // namespace
} // namespace SnakeCrow

/**
 * @note Address: 0x802F8090
 * @note Size: 0x22C
 */
void SnakeCrowTubeShadowNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos1, Vector3f& pos2)
{
	Vector3f mtx[4];
	mtx[0].x = (pos2.x - pos1.x) * 0.5f;
	mtx[0].y = 0.0f;
	mtx[0].z = (pos2.z - pos1.z) * 0.5f;
	mtx[2]   = cross(mtx[0], parm.mRotation);
	mtx[2].normalise();

	mtx[2].x *= parm.mShadowScale;
	mtx[2].y *= parm.mShadowScale;
	mtx[2].z *= parm.mShadowScale;
	mtx[3].x = (pos2.x + pos1.x) * 0.5f;
	mtx[3].y = 0.0f;
	mtx[3].z = (pos2.z + pos1.z) * 0.5f;

	mtx[3].y = mapMgr->getMinY(mtx[3]) + 2.5f;
	mtx[1]   = Vector3f(0.0f, 50.0f, 0.0f);
	if (mtx[3].y < parm.mPosition.y) {
		f32 diff = parm.mPosition.y - mtx[3].y;
		mtx[3].y = parm.mPosition.y;
		mtx[1].y += diff;
	}

	mMainMtx->setColumn(0, mtx[0]);
	mMainMtx->setColumn(1, mtx[1]);
	mMainMtx->setColumn(2, mtx[2]);
	mMainMtx->setColumn(3, mtx[3]);
}

/**
 * @note Address: 0x802F82BC
 * @note Size: 0x12C
 */
void SnakeCrowSphereShadowNode::makeShadowSRT(JointShadowParm& parm, Vector3f& pos)
{
	Vector3f mtx[4];
	mtx[0] = Vector3f(parm.mShadowScale, 0.0f, 0.0f);
	mtx[2] = Vector3f(0.0f, 0.0f, parm.mShadowScale);

	mtx[3].x = pos.x;
	mtx[3].y = 0.0f;
	mtx[3].z = pos.z;

	mtx[3].y = mapMgr->getMinY(mtx[3]) + 2.5f;

	mtx[1] = Vector3f(0.0f, 50.0f, 0.0f);

	if (mtx[3].y < parm.mPosition.y) {
		f32 diff = parm.mPosition.y - mtx[3].y;
		mtx[3].y = parm.mPosition.y;
		mtx[1].y += diff;
	}

	mMainMtx->setColumn(0, mtx[0]);
	mMainMtx->setColumn(1, mtx[1]);
	mMainMtx->setColumn(2, mtx[2]);
	mMainMtx->setColumn(3, mtx[3]);
}

namespace SnakeCrow {
/**
 * @note Address: 0x802F83E8
 * @note Size: 0xEC
 */
SnakeCrowShadowMgr::SnakeCrowShadowMgr(Obj* owner)
{
	mOwner    = owner;
	mRootNode = new JointShadowRootNode(owner);

	for (int i = 0; i < 8; i++) {
		mTubeNodes[i] = new SnakeCrowTubeShadowNode;
		mRootNode->add(mTubeNodes[i]);

		mSphereNodes[i] = new SnakeCrowSphereShadowNode;
		mRootNode->add(mSphereNodes[i]);
	}
}

/**
 * @note Address: 0x802F84D4
 * @note Size: 0xC0
 */
void SnakeCrowShadowMgr::init()
{
	SysShape::Model* model = mOwner->mModel;
	char* jointNames[8]    = { "bodyjnt2", "bodyjnt3", "bodyjnt4", "bodyjnt5", "bodyjnt6", "bodyjnt7", "bodyjnt8", "kutijnt1" };

	for (int i = 0; i < 8; i++) {
		mMatrices[i] = model->getJoint(jointNames[i])->getWorldMatrix();
	}
}

/**
 * @note Address: 0x802F8594
 * @note Size: 0x78
 */
void SnakeCrowShadowMgr::startJointShadow()
{
	if (!mRootNode->mChild) {
		for (int i = 0; i < 8; i++) {
			mRootNode->add(mTubeNodes[i]);
			mRootNode->add(mSphereNodes[i]);
		}
	}
}

/**
 * @note Address: 0x802F860C
 * @note Size: 0x64
 */
void SnakeCrowShadowMgr::finishJointShadow()
{
	if (mRootNode->mChild) {
		for (int i = 0; i < 8; i++) {
			mTubeNodes[i]->del();
			mSphereNodes[i]->del();
		}
	}
}

/**
 * @note Address: 0x802F8670
 * @note Size: 0x25C
 */
void SnakeCrowShadowMgr::update()
{
	if (mOwner->isUnderground()) {
		return;
	}

	JointShadowParm parm;
	parm.mPosition = mOwner->getPosition();
	parm.mRotation = Vector3f(0.0f, 1.0f, 0.0f);
	parm._18       = 0.0f;
	parm._1C       = 0.0f;

	Vector3f positions[8];

	for (int i = 0; i < 8; i++) {
		positions[i] = mMatrices[i]->getColumn(3);
	}

	for (int i = 0; i < 8; i++) {
		parm.mShadowScale = cTubeShadowRadius[i];
		if (i < 7) {
			mTubeNodes[i]->makeShadowSRT(parm, positions[i], positions[i + 1]);
		} else {
			Vector3f kutiPos1;
			Vector3f kutiPos2;
			mMatrices[i]->getColumn(0, kutiPos1);
			kutiPos2 = kutiPos1;
			kutiPos1 *= 80.0f;
			kutiPos1 += positions[i];
			kutiPos2 += positions[i];
			mTubeNodes[i]->makeShadowSRT(parm, kutiPos1, kutiPos2);
		}

		parm.mShadowScale  = cSphereShadowRadius[i];
		Vector3f spherePos = mMatrices[i]->getColumn(3);
		mSphereNodes[i]->makeShadowSRT(parm, spherePos);
	}
}
} // namespace SnakeCrow
} // namespace Game
