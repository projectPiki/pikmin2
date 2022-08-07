#ifndef _PSSYSTEM_PSBGM_H
#define _PSSYSTEM_PSBGM_H

#include "types.h"
#include "PSSystem/Seq.h"
#include "PSSystem/SeqTrack.h"
#include "JSystem/JAI/JAInter.h"
#include "JSystem/JAI/JAISound.h"
#include "Dolphin/os.h"

struct JASTrack;

namespace PSSystem {
struct DirectorMgrBase;

/**
 * @size = 0x6C
 */
struct BgmSeq : public SeqBase {
	BgmSeq(const char*, const JAInter::SoundInfo&);

	virtual ~BgmSeq();          // _08
	virtual void getCastType(); // _24 (weak)
	virtual void getSeqType();  // _28 (weak)
	virtual void getHandleP();  // _3C (weak)

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
	JAISound* m_handleP; // _68
};

/**
 * @size = 0xB8
 */
struct DirectedBgm : public BgmSeq {
	DirectedBgm(const char*, const JAInter::SoundInfo&, DirectorMgrBase*);

	virtual ~DirectedBgm();                           // _08 (weak)
	virtual void init();                              // _0C
	virtual void startSeq();                          // _14
	virtual void stopSeq(u32);                        // _18
	virtual void getCastType();                       // _24 (weak)
	virtual void onPlayingFrame();                    // _30
	virtual void newSeqTrackRoot();                   // _44
	virtual void newSeqTrackChild(u8, SeqTrackRoot&); // _48

	void initRootTrack_onPlaying(JASTrack*);
	void initChildTrack_onPlaying(JASTrack*, u8);
	void getDirectorP(u8);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_6C  = BgmSeq
	DirectorMgrBase* _6C;   // _6C
	SeqTrackRoot* _70;      // _70
	SeqTrackChild* _74[16]; // _74
	u8 _B4;                 // _B4 - unknown
	u8 _B5[0x3];            // _B5 - unknown, maybe just padding
};

/**
 * @size = 0x134
 */
struct JumpBgmSeq : public DirectedBgm {
	JumpBgmSeq(const char*, const JAInter::SoundInfo&, DirectorMgrBase*);

	virtual ~JumpBgmSeq();                     // _08 (weak)
	virtual void startSeq();                   // _14
	virtual void getCastType();                // _24 (weak)
	virtual void onPlayingFrame();             // _30
	virtual void newSeqTrackRoot();            // _44
	virtual void getSeqStartPoint();           // _4C
	virtual void requestJumpBgmQuickly(u16);   // _50
	virtual void requestJumpBgmOnBeat(u16);    // _54
	virtual void requestJumpBgmEveryBeat(u16); // _58
	virtual void outputJumpRequest();          // _5C
	virtual void onJump(u16);                  // _60 (weak)

	void startSeq(u16);
	void setAvoidJumpTimer_Checked(u32);

	// _00-_10  = JSULink<SeqBase>
	// _10      = VTABLE
	// _14-_68  = SeqBase
	// _6C-_B8  = DirectedBgm

	OSMutexObject _B8;  // _B8
	short _D0;          // _D0
	u8 _D2[0x2];        // _D2 - just padding probably
	OSMutexObject _D4;  // _D4
	short _EC;          // _EC
	u8 _EE[0x2];        // _EE - just padding probably
	OSMutexObject _F0;  // _F0
	u16 _108;           // _108
	u8 _10A[0x2];       // _10A - just padding probably
	OSMutexObject _10C; // _10C
	u16 _D0;            // _124
	u8 _D2[0x2];        // _126 - just padding probably
	JumpBgmSeq* _128;   // _128
	u32 _12C;           // _12C
	short _130;         // _130
	u8 _132[0x2];       // _132 - just padding possibly
};

} // namespace PSSystem

#endif
