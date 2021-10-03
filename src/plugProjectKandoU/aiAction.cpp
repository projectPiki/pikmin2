

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
 * Address:	80196A18
 * Size:	00001C
 */
void PikiAI::Action::__ct( (Game::Piki *))
{
/*
.loc_0x0:
  lis       r5, 0x804B
  subi      r0, r2, 0x5418
  addi      r5, r5, 0x4A6C
  stw       r5, 0x0(r3)
  stw       r4, 0x4(r3)
  stw       r0, 0x8(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	80196A34
 * Size:	000030
 */
void PikiAI::Action::getInfo( (char *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r5, 0x8(r3)
  mr        r3, r4
  subi      r4, r2, 0x5410
  crclr     6, 0x6
  bl        -0xCF618
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	80196A64
 * Size:	000280
 */
void PikiAI::Brain::__ct( (Game::Piki *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  stw       r30, 0x8(r1)
  mr        r30, r4
  stw       r0, 0x4(r3)
  li        r3, 0x38
  bl        -0x172AE0
  stw       r3, 0x0(r31)
  li        r3, 0x74
  bl        -0x172BF4
  mr.       r4, r3
  beq-      .loc_0x50
  mr        r5, r30
  li        r4, 0x1
  bl        0x62C4
  mr        r4, r3

.loc_0x50:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x28
  bl        -0x172C1C
  mr.       r4, r3
  beq-      .loc_0x78
  mr        r5, r30
  li        r4, 0x1
  bl        0x9464
  mr        r4, r3

.loc_0x78:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x68
  bl        -0x172C44
  mr.       r4, r3
  beq-      .loc_0xA0
  mr        r5, r30
  li        r4, 0x1
  bl        0xBC24
  mr        r4, r3

.loc_0xA0:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x1C
  bl        -0x172C6C
  mr.       r4, r3
  beq-      .loc_0xC4
  mr        r4, r30
  bl        0xC6BC
  mr        r4, r3

.loc_0xC4:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x44
  bl        -0x172C90
  mr.       r4, r3
  beq-      .loc_0xEC
  mr        r5, r30
  li        r4, 0x1
  bl        0xAE30
  mr        r4, r3

.loc_0xEC:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x40
  bl        -0x172CB8
  mr.       r4, r3
  beq-      .loc_0x114
  mr        r5, r30
  li        r4, 0x1
  bl        0x9A10
  mr        r4, r3

.loc_0x114:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x3C
  bl        -0x172CE0
  mr.       r4, r3
  beq-      .loc_0x13C
  mr        r5, r30
  li        r4, 0x1
  bl        0x39950
  mr        r4, r3

.loc_0x13C:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x38
  bl        -0x172D08
  mr.       r4, r3
  beq-      .loc_0x164
  mr        r5, r30
  li        r4, 0x1
  bl        0x4CAE0
  mr        r4, r3

.loc_0x164:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x48
  bl        -0x172D30
  mr.       r4, r3
  beq-      .loc_0x18C
  mr        r5, r30
  li        r4, 0x1
  bl        0x4D268
  mr        r4, r3

.loc_0x18C:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x34
  bl        -0x172D58
  mr.       r4, r3
  beq-      .loc_0x1B0
  mr        r4, r30
  bl        0x76BC4
  mr        r4, r3

.loc_0x1B0:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x3C
  bl        -0x172D7C
  mr.       r4, r3
  beq-      .loc_0x1D8
  mr        r5, r30
  li        r4, 0x1
  bl        0x7B654
  mr        r4, r3

.loc_0x1D8:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x50
  bl        -0x172DA4
  mr.       r4, r3
  beq-      .loc_0x200
  mr        r5, r30
  li        r4, 0x1
  bl        0x7BD00
  mr        r4, r3

.loc_0x200:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x30
  bl        -0x172DCC
  mr.       r4, r3
  beq-      .loc_0x228
  mr        r5, r30
  li        r4, 0x1
  bl        0xA222C
  mr        r4, r3

.loc_0x228:
  mr        r3, r31
  bl        .loc_0x280
  li        r3, 0x28
  bl        -0x172DF4
  mr.       r4, r3
  beq-      .loc_0x250
  mr        r5, r30
  li        r4, 0x1
  bl        0x98008
  mr        r4, r3

.loc_0x250:
  mr        r3, r31
  bl        .loc_0x280
  li        r0, -0x1
  mr        r3, r31
  stw       r0, 0x8(r31)
  stw       r30, 0xC(r31)
  lwz       r31, 0xC(r1)
  lwz       r30, 0x8(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x280:
*/
}

/*
 * --INFO--
 * Address:	80196CE4
 * Size:	00001C
 */
void PikiAI::Brain::addAction( (PikiAI::Action *))
{
/*
.loc_0x0:
  lwz       r6, 0x4(r3)
  lwz       r7, 0x0(r3)
  addi      r5, r6, 0x1
  rlwinm    r0,r6,2,0,29
  stw       r5, 0x4(r3)
  stwx      r4, r7, r0
  blr
*/
}

/*
 * --INFO--
 * Address:	80196D00
 * Size:	000024
 */
void PikiAI::Brain::getCurrAction(void)
{
/*
.loc_0x0:
  lwz       r0, 0x8(r3)
  cmpwi     r0, -0x1
  beq-      .loc_0x1C
  lwz       r3, 0x0(r3)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  blr       

.loc_0x1C:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	00000C
 */
void PikiAI::Brain::init(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	80196D24
 * Size:	000258
 */
void PikiAI::Brain::exec(void)
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  stw       r31, 0x2C(r1)
  stw       r30, 0x28(r1)
  mr        r30, r3
  lwz       r0, 0x8(r3)
  cmpwi     r0, -0x1
  beq-      .loc_0x34
  lwz       r3, 0x0(r30)
  rlwinm    r0,r0,2,0,29
  lwzx      r31, r3, r0
  b         .loc_0x38

.loc_0x34:
  li        r31, 0

.loc_0x38:
  cmplwi    r31, 0
  beq-      .loc_0x240
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0
  bne-      .loc_0x14C
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0xC(r1)
  addi      r4, r1, 0xC
  stb       r3, 0xD(r1)
  stb       r0, 0xC(r1)
  lwz       r3, 0xC(r30)
  bl        0x1CAAC
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x134
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x1
  beq-      .loc_0x124
  bge-      .loc_0x134
  cmpwi     r3, 0
  bge-      .loc_0xB0
  b         .loc_0x134

.loc_0xB0:
  mr        r3, r30
  bl        0x2C8
  cmplwi    r3, 0
  beq-      .loc_0x110
  lwz       r7, 0xC(r30)
  lis       r6, 0x804B
  lis       r5, 0x804B
  lis       r4, 0x804B
  stw       r3, 0x2C4(r7)
  li        r0, 0
  addi      r6, r6, 0x530
  addi      r7, r5, 0x524
  stw       r6, 0x1C(r1)
  addi      r6, r4, 0xD44
  addi      r5, r1, 0x1C
  li        r4, 0
  stw       r7, 0x1C(r1)
  stw       r3, 0x20(r1)
  mr        r3, r30
  stw       r6, 0x1C(r1)
  stb       r0, 0x24(r1)
  stb       r0, 0x25(r1)
  bl        0x168
  b         .loc_0x134

.loc_0x110:
  mr        r3, r30
  li        r4, 0x1
  li        r5, 0
  bl        0x154
  b         .loc_0x134

.loc_0x124:
  mr        r3, r30
  li        r4, 0x1
  li        r5, 0
  bl        0x140

.loc_0x134:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x240

.loc_0x14C:
  cmpwi     r3, 0x2
  bne-      .loc_0x240
  li        r3, 0
  li        r0, 0x1
  stb       r3, 0x8(r1)
  addi      r4, r1, 0x8
  stb       r3, 0x9(r1)
  stb       r0, 0x8(r1)
  lwz       r3, 0xC(r30)
  bl        0x1C9B4
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x22C
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  cmpwi     r3, 0x1
  beq-      .loc_0x21C
  bge-      .loc_0x22C
  cmpwi     r3, 0
  bge-      .loc_0x1A8
  b         .loc_0x22C

.loc_0x1A8:
  mr        r3, r30
  bl        0x1D0
  cmplwi    r3, 0
  beq-      .loc_0x208
  lwz       r7, 0xC(r30)
  lis       r6, 0x804B
  lis       r5, 0x804B
  lis       r4, 0x804B
  stw       r3, 0x2C4(r7)
  li        r0, 0
  addi      r6, r6, 0x530
  addi      r7, r5, 0x524
  stw       r6, 0x10(r1)
  addi      r6, r4, 0xD44
  addi      r5, r1, 0x10
  li        r4, 0
  stw       r7, 0x10(r1)
  stw       r3, 0x14(r1)
  mr        r3, r30
  stw       r6, 0x10(r1)
  stb       r0, 0x18(r1)
  stb       r0, 0x19(r1)
  bl        0x70
  b         .loc_0x22C

.loc_0x208:
  mr        r3, r30
  li        r4, 0x1
  li        r5, 0
  bl        0x5C
  b         .loc_0x22C

.loc_0x21C:
  mr        r3, r30
  li        r4, 0x1
  li        r5, 0
  bl        0x48

.loc_0x22C:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     

.loc_0x240:
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
 * Address:	80196F7C
 * Size:	000004
 */
void PikiAI::Action::emotion_fail(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80196F80
 * Size:	000004
 */
void PikiAI::Action::emotion_success(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	80196F84
 * Size:	000008
 */
void PikiAI::Action::getNextAIType(void)
{
/*
.loc_0x0:
  li        r3, 0
  blr
*/
}

/*
 * --INFO--
 * Address:	80196F8C
 * Size:	000008
 */
void PikiAI::Action::exec(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	80196F94
 * Size:	000100
 */
void PikiAI::Brain::start( (int, PikiAI::ActionArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  stw       r0, 0x24(r1)
  stw       r31, 0x1C(r1)
  mr        r31, r4
  stw       r30, 0x18(r1)
  mr        r30, r5
  stw       r29, 0x14(r1)
  mr        r29, r3
  lwz       r4, 0xC(r3)
  lwz       r0, 0xBC(r4)
  rlwinm.   r0,r0,0,30,30
  bne-      .loc_0x40
  li        r0, -0x1
  stw       r0, 0x8(r29)
  b         .loc_0xE4

.loc_0x40:
  lwz       r0, 0x8(r29)
  cmpwi     r0, -0x1
  beq-      .loc_0x5C
  lwz       r3, 0x0(r29)
  rlwinm    r0,r0,2,0,29
  lwzx      r3, r3, r0
  b         .loc_0x60

.loc_0x5C:
  li        r3, 0

.loc_0x60:
  cmplwi    r3, 0
  beq-      .loc_0x78
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     

.loc_0x78:
  stw       r31, 0x8(r29)
  lwz       r0, 0x8(r29)
  cmpwi     r0, -0x1
  beq-      .loc_0x98
  lwz       r3, 0x0(r29)
  rlwinm    r0,r0,2,0,29
  lwzx      r31, r3, r0
  b         .loc_0x9C

.loc_0x98:
  li        r31, 0

.loc_0x9C:
  cmplwi    r31, 0
  beq-      .loc_0xBC
  mr        r3, r31
  mr        r4, r30
  lwz       r12, 0x0(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     

.loc_0xBC:
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0xE0
  li        r3, 0
  b         .loc_0xE4

.loc_0xE0:
  li        r3, 0x1

.loc_0xE4:
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
 * Address:	80197094
 * Size:	000008
 */
void PikiAI::Action::applicable(void)
{
/*
.loc_0x0:
  li        r3, 0x1
  blr
*/
}

/*
 * --INFO--
 * Address:	8019709C
 * Size:	000004
 */
void PikiAI::Action::init( (PikiAI::ActionArg *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801970A0
 * Size:	000210
 */
void PikiAI::Brain::searchOrima(void)
{
/*
.loc_0x0:
  stwu      r1, -0xB0(r1)
  mflr      r0
  stw       r0, 0xB4(r1)
  stfd      f31, 0xA0(r1)
  psq_st    f31,0xA8(r1),0,0
  stw       r31, 0x9C(r1)
  stw       r30, 0x98(r1)
  stw       r29, 0x94(r1)
  mr        r30, r3
  addi      r3, r1, 0x20
  bl        0x972A4
  lwz       r4, 0xC(r30)
  addi      r3, r1, 0x14
  lwz       r12, 0x0(r4)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f3, 0x14(r1)
  addi      r3, r1, 0x40
  lfs       f2, 0x18(r1)
  addi      r4, r1, 0x20
  lfs       f1, 0x1C(r1)
  lfs       f0, -0x540C(r2)
  stfs      f3, 0x20(r1)
  stfs      f2, 0x24(r1)
  stfs      f1, 0x28(r1)
  stfs      f0, 0x2C(r1)
  bl        0x972D4
  lfs       f31, -0x540C(r2)
  addi      r3, r1, 0x40
  li        r31, 0
  bl        0x97340
  b         .loc_0x1D8

.loc_0x84:
  addi      r3, r1, 0x40
  bl        0x9741C
  lwz       r12, 0x0(r3)
  mr        r29, r3
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1D0
  mr        r3, r29
  lwz       r12, 0x0(r29)
  lwz       r12, 0xA8(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x1D0
  mr        r4, r29
  addi      r3, r1, 0x8
  lwz       r12, 0x0(r29)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  lfs       f1, 0x24(r1)
  lfs       f0, 0xC(r1)
  lfs       f3, 0x20(r1)
  fsubs     f4, f1, f0
  lfs       f2, 0x8(r1)
  lfs       f1, 0x28(r1)
  lfs       f0, 0x10(r1)
  fsubs     f3, f3, f2
  fmuls     f4, f4, f4
  fsubs     f2, f1, f0
  lfs       f0, -0x5408(r2)
  fmadds    f1, f3, f3, f4
  fmuls     f2, f2, f2
  fadds     f1, f2, f1
  fcmpo     cr0, f1, f0
  ble-      .loc_0x12C
  ble-      .loc_0x130
  fsqrte    f0, f1
  fmuls     f1, f0, f1
  b         .loc_0x130

.loc_0x12C:
  fmr       f1, f0

.loc_0x130:
  fcmpo     cr0, f1, f31
  bge-      .loc_0x1D0
  lwz       r4, -0x6C18(r13)
  mr        r5, r29
  lwz       r0, 0x44(r4)
  cmpwi     r0, 0x1
  bne-      .loc_0x17C
  lhz       r0, 0x2DC(r29)
  cmplwi    r0, 0
  bne-      .loc_0x16C
  lwz       r3, 0xC(r30)
  lbz       r0, 0x2B8(r3)
  cmpwi     r0, 0x1
  bne-      .loc_0x1D0
  b         .loc_0x17C

.loc_0x16C:
  lwz       r3, 0xC(r30)
  lbz       r0, 0x2B8(r3)
  cmpwi     r0, 0
  bne-      .loc_0x1D0

.loc_0x17C:
  lwz       r0, 0x278(r5)
  cmplwi    r0, 0
  beq-      .loc_0x194
  fmr       f31, f1
  mr        r31, r5
  b         .loc_0x1D0

.loc_0x194:
  lwz       r3, 0x58(r4)
  lwz       r0, 0xE4(r3)
  cmpwi     r0, 0
  bne-      .loc_0x1BC
  lhz       r0, 0x2DC(r5)
  cmplwi    r0, 0
  bne-      .loc_0x1D0
  fmr       f31, f1
  mr        r31, r5
  b         .loc_0x1D0

.loc_0x1BC:
  lhz       r0, 0x2DC(r5)
  cmplwi    r0, 0x1
  bne-      .loc_0x1D0
  fmr       f31, f1
  mr        r31, r5

.loc_0x1D0:
  addi      r3, r1, 0x40
  bl        0x9728C

.loc_0x1D8:
  addi      r3, r1, 0x40
  bl        0x972B8
  rlwinm.   r0,r3,0,24,31
  beq+      .loc_0x84
  mr        r3, r31
  psq_l     f31,0xA8(r1),0,0
  lwz       r0, 0xB4(r1)
  lfd       f31, 0xA0(r1)
  lwz       r31, 0x9C(r1)
  lwz       r30, 0x98(r1)
  lwz       r29, 0x94(r1)
  mtlr      r0
  addi      r1, r1, 0xB0
  blr
*/
}

/*
 * --INFO--
 * Address:	801972B0
 * Size:	000004
 */
void PikiAI::Action::doDirectDraw( (Graphics &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	801972B4
 * Size:	000028
 */
void __sinit_aiAction_cpp(void)
{
/*
.loc_0x0:
  lis       r4, 0x8051
  li        r0, -0x1
  lfs       f0, 0x48B0(r4)
  lis       r3, 0x804B
  stw       r0, -0x6CA8(r13)
  stfsu     f0, 0x4A60(r3)
  stfs      f0, -0x6CA4(r13)
  stfs      f0, 0x4(r3)
  stfs      f0, 0x8(r3)
  blr
*/
}
