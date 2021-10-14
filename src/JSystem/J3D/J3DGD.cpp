

/*
 * --INFO--
 * Address:	........
 * Size:	000018
 */
void J3DCallDisplayList(void*, unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80074440
 * Size:	000170
 */
void J3DGDSetGenMode(unsigned char, unsigned char, unsigned char, unsigned char,
                     _GXCullMode)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r28, r3
	  mr        r29, r4
	  mr        r27, r5
	  mr        r30, r6
	  mr        r31, r7
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  lwz       r0, 0xC(r8)
	  addi      r3, r3, 0xA
	  cmplw     r3, r0
	  ble-      .loc_0x40
	  bl        0x6D7C4

	.loc_0x40:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r3,r27,0,24,31
	  subi      r5, r3, 0x1
	  li        r0, 0x61
	  lwz       r6, 0x8(r4)
	  rlwinm    r5,r5,10,0,21
	  li        r27, 0xFE
	  li        r11, 0x7
	  addi      r3, r6, 0x1
	  li        r10, 0xFC
	  stw       r3, 0x8(r4)
	  rlwinm    r4,r28,0,24,31
	  rlwinm    r3,r29,4,20,27
	  li        r9, 0x3F
	  stb       r0, 0x0(r6)
	  or        r3, r4, r3
	  or        r6, r5, r3
	  subi      r7, r13, 0x7F98
	  lwz       r12, -0x7158(r13)
	  rlwinm    r8,r30,16,8,15
	  lwz       r4, 0x8(r12)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r12)
	  stb       r27, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r11, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lbzx      r3, r7, r31
	  lwz       r4, 0x8(r5)
	  rlwinm    r7,r3,14,0,17
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  or        r3, r7, r6
	  or        r8, r8, r3
	  stb       r0, 0x0(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800745B0
 * Size:	00015C
 */
void J3DGDSetGenMode_3Param(unsigned char, unsigned char, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r5
	  lwz       r6, -0x7158(r13)
	  lwz       r3, 0x8(r6)
	  lwz       r0, 0xC(r6)
	  addi      r3, r3, 0xA
	  cmplw     r3, r0
	  ble-      .loc_0x40
	  bl        0x6D654

	.loc_0x40:
	  lwz       r6, -0x7158(r13)
	  rlwinm    r3,r30,0,24,31
	  subi      r3, r3, 0x1
	  li        r0, 0x61
	  lwz       r5, 0x8(r6)
	  rlwinm    r3,r3,10,0,21
	  rlwimi    r3,r31,0,24,31
	  li        r30, 0xFE
	  addi      r4, r5, 0x1
	  li        r12, 0x7
	  stw       r4, 0x8(r6)
	  rlwinm    r4,r29,16,8,15
	  or        r3, r4, r3
	  li        r11, 0x3C
	  stb       r0, 0x0(r5)
	  li        r10, 0xF
	  rlwinm    r8,r3,8,24,31
	  rlwinm    r7,r3,16,24,31
	  lwz       r9, -0x7158(r13)
	  rlwinm    r6,r3,24,24,31
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r30, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r12, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r11, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r10, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r0, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000130
 */
void J3DGDSetTevStageNum(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void J3DGDSetIndTexStageNum(unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8007470C
 * Size:	000318
 */
void J3DGDSetLightAttn(_GXLightID, float, float, float, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  cntlzw    r0, r3
	  subfic    r0, r0, 0x1F
	  stw       r31, 0x2C(r1)
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0x7
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  ble-      .loc_0x2C
	  li        r0, 0

	.loc_0x2C:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r3,r0,4,16,27
	  addi      r29, r3, 0x604
	  stfs      f1, 0x1C(r1)
	  lwz       r3, 0x8(r4)
	  li        r5, 0x10
	  lwz       r12, 0x1C(r1)
	  li        r31, 0
	  addi      r0, r3, 0x1
	  stfs      f2, 0x18(r1)
	  li        r30, 0x5
	  rlwinm    r28,r29,24,24,31
	  stw       r0, 0x8(r4)
	  rlwinm    r11,r12,8,24,31
	  lwz       r8, 0x18(r1)
	  rlwinm    r10,r12,16,24,31
	  stb       r5, 0x0(r3)
	  rlwinm    r9,r12,24,24,31
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  lwz       r4, -0x7158(r13)
	  rlwinm    r5,r8,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r31, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r30, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r28, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r29, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r11, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r10, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r12, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  stfs      f3, 0x14(r1)
	  lwz       r3, 0x8(r4)
	  lwz       r28, 0x14(r1)
	  addi      r0, r3, 0x1
	  stfs      f4, 0x10(r1)
	  rlwinm    r29,r28,8,24,31
	  rlwinm    r30,r28,16,24,31
	  stw       r0, 0x8(r4)
	  rlwinm    r31,r28,24,24,31
	  lwz       r12, 0x10(r1)
	  stb       r8, 0x0(r3)
	  rlwinm    r11,r12,8,24,31
	  rlwinm    r10,r12,16,24,31
	  lwz       r4, -0x7158(r13)
	  rlwinm    r8,r12,24,24,31
	  stfs      f5, 0xC(r1)
	  lwz       r3, 0x8(r4)
	  lwz       r9, 0xC(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r7,r9,8,24,31
	  rlwinm    r6,r9,16,24,31
	  rlwinm    r5,r9,24,24,31
	  stb       r29, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r30, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r31, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r28, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r11, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r10, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r12, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  stfs      f6, 0x8(r1)
	  lwz       r3, 0x8(r4)
	  lwz       r8, 0x8(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  stb       r9, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80074A24
 * Size:	000110
 */
void J3DGDSetLightColor(_GXLightID, _GXColor)
{
	/*
	.loc_0x0:
	  cntlzw    r0, r3
	  lbz       r3, 0x1(r4)
	  subfic    r0, r0, 0x1F
	  lbz       r5, 0x0(r4)
	  rlwinm    r7,r0,0,16,31
	  lbz       r6, 0x2(r4)
	  lbz       r0, 0x3(r4)
	  cmplwi    r7, 0x7
	  rlwinm    r3,r3,16,0,15
	  rlwimi    r3,r5,24,0,7
	  rlwimi    r3,r6,8,16,23
	  or        r0, r0, r3
	  ble-      .loc_0x38
	  li        r7, 0

	.loc_0x38:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r3,r7,4,16,27
	  addi      r10, r3, 0x603
	  li        r12, 0x10
	  lwz       r4, 0x8(r5)
	  li        r11, 0
	  rlwinm    r9,r10,24,24,31
	  rlwinm    r8,r0,8,24,31
	  addi      r3, r4, 0x1
	  rlwinm    r7,r0,16,24,31
	  stw       r3, 0x8(r5)
	  rlwinm    r6,r0,24,24,31
	  stb       r12, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r11, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r11, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r9, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r10, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80074B34
 * Size:	0001EC
 */
void J3DGDSetLightPos(_GXLightID, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  cntlzw    r0, r3
	  subfic    r0, r0, 0x1F
	  stw       r31, 0x2C(r1)
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0x7
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  ble-      .loc_0x2C
	  li        r0, 0

	.loc_0x2C:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r3,r0,4,16,27
	  addi      r30, r3, 0x60A
	  stfs      f1, 0x10(r1)
	  lwz       r3, 0x8(r4)
	  li        r5, 0x10
	  lwz       r12, 0x10(r1)
	  li        r28, 0
	  addi      r0, r3, 0x1
	  stfs      f2, 0xC(r1)
	  li        r29, 0x2
	  rlwinm    r31,r30,24,24,31
	  stw       r0, 0x8(r4)
	  rlwinm    r11,r12,8,24,31
	  lwz       r9, 0xC(r1)
	  rlwinm    r10,r12,16,24,31
	  stb       r5, 0x0(r3)
	  rlwinm    r8,r12,24,24,31
	  rlwinm    r7,r9,8,24,31
	  rlwinm    r6,r9,16,24,31
	  lwz       r4, -0x7158(r13)
	  rlwinm    r5,r9,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r28, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r29, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r31, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r30, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r11, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r10, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r12, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  stfs      f3, 0x8(r1)
	  lwz       r3, 0x8(r4)
	  lwz       r8, 0x8(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  stb       r9, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80074D20
 * Size:	0001EC
 */
void J3DGDSetLightDir(_GXLightID, float, float, float)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  cntlzw    r0, r3
	  subfic    r0, r0, 0x1F
	  stw       r31, 0x2C(r1)
	  rlwinm    r0,r0,0,16,31
	  cmplwi    r0, 0x7
	  stw       r30, 0x28(r1)
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  ble-      .loc_0x2C
	  li        r0, 0

	.loc_0x2C:
	  lwz       r4, -0x7158(r13)
	  rlwinm    r3,r0,4,16,27
	  addi      r30, r3, 0x60D
	  stfs      f1, 0x10(r1)
	  lwz       r3, 0x8(r4)
	  li        r5, 0x10
	  lwz       r12, 0x10(r1)
	  li        r28, 0
	  addi      r0, r3, 0x1
	  stfs      f2, 0xC(r1)
	  li        r29, 0x2
	  rlwinm    r31,r30,24,24,31
	  stw       r0, 0x8(r4)
	  rlwinm    r11,r12,8,24,31
	  lwz       r9, 0xC(r1)
	  rlwinm    r10,r12,16,24,31
	  stb       r5, 0x0(r3)
	  rlwinm    r8,r12,24,24,31
	  rlwinm    r7,r9,8,24,31
	  rlwinm    r6,r9,16,24,31
	  lwz       r4, -0x7158(r13)
	  rlwinm    r5,r9,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r28, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r29, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r31, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r30, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r11, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r10, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r12, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  stfs      f3, 0x8(r1)
	  lwz       r3, 0x8(r4)
	  lwz       r8, 0x8(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  stb       r9, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80074F0C
 * Size:	000548
 */
void J3DGDSetVtxAttrFmtv(_GXVtxFmt, const _GXVtxAttrFmtList*, bool)
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  li        r0, 0x1
	  stmw      r14, 0x58(r1)
	  li        r31, 0
	  li        r30, 0
	  li        r14, 0
	  stw       r0, 0x48(r1)
	  li        r0, 0x4
	  li        r29, 0x1
	  li        r28, 0x4
	  stw       r0, 0x44(r1)
	  li        r0, 0
	  li        r27, 0
	  li        r26, 0x1
	  stw       r0, 0x40(r1)
	  li        r0, 0x4
	  li        r25, 0x4
	  li        r24, 0
	  stw       r0, 0x3C(r1)
	  li        r0, 0x1
	  li        r23, 0x1
	  li        r22, 0x4
	  stw       r0, 0x38(r1)
	  li        r0, 0x5
	  li        r21, 0
	  li        r20, 0x1
	  stw       r0, 0x34(r1)
	  li        r0, 0x1
	  li        r19, 0x4
	  li        r18, 0
	  stw       r0, 0x30(r1)
	  li        r0, 0x5
	  li        r17, 0x1
	  li        r16, 0x4
	  stw       r0, 0x2C(r1)
	  li        r0, 0x1
	  li        r15, 0
	  stw       r0, 0x28(r1)
	  li        r0, 0x4
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r0, 0x20(r1)
	  li        r0, 0x1
	  stw       r0, 0x1C(r1)
	  li        r0, 0x4
	  stw       r0, 0x18(r1)
	  li        r0, 0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r0, 0x10(r1)
	  li        r0, 0x4
	  stw       r3, 0x8(r1)
	  stw       r0, 0xC(r1)
	  b         .loc_0x224

	.loc_0xE0:
	  subi      r0, r3, 0x9
	  cmplwi    r0, 0x10
	  bgt-      .loc_0x220
	  lis       r3, 0x804A
	  rlwinm    r0,r0,2,0,29
	  addi      r3, r3, 0x2048
	  lwzx      r0, r3, r0
	  mtctr     r0
	  bctr
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x48(r1)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x44(r1)
	  lbz       r0, 0xC(r4)
	  stw       r0, 0x40(r1)
	  b         .loc_0x220
	  lwz       r6, 0x4(r4)
	  lwz       r0, 0x8(r4)
	  cmpwi     r6, 0x2
	  stw       r0, 0x3C(r1)
	  bne-      .loc_0x140
	  li        r31, 0x1
	  li        r30, 0x1
	  b         .loc_0x220

	.loc_0x140:
	  rlwinm.   r0,r5,0,24,31
	  li        r3, 0x1
	  bne-      .loc_0x150
	  mr        r3, r6

	.loc_0x150:
	  mr        r31, r3
	  li        r30, 0
	  b         .loc_0x220
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x38(r1)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x34(r1)
	  b         .loc_0x220
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x30(r1)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x2C(r1)
	  b         .loc_0x220
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x28(r1)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x24(r1)
	  lbz       r0, 0xC(r4)
	  stw       r0, 0x20(r1)
	  b         .loc_0x220
	  lwz       r0, 0x4(r4)
	  stw       r0, 0x1C(r1)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x18(r1)
	  lbz       r0, 0xC(r4)
	  stw       r0, 0x14(r1)
	  b         .loc_0x220
	  lwz       r0, 0x4(r4)
	  lbz       r14, 0xC(r4)
	  stw       r0, 0x10(r1)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0xC(r1)
	  b         .loc_0x220
	  lwz       r29, 0x4(r4)
	  lwz       r28, 0x8(r4)
	  lbz       r27, 0xC(r4)
	  b         .loc_0x220
	  lwz       r26, 0x4(r4)
	  lwz       r25, 0x8(r4)
	  lbz       r24, 0xC(r4)
	  b         .loc_0x220
	  lwz       r23, 0x4(r4)
	  lwz       r22, 0x8(r4)
	  lbz       r21, 0xC(r4)
	  b         .loc_0x220
	  lwz       r20, 0x4(r4)
	  lwz       r19, 0x8(r4)
	  lbz       r18, 0xC(r4)
	  b         .loc_0x220
	  lwz       r17, 0x4(r4)
	  lwz       r16, 0x8(r4)
	  lbz       r15, 0xC(r4)

	.loc_0x220:
	  addi      r4, r4, 0x10

	.loc_0x224:
	  lwz       r3, 0x0(r4)
	  cmpwi     r3, 0xFF
	  bne+      .loc_0xE0
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x12
	  cmplw     r3, r0
	  ble-      .loc_0x24C
	  bl        0x6CAEC

	.loc_0x24C:
	  lwz       r0, 0x44(r1)
	  li        r5, 0x8
	  lwz       r4, 0x8(r1)
	  rlwinm    r3,r0,1,0,30
	  lwz       r10, -0x7158(r13)
	  addi      r0, r4, 0x70
	  lwz       r4, 0x18(r1)
	  lwz       r9, 0x8(r10)
	  rlwinm    r6,r4,1,0,30
	  lwz       r4, 0x8(r1)
	  lwz       r11, 0x48(r1)
	  addi      r8, r9, 0x1
	  addi      r7, r4, 0x80
	  lwz       r4, 0x40(r1)
	  stw       r8, 0x8(r10)
	  or        r3, r11, r3
	  rlwinm    r4,r4,4,0,27
	  rlwinm    r8,r31,9,0,22
	  or        r4, r4, r3
	  lwz       r3, 0x3C(r1)
	  stb       r5, 0x0(r9)
	  or        r9, r8, r4
	  lwz       r4, 0x38(r1)
	  rlwinm    r3,r3,10,0,21
	  or        r3, r3, r9
	  lwz       r11, 0x28(r1)
	  rlwinm    r10,r4,13,0,18
	  lwz       r4, 0x34(r1)
	  or        r10, r10, r3
	  lwz       r3, 0x30(r1)
	  rlwinm    r8,r4,14,0,17
	  lwz       r4, -0x7158(r13)
	  rlwinm    r9,r3,17,0,14
	  rlwinm    r11,r11,21,0,10
	  or        r8, r8, r10
	  lwz       r3, 0x8(r4)
	  lwz       r10, 0x2C(r1)
	  or        r8, r9, r8
	  addi      r12, r3, 0x1
	  stw       r12, 0x8(r4)
	  rlwinm    r10,r10,18,0,13
	  lwz       r4, 0x24(r1)
	  or        r8, r10, r8
	  stb       r0, 0x0(r3)
	  or        r0, r11, r8
	  rlwinm    r9,r4,22,0,9
	  lwz       r4, 0x20(r1)
	  or        r0, r9, r0
	  lwz       r3, -0x7158(r13)
	  rlwinm    r4,r4,25,0,6
	  rlwinm    r9,r30,31,0,0
	  or        r0, r4, r0
	  lwz       r4, 0x8(r3)
	  oris      r8, r0, 0x4000
	  lwz       r0, 0x14(r1)
	  addi      r11, r4, 0x1
	  rlwinm    r12,r28,19,0,12
	  rlwinm    r10,r0,4,0,27
	  stw       r11, 0x8(r3)
	  or        r9, r9, r8
	  lwz       r0, 0x1C(r1)
	  rlwinm    r11,r29,18,0,13
	  or        r8, r0, r6
	  rlwinm    r6,r9,8,24,31
	  stb       r6, 0x0(r4)
	  or        r10, r10, r8
	  lwz       r0, 0x10(r1)
	  rlwinm    r8,r9,16,24,31
	  lwz       r4, 0xC(r1)
	  rlwinm    r3,r9,24,24,31
	  rlwinm    r0,r0,9,0,22
	  lwz       r6, -0x7158(r13)
	  or        r0, r0, r10
	  rlwinm    r4,r4,10,0,21
	  or        r0, r4, r0
	  rlwinm    r10,r14,13,0,18
	  or        r0, r10, r0
	  lwz       r4, 0x8(r6)
	  or        r0, r11, r0
	  rlwinm    r10,r27,22,0,9
	  addi      r14, r4, 0x1
	  rlwinm    r11,r26,27,0,4
	  stw       r14, 0x8(r6)
	  or        r0, r12, r0
	  or        r0, r10, r0
	  rlwinm    r6,r25,28,0,3
	  stb       r8, 0x0(r4)
	  or        r0, r11, r0
	  or        r0, r6, r0
	  lwz       r10, -0x7158(r13)
	  oris      r4, r0, 0x8000
	  rlwinm    r8,r4,8,24,31
	  lwz       r6, 0x8(r10)
	  addi      r0, r6, 0x1
	  stw       r0, 0x8(r10)
	  stb       r3, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r3, 0x8(r6)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r6)
	  stb       r9, 0x0(r3)
	  lwz       r6, -0x7158(r13)
	  lwz       r3, 0x8(r6)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r6)
	  stb       r5, 0x0(r3)
	  lwz       r6, -0x7158(r13)
	  lwz       r3, 0x8(r6)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r6)
	  stb       r7, 0x0(r3)
	  lwz       r6, -0x7158(r13)
	  lwz       r3, 0x8(r6)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r6)
	  stb       r8, 0x0(r3)
	  lwz       r11, -0x7158(r13)
	  rlwinm    r6,r23,5,0,26
	  lwz       r3, 0x8(r1)
	  rlwinm    r12,r4,16,24,31
	  lwz       r10, 0x8(r11)
	  rlwinm    r7,r22,6,0,25
	  or        r6, r24, r6
	  addi      r0, r3, 0x90
	  addi      r9, r10, 0x1
	  rlwinm    r8,r21,9,0,22
	  stw       r9, 0x8(r11)
	  or        r6, r7, r6
	  or        r6, r8, r6
	  rlwinm    r7,r20,14,0,17
	  stb       r12, 0x0(r10)
	  or        r6, r7, r6
	  rlwinm    r9,r19,15,0,16
	  rlwinm    r7,r18,18,0,13
	  lwz       r11, -0x7158(r13)
	  or        r6, r9, r6
	  or        r6, r7, r6
	  rlwinm    r8,r17,23,0,8
	  lwz       r10, 0x8(r11)
	  or        r6, r8, r6
	  rlwinm    r9,r16,24,0,7
	  rlwinm    r3,r4,24,24,31
	  addi      r8, r10, 0x1
	  rlwinm    r7,r15,27,0,4
	  stw       r8, 0x8(r11)
	  or        r6, r9, r6
	  or        r6, r7, r6
	  stb       r3, 0x0(r10)
	  rlwinm    r9,r6,8,24,31
	  rlwinm    r8,r6,16,24,31
	  rlwinm    r7,r6,24,24,31
	  lwz       r11, -0x7158(r13)
	  lwz       r10, 0x8(r11)
	  addi      r3, r10, 0x1
	  stw       r3, 0x8(r11)
	  stb       r4, 0x0(r10)
	  lwz       r10, -0x7158(r13)
	  lwz       r4, 0x8(r10)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r10)
	  stb       r5, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r5)
	  stb       r0, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lmw       r14, 0x58(r1)
	  lwz       r0, 0xA4(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80075454
 * Size:	0001D0
 */
void J3DGDSetTexCoordGen(_GXTexGenType, _GXTexGenSrc)
{
	/*
	.loc_0x0:
	  cmplwi    r4, 0x14
	  li        r7, 0
	  li        r8, 0
	  li        r9, 0x5
	  li        r10, 0x5
	  li        r11, 0
	  bgt-      .loc_0xE8
	  lis       r5, 0x804A
	  rlwinm    r0,r4,2,0,29
	  addi      r5, r5, 0x208C
	  lwzx      r0, r5, r0
	  mtctr     r0
	  bctr
	  li        r9, 0
	  li        r7, 0x1
	  b         .loc_0xE8
	  li        r9, 0x1
	  li        r7, 0x1
	  b         .loc_0xE8
	  li        r9, 0x3
	  li        r7, 0x1
	  b         .loc_0xE8
	  li        r9, 0x4
	  li        r7, 0x1
	  b         .loc_0xE8
	  li        r9, 0x2
	  b         .loc_0xE8
	  li        r9, 0x2
	  b         .loc_0xE8
	  li        r9, 0x5
	  b         .loc_0xE8
	  li        r9, 0x6
	  b         .loc_0xE8
	  li        r9, 0x7
	  b         .loc_0xE8
	  li        r9, 0x8
	  b         .loc_0xE8
	  li        r9, 0x9
	  b         .loc_0xE8
	  li        r9, 0xA
	  b         .loc_0xE8
	  li        r9, 0xB
	  b         .loc_0xE8
	  li        r9, 0xC
	  b         .loc_0xE8
	  li        r10, 0
	  b         .loc_0xE8
	  li        r10, 0x1
	  b         .loc_0xE8
	  li        r10, 0x2
	  b         .loc_0xE8
	  li        r10, 0x3
	  b         .loc_0xE8
	  li        r10, 0x4
	  b         .loc_0xE8
	  li        r10, 0x5
	  b         .loc_0xE8
	  li        r10, 0x6

	.loc_0xE8:
	  cmpwi     r3, 0x1
	  beq-      .loc_0x110
	  bge-      .loc_0x100
	  cmpwi     r3, 0
	  bge-      .loc_0x118
	  b         .loc_0x144

	.loc_0x100:
	  cmpwi     r3, 0xA
	  beq-      .loc_0x130
	  bge-      .loc_0x144
	  b         .loc_0x124

	.loc_0x110:
	  li        r6, 0
	  b         .loc_0x144

	.loc_0x118:
	  li        r6, 0
	  li        r8, 0x1
	  b         .loc_0x144

	.loc_0x124:
	  subi      r11, r3, 0x2
	  li        r6, 0x1
	  b         .loc_0x144

	.loc_0x130:
	  cmpwi     r4, 0x13
	  bne-      .loc_0x140
	  li        r6, 0x2
	  b         .loc_0x144

	.loc_0x140:
	  li        r6, 0x3

	.loc_0x144:
	  rlwinm    r0,r7,2,0,29
	  rlwinm    r3,r8,1,0,30
	  rlwinm    r5,r6,4,0,27
	  lwz       r4, -0x7158(r13)
	  or        r0, r3, r0
	  rlwinm    r6,r9,7,0,24
	  or        r5, r5, r0
	  lwz       r3, 0x8(r4)
	  or        r5, r6, r5
	  rlwinm    r7,r10,12,0,19
	  addi      r0, r3, 0x1
	  rlwinm    r6,r11,15,0,16
	  or        r5, r7, r5
	  stw       r0, 0x8(r4)
	  or        r7, r6, r5
	  rlwinm    r0,r7,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r7,16,24,31
	  rlwinm    r5,r7,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000240
 */
void J3DGDSetTexCoordScale(_GXTexCoordID, unsigned short, unsigned short)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80075624
 * Size:	0001FC
 */
void J3DGDSetTexCoordScale2(_GXTexCoordID, unsigned short, unsigned char,
                            unsigned char, unsigned short, unsigned char,
                            unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r26, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r27, r7
	  mr        r30, r8
	  mr        r31, r9
	  lwz       r10, -0x7158(r13)
	  lwz       r3, 0x8(r10)
	  lwz       r0, 0xC(r10)
	  addi      r3, r3, 0xF
	  cmplw     r3, r0
	  ble-      .loc_0x48
	  bl        0x6C5D8

	.loc_0x48:
	  lwz       r3, -0x7158(r13)
	  rlwinm    r4,r25,1,0,30
	  addi      r7, r4, 0x30
	  rlwinm    r8,r26,0,16,31
	  lwz       r10, 0x8(r3)
	  addi      r6, r4, 0x31
	  subi      r9, r8, 0x1
	  rlwinm    r8,r28,16,8,15
	  addi      r0, r10, 0x1
	  rlwinm    r5,r27,0,16,31
	  stw       r0, 0x8(r3)
	  li        r4, 0x61
	  or        r8, r9, r8
	  li        r27, 0xFE
	  stb       r4, 0x0(r10)
	  rlwinm    r10,r29,17,7,14
	  or        r9, r10, r8
	  rlwinm    r7,r7,24,0,7
	  lwz       r11, -0x7158(r13)
	  subi      r8, r5, 0x1
	  or        r5, r9, r7
	  rlwinm    r7,r30,16,8,15
	  lwz       r28, 0x8(r11)
	  rlwinm    r9,r31,17,7,14
	  or        r7, r8, r7
	  li        r3, 0x3
	  addi      r10, r28, 0x1
	  li        r0, 0xFF
	  stw       r10, 0x8(r11)
	  or        r7, r9, r7
	  rlwinm    r6,r6,24,0,7
	  rlwinm    r12,r5,8,24,31
	  stb       r27, 0x0(r28)
	  or        r6, r7, r6
	  rlwinm    r11,r5,16,24,31
	  rlwinm    r10,r5,24,24,31
	  lwz       r28, -0x7158(r13)
	  rlwinm    r7,r6,8,24,31
	  lwz       r9, 0x8(r28)
	  addi      r8, r9, 0x1
	  stw       r8, 0x8(r28)
	  stb       r3, 0x0(r9)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r3, r8, 0x1
	  stw       r3, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r3, r8, 0x1
	  stw       r3, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r4, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r12, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r11, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r10, 0x0(r3)
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r8)
	  stb       r5, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r4, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  rlwinm    r7,r6,16,24,31
	  rlwinm    r5,r6,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80075820
 * Size:	0001AC
 */
void J3DGDSetTexLookupMode(_GXTexMapID, _GXTexWrapMode, _GXTexWrapMode,
                           _GXTexFilter, _GXTexFilter, float, float, float,
                           unsigned char, unsigned char, _GXAnisotropy)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  rlwinm    r5,r5,2,0,29
	  lfs       f0, -0x78C8(r2)
	  subi      r11, r13, 0x7F94
	  stw       r31, 0x2C(r1)
	  subfic    r0, r7, 0x1
	  fmuls     f0, f0, f3
	  lfs       f4, -0x78C4(r2)
	  stw       r30, 0x28(r1)
	  subi      r30, r13, 0x7F6C
	  fmuls     f1, f4, f1
	  cntlzw    r31, r0
	  lwz       r12, -0x7158(r13)
	  fctiwz    f0, f0
	  lbzx      r30, r30, r6
	  rlwinm    r6,r9,0,24,31
	  lwz       r7, 0x8(r12)
	  cntlzw    r9, r6
	  lbzx      r11, r11, r3
	  addi      r0, r7, 0x1
	  stfd      f0, 0x8(r1)
	  or        r4, r4, r5
	  rlwinm    r6,r31,31,20,27
	  stw       r0, 0x8(r12)
	  li        r0, 0x61
	  fmuls     f0, f4, f2
	  lwz       r12, 0xC(r1)
	  stb       r0, 0x0(r7)
	  or        r4, r6, r4
	  rlwinm    r5,r30,5,0,26
	  rlwinm    r7,r9,3,16,23
	  or        r4, r5, r4
	  lwz       r6, -0x7158(r13)
	  rlwinm    r9,r12,9,15,22
	  rlwinm    r10,r10,19,0,12
	  or        r4, r7, r4
	  lwz       r5, 0x8(r6)
	  or        r4, r9, r4
	  rlwinm    r8,r8,21,3,10
	  or        r7, r10, r4
	  rlwinm    r9,r11,24,0,7
	  addi      r4, r5, 0x1
	  fctiwz    f0, f0
	  stw       r4, 0x8(r6)
	  or        r4, r8, r7
	  or        r11, r9, r4
	  fctiwz    f1, f1
	  rlwinm    r4,r11,8,24,31
	  stb       r4, 0x0(r5)
	  rlwinm    r8,r11,16,24,31
	  rlwinm    r10,r11,24,24,31
	  subi      r6, r13, 0x7F8C
	  lwz       r7, -0x7158(r13)
	  stfd      f0, 0x18(r1)
	  lwz       r5, 0x8(r7)
	  stfd      f1, 0x10(r1)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r7)
	  lwz       r4, 0x1C(r1)
	  stb       r8, 0x0(r5)
	  lwz       r5, 0x14(r1)
	  rlwinm    r4,r4,8,16,23
	  lwz       r9, -0x7158(r13)
	  rlwimi    r4,r5,0,24,31
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r5, r7, 0x1
	  stw       r5, 0x8(r8)
	  stb       r11, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lbzx      r3, r6, r3
	  lwz       r5, 0x8(r7)
	  rlwimi    r4,r3,24,0,7
	  addi      r3, r5, 0x1
	  stw       r3, 0x8(r7)
	  rlwinm    r6,r4,8,24,31
	  stb       r0, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  rlwinm    r7,r4,16,24,31
	  rlwinm    r6,r4,24,24,31
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r3)
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  stb       r4, 0x0(r3)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800759CC
 * Size:	0000A8
 */
void J3DGDSetTexImgAttr(_GXTexMapID, unsigned short, unsigned short, _GXTexFmt)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x7158(r13)
	  subi      r8, r13, 0x7F84
	  lbzx      r9, r8, r3
	  rlwinm    r8,r4,0,16,31
	  lwz       r3, 0x8(r7)
	  rlwinm    r5,r5,0,16,31
	  li        r4, 0x61
	  subi      r8, r8, 0x1
	  addi      r0, r3, 0x1
	  subi      r5, r5, 0x1
	  stw       r0, 0x8(r7)
	  rlwinm    r0,r5,10,0,21
	  rlwinm    r5,r6,20,0,11
	  rlwinm    r6,r9,24,0,7
	  stb       r4, 0x0(r3)
	  or        r0, r8, r0
	  or        r0, r5, r0
	  lwz       r4, -0x7158(r13)
	  or        r8, r6, r0
	  rlwinm    r7,r8,8,24,31
	  lwz       r3, 0x8(r4)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80075A74
 * Size:	000090
 */
void J3DGDSetTexImgPtr(_GXTexMapID, void*)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x7158(r13)
	  subi      r6, r13, 0x7F7C
	  lbzx      r0, r6, r3
	  subis     r6, r4, 0x8000
	  lwz       r3, 0x8(r5)
	  rlwinm    r7,r6,27,5,31
	  rlwinm    r6,r0,24,0,7
	  li        r4, 0x61
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r5)
	  or        r8, r7, r6
	  rlwinm    r7,r8,8,24,31
	  stb       r4, 0x0(r3)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80075B04
 * Size:	0000D4
 */
void J3DGDSetTexImgPtrRaw(_GXTexMapID, unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r5, -0x7158(r13)
	  lwz       r3, 0x8(r5)
	  lwz       r0, 0xC(r5)
	  addi      r3, r3, 0x5
	  cmplw     r3, r0
	  ble-      .loc_0x38
	  bl        0x6C108

	.loc_0x38:
	  lwz       r4, -0x7158(r13)
	  subi      r3, r13, 0x7F7C
	  lbzx      r0, r3, r30
	  li        r5, 0x61
	  lwz       r3, 0x8(r4)
	  rlwinm    r6,r0,24,0,7
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  or        r8, r31, r6
	  rlwinm    r7,r8,8,24,31
	  stb       r5, 0x0(r3)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80075BD8
 * Size:	000098
 */
void J3DGDSetTexTlut(_GXTexMapID, unsigned long, _GXTlutFmt)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x7158(r13)
	  subi      r7, r13, 0x7F74
	  lbzx      r8, r7, r3
	  subis     r0, r4, 0x8
	  lwz       r3, 0x8(r6)
	  rlwinm    r7,r0,23,9,31
	  li        r4, 0x61
	  rlwinm    r5,r5,10,0,21
	  addi      r0, r3, 0x1
	  rlwinm    r8,r8,24,0,7
	  stw       r0, 0x8(r6)
	  or        r0, r7, r5
	  or        r8, r8, r0
	  stb       r4, 0x0(r3)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80075C70
 * Size:	0002C8
 */
void J3DGDLoadTlut(void*, unsigned long, _GXTlutSize)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  subis     r0, r3, 0x8000
	  rlwinm    r0,r0,27,5,31
	  li        r8, 0x61
	  stw       r31, 0x1C(r1)
	  oris      r9, r0, 0x6400
	  li        r7, 0xFE
	  li        r6, 0xFF
	  stw       r30, 0x18(r1)
	  li        r3, 0
	  rlwinm    r30,r9,16,24,31
	  rlwinm    r31,r9,24,24,31
	  stw       r29, 0x14(r1)
	  rlwinm    r29,r9,8,24,31
	  lwz       r11, -0x7158(r13)
	  lwz       r10, 0x8(r11)
	  addi      r0, r10, 0x1
	  stw       r0, 0x8(r11)
	  li        r0, 0xF
	  stb       r8, 0x0(r10)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r7, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r6, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r6, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r3, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r8, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r0, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r3, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r3, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r3, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r8, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r29, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r30, 0x0(r11)
	  lwz       r12, -0x7158(r13)
	  lwz       r11, 0x8(r12)
	  addi      r10, r11, 0x1
	  stw       r10, 0x8(r12)
	  stb       r31, 0x0(r11)
	  lwz       r11, -0x7158(r13)
	  subis     r4, r4, 0x8
	  rlwinm    r10,r4,23,9,31
	  rlwinm    r4,r5,10,0,21
	  lwz       r5, 0x8(r11)
	  or        r4, r10, r4
	  oris      r29, r4, 0x6500
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r11)
	  rlwinm    r12,r29,8,24,31
	  rlwinm    r11,r29,16,24,31
	  rlwinm    r10,r29,24,24,31
	  stb       r9, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r8, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r12, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r11, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r10, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r29, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r8, 0x0(r5)
	  lwz       r9, -0x7158(r13)
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r7, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  lwz       r5, 0x8(r7)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r7)
	  stb       r6, 0x0(r5)
	  lwz       r7, -0x7158(r13)
	  lwz       r5, 0x8(r7)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r7)
	  stb       r6, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r3, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r8, 0x0(r5)
	  lwz       r6, -0x7158(r13)
	  lwz       r5, 0x8(r6)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  stb       r0, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000128
 */
void J3DGDSetTevIndirect(_GXTevStageID, _GXIndTexStageID, _GXIndTexFormat,
                         _GXIndTexBiasSel, _GXIndTexMtxID, _GXIndTexWrap,
                         _GXIndTexWrap, unsigned char, unsigned char,
                         _GXIndTexAlphaSel)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80075F38
 * Size:	0002D8
 */
void J3DGDSetIndTexMtx(_GXIndTexMtxID, float (*)[3], char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  cmpwi     r3, 0x8
	  stw       r0, 0x64(r1)
	  stmw      r24, 0x40(r1)
	  mr        r27, r5
	  beq-      .loc_0x5C
	  bge-      .loc_0x38
	  cmpwi     r3, 0x4
	  beq-      .loc_0x5C
	  bge-      .loc_0x4C
	  cmpwi     r3, 0x1
	  bge-      .loc_0x44
	  b         .loc_0x5C

	.loc_0x38:
	  cmpwi     r3, 0xC
	  bge-      .loc_0x5C
	  b         .loc_0x54

	.loc_0x44:
	  subi      r28, r3, 0x1
	  b         .loc_0x60

	.loc_0x4C:
	  subi      r28, r3, 0x5
	  b         .loc_0x60

	.loc_0x54:
	  subi      r28, r3, 0x9
	  b         .loc_0x60

	.loc_0x5C:
	  li        r28, 0

	.loc_0x60:
	  lfs       f6, -0x78C0(r2)
	  lfs       f2, 0x0(r4)
	  lfs       f1, 0xC(r4)
	  lfs       f0, 0x4(r4)
	  fmuls     f5, f6, f2
	  lfs       f2, 0x10(r4)
	  fmuls     f4, f6, f1
	  lwz       r5, -0x7158(r13)
	  fmuls     f3, f6, f0
	  lfs       f1, 0x8(r4)
	  lfs       f0, 0x14(r4)
	  fmuls     f2, f6, f2
	  fmuls     f1, f6, f1
	  lwz       r3, 0x8(r5)
	  fmuls     f0, f6, f0
	  lwz       r0, 0xC(r5)
	  fctiwz    f5, f5
	  fctiwz    f4, f4
	  fctiwz    f3, f3
	  addi      r3, r3, 0xF
	  fctiwz    f2, f2
	  stfd      f5, 0x8(r1)
	  fctiwz    f1, f1
	  fctiwz    f0, f0
	  stfd      f4, 0x10(r1)
	  cmplw     r3, r0
	  lwz       r3, 0xC(r1)
	  stfd      f3, 0x18(r1)
	  lwz       r0, 0x14(r1)
	  rlwinm    r31,r3,0,21,31
	  stfd      f2, 0x20(r1)
	  lwz       r3, 0x1C(r1)
	  rlwinm    r26,r0,0,21,31
	  stfd      f1, 0x28(r1)
	  lwz       r0, 0x24(r1)
	  rlwinm    r30,r3,0,21,31
	  stfd      f0, 0x30(r1)
	  lwz       r3, 0x2C(r1)
	  rlwinm    r25,r0,0,21,31
	  lwz       r0, 0x34(r1)
	  rlwinm    r29,r3,0,21,31
	  rlwinm    r24,r0,0,21,31
	  ble-      .loc_0x110
	  bl        0x6BBFC

	.loc_0x110:
	  lwz       r5, -0x7158(r13)
	  addi      r0, r27, 0x11
	  extsb     r3, r0
	  rlwinm    r8,r25,11,0,20
	  lwz       r4, 0x8(r5)
	  mulli     r6, r28, 0x3
	  rlwinm    r10,r26,11,0,20
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  li        r0, 0x61
	  addi      r5, r6, 0x7
	  addi      r9, r6, 0x6
	  stb       r0, 0x0(r4)
	  rlwinm    r11,r3,22,8,9
	  or        r4, r31, r10
	  or        r8, r30, r8
	  lwz       r12, -0x7158(r13)
	  or        r10, r11, r4
	  rlwinm    r4,r9,24,0,7
	  rlwinm    r9,r3,20,8,9
	  lwz       r11, 0x8(r12)
	  or        r4, r10, r4
	  rlwinm    r27,r4,8,24,31
	  rlwinm    r7,r24,11,0,20
	  addi      r10, r11, 0x1
	  rlwinm    r5,r5,24,0,7
	  stw       r10, 0x8(r12)
	  or        r8, r9, r8
	  or        r5, r8, r5
	  addi      r6, r6, 0x8
	  stb       r27, 0x0(r11)
	  rlwinm    r8,r3,18,8,9
	  or        r3, r29, r7
	  rlwinm    r30,r4,16,24,31
	  lwz       r28, -0x7158(r13)
	  or        r7, r8, r3
	  rlwinm    r3,r6,24,0,7
	  rlwinm    r12,r4,24,24,31
	  lwz       r27, 0x8(r28)
	  or        r3, r7, r3
	  rlwinm    r11,r5,8,24,31
	  rlwinm    r10,r5,16,24,31
	  addi      r6, r27, 0x1
	  rlwinm    r9,r5,24,24,31
	  stw       r6, 0x8(r28)
	  stb       r30, 0x0(r27)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r6, r7, 0x1
	  stw       r6, 0x8(r8)
	  stb       r12, 0x0(r7)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r6, r7, 0x1
	  stw       r6, 0x8(r8)
	  stb       r4, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r4, r6, 0x1
	  stw       r4, 0x8(r7)
	  stb       r0, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r4, r6, 0x1
	  stw       r4, 0x8(r7)
	  stb       r11, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r4, r6, 0x1
	  stw       r4, 0x8(r7)
	  stb       r10, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r4, r6, 0x1
	  stw       r4, 0x8(r7)
	  stb       r9, 0x0(r6)
	  lwz       r7, -0x7158(r13)
	  lwz       r6, 0x8(r7)
	  addi      r4, r6, 0x1
	  stw       r4, 0x8(r7)
	  stb       r5, 0x0(r6)
	  lwz       r9, -0x7158(r13)
	  rlwinm    r8,r3,8,24,31
	  rlwinm    r7,r3,16,24,31
	  rlwinm    r6,r3,24,24,31
	  lwz       r5, 0x8(r9)
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r9)
	  stb       r0, 0x0(r5)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r8, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r7, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r6, 0x0(r4)
	  lwz       r5, -0x7158(r13)
	  lwz       r4, 0x8(r5)
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  stb       r3, 0x0(r4)
	  lmw       r24, 0x40(r1)
	  lwz       r0, 0x64(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076210
 * Size:	0000F0
 */
void J3DGDSetIndTexCoordScale(_GXIndTexStageID, _GXIndTexScale, _GXIndTexScale,
                              _GXIndTexScale, _GXIndTexScale)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r27, 0xC(r1)
	  mr        r27, r3
	  mr        r28, r4
	  mr        r29, r5
	  mr        r30, r6
	  mr        r31, r7
	  lwz       r8, -0x7158(r13)
	  lwz       r3, 0x8(r8)
	  lwz       r0, 0xC(r8)
	  addi      r3, r3, 0x5
	  cmplw     r3, r0
	  ble-      .loc_0x40
	  bl        0x6B9F4

	.loc_0x40:
	  lwz       r8, -0x7158(r13)
	  rlwinm    r0,r29,4,0,27
	  srawi     r3, r27, 0x1
	  li        r9, 0x61
	  lwz       r7, 0x8(r8)
	  addi      r5, r3, 0x25
	  rlwinm    r3,r30,8,0,23
	  or        r0, r28, r0
	  addi      r6, r7, 0x1
	  rlwinm    r4,r31,12,0,19
	  stw       r6, 0x8(r8)
	  or        r0, r3, r0
	  or        r0, r4, r0
	  rlwinm    r3,r5,24,0,7
	  stb       r9, 0x0(r7)
	  or        r8, r3, r0
	  rlwinm    r7,r8,8,24,31
	  lwz       r4, -0x7158(r13)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lmw       r27, 0xC(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076300
 * Size:	0001F8
 */
void J3DGDSetIndTexOrder(unsigned long, _GXTexCoordID, _GXTexMapID,
                         _GXTexCoordID, _GXTexMapID, _GXTexCoordID, _GXTexMapID,
                         _GXTexCoordID, _GXTexMapID)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stmw      r23, 0xC(r1)
	  mr        r31, r3
	  lwz       r30, 0x38(r1)
	  mr        r23, r4
	  mr        r24, r5
	  mr        r25, r6
	  mr        r26, r7
	  mr        r27, r8
	  mr        r28, r9
	  mr        r29, r10
	  lwz       r11, -0x7158(r13)
	  lwz       r3, 0x8(r11)
	  lwz       r0, 0xC(r11)
	  addi      r3, r3, 0xA
	  cmplw     r3, r0
	  ble-      .loc_0x50
	  bl        0x6B8F4

	.loc_0x50:
	  lwz       r6, -0x7158(r13)
	  rlwinm    r8,r23,3,26,28
	  rlwimi    r8,r24,0,29,31
	  li        r7, 0x61
	  lwz       r5, 0x8(r6)
	  rlwimi    r8,r26,6,23,25
	  rlwimi    r8,r25,9,20,22
	  rlwinm    r3,r30,0,29,31
	  addi      r0, r5, 0x1
	  li        r4, 0x1
	  stw       r0, 0x8(r6)
	  rlwimi    r8,r28,12,17,19
	  rlwimi    r8,r27,15,14,16
	  rlwinm    r10,r24,0,29,31
	  stb       r7, 0x0(r5)
	  rlwimi    r8,r30,18,11,13
	  rlwimi    r8,r29,21,8,10
	  rlwinm    r0,r28,0,29,31
	  lwz       r7, -0x7158(r13)
	  oris      r12, r8, 0x2700
	  rlwinm    r9,r12,16,24,31
	  rlwinm    r11,r26,0,29,31
	  lwz       r6, 0x8(r7)
	  slw       r10, r4, r10
	  addi      r5, r6, 0x1
	  stw       r5, 0x8(r7)
	  rlwinm    r5,r12,8,24,31
	  stb       r5, 0x0(r6)
	  rlwinm    r5,r12,24,24,31
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r6, r7, 0x1
	  stw       r6, 0x8(r8)
	  slw       r6, r4, r11
	  slw       r8, r4, r0
	  slw       r11, r4, r3
	  stb       r9, 0x0(r7)
	  li        r7, 0
	  li        r9, 0
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r12, 0x0(r3)
	  mtctr     r31
	  cmplwi    r31, 0
	  ble-      .loc_0x16C

	.loc_0x120:
	  cmpwi     r9, 0x2
	  beq-      .loc_0x158
	  bge-      .loc_0x13C
	  cmpwi     r9, 0
	  beq-      .loc_0x148
	  bge-      .loc_0x150
	  b         .loc_0x164

	.loc_0x13C:
	  cmpwi     r9, 0x4
	  bge-      .loc_0x164
	  b         .loc_0x160

	.loc_0x148:
	  or        r7, r7, r10
	  b         .loc_0x164

	.loc_0x150:
	  or        r7, r7, r6
	  b         .loc_0x164

	.loc_0x158:
	  or        r7, r7, r8
	  b         .loc_0x164

	.loc_0x160:
	  or        r7, r7, r11

	.loc_0x164:
	  addi      r9, r9, 0x1
	  bdnz+     .loc_0x120

	.loc_0x16C:
	  lwz       r4, -0x7158(r13)
	  oris      r9, r7, 0xF00
	  li        r8, 0x61
	  lwz       r3, 0x8(r4)
	  rlwinm    r7,r9,8,24,31
	  rlwinm    r6,r9,16,24,31
	  rlwinm    r5,r9,24,24,31
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  lmw       r23, 0xC(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800764F8
 * Size:	000188
 */
void J3DGDSetTevOrder(_GXTevStageID, _GXTexCoordID, _GXTexMapID, _GXChannelID,
                      _GXTexCoordID, _GXTexMapID, _GXChannelID)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  cmpwi     r4, 0x8
	  stw       r0, 0x34(r1)
	  stmw      r25, 0x14(r1)
	  mr        r25, r3
	  mr        r27, r5
	  mr        r28, r6
	  mr        r29, r8
	  mr        r26, r9
	  mr        r30, r4
	  blt-      .loc_0x34
	  li        r30, 0

	.loc_0x34:
	  cmpwi     r7, 0x8
	  mr        r31, r7
	  blt-      .loc_0x44
	  li        r31, 0

	.loc_0x44:
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  lwz       r0, 0xC(r4)
	  addi      r3, r3, 0x5
	  cmplw     r3, r0
	  ble-      .loc_0x60
	  bl        0x6B6EC

	.loc_0x60:
	  rlwinm    r0,r25,1,31,31
	  lis       r3, 0x804A
	  add       r4, r0, r25
	  rlwinm    r0,r26,0,28,31
	  addi      r3, r3, 0x20E0
	  cmpwi     r29, 0xFF
	  srawi     r4, r4, 0x1
	  lbzx      r0, r3, r0
	  addi      r3, r4, 0x28
	  li        r6, 0
	  rlwinm    r3,r3,24,0,7
	  rlwinm    r0,r0,19,0,12
	  beq-      .loc_0xA0
	  rlwinm.   r4,r29,0,23,23
	  bne-      .loc_0xA0
	  li        r6, 0x1

	.loc_0xA0:
	  lis       r4, 0x804A
	  rlwinm    r7,r30,3,0,28
	  rlwinm    r5,r28,0,28,31
	  cmpwi     r27, 0xFF
	  addi      r4, r4, 0x20E0
	  rlwinm    r11,r6,18,6,13
	  lbzx      r4, r4, r5
	  rlwinm    r10,r31,15,0,16
	  rlwinm    r9,r29,12,17,19
	  rlwimi    r7,r27,0,29,31
	  rlwinm    r8,r4,7,0,24
	  li        r5, 0
	  beq-      .loc_0xE0
	  rlwinm.   r4,r27,0,23,23
	  bne-      .loc_0xE0
	  li        r5, 0x1

	.loc_0xE0:
	  lwz       r6, -0x7158(r13)
	  rlwinm    r4,r5,6,18,25
	  or        r4, r7, r4
	  li        r7, 0x61
	  lwz       r5, 0x8(r6)
	  or        r4, r8, r4
	  or        r8, r9, r4
	  addi      r4, r5, 0x1
	  stw       r4, 0x8(r6)
	  or        r4, r10, r8
	  or        r4, r11, r4
	  stb       r7, 0x0(r5)
	  or        r0, r0, r4
	  or        r8, r3, r0
	  lwz       r4, -0x7158(r13)
	  rlwinm    r7,r8,8,24,31
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lmw       r25, 0x14(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076680
 * Size:	000168
 */
void J3DGDSetTevKColor(_GXTevKColorID, _GXColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r5,r3,1,0,30
	  lbz       r8, 0x0(r4)
	  stw       r0, 0x14(r1)
	  addi      r7, r5, 0xE0
	  lbz       r0, 0x3(r4)
	  addi      r5, r5, 0xE1
	  stw       r31, 0xC(r1)
	  lbz       r6, 0x2(r4)
	  rlwimi    r8,r0,12,12,19
	  stw       r30, 0x8(r1)
	  oris      r8, r8, 0x80
	  lbz       r4, 0x1(r4)
	  lwz       r9, -0x7158(r13)
	  rlwimi    r6,r4,12,12,19
	  rlwinm    r4,r7,24,0,7
	  lwz       r3, 0x8(r9)
	  or        r31, r8, r4
	  lwz       r0, 0xC(r9)
	  addi      r3, r3, 0xA
	  cmplw     r3, r0
	  rlwinm    r0,r5,24,0,7
	  oris      r3, r6, 0x80
	  or        r30, r3, r0
	  ble-      .loc_0x6C
	  bl        0x6B558

	.loc_0x6C:
	  lwz       r4, -0x7158(r13)
	  li        r11, 0x61
	  rlwinm    r10,r31,8,24,31
	  rlwinm    r9,r31,16,24,31
	  lwz       r3, 0x8(r4)
	  rlwinm    r8,r31,24,24,31
	  rlwinm    r7,r30,8,24,31
	  rlwinm    r6,r30,16,24,31
	  addi      r0, r3, 0x1
	  rlwinm    r5,r30,24,24,31
	  stw       r0, 0x8(r4)
	  stb       r11, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r10, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r31, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r11, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r30, 0x0(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800767E8
 * Size:	000234
 */
void J3DGDSetTevColorS10(_GXTevRegID, _GXColorS10)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  rlwinm    r5,r3,1,0,30
	  lha       r6, 0x2(r4)
	  stw       r0, 0x14(r1)
	  addi      r7, r5, 0xE0
	  lha       r0, 0x6(r4)
	  addi      r5, r5, 0xE1
	  stw       r31, 0xC(r1)
	  rlwinm    r6,r6,12,9,19
	  lha       r9, 0x0(r4)
	  rlwinm    r8,r0,12,9,19
	  stw       r30, 0x8(r1)
	  lha       r4, 0x4(r4)
	  rlwimi    r8,r9,0,21,31
	  lwz       r10, -0x7158(r13)
	  mr        r31, r8
	  rlwimi    r6,r4,0,21,31
	  lwz       r3, 0x8(r10)
	  mr        r30, r6
	  lwz       r0, 0xC(r10)
	  rlwimi    r31,r7,24,0,7
	  addi      r3, r3, 0x14
	  rlwimi    r30,r5,24,0,7
	  cmplw     r3, r0
	  ble-      .loc_0x6C
	  bl        0x6B3F0

	.loc_0x6C:
	  lwz       r8, -0x7158(r13)
	  li        r0, 0x61
	  rlwinm    r12,r31,8,24,31
	  rlwinm    r11,r31,16,24,31
	  lwz       r7, 0x8(r8)
	  rlwinm    r10,r31,24,24,31
	  rlwinm    r3,r30,8,24,31
	  rlwinm    r4,r30,16,24,31
	  addi      r6, r7, 0x1
	  rlwinm    r5,r30,24,24,31
	  stw       r6, 0x8(r8)
	  rlwinm    r6,r30,0,24,31
	  stb       r0, 0x0(r7)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r12, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r11, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r10, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r31, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r3, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r4, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r30, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r3, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r4, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r5, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r6, 0x0(r8)
	  lwz       r9, -0x7158(r13)
	  lwz       r8, 0x8(r9)
	  addi      r7, r8, 0x1
	  stw       r7, 0x8(r9)
	  stb       r0, 0x0(r8)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r0, r7, 0x1
	  stw       r0, 0x8(r8)
	  stb       r3, 0x0(r7)
	  lwz       r7, -0x7158(r13)
	  lwz       r3, 0x8(r7)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r7)
	  stb       r4, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076A1C
 * Size:	000360
 */
void J3DGDSetFog(_GXFogType, float, float, float, float, _GXColor)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  fcmpu     cr0, f4, f3
	  stw       r0, 0x34(r1)
	  stmw      r27, 0x1C(r1)
	  mr        r28, r3
	  mr        r29, r4
	  beq-      .loc_0x28
	  fcmpu     cr0, f2, f1
	  bne-      .loc_0x38

	.loc_0x28:
	  lfs       f3, -0x78BC(r2)
	  lfs       f4, -0x78B8(r2)
	  stfs      f3, 0xC(r1)
	  b         .loc_0x58

	.loc_0x38:
	  fsubs     f0, f4, f3
	  fsubs     f5, f2, f1
	  fmuls     f3, f4, f3
	  fdivs     f4, f4, f0
	  fmuls     f2, f0, f5
	  fdivs     f0, f1, f5
	  fdivs     f3, f3, f2
	  stfs      f0, 0xC(r1)

	.loc_0x58:
	  lfs       f1, -0x78B8(r2)
	  li        r31, 0x1
	  lfd       f0, -0x78B0(r2)
	  b         .loc_0x70

	.loc_0x68:
	  fmuls     f4, f4, f1
	  addi      r31, r31, 0x1

	.loc_0x70:
	  fcmpo     cr0, f4, f0
	  bgt+      .loc_0x68
	  lfd       f0, -0x78A0(r2)
	  lfs       f2, -0x78A8(r2)
	  lfs       f1, -0x78BC(r2)
	  b         .loc_0x90

	.loc_0x88:
	  fmuls     f4, f4, f2
	  subi      r31, r31, 0x1

	.loc_0x90:
	  fcmpo     cr0, f4, f1
	  ble-      .loc_0xA0
	  fcmpo     cr0, f4, f0
	  blt+      .loc_0x88

	.loc_0xA0:
	  li        r3, 0x1
	  lis       r0, 0x4330
	  slw       r3, r3, r31
	  lfs       f0, -0x7898(r2)
	  xoris     r3, r3, 0x8000
	  stw       r0, 0x10(r1)
	  fmuls     f1, f0, f4
	  lfd       f2, -0x7890(r2)
	  stw       r3, 0x14(r1)
	  li        r7, 0x61
	  lwz       r4, -0x7158(r13)
	  lfd       f0, 0x10(r1)
	  lwz       r3, 0x8(r4)
	  fsubs     f0, f0, f2
	  lwz       r30, 0xC(r1)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  fdivs     f0, f3, f0
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stfs      f0, 0x8(r1)
	  lwz       r0, 0x8(r1)
	  rlwinm    r0,r0,20,12,31
	  oris      r8, r0, 0xEE00
	  rlwinm    r0,r8,8,24,31
	  stb       r0, 0x0(r3)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  bl        0x4AFC4
	  lwz       r7, -0x7158(r13)
	  oris      r3, r3, 0xEF00
	  oris      r4, r31, 0xF000
	  rlwinm    r0,r28,21,0,10
	  lwz       r6, 0x8(r7)
	  rlwinm    r8,r3,8,24,31
	  rlwimi    r0,r30,20,12,31
	  rlwinm    r27,r3,16,24,31
	  addi      r5, r6, 0x1
	  rlwinm    r31,r3,24,24,31
	  stw       r5, 0x8(r7)
	  oris      r5, r0, 0xF100
	  li        r0, 0x61
	  rlwinm    r28,r4,8,24,31
	  stb       r8, 0x0(r6)
	  rlwinm    r12,r4,16,24,31
	  rlwinm    r11,r4,24,24,31
	  rlwinm    r9,r5,8,24,31
	  lwz       r30, -0x7158(r13)
	  rlwinm    r8,r5,16,24,31
	  rlwinm    r7,r5,24,24,31
	  lwz       r10, 0x8(r30)
	  addi      r6, r10, 0x1
	  stw       r6, 0x8(r30)
	  stb       r27, 0x0(r10)
	  lwz       r30, -0x7158(r13)
	  lwz       r10, 0x8(r30)
	  addi      r6, r10, 0x1
	  stw       r6, 0x8(r30)
	  stb       r31, 0x0(r10)
	  lwz       r30, -0x7158(r13)
	  lwz       r10, 0x8(r30)
	  addi      r6, r10, 0x1
	  stw       r6, 0x8(r30)
	  stb       r3, 0x0(r10)
	  lwz       r10, -0x7158(r13)
	  lwz       r6, 0x8(r10)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r10)
	  stb       r0, 0x0(r6)
	  lwz       r10, -0x7158(r13)
	  lwz       r6, 0x8(r10)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r10)
	  stb       r28, 0x0(r6)
	  lwz       r10, -0x7158(r13)
	  lwz       r6, 0x8(r10)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r10)
	  stb       r12, 0x0(r6)
	  lwz       r10, -0x7158(r13)
	  lwz       r6, 0x8(r10)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r10)
	  stb       r11, 0x0(r6)
	  lwz       r10, -0x7158(r13)
	  lwz       r6, 0x8(r10)
	  addi      r3, r6, 0x1
	  stw       r3, 0x8(r10)
	  stb       r4, 0x0(r6)
	  lwz       r6, -0x7158(r13)
	  lwz       r4, 0x8(r6)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r6)
	  stb       r0, 0x0(r4)
	  lwz       r6, -0x7158(r13)
	  lwz       r4, 0x8(r6)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r6)
	  stb       r9, 0x0(r4)
	  lwz       r6, -0x7158(r13)
	  lwz       r4, 0x8(r6)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r6)
	  stb       r8, 0x0(r4)
	  lwz       r6, -0x7158(r13)
	  lwz       r4, 0x8(r6)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r6)
	  stb       r7, 0x0(r4)
	  lwz       r9, -0x7158(r13)
	  lbz       r3, 0x1(r29)
	  lwz       r8, 0x8(r9)
	  lbz       r4, 0x2(r29)
	  rlwimi    r4,r3,8,16,23
	  addi      r7, r8, 0x1
	  lbz       r6, 0x0(r29)
	  stw       r7, 0x8(r9)
	  rlwimi    r4,r6,16,8,15
	  stb       r5, 0x0(r8)
	  oris      r9, r4, 0xF200
	  rlwinm    r7,r9,8,24,31
	  lwz       r8, -0x7158(r13)
	  rlwinm    r6,r9,16,24,31
	  rlwinm    r5,r9,24,24,31
	  lwz       r4, 0x8(r8)
	  addi      r3, r4, 0x1
	  stw       r3, 0x8(r8)
	  stb       r0, 0x0(r4)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r9, 0x0(r3)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076D7C
 * Size:	00013C
 */
void J3DGDSetFogRangeAdj(unsigned char, unsigned short, _GXFogAdjTable*)
{
	/*
	.loc_0x0:
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB0
	  li        r0, 0x5
	  li        r6, 0
	  mtctr     r0

	.loc_0x14:
	  lwz       r8, -0x7158(r13)
	  addi      r10, r6, 0xE9
	  lhz       r0, 0x2(r5)
	  rlwinm    r12,r10,24,0,7
	  lwz       r7, 0x8(r8)
	  li        r9, 0x61
	  lhz       r10, 0x0(r5)
	  rlwinm    r11,r0,12,0,19
	  addi      r0, r7, 0x1
	  addi      r5, r5, 0x4
	  stw       r0, 0x8(r8)
	  or        r0, r12, r11
	  or        r12, r0, r10
	  addi      r6, r6, 0x1
	  stb       r9, 0x0(r7)
	  rlwinm    r11,r12,8,24,31
	  rlwinm    r10,r12,16,24,31
	  rlwinm    r9,r12,24,24,31
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r0, r7, 0x1
	  stw       r0, 0x8(r8)
	  stb       r11, 0x0(r7)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r0, r7, 0x1
	  stw       r0, 0x8(r8)
	  stb       r10, 0x0(r7)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r0, r7, 0x1
	  stw       r0, 0x8(r8)
	  stb       r9, 0x0(r7)
	  lwz       r8, -0x7158(r13)
	  lwz       r7, 0x8(r8)
	  addi      r0, r7, 0x1
	  stw       r0, 0x8(r8)
	  stb       r12, 0x0(r7)
	  bdnz+     .loc_0x14

	.loc_0xB0:
	  lwz       r5, -0x7158(r13)
	  rlwinm    r4,r4,0,16,31
	  addi      r0, r4, 0x156
	  li        r6, 0x61
	  lwz       r4, 0x8(r5)
	  oris      r7, r0, 0xE800
	  rlwinm    r3,r3,10,14,21
	  addi      r0, r4, 0x1
	  stw       r0, 0x8(r5)
	  or        r8, r7, r3
	  rlwinm    r7,r8,8,24,31
	  stb       r6, 0x0(r4)
	  rlwinm    r6,r8,16,24,31
	  rlwinm    r5,r8,24,24,31
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r7, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r6, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r5, 0x0(r3)
	  lwz       r4, -0x7158(r13)
	  lwz       r3, 0x8(r4)
	  addi      r0, r3, 0x1
	  stw       r0, 0x8(r4)
	  stb       r8, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076EB8
 * Size:	000080
 */
void J3DFifoLoadPosMtxImm(float (*)[4], unsigned long)
{
	/*
	.loc_0x0:
	  li        r0, 0x10
	  lis       r6, 0xCC01
	  stb       r0, -0x8000(r6)
	  li        r5, 0xB
	  rlwinm    r0,r4,2,16,29
	  sth       r5, -0x8000(r6)
	  sth       r0, -0x8000(r6)
	  lwz       r0, 0x0(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x4(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x8(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0xC(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x10(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x14(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x18(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x1C(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x20(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x24(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x28(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x2C(r3)
	  stw       r0, -0x8000(r6)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076F38
 * Size:	00006C
 */
void J3DFifoLoadNrmMtxImm(float (*)[4], unsigned long)
{
	/*
	.loc_0x0:
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  mulli     r4, r4, 0x3
	  li        r0, 0x8
	  sth       r0, -0x8000(r5)
	  addi      r0, r4, 0x400
	  sth       r0, -0x8000(r5)
	  lwz       r0, 0x0(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x4(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x8(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x10(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x14(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x18(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x20(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x24(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x28(r3)
	  stw       r0, -0x8000(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80076FA4
 * Size:	00006C
 */
void J3DFifoLoadNrmMtxImm3x3(float (*)[3], unsigned long)
{
	/*
	.loc_0x0:
	  li        r0, 0x10
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  mulli     r4, r4, 0x3
	  li        r0, 0x8
	  sth       r0, -0x8000(r5)
	  addi      r0, r4, 0x400
	  sth       r0, -0x8000(r5)
	  lwz       r0, 0x0(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x4(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x8(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0xC(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x10(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x14(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x18(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x1C(r3)
	  stw       r0, -0x8000(r5)
	  lwz       r0, 0x20(r3)
	  stw       r0, -0x8000(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void J3DFifoLoadPosMtxToTexMtx(float (*)[4], unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80077010
 * Size:	000098
 */
void J3DFifoLoadNrmMtxToTexMtx(float (*)[4], unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r0, 0x10
	  lis       r6, 0xCC01
	  lfs       f0, -0x78BC(r2)
	  stb       r0, -0x8000(r6)
	  li        r5, 0xB
	  rlwinm    r0,r4,2,16,29
	  sth       r5, -0x8000(r6)
	  sth       r0, -0x8000(r6)
	  lwz       r0, 0x0(r3)
	  stfs      f0, 0x10(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x4(r3)
	  stfs      f0, 0xC(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x8(r3)
	  stfs      f0, 0x8(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x10(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x10(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x14(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x18(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0xC(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x20(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x24(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x28(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x8(r1)
	  stw       r0, -0x8000(r6)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800770A8
 * Size:	000098
 */
void J3DFifoLoadNrmMtxToTexMtx3x3(float (*)[3], unsigned long)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  li        r0, 0x10
	  lis       r6, 0xCC01
	  lfs       f0, -0x78BC(r2)
	  stb       r0, -0x8000(r6)
	  li        r5, 0xB
	  rlwinm    r0,r4,2,16,29
	  sth       r5, -0x8000(r6)
	  sth       r0, -0x8000(r6)
	  lwz       r0, 0x0(r3)
	  stfs      f0, 0x10(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x4(r3)
	  stfs      f0, 0xC(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x8(r3)
	  stfs      f0, 0x8(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x10(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0xC(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x10(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x14(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0xC(r1)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x18(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x1C(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x20(r3)
	  stw       r0, -0x8000(r6)
	  lwz       r0, 0x8(r1)
	  stw       r0, -0x8000(r6)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void J3DFifoLoadTexMtxImm3x3(float (*)[3], unsigned long)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80077140
 * Size:	000080
 */
void J3DFifoLoadTexCached(_GXTexMapID, unsigned long, _GXTexCacheSize,
                          unsigned long, _GXTexCacheSize)
{
	/*
	.loc_0x0:
	  li        r10, 0x61
	  lis       r9, 0xCC01
	  stb       r10, -0x8000(r9)
	  addi      r11, r5, 0x3
	  subi      r5, r13, 0x7F64
	  rlwinm    r4,r4,27,5,31
	  rlwinm    r0,r11,15,0,16
	  lbzx      r8, r5, r3
	  rlwinm    r5,r11,18,0,13
	  cmpwi     r7, 0x3
	  or        r0, r4, r0
	  rlwinm    r4,r8,24,0,7
	  or        r0, r5, r0
	  or        r0, r4, r0
	  stw       r0, -0x8000(r9)
	  beqlr-
	  lis       r0, 0x10
	  cmplw     r6, r0
	  bgelr-
	  stb       r10, -0x8000(r9)
	  addi      r7, r7, 0x3
	  subi      r5, r13, 0x7F5C
	  rlwinm    r4,r6,27,5,31
	  rlwinm    r0,r7,15,0,16
	  lbzx      r5, r5, r3
	  rlwinm    r3,r7,18,0,13
	  or        r0, r4, r0
	  rlwinm    r4,r5,24,0,7
	  or        r0, r3, r0
	  or        r0, r4, r0
	  stw       r0, -0x8000(r9)
	  blr
	*/
}
