

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
 * Address:	8042FDA8
 * Size:	000094
 */
void Game::P2JST::ObjectGameActor::__ct( (char const *, Game::MoviePlayer *, Game::Creature *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r6
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        -0x1464
  lis       r3, 0x804F
  li        r0, 0
  subi      r4, r3, 0x3E04
  mr        r3, r30
  stw       r4, 0x0(r30)
  addi      r4, r4, 0x8C
  stw       r4, 0x4(r30)
  stw       r31, 0x70(r30)
  stw       r0, 0x88(r30)
  lwz       r0, -0x64B0(r13)
  stw       r0, 0x8C(r30)
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  li        r4, 0x1
  bl        -0x2F43BC
  lfs       f0, 0x2358(r2)
  mr        r3, r30
  stfs      f0, 0x9C(r30)
  stfs      f0, 0xA0(r30)
  stfs      f0, 0xA4(r30)
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
 * Address:	8042FE3C
 * Size:	000054
 */
void Game::P2JST::ObjectGameActor::reset(void)
{
/*
.loc_0x0:
  li        r6, 0
  lis       r4, 0x1
  stw       r6, 0x88(r3)
  li        r5, -0x1
  subi      r0, r4, 0x1
  lfs       f0, 0x2358(r2)
  stb       r6, 0xA8(r3)
  stw       r6, 0x74(r3)
  stw       r6, 0xB0(r3)
  stw       r5, 0x78(r3)
  sth       r0, 0xB4(r3)
  stw       r5, 0x7C(r3)
  sth       r0, 0xB6(r3)
  stw       r5, 0x80(r3)
  sth       r0, 0xB8(r3)
  stw       r5, 0x84(r3)
  sth       r0, 0xBA(r3)
  stfs      f0, 0x9C(r3)
  stfs      f0, 0xA0(r3)
  stfs      f0, 0xA4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8042FE90
 * Size:	000124
 */
void Game::P2JST::ObjectGameActor::stop(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x70(r3)
  lwz       r0, 0x174(r3)
  cmplwi    r0, 0
  beq-      .loc_0x74
  li        r6, 0
  li        r4, 0
  b         .loc_0x4C

.loc_0x30:
  lwz       r3, 0x8(r5)
  rlwinm    r0,r6,2,14,29
  addi      r6, r6, 0x1
  lwz       r3, 0x4(r3)
  lwz       r3, 0x28(r3)
  lwzx      r3, r3, r0
  stw       r4, 0x54(r3)

.loc_0x4C:
  lwz       r3, 0x70(r31)
  lwz       r5, 0x174(r3)
  lwz       r0, 0xC(r5)
  cmpw      r6, r0
  blt+      .loc_0x30
  lwz       r12, 0x0(r3)
  li        r4, 0
  lwz       r12, 0xC4(r12)
  mtctr     r12
  bctrl     

.loc_0x74:
  lwz       r3, 0x70(r31)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x118(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x70(r31)
  li        r4, 0x1
  bl        -0x2F4438
  lwz       r0, 0x88(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0xEC
  lwz       r3, 0x70(r31)
  lfs       f1, 0xAC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x128(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x70(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xEC
  lwz       r3, 0x70(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1AC(r12)
  mtctr     r12
  bctrl     

.loc_0xEC:
  lwz       r3, 0x70(r31)
  lwz       r3, 0x174(r3)
  cmplwi    r3, 0
  beq-      .loc_0x110
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x110:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8042FFB4
 * Size:	0004D8
 */
void Game::P2JST::ObjectGameActor::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stmw      r25, 0x24(r1)
  mr        r28, r3
  lwz       r3, 0x70(r3)
  lwz       r0, 0x174(r3)
  cmplwi    r0, 0
  beq-      .loc_0xFC
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x98
  lwz       r3, -0x64AC(r13)
  lwz       r0, 0x1F0(r3)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x98
  lwz       r27, 0x70(r28)
  lfs       f1, 0x235C(r2)
  addi      r3, r27, 0x1AC
  lwz       r12, 0x1AC(r27)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  addi      r3, r27, 0x1C8
  lfs       f1, 0x235C(r2)
  lwz       r12, 0x1C8(r27)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x174(r27)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x98:
  lwz       r3, 0x70(r28)
  lwz       r3, 0x174(r3)
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0xFC
  bl        -0x67C0
  lis       r4, 0x8051
  lfs       f1, 0x8(r3)
  subi      r0, r4, 0x2E20
  lfs       f2, 0x28(r3)
  mr        r3, r0
  bl        -0x3FAF70
  stfs      f1, 0xAC(r28)
  lwz       r3, 0x70(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xFC
  lwz       r3, 0x70(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1AC(r12)
  mtctr     r12
  bctrl     

.loc_0xFC:
  mr        r31, r28
  mr        r30, r28
  li        r29, 0
  b         .loc_0x26C

.loc_0x10C:
  lwz       r4, 0x78(r31)
  cmpwi     r4, 0x64
  blt-      .loc_0x134
  lwz       r3, 0x70(r28)
  lwz       r5, 0x8(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x130(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x260

.loc_0x134:
  cmpwi     r4, 0
  bne-      .loc_0x158
  lwz       r3, 0x70(r28)
  lhz       r4, 0xB4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x118(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x260

.loc_0x158:
  cmpwi     r4, 0x1
  bne-      .loc_0x260
  lwz       r3, 0x8C(r28)
  lhz       r4, 0xB4(r30)
  bl        -0x414A24
  mr.       r26, r3
  beq-      .loc_0x260
  lwz       r4, -0x64AC(r13)
  lwz       r3, -0x6514(r13)
  lwz       r4, 0x1B0(r4)
  bl        -0xCCEC
  li        r3, 0x54
  bl        -0x40C298
  mr.       r27, r3
  beq-      .loc_0x1E0
  bl        -0x1EDB8
  lis       r3, 0x804F
  addi      r25, r27, 0x28
  subi      r0, r3, 0x422C
  stw       r0, 0x0(r27)
  mr        r3, r25
  bl        -0x1EDD0
  lis       r4, 0x804B
  li        r3, 0
  subi      r4, r4, 0x59A4
  li        r0, -0x1
  stw       r4, 0x0(r25)
  stw       r3, 0x18(r25)
  stw       r3, 0x1C(r25)
  sth       r0, 0x20(r25)
  stw       r3, 0x18(r27)
  stw       r3, 0x1C(r27)
  stw       r3, 0x50(r27)
  stw       r3, 0x24(r27)

.loc_0x1E0:
  lwz       r4, 0x70(r28)
  mr        r3, r27
  mr        r5, r26
  lwz       r4, 0x174(r4)
  lwz       r4, 0x8(r4)
  lwz       r4, 0x4(r4)
  bl        0xDB30
  lwz       r3, 0x70(r28)
  mr        r4, r27
  lwz       r12, 0x0(r3)
  lwz       r12, 0x11C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x70(r28)
  li        r4, 0x1
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC4(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x8(r28)
  cmplwi    r3, 0
  beq-      .loc_0x258
  lwz       r0, 0x1F0(r3)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x258
  lwz       r3, 0x70(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x120(r12)
  mtctr     r12
  bctrl     

.loc_0x258:
  lwz       r3, -0x6514(r13)
  bl        -0xCD58

.loc_0x260:
  addi      r31, r31, 0x4
  addi      r30, r30, 0x2
  addi      r29, r29, 0x1

.loc_0x26C:
  lwz       r0, 0x74(r28)
  cmpw      r29, r0
  blt+      .loc_0x10C
  lbz       r0, 0xA8(r28)
  cmplwi    r0, 0
  beq-      .loc_0x2BC
  lwz       r5, -0x64AC(r13)
  addi      r4, r1, 0x14
  lfs       f1, 0x1C0(r5)
  lfs       f2, 0x1C4(r5)
  lfs       f0, 0x1BC(r5)
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f2, 0x1C(r1)
  lwz       r3, 0x70(r28)
  lfs       f1, 0x1C8(r5)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x124(r12)
  mtctr     r12
  bctrl     

.loc_0x2BC:
  lwz       r0, 0x88(r28)
  cmpwi     r0, 0x3
  beq-      .loc_0x3F4
  bge-      .loc_0x2DC
  cmpwi     r0, 0x1
  beq-      .loc_0x424
  bge-      .loc_0x448
  b         .loc_0x48C

.loc_0x2DC:
  cmpwi     r0, 0x5
  beq-      .loc_0x2EC
  bge-      .loc_0x48C
  b         .loc_0x330

.loc_0x2EC:
  lwz       r5, -0x64AC(r13)
  addi      r4, r1, 0x8
  lfs       f1, 0x1C0(r5)
  lfs       f2, 0x1C4(r5)
  lfs       f0, 0x1BC(r5)
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f2, 0x10(r1)
  lwz       r3, 0x70(r28)
  lfs       f1, 0x1C8(r5)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x124(r12)
  mtctr     r12
  bctrl     
  li        r0, 0x1
  stb       r0, 0xA8(r28)
  b         .loc_0x48C

.loc_0x330:
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5DD4
  li        r4, 0x16D
  subi      r5, r5, 0x5DBC
  crclr     6, 0x6
  bl        -0x405CBC
  lwz       r3, -0x6CF8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x370
  lwz       r12, 0x4(r3)
  addi      r4, r28, 0x90
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x94(r28)

.loc_0x370:
  lwz       r3, -0x64AC(r13)
  lwz       r0, 0x1F0(r3)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0x3B8
  lwz       r3, 0x70(r28)
  addi      r4, r28, 0x90
  lfs       f1, 0x2358(r2)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x124(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x64AC(r13)
  li        r4, 0x1
  li        r5, 0
  bl        -0x1FD4
  li        r0, 0
  stw       r0, 0x88(r28)
  b         .loc_0x48C

.loc_0x3B8:
  lwz       r3, 0x70(r28)
  addi      r4, r28, 0x90
  lwz       r12, 0x0(r3)
  lwz       r12, 0x12C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x48C
  lwz       r3, -0x64AC(r13)
  li        r4, 0x1
  li        r5, 0
  bl        -0x2010
  li        r0, 0
  stw       r0, 0x88(r28)
  b         .loc_0x48C

.loc_0x3F4:
  lwz       r3, 0x70(r28)
  addi      r4, r28, 0x90
  lfs       f1, 0x2364(r2)
  lfs       f0, 0xA0(r28)
  lwz       r12, 0x0(r3)
  fmuls     f0, f1, f0
  lfs       f1, 0x2360(r2)
  lwz       r12, 0x124(r12)
  fmuls     f1, f1, f0
  mtctr     r12
  bctrl     
  b         .loc_0x48C

.loc_0x424:
  lwz       r3, 0x70(r28)
  addi      r4, r28, 0x90
  lwz       r5, -0x64AC(r13)
  lwz       r12, 0x0(r3)
  lfs       f1, 0x1C8(r5)
  lwz       r12, 0x124(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x48C

.loc_0x448:
  lwz       r3, -0x6CF8(r13)
  cmplwi    r3, 0
  beq-      .loc_0x46C
  lwz       r12, 0x4(r3)
  addi      r4, r28, 0x90
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  stfs      f1, 0x94(r28)

.loc_0x46C:
  lwz       r3, 0x70(r28)
  addi      r4, r28, 0x90
  lwz       r5, -0x64AC(r13)
  lwz       r12, 0x0(r3)
  lfs       f1, 0x1C8(r5)
  lwz       r12, 0x124(r12)
  mtctr     r12
  bctrl     

.loc_0x48C:
  li        r5, 0
  lis       r3, 0x1
  stw       r5, 0x74(r28)
  li        r4, -0x1
  subi      r0, r3, 0x1
  stw       r5, 0xB0(r28)
  stw       r4, 0x78(r28)
  sth       r0, 0xB4(r28)
  stw       r4, 0x7C(r28)
  sth       r0, 0xB6(r28)
  stw       r4, 0x80(r28)
  sth       r0, 0xB8(r28)
  stw       r4, 0x84(r28)
  sth       r0, 0xBA(r28)
  lmw       r25, 0x24(r1)
  lwz       r0, 0x44(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	8043048C
 * Size:	000074
 */
void Game::P2JST::ObjectGameActor::JSGSetAnimation( (unsigned long))
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
  lwz       r0, 0x74(r3)
  cmpwi     r0, 0x4
  blt-      .loc_0x44
  lis       r3, 0x804A
  lis       r5, 0x804A
  subi      r3, r3, 0x5DD4
  li        r4, 0x1B9
  subi      r5, r5, 0x5D9C
  crclr     6, 0x6
  bl        -0x405E8C

.loc_0x44:
  lwz       r4, 0x74(r30)
  addi      r3, r4, 0x1
  rlwinm    r0,r4,2,0,29
  stw       r3, 0x74(r30)
  add       r3, r30, r0
  stw       r31, 0x78(r3)
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
 * Address:	80430500
 * Size:	000008
 */
void Game::P2JST::ObjectGameActor::JSGSetShape( (unsigned long))
{
/*
.loc_0x0:
  stw       r4, 0x88(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80430508
 * Size:	00001C
 */
void Game::P2JST::ObjectGameActor::JSGSetTranslation( (Vec const &))
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  lfs       f1, 0x4(r4)
  stfs      f0, 0x90(r3)
  lfs       f0, 0x8(r4)
  stfs      f1, 0x94(r3)
  stfs      f0, 0x98(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80430524
 * Size:	000058
 */
void Game::P2JST::ObjectGameActor::JSGGetTranslation( const(Vec *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  lwz       r4, 0x70(r3)
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  lfs       f2, 0x10(r1)
  lfs       f0, 0x8(r1)
  stfs      f0, 0x0(r31)
  stfs      f1, 0x4(r31)
  stfs      f2, 0x8(r31)
  lwz       r31, 0x1C(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8043057C
 * Size:	00001C
 */
void Game::P2JST::ObjectGameActor::JSGSetRotation( (Vec const &))
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  lfs       f1, 0x4(r4)
  stfs      f0, 0x9C(r3)
  lfs       f0, 0x8(r4)
  stfs      f1, 0xA0(r3)
  stfs      f0, 0xA4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80430598
 * Size:	00001C
 */
void Game::P2JST::ObjectGameActor::JSGGetRotation( const(Vec *))
{
/*
.loc_0x0:
  lfs       f0, 0x9C(r3)
  lfs       f1, 0xA0(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0xA4(r3)
  stfs      f1, 0x4(r4)
  stfs      f0, 0x8(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	804305B4
 * Size:	0000E0
 */
void Game::P2JST::ObjectGameActor::JSGFindNodeID( const(char const *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r0, 0x70(r28)
  lis       r3, 0x804A
  subi      r30, r3, 0x5DF0
  cmplwi    r0, 0
  bne-      .loc_0x4C
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x6C
  li        r4, 0x1EC
  crclr     6, 0x6
  bl        -0x405FBC

.loc_0x4C:
  lwz       r3, 0x70(r28)
  lwz       r0, 0x174(r3)
  cmplwi    r0, 0
  bne-      .loc_0x70
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x6C
  li        r4, 0x1ED
  crclr     6, 0x6
  bl        -0x405FE0

.loc_0x70:
  lwz       r3, 0x70(r28)
  mr        r4, r29
  lwz       r3, 0x174(r3)
  bl        0xE9B4
  mr.       r31, r3
  bne-      .loc_0xB8
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r6, r3
  mr        r7, r29
  addi      r3, r30, 0x1C
  addi      r5, r30, 0x78
  li        r4, 0x1F3
  crclr     6, 0x6
  bl        -0x406028

.loc_0xB8:
  lwz       r3, 0x18(r31)
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lhz       r3, 0x14(r3)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80430694
 * Size:	0000D8
 */
void Game::P2JST::ObjectGameActor::JSGGetNodeTransformation( const(unsigned long, float (*)[4]))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r27, r3
  lwz       r0, 0x70(r27)
  lis       r3, 0x804A
  mr        r28, r4
  mr        r29, r5
  cmplwi    r0, 0
  subi      r31, r3, 0x5DF0
  bne-      .loc_0x44
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x6C
  li        r4, 0x1FD
  crclr     6, 0x6
  bl        -0x406094

.loc_0x44:
  lwz       r3, 0x70(r27)
  lwz       r0, 0x174(r3)
  cmplwi    r0, 0
  bne-      .loc_0x68
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x6C
  li        r4, 0x1FE
  crclr     6, 0x6
  bl        -0x4060B8

.loc_0x68:
  lwz       r3, 0x70(r27)
  mulli     r0, r28, 0x3C
  lwz       r3, 0x174(r3)
  lwz       r3, 0x10(r3)
  add.      r30, r3, r0
  bne-      .loc_0xB0
  mr        r3, r27
  lwz       r12, 0x0(r27)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r6, r3
  mr        r7, r28
  addi      r3, r31, 0x1C
  addi      r5, r31, 0x94
  li        r4, 0x204
  crclr     6, 0x6
  bl        -0x406100

.loc_0xB0:
  mr        r3, r30
  bl        -0x6EA8
  mr        r4, r29
  bl        -0x346484
  lmw       r27, 0xC(r1)
  li        r3, 0x1
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8043076C
 * Size:	000138
 */
void Game::P2JST::ObjectGameActor::parseUserData_( (unsigned long, void const *))
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  lis       r4, 0x804A
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  stw       r30, 0x38(r1)
  subi      r30, r4, 0x5DF0
  stw       r29, 0x34(r1)
  stw       r28, 0x30(r1)
  mr        r28, r5
  lwz       r3, 0x74(r3)
  subic.    r29, r3, 0x1
  bge-      .loc_0x50
  lwz       r6, 0xB0(r31)
  addi      r3, r30, 0x1C
  addi      r5, r30, 0xB0
  li        r4, 0x213
  crclr     6, 0x6
  bl        -0x406178

.loc_0x50:
  cmpwi     r29, 0x4
  blt-      .loc_0x70
  lwz       r6, 0xB0(r31)
  addi      r3, r30, 0x1C
  addi      r5, r30, 0xD8
  li        r4, 0x216
  crclr     6, 0x6
  bl        -0x406198

.loc_0x70:
  lwz       r5, 0xB0(r31)
  addi      r3, r1, 0x8
  addi      r4, r1, 0x1C
  addi      r0, r5, 0x1
  stw       r0, 0xB0(r31)
  stw       r28, 0x8(r1)
  bl        -0x427DF4
  lbz       r0, 0x1C(r1)
  cmplwi    r0, 0
  beq-      .loc_0x118
  lwz       r4, 0x28(r1)
  li        r3, 0
  cmplwi    r4, 0
  beq-      .loc_0xC0
  cmplwi    r0, 0x32
  bne-      .loc_0xC0
  lwz       r0, 0x2C(r1)
  cmplwi    r0, 0
  beq-      .loc_0xC0
  li        r3, 0x1

.loc_0xC0:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x118
  rlwinm    r3,r29,1,0,30
  stw       r4, 0x18(r1)
  addi      r5, r3, 0xB4
  b         .loc_0xF0

.loc_0xD8:
  lwz       r4, 0x18(r1)
  lwz       r3, 0x18(r1)
  lhz       r4, 0x0(r4)
  addi      r0, r3, 0x2
  sthx      r4, r31, r5
  stw       r0, 0x18(r1)

.loc_0xF0:
  lwz       r0, 0x24(r1)
  lwz       r4, 0x28(r1)
  rlwinm    r3,r0,1,0,30
  lwz       r0, 0x18(r1)
  add       r4, r4, r3
  cmplw     r0, r4
  stw       r4, 0x14(r1)
  stw       r4, 0x10(r1)
  stw       r0, 0xC(r1)
  bne+      .loc_0xD8

.loc_0x118:
  lwz       r0, 0x44(r1)
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
 * Address:	804308A4
 * Size:	000068
 */
void Game::P2JST::ObjectGameActor::__dt(void)
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
  lis       r5, 0x804F
  li        r4, 0
  subi      r5, r5, 0x3E04
  stw       r5, 0x0(r30)
  addi      r0, r5, 0x8C
  stw       r0, 0x4(r30)
  bl        -0x1EAC
  extsh.    r0, r31
  ble-      .loc_0x4C
  mr        r3, r30
  bl        -0x40C838

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
 * Address:	8043090C
 * Size:	000028
 */
void __sinit_JSTObjectGameActor_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6490(r13)
  stfsu     f0, -0x3E10(r3)
  stfs      f0, -0x648C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80430934
 * Size:	000008
 */
void @4@Game::P2JST::ObjectGameActor::parseUserData_( (unsigned long, void const *))
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x1CC
*/
}

/*
 * --INFO--
 * Address:	8043093C
 * Size:	000008
 */
void @4@Game::P2JST::ObjectGameActor::stop(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xAB0
*/
}

/*
 * --INFO--
 * Address:	80430944
 * Size:	000008
 */
void @4@Game::P2JST::ObjectGameActor::update(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x994
*/
}

/*
 * --INFO--
 * Address:	8043094C
 * Size:	000008
 */
void @4@Game::P2JST::ObjectGameActor::reset(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0xB14
*/
}
