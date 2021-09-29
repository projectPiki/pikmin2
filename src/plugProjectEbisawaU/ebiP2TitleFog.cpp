

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB1A4
 * Size:	000118
 */
void setGX__Q33ebi5title12TTitleFogMgrFR6Camera(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stfd      f29, 0x30(r1)
  psq_st    f29,0x38(r1),0,0
  stw       r31, 0x2C(r1)
  lbz       r0, 0x4C(r3)
  mr        r31, r4
  cmplwi    r0, 0
  beq-      .loc_0xC8
  lwz       r6, 0xB8(r3)
  lwz       r5, 0xE0(r3)
  lwz       r4, 0x108(r3)
  lwz       r0, 0x130(r3)
  stb       r6, 0x8(r1)
  lfs       f30, 0x68(r3)
  lfs       f29, 0x90(r3)
  mr        r3, r31
  stb       r5, 0x9(r1)
  stb       r4, 0xA(r1)
  stb       r0, 0xB(r1)
  lwz       r0, 0x8(r1)
  stw       r0, 0x10(r1)
  bl        0x2FB18
  fmr       f31, f1
  mr        r3, r31
  bl        0x2FAF0
  fmr       f3, f1
  addi      r4, r1, 0x10
  fmr       f1, f30
  li        r3, 0x2
  fmr       f2, f29
  fmr       f4, f31
  bl        -0x302658
  bl        0x37FE8
  lhz       r4, 0x4(r3)
  addi      r3, r1, 0x14
  addi      r5, r31, 0xB4
  bl        -0x302448
  bl        0x37FD4
  lhz       r0, 0x4(r3)
  addi      r5, r1, 0x14
  li        r3, 0x1
  rlwinm    r4,r0,31,17,31
  bl        -0x3022B0
  b         .loc_0xEC

.loc_0xC8:
  lfs       f1, 0x1AD0(r2)
  addi      r4, r1, 0xC
  lwz       r0, 0x24(r3)
  li        r3, 0
  fmr       f2, f1
  fmr       f3, f1
  stw       r0, 0xC(r1)
  fmr       f4, f1
  bl        -0x3026AC

.loc_0xEC:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  psq_l     f29,0x38(r1),0,0
  lfd       f29, 0x30(r1)
  lwz       r0, 0x64(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void offGX__Q33ebi5title12TTitleFogMgrFv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EB2BC
 * Size:	00007C
 */
void loadSettingFile__Q33ebi5title12TTitleFogMgrFP10JKRArchivePc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x430(r1)
  mflr      r0
  stw       r0, 0x434(r1)
  stw       r31, 0x42C(r1)
  mr        r31, r3
  mr        r3, r4
  lwz       r12, 0x0(r4)
  mr        r4, r5
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x68
  mr        r4, r3
  addi      r3, r1, 0x8
  li        r5, -0x1
  bl        0x2A5FC
  li        r0, 0x1
  cmpwi     r0, 0x1
  stw       r0, 0x14(r1)
  bne-      .loc_0x5C
  li        r0, 0
  stw       r0, 0x41C(r1)

.loc_0x5C:
  addi      r3, r31, 0x28
  addi      r4, r1, 0x8
  bl        0x284D4

.loc_0x68:
  lwz       r0, 0x434(r1)
  lwz       r31, 0x42C(r1)
  mtlr      r0
  addi      r1, r1, 0x430
  blr
*/
}

/*
 * --INFO--
 * Address:	803EB338
 * Size:	000028
 */
void __sinit_ebiP2TitleFog_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6570(r13)
  stfsu     f0, -0x6058(r3)
  stfs      f0, -0x656C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}