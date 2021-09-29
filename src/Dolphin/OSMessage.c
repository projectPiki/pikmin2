

/*
 * --INFO--
 * Address:	800EF4BC
 * Size:	000060
 */
void OSInitMessageQueue(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stw       r31, 0x24(r1)
  addi      r31, r5, 0
  stw       r30, 0x20(r1)
  addi      r30, r4, 0
  stw       r29, 0x1C(r1)
  addi      r29, r3, 0
  bl        0x24D4
  addi      r3, r29, 0x8
  bl        0x24CC
  stw       r30, 0x10(r29)
  li        r0, 0
  stw       r31, 0x14(r29)
  stw       r0, 0x18(r29)
  stw       r0, 0x1C(r29)
  lwz       r0, 0x2C(r1)
  lwz       r31, 0x24(r1)
  lwz       r30, 0x20(r1)
  lwz       r29, 0x1C(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800EF51C
 * Size:	0000C8
 */
void OSSendMessage(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stw       r31, 0x24(r1)
  addi      r31, r5, 0
  stw       r30, 0x20(r1)
  stw       r29, 0x1C(r1)
  addi      r29, r4, 0
  stw       r28, 0x18(r1)
  addi      r28, r3, 0
  bl        -0x90C
  addi      r30, r3, 0
  rlwinm    r31,r31,0,31,31
  b         .loc_0x58

.loc_0x38:
  cmpwi     r31, 0
  bne-      .loc_0x50
  mr        r3, r30
  bl        -0x900
  li        r3, 0
  b         .loc_0xA8

.loc_0x50:
  mr        r3, r28
  bl        0x337C

.loc_0x58:
  lwz       r6, 0x14(r28)
  lwz       r4, 0x1C(r28)
  cmpw      r6, r4
  ble+      .loc_0x38
  lwz       r0, 0x18(r28)
  addi      r3, r28, 0x8
  lwz       r5, 0x10(r28)
  add       r4, r0, r4
  divw      r0, r4, r6
  mullw     r0, r0, r6
  sub       r0, r4, r0
  rlwinm    r0,r0,2,0,29
  stwx      r29, r5, r0
  lwz       r4, 0x1C(r28)
  addi      r0, r4, 0x1
  stw       r0, 0x1C(r28)
  bl        0x3424
  mr        r3, r30
  bl        -0x95C
  li        r3, 0x1

.loc_0xA8:
  lwz       r0, 0x2C(r1)
  lwz       r31, 0x24(r1)
  lwz       r30, 0x20(r1)
  lwz       r29, 0x1C(r1)
  lwz       r28, 0x18(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800EF5E4
 * Size:	0000DC
 */
void OSReceiveMessage(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stw       r31, 0x24(r1)
  addi      r31, r3, 0
  stw       r30, 0x20(r1)
  addi      r30, r5, 0
  stw       r29, 0x1C(r1)
  stw       r28, 0x18(r1)
  addi      r28, r4, 0
  bl        -0x9D4
  addi      r29, r3, 0
  rlwinm    r30,r30,0,31,31
  b         .loc_0x58

.loc_0x38:
  cmpwi     r30, 0
  bne-      .loc_0x50
  mr        r3, r29
  bl        -0x9C8
  li        r3, 0
  b         .loc_0xBC

.loc_0x50:
  addi      r3, r31, 0x8
  bl        0x32B4

.loc_0x58:
  lwz       r0, 0x1C(r31)
  cmpwi     r0, 0
  beq+      .loc_0x38
  cmplwi    r28, 0
  beq-      .loc_0x80
  lwz       r0, 0x18(r31)
  lwz       r3, 0x10(r31)
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r3, r0
  stw       r0, 0x0(r28)

.loc_0x80:
  lwz       r5, 0x18(r31)
  mr        r3, r31
  lwz       r4, 0x14(r31)
  addi      r5, r5, 0x1
  divw      r0, r5, r4
  mullw     r0, r0, r4
  sub       r0, r5, r0
  stw       r0, 0x18(r31)
  lwz       r4, 0x1C(r31)
  subi      r0, r4, 0x1
  stw       r0, 0x1C(r31)
  bl        0x3348
  mr        r3, r29
  bl        -0xA38
  li        r3, 0x1

.loc_0xBC:
  lwz       r0, 0x2C(r1)
  lwz       r31, 0x24(r1)
  lwz       r30, 0x20(r1)
  lwz       r29, 0x1C(r1)
  lwz       r28, 0x18(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800EF6C0
 * Size:	0000D4
 */
void OSJamMessage(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stw       r31, 0x24(r1)
  addi      r31, r3, 0
  stw       r30, 0x20(r1)
  addi      r30, r5, 0
  stw       r29, 0x1C(r1)
  stw       r28, 0x18(r1)
  addi      r28, r4, 0
  bl        -0xAB0
  addi      r29, r3, 0
  rlwinm    r30,r30,0,31,31
  b         .loc_0x58

.loc_0x38:
  cmpwi     r30, 0
  bne-      .loc_0x50
  mr        r3, r29
  bl        -0xAA4
  li        r3, 0
  b         .loc_0xB4

.loc_0x50:
  mr        r3, r31
  bl        0x31D8

.loc_0x58:
  lwz       r5, 0x14(r31)
  lwz       r0, 0x1C(r31)
  cmpw      r5, r0
  ble+      .loc_0x38
  lwz       r4, 0x18(r31)
  subi      r0, r5, 0x1
  addi      r3, r31, 0x8
  add       r4, r4, r0
  divw      r0, r4, r5
  mullw     r0, r0, r5
  sub       r0, r4, r0
  stw       r0, 0x18(r31)
  lwz       r0, 0x18(r31)
  lwz       r4, 0x10(r31)
  rlwinm    r0,r0,2,0,29
  stwx      r28, r4, r0
  lwz       r4, 0x1C(r31)
  addi      r0, r4, 0x1
  stw       r0, 0x1C(r31)
  bl        0x3274
  mr        r3, r29
  bl        -0xB0C
  li        r3, 0x1

.loc_0xB4:
  lwz       r0, 0x2C(r1)
  lwz       r31, 0x24(r1)
  lwz       r30, 0x20(r1)
  lwz       r29, 0x1C(r1)
  lwz       r28, 0x18(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr
*/
}