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
void Radar::Point::clear() { clearRelations(); }

/**
 * @note Address: 0x8021E2F4
 * @note Size: 0xF4
 */
Radar::Mgr::Mgr()
{
	mPointNode1.clear();
	mPointNode2.clear();

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
	mPointNode1.clear();
	mPointNode2.clear();

	for (int i = 0; i < mNumObjects; i++) {
		Point* pointList = &mPointList[i];
		pointList->clearRelations();
		pointList->mObject  = nullptr;
		pointList->mObjType = MAP_NULL_ICON;
		pointList->mCaveID  = nullptr;

		mPointNode2.add(&mPointList[i]);
	}

	mOtakaraNum   = 0;
	mFuefukiCount = 0;
	mFuefukiTimer = 0;
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
void Radar::Mgr::fuefuki() { mFuefukiTimer++; }

/**
 * @note Address: 0x8021E584
 * @note Size: 0x70
 */
void Radar::Mgr::entry(Game::TPositionObject* obj, Radar::cRadarType type, u32 flag)
{
	if (mgr) {
		mgr->attach(obj, type, flag);
		if (type == MAP_TREASURE || type == MAP_SWALLOWED_TREASURE || type == MAP_UPGRADE) {
			mgr->mOtakaraNum++;
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
		return mgr->mOtakaraNum;
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
	CNode* cPoint = mPointNode2.mChild;
	Point* point  = static_cast<Point*>(mPointNode2.mChild);
	if (cPoint) {
		cPoint->del();
		point->mObject  = obj;
		point->mObjType = type;
		point->mCaveID  = flag;
		mPointNode1.add(cPoint);
	}
}

/**
 * @note Address: 0x8021E6B0
 * @note Size: 0xC4
 */
bool Radar::Mgr::detach(Game::TPositionObject* obj)
{
	FOREACH_NODE(Point, mPointNode1.mChild, point)
	{
		if (point->mObject != obj) {
			continue;
		}
		cRadarType type = point->mObjType;
		point->del();

		point->clearRelations();
		point->mObject  = nullptr;
		point->mObjType = MAP_NULL_ICON;
		point->mCaveID  = nullptr;

		if (type == MAP_TREASURE || type == MAP_SWALLOWED_TREASURE || type == MAP_UPGRADE) {
			mgr->mOtakaraNum--;
		}

		mPointNode2.add(point);
		return true;
	}
	return false;
}

/**
 * @note Address: 0x8021E774
 * @note Size: 0x1E0
 */
int Radar::Mgr::calcNearestTreasure(Vector3f& naviPos, f32 searchDist, Vector3f& treasurePos, f32& dist2)
{
	if (mFuefukiCount > 0) {
		if (mFuefukiTimer > 0) {
			mFuefukiTimer--;
			return 4;
		} else {
			return 3;
		}
	}

	Point* retPoint = nullptr;
	int ret         = 0;
	f32 dist        = searchDist;
	FOREACH_NODE(Point, mPointNode1.mChild, cPoint)
	{
		if (cPoint->mObjType == MAP_TREASURE || cPoint->mObjType == MAP_SWALLOWED_TREASURE || cPoint->mObjType == MAP_UPGRADE) {
			ret++;
			Game::Creature* cObj = static_cast<Game::Pellet*>(cPoint->mObject);
			if (!cObj->isTeki()) {
				cObj->isPellet();
			}
			Vector3f objPos = cObj->getPosition();
			Sys::Sphere test;
			Vector2f diff = Vector2f(objPos.x, objPos.z);
			diff.x -= naviPos.x;
			diff.y -= naviPos.z;
			cObj->getBoundingSphere(test);

			f32 cDist = _lenVec2D(diff) - test.mRadius;
			if (cDist <= dist) {
				dist        = cDist;
				retPoint    = cPoint;
				treasurePos = cObj->getPosition();
				dist2       = cDist;
			}
		}
	}

	if (retPoint != nullptr) {
		return 2;
	} else {
		return ret > 0;
	}
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
