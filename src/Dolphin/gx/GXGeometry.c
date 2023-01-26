

/*
 * --INFO--
 * Address:	800E5908
 * Size:	000080
 */
void __GXSetDirtyState(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x10(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, -0x6D70(r2)
	  lwz       r31, 0x5AC(r3)
	  rlwinm.   r0,r31,0,31,31
	  beq-      .loc_0x24
	  bl        0x2148

	.loc_0x24:
	  rlwinm.   r0,r31,0,30,30
	  beq-      .loc_0x30
	  bl        0x2AF0

	.loc_0x30:
	  rlwinm.   r0,r31,0,29,29
	  beq-      .loc_0x3C
	  bl        0x2E0

	.loc_0x3C:
	  rlwinm.   r0,r31,0,28,28
	  beq-      .loc_0x48
	  bl        -0x145C

	.loc_0x48:
	  rlwinm.   r0,r31,0,27,27
	  beq-      .loc_0x54
	  bl        -0xD74

	.loc_0x54:
	  rlwinm.   r0,r31,0,27,28
	  beq-      .loc_0x60
	  bl        -0x13B8

	.loc_0x60:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  stw       r0, 0x5AC(r3)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  addi      r1, r1, 0x10
	  mtlr      r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5988
 * Size:	0000D0
 */
void GXBegin(void)
{
	/*
	.loc_0x0:
	  mflr      r0
	  stw       r0, 0x4(r1)
	  stwu      r1, -0x28(r1)
	  stw       r31, 0x24(r1)
	  stw       r30, 0x20(r1)
	  addi      r30, r5, 0
	  stw       r29, 0x1C(r1)
	  addi      r29, r4, 0
	  stw       r28, 0x18(r1)
	  addi      r28, r3, 0
	  lwz       r6, -0x6D70(r2)
	  lwz       r31, 0x5AC(r6)
	  cmplwi    r31, 0
	  beq-      .loc_0x8C
	  rlwinm.   r0,r31,0,31,31
	  beq-      .loc_0x44
	  bl        0x20A8

	.loc_0x44:
	  rlwinm.   r0,r31,0,30,30
	  beq-      .loc_0x50
	  bl        0x2A50

	.loc_0x50:
	  rlwinm.   r0,r31,0,29,29
	  beq-      .loc_0x5C
	  bl        0x240

	.loc_0x5C:
	  rlwinm.   r0,r31,0,28,28
	  beq-      .loc_0x68
	  bl        -0x14FC

	.loc_0x68:
	  rlwinm.   r0,r31,0,27,27
	  beq-      .loc_0x74
	  bl        -0xE14

	.loc_0x74:
	  rlwinm.   r0,r31,0,27,28
	  beq-      .loc_0x80
	  bl        -0x1458

	.loc_0x80:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0
	  stw       r0, 0x5AC(r3)

	.loc_0x8C:
	  lwz       r3, -0x6D70(r2)
	  lwz       r0, 0x0(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xA0
	  bl        .loc_0xD0

	.loc_0xA0:
	  or        r0, r29, r28
	  lis       r3, 0xCC01
	  stb       r0, -0x8000(r3)
	  sth       r30, -0x8000(r3)
	  lwz       r0, 0x2C(r1)
	  lwz       r31, 0x24(r1)
	  lwz       r30, 0x20(r1)
	  lwz       r29, 0x1C(r1)
	  lwz       r28, 0x18(r1)
	  addi      r1, r1, 0x28
	  mtlr      r0
	  blr

	.loc_0xD0:
	*/
}

/*
 * --INFO--
 * Address:	800E5A58
 * Size:	000088
 */
void __GXSendFlushPrim(void)
{
	/*
	.loc_0x0:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x98
	  lis       r5, 0xCC01
	  lhz       r6, 0x4(r3)
	  li        r4, 0
	  lhz       r3, 0x6(r3)
	  mullw     r7, r6, r3
	  stb       r0, -0x8000(r5)
	  sth       r6, -0x8000(r5)
	  addi      r3, r7, 0x3
	  cmplwi    r7, 0
	  rlwinm    r3,r3,30,2,31
	  ble-      .loc_0x78
	  rlwinm.   r0,r3,29,3,31
	  mtctr     r0
	  beq-      .loc_0x6C

	.loc_0x40:
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  stw       r4, -0x8000(r5)
	  bdnz+     .loc_0x40
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x78

	.loc_0x6C:
	  mtctr     r3

	.loc_0x70:
	  stw       r4, -0x8000(r5)
	  bdnz+     .loc_0x70

	.loc_0x78:
	  lwz       r3, -0x6D70(r2)
	  li        r0, 0x1
	  sth       r0, 0x2(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5AE0
 * Size:	000040
 */
void GXSetLineWidth(void)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x6D70(r2)
	  rlwinm    r0,r3,0,24,31
	  li        r3, 0x61
	  lwz       r6, 0x7C(r7)
	  rlwimi    r6,r0,0,24,31
	  lis       r5, 0xCC01
	  stw       r6, 0x7C(r7)
	  li        r0, 0
	  lwz       r6, 0x7C(r7)
	  rlwimi    r6,r4,16,13,15
	  stw       r6, 0x7C(r7)
	  stb       r3, -0x8000(r5)
	  lwz       r3, 0x7C(r7)
	  stw       r3, -0x8000(r5)
	  sth       r0, 0x2(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00001C
 */
void GXGetLineWidth(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5B20
 * Size:	000040
 */
void GXSetPointSize(void)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x6D70(r2)
	  rlwinm    r0,r3,0,24,31
	  li        r3, 0x61
	  lwz       r6, 0x7C(r7)
	  rlwimi    r6,r0,8,16,23
	  lis       r5, 0xCC01
	  stw       r6, 0x7C(r7)
	  li        r0, 0
	  lwz       r6, 0x7C(r7)
	  rlwimi    r6,r4,19,10,12
	  stw       r6, 0x7C(r7)
	  stb       r3, -0x8000(r5)
	  lwz       r3, 0x7C(r7)
	  stw       r3, -0x8000(r5)
	  sth       r0, 0x2(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000020
 */
void GXGetPointSize(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5B60
 * Size:	000048
 */
void GXEnableTexOffsets(void)
{
	/*
	.loc_0x0:
	  lwz       r7, -0x6D70(r2)
	  rlwinm    r3,r3,2,0,29
	  rlwinm    r0,r5,0,24,31
	  add       r6, r7, r3
	  lwz       r3, 0xB8(r6)
	  rlwimi    r3,r4,18,13,13
	  lis       r4, 0xCC01
	  stw       r3, 0xB8(r6)
	  li        r3, 0x61
	  lwz       r5, 0xB8(r6)
	  rlwimi    r5,r0,19,12,12
	  li        r0, 0
	  stw       r5, 0xB8(r6)
	  stb       r3, -0x8000(r4)
	  lwz       r3, 0xB8(r6)
	  stw       r3, -0x8000(r4)
	  sth       r0, 0x2(r7)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5BA8
 * Size:	000044
 */
void GXSetCullMode(void)
{
	/*
	.loc_0x0:
	  cmpwi     r3, 0x2
	  beq-      .loc_0x20
	  bge-      .loc_0x24
	  cmpwi     r3, 0x1
	  bge-      .loc_0x18
	  b         .loc_0x24

	.loc_0x18:
	  li        r3, 0x2
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0x1

	.loc_0x24:
	  lwz       r4, -0x6D70(r2)
	  lwz       r0, 0x204(r4)
	  rlwimi    r0,r3,14,16,17
	  stw       r0, 0x204(r4)
	  lwz       r0, 0x5AC(r4)
	  ori       r0, r0, 0x4
	  stw       r0, 0x5AC(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000044
 */
void GXGetCullMode(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	800E5BEC
 * Size:	000034
 */
void GXSetCoPlanar(void)
{
	/*
	.loc_0x0:
	  lwz       r6, -0x6D70(r2)
	  li        r4, 0x61
	  lis       r0, 0xFE08
	  lwz       r5, 0x204(r6)
	  rlwimi    r5,r3,19,12,12
	  lis       r3, 0xCC01
	  stw       r5, 0x204(r6)
	  stb       r4, -0x8000(r3)
	  stw       r0, -0x8000(r3)
	  stb       r4, -0x8000(r3)
	  lwz       r0, 0x204(r6)
	  stw       r0, -0x8000(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	800E5C20
 * Size:	000024
 */
void __GXSetGenMode(void)
{
	/*
	.loc_0x0:
	  li        r0, 0x61
	  lwz       r4, -0x6D70(r2)
	  lis       r5, 0xCC01
	  stb       r0, -0x8000(r5)
	  li        r0, 0
	  lwz       r3, 0x204(r4)
	  stw       r3, -0x8000(r5)
	  sth       r0, 0x2(r4)
	  blr
	*/
}
