

/*
 * --INFO--
 * Address:	800CC3B0
 * Size:	000238
 */
void __ieee754_asin(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  stw       r0, 0x54(r1)
  stfd      f31, 0x40(r1)
  psq_st    f31,0x48(r1),0,0
  stfd      f30, 0x30(r1)
  psq_st    f30,0x38(r1),0,0
  stfd      f29, 0x20(r1)
  psq_st    f29,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stfd      f1, 0x8(r1)
  lis       r0, 0x3FF0
  lwz       r31, 0x8(r1)
  rlwinm    r30,r31,0,1,31
  cmpw      r30, r0
  blt-      .loc_0x74
  lwz       r0, 0xC(r1)
  subis     r3, r30, 0x3FF0
  or.       r0, r3, r0
  bne-      .loc_0x68
  lfd       f0, -0x7268(r2)
  lfd       f2, -0x7270(r2)
  fmul      f0, f0, f1
  fmadd     f1, f2, f1, f0
  b         .loc_0x208

.loc_0x68:
  lis       r3, 0x8051
  lfs       f1, 0x48B0(r3)
  b         .loc_0x208

.loc_0x74:
  lis       r0, 0x3FE0
  cmpw      r30, r0
  bge-      .loc_0x110
  lis       r0, 0x3E40
  cmpw      r30, r0
  bge-      .loc_0xA4
  lfd       f2, -0x7260(r2)
  lfd       f0, -0x7258(r2)
  fadd      f2, f2, f1
  fcmpo     cr0, f2, f0
  ble-      .loc_0xA8
  b         .loc_0x208

.loc_0xA4:
  fmul      f31, f1, f1

.loc_0xA8:
  lfd       f1, -0x7228(r2)
  lfd       f0, -0x7230(r2)
  lfd       f2, -0x7238(r2)
  fmadd     f3, f1, f31, f0
  lfd       f6, -0x7240(r2)
  lfd       f1, -0x7208(r2)
  lfd       f0, -0x7210(r2)
  lfd       f5, -0x7248(r2)
  fmadd     f7, f31, f3, f2
  lfd       f2, -0x7218(r2)
  fmadd     f3, f1, f31, f0
  lfd       f4, -0x7250(r2)
  lfd       f1, -0x7220(r2)
  fmadd     f6, f31, f7, f6
  lfd       f0, -0x7258(r2)
  fmadd     f2, f31, f3, f2
  lfd       f7, 0x8(r1)
  fmadd     f3, f31, f6, f5
  fmadd     f1, f31, f2, f1
  fmadd     f2, f31, f3, f4
  fmadd     f0, f31, f1, f0
  fmul      f1, f31, f2
  fdiv      f0, f1, f0
  fmadd     f1, f7, f0, f7
  stfd      f0, 0x10(r1)
  b         .loc_0x208

.loc_0x110:
  fabs      f1, f1
  lfd       f9, -0x7258(r2)
  lfd       f0, -0x7200(r2)
  lfd       f7, -0x7228(r2)
  fsub      f8, f9, f1
  lfd       f3, -0x7230(r2)
  lfd       f6, -0x7238(r2)
  lfd       f5, -0x7240(r2)
  fmul      f31, f0, f8
  lfd       f2, -0x7208(r2)
  lfd       f0, -0x7210(r2)
  lfd       f4, -0x7248(r2)
  lfd       f1, -0x7218(r2)
  fmadd     f7, f7, f31, f3
  lfd       f3, -0x7250(r2)
  fmadd     f2, f2, f31, f0
  lfd       f0, -0x7220(r2)
  stfd      f8, 0x10(r1)
  fmadd     f6, f31, f7, f6
  fmadd     f1, f31, f2, f1
  fmadd     f2, f31, f6, f5
  fmadd     f0, f31, f1, f0
  fmadd     f1, f31, f2, f4
  fmadd     f29, f31, f0, f9
  fmadd     f0, f31, f1, f3
  fmr       f1, f31
  fmul      f30, f31, f0
  bl        0x3790
  lis       r3, 0x3FEF
  addi      r0, r3, 0x3333
  cmpw      r30, r0
  blt-      .loc_0x1B4
  fdiv      f4, f30, f29
  lfd       f2, -0x71F8(r2)
  lfd       f0, -0x7268(r2)
  lfd       f3, -0x7270(r2)
  fmadd     f1, f1, f4, f1
  stfd      f4, 0x10(r1)
  fmsub     f0, f2, f1, f0
  fsub      f1, f3, f0
  b         .loc_0x1F8

.loc_0x1B4:
  stfd      f1, 0x10(r1)
  li        r0, 0
  lfd       f7, -0x71F8(r2)
  fdiv      f5, f30, f29
  stw       r0, 0x14(r1)
  lfd       f0, -0x7268(r2)
  lfd       f8, 0x10(r1)
  lfd       f2, -0x71F0(r2)
  fnmsub    f4, f8, f8, f31
  fadd      f3, f1, f8
  fmul      f6, f7, f1
  fdiv      f1, f4, f3
  fnmsub    f1, f7, f1, f0
  fnmsub    f0, f7, f8, f2
  fmsub     f1, f6, f5, f1
  fsub      f0, f1, f0
  fsub      f1, f2, f0

.loc_0x1F8:
  cmpwi     r31, 0
  ble-      .loc_0x204
  b         .loc_0x208

.loc_0x204:
  fneg      f1, f1

.loc_0x208:
  psq_l     f31,0x48(r1),0,0
  lfd       f31, 0x40(r1)
  psq_l     f30,0x38(r1),0,0
  lfd       f30, 0x30(r1)
  psq_l     f29,0x28(r1),0,0
  lfd       f29, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x54(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}