#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game12InteractDrop
    __vt__Q24Game12InteractDrop:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game12InteractDropFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game20InteractFlyCollision
    __vt__Q24Game20InteractFlyCollision:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game20InteractFlyCollisionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game13InteractPress
    __vt__Q24Game13InteractPress:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game13InteractPressFPQ24Game4Piki
        .4byte actNavi__Q24Game13InteractPressFPQ24Game4Navi
        .4byte actEnemy__Q24Game13InteractPressFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game18InteractEarthquake
    __vt__Q24Game18InteractEarthquake:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game18InteractEarthquakeFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game15InteractHipdrop
    __vt__Q24Game15InteractHipdrop:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game14InteractAttackFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game14InteractAttackFPQ24Game4Navi
        .4byte actEnemy__Q24Game15InteractHipdropFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game14InteractAttackFPQ24Game8BaseItem
        .4byte 0
*/

namespace Game {

/*
 * --INFO--
 * Address:	8010BA00
 * Size:	00007C
 */
void InteractHipdrop::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r4, 4(r30)
	lwz      r12, 0x27c(r12)
	lfs      f1, 8(r30)
	lwz      r5, 0xc(r30)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010BA64
	mr       r3, r31
	lwz      r4, 4(r30)
	lwz      r12, 0(r31)
	lfs      f1, 8(r30)
	lwz      r12, 0x284(r12)
	lwz      r5, 0xc(r30)
	mtctr    r12
	bctrl

lbl_8010BA64:
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
 * Address:	8010BA7C
 * Size:	000074
 */
void InteractEarthquake::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	bl       checkBirthTypeDropEarthquake__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010BAD0
	mr       r3, r30
	lwz      r4, 4(r29)
	lwz      r12, 0(r30)
	lfs      f1, 8(r29)
	lwz      r12, 0x28c(r12)
	mtctr    r12
	bctrl
	mr       r31, r3

lbl_8010BAD0:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	8010BAF0
 * Size:	000040
 */
void InteractPress::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r4, 4(r5)
	lwz      r12, 0x27c(r12)
	lfs      f1, 8(r5)
	lwz      r5, 0xc(r5)
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
 * Address:	8010BB30
 * Size:	000040
 */
void InteractFlyCollision::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r4, 4(r5)
	lwz      r12, 0x280(r12)
	lfs      f1, 8(r5)
	lwz      r5, 0xc(r5)
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
 * Address:	8010BB70
 * Size:	00011C
 */
void InteractAttack::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	stw      r29, 0x14(r1)
	mr       r29, r4
	stw      r28, 0x10(r1)
	mr       r28, r3
	lwz      r0, 0x1e0(r4)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_8010BC68
	lwz      r3, 4(r28)
	li       r30, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8010BC0C
	lwz      r3, 4(r28)
	lhz      r0, 0x2dc(r3)
	cmplwi   r0, 0
	bne      lbl_8010BBF0
	lwz      r3, 0x1e0(r29)
	rlwinm.  r0, r3, 0, 0xf, 0xf
	bne      lbl_8010BC10
	oris     r0, r3, 1
	li       r30, 1
	stw      r0, 0x1e0(r29)
	b        lbl_8010BC10

lbl_8010BBF0:
	lwz      r3, 0x1e0(r29)
	rlwinm.  r0, r3, 0, 0xe, 0xe
	bne      lbl_8010BC10
	oris     r0, r3, 2
	li       r30, 1
	stw      r0, 0x1e0(r29)
	b        lbl_8010BC10

lbl_8010BC0C:
	li       r30, 1

lbl_8010BC10:
	clrlwi.  r0, r30, 0x18
	beq      lbl_8010BC68
	lwz      r0, 0x1e0(r29)
	rlwinm.  r0, r0, 0, 0x16, 0x16
	beq      lbl_8010BC44
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x2ac(r12)
	mtctr    r12
	bctrl
	lfs      f0, 8(r28)
	fmuls    f0, f0, f1
	stfs     f0, 8(r28)

lbl_8010BC44:
	mr       r3, r29
	lwz      r4, 4(r28)
	lwz      r12, 0(r29)
	lfs      f1, 8(r28)
	lwz      r12, 0x278(r12)
	lwz      r5, 0xc(r28)
	mtctr    r12
	bctrl
	mr       r31, r3

lbl_8010BC68:
	lwz      r0, 0x24(r1)
	mr       r3, r31
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
 * Address:	8010BC8C
 * Size:	000038
 */
void InteractDrop::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	mr       r5, r3
	mr       r3, r4
	stw      r0, 0x14(r1)
	lwz      r12, 0(r3)
	lwz      r4, 4(r5)
	lwz      r12, 0x288(r12)
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
 * Address:	8010BCC4
 * Size:	000078
 */
void InteractBomb::actEnemy(Game::EnemyBase*)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	li       r31, 0
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	bl       isBeforeAppearState__Q24Game9EnemyBaseFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_8010BD1C
	mr       r3, r30
	addi     r5, r29, 0xc
	lwz      r12, 0(r30)
	lwz      r4, 4(r29)
	lwz      r12, 0x294(r12)
	lfs      f1, 8(r29)
	mtctr    r12
	bctrl
	mr       r31, r3

lbl_8010BD1C:
	lwz      r0, 0x24(r1)
	mr       r3, r31
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	lwz      r29, 0x14(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}
} // namespace Game
