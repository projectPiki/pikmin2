

/*
 * --INFO--
 * Address:	800CF55C
 * Size:	0001C4
 */
void ldexp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stfd      f1, 0x10(r1)
  lwz       r5, 0x10(r1)
  stw       r0, 0x24(r1)
  lis       r0, 0x7FF0
  rlwinm    r4,r5,0,1,11
  cmpw      r4, r0
  stfd      f1, 0x8(r1)
  beq-      .loc_0x38
  bge-      .loc_0x80
  cmpwi     r4, 0
  beq-      .loc_0x5C
  b         .loc_0x80

.loc_0x38:
  rlwinm.   r0,r5,0,12,31
  bne-      .loc_0x4C
  lwz       r0, 0x14(r1)
  cmpwi     r0, 0
  beq-      .loc_0x54

.loc_0x4C:
  li        r0, 0x1
  b         .loc_0x84

.loc_0x54:
  li        r0, 0x2
  b         .loc_0x84

.loc_0x5C:
  rlwinm.   r0,r5,0,12,31
  bne-      .loc_0x70
  lwz       r0, 0x14(r1)
  cmpwi     r0, 0
  beq-      .loc_0x78

.loc_0x70:
  li        r0, 0x5
  b         .loc_0x84

.loc_0x78:
  li        r0, 0x3
  b         .loc_0x84

.loc_0x80:
  li        r0, 0x4

.loc_0x84:
  cmpwi     r0, 0x2
  ble-      .loc_0x1B4
  lfd       f0, -0x6DB0(r2)
  fcmpu     cr0, f0, f1
  bne-      .loc_0x9C
  b         .loc_0x1B4

.loc_0x9C:
  lwz       r5, 0x8(r1)
  lwz       r6, 0xC(r1)
  rlwinm.   r4,r5,12,21,31
  bne-      .loc_0xF4
  rlwinm    r0,r5,0,1,31
  or.       r0, r6, r0
  bne-      .loc_0xBC
  b         .loc_0x1B4

.loc_0xBC:
  lfd       f1, 0x8(r1)
  lis       r4, 0xFFFF
  lfd       f0, -0x6DA8(r2)
  addi      r0, r4, 0x3CB0
  cmpw      r3, r0
  fmul      f1, f1, f0
  stfd      f1, 0x8(r1)
  lwz       r5, 0x8(r1)
  rlwinm    r4,r5,12,21,31
  subi      r4, r4, 0x36
  bge-      .loc_0xF4
  lfd       f0, -0x6DA0(r2)
  fmul      f1, f0, f1
  b         .loc_0x1B4

.loc_0xF4:
  cmpwi     r4, 0x7FF
  bne-      .loc_0x108
  lfd       f0, 0x8(r1)
  fadd      f1, f0, f0
  b         .loc_0x1B4

.loc_0x108:
  add       r4, r4, r3
  cmpwi     r4, 0x7FE
  ble-      .loc_0x12C
  lfd       f1, -0x6D98(r2)
  lfd       f2, 0x8(r1)
  bl        -0x3EC
  lfd       f0, -0x6D98(r2)
  fmul      f1, f0, f1
  b         .loc_0x1B4

.loc_0x12C:
  cmpwi     r4, 0
  ble-      .loc_0x14C
  rlwinm    r3,r5,0,12,0
  rlwinm    r0,r4,20,0,11
  or        r0, r3, r0
  stw       r0, 0x8(r1)
  lfd       f1, 0x8(r1)
  b         .loc_0x1B4

.loc_0x14C:
  cmpwi     r4, -0x36
  bgt-      .loc_0x194
  lis       r4, 0x1
  subi      r0, r4, 0x3CB0
  cmpw      r3, r0
  ble-      .loc_0x17C
  lfd       f1, -0x6D98(r2)
  lfd       f2, 0x8(r1)
  bl        -0x43C
  lfd       f0, -0x6D98(r2)
  fmul      f1, f0, f1
  b         .loc_0x1B4

.loc_0x17C:
  lfd       f1, -0x6DA0(r2)
  lfd       f2, 0x8(r1)
  bl        -0x454
  lfd       f0, -0x6DA0(r2)
  fmul      f1, f0, f1
  b         .loc_0x1B4

.loc_0x194:
  addi      r0, r4, 0x36
  rlwinm    r3,r5,0,12,0
  rlwinm    r0,r0,20,0,11
  lfd       f1, -0x6D90(r2)
  or        r0, r3, r0
  stw       r0, 0x8(r1)
  lfd       f0, 0x8(r1)
  fmul      f1, f1, f0

.loc_0x1B4:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}