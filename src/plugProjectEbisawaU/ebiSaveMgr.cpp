#include "types.h"

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
 * Address:	803DB190
 * Size:	00034C
 */
void ebi::Save::FSMStateMachine::init((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  stw       r30, 0x8(r1)
	  addi      r30, r4, 0x6DD0
	  li        r4, 0x9
	  bl        0x1D70
	  li        r3, 0x10
	  bl        -0x3B7318
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r5, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r5, 0x6DC0
	  li        r5, 0
	  stw       r0, 0x0(r4)
	  subi      r3, r3, 0x6DE8
	  addi      r0, r2, 0x1840
	  stw       r5, 0x4(r4)
	  stw       r5, 0x8(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x64:
	  mr        r3, r31
	  bl        0x1E2C
	  li        r3, 0x10
	  bl        -0x3B735C
	  mr.       r4, r3
	  beq-      .loc_0xB8
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x6DE8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0xC
	  subi      r0, r3, 0x6E10
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0xB8:
	  mr        r3, r31
	  bl        0x1DD8
	  li        r3, 0x10
	  bl        -0x3B73B0
	  mr.       r4, r3
	  beq-      .loc_0x10C
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x2
	  li        r7, 0
	  subi      r6, r5, 0x6DE8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x18
	  subi      r0, r3, 0x6E38
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x10C:
	  mr        r3, r31
	  bl        0x1D84
	  li        r3, 0x18
	  bl        -0x3B7404
	  mr.       r4, r3
	  beq-      .loc_0x16C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x3
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x6DE8
	  addi      r6, r30, 0x28
	  subi      r5, r5, 0x6E94
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6EF0
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x16C:
	  mr        r3, r31
	  bl        0x1D24
	  li        r3, 0x18
	  bl        -0x3B7464
	  mr.       r4, r3
	  beq-      .loc_0x1CC
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x4
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x6DE8
	  addi      r6, r30, 0x34
	  subi      r5, r5, 0x6E94
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6F4C
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1CC:
	  mr        r3, r31
	  bl        0x1CC4
	  li        r3, 0x18
	  bl        -0x3B74C4
	  mr.       r4, r3
	  beq-      .loc_0x22C
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x5
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x6DE8
	  addi      r6, r30, 0x44
	  subi      r5, r5, 0x6E94
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x6FA8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x22C:
	  mr        r3, r31
	  bl        0x1C64
	  li        r3, 0x1C
	  bl        -0x3B7524
	  mr.       r4, r3
	  beq-      .loc_0x284
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x6
	  li        r7, 0
	  subi      r6, r5, 0x6DE8
	  stw       r0, 0x4(r4)
	  addi      r5, r2, 0x1848
	  subi      r0, r3, 0x6FD0
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)
	  stw       r7, 0x10(r4)

	.loc_0x284:
	  mr        r3, r31
	  bl        0x1C0C
	  li        r3, 0x10
	  bl        -0x3B757C
	  mr.       r4, r3
	  beq-      .loc_0x2D8
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x7
	  li        r7, 0
	  subi      r6, r5, 0x6DE8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x54
	  subi      r0, r3, 0x6FF8
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x2D8:
	  mr        r3, r31
	  bl        0x1BB8
	  li        r3, 0x10
	  bl        -0x3B75D0
	  mr.       r4, r3
	  beq-      .loc_0x32C
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6DC0
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x8
	  li        r7, 0
	  subi      r6, r5, 0x6DE8
	  stw       r0, 0x4(r4)
	  addi      r5, r30, 0x60
	  subi      r0, r3, 0x7020
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x32C:
	  mr        r3, r31
	  bl        0x1B64
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
 * Address:	803DB4DC
 * Size:	00002C
 */
void ebi::Save::FSMState::init((ebi::Save::TMgr*, Game::StateArg*))
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
 * Address:	803DB508
 * Size:	000004
 */
void ebi::Save::FSMState::do_init((ebi::Save::TMgr*, Game::StateArg*)) { }

/*
 * --INFO--
 * Address:	803DB50C
 * Size:	00002C
 */
void ebi::Save::FSMState::exec((ebi::Save::TMgr*))
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
 * Address:	803DB538
 * Size:	000004
 */
void ebi::Save::FSMState::do_exec((ebi::Save::TMgr*)) { }

/*
 * --INFO--
 * Address:	803DB53C
 * Size:	00004C
 */
void ebi::Save::FSMState_DoYouSave::do_init((ebi::Save::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0
	  lwz       r12, 0x18(r31)
	  addi      r3, r31, 0x18
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  li        r4, 0
	  bl        0x24F4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB588
 * Size:	000144
 */
void ebi::Save::FSMState_DoYouSave::do_exec((ebi::Save::TMgr*))
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
	  addi      r3, r31, 0x18
	  bl        0x25E0
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  lwz       r0, 0x48(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x78
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x12C

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x12C
	  b         .loc_0xEC

	.loc_0x54:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0x78:
	  lbz       r0, 0x478(r31)
	  cmplwi    r0, 0
	  beq-      .loc_0xC8
	  addi      r3, r31, 0x18
	  li        r4, 0
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x16E4
	  b         .loc_0x12C

	.loc_0xC8:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x12C

	.loc_0xEC:
	  addi      r3, r31, 0x18
	  li        r4, 0
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x12C
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x167C

	.loc_0x12C:
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
 * Address:	803DB6CC
 * Size:	000030
 */
void transit__Q24Game26FSMState<ebi::Save::TMgr>
FPQ33ebi4Save4TMgriPQ24Game8StateArg(void)
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
 * Address:	803DB6FC
 * Size:	000028
 */
void ebi::Save::FSMState_DoYouContinue::do_init((ebi::Save::TMgr*,
                                                 Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r3, r4, 0x18
	  li        r4, 0x3
	  stw       r0, 0x14(r1)
	  bl        0x2354
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DB724
 * Size:	000114
 */
void ebi::Save::FSMState_DoYouContinue::do_exec((ebi::Save::TMgr*))
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
	  addi      r3, r31, 0x18
	  bl        0x2444
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  lwz       r0, 0x48(r31)
	  cmpwi     r0, 0x1
	  beq-      .loc_0x98
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0xFC

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0xFC
	  b         .loc_0xDC

	.loc_0x54:
	  addi      r3, r31, 0x18
	  li        r4, 0
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x1578
	  b         .loc_0xFC

	.loc_0x98:
	  addi      r3, r31, 0x18
	  li        r4, 0
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xFC
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x1534
	  b         .loc_0xFC

	.loc_0xDC:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xFC:
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
 * Address:	803DB838
 * Size:	00000C
 */
void ebi::Save::FSMState_CardRequest::do_init((ebi::Save::TMgr*,
                                               Game::StateArg*))
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
 * Address:	803DB844
 * Size:	000264
 */
void ebi::Save::FSMState_CardRequest::do_exec((ebi::Save::TMgr*))
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
	  lwz       r0, 0x14(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xC0
	  bge-      .loc_0x3C
	  cmpwi     r0, 0
	  bge-      .loc_0x48
	  b         .loc_0x248

	.loc_0x3C:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x248
	  b         .loc_0x118

	.loc_0x48:
	  lwz       r3, -0x6514(r13)
	  li        r30, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x70
	  bl        0x65718
	  cmplwi    r3, 0xB
	  beq-      .loc_0x70
	  li        r30, 0x1

	.loc_0x70:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x248
	  mr        r3, r31
	  mr        r4, r29
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB4
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6E3C
	  li        r4, 0x9F
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B12B4

	.loc_0xB4:
	  li        r0, 0x1
	  stw       r0, 0x14(r31)
	  b         .loc_0x248

	.loc_0xC0:
	  lwz       r3, -0x6514(r13)
	  li        r30, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xE8
	  bl        0x656A0
	  cmplwi    r3, 0xB
	  beq-      .loc_0xE8
	  li        r30, 0x1

	.loc_0xE8:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x248
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x6A1D0
	  stw       r3, 0x10(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x6A1C0
	  li        r0, 0x2
	  stw       r0, 0x14(r31)
	  b         .loc_0x248

	.loc_0x118:
	  lwz       r0, 0x10(r31)
	  cmplwi    r0, 0xE
	  bgt-      .loc_0x22C
	  lis       r5, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r5, r5, 0x7080
	  lwzx      r0, r5, r0
	  mtctr     r0
	  bctr
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x248

	.loc_0x22C:
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6E3C
	  li        r4, 0xE3
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B1448

	.loc_0x248:
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
 * Address:	803DBAA8
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardNoCard((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0x7
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBAE4
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardIOError((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0x8
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBB20
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardWrongDevice(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0x9
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBB5C
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardWrongSector(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0xA
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBB98
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardBroken((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0xB
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBBD4
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardEncoding((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0xB
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBC10
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardNoFileSpace(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0xC
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBC4C
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardNoFileEntry(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0xC
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBC88
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardFileOpenError(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0xD
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBCC4
 * Size:	00003C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardSerialNoError(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x8
	  stw       r0, 0x14(r1)
	  li        r0, 0xE
	  addi      r6, r1, 0x8
	  stw       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBD00
 * Size:	00002C
 */
void ebi::Save::FSMState_CardRequest::do_transitCardPlayerDataBroken(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
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
 * Address:	803DBD2C
 * Size:	000028
 */
void ebi::Save::FSMState_MountCheck::do_cardRequest((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x6AB24
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DBD54
 * Size:	000034
 */
void ebi::Save::FSMState_MountCheck::do_transitCardReady((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  li        r6, 0
	  stw       r0, 0x14(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBD88
 * Size:	00002C
 */
void ebi::Save::FSMState_GetPlayerHeader::do_cardRequest((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r4, r4, 0x3D4
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x67884
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DBDB4
 * Size:	0000F8
 */
void
    ebi::Save::FSMState_GetPlayerHeader::do_transitCardReady((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  li        r4, 0
	  stw       r30, 0x18(r1)
	  mr        r30, r3
	  addi      r3, r31, 0x3D4
	  bl        0x66C48
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x44
	  addi      r3, r31, 0x3D4
	  li        r4, 0
	  bl        0x66BB4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC0

	.loc_0x44:
	  addi      r3, r31, 0x3D4
	  li        r4, 0x1
	  bl        0x66C20
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x6C
	  addi      r3, r31, 0x3D4
	  li        r4, 0x1
	  bl        0x66B8C
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC0

	.loc_0x6C:
	  addi      r3, r31, 0x3D4
	  li        r4, 0x2
	  bl        0x66BF8
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x94
	  addi      r3, r31, 0x3D4
	  li        r4, 0x2
	  bl        0x66B64
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC0

	.loc_0x94:
	  li        r0, 0x1
	  mr        r3, r30
	  stb       r0, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x6
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE0

	.loc_0xC0:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x5
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0xE0:
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
 * Address:	803DBEAC
 * Size:	000038
 */
void ebi::Save::FSMState_GetPlayerHeader::do_transitCardSerialNoError(
    (ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x6E3C
	  li        r4, 0x15D
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B1890
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DBEE4
 * Size:	000028
 */
void ebi::Save::FSMState_CheckBeforeSave::do_cardRequest((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x66E90
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DBF0C
 * Size:	00003C
 */
void
    ebi::Save::FSMState_CheckBeforeSave::do_transitCardReady((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x6
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  addi      r6, r1, 0x8
	  stb       r0, 0x8(r1)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x1C(r12)
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
 * Address:	803DBF48
 * Size:	0000D0
 */
void ebi::Save::FSMState_NowSave::do_init((ebi::Save::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr.       r31, r5
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  bne-      .loc_0x44
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6E3C
	  li        r4, 0x17D
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B1948

	.loc_0x44:
	  lbz       r0, 0x0(r31)
	  addi      r3, r30, 0x18
	  li        r4, 0
	  stb       r0, 0x18(r29)
	  lwz       r12, 0x18(r30)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  lwz       r0, 0x470(r30)
	  cmpwi     r0, 0x1
	  bne-      .loc_0x7C
	  li        r0, 0x2
	  stw       r0, 0x10(r29)
	  b         .loc_0x84

	.loc_0x7C:
	  li        r0, 0
	  stw       r0, 0x10(r29)

	.loc_0x84:
	  addi      r3, r30, 0x18
	  li        r4, 0x1
	  bl        0x1A90
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1850(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x31A49C
	  stw       r3, 0x3C8(r30)
	  stw       r3, 0x3CC(r30)
	  addi      r3, r30, 0x100
	  bl        -0x8C40
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
 * Address:	803DC018
 * Size:	000424
 */
void ebi::Save::FSMState_NowSave::do_exec((ebi::Save::TMgr*))
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
	  stw       r29, 0x24(r1)
	  li        r29, 0
	  lwz       r5, -0x6514(r13)
	  lwz       r3, 0x5C(r5)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x48
	  bl        0x64F6C
	  cmplwi    r3, 0xB
	  beq-      .loc_0x48
	  li        r29, 0x1

	.loc_0x48:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x6C
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x69A9C
	  cmpwi     r3, 0
	  bne-      .loc_0x6C
	  li        r0, 0x1
	  b         .loc_0x70

	.loc_0x6C:
	  li        r0, 0

	.loc_0x70:
	  rlwinm.   r0,r0,0,24,31
	  beq-      .loc_0xA4
	  li        r0, 0xF
	  mr        r3, r30
	  stw       r0, 0x14(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x14
	  li        r5, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x408

	.loc_0xA4:
	  lwz       r0, 0x10(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x208
	  bge-      .loc_0xC4
	  cmpwi     r0, 0
	  beq-      .loc_0xD4
	  bge-      .loc_0x164
	  b         .loc_0x408

	.loc_0xC4:
	  cmpwi     r0, 0x4
	  beq-      .loc_0x2CC
	  bge-      .loc_0x408
	  b         .loc_0x274

	.loc_0xD4:
	  lwz       r3, -0x6514(r13)
	  li        r29, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xFC
	  bl        0x64EB8
	  cmplwi    r3, 0xB
	  beq-      .loc_0xFC
	  li        r29, 0x1

	.loc_0xFC:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x408
	  lbz       r0, 0x18(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x124
	  lwz       r3, -0x6514(r13)
	  li        r4, -0x1
	  lwz       r3, 0x5C(r3)
	  bl        0x66F20
	  b         .loc_0x134

	.loc_0x124:
	  lwz       r3, -0x6514(r13)
	  li        r4, -0x1
	  lwz       r3, 0x5C(r3)
	  bl        0x67030

	.loc_0x134:
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x158
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6E3C
	  li        r4, 0x1AC
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B1B2C

	.loc_0x158:
	  li        r0, 0x1
	  stw       r0, 0x10(r30)
	  b         .loc_0x408

	.loc_0x164:
	  lwz       r3, -0x6514(r13)
	  li        r29, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x18C
	  bl        0x64E28
	  cmplwi    r3, 0xB
	  beq-      .loc_0x18C
	  li        r29, 0x1

	.loc_0x18C:
	  rlwinm.   r0,r29,0,24,31
	  beq-      .loc_0x408
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x69958
	  stw       r3, 0x14(r30)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x69948
	  lwz       r0, 0x14(r30)
	  cmpwi     r0, 0xE
	  beq-      .loc_0x1F0
	  bge-      .loc_0x1FC
	  cmpwi     r0, 0x2
	  beq-      .loc_0x1CC
	  b         .loc_0x1FC

	.loc_0x1CC:
	  lwz       r0, 0x470(r31)
	  cmpwi     r0, 0
	  bne-      .loc_0x1E4
	  li        r0, 0x4
	  stw       r0, 0x10(r30)
	  b         .loc_0x408

	.loc_0x1E4:
	  li        r0, 0x2
	  stw       r0, 0x10(r30)
	  b         .loc_0x408

	.loc_0x1F0:
	  li        r0, 0x4
	  stw       r0, 0x10(r30)
	  b         .loc_0x408

	.loc_0x1FC:
	  li        r0, 0x4
	  stw       r0, 0x10(r30)
	  b         .loc_0x408

	.loc_0x208:
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x230
	  bl        0x64D84
	  cmplwi    r3, 0xB
	  beq-      .loc_0x230
	  li        r31, 0x1

	.loc_0x230:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x408
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x66C8C
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x268
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6E3C
	  li        r4, 0x1DC
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B1C3C

	.loc_0x268:
	  li        r0, 0x3
	  stw       r0, 0x10(r30)
	  b         .loc_0x408

	.loc_0x274:
	  lwz       r3, -0x6514(r13)
	  li        r31, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x29C
	  bl        0x64D18
	  cmplwi    r3, 0xB
	  beq-      .loc_0x29C
	  li        r31, 0x1

	.loc_0x29C:
	  rlwinm.   r0,r31,0,24,31
	  beq-      .loc_0x408
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x69848
	  stw       r3, 0x14(r30)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x69838
	  li        r0, 0x4
	  stw       r0, 0x10(r30)
	  b         .loc_0x408

	.loc_0x2CC:
	  lwz       r4, 0x3C8(r31)
	  lis       r0, 0x4330
	  lwz       r3, -0x6514(r13)
	  stw       r4, 0x1C(r1)
	  lfd       f3, 0x1858(r2)
	  stw       r0, 0x18(r1)
	  lfs       f1, 0x54(r3)
	  lfd       f2, 0x18(r1)
	  lfs       f0, 0x1854(r2)
	  fsubs     f2, f2, f3
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x318
	  lwz       r3, 0x3D0(r31)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x318
	  addi      r3, r31, 0x18
	  bl        0x17CC

	.loc_0x318:
	  lwz       r0, 0x3C8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x32C
	  addi      r3, r31, 0x18
	  bl        0x17B8

	.loc_0x32C:
	  addi      r3, r31, 0x18
	  bl        0x1840
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x408
	  lwz       r0, 0x14(r30)
	  cmpwi     r0, 0x2
	  beq-      .loc_0x364
	  bge-      .loc_0x358
	  cmpwi     r0, 0
	  beq-      .loc_0x388
	  b         .loc_0x3E0

	.loc_0x358:
	  cmpwi     r0, 0xE
	  beq-      .loc_0x3B4
	  b         .loc_0x3E0

	.loc_0x364:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x7
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x408

	.loc_0x388:
	  li        r0, 0xF
	  mr        r3, r30
	  stw       r0, 0x10(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x10
	  li        r5, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x408

	.loc_0x3B4:
	  li        r0, 0xE
	  mr        r3, r30
	  stw       r0, 0xC(r1)
	  mr        r4, r31
	  addi      r6, r1, 0xC
	  li        r5, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x408

	.loc_0x3E0:
	  li        r0, 0x10
	  mr        r3, r30
	  stw       r0, 0x8(r1)
	  mr        r4, r31
	  addi      r6, r1, 0x8
	  li        r5, 0x8
	  lwz       r12, 0x0(r30)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x408:
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
 * Address:	803DC43C
 * Size:	000050
 */
void ebi::Save::FSMState_AfterSave::do_init((ebi::Save::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  li        r4, 0x2
	  addi      r3, r31, 0x18
	  bl        0x160C
	  lwz       r3, -0x6514(r13)
	  lfs       f1, 0x1850(r2)
	  lfs       f0, 0x54(r3)
	  fdivs     f1, f1, f0
	  bl        -0x31A920
	  stw       r3, 0x3C8(r31)
	  stw       r3, 0x3CC(r31)
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DC48C
 * Size:	0000D8
 */
void ebi::Save::FSMState_AfterSave::do_exec((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lfd       f3, 0x1858(r2)
	  stw       r0, 0x24(r1)
	  lis       r0, 0x4330
	  lfs       f0, 0x1854(r2)
	  stw       r31, 0x1C(r1)
	  mr        r31, r4
	  lwz       r4, 0x3C8(r4)
	  lwz       r3, -0x6514(r13)
	  stw       r4, 0xC(r1)
	  lfs       f1, 0x54(r3)
	  stw       r0, 0x8(r1)
	  lfd       f2, 0x8(r1)
	  fsubs     f2, f2, f3
	  fmuls     f1, f2, f1
	  fcmpo     cr0, f1, f0
	  bge-      .loc_0x60
	  lwz       r3, 0x3D0(r31)
	  lwz       r0, 0x1C(r3)
	  rlwinm.   r0,r0,0,23,23
	  beq-      .loc_0x60
	  addi      r3, r31, 0x18
	  bl        0x1610

	.loc_0x60:
	  lwz       r0, 0x3C8(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x74
	  addi      r3, r31, 0x18
	  bl        0x15FC

	.loc_0x74:
	  addi      r3, r31, 0x18
	  bl        0x1684
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0x9C
	  addi      r3, r31, 0x18
	  li        r4, 0
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl

	.loc_0x9C:
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x20(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xC4
	  mr        r3, r31
	  li        r4, 0
	  bl        0x7E0

	.loc_0xC4:
	  lwz       r0, 0x24(r1)
	  lwz       r31, 0x1C(r1)
	  mtlr      r0
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DC564
 * Size:	000068
 */
void ebi::Save::FSMState_CardError::do_init((ebi::Save::TMgr*, Game::StateArg*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr.       r31, r5
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6E3C
	  li        r4, 0x252
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B1F5C

	.loc_0x3C:
	  lwz       r4, 0x0(r31)
	  addi      r3, r30, 0x100
	  bl        -0x9568
	  addi      r3, r30, 0x18
	  bl        0x1584
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
 * Address:	803DC5CC
 * Size:	000104
 */
void ebi::Save::FSMState_CardError::do_exec((ebi::Save::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  addi      r31, r5, 0x6DD0
	  stw       r30, 0x18(r1)
	  mr        r30, r4
	  stw       r29, 0x14(r1)
	  mr        r29, r3
	  addi      r3, r30, 0x100
	  bl        -0x9024
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xE8
	  lwz       r0, 0x3A0(r30)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x9C
	  bge-      .loc_0xC0
	  cmpwi     r0, 0x3
	  bge-      .loc_0x54
	  b         .loc_0xC0

	.loc_0x54:
	  lbz       r0, 0x47A(r30)
	  cmplwi    r0, 0
	  beq-      .loc_0x8C
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r30, 0x100
	  bl        -0x9298
	  b         .loc_0xE8

	.loc_0x8C:
	  mr        r3, r30
	  li        r4, 0x4
	  bl        0x6CC
	  b         .loc_0xE8

	.loc_0x9C:
	  mr        r3, r29
	  mr        r4, r30
	  lwz       r12, 0x0(r29)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xE8

	.loc_0xC0:
	  addi      r3, r31, 0x6C
	  addi      r5, r31, 0x88
	  li        r4, 0x26D
	  crclr     6, 0x6
	  bl        -0x3B205C
	  addi      r3, r31, 0x6C
	  addi      r5, r31, 0x7C
	  li        r4, 0x26E
	  crclr     6, 0x6
	  bl        -0x3B2070

	.loc_0xE8:
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
 * Address:	803DC6D0
 * Size:	00014C
 */
void ebi::Save::TMgr::__dt(void)
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
	  beq-      .loc_0x130
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r4, r3, 0x702C
	  addi      r3, r30, 0x100
	  stw       r4, 0x0(r30)
	  li        r4, -0x1
	  stw       r0, -0x65A8(r13)
	  bl        .loc_0x14C
	  addic.    r0, r30, 0x18
	  beq-      .loc_0x114
	  lis       r3, 0x804F
	  addic.    r4, r30, 0xBC
	  subi      r0, r3, 0x6D88
	  stw       r0, 0x18(r30)
	  beq-      .loc_0xB4
	  cmplwi    r4, 0
	  beq-      .loc_0xB4
	  lis       r3, 0x804E
	  addi      r3, r3, 0x7648
	  stw       r3, 0xBC(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xC4(r30)
	  beq-      .loc_0xB4
	  lis       r3, 0x804E
	  addi      r3, r3, 0x73CC
	  stw       r3, 0xBC(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0xC4(r30)
	  beq-      .loc_0xB4
	  lis       r4, 0x804E
	  addi      r3, r30, 0xC4
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0xBC(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0xC4(r30)
	  bl        -0x34CAE4

	.loc_0xB4:
	  addic.    r0, r30, 0x84
	  beq-      .loc_0x114
	  cmplwi    r0, 0
	  beq-      .loc_0x114
	  lis       r3, 0x804E
	  addi      r3, r3, 0x7648
	  stw       r3, 0x84(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0x114
	  lis       r3, 0x804E
	  addi      r3, r3, 0x73CC
	  stw       r3, 0x84(r30)
	  addi      r0, r3, 0x18
	  stw       r0, 0x8C(r30)
	  beq-      .loc_0x114
	  lis       r4, 0x804E
	  addi      r3, r30, 0x8C
	  addi      r5, r4, 0x7420
	  li        r4, 0
	  stw       r5, 0x84(r30)
	  addi      r0, r5, 0x18
	  stw       r0, 0x8C(r30)
	  bl        -0x34CB44

	.loc_0x114:
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x3BF7B8
	  extsh.    r0, r31
	  ble-      .loc_0x130
	  mr        r3, r30
	  bl        -0x3B8748

	.loc_0x130:
	  lwz       r0, 0x14(r1)
	  mr        r3, r30
	  lwz       r31, 0xC(r1)
	  lwz       r30, 0x8(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x14C:
	*/
}

/*
 * --INFO--
 * Address:	803DC81C
 * Size:	000054
 */
void ebi::CardError::TMgr::__dt(void)
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
	  beq-      .loc_0x38
	  li        r4, -0x1
	  bl        -0xA128
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x3B879C

	.loc_0x38:
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
 * Address:	803DC870
 * Size:	000048
 */
void ebi::Save::TMgr::createInstance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r0, -0x65A8(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  li        r3, 0x49C
	  bl        -0x3B89E8
	  mr.       r0, r3
	  beq-      .loc_0x30
	  bl        0xBC
	  mr        r0, r3

	.loc_0x30:
	  stw       r0, -0x65A8(r13)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x65A8(r13)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000048
 */
void ebi::Save::TMgr::deleteInstance(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void ebi::Save::TMgr::getInstance(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803DC8B8
 * Size:	000058
 */
void ebi::Save::TMgr::onDvdErrorOccured(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x65A8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  bl        0x410
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C
	  lwz       r3, -0x65A8(r13)
	  li        r0, 0x1
	  stb       r0, 0x47B(r3)
	  lwz       r3, -0x65A8(r13)
	  bl        0x390
	  b         .loc_0x48

	.loc_0x3C:
	  lwz       r3, -0x65A8(r13)
	  li        r0, 0
	  stb       r0, 0x47B(r3)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DC910
 * Size:	000044
 */
void ebi::Save::TMgr::onDvdErrorRecovered(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x65A8(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lbz       r0, 0x47B(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  bl        0x2C8
	  lwz       r3, -0x65A8(r13)
	  li        r0, 0
	  stb       r0, 0x47B(r3)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DC954
 * Size:	0000D4
 */
void ebi::Save::TMgr::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        -0x3BF99C
	  lis       r4, 0x804F
	  addi      r3, r31, 0x18
	  subi      r0, r4, 0x702C
	  stw       r0, 0x0(r31)
	  bl        0xE0
	  addi      r3, r31, 0x100
	  bl        -0xA334
	  li        r0, 0
	  addi      r3, r31, 0x3D4
	  stw       r0, 0x3C8(r31)
	  stw       r0, 0x3CC(r31)
	  bl        0x65F50
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x7044
	  li        r5, -0x1
	  stw       r0, 0x47C(r31)
	  subi      r0, r3, 0x6DA0
	  addi      r3, r31, 0x47C
	  mr        r4, r31
	  stw       r5, 0x494(r31)
	  stw       r0, 0x47C(r31)
	  lwz       r12, 0x47C(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x47C
	  mr        r4, r31
	  lwz       r12, 0x47C(r31)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r4, 0
	  li        r0, 0x1
	  stw       r4, 0x470(r31)
	  mr        r3, r31
	  stb       r4, 0x478(r31)
	  stb       r4, 0x479(r31)
	  stb       r0, 0x47A(r31)
	  stb       r4, 0x47B(r31)
	  lwz       r31, 0xC(r1)
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DCA28
 * Size:	000034
 */
void start__Q24Game30StateMachine<ebi::Save::TMgr>
FPQ33ebi4Save4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x498(r4)
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
 * Address:	........
 * Size:	000128
 */
void ebi::Screen::TSaveMenu::__dt(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803DCA5C
 * Size:	0001A0
 */
void ebi::Screen::TSaveMenu::__ct(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  lis       r4, 0x804F
	  subi      r0, r4, 0x7818
	  lis       r10, 0x804C
	  stw       r31, 0x1C(r1)
	  lis       r9, 0x804C
	  lis       r8, 0x804A
	  lis       r4, 0x804F
	  stw       r30, 0x18(r1)
	  li        r12, 0
	  lis       r5, 0x804F
	  li        r11, 0xFF
	  stw       r29, 0x14(r1)
	  addi      r10, r10, 0x14F0
	  addi      r9, r9, 0x14D8
	  subi      r8, r8, 0x1D84
	  stw       r0, 0x0(r3)
	  subi      r0, r4, 0x7370
	  lis       r4, 0x804E
	  lfs       f3, 0x1850(r2)
	  stw       r0, 0x0(r3)
	  addi      r7, r4, 0x7420
	  lis       r4, 0x804E
	  subi      r0, r5, 0x6D88
	  stw       r12, 0x4(r3)
	  addi      r6, r4, 0x73CC
	  lis       r4, 0x804E
	  addi      r31, r7, 0x18
	  stw       r12, 0x8(r3)
	  addi      r5, r4, 0x7648
	  addi      r30, r6, 0x18
	  addi      r4, r3, 0x88
	  stw       r0, 0x0(r3)
	  addi      r29, r5, 0x18
	  lfs       f2, 0x1860(r2)
	  addi      r0, r3, 0xC0
	  stb       r12, 0x14(r3)
	  lfs       f1, 0x1864(r2)
	  stb       r12, 0x15(r3)
	  stb       r12, 0x16(r3)
	  stb       r11, 0x17(r3)
	  stb       r11, 0x18(r3)
	  stw       r12, 0x1C(r3)
	  stw       r12, 0x20(r3)
	  stw       r12, 0x24(r3)
	  stw       r12, 0x28(r3)
	  stw       r12, 0x34(r3)
	  stw       r12, 0x38(r3)
	  stw       r10, 0x6C(r3)
	  stw       r9, 0x6C(r3)
	  stb       r12, 0x70(r3)
	  stb       r12, 0x71(r3)
	  stw       r8, 0x74(r3)
	  stw       r7, 0x6C(r3)
	  stw       r31, 0x74(r3)
	  sth       r12, 0x78(r3)
	  stw       r12, 0x7C(r3)
	  stw       r6, 0x6C(r3)
	  stw       r30, 0x74(r3)
	  stw       r4, 0x80(r3)
	  stw       r5, 0x6C(r3)
	  stw       r29, 0x74(r3)
	  stfs      f3, 0x84(r3)
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fmuls     f0, f2, f0
	  stfs      f0, 0x90(r3)
	  stfs      f1, 0x94(r3)
	  stw       r12, 0x9C(r3)
	  stw       r12, 0xA0(r3)
	  stw       r10, 0xA4(r3)
	  stw       r9, 0xA4(r3)
	  stb       r12, 0xA8(r3)
	  stb       r12, 0xA9(r3)
	  stw       r8, 0xAC(r3)
	  stw       r7, 0xA4(r3)
	  stw       r31, 0xAC(r3)
	  sth       r12, 0xB0(r3)
	  stw       r12, 0xB4(r3)
	  stw       r6, 0xA4(r3)
	  stw       r30, 0xAC(r3)
	  stw       r0, 0xB8(r3)
	  stw       r5, 0xA4(r3)
	  stw       r29, 0xAC(r3)
	  stfs      f3, 0xBC(r3)
	  lwz       r4, -0x6514(r13)
	  lfs       f0, 0x54(r4)
	  fmuls     f0, f2, f0
	  stfs      f0, 0xC8(r3)
	  stfs      f1, 0xCC(r3)
	  stw       r12, 0xD4(r3)
	  stw       r12, 0xD8(r3)
	  stw       r12, 0x44(r3)
	  stw       r12, 0x48(r3)
	  stw       r12, 0x4C(r3)
	  stw       r12, 0x50(r3)
	  stw       r12, 0x54(r3)
	  stw       r12, 0x58(r3)
	  stw       r12, 0x5C(r3)
	  lwz       r31, 0x1C(r1)
	  lwz       r30, 0x18(r1)
	  lwz       r29, 0x14(r1)
	  addi      r1, r1, 0x20
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DCBFC
 * Size:	000080
 */
void ebi::Save::TMgr::start(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lbz       r0, 0x479(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  addi      r3, r31, 0x47C
	  mr        r4, r31
	  lwz       r12, 0x47C(r31)
	  li        r5, 0x1
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x64

	.loc_0x44:
	  addi      r3, r31, 0x47C
	  mr        r4, r31
	  lwz       r12, 0x47C(r31)
	  li        r5, 0x3
	  li        r6, 0
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl

	.loc_0x64:
	  mr        r3, r31
	  bl        0x130
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DCC7C
 * Size:	000064
 */
void ebi::Save::TMgr::forceQuit(void)
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
	  addi      r3, r31, 0x47C
	  lwz       r12, 0x47C(r31)
	  mr        r4, r31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x100
	  bl        -0x98FC
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x14(r12)
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
 * Address:	803DCCE0
 * Size:	00004C
 */
void ebi::Save::TMgr::isFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x188
	  cmpwi     r3, 0
	  bne-      .loc_0x34
	  lbz       r0, 0x47B(r31)
	  cmplwi    r0, 0
	  bne-      .loc_0x34
	  li        r3, 0x1
	  b         .loc_0x38

	.loc_0x34:
	  li        r3, 0

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
 * Address:	803DCD2C
 * Size:	000068
 */
void ebi::Save::TMgr::goEnd_((ebi::Save::TMgr::enumEnd))
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
	  stw       r4, 0x474(r3)
	  addi      r3, r31, 0x47C
	  mr        r4, r31
	  lwz       r12, 0x47C(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x100
	  bl        -0x99C4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DCD94
 * Size:	000098
 */
void ebi::Save::TMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0x47C
	  lwz       r12, 0x47C(r31)
	  mr        r4, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0xB8
	  cmpwi     r3, 0
	  beq-      .loc_0x84
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x100
	  bl        -0x98C0
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x18(r12)
	  mtctr     r12
	  bctrl
	  lwz       r3, 0x3C8(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x84
	  subi      r0, r3, 0x1
	  stw       r0, 0x3C8(r31)

	.loc_0x84:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803DCE2C
 * Size:	000050
 */
void ebi::Save::TMgr::draw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        .loc_0x50
	  cmpwi     r3, 0
	  beq-      .loc_0x3C
	  addi      r3, r31, 0x18
	  lwz       r12, 0x18(r31)
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x100
	  bl        -0x98CC

	.loc_0x3C:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x50:
	*/
}

/*
 * --INFO--
 * Address:	........
 * Size:	000034
 */
void ebi::Save::TMgr::showInfo(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803DCE7C
 * Size:	000058
 */
void ebi::Save::TMgr::getStateID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x498(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x6E3C
	  li        r4, 0x338
	  addi      r5, r5, 0x6E4C
	  crclr     6, 0x6
	  bl        -0x3B2874

	.loc_0x3C:
	  lwz       r3, 0x498(r31)
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
 * Address:	803DCED4
 * Size:	000004
 */
void init__Q24Game26FSMState<ebi::Save::TMgr>
FPQ33ebi4Save4TMgrPQ24Game8StateArg(void)
{
}

/*
 * --INFO--
 * Address:	803DCED8
 * Size:	000004
 */
void exec__Q24Game26FSMState<ebi::Save::TMgr> FPQ33ebi4Save4TMgr(void) { }

/*
 * --INFO--
 * Address:	803DCEDC
 * Size:	000004
 */
void cleanup__Q24Game26FSMState<ebi::Save::TMgr> FPQ33ebi4Save4TMgr(void) { }

/*
 * --INFO--
 * Address:	803DCEE0
 * Size:	000004
 */
void resume__Q24Game26FSMState<ebi::Save::TMgr> FPQ33ebi4Save4TMgr(void) { }

/*
 * --INFO--
 * Address:	803DCEE4
 * Size:	000004
 */
void restart__Q24Game26FSMState<ebi::Save::TMgr> FPQ33ebi4Save4TMgr(void) { }

/*
 * --INFO--
 * Address:	803DCEE8
 * Size:	000004
 */
void init__Q24Game30StateMachine<ebi::Save::TMgr> FPQ33ebi4Save4TMgr(void) { }

/*
 * --INFO--
 * Address:	803DCEEC
 * Size:	000038
 */
void exec__Q24Game30StateMachine<ebi::Save::TMgr> FPQ33ebi4Save4TMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x498(r4)
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
 * Address:	803DCF24
 * Size:	000064
 */
void create__Q24Game30StateMachine<ebi::Save::TMgr> Fi(void)
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
	  bl        -0x3B8FA0
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3B8FB0
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3B8FC0
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
 * Address:	803DCF88
 * Size:	00009C
 */
void transit__Q24Game30StateMachine<ebi::Save::TMgr>
FPQ33ebi4Save4TMgriPQ24Game8StateArg(void)
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
	  lwz       r30, 0x498(r4)
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
	  stw       r3, 0x498(r28)
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
 * Address:	803DD024
 * Size:	000084
 */
void registerState__Q24Game30StateMachine<ebi::Save::TMgr>
FPQ24Game26FSMState<ebi::Save::TMgr>(void)
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
