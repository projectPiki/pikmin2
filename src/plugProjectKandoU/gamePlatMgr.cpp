#include "Dolphin/mtx.h"
#include "Game/BaseItem.h"
#include "Game/cellPyramid.h"
#include "Game/CurrTriInfo.h"
#include "Game/MapMgr.h"
#include "Iterator.h"
#include "ObjectMgr.h"
#include "Platform.h"
#include "PlatAttacher.h"
#include "Game/PlatInstance.h"
#include "Rect.h"
#include "Sys/OBBTree.h"
#include "Sys/Sphere.h"
#include "SysShape/Model.h"
#include "SysShape/Joint.h"
#include "Sys/RayIntersectInfo.h"
#include "Vector3.h"
#include "System.h"
#include "id32.h"

namespace Game {

PlatMgr* platMgr;

bool PlatInstance::useFixCollision = true;
bool PlatMgr::mUseCellMgr          = true;

/**
 * @note Address: 0x801C4BD4
 * @note Size: 0x28
 */
void PlatInstance::setCollision(bool makeCollActive)
{
	if (makeCollActive) {
		setFlag(PLATFLAG_CollisionActive);
	} else {
		resetFlag(PLATFLAG_CollisionActive);
	}
}

/**
 * @note Address: 0x801C4BFC
 * @note Size: 0x20
 */
Vector3f PlatInstance::getPosition()
{
	Vector3f result;
	mMatrix->getTranslation(result);
	return result;
}

/**
 * @note Address: 0x801C4C1C
 * @note Size: 0x50
 */
void PlatInstance::getBoundingSphere(Sys::Sphere& sphere) { sphere = mPlatform->getTriDivider()->mRoot.mSphere; }

/**
 * @note Address: 0x801C4C6C
 * @note Size: 0x254
 */
void PlatInstance::getCurrTri(CurrTriInfo& info)
{
	Matrixf mtx;
	Matrixf invMtx;
	PSMTXCopy(mMatrix->mMatrix.mtxView, mtx.mMatrix.mtxView);

	if (!useFixCollision || !isFlag(PLATFLAG_IsCollisionStatic)) {
		PSMTXInverse(mtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
	}

	Vector3f newPos;
	if (useFixCollision && isFlag(PLATFLAG_IsCollisionStatic)) {
		newPos = mStaticCollMtx.mtxMult(info.mPosition);
	} else {
		newPos = invMtx.mtxMult(info.mPosition);
	}

	Vector3f oldPos = info.mPosition;
	info.mPosition  = newPos;

	mPlatform->getTriDivider()->getCurrTri(info);
	info.mPosition = oldPos;

	if (info.mGetFullInfo) {
		if (useFixCollision && isFlag(PLATFLAG_IsCollisionStatic)) {
			info.mNormalVec *= mtx;
		} else {
			info.mNormalVec *= mtx;
		}
	}

	if (info.mGetFullInfo) {
		info.mMinY        = info.mMinY * mMatrix->mMatrix.structView.yy + mMatrix->mMatrix.structView.ty;
		info.mMaxY        = info.mMaxY * mMatrix->mMatrix.structView.yy + mMatrix->mMatrix.structView.ty;
		info.mGetFullInfo = false;
	}
}

/**
 * @note Address: 0x801C4EC0
 * @note Size: 0x2E4
 */
void PlatInstance::traceMove(MoveInfo& info, f32 step)
{
	Matrixf mtx;
	Matrixf invMtx;
	if (MapMgr::mTraceMoveOptLevel >= 2) {
		Sys::Sphere sphere = mPlatform->getTriDivider()->mRoot.mSphere;
		sphere.mPosition   = sphere.mPosition + mMatrix->getColumn(3);

		if (!sphere.intersect(*info.mMoveSphere)) {
			return;
		}
	}

	PSMTXCopy(mMatrix->mMatrix.mtxView, mtx.mMatrix.mtxView);

	if (!useFixCollision || !isFlag(PLATFLAG_IsCollisionStatic)) {
		PSMTXInverse(mtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
	}

	Sys::Triangle* bounceTri = info.mFloorTriangle;
	Sys::Triangle* wallTri   = info.mWallTriangle;

	info.mFloorTriangle = nullptr;
	info.mWallTriangle  = nullptr;
	info.mOtherTriangle = nullptr;

	sys->mTimers->_start("plat-obb", true);

	Sys::OBBTree* triDivider = mPlatform->getTriDivider();
	if (mGlobalPlatform && MapMgr::mTraceMoveOptLevel >= 3) {
		mGlobalPlatform->getTriDivider()->traceMove_global(info, step);
	} else if (useFixCollision && isFlag(PLATFLAG_IsCollisionStatic)) {
		triDivider->traceMove(mtx, mStaticCollMtx, info, step);
	} else {
		triDivider->traceMove(mtx, invMtx, info, step);
	}

	sys->mTimers->_stop("plat-obb");

	if (info.mMovingCreature) {
		if (info.mFloorTriangle) {
			PlatEvent event;
			event.mInstance = this;
			event.mNormal   = info.mFloorNormal;
			event.mObj      = mItem;

			info.mMovingCreature->platCallback(event);
			mOnCount++;

			if (mItem) {
				event.mObj = info.mMovingCreature;
				mItem->platCallback(event);
			}
		} else {
			info.mFloorTriangle = bounceTri;
		}

		if (info.mWallTriangle) {
			PlatEvent event;
			event.mInstance = this;
			event.mNormal   = info.mWallNormal;
			event.mObj      = mItem;
			info.mMovingCreature->platCallback(event);
		} else {
			info.mWallTriangle = wallTri;
		}

		if (info.mOtherTriangle) {
			PlatEvent event;
			event.mInstance = this;
			event.mNormal   = info.mOtherNormal;
			event.mObj      = mItem;
			info.mMovingCreature->platCallback(event);
		}
	}

	Sys::OBBTree::debugTraceMove = false;
}

/**
 * @note Address: 0x801C51A4
 * @note Size: 0x18
 */
PlatInstanceAttacher::PlatInstanceAttacher()
    : mInstanceCount(0)
    , mPlatInstances(nullptr)
    , mAttacher(nullptr)
    , mModel(nullptr)
{
}

/**
 * @note Address: 0x801C51BC
 * @note Size: 0x1B0
 */
void PlatInstanceAttacher::addToMgr(Creature* obj, ID32& id, PlatAttacher* attacher, bool enableGlobalPlat)
{
	mAttacher      = attacher;
	mModel         = obj->mModel;
	mInstanceCount = attacher->getNumShapes();
	mPlatInstances = new PlatInstance*[mInstanceCount];

	for (int i = 0; i < mInstanceCount; i++) {
		Platform* platform = attacher->getPlatform(i);
		u16 jointIdx       = attacher->getJointIndex(i);
		Matrixf* mat       = mModel->mJoints[jointIdx].getWorldMatrix();

		PlatAddInstanceArg arg;
		arg.mItem             = static_cast<BaseItem*>(obj);
		arg.mId               = id;
		arg.mPlatform         = platform;
		arg.mMatrix           = mat;
		arg.mEnableGlobalPlat = enableGlobalPlat;

		mPlatInstances[i] = platMgr->addInstance(arg);

		if (platCellMgr) {
			PlatInstance* instance = mPlatInstances[i];

			Sys::Sphere sphere;
			instance->mMatrix->getTranslation(sphere.mPosition);

			Sys::OBBTree* divider = instance->mPlatform->getTriDivider();
			sphere.mPosition      = mat->mtxMult(divider->mRoot.mSphere.mPosition);
			sphere.mRadius        = divider->mRoot.mSphere.mRadius;
			Recti rect;
			int val;
			platCellMgr->calcExtent(sphere, val, rect);

			platCellMgr->entry(instance, sphere);

			if (instance->mItem) {
				static_cast<Creature*>(instance->mItem)->getCreatureName();
			}
		}
	}
}

/**
 * @note Address: 0x801C536C
 * @note Size: 0x94
 */
void PlatInstanceAttacher::setCollision(bool turnOnCollision, u16 jointIndex)
{
	for (int i = 0; i < mInstanceCount; i++) {
		if (jointIndex == mAttacher->getJointIndex(i)) {
			PlatInstance* instance = mPlatInstances[i];
			if (turnOnCollision) {
				instance->setFlag(PLATFLAG_CollisionActive);
			} else {
				instance->resetFlag(PLATFLAG_CollisionActive);
			}
		}
	}
}

/**
 * @note Address: 0x801C5400
 * @note Size: 0x9C
 */
void PlatInstanceAttacher::fixCollision(bool doFixCollision)
{
	for (int i = 0; i < mInstanceCount; i++) {
		PlatInstance* instance = mPlatInstances[i];
		if (doFixCollision) {
			instance->setFlag(PLATFLAG_IsCollisionStatic);
			PSMTXInverse(instance->mMatrix->mMatrix.mtxView, instance->mStaticCollMtx.mMatrix.mtxView);
		} else {
			instance->resetFlag(PLATFLAG_IsCollisionStatic);
		}
	}
}

/**
 * @note Address: 0x801C549C
 * @note Size: 0x8C
 */
void PlatInstanceAttacher::setCode(ID32& id, u16 jointIdx)
{
	for (int i = 0; i < mInstanceCount; i++) {
		if (jointIdx == mAttacher->getJointIndex(i)) {
			mPlatInstances[i]->mId = id;
		}
	}
}

/**
 * @note Address: 0x801C5528
 * @note Size: 0xC0
 */
void PlatInstanceAttacher::setShapeVisibility()
{
	for (int i = 0; i < mInstanceCount; i++) {
		PlatInstance* instance = mPlatInstances[i];
		u16 jointIdx           = mAttacher->getJointIndex(i);
		if (instance->isFlag(PLATFLAG_CollisionActive)) {
			mModel->jointVisible(true, jointIdx);
		} else {
			mModel->jointVisible(false, jointIdx);
		}
	}
}

/**
 * @note Address: 0x801C55E8
 * @note Size: 0xB8
 */
PlatMgr::PlatMgr() { }

/**
 * @note Address: 0x801C58C0
 * @note Size: 0x64
 */
PlatAddInstanceArg::PlatAddInstanceArg()
    : mId()
{
	mItem = nullptr;
	mId.setID('null');
	mPlatform         = nullptr;
	mMatrix           = nullptr;
	mEnableGlobalPlat = false;
	mRadius           = 0.0f;
}

/**
 * @note Address: 0x801C5924
 * @note Size: 0x270
 */
PlatInstance* PlatMgr::addInstance(PlatAddInstanceArg& arg)
{
	PlatInstance* instance = new PlatInstance();
	instance->mMatrix      = arg.mMatrix;
	instance->mId          = arg.mId;
	instance->mItem        = arg.mItem;

	if (arg.mEnableGlobalPlat) {
		instance->mPlatform       = arg.mPlatform;
		instance->mGlobalPlatform = arg.mPlatform->clone(*arg.mMatrix);
		instance->setFlag(PLATFLAG_GlobalPlatEnabled);
	} else {
		instance->mPlatform = arg.mPlatform;
	}

	TObjectNode<PlatInstance>* node = new TObjectNode<PlatInstance>();
	node->mContents                 = instance;
	mNode.add(node);
	node->mContents->constructor();

	if (Game::platCellMgr) {
		Sys::Sphere sphere;
		sphere.mPosition.x = instance->mMatrix->mMatrix.structView.tx;
		sphere.mPosition.y = instance->mMatrix->mMatrix.structView.ty;
		sphere.mPosition.z = instance->mMatrix->mMatrix.structView.tz;

		Sys::OBBTree* div = (Sys::OBBTree*)instance->mPlatform->getTriDivider();

		sphere.mPosition = sphere.mPosition + div->mRoot.mSphere.mPosition;
		sphere.mRadius   = div->mRoot.mSphere.mRadius;

		if (arg.mRadius > 0.0f) {
			sphere.mRadius = arg.mRadius;
		}

		int layerIndex;
		Recti rect;
		Game::platCellMgr->calcExtent(sphere, layerIndex, rect);
		Game::platCellMgr->entry(instance, sphere);

		if (instance->mItem) {
			static_cast<Creature*>(instance->mItem)->getCreatureName();
		}
	}
	return instance;
}

/**
 * @note Address: 0x801C5B98
 * @note Size: 0x20
 */
void PlatMgr::delInstance(PlatInstance* instance) { NodeObjectMgr::delNode(instance); }

/**
 * @note Address: 0x801C5BB8
 * @note Size: 0x2A4
 */
void PlatMgr::traceMove(MoveInfo& info, f32 step)
{
	if (mUseCellMgr && platCellMgr) {
		CellIteratorArg iterArg(*info.mMoveSphere);
		iterArg.mCellMgr  = platCellMgr;
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);
		CI_LOOP(iter)
		{
			PlatInstance* instance = static_cast<PlatInstance*>(iter.getCellObject());
			if (instance->isFlag(PLATFLAG_CollisionActive)) {
				instance->traceMove(info, step);
			}
		}
		return;
	}

	Iterator<PlatInstance> iter(this);
	CI_LOOP(iter)
	{
		if ((*iter)->isFlag(PLATFLAG_CollisionActive)) {
			(*iter)->traceMove(info, step);
		}
	}
}

/**
 * @note Address: 0x801C5EA8
 * @note Size: 0x2B0
 */
void PlatMgr::getCurrTri(CurrTriInfo& info)
{
	if (mUseCellMgr && platCellMgr) {
		Sys::Sphere searchSphere(info.mPosition, 0.0f);
		CellIteratorArg iterArg(searchSphere);
		iterArg.mCellMgr  = platCellMgr;
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);

		CI_LOOP(iter)
		{
			PlatInstance* instance = static_cast<PlatInstance*>(iter.getCellObject());
			if (instance->isFlag(PLATFLAG_CollisionActive)) {
				instance->getCurrTri(info);
			}
		}

		return;
	}

	Iterator<PlatInstance> iter(this);
	CI_LOOP(iter)
	{
		if ((*iter)->isFlag(PLATFLAG_CollisionActive)) {
			(*iter)->getCurrTri(info);
		}
	}
}

/**
 * @note Address: 0x801C6158
 * @note Size: 0x338
 */
bool PlatMgr::findRayIntersection(Sys::RayIntersectInfo& info)
{
	// unused (but annoying).
	Vector3f edgeVec(info.mIntersectEdge.mStartPos.y - info.mIntersectEdge.mEndPos.y,
	                 info.mIntersectEdge.mStartPos.z - info.mIntersectEdge.mEndPos.z,
	                 info.mIntersectEdge.mStartPos.x - info.mIntersectEdge.mEndPos.x);
	_length2(edgeVec);

	Iterator<PlatInstance> iter(this);

	f32 minDist = 12800000.0f;
	bool check  = false;
	Vector3f pos;
	CI_LOOP(iter)
	{
		PlatInstance* instance = *iter;
		if (instance->isFlag(PLATFLAG_CollisionActive)) {
			Sys::OBBTree* divider = instance->mPlatform->getTriDivider();
			Matrixf mtx;
			Matrixf invMtx;
			PSMTXCopy(instance->mMatrix->mMatrix.mtxView, mtx.mMatrix.mtxView);

			if (!PlatInstance::useFixCollision || !instance->isFlag(PLATFLAG_IsCollisionStatic)) {
				PSMTXInverse(mtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
			} else {
				PSMTXCopy(instance->mStaticCollMtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
			}

			if (divider->findRayIntersection(info, mtx, invMtx) && info.mDistance < minDist) {
				minDist = info.mDistance;
				pos     = info.mIntersectPosition;
				check   = true;
			}
		}
	}

	if (check) {
		info.mIntersectPosition = pos;
		return true;
	}

	return false;
}

/**
 * @note Address: 0x801C6490
 * @note Size: 0x1DC
 */
void PlatMgr::resetOnCount()
{
	Iterator<PlatInstance> iter(this);
	CI_LOOP(iter) { (*iter)->mOnCount = 0; }
}

/**
 * @note Address: 0x801C666C
 * @note Size: 0x4
 */
void PlatMgr::doDirectDraw(Graphics&) { }

} // namespace Game
