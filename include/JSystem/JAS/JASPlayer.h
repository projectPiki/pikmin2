#ifndef _JSYSTEM_JAS_JASPLAYER_H
#define _JSYSTEM_JAS_JASPLAYER_H

#include "types.h"

namespace JASPlayer {

struct Def {
	s32 _00;   // _00
	f32 _04;   // _04
	void* _08; // _08
	void* _0C; // _0C
	f32 _10;   // _10
	f32 _14;   // _14
};

s16 extend8to16(u8 value);
f32 pitchToCent(f32, f32);
s32 getRandomS32();

extern const Def sAdsrDef;
extern const Def sEnvelopeDef;
extern const Def sVibratoDef;
extern const Def sTremoroDef;

extern s16 CUTOFF_TO_IIR_TABLE[0x200];
extern s16 sAdsTable[12];
extern s16 sRelTable[6];
extern s16 sVibTable[18];
extern s16 sTreTable[20];
} // namespace JASPlayer

#endif
