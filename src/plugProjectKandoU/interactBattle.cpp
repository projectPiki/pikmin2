#include "interactBattle.h"

/*
 * --INFO--
 * Address:	........
 * Size:	0000E4
 */
// void _Print(char*, ...)
//{
//    // UNUSED FUNCTION
//}

/*
 * --INFO--
 * Address:	8019FE78
 * Size:	000044
 */
namespace Game {
bool InteractFlick::actCommon(Creature* creature)
{
    if (creature->isStickTo()) {
        creature->endStick();
    }

    return true;
};

/*
 * --INFO--
 * Address:	8019FEBC
 * Size:	00006C
 */
bool InteractAttack::actCommon(Creature* param_1)
{
    return !pCreature->m_vtbl->isNavi(pCreature)
        || param_1->m_vtbl->isTeki(param_1);
}
/*
.loc_0x0:
  stwu      r1, -0x10(r1)
  mflr      r0
  stw       r0, 0x14(r1)
  stw       r31, 0xC(r1)
  mr        r31, r4
  lwz       r3, 0x4(r3)
  lwz       r12, 0x0(r3)
  lwz       r12, 0x1C(r12)
  mtctr     r12
  bctrl
  rlwinm.   r0,r3,0,24,31
  beq-      .loc_0x54
  mr        r3, r31
  lwz       r12, 0x0(r31)
  lwz       r12, 0x7C(r12)
  mtctr     r12
  bctrl
  rlwinm.   r0,r3,0,24,31
  bne-      .loc_0x54
  li        r3, 0
  b         .loc_0x58

.loc_0x54:
  li        r3, 0x1

.loc_0x58:
  lwz       r0, 0x14(r1)
  lwz       r31, 0xC(r1)
  mtlr      r0
  addi      r1, r1, 0x10
  blr
*/

///*
// * --INFO--
// * Address:	8019FF28
// * Size:	000008
// */
// void Game::InteractSwallow::actCommon((Game::Creature*))
//{
//    /*
//    .loc_0x0:
//      li        r3, 0x1
//      blr
//    */
//}

///*
// * --INFO--
// * Address:	8019FF30
// * Size:	000008
// */
// void Game::InteractKill::actCommon((Game::Creature*))
//{
//    /*
//    .loc_0x0:
//      li        r3, 0x1
//      blr
//    */
//}
}; // namespace Game
