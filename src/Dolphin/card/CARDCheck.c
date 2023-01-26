#include "Dolphin/card.h"

/*
 * --INFO--
 * Address:	800D73CC
 * Size:	0001B0
 */
void __CARDCheckSum(u16* dataToChecksum, u32 byteCount, u16* checksum1, u16* checksum2)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  srawi     r4, r4, 0x1
	  sth       r0, 0x0(r6)
	  addze.    r4, r4
	  sth       r0, 0x0(r5)
	  ble-      .loc_0x184
	  rlwinm.   r0,r4,29,3,31
	  mtctr     r0
	  beq-      .loc_0x154

	.loc_0x24:
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0x0(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0x0(r3)
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0x2(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0x2(r3)
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0x4(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0x4(r3)
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0x6(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0x6(r3)
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0x8(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0x8(r3)
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0xA(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0xA(r3)
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0xC(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0xC(r3)
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0xE(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0xE(r3)
	  addi      r3, r3, 0x10
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  bdnz+     .loc_0x24
	  andi.     r4, r4, 0x7
	  beq-      .loc_0x184

	.loc_0x154:
	  mtctr     r4

	.loc_0x158:
	  lhz       r7, 0x0(r5)
	  lhz       r0, 0x0(r3)
	  add       r0, r7, r0
	  sth       r0, 0x0(r5)
	  lhz       r0, 0x0(r3)
	  addi      r3, r3, 0x2
	  lhz       r7, 0x0(r6)
	  not       r0, r0
	  add       r0, r7, r0
	  sth       r0, 0x0(r6)
	  bdnz+     .loc_0x158

	.loc_0x184:
	  lhz       r0, 0x0(r5)
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x198
	  li        r0, 0
	  sth       r0, 0x0(r5)

	.loc_0x198:
	  lhz       r0, 0x0(r6)
	  cmplwi    r0, 0xFFFF
	  bnelr-
	  li        r0, 0
	  sth       r0, 0x0(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D757C
 * Size:	000284
 */
int VerifyID(CARDBlock* block)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stmw      r25, 0x14(r1)
	  mr        r26, r3
	  lwz       r3, 0x80(r3)
	  lhz       r0, 0x20(r3)
	  addi      r27, r3, 0
	  cmplwi    r0, 0
	  bne-      .loc_0x38
	  lhz       r3, 0x22(r27)
	  lhz       r0, 0x8(r26)
	  cmplw     r3, r0
	  beq-      .loc_0x40

	.loc_0x38:
	  li        r3, -0x6
	  b         .loc_0x270

	.loc_0x40:
	  li        r0, 0x1FC
	  srawi     r0, r0, 0x1
	  addze.    r0, r0
	  addi      r4, r27, 0
	  li        r7, 0
	  mr        r3, r0
	  li        r6, 0
	  ble-      .loc_0x118
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0xFC

	.loc_0x6C:
	  lhz       r5, 0x0(r4)
	  not       r0, r5
	  add       r6, r6, r5
	  lhz       r5, 0x2(r4)
	  add       r7, r7, r0
	  not       r0, r5
	  add       r6, r6, r5
	  lhz       r5, 0x4(r4)
	  add       r7, r7, r0
	  not       r0, r5
	  add       r6, r6, r5
	  lhz       r5, 0x6(r4)
	  add       r7, r7, r0
	  not       r0, r5
	  add       r6, r6, r5
	  lhz       r5, 0x8(r4)
	  add       r7, r7, r0
	  not       r0, r5
	  add       r6, r6, r5
	  lhz       r5, 0xA(r4)
	  add       r7, r7, r0
	  not       r0, r5
	  add       r6, r6, r5
	  lhz       r5, 0xC(r4)
	  add       r7, r7, r0
	  not       r0, r5
	  add       r6, r6, r5
	  lhz       r5, 0xE(r4)
	  add       r7, r7, r0
	  not       r0, r5
	  add       r6, r6, r5
	  add       r7, r7, r0
	  addi      r4, r4, 0x10
	  bdnz+     .loc_0x6C
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x118

	.loc_0xFC:
	  mtctr     r3

	.loc_0x100:
	  lhz       r5, 0x0(r4)
	  addi      r4, r4, 0x2
	  not       r0, r5
	  add       r6, r6, r5
	  add       r7, r7, r0
	  bdnz+     .loc_0x100

	.loc_0x118:
	  rlwinm    r0,r6,0,16,31
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x128
	  li        r6, 0

	.loc_0x128:
	  rlwinm    r0,r7,0,16,31
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x138
	  li        r7, 0

	.loc_0x138:
	  lhz       r3, 0x1FC(r27)
	  rlwinm    r0,r6,0,16,31
	  cmplw     r3, r0
	  bne-      .loc_0x158
	  lhz       r3, 0x1FE(r27)
	  rlwinm    r0,r7,0,16,31
	  cmplw     r3, r0
	  beq-      .loc_0x160

	.loc_0x158:
	  li        r3, -0x6
	  b         .loc_0x270

	.loc_0x160:
	  lwz       r31, 0xC(r27)
	  lwz       r28, 0x10(r27)
	  bl        0x196A8
	  lis       r4, 0x804F
	  addi      r0, r4, 0x5AF0
	  lis       r4, 0x7878
	  sub       r0, r26, r0
	  addi      r4, r4, 0x7879
	  mulhw     r0, r4, r0
	  srawi     r0, r0, 0x7
	  rlwinm    r4,r0,1,31,31
	  add       r0, r0, r4
	  mulli     r0, r0, 0xC
	  lis       r4, 0x41C6
	  addi      r25, r27, 0
	  add       r29, r3, r0
	  addi      r30, r4, 0x4E6D
	  li        r26, 0

	.loc_0x1A8:
	  mullw     r5, r31, r30
	  mulhwu    r3, r28, r30
	  li        r31, 0
	  add       r5, r5, r3
	  mullw     r3, r28, r31
	  mullw     r0, r28, r30
	  li        r28, 0x3039
	  addc      r4, r0, r28
	  add       r0, r5, r3
	  adde      r3, r0, r31
	  li        r5, 0x10
	  bl        -0x1561C
	  lbz       r0, 0x0(r29)
	  lbz       r6, 0x0(r25)
	  addc      r0, r4, r0
	  rlwinm    r0,r0,0,24,31
	  cmplw     r6, r0
	  beq-      .loc_0x200
	  li        r3, 0
	  bl        0x199D8
	  li        r3, -0x6
	  b         .loc_0x270

	.loc_0x200:
	  mullw     r5, r3, r30
	  mulhwu    r3, r4, r30
	  add       r5, r5, r3
	  mullw     r3, r4, r31
	  mullw     r0, r4, r30
	  addc      r4, r0, r28
	  add       r0, r5, r3
	  adde      r3, r0, r31
	  li        r5, 0x10
	  bl        -0x1566C
	  addi      r26, r26, 0x1
	  cmpwi     r26, 0xC
	  li        r0, 0x7FFF
	  and       r28, r4, r0
	  and       r31, r3, r31
	  addi      r29, r29, 0x1
	  addi      r25, r25, 0x1
	  blt+      .loc_0x1A8
	  li        r3, 0
	  bl        0x19980
	  bl        -0x2240
	  lhz       r0, 0x24(r27)
	  rlwinm    r3,r3,0,16,31
	  cmplw     r0, r3
	  beq-      .loc_0x26C
	  li        r3, -0xD
	  b         .loc_0x270

	.loc_0x26C:
	  li        r3, 0

	.loc_0x270:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D7800
 * Size:	000240
 */
int VerifyDir(CARDBlock* block, void* p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x38(r1)
	  stw       r31, 0x34(r1)
	  addi      r7, r1, 0x1C
	  addi      r8, r1, 0x14
	  stw       r30, 0x30(r1)
	  li        r31, 0
	  li        r30, 0
	  stw       r29, 0x2C(r1)
	  addi      r29, r4, 0
	  li        r4, 0

	.loc_0x30:
	  addi      r0, r4, 0x1
	  lwz       r5, 0x80(r3)
	  rlwinm    r0,r0,13,0,18
	  add       r0, r5, r0
	  stw       r0, 0x0(r7)
	  li        r6, 0x1FFC
	  srawi     r6, r6, 0x1
	  lwz       r5, 0x0(r7)
	  addze.    r6, r6
	  li        r11, 0
	  addi      r0, r5, 0x1FC0
	  stw       r0, 0x0(r8)
	  li        r10, 0
	  lwz       r5, 0x0(r7)
	  ble-      .loc_0x124
	  rlwinm.   r0,r6,29,3,31
	  mtctr     r0
	  beq-      .loc_0x108

	.loc_0x78:
	  lhz       r9, 0x0(r5)
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x2(r5)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x4(r5)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x6(r5)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x8(r5)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0xA(r5)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0xC(r5)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0xE(r5)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  add       r11, r11, r0
	  addi      r5, r5, 0x10
	  bdnz+     .loc_0x78
	  andi.     r6, r6, 0x7
	  beq-      .loc_0x124

	.loc_0x108:
	  mtctr     r6

	.loc_0x10C:
	  lhz       r9, 0x0(r5)
	  addi      r5, r5, 0x2
	  not       r0, r9
	  add       r10, r10, r9
	  add       r11, r11, r0
	  bdnz+     .loc_0x10C

	.loc_0x124:
	  rlwinm    r0,r10,0,16,31
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x134
	  li        r10, 0

	.loc_0x134:
	  rlwinm    r0,r11,0,16,31
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x144
	  li        r11, 0

	.loc_0x144:
	  lwz       r6, 0x0(r8)
	  rlwinm    r5,r10,0,16,31
	  lhz       r0, 0x3C(r6)
	  cmplw     r5, r0
	  bne-      .loc_0x168
	  lhz       r0, 0x3E(r6)
	  rlwinm    r5,r11,0,16,31
	  cmplw     r5, r0
	  beq-      .loc_0x178

	.loc_0x168:
	  li        r0, 0
	  stw       r0, 0x84(r3)
	  addi      r30, r4, 0
	  addi      r31, r31, 0x1

	.loc_0x178:
	  addi      r4, r4, 0x1
	  cmpwi     r4, 0x2
	  addi      r7, r7, 0x4
	  addi      r8, r8, 0x4
	  blt+      .loc_0x30
	  cmpwi     r31, 0
	  bne-      .loc_0x214
	  lwz       r4, 0x84(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x1F8
	  lwz       r5, 0x18(r1)
	  lwz       r4, 0x14(r1)
	  lha       r5, 0x3A(r5)
	  lha       r0, 0x3A(r4)
	  sub.      r0, r0, r5
	  bge-      .loc_0x1C0
	  li        r30, 0
	  b         .loc_0x1C4

	.loc_0x1C0:
	  li        r30, 0x1

	.loc_0x1C4:
	  rlwinm    r0,r30,2,0,29
	  addi      r6, r1, 0x1C
	  add       r6, r6, r0
	  lwz       r4, 0x0(r6)
	  xori      r0, r30, 0x1
	  rlwinm    r0,r0,2,0,29
	  stw       r4, 0x84(r3)
	  addi      r4, r1, 0x1C
	  li        r5, 0x2000
	  lwz       r3, 0x0(r6)
	  lwzx      r4, r4, r0
	  bl        -0xD2854
	  b         .loc_0x214

	.loc_0x1F8:
	  lwz       r0, 0x1C(r1)
	  cmplw     r4, r0
	  bne-      .loc_0x20C
	  li        r0, 0
	  b         .loc_0x210

	.loc_0x20C:
	  li        r0, 0x1

	.loc_0x210:
	  mr        r30, r0

	.loc_0x214:
	  cmplwi    r29, 0
	  beq-      .loc_0x220
	  stw       r30, 0x0(r29)

	.loc_0x220:
	  mr        r3, r31
	  lwz       r0, 0x3C(r1)
	  lwz       r31, 0x34(r1)
	  lwz       r30, 0x30(r1)
	  lwz       r29, 0x2C(r1)
	  addi      r1, r1, 0x38
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D7A40
 * Size:	000284
 */
int VerifyFAT(CARDBlock* block, void* p2)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  li        r31, 0
	  stw       r30, 0x20(r1)
	  li        r30, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r4, 0
	  addi      r4, r1, 0x10

	.loc_0x2C:
	  li        r8, 0x1FFC
	  lwz       r6, 0x80(r3)
	  addi      r0, r5, 0x3
	  srawi     r8, r8, 0x1
	  rlwinm    r0,r0,13,0,18
	  add       r7, r6, r0
	  addze.    r8, r8
	  stw       r7, 0x0(r4)
	  addi      r6, r7, 0x4
	  li        r11, 0
	  li        r10, 0
	  ble-      .loc_0x114
	  rlwinm.   r0,r8,29,3,31
	  mtctr     r0
	  beq-      .loc_0xF8

	.loc_0x68:
	  lhz       r9, 0x0(r6)
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x2(r6)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x4(r6)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x6(r6)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0x8(r6)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0xA(r6)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0xC(r6)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  lhz       r9, 0xE(r6)
	  add       r11, r11, r0
	  not       r0, r9
	  add       r10, r10, r9
	  add       r11, r11, r0
	  addi      r6, r6, 0x10
	  bdnz+     .loc_0x68
	  andi.     r8, r8, 0x7
	  beq-      .loc_0x114

	.loc_0xF8:
	  mtctr     r8

	.loc_0xFC:
	  lhz       r9, 0x0(r6)
	  addi      r6, r6, 0x2
	  not       r0, r9
	  add       r10, r10, r9
	  add       r11, r11, r0
	  bdnz+     .loc_0xFC

	.loc_0x114:
	  rlwinm    r0,r10,0,16,31
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x124
	  li        r10, 0

	.loc_0x124:
	  rlwinm    r0,r11,0,16,31
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x134
	  li        r11, 0

	.loc_0x134:
	  lhz       r6, 0x0(r7)
	  rlwinm    r0,r10,0,16,31
	  cmplw     r6, r0
	  bne-      .loc_0x154
	  lhz       r6, 0x2(r7)
	  rlwinm    r0,r11,0,16,31
	  cmplw     r6, r0
	  beq-      .loc_0x168

	.loc_0x154:
	  li        r0, 0
	  stw       r0, 0x88(r3)
	  addi      r30, r5, 0
	  addi      r31, r31, 0x1
	  b         .loc_0x1C0

	.loc_0x168:
	  lhz       r8, 0x10(r3)
	  addi      r6, r7, 0xA
	  li        r10, 0
	  li        r9, 0x5
	  b         .loc_0x194

	.loc_0x17C:
	  lhz       r0, 0x0(r6)
	  cmplwi    r0, 0
	  bne-      .loc_0x18C
	  addi      r10, r10, 0x1

	.loc_0x18C:
	  addi      r6, r6, 0x2
	  addi      r9, r9, 0x1

	.loc_0x194:
	  rlwinm    r0,r9,0,16,31
	  cmplw     r0, r8
	  blt+      .loc_0x17C
	  lhz       r0, 0x6(r7)
	  rlwinm    r6,r10,0,16,31
	  cmplw     r6, r0
	  beq-      .loc_0x1C0
	  li        r0, 0
	  stw       r0, 0x88(r3)
	  addi      r30, r5, 0
	  addi      r31, r31, 0x1

	.loc_0x1C0:
	  addi      r5, r5, 0x1
	  cmpwi     r5, 0x2
	  addi      r4, r4, 0x4
	  blt+      .loc_0x2C
	  cmpwi     r31, 0
	  bne-      .loc_0x258
	  lwz       r4, 0x88(r3)
	  cmplwi    r4, 0
	  bne-      .loc_0x23C
	  lwz       r5, 0x14(r1)
	  lwz       r4, 0x10(r1)
	  lha       r5, 0x4(r5)
	  lha       r0, 0x4(r4)
	  sub.      r0, r0, r5
	  bge-      .loc_0x204
	  li        r30, 0
	  b         .loc_0x208

	.loc_0x204:
	  li        r30, 0x1

	.loc_0x208:
	  rlwinm    r0,r30,2,0,29
	  addi      r6, r1, 0x10
	  add       r6, r6, r0
	  lwz       r4, 0x0(r6)
	  xori      r0, r30, 0x1
	  rlwinm    r0,r0,2,0,29
	  stw       r4, 0x88(r3)
	  addi      r4, r1, 0x10
	  li        r5, 0x2000
	  lwz       r3, 0x0(r6)
	  lwzx      r4, r4, r0
	  bl        -0xD2AD8
	  b         .loc_0x258

	.loc_0x23C:
	  lwz       r0, 0x10(r1)
	  cmplw     r4, r0
	  bne-      .loc_0x250
	  li        r0, 0
	  b         .loc_0x254

	.loc_0x250:
	  li        r0, 0x1

	.loc_0x254:
	  mr        r30, r0

	.loc_0x258:
	  cmplwi    r29, 0
	  beq-      .loc_0x264
	  stw       r30, 0x0(r29)

	.loc_0x264:
	  mr        r3, r31
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D7CC4
 * Size:	00008C
 */
int __CARDVerify(CARDBlock* block)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        -0x760
	  cmpwi     r3, 0
	  bge-      .loc_0x28
	  b         .loc_0x74

	.loc_0x28:
	  addi      r3, r30, 0
	  li        r4, 0
	  bl        -0x4F4
	  addi      r31, r3, 0
	  addi      r3, r30, 0
	  li        r4, 0
	  bl        -0x2C4
	  add       r0, r31, r3
	  cmpwi     r0, 0x1
	  beq-      .loc_0x68
	  bge-      .loc_0x70
	  cmpwi     r0, 0
	  bge-      .loc_0x60
	  b         .loc_0x70

	.loc_0x60:
	  li        r3, 0
	  b         .loc_0x74

	.loc_0x68:
	  li        r3, -0x6
	  b         .loc_0x74

	.loc_0x70:
	  li        r3, -0x6

	.loc_0x74:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800D7D50
 * Size:	000590
 */
void CARDCheckExAsync(int slotIndex, unknown p2, CARDSyncCallback* p3)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x58(r1)
	  stmw      r25, 0x3C(r1)
	  mr.       r26, r4
	  addi      r25, r3, 0
	  addi      r27, r5, 0
	  li        r30, 0
	  li        r29, 0
	  li        r28, 0
	  beq-      .loc_0x34
	  li        r0, 0
	  stw       r0, 0x0(r26)

	.loc_0x34:
	  addi      r3, r25, 0
	  addi      r4, r1, 0x30
	  bl        -0x27C0
	  cmpwi     r3, 0
	  bge-      .loc_0x4C
	  b         .loc_0x57C

	.loc_0x4C:
	  lwz       r3, 0x30(r1)
	  bl        -0x824
	  mr.       r4, r3
	  bge-      .loc_0x68
	  lwz       r3, 0x30(r1)
	  bl        -0x272C
	  b         .loc_0x57C

	.loc_0x68:
	  lwz       r3, 0x30(r1)
	  addi      r4, r1, 0x18
	  bl        -0x5C0
	  mr        r31, r3
	  lwz       r3, 0x30(r1)
	  addi      r4, r1, 0x1C
	  bl        -0x390
	  add       r5, r31, r3
	  cmpwi     r5, 0x1
	  ble-      .loc_0xA0
	  lwz       r3, 0x30(r1)
	  li        r4, -0x6
	  bl        -0x2764
	  b         .loc_0x57C

	.loc_0xA0:
	  lwz       r6, 0x30(r1)
	  lwz       r4, 0x80(r6)
	  addi      r3, r4, 0x2000
	  addi      r0, r4, 0x6000
	  stw       r3, 0x28(r1)
	  addis     r3, r4, 0x1
	  addi      r4, r4, 0x4000
	  stw       r0, 0x20(r1)
	  subi      r0, r3, 0x8000
	  stw       r4, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  beq-      .loc_0xD8
	  bge-      .loc_0x15C
	  b         .loc_0x15C

	.loc_0xD8:
	  addi      r3, r6, 0x84
	  lwz       r0, 0x84(r6)
	  cmplwi    r0, 0
	  bne-      .loc_0x124
	  lwz       r0, 0x18(r1)
	  addi      r4, r1, 0x28
	  li        r5, 0x2000
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r4, r0
	  stw       r0, 0x0(r3)
	  lwz       r3, 0x18(r1)
	  xori      r0, r3, 0x1
	  rlwinm    r3,r3,2,0,29
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r4, r3
	  lwzx      r4, r4, r0
	  bl        -0xD2CCC
	  li        r29, 0x1
	  b         .loc_0x15C

	.loc_0x124:
	  lwz       r0, 0x1C(r1)
	  addi      r4, r1, 0x20
	  li        r5, 0x2000
	  rlwinm    r0,r0,2,0,29
	  lwzx      r0, r4, r0
	  stw       r0, 0x88(r6)
	  lwz       r3, 0x1C(r1)
	  xori      r0, r3, 0x1
	  rlwinm    r3,r3,2,0,29
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r4, r3
	  lwzx      r4, r4, r0
	  bl        -0xD2D08
	  li        r30, 0x1

	.loc_0x15C:
	  lwz       r0, 0x1C(r1)
	  addi      r3, r1, 0x20
	  li        r4, 0
	  xori      r0, r0, 0x1
	  rlwinm    r0,r0,2,0,29
	  lwzx      r31, r3, r0
	  li        r5, 0x2000
	  addi      r3, r31, 0
	  bl        -0xD2E18
	  li        r0, 0x7F
	  lwz       r5, 0x30(r1)
	  mtctr     r0
	  li        r6, 0

	.loc_0x190:
	  lwz       r0, 0x84(r5)
	  add       r7, r0, r6
	  lbz       r0, 0x0(r7)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x248
	  lhz       r4, 0x36(r7)
	  li        r8, 0
	  b         .loc_0x200

	.loc_0x1B0:
	  rlwinm    r3,r4,0,16,31
	  cmplwi    r3, 0x5
	  blt-      .loc_0x1E4
	  lhz       r0, 0x10(r5)
	  cmplw     r3, r0
	  bge-      .loc_0x1E4
	  rlwinm    r4,r3,1,0,30
	  lhzx      r3, r31, r4
	  addi      r3, r3, 0x1
	  rlwinm    r0,r3,0,16,31
	  sthx      r3, r31, r4
	  cmplwi    r0, 0x1
	  ble-      .loc_0x1F4

	.loc_0x1E4:
	  lwz       r3, 0x30(r1)
	  li        r4, -0x6
	  bl        -0x28B8
	  b         .loc_0x57C

	.loc_0x1F4:
	  lwz       r3, 0x88(r5)
	  addi      r8, r8, 0x1
	  lhzx      r4, r3, r4

	.loc_0x200:
	  rlwinm    r0,r4,0,16,31
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x21C
	  lhz       r0, 0x38(r7)
	  rlwinm    r3,r8,0,16,31
	  cmplw     r3, r0
	  blt+      .loc_0x1B0

	.loc_0x21C:
	  lhz       r0, 0x38(r7)
	  rlwinm    r3,r8,0,16,31
	  cmplw     r3, r0
	  bne-      .loc_0x238
	  rlwinm    r0,r4,0,16,31
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x248

	.loc_0x238:
	  lwz       r3, 0x30(r1)
	  li        r4, -0x6
	  bl        -0x290C
	  b         .loc_0x57C

	.loc_0x248:
	  addi      r6, r6, 0x40
	  bdnz+     .loc_0x190
	  lwz       r3, 0x30(r1)
	  addi      r6, r31, 0xA
	  li        r9, 0
	  li        r8, 0x5
	  li        r5, 0xA
	  b         .loc_0x2CC

	.loc_0x268:
	  lwz       r4, 0x88(r3)
	  lhz       r0, 0x0(r6)
	  add       r4, r4, r5
	  cmplwi    r0, 0
	  lhz       r0, 0x0(r4)
	  bne-      .loc_0x29C
	  cmplwi    r0, 0
	  beq-      .loc_0x294
	  li        r0, 0
	  sth       r0, 0x0(r4)
	  li        r28, 0x1

	.loc_0x294:
	  addi      r9, r9, 0x1
	  b         .loc_0x2C0

	.loc_0x29C:
	  cmplwi    r0, 0x5
	  blt-      .loc_0x2AC
	  cmplw     r0, r7
	  blt-      .loc_0x2C0

	.loc_0x2AC:
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x2C0
	  li        r4, -0x6
	  bl        -0x2984
	  b         .loc_0x57C

	.loc_0x2C0:
	  addi      r5, r5, 0x2
	  addi      r6, r6, 0x2
	  addi      r8, r8, 0x1

	.loc_0x2CC:
	  lhz       r7, 0x10(r3)
	  rlwinm    r0,r8,0,16,31
	  cmplw     r0, r7
	  blt+      .loc_0x268
	  lwz       r3, 0x88(r3)
	  rlwinm    r4,r9,0,16,31
	  lhzu      r0, 0x6(r3)
	  cmplw     r4, r0
	  beq-      .loc_0x2F8
	  sth       r9, 0x0(r3)
	  li        r28, 0x1

	.loc_0x2F8:
	  cmpwi     r28, 0
	  beq-      .loc_0x4C4
	  lwz       r3, 0x30(r1)
	  li        r4, 0x1FFC
	  srawi     r4, r4, 0x1
	  lwz       r6, 0x88(r3)
	  li        r0, 0
	  addze.    r4, r4
	  sth       r0, 0x2(r6)
	  addi      r7, r6, 0x2
	  addi      r5, r6, 0x4
	  sth       r0, 0x0(r6)
	  addi      r3, r4, 0
	  ble-      .loc_0x49C
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x46C

	.loc_0x33C:
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0x0(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0x0(r5)
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0x2(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0x2(r5)
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0x4(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0x4(r5)
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0x6(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0x6(r5)
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0x8(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0x8(r5)
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0xA(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0xA(r5)
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0xC(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0xC(r5)
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0xE(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0xE(r5)
	  addi      r5, r5, 0x10
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  bdnz+     .loc_0x33C
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x49C

	.loc_0x46C:
	  mtctr     r3

	.loc_0x470:
	  lhz       r4, 0x0(r6)
	  lhz       r0, 0x0(r5)
	  add       r0, r4, r0
	  sth       r0, 0x0(r6)
	  lhz       r0, 0x0(r5)
	  addi      r5, r5, 0x2
	  lhz       r4, 0x0(r7)
	  not       r0, r0
	  add       r0, r4, r0
	  sth       r0, 0x0(r7)
	  bdnz+     .loc_0x470

	.loc_0x49C:
	  lhz       r0, 0x0(r6)
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x4B0
	  li        r0, 0
	  sth       r0, 0x0(r6)

	.loc_0x4B0:
	  lhz       r0, 0x0(r7)
	  cmplwi    r0, 0xFFFF
	  bne-      .loc_0x4C4
	  li        r0, 0
	  sth       r0, 0x0(r7)

	.loc_0x4C4:
	  lwz       r6, 0x1C(r1)
	  addi      r4, r1, 0x20
	  li        r5, 0x2000
	  xori      r0, r6, 0x1
	  rlwinm    r3,r0,2,0,29
	  rlwinm    r0,r6,2,0,29
	  lwzx      r3, r4, r3
	  lwzx      r4, r4, r0
	  bl        -0xD3098
	  cmpwi     r29, 0
	  beq-      .loc_0x510
	  cmplwi    r26, 0
	  beq-      .loc_0x500
	  li        r0, 0x2000
	  stw       r0, 0x0(r26)

	.loc_0x500:
	  addi      r3, r25, 0
	  addi      r4, r27, 0
	  bl        -0xF50
	  b         .loc_0x57C

	.loc_0x510:
	  or.       r0, r30, r28
	  beq-      .loc_0x540
	  cmplwi    r26, 0
	  beq-      .loc_0x528
	  li        r0, 0x2000
	  stw       r0, 0x0(r26)

	.loc_0x528:
	  lwz       r4, 0x30(r1)
	  addi      r3, r25, 0
	  addi      r5, r27, 0
	  lwz       r4, 0x88(r4)
	  bl        -0x11CC
	  b         .loc_0x57C

	.loc_0x540:
	  lwz       r3, 0x30(r1)
	  li        r4, 0
	  bl        -0x2C14
	  cmplwi    r27, 0
	  beq-      .loc_0x578
	  bl        0x16994
	  addi      r12, r27, 0
	  mtlr      r12
	  addi      r26, r3, 0
	  addi      r3, r25, 0
	  li        r4, 0
	  blrl
	  mr        r3, r26
	  bl        0x1699C

	.loc_0x578:
	  li        r3, 0

	.loc_0x57C:
	  lmw       r25, 0x3C(r1)
	  lwz       r0, 0x5C(r1)
	  addi      r1, r1, 0x58
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000028
 */
void CARDCheckAsync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void CARDCheckEx(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800D82E0
 * Size:	000054
 */
void CARDCheck(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r4, 0x800D
	  stw       r0, 0x4(r1)
	  addi      r5, r4, 0x4670
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r3, 0
	  addi      r4, r1, 0xC
	  bl        -0x5B0
	  cmpwi     r3, 0
	  blt-      .loc_0x40
	  addic.    r0, r1, 0xC
	  bne-      .loc_0x38
	  b         .loc_0x40

	.loc_0x38:
	  mr        r3, r31
	  bl        -0x2AE4

	.loc_0x40:
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}
