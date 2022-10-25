#ifndef _JSYSTEM_JAS_JASBNKPARSER_H
#define _JSYSTEM_JAS_JASBNKPARSER_H

#include "JSystem/JAS/JASBank.h"
#include "JSystem/JAS/JASOscillator.h"
#include "types.h"

namespace JASBNKParser {
struct THeader {
};

struct TInst {
	u8 _00[8];              // _00
	f32 _08;                // _08
	f32 _0C;                // _0C
	u32 m_oscOffsets[2];    // _10
	u32 m_randOffsets[2];   // _18
	u32 m_senseOffsets[2];  // _20
	u32 m_keyRegionCount;   // _28
	u32 m_keymapOffsets[2]; // _2C
};

struct TKeymap {
	u8 _00;               // _00
	u32 _04;              // _04
	u32 m_vmapOffsets[1]; // _08 - unknown length
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
	u32 m_magic;             // _00
	u8 _04[0x84];            // _04
	u32 m_pmapOffsets[0x80]; // _88
	s8 _288[0x80];           // _288
	u16 _308[0x80];          // _308
};

struct TPmap {
	f32 _00;                    // _00
	f32 _04;                    // _04
	u32 m_randOffsets[2];       // _08
	u32 m_veloRegionCount;      // _10
	u32 m_veloRegionOffsets[1]; // _14 - unknown length
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
	u32 _08; // _08
	u32 _0C; // _0C
};

JASBasicBank* createBasicBank(void* stream);
JASOscillator::Data* findOscPtr(JASBasicBank*, THeader*, TOsc*);
void* getOscTableEndPtr(short*);

// unused/inlined:
u32 getUsedHeapSize();
} // namespace JASBNKParser

#endif
