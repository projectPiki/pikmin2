#include "types.h"

namespace efx {

/*
 * --INFO--
 * Address:	803C4E0C
 * Size:	0000B4
 */
void TPkOneEmitterSimple::create(efx::Arg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x8(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x28
	  li        r3, 0
	  b         .loc_0xA0

	.loc_0x28:
	  lis       r4, 0x8051
	  lwz       r3, -0x65E8(r13)
	  addi      r5, r4, 0x41E4
	  lhz       r4, 0xC(r31)
	  li        r6, 0
	  bl        -0x9594
	  stw       r3, 0x8(r31)
	  lwz       r4, 0x8(r31)
	  cmplwi    r4, 0
	  beq-      .loc_0x90
	  lwz       r3, 0xF4(r4)
	  cmplwi    r31, 0
	  li        r0, 0
	  mr        r5, r31
	  ori       r3, r3, 0x40
	  stw       r3, 0xF4(r4)
	  lwz       r4, 0x8(r31)
	  lwz       r3, 0xF4(r4)
	  ori       r3, r3, 0x1
	  stw       r3, 0xF4(r4)
	  lwz       r3, 0x8(r31)
	  stw       r0, 0x24(r3)
	  beq-      .loc_0x88
	  addi      r5, r31, 0x4

	.loc_0x88:
	  lwz       r3, 0x8(r31)
	  stw       r5, 0xEC(r3)

	.loc_0x90:
	  lwz       r3, 0x8(r31)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31

	.loc_0xA0:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C4EC0
 * Size:	0000D4
 */
void TPkOneEmitterSimple::executeAfter(JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stmw      r27, 0x2C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  lwz       r3, -0x65E8(r13)
	  bl        -0x9504
	  lwz       r31, 0x10(r27)
	  b         .loc_0xB8

	.loc_0x28:
	  lwz       r5, 0x0(r31)
	  mr        r4, r31
	  addi      r3, r27, 0x10
	  lfs       f0, 0x10(r5)
	  stfs      f0, 0x8(r1)
	  lfs       f0, 0x14(r5)
	  stfs      f0, 0xC(r1)
	  lfs       f0, 0x18(r5)
	  stfs      f0, 0x10(r1)
	  bl        -0x39E2E8
	  lwz       r3, -0x65E8(r13)
	  addi      r4, r1, 0x8
	  lhz       r5, 0xC(r27)
	  bl        -0x934C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB4
	  lfs       f0, 0x28(r28)
	  li        r29, 0
	  fctiwz    f0, f0
	  stfd      f0, 0x18(r1)
	  lwz       r30, 0x1C(r1)
	  b         .loc_0xAC

	.loc_0x80:
	  mr        r3, r28
	  bl        -0x334F04
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0xC(r1)
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x18(r3)
	  stfs      f1, 0x1C(r3)
	  stfs      f2, 0x20(r3)

	.loc_0xA8:
	  addi      r29, r29, 0x1

	.loc_0xAC:
	  cmpw      r29, r30
	  blt+      .loc_0x80

	.loc_0xB4:
	  lwz       r31, 0xC(r31)

	.loc_0xB8:
	  cmplwi    r31, 0
	  bne+      .loc_0x28
	  lmw       r27, 0x2C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void add__Q23efx19TPkOneEmitterSimpleFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	803C4F94
 * Size:	000024
 */
void TPkEffectMgr::globalInstance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x68
	  stw       r3, -0x65B0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C4FB8
 * Size:	000050
 */
void TPkEffectMgr::deleteInstance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x65AC(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x38
	  beq-      .loc_0x30
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl

	.loc_0x30:
	  li        r0, 0
	  stw       r0, -0x65AC(r13)

	.loc_0x38:
	  li        r0, 0
	  stw       r0, -0x65B0(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C5008
 * Size:	000048
 */
void TPkEffectMgr::Instance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x65AC(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  li        r3, 0x644
	  bl        -0x3A1180
	  mr.       r0, r3
	  beq-      .loc_0x30
	  bl        .loc_0x48
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, -0x65AC(r13)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x65AC(r13)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	803C5050
 * Size:	0013BC
 */
TPkEffectMgr::TPkEffectMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  bl        -0x3A80A4
	  lis       r3, 0x804E
	  lis       r4, 0x803C
	  addi      r0, r3, 0x7B08
	  li        r6, 0x1C
	  lis       r3, 0x803C
	  stw       r0, 0x0(r31)
	  addi      r5, r3, 0x640C
	  addi      r4, r4, 0x6464
	  addi      r3, r31, 0xC8
	  li        r7, 0x32
	  bl        -0x303860
	  li        r3, 0x2C
	  bl        -0x3A1200
	  mr.       r30, r3
	  beq-      .loc_0xD8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  addi      r29, r30, 0x8
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4C2AC
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x16A
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r30)
	  sth       r0, 0x28(r30)
	  stw       r3, 0x18(r30)
	  stw       r3, 0x14(r30)
	  stw       r3, 0x10(r30)
	  stw       r3, 0xC(r30)

	.loc_0xD8:
	  stw       r30, 0x18(r31)
	  li        r3, 0x2C
	  bl        -0x3A128C
	  mr.       r30, r3
	  beq-      .loc_0x168
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r29, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r28, r29, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r28
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4C21C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x16B
	  stw       r4, 0x0(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)
	  stw       r3, 0x8(r28)
	  stw       r3, 0x4(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x24(r29)
	  sth       r0, 0x28(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x14(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)

	.loc_0x168:
	  stw       r30, 0x1C(r31)
	  li        r3, 0x2C
	  bl        -0x3A131C
	  mr.       r30, r3
	  beq-      .loc_0x1F8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4C18C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x16D
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x1F8:
	  stw       r30, 0x20(r31)
	  li        r3, 0x2C
	  bl        -0x3A13AC
	  mr.       r30, r3
	  beq-      .loc_0x288
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4C0FC
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x169
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x288:
	  stw       r30, 0x24(r31)
	  li        r3, 0x2C
	  bl        -0x3A143C
	  mr.       r30, r3
	  beq-      .loc_0x318
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4C06C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x16C
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x318:
	  stw       r30, 0x28(r31)
	  li        r3, 0x2C
	  bl        -0x3A14CC
	  mr.       r30, r3
	  beq-      .loc_0x3A8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BFDC
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x281
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x3A8:
	  stw       r30, 0x2C(r31)
	  li        r3, 0x2C
	  bl        -0x3A155C
	  mr.       r30, r3
	  beq-      .loc_0x438
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BF4C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x15B
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x438:
	  stw       r30, 0x30(r31)
	  li        r3, 0x2C
	  bl        -0x3A15EC
	  mr.       r30, r3
	  beq-      .loc_0x4C8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BEBC
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x177
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x4C8:
	  stw       r30, 0x34(r31)
	  li        r3, 0x2C
	  bl        -0x3A167C
	  mr.       r30, r3
	  beq-      .loc_0x558
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BE2C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x178
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x558:
	  stw       r30, 0x58(r31)
	  li        r3, 0x2C
	  bl        -0x3A170C
	  mr.       r30, r3
	  beq-      .loc_0x5E8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BD9C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x170
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x5E8:
	  stw       r30, 0x38(r31)
	  li        r3, 0x2C
	  bl        -0x3A179C
	  mr.       r30, r3
	  beq-      .loc_0x678
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BD0C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x171
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x678:
	  stw       r30, 0x3C(r31)
	  li        r3, 0x2C
	  bl        -0x3A182C
	  mr.       r30, r3
	  beq-      .loc_0x708
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BC7C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x152
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x708:
	  stw       r30, 0x40(r31)
	  li        r3, 0x2C
	  bl        -0x3A18BC
	  mr.       r30, r3
	  beq-      .loc_0x798
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BBEC
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x17C
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x798:
	  stw       r30, 0x44(r31)
	  li        r3, 0x2C
	  bl        -0x3A194C
	  mr.       r30, r3
	  beq-      .loc_0x828
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BB5C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x17D
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x828:
	  stw       r30, 0x48(r31)
	  li        r3, 0x2C
	  bl        -0x3A19DC
	  mr.       r30, r3
	  beq-      .loc_0x8B8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BACC
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x161
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x8B8:
	  stw       r30, 0x4C(r31)
	  li        r3, 0x2C
	  bl        -0x3A1A6C
	  mr.       r30, r3
	  beq-      .loc_0x948
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4BA3C
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x162
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x948:
	  stw       r30, 0x50(r31)
	  li        r3, 0x2C
	  bl        -0x3A1AFC
	  mr.       r30, r3
	  beq-      .loc_0x9D8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r3, 0x804E
	  addi      r29, r28, 0x8
	  stw       r0, 0x4(r30)
	  addi      r4, r3, 0x6ACC
	  addi      r0, r4, 0x14
	  mr        r3, r29
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x4B9AC
	  lis       r4, 0x804B
	  li        r3, 0
	  addi      r4, r4, 0x81C
	  li        r0, 0x16E
	  stw       r4, 0x0(r29)
	  stw       r3, 0x10(r29)
	  stw       r3, 0xC(r29)
	  stw       r3, 0x8(r29)
	  stw       r3, 0x4(r29)
	  stw       r3, 0x18(r29)
	  stw       r3, 0x24(r28)
	  sth       r0, 0x28(r28)
	  stw       r3, 0x18(r28)
	  stw       r3, 0x14(r28)
	  stw       r3, 0x10(r28)
	  stw       r3, 0xC(r28)

	.loc_0x9D8:
	  stw       r30, 0x54(r31)
	  li        r3, 0x1C
	  bl        -0x3A1B8C
	  mr.       r30, r3
	  beq-      .loc_0xA34
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F1A0
	  li        r3, 0
	  li        r0, 0x154
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xA34:
	  stw       r30, 0x5C(r31)
	  li        r3, 0x1C
	  bl        -0x3A1BE8
	  mr.       r30, r3
	  beq-      .loc_0xA90
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F1FC
	  li        r3, 0
	  li        r0, 0x155
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xA90:
	  stw       r30, 0x60(r31)
	  li        r3, 0x1C
	  bl        -0x3A1C44
	  mr.       r30, r3
	  beq-      .loc_0xAEC
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F258
	  li        r3, 0
	  li        r0, 0x157
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xAEC:
	  stw       r30, 0x64(r31)
	  li        r3, 0x1C
	  bl        -0x3A1CA0
	  mr.       r30, r3
	  beq-      .loc_0xB48
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F2B4
	  li        r3, 0
	  li        r0, 0x153
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xB48:
	  stw       r30, 0x68(r31)
	  li        r3, 0x1C
	  bl        -0x3A1CFC
	  mr.       r30, r3
	  beq-      .loc_0xBA4
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F310
	  li        r3, 0
	  li        r0, 0x156
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xBA4:
	  stw       r30, 0x6C(r31)
	  li        r3, 0x1C
	  bl        -0x3A1D58
	  mr.       r30, r3
	  beq-      .loc_0xC00
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F36C
	  li        r3, 0
	  li        r0, 0x148
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xC00:
	  stw       r30, 0x70(r31)
	  li        r3, 0x1C
	  bl        -0x3A1DB4
	  mr.       r30, r3
	  beq-      .loc_0xC5C
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F3C8
	  li        r3, 0
	  li        r0, 0x149
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xC5C:
	  stw       r30, 0x74(r31)
	  li        r3, 0x1C
	  bl        -0x3A1E10
	  mr.       r30, r3
	  beq-      .loc_0xCB8
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F424
	  li        r3, 0
	  li        r0, 0x165
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xCB8:
	  stw       r30, 0x78(r31)
	  li        r3, 0x1C
	  bl        -0x3A1E6C
	  mr.       r30, r3
	  beq-      .loc_0xD14
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F480
	  li        r3, 0
	  li        r0, 0x166
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xD14:
	  stw       r30, 0x7C(r31)
	  li        r3, 0x1C
	  bl        -0x3A1EC8
	  mr.       r30, r3
	  beq-      .loc_0xD70
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F4DC
	  li        r3, 0
	  li        r0, 0x168
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xD70:
	  stw       r30, 0x84(r31)
	  li        r3, 0x1C
	  bl        -0x3A1F24
	  mr.       r30, r3
	  beq-      .loc_0xDCC
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F538
	  li        r3, 0
	  li        r0, 0x167
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xDCC:
	  stw       r30, 0x80(r31)
	  li        r3, 0x1C
	  bl        -0x3A1F80
	  mr.       r30, r3
	  beq-      .loc_0xE28
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F594
	  li        r3, 0
	  li        r0, 0x14E
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xE28:
	  stw       r30, 0x88(r31)
	  li        r3, 0x1C
	  bl        -0x3A1FDC
	  mr.       r30, r3
	  beq-      .loc_0xE84
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F5F0
	  li        r3, 0
	  li        r0, 0x14F
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xE84:
	  stw       r30, 0x8C(r31)
	  li        r3, 0x1C
	  bl        -0x3A2038
	  mr.       r30, r3
	  beq-      .loc_0xEE0
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F64C
	  li        r3, 0
	  li        r0, 0x15C
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xEE0:
	  stw       r30, 0x90(r31)
	  li        r3, 0x1C
	  bl        -0x3A2094
	  mr.       r30, r3
	  beq-      .loc_0xF3C
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F6A8
	  li        r3, 0
	  li        r0, 0x15D
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xF3C:
	  stw       r30, 0x94(r31)
	  li        r3, 0x1C
	  bl        -0x3A20F0
	  mr.       r30, r3
	  beq-      .loc_0xF98
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F704
	  li        r3, 0
	  li        r0, 0x17A
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xF98:
	  stw       r30, 0x98(r31)
	  li        r3, 0x1C
	  bl        -0x3A214C
	  mr.       r30, r3
	  beq-      .loc_0xFF4
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F760
	  li        r3, 0
	  li        r0, 0x17B
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0xFF4:
	  stw       r30, 0x9C(r31)
	  li        r3, 0x1C
	  bl        -0x3A21A8
	  mr.       r30, r3
	  beq-      .loc_0x1050
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F7BC
	  li        r3, 0
	  li        r0, 0x159
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x1050:
	  stw       r30, 0xA0(r31)
	  li        r3, 0x1C
	  bl        -0x3A2204
	  mr.       r30, r3
	  beq-      .loc_0x10AC
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F818
	  li        r3, 0
	  li        r0, 0x15A
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x10AC:
	  stw       r30, 0xA4(r31)
	  li        r3, 0x1C
	  bl        -0x3A2260
	  mr.       r30, r3
	  beq-      .loc_0x1108
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F874
	  li        r3, 0
	  li        r0, 0x150
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x1108:
	  stw       r30, 0xA8(r31)
	  li        r3, 0x1C
	  bl        -0x3A22BC
	  mr.       r30, r3
	  beq-      .loc_0x1164
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F8D0
	  li        r3, 0
	  li        r0, 0x163
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x1164:
	  stw       r30, 0xAC(r31)
	  li        r3, 0x1C
	  bl        -0x3A2318
	  mr.       r30, r3
	  beq-      .loc_0x11C0
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F92C
	  li        r3, 0
	  li        r0, 0x179
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x11C0:
	  stw       r30, 0xB0(r31)
	  li        r3, 0x1C
	  bl        -0x3A2374
	  mr.       r30, r3
	  beq-      .loc_0x121C
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F988
	  li        r3, 0
	  li        r0, 0x158
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x121C:
	  stw       r30, 0xB4(r31)
	  li        r3, 0x1C
	  bl        -0x3A23D0
	  mr.       r30, r3
	  beq-      .loc_0x1278
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39F9E4
	  li        r3, 0
	  li        r0, 0x151
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x1278:
	  stw       r30, 0xB8(r31)
	  li        r3, 0x1C
	  bl        -0x3A242C
	  mr.       r30, r3
	  beq-      .loc_0x12D4
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39FA40
	  li        r3, 0
	  li        r0, 0x7E
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x12D4:
	  stw       r30, 0xBC(r31)
	  li        r3, 0x1C
	  bl        -0x3A2488
	  mr.       r30, r3
	  beq-      .loc_0x1330
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39FA9C
	  li        r3, 0
	  li        r0, 0x292
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x1330:
	  stw       r30, 0xC0(r31)
	  li        r3, 0x1C
	  bl        -0x3A24E4
	  mr.       r30, r3
	  beq-      .loc_0x138C
	  lis       r4, 0x804B
	  lis       r3, 0x804A
	  subi      r0, r4, 0x5808
	  mr        r28, r30
	  stw       r0, 0x0(r30)
	  subi      r0, r3, 0x1D84
	  lis       r4, 0x804E
	  addi      r3, r28, 0x10
	  stw       r0, 0x4(r30)
	  addi      r4, r4, 0x7B14
	  addi      r0, r4, 0x14
	  stw       r4, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        -0x39FAF8
	  li        r3, 0
	  li        r0, 0x293
	  stw       r3, 0x8(r28)
	  sth       r0, 0xC(r28)

	.loc_0x138C:
	  stw       r30, 0xC4(r31)
	  li        r0, 0
	  mr        r3, r31
	  stw       r0, 0x640(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSUList<efx::TOEContextS>::~JSUList()
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	803C640C
 * Size:	000058
 */
TOEContextS::~TOEContextS(void)
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
	  beq-      .loc_0x3C
	  beq-      .loc_0x2C
	  li        r4, 0
	  bl        -0x39FC64

	.loc_0x2C:
	  extsh.    r0, r31
	  ble-      .loc_0x3C
	  mr        r3, r30
	  bl        -0x3A2390

	.loc_0x3C:
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
 * Address:	803C6464
 * Size:	000034
 */
TOEContextS::TOEContextS(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  bl        -0x39FCC4
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void JSULink<efx::TOEContextS>::~JSULink()
{
	// UNUSED FUNCTION
}

namespace efx {

/*
 * --INFO--
 * Address:	803C6498
 * Size:	000108
 */
TPkEffectMgr::~TPkEffectMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr.       r28, r3
	  beq-      .loc_0xE4
	  lis       r3, 0x804E
	  mr        r31, r28
	  addi      r0, r3, 0x7B08
	  li        r30, 0
	  stw       r0, 0x0(r28)

	.loc_0x3C:
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x11
	  blt+      .loc_0x3C
	  li        r30, 0
	  mr        r31, r28

	.loc_0x74:
	  lwz       r3, 0x5C(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x94
	  lwz       r12, 0x0(r3)
	  li        r4, 0x1
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl

	.loc_0x94:
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x1B
	  blt+      .loc_0x74
	  li        r0, 0
	  lis       r3, 0x803C
	  stw       r0, -0x65AC(r13)
	  addi      r4, r3, 0x640C
	  addi      r3, r28, 0xC8
	  li        r5, 0x1C
	  stw       r0, -0x65B0(r13)
	  li        r6, 0x32
	  bl        -0x304D98
	  mr        r3, r28
	  li        r4, 0
	  bl        -0x3A9534
	  extsh.    r0, r29
	  ble-      .loc_0xE4
	  mr        r3, r28
	  bl        -0x3A24C4

	.loc_0xE4:
	  lwz       r0, 0x24(r1)
	  mr        r3, r28
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
 * Address:	803C65A0
 * Size:	000080
 */
TPkOneEmitterSimple::~TPkOneEmitterSimple(void)
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
	  beq-      .loc_0x64
	  lis       r3, 0x804E
	  addic.    r0, r30, 0x10
	  addi      r3, r3, 0x7B14
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x14
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x48
	  addi      r3, r30, 0x10
	  li        r4, 0
	  bl        -0x39FD7C

	.loc_0x48:
	  addi      r3, r30, 0x4
	  li        r4, 0
	  bl        -0x336954
	  extsh.    r0, r31
	  ble-      .loc_0x64
	  mr        r3, r30
	  bl        -0x3A254C

	.loc_0x64:
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
 * Address:	803C6620
 * Size:	000098
 */
void TPkEffectMgr::startMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r31, r29

	.loc_0x24:
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x11
	  blt+      .loc_0x24
	  li        r30, 0
	  mr        r31, r29

	.loc_0x54:
	  lwz       r3, 0x5C(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x1B
	  blt+      .loc_0x54
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
 * Address:	803C66B8
 * Size:	000090
 */
void TPkEffectMgr::exitMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mr        r31, r29

	.loc_0x24:
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x11
	  blt+      .loc_0x24
	  li        r30, 0
	  mr        r31, r29

	.loc_0x50:
	  lwz       r3, 0x5C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r30, r30, 0x1
	  addi      r31, r31, 0x4
	  cmpwi     r30, 0x1B
	  blt+      .loc_0x50
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
 * Address:	803C6748
 * Size:	000044
 */
void TPkOneEmitterSimple::forceKill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x30
	  lwz       r3, -0x65E8(r13)
	  bl        -0xACEC
	  li        r0, 0
	  stw       r0, 0x8(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C678C
 * Size:	00000C
 */
void TPkEffectMgr::resetContextS(void)
{
	// Generated from stw r0, 0x640(r3)
	_640 = 0;
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C6798
 * Size:	00021C
 */
void createS_Dead__Q23efx12TPkEffectMgrFR10Vector3f l(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0x3
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  beq-      .loc_0x144
	  bge-      .loc_0x34
	  cmpwi     r5, 0x1
	  beq-      .loc_0x9C
	  bge-      .loc_0xF0
	  cmpwi     r5, 0
	  bge-      .loc_0x48
	  b         .loc_0x1EC

	.loc_0x34:
	  cmpwi     r5, 0x7
	  bge-      .loc_0x1EC
	  cmpwi     r5, 0x5
	  bge-      .loc_0x208
	  b         .loc_0x198

	.loc_0x48:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x5C(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x208
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x39FF3C
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)
	  b         .loc_0x208

	.loc_0x9C:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x60(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x208
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x39FF90
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)
	  b         .loc_0x208

	.loc_0xF0:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x64(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x208
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x39FFE4
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)
	  b         .loc_0x208

	.loc_0x144:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x68(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x208
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A0038
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)
	  b         .loc_0x208

	.loc_0x198:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x6C(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x208
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A008C
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)
	  b         .loc_0x208

	.loc_0x1EC:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0xE8
	  addi      r5, r5, 0x638C
	  crclr     6, 0x6
	  bl        -0x39C35C

	.loc_0x208:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void createS_Attack__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void createS_AttackDp__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000160
 */
void createS_Kanden__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803C69B4
 * Size:	0000C8
 */
void createS_Chinka__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x88(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x64
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A0124
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x64:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x8C(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0xB0
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A0170
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0xB0:
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
 * Address:	803C6A7C
 * Size:	0000C8
 */
void createS_Gedoku__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x90(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x64
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A01EC
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x64:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x94(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0xB0
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A0238
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0xB0:
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
 * Address:	803C6B44
 * Size:	0000C8
 */
void createS_WaterOff__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x98(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x64
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A02B4
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x64:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0x9C(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0xB0
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A0300
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0xB0:
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
 * Address:	803C6C0C
 * Size:	0000C8
 */
void createS_Dive__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xA0(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x64
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A037C
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x64:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xA4(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0xB0
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A03C8
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0xB0:
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
 * Address:	803C6CD4
 * Size:	000074
 */
void createS_Chiru__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xA8(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x60
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A0440
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C6D48
 * Size:	000074
 */
void createS_Inattack__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xAC(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x60
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A04B4
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C6DBC
 * Size:	000074
 */
void createS_Walksmoke__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xB0(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x60
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A0528
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C6E30
 * Size:	000074
 */
void createS_Dig__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xB4(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x60
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A059C
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C6EA4
 * Size:	000074
 */
void createS_ChiruRed__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xB8(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x60
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A0610
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C6F18
 * Size:	000074
 */
void createS_Gate3Attack__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xBC(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x60
	  mulli     r5, r0, 0x1C
	  lfs       f0, 0x0(r4)
	  addi      r3, r3, 0x10
	  addi      r5, r5, 0xC8
	  add       r5, r31, r5
	  stfs      f0, 0x10(r5)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x14(r5)
	  lfs       f0, 0x8(r4)
	  mr        r4, r5
	  stfs      f0, 0x18(r5)
	  bl        -0x3A0684
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x60:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C6F8C
 * Size:	0000C8
 */
void createS_Walkwater__Q23efx12TPkEffectMgrFR10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xC0(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0x64
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A06FC
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0x64:
	  lwz       r31, -0x65B0(r13)
	  lwz       r0, 0x640(r31)
	  lwz       r3, 0xC4(r31)
	  cmpwi     r0, 0x31
	  bge-      .loc_0xB0
	  mulli     r4, r0, 0x1C
	  lfs       f0, 0x0(r30)
	  addi      r3, r3, 0x10
	  addi      r4, r4, 0xC8
	  add       r4, r31, r4
	  stfs      f0, 0x10(r4)
	  lfs       f0, 0x4(r30)
	  stfs      f0, 0x14(r4)
	  lfs       f0, 0x8(r30)
	  stfs      f0, 0x18(r4)
	  bl        -0x3A0748
	  lwz       r3, 0x640(r31)
	  addi      r0, r3, 0x1
	  stw       r0, 0x640(r31)

	.loc_0xB0:
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
 * Address:	803C7054
 * Size:	000128
 */
void create__Q23efx9ToeKourinFP10Vector3f l(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr.       r29, r4
	  lis       r4, 0x8049
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  addi      r31, r4, 0x6378
	  bne-      .loc_0x48
	  addi      r3, r31, 0
	  addi      r5, r31, 0x24
	  li        r4, 0x140
	  crclr     6, 0x6
	  bl        -0x39CA58

	.loc_0x48:
	  stw       r30, 0x1C(r28)
	  stw       r29, 0x18(r28)
	  lwz       r3, 0x1C(r28)
	  addi      r0, r3, 0x1
	  cmplwi    r0, 0x7
	  bgt-      .loc_0xF0
	  lis       r3, 0x804E
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x7AC8
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r3, -0x65B0(r13)
	  mr        r4, r28
	  lwz       r3, 0x18(r3)
	  bl        -0x1858C
	  b         .loc_0x108
	  lwz       r3, -0x65B0(r13)
	  mr        r4, r28
	  lwz       r3, 0x1C(r3)
	  bl        -0x185A0
	  b         .loc_0x108
	  lwz       r3, -0x65B0(r13)
	  mr        r4, r28
	  lwz       r3, 0x20(r3)
	  bl        -0x185B4
	  b         .loc_0x108
	  lwz       r3, -0x65B0(r13)
	  mr        r4, r28
	  lwz       r3, 0x24(r3)
	  bl        -0x185C8
	  b         .loc_0x108
	  lwz       r3, -0x65B0(r13)
	  mr        r4, r28
	  lwz       r3, 0x28(r3)
	  bl        -0x185DC
	  b         .loc_0x108
	  lwz       r3, -0x65B0(r13)
	  mr        r4, r28
	  lwz       r3, 0x2C(r3)
	  bl        -0x185F0
	  b         .loc_0x108

	.loc_0xF0:
	  mr        r6, r30
	  addi      r3, r31, 0
	  addi      r5, r31, 0x30
	  li        r4, 0x15C
	  crclr     6, 0x6
	  bl        -0x39CB18

	.loc_0x108:
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

namespace efx {

/*
 * --INFO--
 * Address:	803C717C
 * Size:	0000B8
 */
void ToeKourin::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x1C(r3)
	  addi      r0, r4, 0x1
	  cmplwi    r0, 0x7
	  bgt-      .loc_0xA8
	  lis       r4, 0x804E
	  rlwinm    r0,r0,2,0,29
	  addi      r4, r4, 0x7AE8
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  lwz       r5, -0x65B0(r13)
	  mr        r4, r3
	  lwz       r3, 0x18(r5)
	  bl        -0x18628
	  b         .loc_0xA8
	  lwz       r5, -0x65B0(r13)
	  mr        r4, r3
	  lwz       r3, 0x1C(r5)
	  bl        -0x1863C
	  b         .loc_0xA8
	  lwz       r5, -0x65B0(r13)
	  mr        r4, r3
	  lwz       r3, 0x20(r5)
	  bl        -0x18650
	  b         .loc_0xA8
	  lwz       r5, -0x65B0(r13)
	  mr        r4, r3
	  lwz       r3, 0x24(r5)
	  bl        -0x18664
	  b         .loc_0xA8
	  lwz       r5, -0x65B0(r13)
	  mr        r4, r3
	  lwz       r3, 0x28(r5)
	  bl        -0x18678
	  b         .loc_0xA8
	  lwz       r5, -0x65B0(r13)
	  mr        r4, r3
	  lwz       r3, 0x2C(r5)
	  bl        -0x1868C

	.loc_0xA8:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7234
 * Size:	000068
 */
void create__Q23efx9ToeDopingFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x181
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39CC2C

	.loc_0x3C:
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x30(r3)
	  bl        -0x18734
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C729C
 * Size:	00002C
 */
void ToeDoping::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x30(r5)
	  bl        -0x18720
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C72C8
 * Size:	000068
 */
void create__Q23efx11ToeNagekiraFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x18F
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39CCC0

	.loc_0x3C:
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x34(r3)
	  bl        -0x187C8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7330
 * Size:	00002C
 */
void ToeNagekira::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x34(r5)
	  bl        -0x187B4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C735C
 * Size:	00007C
 */
void create__Q23efx8ToeMoeBCFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x19C
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39CD54

	.loc_0x3C:
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x38(r3)
	  bl        -0x1885C
	  stw       r31, 0x34(r30)
	  addi      r4, r30, 0x1C
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x3C(r3)
	  bl        -0x18870
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C73D8
 * Size:	000048
 */
void ToeMoeBC::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x38(r5)
	  bl        -0x18864
	  lwz       r3, -0x65B0(r13)
	  addi      r4, r31, 0x1C
	  lwz       r3, 0x3C(r3)
	  bl        -0x18874
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7420
 * Size:	000068
 */
void create__Q23efx10ToeChudokuFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x1AD
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39CE18

	.loc_0x3C:
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x40(r3)
	  bl        -0x18920
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7488
 * Size:	00002C
 */
void ToeChudoku::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x40(r5)
	  bl        -0x1890C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C74B4
 * Size:	00007C
 */
void create__Q23efx8ToeWaterFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x1BC
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39CEAC

	.loc_0x3C:
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x44(r3)
	  bl        -0x189B4
	  stw       r31, 0x34(r30)
	  addi      r4, r30, 0x1C
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x48(r3)
	  bl        -0x189C8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7530
 * Size:	000048
 */
void ToeWater::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  mr        r4, r31
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x44(r5)
	  bl        -0x189BC
	  lwz       r3, -0x65B0(r13)
	  addi      r4, r31, 0x1C
	  lwz       r3, 0x48(r3)
	  bl        -0x189CC
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7578
 * Size:	000074
 */
void create__Q23efx9ToeHamonAFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x1CD
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39CF70

	.loc_0x3C:
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x4C(r3)
	  bl        -0x18A84

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C75EC
 * Size:	00002C
 */
void ToeHamonA::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x4C(r5)
	  bl        -0x18A70
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7618
 * Size:	000074
 */
void create__Q23efx9ToeHamonBFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x1DE
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39D010

	.loc_0x3C:
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0x5C
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x50(r3)
	  bl        -0x18B24

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C768C
 * Size:	00002C
 */
void ToeHamonB::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x50(r5)
	  bl        -0x18B10
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C76B8
 * Size:	000068
 */
void create__Q23efx11ToeMoeSmokeFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x1EF
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39D0B0

	.loc_0x3C:
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x54(r3)
	  bl        -0x18BB8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C7720
 * Size:	00002C
 */
void ToeMoeSmoke::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x54(r5)
	  bl        -0x18BA4
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C774C
 * Size:	000068
 */
void create__Q23efx11ToeTanekiraFP10Vector3f(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6378
	  li        r4, 0x1FC
	  addi      r5, r5, 0x639C
	  crclr     6, 0x6
	  bl        -0x39D144

	.loc_0x3C:
	  stw       r31, 0x18(r30)
	  mr        r4, r30
	  lwz       r3, -0x65B0(r13)
	  lwz       r3, 0x58(r3)
	  bl        -0x18C4C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

namespace efx {

/*
 * --INFO--
 * Address:	803C77B4
 * Size:	00002C
 */
void ToeTanekira::kill(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  lwz       r5, -0x65B0(r13)
	  lwz       r3, 0x58(r5)
	  bl        -0x18C38
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803C77E0
 * Size:	000044
 */
void TPkOneEmitterSimple::fade(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r4, 0x8(r3)
	  cmplwi    r4, 0
	  beq-      .loc_0x30
	  lwz       r3, -0x65E8(r13)
	  bl        -0xBD58
	  li        r0, 0
	  stw       r0, 0x8(r31)

	.loc_0x30:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

} // namespace efx

/*
 * --INFO--
 * Address:	803C7824
 * Size:	000008
 */
void @4 @efx::TPkOneEmitterSimple::executeAfter(JPABaseEmitter*)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x2968
	*/
}

/*
 * --INFO--
 * Address:	803C782C
 * Size:	000008
 */
@4 @efx::TPkOneEmitterSimple::~TPkOneEmitterSimple(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x1290
	*/
}
