#ifndef _EFX_TNAVIEFFECT_H
#define _EFX_TNAVIEFFECT_H

#include "efx/TFueact.h"
#include "efx/TCursor.h"
#include "efx/TOrima.h"
#include "efx/Toe.h"
#include "efx/TPk.h"
#include "BitFlag.h"

namespace efx {
enum NaviEffectFlags {
	NAVIFX_InWater = 0x1,
	NAVIFX_LightOn = 0x2,
	NAVIFX_Unk3    = 0x4,
	NAVIFX_Unk4    = 0x8,
	NAVIFX_Unk5    = 0x10,
	NAVIFX_Unk6    = 0x20,
	NAVIFX_IsSaved = 0x80000000,
};

struct TNaviEffect {
	TNaviEffect()
	    : mPos(nullptr)
	    , mNaviPos(nullptr)
	    , mBeaconMtx(nullptr)
	    , mHeadMtx(nullptr)
	    , mHeight(0)
	    , mCursor(0)
	{
	}

	enum enumNaviType { NAVITYPE_Olimar, NAVITYPE_Louie, NAVITYPE_President, NAVITYPE_Fuebug };

	void init(Vector3f*, Mtx, Vector3f*, enumNaviType);

	void updateHamon_();

	void killHamonA_();
	void killHamonB_();
	void killLight_();
	void killLightAct_();
	void killCursor_();
	void killFueact_();
	void update();
	void createCursor_(Vector3f, f32);
	void updateCursor_(Vector3f, f32);
	void createFueact_(Mtx, Vector3f*);
	void createOrimadamage_(Mtx);
	void killOrimadamage_();

	void createLight_(Mtx);
	void createLightAct_(Mtx);
	void createHamonA_(Vector3f*);
	void createHamonB_(Vector3f*);
	void setNaviType(enumNaviType);

	inline void setFlag(u32 flag) { mFlags.typeView |= flag; }

	inline void resetFlag(u32 flag) { mFlags.typeView &= ~flag; }

	inline bool isFlag(u32 flag) { return mFlags.typeView & flag; }

	inline void createLight()
	{
		setFlag(NAVIFX_LightOn);
		createLight_(mBeaconMtx->mMatrix.mtxView);
	}

	inline void killLight()
	{
		resetFlag(NAVIFX_LightOn);
		killLight_();
	}

	inline void saveFlags()
	{
		mSavedFlags.typeView = mFlags.typeView;
		mFlags.clear();
		setFlag(NAVIFX_IsSaved);
	}

	inline void restoreFlags()
	{
		mFlags.typeView = mSavedFlags.typeView;
		resetFlag(NAVIFX_IsSaved);
	}

	inline void enterWater(bool isInWater)
	{
		setFlag(efx::NAVIFX_InWater);
		updateHamon_();

		if (!isInWater) {
			createSimpleDive(mHamonPosition);
		}
	}

	inline void setMovieEffect()
	{
		if (isFlag(efx::NAVIFX_IsSaved)) {
			restoreFlags();
		}

		if (isFlag(efx::NAVIFX_InWater)) {
			enterWater(isFlag(efx::NAVIFX_InWater));
		}

		if (isFlag(efx::NAVIFX_LightOn)) {
			createLight();
		}
	}

	inline void updateCursor(f32 radius) { updateCursor_(*mNaviPos, radius); }

	BitFlag<u32> mFlags;      // _00
	BitFlag<u32> mSavedFlags; // _04
	Vector3f* mPos;           // _08
	Vector3f* mNaviPos;       // _0C
	Matrixf* mBeaconMtx;      // _10
	Matrixf* mHeadMtx;        // _14
	f32* mHeight;             // _18
	Vector3f mHamonPosition;  // _1C
	ToeHamonA mHamonA;        // _28
	ToeHamonB mHamonB;        // _44
	TFueact mFueact;          // _60
	TCursor mCursor;          // _AC
	TOrimaLight mLight;       // _33C
	TOrimaLightAct mLightAct; // _36C
	TOrimadamage mDamage;     // _39C
};

} // namespace efx

#endif
