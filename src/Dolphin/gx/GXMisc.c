

/*
 * --INFO--
 * Address:	800E4FD8
 * Size:	000094
 */
void GXSetMisc(void)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x64
	  bge-      .loc_0x1C
	  cmpwi     r3, 0
	  beqlr-
	  bge-      .loc_0x28
	  blr

	.loc_0x1C:
	  cmpwi     r3, 0x4
	  bgelr-
	  b         .loc_0x7C

	.loc_0x28:
	  lwz       r5, -0x6D70(r2)
	  li        r0, 0x1
	  sth       r4, 0x4(r5)
	  lhz       r3, 0x4(r5)
	  cntlzw    r3, r3
	  rlwinm    r3,r3,27,16,31
	  sth       r3, 0x0(r5)
	  sth       r0, 0x2(r5)
	  lhz       r0, 0x4(r5)
	  cmplwi    r0, 0
	  beqlr-
	  lwz       r0, 0x5AC(r5)
	  ori       r0, r0, 0x8
	  stw       r0, 0x5AC(r5)
	  blr

	.loc_0x64:
	  neg       r4, r4
	  lwz       r3, -0x6D70(r2)
	  subic     r0, r4, 0x1
	  subfe     r0, r0, r4
	  stb       r0, 0x5A9(r3)
	  blr

	.loc_0x7C:
	  neg       r4, r4
	  lwz       r3, -0x6D70(r2)
	  subic     r0, r4, 0x1
	  subfe     r0, r0, r4
	  stb       r0, 0x5AA(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E506C
 * Size:	00005C
 */
void GXFlush(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x8(r1)
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x5AC(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x20
	  bl        0x880

	.loc_0x20:
	  li        r0, 0
	  lis       r3, 0xCC01
	  stw       r0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  bl        -0x10B24
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void GXResetWriteGatherPipe(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00007C
 */
void __GXAbortWait(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C4
 */
void __GXAbortWaitPECopyDone(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E50C8
 * Size:	00016C
 */
void __GXAbort(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  lwz       r3, -0x6D70(r2)
	  lbz       r0, 0x5AA(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  bl        -0xE6C
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lwz       r3, -0x7144(r13)
	  addi      r6, r3, 0x4E
	  lhz       r4, 0x4E(r3)
	  addi      r5, r3, 0x50

	.loc_0x3C:
	  mr        r0, r4
	  lhz       r4, 0x0(r6)
	  lhz       r3, 0x0(r5)
	  cmplw     r4, r0
	  bne+      .loc_0x3C
	  rlwinm    r0,r4,16,0,15
	  or        r27, r0, r3

	.loc_0x58:
	  bl        0xDA70
	  li        r0, 0
	  addi      r31, r4, 0
	  addi      r30, r3, 0
	  xoris     r28, r0, 0x8000
	  li        r29, 0x8

	.loc_0x70:
	  bl        0xDA58
	  subc      r4, r4, r31
	  subfe     r0, r30, r3
	  xoris     r3, r0, 0x8000
	  subc      r0, r29, r4
	  subfe     r3, r3, r28
	  subfe     r3, r28, r28
	  neg.      r3, r3
	  beq+      .loc_0x70
	  lwz       r3, -0x7144(r13)
	  addi      r6, r3, 0x4E
	  lhz       r4, 0x4E(r3)
	  addi      r5, r3, 0x50

	.loc_0xA4:
	  mr        r0, r4
	  lhz       r4, 0x0(r6)
	  lhz       r3, 0x0(r5)
	  cmplw     r4, r0
	  bne+      .loc_0xA4
	  rlwinm    r0,r4,16,0,15
	  or        r0, r0, r3
	  cmplw     r0, r27
	  mr        r27, r0
	  bne+      .loc_0x58

	.loc_0xCC:
	  lis       r3, 0xCC00
	  li        r0, 0x1
	  addi      r27, r3, 0x3000
	  stwu      r0, 0x18(r27)
	  bl        0xD9EC
	  li        r0, 0
	  addi      r31, r4, 0
	  addi      r30, r3, 0
	  xoris     r28, r0, 0x8000
	  li        r29, 0x32

	.loc_0xF4:
	  bl        0xD9D4
	  subc      r4, r4, r31
	  subfe     r0, r30, r3
	  xoris     r3, r0, 0x8000
	  subc      r0, r29, r4
	  subfe     r3, r3, r28
	  subfe     r3, r28, r28
	  neg.      r3, r3
	  beq+      .loc_0xF4
	  li        r30, 0
	  stw       r30, 0x0(r27)
	  bl        0xD9A8
	  addi      r28, r4, 0
	  addi      r29, r3, 0
	  xoris     r31, r30, 0x8000
	  li        r30, 0x5

	.loc_0x134:
	  bl        0xD994
	  subc      r4, r4, r28
	  subfe     r0, r29, r3
	  xoris     r3, r0, 0x8000
	  subc      r0, r30, r4
	  subfe     r3, r3, r31
	  subfe     r3, r31, r31
	  neg.      r3, r3
	  beq+      .loc_0x134
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5234
 * Size:	000170
 */
void GXAbortFrame(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stmw      r27, 0x14(r1)
	  lwz       r3, -0x6D70(r2)
	  lbz       r0, 0x5AA(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xCC
	  bl        -0xFD8
	  cmplwi    r3, 0
	  beq-      .loc_0xCC
	  lwz       r3, -0x7144(r13)
	  addi      r6, r3, 0x4E
	  lhz       r4, 0x4E(r3)
	  addi      r5, r3, 0x50

	.loc_0x3C:
	  mr        r0, r4
	  lhz       r4, 0x0(r6)
	  lhz       r3, 0x0(r5)
	  cmplw     r4, r0
	  bne+      .loc_0x3C
	  rlwinm    r0,r4,16,0,15
	  or        r27, r0, r3

	.loc_0x58:
	  bl        0xD904
	  li        r0, 0
	  addi      r31, r4, 0
	  addi      r30, r3, 0
	  xoris     r28, r0, 0x8000
	  li        r29, 0x8

	.loc_0x70:
	  bl        0xD8EC
	  subc      r4, r4, r31
	  subfe     r0, r30, r3
	  xoris     r3, r0, 0x8000
	  subc      r0, r29, r4
	  subfe     r3, r3, r28
	  subfe     r3, r28, r28
	  neg.      r3, r3
	  beq+      .loc_0x70
	  lwz       r3, -0x7144(r13)
	  addi      r6, r3, 0x4E
	  lhz       r4, 0x4E(r3)
	  addi      r5, r3, 0x50

	.loc_0xA4:
	  mr        r0, r4
	  lhz       r4, 0x0(r6)
	  lhz       r3, 0x0(r5)
	  cmplw     r4, r0
	  bne+      .loc_0xA4
	  rlwinm    r0,r4,16,0,15
	  or        r0, r0, r3
	  cmplw     r0, r27
	  mr        r27, r0
	  bne+      .loc_0x58

	.loc_0xCC:
	  lis       r3, 0xCC00
	  li        r0, 0x1
	  addi      r27, r3, 0x3000
	  stwu      r0, 0x18(r27)
	  bl        0xD880
	  li        r0, 0
	  addi      r31, r4, 0
	  addi      r30, r3, 0
	  xoris     r28, r0, 0x8000
	  li        r29, 0x32

	.loc_0xF4:
	  bl        0xD868
	  subc      r4, r4, r31
	  subfe     r0, r30, r3
	  xoris     r3, r0, 0x8000
	  subc      r0, r29, r4
	  subfe     r3, r3, r28
	  subfe     r3, r28, r28
	  neg.      r3, r3
	  beq+      .loc_0xF4
	  li        r30, 0
	  stw       r30, 0x0(r27)
	  bl        0xD83C
	  addi      r28, r4, 0
	  addi      r29, r3, 0
	  xoris     r31, r30, 0x8000
	  li        r30, 0x5

	.loc_0x134:
	  bl        0xD828
	  subc      r4, r4, r28
	  subfe     r0, r29, r3
	  xoris     r3, r0, 0x8000
	  subc      r0, r30, r4
	  subfe     r3, r3, r31
	  subfe     r3, r31, r31
	  neg.      r3, r3
	  beq+      .loc_0x134
	  bl        -0x1218
	  lmw       r27, 0x14(r1)
	  lwz       r0, 0x2C(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E53A4
 * Size:	0000B4
 */
void GXSetDrawSync(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  bl        0x987C
	  li        r6, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  rlwinm    r0,r30,0,16,31
	  stb       r6, -0x8000(r5)
	  oris      r7, r0, 0x4800
	  stw       r7, -0x8000(r5)
	  rlwimi    r7,r30,0,16,31
	  li        r0, 0x47
	  stb       r6, -0x8000(r5)
	  rlwimi    r7,r0,24,0,7
	  mr        r30, r3
	  stw       r7, -0x8000(r5)
	  lwz       r0, 0x5AC(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x60
	  bl        0x508

	.loc_0x60:
	  li        r31, 0
	  lis       r3, 0xCC01
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  bl        -0x10E9C
	  mr        r3, r30
	  bl        0x982C
	  lwz       r3, -0x6D70(r2)
	  sth       r31, 0x2(r3)
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
 * Size:	00000C
 */
void GXReadDrawSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5458
 * Size:	000098
 */
void GXSetDrawDone(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  bl        0x97CC
	  li        r0, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r6, 0xCC01
	  lis       r5, 0x4500
	  stb       r0, -0x8000(r6)
	  addi      r0, r5, 0x2
	  stw       r0, -0x8000(r6)
	  mr        r30, r3
	  lwz       r0, 0x5AC(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  bl        0x46C

	.loc_0x48:
	  li        r31, 0
	  lis       r3, 0xCC01
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  stw       r31, -0x8000(r3)
	  bl        -0x10F38
	  stb       r31, -0x7100(r13)
	  mr        r3, r30
	  bl        0x978C
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
 * Address:	800E54F0
 * Size:	00004C
 */
void GXWaitDrawDone(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  bl        0x9738
	  mr        r31, r3
	  b         .loc_0x24

	.loc_0x1C:
	  subi      r3, r13, 0x70FC
	  bl        0xD3DC

	.loc_0x24:
	  lbz       r0, -0x7100(r13)
	  cmplwi    r0, 0
	  beq+      .loc_0x1C
	  mr        r3, r31
	  bl        0x973C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E553C
 * Size:	000080
 */
void GXDrawDone(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  bl        0x96EC
	  li        r0, 0x61
	  lis       r5, 0xCC01
	  lis       r4, 0x4500
	  stb       r0, -0x8000(r5)
	  addi      r0, r4, 0x2
	  stw       r0, -0x8000(r5)
	  mr        r31, r3
	  bl        -0x500
	  li        r0, 0
	  stb       r0, -0x7100(r13)
	  mr        r3, r31
	  bl        0x96E4
	  bl        0x96B8
	  mr        r31, r3
	  b         .loc_0x58

	.loc_0x50:
	  subi      r3, r13, 0x70FC
	  bl        0xD35C

	.loc_0x58:
	  lbz       r0, -0x7100(r13)
	  cmplwi    r0, 0
	  beq+      .loc_0x50
	  mr        r3, r31
	  bl        0x96BC
	  lwz       r0, 0x1C(r1)
	  lwz       r31, 0x14(r1)
	  addi      r1, r1, 0x18
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E55BC
 * Size:	000024
 */
void GXPixModeSync(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  lwz       r3, 0x1DC(r4)
	  stw       r3, -0x8000(r5)
	  sth       r0, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXTexModeSync(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E55E0
 * Size:	000014
 */
void GXPokeAlphaMode(void)
{
	/*
	.loc_0x0:
	  lwz       r5, -0x7148(r13)
	  rlwinm    r0,r4,0,24,31
	  rlwimi    r0,r3,8,0,23
	  sth       r0, 0x6(r5)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E55F4
 * Size:	000020
 */
void GXPokeAlphaRead(void)
{
	/*
	.loc_0x0:
	  li        r5, 0
	  lwz       r4, -0x7148(r13)
	  rlwimi    r5,r3,0,30,31
	  li        r0, 0x1
	  addi      r3, r5, 0
	  rlwimi    r3,r0,2,29,29
	  sth       r3, 0x8(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5614
 * Size:	000018
 */
void GXPokeAlphaUpdate(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x7148(r13)
	  rlwinm    r0,r3,0,24,31
	  lhz       r3, 0x2(r4)
	  rlwimi    r3,r0,4,27,27
	  sth       r3, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E562C
 * Size:	000064
 */
void GXPokeBlendMode(void)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x7148(r13)
	  cmpwi     r3, 0x1
	  li        r9, 0x1
	  lhz       r10, 0x2(r7)
	  beq-      .loc_0x20
	  cmpwi     r3, 0x3
	  beq-      .loc_0x20
	  li        r9, 0

	.loc_0x20:
	  subfic    r0, r3, 0x3
	  lwz       r7, -0x7148(r13)
	  cntlzw    r8, r0
	  subfic    r0, r3, 0x2
	  rlwimi    r10,r9,0,31,31
	  rlwinm    r3,r8,27,5,31
	  addi      r8, r10, 0
	  cntlzw    r0, r0
	  rlwimi    r8,r3,11,20,20
	  rlwimi    r8,r0,28,30,30
	  rlwimi    r8,r6,12,16,19
	  rlwimi    r8,r4,8,21,23
	  li        r0, 0x41
	  rlwimi    r8,r5,5,24,26
	  rlwimi    r8,r0,24,0,7
	  sth       r8, 0x2(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5690
 * Size:	000018
 */
void GXPokeColorUpdate(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x7148(r13)
	  rlwinm    r0,r3,0,24,31
	  lhz       r3, 0x2(r4)
	  rlwimi    r3,r0,3,28,28
	  sth       r3, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E56A8
 * Size:	000024
 */
void GXPokeDstAlpha(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r4,0,24,31
	  lwz       r4, -0x7148(r13)
	  li        r5, 0
	  rlwimi    r5,r0,0,24,31
	  rlwinm    r0,r3,0,24,31
	  addi      r3, r5, 0
	  rlwimi    r3,r0,8,23,23
	  sth       r3, 0x4(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E56CC
 * Size:	000018
 */
void GXPokeDither(void)
{
	/*
	.loc_0x0:
	  lwz       r4, -0x7148(r13)
	  rlwinm    r0,r3,0,24,31
	  lhz       r3, 0x2(r4)
	  rlwimi    r3,r0,2,29,29
	  sth       r3, 0x2(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E56E4
 * Size:	000020
 */
void GXPokeZMode(void)
{
	/*
	.loc_0x0:
	  rlwinm    r0,r3,0,24,31
	  lwz       r3, -0x7148(r13)
	  li        r6, 0
	  rlwimi    r6,r0,0,31,31
	  rlwimi    r6,r4,1,28,30
	  rlwimi    r6,r5,4,27,27
	  sth       r6, 0x0(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXPeekARGB(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void GXPokeARGB(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void GXPeekZ(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void GXPokeZ(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5704
 * Size:	000044
 */
void GXSetDrawSyncCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r31, -0x7108(r13)
	  bl        0x9518
	  stw       r30, -0x7108(r13)
	  bl        0x9538
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
 * Address:	800E5748
 * Size:	000088
 */
void GXTokenInterruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2E0(r1)
	  stw       r31, 0x2DC(r1)
	  stw       r30, 0x2D8(r1)
	  mr        r30, r4
	  lwz       r0, -0x7108(r13)
	  lwz       r3, -0x7148(r13)
	  cmplwi    r0, 0
	  lhz       r31, 0xE(r3)
	  beq-      .loc_0x5C
	  addi      r3, r1, 0x10
	  bl        0x79F4
	  addi      r3, r1, 0x10
	  bl        0x7824
	  lwz       r12, -0x7108(r13)
	  addi      r3, r31, 0
	  mtlr      r12
	  blrl
	  addi      r3, r1, 0x10
	  bl        0x79D4
	  mr        r3, r30
	  bl        0x7804

	.loc_0x5C:
	  lwz       r3, -0x7148(r13)
	  li        r0, 0x1
	  lhz       r4, 0xA(r3)
	  rlwimi    r4,r0,2,29,29
	  sth       r4, 0xA(r3)
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  lwz       r30, 0x2D8(r1)
	  addi      r1, r1, 0x2E0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E57D0
 * Size:	000044
 */
void GXSetDrawDoneCallback(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x18(r1)
	  stw       r31, 0x14(r1)
	  stw       r30, 0x10(r1)
	  mr        r30, r3
	  lwz       r31, -0x7104(r13)
	  bl        0x944C
	  stw       r30, -0x7104(r13)
	  bl        0x946C
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
 * Address:	800E5814
 * Size:	000080
 */
void GXFinishInterruptHandler(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  li        r3, 0x1
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x2E0(r1)
	  stw       r31, 0x2DC(r1)
	  addi      r31, r4, 0
	  lwz       r5, -0x7148(r13)
	  lhz       r0, 0xA(r5)
	  rlwimi    r0,r3,3,28,28
	  sth       r0, 0xA(r5)
	  lwz       r0, -0x7104(r13)
	  stb       r3, -0x7100(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x64
	  addi      r3, r1, 0x10
	  bl        0x791C
	  addi      r3, r1, 0x10
	  bl        0x774C
	  lwz       r12, -0x7104(r13)
	  mtlr      r12
	  blrl
	  addi      r3, r1, 0x10
	  bl        0x7900
	  mr        r3, r31
	  bl        0x7730

	.loc_0x64:
	  subi      r3, r13, 0x70FC
	  bl        0xD15C
	  lwz       r0, 0x2E4(r1)
	  lwz       r31, 0x2DC(r1)
	  addi      r1, r1, 0x2E0
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5894
 * Size:	000074
 */
void __GXPEInit(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  lis       r3, 0x800E
	  stw       r0, 0x4(r1)
	  addi      r4, r3, 0x5748
	  li        r3, 0x12
	  stwu      r1, -0x8(r1)
	  bl        0x93D8
	  lis       r3, 0x800E
	  addi      r4, r3, 0x5814
	  li        r3, 0x13
	  bl        0x93C8
	  subi      r3, r13, 0x70FC
	  bl        0xC0F0
	  li        r3, 0x2000
	  bl        0x97BC
	  li        r3, 0x1000
	  bl        0x97B4
	  lwz       r3, -0x7148(r13)
	  li        r0, 0x1
	  lhz       r4, 0xA(r3)
	  rlwimi    r4,r0,2,29,29
	  rlwimi    r4,r0,3,28,28
	  rlwimi    r4,r0,0,31,31
	  rlwimi    r4,r0,1,30,30
	  sth       r4, 0xA(r3)
	  lwz       r0, 0xC(r1)
	  addi      r1, r1, 0x8
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000134
 */
void GXCompressZ16(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	00011C
 */
void GXDecompressZ16(void)
{
	// UNUSED FUNCTION
}
