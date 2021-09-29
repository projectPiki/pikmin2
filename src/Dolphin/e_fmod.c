

/*
 * --INFO--
 * Address:	800CCA9C
 * Size:	00033C
 */
void __ieee754_fmod(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  stfd      f2, 0x10(r1)
  stfd      f1, 0x8(r1)
  lwz       r10, 0x10(r1)
  lwz       r6, 0x8(r1)
  lwz       r5, 0x14(r1)
  rlwinm    r8,r10,0,1,31
  rlwinm    r0,r6,0,0,0
  lwz       r4, 0xC(r1)
  or.       r3, r8, r5
  xor       r7, r6, r0
  beq-      .loc_0x54
  lis       r6, 0x7FF0
  cmpw      r7, r6
  bge-      .loc_0x54
  neg       r3, r5
  or        r3, r5, r3
  rlwinm    r3,r3,1,31,31
  or        r3, r8, r3
  cmplw     r3, r6
  ble-      .loc_0x68

.loc_0x54:
  lfd       f1, 0x8(r1)
  lfd       f0, 0x10(r1)
  fmul      f0, f1, f0
  fdiv      f1, f0, f0
  b         .loc_0x334

.loc_0x68:
  cmpw      r7, r8
  bgt-      .loc_0x9C
  blt-      .loc_0x7C
  cmplw     r4, r5
  bge-      .loc_0x84

.loc_0x7C:
  lfd       f1, 0x8(r1)
  b         .loc_0x334

.loc_0x84:
  bne-      .loc_0x9C
  lis       r3, 0x8048
  rlwinm    r0,r0,4,28,28
  subi      r3, r3, 0x5E98
  lfdx      f1, r3, r0
  b         .loc_0x334

.loc_0x9C:
  lis       r3, 0x10
  cmpw      r7, r3
  bge-      .loc_0xF0
  cmpwi     r7, 0
  bne-      .loc_0xD0
  mr        r3, r4
  li        r11, -0x413
  b         .loc_0xC4

.loc_0xBC:
  rlwinm    r3,r3,1,0,30
  subi      r11, r11, 0x1

.loc_0xC4:
  cmpwi     r3, 0
  bgt+      .loc_0xBC
  b         .loc_0xF8

.loc_0xD0:
  rlwinm    r3,r7,11,0,20
  li        r11, -0x3FE
  b         .loc_0xE4

.loc_0xDC:
  rlwinm    r3,r3,1,0,30
  subi      r11, r11, 0x1

.loc_0xE4:
  cmpwi     r3, 0
  bgt+      .loc_0xDC
  b         .loc_0xF8

.loc_0xF0:
  srawi     r3, r7, 0x14
  subi      r11, r3, 0x3FF

.loc_0xF8:
  lis       r3, 0x10
  cmpw      r8, r3
  bge-      .loc_0x14C
  cmpwi     r8, 0
  bne-      .loc_0x12C
  mr        r6, r5
  li        r3, -0x413
  b         .loc_0x120

.loc_0x118:
  rlwinm    r6,r6,1,0,30
  subi      r3, r3, 0x1

.loc_0x120:
  cmpwi     r6, 0
  bgt+      .loc_0x118
  b         .loc_0x154

.loc_0x12C:
  rlwinm    r6,r8,11,0,20
  li        r3, -0x3FE
  b         .loc_0x140

.loc_0x138:
  rlwinm    r6,r6,1,0,30
  subi      r3, r3, 0x1

.loc_0x140:
  cmpwi     r6, 0
  bgt+      .loc_0x138
  b         .loc_0x154

.loc_0x14C:
  srawi     r3, r8, 0x14
  subi      r3, r3, 0x3FF

.loc_0x154:
  cmpwi     r11, -0x3FE
  blt-      .loc_0x168
  rlwinm    r6,r7,0,12,31
  oris      r9, r6, 0x10
  b         .loc_0x198

.loc_0x168:
  subfic    r9, r11, -0x3FE
  cmpwi     r9, 0x1F
  bgt-      .loc_0x18C
  subfic    r6, r9, 0x20
  slw       r7, r7, r9
  srw       r6, r4, r6
  slw       r4, r4, r9
  or        r9, r7, r6
  b         .loc_0x198

.loc_0x18C:
  subi      r6, r9, 0x20
  slw       r9, r4, r6
  li        r4, 0

.loc_0x198:
  cmpwi     r3, -0x3FE
  blt-      .loc_0x1AC
  rlwinm    r6,r10,0,12,31
  oris      r7, r6, 0x10
  b         .loc_0x1DC

.loc_0x1AC:
  subfic    r10, r3, -0x3FE
  cmpwi     r10, 0x1F
  bgt-      .loc_0x1D0
  subfic    r6, r10, 0x20
  slw       r7, r8, r10
  srw       r6, r5, r6
  slw       r5, r5, r10
  or        r7, r7, r6
  b         .loc_0x1DC

.loc_0x1D0:
  subi      r6, r10, 0x20
  slw       r7, r5, r6
  li        r5, 0

.loc_0x1DC:
  sub.      r6, r11, r3
  mtctr     r6
  beq-      .loc_0x248

.loc_0x1E8:
  cmplw     r4, r5
  sub       r8, r9, r7
  sub       r10, r4, r5
  bge-      .loc_0x1FC
  subi      r8, r8, 0x1

.loc_0x1FC:
  cmpwi     r8, 0
  bge-      .loc_0x218
  rlwinm    r6,r4,1,31,31
  add       r4, r4, r4
  add       r6, r9, r6
  add       r9, r9, r6
  b         .loc_0x244

.loc_0x218:
  or.       r4, r8, r10
  bne-      .loc_0x234
  lis       r3, 0x8048
  rlwinm    r0,r0,4,28,28
  subi      r3, r3, 0x5E98
  lfdx      f1, r3, r0
  b         .loc_0x334

.loc_0x234:
  rlwinm    r6,r10,1,31,31
  add       r4, r10, r10
  add       r9, r8, r6
  add       r9, r8, r9

.loc_0x244:
  bdnz+     .loc_0x1E8

.loc_0x248:
  cmplw     r4, r5
  sub       r6, r9, r7
  sub       r5, r4, r5
  bge-      .loc_0x25C
  subi      r6, r6, 0x1

.loc_0x25C:
  cmpwi     r6, 0
  blt-      .loc_0x26C
  mr        r9, r6
  mr        r4, r5

.loc_0x26C:
  or.       r5, r9, r4
  bne-      .loc_0x288
  lis       r3, 0x8048
  rlwinm    r0,r0,4,28,28
  subi      r3, r3, 0x5E98
  lfdx      f1, r3, r0
  b         .loc_0x334

.loc_0x288:
  lis       r5, 0x10
  b         .loc_0x2A4

.loc_0x290:
  rlwinm    r6,r4,1,31,31
  add       r4, r4, r4
  add       r6, r9, r6
  subi      r3, r3, 0x1
  add       r9, r9, r6

.loc_0x2A4:
  cmpw      r9, r5
  blt+      .loc_0x290
  cmpwi     r3, -0x3FE
  blt-      .loc_0x2D4
  addi      r3, r3, 0x3FF
  subis     r5, r9, 0x10
  rlwinm    r3,r3,20,0,11
  stw       r4, 0xC(r1)
  or        r3, r5, r3
  or        r0, r3, r0
  stw       r0, 0x8(r1)
  b         .loc_0x330

.loc_0x2D4:
  subfic    r6, r3, -0x3FE
  cmpwi     r6, 0x14
  bgt-      .loc_0x2F8
  subfic    r3, r6, 0x20
  srw       r4, r4, r6
  slw       r3, r9, r3
  sraw      r9, r9, r6
  or        r3, r4, r3
  b         .loc_0x324

.loc_0x2F8:
  cmpwi     r6, 0x1F
  bgt-      .loc_0x318
  subfic    r5, r6, 0x20
  srw       r3, r4, r6
  slw       r4, r9, r5
  mr        r9, r0
  or        r3, r4, r3
  b         .loc_0x324

.loc_0x318:
  subi      r3, r6, 0x20
  sraw      r3, r9, r3
  mr        r9, r0

.loc_0x324:
  or        r0, r9, r0
  stw       r3, 0xC(r1)
  stw       r0, 0x8(r1)

.loc_0x330:
  lfd       f1, 0x8(r1)

.loc_0x334:
  addi      r1, r1, 0x20
  blr
*/
}