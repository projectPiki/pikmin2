#ifndef _PSSYSTEM_SEQ_H
#define _PSSYSTEM_SEQ_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAudio/JAI/JAISequence.h"
#include "JSystem/JAudio/JAI/JAInter.h"
#include "JSystem/JAudio/JAI/JAInter/SeMgr.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JAudio/JAS/JASTrack.h"
#include "PSSystem/Reservator.h"
#include "stl/string.h"

#define P2_STREAM_SOUND_ID(soundID) (JAISoundID_Type_Stream | 0x10000 | soundID)

namespace PSSystem {
struct SeqPlayReservator;
struct SeqPauseOffReservator;
struct SeqHeap;
struct SeqSound;
struct Scene;

/**
 * @size 0x68
 */
struct SeqBase : public JSULink<SeqBase> {
	enum CastType {
		TYPE_BgmSeq      = 0,
		TYPE_StreamBgm   = 1,
		TYPE_DirectedBgm = 2,
		TYPE_AutoBgm     = 3,
		TYPE_JumpBgmSeq  = 4,
		TYPE_SeSeq       = 5,
	};

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
	virtual u32 getSeqType() = 0;        // _28
	virtual void exec();                 // _2C
	virtual void onPlayingFrame();       // _30
	virtual bool isPlaying();            // _34
	virtual void seqLoadAfter() { }      // _38 (weak)
	virtual JAISound** getHandleP() = 0; // _3C
	virtual void setConfigVolume();      // _40

	inline bool isDirectedType()
	{
		return (getCastType() == TYPE_DirectedBgm || getCastType() == TYPE_AutoBgm || getCastType() == TYPE_JumpBgmSeq);
	}

	JAISound* getHandle() { return *getHandleP(); }

	void* getFileEntry();

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	char* mBmsFileName;                 // _14
	JAInter::SoundInfo mSoundInfo;      // _18
	SeqHeap* mSeqHeap;                  // _28
	SeqPlayReservator mPlayRes;         // _2C
	SeqPauseOffReservator mPauseOffRes; // _38
	PauseMode mPauseMode;               // _44 - enum maybe? 0x4 size
	u8 mPausedMinVolume;                // _48
	SeqSound* mSeqSound;                // _4C
	OSMutex mMutex;                     // _50
};

/**
 * @size 0x18
 */
struct SeqHeap {
	SeqHeap(u32, PSSystem::SeqBase*); // unused/inlined

	virtual ~SeqHeap();                      // _08
	virtual void loadSeqAsync(TaskChecker*); // _0C

	static JAInter::SequenceMgr::CustomHeapInfo requestCallback(u32, u16, JAISequence*);
	static void loadedCallback(u32, u32);

	SeqHeap* mOwner;    // _04
	uint mSize;         // _08
	u8* mFileData;      // _0C
	SeqBase* mOwnerSeq; // _10
	TaskChecker* mTask; // _14
};

/**
 * @size 0x18
 */
struct SeqMgr : public JSUList<SeqBase> {
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
};

/**
 * @size 0x18
 */
struct SeSeq : public SeqBase {
	SeSeq(const char* bmsFileName, const JAInter::SoundInfo& info)
	    : SeqBase(bmsFileName, info)
	{
	}
	virtual ~SeSeq();                                                                   // _08
	virtual void stopSeq(u32);                                                          // _18
	virtual u8 getCastType() { return TYPE_SeSeq; }                                     // _24 (weak)
	virtual u32 getSeqType() { return 0x80000800; }                                     // _28 (weak)
	virtual void seqLoadAfter();                                                        // _38
	virtual JAISound** getHandleP() { return (JAISound**)(&JAInter::SeMgr::seHandle); } // _3C (weak)
	virtual void setConfigVolume();                                                     // _40

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
};

} // namespace PSSystem

#endif
