#include "Game/Entities/MiniHoudai.h"
#include "Game/MapMgr.h"
#include "Game/rumble.h"
#include "Game/CameraMgr.h"
#include "efx/THdama.h"
#include "Dolphin/rand.h"
#include "PS.h"
#include "nans.h"

namespace Game {
namespace MiniHoudai {

static MiniHoudaiShotGunMgr* sMiniHoudaiShotGunMgr;

/**
 * @note Address: 0x802EDCA0
 * @note Size: 0x3C
 */
static bool verticalRotationCallBack(J3DJoint* joint, int idx)
{
	if (idx == 0 && sMiniHoudaiShotGunMgr) {
		sMiniHoudaiShotGunMgr->rotateVertical(joint);
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0x54
 */
MiniHoudaiShotGunNode::MiniHoudaiShotGunNode(Obj* obj)
{
	_18    = 0;
	mOwner = obj;
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void MiniHoudaiShotGunNode::create()
{
	mPosition = Vector3f(0.0f, 1.0f, 0.0f); // fake, just to match sdata2
	                                        // UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void MiniHoudaiShotGunNode::setPosition(Vector3f& pos)
{
	mPosition = pos;
}

/**
 * @note Address: N/A
 * @note Size: 0x1C
 */
void MiniHoudaiShotGunNode::setVelocity(Vector3f& vel)
{
	mVelocity = vel;
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void MiniHoudaiShotGunNode::startShotGun(bool check)
{
	_18          = check;
	Vector3f dir = mVelocity;
	dir.normalise();

	efx::ArgDir fxArg(mPosition);
	fxArg.mAngle = dir;

	mEfxShell->mPosition = &mPosition;
	mEfxShell->create(&fxArg);
}

/**
 * @note Address: 0x802EDCDC
 * @note Size: 0xD14
 */
bool MiniHoudaiShotGunNode::update()
{
	bool result       = false;
	Vector3f startPos = mPosition;            // 0x230
	Sys::Sphere moveSphere(mPosition, 10.0f); // 0x78

	MoveInfo moveInfo(&moveSphere, &mVelocity, 0.0f); // 0x1B0
	moveInfo.mMovingCreature = mOwner;
	mapMgr->traceMove(moveInfo, sys->mDeltaTime);

	setPosition(moveSphere.mPosition);

	mVelocity.y -= 20.0f;

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
			PSM::SeSound* sound = PSStartSoundVec(PSSE_EV_ITEM_LAND_WATER1_L, (Vec*)&mPosition);

			if (sound) {
				sound->setPitch(1.3f, 0, SOUNDPARAM_Unk0);
				sound->setVolume(0.7f, 0, SOUNDPARAM_Unk0);
			}

		} else {
			efx::ArgScale fxArg(effectPos, 1.0f);
			efx::TChibiHit hitFX;
			hitFX.create(&fxArg);
		}

		mEfxShell->fade();

		PSStartSoundVec(PSSE_PK_SE_BOMB, (Vec*)&mPosition);

		if (_18) {
			cameraMgr->startVibration(VIBTYPE_MidFastShort, effectPos, CAMNAVI_Both);
			rumbleMgr->startRumble(RUMBLETYPE_Fixed14, effectPos, RUMBLEID_Both);
		}

		result = true;

	} else {
		Vector3f houdaiPos = mOwner->getPosition();
		if (absVal(houdaiPos.x - mPosition.x) > 1000.0f || absVal(houdaiPos.y - mPosition.y) > 1000.0f
		    || absVal(houdaiPos.z - mPosition.z) > 1000.0f) {
			mEfxShell->fade();
			result = true;
		}
	}

	Vector3f newPos = mPosition;
	startPos.y -= 10.0f;
	newPos.y -= 10.0f;

	f32 dist     = startPos.distance(newPos);
	f32 hitangle = CG_GENERALPARMS(mOwner).mAttackHitAngle();
	f32 radius   = CG_GENERALPARMS(mOwner).mAttackRadius();

	if (dist > 0.0f) {
		Vector3f searchCenter((startPos.x + newPos.x) * 0.5f, (startPos.y + newPos.y) * 0.5f, (startPos.z + newPos.z) * 0.5f);
		f32 searchRadius = dist + radius;
		f32 hitangle2    = hitangle * hitangle;
		Vector3f vec1    = newPos - startPos;
		vec1.normalise();

		Vector3f yAxis(0.0f, 1.0f, 0.0f);

		Vector3f vec3(0.0f, 0.0f, 0.0f);
		Vector3f vec2 = cross(yAxis, vec1);
		vec2.normalise();

		vec3 = cross(vec1, vec2);
		vec3.normalise();

		Sys::Sphere searchSphere(searchCenter, dist + hitangle);
		CellIteratorArg iterArg(searchSphere);
		iterArg.mOptimise = true;

		CellIterator iter(iterArg);
		CI_LOOP(iter)
		{
			Creature* target = static_cast<Creature*>(*iter);
			if (!target->isAlive()) {
				continue;
			}

			bool check = true;

			Vector3f creaturePos = target->getPosition();
			Vector3f sep         = creaturePos - startPos;

			f32 dot2 = vec2.dot(sep);
			if (absVal(dot2) < radius) {

				f32 dot3 = vec3.dot(sep);
				if (absVal(dot3) < radius) {

					f32 dot1 = vec1.dot(sep);
					if (dot1 > -radius && dot1 < searchRadius) {

						if (target->isNavi() || (target->isPiki() && static_cast<Piki*>(target)->isPikmin())) {
							Vector3f blastDir(dot2 * vec2.x, 0.0f, dot2 * vec2.z);
							blastDir.normalise();

							blastDir.x *= 150.0f;
							blastDir.z *= 150.0f;
							if (target->isPiki()) {
								blastDir.y = 100.0f;
							}
							InteractBomb blast(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage(), &blastDir);
							target->stimulate(blast);
						} else if (target->isTeki() && target != mOwner) {
							InteractBomb blast(mOwner, 100.0f, &Vector3f::zero);
							target->stimulate(blast);
						}
						check = false;
					}
				}
			}

			if (result && check) {
				if (target->isNavi() || target->isPiki()) {
					f32 sqrDist = newPos.sqrDistance(creaturePos);
					if (sqrDist < hitangle2) {
						f32 dist           = sqrtfClamped(sqrDist);
						Vector3f targetSep = creaturePos - newPos;
						f32 factor         = dist / hitangle;
						f32 mag            = 150.0f * (1.0f - factor) + 75.0f * factor;
						targetSep.y        = 0.0f;
						targetSep.normalise();
						if (target->isPiki()) {
							targetSep.y = 1.0f;
						}

						targetSep *= mag;
						InteractWind wind(mOwner, 0.0f, &targetSep);
						target->stimulate(wind);
					}
				} else if (target->isTeki() && target != mOwner) {
					f32 cellRad = target->getCellRadius();
					if (newPos.sqrDistance(creaturePos) < SQUARE(cellRad)) {
						InteractBomb blast(mOwner, 100.0f, &Vector3f::zero);
						target->stimulate(blast);
					}
				}
			}
		}
	}

	if (_18) {
		PSStartSoundVec(PSSE_EN_BOMB_FLY, (Vec*)&mPosition);
	}

	return result;
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void MiniHoudaiShotGunNode::effectDrawOn()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void MiniHoudaiShotGunNode::effectDrawOff()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void MiniHoudaiShotGunNode::doDebugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802EE9F0
 * @note Size: 0x1E0
 */
MiniHoudaiShotGunMgr::MiniHoudaiShotGunMgr(Obj* obj)
{
	mOwner             = obj;
	mIsShotGunRotation = false;
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = false;
	mShellSpeed        = 0.0f;
	mAngle             = 0.0f;
	mActiveNodes       = new MiniHoudaiShotGunNode(mOwner);
	mInactiveNodes     = new MiniHoudaiShotGunNode(mOwner);

	for (int i = 0; i < 6; i++) {
		MiniHoudaiShotGunNode* node = new MiniHoudaiShotGunNode(mOwner);
		node->mEfxShell             = new efx::TChibiShell;
		node->mPosition             = Vector3f::zero;
		node->mVelocity             = Vector3f::zero;
		mInactiveNodes->add(node);
	}

	sMiniHoudaiShotGunMgr = nullptr;
}

/**
 * @note Address: 0x802EEBD0
 * @note Size: 0x6C
 */
void MiniHoudaiShotGunMgr::setupShotGun()
{
	mIsShotGunRotation     = false;
	mIsShotGunLockedOn     = false;
	mIsShotGunFinished     = false;
	mShellSpeed            = 0.0f;
	mAngle                 = 0.0f;
	SysShape::Joint* joint = mOwner->mModel->getJoint("kuti");
	joint->mJ3d->mFunction = &verticalRotationCallBack;
	mHeadMtx               = joint->getWorldMatrix();
}

/**
 * @note Address: 0x802EEC3C
 * @note Size: 0xC
 */
void MiniHoudaiShotGunMgr::resetCallBack()
{
	sMiniHoudaiShotGunMgr = nullptr;
}

/**
 * @note Address: 0x802EEC48
 * @note Size: 0x8
 */
void MiniHoudaiShotGunMgr::setCallBack()
{
	sMiniHoudaiShotGunMgr = this;
}

/**
 * @note Address: 0x802EEC50
 * @note Size: 0x24
 */
void MiniHoudaiShotGunMgr::startRotation()
{
	mIsShotGunRotation = true;
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = false;
	mShellSpeed        = 0.0f;
	mAngle             = 0.0f;
}

/**
 * @note Address: 0x802EEC74
 * @note Size: 0x14
 */
void MiniHoudaiShotGunMgr::finishRotation()
{
	mIsShotGunLockedOn = false;
	mIsShotGunFinished = true;
}

/**
 * @note Address: 0x802EEC88
 * @note Size: 0x8
 */
bool MiniHoudaiShotGunMgr::isShotGunRotation()
{
	return mIsShotGunRotation;
}

/**
 * @note Address: 0x802EEC90
 * @note Size: 0x8
 */
bool MiniHoudaiShotGunMgr::isShotGunLockOn()
{
	return mIsShotGunLockedOn;
}

/**
 * @note Address: 0x802EEC98
 * @note Size: 0x8
 */
bool MiniHoudaiShotGunMgr::isFinishShotGun()
{
	return mIsShotGunFinished;
}

/**
 * @note Address: 0x802EECA0
 * @note Size: 0x1C
 */
void MiniHoudaiShotGunMgr::setShotGunTarget(Vector3f& targetPos)
{
	mTargetPosition = targetPos;
}

/**
 * @note Address: 0x802EECBC
 * @note Size: 0x4C4
 */
void MiniHoudaiShotGunMgr::emitShotGun()
{
	f32 factors[] = { 0.1f, 0.1f, 0.1f };

	for (int i = 0; i < 3; i++) {
		MiniHoudaiShotGunNode* node = static_cast<MiniHoudaiShotGunNode*>(mInactiveNodes->mChild);
		if (!node) {
			continue;
		}

		Vector3f xVec, gunPos;
		mHeadMtx->getColumn(0, xVec);
		mHeadMtx->getColumn(3, gunPos);

		xVec.normalise();

		Vector3f offset = xVec;
		offset.scale(25.0f);
		gunPos += offset;

		f32 factor = factors[i];
		f32 weight = 2.0f * factors[i];

		xVec.x += randWeightFloat(weight) - factor;
		xVec.y += randWeightFloat(weight) - factor;
		xVec.z += randWeightFloat(weight) - factor;

		xVec.normalise();

		xVec *= mShellSpeed;
		node->setPosition(gunPos);
		node->setVelocity(xVec);
		if (i == 0) {
			node->startShotGun(true);
		} else {
			node->startShotGun(false);
		}

		node->del();

		mActiveNodes->add(node);
	}
	efx::TChibiShoot shootFX(mHeadMtx);
	shootFX.create(nullptr);
}

/**
 * @note Address: 0x802EF180
 * @note Size: 0x74
 */
void MiniHoudaiShotGunMgr::doUpdate()
{
	if (mIsShotGunRotation) {
		if (mIsShotGunFinished) {
			if (returnShotGunRotation()) {
				mIsShotGunRotation = false;
				mIsShotGunLockedOn = true;
			}
		} else if (searchShotGunRotation()) {
			mIsShotGunLockedOn = true;
		}
	}
}

/**
 * @note Address: 0x802EF1F4
 * @note Size: 0x78
 */
void MiniHoudaiShotGunMgr::doUpdateCommon()
{
	MiniHoudaiShotGunNode* nextNode;
	MiniHoudaiShotGunNode* node = static_cast<MiniHoudaiShotGunNode*>(mActiveNodes->mChild);
	while (node) {
		nextNode = static_cast<MiniHoudaiShotGunNode*>(node->mNext);
		if (node->update()) {
			node->del();
			mInactiveNodes->add(node);
		}
		node = nextNode;
	}
}

/**
 * @note Address: 0x802EF26C
 * @note Size: 0x7C
 */
void MiniHoudaiShotGunMgr::forceFinishShotGun()
{
	MiniHoudaiShotGunNode* nextNode;
	MiniHoudaiShotGunNode* node = static_cast<MiniHoudaiShotGunNode*>(mActiveNodes->mChild);
	while (node) {
		nextNode = static_cast<MiniHoudaiShotGunNode*>(node->mNext);
		node->mEfxShell->fade();
		node->del();
		mInactiveNodes->add(node);
		node = nextNode;
	}
}

/**
 * @note Address: 0x802EF2E8
 * @note Size: 0x20
 */
Vector3f MiniHoudaiShotGunMgr::getShotGunPosition()
{
	return mHeadMtx->getColumn(3);
}

/**
 * @note Address: 0x802EF308
 * @note Size: 0x1C4
 */
bool MiniHoudaiShotGunMgr::searchShotGunRotation()
{
	Vector3f pos = getShotGunPosition();
	f32 dz, dx;
	dx = pos.x - mTargetPosition.x;
	dz = pos.z - mTargetPosition.z;
	Vector2f sep2D(dx, dz);
	f32 dist = sep2D.length() - 50.0f;
	if (dist < 1.0f) {
		dist = 1.0f;
	}

	f32 val         = 250.0f;
	f32 searchLimit = CG_GENERALPARMS(mOwner).mSearchDistance.mValue / 2;
	if (dist < searchLimit) {
		f32 ratio = dist / searchLimit;
		val       = val * ratio + (1.0f - ratio);
		if (dist < CG_GENERALPARMS(mOwner).mAttackRadius.mValue) {
			dist *= 0.1f;
		}
	}

	f32 b = (val / sys->mDeltaTime) / 20.0f;
	Vector2f vec2D((0.45f * dist) / (b / 20.0f) / sys->mDeltaTime, b);
	mShellSpeed = sqrtfClamped(SQUARE(vec2D.y) + SQUARE(vec2D.x));

	f32 angleDist = angDist(mAngle, HALF_PI - JMAAtan2Radian(vec2D.x, vec2D.y));

	f32 absAng = absVal(angleDist);

	if (absAng > 0.1f) {
		mAngle -= 0.1f * (angleDist / absAng);
	} else {
		mAngle -= angleDist;
	}

	mAngle = (mAngle < 0.0f) ? TAU + mAngle : (mAngle >= TAU) ? mAngle - TAU : mAngle;

	u8 isAimed = (absAng < 0.01f);
	return isAimed;
}

/**
 * @note Address: 0x802EF4CC
 * @note Size: 0xC4
 */
bool MiniHoudaiShotGunMgr::returnShotGunRotation()
{
	f32 targetAngle = getNearestZeroAngle(mAngle);
	mAngle          = approach(mAngle, targetAngle, 0.025f);

	if (absVal(mAngle - targetAngle) < 0.01f) {
		return true;
	}

	return false;
}

/**
 * @note Address: 0x802EF590
 * @note Size: 0x258
 */
void MiniHoudaiShotGunMgr::rotateVertical(J3DJoint* joint)
{
	if (!mIsShotGunRotation) {
		return;
	}

	Matrixf* gunMtx = mHeadMtx;

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
	PSMTXRotRad(rotMtx.mMatrix.mtxView, 'Z', mAngle);

	PSMTXConcat(mHeadMtx->mMatrix.mtxView, rotMtx.mMatrix.mtxView, mHeadMtx->mMatrix.mtxView);

	gunMtx = mHeadMtx;

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

	PSMTXCopy(mHeadMtx->mMatrix.mtxView, J3DSys::mCurrentMtx);
}

/**
 * @note Address: 0x802EF7E8
 * @note Size: 0x88
 */
void MiniHoudaiShotGunMgr::effectDrawOn()
{
	FOREACH_NODE(MiniHoudaiShotGunNode, mActiveNodes->mChild, node)
	{
		node->mEfxShell->endDemoDrawOn();
	}

	FOREACH_NODE(MiniHoudaiShotGunNode, mInactiveNodes->mChild, node)
	{
		node->mEfxShell->endDemoDrawOn();
	}
}

/**
 * @note Address: 0x802EF870
 * @note Size: 0x88
 */
void MiniHoudaiShotGunMgr::effectDrawOff()
{
	FOREACH_NODE(MiniHoudaiShotGunNode, mActiveNodes->mChild, node)
	{
		node->mEfxShell->startDemoDrawOff();
	}

	FOREACH_NODE(MiniHoudaiShotGunNode, mInactiveNodes->mChild, node)
	{
		node->mEfxShell->startDemoDrawOff();
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void MiniHoudaiShotGunMgr::doDebugDraw(Graphics&)
{
	// UNUSED FUNCTION
}

} // namespace MiniHoudai
} // namespace Game
