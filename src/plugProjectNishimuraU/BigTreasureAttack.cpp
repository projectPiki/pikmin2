#include "Game/Entities/BigTreasure.h"
#include "Game/MapMgr.h"
#include "Game/EnemyFunc.h"
#include "Game/PikiMgr.h"
#include "Game/Navi.h"
#include "Dolphin/rand.h"
#include "PS.h"

#define FIRE_NAVI_FLICK_CHANCE  (0.33f)
#define GAS_NAVI_FLICK_CHANCE   (0.67f)
#define WATER_NAVI_FLICK_CHANCE (1.0f)
#define ELEC_NAVI_FLICK_CHANCE  (0.5f)

namespace Game {
namespace BigTreasure {

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
AttackShadowNode::AttackShadowNode(int mtxCount)
    : JointShadowNode(mtxCount)
{
	mPosition = nullptr;
	mAngle    = 0.0f;
}

/**
 * @note Address: 0x802F39A8
 * @note Size: 0x108
 */
void AttackShadowNode::makeShadowSRT()
{
	Vector3f matVecs[4];
	matVecs[0]   = Vector3f(mAngle, 0.0f, 0.0f);
	matVecs[1]   = Vector3f(0.0f, 15.0f, 0.0f);
	matVecs[2]   = Vector3f(0.0f, 0.0f, mAngle);
	matVecs[3]   = Vector3f(mPosition->x, mPosition->y, mPosition->z);
	matVecs[3].y = mapMgr->getMinY(matVecs[3]) + 2.5f;

	mMainMtx->setColumn(0, matVecs[0]);
	mMainMtx->setColumn(1, matVecs[1]);
	mMainMtx->setColumn(2, matVecs[2]);
	mMainMtx->setColumn(3, matVecs[3]);
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
BigTreasureFireAttack::BigTreasureFireAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner      = obj;
	mAttackData = data;
	mEmitRatio  = 0.0f;
	mEmitDirection.setZero();
	mEmitPosition.setZero();
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void BigTreasureFireAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x4C
 */
void BigTreasureFireAttack::start(Vector3f& emitDirection, Vector3f& emitPosition)
{
	mEmitRatio     = 0.0f;
	mEmitDirection = emitDirection;
	mEmitPosition  = emitPosition;
	mEmitPosition.y += -25.0f;
}

/**
 * @note Address: 0x802F3AB0
 * @note Size: 0x374
 */
bool BigTreasureFireAttack::update()
{
	if (mEmitRatio < 1.0f) {
		mEmitRatio += 3.0f * sys->mDeltaTime;
		if (mEmitRatio > 1.0f) {
			mEmitRatio = 1.0f;
		}
	}

	f32 scale  = mEmitRatio * (mAttackData->mAttackScale * 200.0f);
	f32 yComp  = 40.0f * mAttackData->mAttackScale;
	f32 radius = SQUARE(25.0f * mAttackData->mAttackScale);

	Vector3f pos = mEmitDirection;
	pos *= scale;

	pos += mEmitPosition;

	Sys::Sphere sphere(pos, 25.0f);

	CellIteratorArg iterArg(sphere);
	iterArg.mOptimise = true;

	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			f32 yDiff            = absVal(pos.y - creaturePos.y);

			if (yDiff < yComp && pos.sqrDistance2D(creaturePos) < radius) {
				InteractFire fire(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage.mValue);
				if (creature->isNavi()) {
					if (!creature->stimulate(fire)) {
						if (randWeightFloat(1.0f) < FIRE_NAVI_FLICK_CHANCE) {
							InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
							creature->stimulate(flick);
						} else {
							InteractAttack attack(mOwner, 0.0f, nullptr);
							creature->stimulate(attack);
						}
					}

				} else if (creature->isPiki()) {
					creature->stimulate(fire);
				}
			}
		}
	}

	// has the fire reached max extent?
	return !(mEmitRatio < 1.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BigTreasureFireAttack::finish()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x7C
 */
BigTreasureGasAttack::BigTreasureGasAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner      = obj;
	mAttackData = data;
	mEmitRatio  = 0.0f;
	mEmitDirection.setZero();
	mEmitPosition.setZero();
}

/**
 * @note Address: N/A
 * @note Size: 0x24
 */
void BigTreasureGasAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0xCC
 */
void BigTreasureGasAttack::start(Vector3f& emitPosition, f32 emitAngle)
{
	mEmitRatio     = 0.0f;
	mEmitDirection = getDirection(emitAngle);
	mEmitPosition  = emitPosition;

	mEmitPosition.y += -15.0f;
}

/**
 * @note Address: 0x802F3E24
 * @note Size: 0x364
 */
bool BigTreasureGasAttack::update()
{
	if (mEmitRatio < 1.0f) {
		mEmitRatio += 0.27f * sys->mDeltaTime;
		if (mEmitRatio > 1.0f) {
			mEmitRatio = 1.0f;
		}
	}

	f32 gasDist = 10.0f;
	if (mEmitRatio > 0.5f) {
		gasDist = 15.0f;
	}

	gasDist *= gasDist;

	Vector3f gasPos = mEmitDirection;
	gasPos *= (480.0f * mEmitRatio);
	gasPos += mEmitPosition;

	Sys::Sphere searchSphere(gasPos, 15.0f);

	CellIteratorArg iterArg(searchSphere);
	iterArg.mOptimise = true;
	CellIterator iter(iterArg);
	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			if (absVal(gasPos.y - creaturePos.y) < 30.0f && gasPos.sqrDistance2D(creaturePos) < gasDist) {
				InteractGas gas(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage());
				if (creature->isNavi()) {
					if (creature->stimulate(gas)) {
						continue;
					}

					if (randWeightFloat(1.0f) < GAS_NAVI_FLICK_CHANCE) {
						InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
						creature->stimulate(flick);

					} else {
						InteractAttack attack(mOwner, 0.0f, nullptr);
						creature->stimulate(attack);
					}

				} else if (creature->isPiki()) {
					creature->stimulate(gas);
				}
			}
		}
	}

	// has gas reached max dist?
	return !(mEmitRatio < 1.0f);
}

/**
 * @note Address: N/A
 * @note Size: 0xB0
 */
BigTreasureWaterAttack::BigTreasureWaterAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner      = obj;
	mAttackData = data;
	mVelocity.setZero();
	mPosition.setZero();
	mEfxWaterBomb = new efx::TOootaWbomb(&mPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x20
 */
void BigTreasureWaterAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x64
 */
void BigTreasureWaterAttack::start(Vector3f& velocity, Vector3f& position)
{
	mVelocity = velocity;
	mPosition = position;
	mEfxWaterBomb->create(nullptr);
}

/**
 * @note Address: 0x802F4188
 * @note Size: 0x324
 */
bool BigTreasureWaterAttack::update()
{
	bool isHitGround = false;

	mPosition.x += mVelocity.x * sys->mDeltaTime;
	mPosition.y += mVelocity.y * sys->mDeltaTime;
	mPosition.z += mVelocity.z * sys->mDeltaTime;

	mVelocity.y -= 20.0f;

	f32 bubbleDist = 20.0f;

	f32 minY = mapMgr->getMinY(mPosition);
	if (mPosition.y < minY) {
		mPosition.y = minY;
		isHitGround = true;
		bubbleDist  = 30.0f;
	}

	bubbleDist *= bubbleDist;

	Sys::Sphere searchSphere(mPosition, 30.0f);
	CellIteratorArg iterArg(searchSphere);
	iterArg.mOptimise = true;
	CellIterator iter(iterArg);

	CI_LOOP(iter)
	{
		Creature* creature = static_cast<Creature*>(*iter);
		if (creature->isAlive()) {
			Vector3f creaturePos = creature->getPosition();
			if (mPosition.sqrDistance(creaturePos) < bubbleDist) {
				InteractBubble bubble(mOwner, 0.0f);
				if (creature->isNavi()) {
					if (creature->stimulate(bubble)) {
						continue;
					}

					if (randWeightFloat(1.0f) < WATER_NAVI_FLICK_CHANCE) {
						InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
						creature->stimulate(flick);
					} else {
						InteractAttack attack(mOwner, 0.0f, nullptr);
						creature->stimulate(attack);
					}

				} else if (creature->isPiki()) {
					creature->stimulate(bubble);
				}
			}
		}
	}

	return isHitGround;
}

/**
 * @note Address: N/A
 * @note Size: 0xD0
 */
void BigTreasureWaterAttack::finish()
{
	mEfxWaterBomb->fade();

	efx::Arg fxArg(mPosition);
	efx::TOootaWbHit hitFX;
	hitFX.create(&fxArg);
	PSStartSoundVec(PSSE_EN_BIGTAKARA_W_GROUND, (Vec*)&mPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
BigTreasureElecAttack::BigTreasureElecAttack(Obj* obj, BigTreasureAttackParameter* data)
{
	mOwner         = obj;
	mAttackData    = data;
	mIsVisibleNode = true;
	mFloorTri      = nullptr;
	mVelocity.setZero();
	mPosition.setZero();
	mConnectedNode = nullptr;
	mEfxElec       = new efx::TOootaElec;
	mEfxElecParts  = new efx::TOootaElecparts(&mPosition);
	mEfxPhouden    = new efx::TOootaPhouden(&mPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
void BigTreasureElecAttack::init()
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x80
 */
void BigTreasureElecAttack::start(Vector3f& velocity, Vector3f& position, bool isVisibleNode)
{
	mFloorTri      = nullptr;
	mVelocity      = velocity;
	mPosition      = position;
	mIsVisibleNode = isVisibleNode;
	mConnectedNode = nullptr;
	if (mIsVisibleNode) {
		mEfxElecParts->create(nullptr);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void BigTreasureElecAttack::startInteract(BigTreasureElecAttack*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x802F4530
 * @note Size: 0x738
 */
bool BigTreasureElecAttack::update()
{
	if (mIsVisibleNode) {
		Vector3f pos = mPosition;
		pos.y += 20.0f;
		Sys::Sphere moveSphere(pos, 20.0f);
		MoveInfo info(&moveSphere, &mVelocity, mAttackData->mElecBounceFactor);
		info.mMovingCreature = mOwner;
		mapMgr->traceMove(info, sys->mDeltaTime);

		mPosition = moveSphere.mPosition;
		mPosition.y -= 20.0f;

		if (info.mFloorTriangle) {
			mVelocity.x *= mAttackData->mElecFrictionFactor;
			mVelocity.z *= mAttackData->mElecFrictionFactor;

			if (!mFloorTri) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_EP_BOUND, (Vec*)&mPosition);
			}

			mFloorTri = info.mFloorTriangle;
		} else {
			mFloorTri = nullptr;
		}

		mVelocity.y -= 20.0f;

	} else {
		mPosition = mOwner->mModel->getJoint("otakara_elec_eff")->getWorldMatrix()->getColumn(3);
	}

	if (mConnectedNode) {
		Vector3f partnerSep = mConnectedNode->mPosition - mPosition;
		f32 dist            = partnerSep.normalise();

		Vector3f yAxis(0.0f, 1.0f, 0.0f);
		Vector3f crossVec1;
		crossVec1 = cross(partnerSep, yAxis);
		crossVec1.normalise();

		Vector3f crossVec2 = cross(crossVec1, partnerSep);
		crossVec2.normalise();

		f32 halfDist       = 0.5f * dist;
		Vector3f spherePos = partnerSep * halfDist;
		spherePos += mPosition;
		Sys::Sphere searchSphere(spherePos, 15.0f + halfDist);
		CellIteratorArg iterArg(searchSphere);
		iterArg.mOptimise = true;
		CellIterator iter(iterArg);
		CI_LOOP(iter)
		{
			Creature* creature = static_cast<Creature*>(*iter);
			if (creature->isAlive() && (creature->isNavi() || creature->isPiki())) {
				Vector3f creaturePos = creature->getPosition();

				Vector3f sep = creaturePos - mPosition;
				f32 dot1     = crossVec1.dot(sep);
				if (absVal(dot1) < 10.0f && absVal(crossVec2.dot(sep)) < 20.0f) {
					f32 dotSep = partnerSep.dot(sep);
					if (dotSep > 0.0f && dotSep < dist) {
						Vector3f zapDir(dot1 * crossVec1.x, 0.0f, dot1 * crossVec1.z);
						zapDir.normalise();
						zapDir.x *= 150.0f;
						zapDir.y = 150.0f;
						zapDir.z *= 150.0f;
						InteractDenki zap(mOwner, CG_GENERALPARMS(mOwner).mAttackDamage(), &zapDir);

						if (creature->isNavi()) {
							if (creature->stimulate(zap)) {
								continue;
							}

							if (randWeightFloat(1.0f) < ELEC_NAVI_FLICK_CHANCE) {
								InteractFlick flick(mOwner, 0.0f, 0.0f, FLICK_BACKWARD_ANGLE);
								creature->stimulate(flick);
							} else {
								InteractAttack attack(mOwner, 0.0f, nullptr);
								creature->stimulate(attack);
							}

						} else if (creature->isPiki()) {
							creature->stimulate(zap);
						}
					}
				}
			}
		}
	}

	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xE8
 */
void BigTreasureElecAttack::finish()
{
	mConnectedNode = nullptr;
	mEfxElecParts->fade();
	mEfxElec->fade();
	mEfxPhouden->fade();

	if (mIsVisibleNode) {
		efx::Arg fxArg(mPosition);
		efx::TOootaPdead deadFX;
		deadFX.create(&fxArg);
	}

	PSStartSoundVec(PSSE_EN_BIGTAKARA_EP_BREAK, (Vec*)&mPosition);
}

/**
 * @note Address: 0x802F4C68
 * @note Size: 0x7B4
 */
BigTreasureAttackMgr::BigTreasureAttackMgr(Obj* obj)
{
	for (int i = 0; i < BIGATTACK_Count; i++) {
		mIsStartAttack[i] = false;
	}

	mObj = obj;
	for (int i = 0; i < 4; i++) {
		mGasAttackAngles[i] = 0.0f;
	}

	mAttackData      = new BigTreasureAttackData;
	mActiveFireList  = new CNode;
	mFireAttackNodes = new CNode;

	for (int i = 0; i < 8; i++) {
		mFireAttackNodes->add(new BigTreasureFireAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mActiveGasList  = new CNode;
	mGasAttackNodes = new CNode;
	for (int i = 0; i < 200; i++) {
		mGasAttackNodes->add(new BigTreasureGasAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mActiveWaterList  = new CNode;
	mWaterAttackNodes = new CNode;
	for (int i = 0; i < 16; i++) {
		mWaterAttackNodes->add(new BigTreasureWaterAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mActiveElecList  = new CNode;
	mElecAttackNodes = new CNode;
	for (int i = 0; i < 17; i++) {
		mElecAttackNodes->add(new BigTreasureElecAttack(mObj, (BigTreasureAttackParameter*)mAttackData));
	}

	mEfxFire = new efx::TOootaFire;

	for (int i = 0; i < 4; i++) {
		mEfxGas[i] = new efx::TOootaGas(&mGasEmitPosition, &mGasAttackAngles[i]);
		for (int j = 0; j < 3; j++) {
			mEfxElecLeg[i][j] = new efx::TOootaElecLeg;
		}
	}

	mEfxElecAttack1    = new efx::TOootaElecAttack1;
	mEfxElecAttack2    = new efx::TOootaElecAttack2;
	mShadowRootNode    = new JointShadowRootNode(mObj);
	mAttackShadowNodes = new AttackShadowNode*[16];

	for (int i = 0; i < 16; i++) {
		mAttackShadowNodes[i] = new AttackShadowNode(2);
	}
}

/**
 * @note Address: 0x802F541C
 * @note Size: 0x1C8
 */
void BigTreasureAttackMgr::init()
{
	for (int i = 0; i < BIGATTACK_Count; i++) {
		mIsStartAttack[i] = false;
	}

	mAttackTimer1 = 0.0f;
	mAttackTimer2 = 0.0f;

	for (int i = 0; i < 4; i++) {
		mGasAttackAngles[i] = 0.0f;
	}

	FOREACH_NODE(BigTreasureFireAttack, mFireAttackNodes->mChild, fireNode)
	{
		fireNode->mEmitRatio = 0.0f;
		fireNode->mEmitDirection.setZero();
		fireNode->mEmitPosition.setZero();
	}

	FOREACH_NODE(BigTreasureGasAttack, mGasAttackNodes->mChild, gasNode)
	{
		gasNode->mEmitRatio = 0.0f;
		gasNode->mEmitDirection.setZero();
		gasNode->mEmitPosition.setZero();
	}

	FOREACH_NODE(BigTreasureWaterAttack, mWaterAttackNodes->mChild, waterNode)
	{
		waterNode->mVelocity.setZero();
		waterNode->mPosition.setZero();
	}

	FOREACH_NODE(BigTreasureElecAttack, mElecAttackNodes->mChild, elecNode)
	{
		elecNode->mIsVisibleNode = true;
		elecNode->mFloorTri      = nullptr;
		elecNode->mVelocity.setZero();
		elecNode->mPosition.setZero();
		elecNode->mConnectedNode = nullptr;
	}

	Matrixf* fireMat = mObj->mModel->getJoint("otakara_fire_eff")->getWorldMatrix();
	mEfxFire->setMtxptr(fireMat->mMatrix.mtxView);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mEfxElecLeg[i][j]->setPosPtrs(mObj->getJointPositionPtr(i, j), mObj->getJointPositionPtr(i, j + 1));
		}
	}
}

/**
 * @note Address: 0x802F55E4
 * @note Size: 0xE8
 */
void BigTreasureAttackMgr::update()
{
	updateFireAttack();
	updateGasAttack();
	updateWaterAttack();
	updateElecAttack();
	updateAttackShadow();

	bool isAttacking = false;
	for (int i = 0; i < BIGATTACK_Count; i++) {
		if (mIsStartAttack[i]) {
			isAttacking = true;
			if (mObj->isEvent(0, EB_Bittered) && !mObj->isCapturedTreasure(i)) {
				finishAttack();
			}
		}
	}

	if (isAttacking) {
		mAttackTimer1 += sys->mDeltaTime;
		mAttackTimer2 += sys->mDeltaTime;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x8C
 */
void BigTreasureAttackMgr::setFireAttackParameter()
{
	switch (-(mObj->isNormalAttack(BIGATTACK_Fire) != 0) + 2) {
	case 1:
		mAttackData->mAttackScale = CG_PROPERPARMS(mObj).mFlameScale1.mValue;
		break;
	case 2:
		mAttackData->mAttackScale = CG_PROPERPARMS(mObj).mFlameScale2.mValue;
		break;
	}
}

/**
 * @note Address: 0x802F56CC
 * @note Size: 0x130
 */
void BigTreasureAttackMgr::startFireAttack()
{
	if (!mIsStartAttack[BIGATTACK_Fire]) {
		mIsStartAttack[BIGATTACK_Fire] = true;
		mAttackTimer1                  = 0.0f;
		mAttackTimer2                  = 0.0f;
		setFireAttackParameter();

		updateFireEmitPosition();
		startNewFireList();
		efx::ArgScale fxArg(Vector3f::zero, mAttackData->mAttackScale);
		mEfxFire->create(&fxArg);
	}
}

/**
 * @note Address: 0x802F57FC
 * @note Size: 0x9C
 */
void BigTreasureAttackMgr::startNewFireList()
{
	if (mFireAttackNodes->mChild) {
		BigTreasureFireAttack* fireNode = static_cast<BigTreasureFireAttack*>(mFireAttackNodes->mChild);
		fireNode->del();
		fireNode->start(mFireEmitDirection, mFireNodePosition[BIGFIRE_Root]);
		mActiveFireList->add(fireNode);
	}
}

/**
 * @note Address: 0x802F5898
 * @note Size: 0x18C
 */
void BigTreasureAttackMgr::updateFireAttack()
{
	bool canDoFireBodySound          = true; // only do sound for main body of fire for one node
	BigTreasureFireAttack* childNode = static_cast<BigTreasureFireAttack*>(mActiveFireList->mChild);
	while (childNode) {
		BigTreasureFireAttack* nextNode = childNode->getNext();
		if (childNode->update()) {
			childNode->del();
			mFireAttackNodes->add(childNode);
		}

		if (childNode == mActiveFireList->mChild) {
			updateFireSePosition(childNode, BIGFIRE_Tail);
			PSStartSoundVec(PSSE_EN_BIGTAKARA_FIRE_TAIL, (Vec*)&mFireNodePosition[BIGFIRE_Tail]);
		}

		if (canDoFireBodySound && childNode->mEmitRatio < 0.55f) {
			canDoFireBodySound = false;
			updateFireSePosition(childNode, BIGFIRE_Body);
			PSStartSoundVec(PSSE_EN_BIGTAKARA_FIRE_BODY, (Vec*)&mFireNodePosition[BIGFIRE_Body]);
		}
		childNode = nextNode;
	}

	if (mIsStartAttack[BIGATTACK_Fire]) {
		updateFireEmitPosition();
		if (mAttackTimer1 > 0.1f) {
			mAttackTimer1 = 0.0f;
			startNewFireList();
		}
		PSStartSoundVec(PSSE_EN_BIGTAKARA_FIRE_ROOT, (Vec*)&mFireNodePosition[BIGFIRE_Root]);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x30
 */
void BigTreasureAttackMgr::finishFireAttack()
{
	mEfxFire->fade();
}

/**
 * @note Address: 0x802F5A24
 * @note Size: 0x70
 */
void BigTreasureAttackMgr::updateFireEmitPosition()
{
	Matrixf* mat = mObj->mModel->getJoint("otakara_fire_eff")->getWorldMatrix();
	mat->getColumn(0, mFireEmitDirection);
	mat->getColumn(3, mFireNodePosition[BIGFIRE_Root]);
}

/**
 * @note Address: 0x802F5A94
 * @note Size: 0xA0
 */
void BigTreasureAttackMgr::updateFireSePosition(BigTreasureFireAttack* attackNode, int nodeType)
{
	f32 nodeDist;
	f32 scale  = mAttackData->mAttackScale;
	f32 extent = attackNode->mEmitRatio;

	mFireNodePosition[nodeType] = attackNode->mEmitDirection;

	nodeDist = 200.0f;
	nodeDist *= scale;
	nodeDist = extent * nodeDist;

	mFireNodePosition[nodeType] *= nodeDist;
	mFireNodePosition[nodeType] += attackNode->mEmitPosition;
	mFireNodePosition[nodeType].y -= -25.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0x1A4
 */
void BigTreasureAttackMgr::setGasAttackParameter()
{
	int attackType;
	if (mObj->isNormalAttack(BIGATTACK_Gas)) {
		attackType = 1;
	} else if (randWeightFloat(1.0f) < 0.5f) {
		attackType = 2;
	} else {
		attackType = 3;
	}

	switch (attackType) {
	case 1:
		mAttackData->mGasArmNum        = 3;
		mAttackData->mGasRotationSpeed = CG_PROPERPARMS(mObj).mRotationSpeed1();
		mAttackData->mGasReversalTime  = 30.0f;
		break;
	case 2:
		mAttackData->mGasArmNum        = 4;
		mAttackData->mGasRotationSpeed = CG_PROPERPARMS(mObj).mRotationSpeed2();
		mAttackData->mGasReversalTime  = CG_PROPERPARMS(mObj).mReversalTime2_1();
		break;
	case 3:
		mAttackData->mGasArmNum        = 4;
		mAttackData->mGasRotationSpeed = CG_PROPERPARMS(mObj).mRotationSpeed2();
		mAttackData->mGasReversalTime  = CG_PROPERPARMS(mObj).mReversalTime2_2();
		break;
	}

	// 50/50 chance to start rotating clockwise or anticlockwise
	if (randWeightFloat(1.0f) < 0.5f) {
		mAttackData->mIsGasRotClockwise = true;
	} else {
		mAttackData->mIsGasRotClockwise = false;
	}
}

/**
 * @note Address: 0x802F5B34
 * @note Size: 0x2C4
 */
void BigTreasureAttackMgr::startGasAttack()
{
	if (!mIsStartAttack[BIGATTACK_Gas]) {
		mIsStartAttack[BIGATTACK_Gas] = true;
		mAttackTimer1                 = 0.0f;
		mAttackTimer2                 = 0.0f;

		setGasAttackParameter();

		updateGasEmitPosition();

		f32 startAngle = randWeightFloat(TAU);
		f32 armSpacing = TAU / (f32)mAttackData->mGasArmNum;

		for (int i = 0; i < mAttackData->mGasArmNum; i++) {
			mGasAttackAngles[i] = startAngle + armSpacing * (f32)i;
			mEfxGas[i]->create(nullptr);
		}

		startNewGasList();
	}
}

/**
 * @note Address: 0x802F5DF8
 * @note Size: 0x14C
 */
void BigTreasureAttackMgr::startNewGasList()
{
	for (int i = 0; i < mAttackData->mGasArmNum; i++) {
		if (mGasAttackNodes->mChild) {
			BigTreasureGasAttack* nextAvailNode = static_cast<BigTreasureGasAttack*>(mGasAttackNodes->mChild);
			nextAvailNode->del();
			nextAvailNode->start(mGasEmitPosition, mGasAttackAngles[i]);
			mActiveGasList->add(nextAvailNode);
		}
	}
}

/**
 * @note Address: 0x802F5F44
 * @note Size: 0x344
 */
void BigTreasureAttackMgr::updateGasAttack()
{
	bool checks[] = { true, true, true, true };
	BigTreasureGasAttack* nextNode;
	int i                         = 0;
	BigTreasureGasAttack* gasNode = static_cast<BigTreasureGasAttack*>(mActiveGasList->mChild);

	while (gasNode) {
		nextNode = static_cast<BigTreasureGasAttack*>(gasNode->mNext);

		if (gasNode->update()) {
			gasNode->del();
			mGasAttackNodes->add(gasNode);
		}

		int idx = i % mAttackData->mGasArmNum;
		if (checks[idx] && gasNode->mEmitRatio < 0.5f) {
			checks[idx] = false;
			updateGasSePosition(gasNode, idx);

			if (idx == 0) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY1, (Vec*)&(mGasSePosition[idx]));

			} else if (idx == 1) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY2, (Vec*)&(mGasSePosition[idx]));

			} else if (idx == 2) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY3, (Vec*)&(mGasSePosition[idx]));

			} else if (idx == 3) {
				PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPRAY4, (Vec*)&(mGasSePosition[idx]));
			}
		}

		gasNode = nextNode;
		i++;
	}

	if (!mIsStartAttack[BIGATTACK_Gas]) {
		return;
	}

	updateGasEmitPosition();

	for (int i = 0; i < mAttackData->mGasArmNum; i++) {
		if (mObj->isEvent(0, EB_Bittered)) {
			continue;
		}

		if (mAttackData->mIsGasRotClockwise) {
			mGasAttackAngles[i] += mAttackData->mGasRotationSpeed;

			if (mGasAttackAngles[i] > TAU) {
				mGasAttackAngles[i] -= TAU;
			}
		} else {
			mGasAttackAngles[i] -= mAttackData->mGasRotationSpeed;
			if (mGasAttackAngles[i] < 0.0f) {
				mGasAttackAngles[i] += TAU;
			}
		}
	}

	if (mAttackTimer1 > 0.1f) {
		mAttackTimer1 = 0.0f;
		startNewGasList();
	}

	if (mAttackTimer2 > mAttackData->mGasReversalTime) {
		mAttackData->mIsGasRotClockwise ^= 1; // swap direction
		mAttackTimer2 = 0.0f;
	}

	PSStartSoundVec(PSSE_EN_BIGTAKARA_G_SPOUT, (Vec*)&mGasEmitPosition);
}

/**
 * @note Address: N/A
 * @note Size: 0x58
 */
void BigTreasureAttackMgr::finishGasAttack()
{
	for (int i = 0; i < 4; i++) {
		mEfxGas[i]->fade();
	}
}

/**
 * @note Address: 0x802F6288
 * @note Size: 0x58
 */
void BigTreasureAttackMgr::updateGasEmitPosition()
{
	mGasEmitPosition = mObj->mModel->getJoint("otakara_gas_eff")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802F62E0
 * @note Size: 0xA0
 */
void BigTreasureAttackMgr::updateGasSePosition(BigTreasureGasAttack* gasAttack, int gasID)
{
	f32 factor            = gasAttack->mEmitRatio * (480.0f * mAttackData->mAttackScale);
	mGasSePosition[gasID] = gasAttack->mEmitDirection;
	mGasSePosition[gasID] *= factor;
	mGasSePosition[gasID] += gasAttack->mEmitPosition;
	mGasSePosition[gasID].y -= -15.0f;
}

/**
 * @note Address: N/A
 * @note Size: 0xDC
 */
void BigTreasureAttackMgr::setWaterAttackParameter()
{
	int type = -(mObj->isNormalAttack(BIGATTACK_Water) != 0) + 2;

	switch (type) {
	case 1:
		mAttackData->mWaterShotInterval   = CG_PROPERPARMS(mObj).mWaterDischargeInterval1();
		mAttackData->mWaterJitterAngle    = CG_PROPERPARMS(mObj).mRandomAngle1();
		mAttackData->mWaterJitterDistance = CG_PROPERPARMS(mObj).mRandomDistance1();
		break;
	case 2:
		mAttackData->mWaterShotInterval   = CG_PROPERPARMS(mObj).mWaterDischargeInterval2();
		mAttackData->mWaterJitterAngle    = CG_PROPERPARMS(mObj).mRandomAngle2();
		mAttackData->mWaterJitterDistance = CG_PROPERPARMS(mObj).mRandomDistance2();
		break;
	}
}

/**
 * @note Address: 0x802F6380
 * @note Size: 0x10C
 */
void BigTreasureAttackMgr::startWaterAttack()
{
	if (mIsStartAttack[BIGATTACK_Water]) {
		return;
	}

	mIsStartAttack[BIGATTACK_Water] = true;
	mAttackTimer1                   = 0.0f;
	mAttackTimer2                   = 0.0f;
	setWaterAttackParameter();

	updateWaterEmitPosition();
	startNewWaterList();
}

/**
 * @note Address: 0x802F648C
 * @note Size: 0x47C
 */
void BigTreasureAttackMgr::startNewWaterList()
{
	if (!mWaterAttackNodes->mChild) {
		return;
	}

	efx::TOootaWbShot waterShot(mObj->mModel->getJoint("otakara_water_eff")->getWorldMatrix());
	waterShot.create(nullptr);

	Vector3f emitPos = mWaterEmitPosition;
	Vector3f targetPos;
	Creature* target = getWaterTargetCreature();
	if (target) {
		targetPos = target->getPosition();
	} else {
		targetPos     = mObj->getPosition();
		f32 randDist  = randWeightFloat(500.0f);
		f32 randAngle = randWeightFloat(TAU);
		targetPos.x += randDist * sinf(randAngle);
		targetPos.z += randDist * cosf(randAngle);
	}

	Vector3f diff = targetPos;
	diff -= emitPos;
	f32 sqrDist     = diff.sqrMagnitude2D();
	f32 dist        = sqrtfClamped(sqrDist);
	f32 offset      = mAttackData->mWaterJitterDistance;
	f32 speedFactor = dist + (randWeightFloat(2.0f * offset) - offset);

	if (speedFactor < 1.0f) {
		speedFactor = 1.0f;
	}

	f32 speed, vertSpeed;
	f32 deltaTime = sys->mDeltaTime;
	vertSpeed     = 350.0f / deltaTime / 20.0f;

	speed = ((0.5f * speedFactor) / (vertSpeed / 20.0f)) / deltaTime;

	f32 angleDist = JMAAtan2Radian(targetPos.x - emitPos.x, targetPos.z - emitPos.z);

	f32 angOffset = mAttackData->mWaterJitterAngle;
	f32 randAngle = angleDist + (randWeightFloat(2.0f * angOffset) - angOffset);

	Vector3f vel = Vector3f(speed * sinf(randAngle), vertSpeed, speed * cosf(randAngle));

	BigTreasureWaterAttack* waterNode = static_cast<BigTreasureWaterAttack*>(mWaterAttackNodes->mChild);
	waterNode->del();
	waterNode->start(vel, emitPos);
	mActiveWaterList->add(waterNode);
	addAttackShadow(waterNode);
	PSStartSoundVec(PSSE_EN_BIGTAKARA_W_SHOT, (Vec*)&mWaterEmitPosition);
}

/**
 * @note Address: 0x802F6908
 * @note Size: 0x164
 */
void BigTreasureAttackMgr::updateWaterAttack()
{
	BigTreasureWaterAttack* waterNode = static_cast<BigTreasureWaterAttack*>(mActiveWaterList->mChild);
	while (waterNode) {
		BigTreasureWaterAttack* nextNode = waterNode->getNext();
		if (waterNode->update()) {
			waterNode->finish();
			waterNode->del();
			mWaterAttackNodes->add(waterNode);
			delAttackShadow(waterNode);
		}
		waterNode = nextNode;
	}

	if (mIsStartAttack[BIGATTACK_Water]) {
		updateWaterEmitPosition();
		if (mAttackTimer1 > mAttackData->mWaterShotInterval) {
			mAttackTimer1 = 0.0f;
			startNewWaterList();
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void BigTreasureAttackMgr::finishWaterAttack()
{
}

/**
 * @note Address: 0x802F6A6C
 * @note Size: 0x58
 */
void BigTreasureAttackMgr::updateWaterEmitPosition()
{
	mWaterEmitPosition = mObj->mModel->getJoint("otakara_water_eff")->getWorldMatrix()->getColumn(3);
}

/**
 * @note Address: 0x802F6AC4
 * @note Size: 0x2D8
 */
Creature* BigTreasureAttackMgr::getWaterTargetCreature()
{
	int targetCounter = 0;
	Piki* targetList[256]; // can store up to 256 target Pikmin (sure).

	// loop through all Pikmin on the field.
	Iterator<Piki> iter(pikiMgr);
	CI_LOOP(iter)
	{
		Piki* piki = *iter;
		// if Pikmin is alive, not following an enemy, and NOT Blue, make it a possible target
		if (piki->isAlive() && piki->isPikmin() && piki->getKind() != Blue) {
			targetList[targetCounter] = piki;
			targetCounter++;
		}
	}

	// if we found any eligible target Pikmin, pick one at random.
	if (targetCounter != 0) {
		int randIdx = (f32)targetCounter * randFloat();
		return targetList[randIdx];
	}

	// if we didn't find any eligible Pikmin, find the closest captain
	// NB: looks 180 degrees in front of TD, up to distance of 1280 units
	return EnemyFunc::getNearestNavi(mObj, 180.0f, 1280.0f, nullptr, nullptr);
}

/**
 * @note Address: 0x802F6D9C
 * @note Size: 0x3FC
 */
void BigTreasureAttackMgr::setElecAttackParameter()
{
	int type;
	if (mObj->isNormalAttack(BIGATTACK_Elec)) {
		if (randWeightFloat(1.0f) < 0.5f) {
			type = 1;
		} else {
			type = 2;
		}
	} else {
		if (randWeightFloat(1.0f) < 0.5f) {
			type = 3;
		} else {
			type = 4;
		}
	}

	switch (type) {
	case 1:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient1_1();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient1_1();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ1_1();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ1_1();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY1_1();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY1_1();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart1_1();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval1_1();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount1_1();
		break;
	case 2:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient1_2();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient1_2();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ1_2();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ1_2();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY1_2();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY1_2();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart1_2();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval1_2();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount1_2();
		break;
	case 3:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient2_1();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient2_1();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ2_1();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ2_1();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY2_1();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY2_1();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart2_1();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval2_1();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount2_1();
		break;
	case 4:
		mAttackData->mElecBounceFactor    = CG_PROPERPARMS(mObj).mBounceCoefficient2_2();
		mAttackData->mElecFrictionFactor  = CG_PROPERPARMS(mObj).mFrictionCoefficient2_2();
		mAttackData->mElecBaseHSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityXZ2_2();
		mAttackData->mElecJitterHSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityXZ2_2();
		mAttackData->mElecBaseVSpeed      = CG_PROPERPARMS(mObj).mBaseMuzzleVelocityY2_2();
		mAttackData->mElecJitterVSpeed    = CG_PROPERPARMS(mObj).mRandMuzzleVelocityY2_2();
		mAttackData->mElecScatterTime     = CG_PROPERPARMS(mObj).mDischargeStart2_2();
		mAttackData->mElecChainOffsetTime = CG_PROPERPARMS(mObj).mChainInterval2_2();
		mAttackData->mElecMaxNodes        = CG_PROPERPARMS(mObj).mDischargeCount2_2();
		break;
	}

	if (mAttackData->mElecChainOffsetTime == 0.0f) {
		mAttackData->mElecPlacedNodes = mAttackData->mElecMaxNodes;
	} else {
		mAttackData->mElecPlacedNodes = 0;
	}
}

/**
 * @note Address: 0x802F7198
 * @note Size: 0x494
 */
void BigTreasureAttackMgr::startElecAttack()
{
	if (mIsStartAttack[BIGATTACK_Elec]) {
		return;
	}

	mIsStartAttack[BIGATTACK_Elec] = true;
	mAttackTimer1                  = 0.0f;
	mAttackTimer2                  = 0.0f;
	setElecAttackParameter();

	for (int i = 0; i < 4; i++) {     // each leg
		for (int j = 0; j < 3; j++) { // each 'section' of leg
			mEfxElecLeg[i][j]->create(nullptr);
		}
	}

	Vector3f effectPos = mObj->mModel->getJoint("otakara_elec_eff")->getWorldMatrix()->getColumn(3);

	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mElecAttackNodes->mChild);
	if (elecNode) {
		elecNode->start(Vector3f::zero, effectPos, false);
		elecNode->del();
		mActiveElecList->add(elecNode);
		mEfxElecAttack1->mPosition = &elecNode->mPosition;
		mEfxElecAttack1->create(nullptr);
	}

	f32 randAngle   = randWeightFloat(TAU);
	f32 angleOffset = TAU / (f32)mAttackData->mElecMaxNodes;
	int counter     = 0;
	CNode* node     = mElecAttackNodes->mChild;
	while (node) {
		CNode* nextNode = node->mNext;

		if (counter < mAttackData->mElecMaxNodes) {
			BigTreasureElecAttack* newNode = static_cast<BigTreasureElecAttack*>(node);
			f32 angle                      = randAngle + (randWeightFloat(0.2f) - 0.1f);
			f32 randSpeedXZ                = mAttackData->mElecJitterHSpeed;
			f32 randSpeedY                 = mAttackData->mElecJitterVSpeed;
			f32 speedXZ                    = mAttackData->mElecBaseHSpeed + randWeightFloat(randSpeedXZ);
			f32 yVel                       = mAttackData->mElecBaseVSpeed + randWeightFloat(randSpeedY);

			Vector3f vel = Vector3f(speedXZ * sinf(angle), yVel, speedXZ * cosf(angle));

			randAngle += angleOffset;

			newNode->start(vel, effectPos, true);
			newNode->del();
			mActiveElecList->add(newNode);
			addAttackShadow(newNode);
		}
		node = nextNode;
		counter++;
	}

	f32 attackVal = (f32)mAttackData->mElecMaxNodes / 4.0f;
	for (int i = 0; i < 3; i++) {
		mElecSENodeIDs[i] = attackVal * (f32)(i + 1);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x184
 */
void BigTreasureAttackMgr::startNewElecList()
{
	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mActiveElecList->mChild);
	if (elecNode) {
		mEfxElecAttack1->fade();
		mEfxElecAttack2->setPosptr(&elecNode->mPosition);
		mEfxElecAttack2->create(nullptr);

		BigTreasureElecAttack* nextNode = elecNode->getNext();
		if (nextNode && !elecNode->mConnectedNode) {
			elecNode->mConnectedNode = nextNode;
			if (elecNode->mConnectedNode) {
				elecNode->mEfxPhouden->create(nullptr);
				elecNode->mEfxElec->setPosptr(&elecNode->mPosition, &elecNode->mConnectedNode->mPosition);
				elecNode->mEfxElec->create(nullptr);
			}
		}

		for (int i = 0; i < mAttackData->mElecPlacedNodes; i++) {
			BigTreasureElecAttack* nextNextNode = nextNode->getNext();
			if (nextNextNode && !nextNode->mConnectedNode) {
				nextNode->mConnectedNode = nextNextNode;
				if (nextNode->mConnectedNode) {
					nextNode->mEfxPhouden->create(nullptr);
					nextNode->mEfxElec->setPosptr(&nextNode->mPosition, &nextNode->mConnectedNode->mPosition);
					nextNode->mEfxElec->create(nullptr);
				}
			}

			nextNode = nextNextNode;
		}
	}

	mAttackTimer2 = 0.0f;
	mAttackData->mElecPlacedNodes++;
}

/**
 * @note Address: 0x802F762C
 * @note Size: 0x288
 */
void BigTreasureAttackMgr::updateElecAttack()
{
	BigTreasureElecAttack* nextNode;
	int i                           = 0;
	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mActiveElecList->mChild);
	while (elecNode) {
		nextNode                        = static_cast<BigTreasureElecAttack*>(elecNode->mNext);
		BigTreasureElecAttack* prevNode = static_cast<BigTreasureElecAttack*>(elecNode->mPrev);
		elecNode->update();

		if (elecNode == mActiveElecList->mChild && elecNode->mConnectedNode) {
			PSStartSoundVec(PSSE_EN_BIGTAKARA_E_SPARK, (Vec*)&elecNode->mPosition);
		} else if (prevNode && prevNode->mConnectedNode && !elecNode->mConnectedNode) {
			PSStartSoundVec(PSSE_EN_BIGTAKARA_E_SPARK, (Vec*)&elecNode->mPosition);
		} else if (elecNode->mConnectedNode) {
			for (int j = 0; j < 3; j++) {
				if (i == mElecSENodeIDs[j]) {
					PSStartSoundVec(PSSE_EN_BIGTAKARA_E_SUSTAIN, (Vec*)&elecNode->mPosition);
					break;
				}
			}
		}

		elecNode = nextNode;
		i++;
	}

	if (mIsStartAttack[BIGATTACK_Elec]) {
		if (mAttackTimer1 > mAttackData->mElecScatterTime && mAttackTimer2 > mAttackData->mElecChainOffsetTime
		    && mAttackData->mElecPlacedNodes <= mAttackData->mElecMaxNodes) {
			startNewElecList();
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x190
 */
void BigTreasureAttackMgr::finishElecAttack()
{
	BigTreasureElecAttack* elecNode = static_cast<BigTreasureElecAttack*>(mActiveElecList->mChild);
	while (elecNode) {
		BigTreasureElecAttack* nextNode = elecNode->getNext();

		elecNode->finish();

		elecNode->del();
		mElecAttackNodes->add(elecNode);

		delAttackShadow(elecNode);

		elecNode = nextNode;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			mEfxElecLeg[i][j]->fade();
		}
	}

	mEfxElecAttack1->fade();
	mEfxElecAttack2->fade();
}

/**
 * @note Address: 0x802F78B4
 * @note Size: 0x1E4
 */
void BigTreasureAttackMgr::finishAttack()
{
	for (int i = 0; i < BIGATTACK_Count; i++) {
		mIsStartAttack[i] = false;
	}

	finishFireAttack();
	finishGasAttack();
	finishWaterAttack();
	finishElecAttack();
}

/**
 * @note Address: 0x802F7A98
 * @note Size: 0x80
 */
void BigTreasureAttackMgr::addAttackShadow(BigTreasureWaterAttack* waterAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = &waterAttack->mPosition;
		mAttackShadowNodes[i]->mAngle    = 12.5f;
		mShadowRootNode->add(mAttackShadowNodes[i]);
		return;
	}
}

/**
 * @note Address: 0x802F7B18
 * @note Size: 0x80
 */
void BigTreasureAttackMgr::addAttackShadow(BigTreasureElecAttack* elecAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = &elecAttack->mPosition;
		mAttackShadowNodes[i]->mAngle    = 7.5f;
		mShadowRootNode->add(mAttackShadowNodes[i]);
		return;
	}
}

/**
 * @note Address: 0x802F7B98
 * @note Size: 0x6C
 */
void BigTreasureAttackMgr::delAttackShadow(BigTreasureWaterAttack* waterAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition != &waterAttack->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = nullptr;
		mAttackShadowNodes[i]->del();
	}
}

/**
 * @note Address: 0x802F7C04
 * @note Size: 0x6C
 */
void BigTreasureAttackMgr::delAttackShadow(BigTreasureElecAttack* elecAttack)
{
	for (int i = 0; i < 16; i++) {
		if (mAttackShadowNodes[i]->mPosition != &elecAttack->mPosition) {
			continue;
		}

		mAttackShadowNodes[i]->mPosition = nullptr;
		mAttackShadowNodes[i]->del();
	}
}

/**
 * @note Address: 0x802F7C70
 * @note Size: 0x44
 */
void BigTreasureAttackMgr::updateAttackShadow()
{
	FOREACH_NODE(AttackShadowNode, mShadowRootNode->mChild, shadow)
	{
		shadow->makeShadowSRT();
	}
}
} // namespace BigTreasure
} // namespace Game
