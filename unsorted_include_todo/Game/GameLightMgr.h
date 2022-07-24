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
	virtual ~CNode();             // _08 (inline)
	virtual void getChildCount(); // _0C
};

struct LightMgr {
	virtual ~LightMgr();                   // _08 (inline)
	virtual void _0C() = 0;                // _0C
	virtual void update();                 // _10
	virtual void set(Graphics&);           // _14
	virtual void set(Matrixf&);            // _18
	virtual void drawDebugInfo(Graphics&); // _1C
};

namespace Game {
struct GameLightMgr : public CNode, public LightMgr {
	virtual ~GameLightMgr();     // _08 (inline)
	virtual void update();       // _10
	virtual void set(Graphics&); // _14

	GameLightMgr();
	void start();
	void createEventLight(Game::GameLightEventArg&);
	void loadParm(Stream&);
	void calcSetting(Game::GameLightTimeSetting*, Game::GameLightTimeSetting*, Game::GameLightTimeSetting*);
	void updateSunType();
	void updateSpotType();
	void updatePosition(Viewport*);
};
} // namespace Game

#endif
