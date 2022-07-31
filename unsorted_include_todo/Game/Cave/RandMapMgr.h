#ifndef _GAME_CAVE_RANDMAPMGR_H
#define _GAME_CAVE_RANDMAPMGR_H

/*
    __vt__Q34Game4Cave10RandMapMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q34Game4Cave10RandMapMgrFv
    .4byte getChildCount__5CNodeFv
*/

struct CNode {
	virtual ~CNode();             // _08 (weak)
	virtual void getChildCount(); // _0C
};

namespace Game {
namespace Cave {
struct RandMapMgr : public CNode {
	virtual ~RandMapMgr(); // _08 (weak)

	RandMapMgr(bool);
	void loadResource(Game::MapUnitInterface*, int, Game::Cave::FloorInfo*, bool, Game::Cave::EditMapUnit*);
	void create();
	void getNumRooms();
	void getUseUnitName(int);
	void getRoomData(int, float&, float&, int&);
	void makeRoomLink(int);
	void makeObjectLayoutInfo(int);
	void getStartPosition(Vector3<float>&, int);
	void getItemDropPosition(Vector3<float>&, float, float);
	void getItemDropPosition(Vector3<float>*, int, float, float);
	void setUnitTexture(int, JUTTexture*);
	void setCaptureOn();
	void captureRadarMap(Graphics&);
	void isLastFloor();
	void isVersusHiba();
	void getRadarMapTexture();
	void radarMapPartsOpen(Vector3<float>&);
	void getPositionOnTex(Vector3<float>&, float&, float&);
	void getBaseGenData(Vector3<float>*, float*);
	void drawFrameBuffer(Graphics&);
};
} // namespace Cave
} // namespace Game

#endif
