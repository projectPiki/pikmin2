

/*
 * --INFO--
 * Address:	80253E8C
 * Size:	000050
 */
void Game::Pom::Mgr::Mgr(int, unsigned char)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x12520C
	  lis       r3, 0x804C
	  lis       r4, 0x8048
	  addi      r5, r3, 0x1C48
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  addi      r0, r4, 0x4958
	  stw       r5, 0x4(r31)
	  stw       r0, 0x18(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80253EDC
 * Size:	0001F4
 */
void Game::Pom::Mgr::birth(Game::EnemyBirthArg&)
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
	  stw       r29, 0x14(r1)
	  lwz       r5, -0x6C18(r13)
	  cmplwi    r5, 0
	  beq-      .loc_0x1CC
	  lbz       r0, 0x48(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x1CC
	  lwz       r0, 0x44(r5)
	  cmpwi     r0, 0
	  bne-      .loc_0x1CC
	  lwz       r0, 0x28(r31)
	  cmpwi     r0, 0x6
	  bne-      .loc_0xC8
	  lwz       r29, 0x58(r5)
	  cmplwi    r29, 0
	  beq-      .loc_0x1CC
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x2
	  blt-      .loc_0x98
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x745F
	  cmplwi    r0, 0x3031
	  bne-      .loc_0x1CC

	.loc_0x98:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x3
	  addi      r3, r3, 0x60
	  bl        -0x629D0
	  mr        r29, r3
	  li        r3, 0x3
	  bl        -0x83050
	  add       r0, r3, r29
	  cmpwi     r0, 0x14
	  blt-      .loc_0x1CC
	  li        r3, 0
	  b         .loc_0x1D8

	.loc_0xC8:
	  cmpwi     r0, 0x7
	  bne-      .loc_0x184
	  lwz       r29, 0x58(r5)
	  cmplwi    r29, 0
	  beq-      .loc_0x1CC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  bl        -0x6CF18
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x15C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x2
	  blt-      .loc_0x12C
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x665F
	  cmplwi    r0, 0x3032
	  bne-      .loc_0x1CC

	.loc_0x12C:
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x4
	  addi      r3, r3, 0x60
	  bl        -0x62A64
	  mr        r29, r3
	  li        r3, 0x4
	  bl        -0x830E4
	  add       r0, r3, r29
	  cmpwi     r0, 0x14
	  blt-      .loc_0x1CC
	  li        r3, 0
	  b         .loc_0x1D8

	.loc_0x15C:
	  mr        r3, r29
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x78(r12)
	  mtctr     r12
	  bctrl
	  subis     r0, r3, 0x665F
	  cmplwi    r0, 0x3032
	  beq-      .loc_0x1CC
	  li        r3, 0
	  b         .loc_0x1D8

	.loc_0x184:
	  cmpwi     r0, 0x3
	  bne-      .loc_0x1A8
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0
	  bl        -0x6CFC8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1CC
	  li        r3, 0
	  b         .loc_0x1D8

	.loc_0x1A8:
	  cmpwi     r0, 0x5
	  bne-      .loc_0x1CC
	  lwz       r3, -0x6B70(r13)
	  li        r4, 0x2
	  bl        -0x6CFEC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x1CC
	  li        r3, 0
	  b         .loc_0x1D8

	.loc_0x1CC:
	  mr        r3, r30
	  mr        r4, r31
	  bl        -0x124CE8

	.loc_0x1D8:
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
 * Address:	802540D0
 * Size:	000048
 */
void Game::Pom::Mgr::doAlloc()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0x8F8
	  bl        -0x230244
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x124864
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	80254118
 * Size:	0001C8
 */
void Game::Pom::Parms::Parms()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x4940
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        -0x14A99C
	  lis       r3, 0x804C
	  lis       r5, 0x6970
	  addi      r0, r3, 0x1C3C
	  addi      r4, r30, 0x8F4
	  stw       r0, 0xD8(r30)
	  li        r7, 0
	  addi      r0, r31, 0x30
	  addi      r3, r30, 0x804
	  stw       r4, 0x7F8(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x40
	  stw       r7, 0x7FC(r30)
	  stw       r0, 0x800(r30)
	  bl        0x1BF4E4
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r4, 0x5
	  stw       r0, 0x804(r30)
	  li        r7, 0x1
	  li        r0, 0x32
	  addi      r3, r30, 0x82C
	  stw       r4, 0x81C(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3131
	  addi      r6, r31, 0x54
	  stw       r7, 0x824(r30)
	  stw       r0, 0x828(r30)
	  bl        0x1BF4A8
	  lis       r3, 0x804B
	  lis       r5, 0x6970
	  subi      r0, r3, 0x5370
	  li        r7, 0x1
	  stw       r0, 0x82C(r30)
	  li        r0, 0x32
	  addi      r3, r30, 0x854
	  addi      r4, r30, 0x7F8
	  stw       r7, 0x844(r30)
	  addi      r5, r5, 0x3133
	  addi      r6, r31, 0x68
	  stw       r7, 0x84C(r30)
	  stw       r0, 0x850(r30)
	  bl        0x1BF470
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5370
	  li        r4, 0x5
	  stw       r0, 0x854(r30)
	  li        r7, 0x1
	  li        r0, 0x32
	  addi      r3, r30, 0x87C
	  stw       r4, 0x86C(r30)
	  addi      r4, r30, 0x7F8
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x7C
	  stw       r7, 0x874(r30)
	  stw       r0, 0x878(r30)
	  bl        0x1BF434
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x39D0(r2)
	  stw       r0, 0x87C(r30)
	  addi      r3, r30, 0x8A4
	  lfs       f1, -0x39CC(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x894(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x39C8(r2)
	  addi      r6, r31, 0x88
	  stfs      f1, 0x89C(r30)
	  stfs      f0, 0x8A0(r30)
	  bl        0x1BF3F8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x39C4(r2)
	  stw       r0, 0x8A4(r30)
	  addi      r3, r30, 0x8CC
	  lfs       f1, -0x39CC(r2)
	  addi      r4, r30, 0x7F8
	  stfs      f0, 0x8BC(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x39C8(r2)
	  addi      r6, r31, 0x94
	  stfs      f1, 0x8C4(r30)
	  stfs      f0, 0x8C8(r30)
	  bl        0x1BF3BC
	  lis       r3, 0x804B
	  lfs       f2, -0x39C0(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x39CC(r2)
	  stw       r0, 0x8CC(r30)
	  mr        r3, r30
	  lfs       f0, -0x39BC(r2)
	  stfs      f2, 0x8E4(r30)
	  stfs      f1, 0x8EC(r30)
	  stfs      f0, 0x8F0(r30)
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
 * Address:	802542E0
 * Size:	000188
 */
void Game::Pom::Mgr::createObj(int)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  mr        r31, r3
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  mulli     r3, r30, 0x300
	  stw       r29, 0x24(r1)
	  stw       r28, 0x20(r1)
	  addi      r3, r3, 0x10
	  bl        -0x230360
	  lis       r4, 0x8025
	  lis       r5, 0x8025
	  addi      r4, r4, 0x47A4
	  mr        r7, r30
	  addi      r5, r5, 0x4468
	  li        r6, 0x300
	  bl        -0x192938
	  lis       r4, 0x8048
	  stw       r3, 0x44(r31)
	  addi      r8, r4, 0x4C98
	  addi      r30, r1, 0x8
	  lwz       r7, 0x0(r8)
	  li        r28, 0
	  lwz       r6, 0x4(r8)
	  li        r29, 0
	  lwz       r5, 0x8(r8)
	  lwz       r4, 0xC(r8)
	  lwz       r3, 0x10(r8)
	  lwz       r0, 0x14(r8)
	  stw       r7, 0x8(r1)
	  stw       r6, 0xC(r1)
	  stw       r5, 0x10(r1)
	  stw       r4, 0x14(r1)
	  stw       r3, 0x18(r1)
	  stw       r0, 0x1C(r1)

	.loc_0x94:
	  lwz       r3, -0x6E20(r13)
	  li        r5, 0
	  lwz       r4, 0x0(r30)
	  bl        -0x146900
	  rlwinm.   r0,r3,0,24,31
	  mr        r6, r29
	  mr        r3, r0
	  ble-      .loc_0x158
	  rlwinm.   r0,r0,29,3,31
	  mtctr     r0
	  beq-      .loc_0x138

	.loc_0xC0:
	  lwz       r5, 0x0(r30)
	  addi      r0, r6, 0x2EC
	  lwz       r4, 0x44(r31)
	  addi      r29, r29, 0x1800
	  stwx      r5, r4, r0
	  addi      r0, r6, 0x5EC
	  lwz       r4, 0x44(r31)
	  stwx      r5, r4, r0
	  addi      r0, r6, 0x8EC
	  lwz       r4, 0x44(r31)
	  stwx      r5, r4, r0
	  addi      r0, r6, 0xBEC
	  lwz       r4, 0x44(r31)
	  stwx      r5, r4, r0
	  addi      r0, r6, 0xEEC
	  lwz       r4, 0x44(r31)
	  stwx      r5, r4, r0
	  addi      r0, r6, 0x11EC
	  lwz       r4, 0x44(r31)
	  stwx      r5, r4, r0
	  addi      r0, r6, 0x14EC
	  lwz       r4, 0x44(r31)
	  stwx      r5, r4, r0
	  addi      r0, r6, 0x17EC
	  addi      r6, r6, 0x1800
	  lwz       r4, 0x44(r31)
	  stwx      r5, r4, r0
	  bdnz+     .loc_0xC0
	  andi.     r3, r3, 0x7
	  beq-      .loc_0x158

	.loc_0x138:
	  mtctr     r3

	.loc_0x13C:
	  lwz       r5, 0x0(r30)
	  addi      r0, r6, 0x2EC
	  lwz       r4, 0x44(r31)
	  addi      r6, r6, 0x300
	  addi      r29, r29, 0x300
	  stwx      r5, r4, r0
	  bdnz+     .loc_0x13C

	.loc_0x158:
	  addi      r28, r28, 0x1
	  addi      r30, r30, 0x4
	  cmpwi     r28, 0x6
	  blt+      .loc_0x94
	  lwz       r0, 0x34(r1)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r28, 0x20(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80254468
 * Size:	0000BC
 */
void Game::Pom::Obj::~Obj()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r3
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  beq-      .loc_0xA0
	  lis       r3, 0x804C
	  addi      r0, r31, 0x2F0
	  addi      r4, r3, 0x1D3C
	  stw       r4, 0x0(r31)
	  addi      r3, r4, 0x1B0
	  addi      r4, r4, 0x2FC
	  stw       r3, 0x178(r31)
	  lwz       r3, 0x17C(r31)
	  stw       r4, 0x0(r3)
	  lwz       r3, 0x17C(r31)
	  sub       r0, r0, r3
	  stw       r0, 0xC(r3)
	  beq-      .loc_0x90
	  lis       r3, 0x804B
	  addi      r0, r31, 0x2BC
	  subi      r4, r3, 0x5CDC
	  addi      r3, r31, 0x290
	  stw       r4, 0x0(r31)
	  addi      r5, r4, 0x1B0
	  addi      r6, r4, 0x2F8
	  li        r4, -0x1
	  stw       r5, 0x178(r31)
	  lwz       r5, 0x17C(r31)
	  stw       r6, 0x0(r5)
	  lwz       r5, 0x17C(r31)
	  sub       r0, r0, r5
	  stw       r0, 0xC(r5)
	  bl        0x1BD094

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x230450

	.loc_0xA0:
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
 * Address:	80254524
 * Size:	000010
 */
void Game::Pom::Mgr::getEnemy(int)
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x300
	  lwz       r3, 0x44(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80254534
 * Size:	000138
 */
void Game::Pom::Mgr::createModel()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x50(r1)
	  mflr      r0
	  lis       r4, 0x8048
	  stw       r0, 0x54(r1)
	  stw       r31, 0x4C(r1)
	  addi      r31, r4, 0x4940
	  stw       r30, 0x48(r1)
	  stw       r29, 0x44(r1)
	  stw       r28, 0x40(r1)
	  mr        r28, r3
	  li        r3, 0x14
	  bl        -0x2306BC
	  mr.       r30, r3
	  beq-      .loc_0x4C
	  lwz       r4, 0x1C(r28)
	  lis       r5, 0x8
	  lbz       r6, 0x24(r28)
	  bl        0x1E9C60
	  mr        r30, r3

	.loc_0x4C:
	  cmplwi    r30, 0
	  bne-      .loc_0x68
	  addi      r3, r31, 0x370
	  addi      r5, r31, 0x37C
	  li        r4, 0xB6
	  crclr     6, 0x6
	  bl        -0x229F58

	.loc_0x68:
	  li        r29, 0
	  b         .loc_0xAC

	.loc_0x70:
	  lwz       r3, 0x64(r4)
	  mr        r4, r29
	  bl        -0x225790
	  addi      r4, r31, 0x388
	  bl        -0x189EF4
	  cmpwi     r3, 0
	  bne-      .loc_0xA8
	  lwz       r4, 0x8(r30)
	  rlwinm    r3,r29,6,10,25
	  addi      r0, r3, 0x2C
	  lwz       r3, 0xC0(r4)
	  lis       r4, 0x100
	  lwzx      r3, r3, r0
	  bl        -0x1F4300

	.loc_0xA8:
	  addi      r29, r29, 0x1

	.loc_0xAC:
	  lwz       r4, 0x1C(r28)
	  rlwinm    r0,r29,0,16,31
	  lhz       r3, 0x5C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x70
	  addi      r3, r1, 0x8
	  bl        -0x16A358
	  lis       r4, 0x8051
	  addi      r3, r1, 0x8
	  subi      r4, r4, 0xDD0
	  bl        -0x16A33C
	  lwz       r31, 0x8(r30)
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x1EDD18
	  mr        r3, r31
	  bl        -0x1EDE50
	  lwz       r0, 0x54(r1)
	  mr        r3, r30
	  lwz       r31, 0x4C(r1)
	  lwz       r30, 0x48(r1)
	  lwz       r29, 0x44(r1)
	  lwz       r28, 0x40(r1)
	  mtlr      r0
	  addi      r1, r1, 0x50
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025466C
 * Size:	000050
 */
void Game::Pom::Parms::read(Stream&)
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
	  bl        0x1BF16C
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x1BF160
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x1BF154
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
 * Address:	802546BC
 * Size:	0000B0
 */
void Game::Pom::Mgr::~Mgr()
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
	  beq-      .loc_0x94
	  lis       r3, 0x804C
	  addi      r3, r3, 0x1C48
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  subi      r3, r3, 0x760
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r3, 0x804B
	  addic.    r0, r30, 0x4
	  subi      r3, r3, 0x5304
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0x38
	  stw       r0, 0x4(r30)
	  beq-      .loc_0x84
	  lis       r4, 0x804B
	  addi      r3, r30, 0x4
	  subi      r0, r4, 0x5324
	  li        r4, 0
	  stw       r0, 0x4(r30)
	  bl        0x1BCE4C

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x230698

	.loc_0x94:
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
 * Address:	8025476C
 * Size:	000008
 */
void Game::Pom::Mgr::getEnemyTypeID()
{
	/*
	.loc_0x0:
	  li        r3, 0x52
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80254774
 * Size:	000028
 */
void __sinit_PomMgr_cpp(void)
{
	/*
	.loc_0x0:
	  lis       r4, 0x8051
	  li        r0, -0x1
	  lfs       f0, 0x48B0(r4)
	  lis       r3, 0x804C
	  stw       r0, -0x6950(r13)
	  stfsu     f0, 0x1C30(r3)
	  stfs      f0, -0x694C(r13)
	  stfs      f0, 0x4(r3)
	  stfs      f0, 0x8(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8025479C
 * Size:	000008
 */
void Game::Pom::Mgr::@4 @__dt()
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0xE4
	*/
}
