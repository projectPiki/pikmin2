#include "eggAnimator.h"

/*
 * --INFO--
 * Address:	8034B63C
 * Size:	000008
 */
void Game::Egg::ProperAnimator::setAnimMgr(SysShape::AnimMgr* mgr)
{
    m_manager = mgr;
}

/*
 * --INFO--
 * Address:	8034B644
 * Size:	000008
 */
u32* Game::Egg::ProperAnimator::getAnimator(int animatorNum)
{
    return &m_animator;
}

/*
 * --INFO--
 * Address:	8034B64C
 * Size:	00005C
 */
// Game::Egg::ProperAnimator::~ProperAnimator()
// {
//     /*
//     .loc_0x0:
//       stwu      r1, -0x10(r1)
//       mflr      r0
//       stw       r0, 0x14(r1)
//       stw       r31, 0xC(r1)
//       mr.       r31, r3
//       beq-      .loc_0x44
//       lis       r3, 0x804E
//       subi      r0, r3, 0x40A0
//       stw       r0, 0x0(r31)
//       beq-      .loc_0x34
//       lis       r3, 0x804B
//       subi      r0, r3, 0x23A8
//       stw       r0, 0x0(r31)

//     .loc_0x34:
//       extsh.    r0, r4
//       ble-      .loc_0x44
//       mr        r3, r31
//       bl        -0x3275D8

//     .loc_0x44:
//       lwz       r0, 0x14(r1)
//       mr        r3, r31
//       lwz       r31, 0xC(r1)
//       mtlr      r0
//       addi      r1, r1, 0x10
//       blr
//     */
// }

// /*
//  * --INFO--
//  * Address:	8034B6A8
//  * Size:	000008
//  */
// u32* Game::Egg::ProperAnimator::getAnimator(void) { return &m_animator; }
