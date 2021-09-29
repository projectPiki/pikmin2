

/*
 * --INFO--
 * Address:	800CF388
 * Size:	000148
 */
void floor(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  stfd      f1, 0x8(r1)
  lwz       r5, 0x8(r1)
  lwz       r6, 0xC(r1)
  rlwinm    r3,r5,12,21,31
  subi      r7, r3, 0x3FF
  cmpwi     r7, 0x14
  bge-      .loc_0xB4
  cmpwi     r7, 0
  bge-      .loc_0x68
  lfd       f2, -0x6DC8(r2)
  lfd       f0, -0x6DC0(r2)
  fadd      f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x134
  cmpwi     r5, 0
  blt-      .loc_0x50
  li        r6, 0
  li        r5, 0
  b         .loc_0x134

.loc_0x50:
  rlwinm    r0,r5,0,1,31
  or.       r0, r0, r6
  beq-      .loc_0x134
  lis       r5, 0xBFF0
  li        r6, 0
  b         .loc_0x134

.loc_0x68:
  lis       r3, 0x10
  subi      r0, r3, 0x1
  sraw      r4, r0, r7
  and       r0, r5, r4
  or.       r0, r6, r0
  bne-      .loc_0x84
  b         .loc_0x140

.loc_0x84:
  lfd       f2, -0x6DC8(r2)
  lfd       f0, -0x6DC0(r2)
  fadd      f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x134
  cmpwi     r5, 0
  bge-      .loc_0xA8
  sraw      r0, r3, r7
  add       r5, r5, r0

.loc_0xA8:
  andc      r5, r5, r4
  li        r6, 0
  b         .loc_0x134

.loc_0xB4:
  cmpwi     r7, 0x33
  ble-      .loc_0xCC
  cmpwi     r7, 0x400
  bne-      .loc_0x140
  fadd      f1, f1, f1
  b         .loc_0x140

.loc_0xCC:
  subi      r0, r7, 0x14
  li        r3, -0x1
  srw       r4, r3, r0
  and.      r0, r6, r4
  bne-      .loc_0xE4
  b         .loc_0x140

.loc_0xE4:
  lfd       f2, -0x6DC8(r2)
  lfd       f0, -0x6DC0(r2)
  fadd      f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x134
  cmpwi     r5, 0
  bge-      .loc_0x130
  cmpwi     r7, 0x14
  bne-      .loc_0x110
  addi      r5, r5, 0x1
  b         .loc_0x130

.loc_0x110:
  subfic    r0, r7, 0x34
  li        r3, 0x1
  slw       r0, r3, r0
  add       r0, r6, r0
  cmplw     r0, r6
  bge-      .loc_0x12C
  addi      r5, r5, 0x1

.loc_0x12C:
  mr        r6, r0

.loc_0x130:
  andc      r6, r6, r4

.loc_0x134:
  stw       r5, 0x8(r1)
  stw       r6, 0xC(r1)
  lfd       f1, 0x8(r1)

.loc_0x140:
  addi      r1, r1, 0x10
  blr
*/
}