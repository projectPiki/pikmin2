

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
 * Address:	802C6F58
 * Size:	000050
 */
void Game::BigFoot::Mgr::__ct((int, unsigned char))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1982D8
	  lis       r3, 0x804D
	  lis       r4, 0x8049
	  addi      r5, r3, 0x1AD0
	  mr        r3, r31
	  stw       r5, 0x0(r31)
	  addi      r5, r5, 0x38
	  subi      r0, r4, 0x4DB0
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
 * Address:	802C6FA8
 * Size:	000048
 */
void Game::BigFoot::Mgr::doAlloc(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  li        r3, 0xA60
	  bl        -0x2A311C
	  mr.       r4, r3
	  beq-      .loc_0x2C
	  bl        .loc_0x48
	  mr        r4, r3

	.loc_0x2C:
	  mr        r3, r31
	  bl        -0x19773C
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
 * Address:	802C6FF0
 * Size:	000048
 */
void Game::BigFoot::Parms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x1BD868
	  lis       r4, 0x804D
	  addi      r3, r31, 0x7F8
	  addi      r0, r4, 0x1BB0
	  li        r4, 0x1
	  stw       r0, 0xD8(r31)
	  bl        .loc_0x48
	  lwz       r0, 0x14(r1)
	  mr        r3, r31
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x48:
	*/
}

/*
 * --INFO--
 * Address:	802C7038
 * Size:	0003D8
 */
void Game::BigFoot::Parms::ProperParms::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  extsh.    r0, r4
	  lis       r4, 0x8049
	  stw       r31, 0xC(r1)
	  subi      r31, r4, 0x4DE8
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  beq-      .loc_0x30
	  addi      r0, r30, 0x264
	  stw       r0, 0x0(r30)

	.loc_0x30:
	  li        r0, 0
	  lis       r5, 0x6670
	  stw       r0, 0x4(r30)
	  addi      r0, r31, 0x4C
	  mr        r4, r30
	  addi      r3, r30, 0xC
	  stw       r0, 0x8(r30)
	  addi      r5, r5, 0x3031
	  addi      r6, r31, 0x5C
	  bl        0x14C5CC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1CB0(r2)
	  stw       r0, 0xC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CAC(r2)
	  addi      r3, r30, 0x34
	  stfs      f0, 0x24(r30)
	  addi      r5, r5, 0x3032
	  lfs       f0, -0x1CA8(r2)
	  addi      r6, r31, 0x68
	  stfs      f1, 0x2C(r30)
	  stfs      f0, 0x30(r30)
	  bl        0x14C590
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1CA4(r2)
	  stw       r0, 0x34(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CA0(r2)
	  addi      r3, r30, 0x5C
	  stfs      f0, 0x4C(r30)
	  addi      r5, r5, 0x3033
	  lfs       f0, -0x1C9C(r2)
	  addi      r6, r31, 0x78
	  stfs      f1, 0x54(r30)
	  stfs      f0, 0x58(r30)
	  bl        0x14C554
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1C98(r2)
	  stw       r0, 0x5C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CA0(r2)
	  addi      r3, r30, 0x84
	  stfs      f0, 0x74(r30)
	  addi      r5, r5, 0x3034
	  lfs       f0, -0x1C9C(r2)
	  addi      r6, r31, 0x88
	  stfs      f1, 0x7C(r30)
	  stfs      f0, 0x80(r30)
	  bl        0x14C518
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1C94(r2)
	  stw       r0, 0x84(r30)
	  mr        r4, r30
	  lfs       f1, -0x1C90(r2)
	  addi      r3, r30, 0xAC
	  stfs      f0, 0x9C(r30)
	  addi      r5, r5, 0x3035
	  lfs       f0, -0x1CA8(r2)
	  addi      r6, r31, 0x98
	  stfs      f1, 0xA4(r30)
	  stfs      f0, 0xA8(r30)
	  bl        0x14C4DC
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x1CA8(r2)
	  stw       r0, 0xAC(r30)
	  mr        r4, r30
	  lfs       f0, -0x1C90(r2)
	  addi      r3, r30, 0xD4
	  stfs      f1, 0xC4(r30)
	  addi      r5, r5, 0x3036
	  addi      r6, r31, 0xA8
	  stfs      f0, 0xCC(r30)
	  stfs      f1, 0xD0(r30)
	  bl        0x14C4A4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1C8C(r2)
	  stw       r0, 0xD4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CAC(r2)
	  addi      r3, r30, 0xFC
	  stfs      f0, 0xEC(r30)
	  addi      r5, r5, 0x3131
	  lfs       f0, -0x1C88(r2)
	  addi      r6, r31, 0xB8
	  stfs      f1, 0xF4(r30)
	  stfs      f0, 0xF8(r30)
	  bl        0x14C468
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1CB0(r2)
	  stw       r0, 0xFC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CAC(r2)
	  addi      r3, r30, 0x124
	  stfs      f0, 0x114(r30)
	  addi      r5, r5, 0x3132
	  lfs       f0, -0x1CA8(r2)
	  addi      r6, r31, 0xC8
	  stfs      f1, 0x11C(r30)
	  stfs      f0, 0x120(r30)
	  bl        0x14C42C
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1CA4(r2)
	  stw       r0, 0x124(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CA0(r2)
	  addi      r3, r30, 0x14C
	  stfs      f0, 0x13C(r30)
	  addi      r5, r5, 0x3133
	  lfs       f0, -0x1C9C(r2)
	  addi      r6, r31, 0xD8
	  stfs      f1, 0x144(r30)
	  stfs      f0, 0x148(r30)
	  bl        0x14C3F0
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1C98(r2)
	  stw       r0, 0x14C(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CA0(r2)
	  addi      r3, r30, 0x174
	  stfs      f0, 0x164(r30)
	  addi      r5, r5, 0x3134
	  lfs       f0, -0x1C9C(r2)
	  addi      r6, r31, 0xE8
	  stfs      f1, 0x16C(r30)
	  stfs      f0, 0x170(r30)
	  bl        0x14C3B4
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1C84(r2)
	  stw       r0, 0x174(r30)
	  mr        r4, r30
	  lfs       f1, -0x1C90(r2)
	  addi      r3, r30, 0x19C
	  stfs      f0, 0x18C(r30)
	  addi      r5, r5, 0x3135
	  lfs       f0, -0x1CA8(r2)
	  addi      r6, r31, 0xFC
	  stfs      f1, 0x194(r30)
	  stfs      f0, 0x198(r30)
	  bl        0x14C378
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x1CA8(r2)
	  stw       r0, 0x19C(r30)
	  mr        r4, r30
	  lfs       f0, -0x1C90(r2)
	  addi      r3, r30, 0x1C4
	  stfs      f1, 0x1B4(r30)
	  addi      r5, r5, 0x3136
	  addi      r6, r31, 0x110
	  stfs      f0, 0x1BC(r30)
	  stfs      f1, 0x1C0(r30)
	  bl        0x14C340
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1C8C(r2)
	  stw       r0, 0x1C4(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CAC(r2)
	  addi      r3, r30, 0x1EC
	  stfs      f0, 0x1DC(r30)
	  addi      r5, r5, 0x3137
	  lfs       f0, -0x1C88(r2)
	  addi      r6, r31, 0x120
	  stfs      f1, 0x1E4(r30)
	  stfs      f0, 0x1E8(r30)
	  bl        0x14C304
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1C80(r2)
	  stw       r0, 0x1EC(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CAC(r2)
	  addi      r3, r30, 0x214
	  stfs      f0, 0x204(r30)
	  addi      r5, r5, 0x3230
	  lfs       f0, -0x1C88(r2)
	  addi      r6, r31, 0x134
	  stfs      f1, 0x20C(r30)
	  stfs      f0, 0x210(r30)
	  bl        0x14C2C8
	  lis       r3, 0x804B
	  lis       r5, 0x6670
	  subi      r0, r3, 0x5344
	  lfs       f0, -0x1CA8(r2)
	  stw       r0, 0x214(r30)
	  mr        r4, r30
	  lfs       f1, -0x1CAC(r2)
	  addi      r3, r30, 0x23C
	  stfs      f0, 0x22C(r30)
	  addi      r5, r5, 0x3231
	  lfs       f0, -0x1C7C(r2)
	  addi      r6, r31, 0x144
	  stfs      f1, 0x234(r30)
	  stfs      f0, 0x238(r30)
	  bl        0x14C28C
	  lis       r3, 0x804B
	  lfs       f2, -0x1CB0(r2)
	  subi      r0, r3, 0x5344
	  lfs       f1, -0x1CAC(r2)
	  stw       r0, 0x23C(r30)
	  mr        r3, r30
	  lfs       f0, -0x1C7C(r2)
	  stfs      f2, 0x254(r30)
	  stfs      f1, 0x25C(r30)
	  stfs      f0, 0x260(r30)
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
 * Address:	802C7410
 * Size:	000060
 */
void Game::BigFoot::Mgr::createObj((int))
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
	  mulli     r3, r31, 0x4BC
	  addi      r3, r3, 0x10
	  bl        -0x2A3488
	  lis       r4, 0x802C
	  lis       r5, 0x802C
	  addi      r4, r4, 0x7F38
	  mr        r7, r31
	  addi      r5, r5, 0x7470
	  li        r6, 0x4BC
	  bl        -0x205A60
	  stw       r3, 0x48(r30)
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
 * Address:	802C7470
 * Size:	0000BC
 */
void Game::BigFoot::Obj::__dt(void)
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
	  lis       r3, 0x804D
	  addi      r0, r31, 0x4AC
	  addi      r4, r3, 0x1E10
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
	  bl        0x14A08C

	.loc_0x90:
	  extsh.    r0, r30
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x2A3458

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
 * Address:	802C752C
 * Size:	000010
 */
void Game::BigFoot::Mgr::getEnemy((int))
{
	/*
	.loc_0x0:
	  mulli     r0, r4, 0x4BC
	  lwz       r3, 0x48(r3)
	  add       r3, r3, r0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C753C
 * Size:	000068
 */
void Game::BigFoot::Mgr::loadModelData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x197444
	  li        r5, 0
	  b         .loc_0x40

	.loc_0x20:
	  lwz       r3, 0x80(r4)
	  rlwinm    r0,r5,2,14,29
	  addi      r5, r5, 0x1
	  lwzx      r3, r3, r0
	  lwz       r0, 0xC(r3)
	  rlwinm    r0,r0,0,20,15
	  ori       r0, r0, 0x2000
	  stw       r0, 0xC(r3)

	.loc_0x40:
	  lwz       r4, 0x1C(r31)
	  rlwinm    r0,r5,0,16,31
	  lhz       r3, 0x7C(r4)
	  cmplw     r0, r3
	  blt+      .loc_0x20
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C75A4
 * Size:	0000B4
 */
void Game::BigFoot::Mgr::loadTexData(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  li        r4, 0
	  stw       r0, 0x44(r1)
	  stw       r31, 0x3C(r1)
	  stw       r30, 0x38(r1)
	  mr        r30, r3
	  lwz       r3, 0x1C(r3)
	  bl        0x176CD8
	  lwz       r4, -0x7B00(r13)
	  addi      r3, r1, 0x8
	  li        r31, 0
	  bl        0x185004
	  lwz       r3, -0x63D8(r13)
	  addi      r4, r1, 0x8
	  bl        0x1851C0
	  cmplwi    r3, 0
	  beq-      .loc_0x4C
	  lwz       r31, 0x30(r3)

	.loc_0x4C:
	  cmplwi    r31, 0
	  bne-      .loc_0x70
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x49DC
	  li        r4, 0x6C
	  subi      r5, r5, 0x49CC
	  crclr     6, 0x6
	  bl        -0x29CFD0

	.loc_0x70:
	  li        r3, 0x14
	  bl        -0x2A3774
	  mr.       r0, r3
	  beq-      .loc_0x88
	  bl        0x16CC1C
	  mr        r0, r3

	.loc_0x88:
	  stw       r0, 0x44(r30)
	  mr        r4, r31
	  lwz       r3, 0x44(r30)
	  lwz       r5, 0x1C(r30)
	  bl        0x16C9E4
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
 * Address:	802C7658
 * Size:	00007C
 */
void Game::BigFoot::Mgr::createModel(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  li        r3, 0x14
	  bl        -0x2A37D0
	  mr.       r31, r3
	  beq-      .loc_0x3C
	  lwz       r4, 0x1C(r30)
	  lis       r5, 0x4
	  lbz       r6, 0x24(r30)
	  bl        0x176B4C
	  mr        r31, r3

	.loc_0x3C:
	  cmplwi    r31, 0
	  bne-      .loc_0x60
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  subi      r3, r3, 0x49DC
	  li        r4, 0x86
	  subi      r5, r5, 0x49CC
	  crclr     6, 0x6
	  bl        -0x29D074

	.loc_0x60:
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
 * Address:	802C76D4
 * Size:	0000B0
 */
void Game::BigFoot::Mgr::__dt(void)
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
	  lis       r3, 0x804D
	  addi      r3, r3, 0x1AD0
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
	  bl        0x149E34

	.loc_0x84:
	  extsh.    r0, r31
	  ble-      .loc_0x94
	  mr        r3, r30
	  bl        -0x2A36B0

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
 * Address:	802C7784
 * Size:	000008
 */
void Game::BigFoot::Mgr::getEnemyTypeID(void)
{
	/*
	.loc_0x0:
	  li        r3, 0x45
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C778C
 * Size:	00002C
 */
void Game::BigFoot::Mgr::doLoadBmd((void*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r5, 0x2124
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  addi      r4, r5, 0x30
	  bl        -0x257F10
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	802C77B8
 * Size:	000050
 */
void Game::BigFoot::Parms::read((Stream&))
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
	  bl        0x14C020
	  mr        r4, r31
	  addi      r3, r30, 0xE0
	  bl        0x14C014
	  mr        r4, r31
	  addi      r3, r30, 0x7F8
	  bl        0x14C008
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
 * Address:	802C7808
 * Size:	000008
 */
void @4 @Game::BigFoot::Mgr::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x4
	  b         -0x138
	*/
}
