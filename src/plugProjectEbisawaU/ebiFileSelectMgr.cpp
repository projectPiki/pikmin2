#include "types.h"

namespace ebi {

/*
 * --INFO--
 * Address:	803E12E0
 * Size:	000248
 */
void FileSelect::FSMStateMachine::init(ebi::FileSelect::TMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r4, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r4, 0x7010
	  li        r4, 0x6
	  stw       r30, 0x8(r1)
	  mr        r30, r3
	  bl        0x1098
	  li        r3, 0x10
	  bl        -0x3BD468
	  mr.       r4, r3
	  beq-      .loc_0x64
	  lis       r5, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r5, 0x6774
	  li        r5, 0
	  stw       r0, 0x0(r4)
	  subi      r3, r3, 0x679C
	  addi      r0, r2, 0x18B8
	  stw       r5, 0x4(r4)
	  stw       r5, 0x8(r4)
	  stw       r3, 0x0(r4)
	  stw       r0, 0xC(r4)

	.loc_0x64:
	  mr        r3, r30
	  bl        0x1154
	  li        r3, 0x18
	  bl        -0x3BD4AC
	  mr.       r4, r3
	  beq-      .loc_0xC0
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6774
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x1
	  li        r7, 0
	  subi      r6, r5, 0x679C
	  stw       r0, 0x4(r4)
	  addi      r5, r31, 0x14
	  subi      r0, r3, 0x67C4
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)
	  stw       r7, 0x10(r4)
	  stw       r7, 0x14(r4)

	.loc_0xC0:
	  mr        r3, r30
	  bl        0x10F8
	  li        r3, 0x18
	  bl        -0x3BD508
	  mr.       r4, r3
	  beq-      .loc_0x120
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x6774
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x2
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x679C
	  addi      r6, r31, 0x20
	  subi      r5, r5, 0x6820
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x687C
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x120:
	  mr        r3, r30
	  bl        0x1098
	  li        r3, 0x18
	  bl        -0x3BD568
	  mr.       r4, r3
	  beq-      .loc_0x180
	  lis       r3, 0x804F
	  lis       r6, 0x804F
	  subi      r0, r3, 0x6774
	  lis       r5, 0x804F
	  stw       r0, 0x0(r4)
	  li        r7, 0x3
	  lis       r3, 0x804F
	  li        r0, 0
	  stw       r7, 0x4(r4)
	  subi      r7, r6, 0x679C
	  addi      r6, r31, 0x2C
	  subi      r5, r5, 0x6820
	  stw       r0, 0x8(r4)
	  subi      r0, r3, 0x68D8
	  stw       r7, 0x0(r4)
	  stw       r6, 0xC(r4)
	  stw       r5, 0x0(r4)
	  stw       r0, 0x0(r4)

	.loc_0x180:
	  mr        r3, r30
	  bl        0x1038
	  li        r3, 0x10
	  bl        -0x3BD5C8
	  mr.       r4, r3
	  beq-      .loc_0x1D4
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6774
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x4
	  li        r7, 0
	  subi      r6, r5, 0x679C
	  stw       r0, 0x4(r4)
	  addi      r5, r31, 0x3C
	  subi      r0, r3, 0x6928
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x1D4:
	  mr        r3, r30
	  bl        0xFE4
	  li        r3, 0x10
	  bl        -0x3BD61C
	  mr.       r4, r3
	  beq-      .loc_0x228
	  lis       r3, 0x804F
	  lis       r5, 0x804F
	  subi      r0, r3, 0x6774
	  lis       r3, 0x804F
	  stw       r0, 0x0(r4)
	  li        r0, 0x5
	  li        r7, 0
	  subi      r6, r5, 0x679C
	  stw       r0, 0x4(r4)
	  addi      r5, r31, 0x48
	  subi      r0, r3, 0x6900
	  stw       r7, 0x8(r4)
	  stw       r6, 0x0(r4)
	  stw       r5, 0xC(r4)
	  stw       r0, 0x0(r4)

	.loc_0x228:
	  mr        r3, r30
	  bl        0xF90
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
 * Address:	803E1528
 * Size:	00002C
 */
void FileSelect::FSMState::init(ebi::FileSelect::TMgr*, Game::StateArg*)
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
 * Address:	803E1554
 * Size:	000004
 */
void FileSelect::FSMState::do_init(ebi::FileSelect::TMgr*, Game::StateArg*) { }

/*
 * --INFO--
 * Address:	803E1558
 * Size:	00002C
 */
void FileSelect::FSMState::exec(ebi::FileSelect::TMgr*)
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
 * Address:	803E1584
 * Size:	000004
 */
void FileSelect::FSMState::do_exec(ebi::FileSelect::TMgr*) { }

/*
 * --INFO--
 * Address:	803E1588
 * Size:	000010
 */
void FileSelect::FSMState_EmptyUpdate::do_init(ebi::FileSelect::TMgr*,
                                               Game::StateArg*)
{
	/*
	.loc_0x0:
	  li        r0, 0x2
	  stw       r0, 0x10(r3)
	  stw       r0, 0x14(r3)
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1598
 * Size:	000054
 */
void FileSelect::FSMState_EmptyUpdate::do_exec(ebi::FileSelect::TMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r5, 0x10(r3)
	  cmplwi    r5, 0
	  beq-      .loc_0x20
	  subi      r0, r5, 0x1
	  stw       r0, 0x10(r3)

	.loc_0x20:
	  lwz       r0, 0x10(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x44
	  lwz       r12, 0x0(r3)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl

	.loc_0x44:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E15EC
 * Size:	000030
 */
void transit__Q24Game33FSMState<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg(void)
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
 * Address:	803E161C
 * Size:	00000C
 */
void FileSelect::FSMState_CardRequest::do_init(ebi::FileSelect::TMgr*,
                                               Game::StateArg*)
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
 * Address:	803E1628
 * Size:	000278
 */
void FileSelect::FSMState_CardRequest::do_exec(ebi::FileSelect::TMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x20(r1)
	  mflr      r0
	  lis       r5, 0x8049
	  stw       r0, 0x24(r1)
	  stw       r31, 0x1C(r1)
	  mr        r31, r3
	  stw       r30, 0x18(r1)
	  stw       r29, 0x14(r1)
	  addi      r29, r5, 0x7010
	  stw       r28, 0x10(r1)
	  mr        r28, r4
	  lwz       r0, 0x10(r3)
	  cmpwi     r0, 0x1
	  beq-      .loc_0xC4
	  bge-      .loc_0x48
	  cmpwi     r0, 0
	  bge-      .loc_0x54
	  b         .loc_0x258

	.loc_0x48:
	  cmpwi     r0, 0x3
	  bge-      .loc_0x258
	  b         .loc_0x11C

	.loc_0x54:
	  lwz       r3, -0x6514(r13)
	  li        r30, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0x7C
	  bl        0x5F928
	  cmplwi    r3, 0xB
	  beq-      .loc_0x7C
	  li        r30, 0x1

	.loc_0x7C:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x258
	  mr        r3, r31
	  mr        r4, r28
	  lwz       r12, 0x0(r31)
	  lwz       r12, 0x28(r12)
	  mtctr     r12
	  bctrl
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0xB8
	  addi      r3, r29, 0x5C
	  addi      r5, r29, 0x74
	  li        r4, 0x5A
	  crclr     6, 0x6
	  bl        -0x3B709C

	.loc_0xB8:
	  li        r0, 0x1
	  stw       r0, 0x10(r31)
	  b         .loc_0x258

	.loc_0xC4:
	  lwz       r3, -0x6514(r13)
	  li        r30, 0
	  lwz       r3, 0x5C(r3)
	  lwz       r0, 0xA8(r3)
	  cmpwi     r0, 0
	  bne-      .loc_0xEC
	  bl        0x5F8B8
	  cmplwi    r3, 0xB
	  beq-      .loc_0xEC
	  li        r30, 0x1

	.loc_0xEC:
	  rlwinm.   r0,r30,0,24,31
	  beq-      .loc_0x258
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x643E8
	  stw       r3, 0x14(r31)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x643D8
	  li        r0, 0x2
	  stw       r0, 0x10(r31)
	  b         .loc_0x258

	.loc_0x11C:
	  lwz       r0, 0x14(r31)
	  cmplwi    r0, 0xE
	  bgt-      .loc_0x230
	  lis       r5, 0x804F
	  rlwinm    r0,r0,2,0,29
	  subi      r5, r5, 0x6988
	  lwzx      r0, r5, r0
	  mtctr     r0
	  bctr
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x2C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x30(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x34(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x38(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x3C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x40(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x44(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x48(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x4C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x50(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x54(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0x58(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0x258

	.loc_0x230:
	  addi      r3, r29, 0x5C
	  addi      r5, r29, 0x80
	  li        r4, 0x96
	  crclr     6, 0x6
	  bl        -0x3B7228
	  addi      r3, r29, 0x5C
	  addi      r5, r29, 0x74
	  li        r4, 0x97
	  crclr     6, 0x6
	  bl        -0x3B723C

	.loc_0x258:
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
 * Address:	803E18A0
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardNoCard(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0
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
 * Address:	803E18DC
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardIOError(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
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
 * Address:	803E1918
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardWrongDevice(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x2
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
 * Address:	803E1954
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardWrongSector(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x3
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
 * Address:	803E1990
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardBroken(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x4
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
 * Address:	803E19CC
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardEncoding(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x4
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
 * Address:	803E1A08
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardNoFileSpace(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x5
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
 * Address:	803E1A44
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardNoFileEntry(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x5
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
 * Address:	803E1A80
 * Size:	00003C
 */
void FileSelect::FSMState_CardRequest::do_transitCardFileOpenError(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x4
	  stw       r0, 0x14(r1)
	  li        r0, 0x6
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
 * Address:	803E1ABC
 * Size:	00002C
 */
void FileSelect::FSMState_CardRequest::do_transitCardPlayerDataBroken(
    (ebi::FileSelect::TMgr*))
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
 * Address:	803E1AE8
 * Size:	000054
 */
void FileSelect::FSMState_CardRequest::do_transitCardSerialNoError(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8049
	  li        r4, 0xE0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x7010
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0xAC
	  crclr     6, 0x6
	  bl        -0x3B74D0
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0x74
	  li        r4, 0xE1
	  crclr     6, 0x6
	  bl        -0x3B74E4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1B3C
 * Size:	000028
 */
void FileSelect::FSMState_MountCheck::do_cardRequest(ebi::FileSelect::TMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x64D14
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1B64
 * Size:	000034
 */
void FileSelect::FSMState_MountCheck::do_transitCardReady(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x3
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
 * Address:	803E1B98
 * Size:	00002C
 */
void FileSelect::FSMState_GetPlayerHeader::do_cardRequest(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  addi      r4, r4, 0xF48
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  bl        0x61A74
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1BC4
 * Size:	000034
 */
void FileSelect::FSMState_GetPlayerHeader::do_transitCardReady(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  li        r5, 0x5
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
 * Address:	803E1BF8
 * Size:	000038
 */
void FileSelect::FSMState_GetPlayerHeader::do_transitCardSerialNoError(
    (ebi::FileSelect::TMgr*))
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  stw       r0, 0x14(r1)
	  addi      r3, r3, 0x706C
	  li        r4, 0x105
	  addi      r5, r5, 0x7084
	  crclr     6, 0x6
	  bl        -0x3B75DC
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1C30
 * Size:	000044
 */
void FileSelect::FSMState_ScreenFileSelect::do_init(ebi::FileSelect::TMgr*,
                                                    Game::StateArg*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r4
	  addi      r3, r31, 0x18
	  addi      r4, r31, 0xF48
	  bl        -0x1BD4
	  addi      r3, r31, 0x18
	  bl        -0x1A00
	  addi      r3, r31, 0xC78
	  bl        -0xE8A4
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E1C74
 * Size:	0000C4
 */
void FileSelect::FSMState_ScreenFileSelect::do_exec(ebi::FileSelect::TMgr*)
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
	  bl        -0x19A4
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xAC
	  lwz       r0, 0xC50(r31)
	  cmpwi     r0, 0x4
	  beq-      .loc_0x90
	  bge-      .loc_0x50
	  cmpwi     r0, 0x3
	  bge-      .loc_0x80
	  cmpwi     r0, 0x1
	  bge-      .loc_0x5C
	  b         .loc_0xAC

	.loc_0x50:
	  cmpwi     r0, 0x6
	  bge-      .loc_0xAC
	  b         .loc_0xA0

	.loc_0x5C:
	  mr        r3, r30
	  mr        r4, r31
	  lwz       r12, 0x0(r30)
	  li        r5, 0x2
	  li        r6, 0
	  lwz       r12, 0x1C(r12)
	  mtctr     r12
	  bctrl
	  b         .loc_0xAC

	.loc_0x80:
	  mr        r3, r31
	  li        r4, 0x2
	  bl        0x59C
	  b         .loc_0xAC

	.loc_0x90:
	  mr        r3, r31
	  li        r4, 0x1
	  bl        0x58C
	  b         .loc_0xAC

	.loc_0xA0:
	  mr        r3, r31
	  li        r4, 0x3
	  bl        0x57C

	.loc_0xAC:
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
 * Address:	803E1D38
 * Size:	000060
 */
void FileSelect::FSMState_CardError::do_init(ebi::FileSelect::TMgr*,
                                             Game::StateArg*)
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
	  addi      r3, r3, 0x706C
	  li        r4, 0x13F
	  addi      r5, r5, 0x7084
	  crclr     6, 0x6
	  bl        -0x3B7730

	.loc_0x3C:
	  lwz       r4, 0x0(r31)
	  addi      r3, r30, 0xC78
	  bl        -0xED3C
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
 * Address:	803E1D98
 * Size:	0000B8
 */
void FileSelect::FSMState_CardError::do_exec(ebi::FileSelect::TMgr*)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  lis       r3, 0x8049
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  addi      r31, r3, 0x7010
	  stw       r30, 0x8(r1)
	  mr        r30, r4
	  addi      r3, r30, 0xC78
	  bl        -0xE7E8
	  rlwinm.   r0,r3,0,24,31
	  beq-      .loc_0xA0
	  lwz       r6, 0xF18(r30)
	  cmpwi     r6, 0x2
	  beq-      .loc_0x6C
	  bge-      .loc_0x78
	  cmpwi     r6, 0x1
	  bge-      .loc_0x4C
	  b         .loc_0x78

	.loc_0x4C:
	  lwz       r3, -0x6514(r13)
	  li        r4, 0
	  lwz       r3, 0x5C(r3)
	  bl        0x634A4
	  mr        r3, r30
	  li        r4, 0x1
	  bl        0x49C
	  b         .loc_0xA0

	.loc_0x6C:
	  mr        r3, r30
	  bl        0x2CC
	  b         .loc_0xA0

	.loc_0x78:
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0xD4
	  li        r4, 0x156
	  crclr     6, 0x6
	  bl        -0x3B77E0
	  addi      r3, r31, 0x5C
	  addi      r5, r31, 0x74
	  li        r4, 0x157
	  crclr     6, 0x6
	  bl        -0x3B77F4

	.loc_0xA0:
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
 * Address:	........
 * Size:	0000C0
 */
FileSelect::TMgr::TMgr(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E1E50
 * Size:	000034
 */
void start__Q24Game37StateMachine<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  li        r0, 0
	  stw       r0, 0x1008(r4)
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
 * Address:	803E1E84
 * Size:	000054
 */
FS::TMgr::~TMgr(void)
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
	  bl        -0x1990
	  extsh.    r0, r31
	  ble-      .loc_0x38
	  mr        r3, r30
	  bl        -0x3BDE04

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
 * Address:	803E1ED8
 * Size:	000084
 */
FileSelect::TMgr::~TMgr(void)
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
	  beq-      .loc_0x68
	  lis       r3, 0x804F
	  li        r0, 0
	  subi      r4, r3, 0x694C
	  addi      r3, r30, 0xC78
	  stw       r4, 0x0(r30)
	  li        r4, -0x1
	  stw       r0, -0x65A0(r13)
	  bl        -0x56F8
	  addi      r3, r30, 0x18
	  li        r4, -0x1
	  bl        -0x9C
	  mr        r3, r30
	  li        r4, 0
	  bl        -0x3C4EF8
	  extsh.    r0, r31
	  ble-      .loc_0x68
	  mr        r3, r30
	  bl        -0x3BDE88

	.loc_0x68:
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
 * Address:	803E1F5C
 * Size:	0000DC
 */
void FileSelect::TMgr::createInstance(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  lwz       r0, -0x65A0(r13)
	  cmplwi    r0, 0
	  bne-      .loc_0xC4
	  li        r3, 0x100C
	  bl        -0x3BE0D8
	  mr.       r31, r3
	  beq-      .loc_0xC0
	  bl        -0x3C4FBC
	  lis       r4, 0x804F
	  addi      r3, r31, 0x18
	  subi      r0, r4, 0x694C
	  stw       r0, 0x0(r31)
	  bl        -0x2010
	  addi      r3, r31, 0xC78
	  bl        -0xF954
	  li        r0, 0
	  addi      r3, r31, 0xF48
	  stw       r0, 0xF40(r31)
	  stw       r0, 0xF44(r31)
	  bl        0x60930
	  lis       r4, 0x804F
	  lis       r3, 0x804F
	  subi      r0, r4, 0x6940
	  li        r5, -0x1
	  stw       r0, 0xFEC(r31)
	  subi      r0, r3, 0x6754
	  addi      r3, r31, 0xFEC
	  mr        r4, r31
	  stw       r5, 0x1004(r31)
	  stw       r0, 0xFEC(r31)
	  lwz       r12, 0xFEC(r31)
	  lwz       r12, 0x8(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xFEC
	  mr        r4, r31
	  lwz       r12, 0xFEC(r31)
	  li        r5, 0
	  li        r6, 0
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  li        r0, 0
	  stb       r0, 0xFE9(r31)

	.loc_0xC0:
	  stw       r31, -0x65A0(r13)

	.loc_0xC4:
	  lwz       r0, 0x14(r1)
	  lwz       r3, -0x65A0(r13)
	  lwz       r31, 0xC(r1)
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
void FileSelect::TMgr::deleteInstance(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	........
 * Size:	000008
 */
void FileSelect::TMgr::getInstance(void)
{
	// UNUSED FUNCTION
}

/*
 * --INFO--
 * Address:	803E2038
 * Size:	000058
 */
void FileSelect::TMgr::onDvdErrorOccured(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x65A0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x48
	  bl        0x1FC
	  rlwinm.   r0,r3,0,24,31
	  bne-      .loc_0x3C
	  lwz       r3, -0x65A0(r13)
	  li        r0, 0x1
	  stb       r0, 0xFE9(r3)
	  lwz       r3, -0x65A0(r13)
	  bl        0xB4
	  b         .loc_0x48

	.loc_0x3C:
	  lwz       r3, -0x65A0(r13)
	  li        r0, 0
	  stb       r0, 0xFE9(r3)

	.loc_0x48:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2090
 * Size:	000044
 */
void FileSelect::TMgr::onDvdErrorRecovered(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, -0x65A0(r13)
	  cmplwi    r3, 0
	  beq-      .loc_0x34
	  lbz       r0, 0xFE9(r3)
	  cmplwi    r0, 0
	  beq-      .loc_0x34
	  bl        .loc_0x44
	  lwz       r3, -0x65A0(r13)
	  li        r0, 0
	  stb       r0, 0xFE9(r3)

	.loc_0x34:
	  lwz       r0, 0x14(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr

	.loc_0x44:
	*/
}

/*
 * --INFO--
 * Address:	803E20D4
 * Size:	00004C
 */
void FileSelect::TMgr::start(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  mr        r4, r3
	  li        r5, 0x1
	  stw       r0, 0x14(r1)
	  li        r0, 0x1
	  li        r6, 0
	  stb       r0, 0xFE8(r3)
	  li        r0, 0
	  addi      r3, r4, 0xFEC
	  stw       r0, 0xFE4(r4)
	  lwz       r12, 0xFEC(r4)
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
 * Address:	803E2120
 * Size:	000058
 */
void FileSelect::TMgr::forceQuit(void)
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
	  addi      r3, r31, 0xFEC
	  lwz       r12, 0xFEC(r31)
	  mr        r4, r31
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xC78
	  bl        -0xEDA0
	  addi      r3, r31, 0x18
	  bl        -0x1EC8
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2178
 * Size:	00008C
 */
void FileSelect::TMgr::update(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  addi      r3, r31, 0xFEC
	  lwz       r12, 0xFEC(r31)
	  mr        r4, r31
	  lwz       r12, 0x10(r12)
	  mtctr     r12
	  bctrl
	  mr        r3, r31
	  bl        0x14C
	  cmpwi     r3, 0
	  beq-      .loc_0x78
	  lwz       r3, -0x6514(r13)
	  lwz       r3, 0x5C(r3)
	  lwz       r12, 0x0(r3)
	  lwz       r12, 0xC(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0xC78
	  bl        -0xECA4
	  addi      r3, r31, 0x18
	  bl        -0x2064
	  lwz       r3, 0xF40(r31)
	  cmplwi    r3, 0
	  beq-      .loc_0x78
	  subi      r0, r3, 0x1
	  stw       r0, 0xF40(r31)

	.loc_0x78:
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E2204
 * Size:	000044
 */
void FileSelect::TMgr::draw(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0xDC
	  cmpwi     r3, 0
	  beq-      .loc_0x30
	  addi      r3, r31, 0x18
	  bl        -0x201C
	  addi      r3, r31, 0xC78
	  bl        -0xEC98

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
 * Address:	803E2248
 * Size:	000004
 */
void FileSelect::TMgr::showInfo(void) { }

/*
 * --INFO--
 * Address:	803E224C
 * Size:	00004C
 */
void FileSelect::TMgr::isFinish(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  bl        0x94
	  cmpwi     r3, 0
	  bne-      .loc_0x34
	  lbz       r0, 0xFE9(r31)
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
 * Address:	803E2298
 * Size:	00005C
 */
void FileSelect::TMgr::goEnd_(ebi::FileSelect::TMgr::enumEnd)
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
	  stw       r4, 0xFE4(r3)
	  addi      r3, r31, 0xFEC
	  mr        r4, r31
	  lwz       r12, 0xFEC(r31)
	  lwz       r12, 0x14(r12)
	  mtctr     r12
	  bctrl
	  addi      r3, r31, 0x18
	  bl        -0x203C
	  addi      r3, r31, 0xC78
	  bl        -0xEF24
	  lwz       r0, 0x14(r1)
	  lwz       r31, 0xC(r1)
	  mtlr      r0
	  addi      r1, r1, 0x10
	  blr
	*/
}

/*
 * --INFO--
 * Address:	803E22F4
 * Size:	000058
 */
void FileSelect::TMgr::getStateID(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  stw       r31, 0xC(r1)
	  mr        r31, r3
	  lwz       r0, 0x1008(r3)
	  cmplwi    r0, 0
	  bne-      .loc_0x3C
	  lis       r3, 0x8049
	  lis       r5, 0x8049
	  addi      r3, r3, 0x706C
	  li        r4, 0x216
	  addi      r5, r5, 0x7084
	  crclr     6, 0x6
	  bl        -0x3B7CEC

	.loc_0x3C:
	  lwz       r3, 0x1008(r31)
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
 * Address:	803E234C
 * Size:	000004
 */
void init__Q24Game33FSMState<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgrPQ24Game8StateArg(void)
{
}

/*
 * --INFO--
 * Address:	803E2350
 * Size:	000004
 */
void exec__Q24Game33FSMState<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgr(void)
{
}

/*
 * --INFO--
 * Address:	803E2354
 * Size:	000004
 */
void cleanup__Q24Game33FSMState<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgr(void)
{
}

/*
 * --INFO--
 * Address:	803E2358
 * Size:	000004
 */
void resume__Q24Game33FSMState<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgr(void)
{
}

/*
 * --INFO--
 * Address:	803E235C
 * Size:	000004
 */
void restart__Q24Game33FSMState<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgr(void)
{
}

/*
 * --INFO--
 * Address:	803E2360
 * Size:	000004
 */
void init__Q24Game37StateMachine<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgr(void)
{
}

/*
 * --INFO--
 * Address:	803E2364
 * Size:	000038
 */
void exec__Q24Game37StateMachine<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgr(void)
{
	/*
	.loc_0x0:
	  stwu      r1, -0x10(r1)
	  mflr      r0
	  stw       r0, 0x14(r1)
	  lwz       r3, 0x1008(r4)
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

} // namespace ebi

/*
 * --INFO--
 * Address:	803E239C
 * Size:	000064
 */
void create__Q24Game37StateMachine<ebi::FileSelect::TMgr> Fi(void)
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
	  bl        -0x3BE418
	  stw       r3, 0x4(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3BE428
	  stw       r3, 0x10(r31)
	  lwz       r0, 0xC(r31)
	  rlwinm    r3,r0,2,0,29
	  bl        -0x3BE438
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
 * Address:	803E2400
 * Size:	00009C
 */
void transit__Q24Game37StateMachine<ebi::FileSelect::TMgr>
FPQ33ebi10FileSelect4TMgriPQ24Game8StateArg(void)
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
	  lwz       r30, 0x1008(r4)
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
	  stw       r3, 0x1008(r28)
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
 * Address:	803E249C
 * Size:	000084
 */
void registerState__Q24Game37StateMachine<ebi::FileSelect::TMgr>
FPQ24Game33FSMState<ebi::FileSelect::TMgr>(void)
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
