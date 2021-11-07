#ifndef _GAME_GAMELIGHTMGR_H
#define _GAME_GAMELIGHTMGR_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

struct LightMgr {
	virtual void _00() = 0;                // _00
	virtual void _04() = 0;                // _04
	virtual void _08() = 0;                // _08
	virtual void _0C() = 0;                // _0C
	virtual void set(Matrixf&);            // _10
	virtual void drawDebugInfo(Graphics&); // _14

	// _00 VTBL
};

namespace Game {
struct GameLightMgr : public CNode, public LightMgr {
	virtual ~GameLightMgr();               // _00
	virtual void getChildCount();          // _04
	virtual void update();                 // _08
	virtual void set(Graphics&);           // _0C
	virtual void set(Matrixf&);            // _10
	virtual void drawDebugInfo(Graphics&); // _14

	// _00 VTBL
};
} // namespace Game

#endif
