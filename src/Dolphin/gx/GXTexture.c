

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void __GXGetTexTileShift(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E6F58
 * Size:	00015C
 */
void GXGetTexBufferSize(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x28(r1)
	  cmplwi    r5, 0x3C
	  stw       r31, 0x24(r1)
	  bgt-      .loc_0x4C
	  lis       r8, 0x804B
	  subi      r8, r8, 0x7AB0
	  rlwinm    r0,r5,2,0,29
	  lwzx      r0, r8, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x3
	  li        r8, 0x3
	  b         .loc_0x54
	  li        r0, 0x3
	  li        r8, 0x2
	  b         .loc_0x54
	  li        r0, 0x2
	  li        r8, 0x2
	  b         .loc_0x54

	.loc_0x4C:
	  li        r8, 0
	  li        r0, 0

	.loc_0x54:
	  cmplwi    r5, 0x6
	  beq-      .loc_0x64
	  cmplwi    r5, 0x16
	  bne-      .loc_0x6C

	.loc_0x64:
	  li        r5, 0x40
	  b         .loc_0x70

	.loc_0x6C:
	  li        r5, 0x20

	.loc_0x70:
	  rlwinm    r6,r6,0,24,31
	  cmplwi    r6, 0x1
	  bne-      .loc_0x118
	  rlwinm    r9,r7,0,24,31
	  li        r6, 0x1
	  mtctr     r9
	  slw       r7, r6, r8
	  slw       r6, r6, r0
	  cmplwi    r9, 0
	  subi      r10, r6, 0x1
	  subi      r7, r7, 0x1
	  li        r31, 0
	  ble-      .loc_0x14C

	.loc_0xA4:
	  rlwinm    r11,r3,0,16,31
	  add       r6, r11, r10
	  rlwinm    r12,r4,0,16,31
	  sraw      r9, r6, r0
	  add       r6, r12, r7
	  sraw      r6, r6, r8
	  mullw     r6, r9, r6
	  mullw     r6, r5, r6
	  cmplwi    r11, 0x1
	  add       r31, r31, r6
	  bne-      .loc_0xD8
	  cmplwi    r12, 0x1
	  beq-      .loc_0x14C

	.loc_0xD8:
	  rlwinm    r3,r3,0,16,31
	  cmplwi    r3, 0x1
	  ble-      .loc_0xEC
	  srawi     r6, r11, 0x1
	  b         .loc_0xF0

	.loc_0xEC:
	  li        r6, 0x1

	.loc_0xF0:
	  rlwinm    r3,r4,0,16,31
	  cmplwi    r3, 0x1
	  rlwinm    r3,r6,0,16,31
	  ble-      .loc_0x108
	  srawi     r4, r12, 0x1
	  b         .loc_0x10C

	.loc_0x108:
	  li        r4, 0x1

	.loc_0x10C:
	  rlwinm    r4,r4,0,16,31
	  bdnz+     .loc_0xA4
	  b         .loc_0x14C

	.loc_0x118:
	  li        r6, 0x1
	  slw       r7, r6, r0
	  slw       r6, r6, r8
	  rlwinm    r9,r3,0,16,31
	  subi      r3, r7, 0x1
	  add       r7, r9, r3
	  rlwinm    r4,r4,0,16,31
	  subi      r3, r6, 0x1
	  sraw      r6, r7, r0
	  add       r0, r4, r3
	  sraw      r0, r0, r8
	  mullw     r0, r6, r0
	  mullw     r31, r5, r0

	.loc_0x14C:
	  mr        r3, r31
	  lwz       r31, 0x24(r1)
	  addi      r1, r1, 0x28
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E70B4
 * Size:	0000C8
 */
void __GetImageTileCount(void)
{
	/*
	.loc_0x0:
	  cmplwi    r3, 0x3C
	  bgt-      .loc_0x44
	  lis       r9, 0x804B
	  subi      r9, r9, 0x79BC
	  rlwinm    r0,r3,2,0,29
	  lwzx      r0, r9, r0
	  mtctr     r0
	  bctr
	  li        r11, 0x3
	  li        r12, 0x3
	  b         .loc_0x4C
	  li        r11, 0x3
	  li        r12, 0x2
	  b         .loc_0x4C
	  li        r11, 0x2
	  li        r12, 0x2
	  b         .loc_0x4C

	.loc_0x44:
	  li        r12, 0
	  li        r11, 0

	.loc_0x4C:
	  rlwinm.   r0,r4,0,16,31
	  bne-      .loc_0x58
	  li        r4, 0x1

	.loc_0x58:
	  rlwinm.   r0,r5,0,16,31
	  bne-      .loc_0x64
	  li        r5, 0x1

	.loc_0x64:
	  li        r10, 0x1
	  slw       r9, r10, r11
	  rlwinm    r4,r4,0,16,31
	  subi      r0, r9, 0x1
	  add       r0, r4, r0
	  sraw      r0, r0, r11
	  slw       r4, r10, r12
	  stw       r0, 0x0(r6)
	  rlwinm    r5,r5,0,16,31
	  subi      r0, r4, 0x1
	  add       r0, r5, r0
	  sraw      r0, r0, r12
	  cmpwi     r3, 0x6
	  stw       r0, 0x0(r7)
	  beq-      .loc_0xAC
	  cmpwi     r3, 0x16
	  beq-      .loc_0xAC
	  li        r10, 0

	.loc_0xAC:
	  cmpwi     r10, 0
	  beq-      .loc_0xBC
	  li        r0, 0x2
	  b         .loc_0xC0

	.loc_0xBC:
	  li        r0, 0x1

	.loc_0xC0:
	  stw       r0, 0x0(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E717C
 * Size:	00024C
 */
void GXInitTexObj(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x60(r1)
	  stmw      r24, 0x40(r1)
	  addi      r27, r4, 0
	  addi      r28, r5, 0
	  addi      r31, r3, 0
	  addi      r29, r6, 0
	  addi      r30, r7, 0
	  addi      r24, r8, 0
	  addi      r25, r9, 0
	  addi      r26, r10, 0
	  li        r4, 0
	  li        r5, 0x20
	  bl        -0xE2100
	  lwz       r3, 0x0(r31)
	  rlwimi    r3,r24,0,30,31
	  rlwinm.   r0,r26,0,24,31
	  stw       r3, 0x0(r31)
	  li        r3, 0x1
	  lwz       r0, 0x0(r31)
	  rlwimi    r0,r25,2,28,29
	  stw       r0, 0x0(r31)
	  lwz       r0, 0x0(r31)
	  rlwimi    r0,r3,4,27,27
	  stw       r0, 0x0(r31)
	  beq-      .loc_0x108
	  lbz       r3, 0x1F(r31)
	  subi      r0, r30, 0x8
	  cmplwi    r0, 0x2
	  ori       r0, r3, 0x1
	  stb       r0, 0x1F(r31)
	  bgt-      .loc_0x98
	  lwz       r3, 0x0(r31)
	  li        r0, 0x5
	  rlwimi    r3,r0,5,24,26
	  stw       r3, 0x0(r31)
	  b         .loc_0xA8

	.loc_0x98:
	  lwz       r3, 0x0(r31)
	  li        r0, 0x6
	  rlwimi    r3,r0,5,24,26
	  stw       r3, 0x0(r31)

	.loc_0xA8:
	  rlwinm    r3,r28,0,16,31
	  rlwinm    r0,r29,0,16,31
	  cmplw     r3, r0
	  ble-      .loc_0xC4
	  cntlzw    r0, r3
	  subfic    r0, r0, 0x1F
	  b         .loc_0xCC

	.loc_0xC4:
	  cntlzw    r0, r0
	  subfic    r0, r0, 0x1F

	.loc_0xCC:
	  stw       r0, 0x3C(r1)
	  lis       r0, 0x4330
	  lfd       f1, -0x6CE8(r2)
	  stw       r0, 0x38(r1)
	  lfs       f2, -0x6CF0(r2)
	  lfd       f0, 0x38(r1)
	  lwz       r3, 0x4(r31)
	  fsubs     f0, f0, f1
	  fmuls     f0, f2, f0
	  fctiwz    f0, f0
	  stfd      f0, 0x30(r1)
	  lwz       r0, 0x34(r1)
	  rlwimi    r3,r0,8,16,23
	  stw       r3, 0x4(r31)
	  b         .loc_0x118

	.loc_0x108:
	  lwz       r3, 0x0(r31)
	  li        r0, 0x4
	  rlwimi    r3,r0,5,24,26
	  stw       r3, 0x0(r31)

	.loc_0x118:
	  stw       r30, 0x14(r31)
	  rlwinm    r7,r28,0,16,31
	  rlwinm    r4,r30,0,28,31
	  subi      r0, r7, 0x1
	  lwz       r3, 0x8(r31)
	  rlwimi    r3,r0,0,22,31
	  stw       r3, 0x8(r31)
	  rlwinm    r5,r29,0,16,31
	  subi      r0, r5, 0x1
	  lwz       r3, 0x8(r31)
	  rlwimi    r3,r0,10,12,21
	  cmplwi    r4, 0xE
	  stw       r3, 0x8(r31)
	  lwz       r0, 0x8(r31)
	  rlwimi    r0,r30,20,8,11
	  stw       r0, 0x8(r31)
	  lwz       r0, 0xC(r31)
	  rlwimi    r0,r27,27,11,31
	  stw       r0, 0xC(r31)
	  bgt-      .loc_0x1E4
	  lis       r3, 0x804B
	  subi      r3, r3, 0x78C8
	  rlwinm    r0,r4,2,0,29
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  li        r0, 0x1
	  stb       r0, 0x1E(r31)
	  li        r0, 0x3
	  li        r6, 0x3
	  b         .loc_0x1F4
	  li        r0, 0x2
	  stb       r0, 0x1E(r31)
	  li        r0, 0x3
	  li        r6, 0x2
	  b         .loc_0x1F4
	  li        r0, 0x2
	  stb       r0, 0x1E(r31)
	  li        r0, 0x2
	  li        r6, 0x2
	  b         .loc_0x1F4
	  li        r0, 0x3
	  stb       r0, 0x1E(r31)
	  li        r0, 0x2
	  li        r6, 0x2
	  b         .loc_0x1F4
	  li        r0, 0
	  stb       r0, 0x1E(r31)
	  li        r0, 0x3
	  li        r6, 0x3
	  b         .loc_0x1F4

	.loc_0x1E4:
	  li        r0, 0x2
	  stb       r0, 0x1E(r31)
	  li        r0, 0x2
	  li        r6, 0x2

	.loc_0x1F4:
	  rlwinm    r8,r0,0,16,31
	  li        r4, 0x1
	  slw       r3, r4, r8
	  rlwinm    r6,r6,0,16,31
	  subi      r0, r3, 0x1
	  slw       r3, r4, r6
	  add       r4, r7, r0
	  subi      r0, r3, 0x1
	  sraw      r3, r4, r8
	  add       r0, r5, r0
	  sraw      r0, r0, r6
	  mullw     r0, r3, r0
	  rlwinm    r0,r0,0,17,31
	  sth       r0, 0x1C(r31)
	  lbz       r0, 0x1F(r31)
	  ori       r0, r0, 0x2
	  stb       r0, 0x1F(r31)
	  lwz       r0, 0x64(r1)
	  lmw       r24, 0x40(r1)
	  addi      r1, r1, 0x60
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E73C8
 * Size:	000048
 */
void GXInitTexObjCI(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x30(r1)
	  stw       r31, 0x2C(r1)
	  lwz       r31, 0x38(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r3
	  bl        -0x268
	  lbz       r0, 0x1F(r30)
	  rlwinm    r0,r0,0,31,29
	  stb       r0, 0x1F(r30)
	  stw       r31, 0x18(r30)
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  addi      r1, r1, 0x30
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7410
 * Size:	000164
 */
void GXInitTexObjLOD(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  lfs       f0, -0x6CE0(r2)
	  fcmpo     cr0, f3, f0
	  bge-      .loc_0x18
	  fmr       f3, f0
	  b         .loc_0x2C

	.loc_0x18:
	  lfs       f0, -0x6CDC(r2)
	  fcmpo     cr0, f3, f0
	  cror      2, 0x1, 0x2
	  bne-      .loc_0x2C
	  lfs       f3, -0x6CD8(r2)

	.loc_0x2C:
	  lfs       f0, -0x6CD4(r2)
	  cmpwi     r5, 0x1
	  lwz       r5, 0x0(r3)
	  fmuls     f0, f0, f3
	  fctiwz    f0, f0
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwimi    r5,r0,9,15,22
	  stw       r5, 0x0(r3)
	  bne-      .loc_0x5C
	  li        r0, 0x1
	  b         .loc_0x60

	.loc_0x5C:
	  li        r0, 0

	.loc_0x60:
	  lwz       r5, 0x0(r3)
	  rlwimi    r5,r0,4,27,27
	  rlwinm.   r0,r7,0,24,31
	  stw       r5, 0x0(r3)
	  subi      r5, r13, 0x7CC8
	  lbzx      r0, r5, r4
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r0,5,24,26
	  stw       r4, 0x0(r3)
	  beq-      .loc_0x90
	  li        r4, 0
	  b         .loc_0x94

	.loc_0x90:
	  li        r4, 0x1

	.loc_0x94:
	  lwz       r0, 0x0(r3)
	  rlwimi    r0,r4,8,23,23
	  li        r5, 0
	  stw       r0, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r5,17,14,14
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r5,18,13,13
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r8,19,11,12
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r6,21,10,10
	  stw       r4, 0x0(r3)
	  lfs       f0, -0x6CD0(r2)
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0xE8
	  fmr       f1, f0
	  b         .loc_0xF8

	.loc_0xE8:
	  lfs       f0, -0x6CCC(r2)
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xF8
	  fmr       f1, f0

	.loc_0xF8:
	  lfs       f3, -0x6CF0(r2)
	  lfs       f0, -0x6CD0(r2)
	  fmuls     f1, f3, f1
	  fcmpo     cr0, f2, f0
	  fctiwz    f1, f1
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  bge-      .loc_0x120
	  fmr       f2, f0
	  b         .loc_0x130

	.loc_0x120:
	  lfs       f0, -0x6CCC(r2)
	  fcmpo     cr0, f2, f0
	  ble-      .loc_0x130
	  fmr       f2, f0

	.loc_0x130:
	  lfs       f0, -0x6CF0(r2)
	  lwz       r4, 0x4(r3)
	  rlwimi    r4,r0,0,24,31
	  fmuls     f0, f0, f2
	  stw       r4, 0x4(r3)
	  fctiwz    f0, f0
	  lwz       r4, 0x4(r3)
	  stfd      f0, 0x28(r1)
	  lwz       r0, 0x2C(r1)
	  rlwimi    r4,r0,8,16,23
	  stw       r4, 0x4(r3)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXInitTexObjData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXInitTexObjWrapMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXInitTexObjTlut(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000038
 */
void GXInitTexObjFilter(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GXInitTexObjMaxLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GXInitTexObjMinLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GXInitTexObjLODBias(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXInitTexObjBiasClamp(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXInitTexObjEdgeLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXInitTexObjMaxAniso(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXInitTexObjUserData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetTexObjUserData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000068
 */
void GXGetTexObjAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXGetTexObjWidth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXGetTexObjHeight(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7574
 * Size:	000008
 */
void GXGetTexObjFmt(void)
{
	/*
	.loc_0x0:
	  lwz       r3, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjWrapS(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjWrapT(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E757C
 * Size:	000018
 */
void GXGetTexObjMipMap(void)
{
	/*
	.loc_0x0:
	  lbz       r0, 0x1F(r3)
	  rlwinm    r3,r0,0,31,31
	  subi      r0, r3, 0x1
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void GXGetTexObjLODAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXGetTexObjMinFilt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjMagFilt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXGetTexObjMinLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXGetTexObjMaxLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000040
 */
void GXGetTexObjLODBias(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjBiasClamp(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXGetTexObjEdgeLOD(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTexObjMaxAniso(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetTexObjTlut(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7594
 * Size:	00017C
 */
void GXLoadTexObjPreLoaded(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  subi      r7, r13, 0x7CF0
	  stw       r0, 0x4(r1)
	  subi      r6, r13, 0x7CE8
	  stwu      r1, -0x40(r1)
	  stw       r31, 0x3C(r1)
	  addi      r31, r5, 0
	  subi      r5, r13, 0x7D00
	  stw       r30, 0x38(r1)
	  addi      r30, r3, 0
	  stw       r29, 0x34(r1)
	  lis       r29, 0xCC01
	  stw       r28, 0x30(r1)
	  li        r28, 0x61
	  lbzx      r0, r5, r31
	  lwz       r5, 0x0(r3)
	  subi      r3, r13, 0x7CF8
	  rlwimi    r5,r0,24,0,7
	  stw       r5, 0x0(r30)
	  subi      r5, r13, 0x7CE0
	  lbzx      r0, r3, r31
	  subi      r3, r13, 0x7CD8
	  lwz       r8, 0x4(r30)
	  rlwimi    r8,r0,24,0,7
	  stw       r8, 0x4(r30)
	  lbzx      r0, r7, r31
	  lwz       r7, 0x8(r30)
	  rlwimi    r7,r0,24,0,7
	  stw       r7, 0x8(r30)
	  lbzx      r0, r6, r31
	  lwz       r6, 0x0(r4)
	  rlwimi    r6,r0,24,0,7
	  stw       r6, 0x0(r4)
	  lbzx      r0, r5, r31
	  lwz       r5, 0x4(r4)
	  rlwimi    r5,r0,24,0,7
	  stw       r5, 0x4(r4)
	  lbzx      r0, r3, r31
	  lwz       r3, 0xC(r30)
	  rlwimi    r3,r0,24,0,7
	  stw       r3, 0xC(r30)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x0(r30)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x4(r30)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x8(r30)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x0(r4)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x4(r4)
	  stw       r0, -0x8000(r29)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0xC(r30)
	  stw       r0, -0x8000(r29)
	  lbz       r0, 0x1F(r30)
	  rlwinm.   r0,r0,0,30,30
	  bne-      .loc_0x12C
	  lwz       r4, -0x6D70(r2)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x4CC(r4)
	  mtlr      r12
	  blrl
	  subi      r4, r13, 0x7CD0
	  lwz       r5, 0x4(r3)
	  lbzx      r0, r4, r31
	  rlwimi    r5,r0,24,0,7
	  stw       r5, 0x4(r3)
	  stb       r28, -0x8000(r29)
	  lwz       r0, 0x4(r3)
	  stw       r0, -0x8000(r29)

	.loc_0x12C:
	  lwz       r5, -0x6D70(r2)
	  rlwinm    r4,r31,2,0,29
	  lwz       r3, 0x8(r30)
	  li        r0, 0
	  add       r4, r5, r4
	  stw       r3, 0x514(r4)
	  lwz       r3, 0x0(r30)
	  stw       r3, 0x534(r4)
	  lwz       r3, 0x5AC(r5)
	  ori       r3, r3, 0x1
	  stw       r3, 0x5AC(r5)
	  sth       r0, 0x2(r5)
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  addi      r1, r1, 0x40
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7710
 * Size:	000054
 */
void GXLoadTexObj(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  addi      r31, r4, 0
	  stw       r30, 0x10(r1)
	  addi      r30, r3, 0
	  lwz       r5, -0x6D70(r2)
	  lwz       r12, 0x4C8(r5)
	  mtlr      r12
	  blrl
	  addi      r4, r3, 0
	  addi      r3, r30, 0
	  addi      r5, r31, 0
	  bl        -0x1B4
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7764
 * Size:	000038
 */
void GXInitTlutObj(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  li        r0, 0x64
	  lwz       r7, 0x0(r3)
	  rlwimi    r7,r5,10,20,21
	  stw       r7, 0x0(r3)
	  lwz       r5, 0x4(r3)
	  rlwimi    r5,r4,27,11,31
	  stw       r5, 0x4(r3)
	  lwz       r4, 0x4(r3)
	  rlwimi    r4,r0,24,0,7
	  stw       r4, 0x4(r3)
	  sth       r6, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXGetTlutObjAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTlutObjData(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void GXGetTlutObjFmt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetTlutObjNumEntries(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E779C
 * Size:	000098
 */
void GXLoadTlut(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  addi      r3, r4, 0
	  lwz       r5, -0x6D70(r2)
	  lwz       r12, 0x4CC(r5)
	  mtlr      r12
	  blrl
	  mr        r31, r3
	  bl        0xC8C
	  li        r4, 0x61
	  lis       r3, 0xCC01
	  stb       r4, -0x8000(r3)
	  lwz       r0, 0x4(r30)
	  stw       r0, -0x8000(r3)
	  stb       r4, -0x8000(r3)
	  lwz       r0, 0x0(r31)
	  stw       r0, -0x8000(r3)
	  bl        0xC68
	  lwz       r3, 0x0(r31)
	  lwz       r0, 0x0(r30)
	  rlwimi    r0,r3,0,22,31
	  stw       r0, 0x0(r30)
	  lwz       r3, 0x0(r30)
	  lwz       r0, 0x4(r30)
	  stw       r3, 0x4(r31)
	  stw       r0, 0x8(r31)
	  lwz       r0, 0x8(r30)
	  stw       r0, 0xC(r31)
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7834
 * Size:	0000F4
 */
void GXInitTexCacheRegion(void)
{
	/*
	.loc_0x0:
	  cmpwi     r6, 0x1
	  beq-      .loc_0x2C
	  bge-      .loc_0x18
	  cmpwi     r6, 0
	  bge-      .loc_0x24
	  b         .loc_0x38

	.loc_0x18:
	  cmpwi     r6, 0x3
	  bge-      .loc_0x38
	  b         .loc_0x34

	.loc_0x24:
	  li        r9, 0x3
	  b         .loc_0x38

	.loc_0x2C:
	  li        r9, 0x4
	  b         .loc_0x38

	.loc_0x34:
	  li        r9, 0x5

	.loc_0x38:
	  li        r6, 0
	  stw       r6, 0x0(r3)
	  rlwinm    r0,r5,27,5,31
	  cmpwi     r8, 0x2
	  lwz       r5, 0x0(r3)
	  rlwimi    r5,r0,0,17,31
	  stw       r5, 0x0(r3)
	  lwz       r0, 0x0(r3)
	  rlwimi    r0,r9,15,14,16
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x0(r3)
	  rlwimi    r0,r9,18,11,13
	  stw       r0, 0x0(r3)
	  lwz       r0, 0x0(r3)
	  rlwimi    r0,r6,21,10,10
	  stw       r0, 0x0(r3)
	  beq-      .loc_0xAC
	  bge-      .loc_0x90
	  cmpwi     r8, 0
	  beq-      .loc_0x9C
	  bge-      .loc_0xA4
	  b         .loc_0xB8

	.loc_0x90:
	  cmpwi     r8, 0x4
	  bge-      .loc_0xB8
	  b         .loc_0xB4

	.loc_0x9C:
	  li        r9, 0x3
	  b         .loc_0xB8

	.loc_0xA4:
	  li        r9, 0x4
	  b         .loc_0xB8

	.loc_0xAC:
	  li        r9, 0x5
	  b         .loc_0xB8

	.loc_0xB4:
	  li        r9, 0

	.loc_0xB8:
	  li        r0, 0
	  stw       r0, 0x4(r3)
	  li        r0, 0x1
	  lwz       r6, 0x4(r3)
	  rlwimi    r6,r7,27,17,31
	  stw       r6, 0x4(r3)
	  lwz       r5, 0x4(r3)
	  rlwimi    r5,r9,15,14,16
	  stw       r5, 0x4(r3)
	  lwz       r5, 0x4(r3)
	  rlwimi    r5,r9,18,11,13
	  stw       r5, 0x4(r3)
	  stb       r4, 0xC(r3)
	  stb       r0, 0xD(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void GXInitTexPreLoadRegion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00010C
 */
void GXGetTexRegionAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7928
 * Size:	000038
 */
void GXInitTlutRegion(void)
{
	/*
	.loc_0x0:
	  li        r0, 0
	  stw       r0, 0x0(r3)
	  subis     r0, r4, 0x8
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r0,23,22,31
	  li        r0, 0x65
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r5,10,11,21
	  stw       r4, 0x0(r3)
	  lwz       r4, 0x0(r3)
	  rlwimi    r4,r0,24,0,7
	  stw       r4, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void GXGetTlutRegionAll(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00012C
 */
void GXInvalidateTexRegion(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7960
 * Size:	000048
 */
void GXInvalidateTexAll(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  bl        0xAEC
	  li        r6, 0x61
	  lis       r3, 0x6600
	  lis       r5, 0xCC01
	  stb       r6, -0x8000(r5)
	  addi      r4, r3, 0x1000
	  addi      r0, r3, 0x1100
	  stw       r4, -0x8000(r5)
	  stb       r6, -0x8000(r5)
	  stw       r0, -0x8000(r5)
	  bl        0xAC4
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E79A8
 * Size:	000014
 */
void GXSetTexRegionCallback(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  lwzu      r0, 0x4C8(r4)
	  stw       r3, 0x0(r4)
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E79BC
 * Size:	000014
 */
void GXSetTlutRegionCallback(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x6D70(r2)
	  lwzu      r0, 0x4CC(r4)
	  stw       r3, 0x0(r4)
	  mr        r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000264
 */
void GXPreLoadEntireTexture(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void GXSetTexCoordScaleManually(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void GXSetTexCoordCylWrap(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000064
 */
void GXSetTexCoordBias(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E79D0
 * Size:	0000A0
 */
void __SetSURegs(void)
{
	/*
	.loc_0x0:
	  lwz       r8, -0x6D70(r2)
	  rlwinm    r3,r3,2,0,29
	  rlwinm    r0,r4,2,0,29
	  add       r3, r8, r3
	  lwz       r4, 0x514(r3)
	  add       r7, r8, r0
	  lwz       r0, 0xB8(r7)
	  li        r5, 0x61
	  rlwinm    r6,r4,0,22,31
	  rlwimi    r0,r6,0,16,31
	  stw       r0, 0xB8(r7)
	  rlwinm    r4,r4,22,22,31
	  lwz       r0, 0xD8(r7)
	  rlwimi    r0,r4,0,16,31
	  lis       r4, 0xCC01
	  stw       r0, 0xD8(r7)
	  li        r0, 0
	  lwz       r9, 0x534(r3)
	  lwz       r3, 0xB8(r7)
	  rlwinm    r6,r9,0,30,31
	  subfic    r6, r6, 0x1
	  cntlzw    r6, r6
	  rlwinm    r10,r6,27,24,31
	  rlwinm    r6,r9,30,30,31
	  rlwimi    r3,r10,16,15,15
	  subfic    r6, r6, 0x1
	  stw       r3, 0xB8(r7)
	  cntlzw    r3, r6
	  rlwinm    r6,r3,27,24,31
	  lwz       r3, 0xD8(r7)
	  rlwimi    r3,r6,16,15,15
	  stw       r3, 0xD8(r7)
	  stb       r5, -0x8000(r4)
	  lwz       r3, 0xB8(r7)
	  stw       r3, -0x8000(r4)
	  stb       r5, -0x8000(r4)
	  lwz       r3, 0xD8(r7)
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r8)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E7A70
 * Size:	00017C
 */
void __GXSetSUTexRegs(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x594(r3)
	  cmplwi    r0, 0xFF
	  beq-      .loc_0x168
	  lwz       r0, 0x204(r3)
	  li        r31, 0
	  rlwinm    r3,r0,22,28,31
	  addi      r30, r3, 0x1
	  rlwinm    r27,r0,16,29,31
	  b         .loc_0xD4

	.loc_0x38:
	  cmpwi     r31, 0x2
	  beq-      .loc_0x88
	  bge-      .loc_0x54
	  cmpwi     r31, 0
	  beq-      .loc_0x60
	  bge-      .loc_0x74
	  b         .loc_0xAC

	.loc_0x54:
	  cmpwi     r31, 0x4
	  bge-      .loc_0xAC
	  b         .loc_0x9C

	.loc_0x60:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,0,29,31
	  rlwinm    r28,r0,29,29,31
	  b         .loc_0xAC

	.loc_0x74:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,26,29,31
	  rlwinm    r28,r0,23,29,31
	  b         .loc_0xAC

	.loc_0x88:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,20,29,31
	  rlwinm    r28,r0,17,29,31
	  b         .loc_0xAC

	.loc_0x9C:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x120(r3)
	  rlwinm    r29,r0,14,29,31
	  rlwinm    r28,r0,11,29,31

	.loc_0xAC:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x1
	  slw       r0, r0, r28
	  lwz       r3, 0x594(r3)
	  and.      r0, r3, r0
	  bne-      .loc_0xD0
	  addi      r3, r29, 0
	  addi      r4, r28, 0
	  bl        -0x16C

	.loc_0xD0:
	  addi      r31, r31, 0x1

	.loc_0xD4:
	  cmplw     r31, r27
	  blt+      .loc_0x38
	  li        r31, 0
	  addi      r27, r31, 0
	  b         .loc_0x160

	.loc_0xE8:
	  lwz       r5, -0x6D70(r2)
	  addi      r3, r27, 0x554
	  rlwinm    r4,r31,1,0,29
	  lwzx      r3, r5, r3
	  rlwinm.   r0,r31,0,31,31
	  addi      r4, r4, 0x100
	  add       r4, r5, r4
	  rlwinm    r29,r3,0,24,22
	  beq-      .loc_0x118
	  lwz       r0, 0x0(r4)
	  rlwinm    r28,r0,17,29,31
	  b         .loc_0x120

	.loc_0x118:
	  lwz       r0, 0x0(r4)
	  rlwinm    r28,r0,29,29,31

	.loc_0x120:
	  cmplwi    r29, 0xFF
	  beq-      .loc_0x158
	  li        r4, 0x1
	  lwz       r3, 0x594(r5)
	  slw       r0, r4, r28
	  and.      r0, r3, r0
	  bne-      .loc_0x158
	  lwz       r3, 0x598(r5)
	  slw       r0, r4, r31
	  and.      r0, r3, r0
	  beq-      .loc_0x158
	  addi      r3, r29, 0
	  addi      r4, r28, 0
	  bl        -0x1F4

	.loc_0x158:
	  addi      r27, r27, 0x4
	  addi      r31, r31, 0x1

	.loc_0x160:
	  cmplw     r31, r30
	  blt+      .loc_0xE8

	.loc_0x168:
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void __GXGetSUTexSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E7BEC
 * Size:	000354
 */
void __GXSetTmemConfig(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x18(r1)
	  cmpwi     r3, 0x1
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  beq-      .loc_0x130
	  bge-      .loc_0x1C
	  b         .loc_0x23C

	.loc_0x1C:
	  cmpwi     r3, 0x3
	  bge-      .loc_0x23C
	  li        r0, 0x61
	  lis       r3, 0xCC01
	  lis       r4, 0x8C0E
	  stb       r0, -0x8000(r3)
	  subi      r4, r4, 0x8000
	  stw       r4, -0x8000(r3)
	  lis       r4, 0x900E
	  lis       r7, 0x8D0E
	  stb       r0, -0x8000(r3)
	  subi      r4, r4, 0x4000
	  lis       r6, 0x910E
	  stw       r4, -0x8000(r3)
	  lis       r5, 0x8E0E
	  lis       r4, 0x920E
	  stb       r0, -0x8000(r3)
	  subi      r7, r7, 0x7800
	  lis       r30, 0x8F0E
	  stw       r7, -0x8000(r3)
	  lis       r12, 0x930E
	  lis       r11, 0xAC0E
	  stb       r0, -0x8000(r3)
	  subi      r6, r6, 0x3800
	  lis       r10, 0xB00E
	  stw       r6, -0x8000(r3)
	  lis       r9, 0xAD0E
	  lis       r8, 0xB10E
	  stb       r0, -0x8000(r3)
	  subi      r5, r5, 0x7000
	  lis       r7, 0xAE0E
	  stw       r5, -0x8000(r3)
	  lis       r6, 0xB20E
	  lis       r5, 0xAF0E
	  stb       r0, -0x8000(r3)
	  subi      r31, r4, 0x3000
	  lis       r4, 0xB30E
	  stw       r31, -0x8000(r3)
	  subi      r30, r30, 0x6800
	  subi      r12, r12, 0x2800
	  stb       r0, -0x8000(r3)
	  subi      r11, r11, 0x6000
	  subi      r10, r10, 0x3C00
	  stw       r30, -0x8000(r3)
	  subi      r9, r9, 0x5800
	  subi      r8, r8, 0x3400
	  stb       r0, -0x8000(r3)
	  subi      r7, r7, 0x5000
	  subi      r6, r6, 0x2C00
	  stw       r12, -0x8000(r3)
	  subi      r5, r5, 0x4800
	  subi      r4, r4, 0x2400
	  stb       r0, -0x8000(r3)
	  stw       r11, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r10, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r9, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r8, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r7, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r6, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r5, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r4, -0x8000(r3)
	  b         .loc_0x344

	.loc_0x130:
	  li        r0, 0x61
	  lis       r3, 0xCC01
	  lis       r4, 0x8C0E
	  stb       r0, -0x8000(r3)
	  subi      r4, r4, 0x8000
	  stw       r4, -0x8000(r3)
	  lis       r4, 0x900E
	  lis       r7, 0x8D0E
	  stb       r0, -0x8000(r3)
	  subi      r4, r4, 0x4000
	  lis       r6, 0x910E
	  stw       r4, -0x8000(r3)
	  lis       r5, 0x8E0E
	  lis       r4, 0x920E
	  stb       r0, -0x8000(r3)
	  subi      r7, r7, 0x7800
	  lis       r30, 0x8F0E
	  stw       r7, -0x8000(r3)
	  lis       r12, 0x930E
	  lis       r11, 0xAC0E
	  stb       r0, -0x8000(r3)
	  subi      r6, r6, 0x3800
	  lis       r10, 0xB00E
	  stw       r6, -0x8000(r3)
	  lis       r9, 0xAD0E
	  lis       r8, 0xB10E
	  stb       r0, -0x8000(r3)
	  subi      r5, r5, 0x7000
	  lis       r7, 0xAE0E
	  stw       r5, -0x8000(r3)
	  lis       r6, 0xB20E
	  lis       r5, 0xAF0E
	  stb       r0, -0x8000(r3)
	  subi      r31, r4, 0x3000
	  lis       r4, 0xB30E
	  stw       r31, -0x8000(r3)
	  subi      r30, r30, 0x6800
	  subi      r12, r12, 0x2800
	  stb       r0, -0x8000(r3)
	  subi      r11, r11, 0x6000
	  subi      r10, r10, 0x2000
	  stw       r30, -0x8000(r3)
	  subi      r9, r9, 0x5800
	  subi      r8, r8, 0x1800
	  stb       r0, -0x8000(r3)
	  subi      r7, r7, 0x5000
	  subi      r6, r6, 0x1000
	  stw       r12, -0x8000(r3)
	  subi      r5, r5, 0x4800
	  subi      r4, r4, 0x800
	  stb       r0, -0x8000(r3)
	  stw       r11, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r10, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r9, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r8, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r7, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r6, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r5, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r4, -0x8000(r3)
	  b         .loc_0x344

	.loc_0x23C:
	  li        r0, 0x61
	  lis       r3, 0xCC01
	  lis       r4, 0x8C0E
	  stb       r0, -0x8000(r3)
	  subi      r4, r4, 0x8000
	  stw       r4, -0x8000(r3)
	  lis       r4, 0x900E
	  lis       r7, 0x8D0E
	  stb       r0, -0x8000(r3)
	  subi      r4, r4, 0x4000
	  lis       r6, 0x910E
	  stw       r4, -0x8000(r3)
	  lis       r5, 0x8E0E
	  lis       r4, 0x920E
	  stb       r0, -0x8000(r3)
	  subi      r7, r7, 0x7C00
	  lis       r31, 0x8F0E
	  stw       r7, -0x8000(r3)
	  lis       r12, 0x930E
	  lis       r11, 0xAC0E
	  stb       r0, -0x8000(r3)
	  subi      r6, r6, 0x3C00
	  lis       r10, 0xB00E
	  stw       r6, -0x8000(r3)
	  lis       r9, 0xAD0E
	  lis       r8, 0xB10E
	  stb       r0, -0x8000(r3)
	  subi      r5, r5, 0x7800
	  lis       r7, 0xAE0E
	  stw       r5, -0x8000(r3)
	  lis       r6, 0xB20E
	  lis       r5, 0xAF0E
	  stb       r0, -0x8000(r3)
	  subi      r30, r4, 0x3800
	  lis       r4, 0xB30E
	  stw       r30, -0x8000(r3)
	  subi      r31, r31, 0x7400
	  subi      r12, r12, 0x3400
	  stb       r0, -0x8000(r3)
	  subi      r11, r11, 0x7000
	  subi      r10, r10, 0x3000
	  stw       r31, -0x8000(r3)
	  subi      r9, r9, 0x6C00
	  subi      r8, r8, 0x2C00
	  stb       r0, -0x8000(r3)
	  subi      r7, r7, 0x6800
	  subi      r6, r6, 0x2800
	  stw       r12, -0x8000(r3)
	  subi      r5, r5, 0x6400
	  subi      r4, r4, 0x2400
	  stb       r0, -0x8000(r3)
	  stw       r11, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r10, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r9, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r8, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r7, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r6, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r5, -0x8000(r3)
	  stb       r0, -0x8000(r3)
	  stw       r4, -0x8000(r3)

	.loc_0x344:
	  lwz       r31, 0x14(r1)
	  lwz       r30, 0x10(r1)
	  addi      r1, r1, 0x18
	  blr
	*/
}
