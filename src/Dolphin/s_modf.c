

/*
 * --INFO--
 * Address:	800CF720
 * Size:	0000FC
 */
void modf(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  stfd      f1, 0x8(r1)
  lwz       r5, 0x8(r1)
  lwz       r6, 0xC(r1)
  rlwinm    r4,r5,12,21,31
  subi      r7, r4, 0x3FF
  cmpwi     r7, 0x14
  bge-      .loc_0x8C
  cmpwi     r7, 0
  bge-      .loc_0x3C
  rlwinm    r4,r5,0,0,0
  li        r0, 0
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)
  b         .loc_0xF4

.loc_0x3C:
  lis       r4, 0x10
  subi      r0, r4, 0x1
  sraw      r4, r0, r7
  and       r0, r5, r4
  or.       r0, r6, r0
  bne-      .loc_0x70
  rlwinm    r4,r5,0,0,0
  li        r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stfd      f1, 0x0(r3)
  lfd       f1, 0x8(r1)
  b         .loc_0xF4

.loc_0x70:
  andc      r4, r5, r4
  li        r0, 0
  stw       r4, 0x0(r3)
  stw       r0, 0x4(r3)
  lfd       f0, 0x0(r3)
  fsub      f1, f1, f0
  b         .loc_0xF4

.loc_0x8C:
  cmpwi     r7, 0x33
  ble-      .loc_0xB0
  rlwinm    r4,r5,0,0,0
  li        r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stfd      f1, 0x0(r3)
  lfd       f1, 0x8(r1)
  b         .loc_0xF4

.loc_0xB0:
  subi      r0, r7, 0x14
  li        r4, -0x1
  srw       r4, r4, r0
  and.      r0, r6, r4
  bne-      .loc_0xE0
  rlwinm    r4,r5,0,0,0
  li        r0, 0
  stw       r4, 0x8(r1)
  stw       r0, 0xC(r1)
  stfd      f1, 0x0(r3)
  lfd       f1, 0x8(r1)
  b         .loc_0xF4

.loc_0xE0:
  stw       r5, 0x0(r3)
  andc      r0, r6, r4
  stw       r0, 0x4(r3)
  lfd       f0, 0x0(r3)
  fsub      f1, f1, f0

.loc_0xF4:
  addi      r1, r1, 0x10
  blr
*/
}