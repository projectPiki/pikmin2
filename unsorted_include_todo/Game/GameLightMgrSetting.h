#ifndef _GAME_GAMELIGHTMGRSETTING_H
#define _GAME_GAMELIGHTMGRSETTING_H

struct CNode {
	virtual void _00() = 0;       // _00
	virtual void getChildCount(); // _04

	// _00 VTBL
};

namespace Game {
struct GameLightMgrSetting : public CNode {
	virtual ~GameLightMgrSetting(); // _00
	virtual void getChildCount();   // _04
	virtual void read(Stream&);     // _08

	// _00 VTBL
};
} // namespace Game

#endif
