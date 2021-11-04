#include "types.h"

/*
 * --INFO--
 * Address:	80090538
 * Size:	0001FC
 */
JPAEmitterManager::JPAEmitterManager(unsigned long, unsigned long, JKRHeap*,
                                     unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r30, r3
	  mr        r26, r4
	  mr        r27, r5
	  mr        r31, r6
	  mr        r29, r7
	  mr        r28, r8
	  addi      r3, r30, 0x4
	  bl        -0x69C94
	  li        r0, 0
	  mr        r4, r31
	  stw       r0, 0x10(r30)
	  li        r5, 0
	  stw       r0, 0x14(r30)
	  stw       r0, 0x18(r30)
	  stw       r27, 0x24(r30)
	  stw       r26, 0x28(r30)
	  stb       r29, 0x2C(r30)
	  stb       r28, 0x2D(r30)
	  lwz       r29, 0x24(r30)
	  mulli     r3, r29, 0x114
	  addi      r3, r3, 0x10
	  bl        -0x6C554
	  lis       r4, 0x8009
	  lis       r5, 0x8009
	  addi      r4, r4, 0x810
	  mr        r7, r29
	  addi      r5, r5, 0x7B0
	  li        r6, 0x114
	  bl        0x31438
	  li        r28, 0
	  mr        r29, r3
	  b         .loc_0xA4

	.loc_0x90:
	  addi      r3, r30, 0x4
	  addi      r4, r29, 0x58
	  bl        -0x69C34
	  addi      r29, r29, 0x114
	  addi      r28, r28, 0x1

	.loc_0xA4:
	  lwz       r0, 0x24(r30)
	  cmplw     r28, r0
	  blt+      .loc_0x90
	  lwz       r29, 0x28(r30)
	  mr        r4, r31
	  li        r5, 0
	  mulli     r3, r29, 0xA0
	  addi      r3, r3, 0x10
	  bl        -0x6C5B4
	  lis       r4, 0x8009
	  lis       r5, 0x8009
	  addi      r4, r4, 0x7A0
	  mr        r7, r29
	  addi      r5, r5, 0x764
	  li        r6, 0xA0
	  bl        0x313D8
	  li        r6, 0
	  li        r5, 0
	  b         .loc_0x138

	.loc_0xF0:
	  lwz       r0, 0x14(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  stw       r0, 0x0(r3)
	  stw       r5, 0x4(r3)
	  lwz       r4, 0x14(r30)
	  stw       r3, 0x4(r4)
	  stw       r3, 0x14(r30)
	  b         .loc_0x124

	.loc_0x114:
	  stw       r3, 0x10(r30)
	  stw       r3, 0x14(r30)
	  stw       r5, 0x0(r3)
	  stw       r5, 0x4(r3)

	.loc_0x124:
	  lwz       r4, 0x18(r30)
	  addi      r3, r3, 0xA0
	  addi      r6, r6, 0x1
	  addi      r0, r4, 0x1
	  stw       r0, 0x18(r30)

	.loc_0x138:
	  lwz       r0, 0x28(r30)
	  cmplw     r6, r0
	  blt+      .loc_0xF0
	  lbz       r29, 0x2C(r30)
	  mr        r4, r31
	  li        r5, 0
	  mulli     r3, r29, 0xC
	  addi      r3, r3, 0x10
	  bl        -0x6C648
	  lis       r4, 0x8009
	  lis       r5, 0x8009
	  addi      r4, r4, 0x734
	  mr        r7, r29
	  addi      r5, r5, 0x868
	  li        r6, 0xC
	  bl        0x31344
	  stw       r3, 0x0(r30)
	  mr        r4, r31
	  li        r5, 0
	  lbz       r0, 0x2D(r30)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x6C67C
	  li        r5, 0
	  stw       r3, 0x1C(r30)
	  mr        r4, r5
	  li        r6, 0
	  b         .loc_0x1B4

	.loc_0x1A4:
	  lwz       r3, 0x1C(r30)
	  addi      r6, r6, 0x1
	  stwx      r4, r3, r5
	  addi      r5, r5, 0x4

	.loc_0x1B4:
	  lbz       r0, 0x2D(r30)
	  cmpw      r6, r0
	  blt+      .loc_0x1A4
	  mr        r4, r31
	  li        r3, 0x218
	  li        r5, 0
	  bl        -0x6C7C4
	  cmplwi    r3, 0
	  beq-      .loc_0x1E0
	  li        r0, 0
	  stw       r0, 0xC(r3)

	.loc_0x1E0:
	  stw       r3, 0x20(r30)
	  mr        r3, r30
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JPARandom::~JPARandom()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090734
 * Size:	000030
 */
void JSUList<JPABaseEmitter>::JSUList()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x69E78
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
 * Address:	80090764
 * Size:	00003C
 */
void JPANode<JPABaseParticle>::~JPANode()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x24
	  extsh.    r0, r4
	  ble-      .loc_0x24
	  bl        -0x6C6D0

	.loc_0x24:
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
 * Address:	800907A0
 * Size:	000010
 */
void JPANode<JPABaseParticle>::JPANode()
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
JPABaseParticle::~JPABaseParticle()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800907B0
 * Size:	000060
 */
JPABaseEmitter::~JPABaseEmitter()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  addic.    r0, r30, 0x58
	  beq-      .loc_0x34
	  addi      r3, r30, 0x58
	  li        r4, 0
	  bl        -0x6A010

	.loc_0x34:
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x6C73C

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80090810
 * Size:	000058
 */
JPABaseEmitter::JPABaseEmitter()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  addi      r3, r31, 0x58
	  bl        -0x6A074
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0xC4(r31)
	  stw       r0, 0xC8(r31)
	  stw       r0, 0xCC(r31)
	  stw       r0, 0xD0(r31)
	  stw       r0, 0xD4(r31)
	  stw       r0, 0xD8(r31)
	  stw       r0, 0xDC(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<JPABaseEmitter>::~JSULink()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void JPAList<JPABaseParticle>::~JPAList()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090868
 * Size:	000054
 */
void JSUList<JPABaseEmitter>::~JSUList()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        -0x6A024
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x6C7E8

	.loc_0x38:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800908BC
 * Size:	0000DC
 */
void JPAEmitterManager::createSimpleEmitterID(const JGeometry::TVec3<float>&,
                                              unsigned short, unsigned char,
                                              unsigned char,
                                              JPAEmitterCallBack*,
                                              JPAParticleCallBack*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  rlwinm    r0,r7,2,22,29
	  stmw      r24, 0x10(r1)
	  mr        r24, r3
	  mr        r25, r4
	  mr        r27, r7
	  mr        r26, r6
	  mr        r28, r8
	  mr        r29, r9
	  mr        r4, r5
	  lwz       r3, 0x1C(r3)
	  lwzx      r3, r3, r0
	  bl        0x7C34
	  mr.       r30, r3
	  beq-      .loc_0xC4
	  lwz       r0, 0xC(r24)
	  cmplwi    r0, 0
	  beq-      .loc_0xC4
	  lwz       r31, 0x4(r24)
	  addi      r3, r24, 0x4
	  mr        r4, r31
	  bl        -0x69CF4
	  rlwinm    r0,r26,0,24,31
	  lwz       r3, 0x0(r24)
	  mulli     r0, r0, 0xC
	  mr        r4, r31
	  add       r3, r3, r0
	  bl        -0x6A04C
	  lwz       r31, 0x0(r31)
	  mr        r4, r24
	  mr        r5, r30
	  mr        r3, r31
	  bl        -0xC60
	  addi      r0, r24, 0x10
	  lfs       f2, 0x0(r25)
	  stw       r0, 0xE0(r31)
	  mr        r3, r31
	  lfs       f1, 0x4(r25)
	  stw       r28, 0xEC(r31)
	  lfs       f0, 0x8(r25)
	  stw       r29, 0xF0(r31)
	  stb       r26, 0x112(r31)
	  stb       r27, 0x113(r31)
	  stfs      f2, 0xA4(r31)
	  stfs      f1, 0xA8(r31)
	  stfs      f0, 0xAC(r31)
	  b         .loc_0xC8

	.loc_0xC4:
	  li        r3, 0

	.loc_0xC8:
	  lmw       r24, 0x10(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C8
 */
void JPAEmitterManager::createSimpleEmitter(const JGeometry::TVec3<float>&,
                                            unsigned short, JPAEmitterCallBack*,
                                            JPAParticleCallBack*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000090
 */
void JPAEmitterManager::calc(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090998
 * Size:	0000B0
 */
void JPAEmitterManager::calc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0x80

	.loc_0x28:
	  rlwinm    r0,r29,0,24,31
	  lwz       r3, 0x0(r28)
	  mulli     r0, r0, 0xC
	  lwzx      r31, r3, r0
	  b         .loc_0x74

	.loc_0x3C:
	  lwz       r30, 0x0(r31)
	  lwz       r31, 0xC(r31)
	  lwz       r3, 0xE8(r30)
	  mr        r5, r30
	  lwz       r4, 0x20(r28)
	  bl        0x61B4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  lwz       r0, 0xF4(r30)
	  rlwinm.   r0,r0,0,22,22
	  bne-      .loc_0x74
	  mr        r3, r28
	  mr        r4, r30
	  bl        0x2F8

	.loc_0x74:
	  cmplwi    r31, 0
	  bne+      .loc_0x3C
	  addi      r29, r29, 0x1

	.loc_0x80:
	  lbz       r0, 0x2C(r28)
	  rlwinm    r3,r29,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x28
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80090A48
 * Size:	000200
 */
void JPAEmitterManager::draw(const JPADrawInfo*, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r4, 0x20(r3)
	  mr        r3, r30
	  addi      r4, r4, 0x184
	  bl        0x59854
	  lwz       r4, 0x20(r29)
	  addi      r3, r30, 0x30
	  addi      r4, r4, 0x1B4
	  bl        0x59844
	  mr        r3, r29
	  bl        0x3B4
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0x57AE4
	  li        r3, 0
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0x1
	  li        r8, 0
	  bl        0x57B30
	  li        r3, 0
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        0x55088
	  li        r3, 0x1
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        0x55078
	  li        r3, 0x2
	  li        r4, 0x1
	  li        r5, 0x1
	  bl        0x55068
	  li        r3, 0
	  bl        0x550A8
	  li        r3, 0
	  bl        0x550E4
	  bl        0x53BC4
	  li        r3, 0x9
	  li        r4, 0x2
	  bl        0x5376C
	  li        r3, 0xD
	  li        r4, 0x2
	  bl        0x53760
	  li        r3, 0
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x1
	  li        r7, 0
	  bl        0x53BCC
	  li        r3, 0
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x1
	  li        r7, 0
	  bl        0x53BB4
	  li        r3, 0x1
	  li        r4, 0x9
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x53B9C
	  li        r3, 0x1
	  li        r4, 0xD
	  li        r5, 0x1
	  li        r6, 0x4
	  li        r7, 0
	  bl        0x53B84
	  li        r3, 0
	  bl        0x58A8C
	  li        r3, 0x4
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x562F4
	  li        r3, 0x5
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0x1
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x2
	  bl        0x562D4
	  li        r3, 0
	  bl        0x56290
	  rlwinm    r0,r31,0,24,31
	  lwz       r3, 0x0(r29)
	  mulli     r0, r0, 0xC
	  lwzx      r31, r3, r0
	  b         .loc_0x1DC

	.loc_0x1A4:
	  lwz       r5, 0x0(r31)
	  lwz       r0, 0xF4(r5)
	  rlwinm.   r0,r0,0,29,29
	  bne-      .loc_0x1D8
	  lbz       r0, 0x113(r5)
	  lwz       r4, 0x1C(r29)
	  rlwinm    r0,r0,2,0,29
	  lwz       r3, 0x20(r29)
	  lwzx      r0, r4, r0
	  stw       r0, 0x8(r3)
	  lwz       r3, 0xE8(r5)
	  lwz       r4, 0x20(r29)
	  bl        0x64DC

	.loc_0x1D8:
	  lwz       r31, 0xC(r31)

	.loc_0x1DC:
	  cmplwi    r31, 0
	  bne+      .loc_0x1A4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void JPAEmitterManager::draw(float (*)[4], unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void JPAEmitterManager::draw(const JPADrawInfo*)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void JPAEmitterManager::draw(float (*)[4])
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80090C48
 * Size:	000058
 */
void JPAEmitterManager::forceDeleteAllEmitter()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  b         .loc_0x30

	.loc_0x20:
	  mr        r3, r30
	  mr        r4, r31
	  bl        .loc_0x58
	  addi      r31, r31, 0x1

	.loc_0x30:
	  lbz       r0, 0x2C(r30)
	  rlwinm    r3,r31,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x58:
	*/
}

/*
 * --INFO--
 * Address:	80090CA0
 * Size:	000060
 */
void JPAEmitterManager::forceDeleteGroupEmitter(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r4,0,24,31
	  stw       r31, 0xC(r1)
	  mulli     r31, r0, 0xC
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  b         .loc_0x34

	.loc_0x24:
	  lwz       r4, 0x4(r3)
	  mr        r3, r30
	  lwz       r4, 0x0(r4)
	  bl        .loc_0x60

	.loc_0x34:
	  lwz       r0, 0x0(r30)
	  add       r3, r31, r0
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  bne+      .loc_0x24
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	80090D00
 * Size:	00006C
 */
void JPAEmitterManager::forceDeleteEmitter(JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0xAC8
	  lwz       r0, 0xF4(r31)
	  addi      r4, r31, 0x58
	  ori       r0, r0, 0x300
	  stw       r0, 0xF4(r31)
	  lbz       r0, 0x112(r31)
	  lwz       r3, 0x0(r30)
	  mulli     r0, r0, 0xC
	  add       r3, r3, r0
	  bl        -0x6A120
	  addi      r3, r30, 0x4
	  addi      r4, r31, 0x58
	  bl        -0x6A3B4
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
 * Address:	80090D6C
 * Size:	000010
 */
void JPAEmitterManager::entryResourceManager(JPAResourceManager*, unsigned char)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x1C(r3)
	  rlwinm    r0,r5,2,22,29
	  stwx      r4, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80090D7C
 * Size:	0000C8
 */
void JPAEmitterManager::clearResourceManager(unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r27, r4
	  mr        r26, r3
	  rlwinm    r31,r4,0,24,31
	  li        r28, 0
	  b         .loc_0x94

	.loc_0x24:
	  rlwinm    r0,r28,0,24,31
	  lwz       r3, 0x0(r26)
	  mulli     r0, r0, 0xC
	  lwzx      r3, r3, r0
	  b         .loc_0x88

	.loc_0x38:
	  lwz       r29, 0x0(r3)
	  lwz       r30, 0xC(r3)
	  lbz       r0, 0x113(r29)
	  cmplw     r31, r0
	  bne-      .loc_0x84
	  mr        r3, r29
	  bl        -0xB74
	  lwz       r0, 0xF4(r29)
	  addi      r4, r29, 0x58
	  ori       r0, r0, 0x300
	  stw       r0, 0xF4(r29)
	  lbz       r0, 0x112(r29)
	  lwz       r3, 0x0(r26)
	  mulli     r0, r0, 0xC
	  add       r3, r3, r0
	  bl        -0x6A1CC
	  addi      r3, r26, 0x4
	  addi      r4, r29, 0x58
	  bl        -0x6A460

	.loc_0x84:
	  mr        r3, r30

	.loc_0x88:
	  cmplwi    r3, 0
	  bne+      .loc_0x38
	  addi      r28, r28, 0x1

	.loc_0x94:
	  lbz       r0, 0x2C(r26)
	  rlwinm    r3,r28,0,24,31
	  cmplw     r3, r0
	  blt+      .loc_0x24
	  lwz       r3, 0x1C(r26)
	  rlwinm    r0,r27,2,22,29
	  li        r4, 0
	  stwx      r4, r3, r0
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80090E44
 * Size:	0000E8
 */
void JPAEmitterManager::calcYBBCam()
{
	/*
	.loc_0x0:
	  lwz       r5, 0x20(r3)
	  lis       r4, 0x8051
	  lfs       f3, -0x77A8(r2)
	  lfs       f4, 0x198(r5)
	  lfs       f5, 0x1A8(r5)
	  fmadds    f2, f4, f4, f3
	  lfs       f1, -0x77A4(r2)
	  lfs       f0, 0x48DC(r4)
	  fmadds    f6, f5, f5, f2
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f6, f0
	  cror      2, 0, 0x2
	  beq-      .loc_0x6C
	  fcmpo     cr0, f6, f3
	  cror      2, 0, 0x2
	  bne-      .loc_0x44
	  b         .loc_0x64

	.loc_0x44:
	  fsqrte    f3, f6
	  lfs       f2, -0x77A0(r2)
	  lfs       f0, -0x779C(r2)
	  frsp      f3, f3
	  fmuls     f1, f3, f3
	  fmuls     f2, f2, f3
	  fnmsubs   f0, f6, f1, f0
	  fmuls     f6, f2, f0

	.loc_0x64:
	  fmuls     f4, f4, f6
	  fmuls     f5, f5, f6

	.loc_0x6C:
	  lfs       f1, -0x7798(r2)
	  fneg      f0, f5
	  lwz       r4, 0x20(r3)
	  lfs       f2, -0x77A8(r2)
	  stfs      f1, 0x154(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f2, 0x158(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f2, 0x15C(r4)
	  lwz       r4, 0x20(r3)
	  lfs       f1, 0x190(r4)
	  stfs      f1, 0x160(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f2, 0x164(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f4, 0x168(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f0, 0x16C(r4)
	  lwz       r4, 0x20(r3)
	  lfs       f0, 0x1A0(r4)
	  stfs      f0, 0x170(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f2, 0x174(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f5, 0x178(r4)
	  lwz       r4, 0x20(r3)
	  stfs      f4, 0x17C(r4)
	  lwz       r3, 0x20(r3)
	  lfs       f0, 0x1B0(r3)
	  stfs      f0, 0x180(r3)
	  blr
	*/
}
