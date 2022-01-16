#include "Game/MoveInfo.h"
#include "Sys/OBB.h"
#include "Sys/OBBTree.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_805203E0
    lbl_805203E0:
        .float 1.0
        .4byte 0x00000000
*/

namespace Sys {

/*
 * --INFO--
 * Address:	8041FFA8
 * Size:	0001C0
 */
void OBBTree::traceMove_new(Matrixf& p1, Matrixf& p2, Game::MoveInfo& moveInfo, float p4)
{
	/*
	stwu     r1, -0x130(r1)
	mflr     r0
	stw      r0, 0x134(r1)
	stfd     f31, 0x120(r1)
	psq_st   f31, 296(r1), 0, qr0
	stmw     r27, 0x10c(r1)
	li       r7, 0
	lbz      r0, mTraceMoveOptLevel__Q24Game6MapMgr@sda21(r13)
	stw      r7, 0x10(r1)
	mr       r30, r6
	cmplwi   r0, 2
	mr       r27, r3
	lwz      r31, 0(r6)
	mr       r28, r4
	mr       r29, r5
	lfs      f31, 0xc(r31)
	blt      lbl_80420060
	lfs      f5, 0x120(r27)
	addi     r3, r1, 0x58
	addi     r4, r1, 0x48
	stfs     f5, 0x58(r1)
	lfs      f4, 0x124(r27)
	stfs     f4, 0x5c(r1)
	lfs      f3, 0x128(r27)
	stfs     f3, 0x60(r1)
	lfs      f0, 0x12c(r27)
	stfs     f0, 0x64(r1)
	lfs      f0, 0(r31)
	stfs     f0, 0x48(r1)
	lfs      f0, 4(r31)
	stfs     f0, 0x4c(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0x50(r1)
	stfs     f31, 0x54(r1)
	lfs      f2, 0x2c(r28)
	lfs      f1, 0x1c(r28)
	lfs      f0, 0xc(r28)
	fadds    f2, f3, f2
	fadds    f1, f4, f1
	fadds    f0, f5, f0
	stfs     f2, 0x60(r1)
	stfs     f0, 0x58(r1)
	stfs     f1, 0x5c(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_8042014C

lbl_80420060:
	mr       r3, r29
	mr       r4, r31
	addi     r5, r1, 0x2c
	bl       PSMTXMultVec
	lfs      f1, 0x30(r1)
	lfs      f2, 0x34(r1)
	lfs      f0, 0x2c(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	lfs      f0, 0(r31)
	lbz      r0, mTraceMoveOptLevel__Q24Game6MapMgr@sda21(r13)
	stfs     f0, 0x38(r1)
	cmplwi   r0, 2
	lfs      f0, 4(r31)
	stfs     f0, 0x3c(r1)
	lfs      f0, 8(r31)
	stfs     f0, 0x40(r1)
	stfs     f31, 0x44(r1)
	bge      lbl_804200F0
	addi     r3, r27, 0x120
	addi     r4, r1, 0x38
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	bne      lbl_804200F0
	mr       r3, r28
	mr       r4, r31
	addi     r5, r1, 0x20
	bl       PSMTXMultVec
	lfs      f1, 0x24(r1)
	lfs      f2, 0x28(r1)
	lfs      f0, 0x20(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)
	b        lbl_8042014C

lbl_804200F0:
	addi     r3, r1, 0x68
	addi     r0, r1, 0xa8
	stw      r3, 8(r1)
	mr       r4, r30
	mr       r7, r28
	mr       r8, r29
	stw      r0, 0xc(r1)
	addi     r3, r27, 0x20
	addi     r9, r1, 0x10
	addi     r10, r1, 0x88
	lwz      r5, 0x18(r27)
	lwz      r6, 0x1c(r27)
	bl
"traceMove_new__Q23Sys3OBBFRQ24Game8MoveInfoRQ23Sys11VertexTableRQ23Sys13TriangleTableR7MatrixfR7MatrixfRiPPQ23Sys8TrianglePfP10Vector3<f>"
	mr       r3, r28
	mr       r4, r31
	addi     r5, r1, 0x14
	bl       PSMTXMultVec
	lfs      f1, 0x18(r1)
	lfs      f2, 0x1c(r1)
	lfs      f0, 0x14(r1)
	stfs     f0, 0(r31)
	stfs     f1, 4(r31)
	stfs     f2, 8(r31)

lbl_8042014C:
	psq_l    f31, 296(r1), 0, qr0
	lfd      f31, 0x120(r1)
	lmw      r27, 0x10c(r1)
	lwz      r0, 0x134(r1)
	mtlr     r0
	addi     r1, r1, 0x130
	blr
	*/
}

/*
 * --INFO--
 * Address:	80420168
 * Size:	0002FC
 */
// void
// traceMoveTriList_new__Q23Sys3OBBFRQ24Game8MoveInfoRQ23Sys11VertexTableRQ23Sys13TriangleTableR7MatrixfR7MatrixfRiPPQ23Sys8TrianglePfP10Vector3<
//     float>(void)
void OBB::traceMoveTriList_new(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable, Matrixf& p4,
                               Matrixf& p5, int& p6, Sys::Triangle** p7, float* p8, Vector3f* p9)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xC0(r1)
	  mflr      r0
	  stw       r0, 0xC4(r1)
	  stfd      f31, 0xB0(r1)
	  psq_st    f31,0xB8(r1),0,0
	  stfd      f30, 0xA0(r1)
	  psq_st    f30,0xA8(r1),0,0
	  stfd      f29, 0x90(r1)
	  psq_st    f29,0x98(r1),0,0
	  stmw      r19, 0x5C(r1)
	  mr        r20, r4
	  mr        r19, r3
	  lwz       r27, 0x0(r4)
	  mr        r21, r5
	  lwz       r26, 0x4(r4)
	  mr        r22, r6
	  mr        r23, r7
	  mr        r24, r8
	  addi      r29, r1, 0x44
	  addi      r28, r1, 0x34
	  li        r25, 0
	  li        r30, 0
	  b         .loc_0x2C4

	.loc_0x5C:
	  lwz       r3, 0xFC(r19)
	  li        r0, 0
	  lwz       r4, 0x24(r22)
	  lwzx      r3, r3, r30
	  stb       r0, 0x30(r1)
	  mulli     r0, r3, 0x60
	  lfs       f2, 0x0(r27)
	  add       r31, r4, r0
	  stfs      f2, 0x14(r1)
	  lfs       f1, 0x4(r27)
	  stfs      f1, 0x18(r1)
	  lfs       f0, 0x8(r27)
	  stfs      f0, 0x1C(r1)
	  stfs      f2, 0x20(r1)
	  stfs      f1, 0x24(r1)
	  stfs      f0, 0x28(r1)
	  lfs       f0, 0xC(r27)
	  stfs      f0, 0x2C(r1)
	  lbz       r0, 0x19(r20)
	  cmplwi    r0, 0
	  beq-      .loc_0xB8
	  li        r0, 0x1
	  stb       r0, 0x30(r1)

	.loc_0xB8:
	  mr        r3, r31
	  mr        r4, r21
	  addi      r5, r1, 0x14
	  bl        -0x3860
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2BC
	  mr        r3, r23
	  mr        r4, r29
	  addi      r5, r1, 0x8
	  bl        -0x33566C
	  lfs       f2, 0x8(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x10(r1)
	  stfs      f2, 0x44(r1)
	  lfs       f6, 0x38(r1)
	  stfs      f1, 0x48(r1)
	  lfs       f29, 0x34(r1)
	  stfs      f0, 0x4C(r1)
	  lfs       f7, 0x3C(r1)
	  lfs       f2, 0x10(r24)
	  lfs       f1, 0x14(r24)
	  lfs       f0, 0x18(r24)
	  fmuls     f4, f6, f2
	  lfs       f5, 0x0(r24)
	  fmuls     f2, f6, f1
	  lfs       f3, 0x4(r24)
	  fmuls     f0, f6, f0
	  lfs       f1, 0x8(r24)
	  fmadds    f4, f29, f5, f4
	  lfs       f5, 0x20(r24)
	  fmadds    f2, f29, f3, f2
	  lfs       f3, 0x24(r24)
	  fmadds    f0, f29, f1, f0
	  lfs       f1, 0x28(r24)
	  fmadds    f4, f7, f5, f4
	  lfs       f31, 0x38(r1)
	  fmadds    f2, f7, f3, f2
	  lfs       f30, 0x3C(r1)
	  fmadds    f0, f7, f1, f0
	  stfs      f4, 0x34(r1)
	  stfs      f2, 0x38(r1)
	  stfs      f0, 0x3C(r1)
	  lwz       r3, 0x10(r20)
	  cmplwi    r3, 0
	  beq-      .loc_0x184
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r28
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x184:
	  lwz       r3, 0x94(r20)
	  lwz       r4, 0xFC(r19)
	  cmplwi    r3, 0
	  lwzx      r7, r4, r30
	  beq-      .loc_0x1A8
	  mr        r4, r23
	  mr        r5, r31
	  mr        r6, r21
	  bl        -0x2BDF2C

	.loc_0x1A8:
	  lfs       f1, 0x38(r1)
	  lfs       f0, 0x30(r20)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x1DC
	  stw       r31, 0x44(r20)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x50(r20)
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x54(r20)
	  lfs       f0, 0x3C(r1)
	  stfs      f0, 0x58(r20)
	  b         .loc_0x230

	.loc_0x1DC:
	  fabs      f1, f1
	  lfs       f0, 0x2C(r20)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x214
	  stw       r31, 0x48(r20)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x5C(r20)
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x60(r20)
	  lfs       f0, 0x3C(r1)
	  stfs      f0, 0x64(r20)
	  b         .loc_0x230

	.loc_0x214:
	  stw       r31, 0x4C(r20)
	  lfs       f0, 0x34(r1)
	  stfs      f0, 0x68(r20)
	  lfs       f0, 0x38(r1)
	  stfs      f0, 0x6C(r20)
	  lfs       f0, 0x3C(r1)
	  stfs      f0, 0x70(r20)

	.loc_0x230:
	  lfs       f4, 0x38(r1)
	  lfs       f7, 0x4(r26)
	  lfs       f5, 0x34(r1)
	  fmuls     f0, f4, f7
	  lfs       f8, 0x0(r26)
	  lfs       f3, 0x3C(r1)
	  lfs       f6, 0x8(r26)
	  fmadds    f2, f5, f8, f0
	  lfs       f1, 0x2080(r2)
	  lfs       f0, 0x8(r20)
	  fmadds    f2, f3, f6, f2
	  fadds     f0, f1, f0
	  fmuls     f2, f0, f2
	  fmuls     f1, f5, f2
	  fmuls     f0, f4, f2
	  fmuls     f3, f3, f2
	  fsubs     f2, f8, f1
	  fsubs     f1, f7, f0
	  fsubs     f0, f6, f3
	  stfs      f2, 0x0(r26)
	  stfs      f1, 0x4(r26)
	  stfs      f0, 0x8(r26)
	  lfs       f4, 0x40(r1)
	  lfs       f1, 0x0(r27)
	  fmuls     f0, f29, f4
	  lfs       f3, 0x4(r27)
	  fmuls     f2, f31, f4
	  lfs       f5, 0x8(r27)
	  fmuls     f4, f30, f4
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f2, f5, f4
	  stfs      f0, 0x0(r27)
	  stfs      f1, 0x4(r27)
	  stfs      f2, 0x8(r27)

	.loc_0x2BC:
	  addi      r30, r30, 0x4
	  addi      r25, r25, 0x1

	.loc_0x2C4:
	  lwz       r0, 0xF4(r19)
	  cmpw      r25, r0
	  blt+      .loc_0x5C
	  psq_l     f31,0xB8(r1),0,0
	  lfd       f31, 0xB0(r1)
	  psq_l     f30,0xA8(r1),0,0
	  lfd       f30, 0xA0(r1)
	  psq_l     f29,0x98(r1),0,0
	  lfd       f29, 0x90(r1)
	  lmw       r19, 0x5C(r1)
	  lwz       r0, 0xC4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xC0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80420464
 * Size:	0007F0
 */
void OBB::traceMove_new(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable, Matrixf& p4,
                        Matrixf& p5, int& p6, Sys::Triangle** p7, float* p8, Vector3f* p9)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r20, 0x10(r1)
	  mr        r20, r3
	  lwz       r23, 0x48(r1)
	  mr        r31, r4
	  lwz       r26, 0x4C(r1)
	  mr        r25, r5
	  mr        r24, r6
	  mr        r30, r7
	  mr        r29, r8
	  mr        r28, r9
	  mr        r27, r10
	  lwz       r22, 0xC0(r3)
	  li        r3, 0
	  lwz       r21, 0x0(r4)
	  cmplwi    r22, 0
	  bne-      .loc_0x5C
	  lwz       r0, 0xC4(r20)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  li        r3, 0x1

	.loc_0x5C:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  stw       r23, 0x8(r1)
	  mr        r3, r20
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x388
	  b         .loc_0x7DC

	.loc_0x94:
	  lfs       f1, 0x4(r21)
	  lfs       f0, 0xCC(r20)
	  lfs       f2, 0x0(r21)
	  fmuls     f0, f1, f0
	  lfs       f1, 0xC8(r20)
	  lfs       f4, 0x8(r21)
	  lfs       f3, 0xD0(r20)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, 0xD4(r20)
	  lfs       f2, 0xC(r21)
	  fmadds    f1, f4, f3, f1
	  fsubs     f1, f1, f0
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x2A4
	  cmplwi    r22, 0
	  beq-      .loc_0x274
	  mr        r3, r22
	  bl        -0x1EB0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x114
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x408
	  b         .loc_0x7DC

	.loc_0x114:
	  mr        r4, r21
	  addi      r3, r22, 0xC8
	  bl        -0x1F24
	  lfs       f0, 0xC(r21)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x194
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x164
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x164:
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x488
	  b         .loc_0x7DC

	.loc_0x194:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x208
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x1D8
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x1D8:
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x4FC
	  b         .loc_0x7DC

	.loc_0x208:
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x23C
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0

	.loc_0x23C:
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x7DC
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x274:
	  stw       r23, 0x8(r1)
	  mr        r3, r20
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x598
	  b         .loc_0x7DC

	.loc_0x2A4:
	  fneg      f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x48C
	  lwz       r22, 0xC4(r20)
	  cmplwi    r22, 0
	  beq-      .loc_0x45C
	  mr        r3, r22
	  bl        -0x2098
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2FC
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x5F0
	  b         .loc_0x7DC

	.loc_0x2FC:
	  mr        r4, r21
	  addi      r3, r22, 0xC8
	  bl        -0x210C
	  lfs       f0, 0xC(r21)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x37C
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x34C
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x34C:
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x670
	  b         .loc_0x7DC

	.loc_0x37C:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3F0
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x3C0
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x3C0:
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x6E4
	  b         .loc_0x7DC

	.loc_0x3F0:
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x424
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0

	.loc_0x424:
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x7DC
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x45C:
	  stw       r23, 0x8(r1)
	  mr        r3, r20
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x780
	  b         .loc_0x7DC

	.loc_0x48C:
	  cmplwi    r22, 0
	  beq-      .loc_0x630
	  mr        r3, r22
	  bl        -0x2270
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x4D4
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x7C8
	  b         .loc_0x630

	.loc_0x4D4:
	  mr        r4, r21
	  addi      r3, r22, 0xC8
	  bl        -0x22E4
	  lfs       f0, 0xC(r21)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x554
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x524
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x630

	.loc_0x524:
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x848
	  b         .loc_0x630

	.loc_0x554:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x5C8
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x598
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x630

	.loc_0x598:
	  stw       r23, 0x8(r1)
	  mr        r3, r22
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x8BC
	  b         .loc_0x630

	.loc_0x5C8:
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x5FC
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0

	.loc_0x5FC:
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x630
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0

	.loc_0x630:
	  lwz       r21, 0xC4(r20)
	  cmplwi    r21, 0
	  beq-      .loc_0x7DC
	  lwz       r20, 0x0(r31)
	  mr        r3, r21
	  bl        -0x241C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x680
	  stw       r23, 0x8(r1)
	  mr        r3, r21
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x974
	  b         .loc_0x7DC

	.loc_0x680:
	  mr        r4, r20
	  addi      r3, r21, 0xC8
	  bl        -0x2490
	  lfs       f0, 0xC(r20)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x700
	  lwz       r3, 0xC0(r21)
	  cmplwi    r3, 0
	  beq-      .loc_0x6D0
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x6D0:
	  stw       r23, 0x8(r1)
	  mr        r3, r21
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0x9F4
	  b         .loc_0x7DC

	.loc_0x700:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x774
	  lwz       r3, 0xC4(r21)
	  cmplwi    r3, 0
	  beq-      .loc_0x744
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0
	  b         .loc_0x7DC

	.loc_0x744:
	  stw       r23, 0x8(r1)
	  mr        r3, r21
	  mr        r4, r31
	  mr        r5, r25
	  stw       r26, 0xC(r1)
	  mr        r6, r24
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        -0xA68
	  b         .loc_0x7DC

	.loc_0x774:
	  lwz       r3, 0xC0(r21)
	  cmplwi    r3, 0
	  beq-      .loc_0x7A8
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0

	.loc_0x7A8:
	  lwz       r3, 0xC4(r21)
	  cmplwi    r3, 0
	  beq-      .loc_0x7DC
	  stw       r23, 0x8(r1)
	  mr        r4, r31
	  mr        r5, r25
	  mr        r6, r24
	  stw       r26, 0xC(r1)
	  mr        r7, r30
	  mr        r8, r29
	  mr        r9, r28
	  mr        r10, r27
	  bl        .loc_0x0

	.loc_0x7DC:
	  lmw       r20, 0x10(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80420C54
 * Size:	000098
 */
void OBBTree::traceMove_new_global(Game::MoveInfo&, float)
{
	/*
	stwu     r1, -0xd0(r1)
	mflr     r0
	stw      r0, 0xd4(r1)
	li       r0, 0
	stw      r31, 0xcc(r1)
	mr       r31, r4
	addi     r4, r1, 0xc
	stw      r30, 0xc8(r1)
	mr       r30, r3
	addi     r3, r30, 0x120
	stw      r0, 8(r1)
	lwz      r5, 0(r31)
	lfs      f1, 0xc(r5)
	lfs      f0, 0(r5)
	stfs     f0, 0xc(r1)
	lfs      f0, 4(r5)
	stfs     f0, 0x10(r1)
	lfs      f0, 8(r5)
	stfs     f0, 0x14(r1)
	stfs     f1, 0x18(r1)
	bl       intersect__Q23Sys6SphereFRQ23Sys6Sphere
	clrlwi.  r0, r3, 0x18
	beq      lbl_80420CD4
	lwz      r5, 0x18(r30)
	mr       r4, r31
	lwz      r6, 0x1c(r30)
	addi     r3, r30, 0x20
	addi     r7, r1, 8
	addi     r8, r1, 0x3c
	addi     r9, r1, 0x1c
	addi     r10, r1, 0x5c
	bl
"traceMove_new_global__Q23Sys3OBBFRQ24Game8MoveInfoRQ23Sys11VertexTableRQ23Sys13TriangleTableRiPPQ23Sys8TrianglePfP10Vector3<f>"

lbl_80420CD4:
	lwz      r0, 0xd4(r1)
	lwz      r31, 0xcc(r1)
	lwz      r30, 0xc8(r1)
	mtlr     r0
	addi     r1, r1, 0xd0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80420CEC
 * Size:	00024C
 */
void OBB::traceMoveTriList_new_global(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable, int& p4,
                                      Sys::Triangle** p5, float* p6, Vector3f* p7)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xB0(r1)
	  mflr      r0
	  stw       r0, 0xB4(r1)
	  stfd      f31, 0xA0(r1)
	  psq_st    f31,0xA8(r1),0,0
	  stfd      f30, 0x90(r1)
	  psq_st    f30,0x98(r1),0,0
	  stfd      f29, 0x80(r1)
	  psq_st    f29,0x88(r1),0,0
	  stmw      r21, 0x54(r1)
	  mr        r23, r4
	  mr        r22, r3
	  lwz       r28, 0x0(r4)
	  mr        r24, r5
	  lwz       r27, 0x4(r4)
	  mr        r25, r6
	  addi      r30, r1, 0x28
	  addi      r29, r1, 0x38
	  li        r26, 0
	  li        r31, 0
	  b         .loc_0x214

	.loc_0x54:
	  lwz       r3, 0xFC(r22)
	  li        r0, 0
	  lwz       r4, 0x24(r25)
	  lwzx      r3, r3, r31
	  stb       r0, 0x24(r1)
	  mulli     r0, r3, 0x60
	  lfs       f2, 0x0(r28)
	  add       r21, r4, r0
	  stfs      f2, 0x8(r1)
	  lfs       f1, 0x4(r28)
	  stfs      f1, 0xC(r1)
	  lfs       f0, 0x8(r28)
	  stfs      f0, 0x10(r1)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  lfs       f0, 0xC(r28)
	  stfs      f0, 0x20(r1)
	  lbz       r0, 0x19(r23)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  li        r0, 0x1
	  stb       r0, 0x24(r1)

	.loc_0xB0:
	  mr        r3, r21
	  mr        r4, r24
	  addi      r5, r1, 0x8
	  bl        -0x43DC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x20C
	  lwz       r3, 0x10(r23)
	  lfs       f31, 0x28(r1)
	  cmplwi    r3, 0
	  lfs       f30, 0x2C(r1)
	  lfs       f29, 0x30(r1)
	  beq-      .loc_0xF8
	  lwz       r12, 0x0(r3)
	  mr        r4, r29
	  mr        r5, r30
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF8:
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x30(r23)
	  fcmpo     cr0, f1, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x12C
	  stw       r21, 0x44(r23)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x50(r23)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x54(r23)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x58(r23)
	  b         .loc_0x180

	.loc_0x12C:
	  fabs      f1, f1
	  lfs       f0, 0x2C(r23)
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x164
	  stw       r21, 0x48(r23)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x5C(r23)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x60(r23)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x64(r23)
	  b         .loc_0x180

	.loc_0x164:
	  stw       r21, 0x4C(r23)
	  lfs       f0, 0x28(r1)
	  stfs      f0, 0x68(r23)
	  lfs       f0, 0x2C(r1)
	  stfs      f0, 0x6C(r23)
	  lfs       f0, 0x30(r1)
	  stfs      f0, 0x70(r23)

	.loc_0x180:
	  lfs       f4, 0x2C(r1)
	  lfs       f7, 0x4(r27)
	  lfs       f5, 0x28(r1)
	  fmuls     f0, f4, f7
	  lfs       f8, 0x0(r27)
	  lfs       f3, 0x30(r1)
	  lfs       f6, 0x8(r27)
	  fmadds    f2, f5, f8, f0
	  lfs       f1, 0x2080(r2)
	  lfs       f0, 0x8(r23)
	  fmadds    f2, f3, f6, f2
	  fadds     f0, f1, f0
	  fmuls     f2, f0, f2
	  fmuls     f1, f5, f2
	  fmuls     f0, f4, f2
	  fmuls     f3, f3, f2
	  fsubs     f2, f8, f1
	  fsubs     f1, f7, f0
	  fsubs     f0, f6, f3
	  stfs      f2, 0x0(r27)
	  stfs      f1, 0x4(r27)
	  stfs      f0, 0x8(r27)
	  lfs       f4, 0x34(r1)
	  lfs       f1, 0x0(r28)
	  fmuls     f0, f31, f4
	  lfs       f3, 0x4(r28)
	  fmuls     f2, f30, f4
	  lfs       f5, 0x8(r28)
	  fmuls     f4, f29, f4
	  fadds     f0, f1, f0
	  fadds     f1, f3, f2
	  fadds     f2, f5, f4
	  stfs      f0, 0x0(r28)
	  stfs      f1, 0x4(r28)
	  stfs      f2, 0x8(r28)

	.loc_0x20C:
	  addi      r31, r31, 0x4
	  addi      r26, r26, 0x1

	.loc_0x214:
	  lwz       r0, 0xF4(r22)
	  cmpw      r26, r0
	  blt+      .loc_0x54
	  psq_l     f31,0xA8(r1),0,0
	  lfd       f31, 0xA0(r1)
	  psq_l     f30,0x98(r1),0,0
	  lfd       f30, 0x90(r1)
	  psq_l     f29,0x88(r1),0,0
	  lfd       f29, 0x80(r1)
	  lmw       r21, 0x54(r1)
	  lwz       r0, 0xB4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xB0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80420F38
 * Size:	0006F0
 */
void OBB::traceMove_new_global(Game::MoveInfo& moveInfo, Sys::VertexTable& vertexTable, Sys::TriangleTable& triangleTable, int& p4,
                               Sys::Triangle** p5, float* p6, Vector3f* p7)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r22, 0x8(r1)
	  mr        r23, r3
	  mr        r30, r4
	  mr        r31, r5
	  mr        r29, r6
	  mr        r28, r7
	  mr        r27, r8
	  mr        r26, r9
	  mr        r25, r10
	  lwz       r24, 0xC0(r3)
	  li        r3, 0
	  lwz       r22, 0x0(r4)
	  cmplwi    r24, 0
	  bne-      .loc_0x54
	  lwz       r0, 0xC4(r23)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  li        r3, 0x1

	.loc_0x54:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  mr        r3, r23
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x2C8
	  b         .loc_0x6DC

	.loc_0x84:
	  lfs       f1, 0x4(r22)
	  lfs       f0, 0xCC(r23)
	  lfs       f2, 0x0(r22)
	  fmuls     f0, f1, f0
	  lfs       f1, 0xC8(r23)
	  lfs       f4, 0x8(r22)
	  lfs       f3, 0xD0(r23)
	  fmadds    f1, f2, f1, f0
	  lfs       f0, 0xD4(r23)
	  lfs       f2, 0xC(r22)
	  fmadds    f1, f4, f3, f1
	  fsubs     f1, f1, f0
	  fcmpo     cr0, f1, f2
	  ble-      .loc_0x254
	  cmplwi    r24, 0
	  beq-      .loc_0x22C
	  mr        r3, r24
	  bl        -0x2974
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x340
	  b         .loc_0x6DC

	.loc_0xFC:
	  mr        r4, r22
	  addi      r3, r24, 0xC8
	  bl        -0x29E0
	  lfs       f0, 0xC(r22)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x16C
	  lwz       r3, 0xC0(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x144
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x144:
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x3B0
	  b         .loc_0x6DC

	.loc_0x16C:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x1D0
	  lwz       r3, 0xC4(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x1A8
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x1A8:
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x414
	  b         .loc_0x6DC

	.loc_0x1D0:
	  lwz       r3, 0xC0(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x1FC
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0

	.loc_0x1FC:
	  lwz       r3, 0xC4(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x6DC
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x22C:
	  mr        r3, r23
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x498
	  b         .loc_0x6DC

	.loc_0x254:
	  fneg      f0, f2
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x3FC
	  lwz       r24, 0xC4(r23)
	  cmplwi    r24, 0
	  beq-      .loc_0x3D4
	  mr        r3, r24
	  bl        -0x2B1C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x2A4
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x4E8
	  b         .loc_0x6DC

	.loc_0x2A4:
	  mr        r4, r22
	  addi      r3, r24, 0xC8
	  bl        -0x2B88
	  lfs       f0, 0xC(r22)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x314
	  lwz       r3, 0xC0(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x2EC
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x2EC:
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x558
	  b         .loc_0x6DC

	.loc_0x314:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x378
	  lwz       r3, 0xC4(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x350
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x350:
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x5BC
	  b         .loc_0x6DC

	.loc_0x378:
	  lwz       r3, 0xC0(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x3A4
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0

	.loc_0x3A4:
	  lwz       r3, 0xC4(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x6DC
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x3D4:
	  mr        r3, r23
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x640
	  b         .loc_0x6DC

	.loc_0x3FC:
	  cmplwi    r24, 0
	  beq-      .loc_0x568
	  mr        r3, r24
	  bl        -0x2CB4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x43C
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x680
	  b         .loc_0x568

	.loc_0x43C:
	  mr        r4, r22
	  addi      r3, r24, 0xC8
	  bl        -0x2D20
	  lfs       f0, 0xC(r22)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x4AC
	  lwz       r3, 0xC0(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x484
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x568

	.loc_0x484:
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x6F0
	  b         .loc_0x568

	.loc_0x4AC:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x510
	  lwz       r3, 0xC4(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x4E8
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x568

	.loc_0x4E8:
	  mr        r3, r24
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x754
	  b         .loc_0x568

	.loc_0x510:
	  lwz       r3, 0xC0(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x53C
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0

	.loc_0x53C:
	  lwz       r3, 0xC4(r24)
	  cmplwi    r3, 0
	  beq-      .loc_0x568
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0

	.loc_0x568:
	  lwz       r22, 0xC4(r23)
	  cmplwi    r22, 0
	  beq-      .loc_0x6DC
	  lwz       r23, 0x0(r30)
	  mr        r3, r22
	  bl        -0x2E28
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x5B0
	  mr        r3, r22
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x7F4
	  b         .loc_0x6DC

	.loc_0x5B0:
	  mr        r4, r23
	  addi      r3, r22, 0xC8
	  bl        -0x2E94
	  lfs       f0, 0xC(r23)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x620
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x5F8
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x5F8:
	  mr        r3, r22
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x864
	  b         .loc_0x6DC

	.loc_0x620:
	  fneg      f0, f0
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x684
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x65C
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0
	  b         .loc_0x6DC

	.loc_0x65C:
	  mr        r3, r22
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        -0x8C8
	  b         .loc_0x6DC

	.loc_0x684:
	  lwz       r3, 0xC0(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x6B0
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0

	.loc_0x6B0:
	  lwz       r3, 0xC4(r22)
	  cmplwi    r3, 0
	  beq-      .loc_0x6DC
	  mr        r4, r30
	  mr        r5, r31
	  mr        r6, r29
	  mr        r7, r28
	  mr        r8, r27
	  mr        r9, r26
	  mr        r10, r25
	  bl        .loc_0x0

	.loc_0x6DC:
	  lmw       r22, 0x8(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}
} // namespace Sys
