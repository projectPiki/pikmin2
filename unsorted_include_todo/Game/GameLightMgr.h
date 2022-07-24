#ifndef _GAME_GAMELIGHTMGR_H
#define _GAME_GAMELIGHTMGR_H

/*
    __vt__Q24Game12GameLightMgr:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game12GameLightMgrFv
    .4byte getChildCount__5CNodeFv
    .4byte update__Q24Game12GameLightMgrFv
    .4byte set__Q24Game12GameLightMgrFR8Graphics
    .4byte set__8LightMgrFR7Matrixf
    .4byte drawDebugInfo__8LightMgrFR8Graphics
*/

struct CNode {
	virtual void _08() = 0;       // _08
	virtual void getChildCount(); // _0C

	// _00 VTBL
};

struct LightMgr {
	virtual void _08() = 0;                // _08
	virtual void _0C() = 0;                // _0C
	virtual void _10() = 0;                // _10
	virtual void _14() = 0;                // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C

	// _00 VTBL
};

namespace Game {
struct GameLightMgr : public CNode, public LightMgr {
	virtual ~GameLightMgr();     // _08
	virtual void update();       // _10
	virtual void set(Graphics&); // _14

	// _00 VTBL
};
} // namespace Game

#endif
