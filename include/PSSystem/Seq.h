#ifndef _PSSYSTEM_SEQ_H
#define _PSSYSTEM_SEQ_H

#include "types.h"
#include "Dolphin/os.h"
#include "JSystem/JSupport/JSUList.h"
#include "JSystem/JAI/JAISequence.h"
#include "JSystem/JAI/JAInter.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JAS/JASTrack.h"
#include "PSSystem/Reservator.h"

namespace PSSystem {
struct SeqPlayReservator;
struct SeqPauseOffReservator;
struct SeqHeap;
struct Scene;

/**
 * @size 0x68
 */
struct SeqBase : JSULink<SeqBase> {
	// need to work out what these are
	enum PauseMode { MODE0 = 0, MODE1 = 1, MODE2 = 2, MODE3 = 3, MODE4 = 4 };

	SeqBase(const char*, const JAInter::SoundInfo&);

	virtual ~SeqBase();                  // _08
	virtual void init();                 // _0C
	virtual void scene1st(TaskChecker*); // _10
	virtual void startSeq();             // _14
	virtual void stopSeq(u32);           // _18
	virtual void pauseOn(PauseMode);     // _1C
	virtual void pauseOff();             // _20
	virtual void getCastType() = 0;      // _24
	virtual void getSeqType()  = 0;      // _28
	virtual void exec();                 // _2C
	virtual void onPlayingFrame();       // _30
	virtual void isPlaying();            // _34
	virtual void seqLoadAfter();         // _38 (weak)
	virtual void getHandleP() = 0;       // _3C
	virtual void setConfigVolume();      // _40

	void getFileEntry();

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	char* m_bmsFileName;                 // _14
	JAInter::SoundInfo* m_soundInfo;     // _18
	SeqHeap* m_seqHeap;                  // _28
	SeqPlayReservator m_playRes;         // _2C
	SeqPauseOffReservator m_pauseOffRes; // _38
	PauseMode m_pauseMode;               // _44 - enum maybe? 0x4 size
	u8 _48;                              // _48 - unknown
	u8 _49[0x3];                         // _49 - possibly padding
	u32 _4C;                             // _4C - unknown
	OSMutexObject m_mutex;               // _50
};

/**
 * @size 0x18
 */
struct SeqHeap {
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
struct SeqMgr : JSULink<SeqBase> {
	virtual ~SeqMgr(); // _08

	void isPlaying();
	void pauseOnAllSeq(SeqBase::PauseMode);
	void pauseOffAllSeq();
	void reservePauseOffAllSeq();
	void cancelPauseOffAllSeq();
	void exec();
	void stopAllSound(u32);
	void scene1st(TaskChecker*);
	void findSeq(JASTrack*);
	void getPlayingSeq(JASTrack*);
	void getFirstSeq();
	void getFirstSeqA();
	void getSeq(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	Scene* m_scene; // _14
};

/**
 * @size 0x18
 */
struct SeSeq : public SeqBase {
	virtual ~SeSeq();               // _08
	virtual void stopSeq(u32);      // _18
	virtual void getCastType();     // _24 (weak)
	virtual void getSeqType();      // _28 (weak)
	virtual void seqLoadAfter();    // _38
	virtual void getHandleP();      // _3C (weak)
	virtual void setConfigVolume(); // _40

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
};

} // namespace PSSystem

#endif
