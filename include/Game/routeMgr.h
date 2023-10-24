#ifndef _GAME_ROUTEMGR_H
#define _GAME_ROUTEMGR_H

#include "BitFlag.h"
#include "JSystem/JKernel/JKRDisposer.h"
#include "Vector3.h"
#include "types.h"
#include "Container.h"
#include "Condition.h"
#include "Game/Entities/ItemOnyon.h"

struct Graphics;
struct Plane;

// fabricated
struct WayPointLinks {
	inline WayPointLinks() { mCount = 0; }

	inline bool isLinkedTo(s16 idx)
	{
		for (int i = 0; i < mCount; i++) {
			if (idx == mWPLinks[i]) {
				return true;
			}
		}
		return false;
	}

	inline bool addLink(s16 idx)
	{
		if (idx != -1 && mCount < 4) {
			s16 last = mCount;
			mCount++;
			mWPLinks[last] = idx;
			return true;
		}

		return false;
	}

	s16 mWPLinks[4]; // _00, indices for linked waypoints
	s16 mCount;      // _08, number of linked waypoints (<= 4)
};

namespace Game {
enum WayPointFlags {
	WPF_Unset    = 0x00,
	WPF_Closed   = 0x01,
	WPF_Water    = 0x02,
	WPF_Bridge   = 0x04,
	WPF_Unknown4 = 0x08,
	WPF_Unknown5 = 0x10,
	WPF_Unknown6 = 0x20,
	WPF_Unknown7 = 0x40,
	WPF_Unknown8 = 0x80
	// There is an additional value for "visited", and probably values for vs
	// color
};

struct WayPoint : public JKRDisposer {
	struct RoomList : public CNode {
		inline RoomList()
		    : mRoomIdx(-1)
		{
		}

		virtual ~RoomList() { } // _08 (weak)

		// _00     = VTBL
		// _00-_18 = CNode
		s16 mRoomIdx; // _18
	};

	WayPoint();

	virtual ~WayPoint();                       // _08
	virtual void directDraw(Graphics&);        // _0C
	virtual void directDraw_Simple(Graphics&); // _10

	void reset();
	void setOpen(bool);
	void setWater(bool);
	void setBridge(bool);

	// Unused/inlined:
	void getLink(int);
	bool includeRoom(s16 roomIdx);
	void setVisit(bool);
	void setVsColor(int);
	bool hasLinkTo(s16);
	void addLink(s16);
	void killLink(s16);
	void read(Stream&);
	void write(Stream&);
	void createOffPlane(Plane&, WayPoint*);

	inline void setFlag(u32 flag) { mFlags |= flag; }
	inline void resetFlag(u32 flag) { mFlags &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags & flag; }

	inline Vector3f getPosition() { return mPosition; }

	inline s16 getNumFromLinks() const { return mNumFromLinks; }

	RoomList mRoomList; // _18
	u8 mFlags;          // _34
	s16 mIndex;         // _36
	s16 mNumFromLinks;  // _38
	s16 mFromLinks[8];  // _3A
	Vector3f mPosition; // _4C
	f32 mRadius;        // _58
	s16 mNumToLinks;    // _5C
	s16 mToLinks[8];    // _5E
	u8 mDoFloorSnap;    // _6E
	u32 : 0;
	u8 _70[4]; // _70
	u8 _74;    // _74
	s16 _76;   // _76
};

struct WayPointIterator {
	WayPointIterator(WayPoint*, bool);

	s16 operator*();

	void first();
	void forward();
	void next();
	bool isDone();

	int mIndex;          // _00
	WayPoint* mWayPoint; // _04
	bool _08;            // _08
};

struct WPCondition : public Condition<WayPoint> {
	virtual bool satisfy(WayPoint*) = 0; // _08

	// _00 = VTBL
};

struct WPSearchArg {
	WPSearchArg(Vector3f& position, WPCondition* condition, bool doRayCheck, f32 radius)
	{
		mPosition   = position;
		mCondition  = condition;
		mDoRayCheck = doRayCheck;
		mRadius     = radius;
	}

	Vector3f mPosition;      // _00
	WPCondition* mCondition; // _0C
	bool mDoRayCheck;        // _10, check mapMgr and platMgr for ray intersection
	f32 mRadius;             // _14, radius maybe?
};

struct WPEdgeSearchArg {
	WPEdgeSearchArg(Vector3f& startPos)
	{
		mWp2           = nullptr;
		mWp1           = nullptr;
		mInWater       = 0;
		mRoomID        = -1;
		mLinks         = nullptr;
		mStartPosition = startPos;
	}

	Vector3f mStartPosition; // _00
	bool mInWater;           // _0C
	WayPointLinks* mLinks;   // _10
	s16 mRoomID;             // _14
	WayPoint* mWp1;          // _18
	WayPoint* mWp2;          // _1C
};

struct RouteMgr : public Container<WayPoint> {
	struct SonarArg {
	};

	RouteMgr();

	virtual ~RouteMgr();                    // _08
	virtual WayPoint* getWayPoint(s16) = 0; // _2C
	virtual void read(Stream&)         = 0; // _30
	virtual void write(Stream&);            // _34

	void makeInvertLinks();
	bool linkable(WayPoint*, WayPoint*);
	void refreshWater();
	WayPoint* getNearestWayPoint(WPSearchArg&);
	bool getNearestEdge(WPEdgeSearchArg&);
	void setCloseAll();
	void openRoom(s16);
	void directDraw(Graphics&, WayPoint*, WayPoint*);

	// Unused/inlined:
	void sonarCheck(SonarArg&);
	void directDraw(Graphics&, WayPoint*, WayPoint*, int, s16*);

	// _00     = VTBL
	// _00-_1C = Container
	u16 mCount; // _1C
};

struct EditorRouteMgr : public RouteMgr {
	struct WPNode : public CNode {
		WPNode()
		    : mWayPoint(nullptr)
		{
		}

		virtual ~WPNode() { } // _08 (weak)

		// _00     = VTBL
		// _00-_18 = CNode
		WayPoint* mWayPoint; // _18
	};

	EditorRouteMgr();

	virtual ~EditorRouteMgr() { }       // _08 (weak)
	virtual void* getNext(void*);       // _14
	virtual void* getStart();           // _18
	virtual void* getEnd();             // _1C
	virtual WayPoint* get(void*);       // _20
	virtual WayPoint* getWayPoint(s16); // _2C
	virtual void read(Stream&);         // _30

	void addWayPoint(WayPoint*);
	void delWayPoint(WayPoint*);

	// _00     = VTBL
	// _00-_20 = RouteMgr
	WPNode mNode; // _20
};

struct GameRouteMgr : public RouteMgr {
	GameRouteMgr();

	virtual ~GameRouteMgr();            // _08
	virtual void* getNext(void*);       // _14
	virtual void* getStart();           // _18
	virtual void* getEnd();             // _1C
	virtual WayPoint* get(void*);       // _20
	virtual WayPoint* getWayPoint(s16); // _2C
	virtual void read(Stream&);         // _30

	// _00     = VTBL
	// _00-_20 = RouteMgr
	WayPoint* mWayPoints; // _20
};

} // namespace Game

struct WPExcludeSpot : public Game::WPCondition {
	virtual bool satisfy(Game::WayPoint* wp) // _08 (weak)
	{
		for (int i = 0; i < 3; i++) {
			Game::Onyon* onyon = Game::ItemOnyon::mgr->getOnyon(i);
			if (onyon && wp == onyon->mGoalWayPoint) {
				return false;
			}
		}

		return Game::ItemOnyon::mgr->mUfo->mGoalWayPoint != wp;
	}

	// _00 = VTBL
};

struct WPFindCond : public Game::WPCondition {
	virtual bool satisfy(Game::WayPoint* wp) // _08 (weak)
	{
		return (!wp->isFlag(Game::WPF_Water) && !wp->isFlag(Game::WPF_Closed));
	}

	// _00 = VTBL
};
#endif
