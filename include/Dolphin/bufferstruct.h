#ifndef _DOLPHIN_BUFFERSTRUCT_H
#define _DOLPHIN_BUFFERSTRUCT_H

#include "types.h"
typedef struct bufferStruct bufferStruct, *PbufferStruct;

struct bufferStruct {
	u32 field0_0x0;
	u8 field1_0x4;
	u8 field2_0x5;
	u8 field3_0x6;
	u8 field4_0x7;
	u8 field5_0x8;
	u8 field6_0x9;
	u8 field7_0xa;
	u8 field8_0xb;
	u8 field9_0xc;
	u8 field10_0xd;
	u8 field11_0xe;
	u8 field12_0xf;
	u8 field13_0x10;
	u8 field14_0x11;
	u8 field15_0x12;
	u8 field16_0x13;
	u8 field17_0x14;
	u8 field18_0x15;
	u8 field19_0x16;
	u8 field20_0x17;
	u32 field21_0x18;
	u32 field22_0x1c;
	u32 field23_0x20;
	u32 field24_0x24;
	u32 field25_0x28;
	u32 field26_0x2c;
	u8 field27_0x30;
	u8 field28_0x31;
	u8 field29_0x32;
	u8 field30_0x33;
	u32 field31_0x34;
	u8 field32_0x38;
	u8 field33_0x39;
	u8 field34_0x3a;
	u8 field35_0x3b;
	u8 field36_0x3c;
	u8 field37_0x3d;
	u8 field38_0x3e;
	u8 field39_0x3f;
	int (*beans)(u32, u32, u32*, u32);
	u8 field41_0x44;
	u8 field42_0x45;
	u8 field43_0x46;
	u8 field44_0x47;
	u32 field45_0x48;
};
#endif
