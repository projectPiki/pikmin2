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

/*
 * --INFO--
 * Address:	801C4BD4
 * Size:	000028
 */
void PlatInstance::setCollision(bool makeCollActive)
{
	if (makeCollActive) {
		setFlag(PLATFLAG_CollisionActive);
	} else {
		resetFlag(PLATFLAG_CollisionActive);
	}
}

/*
 * --INFO--
 * Address:	801C4BFC
 * Size:	000020
 */
Vector3f PlatInstance::getPosition()
{
	Vector3f result;
	mMatrix->getTranslation(result);
	return result;
}

/*
 * --INFO--
 * Address:	801C4C1C
 * Size:	000050
 */
void PlatInstance::getBoundingSphere(Sys::Sphere& sphere) { sphere = mPlatform->getTriDivider()->mRoot.mSphere; }

/*
 * --INFO--
 * Address:	801C4C6C
 * Size:	000254
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
			info.mNormalVec = mtx.mult(info.mNormalVec);
		} else {
			info.mNormalVec = mtx.mult(info.mNormalVec);
		}
	}

	if (info.mGetFullInfo) {
		info.mMinY        = info.mMinY * mMatrix->mMatrix.structView.yy + mMatrix->mMatrix.structView.ty;
		info.mMaxY        = info.mMaxY * mMatrix->mMatrix.structView.yy + mMatrix->mMatrix.structView.ty;
		info.mGetFullInfo = false;
	}
}

/*
 * --INFO--
 * Address:	801C4EC0
 * Size:	0002E4
 */
void PlatInstance::traceMove(MoveInfo& info, f32 step)
{
	Matrixf mtx;
	Matrixf invMtx;
	if (MapMgr::mTraceMoveOptLevel >= 2) {
		Sys::Sphere sphere = mPlatform->getTriDivider()->mRoot.mSphere;
		sphere.mPosition   = sphere.mPosition + mMatrix->getBasis(3);

		if (!sphere.intersect(*info.mMoveSphere)) {
			return;
		}
	}

	PSMTXCopy(mMatrix->mMatrix.mtxView, mtx.mMatrix.mtxView);

	if (!useFixCollision || !isFlag(PLATFLAG_IsCollisionStatic)) {
		PSMTXInverse(mtx.mMatrix.mtxView, invMtx.mMatrix.mtxView);
	}

	Sys::Triangle* bounceTri = info.mBounceTriangle;
	Sys::Triangle* wallTri   = info.mWallTriangle;

	info.mBounceTriangle = nullptr;
	info.mWallTriangle   = nullptr;
	info._4C             = nullptr;

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

	if (info.mInfoOrigin) {
		if (info.mBounceTriangle) {
			PlatEvent event;
			event.mInstance = this;
			event.mPosition = info.mPosition;
			event.mObj      = mItem;

			info.mInfoOrigin->platCallback(event);
			mOnCount++;

			if (mItem) {
				event.mObj = info.mInfoOrigin;
				mItem->platCallback(event);
			}
		} else {
			info.mBounceTriangle = bounceTri;
		}

		if (info.mWallTriangle) {
			PlatEvent event;
			event.mInstance = this;
			event.mPosition = info.mReflectPosition;
			event.mObj      = mItem;
			info.mInfoOrigin->platCallback(event);
		} else {
			info.mWallTriangle = wallTri;
		}

		if (info._4C) {
			PlatEvent event;
			event.mInstance = this;
			event.mPosition = info._68;
			event.mObj      = mItem;
			info.mInfoOrigin->platCallback(event);
		}
	}

	Sys::OBBTree::debugTraceMove = false;
}

/*
 * --INFO--
 * Address:	801C51A4
 * Size:	000018
 */
PlatInstanceAttacher::PlatInstanceAttacher()
    : mInstanceCount(0)
    , mPlatInstances(nullptr)
    , mAttacher(nullptr)
    , mModel(nullptr)
{
}

/*
 * --INFO--
 * Address:	801C51BC
 * Size:	0001B0
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

/*
 * --INFO--
 * Address:	801C536C
 * Size:	000094
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

/*
 * --INFO--
 * Address:	801C5400
 * Size:	00009C
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

/*
 * --INFO--
 * Address:	801C549C
 * Size:	00008C
 */
void PlatInstanceAttacher::setCode(ID32& id, u16 jointIdx)
{
	for (int i = 0; i < mInstanceCount; i++) {
		if (jointIdx == mAttacher->getJointIndex(i)) {
			mPlatInstances[i]->mId = id;
		}
	}
}

/*
 * --INFO--
 * Address:	801C5528
 * Size:	0000C0
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

/*
 * --INFO--
 * Address:	801C55E8
 * Size:	0000B8
 */
PlatMgr::PlatMgr() { }

/*
 * --INFO--
 * Address:	801C58C0
 * Size:	000064
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

/*
 * --INFO--
 * Address:	801C5924
 * Size:	000270
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

		int val;
		Recti rect;
		Game::platCellMgr->calcExtent(sphere, val, rect);
		Game::platCellMgr->entry(instance, sphere);

		if (instance->mItem) {
			static_cast<Creature*>(instance->mItem)->getCreatureName();
		}
	}
	return instance;
}

/*
 * --INFO--
 * Address:	801C5B98
 * Size:	000020
 */
void PlatMgr::delInstance(PlatInstance* instance) { NodeObjectMgr::delNode(instance); }

/*
 * --INFO--
 * Address:	801C5BB8
 * Size:	0002A4
 */
void PlatMgr::traceMove(MoveInfo& info, f32 step)
{
	if (mUseCellMgr && platCellMgr) {
		CellIteratorArg iterArg(*info.mMoveSphere);
		iterArg.mCellMgr                   = platCellMgr;
		iterArg.mIsSphereCollisionDisabled = true;
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

/*
 * --INFO--
 * Address:	801C5EA8
 * Size:	0002B0
 */
void PlatMgr::getCurrTri(CurrTriInfo& info)
{
	if (mUseCellMgr && platCellMgr) {
		Sys::Sphere searchSphere;
		searchSphere.mPosition = info.mPosition;
		searchSphere.mRadius   = 0.0f;

		CellIteratorArg iterArg(searchSphere);
		iterArg.mCellMgr                   = platCellMgr;
		iterArg.mIsSphereCollisionDisabled = true;
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

/*
 * --INFO--
 * Address:	801C6158
 * Size:	000338
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

/*
 * --INFO--
 * Address:	801C6490
 * Size:	0001DC
 */
void PlatMgr::resetOnCount()
{
	Iterator<PlatInstance> iter(this);
	CI_LOOP(iter) { (*iter)->mOnCount = 0; }
}

/*
 * --INFO--
 * Address:	801C666C
 * Size:	000004
 */
void PlatMgr::doDirectDraw(Graphics&) { }

} // namespace Game
