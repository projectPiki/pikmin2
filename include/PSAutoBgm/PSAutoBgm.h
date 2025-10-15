#ifndef _PSAUTOBGM_AUTOBGM_H
#define _PSAUTOBGM_AUTOBGM_H

#include "PSSystem/SeqTrack.h"
#include "types.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/PSBgmTask.h"
#include "PSAutoBgm/Conductor.h"
#include "PSAutoBgm/MeloArr.h"
#include "PSAutoBgm/PrmLink.h"

namespace PSAutoBgm {

struct AutoBgmSeqTrackRoot : public PSSystem::SeqTrackRoot {
	AutoBgmSeqTrackRoot(ConductorMgr* mgr)
	    : PSSystem::SeqTrackRoot()
	{
		mMgr = mgr;
		P2ASSERTLINE(755, mgr);
	}

	virtual u16 beatUpdate()
	{
		SeqTrackRoot::beatUpdate();

		Conductor* cond = mMgr->mPrmSetRc;
		P2ASSERTLINE(760, cond);

		if (mBeatMgr.mFlags & 1) {
			cond->_B0++;

			for (u8 i = 0; i < cond->getChildNum(); i++) {
				Track* track = cond->getChild(i);
				if (track->mCurrModule != 255) {
					track->getChild(track->mCurrModule)->_2A4++;
				}
			}
			return cond->_E8.mValue;
		}
		return cond->_E8.mValue;
	} // _14 (weak)

	// _00      = VTABLE
	// _04-_2C4 = SeqTrackRoot
	ConductorMgr* mMgr; // _2C4
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
	static void loadedCallback(u32, u32);

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

// clang-format off
template <typename T>
struct QueueSet : public JSUList<PrmLink<u16> > {
	QueueSet(T value)
		: mValue(value)
	{
	}

	// _00-_0C = JSUList
	T mValue; // _0C
};
// clang-format on

template <typename T>
struct CompQueueSet : public QueueSet<T> {
	CompQueueSet(T value)
	    : QueueSet(value)
	    , _10(value)
	    , _20(value)
	{
		PrmLink<u16>* linkArray = new PrmLink<u16>[2];
		for (u8 i = 0; (int)i < 2; i++) {
			linkArray[i]._10 = 0xFFFF;
			if (getNumLinks() >= mValue && getFirstLink()) {
				JSUPtrList::remove(getFirstLink());
			}
			JSUPtrList::append(&linkArray[i]);
		}
		_24    = new int[2];
		_24[0] = 0;
		_24[1] = 0;
	}

	// _00-_10 = QueueSet
	QueueSet<T> _10; // _10
	T _20;           // _20
	int* _24;        // _24
};

/**
 * @size = 0x40
 */
struct CycleBase {
	CycleBase(Module* module)
	    : mModule(module)
	    , mCycleNum(0)
	    , mSlider()
	    , mWaveSceneIndex(0)
	{
	}

	virtual u16 play(JASTrack*);             // _08
	virtual int getCycleType() { return 1; } // _0C (weak)
	virtual u16 avoidCheck() { return 0; }   // _10 (weak)

	u16 cycleTop(JASTrack*);
	u16 checkCloser(JASTrack*);

	// _00  = VTABLE
	Module* mModule;                   // _04
	u8 mCycleNum;                      // _08
	JADUtility::PrmSlider<u8> mSlider; // _0C
	u8 mWaveSceneIndex;                // _3C
};

/**
 * @size = 0x68
 */
struct OnCycle : public CycleBase {
	OnCycle(Module*);

	virtual u16 play(JASTrack*);             // _08
	virtual int getCycleType() { return 0; } // _0C (weak)
	virtual u16 avoidCheck();                // _10

	void setTip(JASTrack*);
	u16 historiesAreSameAll();

	PrmLink<u16>* setTest(u16 x)
	{
		PrmLink<u16>* link = (PrmLink<u16>*)_40.getFirst();
		if (link) {
			_40.JSUPtrList::remove(link);
		}

		if (!link) {
			link = (PrmLink<u16>*)_40._10.getFirst();
			if (link) {
				_40._10.JSUPtrList::remove(link);
			}
		}
		P2ASSERTLINE(341, link);

		*link->getObject() = x;
		return link;
	}

	// _00      = VTABLE
	// _04-_3D  = CycleBase
	CompQueueSet<u16> _40;
};

/**
 * @size = 0x40
 */
struct OffCycle : public CycleBase {
	OffCycle(Module*);
};

} // namespace PSAutoBgm

#endif
