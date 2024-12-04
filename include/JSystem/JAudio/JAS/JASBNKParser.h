#ifndef _JSYSTEM_JAS_JASBNKPARSER_H
#define _JSYSTEM_JAS_JASBNKPARSER_H

#include "JSystem/JAudio/JAS/JASBank.h"
#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"

// The total number of instruments allocated for a bank (even though 128-227 are invalid)
#define JASBank_INSTRUMENT_SLOTS 256
// The max number of standard (non-percussion) instruments allowed for a single bank
#define JASBank_MAX_INSTRUMENT 128
// The max number of percussion instruments (not-standard) allowed for a single bank
#define JASBank_MAX_PERCUSSION 12
// Max number of extra modifiers for standard instruments (percussion only uses Rand)
#define TInst_MAX_OSCILLATORS 2
#define TInst_MAX_RAND        2
#define TPerc_MAX_RAND        2
#define TInst_MAX_SENSE       2
// The number of sounds associated with a single Percussion instrument
#define TPerc_MAX_ENTRIES 128

namespace JASBNKParser {
struct THeader {
	u8 _00[0x20];                                   // _00
	u32 mMagic;                                     // _20 'BANK'
	u32 mInstOffsets[JASBank_MAX_INSTRUMENT + 100]; // _24, theres an extra 100 unused slots
	u32 mPercOffsets[JASBank_MAX_PERCUSSION];       // _3B4
};

struct TInst {
	u8 mMagic[8];                           // _00
	f32 mVolume;                            // _08
	f32 mPitch;                             // _0C
	u32 mOscOffsets[TInst_MAX_OSCILLATORS]; // _10
	u32 mRandOffsets[TInst_MAX_RAND];       // _18
	u32 mSenseOffsets[TInst_MAX_SENSE];     // _20
	u32 mKeyRegionCount;                    // _28
	u32 mKeymapOffsets[1];                  // _2C actual length depends on mKeyRegionCount
};

struct TKeymap {
	u8 mBaseKey;         // _00
	u32 mVelRegCount;    // _04
	u32 mVmapOffsets[1]; // _08 actual length depends on mVelRegCount
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
	u32 mMagic;                          // _00
	u8 _04[0x84];                        // _04, padding
	u32 mPmapOffsets[TPerc_MAX_ENTRIES]; // _88
	s8 mPanning[TPerc_MAX_ENTRIES];      // _288
	u16 mRelease[TPerc_MAX_ENTRIES];     // _308
};

struct TPmap {
	f32 mPitch;                       // _00
	f32 mVolume;                      // _04
	u32 mRandOffsets[TInst_MAX_RAND]; // _08
	u32 mVeloRegionCount;             // _10
	u32 mVeloRegionOffsets[1];        // _14 actual length depends on mVeloRegionCount
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
