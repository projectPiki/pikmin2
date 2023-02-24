#ifndef _GAME_GAMELIGHT_H
#define _GAME_GAMELIGHT_H

#include "types.h"
#include "Light.h"
#include "CNode.h"
#include "Game/GameLightSetting.h"
#include "id32.h"

struct Color4;

namespace Game {
struct GameLightMgr;
struct TimeMgr;
struct PlayCamera;

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
	GameLightEventNode()
	    : CNode("no_name") // lol.
	    , _18(0)
	    , _19(0)
	{
		_18 = 0;
		_18 |= (0x1 | 0x2);
		_19 = 0;
		_19 |= (0x1);
		_1C = 1.5f;
		_20 = 1.5f;
		_24 = 1.5f;
		_28 = 0.5f;
		_2C = 2.0f;
		_30 = 0.0f;
		_34 = 1024.0f;
		_38 = 0;
		_3C = 500.0f;
	}

	virtual ~GameLightEventNode() { } // _08 (weak)

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
	struct MoveParms : public Parameters {
		inline MoveParms()
		    : Parameters(nullptr, "MoveParms")
		    , mDistance(this, 'f000', "光源までの距離", 1000.0f, 0.0f, 30000.0f) // 'distance to light source'
		{
		}

		Parm<f32> mDistance; // _24, f000
	};

	GameLightSpotSetting(char* name);

	virtual ~GameLightSpotSetting() { } // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	MoveParms mMoveParms;                  // _18
	GameSpotLightSetting mSpotLight1;      // _50
	GameSpotLightSetting mSpotLight2;      // _13C
	GameSpecLightSetting mSpecLight;       // _228
	GameLightAmbientSetting mAmbientLight; // _2DC
	GameFogSetting mFog;                   // _390
	GameShadowSetting mShadow;             // _4A4
};

struct GameLightTimeSetting : public CNode {
	GameLightTimeSetting();

	virtual ~GameLightTimeSetting() { } // _08 (weak)

	GameDiffuseLightSetting mDiffuseLight1; // _18
	GameDiffuseLightSetting mDiffuseLight2; // _CC
	GameSpecLightSetting mSpecLight;        // _180
	GameLightAmbientSetting mAmbientLight;  // _234
	GameFogSetting mFog;                    // _2E8
	GameShadowSetting mShadow;              // _3FC
};

struct GameLightSunSetting : public CNode {
	struct MoveParms : public Parameters {
		inline MoveParms()
		    : Parameters(nullptr, "MoveParms")
		    , mDistance(this, 'f000', "光源までの距離", 20000.0f, 0.0f, 30000.0f) // 'distance to light source'
		    , mSunriseAngle(this, 'f001', "日の出角度", 20.0f, 0.0f, 360.0f)      // 'sunrise angle'
		    , mSunsetAngle(this, 'f002', "日の入角度", 160.0f, 0.0f, 360.0f)      // 'sunset angle'
		{
		}

		Parm<f32> mDistance;     // _24, f000
		Parm<f32> mSunriseAngle; // _4C, f001
		Parm<f32> mSunsetAngle;  // _74, f002
	};

	inline GameLightSunSetting(char** labels)
	    : CNode("太陽タイプ設定")
	{
		for (int i = 0; i < 5; i++) {
			mLightTimes[i].mName = labels[i];
			add(&mLightTimes[i]);
		}
	}

	virtual ~GameLightSunSetting() { } // _08 (weak)

	// _00     = VTBL
	// _00-_18 = CNode
	MoveParms mMoveParms;                // _18
	GameLightTimeSetting mLightTimes[5]; // _A0, 0=night, 1=morning, 2=noon, 3=evening, 4=demo
};

struct GameLightMgrSetting : public CNode {
	GameLightMgrSetting();

	virtual ~GameLightMgrSetting() { } // _08 (weak)
	virtual void read(Stream&);        // _10

	void updateNode();
	void readOldVersion(ID32, Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	bool mIsCave;                           // _18
	GameLightSunSetting mSunLight;          // _1C
	GameLightSpotSetting mStellarSpotLight; // _182C
	GameLightSpotSetting mRegularSpotLight; // _1D84
};

struct GameLightMgr : public LightMgr {
	GameLightMgr(char* name);

	virtual ~GameLightMgr() { }  // _08 (weak)
	virtual void update();       // _10
	virtual void set(Graphics&); // _14

	void start();
	GameLightEventNode* createEventLight(GameLightEventArg&);
	void loadParm(Stream&);
	void calcSetting(GameLightTimeSetting*, GameLightTimeSetting*, GameLightTimeSetting*);
	void updateSunType();
	void updateSpotType();
	void updatePosition(Viewport*);

	// _00      = VTBL
	// _00-_50  = LightMgr
	LightObj* mMainLight;            // _50
	LightObj* mSubLight;             // _54
	LightObj* mSpecLight;            // _58
	GameLightMgrSetting mSettings;   // _5C
	TimeMgr* mTimeMgr;               // _2338
	PlayCamera* mCamera;             // _233C
	f32 _2340;                       // _2340
	FogMgr* mFogMgr;                 // _2344
	Color4 mShadowColor;             // _2348
	BitFlag<u16> mFlags;             // _234C
	f32 _2350;                       // _2350, parm ratio?
	f32 _2354;                       // _2354, cos ratio?
	GameLightEventNode* mEventNodes; // _2358, array of 10?
	CNode _235C;                     // _235C
	CNode _2374;                     // _2374
	Vector3f _238C[2];               // _238C
};
} // namespace Game

#endif
