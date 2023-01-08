#include "EffectAnimator.h"
#include "efx/TKechappy.h"
#include "JSystem/JUT/JUTException.h"

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

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
Obj::Obj()
    : CNode("effectObj")
    , m_data(nullptr)
    , m_count(0)
{
}

/*
 * --INFO--
 * Address:	........
 * Size:	000088
 */
void Obj::setup(KeyData* data)
{
	int count         = 0;
	m_count           = 0;
	KeyData* currData = data;
	for (count; currData->m_frame >= 0.0f; currData++, count++) { }

	m_count = count;
	m_data  = data;

	for (int i = 0; i < m_count; i++) { }
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
// this inline needs fixing up to fix the weak update functions.
f32 Obj::calcValue(f32 keyFrame)
{
	int idx = -1;
	for (int i = 0; i < m_count; i++) {
		if (keyFrame <= m_data[i].m_frame) {
			idx = i;
			break;
		}
	}

	P2ASSERTLINE(267, idx != -1);

	if (idx == 0) {
		return m_data[idx].m_scale;
	} else {
		KeyData* prevData = &m_data[idx - 1];
		KeyData* currData = &m_data[idx];

		// just this calculation here needs fixing.
		f32 ratio     = ((keyFrame - prevData->m_frame) / (currData->m_frame - (keyFrame - prevData->m_frame)));
		f32 scaleDiff = (currData->m_scale - prevData->m_scale);
		return ratio * scaleDiff + prevData->m_scale;
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

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
ObjMgr::ObjMgr() { m_nodes.clearRelations(); }

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void ObjMgr::update(efx::TKechappyTest* testFX, f32 keyFrame)
{
	FOREACH_NODE(Obj, m_nodes.m_child, obj) { obj->update(testFX, keyFrame); }
}

/*
 * --INFO--
 * Address:	80132CB8
 * Size:	0002F8
 */
void ObjMgr::setup(ObjMgrData* mgrData)
{
	Obj* vibration = new VibrationObj;
	vibration->setup(mgrData->m_vibrationData);
	m_nodes.add(vibration);

	Obj* bristle = new BristleObj;
	bristle->setup(mgrData->m_bristleData);
	m_nodes.add(bristle);

	Obj* length = new LengthObj;
	length->setup(mgrData->m_lengthData);
	m_nodes.add(length);
}

/*
 * --INFO--
 * Address:	80133010
 * Size:	00000C
 */
Mgr::Mgr() { m_mgrs = nullptr; }

/*
 * --INFO--
 * Address:	8013301C
 * Size:	0000B4
 */
void Mgr::setup()
{
	m_mgrs = new ObjMgr*[9];
	for (int i = 0; i < 9; i++) {
		if (sEffectAnimData[i]) {
			m_mgrs[i] = new ObjMgr;
			m_mgrs[i]->setup(sEffectAnimData[i]);
		} else {
			m_mgrs[i] = nullptr;
		}
	}
}

/*
 * --INFO--
 * Address:	801330D0
 * Size:	0000E4
 */
void Mgr::update(efx::TKechappyTest* testFX, int index, f32 keyFrame)
{
	P2ASSERTLINE(359, (u32)index <= 9);
	ObjMgr* objMgr = m_mgrs[index];
	if (!objMgr) {
		testFX->setSpread(0.0f);
		testFX->setAwayFromCenterSpeed(0.25f);
		testFX->setGlobalParticleScale(1.0f);
	} else {
		objMgr->update(testFX, keyFrame);
	}
}
} // namespace EffectAnimator
