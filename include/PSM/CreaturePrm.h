#ifndef _PSM_CREATUREPRM_H
#define _PSM_CREATUREPRM_H

#include "PSSystem/PSCommon.h"
#include "PSGame/SoundTable.h"

namespace PSM {
struct CreaturePrm : public PSSystem::SingletonBase<CreaturePrm> {
	CreaturePrm() { mPersp.set(1.0f, 400.0f, 0.8f, 700.0f, 0.0f); }

	virtual ~CreaturePrm() { } // _08 (weak)

	// _00 = VTBL
	PSGame::SoundTable::SePerspInfo mPersp; // _04

	static f32 cSeFxMix;
	static f32 cSeFxMix_cave;
	static f32 cNokouDistance;

	static const f32 cVolMaxDist_Kehai[7];
	static const f32 cVolMaxDist_Battle[7];
	static const f32 cVolZeroDist_Kehai[7];
	static const f32 cVolZeroDist_Battle[7];
	static const f32 cVolZeroDist_InnerSize_Kehai[7];
};

} // namespace PSM

#endif
