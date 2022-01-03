#ifndef _GAME_ROUTEMGR_H
#define _GAME_ROUTEMGR_H

#include "JSystem/JKR/JKRDisposer.h"
#include "Vector3.h"
#include "types.h"
#include "Container.h"

struct Graphics;
struct Plane;

namespace Game {
struct WPSearchArg {
};

struct WPEdgeSearchArg {
};

enum WayPointFlags {
	WPF_Unset  = 0,
	WPF_Closed = 1,
	WPF_Water  = 2,
	WPF_Bridge = 4
	// There is an additional value for "visited", and probably values for vs
	// color
};

struct WayPoint : public JKRDisposer {
	struct RoomList : public CNode {
		inline RoomList()
		    : CNode()
		{
			_18 = -1;
		}
		virtual ~RoomList(); // _00

		short _18;
	};

	WayPoint();

	virtual ~WayPoint();                       // _00
	virtual void directDraw(Graphics&);        // _04
	virtual void directDraw_Simple(Graphics&); // _08

	void reset();
	void setOpen(bool);
	void setWater(bool);
	void setBridge(bool);

	// Unused/inlined:
	void getLink(int);
	void includeRoom(short);
	void setVisit(bool);
	void setVsColor(int);
	bool hasLinkTo(short);
	void addLink(short);
	void killLink(short);
	void read(Stream&);
	void write(Stream&);
	void createOffPlane(Plane&, WayPoint*);

	RoomList m_roomList;  // _18
	u8 m_flags;           // _34
	short m_index;        // _36
	short m_numFromLinks; // _38
	short m_fromLinks[8]; // _3A
	Vector3f m_position;  // _4C
	float m_radius;       // _58
	short m_numToLinks;   // _5C
	short m_toLinks[8];   // _5E
	u8 m_doFloorSnap;     // _6E
	u32 : 0;
	u8 _70[4]; // _70
	u8 _74;    // _74
	short _76; // _76
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

struct RouteMgr : public Container<WayPoint> {
	struct SonarArg {
	};

	RouteMgr();

	virtual ~RouteMgr();                      // _00
	virtual WayPoint* getWayPoint(short) = 0; // _24
	virtual void read(Stream&)           = 0; // _28
	virtual void write(Stream&);              // _2C

	void makeInvertLinks();
	bool linkable(WayPoint*, WayPoint*);
	void refreshWater();
	void getNearestWayPoint(WPSearchArg&);
	void getNearestEdge(WPEdgeSearchArg&);
	void setCloseAll();
	void openRoom(short);
	void directDraw(Graphics&, WayPoint*, WayPoint*);

	// Unused/inlined:
	void sonarCheck(SonarArg&);
	void directDraw(Graphics&, WayPoint*, WayPoint*, int, short*);

	ushort m_count; // _1C
};

struct EditorRouteMgr : public RouteMgr {
	struct WPNode : public CNode {
		WPNode()
		    : CNode()
		{
			m_wayPoint = nullptr;
		}
		virtual ~WPNode(); // _00

		WayPoint* m_wayPoint; // _18
	};

	EditorRouteMgr();

	virtual ~EditorRouteMgr();            // _00
	virtual int getNext(void*);           // _0C
	virtual int getStart();               // _10
	virtual int getEnd();                 // _14
	virtual WayPoint* get(void*);         // _18
	virtual WayPoint* getWayPoint(short); // _24
	virtual void read(Stream&);           // _28

	void addWayPoint(WayPoint*);
	void delWayPoint(WayPoint*);

	WPNode m_node; // _20
};

struct GameRouteMgr : public RouteMgr {
	GameRouteMgr();

	virtual ~GameRouteMgr();              // _00
	virtual int getNext(void*);           // _0C
	virtual int getStart();               // _10
	virtual int getEnd();                 // _14
	virtual WayPoint* get(void*);         // _18
	virtual WayPoint* getWayPoint(short); // _24
	virtual void read(Stream&);           // _28

	WayPoint* m_wayPoints; // _20
};

} // namespace Game

#endif
