#ifndef _EFX_TNAVIEFFECT_H
#define _EFX_TNAVIEFFECT_H

#include "efx/TFueact.h"
#include "efx/TCursor.h"
#include "efx/TOrima.h"
#include "efx/Toe.h"

namespace efx {
struct TNaviEffect {
	TNaviEffect();

	enum enumNaviType { _00 = 0 };

	void setNaviType(enumNaviType);
	void createLight_(Mtx);

	void createLight()
	{
		m_flags |= 2;
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
