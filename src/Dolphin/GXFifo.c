

/*
 * --INFO--
 * Address:	........
 * Size:	000050
 */
void GXOverflowHandler(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXUnderflowHandler(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000080
 */
void GXBreakPointHandler(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E3A00
 * Size:	000134
 */
void GXCPInterruptHandler(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x2E0(r1)
  stw       r31, 0x2DC(r1)
  mr        r31, r4
  lwz       r5, -0x714C(r13)
  lwz       r3, -0x6D70(r2)
  lhz       r0, 0x0(r5)
  stw       r0, 0xC(r3)
  lwz       r0, 0x8(r3)
  rlwinm.   r0,r0,29,31,31
  beq-      .loc_0x64
  lwz       r0, 0xC(r3)
  rlwinm.   r0,r0,31,31,31
  beq-      .loc_0x64
  lwz       r3, -0x7120(r13)
  bl        0xEAB4
  li        r0, 0
  stw       r0, -0x7118(r13)
  li        r3, 0x1
  li        r4, 0x1
  bl        0x6F0
  li        r3, 0x1
  li        r4, 0
  bl        0x6B4

.loc_0x64:
  lwz       r3, -0x6D70(r2)
  lwz       r0, 0x8(r3)
  rlwinm.   r0,r0,30,31,31
  beq-      .loc_0xB4
  lwz       r0, 0xC(r3)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0xB4
  lwz       r5, -0x7110(r13)
  li        r3, 0
  li        r4, 0x1
  addi      r0, r5, 0x1
  stw       r0, -0x7110(r13)
  bl        0x680
  li        r3, 0x1
  li        r4, 0
  bl        0x6A4
  li        r0, 0x1
  lwz       r3, -0x7120(r13)
  stw       r0, -0x7118(r13)
  bl        0xECCC

.loc_0xB4:
  lwz       r3, -0x6D70(r2)
  lwz       r4, 0x8(r3)
  rlwinm.   r0,r4,27,31,31
  beq-      .loc_0x120
  lwz       r0, 0xC(r3)
  rlwinm.   r0,r0,28,31,31
  beq-      .loc_0x120
  li        r0, 0
  rlwimi    r4,r0,5,26,26
  stw       r4, 0x8(r3)
  lwz       r0, 0x8(r3)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x2(r3)
  lwz       r0, -0x7114(r13)
  cmplwi    r0, 0
  beq-      .loc_0x120
  addi      r3, r1, 0x10
  bl        0x9674
  addi      r3, r1, 0x10
  bl        0x94A4
  lwz       r12, -0x7114(r13)
  mtlr      r12
  blrl      
  addi      r3, r1, 0x10
  bl        0x9658
  mr        r3, r31
  bl        0x9488

.loc_0x120:
  lwz       r0, 0x2E4(r1)
  lwz       r31, 0x2DC(r1)
  addi      r1, r1, 0x2E0
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800E3B34
 * Size:	00006C
 */
void GXInitFifoBase(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  subi      r0, r5, 0x4
  stwu      r1, -0x20(r1)
  stw       r31, 0x1C(r1)
  addi      r31, r4, 0
  add       r0, r31, r0
  stw       r30, 0x18(r1)
  addi      r30, r3, 0
  subi      r4, r5, 0x4000
  stw       r31, 0x0(r3)
  stw       r0, 0x4(r3)
  li        r0, 0
  stw       r5, 0x8(r3)
  rlwinm    r5,r5,31,1,26
  stw       r0, 0x1C(r30)
  bl        0x9C
  addi      r3, r30, 0
  addi      r4, r31, 0
  addi      r5, r31, 0
  bl        .loc_0x6C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  addi      r1, r1, 0x20
  mtlr      r0
  blr       

.loc_0x6C:
*/
}

/*
 * --INFO--
 * Address:	800E3BA0
 * Size:	000070
 */
void GXInitFifoPtrs(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x28(r1)
  stw       r31, 0x24(r1)
  addi      r31, r5, 0
  stw       r30, 0x20(r1)
  addi      r30, r4, 0
  stw       r29, 0x1C(r1)
  addi      r29, r3, 0
  bl        0xB074
  stw       r30, 0x14(r29)
  sub       r0, r31, r30
  stw       r31, 0x18(r29)
  stw       r0, 0x1C(r29)
  lwz       r4, 0x1C(r29)
  cmpwi     r4, 0
  bge-      .loc_0x50
  lwz       r0, 0x8(r29)
  add       r0, r4, r0
  stw       r0, 0x1C(r29)

.loc_0x50:
  bl        0xB070
  lwz       r0, 0x2C(r1)
  lwz       r31, 0x24(r1)
  lwz       r30, 0x20(r1)
  lwz       r29, 0x1C(r1)
  addi      r1, r1, 0x28
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800E3C10
 * Size:	00000C
 */
void GXInitFifoLimits(void)
{
/*
.loc_0x0:
  stw       r4, 0xC(r3)
  stw       r5, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E3C1C
 * Size:	000128
 */
void GXSetCPUFifo(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  stw       r30, 0x10(r1)
  mr        r30, r3
  bl        0xB004
  lwz       r0, -0x7124(r13)
  addi      r31, r3, 0
  stw       r30, -0x7128(r13)
  cmplw     r30, r0
  bne-      .loc_0x9C
  lwz       r0, 0x0(r30)
  li        r8, 0
  lwz       r3, -0x7150(r13)
  li        r6, 0
  rlwinm    r0,r0,0,2,31
  stw       r0, 0xC(r3)
  li        r0, 0x1
  li        r3, 0x1
  lwz       r7, 0x4(r30)
  li        r4, 0x1
  lwz       r5, -0x7150(r13)
  rlwinm    r7,r7,0,2,31
  stw       r7, 0x10(r5)
  lwz       r7, 0x18(r30)
  lwz       r5, -0x7150(r13)
  rlwimi    r8,r7,0,6,26
  addi      r7, r8, 0
  rlwimi    r7,r6,26,5,5
  stw       r7, 0x14(r5)
  stb       r0, -0x711C(r13)
  bl        0x4A8
  li        r3, 0x1
  li        r4, 0
  bl        0x46C
  li        r3, 0x1
  bl        0x430
  b         .loc_0x104

.loc_0x9C:
  lbz       r0, -0x711C(r13)
  cmplwi    r0, 0
  beq-      .loc_0xB8
  li        r3, 0
  bl        0x418
  li        r0, 0
  stb       r0, -0x711C(r13)

.loc_0xB8:
  li        r3, 0
  li        r4, 0
  bl        0x438
  lwz       r4, 0x0(r30)
  li        r5, 0
  lwz       r3, -0x7150(r13)
  li        r0, 0
  rlwinm    r4,r4,0,2,31
  stw       r4, 0xC(r3)
  lwz       r4, 0x4(r30)
  lwz       r3, -0x7150(r13)
  rlwinm    r4,r4,0,2,31
  stw       r4, 0x10(r3)
  lwz       r4, 0x18(r30)
  lwz       r3, -0x7150(r13)
  rlwimi    r5,r4,0,6,26
  addi      r4, r5, 0
  rlwimi    r4,r0,26,5,5
  stw       r4, 0x14(r3)

.loc_0x104:
  bl        -0xF790
  mr        r3, r31
  bl        0xAF38
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
 * Address:	800E3D44
 * Size:	000178
 */
void GXSetGPFifo(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  stw       r30, 0x10(r1)
  mr        r30, r3
  bl        0xAEDC
  mr        r31, r3
  bl        0x358
  li        r3, 0
  li        r4, 0
  bl        0x3A4
  stw       r30, -0x7124(r13)
  lwz       r3, -0x714C(r13)
  lwz       r0, 0x0(r30)
  sth       r0, 0x20(r3)
  lwz       r0, 0x4(r30)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x24(r3)
  lwz       r0, 0x1C(r30)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x30(r3)
  lwz       r0, 0x18(r30)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x34(r3)
  lwz       r0, 0x14(r30)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x38(r3)
  lwz       r0, 0xC(r30)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x28(r3)
  lwz       r0, 0x10(r30)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x2C(r3)
  lwz       r0, 0x0(r30)
  lwz       r3, -0x714C(r13)
  rlwinm    r0,r0,16,18,31
  sth       r0, 0x22(r3)
  lwz       r0, 0x4(r30)
  lwz       r3, -0x714C(r13)
  rlwinm    r0,r0,16,18,31
  sth       r0, 0x26(r3)
  lwz       r0, 0x1C(r30)
  lwz       r3, -0x714C(r13)
  srawi     r0, r0, 0x10
  sth       r0, 0x32(r3)
  lwz       r0, 0x18(r30)
  lwz       r3, -0x714C(r13)
  rlwinm    r0,r0,16,18,31
  sth       r0, 0x36(r3)
  lwz       r0, 0x14(r30)
  lwz       r3, -0x714C(r13)
  rlwinm    r0,r0,16,18,31
  sth       r0, 0x3A(r3)
  lwz       r0, 0xC(r30)
  lwz       r3, -0x714C(r13)
  rlwinm    r0,r0,16,16,31
  sth       r0, 0x2A(r3)
  lwz       r0, 0x10(r30)
  lwz       r3, -0x714C(r13)
  rlwinm    r0,r0,16,16,31
  sth       r0, 0x2E(r3)
  bl        -0xF8AC
  lwz       r3, -0x7128(r13)
  lwz       r0, -0x7124(r13)
  cmplw     r3, r0
  bne-      .loc_0x12C
  li        r0, 0x1
  stb       r0, -0x711C(r13)
  li        r3, 0x1
  li        r4, 0
  bl        0x2B4
  li        r3, 0x1
  bl        0x278
  b         .loc_0x148

.loc_0x12C:
  li        r0, 0
  stb       r0, -0x711C(r13)
  li        r3, 0
  li        r4, 0
  bl        0x294
  li        r3, 0
  bl        0x258

.loc_0x148:
  li        r3, 0x1
  li        r4, 0x1
  bl        0x2B0
  bl        0x200
  mr        r3, r31
  bl        0xADC0
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
 * Address:	800E3EBC
 * Size:	000034
 */
void GXSaveCPUFifo(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  mr        r31, r3
  bl        0x119C
  mr        r3, r31
  bl        .loc_0x34
  lwz       r0, 0x1C(r1)
  lwz       r31, 0x14(r1)
  addi      r1, r1, 0x18
  mtlr      r0
  blr       

.loc_0x34:
*/
}

/*
 * --INFO--
 * Address:	800E3EF0
 * Size:	0000C8
 */
void __GXSaveCPUFifoAux(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  mr        r31, r3
  bl        0xAD34
  lwz       r4, -0x7150(r13)
  lwz       r4, 0xC(r4)
  subis     r0, r4, 0x8000
  stw       r0, 0x0(r31)
  lwz       r4, -0x7150(r13)
  lwz       r4, 0x10(r4)
  subis     r0, r4, 0x8000
  stw       r0, 0x4(r31)
  lwz       r4, -0x7150(r13)
  lwz       r0, 0x14(r4)
  rlwinm    r4,r0,0,6,4
  subis     r0, r4, 0x8000
  stw       r0, 0x18(r31)
  lbz       r0, -0x711C(r13)
  cmplwi    r0, 0
  beq-      .loc_0x88
  lwz       r5, -0x714C(r13)
  lhz       r4, 0x3A(r5)
  lhz       r5, 0x38(r5)
  rlwimi    r5,r4,16,0,15
  subis     r0, r5, 0x8000
  stw       r0, 0x14(r31)
  lwz       r5, -0x714C(r13)
  lhz       r4, 0x32(r5)
  lhz       r0, 0x30(r5)
  rlwimi    r0,r4,16,0,15
  stw       r0, 0x1C(r31)
  b         .loc_0xB0

.loc_0x88:
  lwz       r4, 0x14(r31)
  lwz       r0, 0x18(r31)
  sub       r0, r0, r4
  stw       r0, 0x1C(r31)
  lwz       r4, 0x1C(r31)
  cmpwi     r4, 0
  bge-      .loc_0xB0
  lwz       r0, 0x8(r31)
  add       r0, r4, r0
  stw       r0, 0x1C(r31)

.loc_0xB0:
  bl        0xACC0
  lwz       r0, 0x1C(r1)
  lwz       r31, 0x14(r1)
  addi      r1, r1, 0x18
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void GXSaveGPFifo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E3FB8
 * Size:	000050
 */
void GXGetGPStatus(void)
{
/*
.loc_0x0:
  lwz       r9, -0x714C(r13)
  lwz       r8, -0x6D70(r2)
  lhz       r0, 0x0(r9)
  stw       r0, 0xC(r8)
  lwz       r0, 0xC(r8)
  rlwinm    r0,r0,0,31,31
  stb       r0, 0x0(r3)
  lwz       r0, 0xC(r8)
  rlwinm    r0,r0,31,31,31
  stb       r0, 0x0(r4)
  lwz       r0, 0xC(r8)
  rlwinm    r0,r0,30,31,31
  stb       r0, 0x0(r5)
  lwz       r0, 0xC(r8)
  rlwinm    r0,r0,29,31,31
  stb       r0, 0x0(r6)
  lwz       r0, 0xC(r8)
  rlwinm    r0,r0,28,31,31
  stb       r0, 0x0(r7)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000114
 */
void GXGetFifoStatus(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000098
 */
void GXGetFifoPtrs(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetFifoBase(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetFifoSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000014
 */
void GXGetFifoLimits(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4008
 * Size:	000044
 */
void GXSetBreakPtCallback(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0x18(r1)
  stw       r31, 0x14(r1)
  stw       r30, 0x10(r1)
  mr        r30, r3
  lwz       r31, -0x7114(r13)
  bl        0xAC14
  stw       r30, -0x7114(r13)
  bl        0xAC34
  mr        r3, r31
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
 * Address:	........
 * Size:	00008C
 */
void GXEnableBreakPt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000054
 */
void GXDisableBreakPt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E404C
 * Size:	00004C
 */
void __GXFifoInit(void)
{
/*
.loc_0x0:
  mflr      r0
  lis       r3, 0x800E
  stw       r0, 0x4(r1)
  addi      r4, r3, 0x3A00
  li        r3, 0x11
  stwu      r1, -0x8(r1)
  bl        0xAC20
  li        r3, 0x4000
  bl        0xB01C
  bl        0xD954
  li        r0, 0
  stw       r3, -0x7120(r13)
  stw       r0, -0x7118(r13)
  stw       r0, -0x7128(r13)
  stw       r0, -0x7124(r13)
  lwz       r0, 0xC(r1)
  addi      r1, r1, 0x8
  mtlr      r0
  blr
*/
}

/*
 * --INFO--
 * Address:	800E4098
 * Size:	000024
 */
void __GXFifoReadEnable(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6D70(r2)
  li        r0, 0x1
  lwz       r3, 0x8(r4)
  rlwimi    r3,r0,0,31,31
  stw       r3, 0x8(r4)
  lwz       r0, 0x8(r4)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E40BC
 * Size:	000024
 */
void __GXFifoReadDisable(void)
{
/*
.loc_0x0:
  lwz       r4, -0x6D70(r2)
  li        r0, 0
  lwz       r3, 0x8(r4)
  rlwimi    r3,r0,0,31,31
  stw       r3, 0x8(r4)
  lwz       r0, 0x8(r4)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E40E0
 * Size:	000034
 */
void __GXFifoLink(void)
{
/*
.loc_0x0:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x10
  li        r4, 0x1
  b         .loc_0x14

.loc_0x10:
  li        r4, 0

.loc_0x14:
  lwz       r3, -0x6D70(r2)
  lwz       r0, 0x8(r3)
  rlwimi    r0,r4,4,27,27
  stw       r0, 0x8(r3)
  lwz       r0, 0x8(r3)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E4114
 * Size:	000030
 */
void __GXWriteFifoIntEnable(void)
{
/*
.loc_0x0:
  lwz       r5, -0x6D70(r2)
  rlwinm    r0,r4,0,24,31
  lwz       r4, 0x8(r5)
  rlwimi    r4,r3,2,29,29
  stw       r4, 0x8(r5)
  lwz       r3, 0x8(r5)
  rlwimi    r3,r0,3,28,28
  stw       r3, 0x8(r5)
  lwz       r0, 0x8(r5)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x2(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E4144
 * Size:	000030
 */
void __GXWriteFifoIntReset(void)
{
/*
.loc_0x0:
  lwz       r5, -0x6D70(r2)
  rlwinm    r0,r4,0,24,31
  lwz       r4, 0x10(r5)
  rlwimi    r4,r3,0,31,31
  stw       r4, 0x10(r5)
  lwz       r3, 0x10(r5)
  rlwimi    r3,r0,1,30,30
  stw       r3, 0x10(r5)
  lwz       r0, 0x10(r5)
  lwz       r3, -0x714C(r13)
  sth       r0, 0x4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000030
 */
void __GXInsaneWatermark(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4174
 * Size:	000100
 */
void __GXCleanGPFifo(void)
{
/*
.loc_0x0:
  mflr      r0
  stw       r0, 0x4(r1)
  stwu      r1, -0xA8(r1)
  stw       r31, 0xA4(r1)
  stw       r30, 0xA0(r1)
  stw       r29, 0x9C(r1)
  bl        0xF0
  mr.       r31, r3
  beq-      .loc_0xE4
  bl        .loc_0x100
  li        r0, 0x10
  lwz       r29, 0x0(r31)
  mtctr     r0
  addi      r30, r3, 0
  addi      r5, r1, 0xC
  subi      r4, r31, 0x8

.loc_0x40:
  lwzu      r3, 0x8(r4)
  lwz       r0, 0x4(r4)
  stwu      r3, 0x8(r5)
  stw       r0, 0x4(r5)
  bdnz+     .loc_0x40
  bl        0xAA70
  stw       r29, 0x28(r1)
  li        r0, 0
  stw       r29, 0x2C(r1)
  stw       r0, 0x30(r1)
  lwz       r4, 0x30(r1)
  cmpwi     r4, 0
  bge-      .loc_0x80
  lwz       r0, 0x1C(r1)
  add       r0, r4, r0
  stw       r0, 0x30(r1)

.loc_0x80:
  bl        0xAA6C
  addi      r3, r1, 0x14
  bl        -0x4B8
  cmplw     r30, r31
  bne-      .loc_0x9C
  addi      r3, r1, 0x14
  bl        -0x5F0

.loc_0x9C:
  bl        0xAA28
  stw       r29, 0x14(r31)
  li        r0, 0
  stw       r29, 0x18(r31)
  stw       r0, 0x1C(r31)
  lwz       r4, 0x1C(r31)
  cmpwi     r4, 0
  bge-      .loc_0xC8
  lwz       r0, 0x8(r31)
  add       r0, r4, r0
  stw       r0, 0x1C(r31)

.loc_0xC8:
  bl        0xAA24
  mr        r3, r31
  bl        -0x500
  cmplw     r30, r31
  bne-      .loc_0xE4
  mr        r3, r30
  bl        -0x638

.loc_0xE4:
  lwz       r0, 0xAC(r1)
  lwz       r31, 0xA4(r1)
  lwz       r30, 0xA0(r1)
  lwz       r29, 0x9C(r1)
  addi      r1, r1, 0xA8
  mtlr      r0
  blr       

.loc_0x100:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00004C
 */
void GXSetCurrentGXThread(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetCurrentGXThread(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E4274
 * Size:	000008
 */
void GXGetCPUFifo(void)
{
/*
.loc_0x0:
  lwz       r3, -0x7128(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	800E427C
 * Size:	000008
 */
void GXGetGPFifo(void)
{
/*
.loc_0x0:
  lwz       r3, -0x7124(r13)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void GXGetOverflowCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void GXResetOverflowCount(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000108
 */
void GXRedirectWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0001A0
 */
void GXRestoreWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}