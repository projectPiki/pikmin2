#ifndef _GAME_GAMELIGHTMGRSETTING_H
#define _GAME_GAMELIGHTMGRSETTING_H

/*
    __vt__Q24Game19GameLightMgrSetting:
    .4byte 0
    .4byte 0
    .4byte __dt__Q24Game19GameLightMgrSettingFv
    .4byte getChildCount__5CNodeFv
    .4byte read__Q24Game19GameLightMgrSettingFR6Stream
*/

struct CNode {
	virtual ~CNode();             // _00
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
