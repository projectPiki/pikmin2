#ifndef _GAME_GAMELIGHTSETTING_H
#define _GAME_GAMELIGHTSETTING_H

#include "types.h"
#include "Parameters.h"
#include "stream.h"
#include "BaseParm.h"

namespace Game {
struct GameLightSettingBase {
	struct Settings : public Parameters {
		inline Settings()
		    : Parameters(nullptr, "ColorParms")
		    , mRed(this, 'u800', "赤", 127, 0, 255)
		    , mGreen(this, 'u801', "緑", 127, 0, 255)
		    , mBlue(this, 'u802', "青", 127, 0, 255)
		    , mAlpha(this, 'u803', "アルファ", 255, 0, 255)
		{
		}

		Parm<int> mRed;   // _0C, u800
		Parm<int> mGreen; // _34, u801
		Parm<int> mBlue;  // _5C, u802
		Parm<int> mAlpha; // _84, u803
	};

	Settings mSettings; // _00
	// _B0 = VTBL

	virtual void read(Stream& stream) // _08 (weak)
	{
		mSettings.read(stream);
	}

	inline void getColor(Color4& color)
	{
		color.r = mSettings.mRed();
		color.g = mSettings.mGreen();
		color.b = mSettings.mBlue();
		color.a = mSettings.mAlpha();
	}
};

struct GameDiffuseLightSetting : public GameLightSettingBase {
	inline GameDiffuseLightSetting()
	{
		mSettings.mRed.mValue   = 200;
		mSettings.mGreen.mValue = 200;
		mSettings.mBlue.mValue  = 200;
	}

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

// this genuinely doesn't inherit from GameLightSettingBase for some reason
struct GameFogSetting {
	struct Settings : public Parameters {
		inline Settings()
		    : Parameters(nullptr, "ColorParms")
		    , mRed(this, 'u800', "赤", 127, 0, 255)
		    , mGreen(this, 'u801', "緑", 127, 0, 255)
		    , mBlue(this, 'u802', "青", 127, 0, 255)
		    , mAlpha(this, 'u803', "アルファ", 255, 0, 255)
		{
		}

		Parm<int> mRed;   // _0C, u800
		Parm<int> mGreen; // _34, u801
		Parm<int> mBlue;  // _5C, u802
		Parm<int> mAlpha; // _84, u803
	};

	struct GameFogParms : public Parameters {
		inline GameFogParms()
		    : Parameters(nullptr, "GameFogParms")
		    , mStartZ(this, 'f000', "開始z値", 1000.0f, 0.0f, 15000.0f)
		    , mEndZ(this, 'f001', "終了z値", 15000.0f, 0.0f, 15000.0f)
		{
		}

		Parm<f32> mStartZ; // _BC, f000
		Parm<f32> mEndZ;   // _E4, f001
	};

	GameFogSetting()
	    : mSettings()
	    , mFogParms()
	{
	}

	Settings mSettings;     // _00
	GameFogParms mFogParms; // _B0
	// _110 = VTBL

	virtual void read(Stream& stream) // _08 (weak)
	{
		mSettings.read(stream);
		mFogParms.read(stream);
	}

	inline void getColor(Color4& color)
	{
		color.r = mSettings.mRed();
		color.g = mSettings.mGreen();
		color.b = mSettings.mBlue();
		color.a = mSettings.mAlpha();
	}
};

struct GameLightAmbientSetting : public GameLightSettingBase {
	inline GameLightAmbientSetting()
	{
		mSettings.mRed.mValue   = 32;
		mSettings.mGreen.mValue = 32;
		mSettings.mBlue.mValue  = 32;
	}

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

struct GameShadowSetting {
	struct Settings : public Parameters {
		inline Settings()
		    : Parameters(nullptr, "ColorParms")
		    , mRed(this, 'u800', "赤", 127, 0, 255)
		    , mGreen(this, 'u801', "緑", 127, 0, 255)
		    , mBlue(this, 'u802', "青", 127, 0, 255)
		    , mAlpha(this, 'u803', "アルファ", 255, 0, 255)
		{
		}

		Parm<int> mRed;   // _0C, u800
		Parm<int> mGreen; // _34, u801
		Parm<int> mBlue;  // _5C, u802
		Parm<int> mAlpha; // _84, u803
	};

	inline GameShadowSetting()
	{
		mSettings.mRed.mValue   = 32;
		mSettings.mGreen.mValue = 32;
		mSettings.mBlue.mValue  = 32;
		mSettings.mAlpha.mValue = 128;
	}

	Settings mSettings; // _00
	// _B0 = VTBL

	virtual void read(Stream& stream) // _08 (weak)
	{
		mSettings.read(stream);
	}

	inline void getColor(Color4& color)
	{
		color.r = mSettings.mRed();
		color.g = mSettings.mGreen();
		color.b = mSettings.mBlue();
		color.a = mSettings.mAlpha();
	}
};

struct GameSpecLightSetting : public GameLightSettingBase {
	inline GameSpecLightSetting()
	{
		mSettings.mRed.mValue   = 255;
		mSettings.mGreen.mValue = 255;
		mSettings.mBlue.mValue  = 255;
	}

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
};

struct GameSpotLightSetting : public GameLightSettingBase {
	struct SpotParms : public Parameters {
		inline SpotParms()
		    : Parameters(nullptr, "SpotParms")
		    , mCutOff(this, 'f000', "カットオフ", 60.0f, 0.0f, 90.0f)
		{
		}

		Parm<f32> mCutOff; // _C0, f000
	};

	inline GameSpotLightSetting()
	{
		mSettings.mRed.mValue   = 155;
		mSettings.mGreen.mValue = 155;
		mSettings.mBlue.mValue  = 155;
	}

	virtual void read(Stream& stream) // _08 (weak)
	{
		mSettings.read(stream);
		mSpotParms.read(stream);
	}

	// _B0      = VTBL
	// _00-_B4  = GameLightSettingBase
	SpotParms mSpotParms; // _B4
};
} // namespace Game

#endif
