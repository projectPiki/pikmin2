#include "Dolphin/rand.h"
#include "Game/Interaction.h"
#include "efx/efxPikmin.h"
#include "types.h"
#include "P2Macros.h"
#include "Vector3.h"
#include "PikiAI.h"
#include "Game/pelletMgr.h"
#include "Game/Entities/ItemOnyon.h"
#include "Game/pathfinder.h"
#include "Game/routeMgr.h"
#include "Game/MapMgr.h"
#include "Game/mapParts.h"
#include "Game/Stickers.h"
#include "Game/PikiParms.h"
#include "nans.h"

static const int unusedAiPrimArray[] = { 0, 0, 0 };
static const char unusedAiPrimName[] = "aiPrimitives";

namespace PikiAI {

/**
 * @note Address: 0x801972DC
 * @note Size: 0x3C
 */
ActGotoPos::ActGotoPos(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x80197318
 * @note Size: 0x78
 */
void ActGotoPos::init(ActionArg* actionArg)
{
	GotoPosActionArg* posArg = static_cast<GotoPosActionArg*>(actionArg);
	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mPosition = posArg->mPosition;
	mRadius   = posArg->mRadius;
}

/**
 * @note Address: 0x80197390
 * @note Size: 0x11C
 */
int ActGotoPos::exec()
{
	Vector3f pikiPos = mParent->getPosition();
	Vector3f diff    = mPosition - pikiPos;

	f32 dist = diff.normalise();
	if (dist <= mRadius) {
		return ACTEXEC_Success;
	}

	mParent->setSpeed(1.0f, diff);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801974AC
 * @note Size: 0x4
 */
void ActGotoPos::cleanup()
{
}

/**
 * @note Address: 0x801974B0
 * @note Size: 0x3C
 */
ActApproachPos::ActApproachPos(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x801974EC
 * @note Size: 0x104
 */
void ActApproachPos::init(ActionArg* settings)
{
	bool isApproachArg = settings && settings->is("ApproachPosActionArg");
	P2ASSERTLINE(424, isApproachArg);
	ApproachPosActionArg* approachArg = static_cast<ApproachPosActionArg*>(settings);

	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);

	mGoalPosition   = approachArg->mGoalPosition;
	mRadius         = approachArg->mRadius;
	mIsElasticSpeed = approachArg->mIsElasticSpeed;
	mIsCheck3D      = approachArg->mIsCheck3D;
	mTimeOutLimit   = approachArg->mTimeOutLimit;

	mTimer = 0.0f;
}

/**
 * @note Address: 0x801975F0
 * @note Size: 0x328
 */
int ActApproachPos::exec()
{
	Vector3f dir = mGoalPosition - mParent->getPosition();
	f32 dist     = dir.length2D();
	f32 y        = dir.y;
	dir.normalise();

	f32 angleDist = angDist(JMAAtan2Radian(dir.x, dir.z), mParent->getFaceDir());

	// time out if we have a time limit and we've tried at least that long
	if (mTimeOutLimit > 0.0f) {
		mTimer += sys->mDeltaTime;
		if (mTimer >= mTimeOutLimit) {
			return ACTEXEC_Success;
		}
	}

	// if we're checking height and we're *too* far away vertically, fail
	if (mIsCheck3D && FABS(y) > 20.0f) {
		return ACTEXEC_Fail;
	}

	// if we're within the radius, move back a lil pls. too close. jeez.
	if (dist < mRadius) {
		mParent->setMoveRotation(false);
		mParent->setSpeed(-0.5f, dir, dist);

		// if we're nowhere close, keep moving!
	} else if (dist > mRadius + 6.0f) {
		mParent->setMoveRotation(true);

		// elastic speed - if we're far away, go a little faster!
		if (mIsElasticSpeed) {
			f32 speed = 0.01f * dist;
			if (speed > 1.0f) {
				speed = 1.0f;
			}

			speed *= 0.5f;
			mParent->setSpeed(speed + 0.5f, dir);

		} else { // nvm just go a fixed speed
			mParent->setSpeed(0.5f, dir);
		}

		// we're close enough to the ~zone~
	} else {
		// STOP
		mParent->setVelocity(Vector3f::zero);

		// if we're basically facing the goal position, we win (we can stop)
		if (FABS(angleDist) < PI / 10.0f) {
			// if we need to check height, make sure we're within 10 units. if not, keep going
			if (mIsCheck3D) {
				if (FABS(dir.y) > 10.0f) {
					return ACTEXEC_Continue;
				}
			}
			return ACTEXEC_Success;

		} else {
			// we're not facing the right spot! turn gradually toward the spot.
			mParent->mFaceDir = roundAng(0.2f * angleDist + mParent->mFaceDir);
		}
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x80197918
 * @note Size: 0x34
 */
void ActApproachPos::cleanup()
{
	mParent->setMoveRotation(true);
}

/**
 * @note Address: 0x8019794C
 * @note Size: 0x3C
 */
ActGotoSlot::ActGotoSlot(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x80197988
 * @note Size: 0x18C
 */
void ActGotoSlot::init(ActionArg* settings)
{
	bool isGotoSlotArg = settings && settings->is("GotoSlotArg");
	P2ASSERTLINE(529, isGotoSlotArg);

	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);

	GotoSlotArg* slotArg = static_cast<GotoSlotArg*>(settings);
	mPellet              = slotArg->mPellet;

	if (slotArg->mSlotSearchType == SLOTSEARCH_Nearest) {
		Vector3f pikiPos = mParent->getPosition();
		mSlotId          = mPellet->getNearFreeStickSlot(pikiPos);

	} else {
		mSlotId = mPellet->getRandomFreeStickSlot();
	}

	if (mPellet->isPellet() && mPellet->getTotalPikmins() == 0) {
		mSlotId      = 0;
		mIsFirstPiki = true;
	}

	resetTimers();
	mWallTimer = 0;
}

/**
 * @note Address: 0x80197B14
 * @note Size: 0x18
 */
void ActGotoSlot::wallCallback(Vector3f&)
{
	if (mWallTimer < 100) {
		mWallTimer++;
	}
}

/**
 * @note Address: 0x80197B2C
 * @note Size: 0x14
 */
void ActGotoSlot::resetTimers()
{
	mRetryCounter     = 0;
	mRefreshSlotTimer = 3.0f;
}

/**
 * @note Address: 0x80197B40
 * @note Size: 0xA94
 */
int ActGotoSlot::exec()
{
	// no slot to go to :(
	if (mSlotId == -1) {
		return ACTEXEC_Fail;
	}

	// no pellet to grab :(
	if (!mPellet->isAlive()) {
		return ACTEXEC_Fail;
	}

	// no slots are filled, we can choose the best seat.
	if (mIsFirstPiki) {
		Game::Pellet* pellet = mPellet;
		bool isAlreadyPikmin = false;
		if (pellet->getTotalPikmins()) {
			isAlreadyPikmin = true;
		}

		// another piki grabbed it while we were waiting
		if (isAlreadyPikmin) {
			mIsFirstPiki     = false;
			Vector3f pikiPos = mParent->getPosition();
			mSlotId          = mPellet->getNearFreeStickSlot(pikiPos);

			// if we can't find a slot, fail
			if (mSlotId == -1) {
				return ACTEXEC_Fail;
			}

			resetTimers();
			return ACTEXEC_Continue;
		}

		Vector3f stickSlotPos; // unused
		mPellet->calcStickSlotGlobal(mSlotId, stickSlotPos);

		Vector3f pelletPos = pellet->getPosition();
		f32 pickRadius     = pellet->getPickRadius();
		Vector3f pikiPos   = mParent->getPosition();

		if (mPellet->isPellet()) {
			pelletPos.y -= 0.5f * mPellet->getCylinderHeight();
		}

		// direction to goal
		Vector3f sep = pelletPos - pikiPos;
		sep.y        = 0.0f;

		sep.normalise();

		// how far do we have to go to the actual pickup point?
		Vector3f vec = pelletPos;
		vec -= sep * pickRadius;
		vec.set(vec.x - pikiPos.x, vec.y - pikiPos.y, vec.z - pikiPos.z);
		f32 dist = vec.length2D();

		// if we're not that close, get that ass moving
		if (dist > 6.0f) {
			mParent->setSpeed(1.0f, sep);

			// if we're SORTA close, check we're not stuck
			if (dist < 40.0f) {

				// if we're 'stuck' for at least 60 frames, fail
				if (++mRetryCounter >= 60) {
					resetTimers();
					return ACTEXEC_Fail;
				}
			}

			// if we're within 6 units and vertically 'close enough', grab the damn pellet
		} else if (absF(vec.y) < 20.0f) {
			Vector3f slotPos;
			pellet->calcStickSlotGlobal(0, slotPos);

			slotPos = slotPos - pelletPos;
			slotPos.normalise();

			sep *= -1.0f;

			f32 crossThing = (slotPos.z * sep.x) - (slotPos.x * sep.z);
			f32 factor     = slotPos.dot(sep);
			if (slotPos.dot(sep) >= 1.0f) {
				factor = 1.0f;
			} else if (slotPos.dot(sep) <= -1.0f) {
				factor = -1.0f;
			}

			pellet->mAngleOffset = (crossThing > 0.0f) ? acosf(factor) : roundAng(-acosf(factor));

			mParent->startStick(mPellet, mSlotId);
			return ACTEXEC_Success;

			// we're close in 2D but not vertically; check we're not stuck
		} else if (++mRetryCounter >= 60) {
			resetTimers();
			return ACTEXEC_Fail;

			// close 2D, not vertically, not stuck. slow down but keep trying
		} else {
			mParent->setSpeed(0.2f, sep);
		}

		return ACTEXEC_Continue;
	}

	// we're not the first piki, we need to check the other slots more carefully.

	Vector3f slotPos;
	mPellet->calcStickSlotGlobal(mSlotId, slotPos);
	Vector3f pikiPos = mParent->getPosition();

	// direction to goal
	Vector3f dir = slotPos - pikiPos;
	f32 absY     = absF(dir.y);
	f32 dist     = dir.length2D();
	dir.normalise();

	// if we're within 100 units but we're stuck, get a new slot
	if (dist < 100.0f && ++mRetryCounter >= 60) {
		s16 oldSlot = mSlotId;

		// get a better slot.
		mSlotId = mPellet->getNearFreeStickSlot(pikiPos);

		// HEY I'M TRYNA GRAB OVA ERE
		if (mPellet->isPellet()) {
			mPellet->sendClaim();
		}

		// if we just got the same slot back, fail bc we're stuck
		if (oldSlot == mSlotId) {
			return ACTEXEC_Fail;
		}

		// if we don't find a (free) slot, fail
		if (mSlotId == -1) {
			return ACTEXEC_Fail;
		}

		// we have a new slot, try again
		resetTimers();
		return ACTEXEC_Continue;
	}

	// move closer!!
	if (dist > 6.0f) {
		mParent->setSpeed(1.0f, dir);
		return ACTEXEC_Continue;
	}

	// we're close! and also close enough vertically! grab the damn pellet.
	if (dist < 6.0f && absY < 20.0f) {
		// better double check the slot is free lol.
		if (!mPellet->isSlotFree(mSlotId)) {
			// slot got taken :( find a new one and try again
			mSlotId = mPellet->getNearFreeStickSlot(pikiPos);
			resetTimers();
			return ACTEXEC_Continue;
		}

		// grab pellet.
		mParent->startStick(mPellet, mSlotId);
		pikiPos = mParent->getPosition();
		return ACTEXEC_Success;
	}

	// we're close horizontally, but not vertically? otherwise we'd be out by now?
	Vector3f pelletPos = mPellet->getPosition();
	Vector3f sep2      = pelletPos - pikiPos;
	Vector2f sep2D(sep2.x, sep2.z);

	// NB: this is just horizontal now, and also piki -> pellet, not piki -> slot
	f32 dist2D = sep2D.length();
	if (dist2D < dist) {

		// keep trying to get closer to the *pellet* horizontally while we check if we're stuck
		sep2.normalise();
		Vector3f dir2(-sep2.z, 0.0f, sep2.x);
		dir2.normalise();

		mParent->setSpeed(0.2f, dir2);

		// we have 3 seconds to keep trying before we look for a new slot.
		mRefreshSlotTimer -= sys->mDeltaTime;
		if (mRefreshSlotTimer < 0.0f) {
			// yeah we're stuck, try a new slot
			mSlotId = mPellet->getNearFreeStickSlot(pikiPos);
			resetTimers();
		}

		return ACTEXEC_Continue;
	}

	// 2D distance to pellet is more than 3D distance to slot, so keep moving
	mParent->setSpeed(0.2f, dir);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x801985D4
 * @note Size: 0x4
 */
void ActGotoSlot::cleanup()
{
}

/**
 * @note Address: 0x801985D8
 * @note Size: 0x7C
 */
ActPathMove::ActPathMove(Game::Piki* p)
    : Action(p)
{
	mLinks        = new WayPointLinks;
	mStartWPIndex = -1;
}

/**
 * @note Address: 0x80198654
 * @note Size: 0x1BC
 */
void ActPathMove::init(ActionArg* settings)
{
	mVsWayPointCounter = 0;
	bool check         = settings && settings->is("PathMoveArg");

	P2ASSERTLINE(790, check);

	PathMoveArg* pathMoveArg = static_cast<PathMoveArg*>(settings);

	mOnyon  = nullptr;
	mPellet = pathMoveArg->mPellet;

	// this doesn't seem to be used, input is always 0 anyway.
	mUnusedPathFlag = (pathMoveArg->_18 > 0);
	if (mUnusedPathFlag) {
		mUnusedSlotId = pathMoveArg->_18;
	}

	mContextHandle = 0;
	mNewVelocity   = Vector3f(0.0f);

	initPathfinding(true);

	// assume the pellet is picked up bc we're doing pathfinding
	mIsPickedUp = true;

	// this seems to be more for debug than anything else
	mPrevPosition = mPellet->getPosition();

	if (mPellet->isPellet()) {
		Game::Pellet* pellet = mPellet;
		mPellet->setVelocity(Vector3f::zero);
		pellet->mRigid.mConfigs[0].mForce = Vector3f(0.0f);
		s16 slot                          = pellet->getSpeicalSlot();
		if (slot == -1) {
			pellet->mPelletCarry->reset();
		}
	}
}

/**
 * @note Address: 0x80198810
 * @note Size: 0x3AC
 */
void ActPathMove::initPathfinding(bool resetLinkCount)
{
	if (resetLinkCount) {
		mLinks->mCount = 0;
	}

	if (mPellet->isPellet()) {
		Game::Pellet* pellet = mPellet;
		mPellet->setVelocity(Vector3f::zero);
		pellet->mRigid.mConfigs[0].mForce = Vector3f(0.0f);
		s16 slot                          = pellet->getSpeicalSlot();
		if (slot == -1) {
			pellet->mPelletCarry->reset();
		}
	}

	Vector3f pelletPos = mPellet->getPosition();
	Game::WPEdgeSearchArg searchArg(pelletPos);
	s16 roomIndex    = mParent->mRoomIndex;
	Vector3f* posPtr = &pelletPos; // required to make pelletPos go on stack properly smh
	if (Game::gameSystem->mIsInCave) {
		Sys::Sphere sphere;
		sphere.mPosition = pelletPos;
		sphere.mRadius   = 1.0f;
		if (mPellet->isPellet()) {
			sphere.mRadius = 1.0f;
		}

		roomIndex = static_cast<Game::RoomMapMgr*>(Game::mapMgr)->findRoomIndex(sphere);
	}

	searchArg.mRoomID = roomIndex;
	searchArg.mLinks  = mLinks;

	if (mPellet->inWater()) {
		searchArg.mInWater = true;
	}

	Game::WayPoint* startWP = nullptr;
	if (Game::mapMgr->mRouteMgr->getNearestEdge(searchArg)) {
		if (!searchArg.mWp1->isFlag(Game::WPF_Closed)) {
			startWP = searchArg.mWp1;
		} else {
			startWP = searchArg.mWp2;
		}
	} else {
		searchArg.mLinks = nullptr;
		if (Game::mapMgr->mRouteMgr->getNearestEdge(searchArg)) {
			if (searchArg.mWp1->isFlag(Game::WPF_Closed)) {
				startWP = searchArg.mWp2;
			} else {
				startWP = searchArg.mWp1;
			}
		} else {
			JUT_PANICLINE(925, "zannen !\n");
		}
	}

	JUT_ASSERTLINE(929, startWP, "start==0");

	mStartWPIndex = startWP->mIndex;

	mPathFindWPIndex  = startWP->mIndex;
	Game::Onyon* goal = decideGoal();
	JUT_ASSERTLINE(937, goal, "newgoal == 0");

	if (goal && mPellet->isPellet()) {
		mPellet->setCarryColor(goal->mOnyonType);
	}

	if (goal != mOnyon) {
		mGoalWPIndex  = goal->mGoalWayPoint->mIndex;
		mGoalPosition = goal->getGoalPos();
		mOnyon        = goal;
		if (mContextHandle) {
			Game::testPathfinder->release(mContextHandle);
		}
		mState = PATHMOVE_Pathfinding;

		u8 flag = Game::PATHFLAG_RequireOpen;
		if (isAllBlue()) {
			flag |= Game::PATHFLAG_PathThroughWater;
		}

		flag |= Game::PATHFLAG_DisallowUnfinishedBridges;
		if (Game::gameSystem && Game::gameSystem->isVersusMode()) {
			if (mOnyon->mOnyonType == ONYON_TYPE_BLUE) {
				flag |= (Game::PATHFLAG_VsBlue | Game::PATHFLAG_AllowUnvisited);
			} else {
				flag |= (Game::PATHFLAG_VsRed | Game::PATHFLAG_AllowUnvisited);
			}
		}

		Game::PathfindRequest request(mPathFindWPIndex, mGoalWPIndex, flag);
		mContextHandle        = Game::testPathfinder->start(request);
		mStartPathFindCounter = 0;
		mPathFindCounter      = 0;
		mRootNode             = nullptr;
	}
}

/**
 * @note Address: 0x80198BBC
 * @note Size: 0x5C
 */
Game::Onyon* ActPathMove::decideGoal()
{
	P2ASSERTLINE(998, mPellet->mObjectTypeID == OBJTYPE_Pellet);
	return mPellet->getPelletGoal();
}

/**
 * @note Address: 0x80198C18
 * @note Size: 0x11C
 */
int ActPathMove::exec()
{
	// check if we can pick up the pellet
	if (!mIsPickedUp) {
		Game::Pellet* pellet = mPellet;
		if (pellet->mPelletCarry->pullable(Game::PCS_Carry, pellet->getTotalCarryPikmins())) {
			pellet->startPick();
			if (mContextHandle != 0) {
				Game::testPathfinder->release(mContextHandle);
				mContextHandle = 0;
			}
			mIsPickedUp = true;
			mOnyon      = nullptr;
			initPathfinding(true);
		}
		return ACTEXEC_Continue;
	}

	switch (mState) {
	case PATHMOVE_Pathfinding:
		return execPathfinding();

	case PATHMOVE_Move:
		return execMove();

	case PATHMOVE_MoveGoal:
		return execMoveGoal();

	case PATHMOVE_MoveGuru:
		return execMoveGuru();

	default:
		return ACTEXEC_Continue;
	}
}

/**
 * @note Address: 0x80198D34
 * @note Size: 0x2B0
 */
int ActPathMove::execPathfinding()
{
	Game::Pellet* pellet = mPellet;
	if (pellet) {
		// RESET PELLET CARRY SPEED
		pellet->mPelletCarry->pull(Game::PCS_Carry, Vector3f::zero, pellet->getTotalCarryPikmins());
	}

	// no context handle!
	if (mContextHandle == 0) {
		return ACTEXEC_Fail;
	}

	// NULL context handle! (!)
	if (mContextHandle == -1) {
		return ACTEXEC_Fail;
	}

	// keep track of how long we've been pathfinding for
	mPathFindCounter++;

	// god i hope we're a pellet
	if (mPellet->isPellet()) {
		pellet = mPellet;

		// if we've been picked up, don't move while we pathfind
		if (pellet->isPicked()) {
			mPellet->setVelocity(Vector3f::zero);
			pellet->mRigid.mConfigs->mForce = Vector3f(0.0f);
			if ((s16)pellet->getSpeicalSlot() == -1) {
				pellet->mPelletCarry->reset();
			}
		}
	}

	// see how pathfinding is going
	switch (Game::testPathfinder->check(mContextHandle)) {
	case Game::PATHFIND_MakePath: // ready to make the path!

		// get how many waypoints we have in our path
		mWayPointCount = Game::testPathfinder->makepath(mContextHandle, &mStartNode);

		// set nodes and get ready to MOVE
		mRootNode = mStartNode;
		mState    = PATHMOVE_Move;

		// initialize spline system
		crInit();

		// debug
		int endIdx = -1;
		FOREACH_NODE(Game::PathNode, mStartNode, node)
		{
			endIdx = node->mWpIndex;
		}
		char buf[256];
		sprintf(buf, "%d->%d->...->%d", mStartNode->mWpIndex, (mStartNode->mNext) ? (char*)mStartNode->mNext->mWpIndex : "...", endIdx);
		return ACTEXEC_Continue;

	case Game::PATHFIND_Start: // make a new context and start a path
		if (mContextHandle) {
			Game::testPathfinder->release(mContextHandle);
		}

		u8 flag = (Game::PATHFLAG_PathThroughWater | Game::PATHFLAG_DisallowUnfinishedBridges);
		mStartPathFindCounter++;
		mState = PATHMOVE_Pathfinding;
		if (Game::gameSystem && Game::gameSystem->isVersusMode()) {
			flag |= Game::PATHFLAG_AllowUnvisited;
		}
		if (mStartPathFindCounter >= 2) {
			flag |= Game::PATHFLAG_AllowUnvisited; // hm
			if (mStartPathFindCounter >= 3) {
				mStartPathFindCounter = 3;
			}
		}

		Game::PathfindRequest request(mPathFindWPIndex, mGoalWPIndex, flag);

		// get a new handle
		mContextHandle = Game::testPathfinder->start(request);

		// reset our counter bc we have a new context!
		mPathFindCounter = 0;
		return ACTEXEC_Continue;

	case Game::PATHFIND_Busy: // keep on keepin' on
		break;

	case Game::PATHFIND_NoHandle: // woops something happened to the handle
		JUT_PANICLINE(1201, "no handle %d\n", mContextHandle);
		break;
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: N/A
 * @note Size: 0x1AC
 */
f32 ActPathMove::getCarrySpeed()
{
	f32 carryPower;
	f32 maxFactor = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mCarryMaxFactor.mValue; // f30
	f32 minFactor = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mCarryMinFactor.mValue; // f31

	P2ASSERTLINE(1215, mPellet->mObjectTypeID == OBJTYPE_Pellet);

	Game::Pellet* pellet = mPellet;
	// if we're carrying a captain, go at FULL SPEED
	if (pellet->mPelletView && pellet->mPelletView->mCreature->isNavi()) {
		return static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed();

		// if we're carrying a cherry in VS mode, go at FULL SPEED
	} else if (Game::gameSystem->isVersusMode() && pellet->mPelletFlag == Game::Pellet::FLAG_VS_CHERRY) {
		return static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed();
	}

	f32 maxSpeed = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed.mValue * maxFactor;
	f32 minSpeed = static_cast<Game::PikiParms*>(mParent->mParms)->mPikiParms.mRunSpeed.mValue * minFactor;

	int min = pellet->getPelletConfigMin();
	int max = pellet->getPelletConfigMax();

	carryPower = pellet->getCarryPower();
	JUT_ASSERTLINE(1248, max, "max is 0 [%s]\n", pellet->mConfig->mParams.mName.mData);

	return minSpeed + (((1.0f + carryPower) - (f32)min) / (f32)max) * (maxSpeed - minSpeed);
}

/**
 * @note Address: 0x80198FE4
 * @note Size: 0x6A8
 */
int ActPathMove::execMoveGoal()
{
	Vector3f pelletPos = mPellet->getPosition();
	Vector3f dir       = mGoalPosition - pelletPos;
	f32 sqrDistXZ      = dir.x * dir.x + dir.z * dir.z;
	f32 dist           = dir.normalise();
	if (dist == 0.0f) {
		dir = Vector3f(0.0f);
	}

	// if we're within 10 units of goal (horizontally), WE CAN LET GO
	if (sqrDistXZ < 100.0f) {
		{ // this is so `stickers` gets deleted after the loop

			// make all pikis carrying pellet movie extras
			Game::Stickers stickers(mPellet);
			Iterator<Game::Creature> iter(&stickers);
			CI_LOOP(iter)
			{
				(*iter)->movie_begin(false);
			}
		}

		// stop carrying the pellet
		mParent->finishMotion();
		mParent->endStick();

		{
			// make sure everyone ELSE stops carrying the pellet
			Game::Stickers stickers(mPellet);
			Iterator<Game::Creature> iter(&stickers);
			CI_LOOP(iter)
			{
				Game::Creature* stuck = *iter;
				if (stuck->isPiki()) {
					stuck->endStick();
				}
			}

			return ACTEXEC_Success;
		}
	}

	// we're not close enough, move a bit more
	f32 speed = getCarrySpeed();

	dir.y = 0.0f;
	dir *= speed;
	carry(dir);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019968C
 * @note Size: 0x9C
 */
bool ActPathMove::isAllBlue()
{
	P2ASSERTLINE(1325, mPellet->mObjectTypeID == OBJTYPE_Pellet);
	Game::Pellet* pellet = mPellet;
	// if all carrying pikmin are blues or bulbmin, return true (we can go through water!)
	if (pellet->getPikmins(Game::Blue) + pellet->getPikmins(Game::Bulbmin) == pellet->getTotalPikmins()) {
		return true;
	}
	return false;
}

/**
 * @note Address: 0x80199728
 * @note Size: 0xA8
 */
void ActPathMove::carry(Vector3f& velocity)
{
	Game::Pellet* pellet = mPellet;

	// MOVE THE PELLET
	bool pullResult = pellet->mPelletCarry->pull(Game::PCS_Carry, velocity, pellet->getTotalCarryPikmins());

	if (mIsPickedUp && !pullResult) {
		// we can no longer pick up pellet - drop it.
		mIsPickedUp = false;
		pellet->endPick(false);
	}
}

/**
 * @note Address: 0x801997D0
 * @note Size: 0x428
 */
int ActPathMove::execMove()
{
	f32 speed = getCarrySpeed();
	crMove();
	mNewVelocity.y = 0.0f;
	mNewVelocity.normalise();
	mNewVelocity *= speed;

	Game::Pellet* pellet = mPellet;

	// MOVE THE PELLET
	bool pullCheck = pellet->mPelletCarry->pull(Game::PCS_Carry, mNewVelocity, pellet->getTotalCarryPikmins());

	// we can no longer pick up pellet - drop it.
	if (mIsPickedUp && !pullCheck) {
		mIsPickedUp = false;
		pellet->endPick(false);
	}

	if (mPellet->isPellet()) {
		pellet             = mPellet;
		Vector3f pelletPos = pellet->getPosition();
		f32 dist           = pelletPos.distance(mPrevPosition); // f30
		mPrevPosition      = pelletPos;
		if (pellet->getWallTimer() > 99 && dist < 1.0f) {
			pellet->mWallTimer = 0;
			mOnyon             = nullptr;
			if (mContextHandle) {
				Game::testPathfinder->release(mContextHandle);
				mContextHandle = 0;
			}

			mLinks->mCount       = 0;
			WayPointLinks* links = mLinks;
			s16 idx              = mStartWPIndex;
			if (!links->addLink(idx)) {
				// if link didn't add, try EXTRA hard to add the link (literally does the same thing again lmao).
				mLinks->mCount          = 0;
				WayPointLinks* newLinks = mLinks;
				s16 newIdx              = mStartWPIndex;
				newLinks->addLink(newIdx);
			}

			initPathfinding(false);
		}
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x80199BF8
 * @note Size: 0x90
 */
void ActPathMove::cleanup()
{
	if (mPellet->isPellet()) {
		Game::Pellet* pellet = mPellet;
		if (pellet->isPicked()) {
			pellet->mPelletCarry->reset();
		}
	}
	if (mContextHandle != 0) {
		Game::testPathfinder->release(mContextHandle);
	}
	mContextHandle = 0;
}

/**
 * @note Address: 0x80199C88
 * @note Size: 0x4E8
 */
int ActPathMove::execMoveGuru()
{
	if (!mNextWayPoint->isFlag(Game::WPF_Closed)) {
		mState = PATHMOVE_Move;
		return ACTEXEC_Continue;
	}

	int wpId = mCurrGraphIdx;
	Vector3f moveVec;
	if (wpId >= 0) {
		Game::WayPoint* wp = getWayPoint(wpId);
		Vector3f wpPos     = wp->mPosition;
		Vector3f sep       = mNextWayPoint->mPosition - wpPos;
		f32 dist           = sep.normalise() - 160.0f;
		if (dist < 0.0f) {
			dist = 0.0f;
		}

		moveVec = wp->mPosition + sep * dist;

	} else {
		moveVec = mPacePosition;
	}

	// is this what makes treasures go in circles??
	mPaceAngle += PI * sys->mDeltaTime;
	if (mPaceAngle > TAU) {
		mPaceAngle -= TAU;
	}

	Vector3f dir = getDirection(mPaceAngle);
	dir *= 10.0f;
	dir += moveVec;
	Vector3f pullDir = dir;

	Vector3f pelletPos = mPellet->getPosition();
	pullDir            = pullDir - pelletPos;
	pullDir.y          = 0.0f;
	f32 dist           = pullDir.normalise();

	if (dist == 0.0f) {
		pullDir = Vector3f(0.0f);
	}

	f32 carrySpeed = getCarrySpeed();

	pullDir *= carrySpeed / 2;

	Game::Pellet* pellet = mPellet;

	// MOVE THE PELLET
	bool pullCheck = pellet->mPelletCarry->pull(Game::PCS_Carry, pullDir, pellet->getTotalCarryPikmins());

	// we can no longer pick up pellet - drop it.
	if (mIsPickedUp && !pullCheck) {
		mIsPickedUp = false;
		pellet->endPick(false);
	}

	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019A170
 * @note Size: 0xB8
 */
Game::WayPoint* ActPathMove::getWayPoint(int id)
{
	// count through the whole node graph so far til we get to our desired point
	Game::PathNode* node = mRootNode;
	for (int i = 0; i < id; i++) {
		node = node->mNext;
	}

	// assuming point exists, grab waypoint at this node
	if (node) {
		return Game::mapMgr->mRouteMgr->getWayPoint(node->mWpIndex);
	}

	// no node found
	return nullptr;
}

/**
 * @note Address: 0x8019A228
 * @note Size: 0x18C
 */
Vector3f ActPathMove::crGetPoint(int idx)
{
	Game::WayPoint* currWayPoint;
	if (idx < 0) {
		return mStartPosition;
	}

	if (idx >= mWayPointCount) {
		return mGoalPosition;
	}

	// breadbug crash happens in this inline.
	currWayPoint = getWayPoint(idx);

	if (!currWayPoint) {
		return Vector3f::zero;
	}

	Vector3f result = currWayPoint->mPosition;
	Vector3f diff   = result - mGoalPosition;
	diff.length(); // unused
	return result;
}

/**
 * @note Address: 0x8019A3B4
 * @note Size: 0x3C4
 */
bool ActPathMove::contextCheck(int idx)
{
	if (Game::gameSystem->isVersusMode()) {
		int nextIdx = idx + 1;
		if (nextIdx >= 0 && nextIdx < mWayPointCount) {
			Game::WayPoint* wp = getWayPoint(nextIdx);

			if (mOnyon->mOnyonType == ONYON_TYPE_BLUE) {
				if (wp->isFlag(Game::PATHFLAG_VsBlue)) {
					mVsWayPointCounter++;
					if (mVsWayPointCounter < 2) {
						return false;
					}
				} else {
					mVsWayPointCounter = 0;
				}
			} else if (wp->isFlag(Game::PATHFLAG_VsRed)) {
				mVsWayPointCounter++;
				if (mVsWayPointCounter < 2) {
					return false;
				}
			} else {
				mVsWayPointCounter = 0;
			}
		}
	}

	Vector3f pelletPos = mPellet->getPosition();
	Sys::Tube tube;           // 0x78
	Sys::Sphere pelletSphere; // 0x68
	pelletSphere.mPosition = pelletPos;
	if (mPellet->isPellet()) {
		pelletSphere.mRadius = mPellet->getBottomRadius();
	} else {
		mPellet->getBoundingSphere(pelletSphere);
	}

	if (idx < 0) {
		Vector3f point = crGetPoint(idx);
		crGetRadius(idx);

		// this is insane.
		Vector2f sep2D(point.x - pelletSphere.mPosition.x, point.z - pelletSphere.mPosition.z);
		f32 len;
		f32 x = sep2D.x + sep2D.x;
		f32 y = sep2D.y * sep2D.y;
		if (x + y > 0.0f) {
			Vector2f vec = Vector2f(sep2D.x, sep2D.y);
			len          = x + SQUARE(sep2D.y);
			len          = sqrtf(len);
		} else {
			len = 0.0f;
		}
		if (len > 700.0f) {
			return false;
		}

		return true;
	}

	Vector3f point           = crGetPoint(idx);
	Vector3f nextPoint       = crGetPoint(idx + 1);
	f32 rad                  = crGetRadius(idx);
	f32 nextRad              = crGetRadius(idx + 1);
	pelletSphere.mPosition.y = 0.0f;
	tube.mStartPos           = Vector3f(point.x, 0.0f, point.z);
	tube.mEndPos             = Vector3f(nextPoint.x, 0.0f, nextPoint.z);
	tube.mStartRadius        = rad;
	tube.mEndRadius          = nextRad;

	Vector3f collVec;
	f32 collAmt;

	if (tube.collide(pelletSphere, collVec, collAmt)) {
		return true;
	}

	Sys::Sphere pointSphere;
	pointSphere.mPosition = Vector3f(point.x, 0.0f, point.z);
	pointSphere.mRadius   = rad;

	if (pointSphere.intersect(pelletSphere)) {
		return true;
	}

	Sys::Sphere nextPointSphere;
	nextPointSphere.mPosition = Vector3f(nextPoint.x, 0.0f, nextPoint.z);
	nextPointSphere.mRadius   = nextRad;

	return (nextPointSphere.intersect(pelletSphere) > 0);
}

/**
 * @note Address: N/A
 * @note Size: 0xF0
 */
bool ActPathMove::crPointOpen(int idx)
{
	if (idx < 0 || idx >= mWayPointCount) {
		return true;
	}
	Game::WayPoint* wp2 = getWayPoint(idx);
	if (!wp2) {
		return true;
	}

	return (wp2->isFlag(Game::WPF_Closed)) <= 0; // SO dumb
}

/**
 * @note Address: 0x8019A778
 * @note Size: 0x134
 */
f32 ActPathMove::crGetRadius(int idx)
{
	if (idx < 0) {
		Sys::Sphere sphere;
		mPellet->getBoundingSphere(sphere);
		P2ASSERTLINE(1858, sphere.mRadius > 0.0f);
		return sphere.mRadius;
	}

	if (idx >= mWayPointCount) {
		return 50.0f;
	}

	Game::WayPoint* wp = getWayPoint(idx);
	if (!wp) {
		return 50.0f;
	}

	return wp->mRadius;
}

/**
 * @note Address: 0x8019A8AC
 * @note Size: 0x738
 */
void ActPathMove::crInit()
{
	mCurrGraphIdx  = -1;
	mStartPosition = mPellet->getPosition();
	Vector3f collVec;
	Sys::Tube tube;
	Sys::Sphere collSphere;

	Vector3f point1 = crGetPoint(mCurrGraphIdx + 1); // 0
	Vector3f point2 = crGetPoint(mCurrGraphIdx + 2); // 1

	bool pointCheck = point1 == point2;
	if (!pointCheck) {
		f32 rad2          = crGetRadius(mCurrGraphIdx + 2); // 1
		f32 rad1          = crGetRadius(mCurrGraphIdx + 1); // 0
		tube.mStartPos    = point1;
		tube.mEndPos      = point2;
		tube.mStartRadius = rad1;
		tube.mEndRadius   = rad2;
	}

	collSphere.mPosition = mStartPosition;
	collSphere.mRadius   = 0.0f;
	f32 collAmt;
	if (!pointCheck && tube.collide(collSphere, collVec, collAmt) && crPointOpen(mCurrGraphIdx + 2)) { // 1
		mCurrGraphIdx                = 0;                                                              // ready to start walk
		mCRControls[CRMOVE_Prev]     = crGetPoint(-1);
		mCRControls[CRMOVE_Curr]     = crGetPoint(-1);
		mCRControls[CRMOVE_Next]     = crGetPoint(1);
		mCRControls[CRMOVE_NextNext] = crGetPoint(2);
		return;
	}

	Game::WayPoint* nextWp = nullptr;
	Game::WayPoint* wp     = Game::mapMgr->mRouteMgr->getWayPoint(mStartNode->mWpIndex);
	if (mStartNode->mNext) {
		nextWp = Game::mapMgr->mRouteMgr->getWayPoint(mStartNode->mNext->mWpIndex);
	}

	if (wp && nextWp) {
		Vector3f newPoint = wp->mPosition;
		Vector3f nextPos  = nextWp->mPosition;
		Vector3f sep      = nextPos - newPoint;

		f32 dist = sep.normalise();

		Vector3f pelletPos = mPellet->getPosition();

		Vector3f pelletSep = pelletPos - newPoint;

		if (dist == 0.0f) {
			newPoint = newPoint;
		} else {
			f32 ratio = sep.dot(pelletSep) / dist;
			if (ratio < 0.0f) {
				newPoint = newPoint;
			} else if (ratio > 1.0f) {
				newPoint = nextPos;
			} else {
				newPoint = sep * (ratio * dist) + newPoint;
			}
		}

		crMakeRefs();
		mCRControls[CRMOVE_Next] = newPoint;
		return;
	}

	crMakeRefs();
}

/**
 * @note Address: 0x8019AFE4
 * @note Size: 0x80
 */
void ActPathMove::crMakeRefs()
{
	for (int i = 0; i < CRMOVE_Count; i++) {
		mCRControls[i] = crGetPoint(mCurrGraphIdx + i - 1);
	}
}

/**
 * @note Address: 0x8019B064
 * @note Size: 0xC54
 */
bool ActPathMove::crMove()
{
	Vector3f point0 = crGetPoint(mCurrGraphIdx); // 0x7c, f28, f27, f26
	Vector3f point2 = mCRControls[CRMOVE_Next];  // f31, f29, f22
	if ((mCurrGraphIdx == -1 && !crPointOpen(1)) || (mCurrGraphIdx != -1 && !crPointOpen(mCurrGraphIdx + 1))) {
		if (mCurrGraphIdx == -1) {
			mNextWayPoint = (mRootNode->mNext) ? Game::mapMgr->mRouteMgr->getWayPoint(mRootNode->mNext->mWpIndex) : nullptr;
		} else {
			mNextWayPoint = getWayPoint(mCurrGraphIdx + 1);
		}

		mState        = PATHMOVE_MoveGuru;
		mPacePosition = mPellet->getPosition();
		mPaceAngle    = 0.0f;
	}

	Vector3f pelletPos = mPellet->getPosition(); // f23, f25, f24
	if (qdist2(point2.x, point2.z, pelletPos.x, pelletPos.z) < 6.0f) {
		if (mCurrGraphIdx >= mWayPointCount - 2) {
			mState       = PATHMOVE_MoveGoal;
			mNewVelocity = CRSplineTangent(1.0f, mCRControls);
			mNewVelocity.normalise();
			return true;
		}

		mCurrGraphIdx++;
		crMakeRefs();

		Vector3f splinePoints[1]; // 0x4c
		mNewVelocity = CRSplineTangent(0.0f, mCRControls);
		mNewVelocity.normalise();
		return true;
	}

	if (!contextCheck(mCurrGraphIdx)) {
		mNewVelocity = Vector3f(0.0f);

		if (mContextHandle) {
			Game::testPathfinder->release(mContextHandle);
			mContextHandle = 0;
		}
		mOnyon = nullptr;
		initPathfinding(true);
		return false;
	}

	Vector3f sep = point2 - point0; // f31, f30, f29
	f32 dist     = sep.normalise();
	f32 factor; // f27
	if (dist > 0.0f) {
		Vector3f diff = pelletPos - point0;
		factor        = sep.dot(diff) / dist;
	} else {
		factor = 1.0f;
	}

	if (factor < 0.0f) {
		factor = 0.0f;
	}

	if (factor > 1.0f) {
		factor = 1.0f;
	}

	Vector3f offset;
	offset.x          = sep.x * (factor * dist);
	offset.y          = 0.0f;
	offset.z          = sep.z * (factor * dist);
	pelletPos         = offset + point0 - pelletPos;
	Vector3f newPoint = pelletPos; // f23, f24, f25
	newPoint.y        = 0.0f;
	f32 newDist       = newPoint.normalise(); // f28

	f32 lerp = (1.0f - factor) * crGetRadius(mCurrGraphIdx) + (factor * crGetRadius(mCurrGraphIdx + 1));
	if (lerp == 0.0f) {
		lerp = 1.0f;
	}

	f32 comp = absF(newDist) / lerp; // f26
	if (comp < 0.3f) {
		comp = 0.0f;
	}
	if (comp > 2.0f && absF(newDist) > 130.0f) {
		return true;
	}

	if (comp > 1.0f) {
		comp = 1.0f;
	} else if (comp < 0.0f) {
		comp = 0.0f;
	}

	if (factor >= 1.0f) {
		if (mCurrGraphIdx >= mWayPointCount - 2) {
			mState       = PATHMOVE_MoveGoal;
			mNewVelocity = CRSplineTangent(factor, mCRControls);
			mNewVelocity.normalise();
			return true;
		}
		mCurrGraphIdx++;
		crMakeRefs();
		mNewVelocity = CRSplineTangent(0.0f, mCRControls);
		mNewVelocity.normalise();
		return true;
	}

	mNewVelocity = CRSplineTangent(factor, mCRControls);
	mNewVelocity.normalise();

	mNewVelocity = mNewVelocity * (1.0f - comp) + newPoint * comp;

	if (mNewVelocity.x * sep.x + mNewVelocity.z * sep.z <= 0.0f) {
		mNewVelocity = sep;
	}

	return true;
}

/**
 * @note Address: 0x8019BCB8
 * @note Size: 0x7C
 */
ActStickAttack::ActStickAttack(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019BD34
 * @note Size: 0x1F0
 */
void ActStickAttack::init(ActionArg* settings)
{
	bool isStickArg = settings && settings->is("StickAttackActionArg");
	P2ASSERTLINE(2331, isStickArg);
	StickAttackActionArg* arg = static_cast<StickAttackActionArg*>(settings);

	mCreature = arg->mCreature;
	mDamage   = arg->mAttackDamage;
	mObjType  = arg->mObjType;
	mAnimIdx  = Game::IPikiAnims::KUTTUKU;
	if (mParent->isStickTo()) {
		mParent->startMotion(Game::IPikiAnims::KUTTUKU, Game::IPikiAnims::KUTTUKU, this, nullptr);
		mIsInitialStick = true;

	} else {
		int animIdx = arg->mAnimIdx;
		if (animIdx == Game::IPikiAnims::NULLANIM) {
			mParent->startMotion(Game::IPikiAnims::KUTTUKU, Game::IPikiAnims::KUTTUKU, this, nullptr);
			mIsInitialStick = false;
		} else {
			mAnimIdx = animIdx;
			mParent->startMotion(animIdx, animIdx, this, nullptr);
			mIsInitialStick = false;
		}
	}

	mIsAttackReady           = false;
	mIsAnimFinished          = false;
	mHasAttacked             = false;
	mIsAttackSuccessful      = false;
	mParent->mTargetVelocity = Vector3f(0.0f);
	if (mParent->doped()) {
		mParent->startSound(mCreature, PSSE_PK_VC_DOPE_ATTACK, true);
	} else {
		mParent->startSound(mCreature, PSSE_PK_VC_ATTACK, true);
	}
}

/**
 * @note Address: 0x8019BF24
 * @note Size: 0x164
 */
int ActStickAttack::exec()
{
	// target is dead
	if (!mCreature->isAlive()) {
		mParent->endStick();
		return ACTEXEC_Success;
	}

	// animation is done
	if (mIsAnimFinished) {
		return ACTEXEC_Fail;
	}

	// piki no longer in correct animation
	if (!mParent->assertMotion(mAnimIdx)) {
		return ACTEXEC_Fail;
	}

	// piki has fallen off
	if (mIsInitialStick && !mParent->isStickTo()) {
		return ACTEXEC_Fail;
	}

	// do an attack
	if (mIsAttackReady && !mHasAttacked) {
		Game::InteractAttack attack(mParent, mDamage, mParent->mStuckCollPart);
		// wild pikmin do no damage
		if (mParent->isZikatu()) {
			attack.mDamage = 0.0f;
		}
		// don't attack again this animation
		mHasAttacked = true;

		// do attack
		if (mCreature->stimulate(attack)) {
			mIsAttackSuccessful = true;
		} else {
			mIsAttackSuccessful = false;
			mParent->startSound(mCreature, PSSE_PK_SE_KARABURI, true);
		}
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019C088
 * @note Size: 0x650
 */
void ActStickAttack::createEfx()
{
	if (!mIsAttackSuccessful) {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		efx::createSimpleInattack(pos);
		return;
	}
	switch (mObjType) {
	case STICKATK_Default:
	case STICKATK_Rock:
		if (mObjType != STICKATK_Rock) {
			if (mParent->doped()) {
				efx::TPkAttackDP effect;
				Vector3f offset = mParent->mLeafStemOffset;
				efx::Arg effectArg;
				effectArg.mPosition = offset;
				effect.create(&effectArg);

			} else {
				efx::PikiDamage effect;
				Vector3f offset = mParent->mLeafStemOffset;
				efx::Arg effectArg;
				effectArg.mPosition = offset;
				effect.create(&effectArg);
			}
		}
		mParent->startSound(mCreature, PSSE_PK_SE_ATTACKHIT, true);
		break;

	case STICKATK_Bridge: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleBridgeAttack(pos);
				mabiki->mBuffer++;
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_BRIDGE, PSGame::SeMgr::SETSE_PikiWorking);
			}
		} else {
			efx::createSimpleBridgeAttack(pos);
		}
		break;
	}

	case STICKATK_BlackGate: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleGate2Attack(pos);
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_HARDWALL, PSGame::SeMgr::SETSE_PikiWorking);
				mabiki->mBuffer++;
			}
		} else {
			efx::createSimpleGate2Attack(pos);
		}
		break;
	}

	case STICKATK_WhiteGate: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleGate1Attack(pos);
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_SOFTWALL, PSGame::SeMgr::SETSE_PikiWorking);
				mabiki->mBuffer++;
			}
		} else {
			efx::createSimpleGate1Attack(pos);
		}
		break;
	}

	case STICKATK_ElecGate: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		if (Game::BaseHIOParms::sMabikiEfx && mCreature->getMabiki()) {
			Game::Mabiki* mabiki = mCreature->getMabiki();
			f32 fxChance         = (100 - mabiki->mCounter) / 100.0f;
			if (randFloat() <= fxChance) {
				efx::createSimpleGate3Attack(pos);
				mParent->startSound(mCreature, PSSE_PK_SE_HIT_ELEC_GATE, PSGame::SeMgr::SETSE_PikiWorking);
				mabiki->mBuffer++;
			}
		} else {
			efx::createSimpleGate3Attack(pos);
		}
		break;
	}

	case STICKATK_BreakStone: {
		Vector3f pos = Vector3f(mParent->mLeafStemOffset);
		efx::createSimpleStoneAttack(pos);
		if (mCreature->mObjectTypeID == OBJTYPE_Barrel) {
			mParent->startSound(mCreature, PSSE_PK_SE_HIT_CONCRETEWALL, PSGame::SeMgr::SETSE_PikiWorking);

		} else if (mCreature->mObjectTypeID == OBJTYPE_Weed) { // aiWeed uses FlockAttack not StickAttack, don't think this can happen
			mParent->startSound(mCreature, PSSE_EV_WORK_STONE_BREAK, true);

		} else if (mCreature->mObjectTypeID == OBJTYPE_BigFountain) {
			mParent->startSound(mCreature, PSSE_PK_SE_HIT_FOUNTAIN, PSGame::SeMgr::SETSE_PikiWorking);
		}
		break;
	}

	case STICKATK_Treasure:
		efx::createSimpleDig(*mParent->mEffectsObj->mStemPosition);
		mParent->startSound(mCreature, PSSE_PK_VC_DIGGING, PSGame::SeMgr::SETSE_PikiCarry);
		break;

	default:
		break;
	}
}

/**
 * @note Address: 0x8019C6D8
 * @note Size: 0x80
 */
void ActStickAttack::onKeyEvent(SysShape::KeyEvent const& keyEvent)
{
	switch (keyEvent.mType) {
	case KEYEVENT_LOOP_END:
		break;

	case KEYEVENT_2: // attack ready
		mIsAttackReady = true;
		break;

	case KEYEVENT_3: // re-prime attack triggers after attack
		mIsAttackReady = false;
		mHasAttacked   = false;
		break;

	case KEYEVENT_END:
		mIsAnimFinished = true;
		break;

	case KEYEVENT_100: // do efx
		createEfx();
		break;

	default:
		break;
	}
}

/**
 * @note Address: 0x8019C758
 * @note Size: 0x24
 */
void ActStickAttack::cleanup()
{
	mParent->endStick();
}

/**
 * @note Address: 0x8019C77C
 * @note Size: 0x3C
 */
ActClimb::ActClimb(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019C7B8
 * @note Size: 0x100
 */
void ActClimb::init(ActionArg* settings)
{
	mParent->startMotion(Game::IPikiAnims::HNOBORU, Game::IPikiAnims::HNOBORU, nullptr, nullptr);
	ClimbActionArg* climbArg = static_cast<ClimbActionArg*>(settings);
	mCollPart                = climbArg->mCollPart;
	mSpeed                   = climbArg->mSpeed;
	mIsClimbTowards          = climbArg->mIsClimbTowards;
	P2ASSERTLINE(2609, mCollPart->mPartType == COLLTYPE_TUBE);
	Sys::Tube tube;
	mCollPart->getTube(tube);
	tube.getAxisVector(mVelocity);
	mVelocity.x = -mVelocity.x;
	mVelocity.y = -mVelocity.y;
	mVelocity.z = -mVelocity.z;
	mVelocity   = mVelocity * mSpeed;
}

/**
 * @note Address: 0x8019C8B8
 * @note Size: 0xE4
 */
int ActClimb::exec()
{
	mParent->mVelocity = mVelocity;
	if (!mIsClimbTowards) {
		mParent->mVelocity *= -1.0f;
	}

	mParent->move(sys->getDeltaTime());

	if (mIsClimbTowards) {
		if (mParent->mClimbingPosition.y < 0.0f) {
			return ACTEXEC_Success;
		}
	} else {
		if (mParent->mClimbingPosition.y >= 1.0f) {
			return ACTEXEC_Success;
		}
	}
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019C99C
 * @note Size: 0x4
 */
void ActClimb::cleanup()
{
}

/**
 * @note Address: 0x8019C9A0
 * @note Size: 0x3C
 */
ActGather::ActGather(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019C9DC
 * @note Size: 0xE0
 */
void ActGather::init(ActionArg* settings)
{
	bool strCheck = settings->is("GatherActionArg");
	P2ASSERTLINE(2669, strCheck);

	GatherActionArg* arg = static_cast<GatherActionArg*>(settings);
	mGoalPosition        = arg->mGoalPosition;
	mRadius              = arg->mRadius;
	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mTimer = 5.0f;
	mRadius *= 0.6f;
}

/**
 * @note Address: 0x8019CABC
 * @note Size: 0x154
 */
int ActGather::exec()
{
	Vector3f pikiPos = mParent->getPosition();
	Vector3f dir     = mGoalPosition - pikiPos;
	f32 dist         = dir.normalise();

	mTimer -= sys->mDeltaTime;

	if (dist < mRadius || mTimer <= 0.0f) {
		mParent->mTargetVelocity = Vector3f(0.0f);
		return ACTEXEC_Success;
	}

	mParent->setSpeed(0.6f, dir);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019CC10
 * @note Size: 0x4
 */
void ActGather::cleanup()
{
}

/**
 * @note Address: 0x8019CC14
 * @note Size: 0x3C
 */
ActFollowVectorField::ActFollowVectorField(Game::Piki* p)
    : Action(p)
{
}

/**
 * @note Address: 0x8019CC50
 * @note Size: 0x60
 */
void ActFollowVectorField::init(ActionArg* arg)
{
	mParent->startMotion(Game::IPikiAnims::WALK, Game::IPikiAnims::WALK, nullptr, nullptr);
	mItem = static_cast<FollowVectorFieldActionArg*>(arg)->mItem;
}

/**
 * @note Address: 0x8019CCB0
 * @note Size: 0x80
 */
int ActFollowVectorField::exec()
{
	Sys::Sphere sphere;
	Vector3f dir;

	mParent->getBoundingSphere(sphere);
	if (!mItem->getVectorField(sphere, dir)) {
		return ACTEXEC_Fail;
	}
	mParent->setSpeed(1.0f, dir);
	return ACTEXEC_Continue;
}

/**
 * @note Address: 0x8019CD30
 * @note Size: 0x4
 */
void ActFollowVectorField::cleanup()
{
}

} // namespace PikiAI
