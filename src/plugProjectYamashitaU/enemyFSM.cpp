#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game17EnemyStateMachine
    __vt__Q24Game17EnemyStateMachine:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase
        .4byte
   start__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   exec__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   transit__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseiPQ24Game8StateArg
        .4byte
   doDirectDraw__Q24Game17EnemyStateMachineFPQ24Game9EnemyBaseR8Graphics .4byte
   getCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBase .4byte
   setCurrState__Q24Game17EnemyStateMachineFPQ24Game9EnemyBasePQ24Game13EnemyFSMState
    .global __vt__Q24Game13EnemyFSMState
    __vt__Q24Game13EnemyFSMState:
        .4byte 0
        .4byte 0
        .4byte init__Q24Game13EnemyFSMStateFPQ24Game9EnemyBasePQ24Game8StateArg
        .4byte exec__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte cleanup__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte resume__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte restart__Q24Game13EnemyFSMStateFPQ24Game9EnemyBase
        .4byte
   transit__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseiPQ24Game8StateArg .4byte
   doDirectDraw__Q24Game13EnemyFSMStateFPQ24Game9EnemyBaseR8Graphics

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518148
    lbl_80518148:
        .4byte 0x6E6F206E
        .4byte 0x616D6500
*/

namespace Game {

/*
 * --INFO--
 * Address:	8013070C
 * Size:	000030
 */
void EnemyFSMState::transit(Game::EnemyBase*, int, Game::StateArg*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	lwz      r3, 8(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013073C
 * Size:	00005C
 */
void EnemyStateMachine::doDirectDraw(Game::EnemyBase*, Graphics&)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r5
	stw      r30, 8(r1)
	mr       r30, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r30
	mr       r5, r31
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130798
 * Size:	000080
 */
void EnemyStateMachine::start(Game::EnemyBase*, int, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r6
	stw      r30, 0x18(r1)
	mr       r30, r5
	li       r5, 0
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	mr       r5, r30
	mr       r6, r31
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130818
 * Size:	00004C
 */
void EnemyStateMachine::exec(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r31
	lwz      r12, 0xc(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130864
 * Size:	0000A4
 */
void EnemyStateMachine::create(int)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	li       r0, 0
	stw      r31, 0xc(r1)
	mr       r31, r3
	stw      r4, 0xc(r3)
	stw      r0, 8(r3)
	lwz      r0, 0xc(r3)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 4(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	stw      r3, 0x10(r31)
	lwz      r0, 0xc(r31)
	slwi     r3, r0, 2
	bl       __nwa__FUl
	li       r6, 0
	stw      r3, 0x14(r31)
	mr       r5, r6
	li       r7, 0
	li       r4, -1
	b        lbl_801308E8

lbl_801308C8:
	lwz      r3, 4(r31)
	addi     r7, r7, 1
	stwx     r5, r3, r6
	lwz      r3, 0x10(r31)
	stwx     r4, r3, r6
	lwz      r3, 0x14(r31)
	stwx     r4, r3, r6
	addi     r6, r6, 4

lbl_801308E8:
	lwz      r0, 0xc(r31)
	cmpw     r7, r0
	blt      lbl_801308C8
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130908
 * Size:	000084
 */
void EnemyStateMachine::registerState(Game::EnemyFSMState*)
{
	/*
	lwz      r6, 8(r3)
	lwz      r0, 0xc(r3)
	cmpw     r6, r0
	bgelr
	lwz      r5, 4(r3)
	slwi     r0, r6, 2
	stwx     r4, r5, r0
	lwz      r5, 4(r4)
	cmpwi    r5, 0
	blt      lbl_8013093C
	lwz      r0, 0xc(r3)
	cmpw     r5, r0
	blt      lbl_80130944

lbl_8013093C:
	li       r0, 0
	b        lbl_80130948

lbl_80130944:
	li       r0, 1

lbl_80130948:
	clrlwi.  r0, r0, 0x18
	beqlr
	stw      r3, 8(r4)
	lwz      r0, 8(r3)
	lwz      r6, 4(r4)
	lwz      r5, 0x10(r3)
	slwi     r0, r0, 2
	stwx     r6, r5, r0
	lwz      r0, 4(r4)
	lwz      r5, 8(r3)
	lwz      r4, 0x14(r3)
	slwi     r0, r0, 2
	stwx     r5, r4, r0
	lwz      r4, 8(r3)
	addi     r0, r4, 1
	stw      r0, 8(r3)
	blr
	*/
}

/*
 * --INFO--
 * Address:	8013098C
 * Size:	000070
 */
void EnemyStateMachine::getCurrID(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_801309E0
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 4(r3)
	b        lbl_801309E4

lbl_801309E0:
	li       r3, -1

lbl_801309E4:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	801309FC
 * Size:	000070
 */
void EnemyStateMachine::getCurrName(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80130A50
	mr       r3, r30
	mr       r4, r31
	lwz      r12, 0(r30)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0xc(r3)
	b        lbl_80130A54

lbl_80130A50:
	addi     r3, r2, lbl_80518148@sda21

lbl_80130A54:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130A6C
 * Size:	00011C
 */
void EnemyStateMachine::transit(Game::EnemyBase*, int, Game::StateArg*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	slwi     r0, r5, 2
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r6
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r12, 0(r3)
	lwz      r7, 0x14(r3)
	lwz      r12, 0x1c(r12)
	lwzx     r31, r7, r0
	mtctr    r12
	bctrl
	cmplwi   r3, 0
	beq      lbl_80130B04
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r29
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r0, 4(r3)
	stw      r0, 0x18(r28)

lbl_80130B04:
	lwz      r0, 0xc(r28)
	cmpw     r31, r0
	blt      lbl_80130B14

lbl_80130B10:
	b        lbl_80130B10

lbl_80130B14:
	mr       r3, r28
	lwz      r5, 4(r28)
	lwz      r12, 0(r28)
	slwi     r0, r31, 2
	mr       r4, r29
	lwzx     r5, r5, r0
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r3, r28
	mr       r4, r29
	lwz      r12, 0(r28)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r12, 0(r3)
	mr       r4, r29
	mr       r5, r30
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	lwz      r28, 0x10(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130B88
 * Size:	000008
 */
void EnemyStateMachine::setCurrState(Game::EnemyBase*, Game::EnemyFSMState*)
{
	/*
	stw      r5, 0x2b4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130B90
 * Size:	000008
 */
void EnemyStateMachine::getCurrState(Game::EnemyBase*)
{
	/*
	lwz      r3, 0x2b4(r4)
	blr
	*/
}

/*
 * --INFO--
 * Address:	80130B98
 * Size:	000004
 */
void EnemyStateMachine::init(Game::EnemyBase*) { }
} // namespace Game
