

/*
 * --INFO--
 * Address:	........
 * Size:	00009C
 */
void C_MTXFrustum(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EAD08
 * Size:	0000D0
 */
void C_MTXPerspective(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x40(r1)
	  stfd      f31, 0x38(r1)
	  fmr       f31, f4
	  stfd      f30, 0x30(r1)
	  fmr       f30, f3
	  stfd      f29, 0x28(r1)
	  fmr       f29, f2
	  stw       r31, 0x24(r1)
	  mr        r31, r3
	  lfs       f5, -0x6C20(r2)
	  lfs       f0, -0x6C1C(r2)
	  fmuls     f1, f5, f1
	  fmuls     f1, f0, f1
	  bl        -0x1B0F4
	  lfs       f3, -0x6C30(r2)
	  fsubs     f2, f31, f30
	  fmuls     f0, f31, f30
	  fdivs     f4, f3, f1
	  fdivs     f1, f4, f29
	  stfs      f1, 0x0(r31)
	  fdivs     f3, f3, f2
	  lfs       f2, -0x6C28(r2)
	  stfs      f2, 0x4(r31)
	  stfs      f2, 0x8(r31)
	  stfs      f2, 0xC(r31)
	  stfs      f2, 0x10(r31)
	  fneg      f1, f30
	  fneg      f0, f0
	  stfs      f4, 0x14(r31)
	  fmuls     f1, f1, f3
	  stfs      f2, 0x18(r31)
	  fmuls     f0, f3, f0
	  stfs      f2, 0x1C(r31)
	  stfs      f2, 0x20(r31)
	  stfs      f2, 0x24(r31)
	  stfs      f1, 0x28(r31)
	  stfs      f0, 0x2C(r31)
	  stfs      f2, 0x30(r31)
	  stfs      f2, 0x34(r31)
	  lfs       f0, -0x6C24(r2)
	  stfs      f0, 0x38(r31)
	  stfs      f2, 0x3C(r31)
	  lwz       r0, 0x44(r1)
	  lfd       f31, 0x38(r1)
	  lfd       f30, 0x30(r1)
	  lfd       f29, 0x28(r1)
	  lwz       r31, 0x24(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800EADD8
 * Size:	000098
 */
void C_MTXOrtho(void)
{
	/*
	.loc_0x0:
	  fsubs     f8, f4, f3
	  lfs       f9, -0x6C30(r2)
	  fsubs     f0, f1, f2
	  lfs       f7, -0x6C2C(r2)
	  fadds     f3, f4, f3
	  fdivs     f10, f9, f8
	  fdivs     f8, f9, f0
	  fmuls     f4, f7, f10
	  fneg      f3, f3
	  fsubs     f0, f6, f5
	  stfs      f4, 0x0(r3)
	  fadds     f1, f1, f2
	  fmuls     f2, f10, f3
	  lfs       f3, -0x6C28(r2)
	  fneg      f1, f1
	  stfs      f3, 0x4(r3)
	  fdivs     f4, f9, f0
	  stfs      f3, 0x8(r3)
	  stfs      f2, 0xC(r3)
	  stfs      f3, 0x10(r3)
	  fmuls     f2, f7, f8
	  fneg      f0, f6
	  fmuls     f1, f8, f1
	  stfs      f2, 0x14(r3)
	  fmuls     f0, f0, f4
	  stfs      f3, 0x18(r3)
	  stfs      f1, 0x1C(r3)
	  stfs      f3, 0x20(r3)
	  stfs      f3, 0x24(r3)
	  lfs       f1, -0x6C24(r2)
	  fmuls     f1, f1, f4
	  stfs      f1, 0x28(r3)
	  stfs      f0, 0x2C(r3)
	  stfs      f3, 0x30(r3)
	  stfs      f3, 0x34(r3)
	  stfs      f3, 0x38(r3)
	  stfs      f9, 0x3C(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void C_MTX44Identity(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void PSMTX44Identity(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00008C
 */
void C_MTX44Copy(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800EAE70
 * Size:	000044
 */
void PSMTX44Copy(void)
{
	/*
	.loc_0x0:
	  psq_l     f1,0x0(r3),0,0
	  psq_st    f1,0x0(r4),0,0
	  psq_l     f1,0x8(r3),0,0
	  psq_st    f1,0x8(r4),0,0
	  psq_l     f1,0x10(r3),0,0
	  psq_st    f1,0x10(r4),0,0
	  psq_l     f1,0x18(r3),0,0
	  psq_st    f1,0x18(r4),0,0
	  psq_l     f1,0x20(r3),0,0
	  psq_st    f1,0x20(r4),0,0
	  psq_l     f1,0x28(r3),0,0
	  psq_st    f1,0x28(r4),0,0
	  psq_l     f1,0x30(r3),0,0
	  psq_st    f1,0x30(r4),0,0
	  psq_l     f1,0x38(r3),0,0
	  psq_st    f1,0x38(r4),0,0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000450
 */
void C_MTX44Concat(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000104
 */
void PSMTX44Concat(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void C_MTX44Transpose(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void PSMTX44Transpose(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003F0
 */
void C_MTX44Inverse(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void C_MTX44Trans(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void PSMTX44Trans(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void C_MTX44TransApply(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void PSMTX44TransApply(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void C_MTX44Scale(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void PSMTX44Scale(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B4
 */
void C_MTX44ScaleApply(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void PSMTX44ScaleApply(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void C_MTX44RotRad(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void PSMTX44RotRad(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void C_MTX44RotTrig(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D4
 */
void PSMTX44RotTrig(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void C_MTX44RotAxisRad(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000BC
 */
void __PSMTX44RotAxisRadInternal(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000070
 */
void PSMTX44RotAxisRad(void)
{
	// UNUSED FUNCTION
}
