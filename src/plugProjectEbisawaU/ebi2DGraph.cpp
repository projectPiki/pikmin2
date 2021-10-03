

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CA358
 * Size:	00008C
 */
void ebi::E2DScreen_searchAssert(J2DScreen *, unsigned long long)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r5
  stw       r29, 0x24(r1)
  mr        r29, r6
  lwz       r12, 0x0(r3)
  lwz       r12, 0x3C(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  bne-      .loc_0x6C
  mr        r4, r29
  mr        r3, r30
  addi      r5, r1, 0x8
  bl        -0x84E8
  cmplwi    r31, 0
  bne-      .loc_0x6C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6428
  li        r4, 0x14
  addi      r5, r5, 0x6438
  crclr     6, 0x6
  bl        -0x39FD80

.loc_0x6C:
  lwz       r0, 0x34(r1)
  mr        r3, r31
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
 * Address:	803CA3E4
 * Size:	0001D8
 */
void ebi::E2DPane_setTreeInfluencedAlpha(J2DPane *, bool)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  li        r5, 0
  stw       r0, 0x34(r1)
  stmw      r24, 0x10(r1)
  mr        r24, r3
  mr        r31, r4
  bl        -0x391654
  lwz       r30, 0xDC(r24)
  cmplwi    r30, 0
  beq-      .loc_0x1BC
  subi      r30, r30, 0xC
  b         .loc_0x1BC

.loc_0x34:
  lwz       r27, 0xC(r30)
  mr        r4, r31
  li        r5, 0
  mr        r3, r27
  bl        -0x39167C
  lwz       r29, 0xDC(r27)
  cmplwi    r29, 0
  beq-      .loc_0x1A4
  subi      r29, r29, 0xC
  b         .loc_0x1A4

.loc_0x5C:
  lwz       r27, 0xC(r29)
  mr        r4, r31
  li        r5, 0
  mr        r3, r27
  bl        -0x3916A4
  lwz       r28, 0xDC(r27)
  cmplwi    r28, 0
  beq-      .loc_0x18C
  subi      r28, r28, 0xC
  b         .loc_0x18C

.loc_0x84:
  lwz       r27, 0xC(r28)
  mr        r4, r31
  li        r5, 0
  mr        r3, r27
  bl        -0x3916CC
  addi      r3, r27, 0xDC
  bl        -0x3A6860
  cmplwi    r3, 0
  beq-      .loc_0xAC
  subi      r3, r3, 0xC

.loc_0xAC:
  mr        r25, r3
  b         .loc_0x174

.loc_0xB4:
  lwz       r27, 0xC(r25)
  mr        r4, r31
  li        r5, 0
  mr        r3, r27
  bl        -0x3916FC
  addi      r26, r27, 0xDC
  mr        r3, r26
  bl        -0x391B8C
  mr        r24, r3
  b         .loc_0x154

.loc_0xDC:
  mr        r3, r24
  bl        -0x391B88
  mr        r4, r31
  mr        r27, r3
  li        r5, 0
  bl        -0x391728
  mr        r3, r27
  bl        -0xC6FE8
  mr        r27, r3
  bl        -0x391BBC
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x391BDC
  b         .loc_0x12C

.loc_0x114:
  addi      r3, r1, 0x8
  bl        -0xC7014
  mr        r4, r31
  bl        .loc_0x0
  addi      r3, r1, 0x8
  bl        -0x391C14

.loc_0x12C:
  mr        r3, r27
  bl        -0x391C24
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x391C48
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x114
  mr        r3, r24
  bl        -0x391C6C
  mr        r24, r3

.loc_0x154:
  mr        r3, r26
  bl        -0x391C4C
  cmplw     r24, r3
  bne+      .loc_0xDC
  lwz       r25, 0x18(r25)
  cmplwi    r25, 0
  beq-      .loc_0x174
  subi      r25, r25, 0xC

.loc_0x174:
  cmplwi    r25, 0
  bne+      .loc_0xB4
  lwz       r28, 0x18(r28)
  cmplwi    r28, 0
  beq-      .loc_0x18C
  subi      r28, r28, 0xC

.loc_0x18C:
  cmplwi    r28, 0
  bne+      .loc_0x84
  lwz       r29, 0x18(r29)
  cmplwi    r29, 0
  beq-      .loc_0x1A4
  subi      r29, r29, 0xC

.loc_0x1A4:
  cmplwi    r29, 0
  bne+      .loc_0x5C
  lwz       r30, 0x18(r30)
  cmplwi    r30, 0
  beq-      .loc_0x1BC
  subi      r30, r30, 0xC

.loc_0x1BC:
  cmplwi    r30, 0
  bne+      .loc_0x34
  lmw       r24, 0x10(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803CA5BC
 * Size:	0001A4
 */
void ebi::E2DPane_setTreeShow(J2DPane *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0x1
  stmw      r25, 0x14(r1)
  stb       r0, 0xB0(r3)
  lwz       r31, 0xDC(r3)
  cmplwi    r31, 0
  beq-      .loc_0x188
  subi      r31, r31, 0xC
  b         .loc_0x188

.loc_0x2C:
  lwz       r3, 0xC(r31)
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lwz       r30, 0xDC(r3)
  cmplwi    r30, 0
  beq-      .loc_0x170
  subi      r30, r30, 0xC
  b         .loc_0x170

.loc_0x4C:
  lwz       r3, 0xC(r30)
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  lwz       r29, 0xDC(r3)
  cmplwi    r29, 0
  beq-      .loc_0x158
  subi      r29, r29, 0xC
  b         .loc_0x158

.loc_0x6C:
  lwz       r3, 0xC(r29)
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  addi      r3, r3, 0xDC
  bl        -0x3A6A18
  cmplwi    r3, 0
  beq-      .loc_0x8C
  subi      r3, r3, 0xC

.loc_0x8C:
  mr        r26, r3
  b         .loc_0x140

.loc_0x94:
  lwz       r3, 0xC(r26)
  li        r0, 0x1
  addi      r27, r3, 0xDC
  stb       r0, 0xB0(r3)
  mr        r3, r27
  bl        -0x391D3C
  mr        r25, r3
  b         .loc_0x120

.loc_0xB4:
  mr        r3, r25
  bl        -0x391D38
  mr        r28, r3
  bl        .loc_0x1A4
  mr        r3, r28
  bl        -0xC7190
  mr        r28, r3
  bl        -0x391D64
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x391D84
  b         .loc_0xF8

.loc_0xE4:
  addi      r3, r1, 0x8
  bl        -0xC71BC
  bl        .loc_0x0
  addi      r3, r1, 0x8
  bl        -0x391DB8

.loc_0xF8:
  mr        r3, r28
  bl        -0x391DC8
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x391DEC
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0xE4
  mr        r3, r25
  bl        -0x391E10
  mr        r25, r3

.loc_0x120:
  mr        r3, r27
  bl        -0x391DF0
  cmplw     r25, r3
  bne+      .loc_0xB4
  lwz       r26, 0x18(r26)
  cmplwi    r26, 0
  beq-      .loc_0x140
  subi      r26, r26, 0xC

.loc_0x140:
  cmplwi    r26, 0
  bne+      .loc_0x94
  lwz       r29, 0x18(r29)
  cmplwi    r29, 0
  beq-      .loc_0x158
  subi      r29, r29, 0xC

.loc_0x158:
  cmplwi    r29, 0
  bne+      .loc_0x6C
  lwz       r30, 0x18(r30)
  cmplwi    r30, 0
  beq-      .loc_0x170
  subi      r30, r30, 0xC

.loc_0x170:
  cmplwi    r30, 0
  bne+      .loc_0x4C
  lwz       r31, 0x18(r31)
  cmplwi    r31, 0
  beq-      .loc_0x188
  subi      r31, r31, 0xC

.loc_0x188:
  cmplwi    r31, 0
  bne+      .loc_0x2C
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x1A4:
*/
}

/*
 * --INFO--
 * Address:	803CA760
 * Size:	00000C
 */
void J2DPane::show()
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803CA76C
 * Size:	0001A4
 */
void ebi::E2DPane_setTreeHide(J2DPane *)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  li        r0, 0
  stmw      r25, 0x14(r1)
  stb       r0, 0xB0(r3)
  lwz       r31, 0xDC(r3)
  cmplwi    r31, 0
  beq-      .loc_0x188
  subi      r31, r31, 0xC
  b         .loc_0x188

.loc_0x2C:
  lwz       r3, 0xC(r31)
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r30, 0xDC(r3)
  cmplwi    r30, 0
  beq-      .loc_0x170
  subi      r30, r30, 0xC
  b         .loc_0x170

.loc_0x4C:
  lwz       r3, 0xC(r30)
  li        r0, 0
  stb       r0, 0xB0(r3)
  lwz       r29, 0xDC(r3)
  cmplwi    r29, 0
  beq-      .loc_0x158
  subi      r29, r29, 0xC
  b         .loc_0x158

.loc_0x6C:
  lwz       r3, 0xC(r29)
  li        r0, 0
  stb       r0, 0xB0(r3)
  addi      r3, r3, 0xDC
  bl        -0x3A6BC8
  cmplwi    r3, 0
  beq-      .loc_0x8C
  subi      r3, r3, 0xC

.loc_0x8C:
  mr        r26, r3
  b         .loc_0x140

.loc_0x94:
  lwz       r3, 0xC(r26)
  li        r0, 0
  addi      r27, r3, 0xDC
  stb       r0, 0xB0(r3)
  mr        r3, r27
  bl        -0x391EEC
  mr        r25, r3
  b         .loc_0x120

.loc_0xB4:
  mr        r3, r25
  bl        -0x391EE8
  mr        r28, r3
  bl        .loc_0x1A4
  mr        r3, r28
  bl        -0xC7340
  mr        r28, r3
  bl        -0x391F14
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x391F34
  b         .loc_0xF8

.loc_0xE4:
  addi      r3, r1, 0x8
  bl        -0xC736C
  bl        .loc_0x0
  addi      r3, r1, 0x8
  bl        -0x391F68

.loc_0xF8:
  mr        r3, r28
  bl        -0x391F78
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x391F9C
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0xE4
  mr        r3, r25
  bl        -0x391FC0
  mr        r25, r3

.loc_0x120:
  mr        r3, r27
  bl        -0x391FA0
  cmplw     r25, r3
  bne+      .loc_0xB4
  lwz       r26, 0x18(r26)
  cmplwi    r26, 0
  beq-      .loc_0x140
  subi      r26, r26, 0xC

.loc_0x140:
  cmplwi    r26, 0
  bne+      .loc_0x94
  lwz       r29, 0x18(r29)
  cmplwi    r29, 0
  beq-      .loc_0x158
  subi      r29, r29, 0xC

.loc_0x158:
  cmplwi    r29, 0
  bne+      .loc_0x6C
  lwz       r30, 0x18(r30)
  cmplwi    r30, 0
  beq-      .loc_0x170
  subi      r30, r30, 0xC

.loc_0x170:
  cmplwi    r30, 0
  bne+      .loc_0x4C
  lwz       r31, 0x18(r31)
  cmplwi    r31, 0
  beq-      .loc_0x188
  subi      r31, r31, 0xC

.loc_0x188:
  cmplwi    r31, 0
  bne+      .loc_0x2C
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x1A4:
*/
}

/*
 * --INFO--
 * Address:	803CA910
 * Size:	00000C
 */
void J2DPane::hide()
{
/*
.loc_0x0:
  li        r0, 0
  stb       r0, 0xB0(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803CA91C
 * Size:	0003DC
 */
void ebi::E2DPane_setTreeCallBackMessage(P2DScreen::Mgr *, J2DPane *)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r23, 0x1C(r1)
  mr        r26, r4
  mr        r31, r3
  mr        r3, r26
  lwz       r12, 0x0(r26)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0xC4
  lis       r3, 0x3030
  lwz       r4, 0x18(r26)
  addi      r3, r3, 0x3030
  lwz       r5, 0x1C(r26)
  xor       r0, r4, r3
  xor       r3, r5, r3
  or.       r0, r3, r0
  beq-      .loc_0xC4
  li        r0, 0
  xor       r3, r5, r0
  xor       r0, r4, r0
  or.       r0, r3, r0
  beq-      .loc_0xC4
  lwz       r24, 0x10(r26)
  li        r3, 0x48
  lwz       r25, 0x14(r26)
  bl        -0x3A6AF0
  mr.       r27, r3
  beq-      .loc_0x8C
  bl        -0xC138C
  mr        r27, r3

.loc_0x8C:
  cmplwi    r27, 0
  bne-      .loc_0xB0
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6428
  li        r4, 0x4F
  addi      r5, r5, 0x6438
  crclr     6, 0x6
  bl        -0x3A0388

.loc_0xB0:
  mr        r3, r31
  mr        r6, r25
  mr        r5, r24
  mr        r7, r27
  bl        0x6A148

.loc_0xC4:
  lwz       r28, 0xDC(r26)
  cmplwi    r28, 0
  beq-      .loc_0x3C0
  subi      r28, r28, 0xC
  b         .loc_0x3C0

.loc_0xD8:
  lwz       r24, 0xC(r28)
  mr        r3, r24
  lwz       r12, 0x0(r24)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0x188
  lis       r3, 0x3030
  lwz       r4, 0x18(r24)
  addi      r3, r3, 0x3030
  lwz       r5, 0x1C(r24)
  xor       r0, r4, r3
  xor       r3, r5, r3
  or.       r0, r3, r0
  beq-      .loc_0x188
  li        r0, 0
  xor       r3, r5, r0
  xor       r0, r4, r0
  or.       r0, r3, r0
  beq-      .loc_0x188
  lwz       r25, 0x10(r24)
  li        r3, 0x48
  lwz       r26, 0x14(r24)
  bl        -0x3A6BB4
  mr.       r27, r3
  beq-      .loc_0x150
  bl        -0xC1450
  mr        r27, r3

.loc_0x150:
  cmplwi    r27, 0
  bne-      .loc_0x174
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6428
  li        r4, 0x4F
  addi      r5, r5, 0x6438
  crclr     6, 0x6
  bl        -0x3A044C

.loc_0x174:
  mr        r3, r31
  mr        r6, r26
  mr        r5, r25
  mr        r7, r27
  bl        0x6A084

.loc_0x188:
  addi      r3, r24, 0xDC
  bl        -0x3A6E88
  cmplwi    r3, 0
  beq-      .loc_0x19C
  subi      r3, r3, 0xC

.loc_0x19C:
  mr        r29, r3
  b         .loc_0x3A8

.loc_0x1A4:
  lwz       r27, 0xC(r29)
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0x254
  lis       r3, 0x3030
  lwz       r4, 0x18(r27)
  addi      r3, r3, 0x3030
  lwz       r5, 0x1C(r27)
  xor       r0, r4, r3
  xor       r3, r5, r3
  or.       r0, r3, r0
  beq-      .loc_0x254
  li        r0, 0
  xor       r3, r5, r0
  xor       r0, r4, r0
  or.       r0, r3, r0
  beq-      .loc_0x254
  lwz       r24, 0x10(r27)
  li        r3, 0x48
  lwz       r25, 0x14(r27)
  bl        -0x3A6C80
  mr.       r26, r3
  beq-      .loc_0x21C
  bl        -0xC151C
  mr        r26, r3

.loc_0x21C:
  cmplwi    r26, 0
  bne-      .loc_0x240
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6428
  li        r4, 0x4F
  addi      r5, r5, 0x6438
  crclr     6, 0x6
  bl        -0x3A0518

.loc_0x240:
  mr        r3, r31
  mr        r6, r25
  mr        r5, r24
  mr        r7, r26
  bl        0x69FB8

.loc_0x254:
  addi      r30, r27, 0xDC
  mr        r3, r30
  bl        -0x392250
  mr        r27, r3
  b         .loc_0x388

.loc_0x268:
  mr        r3, r27
  bl        -0x39224C
  lwz       r12, 0x0(r3)
  mr        r26, r3
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x13
  bne-      .loc_0x324
  mr        r3, r26
  bl        -0xC0E18
  lis       r5, 0x3030
  addi      r0, r5, 0x3030
  xor       r5, r4, r0
  xor       r0, r3, r0
  or.       r0, r5, r0
  beq-      .loc_0x324
  li        r0, 0
  xor       r4, r4, r0
  xor       r0, r3, r0
  or.       r0, r4, r0
  beq-      .loc_0x324
  mr        r3, r26
  bl        -0xC76E8
  mr        r25, r3
  mr        r24, r4
  li        r3, 0x48
  bl        -0x3A6D50
  mr.       r23, r3
  beq-      .loc_0x2EC
  bl        -0xC15EC
  mr        r23, r3

.loc_0x2EC:
  cmplwi    r23, 0
  bne-      .loc_0x310
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6428
  li        r4, 0x4F
  addi      r5, r5, 0x6438
  crclr     6, 0x6
  bl        -0x3A05E8

.loc_0x310:
  mr        r3, r31
  mr        r6, r24
  mr        r5, r25
  mr        r7, r23
  bl        0x69EE8

.loc_0x324:
  mr        r3, r26
  bl        -0xC7750
  mr        r26, r3
  bl        -0x392324
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x392344
  b         .loc_0x360

.loc_0x344:
  addi      r3, r1, 0x8
  bl        -0xC777C
  mr        r4, r3
  mr        r3, r31
  bl        .loc_0x0
  addi      r3, r1, 0x8
  bl        -0x392380

.loc_0x360:
  mr        r3, r26
  bl        -0x392390
  mr        r4, r3
  addi      r3, r1, 0x8
  bl        -0x3923B4
  rlwinm.   r0,r3,0,24,31
  bne+      .loc_0x344
  mr        r3, r27
  bl        -0x3923D8
  mr        r27, r3

.loc_0x388:
  mr        r3, r30
  bl        -0x3923B8
  cmplw     r27, r3
  bne+      .loc_0x268
  lwz       r29, 0x18(r29)
  cmplwi    r29, 0
  beq-      .loc_0x3A8
  subi      r29, r29, 0xC

.loc_0x3A8:
  cmplwi    r29, 0
  bne+      .loc_0x1A4
  lwz       r28, 0x18(r28)
  cmplwi    r28, 0
  beq-      .loc_0x3C0
  subi      r28, r28, 0xC

.loc_0x3C0:
  cmplwi    r28, 0
  bne+      .loc_0xD8
  lmw       r23, 0x1C(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000194
 */
void ebi::E2DPane_getCalcGlbVisible(J2DPane *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803CACF8
 * Size:	0000D0
 */
void ebi::E2DPane_getGlbCenter(J2DPane *)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr.       r31, r4
  stw       r30, 0x38(r1)
  mr        r30, r3
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6428
  li        r4, 0x73
  addi      r5, r5, 0x6438
  crclr     6, 0x6
  bl        -0x3A06F0

.loc_0x3C:
  mr        r4, r31
  addi      r3, r1, 0x14
  li        r5, 0
  bl        -0x391DA8
  lwz       r5, 0x14(r1)
  mr        r4, r31
  lwz       r6, 0x18(r1)
  addi      r3, r1, 0x8
  lwz       r0, 0x1C(r1)
  stw       r5, 0x2C(r1)
  li        r5, 0x3
  stw       r6, 0x30(r1)
  stw       r0, 0x34(r1)
  bl        -0x391DD0
  lwz       r0, 0x8(r1)
  lwz       r3, 0xC(r1)
  stw       r0, 0x20(r1)
  lwz       r0, 0x10(r1)
  stw       r3, 0x24(r1)
  lfs       f3, 0x2C(r1)
  lfs       f2, 0x20(r1)
  lfs       f1, 0x30(r1)
  lfs       f0, 0x24(r1)
  fadds     f2, f3, f2
  lfs       f3, 0x169C(r2)
  fadds     f0, f1, f0
  stw       r0, 0x28(r1)
  fmuls     f1, f3, f2
  fmuls     f0, f3, f0
  stfs      f1, 0x0(r30)
  stfs      f0, 0x4(r30)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002C0
 */
void ebi::EUTDrawWindow(J2DGrafContext &, long, long, long, long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000004
 */
void ebi::E2DDebugWindow::draw(void)
{
	// UNUSED FUNCTION
}
