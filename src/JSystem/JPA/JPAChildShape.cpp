#include "types.h"

/*
 * --INFO--
 * Address:	8008EE44
 * Size:	000128
 */
void JPARegistChildPrmEnv(JPAEmitterWorkData*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  addi      r4, r1, 0xC
	  stmw      r25, 0x24(r1)
	  lwz       r5, 0x4(r3)
	  lwz       r28, 0x0(r3)
	  li        r3, 0x1
	  lwz       r5, 0x24(r5)
	  lbz       r7, 0xB8(r28)
	  lwz       r5, 0x0(r5)
	  addi      r0, r7, 0x1
	  lbz       r6, 0xB9(r28)
	  lbz       r31, 0x34(r5)
	  addi      r8, r6, 0x1
	  lbz       r25, 0x35(r5)
	  mullw     r10, r31, r0
	  lbz       r7, 0xBA(r28)
	  lbz       r6, 0xBB(r28)
	  lbz       r26, 0x36(r5)
	  addi      r0, r7, 0x1
	  lbz       r27, 0x37(r5)
	  addi      r9, r6, 0x1
	  lbz       r7, 0xBD(r28)
	  mullw     r11, r25, r8
	  lbz       r8, 0xBC(r28)
	  rlwinm    r12,r10,24,24,31
	  stb       r31, 0x14(r1)
	  lbz       r6, 0xBE(r28)
	  addi      r8, r8, 0x1
	  mullw     r10, r26, r0
	  lbz       r28, 0x38(r5)
	  lbz       r29, 0x39(r5)
	  addi      r0, r6, 0x1
	  lbz       r30, 0x3A(r5)
	  addi      r7, r7, 0x1
	  lbz       r31, 0x3B(r5)
	  mullw     r9, r27, r9
	  stb       r25, 0x15(r1)
	  rlwinm    r11,r11,24,24,31
	  rlwinm    r10,r10,24,24,31
	  stb       r26, 0x16(r1)
	  mullw     r6, r28, r8
	  stb       r27, 0x17(r1)
	  rlwinm    r8,r9,24,24,31
	  stb       r12, 0x14(r1)
	  mullw     r5, r29, r7
	  stb       r11, 0x15(r1)
	  rlwinm    r7,r6,24,24,31
	  stb       r28, 0x10(r1)
	  stb       r10, 0x16(r1)
	  mullw     r0, r30, r0
	  rlwinm    r6,r5,24,24,31
	  stb       r29, 0x11(r1)
	  stb       r8, 0x17(r1)
	  rlwinm    r5,r0,24,24,31
	  stb       r30, 0x12(r1)
	  lwz       r0, 0x14(r1)
	  stb       r31, 0x13(r1)
	  stb       r7, 0x10(r1)
	  stb       r6, 0x11(r1)
	  stb       r5, 0x12(r1)
	  stw       r0, 0xC(r1)
	  bl        0x59720
	  lwz       r0, 0x10(r1)
	  addi      r4, r1, 0x8
	  li        r3, 0x2
	  stw       r0, 0x8(r1)
	  bl        0x5970C
	  lmw       r25, 0x24(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008EF6C
 * Size:	00002C
 */
void JPACalcChildAlphaOut(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  lfs       f1, -0x77EC(r2)
	  lfs       f0, 0x84(r4)
	  lfs       f2, -0x77F0(r2)
	  fsubs     f0, f1, f0
	  fmuls     f3, f2, f0
	  psq_st    f3,0x8(r1),0x1,0x2
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x96(r4)
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008EF98
 * Size:	000030
 */
void JPACalcChildScaleOut(JPAEmitterWorkData*, JPABaseParticle*)
{
	/*
	.loc_0x0:
	  lfs       f2, -0x77EC(r2)
	  lfs       f0, 0x84(r4)
	  lfs       f1, 0x68(r4)
	  fsubs     f0, f2, f0
	  fmuls     f0, f1, f0
	  stfs      f0, 0x60(r4)
	  lfs       f0, 0x84(r4)
	  lfs       f1, 0x6C(r4)
	  fsubs     f0, f2, f0
	  fmuls     f0, f1, f0
	  stfs      f0, 0x64(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8008EFC8
 * Size:	000008
 */
JPAChildShape::JPAChildShape(const unsigned char* a1)
{
	// Generated from stw r4, 0x0(r3)
	_00 = a1;
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001C8
 */
void JPAChildShape::init_jpa(const unsigned char*, JKRHeap*)
{
	// UNUSED FUNCTION
}
