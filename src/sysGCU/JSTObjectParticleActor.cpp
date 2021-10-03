

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
 * Address:	804544D4
 * Size:	000168
 */
void Game::P2JST::ObjectParticleActor::__ct( (char const *, Game::MoviePlayer *, Game::Creature *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  mr        r30, r6
  stw       r29, 0x14(r1)
  mr        r29, r4
  bl        -0x25B98
  lis       r4, 0x804A
  lis       r3, 0x804F
  subi      r4, r4, 0x1D84
  li        r0, 0
  stw       r4, 0x70(r31)
  subi      r4, r3, 0x2824
  addi      r5, r4, 0x8C
  mr        r3, r31
  stw       r4, 0x0(r31)
  addi      r4, r4, 0xCC
  stw       r5, 0x4(r31)
  stw       r4, 0x70(r31)
  stb       r0, 0xB8(r31)
  stb       r0, 0xB9(r31)
  stw       r30, 0x80(r31)
  lwz       r12, 0x0(r31)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  mr        r3, r29
  stb       r0, 0xB9(r31)
  bl        -0x389C44
  subic.    r0, r3, 0x1
  add       r30, r3, r29
  mtctr     r0
  subi      r30, r30, 0x1
  ble-      .loc_0xB4

.loc_0x98:
  lbz       r0, 0x0(r30)
  cmpwi     r0, 0x40
  bne-      .loc_0xAC
  addi      r30, r30, 0x1
  b         .loc_0xB4

.loc_0xAC:
  subi      r30, r30, 0x1
  bdnz+     .loc_0x98

.loc_0xB4:
  lis       r3, 0x804A
  mr        r4, r30
  subi      r3, r3, 0x4588
  bl        -0x389ED4
  cmpwi     r3, 0
  bne-      .loc_0xDC
  lbz       r0, 0xB9(r31)
  ori       r0, r0, 0xE
  stb       r0, 0xB9(r31)
  b         .loc_0x148

.loc_0xDC:
  mr        r4, r30
  addi      r3, r2, 0x2838
  bl        -0x389EF8
  cmpwi     r3, 0
  bne-      .loc_0x100
  lbz       r0, 0xB9(r31)
  ori       r0, r0, 0xD
  stb       r0, 0xB9(r31)
  b         .loc_0x148

.loc_0x100:
  lis       r3, 0x804A
  mr        r4, r30
  subi      r3, r3, 0x457C
  bl        -0x389F20
  cmpwi     r3, 0
  bne-      .loc_0x128
  lbz       r0, 0xB9(r31)
  ori       r0, r0, 0xB
  stb       r0, 0xB9(r31)
  b         .loc_0x148

.loc_0x128:
  mr        r4, r30
  addi      r3, r2, 0x2840
  bl        -0x389F44
  cmpwi     r3, 0
  bne-      .loc_0x148
  lbz       r0, 0xB9(r31)
  ori       r0, r0, 0x7
  stb       r0, 0xB9(r31)

.loc_0x148:
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
 * Address:	8045463C
 * Size:	000028
 */
void Game::P2JST::ObjectParticleActor::reset(void)
{
/*
.loc_0x0:
  li        r4, 0
  li        r0, -0x1
  stw       r4, 0x7C(r3)
  lfs       f0, 0x2848(r2)
  stw       r4, 0x74(r3)
  sth       r0, 0x84(r3)
  stfs      f0, 0xBC(r3)
  stfs      f0, 0xC0(r3)
  stfs      f0, 0xC4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80454664
 * Size:	000020
 */
void Game::P2JST::ObjectParticleActor::stop(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x5A4
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80454684
 * Size:	0000C0
 */
void Game::P2JST::ObjectParticleActor::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lbz       r0, 0xB9(r3)
  cmplwi    r0, 0
  beq-      .loc_0x70
  lwz       r3, -0x6C18(r13)
  cmplwi    r3, 0
  beq-      .loc_0x70
  lwz       r3, 0x58(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl     
  cmplwi    r3, 0
  beq-      .loc_0x70
  lwz       r0, 0x48(r3)
  li        r3, 0x1
  lbz       r4, 0xB9(r31)
  slw       r0, r3, r0
  rlwinm    r0,r0,0,24,31
  and.      r0, r4, r0
  beq-      .loc_0x70
  li        r0, 0
  stb       r0, 0xB8(r31)
  b         .loc_0xAC

.loc_0x70:
  lbz       r0, 0xB8(r31)
  rlwinm.   r0,r0,0,31,31
  beq-      .loc_0x90
  lwz       r0, 0x7C(r31)
  cmplwi    r0, 0
  bne-      .loc_0x90
  mr        r3, r31
  bl        0x220

.loc_0x90:
  lbz       r0, 0xB8(r31)
  rlwinm.   r0,r0,0,30,30
  beq-      .loc_0xA4
  mr        r3, r31
  bl        0x4F0

.loc_0xA4:
  li        r0, 0
  stb       r0, 0xB8(r31)

.loc_0xAC:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80454744
 * Size:	00003C
 */
void Game::P2JST::ObjectParticleActor::JSGSetShape( (unsigned long))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  rlwinm    r5,r4,0,16,31
  stw       r0, 0x14(r1)
  rlwinm    r0,r4,8,24,31
  stw       r5, 0x74(r3)
  stb       r0, 0x78(r3)
  lbz       r0, 0xB8(r3)
  ori       r0, r0, 0x1
  stb       r0, 0xB8(r3)
  bl        0x4A8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80454780
 * Size:	000178
 */
void Game::P2JST::ObjectParticleActor::parseUserData_( (unsigned long, void const *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  addi      r4, r1, 0xC
  stw       r31, 0x2C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  stw       r28, 0x20(r1)
  stw       r5, 0x8(r1)
  bl        -0x44BDAC
  lbz       r3, 0xC(r1)
  cmplwi    r3, 0
  beq-      .loc_0x158
  lwz       r4, 0x18(r1)
  li        r0, 0
  cmplwi    r4, 0
  beq-      .loc_0x58
  cmplwi    r3, 0x60
  bne-      .loc_0x58
  li        r0, 0x1

.loc_0x58:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0x158
  li        r0, -0x1
  lis       r3, 0x804A
  sth       r0, 0x84(r31)
  mr        r29, r4
  subi      r30, r3, 0x4570
  li        r28, 0
  b         .loc_0x14C

.loc_0x7C:
  mr        r3, r30
  mr        r4, r28
  mr        r5, r29
  crclr     6, 0x6
  bl        -0x367120
  cmplwi    r28, 0
  bne-      .loc_0xD4
  mr        r3, r29
  addi      r4, r2, 0x284C
  bl        -0x38A160
  cmpwi     r3, 0
  bne-      .loc_0xBC
  lbz       r0, 0xB8(r31)
  ori       r0, r0, 0x2
  stb       r0, 0xB8(r31)
  b         .loc_0x138

.loc_0xBC:
  lwz       r3, 0x8(r31)
  mr        r4, r29
  lwz       r3, 0x1CC(r3)
  bl        -0x23490
  stw       r3, 0x80(r31)
  b         .loc_0x138

.loc_0xD4:
  cmplwi    r28, 0x1
  bne-      .loc_0x138
  mr        r3, r29
  addi      r4, r2, 0x2854
  bl        -0x38A1A4
  cmpwi     r3, 0
  bne-      .loc_0xFC
  li        r0, -0x2
  sth       r0, 0x84(r31)
  b         .loc_0x138

.loc_0xFC:
  lwz       r3, 0x80(r31)
  cmplwi    r3, 0
  beq-      .loc_0x138
  lwz       r3, 0x174(r3)
  cmplwi    r3, 0
  beq-      .loc_0x138
  mr        r4, r29
  bl        -0x158B4
  cmplwi    r3, 0
  beq-      .loc_0x130
  lhz       r0, 0x38(r3)
  sth       r0, 0x84(r31)
  b         .loc_0x138

.loc_0x130:
  li        r0, -0x1
  sth       r0, 0x84(r31)

.loc_0x138:
  mr        r3, r29
  li        r4, 0
  addi      r28, r28, 0x1
  bl        -0x38A274
  addi      r29, r3, 0x1

.loc_0x14C:
  lwz       r0, 0x14(r1)
  cmplw     r28, r0
  blt+      .loc_0x7C

.loc_0x158:
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
 * Address:	804548F8
 * Size:	00001C
 */
void Game::P2JST::ObjectParticleActor::JSGSetTranslation( (Vec const &))
{
/*
.loc_0x0:
  lfs       f0, 0x0(r4)
  lfs       f1, 0x4(r4)
  stfs      f0, 0xBC(r3)
  lfs       f0, 0x8(r4)
  stfs      f1, 0xC0(r3)
  stfs      f0, 0xC4(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80454914
 * Size:	00001C
 */
void Game::P2JST::ObjectParticleActor::JSGGetTranslation( const(Vec *))
{
/*
.loc_0x0:
  lfs       f0, 0xBC(r3)
  lfs       f1, 0xC0(r3)
  stfs      f0, 0x0(r4)
  lfs       f0, 0xC4(r3)
  stfs      f1, 0x4(r4)
  stfs      f0, 0x8(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	80454930
 * Size:	0001F0
 */
void Game::P2JST::ObjectParticleActor::emit(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  stw       r31, 0x3C(r1)
  mr        r31, r3
  lwz       r0, 0x7C(r3)
  cmplwi    r0, 0
  bne-      .loc_0x1DC
  lfs       f1, 0x2848(r2)
  stfs      f1, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f1, 0x34(r1)
  lwz       r4, 0x80(r31)
  cmplwi    r4, 0
  beq-      .loc_0x130
  lwz       r12, 0x0(r4)
  addi      r3, r1, 0x8
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x2C(r1)
  stfs      f1, 0x30(r1)
  stfs      f0, 0x34(r1)
  lwz       r5, 0x80(r31)
  lwz       r4, 0x174(r5)
  cmplwi    r4, 0
  beq-      .loc_0xB8
  lha       r3, 0x84(r31)
  extsh.    r0, r3
  blt-      .loc_0xB8
  mulli     r0, r3, 0x3C
  lwz       r3, 0x10(r4)
  add       r3, r3, r0
  bl        -0x2B120
  addi      r4, r31, 0x88
  bl        -0x36A6FC
  lfs       f0, 0x94(r31)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0xA4(r31)
  stfs      f0, 0x30(r1)
  lfs       f0, 0xB4(r31)
  stfs      f0, 0x34(r1)
  b         .loc_0x178

.loc_0xB8:
  lha       r0, 0x84(r31)
  cmpwi     r0, -0x1
  bne-      .loc_0xEC
  addi      r3, r5, 0x138
  addi      r4, r31, 0x88
  bl        -0x36A730
  lfs       f0, 0x94(r31)
  stfs      f0, 0x2C(r1)
  lfs       f0, 0xA4(r31)
  stfs      f0, 0x30(r1)
  lfs       f0, 0xB4(r31)
  stfs      f0, 0x34(r1)
  b         .loc_0x178

.loc_0xEC:
  lfs       f0, 0xBC(r31)
  addi      r3, r31, 0x88
  lwz       r6, -0x64AC(r13)
  addi      r4, r1, 0x2C
  stfs      f0, 0x2C(r1)
  addi      r5, r1, 0x20
  lfs       f0, 0x2848(r2)
  lfs       f1, 0xC0(r31)
  stfs      f1, 0x30(r1)
  lfs       f1, 0xC4(r31)
  stfs      f1, 0x34(r1)
  lfs       f1, 0x1C8(r6)
  stfs      f0, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  bl        -0x2C1D0
  b         .loc_0x178

.loc_0x130:
  lha       r0, 0x84(r31)
  cmpwi     r0, -0x2
  beq-      .loc_0x1DC
  lfs       f0, 0xBC(r31)
  addi      r3, r31, 0x88
  lwz       r6, -0x64AC(r13)
  addi      r4, r1, 0x2C
  stfs      f0, 0x2C(r1)
  addi      r5, r1, 0x14
  lfs       f0, 0xC0(r31)
  stfs      f0, 0x30(r1)
  lfs       f0, 0xC4(r31)
  stfs      f0, 0x34(r1)
  lfs       f0, 0x1C8(r6)
  stfs      f1, 0x14(r1)
  stfs      f0, 0x18(r1)
  stfs      f1, 0x1C(r1)
  bl        -0x2C21C

.loc_0x178:
  lwz       r0, 0x74(r31)
  addi      r5, r1, 0x2C
  lwz       r3, -0x65E8(r13)
  li        r7, 0x7
  lbz       r6, 0x78(r31)
  rlwinm    r4,r0,0,16,31
  bl        -0x99144
  stw       r3, 0x7C(r31)
  lwz       r3, 0x7C(r31)
  cmplwi    r3, 0
  beq-      .loc_0x1DC
  lwz       r0, 0xF4(r3)
  cmplwi    r31, 0
  mr        r5, r31
  ori       r0, r0, 0x40
  stw       r0, 0xF4(r3)
  beq-      .loc_0x1C0
  addi      r5, r31, 0x70

.loc_0x1C0:
  lwz       r4, 0x7C(r31)
  addi      r3, r31, 0x88
  stw       r5, 0xEC(r4)
  lwz       r5, 0x7C(r31)
  addi      r4, r5, 0x68
  addi      r5, r5, 0xA4
  bl        -0x3C0DEC

.loc_0x1DC:
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80454B20
 * Size:	0000F4
 */
void Game::P2JST::ObjectParticleActor::executeAfter( (JPABaseEmitter *))
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
  lwz       r3, 0x80(r3)
  cmplwi    r3, 0
  beq-      .loc_0xA4
  lwz       r5, 0x174(r3)
  cmplwi    r5, 0
  beq-      .loc_0x5C
  lha       r4, 0x84(r30)
  extsh.    r0, r4
  blt-      .loc_0x5C
  mulli     r0, r4, 0x3C
  lwz       r3, 0x10(r5)
  add       r3, r3, r0
  bl        -0x2B2CC
  addi      r4, r30, 0x88
  bl        -0x36A8A8
  b         .loc_0xCC

.loc_0x5C:
  lha       r0, 0x84(r30)
  cmpwi     r0, -0x1
  bne-      .loc_0x78
  addi      r3, r3, 0x138
  addi      r4, r30, 0x88
  bl        -0x36A8C4
  b         .loc_0xCC

.loc_0x78:
  lwz       r5, -0x64AC(r13)
  addi      r3, r30, 0x88
  lfs       f0, 0x2848(r2)
  addi      r4, r30, 0xBC
  lfs       f1, 0x1C8(r5)
  addi      r5, r1, 0x14
  stfs      f0, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  bl        -0x2C334
  b         .loc_0xCC

.loc_0xA4:
  lwz       r5, -0x64AC(r13)
  addi      r3, r30, 0x88
  lfs       f0, 0x2848(r2)
  addi      r4, r30, 0xBC
  lfs       f1, 0x1C8(r5)
  addi      r5, r1, 0x8
  stfs      f0, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  bl        -0x2C360

.loc_0xCC:
  addi      r3, r30, 0x88
  addi      r4, r31, 0x68
  addi      r5, r31, 0xA4
  bl        -0x3C0EDC
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
 * Address:	80454C14
 * Size:	000044
 */
void Game::P2JST::ObjectParticleActor::killEmitter(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, 0x7C(r3)
  cmplwi    r4, 0
  beq-      .loc_0x30
  lwz       r3, -0x65E8(r13)
  bl        -0x9918C
  li        r0, 0
  stw       r0, 0x7C(r31)

.loc_0x30:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80454C58
 * Size:	000080
 */
void Game::P2JST::ObjectParticleActor::__dt(void)
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
  beq-      .loc_0x64
  lis       r4, 0x804F
  addi      r3, r30, 0x70
  subi      r6, r4, 0x2824
  li        r4, 0
  stw       r6, 0x0(r30)
  addi      r5, r6, 0x8C
  addi      r0, r6, 0xCC
  stw       r5, 0x4(r30)
  stw       r0, 0x70(r30)
  bl        -0x3C5000
  mr        r3, r30
  li        r4, 0
  bl        -0x26278
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x430C04

.loc_0x64:
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
 * Address:	80454CD8
 * Size:	000028
 */
void __sinit_JSTObjectParticleActor_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804F
  stw       r0, -0x6390(r13)
  stfsu     f0, -0x2830(r3)
  stfs      f0, -0x638C(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80454D00
 * Size:	000008
 */
void @4@Game::P2JST::ObjectParticleActor::parseUserData_( (unsigned long, void const *))
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x584
*/
}

/*
 * --INFO--
 * Address:	80454D08
 * Size:	000008
 */
void @4@Game::P2JST::ObjectParticleActor::stop(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x6A8
*/
}

/*
 * --INFO--
 * Address:	80454D10
 * Size:	000008
 */
void @4@Game::P2JST::ObjectParticleActor::update(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x690
*/
}

/*
 * --INFO--
 * Address:	80454D18
 * Size:	000008
 */
void @4@Game::P2JST::ObjectParticleActor::reset(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x4
  b         -0x6E0
*/
}

/*
 * --INFO--
 * Address:	80454D20
 * Size:	000008
 */
void @112@Game::P2JST::ObjectParticleActor::executeAfter( (JPABaseEmitter *))
{
/*
.loc_0x0:
  subi      r3, r3, 0x70
  b         -0x204
*/
}

/*
 * --INFO--
 * Address:	80454D28
 * Size:	000008
 */
void @112@Game::P2JST::ObjectParticleActor::__dt(void)
{
/*
.loc_0x0:
  subi      r3, r3, 0x70
  b         -0xD4
*/
}
