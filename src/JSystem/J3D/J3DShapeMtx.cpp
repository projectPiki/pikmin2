#include "types.h"

/*
 * --INFO--
 * Address:	80086104
 * Size:	00003C
 */
void J3DShapeMtx::resetMtxLoadCache()
{
	/*
	.loc_0x0:
	  lis       r4, 0x1
	  lis       r3, 0x8051
	  subi      r0, r4, 0x1
	  addi      r3, r3, 0x20F4
	  sth       r0, 0x12(r3)
	  sth       r0, 0x10(r3)
	  sth       r0, 0xE(r3)
	  sth       r0, 0xC(r3)
	  sth       r0, 0xA(r3)
	  sth       r0, 0x8(r3)
	  sth       r0, 0x6(r3)
	  sth       r0, 0x4(r3)
	  sth       r0, 0x2(r3)
	  sth       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086140
 * Size:	000044
 */
void J3DShapeMtx::loadMtxIndx_PNGP(int, unsigned short) const
{
	/*
	.loc_0x0:
	  mulli     r3, r4, 0xC
	  li        r0, 0x20
	  lis       r7, 0xCC01
	  stb       r0, -0x8000(r7)
	  li        r0, 0x28
	  rlwinm    r3,r3,0,16,31
	  ori       r6, r3, 0xB000
	  sth       r5, -0x8000(r7)
	  mulli     r3, r4, 0x9
	  sth       r6, -0x8000(r7)
	  stb       r0, -0x8000(r7)
	  addi      r0, r3, 0x400
	  rlwinm    r0,r0,0,16,31
	  sth       r5, -0x8000(r7)
	  ori       r0, r0, 0x8000
	  sth       r0, -0x8000(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086184
 * Size:	000060
 */
void J3DShapeMtx::loadMtxIndx_PCPU(int, unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  subi      r3, r3, 0xDD0
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mulli     r4, r30, 0x3
	  lwz       r3, 0x40(r3)
	  lwz       r3, 0x30(r3)
	  bl        -0xF2FC
	  lis       r3, 0x8051
	  mr        r4, r30
	  subi      r3, r3, 0xDD0
	  mr        r5, r31
	  bl        -0x285E4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800861E4
 * Size:	00004C
 */
void J3DShapeMtx::loadMtxIndx_NCPU(int, unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  subi      r3, r3, 0xDD0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  bl        -0x28640
	  lis       r3, 0x8051
	  subi      r3, r3, 0xDD0
	  lwz       r3, 0x40(r3)
	  mulli     r4, r31, 0x3
	  lwz       r3, 0x30(r3)
	  bl        -0xF2E0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086230
 * Size:	000058
 */
void J3DShapeMtx::loadMtxIndx_PNCPU(int, unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  subi      r31, r3, 0xDD0
	  stw       r30, 0x8(r1)
	  mulli     r30, r4, 0x3
	  lwz       r3, 0x40(r31)
	  mr        r4, r30
	  lwz       r3, 0x30(r3)
	  bl        -0xF3A4
	  lwz       r3, 0x40(r31)
	  mr        r4, r30
	  lwz       r3, 0x30(r3)
	  bl        -0xF334
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086288
 * Size:	000588
 */
void J3DDifferedTexMtx::loadExecute(const float (*)[4])
{
	/*
	.loc_0x0:
	  stwu      r1, -0xE0(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0xE4(r1)
	  subi      r4, r4, 0xDD0
	  stmw      r25, 0xC4(r1)
	  mr        r25, r3
	  lwz       r0, 0x34(r4)
	  lwz       r28, -0x763C(r13)
	  rlwinm.   r0,r0,0,1,1
	  lwz       r31, -0x7640(r13)
	  lhz       r29, 0x8(r28)
	  beq-      .loc_0x2B0
	  li        r27, 0
	  b         .loc_0x2A0

	.loc_0x3C:
	  mr        r3, r31
	  rlwinm    r30,r27,0,16,31
	  lwz       r12, 0x0(r31)
	  mr        r4, r30
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lbz       r5, 0x1(r3)
	  rlwinm    r0,r5,0,26,31
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x27C
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x2E48
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  mulli     r0, r30, 0x30
	  lwz       r3, 0x0(r28)
	  add       r3, r3, r0
	  b         .loc_0x288
	  mulli     r0, r30, 0x30
	  lwz       r3, 0x0(r28)
	  add       r3, r3, r0
	  b         .loc_0x288
	  lis       r3, 0x8051
	  addi      r4, r1, 0x88
	  subi      r3, r3, 0xDD0
	  bl        0x640E4
	  mulli     r0, r30, 0x30
	  lwz       r3, 0x0(r28)
	  addi      r4, r1, 0x88
	  mr        r5, r4
	  add       r3, r3, r0
	  bl        0x63FB0
	  addi      r3, r1, 0x88
	  b         .loc_0x288
	  rlwinm.   r0,r5,25,31,31
	  bne-      .loc_0xF0
	  addi      r3, r4, 0x10
	  addi      r4, r4, 0x4
	  addi      r5, r1, 0x8
	  bl        -0x26FF8
	  b         .loc_0x104

	.loc_0xF0:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x104
	  addi      r3, r4, 0x10
	  addi      r4, r1, 0x8
	  bl        -0x26EBC

	.loc_0x104:
	  lwz       r4, 0x4(r28)
	  rlwinm    r0,r30,6,0,25
	  addi      r3, r1, 0x8
	  addi      r5, r1, 0x88
	  add       r4, r4, r0
	  bl        -0x26D74
	  lis       r3, 0x8051
	  addi      r4, r1, 0x48
	  subi      r3, r3, 0xDD0
	  bl        0x6406C
	  addi      r3, r1, 0x88
	  addi      r4, r1, 0x48
	  mr        r5, r3
	  bl        0x63F40
	  lfs       f0, -0x7878(r2)
	  addi      r3, r1, 0x88
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xA4(r1)
	  stfs      f0, 0x94(r1)
	  b         .loc_0x288
	  rlwinm.   r0,r5,25,31,31
	  bne-      .loc_0x170
	  addi      r3, r4, 0x10
	  addi      r4, r4, 0x4
	  addi      r5, r1, 0x8
	  bl        -0x27124
	  b         .loc_0x184

	.loc_0x170:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x184
	  addi      r3, r4, 0x10
	  addi      r4, r1, 0x8
	  bl        -0x26FE4

	.loc_0x184:
	  lis       r4, 0x804A
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x2DB8
	  mr        r5, r3
	  bl        0x63EE4
	  lwz       r4, 0x4(r28)
	  rlwinm    r0,r30,6,0,25
	  addi      r3, r1, 0x8
	  addi      r5, r1, 0x88
	  add       r4, r4, r0
	  bl        -0x26E08
	  lis       r3, 0x8051
	  addi      r4, r1, 0x48
	  subi      r3, r3, 0xDD0
	  bl        0x63FD8
	  addi      r3, r1, 0x88
	  addi      r4, r1, 0x48
	  mr        r5, r3
	  bl        0x63EAC
	  lfs       f0, -0x7878(r2)
	  addi      r3, r1, 0x88
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xA4(r1)
	  stfs      f0, 0x94(r1)
	  b         .loc_0x288
	  rlwinm.   r0,r5,25,31,31
	  bne-      .loc_0x204
	  addi      r3, r4, 0x10
	  addi      r4, r4, 0x4
	  addi      r5, r1, 0x8
	  bl        -0x271B8
	  b         .loc_0x218

	.loc_0x204:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x218
	  addi      r3, r4, 0x10
	  addi      r4, r1, 0x8
	  bl        -0x27078

	.loc_0x218:
	  lis       r4, 0x804A
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x2DE8
	  mr        r5, r3
	  bl        0x63E50
	  lwz       r4, 0x4(r28)
	  rlwinm    r0,r30,6,0,25
	  addi      r3, r1, 0x8
	  addi      r5, r1, 0x88
	  add       r4, r4, r0
	  bl        -0x26E9C
	  lis       r3, 0x8051
	  addi      r4, r1, 0x48
	  subi      r3, r3, 0xDD0
	  bl        0x63F44
	  addi      r3, r1, 0x88
	  addi      r4, r1, 0x48
	  mr        r5, r3
	  bl        0x63E18
	  lfs       f0, -0x7878(r2)
	  addi      r3, r1, 0x88
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xA4(r1)
	  stfs      f0, 0x94(r1)
	  b         .loc_0x288

	.loc_0x27C:
	  mulli     r0, r30, 0x30
	  lwz       r3, 0x0(r28)
	  add       r3, r3, r0

	.loc_0x288:
	  rlwinm    r0,r27,0,16,31
	  li        r5, 0
	  mulli     r4, r0, 0x3
	  addi      r4, r4, 0x40
	  bl        0x6312C
	  addi      r27, r27, 0x1

	.loc_0x2A0:
	  rlwinm    r0,r27,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x3C
	  b         .loc_0x574

	.loc_0x2B0:
	  li        r26, 0
	  b         .loc_0x568

	.loc_0x2B8:
	  mr        r3, r31
	  rlwinm    r27,r26,0,16,31
	  lwz       r12, 0x0(r31)
	  mr        r4, r27
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r30, r3
	  lbz       r4, 0x1(r3)
	  rlwinm    r0,r4,0,26,31
	  cmplwi    r0, 0xB
	  bgt-      .loc_0x544
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x2E18
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  mulli     r0, r27, 0x30
	  lwz       r3, 0x0(r28)
	  mr        r4, r25
	  addi      r5, r1, 0x88
	  add       r3, r3, r0
	  bl        0x63D64
	  addi      r3, r1, 0x88
	  b         .loc_0x550
	  mr        r3, r25
	  addi      r4, r1, 0x48
	  bl        0x63D1C
	  lfs       f0, -0x7878(r2)
	  mulli     r0, r27, 0x30
	  addi      r4, r1, 0x48
	  stfs      f0, 0x74(r1)
	  addi      r5, r1, 0x88
	  stfs      f0, 0x64(r1)
	  stfs      f0, 0x54(r1)
	  lwz       r3, 0x0(r28)
	  add       r3, r3, r0
	  bl        0x63D28
	  addi      r3, r1, 0x88
	  b         .loc_0x550
	  mulli     r0, r27, 0x30
	  lwz       r3, 0x0(r28)
	  add       r3, r3, r0
	  b         .loc_0x550
	  rlwinm.   r0,r4,25,31,31
	  bne-      .loc_0x388
	  addi      r3, r30, 0x10
	  addi      r4, r30, 0x4
	  addi      r5, r1, 0x8
	  bl        -0x27290
	  b         .loc_0x39C

	.loc_0x388:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x39C
	  addi      r3, r30, 0x10
	  addi      r4, r1, 0x8
	  bl        -0x27154

	.loc_0x39C:
	  lwz       r4, 0x4(r28)
	  rlwinm    r0,r27,6,0,25
	  addi      r3, r1, 0x8
	  addi      r5, r1, 0x88
	  add       r4, r4, r0
	  bl        -0x2700C
	  lis       r3, 0x8051
	  addi      r4, r1, 0x48
	  subi      r3, r3, 0xDD0
	  bl        0x63DD4
	  addi      r3, r1, 0x88
	  addi      r4, r1, 0x48
	  mr        r5, r3
	  bl        0x63CA8
	  addi      r3, r1, 0x88
	  mr        r4, r25
	  mr        r5, r3
	  bl        0x63C98
	  lfs       f0, -0x7878(r2)
	  addi      r3, r1, 0x88
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xA4(r1)
	  stfs      f0, 0x94(r1)
	  b         .loc_0x550
	  rlwinm.   r0,r4,25,31,31
	  bne-      .loc_0x418
	  addi      r3, r30, 0x10
	  addi      r4, r30, 0x4
	  addi      r5, r1, 0x8
	  bl        -0x273CC
	  b         .loc_0x42C

	.loc_0x418:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x42C
	  addi      r3, r30, 0x10
	  addi      r4, r1, 0x8
	  bl        -0x2728C

	.loc_0x42C:
	  lis       r4, 0x804A
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x2DB8
	  mr        r5, r3
	  bl        0x63C3C
	  lwz       r4, 0x4(r28)
	  rlwinm    r0,r27,6,0,25
	  addi      r3, r1, 0x8
	  addi      r5, r1, 0x88
	  add       r4, r4, r0
	  bl        -0x270B0
	  lis       r3, 0x8051
	  addi      r4, r1, 0x48
	  subi      r3, r3, 0xDD0
	  bl        0x63D30
	  addi      r3, r1, 0x88
	  addi      r4, r1, 0x48
	  mr        r5, r3
	  bl        0x63C04
	  addi      r3, r1, 0x88
	  mr        r4, r25
	  mr        r5, r3
	  bl        0x63BF4
	  lfs       f0, -0x7878(r2)
	  addi      r3, r1, 0x88
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xA4(r1)
	  stfs      f0, 0x94(r1)
	  b         .loc_0x550
	  rlwinm.   r0,r4,25,31,31
	  bne-      .loc_0x4BC
	  addi      r3, r30, 0x10
	  addi      r4, r30, 0x4
	  addi      r5, r1, 0x8
	  bl        -0x27470
	  b         .loc_0x4D0

	.loc_0x4BC:
	  cmplwi    r0, 0x1
	  bne-      .loc_0x4D0
	  addi      r3, r30, 0x10
	  addi      r4, r1, 0x8
	  bl        -0x27330

	.loc_0x4D0:
	  lis       r4, 0x804A
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x2DE8
	  mr        r5, r3
	  bl        0x63B98
	  lwz       r4, 0x4(r28)
	  rlwinm    r0,r27,6,0,25
	  addi      r3, r1, 0x8
	  addi      r5, r1, 0x88
	  add       r4, r4, r0
	  bl        -0x27154
	  lis       r3, 0x8051
	  addi      r4, r1, 0x48
	  subi      r3, r3, 0xDD0
	  bl        0x63C8C
	  addi      r3, r1, 0x88
	  addi      r4, r1, 0x48
	  mr        r5, r3
	  bl        0x63B60
	  addi      r3, r1, 0x88
	  mr        r4, r25
	  mr        r5, r3
	  bl        0x63B50
	  lfs       f0, -0x7878(r2)
	  addi      r3, r1, 0x88
	  stfs      f0, 0xB4(r1)
	  stfs      f0, 0xA4(r1)
	  stfs      f0, 0x94(r1)
	  b         .loc_0x550

	.loc_0x544:
	  mulli     r0, r27, 0x30
	  lwz       r3, 0x0(r28)
	  add       r3, r3, r0

	.loc_0x550:
	  rlwinm    r0,r26,0,16,31
	  lbz       r5, 0x0(r30)
	  mulli     r4, r0, 0x3
	  addi      r4, r4, 0x1E
	  bl        0x62E64
	  addi      r26, r26, 0x1

	.loc_0x568:
	  rlwinm    r0,r26,0,16,31
	  cmplw     r0, r29
	  blt+      .loc_0x2B8

	.loc_0x574:
	  lmw       r25, 0xC4(r1)
	  lwz       r0, 0xE4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xE0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086810
 * Size:	0000A8
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP(int, unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  lis       r5, 0x8051
	  stw       r30, 0x48(r1)
	  rlwinm    r0,r31,0,16,31
	  subi      r5, r5, 0xDD0
	  mr        r30, r4
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  mulli     r0, r0, 0x30
	  lwz       r3, 0x40(r5)
	  lwz       r6, 0x104(r5)
	  addi      r5, r1, 0x8
	  lwz       r3, 0x30(r3)
	  add       r4, r6, r0
	  bl        0x63AA8
	  lwz       r0, -0x7640(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  addi      r3, r1, 0x8
	  bl        -0x5E4

	.loc_0x60:
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  bl        -0xF9C0
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  mr        r5, r31
	  addi      r6, r1, 0x8
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800868B8
 * Size:	0000B4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PCPU(int, unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  stw       r30, 0x48(r1)
	  mr        r30, r5
	  lis       r5, 0x8051
	  stw       r29, 0x44(r1)
	  subi      r31, r5, 0xDD0
	  rlwinm    r0,r30,0,16,31
	  mr        r29, r4
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  mulli     r0, r0, 0x30
	  addi      r5, r1, 0x8
	  lwz       r3, 0x40(r31)
	  lwz       r6, 0x104(r31)
	  lwz       r3, 0x30(r3)
	  add       r4, r6, r0
	  bl        0x639FC
	  lwz       r0, -0x7640(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  addi      r3, r1, 0x8
	  bl        -0x690

	.loc_0x64:
	  lwz       r3, 0x40(r31)
	  mulli     r4, r29, 0x3
	  lwz       r3, 0x30(r3)
	  bl        -0xFA70
	  mr        r3, r28
	  mr        r4, r29
	  lwz       r12, 0x0(r28)
	  mr        r5, r30
	  addi      r6, r1, 0x8
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008696C
 * Size:	0000A8
 */
void J3DShapeMtxConcatView::loadMtxConcatView_NCPU(int, unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r3, 0x8051
	  stw       r0, 0x44(r1)
	  rlwinm    r0,r5,0,16,31
	  mulli     r0, r0, 0x30
	  addi      r5, r1, 0x8
	  stw       r31, 0x3C(r1)
	  subi      r31, r3, 0xDD0
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  lwz       r3, 0x40(r31)
	  lwz       r4, 0x104(r31)
	  lwz       r3, 0x30(r3)
	  add       r4, r4, r0
	  bl        0x63958
	  lwz       r0, -0x7640(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  addi      r3, r1, 0x8
	  bl        -0x734

	.loc_0x54:
	  mulli     r30, r30, 0x3
	  addi      r3, r1, 0x8
	  mr        r4, r30
	  bl        -0xFB14
	  lwz       r3, 0x40(r31)
	  mr        r4, r30
	  lwz       r3, 0x30(r3)
	  bl        -0xFAA4
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0x90
	  lwz       r3, 0x40(r31)
	  addi      r4, r30, 0x1E
	  lwz       r3, 0x30(r3)
	  bl        -0xF9E8

	.loc_0x90:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086A14
 * Size:	0000B4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNCPU(int, unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  lwz       r0, -0x7640(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lis       r3, 0x8051
	  rlwinm    r0,r5,0,16,31
	  subi      r4, r3, 0xDD0
	  addi      r5, r1, 0x8
	  lwz       r3, 0x40(r4)
	  mulli     r0, r0, 0x30
	  lwz       r4, 0x104(r4)
	  lwz       r3, 0x30(r3)
	  add       r4, r4, r0
	  bl        0x638A4
	  addi      r3, r1, 0x8
	  bl        -0x7DC

	.loc_0x54:
	  lis       r3, 0x8051
	  subi      r31, r3, 0xDD0
	  mulli     r30, r30, 0x3
	  lwz       r3, 0x40(r31)
	  lwz       r3, 0x30(r3)
	  mr        r4, r30
	  bl        -0xFBC8
	  lwz       r3, 0x40(r31)
	  mr        r4, r30
	  lwz       r3, 0x30(r3)
	  bl        -0xFB58
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0x9C
	  lwz       r3, 0x40(r31)
	  addi      r4, r30, 0x1E
	  lwz       r3, 0x30(r3)
	  bl        -0xFA9C

	.loc_0x9C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086AC8
 * Size:	0000D4
 */
void J3DShapeMtxConcatView::loadMtxConcatView_PNGP_LOD(int,
                                                       unsigned short) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r5
	  lis       r5, 0x8051
	  stw       r30, 0x48(r1)
	  rlwinm    r0,r31,0,16,31
	  subi      r5, r5, 0xDD0
	  mr        r30, r4
	  stw       r29, 0x44(r1)
	  mr        r29, r3
	  mulli     r0, r0, 0x30
	  lwz       r3, 0x40(r5)
	  lwz       r6, 0x104(r5)
	  addi      r5, r1, 0x8
	  lwz       r3, 0x30(r3)
	  add       r4, r6, r0
	  bl        0x637F0
	  lis       r3, 0x8051
	  rlwinm    r0,r31,0,16,31
	  subi      r4, r3, 0xDD0
	  addi      r3, r1, 0x8
	  lwz       r4, 0x38(r4)
	  mulli     r0, r0, 0x30
	  mr        r5, r3
	  lwz       r4, 0x4(r4)
	  lwz       r4, 0x3C(r4)
	  add       r4, r4, r0
	  bl        0x637C4
	  lwz       r0, -0x7640(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  addi      r3, r1, 0x8
	  bl        -0x8C8

	.loc_0x8C:
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  bl        -0xFCA4
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  mr        r5, r31
	  addi      r6, r1, 0x8
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x54(r1)
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086B9C
 * Size:	00005C
 */
void J3DShapeMtx::load() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  lhz       r5, 0x4(r3)
	  stw       r0, 0x24(r1)
	  addi      r0, r4, 0x2CC8
	  addi      r12, r1, 0x8
	  li        r4, 0
	  lwz       r6, -0x7658(r13)
	  mulli     r6, r6, 0xC
	  add       r8, r0, r6
	  lwz       r7, 0x0(r8)
	  lwz       r6, 0x4(r8)
	  lwz       r0, 0x8(r8)
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r0, 0x10(r1)
	  bl        0x3AF44
	  nop
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086BF8
 * Size:	000064
 */
void J3DShapeMtx::calcNBTScale(const Vec&, float (*)[3][3], float (*)[3][3])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x4(r3)
	  mulli     r0, r0, 0x24
	  add       r5, r5, r0
	  psq_l     f4,0x0(r5),0,0
	  add       r7, r6, r0
	  psq_l     f3,0x8(r5),0,0
	  psq_l     f2,0x10(r5),0,0
	  psq_l     f1,0x18(r5),0,0
	  lfs       f0, 0x20(r5)
	  psq_st    f4,0x0(r7),0,0
	  psq_st    f3,0x8(r7),0,0
	  psq_st    f2,0x10(r7),0,0
	  psq_st    f1,0x18(r7),0,0
	  stfs      f0, 0x20(r7)
	  lhz       r0, 0x4(r3)
	  mulli     r0, r0, 0x24
	  add       r3, r6, r0
	  bl        -0x27670
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086C5C
 * Size:	0000D4
 */
void J3DShapeMtxConcatView::load() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  subi      r8, r13, 0x7648
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0xDD0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lis       r3, 0x804A
	  lwz       r10, 0x38(r31)
	  addi      r4, r3, 0x2D28
	  lwz       r0, -0x7658(r13)
	  li        r3, 0x15
	  lwz       r9, 0x84(r10)
	  mulli     r5, r0, 0xC
	  lhz       r0, 0x4(r30)
	  lwz       r6, 0xC(r9)
	  stw       r6, -0x7648(r13)
	  add       r4, r4, r5
	  lwz       r7, 0x0(r4)
	  li        r5, 0x30
	  lwz       r9, 0x10(r9)
	  lwz       r6, 0x4(r4)
	  lwz       r4, 0x8(r4)
	  stw       r9, 0x4(r8)
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r4, 0x10(r1)
	  lwz       r4, 0x4(r10)
	  lwz       r4, 0x48(r4)
	  lbzx      r0, r4, r0
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r8, r0
	  stw       r4, 0x104(r31)
	  bl        0x5DF98
	  lwz       r4, 0x38(r31)
	  mr        r3, r30
	  lhz       r0, 0x4(r30)
	  addi      r12, r1, 0x8
	  lwz       r5, 0x4(r4)
	  li        r4, 0
	  rlwinm    r0,r0,1,0,30
	  lwz       r5, 0x4C(r5)
	  lhzx      r5, r5, r0
	  bl        0x3AE14
	  nop
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086D30
 * Size:	000124
 */
void J3DShapeMtxConcatView::loadNrmMtx(int, unsigned short, float (*)[4]) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  rlwinm    r0,r5,0,16,31
	  stw       r31, 0x5C(r1)
	  mr        r31, r6
	  lwz       r3, -0x7654(r13)
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0x1
	  bne-      .loc_0xB0
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0x40
	  mr        r3, r31
	  li        r4, 0x1E
	  bl        -0xFD5C

	.loc_0x40:
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  mr        r3, r31
	  li        r4, 0
	  bl        -0xFE4C
	  b         .loc_0x110

	.loc_0x5C:
	  lis       r4, 0x8051
	  psq_l     f5,0x0(r31),0,0
	  subi      r4, r4, 0xDD0
	  lfs       f4, 0x8(r31)
	  psq_l     f3,0x10(r31),0,0
	  addi      r3, r1, 0x2C
	  lfs       f2, 0x18(r31)
	  psq_l     f1,0x20(r31),0,0
	  lfs       f0, 0x28(r31)
	  lwz       r4, 0x118(r4)
	  psq_st    f5,0x0(r3),0,0
	  stfs      f4, 0x34(r1)
	  psq_st    f3,0xC(r3),0,0
	  stfs      f2, 0x40(r1)
	  psq_st    f1,0x18(r3),0,0
	  stfs      f0, 0x4C(r1)
	  bl        -0x277F4
	  addi      r3, r1, 0x2C
	  li        r4, 0
	  bl        -0xFE34
	  b         .loc_0x110

	.loc_0xB0:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x27D44
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0xD4
	  addi      r3, r1, 0x8
	  li        r4, 0x1E
	  bl        -0xFD58

	.loc_0xD4:
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xF0
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0xFE74
	  b         .loc_0x110

	.loc_0xF0:
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  lwz       r4, 0x118(r4)
	  bl        -0x27858
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0xFE98

	.loc_0x110:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086E54
 * Size:	0000AC
 */
void J3DShapeMtxMulti::load() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  stw       r28, 0x20(r1)
	  mr        r28, r3
	  lis       r3, 0x804A
	  lwz       r31, 0xC(r28)
	  lwz       r0, -0x7658(r13)
	  lhz       r30, 0x8(r28)
	  mulli     r4, r0, 0xC
	  addi      r0, r3, 0x2CC8
	  add       r5, r0, r4
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x10(r1)
	  b         .loc_0x84

	.loc_0x5C:
	  lhz       r5, 0x0(r31)
	  cmplwi    r5, 0xFFFF
	  beq-      .loc_0x7C
	  mr        r3, r28
	  mr        r4, r29
	  addi      r12, r1, 0x8
	  bl        0x3AC5C
	  nop

	.loc_0x7C:
	  addi      r31, r31, 0x2
	  addi      r29, r29, 0x1

	.loc_0x84:
	  cmpw      r29, r30
	  blt+      .loc_0x5C
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086F00
 * Size:	0000B0
 */
void J3DShapeMtxMulti::calcNBTScale(const Vec&, float (*)[3][3],
                                    float (*)[3][3])
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r28, r6
	  li        r29, 0
	  li        r31, 0
	  lhz       r30, 0x8(r3)
	  b         .loc_0x94

	.loc_0x30:
	  lwz       r3, 0xC(r25)
	  lhzx      r0, r3, r31
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x8C
	  mulli     r0, r0, 0x24
	  mr        r4, r26
	  add       r3, r27, r0
	  psq_l     f4,0x0(r3),0,0
	  add       r5, r28, r0
	  psq_l     f3,0x8(r3),0,0
	  psq_l     f2,0x10(r3),0,0
	  psq_l     f1,0x18(r3),0,0
	  lfs       f0, 0x20(r3)
	  psq_st    f4,0x0(r5),0,0
	  psq_st    f3,0x8(r5),0,0
	  psq_st    f2,0x10(r5),0,0
	  psq_st    f1,0x18(r5),0,0
	  stfs      f0, 0x20(r5)
	  lwz       r3, 0xC(r25)
	  lhzx      r0, r3, r31
	  mulli     r0, r0, 0x24
	  add       r3, r28, r0
	  bl        -0x279B0

	.loc_0x8C:
	  addi      r31, r31, 0x2
	  addi      r29, r29, 0x1

	.loc_0x94:
	  cmpw      r29, r30
	  blt+      .loc_0x30
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80086FB0
 * Size:	0001EC
 */
void J3DShapeMtxMultiConcatView::load() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  subi      r5, r13, 0x7648
	  stw       r0, 0x54(r1)
	  stmw      r23, 0x2C(r1)
	  subi      r30, r4, 0xDD0
	  mr        r24, r3
	  lwz       r6, 0x38(r30)
	  lbz       r0, -0x764F(r13)
	  lwz       r3, 0x84(r6)
	  cmplwi    r0, 0
	  lwz       r4, 0xC(r3)
	  stw       r4, -0x7648(r13)
	  lwz       r0, 0x10(r3)
	  stw       r0, 0x4(r5)
	  bne-      .loc_0xF0
	  lwz       r4, -0x7658(r13)
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2D28
	  lwz       r23, 0xC(r24)
	  mulli     r3, r4, 0xC
	  lhz       r28, 0x8(r24)
	  li        r29, 0
	  add       r5, r0, r3
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x14(r1)
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  b         .loc_0xE4

	.loc_0x80:
	  lhz       r0, 0x0(r23)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xDC
	  lwz       r5, 0x38(r30)
	  rlwinm    r7,r0,1,15,30
	  subi      r4, r13, 0x7648
	  li        r3, 0x15
	  lwz       r8, 0x4(r5)
	  li        r5, 0x30
	  lwz       r6, 0x48(r8)
	  lwz       r8, 0x4C(r8)
	  lbzx      r0, r6, r0
	  lhzx      r25, r8, r7
	  rlwinm    r0,r0,2,0,29
	  lwzx      r4, r4, r0
	  stw       r4, 0x104(r30)
	  bl        0x5DC10
	  mr        r3, r24
	  mr        r4, r29
	  mr        r5, r25
	  addi      r12, r1, 0x14
	  bl        0x3AAA0
	  nop

	.loc_0xDC:
	  addi      r23, r23, 0x2
	  addi      r29, r29, 0x1

	.loc_0xE4:
	  cmpw      r29, r28
	  blt+      .loc_0x80
	  b         .loc_0x1D8

	.loc_0xF0:
	  lwz       r6, 0x4(r6)
	  li        r3, 0x15
	  li        r5, 0x30
	  lwz       r29, 0x40(r6)
	  stw       r4, 0x104(r30)
	  bl        0x5DBCC
	  lis       r3, 0x8051
	  lwz       r23, 0xC(r24)
	  addi      r28, r3, 0x20F4
	  lhz       r27, 0x8(r24)
	  lis       r3, 0x804A
	  li        r26, 0
	  addi      r31, r3, 0x2D88
	  b         .loc_0x1D0

	.loc_0x128:
	  lwz       r0, -0x7658(r13)
	  mulli     r6, r0, 0xC
	  add       r5, r31, r6
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x10(r1)
	  lhz       r4, 0x0(r23)
	  cmplwi    r4, 0xFFFF
	  beq-      .loc_0x1C4
	  rlwinm    r3,r4,1,15,30
	  lhz       r0, 0x0(r28)
	  lhzx      r25, r29, r3
	  cmplw     r25, r0
	  beq-      .loc_0x1C4
	  lwz       r3, 0x38(r30)
	  lwz       r3, 0x4(r3)
	  lwz       r3, 0x48(r3)
	  lbzx      r0, r3, r4
	  cmplwi    r0, 0
	  bne-      .loc_0x1A8
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2D28
	  add       r5, r0, r6
	  lwz       r4, 0x0(r5)
	  lwz       r3, 0x4(r5)
	  lwz       r0, 0x8(r5)
	  stw       r4, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stw       r0, 0x10(r1)

	.loc_0x1A8:
	  mr        r3, r24
	  mr        r4, r26
	  mr        r5, r25
	  addi      r12, r1, 0x8
	  bl        0x3A9BC
	  nop
	  sth       r25, 0x0(r28)

	.loc_0x1C4:
	  addi      r23, r23, 0x2
	  addi      r28, r28, 0x2
	  addi      r26, r26, 0x1

	.loc_0x1D0:
	  cmpw      r26, r27
	  blt+      .loc_0x128

	.loc_0x1D8:
	  lmw       r23, 0x2C(r1)
	  lwz       r0, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008719C
 * Size:	000138
 */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int, unsigned short,
                                            float (*)[4]) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  stw       r0, 0x64(r1)
	  rlwinm    r0,r5,0,16,31
	  stw       r31, 0x5C(r1)
	  mr        r31, r6
	  stw       r30, 0x58(r1)
	  mr        r30, r4
	  lwz       r3, -0x7654(r13)
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0x1
	  bne-      .loc_0xBC
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0x4C
	  mulli     r4, r30, 0x3
	  mr        r3, r31
	  addi      r4, r4, 0x1E
	  bl        -0x101D4

	.loc_0x4C:
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x68
	  mulli     r4, r30, 0x3
	  mr        r3, r31
	  bl        -0x102C4
	  b         .loc_0x120

	.loc_0x68:
	  lis       r4, 0x8051
	  psq_l     f5,0x0(r31),0,0
	  subi      r4, r4, 0xDD0
	  lfs       f4, 0x8(r31)
	  psq_l     f3,0x10(r31),0,0
	  addi      r3, r1, 0x2C
	  lfs       f2, 0x18(r31)
	  psq_l     f1,0x20(r31),0,0
	  lfs       f0, 0x28(r31)
	  lwz       r4, 0x118(r4)
	  psq_st    f5,0x0(r3),0,0
	  stfs      f4, 0x34(r1)
	  psq_st    f3,0xC(r3),0,0
	  stfs      f2, 0x40(r1)
	  psq_st    f1,0x18(r3),0,0
	  stfs      f0, 0x4C(r1)
	  bl        -0x27C6C
	  addi      r3, r1, 0x2C
	  li        r4, 0
	  bl        -0x102AC
	  b         .loc_0x120

	.loc_0xBC:
	  mr        r3, r31
	  addi      r4, r1, 0x8
	  bl        -0x281BC
	  lwz       r0, -0x764C(r13)
	  cmplwi    r0, 0x2000
	  bne-      .loc_0xE4
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  addi      r4, r4, 0x1E
	  bl        -0x101D4

	.loc_0xE4:
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x100
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  bl        -0x102F0
	  b         .loc_0x120

	.loc_0x100:
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  lwz       r4, 0x118(r4)
	  bl        -0x27CD4
	  mulli     r4, r30, 0x3
	  addi      r3, r1, 0x8
	  bl        -0x10314

	.loc_0x120:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800872D4
 * Size:	000134
 */
void J3DShapeMtxBBoardConcatView::load() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x44(r1)
	  lhz       r0, 0x4(r3)
	  subi      r3, r4, 0xDD0
	  lwz       r7, 0x38(r3)
	  rlwinm    r5,r0,1,0,30
	  lwz       r6, 0x4(r7)
	  lwz       r4, 0x48(r6)
	  lwz       r6, 0x4C(r6)
	  lbzx      r0, r4, r0
	  lhzx      r5, r6, r5
	  cmplwi    r0, 0
	  bne-      .loc_0x58
	  lwz       r4, 0x84(r7)
	  mulli     r0, r5, 0x30
	  addi      r5, r1, 0x8
	  lwz       r4, 0xC(r4)
	  add       r4, r4, r0
	  bl        0x62FDC
	  b         .loc_0x70

	.loc_0x58:
	  lwz       r4, 0x84(r7)
	  mulli     r0, r5, 0x30
	  addi      r5, r1, 0x8
	  lwz       r4, 0x10(r4)
	  add       r4, r4, r0
	  bl        0x62FC0

	.loc_0x70:
	  addi      r3, r1, 0x8
	  bl        -0x284D0
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x1049C
	  lfs       f0, -0x7878(r2)
	  lfs       f1, 0x8(r1)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xA0
	  lfs       f0, -0x7874(r2)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x8(r1)

	.loc_0xA0:
	  lfs       f0, -0x7878(r2)
	  lfs       f1, 0x1C(r1)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xBC
	  lfs       f0, -0x7874(r2)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x1C(r1)

	.loc_0xBC:
	  lfs       f0, -0x7878(r2)
	  lfs       f1, 0x30(r1)
	  fcmpu     cr0, f0, f1
	  beq-      .loc_0xD8
	  lfs       f0, -0x7874(r2)
	  fdivs     f0, f0, f1
	  stfs      f0, 0x30(r1)

	.loc_0xD8:
	  lbz       r0, -0x7650(r13)
	  lfs       f0, -0x7878(r2)
	  cmplwi    r0, 0
	  stfs      f0, 0x14(r1)
	  stfs      f0, 0x24(r1)
	  stfs      f0, 0x34(r1)
	  bne-      .loc_0x104
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x10498
	  b         .loc_0x124

	.loc_0x104:
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  lwz       r4, 0x118(r4)
	  bl        -0x27E74
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x104BC

	.loc_0x124:
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087408
 * Size:	00013C
 */
void J3DShapeMtxYBBoardConcatView::load() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  lis       r4, 0x8051
	  stw       r0, 0x74(r1)
	  stw       r31, 0x6C(r1)
	  mr        r31, r3
	  subi      r3, r4, 0xDD0
	  lhz       r0, 0x4(r31)
	  lwz       r7, 0x38(r3)
	  rlwinm    r5,r0,1,0,30
	  lwz       r6, 0x4(r7)
	  lwz       r4, 0x48(r6)
	  lwz       r6, 0x4C(r6)
	  lbzx      r0, r4, r0
	  lhzx      r5, r6, r5
	  cmplwi    r0, 0
	  bne-      .loc_0x60
	  lwz       r4, 0x84(r7)
	  mulli     r0, r5, 0x30
	  addi      r5, r1, 0x2C
	  lwz       r4, 0xC(r4)
	  add       r4, r4, r0
	  bl        0x62EA0
	  b         .loc_0x78

	.loc_0x60:
	  lwz       r4, 0x84(r7)
	  mulli     r0, r5, 0x30
	  addi      r5, r1, 0x2C
	  lwz       r4, 0x10(r4)
	  add       r4, r4, r0
	  bl        0x62E84

	.loc_0x78:
	  addi      r3, r1, 0x2C
	  bl        -0x2851C
	  addi      r3, r1, 0x2C
	  li        r4, 0
	  bl        -0x105D8
	  lwz       r3, -0x7654(r13)
	  lhz       r0, 0x4(r31)
	  lbzx      r0, r3, r0
	  cmplwi    r0, 0x1
	  bne-      .loc_0xE0
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xBC
	  addi      r3, r1, 0x2C
	  li        r4, 0
	  bl        -0x10584
	  b         .loc_0x128

	.loc_0xBC:
	  lis       r4, 0x8051
	  addi      r3, r1, 0x2C
	  subi      r4, r4, 0xDD0
	  lwz       r4, 0x118(r4)
	  bl        -0x27F60
	  addi      r3, r1, 0x2C
	  li        r4, 0
	  bl        -0x105A8
	  b         .loc_0x128

	.loc_0xE0:
	  addi      r3, r1, 0x2C
	  addi      r4, r1, 0x8
	  bl        -0x2844C
	  lbz       r0, -0x7650(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x108
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x10564
	  b         .loc_0x128

	.loc_0x108:
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  lwz       r4, 0x118(r4)
	  bl        -0x27F48
	  addi      r3, r1, 0x8
	  li        r4, 0
	  bl        -0x10588

	.loc_0x128:
	  lwz       r0, 0x74(r1)
	  lwz       r31, 0x6C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087544
 * Size:	00006C
 */
J3DShapeMtxYBBoardConcatView::~J3DShapeMtxYBBoardConcatView()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2E8C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F24
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F4C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x634E0

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800875B0
 * Size:	00000C
 */
void J3DShapeMtxYBBoardConcatView::getType() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x534D
	  addi      r3, r3, 0x5942
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800875BC
 * Size:	000004
 */
void J3DShapeMtxConcatView::loadNrmMtx(int, unsigned short) const { }

/*
 * --INFO--
 * Address:	800875C0
 * Size:	00006C
 */
J3DShapeMtxBBoardConcatView::~J3DShapeMtxBBoardConcatView()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2EB4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F24
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F4C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x6355C

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008762C
 * Size:	00000C
 */
void J3DShapeMtxBBoardConcatView::getType() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x534D
	  addi      r3, r3, 0x4242
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087638
 * Size:	00006C
 */
J3DShapeMtxMultiConcatView::~J3DShapeMtxMultiConcatView()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x54
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2EDC
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F24
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F4C
	  stw       r0, 0x0(r31)

	.loc_0x44:
	  extsh.    r0, r4
	  ble-      .loc_0x54
	  mr        r3, r31
	  bl        -0x635D4

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800876A4
 * Size:	00000C
 */
void J3DShapeMtxMultiConcatView::getType() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x534D
	  addi      r3, r3, 0x4D43
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800876B0
 * Size:	000008
 */
void J3DShapeMtxMultiConcatView::getUseMtxNum() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800876B8
 * Size:	000010
 */
void J3DShapeMtxMultiConcatView::getUseMtxIndex(unsigned short) const
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  rlwinm    r0,r4,1,15,30
	  lhzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800876C8
 * Size:	000004
 */
void J3DShapeMtxMultiConcatView::loadNrmMtx(int, unsigned short) const { }

/*
 * --INFO--
 * Address:	800876CC
 * Size:	00005C
 */
J3DShapeMtxMulti::~J3DShapeMtxMulti()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x44
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F04
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2F4C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x63658

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087728
 * Size:	00000C
 */
void J3DShapeMtxMulti::getType() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x534D
	  addi      r3, r3, 0x4D4C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087734
 * Size:	000008
 */
void J3DShapeMtxMulti::getUseMtxNum() const
{
	/*
	.loc_0x0:
	  lhz       r3, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008773C
 * Size:	000010
 */
void J3DShapeMtxMulti::getUseMtxIndex(unsigned short) const
{
	/*
	.loc_0x0:
	  lwz       r3, 0xC(r3)
	  rlwinm    r0,r4,1,15,30
	  lhzx      r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008774C
 * Size:	00000C
 */
void J3DShapeMtxConcatView::getType() const
{
	/*
	.loc_0x0:
	  lis       r3, 0x534D
	  addi      r3, r3, 0x4356
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80087758
 * Size:	0001A8
 */
void __sinit_J3DShapeMtx_cpp(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  stmw      r14, 0x38(r1)
	  lis       r3, 0x804A
	  addi      r16, r3, 0x2C98
	  lwz       r15, 0xC0(r16)
	  addi      r11, r16, 0x90
	  lwz       r0, 0x88(r16)
	  addi      r3, r16, 0xF0
	  stw       r15, 0x34(r1)
	  addi      r20, r16, 0x30
	  lwz       r15, 0xC4(r16)
	  stw       r0, 0x28(r11)
	  lwz       r0, 0x34(r1)
	  stw       r15, 0x8(r1)
	  lwz       r15, 0xC8(r16)
	  stw       r0, 0xF0(r16)
	  lwz       r0, 0x8(r1)
	  stw       r15, 0xC(r1)
	  lwz       r15, 0xCC(r16)
	  stw       r0, 0xF4(r16)
	  lwz       r0, 0xC(r1)
	  stw       r15, 0x10(r1)
	  lwz       r15, 0xD0(r16)
	  stw       r0, 0xF8(r16)
	  lwz       r0, 0x10(r1)
	  stw       r15, 0x14(r1)
	  lwz       r15, 0xD4(r16)
	  stw       r0, 0xC(r3)
	  lwz       r0, 0x14(r1)
	  stw       r15, 0x18(r1)
	  lwz       r15, 0xD8(r16)
	  stw       r0, 0x10(r3)
	  lwz       r0, 0x18(r1)
	  stw       r15, 0x1C(r1)
	  lwz       r15, 0xDC(r16)
	  stw       r0, 0x14(r3)
	  lwz       r0, 0x1C(r1)
	  stw       r15, 0x20(r1)
	  lwz       r15, 0xE0(r16)
	  stw       r0, 0x18(r3)
	  lwz       r0, 0x20(r1)
	  stw       r15, 0x24(r1)
	  lwz       r15, 0xE4(r16)
	  stw       r0, 0x1C(r3)
	  lwz       r0, 0x24(r1)
	  stw       r15, 0x28(r1)
	  lwz       r15, 0xE8(r16)
	  stw       r0, 0x20(r3)
	  lwz       r0, 0x28(r1)
	  stw       r15, 0x2C(r1)
	  lwz       r15, 0xEC(r16)
	  stw       r0, 0x24(r3)
	  lwz       r0, 0x2C(r1)
	  lwz       r17, 0x0(r16)
	  lwz       r18, 0x4(r16)
	  lwz       r19, 0x8(r16)
	  lwz       r21, 0xC(r16)
	  lwz       r22, 0x10(r16)
	  lwz       r23, 0x14(r16)
	  lwz       r24, 0x18(r16)
	  lwz       r25, 0x1C(r16)
	  lwz       r26, 0x20(r16)
	  lwz       r27, 0x24(r16)
	  lwz       r28, 0x28(r16)
	  lwz       r29, 0x2C(r16)
	  lwz       r30, 0x60(r16)
	  lwz       r31, 0x64(r16)
	  lwz       r12, 0x68(r16)
	  lwz       r10, 0x6C(r16)
	  lwz       r9, 0x70(r16)
	  lwz       r8, 0x74(r16)
	  lwz       r7, 0x78(r16)
	  lwz       r6, 0x7C(r16)
	  lwz       r5, 0x80(r16)
	  lwz       r4, 0x84(r16)
	  lwz       r14, 0x8C(r16)
	  stw       r0, 0x28(r3)
	  mr        r0, r15
	  stw       r15, 0x30(r1)
	  stw       r17, 0x30(r16)
	  stw       r18, 0x34(r16)
	  stw       r19, 0x38(r16)
	  stw       r21, 0xC(r20)
	  stw       r22, 0x10(r20)
	  stw       r23, 0x14(r20)
	  stw       r24, 0x18(r20)
	  stw       r25, 0x1C(r20)
	  stw       r26, 0x20(r20)
	  stw       r27, 0x24(r20)
	  stw       r28, 0x28(r20)
	  stw       r29, 0x2C(r20)
	  stw       r30, 0x90(r16)
	  stw       r31, 0x94(r16)
	  stw       r12, 0x98(r16)
	  stw       r10, 0xC(r11)
	  stw       r9, 0x10(r11)
	  stw       r8, 0x14(r11)
	  stw       r7, 0x18(r11)
	  stw       r6, 0x1C(r11)
	  stw       r5, 0x20(r11)
	  stw       r4, 0x24(r11)
	  stw       r14, 0x2C(r11)
	  stw       r0, 0x2C(r3)
	  lmw       r14, 0x38(r1)
	  addi      r1, r1, 0x80
	  blr
	*/
}
