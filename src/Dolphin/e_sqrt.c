

/*
 * --INFO--
 * Address:	800CFA2C
 * Size:	000224
 */
void __ieee754_sqrt(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f1, 0x8(r1)
  lwz       r6, 0x8(r1)
  lwz       r0, 0xC(r1)
  rlwinm    r3,r6,0,1,11
  subis     r3, r3, 0x7FF0
  cmplwi    r3, 0
  bne-      .loc_0x30
  fmadd     f1, f1, f1, f1
  li        r0, 0x21
  stw       r0, -0x7340(r13)
  b         .loc_0x21C

.loc_0x30:
  cmpwi     r6, 0
  bgt-      .loc_0x64
  rlwinm    r3,r6,0,1,31
  or.       r3, r0, r3
  bne-      .loc_0x48
  b         .loc_0x21C

.loc_0x48:
  cmpwi     r6, 0
  bge-      .loc_0x64
  lis       r3, 0x8051
  li        r0, 0x21
  stw       r0, -0x7340(r13)
  lfs       f1, 0x48B0(r3)
  b         .loc_0x21C

.loc_0x64:
  srawi.    r3, r6, 0x14
  bne-      .loc_0xB8
  b         .loc_0x80

.loc_0x70:
  rlwinm    r4,r0,21,11,31
  rlwinm    r0,r0,21,0,10
  or        r6, r6, r4
  subi      r3, r3, 0x15

.loc_0x80:
  cmpwi     r6, 0
  beq+      .loc_0x70
  li        r7, 0
  b         .loc_0x98

.loc_0x90:
  rlwinm    r6,r6,1,0,30
  addi      r7, r7, 0x1

.loc_0x98:
  rlwinm.   r4,r6,0,11,11
  beq+      .loc_0x90
  subfic    r4, r7, 0x20
  subi      r5, r7, 0x1
  srw       r4, r0, r4
  slw       r0, r0, r7
  sub       r3, r3, r5
  or        r6, r6, r4

.loc_0xB8:
  subi      r4, r3, 0x3FF
  rlwinm    r5,r6,0,12,31
  rlwinm.   r4,r4,0,31,31
  oris      r5, r5, 0x10
  beq-      .loc_0xDC
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r0
  add       r4, r4, r5
  add       r5, r5, r4

.loc_0xDC:
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r0
  add       r4, r4, r5
  li        r9, 0
  add       r5, r5, r4
  li        r11, 0
  li        r10, 0
  li        r12, 0
  lis       r6, 0x20
  b         .loc_0x130

.loc_0x104:
  add       r4, r11, r6
  cmpw      r4, r5
  bgt-      .loc_0x11C
  add       r11, r4, r6
  sub       r5, r5, r4
  add       r12, r12, r6

.loc_0x11C:
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r0
  add       r4, r4, r5
  rlwinm    r6,r6,31,1,31
  add       r5, r5, r4

.loc_0x130:
  cmplwi    r6, 0
  bne+      .loc_0x104
  lis       r6, 0x8000
  b         .loc_0x1A8

.loc_0x140:
  cmpw      r11, r5
  mr        r7, r11
  add       r8, r9, r6
  blt-      .loc_0x15C
  bne-      .loc_0x194
  cmplw     r8, r0
  bgt-      .loc_0x194

.loc_0x15C:
  rlwinm    r4,r8,0,0,0
  add       r9, r8, r6
  subis     r4, r4, 0x8000
  cmplwi    r4, 0
  bne-      .loc_0x17C
  rlwinm.   r4,r9,0,0,0
  bne-      .loc_0x17C
  addi      r11, r11, 0x1

.loc_0x17C:
  cmplw     r0, r8
  sub       r5, r5, r7
  bge-      .loc_0x18C
  subi      r5, r5, 0x1

.loc_0x18C:
  sub       r0, r0, r8
  add       r10, r10, r6

.loc_0x194:
  rlwinm    r4,r0,1,31,31
  add       r0, r0, r0
  add       r4, r4, r5
  rlwinm    r6,r6,31,1,31
  add       r5, r5, r4

.loc_0x1A8:
  cmplwi    r6, 0
  bne+      .loc_0x140
  or.       r0, r5, r0
  beq-      .loc_0x1E4
  lfd       f0, -0x6D78(r2)
  addis     r0, r10, 0x1
  cmplwi    r0, 0xFFFF
  stfd      f0, 0x10(r1)
  stfd      f0, 0x10(r1)
  bne-      .loc_0x1DC
  li        r10, 0
  addi      r12, r12, 0x1
  b         .loc_0x1E4

.loc_0x1DC:
  rlwinm    r0,r10,0,31,31
  add       r10, r10, r0

.loc_0x1E4:
  rlwinm    r0,r12,0,31,31
  srawi     r4, r12, 0x1
  cmpwi     r0, 0x1
  rlwinm    r5,r10,31,1,31
  addis     r4, r4, 0x3FE0
  bne-      .loc_0x200
  oris      r5, r5, 0x8000

.loc_0x200:
  subi      r0, r3, 0x3FF
  stw       r5, 0x14(r1)
  srawi     r0, r0, 0x1
  rlwinm    r0,r0,20,0,11
  add       r4, r4, r0
  stw       r4, 0x10(r1)
  lfd       f1, 0x10(r1)

.loc_0x21C:
  addi      r1, r1, 0x20
  blr
*/
}