#ifndef _JSYSTEM_JAS_JASPLAYER_H
#define _JSYSTEM_JAS_JASPLAYER_H

#include "JSystem/JAudio/JAS/JASOscillator.h"
#include "types.h"

namespace JASPlayer {

s16 extend8to16(u8 value);
f32 pitchToCent(f32, f32);
s32 getRandomS32();

extern const JASOscillator::Data sAdsrDef;
extern const JASOscillator::Data sEnvelopeDef;
extern const JASOscillator::Data sVibratoDef;
extern const JASOscillator::Data sTremoroDef;

extern s16 CUTOFF_TO_IIR_TABLE[0x200];
extern s16 sAdsTable[12];
extern s16 sRelTable[6];
extern s16 sVibTable[18];
extern s16 sTreTable[18];
} // namespace JASPlayer

#endif
