

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
 * Address:	803EEBE8
 * Size:	0001D0
 */
void ebi::Omake::FSMStateMachine::init( (ebi::Omake::TMgr *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x7AA0
  li        r4, 0x5
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x1508
  li        r3, 0x10
  bl        -0x3CAD70
  mr.       r4, r3
  beq-      .loc_0x64
  lis       r5, 0x804F
  lis       r3, 0x804F
  subi      r0, r5, 0x5D3C
  li        r5, 0
  stw       r0, 0x0(r4)
  subi      r3, r3, 0x5D64
  addi      r0, r2, 0x1B40
  stw       r5, 0x4(r4)
  stw       r5, 0x8(r4)
  stw       r3, 0x0(r4)
  stw       r0, 0xC(r4)

.loc_0x64:
  mr        r3, r30
  bl        0x15C4
  li        r3, 0x10
  bl        -0x3CADB4
  mr.       r4, r3
  beq-      .loc_0xB8
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x5D3C
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x1
  li        r7, 0
  subi      r6, r5, 0x5D64
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x10
  subi      r0, r3, 0x5D8C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0xB8:
  mr        r3, r30
  bl        0x1570
  li        r3, 0x10
  bl        -0x3CAE08
  mr.       r4, r3
  beq-      .loc_0x10C
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x5D3C
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x2
  li        r7, 0
  subi      r6, r5, 0x5D64
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x28
  subi      r0, r3, 0x5DC0
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x10C:
  mr        r3, r30
  bl        0x151C
  li        r3, 0x1C
  bl        -0x3CAE5C
  mr.       r4, r3
  beq-      .loc_0x168
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x5D3C
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x3
  li        r7, 0
  subi      r6, r5, 0x5D64
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x40
  subi      r0, r3, 0x5DE8
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)
  stw       r7, 0x14(r4)
  stw       r7, 0x18(r4)

.loc_0x168:
  mr        r3, r30
  bl        0x14C0
  li        r3, 0x10
  bl        -0x3CAEB8
  mr.       r4, r3
  beq-      .loc_0x1B0
  lis       r5, 0x804F
  lis       r3, 0x804F
  subi      r0, r5, 0x5D3C
  li        r6, 0x4
  stw       r0, 0x0(r4)
  li        r5, 0
  subi      r3, r3, 0x5D64
  addi      r0, r31, 0x54
  stw       r6, 0x4(r4)
  stw       r5, 0x8(r4)
  stw       r3, 0x0(r4)
  stw       r0, 0xC(r4)

.loc_0x1B0:
  mr        r3, r30
  bl        0x1478
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
 * Address:	803EEDB8
 * Size:	00002C
 */
void ebi::Omake::FSMState::init( (ebi::Omake::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EEDE4
 * Size:	00002C
 */
void ebi::Omake::FSMState::exec( (ebi::Omake::TMgr *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x24(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EEE10
 * Size:	0000DC
 */
void ebi::Omake::FSMState_OmakeScreen::do_init( (ebi::Omake::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  stw       r29, 0x24(r1)
  mr        r29, r4
  lwz       r0, 0x8B4(r4)
  cmpwi     r0, 0
  bne-      .loc_0xA0
  lwz       r3, -0x6514(r13)
  bl        0x340F4
  bl        -0x1BA71C
  mr        r31, r3
  lwz       r3, -0x6514(r13)
  bl        0x340E4
  lbz       r0, 0x0(r3)
  lwz       r3, -0x6514(r13)
  rlwinm    r30,r0,31,31,31
  bl        0x340D4
  lbz       r4, 0x0(r3)
  lis       r3, 0x804F
  subi      r0, r3, 0x6064
  lis       r3, 0x804F
  stw       r0, 0x8(r1)
  rlwinm    r5,r4,0,31,31
  subi      r3, r3, 0x5D98
  li        r0, -0x1
  stw       r3, 0x8(r1)
  addi      r3, r29, 0x8
  addi      r4, r1, 0x8
  stb       r5, 0xC(r1)
  stb       r30, 0xD(r1)
  stb       r31, 0xE(r1)
  stw       r0, 0x10(r1)
  lwz       r12, 0x8(r29)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xC0

.loc_0xA0:
  lwz       r0, 0x14(r29)
  cmpwi     r0, 0x1
  bne-      .loc_0xB8
  addi      r3, r29, 0x8
  bl        -0x44C
  b         .loc_0xC0

.loc_0xB8:
  addi      r3, r29, 0x8
  bl        -0x4AC

.loc_0xC0:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803EEEEC
 * Size:	0000A8
 */
void ebi::Omake::FSMState_OmakeScreen::do_exec( (ebi::Omake::TMgr *))
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
  lwz       r0, 0x14(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x40
  lwz       r12, 0x0(r3)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x40:
  lwz       r0, 0x14(r31)
  cmpwi     r0, 0x4
  bne-      .loc_0x6C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x6C:
  addi      r3, r31, 0x8
  lwz       r12, 0x8(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x90
  mr        r3, r31
  bl        0x6D8

.loc_0x90:
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
 * Address:	803EEF94
 * Size:	000034
 */
void ebi::Omake::FSMState_CardEScreen::do_init( (ebi::Omake::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  addi      r3, r4, 0x468
  li        r4, 0
  stw       r0, 0x14(r1)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EEFC8
 * Size:	0000A0
 */
void ebi::Omake::FSMState_CardEScreen::do_exec( (ebi::Omake::TMgr *))
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
  addi      r3, r31, 0x468
  lwz       r12, 0x468(r4)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x88
  lbz       r0, 0x478(r31)
  cmplwi    r0, 0
  beq-      .loc_0x68
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x88

.loc_0x68:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x88:
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
 * Address:	803EF068
 * Size:	000048
 */
void ebi::Omake::FSMState_SelectGame::do_init( (ebi::Omake::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r4, 0x5DC
  lwz       r12, 0x5DC(r4)
  li        r4, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stw       r0, 0x10(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF0B0
 * Size:	000378
 */
void ebi::Omake::FSMState_SelectGame::do_exec( (ebi::Omake::TMgr *))
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
  lwz       r0, 0x10(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0x174
  bge-      .loc_0x3C
  cmpwi     r0, 0
  beq-      .loc_0x4C
  bge-      .loc_0xC4
  b         .loc_0x360

.loc_0x3C:
  cmpwi     r0, 0x4
  beq-      .loc_0x324
  bge-      .loc_0x360
  b         .loc_0x2AC

.loc_0x4C:
  addi      r3, r31, 0x5DC
  bl        0x27E8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  lwz       r3, -0x6568(r13)
  bl        -0x20B8
  li        r0, 0x1
  stw       r0, 0x10(r30)

.loc_0x6C:
  addi      r3, r31, 0x5DC
  lwz       r12, 0x5DC(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x360
  addi      r3, r31, 0x468
  li        r4, 0
  lwz       r12, 0x468(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x360

.loc_0xC4:
  lwz       r3, -0x6568(r13)
  bl        -0x1FB8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x360
  lwz       r3, -0x6568(r13)
  lwz       r0, 0x3C(r3)
  cmpwi     r0, 0
  bne-      .loc_0x130
  lwz       r4, 0x61C(r31)
  bl        -0x215C
  addi      r3, r31, 0x5DC
  li        r4, 0x1
  bl        0x27C8
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1B48(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x32D66C
  stw       r3, 0x14(r30)
  li        r4, 0x1800
  li        r5, 0
  stw       r3, 0x18(r30)
  lwz       r3, -0x67A8(r13)
  bl        -0xB6BA0
  li        r0, 0x2
  stw       r0, 0x10(r30)
  b         .loc_0x360

.loc_0x130:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0xB6BBC
  addi      r3, r31, 0x5DC
  li        r4, 0x4
  bl        0x2774
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1B4C(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x32D6C0
  stw       r3, 0x14(r30)
  li        r0, 0x3
  stw       r3, 0x18(r30)
  stw       r0, 0x10(r30)
  b         .loc_0x360

.loc_0x174:
  lwz       r3, 0x14(r30)
  cmplwi    r3, 0
  beq-      .loc_0x188
  subi      r0, r3, 0x1
  stw       r0, 0x14(r30)

.loc_0x188:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x100B
  li        r5, 0
  bl        -0xB6C14
  lwz       r3, -0x6568(r13)
  bl        -0x208C
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x360
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0
  bne-      .loc_0x360
  lwz       r3, -0x6568(r13)
  lwz       r0, 0x3C(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x224
  bge-      .loc_0x1D4
  cmpwi     r0, 0
  bge-      .loc_0x1E0
  b         .loc_0x360

.loc_0x1D4:
  cmpwi     r0, 0x3
  bge-      .loc_0x360
  b         .loc_0x268

.loc_0x1E0:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0xB6C6C
  addi      r3, r31, 0x5DC
  li        r4, 0x2
  bl        0x26C4
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1B4C(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x32D770
  stw       r3, 0x14(r30)
  li        r0, 0x4
  stw       r3, 0x18(r30)
  stw       r0, 0x10(r30)
  b         .loc_0x360

.loc_0x224:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0xB6CB0
  addi      r3, r31, 0x5DC
  li        r4, 0x4
  bl        0x2680
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1B4C(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x32D7B4
  stw       r3, 0x14(r30)
  li        r0, 0x3
  stw       r3, 0x18(r30)
  stw       r0, 0x10(r30)
  b         .loc_0x360

.loc_0x268:
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180D
  li        r5, 0
  bl        -0xB6CF4
  addi      r3, r31, 0x5DC
  li        r4, 0x3
  bl        0x263C
  lwz       r3, -0x6514(r13)
  lfs       f1, 0x1B4C(r2)
  lfs       f0, 0x54(r3)
  fdivs     f1, f1, f0
  bl        -0x32D7F8
  stw       r3, 0x14(r30)
  li        r0, 0x3
  stw       r3, 0x18(r30)
  stw       r0, 0x10(r30)
  b         .loc_0x360

.loc_0x2AC:
  lwz       r3, 0x14(r30)
  cmplwi    r3, 0
  beq-      .loc_0x2C0
  subi      r0, r3, 0x1
  stw       r0, 0x14(r30)

.loc_0x2C0:
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0
  bne-      .loc_0x2E8
  addi      r3, r31, 0x5DC
  li        r4, 0
  bl        0x25E8
  addi      r3, r31, 0x5DC
  bl        0x25A4
  li        r0, 0
  stw       r0, 0x10(r30)

.loc_0x2E8:
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0x2
  ble-      .loc_0x360
  lwz       r3, 0x0(r31)
  lwz       r0, 0x1C(r3)
  rlwinm.   r0,r0,0,22,22
  beq-      .loc_0x360
  lwz       r3, -0x67A8(r13)
  li        r4, 0x1801
  li        r5, 0
  bl        -0xB6D90
  li        r0, 0x1
  stw       r0, 0x14(r30)
  stw       r0, 0x18(r30)
  b         .loc_0x360

.loc_0x324:
  lwz       r3, 0x14(r30)
  cmplwi    r3, 0
  beq-      .loc_0x338
  subi      r0, r3, 0x1
  stw       r0, 0x14(r30)

.loc_0x338:
  lwz       r0, 0x14(r30)
  cmplwi    r0, 0
  bne-      .loc_0x360
  addi      r3, r31, 0x5DC
  li        r4, 0
  bl        0x2570
  addi      r3, r31, 0x5DC
  bl        0x252C
  li        r0, 0
  stw       r0, 0x10(r30)

.loc_0x360:
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
 * Address:	803EF428
 * Size:	0000B4
 */
void ebi::Omake::TMgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r0, 0x0(r3)
  addi      r3, r31, 0x8
  bl        -0x21A0
  addi      r3, r31, 0x468
  bl        0xE54
  addi      r3, r31, 0x5DC
  bl        0x189C
  li        r7, 0
  lis       r4, 0x804F
  stb       r7, 0x890(r31)
  lis       r3, 0x804F
  subi      r6, r4, 0x5E00
  li        r5, -0x1
  stw       r7, 0x894(r31)
  subi      r0, r3, 0x5D1C
  addi      r3, r31, 0x89C
  mr        r4, r31
  stw       r7, 0x898(r31)
  stw       r6, 0x89C(r31)
  stw       r5, 0x8B4(r31)
  stw       r0, 0x89C(r31)
  lwz       r12, 0x89C(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x89C
  mr        r4, r31
  lwz       r12, 0x89C(r31)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mr        r3, r31
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF4DC
 * Size:	0000E8
 */
void ebi::Omake::TMgr::loadResource(void)
{
/*
.loc_0x0:
  stwu      r1, -0x120(r1)
  mflr      r0
  lis       r4, 0x8049
  li        r5, 0
  stw       r0, 0x124(r1)
  stw       r31, 0x11C(r1)
  addi      r31, r4, 0x7AA0
  addi      r4, r31, 0x60
  stw       r30, 0x118(r1)
  stw       r29, 0x114(r1)
  mr        r29, r3
  lwz       r3, -0x6514(r13)
  bl        0x33E50
  addi      r3, r1, 0x8
  addi      r4, r31, 0x78
  bl        -0xD75CC
  addi      r3, r1, 0x8
  li        r4, 0x1
  li        r5, 0
  li        r6, 0x1
  bl        -0x3D43FC
  mr.       r30, r3
  bne-      .loc_0x70
  addi      r3, r31, 0
  addi      r5, r31, 0x84
  li        r4, 0x10F
  crclr     6, 0x6
  bl        -0x3C4F08

.loc_0x70:
  addi      r3, r29, 0x8
  mr        r4, r30
  lwz       r12, 0x8(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r29, 0x468
  mr        r4, r30
  lwz       r12, 0x468(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r29, 0x5DC
  mr        r4, r30
  lwz       r12, 0x5DC(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  addi      r4, r31, 0x60
  bl        0x33DC8
  lwz       r3, -0x6568(r13)
  bl        -0x26C0
  lwz       r0, 0x124(r1)
  lwz       r31, 0x11C(r1)
  lwz       r30, 0x118(r1)
  lwz       r29, 0x114(r1)
  mtlr      r0
  addi      r1, r1, 0x120
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF5C4
 * Size:	000050
 */
void ebi::Omake::TMgr::newCardEMgrAndTask(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        -0x2758
  lwz       r3, -0x6568(r13)
  bl        -0x25D8
  li        r3, 0x40
  li        r4, 0x12
  li        r5, 0x4000
  li        r6, 0
  bl        -0x3C9914
  lis       r4, 0x803F
  li        r5, 0
  subi      r4, r4, 0x34C0
  li        r6, 0
  bl        -0x3C95E8
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF614
 * Size:	00003C
 */
void ebi::Omake::TMgr::start(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  li        r5, 0x1
  stw       r0, 0x14(r1)
  addi      r3, r4, 0x89C
  li        r6, 0
  lwz       r12, 0x89C(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF650
 * Size:	00003C
 */
void ebi::Omake::TMgr::goEnd_(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  li        r5, 0
  stw       r0, 0x14(r1)
  addi      r3, r4, 0x89C
  li        r6, 0
  lwz       r12, 0x89C(r4)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000084
 */
void ebi::Omake::TMgr::forceQuit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EF68C
 * Size:	000028
 */
void ebi::Omake::TMgr::isFinish(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x204
  cntlzw    r0, r3
  rlwinm    r3,r0,27,24,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF6B4
 * Size:	0000E0
 */
void ebi::Omake::TMgr::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  stb       r0, 0x890(r3)
  addi      r3, r30, 0x8
  bl        -0x1BD2C
  mr        r31, r3
  addi      r3, r30, 0x89C
  lwz       r12, 0x89C(r30)
  mr        r4, r30
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r30
  bl        0x1A0
  cmpwi     r3, 0
  beq-      .loc_0xC8
  mr        r3, r30
  bl        0x190
  cmpwi     r3, 0x4
  beq-      .loc_0xC8
  addi      r3, r30, 0x8
  lwz       r12, 0x8(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x468
  lwz       r12, 0x468(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  addi      r3, r30, 0x5DC
  lwz       r12, 0x5DC(r30)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6568(r13)
  bl        -0x26E8
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0xC8
  addi      r3, r30, 0x8
  bl        -0x1BDBC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xC8
  li        r0, 0x1
  stb       r0, 0x890(r30)

.loc_0xC8:
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
 * Address:	803EF794
 * Size:	000080
 */
void ebi::Omake::TMgr::draw(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0xF4
  cmpwi     r3, 0
  beq-      .loc_0x6C
  mr        r3, r31
  bl        0xE4
  cmpwi     r3, 0x4
  beq-      .loc_0x6C
  addi      r3, r31, 0x8
  lwz       r12, 0x8(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x468
  lwz       r12, 0x468(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0x5DC
  lwz       r12, 0x5DC(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x6C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF814
 * Size:	00002C
 */
void ebi::Omake::TMgr::isMovieState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x7C
  subfic    r0, r3, 0x4
  cntlzw    r0, r0
  rlwinm    r3,r0,27,24,31
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF840
 * Size:	000054
 */
void ebi::Omake::TMgr::restartFromMovieState(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x48
  cmpwi     r3, 0x4
  bne-      .loc_0x40
  addi      r3, r31, 0x89C
  mr        r4, r31
  lwz       r12, 0x89C(r31)
  li        r5, 0x1
  li        r6, 0
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x40:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF894
 * Size:	000008
 */
void ebi::Omake::TMgr::getMovieID(void)
{
/*
.loc_0x0:
  lwz       r3, 0x44(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00016C
 */
void ebi::Omake::TMgr::isTouchAnyKey_(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803EF89C
 * Size:	000058
 */
void ebi::Omake::TMgr::getStateID(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0x8B8(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x7AA0
  li        r4, 0x1CC
  addi      r5, r5, 0x7B24
  crclr     6, 0x6
  bl        -0x3C5294

.loc_0x3C:
  lwz       r3, 0x8B8(r31)
  lwz       r0, 0x14(r1)
  lwz       r3, 0x4(r3)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF8F4
 * Size:	000004
 */
void ebi::Omake::FSMState::do_init( (ebi::Omake::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF8F8
 * Size:	000004
 */
void ebi::Omake::FSMState::do_exec( (ebi::Omake::TMgr *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF8FC
 * Size:	000030
 */
void transit__Q24Game27FSMState<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF92C
 * Size:	000034
 */
void start__Q24Game31StateMachine<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r0, 0x8B8(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803EF960
 * Size:	000278
 */
void ebi::Screen::TOmakeGame::__dt(void)
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
  beq-      .loc_0x25C
  lis       r3, 0x804F
  addic.    r0, r30, 0x244
  subi      r0, r3, 0x5CB0
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0x244
  subi      r0, r3, 0x7618
  stw       r0, 0x244(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0x244
  subi      r0, r3, 0x77D0
  stw       r0, 0x244(r30)
  beq-      .loc_0x88
  lis       r3, 0x804D
  addic.    r0, r30, 0x244
  addi      r0, r3, 0x7F2C
  stw       r0, 0x244(r30)
  beq-      .loc_0x88
  lis       r4, 0x804D
  addi      r3, r30, 0x244
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x244(r30)
  bl        0x21BA4

.loc_0x88:
  lis       r4, 0x803D
  addi      r3, r30, 0x160
  subi      r4, r4, 0x1A4
  li        r5, 0x4C
  li        r6, 0x3
  bl        -0x32E238
  addic.    r0, r30, 0x140
  beq-      .loc_0xFC
  lis       r3, 0x804F
  addic.    r0, r30, 0x140
  subi      r0, r3, 0x77F4
  stw       r0, 0x140(r30)
  beq-      .loc_0xFC
  lis       r3, 0x804F
  addic.    r0, r30, 0x140
  subi      r0, r3, 0x77D0
  stw       r0, 0x140(r30)
  beq-      .loc_0xFC
  lis       r3, 0x804D
  addic.    r0, r30, 0x140
  addi      r0, r3, 0x7F2C
  stw       r0, 0x140(r30)
  beq-      .loc_0xFC
  lis       r4, 0x804D
  addi      r3, r30, 0x140
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x140(r30)
  bl        0x21B30

.loc_0xFC:
  addic.    r0, r30, 0x104
  beq-      .loc_0x16C
  lis       r3, 0x804F
  addic.    r0, r30, 0x124
  subi      r0, r3, 0x75F4
  stw       r0, 0x104(r30)
  beq-      .loc_0x124
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x124(r30)

.loc_0x124:
  addic.    r0, r30, 0x104
  beq-      .loc_0x16C
  lis       r3, 0x804F
  addic.    r0, r30, 0x104
  subi      r0, r3, 0x77D0
  stw       r0, 0x104(r30)
  beq-      .loc_0x16C
  lis       r3, 0x804D
  addic.    r0, r30, 0x104
  addi      r0, r3, 0x7F2C
  stw       r0, 0x104(r30)
  beq-      .loc_0x16C
  lis       r4, 0x804D
  addi      r3, r30, 0x104
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x104(r30)
  bl        0x21AC0

.loc_0x16C:
  addic.    r0, r30, 0xC8
  beq-      .loc_0x1DC
  lis       r3, 0x804F
  addic.    r0, r30, 0xE8
  subi      r0, r3, 0x75F4
  stw       r0, 0xC8(r30)
  beq-      .loc_0x194
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0xE8(r30)

.loc_0x194:
  addic.    r0, r30, 0xC8
  beq-      .loc_0x1DC
  lis       r3, 0x804F
  addic.    r0, r30, 0xC8
  subi      r0, r3, 0x77D0
  stw       r0, 0xC8(r30)
  beq-      .loc_0x1DC
  lis       r3, 0x804D
  addic.    r0, r30, 0xC8
  addi      r0, r3, 0x7F2C
  stw       r0, 0xC8(r30)
  beq-      .loc_0x1DC
  lis       r4, 0x804D
  addi      r3, r30, 0xC8
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0xC8(r30)
  bl        0x21A50

.loc_0x1DC:
  addic.    r0, r30, 0x8C
  beq-      .loc_0x24C
  lis       r3, 0x804F
  addic.    r0, r30, 0xAC
  subi      r0, r3, 0x75F4
  stw       r0, 0x8C(r30)
  beq-      .loc_0x204
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0xAC(r30)

.loc_0x204:
  addic.    r0, r30, 0x8C
  beq-      .loc_0x24C
  lis       r3, 0x804F
  addic.    r0, r30, 0x8C
  subi      r0, r3, 0x77D0
  stw       r0, 0x8C(r30)
  beq-      .loc_0x24C
  lis       r3, 0x804D
  addic.    r0, r30, 0x8C
  addi      r0, r3, 0x7F2C
  stw       r0, 0x8C(r30)
  beq-      .loc_0x24C
  lis       r4, 0x804D
  addi      r3, r30, 0x8C
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x8C(r30)
  bl        0x219E0

.loc_0x24C:
  extsh.    r0, r31
  ble-      .loc_0x25C
  mr        r3, r30
  bl        -0x3CBB04

.loc_0x25C:
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
 * Address:	803EFBD8
 * Size:	0002E4
 */
void ebi::Screen::TOmakeCardE::__dt(void)
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
  beq-      .loc_0x2C8
  lis       r3, 0x804F
  addic.    r0, r30, 0x14C
  subi      r0, r3, 0x5D00
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0x14C
  subi      r0, r3, 0x77F4
  stw       r0, 0x14C(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0x14C
  subi      r0, r3, 0x77D0
  stw       r0, 0x14C(r30)
  beq-      .loc_0x88
  lis       r3, 0x804D
  addic.    r0, r30, 0x14C
  addi      r0, r3, 0x7F2C
  stw       r0, 0x14C(r30)
  beq-      .loc_0x88
  lis       r4, 0x804D
  addi      r3, r30, 0x14C
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x14C(r30)
  bl        0x2192C

.loc_0x88:
  addic.    r0, r30, 0x110
  beq-      .loc_0xF8
  lis       r3, 0x804F
  addic.    r0, r30, 0x130
  subi      r0, r3, 0x75F4
  stw       r0, 0x110(r30)
  beq-      .loc_0xB0
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x130(r30)

.loc_0xB0:
  addic.    r0, r30, 0x110
  beq-      .loc_0xF8
  lis       r3, 0x804F
  addic.    r0, r30, 0x110
  subi      r0, r3, 0x77D0
  stw       r0, 0x110(r30)
  beq-      .loc_0xF8
  lis       r3, 0x804D
  addic.    r0, r30, 0x110
  addi      r0, r3, 0x7F2C
  stw       r0, 0x110(r30)
  beq-      .loc_0xF8
  lis       r4, 0x804D
  addi      r3, r30, 0x110
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x110(r30)
  bl        0x218BC

.loc_0xF8:
  addic.    r0, r30, 0xD4
  beq-      .loc_0x168
  lis       r3, 0x804F
  addic.    r0, r30, 0xF4
  subi      r0, r3, 0x75F4
  stw       r0, 0xD4(r30)
  beq-      .loc_0x120
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0xF4(r30)

.loc_0x120:
  addic.    r0, r30, 0xD4
  beq-      .loc_0x168
  lis       r3, 0x804F
  addic.    r0, r30, 0xD4
  subi      r0, r3, 0x77D0
  stw       r0, 0xD4(r30)
  beq-      .loc_0x168
  lis       r3, 0x804D
  addic.    r0, r30, 0xD4
  addi      r0, r3, 0x7F2C
  stw       r0, 0xD4(r30)
  beq-      .loc_0x168
  lis       r4, 0x804D
  addi      r3, r30, 0xD4
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0xD4(r30)
  bl        0x2184C

.loc_0x168:
  addic.    r0, r30, 0x98
  beq-      .loc_0x1D8
  lis       r3, 0x804F
  addic.    r0, r30, 0xB8
  subi      r0, r3, 0x75F4
  stw       r0, 0x98(r30)
  beq-      .loc_0x190
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0xB8(r30)

.loc_0x190:
  addic.    r0, r30, 0x98
  beq-      .loc_0x1D8
  lis       r3, 0x804F
  addic.    r0, r30, 0x98
  subi      r0, r3, 0x77D0
  stw       r0, 0x98(r30)
  beq-      .loc_0x1D8
  lis       r3, 0x804D
  addic.    r0, r30, 0x98
  addi      r0, r3, 0x7F2C
  stw       r0, 0x98(r30)
  beq-      .loc_0x1D8
  lis       r4, 0x804D
  addi      r3, r30, 0x98
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x98(r30)
  bl        0x217DC

.loc_0x1D8:
  addic.    r0, r30, 0x5C
  beq-      .loc_0x248
  lis       r3, 0x804F
  addic.    r0, r30, 0x7C
  subi      r0, r3, 0x75F4
  stw       r0, 0x5C(r30)
  beq-      .loc_0x200
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x7C(r30)

.loc_0x200:
  addic.    r0, r30, 0x5C
  beq-      .loc_0x248
  lis       r3, 0x804F
  addic.    r0, r30, 0x5C
  subi      r0, r3, 0x77D0
  stw       r0, 0x5C(r30)
  beq-      .loc_0x248
  lis       r3, 0x804D
  addic.    r0, r30, 0x5C
  addi      r0, r3, 0x7F2C
  stw       r0, 0x5C(r30)
  beq-      .loc_0x248
  lis       r4, 0x804D
  addi      r3, r30, 0x5C
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x5C(r30)
  bl        0x2176C

.loc_0x248:
  addic.    r0, r30, 0x20
  beq-      .loc_0x2B8
  lis       r3, 0x804F
  addic.    r0, r30, 0x40
  subi      r0, r3, 0x75F4
  stw       r0, 0x20(r30)
  beq-      .loc_0x270
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x40(r30)

.loc_0x270:
  addic.    r0, r30, 0x20
  beq-      .loc_0x2B8
  lis       r3, 0x804F
  addic.    r0, r30, 0x20
  subi      r0, r3, 0x77D0
  stw       r0, 0x20(r30)
  beq-      .loc_0x2B8
  lis       r3, 0x804D
  addic.    r0, r30, 0x20
  addi      r0, r3, 0x7F2C
  stw       r0, 0x20(r30)
  beq-      .loc_0x2B8
  lis       r4, 0x804D
  addi      r3, r30, 0x20
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x20(r30)
  bl        0x216FC

.loc_0x2B8:
  extsh.    r0, r31
  ble-      .loc_0x2C8
  mr        r3, r30
  bl        -0x3CBDE8

.loc_0x2C8:
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
 * Address:	803EFEBC
 * Size:	000208
 */
void ebi::Screen::TOmake::__dt(void)
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
  beq-      .loc_0x1EC
  lis       r3, 0x804F
  lis       r4, 0x803D
  subi      r0, r3, 0x5E4C
  li        r5, 0x4C
  stw       r0, 0x0(r30)
  addi      r3, r30, 0x1E4
  subi      r4, r4, 0x1A4
  li        r6, 0x7
  bl        -0x32E738
  addic.    r0, r30, 0x178
  beq-      .loc_0xA0
  lis       r3, 0x804F
  addic.    r0, r30, 0x178
  subi      r0, r3, 0x7618
  stw       r0, 0x178(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804F
  addic.    r0, r30, 0x178
  subi      r0, r3, 0x77D0
  stw       r0, 0x178(r30)
  beq-      .loc_0xA0
  lis       r3, 0x804D
  addic.    r0, r30, 0x178
  addi      r0, r3, 0x7F2C
  stw       r0, 0x178(r30)
  beq-      .loc_0xA0
  lis       r4, 0x804D
  addi      r3, r30, 0x178
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x178(r30)
  bl        0x21630

.loc_0xA0:
  addic.    r0, r30, 0x158
  beq-      .loc_0xFC
  lis       r3, 0x804F
  addic.    r0, r30, 0x158
  subi      r0, r3, 0x77F4
  stw       r0, 0x158(r30)
  beq-      .loc_0xFC
  lis       r3, 0x804F
  addic.    r0, r30, 0x158
  subi      r0, r3, 0x77D0
  stw       r0, 0x158(r30)
  beq-      .loc_0xFC
  lis       r3, 0x804D
  addic.    r0, r30, 0x158
  addi      r0, r3, 0x7F2C
  stw       r0, 0x158(r30)
  beq-      .loc_0xFC
  lis       r4, 0x804D
  addi      r3, r30, 0x158
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x158(r30)
  bl        0x215D4

.loc_0xFC:
  addic.    r0, r30, 0x11C
  beq-      .loc_0x16C
  lis       r3, 0x804F
  addic.    r0, r30, 0x13C
  subi      r0, r3, 0x75F4
  stw       r0, 0x11C(r30)
  beq-      .loc_0x124
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x13C(r30)

.loc_0x124:
  addic.    r0, r30, 0x11C
  beq-      .loc_0x16C
  lis       r3, 0x804F
  addic.    r0, r30, 0x11C
  subi      r0, r3, 0x77D0
  stw       r0, 0x11C(r30)
  beq-      .loc_0x16C
  lis       r3, 0x804D
  addic.    r0, r30, 0x11C
  addi      r0, r3, 0x7F2C
  stw       r0, 0x11C(r30)
  beq-      .loc_0x16C
  lis       r4, 0x804D
  addi      r3, r30, 0x11C
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x11C(r30)
  bl        0x21564

.loc_0x16C:
  addic.    r0, r30, 0xE0
  beq-      .loc_0x1DC
  lis       r3, 0x804F
  addic.    r0, r30, 0x100
  subi      r0, r3, 0x75F4
  stw       r0, 0xE0(r30)
  beq-      .loc_0x194
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x100(r30)

.loc_0x194:
  addic.    r0, r30, 0xE0
  beq-      .loc_0x1DC
  lis       r3, 0x804F
  addic.    r0, r30, 0xE0
  subi      r0, r3, 0x77D0
  stw       r0, 0xE0(r30)
  beq-      .loc_0x1DC
  lis       r3, 0x804D
  addic.    r0, r30, 0xE0
  addi      r0, r3, 0x7F2C
  stw       r0, 0xE0(r30)
  beq-      .loc_0x1DC
  lis       r4, 0x804D
  addi      r3, r30, 0xE0
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0xE0(r30)
  bl        0x214F4

.loc_0x1DC:
  extsh.    r0, r31
  ble-      .loc_0x1EC
  mr        r3, r30
  bl        -0x3CBFF0

.loc_0x1EC:
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
 * Address:	803F00C4
 * Size:	000004
 */
void init__Q24Game27FSMState<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgrPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F00C8
 * Size:	000004
 */
void exec__Q24Game27FSMState<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F00CC
 * Size:	000004
 */
void cleanup__Q24Game27FSMState<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F00D0
 * Size:	000004
 */
void resume__Q24Game27FSMState<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F00D4
 * Size:	000004
 */
void restart__Q24Game27FSMState<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F00D8
 * Size:	000004
 */
void init__Q24Game31StateMachine<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803F00DC
 * Size:	000038
 */
void exec__Q24Game31StateMachine<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0x8B8(r4)
  cmplwi    r3, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     

.loc_0x28:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803F0114
 * Size:	000064
 */
void create__Q24Game31StateMachine<ebi::Omake::TMgr>Fi(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r4, 0xC(r3)
  stw       r0, 0x8(r3)
  lwz       r0, 0xC(r3)
  rlwinm    r3,r0,2,0,29
  bl        -0x3CC190
  stw       r3, 0x4(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x3CC1A0
  stw       r3, 0x10(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x3CC1B0
  stw       r3, 0x14(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803F0178
 * Size:	00009C
 */
void transit__Q24Game31StateMachine<ebi::Omake::TMgr>FPQ33ebi5Omake4TMgriPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  rlwinm    r0,r5,2,0,29
  stmw      r27, 0xC(r1)
  mr        r27, r3
  mr        r28, r4
  mr        r29, r6
  lwz       r30, 0x8B8(r4)
  lwz       r3, 0x14(r3)
  cmplwi    r30, 0
  lwzx      r31, r3, r0
  beq-      .loc_0x50
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r30)
  stw       r0, 0x18(r27)

.loc_0x50:
  lwz       r0, 0xC(r27)
  cmpw      r31, r0
  blt-      .loc_0x60

.loc_0x5C:
  b         .loc_0x5C

.loc_0x60:
  lwz       r3, 0x4(r27)
  rlwinm    r0,r31,2,0,29
  mr        r4, r28
  mr        r5, r29
  lwzx      r3, r3, r0
  stw       r3, 0x8B8(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lmw       r27, 0xC(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	803F0214
 * Size:	000084
 */
void registerState__Q24Game31StateMachine<ebi::Omake::TMgr>FPQ24Game27FSMState<ebi::Omake::TMgr>(void)
{
/*
.loc_0x0:
  lwz       r6, 0x8(r3)
  lwz       r0, 0xC(r3)
  cmpw      r6, r0
  bgelr-    
  lwz       r5, 0x4(r3)
  rlwinm    r0,r6,2,0,29
  stwx      r4, r5, r0
  lwz       r5, 0x4(r4)
  cmpwi     r5, 0
  blt-      .loc_0x34
  lwz       r0, 0xC(r3)
  cmpw      r5, r0
  blt-      .loc_0x3C

.loc_0x34:
  li        r0, 0
  b         .loc_0x40

.loc_0x3C:
  li        r0, 0x1

.loc_0x40:
  rlwinm.   r0,r0,0,24,31
  beqlr-    
  stw       r3, 0x8(r4)
  lwz       r0, 0x8(r3)
  lwz       r6, 0x4(r4)
  lwz       r5, 0x10(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r6, r5, r0
  lwz       r0, 0x4(r4)
  lwz       r5, 0x8(r3)
  lwz       r4, 0x14(r3)
  rlwinm    r0,r0,2,0,29
  stwx      r5, r4, r0
  lwz       r4, 0x8(r3)
  addi      r0, r4, 0x1
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803F0298
 * Size:	00000C
 */
void ebi::Screen::ArgOpenOmake::getName(void)
{
/*
.loc_0x0:
  lis       r3, 0x8049
  addi      r3, r3, 0x7B30
  blr
*/
}
