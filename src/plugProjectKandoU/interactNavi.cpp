

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
 * Address:	801D7E64
 * Size:	000074
 */
void Game::Navi::stimulate( (Game::Interaction &))
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
  mr        r3, r31
  lwz       r12, 0x0(r31)
  mr        r4, r30
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x58
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x5C

.loc_0x58:
  li        r3, 0

.loc_0x5C:
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
 * Address:	801D7ED8
 * Size:	00008C
 */
void Game::InteractSarai::actNavi( (Game::Navi *))
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
  lwz       r5, -0x6C18(r13)
  cmplwi    r5, 0
  beq-      .loc_0x34
  lbz       r0, 0x3C(r5)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x74

.loc_0x34:
  mr        r3, r31
  bl        -0x3899C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x70
  lwz       r4, 0x4(r30)
  mr        r3, r31
  lwz       r5, 0xC(r30)
  bl        -0x39034
  mr        r3, r31
  li        r4, 0x11
  lwz       r12, 0x0(r31)
  li        r5, 0
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     

.loc_0x70:
  li        r3, 0x1

.loc_0x74:
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
 * Address:	801D7F64
 * Size:	000080
 */
void Game::InteractBomb::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  mr        r6, r4
  stw       r0, 0x24(r1)
  lwz       r5, -0x6C18(r13)
  lbz       r0, 0x3C(r5)
  rlwinm.   r0,r0,0,26,26
  bne-      .loc_0x28
  li        r3, 0
  b         .loc_0x70

.loc_0x28:
  lfs       f1, 0x8(r3)
  addi      r5, r1, 0x8
  lwz       r0, 0x4(r3)
  li        r4, 0xC
  stw       r0, 0x8(r1)
  lfs       f0, 0xC(r3)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x10(r3)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x14(r3)
  mr        r3, r6
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  lwz       r12, 0x0(r6)
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0x70:
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	801D7FE4
 * Size:	0000E0
 */
void Game::InteractWind::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  mr        r3, r31
  bl        -0x96B60
  li        r4, 0x7
  bl        0xDFC4
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3C
  li        r3, 0
  b         .loc_0xC8

.loc_0x3C:
  lfs       f1, 0x8(r30)
  lwz       r3, 0x4(r30)
  stw       r3, 0x8(r1)
  lfs       f0, 0xC(r30)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x10(r30)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x14(r30)
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  lwz       r4, 0x274(r31)
  lwz       r5, 0x4(r4)
  cmpwi     r5, 0xC
  bne-      .loc_0x88
  lwz       r0, 0x14(r4)
  cmplw     r0, r3
  bne-      .loc_0x88
  li        r3, 0
  b         .loc_0xC8

.loc_0x88:
  cmpwi     r5, 0x10
  bne-      .loc_0xA8
  lwz       r3, 0x1C(r4)
  lwz       r0, 0x4(r30)
  cmplw     r3, r0
  bne-      .loc_0xA8
  li        r3, 0
  b         .loc_0xC8

.loc_0xA8:
  mr        r3, r31
  addi      r5, r1, 0x8
  lwz       r12, 0x0(r31)
  li        r4, 0xC
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0xC8:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801D80C4
 * Size:	0000B4
 */
void Game::InteractDenki::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r4
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r5, -0x6C18(r13)
  cmplwi    r5, 0
  beq-      .loc_0x34
  lbz       r0, 0x3C(r5)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x9C

.loc_0x34:
  lwz       r3, -0x6B70(r13)
  li        r4, 0x1
  addi      r3, r3, 0x48
  bl        0xDECC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x98
  lfs       f1, 0x8(r30)
  mr        r3, r31
  lwz       r0, 0x4(r30)
  addi      r5, r1, 0x8
  li        r4, 0xC
  stw       r0, 0x8(r1)
  lfs       f0, 0xC(r30)
  stfs      f0, 0xC(r1)
  lfs       f0, 0x10(r30)
  stfs      f0, 0x10(r1)
  lfs       f0, 0x14(r30)
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x9C

.loc_0x98:
  li        r3, 0

.loc_0x9C:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	801D8178
 * Size:	000044
 */
void Game::InteractFallMeck::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  addi      r5, r1, 0x8
  lfs       f0, 0x8(r3)
  mr        r3, r4
  li        r4, 0xF
  stfs      f0, 0x8(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  li        r3, 0x1
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801D81BC
 * Size:	0001F8
 */
void Game::InteractFlick::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x80(r1)
  mflr      r0
  stw       r0, 0x84(r1)
  stfd      f31, 0x70(r1)
  psq_st    f31,0x78(r1),0,0
  stfd      f30, 0x60(r1)
  psq_st    f30,0x68(r1),0,0
  stfd      f29, 0x50(r1)
  psq_st    f29,0x58(r1),0,0
  stw       r31, 0x4C(r1)
  stw       r30, 0x48(r1)
  lwz       r5, -0x6C18(r13)
  mr        r30, r3
  mr        r31, r4
  cmplwi    r5, 0
  beq-      .loc_0x4C
  lbz       r0, 0x3C(r5)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x1C8

.loc_0x4C:
  lwz       r3, -0x6B70(r13)
  li        r4, 0x27
  bl        0xF1D0
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x68
  li        r3, 0
  b         .loc_0x1C8

.loc_0x68:
  lfs       f1, 0x10(r30)
  lfs       f0, -0x4BD8(r2)
  fcmpo     cr0, f1, f0
  bge-      .loc_0x8C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x64(r12)
  mtctr     r12
  bctrl     

.loc_0x8C:
  lfs       f0, -0x4BD4(r2)
  fmr       f2, f1
  fcmpo     cr0, f1, f0
  bge-      .loc_0xA0
  fneg      f2, f1

.loc_0xA0:
  lfs       f3, -0x4BD0(r2)
  lis       r3, 0x8050
  lfs       f0, -0x4BD4(r2)
  addi      r4, r3, 0x71A0
  fmuls     f2, f2, f3
  fcmpo     cr0, f1, f0
  fctiwz    f0, f2
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fneg      f31, f0
  bge-      .loc_0xFC
  lfs       f0, -0x4BCC(r2)
  fmuls     f0, f1, f0
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f30, f0
  b         .loc_0x114

.loc_0xFC:
  fmuls     f0, f1, f3
  fctiwz    f0, f0
  stfd      f0, 0x30(r1)
  lwz       r0, 0x34(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f30, r4, r0

.loc_0x114:
  bl        -0x10ED30
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x3C(r1)
  lfd       f2, -0x4BB8(r2)
  stw       r0, 0x38(r1)
  lfs       f1, -0x4BC8(r2)
  lfd       f0, 0x38(r1)
  lfs       f3, 0x8(r30)
  fsubs     f2, f0, f2
  lfs       f0, -0x4BC4(r2)
  fmuls     f0, f0, f3
  fdivs     f1, f2, f1
  fmadds    f29, f0, f1, f3
  bl        -0x10ED68
  xoris     r3, r3, 0x8000
  lis       r0, 0x4330
  stw       r3, 0x44(r1)
  fneg      f1, f30
  lfd       f6, -0x4BB8(r2)
  fmuls     f0, f31, f29
  stw       r0, 0x40(r1)
  mr        r3, r31
  lfs       f4, -0x4BC8(r2)
  lfd       f5, 0x40(r1)
  fmuls     f3, f1, f29
  lfs       f2, -0x4BBC(r2)
  addi      r5, r1, 0x8
  fsubs     f5, f5, f6
  lfs       f1, -0x4BC0(r2)
  lfs       f6, 0xC(r30)
  lwz       r0, 0x4(r30)
  li        r4, 0xC
  fdivs     f4, f5, f4
  stw       r0, 0x8(r1)
  stfs      f3, 0xC(r1)
  stfs      f0, 0x14(r1)
  stfs      f6, 0x18(r1)
  fmadds    f0, f2, f4, f1
  stfs      f0, 0x10(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1

.loc_0x1C8:
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  lwz       r31, 0x4C(r1)
  lwz       r0, 0x84(r1)
  lwz       r30, 0x48(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	801D83B4
 * Size:	0000F4
 */
void Game::InteractPress::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r5, -0x6C18(r13)
  cmplwi    r5, 0
  beq-      .loc_0x38
  lbz       r0, 0x3C(r5)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0xD8

.loc_0x38:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x5C
  li        r3, 0
  b         .loc_0xD8

.loc_0x5C:
  lwz       r31, 0x274(r30)
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xCC
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x34(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xCC
  lfs       f1, 0x8(r29)
  mr        r3, r30
  li        r4, 0x1
  bl        -0x93E48
  lwz       r3, 0x270(r30)
  mr        r4, r30
  li        r5, 0xE
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xD4

.loc_0xCC:
  li        r3, 0
  b         .loc_0xD8

.loc_0xD4:
  li        r3, 0x1

.loc_0xD8:
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
 * Address:	801D84A8
 * Size:	0000B8
 */
void Game::InteractFire::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x6
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r5, -0x6B70(r13)
  addi      r3, r5, 0x48
  bl        0xDB00
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x3C
  li        r3, 0
  b         .loc_0xA0

.loc_0x3C:
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x5C
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x5C
  li        r3, 0
  b         .loc_0xA0

.loc_0x5C:
  mr        r3, r31
  bl        -0x9419C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x74
  li        r3, 0
  b         .loc_0xA0

.loc_0x74:
  lwz       r3, 0x26C(r31)
  li        r4, 0x810
  li        r5, 0
  lwz       r12, 0x28(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x8(r30)
  mr        r3, r31
  bl        -0x94138
  li        r3, 0x1

.loc_0xA0:
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
 * Address:	801D8560
 * Size:	000090
 */
void Game::InteractBubble::actNavi( (Game::Navi *))
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
  lwz       r5, -0x6C18(r13)
  cmplwi    r5, 0
  beq-      .loc_0x34
  lbz       r0, 0x3C(r5)
  rlwinm.   r0,r0,0,26,26
  beq-      .loc_0x78

.loc_0x34:
  cmplwi    r5, 0
  beq-      .loc_0x50
  lwz       r0, 0x44(r5)
  cmpwi     r0, 0x1
  bne-      .loc_0x50
  li        r3, 0
  b         .loc_0x78

.loc_0x50:
  mr        r3, r31
  bl        -0x94248
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x68
  li        r3, 0
  b         .loc_0x78

.loc_0x68:
  lfs       f1, 0x8(r30)
  mr        r3, r31
  bl        -0x941C8
  li        r3, 0x1

.loc_0x78:
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
 * Address:	801D85F0
 * Size:	000008
 */
void Game::InteractGas::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	801D85F8
 * Size:	00005C
 */
void Game::InteractBury::actNavi( (Game::Navi *))
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
  mr        r3, r31
  bl        -0x942AC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x34
  li        r3, 0
  b         .loc_0x44

.loc_0x34:
  lfs       f1, 0x8(r30)
  mr        r3, r31
  bl        -0x9422C
  li        r3, 0x1

.loc_0x44:
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
 * Address:	801D8654
 * Size:	000358
 */
void Game::InteractFue::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x1F0(r1)
  mflr      r0
  stw       r0, 0x1F4(r1)
  stw       r31, 0x1EC(r1)
  mr        r31, r4
  stw       r30, 0x1E8(r1)
  stw       r29, 0x1E4(r1)
  mr        r29, r3
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r30, 0x274(r4)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48
  li        r3, 0
  b         .loc_0x33C

.loc_0x48:
  lwz       r0, 0x278(r31)
  cmplwi    r0, 0
  beq-      .loc_0x5C
  li        r3, 0
  b         .loc_0x33C

.loc_0x5C:
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x38(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x80
  li        r3, 0
  b         .loc_0x33C

.loc_0x80:
  lwz       r3, -0x6C18(r13)
  lwz       r0, 0x44(r3)
  cmpwi     r0, 0
  bne-      .loc_0xBC
  lwz       r3, 0x40(r3)
  lwz       r0, 0x218(r3)
  cmplwi    r0, 0
  bne-      .loc_0xBC
  lwz       r3, -0x6B70(r13)
  li        r4, 0x27
  bl        0xECE4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xBC
  li        r3, 0
  b         .loc_0x33C

.loc_0xBC:
  mr        r3, r31
  bl        -0x972D0
  cmpwi     r3, 0x1
  beq-      .loc_0x338
  lbz       r0, 0x9(r29)
  mr        r3, r31
  addi      r5, r1, 0x8
  li        r4, 0x1
  stb       r0, 0x8(r1)
  lwz       r12, 0x0(r31)
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6D20(r13)
  lhz       r0, 0x2DC(r31)
  lwz       r12, 0x0(r3)
  subfic    r4, r0, 0x1
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lis       r4, 0x804B
  li        r5, 0x1
  subi      r0, r4, 0x5D00
  li        r30, 0
  lis       r4, 0x804B
  stw       r0, 0x1C(r1)
  addi      r6, r4, 0x49BC
  cmplwi    r30, 0
  stw       r3, 0x20(r1)
  lis       r4, 0x804B
  subi      r0, r4, 0x437C
  li        r29, 0
  stw       r6, 0x1C(r1)
  stb       r5, 0x24(r1)
  stb       r5, 0x25(r1)
  lwz       r3, 0x254(r31)
  stw       r0, 0xC(r1)
  stw       r30, 0x18(r1)
  stw       r30, 0x10(r1)
  stw       r3, 0x14(r1)
  bne-      .loc_0x178
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10(r1)
  b         .loc_0x200

.loc_0x178:
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10(r1)
  b         .loc_0x1E4

.loc_0x190:
  lwz       r3, 0x14(r1)
  lwz       r4, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x200
  lwz       r3, 0x14(r1)
  lwz       r4, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10(r1)

.loc_0x1E4:
  lwz       r12, 0xC(r1)
  addi      r3, r1, 0xC
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x190

.loc_0x200:
  addi      r31, r1, 0x28
  b         .loc_0x2E4

.loc_0x208:
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x18(r1)
  addi      r29, r29, 0x1
  stwx      r3, r31, r30
  addi      r30, r30, 0x4
  cmplwi    r0, 0
  bne-      .loc_0x254
  lwz       r3, 0x14(r1)
  lwz       r4, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10(r1)
  b         .loc_0x2E4

.loc_0x254:
  lwz       r3, 0x14(r1)
  lwz       r4, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10(r1)
  b         .loc_0x2C8

.loc_0x274:
  lwz       r3, 0x14(r1)
  lwz       r4, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  lwz       r3, 0x18(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x2E4
  lwz       r3, 0x14(r1)
  lwz       r4, 0x10(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10(r1)

.loc_0x2C8:
  lwz       r12, 0xC(r1)
  addi      r3, r1, 0xC
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x274

.loc_0x2E4:
  lwz       r3, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r4, 0x10(r1)
  cmplw     r4, r3
  bne+      .loc_0x208
  addi      r30, r1, 0x28
  li        r31, 0
  b         .loc_0x330

.loc_0x310:
  lwz       r3, 0x0(r30)
  addi      r4, r1, 0x1C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  addi      r30, r30, 0x4
  addi      r31, r31, 0x1

.loc_0x330:
  cmpw      r31, r29
  blt+      .loc_0x310

.loc_0x338:
  li        r3, 0x1

.loc_0x33C:
  lwz       r0, 0x1F4(r1)
  lwz       r31, 0x1EC(r1)
  lwz       r30, 0x1E8(r1)
  lwz       r29, 0x1E4(r1)
  mtlr      r0
  addi      r1, r1, 0x1F0
  blr
*/
}

/*
 * --INFO--
 * Address:	801D89AC
 * Size:	000074
 */
void Game::InteractKaisan::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r0, 0x278(r4)
  cmplwi    r0, 0
  beq-      .loc_0x28
  li        r3, 0
  b         .loc_0x60

.loc_0x28:
  mr        r3, r31
  bl        -0x97594
  cmpwi     r3, 0x1
  bne-      .loc_0x5C
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  li        r5, 0
  lwz       r12, 0x22C(r12)
  mtctr     r12
  bctrl     
  li        r3, 0x1
  b         .loc_0x60

.loc_0x5C:
  li        r3, 0

.loc_0x60:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	801D8A20
 * Size:	00009C
 */
void Game::InteractAttack::actNavi( (Game::Navi *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0x27
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, -0x6B70(r13)
  bl        0xE99C
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x38
  li        r3, 0
  b         .loc_0x84

.loc_0x38:
  mr        r3, r31
  bl        -0x946F0
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x50
  li        r3, 0
  b         .loc_0x84

.loc_0x50:
  lwz       r3, 0x4(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x74
  lfs       f0, -0x4BD4(r2)
  stfs      f0, 0x8(r30)

.loc_0x74:
  lfs       f1, 0x8(r30)
  mr        r3, r31
  bl        -0x94694
  li        r3, 0x1

.loc_0x84:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}
