

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
 * Address:	80446C68
 * Size:	000044
 */
void Game::CommonSaveData::Mgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        -0x212B70
  li        r0, 0
  mr        r3, r31
  stb       r0, 0x40(r31)
  stb       r0, 0x41(r31)
  bl        .loc_0x44
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x44:
*/
}

/*
 * --INFO--
 * Address:	80446CAC
 * Size:	000078
 */
void Game::CommonSaveData::Mgr::setDefault(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r6, 0
  li        r5, 0xFF
  stw       r0, 0x14(r1)
  li        r4, 0x1
  li        r0, -0x1
  stb       r6, 0x40(r3)
  stb       r6, 0x41(r3)
  stw       r6, 0x34(r3)
  stw       r6, 0x30(r3)
  stw       r6, 0x28(r3)
  stb       r6, 0x38(r3)
  stb       r5, 0x39(r3)
  stb       r5, 0x3A(r3)
  stb       r4, 0x3B(r3)
  stb       r4, 0x3C(r3)
  stb       r4, 0x3D(r3)
  lwz       r4, -0x6514(r13)
  lwz       r4, 0xD4(r4)
  stb       r4, 0x3E(r3)
  stw       r6, 0x18(r3)
  stw       r6, 0x1C(r3)
  stb       r0, 0x20(r3)
  stb       r6, 0x42(r3)
  bl        -0x212B08
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80446D24
 * Size:	000018
 */
void Game::CommonSaveData::Mgr::setCardSerialNo( (unsigned long long))
{
/*
.loc_0x0:
  stw       r6, 0x34(r3)
  stw       r5, 0x30(r3)
  lhz       r0, 0x40(r3)
  ori       r0, r0, 0x1
  sth       r0, 0x40(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80446D3C
 * Size:	000020
 */
void Game::CommonSaveData::Mgr::resetCardSerialNo(void)
{
/*
.loc_0x0:
  lis       r4, 0xCDCE
  subi      r0, r4, 0x3233
  stw       r0, 0x34(r3)
  stw       r0, 0x30(r3)
  lhz       r0, 0x40(r3)
  rlwinm    r0,r0,0,16,30
  sth       r0, 0x40(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80446D5C
 * Size:	0000AC
 */
void Game::CommonSaveData::Mgr::write( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  stw       r4, 0xC(r31)
  lwz       r0, 0xC(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x34
  stw       r4, 0x414(r31)

.loc_0x34:
  lbz       r4, 0x38(r30)
  mr        r3, r31
  bl        -0x31728
  lbz       r4, 0x39(r30)
  mr        r3, r31
  bl        -0x31734
  lbz       r4, 0x3A(r30)
  mr        r3, r31
  bl        -0x31740
  lbz       r4, 0x3B(r30)
  mr        r3, r31
  bl        -0x3174C
  lbz       r4, 0x3C(r30)
  mr        r3, r31
  bl        -0x31758
  lbz       r4, 0x3D(r30)
  mr        r3, r31
  bl        -0x31764
  lbz       r4, 0x3E(r30)
  mr        r3, r31
  bl        -0x31770
  mr        r3, r30
  mr        r4, r31
  bl        -0x212AAC
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
 * Address:	80446E08
 * Size:	0000AC
 */
void Game::CommonSaveData::Mgr::read( (Stream &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  li        r4, 0
  stw       r30, 0x8(r1)
  mr        r30, r3
  stw       r4, 0xC(r31)
  lwz       r0, 0xC(r31)
  cmpwi     r0, 0x1
  bne-      .loc_0x34
  stw       r4, 0x414(r31)

.loc_0x34:
  mr        r3, r31
  bl        -0x329A4
  stb       r3, 0x38(r30)
  mr        r3, r31
  bl        -0x329B0
  stb       r3, 0x39(r30)
  mr        r3, r31
  bl        -0x329BC
  stb       r3, 0x3A(r30)
  mr        r3, r31
  bl        -0x329C8
  stb       r3, 0x3B(r30)
  mr        r3, r31
  bl        -0x329D4
  stb       r3, 0x3C(r30)
  mr        r3, r31
  bl        -0x329E0
  stb       r3, 0x3D(r30)
  mr        r3, r31
  bl        -0x329EC
  stb       r3, 0x3E(r30)
  mr        r3, r30
  mr        r4, r31
  bl        -0x212AB8
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
 * Address:	80446EB4
 * Size:	000100
 */
void Game::CommonSaveData::Mgr::setup(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  bl        -0x355C28
  cmpwi     r3, 0x1
  beq-      .loc_0x3C
  bge-      .loc_0x8C
  cmpwi     r3, 0
  bge-      .loc_0x30
  b         .loc_0x8C

.loc_0x30:
  mr        r3, r31
  bl        0x1E0
  b         .loc_0x8C

.loc_0x3C:
  lbz       r6, 0x38(r31)
  cmpwi     r6, 0x2
  beq-      .loc_0x64
  bge-      .loc_0x70
  cmpwi     r6, 0
  bge-      .loc_0x58
  b         .loc_0x70

.loc_0x58:
  mr        r3, r31
  bl        0x1EC
  b         .loc_0x8C

.loc_0x64:
  mr        r3, r31
  bl        0x214
  b         .loc_0x8C

.loc_0x70:
  lis       r3, 0x804A
  lis       r4, 0x804A
  subi      r5, r4, 0x512C
  subi      r3, r3, 0x5140
  li        r4, 0x10C
  crclr     6, 0x6
  bl        -0x41C8FC

.loc_0x8C:
  lbz       r4, 0x39(r31)
  lis       r0, 0x4330
  stw       r0, 0x8(r1)
  mr        r3, r31
  lfd       f2, 0x2628(r2)
  stw       r4, 0xC(r1)
  lfs       f0, 0x2620(r2)
  lfd       f1, 0x8(r1)
  fsubs     f1, f1, f2
  fdivs     f1, f1, f0
  bl        0x1FC
  lbz       r4, 0x3A(r31)
  lis       r0, 0x4330
  stw       r0, 0x10(r1)
  mr        r3, r31
  lfd       f2, 0x2628(r2)
  stw       r4, 0x14(r1)
  lfs       f0, 0x2620(r2)
  lfd       f1, 0x10(r1)
  fsubs     f1, f1, f2
  fdivs     f1, f1, f0
  bl        0x2FC
  mr        r3, r31
  bl        0x2C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	80446FB4
 * Size:	000014
 */
void Game::CommonSaveData::Mgr::resetPlayer( (signed char))
{
/*
.loc_0x0:
  stb       r4, 0x20(r3)
  li        r0, 0
  stw       r0, 0x1C(r3)
  stw       r0, 0x18(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80446FC8
 * Size:	000030
 */
void Game::CommonSaveData::Mgr::setDeflicker(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r4, 0x3D(r3)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r4,r0,1,31,31
  bl        .loc_0x30
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x30:
*/
}

/*
 * --INFO--
 * Address:	80446FF8
 * Size:	0000D0
 */
void Game::CommonSaveData::Mgr::setDeflicker( (bool))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  bl        -0x23DF0
  stb       r30, 0x3D(r31)
  mr        r31, r3
  bl        -0x355C5C
  cmplwi    r3, 0x1
  bne-      .loc_0x60
  li        r4, 0
  li        r3, 0x15
  stb       r4, 0x32(r31)
  li        r0, 0x16
  stb       r4, 0x33(r31)
  stb       r3, 0x34(r31)
  stb       r0, 0x35(r31)
  stb       r3, 0x36(r31)
  stb       r4, 0x37(r31)
  stb       r4, 0x38(r31)
  b         .loc_0xB8

.loc_0x60:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x90
  li        r3, 0x7
  li        r0, 0xC
  stb       r3, 0x32(r31)
  stb       r3, 0x33(r31)
  stb       r0, 0x34(r31)
  stb       r0, 0x35(r31)
  stb       r0, 0x36(r31)
  stb       r3, 0x37(r31)
  stb       r3, 0x38(r31)
  b         .loc_0xB8

.loc_0x90:
  li        r0, 0x10
  li        r3, 0
  stb       r0, 0x32(r31)
  li        r0, 0x30
  stb       r3, 0x33(r31)
  stb       r3, 0x34(r31)
  stb       r0, 0x35(r31)
  stb       r3, 0x36(r31)
  stb       r3, 0x37(r31)
  stb       r3, 0x38(r31)

.loc_0xB8:
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
 * Address:	804470C8
 * Size:	000034
 */
void Game::CommonSaveData::Mgr::setSoundModeMono(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stb       r0, 0x38(r3)
  li        r3, 0
  bl        -0x3996D8
  li        r3, 0
  bl        -0x355DC8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	804470FC
 * Size:	000034
 */
void Game::CommonSaveData::Mgr::setSoundModeStereo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stb       r0, 0x38(r3)
  li        r3, 0x1
  bl        -0x39970C
  li        r3, 0x1
  bl        -0x355DFC
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80447130
 * Size:	000034
 */
void Game::CommonSaveData::Mgr::setSoundModeSurround(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x2
  stb       r0, 0x38(r3)
  li        r3, 0x2
  bl        -0x399740
  li        r3, 0x1
  bl        -0x355E30
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80447164
 * Size:	00012C
 */
void Game::CommonSaveData::Mgr::setBgmVolume( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  fmr       f31, f1
  lis       r4, 0x804A
  mr        r29, r3
  subi      r30, r4, 0x5140
  bl        -0x35855C
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r31,r0,1,31,31
  bl        -0x3557A0
  lfs       f0, 0x2630(r2)
  li        r0, 0
  fcmpo     cr0, f31, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x6C
  lfs       f0, 0x2634(r2)
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x6C
  li        r0, 0x1

.loc_0x6C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x88
  addi      r3, r30, 0
  addi      r5, r30, 0x2C
  li        r4, 0x185
  crclr     6, 0x6
  bl        -0x41CBA8

.loc_0x88:
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  beq-      .loc_0xFC
  lfs       f1, 0x2620(r2)
  lfs       f0, 0x2630(r2)
  fmuls     f1, f1, f31
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xB8
  lfs       f0, 0x2638(r2)
  fadds     f0, f0, f1
  b         .loc_0xC0

.loc_0xB8:
  lfs       f0, 0x2638(r2)
  fsubs     f0, f1, f0

.loc_0xC0:
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  stb       r0, 0x39(r29)
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  bne-      .loc_0xF0
  addi      r3, r30, 0x38
  addi      r5, r30, 0x2C
  li        r4, 0x18B
  crclr     6, 0x6
  bl        -0x41CC10

.loc_0xF0:
  fmr       f1, f31
  lwz       r3, -0x67A8(r13)
  bl        -0x10E9A8

.loc_0xFC:
  bl        -0x35581C
  mr        r3, r31
  bl        -0x358608
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	80447290
 * Size:	00012C
 */
void Game::CommonSaveData::Mgr::setSeVolume( (float))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stfd      f31, 0x20(r1)
  psq_st    f31,0x28(r1),0,0
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  fmr       f31, f1
  lis       r4, 0x804A
  mr        r29, r3
  subi      r30, r4, 0x5140
  bl        -0x358688
  neg       r0, r3
  or        r0, r0, r3
  rlwinm    r31,r0,1,31,31
  bl        -0x3558CC
  lfs       f0, 0x2630(r2)
  li        r0, 0
  fcmpo     cr0, f31, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0x6C
  lfs       f0, 0x2634(r2)
  fcmpo     cr0, f31, f0
  cror      2, 0, 0x2
  bne-      .loc_0x6C
  li        r0, 0x1

.loc_0x6C:
  rlwinm.   r0,r0,0,24,31
  bne-      .loc_0x88
  addi      r3, r30, 0
  addi      r5, r30, 0x2C
  li        r4, 0x197
  crclr     6, 0x6
  bl        -0x41CCD4

.loc_0x88:
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  beq-      .loc_0xFC
  lfs       f1, 0x2620(r2)
  lfs       f0, 0x2630(r2)
  fmuls     f1, f1, f31
  fcmpo     cr0, f1, f0
  cror      2, 0x1, 0x2
  bne-      .loc_0xB8
  lfs       f0, 0x2638(r2)
  fadds     f0, f0, f1
  b         .loc_0xC0

.loc_0xB8:
  lfs       f0, 0x2638(r2)
  fsubs     f0, f1, f0

.loc_0xC0:
  fctiwz    f0, f0
  stfd      f0, 0x8(r1)
  lwz       r0, 0xC(r1)
  stb       r0, 0x3A(r29)
  lwz       r0, -0x67A8(r13)
  cmplwi    r0, 0
  bne-      .loc_0xF0
  addi      r3, r30, 0x38
  addi      r5, r30, 0x2C
  li        r4, 0x18B
  crclr     6, 0x6
  bl        -0x41CD3C

.loc_0xF0:
  fmr       f1, f31
  lwz       r3, -0x67A8(r13)
  bl        -0x10EB60

.loc_0xFC:
  bl        -0x355948
  mr        r3, r31
  bl        -0x358734
  psq_l     f31,0x28(r1),0,0
  lwz       r0, 0x34(r1)
  lfd       f31, 0x20(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void Game::CommonSaveData::Mgr::setLanguage(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000010
 */
void Game::CommonSaveData::Mgr::setLanguage( (ELanguage))
{
	// UNUSED FUNCTION
}
