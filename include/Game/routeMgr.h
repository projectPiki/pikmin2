#ifndef _GAME_ROUTEMGR_H
#define _GAME_ROUTEMGR_H

#include "JSystem/JKR/JKRDisposer.h"
#include "Vector3.h"
#include "types.h"
#include "Container.h"
#include "Condition.h"

struct Graphics;
struct Plane;

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
		    : _18(-1)
		{
		}

		virtual ~RoomList(); // _08 (weak)

		// _00     = VTBL
		// _00-_18 = CNode
		s16 _18; // _18, possibly count?
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
	void includeRoom(s16);
	void setVisit(bool);
	void setVsColor(int);
	bool hasLinkTo(s16);
	void addLink(s16);
	void killLink(s16);
	void read(Stream&);
	void write(Stream&);
	void createOffPlane(Plane&, WayPoint*);

	inline Vector3f getPosition() { return m_position; }

	RoomList m_roomList; // _18
	u8 m_flags;          // _34
	s16 m_index;         // _36
	s16 m_numFromLinks;  // _38
	s16 m_fromLinks[8];  // _3A
	Vector3f m_position; // _4C
	f32 m_radius;        // _58
	s16 m_numToLinks;    // _5C
	s16 m_toLinks[8];    // _5E
	u8 m_doFloorSnap;    // _6E
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

	s32 m_index;          // _00
	WayPoint* m_wayPoint; // _04
	bool _08;             // _08
};

struct WPCondition : public Condition<WayPoint> {
	virtual bool satisfy(WayPoint*) = 0; // _08
};

struct WPSearchArg {
	WPSearchArg(Vector3f& position, WPCondition* condition, u8 arg3, float arg4)
	{
		m_position  = position;
		m_condition = condition;
		_10         = arg3;
		_14         = arg4;
	}

	Vector3f m_position;      // _00
	WPCondition* m_condition; // _0C
	u8 _10;                   // _10
	f32 _14;                  // _14, radius maybe?
};

struct WPEdgeSearchArg {
	Vector3f _00;  // _00
	u8 _0C;        // _0C
	u8 _0D[0x3];   // _0D, unknown/padding
	void* _10;     // _10, ActPathMove ptr of some description
	s16 _14;       // _14
	u8 _16[0x2];   // _16, padding probably
	WayPoint* _18; // _18
	WayPoint* _1C; // _1C
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
	void getNearestEdge(WPEdgeSearchArg&);
	void setCloseAll();
	void openRoom(s16);
	void directDraw(Graphics&, WayPoint*, WayPoint*);

	// Unused/inlined:
	void sonarCheck(SonarArg&);
	void directDraw(Graphics&, WayPoint*, WayPoint*, int, s16*);

	// _00     = VTBL
	// _00-_1C = Container
	u16 m_count; // _1C
};

struct EditorRouteMgr : public RouteMgr {
	struct WPNode : public CNode {
		WPNode()
		    : m_wayPoint(nullptr)
		{
		}

		virtual ~WPNode(); // _08 (weak)

		// _00     = VTBL
		// _00-_18 = CNode
		WayPoint* m_wayPoint; // _18
	};

	EditorRouteMgr();

	virtual ~EditorRouteMgr();          // _08 (weak)
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
	WPNode m_node; // _20
};

struct GameRouteMgr : public RouteMgr {
	GameRouteMgr();

	virtual ~GameRouteMgr();              // _08
	virtual void* getNext(void*);         // _14
	virtual void* getStart();             // _18
	virtual void* getEnd();               // _1C
	virtual WayPoint* get(void*);         // _20
	virtual WayPoint* getWayPoint(short); // _2C
	virtual void read(Stream&);           // _30

	WayPoint* m_wayPoints; // _20
};

} // namespace Game

struct WPExcludeSpot : public Game::WPCondition {
	virtual bool satisfy(Game::WayPoint*); // _08 (weak)
};

struct WPFindCond : public Game::WPCondition {
	virtual bool satisfy(Game::WayPoint*); // _08 (weak)
};

#endif
