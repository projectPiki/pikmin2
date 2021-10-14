#include "THP/THPDraw.h"
#include "Dolphin/gx.h"

/*
 * --INFO--
 * Address:	8044D684
 * Size:	000118
 */
void THPGXRestore(void)
{
	GXSetZMode(1, 7, 0);
	GXSetBlendMode(0, 1, 0, 0xf);
	GXSetNumTexGens(1);
	GXSetNumChans(0);
	GXSetNumTevStages(1);
	GXSetTevOrder(0, 0, 0, 0xff);
	GXSetTevOp(0, 3);
	GXSetTevSwapMode(0, 0, 0);
	GXSetTevSwapMode(1, 0, 0);
	GXSetTevSwapMode(2, 0, 0);
	GXSetTevSwapMode(3, 0, 0);
	GXSetTevSwapModeTable(0, 0, 1, 2, 3);
	GXSetTevSwapModeTable(1, 0, 0, 0, 3);
	GXSetTevSwapModeTable(2, 1, 1, 1, 3);
	GXSetTevSwapModeTable(3, 2, 2, 2, 3);
}

//
///*
// * --INFO--
// * Address:	8044D79C
// * Size:	0004C0
// */
// void THPGXYuv2RgbSetup(void)
//{
///*
//.loc_0x0:
//  stwu      r1, -0xC0(r1)
//  mflr      r0
//  li        r4, 0
//  stw       r0, 0xC4(r1)
//  stw       r31, 0xBC(r1)
//  stw       r30, 0xB8(r1)
//  lhz       r31, 0x4(r3)
//  lhz       r30, 0x6(r3)
//  li        r3, 0
//  bl        -0x3645D4
//  lis       r4, 0x4330
//  xoris     r3, r30, 0x8000
//  xoris     r0, r31, 0x8000
//  stw       r3, 0x94(r1)
//  lfs       f1, 0x2784(r2)
//  addi      r3, r1, 0x4C
//  stw       r4, 0x90(r1)
//  lfd       f4, 0x2790(r2)
//  fmr       f3, f1
//  lfd       f0, 0x90(r1)
//  fmr       f5, f1
//  stw       r0, 0x9C(r1)
//  fsubs     f2, f0, f4
//  lfs       f6, 0x2788(r2)
//  stw       r4, 0x98(r1)
//  lfd       f0, 0x98(r1)
//  fsubs     f4, f0, f4
//  bl        -0x362A30
//  addi      r3, r1, 0x4C
//  li        r4, 0x1
//  bl        -0x3643CC
//  lis       r3, 0x4330
//  xoris     r4, r31, 0x8000
//  xoris     r0, r30, 0x8000
//  stw       r4, 0xA4(r1)
//  lfs       f1, 0x2784(r2)
//  stw       r3, 0xA0(r1)
//  lfd       f4, 0x2790(r2)
//  fmr       f2, f1
//  lfd       f0, 0xA0(r1)
//  fmr       f5, f1
//  stw       r0, 0xAC(r1)
//  fsubs     f3, f0, f4
//  lfs       f6, 0x278C(r2)
//  stw       r3, 0xA8(r1)
//  lfd       f0, 0xA8(r1)
//  fsubs     f4, f0, f4
//  bl        -0x3640C8
//  mr        r5, r31
//  mr        r6, r30
//  li        r3, 0
//  li        r4, 0
//  bl        -0x364094
//  addi      r3, r1, 0x1C
//  bl        -0x3635D4
//  addi      r3, r1, 0x1C
//  li        r4, 0
//  bl        -0x364308
//  li        r3, 0
//  bl        -0x364270
//  li        r3, 0x1
//  li        r4, 0x7
//  li        r5, 0
//  bl        -0x364714
//  li        r3, 0
//  li        r4, 0x1
//  li        r5, 0
//  li        r6, 0
//  bl        -0x3647D4
//  li        r3, 0x1
//  bl        -0x364788
//  li        r3, 0
//  bl        -0x364764
//  li        r3, 0
//  bl        -0x367394
//  li        r3, 0
//  bl        -0x366A68
//  li        r3, 0x2
//  bl        -0x368938
//  li        r3, 0
//  li        r4, 0x1
//  li        r5, 0x4
//  li        r6, 0x3C
//  li        r7, 0
//  li        r8, 0x7D
//  bl        -0x368BD4
//  li        r3, 0x1
//  li        r4, 0x1
//  li        r5, 0x4
//  li        r6, 0x3C
//  li        r7, 0
//  li        r8, 0x7D
//  bl        -0x368BF0
//  bl        -0x365FB0
//  bl        -0x369244
//  li        r3, 0x9
//  li        r4, 0x1
//  bl        -0x36969C
//  li        r3, 0xD
//  li        r4, 0x1
//  bl        -0x3696A8
//  li        r3, 0x7
//  li        r4, 0x9
//  li        r5, 0x1
//  li        r6, 0x3
//  li        r7, 0
//  bl        -0x36923C
//  li        r3, 0x7
//  li        r4, 0xD
//  li        r5, 0x1
//  li        r6, 0x2
//  li        r7, 0
//  bl        -0x369254
//  li        r3, 0x4
//  bl        -0x364DAC
//  li        r3, 0
//  li        r4, 0x1
//  li        r5, 0x1
//  li        r6, 0xFF
//  bl        -0x364F5C
//  li        r3, 0
//  li        r4, 0xF
//  li        r5, 0x8
//  li        r6, 0xE
//  li        r7, 0x2
//  bl        -0x365488
//  li        r3, 0
//  li        r4, 0
//  li        r5, 0
//  li        r6, 0
//  li        r7, 0
//  li        r8, 0
//  bl        -0x36541C
//  li        r3, 0
//  li        r4, 0x7
//  li        r5, 0x4
//  li        r6, 0x6
//  li        r7, 0x1
//  bl        -0x365478
//  li        r3, 0
//  li        r4, 0x1
//  li        r5, 0
//  li        r6, 0
//  li        r7, 0
//  li        r8, 0
//  bl        -0x3653E8
//  li        r3, 0
//  li        r4, 0xC
//  bl        -0x365220
//  li        r3, 0
//  li        r4, 0x1C
//  bl        -0x3651D0
//  li        r3, 0
//  li        r4, 0
//  li        r5, 0
//  bl        -0x365184
//  li        r3, 0x1
//  li        r4, 0x1
//  li        r5, 0x2
//  li        r6, 0xFF
//  bl        -0x365000
//  li        r3, 0x1
//  li        r4, 0xF
//  li        r5, 0x8
//  li        r6, 0xE
//  li        r7, 0
//  bl        -0x36552C
//  li        r3, 0x1
//  li        r4, 0
//  li        r5, 0
//  li        r6, 0x1
//  li        r7, 0
//  li        r8, 0
//  bl        -0x3654C0
//  li        r3, 0x1
//  li        r4, 0x7
//  li        r5, 0x4
//  li        r6, 0x6
//  li        r7, 0
//  bl        -0x36551C
//  li        r3, 0x1
//  li        r4, 0x1
//  li        r5, 0
//  li        r6, 0
//  li        r7, 0
//  li        r8, 0
//  bl        -0x36548C
//  li        r3, 0x1
//  li        r4, 0xD
//  bl        -0x3652C4
//  li        r3, 0x1
//  li        r4, 0x1D
//  bl        -0x365274
//  li        r3, 0x1
//  li        r4, 0
//  li        r5, 0
//  bl        -0x365228
//  li        r3, 0x2
//  li        r4, 0
//  li        r5, 0
//  li        r6, 0xFF
//  bl        -0x3650A4
//  li        r3, 0x2
//  li        r4, 0xF
//  li        r5, 0x8
//  li        r6, 0xC
//  li        r7, 0
//  bl        -0x3655D0
//  li        r3, 0x2
//  li        r4, 0
//  li        r5, 0
//  li        r6, 0
//  li        r7, 0x1
//  li        r8, 0
//  bl        -0x365564
//  li        r3, 0x2
//  li        r4, 0x4
//  li        r5, 0x7
//  li        r6, 0x7
//  li        r7, 0
//  bl        -0x3655C0
//  li        r3, 0x2
//  li        r4, 0
//  li        r5, 0
//  li        r6, 0
//  li        r7, 0x1
//  li        r8, 0
//  bl        -0x365530
//  li        r3, 0x2
//  li        r4, 0
//  li        r5, 0
//  bl        -0x3652B4
//  li        r3, 0x3
//  li        r4, 0xFF
//  li        r5, 0xFF
//  li        r6, 0xFF
//  bl        -0x365130
//  li        r3, 0x3
//  li        r4, 0x1
//  li        r5, 0
//  li        r6, 0xE
//  li        r7, 0xF
//  bl        -0x36565C
//  li        r3, 0x3
//  li        r4, 0
//  li        r5, 0
//  li        r6, 0
//  li        r7, 0x1
//  li        r8, 0
//  bl        -0x3655F0
//  li        r3, 0x3
//  li        r4, 0x7
//  li        r5, 0x7
//  li        r6, 0x7
//  li        r7, 0x6
//  bl        -0x36564C
//  li        r3, 0x3
//  li        r4, 0
//  li        r5, 0
//  li        r6, 0
//  li        r7, 0x1
//  li        r8, 0
//  bl        -0x3655BC
//  li        r3, 0x3
//  li        r4, 0
//  li        r5, 0
//  bl        -0x365340
//  li        r3, 0x3
//  li        r4, 0xE
//  bl        -0x365404
//  lwz       r5, 0x2770(r2)
//  addi      r4, r1, 0x14
//  lwz       r0, 0x2774(r2)
//  li        r3, 0x1
//  stw       r5, 0x14(r1)
//  stw       r0, 0x18(r1)
//  bl        -0x365510
//  lwz       r0, 0x2778(r2)
//  addi      r4, r1, 0x10
//  li        r3, 0
//  stw       r0, 0x10(r1)
//  bl        -0x3654A8
//  lwz       r0, 0x277C(r2)
//  addi      r4, r1, 0xC
//  li        r3, 0x1
//  stw       r0, 0xC(r1)
//  bl        -0x3654BC
//  lwz       r0, 0x2780(r2)
//  addi      r4, r1, 0x8
//  li        r3, 0x2
//  stw       r0, 0x8(r1)
//  bl        -0x3654D0
//  li        r3, 0
//  li        r4, 0
//  li        r5, 0x1
//  li        r6, 0x2
//  li        r7, 0x3
//  bl        -0x365374
//  lwz       r0, 0xC4(r1)
//  lwz       r31, 0xBC(r1)
//  lwz       r30, 0xB8(r1)
//  mtlr      r0
//  addi      r1, r1, 0xC0
//  blr
//*/
//}
//
///*
// * --INFO--
// * Address:	8044DC5C
// * Size:	0001DC
// */
// void THPGXYuv2RgbDraw(void)
//{
///*
//.loc_0x0:
//  stwu      r1, -0x90(r1)
//  mflr      r0
//  stw       r0, 0x94(r1)
//  stmw      r24, 0x70(r1)
//  mr        r24, r4
//  mr        r25, r5
//  mr        r30, r6
//  mr        r31, r7
//  mr        r26, r10
//  mr        r4, r3
//  lha       r27, 0x9A(r1)
//  mr        r29, r8
//  rlwinm    r5,r8,0,16,31
//  mr        r28, r9
//  rlwinm    r6,r9,0,16,31
//  addi      r3, r1, 0x48
//  li        r7, 0x1
//  li        r8, 0
//  li        r9, 0
//  li        r10, 0
//  bl        -0x366B30
//  lfs       f1, 0x2784(r2)
//  addi      r3, r1, 0x48
//  li        r4, 0
//  li        r5, 0
//  fmr       f2, f1
//  li        r6, 0
//  fmr       f3, f1
//  li        r7, 0
//  li        r8, 0
//  bl        -0x3668C4
//  addi      r3, r1, 0x48
//  li        r4, 0
//  bl        -0x3665D0
//  extsh     r3, r29
//  extsh     r0, r28
//  srawi     r28, r3, 0x1
//  mr        r4, r24
//  srawi     r29, r0, 0x1
//  addi      r3, r1, 0x28
//  rlwinm    r5,r28,0,16,31
//  li        r7, 0x1
//  rlwinm    r6,r29,0,16,31
//  li        r8, 0
//  li        r9, 0
//  li        r10, 0
//  bl        -0x366B98
//  lfs       f1, 0x2784(r2)
//  addi      r3, r1, 0x28
//  li        r4, 0
//  li        r5, 0
//  fmr       f2, f1
//  li        r6, 0
//  fmr       f3, f1
//  li        r7, 0
//  li        r8, 0
//  bl        -0x36692C
//  addi      r3, r1, 0x28
//  li        r4, 0x1
//  bl        -0x366638
//  mr        r4, r25
//  addi      r3, r1, 0x8
//  rlwinm    r5,r28,0,16,31
//  rlwinm    r6,r29,0,16,31
//  li        r7, 0x1
//  li        r8, 0
//  li        r9, 0
//  li        r10, 0
//  bl        -0x366BF0
//  lfs       f1, 0x2784(r2)
//  addi      r3, r1, 0x8
//  li        r4, 0
//  li        r5, 0
//  fmr       f2, f1
//  li        r6, 0
//  fmr       f3, f1
//  li        r7, 0
//  li        r8, 0
//  bl        -0x366984
//  addi      r3, r1, 0x8
//  li        r4, 0x2
//  bl        -0x366690
//  li        r3, 0x80
//  li        r4, 0x7
//  li        r5, 0x4
//  bl        -0x368428
//  lis       r4, 0xCC01
//  extsh     r0, r31
//  sth       r30, -0x8000(r4)
//  add       r6, r0, r27
//  li        r3, 0
//  extsh     r5, r30
//  sth       r31, -0x8000(r4)
//  extsh     r0, r26
//  add       r5, r5, r0
//  sth       r3, -0x8000(r4)
//  li        r0, 0x1
//  sth       r3, -0x8000(r4)
//  sth       r3, -0x8000(r4)
//  sth       r5, -0x8000(r4)
//  sth       r31, -0x8000(r4)
//  sth       r3, -0x8000(r4)
//  sth       r0, -0x8000(r4)
//  sth       r3, -0x8000(r4)
//  sth       r5, -0x8000(r4)
//  sth       r6, -0x8000(r4)
//  sth       r3, -0x8000(r4)
//  sth       r0, -0x8000(r4)
//  sth       r0, -0x8000(r4)
//  sth       r30, -0x8000(r4)
//  sth       r6, -0x8000(r4)
//  sth       r3, -0x8000(r4)
//  sth       r3, -0x8000(r4)
//  sth       r0, -0x8000(r4)
//  lmw       r24, 0x70(r1)
//  lwz       r0, 0x94(r1)
//  mtlr      r0
//  addi      r1, r1, 0x90
//  blr
//*/
//}