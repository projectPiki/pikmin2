#ifndef _DOLPHIN_GBA_H
#define _DOLPHIN_GBA_H

#include "Dolphin/os.h"
#include "types.h"
#include "Dolphin/db.h"

#ifdef __cplusplus
extern "C" {
#endif // ifdef __cplusplus

typedef void (*GBASyncCallback)(int portIndex, int);
typedef void (*GBAProcHandler)(int portIndex);

/**
 * @size{0x40}
 */
typedef struct SecParam {
	u8 _00[0x40];
} SecParam;

/**
 * @size{0x100}
 */
typedef struct GBA {
	u8 _00[4];
	u8 _04;
	u8 _05;
	u8 _06;
	u8 _07;
	u8 _08[4];
	unknown _0C;
	unknown _10;
	u8* _14;
	u8* _18;
	GBASyncCallback m_syncCallback; // _1C
	int _20;
	OSThreadQueue _24;
	u8 _2C[4];
	unknown _30;
	u32 _34;
	GBAProcHandler _38;
	u8 _3C[0xBC];
	SecParam* m_secParam; // _F8
	u8 _FC[4];
} GBA;

extern SecParam SecParams[4];
extern GBA __GBA[4];
extern BOOL __GBAReset;

void GBAInit();
unknown __GBATransfer(int portIndex, unknown, unknown, GBAProcHandler);
int __GBASync(int portIndex);
void __GBASyncCallback(int portIndex, int);
BOOL OnReset();
void ShortCommandProc(int portIndex);
void ReadProc(int portIndex);

#ifdef __cplusplus
}
#endif // ifdef __cplusplus

#endif
