

/*
 * --INFO--
 * Address:	8044FDF0
 * Size:	000118
 */
void Game::THPPlayer::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        -0x432E38
	  lis       r3, 0x804F
	  lis       r4, 0x804A
	  subi      r0, r3, 0x4AD8
	  lis       r3, 0x804F
	  stw       r0, 0x18(r31)
	  li        r7, 0
	  subi      r5, r3, 0x2B34
	  subi      r6, r4, 0x4910
	  stw       r7, 0x28(r31)
	  addi      r4, r5, 0xC
	  li        r0, -0x1
	  addi      r3, r31, 0x5C
	  stw       r7, 0x24(r31)
	  stw       r7, 0x20(r31)
	  stw       r7, 0x1C(r31)
	  stw       r6, 0x2C(r31)
	  stw       r5, 0x0(r31)
	  stw       r4, 0x18(r31)
	  stw       r7, 0x30(r31)
	  stw       r0, 0x34(r31)
	  stw       r7, 0x58(r31)
	  bl        -0x2B644
	  lis       r3, 0x804F
	  lis       r4, 0x804B
	  subi      r7, r3, 0x2B40
	  lis       r3, 0x804F
	  lwz       r9, 0x0(r7)
	  addi      r6, r4, 0xF00
	  lwz       r8, 0x4(r7)
	  subi      r5, r3, 0x2B08
	  lwz       r7, 0x8(r7)
	  li        r4, 0
	  li        r0, 0x1
	  stw       r9, 0x8(r1)
	  li        r3, 0x24
	  stw       r6, 0xC8(r31)
	  stw       r5, 0xC8(r31)
	  stw       r31, 0xCC(r31)
	  stw       r9, 0xD0(r31)
	  stw       r8, 0xD4(r31)
	  stw       r7, 0xD8(r31)
	  stw       r4, 0xDC(r31)
	  stw       r4, 0xE0(r31)
	  stb       r4, 0xE4(r31)
	  stw       r8, 0xC(r1)
	  stw       r7, 0x10(r1)
	  stb       r0, 0xE8(r31)
	  bl        -0x42C020
	  mr.       r0, r3
	  beq-      .loc_0xE8
	  bl        0xA7C
	  mr        r0, r3

	.loc_0xE8:
	  stw       r0, 0x54(r31)
	  addi      r3, r31, 0x18
	  lwz       r4, 0x54(r31)
	  bl        -0x3EADC
	  li        r0, 0
	  mr        r3, r31
	  stb       r0, 0xE8(r31)
	  lwz       r31, 0x1C(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8044FF08
 * Size:	000098
 */
void Game::THPPlayer::__dt(void)
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
	  beq-      .loc_0x7C
	  lis       r3, 0x804F
	  subi      r3, r3, 0x2B34
	  stw       r3, 0x0(r30)
	  addi      r0, r3, 0xC
	  stw       r0, 0x18(r30)
	  bl        -0x14E4
	  bl        -0x1F88
	  addic.    r0, r30, 0x5C
	  beq-      .loc_0x54
	  addic.    r3, r30, 0xB8
	  beq-      .loc_0x54
	  li        r4, 0
	  bl        -0x429788

	.loc_0x54:
	  addi      r3, r30, 0x18
	  li        r4, 0
	  bl        -0x3E9DC
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x432F3C
	  extsh.    r0, r31
	  ble-      .loc_0x7C
	  mr        r3, r30
	  bl        -0x42BECC

	.loc_0x7C:
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
 * Address:	8044FFA0
 * Size:	0000CC
 */
void Game::THPPlayer::load((Game::THPPlayer::EMovieIndex))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  li        r0, 0
	  stw       r31, 0x1C(r1)
	  stw       r30, 0x18(r1)
	  mr.       r30, r4
	  lis       r4, 0x804A
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  subi      r31, r4, 0x4AF0
	  blt-      .loc_0x3C
	  cmpwi     r30, 0xC
	  bge-      .loc_0x3C
	  li        r0, 0x1

	.loc_0x3C:
	  rlwinm.   r0,r0,0,24,31
	  bne-      .loc_0x58
	  addi      r3, r31, 0x1EC
	  addi      r5, r31, 0x204
	  li        r4, 0xE3
	  crclr     6, 0x6
	  bl        -0x4259B4

	.loc_0x58:
	  rlwinm    r0,r30,4,0,27
	  addi      r30, r31, 0x120
	  add       r30, r30, r0
	  mr        r3, r29
	  lwz       r0, 0x0(r30)
	  lwz       r4, 0x4(r30)
	  stw       r0, 0xDC(r29)
	  lbz       r0, 0x8(r30)
	  stw       r4, 0xE0(r29)
	  stb       r0, 0xE4(r29)
	  bl        .loc_0xCC
	  lwz       r0, 0xC(r30)
	  cmpwi     r0, 0xC
	  blt-      .loc_0xA4
	  addi      r3, r31, 0x1EC
	  addi      r5, r31, 0x204
	  li        r4, 0xEB
	  crclr     6, 0x6
	  bl        -0x425A00

	.loc_0xA4:
	  lwz       r4, 0xC(r30)
	  subi      r3, r13, 0x6340
	  bl        0x22454
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0xCC:
	*/
}

/*
 * --INFO--
 * Address:	8045006C
 * Size:	00006C
 */
void Game::THPPlayer::load(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r0, 0x30(r3)
	  li        r3, 0
	  bl        -0x21AC
	  cmpwi     r3, 0
	  bne-      .loc_0x48
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4904
	  li        r4, 0xF7
	  subi      r5, r5, 0x48E0
	  crclr     6, 0x6
	  bl        -0x425A70

	.loc_0x48:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x5C
	  addi      r5, r31, 0xC8
	  bl        -0x2D188
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00003C
 */
void Game::THPPlayer::reset(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	804500D8
 * Size:	000024
 */
void Game::THPPlayer::loadResource(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r4, r3, 0xDC
	  stw       r0, 0x14(r1)
	  bl        .loc_0x24
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x24:
	*/
}

/*
 * --INFO--
 * Address:	804500FC
 * Size:	0001CC
 */
void Game::THPPlayer::loadResource((Game::THPPlayerLoadResourceArg const&))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x450(r1)
	  mflr      r0
	  lis       r5, 0x804A
	  stw       r0, 0x454(r1)
	  stmw      r27, 0x43C(r1)
	  mr        r27, r3
	  mr        r28, r4
	  subi      r31, r5, 0x4AF0
	  lwz       r30, -0x77D4(r13)
	  bl        -0x16C8
	  lwz       r3, 0x54(r27)
	  bl        0xA80
	  lwz       r3, 0x58(r27)
	  bl        -0x42CA00
	  lwz       r3, 0x58(r27)
	  bl        -0x42CB94
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x228
	  li        r5, 0
	  bl        -0x2CDEC
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x240
	  li        r5, 0
	  bl        -0x2CDFC
	  lwz       r3, 0x4(r28)
	  lbz       r0, 0x0(r3)
	  extsb.    r0, r0
	  beq-      .loc_0x118
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x254
	  li        r5, 0
	  bl        -0x2CE1C
	  li        r0, 0
	  lwz       r3, 0x4(r28)
	  stw       r0, 0x8(r1)
	  li        r4, 0
	  li        r5, 0
	  li        r6, 0
	  li        r7, 0
	  li        r8, 0x1
	  li        r9, 0
	  li        r10, 0
	  bl        -0x43101C
	  mr.       r29, r3
	  bne-      .loc_0xCC
	  lwz       r6, 0x4(r28)
	  addi      r3, r31, 0x1EC
	  addi      r5, r31, 0x268
	  li        r4, 0x137
	  crclr     6, 0x6
	  bl        -0x425B84

	.loc_0xCC:
	  mr        r4, r29
	  addi      r3, r1, 0x10
	  li        r5, -0x1
	  bl        -0x3A8DC
	  li        r0, 0x1
	  cmpwi     r0, 0x1
	  stw       r0, 0x1C(r1)
	  bne-      .loc_0xF4
	  li        r0, 0
	  stw       r0, 0x424(r1)

	.loc_0xF4:
	  lwz       r3, 0x54(r27)
	  addi      r4, r1, 0x10
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x254
	  bl        -0x2CEAC

	.loc_0x118:
	  lwz       r0, 0x0(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x16C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x28C
	  li        r5, 0
	  bl        -0x2CED0
	  lwz       r3, 0x0(r28)
	  li        r4, 0
	  bl        -0x224C
	  cmpwi     r3, 0
	  bne-      .loc_0x160
	  lwz       r6, 0x0(r28)
	  addi      r3, r31, 0x1EC
	  addi      r5, r31, 0x29C
	  li        r4, 0x145
	  crclr     6, 0x6
	  bl        -0x425C18

	.loc_0x160:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x28C
	  bl        -0x2CF00

	.loc_0x16C:
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x240
	  bl        -0x2CF0C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x2BC
	  li        r5, 0
	  bl        -0x2CF24
	  mr        r3, r27
	  bl        .loc_0x1CC
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x2BC
	  bl        -0x2CF30
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x228
	  bl        -0x2CF3C
	  mr        r3, r30
	  bl        -0x42CD04
	  mr        r3, r27
	  bl        0x274
	  lmw       r27, 0x43C(r1)
	  lwz       r0, 0x454(r1)
	  mtlr      r0
	  addi      r1, r1, 0x450
	  blr

	.loc_0x1CC:
	*/
}

/*
 * --INFO--
 * Address:	804502C8
 * Size:	0000FC
 */
void Game::THPPlayer::prepare(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r4, 0x804A
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  subi      r31, r4, 0x4AF0
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  stw       r28, 0x10(r1)
	  mr        r28, r3
	  bl        -0x2D0CC
	  addi      r3, r28, 0x38
	  li        r29, 0
	  bl        -0x125C
	  addi      r3, r28, 0x44
	  bl        -0x121C
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x2D0
	  li        r5, 0
	  bl        -0x2CFB8
	  bl        -0x1FA4
	  li        r4, 0x20
	  bl        -0x42C328
	  mr.       r30, r3
	  bne-      .loc_0x78
	  addi      r3, r31, 0x1EC
	  addi      r5, r31, 0x2E0
	  li        r4, 0x16F
	  crclr     6, 0x6
	  bl        -0x362BD0

	.loc_0x78:
	  mr        r3, r30
	  bl        -0x1F20
	  lwz       r3, -0x6514(r13)
	  addi      r4, r31, 0x2D0
	  bl        -0x2CFEC
	  lwz       r0, 0x50(r28)
	  cmplwi    r0, 0x1
	  ble-      .loc_0xB0
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x60(r3)
	  lbz       r0, 0x38(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0xB0
	  li        r29, 0x1

	.loc_0xB0:
	  mr        r5, r29
	  li        r3, 0
	  li        r4, 0
	  bl        -0x1D20
	  cmpwi     r3, 0
	  bne-      .loc_0xDC
	  addi      r3, r31, 0x1EC
	  addi      r5, r31, 0x2FC
	  li        r4, 0x18D
	  crclr     6, 0x6
	  bl        -0x425D60

	.loc_0xDC:
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
 * Address:	804503C4
 * Size:	0000C0
 */
void Game::THPPlayer::init((JKRHeap*))
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
	  lwz       r0, 0x58(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4904
	  li        r4, 0x197
	  subi      r5, r5, 0x48EC
	  crclr     6, 0x6
	  bl        -0x425DC8

	.loc_0x48:
	  cmplwi    r30, 0
	  lwz       r31, -0x77D4(r13)
	  bne-      .loc_0x58
	  mr        r30, r31

	.loc_0x58:
	  mr        r3, r30
	  bl        -0x42CE7C
	  mr        r4, r30
	  lis       r3, 0x30
	  li        r5, 0x1
	  bl        -0x42B6C0
	  stw       r3, 0x58(r29)
	  lwz       r0, 0x58(r29)
	  cmplwi    r0, 0
	  bne-      .loc_0x9C
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x4904
	  li        r4, 0x1A2
	  subi      r5, r5, 0x48EC
	  crclr     6, 0x6
	  bl        -0x425E1C

	.loc_0x9C:
	  mr        r3, r31
	  bl        -0x42CEC0
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
 * Address:	80450484
 * Size:	0000A0
 */
void Game::THPPlayer::play(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  bl        0x1B3D8
	  lwz       r0, 0x30(r31)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x88
	  bl        -0x1AB0
	  lwz       r0, -0x67A8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x50
	  lis       r3, 0x804A
	  lis       r5, 0x804A
	  subi      r3, r3, 0x47E0
	  li        r4, 0x18B
	  subi      r5, r5, 0x48EC
	  crclr     6, 0x6
	  bl        -0x425E90

	.loc_0x50:
	  lwz       r3, -0x67A8(r13)
	  lfs       f1, 0x27B4(r2)
	  lfs       f0, 0x24(r3)
	  fmuls     f0, f1, f0
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x6C
	  fmr       f0, f1

	.loc_0x6C:
	  fctiwz    f0, f0
	  li        r4, 0
	  stfd      f0, 0x8(r1)
	  lwz       r3, 0xC(r1)
	  bl        -0x109C
	  li        r3, 0x1
	  b         .loc_0x8C

	.loc_0x88:
	  li        r3, 0

	.loc_0x8C:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450524
 * Size:	000038
 */
void Game::THPPlayer::pause(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, 0x30(r3)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x24
	  bl        -0x1A14
	  li        r3, 0x1
	  b         .loc_0x28

	.loc_0x24:
	  li        r3, 0

	.loc_0x28:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8045055C
 * Size:	000028
 */
void Game::THPPlayer::stop(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  bl        -0x1B10
	  bl        -0x224C
	  bl        -0x25B8
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450584
 * Size:	000094
 */
void Game::THPPlayer::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r6, 0x30(r3)
	  cmpwi     r6, 0x1
	  beq-      .loc_0x3C
	  bge-      .loc_0x30
	  cmpwi     r6, 0
	  bge-      .loc_0x80
	  b         .loc_0x64

	.loc_0x30:
	  cmpwi     r6, 0x3
	  bge-      .loc_0x64
	  b         .loc_0x54

	.loc_0x3C:
	  bl        0x278
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x80
	  li        r0, 0x2
	  stw       r0, 0x30(r31)
	  b         .loc_0x80

	.loc_0x54:
	  lwz       r3, 0x54(r31)
	  lwz       r4, 0x34(r31)
	  bl        0x698
	  b         .loc_0x80

	.loc_0x64:
	  lis       r3, 0x804A
	  lis       r4, 0x804A
	  subi      r5, r4, 0x47D0
	  subi      r3, r3, 0x4904
	  li        r4, 0x1F8
	  crclr     6, 0x6
	  bl        -0x425FC0

	.loc_0x80:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	80450618
 * Size:	0000DC
 */
void Game::THPPlayer::draw((Graphics&))
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
	  lbz       r0, 0xE4(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x30
	  b         .loc_0x70

	.loc_0x30:
	  bl        -0x2D424
	  lhz       r0, 0x4(r3)
	  mr        r3, r29
	  lwz       r7, 0x38(r29)
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r6, 0x14
	  sub       r5, r0, r7
	  lwz       r8, 0x3C(r29)
	  rlwinm    r0,r5,1,31,31
	  lwz       r12, 0x24(r12)
	  add       r0, r0, r5
	  srawi     r5, r0, 0x1
	  mtctr     r12
	  bctrl
	  b         .loc_0xC0

	.loc_0x70:
	  bl        -0x2D464
	  lhz       r31, 0x6(r3)
	  bl        -0x2D46C
	  lhz       r0, 0x4(r3)
	  mr        r3, r29
	  lwz       r7, 0x38(r29)
	  mr        r4, r30
	  lwz       r8, 0x3C(r29)
	  sub       r5, r0, r7
	  lwz       r12, 0x0(r29)
	  rlwinm    r0,r5,1,31,31
	  sub       r6, r31, r8
	  add       r5, r0, r5
	  lwz       r12, 0x24(r12)
	  rlwinm    r0,r6,1,31,31
	  srawi     r5, r5, 0x1
	  add       r0, r0, r6
	  srawi     r6, r0, 0x1
	  mtctr     r12
	  bctrl

	.loc_0xC0:
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
 * Address:	804506F4
 * Size:	0000BC
 */
void Game::THPPlayer::draw((Graphics&, long, long, float))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x40(r1)
	  mflr      r0
	  stw       r0, 0x44(r1)
	  stfd      f31, 0x30(r1)
	  psq_st    f31,0x38(r1),0,0
	  stmw      r27, 0x1C(r1)
	  mr        r27, r3
	  lis       r0, 0x4330
	  lwz       r3, 0x3C(r3)
	  fmr       f31, f1
	  stw       r0, 0x8(r1)
	  mr        r28, r4
	  lfd       f1, 0x27B8(r2)
	  mr        r29, r5
	  stw       r3, 0xC(r1)
	  mr        r30, r6
	  lfd       f0, 0x8(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f31, f0
	  bl        -0x38EBF4
	  lwz       r4, 0x38(r27)
	  lis       r0, 0x4330
	  stw       r0, 0x10(r1)
	  mr        r31, r3
	  lfd       f1, 0x27B8(r2)
	  stw       r4, 0x14(r1)
	  lfd       f0, 0x10(r1)
	  fsubs     f0, f0, f1
	  fmuls     f1, f31, f0
	  bl        -0x38EC1C
	  lwz       r12, 0x0(r27)
	  mr        r7, r3
	  mr        r3, r27
	  mr        r4, r28
	  lwz       r12, 0x24(r12)
	  mr        r5, r29
	  mr        r6, r30
	  mr        r8, r31
	  mtctr     r12
	  bctrl
	  psq_l     f31,0x38(r1),0,0
	  lfd       f31, 0x30(r1)
	  lmw       r27, 0x1C(r1)
	  lwz       r0, 0x44(r1)
	  mtlr      r0
	  addi      r1, r1, 0x40
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804507B0
 * Size:	000088
 */
void Game::THPPlayer::draw((Graphics&, long, long, unsigned long,
                            unsigned long))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stmw      r26, 0x8(r1)
	  mr        r26, r3
	  mr        r27, r4
	  mr        r28, r5
	  mr        r29, r6
	  mr        r30, r7
	  mr        r31, r8
	  bl        .loc_0x88
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x74
	  addi      r3, r27, 0xBC
	  lwz       r12, 0xBC(r27)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  bl        -0x2D5D4
	  mr        r4, r28
	  mr        r5, r29
	  mr        r6, r30
	  mr        r7, r31
	  bl        -0x1844
	  stw       r3, 0x34(r26)
	  bl        -0x1670
	  lwz       r3, 0x54(r26)
	  mr        r4, r27
	  bl        0x5EC

	.loc_0x74:
	  lmw       r26, 0x8(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr

	.loc_0x88:
	*/
}

/*
 * --INFO--
 * Address:	80450838
 * Size:	00005C
 */
void Game::THPPlayer::isFinishLoading(void)
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
	  addi      r4, r30, 0x5C
	  lwz       r3, -0x6514(r13)
	  bl        -0x2D288
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C
	  lwz       r0, 0x30(r30)
	  cmpwi     r0, 0
	  bne-      .loc_0x40

	.loc_0x3C:
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
 * Address:	80450894
 * Size:	00001C
 */
void Game::THPPlayer::isFinishPlaying(void)
{
	/*
	.loc_0x0:
	  lis       r3, 0x8051
	  addi      r3, r3, 0x4490
	  lbz       r0, 0xA4(r3)
	  subfic    r0, r0, 0x3
	  cntlzw    r0, r0
	  rlwinm    r3,r0,27,5,31
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804508B0
 * Size:	000030
 */
void Delegate<Game::THPPlayer>::invoke()
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  stw       r0, 0x14(r1)
	  addi      r12, r4, 0x8
	  lwz       r3, 0x4(r3)
	  bl        -0x38EDA4
	  nop
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	804508E0
 * Size:	000008
 */
void @24 @Game::THPPlayer::__dt(void)
{
	/*
	.loc_0x0:
	  subi      r3, r3, 0x18
	  b         -0x9DC
	*/
}
