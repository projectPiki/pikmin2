#ifndef _JSYSTEM_JAS_JASBNKPARSER_H
#define _JSYSTEM_JAS_JASBNKPARSER_H

#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"

namespace JASBNKParser {
struct THeader {
	u8 _00[0x24];           // _00
	u32 mInstOffsets[0x80]; // _24
	u8 _224[0x190];         // _224
	u32 mPercOffsets[12];   // _3B4
};

struct TInst {
	u8 _00[8];             // _00
	f32 _08;               // _08
	f32 _0C;               // _0C
	u32 mOscOffsets[2];    // _10
	u32 mRandOffsets[2];   // _18
	u32 mSenseOffsets[2];  // _20
	u32 mKeyRegionCount;   // _28
	u32 mKeymapOffsets[2]; // _2C
};

struct TKeymap {
	u8 _00;              // _00
	u32 _04;             // _04
	u32 mVmapOffsets[1]; // _08 - unknown length
};

struct TOsc {
	u8 _00;  // _00
	f32 _04; // _04
	u32 _08; // _08
	u32 _0C; // _0C
	f32 _10; // _10
	f32 _14; // _14
};

struct TPerc {
	u32 mMagic;             // _00
	u8 _04[0x84];           // _04
	u32 mPmapOffsets[0x80]; // _88
	s8 _288[0x80];          // _288
	u16 _308[0x80];         // _308
};

struct TPmap {
	f32 _00;                   // _00
	f32 _04;                   // _04
	u32 mRandOffsets[2];       // _08
	u32 mVeloRegionCount;      // _10
	u32 mVeloRegionOffsets[1]; // _14 - unknown length
};

struct TRand {
	u8 _00;  // _00
	f32 _04; // _04
	f32 _08; // _08
};

struct TSense {
	u8 _00;  // _00
	u8 _01;  // _01
	u8 _02;  // _02
	f32 _04; // _04
	f32 _08; // _08
};

struct TVmap {
	u8 _00;  // _00
	u32 _04; // _04
	f32 _08; // _08
	f32 _0C; // _0C
};

JASBasicBank* createBasicBank(void* stream);
JASOscillator::Data* findOscPtr(JASBasicBank*, THeader*, TOsc*);
short* getOscTableEndPtr(short*);

// unused/inlined:
u32 getUsedHeapSize();

extern size_t sUsedHeapSize;
} // namespace JASBNKParser

#endif
