#include "types.h"
#include "Radar.h"
#include "Game/pelletMgr.h"

Radar::Mgr* Radar::mgr;

/**
 * @note Address: 0x8021E28C
 * @note Size: 0x68
 */
Vector2f Radar::Point::getPosition()
{
	if (mObject) {
		Vector3f pos = mObject->getPosition();
		return Vector2f(pos.z, pos.x);
	} else {
		return Vector2f(0.0f, 0.0f);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
// void Radar::Point::clear() {  }

/**
 * @note Address: 0x8021E2F4
 * @note Size: 0xF4
 */
Radar::Mgr::Mgr()
{
	mActiveRadarNodes.clear();
	mInactiveRadarNodes.clear();

	mNumObjects = RADAR_MAX_OBJECTS;
	mPointList  = new Point[mNumObjects];
	clear();
}

/**
 * @note Address: 0x8021E498
 * @note Size: 0xB4
 */
void Radar::Mgr::clear()
{
	mActiveRadarNodes.clear();
	mInactiveRadarNodes.clear();

	for (int i = 0; i < mNumObjects; i++) {
		Point* pointList = &mPointList[i];
		pointList->clearRelations();
		pointList->mObject  = nullptr;
		pointList->mObjType = MAP_NULL_ICON;
		pointList->mCaveID  = nullptr;

		mInactiveRadarNodes.add(&mPointList[i]);
	}

	mTreasureCount       = 0;
	mFuefukiCount        = 0;
	mFuefukiWhistleTimer = 0;
}

/**
 * @note Address: 0x8021E54C
 * @note Size: 0x10
 */
void Radar::Mgr::bornFuefuki() { mFuefukiCount++; }

/**
 * @note Address: 0x8021E55C
 * @note Size: 0x18
 */
void Radar::Mgr::dieFuefuki()
{
	if ((int)mFuefukiCount > 0) {
		mFuefukiCount--;
	}
}

/**
 * @note Address: 0x8021E574
 * @note Size: 0x10
 */
void Radar::Mgr::fuefuki() { mFuefukiWhistleTimer++; }

/**
 * @note Address: 0x8021E584
 * @note Size: 0x70
 */
void Radar::Mgr::entry(Game::TPositionObject* obj, Radar::cRadarType type, u32 flag)
{
	if (mgr) {
		mgr->attach(obj, type, flag);
		if (type == MAP_TREASURE || type == MAP_SWALLOWED_TREASURE || type == MAP_UPGRADE) {
			mgr->mTreasureCount++;
		}
	}
}

/**
 * @note Address: 0x8021E5F4
 * @note Size: 0x3C
 */
bool Radar::Mgr::exit(Game::TPositionObject* obj)
{
	if (mgr) {
		return mgr->detach(obj);
	}
	return false;
}

/**
 * @note Address: 0x8021E630
 * @note Size: 0x1C
 */
int Radar::Mgr::getNumOtakaraItems()
{
	if (mgr) {
		return mgr->mTreasureCount;
	}
	return 0;
}

/**
 * @note Address: 0x8021E64C
 * @note Size: 0x64
 */
void Radar::Mgr::attach(Game::TPositionObject* obj, Radar::cRadarType type, u32 flag)
{
	detach(obj);
	// DUMB. this is needed to match as an inline in ogDummpyInit.
	// (just cast to the damn Point and use it smFh.)
	CNode* cPoint = mInactiveRadarNodes.mChild;
	Point* point  = static_cast<Point*>(mInactiveRadarNodes.mChild);
	if (cPoint) {
		cPoint->del();
		point->setData(obj, type, flag);
		mActiveRadarNodes.add(cPoint);
	}
}

/**
 * @note Address: 0x8021E6B0
 * @note Size: 0xC4
 */
bool Radar::Mgr::detach(Game::TPositionObject* obj)
{
	FOREACH_NODE(Point, mActiveRadarNodes.mChild, point)
	{
		if (point->mObject != obj) {
			continue;
		}
		cRadarType type = point->mObjType;
		point->del();

		point->clearRelations();
		point->setData(nullptr, MAP_NULL_ICON, 0);

		if (type == MAP_TREASURE || type == MAP_SWALLOWED_TREASURE || type == MAP_UPGRADE) {
			mgr->mTreasureCount--;
		}

		mInactiveRadarNodes.add(point);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8021E774
 * @note Size: 0x1E0
 */
Radar::Mgr::RadarSearchResult Radar::Mgr::calcNearestTreasure(Vector3f& naviPos, f32 searchDist, Vector3f& treasurePos,
                                                              f32& treasureDistance)
{
	// If any antennae beetles are alive
	if (mFuefukiCount > 0) {
		if (mFuefukiWhistleTimer > 0) {
			mFuefukiWhistleTimer--;
			return Radar::Mgr::WHISTLE_ACTIVE; // Whistle is active, but timer not expired
		}

		return Radar::Mgr::WHISTLE_ACTIVE_TIMER_EXPIRED; // Whistle is active, timer expired
	}

	Point* closestPoint = nullptr;
	int treasureCount   = 0;
	f32 closestDistance = searchDist;
	FOREACH_NODE(Point, mActiveRadarNodes.mChild, cPoint)
	{
		// Skip if not a treasure
		if (cPoint->mObjType != MAP_TREASURE && cPoint->mObjType != MAP_SWALLOWED_TREASURE && cPoint->mObjType != MAP_UPGRADE) {
			continue;
		}

		treasureCount++;
		Game::Creature* creature = static_cast<Game::Pellet*>(cPoint->mObject);
		if (!creature->isTeki()) {
			creature->isPellet();
		}

		Vector3f objPos = creature->getPosition();

		Sys::Sphere boundingSphere;
		Vector2f positionOffset = Vector2f(objPos.x, objPos.z);
		positionOffset.x -= naviPos.x;
		positionOffset.y -= naviPos.z;
		creature->getBoundingSphere(boundingSphere);

		// Calculate the distance between the creature and the treasure
		f32 cDist = _lenVec2D(positionOffset) - boundingSphere.mRadius;
		if (cDist <= closestDistance) {
			closestDistance  = cDist;
			closestPoint     = cPoint;
			treasurePos      = creature->getPosition();
			treasureDistance = cDist;
		}
	}

	if (closestPoint != nullptr) {
		return Radar::Mgr::CLOSEST_TREASURE_FOUND; // Found treasure
	}

	return treasureCount > 0 ? Radar::Mgr::TREASURE_FOUND : Radar::Mgr::NO_TREASURE_FOUND;
}

/**
 * @note Address: 0x8021E954
 * @note Size: 0x568
 */
void Radar::Mgr::ogDummpyInit()
{
	// dummy Ship
	OgDummy* obj   = new OgDummy;
	obj->mPosition = Vector3f(-577.0f, -37.0f, 1984.0f);
	attach(obj, MAP_SHIP, 0);

	// dummy Blue Onion
	obj            = new OgDummy;
	obj->mPosition = Vector3f(-377.0f, -37.0f, 2155.0f);
	attach(obj, MAP_BLUE_ONION, 0);

	// dummy blue onion again
	obj            = new OgDummy;
	obj->mPosition = Vector3f(-306.0f, -37.0f, 1823.0f);
	attach(obj, MAP_BLUE_ONION, 0);

	// dummy blue onion again (3 blue onions)
	obj            = new OgDummy;
	obj->mPosition = Vector3f(64.0f, -37.0f, 1976.0f);
	attach(obj, MAP_BLUE_ONION, 0);

	// and a red pikmin for good measure (this must be a debug function, even though the game calls it)
	obj            = new OgDummy;
	obj->mPosition = Vector3f(-337.0f, -37.0f, 2101.0f);
	attach(obj, MAP_RED_PIKMIN, 0);
}
