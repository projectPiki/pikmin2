

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void J2DMatchingCullModeTable(_GXCullMode)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void writeJ2DIndTexOrderInfo(J2DIndTexOrderInfo &, unsigned char **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void writeJ2DIndTexMtxInfo(J2DIndTexMtxInfo &, unsigned char **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00005C
 */
void writeJ2DIndTexCoordScaleInfo(J2DIndTexCoordScaleInfo &, unsigned char **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F0
 */
void writeJ2DIndTevStageInfo(J2DIndTevStageInfo &, unsigned char **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8005921C
 * Size:	000030
 */
void J2DTexMtx::load(unsigned long)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mulli     r4, r4, 0x3
  stw       r0, 0x14(r1)
  lbz       r5, 0x0(r3)
  addi      r3, r3, 0x24
  addi      r4, r4, 0x1E
  bl        0x90414
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8005924C
 * Size:	000068
 */
void J2DTexMtx::calc()
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  lbz       r0, 0x1(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  lwz       r7, 0x4(r3)
  addi      r4, r3, 0x10
  lwz       r0, 0x8(r3)
  addi      r5, r1, 0x8
  addi      r6, r3, 0x24
  stw       r7, 0x8(r1)
  stw       r0, 0xC(r1)
  lwz       r0, 0xC(r3)
  stw       r0, 0x10(r1)
  bl        .loc_0x68
  b         .loc_0x58

.loc_0x44:
  cmplwi    r0, 0x1
  bne-      .loc_0x58
  addi      r4, r3, 0x10
  addi      r5, r3, 0x24
  bl        0x1A4

.loc_0x58:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x68:
*/
}

/*
 * --INFO--
 * Address:	800592B4
 * Size:	000190
 */
void J2DTexMtx::getTextureMtx(const J2DTextureSRTInfo &, Vec, float (*) [4])
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stfd      f31, 0x30(r1)
  psq_st    f31,0x38(r1),0,0
  stfd      f30, 0x20(r1)
  psq_st    f30,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  lfs       f2, -0x7A68(r2)
  lfs       f1, 0x8(r4)
  mr        r30, r5
  lfs       f0, -0x7A64(r2)
  mr        r31, r6
  fmuls     f1, f2, f1
  fdivs     f31, f1, f0
  fmr       f1, f31
  bl        0x75FB4
  frsp      f2, f1
  lfs       f0, 0x0(r29)
  fmr       f1, f31
  fmuls     f0, f0, f2
  stfs      f0, 0x0(r31)
  bl        0x76504
  lfs       f2, 0x0(r29)
  frsp      f3, f1
  lfs       f0, -0x7A60(r2)
  fmr       f1, f31
  fneg      f2, f2
  fmuls     f2, f2, f3
  stfs      f2, 0x4(r31)
  stfs      f0, 0x8(r31)
  bl        0x764E0
  frsp      f30, f1
  fmr       f1, f31
  bl        0x75F6C
  lfs       f0, 0x0(r29)
  frsp      f5, f1
  lfs       f2, 0x4(r30)
  fmr       f1, f31
  fneg      f3, f0
  lfs       f6, 0x0(r30)
  fmuls     f0, f0, f30
  lfs       f4, 0xC(r29)
  fmuls     f3, f3, f5
  fmuls     f0, f2, f0
  fmadds    f0, f6, f3, f0
  fadds     f0, f6, f0
  fadds     f0, f4, f0
  stfs      f0, 0xC(r31)
  bl        0x76498
  frsp      f2, f1
  lfs       f0, 0x4(r29)
  fmr       f1, f31
  fmuls     f0, f0, f2
  stfs      f0, 0x10(r31)
  bl        0x75F18
  frsp      f3, f1
  lfs       f2, 0x4(r29)
  lfs       f0, -0x7A60(r2)
  fmr       f1, f31
  fmuls     f2, f2, f3
  stfs      f2, 0x14(r31)
  stfs      f0, 0x18(r31)
  bl        0x75EF8
  frsp      f30, f1
  fmr       f1, f31
  bl        0x76454
  lfs       f0, 0x4(r29)
  frsp      f3, f1
  lfs       f6, 0x4(r30)
  fneg      f2, f0
  lfs       f4, 0x0(r30)
  fmuls     f0, f0, f30
  lfs       f5, 0x10(r29)
  lfs       f1, -0x7A60(r2)
  fmuls     f3, f2, f3
  fmuls     f2, f6, f0
  lfs       f0, -0x7A5C(r2)
  fmsubs    f2, f4, f3, f2
  fadds     f2, f6, f2
  fadds     f2, f5, f2
  stfs      f2, 0x1C(r31)
  stfs      f1, 0x20(r31)
  stfs      f1, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f1, 0x2C(r31)
  psq_l     f31,0x38(r1),0,0
  lfd       f31, 0x30(r1)
  psq_l     f30,0x28(r1),0,0
  lfd       f30, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r0, 0x44(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80059444
 * Size:	000180
 */
void J2DTexMtx::getTextureMtxMaya(const J2DTextureSRTInfo &, float (*) [4])
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stfd      f30, 0x10(r1)
  psq_st    f30,0x18(r1),0,0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r4
  lfs       f2, -0x7A68(r2)
  lfs       f1, 0x8(r4)
  mr        r31, r5
  lfs       f0, -0x7A64(r2)
  fmuls     f1, f2, f1
  fdivs     f31, f1, f0
  fmr       f1, f31
  bl        0x75E2C
  frsp      f2, f1
  lfs       f0, 0x0(r30)
  fmr       f1, f31
  fmuls     f0, f0, f2
  stfs      f0, 0x0(r31)
  bl        0x7637C
  frsp      f3, f1
  lfs       f2, 0x4(r30)
  lfs       f0, -0x7A60(r2)
  fmr       f1, f31
  fmuls     f2, f2, f3
  stfs      f2, 0x4(r31)
  stfs      f0, 0x8(r31)
  bl        0x7635C
  frsp      f30, f1
  fmr       f1, f31
  bl        0x75DE8
  lfs       f4, -0x7A58(r2)
  frsp      f5, f1
  lfs       f0, 0x10(r30)
  fmr       f1, f31
  lfs       f3, 0xC(r30)
  fsubs     f2, f0, f4
  lfs       f0, 0x4(r30)
  fsubs     f3, f3, f4
  fadds     f0, f2, f0
  fmuls     f0, f0, f30
  fmsubs    f0, f3, f5, f0
  fadds     f0, f4, f0
  stfs      f0, 0xC(r31)
  bl        0x76318
  lfs       f0, 0x0(r30)
  frsp      f2, f1
  fmr       f1, f31
  fneg      f0, f0
  fmuls     f0, f0, f2
  stfs      f0, 0x10(r31)
  bl        0x75D94
  frsp      f3, f1
  lfs       f2, 0x4(r30)
  lfs       f0, -0x7A60(r2)
  fmr       f1, f31
  fmuls     f2, f2, f3
  stfs      f2, 0x14(r31)
  stfs      f0, 0x18(r31)
  bl        0x75D74
  frsp      f30, f1
  fmr       f1, f31
  bl        0x762D0
  lfs       f5, -0x7A58(r2)
  frsp      f6, f1
  lfs       f0, 0x10(r30)
  lfs       f1, 0xC(r30)
  fsubs     f3, f0, f5
  lfs       f2, 0x4(r30)
  fsubs     f4, f1, f5
  lfs       f1, -0x7A60(r2)
  lfs       f0, -0x7A5C(r2)
  fadds     f2, f3, f2
  fneg      f3, f4
  fmuls     f2, f2, f30
  fmsubs    f2, f3, f6, f2
  fadds     f2, f5, f2
  stfs      f2, 0x1C(r31)
  stfs      f1, 0x20(r31)
  stfs      f1, 0x24(r31)
  stfs      f0, 0x28(r31)
  stfs      f1, 0x2C(r31)
  psq_l     f31,0x28(r1),0,0
  lfd       f31, 0x20(r1)
  psq_l     f30,0x18(r1),0,0
  lfd       f30, 0x10(r1)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x34(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	800595C4
 * Size:	000054
 */
void J2DIndTevStage::load(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r10, 0x0(r3)
  rlwinm    r3,r4,0,24,31
  rlwinm    r0,r10,11,31,31
  rlwinm    r4,r10,0,30,31
  stw       r0, 0x8(r1)
  rlwinm    r0,r10,10,30,31
  rlwinm    r5,r10,30,30,31
  rlwinm    r6,r10,28,29,31
  stw       r0, 0xC(r1)
  rlwinm    r7,r10,16,28,31
  rlwinm    r8,r10,24,29,31
  rlwinm    r9,r10,21,29,31
  rlwinm    r10,r10,12,31,31
  bl        0x8E93C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void J2DIndTexMtx::setOffsetMtx(float (*) [3])
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80059618
 * Size:	000030
 */
void J2DIndTexMtx::load(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r6,r4,0,24,31
  mr        r4, r3
  stw       r0, 0x14(r1)
  lbz       r5, 0x18(r3)
  addi      r3, r6, 0x1
  bl        0x8E978
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80059648
 * Size:	000030
 */
void J2DIndTexCoordScale::load(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  rlwinm    r3,r4,0,24,31
  stw       r0, 0x14(r1)
  lbz       r4, 0x0(r5)
  lbz       r5, 0x1(r5)
  bl        0x8EAC0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80059678
 * Size:	000030
 */
void J2DIndTexOrder::load(unsigned char)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r5, r3
  rlwinm    r3,r4,0,24,31
  stw       r0, 0x14(r1)
  lbz       r4, 0x0(r5)
  lbz       r5, 0x1(r5)
  bl        0x8EBD4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00067C
 */
void J2DMaterialInitData::J2DMaterialInitData(J2DMaterial *, J2DMaterial_SaveBlock *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0002FC
 */
void J2DMaterialInitData::write_InSaver(unsigned char **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000464
 */
void J2DMaterialInitData::operator= (const J2DMaterialInitData &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0003A4
 */
void J2DMaterialInitData::operator== (const J2DMaterialInitData &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void J2DIndInitData::init()
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00032C
 */
void J2DIndInitData::J2DIndInitData(J2DMaterial *, J2DMaterial_SaveBlock *)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000208
 */
void J2DIndInitData::write_InSaver(unsigned char **)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void J2DSaverList<JUtility::TColor>::searchID(JUtility::TColor &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void J2DSaverList<unsigned char>::searchID(unsigned char &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void J2DSaverList<unsigned short>::searchID(unsigned short &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void J2DSaverList<unsigned long>::searchID(unsigned long &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void J2DSaverList<J2DTexCoord>::searchID(J2DTexCoord &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000F4
 */
void J2DSaverList<J2DTexMtxInfo>::searchID(J2DTexMtxInfo &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void J2DSaverList<J2DTevOrderInfo>::searchID(J2DTevOrderInfo &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000074
 */
void J2DSaverList<J2DGXColorS10>::searchID(J2DGXColorS10 &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000094
 */
void J2DSaverList<J2DTevStage>::searchID(J2DTevStage &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void J2DSaverList<J2DTevSwapModeTable>::searchID(J2DTevSwapModeTable &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void J2DSaverList<J2DAlphaComp>::searchID(J2DAlphaComp &)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void J2DSaverList<J2DBlend>::searchID(J2DBlend &)
{
	// UNUSED FUNCTION
}