

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void JPAResourceLoader::JPAResourceLoader(const unsigned char*,
                                          JPAResourceManager*, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800980D8
 * Size:	000040
 */
void JPAResourceLoader::JPAResourceLoader(const unsigned char*,
                                          JPAResourceManager*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lwz       r6, 0x4(r4)
	  stw       r0, 0x14(r1)
	  subis     r0, r6, 0x322D
	  stw       r31, 0xC(r1)
	  cmplwi    r0, 0x3130
	  mr        r31, r3
	  bne-      .loc_0x28
	  bl        .loc_0x40

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x40:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000390
 */
void JPAResourceLoader::load_jpa(const unsigned char*, JPAResourceManager*,
                                 unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80098118
 * Size:	0003B8
 */
void JPAResourceLoader::load_jpc(const unsigned char*, JPAResourceManager*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  lhz       r3, 0x8(r4)
	  stw       r0, 0x44(r1)
	  lhz       r0, 0xA(r4)
	  stmw      r18, 0x8(r1)
	  mr        r20, r5
	  mr        r23, r4
	  lwz       r30, 0x0(r5)
	  li        r5, 0
	  sth       r3, 0xC(r20)
	  mr        r4, r30
	  sth       r0, 0x10(r20)
	  lhz       r0, 0xC(r20)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x7410C
	  stw       r3, 0x4(r20)
	  mr        r4, r30
	  li        r5, 0
	  lhz       r0, 0x10(r20)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x74124
	  lis       r4, 0x464C
	  stw       r3, 0x8(r20)
	  lhz       r18, 0x8(r23)
	  addi      r22, r4, 0x4431
	  li        r26, 0x10
	  li        r19, 0
	  b         .loc_0x348

	.loc_0x74:
	  mr        r4, r30
	  add       r24, r23, r26
	  li        r3, 0x48
	  li        r5, 0
	  bl        -0x7425C
	  mr.       r31, r3
	  beq-      .loc_0x98
	  bl        -0x2BBC
	  mr        r31, r3

	.loc_0x98:
	  lbz       r0, 0x4(r24)
	  stb       r0, 0x3E(r31)
	  lbz       r0, 0x3E(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC0
	  mr        r4, r30
	  rlwinm    r3,r0,2,22,29
	  li        r5, 0
	  bl        -0x74188
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r3, 0

	.loc_0xC4:
	  stw       r3, 0x30(r31)
	  lbz       r0, 0x5(r24)
	  stb       r0, 0x3F(r31)
	  lbz       r0, 0x3F(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xF0
	  mr        r4, r30
	  rlwinm    r3,r0,2,22,29
	  li        r5, 0
	  bl        -0x741B8
	  b         .loc_0xF4

	.loc_0xF0:
	  li        r3, 0

	.loc_0xF4:
	  stw       r3, 0x34(r31)
	  li        r29, 0
	  lbz       r3, 0x6(r24)
	  mr        r28, r29
	  lhz       r0, 0x0(r24)
	  li        r27, 0
	  stb       r3, 0x40(r31)
	  addi      r26, r26, 0x8
	  stw       r29, 0x38(r31)
	  sth       r0, 0x3C(r31)
	  b         .loc_0x320

	.loc_0x120:
	  add       r21, r23, r26
	  lwz       r4, 0x0(r21)
	  lwz       r25, 0x4(r21)
	  cmpw      r4, r22
	  beq-      .loc_0x1C4
	  bge-      .loc_0x188
	  lis       r3, 0x4553
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x28C
	  bge-      .loc_0x174
	  lis       r3, 0x4253
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x25C
	  bge-      .loc_0x318
	  lis       r3, 0x4245
	  addi      r0, r3, 0x4D31
	  cmpw      r4, r0
	  beq-      .loc_0x230
	  b         .loc_0x318

	.loc_0x174:
	  lis       r3, 0x4554
	  addi      r0, r3, 0x5831
	  cmpw      r4, r0
	  beq-      .loc_0x2E4
	  b         .loc_0x318

	.loc_0x188:
	  lis       r3, 0x5353
	  addi      r0, r3, 0x5031
	  cmpw      r4, r0
	  beq-      .loc_0x2B8
	  bge-      .loc_0x1B0
	  lis       r3, 0x4B46
	  addi      r0, r3, 0x4131
	  cmpw      r4, r0
	  beq-      .loc_0x1FC
	  b         .loc_0x318

	.loc_0x1B0:
	  lis       r3, 0x5444
	  addi      r0, r3, 0x4231
	  cmpw      r4, r0
	  beq-      .loc_0x310
	  b         .loc_0x318

	.loc_0x1C4:
	  mr        r4, r30
	  li        r3, 0x2C
	  li        r5, 0
	  bl        -0x743A8
	  mr.       r0, r3
	  beq-      .loc_0x1EC
	  mr        r4, r21
	  mr        r5, r30
	  bl        -0x4F68
	  mr        r0, r3

	.loc_0x1EC:
	  lwz       r3, 0x30(r31)
	  stwx      r0, r3, r29
	  addi      r29, r29, 0x4
	  b         .loc_0x318

	.loc_0x1FC:
	  mr        r4, r30
	  li        r3, 0x8
	  li        r5, 0
	  bl        -0x743E0
	  mr.       r0, r3
	  beq-      .loc_0x220
	  mr        r4, r21
	  bl        -0x48F0
	  mr        r0, r3

	.loc_0x220:
	  lwz       r3, 0x34(r31)
	  stwx      r0, r3, r28
	  addi      r28, r28, 0x4
	  b         .loc_0x318

	.loc_0x230:
	  mr        r4, r30
	  li        r3, 0x8
	  li        r5, 0
	  bl        -0x74414
	  mr.       r0, r3
	  beq-      .loc_0x254
	  mr        r4, r21
	  bl        -0x8998
	  mr        r0, r3

	.loc_0x254:
	  stw       r0, 0x2C(r31)
	  b         .loc_0x318

	.loc_0x25C:
	  mr        r4, r30
	  li        r3, 0x14
	  li        r5, 0
	  bl        -0x74440
	  mr.       r0, r3
	  beq-      .loc_0x284
	  mr        r4, r21
	  mr        r5, r30
	  bl        -0x97A4
	  mr        r0, r3

	.loc_0x284:
	  stw       r0, 0x1C(r31)
	  b         .loc_0x318

	.loc_0x28C:
	  mr        r4, r30
	  li        r3, 0x1C
	  li        r5, 0
	  bl        -0x74470
	  mr.       r0, r3
	  beq-      .loc_0x2B0
	  mr        r4, r21
	  bl        -0x6F54
	  mr        r0, r3

	.loc_0x2B0:
	  stw       r0, 0x20(r31)
	  b         .loc_0x318

	.loc_0x2B8:
	  mr        r4, r30
	  li        r3, 0x4
	  li        r5, 0
	  bl        -0x7449C
	  mr.       r0, r3
	  beq-      .loc_0x2DC
	  mr        r4, r21
	  bl        -0x9424
	  mr        r0, r3

	.loc_0x2DC:
	  stw       r0, 0x24(r31)
	  b         .loc_0x318

	.loc_0x2E4:
	  mr        r4, r30
	  li        r3, 0x4
	  li        r5, 0
	  bl        -0x744C8
	  mr.       r0, r3
	  beq-      .loc_0x308
	  mr        r4, r21
	  bl        -0x73F0
	  mr        r0, r3

	.loc_0x308:
	  stw       r0, 0x28(r31)
	  b         .loc_0x318

	.loc_0x310:
	  addi      r0, r21, 0x8
	  stw       r0, 0x38(r31)

	.loc_0x318:
	  add       r26, r26, r25
	  addi      r27, r27, 0x1

	.loc_0x320:
	  lhz       r0, 0x2(r24)
	  cmpw      r27, r0
	  blt+      .loc_0x120
	  mr        r3, r31
	  mr        r4, r30
	  bl        -0x2DF0
	  mr        r3, r20
	  mr        r4, r31
	  bl        0x1AC
	  addi      r19, r19, 0x1

	.loc_0x348:
	  cmpw      r19, r18
	  blt+      .loc_0x74
	  lwz       r21, 0xC(r23)
	  li        r22, 0
	  lhz       r18, 0xA(r23)
	  b         .loc_0x39C

	.loc_0x360:
	  add       r19, r23, r21
	  mr        r4, r30
	  lwz       r24, 0x4(r19)
	  li        r3, 0x48
	  li        r5, 0
	  bl        -0x7454C
	  mr.       r4, r3
	  beq-      .loc_0x38C
	  mr        r4, r19
	  bl        0x204
	  mr        r4, r3

	.loc_0x38C:
	  mr        r3, r20
	  bl        0x17C
	  add       r21, r21, r24
	  addi      r22, r22, 0x1

	.loc_0x39C:
	  cmpw      r22, r18
	  blt+      .loc_0x360
	  lmw       r18, 0x8(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}