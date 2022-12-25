#ifndef _EFX_TNAVIEFFECT_H
#define _EFX_TNAVIEFFECT_H

#include "efx/TFueact.h"
#include "efx/TCursor.h"
#include "efx/TOrima.h"
#include "efx/Toe.h"

namespace efx {
enum NaviEffectFlags {
	NAVIFX_Unk1  = 0x1,
	NAVIFX_Unk2  = 0x2,
	NAVIFX_Unk3  = 0x4,
	NAVIFX_Unk4  = 0x8,
	NAVIFX_Unk32 = 0x80000000,
};

struct TNaviEffect {
	TNaviEffect();

	enum enumNaviType {
		NAVITYPE_Unk0 = 0,
	};

	void setNaviType(enumNaviType);
	void createLight_(Mtx);
	void updateHamon_();
	void init(Vector3f*, Mtx, Vector3f*, enumNaviType);

	inline void setFlag(u32 flag) { m_flags |= flag; }

	inline void resetFlag(u32 flag) { m_flags &= ~flag; }

	inline bool isFlag(u32 flag) { return m_flags & flag; }

	void createLight()
	{
		setFlag(NAVIFX_Unk2);
		createLight_(m_beaconMtx->m_matrix.mtxView);
	}

	u32 m_flags;               // _00
	u32 _04;                   // _04
	Vector3f* _08;             // _08
	Vector3f* _0C;             // _0C
	Matrixf* m_beaconMtx;      // _10
	Matrixf* m_headMtx;        // _14
	u32 _18;                   // _18, unknown
	Vector3f m_hamonPosition;  // _1C
	ToeHamonA m_hamonA;        // _28
	ToeHamonB m_hamonB;        // _44
	TFueact m_fueact;          // _60
	TCursor m_cursor;          // _AC
	TOrimaLight m_light;       // _33C
	TOrimaLightAct m_lightAct; // _36C
	TOrimadamage m_damage;     // _39C
};

} // namespace efx

#endif
