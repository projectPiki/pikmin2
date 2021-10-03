

/*
 * --INFO--
 * Address:	........
 * Size:	0000E0
 */
void _Print(char *, ...)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020D784
 * Size:	00004C
 */
void PikiAI::ActWeed::getInfo( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  addi      r5, r1, 0x8
  lwz       r7, -0x44A0(r2)
  lhz       r0, 0x14(r3)
  mr        r3, r4
  lwz       r6, -0x449C(r2)
  subi      r4, r2, 0x4498
  stw       r7, 0x8(r1)
  rlwinm    r0,r0,2,0,29
  stw       r6, 0xC(r1)
  lwzx      r5, r5, r0
  crclr     6, 0x6
  bl        -0x146384
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8020D7D0
 * Size:	000094
 */
void PikiAI::ActWeed::__ct( (Game::Piki *))
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
  bl        -0x76DD4
  lis       r4, 0x804C
  li        r3, 0x30
  subi      r0, r4, 0x4E0
  stw       r0, 0x0(r30)
  bl        -0x1E995C
  mr.       r0, r3
  beq-      .loc_0x4C
  mr        r5, r31
  li        r4, 0x1
  bl        0xD2C
  mr        r0, r3

.loc_0x4C:
  stw       r0, 0x18(r30)
  li        r3, 0x28
  bl        -0x1E9980
  mr.       r0, r3
  beq-      .loc_0x6C
  mr        r4, r31
  bl        -0x76384
  mr        r0, r3

.loc_0x6C:
  stw       r0, 0x1C(r30)
  subi      r0, r2, 0x4490
  mr        r3, r30
  stw       r0, 0x8(r30)
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
 * Address:	8020D864
 * Size:	000170
 */
void PikiAI::ActWeed::init( (PikiAI::ActionArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  mr.       r28, r4
  lis       r4, 0x8048
  addi      r30, r4, 0x1EF8
  beq-      .loc_0x64
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r30, 0xC
  bl        -0x1431F4
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  beq-      .loc_0x64
  li        r29, 0x1

.loc_0x64:
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0x80
  addi      r3, r30, 0x18
  addi      r5, r30, 0x24
  li        r4, 0x78
  crclr     6, 0x6
  bl        -0x1E32A0

.loc_0x80:
  cmplwi    r28, 0
  bne-      .loc_0x9C
  addi      r3, r30, 0x18
  addi      r5, r30, 0x30
  li        r4, 0x7C
  crclr     6, 0x6
  bl        -0x1E32BC

.loc_0x9C:
  lwz       r0, 0x4(r28)
  stw       r0, 0xC(r31)
  lwz       r0, 0xC(r31)
  cmplwi    r0, 0
  bne-      .loc_0xC4
  addi      r3, r30, 0x18
  addi      r5, r30, 0x40
  li        r4, 0x7F
  crclr     6, 0x6
  bl        -0x1E32E4

.loc_0xC4:
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x90(r12)
  mtctr     r12
  bctrl     
  stw       r3, 0x10(r31)
  lwz       r0, 0x10(r31)
  cmplwi    r0, 0
  bne-      .loc_0xFC
  addi      r3, r30, 0x18
  addi      r5, r30, 0x54
  li        r4, 0x82
  crclr     6, 0x6
  bl        -0x1E331C

.loc_0xFC:
  li        r3, 0
  stb       r3, 0x20(r31)
  lwz       r5, 0x10(r31)
  lwz       r4, 0x4(r5)
  cmpwi     r4, -0x1
  beq-      .loc_0x120
  lwz       r0, 0x8(r5)
  cmpw      r0, r4
  bge-      .loc_0x124

.loc_0x120:
  li        r3, 0x1

.loc_0x124:
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x140
  lwz       r3, 0x8(r5)
  li        r0, 0x1
  addi      r3, r3, 0x1
  stw       r3, 0x8(r5)
  stb       r0, 0x20(r31)

.loc_0x140:
  mr        r3, r31
  bl        .loc_0x170
  mr        r3, r31
  bl        0x8C
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x170:
*/
}

/*
 * --INFO--
 * Address:	8020D9D4
 * Size:	000068
 */
void PikiAI::ActWeed::decideTarget(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  mr        r31, r3
  addi      r3, r1, 0x8
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x8(r1)
  addi      r4, r1, 0x14
  lfs       f1, 0xC(r1)
  lfs       f0, 0x10(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x10(r31)
  bl        0x119C
  stw       r3, 0x24(r31)
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000B0
 */
void PikiAI::ActWeed::initStickAttack(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8020DA3C
 * Size:	000188
 */
void PikiAI::ActWeed::initAdjust(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  stw       r0, 0x64(r1)
  stfd      f31, 0x50(r1)
  psq_st    f31,0x58(r1),0,0
  stfd      f30, 0x40(r1)
  psq_st    f30,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  stw       r30, 0x38(r1)
  stw       r29, 0x34(r1)
  stw       r28, 0x30(r1)
  mr        r28, r3
  lwz       r0, 0x24(r3)
  cmpwi     r0, -0x1
  beq-      .loc_0x158
  bl        .loc_0x188
  lwz       r29, 0x24(r28)
  li        r31, 0
  lwz       r30, 0x10(r28)
  cmpwi     r29, 0
  blt-      .loc_0x74
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x74
  li        r31, 0x1

.loc_0x74:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x98
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAC
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E3490

.loc_0x98:
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0xC(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r28)
  fmr       f31, f1
  lfs       f30, -0x4488(r2)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x24(r28)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xEC
  lfs       f30, -0x4484(r2)

.loc_0xEC:
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x530
  fadds     f1, f31, f30
  stw       r0, 0x8(r1)
  addi      r0, r3, 0x4E98
  lfs       f0, -0x4480(r2)
  li        r3, 0
  stw       r0, 0x8(r1)
  li        r0, 0x1
  addi      r4, r1, 0x8
  lfs       f2, 0x28(r28)
  stfs      f2, 0xC(r1)
  lfs       f2, 0x2C(r28)
  stfs      f2, 0x10(r1)
  lfs       f2, 0x30(r28)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  stb       r3, 0x20(r1)
  stb       r3, 0x21(r1)
  sth       r0, 0x14(r28)
  lwz       r3, 0x1C(r28)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x158:
  psq_l     f31,0x58(r1),0,0
  lfd       f31, 0x50(r1)
  psq_l     f30,0x48(r1),0,0
  lfd       f30, 0x40(r1)
  lwz       r31, 0x3C(r1)
  lwz       r30, 0x38(r1)
  lwz       r29, 0x34(r1)
  lwz       r0, 0x64(r1)
  lwz       r28, 0x30(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr       

.loc_0x188:
*/
}

/*
 * --INFO--
 * Address:	8020DBC4
 * Size:	0000D0
 */
void PikiAI::ActWeed::calcAttackPos(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  stw       r28, 0x10(r1)
  mr        r28, r3
  lwz       r29, 0x24(r3)
  cmpwi     r29, -0x1
  beq-      .loc_0xB0
  cmpwi     r29, 0
  lwz       r30, 0x10(r28)
  li        r31, 0
  blt-      .loc_0x5C
  mr        r3, r30
  lwz       r12, 0x0(r30)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x5C
  li        r31, 0x1

.loc_0x5C:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x80
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAB
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E3600

.loc_0x80:
  mr        r3, r30
  mr        r4, r29
  lwz       r12, 0x0(r30)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x4(r3)
  lfs       f2, 0x8(r3)
  lfs       f0, 0x0(r3)
  stfs      f0, 0x28(r28)
  stfs      f1, 0x2C(r28)
  stfs      f2, 0x30(r28)

.loc_0xB0:
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
 * Address:	8020DC94
 * Size:	000840
 */
void PikiAI::ActWeed::exec(void)
{
/*
.loc_0x0:
  stwu      r1, -0xF0(r1)
  mflr      r0
  stw       r0, 0xF4(r1)
  stfd      f31, 0xE0(r1)
  psq_st    f31,0xE8(r1),0,0
  stfd      f30, 0xD0(r1)
  psq_st    f30,0xD8(r1),0,0
  stw       r31, 0xCC(r1)
  stw       r30, 0xC8(r1)
  stw       r29, 0xC4(r1)
  stw       r28, 0xC0(r1)
  mr        r31, r3
  lbz       r0, 0x20(r3)
  cmplwi    r0, 0
  bne-      .loc_0x44
  li        r3, 0x2
  b         .loc_0x810

.loc_0x44:
  lwz       r0, 0xC(r31)
  cmplwi    r0, 0
  bne-      .loc_0x58
  li        r3, 0x2
  b         .loc_0x810

.loc_0x58:
  lhz       r0, 0x14(r31)
  cmpwi     r0, 0x1
  beq-      .loc_0x49C
  bge-      .loc_0x80C
  cmpwi     r0, 0
  bge-      .loc_0x74
  b         .loc_0x80C

.loc_0x74:
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x2A4
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xB4
  li        r3, 0
  b         .loc_0x810

.loc_0xB4:
  lwz       r4, 0x4(r31)
  addi      r3, r1, 0x44
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x44(r1)
  addi      r4, r1, 0x38
  lfs       f1, 0x48(r1)
  lfs       f0, 0x4C(r1)
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)
  lwz       r3, 0x10(r31)
  bl        0xE3C
  stw       r3, 0x24(r31)
  lwz       r29, 0x24(r31)
  cmpwi     r29, -0x1
  beq-      .loc_0x80C
  beq-      .loc_0x188
  cmpwi     r29, 0
  lwz       r28, 0x10(r31)
  li        r30, 0
  blt-      .loc_0x134
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x134
  li        r30, 0x1

.loc_0x134:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x158
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAB
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E37A8

.loc_0x158:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x4(r3)
  lfs       f2, 0x8(r3)
  lfs       f0, 0x0(r3)
  stfs      f0, 0x28(r31)
  stfs      f1, 0x2C(r31)
  stfs      f2, 0x30(r31)

.loc_0x188:
  lwz       r28, 0x24(r31)
  li        r30, 0
  lwz       r29, 0x10(r31)
  cmpwi     r28, 0
  blt-      .loc_0x1BC
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r28, r3
  bge-      .loc_0x1BC
  li        r30, 0x1

.loc_0x1BC:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x1E0
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAC
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E3830

.loc_0x1E0:
  mr        r3, r29
  mr        r4, r28
  lwz       r12, 0x0(r29)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0xC(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  fmr       f31, f1
  lfs       f30, -0x4488(r2)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x24(r31)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x234
  lfs       f30, -0x4484(r2)

.loc_0x234:
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x530
  fadds     f1, f31, f30
  stw       r0, 0x9C(r1)
  addi      r0, r3, 0x4E98
  lfs       f0, -0x4480(r2)
  li        r3, 0
  stw       r0, 0x9C(r1)
  li        r0, 0x1
  addi      r4, r1, 0x9C
  lfs       f2, 0x28(r31)
  stfs      f2, 0xA0(r1)
  lfs       f2, 0x2C(r31)
  stfs      f2, 0xA4(r1)
  lfs       f2, 0x30(r31)
  stfs      f2, 0xA8(r1)
  stfs      f1, 0xAC(r1)
  stfs      f0, 0xB0(r1)
  stb       r3, 0xB4(r1)
  stb       r3, 0xB5(r1)
  sth       r0, 0x14(r31)
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x80C

.loc_0x2A4:
  cmpwi     r3, 0x2
  bne-      .loc_0x80C
  lwz       r4, 0x4(r31)
  addi      r3, r1, 0x2C
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x2C(r1)
  addi      r4, r1, 0x20
  lfs       f1, 0x30(r1)
  lfs       f0, 0x34(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  lwz       r3, 0x10(r31)
  bl        0xC44
  stw       r3, 0x24(r31)
  lwz       r29, 0x24(r31)
  cmpwi     r29, -0x1
  beq-      .loc_0x80C
  beq-      .loc_0x380
  cmpwi     r29, 0
  lwz       r28, 0x10(r31)
  li        r30, 0
  blt-      .loc_0x32C
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x32C
  li        r30, 0x1

.loc_0x32C:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x350
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAB
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E39A0

.loc_0x350:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x4(r3)
  lfs       f2, 0x8(r3)
  lfs       f0, 0x0(r3)
  stfs      f0, 0x28(r31)
  stfs      f1, 0x2C(r31)
  stfs      f2, 0x30(r31)

.loc_0x380:
  lwz       r29, 0x24(r31)
  li        r30, 0
  lwz       r28, 0x10(r31)
  cmpwi     r29, 0
  blt-      .loc_0x3B4
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x3B4
  li        r30, 0x1

.loc_0x3B4:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x3D8
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAC
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E3A28

.loc_0x3D8:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0xC(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  fmr       f31, f1
  lfs       f30, -0x4488(r2)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x24(r31)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x42C
  lfs       f30, -0x4484(r2)

.loc_0x42C:
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x530
  fadds     f1, f31, f30
  stw       r0, 0x80(r1)
  addi      r0, r3, 0x4E98
  lfs       f0, -0x4480(r2)
  li        r3, 0
  stw       r0, 0x80(r1)
  li        r0, 0x1
  addi      r4, r1, 0x80
  lfs       f2, 0x28(r31)
  stfs      f2, 0x84(r1)
  lfs       f2, 0x2C(r31)
  stfs      f2, 0x88(r1)
  lfs       f2, 0x30(r31)
  stfs      f2, 0x8C(r1)
  stfs      f1, 0x90(r1)
  stfs      f0, 0x94(r1)
  stb       r3, 0x98(r1)
  stb       r3, 0x99(r1)
  sth       r0, 0x14(r31)
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x80C

.loc_0x49C:
  lwz       r0, 0x24(r31)
  cmpwi     r0, -0x1
  bne-      .loc_0x694
  lwz       r4, 0x4(r31)
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f2, 0x14(r1)
  addi      r4, r1, 0x8
  lfs       f1, 0x18(r1)
  lfs       f0, 0x1C(r1)
  stfs      f2, 0x8(r1)
  stfs      f1, 0xC(r1)
  stfs      f0, 0x10(r1)
  lwz       r3, 0x10(r31)
  bl        0xA48
  stw       r3, 0x24(r31)
  lwz       r29, 0x24(r31)
  cmpwi     r29, -0x1
  beq-      .loc_0x694
  beq-      .loc_0x57C
  cmpwi     r29, 0
  lwz       r28, 0x10(r31)
  li        r30, 0
  blt-      .loc_0x528
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x528
  li        r30, 0x1

.loc_0x528:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x54C
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAB
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E3B9C

.loc_0x54C:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x4(r3)
  lfs       f2, 0x8(r3)
  lfs       f0, 0x0(r3)
  stfs      f0, 0x28(r31)
  stfs      f1, 0x2C(r31)
  stfs      f2, 0x30(r31)

.loc_0x57C:
  lwz       r29, 0x24(r31)
  li        r30, 0
  lwz       r28, 0x10(r31)
  cmpwi     r29, 0
  blt-      .loc_0x5B0
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x5B0
  li        r30, 0x1

.loc_0x5B0:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x5D4
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAC
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E3C24

.loc_0x5D4:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r12, 0xC(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x10(r31)
  fmr       f31, f1
  lfs       f30, -0x4488(r2)
  lwz       r12, 0x0(r3)
  lwz       r4, 0x24(r31)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x628
  lfs       f30, -0x4484(r2)

.loc_0x628:
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x530
  fadds     f1, f31, f30
  stw       r0, 0x64(r1)
  addi      r0, r3, 0x4E98
  lfs       f0, -0x4480(r2)
  li        r3, 0
  stw       r0, 0x64(r1)
  li        r0, 0x1
  addi      r4, r1, 0x64
  lfs       f2, 0x28(r31)
  stfs      f2, 0x68(r1)
  lfs       f2, 0x2C(r31)
  stfs      f2, 0x6C(r1)
  lfs       f2, 0x30(r31)
  stfs      f2, 0x70(r1)
  stfs      f1, 0x74(r1)
  stfs      f0, 0x78(r1)
  stb       r3, 0x7C(r1)
  stb       r3, 0x7D(r1)
  sth       r0, 0x14(r31)
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0x694:
  lwz       r3, 0xC(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x6B8
  li        r3, 0
  b         .loc_0x810

.loc_0x6B8:
  lwz       r29, 0x24(r31)
  cmpwi     r29, -0x1
  beq-      .loc_0x748
  cmpwi     r29, 0
  lwz       r28, 0x10(r31)
  li        r30, 0
  blt-      .loc_0x6F4
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  cmpw      r29, r3
  bge-      .loc_0x6F4
  li        r30, 0x1

.loc_0x6F4:
  rlwinm.   r0,r30,0,24,31
  bne-      .loc_0x718
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x1F64
  li        r4, 0xAB
  addi      r5, r5, 0x1F1C
  crclr     6, 0x6
  bl        -0x1E3D68

.loc_0x718:
  mr        r3, r28
  mr        r4, r29
  lwz       r12, 0x0(r28)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x4(r3)
  lfs       f2, 0x8(r3)
  lfs       f0, 0x0(r3)
  stfs      f0, 0x28(r31)
  stfs      f1, 0x2C(r31)
  stfs      f2, 0x30(r31)

.loc_0x748:
  lwz       r3, 0x1C(r31)
  lfs       f0, 0x28(r31)
  stfs      f0, 0x10(r3)
  lfs       f0, 0x2C(r31)
  stfs      f0, 0x14(r3)
  lfs       f0, 0x30(r31)
  stfs      f0, 0x18(r3)
  lwz       r3, 0x1C(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x80C
  lhz       r0, 0x14(r31)
  cmplwi    r0, 0x1
  bne-      .loc_0x80C
  lwz       r3, 0x10(r31)
  lwz       r4, 0x24(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x28(r12)
  mtctr     r12
  bctrl     
  rlwinm    r4,r3,0,24,31
  lwz       r3, 0x4(r31)
  neg       r0, r4
  or        r0, r0, r4
  rlwinm    r30,r0,1,31,31
  bl        -0xC4F60
  lis       r3, 0x804B
  lwz       r6, 0x24(r31)
  lwz       r5, 0xC(r31)
  addi      r0, r3, 0x530
  lis       r3, 0x804C
  addi      r4, r1, 0x50
  stw       r0, 0x50(r1)
  subi      r0, r3, 0x4EC
  stw       r0, 0x50(r1)
  stfs      f1, 0x54(r1)
  stw       r5, 0x58(r1)
  stw       r6, 0x5C(r1)
  stw       r30, 0x60(r1)
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  sth       r0, 0x14(r31)

.loc_0x80C:
  li        r3, 0x1

.loc_0x810:
  psq_l     f31,0xE8(r1),0,0
  lfd       f31, 0xE0(r1)
  psq_l     f30,0xD8(r1),0,0
  lfd       f30, 0xD0(r1)
  lwz       r31, 0xCC(r1)
  lwz       r30, 0xC8(r1)
  lwz       r29, 0xC4(r1)
  lwz       r0, 0xF4(r1)
  lwz       r28, 0xC0(r1)
  mtlr      r0
  addi      r1, r1, 0xF0
  blr
*/
}

/*
 * --INFO--
 * Address:	8020E4D4
 * Size:	000068
 */
void PikiAI::ActWeed::cleanup(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lhz       r0, 0x14(r3)
  cmpwi     r0, 0
  beq-      .loc_0x24
  b         .loc_0x38

.loc_0x24:
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x38:
  lbz       r0, 0x20(r31)
  cmplwi    r0, 0
  beq-      .loc_0x54
  lwz       r4, 0x10(r31)
  lwz       r3, 0x8(r4)
  subi      r0, r3, 0x1
  stw       r0, 0x8(r4)

.loc_0x54:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8020E53C
 * Size:	000004
 */
void PikiAI::ActWeed::collisionCallback( (Game::Piki *, Game::CollEvent &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8020E540
 * Size:	000088
 */
void PikiAI::ActFlockAttack::__ct( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r3
  beq-      .loc_0x30
  addi      r0, r31, 0x28
  lis       r3, 0x804B
  stw       r0, 0xC(r31)
  subi      r0, r3, 0x5994
  stw       r0, 0x28(r31)

.loc_0x30:
  mr        r3, r31
  mr        r4, r5
  bl        -0x77B60
  lis       r3, 0x804C
  addi      r4, r31, 0x28
  subi      r3, r3, 0x538
  li        r0, 0
  stw       r3, 0x0(r31)
  addi      r6, r3, 0x40
  mr        r3, r31
  lwz       r5, 0xC(r31)
  stw       r6, 0x0(r5)
  lwz       r5, 0xC(r31)
  sub       r4, r4, r5
  stw       r4, 0x4(r5)
  stb       r0, 0x1C(r31)
  stw       r0, 0x14(r31)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	8020E5C8
 * Size:	000138
 */
void PikiAI::ActFlockAttack::init( (PikiAI::ActionArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r3
  stw       r30, 0x18(r1)
  stw       r29, 0x14(r1)
  li        r29, 0
  stw       r28, 0x10(r1)
  mr.       r28, r4
  lis       r4, 0x8048
  addi      r30, r4, 0x1EF8
  beq-      .loc_0x64
  mr        r3, r28
  lwz       r12, 0x0(r28)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  mr        r4, r3
  addi      r3, r30, 0x78
  bl        -0x143F58
  cntlzw    r0, r3
  rlwinm.   r0,r0,27,24,31
  beq-      .loc_0x64
  li        r29, 0x1

.loc_0x64:
  rlwinm.   r0,r29,0,24,31
  bne-      .loc_0x80
  addi      r3, r30, 0x18
  addi      r5, r30, 0x24
  li        r4, 0x114
  crclr     6, 0x6
  bl        -0x1E4004

.loc_0x80:
  li        r3, 0
  stw       r3, 0x14(r31)
  lwz       r0, 0x8(r28)
  stw       r0, 0x14(r31)
  lfs       f0, 0x4(r28)
  stfs      f0, 0x18(r31)
  lwz       r0, 0xC(r28)
  stw       r0, 0x24(r31)
  lwz       r0, 0x10(r28)
  cmpwi     r0, 0x1
  bne-      .loc_0xC0
  li        r3, 0x1
  li        r0, 0x2A
  stb       r3, 0x10(r31)
  stw       r0, 0x20(r31)
  b         .loc_0xCC

.loc_0xC0:
  li        r0, 0x2
  stw       r0, 0x20(r31)
  stb       r3, 0x10(r31)

.loc_0xCC:
  cmplwi    r31, 0
  mr        r6, r31
  beq-      .loc_0xDC
  lwz       r6, 0xC(r31)

.loc_0xDC:
  lwz       r3, 0x4(r31)
  li        r7, 0
  lwz       r4, 0x20(r31)
  lwz       r12, 0x0(r3)
  mr        r5, r4
  lwz       r12, 0x208(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  lfs       f0, -0x447C(r2)
  stb       r0, 0x1C(r31)
  lwz       r3, 0x4(r31)
  stfs      f0, 0x1E4(r3)
  stfs      f0, 0x1E8(r3)
  stfs      f0, 0x1EC(r3)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  lwz       r29, 0x14(r1)
  lwz       r28, 0x10(r1)
  lwz       r0, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr
*/
}

/*
 * --INFO--
 * Address:	8020E700
 * Size:	000324
 */
void PikiAI::ActFlockAttack::exec(void)
{
/*
.loc_0x0:
  stwu      r1, -0x90(r1)
  mflr      r0
  stw       r0, 0x94(r1)
  stw       r31, 0x8C(r1)
  mr        r31, r3
  lwz       r3, 0x14(r3)
  cmplwi    r3, 0
  bne-      .loc_0x28
  li        r3, 0
  b         .loc_0x310

.loc_0x28:
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48
  li        r3, 0
  b         .loc_0x310

.loc_0x48:
  lbz       r3, 0x1C(r31)
  rlwinm.   r0,r3,0,29,29
  beq-      .loc_0x68
  rlwinm.   r0,r3,0,27,27
  li        r3, 0x2
  beq-      .loc_0x310
  li        r3, 0
  b         .loc_0x310

.loc_0x68:
  lwz       r3, 0x4(r31)
  lwz       r4, 0x20(r31)
  bl        -0xD1844
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x84
  li        r3, 0x2
  b         .loc_0x310

.loc_0x84:
  lbz       r3, 0x1C(r31)
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x30C
  rlwinm.   r0,r3,0,28,28
  bne-      .loc_0x30C
  lis       r3, 0x804B
  lwz       r7, 0x24(r31)
  lfs       f0, 0x18(r31)
  subi      r5, r3, 0x5D00
  lwz       r6, 0x4(r31)
  lis       r3, 0x804B
  li        r0, 0
  addi      r4, r1, 0x68
  stw       r5, 0x68(r1)
  addi      r3, r3, 0x7454
  stw       r6, 0x6C(r1)
  stw       r3, 0x68(r1)
  stw       r7, 0x70(r1)
  stfs      f0, 0x74(r1)
  stb       r0, 0x78(r1)
  lwz       r3, 0x14(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1A4(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x30C
  lbz       r0, 0x10(r31)
  cmplwi    r0, 0
  bne-      .loc_0x238
  lwz       r3, 0x4(r31)
  li        r5, 0x2828
  lwz       r4, 0x14(r31)
  li        r6, 0x1
  bl        -0xC5EB8
  lwz       r3, 0x4(r31)
  bl        -0xC4834
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1AC
  lis       r3, 0x804B
  lis       r4, 0x804E
  subi      r0, r3, 0x5808
  lis       r3, 0x804B
  stw       r0, 0x44(r1)
  addi      r4, r4, 0x6A78
  li        r0, 0x149
  li        r7, 0
  stw       r4, 0x44(r1)
  addi      r6, r3, 0x4B9C
  lis       r3, 0x8051
  lis       r4, 0x804B
  sth       r0, 0x48(r1)
  addi      r5, r3, 0x41E4
  lfs       f2, 0x0(r5)
  subi      r0, r4, 0x5814
  stw       r7, 0x4C(r1)
  addi      r3, r1, 0x44
  lfs       f1, 0x4(r5)
  addi      r4, r1, 0x34
  stw       r6, 0x44(r1)
  lfs       f0, 0x8(r5)
  lwz       r5, 0x4(r31)
  lfs       f3, 0x25C(r5)
  lfs       f4, 0x260(r5)
  lfs       f5, 0x264(r5)
  stfs      f2, 0x38(r1)
  stfs      f1, 0x3C(r1)
  stfs      f0, 0x40(r1)
  stw       r0, 0x34(r1)
  stfs      f3, 0x38(r1)
  stfs      f4, 0x3C(r1)
  stfs      f5, 0x40(r1)
  bl        0x1A06E0
  b         .loc_0x2E8

.loc_0x1AC:
  lis       r3, 0x804B
  lis       r4, 0x804E
  subi      r0, r3, 0x5808
  lis       r3, 0x804B
  stw       r0, 0x28(r1)
  addi      r4, r4, 0x6A78
  li        r0, 0x148
  li        r7, 0
  stw       r4, 0x28(r1)
  addi      r6, r3, 0x4B88
  lis       r3, 0x8051
  lis       r4, 0x804B
  sth       r0, 0x2C(r1)
  addi      r5, r3, 0x41E4
  lfs       f2, 0x0(r5)
  subi      r0, r4, 0x5814
  stw       r7, 0x30(r1)
  addi      r3, r1, 0x28
  lfs       f1, 0x4(r5)
  addi      r4, r1, 0x18
  stw       r6, 0x28(r1)
  lfs       f0, 0x8(r5)
  lwz       r5, 0x4(r31)
  lfs       f3, 0x25C(r5)
  lfs       f4, 0x260(r5)
  lfs       f5, 0x264(r5)
  stfs      f2, 0x1C(r1)
  stfs      f1, 0x20(r1)
  stfs      f0, 0x24(r1)
  stw       r0, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stfs      f4, 0x20(r1)
  stfs      f5, 0x24(r1)
  bl        0x1A0654
  b         .loc_0x2E8

.loc_0x238:
  lis       r4, 0x8051
  lis       r3, 0x804B
  addi      r6, r4, 0x41E4
  li        r5, 0
  subi      r0, r3, 0x5808
  lfs       f1, 0x0(r6)
  lfs       f0, 0x4(r6)
  lis       r4, 0x804E
  lfs       f3, 0x8(r6)
  lis       r6, 0x804B
  lis       r3, 0x804C
  li        r8, 0x1E5
  subi      r10, r6, 0x5814
  li        r7, 0x146
  li        r6, 0x147
  stw       r0, 0x50(r1)
  addi      r9, r4, 0x6A50
  lfs       f2, 0x7C(r1)
  stfs      f1, 0xC(r1)
  subi      r0, r3, 0x54C
  lfs       f1, 0x80(r1)
  addi      r3, r1, 0x50
  stfs      f0, 0x10(r1)
  addi      r4, r1, 0x8
  lfs       f0, 0x84(r1)
  stfs      f3, 0x14(r1)
  stw       r9, 0x50(r1)
  stw       r10, 0x8(r1)
  stfs      f2, 0xC(r1)
  stfs      f1, 0x10(r1)
  stfs      f0, 0x14(r1)
  sth       r8, 0x54(r1)
  sth       r7, 0x56(r1)
  sth       r6, 0x58(r1)
  stw       r5, 0x5C(r1)
  stw       r5, 0x60(r1)
  stw       r5, 0x64(r1)
  stw       r0, 0x50(r1)
  bl        0x1A06EC
  lwz       r3, 0x4(r31)
  li        r5, 0x2829
  lwz       r4, 0x14(r31)
  li        r6, 0x1
  bl        -0xC6090

.loc_0x2E8:
  lbz       r0, 0x78(r1)
  cmplwi    r0, 0
  beq-      .loc_0x300
  lbz       r0, 0x1C(r31)
  ori       r0, r0, 0x10
  stb       r0, 0x1C(r31)

.loc_0x300:
  lbz       r0, 0x1C(r31)
  ori       r0, r0, 0x8
  stb       r0, 0x1C(r31)

.loc_0x30C:
  li        r3, 0x1

.loc_0x310:
  lwz       r0, 0x94(r1)
  lwz       r31, 0x8C(r1)
  mtlr      r0
  addi      r1, r1, 0x90
  blr
*/
}

/*
 * --INFO--
 * Address:	8020EA24
 * Size:	000064
 */
void PikiAI::ActFlockAttack::onKeyEvent( (SysShape::KeyEvent const &))
{
/*
.loc_0x0:
  lwz       r0, 0x1C(r4)
  cmpwi     r0, 0x3
  beq-      .loc_0x38
  bge-      .loc_0x1C
  cmpwi     r0, 0x2
  bge-      .loc_0x28
  blr       

.loc_0x1C:
  cmpwi     r0, 0x3E8
  beq-      .loc_0x54
  blr       

.loc_0x28:
  lbz       r0, 0x1C(r3)
  ori       r0, r0, 0x1
  stb       r0, 0x1C(r3)
  blr       

.loc_0x38:
  lbz       r0, 0x1C(r3)
  rlwinm    r0,r0,0,24,30
  stb       r0, 0x1C(r3)
  lbz       r0, 0x1C(r3)
  rlwinm    r0,r0,0,29,27
  stb       r0, 0x1C(r3)
  blr       

.loc_0x54:
  lbz       r0, 0x1C(r3)
  ori       r0, r0, 0x4
  stb       r0, 0x1C(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8020EA88
 * Size:	00000C
 */
void PikiAI::ActFlockAttack::cleanup(void)
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8020EA94
 * Size:	00000C
 */
void PikiAI::FlockAttackActionArg::getName(void)
{
/*
.loc_0x0:
  lis       r3, 0x8048
  addi      r3, r3, 0x1F70
  blr
*/
}

/*
 * --INFO--
 * Address:	8020EAA0
 * Size:	000028
 */
void __sinit_aiWeed_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804C
  stw       r0, -0x6AB8(r13)
  stfsu     f0, -0x558(r3)
  stfs      f0, -0x6AB4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8020EAC8
 * Size:	000014
 */
void @40@4@PikiAI::ActFlockAttack::onKeyEvent( (SysShape::KeyEvent const &))
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x28
  b         -0xB4
*/
}
