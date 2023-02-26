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

enum LightEventFlags {
	LIGHTEVENT_Unk1 = 0x1,
	LIGHTEVENT_Unk2 = 0x2,
	LIGHTEVENT_Unk3 = 0x4,
	LIGHTEVENT_Unk4 = 0x8,
};

enum LightEventTypes {
	LIGHTTYPE_Main     = 0x1,
	LIGHTTYPE_Sub      = 0x2,
	LIGHTTYPE_Specular = 0x4,
	LIGHTTYPE_Ambient  = 0x8,
	LIGHTTYPE_Fog      = 0x10,
	LIGHTTYPE_Shadow   = 0x20,
};

struct GameLightEventArg {
	inline GameLightEventArg()
	    : mEventFlag(0)
	    , mLightTypeFlag(0)
	{
		setEvent(LIGHTEVENT_Unk1 | LIGHTEVENT_Unk2);
		mLightTypeFlag = 0;
		setLightType(LIGHTTYPE_Main);
		setEvent(LIGHTEVENT_Unk1);
		_10 = 0.5f;
		_04 = 1.5f;
		_08 = 1.5f;
		_0C = 1.5f;
		_14 = 2.0f;
		_18 = 0.0f;
		_1C = 1024.0f;
		_20 = nullptr;
		_24 = 500.0f;

		setLightType(LIGHTTYPE_Main);
		_10 = 3.0f;
		_14 = 3.0f;
		setEvent(LIGHTEVENT_Unk2);
		_04 = 1.25f;
		_08 = 1.25f;
		_0C = 1.25f;
	}

	inline void setEvent(u32 flag) { mEventFlag |= flag; }
	inline void resetEvent(u32 flag) { mEventFlag &= ~flag; }
	inline bool isEvent(u32 flag) const { return mEventFlag & flag; }

	inline void setLightType(u32 flag) { mLightTypeFlag |= flag; }
	inline void resetLightType(u32 flag) { mLightTypeFlag &= ~flag; }
	inline bool isLightType(u32 flag) const { return mLightTypeFlag & flag; }

	// inline void init()
	// {
	// 	setLightType(LIGHTTYPE_Main);
	// 	_10 = 3.0f;
	// 	_14 = 3.0f;
	// 	setEvent(LIGHTEVENT_Unk2);
	// 	_04 = 1.25f;
	// 	_08 = 1.25f;
	// 	_0C = 1.25f;
	// }

	u8 mEventFlag;     // _00
	u8 mLightTypeFlag; // _01
	f32 _04;           // _04
	f32 _08;           // _08
	f32 _0C;           // _0C
	f32 _10;           // _10, start time?
	f32 _14;           // _14, end time?
	f32 _18;           // _18, start Z?
	f32 _1C;           // _1C, end Z?
	Vector3f* _20;     // _20, unknown
	f32 _24;           // _24, distance?
};

struct GameLightEventNode : public CNode {
	GameLightEventNode()
	    : CNode("no_name") // lol.
	    , mEventFlag(0)
	    , mLightTypeFlag(0)
	{
		mEventFlag = 0;
		setEvent(LIGHTEVENT_Unk1 | LIGHTEVENT_Unk2);
		mLightTypeFlag = 0;
		setLightType(LIGHTTYPE_Main);
		_1C = 1.5f;
		_20 = 1.5f;
		_24 = 1.5f;
		_28 = 0.5f;
		_2C = 2.0f;
		_30 = 0.0f;
		_34 = 1024.0f;
		_38 = nullptr;
		_3C = 500.0f;
	}

	// virtual ~GameLightEventNode() { } // _08 (weak)

	bool update(GameLightMgr*);
	void updateCommon(GameLightMgr*, bool);
	void calcColor(Color4*);

	void start(GameLightEventArg&);

	inline void setEvent(u32 flag) { mEventFlag |= flag; }
	inline void resetEvent(u32 flag) { mEventFlag &= ~flag; }
	inline bool isEvent(u32 flag) const { return mEventFlag & flag; }

	inline void setLightType(u32 flag) { mLightTypeFlag |= flag; }
	inline void resetLightType(u32 flag) { mLightTypeFlag &= ~flag; }
	inline bool isLightType(u32 flag) const { return mLightTypeFlag & flag; }

	// _00      = VTBL
	// _00-_18  = CNode
	u8 mEventFlag;     // _18
	u8 mLightTypeFlag; // _19
	f32 _1C;           // _1C, color 1 scale?
	f32 _20;           // _20, color 2 scale?
	f32 _24;           // _24, color 3 scale?
	f32 _28;           // _28
	f32 _2C;           // _2C
	f32 _30;           // _30, nearZ?
	f32 _34;           // _34, farZ?
	Vector3f* _38;     // _38
	f32 _3C;           // _3C
	f32 _40;           // _40, timer?
	f32 _44;           // _44, angle?
	f32 _48;           // _48
	int _4C;           // _4C
};

struct GameLightSpotSetting : public CNode {
	struct MoveParms : public Parameters {
		inline MoveParms()
		    : Parameters(nullptr, "MoveParms")
		    , mDistance(this, 'f000', "åıåπÇ‹Ç≈ÇÃãóó£", 1000.0f, 0.0f, 30000.0f) // 'distance to light source'
		{
		}

		Parm<f32> mDistance; // _24, f000
	};

	GameLightSpotSetting(char* name);

	// virtual ~GameLightSpotSetting() { } // _08 (weak)

	void read(Stream& stream);

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

	// virtual ~GameLightTimeSetting() { } // _08 (weak)

	// unused/inlined but required
	void read(Stream& stream);

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
		    , mDistance(this, 'f000', "åıåπÇ‹Ç≈ÇÃãóó£", 20000.0f, 0.0f, 30000.0f) // 'distance to light source'
		    , mSunriseAngle(this, 'f001', "ì˙ÇÃèoäpìx", 20.0f, 0.0f, 360.0f)      // 'sunrise angle'
		    , mSunsetAngle(this, 'f002', "ì˙ÇÃì¸äpìx", 160.0f, 0.0f, 360.0f)      // 'sunset angle'
		{
		}

		Parm<f32> mDistance;     // _24, f000
		Parm<f32> mSunriseAngle; // _4C, f001
		Parm<f32> mSunsetAngle;  // _74, f002
	};

	GameLightSunSetting(char* labels);

	// virtual ~GameLightSunSetting() { } // _08 (weak)

	// unused/inlined but required
	void read(Stream& stream);

	// _00     = VTBL
	// _00-_18 = CNode
	MoveParms mMoveParms;                // _18
	GameLightTimeSetting mLightTimes[5]; // _A0, 0=night, 1=morning, 2=noon, 3=evening, 4=demo
};

struct GameLightMgrSetting : public CNode {
	GameLightMgrSetting();

	// virtual ~GameLightMgrSetting() { } // _08 (weak)
	virtual void read(Stream&); // _10

	void updateNode();
	void readOldVersion(ID32, Stream&);

	// _00     = VTBL
	// _00-_18 = CNode
	u8 mIsCave;                             // _18
	GameLightSunSetting mSunLight;          // _1C
	GameLightSpotSetting mStellarSpotLight; // _182C
	GameLightSpotSetting mRegularSpotLight; // _1D84
};

struct GameLightMgr : public LightMgr {
	enum GameLightFlags {
		GAMELIGHT_Unk1 = 0x1,
		GAMELIGHT_Unk2 = 0x2,
		GAMELIGHT_Unk3 = 0x4,
		GAMELIGHT_Unk4 = 0x8,
		GAMELIGHT_Unk5 = 0x10,
		GAMELIGHT_Unk6 = 0x20,
	};

	GameLightMgr(char* name);

	// virtual ~GameLightMgr() { }  // _08 (weak)
	virtual void update();       // _10
	virtual void set(Graphics&); // _14

	void start();
	GameLightEventNode* createEventLight(GameLightEventArg&);
	void loadParm(Stream&);
	void calcSetting(GameLightTimeSetting*, GameLightTimeSetting*, GameLightTimeSetting*);
	void updateSunType();
	void updateSpotType();
	void updateEventLight();
	void updatePosition(Viewport*);

	inline void getViewportPos(Vector3f& pos, int i) { pos = _238C[i]; }

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }

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
