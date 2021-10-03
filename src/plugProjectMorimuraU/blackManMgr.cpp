

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
 * Address:	803A53C8
 * Size:	000050
 */
void Game::BlackMan::Mgr::__ct( (int, unsigned char))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x276748
  lis       r3, 0x804E
  lis       r4, 0x8049
  addi      r5, r3, 0x5C10
  mr        r3, r31
  stw       r5, 0x0(r31)
  addi      r5, r5, 0x38
  addi      r0, r4, 0x5264
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
 * Address:	803A5418
 * Size:	000048
 */
void Game::BlackMan::Mgr::doAlloc(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0xA5C
  bl        -0x38158C
  mr.       r4, r3
  beq-      .loc_0x2C
  bl        .loc_0x48
  mr        r4, r3

.loc_0x2C:
  mr        r3, r31
  bl        -0x275BAC
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
 * Address:	803A5460
 * Size:	0000EC
 */
void Game::BlackMan::Parms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x29BCD8
  lis       r4, 0x804E
  addi      r3, r31, 0x7F8
  addi      r0, r4, 0x5CF0
  li        r4, 0x1
  stw       r0, 0xD8(r31)
  bl        .loc_0xEC
  li        r5, 0x1
  li        r4, 0
  stb       r5, 0xA10(r31)
  li        r0, -0x1
  lfs       f1, 0x1088(r2)
  mr        r3, r31
  stb       r4, 0xA11(r31)
  lfs       f10, 0x108C(r2)
  stb       r5, 0xA12(r31)
  lfs       f9, 0x1090(r2)
  stb       r5, 0xA14(r31)
  lfs       f0, 0x1094(r2)
  stb       r4, 0xA15(r31)
  lfs       f8, 0x1098(r2)
  stb       r5, 0xA16(r31)
  lfs       f7, 0x109C(r2)
  stb       r5, 0xA17(r31)
  lfs       f6, 0x10A0(r2)
  stb       r5, 0xA18(r31)
  lfs       f5, 0x10A4(r2)
  sth       r0, 0xA1A(r31)
  lfs       f4, 0x10A8(r2)
  stfs      f1, 0xA1C(r31)
  lfs       f3, 0x10AC(r2)
  stfs      f10, 0xA20(r31)
  lfs       f2, 0x10B0(r2)
  stfs      f9, 0xA24(r31)
  lfs       f1, 0x10B4(r2)
  stfs      f0, 0xA28(r31)
  lfs       f0, 0x10B8(r2)
  stfs      f9, 0xA2C(r31)
  stfs      f8, 0xA30(r31)
  stfs      f7, 0xA34(r31)
  stfs      f6, 0xA38(r31)
  stfs      f5, 0xA3C(r31)
  stfs      f10, 0xA40(r31)
  stfs      f4, 0xA44(r31)
  stfs      f3, 0xA48(r31)
  stfs      f2, 0xA4C(r31)
  stfs      f1, 0xA50(r31)
  stfs      f0, 0xA54(r31)
  stfs      f9, 0xA58(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0xEC:
*/
}

/*
 * --INFO--
 * Address:	803A554C
 * Size:	000368
 */
void Game::BlackMan::Parms::ProperParms::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  lis       r4, 0x8049
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x5258
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x30
  addi      r0, r30, 0x214
  stw       r0, 0x0(r30)

.loc_0x30:
  li        r0, 0
  lis       r5, 0x6670
  stw       r0, 0x4(r30)
  addi      r0, r31, 0x20
  mr        r4, r30
  addi      r3, r30, 0xC
  stw       r0, 0x8(r30)
  addi      r5, r5, 0x3031
  addi      r6, r31, 0x30
  bl        0x6E0B8
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x10AC(r2)
  stw       r0, 0xC(r30)
  mr        r4, r30
  lfs       f1, 0x10BC(r2)
  addi      r3, r30, 0x34
  stfs      f0, 0x24(r30)
  addi      r5, r5, 0x3032
  lfs       f0, 0x10C0(r2)
  addi      r6, r31, 0x40
  stfs      f1, 0x2C(r30)
  stfs      f0, 0x30(r30)
  bl        0x6E07C
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x10AC(r2)
  stw       r0, 0x34(r30)
  mr        r4, r30
  lfs       f1, 0x10BC(r2)
  addi      r3, r30, 0x5C
  stfs      f0, 0x4C(r30)
  addi      r5, r5, 0x3033
  lfs       f0, 0x10C4(r2)
  addi      r6, r31, 0x4C
  stfs      f1, 0x54(r30)
  stfs      f0, 0x58(r30)
  bl        0x6E040
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x10C8(r2)
  stw       r0, 0x5C(r30)
  mr        r4, r30
  lfs       f1, 0x10BC(r2)
  addi      r3, r30, 0x84
  stfs      f0, 0x74(r30)
  addi      r5, r5, 0x3034
  lfs       f0, 0x1090(r2)
  addi      r6, r31, 0x5C
  stfs      f1, 0x7C(r30)
  stfs      f0, 0x80(r30)
  bl        0x6E004
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x10AC(r2)
  stw       r0, 0x84(r30)
  mr        r4, r30
  lfs       f1, 0x10BC(r2)
  addi      r3, r30, 0xAC
  stfs      f0, 0x9C(r30)
  addi      r5, r5, 0x3035
  lfs       f0, 0x10CC(r2)
  addi      r6, r31, 0x70
  stfs      f1, 0xA4(r30)
  stfs      f0, 0xA8(r30)
  bl        0x6DFC8
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x10D0(r2)
  stw       r0, 0xAC(r30)
  mr        r4, r30
  lfs       f1, 0x10AC(r2)
  addi      r3, r30, 0xD4
  stfs      f0, 0xC4(r30)
  addi      r5, r5, 0x3036
  lfs       f0, 0x10D4(r2)
  addi      r6, r31, 0x7C
  stfs      f1, 0xCC(r30)
  stfs      f0, 0xD0(r30)
  bl        0x6DF8C
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x10C8(r2)
  stw       r0, 0xD4(r30)
  mr        r4, r30
  lfs       f1, 0x10BC(r2)
  addi      r3, r30, 0xFC
  stfs      f0, 0xEC(r30)
  addi      r5, r5, 0x3037
  lfs       f0, 0x1090(r2)
  addi      r6, r31, 0x8C
  stfs      f1, 0xF4(r30)
  stfs      f0, 0xF8(r30)
  bl        0x6DF50
  lis       r3, 0x804B
  lis       r5, 0x6670
  subi      r0, r3, 0x5344
  lfs       f0, 0x10AC(r2)
  stw       r0, 0xFC(r30)
  mr        r4, r30
  lfs       f1, 0x10BC(r2)
  addi      r3, r30, 0x124
  stfs      f0, 0x114(r30)
  addi      r5, r5, 0x3131
  lfs       f0, 0x10CC(r2)
  addi      r6, r31, 0xA0
  stfs      f1, 0x11C(r30)
  stfs      f0, 0x120(r30)
  bl        0x6DF14
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5344
  lfs       f0, 0x10AC(r2)
  stw       r0, 0x124(r30)
  mr        r4, r30
  lfs       f1, 0x10BC(r2)
  addi      r3, r30, 0x14C
  stfs      f0, 0x13C(r30)
  addi      r5, r5, 0x3031
  lfs       f0, 0x10C0(r2)
  addi      r6, r31, 0xAC
  stfs      f1, 0x144(r30)
  stfs      f0, 0x148(r30)
  bl        0x6DED8
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r3, 0x12C
  stw       r0, 0x14C(r30)
  li        r7, 0
  li        r0, 0xBB8
  mr        r4, r30
  stw       r3, 0x164(r30)
  addi      r3, r30, 0x174
  addi      r5, r5, 0x3033
  addi      r6, r31, 0xC0
  stw       r7, 0x16C(r30)
  stw       r0, 0x170(r30)
  bl        0x6DE9C
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r3, 0xC8
  stw       r0, 0x174(r30)
  li        r7, 0
  li        r0, 0x258
  mr        r4, r30
  stw       r3, 0x18C(r30)
  addi      r3, r30, 0x19C
  addi      r5, r5, 0x3034
  addi      r6, r31, 0xD4
  stw       r7, 0x194(r30)
  stw       r0, 0x198(r30)
  bl        0x6DE60
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r3, 0xC8
  stw       r0, 0x19C(r30)
  li        r7, 0
  li        r0, 0x258
  mr        r4, r30
  stw       r3, 0x1B4(r30)
  addi      r3, r30, 0x1C4
  addi      r5, r5, 0x3035
  addi      r6, r31, 0xE8
  stw       r7, 0x1BC(r30)
  stw       r0, 0x1C0(r30)
  bl        0x6DE24
  lis       r3, 0x804B
  lis       r5, 0x6970
  subi      r0, r3, 0x5370
  li        r3, 0xC8
  stw       r0, 0x1C4(r30)
  li        r7, 0
  li        r0, 0x258
  mr        r4, r30
  stw       r3, 0x1DC(r30)
  addi      r3, r30, 0x1EC
  addi      r5, r5, 0x3036
  addi      r6, r31, 0xFC
  stw       r7, 0x1E4(r30)
  stw       r0, 0x1E8(r30)
  bl        0x6DDE8
  lis       r3, 0x804B
  li        r5, 0xC8
  subi      r0, r3, 0x5370
  li        r4, 0
  stw       r0, 0x1EC(r30)
  li        r0, 0x258
  mr        r3, r30
  stw       r5, 0x204(r30)
  stw       r4, 0x20C(r30)
  stw       r0, 0x210(r30)
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
 * Address:	803A58B4
 * Size:	000020
 */
void Game::BlackMan::Mgr::birth( (Game::EnemyBirthArg &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2764F8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803A58D4
 * Size:	000094
 */
void Game::BlackMan::Mgr::loadModelData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  bl        -0x2757DC
  lis       r4, 0x8049
  lis       r3, 0x8049
  addi      r30, r4, 0x5620
  li        r28, 0
  addi      r31, r3, 0x5630
  b         .loc_0x6C

.loc_0x30:
  lwz       r3, 0x80(r4)
  rlwinm    r0,r28,2,14,29
  lwzx      r29, r3, r0
  cmplwi    r29, 0
  bne-      .loc_0x58
  mr        r3, r30
  mr        r5, r31
  li        r4, 0x38
  crclr     6, 0x6
  bl        -0x37B2E8

.loc_0x58:
  lwz       r0, 0xC(r29)
  addi      r28, r28, 0x1
  rlwinm    r0,r0,0,20,15
  ori       r0, r0, 0x2000
  stw       r0, 0xC(r29)

.loc_0x6C:
  lwz       r4, 0x1C(r27)
  rlwinm    r0,r28,0,16,31
  lhz       r3, 0x7C(r4)
  cmplw     r0, r3
  blt+      .loc_0x30
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803A5968
 * Size:	0000BC
 */
void Game::BlackMan::Mgr::loadTexData(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x54(r1)
  stw       r31, 0x4C(r1)
  addi      r31, r4, 0x5258
  li        r4, 0
  stw       r30, 0x48(r1)
  stw       r29, 0x44(r1)
  mr        r29, r3
  lwz       r3, 0x1C(r3)
  bl        0x98908
  addi      r3, r1, 0x8
  addi      r4, r31, 0x3E4
  li        r30, 0
  bl        0xA6C34
  lwz       r3, -0x63D8(r13)
  addi      r4, r1, 0x8
  bl        0xA6DF0
  cmplwi    r3, 0
  beq-      .loc_0x58
  lwz       r30, 0x30(r3)

.loc_0x58:
  cmplwi    r30, 0
  bne-      .loc_0x74
  addi      r3, r31, 0x3C8
  addi      r5, r31, 0x3D8
  li        r4, 0x53
  crclr     6, 0x6
  bl        -0x37B398

.loc_0x74:
  li        r3, 0x10
  bl        -0x381B3C
  mr.       r0, r3
  beq-      .loc_0x8C
  bl        0x8E748
  mr        r0, r3

.loc_0x8C:
  stw       r0, 0x44(r29)
  mr        r4, r30
  lwz       r3, 0x44(r29)
  lwz       r5, 0x1C(r29)
  bl        0x8E61C
  lwz       r0, 0x54(r1)
  lwz       r31, 0x4C(r1)
  lwz       r30, 0x48(r1)
  lwz       r29, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803A5A24
 * Size:	00002C
 */
void Game::BlackMan::Mgr::doLoadBmd( (void *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r5, 0x2130
  mr        r3, r4
  stw       r0, 0x14(r1)
  addi      r4, r5, 0x30
  bl        -0x3361A8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803A5A50
 * Size:	000124
 */
void Game::BlackMan::Mgr::createModel(void)
{
/*
.loc_0x0:
  stwu      r1, -0x50(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x54(r1)
  stmw      r27, 0x3C(r1)
  mr        r27, r3
  addi      r30, r4, 0x5258
  li        r3, 0x14
  bl        -0x381BCC
  mr.       r29, r3
  beq-      .loc_0x40
  lwz       r4, 0x1C(r27)
  lis       r5, 0x8
  lbz       r6, 0x24(r27)
  bl        0x98750
  mr        r29, r3

.loc_0x40:
  cmplwi    r29, 0
  bne-      .loc_0x5C
  addi      r3, r30, 0x3C8
  addi      r5, r30, 0x3D8
  li        r4, 0x80
  crclr     6, 0x6
  bl        -0x37B468

.loc_0x5C:
  li        r28, 0
  lis       r31, 0x502
  b         .loc_0xA4

.loc_0x68:
  lwz       r3, 0x64(r4)
  mr        r4, r28
  bl        -0x376CA4
  addi      r4, r30, 0x40C
  bl        -0x2DB408
  cmpwi     r3, 0
  bne-      .loc_0xA0
  lwz       r4, 0x8(r29)
  rlwinm    r3,r28,6,10,25
  addi      r0, r3, 0x2C
  lwz       r3, 0xC0(r4)
  addi      r4, r31, 0x1200
  lwzx      r3, r3, r0
  bl        -0x345814

.loc_0xA0:
  addi      r28, r28, 0x1

.loc_0xA4:
  lwz       r4, 0x1C(r27)
  rlwinm    r0,r28,0,16,31
  lhz       r3, 0x5C(r4)
  cmplw     r0, r3
  blt+      .loc_0x68
  addi      r3, r1, 0x8
  bl        -0x2BB86C
  lis       r4, 0x8051
  addi      r3, r1, 0x8
  subi      r4, r4, 0xDD0
  bl        -0x2BB850
  lwz       r30, 0x8(r29)
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        -0x33F22C
  mr        r3, r30
  bl        -0x33F364
  mr        r3, r29
  lmw       r27, 0x3C(r1)
  lwz       r0, 0x54(r1)
  mtlr      r0
  addi      r1, r1, 0x50
  blr
*/
}

/*
 * --INFO--
 * Address:	803A5B74
 * Size:	0000B0
 */
void Game::BlackMan::Mgr::__dt(void)
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
  lis       r3, 0x804E
  addi      r3, r3, 0x5C10
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
  bl        0x6B994

.loc_0x84:
  extsh.    r0, r31
  ble-      .loc_0x94
  mr        r3, r30
  bl        -0x381B50

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
 * Address:	803A5C24
 * Size:	000008
 */
void Game::BlackMan::Mgr::getEnemyTypeID(void)
{
/*
.loc_0x0:
  li        r3, 0x63
  blr
*/
}

/*
 * --INFO--
 * Address:	803A5C2C
 * Size:	000060
 */
void Game::BlackMan::Mgr::createObj( (int))
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
  mulli     r3, r31, 0x3BC
  addi      r3, r3, 0x10
  bl        -0x381CA4
  lis       r4, 0x803A
  lis       r5, 0x803A
  addi      r4, r4, 0x669C
  mr        r7, r31
  addi      r5, r5, 0x5C8C
  li        r6, 0x3BC
  bl        -0x2E427C
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
 * Address:	803A5C8C
 * Size:	0000BC
 */
void Game::BlackMan::Obj::__dt(void)
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
  lis       r3, 0x804E
  addi      r0, r31, 0x3AC
  addi      r4, r3, 0x5EA8
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
  bl        0x6B870

.loc_0x90:
  extsh.    r0, r30
  ble-      .loc_0xA0
  mr        r3, r31
  bl        -0x381C74

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
 * Address:	803A5D48
 * Size:	000010
 */
void Game::BlackMan::Mgr::getEnemy( (int))
{
/*
.loc_0x0:
  mulli     r0, r4, 0x3BC
  lwz       r3, 0x48(r3)
  add       r3, r3, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	803A5D58
 * Size:	000050
 */
void Game::BlackMan::Parms::read( (Stream &))
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
  bl        0x6DA80
  mr        r4, r31
  addi      r3, r30, 0xE0
  bl        0x6DA74
  mr        r4, r31
  addi      r3, r30, 0x7F8
  bl        0x6DA68
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
 * Address:	803A5DA8
 * Size:	000008
 */
void @4@Game::BlackMan::Mgr::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x238
*/
}
