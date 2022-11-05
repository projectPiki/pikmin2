#include "types.h"

/*
    Generated from dpostproc

    .section .ctors, "wa"  # 0x80472F00 - 0x804732C0
    .4byte __sinit_interactPiki_cpp

    .section .rodata  # 0x804732E0 - 0x8049E220
    .global lbl_8047EE90
    lbl_8047EE90:
        .skip 0xC
        .asciz "interactPiki"
        .skip 3
    .global lbl_8047EEAC
    lbl_8047EEAC:
        .asciz "g21_meet_bluepikmin"
    .global lbl_8047EEC0
    lbl_8047EEC0:
        .asciz "g03_meet_redpikmin"
        .skip 1
    .global lbl_8047EED4
    lbl_8047EED4:
        .asciz "g1F_meet_yellowpikmin"
        .skip 2
        .4byte lbl_8047EEAC
        .4byte lbl_8047EEC0
        .4byte lbl_8047EED4
        .asciz "X13_exp_leafchappy"
        .skip 1
        .asciz "x13_exp_leafchappy"
        .skip 1
    .global lbl_8047EF20
    lbl_8047EF20:
        .asciz "interactPiki.cpp"
        .skip 3
    .global lbl_8047EF34
    lbl_8047EF34:
        .asciz "P2Assert"
        .skip 3
    .global lbl_8047EF40
    lbl_8047EF40:
        .4byte 0x41637442
        .4byte 0x6174746C
        .4byte 0x65417267
        .4byte 0x00000000
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x4B696C6C
        .4byte 0x41726700
        .4byte 0x4974656D
        .4byte 0x50696B69
        .4byte 0x48656164
        .4byte 0x3A3A496E
        .4byte 0x69744172
        .4byte 0x67000000
        .4byte 0x4974656D
        .4byte 0x496E6974
        .4byte 0x41726700
        .4byte 0x43726561
        .4byte 0x74757265
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x41637469
        .4byte 0x6F6E4172
        .4byte 0x67000000
        .4byte 0x00000000

    .section .data, "wa"  # 0x8049E220 - 0x804EFC20
    .global lbl_804B47D0
    lbl_804B47D0:
        .4byte 0x00000000
        .4byte 0x00000000
        .4byte 0x00000000
    .global __vt__Q26PikiAI12ActBattleArg
    __vt__Q26PikiAI12ActBattleArg:
        .4byte 0
        .4byte 0
        .4byte getName__Q26PikiAI12ActBattleArgFv
    .global __vt__Q24Game14InteractBattle
    __vt__Q24Game14InteractBattle:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game14InteractBattleFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game11InteractGas
    __vt__Q24Game11InteractGas:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractGasFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractGasFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game14InteractBubble
    __vt__Q24Game14InteractBubble:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game14InteractBubbleFPQ24Game4Piki
        .4byte actNavi__Q24Game14InteractBubbleFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game16InteractAstonish
    __vt__Q24Game16InteractAstonish:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game16InteractAstonishFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game12InteractFire
    __vt__Q24Game12InteractFire:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game12InteractFireFPQ24Game4Piki
        .4byte actNavi__Q24Game12InteractFireFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game20InteractSuikomi_Test
    __vt__Q24Game20InteractSuikomi_Test:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game20InteractSuikomi_TestFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game12InteractBury
    __vt__Q24Game12InteractBury:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game12InteractBuryFPQ24Game4Piki
        .4byte actNavi__Q24Game12InteractBuryFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game16InteractFallMeck
    __vt__Q24Game16InteractFallMeck:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game16InteractFallMeckFPQ24Game4Piki
        .4byte actNavi__Q24Game16InteractFallMeckFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game13InteractDenki
    __vt__Q24Game13InteractDenki:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game13InteractDenkiFPQ24Game4Piki
        .4byte actNavi__Q24Game13InteractDenkiFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game12InteractBomb
    __vt__Q24Game12InteractBomb:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game12InteractBombFPQ24Game4Piki
        .4byte actNavi__Q24Game12InteractBombFPQ24Game4Navi
        .4byte actEnemy__Q24Game12InteractBombFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game20InteractHanaChirashi
    __vt__Q24Game20InteractHanaChirashi:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game20InteractHanaChirashiFPQ24Game4Piki
        .4byte actNavi__Q24Game12InteractWindFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game12InteractWind
    __vt__Q24Game12InteractWind:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game12InteractWindFPQ24Game4Piki
        .4byte actNavi__Q24Game12InteractWindFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game12InteractDope
    __vt__Q24Game12InteractDope:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game12InteractDopeFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game12InteractDopeFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
    .global __vt__Q24Game11InteractFue
    __vt__Q24Game11InteractFue:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game11InteractFueFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractFueFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractFueFPQ24Game8BaseItem
    .global __vt__Q24Game15InteractFueFuki
    __vt__Q24Game15InteractFueFuki:
        .4byte 0
        .4byte 0
        .4byte actCommon__Q24Game11InteractionFPQ24Game8Creature
        .4byte actPiki__Q24Game15InteractFueFukiFPQ24Game4Piki
        .4byte actNavi__Q24Game11InteractionFPQ24Game4Navi
        .4byte actEnemy__Q24Game11InteractionFPQ24Game9EnemyBase
        .4byte actPellet__Q24Game11InteractionFPQ24Game6Pellet
        .4byte actOnyon__Q24Game11InteractionFPQ24Game5Onyon
        .4byte actItem__Q24Game11InteractionFPQ24Game8BaseItem
        .4byte 0

    .section .sbss # 0x80514D80 - 0x80516360
    .global lbl_805159C8
    lbl_805159C8:
        .skip 0x4
    .global lbl_805159CC
    lbl_805159CC:
        .skip 0x4

    .section .sdata2, "a"     # 0x80516360 - 0x80520E40
    .global lbl_80518EB0
    lbl_80518EB0:
        .4byte 0x47FA0000
    .global lbl_80518EB4
    lbl_80518EB4:
        .4byte 0x00000000
    .global lbl_80518EB8
    lbl_80518EB8:
        .4byte 0x3F99999A
    .global lbl_80518EBC
    lbl_80518EBC:
        .float 1.0
    .global lbl_80518EC0
    lbl_80518EC0:
        .4byte 0xC7FA0000
    .global lbl_80518EC4
    lbl_80518EC4:
        .float -1.0
    .global lbl_80518EC8
    lbl_80518EC8:
        .4byte 0xC1200000
    .global lbl_80518ECC
    lbl_80518ECC:
        .4byte 0x43A2F983
    .global lbl_80518ED0
    lbl_80518ED0:
        .4byte 0xC3A2F983
    .global lbl_80518ED4
    lbl_80518ED4:
        .4byte 0x47000000
    .global lbl_80518ED8
    lbl_80518ED8:
        .float 0.1
    .global lbl_80518EDC
    lbl_80518EDC:
        .4byte 0x42C80000
    .global lbl_80518EE0
    lbl_80518EE0:
        .4byte 0x42480000
        .4byte 0x00000000
    .global lbl_80518EE8
    lbl_80518EE8:
        .4byte 0x43300000
        .4byte 0x80000000
*/

namespace Game {

/*
 * --INFO--
 * Address:	80192C84
 * Size:	0000E4
 */
void InteractFueFuki::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192CC4
	li       r3, 0
	b        lbl_80192D50

lbl_80192CC4:
	lwz      r3, 0x294(r31)
	lwz      r0, 8(r3)
	cmpwi    r0, 0xb
	beq      lbl_80192CF0
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80192CF8

lbl_80192CF0:
	li       r3, 0
	b        lbl_80192D50

lbl_80192CF8:
	lwz      r3, 0x290(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192D4C
	lwz      r6, 4(r30)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI17CreatureActionArg@ha
	stw      r0, 8(r1)
	addi     r0, r3, __vt__Q26PikiAI17CreatureActionArg@l
	addi     r5, r1, 8
	li       r4, 0xb
	stw      r0, 8(r1)
	stw      r6, 0xc(r1)
	lwz      r3, 0x294(r31)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	li       r3, 1
	b        lbl_80192D50

lbl_80192D4C:
	li       r3, 0

lbl_80192D50:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80192D68
 * Size:	000BD0
 */
void InteractFue::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x1c0(r1)
	mflr     r0
	stw      r0, 0x1c4(r1)
	stfd     f31, 0x1b0(r1)
	psq_st   f31, 440(r1), 0, qr0
	stfd     f30, 0x1a0(r1)
	psq_st   f30, 424(r1), 0, qr0
	stfd     f29, 0x190(r1)
	psq_st   f29, 408(r1), 0, qr0
	stfd     f28, 0x180(r1)
	psq_st   f28, 392(r1), 0, qr0
	stfd     f27, 0x170(r1)
	psq_st   f27, 376(r1), 0, qr0
	stfd     f26, 0x160(r1)
	psq_st   f26, 360(r1), 0, qr0
	stfd     f25, 0x150(r1)
	psq_st   f25, 344(r1), 0, qr0
	stfd     f24, 0x140(r1)
	psq_st   f24, 328(r1), 0, qr0
	stmw     r25, 0x124(r1)
	lwz      r6, gameSystem__4Game@sda21(r13)
	lis      r5, lbl_8047EE90@ha
	mr       r25, r3
	mr       r31, r4
	lwz      r0, 0x44(r6)
	addi     r30, r5, lbl_8047EE90@l
	cmpwi    r0, 0
	bne      lbl_80192E7C
	lwz      r3, 0x40(r6)
	lwz      r0, 0x218(r3)
	cmplwi   r0, 0
	bne      lbl_80192E7C
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x27
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80192E7C
	lwz      r3, 4(r25)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192E7C
	lwz      r26, 4(r25)
	lhz      r0, 0x2dc(r26)
	cmplwi   r0, 0
	bne      lbl_80192E4C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1fc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80192E4C
	li       r3, 0
	b        lbl_801938E4

lbl_80192E4C:
	lhz      r0, 0x2dc(r26)
	cmplwi   r0, 1
	bne      lbl_80192E7C
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1fc(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192E7C
	li       r3, 0
	b        lbl_801938E4

lbl_80192E7C:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801935C4
	lbz      r4, 0x2b8(r31)
	cmpwi    r4, 3
	bne      lbl_80193150
	mr       r3, r31
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 0x1b
	beq      lbl_801935C4
	mr       r4, r31
	addi     r3, r1, 0x38
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r3, mgr__Q24Game8ItemCave@sda21(r13)
	lfs      f26, 0x38(r1)
	cmplwi   r3, 0
	lfs      f25, 0x3c(r1)
	lfs      f24, 0x40(r1)
	lfs      f28, lbl_80518EB0@sda21(r2)
	beq      lbl_80192EEC
	addi     r3, r3, 0x30

lbl_80192EEC:
	li       r0, 0
	lis      r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
	addi     r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
	stw      r0, 0x78(r1)
	cmplwi   r0, 0
	stw      r4, 0x6c(r1)
	stw      r0, 0x70(r1)
	stw      r3, 0x74(r1)
	bne      lbl_80192F28
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_80192FB0

lbl_80192F28:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_80192F94

lbl_80192F40:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80192FB0
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)

lbl_80192F94:
	lwz      r12, 0x6c(r1)
	addi     r3, r1, 0x6c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80192F40

lbl_80192FB0:
	lfs      f27, lbl_80518EB4@sda21(r2)
	b        lbl_801930FC

lbl_80192FB8:
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	addi     r3, r1, 0x2c
	lwz      r12, 0(r4)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f3, 0x30(r1)
	lfs      f5, 0x2c(r1)
	fsubs    f1, f3, f25
	lfs      f4, 0x34(r1)
	fsubs    f2, f5, f26
	fsubs    f0, f4, f24
	fmuls    f1, f1, f1
	fmuls    f6, f0, f0
	fmadds   f0, f2, f2, f1
	fadds    f0, f6, f0
	fcmpo    cr0, f0, f27
	ble      lbl_80193024
	ble      lbl_80193028
	frsqrte  f1, f0
	fmuls    f0, f1, f0
	b        lbl_80193028

lbl_80193024:
	fmr      f0, f27

lbl_80193028:
	fcmpo    cr0, f0, f28
	bge      lbl_80193040
	fmr      f28, f0
	fmr      f31, f5
	fmr      f30, f3
	fmr      f29, f4

lbl_80193040:
	lwz      r0, 0x78(r1)
	cmplwi   r0, 0
	bne      lbl_8019306C
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_801930FC

lbl_8019306C:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)
	b        lbl_801930E0

lbl_8019308C:
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x78(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801930FC
	lwz      r3, 0x74(r1)
	lwz      r4, 0x70(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x70(r1)

lbl_801930E0:
	lwz      r12, 0x6c(r1)
	addi     r3, r1, 0x6c
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019308C

lbl_801930FC:
	lwz      r3, 0x74(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x70(r1)
	cmplw    r4, r3
	bne      lbl_80192FB8
	stfs     f31, 0x60(r1)
	mr       r4, r31
	addi     r6, r1, 0x60
	li       r5, 0x1b
	stfs     f30, 0x64(r1)
	stfs     f29, 0x68(r1)
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 0
	b        lbl_801938E4

lbl_80193150:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	lwz      r0, 0x18(r3)
	cmpwi    r0, 0
	bne      lbl_801934E4
	addi     r0, r4, -1
	cmplwi   r0, 1
	ble      lbl_80193174
	cmpwi    r4, 0
	bne      lbl_801934E4

lbl_80193174:
	mr       r3, r31
	li       r4, 0
	lwz      r12, 0(r31)
	lwz      r12, 0x1f8(r12)
	mtctr    r12
	bctrl
	lis      r3, zikatuPikis__Q24Game8GameStat@ha
	lbz      r4, 0x2b8(r31)
	addi     r3, r3, zikatuPikis__Q24Game8GameStat@l
	bl       dec__Q34Game8GameStat11PikiCounterFi
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x23
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801931FC
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 1
	bne      lbl_801931FC
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xac(r12)
	mtctr    r12
	bctrl
	cmplwi   r3, 4
	beq      lbl_801931FC
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 4
	lfs      f1, lbl_80518EB8@sda21(r2)
	lwz      r3, 0x58(r3)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl

lbl_801931FC:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       hasBootContainer__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801935C4
	lwz      r9, 0x5c(r30)
	addi     r5, r1, 0x54
	lwz      r8, 0x60(r30)
	li       r0, 0
	lbz      r6, 0x2b8(r31)
	mr       r4, r31
	lwz      r7, 0x64(r30)
	addi     r3, r1, 0x20
	lfs      f0, lbl_80518EB4@sda21(r2)
	slwi     r6, r6, 2
	stw      r9, 0x54(r1)
	stw      r8, 0x58(r1)
	stw      r7, 0x5c(r1)
	lwzx     r5, r5, r6
	stw      r0, 0xe8(r1)
	stw      r5, 0xe4(r1)
	stw      r0, 0xf0(r1)
	stfs     f0, 0xfc(r1)
	stfs     f0, 0x100(r1)
	stfs     f0, 0x104(r1)
	stfs     f0, 0x108(r1)
	stw      r0, 0x10c(r1)
	stw      r0, 0xf4(r1)
	stw      r0, 0xec(r1)
	stw      r0, 0x110(r1)
	stw      r0, 0xf8(r1)
	stw      r0, 0x114(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x20(r1)
	mr       r3, r31
	lfs      f1, 0x24(r1)
	lfs      f0, 0x28(r1)
	stfs     f2, 0xfc(r1)
	stfs     f1, 0x100(r1)
	stfs     f0, 0x104(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0x108(r1)
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 1
	bne      lbl_8019349C
	li       r0, 0
	lwz      r3, pikiMgr__4Game@sda21(r13)
	lis      r4, "__vt__22Iterator<Q24Game4Piki>"@ha
	stw      r0, 0x50(r1)
	addi     r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
	cmplwi   r0, 0
	stw      r4, 0x44(r1)
	stw      r0, 0x48(r1)
	stw      r3, 0x4c(r1)
	bne      lbl_80193308
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_8019347C

lbl_80193308:
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80193374

lbl_80193320:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019347C
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_80193374:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193320
	b        lbl_8019347C

lbl_80193394:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	lbz      r4, 0x2b8(r3)
	lbz      r0, 0x2b8(r31)
	cmpw     r4, r0
	bne      lbl_801933C0
	li       r4, 0
	bl       movie_begin__Q24Game8CreatureFb

lbl_801933C0:
	lwz      r0, 0x50(r1)
	cmplwi   r0, 0
	bne      lbl_801933EC
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_8019347C

lbl_801933EC:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)
	b        lbl_80193460

lbl_8019340C:
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x20(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	lwz      r3, 0x50(r1)
	lwz      r12, 0(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019347C
	lwz      r3, 0x4c(r1)
	lwz      r4, 0x48(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	stw      r3, 0x48(r1)

lbl_80193460:
	lwz      r12, 0x44(r1)
	addi     r3, r1, 0x44
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019340C

lbl_8019347C:
	lwz      r3, 0x4c(r1)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	lwz      r4, 0x48(r1)
	cmplw    r4, r3
	bne      lbl_80193394

lbl_8019349C:
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 1
	beq      lbl_801934C8
	lwz      r3, moviePlayer__4Game@sda21(r13)
	addi     r4, r1, 0xe4
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setMeetPikmin__Q24Game8PlayDataFi

lbl_801934C8:
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setContainer__Q24Game8PlayDataFi
	lwz      r3, playData__4Game@sda21(r13)
	lbz      r4, 0x2b8(r31)
	bl       setBootContainer__Q24Game8PlayDataFi
	b        lbl_801935C4

lbl_801934E4:
	cmpwi    r4, 5
	bne      lbl_801935BC
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	beq      lbl_801935C4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2c
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801935C4
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2c
	bl       setDemoFlag__Q24Game8PlayDataFi
	lfs      f0, lbl_80518EB4@sda21(r2)
	li       r0, 0
	addi     r5, r30, 0x68
	stw      r0, 0xb4(r1)
	mr       r4, r31
	addi     r3, r1, 0x14
	stw      r5, 0xb0(r1)
	stw      r0, 0xbc(r1)
	stfs     f0, 0xc8(r1)
	stfs     f0, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	stfs     f0, 0xd4(r1)
	stw      r0, 0xd8(r1)
	stw      r0, 0xc0(r1)
	stw      r0, 0xb8(r1)
	stw      r0, 0xdc(r1)
	stw      r0, 0xc4(r1)
	stw      r0, 0xe0(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x14(r1)
	mr       r3, r31
	lfs      f1, 0x18(r1)
	lfs      f0, 0x1c(r1)
	stfs     f2, 0xc8(r1)
	stfs     f1, 0xcc(r1)
	stfs     f0, 0xd0(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xd4(r1)
	addi     r4, r1, 0xb0
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
	b        lbl_801935C4

lbl_801935BC:
	li       r3, 0
	b        lbl_801938E4

lbl_801935C4:
	lwz      r3, 0x290(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801935EC
	li       r3, 0
	b        lbl_801938E4

lbl_801935EC:
	lwz      r3, 4(r25)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80193610
	li       r3, 0
	b        lbl_801938E4

lbl_80193610:
	lwz      r0, 0xbc(r31)
	rlwinm.  r0, r0, 0, 0x1e, 0x1e
	bne      lbl_80193624
	li       r3, 0
	b        lbl_801938E4

lbl_80193624:
	lwz      r4, 0x294(r31)
	mr       r3, r31
	lwz      r27, 4(r25)
	lwz      r29, 8(r4)
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r29, 0xb
	lwz      r28, 0x290(r31)
	bne      lbl_80193690
	lwz      r0, 4(r28)
	cmpwi    r0, 0x15
	beq      lbl_80193658
	li       r3, 0
	b        lbl_801938E4

lbl_80193658:
	lbz      r0, sTekiChappyFlag__Q24Game12BaseHIOParms@sda21(r13)
	li       r26, 1
	cmplwi   r0, 0
	beq      lbl_801936A8
	lwz      r3, 0x17c(r31)
	rlwinm.  r0, r3, 0, 0x17, 0x17
	beq      lbl_801936A8
	rlwinm   r0, r3, 0, 0x18, 0x16
	lis      r3, alivePikis__Q24Game8GameStat@ha
	stw      r0, 0x17c(r31)
	addi     r3, r3, alivePikis__Q24Game8GameStat@l
	mr       r4, r31
	bl       inc__Q34Game8GameStat11PikiCounterFPQ24Game4Piki
	b        lbl_801936A8

lbl_80193690:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x44(r12)
	mtctr    r12
	bctrl
	mr       r26, r3

lbl_801936A8:
	lwz      r3, gameSystem__4Game@sda21(r13)
	li       r4, 0
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801936EC
	lbz      r3, 0x2b8(r31)
	cmpwi    r3, 1
	bne      lbl_801936D4
	lhz      r0, 0x2dc(r27)
	cmplwi   r0, 1
	beq      lbl_801936E8

lbl_801936D4:
	cmpwi    r3, 0
	bne      lbl_801936EC
	lhz      r0, 0x2dc(r27)
	cmplwi   r0, 0
	bne      lbl_801936EC

lbl_801936E8:
	li       r4, 1

lbl_801936EC:
	clrlwi.  r0, r4, 0x18
	bne      lbl_80193710
	mr       r3, r28
	mr       r4, r31
	lwz      r12, 0(r28)
	lwz      r5, 4(r25)
	lwz      r12, 0x6c(r12)
	mtctr    r12
	bctrl

lbl_80193710:
	mr       r3, r28
	lwz      r12, 0(r28)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_801938E0
	clrlwi.  r0, r26, 0x18
	beq      lbl_801938E0
	cmpwi    r29, 0
	bne      lbl_80193770
	bne      lbl_8019374C
	lwz      r0, 4(r28)
	cmpwi    r0, 0x13
	beq      lbl_80193770

lbl_8019374C:
	lbz      r0, 8(r25)
	cmplwi   r0, 0
	beq      lbl_801938E0
	lwz      r3, 0x2c4(r31)
	lwz      r0, 4(r25)
	cmplw    r3, r0
	beq      lbl_801938E0
	cmpwi    r29, 0
	bne      lbl_801938E0

lbl_80193770:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r4, 4(r25)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_801937B8
	lbz      r3, 0x2b8(r31)
	cmpwi    r3, 1
	bne      lbl_8019379C
	lhz      r0, 0x2dc(r4)
	cmplwi   r0, 1
	beq      lbl_801937B0

lbl_8019379C:
	cmpwi    r3, 0
	bne      lbl_801937B8
	lhz      r0, 0x2dc(r4)
	cmplwi   r0, 0
	bne      lbl_801937B8

lbl_801937B0:
	li       r3, 0
	b        lbl_801938E4

lbl_801937B8:
	mr       r3, r31
	bl       getCurrAction__Q24Game4PikiFv
	cmplwi   r3, 0
	beq      lbl_801937E8
	mr       r3, r31
	bl       getCurrAction__Q24Game4PikiFv
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	bl       clearCurrAction__Q24Game4PikiFv

lbl_801937E8:
	lwz      r0, 4(r25)
	mr       r4, r31
	li       r5, 2
	li       r6, 0
	stw      r0, 0x2c4(r31)
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 5
	bne      lbl_801938D8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2c
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_801938D8
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x2c
	bl       setDemoFlag__Q24Game8PlayDataFi
	lfs      f0, lbl_80518EB4@sda21(r2)
	li       r0, 0
	addi     r5, r30, 0x7c
	stw      r0, 0x80(r1)
	mr       r4, r31
	addi     r3, r1, 8
	stw      r5, 0x7c(r1)
	stw      r0, 0x88(r1)
	stfs     f0, 0x94(r1)
	stfs     f0, 0x98(r1)
	stfs     f0, 0x9c(r1)
	stfs     f0, 0xa0(r1)
	stw      r0, 0xa4(r1)
	stw      r0, 0x8c(r1)
	stw      r0, 0x84(r1)
	stw      r0, 0xa8(r1)
	stw      r0, 0x90(r1)
	stw      r0, 0xac(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 8(r1)
	mr       r3, r31
	lfs      f1, 0xc(r1)
	lfs      f0, 0x10(r1)
	stfs     f2, 0x94(r1)
	stfs     f1, 0x98(r1)
	stfs     f0, 0x9c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	stfs     f1, 0xa0(r1)
	addi     r4, r1, 0x7c
	lwz      r3, moviePlayer__4Game@sda21(r13)
	stw      r31, 0x194(r3)
	lwz      r3, moviePlayer__4Game@sda21(r13)
	bl       play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg

lbl_801938D8:
	li       r3, 1
	b        lbl_801938E4

lbl_801938E0:
	li       r3, 0

lbl_801938E4:
	psq_l    f31, 440(r1), 0, qr0
	lfd      f31, 0x1b0(r1)
	psq_l    f30, 424(r1), 0, qr0
	lfd      f30, 0x1a0(r1)
	psq_l    f29, 408(r1), 0, qr0
	lfd      f29, 0x190(r1)
	psq_l    f28, 392(r1), 0, qr0
	lfd      f28, 0x180(r1)
	psq_l    f27, 376(r1), 0, qr0
	lfd      f27, 0x170(r1)
	psq_l    f26, 360(r1), 0, qr0
	lfd      f26, 0x160(r1)
	psq_l    f25, 344(r1), 0, qr0
	lfd      f25, 0x150(r1)
	psq_l    f24, 328(r1), 0, qr0
	lfd      f24, 0x140(r1)
	lmw      r25, 0x124(r1)
	lwz      r0, 0x1c4(r1)
	mtlr     r0
	addi     r1, r1, 0x1c0
	blr
	*/
}

/*
 * --INFO--
 * Address:	80193938
 * Size:	00015C
 */
void InteractDope::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r0, 8(r3)
	lwz      r31, 0x290(r4)
	cmpwi    r0, 1
	beq      lbl_801939C4
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x4c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801939C4
	mr       r3, r30
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_801939C4
	lwz      r0, 8(r29)
	mr       r4, r30
	addi     r6, r1, 0xc
	li       r5, 0x10
	stw      r0, 0xc(r1)
	lwz      r3, 0x28c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80193A78

lbl_801939C4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lwz      r0, 0x44(r3)
	cmpwi    r0, 1
	bne      lbl_80193A5C
	lwz      r0, 8(r29)
	cmpwi    r0, 1
	bne      lbl_80193A5C
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x1c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193A74
	lwz      r3, 4(r29)
	lbz      r4, 0x2b8(r30)
	lhz      r0, 0x2dc(r3)
	cmpw     r4, r0
	bne      lbl_80193A74
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80193A74
	li       r0, 1
	mr       r4, r30
	stb      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x17
	lwz      r3, 0x28c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80193A78

lbl_80193A5C:
	mr       r3, r30
	bl       doped__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193A74
	mr       r3, r30
	bl       extendDopeTime__Q24Game4PikiFv

lbl_80193A74:
	li       r3, 0

lbl_80193A78:
	lwz      r0, 0x24(r1)
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
 * Address:	80193A94
 * Size:	000100
 */
void InteractWind::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193AD4
	li       r3, 0
	b        lbl_80193B7C

lbl_80193AD4:
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 3
	bne      lbl_80193AE8
	li       r3, 0
	b        lbl_80193B7C

lbl_80193AE8:
	lwz      r3, 0x290(r31)
	lwz      r0, 4(r3)
	cmpwi    r0, 7
	bne      lbl_80193B00
	li       r3, 0
	b        lbl_80193B7C

lbl_80193B00:
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193B20
	li       r3, 0
	b        lbl_80193B7C

lbl_80193B20:
	lwz      r7, 4(r30)
	li       r3, 0
	lfs      f1, 0xc(r30)
	li       r0, 2
	lfs      f0, lbl_80518EB4@sda21(r2)
	mr       r4, r31
	stfs     f1, 8(r1)
	addi     r6, r1, 8
	li       r5, 8
	lfs      f1, 0x10(r30)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x14(r30)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stb      r3, 0x18(r1)
	sth      r0, 0x1a(r1)
	stw      r7, 0x1c(r1)
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_80193B7C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80193B94
 * Size:	000120
 */
void InteractHanaChirashi::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193BD4
	li       r3, 0
	b        lbl_80193C9C

lbl_80193BD4:
	lbz      r0, 0x2b8(r31)
	cmpwi    r0, 3
	bne      lbl_80193C1C
	lbz      r0, 0x2b9(r31)
	cmpwi    r0, 1
	blt      lbl_80193C14
	lwz      r4, 0x258(r31)
	lwz      r3, 0xc(r4)
	lwz      r4, 8(r4)
	bl       "createSimpleChiru__3efxFR10Vector3<f>l"
	mr       r3, r31
	li       r4, 0x2846
	li       r5, 1
	bl       startSound__Q24Game4PikiFUlb
	li       r0, 0
	stb      r0, 0x2b9(r31)

lbl_80193C14:
	li       r3, 0
	b        lbl_80193C9C

lbl_80193C1C:
	lwz      r3, 0x290(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193C40
	li       r3, 0
	b        lbl_80193C9C

lbl_80193C40:
	lwz      r7, 4(r30)
	li       r3, 0
	lfs      f1, 0xc(r30)
	li       r0, 6
	lfs      f0, lbl_80518EBC@sda21(r2)
	mr       r4, r31
	stfs     f1, 8(r1)
	addi     r6, r1, 8
	li       r5, 8
	lfs      f1, 0x10(r30)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x14(r30)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stb      r3, 0x18(r1)
	sth      r0, 0x1a(r1)
	stw      r7, 0x1c(r1)
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_80193C9C:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80193CB4
 * Size:	00015C
 */
void InteractBomb::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x30(r1)
	mflr     r0
	stw      r0, 0x34(r1)
	stw      r31, 0x2c(r1)
	mr       r31, r4
	stw      r30, 0x28(r1)
	mr       r30, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193CF4
	li       r3, 0
	b        lbl_80193DF8

lbl_80193CF4:
	lwz      r3, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r3)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_80193D0C
	li       r3, 0
	b        lbl_80193DF8

lbl_80193D0C:
	lwz      r3, 0x290(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193D30
	li       r3, 0
	b        lbl_80193DF8

lbl_80193D30:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193D70
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_80193D78

lbl_80193D70:
	li       r0, -1
	sth      r0, 0x2a4(r31)

lbl_80193D78:
	lwz      r5, 4(r30)
	li       r4, 1
	lfs      f1, 0xc(r30)
	li       r0, 2
	lfs      f0, lbl_80518EB4@sda21(r2)
	mr       r3, r31
	stfs     f1, 8(r1)
	lfs      f1, 0x10(r30)
	stfs     f1, 0xc(r1)
	lfs      f1, 0x14(r30)
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	stb      r4, 0x18(r1)
	sth      r0, 0x1a(r1)
	stw      r5, 0x1c(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80193DD4
	li       r0, 0
	stb      r0, 0x18(r1)

lbl_80193DD4:
	lwz      r3, 0x28c(r31)
	mr       r4, r31
	addi     r6, r1, 8
	li       r5, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_80193DF8:
	lwz      r0, 0x34(r1)
	lwz      r31, 0x2c(r1)
	lwz      r30, 0x28(r1)
	mtlr     r0
	addi     r1, r1, 0x30
	blr
	*/
}

/*
 * --INFO--
 * Address:	80193E10
 * Size:	000114
 */
void InteractDenki::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193E54
	li       r3, 0
	b        lbl_80193F08

lbl_80193E54:
	lwz      r3, 4(r29)
	lwz      r31, 0x290(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193E98
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_80193EA0

lbl_80193E98:
	li       r0, -1
	sth      r0, 0x2a4(r30)

lbl_80193EA0:
	lbz      r0, 0x2b8(r30)
	cmpwi    r0, 2
	beq      lbl_80193F04
	cmpwi    r0, 5
	beq      lbl_80193F04
	cmplwi   r31, 0
	beq      lbl_80193F04
	mr       r3, r31
	li       r4, 0x16
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193F04
	lwz      r3, 0x28c(r30)
	mr       r4, r30
	li       r5, 0x16
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80193F08

lbl_80193F04:
	li       r3, 0

lbl_80193F08:
	lwz      r0, 0x24(r1)
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
 * Address:	80193F24
 * Size:	0000A0
 */
void InteractFallMeck::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193F5C
	li       r3, 0
	b        lbl_80193FB0

lbl_80193F5C:
	lwz      r3, 0x290(r31)
	cmplwi   r3, 0
	beq      lbl_80193FAC
	lwz      r12, 0(r3)
	li       r4, 0x17
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80193FAC
	lwz      r3, 0x28c(r31)
	mr       r4, r31
	li       r5, 0x17
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80193FB0

lbl_80193FAC:
	li       r3, 0

lbl_80193FB0:
	lwz      r0, 0x14(r1)
	lwz      r31, 0xc(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

/*
 * --INFO--
 * Address:	80193FC4
 * Size:	000288
 */
void InteractBury::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stw      r31, 0x8c(r1)
	mr       r31, r4
	stw      r30, 0x88(r1)
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194000
	li       r3, 0
	b        lbl_80194234

lbl_80194000:
	lis      r3, mePikis__Q24Game8GameStat@ha
	lwzu     r12, mePikis__Q24Game8GameStat@l(r3)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	cmpwi    r3, 0x63
	blt      lbl_80194024
	li       r3, 0
	b        lbl_80194234

lbl_80194024:
	lwz      r3, 0x248(r31)
	cmplwi   r3, 0
	bne      lbl_801940B8
	lfs      f1, lbl_80518EB4@sda21(r2)
	li       r5, 0
	lfs      f3, lbl_80518EB0@sda21(r2)
	li       r0, 1
	lfs      f2, lbl_80518EC0@sda21(r2)
	mr       r4, r31
	lfs      f0, lbl_80518EBC@sda21(r2)
	addi     r3, r1, 0x1c
	stw      r5, 0x68(r1)
	stfs     f3, 0x6c(r1)
	stfs     f2, 0x70(r1)
	stw      r5, 0x64(r1)
	stfs     f1, 0x74(r1)
	stfs     f0, 0x78(r1)
	stfs     f1, 0x7c(r1)
	stb      r0, 0x60(r1)
	stb      r5, 0x61(r1)
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x1c(r1)
	addi     r4, r1, 0x54
	lfs      f1, 0x20(r1)
	lfs      f0, 0x24(r1)
	stfs     f2, 0x54(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x58(r1)
	stfs     f0, 0x5c(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x2c(r12)
	mtctr    r12
	bctrl
	lwz      r3, 0x68(r1)

lbl_801940B8:
	cmplwi   r3, 0
	beq      lbl_80194210
	addi     r3, r3, 0x5c
	bl       isBald__Q27MapCode4CodeFv
	clrlwi.  r0, r3, 0x18
	bne      lbl_80194210
	mr       r3, r31
	bl       might_bury__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194210
	lwz      r3, mgr__Q24Game12ItemPikihead@sda21(r13)
	cmplwi   r3, 0
	beq      lbl_80194210
	li       r0, 1
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	lwz      r12, 0(r3)
	lwz      r12, 0xa4(r12)
	mtctr    r12
	bctrl
	li       r0, 0
	mr       r30, r3
	stw      r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
	mr       r4, r31
	addi     r3, r1, 0x10
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lfs      f2, 0x10(r1)
	addi     r4, r1, 0x28
	lfs      f1, 0x14(r1)
	lfs      f0, 0x18(r1)
	stfs     f2, 0x28(r1)
	lwz      r3, mapMgr__4Game@sda21(r13)
	stfs     f1, 0x2c(r1)
	stfs     f0, 0x30(r1)
	lwz      r12, 4(r3)
	lwz      r12, 0x28(r12)
	mtctr    r12
	bctrl
	cmplwi   r30, 0
	stfs     f1, 0x2c(r1)
	beq      lbl_80194210
	addi     r3, r1, 0x28
	bl       "createSimplePkAp__3efxFR10Vector3<f>"
	lbz      r8, 0x2b8(r31)
	lis      r3, __vt__Q24Game15CreatureInitArg@ha
	addi     r0, r3, __vt__Q24Game15CreatureInitArg@l
	lis      r4, __vt__Q24Game11ItemInitArg@ha
	lis      r3, "zero__10Vector3<f>"@ha
	lfsu     f3, "zero__10Vector3<f>"@l(r3)
	stw      r0, 0x34(r1)
	addi     r7, r4, __vt__Q24Game11ItemInitArg@l
	lis      r4, __vt__Q34Game12ItemPikihead7InitArg@ha
	lfs      f2, 4(r3)
	lfs      f1, 8(r3)
	li       r5, 1
	lfs      f0, lbl_80518EC4@sda21(r2)
	li       r0, 2
	addi     r6, r4, __vt__Q34Game12ItemPikihead7InitArg@l
	stw      r7, 0x34(r1)
	mr       r3, r30
	addi     r4, r1, 0x34
	stw      r6, 0x34(r1)
	stw      r8, 0x38(r1)
	stfs     f3, 0x3c(r1)
	stfs     f2, 0x40(r1)
	stfs     f1, 0x44(r1)
	stb      r5, 0x48(r1)
	stw      r0, 0x4c(r1)
	stfs     f0, 0x50(r1)
	bl       init__Q24Game8CreatureFPQ24Game15CreatureInitArg
	mr       r3, r30
	addi     r4, r1, 0x28
	li       r5, 0
	bl       "setPosition__Q24Game8CreatureFR10Vector3<f>b"
	lis      r3, __vt__Q24Game15CreatureKillArg@ha
	li       r0, 1
	addi     r5, r3, __vt__Q24Game15CreatureKillArg@l
	stw      r0, 0xc(r1)
	mr       r3, r31
	addi     r4, r1, 8
	stw      r5, 8(r1)
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	li       r3, 1
	b        lbl_80194234

lbl_80194210:
	lwz      r3, 0x28c(r31)
	mr       r4, r31
	li       r5, 0
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_80194234:
	lwz      r0, 0x94(r1)
	lwz      r31, 0x8c(r1)
	lwz      r30, 0x88(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	8019424C
 * Size:	0000DC
 */
void InteractSuikomi_Test::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019428C
	li       r3, 0
	b        lbl_80194310

lbl_8019428C:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801942CC
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_801942D4

lbl_801942CC:
	li       r0, -1
	sth      r0, 0x2a4(r31)

lbl_801942D4:
	lwz      r7, 0x18(r30)
	mr       r4, r31
	lwz      r3, 0x14(r30)
	addi     r6, r1, 8
	lwz      r0, 4(r30)
	li       r5, 0x1a
	stw      r0, 8(r1)
	stw      r3, 0xc(r1)
	stw      r7, 0x10(r1)
	lwz      r3, 0x28c(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_80194310:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80194328
 * Size:	000118
 */
void InteractFire::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019436C
	li       r3, 0
	b        lbl_80194424

lbl_8019436C:
	lwz      r3, 0x290(r30)
	lbz      r31, 0x2b8(r30)
	cmplwi   r3, 0
	beq      lbl_80194420
	lwz      r12, 0(r3)
	li       r4, 0x15
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194420
	cmpwi    r31, 1
	beq      lbl_80194420
	cmpwi    r31, 5
	beq      lbl_80194420
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801943E8
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_801943F0

lbl_801943E8:
	li       r0, -1
	sth      r0, 0x2a4(r30)

lbl_801943F0:
	li       r0, 0
	mr       r4, r30
	sth      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x15
	lwz      r3, 0x28c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80194424

lbl_80194420:
	li       r3, 0

lbl_80194424:
	lwz      r0, 0x24(r1)
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
 * Address:	80194440
 * Size:	000134
 */
void InteractAstonish::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194484
	li       r3, 0
	b        lbl_80194558

lbl_80194484:
	lwz      r31, 0x290(r30)
	cmplwi   r31, 0
	beq      lbl_8019453C
	mr       r3, r31
	li       r4, 0x15
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019453C
	lbz      r0, 0x2b8(r30)
	cmpwi    r0, 3
	beq      lbl_8019453C
	li       r0, 3
	sth      r0, 8(r1)
	lwz      r3, 4(r29)
	cmplwi   r3, 0
	beq      lbl_8019450C
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019450C
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_80194514

lbl_8019450C:
	li       r0, -1
	sth      r0, 0x2a4(r30)

lbl_80194514:
	lwz      r3, 0x28c(r30)
	mr       r4, r30
	addi     r6, r1, 8
	li       r5, 0x15
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80194558

lbl_8019453C:
	mr       r3, r31
	li       r4, 0x15
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	li       r3, 0

lbl_80194558:
	lwz      r0, 0x24(r1)
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
 * Address:	80194574
 * Size:	000118
 */
void InteractBubble::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801945B8
	li       r3, 0
	b        lbl_80194670

lbl_801945B8:
	lwz      r3, 0x290(r30)
	lbz      r31, 0x2b8(r30)
	cmplwi   r3, 0
	beq      lbl_8019466C
	lwz      r12, 0(r3)
	li       r4, 0x15
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019466C
	cmpwi    r31, 0
	beq      lbl_8019466C
	cmpwi    r31, 5
	beq      lbl_8019466C
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194634
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_8019463C

lbl_80194634:
	li       r0, -1
	sth      r0, 0x2a4(r30)

lbl_8019463C:
	li       r0, 1
	mr       r4, r30
	sth      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x15
	lwz      r3, 0x28c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80194670

lbl_8019466C:
	li       r3, 0

lbl_80194670:
	lwz      r0, 0x24(r1)
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
 * Address:	8019468C
 * Size:	00013C
 */
void InteractGas::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	stw      r30, 0x18(r1)
	mr       r30, r4
	stw      r29, 0x14(r1)
	mr       r29, r3
	mr       r3, r30
	bl       gasInvicible__Q24Game4PikiFv
	clrlwi.  r0, r3, 0x18
	beq      lbl_801946C4
	li       r3, 0
	b        lbl_801947AC

lbl_801946C4:
	lwz      r3, 0x290(r30)
	mr       r4, r30
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801946EC
	li       r3, 0
	b        lbl_801947AC

lbl_801946EC:
	lwz      r3, 0x290(r30)
	lbz      r31, 0x2b8(r30)
	cmplwi   r3, 0
	beq      lbl_801947A8
	lwz      r12, 0(r3)
	li       r4, 0x15
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801947A8
	cmpwi    r31, 4
	beq      lbl_801947A8
	cmpwi    r31, 5
	beq      lbl_801947A8
	lwz      r3, 4(r29)
	cmplwi   r3, 0
	beq      lbl_80194770
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194770
	lwz      r3, 4(r29)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r30
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_80194778

lbl_80194770:
	li       r0, -1
	sth      r0, 0x2a4(r30)

lbl_80194778:
	li       r0, 2
	mr       r4, r30
	sth      r0, 8(r1)
	addi     r6, r1, 8
	li       r5, 0x15
	lwz      r3, 0x28c(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_801947AC

lbl_801947A8:
	li       r3, 0

lbl_801947AC:
	lwz      r0, 0x24(r1)
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
 * Address:	801947C8
 * Size:	0000C0
 */
void InteractBattle::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x20(r1)
	mflr     r0
	stw      r0, 0x24(r1)
	stw      r31, 0x1c(r1)
	mr       r31, r4
	stw      r30, 0x18(r1)
	mr       r30, r3
	mr       r3, r31
	bl       getCurrActionID__Q24Game4PikiFv
	cmpwi    r3, 0xd
	beq      lbl_8019486C
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x18(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_8019482C
	lis      r3, lbl_8047EF20@ha
	lis      r5, lbl_8047EF34@ha
	addi     r3, r3, lbl_8047EF20@l
	li       r4, 0x431
	addi     r5, r5, lbl_8047EF34@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_8019482C:
	lwz      r6, 4(r30)
	lis      r3, __vt__Q26PikiAI9ActionArg@ha
	addi     r0, r3, __vt__Q26PikiAI9ActionArg@l
	lis      r3, __vt__Q26PikiAI12ActBattleArg@ha
	stw      r0, 8(r1)
	addi     r3, r3, __vt__Q26PikiAI12ActBattleArg@l
	li       r0, 1
	addi     r5, r1, 8
	stw      r3, 8(r1)
	li       r4, 0xd
	stw      r6, 0xc(r1)
	stb      r0, 0x10(r1)
	lwz      r3, 0x294(r31)
	bl       start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
	li       r3, 1
	b        lbl_80194870

lbl_8019486C:
	li       r3, 0

lbl_80194870:
	lwz      r0, 0x24(r1)
	lwz      r31, 0x1c(r1)
	lwz      r30, 0x18(r1)
	mtlr     r0
	addi     r1, r1, 0x20
	blr
	*/
}

/*
 * --INFO--
 * Address:	80194888
 * Size:	000120
 */
void InteractPress::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r5, gameSystem__4Game@sda21(r13)
	lbz      r0, 0x3c(r5)
	rlwinm.  r0, r0, 0, 0x1a, 0x1a
	bne      lbl_801948C8
	lbz      r0, 0x48(r5)
	cmplwi   r0, 0
	beq      lbl_801948C8
	li       r3, 0
	b        lbl_80194990

lbl_801948C8:
	lwz      r3, 0x290(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_801948F0
	li       r3, 0
	b        lbl_80194990

lbl_801948F0:
	lwz      r3, 0x290(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x60(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019498C
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_8019494C
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_80194954

lbl_8019494C:
	li       r0, -1
	sth      r0, 0x2a4(r31)

lbl_80194954:
	lwz      r3, 0x28c(r31)
	mr       r4, r31
	li       r5, 0x14
	li       r6, 0
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	mr       r3, r31
	li       r4, 0x280b
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb
	li       r3, 1
	b        lbl_80194990

lbl_8019498C:
	li       r3, 0

lbl_80194990:
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
 * Address:	801949A8
 * Size:	000260
 */
void InteractFlick::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x90(r1)
	mflr     r0
	stw      r0, 0x94(r1)
	stfd     f31, 0x80(r1)
	psq_st   f31, 136(r1), 0, qr0
	stfd     f30, 0x70(r1)
	psq_st   f30, 120(r1), 0, qr0
	stfd     f29, 0x60(r1)
	psq_st   f29, 104(r1), 0, qr0
	stw      r31, 0x5c(r1)
	stw      r30, 0x58(r1)
	stw      r29, 0x54(r1)
	mr       r31, r4
	mr       r30, r3
	lwz      r3, 0x290(r4)
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194A04
	li       r3, 0
	b        lbl_80194BD4

lbl_80194A04:
	mr       r3, r31
	bl       getStateID__Q24Game4PikiFv
	cmpwi    r3, 9
	bne      lbl_80194A1C
	li       r3, 0
	b        lbl_80194BD4

lbl_80194A1C:
	lwz      r29, 0x290(r31)
	mr       r3, r29
	lwz      r12, 0(r29)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80194A48
	lwz      r0, 4(r29)
	cmpwi    r0, 0x15
	bne      lbl_80194A50

lbl_80194A48:
	li       r3, 0
	b        lbl_80194BD4

lbl_80194A50:
	lfs      f1, 0x10(r30)
	lfs      f0, lbl_80518EC8@sda21(r2)
	fcmpo    cr0, f1, f0
	bge      lbl_80194A74
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x64(r12)
	mtctr    r12
	bctrl

lbl_80194A74:
	lfs      f0, lbl_80518EB4@sda21(r2)
	fmr      f2, f1
	fcmpo    cr0, f1, f0
	bge      lbl_80194A88
	fneg     f2, f1

lbl_80194A88:
	lfs      f3, lbl_80518ECC@sda21(r2)
	lis      r3, sincosTable___5JMath@ha
	lfs      f0, lbl_80518EB4@sda21(r2)
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
	bge      lbl_80194AE4
	lfs      f0, lbl_80518ED0@sda21(r2)
	fmuls    f0, f1, f0
	fctiwz   f0, f0
	stfd     f0, 0x28(r1)
	lwz      r0, 0x2c(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f0, r4, r0
	fneg     f30, f0
	b        lbl_80194AFC

lbl_80194AE4:
	fmuls    f0, f1, f3
	fctiwz   f0, f0
	stfd     f0, 0x30(r1)
	lwz      r0, 0x34(r1)
	rlwinm   r0, r0, 3, 0x12, 0x1c
	lfsx     f30, r4, r0

lbl_80194AFC:
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x3c(r1)
	lfd      f2, lbl_80518EE8@sda21(r2)
	stw      r0, 0x38(r1)
	lfs      f1, lbl_80518ED4@sda21(r2)
	lfd      f0, 0x38(r1)
	lfs      f3, 8(r30)
	fsubs    f2, f0, f2
	lfs      f0, lbl_80518ED8@sda21(r2)
	fmuls    f0, f0, f3
	fdivs    f1, f2, f1
	fmadds   f29, f0, f1, f3
	bl       rand
	xoris    r3, r3, 0x8000
	lis      r0, 0x4330
	stw      r3, 0x44(r1)
	fneg     f0, f30
	lwz      r7, 4(r30)
	fmuls    f1, f31, f29
	stw      r0, 0x40(r1)
	li       r6, 0
	lfd      f3, lbl_80518EE8@sda21(r2)
	lfd      f2, 0x40(r1)
	fmuls    f4, f0, f29
	lfs      f5, lbl_80518ED4@sda21(r2)
	li       r0, 1
	fsubs    f6, f2, f3
	lfs      f0, lbl_80518ED8@sda21(r2)
	lfs      f3, lbl_80518EE0@sda21(r2)
	lfs      f2, lbl_80518EDC@sda21(r2)
	mr       r3, r31
	fdivs    f5, f6, f5
	stfs     f4, 8(r1)
	li       r4, 0x2854
	li       r5, 0
	stfs     f1, 0x10(r1)
	stfs     f0, 0x14(r1)
	fmadds   f0, f3, f5, f2
	stb      r6, 0x18(r1)
	sth      r0, 0x1a(r1)
	stfs     f0, 0xc(r1)
	stw      r7, 0x1c(r1)
	bl       startSound__Q24Game4PikiFUlb
	lwz      r3, 0x28c(r31)
	mr       r4, r31
	addi     r6, r1, 8
	li       r5, 8
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1

lbl_80194BD4:
	psq_l    f31, 136(r1), 0, qr0
	lfd      f31, 0x80(r1)
	psq_l    f30, 120(r1), 0, qr0
	lfd      f30, 0x70(r1)
	psq_l    f29, 104(r1), 0, qr0
	lfd      f29, 0x60(r1)
	lwz      r31, 0x5c(r1)
	lwz      r30, 0x58(r1)
	lwz      r0, 0x94(r1)
	lwz      r29, 0x54(r1)
	mtlr     r0
	addi     r1, r1, 0x90
	blr
	*/
}

/*
 * --INFO--
 * Address:	80194C08
 * Size:	0002EC
 */
void InteractSwallow::actPiki(Game::Piki* p)
{
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
	stw      r29, 0x44(r1)
	mr       r31, r4
	mr       r30, r3
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1f4(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80194C70
	lwz      r3, playData__4Game@sda21(r13)
	li       r4, 0x27
	bl       isDemoFlag__Q24Game8PlayDataFi
	clrlwi.  r0, r3, 0x18
	bne      lbl_80194D70

lbl_80194C70:
	mr       r4, r31
	addi     r3, r1, 0x18
	lwz      r12, 0(r31)
	lwz      r12, 8(r12)
	mtctr    r12
	bctrl
	lwz      r4, 4(r30)
	addi     r3, r1, 0xc
	lfs      f31, 0x18(r1)
	lwz      r12, 0(r4)
	lfs      f30, 0x1c(r1)
	lwz      r12, 8(r12)
	lfs      f29, 0x20(r1)
	mtctr    r12
	bctrl
	lfs      f0, 0x10(r1)
	lfs      f1, 0xc(r1)
	fsubs    f3, f30, f0
	lfs      f2, 0x14(r1)
	fsubs    f1, f31, f1
	lfs      f0, lbl_80518EB4@sda21(r2)
	fsubs    f2, f29, f2
	fmuls    f3, f3, f3
	fmuls    f4, f2, f2
	fmadds   f3, f1, f1, f3
	fadds    f3, f4, f3
	fcmpo    cr0, f3, f0
	ble      lbl_80194CF0
	ble      lbl_80194CF4
	frsqrte  f0, f3
	fmuls    f3, f0, f3
	b        lbl_80194CF4

lbl_80194CF0:
	fmr      f3, f0

lbl_80194CF4:
	lfs      f0, lbl_80518EB4@sda21(r2)
	fcmpo    cr0, f3, f0
	ble      lbl_80194D10
	lfs      f0, lbl_80518EBC@sda21(r2)
	fdivs    f0, f0, f3
	fmuls    f1, f1, f0
	fmuls    f2, f2, f0

lbl_80194D10:
	lis      r3, atanTable___5JMath@ha
	addi     r3, r3, atanTable___5JMath@l
	bl       "atan2___Q25JMath18TAtanTable<1024,f>CFff"
	lwz      r5, 4(r30)
	lis      r3, __vt__Q24Game11Interaction@ha
	addi     r4, r3, __vt__Q24Game11Interaction@l
	fneg     f0, f1
	lfs      f2, lbl_80518EE0@sda21(r2)
	lis      r3, __vt__Q24Game13InteractFlick@ha
	lfs      f1, lbl_80518EB4@sda21(r2)
	addi     r0, r3, __vt__Q24Game13InteractFlick@l
	stw      r4, 0x24(r1)
	mr       r3, r31
	addi     r4, r1, 0x24
	stw      r5, 0x28(r1)
	stw      r0, 0x24(r1)
	stfs     f2, 0x2c(r1)
	stfs     f1, 0x30(r1)
	stfs     f0, 0x34(r1)
	lwz      r12, 0(r31)
	lwz      r12, 0x1a4(r12)
	mtctr    r12
	bctrl
	b        lbl_80194EC0

lbl_80194D70:
	lwz      r3, 0x290(r31)
	mr       r4, r31
	lwz      r12, 0(r3)
	lwz      r12, 0x40(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194D98
	li       r3, 0
	b        lbl_80194EC0

lbl_80194D98:
	lwz      r3, 0xc(r30)
	li       r29, 0
	cmplwi   r3, 0
	beq      lbl_80194DC4
	lwz      r12, 0(r3)
	lwz      r12, 0x10(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194DC4
	li       r29, 1

lbl_80194DC4:
	clrlwi.  r0, r29, 0x18
	bne      lbl_80194DE8
	lis      r3, lbl_8047EF20@ha
	lis      r5, lbl_8047EF34@ha
	addi     r3, r3, lbl_8047EF20@l
	li       r4, 0x49c
	addi     r5, r5, lbl_8047EF34@l
	crclr    6
	bl       panic_f__12JUTExceptionFPCciPCce

lbl_80194DE8:
	lwz      r3, 0x290(r31)
	lwz      r12, 0(r3)
	lwz      r12, 0x58(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	bne      lbl_80194EBC
	lwz      r4, 4(r30)
	mr       r3, r31
	lwz      r5, 0xc(r30)
	bl       startStickMouth__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
	lwz      r0, 0x10(r30)
	li       r29, 8
	cmpwi    r0, 1
	bne      lbl_80194E38
	mr       r3, r31
	li       r29, 0x3f
	li       r4, 0x282b
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb

lbl_80194E38:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194E78
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_80194E80

lbl_80194E78:
	li       r0, -1
	sth      r0, 0x2a4(r31)

lbl_80194E80:
	stw      r29, 8(r1)
	mr       r3, r31
	li       r4, 0x2809
	li       r5, 0
	bl       startSound__Q24Game4PikiFUlb
	lwz      r3, 0x28c(r31)
	mr       r4, r31
	addi     r6, r1, 8
	li       r5, 0xb
	lwz      r12, 0(r3)
	lwz      r12, 0x14(r12)
	mtctr    r12
	bctrl
	li       r3, 1
	b        lbl_80194EC0

lbl_80194EBC:
	li       r3, 0

lbl_80194EC0:
	psq_l    f31, 120(r1), 0, qr0
	lfd      f31, 0x70(r1)
	psq_l    f30, 104(r1), 0, qr0
	lfd      f30, 0x60(r1)
	psq_l    f29, 88(r1), 0, qr0
	lfd      f29, 0x50(r1)
	lwz      r31, 0x4c(r1)
	lwz      r30, 0x48(r1)
	lwz      r0, 0x84(r1)
	lwz      r29, 0x44(r1)
	mtlr     r0
	addi     r1, r1, 0x80
	blr
	*/
}

/*
 * --INFO--
 * Address:	80194EF4
 * Size:	0000CC
 */
void InteractKill::actPiki(Game::Piki* p)
{
	/*
	stwu     r1, -0x10(r1)
	mflr     r0
	stw      r0, 0x14(r1)
	stw      r31, 0xc(r1)
	mr       r31, r4
	stw      r30, 8(r1)
	mr       r30, r3
	lwz      r3, 8(r3)
	cmplwi   r3, 0
	beq      lbl_80194F2C
	beq      lbl_80194F98
	lwz      r0, 4(r3)
	clrlwi.  r0, r0, 0x1f
	bne      lbl_80194F98

lbl_80194F2C:
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x7c(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194F6C
	lwz      r3, 4(r30)
	lwz      r12, 0(r3)
	lwz      r12, 0x258(r12)
	mtctr    r12
	bctrl
	mr       r4, r3
	mr       r3, r31
	bl       setTekiKillID__Q24Game4PikiFi
	b        lbl_80194F74

lbl_80194F6C:
	li       r0, -1
	sth      r0, 0x2a4(r31)

lbl_80194F74:
	mr       r3, r31
	lwz      r12, 0(r31)
	lwz      r12, 0x1c0(r12)
	mtctr    r12
	bctrl
	clrlwi.  r0, r3, 0x18
	beq      lbl_80194F98
	li       r3, 0
	bl       inc__Q24Game8DeathMgrFi

lbl_80194F98:
	lwz      r4, 8(r30)
	mr       r3, r31
	bl       kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
	lwz      r0, 0x14(r1)
	li       r3, 1
	lwz      r31, 0xc(r1)
	lwz      r30, 8(r1)
	mtlr     r0
	addi     r1, r1, 0x10
	blr
	*/
}

} // namespace Game

/*
 * --INFO--
 * Address:	80194FC0
 * Size:	00000C
 */
void PikiAI::ActBattleArg::getName(void)
{
	/*
	lis      r3, lbl_8047EF40@ha
	addi     r3, r3, lbl_8047EF40@l
	blr
	*/
}

/*
 * --INFO--
 * Address:	80194FCC
 * Size:	000028
 */
void __sinit_interactPiki_cpp(void)
{
	/*
	lis      r4, __float_nan@ha
	li       r0, -1
	lfs      f0, __float_nan@l(r4)
	lis      r3, lbl_804B47D0@ha
	stw      r0, lbl_805159C8@sda21(r13)
	stfsu    f0, lbl_804B47D0@l(r3)
	stfs     f0, lbl_805159CC@sda21(r13)
	stfs     f0, 4(r3)
	stfs     f0, 8(r3)
	blr
	*/
}
