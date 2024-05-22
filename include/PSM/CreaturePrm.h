#ifndef _PSM_CREATUREPRM_H
#define _PSM_CREATUREPRM_H

#include "PSSystem/PSCommon.h"
#include "PSGame/SoundTable.h"

namespace PSM {
struct CreaturePrm : public PSSystem::SingletonBase<CreaturePrm> {
	CreaturePrm();

	// virtual ~CreaturePrm() { } // _08 (weak)

	static const f32 cSeFxMix;
	static const f32 cSeFxMix_cave;
	static const f32 cNoukouDistance;

	static const f32 cVolMaxDist_Kehai[7];
	static const f32 cVolMaxDist_Battle[7];
	static const f32 cVolZeroDist_Kehai[7];
	static const f32 cVolZeroDist_Battle[7];
	static const f32 cVolZeroDist_InnerSize_Kehai[7];

	// _00 = VTBL
	PSGame::SoundTable::SePerspInfo mPersp; // _04
};

extern f32 sCamFov;
extern f32 sBoss_ViewDist;
extern f32 sBoss_ViewDistVol;
extern f32 sBoss_DistMax;

} // namespace PSM

#endif
