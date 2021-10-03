

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
 * Address:	803CE8F8
 * Size:	0002D8
 */
void ebi::Option::FSMStateMachine::init( (ebi::Option::TMgr *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  addi      r31, r4, 0x65A0
  li        r4, 0x8
  stw       r30, 0x8(r1)
  mr        r30, r3
  bl        0x1BEC
  li        r3, 0x10
  bl        -0x3AAA80
  mr.       r4, r3
  beq-      .loc_0x64
  lis       r5, 0x804F
  lis       r3, 0x804F
  subi      r0, r5, 0x7654
  li        r5, 0
  stw       r0, 0x0(r4)
  subi      r3, r3, 0x767C
  addi      r0, r2, 0x1718
  stw       r5, 0x4(r4)
  stw       r5, 0x8(r4)
  stw       r3, 0x0(r4)
  stw       r0, 0xC(r4)

.loc_0x64:
  mr        r3, r30
  bl        0x1CA8
  li        r3, 0x14
  bl        -0x3AAAC4
  mr.       r4, r3
  beq-      .loc_0xB8
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x7654
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x1
  li        r7, 0
  subi      r6, r5, 0x767C
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x10
  subi      r0, r3, 0x776C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0xB8:
  mr        r3, r30
  bl        0x1C54
  li        r3, 0x10
  bl        -0x3AAB18
  mr.       r4, r3
  beq-      .loc_0x10C
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x7654
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x2
  li        r7, 0
  subi      r6, r5, 0x767C
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x1C
  subi      r0, r3, 0x76A4
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x10C:
  mr        r3, r30
  bl        0x1C00
  li        r3, 0x10
  bl        -0x3AAB6C
  mr.       r4, r3
  beq-      .loc_0x160
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x7654
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x3
  li        r7, 0
  subi      r6, r5, 0x767C
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x28
  subi      r0, r3, 0x76CC
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x160:
  mr        r3, r30
  bl        0x1BAC
  li        r3, 0x10
  bl        -0x3AABC0
  mr.       r4, r3
  beq-      .loc_0x1B4
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x7654
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x4
  li        r7, 0
  subi      r6, r5, 0x767C
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x34
  subi      r0, r3, 0x76F4
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x1B4:
  mr        r3, r30
  bl        0x1B58
  li        r3, 0x10
  bl        -0x3AAC14
  mr.       r4, r3
  beq-      .loc_0x208
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x7654
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x5
  li        r7, 0
  subi      r6, r5, 0x767C
  stw       r0, 0x4(r4)
  addi      r5, r2, 0x1720
  subi      r0, r3, 0x7794
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x208:
  mr        r3, r30
  bl        0x1B04
  li        r3, 0x18
  bl        -0x3AAC68
  mr.       r4, r3
  beq-      .loc_0x264
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x7654
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x6
  li        r7, 0
  subi      r6, r5, 0x767C
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x40
  subi      r0, r3, 0x771C
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)
  stw       r7, 0x10(r4)
  stw       r7, 0x14(r4)

.loc_0x264:
  mr        r3, r30
  bl        0x1AA8
  li        r3, 0x10
  bl        -0x3AACC4
  mr.       r4, r3
  beq-      .loc_0x2B8
  lis       r3, 0x804F
  lis       r5, 0x804F
  subi      r0, r3, 0x7654
  lis       r3, 0x804F
  stw       r0, 0x0(r4)
  li        r0, 0x7
  li        r7, 0
  subi      r6, r5, 0x767C
  stw       r0, 0x4(r4)
  addi      r5, r31, 0x54
  subi      r0, r3, 0x7744
  stw       r7, 0x8(r4)
  stw       r6, 0x0(r4)
  stw       r5, 0xC(r4)
  stw       r0, 0x0(r4)

.loc_0x2B8:
  mr        r3, r30
  bl        0x1A54
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
 * Address:	803CEBD0
 * Size:	00002C
 */
void ebi::Option::FSMState::init( (ebi::Option::TMgr *, Game::StateArg *))
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
 * Address:	803CEBFC
 * Size:	000004
 */
void ebi::Option::FSMState::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803CEC00
 * Size:	00002C
 */
void ebi::Option::FSMState::exec( (ebi::Option::TMgr *))
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
 * Address:	803CEC2C
 * Size:	000004
 */
void ebi::Option::FSMState::do_exec( (ebi::Option::TMgr *))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803CEC30
 * Size:	000050
 */
void ebi::Option::FSMState_ScreenOpen::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  addi      r3, r31, 0xC8
  bl        -0x3E80
  addi      r3, r31, 0xDC
  bl        -0x3E88
  mr        r3, r31
  li        r4, 0
  lwz       r12, 0x0(r31)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803CEC80
 * Size:	000064
 */
void ebi::Option::FSMState_ScreenOpen::do_exec( (ebi::Option::TMgr *))
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
  bl        0x4CF8
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x4C
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x4C:
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
 * Address:	803CECE4
 * Size:	000030
 */
void transit__Q24Game28FSMState<ebi::Option::TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg(void)
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
 * Address:	803CED14
 * Size:	00000C
 */
void ebi::Option::FSMState_ScreenWait::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  li        r0, 0x1
  stb       r0, 0x10(r4)
  blr
*/
}

/*
 * --INFO--
 * Address:	803CED20
 * Size:	000144
 */
void ebi::Option::FSMState_ScreenWait::do_exec( (ebi::Option::TMgr *))
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
  lwz       r0, 0xC4(r4)
  cmpwi     r0, 0x8
  beq-      .loc_0x50
  bge-      .loc_0x44
  cmpwi     r0, 0x7
  bge-      .loc_0x5C
  cmpwi     r0, 0x1
  bge-      .loc_0x50
  b         .loc_0x128

.loc_0x44:
  cmpwi     r0, 0xA
  bge-      .loc_0x128
  b         .loc_0x108

.loc_0x50:
  addi      r3, r30, 0xC8
  bl        -0x3EAC
  b         .loc_0x128

.loc_0x5C:
  addi      r3, r30, 0xC8
  bl        -0x3EB8
  li        r31, 0
  stb       r31, 0x10(r30)
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x5C(r3)
  lwz       r0, 0xA8(r3)
  cmpwi     r0, 0
  bne-      .loc_0x90
  bl        0x7221C
  cmplwi    r3, 0xB
  beq-      .loc_0x90
  li        r31, 0x1

.loc_0x90:
  rlwinm.   r0,r31,0,24,31
  beq-      .loc_0xB4
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x5C(r3)
  bl        0x76D4C
  cmpwi     r3, 0
  bne-      .loc_0xB4
  li        r0, 0x1
  b         .loc_0xB8

.loc_0xB4:
  li        r0, 0

.loc_0xB8:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0xE4
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  li        r5, 0x6
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x128

.loc_0xE4:
  mr        r3, r29
  mr        r4, r30
  lwz       r12, 0x0(r29)
  li        r5, 0x5
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x128

.loc_0x108:
  li        r0, 0
  li        r5, 0x7
  stb       r0, 0x10(r30)
  li        r6, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x128:
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
 * Address:	803CEE64
 * Size:	00003C
 */
void ebi::Option::FSMState_ScreenClose::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r3, r4
  stw       r0, 0x14(r1)
  li        r0, 0x1
  stb       r0, 0xF20(r4)
  li        r4, 0
  lwz       r12, 0x0(r3)
  lwz       r12, 0x10(r12)
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
 * Address:	803CEEA0
 * Size:	00004C
 */
void ebi::Option::FSMState_ScreenClose::do_exec( (ebi::Option::TMgr *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x20(r12)
  mtctr     r12
  bctrl     
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x38
  mr        r3, r31
  bl        0x1324

.loc_0x38:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803CEEEC
 * Size:	000044
 */
void ebi::Option::FSMState_WaitCloseForNoCard::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lfs       f1, 0x1728(r2)
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r4, -0x6514(r13)
  lfs       f0, 0x54(r4)
  fdivs     f1, f1, f0
  bl        -0x30D3C4
  stw       r3, 0x10(r31)
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
 * Address:	803CEF30
 * Size:	000084
 */
void ebi::Option::FSMState_WaitCloseForNoCard::do_exec( (ebi::Option::TMgr *))
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
  lwz       r3, 0x10(r3)
  cmplwi    r3, 0
  beq-      .loc_0x30
  subi      r0, r3, 0x1
  stw       r0, 0x10(r30)

.loc_0x30:
  lwz       r0, 0x10(r30)
  cmplwi    r0, 0
  bne-      .loc_0x6C
  lwz       r3, -0x67A8(r13)
  li        r4, 0x180C
  li        r5, 0
  bl        -0x96948
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x6C:
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
 * Address:	803CEFB4
 * Size:	0000B8
 */
void ebi::Option::FSMState_WorldMapInfoWindow::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x30(r1)
  mflr      r0
  stw       r0, 0x34(r1)
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lis       r5, 0x804B
  lis       r4, 0x34
  li        r11, 0
  lis       r3, 0x315F
  addi      r8, r4, 0x3731
  addi      r10, r5, 0x1148
  addi      r0, r3, 0x3030
  lis       r6, 0x804E
  lis       r5, 0x305F
  lis       r4, 0x375F
  lis       r3, 0x36
  li        r7, 0xB4
  addi      r9, r5, 0x3030
  stw       r10, 0x8(r1)
  subi      r10, r6, 0x61F8
  addi      r6, r4, 0x3030
  stw       r0, 0x24(r1)
  addi      r5, r3, 0x3031
  li        r0, 0x1
  lwz       r3, -0x6560(r13)
  stw       r8, 0x20(r1)
  addi      r4, r1, 0x8
  stb       r11, 0x29(r1)
  stw       r11, 0xC(r1)
  stw       r10, 0x8(r1)
  stw       r11, 0x10(r1)
  stw       r9, 0x1C(r1)
  stw       r8, 0x18(r1)
  stb       r7, 0x28(r1)
  stw       r6, 0x24(r1)
  stw       r5, 0x20(r1)
  stb       r0, 0x29(r1)
  bl        0x2E000
  lwz       r0, 0x34(r1)
  mtlr      r0
  addi      r1, r1, 0x30
  blr
*/
}

/*
 * --INFO--
 * Address:	803CF06C
 * Size:	0000A0
 */
void ebi::Option::FSMState_WorldMapInfoWindow::do_exec( (ebi::Option::TMgr *))
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
  lwz       r3, -0x6560(r13)
  bl        0x2E074
  cmpwi     r3, 0x1
  beq-      .loc_0x60
  bge-      .loc_0x88
  cmpwi     r3, 0
  bge-      .loc_0x3C
  b         .loc_0x88

.loc_0x3C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x88

.loc_0x60:
  addi      r3, r31, 0xDC
  bl        -0x4208
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
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
 * Address:	803CF10C
 * Size:	00000C
 */
void ebi::Option::FSMState_LoadOption::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  li        r0, 0
  stw       r0, 0x10(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803CF118
 * Size:	0001A0
 */
void ebi::Option::FSMState_LoadOption::do_exec( (ebi::Option::TMgr *))
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
  mr        r29, r4
  lwz       r0, 0x10(r3)
  cmpwi     r0, 0x1
  beq-      .loc_0x128
  bge-      .loc_0x184
  cmpwi     r0, 0
  bge-      .loc_0x3C
  b         .loc_0x184

.loc_0x3C:
  lwz       r3, -0x6514(r13)
  li        r30, 0
  lwz       r3, 0x5C(r3)
  lwz       r0, 0xA8(r3)
  cmpwi     r0, 0
  bne-      .loc_0x64
  bl        0x71E50
  cmplwi    r3, 0xB
  beq-      .loc_0x64
  li        r30, 0x1

.loc_0x64:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x88
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x5C(r3)
  bl        0x76980
  cmpwi     r3, 0
  bne-      .loc_0x88
  li        r0, 0x1
  b         .loc_0x8C

.loc_0x88:
  li        r0, 0

.loc_0x8C:
  rlwinm.   r0,r0,0,24,31
  beq-      .loc_0xB8
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0x184

.loc_0xB8:
  lwz       r3, -0x6514(r13)
  li        r30, 0
  lwz       r3, 0x5C(r3)
  lwz       r0, 0xA8(r3)
  cmpwi     r0, 0
  bne-      .loc_0xE0
  bl        0x71DD4
  cmplwi    r3, 0xB
  beq-      .loc_0xE0
  li        r30, 0x1

.loc_0xE0:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x184
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x5C(r3)
  bl        0x73D94
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x108
  li        r0, 0x1
  stw       r0, 0x10(r31)
  b         .loc_0x184

.loc_0x108:
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6608
  li        r4, 0xEF
  addi      r5, r5, 0x661C
  crclr     6, 0x6
  bl        -0x3A4BF8
  b         .loc_0x184

.loc_0x128:
  lwz       r3, -0x6514(r13)
  li        r30, 0
  lwz       r3, 0x5C(r3)
  lwz       r0, 0xA8(r3)
  cmpwi     r0, 0
  bne-      .loc_0x150
  bl        0x71D64
  cmplwi    r3, 0xB
  beq-      .loc_0x150
  li        r30, 0x1

.loc_0x150:
  rlwinm.   r0,r30,0,24,31
  beq-      .loc_0x184
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x5C(r3)
  bl        0x76894
  mr        r3, r31
  mr        r4, r29
  lwz       r12, 0x0(r31)
  li        r5, 0x2
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0x184:
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
 * Address:	803CF2B8
 * Size:	00002C
 */
void ebi::Option::FSMState_SaveMgr::do_init( (ebi::Option::TMgr *, Game::StateArg *))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stb       r0, 0x10(r4)
  lwz       r3, 0xF18(r4)
  bl        0xD92C
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803CF2E4
 * Size:	000100
 */
void ebi::Option::FSMState_SaveMgr::do_exec( (ebi::Option::TMgr *))
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
  lwz       r3, 0xF18(r4)
  bl        0xD9DC
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0xE8
  lwz       r3, 0xF18(r31)
  lwz       r0, 0x474(r3)
  cmpwi     r0, 0x2
  beq-      .loc_0xA4
  bge-      .loc_0x50
  cmpwi     r0, 0
  beq-      .loc_0x5C
  bge-      .loc_0x80
  b         .loc_0xE8

.loc_0x50:
  cmpwi     r0, 0x4
  beq-      .loc_0xC8
  b         .loc_0xE8

.loc_0x5C:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xE8

.loc_0x80:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xE8

.loc_0xA4:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x4
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  b         .loc_0xE8

.loc_0xC8:
  mr        r3, r30
  mr        r4, r31
  lwz       r12, 0x0(r30)
  li        r5, 0x3
  li        r6, 0
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     

.loc_0xE8:
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
 * Address:	803CF3E4
 * Size:	0000C0
 */
void ebi::Option::TMgr::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        0x47C
  li        r0, 0
  lis       r3, 0x804F
  stb       r0, 0xF20(r31)
  subi      r0, r3, 0x77AC
  lis       r3, 0x804F
  li        r5, -0x1
  stw       r0, 0xF24(r31)
  subi      r0, r3, 0x7634
  addi      r3, r31, 0xF24
  mr        r4, r31
  stw       r5, 0xF3C(r31)
  stw       r0, 0xF24(r31)
  lwz       r12, 0xF24(r31)
  lwz       r12, 0x8(r12)
  mtctr     r12
  bctrl     
  addi      r3, r31, 0xF24
  mr        r4, r31
  lwz       r12, 0xF24(r31)
  li        r5, 0
  li        r6, 0
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  bl        0xD414
  stw       r3, 0xF18(r31)
  li        r5, 0x1
  li        r0, 0
  mr        r3, r31
  lwz       r4, 0xF18(r31)
  stw       r5, 0x470(r4)
  lwz       r4, 0xF18(r31)
  stb       r5, 0x478(r4)
  lwz       r4, 0xF18(r31)
  stb       r5, 0x479(r4)
  lwz       r4, 0xF18(r31)
  stb       r0, 0x47A(r4)
  lwz       r31, 0xC(r1)
  lwz       r0, 0x14(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803CF4A4
 * Size:	000034
 */
void start__Q24Game32StateMachine<ebi::Option::TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r0, 0xF40(r4)
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
 * Address:	803CF4D8
 * Size:	00030C
 */
void ebi::Screen::TOption::__dt(void)
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
  beq-      .loc_0x2F0
  lis       r3, 0x804F
  addic.    r0, r30, 0xEAC
  subi      r0, r3, 0x7878
  stw       r0, 0x0(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0xEAC
  subi      r0, r3, 0x7618
  stw       r0, 0xEAC(r30)
  beq-      .loc_0x88
  lis       r3, 0x804F
  addic.    r0, r30, 0xEAC
  subi      r0, r3, 0x77D0
  stw       r0, 0xEAC(r30)
  beq-      .loc_0x88
  lis       r3, 0x804D
  addic.    r0, r30, 0xEAC
  addi      r0, r3, 0x7F2C
  stw       r0, 0xEAC(r30)
  beq-      .loc_0x88
  lis       r4, 0x804D
  addi      r3, r30, 0xEAC
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0xEAC(r30)
  bl        0x4202C

.loc_0x88:
  lis       r4, 0x803D
  addi      r3, r30, 0xC2C
  subi      r4, r4, 0x81C
  li        r5, 0x40
  li        r6, 0xA
  bl        -0x30DDB0
  lis       r4, 0x803D
  addi      r3, r30, 0x9AC
  subi      r4, r4, 0x81C
  li        r5, 0x40
  li        r6, 0xA
  bl        -0x30DDC8
  lis       r4, 0x803D
  addi      r3, r30, 0x72C
  subi      r4, r4, 0x81C
  li        r5, 0x40
  li        r6, 0xA
  bl        -0x30DDE0
  lis       r4, 0x803D
  addi      r3, r30, 0x4AC
  subi      r4, r4, 0x81C
  li        r5, 0x40
  li        r6, 0xA
  bl        -0x30DDF8
  lis       r4, 0x803D
  addi      r3, r30, 0x2EC
  subi      r4, r4, 0x81C
  li        r5, 0x40
  li        r6, 0x7
  bl        -0x30DE10
  addic.    r0, r30, 0x2BC
  beq-      .loc_0x15C
  lis       r3, 0x804F
  addic.    r0, r30, 0x2BC
  subi      r0, r3, 0x75D0
  stw       r0, 0x2BC(r30)
  beq-      .loc_0x15C
  lis       r3, 0x804F
  addic.    r0, r30, 0x2BC
  subi      r0, r3, 0x77D0
  stw       r0, 0x2BC(r30)
  beq-      .loc_0x15C
  lis       r3, 0x804D
  addic.    r0, r30, 0x2BC
  addi      r0, r3, 0x7F2C
  stw       r0, 0x2BC(r30)
  beq-      .loc_0x15C
  lis       r4, 0x804D
  addi      r3, r30, 0x2BC
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x2BC(r30)
  bl        0x41F58

.loc_0x15C:
  addic.    r0, r30, 0x28C
  beq-      .loc_0x1B8
  lis       r3, 0x804F
  addic.    r0, r30, 0x28C
  subi      r0, r3, 0x75D0
  stw       r0, 0x28C(r30)
  beq-      .loc_0x1B8
  lis       r3, 0x804F
  addic.    r0, r30, 0x28C
  subi      r0, r3, 0x77D0
  stw       r0, 0x28C(r30)
  beq-      .loc_0x1B8
  lis       r3, 0x804D
  addic.    r0, r30, 0x28C
  addi      r0, r3, 0x7F2C
  stw       r0, 0x28C(r30)
  beq-      .loc_0x1B8
  lis       r4, 0x804D
  addi      r3, r30, 0x28C
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x28C(r30)
  bl        0x41EFC

.loc_0x1B8:
  addic.    r0, r30, 0x240
  beq-      .loc_0x214
  lis       r3, 0x804F
  addic.    r0, r30, 0x240
  subi      r0, r3, 0x75AC
  stw       r0, 0x240(r30)
  beq-      .loc_0x214
  lis       r3, 0x804F
  addic.    r0, r30, 0x240
  subi      r0, r3, 0x77D0
  stw       r0, 0x240(r30)
  beq-      .loc_0x214
  lis       r3, 0x804D
  addic.    r0, r30, 0x240
  addi      r0, r3, 0x7F2C
  stw       r0, 0x240(r30)
  beq-      .loc_0x214
  lis       r4, 0x804D
  addi      r3, r30, 0x240
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x240(r30)
  bl        0x41EA0

.loc_0x214:
  addic.    r0, r30, 0x220
  beq-      .loc_0x270
  lis       r3, 0x804F
  addic.    r0, r30, 0x220
  subi      r0, r3, 0x77F4
  stw       r0, 0x220(r30)
  beq-      .loc_0x270
  lis       r3, 0x804F
  addic.    r0, r30, 0x220
  subi      r0, r3, 0x77D0
  stw       r0, 0x220(r30)
  beq-      .loc_0x270
  lis       r3, 0x804D
  addic.    r0, r30, 0x220
  addi      r0, r3, 0x7F2C
  stw       r0, 0x220(r30)
  beq-      .loc_0x270
  lis       r4, 0x804D
  addi      r3, r30, 0x220
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x220(r30)
  bl        0x41E44

.loc_0x270:
  addic.    r0, r30, 0x1E4
  beq-      .loc_0x2E0
  lis       r3, 0x804F
  addic.    r0, r30, 0x204
  subi      r0, r3, 0x75F4
  stw       r0, 0x1E4(r30)
  beq-      .loc_0x298
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x204(r30)

.loc_0x298:
  addic.    r0, r30, 0x1E4
  beq-      .loc_0x2E0
  lis       r3, 0x804F
  addic.    r0, r30, 0x1E4
  subi      r0, r3, 0x77D0
  stw       r0, 0x1E4(r30)
  beq-      .loc_0x2E0
  lis       r3, 0x804D
  addic.    r0, r30, 0x1E4
  addi      r0, r3, 0x7F2C
  stw       r0, 0x1E4(r30)
  beq-      .loc_0x2E0
  lis       r4, 0x804D
  addi      r3, r30, 0x1E4
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x1E4(r30)
  bl        0x41DD4

.loc_0x2E0:
  extsh.    r0, r31
  ble-      .loc_0x2F0
  mr        r3, r30
  bl        -0x3AB710

.loc_0x2F0:
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
 * Address:	803CF7E4
 * Size:	000090
 */
void ebi::E2DCallBack_Purupuru::__dt(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x7588
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x77D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x41D44

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3AB7A0

.loc_0x74:
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
 * Address:	803CF874
 * Size:	00043C
 */
void ebi::Screen::TOption::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x20(r1)
  mflr      r0
  lis       r4, 0x804F
  li        r7, 0
  stw       r0, 0x24(r1)
  subi      r0, r4, 0x7818
  li        r5, 0x1
  li        r4, 0xFF
  stw       r31, 0x1C(r1)
  stw       r30, 0x18(r1)
  mr        r30, r3
  lis       r3, 0x804F
  stw       r29, 0x14(r1)
  addi      r31, r30, 0x1E4
  stw       r0, 0x0(r30)
  subi      r0, r3, 0x7370
  lis       r3, 0x804F
  stw       r0, 0x0(r30)
  subi      r6, r3, 0x7878
  li        r0, -0x1
  mr        r3, r31
  stw       r7, 0x4(r30)
  stw       r7, 0x8(r30)
  stw       r6, 0x0(r30)
  stb       r5, 0x10(r30)
  stw       r7, 0x18(r30)
  stw       r7, 0x1C(r30)
  stw       r7, 0x44(r30)
  stw       r7, 0x48(r30)
  stw       r7, 0x70(r30)
  stw       r7, 0x74(r30)
  stw       r7, 0x9C(r30)
  stw       r7, 0xA0(r30)
  stb       r7, 0xC8(r30)
  stb       r7, 0xC9(r30)
  stw       r7, 0xCC(r30)
  stw       r7, 0xD0(r30)
  stw       r7, 0xD4(r30)
  stb       r7, 0xD8(r30)
  stb       r7, 0xDC(r30)
  stb       r7, 0xDD(r30)
  stw       r7, 0xE0(r30)
  stw       r7, 0xE4(r30)
  stw       r7, 0xE8(r30)
  stb       r7, 0xEC(r30)
  stb       r7, 0xF0(r30)
  stb       r7, 0xF1(r30)
  stb       r7, 0xF2(r30)
  stb       r4, 0xF3(r30)
  stb       r4, 0xF4(r30)
  stw       r7, 0xF8(r30)
  stw       r7, 0xFC(r30)
  stw       r7, 0x100(r30)
  stw       r0, 0x1C4(r30)
  stw       r0, 0x1C8(r30)
  stw       r0, 0x1CC(r30)
  stw       r0, 0x1D0(r30)
  stw       r0, 0x1D4(r30)
  stw       r0, 0x1D8(r30)
  stw       r0, 0x1DC(r30)
  stw       r0, 0x1E0(r30)
  bl        0x41A28
  lis       r3, 0x804D
  lis       r6, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r5, 0x804F
  stw       r0, 0x0(r31)
  li        r0, 0
  lis       r4, 0x804F
  lis       r3, 0x804E
  stw       r0, 0x18(r31)
  addi      r0, r6, 0x7F2C
  subi      r7, r5, 0x77D0
  li        r6, 0x1
  stw       r0, 0x0(r31)
  subi      r5, r4, 0x75F4
  addi      r0, r3, 0x798C
  addi      r3, r31, 0x20
  stw       r7, 0x0(r31)
  li        r4, 0
  stb       r6, 0x1C(r31)
  stw       r5, 0x0(r31)
  stw       r0, 0x20(r31)
  bl        -0x368348
  addi      r29, r30, 0x220
  mr        r3, r29
  bl        0x419C4
  lis       r3, 0x804D
  lis       r5, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r4, 0x804F
  stw       r0, 0x0(r29)
  li        r0, 0
  lis       r3, 0x804F
  addi      r31, r30, 0x240
  stw       r0, 0x18(r29)
  addi      r0, r5, 0x7F2C
  subi      r5, r4, 0x77D0
  li        r4, 0x1
  stw       r0, 0x0(r29)
  subi      r0, r3, 0x77F4
  mr        r3, r31
  stw       r5, 0x0(r29)
  stb       r4, 0x1C(r29)
  stw       r0, 0x0(r29)
  bl        0x41978
  lis       r3, 0x804D
  lis       r4, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r6, 0x804F
  stw       r0, 0x0(r31)
  li        r0, 0
  lis       r3, 0x803D
  li        r7, 0x1
  stw       r0, 0x18(r31)
  addi      r0, r4, 0x7F2C
  subi      r4, r3, 0x114
  subi      r3, r6, 0x77D0
  stw       r0, 0x0(r31)
  lis       r5, 0x804F
  subi      r0, r5, 0x75AC
  li        r6, 0x10
  stw       r3, 0x0(r31)
  addi      r3, r31, 0x20
  li        r5, 0
  stb       r7, 0x1C(r31)
  li        r7, 0x2
  stw       r0, 0x0(r31)
  bl        -0x30E238
  lfs       f1, 0x172C(r2)
  addi      r29, r30, 0x28C
  lfs       f0, 0x1730(r2)
  li        r4, 0x1
  stfs      f1, 0x40(r31)
  li        r0, 0
  mr        r3, r29
  stfs      f0, 0x44(r31)
  stb       r4, 0x48(r31)
  stb       r0, 0x49(r31)
  stb       r0, 0x1C(r31)
  bl        0x418EC
  lis       r3, 0x804D
  lis       r5, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r4, 0x804F
  stw       r0, 0x0(r29)
  li        r7, 0
  lis       r3, 0x804F
  addi      r31, r30, 0x2BC
  stw       r7, 0x18(r29)
  addi      r0, r5, 0x7F2C
  subi      r6, r4, 0x77D0
  li        r5, 0x1
  stw       r0, 0x0(r29)
  subi      r4, r3, 0x75D0
  lfs       f1, 0x172C(r2)
  li        r0, 0xFF
  stw       r6, 0x0(r29)
  mr        r3, r31
  lfs       f0, 0x1730(r2)
  stb       r5, 0x1C(r29)
  stw       r4, 0x0(r29)
  stfs      f1, 0x20(r29)
  stfs      f0, 0x24(r29)
  stb       r5, 0x28(r29)
  stb       r7, 0x29(r29)
  stb       r0, 0x2C(r29)
  stb       r7, 0x2D(r29)
  bl        0x4187C
  lis       r4, 0x804D
  li        r9, 0
  addi      r0, r4, 0x7B0C
  lis       r3, 0x804D
  stw       r0, 0x0(r31)
  addi      r0, r3, 0x7F2C
  lis       r4, 0x803D
  lis       r5, 0x804F
  stw       r9, 0x18(r31)
  li        r8, 0x1
  lis       r6, 0x804F
  lis       r3, 0x803D
  stw       r0, 0x0(r31)
  subi      r0, r5, 0x77D0
  subi      r5, r3, 0x81C
  subi      r3, r6, 0x75D0
  stw       r0, 0x0(r31)
  li        r0, 0xFF
  lfs       f1, 0x172C(r2)
  subi      r4, r4, 0x2C0
  stb       r8, 0x1C(r31)
  li        r6, 0x40
  lfs       f0, 0x1730(r2)
  li        r7, 0x7
  stw       r3, 0x0(r31)
  addi      r3, r30, 0x2EC
  stfs      f1, 0x20(r31)
  stfs      f0, 0x24(r31)
  stb       r8, 0x28(r31)
  stb       r9, 0x29(r31)
  stb       r0, 0x2C(r31)
  stb       r9, 0x2D(r31)
  bl        -0x30E35C
  lis       r3, 0x803D
  lis       r5, 0x803D
  subi      r4, r3, 0x2C0
  li        r6, 0x40
  addi      r3, r30, 0x4AC
  subi      r5, r5, 0x81C
  li        r7, 0xA
  bl        -0x30E37C
  lis       r3, 0x803D
  lis       r5, 0x803D
  subi      r4, r3, 0x2C0
  li        r6, 0x40
  addi      r3, r30, 0x72C
  subi      r5, r5, 0x81C
  li        r7, 0xA
  bl        -0x30E39C
  lis       r3, 0x803D
  lis       r5, 0x803D
  subi      r4, r3, 0x2C0
  li        r6, 0x40
  addi      r3, r30, 0x9AC
  subi      r5, r5, 0x81C
  li        r7, 0xA
  bl        -0x30E3BC
  lis       r3, 0x803D
  lis       r5, 0x803D
  subi      r4, r3, 0x2C0
  li        r6, 0x40
  addi      r3, r30, 0xC2C
  subi      r5, r5, 0x81C
  li        r7, 0xA
  bl        -0x30E3DC
  addi      r29, r30, 0xEAC
  mr        r3, r29
  bl        0x4176C
  lis       r3, 0x804D
  lis       r5, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r4, 0x804F
  stw       r0, 0x0(r29)
  li        r7, 0
  lis       r3, 0x804F
  addi      r6, r5, 0x7F2C
  stw       r7, 0x18(r29)
  subi      r5, r4, 0x77D0
  li        r4, 0x1
  subi      r0, r3, 0x7618
  stw       r6, 0x0(r29)
  addi      r3, r29, 0x48
  stw       r5, 0x0(r29)
  stb       r4, 0x1C(r29)
  stw       r0, 0x0(r29)
  stw       r7, 0x40(r29)
  stw       r7, 0x44(r29)
  bl        -0xA6E70
  lfs       f0, 0x1728(r2)
  li        r0, 0
  addi      r3, r30, 0xC8
  stfs      f0, 0x64(r29)
  stw       r0, 0x68(r29)
  bl        -0x4CC8
  lwz       r0, 0x24(r1)
  mr        r3, r30
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
 * Address:	803CFCB0
 * Size:	000090
 */
void ebi::E2DCallBack_WindowCursor::__dt(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x7618
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x77D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x41878

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3ABC6C

.loc_0x74:
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
 * Address:	803CFD40
 * Size:	00008C
 */
void ebi::E2DCallBack_Purupuru::__ct(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  mr        r31, r30
  bl        0x41634
  lis       r3, 0x804D
  lis       r5, 0x804D
  addi      r0, r3, 0x7B0C
  lis       r4, 0x804F
  stw       r0, 0x0(r31)
  li        r0, 0
  lis       r3, 0x804F
  addi      r6, r5, 0x7F2C
  stw       r0, 0x18(r31)
  subi      r5, r4, 0x77D0
  li        r4, 0x1
  subi      r0, r3, 0x7588
  stw       r6, 0x0(r31)
  addi      r3, r30, 0x20
  stw       r5, 0x0(r31)
  stb       r4, 0x1C(r31)
  stw       r0, 0x0(r30)
  bl        -0xA6FA0
  lfs       f0, 0x1728(r2)
  mr        r3, r30
  stfs      f0, 0x3C(r30)
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
 * Address:	803CFDCC
 * Size:	000090
 */
void ebi::E2DCallBack_BlinkAlpha::__dt(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x75D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x77D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x4175C

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3ABD88

.loc_0x74:
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
 * Address:	803CFE5C
 * Size:	000090
 */
void ebi::E2DCallBack_BlinkFontColor::__dt(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x75AC
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x77D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x416CC

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3ABE18

.loc_0x74:
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
 * Address:	803CFEEC
 * Size:	000018
 */
void ebi::E2DFullFontColor::__ct(void)
{
/*
.loc_0x0:
  li        r0, -0x1
  stw       r0, 0x0(r3)
  stw       r0, 0x4(r3)
  stw       r0, 0x8(r3)
  stw       r0, 0xC(r3)
  blr
*/
}

/*
 * --INFO--
 * Address:	803CFF04
 * Size:	000090
 */
void ebi::E2DCallBack_CalcAnimation::__dt(void)
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
  beq-      .loc_0x74
  lis       r4, 0x804F
  subi      r0, r4, 0x77F4
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804F
  subi      r0, r4, 0x77D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x64
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x41624

.loc_0x64:
  extsh.    r0, r31
  ble-      .loc_0x74
  mr        r3, r30
  bl        -0x3ABEC0

.loc_0x74:
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
 * Address:	803CFF94
 * Size:	0000AC
 */
void ebi::E2DCallBack_AnmBase::__dt(void)
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
  beq-      .loc_0x90
  lis       r3, 0x804F
  addic.    r0, r30, 0x20
  subi      r0, r3, 0x75F4
  stw       r0, 0x0(r30)
  beq-      .loc_0x40
  lis       r3, 0x804E
  addi      r0, r3, 0x798C
  stw       r0, 0x20(r30)

.loc_0x40:
  cmplwi    r30, 0
  beq-      .loc_0x80
  lis       r3, 0x804F
  subi      r0, r3, 0x77D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x80
  lis       r3, 0x804D
  addi      r0, r3, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x80
  lis       r4, 0x804D
  mr        r3, r30
  addi      r0, r4, 0x7B0C
  li        r4, 0
  stw       r0, 0x0(r30)
  bl        0x41578

.loc_0x80:
  extsh.    r0, r31
  ble-      .loc_0x90
  mr        r3, r30
  bl        -0x3ABF6C

.loc_0x90:
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
 * Address:	803D0040
 * Size:	000080
 */
void ebi::E2DCallBack_Base::__dt(void)
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
  subi      r0, r4, 0x77D0
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r4, 0x804D
  addi      r0, r4, 0x7F2C
  stw       r0, 0x0(r30)
  beq-      .loc_0x54
  lis       r5, 0x804D
  li        r4, 0
  addi      r0, r5, 0x7B0C
  stw       r0, 0x0(r30)
  bl        0x414F8

.loc_0x54:
  extsh.    r0, r31
  ble-      .loc_0x64
  mr        r3, r30
  bl        -0x3ABFEC

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
 * Address:	803D00C0
 * Size:	000088
 */
void ebi::Option::TMgr::loadResource(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  lis       r4, 0x8049
  li        r5, 0
  stw       r0, 0x14(r1)
  addi      r4, r4, 0x6650
  stw       r31, 0xC(r1)
  stw       r30, 0x8(r1)
  mr        r30, r3
  lwz       r3, -0x6514(r13)
  bl        0x53274
  mr        r3, r30
  bl        -0x39A0
  lis       r4, 0x8049
  lwz       r3, -0x6514(r13)
  addi      r4, r4, 0x6650
  bl        0x53264
  lwz       r31, 0xF18(r30)
  addi      r3, r31, 0x18
  bl        0xD8A8
  lwz       r30, -0x77D4(r13)
  addi      r3, r31, 0x100
  mr        r4, r30
  bl        -0xDE6C
  lwz       r3, -0x6514(r13)
  mr        r4, r30
  lwz       r3, 0x5C(r3)
  bl        0x72AA0
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
 * Address:	803D0148
 * Size:	00004C
 */
void ebi::Option::TMgr::setController( (Controller *))
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
  stw       r31, 0xF1C(r3)
  bl        -0x3968
  lwz       r3, 0xF18(r30)
  stw       r31, 0x3D0(r3)
  stw       r31, 0x24(r3)
  stw       r31, 0x104(r3)
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
 * Address:	803D0194
 * Size:	00003C
 */
void ebi::Option::TMgr::start(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  mr        r4, r3
  li        r5, 0x1
  stw       r0, 0x14(r1)
  addi      r3, r4, 0xF24
  li        r6, 0
  lwz       r12, 0xF24(r4)
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
 * Size:	000064
 */
void ebi::Option::TMgr::forceQuit(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D01D0
 * Size:	000028
 */
void ebi::Option::TMgr::isFinish(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  bl        0x1BC
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
 * Address:	803D01F8
 * Size:	00007C
 */
void ebi::Option::TMgr::goEnd_(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  li        r5, 0
  li        r6, 0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  addi      r3, r31, 0xF24
  lwz       r12, 0xF24(r31)
  mr        r4, r31
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xF18(r31)
  bl        0xCA38
  lwz       r3, -0x6560(r13)
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D0274
 * Size:	000094
 */
void ebi::Option::TMgr::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  li        r0, 0
  stw       r31, 0xC(r1)
  mr        r31, r3
  mr        r4, r31
  stb       r0, 0xF20(r3)
  addi      r3, r31, 0xF24
  lwz       r12, 0xF24(r31)
  lwz       r12, 0x10(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  bl        0xEC
  cmpwi     r3, 0
  beq-      .loc_0x78
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x5C(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x18(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xF18(r31)
  bl        0xCAAC

.loc_0x78:
  lwz       r3, -0x6560(r13)
  bl        0x2BD3C
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D0308
 * Size:	000090
 */
void ebi::Option::TMgr::draw(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  bl        .loc_0x90
  cmpwi     r3, 0
  beq-      .loc_0x6C
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x24(r3)
  lwzu      r12, 0x190(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl     
  lwz       r3, -0x6514(r13)
  lwz       r3, 0x24(r3)
  lwzu      r12, 0x190(r3)
  lwz       r12, 0x14(r12)
  mtctr     r12
  bctrl     
  lwz       r3, 0xF18(r31)
  bl        0xCABC

.loc_0x6C:
  lwz       r4, -0x6514(r13)
  lwz       r3, -0x6560(r13)
  lwz       r4, 0x24(r4)
  bl        0x2BCD0
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr       

.loc_0x90:
*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000024
 */
void ebi::Option::TMgr::showInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803D0398
 * Size:	000058
 */
void ebi::Option::TMgr::getStateID(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r0, 0xF40(r3)
  cmplwi    r0, 0
  bne-      .loc_0x3C
  lis       r3, 0x8049
  lis       r5, 0x8049
  addi      r3, r3, 0x6608
  li        r4, 0x1AE
  addi      r5, r5, 0x666C
  crclr     6, 0x6
  bl        -0x3A5D90

.loc_0x3C:
  lwz       r3, 0xF40(r31)
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
 * Address:	803D03F0
 * Size:	000050
 */
void ebi::E2DCallBack_CalcAnimation::do_update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r3
  lwz       r3, 0x18(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0xC(r12)
  mtctr     r12
  bctrl     
  rlwinm    r0,r3,0,16,31
  cmplwi    r0, 0x8
  bne-      .loc_0x3C
  lwz       r3, 0x18(r31)
  bl        -0x38F8FC

.loc_0x3C:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/
}

/*
 * --INFO--
 * Address:	803D0440
 * Size:	000038
 */
void ebi::E2DCallBack_Base::update(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0x1C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
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
 * Address:	803D0478
 * Size:	000004
 */
void ebi::E2DCallBack_Base::do_update(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D047C
 * Size:	000038
 */
void ebi::E2DCallBack_Base::draw( (Graphics &, J2DGrafContext &))
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lbz       r0, 0x1C(r3)
  cmplwi    r0, 0
  beq-      .loc_0x28
  lwz       r12, 0x0(r3)
  lwz       r12, 0x20(r12)
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
 * Address:	803D04B4
 * Size:	000004
 */
void ebi::E2DCallBack_Base::do_draw( (Graphics &, J2DGrafContext &))
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D04B8
 * Size:	000004
 */
void init__Q24Game28FSMState<ebi::Option::TMgr>FPQ33ebi6Option4TMgrPQ24Game8StateArg(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D04BC
 * Size:	000004
 */
void exec__Q24Game28FSMState<ebi::Option::TMgr>FPQ33ebi6Option4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D04C0
 * Size:	000004
 */
void cleanup__Q24Game28FSMState<ebi::Option::TMgr>FPQ33ebi6Option4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D04C4
 * Size:	000004
 */
void resume__Q24Game28FSMState<ebi::Option::TMgr>FPQ33ebi6Option4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D04C8
 * Size:	000004
 */
void restart__Q24Game28FSMState<ebi::Option::TMgr>FPQ33ebi6Option4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D04CC
 * Size:	000004
 */
void init__Q24Game32StateMachine<ebi::Option::TMgr>FPQ33ebi6Option4TMgr(void)
{
/*
.loc_0x0:
  blr
*/
}

/*
 * --INFO--
 * Address:	803D04D0
 * Size:	000038
 */
void exec__Q24Game32StateMachine<ebi::Option::TMgr>FPQ33ebi6Option4TMgr(void)
{
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  lwz       r3, 0xF40(r4)
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
 * Address:	803D0508
 * Size:	000064
 */
void create__Q24Game32StateMachine<ebi::Option::TMgr>Fi(void)
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
  bl        -0x3AC584
  stw       r3, 0x4(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x3AC594
  stw       r3, 0x10(r31)
  lwz       r0, 0xC(r31)
  rlwinm    r3,r0,2,0,29
  bl        -0x3AC5A4
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
 * Address:	803D056C
 * Size:	00009C
 */
void transit__Q24Game32StateMachine<ebi::Option::TMgr>FPQ33ebi6Option4TMgriPQ24Game8StateArg(void)
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
  lwz       r30, 0xF40(r4)
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
  stw       r3, 0xF40(r28)
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
 * Address:	803D0608
 * Size:	000084
 */
void registerState__Q24Game32StateMachine<ebi::Option::TMgr>FPQ24Game28FSMState<ebi::Option::TMgr>(void)
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
