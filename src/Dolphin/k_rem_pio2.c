

/*
 * --INFO--
 * Address:	800CDE28
 * Size:	000E54
 */
void __kernel_rem_pio2(void)
{
/*
.loc_0x0:
  stwu      r1, -0x2D0(r1)
  mflr      r0
  stw       r0, 0x2D4(r1)
  addi      r11, r1, 0x2D0
  bl        -0xC264
  stmw      r16, 0x258(r1)
  lis       r9, 0x2AAB
  mr        r23, r7
  subi      r0, r5, 0x3
  lis       r10, 0x8048
  subi      r7, r9, 0x5555
  rlwinm    r9,r23,2,0,29
  mulhw     r0, r7, r0
  subi      r7, r10, 0x5CD0
  lwzx      r28, r7, r9
  mr        r21, r3
  mr        r22, r4
  mr        r24, r8
  srawi     r0, r0, 0x2
  subi      r30, r6, 0x1
  rlwinm    r3,r0,1,31,31
  add.      r29, r0, r3
  bge-      .loc_0x60
  li        r29, 0

.loc_0x60:
  addi      r0, r29, 0x1
  add.      r7, r30, r28
  mulli     r4, r0, 0x18
  sub       r6, r29, r30
  lfd       f1, -0x6E80(r2)
  rlwinm    r3,r6,2,0,29
  sub       r26, r5, r4
  addi      r0, r7, 0x1
  add       r4, r24, r3
  addi      r5, r1, 0x198
  lis       r3, 0x4330
  mtctr     r0
  blt-      .loc_0xD0

.loc_0x94:
  cmpwi     r6, 0
  bge-      .loc_0xA4
  lfd       f0, -0x6EB8(r2)
  b         .loc_0xBC

.loc_0xA4:
  lwz       r0, 0x0(r4)
  stw       r3, 0x238(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x23C(r1)
  lfd       f0, 0x238(r1)
  fsub      f0, f0, f1

.loc_0xBC:
  stfd      f0, 0x0(r5)
  addi      r5, r5, 0x8
  addi      r4, r4, 0x4
  addi      r6, r6, 0x1
  bdnz+     .loc_0x94

.loc_0xD0:
  addi      r5, r1, 0x58
  li        r7, 0
  b         .loc_0x234

.loc_0xDC:
  cmpwi     r30, 0
  lfd       f4, -0x6EB8(r2)
  li        r6, 0
  blt-      .loc_0x228
  addi      r0, r30, 0x1
  subi      r9, r30, 0x8
  cmpwi     r0, 0x8
  ble-      .loc_0x1E4
  addi      r8, r9, 0x8
  mr        r4, r21
  rlwinm    r8,r8,29,3,31
  add       r0, r30, r7
  addi      r3, r1, 0x198
  mtctr     r8
  cmpwi     r9, 0
  blt-      .loc_0x1E4

.loc_0x11C:
  sub       r8, r0, r6
  addi      r9, r6, 0x1
  rlwinm    r10,r8,3,0,28
  lfd       f1, 0x0(r4)
  lfdx      f0, r3, r10
  sub       r9, r0, r9
  rlwinm    r10,r9,3,0,28
  addi      r8, r6, 0x2
  fmadd     f4, f1, f0, f4
  sub       r9, r0, r8
  addi      r8, r6, 0x3
  lfd       f1, 0x8(r4)
  lfdx      f0, r3, r10
  sub       r8, r0, r8
  fmadd     f4, f1, f0, f4
  rlwinm    r9,r9,3,0,28
  lfd       f1, 0x10(r4)
  rlwinm    r10,r8,3,0,28
  lfdx      f0, r3, r9
  addi      r8, r6, 0x4
  fmadd     f4, f1, f0, f4
  lfd       f1, 0x18(r4)
  lfdx      f0, r3, r10
  sub       r9, r0, r8
  rlwinm    r10,r9,3,0,28
  addi      r8, r6, 0x5
  fmadd     f4, f1, f0, f4
  lfd       f2, 0x20(r4)
  lfdx      f0, r3, r10
  sub       r8, r0, r8
  rlwinm    r10,r8,3,0,28
  addi      r9, r6, 0x6
  fmadd     f4, f2, f0, f4
  sub       r9, r0, r9
  rlwinm    r9,r9,3,0,28
  lfd       f1, 0x28(r4)
  lfdx      f0, r3, r10
  addi      r8, r6, 0x7
  fmadd     f4, f1, f0, f4
  sub       r8, r0, r8
  rlwinm    r8,r8,3,0,28
  lfd       f3, 0x30(r4)
  lfdx      f2, r3, r9
  addi      r6, r6, 0x8
  lfd       f1, 0x38(r4)
  fmadd     f4, f3, f2, f4
  lfdx      f0, r3, r8
  addi      r4, r4, 0x40
  fmadd     f4, f1, f0, f4
  bdnz+     .loc_0x11C

.loc_0x1E4:
  addi      r0, r30, 0x1
  rlwinm    r3,r6,3,0,28
  sub       r0, r0, r6
  add       r8, r30, r7
  add       r4, r21, r3
  addi      r3, r1, 0x198
  mtctr     r0
  cmpw      r6, r30
  bgt-      .loc_0x228

.loc_0x208:
  sub       r0, r8, r6
  lfd       f1, 0x0(r4)
  rlwinm    r0,r0,3,0,28
  addi      r4, r4, 0x8
  lfdx      f0, r3, r0
  addi      r6, r6, 0x1
  fmadd     f4, f1, f0, f4
  bdnz+     .loc_0x208

.loc_0x228:
  stfd      f4, 0x0(r5)
  addi      r5, r5, 0x8
  addi      r7, r7, 0x1

.loc_0x234:
  cmpw      r7, r28
  ble+      .loc_0xDC
  subfic    r18, r26, 0x18
  lfd       f26, -0x6EB0(r2)
  lfd       f27, -0x6E80(r2)
  addi      r16, r1, 0x8
  lfd       f28, -0x6EA8(r2)
  mr        r31, r28
  lfd       f29, -0x6E98(r2)
  subfic    r17, r26, 0x17
  lfd       f30, -0x6EA0(r2)
  addi      r20, r1, 0x198
  lfd       f31, -0x6EB8(r2)
  lis       r19, 0x4330

.loc_0x26C:
  rlwinm    r0,r31,3,0,28
  addi      r5, r1, 0x58
  add       r5, r5, r0
  cmpwi     r31, 0
  lfd       f1, 0x0(r5)
  mr        r4, r16
  mr        r3, r31
  ble-      .loc_0x374
  rlwinm.   r0,r31,31,1,31
  mtctr     r0
  beq-      .loc_0x328

.loc_0x298:
  fmul      f3, f26, f1
  stw       r19, 0x240(r1)
  lfd       f0, -0x8(r5)
  fctiwz    f2, f3
  stfd      f2, 0x238(r1)
  lwz       r0, 0x23C(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x244(r1)
  lfd       f2, 0x240(r1)
  fsub      f3, f2, f27
  stw       r19, 0x240(r1)
  fnmsub    f2, f28, f3, f1
  fadd      f1, f3, f0
  lfdu      f0, -0x10(r5)
  fctiwz    f2, f2
  fmul      f3, f26, f1
  stfd      f2, 0x248(r1)
  fctiwz    f2, f3
  lwz       r0, 0x24C(r1)
  stw       r0, 0x0(r4)
  stfd      f2, 0x238(r1)
  lwz       r0, 0x23C(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x244(r1)
  lfd       f2, 0x240(r1)
  fsub      f3, f2, f27
  fnmsub    f2, f28, f3, f1
  fadd      f1, f3, f0
  fctiwz    f2, f2
  stfd      f2, 0x248(r1)
  lwz       r0, 0x24C(r1)
  stw       r0, 0x4(r4)
  addi      r4, r4, 0x8
  bdnz+     .loc_0x298
  andi.     r3, r3, 0x1
  beq-      .loc_0x374

.loc_0x328:
  mtctr     r3

.loc_0x32C:
  fmul      f3, f26, f1
  stw       r19, 0x240(r1)
  lfdu      f0, -0x8(r5)
  fctiwz    f2, f3
  stfd      f2, 0x238(r1)
  lwz       r0, 0x23C(r1)
  xoris     r0, r0, 0x8000
  stw       r0, 0x244(r1)
  lfd       f2, 0x240(r1)
  fsub      f3, f2, f27
  fnmsub    f2, f28, f3, f1
  fadd      f1, f3, f0
  fctiwz    f2, f2
  stfd      f2, 0x248(r1)
  lwz       r0, 0x24C(r1)
  stw       r0, 0x0(r4)
  addi      r4, r4, 0x4
  bdnz+     .loc_0x32C

.loc_0x374:
  mr        r3, r26
  bl        0x13BC
  fmr       f25, f1
  fmul      f1, f29, f25
  bl        0x11DC
  fnmsub    f25, f30, f1, f25
  stw       r19, 0x240(r1)
  cmpwi     r26, 0
  li        r25, 0
  fctiwz    f0, f25
  stfd      f0, 0x248(r1)
  lwz       r27, 0x24C(r1)
  xoris     r0, r27, 0x8000
  stw       r0, 0x244(r1)
  lfd       f0, 0x240(r1)
  fsub      f0, f0, f27
  fsub      f25, f25, f0
  ble-      .loc_0x3EC
  rlwinm    r3,r31,2,0,29
  addi      r4, r1, 0x8
  subi      r5, r3, 0x4
  lwzx      r3, r4, r5
  sraw      r6, r3, r18
  slw       r0, r6, r18
  sub       r0, r3, r0
  add       r27, r27, r6
  stwx      r0, r4, r5
  lwzx      r0, r4, r5
  sraw      r25, r0, r17
  b         .loc_0x41C

.loc_0x3EC:
  bne-      .loc_0x408
  rlwinm    r4,r31,2,0,29
  addi      r3, r1, 0x8
  subi      r0, r4, 0x4
  lwzx      r0, r3, r0
  srawi     r25, r0, 0x17
  b         .loc_0x41C

.loc_0x408:
  lfd       f0, -0x6E90(r2)
  fcmpo     cr0, f25, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x41C
  li        r25, 0x2

.loc_0x41C:
  cmpwi     r25, 0
  ble-      .loc_0x4F0
  lis       r5, 0x100
  mr        r6, r16
  li        r0, 0
  subi      r4, r5, 0x1
  mtctr     r31
  cmpwi     r31, 0
  addi      r27, r27, 0x1
  ble-      .loc_0x478

.loc_0x444:
  cmpwi     r0, 0
  lwz       r3, 0x0(r6)
  bne-      .loc_0x468
  cmpwi     r3, 0
  beq-      .loc_0x470
  sub       r3, r5, r3
  li        r0, 0x1
  stw       r3, 0x0(r6)
  b         .loc_0x470

.loc_0x468:
  sub       r3, r4, r3
  stw       r3, 0x0(r6)

.loc_0x470:
  addi      r6, r6, 0x4
  bdnz+     .loc_0x444

.loc_0x478:
  cmpwi     r26, 0
  ble-      .loc_0x4CC
  cmpwi     r26, 0x2
  beq-      .loc_0x4B4
  bge-      .loc_0x4CC
  cmpwi     r26, 0x1
  bge-      .loc_0x498
  b         .loc_0x4CC

.loc_0x498:
  rlwinm    r3,r31,2,0,29
  addi      r5, r1, 0x8
  subi      r4, r3, 0x4
  lwzx      r3, r5, r4
  rlwinm    r3,r3,0,9,31
  stwx      r3, r5, r4
  b         .loc_0x4CC

.loc_0x4B4:
  rlwinm    r3,r31,2,0,29
  addi      r5, r1, 0x8
  subi      r4, r3, 0x4
  lwzx      r3, r5, r4
  rlwinm    r3,r3,0,10,31
  stwx      r3, r5, r4

.loc_0x4CC:
  cmpwi     r25, 0x2
  bne-      .loc_0x4F0
  lfd       f1, -0x6E88(r2)
  cmpwi     r0, 0
  fsub      f25, f1, f25
  beq-      .loc_0x4F0
  mr        r3, r26
  bl        0x124C
  fsub      f25, f25, f1

.loc_0x4F0:
  fcmpu     cr0, f31, f25
  bne-      .loc_0x758
  subi      r3, r31, 0x1
  addi      r4, r1, 0x8
  cmpw      r3, r28
  li        r5, 0
  rlwinm    r0,r3,2,0,29
  addi      r3, r3, 0x1
  add       r4, r4, r0
  sub       r3, r3, r28
  blt-      .loc_0x58C
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0x578

.loc_0x528:
  lwz       r0, 0x0(r4)
  or        r5, r5, r0
  lwz       r0, -0x4(r4)
  or        r5, r5, r0
  lwz       r0, -0x8(r4)
  or        r5, r5, r0
  lwz       r0, -0xC(r4)
  or        r5, r5, r0
  lwz       r0, -0x10(r4)
  or        r5, r5, r0
  lwz       r0, -0x14(r4)
  or        r5, r5, r0
  lwz       r0, -0x18(r4)
  or        r5, r5, r0
  lwz       r0, -0x1C(r4)
  subi      r4, r4, 0x20
  or        r5, r5, r0
  bdnz+     .loc_0x528
  andi.     r3, r3, 0x7
  beq-      .loc_0x58C

.loc_0x578:
  mtctr     r3

.loc_0x57C:
  lwz       r0, 0x0(r4)
  subi      r4, r4, 0x4
  or        r5, r5, r0
  bdnz+     .loc_0x57C

.loc_0x58C:
  cmpwi     r5, 0
  bne-      .loc_0x758
  li        r10, 0x1
  b         .loc_0x5A0

.loc_0x59C:
  addi      r10, r10, 0x1

.loc_0x5A0:
  sub       r0, r28, r10
  rlwinm    r0,r0,2,0,29
  lwzx      r0, r16, r0
  cmpwi     r0, 0
  beq+      .loc_0x59C
  addi      r9, r31, 0x1
  addi      r5, r1, 0x58
  rlwinm    r0,r9,3,0,28
  add       r6, r31, r10
  add       r5, r5, r0
  b         .loc_0x748

.loc_0x5CC:
  add       r0, r29, r9
  add       r7, r30, r9
  rlwinm    r0,r0,2,0,29
  stw       r19, 0x248(r1)
  lwzx      r3, r24, r0
  cmpwi     r30, 0
  rlwinm    r0,r7,3,0,28
  lfd       f4, -0x6EB8(r2)
  xoris     r3, r3, 0x8000
  li        r8, 0
  stw       r3, 0x24C(r1)
  lfd       f0, 0x248(r1)
  fsub      f0, f0, f27
  stfdx     f0, r20, r0
  blt-      .loc_0x73C
  addi      r0, r30, 0x1
  subi      r11, r30, 0x8
  cmpwi     r0, 0x8
  ble-      .loc_0x6FC
  addi      r0, r11, 0x8
  mr        r4, r21
  rlwinm    r0,r0,29,3,31
  addi      r3, r1, 0x198
  mtctr     r0
  cmpwi     r11, 0
  blt-      .loc_0x6FC

.loc_0x634:
  sub       r11, r7, r8
  addi      r0, r8, 0x1
  rlwinm    r12,r11,3,0,28
  lfd       f1, 0x0(r4)
  lfdx      f0, r3, r12
  sub       r0, r7, r0
  addi      r11, r8, 0x2
  lfd       f2, 0x20(r4)
  fmadd     f4, f1, f0, f4
  sub       r12, r7, r11
  rlwinm    r0,r0,3,0,28
  addi      r11, r8, 0x3
  lfdx      f0, r3, r0
  rlwinm    r25,r12,3,0,28
  lfd       f1, 0x8(r4)
  sub       r11, r7, r11
  rlwinm    r12,r11,3,0,28
  addi      r0, r8, 0x4
  fmadd     f4, f1, f0, f4
  lfd       f1, 0x10(r4)
  lfdx      f0, r3, r25
  sub       r11, r7, r0
  addi      r0, r8, 0x5
  lfd       f3, 0x30(r4)
  fmadd     f4, f1, f0, f4
  lfdx      f0, r3, r12
  lfd       f1, 0x18(r4)
  rlwinm    r12,r11,3,0,28
  addi      r11, r8, 0x6
  sub       r0, r7, r0
  fmadd     f4, f1, f0, f4
  lfdx      f0, r3, r12
  rlwinm    r12,r0,3,0,28
  lfd       f1, 0x28(r4)
  addi      r0, r8, 0x7
  sub       r11, r7, r11
  fmadd     f4, f2, f0, f4
  lfdx      f0, r3, r12
  rlwinm    r11,r11,3,0,28
  sub       r0, r7, r0
  lfdx      f2, r3, r11
  rlwinm    r0,r0,3,0,28
  fmadd     f4, f1, f0, f4
  lfd       f1, 0x38(r4)
  lfdx      f0, r3, r0
  addi      r4, r4, 0x40
  addi      r8, r8, 0x8
  fmadd     f4, f3, f2, f4
  fmadd     f4, f1, f0, f4
  bdnz+     .loc_0x634

.loc_0x6FC:
  addi      r0, r30, 0x1
  rlwinm    r4,r8,3,0,28
  sub       r0, r0, r8
  addi      r3, r1, 0x198
  add       r4, r21, r4
  mtctr     r0
  cmpw      r8, r30
  bgt-      .loc_0x73C

.loc_0x71C:
  sub       r0, r7, r8
  lfd       f1, 0x0(r4)
  rlwinm    r0,r0,3,0,28
  addi      r4, r4, 0x8
  lfdx      f0, r3, r0
  addi      r8, r8, 0x1
  fmadd     f4, f1, f0, f4
  bdnz+     .loc_0x71C

.loc_0x73C:
  stfd      f4, 0x0(r5)
  addi      r5, r5, 0x8
  addi      r9, r9, 0x1

.loc_0x748:
  cmpw      r9, r6
  ble+      .loc_0x5CC
  add       r31, r31, r10
  b         .loc_0x26C

.loc_0x758:
  lfd       f0, -0x6EB8(r2)
  fcmpu     cr0, f0, f25
  bne-      .loc_0x798
  subi      r31, r31, 0x1
  addi      r3, r1, 0x8
  rlwinm    r0,r31,2,0,29
  subi      r26, r26, 0x18
  add       r3, r3, r0
  b         .loc_0x788

.loc_0x77C:
  subi      r3, r3, 0x4
  subi      r31, r31, 0x1
  subi      r26, r26, 0x18

.loc_0x788:
  lwz       r0, 0x0(r3)
  cmpwi     r0, 0
  beq+      .loc_0x77C
  b         .loc_0x838

.loc_0x798:
  fmr       f1, f25
  neg       r3, r26
  bl        0xF94
  lfd       f3, -0x6EA8(r2)
  fcmpo     cr0, f1, f3
  cror      2, 0x1, 0x2
  bne-      .loc_0x820
  lfd       f0, -0x6EB0(r2)
  lis       r0, 0x4330
  rlwinm    r5,r31,2,0,29
  stw       r0, 0x240(r1)
  fmul      f0, f0, f1
  addi      r31, r31, 0x1
  lfd       f2, -0x6E80(r2)
  addi      r4, r1, 0x8
  rlwinm    r0,r31,2,0,29
  addi      r26, r26, 0x18
  fctiwz    f0, f0
  stfd      f0, 0x248(r1)
  lwz       r3, 0x24C(r1)
  xoris     r3, r3, 0x8000
  stw       r3, 0x244(r1)
  lfd       f0, 0x240(r1)
  fsub      f0, f0, f2
  fnmsub    f1, f3, f0, f1
  fctiwz    f0, f0
  fctiwz    f1, f1
  stfd      f0, 0x250(r1)
  stfd      f1, 0x238(r1)
  lwz       r3, 0x254(r1)
  lwz       r6, 0x23C(r1)
  stwx      r6, r4, r5
  stwx      r3, r4, r0
  b         .loc_0x838

.loc_0x820:
  fctiwz    f0, f1
  rlwinm    r0,r31,2,0,29
  addi      r3, r1, 0x8
  stfd      f0, 0x250(r1)
  lwz       r4, 0x254(r1)
  stwx      r4, r3, r0

.loc_0x838:
  lfd       f1, -0x6E88(r2)
  mr        r3, r26
  bl        0xEF4
  cmpwi     r31, 0
  rlwinm    r0,r31,2,0,29
  addi      r6, r1, 0x8
  rlwinm    r8,r31,3,0,28
  addi      r7, r1, 0x58
  lfd       f5, -0x6E80(r2)
  lfd       f0, -0x6EB0(r2)
  add       r6, r6, r0
  add       r7, r7, r8
  addi      r3, r31, 0x1
  lis       r4, 0x4330
  blt-      .loc_0x958
  rlwinm.   r0,r3,30,2,31
  mtctr     r0
  beq-      .loc_0x924

.loc_0x880:
  lwz       r5, 0x0(r6)
  stw       r4, 0x250(r1)
  xoris     r0, r5, 0x8000
  lwz       r5, -0x4(r6)
  stw       r0, 0x254(r1)
  xoris     r0, r5, 0x8000
  lwz       r5, -0x8(r6)
  lfd       f4, 0x250(r1)
  stw       r0, 0x254(r1)
  fsub      f3, f4, f5
  xoris     r0, r5, 0x8000
  lwz       r5, -0xC(r6)
  stw       r4, 0x250(r1)
  subi      r6, r6, 0x10
  fmul      f2, f1, f3
  lfd       f4, 0x250(r1)
  fmul      f1, f1, f0
  stw       r0, 0x254(r1)
  xoris     r0, r5, 0x8000
  fsub      f3, f4, f5
  stw       r4, 0x250(r1)
  lfd       f4, 0x250(r1)
  stfd      f2, 0x0(r7)
  fmul      f2, f1, f3
  fmul      f1, f1, f0
  stw       r0, 0x254(r1)
  stw       r4, 0x250(r1)
  fsub      f3, f4, f5
  stfd      f2, -0x8(r7)
  fmul      f2, f1, f3
  lfd       f4, 0x250(r1)
  fmul      f1, f1, f0
  fsub      f3, f4, f5
  stfd      f2, -0x10(r7)
  fmul      f2, f1, f3
  fmul      f1, f1, f0
  stfd      f2, -0x18(r7)
  subi      r7, r7, 0x20
  bdnz+     .loc_0x880
  andi.     r3, r3, 0x3
  beq-      .loc_0x958

.loc_0x924:
  mtctr     r3

.loc_0x928:
  lwz       r5, 0x0(r6)
  subi      r6, r6, 0x4
  stw       r4, 0x250(r1)
  xoris     r0, r5, 0x8000
  stw       r0, 0x254(r1)
  lfd       f4, 0x250(r1)
  fsub      f3, f4, f5
  fmul      f2, f1, f3
  fmul      f1, f1, f0
  stfd      f2, 0x0(r7)
  subi      r7, r7, 0x8
  bdnz+     .loc_0x928

.loc_0x958:
  lis       r3, 0x8048
  addi      r0, r31, 0x1
  mr        r9, r31
  addi      r4, r1, 0x58
  subi      r5, r3, 0x5CC0
  addi      r3, r1, 0xF8
  mtctr     r0
  cmpwi     r31, 0
  blt-      .loc_0x9CC

.loc_0x97C:
  lfd       f2, -0x6EB8(r2)
  mr        r6, r5
  sub       r7, r31, r9
  li        r10, 0
  b         .loc_0x9AC

.loc_0x990:
  add       r0, r9, r10
  lfd       f1, 0x0(r6)
  rlwinm    r0,r0,3,0,28
  addi      r6, r6, 0x8
  lfdx      f0, r4, r0
  addi      r10, r10, 0x1
  fmadd     f2, f1, f0, f2

.loc_0x9AC:
  cmpw      r10, r28
  bgt-      .loc_0x9BC
  cmpw      r10, r7
  ble+      .loc_0x990

.loc_0x9BC:
  rlwinm    r0,r7,3,0,28
  subi      r9, r9, 0x1
  stfdx     f2, r3, r0
  bdnz+     .loc_0x97C

.loc_0x9CC:
  cmpwi     r23, 0x3
  beq-      .loc_0xBF4
  bge-      .loc_0xE34
  cmpwi     r23, 0
  beq-      .loc_0x9E8
  bge-      .loc_0xA88
  b         .loc_0xE34

.loc_0x9E8:
  cmpwi     r31, 0
  addi      r4, r1, 0xF8
  lfd       f1, -0x6EB8(r2)
  add       r4, r4, r8
  addi      r3, r31, 0x1
  blt-      .loc_0xA70
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0xA5C

.loc_0xA0C:
  lfd       f0, 0x0(r4)
  fadd      f1, f1, f0
  lfd       f0, -0x8(r4)
  fadd      f1, f1, f0
  lfd       f0, -0x10(r4)
  fadd      f1, f1, f0
  lfd       f0, -0x18(r4)
  fadd      f1, f1, f0
  lfd       f0, -0x20(r4)
  fadd      f1, f1, f0
  lfd       f0, -0x28(r4)
  fadd      f1, f1, f0
  lfd       f0, -0x30(r4)
  fadd      f1, f1, f0
  lfd       f0, -0x38(r4)
  subi      r4, r4, 0x40
  fadd      f1, f1, f0
  bdnz+     .loc_0xA0C
  andi.     r3, r3, 0x7
  beq-      .loc_0xA70

.loc_0xA5C:
  mtctr     r3

.loc_0xA60:
  lfd       f0, 0x0(r4)
  subi      r4, r4, 0x8
  fadd      f1, f1, f0
  bdnz+     .loc_0xA60

.loc_0xA70:
  cmpwi     r25, 0
  bne-      .loc_0xA7C
  b         .loc_0xA80

.loc_0xA7C:
  fneg      f1, f1

.loc_0xA80:
  stfd      f1, 0x0(r22)
  b         .loc_0xE34

.loc_0xA88:
  cmpwi     r31, 0
  addi      r4, r1, 0xF8
  lfd       f2, -0x6EB8(r2)
  add       r4, r4, r8
  addi      r3, r31, 0x1
  blt-      .loc_0xB10
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0xAFC

.loc_0xAAC:
  lfd       f0, 0x0(r4)
  fadd      f2, f2, f0
  lfd       f0, -0x8(r4)
  fadd      f2, f2, f0
  lfd       f0, -0x10(r4)
  fadd      f2, f2, f0
  lfd       f0, -0x18(r4)
  fadd      f2, f2, f0
  lfd       f0, -0x20(r4)
  fadd      f2, f2, f0
  lfd       f0, -0x28(r4)
  fadd      f2, f2, f0
  lfd       f0, -0x30(r4)
  fadd      f2, f2, f0
  lfd       f0, -0x38(r4)
  subi      r4, r4, 0x40
  fadd      f2, f2, f0
  bdnz+     .loc_0xAAC
  andi.     r3, r3, 0x7
  beq-      .loc_0xB10

.loc_0xAFC:
  mtctr     r3

.loc_0xB00:
  lfd       f0, 0x0(r4)
  subi      r4, r4, 0x8
  fadd      f2, f2, f0
  bdnz+     .loc_0xB00

.loc_0xB10:
  cmpwi     r25, 0
  bne-      .loc_0xB20
  fmr       f1, f2
  b         .loc_0xB24

.loc_0xB20:
  fneg      f1, f2

.loc_0xB24:
  lfd       f0, 0xF8(r1)
  cmpwi     r31, 0x1
  stfd      f1, 0x0(r22)
  li        r5, 0x1
  fsub      f6, f0, f2
  blt-      .loc_0xBDC
  cmpwi     r31, 0x8
  subi      r3, r31, 0x8
  ble-      .loc_0xBAC
  addi      r0, r3, 0x7
  addi      r4, r1, 0x100
  rlwinm    r0,r0,29,3,31
  mtctr     r0
  cmpwi     r3, 0x1
  blt-      .loc_0xBAC

.loc_0xB60:
  lfd       f1, 0x0(r4)
  addi      r5, r5, 0x8
  lfd       f0, 0x8(r4)
  fadd      f6, f6, f1
  lfd       f5, 0x10(r4)
  lfd       f4, 0x18(r4)
  lfd       f3, 0x20(r4)
  fadd      f6, f6, f0
  lfd       f2, 0x28(r4)
  lfd       f1, 0x30(r4)
  lfd       f0, 0x38(r4)
  addi      r4, r4, 0x40
  fadd      f6, f6, f5
  fadd      f6, f6, f4
  fadd      f6, f6, f3
  fadd      f6, f6, f2
  fadd      f6, f6, f1
  fadd      f6, f6, f0
  bdnz+     .loc_0xB60

.loc_0xBAC:
  addi      r0, r31, 0x1
  rlwinm    r3,r5,3,0,28
  addi      r4, r1, 0xF8
  sub       r0, r0, r5
  add       r4, r4, r3
  mtctr     r0
  cmpw      r5, r31
  bgt-      .loc_0xBDC

.loc_0xBCC:
  lfd       f0, 0x0(r4)
  addi      r4, r4, 0x8
  fadd      f6, f6, f0
  bdnz+     .loc_0xBCC

.loc_0xBDC:
  cmpwi     r25, 0
  bne-      .loc_0xBE8
  b         .loc_0xBEC

.loc_0xBE8:
  fneg      f6, f6

.loc_0xBEC:
  stfd      f6, 0x8(r22)
  b         .loc_0xE34

.loc_0xBF4:
  addi      r5, r1, 0xF8
  cmpwi     r31, 0
  add       r5, r5, r8
  mr        r3, r31
  mr        r4, r5
  ble-      .loc_0xCB8
  rlwinm.   r0,r31,30,2,31
  mtctr     r0
  beq-      .loc_0xC94

.loc_0xC18:
  lfd       f0, -0x8(r4)
  lfd       f1, 0x0(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, 0x0(r4)
  stfd      f2, -0x8(r4)
  lfd       f0, -0x10(r4)
  lfd       f1, -0x8(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, -0x8(r4)
  stfd      f2, -0x10(r4)
  lfd       f0, -0x18(r4)
  lfd       f1, -0x10(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, -0x10(r4)
  stfd      f2, -0x18(r4)
  lfd       f0, -0x20(r4)
  lfd       f1, -0x18(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, -0x18(r4)
  stfdu     f2, -0x20(r4)
  bdnz+     .loc_0xC18
  andi.     r3, r3, 0x3
  beq-      .loc_0xCB8

.loc_0xC94:
  mtctr     r3

.loc_0xC98:
  lfd       f0, -0x8(r4)
  lfd       f1, 0x0(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, 0x0(r4)
  stfdu     f2, -0x8(r4)
  bdnz+     .loc_0xC98

.loc_0xCB8:
  cmpwi     r31, 0x1
  mr        r4, r5
  subi      r3, r31, 0x1
  ble-      .loc_0xD74
  rlwinm.   r0,r3,30,2,31
  mtctr     r0
  beq-      .loc_0xD50

.loc_0xCD4:
  lfd       f0, -0x8(r4)
  lfd       f1, 0x0(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, 0x0(r4)
  stfd      f2, -0x8(r4)
  lfd       f0, -0x10(r4)
  lfd       f1, -0x8(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, -0x8(r4)
  stfd      f2, -0x10(r4)
  lfd       f0, -0x18(r4)
  lfd       f1, -0x10(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, -0x10(r4)
  stfd      f2, -0x18(r4)
  lfd       f0, -0x20(r4)
  lfd       f1, -0x18(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, -0x18(r4)
  stfdu     f2, -0x20(r4)
  bdnz+     .loc_0xCD4
  andi.     r3, r3, 0x3
  beq-      .loc_0xD74

.loc_0xD50:
  mtctr     r3

.loc_0xD54:
  lfd       f0, -0x8(r4)
  lfd       f1, 0x0(r4)
  fadd      f2, f0, f1
  fsub      f0, f0, f2
  fadd      f0, f1, f0
  stfd      f0, 0x0(r4)
  stfdu     f2, -0x8(r4)
  bdnz+     .loc_0xD54

.loc_0xD74:
  cmpwi     r31, 0x2
  lfd       f3, -0x6EB8(r2)
  subi      r3, r31, 0x1
  blt-      .loc_0xDF4
  rlwinm.   r0,r3,29,3,31
  mtctr     r0
  beq-      .loc_0xDE0

.loc_0xD90:
  lfd       f0, 0x0(r5)
  fadd      f3, f3, f0
  lfd       f0, -0x8(r5)
  fadd      f3, f3, f0
  lfd       f0, -0x10(r5)
  fadd      f3, f3, f0
  lfd       f0, -0x18(r5)
  fadd      f3, f3, f0
  lfd       f0, -0x20(r5)
  fadd      f3, f3, f0
  lfd       f0, -0x28(r5)
  fadd      f3, f3, f0
  lfd       f0, -0x30(r5)
  fadd      f3, f3, f0
  lfd       f0, -0x38(r5)
  subi      r5, r5, 0x40
  fadd      f3, f3, f0
  bdnz+     .loc_0xD90
  andi.     r3, r3, 0x7
  beq-      .loc_0xDF4

.loc_0xDE0:
  mtctr     r3

.loc_0xDE4:
  lfd       f0, 0x0(r5)
  subi      r5, r5, 0x8
  fadd      f3, f3, f0
  bdnz+     .loc_0xDE4

.loc_0xDF4:
  cmpwi     r25, 0
  bne-      .loc_0xE14
  lfd       f1, 0xF8(r1)
  lfd       f0, 0x100(r1)
  stfd      f1, 0x0(r22)
  stfd      f0, 0x8(r22)
  stfd      f3, 0x10(r22)
  b         .loc_0xE34

.loc_0xE14:
  lfd       f2, 0xF8(r1)
  fneg      f0, f3
  lfd       f1, 0x100(r1)
  fneg      f2, f2
  fneg      f1, f1
  stfd      f2, 0x0(r22)
  stfd      f1, 0x8(r22)
  stfd      f0, 0x10(r22)

.loc_0xE34:
  rlwinm    r3,r27,0,29,31
  addi      r11, r1, 0x2D0
  bl        -0xD044
  lmw       r16, 0x258(r1)
  lwz       r0, 0x2D4(r1)
  mtlr      r0
  addi      r1, r1, 0x2D0
  blr
*/
}