#ifndef _GAME_GAMELIGHT_H
#define _GAME_GAMELIGHT_H

#include "types.h"
#include "Light.h"
#include "CNode.h"
#include "Game/GameLightSetting.h"

struct Color4;

namespace Game {
struct GameLightMgr;

struct GameLightEventArg {
	u8 _00;  // _00
	u8 _01;  // _01
	f32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
	f32 _10; // _10, start time?
	f32 _14; // _14, end time?
	f32 _18; // _18, start Z?
	f32 _1C; // _1C, end Z?
	u32 _20; // _20, unknown
	f32 _24; // _24, distance?
};

struct GameLightEventNode : public CNode {
	GameLightEventNode();

	virtual ~GameLightEventNode(); // _08 (weak)

	void update(GameLightMgr*);
	void updateCommon(GameLightMgr*, bool);
	void calcColor(Color4*);

	// _00      = VTBL
	// _00-_18  = CNode
	u8 _18;  // _18
	u8 _19;  // _19
	f32 _1C; // _1C, color 1 scale?
	f32 _20; // _20, color 2 scale?
	f32 _24; // _24, color 3 scale?
	f32 _28; // _28
	f32 _2C; // _2C
	f32 _30; // _30, nearZ?
	f32 _34; // _34, farZ?
	u32 _38; // _38, unknown
	f32 _3C; // _3C
	f32 _40; // _40, timer?
	f32 _44; // _44, angle?
	f32 _48; // _48
	int _4C; // _4C
};

struct GameLightSpotSetting : public CNode {
	GameLightSpotSetting(char*);

	virtual ~GameLightSpotSetting(); // _08 (weak)
};

struct GameLightSunSetting : public CNode {
	virtual ~GameLightSunSetting(); // _08 (weak)
};

struct GameLightTimeSetting : public CNode {
	GameLightTimeSetting();

	virtual ~GameLightTimeSetting(); // _08 (weak)
};

struct GameLightMgrSetting : public CNode {
	GameLightMgrSetting();

	virtual ~GameLightMgrSetting(); // _08 (weak)
	virtual void read(Stream&);     // _10

	void updateNode();
	void readOldVersion(ID32, Stream&);
};

struct GameLightMgr : public LightMgr {
	GameLightMgr(char*);

	virtual ~GameLightMgr();     // _08 (weak)
	virtual void update();       // _10
	virtual void set(Graphics&); // _14

	void start();
	void createEventLight(GameLightEventArg&);
	void loadParm(Stream&);
	void calcSetting(GameLightTimeSetting*, GameLightTimeSetting*, GameLightTimeSetting*);
	void updateSunType();
	void updateSpotType();
	void updatePosition(Viewport*);

	// _00      = VTBL
	// _00-_50  = LightMgr
	u8 _50[0x2344 - 0x50];
	FogMgr* m_fogMgr; // _2344
};
} // namespace Game

#endif
