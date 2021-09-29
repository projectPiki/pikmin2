

/*
 * --INFO--
 * Address:	800F675C
 * Size:	0000E4
 */
void SISetSamplingRate(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x20(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  addi      r29, r3, 0
  cmplwi    r29, 0xB
  lis       r3, 0x804B
  subi      r31, r3, 0x6030
  ble-      .loc_0x30
  li        r29, 0xB

.loc_0x30:
  bl        -0x7B54
  stw       r29, -0x6FD0(r13)
  mr        r30, r3
  bl        -0x24474
  cmpwi     r3, 0x2
  beq-      .loc_0x68
  bge-      .loc_0x5C
  cmpwi     r3, 0
  beq-      .loc_0x68
  bge-      .loc_0x70
  b         .loc_0x78

.loc_0x5C:
  cmpwi     r3, 0x5
  beq-      .loc_0x68
  b         .loc_0x78

.loc_0x68:
  mr        r4, r31
  b         .loc_0x8C

.loc_0x70:
  addi      r4, r31, 0x30
  b         .loc_0x8C

.loc_0x78:
  addi      r3, r31, 0x60
  crclr     6, 0x6
  bl        -0x90F0
  li        r29, 0
  addi      r4, r31, 0

.loc_0x8C:
  lis       r3, 0xCC00
  lhz       r0, 0x206C(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xA4
  li        r5, 0x2
  b         .loc_0xA8

.loc_0xA4:
  li        r5, 0x1

.loc_0xA8:
  rlwinm    r3,r29,2,0,29
  lhzx      r0, r4, r3
  add       r3, r4, r3
  lbz       r4, 0x2(r3)
  mullw     r3, r5, r0
  bl        -0xCC8
  mr        r3, r30
  bl        -0x7BC0
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  addi      r1, r1, 0x20
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800F6840
 * Size:	000024
 */
void SIRefreshSamplingRate(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x8(r1)
  lwz       r3, -0x6FD0(r13)
  bl        -0xF4
  lwz       r0, 0xC(r1)
  addi      r1, r1, 0x8
  mtlr      r0
  blr
*/
}