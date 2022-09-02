#ifndef _PSM_PIKIHUMMING_H
#define _PSM_PIKIHUMMING_H

#include "types.h"
#include "SoundID.h"

namespace PSM {
struct Piki;

struct HumType {
	// probably unused if init and exec are unused
};

/**
 * @size{0x1C}
 */
struct PikiHumming {
	PikiHumming();

	// inlined/unused:
	void init(HumType, u32, int, int);
	void exec(HumType, bool);
	void play(Piki*);

	u32 _00;           // _00, unknown
	SoundID m_soundID; // _04
	int _08;           // _08
	int _0C;           // _0C
	int _10;           // _10
	int _14;           // _14, maybe index?
	u8 _18;            // _18
	u8 _19[0x3];       // _19, unknown/padding probably
};

/**
 * @size{0x14}
 */
struct PikiHummingMgr {
	PikiHummingMgr();

	void exec();
	void play(Piki*);

	// inlined/unused:
	void entryRequest();

	u32 _00;                     // _00
	u32 _04;                     // _04, unknown
	int _08;                     // _08
	PikiHumming* m_hummingArray; // _0C, ptr to array of 3 PikiHummings
	u8 _10;                      // _10
	u8 _11[0x3];                 // _11, unknown/padding probably
};

} // namespace PSM

#endif
