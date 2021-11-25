#ifndef _GAME_ROUTEMGR_H
#define _GAME_ROUTEMGR_H

#include "types.h"
#include "Container.h"

struct Graphics;

namespace Game {
struct WPSearchArg {
};

struct WPEdgeSearchArg {
};

struct WayPoint {
};

struct RouteMgr : public Container<WayPoint> {
	struct SonarArg {
	};
	void makeInvertLinks();
	bool linkable(WayPoint*, WayPoint*);
	void refreshWater();
	void getNearestWayPoint(WPSearchArg&);
	void getNearestEdge(WPEdgeSearchArg&);
	void setCloseAll();
	void openRoom(short);
	void sonarCheck(SonarArg&);
	void directDraw(Graphics&, WayPoint*, WayPoint*);
};

struct EditorRouteMgr : public RouteMgr {
	struct WPNode : public CNode {
		virtual ~WPNode();
		WayPoint* m_wayPoint; // _18
	};

	EditorRouteMgr();
	void addWayPoint(WayPoint*);
	void delWayPoint(WayPoint*);
	void getWayPoint(short);
	WPNode m_node; // _20
};

} // namespace Game

#endif
