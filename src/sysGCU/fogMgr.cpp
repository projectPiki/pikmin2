

/*
 * --INFO--
 * Address:	80432948
 * Size:	000074
 */
void FogMgr::FogMgr()
{
/*
.loc_0x0:
  lis       r6, 0x804F
  lis       r5, 0x804A
  subi      r0, r6, 0x4AD8
  lis       r4, 0x804E
  stw       r0, 0x0(r3)
  li        r10, 0
  subi      r9, r5, 0x59F0
  addi      r8, r4, 0x78CC
  stw       r10, 0x10(r3)
  li        r7, 0x2
  lfs       f1, 0x2400(r2)
  li        r6, 0xAD
  stw       r10, 0xC(r3)
  li        r5, 0xB1
  lfs       f0, 0x2404(r2)
  li        r4, 0xFC
  stw       r10, 0x8(r3)
  li        r0, 0xFF
  stw       r10, 0x4(r3)
  stw       r9, 0x14(r3)
  stw       r8, 0x0(r3)
  stw       r7, 0x18(r3)
  stfs      f1, 0x1C(r3)
  stfs      f0, 0x20(r3)
  stb       r6, 0x24(r3)
  stb       r5, 0x25(r3)
  stb       r4, 0x26(r3)
  stb       r0, 0x27(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	804329BC
 * Size:	000040
 */
void FogMgr::off(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x2408(r2)
  stw       r0, 0x14(r1)
  addi      r4, r1, 0x8
  fmr       f2, f1
  lwz       r0, 0x24(r3)
  fmr       f3, f1
  fmr       f4, f1
  li        r3, 0
  stw       r0, 0x8(r1)
  bl        -0x349E08
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804329FC
 * Size:	0000AC
 */
void FogMgr::set(Graphics &)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  lwz       r4, 0x25C(r4)
  mr        r30, r3
  lwz       r0, 0x24(r3)
  lwz       r31, 0x44(r4)
  stw       r0, 0x8(r1)
  mr        r3, r31
  bl        -0x17D08
  fmr       f31, f1
  mr        r3, r31
  bl        -0x17D30
  fmr       f3, f1
  lwz       r3, 0x18(r30)
  fmr       f4, f31
  lfs       f1, 0x1C(r30)
  lfs       f2, 0x20(r30)
  addi      r4, r1, 0x8
  bl        -0x349E78
  bl        -0xF838
  lhz       r4, 0x4(r3)
  addi      r3, r1, 0xC
  addi      r5, r31, 0xB4
  bl        -0x349C68
  bl        -0xF84C
  lhz       r0, 0x4(r3)
  addi      r5, r1, 0xC
  li        r3, 0x1
  rlwinm    r4,r0,31,17,31
  bl        -0x349AD0
  psq_l     f31,0x38(r1),0,0
  lwz       r0, 0x44(r1)
  lfd       f31, 0x30(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80432AA8
 * Size:	000024
 */
void FogMgr::setColor(Color4 &)
{
/*
.loc_0x0:
  lbz       r0, 0x0(r4)
  stb       r0, 0x24(r3)
  lbz       r0, 0x1(r4)
  stb       r0, 0x25(r3)
  lbz       r0, 0x2(r4)
  stb       r0, 0x26(r3)
  lbz       r0, 0x3(r4)
  stb       r0, 0x27(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80432ACC
 * Size:	000024
 */
void FogMgr::getColor(Color4 &)
{
/*
.loc_0x0:
  lbz       r0, 0x24(r3)
  stb       r0, 0x0(r4)
  lbz       r0, 0x25(r3)
  stb       r0, 0x1(r4)
  lbz       r0, 0x26(r3)
  stb       r0, 0x2(r4)
  lbz       r0, 0x27(r3)
  stb       r0, 0x3(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80432AF0
 * Size:	000028
 */
void __sinit_fogMgr_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6460(r13)
  stfsu     f0, -0x3C48(r3)
  stfs      f0, -0x645C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
