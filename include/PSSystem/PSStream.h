#ifndef _PSSYSTEM_PSSTREAM_H
#define _PSSYSTEM_PSSTREAM_H

#include "types.h"
#include "PSSystem/PSSeq.h"
#include "PSSystem/SeqData.h"
#include "PSSystem/SeqSound.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JAudio/JAI/JAIStream.h"

namespace PSSystem {

/**
 * @size = 0x74
 */
struct StreamBgm : public BgmSeq {
	StreamBgm(u32 id, const JAInter::SoundInfo& info);

	virtual ~StreamBgm();                                  // _08
	virtual void init();                                   // _0C
	virtual void scene1st(TaskChecker*) { }                // _10 (weak)
	virtual void startSeq();                               // _14
	virtual u8 getCastType() { return 1; }                 // _24 (weak)
	virtual u32 getSeqType() { return 0; }                 // _28 (weak)
	virtual bool isPlaying();                              // _34
	virtual JAISound** getHandleP() { return &mJaiSound; } // _3C (weak)
	virtual void setConfigVolume();                        // _40

	void setId(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_6C  = BgmSeq
	JAISound* mJaiSound; // _6C
	u32 mId;             // _70
};

/**
 * @size = 0x20
 */
struct StreamDataList : public SeqDataList {
	StreamDataList();

	virtual ~StreamDataList();                         // _08 (weak)
	virtual bool read(Stream& input) { return false; } // _0C (weak)
	// virtual void _10() = 0;      // _10 - possibly
	// virtual void _14() = 0;      // _14 - possibly

	int getStreamVolume(u32);
};

/**
 * @size = 0x20
 */
struct StreamSound : public JAIStream, public SeqSoundBase {
	StreamSound();

	// vtable 1 (JAISequence) (no changes) 	- _08-_D0
	// vtable 2 (SeqSoundBase + self)		- _DC-_E0 (thunk)
	virtual void stopInner(u32); // _E4 (weak)
};

} // namespace PSSystem

#endif
