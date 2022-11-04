#ifndef _PSGAME_SEMGR_H
#define _PSGAME_SEMGR_H

#include "types.h"

struct JAISound;

namespace PSGame {
struct Randid {
	f32 m_id; // _00, notUsingMasterIDRatio according to ghidra
};

struct SetSe {
	s16 _00;     // _00
	s16 _02;     // _02
	s16 _04;     // _04
	s16 _06;     // _06
	u32 _08;     // _08
	u32 _0C;     // _0C, unknown
	u32 _10;     // _10, unknown
	u8 _14[0x4]; // _14, unknown
};

struct SeMgr {
	enum SetSeId {
		UNK_1 = 1, // unknown, used in ActBreakRock::exec
		UNK_4 = 4, // unknown, used in PikiSuikomiState::onKeyEvent
		UNK_7 = 7, // unknown, used in PikiPanicState::init
	};

	SeMgr();

	virtual ~SeMgr(); // _08 (weak)

	void playMessageVoice(u32, bool);
	void stopMessageVoice();

	// _00 VTBL
	SetSe* _04[8];     // _04
	Randid m_randid;   // _24
	u8 _28[0x4];       // _28, unknown
	JAISound* m_sound; // _2C
};
} // namespace PSGame

#endif
