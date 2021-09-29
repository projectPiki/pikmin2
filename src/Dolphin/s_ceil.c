

/*
 * --INFO--
 * Address:	800CF148
 * Size:	000144
 */
void ceil(void)
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
  bge-      .loc_0xB0
  cmpwi     r7, 0
  bge-      .loc_0x64
  lfd       f2, -0x6DE0(r2)
  lfd       f0, -0x6DD8(r2)
  fadd      f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x130
  cmpwi     r5, 0
  bge-      .loc_0x50
  lis       r5, 0x8000
  li        r6, 0
  b         .loc_0x130

.loc_0x50:
  or.       r0, r5, r6
  beq-      .loc_0x130
  lis       r5, 0x3FF0
  li        r6, 0
  b         .loc_0x130

.loc_0x64:
  lis       r3, 0x10
  subi      r0, r3, 0x1
  sraw      r4, r0, r7
  and       r0, r5, r4
  or.       r0, r6, r0
  bne-      .loc_0x80
  b         .loc_0x13C

.loc_0x80:
  lfd       f2, -0x6DE0(r2)
  lfd       f0, -0x6DD8(r2)
  fadd      f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x130
  cmpwi     r5, 0
  ble-      .loc_0xA4
  sraw      r0, r3, r7
  add       r5, r5, r0

.loc_0xA4:
  andc      r5, r5, r4
  li        r6, 0
  b         .loc_0x130

.loc_0xB0:
  cmpwi     r7, 0x33
  ble-      .loc_0xC8
  cmpwi     r7, 0x400
  bne-      .loc_0x13C
  fadd      f1, f1, f1
  b         .loc_0x13C

.loc_0xC8:
  subi      r0, r7, 0x14
  li        r3, -0x1
  srw       r4, r3, r0
  and.      r0, r6, r4
  bne-      .loc_0xE0
  b         .loc_0x13C

.loc_0xE0:
  lfd       f2, -0x6DE0(r2)
  lfd       f0, -0x6DD8(r2)
  fadd      f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x130
  cmpwi     r5, 0
  ble-      .loc_0x12C
  cmpwi     r7, 0x14
  bne-      .loc_0x10C
  addi      r5, r5, 0x1
  b         .loc_0x12C

.loc_0x10C:
  subfic    r0, r7, 0x34
  li        r3, 0x1
  slw       r0, r3, r0
  add       r0, r6, r0
  cmplw     r0, r6
  bge-      .loc_0x128
  addi      r5, r5, 0x1

.loc_0x128:
  mr        r6, r0

.loc_0x12C:
  andc      r6, r6, r4

.loc_0x130:
  stw       r5, 0x8(r1)
  stw       r6, 0xC(r1)
  lfd       f1, 0x8(r1)

.loc_0x13C:
  addi      r1, r1, 0x10
  blr
*/
}