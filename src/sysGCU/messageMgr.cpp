

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void P2JME::getCurrentFontResName()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void P2JME::getCurrentMesResName()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80437EAC
 * Size:	000040
 */
void create__Q25P2JME3MgrFP10JKRExpHeap(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x38
  bl        -0x414020
  cmplwi    r3, 0
  beq-      .loc_0x2C
  mr        r4, r31
  bl        .loc_0x40

.loc_0x2C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x40:
*/
}

/*
 * --INFO--
 * Address:	80437EEC
 * Size:	000170
 */
void __ct__Q25P2JME3MgrFP10JKRExpHeap(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r5, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  subi      r30, r5, 0x5730
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  bl        -0x41AF4C
  lis       r3, 0x804F
  li        r0, 0
  subi      r3, r3, 0x3620
  stw       r3, 0x0(r28)
  stw       r0, 0x1C(r28)
  stw       r0, 0x20(r28)
  stw       r0, 0x24(r28)
  stb       r0, 0x28(r28)
  stw       r0, 0x2C(r28)
  stw       r0, 0x30(r28)
  stw       r0, 0x34(r28)
  lwz       r0, -0x6428(r13)
  cmplwi    r0, 0
  beq-      .loc_0x7C
  addi      r3, r30, 0x16C
  addi      r5, r30, 0x17C
  li        r4, 0xC2
  crclr     6, 0x6
  bl        -0x40D924

.loc_0x7C:
  stw       r28, -0x6428(r13)
  addi      r4, r30, 0x188
  lwz       r3, -0x6514(r13)
  li        r5, 0
  bl        -0x14C1C
  li        r3, 0x4
  bl        -0x413FD4
  stw       r3, 0x24(r28)
  li        r3, 0x4
  bl        -0x413FE0
  stw       r3, 0x20(r28)
  li        r31, 0
  li        r3, 0x4
  lwz       r4, 0x24(r28)
  stw       r31, 0x0(r4)
  bl        -0x414100
  lwz       r6, 0x20(r28)
  addi      r4, r30, 0x194
  li        r5, 0
  stw       r3, 0x0(r6)
  lwz       r3, 0x20(r28)
  stw       r31, 0x0(r3)
  lwz       r3, -0x6514(r13)
  bl        -0x14C68
  mr        r3, r28
  mr        r5, r29
  addi      r4, r30, 0x1A0
  bl        0x2E8
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x194
  bl        -0x14C7C
  lwz       r3, -0x6514(r13)
  addi      r4, r2, 0x2530
  li        r5, 0
  bl        -0x14C94
  mr        r3, r28
  bl        0x1CC
  lwz       r3, -0x6514(r13)
  addi      r4, r2, 0x2530
  bl        -0x14CA0
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x188
  bl        -0x14CAC
  lwz       r30, -0x77D4(r13)
  li        r0, 0
  mr        r3, r28
  stw       r0, 0x2C(r28)
  bl        0xA0
  mr        r3, r30
  bl        -0x414A88
  li        r0, 0x1
  mr        r3, r28
  stb       r0, 0x28(r28)
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

/*
 * --INFO--
 * Address:	8043805C
 * Size:	000068
 */
void __dt__Q25P2JME3MgrFv(void)
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
  beq-      .loc_0x4C
  lis       r4, 0x804F
  li        r0, 0
  subi      r5, r4, 0x3620
  li        r4, 0
  stw       r5, 0x0(r30)
  stw       r0, -0x6428(r13)
  bl        -0x41B060
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x413FF0

.loc_0x4C:
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
 * Address:	........
 * Size:	000004
 */
void reloadMessageResource__Q25P2JME3MgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804380C4
 * Size:	000100
 */
void setupMessage__Q25P2JME3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804F
  lis       r6, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  subi      r3, r4, 0x3668
  li        r4, 0x1
  stw       r30, 0x18(r1)
  subi      r30, r6, 0x5730
  li        r6, 0x1
  stw       r29, 0x14(r1)
  lwz       r5, -0x6514(r13)
  lwz       r0, 0xD4(r5)
  li        r5, 0
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        -0x41CFDC
  mr.       r29, r3
  bne-      .loc_0x68
  addi      r3, r30, 0x16C
  addi      r5, r30, 0x17C
  li        r4, 0x130
  crclr     6, 0x6
  bl        -0x40DAE8

.loc_0x68:
  li        r3, 0x20
  bl        -0x41428C
  mr.       r0, r3
  beq-      .loc_0x80
  bl        -0x431A2C
  mr        r0, r3

.loc_0x80:
  stw       r0, 0x30(r31)
  li        r3, 0x8
  bl        -0x4142A8
  cmplwi    r3, 0
  beq-      .loc_0xB4
  lis       r5, 0x804A
  lis       r4, 0x804F
  subi      r0, r5, 0x1BB8
  li        r5, 0
  stw       r0, 0x0(r3)
  subi      r0, r4, 0x3420
  stw       r5, 0x4(r3)
  stw       r0, 0x0(r3)

.loc_0xB4:
  stw       r3, 0x34(r31)
  mr        r3, r31
  mr        r4, r29
  addi      r5, r30, 0x1B0
  lwz       r0, 0x30(r31)
  lwz       r6, 0x34(r31)
  stw       r0, 0x4(r6)
  bl        0x694
  mr        r3, r31
  mr        r4, r29
  addi      r5, r30, 0x1BC
  bl        0x788
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
 * Address:	804381C4
 * Size:	0000F8
 */
void setupTex__Q25P2JME3MgrFv(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x804A
  li        r5, 0
  stw       r0, 0x34(r1)
  li        r6, 0x1
  stmw      r25, 0x14(r1)
  subi      r30, r4, 0x5730
  mr        r31, r3
  li        r4, 0x1
  addi      r3, r30, 0x1C8
  bl        -0x41D0C0
  mr        r29, r3
  mr        r3, r31
  li        r4, 0
  li        r5, 0xB
  bl        0x300
  lis       r3, 0x804F
  li        r25, 0
  subi      r27, r3, 0x364C
  b         .loc_0xD4

.loc_0x54:
  mr        r3, r29
  lwz       r4, 0x0(r27)
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r26, r3
  bne-      .loc_0x88
  addi      r3, r30, 0x16C
  addi      r5, r30, 0x17C
  li        r4, 0x158
  crclr     6, 0x6
  bl        -0x40DC08

.loc_0x88:
  li        r3, 0x40
  bl        -0x4143AC
  mr.       r28, r3
  beq-      .loc_0xB8
  li        r0, 0
  mr        r4, r26
  stw       r0, 0x28(r28)
  li        r5, 0
  bl        -0x4051E8
  lbz       r0, 0x3B(r28)
  rlwinm    r0,r0,0,30,30
  stb       r0, 0x3B(r28)

.loc_0xB8:
  mr        r3, r31
  mr        r5, r25
  mr        r6, r28
  li        r4, 0
  bl        0x420
  addi      r27, r27, 0x4
  addi      r25, r25, 0x1

.loc_0xD4:
  lwz       r3, 0x24(r31)
  lwz       r0, 0x0(r3)
  cmpw      r25, r0
  blt+      .loc_0x54
  lmw       r25, 0x14(r1)
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	804382BC
 * Size:	000248
 */
void setupFont__Q25P2JME3MgrFPCcP10JKRExpHeap(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r7, 0x804A
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  subi      r31, r7, 0x5730
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  stw       r28, 0x10(r1)
  mr        r28, r5
  lwz       r6, -0x6514(r13)
  lwz       r0, 0xD4(r6)
  cmpwi     r0, 0x5
  bne-      .loc_0x18C
  lwz       r3, -0x78E0(r13)
  lwz       r3, 0x94(r3)
  bl        -0x41E93C
  lwz       r4, -0x6514(r13)
  lis       r3, 0x804F
  subi      r3, r3, 0x3684
  mr        r5, r28
  lwz       r0, 0xD4(r4)
  li        r4, 0x1
  li        r6, 0x2
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  bl        -0x41D1FC
  mr.       r28, r3
  bne-      .loc_0x90
  addi      r3, r31, 0x16C
  addi      r5, r31, 0x17C
  li        r4, 0x170
  crclr     6, 0x6
  bl        -0x40DD08

.loc_0x90:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x1E8
  li        r5, 0
  bl        -0x14FFC
  mr        r3, r28
  mr        r4, r30
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r30, r3
  bne-      .loc_0xD4
  addi      r3, r31, 0x16C
  addi      r5, r31, 0x17C
  li        r4, 0x173
  crclr     6, 0x6
  bl        -0x40DD4C

.loc_0xD4:
  li        r3, 0xB8
  bl        -0x4144F0
  mr.       r0, r3
  beq-      .loc_0xFC
  lis       r5, 0x5
  lwz       r6, -0x77D4(r13)
  mr        r4, r30
  subi      r5, r5, 0x3D40
  bl        -0x40441C
  mr        r0, r3

.loc_0xFC:
  stw       r0, 0x18(r29)
  lwz       r0, 0x18(r29)
  cmplwi    r0, 0
  bne-      .loc_0x120
  addi      r3, r31, 0x16C
  addi      r5, r31, 0x17C
  li        r4, 0x176
  crclr     6, 0x6
  bl        -0x40DD98

.loc_0x120:
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x1E8
  bl        -0x15080
  lwz       r3, 0x18(r29)
  lbz       r0, 0x4(r3)
  cmplwi    r0, 0
  bne-      .loc_0x150
  addi      r3, r31, 0x16C
  addi      r5, r31, 0x17C
  li        r4, 0x17A
  crclr     6, 0x6
  bl        -0x40DDC8

.loc_0x150:
  lwz       r3, 0x18(r29)
  li        r0, 0x1
  addi      r4, r31, 0x1F4
  li        r5, 0x1
  stw       r0, 0x8C(r3)
  lwz       r3, 0x18(r29)
  bl        -0x4036DC
  mr        r3, r30
  bl        -0x414378
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x228

.loc_0x18C:
  lis       r3, 0x804F
  rlwinm    r0,r0,2,0,29
  subi      r3, r3, 0x3684
  lwz       r5, -0x77D4(r13)
  lwzx      r3, r3, r0
  li        r4, 0x1
  li        r6, 0x1
  bl        -0x41D334
  mr.       r28, r3
  bne-      .loc_0x1C8
  addi      r3, r31, 0x16C
  addi      r5, r31, 0x17C
  li        r4, 0x197
  crclr     6, 0x6
  bl        -0x40DE40

.loc_0x1C8:
  lwz       r3, -0x6514(r13)
  addi      r4, r2, 0x2538
  li        r5, 0
  bl        -0x15134
  mr        r3, r28
  mr        r4, r30
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r0, r3
  li        r3, 0x70
  mr        r28, r0
  bl        -0x414614
  mr.       r0, r3
  beq-      .loc_0x218
  lwz       r5, -0x77D4(r13)
  mr        r4, r28
  bl        -0x407300
  mr        r0, r3

.loc_0x218:
  stw       r0, 0x18(r29)
  addi      r4, r2, 0x2538
  lwz       r3, -0x6514(r13)
  bl        -0x1517C

.loc_0x228:
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
 * Address:	80438504
 * Size:	0001A8
 */
void createImage__Q25P2JME3MgrFQ35P2JME10ImageGroup3EIDi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr.       r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r3
  blt-      .loc_0x38
  cmpwi     r31, 0x1
  bge-      .loc_0x38
  li        r0, 0x1

.loc_0x38:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x55C4
  li        r4, 0x1A7
  subi      r5, r5, 0x55B4
  crclr     6, 0x6
  bl        -0x40DF1C

.loc_0x5C:
  lwz       r3, 0x20(r29)
  rlwinm    r31,r31,2,0,29
  lwzx      r0, r3, r31
  cmplwi    r0, 0
  beq-      .loc_0x8C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x55C4
  li        r4, 0x1AA
  subi      r5, r5, 0x55B4
  crclr     6, 0x6
  bl        -0x40DF4C

.loc_0x8C:
  lwz       r4, 0x24(r29)
  rlwinm    r3,r30,2,0,29
  stwx      r30, r4, r31
  bl        -0x4145F0
  lwz       r5, 0x20(r29)
  cmpwi     r30, 0
  li        r4, 0
  stwx      r3, r5, r31
  ble-      .loc_0x18C
  cmpwi     r30, 0x8
  subi      r5, r30, 0x8
  ble-      .loc_0x160
  addi      r0, r5, 0x7
  li        r3, 0
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r5, 0
  ble-      .loc_0x160

.loc_0xD4:
  lwz       r0, 0x20(r29)
  li        r12, 0
  addi      r10, r3, 0x4
  addi      r9, r3, 0x8
  lwzx      r5, r31, r0
  addi      r8, r3, 0xC
  addi      r7, r3, 0x10
  addi      r6, r3, 0x14
  stwx      r12, r5, r3
  addi      r5, r3, 0x18
  addi      r0, r3, 0x1C
  addi      r3, r3, 0x20
  lwz       r11, 0x20(r29)
  addi      r4, r4, 0x8
  lwzx      r11, r31, r11
  stwx      r12, r11, r10
  lwz       r10, 0x20(r29)
  lwzx      r10, r31, r10
  stwx      r12, r10, r9
  lwz       r9, 0x20(r29)
  lwzx      r9, r31, r9
  stwx      r12, r9, r8
  lwz       r8, 0x20(r29)
  lwzx      r8, r31, r8
  stwx      r12, r8, r7
  lwz       r7, 0x20(r29)
  lwzx      r7, r31, r7
  stwx      r12, r7, r6
  lwz       r6, 0x20(r29)
  lwzx      r6, r31, r6
  stwx      r12, r6, r5
  lwz       r5, 0x20(r29)
  lwzx      r5, r31, r5
  stwx      r12, r5, r0
  bdnz+     .loc_0xD4

.loc_0x160:
  sub       r0, r30, r4
  rlwinm    r6,r4,2,0,29
  li        r5, 0
  mtctr     r0
  cmpw      r4, r30
  bge-      .loc_0x18C

.loc_0x178:
  lwz       r0, 0x20(r29)
  lwzx      r3, r31, r0
  stwx      r5, r3, r6
  addi      r6, r6, 0x4
  bdnz+     .loc_0x178

.loc_0x18C:
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
 * Address:	804386AC
 * Size:	0000C4
 */
void setImage__Q25P2JME3MgrFQ35P2JME10ImageGroup3EIDiP10JUTTexture(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr.       r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r5
  stw       r28, 0x10(r1)
  mr        r28, r3
  blt-      .loc_0x40
  cmpwi     r31, 0x1
  bge-      .loc_0x40
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x55C4
  li        r4, 0x1BA
  subi      r5, r5, 0x55B4
  crclr     6, 0x6
  bl        -0x40E0CC

.loc_0x64:
  lwz       r3, 0x24(r28)
  rlwinm    r31,r31,2,0,29
  lwzx      r0, r3, r31
  cmpw      r0, r29
  bgt-      .loc_0x94
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x55C4
  li        r4, 0x1BC
  subi      r5, r5, 0x55B4
  crclr     6, 0x6
  bl        -0x40E0FC

.loc_0x94:
  lwz       r3, 0x20(r28)
  rlwinm    r0,r29,2,0,29
  lwzx      r3, r3, r31
  stwx      r30, r3, r0
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

/*
 * --INFO--
 * Address:	80438770
 * Size:	0000B8
 */
void getImage__Q25P2JME3MgrFQ35P2JME10ImageGroup3EIDi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr.       r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r3
  blt-      .loc_0x38
  cmpwi     r31, 0x1
  bge-      .loc_0x38
  li        r0, 0x1

.loc_0x38:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x55C4
  li        r4, 0x1C8
  subi      r5, r5, 0x55B4
  crclr     6, 0x6
  bl        -0x40E188

.loc_0x5C:
  lwz       r3, 0x24(r29)
  rlwinm    r31,r31,2,0,29
  lwzx      r0, r3, r31
  cmpw      r0, r30
  bgt-      .loc_0x8C
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x55C4
  li        r4, 0x1CA
  subi      r5, r5, 0x55B4
  crclr     6, 0x6
  bl        -0x40E1B8

.loc_0x8C:
  lwz       r3, 0x20(r29)
  rlwinm    r0,r30,2,0,29
  lwzx      r3, r3, r31
  lwzx      r3, r3, r0
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80438828
 * Size:	000104
 */
void setupMessageResource__Q25P2JME3MgrFP10JKRArchivePCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r5
  li        r5, 0
  stw       r30, 0x28(r1)
  subi      r30, r6, 0x5730
  stw       r29, 0x24(r1)
  mr        r29, r4
  addi      r4, r2, 0x2540
  stw       r28, 0x20(r1)
  mr        r28, r3
  lwz       r3, -0x6514(r13)
  bl        -0x15508
  mr        r3, r29
  mr        r4, r31
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  bne-      .loc_0x74
  addi      r3, r30, 0x16C
  addi      r5, r30, 0x17C
  li        r4, 0x1DA
  crclr     6, 0x6
  bl        -0x40E258

.loc_0x74:
  lwz       r3, -0x6514(r13)
  addi      r4, r2, 0x2540
  bl        -0x15540
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x298
  li        r5, 0
  bl        -0x15558
  lwz       r4, 0x30(r28)
  addi      r3, r1, 0xC
  bl        -0x432128
  stw       r31, 0x8(r1)
  addi      r3, r1, 0xC
  addi      r4, r1, 0x8
  li        r5, 0
  bl        -0x4116FC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xCC
  addi      r3, r30, 0x16C
  addi      r5, r30, 0x17C
  li        r4, 0x1E4
  crclr     6, 0x6
  bl        -0x40E2B0

.loc_0xCC:
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x298
  bl        -0x15598
  addi      r3, r1, 0xC
  li        r4, -0x1
  bl        -0x432148
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
 * Address:	8043892C
 * Size:	0000E0
 */
void setupColor__Q25P2JME3MgrFP10JKRArchivePCc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r6, 0x804A
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  subi      r30, r6, 0x5730
  stw       r29, 0x24(r1)
  mr        r29, r3
  mr        r3, r4
  lwz       r12, 0x0(r4)
  mr        r4, r5
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr.       r31, r3
  bne-      .loc_0x58
  addi      r3, r30, 0x16C
  addi      r5, r30, 0x17C
  li        r4, 0x1F5
  crclr     6, 0x6
  bl        -0x40E340

.loc_0x58:
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x2AC
  li        r5, 0
  bl        -0x15634
  lwz       r4, 0x30(r29)
  addi      r3, r1, 0xC
  bl        -0x431E74
  stw       r31, 0x8(r1)
  addi      r3, r1, 0xC
  addi      r4, r1, 0x8
  li        r5, 0x20
  bl        -0x4117D8
  rlwinm.   r0,r3,0,24,31
  mr        r31, r3
  bne-      .loc_0xA8
  addi      r3, r30, 0x16C
  addi      r5, r30, 0x17C
  li        r4, 0x1FE
  crclr     6, 0x6
  bl        -0x40E390

.loc_0xA8:
  lwz       r3, -0x6514(r13)
  addi      r4, r30, 0x2AC
  bl        -0x15678
  addi      r3, r1, 0xC
  li        r4, -0x1
  bl        -0x431EA0
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
 * Address:	80438A0C
 * Size:	000028
 */
void __sinit_messageMgr_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6430(r13)
  stfsu     f0, -0x3690(r3)
  stfs      f0, -0x642C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}