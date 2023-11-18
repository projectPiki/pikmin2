#ifndef _PSM_CREATUREPRM_H
#define _PSM_CREATUREPRM_H

#include "PSSystem/PSCommon.h"
#include "PSGame/SoundTable.h"

namespace PSM {
struct CreaturePrm : public PSSystem::SingletonBase<CreaturePrm> {
	CreaturePrm()
	{
		sInstance = this;
		mPersp.set(1.0f, 400.0f, 0.8f, 700.0f, 0.0f);
	}

	virtual ~CreaturePrm() { } // _08 (weak)

	// _00 = VTBL
	PSGame::SoundTable::SePerspInfo mPersp; // _04

	static f32 cSeFxMix;
};

} // namespace PSM

#endif
