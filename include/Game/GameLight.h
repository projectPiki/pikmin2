#ifndef _GAME_GAMELIGHT_H
#define _GAME_GAMELIGHT_H

#include "types.h"
#include "Light.h"
#include "CNode.h"
#include "Game/GameLightSetting.h"
#include "id32.h"
#include "Game/TimeMgr.h"

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
		mGrowTime   = 0.5f;
		mRedScale   = 1.5f;
		mGreenScale = 1.5f;
		mBlueScale  = 1.5f;
		mFadeTime   = 2.0f;
		mNearZ      = 0.0f;
		mFarZ       = 1024.0f;
		mPosition   = nullptr;
		mRange      = 500.0f;

		setLightType(LIGHTTYPE_Main);
		mGrowTime = 3.0f;
		mFadeTime = 3.0f;
		setEvent(LIGHTEVENT_Unk2);
		mRedScale   = 1.25f;
		mGreenScale = 1.25f;
		mBlueScale  = 1.25f;
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

	u8 mEventFlag;       // _00
	u8 mLightTypeFlag;   // _01
	f32 mRedScale;       // _04
	f32 mGreenScale;     // _08
	f32 mBlueScale;      // _0C
	f32 mGrowTime;       // _10
	f32 mFadeTime;       // _14
	f32 mNearZ;          // _18
	f32 mFarZ;           // _1C
	Vector3f* mPosition; // _20
	f32 mRange;          // _24
};

struct GameLightEventNode : public CNode {
	enum StateID {
		LIGHTSTATE_Inactive = 0,
		LIGHTSTATE_Grow     = 1,
		LIGHTSTATE_Steady   = 2,
		LIGHTSTATE_Fade     = 3,
	};

	GameLightEventNode()
	    : CNode("no_name") // lol.
	    , mEventFlag(0)
	    , mLightTypeFlag(0)
	{
		mEventFlag = 0;
		setEvent(LIGHTEVENT_Unk1 | LIGHTEVENT_Unk2);
		mLightTypeFlag = 0;
		setLightType(LIGHTTYPE_Main);
		mRedScale   = 1.5f;
		mGreenScale = 1.5f;
		mBlueScale  = 1.5f;
		mGrowTime   = 0.5f;
		mFadeTime   = 2.0f;
		mNearZ      = 0.0f;
		mFarZ       = 1024.0f;
		mPosition   = nullptr;
		mRange      = 500.0f;
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
	u8 mEventFlag;       // _18
	u8 mLightTypeFlag;   // _19
	f32 mRedScale;       // _1C
	f32 mGreenScale;     // _20
	f32 mBlueScale;      // _24
	f32 mGrowTime;       // _28
	f32 mFadeTime;       // _2C
	f32 mNearZ;          // _30, nearZ?
	f32 mFarZ;           // _34, farZ?
	Vector3f* mPosition; // _38
	f32 mRange;          // _3C
	f32 mStateTimer;     // _40
	f32 mColorRatio;     // _44
	f32 mPeakRatio;      // _48, ratio from steady state to begin fade from
	int mState;          // _4C
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

	// virtual ~GameLightSpotSetting() { } // _08 (weak)

	void read(Stream& stream);

	// _00     = VTBL
	// _00-_18 = CNode
	MoveParms mMoveParms;                  // _18
	GameSpotLightSetting mMainLight;       // _50
	GameSpotLightSetting mSubLight;        // _13C
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

	GameDiffuseLightSetting mMainLight;    // _18
	GameDiffuseLightSetting mSubLight;     // _CC
	GameSpecLightSetting mSpecLight;       // _180
	GameLightAmbientSetting mAmbientLight; // _234
	GameFogSetting mFog;                   // _2E8
	GameShadowSetting mShadow;             // _3FC
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

	GameLightSunSetting(char* labels);

	// virtual ~GameLightSunSetting() { } // _08 (weak)

	// unused/inlined but required
	void read(Stream& stream);

	// _00     = VTBL
	// _00-_18 = CNode
	MoveParms mMoveParms;                // _18
	GameLightTimeSetting mLightTimes[5]; // _A0, see SunLightTimes enum
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

	inline void getViewPos(Vector3f& pos, int i) { pos = mViewPosition[i]; }

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }
	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }
	inline bool isFlag(u32 flag) const { return mFlags.typeView & flag; }
	inline LightObj* getMainLight() const { return mMainLight; }

	// _00      = VTBL
	// _00-_50  = LightMgr
	LightObj* mMainLight;            // _50
	LightObj* mSubLight;             // _54
	LightObj* mSpecLight;            // _58
	GameLightMgrSetting mSettings;   // _5C
	TimeMgr* mTimeMgr;               // _2338
	PlayCamera* mCamera;             // _233C
	f32 mSunColorRatio;              // _2340, 0=color 1 for time setting, 1=color 2 for time setting
	FogMgr* mFogMgr;                 // _2344
	Color4 mShadowColor;             // _2348
	BitFlag<u16> mFlags;             // _234C
	f32 mStellarIncrement;           // _2350, ticker that increases when stellar orb is gained (0->1 in increments of 0.01 per frame)
	f32 mStellarColorRatio;          // _2354, how much stellar orb 'color' to mix in, sinusoidally 0->1
	GameLightEventNode* mEventNodes; // _2358, array of 10
	CNode mRootActiveNodes;          // _235C, holds GameLightEventNodes that are 'active' (state 1-3)
	CNode mRootInactiveNodes;        // _2374, holds GameLightEventNodes that are 'inactive' (state 0)
	Vector3f mViewPosition[2];       // _238C, indexed by viewport ID
};
} // namespace Game

#endif
