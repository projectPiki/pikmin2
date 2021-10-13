

/*
 * --INFO--
 * Address:	8006C3A4
 * Size:	000248
 */
void J3DMaterialFactory::J3DMaterialFactory(const J3DMaterialBlock&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lhz       r0, 0x8(r4)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r4, 0xC(r4)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  sth       r0, 0x0(r30)
	  bl        0x34A0
	  stw       r3, 0x4(r30)
	  mr        r3, r31
	  lwz       r4, 0x10(r31)
	  bl        -0x22F5C
	  lwz       r4, 0x18(r31)
	  stw       r3, 0x8(r30)
	  cmplwi    r4, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x14(r31)
	  sub       r0, r4, r0
	  cmplwi    r0, 0x4
	  ble-      .loc_0x70
	  mr        r3, r31
	  bl        0x3450
	  stw       r3, 0xC(r30)
	  b         .loc_0x78

	.loc_0x70:
	  li        r0, 0
	  stw       r0, 0xC(r30)

	.loc_0x78:
	  lwz       r4, 0x1C(r31)
	  mr        r3, r31
	  bl        -0x1797C
	  stw       r3, 0x3C(r30)
	  mr        r3, r31
	  lwz       r4, 0x20(r31)
	  bl        -0x179A4
	  stw       r3, 0x10(r30)
	  mr        r3, r31
	  lwz       r4, 0x24(r31)
	  bl        -0x22FF0
	  stw       r3, 0x14(r30)
	  mr        r3, r31
	  lwz       r4, 0x28(r31)
	  bl        0x33EC
	  stw       r3, 0x18(r30)
	  mr        r3, r31
	  lwz       r4, 0x2C(r31)
	  bl        -0x179D4
	  stw       r3, 0x1C(r30)
	  mr        r3, r31
	  lwz       r4, 0x30(r31)
	  bl        0x33B4
	  stw       r3, 0x20(r30)
	  mr        r3, r31
	  lwz       r4, 0x34(r31)
	  bl        -0x23030
	  stw       r3, 0x24(r30)
	  mr        r3, r31
	  lwz       r4, 0x38(r31)
	  bl        0x337C
	  stw       r3, 0x28(r30)
	  mr        r3, r31
	  lwz       r4, 0x3C(r31)
	  bl        0x3354
	  stw       r3, 0x2C(r30)
	  mr        r3, r31
	  lwz       r4, 0x40(r31)
	  bl        0x332C
	  stw       r3, 0x30(r30)
	  mr        r3, r31
	  lwz       r4, 0x44(r31)
	  bl        0x331C
	  stw       r3, 0x34(r30)
	  mr        r3, r31
	  lwz       r4, 0x48(r31)
	  bl        -0x23050
	  stw       r3, 0x38(r30)
	  mr        r3, r31
	  lwz       r4, 0x4C(r31)
	  bl        0x32E4
	  stw       r3, 0x40(r30)
	  mr        r3, r31
	  lwz       r4, 0x50(r31)
	  bl        -0x17ADC
	  stw       r3, 0x44(r30)
	  mr        r3, r31
	  lwz       r4, 0x54(r31)
	  bl        -0x17A74
	  stw       r3, 0x48(r30)
	  mr        r3, r31
	  lwz       r4, 0x58(r31)
	  bl        -0x230C0
	  stw       r3, 0x4C(r30)
	  mr        r3, r31
	  lwz       r4, 0x5C(r31)
	  bl        0x328C
	  stw       r3, 0x50(r30)
	  mr        r3, r31
	  lwz       r4, 0x60(r31)
	  bl        0x3264
	  stw       r3, 0x54(r30)
	  mr        r3, r31
	  lwz       r4, 0x64(r31)
	  bl        0x323C
	  stw       r3, 0x58(r30)
	  mr        r3, r31
	  lwz       r4, 0x68(r31)
	  bl        0x3214
	  stw       r3, 0x5C(r30)
	  mr        r3, r31
	  lwz       r4, 0x6C(r31)
	  bl        0x31EC
	  stw       r3, 0x60(r30)
	  mr        r3, r31
	  lwz       r4, 0x70(r31)
	  bl        0x31C4
	  stw       r3, 0x64(r30)
	  mr        r3, r31
	  lwz       r4, 0x74(r31)
	  bl        0x319C
	  stw       r3, 0x68(r30)
	  mr        r3, r31
	  lwz       r4, 0x78(r31)
	  bl        -0x23140
	  stw       r3, 0x6C(r30)
	  mr        r3, r31
	  lwz       r4, 0x7C(r31)
	  bl        -0x23150
	  stw       r3, 0x70(r30)
	  mr        r3, r31
	  lwz       r4, 0x80(r31)
	  bl        0x3154
	  stw       r3, 0x74(r30)
	  li        r0, 0
	  mr        r3, r30
	  stw       r0, 0x78(r30)
	  stw       r0, 0x7C(r30)
	  stw       r0, 0x80(r30)
	  stw       r0, 0x84(r30)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006C5EC
 * Size:	000088
 */
void J3DMaterialFactory::J3DMaterialFactory(const J3DMaterialDLBlock&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lhz       r5, 0x8(r4)
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r4, 0xC(r4)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  sth       r5, 0x0(r30)
	  stw       r0, 0x4(r30)
	  bl        0x30D0
	  stw       r3, 0x78(r30)
	  mr        r3, r31
	  lwz       r4, 0x10(r31)
	  bl        0x30A8
	  stw       r3, 0x7C(r30)
	  mr        r3, r31
	  lwz       r4, 0x14(r31)
	  bl        0x3080
	  stw       r3, 0x80(r30)
	  mr        r3, r31
	  lwz       r4, 0x18(r31)
	  bl        -0x231FC
	  stw       r3, 0x84(r30)
	  mr        r3, r30
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
 * Address:	8006C674
 * Size:	000048
 */
void J3DMaterialFactory::countUniqueMaterials()
{
	/*
	.loc_0x0:
	  lhz       r5, 0x0(r3)
	  li        r6, 0
	  li        r7, -0x1
	  li        r8, 0
	  b         .loc_0x34

	.loc_0x14:
	  lwz       r4, 0x8(r3)
	  rlwinm    r0,r8,1,15,30
	  lhzx      r0, r4, r0
	  cmpw      r7, r0
	  bge-      .loc_0x30
	  mr        r7, r0
	  addi      r6, r6, 0x1

	.loc_0x30:
	  addi      r8, r8, 0x1

	.loc_0x34:
	  rlwinm    r0,r8,0,16,31
	  cmplw     r0, r5
	  blt+      .loc_0x14
	  mr        r3, r6
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void J3DMaterialFactory::countTexGens(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void J3DMaterialFactory::countStages(int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8006C6BC
 * Size:	00007C
 */
void J3DMaterialFactory::create(J3DMaterial*, J3DMaterialFactory::MaterialType,
                                int, unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0x1
	  stw       r0, 0x14(r1)
	  beq-      .loc_0x44
	  bge-      .loc_0x24
	  cmpwi     r5, 0
	  bge-      .loc_0x30
	  b         .loc_0x68

	.loc_0x24:
	  cmpwi     r5, 0x3
	  bge-      .loc_0x68
	  b         .loc_0x58

	.loc_0x30:
	  mr        r5, r6
	  mr        r6, r7
	  bl        .loc_0x7C
	  mr        r4, r3
	  b         .loc_0x68

	.loc_0x44:
	  mr        r5, r6
	  mr        r6, r7
	  bl        0x1578
	  mr        r4, r3
	  b         .loc_0x68

	.loc_0x58:
	  mr        r5, r6
	  mr        r6, r7
	  bl        0xA54
	  mr        r4, r3

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  mr        r3, r4
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x7C:
	*/
}

/*
 * --INFO--
 * Address:	8006C738
 * Size:	000A0C
 */
void J3DMaterialFactory::createNormalMaterial(J3DMaterial*, int,
                                              unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x120(r1)
	  mflr      r0
	  stw       r0, 0x124(r1)
	  lwz       r0, 0x78(r3)
	  stmw      r19, 0xEC(r1)
	  mr        r30, r3
	  cmplwi    r0, 0
	  mr        r31, r4
	  mr        r29, r5
	  beq-      .loc_0x30
	  bl        0x1520
	  b         .loc_0x9F8

	.loc_0x30:
	  lwz       r3, 0x8(r30)
	  rlwinm    r27,r29,1,0,30
	  li        r5, 0
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r27
	  mr        r3, r5
	  mulli     r0, r0, 0x14C
	  add       r4, r4, r0
	  lbz       r0, 0x4(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x64
	  lwz       r3, 0x4C(r30)
	  lbzx      r3, r3, r0

	.loc_0x64:
	  lhz       r0, 0x84(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x74
	  li        r5, 0x1

	.loc_0x74:
	  lhz       r0, 0x86(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x84
	  addi      r5, r5, 0x1

	.loc_0x84:
	  lhz       r0, 0x88(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x94
	  addi      r5, r5, 0x1

	.loc_0x94:
	  lhz       r0, 0x8A(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xA4
	  addi      r5, r5, 0x1

	.loc_0xA4:
	  lhz       r0, 0x8C(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB4
	  addi      r5, r5, 0x1

	.loc_0xB4:
	  lhz       r0, 0x8E(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC4
	  addi      r5, r5, 0x1

	.loc_0xC4:
	  lhz       r0, 0x90(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xD4
	  addi      r5, r5, 0x1

	.loc_0xD4:
	  lhz       r0, 0x92(r4)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE4
	  addi      r5, r5, 0x1

	.loc_0xE4:
	  cmplw     r3, r5
	  beq-      .loc_0x104
	  cmplwi    r5, 0
	  beq-      .loc_0x104
	  cmplw     r3, r5
	  ble-      .loc_0x108
	  mr        r5, r3
	  b         .loc_0x108

	.loc_0x104:
	  mr        r5, r3

	.loc_0x108:
	  rlwinm    r28,r6,16,27,31
	  cmplw     r5, r28
	  ble-      .loc_0x118
	  mr        r28, r5

	.loc_0x118:
	  cmplwi    r28, 0x8
	  li        r25, 0x8
	  bgt-      .loc_0x128
	  mr        r25, r28

	.loc_0x128:
	  lbz       r0, 0x3(r4)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x140
	  lwz       r3, 0x24(r30)
	  lbzx      r26, r3, r0
	  b         .loc_0x144

	.loc_0x140:
	  li        r26, 0

	.loc_0x144:
	  li        r0, 0x4
	  cmplwi    r31, 0
	  subc      r3, r0, r26
	  rlwinm    r23,r6,0,0,1
	  rlwinm    r0,r6,0,4,5
	  rlwinm    r22,r6,0,2,3
	  subfe     r3, r3, r3
	  rlwinm    r21,r6,8,31,31
	  andc      r24, r0, r3
	  bne-      .loc_0x1A4
	  li        r3, 0x4C
	  bl        -0x48A04
	  mr.       r31, r3
	  beq-      .loc_0x1A4
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x15D8
	  lis       r4, 0xF4
	  stw       r0, 0x0(r31)
	  subi      r5, r5, 0x3100
	  subi      r0, r4, 0x30C4
	  stw       r5, 0x40(r31)
	  stw       r0, 0x44(r31)
	  bl        -0xA140

	.loc_0x1A4:
	  mr        r3, r23
	  bl        -0xB400
	  stw       r3, 0x24(r31)
	  mr        r3, r24
	  bl        -0xB0B0
	  stw       r3, 0x28(r31)
	  rlwinm    r3,r28,0,16,31
	  bl        -0xAE8C
	  stw       r3, 0x2C(r31)
	  mr        r3, r21
	  bl        -0xA788
	  stw       r3, 0x30(r31)
	  mr        r3, r22
	  lwz       r4, 0x8(r30)
	  lwz       r5, 0x4(r30)
	  lhzx      r0, r4, r27
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xA590
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r5, 0x8(r30)
	  mr        r4, r29
	  sth       r29, 0x14(r31)
	  lwz       r6, 0x4(r30)
	  lhzx      r0, r5, r27
	  mulli     r0, r0, 0x14C
	  lbzx      r0, r6, r0
	  stw       r0, 0x10(r31)
	  bl        0x1AB0
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1EFC
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1CC4
	  mr        r4, r3
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x78
	  bl        0x29DC
	  lwz       r6, 0x78(r1)
	  addi      r4, r1, 0x88
	  lwz       r5, 0x7C(r1)
	  lwz       r3, 0x80(r1)
	  lwz       r0, 0x84(r1)
	  stw       r6, 0x88(r1)
	  stw       r5, 0x8C(r1)
	  stw       r3, 0x90(r1)
	  stw       r0, 0x94(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0xB4
	  bl        0x257C
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0xB4
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x4C
	  bl        0x27A0
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x48
	  bl        0x27F8
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x48
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x14
	  bl        0x284C
	  lhz       r0, 0x14(r1)
	  addi      r4, r1, 0x18
	  sth       r0, 0x18(r1)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x2880
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x2894
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1FA0
	  mr        r4, r3
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  b         .loc_0x40C

	.loc_0x3E0:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1D90
	  mr        r5, r3
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x40C:
	  rlwinm    r5,r19,0,24,31
	  cmplw     r5, r25
	  blt+      .loc_0x3E0
	  li        r19, 0
	  b         .loc_0x458

	.loc_0x420:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x40
	  bl        0x1D94
	  lwz       r0, 0x40(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x44
	  stw       r0, 0x44(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x458:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x420
	  lwz       r24, 0x4(r30)
	  li        r23, 0
	  lwz       r25, 0x8(r30)
	  b         .loc_0x54C

	.loc_0x474:
	  lhzx      r0, r27, r25
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x60
	  mulli     r0, r0, 0x14C
	  add       r20, r24, r0
	  bl        0x1F08
	  lwz       r3, 0x60(r1)
	  rlwinm    r21,r23,0,24,31
	  lwz       r0, 0x64(r1)
	  mr        r4, r21
	  stw       r3, 0x68(r1)
	  addi      r5, r1, 0x68
	  stw       r0, 0x6C(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r21,1,0,30
	  addi      r22, r3, 0x104
	  lhzx      r0, r20, r22
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x548
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r0,2,14,29
	  lwz       r5, 0x54(r30)
	  addi      r0, r4, 0x1
	  lwz       r12, 0x0(r3)
	  mr        r4, r21
	  lbzx      r19, r5, r0
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x7(r3)
	  rlwinm    r0,r19,2,22,29
	  lwz       r5, 0x54(r30)
	  mr        r4, r21
	  rlwinm    r6,r6,0,30,27
	  or        r0, r6, r0
	  stb       r0, 0x7(r3)
	  lwz       r3, 0x2C(r31)
	  lhzx      r0, r20, r22
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0xA4(r12)
	  lbzx      r19, r5, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x7(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r19
	  stb       r0, 0x7(r3)

	.loc_0x548:
	  addi      r23, r23, 0x1

	.loc_0x54C:
	  rlwinm    r6,r23,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x474
	  li        r19, 0
	  b         .loc_0x594

	.loc_0x560:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x3C
	  rlwinm    r6,r19,0,24,31
	  bl        0x1D5C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x594:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x560
	  li        r19, 0
	  b         .loc_0x5DC

	.loc_0x5A8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x58
	  rlwinm    r6,r19,0,24,31
	  bl        0x1C7C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x58
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x5DC:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x5A8
	  li        r19, 0
	  b         .loc_0x62C

	.loc_0x5F0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  rlwinm    r6,r19,0,24,31
	  bl        0x1E54
	  lbz       r0, 0x8(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0xC
	  stb       r0, 0xC(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xB4(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x62C:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x5F0
	  li        r19, 0
	  b         .loc_0x674

	.loc_0x640:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x38
	  rlwinm    r6,r19,0,24,31
	  bl        0x1844
	  lwz       r3, 0x24(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x38
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x674:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x640
	  li        r19, 0
	  b         .loc_0x6BC

	.loc_0x688:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x34
	  rlwinm    r6,r19,0,24,31
	  bl        0x15A0
	  lwz       r3, 0x24(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x34
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x6BC:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x688
	  li        r19, 0
	  b         .loc_0x70C

	.loc_0x6D0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x10
	  rlwinm    r6,r19,0,24,31
	  bl        0x1620
	  lhz       r0, 0x10(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x1C
	  sth       r0, 0x1C(r1)
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x70C:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x6D0
	  li        r19, 0
	  b         .loc_0x760

	.loc_0x720:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x50
	  bl        0x1830
	  lwz       r3, 0x50(r1)
	  rlwinm    r4,r19,0,24,31
	  lhz       r0, 0x54(r1)
	  addi      r5, r1, 0x70
	  stw       r3, 0x70(r1)
	  sth       r0, 0x74(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x760:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r26
	  blt+      .loc_0x720
	  li        r19, 0
	  b         .loc_0x7A4

	.loc_0x774:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r19,0,24,31
	  bl        0x1860
	  mr        r5, r3
	  lwz       r3, 0x28(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x7A4:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x774
	  lwz       r3, 0x8(r30)
	  li        r20, 0
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r27
	  mulli     r0, r0, 0x14C
	  add       r19, r4, r0
	  b         .loc_0x814

	.loc_0x7CC:
	  rlwinm    r4,r20,0,24,31
	  addi      r0, r4, 0x9C
	  lbzx      r5, r19, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x7F8
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x810

	.loc_0x7F8:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x810:
	  addi      r20, r20, 0x1

	.loc_0x814:
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x7CC
	  li        r20, 0
	  b         .loc_0x870

	.loc_0x828:
	  rlwinm    r4,r20,0,24,31
	  addi      r0, r4, 0xAC
	  lbzx      r5, r19, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x854
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x86C

	.loc_0x854:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0x1C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0x86C:
	  addi      r20, r20, 0x1

	.loc_0x870:
	  rlwinm    r0,r20,0,24,31
	  cmplw     r0, r28
	  blt+      .loc_0x828
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x9F4
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1C60
	  mr        r21, r3
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1C50
	  mr        r4, r3
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r21,0,24,31
	  li        r19, 0
	  b         .loc_0x8FC

	.loc_0x8C8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x98
	  rlwinm    r6,r19,0,24,31
	  bl        0x1CA0
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x98
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x8FC:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x8C8
	  rlwinm    r20,r21,0,24,31
	  li        r19, 0
	  b         .loc_0x950

	.loc_0x914:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x2C
	  rlwinm    r6,r19,0,24,31
	  bl        0x1BF4
	  lwz       r0, 0x2C(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x30
	  stw       r0, 0x30(r1)
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x950:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x914
	  rlwinm    r20,r21,0,24,31
	  li        r19, 0
	  b         .loc_0x99C

	.loc_0x968:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x28
	  rlwinm    r6,r19,0,24,31
	  bl        0x1E74
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x28
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x99C:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x968
	  li        r19, 0
	  b         .loc_0x9E8

	.loc_0x9B0:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  bl        0x1C9C
	  lwz       r0, 0x20(r1)
	  rlwinm    r4,r19,0,24,31
	  addi      r5, r1, 0x24
	  stw       r0, 0x24(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x9E8:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0x9B0

	.loc_0x9F4:
	  mr        r3, r31

	.loc_0x9F8:
	  lmw       r19, 0xEC(r1)
	  lwz       r0, 0x124(r1)
	  mtlr      r0
	  addi      r1, r1, 0x120
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D144
 * Size:	000004
 */
void J3DTevBlock::setIndTevStage(unsigned long, J3DIndTevStage)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D148
 * Size:	000004
 */
void J3DTevBlock::setTevKAlphaSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D14C
 * Size:	000004
 */
void J3DTevBlock::setTevKColorSel(unsigned long, unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D150
 * Size:	000004
 */
void J3DTevBlock::setTevSwapModeTable(unsigned long, J3DTevSwapModeTable)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D154
 * Size:	000004
 */
void J3DTevBlock::setTevColor(unsigned long, J3DGXColorS10)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D158
 * Size:	000004
 */
void J3DTevBlock::setTevKColor(unsigned long, J3DGXColor)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D15C
 * Size:	000008
 */
void J3DTevBlock::getTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D164
 * Size:	000004
 */
void J3DTevBlock::setTevStage(unsigned long, J3DTevStage)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D168
 * Size:	000004
 */
void J3DTevBlock::setTevOrder(unsigned long, J3DTevOrder)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D16C
 * Size:	000004
 */
void J3DTevBlock::setTevStageNum(unsigned char)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006D170
 * Size:	000924
 */
void J3DMaterialFactory::createPatchedMaterial(J3DMaterial*, int,
                                               unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0xF0(r1)
	  mflr      r0
	  stw       r0, 0xF4(r1)
	  stmw      r18, 0xB8(r1)
	  mr.       r31, r4
	  mr        r30, r3
	  mr        r29, r5
	  mr        r18, r6
	  bne-      .loc_0x74
	  li        r3, 0x4C
	  bl        -0x492F4
	  mr.       r19, r3
	  beq-      .loc_0x70
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x15D8
	  stw       r0, 0x0(r19)
	  subi      r5, r5, 0x3100
	  lis       r4, 0xF4
	  stw       r5, 0x40(r19)
	  subi      r0, r4, 0x30C4
	  stw       r0, 0x44(r19)
	  bl        -0xAA30
	  lis       r4, 0x804A
	  mr        r3, r19
	  addi      r0, r4, 0x15A8
	  stw       r0, 0x0(r19)
	  bl        -0x99FC

	.loc_0x70:
	  mr        r31, r19

	.loc_0x74:
	  rlwinm    r4,r18,0,6,7
	  lis       r3, 0x4000
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r28,r0,1,31,31
	  bl        -0xBD18
	  stw       r3, 0x24(r31)
	  li        r3, 0x5C
	  bl        -0x49360
	  mr.       r19, r3
	  beq-      .loc_0xE0
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x171C
	  mr        r18, r19
	  stw       r0, 0x0(r19)
	  addi      r0, r3, 0x27CC
	  lis       r4, 0x8006
	  addi      r3, r18, 0x8
	  stw       r0, 0x0(r19)
	  addi      r4, r4, 0x19FC
	  li        r5, 0
	  li        r6, 0x6
	  li        r7, 0x8
	  bl        0x545F8
	  mr        r3, r18
	  bl        0xA0D4

	.loc_0xE0:
	  stw       r19, 0x28(r31)
	  li        r3, 0xD8
	  bl        -0x493B4
	  mr.       r25, r3
	  beq-      .loc_0x1A4
	  lis       r4, 0x804A
	  lis       r3, 0x804A
	  addi      r0, r4, 0x2B08
	  mr        r20, r25
	  stw       r0, 0x0(r25)
	  addi      r0, r3, 0x2618
	  lis       r4, 0x8006
	  addi      r3, r20, 0x18
	  stw       r0, 0x0(r25)
	  addi      r4, r4, 0x2114
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x8
	  bl        0x545A4
	  lis       r4, 0x8006
	  addi      r3, r20, 0x38
	  addi      r4, r4, 0x1ED4
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x8
	  bl        0x54588
	  lis       r4, 0x8006
	  addi      r3, r20, 0x78
	  addi      r4, r4, 0x1DF0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x8
	  bl        0x5456C
	  lis       r4, 0x8006
	  addi      r3, r20, 0x98
	  addi      r4, r4, 0x1DEC
	  li        r5, 0
	  li        r6, 0x8
	  li        r7, 0x4
	  bl        0x54550
	  lis       r4, 0x8006
	  addi      r3, r20, 0xB8
	  addi      r4, r4, 0x17F0
	  li        r5, 0
	  li        r6, 0x4
	  li        r7, 0x4
	  bl        0x54534
	  mr        r3, r20
	  bl        0xA09C

	.loc_0x1A4:
	  stw       r25, 0x2C(r31)
	  mr        r3, r28
	  bl        -0xB1A0
	  stw       r3, 0x30(r31)
	  rlwinm    r24,r29,1,0,30
	  lwz       r4, 0x8(r30)
	  lis       r3, 0x1000
	  lwz       r5, 0x4(r30)
	  lhzx      r0, r4, r24
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xAFAC
	  stw       r3, 0x34(r31)
	  mr        r3, r30
	  lwz       r5, 0x8(r30)
	  mr        r4, r29
	  sth       r29, 0x14(r31)
	  lwz       r6, 0x4(r30)
	  lhzx      r0, r5, r24
	  mulli     r0, r0, 0x14C
	  lbzx      r0, r6, r0
	  stw       r0, 0x10(r31)
	  bl        0x1728
	  mr        r4, r3
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x94(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1070
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x14BC
	  mr        r4, r3
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x6C(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x88
	  bl        0x1BA8
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x88
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x40
	  bl        0x1DCC
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x40
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x3C
	  bl        0x1E24
	  lwz       r3, 0x34(r31)
	  addi      r4, r1, 0x3C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0xC
	  bl        0x1E78
	  lhz       r0, 0xC(r1)
	  addi      r4, r1, 0x10
	  sth       r0, 0x10(r1)
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1EAC
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x5C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1EC0
	  mr        r4, r3
	  lwz       r3, 0x34(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x98(r12)
	  mtctr     r12
	  bctrl
	  mr        r25, r3
	  li        r18, 0
	  b         .loc_0x3A0

	.loc_0x370:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r18,0,24,31
	  bl        0x13C4
	  mr        r5, r3
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r18,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x3A0:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x370
	  rlwinm    r19,r25,0,24,31
	  li        r18, 0
	  b         .loc_0x3F4

	.loc_0x3B8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x34
	  rlwinm    r6,r18,0,24,31
	  bl        0x13C0
	  lwz       r0, 0x34(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x38
	  stw       r0, 0x38(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x3F4:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r19
	  blt+      .loc_0x3B8
	  li        r18, 0
	  b         .loc_0x43C

	.loc_0x408:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x30
	  rlwinm    r6,r18,0,24,31
	  bl        0x147C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x43C:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x408
	  li        r18, 0
	  b         .loc_0x484

	.loc_0x450:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x5C
	  rlwinm    r6,r18,0,24,31
	  bl        0x139C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x5C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x484:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x450
	  lwz       r26, 0x4(r30)
	  rlwinm    r19,r25,0,24,31
	  lwz       r27, 0x8(r30)
	  li        r21, 0
	  b         .loc_0x580

	.loc_0x4A4:
	  lhzx      r0, r24, r27
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x4C
	  mulli     r0, r0, 0x14C
	  rlwinm    r6,r21,0,24,31
	  add       r20, r26, r0
	  bl        0x149C
	  lwz       r3, 0x4C(r1)
	  rlwinm    r23,r21,0,24,31
	  lwz       r0, 0x50(r1)
	  mr        r4, r23
	  stw       r3, 0x54(r1)
	  addi      r5, r1, 0x54
	  stw       r0, 0x58(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xA0(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r3,r23,1,0,30
	  addi      r22, r3, 0x104
	  lhzx      r0, r20, r22
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x57C
	  lwz       r3, 0x2C(r31)
	  rlwinm    r4,r0,2,14,29
	  lwz       r5, 0x54(r30)
	  addi      r0, r4, 0x1
	  lwz       r12, 0x0(r3)
	  mr        r4, r23
	  lbzx      r18, r5, r0
	  lwz       r12, 0xA4(r12)
	  mtctr     r12
	  bctrl
	  lbz       r6, 0x7(r3)
	  rlwinm    r0,r18,2,22,29
	  lwz       r5, 0x54(r30)
	  mr        r4, r23
	  rlwinm    r6,r6,0,30,27
	  or        r0, r6, r0
	  stb       r0, 0x7(r3)
	  lwz       r3, 0x2C(r31)
	  lhzx      r0, r20, r22
	  lwz       r12, 0x0(r3)
	  rlwinm    r0,r0,2,0,29
	  lwz       r12, 0xA4(r12)
	  lbzx      r18, r5, r0
	  mtctr     r12
	  bctrl
	  lbz       r0, 0x7(r3)
	  rlwinm    r0,r0,0,0,29
	  or        r0, r0, r18
	  stb       r0, 0x7(r3)

	.loc_0x57C:
	  addi      r21, r21, 0x1

	.loc_0x580:
	  rlwinm    r0,r21,0,24,31
	  cmplw     r0, r19
	  blt+      .loc_0x4A4
	  lwz       r3, 0x8(r30)
	  rlwinm    r20,r25,0,24,31
	  lwz       r4, 0x4(r30)
	  li        r19, 0
	  lhzx      r0, r3, r24
	  mulli     r0, r0, 0x14C
	  add       r18, r4, r0
	  b         .loc_0x5F4

	.loc_0x5AC:
	  rlwinm    r4,r19,0,24,31
	  addi      r0, r4, 0x9C
	  lbzx      r5, r18, r0
	  cmplwi    r5, 0xFF
	  beq-      .loc_0x5D8
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x5F0

	.loc_0x5D8:
	  lwz       r3, 0x2C(r31)
	  li        r5, 0xC
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5F0:
	  addi      r19, r19, 0x1

	.loc_0x5F4:
	  rlwinm    r0,r19,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x5AC
	  li        r18, 0
	  b         .loc_0x63C

	.loc_0x608:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x2C
	  rlwinm    r6,r18,0,24,31
	  bl        0xBE8
	  lwz       r3, 0x24(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x2C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x63C:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x2
	  blt+      .loc_0x608
	  li        r18, 0
	  b         .loc_0x68C

	.loc_0x650:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x8
	  rlwinm    r6,r18,0,24,31
	  bl        0xC68
	  lhz       r0, 0x8(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x14
	  sth       r0, 0x14(r1)
	  lwz       r3, 0x24(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x68C:
	  rlwinm    r0,r18,0,24,31
	  cmplwi    r0, 0x4
	  blt+      .loc_0x650
	  lwz       r3, 0x8(r30)
	  lwz       r4, 0x4(r30)
	  lhzx      r0, r3, r24
	  mulli     r3, r0, 0x14C
	  addi      r0, r3, 0x3
	  lbzx      r0, r4, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x6C4
	  lwz       r3, 0x24(r30)
	  lbzx      r18, r3, r0
	  b         .loc_0x6C8

	.loc_0x6C4:
	  li        r18, 0

	.loc_0x6C8:
	  mr        r3, r30
	  mr        r4, r29
	  bl        0xE1C
	  mr        r4, r3
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  li        r19, 0
	  b         .loc_0x724

	.loc_0x6F4:
	  mr        r3, r30
	  mr        r4, r29
	  rlwinm    r5,r19,0,24,31
	  bl        0xEA8
	  mr        r5, r3
	  lwz       r3, 0x28(r31)
	  rlwinm    r4,r19,0,24,31
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x724:
	  rlwinm    r0,r19,0,24,31
	  cmplwi    r0, 0x8
	  blt+      .loc_0x6F4
	  li        r19, 0
	  b         .loc_0x778

	.loc_0x738:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x44
	  bl        0xDE0
	  lwz       r3, 0x44(r1)
	  rlwinm    r4,r19,0,24,31
	  lhz       r0, 0x48(r1)
	  addi      r5, r1, 0x64
	  stw       r3, 0x64(r1)
	  sth       r0, 0x68(r1)
	  lwz       r3, 0x28(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  addi      r19, r19, 0x1

	.loc_0x778:
	  rlwinm    r6,r19,0,24,31
	  cmplw     r6, r18
	  blt+      .loc_0x738
	  cmplwi    r28, 0
	  beq-      .loc_0x90C
	  lwz       r0, 0xC(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x90C
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1318
	  mr        r21, r3
	  mr        r3, r30
	  mr        r4, r29
	  bl        0x1308
	  mr        r4, r3
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r20,r21,0,24,31
	  li        r18, 0
	  b         .loc_0x80C

	.loc_0x7D8:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x6C
	  rlwinm    r6,r18,0,24,31
	  bl        0x1358
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x6C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x80C:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x7D8
	  rlwinm    r20,r21,0,24,31
	  li        r18, 0
	  b         .loc_0x860

	.loc_0x824:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x24
	  rlwinm    r6,r18,0,24,31
	  bl        0x12AC
	  lwz       r0, 0x24(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x28
	  stw       r0, 0x28(r1)
	  lwz       r3, 0x30(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x24(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x860:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x824
	  rlwinm    r20,r21,0,24,31
	  li        r18, 0
	  b         .loc_0x8AC

	.loc_0x878:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x20
	  rlwinm    r6,r18,0,24,31
	  bl        0x152C
	  lwz       r3, 0x30(r31)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x20
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x8AC:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x878
	  rlwinm    r20,r25,0,24,31
	  li        r18, 0
	  b         .loc_0x900

	.loc_0x8C4:
	  mr        r4, r30
	  mr        r5, r29
	  addi      r3, r1, 0x18
	  rlwinm    r6,r18,0,24,31
	  bl        0x134C
	  lwz       r0, 0x18(r1)
	  rlwinm    r4,r18,0,24,31
	  addi      r5, r1, 0x1C
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x2C(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC0(r12)
	  mtctr     r12
	  bctrl
	  addi      r18, r18, 0x1

	.loc_0x900:
	  rlwinm    r0,r18,0,24,31
	  cmplw     r0, r20
	  blt+      .loc_0x8C4

	.loc_0x90C:
	  mr        r3, r31
	  lmw       r18, 0xB8(r1)
	  lwz       r0, 0xF4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xF0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006DA94
 * Size:	000048
 */
void J3DMaterial::~J3DMaterial()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  beq-      .loc_0x30
	  lis       r5, 0x804A
	  extsh.    r0, r4
	  addi      r0, r5, 0x15D8
	  stw       r0, 0x0(r31)
	  ble-      .loc_0x30
	  bl        -0x49A0C

	.loc_0x30:
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
 * Address:	8006DADC
 * Size:	0001A4
 */
void J3DMaterialFactory::modifyPatchedCurrentMtx(J3DMaterial*, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  lis       r6, 0x8048
	  stw       r0, 0x64(r1)
	  rlwinm    r0,r5,1,0,30
	  subi      r6, r6, 0x7758
	  stmw      r27, 0x4C(r1)
	  mr        r29, r3
	  lwz       r3, 0x8(r3)
	  mr        r31, r5
	  mr        r30, r4
	  lwz       r5, 0x4(r29)
	  lhzx      r0, r3, r0
	  lbz       r7, 0x2(r6)
	  mulli     r3, r0, 0x14C
	  lbz       r4, 0x0(r6)
	  lbz       r6, 0x1(r6)
	  stb       r4, 0x10(r1)
	  addi      r0, r3, 0x3
	  lbzx      r0, r5, r0
	  stb       r6, 0x11(r1)
	  cmplwi    r0, 0xFF
	  stb       r7, 0x12(r1)
	  sth       r7, 0x14(r1)
	  stb       r4, 0x16(r1)
	  stb       r6, 0x17(r1)
	  stb       r7, 0x18(r1)
	  sth       r7, 0x1A(r1)
	  stb       r4, 0x1C(r1)
	  stb       r6, 0x1D(r1)
	  stb       r7, 0x1E(r1)
	  sth       r7, 0x20(r1)
	  stb       r4, 0x22(r1)
	  stb       r6, 0x23(r1)
	  stb       r7, 0x24(r1)
	  sth       r7, 0x26(r1)
	  stb       r4, 0x28(r1)
	  stb       r6, 0x29(r1)
	  stb       r7, 0x2A(r1)
	  sth       r7, 0x2C(r1)
	  stb       r4, 0x2E(r1)
	  stb       r6, 0x2F(r1)
	  stb       r7, 0x30(r1)
	  sth       r7, 0x32(r1)
	  stb       r4, 0x34(r1)
	  stb       r6, 0x35(r1)
	  stb       r7, 0x36(r1)
	  sth       r7, 0x38(r1)
	  stb       r4, 0x3A(r1)
	  stb       r6, 0x3B(r1)
	  stb       r7, 0x3C(r1)
	  sth       r7, 0x3E(r1)
	  beq-      .loc_0xE0
	  lwz       r3, 0x24(r29)
	  lbzx      r28, r3, r0
	  b         .loc_0xE4

	.loc_0xE0:
	  li        r28, 0

	.loc_0xE4:
	  li        r27, 0
	  b         .loc_0x128

	.loc_0xEC:
	  mr        r4, r29
	  mr        r5, r31
	  addi      r3, r1, 0x8
	  bl        0xAC0
	  rlwinm    r0,r27,0,24,31
	  addi      r6, r1, 0x10
	  mulli     r4, r0, 0x6
	  lbz       r5, 0x8(r1)
	  lbz       r3, 0x9(r1)
	  addi      r27, r27, 0x1
	  lbz       r0, 0xA(r1)
	  add       r6, r6, r4
	  stb       r5, 0x0(r6)
	  stb       r3, 0x1(r6)
	  stb       r0, 0x2(r6)

	.loc_0x128:
	  rlwinm    r6,r27,0,24,31
	  cmplw     r6, r28
	  blt+      .loc_0xEC
	  lbz       r3, 0x12(r1)
	  lbz       r0, 0x18(r1)
	  lbz       r4, 0x1E(r1)
	  rlwinm    r3,r3,6,0,25
	  rlwinm    r0,r0,12,0,19
	  lbz       r7, 0x30(r1)
	  lbz       r5, 0x24(r1)
	  rlwinm    r4,r4,18,0,13
	  or        r0, r3, r0
	  lbz       r3, 0x36(r1)
	  lbz       r6, 0x3C(r1)
	  rlwinm    r5,r5,24,0,7
	  or        r4, r4, r0
	  lbz       r8, 0x2A(r1)
	  rlwinm    r0,r7,6,18,25
	  rlwinm    r3,r3,12,12,19
	  or        r5, r5, r4
	  rlwinm    r4,r6,18,6,13
	  or        r0, r8, r0
	  stw       r5, 0x40(r30)
	  or        r0, r3, r0
	  or        r0, r4, r0
	  stw       r0, 0x44(r30)
	  lmw       r27, 0x4C(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006DC80
 * Size:	0002B8
 */
void J3DMaterialFactory::createLockedMaterial(J3DMaterial*, int,
                                              unsigned long) const
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
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x168
	  li        r3, 0x4C
	  bl        -0x49E0C
	  mr.       r29, r3
	  beq-      .loc_0x78
	  lis       r4, 0x804A
	  lis       r5, 0x3CF4
	  addi      r0, r4, 0x15D8
	  stw       r0, 0x0(r29)
	  subi      r5, r5, 0x3100
	  lis       r4, 0xF4
	  stw       r5, 0x40(r29)
	  subi      r0, r4, 0x30C4
	  stw       r0, 0x44(r29)
	  bl        -0xB548
	  lis       r4, 0x804A
	  mr        r3, r29
	  addi      r0, r4, 0x1578
	  stw       r0, 0x0(r29)
	  bl        -0xA458

	.loc_0x78:
	  li        r3, 0x4
	  bl        -0x49E58
	  cmplwi    r3, 0
	  beq-      .loc_0xA0
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x1788
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1DA4
	  stw       r0, 0x0(r3)

	.loc_0xA0:
	  stw       r3, 0x24(r29)
	  li        r3, 0x4
	  bl        -0x49E84
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x171C
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1D38
	  stw       r0, 0x0(r3)

	.loc_0xCC:
	  stw       r3, 0x28(r29)
	  li        r3, 0x8
	  bl        -0x49EB0
	  mr.       r31, r3
	  beq-      .loc_0xFC
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x2B08
	  stw       r0, 0x0(r31)
	  addi      r0, r4, 0x1C5C
	  stw       r0, 0x0(r31)
	  bl        0x9628

	.loc_0xFC:
	  stw       r31, 0x2C(r29)
	  li        r3, 0x4
	  bl        -0x49EE0
	  cmplwi    r3, 0
	  beq-      .loc_0x128
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x16D0
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1684
	  stw       r0, 0x0(r3)

	.loc_0x128:
	  stw       r3, 0x30(r29)
	  li        r3, 0x4
	  bl        -0x49F0C
	  cmplwi    r3, 0
	  beq-      .loc_0x154
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  addi      r0, r5, 0x1608
	  stw       r0, 0x0(r3)
	  addi      r0, r4, 0x1BE0
	  stw       r0, 0x0(r3)

	.loc_0x154:
	  stw       r3, 0x34(r29)
	  lwz       r3, 0x84(r28)
	  sth       r30, 0x14(r29)
	  lbzx      r0, r3, r30
	  stw       r0, 0x10(r29)

	.loc_0x168:
	  lwz       r0, 0x80(r28)
	  rlwinm    r31,r30,3,0,28
	  lwz       r4, 0x7C(r28)
	  rlwinm    r30,r30,4,0,27
	  add       r3, r0, r31
	  lwz       r0, 0x0(r3)
	  stw       r0, 0x40(r29)
	  lwz       r0, 0x4(r3)
	  stw       r0, 0x44(r29)
	  lwz       r3, 0x24(r29)
	  lhzx      r4, r4, r30
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x24(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0x80(r12)
	  lhz       r4, 0x2(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x28(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0x64(r12)
	  lhz       r4, 0x4(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0xD0(r12)
	  lhz       r4, 0x6(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x2C(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0xD4(r12)
	  lhz       r4, 0x8(r4)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x34(r29)
	  lwz       r0, 0x7C(r28)
	  lwz       r12, 0x0(r3)
	  add       r4, r0, r30
	  lwz       r12, 0x74(r12)
	  lhz       r4, 0xA(r4)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x48(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x294
	  li        r3, 0x10
	  bl        -0x4A030
	  cmplwi    r3, 0
	  beq-      .loc_0x274
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  stw       r0, 0x4(r3)
	  stw       r0, 0x8(r3)
	  stw       r0, 0xC(r3)

	.loc_0x274:
	  lwz       r0, 0x78(r28)
	  stw       r3, 0x48(r29)
	  add       r4, r0, r31
	  lwz       r0, 0x0(r4)
	  lwz       r3, 0x48(r29)
	  lwz       r5, 0x4(r4)
	  add       r4, r0, r4
	  bl        -0xE5C4

	.loc_0x294:
	  lwz       r0, 0x24(r1)
	  mr        r3, r29
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
 * Address:	8006DF38
 * Size:	000004
 */
void J3DTevBlock::setTevRegOffset(unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006DF3C
 * Size:	000008
 */
void J3DTevBlock::setTexNoOffset(unsigned long)
{
	/*
	.loc_0x0:
	  stw       r4, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006DF44
 * Size:	000080
 */
void J3DMaterialFactory::calcSize(J3DMaterial*,
                                  J3DMaterialFactory::MaterialType, int,
                                  unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  cmpwi     r5, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  beq-      .loc_0x48
	  bge-      .loc_0x28
	  cmpwi     r5, 0
	  bge-      .loc_0x34
	  b         .loc_0x6C

	.loc_0x28:
	  cmpwi     r5, 0x3
	  bge-      .loc_0x6C
	  b         .loc_0x5C

	.loc_0x34:
	  mr        r5, r6
	  mr        r6, r7
	  bl        .loc_0x80
	  mr        r0, r3
	  b         .loc_0x6C

	.loc_0x48:
	  mr        r5, r6
	  mr        r6, r7
	  bl        0x3C4
	  mr        r0, r3
	  b         .loc_0x6C

	.loc_0x5C:
	  mr        r5, r6
	  mr        r6, r7
	  bl        0x274
	  mr        r0, r3

	.loc_0x6C:
	  mr        r3, r0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x80:
	*/
}

/*
 * --INFO--
 * Address:	8006DFC4
 * Size:	000258
 */
void J3DMaterialFactory::calcSizeNormalMaterial(J3DMaterial*, int,
                                                unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  lwz       r0, 0x78(r3)
	  stmw      r25, 0x14(r1)
	  mr        r29, r3
	  cmplwi    r0, 0
	  li        r30, 0
	  beq-      .loc_0x2C
	  bl        0x370
	  b         .loc_0x244

	.loc_0x2C:
	  lwz       r3, 0x8(r29)
	  rlwinm    r31,r5,1,0,30
	  li        r7, 0
	  lwz       r5, 0x4(r29)
	  lhzx      r0, r3, r31
	  mr        r3, r7
	  mulli     r0, r0, 0x14C
	  add       r5, r5, r0
	  lbz       r0, 0x4(r5)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x60
	  lwz       r3, 0x4C(r29)
	  lbzx      r3, r3, r0

	.loc_0x60:
	  lhz       r0, 0x84(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x70
	  li        r7, 0x1

	.loc_0x70:
	  lhz       r0, 0x86(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x80
	  addi      r7, r7, 0x1

	.loc_0x80:
	  lhz       r0, 0x88(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x90
	  addi      r7, r7, 0x1

	.loc_0x90:
	  lhz       r0, 0x8A(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xA0
	  addi      r7, r7, 0x1

	.loc_0xA0:
	  lhz       r0, 0x8C(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB0
	  addi      r7, r7, 0x1

	.loc_0xB0:
	  lhz       r0, 0x8E(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC0
	  addi      r7, r7, 0x1

	.loc_0xC0:
	  lhz       r0, 0x90(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xD0
	  addi      r7, r7, 0x1

	.loc_0xD0:
	  lhz       r0, 0x92(r5)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE0
	  addi      r7, r7, 0x1

	.loc_0xE0:
	  cmplw     r3, r7
	  beq-      .loc_0x100
	  cmplwi    r7, 0
	  beq-      .loc_0x100
	  cmplw     r3, r7
	  ble-      .loc_0x104
	  mr        r7, r3
	  b         .loc_0x104

	.loc_0x100:
	  mr        r7, r3

	.loc_0x104:
	  rlwinm    r28,r6,16,27,31
	  cmplw     r7, r28
	  ble-      .loc_0x114
	  mr        r28, r7

	.loc_0x114:
	  lbz       r0, 0x3(r5)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x12C
	  lwz       r3, 0x24(r29)
	  lbzx      r3, r3, r0
	  b         .loc_0x130

	.loc_0x12C:
	  li        r3, 0

	.loc_0x130:
	  li        r0, 0x4
	  cmplwi    r4, 0
	  subc      r3, r0, r3
	  rlwinm    r26,r6,0,2,3
	  subfe     r4, r3, r3
	  rlwinm    r0,r6,0,4,5
	  rlwinm    r3,r6,0,0,1
	  rlwinm    r25,r6,8,31,31
	  andc      r27, r0, r4
	  bne-      .loc_0x15C
	  li        r30, 0x4C

	.loc_0x15C:
	  bl        -0xBAC8
	  add       r30, r30, r3
	  mr        r3, r27
	  bl        -0xBA84
	  rlwinm    r0,r28,0,16,31
	  add       r30, r30, r3
	  mr        r3, r0
	  bl        -0xBA68
	  add       r30, r30, r3
	  mr        r3, r25
	  bl        -0xBA2C
	  lwz       r4, 0x8(r29)
	  add       r30, r30, r3
	  lwz       r5, 0x4(r29)
	  mr        r3, r26
	  lhzx      r0, r4, r31
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xBA38
	  lwz       r4, 0x8(r29)
	  add       r30, r30, r3
	  lwz       r3, 0x4(r29)
	  lhzx      r0, r4, r31
	  mulli     r0, r0, 0x14C
	  add       r3, r3, r0
	  lhz       r0, 0x48(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x1D0
	  addi      r30, r30, 0x94

	.loc_0x1D0:
	  lhz       r0, 0x4A(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x1E0
	  addi      r30, r30, 0x94

	.loc_0x1E0:
	  lhz       r0, 0x4C(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x1F0
	  addi      r30, r30, 0x94

	.loc_0x1F0:
	  lhz       r0, 0x4E(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x200
	  addi      r30, r30, 0x94

	.loc_0x200:
	  lhz       r0, 0x50(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x210
	  addi      r30, r30, 0x94

	.loc_0x210:
	  lhz       r0, 0x52(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x220
	  addi      r30, r30, 0x94

	.loc_0x220:
	  lhz       r0, 0x54(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x230
	  addi      r30, r30, 0x94

	.loc_0x230:
	  lhz       r0, 0x56(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x240
	  addi      r30, r30, 0x94

	.loc_0x240:
	  mr        r3, r30

	.loc_0x244:
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E21C
 * Size:	00013C
 */
void J3DMaterialFactory::calcSizePatchedMaterial(J3DMaterial*, int,
                                                 unsigned long) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  cmplwi    r4, 0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bne-      .loc_0x34
	  li        r30, 0x4C

	.loc_0x34:
	  rlwinm    r4,r6,0,6,7
	  lis       r3, 0x4000
	  neg       r0, r4
	  or        r0, r0, r4
	  rlwinm    r31,r0,1,31,31
	  bl        -0xBC0C
	  add       r30, r30, r3
	  mr        r3, r31
	  addi      r30, r30, 0x134
	  bl        -0xBB58
	  lwz       r4, 0x8(r28)
	  rlwinm    r31,r29,1,0,30
	  add       r30, r30, r3
	  lwz       r5, 0x4(r28)
	  lhzx      r0, r4, r31
	  lis       r3, 0x1000
	  mulli     r0, r0, 0x14C
	  lbzx      r4, r5, r0
	  bl        -0xBB68
	  lwz       r4, 0x8(r28)
	  add       r30, r30, r3
	  lwz       r3, 0x4(r28)
	  lhzx      r0, r4, r31
	  mulli     r0, r0, 0x14C
	  add       r3, r3, r0
	  lhz       r0, 0x48(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xA8
	  addi      r30, r30, 0x94

	.loc_0xA8:
	  lhz       r0, 0x4A(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xB8
	  addi      r30, r30, 0x94

	.loc_0xB8:
	  lhz       r0, 0x4C(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xC8
	  addi      r30, r30, 0x94

	.loc_0xC8:
	  lhz       r0, 0x4E(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xD8
	  addi      r30, r30, 0x94

	.loc_0xD8:
	  lhz       r0, 0x50(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE8
	  addi      r30, r30, 0x94

	.loc_0xE8:
	  lhz       r0, 0x52(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xF8
	  addi      r30, r30, 0x94

	.loc_0xF8:
	  lhz       r0, 0x54(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x108
	  addi      r30, r30, 0x94

	.loc_0x108:
	  lhz       r0, 0x56(r3)
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x118
	  addi      r30, r30, 0x94

	.loc_0x118:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	8006E358
 * Size:	000018
 */
void J3DMaterialFactory::calcSizeLockedMaterial(J3DMaterial*, int,
                                                unsigned long) const
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  li        r3, 0
	  bne-      .loc_0x10
	  li        r3, 0x64

	.loc_0x10:
	  addi      r3, r3, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E370
 * Size:	000090
 */
void J3DMaterialFactory::newMatColor(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  lwz       r8, -0x78E0(r2)
	  lhzx      r5, r7, r5
	  stw       r8, 0x8(r1)
	  mulli     r5, r5, 0x14C
	  lwz       r6, 0x4(r4)
	  lbz       r7, 0x9(r1)
	  lbz       r8, 0xA(r1)
	  addi      r5, r5, 0x8
	  lbz       r9, 0xB(r1)
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x74
	  lwz       r4, 0x10(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  b         .loc_0x88

	.loc_0x74:
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x0(r3)
	  stb       r7, 0x1(r3)
	  stb       r8, 0x2(r3)
	  stb       r9, 0x3(r3)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E400
 * Size:	000038
 */
void J3DMaterialFactory::newColorChanNum(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x14C
	  addi      r0, r4, 0x2
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x14(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E438
 * Size:	000194
 */
void J3DMaterialFactory::newColorChan(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x14C
	  addi      r5, r5, 0xC
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0xE0
	  lwz       r4, 0x18(r4)
	  rlwinm    r0,r0,3,13,28
	  add       r8, r4, r0
	  lbz       r10, 0x5(r8)
	  lbz       r0, 0x2(r8)
	  lbz       r5, 0x0(r8)
	  subi      r7, r10, 0xFF
	  subfic    r6, r10, 0xFF
	  lbz       r4, 0x1(r8)
	  nor       r6, r7, r6
	  rlwinm    r7,r5,1,15,30
	  srawi     r5, r6, 0x1F
	  lbz       r9, 0x4(r8)
	  andc      r5, r10, r5
	  or        r4, r7, r4
	  rlwinm    r6,r4,0,26,24
	  rlwinm    r11,r0,7,18,18
	  rlwinm    r5,r5,6,18,25
	  cntlzw    r4, r9
	  or        r12, r6, r5
	  lbz       r6, 0x3(r8)
	  rlwinm    r5,r4,27,31,31
	  neg       r4, r9
	  rlwimi    r12,r0,2,29,29
	  rlwinm    r10,r0,7,17,17
	  rlwimi    r12,r0,2,28,28
	  neg       r5, r5
	  andc      r5, r6, r5
	  subfic    r6, r9, 0x2
	  rlwimi    r12,r0,2,27,27
	  or        r4, r4, r9
	  rlwimi    r12,r0,2,26,26
	  rlwinm    r7,r5,7,0,24
	  rlwimi    r12,r0,7,20,20
	  subi      r5, r9, 0x2
	  rlwimi    r12,r0,7,19,19
	  rlwimi    r11,r12,0,19,31
	  or        r0, r6, r5
	  rlwimi    r10,r11,0,18,31
	  rlwinm    r5,r10,0,25,22
	  or        r5, r5, r7
	  rlwimi    r5,r0,10,22,22
	  rlwimi    r5,r4,11,21,21
	  sth       r5, 0x0(r3)
	  blr

	.loc_0xE0:
	  subi      r8, r2, 0x7970
	  lis       r4, 0x1
	  lbz       r10, 0x5(r8)
	  subi      r4, r4, 0x1
	  lbz       r0, 0x2(r8)
	  lbz       r5, -0x7970(r2)
	  sub       r7, r10, r4
	  sub       r6, r4, r10
	  lbz       r4, 0x1(r8)
	  nor       r6, r7, r6
	  rlwinm    r7,r5,1,15,30
	  srawi     r5, r6, 0x1F
	  lbz       r9, 0x4(r8)
	  andc      r5, r10, r5
	  or        r4, r7, r4
	  rlwinm    r6,r4,0,26,24
	  rlwinm    r11,r0,7,18,18
	  rlwinm    r5,r5,6,18,25
	  cntlzw    r4, r9
	  or        r12, r6, r5
	  lbz       r6, 0x3(r8)
	  rlwinm    r5,r4,27,31,31
	  neg       r4, r9
	  rlwimi    r12,r0,2,29,29
	  rlwinm    r10,r0,7,17,17
	  rlwimi    r12,r0,2,28,28
	  neg       r5, r5
	  andc      r5, r6, r5
	  subfic    r6, r9, 0x2
	  rlwimi    r12,r0,2,27,27
	  or        r4, r4, r9
	  rlwimi    r12,r0,2,26,26
	  rlwinm    r7,r5,7,0,24
	  rlwimi    r12,r0,7,20,20
	  subi      r5, r9, 0x2
	  rlwimi    r12,r0,7,19,19
	  rlwimi    r11,r12,0,19,31
	  or        r0, r6, r5
	  rlwimi    r10,r11,0,18,31
	  rlwinm    r5,r10,0,25,22
	  or        r5, r5, r7
	  rlwimi    r5,r0,10,22,22
	  rlwimi    r5,r4,11,21,21
	  sth       r5, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E5CC
 * Size:	000090
 */
void J3DMaterialFactory::newAmbColor(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  lwz       r8, -0x78DC(r2)
	  lhzx      r5, r7, r5
	  stw       r8, 0x8(r1)
	  mulli     r5, r5, 0x14C
	  lwz       r6, 0x4(r4)
	  lbz       r7, 0x9(r1)
	  lbz       r8, 0xA(r1)
	  addi      r5, r5, 0x14
	  lbz       r9, 0xB(r1)
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x74
	  lwz       r4, 0x1C(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  b         .loc_0x88

	.loc_0x74:
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x0(r3)
	  stb       r7, 0x1(r3)
	  stb       r8, 0x2(r3)
	  stb       r9, 0x3(r3)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void J3DMaterialFactory::newLight(int, int) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8006E65C
 * Size:	000038
 */
void J3DMaterialFactory::newTexGenNum(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x14C
	  addi      r0, r4, 0x3
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x24(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E694
 * Size:	000084
 */
void J3DMaterialFactory::newTexCoord(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x14C
	  addi      r5, r5, 0x28
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x5C
	  lwz       r4, 0x28(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x2(r3)
	  sth       r0, 0x4(r3)
	  blr

	.loc_0x5C:
	  lis       r4, 0x8048
	  lbzu      r0, -0x7758(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x2(r3)
	  sth       r0, 0x4(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E718
 * Size:	000158
 */
void J3DMaterialFactory::newTexMtx(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lwz       r6, 0x8(r3)
	  rlwinm    r4,r4,1,0,30
	  stw       r0, 0x24(r1)
	  rlwinm    r0,r5,1,0,30
	  stw       r31, 0x1C(r1)
	  lwz       r31, 0x4(r3)
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  li        r3, 0
	  lhzx      r4, r6, r4
	  mulli     r4, r4, 0x14C
	  addi      r4, r4, 0x48
	  add       r30, r4, r0
	  lhzx      r0, r31, r30
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x13C
	  li        r3, 0x94
	  bl        -0x4A8C4
	  cmplwi    r3, 0
	  beq-      .loc_0x13C
	  lhzx      r0, r31, r30
	  lwz       r4, 0x30(r29)
	  mulli     r0, r0, 0x64
	  add       r4, r4, r0
	  lfs       f0, 0x24(r4)
	  stfs      f0, 0x24(r3)
	  lfs       f0, 0x28(r4)
	  stfs      f0, 0x28(r3)
	  lfs       f0, 0x2C(r4)
	  stfs      f0, 0x2C(r3)
	  lfs       f0, 0x30(r4)
	  stfs      f0, 0x30(r3)
	  lfs       f0, 0x34(r4)
	  stfs      f0, 0x34(r3)
	  lfs       f0, 0x38(r4)
	  stfs      f0, 0x38(r3)
	  lfs       f0, 0x3C(r4)
	  stfs      f0, 0x3C(r3)
	  lfs       f0, 0x40(r4)
	  stfs      f0, 0x40(r3)
	  lfs       f0, 0x44(r4)
	  stfs      f0, 0x44(r3)
	  lfs       f0, 0x48(r4)
	  stfs      f0, 0x48(r3)
	  lfs       f0, 0x4C(r4)
	  stfs      f0, 0x4C(r3)
	  lfs       f0, 0x50(r4)
	  stfs      f0, 0x50(r3)
	  lfs       f0, 0x54(r4)
	  stfs      f0, 0x54(r3)
	  lfs       f0, 0x58(r4)
	  stfs      f0, 0x58(r3)
	  lfs       f0, 0x5C(r4)
	  stfs      f0, 0x5C(r3)
	  lfs       f0, 0x60(r4)
	  stfs      f0, 0x60(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x14(r3)
	  lha       r0, 0x18(r4)
	  sth       r0, 0x18(r3)
	  lfs       f0, 0x1C(r4)
	  stfs      f0, 0x1C(r3)
	  lfs       f0, 0x20(r4)
	  stfs      f0, 0x20(r3)

	.loc_0x13C:
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
 * Address:	8006E870
 * Size:	000040
 */
void J3DMaterialFactory::newCullMode(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x14C
	  addi      r0, r4, 0x1
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x38
	  lwz       r3, 0x3C(r3)
	  rlwinm    r0,r0,2,22,29
	  lwzx      r0, r3, r0
	  rlwinm    r3,r0,0,24,31
	  blr

	.loc_0x38:
	  li        r3, 0xFF
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E8B0
 * Size:	000048
 */
void J3DMaterialFactory::newTexNo(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r3)
	  rlwinm    r4,r4,1,0,30
	  rlwinm    r0,r5,1,0,30
	  lwz       r5, 0x4(r3)
	  lhzx      r4, r6, r4
	  mulli     r4, r4, 0x14C
	  addi      r4, r4, 0x84
	  add       r0, r4, r0
	  lhzx      r0, r5, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x3C
	  lwz       r3, 0x38(r3)
	  rlwinm    r0,r0,1,15,30
	  lhzx      r3, r3, r0
	  blr

	.loc_0x3C:
	  lis       r3, 0x1
	  subi      r3, r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E8F8
 * Size:	000074
 */
void J3DMaterialFactory::newTevOrder(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x14C
	  addi      r5, r5, 0xBC
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  lwz       r4, 0x40(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  blr

	.loc_0x54:
	  lbz       r0, -0x7994(r2)
	  subi      r4, r2, 0x7994
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006E96C
 * Size:	000098
 */
void J3DMaterialFactory::newTevColor(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  lwz       r8, 0x2AE8(r2)
	  lhzx      r5, r7, r5
	  lwz       r7, 0x2AEC(r2)
	  mulli     r5, r5, 0x14C
	  lwz       r6, 0x4(r4)
	  stw       r8, 0x8(r1)
	  addi      r5, r5, 0xDC
	  stw       r7, 0xC(r1)
	  add       r0, r5, r0
	  lha       r7, 0xA(r1)
	  lhzx      r0, r6, r0
	  lha       r5, 0xC(r1)
	  cmplwi    r0, 0xFFFF
	  lha       r6, 0xE(r1)
	  beq-      .loc_0x7C
	  lwz       r4, 0x44(r4)
	  rlwinm    r0,r0,3,13,28
	  add       r4, r4, r0
	  lha       r0, 0x0(r4)
	  sth       r0, 0x0(r3)
	  lha       r0, 0x2(r4)
	  sth       r0, 0x2(r3)
	  lha       r0, 0x4(r4)
	  sth       r0, 0x4(r3)
	  lha       r0, 0x6(r4)
	  sth       r0, 0x6(r3)
	  b         .loc_0x90

	.loc_0x7C:
	  lha       r0, 0x8(r1)
	  sth       r0, 0x0(r3)
	  sth       r7, 0x2(r3)
	  sth       r5, 0x4(r3)
	  sth       r6, 0x6(r3)

	.loc_0x90:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006EA04
 * Size:	000090
 */
void J3DMaterialFactory::newTevKColor(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  lwz       r8, -0x78D8(r2)
	  lhzx      r5, r7, r5
	  stw       r8, 0x8(r1)
	  mulli     r5, r5, 0x14C
	  lwz       r6, 0x4(r4)
	  lbz       r7, 0x9(r1)
	  lbz       r8, 0xA(r1)
	  addi      r5, r5, 0x94
	  lbz       r9, 0xB(r1)
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x74
	  lwz       r4, 0x48(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  b         .loc_0x88

	.loc_0x74:
	  lbz       r0, 0x8(r1)
	  stb       r0, 0x0(r3)
	  stb       r7, 0x1(r3)
	  stb       r8, 0x2(r3)
	  stb       r9, 0x3(r3)

	.loc_0x88:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006EA94
 * Size:	000038
 */
void J3DMaterialFactory::newTevStageNum(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x14C
	  addi      r0, r4, 0x4
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x4C(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0xFF
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006EACC
 * Size:	000060
 */
void J3DMaterialFactory::newTevStage(int, int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  stw       r0, 0x14(r1)
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x14C
	  addi      r5, r5, 0xE4
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x4C
	  mulli     r0, r0, 0x14
	  lwz       r4, 0x50(r4)
	  add       r4, r4, r0
	  bl        .loc_0x60
	  b         .loc_0x50

	.loc_0x4C:
	  bl        -0xCC44

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	8006EB2C
 * Size:	000060
 */
void J3DTevStage::J3DTevStage(const J3DTevStageInfo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0xCC04
	  subi      r3, r2, 0x797C
	  lbz       r4, 0x7(r31)
	  lbz       r0, 0x1(r3)
	  mr        r3, r31
	  rlwinm    r4,r4,0,30,27
	  rlwinm    r0,r0,2,0,29
	  or        r0, r4, r0
	  stb       r0, 0x7(r31)
	  lbz       r4, 0x7(r31)
	  lbz       r0, -0x797C(r2)
	  rlwinm    r4,r4,0,0,29
	  or        r0, r4, r0
	  stb       r0, 0x7(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006EB8C
 * Size:	00009C
 */
void J3DMaterialFactory::newTevSwapModeTable(int, int) const
{
	/*
	.loc_0x0:
	  lwz       r7, 0x8(r4)
	  rlwinm    r5,r5,1,0,30
	  rlwinm    r0,r6,1,0,30
	  lwz       r6, 0x4(r4)
	  lhzx      r5, r7, r5
	  mulli     r5, r5, 0x14C
	  addi      r5, r5, 0x124
	  add       r0, r5, r0
	  lhzx      r0, r6, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x68
	  lwz       r4, 0x58(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r6, r4, r0
	  lbz       r5, 0x2(r6)
	  lbz       r0, 0x1(r6)
	  lbz       r4, 0x0(r6)
	  rlwinm    r5,r5,2,0,29
	  rlwinm    r0,r0,4,0,27
	  lbz       r6, 0x3(r6)
	  add       r0, r0, r5
	  rlwinm    r4,r4,6,0,25
	  add       r0, r0, r6
	  add       r0, r4, r0
	  stb       r0, 0x0(r3)
	  blr

	.loc_0x68:
	  subi      r6, r2, 0x7978
	  lbz       r4, -0x7978(r2)
	  lbz       r5, 0x2(r6)
	  lbz       r0, 0x1(r6)
	  rlwinm    r4,r4,6,0,25
	  rlwinm    r5,r5,2,0,29
	  lbz       r6, 0x3(r6)
	  rlwinm    r0,r0,4,0,27
	  add       r0, r0, r5
	  add       r0, r0, r6
	  add       r0, r4, r0
	  stb       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006EC28
 * Size:	000028
 */
void J3DMaterialFactory::newIndTexStageNum(int) const
{
	/*
	.loc_0x0:
	  mulli     r4, r4, 0x138
	  lwz       r3, 0xC(r3)
	  lbzx      r0, r3, r4
	  cmplwi    r0, 0x1
	  bne-      .loc_0x20
	  add       r3, r3, r4
	  lbz       r3, 0x1(r3)
	  blr

	.loc_0x20:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006EC50
 * Size:	000060
 */
void J3DMaterialFactory::newIndTexOrder(int, int) const
{
	/*
	.loc_0x0:
	  mulli     r0, r5, 0x138
	  lwz       r4, 0xC(r4)
	  stwu      r1, -0x10(r1)
	  subi      r5, r2, 0x7990
	  add       r8, r4, r0
	  lbz       r7, -0x7990(r2)
	  lbz       r0, 0x0(r8)
	  lbz       r5, 0x1(r5)
	  cmplwi    r0, 0x1
	  stb       r7, 0x8(r1)
	  stb       r5, 0x9(r1)
	  bne-      .loc_0x50
	  rlwinm    r4,r6,2,0,29
	  addi      r4, r4, 0x4
	  add       r4, r8, r4
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  b         .loc_0x58

	.loc_0x50:
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r3)

	.loc_0x58:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006ECB0
 * Size:	0000E0
 */
void J3DMaterialFactory::newIndTexMtx(int, int) const
{
	/*
	.loc_0x0:
	  mulli     r0, r5, 0x138
	  stwu      r1, -0x30(r1)
	  lwz       r4, 0xC(r4)
	  lis       r5, 0x8048
	  lfsu      f2, -0x76D4(r5)
	  add       r7, r4, r0
	  lfs       f1, 0x4(r5)
	  lfs       f0, 0x8(r5)
	  lbz       r0, 0x0(r7)
	  stfs      f2, 0x8(r1)
	  lfs       f2, 0xC(r5)
	  cmplwi    r0, 0x1
	  stfs      f1, 0xC(r1)
	  lfs       f1, 0x10(r5)
	  stfs      f0, 0x10(r1)
	  lfs       f0, 0x14(r5)
	  lbz       r0, 0x18(r5)
	  stfs      f2, 0x14(r1)
	  stfs      f1, 0x18(r1)
	  stfs      f0, 0x1C(r1)
	  stb       r0, 0x20(r1)
	  bne-      .loc_0xA0
	  mulli     r4, r6, 0x1C
	  addi      r4, r4, 0x14
	  add       r4, r7, r4
	  lfs       f0, 0x0(r4)
	  stfs      f0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  lfs       f0, 0x10(r4)
	  stfs      f0, 0x10(r3)
	  lfs       f0, 0x14(r4)
	  stfs      f0, 0x14(r3)
	  lbz       r0, 0x18(r4)
	  stb       r0, 0x18(r3)
	  b         .loc_0xD8

	.loc_0xA0:
	  lwz       r0, 0x8(r1)
	  lwz       r4, 0xC(r1)
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x10(r1)
	  stw       r4, 0x4(r3)
	  lwz       r4, 0x14(r1)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0x18(r1)
	  stw       r4, 0xC(r3)
	  lwz       r4, 0x1C(r1)
	  stw       r0, 0x10(r3)
	  lwz       r0, 0x20(r1)
	  stw       r4, 0x14(r3)
	  stw       r0, 0x18(r3)

	.loc_0xD8:
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006ED90
 * Size:	000194
 */
void J3DMaterialFactory::newIndTevStage(int, int) const
{
	/*
	.loc_0x0:
	  lis       r7, 0x8048
	  lwz       r4, 0xC(r4)
	  subi      r10, r7, 0x76A4
	  lbz       r8, 0x0(r10)
	  mulli     r0, r5, 0x138
	  lbz       r5, 0x1(r10)
	  lbz       r7, 0x2(r10)
	  rlwinm    r9,r8,0,30,27
	  rlwinm    r8,r5,2,0,29
	  lbz       r5, 0x3(r10)
	  or        r8, r9, r8
	  rlwinm    r7,r7,4,0,27
	  rlwinm    r8,r8,0,28,24
	  rlwinm    r9,r5,9,0,22
	  or        r8, r8, r7
	  lbz       r7, 0x4(r10)
	  rlwimi    r9,r8,0,23,31
	  lbz       r5, 0x5(r10)
	  rlwinm    r8,r7,13,0,18
	  lbz       r7, 0x6(r10)
	  rlwinm    r9,r9,0,19,15
	  rlwinm    r5,r5,16,0,15
	  or        r8, r9, r8
	  rlwinm    r7,r7,20,0,11
	  add       r9, r4, r0
	  rlwinm    r8,r8,0,16,12
	  lbz       r0, 0x0(r9)
	  or        r4, r8, r5
	  lbz       r5, 0x7(r10)
	  rlwinm    r8,r4,0,12,10
	  lbz       r4, 0x8(r10)
	  or        r7, r8, r7
	  cmplwi    r0, 0x1
	  rlwinm    r5,r5,19,0,12
	  rlwinm    r0,r4,7,0,24
	  rlwinm    r7,r7,0,13,11
	  or        r5, r7, r5
	  rlwinm    r4,r5,0,25,22
	  or        r0, r4, r0
	  bne-      .loc_0x18C
	  mulli     r4, r6, 0xC
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  addi      r4, r4, 0x78
	  lwz       r5, 0x0(r3)
	  add       r4, r9, r4
	  lbz       r0, 0x0(r4)
	  rlwinm    r5,r5,0,0,29
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  rlwinm    r5,r5,0,30,27
	  rlwinm    r0,r0,2,0,29
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x2(r4)
	  rlwinm    r5,r5,0,28,24
	  rlwinm    r0,r0,4,0,27
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x3(r4)
	  rlwinm    r5,r5,0,23,18
	  rlwinm    r0,r0,9,0,22
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x4(r4)
	  rlwinm    r5,r5,0,19,15
	  rlwinm    r0,r0,13,0,18
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x5(r4)
	  rlwinm    r5,r5,0,16,12
	  rlwinm    r0,r0,16,0,15
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x6(r4)
	  rlwinm    r5,r5,0,12,10
	  rlwinm    r0,r0,20,0,11
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x7(r4)
	  rlwinm    r5,r5,0,13,11
	  rlwinm    r0,r0,19,0,12
	  or        r0, r5, r0
	  stw       r0, 0x0(r3)
	  lwz       r5, 0x0(r3)
	  lbz       r0, 0x8(r4)
	  rlwinm    r4,r5,0,25,22
	  rlwinm    r0,r0,7,0,24
	  or        r0, r4, r0
	  stw       r0, 0x0(r3)
	  blr

	.loc_0x18C:
	  stw       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006EF24
 * Size:	000060
 */
void J3DMaterialFactory::newIndTexCoordScale(int, int) const
{
	/*
	.loc_0x0:
	  mulli     r0, r5, 0x138
	  lwz       r4, 0xC(r4)
	  stwu      r1, -0x10(r1)
	  subi      r5, r2, 0x7984
	  add       r8, r4, r0
	  lbz       r7, -0x7984(r2)
	  lbz       r0, 0x0(r8)
	  lbz       r5, 0x1(r5)
	  cmplwi    r0, 0x1
	  stb       r7, 0x8(r1)
	  stb       r5, 0x9(r1)
	  bne-      .loc_0x50
	  rlwinm    r4,r6,2,0,29
	  addi      r4, r4, 0x68
	  add       r4, r8, r4
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  b         .loc_0x58

	.loc_0x50:
	  lwz       r0, 0x8(r1)
	  stw       r0, 0x0(r3)

	.loc_0x58:
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void J3DMaterialFactory::getMaterialInitData(unsigned short) const
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8006EF84
 * Size:	00024C
 */
void J3DMaterialFactory::newFog(int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x80(r1)
	  rlwinm    r0,r5,1,0,30
	  lwz       r6, 0x8(r4)
	  lis       r5, 0x8048
	  stmw      r26, 0x68(r1)
	  subi      r31, r5, 0x7698
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  lhz       r10, 0x18(r31)
	  mulli     r5, r0, 0x14C
	  lhz       r9, 0x1A(r31)
	  lhz       r8, 0x1C(r31)
	  lhz       r6, 0x1E(r31)
	  addi      r0, r5, 0x144
	  lhz       r5, 0x20(r31)
	  lhzx      r26, r7, r0
	  sth       r10, 0x4C(r1)
	  lbz       r30, 0x0(r31)
	  cmplwi    r26, 0xFFFF
	  sth       r9, 0x4E(r1)
	  lbz       r29, 0x1(r31)
	  sth       r8, 0x50(r1)
	  lhz       r28, 0x2(r31)
	  sth       r6, 0x52(r1)
	  lfs       f3, 0x4(r31)
	  sth       r5, 0x54(r1)
	  lfs       f2, 0x8(r31)
	  lfs       f1, 0xC(r31)
	  lfs       f0, 0x10(r31)
	  lbz       r12, 0x14(r31)
	  lbz       r11, 0x15(r31)
	  lbz       r7, 0x16(r31)
	  lbz       r0, 0x17(r31)
	  lhz       r10, 0x22(r31)
	  lhz       r9, 0x24(r31)
	  lhz       r8, 0x26(r31)
	  lhz       r6, 0x28(r31)
	  lhz       r5, 0x2A(r31)
	  stb       r30, 0x34(r1)
	  stb       r29, 0x35(r1)
	  sth       r28, 0x36(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stb       r12, 0x48(r1)
	  stb       r11, 0x49(r1)
	  stb       r7, 0x4A(r1)
	  stb       r0, 0x4B(r1)
	  sth       r10, 0x56(r1)
	  sth       r9, 0x58(r1)
	  sth       r8, 0x5A(r1)
	  sth       r6, 0x5C(r1)
	  sth       r5, 0x5E(r1)
	  beq-      .loc_0x1E8
	  mulli     r0, r26, 0x2C
	  lwz       r4, 0x5C(r4)
	  add       r8, r4, r0
	  lwz       r0, 0x18(r8)
	  lwz       r4, 0x1C(r8)
	  stw       r0, 0x20(r1)
	  lwz       r0, 0x20(r8)
	  stw       r4, 0x24(r1)
	  lwz       r4, 0x0(r8)
	  stw       r0, 0x28(r1)
	  lwz       r7, 0x4(r8)
	  stw       r4, 0x8(r1)
	  lwz       r6, 0x8(r8)
	  lwz       r5, 0xC(r8)
	  lwz       r4, 0x10(r8)
	  lwz       r0, 0x14(r8)
	  lwz       r28, 0x24(r8)
	  stw       r0, 0x1C(r1)
	  lwz       r29, 0x28(r8)
	  stw       r7, 0xC(r1)
	  lhz       r7, 0x20(r1)
	  stw       r6, 0x10(r1)
	  lhz       r6, 0x22(r1)
	  stw       r5, 0x14(r1)
	  lhz       r5, 0x24(r1)
	  stw       r4, 0x18(r1)
	  lhz       r4, 0x26(r1)
	  lhz       r0, 0x28(r1)
	  sth       r7, 0x4C(r1)
	  lbz       r30, 0x8(r1)
	  lbz       r31, 0x9(r1)
	  lhz       r12, 0xA(r1)
	  lfs       f3, 0xC(r1)
	  lfs       f2, 0x10(r1)
	  lfs       f1, 0x14(r1)
	  lfs       f0, 0x18(r1)
	  lbz       r11, 0x1C(r1)
	  lbz       r10, 0x1D(r1)
	  lbz       r9, 0x1E(r1)
	  lbz       r8, 0x1F(r1)
	  lhz       r7, 0x2A(r1)
	  stw       r28, 0x2C(r1)
	  sth       r6, 0x4E(r1)
	  lhz       r6, 0x2C(r1)
	  sth       r5, 0x50(r1)
	  lhz       r5, 0x2E(r1)
	  stw       r29, 0x30(r1)
	  sth       r4, 0x52(r1)
	  lhz       r4, 0x30(r1)
	  sth       r0, 0x54(r1)
	  lhz       r0, 0x32(r1)
	  stb       r30, 0x34(r1)
	  stb       r31, 0x35(r1)
	  sth       r12, 0x36(r1)
	  stfs      f3, 0x38(r1)
	  stfs      f2, 0x3C(r1)
	  stfs      f1, 0x40(r1)
	  stfs      f0, 0x44(r1)
	  stb       r11, 0x48(r1)
	  stb       r10, 0x49(r1)
	  stb       r9, 0x4A(r1)
	  stb       r8, 0x4B(r1)
	  sth       r7, 0x56(r1)
	  sth       r6, 0x58(r1)
	  sth       r5, 0x5A(r1)
	  sth       r4, 0x5C(r1)
	  sth       r0, 0x5E(r1)

	.loc_0x1E8:
	  lwz       r0, 0x34(r1)
	  lwz       r4, 0x38(r1)
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x3C(r1)
	  stw       r4, 0x4(r3)
	  lwz       r4, 0x40(r1)
	  stw       r0, 0x8(r3)
	  lwz       r0, 0x44(r1)
	  stw       r4, 0xC(r3)
	  lwz       r4, 0x48(r1)
	  stw       r0, 0x10(r3)
	  lwz       r0, 0x4C(r1)
	  stw       r4, 0x14(r3)
	  lwz       r4, 0x50(r1)
	  stw       r0, 0x18(r3)
	  lwz       r0, 0x54(r1)
	  stw       r4, 0x1C(r3)
	  lwz       r4, 0x58(r1)
	  stw       r0, 0x20(r3)
	  lwz       r0, 0x5C(r1)
	  stw       r4, 0x24(r3)
	  stw       r0, 0x28(r3)
	  lmw       r26, 0x68(r1)
	  addi      r1, r1, 0x80
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F1D0
 * Size:	000080
 */
void J3DMaterialFactory::newAlphaComp(int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r4)
	  rlwinm    r0,r5,1,0,30
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  mulli     r5, r0, 0x14C
	  addi      r0, r5, 0x146
	  lhzx      r0, r7, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x64
	  lwz       r4, 0x60(r4)
	  rlwinm    r0,r0,3,13,28
	  add       r6, r4, r0
	  lbz       r0, 0x2(r6)
	  lbz       r4, 0x0(r6)
	  lbz       r5, 0x3(r6)
	  rlwinm    r0,r0,3,0,28
	  rlwinm    r4,r4,5,0,26
	  add       r0, r0, r5
	  add       r0, r4, r0
	  sth       r0, 0x0(r3)
	  lbz       r0, 0x1(r6)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x4(r6)
	  stb       r0, 0x3(r3)
	  blr

	.loc_0x64:
	  lis       r4, 0x1
	  li        r0, 0
	  subi      r4, r4, 0x1
	  sth       r4, 0x0(r3)
	  stb       r0, 0x2(r3)
	  stb       r0, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F250
 * Size:	00007C
 */
void J3DMaterialFactory::newBlend(int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r4)
	  rlwinm    r0,r5,1,0,30
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  mulli     r5, r0, 0x14C
	  addi      r0, r5, 0x148
	  lhzx      r0, r7, r0
	  cmplwi    r0, 0xFFFF
	  beq-      .loc_0x54
	  lwz       r4, 0x64(r4)
	  rlwinm    r0,r0,2,14,29
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  blr

	.loc_0x54:
	  lbz       r0, -0x7974(r2)
	  subi      r4, r2, 0x7974
	  stb       r0, 0x0(r3)
	  lbz       r0, 0x1(r4)
	  stb       r0, 0x1(r3)
	  lbz       r0, 0x2(r4)
	  stb       r0, 0x2(r3)
	  lbz       r0, 0x3(r4)
	  stb       r0, 0x3(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F2CC
 * Size:	000060
 */
void J3DMaterialFactory::newZMode(int) const
{
	/*
	.loc_0x0:
	  lwz       r6, 0x8(r4)
	  rlwinm    r0,r5,1,0,30
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  mulli     r5, r0, 0x14C
	  addi      r0, r5, 0x6
	  lbzx      r0, r7, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x54
	  lwz       r4, 0x68(r4)
	  rlwinm    r0,r0,2,22,29
	  add       r5, r4, r0
	  lbz       r0, 0x0(r5)
	  lbz       r4, 0x1(r5)
	  lbz       r5, 0x2(r5)
	  rlwinm    r0,r0,4,0,27
	  rlwinm    r4,r4,1,0,30
	  add       r0, r0, r5
	  add       r0, r4, r0
	  sth       r0, 0x0(r3)
	  blr

	.loc_0x54:
	  lhz       r0, -0x7964(r2)
	  sth       r0, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F32C
 * Size:	000038
 */
void J3DMaterialFactory::newZCompLoc(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x14C
	  addi      r0, r4, 0x5
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x6C(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F364
 * Size:	000038
 */
void J3DMaterialFactory::newDither(int) const
{
	/*
	.loc_0x0:
	  lwz       r5, 0x8(r3)
	  rlwinm    r0,r4,1,0,30
	  lwz       r6, 0x4(r3)
	  lhzx      r0, r5, r0
	  mulli     r4, r0, 0x14C
	  addi      r0, r4, 0x7
	  lbzx      r0, r6, r0
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x30
	  lwz       r3, 0x70(r3)
	  lbzx      r3, r3, r0
	  blr

	.loc_0x30:
	  li        r3, 0x1
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F39C
 * Size:	0000A8
 */
void J3DMaterialFactory::newNBTScale(int) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  rlwinm    r0,r5,1,0,30
	  lwz       r6, 0x8(r4)
	  lis       r5, 0x8048
	  subi      r8, r5, 0x766C
	  lwz       r7, 0x4(r4)
	  lhzx      r0, r6, r0
	  lbz       r6, 0x0(r8)
	  mulli     r5, r0, 0x14C
	  lfs       f2, 0x4(r8)
	  lfs       f1, 0x8(r8)
	  lfs       f0, 0xC(r8)
	  addi      r0, r5, 0x14A
	  stb       r6, 0x8(r1)
	  lhzx      r0, r7, r0
	  stfs      f2, 0xC(r1)
	  cmplwi    r0, 0xFFFF
	  stfs      f1, 0x10(r1)
	  stfs      f0, 0x14(r1)
	  beq-      .loc_0x80
	  lwz       r4, 0x74(r4)
	  rlwinm    r0,r0,4,12,27
	  add       r4, r4, r0
	  lbz       r0, 0x0(r4)
	  stb       r0, 0x0(r3)
	  lfs       f0, 0x4(r4)
	  stfs      f0, 0x4(r3)
	  lfs       f0, 0x8(r4)
	  stfs      f0, 0x8(r3)
	  lfs       f0, 0xC(r4)
	  stfs      f0, 0xC(r3)
	  b         .loc_0xA0

	.loc_0x80:
	  lwz       r4, 0x8(r1)
	  lwz       r0, 0xC(r1)
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x10(r1)
	  stw       r0, 0x4(r3)
	  lwz       r0, 0x14(r1)
	  stw       r4, 0x8(r3)
	  stw       r0, 0xC(r3)

	.loc_0xA0:
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F444
 * Size:	000004
 */
void J3DPEBlockNull::load()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F448
 * Size:	00000C
 */
void J3DPEBlockNull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5045
	  addi      r3, r3, 0x4E4C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F454
 * Size:	00005C
 */
void J3DPEBlockNull::~J3DPEBlockNull()
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
	  addi      r0, r3, 0x1BE0
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1608
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4B3E0

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
 * Address:	8006F4B0
 * Size:	000004
 */
void J3DTevBlockNull::reset(J3DTevBlock*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F4B4
 * Size:	000004
 */
void J3DTevBlockNull::ptrToIndex()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F4B8
 * Size:	000024
 */
void J3DTevBlockNull::indexToPtr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r4, 0x4(r3)
	  bl        0xE764
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F4DC
 * Size:	00000C
 */
void J3DTevBlockNull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5456
	  addi      r3, r3, 0x4E4C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F4E8
 * Size:	00005C
 */
void J3DTevBlockNull::~J3DTevBlockNull()
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
	  addi      r0, r3, 0x1C5C
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x2B08
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4B474

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
 * Address:	8006F544
 * Size:	000004
 */
void J3DTevBlock::diffTexNo()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F548
 * Size:	000004
 */
void J3DTevBlock::diffTevReg()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F54C
 * Size:	000004
 */
void J3DTevBlock::diffTexCoordScale()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F550
 * Size:	000004
 */
void J3DTevBlock::diffTevStage()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F554
 * Size:	000004
 */
void J3DTevBlock::diffTevStageIndirect()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F558
 * Size:	000004
 */
void J3DTevBlock::patchTexNo()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F55C
 * Size:	000004
 */
void J3DTevBlock::patchTevReg()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F560
 * Size:	000004
 */
void J3DTevBlock::patchTexNoAndTexCoordScale()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F564
 * Size:	000004
 */
void J3DTevBlock::setTexNo(unsigned long, const unsigned short*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F568
 * Size:	000004
 */
void J3DTevBlock::setTevOrder(unsigned long, const J3DTevOrder*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F56C
 * Size:	000008
 */
void J3DTevBlock::getTevOrder(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F574
 * Size:	000004
 */
void J3DTevBlock::setTevColor(unsigned long, const J3DGXColorS10*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F578
 * Size:	000004
 */
void J3DTevBlock::setTevKColor(unsigned long, const J3DGXColor*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F57C
 * Size:	000004
 */
void J3DTevBlock::setTevKColorSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F580
 * Size:	000008
 */
void J3DTevBlock::getTevKColorSel(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F588
 * Size:	000004
 */
void J3DTevBlock::setTevKAlphaSel(unsigned long, const unsigned char*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F58C
 * Size:	000008
 */
void J3DTevBlock::getTevKAlphaSel(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F594
 * Size:	000004
 */
void J3DTevBlock::setTevStageNum(const unsigned char*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F598
 * Size:	000004
 */
void J3DTevBlock::setTevStage(unsigned long, const J3DTevStage*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F59C
 * Size:	000004
 */
void J3DTevBlock::setTevSwapModeInfo(unsigned long, J3DTevSwapModeInfo)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5A0
 * Size:	000004
 */
void J3DTevBlock::setTevSwapModeInfo(unsigned long, const J3DTevSwapModeInfo*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5A4
 * Size:	000004
 */
void J3DTevBlock::setTevSwapModeTable(unsigned long, const J3DTevSwapModeTable*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5A8
 * Size:	000008
 */
void J3DTevBlock::getTevSwapModeTable(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5B0
 * Size:	000004
 */
void J3DTevBlock::setIndTevStage(unsigned long, const J3DIndTevStage*)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5B4
 * Size:	000008
 */
void J3DTevBlock::getIndTevStage(unsigned long)
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5BC
 * Size:	000008
 */
void J3DTevBlock::getTexNoOffset() const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5C4
 * Size:	000008
 */
void J3DTevBlock::getTevRegOffset() const
{
	/*
	.loc_0x0:
	  li        r3, 0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5CC
 * Size:	000004
 */
void J3DTexGenBlockNull::calc(const float (*)[4])
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5D0
 * Size:	000004
 */
void J3DTexGenBlockNull::calcWithoutViewMtx(const float (*)[4])
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5D4
 * Size:	000004
 */
void J3DTexGenBlockNull::calcPostTexMtx(const float (*)[4])
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5D8
 * Size:	000004
 */
void J3DTexGenBlockNull::calcPostTexMtxWithoutViewMtx(const float (*)[4])
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5DC
 * Size:	000004
 */
void J3DTexGenBlockNull::load()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5E0
 * Size:	000004
 */
void J3DTexGenBlockNull::patch()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5E4
 * Size:	000004
 */
void J3DTexGenBlockNull::diff(unsigned long)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5E8
 * Size:	000004
 */
void J3DTexGenBlockNull::diffTexMtx()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5EC
 * Size:	000004
 */
void J3DTexGenBlockNull::diffTexGen()
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5F0
 * Size:	00000C
 */
void J3DTexGenBlockNull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x5447
	  addi      r3, r3, 0x4E4C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F5FC
 * Size:	00005C
 */
void J3DTexGenBlockNull::~J3DTexGenBlockNull()
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
	  addi      r0, r3, 0x1D38
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x171C
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4B588

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
 * Address:	8006F658
 * Size:	00000C
 */
void J3DColorBlockNull::getType()
{
	/*
	.loc_0x0:
	  lis       r3, 0x434C
	  addi      r3, r3, 0x4E4C
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F664
 * Size:	00005C
 */
void J3DColorBlockNull::~J3DColorBlockNull()
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
	  addi      r0, r3, 0x1DA4
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  addi      r0, r3, 0x1788
	  stw       r0, 0x0(r31)

	.loc_0x34:
	  extsh.    r0, r4
	  ble-      .loc_0x44
	  mr        r3, r31
	  bl        -0x4B5F0

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
 * Address:	8006F6C0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DCurrentMtxInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F6D8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DPatchingInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F6F0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DDisplayListInit>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F708
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DNBTScaleInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F720
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DZModeInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F738
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DBlendInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F750
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DAlphaCompInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F768
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DFogInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F780
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DTevSwapModeTableInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F798
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DTevSwapModeInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F7B0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DTevStageInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F7C8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DTevOrderInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F7E0
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DTexMtxInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F7F8
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DTexCoord2Info>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F810
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DTexCoordInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F828
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DLightInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F840
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DColorChanInfo>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F858
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DIndInitData>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8006F870
 * Size:	000018
 */
void JSUConvertOffsetToPtr<J3DMaterialInitData>(const void*, const void*)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0
	  bne-      .loc_0x10
	  li        r3, 0
	  blr

	.loc_0x10:
	  add       r3, r3, r4
	  blr
	*/
}