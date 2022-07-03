#include "Dolphin/os.h"

/*
 * --INFO--
 * Address:	800ECD50
 * Size:	000124
 */
void __OSLoadFPUContext(void)
{
	/*
	.loc_0x0:
	  lhz       r5, 0x1A2(r4)
	  rlwinm.   r5,r5,0,31,31
	  beq-      .loc_0x120
	  lfd       f0, 0x190(r4)
	  mtfsf     255, f0
	  mfspr     r5, 0x398
	  rlwinm.   r5,r5,3,31,31
	  beq-      .loc_0xA0
	  psq_l     f0,0x1C8(r4),0,0
	  psq_l     f1,0x1D0(r4),0,0
	  psq_l     f2,0x1D8(r4),0,0
	  psq_l     f3,0x1E0(r4),0,0
	  psq_l     f4,0x1E8(r4),0,0
	  psq_l     f5,0x1F0(r4),0,0
	  psq_l     f6,0x1F8(r4),0,0
	  psq_l     f7,0x200(r4),0,0
	  psq_l     f8,0x208(r4),0,0
	  psq_l     f9,0x210(r4),0,0
	  psq_l     f10,0x218(r4),0,0
	  psq_l     f11,0x220(r4),0,0
	  psq_l     f12,0x228(r4),0,0
	  psq_l     f13,0x230(r4),0,0
	  psq_l     f14,0x238(r4),0,0
	  psq_l     f15,0x240(r4),0,0
	  psq_l     f16,0x248(r4),0,0
	  psq_l     f17,0x250(r4),0,0
	  psq_l     f18,0x258(r4),0,0
	  psq_l     f19,0x260(r4),0,0
	  psq_l     f20,0x268(r4),0,0
	  psq_l     f21,0x270(r4),0,0
	  psq_l     f22,0x278(r4),0,0
	  psq_l     f23,0x280(r4),0,0
	  psq_l     f24,0x288(r4),0,0
	  psq_l     f25,0x290(r4),0,0
	  psq_l     f26,0x298(r4),0,0
	  psq_l     f27,0x2A0(r4),0,0
	  psq_l     f28,0x2A8(r4),0,0
	  psq_l     f29,0x2B0(r4),0,0
	  psq_l     f30,0x2B8(r4),0,0
	  psq_l     f31,0x2C0(r4),0,0

	.loc_0xA0:
	  lfd       f0, 0x90(r4)
	  lfd       f1, 0x98(r4)
	  lfd       f2, 0xA0(r4)
	  lfd       f3, 0xA8(r4)
	  lfd       f4, 0xB0(r4)
	  lfd       f5, 0xB8(r4)
	  lfd       f6, 0xC0(r4)
	  lfd       f7, 0xC8(r4)
	  lfd       f8, 0xD0(r4)
	  lfd       f9, 0xD8(r4)
	  lfd       f10, 0xE0(r4)
	  lfd       f11, 0xE8(r4)
	  lfd       f12, 0xF0(r4)
	  lfd       f13, 0xF8(r4)
	  lfd       f14, 0x100(r4)
	  lfd       f15, 0x108(r4)
	  lfd       f16, 0x110(r4)
	  lfd       f17, 0x118(r4)
	  lfd       f18, 0x120(r4)
	  lfd       f19, 0x128(r4)
	  lfd       f20, 0x130(r4)
	  lfd       f21, 0x138(r4)
	  lfd       f22, 0x140(r4)
	  lfd       f23, 0x148(r4)
	  lfd       f24, 0x150(r4)
	  lfd       f25, 0x158(r4)
	  lfd       f26, 0x160(r4)
	  lfd       f27, 0x168(r4)
	  lfd       f28, 0x170(r4)
	  lfd       f29, 0x178(r4)
	  lfd       f30, 0x180(r4)
	  lfd       f31, 0x188(r4)

	.loc_0x120:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ECE74
 * Size:	000128
 */
void __OSSaveFPUContext(void)
{
	/*
	.loc_0x0:
	  lhz       r3, 0x1A2(r5)
	  ori       r3, r3, 0x1
	  sth       r3, 0x1A2(r5)
	  stfd      f0, 0x90(r5)
	  stfd      f1, 0x98(r5)
	  stfd      f2, 0xA0(r5)
	  stfd      f3, 0xA8(r5)
	  stfd      f4, 0xB0(r5)
	  stfd      f5, 0xB8(r5)
	  stfd      f6, 0xC0(r5)
	  stfd      f7, 0xC8(r5)
	  stfd      f8, 0xD0(r5)
	  stfd      f9, 0xD8(r5)
	  stfd      f10, 0xE0(r5)
	  stfd      f11, 0xE8(r5)
	  stfd      f12, 0xF0(r5)
	  stfd      f13, 0xF8(r5)
	  stfd      f14, 0x100(r5)
	  stfd      f15, 0x108(r5)
	  stfd      f16, 0x110(r5)
	  stfd      f17, 0x118(r5)
	  stfd      f18, 0x120(r5)
	  stfd      f19, 0x128(r5)
	  stfd      f20, 0x130(r5)
	  stfd      f21, 0x138(r5)
	  stfd      f22, 0x140(r5)
	  stfd      f23, 0x148(r5)
	  stfd      f24, 0x150(r5)
	  stfd      f25, 0x158(r5)
	  stfd      f26, 0x160(r5)
	  stfd      f27, 0x168(r5)
	  stfd      f28, 0x170(r5)
	  stfd      f29, 0x178(r5)
	  stfd      f30, 0x180(r5)
	  stfd      f31, 0x188(r5)
	  mffs      f0
	  stfd      f0, 0x190(r5)
	  lfd       f0, 0x90(r5)
	  mfspr     r3, 0x398
	  rlwinm.   r3,r3,3,31,31
	  beq-      .loc_0x124
	  psq_st    f0,0x1C8(r5),0,0
	  psq_st    f1,0x1D0(r5),0,0
	  psq_st    f2,0x1D8(r5),0,0
	  psq_st    f3,0x1E0(r5),0,0
	  psq_st    f4,0x1E8(r5),0,0
	  psq_st    f5,0x1F0(r5),0,0
	  psq_st    f6,0x1F8(r5),0,0
	  psq_st    f7,0x200(r5),0,0
	  psq_st    f8,0x208(r5),0,0
	  psq_st    f9,0x210(r5),0,0
	  psq_st    f10,0x218(r5),0,0
	  psq_st    f11,0x220(r5),0,0
	  psq_st    f12,0x228(r5),0,0
	  psq_st    f13,0x230(r5),0,0
	  psq_st    f14,0x238(r5),0,0
	  psq_st    f15,0x240(r5),0,0
	  psq_st    f16,0x248(r5),0,0
	  psq_st    f17,0x250(r5),0,0
	  psq_st    f18,0x258(r5),0,0
	  psq_st    f19,0x260(r5),0,0
	  psq_st    f20,0x268(r5),0,0
	  psq_st    f21,0x270(r5),0,0
	  psq_st    f22,0x278(r5),0,0
	  psq_st    f23,0x280(r5),0,0
	  psq_st    f24,0x288(r5),0,0
	  psq_st    f25,0x290(r5),0,0
	  psq_st    f26,0x298(r5),0,0
	  psq_st    f27,0x2A0(r5),0,0
	  psq_st    f28,0x2A8(r5),0,0
	  psq_st    f29,0x2B0(r5),0,0
	  psq_st    f30,0x2B8(r5),0,0
	  psq_st    f31,0x2C0(r5),0,0

	.loc_0x124:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void OSLoadFPUContext(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ECF9C
 * Size:	000008
 */
void OSSaveFPUContext(void)
{
	/*
	.loc_0x0:
	  addi      r5, r3, 0
	  b         -0x12C
	*/
}

/*
 * --INFO--
 * Address:	800ECFA4
 * Size:	00005C
 */
void OSSetCurrentContext(OSContext* context)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8000
	  stw       r3, 0xD4(r4)
	  rlwinm    r5,r3,0,2,31
	  stw       r5, 0xC0(r4)
	  lwz       r5, 0xD8(r4)
	  cmpw      r5, r3
	  bne-      .loc_0x38
	  lwz       r6, 0x19C(r3)
	  ori       r6, r6, 0x2000
	  stw       r6, 0x19C(r3)
	  mfmsr     r6
	  ori       r6, r6, 0x2
	  mtmsr     r6
	  blr

	.loc_0x38:
	  lwz       r6, 0x19C(r3)
	  rlwinm    r6,r6,0,19,17
	  stw       r6, 0x19C(r3)
	  mfmsr     r6
	  rlwinm    r6,r6,0,19,17
	  ori       r6, r6, 0x2
	  mtmsr     r6
	  isync
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ED000
 * Size:	00000C
 */
void OSGetCurrentContext(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8000
	  lwz       r3, 0xD4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ED00C
 * Size:	000080
 */
void OSSaveContext(void)
{
	/*
	.loc_0x0:
	  stmw      r13, 0x34(r3)
	  mfspr     r0, 0x391
	  stw       r0, 0x1A8(r3)
	  mfspr     r0, 0x392
	  stw       r0, 0x1AC(r3)
	  mfspr     r0, 0x393
	  stw       r0, 0x1B0(r3)
	  mfspr     r0, 0x394
	  stw       r0, 0x1B4(r3)
	  mfspr     r0, 0x395
	  stw       r0, 0x1B8(r3)
	  mfspr     r0, 0x396
	  stw       r0, 0x1BC(r3)
	  mfspr     r0, 0x397
	  stw       r0, 0x1C0(r3)
	  mfcr      r0
	  stw       r0, 0x80(r3)
	  mflr      r0
	  stw       r0, 0x84(r3)
	  stw       r0, 0x198(r3)
	  mfmsr     r0
	  stw       r0, 0x19C(r3)
	  mfctr     r0
	  stw       r0, 0x88(r3)
	  mfxer     r0
	  stw       r0, 0x8C(r3)
	  stw       r1, 0x4(r3)
	  stw       r2, 0x8(r3)
	  li        r0, 0x1
	  stw       r0, 0xC(r3)
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ED08C
 * Size:	0000D8
 */
void OSLoadContext(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x800F
	  lwz       r6, 0x198(r3)
	  subi      r5, r4, 0x13C8
	  cmplw     r6, r5
	  ble-      .loc_0x28
	  lis       r4, 0x800F
	  subi      r0, r4, 0x13BC
	  cmplw     r6, r0
	  bge-      .loc_0x28
	  stw       r5, 0x198(r3)

	.loc_0x28:
	  lwz       r0, 0x0(r3)
	  lwz       r1, 0x4(r3)
	  lwz       r2, 0x8(r3)
	  lhz       r4, 0x1A2(r3)
	  rlwinm.   r5,r4,0,30,30
	  beq-      .loc_0x50
	  rlwinm    r4,r4,0,31,29
	  sth       r4, 0x1A2(r3)
	  lmw       r5, 0x14(r3)
	  b         .loc_0x54

	.loc_0x50:
	  lmw       r13, 0x34(r3)

	.loc_0x54:
	  lwz       r4, 0x1A8(r3)
	  mtspr     913, r4
	  lwz       r4, 0x1AC(r3)
	  mtspr     914, r4
	  lwz       r4, 0x1B0(r3)
	  mtspr     915, r4
	  lwz       r4, 0x1B4(r3)
	  mtspr     916, r4
	  lwz       r4, 0x1B8(r3)
	  mtspr     917, r4
	  lwz       r4, 0x1BC(r3)
	  mtspr     918, r4
	  lwz       r4, 0x1C0(r3)
	  mtspr     919, r4
	  lwz       r4, 0x80(r3)
	  mtcr      r4
	  lwz       r4, 0x84(r3)
	  mtlr      r4
	  lwz       r4, 0x88(r3)
	  mtctr     r4
	  lwz       r4, 0x8C(r3)
	  mtxer     r4
	  mfmsr     r4
	  rlwinm    r4,r4,0,17,15
	  rlwinm    r4,r4,0,31,29
	  mtmsr     r4
	  lwz       r4, 0x198(r3)
	  mtsrr0    r4
	  lwz       r4, 0x19C(r3)
	  mtsrr1    r4
	  lwz       r4, 0x10(r3)
	  lwz       r3, 0xC(r3)
	  rfi
	*/
}

/*
 * --INFO--
 * Address:	800ED164
 * Size:	000008
 */
void OSGetStackPointer(void)
{
	/*
	.loc_0x0:
	  mr        r3, r1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void OSSwitchStack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void OSSwitchFiber(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800ED16C
 * Size:	000024
 */
void OSClearContext(OSContext* context)
{
	/*
	.loc_0x0:
	  li        r5, 0
	  sth       r5, 0x1A0(r3)
	  lis       r4, 0x8000
	  sth       r5, 0x1A2(r3)
	  lwz       r0, 0xD8(r4)
	  cmplw     r3, r0
	  bne-      .loc_0x20
	  stw       r5, 0xD8(r4)

	.loc_0x20:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ED190
 * Size:	0000BC
 */
void OSInitContext(void)
{
	/*
	.loc_0x0:
	  stw       r4, 0x198(r3)
	  stw       r5, 0x4(r3)
	  li        r11, 0
	  ori       r11, r11, 0x9032
	  stw       r11, 0x19C(r3)
	  li        r0, 0
	  stw       r0, 0x80(r3)
	  stw       r0, 0x8C(r3)
	  stw       r2, 0x8(r3)
	  stw       r13, 0x34(r3)
	  stw       r0, 0xC(r3)
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  stw       r0, 0x18(r3)
	  stw       r0, 0x1C(r3)
	  stw       r0, 0x20(r3)
	  stw       r0, 0x24(r3)
	  stw       r0, 0x28(r3)
	  stw       r0, 0x2C(r3)
	  stw       r0, 0x30(r3)
	  stw       r0, 0x38(r3)
	  stw       r0, 0x3C(r3)
	  stw       r0, 0x40(r3)
	  stw       r0, 0x44(r3)
	  stw       r0, 0x48(r3)
	  stw       r0, 0x4C(r3)
	  stw       r0, 0x50(r3)
	  stw       r0, 0x54(r3)
	  stw       r0, 0x58(r3)
	  stw       r0, 0x5C(r3)
	  stw       r0, 0x60(r3)
	  stw       r0, 0x64(r3)
	  stw       r0, 0x68(r3)
	  stw       r0, 0x6C(r3)
	  stw       r0, 0x70(r3)
	  stw       r0, 0x74(r3)
	  stw       r0, 0x78(r3)
	  stw       r0, 0x7C(r3)
	  stw       r0, 0x1A4(r3)
	  stw       r0, 0x1A8(r3)
	  stw       r0, 0x1AC(r3)
	  stw       r0, 0x1B0(r3)
	  stw       r0, 0x1B4(r3)
	  stw       r0, 0x1B8(r3)
	  stw       r0, 0x1BC(r3)
	  stw       r0, 0x1C0(r3)
	  b         -0xDC
	*/
}

/*
 * --INFO--
 * Address:	800ED24C
 * Size:	0002A8
 */
void OSDumpContext(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2F8(r1)
	  stmw      r25, 0x2DC(r1)
	  mr        r28, r3
	  lis       r3, 0x804B
	  crclr     6, 0x6
	  subi      r31, r3, 0x7248
	  mr        r3, r31
	  mr        r4, r28
	  bl        0x478
	  li        r25, 0
	  rlwinm    r0,r25,2,0,29
	  add       r27, r28, r0
	  b         .loc_0x3C

	.loc_0x3C:
	  b         .loc_0x40

	.loc_0x40:
	  b         .loc_0x44

	.loc_0x44:
	  lwz       r8, 0x40(r27)
	  mr        r4, r25
	  lwz       r5, 0x0(r27)
	  addi      r3, r31, 0x44
	  crclr     6, 0x6
	  mr        r6, r5
	  mr        r9, r8
	  addi      r7, r25, 0x10
	  bl        0x43C
	  addi      r27, r27, 0x4
	  addi      r25, r25, 0x1
	  cmplwi    r25, 0x10
	  blt+      .loc_0x44
	  lwz       r4, 0x84(r28)
	  addi      r3, r31, 0x74
	  lwz       r5, 0x80(r28)
	  crclr     6, 0x6
	  bl        0x418
	  lwz       r4, 0x198(r28)
	  addi      r3, r31, 0xA4
	  lwz       r5, 0x19C(r28)
	  crclr     6, 0x6
	  bl        0x404
	  addi      r3, r31, 0xD4
	  crclr     6, 0x6
	  bl        0x3F8
	  li        r25, 0
	  rlwinm    r0,r25,2,0,29
	  add       r27, r28, r0
	  b         .loc_0xBC

	.loc_0xBC:
	  b         .loc_0xC0

	.loc_0xC0:
	  b         .loc_0xC4

	.loc_0xC4:
	  lwz       r5, 0x1A4(r27)
	  mr        r4, r25
	  lwz       r7, 0x1B4(r27)
	  addi      r3, r31, 0xE8
	  addi      r6, r25, 0x4
	  crclr     6, 0x6
	  bl        0x3C4
	  addi      r27, r27, 0x4
	  addi      r25, r25, 0x1
	  cmplwi    r25, 0x4
	  blt+      .loc_0xC4
	  lhz       r0, 0x1A2(r28)
	  rlwinm    r0,r0,0,31,31
	  cmplwi    r0, 0
	  beq-      .loc_0x238
	  bl        0x18EC
	  lis       r6, 0x8000
	  lwz       r0, 0xD4(r6)
	  li        r5, 0
	  addi      r4, r1, 0x10
	  sth       r5, 0x1B0(r1)
	  mr        r30, r0
	  mr        r29, r3
	  sth       r5, 0x1B2(r1)
	  lwz       r0, 0xD8(r6)
	  cmplw     r4, r0
	  bne-      .loc_0x134
	  stw       r5, 0xD8(r6)

	.loc_0x134:
	  addi      r3, r1, 0x10
	  bl        -0x3E0
	  addi      r3, r31, 0x10C
	  crclr     6, 0x6
	  bl        0x35C
	  li        r25, 0
	  rlwinm    r0,r25,3,0,28
	  add       r26, r28, r0
	  b         .loc_0x158

	.loc_0x158:
	  b         .loc_0x15C

	.loc_0x15C:
	  b         .loc_0x160

	.loc_0x160:
	  lfd       f1, 0x98(r26)
	  bl        -0x2B864
	  mr        r27, r3
	  lfd       f1, 0x90(r26)
	  bl        -0x2B870
	  mr        r5, r3
	  crclr     6, 0x6
	  mr        r4, r25
	  mr        r7, r27
	  addi      r3, r31, 0x120
	  addi      r6, r25, 0x1
	  bl        0x314
	  addi      r26, r26, 0x10
	  addi      r25, r25, 0x2
	  cmplwi    r25, 0x20
	  blt+      .loc_0x160
	  addi      r3, r31, 0x13C
	  crclr     6, 0x6
	  bl        0x2F8
	  li        r25, 0
	  rlwinm    r0,r25,3,0,28
	  add       r26, r28, r0
	  b         .loc_0x1BC

	.loc_0x1BC:
	  b         .loc_0x1C0

	.loc_0x1C0:
	  b         .loc_0x1C4

	.loc_0x1C4:
	  lfd       f1, 0x1D0(r26)
	  bl        -0x2B8C8
	  mr        r27, r3
	  lfd       f1, 0x1C8(r26)
	  bl        -0x2B8D4
	  mr        r5, r3
	  crclr     6, 0x6
	  mr        r4, r25
	  mr        r7, r27
	  addi      r3, r31, 0x150
	  addi      r6, r25, 0x1
	  bl        0x2B0
	  addi      r26, r26, 0x10
	  addi      r25, r25, 0x2
	  cmplwi    r25, 0x20
	  blt+      .loc_0x1C4
	  li        r5, 0
	  sth       r5, 0x1B0(r1)
	  lis       r3, 0x8000
	  addi      r4, r1, 0x10
	  sth       r5, 0x1B2(r1)
	  lwz       r0, 0xD8(r3)
	  cmplw     r4, r0
	  bne-      .loc_0x228
	  stw       r5, 0xD8(r3)

	.loc_0x228:
	  mr        r3, r30
	  bl        -0x4D4
	  mr        r3, r29
	  bl        0x17E0

	.loc_0x238:
	  addi      r3, r31, 0x170
	  crclr     6, 0x6
	  bl        0x260
	  lwz       r25, 0x4(r28)
	  li        r26, 0
	  b         .loc_0x250

	.loc_0x250:
	  b         .loc_0x254

	.loc_0x254:
	  b         .loc_0x274

	.loc_0x258:
	  lwz       r5, 0x0(r25)
	  mr        r4, r25
	  lwz       r6, 0x4(r25)
	  addi      r3, r31, 0x198
	  crclr     6, 0x6
	  bl        0x234
	  lwz       r25, 0x0(r25)

	.loc_0x274:
	  cmplwi    r25, 0
	  beq-      .loc_0x294
	  addis     r0, r25, 0x1
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x294
	  cmplwi    r26, 0x10
	  addi      r26, r26, 0x1
	  blt+      .loc_0x258

	.loc_0x294:
	  lmw       r25, 0x2DC(r1)
	  lwz       r0, 0x2FC(r1)
	  addi      r1, r1, 0x2F8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ED4F4
 * Size:	000084
 */
void OSSwitchFPUContext(void)
{
	/*
	.loc_0x0:
	  mfmsr     r5
	  ori       r5, r5, 0x2000
	  mtmsr     r5
	  isync
	  lwz       r5, 0x19C(r4)
	  ori       r5, r5, 0x2000
	  mtsrr1    r5
	  lis       r3, 0x8000
	  lwz       r5, 0xD8(r3)
	  stw       r4, 0xD8(r3)
	  cmpw      r5, r4
	  beq-      .loc_0x40
	  cmpwi     r5, 0
	  beq-      .loc_0x3C
	  bl        -0x6B8

	.loc_0x3C:
	  bl        -0x7E0

	.loc_0x40:
	  lwz       r3, 0x80(r4)
	  mtcr      r3
	  lwz       r3, 0x84(r4)
	  mtlr      r3
	  lwz       r3, 0x198(r4)
	  mtsrr0    r3
	  lwz       r3, 0x88(r4)
	  mtctr     r3
	  lwz       r3, 0x8C(r4)
	  mtxer     r3
	  lhz       r3, 0x1A2(r4)
	  rlwinm    r3,r3,0,31,29
	  sth       r3, 0x1A2(r4)
	  lwz       r5, 0x14(r4)
	  lwz       r3, 0xC(r4)
	  lwz       r4, 0x10(r4)
	  rfi
	*/
}

/*
 * --INFO--
 * Address:	800ED578
 * Size:	000048
 */
void __OSContextInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lis       r3, 0x800F
	  subi      r4, r3, 0x2B0C
	  li        r3, 0x7
	  bl        -0x1C94
	  li        r0, 0
	  crclr     6, 0x6
	  lis       r4, 0x8000
	  lis       r3, 0x804B
	  stw       r0, 0xD8(r4)
	  subi      r3, r3, 0x7094
	  bl        -0x1294C
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800ED5C0
 * Size:	00012C
 */
void OSFillFPUContext(void)
{
	/*
	.loc_0x0:
	  mfmsr     r5
	  ori       r5, r5, 0x2000
	  mtmsr     r5
	  isync
	  stfd      f0, 0x90(r3)
	  stfd      f1, 0x98(r3)
	  stfd      f2, 0xA0(r3)
	  stfd      f3, 0xA8(r3)
	  stfd      f4, 0xB0(r3)
	  stfd      f5, 0xB8(r3)
	  stfd      f6, 0xC0(r3)
	  stfd      f7, 0xC8(r3)
	  stfd      f8, 0xD0(r3)
	  stfd      f9, 0xD8(r3)
	  stfd      f10, 0xE0(r3)
	  stfd      f11, 0xE8(r3)
	  stfd      f12, 0xF0(r3)
	  stfd      f13, 0xF8(r3)
	  stfd      f14, 0x100(r3)
	  stfd      f15, 0x108(r3)
	  stfd      f16, 0x110(r3)
	  stfd      f17, 0x118(r3)
	  stfd      f18, 0x120(r3)
	  stfd      f19, 0x128(r3)
	  stfd      f20, 0x130(r3)
	  stfd      f21, 0x138(r3)
	  stfd      f22, 0x140(r3)
	  stfd      f23, 0x148(r3)
	  stfd      f24, 0x150(r3)
	  stfd      f25, 0x158(r3)
	  stfd      f26, 0x160(r3)
	  stfd      f27, 0x168(r3)
	  stfd      f28, 0x170(r3)
	  stfd      f29, 0x178(r3)
	  stfd      f30, 0x180(r3)
	  stfd      f31, 0x188(r3)
	  mffs      f0
	  stfd      f0, 0x190(r3)
	  lfd       f0, 0x90(r3)
	  mfspr     r5, 0x398
	  rlwinm.   r5,r5,3,31,31
	  beq-      .loc_0x128
	  psq_st    f0,0x1C8(r3),0,0
	  psq_st    f1,0x1D0(r3),0,0
	  psq_st    f2,0x1D8(r3),0,0
	  psq_st    f3,0x1E0(r3),0,0
	  psq_st    f4,0x1E8(r3),0,0
	  psq_st    f5,0x1F0(r3),0,0
	  psq_st    f6,0x1F8(r3),0,0
	  psq_st    f7,0x200(r3),0,0
	  psq_st    f8,0x208(r3),0,0
	  psq_st    f9,0x210(r3),0,0
	  psq_st    f10,0x218(r3),0,0
	  psq_st    f11,0x220(r3),0,0
	  psq_st    f12,0x228(r3),0,0
	  psq_st    f13,0x230(r3),0,0
	  psq_st    f14,0x238(r3),0,0
	  psq_st    f15,0x240(r3),0,0
	  psq_st    f16,0x248(r3),0,0
	  psq_st    f17,0x250(r3),0,0
	  psq_st    f18,0x258(r3),0,0
	  psq_st    f19,0x260(r3),0,0
	  psq_st    f20,0x268(r3),0,0
	  psq_st    f21,0x270(r3),0,0
	  psq_st    f22,0x278(r3),0,0
	  psq_st    f23,0x280(r3),0,0
	  psq_st    f24,0x288(r3),0,0
	  psq_st    f25,0x290(r3),0,0
	  psq_st    f26,0x298(r3),0,0
	  psq_st    f27,0x2A0(r3),0,0
	  psq_st    f28,0x2A8(r3),0,0
	  psq_st    f29,0x2B0(r3),0,0
	  psq_st    f30,0x2B8(r3),0,0
	  psq_st    f31,0x2C0(r3),0,0

	.loc_0x128:
	  blr
	*/
}
