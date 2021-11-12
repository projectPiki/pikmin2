#include "types.h"

#include "game/interactBattle.h"
#include "game/Creature.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game12InteractKill
    __vt__Q24Game12InteractKill:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game12InteractKillFPQ24Game8Creature
        .4byte actPiki__Q24Game12InteractKillFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game15InteractSwallow
    __vt__Q24Game15InteractSwallow:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game15InteractSwallowFPQ24Game8Creature
        .4byte actPiki__Q24Game15InteractSwallowFPQ24Game4Piki
        .4byte actNavi__Q24Game14InteractAttackFPQ24Game4Navi
        .4byte actEnemy__Q24Game14InteractAttackFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
    .global __vt__Q24Game14InteractAttack
    __vt__Q24Game14InteractAttack:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game14InteractAttackFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game14InteractAttackFPQ24Game4Navi
        .4byte actEnemy__Q24Game14InteractAttackFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
    .global __vt__Q24Game13InteractFlick
    __vt__Q24Game13InteractFlick:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game13InteractFlickFPQ24Game8Creature
        .4byte actPiki__Q24Game13InteractFlickFPQ24Game4Piki
        .4byte actNavi__Q24Game13InteractFlickFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
*/

/*
 * --INFO--
 * Address:	8019FE78
 * Size:	000044
 */
namespace Game {
bool InteractFlick::actCommon(Creature* param_1)
{
	if (param_1->isStickTo()) {
		param_1->endStick();
	}

	return true;
};

///*
// * --INFO--
// * Address:	8019FEBC
// * Size:	00006C
// */
// void Game::InteractAttack::actCommon(Game::Creature*)
//{
//    /*
//    .loc_0x0:
//      stwu      r1, -0x10(r1)
//      mflr      r0
//      stw       r0, 0x14(r1)
//      stw       r31, 0xC(r1)
//      mr        r31, r4
//      lwz       r3, 0x4(r3)
//      lwz       r12, 0x0(r3)
//      lwz       r12, 0x1C(r12)
//      mtctr     r12
//      bctrl
//      rlwinm.   r0,r3,0,24,31
//      beq-      .loc_0x54
//      mr        r3, r31
//      lwz       r12, 0x0(r31)
//      lwz       r12, 0x7C(r12)
//      mtctr     r12
//      bctrl
//      rlwinm.   r0,r3,0,24,31
//      bne-      .loc_0x54
//      li        r3, 0
//      b         .loc_0x58

//    .loc_0x54:
//      li        r3, 0x1

//    .loc_0x58:
//      lwz       r0, 0x14(r1)
//      lwz       r31, 0xC(r1)
//      mtlr      r0
//      addi      r1, r1, 0x10
//      blr
//    */
//}

///*
// * --INFO--
// * Address:	8019FF28
// * Size:	000008
// */
// void Game::InteractSwallow::actCommon(Game::Creature*)
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
// void Game::InteractKill::actCommon(Game::Creature*)
//{
//    /*
//    .loc_0x0:
//      li        r3, 0x1
//      blr
//    */
//}
}; // namespace Game
