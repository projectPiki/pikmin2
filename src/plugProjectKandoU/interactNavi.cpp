#include "Game/Navi.h"
#include "types.h"

/*
    Generated from dpostproc

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global __vt__Q24Game14InteractKaisan
    __vt__Q24Game14InteractKaisan:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractionFPQ24Game4Piki
        .4byte actNavi__Q24Game14InteractKaisanFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game13InteractSarai
    __vt__Q24Game13InteractSarai:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game15InteractSwallowFPQ24Game8Creature
        .4byte actPiki__Q24Game15InteractSwallowFPQ24Game4Piki
        .4byte actNavi__Q24Game13InteractSaraiFPQ24Game4Navi
        .4byte actEnemy__Q24Game14InteractAttackFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game14InteractAttackFPQ24Game8BaseItem

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80519788
    lbl_80519788:
        .4byte 0xC1200000
    .global lbl_8051978C
    lbl_8051978C:
        .4byte 0x00000000
    .global lbl_80519790
    lbl_80519790:
        .4byte 0x43A2F983
    .global lbl_80519794
    lbl_80519794:
        .4byte 0xC3A2F983
    .global lbl_80519798
    lbl_80519798:
        .4byte 0x47000000
    .global lbl_8051979C
    lbl_8051979C:
        .float 0.1
    .global lbl_805197A0
    lbl_805197A0:
        .4byte 0x42C80000
    .global lbl_805197A4
    lbl_805197A4:
        .4byte 0x42480000
    .global lbl_805197A8
    lbl_805197A8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

#include "Game/Navi.h"
#include "Game/NaviState.h"
#include "Game/Interaction.h"
#include "Game/Entities/Sarai.h"

namespace Game {

/*
 * --INFO--
 * Address:	801D7E64
 * Size:	000074
 */
bool Navi::stimulate(Game::Interaction& interaction)
{
	if (interaction.actCommon(this)) {
		return interaction.actNavi(this);
	}

	return false;
}

/*
 * --INFO--
 * Address:	801D7ED8
 * Size:	00008C
 */
bool InteractSarai::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & 0x20) {
		if (!navi->isStickTo()) {
			navi->startStick(m_creature, m_collPart);
			navi->transit(NSID_Sarai, nullptr);
		}

		return true;
	}
}

/*
 * --INFO--
 * Address:	801D7F64
 * Size:	000080
 */
bool InteractBomb::actNavi(Game::Navi* navi)
{
	if ((gameSystem->m_flags & 0x20) == 0) {
		return false;
	}

	NaviFlickArg flickArg(m_creature, m_direction, m_damage);
	navi->transit(NSID_Flick, &flickArg);
	return true;
}

/*
 * --INFO--
 * Address:	801D7FE4
 * Size:	0000E0
 */
bool InteractWind::actNavi(Game::Navi* navi)
{
	OlimarData* oData = navi->getOlimarData();
	if (oData->hasItem(OlimarData::ODII_RepugnantAppendage)) {
		return false;
	}

	NaviFlickArg flickArg(m_creature, m_direction, m_damage);

	if (navi->m_currentState->m_id == NSID_Flick && ((NaviFlickState*)navi->m_currentState)->m_flicker == m_creature) {
		return false;
	}

	if (navi->m_currentState->m_id == NSID_KokeDamage && ((NaviKokeDamageState*)navi->m_currentState)->m_creature == m_creature) {
		return false;
	}

	navi->transit(NSID_Flick, &flickArg);
	return true;
}

/*
 * --INFO--
 * Address:	801D80C4
 * Size:	0000B4
 */
bool InteractDenki::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & 0x20) {
		if (!playData->m_olimarData->hasItem(OlimarData::ODII_DreamMaterial)) {
			NaviFlickArg flickArg(m_creature, m_direction, m_damage);
			navi->transit(NSID_Flick, &flickArg);
			return true;
		}

		return false;
	}
}

/*
 * --INFO--
 * Address:	801D8178
 * Size:	000044
 */
bool InteractFallMeck::actNavi(Game::Navi* navi)
{
	NaviFallMeckArg fmArg(_08);
	navi->transit(NSID_FallMeck, &fmArg);
	return true;
}

/*
 * --INFO--
 * Address:	801D81BC
 * Size:	0001F8
 * 77% complete
 */
bool InteractFlick::actNavi(Game::Navi* navi)
{
	if (!gameSystem || gameSystem->m_flags & 0x20) {
		if (!playData->isDemoFlag(DEMO_Reunite_Captains)) {
			return false;
		}

		f32 dir = _10 < -10.0f ? navi->getFaceDir() : -10;

		f32 zRot = -pikmin2_cosf(dir);
		f32 xRot = -pikmin2_sinf(dir);

		f32 knockBack = m_knockback * randWeightFloat(0.1f) + m_knockback;

		Vector3f direction(xRot * knockBack, randWeightFloat(50.0f) + 100.0f, zRot * knockBack);
		NaviFlickArg flickArg(m_creature, direction, knockBack);
		navi->transit(NSID_Flick, &flickArg);
		return true;
	}
	/*
	stwu     r1, -0x80(r1)
	mflr     r0
	stw      r0, 0x84(r1)
	stfd     f31, 0x70(r1)
	psq_st   f31, 120(r1), 0, qr0
	stfd     f30, 0x60(r1)
	psq_st   f30, 104(r1), 0, qr0
	stfd     f29, 0x50(r1)
	psq_st   f29, 88(r1), 0, qr0
	stw      r31, 0x4c(r1)
	stw      r30, 0x48(r1)
	lwz      r5, gameSystem__4Game@sda21(r13)
	mr       r30, r3
	mr       r31, r4
	cmplwi   r5, 0
	beq      lbl_801D8208
	lbz      r0, 0x3c(r5)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_801D8384

lbl_801D8208:
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x27
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801D8224
	li       r3, 0
	b        lbl_801D8384

lbl_801D8224:
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80519788@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_801D8248
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_801D8248:
	lfs      f0, lbl_8051978C@sda21(r2)
	fmr      f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_801D825C
	fneg     f2, f1

lbl_801D825C:
	lfs      f3, lbl_80519790@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_8051978C@sda21(r2)
	addi     r4, r3, sincosTable___5JMath@l
	fmuls    f2, f2, f3
	fcmpo    cr0, f1, f0
	fctiwz   f0, f2
	stfd     f0, 0x20(r1)
	lwz      r0, 0x24(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	add      r3, r4, r0
	lfs      f0, 4(r3)
	fneg     f31, f0
	bge      lbl_801D82B8
	lfs      f0, lbl_80519794@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_801D82D0

lbl_801D82B8:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_801D82D0:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f2, lbl_805197A8@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_80519798@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f3, 8(r30)
	fsubs    f2, f0, f2
	lfs      f0, lbl_8051979C@sda21(r2)
	fmuls    f0, f0, f3
	fdivs    f1, f2, f1
	fmadds   f29, f0, f1, f3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	fneg     f1, f30
	lfd      f6, lbl_805197A8@sda21(r2)
	fmuls    f0, f31, f29
	stw      r0, 0x40(r1)
	mr       r3, r31
	lfs      f4, lbl_80519798@sda21(r2)
	lfd      f5, 0x40(r1)
	fmuls    f3, f1, f29
	lfs      f2, lbl_805197A4@sda21(r2)
	addi     r5, r1, 8
	fsubs    f5, f5, f6
	lfs      f1, lbl_805197A0@sda21(r2)
	lfs      f6, 0xc(r30)
	lwz      r0, 4(r30)
	li       r4, 0xc
	fdivs    f4, f5, f4
	stw      r0, 8(r1)
	stfs     f3, 0xc(r1)
	stfs     f0, 0x14(r1)
	stfs     f6, 0x18(r1)
	fmadds   f0, f2, f4, f1
	stfs     f0, 0x10(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x22c(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_801D8384:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r0, 0x84(r1)
	lwz      r30, 0x48(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

// /*
//  * --INFO--
//  * Address:	801D83B4
//  * Size:	0000F4
//  */
// void InteractPress::actNavi(Game::Navi*)
// {
// 	/*
// 	stwu     r1, -0x20(r1)
// 	mflr     r0
// 	stw      r0, 0x24(r1)
// 	stw      r31, 0x1c(r1)
// 	stw      r30, 0x18(r1)
// 	mr       r30, r4
// 	stw      r29, 0x14(r1)
// 	mr       r29, r3
// 	lwz      r5, gameSystem__4Game@sda21(r13)
// 	cmplwi   r5, 0
// 	beq      lbl_801D83EC
// 	lbz      r0, 0x3c(r5)
// 	rlwinm.  r0, r0, 0, 0x1a, 0x1a
// 	beq      lbl_801D848C

// lbl_801D83EC:
// 	mr       r3, r30
// 	lwz      r12, 0(r30)
// 	lwz      r12, 0xa8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D8410
// 	li       r3, 0
// 	b        lbl_801D848C

// lbl_801D8410:
// 	lwz      r31, 0x274(r30)
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D8480
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x34(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D8480
// 	lfs      f1, 8(r29)
// 	mr       r3, r30
// 	li       r4, 1
// 	bl       addDamage__Q24Game4NaviFfb
// 	lwz      r3, 0x270(r30)
// 	mr       r4, r30
// 	li       r5, 0xe
// 	li       r6, 0
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	b        lbl_801D8488

// lbl_801D8480:
// 	li       r3, 0
// 	b        lbl_801D848C

// lbl_801D8488:
// 	li       r3, 1

// lbl_801D848C:
// 	lwz      r0, 0x24(r1)
// 	lwz      r31, 0x1c(r1)
// 	lwz      r30, 0x18(r1)
// 	lwz      r29, 0x14(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x20
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801D84A8
//  * Size:	0000B8
//  */
// void InteractFire::actNavi(Game::Navi*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	li       r4, 6
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	lwz      r5, playData__4Game@sda21(r13)
// 	addi     r3, r5, 0x48
// 	bl       hasItem__Q24Game10OlimarDataFi
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D84E4
// 	li       r3, 0
// 	b        lbl_801D8548

// lbl_801D84E4:
// 	lwz      r3, gameSystem__4Game@sda21(r13)
// 	cmplwi   r3, 0
// 	beq      lbl_801D8504
// 	lwz      r0, 0x44(r3)
// 	cmpwi    r0, 1
// 	bne      lbl_801D8504
// 	li       r3, 0
// 	b        lbl_801D8548

// lbl_801D8504:
// 	mr       r3, r31
// 	bl       invincible__Q24Game4NaviFv
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D851C
// 	li       r3, 0
// 	b        lbl_801D8548

// lbl_801D851C:
// 	lwz      r3, 0x26c(r31)
// 	li       r4, 0x810
// 	li       r5, 0
// 	lwz      r12, 0x28(r3)
// 	lwz      r12, 0x7c(r12)
// 	mtctr    r12
// 	bctrl
// 	lfs      f1, 8(r30)
// 	mr       r3, r31
// 	bl       startDamage__Q24Game4NaviFf
// 	li       r3, 1

// lbl_801D8548:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801D8560
//  * Size:	000090
//  */
// void InteractBubble::actNavi(Game::Navi*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	lwz      r5, gameSystem__4Game@sda21(r13)
// 	cmplwi   r5, 0
// 	beq      lbl_801D8594
// 	lbz      r0, 0x3c(r5)
// 	rlwinm.  r0, r0, 0, 0x1a, 0x1a
// 	beq      lbl_801D85D8

// lbl_801D8594:
// 	cmplwi   r5, 0
// 	beq      lbl_801D85B0
// 	lwz      r0, 0x44(r5)
// 	cmpwi    r0, 1
// 	bne      lbl_801D85B0
// 	li       r3, 0
// 	b        lbl_801D85D8

// lbl_801D85B0:
// 	mr       r3, r31
// 	bl       invincible__Q24Game4NaviFv
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D85C8
// 	li       r3, 0
// 	b        lbl_801D85D8

// lbl_801D85C8:
// 	lfs      f1, 8(r30)
// 	mr       r3, r31
// 	bl       startDamage__Q24Game4NaviFf
// 	li       r3, 1

// lbl_801D85D8:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801D85F0
//  * Size:	000008
//  */
// u32 InteractGas::actNavi(Game::Navi*) { return 0x0; }

// /*
//  * --INFO--
//  * Address:	801D85F8
//  * Size:	00005C
//  */
// void InteractBury::actNavi(Game::Navi*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	mr       r3, r31
// 	bl       invincible__Q24Game4NaviFv
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D862C
// 	li       r3, 0
// 	b        lbl_801D863C

// lbl_801D862C:
// 	lfs      f1, 8(r30)
// 	mr       r3, r31
// 	bl       startDamage__Q24Game4NaviFf
// 	li       r3, 1

// lbl_801D863C:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801D8654
//  * Size:	000358
//  */
// void InteractFue::actNavi(Game::Navi*)
// {
// 	/*
// 	stwu     r1, -0x1f0(r1)
// 	mflr     r0
// 	stw      r0, 0x1f4(r1)
// 	stw      r31, 0x1ec(r1)
// 	mr       r31, r4
// 	stw      r30, 0x1e8(r1)
// 	stw      r29, 0x1e4(r1)
// 	mr       r29, r3
// 	mr       r3, r31
// 	lwz      r12, 0(r31)
// 	lwz      r30, 0x274(r4)
// 	lwz      r12, 0xa8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D869C
// 	li       r3, 0
// 	b        lbl_801D8990

// lbl_801D869C:
// 	lwz      r0, 0x278(r31)
// 	cmplwi   r0, 0
// 	beq      lbl_801D86B0
// 	li       r3, 0
// 	b        lbl_801D8990

// lbl_801D86B0:
// 	mr       r3, r30
// 	lwz      r12, 0(r30)
// 	lwz      r12, 0x38(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D86D4
// 	li       r3, 0
// 	b        lbl_801D8990

// lbl_801D86D4:
// 	lwz      r3, gameSystem__4Game@sda21(r13)
// 	lwz      r0, 0x44(r3)
// 	cmpwi    r0, 0
// 	bne      lbl_801D8710
// 	lwz      r3, 0x40(r3)
// 	lwz      r0, 0x218(r3)
// 	cmplwi   r0, 0
// 	bne      lbl_801D8710
// 	lwz      r3, playData__4Game@sda21(r13)
// 	li       r4, 0x27
// 	bl       isDemoFlag__Q24Game8PlayDataFi
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D8710
// 	li       r3, 0
// 	b        lbl_801D8990

// lbl_801D8710:
// 	mr       r3, r31
// 	bl       getStateID__Q24Game4NaviFv
// 	cmpwi    r3, 1
// 	beq      lbl_801D898C
// 	lbz      r0, 9(r29)
// 	mr       r3, r31
// 	addi     r5, r1, 8
// 	li       r4, 1
// 	stb      r0, 8(r1)
// 	lwz      r12, 0(r31)
// 	lwz      r12, 0x22c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r3, naviMgr__4Game@sda21(r13)
// 	lhz      r0, 0x2dc(r31)
// 	lwz      r12, 0(r3)
// 	subfic   r4, r0, 1
// 	lwz      r12, 0x24(r12)
// 	mtctr    r12
// 	bctrl
// 	lis      r4, __vt__Q24Game11Interaction@ha
// 	li       r5, 1
// 	addi     r0, r4, __vt__Q24Game11Interaction@l
// 	li       r30, 0
// 	lis      r4, __vt__Q24Game11InteractFue@ha
// 	stw      r0, 0x1c(r1)
// 	addi     r6, r4, __vt__Q24Game11InteractFue@l
// 	cmplwi   r30, 0
// 	stw      r3, 0x20(r1)
// 	lis      r4, "__vt__26Iterator<Q24Game8Creature>"@ha
// 	addi     r0, r4, "__vt__26Iterator<Q24Game8Creature>"@l
// 	li       r29, 0
// 	stw      r6, 0x1c(r1)
// 	stb      r5, 0x24(r1)
// 	stb      r5, 0x25(r1)
// 	lwz      r3, 0x254(r31)
// 	stw      r0, 0xc(r1)
// 	stw      r30, 0x18(r1)
// 	stw      r30, 0x10(r1)
// 	stw      r3, 0x14(r1)
// 	bne      lbl_801D87CC
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0x10(r1)
// 	b        lbl_801D8854

// lbl_801D87CC:
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0x10(r1)
// 	b        lbl_801D8838

// lbl_801D87E4:
// 	lwz      r3, 0x14(r1)
// 	lwz      r4, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x18(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D8854
// 	lwz      r3, 0x14(r1)
// 	lwz      r4, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0x10(r1)

// lbl_801D8838:
// 	lwz      r12, 0xc(r1)
// 	addi     r3, r1, 0xc
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D87E4

// lbl_801D8854:
// 	addi     r31, r1, 0x28
// 	b        lbl_801D8938

// lbl_801D885C:
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r0, 0x18(r1)
// 	addi     r29, r29, 1
// 	stwx     r3, r31, r30
// 	addi     r30, r30, 4
// 	cmplwi   r0, 0
// 	bne      lbl_801D88A8
// 	lwz      r3, 0x14(r1)
// 	lwz      r4, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0x10(r1)
// 	b        lbl_801D8938

// lbl_801D88A8:
// 	lwz      r3, 0x14(r1)
// 	lwz      r4, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0x10(r1)
// 	b        lbl_801D891C

// lbl_801D88C8:
// 	lwz      r3, 0x14(r1)
// 	lwz      r4, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x20(r12)
// 	mtctr    r12
// 	bctrl
// 	mr       r4, r3
// 	lwz      r3, 0x18(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 8(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D8938
// 	lwz      r3, 0x14(r1)
// 	lwz      r4, 0x10(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x14(r12)
// 	mtctr    r12
// 	bctrl
// 	stw      r3, 0x10(r1)

// lbl_801D891C:
// 	lwz      r12, 0xc(r1)
// 	addi     r3, r1, 0xc
// 	lwz      r12, 0x10(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D88C8

// lbl_801D8938:
// 	lwz      r3, 0x14(r1)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1c(r12)
// 	mtctr    r12
// 	bctrl
// 	lwz      r4, 0x10(r1)
// 	cmplw    r4, r3
// 	bne      lbl_801D885C
// 	addi     r30, r1, 0x28
// 	li       r31, 0
// 	b        lbl_801D8984

// lbl_801D8964:
// 	lwz      r3, 0(r30)
// 	addi     r4, r1, 0x1c
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x1a4(r12)
// 	mtctr    r12
// 	bctrl
// 	addi     r30, r30, 4
// 	addi     r31, r31, 1

// lbl_801D8984:
// 	cmpw     r31, r29
// 	blt      lbl_801D8964

// lbl_801D898C:
// 	li       r3, 1

// lbl_801D8990:
// 	lwz      r0, 0x1f4(r1)
// 	lwz      r31, 0x1ec(r1)
// 	lwz      r30, 0x1e8(r1)
// 	lwz      r29, 0x1e4(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x1f0
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801D89AC
//  * Size:	000074
//  */
// void InteractKaisan::actNavi(Game::Navi*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	lwz      r0, 0x278(r4)
// 	cmplwi   r0, 0
// 	beq      lbl_801D89D4
// 	li       r3, 0
// 	b        lbl_801D8A0C

// lbl_801D89D4:
// 	mr       r3, r31
// 	bl       getStateID__Q24Game4NaviFv
// 	cmpwi    r3, 1
// 	bne      lbl_801D8A08
// 	mr       r3, r31
// 	li       r4, 0
// 	lwz      r12, 0(r31)
// 	li       r5, 0
// 	lwz      r12, 0x22c(r12)
// 	mtctr    r12
// 	bctrl
// 	li       r3, 1
// 	b        lbl_801D8A0C

// lbl_801D8A08:
// 	li       r3, 0

// lbl_801D8A0C:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }

// /*
//  * --INFO--
//  * Address:	801D8A20
//  * Size:	00009C
//  */
// void InteractAttack::actNavi(Game::Navi*)
// {
// 	/*
// 	stwu     r1, -0x10(r1)
// 	mflr     r0
// 	stw      r0, 0x14(r1)
// 	stw      r31, 0xc(r1)
// 	mr       r31, r4
// 	li       r4, 0x27
// 	stw      r30, 8(r1)
// 	mr       r30, r3
// 	lwz      r3, playData__4Game@sda21(r13)
// 	bl       isDemoFlag__Q24Game8PlayDataFi
// 	clrlwi.  r0, r3, 0x18
// 	bne      lbl_801D8A58
// 	li       r3, 0
// 	b        lbl_801D8AA4

// lbl_801D8A58:
// 	mr       r3, r31
// 	bl       invincible__Q24Game4NaviFv
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D8A70
// 	li       r3, 0
// 	b        lbl_801D8AA4

// lbl_801D8A70:
// 	lwz      r3, 4(r30)
// 	lwz      r12, 0(r3)
// 	lwz      r12, 0x18(r12)
// 	mtctr    r12
// 	bctrl
// 	clrlwi.  r0, r3, 0x18
// 	beq      lbl_801D8A94
// 	lfs      f0, lbl_8051978C@sda21(r2)
// 	stfs     f0, 8(r30)

// lbl_801D8A94:
// 	lfs      f1, 8(r30)
// 	mr       r3, r31
// 	bl       startDamage__Q24Game4NaviFf
// 	li       r3, 1

// lbl_801D8AA4:
// 	lwz      r0, 0x14(r1)
// 	lwz      r31, 0xc(r1)
// 	lwz      r30, 8(r1)
// 	mtlr     r0
// 	addi     r1, r1, 0x10
// 	blr
// 	*/
// }
} // namespace Game
