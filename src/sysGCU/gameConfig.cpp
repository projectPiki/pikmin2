

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000078
 */
void Game::GameConfig::setConstSetting(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80432170
 * Size:	000130
 */
void Game::GameConfig::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x18C
  li        r6, 0
  li        r5, -0x1
  stw       r6, 0x28(r31)
  li        r4, 0x1
  addi      r0, r2, 0x23B0
  mr        r3, r31
  stw       r6, 0x38(r31)
  stw       r6, 0x48(r31)
  stw       r6, 0x58(r31)
  stw       r6, 0x68(r31)
  stw       r6, 0x78(r31)
  stw       r6, 0x88(r31)
  stw       r6, 0xA8(r31)
  stw       r6, 0x98(r31)
  stw       r6, 0xD8(r31)
  stw       r5, 0xE8(r31)
  stw       r5, 0xF8(r31)
  stw       r5, 0x108(r31)
  stw       r5, 0x118(r31)
  stw       r6, 0x128(r31)
  stw       r6, 0x168(r31)
  stw       r6, 0x178(r31)
  stw       r6, 0x1D8(r31)
  stw       r6, 0x1E8(r31)
  stw       r6, 0x1F8(r31)
  stw       r4, 0x148(r31)
  stw       r0, 0x138(r31)
  stw       r4, 0x158(r31)
  stw       r6, 0x188(r31)
  stw       r6, 0x258(r31)
  stw       r6, 0x28(r31)
  stw       r6, 0x38(r31)
  stw       r6, 0x48(r31)
  stw       r6, 0x58(r31)
  stw       r6, 0x68(r31)
  stw       r6, 0x78(r31)
  stw       r6, 0x88(r31)
  stw       r6, 0xA8(r31)
  stw       r6, 0x98(r31)
  stw       r6, 0xD8(r31)
  stw       r5, 0xE8(r31)
  stw       r5, 0xF8(r31)
  stw       r5, 0x108(r31)
  stw       r5, 0x118(r31)
  stw       r6, 0x128(r31)
  stw       r6, 0x168(r31)
  stw       r6, 0x1C8(r31)
  stw       r6, 0x178(r31)
  stw       r6, 0x1D8(r31)
  stw       r6, 0x1E8(r31)
  stw       r6, 0x1F8(r31)
  stw       r4, 0x148(r31)
  stw       r0, 0x138(r31)
  stw       r0, 0x248(r31)
  stw       r4, 0x158(r31)
  stw       r6, 0x188(r31)
  stw       r4, 0x208(r31)
  stw       r6, 0x228(r31)
  stw       r6, 0x238(r31)
  stw       r4, 0x198(r31)
  stw       r6, 0x1A8(r31)
  stw       r6, 0x1B8(r31)
  stw       r6, 0x218(r31)
  stw       r6, 0x268(r31)
  stw       r6, 0x278(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804322A0
 * Size:	000070
 */
void Game::GameConfig::Parms::__dt(void)
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
  beq-      .loc_0x54
  lis       r4, 0x804F
  subi      r0, r4, 0x3C58
  stw       r0, 0x0(r30)
  beq-      .loc_0x44
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0x5B10
  stw       r0, 0x0(r30)
  bl        -0x20D58

.loc_0x44:
  extsh.    r0, r31
  ble-      .loc_0x54
  mr        r3, r30
  bl        -0x40E23C

.loc_0x54:
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
 * Address:	80432310
 * Size:	000460
 */
void Game::GameConfig::Parms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  subi      r31, r4, 0x5BD8
  addi      r4, r31, 0xC
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x162EC
  lis       r3, 0x804F
  mr        r4, r30
  subi      r0, r3, 0x3C58
  addi      r3, r30, 0x1C
  stw       r0, 0x0(r30)
  addi      r5, r31, 0x18
  bl        -0x162B4
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x2C
  stw       r0, 0x1C(r30)
  addi      r5, r2, 0x23B4
  bl        -0x162D0
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x3C
  stw       r0, 0x2C(r30)
  addi      r5, r31, 0x24
  bl        -0x162EC
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x4C
  stw       r0, 0x3C(r30)
  addi      r5, r31, 0x30
  bl        -0x16308
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x5C
  stw       r0, 0x4C(r30)
  addi      r5, r31, 0x40
  bl        -0x16324
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x6C
  stw       r0, 0x5C(r30)
  addi      r5, r31, 0x50
  bl        -0x16340
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x7C
  stw       r0, 0x6C(r30)
  addi      r5, r31, 0x5C
  bl        -0x1635C
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x8C
  stw       r0, 0x7C(r30)
  addi      r5, r31, 0x6C
  bl        -0x16378
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x9C
  stw       r0, 0x8C(r30)
  addi      r5, r31, 0x7C
  bl        -0x16394
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0xAC
  stw       r0, 0x9C(r30)
  addi      r5, r31, 0x8C
  bl        -0x163B0
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0xBC
  stw       r0, 0xAC(r30)
  addi      r5, r31, 0x98
  bl        -0x163CC
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0xCC
  stw       r0, 0xBC(r30)
  addi      r5, r31, 0xA4
  bl        -0x163E8
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0xDC
  stw       r0, 0xCC(r30)
  addi      r5, r31, 0xB0
  bl        -0x16404
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0xEC
  stw       r0, 0xDC(r30)
  addi      r5, r31, 0xBC
  bl        -0x16420
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0xFC
  stw       r0, 0xEC(r30)
  addi      r5, r31, 0xCC
  bl        -0x1643C
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x10C
  stw       r0, 0xFC(r30)
  addi      r5, r31, 0xDC
  bl        -0x16458
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x11C
  stw       r0, 0x10C(r30)
  addi      r5, r31, 0xEC
  bl        -0x16474
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x12C
  stw       r0, 0x11C(r30)
  addi      r5, r31, 0xFC
  bl        -0x16598
  mr        r4, r30
  addi      r3, r30, 0x13C
  addi      r5, r31, 0x10C
  bl        -0x164A0
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x14C
  stw       r0, 0x13C(r30)
  addi      r5, r31, 0x118
  bl        -0x164BC
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x15C
  stw       r0, 0x14C(r30)
  addi      r5, r2, 0x23BC
  bl        -0x164D8
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x16C
  stw       r0, 0x15C(r30)
  addi      r5, r2, 0x23C0
  bl        -0x164F4
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x17C
  stw       r0, 0x16C(r30)
  addi      r5, r2, 0x23C8
  bl        -0x16510
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x18C
  stw       r0, 0x17C(r30)
  addi      r5, r31, 0x128
  bl        -0x1652C
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x19C
  stw       r0, 0x18C(r30)
  addi      r5, r2, 0x23D0
  bl        -0x16548
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x1AC
  stw       r0, 0x19C(r30)
  addi      r5, r2, 0x23D8
  bl        -0x16564
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x1BC
  stw       r0, 0x1AC(r30)
  addi      r5, r31, 0x134
  bl        -0x16580
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x1CC
  stw       r0, 0x1BC(r30)
  addi      r5, r31, 0x140
  bl        -0x1659C
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x1DC
  stw       r0, 0x1CC(r30)
  addi      r5, r31, 0x150
  bl        -0x165B8
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x1EC
  stw       r0, 0x1DC(r30)
  addi      r5, r31, 0x164
  bl        -0x165D4
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x1FC
  stw       r0, 0x1EC(r30)
  addi      r5, r31, 0x174
  bl        -0x165F0
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x20C
  stw       r0, 0x1FC(r30)
  addi      r5, r31, 0x184
  bl        -0x1660C
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x21C
  stw       r0, 0x20C(r30)
  addi      r5, r31, 0x198
  bl        -0x16628
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x22C
  stw       r0, 0x21C(r30)
  addi      r5, r31, 0x1A4
  bl        -0x16644
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x23C
  stw       r0, 0x22C(r30)
  addi      r5, r31, 0x1B4
  bl        -0x16768
  mr        r4, r30
  addi      r3, r30, 0x24C
  addi      r5, r31, 0x1C0
  bl        -0x16670
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x25C
  stw       r0, 0x24C(r30)
  addi      r5, r31, 0x1CC
  bl        -0x1668C
  lis       r3, 0x804B
  mr        r4, r30
  addi      r0, r3, 0x5AE0
  addi      r3, r30, 0x26C
  stw       r0, 0x25C(r30)
  addi      r5, r2, 0x23DC
  bl        -0x166A8
  lis       r4, 0x804B
  mr        r3, r30
  addi      r0, r4, 0x5AE0
  stw       r0, 0x26C(r30)
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
 * Address:	80432770
 * Size:	000128
 */
void Game::GameConfig::load( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8051
  addi      r4, r2, 0x23E4
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r3, 0x41FC
  lwz       r3, 0x248(r31)
  bl        -0x3680D0
  cmpwi     r3, 0
  bne-      .loc_0x3C
  lwz       r3, -0x6514(r13)
  li        r0, 0
  stw       r0, 0xD4(r3)
  b         .loc_0x110

.loc_0x3C:
  lwz       r3, 0x248(r31)
  addi      r4, r2, 0x23E8
  bl        -0x3680F4
  cmpwi     r3, 0
  bne-      .loc_0x60
  lwz       r3, -0x6514(r13)
  li        r0, 0x1
  stw       r0, 0xD4(r3)
  b         .loc_0x110

.loc_0x60:
  lwz       r3, 0x248(r31)
  addi      r4, r2, 0x23EC
  bl        -0x368118
  cmpwi     r3, 0
  bne-      .loc_0x84
  lwz       r3, -0x6514(r13)
  li        r0, 0x2
  stw       r0, 0xD4(r3)
  b         .loc_0x110

.loc_0x84:
  lwz       r3, 0x248(r31)
  addi      r4, r2, 0x23F0
  bl        -0x36813C
  cmpwi     r3, 0
  bne-      .loc_0xA8
  lwz       r3, -0x6514(r13)
  li        r0, 0
  stw       r0, 0xD4(r3)
  b         .loc_0x110

.loc_0xA8:
  lwz       r3, 0x248(r31)
  addi      r4, r2, 0x23F4
  bl        -0x368160
  cmpwi     r3, 0
  bne-      .loc_0xCC
  lwz       r3, -0x6514(r13)
  li        r0, 0x4
  stw       r0, 0xD4(r3)
  b         .loc_0x110

.loc_0xCC:
  lwz       r3, 0x248(r31)
  addi      r4, r2, 0x23F8
  bl        -0x368184
  cmpwi     r3, 0
  bne-      .loc_0xF0
  lwz       r3, -0x6514(r13)
  li        r0, 0x5
  stw       r0, 0xD4(r3)
  b         .loc_0x110

.loc_0xF0:
  lwz       r3, 0x248(r31)
  addi      r4, r2, 0x23FC
  bl        -0x3681A8
  cmpwi     r3, 0
  bne-      .loc_0x110
  lwz       r3, -0x6514(r13)
  li        r0, 0x6
  stw       r0, 0xD4(r3)

.loc_0x110:
  lwz       r0, 0x14(r1)
  li        r3, 0
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80432898
 * Size:	00003C
 */
void __sinit_gameConfig_cpp(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r3, 0x8051
  stw       r0, 0x14(r1)
  addi      r3, r3, 0x41FC
  bl        -0x73C
  lis       r4, 0x8043
  lis       r5, 0x804F
  addi      r4, r4, 0x28D4
  addi      r5, r5, 0x7C38
  bl        -0x3711C0
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804328D4
 * Size:	000074
 */
void Game::GameConfig::__dt(void)
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
  beq-      .loc_0x58
  beq-      .loc_0x48
  lis       r4, 0x804F
  subi      r0, r4, 0x3C58
  stw       r0, 0x0(r30)
  beq-      .loc_0x48
  lis       r5, 0x804B
  li        r4, 0
  addi      r0, r5, 0x5B10
  stw       r0, 0x0(r30)
  bl        -0x21390

.loc_0x48:
  extsh.    r0, r31
  ble-      .loc_0x58
  mr        r3, r30
  bl        -0x40E874

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
