#include "CollInfo.h"
#include "Dolphin/mtx.h"
#include "Game/cellPyramid.h"
#include "Game/Creature.h"
#include "Game/gameGenerator.h"
#include "Game/GameSystem.h"
#include "Game/shadowMgr.h"
#include "IDelegate.h"
#include "JSystem/J3D/J3DModel.h"
#include "ObjectTypes.h"
#include "SysShape/Model.h"
#include "Sys/Sphere.h"
#include "types.h"
#include "Vector3.h"
#include "Game/MapMgr.h"
#include "Game/DeathMgr.h"
#include "Game/CollEvent.h"
#include "nans.h"

namespace Game {

Creature* Creature::currOp;
bool Creature::usePacketCulling = true;

/**
 * @note Address: 0x8013AE84
 * @note Size: 0x12C
 */
Creature::Creature()
{
	mCollTree  = nullptr;
	mModel     = nullptr;
	mMass      = 100.0f;
	mGenerator = nullptr;

	mScale = Vector3f(1.0f);

	PSMTXIdentity(mBaseTrMatrix.mMatrix.mtxView);

	mObjectTypeID = OBJTYPE_INVALID_START;

	mFlags.clear();

	mFlags.set(CF_IsAtari | CF_IsAlive | CF_IsCollisionFlick);
	clearStick();
}

/**
 * @note Address: 0x8013AFC8
 * @note Size: 0x120
 */
void Creature::init(CreatureInitArg* arg)
{
	mCellLayerIndex = 0;
	mCellRect.reset();

	mFlags.clear();

	mFlags.set(CF_IsAtari | CF_IsAlive | CF_IsCollisionFlick);
	clearStick();

	mUpdateContext.init(collisionUpdateMgr);
	mAcceleration = Vector3f(0.0f);
	clearCapture();

	mFloorTriangle = nullptr;
	mFloorNormal   = Vector3f(0.0f, 1.0f, 0.0f);
	clearCapture();

	if (getMabiki()) {
		getMabiki()->reset();
	}
	onInit(arg);
	onInitPost(arg);
}

/**
 * @note Address: 0x8013B0F0
 * @note Size: 0xB4
 */
void Creature::kill(CreatureKillArg* arg)
{
	endStick();
	setAlive(false);
	Cell::sCurrCellMgr = cellMgr;
	exitCell();
	Cell::sCurrCellMgr = nullptr;
	mUpdateContext.exit();
	releaseAllStickers();
	clearCapture();
	onKill(arg);

	if (mGenerator) {
		mGenerator->informDeath(this);
		mGenerator = nullptr;
	}
}

/**
 * Sets the position of the Creature.
 *
 * @param position The new position of the Creature.
 * @param skipPostProc Flag indicating whether to skip post-processing steps.
 *
 * @note Address: 0x8013B1A8
 * @note Size: 0xC8
 */
void Creature::setPosition(Vector3f& position, bool skipPostProc)
{
	onSetPosition(position);

	if (skipPostProc) {
		return;
	}

	updateTrMatrix();

	if (mModel) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		if (mCollTree) {
			mCollTree->update();
		}
	}

	onSetPositionPost(position);
}

/**
 * Initializes the position of the Creature object.
 *
 * @param position The new position of the Creature.
 *
 * @note Address: 0x8013B274
 * @note Size: 0xCC
 */
void Creature::initPosition(Vector3f& position)
{
	onSetPosition(position);
	updateTrMatrix();

	if (mModel) {
		PSMTXCopy(mBaseTrMatrix.mMatrix.mtxView, mModel->mJ3dModel->mPosMtx);
		mModel->mJ3dModel->calc();
		if (mCollTree) {
			mCollTree->update();
		}
	}

	onSetPositionPost(position);
	onInitPosition(position);
}

/**
 * @brief Gets the upward direction of the Creature's orientation.
 *
 * @param[out] outVector The output vector that will store the Y vector.
 *
 * @note Address: 0x8013B340
 * @note Size: 0xA0
 */
void Creature::getYVector(Vector3f& outVector)
{
	outVector.x = mBaseTrMatrix.mMatrix.structView.yx;
	outVector.y = mBaseTrMatrix.mMatrix.structView.yy;
	outVector.z = mBaseTrMatrix.mMatrix.structView.yz;
	outVector.normalise();
}

/**
 * @brief Returns the radius of the creature's body.
 *
 * @return The radius of the creature's body.
 *
 * @note Address: 0x8013B3E0
 * @note Size: 0x34
 */
f32 Creature::getBodyRadius()
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	return boundingSphere.mRadius;
}

/**
 * @brief Returns the cell radius of the creature.
 *
 * @return The cell radius of the creature.
 *
 * @note Address: 0x8013B414
 * @note Size: 0x34
 */
f32 Creature::getCellRadius()
{
	Sys::Sphere boundingSphere;
	getBoundingSphere(boundingSphere);
	return boundingSphere.mRadius;
}

/**
 * @note Address: 0x8013B448
 * @note Size: 0x24
 */
char* Creature::getTypeName() { return ObjType::getName(mObjectTypeID); }

/**
 * @brief Retrieves the shadow parameters for the creature.
 *
 * The shadow parameters include the position, size, and bounding sphere of the shadow.
 *
 * @param param The ShadowParam object to store the shadow parameters.
 *
 * @note Address: 0x8013B46C
 * @note Size: 0x8C
 */
void Creature::getShadowParam(ShadowParam& param)
{
	param.mPosition = getPosition();
	param.mPosition.y += 0.5f;
	param.mBoundingSphere.mRadius   = 10.0f;
	param.mSize                     = 4.0f;
	param.mBoundingSphere.mPosition = Vector3f(0.0f, 1.0f, 0.0f);
}

/**
 * @note Address: 0x8013B4F8
 * @note Size: 0xC
 */
bool Creature::needShadow() { return mLod.isFlag(AILOD_IsVisible); }

/**
 * @brief Retrieves the parameters for the life gauge of the creature.
 *
 * @param param The LifeGaugeParam object to store the retrieved parameters.
 *
 * @note Address: 0x8013B504
 * @note Size: 0x70
 */
void Creature::getLifeGaugeParam(LifeGaugeParam& param)
{
	param.mPosition        = getPosition();
	param.mCurrHealthRatio = 1.0f;
	param.mRadius          = 10.0f;
	param.mIsGaugeShown    = true;
}

/**
 * Saves the Creature object to a Stream.
 *
 * @param output The Stream to save the Creature to.
 * @param flags The flags indicating which data to save.
 *
 * @note Address: 0x8013B574
 * @note Size: 0x90
 */
void Creature::save(Stream& output, u8 flags)
{
	if (flags & CREATURE_SAVE_FLAG_POSITION) {
		Vector3f position = getPosition();
		position.write(output);
	}

	doSave(output);
}

/**
 * Loads the Creature data from the given input stream.
 *
 * @param input The input stream to read the data from.
 * @param flags The flags indicating which data to load.
 *
 * @note Address: 0x8013B604
 * @note Size: 0xE4
 */
void Creature::load(Stream& input, u8 flags)
{
	if (flags & CREATURE_SAVE_FLAG_POSITION) {
		Vector3f position;
		position.read(input);
		setPosition(position, false);
	}

	doLoad(input);
}

/**
 * Calculates the distance between the bounding spheres of two creatures.
 *
 * @param other A pointer to the other creature.
 * @return The distance between the bounding spheres of the two creatures.
 *
 * @note Address: 0x8013B6E8
 * @note Size: 0xBC
 */
f32 Creature::calcSphereDistance(Creature* other)
{
	Sys::Sphere otherBoundSphere;
	other->getBoundingSphere(otherBoundSphere);

	Sys::Sphere srcBoundSphere;
	getBoundingSphere(srcBoundSphere);

	Vector3f dir = srcBoundSphere.mPosition - otherBoundSphere.mPosition;
	return dir.length() - (srcBoundSphere.mRadius + otherBoundSphere.mRadius);
}

/**
 * Applies air drag to the creature's velocity.
 *
 * @param drag The overall drag coefficient.
 * @param horizontalDrag The horizontal drag coefficient.
 * @param verticalDrag The vertical drag coefficient.
 *
 * @note Address: 0x8013B7A4
 * @note Size: 0xCC
 */
void Creature::applyAirDrag(f32 drag, f32 horizontalDrag, f32 verticalDrag)
{
	Vector3f vel = getVelocity();

	vel.y -= verticalDrag * (drag * vel.y);
	vel.x -= (vel.x * (drag * horizontalDrag));
	vel.z -= (vel.z * (drag * horizontalDrag));

	setVelocity(vel);
}

/**
 * @note Address: 0x8013B870
 * @note Size: 0x3C
 */
void Creature::doAnimation()
{
	if (mModel) {
		mModel->mJ3dModel->calc();
	}
}

/**
 * @note Address: 0x8013B8AC
 * @note Size: 0x4
 */
void Creature::doEntry() { }

/**
 * Sets the viewport for the creature.
 *
 * @param viewportNumber The number of the viewport to set the view for.
 *                       Valid values are 0 and 1 for 2 player modes.
 *
 * @note Address: 0x8013B8B0
 * @note Size: 0x108
 */
void Creature::doSetView(int viewportNumber)
{
	// 2 viewports maximum (2 player modes)
	P2ASSERTBOUNDSLINE(558, 0, viewportNumber, 2);

	if (!mModel) {
		return;
	}

	P2ASSERTLINE(563, mModel);

	mModel->setCurrentViewNo((u16)viewportNumber);
	if (Creature::usePacketCulling) {
		if (mLod.isVPVisible(viewportNumber)) {
			mModel->showPackets();
			return;
		}

		mModel->hidePackets();
		return;
	}

	mModel->showPackets();
}

/**
 * @note Address: 0x8013B9B8
 * @note Size: 0x2C
 */
void Creature::doViewCalc()
{
	if (mModel) {
		mModel->viewCalc();
	}
}

/**
 * @note Address: 0x8013B9E4
 * @note Size: 0x10
 */
bool Creature::isPiki() { return mObjectTypeID == OBJTYPE_Piki; }

/**
 * @note Address: 0x8013B9F4
 * @note Size: 0x14
 */
bool Creature::isNavi() { return mObjectTypeID == OBJTYPE_Navi; }

/**
 * @note Address: 0x8013BA08
 * @note Size: 0x14
 */
bool Creature::isTeki() { return mObjectTypeID == OBJTYPE_Teki; }

/**
 * @note Address: 0x8013BA1C
 * @note Size: 0x14
 */
bool Creature::isPellet() { return mObjectTypeID == OBJTYPE_Pellet; }

/**
 * @note Address: 0x8013BA30
 * @note Size: 0x20
 */
bool Creature::sound_culling() { return !(mLod.isFlag(AILOD_PikiInCell) || mLod.isFlag(AILOD_IsVisible)); }

/**
 * @note Address: 0x8013BA50
 * @note Size: 0x9C
 */
void Creature::movie_begin(bool isMainActor)
{
	mFlags.set(CF_IsMovieActor);

	if (!isMainActor) {
		mFlags.set(CF_IsMovieExtra);
		isPiki();
	} else {
		mFlags.unset(CF_IsMovieExtra);
		isPiki();
	}

	on_movie_begin(isMainActor);
}

/**
 * @note Address: 0x8013BAEC
 * @note Size: 0x50
 */
void Creature::movie_end(bool isMainActor)
{
	on_movie_end(isMainActor);
	mFlags.unset(CF_IsMovieActor);
	mFlags.unset(CF_IsMovieExtra);
}

/**
 * @brief Checks if the given bounding sphere is in water.
 *
 * @param waterBox The water box to check against.
 * @param boundSphere The bounding sphere to check.
 * @return The updated water box after checking.
 *
 * @note Address: 0x8013BB3C
 * @note Size: 0xE0
 */
WaterBox* Creature::checkWater(WaterBox* waterBox, Sys::Sphere& boundSphere)
{
	if (waterBox) {
		if (!waterBox->inWater(boundSphere)) {
			if (mapMgr) {
				waterBox = mapMgr->findWater(boundSphere);
			}

			if (!waterBox) {
				outWaterCallback();
				waterBox = nullptr;
			}
		}
	} else {
		WaterBox* wb = nullptr;
		if (mapMgr) {
			wb = mapMgr->findWater(boundSphere);
		}

		waterBox = wb;
		if (waterBox) {
			inWaterCallback(waterBox);
		}
	}

	return waterBox;
}

/**
 * Checks if the creature is in the "hell" area.
 *
 * @param hellArg The argument for checking hell conditions.
 * @return The status of the creature in the hell area.
 *         - CREATURE_HELL_DEATH if the creature is below -500.0f in the y-axis and is a Pikmin.
 *         - CREATURE_HELL_BELOWMAP if the creature is below -300.0f in the y-axis.
 *         - CREATURE_HELL_ALIVE if the creature is above -300.0f in the y-axis.
 *
 * @note Address: 0x8013BC24
 * @note Size: 0x144
 */
int Creature::checkHell(Creature::CheckHellArg& hellArg)
{
	Vector3f pos = getPosition();

	if (pos.y < -500.0f) {
		if (isPiki() && static_cast<Piki*>(this)->isPikmin()) {
			deathMgr->inc(DeathCounter::COD_Battle); // getting sent to hell would get you into valhalla in P2
		}

		if (hellArg.mIsKillPiki) {
			kill(nullptr);
		}

		return CREATURE_HELL_DEATH;
	}

	return pos.y < -300.0f;
}

/**
 * @note Address: 0x8013BD68
 * @note Size: 0x178
 */
void Creature::updateCell()
{
	if (gameSystem && gameSystem->isFlag(GAMESYS_DisableCollision)) {
		return;
	}

	mPassID = -1;

	Sys::Sphere ball(getPosition());
	ball.mRadius = getCellRadius();

	SweepPrune::Object::mMinX.mRadius = ball.mPosition.x - ball.mRadius;
	SweepPrune::Object::mMaxX.mRadius = ball.mPosition.x + ball.mRadius;
	SweepPrune::Object::mMinZ.mRadius = ball.mPosition.z - ball.mRadius;
	SweepPrune::Object::mMaxZ.mRadius = ball.mPosition.z + ball.mRadius;

	SweepPrune::Object* sweepObj = this;

	CellPyramid* mgr;
	sweepObj->mMinX.insertSort((mgr = cellMgr)->mXNode);
	sweepObj->mMaxX.insertSort(mgr->mXNode);
	sweepObj->mMinZ.insertSort(mgr->mZNode);
	sweepObj->mMaxZ.insertSort(mgr->mZNode);

	if (cellMgr) {
		CellPyramid::sCellBugName = getCreatureName();
		CellPyramid::sCellBugID   = getCreatureID();
		cellMgr->entry(this, ball, mCellLayerIndex, mCellRect);
	}
}

/**
 * @note Address: 0x8013BEE8
 * @note Size: 0x44
 */
int Creature::getCellPikiCount()
{
	if (cellMgr) {
		return cellMgr->getPikiCount(mCellLayerIndex, mCellRect);
	}

	return 0;
}

/**
 * @note Address: 0x8013BF2C
 * @note Size: 0xB0
 */
void Creature::applyImpulse(Vector3f& unused, Vector3f& impulse)
{
	Vector3f oldVelocity = getVelocity();
	Vector3f newVelocity = oldVelocity;

	newVelocity = newVelocity + (impulse * mMass);
	setVelocity(newVelocity);
}

/**
 * @note Address: 0x8013BFDC
 * @note Size: 0x2E4
 */
void Creature::checkCollision(CellObject* other)
{
	Creature* cellCreature = static_cast<Creature*>(other);

	if (isDebugCollision()) {
		getCreatureName();
		cellCreature->getCreatureName();
	}

	if (!cellCreature->isAtari() || !isAtari()) {
		return;
	}

	Creature* creatureObj = cellCreature;

	// TODO: This is cancer, fix
	if (!((!isStickTo() || mSticker != cellCreature) && (!creatureObj->isStickTo() || creatureObj->mSticker != this)
	      && !ignoreAtari(creatureObj))
	    || creatureObj->ignoreAtari(this)) {
		return;
	}

	if (!creatureObj->isAlive() || !isAlive()) {
		return;
	}

	isDebugCollision();

	Delegate3<Creature, CollPart*, CollPart*, Vector3f&> delegate
	    = Delegate3<Creature, CollPart*, CollPart*, Vector3f&>(this, &resolveOneColl);
	currOp = creatureObj;

	if (isDebugCollision()) {
		CollTree::mDebug = true;
	}

	bool creatureCheck = true;
	if (!isPiki() && !isNavi()) {
		creatureCheck = false;
	}

	bool objCheck = true;
	if (!cellCreature->isPiki() && !cellCreature->isNavi()) {
		objCheck = false;
	}

	CollPart* collPart1;
	CollPart* collPart2;
	Vector3f hitPoint;

	if ((creatureCheck && objCheck) || (!creatureCheck && !objCheck)) {
		if (mCollTree->checkCollision(creatureObj->mCollTree, &collPart1, &collPart2, hitPoint)) {
			delegate.invoke(collPart1, collPart2, hitPoint);
		}
	} else {
		mCollTree->checkCollisionMulti(creatureObj->mCollTree, (IDelegate3<CollPart*, CollPart*, Vector3<f32>&>*)&delegate);
	}

	CollTree::mDebug = false;
	currOp           = nullptr;
}

/**
 * @note Address: 0x8013C2C0
 * @note Size: 0x8CC
 */
void Creature::resolveOneColl(CollPart* source, CollPart* dest, Vector3f& direction)
{
	Creature* op = currOp;
	if (!currOp) {
		return;
	}

	if (isDebugCollision()) {
		getCreatureName();
		op->getCreatureName();
	}

	bool flickCheck = false;
	if (!isCollisionFlick() || !op->isCollisionFlick()) {
		flickCheck = true;
	}

	Vector3f collisionNormal(-direction.x, -direction.y, -direction.z);
	if (collisionNormal.normalise() == 0.0f) {
		collisionNormal = Vector3f(0.0f, 0.0f, 1.0f);
	}

	Vector3f velAtSource;
	Vector3f velAtDest;
	Vector3f pointSource = source->mPosition + (collisionNormal * source->mRadius);
	Vector3f pointDest   = dest->mPosition - (collisionNormal * dest->mRadius);

	getVelocityAt(pointSource, velAtSource);
	op->getVelocityAt(pointDest, velAtDest);

	f32 massRatioThisCreature;
	f32 massRatioOtherCreature;

	f32 totalMass = mMass + op->mMass;
	if (totalMass > 0.0f) {
		massRatioThisCreature  = mMass / totalMass;
		massRatioOtherCreature = 1.0f - massRatioThisCreature;
	} else {
		massRatioThisCreature = massRatioOtherCreature = 0.5f;
	}

	f32 fps = 1.0f / sys->mDeltaTime;
	if (isNavi() && !op->isNavi()) {
		if (!op->isPiki()) {
			addAccel(mAcceleration, direction, massRatioThisCreature, fps, 0.5f, 0.0f);
		}
	} else {
		setAccel(mAcceleration, direction, massRatioThisCreature, fps, 0.5f, 0.0f);
	}

	if (op->isNavi() && !isNavi()) {
		if (!isPiki()) {
			setOpAccel(op->mAcceleration, direction, massRatioOtherCreature, fps, 0.5f, 0.0f);
		}
	} else {
		setOpAccel(op->mAcceleration, direction, massRatioOtherCreature, fps, 0.5f, 0.0f);
	}

	f32 accelMag = mAcceleration.length();
	if (accelMag > 200.0f) {
		f32 accelNorm = 200.0f * (1.0f / accelMag);
		mAcceleration *= accelNorm;
	}

	f32 opAccelMag = op->mAcceleration.length();
	if (opAccelMag > 200.0f) {
		f32 opAccelNorm = 200.0f * (1.0f / opAccelMag);
		op->mAcceleration *= opAccelNorm;
	}

	if (flickCheck) {
		mAcceleration     = Vector3f(0.0f);
		op->mAcceleration = Vector3f(0.0f);
	}

	CollEvent destToSrcEvent(op, dest, source);

	Vector3f velocityDifference = velAtSource - velAtDest;
	f32 sepDot                  = velocityDifference.dot(collisionNormal);
	collisionCallback(destToSrcEvent);

	CollEvent srcToDestEvent(this, source, dest);
	op->collisionCallback(srcToDestEvent);

	if (sepDot <= 0.0f) {
		if (isDebugCollision()) {
			getCreatureName();
			op->getCreatureName();
		}

		return;
	}

	isDebugCollision();
	if (flickCheck) {
		isDebugCollision();
		return;
	}

	f32 naviFactor = 0.1f;
	if (isNavi() || op->isNavi()) {
		naviFactor = 0.0f;
	}

	bool checkSum2             = false;
	f32 collisionImpulseFactor = -(1.0f + naviFactor) * sepDot;
	f32 totalMass2             = mMass + op->mMass;
	if (totalMass2 == 0.0f) {
		totalMass2 = 2.0f;
		checkSum2  = true;
	}

	totalMass2 += getAngularEffect(pointSource, collisionNormal);
	totalMass2 += op->getAngularEffect(pointDest, collisionNormal);
	f32 posFac           = collisionImpulseFactor / (totalMass2);
	Vector3f updatedVec1 = collisionNormal * posFac;
	Vector3f updatedVec2 = collisionNormal * -posFac;

	if (!checkSum2) {
		applyImpulse(pointSource, updatedVec1);
		op->applyImpulse(pointDest, updatedVec2);
		return;
	}

	Vector3f updatedVel1 = getVelocity();
	updatedVel1          = Vector3f(updatedVel1.x + updatedVec1.x, updatedVel1.y + updatedVec1.y, updatedVel1.z + updatedVec1.z);
	setVelocity(updatedVel1);

	Vector3f updatedVel2 = op->getVelocity();
	updatedVel2          = Vector3f(updatedVel2.x + updatedVec2.x, updatedVel2.y + updatedVec2.y, updatedVel2.z + updatedVec2.z);
	op->setVelocity(updatedVel2);
}

} // namespace Game
