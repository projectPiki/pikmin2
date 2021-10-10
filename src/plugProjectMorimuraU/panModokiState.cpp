

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
 * Address:	8034C93C
 * Size:	0001BC
 */
void Game::PanModokiBase::FSM::init((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r4, 0xB
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x21C0F0
	  li        r3, 0x10
	  bl        -0x328AB8
	  mr.       r4, r3
	  beq-      .loc_0x38
	  li        r4, 0
	  bl        .loc_0x1BC
	  mr        r4, r3

	.loc_0x38:
	  mr        r3, r31
	  bl        -0x21C070
	  li        r3, 0x10
	  bl        -0x328ADC
	  mr.       r4, r3
	  beq-      .loc_0x5C
	  li        r4, 0x1
	  bl        0x28C
	  mr        r4, r3

	.loc_0x5C:
	  mr        r3, r31
	  bl        -0x21C094
	  li        r3, 0x14
	  bl        -0x328B00
	  mr.       r4, r3
	  beq-      .loc_0x80
	  li        r4, 0x2
	  bl        0x420
	  mr        r4, r3

	.loc_0x80:
	  mr        r3, r31
	  bl        -0x21C0B8
	  li        r3, 0x10
	  bl        -0x328B24
	  mr.       r4, r3
	  beq-      .loc_0xA4
	  li        r4, 0x3
	  bl        0xA0C
	  mr        r4, r3

	.loc_0xA4:
	  mr        r3, r31
	  bl        -0x21C0DC
	  li        r3, 0x10
	  bl        -0x328B48
	  mr.       r4, r3
	  beq-      .loc_0xC8
	  li        r4, 0x4
	  bl        0xFC4
	  mr        r4, r3

	.loc_0xC8:
	  mr        r3, r31
	  bl        -0x21C100
	  li        r3, 0x14
	  bl        -0x328B6C
	  mr.       r4, r3
	  beq-      .loc_0xEC
	  li        r4, 0x5
	  bl        0x10B4
	  mr        r4, r3

	.loc_0xEC:
	  mr        r3, r31
	  bl        -0x21C124
	  li        r3, 0x10
	  bl        -0x328B90
	  mr.       r4, r3
	  beq-      .loc_0x110
	  li        r4, 0x6
	  bl        0x1250
	  mr        r4, r3

	.loc_0x110:
	  mr        r3, r31
	  bl        -0x21C148
	  li        r3, 0x14
	  bl        -0x328BB4
	  mr.       r4, r3
	  beq-      .loc_0x134
	  li        r4, 0x7
	  bl        0x13F4
	  mr        r4, r3

	.loc_0x134:
	  mr        r3, r31
	  bl        -0x21C16C
	  li        r3, 0x14
	  bl        -0x328BD8
	  mr.       r4, r3
	  beq-      .loc_0x158
	  li        r4, 0x8
	  bl        0x1570
	  mr        r4, r3

	.loc_0x158:
	  mr        r3, r31
	  bl        -0x21C190
	  li        r3, 0x10
	  bl        -0x328BFC
	  mr.       r4, r3
	  beq-      .loc_0x17C
	  li        r4, 0x9
	  bl        0x1A4C
	  mr        r4, r3

	.loc_0x17C:
	  mr        r3, r31
	  bl        -0x21C1B4
	  li        r3, 0x1C
	  bl        -0x328C20
	  mr.       r4, r3
	  beq-      .loc_0x1A0
	  li        r4, 0xA
	  bl        0x1ADC
	  mr        r4, r3

	.loc_0x1A0:
	  mr        r3, r31
	  bl        -0x21C1D8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x1BC:
	*/
}

/*
 * --INFO--
 * Address:	8034CAF8
 * Size:	00003C
 */
void Game::PanModokiBase::StateDead::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3AF0
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x70
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034CB34
 * Size:	000090
 */
void Game::PanModokiBase::StateDead::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        0x50B8
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  mr        r3, r31
	  bl        -0x1AD738
	  li        r0, 0
	  stw       r0, 0x230(r31)

	.loc_0x34:
	  mr        r3, r31
	  li        r4, 0
	  li        r5, 0
	  bl        -0x247B70
	  lfs       f1, -0x63C8(r2)
	  mr        r3, r31
	  bl        -0x2457F0
	  mr        r3, r31
	  bl        -0x247468
	  lfs       f0, 0x78(r2)
	  mr        r3, r31
	  stfs      f0, 0x1C8(r31)
	  stfs      f0, 0x1CC(r31)
	  stfs      f0, 0x1D0(r31)
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x653C
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034CBC4
 * Size:	000058
 */
void Game::PanModokiBase::StateDead::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x48
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x34
	  mr        r3, r4
	  bl        0x69B8
	  b         .loc_0x48

	.loc_0x34:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x48
	  mr        r3, r4
	  li        r4, 0
	  bl        -0x211B18

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034CC1C
 * Size:	00003C
 */
void Game::PanModokiBase::StateWalk::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3B14
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x7C
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034CC58
 * Size:	000070
 */
void Game::PanModokiBase::StateWalk::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  mr        r3, r31
	  bl        -0x245928
	  cmpwi     r3, 0x1
	  beq-      .loc_0x4C
	  mr        r3, r31
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x247C84
	  lwz       r4, 0xC0(r31)
	  mr        r3, r31
	  lfs       f1, -0x63C8(r2)
	  lfs       f0, 0x844(r4)
	  fmuls     f1, f1, f0
	  bl        -0x245910

	.loc_0x4C:
	  li        r3, -0x1
	  li        r0, 0
	  stw       r3, 0x344(r31)
	  stw       r0, 0x230(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034CCC8
 * Size:	00010C
 */
void Game::PanModokiBase::StateWalk::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lfs       f0, 0x78(r2)
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF4

	.loc_0x4C:
	  lfs       f1, 0x32C(r31)
	  mr        r3, r31
	  bl        0x49AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x6C
	  mr        r3, r31
	  li        r4, 0
	  bl        0x3FA4

	.loc_0x6C:
	  lwz       r0, 0x344(r31)
	  cmpwi     r0, 0
	  bge-      .loc_0x8C
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x304(r12)
	  mtctr     r12
	  bctrl

	.loc_0x8C:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xF4
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xF4
	  lwz       r5, 0x344(r31)
	  cmpwi     r5, 0
	  bge-      .loc_0xD8
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF4

	.loc_0xD8:
	  lwz       r12, 0x0(r30)
	  mr        r3, r30
	  mr        r4, r31
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xF4:
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
 * Address:	8034CDD4
 * Size:	00003C
 */
void Game::PanModokiBase::StateBack::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3B38
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x84
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034CE10
 * Size:	000104
 */
void Game::PanModokiBase::StateBack::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x30(r1)
	  mflr      r0
	  stw       r0, 0x34(r1)
	  stw       r31, 0x2C(r1)
	  stw       r30, 0x28(r1)
	  mr        r30, r4
	  stw       r29, 0x24(r1)
	  mr        r29, r3
	  mr        r3, r30
	  bl        -0x245AEC
	  mr        r31, r3
	  cmpwi     r31, 0x2
	  beq-      .loc_0x44
	  mr        r3, r30
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x247E4C

	.loc_0x44:
	  lwz       r4, 0xC0(r30)
	  mr        r3, r30
	  lfs       f1, -0x63C8(r2)
	  lfs       f0, 0x844(r4)
	  fmuls     f1, f1, f0
	  bl        -0x245AD8
	  cmpwi     r31, 0x3
	  bne-      .loc_0x74
	  mr        r3, r30
	  bl        -0x245C00
	  mr        r3, r30
	  bl        -0x247C58

	.loc_0x74:
	  lfs       f0, 0x78(r2)
	  mr        r3, r30
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  stfs      f0, 0x1C8(r30)
	  stfs      f0, 0x1CC(r30)
	  stfs      f0, 0x1D0(r30)
	  bl        0x4D60
	  cmplwi    r3, 0
	  beq-      .loc_0xC4
	  lfs       f0, 0x78(r2)
	  addi      r4, r1, 0x8
	  stfs      f0, 0x8(r1)
	  stfs      f0, 0xC(r1)
	  stfs      f0, 0x10(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x68(r12)
	  mtctr     r12
	  bctrl

	.loc_0xC4:
	  mr        r3, r30
	  li        r4, 0
	  bl        0x5F0C
	  li        r0, 0x1
	  li        r3, -0x1
	  stb       r0, 0x2E4(r30)
	  li        r0, 0
	  stw       r3, 0x344(r30)
	  stw       r0, 0x10(r29)
	  lwz       r31, 0x2C(r1)
	  lwz       r30, 0x28(r1)
	  lwz       r29, 0x24(r1)
	  lwz       r0, 0x34(r1)
	  mtlr      r0
	  addi      r1, r1, 0x30
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034CF14
 * Size:	0004D0
 */
void Game::PanModokiBase::StateBack::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  stw       r28, 0x50(r1)
	  mr        r30, r4
	  lfs       f0, 0x78(r2)
	  lfs       f1, 0x200(r4)
	  mr        r29, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4A8

	.loc_0x5C:
	  lwz       r0, 0x344(r30)
	  cmpwi     r0, 0
	  bge-      .loc_0x454
	  mr        r3, r30
	  bl        0x5D50
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA4
	  mr        r3, r30
	  bl        -0x245C48
	  cmpwi     r3, 0x8
	  bne-      .loc_0x98
	  mr        r3, r30
	  li        r4, 0x2
	  li        r5, 0
	  bl        -0x247FA4

	.loc_0x98:
	  lfs       f1, 0x8C(r2)
	  mr        r3, r30
	  bl        0x5120

	.loc_0xA4:
	  mr        r3, r30
	  bl        0x4890
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xD8
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xF4

	.loc_0xD8:
	  lwz       r0, 0x230(r30)
	  cmplwi    r0, 0
	  bne-      .loc_0xF4
	  mr        r3, r30
	  bl        -0x247D5C
	  li        r0, 0x1
	  stw       r0, 0x344(r30)

	.loc_0xF4:
	  mr        r3, r30
	  bl        0x417C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x144
	  lfs       f0, 0x78(r2)
	  mr        r3, r29
	  mr        r4, r30
	  li        r5, 0xA
	  stfs      f0, 0x1D4(r30)
	  li        r6, 0
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  stfs      f0, 0x1C8(r30)
	  stfs      f0, 0x1CC(r30)
	  stfs      f0, 0x1D0(r30)
	  lwz       r12, 0x0(r29)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x454

	.loc_0x144:
	  mr        r3, r30
	  bl        0x4BA8
	  mr.       r28, r3
	  beq-      .loc_0x454
	  lwz       r3, -0x6C18(r13)
	  li        r31, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x18C
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x18C
	  mr        r3, r30
	  bl        -0x1ADB14
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x18C
	  lwz       r0, 0xB8(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x218

	.loc_0x18C:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1C8
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x218

	.loc_0x1C8:
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r28)
	  lfs       f31, 0xC(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x90(r2)
	  fsubs     f1, f1, f31
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x21C

	.loc_0x218:
	  li        r31, 0x1

	.loc_0x21C:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x420
	  mr        r4, r28
	  addi      r3, r1, 0x30
	  bl        -0x1AD4E4
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x30
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x270
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3F4

	.loc_0x270:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x2DC

	.loc_0x288:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3F4
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x2DC:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x288
	  b         .loc_0x3F4

	.loc_0x2FC:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x338
	  cmplw     r28, r30
	  beq-      .loc_0x338
	  li        r31, 0x1

	.loc_0x338:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x364
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3F4

	.loc_0x364:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3D8

	.loc_0x384:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3F4
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x3D8:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x384

	.loc_0x3F4:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x2FC
	  addi      r3, r1, 0x30
	  li        r4, -0x1
	  bl        -0x1AD5CC

	.loc_0x420:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x454
	  mr        r3, r30
	  bl        0x492C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4A8

	.loc_0x454:
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x4A8
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x4A8
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r5, 0x344(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x344(r30)
	  cmpwi     r0, 0x3
	  bne-      .loc_0x4A8
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x5234

	.loc_0x4A8:
	  psq_l     f31,0x68(r1),0,0
	  lwz       r0, 0x74(r1)
	  lfd       f31, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034D3E4
 * Size:	00003C
 */
void Game::PanModokiBase::StatePulled::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3B5C
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x94
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034D420
 * Size:	0000B0
 */
void Game::PanModokiBase::StatePulled::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  mr        r3, r30
	  bl        -0x2460F4
	  mr        r31, r3
	  mr        r3, r30
	  li        r4, 0x3
	  li        r5, 0
	  bl        -0x24844C
	  lwz       r4, 0xC0(r30)
	  mr        r3, r30
	  lfs       f1, -0x63C8(r2)
	  lfs       f0, 0x844(r4)
	  fmuls     f1, f1, f0
	  bl        -0x2460D8
	  cmpwi     r31, 0x2
	  bne-      .loc_0x64
	  mr        r3, r30
	  bl        -0x246200
	  mr        r3, r30
	  bl        -0x248258

	.loc_0x64:
	  mr        r3, r30
	  bl        0x6340
	  lfs       f0, 0x78(r2)
	  li        r3, 0
	  li        r0, -0x1
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  stfs      f0, 0x1C8(r30)
	  stfs      f0, 0x1CC(r30)
	  stfs      f0, 0x1D0(r30)
	  stb       r3, 0x2E4(r30)
	  stw       r0, 0x344(r30)
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
 * Address:	8034D4D0
 * Size:	0004CC
 */
void Game::PanModokiBase::StatePulled::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x70(r1)
	  mflr      r0
	  stw       r0, 0x74(r1)
	  stfd      f31, 0x60(r1)
	  psq_st    f31,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  stw       r28, 0x50(r1)
	  mr        r30, r4
	  lfs       f0, 0x78(r2)
	  lfs       f1, 0x200(r4)
	  mr        r29, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x5C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4A4

	.loc_0x5C:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x28
	  bne-      .loc_0xB0
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xB0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0xB0
	  lwz       r3, 0x28C(r30)
	  li        r4, 0x598B
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0xB0:
	  lwz       r0, 0x344(r30)
	  cmpwi     r0, 0
	  bge-      .loc_0x43C
	  mr        r3, r30
	  bl        0x4674
	  mr.       r28, r3
	  beq-      .loc_0x42C
	  mr        r3, r30
	  bl        0x42AC
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  mr        r3, r28
	  bl        -0x1E4E14
	  cmpwi     r3, 0x1
	  beq-      .loc_0x43C
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x43C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x43C

	.loc_0x12C:
	  lwz       r3, -0x6C18(r13)
	  li        r31, 0
	  cmplwi    r3, 0
	  beq-      .loc_0x164
	  lwz       r0, 0x44(r3)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x164
	  mr        r3, r30
	  bl        -0x1AE0A8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x164
	  lwz       r0, 0xB8(r28)
	  cmplwi    r0, 0
	  beq-      .loc_0x1F0

	.loc_0x164:
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0x1F4(r12)
	  mtctr     r12
	  bctrl
	  rlwinm    r0,r3,0,24,31
	  cmplwi    r0, 0x1
	  bne-      .loc_0x1A0
	  mr        r3, r28
	  lwz       r12, 0x0(r28)
	  lwz       r12, 0xA8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1F0

	.loc_0x1A0:
	  mr        r4, r30
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r28
	  addi      r3, r1, 0x14
	  lwz       r12, 0x0(r28)
	  lfs       f31, 0xC(r1)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f1, 0x18(r1)
	  lfs       f0, 0x90(r2)
	  fsubs     f1, f1, f31
	  fabs      f1, f1
	  frsp      f1, f1
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x1F4

	.loc_0x1F0:
	  li        r31, 0x1

	.loc_0x1F4:
	  rlwinm.   r0,r31,0,24,31
	  bne-      .loc_0x3F8
	  mr        r4, r28
	  addi      r3, r1, 0x30
	  bl        -0x1ADA78
	  li        r0, 0
	  lis       r3, 0x804B
	  subi      r4, r3, 0x437C
	  addi      r3, r1, 0x30
	  cmplwi    r0, 0
	  stw       r4, 0x20(r1)
	  stw       r0, 0x2C(r1)
	  stw       r0, 0x24(r1)
	  stw       r3, 0x28(r1)
	  bne-      .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3CC

	.loc_0x248:
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x2B4

	.loc_0x260:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3CC
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x2B4:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x260
	  b         .loc_0x3CC

	.loc_0x2D4:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  lwz       r12, 0x0(r3)
	  mr        r28, r3
	  lwz       r12, 0x7C(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x310
	  cmplw     r28, r30
	  beq-      .loc_0x310
	  li        r31, 0x1

	.loc_0x310:
	  lwz       r0, 0x2C(r1)
	  cmplwi    r0, 0
	  bne-      .loc_0x33C
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3CC

	.loc_0x33C:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)
	  b         .loc_0x3B0

	.loc_0x35C:
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r3
	  lwz       r3, 0x2C(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3CC
	  lwz       r3, 0x28(r1)
	  lwz       r4, 0x24(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  stw       r3, 0x24(r1)

	.loc_0x3B0:
	  lwz       r12, 0x20(r1)
	  addi      r3, r1, 0x20
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq+      .loc_0x35C

	.loc_0x3CC:
	  lwz       r3, 0x28(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r4, 0x24(r1)
	  cmplw     r4, r3
	  bne+      .loc_0x2D4
	  addi      r3, r1, 0x30
	  li        r4, -0x1
	  bl        -0x1ADB60

	.loc_0x3F8:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x43C
	  mr        r3, r30
	  bl        0x4398
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x4A4

	.loc_0x42C:
	  mr        r3, r30
	  bl        -0x248660
	  li        r0, 0x1
	  stw       r0, 0x344(r30)

	.loc_0x43C:
	  lfs       f1, 0x8C(r2)
	  mr        r3, r30
	  bl        0x47C0
	  lwz       r3, 0x188(r30)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x49C
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x49C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r5, 0x344(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x344(r30)
	  cmpwi     r0, 0x2
	  bne-      .loc_0x49C
	  mr        r3, r30
	  li        r4, 0
	  bl        0x4C84

	.loc_0x49C:
	  mr        r3, r30
	  bl        0x5204

	.loc_0x4A4:
	  psq_l     f31,0x68(r1),0,0
	  lwz       r0, 0x74(r1)
	  lfd       f31, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r29, 0x54(r1)
	  lwz       r28, 0x50(r1)
	  mtlr      r0
	  addi      r1, r1, 0x70
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034D99C
 * Size:	000024
 */
void Game::PanModokiBase::StatePulled::cleanup((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r3, r4
	  stw       r0, 0x14(r1)
	  bl        0x5EA0
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034D9C0
 * Size:	00003C
 */
void Game::PanModokiBase::StateAppear::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3B80
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0x9C
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034D9FC
 * Size:	000070
 */
void Game::PanModokiBase::StateAppear::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x4
	  mr        r3, r31
	  bl        -0x248A18
	  lfs       f1, -0x63C8(r2)
	  mr        r3, r31
	  bl        -0x246698
	  mr        r3, r31
	  bl        0x4420
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2F8(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x5B84
	  mr        r3, r31
	  bl        -0x2462D8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DA6C
 * Size:	000004
 */
void Game::PanModokiBase::Obj::appearRumble(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DA70
 * Size:	000064
 */
void Game::PanModokiBase::StateAppear::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x50
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x50
	  lwz       r12, 0x0(r3)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        -0x246328

	.loc_0x50:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DAD4
 * Size:	00003C
 */
void Game::PanModokiBase::StateHide::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3BA4
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0xA4
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DB10
 * Size:	000068
 */
void Game::PanModokiBase::StateHide::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x5
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x248B34
	  lfs       f1, -0x63C8(r2)
	  mr        r3, r31
	  bl        -0x2467B4
	  lfs       f0, 0x78(r2)
	  li        r0, 0
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r0, 0x10(r30)
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
 * Address:	8034DB78
 * Size:	000118
 */
void Game::PanModokiBase::StateHide::exec((Game::EnemyBase*))
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
	  lwz       r3, 0x188(r4)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x88
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x2
	  bne-      .loc_0x58
	  mr        r3, r31
	  bl        0x5B04
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x2FC(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x88

	.loc_0x58:
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x88
	  mr        r3, r31
	  bl        0x5BBC
	  lwz       r4, 0xC0(r31)
	  mr        r3, r31
	  lfs       f0, 0x104(r4)
	  stfs      f0, 0x200(r31)
	  bl        0x4C00
	  lwz       r0, 0x1E0(r31)
	  oris      r0, r0, 0x40
	  stw       r0, 0x1E0(r31)

	.loc_0x88:
	  mr        r3, r31
	  bl        0x4000
	  cmplwi    r3, 0
	  bne-      .loc_0x100
	  lwz       r3, 0x10(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x1
	  lfd       f2, 0xB0(r2)
	  stw       r0, 0x10(r30)
	  lwz       r0, 0x10(r30)
	  lwz       r3, 0xC0(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfs       f0, 0x95C(r3)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0x100
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x4
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x1E0(r31)
	  rlwinm    r0,r0,0,10,8
	  stw       r0, 0x1E0(r31)

	.loc_0x100:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DC90
 * Size:	000004
 */
void Game::PanModokiBase::Obj::hideRumble(void)
{
	/*
	.loc_0x0:
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DC94
 * Size:	00003C
 */
void Game::PanModokiBase::StateDamage::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3BC8
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0xB8
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DCD0
 * Size:	00010C
 */
void Game::PanModokiBase::StateDamage::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stfd      f31, 0x10(r1)
	  psq_st    f31,0x18(r1),0,0
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x6
	  mr        r3, r31
	  li        r5, 0
	  bl        -0x248CF4
	  lfs       f1, -0x63C8(r2)
	  mr        r3, r31
	  bl        -0x246974
	  lfs       f0, 0x78(r2)
	  mr        r3, r31
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  bl        0x3EE8
	  cmplwi    r3, 0
	  beq-      .loc_0x74
	  lwz       r3, 0x334(r3)
	  li        r4, 0x2
	  bl        -0x118D28
	  mr        r3, r31
	  bl        -0x1AE914
	  li        r0, 0
	  stw       r0, 0x230(r31)

	.loc_0x74:
	  lbz       r0, 0x2F1(r31)
	  lwz       r4, 0xC0(r31)
	  cmplwi    r0, 0
	  lfs       f31, 0x90C(r4)
	  beq-      .loc_0xD8
	  mr        r3, r31
	  lfs       f31, 0x8E4(r4)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x300(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x258(r12)
	  mtctr     r12
	  bctrl
	  cmpwi     r3, 0x28
	  bne-      .loc_0xD8
	  lwz       r3, 0x28C(r31)
	  li        r4, 0x598A
	  li        r5, 0
	  lwz       r12, 0x28(r3)
	  lwz       r12, 0x88(r12)
	  mtctr     r12
	  bctrl

	.loc_0xD8:
	  fmr       f1, f31
	  lfs       f2, 0x8C(r2)
	  mr        r3, r31
	  bl        -0x247D88
	  mr        r3, r31
	  bl        0x57EC
	  psq_l     f31,0x18(r1),0,0
	  lwz       r0, 0x24(r1)
	  lfd       f31, 0x10(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DDDC
 * Size:	000080
 */
void Game::PanModokiBase::StateDamage::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x188(r4)
	  lbz       r0, 0x24(r5)
	  cmplwi    r0, 0
	  beq-      .loc_0x70
	  lwz       r0, 0x1C(r5)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x70
	  lfs       f1, 0x200(r4)
	  lfs       f0, 0x78(r2)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x58
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x70

	.loc_0x58:
	  lwz       r12, 0x0(r3)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x70:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DE5C
 * Size:	00003C
 */
void Game::PanModokiBase::StateWait::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3BEC
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0xC0
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DE98
 * Size:	000070
 */
void Game::PanModokiBase::StateWait::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x8
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  mr        r3, r31
	  bl        -0x248EBC
	  lfs       f1, -0x63C8(r2)
	  mr        r3, r31
	  bl        -0x246B3C
	  lfs       f0, 0x78(r2)
	  li        r3, 0
	  li        r0, 0x1
	  stfs      f0, 0x1D4(r31)
	  stfs      f0, 0x1D8(r31)
	  stfs      f0, 0x1DC(r31)
	  stw       r3, 0x10(r30)
	  stw       r0, 0x344(r31)
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
 * Address:	8034DF08
 * Size:	0000F4
 */
void Game::PanModokiBase::StateWait::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfs       f0, 0x78(r2)
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  lfs       f1, 0x200(r4)
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x4C
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xDC

	.loc_0x4C:
	  lwz       r3, 0x10(r30)
	  lis       r0, 0x4330
	  stw       r0, 0x8(r1)
	  addi      r0, r3, 0x1
	  lfd       f2, 0xB0(r2)
	  stw       r0, 0x10(r30)
	  lwz       r0, 0x10(r30)
	  lwz       r3, 0xC0(r31)
	  xoris     r0, r0, 0x8000
	  stw       r0, 0xC(r1)
	  lfs       f0, 0x934(r3)
	  lfd       f1, 0x8(r1)
	  fsubs     f1, f1, f2
	  fcmpo     cr0, f1, f0
	  ble-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x246C94
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xA0
	  mr        r3, r31
	  bl        -0x248D04

	.loc_0xA0:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0xDC
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0xDC
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r6, 0
	  lwz       r5, 0x344(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xDC:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034DFFC
 * Size:	00003C
 */
void Game::PanModokiBase::StateStick::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3C10
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0xC8
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034E038
 * Size:	000108
 */
void Game::PanModokiBase::StateStick::init((Game::EnemyBase*, Game::StateArg*))
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
	  mr        r3, r30
	  bl        -0x246D14
	  cmpwi     r3, 0x1
	  beq-      .loc_0x58
	  mr        r3, r30
	  li        r4, 0x1
	  li        r5, 0
	  bl        -0x249070
	  lwz       r4, 0xC0(r30)
	  mr        r3, r30
	  lfs       f1, -0x63C8(r2)
	  lfs       f0, 0x844(r4)
	  fmuls     f1, f1, f0
	  bl        -0x246CFC

	.loc_0x58:
	  lfs       f0, 0x78(r2)
	  mr        r3, r30
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  stfs      f0, 0x1C8(r30)
	  stfs      f0, 0x1CC(r30)
	  stfs      f0, 0x1D0(r30)
	  bl        0x3B54
	  mr.       r31, r3
	  beq-      .loc_0xB8
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x5044
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xB8
	  mr        r3, r31
	  li        r4, 0x270F
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x168(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xDC

	.loc_0xB8:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xEC

	.loc_0xDC:
	  li        r3, 0
	  li        r0, 0x1
	  stw       r3, 0x10(r29)
	  stw       r0, 0x344(r30)

	.loc_0xEC:
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
 * Address:	8034E140
 * Size:	0003BC
 */
void Game::PanModokiBase::StateStick::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0xA0(r1)
	  mflr      r0
	  stw       r0, 0xA4(r1)
	  stfd      f31, 0x90(r1)
	  psq_st    f31,0x98(r1),0,0
	  stfd      f30, 0x80(r1)
	  psq_st    f30,0x88(r1),0,0
	  stfd      f29, 0x70(r1)
	  psq_st    f29,0x78(r1),0,0
	  stfd      f28, 0x60(r1)
	  psq_st    f28,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  stw       r29, 0x54(r1)
	  mr        r30, r4
	  lfs       f0, 0x78(r2)
	  lfs       f1, 0x200(r4)
	  mr        r29, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x70
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x380

	.loc_0x70:
	  mr        r3, r30
	  bl        0x3A50
	  mr.       r31, r3
	  bne-      .loc_0xA4
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x380

	.loc_0xA4:
	  mr        r4, r31
	  addi      r3, r1, 0x38
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x38(r1)
	  mr        r4, r30
	  lfs       f1, 0x3C(r1)
	  addi      r3, r1, 0x20
	  lfs       f0, 0x40(r1)
	  stfs      f2, 0x44(r1)
	  stfs      f1, 0x48(r1)
	  stfs      f0, 0x4C(r1)
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  mr        r4, r30
	  lfs       f1, 0x28(r1)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x2C
	  lfs       f0, 0x4C(r1)
	  lwz       r12, 0x8(r12)
	  fsubs     f31, f0, f1
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x35C(r31)
	  fmuls     f2, f31, f31
	  lfs       f1, 0x2C(r1)
	  lfs       f0, 0x44(r1)
	  lfs       f4, 0xA0(r3)
	  fsubs     f3, f0, f1
	  lfs       f1, 0xD0(r2)
	  lfs       f0, 0x32C(r30)
	  fmadds    f4, f1, f0, f4
	  fmadds    f31, f3, f3, f2
	  fmuls     f4, f4, f4
	  fcmpo     cr0, f31, f4
	  bge-      .loc_0x20C
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x4E7C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E8
	  mr        r3, r31
	  li        r4, 0x270F
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x168(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x1E8
	  lfs       f0, 0x78(r2)
	  mr        r3, r30
	  mr        r4, r31
	  li        r5, 0x270F
	  stfs      f0, 0x1C8(r30)
	  stfs      f0, 0x1CC(r30)
	  stfs      f0, 0x1D0(r30)
	  stfs      f0, 0x1D4(r30)
	  stfs      f0, 0x1D8(r30)
	  stfs      f0, 0x1DC(r30)
	  bl        -0x1AF0C8
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x148(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r30
	  li        r4, 0
	  bl        0x433C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x380

	.loc_0x1E8:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x380

	.loc_0x20C:
	  lwz       r5, 0xC0(r30)
	  mr        r3, r30
	  lfs       f1, 0xD4(r2)
	  addi      r4, r1, 0x44
	  lfs       f0, 0x2E4(r5)
	  lfs       f2, 0x86C(r5)
	  fmuls     f1, f1, f0
	  lfs       f3, 0x894(r5)
	  bl        -0x238D90
	  mr        r4, r30
	  lwz       r5, 0xC0(r30)
	  lwz       r12, 0x0(r30)
	  addi      r3, r1, 0x14
	  lfs       f29, 0x894(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f30, 0x86C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x44(r1)
	  lfs       f0, 0x4C(r1)
	  lfs       f4, 0x18(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x3192BC
	  bl        0xC3808
	  lwz       r12, 0x0(r30)
	  fmr       f28, f1
	  mr        r3, r30
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f28
	  bl        0xC3810
	  fmuls     f30, f1, f30
	  lfs       f0, 0xDC(r2)
	  lfs       f1, 0xD8(r2)
	  fmuls     f0, f0, f29
	  fabs      f2, f30
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x2EC
	  lfs       f0, 0x78(r2)
	  fcmpo     cr0, f30, f0
	  ble-      .loc_0x2E8
	  fmr       f30, f1
	  b         .loc_0x2EC

	.loc_0x2E8:
	  fneg      f30, f1

	.loc_0x2EC:
	  mr        r3, r30
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f30, f1
	  bl        0xC378C
	  stfs      f1, 0x1FC(r30)
	  lfs       f1, 0xE0(r2)
	  lfs       f0, 0x1FC(r30)
	  stfs      f0, 0x1A8(r30)
	  lwz       r3, 0x10(r29)
	  addi      r0, r3, 0x1
	  stw       r0, 0x10(r29)
	  lfs       f0, 0x32C(r30)
	  lwz       r0, 0x10(r29)
	  fmuls     f0, f1, f0
	  cmpwi     r0, 0xC8
	  bgt-      .loc_0x360
	  fmuls     f0, f0, f0
	  fcmpo     cr0, f31, f0
	  bgt-      .loc_0x360
	  cmplwi    r31, 0
	  beq-      .loc_0x360
	  mr        r3, r30
	  mr        r4, r31
	  bl        0x4C74
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x380

	.loc_0x360:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r6, 0
	  lwz       r5, 0x344(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x380:
	  psq_l     f31,0x98(r1),0,0
	  lfd       f31, 0x90(r1)
	  psq_l     f30,0x88(r1),0,0
	  lfd       f30, 0x80(r1)
	  psq_l     f29,0x78(r1),0,0
	  lfd       f29, 0x70(r1)
	  psq_l     f28,0x68(r1),0,0
	  lfd       f28, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r30, 0x58(r1)
	  lwz       r0, 0xA4(r1)
	  lwz       r29, 0x54(r1)
	  mtlr      r0
	  addi      r1, r1, 0xA0
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034E4FC
 * Size:	00003C
 */
void Game::PanModokiBase::StateSucked::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r6, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r5, 0x804E
	  stw       r0, 0x0(r3)
	  li        r7, 0
	  subi      r6, r6, 0x3ACC
	  subi      r5, r5, 0x3C34
	  stw       r4, 0x4(r3)
	  addi      r0, r2, 0xE4
	  stw       r7, 0x8(r3)
	  stw       r6, 0x0(r3)
	  stw       r5, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034E538
 * Size:	00006C
 */
void Game::PanModokiBase::StateSucked::init((Game::EnemyBase*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x8
	  mr        r3, r31
	  bl        -0x249554
	  lfs       f1, -0x63C8(r2)
	  mr        r3, r31
	  bl        -0x2471D4
	  mr        r3, r31
	  bl        0x3698
	  cmplwi    r3, 0
	  beq-      .loc_0x50
	  mr        r3, r31
	  bl        -0x1AF158
	  li        r0, 0
	  stw       r0, 0x230(r31)

	.loc_0x50:
	  li        r0, 0x1
	  stb       r0, 0x2F1(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034E5A4
 * Size:	00000C
 */
void Game::PanModokiBase::StateSucked::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  li        r0, 0x1
	  stb       r0, 0x2F1(r4)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034E5B0
 * Size:	000040
 */
void Game::PanModokiBase::StateCarryEnd::__ct((int))
{
	/*
	.loc_0x0:
	  lis       r5, 0x804B
	  lis       r7, 0x804E
	  subi      r0, r5, 0x65C
	  lis       r6, 0x804E
	  stw       r0, 0x0(r3)
	  lis       r5, 0x8049
	  li        r8, 0
	  subi      r7, r7, 0x3ACC
	  stw       r4, 0x4(r3)
	  subi      r4, r6, 0x3C58
	  addi      r0, r5, 0xB38
	  stw       r8, 0x8(r3)
	  stw       r7, 0x0(r3)
	  stw       r4, 0x0(r3)
	  stw       r0, 0xC(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034E5F0
 * Size:	00006C
 */
void Game::PanModokiBase::StateCarryEnd::init((Game::EnemyBase*,
                                               Game::StateArg*))
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
	  mr        r3, r31
	  bl        -0x246E94
	  mr        r4, r31
	  addi      r3, r1, 0x8
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f0, 0x8(r1)
	  stfs      f0, 0x10(r30)
	  lfs       f0, 0xC(r1)
	  stfs      f0, 0x14(r30)
	  lfs       f0, 0x10(r1)
	  stfs      f0, 0x18(r30)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r0, 0x24(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	8034E65C
 * Size:	0002F0
 */
void Game::PanModokiBase::StateCarryEnd::exec((Game::EnemyBase*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x90(r1)
	  mflr      r0
	  stw       r0, 0x94(r1)
	  stfd      f31, 0x80(r1)
	  psq_st    f31,0x88(r1),0,0
	  stfd      f30, 0x70(r1)
	  psq_st    f30,0x78(r1),0,0
	  stfd      f29, 0x60(r1)
	  psq_st    f29,0x68(r1),0,0
	  stw       r31, 0x5C(r1)
	  stw       r30, 0x58(r1)
	  mr        r31, r4
	  lfs       f0, 0x78(r2)
	  lfs       f1, 0x200(r4)
	  mr        r30, r3
	  fcmpo     cr0, f1, f0
	  cror      2, 0, 0x2
	  bne-      .loc_0x64
	  lwz       r12, 0x0(r3)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x2C0

	.loc_0x64:
	  lwz       r12, 0x0(r4)
	  addi      r3, r1, 0x2C
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  lfs       f2, 0x198(r31)
	  lfs       f0, 0x2C(r1)
	  lfs       f5, 0x1A0(r31)
	  fsubs     f0, f2, f0
	  lfs       f4, 0x34(r1)
	  lfs       f3, 0x19C(r31)
	  lfs       f1, 0x30(r1)
	  fsubs     f6, f5, f4
	  fabs      f7, f0
	  fsubs     f4, f3, f1
	  lfs       f1, 0xEC(r2)
	  stfs      f0, 0x44(r1)
	  frsp      f0, f7
	  stfs      f4, 0x48(r1)
	  fcmpo     cr0, f0, f1
	  stfs      f6, 0x4C(r1)
	  bge-      .loc_0x130
	  fabs      f0, f6
	  frsp      f0, f0
	  fcmpo     cr0, f0, f1
	  bge-      .loc_0x130
	  stfs      f2, 0x38(r1)
	  mr        r3, r31
	  addi      r4, r1, 0x38
	  stfs      f3, 0x3C(r1)
	  stfs      f5, 0x40(r1)
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x70(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x284
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x1
	  bne-      .loc_0x284
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x284

	.loc_0x130:
	  mr        r4, r31
	  lwz       r5, 0xC0(r31)
	  lwz       r12, 0x0(r31)
	  addi      r3, r1, 0x14
	  lfs       f30, 0x334(r5)
	  lwz       r12, 0x8(r12)
	  lfs       f31, 0x30C(r5)
	  mtctr     r12
	  bctrl
	  lfs       f5, 0x14(r1)
	  lis       r3, 0x8051
	  lfs       f3, 0x1C(r1)
	  subi      r3, r3, 0x2E20
	  lfs       f1, 0x10(r30)
	  lfs       f0, 0x18(r30)
	  lfs       f4, 0x18(r1)
	  fsubs     f1, f1, f5
	  fsubs     f2, f0, f3
	  stfs      f5, 0x8(r1)
	  stfs      f4, 0xC(r1)
	  stfs      f3, 0x10(r1)
	  bl        -0x3196D8
	  bl        0xC33EC
	  lwz       r12, 0x0(r31)
	  fmr       f29, f1
	  mr        r3, r31
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fmr       f2, f1
	  fmr       f1, f29
	  bl        0xC33F4
	  fmuls     f31, f1, f31
	  lfs       f0, 0xDC(r2)
	  lfs       f1, 0xD8(r2)
	  fmuls     f0, f0, f30
	  fabs      f2, f31
	  fmuls     f1, f1, f0
	  frsp      f0, f2
	  fcmpo     cr0, f0, f1
	  ble-      .loc_0x1EC
	  lfs       f0, 0x78(r2)
	  fcmpo     cr0, f31, f0
	  ble-      .loc_0x1E8
	  fmr       f31, f1
	  b         .loc_0x1EC

	.loc_0x1E8:
	  fneg      f31, f1

	.loc_0x1EC:
	  mr        r3, r31
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x64(r12)
	  mtctr     r12
	  bctrl
	  fadds     f1, f31, f1
	  bl        0xC3370
	  lfs       f0, 0x44(r1)
	  lfs       f2, 0xF0(r2)
	  stfs      f1, 0x1FC(r31)
	  fmuls     f1, f0, f2
	  lfs       f0, 0x48(r1)
	  lfs       f4, 0x1FC(r31)
	  fmuls     f3, f0, f2
	  lfs       f0, 0x4C(r1)
	  stfs      f1, 0x44(r1)
	  fmuls     f2, f0, f2
	  lwz       r0, 0x44(r1)
	  stfs      f4, 0x1A8(r31)
	  stw       r0, 0x20(r1)
	  lfs       f1, 0x18C(r31)
	  lfs       f0, 0x20(r1)
	  stfs      f3, 0x48(r1)
	  fadds     f0, f1, f0
	  lwz       r0, 0x48(r1)
	  stfs      f2, 0x4C(r1)
	  stw       r0, 0x24(r1)
	  lwz       r0, 0x4C(r1)
	  stfs      f0, 0x18C(r31)
	  lfs       f0, 0x24(r1)
	  lfs       f1, 0x190(r31)
	  stw       r0, 0x28(r1)
	  fadds     f1, f1, f0
	  lfs       f0, 0x28(r1)
	  stfs      f1, 0x190(r31)
	  lfs       f1, 0x194(r31)
	  fadds     f0, f1, f0
	  stfs      f0, 0x194(r31)

	.loc_0x284:
	  lwz       r3, 0x188(r31)
	  lbz       r0, 0x24(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x2C0
	  lwz       r0, 0x1C(r3)
	  cmplwi    r0, 0x3E8
	  bne-      .loc_0x2C0
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x2C0:
	  psq_l     f31,0x88(r1),0,0
	  lfd       f31, 0x80(r1)
	  psq_l     f30,0x78(r1),0,0
	  lfd       f30, 0x70(r1)
	  psq_l     f29,0x68(r1),0,0
	  lfd       f29, 0x60(r1)
	  lwz       r31, 0x5C(r1)
	  lwz       r0, 0x94(r1)
	  lwz       r30, 0x58(r1)
	  mtlr      r0
	  addi      r1, r1, 0x90
	  blr
	*/
}
