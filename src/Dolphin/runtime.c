#include "Dolphin/runtime.h"

/*
 * --INFO--
 * Address:	800C1B4C
 * Size:	00005C
 */
unsigned long __cvt_fp2unsigned(double)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lis       r4, 0x8047
	  ori       r4, r4, 0x9F20
	  li        r3, 0
	  lfd       f0, 0x0(r4)
	  lfd       f3, 0x8(r4)
	  lfd       f4, 0x10(r4)
	  fcmpu     cr0, f1, f0
	  fcmpu     cr6, f1, f3
	  blt-      .loc_0x54
	  subi      r3, r3, 0x1
	  bge-      cr6, .loc_0x54
	  fcmpu     cr7, f1, f4
	  fmr       f2, f1
	  blt-      cr7, .loc_0x40
	  fsub      f2, f1, f4

	.loc_0x40:
	  fctiwz    f2, f2
	  stfd      f2, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  blt-      cr7, .loc_0x54
	  subis     r3, r3, 0x8000

	.loc_0x54:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C1BA8
 * Size:	00004C
 */
void __save_fpr(void)
{
	/*
	.loc_0x0:
	  stfd      f14, -0x90(r11)
	  stfd      f15, -0x88(r11)
	  stfd      f16, -0x80(r11)
	  stfd      f17, -0x78(r11)
	  stfd      f18, -0x70(r11)
	  stfd      f19, -0x68(r11)
	  stfd      f20, -0x60(r11)
	  stfd      f21, -0x58(r11)
	  stfd      f22, -0x50(r11)
	  stfd      f23, -0x48(r11)
	  stfd      f24, -0x40(r11)
	  stfd      f25, -0x38(r11)
	  stfd      f26, -0x30(r11)
	  stfd      f27, -0x28(r11)
	  stfd      f28, -0x20(r11)
	  stfd      f29, -0x18(r11)
	  stfd      f30, -0x10(r11)
	  stfd      f31, -0x8(r11)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_14(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_15(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_17(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_18(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_19(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_20(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_21(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_22(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_23(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_26(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_27(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_29(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_30(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savefpr_31(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1BF4
 * Size:	00004C
 */
void __restore_fpr(void)
{
	/*
	.loc_0x0:
	  lfd       f14, -0x90(r11)
	  lfd       f15, -0x88(r11)
	  lfd       f16, -0x80(r11)
	  lfd       f17, -0x78(r11)
	  lfd       f18, -0x70(r11)
	  lfd       f19, -0x68(r11)
	  lfd       f20, -0x60(r11)
	  lfd       f21, -0x58(r11)
	  lfd       f22, -0x50(r11)
	  lfd       f23, -0x48(r11)
	  lfd       f24, -0x40(r11)
	  lfd       f25, -0x38(r11)
	  lfd       f26, -0x30(r11)
	  lfd       f27, -0x28(r11)
	  lfd       f28, -0x20(r11)
	  lfd       f29, -0x18(r11)
	  lfd       f30, -0x10(r11)
	  lfd       f31, -0x8(r11)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_14(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_15(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_17(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_18(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_19(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_20(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_21(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_22(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_23(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_26(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_27(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_29(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_30(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restfpr_31(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1C40
 * Size:	00004C
 */
void __save_gpr(void)
{
	/*
	.loc_0x0:
	  stw       r14, -0x48(r11)
	  stw       r15, -0x44(r11)
	  stw       r16, -0x40(r11)
	  stw       r17, -0x3C(r11)
	  stw       r18, -0x38(r11)
	  stw       r19, -0x34(r11)
	  stw       r20, -0x30(r11)
	  stw       r21, -0x2C(r11)
	  stw       r22, -0x28(r11)
	  stw       r23, -0x24(r11)
	  stw       r24, -0x20(r11)
	  stw       r25, -0x1C(r11)
	  stw       r26, -0x18(r11)
	  stw       r27, -0x14(r11)
	  stw       r28, -0x10(r11)
	  stw       r29, -0xC(r11)
	  stw       r30, -0x8(r11)
	  stw       r31, -0x4(r11)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_14(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_15(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_17(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_18(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_19(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_20(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_21(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_22(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_23(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_24(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_25(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_27(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_28(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_29(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_30(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _savegpr_31(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1C8C
 * Size:	00004C
 */
void __restore_gpr(void)
{
	/*
	.loc_0x0:
	  lwz       r14, -0x48(r11)
	  lwz       r15, -0x44(r11)
	  lwz       r16, -0x40(r11)
	  lwz       r17, -0x3C(r11)
	  lwz       r18, -0x38(r11)
	  lwz       r19, -0x34(r11)
	  lwz       r20, -0x30(r11)
	  lwz       r21, -0x2C(r11)
	  lwz       r22, -0x28(r11)
	  lwz       r23, -0x24(r11)
	  lwz       r24, -0x20(r11)
	  lwz       r25, -0x1C(r11)
	  lwz       r26, -0x18(r11)
	  lwz       r27, -0x14(r11)
	  lwz       r28, -0x10(r11)
	  lwz       r29, -0xC(r11)
	  lwz       r30, -0x8(r11)
	  lwz       r31, -0x4(r11)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_14(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_15(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_17(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_18(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_19(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_20(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_21(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_22(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_23(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_24(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_25(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_27(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_28(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_29(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_30(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000000
 */
void _restgpr_31(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C1CD8
 * Size:	0000EC
 */
void __div2u(void)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  cntlzw    r0, r3
	  cntlzw    r9, r4
	  bne-      .loc_0x14
	  addi      r0, r9, 0x20

	.loc_0x14:
	  cmpwi     r5, 0
	  cntlzw    r9, r5
	  cntlzw    r10, r6
	  bne-      .loc_0x28
	  addi      r9, r10, 0x20

	.loc_0x28:
	  cmpw      r0, r9
	  subfic    r10, r0, 0x40
	  bgt-      .loc_0xE0
	  addi      r9, r9, 0x1
	  subfic    r9, r9, 0x40
	  add       r0, r0, r9
	  sub       r9, r10, r9
	  mtctr     r9
	  cmpwi     r9, 0x20
	  subi      r7, r9, 0x20
	  blt-      .loc_0x60
	  srw       r8, r3, r7
	  li        r7, 0
	  b         .loc_0x74

	.loc_0x60:
	  srw       r8, r4, r9
	  subfic    r7, r9, 0x20
	  slw       r7, r3, r7
	  or        r8, r8, r7
	  srw       r7, r3, r9

	.loc_0x74:
	  cmpwi     r0, 0x20
	  subic     r9, r0, 0x20
	  blt-      .loc_0x8C
	  slw       r3, r4, r9
	  li        r4, 0
	  b         .loc_0xA0

	.loc_0x8C:
	  slw       r3, r3, r0
	  subfic    r9, r0, 0x20
	  srw       r9, r4, r9
	  or        r3, r3, r9
	  slw       r4, r4, r0

	.loc_0xA0:
	  li        r10, -0x1
	  addic     r7, r7, 0

	.loc_0xA8:
	  adde      r4, r4, r4
	  adde      r3, r3, r3
	  adde      r8, r8, r8
	  adde      r7, r7, r7
	  subc      r0, r8, r6
	  subfe.    r9, r5, r7
	  blt-      .loc_0xD0
	  mr        r8, r0
	  mr        r7, r9
	  addic     r0, r10, 0x1

	.loc_0xD0:
	  bdnz+     .loc_0xA8
	  adde      r4, r4, r4
	  adde      r3, r3, r3
	  blr

	.loc_0xE0:
	  li        r4, 0
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C1DC4
 * Size:	000138
 */
void __div2i(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm.   r9,r3,0,0,0
	  beq-      .loc_0x14
	  subfic    r4, r4, 0
	  subfze    r3, r3

	.loc_0x14:
	  stw       r9, 0x8(r1)
	  rlwinm.   r10,r5,0,0,0
	  beq-      .loc_0x28
	  subfic    r6, r6, 0
	  subfze    r5, r5

	.loc_0x28:
	  stw       r10, 0xC(r1)
	  cmpwi     r3, 0
	  cntlzw    r0, r3
	  cntlzw    r9, r4
	  bne-      .loc_0x40
	  addi      r0, r9, 0x20

	.loc_0x40:
	  cmpwi     r5, 0
	  cntlzw    r9, r5
	  cntlzw    r10, r6
	  bne-      .loc_0x54
	  addi      r9, r10, 0x20

	.loc_0x54:
	  cmpw      r0, r9
	  subfic    r10, r0, 0x40
	  bgt-      .loc_0x128
	  addi      r9, r9, 0x1
	  subfic    r9, r9, 0x40
	  add       r0, r0, r9
	  sub       r9, r10, r9
	  mtctr     r9
	  cmpwi     r9, 0x20
	  subi      r7, r9, 0x20
	  blt-      .loc_0x8C
	  srw       r8, r3, r7
	  li        r7, 0
	  b         .loc_0xA0

	.loc_0x8C:
	  srw       r8, r4, r9
	  subfic    r7, r9, 0x20
	  slw       r7, r3, r7
	  or        r8, r8, r7
	  srw       r7, r3, r9

	.loc_0xA0:
	  cmpwi     r0, 0x20
	  subic     r9, r0, 0x20
	  blt-      .loc_0xB8
	  slw       r3, r4, r9
	  li        r4, 0
	  b         .loc_0xCC

	.loc_0xB8:
	  slw       r3, r3, r0
	  subfic    r9, r0, 0x20
	  srw       r9, r4, r9
	  or        r3, r3, r9
	  slw       r4, r4, r0

	.loc_0xCC:
	  li        r10, -0x1
	  addic     r7, r7, 0

	.loc_0xD4:
	  adde      r4, r4, r4
	  adde      r3, r3, r3
	  adde      r8, r8, r8
	  adde      r7, r7, r7
	  subc      r0, r8, r6
	  subfe.    r9, r5, r7
	  blt-      .loc_0xFC
	  mr        r8, r0
	  mr        r7, r9
	  addic     r0, r10, 0x1

	.loc_0xFC:
	  bdnz+     .loc_0xD4
	  adde      r4, r4, r4
	  adde      r3, r3, r3
	  lwz       r9, 0x8(r1)
	  lwz       r10, 0xC(r1)
	  xor.      r7, r9, r10
	  beq-      .loc_0x130
	  cmpwi     r9, 0
	  subfic    r4, r4, 0
	  subfze    r3, r3
	  b         .loc_0x130

	.loc_0x128:
	  li        r4, 0
	  li        r3, 0

	.loc_0x130:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C1EFC
 * Size:	0000E4
 */
void __mod2u(void)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0
	  cntlzw    r0, r3
	  cntlzw    r9, r4
	  bne-      .loc_0x14
	  addi      r0, r9, 0x20

	.loc_0x14:
	  cmpwi     r5, 0
	  cntlzw    r9, r5
	  cntlzw    r10, r6
	  bne-      .loc_0x28
	  addi      r9, r10, 0x20

	.loc_0x28:
	  cmpw      r0, r9
	  subfic    r10, r0, 0x40
	  bgtlr-
	  addi      r9, r9, 0x1
	  subfic    r9, r9, 0x40
	  add       r0, r0, r9
	  sub       r9, r10, r9
	  mtctr     r9
	  cmpwi     r9, 0x20
	  subi      r7, r9, 0x20
	  blt-      .loc_0x60
	  srw       r8, r3, r7
	  li        r7, 0
	  b         .loc_0x74

	.loc_0x60:
	  srw       r8, r4, r9
	  subfic    r7, r9, 0x20
	  slw       r7, r3, r7
	  or        r8, r8, r7
	  srw       r7, r3, r9

	.loc_0x74:
	  cmpwi     r0, 0x20
	  subic     r9, r0, 0x20
	  blt-      .loc_0x8C
	  slw       r3, r4, r9
	  li        r4, 0
	  b         .loc_0xA0

	.loc_0x8C:
	  slw       r3, r3, r0
	  subfic    r9, r0, 0x20
	  srw       r9, r4, r9
	  or        r3, r3, r9
	  slw       r4, r4, r0

	.loc_0xA0:
	  li        r10, -0x1
	  addic     r7, r7, 0

	.loc_0xA8:
	  adde      r4, r4, r4
	  adde      r3, r3, r3
	  adde      r8, r8, r8
	  adde      r7, r7, r7
	  subc      r0, r8, r6
	  subfe.    r9, r5, r7
	  blt-      .loc_0xD0
	  mr        r8, r0
	  mr        r7, r9
	  addic     r0, r10, 0x1

	.loc_0xD0:
	  bdnz+     .loc_0xA8
	  mr        r4, r8
	  mr        r3, r7
	  blr
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C1FE0
 * Size:	00010C
 */
void __mod2i(void)
{
	/*
	.loc_0x0:
	  cmpwi     cr7, r3, 0
	  bge-      cr7, .loc_0x10
	  subfic    r4, r4, 0
	  subfze    r3, r3

	.loc_0x10:
	  cmpwi     r5, 0
	  bge-      .loc_0x20
	  subfic    r6, r6, 0
	  subfze    r5, r5

	.loc_0x20:
	  cmpwi     r3, 0
	  cntlzw    r0, r3
	  cntlzw    r9, r4
	  bne-      .loc_0x34
	  addi      r0, r9, 0x20

	.loc_0x34:
	  cmpwi     r5, 0
	  cntlzw    r9, r5
	  cntlzw    r10, r6
	  bne-      .loc_0x48
	  addi      r9, r10, 0x20

	.loc_0x48:
	  cmpw      r0, r9
	  subfic    r10, r0, 0x40
	  bgt-      .loc_0xFC
	  addi      r9, r9, 0x1
	  subfic    r9, r9, 0x40
	  add       r0, r0, r9
	  sub       r9, r10, r9
	  mtctr     r9
	  cmpwi     r9, 0x20
	  subi      r7, r9, 0x20
	  blt-      .loc_0x80
	  srw       r8, r3, r7
	  li        r7, 0
	  b         .loc_0x94

	.loc_0x80:
	  srw       r8, r4, r9
	  subfic    r7, r9, 0x20
	  slw       r7, r3, r7
	  or        r8, r8, r7
	  srw       r7, r3, r9

	.loc_0x94:
	  cmpwi     r0, 0x20
	  subic     r9, r0, 0x20
	  blt-      .loc_0xAC
	  slw       r3, r4, r9
	  li        r4, 0
	  b         .loc_0xC0

	.loc_0xAC:
	  slw       r3, r3, r0
	  subfic    r9, r0, 0x20
	  srw       r9, r4, r9
	  or        r3, r3, r9
	  slw       r4, r4, r0

	.loc_0xC0:
	  li        r10, -0x1
	  addic     r7, r7, 0

	.loc_0xC8:
	  adde      r4, r4, r4
	  adde      r3, r3, r3
	  adde      r8, r8, r8
	  adde      r7, r7, r7
	  subc      r0, r8, r6
	  subfe.    r9, r5, r7
	  blt-      .loc_0xF0
	  mr        r8, r0
	  mr        r7, r9
	  addic     r0, r10, 0x1

	.loc_0xF0:
	  bdnz+     .loc_0xC8
	  mr        r4, r8
	  mr        r3, r7

	.loc_0xFC:
	  bgelr-    cr7
	  subfic    r4, r4, 0
	  subfze    r3, r3
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C20EC
 * Size:	000024
 */
void __shl2i(void)
{
	/*
	.loc_0x0:
	  subfic    r8, r5, 0x20
	  subic     r9, r5, 0x20
	  slw       r3, r3, r5
	  srw       r10, r4, r8
	  or        r3, r3, r10
	  slw       r10, r4, r9
	  or        r3, r3, r10
	  slw       r4, r4, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C2110
 * Size:	000024
 */
void __shr2u(void)
{
	/*
	.loc_0x0:
	  subfic    r8, r5, 0x20
	  subic     r9, r5, 0x20
	  srw       r4, r4, r5
	  slw       r10, r3, r8
	  or        r4, r4, r10
	  srw       r10, r3, r9
	  or        r4, r4, r10
	  srw       r3, r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800C2134
 * Size:	000028
 */
void __shr2i(void)
{
	/*
	.loc_0x0:
	  subfic    r8, r5, 0x20
	  subic.    r9, r5, 0x20
	  srw       r4, r4, r5
	  slw       r10, r3, r8
	  or        r4, r4, r10
	  sraw      r10, r3, r9
	  ble-      .loc_0x20
	  or        r4, r4, r10

	.loc_0x20:
	  sraw      r3, r3, r5
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void __cvt_sll_dbl(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C215C
 * Size:	00009C
 */
void __cvt_ull_dbl(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  or.       r7, r3, r4
	  li        r6, 0
	  beq-      .loc_0x88
	  cntlzw    r7, r3
	  cntlzw    r8, r4
	  rlwinm    r9,r7,26,0,4
	  srawi     r9, r9, 0x1F
	  and       r9, r9, r8
	  add       r7, r7, r9
	  subfic    r8, r7, 0x20
	  subic     r9, r7, 0x20
	  slw       r3, r3, r7
	  srw       r10, r4, r8
	  or        r3, r3, r10
	  slw       r10, r4, r9
	  or        r3, r3, r10
	  slw       r4, r4, r7
	  sub       r6, r6, r7
	  rlwinm    r7,r4,0,21,31
	  cmpwi     r7, 0x400
	  addi      r6, r6, 0x43E
	  blt-      .loc_0x74
	  bgt-      .loc_0x68
	  rlwinm.   r7,r4,0,20,20
	  beq-      .loc_0x74

	.loc_0x68:
	  addic     r4, r4, 0x800
	  addze     r3, r3
	  addze     r6, r6

	.loc_0x74:
	  rlwinm    r4,r4,21,0,31
	  rlwimi    r4,r3,21,0,10
	  rlwinm    r3,r3,21,12,31
	  rlwinm    r6,r6,20,0,11
	  or        r3, r6, r3

	.loc_0x88:
	  stw       r3, 0x8(r1)
	  stw       r4, 0xC(r1)
	  lfd       f1, 0x8(r1)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void __cvt_sll_flt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000A0
 */
void __cvt_ull_flt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800C21F8
 * Size:	0000CC
 */
void __cvt_dbl_usll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  stfd      f1, 0x8(r1)
	  lwz       r3, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  rlwinm    r5,r3,12,21,31
	  cmplwi    r5, 0x3FF
	  bge-      .loc_0x28
	  li        r3, 0
	  li        r4, 0
	  b         .loc_0xC4

	.loc_0x28:
	  mr        r6, r3
	  rlwinm    r3,r3,0,12,31
	  oris      r3, r3, 0x10
	  subi      r5, r5, 0x433
	  cmpwi     r5, 0
	  bge-      .loc_0x68
	  neg       r5, r5
	  subfic    r8, r5, 0x20
	  subic     r9, r5, 0x20
	  srw       r4, r4, r5
	  slw       r10, r3, r8
	  or        r4, r4, r10
	  srw       r10, r3, r9
	  or        r4, r4, r10
	  srw       r3, r3, r5
	  b         .loc_0xB4

	.loc_0x68:
	  cmpwi     r5, 0xA
	  ble+      .loc_0x94
	  rlwinm.   r6,r6,0,0,0
	  beq-      .loc_0x84
	  lis       r3, 0x8000
	  li        r4, 0
	  b         .loc_0xC4

	.loc_0x84:
	  lis       r3, 0x7FFF
	  ori       r3, r3, 0xFFFF
	  li        r4, -0x1
	  b         .loc_0xC4

	.loc_0x94:
	  subfic    r8, r5, 0x20
	  subic     r9, r5, 0x20
	  slw       r3, r3, r5
	  srw       r10, r4, r8
	  or        r3, r3, r10
	  slw       r10, r4, r9
	  or        r3, r3, r10
	  slw       r4, r4, r5

	.loc_0xB4:
	  rlwinm.   r6,r6,0,0,0
	  beq-      .loc_0xC4
	  subfic    r4, r4, 0
	  subfze    r3, r3

	.loc_0xC4:
	  addi      r1, r1, 0x10
	  blr
	*/
}
