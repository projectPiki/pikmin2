#ifndef _PSAUTOBGM_AUTOBGM_H
#define _PSAUTOBGM_AUTOBGM_H

#include "types.h"
#include "PSSystem/PSBgm.h"
#include "PSSystem/Seq.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JAI/JAInter.h"
#include "PSAutoBgm/Conductor.h"
#include "PSAutoMgr/MeloArr.h"

namespace JADUtility {
struct AccessMode;
} // namespace JADUtility

namespace PSAutoBgm {

/**
 * @size = 0x350
 */
struct AutoBgm : public PSSystem::DirectedBgm {
	AutoBgm(const char*, const char*, const JAInter::SoundInfo&, JADUtility::AccessMode, PSSystem::DirectorMgrBase*);

	virtual ~AutoBgm();                                 // _08 (weak)
	virtual void scene1st(PSSystem::TaskChecker*);      // _10
	virtual void startSeq();                            // _14
	virtual void pauseOn(PSSystem::SeqBase::PauseMode); // _1C
	virtual void pauseOff();                            // _20
	virtual void getCastType();                         // _24 (weak)
	virtual void newSeqTrackRoot();                     // _44 (weak)

	void loadConductor(PSSystem::TaskChecker*);
	void loadedCallback(u32, u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_B8  = DirectedBgm
	ConductorMgr _B8;  // _B8
	u8 _328[0x8];      // _328 - unknown
	char* _330;        // _330 - cnd file name?
	TaskChecker* _334; // _334
	u8* _338;          // _338 - str?
	MeloArrMgr _33C;   // _33C
	u16 _34C;          // _34C - unknown
	u8 _34E;           // _34E - unknown
	u8 _34F;           // _34F - might be padding
};

struct AutoBgmSeqTrackRoot : public PSSystem::SeqTrackRoot {
	virtual void beatUpdate(); // _14 (weak)
	                           // _00      = VTABLE
	                           // _04-_2C8 = SeqTrackRoot
};

} // namespace PSAutoBgm

#endif
