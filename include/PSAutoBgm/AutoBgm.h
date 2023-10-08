#ifndef _PSAUTOBGM_AUTOBGM_H
#define _PSAUTOBGM_AUTOBGM_H

#include "PSSystem/SeqTrack.h"
#include "types.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/PSBgmTask.h"
#include "PSAutoBgm/Conductor.h"
#include "PSAutoBgm/MeloArr.h"

namespace PSAutoBgm {

struct AutoBgmSeqTrackRoot : public PSSystem::SeqTrackRoot {
	AutoBgmSeqTrackRoot(ConductorMgr* mgr)
	{
		mDataMgr = mgr;
		P2ASSERTLINE(755, mgr);
	}

	virtual u16 beatUpdate()
	{
		SeqTrackRoot::beatUpdate();
		P2ASSERTLINE(760, mDataMgr->_18);
	} // _14 (weak)

	// _00      = VTABLE
	// _04-_2C8 = SeqTrackRoot
};

/**
 * @size = 0x350
 */
struct AutoBgm : public PSSystem::DirectedBgm {
	AutoBgm(const char*, const char*, const JAInter::SoundInfo&, JADUtility::AccessMode, PSSystem::DirectorMgrBase*);

	virtual ~AutoBgm() { mHeap->free(nullptr); }                                                          // _08 (weak)
	virtual void scene1st(PSSystem::TaskChecker*);                                                        // _10
	virtual void startSeq();                                                                              // _14
	virtual void pauseOn(PSSystem::SeqBase::PauseMode);                                                   // _1C
	virtual void pauseOff();                                                                              // _20
	virtual u8 getCastType() { return 3; }                                                                // _24 (weak)
	virtual PSSystem::SeqTrackRoot* newSeqTrackRoot() { return new AutoBgmSeqTrackRoot(&mConductorMgr); } // _44 (weak)

	void loadConductor(PSSystem::TaskChecker*);
	void loadedCallback(u32, u32);

	void setPikiMaskNum(u8* cond)
	{
		int num = 0;
		for (int i = 0; i < 16; i++) {
			if (cond[i]) {
				num++;
			}
		}
		mPikiMaskNum = num;
	}

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_B8  = DirectedBgm
	ConductorMgr mConductorMgr;  // _B8
	u8 _328[0x8];                // _328 - unknown
	char* mConductorFilePath;    // _330 (.cnd)
	PSSystem::TaskChecker* _334; // _334
	JKRHeap* mHeap;              // _338
	MeloArrMgr mMeloArr;         // _33C
	u16 mPikiMaskNum;            // _34C - unknown
	u8 _34E;                     // _34E - unknown
	u8 _34F;                     // _34F - might be padding
};

} // namespace PSAutoBgm

#endif
