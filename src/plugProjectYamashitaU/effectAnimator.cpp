#include "EffectAnimator.h"
#include "efx/TKechappy.h"
#include "P2Macros.h"

namespace EffectAnimator {
namespace { // tables
/// MOVE1
KeyData sVibration_Move1[] = { { 0.0f, 0.0f }, { 50.0f, 0.0f }, { -1.0f, 0.0f } };

KeyData sBristle_Move1[] = { { 0.0f, 0.25f },  { 8.0f, 0.3f },  { 13.0f, 0.12f }, { 22.0f, 0.3f }, { 24.0f, 0.3f },
	                         { 29.0f, 0.12f }, { 36.0f, 0.3f }, { 50.0f, 0.25f }, { -1.0f, 0.0f } };

KeyData sLength_Move1[] = { { 0.0f, 1.0f }, { 50.0f, 1.0f }, { -1.0f, 0.0f } };

ObjMgrData sMove1[] = { sVibration_Move1, sBristle_Move1, sLength_Move1 };

/// WAITACT1
KeyData sVibration_Waitact1[] = { { 0.0f, 0.0f }, { 10.0f, 0.0f }, { 14.0f, 0.6f }, { 19.0f, 0.0f }, { 25.0f, 0.0f }, { -1.0f, 0.0f } };

KeyData sBristle_Waitact1[] = { { 0.0f, 0.25f }, { 25.0f, 0.25f }, { -1.0f, 0.0f } };

KeyData sLength_Waitact1[] = { { 0.0f, 1.0f }, { 25.0f, 1.0f }, { -1.0f, 0.0f } };

ObjMgrData sWaitact1[] = { sVibration_Waitact1, sBristle_Waitact1, sLength_Waitact1 };

/// ATTACK
KeyData sVibration_Attack[] = { { 0.0f, 0.0f }, { 32.0f, 0.0f }, { 45.0f, 0.3f }, { 60.0f, 0.0f }, { -1.0f, 0.0f } };

KeyData sBristle_Attack[] = { { 0.0f, 0.25f }, { 20.0f, 0.15f }, { 40.0f, 0.15f }, { 50.0f, 0.85f }, { 60.0f, 0.25f }, { -1.0f, 0.0f } };

KeyData sLength_Attack[] = { { 0.0f, 1.0f }, { 60.0f, 1.0f }, { -1.0f, 0.0f } };

ObjMgrData sAttack[] = { sVibration_Attack, sBristle_Attack, sLength_Attack };

/// FLICK
KeyData sVibration_Flick[] = { { 0.0f, 0.0f }, { 10.0f, 1.0f }, { 30.0f, 0.5f }, { 40.0f, 0.0f }, { 80.0f, 0.0f }, { -1.0f, 0.0f } };

KeyData sBristle_Flick[] = { { 0.0f, 0.25f }, { 30.0f, 0.15f }, { 35.0f, 1.0f }, { 65.0f, 0.4f }, { 80.0f, 0.25f }, { -1.0f, 0.0f } };

KeyData sLength_Flick[] = { { 0.0f, 1.0f }, { 30.0f, 1.0f }, { 35.0f, 1.25f }, { 55.0f, 1.0f }, { 80.0f, 1.0f }, { -1.0f, 0.0f } };

ObjMgrData sFlick[] = { sVibration_Flick, sBristle_Flick, sLength_Flick };

/// TYPE1
KeyData sVibration_Type1[] = { { 0.0f, 0.0f },    { 15.0f, 0.0f },   { 20.0f, 1.0f },  { 40.0f, 0.7f },  { 50.0f, 0.0f }, { 102.0f, 0.0f },
	                           { 107.0f, 0.25f }, { 125.0f, 0.06f }, { 129.0f, 0.0f }, { 180.0f, 0.0f }, { -1.0f, 0.0f } };

KeyData sBristle_Type1[] = { { 0.0f, 0.25f },   { 15.0f, 0.2f },   { 22.0f, 2.0f },   { 30.0f, 1.8f },   { 45.0f, 0.25f }, { 70.0f, 0.12f },
	                         { 102.0f, 0.35f }, { 130.0f, 0.12f }, { 140.0f, 0.25f }, { 180.0f, 0.25f }, { -1.0f, 0.0f } };

KeyData sLength_Type1[] = { { 0.0f, 1.0f }, { 180.0f, 1.0f }, { -1.0f, 0.0f } };

ObjMgrData sType1[] = { sVibration_Type1, sBristle_Type1, sLength_Type1 };

/// EFFECT ANIM DATA
ObjMgrData* sEffectAnimData[] = { sAttack, nullptr, sFlick, sMove1, sType1, nullptr, nullptr, sWaitact1, nullptr };

} // namespace

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
Obj::Obj()
    : CNode("effectObj")
    , mData(nullptr)
    , mCount(0)
{
}

/**
 * @note Address: N/A
 * @note Size: 0x88
 */
void Obj::setup(KeyData* data)
{
	int count         = 0;
	mCount            = 0;
	KeyData* currData = data;
	for (count; currData->mFrame >= 0.0f; currData++, count++) { }

	mCount = count;
	mData  = data;

	for (int i = 0; i < mCount; i++) { }
}

/**
 * @note Address: N/A
 * @note Size: 0x104
 */
f32 Obj::calcValue(f32 keyFrame)
{
	int idx = -1;
	for (int i = 0; i < mCount; i++) {
		if (keyFrame <= mData[i].mFrame) {
			idx = i;
			break;
		}
	}

	P2ASSERTLINE(267, idx != -1);

	if (idx == 0) {
		return mData[idx].mScale;
	} else {
		KeyData* prevData = &mData[idx - 1];
		KeyData* currData = &mData[idx];

		f32 ratio     = (keyFrame - prevData->mFrame) / (currData->mFrame - prevData->mFrame);
		f32 scaleDiff = (currData->mScale - prevData->mScale);
		return ratio * scaleDiff + prevData->mScale;
	}
}

// these are defined in here, after the Obj::calcValue inline, for assert reasons.
struct BristleObj : public Obj {
	virtual ~BristleObj() { }                                     // _08 (weak)
	virtual void update(efx::TKechappyTest* testFX, f32 keyFrame) // _10 (weak)
	{
		testFX->setAwayFromCenterSpeed(calcValue(keyFrame));
	}

	// _00     = VTBL
	// _00-_20 = Obj
};

struct LengthObj : public Obj {
	virtual ~LengthObj() { }                                      // _08 (weak)
	virtual void update(efx::TKechappyTest* testFX, f32 keyFrame) // _10 (weak)
	{
		testFX->setGlobalParticleScale(calcValue(keyFrame));
	}

	// _00     = VTBL
	// _00-_20 = Obj
};

struct VibrationObj : public Obj {
	virtual ~VibrationObj() { }                                   // _08 (weak)
	virtual void update(efx::TKechappyTest* testFX, f32 keyFrame) // _10 (weak)
	{
		testFX->setSpread(calcValue(keyFrame));
	}

	// _00     = VTBL
	// _00-_20 = Obj
};

/**
 * @note Address: N/A
 * @note Size: 0x44
 */
ObjMgr::ObjMgr() { mNodes.clearRelations(); }

/**
 * @note Address: N/A
 * @note Size: 0x6C
 */
void ObjMgr::update(efx::TKechappyTest* testFX, f32 keyFrame)
{
	FOREACH_NODE(Obj, mNodes.mChild, obj) { obj->update(testFX, keyFrame); }
}

/**
 * @note Address: 0x80132CB8
 * @note Size: 0x2F8
 */
void ObjMgr::setup(ObjMgrData* mgrData)
{
	Obj* vibration = new VibrationObj;
	vibration->setup(mgrData->mVibrationData);
	mNodes.add(vibration);

	Obj* bristle = new BristleObj;
	bristle->setup(mgrData->mBristleData);
	mNodes.add(bristle);

	Obj* length = new LengthObj;
	length->setup(mgrData->mLengthData);
	mNodes.add(length);
}

/**
 * @note Address: 0x80133010
 * @note Size: 0xC
 */
Mgr::Mgr() { mMgrs = nullptr; }

/**
 * @note Address: 0x8013301C
 * @note Size: 0xB4
 */
void Mgr::setup()
{
	mMgrs = new ObjMgr*[9];
	for (int i = 0; i < 9; i++) {
		if (sEffectAnimData[i]) {
			mMgrs[i] = new ObjMgr;
			mMgrs[i]->setup(sEffectAnimData[i]);
		} else {
			mMgrs[i] = nullptr;
		}
	}
}

/**
 * @note Address: 0x801330D0
 * @note Size: 0xE4
 */
void Mgr::update(efx::TKechappyTest* testFX, int index, f32 keyFrame)
{
	P2ASSERTLINE(359, (u32)index <= 9);
	ObjMgr* objMgr = mMgrs[index];
	if (!objMgr) {
		testFX->setSpread(0.0f);
		testFX->setAwayFromCenterSpeed(0.25f);
		testFX->setGlobalParticleScale(1.0f);
	} else {
		objMgr->update(testFX, keyFrame);
	}
}
} // namespace EffectAnimator
