#include "types.h"

/*
 * --INFO--
 * Address:	800A7968
 * Size:	00013C
 */
void JASDriver::initAI(void (*)())
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r31, r3
	  bl        0x884
	  lis       r4, 0x804F
	  rlwinm    r28,r3,1,0,30
	  addi      r30, r4, 0x768
	  li        r27, 0
	  mr        r29, r28

	.loc_0x2C:
	  lwz       r4, -0x7548(r13)
	  mr        r3, r29
	  li        r5, 0x20
	  bl        -0x83958
	  stw       r3, 0x0(r30)
	  mr        r4, r28
	  lwz       r3, 0x0(r30)
	  bl        -0x174C
	  lwz       r3, 0x0(r30)
	  mr        r4, r28
	  bl        0x44D8C
	  addi      r27, r27, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r27, 0x3
	  blt+      .loc_0x2C
	  lbz       r0, -0x7ED8(r13)
	  li        r5, 0
	  lwz       r4, -0x7548(r13)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x83998
	  stw       r3, -0x7520(r13)
	  li        r27, 0
	  li        r29, 0
	  b         .loc_0xD0

	.loc_0x8C:
	  bl        0x80C
	  lwz       r4, -0x7548(r13)
	  rlwinm    r3,r3,1,0,30
	  li        r5, 0x20
	  bl        -0x839BC
	  lwz       r5, -0x7520(r13)
	  mr        r4, r28
	  stwx      r3, r5, r29
	  lwz       r3, -0x7520(r13)
	  lwzx      r3, r3, r29
	  bl        -0x17B8
	  lwz       r3, -0x7520(r13)
	  mr        r4, r28
	  lwzx      r3, r3, r29
	  bl        0x44D1C
	  addi      r29, r29, 0x4
	  addi      r27, r27, 0x1

	.loc_0xD0:
	  lbz       r3, -0x7ED8(r13)
	  cmpw      r27, r3
	  blt+      .loc_0x8C
	  li        r0, 0
	  subi      r3, r3, 0x1
	  stw       r3, -0x751C(r13)
	  li        r3, 0
	  stw       r0, -0x7518(r13)
	  stw       r0, -0x7514(r13)
	  bl        0x4F21C
	  lis       r3, 0x804F
	  mr        r4, r28
	  addi      r3, r3, 0x768
	  lwz       r3, 0x8(r3)
	  bl        0x4EE38
	  lwz       r3, -0x7500(r13)
	  neg       r0, r3
	  or        r0, r0, r3
	  rlwinm    r3,r0,1,31,31
	  bl        0x4EFC4
	  mr        r3, r31
	  bl        0x4EDD8
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A7AA4
 * Size:	000020
 */
void JASDriver::startDMA()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x4EE80
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A7AC4
 * Size:	000020
 */
void JASDriver::stopDMA()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        0x4EE78
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void JASDriver::setOutputRate(JASOutputRate)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A7AE4
 * Size:	00015C
 */
void JASDriver::updateDac()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lbz       r0, -0x74F8(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x2C
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x74FC(r13)
	  stb       r0, -0x74F8(r13)

	.loc_0x2C:
	  lwz       r31, -0x750C(r13)
	  li        r0, 0
	  cmplwi    r31, 0
	  stw       r0, -0x750C(r13)
	  beq-      .loc_0x50
	  bl        0x6DC
	  rlwinm    r4,r3,1,0,30
	  mr        r3, r31
	  bl        0x4ED78

	.loc_0x50:
	  bl        0x6D8
	  lwz       r0, -0x74FC(r13)
	  lis       r4, 0x804F
	  addi      r4, r4, 0x768
	  mr        r31, r3
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r4, r0
	  mr        r4, r31
	  bl        0x1DC
	  lwz       r0, -0x7514(r13)
	  cmpwi     r0, 0
	  bne-      .loc_0x84
	  bl        0x4DC

	.loc_0x84:
	  lwz       r5, -0x7504(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0xC4
	  lwz       r0, -0x7ED0(r13)
	  lis       r3, 0x8048
	  lwz       r6, -0x74FC(r13)
	  subi      r3, r3, 0x6A18
	  rlwinm    r0,r0,2,0,29
	  lis       r4, 0x804F
	  lwzx      r12, r3, r0
	  addi      r3, r4, 0x768
	  rlwinm    r0,r6,2,0,29
	  mr        r4, r31
	  lwzx      r3, r3, r0
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  bl        0x47090
	  mr        r31, r3
	  bl        0x650
	  lwz       r0, -0x74FC(r13)
	  lis       r5, 0x804F
	  rlwinm    r4,r3,1,0,30
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r5, 0x768
	  lwzx      r3, r3, r0
	  bl        0x44B7C
	  mr        r3, r31
	  bl        0x4708C
	  lwz       r5, -0x74FC(r13)
	  lis       r3, 0x804F
	  addi      r3, r3, 0x768
	  rlwinm    r4,r5,2,0,29
	  addi      r0, r5, 0x1
	  lwzx      r3, r3, r4
	  cmplwi    r0, 0x3
	  stw       r0, -0x74FC(r13)
	  stw       r3, -0x750C(r13)
	  blt-      .loc_0x124
	  li        r0, 0
	  stw       r0, -0x74FC(r13)

	.loc_0x124:
	  lwz       r0, -0x7508(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x148
	  bl        0x5F8
	  lwz       r12, -0x7508(r13)
	  mr        r4, r3
	  lwz       r3, -0x750C(r13)
	  mtctr     r12
	  bctrl

	.loc_0x148:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A7C40
 * Size:	0000F0
 */
void JASDriver::updateDSP()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  li        r3, 0x3
	  stw       r0, 0x24(r1)
	  subi      r4, r4, 0x6A08
	  stw       r31, 0x1C(r1)
	  bl        -0x788
	  bl        -0x2868
	  bl        -0x14C0
	  bl        -0x3200
	  lbz       r0, -0x74F0(r13)
	  extsb.    r0, r0
	  bne-      .loc_0x48
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x74F4(r13)
	  stb       r0, -0x74F0(r13)

	.loc_0x48:
	  bl        0x4AF20
	  lwz       r0, -0x74F4(r13)
	  stw       r3, -0x74F4(r13)
	  sub       r31, r3, r0
	  bl        0x560
	  lwz       r5, -0x7558(r13)
	  lis       r4, 0x804A
	  addi      r4, r4, 0x4468
	  sub       r0, r3, r5
	  cmplw     r3, r5
	  rlwinm    r0,r0,2,0,29
	  stwx      r31, r4, r0
	  beq-      .loc_0xCC
	  lwz       r3, 0x0(r4)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f3, -0x74D8(r2)
	  stw       r3, 0xC(r1)
	  lfs       f0, -0x74E0(r2)
	  lfd       f1, 0x8(r1)
	  stw       r31, 0x14(r1)
	  fsubs     f2, f1, f3
	  stw       r0, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xCC
	  lis       r3, 0x8048
	  subi      r3, r3, 0x69FC
	  crclr     6, 0x6
	  bl        -0x498
	  bl        -0x2B68

	.loc_0xCC:
	  bl        -0x2BE0
	  bl        -0x32D0
	  li        r3, 0x3
	  bl        -0x7E4
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A7D30
 * Size:	000310
 */
void JASDriver::readDspBuffer(short*, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r30, r3
	  mr        r31, r4
	  lwz       r5, -0x7518(r13)
	  lbz       r3, -0x7ED8(r13)
	  addi      r4, r5, 0x1
	  cmpw      r4, r3
	  bne-      .loc_0x30
	  li        r4, 0

	.loc_0x30:
	  lwz       r0, -0x751C(r13)
	  cmpw      r4, r0
	  bne-      .loc_0x2C0
	  cmplwi    r3, 0x3
	  blt-      .loc_0x2C0
	  lwz       r4, -0x7520(r13)
	  rlwinm    r3,r5,2,0,29
	  cmplwi    r31, 0
	  rlwinm    r0,r31,0,0,30
	  lwzx      r3, r4, r3
	  rlwinm    r4,r31,1,0,30
	  li        r6, 0
	  subi      r3, r3, 0x2
	  lhax      r0, r3, r0
	  lhax      r5, r3, r4
	  ble-      .loc_0x18C
	  cmplwi    r31, 0x8
	  subi      r8, r31, 0x8
	  ble-      .loc_0x15C
	  addi      r7, r8, 0x7
	  li        r3, 0
	  rlwinm    r7,r7,29,3,31
	  mtctr     r7
	  cmplwi    r8, 0
	  ble-      .loc_0x15C

	.loc_0x94:
	  lwz       r7, -0x7518(r13)
	  addi      r28, r3, 0x2
	  lwz       r8, -0x7520(r13)
	  addi      r12, r3, 0x4
	  rlwinm    r7,r7,2,0,29
	  addi      r11, r3, 0x6
	  lwzx      r7, r8, r7
	  addi      r10, r3, 0x8
	  addi      r9, r3, 0xA
	  addi      r8, r3, 0xC
	  sthx      r0, r7, r3
	  addi      r7, r3, 0xE
	  addi      r3, r3, 0x10
	  addi      r6, r6, 0x8
	  lwz       r29, -0x7518(r13)
	  lwz       r27, -0x7520(r13)
	  rlwinm    r29,r29,2,0,29
	  lwzx      r29, r27, r29
	  sthx      r0, r29, r28
	  lwz       r28, -0x7518(r13)
	  lwz       r29, -0x7520(r13)
	  rlwinm    r28,r28,2,0,29
	  lwzx      r28, r29, r28
	  sthx      r0, r28, r12
	  lwz       r12, -0x7518(r13)
	  lwz       r28, -0x7520(r13)
	  rlwinm    r12,r12,2,0,29
	  lwzx      r12, r28, r12
	  sthx      r0, r12, r11
	  lwz       r11, -0x7518(r13)
	  lwz       r12, -0x7520(r13)
	  rlwinm    r11,r11,2,0,29
	  lwzx      r11, r12, r11
	  sthx      r0, r11, r10
	  lwz       r10, -0x7518(r13)
	  lwz       r11, -0x7520(r13)
	  rlwinm    r10,r10,2,0,29
	  lwzx      r10, r11, r10
	  sthx      r0, r10, r9
	  lwz       r9, -0x7518(r13)
	  lwz       r10, -0x7520(r13)
	  rlwinm    r9,r9,2,0,29
	  lwzx      r9, r10, r9
	  sthx      r0, r9, r8
	  lwz       r8, -0x7518(r13)
	  lwz       r9, -0x7520(r13)
	  rlwinm    r8,r8,2,0,29
	  lwzx      r8, r9, r8
	  sthx      r0, r8, r7
	  bdnz+     .loc_0x94

	.loc_0x15C:
	  sub       r3, r31, r6
	  rlwinm    r7,r6,1,0,30
	  mtctr     r3
	  cmplw     r6, r31
	  bge-      .loc_0x18C

	.loc_0x170:
	  lwz       r3, -0x7518(r13)
	  lwz       r6, -0x7520(r13)
	  rlwinm    r3,r3,2,0,29
	  lwzx      r3, r6, r3
	  sthx      r0, r3, r7
	  addi      r7, r7, 0x2
	  bdnz+     .loc_0x170

	.loc_0x18C:
	  cmplw     r31, r4
	  mr        r6, r31
	  bge-      .loc_0x2D8
	  sub       r0, r4, r31
	  subi      r7, r4, 0x8
	  cmplwi    r0, 0x8
	  ble-      .loc_0x28C
	  addi      r0, r7, 0x7
	  mr        r3, r4
	  sub       r0, r0, r31
	  rlwinm    r0,r0,29,3,31
	  mtctr     r0
	  cmplw     r31, r7
	  bge-      .loc_0x28C

	.loc_0x1C4:
	  lwz       r0, -0x7518(r13)
	  addi      r12, r3, 0x2
	  lwz       r7, -0x7520(r13)
	  addi      r11, r3, 0x4
	  rlwinm    r0,r0,2,0,29
	  addi      r10, r3, 0x6
	  lwzx      r28, r7, r0
	  addi      r9, r3, 0x8
	  addi      r8, r3, 0xA
	  addi      r7, r3, 0xC
	  sthx      r5, r28, r3
	  addi      r0, r3, 0xE
	  addi      r3, r3, 0x10
	  addi      r6, r6, 0x8
	  lwz       r29, -0x7518(r13)
	  lwz       r28, -0x7520(r13)
	  rlwinm    r29,r29,2,0,29
	  lwzx      r29, r28, r29
	  sthx      r5, r29, r12
	  lwz       r12, -0x7518(r13)
	  lwz       r29, -0x7520(r13)
	  rlwinm    r12,r12,2,0,29
	  lwzx      r12, r29, r12
	  sthx      r5, r12, r11
	  lwz       r11, -0x7518(r13)
	  lwz       r12, -0x7520(r13)
	  rlwinm    r11,r11,2,0,29
	  lwzx      r11, r12, r11
	  sthx      r5, r11, r10
	  lwz       r10, -0x7518(r13)
	  lwz       r11, -0x7520(r13)
	  rlwinm    r10,r10,2,0,29
	  lwzx      r10, r11, r10
	  sthx      r5, r10, r9
	  lwz       r9, -0x7518(r13)
	  lwz       r10, -0x7520(r13)
	  rlwinm    r9,r9,2,0,29
	  lwzx      r9, r10, r9
	  sthx      r5, r9, r8
	  lwz       r8, -0x7518(r13)
	  lwz       r9, -0x7520(r13)
	  rlwinm    r8,r8,2,0,29
	  lwzx      r8, r9, r8
	  sthx      r5, r8, r7
	  lwz       r7, -0x7518(r13)
	  lwz       r8, -0x7520(r13)
	  rlwinm    r7,r7,2,0,29
	  lwzx      r7, r8, r7
	  sthx      r5, r7, r0
	  bdnz+     .loc_0x1C4

	.loc_0x28C:
	  sub       r0, r4, r6
	  rlwinm    r7,r6,1,0,30
	  mtctr     r0
	  cmplw     r6, r4
	  bge-      .loc_0x2D8

	.loc_0x2A0:
	  lwz       r0, -0x7518(r13)
	  lwz       r3, -0x7520(r13)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r3, r0
	  sthx      r5, r3, r7
	  addi      r7, r7, 0x2
	  bdnz+     .loc_0x2A0
	  b         .loc_0x2D8

	.loc_0x2C0:
	  stw       r4, -0x7518(r13)
	  rlwinm    r0,r4,2,0,29
	  lwz       r3, -0x7520(r13)
	  rlwinm    r4,r31,2,0,29
	  lwzx      r3, r3, r0
	  bl        0x446E8

	.loc_0x2D8:
	  lwz       r3, -0x7518(r13)
	  rlwinm    r0,r31,1,0,30
	  lwz       r4, -0x7520(r13)
	  mr        r5, r30
	  rlwinm    r3,r3,2,0,29
	  mr        r6, r31
	  lwzx      r4, r4, r3
	  add       r3, r4, r0
	  bl        -0x216C
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A8040
 * Size:	0001A4
 */
void JASDriver::finishDSPFrame()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  subi      r31, r4, 0x6A18
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  lwz       r3, -0x751C(r13)
	  lbz       r0, -0x7ED8(r13)
	  addi      r3, r3, 0x1
	  cmpw      r3, r0
	  bne-      .loc_0x38
	  li        r3, 0

	.loc_0x38:
	  lwz       r0, -0x7518(r13)
	  cmpw      r3, r0
	  bne-      .loc_0x50
	  li        r0, 0
	  stw       r0, -0x7514(r13)
	  b         .loc_0x188

	.loc_0x50:
	  stw       r3, -0x751C(r13)
	  bl        0x164
	  stw       r3, -0x7558(r13)
	  addi      r4, r31, 0x30
	  li        r3, 0x7
	  bl        -0xBD0
	  bl        0x164
	  lwz       r0, -0x751C(r13)
	  mr        r30, r3
	  lwz       r4, -0x7520(r13)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r29, r4, r0
	  bl        0x138
	  rlwinm    r0,r30,1,0,30
	  mr        r4, r29
	  add       r5, r29, r0
	  bl        -0x2D34
	  li        r0, 0x1
	  addi      r4, r31, 0x10
	  stw       r0, -0x7514(r13)
	  li        r3, 0x3
	  bl        -0xC10
	  bl        -0x2CF0
	  bl        -0x1948
	  bl        -0x3688
	  lbz       r0, -0x74F0(r13)
	  extsb.    r0, r0
	  bne-      .loc_0xD0
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, -0x74F4(r13)
	  stb       r0, -0x74F0(r13)

	.loc_0xD0:
	  bl        0x4AA98
	  lwz       r0, -0x74F4(r13)
	  stw       r3, -0x74F4(r13)
	  sub       r29, r3, r0
	  bl        0xD8
	  lwz       r5, -0x7558(r13)
	  lis       r4, 0x804A
	  addi      r4, r4, 0x4468
	  sub       r0, r3, r5
	  cmplw     r3, r5
	  rlwinm    r0,r0,2,0,29
	  stwx      r29, r4, r0
	  beq-      .loc_0x150
	  lwz       r3, 0x0(r4)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  lfd       f3, -0x74D8(r2)
	  stw       r3, 0xC(r1)
	  lfs       f0, -0x74E0(r2)
	  lfd       f1, 0x8(r1)
	  stw       r29, 0x14(r1)
	  fsubs     f2, f1, f3
	  stw       r0, 0x10(r1)
	  lfd       f1, 0x10(r1)
	  fsubs     f1, f1, f3
	  fdivs     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x150
	  addi      r3, r31, 0x1C
	  crclr     6, 0x6
	  bl        -0x91C
	  bl        -0x2FEC

	.loc_0x150:
	  bl        -0x3064
	  bl        -0x3754
	  li        r3, 0x3
	  bl        -0xC68
	  lwz       r12, -0x7510(r13)
	  cmplwi    r12, 0
	  beq-      .loc_0x188
	  lwz       r0, -0x751C(r13)
	  mr        r4, r30
	  lwz       r3, -0x7520(r13)
	  rlwinm    r0,r0,2,0,29
	  lwzx      r3, r3, r0
	  mtctr     r12
	  bctrl

	.loc_0x188:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::setSubFrames(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::setNumDSPBuffer(unsigned char)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A81E4
 * Size:	00000C
 */
void JASDriver::registerMixCallback(short* (*)(long), JASMixMode)
{
	/*
	.loc_0x0:
	  stw       r3, -0x7504(r13)
	  stw       r4, -0x7ED0(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::registerDacCallback(void (*)(short*, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void JASDriver::registDSPBufCallback(void (*)(short*, unsigned long))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800A81F0
 * Size:	000008
 */
void JASDriver::getDacRate()
{
	/*
	.loc_0x0:
	  lfs       f1, -0x7ECC(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A81F8
 * Size:	000008
 */
void JASDriver::getSubFrames()
{
	/*
	.loc_0x0:
	  lwz       r3, -0x7ED4(r13)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A8200
 * Size:	00000C
 */
void JASDriver::getDacSize()
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7ED4(r13)
	  mulli     r3, r0, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A820C
 * Size:	00000C
 */
void JASDriver::getFrameSamples()
{
	/*
	.loc_0x0:
	  lwz       r0, -0x7ED4(r13)
	  mulli     r3, r0, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800A8218
 * Size:	0000C0
 */
void JASDriver::mixMonoTrack(short*, unsigned long, short* (*)(long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x69DC
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x5
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  mr        r4, r0
	  bl        -0xD7C
	  mr        r12, r29
	  mr        r3, r28
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0xA0
	  li        r3, 0x5
	  bl        -0xD3C
	  mr        r29, r28
	  b         .loc_0x98

	.loc_0x64:
	  lha       r3, 0x0(r30)
	  lha       r0, 0x0(r31)
	  add       r3, r3, r0
	  bl        -0x1DB0
	  sth       r3, 0x0(r30)
	  lha       r3, 0x2(r30)
	  lha       r0, 0x0(r31)
	  add       r3, r3, r0
	  bl        -0x1DC4
	  sth       r3, 0x2(r30)
	  addi      r30, r30, 0x4
	  addi      r31, r31, 0x2
	  subi      r29, r29, 0x1

	.loc_0x98:
	  cmplwi    r29, 0
	  bne+      .loc_0x64

	.loc_0xA0:
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
 * Address:	800A82D8
 * Size:	0000C0
 */
void JASDriver::mixMonoTrackWide(short*, unsigned long, short* (*)(long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x69D0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x5
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  mr        r4, r0
	  bl        -0xE3C
	  mr        r12, r29
	  mr        r3, r28
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0xA0
	  li        r3, 0x5
	  bl        -0xDFC
	  mr        r29, r28
	  b         .loc_0x98

	.loc_0x64:
	  lha       r3, 0x0(r30)
	  lha       r0, 0x0(r31)
	  add       r3, r3, r0
	  bl        -0x1E70
	  sth       r3, 0x0(r30)
	  lha       r3, 0x2(r30)
	  lha       r0, 0x0(r31)
	  sub       r3, r3, r0
	  bl        -0x1E84
	  sth       r3, 0x2(r30)
	  addi      r30, r30, 0x4
	  addi      r31, r31, 0x2
	  subi      r29, r29, 0x1

	.loc_0x98:
	  cmplwi    r29, 0
	  bne+      .loc_0x64

	.loc_0xA0:
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
 * Address:	800A8398
 * Size:	0000E0
 */
void JASDriver::mixExtraTrack(short*, unsigned long, short* (*)(long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  li        r3, 0x5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  subi      r4, r2, 0x74D0
	  stw       r28, 0x10(r1)
	  mr        r28, r5
	  bl        -0xEF4
	  mr        r12, r28
	  mr        r3, r29
	  mtctr     r12
	  bctrl
	  mr.       r31, r3
	  beq-      .loc_0xC0
	  li        r3, 0x5
	  bl        -0xEB4
	  li        r3, 0x6
	  subi      r4, r2, 0x74C8
	  bl        -0xF20
	  lwz       r0, -0x7ED4(r13)
	  mr        r28, r29
	  mulli     r0, r0, 0x50
	  rlwinm    r0,r0,1,0,30
	  add       r29, r31, r0
	  b         .loc_0xB0

	.loc_0x78:
	  lha       r3, 0x0(r30)
	  lha       r0, 0x0(r29)
	  add       r3, r3, r0
	  bl        -0x1F44
	  sth       r3, 0x0(r30)
	  lha       r3, 0x2(r30)
	  lha       r0, 0x0(r31)
	  add       r3, r3, r0
	  bl        -0x1F58
	  sth       r3, 0x2(r30)
	  addi      r30, r30, 0x4
	  addi      r29, r29, 0x2
	  addi      r31, r31, 0x2
	  subi      r28, r28, 0x1

	.loc_0xB0:
	  cmplwi    r28, 0
	  bne+      .loc_0x78
	  li        r3, 0x6
	  bl        -0xF20

	.loc_0xC0:
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
 * Address:	800A8478
 * Size:	00008C
 */
void JASDriver::mixInterleaveTrack(short*, unsigned long, short* (*)(long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  mr        r12, r5
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  mr        r3, r29
	  mtctr     r12
	  bctrl
	  cmplwi    r3, 0
	  beq-      .loc_0x70
	  mr        r31, r30
	  mr        r30, r3
	  rlwinm    r29,r29,1,0,30
	  b         .loc_0x68

	.loc_0x48:
	  lha       r3, 0x0(r31)
	  lha       r0, 0x0(r30)
	  add       r3, r3, r0
	  bl        -0x1FF4
	  sth       r3, 0x0(r31)
	  addi      r31, r31, 0x2
	  addi      r30, r30, 0x2
	  subi      r29, r29, 0x1

	.loc_0x68:
	  cmplwi    r29, 0
	  bne+      .loc_0x48

	.loc_0x70:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
