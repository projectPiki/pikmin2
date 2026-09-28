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
WayPoint::~WayPoint()
{
}

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
	} else {
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
	} else if (color == Red) {
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
void WayPoint::directDraw(Graphics&)
{
}

/**
 * @note Address: 0x801728F0
 * @note Size: 0x4
 */
void WayPoint::directDraw_Simple(Graphics&)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x10C
 */
void WayPoint::createOffPlane(Plane& plane, WayPoint* wp)
{
	Vector3f sep = mPosition - wp->mPosition;
	sep.normalise();
	plane.updatePlane(wp->mPosition, sep);
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
RouteMgr::~RouteMgr()
{
}

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
	searchArg.mWp2 = nullptr;
	searchArg.mWp1 = nullptr;
	f32 minDist    = FLOAT_DIST_MAX;
	bool result    = false;
	Iterator<WayPoint> iter(this);
	CI_LOOP(iter)
	{
		WayPoint* wpA = *iter;
		if ((searchArg.mInWater & 1) && wpA->isFlag(WPF_Bridge)) {
			continue;
		}

		if (searchArg.isLinkedTo(wpA->mIndex)) {
			continue;
		}

		for (int i = 0; i < 8; i++) {
			s16 linkIdx = wpA->mFromLinks[i];
			if (linkIdx == -1) {
				continue;
			}

			WayPoint* wpB = getWayPoint(linkIdx);
			s16 wpBIndex  = wpB->mIndex;
			if (searchArg.isLinkedTo(wpBIndex)) {
				continue;
			}

			s16 roomIdx = searchArg.mRoomID;
			if (roomIdx != -1 && !wpA->includeRoom(roomIdx) && !wpB->includeRoom(roomIdx)) {
				continue;
			}

			if ((searchArg.mInWater & 1) && wpB->isFlag(WPF_Bridge)) {
				continue;
			}

			bool isReverseLink = false;
			for (int j = 0; j < 8; j++) {
				if (wpB->mFromLinks[i] == wpA->mIndex) {
					isReverseLink = true;
					break;
				}
			}
			if (isReverseLink && wpA->mIndex > wpB->mIndex) {
				continue;
			}

			int isWaypointAClosed = wpA->isFlag(WPF_Closed);
			if (isWaypointAClosed && wpB->isFlag(WPF_Closed)) {
				continue;
			}
			if (isWaypointAClosed || wpB->isFlag(WPF_Closed)) {
				WayPoint* a;
				WayPoint* b;
				if (isWaypointAClosed == false) {
					a = wpA;
					b = wpB;
				} else {
					a = wpB;
					b = wpA;
				}

				Plane plane;
				a->createOffPlane(plane, b);
				if (plane.calcDist(a->mPosition) * plane.calcDist(searchArg.mStartPosition) < 0.0f) {
					continue;
				}
			}

			Vector3f relativePosition = wpB->mPosition - wpA->mPosition;
			f32 distanceMagnitude     = relativePosition.normalise();
			Vector3f searchSep        = searchArg.mStartPosition - wpA->mPosition;
			f32 dotProd               = relativePosition.dot(searchSep) / distanceMagnitude;

			if (distanceMagnitude < 0.1f) {
				JUT_PANICLINE(768, "wpA(%d) and wpB(%d) cause singularity !\n", wpA->mIndex, wpB->mIndex);
			}

			f32 revDistA = wpA->mPosition.distance(searchArg.mStartPosition);
			f32 revDistB = wpB->mPosition.distance(searchArg.mStartPosition);
			f32 newDist;
			if (dotProd < 0.0f || dotProd > 1.0f) {
				if (revDistB < revDistA) {
					newDist = revDistB - wpB->mRadius;
				} else {
					newDist = revDistA - wpA->mRadius;
				}
			} else {
				Vector3f edgePos;
				edgePos    = relativePosition * (dotProd * distanceMagnitude) + wpA->mPosition;
				edgePos    = edgePos - searchArg.mStartPosition;
				f32 radius = (1.0f - dotProd) * wpA->mRadius + dotProd * wpB->mRadius;
				newDist    = edgePos.length() - radius;
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

	return result;
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
	CI_LOOP(iter)
	{
		iter.operator*()->write(output);
	}
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
WayPoint* GameRouteMgr::get(void* index)
{
	return getWayPoint((s16)index);
}

/**
 * @note Address: 0x80174578
 * @note Size: 0x8
 */
void* GameRouteMgr::getNext(void* index)
{
	return (void*)((int)index + 1);
}

/**
 * @note Address: 0x80174580
 * @note Size: 0x8
 */
void* GameRouteMgr::getStart()
{
	return 0;
}

/**
 * @note Address: 0x80174588
 * @note Size: 0x8
 */
void* GameRouteMgr::getEnd()
{
	return (void*)mCount;
}

/**
 * @note Address: 0x80174590
 * @note Size: 0xAC
 */
EditorRouteMgr::EditorRouteMgr()
{
}

/**
 * @note Address: 0x8017469C
 * @note Size: 0x1AC
 */
void EditorRouteMgr::read(Stream& input)
{
	FOREACH_NODE(WPNode, mNode.mChild, node)
	{
		delWayPoint(node->mWayPoint);
	}

	int count = input.readU16();
	mCount    = 0;
	for (int i = 0; i < count; i++) {
		WayPoint* wp = new WayPoint();
		wp->read(input);
		addWayPoint(wp);
	}
	makeInvertLinks();
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
WayPoint* EditorRouteMgr::get(void* node)
{
	return static_cast<WPNode*>(node)->mWayPoint;
}

/**
 * @note Address: 0x8017499C
 * @note Size: 0x8
 */
void* EditorRouteMgr::getNext(void* node)
{
	return (void*)(static_cast<WPNode*>(node)->mNext);
}

/**
 * @note Address: 0x801749A4
 * @note Size: 0x8
 */
void* EditorRouteMgr::getStart()
{
	return (void*)(mNode.mChild);
}

/**
 * @note Address: 0x801749AC
 * @note Size: 0x8
 */
void* EditorRouteMgr::getEnd()
{
	return nullptr;
}

} // namespace Game
