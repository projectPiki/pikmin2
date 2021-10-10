

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char*, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80455700
 * Size:	00005C
 */
void Sys::DrawBuffer::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x44384
	  lis       r3, 0x804F
	  li        r4, 0
	  subi      r3, r3, 0x2540
	  li        r0, -0x1
	  stw       r3, 0x0(r31)
	  mr        r3, r31
	  stb       r4, 0x18(r31)
	  stb       r4, 0x19(r31)
	  stb       r4, 0x18(r31)
	  stb       r4, 0x19(r31)
	  stw       r4, 0x1C(r31)
	  stw       r0, 0x20(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045575C
 * Size:	000060
 */
void Sys::DrawBuffer::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x2540
	  stw       r0, 0x0(r30)
	  bl        -0x44204
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x4316E8

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804557BC
 * Size:	0000DC
 */
void Sys::DrawBuffer::create((Sys::DrawBuffer::CreateArg&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lhz       r3, 0x18(r3)
	  lhz       r0, 0x4(r4)
	  lwz       r29, 0x0(r4)
	  or        r0, r3, r0
	  sth       r0, 0x18(r31)
	  lwz       r0, 0x8(r4)
	  stw       r0, 0x14(r31)
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x68
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4528
	  li        r4, 0x2A
	  subi      r5, r5, 0x4514
	  crclr     6, 0x6
	  bl        -0x42B1E0

	.loc_0x68:
	  li        r3, 0x24
	  bl        -0x431984
	  mr.       r30, r3
	  beq-      .loc_0x88
	  bl        -0x3EFE90
	  mr        r3, r30
	  mr        r4, r29
	  bl        -0x3EFE34

	.loc_0x88:
	  stw       r30, 0x1C(r31)
	  lwz       r0, 0xC(r28)
	  lwz       r3, 0x1C(r31)
	  stw       r0, 0xC(r3)
	  lwz       r0, 0x10(r28)
	  lwz       r3, 0x1C(r31)
	  stw       r0, 0x8(r3)
	  lwz       r3, 0x1C(r31)
	  lwz       r0, 0x8(r3)
	  stw       r0, 0x28(r31)
	  lwz       r3, 0x1C(r31)
	  lwz       r0, 0xC(r3)
	  stw       r0, 0x24(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455898
 * Size:	000088
 */
void Sys::DrawBuffer::draw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4528
	  li        r4, 0x39
	  subi      r5, r5, 0x4514
	  crclr     6, 0x6
	  bl        -0x42B290

	.loc_0x3C:
	  lhz       r0, 0x18(r31)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x5C
	  lis       r3, 0x8051
	  li        r0, 0x4
	  subi      r3, r3, 0xDD0
	  stw       r0, 0x50(r3)
	  b         .loc_0x6C

	.loc_0x5C:
	  lis       r3, 0x8051
	  li        r0, 0x3
	  subi      r3, r3, 0xDD0
	  stw       r0, 0x50(r3)

	.loc_0x6C:
	  lwz       r3, 0x1C(r31)
	  bl        -0x3EF84C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455920
 * Size:	000058
 */
void Sys::DrawBuffer::frameInit(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4528
	  li        r4, 0x45
	  subi      r5, r5, 0x4514
	  crclr     6, 0x6
	  bl        -0x42B318

	.loc_0x3C:
	  lwz       r3, 0x1C(r31)
	  bl        -0x3EFED0
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455978
 * Size:	000054
 */
void Sys::DrawBuffers::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x445FC
	  lis       r4, 0x804F
	  lis       r3, 0x804A
	  subi      r0, r4, 0x2550
	  li        r4, 0
	  stw       r0, 0x0(r31)
	  subi      r0, r3, 0x4508
	  mr        r3, r31
	  stw       r4, 0x18(r31)
	  stw       r4, 0x1C(r31)
	  stw       r0, 0x14(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804559CC
 * Size:	000060
 */
void Sys::DrawBuffers::__dt(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr.       r30, r3
	  beq-      .loc_0x44
	  lis       r5, 0x804F
	  li        r4, 0
	  subi      r0, r5, 0x2550
	  stw       r0, 0x0(r30)
	  bl        -0x44474
	  extsh.    r0, r31
	  ble-      .loc_0x44
	  mr        r3, r30
	  bl        -0x431958

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80455A2C
 * Size:	000098
 */
void Sys::DrawBuffers::allocate((int))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  mr        r31, r30
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  mulli     r3, r31, 0x2C
	  addi      r3, r3, 0x10
	  bl        -0x431AAC
	  lis       r4, 0x8045
	  lis       r5, 0x8045
	  addi      r4, r4, 0x5700
	  mr        r7, r31
	  addi      r5, r5, 0x575C
	  li        r6, 0x2C
	  bl        -0x394084
	  stw       r3, 0x18(r29)
	  li        r31, 0
	  stw       r30, 0x1C(r29)
	  b         .loc_0x70

	.loc_0x5C:
	  mr        r3, r29
	  mr        r4, r31
	  bl        .loc_0x98
	  stw       r31, 0x20(r3)
	  addi      r31, r31, 0x1

	.loc_0x70:
	  lwz       r0, 0x1C(r29)
	  cmpw      r31, r0
	  blt+      .loc_0x5C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x98:
	*/
}

/*
 * --INFO--
 * Address:	80455AC4
 * Size:	00008C
 */
void Sys::DrawBuffers::get((int))
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
	  lwz       r0, 0x18(r3)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x44
	  cmpwi     r31, 0
	  blt-      .loc_0x44
	  lwz       r0, 0x1C(r30)
	  cmpw      r31, r0
	  bge-      .loc_0x44
	  li        r3, 0x1

	.loc_0x44:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x68
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4528
	  li        r4, 0x94
	  subi      r5, r5, 0x4514
	  crclr     6, 0x6
	  bl        -0x42B4E8

	.loc_0x68:
	  mulli     r0, r31, 0x2C
	  lwz       r3, 0x18(r30)
	  add       r3, r3, r0
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
 * Address:	80455B50
 * Size:	0000E0
 */
void Sys::DrawBuffers::frameInitAll(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  li        r30, 0
	  stw       r29, 0x14(r1)
	  li        r29, 0
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  b         .loc_0xB4

	.loc_0x2C:
	  lwz       r0, 0x18(r28)
	  li        r3, 0
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  cmpwi     r29, 0
	  blt-      .loc_0x50
	  cmpw      r29, r4
	  bge-      .loc_0x50
	  li        r3, 0x1

	.loc_0x50:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x74
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4528
	  li        r4, 0x94
	  subi      r5, r5, 0x4514
	  crclr     6, 0x6
	  bl        -0x42B580

	.loc_0x74:
	  lwz       r0, 0x18(r28)
	  add       r31, r0, r30
	  lwz       r0, 0x1C(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0xA4
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4528
	  li        r4, 0x45
	  subi      r5, r5, 0x4514
	  crclr     6, 0x6
	  bl        -0x42B5B0

	.loc_0xA4:
	  lwz       r3, 0x1C(r31)
	  bl        -0x3F0168
	  addi      r30, r30, 0x2C
	  addi      r29, r29, 0x1

	.loc_0xB4:
	  lwz       r4, 0x1C(r28)
	  cmpw      r29, r4
	  blt+      .loc_0x2C
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  lwz       r28, 0x10(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}
