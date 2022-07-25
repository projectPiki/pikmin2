#ifndef _GAME_CAVE_FLOORINFO_H
#define _GAME_CAVE_FLOORINFO_H

/*
    __vt__Q34Game4Cave9FloorInfo:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave9FloorInfoFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q34Game4Cave9FloorInfoFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Cave {
struct FloorInfo : public CNode {
	virtual ~FloorInfo();       // _08 (weak)
	virtual void read(Stream&); // _10

	FloorInfo();
	void hasHiddenCollision();
	void getTekiMax();
	void getTekiInfoNum();
	void getTekiInfo(int);
	void getTekiWeightSum();
	void getItemMax();
	void getItemInfoNum();
	void getItemInfo(int);
	void getItemWeightSum();
	void getGateMax();
	void getGateInfoNum();
	void getGateInfo(int);
	void getGateWeightSum();
	void getCapMax();
	void getCapInfoNum();
	void getCapInfo(int);
	void getRoomNum();
	void getRouteRatio();
	void hasEscapeFountain(int);
	void useKaidanBarrel();
};
} // namespace Cave
} // namespace Game

#endif
