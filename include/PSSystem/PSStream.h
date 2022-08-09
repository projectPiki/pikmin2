#ifndef _PSSYSTEM_PSSTREAM_H
#define _PSSYSTEM_PSSTREAM_H

#include "types.h"
#include "PSSystem/PSBgm.h"
#include "PSSystem/SeqData.h"
#include "PSSystem/SeqSound.h"
#include "PSSystem/PSBgmTask.h"
#include "JSystem/JAI/JAISound.h"

namespace PSSystem {

/**
 * @size = 0x74
 */
struct StreamBgm : public BgmSeq {
	StreamBgm(u32, const JAInter::SoundInfo&);

	virtual ~StreamBgm();                // _08
	virtual void init();                 // _0C
	virtual void scene1st(TaskChecker*); // _10 (weak)
	virtual void startSeq();             // _14
	virtual void getCastType();          // _24 (weak)
	virtual void getSeqType();           // _28 (weak)
	virtual void isPlaying();            // _34
	virtual void getHandleP();           // _3C (weak)
	virtual void setConfigVolume();      // _40

	void setID(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_6C  = BgmSeq
	JAISound* _6C; // _6C
	u32 m_id;      // _70
};

/**
 * @size = 0x20
 */
struct StreamDataList : public SeqDataList {
	StreamDataList();

	virtual ~StreamDataList();  // _08 (weak)
	virtual void read(Stream&); // _0C (weak)
	// virtual void _10() = 0;      // _10 - possibly
	// virtual void _14() = 0;      // _14 - possibly

	void getStreamVolume(u32);
};

/**
 * @size = 0x20
 */
struct StreamSound : public SeqSoundBase {
	StreamSound();

	// vtable 1 (JAISequence) (no changes) 	- _08-_D0
	// vtable 2 (SeqSoundBase + self)		- _DC-_E0 (thunk)
	virtual void stopInner(u32); // _E4 (weak)
};

} // namespace PSSystem

#endif
