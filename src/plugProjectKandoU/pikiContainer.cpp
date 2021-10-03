

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
 * Address:	801F1240
 * Size:	00004C
 */
void Game::PikiContainer::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x804C
  stw       r0, 0x14(r1)
  subi      r0, r4, 0x4408
  stw       r31, 0xC(r1)
  mr        r31, r3
  li        r3, 0x54
  stw       r0, 0x0(r31)
  bl        -0x1CD2B8
  stw       r3, 0x4(r31)
  mr        r3, r31
  bl        .loc_0x4C
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x4C:
*/
}

/*
 * --INFO--
 * Address:	801F128C
 * Size:	00006C
 */
void Game::PikiContainer::clear(void)
{
/*
.loc_0x0:
  li        r0, 0x3
  li        r11, 0
  mtctr     r0
  mr        r10, r11

.loc_0x10:
  lwz       r4, 0x4(r3)
  addi      r8, r11, 0x4
  addi      r7, r11, 0x8
  addi      r6, r11, 0xC
  stwx      r10, r4, r11
  addi      r5, r11, 0x10
  addi      r4, r11, 0x14
  addi      r0, r11, 0x18
  lwz       r9, 0x4(r3)
  addi      r11, r11, 0x1C
  stwx      r10, r9, r8
  lwz       r8, 0x4(r3)
  stwx      r10, r8, r7
  lwz       r7, 0x4(r3)
  stwx      r10, r7, r6
  lwz       r6, 0x4(r3)
  stwx      r10, r6, r5
  lwz       r5, 0x4(r3)
  stwx      r10, r5, r4
  lwz       r4, 0x4(r3)
  stwx      r10, r4, r0
  bdnz+     .loc_0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F12F8
 * Size:	0000B0
 */
void Game::PikiContainer::operator=( (Game::PikiContainer &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  li        r0, 0x3
  li        r5, 0
  stw       r31, 0xC(r1)
  mtctr     r0

.loc_0x14:
  lwz       r7, 0x4(r4)
  addi      r12, r5, 0x4
  lwz       r6, 0x4(r3)
  addi      r11, r5, 0x8
  lwzx      r0, r7, r5
  addi      r10, r5, 0xC
  addi      r9, r5, 0x10
  addi      r8, r5, 0x14
  stwx      r0, r6, r5
  addi      r7, r5, 0x18
  addi      r5, r5, 0x1C
  lwz       r31, 0x4(r4)
  lwz       r6, 0x4(r3)
  lwzx      r0, r31, r12
  stwx      r0, r6, r12
  lwz       r12, 0x4(r4)
  lwz       r6, 0x4(r3)
  lwzx      r0, r12, r11
  stwx      r0, r6, r11
  lwz       r11, 0x4(r4)
  lwz       r6, 0x4(r3)
  lwzx      r0, r11, r10
  stwx      r0, r6, r10
  lwz       r10, 0x4(r4)
  lwz       r6, 0x4(r3)
  lwzx      r0, r10, r9
  stwx      r0, r6, r9
  lwz       r9, 0x4(r4)
  lwz       r6, 0x4(r3)
  lwzx      r0, r9, r8
  stwx      r0, r6, r8
  lwz       r8, 0x4(r4)
  lwz       r6, 0x4(r3)
  lwzx      r0, r8, r7
  stwx      r0, r6, r7
  bdnz+     .loc_0x14
  lwz       r31, 0xC(r1)
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801F13A8
 * Size:	000074
 */
void Game::PikiContainer::dump( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3

.loc_0x20:
  mr        r3, r29
  mr        r4, r31
  bl        0x1E0
  li        r30, 0

.loc_0x30:
  mr        r3, r29
  mr        r4, r31
  mr        r5, r30
  bl        .loc_0x74
  addi      r30, r30, 0x1
  cmpwi     r30, 0x3
  blt+      .loc_0x30
  addi      r31, r31, 0x1
  cmpwi     r31, 0x7
  blt+      .loc_0x20
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x74:
*/
}

/*
 * --INFO--
 * Address:	801F141C
 * Size:	0000C8
 */
void Game::PikiContainer::getCount( (int, int))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  mr        r31, r5
  stw       r30, 0x18(r1)
  mr.       r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  blt-      .loc_0x38
  cmpwi     r30, 0x7
  bge-      .loc_0x38
  li        r0, 0x1

.loc_0x38:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x5C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x5F
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C6E34

.loc_0x5C:
  cmpwi     r31, 0
  li        r0, 0
  blt-      .loc_0x74
  cmpwi     r31, 0x3
  bge-      .loc_0x74
  li        r0, 0x1

.loc_0x74:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x98
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x60
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C6E70

.loc_0x98:
  mulli     r0, r30, 0x3
  lwz       r3, 0x4(r29)
  add       r0, r31, r0
  rlwinm    r0,r0,2,0,29
  add       r3, r3, r0
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801F14E4
 * Size:	0000CC
 */
void Game::PikiContainer::operator()( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  li        r0, 0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  mr        r29, r3
  lbz       r30, 0x2B8(r4)
  lbz       r31, 0x2B9(r4)
  cmpwi     r30, 0
  blt-      .loc_0x3C
  cmpwi     r30, 0x7
  bge-      .loc_0x3C
  li        r0, 0x1

.loc_0x3C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x60
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x5F
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C6F00

.loc_0x60:
  cmpwi     r31, 0
  li        r0, 0
  blt-      .loc_0x78
  cmpwi     r31, 0x3
  bge-      .loc_0x78
  li        r0, 0x1

.loc_0x78:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x9C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x60
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C6F3C

.loc_0x9C:
  mulli     r0, r30, 0x3
  lwz       r3, 0x4(r29)
  add       r0, r31, r0
  rlwinm    r0,r0,2,0,29
  add       r3, r3, r0
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801F15B0
 * Size:	0000D4
 */
void Game::PikiContainer::getColorSum( (int))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r27, 0xC(r1)
  mr        r29, r4
  mulli     r0, r29, 0x3
  mr        r28, r3
  li        r31, 0
  li        r30, 0
  rlwinm    r27,r0,2,0,29

.loc_0x28:
  cmpwi     r29, 0
  li        r0, 0
  blt-      .loc_0x40
  cmpwi     r29, 0x7
  bge-      .loc_0x40
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x5F
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C6FD0

.loc_0x64:
  cmpwi     r30, 0
  li        r0, 0
  blt-      .loc_0x7C
  cmpwi     r30, 0x3
  bge-      .loc_0x7C
  li        r0, 0x1

.loc_0x7C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0xA0
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x60
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C700C

.loc_0xA0:
  lwz       r3, 0x4(r28)
  addi      r30, r30, 0x1
  cmpwi     r30, 0x3
  lwzx      r0, r3, r27
  addi      r27, r27, 0x4
  add       r31, r31, r0
  blt+      .loc_0x28
  mr        r3, r31
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000D0
 */
void Game::PikiContainer::getHappaSum( (int))
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	801F1684
 * Size:	0000E4
 */
void Game::PikiContainer::getTotalSum(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stmw      r26, 0x8(r1)
  mr        r27, r3
  li        r30, 0
  li        r29, 0

.loc_0x1C:
  mr        r31, r29
  rlwinm    r26,r29,2,0,29
  li        r28, 0

.loc_0x28:
  cmpwi     r28, 0
  li        r0, 0
  blt-      .loc_0x40
  cmpwi     r28, 0x7
  bge-      .loc_0x40
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x64
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x5F
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C70A4

.loc_0x64:
  cmpwi     r29, 0
  li        r0, 0
  blt-      .loc_0x7C
  cmpwi     r29, 0x3
  bge-      .loc_0x7C
  li        r0, 0x1

.loc_0x7C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0xA0
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1438
  li        r4, 0x60
  addi      r5, r5, 0x144C
  crclr     6, 0x6
  bl        -0x1C70E0

.loc_0xA0:
  lwz       r3, 0x4(r27)
  addi      r28, r28, 0x1
  cmpwi     r28, 0x7
  addi      r31, r31, 0x3
  lwzx      r0, r3, r26
  addi      r26, r26, 0xC
  add       r30, r30, r0
  blt+      .loc_0x28
  addi      r29, r29, 0x1
  cmpwi     r29, 0x3
  blt+      .loc_0x1C
  mr        r3, r30
  lmw       r26, 0x8(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801F1768
 * Size:	000134
 */
void Game::PikiContainer::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x130(r1)
  mflr      r0
  lis       r5, 0x8048
  stw       r0, 0x134(r1)
  stmw      r24, 0x110(r1)
  mr        r25, r4
  mr        r24, r3
  addi      r30, r5, 0x1428
  mr        r3, r25
  lwz       r4, 0x414(r4)
  bl        0x222CA4
  mr        r3, r25
  addi      r4, r30, 0x30
  crclr     6, 0x6
  bl        0x222A3C
  li        r27, 0
  li        r28, 0

.loc_0x44:
  mr        r29, r28
  rlwinm    r31,r28,2,0,29
  li        r26, 0

.loc_0x50:
  lwz       r4, 0x414(r25)
  mr        r3, r25
  bl        0x222C74
  cmpwi     r27, 0
  li        r0, 0
  blt-      .loc_0x74
  cmpwi     r27, 0x7
  bge-      .loc_0x74
  li        r0, 0x1

.loc_0x74:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x90
  addi      r3, r30, 0x10
  addi      r5, r30, 0x24
  li        r4, 0x5F
  crclr     6, 0x6
  bl        -0x1C71B4

.loc_0x90:
  cmpwi     r26, 0
  li        r0, 0
  blt-      .loc_0xA8
  cmpwi     r26, 0x3
  bge-      .loc_0xA8
  li        r0, 0x1

.loc_0xA8:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0xC4
  addi      r3, r30, 0x10
  addi      r5, r30, 0x24
  li        r4, 0x60
  crclr     6, 0x6
  bl        -0x1C71E8

.loc_0xC4:
  lwz       r4, 0x4(r24)
  mr        r3, r25
  lwzx      r4, r4, r31
  bl        0x223F88
  mr        r5, r27
  mr        r6, r26
  addi      r3, r1, 0x8
  addi      r4, r30, 0x40
  crclr     6, 0x6
  bl        -0x12A418
  mr        r3, r25
  addi      r4, r1, 0x8
  crclr     6, 0x6
  bl        0x22297C
  addi      r26, r26, 0x1
  addi      r31, r31, 0x4
  cmpwi     r26, 0x3
  addi      r29, r29, 0x1
  blt+      .loc_0x50
  addi      r27, r27, 0x1
  addi      r28, r28, 0x3
  cmpwi     r27, 0x7
  blt+      .loc_0x44
  lmw       r24, 0x110(r1)
  lwz       r0, 0x134(r1)
  mtlr      r0
  addi      r1, r1, 0x130
  blr
*/
}

/*
 * --INFO--
 * Address:	801F189C
 * Size:	00006C
 */
void Game::PikiContainer::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  li        r31, 0
  stw       r30, 0x18(r1)
  li        r30, 0
  stw       r29, 0x14(r1)
  mr        r29, r4
  stw       r28, 0x10(r1)
  mr        r28, r3

.loc_0x2C:
  mr        r3, r29
  bl        0x2231C4
  lwz       r4, 0x4(r28)
  addi      r30, r30, 0x1
  cmpwi     r30, 0x15
  stwx      r3, r4, r31
  addi      r31, r31, 0x4
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
