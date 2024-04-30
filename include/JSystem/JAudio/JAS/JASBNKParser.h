#ifndef _JSYSTEM_JAS_JASBNKPARSER_H
#define _JSYSTEM_JAS_JASBNKPARSER_H

#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"

namespace JASBNKParser {
struct THeader {
	u8 _00[0x20];           // _00
	u32 mInstOffsets[0x80]; // _20
	u8 _220[0x190];         // _220
	u32 mPercOffsets[12];   // _3B0
};

struct TInst {
	u8 mMagic[8];          // _00
	f32 mVolume;           // _08
	f32 mPitch;            // _0C
	u32 mOscOffsets[2];    // _10
	u32 mRandOffsets[2];   // _18
	u32 mSenseOffsets[2];  // _20
	u32 mKeyRegionCount;   // _28
	u32 mKeymapOffsets[2]; // _2C
};

struct TKeymap {
	u8 mBaseKey;         // _00
	u32 mVelRegCount;    // _04
	u32 mVmapOffsets[1]; // _08 - unknown length
};

struct TOsc {
	u8 mTarget;   // _00
	f32 mRate;    // _04
	u32 mAttack;  // _08
	u32 mRelease; // _0C
	f32 mWidth;   // _10
	f32 mVertex;  // _14
};

struct TPerc {
	u32 mMagic;             // _00
	u8 _04[0x84];           // _04
	u32 mPmapOffsets[0x80]; // _88
	s8 mPanning[0x80];      // _288
	u16 _308[0x80];         // _308
};

struct TPmap {
	f32 mPitch;                // _00
	f32 mVolume;               // _04
	u32 mRandOffsets[2];       // _08
	u32 mVeloRegionCount;      // _10
	u32 mVeloRegionOffsets[1]; // _14 - unknown length
};

struct TRand {
	u8 mTarget;   // _00
	f32 mFloor;   // _04
	f32 mCeiling; // _08
};

struct TSense {
	u8 mTarget;   // _00
	u8 mRegister; // _01
	u8 mKey;      // _02
	f32 mFloor;   // _04
	f32 mCeiling; // _08
};

struct TVmap {
	u8 mVelocity; // _00
	u32 mWaveID;  // _04, left 16 bits = WSYSID, right 16 bits = WaveID (could this be a union?)
	f32 mVolume;  // _08
	f32 mPitch;   // _0C
};

JASBasicBank* createBasicBank(void* stream);

// unused/inlined:
u32 getUsedHeapSize();

extern size_t sUsedHeapSize;
} // namespace JASBNKParser

#endif
