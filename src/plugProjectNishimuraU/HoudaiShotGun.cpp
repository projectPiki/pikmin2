#include "Game/Entities/Houdai.h"
#include "Game/MapMgr.h"
#include "Game/rumble.h"
#include "Dolphin/rand.h"
#include "PS.h"

namespace Game {
namespace Houdai {

static HoudaiShotGunMgr* sHoudaiShotGunMgr = nullptr;

/**
 * @note Address: 0x802C394C
 * @note Size: 0x3C
 */
static bool levelRotationCallBack(J3DJoint* joint, int idx)
{
	if (idx == 0 && sHoudaiShotGunMgr) {
		sHoudaiShotGunMgr->rotateLevel(joint);
	}

	return false;
}

/**
 * @note Address: 0x802C3988
 * @note Size: 0x3C
 */
static bool verticalRotationCallBack(J3DJoint* joint, int idx)
{
	if (idx == 0 && sHoudaiShotGunMgr) {
		sHoudaiShotGunMgr->rotateVertical(joint);
	}

	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
HoudaiShotGunNode::HoudaiShotGunNode(Obj* owner)
    : mOwner(owner)
{
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void HoudaiShotGunNode::create()
{
	mVelocity = Vector3f(0.0f, 1.0f, 0.0f); // fake just to line up sdata
	                                        // UNUSED/INLINED
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void HoudaiShotGunNode::setPosition(Vector3f& pos)
{
	mPosition = pos;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void HoudaiShotGunNode::setVelocity(Vector3f& vel)
{
	mVelocity = vel;
}

/**
 * @note Address: N/A
 * @note Size: 0xD8
 */
void HoudaiShotGunNode::startShotGun()
{
	Vector3f dir = mVelocity;
	dir.normalise();

	efx::ArgDir fxArg(mPosition);
	fxArg.mAngle = dir;

	mEfxShell->mPosition = &mPosition;
	mEfxShell->create(&fxArg);
}

/**
 * @note Address: 0x802C39C4
 * @note Size: 0xB10
 */
bool HoudaiShotGunNode::update()
{
	bool result       = false;
	Vector3f startPos = mPosition;
	Sys::Sphere moveSphere(mPosition, 10.0f); // 0x78

	MoveInfo moveInfo(&moveSphere, &mVelocity, 0.0f); // 0x1B0
	moveInfo.mMovingCreature = mOwner;
	mapMgr->traceMove(moveInfo, sys->mDeltaTime);

	setPosition(moveSphere.mPosition);

	if (moveInfo.mFloorTriangle || moveInfo.mWallTriangle) {
		Vector3f groundPos = mPosition;
		groundPos.y        = mapMgr->getMinY(groundPos);

		if (mPosition.y - groundPos.y < 20.0f) {
			mPosition.y = 10.0f + groundPos.y;
		}

		Vector3f effectPos = mPosition;
		effectPos.y -= 10.0f;

		WaterBox* wbox = mapMgr->findWater(moveSphere);

		if (wbox) {
			effectPos.y = *wbox->getSeaHeightPtr();
			efx::Arg fxArg(effectPos);
			efx::THdamaHit3 hitFX;
			hitFX.create(&fxArg);

		} else if (moveInfo.mFloorTriangle) {
			if (moveInfo.mMapCode.getAttribute() == (MapCode::Code::Attribute2 + MapCode::Code::Attribute3)) {
				efx::Arg fxArg(effectPos);
				efx::THdamaHit2 hitFX;
				hitFX.create(&fxArg);
			} else {
				efx::Arg fxArg(effectPos);
				efx::THdamaHit1 hitFX;
				hitFX.create(&fxArg);
			}

		} else if (moveInfo.mWallTriangle) {
			efx::ArgDir fxArg(effectPos);
			fxArg.mAngle = moveInfo.mWallNormal;
			efx::THdamaHit2W hitFX;
			hitFX.create(&fxArg);
		}

		mEfxShell->fade();
		result = true;
		if (wbox) {
			PSStartSoundVec(PSSE_EN_HOUDAI_WATER_IMPACT, (Vec*)&mPosition);
		} else {
			PSStartSoundVec(PSSE_EN_HOUDAI_IMPACT, (Vec*)&mPosition);
		}

		rumbleMgr->startRumble(RUMBLETYPE_Fixed11, effectPos, RUMBLEID_Both);

	} else {
		Vector3f houdaiPos = mOwner->getPosition();
		if (absVal(houdaiPos.x - mPosition.x) > 1500.0f || absVal(houdaiPos.y - mPosition.y) > 1000.0f
		    || absVal(houdaiPos.z - mPosition.z) > 1500.0f) {
			mEfxShell->fade();
			result = true;
		}
	}

	Vector3f newPos = mPosition;
	startPos.y -= 10.0f;
	newPos.y -= 10.0f;

	f32 dist   = startPos.distance(newPos);
	f32 radius = CG_GENERALPARMS(mOwner).mAttackRadius();

	if (dist > 0.0f) {
		Vector3f searchCenter((startPos.x + newPos.x) * 0.5f, (startPos.y + newPos.y) * 0.5f, (startPos.z + newPos.z) * 0.5f);
		f32 searchRadius = dist + radius;
		Vector3f vec1    = newPos - startPos;
		vec1.normalise();

		Vector3f yAxis(0.0f, 1.0f, 0.0f);

		Vector3f vec3(0.0f, 0.0f, 0.0f);
		Vector3f vec2 = cross(yAxis, vec1);
		vec2.normalise();

		vec3 = cross(vec1, vec2);
		vec3.normalise();

		Sys::Sphere searchSphere(searchCenter, searchRadius);
		CellIteratorArg iterArg(searchSphere);
		iterArg.mOptimise = true;

		CellIterator iter(iterArg);
		CI_LOOP(iter)
		{
			Creature* target = static_cast<Creature*>(*iter);
			if (!target->isAlive()) {
				continue;
			}

			Vector3f creaturePos = target->getPosition();
			Vector3f sep         = creaturePos - startPos;

			f32 dot2 = vec2.dot(sep);
			if (!(absVal(dot2) < radius)) {
				continue;
			}

			f32 dot3 = vec3.dot(sep);
			if (!(absVal(dot3) < radius)) {
				continue;
			}

			f32 dot1 = vec1.dot(sep);
			if (!(dot1 > -radius)) {
				continue;
			}

			if (!(dot1 < searchRadius)) {
				continue;
			}

			if (target->isNavi() || (target->isPiki() && static_cast<Piki*>(target)->isPikmin())) {
				Vector3f blastDir(dot2 * vec2.x, 0.0f, dot2 * vec2.z);
				blastDir.normalise();

				blastDir.x *= 100.0f;
				if (target->isPiki()) {
					blastDir.y = 100.0f;
				}
				blastDir.z *= 100.0f;
				InteractBomb blast(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage(), &blastDir);
				target->stimulate(blast);
				continue;
			}

			if (target->isTeki() && target != mOwner) {
				InteractBomb blast(mOwner, 500.0f, &Vector3f::zero);
				target->stimulate(blast);
			}
		}
	}
	return result;
}

/**
 * @note Address: 0x802C44D4
 * @note Size: 0x240
 */
HoudaiShotGunMgr::HoudaiShotGunMgr(Obj* houdai)
    : mOwner(houdai)
    , mIsShotGunRotation(false)
    , mIsShotGunLockedOn(false)
    , mIsShotGunFinished(false)
{
	mPitch         = 0.0f;
	mYaw           = 0.0f;
	mActiveNodes   = new HoudaiShotGunNode(mOwner);
	mInactiveNodes = new HoudaiShotGunNode(mOwner);

	for (int i = 0; i < 10; i++) {
		HoudaiShotGunNode* node = new HoudaiShotGunNode(mOwner);
		node->mEfxShell         = new efx::THdamaShell;
		node->mPosition         = Vector3f::zero;
		node->mVelocity         = Vector3f::zero;

		mInactiveNodes->add(node);
	}

	mEfxSight = new efx::THdamaSight();

	sHoudaiShotGunMgr = nullptr;
}

/**
 * @note Address: 0x802C4714
 * @note Size: 0xB4
 */
void HoudaiShotGunMgr::setupShotGun()
{
	mIsShotGunRotation = false;
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = false;
	mPitch             = 0.0f;
	mYaw               = 0.0f;

	SysShape::Joint* headJnt = mOwner->mModel->getJoint("tamajnt");
	SysShape::Joint* gunJnt  = mOwner->mModel->getJoint("gun");

	headJnt->mJ3d->mFunction = &levelRotationCallBack;
	gunJnt->mJ3d->mFunction  = &verticalRotationCallBack;

	mHeadMtx = headJnt->getWorldMatrix();
	mGunMtx  = gunJnt->getWorldMatrix();
}

/**
 * @note Address: 0x802C47C8
 * @note Size: 0xC
 */
void HoudaiShotGunMgr::resetCallBack()
{
	sHoudaiShotGunMgr = nullptr;
}

/**
 * @note Address: 0x802C47D4
 * @note Size: 0x8
 */
void HoudaiShotGunMgr::setCallBack()
{
	sHoudaiShotGunMgr = this;
}

/**
 * @note Address: 0x802C47DC
 * @note Size: 0x24
 */
void HoudaiShotGunMgr::startRotation()
{
	mIsShotGunRotation = true;
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = false;
	mPitch             = 0.0f;
	mYaw               = 0.0f;
}

/**
 * @note Address: 0x802C4800
 * @note Size: 0x14
 */
void HoudaiShotGunMgr::finishRotation()
{
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = true;
}

/**
 * @note Address: 0x802C4814
 * @note Size: 0x8
 */
bool HoudaiShotGunMgr::isShotGunRotation()
{
	return mIsShotGunRotation;
}

/**
 * @note Address: 0x802C481C
 * @note Size: 0x8
 */
bool HoudaiShotGunMgr::isShotGunLockOn()
{
	return mIsShotGunLockedOn;
}

/**
 * @note Address: 0x802C4824
 * @note Size: 0x8
 */
bool HoudaiShotGunMgr::isFinishShotGun()
{
	return mIsShotGunFinished;
}

/**
 * @note Address: 0x802C482C
 * @note Size: 0x1C
 */
void HoudaiShotGunMgr::setShotGunTarget(Vector3f& pos)
{
	mTargetPosition = pos;
}

/**
 * @note Address: 0x802C4848
 * @note Size: 0x3C0
 */
void HoudaiShotGunMgr::emitShotGun()
{
	CNode* child = mInactiveNodes->mChild;
	if (!child) {
		return;
	}

	Vector3f xVec   = mGunMtx->getBasis(0);
	Vector3f gunPos = mGunMtx->getTranslation();

	xVec.normalise();

	const f32 factor = CG_GENERALPARMS(mOwner).mAttackHitAngle() * 2.0f;
	xVec.x += randWeightFloat(factor) - CG_GENERALPARMS(mOwner).mAttackHitAngle();
	xVec.y += randWeightFloat(factor) - CG_GENERALPARMS(mOwner).mAttackHitAngle();
	xVec.z += randWeightFloat(factor) - CG_GENERALPARMS(mOwner).mAttackHitAngle();

	xVec.normalise();

	Vector3f right = xVec;
	right.scale(45.0f);
	gunPos += right;

	HoudaiShotGunNode* node = static_cast<HoudaiShotGunNode*>(child);
	node->setPosition(gunPos);

	xVec.scale(600.0f);
	node->setVelocity(xVec);

	node->startShotGun();
	node->del();

	mActiveNodes->add(node);

	efx::THdamaShoot shootFX(mGunMtx);
	shootFX.create(nullptr);
}

/**
 * @note Address: 0x802C4C08
 * @note Size: 0x84
 */
void HoudaiShotGunMgr::doUpdate()
{
	if (mIsShotGunRotation) {
		if (mIsShotGunFinished) {
			if (returnShotGunRotation()) {
				mIsShotGunRotation = false;
				mIsShotGunLockedOn = true;
			}

			finishLockOnEffect();

		} else {

			if (searchShotGunRotation()) {
				mIsShotGunLockedOn = true;
			}

			setShotGunLockOnPosition();
		}
	}
}

/**
 * @note Address: 0x802C4C8C
 * @note Size: 0x78
 */
void HoudaiShotGunMgr::doUpdateCommon()
{
	HoudaiShotGunNode* next;
	HoudaiShotGunNode* node = static_cast<HoudaiShotGunNode*>(mActiveNodes->mChild);
	while (node) {
		next = static_cast<HoudaiShotGunNode*>(node->mNext);
		if (node->update()) {
			node->del();
			mInactiveNodes->add(node);
		}
		node = next;
	}
}

/**
 * @note Address: 0x802C4D04
 * @note Size: 0x84
 */
void HoudaiShotGunMgr::forceFinishShotGun()
{
	HoudaiShotGunNode* next;
	HoudaiShotGunNode* node = static_cast<HoudaiShotGunNode*>(mActiveNodes->mChild);
	while (node) {
		next = static_cast<HoudaiShotGunNode*>(node->mNext);
		node->mEfxShell->fade();
		node->del();
		mInactiveNodes->add(node);
		node = next;
	}

	finishLockOnEffect();
}

/**
 * @note Address: 0x802C4D88
 * @note Size: 0x234
 */
bool HoudaiShotGunMgr::searchShotGunRotation()
{
	Vector3f sep = mTargetPosition - mGunMtx->getColumn(3);

	Vector3f headVec = mHeadMtx->getColumn(1);
	f32 headPitch    = JMAAtan2Radian(headVec.x, headVec.z);
	f32 turnAngle    = JMAAtan2Radian(-sep.x, -sep.z);

	f32 angleDist = angDist(headPitch, turnAngle);
	f32 absDist   = absVal(angleDist);

	if (absDist > 0.05f) {
		mYaw -= 0.05f * (angleDist / absDist);
	} else {
		mYaw -= angleDist;
	}

	mYaw = (mYaw < 0.0f) ? TAU + mYaw : (mYaw >= TAU) ? mYaw - TAU : mYaw;

	f32 dist2D = sep.length2D();
	f32 ang    = JMAAtan2Radian(dist2D, sep.y);
	f32 ang2   = PI + ang;
	clampAngle(ang2);

	f32 angleDist2 = angDist(mPitch, ang2);
	f32 absDist2   = absVal(angleDist2);
	if (absDist2 > 0.05f) {
		mPitch -= 0.05f * (angleDist2 / absDist2);
	} else {
		mPitch -= angleDist2;
	}

	mPitch = (mPitch < 0.0f) ? TAU + mPitch : (mPitch >= TAU) ? mPitch - TAU : mPitch;
	return true;
}

/**
 * @note Address: 0x802C4FBC
 * @note Size: 0x178
 */
bool HoudaiShotGunMgr::returnShotGunRotation()
{
	f32 targetYaw = getNearestZeroAngle(mYaw);
	mYaw          = approach(mYaw, targetYaw, 0.025f);

	f32 targetPitch = getNearestZeroAngle(mPitch);
	mPitch          = approach(mPitch, targetPitch, 0.025f);

	if (absVal(mYaw - targetYaw) < 0.01f && absVal(mPitch - targetPitch) < 0.01f) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802C5134
 * @note Size: 0x68
 */
void HoudaiShotGunMgr::rotateLevel(J3DJoint* joint)
{
	if (mIsShotGunRotation) {
		Mtx mtx;
		PSMTXRotRad(mtx, 'X', -mYaw);
		PSMTXConcat(mHeadMtx->mMatrix.mtxView, mtx, mHeadMtx->mMatrix.mtxView);
		PSMTXCopy(mHeadMtx->mMatrix.mtxView, J3DSys::mCurrentMtx);
	}
}

/**
 * @note Address: 0x802C519C
 * @note Size: 0x258
 */
void HoudaiShotGunMgr::rotateVertical(J3DJoint* joint)
{
	if (!mIsShotGunRotation) {
		return;
	}

	Matrixf* gunMtx = mGunMtx;

	Vector3f xVec, yVec, zVec;
	gunMtx->getColumn(0, xVec);
	gunMtx->getColumn(1, yVec);
	gunMtx->getColumn(2, zVec);

	f32 xScale = xVec.normalise();
	f32 yScale = yVec.normalise();
	f32 zScale = zVec.normalise();

	gunMtx->setColumn(0, xVec);
	gunMtx->setColumn(1, yVec);
	gunMtx->setColumn(2, zVec);

	Matrixf rotMtx;
	PSMTXRotRad(rotMtx.mMatrix.mtxView, 'Z', mPitch);

	PSMTXConcat(mGunMtx->mMatrix.mtxView, rotMtx.mMatrix.mtxView, mGunMtx->mMatrix.mtxView);

	gunMtx = mGunMtx;

	Vector3f newX, newY, newZ;

	gunMtx->getColumn(0, newX);
	gunMtx->getColumn(1, newY);
	gunMtx->getColumn(2, newZ);

	newX *= xScale;
	newY *= yScale;
	newZ *= zScale;

	gunMtx->setColumn(0, newX);
	gunMtx->setColumn(1, newY);
	gunMtx->setColumn(2, newZ);

	PSMTXCopy(mGunMtx->mMatrix.mtxView, J3DSys::mCurrentMtx);
}

/**
 * @note Address: 0x802C53F4
 * @note Size: 0x30
 */
void HoudaiShotGunMgr::finishLockOnEffect()
{
	mEfxSight->fade();
}

/**
 * @note Address: 0x802C5424
 * @note Size: 0x250
 */
void HoudaiShotGunMgr::setShotGunLockOnPosition()
{
	bool isHeightChanged = false;
	Vector3f xVec, pos;
	mGunMtx->getColumn(0, xVec);
	mGunMtx->getColumn(3, pos);

	xVec.normalise();

	mLockOnPosition = xVec;

	xVec *= 10.0f;

	mLockOnPosition *= 50.0f;
	mLockOnPosition += pos;

	for (int i = 0; i < 60; i++) {
		mLockOnPosition += xVec;
		f32 minY = mapMgr->getMinY(mLockOnPosition);
		if (minY > mLockOnPosition.y) {
			mLockOnPosition.y = minY;
			isHeightChanged   = true;
			break;
		}
	}

	if (isHeightChanged) {
		Vector3f nrm;
		efx::Arg fxArg(mLockOnPosition);
		mEfxSight->create(&fxArg);

		mGunMtx->getColumn(0, nrm);
		nrm.x = -nrm.x;
		nrm.y = -nrm.y;
		nrm.z = -nrm.z;

		mEfxSight->setPosNrm(mLockOnPosition, nrm);
	} else {
		mEfxSight->fade();
	}

	PSStartSoundVec(PSSE_EN_HOUDAI_BEAM, (Vec*)&mLockOnPosition);
}

/**
 * @note Address: 0x802C5674
 * @note Size: 0x9C
 */
void HoudaiShotGunMgr::effectDrawOn()
{
	HoudaiShotGunNode* next1;
	HoudaiShotGunNode* node1 = static_cast<HoudaiShotGunNode*>(mActiveNodes->mChild);
	while (node1) {
		node1->mEfxShell->endDemoDrawOn();
		next1 = static_cast<HoudaiShotGunNode*>(node1->mNext);
		node1 = next1;
	}

	HoudaiShotGunNode* next2;
	HoudaiShotGunNode* node2 = static_cast<HoudaiShotGunNode*>(mInactiveNodes->mChild);
	while (node2) {
		node2->mEfxShell->endDemoDrawOn();
		next2 = static_cast<HoudaiShotGunNode*>(node2->mNext);
		node2 = next2;
	}

	mEfxSight->endDemoDrawOn();
}

/**
 * @note Address: 0x802C5710
 * @note Size: 0x9C
 */
void HoudaiShotGunMgr::effectDrawOff()
{
	HoudaiShotGunNode* next1;
	HoudaiShotGunNode* node1 = static_cast<HoudaiShotGunNode*>(mActiveNodes->mChild);
	while (node1) {
		node1->mEfxShell->startDemoDrawOff();
		next1 = static_cast<HoudaiShotGunNode*>(node1->mNext);
		node1 = next1;
	}

	HoudaiShotGunNode* next2;
	HoudaiShotGunNode* node2 = static_cast<HoudaiShotGunNode*>(mInactiveNodes->mChild);
	while (node2) {
		node2->mEfxShell->startDemoDrawOff();
		next2 = static_cast<HoudaiShotGunNode*>(node2->mNext);
		node2 = next2;
	}

	mEfxSight->startDemoDrawOff();
}

/**
 * @note Address: 0x802C57AC
 * @note Size: 0x30
 */
void HoudaiShotGunMgr::startStoneStateEffectOff()
{
	mEfxSight->startDemoDrawOff();
}

/**
 * @note Address: 0x802C57DC
 * @note Size: 0x30
 */
void HoudaiShotGunMgr::finishStoneStateEffectOn()
{
	mEfxSight->endDemoDrawOn();
}

} // namespace Houdai
} // namespace Game
