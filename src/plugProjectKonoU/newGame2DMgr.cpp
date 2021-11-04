

/*
 * --INFO--
 * Address:	803FBEEC
 * Size:	000060
 */
void Screen::Game2DMgr::create()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x6560(r13)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x1E6
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D18DC

	.loc_0x34:
	  li        r3, 0x1C
	  bl        -0x3D8080
	  mr.       r0, r3
	  beq-      .loc_0x4C
	  bl        .loc_0x60
	  mr        r0, r3

	.loc_0x4C:
	  stw       r0, -0x6560(r13)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x60:
	*/
}

/*
 * --INFO--
 * Address:	803FBF4C
 * Size:	000058
 */
void Screen::Game2DMgr::Game2DMgr()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x3DEF94
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r3, r3, 0x5798
	  stw       r3, 0x0(r31)
	  stw       r0, 0x18(r31)
	  bl        0x49C4
	  stw       r3, 0x18(r31)
	  lwz       r3, 0x18(r31)
	  bl        0x565FC
	  bl        -0xEC920
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FBFA4
 * Size:	000068
 */
void Screen::Game2DMgr::~Game2DMgr()
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
	  beq-      .loc_0x4C
	  lis       r4, 0x804F
	  li        r0, 0
	  subi      r5, r4, 0x5798
	  li        r4, 0
	  stw       r5, 0x0(r30)
	  stw       r0, -0x6560(r13)
	  bl        -0x3DEFA8
	  extsh.    r0, r31
	  ble-      .loc_0x4C
	  mr        r3, r30
	  bl        -0x3D7F38

	.loc_0x4C:
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
 * Address:	803FC00C
 * Size:	000020
 */
void Screen::Game2DMgr::initInCourse()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0xEE618
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC02C
 * Size:	000024
 */
void Screen::Game2DMgr::update()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x56B2C
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC050
 * Size:	000024
 */
void Screen::Game2DMgr::draw(Graphics&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x56DE0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC074
 * Size:	000004
 */
void Screen::Game2DMgr::drawIndirect(Graphics&)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC078
 * Size:	000024
 */
void Screen::Game2DMgr::setGamePad(Controller*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x57948
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC09C
 * Size:	000034
 */
void Screen::Game2DMgr::setDispMember(og::Screen::DispMemberBase*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x20
	  bl        0x5782C
	  b         .loc_0x24

	.loc_0x20:
	  li        r3, 0

	.loc_0x24:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC0D0
 * Size:	000038
 */
void Screen::Game2DMgr::setToumeiBG()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  li        r6, 0
	  li        r7, 0
	  lwz       r3, 0x18(r3)
	  lwz       r3, 0x1C(r3)
	  bl        0x56190
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC108
 * Size:	0000BC
 */
void Screen::Game2DMgr::open_GameGround(og::Screen::DispMemberGround&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r5, -0x6B70(r13)
	  lbz       r0, 0x2F(r5)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2C
	  li        r0, 0x1
	  stb       r0, 0x5E(r4)

	.loc_0x2C:
	  lwz       r7, -0x6B70(r13)
	  lis       r6, 0x804E
	  lis       r3, 0x804E
	  li        r5, 0x2710
	  lwz       r0, 0xE8(r7)
	  subi      r7, r6, 0x7B98
	  subi      r6, r3, 0x7BA8
	  li        r3, 0
	  stw       r0, 0x20(r4)
	  li        r0, 0x1
	  stw       r7, 0x8(r1)
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0xA4:
	  lwz       r0, 0x24(r1)
	  li        r3, 0
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC1C4
 * Size:	000060
 */
void Screen::Game2DMgr::is_GameGround()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x5774C
	  cmpwi     r3, 0x2710
	  bne-      .loc_0x44
	  lwz       r3, 0x18(r30)
	  lwz       r3, 0x1C(r3)
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x44
	  li        r31, 0x1

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC224
 * Size:	0001B4
 */
void Screen::Game2DMgr::open_GameCave(og::Screen::DispMemberCave&, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  mr        r31, r3
	  lwz       r6, -0x6B70(r13)
	  lbz       r0, 0x2F(r6)
	  rlwinm.   r0,r0,0,31,31
	  beq-      .loc_0x2C
	  li        r0, 0x1
	  stb       r0, 0x5D(r4)

	.loc_0x2C:
	  lwz       r3, -0x6B70(r13)
	  cmpwi     r5, 0
	  lwz       r0, 0xEC(r3)
	  stw       r0, 0x20(r4)
	  bne-      .loc_0xB0
	  lis       r5, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r5, 0x2711
	  stw       r0, 0x34(r1)
	  subi      r6, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x40(r1)
	  addi      r4, r1, 0x34
	  stw       r6, 0x34(r1)
	  stw       r5, 0x38(r1)
	  stb       r3, 0x3C(r1)
	  stb       r0, 0x3D(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19C
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x19C

	.loc_0xB0:
	  rlwinm.   r0,r5,0,30,30
	  beq-      .loc_0x19C
	  lis       r5, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r5, 0x2711
	  stw       r0, 0x24(r1)
	  subi      r6, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x30(r1)
	  addi      r4, r1, 0x24
	  stw       r6, 0x24(r1)
	  stw       r5, 0x28(r1)
	  stb       r3, 0x2C(r1)
	  stb       r0, 0x2D(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19C
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  addi      r8, r4, 0x1148
	  li        r9, 0
	  subi      r7, r3, 0x7B98
	  lis       r6, 0x804F
	  lis       r4, 0x804E
	  addi      r0, r1, 0x18
	  li        r5, 0x4E22
	  li        r3, 0x1
	  stw       r8, 0x18(r1)
	  subi      r8, r6, 0x57B0
	  subi      r6, r4, 0x7BA8
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r9, 0x1C(r1)
	  stw       r8, 0x18(r1)
	  stb       r9, 0x20(r1)
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stb       r9, 0x10(r1)
	  stb       r3, 0x11(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x19C
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x19C:
	  lwz       r0, 0x54(r1)
	  li        r3, 0
	  lwz       r31, 0x4C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC3D8
 * Size:	000060
 */
void Screen::Game2DMgr::is_GameCave()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x57538
	  cmpwi     r3, 0x2711
	  bne-      .loc_0x44
	  lwz       r3, 0x18(r30)
	  lwz       r3, 0x1C(r3)
	  lwz       r0, 0x120(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x44
	  li        r31, 0x1

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC438
 * Size:	0001A0
 */
void Screen::Game2DMgr::open_GameVs(og::Screen::DispMemberVs&, int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  cmpwi     r5, 0
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  bne-      .loc_0x8C
	  lis       r5, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r5, 0x2712
	  stw       r0, 0x28(r1)
	  subi      r6, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x34(r1)
	  addi      r4, r1, 0x28
	  stw       r6, 0x28(r1)
	  stw       r5, 0x2C(r1)
	  stb       r3, 0x30(r1)
	  stb       r0, 0x31(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x188

	.loc_0x8C:
	  rlwinm.   r0,r5,0,31,31
	  beq-      .loc_0x188
	  lis       r5, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r5, 0x2712
	  stw       r0, 0x18(r1)
	  subi      r6, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x24(r1)
	  addi      r4, r1, 0x18
	  stw       r6, 0x18(r1)
	  stw       r5, 0x1C(r1)
	  stb       r3, 0x20(r1)
	  stb       r0, 0x21(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  li        r9, 0
	  lis       r5, 0x804F
	  addi      r10, r4, 0x1148
	  subi      r6, r3, 0x7B98
	  lis       r4, 0x804E
	  addi      r0, r1, 0x38
	  li        r7, 0x1
	  stb       r9, 0x44(r1)
	  li        r3, 0x4E21
	  subi      r8, r5, 0x57C8
	  stw       r10, 0x38(r1)
	  subi      r5, r4, 0x7BA8
	  addi      r4, r1, 0x8
	  stw       r6, 0x8(r1)
	  stw       r9, 0x3C(r1)
	  stw       r8, 0x38(r1)
	  stw       r9, 0x40(r1)
	  stb       r9, 0x45(r1)
	  stw       r9, 0x48(r1)
	  stb       r7, 0x44(r1)
	  stw       r5, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stb       r9, 0x10(r1)
	  stb       r7, 0x11(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x188
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x188:
	  lwz       r0, 0x64(r1)
	  li        r3, 0x1
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC5D8
 * Size:	00009C
 */
void Screen::Game2DMgr::check_VsStatus()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  li        r30, 0x3
	  lwz       r3, 0x18(r3)
	  bl        0x57320
	  mr.       r31, r3
	  beq-      .loc_0x80
	  lis       r4, 0x4F
	  li        r6, 0x5653
	  addi      r4, r4, 0x4741
	  li        r5, 0
	  bl        -0xED2F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  lwz       r0, 0x8(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x74
	  bge-      .loc_0x60
	  cmpwi     r0, 0
	  bge-      .loc_0x6C
	  b         .loc_0x80

	.loc_0x60:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x80
	  b         .loc_0x7C

	.loc_0x6C:
	  li        r30, 0
	  b         .loc_0x80

	.loc_0x74:
	  li        r30, 0x1
	  b         .loc_0x80

	.loc_0x7C:
	  li        r30, 0x2

	.loc_0x80:
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
 * Address:	803FC674
 * Size:	000334
 */
void Screen::Game2DMgr::open_GameChallenge2P(og::Screen::DispMemberChallenge2P&,
                                             int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  lis       r6, 0x804E
	  lis       r7, 0x804E
	  stw       r0, 0x94(r1)
	  subi      r8, r6, 0x7B98
	  subi      r0, r7, 0x7588
	  lis       r7, 0x804E
	  stw       r31, 0x8C(r1)
	  li        r9, 0x2724
	  lfs       f0, 0x1CD8(r2)
	  subi      r10, r7, 0x7BA8
	  stw       r8, 0x8(r1)
	  li        r7, 0x1
	  lis       r6, 0x804F
	  cmpwi     r5, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r6, 0x57D8
	  lis       r6, 0x804F
	  mr        r31, r3
	  stw       r8, 0x4C(r1)
	  li        r8, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r6, 0x57E8
	  stw       r10, 0x4C(r1)
	  stw       r9, 0x50(r1)
	  stb       r8, 0x54(r1)
	  stb       r7, 0x55(r1)
	  stw       r4, 0x58(r1)
	  stfs      f0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bne-      .loc_0xBC
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x320

	.loc_0xBC:
	  rlwinm    r0,r5,0,30,31
	  cmpwi     r0, 0x3
	  bne-      .loc_0x194
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  li        r9, 0
	  lis       r5, 0x804F
	  addi      r10, r4, 0x1148
	  subi      r6, r3, 0x7B98
	  lis       r4, 0x804E
	  addi      r0, r1, 0x70
	  li        r7, 0x1
	  stb       r9, 0x7C(r1)
	  li        r3, 0x4E21
	  subi      r8, r5, 0x57C8
	  stw       r10, 0x70(r1)
	  subi      r5, r4, 0x7BA8
	  addi      r4, r1, 0x3C
	  stb       r9, 0x7D(r1)
	  stw       r9, 0x80(r1)
	  stw       r6, 0x3C(r1)
	  stw       r9, 0x74(r1)
	  stw       r8, 0x70(r1)
	  stw       r9, 0x78(r1)
	  stb       r7, 0x7C(r1)
	  stb       r7, 0x7D(r1)
	  stw       r7, 0x80(r1)
	  stw       r5, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  stb       r9, 0x44(r1)
	  stb       r7, 0x45(r1)
	  stw       r0, 0x48(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x320

	.loc_0x194:
	  rlwinm.   r0,r5,0,31,31
	  beq-      .loc_0x264
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  li        r9, 0
	  lis       r5, 0x804F
	  addi      r10, r4, 0x1148
	  subi      r6, r3, 0x7B98
	  lis       r4, 0x804E
	  addi      r0, r1, 0x5C
	  li        r7, 0x1
	  stb       r9, 0x68(r1)
	  li        r3, 0x4E21
	  subi      r8, r5, 0x57C8
	  stw       r10, 0x5C(r1)
	  subi      r5, r4, 0x7BA8
	  addi      r4, r1, 0x2C
	  stw       r9, 0x6C(r1)
	  stw       r6, 0x2C(r1)
	  stw       r9, 0x60(r1)
	  stw       r8, 0x5C(r1)
	  stw       r9, 0x64(r1)
	  stb       r9, 0x69(r1)
	  stb       r7, 0x68(r1)
	  stw       r7, 0x6C(r1)
	  stw       r5, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  stb       r9, 0x34(r1)
	  stb       r7, 0x35(r1)
	  stw       r0, 0x38(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x320

	.loc_0x264:
	  rlwinm.   r0,r5,0,30,30
	  beq-      .loc_0x320
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  li        r9, 0
	  lis       r5, 0x804F
	  addi      r10, r4, 0x1148
	  subi      r6, r3, 0x7B98
	  lis       r4, 0x804E
	  addi      r0, r1, 0x20
	  li        r7, 0x1
	  stb       r9, 0x28(r1)
	  li        r3, 0x4E22
	  subi      r8, r5, 0x57B0
	  stw       r10, 0x20(r1)
	  subi      r5, r4, 0x7BA8
	  addi      r4, r1, 0x10
	  stw       r6, 0x10(r1)
	  stw       r9, 0x24(r1)
	  stw       r8, 0x20(r1)
	  stb       r7, 0x28(r1)
	  stw       r5, 0x10(r1)
	  stw       r3, 0x14(r1)
	  stb       r9, 0x18(r1)
	  stb       r7, 0x19(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x320
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x320:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FC9A8
 * Size:	000328
 */
void Screen::Game2DMgr::open_GameChallenge1P(og::Screen::DispMemberChallenge1P&,
                                             int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  lis       r6, 0x804E
	  lis       r7, 0x804E
	  stw       r0, 0x94(r1)
	  subi      r8, r6, 0x7B98
	  subi      r0, r7, 0x7588
	  lis       r7, 0x804E
	  stw       r31, 0x8C(r1)
	  li        r9, 0x2727
	  lfs       f0, 0x1CD8(r2)
	  subi      r10, r7, 0x7BA8
	  stw       r8, 0x8(r1)
	  li        r7, 0x1
	  lis       r6, 0x804F
	  cmpwi     r5, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r6, 0x57D8
	  lis       r6, 0x804F
	  mr        r31, r3
	  stw       r8, 0x4C(r1)
	  li        r8, 0
	  stw       r0, 0x8(r1)
	  subi      r0, r6, 0x57F8
	  stw       r10, 0x4C(r1)
	  stw       r9, 0x50(r1)
	  stb       r8, 0x54(r1)
	  stb       r7, 0x55(r1)
	  stw       r4, 0x58(r1)
	  stfs      f0, 0xC(r1)
	  stw       r0, 0x8(r1)
	  bne-      .loc_0xBC
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x8
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x314

	.loc_0xBC:
	  rlwinm    r0,r5,0,30,31
	  cmpwi     r0, 0x3
	  bne-      .loc_0x190
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  li        r9, 0
	  lis       r5, 0x804F
	  addi      r10, r4, 0x1148
	  subi      r6, r3, 0x7B98
	  lis       r4, 0x804E
	  addi      r0, r1, 0x70
	  li        r7, 0x1
	  stb       r9, 0x7D(r1)
	  li        r3, 0x4E21
	  subi      r8, r5, 0x57C8
	  stw       r10, 0x70(r1)
	  subi      r5, r4, 0x7BA8
	  addi      r4, r1, 0x3C
	  stw       r9, 0x80(r1)
	  stw       r6, 0x3C(r1)
	  stw       r9, 0x74(r1)
	  stw       r8, 0x70(r1)
	  stw       r9, 0x78(r1)
	  stb       r9, 0x7C(r1)
	  stb       r7, 0x7D(r1)
	  stw       r7, 0x80(r1)
	  stw       r5, 0x3C(r1)
	  stw       r3, 0x40(r1)
	  stb       r9, 0x44(r1)
	  stb       r7, 0x45(r1)
	  stw       r0, 0x48(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x314

	.loc_0x190:
	  cmpwi     r5, 0x1
	  bne-      .loc_0x25C
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  li        r9, 0
	  lis       r5, 0x804F
	  addi      r10, r4, 0x1148
	  subi      r6, r3, 0x7B98
	  lis       r4, 0x804E
	  addi      r0, r1, 0x5C
	  li        r7, 0x1
	  stw       r9, 0x6C(r1)
	  li        r3, 0x4E21
	  subi      r8, r5, 0x57C8
	  stw       r10, 0x5C(r1)
	  subi      r5, r4, 0x7BA8
	  addi      r4, r1, 0x2C
	  stw       r6, 0x2C(r1)
	  stw       r9, 0x60(r1)
	  stw       r8, 0x5C(r1)
	  stw       r9, 0x64(r1)
	  stb       r9, 0x68(r1)
	  stb       r9, 0x69(r1)
	  stw       r7, 0x6C(r1)
	  stw       r5, 0x2C(r1)
	  stw       r3, 0x30(r1)
	  stb       r9, 0x34(r1)
	  stb       r7, 0x35(r1)
	  stw       r0, 0x38(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x314

	.loc_0x25C:
	  cmpwi     r5, 0x2
	  bne-      .loc_0x314
	  lwz       r3, 0x18(r31)
	  addi      r4, r1, 0x4C
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lis       r4, 0x804B
	  lis       r3, 0x804E
	  addi      r8, r4, 0x1148
	  li        r9, 0
	  subi      r7, r3, 0x7B98
	  lis       r6, 0x804F
	  lis       r4, 0x804E
	  addi      r0, r1, 0x20
	  li        r5, 0x4E22
	  li        r3, 0x1
	  stw       r8, 0x20(r1)
	  subi      r8, r6, 0x57B0
	  subi      r6, r4, 0x7BA8
	  addi      r4, r1, 0x10
	  stw       r7, 0x10(r1)
	  stw       r9, 0x24(r1)
	  stw       r8, 0x20(r1)
	  stb       r9, 0x28(r1)
	  stw       r6, 0x10(r1)
	  stw       r5, 0x14(r1)
	  stb       r9, 0x18(r1)
	  stb       r3, 0x19(r1)
	  stw       r0, 0x1C(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x314
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x314:
	  lwz       r0, 0x94(r1)
	  lwz       r31, 0x8C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FCCD0
 * Size:	0000B0
 */
void Screen::Game2DMgr::open_SMenu(og::Screen::DispMemberSMenuAll&)
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
	  lwz       r3, 0x18(r3)
	  bl        0x56D30
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x34:
	  lwz       r3, 0x18(r30)
	  bl        0x56C28
	  cmpwi     r3, 0x2724
	  beq-      .loc_0x6C
	  bge-      .loc_0x5C
	  cmpwi     r3, 0x2713
	  bge-      .loc_0x64
	  cmpwi     r3, 0x2710
	  bge-      .loc_0x6C
	  b         .loc_0x64

	.loc_0x5C:
	  cmpwi     r3, 0x2727
	  beq-      .loc_0x6C

	.loc_0x64:
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x6C:
	  lwz       r3, -0x6D20(r13)
	  bl        -0x2A2120
	  cmplwi    r3, 0
	  bne-      .loc_0x84
	  li        r3, 0
	  b         .loc_0x98

	.loc_0x84:
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0xA6(r31)
	  mr        r4, r31
	  bl        .loc_0xB0

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0xB0:
	*/
}

/*
 * --INFO--
 * Address:	803FCD80
 * Size:	0001B0
 */
void Screen::Game2DMgr::open_SMenu_Sub(og::Screen::DispMemberSMenuAll&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  li        r31, 0
	  stw       r30, 0x38(r1)
	  mr        r30, r4
	  stw       r29, 0x34(r1)
	  mr        r29, r3
	  stw       r28, 0x30(r1)
	  lwz       r0, 0x14(r4)
	  stw       r0, 0x28(r4)
	  lwz       r3, 0x18(r3)
	  lbz       r0, 0x91(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4C
	  li        r0, 0x1
	  stb       r0, 0xA5(r30)
	  b         .loc_0x54

	.loc_0x4C:
	  li        r0, 0
	  stb       r0, 0xA5(r30)

	.loc_0x54:
	  lwz       r0, 0x28(r30)
	  cmplwi    r0, 0x2710
	  bge-      .loc_0x6C
	  li        r0, 0x1
	  stb       r0, 0x2C(r30)
	  b         .loc_0x74

	.loc_0x6C:
	  li        r0, 0
	  stb       r0, 0x2C(r30)

	.loc_0x74:
	  lwz       r3, -0x6858(r13)
	  bl        -0xF0250
	  bl        0x6EB60
	  lwz       r0, 0xBC(r30)
	  cmpwi     r0, 0
	  beq-      .loc_0x9C
	  blt-      .loc_0x144
	  cmpwi     r0, 0x3
	  bge-      .loc_0x144
	  b         .loc_0xF0

	.loc_0x9C:
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7B98
	  li        r5, 0x271D
	  stw       r0, 0x18(r1)
	  subi      r4, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x18(r1)
	  addi      r4, r1, 0x18
	  stw       r5, 0x1C(r1)
	  stb       r3, 0x20(r1)
	  stb       r0, 0x21(r1)
	  stw       r30, 0x24(r1)
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  b         .loc_0x160

	.loc_0xF0:
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7B98
	  li        r5, 0x2728
	  stw       r0, 0x8(r1)
	  subi      r4, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stw       r30, 0x14(r1)
	  lwz       r3, 0x18(r29)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  mr        r28, r3
	  b         .loc_0x160

	.loc_0x144:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x3C9
	  subi      r5, r5, 0x7AD0
	  crclr     6, 0x6
	  bl        -0x3D289C

	.loc_0x160:
	  rlwinm.   r0,r28,0,24,31
	  beq-      .loc_0x18C
	  lwz       r3, 0x18(r29)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x18C
	  li        r31, 0x1

	.loc_0x18C:
	  lwz       r0, 0x44(r1)
	  mr        r3, r31
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  lwz       r29, 0x34(r1)
	  lwz       r28, 0x30(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FCF30
 * Size:	000128
 */
void Screen::Game2DMgr::check_SMenu()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, -0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x569E0
	  cmpwi     r3, 0x2728
	  beq-      .loc_0x50
	  bge-      .loc_0x44
	  cmpwi     r3, 0x271E
	  bge-      .loc_0x108
	  cmpwi     r3, 0x271A
	  bge-      .loc_0x50
	  b         .loc_0x108

	.loc_0x44:
	  cmpwi     r3, 0x272B
	  beq-      .loc_0x50
	  b         .loc_0x108

	.loc_0x50:
	  lwz       r3, 0x18(r30)
	  bl        0x569EC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x100
	  lwz       r3, 0x18(r30)
	  bl        0x56A04
	  cmplwi    r3, 0x7
	  bgt-      .loc_0xD8
	  lis       r4, 0x804F
	  rlwinm    r0,r3,2,0,29
	  subi      r4, r4, 0x5828
	  lwzx      r0, r4, r0
	  mtctr     r0
	  bctr
	  li        r31, 0
	  b         .loc_0x10C
	  bl        0x6EB88
	  li        r31, 0x1
	  b         .loc_0x10C
	  bl        0x6EB7C
	  li        r31, 0x2
	  b         .loc_0x10C
	  bl        0x6EB70
	  li        r31, 0x3
	  b         .loc_0x10C
	  bl        0x6EB64
	  li        r31, 0x1
	  b         .loc_0x10C
	  bl        0x6EB58
	  li        r31, 0x4
	  b         .loc_0x10C
	  bl        0x6EB4C
	  li        r31, 0x5
	  b         .loc_0x10C

	.loc_0xD8:
	  lis       r5, 0x804A
	  lis       r4, 0x804A
	  subi      r0, r5, 0x7AF0
	  mr        r6, r3
	  subi      r5, r4, 0x7AC0
	  li        r4, 0x415
	  mr        r3, r0
	  crclr     6, 0x6
	  bl        -0x3D29E8
	  b         .loc_0x10C

	.loc_0x100:
	  li        r31, 0
	  b         .loc_0x10C

	.loc_0x108:
	  li        r31, -0x1

	.loc_0x10C:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD058
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_WorldMapInfoWin0(
    og::Screen::DispMemberWorldMapInfoWin0&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2729
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD100
 * Size:	00007C
 */
void Screen::Game2DMgr::check_WorldMapInfoWin0() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x56818
	  cmpwi     r3, 0x2729
	  beq-      .loc_0x2C
	  li        r3, 0x2
	  b         .loc_0x68

	.loc_0x2C:
	  lwz       r3, 0x18(r31)
	  bl        0x56840
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  lwz       r3, 0x18(r31)
	  bl        0x56858
	  cmpwi     r3, 0
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x54:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x64
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0x3

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD17C
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_WorldMapInfoWin1(
    og::Screen::DispMemberWorldMapInfoWin1&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x272A
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD224
 * Size:	00007C
 */
void Screen::Game2DMgr::check_WorldMapInfoWin1() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x566F4
	  cmpwi     r3, 0x272A
	  beq-      .loc_0x2C
	  li        r3, 0x2
	  b         .loc_0x68

	.loc_0x2C:
	  lwz       r3, 0x18(r31)
	  bl        0x5671C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x64
	  lwz       r3, 0x18(r31)
	  bl        0x56734
	  cmpwi     r3, 0
	  bne-      .loc_0x54
	  li        r3, 0
	  b         .loc_0x68

	.loc_0x54:
	  cmpwi     r3, 0x1
	  bne-      .loc_0x64
	  li        r3, 0x1
	  b         .loc_0x68

	.loc_0x64:
	  li        r3, 0x3

	.loc_0x68:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD2A0
 * Size:	000124
 */
void Screen::Game2DMgr::open_Kantei(og::Screen::DispMemberKantei&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  lbz       r0, 0x91(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x30
	  li        r0, 0x1
	  stb       r0, 0x38(r4)
	  b         .loc_0x38

	.loc_0x30:
	  li        r0, 0
	  stb       r0, 0x38(r4)

	.loc_0x38:
	  lwz       r0, 0xC(r4)
	  cmplwi    r0, 0x2710
	  blt-      .loc_0x50
	  li        r0, 0x1
	  stb       r0, 0x28(r4)
	  b         .loc_0x58

	.loc_0x50:
	  li        r0, 0
	  stb       r0, 0x28(r4)

	.loc_0x58:
	  lbz       r0, 0x28(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  li        r0, 0x1
	  stw       r0, 0x34(r4)
	  b         .loc_0x78

	.loc_0x70:
	  li        r0, 0
	  stw       r0, 0x34(r4)

	.loc_0x78:
	  lis       r5, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r5, 0x7B98
	  li        r5, 0x2722
	  stw       r0, 0x8(r1)
	  subi      r6, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xF4
	  bl        0x6E5D0
	  b         .loc_0x110

	.loc_0xF4:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x476
	  subi      r5, r5, 0x7AA4
	  crclr     6, 0x6
	  bl        -0x3D2D6C

	.loc_0x110:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD3C4
 * Size:	000084
 */
void Screen::Game2DMgr::close_Kantei()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x56554
	  cmpwi     r3, 0x2722
	  bne-      .loc_0x70
	  lwz       r3, 0x18(r31)
	  bl        0x56600
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  bl        0x6E738
	  b         .loc_0x70

	.loc_0x54:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x48F
	  subi      r5, r5, 0x7A8C
	  crclr     6, 0x6
	  bl        -0x3D2DF0

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD448
 * Size:	000074
 */
void Screen::Game2DMgr::update_Kantei()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  li        r30, 0x1
	  lwz       r3, 0x18(r3)
	  bl        0x564B0
	  mr.       r31, r3
	  beq-      .loc_0x58
	  lis       r4, 0x4F
	  lis       r6, 0x4E54
	  addi      r4, r4, 0x4741
	  li        r5, 0x4B41
	  addi      r6, r6, 0x4549
	  bl        -0xEE168
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x58
	  lbz       r0, 0x30(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r30, 0

	.loc_0x58:
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
 * Address:	803FD4BC
 * Size:	000090
 */
void Screen::Game2DMgr::open_SpecialItem(og::Screen::DispMemberSpecialItem&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2723
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  bl        0x6E428
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD54C
 * Size:	000084
 */
void Screen::Game2DMgr::close_SpecialItem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x563CC
	  cmpwi     r3, 0x2723
	  bne-      .loc_0x70
	  lwz       r3, 0x18(r31)
	  bl        0x56478
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x54
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  bl        0x6E5B0
	  b         .loc_0x70

	.loc_0x54:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x4C7
	  subi      r5, r5, 0x7A8C
	  crclr     6, 0x6
	  bl        -0x3D2F78

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD5D0
 * Size:	000090
 */
void Screen::Game2DMgr::open_Floor(og::Screen::DispMemberFloor&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804E
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  lis       r6, 0x804E
	  stw       r31, 0x1C(r1)
	  subi      r7, r6, 0x7BA8
	  li        r6, 0x2713
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stb       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r0, 0x11(r1)
	  stb       r0, 0x10(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD660
 * Size:	000070
 */
void Screen::Game2DMgr::close_Floor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x562B8
	  cmpwi     r3, 0x2713
	  bne-      .loc_0x5C
	  lis       r4, 0x804E
	  lis       r3, 0x804F
	  subi      r4, r4, 0x7B98
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  subi      r3, r3, 0x5808
	  addi      r4, r1, 0x8
	  stw       r3, 0x8(r1)
	  stb       r0, 0xC(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD6D0
 * Size:	00005C
 */
void Screen::Game2DMgr::set_FloorVS_LoadEnd()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x56248
	  cmpwi     r3, 0x2713
	  bne-      .loc_0x48
	  lwz       r3, 0x18(r31)
	  bl        0x5621C
	  li        r0, 0x1
	  mr        r4, r3
	  stb       r0, 0x12(r3)
	  lwz       r3, 0x18(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  bl        0x561CC

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD72C
 * Size:	000048
 */
void Screen::Game2DMgr::startCount_Floor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x561EC
	  cmpwi     r3, 0x2713
	  bne-      .loc_0x34
	  lwz       r3, 0x18(r31)
	  bl        0x561C0
	  li        r0, 0x1
	  stb       r0, 0x10(r3)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD774
 * Size:	000048
 */
void Screen::Game2DMgr::startFadeBG_Floor()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x561A4
	  cmpwi     r3, 0x2713
	  bne-      .loc_0x34
	  lwz       r3, 0x18(r31)
	  bl        0x56178
	  li        r0, 0x1
	  stb       r0, 0x11(r3)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD7BC
 * Size:	000090
 */
void Screen::Game2DMgr::open_CourseName(og::Screen::DispMemberCourseName&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804E
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  lis       r6, 0x804E
	  stw       r31, 0x1C(r1)
	  subi      r7, r6, 0x7BA8
	  li        r6, 0x271E
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stb       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r0, 0x11(r1)
	  stb       r0, 0x10(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD84C
 * Size:	000048
 */
void Screen::Game2DMgr::startFadeBG_CourseName()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x560CC
	  cmpwi     r3, 0x271E
	  bne-      .loc_0x34
	  lwz       r3, 0x18(r31)
	  bl        0x560A0
	  li        r0, 0x1
	  stb       r0, 0xD(r3)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD894
 * Size:	000070
 */
void Screen::Game2DMgr::close_CourseName()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x56084
	  cmpwi     r3, 0x271E
	  bne-      .loc_0x5C
	  lis       r4, 0x804E
	  lis       r3, 0x804F
	  subi      r4, r4, 0x7B98
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  subi      r3, r3, 0x5808
	  addi      r4, r1, 0x8
	  stw       r3, 0x8(r1)
	  stb       r0, 0xC(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x5C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD904
 * Size:	000048
 */
void Screen::Game2DMgr::startCount_CourseName()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x56014
	  cmpwi     r3, 0x271E
	  bne-      .loc_0x34
	  lwz       r3, 0x18(r31)
	  bl        0x55FE8
	  li        r0, 0x1
	  stb       r0, 0xC(r3)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FD94C
 * Size:	000258
 */
void Screen::Game2DMgr::open_GameOver(Screen::Game2DMgr::GameOverTitle)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x60(r1)
	  mflr      r0
	  cmpwi     r4, 0x2
	  stw       r0, 0x64(r1)
	  stw       r31, 0x5C(r1)
	  mr        r31, r3
	  beq-      .loc_0x110
	  bge-      .loc_0x30
	  cmpwi     r4, 0
	  beq-      .loc_0x40
	  bge-      .loc_0xA8
	  b         .loc_0x244

	.loc_0x30:
	  cmpwi     r4, 0x4
	  beq-      .loc_0x1E0
	  bge-      .loc_0x244
	  b         .loc_0x178

	.loc_0x40:
	  lis       r4, 0x804E
	  li        r3, 0
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804E
	  stw       r0, 0x48(r1)
	  subi      r4, r4, 0x7BA8
	  li        r5, 0x272F
	  li        r0, 0x1
	  stw       r4, 0x48(r1)
	  addi      r4, r1, 0x48
	  stw       r5, 0x4C(r1)
	  stb       r3, 0x50(r1)
	  stb       r0, 0x51(r1)
	  stw       r3, 0x54(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x244

	.loc_0xA8:
	  lis       r4, 0x804E
	  li        r3, 0
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804E
	  stw       r0, 0x38(r1)
	  subi      r4, r4, 0x7BA8
	  li        r5, 0x2730
	  li        r0, 0x1
	  stw       r4, 0x38(r1)
	  addi      r4, r1, 0x38
	  stw       r5, 0x3C(r1)
	  stb       r3, 0x40(r1)
	  stb       r0, 0x41(r1)
	  stw       r3, 0x44(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x244

	.loc_0x110:
	  lis       r4, 0x804E
	  li        r3, 0
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804E
	  stw       r0, 0x28(r1)
	  subi      r4, r4, 0x7BA8
	  li        r5, 0x2731
	  li        r0, 0x1
	  stw       r4, 0x28(r1)
	  addi      r4, r1, 0x28
	  stw       r5, 0x2C(r1)
	  stb       r3, 0x30(r1)
	  stb       r0, 0x31(r1)
	  stw       r3, 0x34(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x244

	.loc_0x178:
	  lis       r4, 0x804E
	  li        r3, 0
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804E
	  stw       r0, 0x18(r1)
	  subi      r4, r4, 0x7BA8
	  li        r5, 0x2732
	  li        r0, 0x1
	  stw       r4, 0x18(r1)
	  addi      r4, r1, 0x18
	  stw       r5, 0x1C(r1)
	  stb       r3, 0x20(r1)
	  stb       r0, 0x21(r1)
	  stw       r3, 0x24(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x244

	.loc_0x1E0:
	  lis       r4, 0x804E
	  li        r3, 0
	  subi      r0, r4, 0x7B98
	  lis       r4, 0x804E
	  stw       r0, 0x8(r1)
	  subi      r4, r4, 0x7BA8
	  li        r5, 0x2733
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stw       r3, 0x14(r1)
	  lwz       r3, 0x18(r31)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x244:
	  lwz       r0, 0x64(r1)
	  lwz       r31, 0x5C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x60
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FDBA4
 * Size:	0000AC
 */
void Screen::Game2DMgr::close_GameOver()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55D74
	  cmpwi     r3, 0x2733
	  beq-      .loc_0x38
	  bge-      .loc_0x98
	  cmpwi     r3, 0x272F
	  beq-      .loc_0x38
	  bge-      .loc_0x54
	  b         .loc_0x98

	.loc_0x38:
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x98

	.loc_0x54:
	  lwz       r3, 0x18(r31)
	  bl        0x55DF0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x98

	.loc_0x80:
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x98:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FDC50
 * Size:	0000E0
 */
void Screen::Game2DMgr::open_CaveInMenu(og::Screen::DispMemberAnaDemo&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55DB0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0xC8

	.loc_0x34:
	  lwz       r3, 0x18(r30)
	  bl        0x55CA8
	  cmpwi     r3, 0x2710
	  bne-      .loc_0xC4
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7B98
	  li        r5, 0x271F
	  stw       r0, 0x8(r1)
	  subi      r4, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stw       r31, 0x14(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  bl        0x6DC54
	  li        r3, 0x1
	  b         .loc_0xC8

	.loc_0xC4:
	  li        r3, 0

	.loc_0xC8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FDD30
 * Size:	00009C
 */
void Screen::Game2DMgr::check_CaveInMenu()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x55BD0
	  mr.       r31, r3
	  beq-      .loc_0x80
	  lis       r4, 0x4F
	  lis       r6, 0x4445
	  lis       r5, 0x414E
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4D4F
	  addi      r5, r5, 0x415F
	  bl        -0xEEA4C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lbz       r0, 0x1F(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r31, 0
	  b         .loc_0x84

	.loc_0x58:
	  lbz       r0, 0x1E(r31)
	  li        r3, 0x2
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0x1

	.loc_0x6C:
	  mr        r31, r3
	  bl        0x6DDA8
	  b         .loc_0x84

	.loc_0x78:
	  li        r31, -0x1
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, -0x2

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FDDCC
 * Size:	0000E0
 */
void Screen::Game2DMgr::open_KanketuMenu(og::Screen::DispMemberKanketuMenu&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55C34
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0xC8

	.loc_0x34:
	  lwz       r3, 0x18(r30)
	  bl        0x55B2C
	  cmpwi     r3, 0x2711
	  bne-      .loc_0xC4
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7B98
	  li        r5, 0x2720
	  stw       r0, 0x8(r1)
	  subi      r4, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stw       r31, 0x14(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  bl        0x6DAD8
	  li        r3, 0x1
	  b         .loc_0xC8

	.loc_0xC4:
	  li        r3, 0

	.loc_0xC8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FDEAC
 * Size:	0000F4
 */
void Screen::Game2DMgr::open_ChallengeKanketuMenu(
    og::Screen::DispMemberKanketuMenu&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55B54
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0xDC

	.loc_0x34:
	  lwz       r3, 0x18(r30)
	  bl        0x55A4C
	  cmpwi     r3, 0x2727
	  beq-      .loc_0x54
	  lwz       r3, 0x18(r30)
	  bl        0x55A3C
	  cmpwi     r3, 0x2724
	  bne-      .loc_0xD8

	.loc_0x54:
	  li        r6, 0x1
	  lis       r3, 0x804E
	  stb       r6, 0x26(r31)
	  subi      r0, r3, 0x7B98
	  lis       r4, 0x804E
	  li        r3, 0x2720
	  stw       r0, 0x8(r1)
	  subi      r5, r4, 0x7BA8
	  li        r0, 0
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stb       r0, 0x10(r1)
	  stb       r6, 0x11(r1)
	  stw       r31, 0x14(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD8
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xD8
	  bl        0x6D9E4
	  li        r3, 0x1
	  b         .loc_0xDC

	.loc_0xD8:
	  li        r3, 0

	.loc_0xDC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FDFA0
 * Size:	00009C
 */
void Screen::Game2DMgr::check_KanketuMenu()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x55960
	  mr.       r31, r3
	  beq-      .loc_0x80
	  lis       r4, 0x4F
	  lis       r6, 0x4B45
	  lis       r5, 0x4B
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5455
	  addi      r5, r5, 0x414E
	  bl        -0xEECBC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lbz       r0, 0x1F(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r31, 0
	  b         .loc_0x84

	.loc_0x58:
	  lbz       r0, 0x1E(r31)
	  li        r3, 0x2
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0x1

	.loc_0x6C:
	  mr        r31, r3
	  bl        0x6DB38
	  b         .loc_0x84

	.loc_0x78:
	  li        r31, -0x1
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, -0x2

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE03C
 * Size:	000100
 */
void Screen::Game2DMgr::open_CaveMoreMenu(og::Screen::DispMemberCaveMore&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x559C4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0xE8

	.loc_0x34:
	  lwz       r3, 0x18(r30)
	  bl        0x558BC
	  cmpwi     r3, 0x2711
	  beq-      .loc_0x64
	  lwz       r3, 0x18(r30)
	  bl        0x558AC
	  cmpwi     r3, 0x2727
	  beq-      .loc_0x64
	  lwz       r3, 0x18(r30)
	  bl        0x5589C
	  cmpwi     r3, 0x2724
	  bne-      .loc_0xE4

	.loc_0x64:
	  lis       r4, 0x804E
	  lis       r3, 0x804E
	  subi      r0, r4, 0x7B98
	  li        r5, 0x2721
	  stw       r0, 0x8(r1)
	  subi      r4, r3, 0x7BA8
	  li        r3, 0
	  li        r0, 0x1
	  stw       r4, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stw       r31, 0x14(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE4
	  bl        0x6D848
	  li        r3, 0x1
	  b         .loc_0xE8

	.loc_0xE4:
	  li        r3, 0

	.loc_0xE8:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE13C
 * Size:	00009C
 */
void Screen::Game2DMgr::check_CaveMoreMenu()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x557C4
	  mr.       r31, r3
	  beq-      .loc_0x80
	  lis       r4, 0x4F
	  lis       r6, 0x4D4F
	  lis       r5, 0x4341
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x5245
	  addi      r5, r5, 0x5645
	  bl        -0xEEE58
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x78
	  lbz       r0, 0x1F(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x58
	  li        r31, 0
	  b         .loc_0x84

	.loc_0x58:
	  lbz       r0, 0x1E(r31)
	  li        r3, 0x2
	  cmplwi    r0, 0
	  beq-      .loc_0x6C
	  li        r3, 0x1

	.loc_0x6C:
	  mr        r31, r3
	  bl        0x6D99C
	  b         .loc_0x84

	.loc_0x78:
	  li        r31, -0x1
	  b         .loc_0x84

	.loc_0x80:
	  li        r31, -0x2

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE1D8
 * Size:	0000AC
 */
void Screen::Game2DMgr::open_FinalResult(kh::Screen::DispFinalResult&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804E
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  lis       r6, 0x804E
	  stw       r31, 0x1C(r1)
	  subi      r7, r6, 0x7BA8
	  li        r6, 0x4E26
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stb       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r0, 0x11(r1)
	  stb       r0, 0x10(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  li        r3, 0x1
	  b         .loc_0x98

	.loc_0x94:
	  li        r3, 0

	.loc_0x98:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE284
 * Size:	00008C
 */
void Screen::Game2DMgr::check_FinalResult() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55694
	  cmpwi     r3, 0x4E26
	  beq-      .loc_0x2C
	  li        r3, -0x1
	  b         .loc_0x78

	.loc_0x2C:
	  lwz       r3, 0x18(r31)
	  bl        0x55660
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x465F
	  bl        -0xEEFAC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x664
	  subi      r5, r5, 0x7A7C
	  crclr     6, 0x6
	  bl        -0x3D3CAC

	.loc_0x6C:
	  lwz       r3, 0x18(r31)
	  bl        0x55620
	  lwz       r3, 0x10(r3)

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE310
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_CaveResult(kh::Screen::DispCaveResult&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x4E20
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE3B8
 * Size:	00008C
 */
void Screen::Game2DMgr::check_CaveResult() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55560
	  cmpwi     r3, 0x4E20
	  beq-      .loc_0x2C
	  li        r3, -0x1
	  b         .loc_0x78

	.loc_0x2C:
	  lwz       r3, 0x18(r31)
	  bl        0x5552C
	  lis       r5, 0x5253
	  li        r4, 0x4B48
	  addi      r6, r5, 0x4C54
	  li        r5, 0x435F
	  bl        -0xEF0E0
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x678
	  subi      r5, r5, 0x7A7C
	  crclr     6, 0x6
	  bl        -0x3D3DE0

	.loc_0x6C:
	  lwz       r3, 0x18(r31)
	  bl        0x554EC
	  lwz       r3, 0x34(r3)

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE444
 * Size:	0000AC
 */
void Screen::Game2DMgr::open_DayEndResult(kh::Screen::DispDayEndResult&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r6, 0x804E
	  li        r5, 0
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  lis       r6, 0x804E
	  stw       r31, 0x1C(r1)
	  subi      r7, r6, 0x7BA8
	  li        r6, 0x4E2A
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stb       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r0, 0x11(r1)
	  stb       r0, 0x10(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x94
	  li        r3, 0x1
	  b         .loc_0x98

	.loc_0x94:
	  li        r3, 0

	.loc_0x98:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE4F0
 * Size:	0000B0
 */
void Screen::Game2DMgr::check_DayEndResult() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55428
	  cmpwi     r3, 0x4E23
	  beq-      .loc_0x4C
	  lwz       r3, 0x18(r31)
	  bl        0x55418
	  cmpwi     r3, 0x4E24
	  beq-      .loc_0x4C
	  lwz       r3, 0x18(r31)
	  bl        0x55408
	  cmpwi     r3, 0x4E25
	  beq-      .loc_0x4C
	  li        r3, -0x1
	  b         .loc_0x9C

	.loc_0x4C:
	  lwz       r3, 0x18(r31)
	  bl        0x553D4
	  lis       r4, 0x5253
	  lis       r5, 0x44
	  addi      r6, r4, 0x4C54
	  li        r4, 0x4B48
	  addi      r5, r5, 0x455F
	  bl        -0xEF23C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x90
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x697
	  subi      r5, r5, 0x7A7C
	  crclr     6, 0x6
	  bl        -0x3D3F3C

	.loc_0x90:
	  lwz       r3, 0x18(r31)
	  bl        0x55390
	  lwz       r3, 0x58(r3)

	.loc_0x9C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE5A0
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_PayDept(kh::Screen::DispPayDept&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x4E27
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE648
 * Size:	00005C
 */
void Screen::Game2DMgr::check_PayDept() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x552C8
	  cmpwi     r3, 0x4E27
	  bne-      .loc_0x40
	  lwz       r3, 0x18(r30)
	  bl        0x552F8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  li        r31, 0x1

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE6A4
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_Save(og::Screen::DispMemberSave&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2725
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE74C
 * Size:	00005C
 */
void Screen::Game2DMgr::check_Save() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x551C4
	  cmpwi     r3, 0x2725
	  bne-      .loc_0x40
	  lwz       r3, 0x18(r30)
	  bl        0x551F4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x40
	  li        r31, 0x1

	.loc_0x40:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE7A8
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_FinalMessage(og::Screen::DispMemberFinalMessage&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2726
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE850
 * Size:	000048
 */
void Screen::Game2DMgr::check_FinalMessage() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x550C8
	  cmpwi     r3, 0x2726
	  beq-      .loc_0x2C
	  li        r3, -0xA
	  b         .loc_0x34

	.loc_0x2C:
	  lwz       r3, 0x18(r31)
	  bl        0x55118

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE898
 * Size:	000070
 */
void Screen::Game2DMgr::stopFinalFloorSound()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55080
	  cmpwi     r3, 0x4E22
	  bne-      .loc_0x5C
	  lwz       r3, 0x18(r31)
	  lwz       r31, 0x1C(r3)
	  lwz       r0, 0x220(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7A6C
	  li        r4, 0x7C
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D42A8

	.loc_0x54:
	  lwz       r3, 0x220(r31)
	  bl        0x3B8C

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE908
 * Size:	000070
 */
void Screen::Game2DMgr::restartFinalFloorSound()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x55010
	  cmpwi     r3, 0x4E22
	  bne-      .loc_0x5C
	  lwz       r3, 0x18(r31)
	  lwz       r31, 0x1C(r3)
	  lwz       r0, 0x220(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x54
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7A6C
	  li        r4, 0x7D
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D4318

	.loc_0x54:
	  lwz       r3, 0x220(r31)
	  bl        0x3B5C

	.loc_0x5C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FE978
 * Size:	000090
 */
void Screen::Game2DMgr::check_ReadyGo() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x54FA0
	  cmpwi     r3, 0x4E21
	  beq-      .loc_0x2C
	  li        r3, -0x1
	  b         .loc_0x7C

	.loc_0x2C:
	  lwz       r3, 0x18(r31)
	  bl        0x54F6C
	  lis       r4, 0x595F
	  lis       r5, 0x5245
	  addi      r6, r4, 0x474F
	  li        r4, 0x4B48
	  addi      r5, r5, 0x4144
	  bl        -0xEF6A4
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x70
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x6E6
	  subi      r5, r5, 0x7A7C
	  crclr     6, 0x6
	  bl        -0x3D43A4

	.loc_0x70:
	  lwz       r3, 0x18(r31)
	  bl        0x54F28
	  lwz       r3, 0x8(r3)

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FEA08
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_WinLoseReason(kh::Screen::DispWinLoseReason&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x4E29
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FEAB0
 * Size:	000068
 */
void Screen::Game2DMgr::check_WinLoseReason() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x54E68
	  cmpwi     r3, 0x4E29
	  beq-      .loc_0x2C
	  li        r3, 0
	  b         .loc_0x54

	.loc_0x2C:
	  lwz       r4, 0x18(r31)
	  li        r3, 0
	  lwz       r4, 0x1C(r4)
	  lbz       r0, 0x230(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  lbz       r0, 0x231(r4)
	  cmplwi    r0, 0
	  beq-      .loc_0x54
	  li        r3, 0x1

	.loc_0x54:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FEB18
 * Size:	0000A8
 */
void Screen::Game2DMgr::open_WinLose(kh::Screen::DispWinLose&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x4E28
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x90
	  li        r3, 0x1
	  b         .loc_0x94

	.loc_0x90:
	  li        r3, 0

	.loc_0x94:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FEBC0
 * Size:	000090
 */
void Screen::Game2DMgr::check_WinLose() const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x54D58
	  cmpwi     r3, 0x4E28
	  beq-      .loc_0x2C
	  li        r3, -0x1
	  b         .loc_0x7C

	.loc_0x2C:
	  lwz       r3, 0x18(r31)
	  bl        0x54D24
	  lis       r4, 0x4C4F
	  lis       r5, 0x5749
	  addi      r6, r4, 0x5345
	  li        r4, 0x4B48
	  addi      r5, r5, 0x4E5F
	  bl        -0xEF8EC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x70
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x709
	  subi      r5, r5, 0x7A7C
	  crclr     6, 0x6
	  bl        -0x3D45EC

	.loc_0x70:
	  lwz       r3, 0x18(r31)
	  bl        0x54CE0
	  lwz       r3, 0xC(r3)

	.loc_0x7C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FEC50
 * Size:	0000D4
 */
void Screen::Game2DMgr::open_TimeUp1P()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  stw       r0, 0x34(r1)
	  addi      r10, r5, 0x1148
	  subi      r7, r4, 0x7B98
	  lis       r6, 0x804C
	  stw       r31, 0x2C(r1)
	  li        r11, 0
	  li        r8, 0x1
	  addi      r0, r1, 0x18
	  stw       r10, 0x18(r1)
	  lis       r4, 0x804E
	  addi      r10, r6, 0xF5C
	  li        r9, 0x4
	  li        r5, 0x4E28
	  subi      r6, r4, 0x7BA8
	  stw       r7, 0x8(r1)
	  mr        r31, r3
	  addi      r4, r1, 0x8
	  stw       r11, 0x1C(r1)
	  stw       r10, 0x18(r1)
	  stw       r9, 0x20(r1)
	  stw       r8, 0x24(r1)
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stb       r11, 0x10(r1)
	  stb       r8, 0x11(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  li        r3, 0x1
	  b         .loc_0xC0

	.loc_0xBC:
	  li        r3, 0

	.loc_0xC0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FED24
 * Size:	0000D4
 */
void Screen::Game2DMgr::open_TimeUp2P()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  lis       r5, 0x804B
	  lis       r4, 0x804E
	  stw       r0, 0x34(r1)
	  addi      r10, r5, 0x1148
	  subi      r7, r4, 0x7B98
	  lis       r6, 0x804C
	  stw       r31, 0x2C(r1)
	  li        r11, 0
	  li        r8, 0x1
	  addi      r0, r1, 0x18
	  stw       r10, 0x18(r1)
	  lis       r4, 0x804E
	  addi      r10, r6, 0xF5C
	  li        r9, 0x5
	  li        r5, 0x4E28
	  subi      r6, r4, 0x7BA8
	  stw       r7, 0x8(r1)
	  mr        r31, r3
	  addi      r4, r1, 0x8
	  stw       r11, 0x1C(r1)
	  stw       r10, 0x18(r1)
	  stw       r9, 0x20(r1)
	  stw       r8, 0x24(r1)
	  stw       r6, 0x8(r1)
	  stw       r5, 0xC(r1)
	  stb       r11, 0x10(r1)
	  stb       r8, 0x11(r1)
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xBC
	  li        r3, 0x1
	  b         .loc_0xC0

	.loc_0xBC:
	  li        r3, 0

	.loc_0xC0:
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FEDF8
 * Size:	000158
 */
void Screen::Game2DMgr::open_Contena(og::Screen::DispMemberContena&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x54C08
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x140

	.loc_0x34:
	  lfs       f1, 0x1CDC(r2)
	  mr        r3, r30
	  bl        0x12A8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x140

	.loc_0x50:
	  lwz       r0, 0x8(r31)
	  li        r6, 0
	  cmpwi     r0, 0x2
	  beq-      .loc_0x94
	  bge-      .loc_0x74
	  cmpwi     r0, 0
	  beq-      .loc_0x84
	  bge-      .loc_0x8C
	  b         .loc_0xA8

	.loc_0x74:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x9C
	  bge-      .loc_0xA8
	  b         .loc_0xA4

	.loc_0x84:
	  li        r6, 0x2714
	  b         .loc_0xA8

	.loc_0x8C:
	  li        r6, 0x2715
	  b         .loc_0xA8

	.loc_0x94:
	  li        r6, 0x2716
	  b         .loc_0xA8

	.loc_0x9C:
	  li        r6, 0x2717
	  b         .loc_0xA8

	.loc_0xA4:
	  li        r6, 0x2718

	.loc_0xA8:
	  lis       r3, 0x804E
	  lis       r4, 0x804E
	  subi      r0, r3, 0x7B98
	  li        r3, 0
	  stw       r0, 0x8(r1)
	  subi      r5, r4, 0x7BA8
	  li        r0, 0x1
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r3, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stw       r31, 0x14(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x13C
	  lwz       r0, 0x8(r31)
	  cmpwi     r0, 0x3
	  bge-      .loc_0x134
	  cmpwi     r0, 0
	  bge-      .loc_0x130
	  b         .loc_0x134

	.loc_0x130:
	  bl        0x6CA34

	.loc_0x134:
	  li        r3, 0x1
	  b         .loc_0x140

	.loc_0x13C:
	  li        r3, 0

	.loc_0x140:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FEF50
 * Size:	0000C8
 */
void Screen::Game2DMgr::check_Contena()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, -0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x549C0
	  subi      r0, r3, 0x2714
	  cmplwi    r0, 0x3
	  ble-      .loc_0x38
	  cmpwi     r3, 0x2718
	  bne-      .loc_0xAC

	.loc_0x38:
	  lwz       r3, 0x18(r30)
	  bl        0x54988
	  lis       r4, 0x4F
	  lis       r6, 0x5445
	  lis       r5, 0x43
	  mr        r31, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4E41
	  addi      r5, r5, 0x4F4E
	  bl        -0xEFC90
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA8
	  lwz       r0, 0x30(r31)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x8C
	  bge-      .loc_0x94
	  cmpwi     r0, 0x3
	  bge-      .loc_0x84
	  b         .loc_0x94

	.loc_0x84:
	  li        r31, 0x1
	  b         .loc_0x98

	.loc_0x8C:
	  li        r31, 0x2
	  b         .loc_0x98

	.loc_0x94:
	  li        r31, 0

	.loc_0x98:
	  cmpwi     r31, 0
	  beq-      .loc_0xAC
	  bl        0x6CB58
	  b         .loc_0xAC

	.loc_0xA8:
	  li        r31, -0x1

	.loc_0xAC:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF018
 * Size:	0000A8
 */
void Screen::Game2DMgr::result_Contena()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  li        r30, 0
	  lwz       r3, 0x18(r3)
	  bl        0x548F8
	  subi      r0, r3, 0x2714
	  cmplwi    r0, 0x3
	  ble-      .loc_0x38
	  cmpwi     r3, 0x2718
	  bne-      .loc_0x70

	.loc_0x38:
	  lwz       r3, 0x18(r31)
	  bl        0x548C0
	  lis       r4, 0x4F
	  lis       r6, 0x5445
	  lis       r5, 0x43
	  mr        r31, r3
	  addi      r4, r4, 0x4741
	  addi      r6, r6, 0x4E41
	  addi      r5, r5, 0x4F4E
	  bl        -0xEFD58
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x8C
	  lha       r30, 0x34(r31)
	  b         .loc_0x8C

	.loc_0x70:
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x791
	  subi      r5, r5, 0x7A5C
	  crclr     6, 0x6
	  bl        -0x3D4A60

	.loc_0x8C:
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
 * Address:	803FF0C0
 * Size:	000244
 */
void Screen::Game2DMgr::open_UfoMenu(og::Screen::DispMemberUfoGroup&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  mr        r31, r4
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x54940
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x34
	  li        r3, 0
	  b         .loc_0x22C

	.loc_0x34:
	  lfs       f1, 0x1CDC(r2)
	  mr        r3, r30
	  bl        0xFE0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x50
	  li        r3, 0
	  b         .loc_0x22C

	.loc_0x50:
	  lbz       r3, 0x88(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x100
	  lbz       r0, 0x89(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x100
	  li        r7, 0x1
	  lis       r3, 0x804E
	  stb       r7, 0x44(r31)
	  lis       r4, 0x804E
	  subi      r6, r3, 0x7B98
	  li        r3, 0x2719
	  stb       r7, 0x7C(r31)
	  li        r0, 0
	  subi      r5, r4, 0x7BA8
	  addi      r4, r1, 0x28
	  stw       r6, 0x28(r1)
	  stw       r5, 0x28(r1)
	  stw       r3, 0x2C(r1)
	  stb       r0, 0x30(r1)
	  stb       r7, 0x31(r1)
	  stw       r31, 0x34(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x228
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x228
	  bl        0x6C7B8
	  lwz       r3, -0x67A8(r13)
	  li        r4, 0x1803
	  li        r5, 0
	  bl        -0xC6B84
	  li        r3, 0x1
	  b         .loc_0x22C

	.loc_0x100:
	  cmplwi    r3, 0
	  beq-      .loc_0x190
	  li        r7, 0
	  lis       r4, 0x804E
	  stb       r7, 0x44(r31)
	  li        r6, 0x1
	  lis       r3, 0x804E
	  subi      r5, r4, 0x7B98
	  stw       r6, 0x10(r31)
	  li        r0, 0x2717
	  subi      r3, r3, 0x7BA8
	  addi      r4, r1, 0x18
	  stw       r5, 0x18(r1)
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)
	  stb       r7, 0x20(r1)
	  stb       r6, 0x21(r1)
	  stw       r31, 0x24(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x228
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x228
	  bl        0x6C718
	  li        r3, 0x1
	  b         .loc_0x22C

	.loc_0x190:
	  lbz       r0, 0x89(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x228
	  li        r7, 0
	  lis       r3, 0x804E
	  stb       r7, 0x7C(r31)
	  li        r0, 0x2
	  lis       r4, 0x804E
	  subi      r6, r3, 0x7B98
	  stw       r0, 0x10(r31)
	  li        r3, 0x2718
	  li        r0, 0x1
	  subi      r5, r4, 0x7BA8
	  stw       r6, 0x8(r1)
	  addi      r4, r1, 0x8
	  stw       r5, 0x8(r1)
	  stw       r3, 0xC(r1)
	  stb       r7, 0x10(r1)
	  stb       r0, 0x11(r1)
	  stw       r31, 0x14(r1)
	  lwz       r3, 0x18(r30)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x228
	  lwz       r3, 0x18(r30)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x228
	  bl        0x6C680
	  li        r3, 0x1
	  b         .loc_0x22C

	.loc_0x228:
	  li        r3, 0

	.loc_0x22C:
	  lwz       r0, 0x44(r1)
	  lwz       r31, 0x3C(r1)
	  lwz       r30, 0x38(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF304
 * Size:	000130
 */
void Screen::Game2DMgr::check_UfoMenu()
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
	  mr        r29, r3
	  lwz       r3, 0x18(r3)
	  bl        0x545EC
	  mr        r31, r3
	  lwz       r3, 0x18(r29)
	  bl        0x545FC
	  cmpwi     r3, 0x2718
	  beq-      .loc_0xC4
	  bge-      .loc_0x4C
	  cmpwi     r3, 0x2717
	  bge-      .loc_0x74
	  b         .loc_0x110

	.loc_0x4C:
	  cmpwi     r3, 0x271A
	  bge-      .loc_0x110
	  lwz       r0, 0x10(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x6C
	  li        r30, 0x1
	  bl        0x6C7E0
	  b         .loc_0x110

	.loc_0x6C:
	  li        r30, 0
	  b         .loc_0x110

	.loc_0x74:
	  lwz       r0, 0x48(r31)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x90
	  bge-      .loc_0xBC
	  cmpwi     r0, 0x3
	  bge-      .loc_0x9C
	  b         .loc_0xBC

	.loc_0x90:
	  li        r30, 0x2
	  bl        0x6C7B0
	  b         .loc_0x110

	.loc_0x9C:
	  lbz       r0, 0x44(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  li        r30, 0
	  b         .loc_0x110

	.loc_0xB0:
	  li        r30, 0x1
	  bl        0x6C790
	  b         .loc_0x110

	.loc_0xBC:
	  li        r30, 0
	  b         .loc_0x110

	.loc_0xC4:
	  lwz       r0, 0x80(r31)
	  cmpwi     r0, 0x4
	  beq-      .loc_0xE0
	  bge-      .loc_0x10C
	  cmpwi     r0, 0x3
	  bge-      .loc_0xEC
	  b         .loc_0x10C

	.loc_0xE0:
	  li        r30, 0x2
	  bl        0x6C760
	  b         .loc_0x110

	.loc_0xEC:
	  lbz       r0, 0x7C(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0x100
	  li        r30, 0
	  b         .loc_0x110

	.loc_0x100:
	  li        r30, 0x1
	  bl        0x6C740
	  b         .loc_0x110

	.loc_0x10C:
	  li        r30, 0

	.loc_0x110:
	  lwz       r0, 0x24(r1)
	  mr        r3, r30
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
 * Address:	803FF434
 * Size:	000098
 */
void Screen::Game2DMgr::result_UfoMenu(int*, int*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  lwz       r3, 0x18(r3)
	  bl        0x544B4
	  mr        r31, r3
	  lwz       r3, 0x18(r28)
	  bl        0x544C4
	  cmpwi     r3, 0x2718
	  beq-      .loc_0x68
	  bge-      .loc_0x78
	  cmpwi     r3, 0x2717
	  bge-      .loc_0x54
	  b         .loc_0x78

	.loc_0x54:
	  lha       r3, 0x4C(r31)
	  li        r0, 0
	  stw       r3, 0x0(r29)
	  stw       r0, 0x0(r30)
	  b         .loc_0x78

	.loc_0x68:
	  li        r0, 0
	  stw       r0, 0x0(r29)
	  lha       r0, 0x84(r31)
	  stw       r0, 0x0(r30)

	.loc_0x78:
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

/*
 * --INFO--
 * Address:	803FF4CC
 * Size:	00009C
 */
void Screen::Game2DMgr::open_ZukanEnemy(Morimura::DispMemberZukanEnemy&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2734
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF568
 * Size:	00009C
 */
void Screen::Game2DMgr::open_ZukanItem(Morimura::DispMemberZukanItem&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2735
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF604
 * Size:	000030
 */
void Screen::Game2DMgr::isZukanEnemy()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x5431C
	  subfic    r0, r3, 0x2734
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF634
 * Size:	000030
 */
void Screen::Game2DMgr::isZukanItem()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x542EC
	  subfic    r0, r3, 0x2735
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF664
 * Size:	000084
 */
void Screen::Game2DMgr::check_ZukanItemRequest(int&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x18(r3)
	  bl        0x542A4
	  cmpwi     r3, 0x2735
	  bne-      .loc_0x64
	  lwz       r3, 0x18(r29)
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lwz       r3, 0x220(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  mr        r4, r30
	  bl        -0x8ADC0
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

	.loc_0x60:
	  mr        r31, r3

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	803FF6E8
 * Size:	000084
 */
void Screen::Game2DMgr::check_ZukanEnemyRequest(int&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  li        r31, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  lwz       r3, 0x18(r3)
	  bl        0x54220
	  cmpwi     r3, 0x2734
	  bne-      .loc_0x64
	  lwz       r3, 0x18(r29)
	  lwz       r3, 0x1C(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x64
	  lwz       r3, 0x220(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x5C
	  mr        r4, r30
	  bl        -0x8AE44
	  b         .loc_0x60

	.loc_0x5C:
	  li        r3, 0

	.loc_0x60:
	  mr        r31, r3

	.loc_0x64:
	  lwz       r0, 0x24(r1)
	  mr        r3, r31
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
 * Address:	803FF76C
 * Size:	000090
 */
void Screen::Game2DMgr::getZukanEnemyCurrSelectId()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, -0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x541A4
	  cmpwi     r3, 0x2734
	  bne-      .loc_0x74
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x893
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D5180

	.loc_0x58:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  bl        -0x8AEC8
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, -0x1

	.loc_0x70:
	  mr        r31, r3

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF7FC
 * Size:	000090
 */
void Screen::Game2DMgr::getZukanItemCurrSelectId()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, -0x1
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x54114
	  cmpwi     r3, 0x2735
	  bne-      .loc_0x74
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8A2
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D5210

	.loc_0x58:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  bl        -0x8AF58
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, -0x1

	.loc_0x70:
	  mr        r31, r3

	.loc_0x74:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF88C
 * Size:	0000BC
 */
void Screen::Game2DMgr::requireZukanRequest()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x5408C
	  cmpwi     r3, 0x2735
	  bne-      .loc_0x64
	  lwz       r3, 0x18(r31)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8B3
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D5298

	.loc_0x50:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  bl        -0x8B050
	  b         .loc_0xA8

	.loc_0x64:
	  cmpwi     r3, 0x2734
	  bne-      .loc_0xA8
	  lwz       r3, 0x18(r31)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x98
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8B9
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D52E0

	.loc_0x98:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  bl        -0x8B098

	.loc_0xA8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FF948
 * Size:	0000BC
 */
void Screen::Game2DMgr::requireZukanEffectOff()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x53FD0
	  cmpwi     r3, 0x2735
	  bne-      .loc_0x64
	  lwz       r3, 0x18(r31)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8C7
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D5354

	.loc_0x50:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  bl        -0x8B0F4
	  b         .loc_0xA8

	.loc_0x64:
	  cmpwi     r3, 0x2734
	  bne-      .loc_0xA8
	  lwz       r3, 0x18(r31)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x98
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8CD
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D539C

	.loc_0x98:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xA8
	  bl        -0x8B13C

	.loc_0xA8:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFA04
 * Size:	0000E4
 */
void Screen::Game2DMgr::isZukanEnlargedWindow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x53F0C
	  cmpwi     r3, 0x2735
	  bne-      .loc_0x78
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8DE
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D5418

	.loc_0x58:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  bl        -0x8B1AC
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
	  mr        r31, r3
	  b         .loc_0xC8

	.loc_0x78:
	  cmpwi     r3, 0x2734
	  bne-      .loc_0xC8
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0xAC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8E5
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D546C

	.loc_0xAC:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  bl        -0x8B200
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r3, 0

	.loc_0xC4:
	  mr        r31, r3

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFAE8
 * Size:	0000E4
 */
void Screen::Game2DMgr::isZukanMemoWindow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x53E28
	  cmpwi     r3, 0x2735
	  bne-      .loc_0x78
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x8FA
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D54FC

	.loc_0x58:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x6C
	  bl        -0x8B274
	  b         .loc_0x70

	.loc_0x6C:
	  li        r3, 0

	.loc_0x70:
	  mr        r31, r3
	  b         .loc_0xC8

	.loc_0x78:
	  cmpwi     r3, 0x2734
	  bne-      .loc_0xC8
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0xAC
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x901
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D5550

	.loc_0xAC:
	  lwz       r3, 0x220(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0xC0
	  bl        -0x8B2C8
	  b         .loc_0xC4

	.loc_0xC0:
	  li        r3, 0

	.loc_0xC4:
	  mr        r31, r3

	.loc_0xC8:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFBCC
 * Size:	0000C4
 */
void Screen::Game2DMgr::isAppearConfirmWindow()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  li        r31, 0
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lwz       r3, 0x18(r3)
	  bl        0x53D44
	  cmpwi     r3, 0x2735
	  bne-      .loc_0x68
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x58
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x929
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D55E0

	.loc_0x58:
	  mr        r3, r31
	  bl        -0x8462C
	  mr        r31, r3
	  b         .loc_0xA8

	.loc_0x68:
	  cmpwi     r3, 0x2734
	  bne-      .loc_0xA8
	  lwz       r3, 0x18(r30)
	  lwz       r31, 0x1C(r3)
	  cmplwi    r31, 0
	  bne-      .loc_0x9C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x7AF0
	  li        r4, 0x930
	  subi      r5, r5, 0x7ADC
	  crclr     6, 0x6
	  bl        -0x3D5624

	.loc_0x9C:
	  mr        r3, r31
	  bl        -0x87D1C
	  mr        r31, r3

	.loc_0xA8:
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFC90
 * Size:	00009C
 */
void Screen::Game2DMgr::open_ChallengeSelect(
    Morimura::DispMemberChallengeSelect&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2737
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFD2C
 * Size:	00006C
 */
void Screen::Game2DMgr::check_ChallengeSelect(int&, int&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, -0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  stw       r0, 0x0(r4)
	  li        r0, 0
	  stw       r0, 0x0(r5)
	  lwz       r3, 0x18(r3)
	  bl        0x53BB8
	  lwz       r0, 0x1C(r3)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x50
	  lwz       r0, 0x10(r3)
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x18(r3)
	  stw       r0, 0x0(r31)

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  lwz       r3, 0x1C(r3)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFD98
 * Size:	00009C
 */
void Screen::Game2DMgr::open_ChallengeResult(
    Morimura::DispMemberChallengeResult&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2738
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFE34
 * Size:	000034
 */
void Screen::Game2DMgr::isEndChallengeResult()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x18(r3)
	  bl        0x53AD0
	  lwz       r0, 0x10(r3)
	  subfic    r0, r0, 0x2
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,24,31
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFE68
 * Size:	00009C
 */
void Screen::Game2DMgr::open_VsSelect(Morimura::DispMemberVsSelect&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2739
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFF04
 * Size:	000078
 */
void Screen::Game2DMgr::check_VsSelect(int&, int&, int&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, -0x1
	  stw       r31, 0x1C(r1)
	  mr        r31, r6
	  stw       r30, 0x18(r1)
	  mr        r30, r5
	  stw       r29, 0x14(r1)
	  mr        r29, r4
	  stw       r0, 0x0(r4)
	  lwz       r3, 0x18(r3)
	  bl        0x539E0
	  lwz       r0, 0x34(r3)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x58
	  lwz       r0, 0x14(r3)
	  stw       r0, 0x0(r29)
	  lwz       r0, 0x1C(r3)
	  stw       r0, 0x0(r30)
	  lwz       r0, 0x20(r3)
	  stw       r0, 0x0(r31)

	.loc_0x58:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r3, 0x34(r3)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803FFF7C
 * Size:	00009C
 */
void Screen::Game2DMgr::open_HighScore(Morimura::DispMemberHighScore&)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x804E
	  lis       r6, 0x804E
	  stw       r0, 0x24(r1)
	  subi      r0, r6, 0x7B98
	  subi      r7, r5, 0x7BA8
	  li        r6, 0x2736
	  stw       r31, 0x1C(r1)
	  li        r5, 0
	  mr        r31, r3
	  stw       r0, 0x8(r1)
	  li        r0, 0x1
	  stw       r4, 0x14(r1)
	  addi      r4, r1, 0x8
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stb       r5, 0x10(r1)
	  stb       r0, 0x11(r1)
	  lwz       r3, 0x18(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x84
	  lwz       r3, 0x18(r31)
	  li        r4, 0
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x84:
	  li        r3, 0

	.loc_0x88:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400018
 * Size:	000058
 */
void Screen::Game2DMgr::isEndHighScore()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r3, 0x18(r3)
	  bl        0x53900
	  cmpwi     r3, 0x2736
	  bne-      .loc_0x40
	  lwz       r3, 0x18(r31)
	  bl        0x538D4
	  lbz       r4, 0xC(r3)
	  li        r0, 0
	  stb       r0, 0xC(r3)
	  mr        r3, r4
	  b         .loc_0x44

	.loc_0x40:
	  li        r3, 0

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400070
 * Size:	00006C
 */
void Screen::Game2DMgr::drawKanteiMsg(Graphics&)
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
	  lwz       r3, 0x18(r3)
	  bl        0x538A0
	  cmpwi     r3, 0x2722
	  bne-      .loc_0x50
	  lwz       r3, 0x18(r30)
	  lwz       r3, 0x1C(r3)
	  lwz       r3, 0x220(r3)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  mr        r4, r31
	  bl        -0xE6A50

	.loc_0x48:
	  li        r3, 0x1
	  b         .loc_0x54

	.loc_0x50:
	  li        r3, 0

	.loc_0x54:
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
 * Address:	804000DC
 * Size:	00008C
 */
void Screen::Game2DMgr::checkDayEnd(float) const
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  lwz       r3, -0x6C18(r13)
	  fmr       f31, f1
	  cmplwi    r3, 0
	  bne-      .loc_0x30
	  li        r3, 0
	  b         .loc_0x70

	.loc_0x30:
	  lwz       r31, 0x40(r3)
	  mr        r3, r31
	  bl        -0x2D8E50
	  lfs       f4, 0x3C(r31)
	  lfs       f2, 0x1F4(r31)
	  lfs       f0, 0x64(r31)
	  fsubs     f2, f2, f4
	  lfs       f3, 0x1CE0(r2)
	  fsubs     f0, f0, f4
	  fsubs     f1, f3, f1
	  fdivs     f0, f2, f0
	  fsubs     f0, f3, f0
	  fdivs     f0, f1, f0
	  fcmpo     cr0, f0, f31
	  mfcr      r0
	  rlwinm    r3,r0,1,31,31

	.loc_0x70:
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400168
 * Size:	000008
 */
void Screen::EndSceneArg::getClassSize()
{
	/*
	.loc_0x0:
	  li        r3, 0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400170
 * Size:	000008
 */
void og::newScreen::SArgChallenge1P::getSceneType() const
{
	/*
	.loc_0x0:
	  li        r3, 0x2727
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400178
 * Size:	000008
 */
void og::newScreen::SArgChallenge1P::getClassSize()
{
	/*
	.loc_0x0:
	  li        r3, 0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400180
 * Size:	000008
 */
void og::newScreen::SArgChallenge2P::getSceneType() const
{
	/*
	.loc_0x0:
	  li        r3, 0x2724
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400188
 * Size:	000008
 */
void og::newScreen::SArgChallenge2P::getClassSize()
{
	/*
	.loc_0x0:
	  li        r3, 0x8
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400190
 * Size:	000008
 */
void kh::Screen::DispReadyGo::getSize()
{
	/*
	.loc_0x0:
	  li        r3, 0x14
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80400198
 * Size:	000008
 */
void kh::Screen::DispReadyGo::getOwnerID()
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804001A0
 * Size:	000014
 */
void kh::Screen::DispReadyGo::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x595F
	  lis       r3, 0x5245
	  addi      r4, r4, 0x474F
	  addi      r3, r3, 0x4144
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804001B4
 * Size:	000008
 */
void kh::Screen::DispFinalFloor::getSize()
{
	/*
	.loc_0x0:
	  li        r3, 0xC
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804001BC
 * Size:	000008
 */
void kh::Screen::DispFinalFloor::getOwnerID()
{
	/*
	.loc_0x0:
	  li        r3, 0x4B48
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804001C4
 * Size:	000014
 */
void kh::Screen::DispFinalFloor::getMemberID()
{
	/*
	.loc_0x0:
	  lis       r4, 0x5F46
	  lis       r3, 0x46
	  addi      r4, r4, 0x4C52
	  addi      r3, r3, 0x494E
	  blr
	*/
}
