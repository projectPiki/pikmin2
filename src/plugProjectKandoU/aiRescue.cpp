

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
 * Address:	80238EB0
 * Size:	0000B8
 */
void PikiAI::ActRescue::__ct( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  extsh.    r0, r4
  stw       r31, 0xC(r1)
  mr        r31, r5
  stw       r30, 0x8(r1)
  mr        r30, r3
  beq-      .loc_0x38
  addi      r0, r30, 0x28
  lis       r3, 0x804B
  stw       r0, 0xC(r30)
  subi      r0, r3, 0x5994
  stw       r0, 0x28(r30)

.loc_0x38:
  mr        r3, r30
  mr        r4, r31
  bl        -0xA24D8
  lis       r3, 0x804C
  addi      r5, r30, 0x28
  addi      r3, r3, 0x1544
  li        r4, 0
  stw       r3, 0x0(r30)
  addi      r7, r3, 0x40
  subi      r0, r2, 0x3E70
  li        r3, 0x28
  lwz       r6, 0xC(r30)
  stw       r7, 0x0(r6)
  lwz       r6, 0xC(r30)
  sub       r5, r5, r6
  stw       r5, 0x4(r6)
  stb       r4, 0x14(r30)
  stw       r0, 0x8(r30)
  bl        -0x21508C
  mr.       r0, r3
  beq-      .loc_0x98
  mr        r4, r31
  bl        -0xA1A90
  mr        r0, r3

.loc_0x98:
  stw       r0, 0x18(r30)
  mr        r3, r30
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
 * Address:	80238F68
 * Size:	0000C4
 */
void PikiAI::ActRescue::init( (PikiAI::ActionArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr.       r30, r4
  stw       r29, 0x14(r1)
  mr        r29, r3
  bne-      .loc_0x40
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3CDC
  li        r4, 0x2E
  addi      r5, r5, 0x3CEC
  crclr     6, 0x6
  bl        -0x20E964

.loc_0x40:
  lwz       r3, 0x4(r30)
  li        r31, 0
  cmplwi    r3, 0
  beq-      .loc_0x6C
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x6C
  li        r31, 0x1

.loc_0x6C:
  rlwinm.   r0,r31,0,24,31
  bne-      .loc_0x90
  lis       r3, 0x8048
  lis       r5, 0x8048
  addi      r3, r3, 0x3CDC
  li        r4, 0x30
  addi      r5, r5, 0x3CEC
  crclr     6, 0x6
  bl        -0x20E9B4

.loc_0x90:
  lwz       r4, 0x4(r30)
  li        r0, 0
  mr        r3, r29
  stw       r4, 0x1C(r29)
  stw       r0, 0x20(r29)
  bl        0x80
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
 * Address:	8023902C
 * Size:	000060
 */
void PikiAI::ActRescue::exec(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r0, 0x10(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x3C
  bge-      .loc_0x28
  cmpwi     r0, 0
  bge-      .loc_0x34
  b         .loc_0x4C

.loc_0x28:
  cmpwi     r0, 0x3
  bge-      .loc_0x4C
  b         .loc_0x44

.loc_0x34:
  bl        0xD8
  b         .loc_0x50

.loc_0x3C:
  bl        0x35C
  b         .loc_0x50

.loc_0x44:
  bl        0x578
  b         .loc_0x50

.loc_0x4C:
  li        r3, 0x1

.loc_0x50:
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	0000C0
 */
void PikiAI::ActRescue::checkPikmin(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	8023908C
 * Size:	0000AC
 */
void PikiAI::ActRescue::initApproach(void)
{
/*
.loc_0x0:
  stwu      r1, -0x40(r1)
  mflr      r0
  stw       r0, 0x44(r1)
  li        r0, 0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  stw       r0, 0x10(r3)
  addi      r3, r1, 0x8
  lwz       r4, 0x1C(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lis       r3, 0x804B
  li        r0, 0
  addi      r4, r3, 0x530
  lfs       f4, 0x8(r1)
  lfs       f3, 0xC(r1)
  lis       r3, 0x804B
  lfs       f2, 0x10(r1)
  addi      r3, r3, 0x4E98
  stw       r4, 0x14(r1)
  addi      r4, r1, 0x14
  lfs       f1, -0x3E68(r2)
  lfs       f0, -0x3E64(r2)
  stw       r3, 0x14(r1)
  stfs      f4, 0x18(r1)
  stfs      f3, 0x1C(r1)
  stfs      f2, 0x20(r1)
  stfs      f1, 0x24(r1)
  stfs      f0, 0x28(r1)
  stb       r0, 0x2C(r1)
  stb       r0, 0x2D(r1)
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x44(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x40
  blr
*/
}

/*
 * --INFO--
 * Address:	80239138
 * Size:	00013C
 */
void PikiAI::ActRescue::execApproach(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lwz       r3, 0x1C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x3C
  li        r3, 0x2
  b         .loc_0xA8

.loc_0x3C:
  lwz       r3, 0x1C(r30)
  bl        -0xF0244
  mr        r31, r3
  cmpwi     r31, 0x5
  beq-      .loc_0x7C
  cmpwi     r31, 0xA
  beq-      .loc_0x7C
  lwz       r3, 0x1C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x7C
  li        r3, 0
  b         .loc_0xA8

.loc_0x7C:
  cmpwi     r31, 0x5
  bne-      .loc_0xA4
  lwz       r3, 0x1C(r30)
  lwz       r0, 0x4(r30)
  lwz       r3, 0x290(r3)
  lwz       r3, 0x14(r3)
  cmplw     r3, r0
  beq-      .loc_0xA4
  li        r3, 0
  b         .loc_0xA8

.loc_0xA4:
  li        r3, 0x1

.loc_0xA8:
  cmpwi     r3, 0x1
  beq-      .loc_0xB4
  b         .loc_0x124

.loc_0xB4:
  lwz       r4, 0x1C(r30)
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0xC(r1)
  lfs       f2, 0x10(r1)
  lwz       r3, 0x18(r30)
  lfs       f0, 0x8(r1)
  stfs      f0, 0x10(r3)
  stfs      f1, 0x14(r3)
  stfs      f2, 0x18(r3)
  lwz       r3, 0x18(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x110
  mr        r3, r30
  bl        .loc_0x13C
  b         .loc_0x120

.loc_0x110:
  cmpwi     r3, 0x2
  bne-      .loc_0x120
  li        r3, 0x2
  b         .loc_0x124

.loc_0x120:
  li        r3, 0x1

.loc_0x124:
  lwz       r0, 0x24(r1)
  lwz       r31, 0x1C(r1)
  lwz       r30, 0x18(r1)
  mtlr      r0
  addi      r1, r1, 0x20
  blr       

.loc_0x13C:
*/
}

/*
 * --INFO--
 * Address:	80239274
 * Size:	000150
 */
void PikiAI::ActRescue::initGo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x60(r1)
  mflr      r0
  lis       r4, 0x804C
  stw       r0, 0x64(r1)
  li        r0, 0x1
  stw       r31, 0x5C(r1)
  mr        r31, r3
  lis       r3, 0x804B
  stw       r0, 0x10(r31)
  addi      r0, r3, 0x1F64
  lis       r3, 0x804B
  stw       r0, 0xC(r1)
  addi      r0, r3, 0x1F58
  addi      r3, r1, 0x10
  stw       r0, 0xC(r1)
  addi      r0, r4, 0x1538
  stw       r0, 0xC(r1)
  lwz       r4, 0x1C(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x10(r1)
  addi      r5, r1, 0xC
  lfs       f2, 0x14(r1)
  li        r0, 0
  lfs       f1, 0x18(r1)
  addi      r4, r1, 0x38
  lfs       f0, -0x3E68(r2)
  stfs      f3, 0x38(r1)
  lwz       r3, -0x6CF8(r13)
  stfs      f2, 0x3C(r1)
  stfs      f1, 0x40(r1)
  stw       r5, 0x44(r1)
  stb       r0, 0x48(r1)
  stfs      f0, 0x4C(r1)
  lwz       r3, 0x8(r3)
  bl        -0xC6344
  stw       r3, 0x20(r31)
  lwz       r5, 0x20(r31)
  cmplwi    r5, 0
  beq-      .loc_0x134
  lis       r4, 0x804B
  lis       r3, 0x804B
  addi      r0, r4, 0x530
  lfs       f1, -0x3E60(r2)
  stw       r0, 0x1C(r1)
  addi      r3, r3, 0x4E98
  lfs       f0, -0x3E64(r2)
  li        r0, 0
  stw       r3, 0x1C(r1)
  addi      r4, r1, 0x1C
  lfs       f2, 0x4C(r5)
  stfs      f2, 0x20(r1)
  lfs       f2, 0x50(r5)
  stfs      f2, 0x24(r1)
  lfs       f2, 0x54(r5)
  stfs      f2, 0x28(r1)
  stfs      f1, 0x2C(r1)
  stfs      f0, 0x30(r1)
  stb       r0, 0x34(r1)
  stb       r0, 0x35(r1)
  lwz       r3, 0x18(r31)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x4(r31)
  addi      r6, r1, 0x8
  li        r5, 0x5
  stw       r0, 0x8(r1)
  lwz       r4, 0x1C(r31)
  lwz       r3, 0x28C(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     

.loc_0x134:
  li        r0, 0x64
  stb       r0, 0x24(r31)
  lwz       r0, 0x64(r1)
  lwz       r31, 0x5C(r1)
  mtlr      r0
  addi      r1, r1, 0x60
  blr
*/
}

/*
 * --INFO--
 * Address:	802393C4
 * Size:	0001C0
 */
void PikiAI::ActRescue::execGo(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  lis       r4, 0x8048
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  addi      r31, r4, 0x3CD0
  stw       r30, 0x28(r1)
  mr        r30, r3
  stw       r29, 0x24(r1)
  lwz       r3, 0x1C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x48
  li        r3, 0x2
  b         .loc_0xB4

.loc_0x48:
  lwz       r3, 0x1C(r30)
  bl        -0xF04DC
  mr        r29, r3
  cmpwi     r29, 0x5
  beq-      .loc_0x88
  cmpwi     r29, 0xA
  beq-      .loc_0x88
  lwz       r3, 0x1C(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x8C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x88
  li        r3, 0
  b         .loc_0xB4

.loc_0x88:
  cmpwi     r29, 0x5
  bne-      .loc_0xB0
  lwz       r3, 0x1C(r30)
  lwz       r0, 0x4(r30)
  lwz       r3, 0x290(r3)
  lwz       r3, 0x14(r3)
  cmplw     r3, r0
  beq-      .loc_0xB0
  li        r3, 0
  b         .loc_0xB4

.loc_0xB0:
  li        r3, 0x1

.loc_0xB4:
  cmpwi     r3, 0x1
  beq-      .loc_0xC0
  b         .loc_0x1A4

.loc_0xC0:
  lwz       r0, 0x20(r30)
  cmplwi    r0, 0
  bne-      .loc_0xD4
  li        r3, 0x2
  b         .loc_0x1A4

.loc_0xD4:
  lwz       r3, 0x18(r30)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lbz       r4, 0x24(r30)
  subi      r4, r4, 0x1
  rlwinm.   r0,r4,0,24,31
  stb       r4, 0x24(r30)
  bne-      .loc_0x100
  li        r3, 0

.loc_0x100:
  cmpwi     r3, 0
  bne-      .loc_0x114
  mr        r3, r30
  bl        .loc_0x1C0
  b         .loc_0x124

.loc_0x114:
  cmpwi     r3, 0x2
  bne-      .loc_0x124
  li        r3, 0x2
  b         .loc_0x1A4

.loc_0x124:
  lwz       r3, 0x4(r30)
  addi      r4, r31, 0x28
  lwz       r3, 0x174(r3)
  bl        0x205AF0
  mr.       r29, r3
  bne-      .loc_0x150
  addi      r3, r31, 0xC
  addi      r5, r31, 0x1C
  li        r4, 0xDC
  crclr     6, 0x6
  bl        -0x20EED0

.loc_0x150:
  lfs       f0, -0x3E58(r2)
  mr        r3, r29
  lfs       f1, -0x3E5C(r2)
  stfs      f0, 0x18(r1)
  stfs      f1, 0x14(r1)
  stfs      f0, 0x1C(r1)
  bl        0x1F0374
  addi      r4, r1, 0x14
  addi      r5, r1, 0x8
  bl        -0x14E960
  lfs       f2, 0x8(r1)
  addi      r4, r1, 0x14
  lfs       f1, 0xC(r1)
  li        r5, 0
  lfs       f0, 0x10(r1)
  stfs      f2, 0x14(r1)
  stfs      f1, 0x18(r1)
  stfs      f0, 0x1C(r1)
  lwz       r3, 0x1C(r30)
  bl        -0xFE3B8
  li        r3, 0x1

.loc_0x1A4:
  lwz       r0, 0x34(r1)
  lwz       r31, 0x2C(r1)
  lwz       r30, 0x28(r1)
  lwz       r29, 0x24(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr       

.loc_0x1C0:
*/
}

/*
 * --INFO--
 * Address:	80239584
 * Size:	000064
 */
void PikiAI::ActRescue::initThrow(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0x2
  stw       r31, 0xC(r1)
  mr.       r31, r3
  stw       r0, 0x10(r3)
  mr        r6, r31
  beq-      .loc_0x28
  lwz       r6, 0xC(r31)

.loc_0x28:
  lwz       r3, 0x4(r31)
  li        r4, 0x21
  li        r5, 0x21
  li        r7, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x208(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  stb       r0, 0x14(r31)
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	802395E8
 * Size:	000278
 */
void PikiAI::ActRescue::execThrow(void)
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
  stfd      f28, 0x40(r1)
  psq_st    f28,0x48(r1),0,0
  stw       r31, 0x3C(r1)
  mr        r31, r3
  li        r4, 0x21
  lwz       r3, 0x4(r3)
  bl        -0xFC6F8
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x50
  li        r3, 0x2
  b         .loc_0x244

.loc_0x50:
  lbz       r3, 0x14(r31)
  rlwinm.   r0,r3,0,31,31
  beq-      .loc_0x230
  lwz       r3, 0x1C(r31)
  li        r4, 0x1
  li        r5, 0
  lwz       r3, 0x294(r3)
  bl        -0xA26C0
  lwz       r4, 0x1C(r31)
  li        r5, 0x6
  li        r6, 0
  lwz       r3, 0x28C(r4)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  li        r0, 0
  addi      r3, r1, 0x8
  stb       r0, 0x14(r31)
  lwz       r4, 0x4(r31)
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0x20(r31)
  lfs       f0, 0x10(r1)
  lfs       f2, 0x54(r3)
  lfs       f1, 0x4C(r3)
  fsubs     f2, f2, f0
  lfs       f0, 0x8(r1)
  lfs       f4, 0x50(r3)
  lfs       f3, 0xC(r1)
  fsubs     f1, f1, f0
  fmuls     f5, f2, f2
  lfs       f0, -0x3E58(r2)
  fsubs     f29, f4, f3
  fmadds    f30, f1, f1, f5
  fcmpo     cr0, f30, f0
  ble-      .loc_0xFC
  ble-      .loc_0x100
  fsqrte    f0, f30
  fmuls     f30, f0, f30
  b         .loc_0x100

.loc_0xFC:
  fmr       f30, f0

.loc_0x100:
  lis       r3, 0x8051
  subi      r3, r3, 0x2E20
  bl        -0x2045E8
  fmr       f31, f1
  bl        0x1D84D8
  lwz       r3, 0x1C(r31)
  fabs      f29, f29
  lfs       f28, -0x3E54(r2)
  stfs      f1, 0x1FC(r3)
  lwz       r3, 0x1C(r31)
  bl        -0xF012C
  frsp      f2, f29
  lwz       r5, 0x1C(r31)
  lfs       f0, -0x3E50(r2)
  lbz       r0, 0x2B8(r5)
  fadds     f1, f1, f2
  cmpwi     r0, 0x3
  fadds     f2, f0, f1
  bne-      .loc_0x154
  lfs       f0, -0x3E54(r2)
  fmuls     f28, f28, f0

.loc_0x154:
  lfs       f1, -0x3E4C(r2)
  fdivs     f2, f2, f28
  lwz       r3, -0x6C10(r13)
  lfs       f0, -0x3E58(r2)
  lfs       f4, -0x3E54(r2)
  lfs       f3, 0x28(r3)
  fmuls     f1, f1, f28
  fmuls     f3, f4, f3
  fmr       f4, f31
  fdivs     f5, f30, f1
  fcmpo     cr0, f31, f0
  fmadds    f3, f28, f3, f2
  bge-      .loc_0x18C
  fneg      f4, f31

.loc_0x18C:
  lfs       f2, -0x3E48(r2)
  lis       r3, 0x8050
  lfs       f0, -0x3E58(r2)
  addi      r4, r3, 0x71A0
  fmuls     f1, f4, f2
  fcmpo     cr0, f31, f0
  fctiwz    f0, f1
  stfd      f0, 0x18(r1)
  lwz       r0, 0x1C(r1)
  rlwinm    r0,r0,3,18,28
  add       r3, r4, r0
  lfs       f0, 0x4(r3)
  fmuls     f1, f5, f0
  bge-      .loc_0x1E8
  lfs       f0, -0x3E44(r2)
  fmuls     f0, f31, f0
  fctiwz    f0, f0
  stfd      f0, 0x20(r1)
  lwz       r0, 0x24(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0
  fneg      f0, f0
  b         .loc_0x200

.loc_0x1E8:
  fmuls     f0, f31, f2
  fctiwz    f0, f0
  stfd      f0, 0x28(r1)
  lwz       r0, 0x2C(r1)
  rlwinm    r0,r0,3,18,28
  lfsx      f0, r4, r0

.loc_0x200:
  fmuls     f0, f5, f0
  stfs      f0, 0x200(r5)
  stfs      f3, 0x204(r5)
  stfs      f1, 0x208(r5)
  lwz       r3, 0x1C(r31)
  lfs       f0, 0x200(r3)
  stfs      f0, 0x1E4(r3)
  lfs       f0, 0x204(r3)
  stfs      f0, 0x1E8(r3)
  lfs       f0, 0x208(r3)
  stfs      f0, 0x1EC(r3)
  b         .loc_0x240

.loc_0x230:
  rlwinm.   r0,r3,0,30,30
  beq-      .loc_0x240
  li        r3, 0
  b         .loc_0x244

.loc_0x240:
  li        r3, 0x1

.loc_0x244:
  psq_l     f31,0x78(r1),0,0
  lfd       f31, 0x70(r1)
  psq_l     f30,0x68(r1),0,0
  lfd       f30, 0x60(r1)
  psq_l     f29,0x58(r1),0,0
  lfd       f29, 0x50(r1)
  psq_l     f28,0x48(r1),0,0
  lfd       f28, 0x40(r1)
  lwz       r0, 0x84(r1)
  lwz       r31, 0x3C(r1)
  mtlr      r0
  addi      r1, r1, 0x80
  blr
*/
}

/*
 * --INFO--
 * Address:	80239860
 * Size:	00002C
 */
void PikiAI::ActRescue::onKeyEvent( (SysShape::KeyEvent const &))
{
/*
.loc_0x0:
  lwz       r0, 0x1C(r4)
  cmplwi    r0, 0x2
  bne-      .loc_0x1C
  lbz       r0, 0x14(r3)
  ori       r0, r0, 0x1
  stb       r0, 0x14(r3)
  blr       

.loc_0x1C:
  lbz       r0, 0x14(r3)
  ori       r0, r0, 0x2
  stb       r0, 0x14(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	8023988C
 * Size:	000004
 */
void PikiAI::ActRescue::emotion_success(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80239890
 * Size:	000004
 */
void PikiAI::ActRescue::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80239894
 * Size:	000004
 */
void PikiAI::ActRescue::cleanup(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80239898
 * Size:	000004
 */
void PikiAI::ActRescue::collisionCallback( (Game::Piki *, Game::CollEvent &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	8023989C
 * Size:	000020
 */
void WPFindCond::satisfy(Game::WayPoint *)
{
/*
.loc_0x0:
  lbz       r4, 0x34(r4)
  li        r3, 0
  rlwinm.   r0,r4,0,30,30
  bnelr-    
  rlwinm.   r0,r4,0,31,31
  bnelr-    
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	802398BC
 * Size:	000008
 */
void PikiAI::ActRescue::getNextAIType(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	802398C4
 * Size:	000014
 */
void @40@4@PikiAI::ActRescue::onKeyEvent( (SysShape::KeyEvent const &))
{
/*
.loc_0x0:
  li        r11, 0x4
  lwzx      r11, r3, r11
  add       r3, r3, r11
  subi      r3, r3, 0x28
  b         -0x74
*/
}
