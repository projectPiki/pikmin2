#ifndef _PSSYSTEM_SEQ_H
#define _PSSYSTEM_SEQ_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "PSSystem/Reservator.h"
#include "stl/string.h"

namespace PSSystem {
struct SeqPlayReservator;
struct SeqPauseOffReservator;
struct SeqHeap;
struct SeqSound;
struct Scene;

/**
 * @size 0x68
 */
struct SeqBase : JSULink<SeqBase> {
	// need to work out what these are
	enum PauseMode { MODE0 = 0, MODE1 = 1, MODE2 = 2, MODE3 = 3, MODE4 = 4 };

	SeqBase(const char* bmsFileName, const JAInter::SoundInfo& info);

	virtual ~SeqBase();                  // _08
	virtual void init();                 // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void startSeq();             // _14
	virtual void stopSeq(u32);           // _18
	virtual void pauseOn(PauseMode);     // _1C
	virtual void pauseOff();             // _20
	virtual u8 getCastType() = 0;        // _24
	virtual u8 getSeqType()  = 0;        // _28
	virtual void exec();                 // _2C
	virtual void onPlayingFrame();       // _30
	virtual bool isPlaying();            // _34
	virtual void seqLoadAfter();         // _38 (weak)
	virtual JAISound* getHandleP() = 0;  // _3C
	virtual void setConfigVolume();      // _40

	void getFileEntry();

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	char* mBmsFileName;                 // _14
	JAInter::SoundInfo mSoundInfo;      // _18
	SeqHeap* mSeqHeap;                  // _28
	SeqPlayReservator mPlayRes;         // _2C
	SeqPauseOffReservator mPauseOffRes; // _38
	PauseMode mPauseMode;               // _44 - enum maybe? 0x4 size
	u8 _48;                             // _48 - unknown
	SeqSound* _4C;                      // _4C - unknown
	OSMutex mMutex;                     // _50
};

/**
 * @size 0x18
 */
struct SeqHeap {
	SeqHeap(unsigned long, PSSystem::SeqBase*); // unused/inlined

	virtual ~SeqHeap();                      // _08
	virtual void loadSeqAsync(TaskChecker*); // _0C

	void requestCallback(u32, u16, JAISequence*);
	void loadedCallback(u32, u32);

	u32 _04;          // _04 - unknown
	uint _08;         // _08 - unknown
	u8* _0C;          // _0C - string?
	SeqBase* _10;     // _10
	TaskChecker* _14; // _14
};

/**
 * @size 0x18
 */
struct SeqMgr : public JSUList<SeqBase> { // SUPPOSED TO BE JSUList, BUT BREAKING MATCH, PSScene.cpp is broken in the meantime
	SeqMgr(Scene* scene) { mScene = scene; }

	virtual ~SeqMgr(); // _08

	bool isPlaying();
	void pauseOnAllSeq(SeqBase::PauseMode);
	void pauseOffAllSeq();
	void reservePauseOffAllSeq();
	void cancelPauseOffAllSeq();
	void exec();
	void stopAllSound(u32);
	void scene1st(TaskChecker*);
	SeqBase* findSeq(JASTrack*);
	SeqBase* getPlayingSeq(JASTrack*);
	SeqBase* getFirstSeq();
	SeqBase* getFirstSeqA();
	SeqBase* getSeq(u32);

	// _00-_0C  = JSUList<SeqBase>
	// _0C      = VTABLE
	Scene* mScene; // _10
	u32 _14;       // _14, unknown
};

/**
 * @size 0x18
 */
struct SeSeq : public SeqBase {
	SeSeq(const char* bmsFileName, const JAInter::SoundInfo& info)
	    : SeqBase(bmsFileName, info)
	{
	}
	virtual ~SeSeq();               // _08
	virtual void stopSeq(u32);      // _18
	virtual u8 getCastType();       // _24 (weak)
	virtual u8 getSeqType();        // _28 (weak)
	virtual void seqLoadAfter();    // _38
	virtual JAISound* getHandleP(); // _3C (weak)
	virtual void setConfigVolume(); // _40

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
};

} // namespace PSSystem

#endif
