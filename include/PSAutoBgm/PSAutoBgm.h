#ifndef _PSAUTOBGM_AUTOBGM_H
#define _PSAUTOBGM_AUTOBGM_H

#include "PSSystem/SeqTrack.h"
#include "types.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/PSBgmTask.h"
#include "PSAutoBgm/Conductor.h"
#include "PSAutoBgm/MeloArr.h"

namespace PSAutoBgm {

struct AutoBgmSeqTrackRoot : public PSSystem::SeqTrackRoot_JumpBgm {
	AutoBgmSeqTrackRoot(ConductorMgr* mgr)
	    : PSSystem::SeqTrackRoot_JumpBgm(mJumpPort)
	{
		// mDataMgr = mgr;
		P2ASSERTLINE(755, mgr);
	}

	virtual u16 beatUpdate()
	{
		SeqTrackRoot::beatUpdate();
		P2ASSERTLINE(760, mJumpPort->_18);
	} // _14 (weak)

	// _00      = VTABLE
	// _04-_2C8 = SeqTrackRoot
};

/**
 * @size = 0x350
 */
struct AutoBgm : public PSSystem::DirectedBgm {
	AutoBgm(const char*, const char*, const JAInter::SoundInfo&, JADUtility::AccessMode, PSSystem::DirectorMgrBase*);

	virtual ~AutoBgm() { mHeap->free(mHeap, nullptr); }                                                   // _08 (weak)
	virtual void scene1st(PSSystem::TaskChecker*);                                                        // _10
	virtual void startSeq();                                                                              // _14
	virtual void pauseOn(PSSystem::SeqBase::PauseMode);                                                   // _1C
	virtual void pauseOff();                                                                              // _20
	virtual u8 getCastType() { return TYPE_AutoBgm; }                                                     // _24 (weak)
	virtual PSSystem::SeqTrackRoot* newSeqTrackRoot() { return new AutoBgmSeqTrackRoot(&mConductorMgr); } // _44 (weak)

	void loadConductor(PSSystem::TaskChecker*);
	void loadedCallback(u32, u32);

	void setPikiMaskNum(u8* cond)
	{
		u16 num = 0;
		for (u8 i = 0; i < 16; i++) {
			if (cond[i]) {
				num |= cond[i] << i;
			}
		}
		mMeloArr.mTrackMaskIds = num;
	}

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_B8  = DirectedBgm
	ConductorMgr mConductorMgr;          // _B8
	char* mConductorFilePath;            // _330 (.cnd)
	PSSystem::TaskChecker* mTaskChecker; // _334
	JKRHeap* mHeap;                      // _338
	MeloArrMgr mMeloArr;                 // _33C
};

/**
 * @size = 0x8
 */
struct ConductorArcMgr {
	ConductorArcMgr()
	{
		mArchive = nullptr;
		mArchive = JKRMountArchive("/AudioRes/Conductor.arc", JKRArchive::EMM_Dvd, JKRGetCurrentHeap(), JKRArchive::EMD_Head);
		P2ASSERTLINE(746, mArchive);
	}

	static void createInstance()
	{
		P2ASSERTLINE(726, !sInstance);
		sInstance = new ConductorArcMgr;
		P2ASSERTLINE(728, sInstance);
	}

	static ConductorArcMgr* getInstance()
	{
		P2ASSERTLINE(734, sInstance);
		return sInstance;
	}

	virtual ~ConductorArcMgr() { sInstance = nullptr; } // _08 (weak)

	JKRArchive* mArchive; // _04

	static ConductorArcMgr* sInstance;
};

} // namespace PSAutoBgm

#endif
