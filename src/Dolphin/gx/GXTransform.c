

/*
 * --INFO--
 * Address:	........
 * Size:	000174
 */
void GXProject(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void WriteProjPS(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void Copy6Floats(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void __GXSetProjection(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9448
 * Size:	0000A4
 */
void GXSetProjection(void)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x6D70(r2)
	  cmpwi     r4, 0x1
	  stw       r4, 0x4D8(r5)
	  lfs       f0, 0x0(r3)
	  stfs      f0, 0x4DC(r5)
	  lfs       f0, 0x14(r3)
	  stfs      f0, 0x4E4(r5)
	  lfs       f0, 0x28(r3)
	  stfs      f0, 0x4EC(r5)
	  lfs       f0, 0x2C(r3)
	  stfs      f0, 0x4F0(r5)
	  bne-      .loc_0x44
	  lfs       f0, 0xC(r3)
	  stfs      f0, 0x4E0(r5)
	  lfs       f0, 0x1C(r3)
	  stfs      f0, 0x4E8(r5)
	  b         .loc_0x54

	.loc_0x44:
	  lfs       f0, 0x8(r3)
	  stfs      f0, 0x4E0(r5)
	  lfs       f0, 0x18(r3)
	  stfs      f0, 0x4E8(r5)

	.loc_0x54:
	  lis       r5, 0xCC01
	  lwz       r4, -0x6D70(r2)
	  li        r0, 0x10
	  lis       r3, 0x6
	  stb       r0, -0x8000(r5)
	  addi      r0, r3, 0x1020
	  stw       r0, -0x8000(r5)
	  subi      r6, r5, 0x8000
	  addi      r3, r4, 0x4DC
	  psq_l     f2,0x0(r3),0,0
	  psq_l     f1,0x8(r3),0,0
	  psq_l     f0,0x10(r3),0,0
	  psq_st    f2,0x0(r6),0,0
	  psq_st    f1,0x0(r6),0,0
	  psq_st    f0,0x0(r6),0,0
	  lwz       r3, 0x4D8(r4)
	  li        r0, 0x1
	  stw       r3, -0x8000(r5)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E94EC
 * Size:	00008C
 */
void GXSetProjectionv(void)
{
	/*
	.loc_0x0:
	  lfs       f1, -0x6C60(r2)
	  lfs       f0, 0x0(r3)
	  fcmpu     cr0, f1, f0
	  bne-      .loc_0x18
	  li        r0, 0
	  b         .loc_0x1C

	.loc_0x18:
	  li        r0, 0x1

	.loc_0x1C:
	  lwz       r5, -0x6D70(r2)
	  addi      r3, r3, 0x4
	  stw       r0, 0x4D8(r5)
	  addi      r6, r5, 0x4DC
	  psq_l     f2,0x0(r3),0,0
	  psq_l     f1,0x8(r3),0,0
	  psq_l     f0,0x10(r3),0,0
	  psq_st    f2,0x0(r6),0,0
	  psq_st    f1,0x8(r6),0,0
	  psq_st    f0,0x10(r6),0,0
	  lis       r4, 0xCC01
	  li        r0, 0x10
	  lis       r3, 0x6
	  stb       r0, -0x8000(r4)
	  addi      r0, r3, 0x1020
	  stw       r0, -0x8000(r4)
	  subi      r3, r4, 0x8000
	  psq_l     f2,0x0(r6),0,0
	  psq_l     f1,0x8(r6),0,0
	  psq_l     f0,0x10(r6),0,0
	  psq_st    f2,0x0(r3),0,0
	  psq_st    f1,0x0(r3),0,0
	  psq_st    f0,0x0(r3),0,0
	  lwz       r3, 0x4D8(r5)
	  li        r0, 0x1
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void GXGetProjectionv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void WriteMTXPS4x3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void WriteMTXPS3x3from3x4(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00002C
 */
void WriteMTXPS3x3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void WriteMTXPS4x2(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9578
 * Size:	000050
 */
void GXLoadPosMtxImm(void)
{
	/*
	.loc_0x0:
	  lis       r5, 0xCC01
	  li        r0, 0x10
	  rlwinm    r4,r4,2,0,29
	  stb       r0, -0x8000(r5)
	  oris      r0, r4, 0xB
	  stw       r0, -0x8000(r5)
	  subi      r4, r5, 0x8000
	  psq_l     f5,0x0(r3),0,0
	  psq_l     f4,0x8(r3),0,0
	  psq_l     f3,0x10(r3),0,0
	  psq_l     f2,0x18(r3),0,0
	  psq_l     f1,0x20(r3),0,0
	  psq_l     f0,0x28(r3),0,0
	  psq_st    f5,0x0(r4),0,0
	  psq_st    f4,0x0(r4),0,0
	  psq_st    f3,0x0(r4),0,0
	  psq_st    f2,0x0(r4),0,0
	  psq_st    f1,0x0(r4),0,0
	  psq_st    f0,0x0(r4),0,0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void GXLoadPosMtxIndx(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E95C8
 * Size:	000050
 */
void GXLoadNrmMtxImm(void)
{
	/*
	.loc_0x0:
	  mulli     r5, r4, 0x3
	  lis       r4, 0xCC01
	  li        r0, 0x10
	  addi      r5, r5, 0x400
	  stb       r0, -0x8000(r4)
	  oris      r0, r5, 0x8
	  stwu      r0, -0x8000(r4)
	  psq_l     f5,0x0(r3),0,0
	  lfs       f4, 0x8(r3)
	  psq_l     f3,0x10(r3),0,0
	  lfs       f2, 0x18(r3)
	  psq_l     f1,0x20(r3),0,0
	  lfs       f0, 0x28(r3)
	  psq_st    f5,0x0(r4),0,0
	  stfs      f4, 0x0(r4)
	  psq_st    f3,0x0(r4),0,0
	  stfs      f2, 0x0(r4)
	  psq_st    f1,0x0(r4),0,0
	  stfs      f0, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void GXLoadNrmMtxImm3x3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXLoadNrmMtxIndx3x3(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9618
 * Size:	000034
 */
void GXSetCurrentMtx(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x80(r4)
	  rlwimi    r0,r3,0,26,31
	  li        r3, 0
	  stw       r0, 0x80(r4)
	  bl        0x2C8
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E964C
 * Size:	0000B4
 */
void GXLoadTexMtxImm(void)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x40
	  blt-      .loc_0x18
	  subi      r0, r4, 0x40
	  rlwinm    r4,r0,2,0,29
	  addi      r7, r4, 0x500
	  b         .loc_0x1C

	.loc_0x18:
	  rlwinm    r7,r4,2,0,29

	.loc_0x1C:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x2C
	  li        r4, 0x8
	  b         .loc_0x30

	.loc_0x2C:
	  li        r4, 0xC

	.loc_0x30:
	  subi      r0, r4, 0x1
	  rlwinm    r6,r0,16,0,15
	  li        r0, 0x10
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  or        r0, r7, r6
	  cmpwi     r5, 0
	  stw       r0, -0x8000(r4)
	  bne-      .loc_0x8C
	  subi      r4, r4, 0x8000
	  psq_l     f5,0x0(r3),0,0
	  psq_l     f4,0x8(r3),0,0
	  psq_l     f3,0x10(r3),0,0
	  psq_l     f2,0x18(r3),0,0
	  psq_l     f1,0x20(r3),0,0
	  psq_l     f0,0x28(r3),0,0
	  psq_st    f5,0x0(r4),0,0
	  psq_st    f4,0x0(r4),0,0
	  psq_st    f3,0x0(r4),0,0
	  psq_st    f2,0x0(r4),0,0
	  psq_st    f1,0x0(r4),0,0
	  psq_st    f0,0x0(r4),0,0
	  blr

	.loc_0x8C:
	  subi      r4, r4, 0x8000
	  psq_l     f3,0x0(r3),0,0
	  psq_l     f2,0x8(r3),0,0
	  psq_l     f1,0x10(r3),0,0
	  psq_l     f0,0x18(r3),0,0
	  psq_st    f3,0x0(r4),0,0
	  psq_st    f2,0x0(r4),0,0
	  psq_st    f1,0x0(r4),0,0
	  psq_st    f0,0x0(r4),0,0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void GXLoadTexMtxIndx(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9700
 * Size:	000090
 */
void __GXSetViewport(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  lis       r3, 0x5
	  lfs       f1, -0x6C5C(r2)
	  li        r5, 0x10
	  lfs       f3, 0x500(r6)
	  lfs       f2, 0x4FC(r6)
	  lis       r4, 0xCC01
	  fneg      f0, f3
	  lfs       f5, 0x4F4(r6)
	  fmuls     f7, f2, f1
	  lfs       f4, 0x4F8(r6)
	  addi      r0, r3, 0x101A
	  fmuls     f3, f3, f1
	  lfs       f2, 0x508(r6)
	  lfs       f6, 0x510(r6)
	  fmuls     f8, f0, f1
	  lfs       f1, 0x504(r6)
	  lfs       f0, 0x50C(r6)
	  fmuls     f9, f2, f6
	  fmuls     f1, f1, f6
	  lfs       f6, -0x6C58(r2)
	  stb       r5, -0x8000(r4)
	  fadds     f5, f5, f7
	  stw       r0, -0x8000(r4)
	  fadds     f2, f4, f3
	  stfs      f7, -0x8000(r4)
	  fsubs     f1, f9, f1
	  fadds     f3, f6, f5
	  stfs      f8, -0x8000(r4)
	  fadds     f2, f6, f2
	  stfs      f1, -0x8000(r4)
	  fadds     f0, f9, f0
	  stfs      f3, -0x8000(r4)
	  stfs      f2, -0x8000(r4)
	  stfs      f0, -0x8000(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000058
 */
void GXSetViewportJitter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E9790
 * Size:	000048
 */
void GXSetViewport(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r3, -0x6D70(r2)
	  stfs      f1, 0x4F4(r3)
	  stfs      f2, 0x4F8(r3)
	  stfs      f3, 0x4FC(r3)
	  stfs      f4, 0x500(r3)
	  stfs      f5, 0x504(r3)
	  stfs      f6, 0x508(r3)
	  bl        -0xB8
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x1
	  sth       r0, 0x2(r3)
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXGetViewportv(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00006C
 */
void GXSetZScaleOffset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E97D8
 * Size:	000078
 */
void GXSetScissor(void)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x6D70(r2)
	  addi      r4, r4, 0x156
	  subi      r6, r6, 0x1
	  lwz       r0, 0xF8(r7)
	  rlwimi    r0,r4,0,21,31
	  addi      r3, r3, 0x156
	  stw       r0, 0xF8(r7)
	  subi      r8, r5, 0x1
	  add       r6, r4, r6
	  lwz       r0, 0xF8(r7)
	  rlwimi    r0,r3,12,9,19
	  add       r8, r3, r8
	  stw       r0, 0xF8(r7)
	  li        r5, 0x61
	  lis       r4, 0xCC01
	  lwz       r3, 0xFC(r7)
	  rlwimi    r3,r6,0,21,31
	  li        r0, 0
	  stw       r3, 0xFC(r7)
	  lwz       r3, 0xFC(r7)
	  rlwimi    r3,r8,12,9,19
	  stw       r3, 0xFC(r7)
	  stb       r5, -0x8000(r4)
	  lwz       r3, 0xF8(r7)
	  stw       r3, -0x8000(r4)
	  stb       r5, -0x8000(r4)
	  lwz       r3, 0xFC(r7)
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9850
 * Size:	000048
 */
void GXGetScissor(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6D70(r2)
	  lwz       r7, 0xF8(r8)
	  lwz       r8, 0xFC(r8)
	  rlwinm    r9,r7,20,21,31
	  subi      r0, r9, 0x156
	  stw       r0, 0x0(r3)
	  rlwinm    r7,r7,0,21,31
	  subi      r3, r7, 0x156
	  stw       r3, 0x0(r4)
	  rlwinm    r0,r8,20,21,31
	  sub       r3, r0, r9
	  addi      r0, r3, 0x1
	  rlwinm    r4,r8,0,21,31
	  stw       r0, 0x0(r5)
	  sub       r3, r4, r7
	  addi      r0, r3, 0x1
	  stw       r0, 0x0(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9898
 * Size:	000040
 */
void GXSetScissorBoxOffset(void)
{
	/*
	.loc_0x0:
	  addi      r5, r3, 0x156
	  lwz       r3, -0x6D70(r2)
	  addi      r0, r4, 0x156
	  li        r4, 0
	  rlwimi    r4,r5,31,22,31
	  addi      r5, r4, 0
	  rlwimi    r5,r0,9,12,21
	  li        r0, 0x61
	  lis       r4, 0xCC01
	  stb       r0, -0x8000(r4)
	  li        r0, 0x59
	  rlwimi    r5,r0,24,0,7
	  stw       r5, -0x8000(r4)
	  li        r0, 0
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E98D8
 * Size:	000028
 */
void GXSetClipMode(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x10
	  lwz       r4, -0x6D70(r2)
	  lis       r6, 0xCC01
	  stb       r0, -0x8000(r6)
	  li        r5, 0x1005
	  li        r0, 0x1
	  stw       r5, -0x8000(r6)
	  stw       r3, -0x8000(r6)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E9900
 * Size:	000084
 */
void __GXSetMatrixIndex(void)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x5
	  bge-      .loc_0x40
	  li        r0, 0x8
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0x30
	  li        r3, 0x10
	  stb       r0, -0x8000(r5)
	  li        r0, 0x1018
	  lwz       r4, 0x80(r4)
	  stw       r4, -0x8000(r5)
	  stb       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  b         .loc_0x74

	.loc_0x40:
	  li        r0, 0x8
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0x40
	  li        r3, 0x10
	  stb       r0, -0x8000(r5)
	  li        r0, 0x1019
	  lwz       r4, 0x84(r4)
	  stw       r4, -0x8000(r5)
	  stb       r3, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  stw       r4, -0x8000(r5)

	.loc_0x74:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x1
	  sth       r0, 0x2(r3)
	  blr
	*/
}
