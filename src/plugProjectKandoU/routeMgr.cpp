#include "CNode.h"
#include "Condition.h"
#include "Game/WaterBox.h"
#include "Game/MapMgr.h"
#include "Game/routeMgr.h"
#include "Game/cellPyramid.h"
#include "Game/PlatInstance.h"
#include "Iterator.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "PikiAI.h"
#include "P2Macros.h"
#include "Sys/Sphere.h"
#include "Sys/RayIntersectInfo.h"
#include "types.h"
#include "Vector3.h"

namespace Game {

static const char unusedName[] = "routeMgr";

/**
 * @note Address: 0x80172520
 * @note Size: 0x14
 */
WayPointIterator::WayPointIterator(WayPoint* wp, bool useToLinks)
    : mWayPoint(wp)
    , mUseToLinks(useToLinks)
{
	mIndex = 0;
}

/**
 * @note Address: 0x80172534
 * @note Size: 0x28
 */
void WayPointIterator::first()
{
	mIndex = 0;
	forward();
}

/**
 * @note Address: 0x8017255C
 * @note Size: 0x2C
 */
void WayPointIterator::next()
{
	mIndex++;
	forward();
}

/**
 * @note Address: 0x80172588
 * @note Size: 0x3C
 */
bool WayPointIterator::isDone()
{
	if (mUseToLinks) {
		if (mIndex >= 16) {
			return true;
		}
	} else if (mIndex >= 8) {
		return true;
	}

	return false;
}

/**
 * __ml
 * @note Address: 0x801725C4
 * @note Size: 0x34
 */
s16 WayPointIterator::operator*()
{
	if (mIndex < 8) {
		return mWayPoint->mFromLinks[mIndex];
	}

	return mWayPoint->mToLinks[mIndex - 8];
}

/**
 * @note Address: 0x801725F8
 * @note Size: 0xA8
 */
void WayPointIterator::forward()
{
	s16* links = mWayPoint->mFromLinks;
	int idx    = mIndex;

	// we're in the "to" part of the graph
	if (mIndex >= 8) {
		links = mWayPoint->mToLinks;
		idx   = mIndex - 8;
	}

	// skip through "from" list assuming current isn't valid
	// check each "to" list member until we hit one with a valid idx
	while (links[idx] == -1) {
		mIndex++;

		// we've hit the end of both potential lists, stop
		if (mIndex >= 16) {
			return;
		}

		// if we exhausted the "from" list, jump into the "to" list
		if (mIndex >= mWayPoint->mNumFromLinks && mIndex < 8) {
			mIndex = 8;
			links  = mWayPoint->mToLinks;

			// if we've exhausted the "to" list, set index to max and stop
		} else if (mIndex >= mWayPoint->mNumToLinks + 8) {
			mIndex = 16;
			return;
		}

		// update current link to other list if we've swapped
		if (mIndex >= 8) {
			idx = mIndex - 8;
		}
	}
}

/**
 * @note Address: 0x801726A0
 * @note Size: 0x6C
 */
WayPoint::WayPoint()
    : JKRDisposer()
    , mRoomList()
{
	reset();
}

/**
 * @note Address: 0x8017276C
 * @note Size: 0x84
 */
WayPoint::~WayPoint() { }

/**
 * @note Address: N/A
 * @note Size: 0x34
 */
bool WayPoint::includeRoom(s16 roomIdx)
{
	FOREACH_NODE(RoomList, mRoomList.mChild, room)
	{
		if (room->mRoomIdx == roomIdx) {
			return true;
		}
	}

	return false;
}

/**
 * @note Address: 0x801727F0
 * @note Size: 0x84
 */
void WayPoint::reset()
{
	for (int i = 0; i < 8; ++i) {
		mFromLinks[i] = -1;
		mToLinks[i]   = -1;
	}
	mPosition     = Vector3f::zero;
	mRadius       = 1.0f;
	mIndex        = -1;
	mNumFromLinks = 0;
	mNumToLinks   = 0;
	mDoFloorSnap  = 0;
	mFlags        = 0;
}

/**
 * @note Address: N/A
 * @note Size: 0x78
 */
void WayPoint::getLink(int)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80172874
 * @note Size: 0x28
 */
void WayPoint::setOpen(bool open)
{
	if (open) {
		resetFlag(WPF_Closed);
	} else {
		setFlag(WPF_Closed);
	}
}

/**
 * @note Address: 0x8017289C
 * @note Size: 0x28
 */
void WayPoint::setWater(bool water)
{
	if (water) {
		setFlag(WPF_Water);
	} else {
		resetFlag(WPF_Water);
	}
}

/**
 * @note Address: 0x801728C4
 * @note Size: 0x28
 */
void WayPoint::setBridge(bool bridge)
{
	if (bridge) {
		setFlag(WPF_Bridge);
	} else {
		resetFlag(WPF_Bridge);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x28
 */
void WayPoint::setVisit(bool visit)
{
	if (visit) {
		resetFlag(WPF_Unvisited);	
	}
	else {
		setFlag(WPF_Unvisited);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x48
 * @note Assumed code but size matches. Function is unused
 */
void WayPoint::setVsColor(int color)
{
	resetFlag(WPF_VersusBlue);
	resetFlag(WPF_VersusRed);

	if (color == Blue) {
		setFlag(WPF_VersusBlue);
	}
	else if (color == Red) {
		setFlag(WPF_VersusRed);
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x40
 */
bool WayPoint::hasLinkTo(s16 idx)
{
	for (s16 i = 0; i < mNumToLinks; i++) {
		if (mToLinks[i] == idx) {
			return true;
		}
	}
	return false;
}

/**
 * @note Address: N/A
 * @note Size: 0xB4
 */
void WayPoint::addLink(s16 idx)
{
	// currently this is 0x4 larger than the given size
	if (!hasLinkTo(idx)) {
		P2ASSERTLINE(300, mNumToLinks < ARRAY_SIZE(mToLinks));

		mToLinks[mNumToLinks++] = idx;
	}
}

/**
 * @note Address: N/A
 * @note Size: 0xA4
 */
void WayPoint::killLink(s16)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x12C
 */
void WayPoint::write(Stream& output)
{
	char buf[256];
	sprintf(buf, "waypoint %d", mIndex);

	output.textBeginGroup(buf);

	output.textWriteTab(output.mTabCount);
	output.writeShort(mIndex);
	output.textWriteText("\t# index\r\n");

	output.textWriteTab(output.mTabCount);
	output.writeShort(getNumFromLinks());
	output.textWriteText("\t# numLinks\r\n");

	for (int i = 0; i < getNumFromLinks(); i++) {
		output.textWriteTab(output.mTabCount);
		output.writeShort(getFromLink(i));
		output.textWriteText("\t# link %d\r\n", i);
	}

	output.textWriteTab(output.mTabCount);
	mPosition.write(output);
	output.writeFloat(mRadius);
	output.textWriteText("\r\n");

	output.textEndGroup();
}

/**
 * @note Address: N/A
 * @note Size: 0xA0
 */
void WayPoint::read(Stream& input)
{
	mIndex        = input.readShort();
	mNumFromLinks = input.readShort();
	for (int i = 0; i < mNumFromLinks; i++) {
		mFromLinks[i] = input.readShort();
	}
	mPosition.read(input);
	mRadius = input.readFloat();
}

/**
 * @note Address: 0x801728EC
 * @note Size: 0x4
 */
void WayPoint::directDraw(Graphics&) { }

/**
 * @note Address: 0x801728F0
 * @note Size: 0x4
 */
void WayPoint::directDraw_Simple(Graphics&) { }

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void WayPoint::createOffPlane(Plane&, WayPoint*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
RouteMgr::RouteMgr()
    : Container<WayPoint>()
{
	mCount = 0;
	mName  = "RouteMgr";
}

/**
 * @note Address: 0x80172964
 * @note Size: 0x80
 */
RouteMgr::~RouteMgr() { }

/**
 * @note Address: 0x801729E4
 * @note Size: 0x148
 */
void RouteMgr::makeInvertLinks()
{
	for (s16 i = 0; i < mCount; i++) {
		WayPoint* wpA = getWayPoint(i);

		for (int j = 0; j < wpA->mNumFromLinks; j++) {
			s16 linkIdx = wpA->mFromLinks[j];
			if (linkIdx != -1) {
				WayPoint* link = getWayPoint(linkIdx);

				if (linkable(wpA, link)) {
					JUT_ASSERTLINE(525, link->mNumToLinks < 8, "too many to-links (wpB=%d) (wpA=%d)\n", link->mIndex, wpA->mIndex);
					s16 idx      = wpA->mIndex;
					bool hasLink = false;

					for (int i = 0; i < link->mNumFromLinks; i++) {
						if (link->mFromLinks[i] == idx) {
							hasLink = true;
						}
					}

					if (!hasLink) {
						link->mToLinks[link->mNumToLinks] = idx;
						link->mNumToLinks++;
					}
				}
			}
		}
	}
}

/**
 * @note Address: 0x80172B2C
 * @note Size: 0x1E4
 */
bool RouteMgr::linkable(WayPoint* wpA, WayPoint* wpB)
{
	if (!mapMgr) {
		return true;
	}

	Vector3f posA       = wpA->mPosition;
	Vector3f posB       = wpB->mPosition;
	f32 prevFloorHeight = posA.y;

	Vector3f sep = posB - posA;
	sep.y        = 0.0f;

	for (f32 i = 0.0f; i <= 1.0f; i += 0.1f) {
		CurrTriInfo info;
		info.mPosition        = posA + sep * i;
		info.mUpdateOnNewMaxY = false;

		mapMgr->getCurrTri(info);
		if (FABS(prevFloorHeight - info.mMinY) > 25.0f) {
			return false;
		}
		prevFloorHeight = info.mMinY;
	}

	return true;
}

/**
 * @note Address: 0x80172D10
 * @note Size: 0x268
 */
void RouteMgr::refreshWater()
{
	Iterator<WayPoint> iter(this);
	CI_LOOP(iter)
	{
		WayPoint* wp = (*iter);
		wp->resetFlag(WPF_Water);
		if (mapMgr) {
			Sys::Sphere searchSphere;
			searchSphere.mPosition = Vector3f(wp->mPosition);
			if (!wp->isFlag(WPF_Bridge)) {
				searchSphere.mPosition.y = mapMgr->getMinY(searchSphere.mPosition);
			}
			searchSphere.mRadius = 4.0f;
			WaterBox* waterBox   = mapMgr->findWater(searchSphere);
			if ((waterBox) && (waterBox->isFlag(WBF_Unknown1))) {
				wp->setFlag(WPF_Water);
			}
		}
	}
}

/**
 * @note Address: 0x80172FC4
 * @note Size: 0x3A8
 */
WayPoint* RouteMgr::getNearestWayPoint(WPSearchArg& searchArg)
{
	f32 minDist         = 1280000.0f;
	WayPoint* nearestWP = nullptr;
	Iterator<WayPoint> iter(this);
	CI_LOOP(iter)
	{
		WayPoint* wp = *iter;
		if (!searchArg.mCondition || searchArg.mCondition->satisfy(wp)) {
			Vector3f sep = wp->mPosition - searchArg.mPosition;
			f32 dist     = sep.length();
			if (dist < minDist) {
				if (searchArg.mDoRayCheck && dist < 300.0f) {
					Sys::RayIntersectInfo mapInfo;
					mapInfo.mCheckHorizontal         = 1;
					mapInfo.mDistance                = 1280000.0f;
					mapInfo.mIntersectEdge.mStartPos = searchArg.mPosition;
					mapInfo.mIntersectEdge.mEndPos   = wp->mPosition;
					mapInfo.mRadius                  = searchArg.mRadius;
					if (mapMgr && mapMgr->findRayIntersection(mapInfo)) {
						continue;
					}

					Sys::RayIntersectInfo platInfo;
					platInfo.mCheckHorizontal         = 1;
					platInfo.mDistance                = 1280000.0f;
					platInfo.mIntersectEdge.mStartPos = searchArg.mPosition;
					platInfo.mIntersectEdge.mEndPos   = wp->mPosition;
					platInfo.mRadius                  = searchArg.mRadius;
					if (platMgr && platMgr->findRayIntersection(platInfo)) {
						continue;
					}
				}

				minDist   = dist;
				nearestWP = wp;
			}
		}
	}

	return nearestWP;
}

/**
 * @note Address: 0x8017336C
 * @note Size: 0x81C
 */
bool RouteMgr::getNearestEdge(WPEdgeSearchArg& searchArg)
{
	f32 minDist = FLOAT_DIST_MAX;
	bool result = false;
	Iterator<WayPoint> iter(this);
	CI_LOOP(iter)
	{
		WayPoint* wpA = *iter;

		// If we're in water and the waypoint is a bridge, skip it
		if ((searchArg.mInWater & 1) && wpA->isFlag(WPF_Bridge)) {
			continue;
		}

		// If the waypoint is already linked with our path, skip it
		int wpAIndex = wpA->mIndex;
		if (searchArg.isLinkedTo(wpAIndex)) {
			continue;
		}

		// For each link in the waypoint
		for (int i = 0; i < 8; i++) {
			// If the link is invalid, skip it
			s16 linkIdx = wpA->mFromLinks[i];
			if (linkIdx == -1) {
				continue;
			}

			WayPoint* wpB = getWayPoint(linkIdx);

			// If the link is already linked with our path, skip it
			s16 wpBIndex = wpB->mIndex;
			if (!searchArg.isLinkedTo(wpBIndex)) {
				continue;
			}

			// If we're searching for a specific room and the link doesn't have it, skip it
			s16 roomIdx = searchArg.mRoomID;
			if (roomIdx == -1 && !wpA->includeRoom(roomIdx) && !wpB->includeRoom(roomIdx)) {
				continue;
			}

			// If we're in water and the link is a bridge, skip it
			if (searchArg.mInWater & 1 && wpB->isFlag(WPF_Bridge)) {
				continue;
			}

			// If waypoint B is linked to waypoint A and waypoint A is after waypoint B, skip it
			if (wpB->mFromLinks[i] == wpA->mIndex && wpAIndex <= wpBIndex) {
				bool isWaypointAOpen = wpA->isFlag(WPF_Closed);
				if (!isWaypointAOpen || !wpB->isFlag(WPF_Closed)) {
					WayPoint* a;
					WayPoint* b;
					if (isWaypointAOpen == false) {
						a = wpA;
						b = wpB;
					} else {
						a = wpB;
						b = wpA;
					}

					Vector3f sep = a->mPosition - b->mPosition;
					sep.normalise();

					// some weird math here.

					if (sep.y < 0.0f) { // not the correct comparison, just a placeholder
						continue;
					}
				}

				Vector3f wpPos            = wpA->mPosition;
				Vector3f relativePosition = wpB->mPosition - wpPos;

				f32 distanceMagnitude = relativePosition.normalise();

				Vector3f searchSep = searchArg.mStartPosition - wpPos;
				f32 dotProd        = relativePosition.dot(searchSep) / distanceMagnitude;

				if (distanceMagnitude < 0.1f) {
					JUT_PANICLINE(768, "wpA(%d) and wpB(%d) cause singularity !\n", wpA->mIndex, wpB->mIndex);
				}

				Vector3f searchPos = searchArg.mStartPosition;
				f32 revDistA       = wpA->mPosition.distance(searchPos); // f0
				f32 revDistB       = wpB->mPosition.distance(searchPos); // f13

				f32 newDist;
				if (dotProd < 0.0f || dotProd > 1.0f) {
					if (revDistB < revDistA) {
						newDist = revDistB - wpB->mRadius;
					} else {
						newDist = revDistA - wpA->mRadius;
					}
				} else {
					f32 factor = dotProd * distanceMagnitude;
					newDist    = searchPos.length(); // this isn't the correct vector, need to do more math here
				}

				if (newDist < minDist) {
					if (revDistA < revDistB) {
						searchArg.mWp1 = wpA;
						searchArg.mWp2 = wpB;
					} else {
						searchArg.mWp1 = wpB;
						searchArg.mWp2 = wpA;
					}
					minDist = newDist;
					result  = true;
				}
			}
		}
	}

	return result;
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stfd      f28, 0x70(r1)
	  psq_st    f28,0x78(r1),0,0
	  stfd      f27, 0x60(r1)
	  psq_st    f27,0x68(r1),0,0
	  stfd      f26, 0x50(r1)
	  psq_st    f26,0x58(r1),0,0
	  stmw      r24, 0x30(r1)
	  li        r5, 0
	  mr        r30, r4
	  stw       r5, 0x1C(r4)
	  lis       r4, 0x804B
	  mr        r29, r3
	  cmplwi    r5, 0
	  stw       r5, 0x18(r30)
	  addi      r0, r4, 0x2380
	  lfs       f31, -0x5954(r2)
	  li        r31, 0
	  stw       r0, 0x20(r1)
	  stw       r5, 0x2C(r1)
	  stw       r5, 0x24(r1)
	  stw       r29, 0x28(r1)
	  bne-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x7B4

	.loc_0x94:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x100

	.loc_0xAC:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7B4
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x100:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0xAC
	  b         .loc_0x7B4

	.loc_0x120:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lbz       r0, 0xC(r30)
	  mr        r28, r3
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x150
	  lbz       r0, 0x34(r28)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x6F8

	.loc_0x150:
	  lwz       r4, 0x10(r30)
	  lha       r3, 0x36(r28)
	  cmplwi    r4, 0
	  beq-      .loc_0x194
	  lha       r0, 0x8(r4)
	  mtctr     r0
	  cmpwi     r0, 0
	  ble-      .loc_0x18C

	.loc_0x170:
	  lha       r0, 0x0(r4)
	  cmpw      r3, r0
	  bne-      .loc_0x184
	  li        r0, 0x1
	  b         .loc_0x198

	.loc_0x184:
	  addi      r4, r4, 0x2
	  bdnz+     .loc_0x170

	.loc_0x18C:
	  li        r0, 0
	  b         .loc_0x198

	.loc_0x194:
	  li        r0, 0

	.loc_0x198:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x6F8
	  mr        r27, r28
	  li        r25, 0
	  li        r26, 0

	.loc_0x1AC:
	  lha       r4, 0x3A(r27)
	  cmpwi     r4, -0x1
	  beq-      .loc_0x6E4
	  lwz       r12, 0x0(r29)
	  mr        r3, r29
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x10(r30)
	  mr        r24, r3
	  lha       r0, 0x36(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x214
	  lha       r3, 0x8(r4)
	  mtctr     r3
	  cmpwi     r3, 0
	  ble-      .loc_0x20C

	.loc_0x1F0:
	  lha       r3, 0x0(r4)
	  cmpw      r0, r3
	  bne-      .loc_0x204
	  li        r3, 0x1
	  b         .loc_0x218

	.loc_0x204:
	  addi      r4, r4, 0x2
	  bdnz+     .loc_0x1F0

	.loc_0x20C:
	  li        r3, 0
	  b         .loc_0x218

	.loc_0x214:
	  li        r3, 0

	.loc_0x218:
	  rlwinm.   r3,r3,0,24,31
	  bne-      .loc_0x6E4
	  lha       r5, 0x14(r30)
	  cmpwi     r5, -0x1
	  beq-      .loc_0x294
	  lwz       r4, 0x28(r28)
	  b         .loc_0x24C

	.loc_0x234:
	  lha       r3, 0x18(r4)
	  cmpw      r3, r5
	  bne-      .loc_0x248
	  li        r3, 0x1
	  b         .loc_0x258

	.loc_0x248:
	  lwz       r4, 0x4(r4)

	.loc_0x24C:
	  cmplwi    r4, 0
	  bne+      .loc_0x234
	  li        r3, 0

	.loc_0x258:
	  rlwinm.   r3,r3,0,24,31
	  bne-      .loc_0x294
	  lwz       r4, 0x28(r24)
	  b         .loc_0x280

	.loc_0x268:
	  lha       r3, 0x18(r4)
	  cmpw      r3, r5
	  bne-      .loc_0x27C
	  li        r3, 0x1
	  b         .loc_0x28C

	.loc_0x27C:
	  lwz       r4, 0x4(r4)

	.loc_0x280:
	  cmplwi    r4, 0
	  bne+      .loc_0x268
	  li        r3, 0

	.loc_0x28C:
	  rlwinm.   r3,r3,0,24,31
	  beq-      .loc_0x6E4

	.loc_0x294:
	  lbz       r3, 0xC(r30)
	  rlwinm.   r3,r3,0,31,31
	  beq-      .loc_0x2AC
	  lbz       r3, 0x34(r24)
	  rlwinm.   r3,r3,0,29,29
	  bne-      .loc_0x6E4

	.loc_0x2AC:
	  addi      r4, r26, 0x3A
	  lha       r3, 0x36(r28)
	  lhax      r4, r24, r4
	  li        r5, 0
	  cmpw      r4, r3
	  bne-      .loc_0x2CC
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2CC:
	  bne-      .loc_0x2D8
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2D8:
	  bne-      .loc_0x2E4
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2E4:
	  bne-      .loc_0x2F0
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2F0:
	  bne-      .loc_0x2FC
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x2FC:
	  bne-      .loc_0x308
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x308:
	  bne-      .loc_0x314
	  li        r5, 0x1
	  b         .loc_0x31C

	.loc_0x314:
	  bne-      .loc_0x31C
	  li        r5, 0x1

	.loc_0x31C:
	  rlwinm.   r3,r5,0,24,31
	  beq-      .loc_0x330
	  lha       r3, 0x36(r28)
	  cmpw      r3, r0
	  bgt-      .loc_0x6E4

	.loc_0x330:
	  lbz       r0, 0x34(r28)
	  rlwinm.   r3,r0,0,31,31
	  beq-      .loc_0x348
	  lbz       r0, 0x34(r24)
	  rlwinm.   r0,r0,0,31,31
	  bne-      .loc_0x6E4

	.loc_0x348:
	  cmpwi     r3, 0
	  bne-      .loc_0x35C
	  lbz       r0, 0x34(r24)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x4A4

	.loc_0x35C:
	  cmpwi     r3, 0
	  bne-      .loc_0x370
	  mr        r4, r28
	  mr        r5, r24
	  b         .loc_0x378

	.loc_0x370:
	  mr        r4, r24
	  mr        r5, r28

	.loc_0x378:
	  lfs       f2, 0x50(r4)
	  lfs       f0, 0x50(r5)
	  lfs       f1, 0x4C(r4)
	  fsubs     f4, f2, f0
	  lfs       f0, 0x4C(r5)
	  lfs       f3, 0x54(r4)
	  fsubs     f2, f1, f0
	  lfs       f0, 0x54(r5)
	  fmuls     f5, f4, f4
	  fsubs     f3, f3, f0
	  lfs       f1, -0x5958(r2)
	  fmuls     f0, f2, f2
	  stfs      f2, 0x8(r1)
	  fmuls     f6, f3, f3
	  fadds     f0, f0, f5
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  fadds     f0, f6, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x3E4
	  fmadds    f0, f2, f2, f5
	  fadds     f3, f6, f0
	  fcmpo     cr0, f3, f1
	  ble-      .loc_0x3E8
	  fsqrte    f0, f3
	  fmuls     f3, f0, f3
	  b         .loc_0x3E8

	.loc_0x3E4:
	  fmr       f3, f1

	.loc_0x3E8:
	  lfs       f0, -0x5958(r2)
	  fcmpo     cr0, f3, f0
	  ble-      .loc_0x420
	  lfs       f0, -0x5960(r2)
	  lfs       f2, 0x8(r1)
	  fdivs     f3, f0, f3
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  fmuls     f2, f2, f3
	  fmuls     f1, f1, f3
	  fmuls     f0, f0, f3
	  stfs      f2, 0x8(r1)
	  stfs      f1, 0xC(r1)
	  stfs      f0, 0x10(r1)

	.loc_0x420:
	  lwz       r0, 0xC(r1)
	  lwz       r3, 0x8(r1)
	  stw       r0, 0x18(r1)
	  lwz       r0, 0x10(r1)
	  lfs       f3, 0x18(r1)
	  lfs       f2, 0x50(r5)
	  lfs       f1, 0x50(r4)
	  lfs       f0, 0x4(r30)
	  fmuls     f4, f3, f2
	  stw       r3, 0x14(r1)
	  fmuls     f2, f1, f3
	  fmuls     f0, f0, f3
	  lfs       f5, 0x4C(r5)
	  lfs       f6, 0x14(r1)
	  lfs       f3, 0x4C(r4)
	  lfs       f1, 0x0(r30)
	  fmadds    f4, f6, f5, f4
	  stw       r0, 0x1C(r1)
	  fmadds    f3, f3, f6, f2
	  fmadds    f1, f1, f6, f0
	  lfs       f5, 0x54(r5)
	  lfs       f6, 0x1C(r1)
	  lfs       f0, 0x54(r4)
	  lfs       f2, 0x8(r30)
	  fmadds    f4, f6, f5, f4
	  fmadds    f3, f0, f6, f3
	  lfs       f0, -0x5958(r2)
	  fmadds    f1, f2, f6, f1
	  fsubs     f2, f3, f4
	  fsubs     f1, f1, f4
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  blt-      .loc_0x6E4

	.loc_0x4A4:
	  lfs       f0, 0x50(r24)
	  lfs       f3, 0x50(r28)
	  lfs       f1, 0x54(r24)
	  fsubs     f28, f0, f3
	  lfs       f4, 0x54(r28)
	  lfs       f0, 0x4C(r24)
	  fsubs     f27, f1, f4
	  lfs       f5, 0x4C(r28)
	  fmuls     f1, f28, f28
	  fsubs     f29, f0, f5
	  lfs       f0, -0x5958(r2)
	  fmuls     f2, f27, f27
	  fmadds    f1, f29, f29, f1
	  fadds     f30, f2, f1
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x4F4
	  ble-      .loc_0x4F8
	  fsqrte    f0, f30
	  fmuls     f30, f0, f30
	  b         .loc_0x4F8

	.loc_0x4F4:
	  fmr       f30, f0

	.loc_0x4F8:
	  lfs       f0, -0x5958(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x51C
	  lfs       f0, -0x5960(r2)
	  fdivs     f0, f0, f30
	  fmuls     f29, f29, f0
	  fmuls     f28, f28, f0
	  fmuls     f27, f27, f0
	  b         .loc_0x520

	.loc_0x51C:
	  fmr       f30, f0

	.loc_0x520:
	  lfs       f0, 0x4(r30)
	  lfs       f2, 0x0(r30)
	  fsubs     f1, f0, f3
	  lfs       f3, 0x8(r30)
	  lfs       f0, -0x5948(r2)
	  fsubs     f2, f2, f5
	  fsubs     f3, f3, f4
	  fmuls     f1, f28, f1
	  fcmpo     cr0, f30, f0
	  fmadds    f0, f29, f2, f1
	  fmadds    f0, f27, f3, f0
	  fdivs     f26, f0, f30
	  bge-      .loc_0x578
	  lis       r3, 0x8048
	  lis       r4, 0x8048
	  subi      r5, r4, 0x1A24
	  lha       r6, 0x36(r28)
	  lha       r7, 0x36(r24)
	  subi      r3, r3, 0x1AAC
	  li        r4, 0x300
	  crclr     6, 0x6
	  bl        -0x1492A0

	.loc_0x578:
	  lfs       f5, 0x50(r28)
	  lfs       f2, 0x4(r30)
	  lfs       f6, 0x4C(r28)
	  fsubs     f0, f5, f2
	  lfs       f1, 0x0(r30)
	  lfs       f4, 0x54(r28)
	  lfs       f3, 0x8(r30)
	  fsubs     f9, f6, f1
	  fmuls     f0, f0, f0
	  fsubs     f8, f4, f3
	  lfs       f7, -0x5958(r2)
	  fmadds    f0, f9, f9, f0
	  fmuls     f8, f8, f8
	  fadds     f0, f8, f0
	  fcmpo     cr0, f0, f7
	  ble-      .loc_0x5C8
	  ble-      .loc_0x5CC
	  fsqrte    f7, f0
	  fmuls     f0, f7, f0
	  b         .loc_0x5CC

	.loc_0x5C8:
	  fmr       f0, f7

	.loc_0x5CC:
	  lfs       f7, 0x50(r24)
	  lfs       f9, 0x4C(r24)
	  fsubs     f10, f7, f2
	  lfs       f8, 0x54(r24)
	  fsubs     f9, f9, f1
	  lfs       f7, -0x5958(r2)
	  fsubs     f8, f8, f3
	  fmuls     f10, f10, f10
	  fmuls     f11, f8, f8
	  fmadds    f8, f9, f9, f10
	  fadds     f13, f11, f8
	  fcmpo     cr0, f13, f7
	  ble-      .loc_0x610
	  ble-      .loc_0x614
	  fsqrte    f7, f13
	  fmuls     f13, f7, f13
	  b         .loc_0x614

	.loc_0x610:
	  fmr       f13, f7

	.loc_0x614:
	  lfs       f12, -0x5958(r2)
	  fcmpo     cr0, f26, f12
	  blt-      .loc_0x62C
	  lfs       f8, -0x5960(r2)
	  fcmpo     cr0, f26, f8
	  ble-      .loc_0x64C

	.loc_0x62C:
	  fcmpo     cr0, f13, f0
	  bge-      .loc_0x640
	  lfs       f1, 0x58(r24)
	  fsubs     f1, f13, f1
	  b         .loc_0x6B8

	.loc_0x640:
	  lfs       f1, 0x58(r28)
	  fsubs     f1, f0, f1
	  b         .loc_0x6B8

	.loc_0x64C:
	  fmuls     f11, f26, f30
	  lfs       f7, 0x58(r24)
	  fsubs     f9, f8, f26
	  lfs       f8, 0x58(r28)
	  fmuls     f7, f26, f7
	  fmuls     f10, f28, f11
	  fmuls     f26, f27, f11
	  fmuls     f11, f29, f11
	  fadds     f5, f10, f5
	  fadds     f10, f26, f4
	  fadds     f4, f11, f6
	  fsubs     f2, f5, f2
	  fsubs     f5, f10, f3
	  fsubs     f3, f4, f1
	  fmuls     f1, f2, f2
	  fmuls     f2, f5, f5
	  fmadds    f4, f9, f8, f7
	  fmadds    f1, f3, f3, f1
	  fadds     f1, f2, f1
	  fcmpo     cr0, f1, f12
	  ble-      .loc_0x6B0
	  ble-      .loc_0x6B4
	  fsqrte    f2, f1
	  fmuls     f1, f2, f1
	  b         .loc_0x6B4

	.loc_0x6B0:
	  fmr       f1, f12

	.loc_0x6B4:
	  fsubs     f1, f1, f4

	.loc_0x6B8:
	  fcmpo     cr0, f1, f31
	  bge-      .loc_0x6E4
	  fcmpo     cr0, f0, f13
	  bge-      .loc_0x6D4
	  stw       r28, 0x18(r30)
	  stw       r24, 0x1C(r30)
	  b         .loc_0x6DC

	.loc_0x6D4:
	  stw       r24, 0x18(r30)
	  stw       r28, 0x1C(r30)

	.loc_0x6DC:
	  fmr       f31, f1
	  li        r31, 0x1

	.loc_0x6E4:
	  addi      r25, r25, 0x1
	  addi      r26, r26, 0x2
	  cmpwi     r25, 0x8
	  addi      r27, r27, 0x2
	  blt+      .loc_0x1AC

	.loc_0x6F8:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x724
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x7B4

	.loc_0x724:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x798

	.loc_0x744:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x7B4
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x798:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x744

	.loc_0x7B4:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x120
	  mr        r3, r31
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  psq_l     f28,0x78(r1),0,0
	  lfd       f28, 0x70(r1)
	  psq_l     f27,0x68(r1),0,0
	  lfd       f27, 0x60(r1)
	  psq_l     f26,0x58(r1),0,0
	  lfd       f26, 0x50(r1)
	  lmw       r24, 0x30(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/**
 * @note Address: 0x80173B88
 * @note Size: 0x1E0
 */
void RouteMgr::setCloseAll()
{
	Iterator<WayPoint> iter(this);
	CI_LOOP(iter)
	{
		WayPoint* wp = (*iter);
		wp->setVisit(false);
	}
}

/**
 * @note Address: 0x80173D68
 * @note Size: 0x210
 */
void RouteMgr::openRoom(s16 roomIdx)
{
	Iterator<WayPoint> iter(this);
	CI_LOOP(iter)
	{
		WayPoint* wp = (*iter);
		FOREACH_NODE(WayPoint::RoomList, wp->mRoomList.mChild, node)
		{
			if (node->mRoomIdx == roomIdx) {
				wp->setVisit(true);
			}
		}
	}
}

/**
 * @note Address: N/A
 * @note Size: 0x11C
 */
void RouteMgr::sonarCheck(RouteMgr::SonarArg&)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80173F78
 * @note Size: 0x31C
 */
void RouteMgr::write(Stream& output)
{
	output.textWriteTab(output.mTabCount);
	output.writeShort(mCount);
	output.textWriteText("\t# numWayPoints\r\n");

	Iterator<WayPoint> iter(this);
	CI_LOOP(iter) { iter.operator*()->write(output); }
}

/**
 * @note Address: N/A
 * @note Size: 0x4
 */
void RouteMgr::directDraw(Graphics&, WayPoint*, WayPoint*, int, s16*)
{
	// UNUSED FUNCTION
}

/**
 * @note Address: 0x80174294
 * @note Size: 0x7C
 */
GameRouteMgr::GameRouteMgr()
    : RouteMgr()
{
	mWayPoints = nullptr;
}

/**
 * @note Address: 0x80174310
 * @note Size: 0xBC
 */
GameRouteMgr::~GameRouteMgr()
{
	if (mWayPoints) {
		delete mWayPoints;
	}
}

/**
 * read__Q24Game12GameRouteMgrFR6Stream
 * @note Address: 0x801743CC
 * @note Size: 0xF4
 */
void GameRouteMgr::read(Stream& input)
{
	mCount     = input.readShort();
	mWayPoints = new WayPoint[mCount];
	for (int i = 0; i < mCount; i++) {
		mWayPoints[i].read(input);
	}
	makeInvertLinks();
}

/**
 * @note Address: 0x801744C0
 * @note Size: 0x88
 */
WayPoint* GameRouteMgr::getWayPoint(s16 index)
{
	P2ASSERTBOUNDSLINE(1124, 0, index, mCount);
	return &mWayPoints[index];
}

/**
 * @note Address: 0x80174548
 * @note Size: 0x30
 */
WayPoint* GameRouteMgr::get(void* index) { return getWayPoint((s16)index); }

/**
 * @note Address: 0x80174578
 * @note Size: 0x8
 */
void* GameRouteMgr::getNext(void* index) { return (void*)((int)index + 1); }

/**
 * @note Address: 0x80174580
 * @note Size: 0x8
 */
void* GameRouteMgr::getStart() { return 0; }

/**
 * @note Address: 0x80174588
 * @note Size: 0x8
 */
void* GameRouteMgr::getEnd() { return (void*)mCount; }

/**
 * @note Address: 0x80174590
 * @note Size: 0xAC
 */
EditorRouteMgr::EditorRouteMgr() { }

/**
 * @note Address: 0x8017469C
 * @note Size: 0x1AC
 */
void EditorRouteMgr::read(Stream& input)
{
	FOREACH_NODE(WPNode, mNode.mChild, node) { delWayPoint(node->mWayPoint); }

	u16 count = input.readShort();
	WayPoint* wp;
	mCount = 0;
	for (int i = 0; i < count; i++) {
		wp = new WayPoint();
		wp->read(input);
		addWayPoint(wp);
	}
	makeInvertLinks();
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r24, 0x10(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r25, 0x30(r3)
	  b         .loc_0x30

	.loc_0x20:
	  lwz       r4, 0x18(r25)
	  mr        r3, r30
	  bl        0x210
	  lwz       r25, 0x4(r25)

	.loc_0x30:
	  cmplwi    r25, 0
	  bne+      .loc_0x20
	  mr        r3, r31
	  bl        0x2A008C
	  li        r0, 0
	  lis       r4, 0x8051
	  sth       r0, 0x1C(r30)
	  rlwinm    r26,r3,0,16,31
	  addi      r29, r4, 0x41E4
	  li        r24, 0
	  b         .loc_0x188

	.loc_0x5C:
	  li        r3, 0x78
	  bl        -0x150858
	  mr.       r28, r3
	  beq-      .loc_0x11C
	  mr        r25, r28
	  bl        -0x157740
	  lis       r3, 0x804B
	  addi      r27, r25, 0x18
	  addi      r0, r3, 0x23FC
	  stw       r0, 0x0(r25)
	  mr        r3, r27
	  bl        0x29CC6C
	  lis       r4, 0x804B
	  lis       r3, 0x8051
	  addi      r0, r4, 0x2410
	  lfs       f0, -0x5960(r2)
	  stw       r0, 0x0(r27)
	  li        r4, -0x1
	  li        r0, 0
	  sth       r4, 0x18(r27)
	  sth       r4, 0x3A(r25)
	  sth       r4, 0x5E(r25)
	  sth       r4, 0x3C(r25)
	  sth       r4, 0x60(r25)
	  sth       r4, 0x3E(r25)
	  sth       r4, 0x62(r25)
	  sth       r4, 0x40(r25)
	  sth       r4, 0x64(r25)
	  sth       r4, 0x42(r25)
	  sth       r4, 0x66(r25)
	  sth       r4, 0x44(r25)
	  sth       r4, 0x68(r25)
	  sth       r4, 0x46(r25)
	  sth       r4, 0x6A(r25)
	  sth       r4, 0x48(r25)
	  sth       r4, 0x6C(r25)
	  lfs       f1, 0x41E4(r3)
	  stfs      f1, 0x4C(r25)
	  lfs       f1, 0x4(r29)
	  stfs      f1, 0x50(r25)
	  lfs       f1, 0x8(r29)
	  stfs      f1, 0x54(r25)
	  stfs      f0, 0x58(r25)
	  sth       r4, 0x36(r25)
	  sth       r0, 0x38(r25)
	  sth       r0, 0x5C(r25)
	  stb       r0, 0x6E(r25)
	  stb       r0, 0x34(r25)

	.loc_0x11C:
	  mr        r3, r31
	  bl        0x29FFA8
	  sth       r3, 0x36(r28)
	  mr        r3, r31
	  bl        0x29FF9C
	  sth       r3, 0x38(r28)
	  mr        r25, r28
	  li        r27, 0
	  b         .loc_0x154

	.loc_0x140:
	  mr        r3, r31
	  bl        0x29FF84
	  sth       r3, 0x3A(r25)
	  addi      r25, r25, 0x2
	  addi      r27, r27, 0x1

	.loc_0x154:
	  lha       r0, 0x38(r28)
	  cmpw      r27, r0
	  blt+      .loc_0x140
	  mr        r4, r31
	  addi      r3, r28, 0x4C
	  bl        0x29D18C
	  mr        r3, r31
	  bl        0x2A05A0
	  stfs      f1, 0x58(r28)
	  mr        r3, r30
	  mr        r4, r28
	  bl        .loc_0x1AC
	  addi      r24, r24, 0x1

	.loc_0x188:
	  cmpw      r24, r26
	  blt+      .loc_0x5C
	  mr        r3, r30
	  bl        -0x1E4C
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr

	.loc_0x1AC:
	*/
}

/**
 * @note Address: 0x80174848
 * @note Size: 0x8C
 */
void EditorRouteMgr::addWayPoint(WayPoint* wp)
{
	WPNode* node            = new WPNode();
	node->mWayPoint         = wp;
	node->mWayPoint->mIndex = mCount;
	mNode.add(node);
	mCount++;
}

/**
 * @note Address: 0x801748D4
 * @note Size: 0x88
 */
void EditorRouteMgr::delWayPoint(WayPoint* wp)
{
	FOREACH_NODE(WPNode, mNode.mChild, node)
	{
		if (node->mWayPoint == wp) {
			delete wp;
			node->del();
			mCount--;
			return;
		}
	}
}

/**
 * @note Address: 0x8017495C
 * @note Size: 0x38
 */
WayPoint* EditorRouteMgr::getWayPoint(s16 index)
{
	FOREACH_NODE(WPNode, mNode.mChild, node)
	{
		WayPoint* wp = node->mWayPoint;
		if (wp && wp->mIndex == index) {
			return wp;
		}
	}

	return nullptr;
}

/**
 * @note Address: 0x80174994
 * @note Size: 0x8
 */
WayPoint* EditorRouteMgr::get(void* node) { return static_cast<WPNode*>(node)->mWayPoint; }

/**
 * @note Address: 0x8017499C
 * @note Size: 0x8
 */
void* EditorRouteMgr::getNext(void* node) { return (void*)(static_cast<WPNode*>(node)->mNext); }

/**
 * @note Address: 0x801749A4
 * @note Size: 0x8
 */
void* EditorRouteMgr::getStart() { return (void*)(mNode.mChild); }

/**
 * @note Address: 0x801749AC
 * @note Size: 0x8
 */
void* EditorRouteMgr::getEnd() { return nullptr; }

} // namespace Game
