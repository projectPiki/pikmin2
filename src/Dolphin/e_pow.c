

/*
 * --INFO--
 * Address:	800CD164
 * Size:	000830
 */
void __ieee754_pow(void)
{
/*
.loc_0x0:
  stwu      r1, -0xB0(r1)
  mflr      r0
  stw       r0, 0xB4(r1)
  stfd      f31, 0xA0(r1)
  psq_st    f31,0xA8(r1),0,0
  stfd      f30, 0x90(r1)
  psq_st    f30,0x98(r1),0,0
  stfd      f29, 0x80(r1)
  psq_st    f29,0x88(r1),0,0
  stfd      f28, 0x70(r1)
  psq_st    f28,0x78(r1),0,0
  stfd      f27, 0x60(r1)
  psq_st    f27,0x68(r1),0,0
  stfd      f2, 0x10(r1)
  lis       r3, 0x8048
  subi      r3, r3, 0x5E88
  lwz       r5, 0x10(r1)
  stfd      f1, 0x8(r1)
  lwz       r11, 0x14(r1)
  rlwinm    r7,r5,0,1,31
  lwz       r0, 0x8(r1)
  or.       r4, r7, r11
  lwz       r10, 0xC(r1)
  rlwinm    r6,r0,0,1,31
  bne-      .loc_0x6C
  lfd       f1, -0x7068(r2)
  b         .loc_0x7F8

.loc_0x6C:
  lis       r4, 0x7FF0
  cmpw      r6, r4
  bgt-      .loc_0xAC
  subis     r4, r6, 0x7FF0
  cmplwi    r4, 0
  bne-      .loc_0x8C
  cmplwi    r10, 0
  bne-      .loc_0xAC

.loc_0x8C:
  lis       r4, 0x7FF0
  cmpw      r7, r4
  bgt-      .loc_0xAC
  subis     r4, r7, 0x7FF0
  cmplwi    r4, 0
  bne-      .loc_0xBC
  cmplwi    r11, 0
  beq-      .loc_0xBC

.loc_0xAC:
  lfd       f1, 0x8(r1)
  lfd       f0, 0x10(r1)
  fadd      f1, f1, f0
  b         .loc_0x7F8

.loc_0xBC:
  cmpwi     r0, 0
  li        r4, 0
  bge-      .loc_0x13C
  lis       r8, 0x4340
  cmpw      r7, r8
  blt-      .loc_0xDC
  li        r4, 0x2
  b         .loc_0x13C

.loc_0xDC:
  lis       r8, 0x3FF0
  cmpw      r7, r8
  blt-      .loc_0x13C
  srawi     r8, r7, 0x14
  subi      r8, r8, 0x3FF
  cmpwi     r8, 0x14
  ble-      .loc_0x118
  subfic    r8, r8, 0x34
  srw       r9, r11, r8
  slw       r8, r9, r8
  cmplw     r11, r8
  bne-      .loc_0x13C
  rlwinm    r4,r9,0,31,31
  subfic    r4, r4, 0x2
  b         .loc_0x13C

.loc_0x118:
  cmplwi    r11, 0
  bne-      .loc_0x13C
  subfic    r8, r8, 0x14
  sraw      r9, r7, r8
  slw       r8, r9, r8
  cmpw      r7, r8
  bne-      .loc_0x13C
  rlwinm    r4,r9,0,31,31
  subfic    r4, r4, 0x2

.loc_0x13C:
  cmplwi    r11, 0
  bne-      .loc_0x20C
  subis     r8, r7, 0x7FF0
  cmplwi    r8, 0
  bne-      .loc_0x1A8
  subis     r0, r6, 0x3FF0
  or.       r0, r0, r10
  bne-      .loc_0x168
  lfd       f0, 0x10(r1)
  fsub      f1, f0, f0
  b         .loc_0x7F8

.loc_0x168:
  lis       r0, 0x3FF0
  cmpw      r6, r0
  blt-      .loc_0x18C
  cmpwi     r5, 0
  blt-      .loc_0x184
  lfd       f1, 0x10(r1)
  b         .loc_0x7F8

.loc_0x184:
  lfd       f1, -0x7060(r2)
  b         .loc_0x7F8

.loc_0x18C:
  cmpwi     r5, 0
  bge-      .loc_0x1A0
  lfd       f0, 0x10(r1)
  fneg      f1, f0
  b         .loc_0x7F8

.loc_0x1A0:
  lfd       f1, -0x7060(r2)
  b         .loc_0x7F8

.loc_0x1A8:
  subis     r8, r7, 0x3FF0
  cmplwi    r8, 0
  bne-      .loc_0x1D4
  cmpwi     r5, 0
  bge-      .loc_0x1CC
  lfd       f1, -0x7068(r2)
  lfd       f0, 0x8(r1)
  fdiv      f1, f1, f0
  b         .loc_0x7F8

.loc_0x1CC:
  lfd       f1, 0x8(r1)
  b         .loc_0x7F8

.loc_0x1D4:
  subis     r8, r5, 0x4000
  cmplwi    r8, 0
  bne-      .loc_0x1EC
  lfd       f0, 0x8(r1)
  fmul      f1, f0, f0
  b         .loc_0x7F8

.loc_0x1EC:
  subis     r8, r5, 0x3FE0
  cmplwi    r8, 0
  bne-      .loc_0x20C
  cmpwi     r0, 0
  blt-      .loc_0x20C
  lfd       f1, 0x8(r1)
  bl        0x2954
  b         .loc_0x7F8

.loc_0x20C:
  lfd       f0, 0x8(r1)
  cmplwi    r10, 0
  fabs      f1, f0
  stfd      f1, 0x48(r1)
  bne-      .loc_0x29C
  subis     r8, r6, 0x7FF0
  cmplwi    r8, 0
  beq-      .loc_0x240
  cmpwi     r6, 0
  beq-      .loc_0x240
  subis     r8, r6, 0x3FF0
  cmplwi    r8, 0
  bne-      .loc_0x29C

.loc_0x240:
  cmpwi     r5, 0
  stfd      f1, 0x50(r1)
  bge-      .loc_0x258
  lfd       f0, -0x7068(r2)
  fdiv      f0, f0, f1
  stfd      f0, 0x50(r1)

.loc_0x258:
  cmpwi     r0, 0
  bge-      .loc_0x294
  subis     r0, r6, 0x3FF0
  or.       r0, r0, r4
  bne-      .loc_0x280
  lfd       f0, 0x50(r1)
  fsub      f0, f0, f0
  fdiv      f0, f0, f0
  stfd      f0, 0x50(r1)
  b         .loc_0x294

.loc_0x280:
  cmpwi     r4, 0x1
  bne-      .loc_0x294
  lfd       f0, 0x50(r1)
  fneg      f0, f0
  stfd      f0, 0x50(r1)

.loc_0x294:
  lfd       f1, 0x50(r1)
  b         .loc_0x7F8

.loc_0x29C:
  srawi     r8, r0, 0x1F
  addi      r0, r8, 0x1
  or.       r8, r0, r4
  bne-      .loc_0x2C0
  lis       r3, 0x8051
  li        r0, 0x21
  stw       r0, -0x7340(r13)
  lfs       f1, 0x48B0(r3)
  b         .loc_0x7F8

.loc_0x2C0:
  lis       r8, 0x41E0
  cmpw      r7, r8
  ble-      .loc_0x3CC
  lis       r3, 0x43F0
  cmpw      r7, r3
  ble-      .loc_0x320
  lis       r3, 0x3FF0
  subi      r7, r3, 0x1
  cmpw      r6, r7
  bgt-      .loc_0x300
  cmpwi     r5, 0
  bge-      .loc_0x2F8
  lfd       f1, -0x7058(r2)
  b         .loc_0x7F8

.loc_0x2F8:
  lfd       f1, -0x7060(r2)
  b         .loc_0x7F8

.loc_0x300:
  cmpw      r6, r3
  blt-      .loc_0x320
  cmpwi     r5, 0
  ble-      .loc_0x318
  lfd       f1, -0x7058(r2)
  b         .loc_0x7F8

.loc_0x318:
  lfd       f1, -0x7060(r2)
  b         .loc_0x7F8

.loc_0x320:
  lis       r3, 0x3FF0
  subi      r7, r3, 0x1
  cmpw      r6, r7
  bge-      .loc_0x348
  cmpwi     r5, 0
  bge-      .loc_0x340
  lfd       f1, -0x7058(r2)
  b         .loc_0x7F8

.loc_0x340:
  lfd       f1, -0x7060(r2)
  b         .loc_0x7F8

.loc_0x348:
  cmpw      r6, r3
  ble-      .loc_0x368
  cmpwi     r5, 0
  ble-      .loc_0x360
  lfd       f1, -0x7058(r2)
  b         .loc_0x7F8

.loc_0x360:
  lfd       f1, -0x7060(r2)
  b         .loc_0x7F8

.loc_0x368:
  lfd       f2, 0x8(r1)
  li        r3, 0
  lfd       f0, -0x7068(r2)
  lfd       f1, -0x7040(r2)
  fsub      f6, f2, f0
  lfd       f0, -0x7048(r2)
  lfd       f2, -0x7038(r2)
  lfd       f3, -0x7050(r2)
  fnmsub    f4, f1, f6, f0
  lfd       f0, -0x7028(r2)
  lfd       f1, -0x7030(r2)
  fmul      f5, f6, f6
  stfd      f6, 0x28(r1)
  fnmsub    f3, f6, f4, f3
  fmul      f2, f2, f6
  fmul      f3, f5, f3
  fmul      f0, f0, f3
  fmsub     f1, f1, f6, f0
  fadd      f0, f2, f1
  stfd      f0, 0x30(r1)
  stw       r3, 0x34(r1)
  lfd       f0, 0x30(r1)
  fsub      f0, f0, f2
  fsub      f0, f1, f0
  b         .loc_0x5B4

.loc_0x3CC:
  lis       r5, 0x10
  li        r10, 0
  cmpw      r6, r5
  bge-      .loc_0x3F4
  lfd       f1, 0x48(r1)
  li        r10, -0x35
  lfd       f0, -0x7020(r2)
  fmul      f0, f1, f0
  stfd      f0, 0x48(r1)
  lwz       r6, 0x48(r1)

.loc_0x3F4:
  lis       r5, 0x4
  rlwinm    r8,r6,0,12,31
  subi      r5, r5, 0x6772
  srawi     r6, r6, 0x14
  cmpw      r8, r5
  oris      r7, r8, 0x3FF0
  add       r10, r6, r10
  subi      r10, r10, 0x3FF
  bgt-      .loc_0x420
  li        r11, 0
  b         .loc_0x444

.loc_0x420:
  lis       r5, 0xC
  subi      r5, r5, 0x4986
  cmpw      r8, r5
  bge-      .loc_0x438
  li        r11, 0x1
  b         .loc_0x444

.loc_0x438:
  subis     r7, r7, 0x10
  li        r11, 0
  addi      r10, r10, 0x1

.loc_0x444:
  stw       r7, 0x48(r1)
  srawi     r5, r7, 0x1
  rlwinm    r9,r11,3,0,28
  addi      r6, r3, 0
  lfd       f30, 0x48(r1)
  oris      r8, r5, 0x2000
  lfdx      f5, r6, r9
  addi      r7, r3, 0x20
  lfd       f1, -0x7060(r2)
  xoris     r6, r10, 0x8000
  fadd      f0, f30, f5
  lfd       f2, -0x7068(r2)
  lis       r5, 0x4330
  addi      r10, r3, 0x10
  fsub      f31, f30, f5
  lfd       f4, -0x6FF0(r2)
  fdiv      f28, f2, f0
  lfd       f0, -0x6FF8(r2)
  lfd       f3, -0x7000(r2)
  addis     r8, r8, 0x8
  rlwinm    r3,r11,18,0,13
  stfd      f1, 0x18(r1)
  fmul      f1, f31, f28
  add       r3, r8, r3
  stw       r3, 0x18(r1)
  li        r3, 0
  lfd       f2, -0x7008(r2)
  lfd       f12, 0x18(r1)
  fmul      f27, f1, f1
  stfd      f1, 0x20(r1)
  lfd       f11, -0x7010(r2)
  stw       r3, 0x24(r1)
  fsub      f13, f12, f5
  lfd       f9, -0x7018(r2)
  fmadd     f4, f4, f27, f0
  lfd       f29, 0x20(r1)
  lfd       f10, -0x6FE8(r2)
  fmul      f0, f29, f29
  lfd       f5, -0x6FD0(r2)
  lfd       f6, -0x6FD8(r2)
  fmadd     f3, f27, f4, f3
  lfd       f8, -0x6FE0(r2)
  lfdx      f7, r7, r9
  fnmsub    f31, f29, f12, f31
  stw       r6, 0x5C(r1)
  lfd       f4, -0x6F60(r2)
  fmadd     f12, f27, f3, f2
  stw       r5, 0x58(r1)
  lfdx      f2, r10, r9
  fsub      f30, f30, f13
  lfd       f3, 0x58(r1)
  fmul      f13, f27, f27
  fmadd     f11, f27, f12, f11
  fnmsub    f12, f29, f30, f31
  fmadd     f9, f27, f11, f9
  fmul      f27, f28, f12
  fmul      f12, f13, f9
  fadd      f11, f29, f1
  fadd      f9, f10, f0
  fsub      f3, f3, f4
  fmadd     f12, f27, f11, f12
  stfd      f3, 0x28(r1)
  fadd      f4, f9, f12
  stfd      f4, 0x18(r1)
  stw       r3, 0x1C(r1)
  lfd       f9, 0x18(r1)
  fsub      f4, f9, f10
  fmul      f10, f29, f9
  fsub      f0, f4, f0
  fsub      f0, f12, f0
  fmul      f0, f0, f1
  fmadd     f4, f27, f9, f0
  fadd      f0, f10, f4
  stfd      f0, 0x40(r1)
  stw       r3, 0x44(r1)
  lfd       f1, 0x40(r1)
  fsub      f0, f1, f10
  fmul      f8, f8, f1
  fsub      f0, f4, f0
  fmul      f0, f5, f0
  fmadd     f0, f6, f1, f0
  fadd      f1, f7, f0
  fadd      f0, f8, f1
  fadd      f0, f0, f2
  fadd      f0, f3, f0
  stfd      f0, 0x30(r1)
  stw       r3, 0x34(r1)
  lfd       f0, 0x30(r1)
  fsub      f0, f0, f3
  fsub      f0, f0, f2
  fsub      f0, f0, f8
  fsub      f0, f1, f0

.loc_0x5B4:
  subi      r3, r4, 0x1
  lfd       f31, -0x7068(r2)
  or.       r0, r0, r3
  bne-      .loc_0x5C8
  lfd       f31, -0x6FC8(r2)

.loc_0x5C8:
  lfd       f1, 0x10(r1)
  li        r3, 0
  lfd       f3, 0x30(r1)
  lis       r0, 0x4090
  stfd      f1, 0x38(r1)
  fmul      f0, f1, f0
  stw       r3, 0x3C(r1)
  lfd       f2, 0x38(r1)
  fsub      f1, f1, f2
  fmul      f2, f2, f3
  fmadd     f12, f3, f1, f0
  stfd      f2, 0x40(r1)
  fadd      f0, f12, f2
  stfd      f0, 0x50(r1)
  lwz       r6, 0x50(r1)
  lwz       r5, 0x54(r1)
  cmpw      r6, r0
  blt-      .loc_0x650
  subis     r0, r6, 0x4090
  or.       r0, r0, r5
  beq-      .loc_0x62C
  lfd       f1, -0x6FC0(r2)
  fmul      f0, f1, f31
  fmul      f1, f1, f0
  b         .loc_0x7F8

.loc_0x62C:
  lfd       f1, -0x6FB8(r2)
  fsub      f0, f0, f2
  fadd      f1, f1, f12
  fcmpo     cr0, f1, f0
  ble-      .loc_0x6A4
  lfd       f1, -0x6FC0(r2)
  fmul      f0, f1, f31
  fmul      f1, f1, f0
  b         .loc_0x7F8

.loc_0x650:
  lis       r3, 0x4091
  rlwinm    r4,r6,0,1,31
  subi      r0, r3, 0x3400
  cmpw      r4, r0
  blt-      .loc_0x6A4
  addis     r3, r6, 0x3F6F
  addi      r0, r3, 0x3400
  or.       r0, r0, r5
  beq-      .loc_0x684
  lfd       f1, -0x6FB0(r2)
  fmul      f0, f1, f31
  fmul      f1, f1, f0
  b         .loc_0x7F8

.loc_0x684:
  fsub      f0, f0, f2
  fcmpo     cr0, f12, f0
  cror      2, 0, 0x2
  bne-      .loc_0x6A4
  lfd       f1, -0x6FB0(r2)
  fmul      f0, f1, f31
  fmul      f1, f1, f0
  b         .loc_0x7F8

.loc_0x6A4:
  rlwinm    r3,r6,0,1,31
  lis       r0, 0x3FE0
  cmpw      r3, r0
  rlwinm    r4,r6,12,21,31
  li        r3, 0
  ble-      .loc_0x71C
  lis       r3, 0x10
  subi      r0, r4, 0x3FE
  sraw      r0, r3, r0
  lfd       f0, -0x7060(r2)
  add       r7, r6, r0
  subi      r3, r3, 0x1
  rlwinm    r0,r7,0,1,31
  stfd      f0, 0x28(r1)
  srawi     r4, r0, 0x14
  rlwinm    r0,r7,0,12,31
  subi      r5, r4, 0x3FF
  cmpwi     r6, 0
  sraw      r4, r3, r5
  oris      r3, r0, 0x10
  andc      r4, r7, r4
  subfic    r0, r5, 0x14
  stw       r4, 0x28(r1)
  sraw      r3, r3, r0
  bge-      .loc_0x70C
  neg       r3, r3

.loc_0x70C:
  lfd       f1, 0x40(r1)
  lfd       f0, 0x28(r1)
  fsub      f0, f1, f0
  stfd      f0, 0x40(r1)

.loc_0x71C:
  lfd       f2, 0x40(r1)
  li        r0, 0
  lfd       f1, -0x6F98(r2)
  rlwinm    r4,r3,20,0,11
  fadd      f0, f12, f2
  lfd       f10, -0x6FA8(r2)
  lfd       f9, -0x6FA0(r2)
  lfd       f6, -0x6F70(r2)
  stfd      f0, 0x28(r1)
  lfd       f5, -0x6F78(r2)
  stw       r0, 0x2C(r1)
  lfd       f0, -0x6F80(r2)
  lfd       f11, 0x28(r1)
  lfd       f4, -0x6F88(r2)
  fsub      f8, f11, f2
  lfd       f3, -0x6F90(r2)
  fmul      f7, f1, f11
  lfd       f2, -0x6F68(r2)
  lfd       f1, -0x7068(r2)
  fsub      f8, f12, f8
  fmul      f10, f10, f11
  fmadd     f11, f9, f8, f7
  fadd      f9, f10, f11
  fmul      f7, f9, f9
  stfd      f9, 0x50(r1)
  fsub      f8, f9, f10
  fmadd     f5, f6, f7, f5
  stfd      f7, 0x28(r1)
  fsub      f6, f11, f8
  fmadd     f5, f7, f5, f0
  fmadd     f0, f9, f6, f6
  fmadd     f4, f7, f5, f4
  fmadd     f3, f7, f4, f3
  fmul      f3, f7, f3
  fsub      f4, f9, f3
  fmul      f3, f9, f4
  stfd      f4, 0x30(r1)
  fsub      f2, f4, f2
  fdiv      f2, f3, f2
  fsub      f0, f2, f0
  fsub      f0, f0, f9
  fsub      f1, f1, f0
  stfd      f1, 0x50(r1)
  lwz       r0, 0x50(r1)
  add       r0, r0, r4
  srawi.    r0, r0, 0x14
  bgt-      .loc_0x7E4
  bl        0x1C20
  stfd      f1, 0x50(r1)
  b         .loc_0x7F0

.loc_0x7E4:
  lwz       r0, 0x50(r1)
  add       r0, r0, r4
  stw       r0, 0x50(r1)

.loc_0x7F0:
  lfd       f0, 0x50(r1)
  fmul      f1, f31, f0

.loc_0x7F8:
  psq_l     f31,0xA8(r1),0,0
  lfd       f31, 0xA0(r1)
  psq_l     f30,0x98(r1),0,0
  lfd       f30, 0x90(r1)
  psq_l     f29,0x88(r1),0,0
  lfd       f29, 0x80(r1)
  psq_l     f28,0x78(r1),0,0
  lfd       f28, 0x70(r1)
  psq_l     f27,0x68(r1),0,0
  lwz       r0, 0xB4(r1)
  lfd       f27, 0x60(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}