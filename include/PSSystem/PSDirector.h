#ifndef _PSSYSTEM_DIRECTOR_H
#define _PSSYSTEM_DIRECTOR_H

#include "Dolphin/os.h"
#include "JSystem/JAudio/JAD/JADHioNode.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "PSSystem/PSSeq.h"

namespace PSSystem {
struct SeqTrackBase;

struct DirectorBase : public JADHioNode {
	DirectorBase(int numTracks, const char* name);

	virtual ~DirectorBase() { }                     // _08 (weak)
	virtual void exec();                            // _0C
	virtual void directOn();                        // _10
	virtual void directOff();                       // _14
	virtual void underDirection() { }               // _18 (weak)
	virtual void execInner() { }                    // _1C (weak)
	virtual void directOnTrack(SeqTrackBase&)  = 0; // _20
	virtual void directOffTrack(SeqTrackBase&) = 0; // _24
	virtual void doUpdateRequest();                 // _28
	virtual void onPlayInit(JASTrack*) { }          // _2C (weak)
	virtual void onDirectOn() { }                   // _30 (weak)
	virtual void onDirectOff() { }                  // _34 (weak)

	bool isUnderDirection();
	void setTrack(u8, SeqTrackBase*);
	void directOnInner();
	void directOffInner();
	void powerOn();

	void initCheck();
	void playInit(JASTrack* track);
	void powerOff();

	inline u8 getTrackCount() const { return mTrackNum; }

	inline bool needDirection()
	{
		for (u8 i = 0; i < mTrackNum; i++) {
			if (mTracks[i]->getTaskEntryList()->isUnderTask_byDirector(this)) {
				return true;
			}
		}
		return false;
	}

	inline void fadeAllTracks(f32 rate, u32* duration)
	{
		for (u8 i = 0; i < mTrackNum; i++) {
			P2ASSERTLINE(51, i < mTrackNum);
			static_cast<PSSystem::SeqTrackChild*>(mTracks[i])->fade(rate, *duration, nullptr);
		}
	}

	inline void checkTrackNum(u8 trackNum) { P2ASSERTLINE(51, trackNum < mTrackNum); }

	static u8 sToolMode;

	// _00 = VTBL
	SeqTrackBase** mTracks; // _04
	int mState;             // _08
	OSMutex mMutex1;        // _0C
	OSMutex mMutex2;        // _24
	bool mIsBegin;          // _3C
	u8 _3D[0x3];            // _3D - padding?
	bool mEnabled;          // _40 (only enabled for interactive music)
	u8 mTrackNum;           // _41
	u8* mTrackFlagList;     // _44
};

struct OneShotDirector : public DirectorBase {
	inline OneShotDirector()
	    : DirectorBase(1, "damageD  ")
	{
	}

	virtual ~OneShotDirector() { }                 // _08 (weak)
	virtual void exec();                           // _0C
	virtual void directOnTrack(SeqTrackBase&) = 0; // _20
	virtual void directOffTrack(SeqTrackBase&) { } // _24 (weak)

	// _00     = VTBL
	// _00-_48 = DirectorBase
};

struct SwitcherDirector : public DirectorBase {
	inline SwitcherDirector(int numTracks, const char* name)
	    : DirectorBase(numTracks, name)
	{
	}

	virtual ~SwitcherDirector() { }                 // _08 (weak)
	virtual void directOnTrack(SeqTrackBase&)  = 0; // _20
	virtual void directOffTrack(SeqTrackBase&) = 0; // _24
	virtual void doUpdateRequest();                 // _28

	// _00     = VTBL
	// _00-_48 = DirectorBase
};

// this is only here for the vtable in PSDirector.cpp - probably not necessary
// since DirectorCopyActor is the only child
struct DirectorActorBase {
	virtual void exec(DirectorBase*) = 0; // _08
};

struct DirectorCopyActor : public DirectorActorBase {
	DirectorCopyActor(DirectorBase*, DirectorBase*);

	virtual void exec(DirectorBase*);      // _08
	virtual void onUpdateFromMasterD() { } // _0C (weak)
	virtual void onUpdateFromSlaveD() { }  // _10 (weak)

	// _00 = VTBL
	DirectorBase* mDirectorChild;  // _04
	DirectorBase* mDirectorParent; // _08
};

struct DirectorMgrBase : public JADHioNode {
	DirectorMgrBase(u8 count);

	virtual ~DirectorMgrBase() { }                           // _08 (weak)
	virtual DirectorBase* newDirector(u8, DirectedBgm&) = 0; // _0C

	void initAndAdaptToBgm(DirectedBgm&);
	void playInit(JASTrack*);
	void exec();
	void off(DirectedBgm*);

	void lock();
	void unlock();

	inline DirectorBase* getDirector(u8 id)
	{
		P2ASSERTLINE(181, id < mDirectorCount);
		return mDirectors[id];
	}

	// _00 = VTBL
	DirectorBase** mDirectors; // _04
	u8 mDirectorCount;         // _08
};

} // namespace PSSystem

#endif
