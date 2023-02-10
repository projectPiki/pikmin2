#include "types.h"
#include "Radar.h"
#include "Game/pelletMgr.h"

Radar::Mgr* Radar::mgr;

/*
 * --INFO--
 * Address:	8021E28C
 * Size:	000068
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

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void Radar::Point::clear()
{
	mChild  = nullptr;
	mParent = nullptr;
	mPrev   = nullptr;
	mNext   = nullptr;
}

/*
 * --INFO--
 * Address:	8021E2F4
 * Size:	0000F4
 */
Radar::Mgr::Mgr()
{
	mPointNode1.clear();
	mPointNode2.clear();

	mNumObjects = RADAR_MAX_OBJECTS;
	mPointList  = new Point[mNumObjects];
	clear();
}

/*
 * --INFO--
 * Address:	8021E498
 * Size:	0000B4
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

/*
 * --INFO--
 * Address:	8021E54C
 * Size:	000010
 */
void Radar::Mgr::bornFuefuki() { mFuefukiCount++; }

/*
 * --INFO--
 * Address:	8021E55C
 * Size:	000018
 */
void Radar::Mgr::dieFuefuki()
{
	if ((int)mFuefukiCount > 0) {
		mFuefukiCount--;
	}
}

/*
 * --INFO--
 * Address:	8021E574
 * Size:	000010
 */
void Radar::Mgr::fuefuki() { mFuefukiTimer++; }

/*
 * --INFO--
 * Address:	8021E584
 * Size:	000070
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

/*
 * --INFO--
 * Address:	8021E5F4
 * Size:	00003C
 */
bool Radar::Mgr::exit(Game::TPositionObject* obj)
{
	if (mgr) {
		return mgr->detach(obj);
	}
	return false;
}

/*
 * --INFO--
 * Address:	8021E630
 * Size:	00001C
 */
int Radar::Mgr::getNumOtakaraItems()
{
	if (mgr) {
		return mgr->mOtakaraNum;
	}
	return 0;
}

/*
 * --INFO--
 * Address:	8021E64C
 * Size:	000064
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

/*
 * --INFO--
 * Address:	8021E6B0
 * Size:	0000C4
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

/*
 * --INFO--
 * Address:	8021E774
 * Size:	0001E0
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

/*
 * --INFO--
 * Address:	8021E954
 * Size:	000568
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
