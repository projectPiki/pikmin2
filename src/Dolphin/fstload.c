

/*
 * --INFO--
 * Address:	800DF914
 * Size:	0000D8
 */
void cb(void)
{
/*
.loc_0x0:
  mflr      r0
  cmpwi     r3, 0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  addi      r31, r4, 0
  ble-      .loc_0x94
  lwz       r0, -0x7180(r13)
  cmpwi     r0, 0x1
  beq-      .loc_0x60
  bge-      .loc_0xC4
  cmpwi     r0, 0
  bge-      .loc_0x38
  b         .loc_0xC4

.loc_0x38:
  li        r0, 0x1
  lwz       r4, -0x717C(r13)
  lis       r3, 0x800E
  stw       r0, -0x7180(r13)
  subi      r7, r3, 0x6EC
  addi      r3, r31, 0
  li        r5, 0x20
  li        r6, 0x420
  bl        -0xF7C
  b         .loc_0xC4

.loc_0x60:
  li        r0, 0x2
  lwz       r6, -0x717C(r13)
  stw       r0, -0x7180(r13)
  lis       r3, 0x800E
  subi      r7, r3, 0x6EC
  lwz       r5, 0x8(r6)
  mr        r3, r31
  lwz       r4, 0x10(r6)
  addi      r0, r5, 0x1F
  lwz       r6, 0x4(r6)
  rlwinm    r5,r0,0,0,26
  bl        -0xFB0
  b         .loc_0xC4

.loc_0x94:
  cmpwi     r3, -0x1
  beq-      .loc_0xC4
  cmpwi     r3, -0x4
  bne-      .loc_0xC4
  li        r0, 0
  stw       r0, -0x7180(r13)
  bl        -0xCA0
  lis       r3, 0x800E
  lwz       r4, -0x7178(r13)
  subi      r5, r3, 0x6EC
  addi      r3, r31, 0
  bl        -0xF14

.loc_0xC4:
  lwz       r0, 0x1C(r1)
  lwz       r31, 0x14(r1)
  addi      r1, r1, 0x18
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800DF9EC
 * Size:	000168
 */
void __fstLoad(void)
{
/*
.loc_0x0:
  mflr      r0
  lis       r3, 0x804A
  stw       r0, 0x4(r1)
  stwu      r1, -0x60(r1)
  stw       r31, 0x5C(r1)
  addi      r31, r3, 0x7E60
  stw       r30, 0x58(r1)
  stw       r29, 0x54(r1)
  bl        0xCA18
  lis       r3, 0x804F
  addi      r3, r3, 0x5EB8
  addi      r4, r1, 0x2B
  addi      r0, r3, 0x1F
  rlwinm    r3,r4,0,0,26
  rlwinm    r0,r0,0,0,26
  stw       r3, -0x7178(r13)
  stw       r0, -0x717C(r13)
  bl        -0xD10
  lis       r3, 0x804F
  lwz       r4, -0x7178(r13)
  lis       r5, 0x800E
  addi      r3, r3, 0x5EF8
  subi      r5, r5, 0x6EC
  bl        -0xF88

.loc_0x60:
  bl        -0xC9C
  cmpwi     r3, 0
  bne+      .loc_0x60
  lwz       r3, -0x717C(r13)
  lis       r29, 0x8000
  lis       r30, 0x8000
  lwz       r0, 0x10(r3)
  addi      r3, r29, 0
  li        r5, 0x20
  stw       r0, 0x38(r30)
  lwz       r4, -0x717C(r13)
  lwz       r0, 0xC(r4)
  stw       r0, 0x3C(r30)
  lwz       r4, -0x7178(r13)
  bl        -0xDA8E8
  subi      r3, r13, 0x7D30
  crclr     6, 0x6
  bl        0xDC5C
  lbz       r4, 0x0(r29)
  mr        r3, r31
  lbz       r5, 0x1(r29)
  crclr     6, 0x6
  lbz       r6, 0x2(r29)
  lbz       r7, 0x3(r29)
  extsb     r4, r4
  extsb     r5, r5
  extsb     r6, r6
  extsb     r7, r7
  bl        0xDC30
  lbz       r4, 0x4(r29)
  addi      r3, r31, 0x1C
  lbz       r5, 0x5(r29)
  crclr     6, 0x6
  extsb     r4, r4
  extsb     r5, r5
  bl        0xDC14
  lbz       r4, 0x6(r29)
  addi      r3, r31, 0x34
  crclr     6, 0x6
  bl        0xDC04
  lbz       r4, 0x7(r29)
  addi      r3, r31, 0x48
  crclr     6, 0x6
  bl        0xDBF4
  lbz       r0, 0x8(r30)
  cmplwi    r0, 0
  bne-      .loc_0x124
  subi      r4, r13, 0x7D2C
  b         .loc_0x128

.loc_0x124:
  subi      r4, r13, 0x7D28

.loc_0x128:
  crclr     6, 0x6
  addi      r3, r31, 0x5C
  bl        0xDBD0
  subi      r3, r13, 0x7D30
  crclr     6, 0x6
  bl        0xDBC4
  lwz       r3, -0x717C(r13)
  lwz       r3, 0x10(r3)
  bl        0xC900
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  lwz       r30, 0x58(r1)
  lwz       r29, 0x54(r1)
  addi      r1, r1, 0x60
  mtlr      r0
  blr
*/
}