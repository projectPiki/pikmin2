.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_interactPiki_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8047EE90:
	.skip 0xC
.balign 4
lbl_8047EE9C:
	.asciz "interactPiki"
.balign 4
lbl_8047EEAC:
	.asciz "g21_meet_bluepikmin"
.balign 4
lbl_8047EEC0:
	.asciz "g03_meet_redpikmin"
.balign 4
lbl_8047EED4:
	.asciz "g1F_meet_yellowpikmin"
.balign 4
lbl_8047EEEC:
	.4byte lbl_8047EEAC
	.4byte lbl_8047EEC0
	.4byte lbl_8047EED4
.balign 4
lbl_8047EEF8:
	.asciz "X13_exp_leafchappy"
.balign 4
lbl_8047EF0C:
	.asciz "x13_exp_leafchappy"
.balign 4
lbl_8047EF20:
	.asciz "interactPiki.cpp"
.balign 4
lbl_8047EF34:
	.asciz "P2Assert"
.balign 4
lbl_8047EF40:
	.asciz "ActBattleArg"
.balign 4
lbl_8047EF50:
	.asciz "CreatureKillArg"
.balign 4
lbl_8047EF60:
	.asciz "ItemPikiHead::InitArg"
.balign 4
lbl_8047EF78:
	.asciz "ItemInitArg"
.balign 4
lbl_8047EF84:
	.asciz "CreatureActionArg"
.balign 4
lbl_8047EF98:
	.asciz "ActionArg"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
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

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80518EB0:
	.float 128000.0
lbl_80518EB4:
	.float 0.0
lbl_80518EB8:
	.float 1.2
lbl_80518EBC:
	.float 1.0
lbl_80518EC0:
	.float -128000.0
lbl_80518EC4:
	.float -1.0
lbl_80518EC8:
	.float -10.0
lbl_80518ECC:
	.float 325.9493
lbl_80518ED0:
	.float -325.9493
lbl_80518ED4:
	.float 32768.0
lbl_80518ED8:
	.float 0.1
lbl_80518EDC:
	.float 100.0
lbl_80518EE0:
	.float 50.0
.balign 8
lbl_80518EE8:
	.4byte 0x43300000
	.4byte 0x80000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global actPiki__Q24Game15InteractFueFukiFPQ24Game4Piki
actPiki__Q24Game15InteractFueFukiFPQ24Game4Piki:
/* 80192C84 0018FBC4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80192C88 0018FBC8  7C 08 02 A6 */	mflr r0
/* 80192C8C 0018FBCC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80192C90 0018FBD0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80192C94 0018FBD4  7C 9F 23 78 */	mr r31, r4
/* 80192C98 0018FBD8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80192C9C 0018FBDC  7C 7E 1B 78 */	mr r30, r3
/* 80192CA0 0018FBE0  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80192CA4 0018FBE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80192CA8 0018FBE8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80192CAC 0018FBEC  7D 89 03 A6 */	mtctr r12
/* 80192CB0 0018FBF0  4E 80 04 21 */	bctrl 
/* 80192CB4 0018FBF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192CB8 0018FBF8  41 82 00 0C */	beq .L_80192CC4
/* 80192CBC 0018FBFC  38 60 00 00 */	li r3, 0
/* 80192CC0 0018FC00  48 00 00 90 */	b .L_80192D50
.L_80192CC4:
/* 80192CC4 0018FC04  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80192CC8 0018FC08  80 03 00 08 */	lwz r0, 8(r3)
/* 80192CCC 0018FC0C  2C 00 00 0B */	cmpwi r0, 0xb
/* 80192CD0 0018FC10  41 82 00 20 */	beq .L_80192CF0
/* 80192CD4 0018FC14  7F E3 FB 78 */	mr r3, r31
/* 80192CD8 0018FC18  81 9F 00 00 */	lwz r12, 0(r31)
/* 80192CDC 0018FC1C  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80192CE0 0018FC20  7D 89 03 A6 */	mtctr r12
/* 80192CE4 0018FC24  4E 80 04 21 */	bctrl 
/* 80192CE8 0018FC28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192CEC 0018FC2C  40 82 00 0C */	bne .L_80192CF8
.L_80192CF0:
/* 80192CF0 0018FC30  38 60 00 00 */	li r3, 0
/* 80192CF4 0018FC34  48 00 00 5C */	b .L_80192D50
.L_80192CF8:
/* 80192CF8 0018FC38  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80192CFC 0018FC3C  81 83 00 00 */	lwz r12, 0(r3)
/* 80192D00 0018FC40  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 80192D04 0018FC44  7D 89 03 A6 */	mtctr r12
/* 80192D08 0018FC48  4E 80 04 21 */	bctrl 
/* 80192D0C 0018FC4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192D10 0018FC50  41 82 00 3C */	beq .L_80192D4C
/* 80192D14 0018FC54  80 DE 00 04 */	lwz r6, 4(r30)
/* 80192D18 0018FC58  3C 60 80 4B */	lis r3, __vt__Q26PikiAI9ActionArg@ha
/* 80192D1C 0018FC5C  38 03 05 30 */	addi r0, r3, __vt__Q26PikiAI9ActionArg@l
/* 80192D20 0018FC60  3C 60 80 4B */	lis r3, __vt__Q26PikiAI17CreatureActionArg@ha
/* 80192D24 0018FC64  90 01 00 08 */	stw r0, 8(r1)
/* 80192D28 0018FC68  38 03 05 24 */	addi r0, r3, __vt__Q26PikiAI17CreatureActionArg@l
/* 80192D2C 0018FC6C  38 A1 00 08 */	addi r5, r1, 8
/* 80192D30 0018FC70  38 80 00 0B */	li r4, 0xb
/* 80192D34 0018FC74  90 01 00 08 */	stw r0, 8(r1)
/* 80192D38 0018FC78  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80192D3C 0018FC7C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80192D40 0018FC80  48 00 42 55 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80192D44 0018FC84  38 60 00 01 */	li r3, 1
/* 80192D48 0018FC88  48 00 00 08 */	b .L_80192D50
.L_80192D4C:
/* 80192D4C 0018FC8C  38 60 00 00 */	li r3, 0
.L_80192D50:
/* 80192D50 0018FC90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80192D54 0018FC94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80192D58 0018FC98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80192D5C 0018FC9C  7C 08 03 A6 */	mtlr r0
/* 80192D60 0018FCA0  38 21 00 20 */	addi r1, r1, 0x20
/* 80192D64 0018FCA4  4E 80 00 20 */	blr 

.global actPiki__Q24Game11InteractFueFPQ24Game4Piki
actPiki__Q24Game11InteractFueFPQ24Game4Piki:
/* 80192D68 0018FCA8  94 21 FE 40 */	stwu r1, -0x1c0(r1)
/* 80192D6C 0018FCAC  7C 08 02 A6 */	mflr r0
/* 80192D70 0018FCB0  90 01 01 C4 */	stw r0, 0x1c4(r1)
/* 80192D74 0018FCB4  DB E1 01 B0 */	stfd f31, 0x1b0(r1)
/* 80192D78 0018FCB8  F3 E1 01 B8 */	psq_st f31, 440(r1), 0, qr0
/* 80192D7C 0018FCBC  DB C1 01 A0 */	stfd f30, 0x1a0(r1)
/* 80192D80 0018FCC0  F3 C1 01 A8 */	psq_st f30, 424(r1), 0, qr0
/* 80192D84 0018FCC4  DB A1 01 90 */	stfd f29, 0x190(r1)
/* 80192D88 0018FCC8  F3 A1 01 98 */	psq_st f29, 408(r1), 0, qr0
/* 80192D8C 0018FCCC  DB 81 01 80 */	stfd f28, 0x180(r1)
/* 80192D90 0018FCD0  F3 81 01 88 */	psq_st f28, 392(r1), 0, qr0
/* 80192D94 0018FCD4  DB 61 01 70 */	stfd f27, 0x170(r1)
/* 80192D98 0018FCD8  F3 61 01 78 */	psq_st f27, 376(r1), 0, qr0
/* 80192D9C 0018FCDC  DB 41 01 60 */	stfd f26, 0x160(r1)
/* 80192DA0 0018FCE0  F3 41 01 68 */	psq_st f26, 360(r1), 0, qr0
/* 80192DA4 0018FCE4  DB 21 01 50 */	stfd f25, 0x150(r1)
/* 80192DA8 0018FCE8  F3 21 01 58 */	psq_st f25, 344(r1), 0, qr0
/* 80192DAC 0018FCEC  DB 01 01 40 */	stfd f24, 0x140(r1)
/* 80192DB0 0018FCF0  F3 01 01 48 */	psq_st f24, 328(r1), 0, qr0
/* 80192DB4 0018FCF4  BF 21 01 24 */	stmw r25, 0x124(r1)
/* 80192DB8 0018FCF8  80 CD 93 E8 */	lwz r6, gameSystem__4Game@sda21(r13)
/* 80192DBC 0018FCFC  3C A0 80 48 */	lis r5, lbl_8047EE90@ha
/* 80192DC0 0018FD00  7C 79 1B 78 */	mr r25, r3
/* 80192DC4 0018FD04  7C 9F 23 78 */	mr r31, r4
/* 80192DC8 0018FD08  80 06 00 44 */	lwz r0, 0x44(r6)
/* 80192DCC 0018FD0C  3B C5 EE 90 */	addi r30, r5, lbl_8047EE90@l
/* 80192DD0 0018FD10  2C 00 00 00 */	cmpwi r0, 0
/* 80192DD4 0018FD14  40 82 00 A8 */	bne .L_80192E7C
/* 80192DD8 0018FD18  80 66 00 40 */	lwz r3, 0x40(r6)
/* 80192DDC 0018FD1C  80 03 02 18 */	lwz r0, 0x218(r3)
/* 80192DE0 0018FD20  28 00 00 00 */	cmplwi r0, 0
/* 80192DE4 0018FD24  40 82 00 98 */	bne .L_80192E7C
/* 80192DE8 0018FD28  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80192DEC 0018FD2C  38 80 00 27 */	li r4, 0x27
/* 80192DF0 0018FD30  48 05 45 F1 */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80192DF4 0018FD34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192DF8 0018FD38  40 82 00 84 */	bne .L_80192E7C
/* 80192DFC 0018FD3C  80 79 00 04 */	lwz r3, 4(r25)
/* 80192E00 0018FD40  81 83 00 00 */	lwz r12, 0(r3)
/* 80192E04 0018FD44  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80192E08 0018FD48  7D 89 03 A6 */	mtctr r12
/* 80192E0C 0018FD4C  4E 80 04 21 */	bctrl 
/* 80192E10 0018FD50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192E14 0018FD54  41 82 00 68 */	beq .L_80192E7C
/* 80192E18 0018FD58  83 59 00 04 */	lwz r26, 4(r25)
/* 80192E1C 0018FD5C  A0 1A 02 DC */	lhz r0, 0x2dc(r26)
/* 80192E20 0018FD60  28 00 00 00 */	cmplwi r0, 0
/* 80192E24 0018FD64  40 82 00 28 */	bne .L_80192E4C
/* 80192E28 0018FD68  7F E3 FB 78 */	mr r3, r31
/* 80192E2C 0018FD6C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80192E30 0018FD70  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 80192E34 0018FD74  7D 89 03 A6 */	mtctr r12
/* 80192E38 0018FD78  4E 80 04 21 */	bctrl 
/* 80192E3C 0018FD7C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192E40 0018FD80  40 82 00 0C */	bne .L_80192E4C
/* 80192E44 0018FD84  38 60 00 00 */	li r3, 0
/* 80192E48 0018FD88  48 00 0A 9C */	b .L_801938E4
.L_80192E4C:
/* 80192E4C 0018FD8C  A0 1A 02 DC */	lhz r0, 0x2dc(r26)
/* 80192E50 0018FD90  28 00 00 01 */	cmplwi r0, 1
/* 80192E54 0018FD94  40 82 00 28 */	bne .L_80192E7C
/* 80192E58 0018FD98  7F E3 FB 78 */	mr r3, r31
/* 80192E5C 0018FD9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80192E60 0018FDA0  81 8C 01 FC */	lwz r12, 0x1fc(r12)
/* 80192E64 0018FDA4  7D 89 03 A6 */	mtctr r12
/* 80192E68 0018FDA8  4E 80 04 21 */	bctrl 
/* 80192E6C 0018FDAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192E70 0018FDB0  41 82 00 0C */	beq .L_80192E7C
/* 80192E74 0018FDB4  38 60 00 00 */	li r3, 0
/* 80192E78 0018FDB8  48 00 0A 6C */	b .L_801938E4
.L_80192E7C:
/* 80192E7C 0018FDBC  7F E3 FB 78 */	mr r3, r31
/* 80192E80 0018FDC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80192E84 0018FDC4  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80192E88 0018FDC8  7D 89 03 A6 */	mtctr r12
/* 80192E8C 0018FDCC  4E 80 04 21 */	bctrl 
/* 80192E90 0018FDD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192E94 0018FDD4  41 82 07 30 */	beq .L_801935C4
/* 80192E98 0018FDD8  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80192E9C 0018FDDC  2C 04 00 03 */	cmpwi r4, 3
/* 80192EA0 0018FDE0  40 82 02 B0 */	bne .L_80193150
/* 80192EA4 0018FDE4  7F E3 FB 78 */	mr r3, r31
/* 80192EA8 0018FDE8  4B FB 60 8D */	bl getStateID__Q24Game4PikiFv
/* 80192EAC 0018FDEC  2C 03 00 1B */	cmpwi r3, 0x1b
/* 80192EB0 0018FDF0  41 82 07 14 */	beq .L_801935C4
/* 80192EB4 0018FDF4  7F E4 FB 78 */	mr r4, r31
/* 80192EB8 0018FDF8  38 61 00 38 */	addi r3, r1, 0x38
/* 80192EBC 0018FDFC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80192EC0 0018FE00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192EC4 0018FE04  7D 89 03 A6 */	mtctr r12
/* 80192EC8 0018FE08  4E 80 04 21 */	bctrl 
/* 80192ECC 0018FE0C  80 6D 94 A0 */	lwz r3, mgr__Q24Game8ItemCave@sda21(r13)
/* 80192ED0 0018FE10  C3 41 00 38 */	lfs f26, 0x38(r1)
/* 80192ED4 0018FE14  28 03 00 00 */	cmplwi r3, 0
/* 80192ED8 0018FE18  C3 21 00 3C */	lfs f25, 0x3c(r1)
/* 80192EDC 0018FE1C  C3 01 00 40 */	lfs f24, 0x40(r1)
/* 80192EE0 0018FE20  C3 82 AB 50 */	lfs f28, lbl_80518EB0@sda21(r2)
/* 80192EE4 0018FE24  41 82 00 08 */	beq .L_80192EEC
/* 80192EE8 0018FE28  38 63 00 30 */	addi r3, r3, 0x30
.L_80192EEC:
/* 80192EEC 0018FE2C  38 00 00 00 */	li r0, 0
/* 80192EF0 0018FE30  3C 80 80 4B */	lis r4, "__vt__26Iterator<Q24Game8BaseItem>"@ha
/* 80192EF4 0018FE34  38 84 05 60 */	addi r4, r4, "__vt__26Iterator<Q24Game8BaseItem>"@l
/* 80192EF8 0018FE38  90 01 00 78 */	stw r0, 0x78(r1)
/* 80192EFC 0018FE3C  28 00 00 00 */	cmplwi r0, 0
/* 80192F00 0018FE40  90 81 00 6C */	stw r4, 0x6c(r1)
/* 80192F04 0018FE44  90 01 00 70 */	stw r0, 0x70(r1)
/* 80192F08 0018FE48  90 61 00 74 */	stw r3, 0x74(r1)
/* 80192F0C 0018FE4C  40 82 00 1C */	bne .L_80192F28
/* 80192F10 0018FE50  81 83 00 00 */	lwz r12, 0(r3)
/* 80192F14 0018FE54  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80192F18 0018FE58  7D 89 03 A6 */	mtctr r12
/* 80192F1C 0018FE5C  4E 80 04 21 */	bctrl 
/* 80192F20 0018FE60  90 61 00 70 */	stw r3, 0x70(r1)
/* 80192F24 0018FE64  48 00 00 8C */	b .L_80192FB0
.L_80192F28:
/* 80192F28 0018FE68  81 83 00 00 */	lwz r12, 0(r3)
/* 80192F2C 0018FE6C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80192F30 0018FE70  7D 89 03 A6 */	mtctr r12
/* 80192F34 0018FE74  4E 80 04 21 */	bctrl 
/* 80192F38 0018FE78  90 61 00 70 */	stw r3, 0x70(r1)
/* 80192F3C 0018FE7C  48 00 00 58 */	b .L_80192F94
.L_80192F40:
/* 80192F40 0018FE80  80 61 00 74 */	lwz r3, 0x74(r1)
/* 80192F44 0018FE84  80 81 00 70 */	lwz r4, 0x70(r1)
/* 80192F48 0018FE88  81 83 00 00 */	lwz r12, 0(r3)
/* 80192F4C 0018FE8C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80192F50 0018FE90  7D 89 03 A6 */	mtctr r12
/* 80192F54 0018FE94  4E 80 04 21 */	bctrl 
/* 80192F58 0018FE98  7C 64 1B 78 */	mr r4, r3
/* 80192F5C 0018FE9C  80 61 00 78 */	lwz r3, 0x78(r1)
/* 80192F60 0018FEA0  81 83 00 00 */	lwz r12, 0(r3)
/* 80192F64 0018FEA4  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192F68 0018FEA8  7D 89 03 A6 */	mtctr r12
/* 80192F6C 0018FEAC  4E 80 04 21 */	bctrl 
/* 80192F70 0018FEB0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192F74 0018FEB4  40 82 00 3C */	bne .L_80192FB0
/* 80192F78 0018FEB8  80 61 00 74 */	lwz r3, 0x74(r1)
/* 80192F7C 0018FEBC  80 81 00 70 */	lwz r4, 0x70(r1)
/* 80192F80 0018FEC0  81 83 00 00 */	lwz r12, 0(r3)
/* 80192F84 0018FEC4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80192F88 0018FEC8  7D 89 03 A6 */	mtctr r12
/* 80192F8C 0018FECC  4E 80 04 21 */	bctrl 
/* 80192F90 0018FED0  90 61 00 70 */	stw r3, 0x70(r1)
.L_80192F94:
/* 80192F94 0018FED4  81 81 00 6C */	lwz r12, 0x6c(r1)
/* 80192F98 0018FED8  38 61 00 6C */	addi r3, r1, 0x6c
/* 80192F9C 0018FEDC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80192FA0 0018FEE0  7D 89 03 A6 */	mtctr r12
/* 80192FA4 0018FEE4  4E 80 04 21 */	bctrl 
/* 80192FA8 0018FEE8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80192FAC 0018FEEC  41 82 FF 94 */	beq .L_80192F40
.L_80192FB0:
/* 80192FB0 0018FEF0  C3 62 AB 54 */	lfs f27, lbl_80518EB4@sda21(r2)
/* 80192FB4 0018FEF4  48 00 01 48 */	b .L_801930FC
.L_80192FB8:
/* 80192FB8 0018FEF8  80 61 00 74 */	lwz r3, 0x74(r1)
/* 80192FBC 0018FEFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80192FC0 0018FF00  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80192FC4 0018FF04  7D 89 03 A6 */	mtctr r12
/* 80192FC8 0018FF08  4E 80 04 21 */	bctrl 
/* 80192FCC 0018FF0C  7C 64 1B 78 */	mr r4, r3
/* 80192FD0 0018FF10  38 61 00 2C */	addi r3, r1, 0x2c
/* 80192FD4 0018FF14  81 84 00 00 */	lwz r12, 0(r4)
/* 80192FD8 0018FF18  81 8C 00 08 */	lwz r12, 8(r12)
/* 80192FDC 0018FF1C  7D 89 03 A6 */	mtctr r12
/* 80192FE0 0018FF20  4E 80 04 21 */	bctrl 
/* 80192FE4 0018FF24  C0 61 00 30 */	lfs f3, 0x30(r1)
/* 80192FE8 0018FF28  C0 A1 00 2C */	lfs f5, 0x2c(r1)
/* 80192FEC 0018FF2C  EC 23 C8 28 */	fsubs f1, f3, f25
/* 80192FF0 0018FF30  C0 81 00 34 */	lfs f4, 0x34(r1)
/* 80192FF4 0018FF34  EC 45 D0 28 */	fsubs f2, f5, f26
/* 80192FF8 0018FF38  EC 04 C0 28 */	fsubs f0, f4, f24
/* 80192FFC 0018FF3C  EC 21 00 72 */	fmuls f1, f1, f1
/* 80193000 0018FF40  EC C0 00 32 */	fmuls f6, f0, f0
/* 80193004 0018FF44  EC 02 08 BA */	fmadds f0, f2, f2, f1
/* 80193008 0018FF48  EC 06 00 2A */	fadds f0, f6, f0
/* 8019300C 0018FF4C  FC 00 D8 40 */	fcmpo cr0, f0, f27
/* 80193010 0018FF50  40 81 00 14 */	ble .L_80193024
/* 80193014 0018FF54  40 81 00 14 */	ble .L_80193028
/* 80193018 0018FF58  FC 20 00 34 */	frsqrte f1, f0
/* 8019301C 0018FF5C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80193020 0018FF60  48 00 00 08 */	b .L_80193028
.L_80193024:
/* 80193024 0018FF64  FC 00 D8 90 */	fmr f0, f27
.L_80193028:
/* 80193028 0018FF68  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 8019302C 0018FF6C  40 80 00 14 */	bge .L_80193040
/* 80193030 0018FF70  FF 80 00 90 */	fmr f28, f0
/* 80193034 0018FF74  FF E0 28 90 */	fmr f31, f5
/* 80193038 0018FF78  FF C0 18 90 */	fmr f30, f3
/* 8019303C 0018FF7C  FF A0 20 90 */	fmr f29, f4
.L_80193040:
/* 80193040 0018FF80  80 01 00 78 */	lwz r0, 0x78(r1)
/* 80193044 0018FF84  28 00 00 00 */	cmplwi r0, 0
/* 80193048 0018FF88  40 82 00 24 */	bne .L_8019306C
/* 8019304C 0018FF8C  80 61 00 74 */	lwz r3, 0x74(r1)
/* 80193050 0018FF90  80 81 00 70 */	lwz r4, 0x70(r1)
/* 80193054 0018FF94  81 83 00 00 */	lwz r12, 0(r3)
/* 80193058 0018FF98  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8019305C 0018FF9C  7D 89 03 A6 */	mtctr r12
/* 80193060 0018FFA0  4E 80 04 21 */	bctrl 
/* 80193064 0018FFA4  90 61 00 70 */	stw r3, 0x70(r1)
/* 80193068 0018FFA8  48 00 00 94 */	b .L_801930FC
.L_8019306C:
/* 8019306C 0018FFAC  80 61 00 74 */	lwz r3, 0x74(r1)
/* 80193070 0018FFB0  80 81 00 70 */	lwz r4, 0x70(r1)
/* 80193074 0018FFB4  81 83 00 00 */	lwz r12, 0(r3)
/* 80193078 0018FFB8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8019307C 0018FFBC  7D 89 03 A6 */	mtctr r12
/* 80193080 0018FFC0  4E 80 04 21 */	bctrl 
/* 80193084 0018FFC4  90 61 00 70 */	stw r3, 0x70(r1)
/* 80193088 0018FFC8  48 00 00 58 */	b .L_801930E0
.L_8019308C:
/* 8019308C 0018FFCC  80 61 00 74 */	lwz r3, 0x74(r1)
/* 80193090 0018FFD0  80 81 00 70 */	lwz r4, 0x70(r1)
/* 80193094 0018FFD4  81 83 00 00 */	lwz r12, 0(r3)
/* 80193098 0018FFD8  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8019309C 0018FFDC  7D 89 03 A6 */	mtctr r12
/* 801930A0 0018FFE0  4E 80 04 21 */	bctrl 
/* 801930A4 0018FFE4  7C 64 1B 78 */	mr r4, r3
/* 801930A8 0018FFE8  80 61 00 78 */	lwz r3, 0x78(r1)
/* 801930AC 0018FFEC  81 83 00 00 */	lwz r12, 0(r3)
/* 801930B0 0018FFF0  81 8C 00 08 */	lwz r12, 8(r12)
/* 801930B4 0018FFF4  7D 89 03 A6 */	mtctr r12
/* 801930B8 0018FFF8  4E 80 04 21 */	bctrl 
/* 801930BC 0018FFFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801930C0 00190000  40 82 00 3C */	bne .L_801930FC
/* 801930C4 00190004  80 61 00 74 */	lwz r3, 0x74(r1)
/* 801930C8 00190008  80 81 00 70 */	lwz r4, 0x70(r1)
/* 801930CC 0019000C  81 83 00 00 */	lwz r12, 0(r3)
/* 801930D0 00190010  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801930D4 00190014  7D 89 03 A6 */	mtctr r12
/* 801930D8 00190018  4E 80 04 21 */	bctrl 
/* 801930DC 0019001C  90 61 00 70 */	stw r3, 0x70(r1)
.L_801930E0:
/* 801930E0 00190020  81 81 00 6C */	lwz r12, 0x6c(r1)
/* 801930E4 00190024  38 61 00 6C */	addi r3, r1, 0x6c
/* 801930E8 00190028  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801930EC 0019002C  7D 89 03 A6 */	mtctr r12
/* 801930F0 00190030  4E 80 04 21 */	bctrl 
/* 801930F4 00190034  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801930F8 00190038  41 82 FF 94 */	beq .L_8019308C
.L_801930FC:
/* 801930FC 0019003C  80 61 00 74 */	lwz r3, 0x74(r1)
/* 80193100 00190040  81 83 00 00 */	lwz r12, 0(r3)
/* 80193104 00190044  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80193108 00190048  7D 89 03 A6 */	mtctr r12
/* 8019310C 0019004C  4E 80 04 21 */	bctrl 
/* 80193110 00190050  80 81 00 70 */	lwz r4, 0x70(r1)
/* 80193114 00190054  7C 04 18 40 */	cmplw r4, r3
/* 80193118 00190058  40 82 FE A0 */	bne .L_80192FB8
/* 8019311C 0019005C  D3 E1 00 60 */	stfs f31, 0x60(r1)
/* 80193120 00190060  7F E4 FB 78 */	mr r4, r31
/* 80193124 00190064  38 C1 00 60 */	addi r6, r1, 0x60
/* 80193128 00190068  38 A0 00 1B */	li r5, 0x1b
/* 8019312C 0019006C  D3 C1 00 64 */	stfs f30, 0x64(r1)
/* 80193130 00190070  D3 A1 00 68 */	stfs f29, 0x68(r1)
/* 80193134 00190074  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80193138 00190078  81 83 00 00 */	lwz r12, 0(r3)
/* 8019313C 0019007C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193140 00190080  7D 89 03 A6 */	mtctr r12
/* 80193144 00190084  4E 80 04 21 */	bctrl 
/* 80193148 00190088  38 60 00 00 */	li r3, 0
/* 8019314C 0019008C  48 00 07 98 */	b .L_801938E4
.L_80193150:
/* 80193150 00190090  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80193154 00190094  80 03 00 18 */	lwz r0, 0x18(r3)
/* 80193158 00190098  2C 00 00 00 */	cmpwi r0, 0
/* 8019315C 0019009C  40 82 03 88 */	bne .L_801934E4
/* 80193160 001900A0  38 04 FF FF */	addi r0, r4, -1
/* 80193164 001900A4  28 00 00 01 */	cmplwi r0, 1
/* 80193168 001900A8  40 81 00 0C */	ble .L_80193174
/* 8019316C 001900AC  2C 04 00 00 */	cmpwi r4, 0
/* 80193170 001900B0  40 82 03 74 */	bne .L_801934E4
.L_80193174:
/* 80193174 001900B4  7F E3 FB 78 */	mr r3, r31
/* 80193178 001900B8  38 80 00 00 */	li r4, 0
/* 8019317C 001900BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193180 001900C0  81 8C 01 F8 */	lwz r12, 0x1f8(r12)
/* 80193184 001900C4  7D 89 03 A6 */	mtctr r12
/* 80193188 001900C8  4E 80 04 21 */	bctrl 
/* 8019318C 001900CC  3C 60 80 51 */	lis r3, zikatuPikis__Q24Game8GameStat@ha
/* 80193190 001900D0  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80193194 001900D4  38 63 26 2C */	addi r3, r3, zikatuPikis__Q24Game8GameStat@l
/* 80193198 001900D8  48 03 E0 85 */	bl dec__Q34Game8GameStat11PikiCounterFi
/* 8019319C 001900DC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801931A0 001900E0  38 80 00 23 */	li r4, 0x23
/* 801931A4 001900E4  48 05 42 3D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 801931A8 001900E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801931AC 001900EC  40 82 00 50 */	bne .L_801931FC
/* 801931B0 001900F0  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 801931B4 001900F4  2C 00 00 01 */	cmpwi r0, 1
/* 801931B8 001900F8  40 82 00 44 */	bne .L_801931FC
/* 801931BC 001900FC  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801931C0 00190100  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801931C4 00190104  81 83 00 00 */	lwz r12, 0(r3)
/* 801931C8 00190108  81 8C 00 AC */	lwz r12, 0xac(r12)
/* 801931CC 0019010C  7D 89 03 A6 */	mtctr r12
/* 801931D0 00190110  4E 80 04 21 */	bctrl 
/* 801931D4 00190114  28 03 00 04 */	cmplwi r3, 4
/* 801931D8 00190118  41 82 00 24 */	beq .L_801931FC
/* 801931DC 0019011C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801931E0 00190120  38 80 00 04 */	li r4, 4
/* 801931E4 00190124  C0 22 AB 58 */	lfs f1, lbl_80518EB8@sda21(r2)
/* 801931E8 00190128  80 63 00 58 */	lwz r3, 0x58(r3)
/* 801931EC 0019012C  81 83 00 00 */	lwz r12, 0(r3)
/* 801931F0 00190130  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801931F4 00190134  7D 89 03 A6 */	mtctr r12
/* 801931F8 00190138  4E 80 04 21 */	bctrl 
.L_801931FC:
/* 801931FC 0019013C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80193200 00190140  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 80193204 00190144  48 05 3E D5 */	bl hasBootContainer__Q24Game8PlayDataFi
/* 80193208 00190148  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019320C 0019014C  40 82 03 B8 */	bne .L_801935C4
/* 80193210 00190150  81 3E 00 5C */	lwz r9, 0x5c(r30)
/* 80193214 00190154  38 A1 00 54 */	addi r5, r1, 0x54
/* 80193218 00190158  81 1E 00 60 */	lwz r8, 0x60(r30)
/* 8019321C 0019015C  38 00 00 00 */	li r0, 0
/* 80193220 00190160  88 DF 02 B8 */	lbz r6, 0x2b8(r31)
/* 80193224 00190164  7F E4 FB 78 */	mr r4, r31
/* 80193228 00190168  80 FE 00 64 */	lwz r7, 0x64(r30)
/* 8019322C 0019016C  38 61 00 20 */	addi r3, r1, 0x20
/* 80193230 00190170  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80193234 00190174  54 C6 10 3A */	slwi r6, r6, 2
/* 80193238 00190178  91 21 00 54 */	stw r9, 0x54(r1)
/* 8019323C 0019017C  91 01 00 58 */	stw r8, 0x58(r1)
/* 80193240 00190180  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 80193244 00190184  7C A5 30 2E */	lwzx r5, r5, r6
/* 80193248 00190188  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 8019324C 0019018C  90 A1 00 E4 */	stw r5, 0xe4(r1)
/* 80193250 00190190  90 01 00 F0 */	stw r0, 0xf0(r1)
/* 80193254 00190194  D0 01 00 FC */	stfs f0, 0xfc(r1)
/* 80193258 00190198  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 8019325C 0019019C  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 80193260 001901A0  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 80193264 001901A4  90 01 01 0C */	stw r0, 0x10c(r1)
/* 80193268 001901A8  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 8019326C 001901AC  90 01 00 EC */	stw r0, 0xec(r1)
/* 80193270 001901B0  90 01 01 10 */	stw r0, 0x110(r1)
/* 80193274 001901B4  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80193278 001901B8  90 01 01 14 */	stw r0, 0x114(r1)
/* 8019327C 001901BC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193280 001901C0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193284 001901C4  7D 89 03 A6 */	mtctr r12
/* 80193288 001901C8  4E 80 04 21 */	bctrl 
/* 8019328C 001901CC  C0 41 00 20 */	lfs f2, 0x20(r1)
/* 80193290 001901D0  7F E3 FB 78 */	mr r3, r31
/* 80193294 001901D4  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 80193298 001901D8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8019329C 001901DC  D0 41 00 FC */	stfs f2, 0xfc(r1)
/* 801932A0 001901E0  D0 21 01 00 */	stfs f1, 0x100(r1)
/* 801932A4 001901E4  D0 01 01 04 */	stfs f0, 0x104(r1)
/* 801932A8 001901E8  81 9F 00 00 */	lwz r12, 0(r31)
/* 801932AC 001901EC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801932B0 001901F0  7D 89 03 A6 */	mtctr r12
/* 801932B4 001901F4  4E 80 04 21 */	bctrl 
/* 801932B8 001901F8  D0 21 01 08 */	stfs f1, 0x108(r1)
/* 801932BC 001901FC  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 801932C0 00190200  2C 00 00 01 */	cmpwi r0, 1
/* 801932C4 00190204  40 82 01 D8 */	bne .L_8019349C
/* 801932C8 00190208  38 00 00 00 */	li r0, 0
/* 801932CC 0019020C  80 6D 92 F4 */	lwz r3, pikiMgr__4Game@sda21(r13)
/* 801932D0 00190210  3C 80 80 4B */	lis r4, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 801932D4 00190214  90 01 00 50 */	stw r0, 0x50(r1)
/* 801932D8 00190218  38 84 BC 9C */	addi r4, r4, "__vt__22Iterator<Q24Game4Piki>"@l
/* 801932DC 0019021C  28 00 00 00 */	cmplwi r0, 0
/* 801932E0 00190220  90 81 00 44 */	stw r4, 0x44(r1)
/* 801932E4 00190224  90 01 00 48 */	stw r0, 0x48(r1)
/* 801932E8 00190228  90 61 00 4C */	stw r3, 0x4c(r1)
/* 801932EC 0019022C  40 82 00 1C */	bne .L_80193308
/* 801932F0 00190230  81 83 00 00 */	lwz r12, 0(r3)
/* 801932F4 00190234  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801932F8 00190238  7D 89 03 A6 */	mtctr r12
/* 801932FC 0019023C  4E 80 04 21 */	bctrl 
/* 80193300 00190240  90 61 00 48 */	stw r3, 0x48(r1)
/* 80193304 00190244  48 00 01 78 */	b .L_8019347C
.L_80193308:
/* 80193308 00190248  81 83 00 00 */	lwz r12, 0(r3)
/* 8019330C 0019024C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80193310 00190250  7D 89 03 A6 */	mtctr r12
/* 80193314 00190254  4E 80 04 21 */	bctrl 
/* 80193318 00190258  90 61 00 48 */	stw r3, 0x48(r1)
/* 8019331C 0019025C  48 00 00 58 */	b .L_80193374
.L_80193320:
/* 80193320 00190260  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80193324 00190264  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80193328 00190268  81 83 00 00 */	lwz r12, 0(r3)
/* 8019332C 0019026C  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80193330 00190270  7D 89 03 A6 */	mtctr r12
/* 80193334 00190274  4E 80 04 21 */	bctrl 
/* 80193338 00190278  7C 64 1B 78 */	mr r4, r3
/* 8019333C 0019027C  80 61 00 50 */	lwz r3, 0x50(r1)
/* 80193340 00190280  81 83 00 00 */	lwz r12, 0(r3)
/* 80193344 00190284  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193348 00190288  7D 89 03 A6 */	mtctr r12
/* 8019334C 0019028C  4E 80 04 21 */	bctrl 
/* 80193350 00190290  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193354 00190294  40 82 01 28 */	bne .L_8019347C
/* 80193358 00190298  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 8019335C 0019029C  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80193360 001902A0  81 83 00 00 */	lwz r12, 0(r3)
/* 80193364 001902A4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193368 001902A8  7D 89 03 A6 */	mtctr r12
/* 8019336C 001902AC  4E 80 04 21 */	bctrl 
/* 80193370 001902B0  90 61 00 48 */	stw r3, 0x48(r1)
.L_80193374:
/* 80193374 001902B4  81 81 00 44 */	lwz r12, 0x44(r1)
/* 80193378 001902B8  38 61 00 44 */	addi r3, r1, 0x44
/* 8019337C 001902BC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80193380 001902C0  7D 89 03 A6 */	mtctr r12
/* 80193384 001902C4  4E 80 04 21 */	bctrl 
/* 80193388 001902C8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019338C 001902CC  41 82 FF 94 */	beq .L_80193320
/* 80193390 001902D0  48 00 00 EC */	b .L_8019347C
.L_80193394:
/* 80193394 001902D4  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80193398 001902D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019339C 001902DC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 801933A0 001902E0  7D 89 03 A6 */	mtctr r12
/* 801933A4 001902E4  4E 80 04 21 */	bctrl 
/* 801933A8 001902E8  88 83 02 B8 */	lbz r4, 0x2b8(r3)
/* 801933AC 001902EC  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 801933B0 001902F0  7C 04 00 00 */	cmpw r4, r0
/* 801933B4 001902F4  40 82 00 0C */	bne .L_801933C0
/* 801933B8 001902F8  38 80 00 00 */	li r4, 0
/* 801933BC 001902FC  4B FA 86 95 */	bl movie_begin__Q24Game8CreatureFb
.L_801933C0:
/* 801933C0 00190300  80 01 00 50 */	lwz r0, 0x50(r1)
/* 801933C4 00190304  28 00 00 00 */	cmplwi r0, 0
/* 801933C8 00190308  40 82 00 24 */	bne .L_801933EC
/* 801933CC 0019030C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801933D0 00190310  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801933D4 00190314  81 83 00 00 */	lwz r12, 0(r3)
/* 801933D8 00190318  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801933DC 0019031C  7D 89 03 A6 */	mtctr r12
/* 801933E0 00190320  4E 80 04 21 */	bctrl 
/* 801933E4 00190324  90 61 00 48 */	stw r3, 0x48(r1)
/* 801933E8 00190328  48 00 00 94 */	b .L_8019347C
.L_801933EC:
/* 801933EC 0019032C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 801933F0 00190330  80 81 00 48 */	lwz r4, 0x48(r1)
/* 801933F4 00190334  81 83 00 00 */	lwz r12, 0(r3)
/* 801933F8 00190338  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801933FC 0019033C  7D 89 03 A6 */	mtctr r12
/* 80193400 00190340  4E 80 04 21 */	bctrl 
/* 80193404 00190344  90 61 00 48 */	stw r3, 0x48(r1)
/* 80193408 00190348  48 00 00 58 */	b .L_80193460
.L_8019340C:
/* 8019340C 0019034C  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80193410 00190350  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80193414 00190354  81 83 00 00 */	lwz r12, 0(r3)
/* 80193418 00190358  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 8019341C 0019035C  7D 89 03 A6 */	mtctr r12
/* 80193420 00190360  4E 80 04 21 */	bctrl 
/* 80193424 00190364  7C 64 1B 78 */	mr r4, r3
/* 80193428 00190368  80 61 00 50 */	lwz r3, 0x50(r1)
/* 8019342C 0019036C  81 83 00 00 */	lwz r12, 0(r3)
/* 80193430 00190370  81 8C 00 08 */	lwz r12, 8(r12)
/* 80193434 00190374  7D 89 03 A6 */	mtctr r12
/* 80193438 00190378  4E 80 04 21 */	bctrl 
/* 8019343C 0019037C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193440 00190380  40 82 00 3C */	bne .L_8019347C
/* 80193444 00190384  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80193448 00190388  80 81 00 48 */	lwz r4, 0x48(r1)
/* 8019344C 0019038C  81 83 00 00 */	lwz r12, 0(r3)
/* 80193450 00190390  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193454 00190394  7D 89 03 A6 */	mtctr r12
/* 80193458 00190398  4E 80 04 21 */	bctrl 
/* 8019345C 0019039C  90 61 00 48 */	stw r3, 0x48(r1)
.L_80193460:
/* 80193460 001903A0  81 81 00 44 */	lwz r12, 0x44(r1)
/* 80193464 001903A4  38 61 00 44 */	addi r3, r1, 0x44
/* 80193468 001903A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8019346C 001903AC  7D 89 03 A6 */	mtctr r12
/* 80193470 001903B0  4E 80 04 21 */	bctrl 
/* 80193474 001903B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193478 001903B8  41 82 FF 94 */	beq .L_8019340C
.L_8019347C:
/* 8019347C 001903BC  80 61 00 4C */	lwz r3, 0x4c(r1)
/* 80193480 001903C0  81 83 00 00 */	lwz r12, 0(r3)
/* 80193484 001903C4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80193488 001903C8  7D 89 03 A6 */	mtctr r12
/* 8019348C 001903CC  4E 80 04 21 */	bctrl 
/* 80193490 001903D0  80 81 00 48 */	lwz r4, 0x48(r1)
/* 80193494 001903D4  7C 04 18 40 */	cmplw r4, r3
/* 80193498 001903D8  40 82 FE FC */	bne .L_80193394
.L_8019349C:
/* 8019349C 001903DC  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801934A0 001903E0  93 E3 01 94 */	stw r31, 0x194(r3)
/* 801934A4 001903E4  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 801934A8 001903E8  2C 00 00 01 */	cmpwi r0, 1
/* 801934AC 001903EC  41 82 00 1C */	beq .L_801934C8
/* 801934B0 001903F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801934B4 001903F4  38 81 00 E4 */	addi r4, r1, 0xe4
/* 801934B8 001903F8  48 29 95 19 */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801934BC 001903FC  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801934C0 00190400  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 801934C4 00190404  48 05 3D 39 */	bl setMeetPikmin__Q24Game8PlayDataFi
.L_801934C8:
/* 801934C8 00190408  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801934CC 0019040C  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 801934D0 00190410  48 05 3C AD */	bl setContainer__Q24Game8PlayDataFi
/* 801934D4 00190414  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 801934D8 00190418  88 9F 02 B8 */	lbz r4, 0x2b8(r31)
/* 801934DC 0019041C  48 05 3D A1 */	bl setBootContainer__Q24Game8PlayDataFi
/* 801934E0 00190420  48 00 00 E4 */	b .L_801935C4
.L_801934E4:
/* 801934E4 00190424  2C 04 00 05 */	cmpwi r4, 5
/* 801934E8 00190428  40 82 00 D4 */	bne .L_801935BC
/* 801934EC 0019042C  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801934F0 00190430  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 801934F4 00190434  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801934F8 00190438  41 82 00 CC */	beq .L_801935C4
/* 801934FC 0019043C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80193500 00190440  38 80 00 2C */	li r4, 0x2c
/* 80193504 00190444  48 05 3E DD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80193508 00190448  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019350C 0019044C  40 82 00 B8 */	bne .L_801935C4
/* 80193510 00190450  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80193514 00190454  38 80 00 2C */	li r4, 0x2c
/* 80193518 00190458  48 05 3E 8D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8019351C 0019045C  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80193520 00190460  38 00 00 00 */	li r0, 0
/* 80193524 00190464  38 BE 00 68 */	addi r5, r30, 0x68
/* 80193528 00190468  90 01 00 B4 */	stw r0, 0xb4(r1)
/* 8019352C 0019046C  7F E4 FB 78 */	mr r4, r31
/* 80193530 00190470  38 61 00 14 */	addi r3, r1, 0x14
/* 80193534 00190474  90 A1 00 B0 */	stw r5, 0xb0(r1)
/* 80193538 00190478  90 01 00 BC */	stw r0, 0xbc(r1)
/* 8019353C 0019047C  D0 01 00 C8 */	stfs f0, 0xc8(r1)
/* 80193540 00190480  D0 01 00 CC */	stfs f0, 0xcc(r1)
/* 80193544 00190484  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80193548 00190488  D0 01 00 D4 */	stfs f0, 0xd4(r1)
/* 8019354C 0019048C  90 01 00 D8 */	stw r0, 0xd8(r1)
/* 80193550 00190490  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 80193554 00190494  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80193558 00190498  90 01 00 DC */	stw r0, 0xdc(r1)
/* 8019355C 0019049C  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80193560 001904A0  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80193564 001904A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193568 001904A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019356C 001904AC  7D 89 03 A6 */	mtctr r12
/* 80193570 001904B0  4E 80 04 21 */	bctrl 
/* 80193574 001904B4  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80193578 001904B8  7F E3 FB 78 */	mr r3, r31
/* 8019357C 001904BC  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 80193580 001904C0  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 80193584 001904C4  D0 41 00 C8 */	stfs f2, 0xc8(r1)
/* 80193588 001904C8  D0 21 00 CC */	stfs f1, 0xcc(r1)
/* 8019358C 001904CC  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80193590 001904D0  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193594 001904D4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80193598 001904D8  7D 89 03 A6 */	mtctr r12
/* 8019359C 001904DC  4E 80 04 21 */	bctrl 
/* 801935A0 001904E0  D0 21 00 D4 */	stfs f1, 0xd4(r1)
/* 801935A4 001904E4  38 81 00 B0 */	addi r4, r1, 0xb0
/* 801935A8 001904E8  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801935AC 001904EC  93 E3 01 94 */	stw r31, 0x194(r3)
/* 801935B0 001904F0  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801935B4 001904F4  48 29 94 1D */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
/* 801935B8 001904F8  48 00 00 0C */	b .L_801935C4
.L_801935BC:
/* 801935BC 001904FC  38 60 00 00 */	li r3, 0
/* 801935C0 00190500  48 00 03 24 */	b .L_801938E4
.L_801935C4:
/* 801935C4 00190504  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 801935C8 00190508  7F E4 FB 78 */	mr r4, r31
/* 801935CC 0019050C  81 83 00 00 */	lwz r12, 0(r3)
/* 801935D0 00190510  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801935D4 00190514  7D 89 03 A6 */	mtctr r12
/* 801935D8 00190518  4E 80 04 21 */	bctrl 
/* 801935DC 0019051C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801935E0 00190520  41 82 00 0C */	beq .L_801935EC
/* 801935E4 00190524  38 60 00 00 */	li r3, 0
/* 801935E8 00190528  48 00 02 FC */	b .L_801938E4
.L_801935EC:
/* 801935EC 0019052C  80 79 00 04 */	lwz r3, 4(r25)
/* 801935F0 00190530  81 83 00 00 */	lwz r12, 0(r3)
/* 801935F4 00190534  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801935F8 00190538  7D 89 03 A6 */	mtctr r12
/* 801935FC 0019053C  4E 80 04 21 */	bctrl 
/* 80193600 00190540  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193604 00190544  40 82 00 0C */	bne .L_80193610
/* 80193608 00190548  38 60 00 00 */	li r3, 0
/* 8019360C 0019054C  48 00 02 D8 */	b .L_801938E4
.L_80193610:
/* 80193610 00190550  80 1F 00 BC */	lwz r0, 0xbc(r31)
/* 80193614 00190554  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 80193618 00190558  40 82 00 0C */	bne .L_80193624
/* 8019361C 0019055C  38 60 00 00 */	li r3, 0
/* 80193620 00190560  48 00 02 C4 */	b .L_801938E4
.L_80193624:
/* 80193624 00190564  80 9F 02 94 */	lwz r4, 0x294(r31)
/* 80193628 00190568  7F E3 FB 78 */	mr r3, r31
/* 8019362C 0019056C  83 79 00 04 */	lwz r27, 4(r25)
/* 80193630 00190570  83 A4 00 08 */	lwz r29, 8(r4)
/* 80193634 00190574  4B FB 59 01 */	bl getStateID__Q24Game4PikiFv
/* 80193638 00190578  2C 1D 00 0B */	cmpwi r29, 0xb
/* 8019363C 0019057C  83 9F 02 90 */	lwz r28, 0x290(r31)
/* 80193640 00190580  40 82 00 50 */	bne .L_80193690
/* 80193644 00190584  80 1C 00 04 */	lwz r0, 4(r28)
/* 80193648 00190588  2C 00 00 15 */	cmpwi r0, 0x15
/* 8019364C 0019058C  41 82 00 0C */	beq .L_80193658
/* 80193650 00190590  38 60 00 00 */	li r3, 0
/* 80193654 00190594  48 00 02 90 */	b .L_801938E4
.L_80193658:
/* 80193658 00190598  88 0D 84 6D */	lbz r0, sTekiChappyFlag__Q24Game12BaseHIOParms@sda21(r13)
/* 8019365C 0019059C  3B 40 00 01 */	li r26, 1
/* 80193660 001905A0  28 00 00 00 */	cmplwi r0, 0
/* 80193664 001905A4  41 82 00 44 */	beq .L_801936A8
/* 80193668 001905A8  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 8019366C 001905AC  54 60 05 EF */	rlwinm. r0, r3, 0, 0x17, 0x17
/* 80193670 001905B0  41 82 00 38 */	beq .L_801936A8
/* 80193674 001905B4  54 60 06 2C */	rlwinm r0, r3, 0, 0x18, 0x16
/* 80193678 001905B8  3C 60 80 51 */	lis r3, alivePikis__Q24Game8GameStat@ha
/* 8019367C 001905BC  90 1F 01 7C */	stw r0, 0x17c(r31)
/* 80193680 001905C0  38 63 25 EC */	addi r3, r3, alivePikis__Q24Game8GameStat@l
/* 80193684 001905C4  7F E4 FB 78 */	mr r4, r31
/* 80193688 001905C8  48 03 DA 0D */	bl inc__Q34Game8GameStat11PikiCounterFPQ24Game4Piki
/* 8019368C 001905CC  48 00 00 1C */	b .L_801936A8
.L_80193690:
/* 80193690 001905D0  7F 83 E3 78 */	mr r3, r28
/* 80193694 001905D4  81 9C 00 00 */	lwz r12, 0(r28)
/* 80193698 001905D8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 8019369C 001905DC  7D 89 03 A6 */	mtctr r12
/* 801936A0 001905E0  4E 80 04 21 */	bctrl 
/* 801936A4 001905E4  7C 7A 1B 78 */	mr r26, r3
.L_801936A8:
/* 801936A8 001905E8  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801936AC 001905EC  38 80 00 00 */	li r4, 0
/* 801936B0 001905F0  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801936B4 001905F4  2C 00 00 01 */	cmpwi r0, 1
/* 801936B8 001905F8  40 82 00 34 */	bne .L_801936EC
/* 801936BC 001905FC  88 7F 02 B8 */	lbz r3, 0x2b8(r31)
/* 801936C0 00190600  2C 03 00 01 */	cmpwi r3, 1
/* 801936C4 00190604  40 82 00 10 */	bne .L_801936D4
/* 801936C8 00190608  A0 1B 02 DC */	lhz r0, 0x2dc(r27)
/* 801936CC 0019060C  28 00 00 01 */	cmplwi r0, 1
/* 801936D0 00190610  41 82 00 18 */	beq .L_801936E8
.L_801936D4:
/* 801936D4 00190614  2C 03 00 00 */	cmpwi r3, 0
/* 801936D8 00190618  40 82 00 14 */	bne .L_801936EC
/* 801936DC 0019061C  A0 1B 02 DC */	lhz r0, 0x2dc(r27)
/* 801936E0 00190620  28 00 00 00 */	cmplwi r0, 0
/* 801936E4 00190624  40 82 00 08 */	bne .L_801936EC
.L_801936E8:
/* 801936E8 00190628  38 80 00 01 */	li r4, 1
.L_801936EC:
/* 801936EC 0019062C  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 801936F0 00190630  40 82 00 20 */	bne .L_80193710
/* 801936F4 00190634  7F 83 E3 78 */	mr r3, r28
/* 801936F8 00190638  7F E4 FB 78 */	mr r4, r31
/* 801936FC 0019063C  81 9C 00 00 */	lwz r12, 0(r28)
/* 80193700 00190640  80 B9 00 04 */	lwz r5, 4(r25)
/* 80193704 00190644  81 8C 00 6C */	lwz r12, 0x6c(r12)
/* 80193708 00190648  7D 89 03 A6 */	mtctr r12
/* 8019370C 0019064C  4E 80 04 21 */	bctrl 
.L_80193710:
/* 80193710 00190650  7F 83 E3 78 */	mr r3, r28
/* 80193714 00190654  81 9C 00 00 */	lwz r12, 0(r28)
/* 80193718 00190658  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8019371C 0019065C  7D 89 03 A6 */	mtctr r12
/* 80193720 00190660  4E 80 04 21 */	bctrl 
/* 80193724 00190664  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193728 00190668  40 82 01 B8 */	bne .L_801938E0
/* 8019372C 0019066C  57 40 06 3F */	clrlwi. r0, r26, 0x18
/* 80193730 00190670  41 82 01 B0 */	beq .L_801938E0
/* 80193734 00190674  2C 1D 00 00 */	cmpwi r29, 0
/* 80193738 00190678  40 82 00 38 */	bne .L_80193770
/* 8019373C 0019067C  40 82 00 10 */	bne .L_8019374C
/* 80193740 00190680  80 1C 00 04 */	lwz r0, 4(r28)
/* 80193744 00190684  2C 00 00 13 */	cmpwi r0, 0x13
/* 80193748 00190688  41 82 00 28 */	beq .L_80193770
.L_8019374C:
/* 8019374C 0019068C  88 19 00 08 */	lbz r0, 8(r25)
/* 80193750 00190690  28 00 00 00 */	cmplwi r0, 0
/* 80193754 00190694  41 82 01 8C */	beq .L_801938E0
/* 80193758 00190698  80 7F 02 C4 */	lwz r3, 0x2c4(r31)
/* 8019375C 0019069C  80 19 00 04 */	lwz r0, 4(r25)
/* 80193760 001906A0  7C 03 00 40 */	cmplw r3, r0
/* 80193764 001906A4  41 82 01 7C */	beq .L_801938E0
/* 80193768 001906A8  2C 1D 00 00 */	cmpwi r29, 0
/* 8019376C 001906AC  40 82 01 74 */	bne .L_801938E0
.L_80193770:
/* 80193770 001906B0  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80193774 001906B4  80 99 00 04 */	lwz r4, 4(r25)
/* 80193778 001906B8  80 03 00 44 */	lwz r0, 0x44(r3)
/* 8019377C 001906BC  2C 00 00 01 */	cmpwi r0, 1
/* 80193780 001906C0  40 82 00 38 */	bne .L_801937B8
/* 80193784 001906C4  88 7F 02 B8 */	lbz r3, 0x2b8(r31)
/* 80193788 001906C8  2C 03 00 01 */	cmpwi r3, 1
/* 8019378C 001906CC  40 82 00 10 */	bne .L_8019379C
/* 80193790 001906D0  A0 04 02 DC */	lhz r0, 0x2dc(r4)
/* 80193794 001906D4  28 00 00 01 */	cmplwi r0, 1
/* 80193798 001906D8  41 82 00 18 */	beq .L_801937B0
.L_8019379C:
/* 8019379C 001906DC  2C 03 00 00 */	cmpwi r3, 0
/* 801937A0 001906E0  40 82 00 18 */	bne .L_801937B8
/* 801937A4 001906E4  A0 04 02 DC */	lhz r0, 0x2dc(r4)
/* 801937A8 001906E8  28 00 00 00 */	cmplwi r0, 0
/* 801937AC 001906EC  40 82 00 0C */	bne .L_801937B8
.L_801937B0:
/* 801937B0 001906F0  38 60 00 00 */	li r3, 0
/* 801937B4 001906F4  48 00 01 30 */	b .L_801938E4
.L_801937B8:
/* 801937B8 001906F8  7F E3 FB 78 */	mr r3, r31
/* 801937BC 001906FC  4B FB 46 59 */	bl getCurrAction__Q24Game4PikiFv
/* 801937C0 00190700  28 03 00 00 */	cmplwi r3, 0
/* 801937C4 00190704  41 82 00 24 */	beq .L_801937E8
/* 801937C8 00190708  7F E3 FB 78 */	mr r3, r31
/* 801937CC 0019070C  4B FB 46 49 */	bl getCurrAction__Q24Game4PikiFv
/* 801937D0 00190710  81 83 00 00 */	lwz r12, 0(r3)
/* 801937D4 00190714  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 801937D8 00190718  7D 89 03 A6 */	mtctr r12
/* 801937DC 0019071C  4E 80 04 21 */	bctrl 
/* 801937E0 00190720  7F E3 FB 78 */	mr r3, r31
/* 801937E4 00190724  4B FB 46 55 */	bl clearCurrAction__Q24Game4PikiFv
.L_801937E8:
/* 801937E8 00190728  80 19 00 04 */	lwz r0, 4(r25)
/* 801937EC 0019072C  7F E4 FB 78 */	mr r4, r31
/* 801937F0 00190730  38 A0 00 02 */	li r5, 2
/* 801937F4 00190734  38 C0 00 00 */	li r6, 0
/* 801937F8 00190738  90 1F 02 C4 */	stw r0, 0x2c4(r31)
/* 801937FC 0019073C  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80193800 00190740  81 83 00 00 */	lwz r12, 0(r3)
/* 80193804 00190744  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193808 00190748  7D 89 03 A6 */	mtctr r12
/* 8019380C 0019074C  4E 80 04 21 */	bctrl 
/* 80193810 00190750  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80193814 00190754  2C 00 00 05 */	cmpwi r0, 5
/* 80193818 00190758  40 82 00 C0 */	bne .L_801938D8
/* 8019381C 0019075C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80193820 00190760  38 80 00 2C */	li r4, 0x2c
/* 80193824 00190764  48 05 3B BD */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80193828 00190768  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019382C 0019076C  40 82 00 AC */	bne .L_801938D8
/* 80193830 00190770  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80193834 00190774  38 80 00 2C */	li r4, 0x2c
/* 80193838 00190778  48 05 3B 6D */	bl setDemoFlag__Q24Game8PlayDataFi
/* 8019383C 0019077C  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80193840 00190780  38 00 00 00 */	li r0, 0
/* 80193844 00190784  38 BE 00 7C */	addi r5, r30, 0x7c
/* 80193848 00190788  90 01 00 80 */	stw r0, 0x80(r1)
/* 8019384C 0019078C  7F E4 FB 78 */	mr r4, r31
/* 80193850 00190790  38 61 00 08 */	addi r3, r1, 8
/* 80193854 00190794  90 A1 00 7C */	stw r5, 0x7c(r1)
/* 80193858 00190798  90 01 00 88 */	stw r0, 0x88(r1)
/* 8019385C 0019079C  D0 01 00 94 */	stfs f0, 0x94(r1)
/* 80193860 001907A0  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 80193864 001907A4  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 80193868 001907A8  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 8019386C 001907AC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80193870 001907B0  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80193874 001907B4  90 01 00 84 */	stw r0, 0x84(r1)
/* 80193878 001907B8  90 01 00 A8 */	stw r0, 0xa8(r1)
/* 8019387C 001907BC  90 01 00 90 */	stw r0, 0x90(r1)
/* 80193880 001907C0  90 01 00 AC */	stw r0, 0xac(r1)
/* 80193884 001907C4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193888 001907C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019388C 001907CC  7D 89 03 A6 */	mtctr r12
/* 80193890 001907D0  4E 80 04 21 */	bctrl 
/* 80193894 001907D4  C0 41 00 08 */	lfs f2, 8(r1)
/* 80193898 001907D8  7F E3 FB 78 */	mr r3, r31
/* 8019389C 001907DC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801938A0 001907E0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 801938A4 001907E4  D0 41 00 94 */	stfs f2, 0x94(r1)
/* 801938A8 001907E8  D0 21 00 98 */	stfs f1, 0x98(r1)
/* 801938AC 001907EC  D0 01 00 9C */	stfs f0, 0x9c(r1)
/* 801938B0 001907F0  81 9F 00 00 */	lwz r12, 0(r31)
/* 801938B4 001907F4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801938B8 001907F8  7D 89 03 A6 */	mtctr r12
/* 801938BC 001907FC  4E 80 04 21 */	bctrl 
/* 801938C0 00190800  D0 21 00 A0 */	stfs f1, 0xa0(r1)
/* 801938C4 00190804  38 81 00 7C */	addi r4, r1, 0x7c
/* 801938C8 00190808  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801938CC 0019080C  93 E3 01 94 */	stw r31, 0x194(r3)
/* 801938D0 00190810  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 801938D4 00190814  48 29 90 FD */	bl play__Q24Game11MoviePlayerFRQ24Game12MoviePlayArg
.L_801938D8:
/* 801938D8 00190818  38 60 00 01 */	li r3, 1
/* 801938DC 0019081C  48 00 00 08 */	b .L_801938E4
.L_801938E0:
/* 801938E0 00190820  38 60 00 00 */	li r3, 0
.L_801938E4:
/* 801938E4 00190824  E3 E1 01 B8 */	psq_l f31, 440(r1), 0, qr0
/* 801938E8 00190828  CB E1 01 B0 */	lfd f31, 0x1b0(r1)
/* 801938EC 0019082C  E3 C1 01 A8 */	psq_l f30, 424(r1), 0, qr0
/* 801938F0 00190830  CB C1 01 A0 */	lfd f30, 0x1a0(r1)
/* 801938F4 00190834  E3 A1 01 98 */	psq_l f29, 408(r1), 0, qr0
/* 801938F8 00190838  CB A1 01 90 */	lfd f29, 0x190(r1)
/* 801938FC 0019083C  E3 81 01 88 */	psq_l f28, 392(r1), 0, qr0
/* 80193900 00190840  CB 81 01 80 */	lfd f28, 0x180(r1)
/* 80193904 00190844  E3 61 01 78 */	psq_l f27, 376(r1), 0, qr0
/* 80193908 00190848  CB 61 01 70 */	lfd f27, 0x170(r1)
/* 8019390C 0019084C  E3 41 01 68 */	psq_l f26, 360(r1), 0, qr0
/* 80193910 00190850  CB 41 01 60 */	lfd f26, 0x160(r1)
/* 80193914 00190854  E3 21 01 58 */	psq_l f25, 344(r1), 0, qr0
/* 80193918 00190858  CB 21 01 50 */	lfd f25, 0x150(r1)
/* 8019391C 0019085C  E3 01 01 48 */	psq_l f24, 328(r1), 0, qr0
/* 80193920 00190860  CB 01 01 40 */	lfd f24, 0x140(r1)
/* 80193924 00190864  BB 21 01 24 */	lmw r25, 0x124(r1)
/* 80193928 00190868  80 01 01 C4 */	lwz r0, 0x1c4(r1)
/* 8019392C 0019086C  7C 08 03 A6 */	mtlr r0
/* 80193930 00190870  38 21 01 C0 */	addi r1, r1, 0x1c0
/* 80193934 00190874  4E 80 00 20 */	blr 

.global actPiki__Q24Game12InteractDopeFPQ24Game4Piki
actPiki__Q24Game12InteractDopeFPQ24Game4Piki:
/* 80193938 00190878  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019393C 0019087C  7C 08 02 A6 */	mflr r0
/* 80193940 00190880  90 01 00 24 */	stw r0, 0x24(r1)
/* 80193944 00190884  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80193948 00190888  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019394C 0019088C  7C 9E 23 78 */	mr r30, r4
/* 80193950 00190890  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80193954 00190894  7C 7D 1B 78 */	mr r29, r3
/* 80193958 00190898  80 03 00 08 */	lwz r0, 8(r3)
/* 8019395C 0019089C  83 E4 02 90 */	lwz r31, 0x290(r4)
/* 80193960 001908A0  2C 00 00 01 */	cmpwi r0, 1
/* 80193964 001908A4  41 82 00 60 */	beq .L_801939C4
/* 80193968 001908A8  7F E3 FB 78 */	mr r3, r31
/* 8019396C 001908AC  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193970 001908B0  81 8C 00 4C */	lwz r12, 0x4c(r12)
/* 80193974 001908B4  7D 89 03 A6 */	mtctr r12
/* 80193978 001908B8  4E 80 04 21 */	bctrl 
/* 8019397C 001908BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193980 001908C0  41 82 00 44 */	beq .L_801939C4
/* 80193984 001908C4  7F C3 F3 78 */	mr r3, r30
/* 80193988 001908C8  4B FB 66 59 */	bl doped__Q24Game4PikiFv
/* 8019398C 001908CC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193990 001908D0  40 82 00 34 */	bne .L_801939C4
/* 80193994 001908D4  80 1D 00 08 */	lwz r0, 8(r29)
/* 80193998 001908D8  7F C4 F3 78 */	mr r4, r30
/* 8019399C 001908DC  38 C1 00 0C */	addi r6, r1, 0xc
/* 801939A0 001908E0  38 A0 00 10 */	li r5, 0x10
/* 801939A4 001908E4  90 01 00 0C */	stw r0, 0xc(r1)
/* 801939A8 001908E8  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 801939AC 001908EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801939B0 001908F0  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 801939B4 001908F4  7D 89 03 A6 */	mtctr r12
/* 801939B8 001908F8  4E 80 04 21 */	bctrl 
/* 801939BC 001908FC  38 60 00 01 */	li r3, 1
/* 801939C0 00190900  48 00 00 B8 */	b .L_80193A78
.L_801939C4:
/* 801939C4 00190904  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 801939C8 00190908  80 03 00 44 */	lwz r0, 0x44(r3)
/* 801939CC 0019090C  2C 00 00 01 */	cmpwi r0, 1
/* 801939D0 00190910  40 82 00 8C */	bne .L_80193A5C
/* 801939D4 00190914  80 1D 00 08 */	lwz r0, 8(r29)
/* 801939D8 00190918  2C 00 00 01 */	cmpwi r0, 1
/* 801939DC 0019091C  40 82 00 80 */	bne .L_80193A5C
/* 801939E0 00190920  80 7D 00 04 */	lwz r3, 4(r29)
/* 801939E4 00190924  81 83 00 00 */	lwz r12, 0(r3)
/* 801939E8 00190928  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 801939EC 0019092C  7D 89 03 A6 */	mtctr r12
/* 801939F0 00190930  4E 80 04 21 */	bctrl 
/* 801939F4 00190934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801939F8 00190938  41 82 00 7C */	beq .L_80193A74
/* 801939FC 0019093C  80 7D 00 04 */	lwz r3, 4(r29)
/* 80193A00 00190940  88 9E 02 B8 */	lbz r4, 0x2b8(r30)
/* 80193A04 00190944  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 80193A08 00190948  7C 04 00 00 */	cmpw r4, r0
/* 80193A0C 0019094C  40 82 00 68 */	bne .L_80193A74
/* 80193A10 00190950  7F E3 FB 78 */	mr r3, r31
/* 80193A14 00190954  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193A18 00190958  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80193A1C 0019095C  7D 89 03 A6 */	mtctr r12
/* 80193A20 00190960  4E 80 04 21 */	bctrl 
/* 80193A24 00190964  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193A28 00190968  40 82 00 4C */	bne .L_80193A74
/* 80193A2C 0019096C  38 00 00 01 */	li r0, 1
/* 80193A30 00190970  7F C4 F3 78 */	mr r4, r30
/* 80193A34 00190974  98 01 00 08 */	stb r0, 8(r1)
/* 80193A38 00190978  38 C1 00 08 */	addi r6, r1, 8
/* 80193A3C 0019097C  38 A0 00 17 */	li r5, 0x17
/* 80193A40 00190980  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80193A44 00190984  81 83 00 00 */	lwz r12, 0(r3)
/* 80193A48 00190988  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193A4C 0019098C  7D 89 03 A6 */	mtctr r12
/* 80193A50 00190990  4E 80 04 21 */	bctrl 
/* 80193A54 00190994  38 60 00 01 */	li r3, 1
/* 80193A58 00190998  48 00 00 20 */	b .L_80193A78
.L_80193A5C:
/* 80193A5C 0019099C  7F C3 F3 78 */	mr r3, r30
/* 80193A60 001909A0  4B FB 65 81 */	bl doped__Q24Game4PikiFv
/* 80193A64 001909A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193A68 001909A8  41 82 00 0C */	beq .L_80193A74
/* 80193A6C 001909AC  7F C3 F3 78 */	mr r3, r30
/* 80193A70 001909B0  4B FB 63 C1 */	bl extendDopeTime__Q24Game4PikiFv
.L_80193A74:
/* 80193A74 001909B4  38 60 00 00 */	li r3, 0
.L_80193A78:
/* 80193A78 001909B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80193A7C 001909BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80193A80 001909C0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80193A84 001909C4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80193A88 001909C8  7C 08 03 A6 */	mtlr r0
/* 80193A8C 001909CC  38 21 00 20 */	addi r1, r1, 0x20
/* 80193A90 001909D0  4E 80 00 20 */	blr 

.global actPiki__Q24Game12InteractWindFPQ24Game4Piki
actPiki__Q24Game12InteractWindFPQ24Game4Piki:
/* 80193A94 001909D4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80193A98 001909D8  7C 08 02 A6 */	mflr r0
/* 80193A9C 001909DC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80193AA0 001909E0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80193AA4 001909E4  7C 9F 23 78 */	mr r31, r4
/* 80193AA8 001909E8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80193AAC 001909EC  7C 7E 1B 78 */	mr r30, r3
/* 80193AB0 001909F0  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80193AB4 001909F4  81 83 00 00 */	lwz r12, 0(r3)
/* 80193AB8 001909F8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80193ABC 001909FC  7D 89 03 A6 */	mtctr r12
/* 80193AC0 00190A00  4E 80 04 21 */	bctrl 
/* 80193AC4 00190A04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193AC8 00190A08  41 82 00 0C */	beq .L_80193AD4
/* 80193ACC 00190A0C  38 60 00 00 */	li r3, 0
/* 80193AD0 00190A10  48 00 00 AC */	b .L_80193B7C
.L_80193AD4:
/* 80193AD4 00190A14  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80193AD8 00190A18  2C 00 00 03 */	cmpwi r0, 3
/* 80193ADC 00190A1C  40 82 00 0C */	bne .L_80193AE8
/* 80193AE0 00190A20  38 60 00 00 */	li r3, 0
/* 80193AE4 00190A24  48 00 00 98 */	b .L_80193B7C
.L_80193AE8:
/* 80193AE8 00190A28  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80193AEC 00190A2C  80 03 00 04 */	lwz r0, 4(r3)
/* 80193AF0 00190A30  2C 00 00 07 */	cmpwi r0, 7
/* 80193AF4 00190A34  40 82 00 0C */	bne .L_80193B00
/* 80193AF8 00190A38  38 60 00 00 */	li r3, 0
/* 80193AFC 00190A3C  48 00 00 80 */	b .L_80193B7C
.L_80193B00:
/* 80193B00 00190A40  81 83 00 00 */	lwz r12, 0(r3)
/* 80193B04 00190A44  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80193B08 00190A48  7D 89 03 A6 */	mtctr r12
/* 80193B0C 00190A4C  4E 80 04 21 */	bctrl 
/* 80193B10 00190A50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193B14 00190A54  41 82 00 0C */	beq .L_80193B20
/* 80193B18 00190A58  38 60 00 00 */	li r3, 0
/* 80193B1C 00190A5C  48 00 00 60 */	b .L_80193B7C
.L_80193B20:
/* 80193B20 00190A60  80 FE 00 04 */	lwz r7, 4(r30)
/* 80193B24 00190A64  38 60 00 00 */	li r3, 0
/* 80193B28 00190A68  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80193B2C 00190A6C  38 00 00 02 */	li r0, 2
/* 80193B30 00190A70  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80193B34 00190A74  7F E4 FB 78 */	mr r4, r31
/* 80193B38 00190A78  D0 21 00 08 */	stfs f1, 8(r1)
/* 80193B3C 00190A7C  38 C1 00 08 */	addi r6, r1, 8
/* 80193B40 00190A80  38 A0 00 08 */	li r5, 8
/* 80193B44 00190A84  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80193B48 00190A88  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80193B4C 00190A8C  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 80193B50 00190A90  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80193B54 00190A94  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80193B58 00190A98  98 61 00 18 */	stb r3, 0x18(r1)
/* 80193B5C 00190A9C  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 80193B60 00190AA0  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80193B64 00190AA4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80193B68 00190AA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80193B6C 00190AAC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193B70 00190AB0  7D 89 03 A6 */	mtctr r12
/* 80193B74 00190AB4  4E 80 04 21 */	bctrl 
/* 80193B78 00190AB8  38 60 00 01 */	li r3, 1
.L_80193B7C:
/* 80193B7C 00190ABC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80193B80 00190AC0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80193B84 00190AC4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80193B88 00190AC8  7C 08 03 A6 */	mtlr r0
/* 80193B8C 00190ACC  38 21 00 30 */	addi r1, r1, 0x30
/* 80193B90 00190AD0  4E 80 00 20 */	blr 

.global actPiki__Q24Game20InteractHanaChirashiFPQ24Game4Piki
actPiki__Q24Game20InteractHanaChirashiFPQ24Game4Piki:
/* 80193B94 00190AD4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80193B98 00190AD8  7C 08 02 A6 */	mflr r0
/* 80193B9C 00190ADC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80193BA0 00190AE0  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80193BA4 00190AE4  7C 9F 23 78 */	mr r31, r4
/* 80193BA8 00190AE8  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80193BAC 00190AEC  7C 7E 1B 78 */	mr r30, r3
/* 80193BB0 00190AF0  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80193BB4 00190AF4  81 83 00 00 */	lwz r12, 0(r3)
/* 80193BB8 00190AF8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80193BBC 00190AFC  7D 89 03 A6 */	mtctr r12
/* 80193BC0 00190B00  4E 80 04 21 */	bctrl 
/* 80193BC4 00190B04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193BC8 00190B08  41 82 00 0C */	beq .L_80193BD4
/* 80193BCC 00190B0C  38 60 00 00 */	li r3, 0
/* 80193BD0 00190B10  48 00 00 CC */	b .L_80193C9C
.L_80193BD4:
/* 80193BD4 00190B14  88 1F 02 B8 */	lbz r0, 0x2b8(r31)
/* 80193BD8 00190B18  2C 00 00 03 */	cmpwi r0, 3
/* 80193BDC 00190B1C  40 82 00 40 */	bne .L_80193C1C
/* 80193BE0 00190B20  88 1F 02 B9 */	lbz r0, 0x2b9(r31)
/* 80193BE4 00190B24  2C 00 00 01 */	cmpwi r0, 1
/* 80193BE8 00190B28  41 80 00 2C */	blt .L_80193C14
/* 80193BEC 00190B2C  80 9F 02 58 */	lwz r4, 0x258(r31)
/* 80193BF0 00190B30  80 64 00 0C */	lwz r3, 0xc(r4)
/* 80193BF4 00190B34  80 84 00 08 */	lwz r4, 8(r4)
/* 80193BF8 00190B38  48 22 3C F9 */	bl "createSimpleChiru__3efxFR10Vector3<f>l"
/* 80193BFC 00190B3C  7F E3 FB 78 */	mr r3, r31
/* 80193C00 00190B40  38 80 28 46 */	li r4, 0x2846
/* 80193C04 00190B44  38 A0 00 01 */	li r5, 1
/* 80193C08 00190B48  4B FB 4C C5 */	bl startSound__Q24Game4PikiFUlb
/* 80193C0C 00190B4C  38 00 00 00 */	li r0, 0
/* 80193C10 00190B50  98 1F 02 B9 */	stb r0, 0x2b9(r31)
.L_80193C14:
/* 80193C14 00190B54  38 60 00 00 */	li r3, 0
/* 80193C18 00190B58  48 00 00 84 */	b .L_80193C9C
.L_80193C1C:
/* 80193C1C 00190B5C  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80193C20 00190B60  81 83 00 00 */	lwz r12, 0(r3)
/* 80193C24 00190B64  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80193C28 00190B68  7D 89 03 A6 */	mtctr r12
/* 80193C2C 00190B6C  4E 80 04 21 */	bctrl 
/* 80193C30 00190B70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193C34 00190B74  41 82 00 0C */	beq .L_80193C40
/* 80193C38 00190B78  38 60 00 00 */	li r3, 0
/* 80193C3C 00190B7C  48 00 00 60 */	b .L_80193C9C
.L_80193C40:
/* 80193C40 00190B80  80 FE 00 04 */	lwz r7, 4(r30)
/* 80193C44 00190B84  38 60 00 00 */	li r3, 0
/* 80193C48 00190B88  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80193C4C 00190B8C  38 00 00 06 */	li r0, 6
/* 80193C50 00190B90  C0 02 AB 5C */	lfs f0, lbl_80518EBC@sda21(r2)
/* 80193C54 00190B94  7F E4 FB 78 */	mr r4, r31
/* 80193C58 00190B98  D0 21 00 08 */	stfs f1, 8(r1)
/* 80193C5C 00190B9C  38 C1 00 08 */	addi r6, r1, 8
/* 80193C60 00190BA0  38 A0 00 08 */	li r5, 8
/* 80193C64 00190BA4  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80193C68 00190BA8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80193C6C 00190BAC  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 80193C70 00190BB0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80193C74 00190BB4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80193C78 00190BB8  98 61 00 18 */	stb r3, 0x18(r1)
/* 80193C7C 00190BBC  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 80193C80 00190BC0  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80193C84 00190BC4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80193C88 00190BC8  81 83 00 00 */	lwz r12, 0(r3)
/* 80193C8C 00190BCC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193C90 00190BD0  7D 89 03 A6 */	mtctr r12
/* 80193C94 00190BD4  4E 80 04 21 */	bctrl 
/* 80193C98 00190BD8  38 60 00 01 */	li r3, 1
.L_80193C9C:
/* 80193C9C 00190BDC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80193CA0 00190BE0  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80193CA4 00190BE4  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80193CA8 00190BE8  7C 08 03 A6 */	mtlr r0
/* 80193CAC 00190BEC  38 21 00 30 */	addi r1, r1, 0x30
/* 80193CB0 00190BF0  4E 80 00 20 */	blr 

.global actPiki__Q24Game12InteractBombFPQ24Game4Piki
actPiki__Q24Game12InteractBombFPQ24Game4Piki:
/* 80193CB4 00190BF4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80193CB8 00190BF8  7C 08 02 A6 */	mflr r0
/* 80193CBC 00190BFC  90 01 00 34 */	stw r0, 0x34(r1)
/* 80193CC0 00190C00  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80193CC4 00190C04  7C 9F 23 78 */	mr r31, r4
/* 80193CC8 00190C08  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80193CCC 00190C0C  7C 7E 1B 78 */	mr r30, r3
/* 80193CD0 00190C10  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80193CD4 00190C14  81 83 00 00 */	lwz r12, 0(r3)
/* 80193CD8 00190C18  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80193CDC 00190C1C  7D 89 03 A6 */	mtctr r12
/* 80193CE0 00190C20  4E 80 04 21 */	bctrl 
/* 80193CE4 00190C24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193CE8 00190C28  41 82 00 0C */	beq .L_80193CF4
/* 80193CEC 00190C2C  38 60 00 00 */	li r3, 0
/* 80193CF0 00190C30  48 00 01 08 */	b .L_80193DF8
.L_80193CF4:
/* 80193CF4 00190C34  80 6D 93 E8 */	lwz r3, gameSystem__4Game@sda21(r13)
/* 80193CF8 00190C38  88 03 00 3C */	lbz r0, 0x3c(r3)
/* 80193CFC 00190C3C  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 80193D00 00190C40  40 82 00 0C */	bne .L_80193D0C
/* 80193D04 00190C44  38 60 00 00 */	li r3, 0
/* 80193D08 00190C48  48 00 00 F0 */	b .L_80193DF8
.L_80193D0C:
/* 80193D0C 00190C4C  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80193D10 00190C50  81 83 00 00 */	lwz r12, 0(r3)
/* 80193D14 00190C54  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80193D18 00190C58  7D 89 03 A6 */	mtctr r12
/* 80193D1C 00190C5C  4E 80 04 21 */	bctrl 
/* 80193D20 00190C60  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193D24 00190C64  41 82 00 0C */	beq .L_80193D30
/* 80193D28 00190C68  38 60 00 00 */	li r3, 0
/* 80193D2C 00190C6C  48 00 00 CC */	b .L_80193DF8
.L_80193D30:
/* 80193D30 00190C70  80 7E 00 04 */	lwz r3, 4(r30)
/* 80193D34 00190C74  81 83 00 00 */	lwz r12, 0(r3)
/* 80193D38 00190C78  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80193D3C 00190C7C  7D 89 03 A6 */	mtctr r12
/* 80193D40 00190C80  4E 80 04 21 */	bctrl 
/* 80193D44 00190C84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193D48 00190C88  41 82 00 28 */	beq .L_80193D70
/* 80193D4C 00190C8C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80193D50 00190C90  81 83 00 00 */	lwz r12, 0(r3)
/* 80193D54 00190C94  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80193D58 00190C98  7D 89 03 A6 */	mtctr r12
/* 80193D5C 00190C9C  4E 80 04 21 */	bctrl 
/* 80193D60 00190CA0  7C 64 1B 78 */	mr r4, r3
/* 80193D64 00190CA4  7F E3 FB 78 */	mr r3, r31
/* 80193D68 00190CA8  4B FB 6D 55 */	bl setTekiKillID__Q24Game4PikiFi
/* 80193D6C 00190CAC  48 00 00 0C */	b .L_80193D78
.L_80193D70:
/* 80193D70 00190CB0  38 00 FF FF */	li r0, -1
/* 80193D74 00190CB4  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
.L_80193D78:
/* 80193D78 00190CB8  80 BE 00 04 */	lwz r5, 4(r30)
/* 80193D7C 00190CBC  38 80 00 01 */	li r4, 1
/* 80193D80 00190CC0  C0 3E 00 0C */	lfs f1, 0xc(r30)
/* 80193D84 00190CC4  38 00 00 02 */	li r0, 2
/* 80193D88 00190CC8  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80193D8C 00190CCC  7F E3 FB 78 */	mr r3, r31
/* 80193D90 00190CD0  D0 21 00 08 */	stfs f1, 8(r1)
/* 80193D94 00190CD4  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80193D98 00190CD8  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 80193D9C 00190CDC  C0 3E 00 14 */	lfs f1, 0x14(r30)
/* 80193DA0 00190CE0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80193DA4 00190CE4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80193DA8 00190CE8  98 81 00 18 */	stb r4, 0x18(r1)
/* 80193DAC 00190CEC  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 80193DB0 00190CF0  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80193DB4 00190CF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193DB8 00190CF8  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80193DBC 00190CFC  7D 89 03 A6 */	mtctr r12
/* 80193DC0 00190D00  4E 80 04 21 */	bctrl 
/* 80193DC4 00190D04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193DC8 00190D08  40 82 00 0C */	bne .L_80193DD4
/* 80193DCC 00190D0C  38 00 00 00 */	li r0, 0
/* 80193DD0 00190D10  98 01 00 18 */	stb r0, 0x18(r1)
.L_80193DD4:
/* 80193DD4 00190D14  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80193DD8 00190D18  7F E4 FB 78 */	mr r4, r31
/* 80193DDC 00190D1C  38 C1 00 08 */	addi r6, r1, 8
/* 80193DE0 00190D20  38 A0 00 08 */	li r5, 8
/* 80193DE4 00190D24  81 83 00 00 */	lwz r12, 0(r3)
/* 80193DE8 00190D28  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193DEC 00190D2C  7D 89 03 A6 */	mtctr r12
/* 80193DF0 00190D30  4E 80 04 21 */	bctrl 
/* 80193DF4 00190D34  38 60 00 01 */	li r3, 1
.L_80193DF8:
/* 80193DF8 00190D38  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80193DFC 00190D3C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80193E00 00190D40  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80193E04 00190D44  7C 08 03 A6 */	mtlr r0
/* 80193E08 00190D48  38 21 00 30 */	addi r1, r1, 0x30
/* 80193E0C 00190D4C  4E 80 00 20 */	blr 

.global actPiki__Q24Game13InteractDenkiFPQ24Game4Piki
actPiki__Q24Game13InteractDenkiFPQ24Game4Piki:
/* 80193E10 00190D50  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80193E14 00190D54  7C 08 02 A6 */	mflr r0
/* 80193E18 00190D58  90 01 00 24 */	stw r0, 0x24(r1)
/* 80193E1C 00190D5C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80193E20 00190D60  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80193E24 00190D64  7C 9E 23 78 */	mr r30, r4
/* 80193E28 00190D68  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80193E2C 00190D6C  7C 7D 1B 78 */	mr r29, r3
/* 80193E30 00190D70  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80193E34 00190D74  81 83 00 00 */	lwz r12, 0(r3)
/* 80193E38 00190D78  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80193E3C 00190D7C  7D 89 03 A6 */	mtctr r12
/* 80193E40 00190D80  4E 80 04 21 */	bctrl 
/* 80193E44 00190D84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193E48 00190D88  41 82 00 0C */	beq .L_80193E54
/* 80193E4C 00190D8C  38 60 00 00 */	li r3, 0
/* 80193E50 00190D90  48 00 00 B8 */	b .L_80193F08
.L_80193E54:
/* 80193E54 00190D94  80 7D 00 04 */	lwz r3, 4(r29)
/* 80193E58 00190D98  83 FE 02 90 */	lwz r31, 0x290(r30)
/* 80193E5C 00190D9C  81 83 00 00 */	lwz r12, 0(r3)
/* 80193E60 00190DA0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80193E64 00190DA4  7D 89 03 A6 */	mtctr r12
/* 80193E68 00190DA8  4E 80 04 21 */	bctrl 
/* 80193E6C 00190DAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193E70 00190DB0  41 82 00 28 */	beq .L_80193E98
/* 80193E74 00190DB4  80 7D 00 04 */	lwz r3, 4(r29)
/* 80193E78 00190DB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80193E7C 00190DBC  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80193E80 00190DC0  7D 89 03 A6 */	mtctr r12
/* 80193E84 00190DC4  4E 80 04 21 */	bctrl 
/* 80193E88 00190DC8  7C 64 1B 78 */	mr r4, r3
/* 80193E8C 00190DCC  7F C3 F3 78 */	mr r3, r30
/* 80193E90 00190DD0  4B FB 6C 2D */	bl setTekiKillID__Q24Game4PikiFi
/* 80193E94 00190DD4  48 00 00 0C */	b .L_80193EA0
.L_80193E98:
/* 80193E98 00190DD8  38 00 FF FF */	li r0, -1
/* 80193E9C 00190DDC  B0 1E 02 A4 */	sth r0, 0x2a4(r30)
.L_80193EA0:
/* 80193EA0 00190DE0  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 80193EA4 00190DE4  2C 00 00 02 */	cmpwi r0, 2
/* 80193EA8 00190DE8  41 82 00 5C */	beq .L_80193F04
/* 80193EAC 00190DEC  2C 00 00 05 */	cmpwi r0, 5
/* 80193EB0 00190DF0  41 82 00 54 */	beq .L_80193F04
/* 80193EB4 00190DF4  28 1F 00 00 */	cmplwi r31, 0
/* 80193EB8 00190DF8  41 82 00 4C */	beq .L_80193F04
/* 80193EBC 00190DFC  7F E3 FB 78 */	mr r3, r31
/* 80193EC0 00190E00  38 80 00 16 */	li r4, 0x16
/* 80193EC4 00190E04  81 9F 00 00 */	lwz r12, 0(r31)
/* 80193EC8 00190E08  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80193ECC 00190E0C  7D 89 03 A6 */	mtctr r12
/* 80193ED0 00190E10  4E 80 04 21 */	bctrl 
/* 80193ED4 00190E14  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193ED8 00190E18  41 82 00 2C */	beq .L_80193F04
/* 80193EDC 00190E1C  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80193EE0 00190E20  7F C4 F3 78 */	mr r4, r30
/* 80193EE4 00190E24  38 A0 00 16 */	li r5, 0x16
/* 80193EE8 00190E28  38 C0 00 00 */	li r6, 0
/* 80193EEC 00190E2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80193EF0 00190E30  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193EF4 00190E34  7D 89 03 A6 */	mtctr r12
/* 80193EF8 00190E38  4E 80 04 21 */	bctrl 
/* 80193EFC 00190E3C  38 60 00 01 */	li r3, 1
/* 80193F00 00190E40  48 00 00 08 */	b .L_80193F08
.L_80193F04:
/* 80193F04 00190E44  38 60 00 00 */	li r3, 0
.L_80193F08:
/* 80193F08 00190E48  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80193F0C 00190E4C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80193F10 00190E50  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80193F14 00190E54  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80193F18 00190E58  7C 08 03 A6 */	mtlr r0
/* 80193F1C 00190E5C  38 21 00 20 */	addi r1, r1, 0x20
/* 80193F20 00190E60  4E 80 00 20 */	blr 

.global actPiki__Q24Game16InteractFallMeckFPQ24Game4Piki
actPiki__Q24Game16InteractFallMeckFPQ24Game4Piki:
/* 80193F24 00190E64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80193F28 00190E68  7C 08 02 A6 */	mflr r0
/* 80193F2C 00190E6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80193F30 00190E70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80193F34 00190E74  7C 9F 23 78 */	mr r31, r4
/* 80193F38 00190E78  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80193F3C 00190E7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80193F40 00190E80  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80193F44 00190E84  7D 89 03 A6 */	mtctr r12
/* 80193F48 00190E88  4E 80 04 21 */	bctrl 
/* 80193F4C 00190E8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193F50 00190E90  41 82 00 0C */	beq .L_80193F5C
/* 80193F54 00190E94  38 60 00 00 */	li r3, 0
/* 80193F58 00190E98  48 00 00 58 */	b .L_80193FB0
.L_80193F5C:
/* 80193F5C 00190E9C  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80193F60 00190EA0  28 03 00 00 */	cmplwi r3, 0
/* 80193F64 00190EA4  41 82 00 48 */	beq .L_80193FAC
/* 80193F68 00190EA8  81 83 00 00 */	lwz r12, 0(r3)
/* 80193F6C 00190EAC  38 80 00 17 */	li r4, 0x17
/* 80193F70 00190EB0  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80193F74 00190EB4  7D 89 03 A6 */	mtctr r12
/* 80193F78 00190EB8  4E 80 04 21 */	bctrl 
/* 80193F7C 00190EBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193F80 00190EC0  41 82 00 2C */	beq .L_80193FAC
/* 80193F84 00190EC4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80193F88 00190EC8  7F E4 FB 78 */	mr r4, r31
/* 80193F8C 00190ECC  38 A0 00 17 */	li r5, 0x17
/* 80193F90 00190ED0  38 C0 00 00 */	li r6, 0
/* 80193F94 00190ED4  81 83 00 00 */	lwz r12, 0(r3)
/* 80193F98 00190ED8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80193F9C 00190EDC  7D 89 03 A6 */	mtctr r12
/* 80193FA0 00190EE0  4E 80 04 21 */	bctrl 
/* 80193FA4 00190EE4  38 60 00 01 */	li r3, 1
/* 80193FA8 00190EE8  48 00 00 08 */	b .L_80193FB0
.L_80193FAC:
/* 80193FAC 00190EEC  38 60 00 00 */	li r3, 0
.L_80193FB0:
/* 80193FB0 00190EF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80193FB4 00190EF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80193FB8 00190EF8  7C 08 03 A6 */	mtlr r0
/* 80193FBC 00190EFC  38 21 00 10 */	addi r1, r1, 0x10
/* 80193FC0 00190F00  4E 80 00 20 */	blr 

.global actPiki__Q24Game12InteractBuryFPQ24Game4Piki
actPiki__Q24Game12InteractBuryFPQ24Game4Piki:
/* 80193FC4 00190F04  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 80193FC8 00190F08  7C 08 02 A6 */	mflr r0
/* 80193FCC 00190F0C  90 01 00 94 */	stw r0, 0x94(r1)
/* 80193FD0 00190F10  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 80193FD4 00190F14  7C 9F 23 78 */	mr r31, r4
/* 80193FD8 00190F18  93 C1 00 88 */	stw r30, 0x88(r1)
/* 80193FDC 00190F1C  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80193FE0 00190F20  81 83 00 00 */	lwz r12, 0(r3)
/* 80193FE4 00190F24  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80193FE8 00190F28  7D 89 03 A6 */	mtctr r12
/* 80193FEC 00190F2C  4E 80 04 21 */	bctrl 
/* 80193FF0 00190F30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80193FF4 00190F34  41 82 00 0C */	beq .L_80194000
/* 80193FF8 00190F38  38 60 00 00 */	li r3, 0
/* 80193FFC 00190F3C  48 00 02 38 */	b .L_80194234
.L_80194000:
/* 80194000 00190F40  3C 60 80 51 */	lis r3, mePikis__Q24Game8GameStat@ha
/* 80194004 00190F44  85 83 26 0C */	lwzu r12, mePikis__Q24Game8GameStat@l(r3)
/* 80194008 00190F48  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019400C 00190F4C  7D 89 03 A6 */	mtctr r12
/* 80194010 00190F50  4E 80 04 21 */	bctrl 
/* 80194014 00190F54  2C 03 00 63 */	cmpwi r3, 0x63
/* 80194018 00190F58  41 80 00 0C */	blt .L_80194024
/* 8019401C 00190F5C  38 60 00 00 */	li r3, 0
/* 80194020 00190F60  48 00 02 14 */	b .L_80194234
.L_80194024:
/* 80194024 00190F64  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80194028 00190F68  28 03 00 00 */	cmplwi r3, 0
/* 8019402C 00190F6C  40 82 00 8C */	bne .L_801940B8
/* 80194030 00190F70  C0 22 AB 54 */	lfs f1, lbl_80518EB4@sda21(r2)
/* 80194034 00190F74  38 A0 00 00 */	li r5, 0
/* 80194038 00190F78  C0 62 AB 50 */	lfs f3, lbl_80518EB0@sda21(r2)
/* 8019403C 00190F7C  38 00 00 01 */	li r0, 1
/* 80194040 00190F80  C0 42 AB 60 */	lfs f2, lbl_80518EC0@sda21(r2)
/* 80194044 00190F84  7F E4 FB 78 */	mr r4, r31
/* 80194048 00190F88  C0 02 AB 5C */	lfs f0, lbl_80518EBC@sda21(r2)
/* 8019404C 00190F8C  38 61 00 1C */	addi r3, r1, 0x1c
/* 80194050 00190F90  90 A1 00 68 */	stw r5, 0x68(r1)
/* 80194054 00190F94  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 80194058 00190F98  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 8019405C 00190F9C  90 A1 00 64 */	stw r5, 0x64(r1)
/* 80194060 00190FA0  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 80194064 00190FA4  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 80194068 00190FA8  D0 21 00 7C */	stfs f1, 0x7c(r1)
/* 8019406C 00190FAC  98 01 00 60 */	stb r0, 0x60(r1)
/* 80194070 00190FB0  98 A1 00 61 */	stb r5, 0x61(r1)
/* 80194074 00190FB4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80194078 00190FB8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8019407C 00190FBC  7D 89 03 A6 */	mtctr r12
/* 80194080 00190FC0  4E 80 04 21 */	bctrl 
/* 80194084 00190FC4  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80194088 00190FC8  38 81 00 54 */	addi r4, r1, 0x54
/* 8019408C 00190FCC  C0 21 00 20 */	lfs f1, 0x20(r1)
/* 80194090 00190FD0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 80194094 00190FD4  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 80194098 00190FD8  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 8019409C 00190FDC  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 801940A0 00190FE0  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 801940A4 00190FE4  81 83 00 04 */	lwz r12, 4(r3)
/* 801940A8 00190FE8  81 8C 00 2C */	lwz r12, 0x2c(r12)
/* 801940AC 00190FEC  7D 89 03 A6 */	mtctr r12
/* 801940B0 00190FF0  4E 80 04 21 */	bctrl 
/* 801940B4 00190FF4  80 61 00 68 */	lwz r3, 0x68(r1)
.L_801940B8:
/* 801940B8 00190FF8  28 03 00 00 */	cmplwi r3, 0
/* 801940BC 00190FFC  41 82 01 54 */	beq .L_80194210
/* 801940C0 00191000  38 63 00 5C */	addi r3, r3, 0x5c
/* 801940C4 00191004  48 28 83 89 */	bl isBald__Q27MapCode4CodeFv
/* 801940C8 00191008  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801940CC 0019100C  40 82 01 44 */	bne .L_80194210
/* 801940D0 00191010  7F E3 FB 78 */	mr r3, r31
/* 801940D4 00191014  4B FB 4C B1 */	bl might_bury__Q24Game4PikiFv
/* 801940D8 00191018  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801940DC 0019101C  41 82 01 34 */	beq .L_80194210
/* 801940E0 00191020  80 6D 94 70 */	lwz r3, mgr__Q24Game12ItemPikihead@sda21(r13)
/* 801940E4 00191024  28 03 00 00 */	cmplwi r3, 0
/* 801940E8 00191028  41 82 01 28 */	beq .L_80194210
/* 801940EC 0019102C  38 00 00 01 */	li r0, 1
/* 801940F0 00191030  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 801940F4 00191034  81 83 00 00 */	lwz r12, 0(r3)
/* 801940F8 00191038  81 8C 00 A4 */	lwz r12, 0xa4(r12)
/* 801940FC 0019103C  7D 89 03 A6 */	mtctr r12
/* 80194100 00191040  4E 80 04 21 */	bctrl 
/* 80194104 00191044  38 00 00 00 */	li r0, 0
/* 80194108 00191048  7C 7E 1B 78 */	mr r30, r3
/* 8019410C 0019104C  90 0D 92 F8 */	stw r0, mBirthMode__Q24Game7PikiMgr@sda21(r13)
/* 80194110 00191050  7F E4 FB 78 */	mr r4, r31
/* 80194114 00191054  38 61 00 10 */	addi r3, r1, 0x10
/* 80194118 00191058  81 9F 00 00 */	lwz r12, 0(r31)
/* 8019411C 0019105C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194120 00191060  7D 89 03 A6 */	mtctr r12
/* 80194124 00191064  4E 80 04 21 */	bctrl 
/* 80194128 00191068  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8019412C 0019106C  38 81 00 28 */	addi r4, r1, 0x28
/* 80194130 00191070  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 80194134 00191074  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80194138 00191078  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 8019413C 0019107C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 80194140 00191080  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80194144 00191084  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80194148 00191088  81 83 00 04 */	lwz r12, 4(r3)
/* 8019414C 0019108C  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 80194150 00191090  7D 89 03 A6 */	mtctr r12
/* 80194154 00191094  4E 80 04 21 */	bctrl 
/* 80194158 00191098  28 1E 00 00 */	cmplwi r30, 0
/* 8019415C 0019109C  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 80194160 001910A0  41 82 00 B0 */	beq .L_80194210
/* 80194164 001910A4  38 61 00 28 */	addi r3, r1, 0x28
/* 80194168 001910A8  48 22 36 45 */	bl "createSimplePkAp__3efxFR10Vector3<f>"
/* 8019416C 001910AC  89 1F 02 B8 */	lbz r8, 0x2b8(r31)
/* 80194170 001910B0  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureInitArg@ha
/* 80194174 001910B4  38 03 A2 F4 */	addi r0, r3, __vt__Q24Game15CreatureInitArg@l
/* 80194178 001910B8  3C 80 80 4B */	lis r4, __vt__Q24Game11ItemInitArg@ha
/* 8019417C 001910BC  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 80194180 001910C0  C4 63 41 E4 */	lfsu f3, "zero__10Vector3<f>"@l(r3)
/* 80194184 001910C4  90 01 00 34 */	stw r0, 0x34(r1)
/* 80194188 001910C8  38 E4 2C 7C */	addi r7, r4, __vt__Q24Game11ItemInitArg@l
/* 8019418C 001910CC  3C 80 80 4B */	lis r4, __vt__Q34Game12ItemPikihead7InitArg@ha
/* 80194190 001910D0  C0 43 00 04 */	lfs f2, 4(r3)
/* 80194194 001910D4  C0 23 00 08 */	lfs f1, 8(r3)
/* 80194198 001910D8  38 A0 00 01 */	li r5, 1
/* 8019419C 001910DC  C0 02 AB 64 */	lfs f0, lbl_80518EC4@sda21(r2)
/* 801941A0 001910E0  38 00 00 02 */	li r0, 2
/* 801941A4 001910E4  38 C4 2C 70 */	addi r6, r4, __vt__Q34Game12ItemPikihead7InitArg@l
/* 801941A8 001910E8  90 E1 00 34 */	stw r7, 0x34(r1)
/* 801941AC 001910EC  7F C3 F3 78 */	mr r3, r30
/* 801941B0 001910F0  38 81 00 34 */	addi r4, r1, 0x34
/* 801941B4 001910F4  90 C1 00 34 */	stw r6, 0x34(r1)
/* 801941B8 001910F8  91 01 00 38 */	stw r8, 0x38(r1)
/* 801941BC 001910FC  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 801941C0 00191100  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 801941C4 00191104  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 801941C8 00191108  98 A1 00 48 */	stb r5, 0x48(r1)
/* 801941CC 0019110C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 801941D0 00191110  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 801941D4 00191114  4B FA 6D F5 */	bl init__Q24Game8CreatureFPQ24Game15CreatureInitArg
/* 801941D8 00191118  7F C3 F3 78 */	mr r3, r30
/* 801941DC 0019111C  38 81 00 28 */	addi r4, r1, 0x28
/* 801941E0 00191120  38 A0 00 00 */	li r5, 0
/* 801941E4 00191124  4B FA 6F C5 */	bl "setPosition__Q24Game8CreatureFR10Vector3<f>b"
/* 801941E8 00191128  3C 60 80 4B */	lis r3, __vt__Q24Game15CreatureKillArg@ha
/* 801941EC 0019112C  38 00 00 01 */	li r0, 1
/* 801941F0 00191130  38 A3 A2 D0 */	addi r5, r3, __vt__Q24Game15CreatureKillArg@l
/* 801941F4 00191134  90 01 00 0C */	stw r0, 0xc(r1)
/* 801941F8 00191138  7F E3 FB 78 */	mr r3, r31
/* 801941FC 0019113C  38 81 00 08 */	addi r4, r1, 8
/* 80194200 00191140  90 A1 00 08 */	stw r5, 8(r1)
/* 80194204 00191144  4B FA 6E ED */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 80194208 00191148  38 60 00 01 */	li r3, 1
/* 8019420C 0019114C  48 00 00 28 */	b .L_80194234
.L_80194210:
/* 80194210 00191150  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80194214 00191154  7F E4 FB 78 */	mr r4, r31
/* 80194218 00191158  38 A0 00 00 */	li r5, 0
/* 8019421C 0019115C  38 C0 00 00 */	li r6, 0
/* 80194220 00191160  81 83 00 00 */	lwz r12, 0(r3)
/* 80194224 00191164  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80194228 00191168  7D 89 03 A6 */	mtctr r12
/* 8019422C 0019116C  4E 80 04 21 */	bctrl 
/* 80194230 00191170  38 60 00 00 */	li r3, 0
.L_80194234:
/* 80194234 00191174  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80194238 00191178  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8019423C 0019117C  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 80194240 00191180  7C 08 03 A6 */	mtlr r0
/* 80194244 00191184  38 21 00 90 */	addi r1, r1, 0x90
/* 80194248 00191188  4E 80 00 20 */	blr 

.global actPiki__Q24Game20InteractSuikomi_TestFPQ24Game4Piki
actPiki__Q24Game20InteractSuikomi_TestFPQ24Game4Piki:
/* 8019424C 0019118C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80194250 00191190  7C 08 02 A6 */	mflr r0
/* 80194254 00191194  90 01 00 24 */	stw r0, 0x24(r1)
/* 80194258 00191198  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8019425C 0019119C  7C 9F 23 78 */	mr r31, r4
/* 80194260 001911A0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80194264 001911A4  7C 7E 1B 78 */	mr r30, r3
/* 80194268 001911A8  80 64 02 90 */	lwz r3, 0x290(r4)
/* 8019426C 001911AC  81 83 00 00 */	lwz r12, 0(r3)
/* 80194270 001911B0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80194274 001911B4  7D 89 03 A6 */	mtctr r12
/* 80194278 001911B8  4E 80 04 21 */	bctrl 
/* 8019427C 001911BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194280 001911C0  41 82 00 0C */	beq .L_8019428C
/* 80194284 001911C4  38 60 00 00 */	li r3, 0
/* 80194288 001911C8  48 00 00 88 */	b .L_80194310
.L_8019428C:
/* 8019428C 001911CC  80 7E 00 04 */	lwz r3, 4(r30)
/* 80194290 001911D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80194294 001911D4  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80194298 001911D8  7D 89 03 A6 */	mtctr r12
/* 8019429C 001911DC  4E 80 04 21 */	bctrl 
/* 801942A0 001911E0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801942A4 001911E4  41 82 00 28 */	beq .L_801942CC
/* 801942A8 001911E8  80 7E 00 04 */	lwz r3, 4(r30)
/* 801942AC 001911EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801942B0 001911F0  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 801942B4 001911F4  7D 89 03 A6 */	mtctr r12
/* 801942B8 001911F8  4E 80 04 21 */	bctrl 
/* 801942BC 001911FC  7C 64 1B 78 */	mr r4, r3
/* 801942C0 00191200  7F E3 FB 78 */	mr r3, r31
/* 801942C4 00191204  4B FB 67 F9 */	bl setTekiKillID__Q24Game4PikiFi
/* 801942C8 00191208  48 00 00 0C */	b .L_801942D4
.L_801942CC:
/* 801942CC 0019120C  38 00 FF FF */	li r0, -1
/* 801942D0 00191210  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
.L_801942D4:
/* 801942D4 00191214  80 FE 00 18 */	lwz r7, 0x18(r30)
/* 801942D8 00191218  7F E4 FB 78 */	mr r4, r31
/* 801942DC 0019121C  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 801942E0 00191220  38 C1 00 08 */	addi r6, r1, 8
/* 801942E4 00191224  80 1E 00 04 */	lwz r0, 4(r30)
/* 801942E8 00191228  38 A0 00 1A */	li r5, 0x1a
/* 801942EC 0019122C  90 01 00 08 */	stw r0, 8(r1)
/* 801942F0 00191230  90 61 00 0C */	stw r3, 0xc(r1)
/* 801942F4 00191234  90 E1 00 10 */	stw r7, 0x10(r1)
/* 801942F8 00191238  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 801942FC 0019123C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194300 00191240  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80194304 00191244  7D 89 03 A6 */	mtctr r12
/* 80194308 00191248  4E 80 04 21 */	bctrl 
/* 8019430C 0019124C  38 60 00 01 */	li r3, 1
.L_80194310:
/* 80194310 00191250  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80194314 00191254  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80194318 00191258  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8019431C 0019125C  7C 08 03 A6 */	mtlr r0
/* 80194320 00191260  38 21 00 20 */	addi r1, r1, 0x20
/* 80194324 00191264  4E 80 00 20 */	blr 

.global actPiki__Q24Game12InteractFireFPQ24Game4Piki
actPiki__Q24Game12InteractFireFPQ24Game4Piki:
/* 80194328 00191268  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019432C 0019126C  7C 08 02 A6 */	mflr r0
/* 80194330 00191270  90 01 00 24 */	stw r0, 0x24(r1)
/* 80194334 00191274  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80194338 00191278  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019433C 0019127C  7C 9E 23 78 */	mr r30, r4
/* 80194340 00191280  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80194344 00191284  7C 7D 1B 78 */	mr r29, r3
/* 80194348 00191288  80 64 02 90 */	lwz r3, 0x290(r4)
/* 8019434C 0019128C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194350 00191290  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80194354 00191294  7D 89 03 A6 */	mtctr r12
/* 80194358 00191298  4E 80 04 21 */	bctrl 
/* 8019435C 0019129C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194360 001912A0  41 82 00 0C */	beq .L_8019436C
/* 80194364 001912A4  38 60 00 00 */	li r3, 0
/* 80194368 001912A8  48 00 00 BC */	b .L_80194424
.L_8019436C:
/* 8019436C 001912AC  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 80194370 001912B0  8B FE 02 B8 */	lbz r31, 0x2b8(r30)
/* 80194374 001912B4  28 03 00 00 */	cmplwi r3, 0
/* 80194378 001912B8  41 82 00 A8 */	beq .L_80194420
/* 8019437C 001912BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80194380 001912C0  38 80 00 15 */	li r4, 0x15
/* 80194384 001912C4  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80194388 001912C8  7D 89 03 A6 */	mtctr r12
/* 8019438C 001912CC  4E 80 04 21 */	bctrl 
/* 80194390 001912D0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194394 001912D4  41 82 00 8C */	beq .L_80194420
/* 80194398 001912D8  2C 1F 00 01 */	cmpwi r31, 1
/* 8019439C 001912DC  41 82 00 84 */	beq .L_80194420
/* 801943A0 001912E0  2C 1F 00 05 */	cmpwi r31, 5
/* 801943A4 001912E4  41 82 00 7C */	beq .L_80194420
/* 801943A8 001912E8  80 7D 00 04 */	lwz r3, 4(r29)
/* 801943AC 001912EC  81 83 00 00 */	lwz r12, 0(r3)
/* 801943B0 001912F0  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801943B4 001912F4  7D 89 03 A6 */	mtctr r12
/* 801943B8 001912F8  4E 80 04 21 */	bctrl 
/* 801943BC 001912FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801943C0 00191300  41 82 00 28 */	beq .L_801943E8
/* 801943C4 00191304  80 7D 00 04 */	lwz r3, 4(r29)
/* 801943C8 00191308  81 83 00 00 */	lwz r12, 0(r3)
/* 801943CC 0019130C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 801943D0 00191310  7D 89 03 A6 */	mtctr r12
/* 801943D4 00191314  4E 80 04 21 */	bctrl 
/* 801943D8 00191318  7C 64 1B 78 */	mr r4, r3
/* 801943DC 0019131C  7F C3 F3 78 */	mr r3, r30
/* 801943E0 00191320  4B FB 66 DD */	bl setTekiKillID__Q24Game4PikiFi
/* 801943E4 00191324  48 00 00 0C */	b .L_801943F0
.L_801943E8:
/* 801943E8 00191328  38 00 FF FF */	li r0, -1
/* 801943EC 0019132C  B0 1E 02 A4 */	sth r0, 0x2a4(r30)
.L_801943F0:
/* 801943F0 00191330  38 00 00 00 */	li r0, 0
/* 801943F4 00191334  7F C4 F3 78 */	mr r4, r30
/* 801943F8 00191338  B0 01 00 08 */	sth r0, 8(r1)
/* 801943FC 0019133C  38 C1 00 08 */	addi r6, r1, 8
/* 80194400 00191340  38 A0 00 15 */	li r5, 0x15
/* 80194404 00191344  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80194408 00191348  81 83 00 00 */	lwz r12, 0(r3)
/* 8019440C 0019134C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80194410 00191350  7D 89 03 A6 */	mtctr r12
/* 80194414 00191354  4E 80 04 21 */	bctrl 
/* 80194418 00191358  38 60 00 01 */	li r3, 1
/* 8019441C 0019135C  48 00 00 08 */	b .L_80194424
.L_80194420:
/* 80194420 00191360  38 60 00 00 */	li r3, 0
.L_80194424:
/* 80194424 00191364  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80194428 00191368  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019442C 0019136C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80194430 00191370  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80194434 00191374  7C 08 03 A6 */	mtlr r0
/* 80194438 00191378  38 21 00 20 */	addi r1, r1, 0x20
/* 8019443C 0019137C  4E 80 00 20 */	blr 

.global actPiki__Q24Game16InteractAstonishFPQ24Game4Piki
actPiki__Q24Game16InteractAstonishFPQ24Game4Piki:
/* 80194440 00191380  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80194444 00191384  7C 08 02 A6 */	mflr r0
/* 80194448 00191388  90 01 00 24 */	stw r0, 0x24(r1)
/* 8019444C 0019138C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80194450 00191390  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80194454 00191394  7C 9E 23 78 */	mr r30, r4
/* 80194458 00191398  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8019445C 0019139C  7C 7D 1B 78 */	mr r29, r3
/* 80194460 001913A0  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80194464 001913A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80194468 001913A8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 8019446C 001913AC  7D 89 03 A6 */	mtctr r12
/* 80194470 001913B0  4E 80 04 21 */	bctrl 
/* 80194474 001913B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194478 001913B8  41 82 00 0C */	beq .L_80194484
/* 8019447C 001913BC  38 60 00 00 */	li r3, 0
/* 80194480 001913C0  48 00 00 D8 */	b .L_80194558
.L_80194484:
/* 80194484 001913C4  83 FE 02 90 */	lwz r31, 0x290(r30)
/* 80194488 001913C8  28 1F 00 00 */	cmplwi r31, 0
/* 8019448C 001913CC  41 82 00 B0 */	beq .L_8019453C
/* 80194490 001913D0  7F E3 FB 78 */	mr r3, r31
/* 80194494 001913D4  38 80 00 15 */	li r4, 0x15
/* 80194498 001913D8  81 9F 00 00 */	lwz r12, 0(r31)
/* 8019449C 001913DC  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801944A0 001913E0  7D 89 03 A6 */	mtctr r12
/* 801944A4 001913E4  4E 80 04 21 */	bctrl 
/* 801944A8 001913E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801944AC 001913EC  41 82 00 90 */	beq .L_8019453C
/* 801944B0 001913F0  88 1E 02 B8 */	lbz r0, 0x2b8(r30)
/* 801944B4 001913F4  2C 00 00 03 */	cmpwi r0, 3
/* 801944B8 001913F8  41 82 00 84 */	beq .L_8019453C
/* 801944BC 001913FC  38 00 00 03 */	li r0, 3
/* 801944C0 00191400  B0 01 00 08 */	sth r0, 8(r1)
/* 801944C4 00191404  80 7D 00 04 */	lwz r3, 4(r29)
/* 801944C8 00191408  28 03 00 00 */	cmplwi r3, 0
/* 801944CC 0019140C  41 82 00 40 */	beq .L_8019450C
/* 801944D0 00191410  81 83 00 00 */	lwz r12, 0(r3)
/* 801944D4 00191414  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 801944D8 00191418  7D 89 03 A6 */	mtctr r12
/* 801944DC 0019141C  4E 80 04 21 */	bctrl 
/* 801944E0 00191420  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801944E4 00191424  41 82 00 28 */	beq .L_8019450C
/* 801944E8 00191428  80 7D 00 04 */	lwz r3, 4(r29)
/* 801944EC 0019142C  81 83 00 00 */	lwz r12, 0(r3)
/* 801944F0 00191430  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 801944F4 00191434  7D 89 03 A6 */	mtctr r12
/* 801944F8 00191438  4E 80 04 21 */	bctrl 
/* 801944FC 0019143C  7C 64 1B 78 */	mr r4, r3
/* 80194500 00191440  7F C3 F3 78 */	mr r3, r30
/* 80194504 00191444  4B FB 65 B9 */	bl setTekiKillID__Q24Game4PikiFi
/* 80194508 00191448  48 00 00 0C */	b .L_80194514
.L_8019450C:
/* 8019450C 0019144C  38 00 FF FF */	li r0, -1
/* 80194510 00191450  B0 1E 02 A4 */	sth r0, 0x2a4(r30)
.L_80194514:
/* 80194514 00191454  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80194518 00191458  7F C4 F3 78 */	mr r4, r30
/* 8019451C 0019145C  38 C1 00 08 */	addi r6, r1, 8
/* 80194520 00191460  38 A0 00 15 */	li r5, 0x15
/* 80194524 00191464  81 83 00 00 */	lwz r12, 0(r3)
/* 80194528 00191468  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8019452C 0019146C  7D 89 03 A6 */	mtctr r12
/* 80194530 00191470  4E 80 04 21 */	bctrl 
/* 80194534 00191474  38 60 00 01 */	li r3, 1
/* 80194538 00191478  48 00 00 20 */	b .L_80194558
.L_8019453C:
/* 8019453C 0019147C  7F E3 FB 78 */	mr r3, r31
/* 80194540 00191480  38 80 00 15 */	li r4, 0x15
/* 80194544 00191484  81 9F 00 00 */	lwz r12, 0(r31)
/* 80194548 00191488  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 8019454C 0019148C  7D 89 03 A6 */	mtctr r12
/* 80194550 00191490  4E 80 04 21 */	bctrl 
/* 80194554 00191494  38 60 00 00 */	li r3, 0
.L_80194558:
/* 80194558 00191498  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8019455C 0019149C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80194560 001914A0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80194564 001914A4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80194568 001914A8  7C 08 03 A6 */	mtlr r0
/* 8019456C 001914AC  38 21 00 20 */	addi r1, r1, 0x20
/* 80194570 001914B0  4E 80 00 20 */	blr 

.global actPiki__Q24Game14InteractBubbleFPQ24Game4Piki
actPiki__Q24Game14InteractBubbleFPQ24Game4Piki:
/* 80194574 001914B4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80194578 001914B8  7C 08 02 A6 */	mflr r0
/* 8019457C 001914BC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80194580 001914C0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80194584 001914C4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80194588 001914C8  7C 9E 23 78 */	mr r30, r4
/* 8019458C 001914CC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80194590 001914D0  7C 7D 1B 78 */	mr r29, r3
/* 80194594 001914D4  80 64 02 90 */	lwz r3, 0x290(r4)
/* 80194598 001914D8  81 83 00 00 */	lwz r12, 0(r3)
/* 8019459C 001914DC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801945A0 001914E0  7D 89 03 A6 */	mtctr r12
/* 801945A4 001914E4  4E 80 04 21 */	bctrl 
/* 801945A8 001914E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801945AC 001914EC  41 82 00 0C */	beq .L_801945B8
/* 801945B0 001914F0  38 60 00 00 */	li r3, 0
/* 801945B4 001914F4  48 00 00 BC */	b .L_80194670
.L_801945B8:
/* 801945B8 001914F8  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 801945BC 001914FC  8B FE 02 B8 */	lbz r31, 0x2b8(r30)
/* 801945C0 00191500  28 03 00 00 */	cmplwi r3, 0
/* 801945C4 00191504  41 82 00 A8 */	beq .L_8019466C
/* 801945C8 00191508  81 83 00 00 */	lwz r12, 0(r3)
/* 801945CC 0019150C  38 80 00 15 */	li r4, 0x15
/* 801945D0 00191510  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 801945D4 00191514  7D 89 03 A6 */	mtctr r12
/* 801945D8 00191518  4E 80 04 21 */	bctrl 
/* 801945DC 0019151C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801945E0 00191520  41 82 00 8C */	beq .L_8019466C
/* 801945E4 00191524  2C 1F 00 00 */	cmpwi r31, 0
/* 801945E8 00191528  41 82 00 84 */	beq .L_8019466C
/* 801945EC 0019152C  2C 1F 00 05 */	cmpwi r31, 5
/* 801945F0 00191530  41 82 00 7C */	beq .L_8019466C
/* 801945F4 00191534  80 7D 00 04 */	lwz r3, 4(r29)
/* 801945F8 00191538  81 83 00 00 */	lwz r12, 0(r3)
/* 801945FC 0019153C  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80194600 00191540  7D 89 03 A6 */	mtctr r12
/* 80194604 00191544  4E 80 04 21 */	bctrl 
/* 80194608 00191548  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019460C 0019154C  41 82 00 28 */	beq .L_80194634
/* 80194610 00191550  80 7D 00 04 */	lwz r3, 4(r29)
/* 80194614 00191554  81 83 00 00 */	lwz r12, 0(r3)
/* 80194618 00191558  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 8019461C 0019155C  7D 89 03 A6 */	mtctr r12
/* 80194620 00191560  4E 80 04 21 */	bctrl 
/* 80194624 00191564  7C 64 1B 78 */	mr r4, r3
/* 80194628 00191568  7F C3 F3 78 */	mr r3, r30
/* 8019462C 0019156C  4B FB 64 91 */	bl setTekiKillID__Q24Game4PikiFi
/* 80194630 00191570  48 00 00 0C */	b .L_8019463C
.L_80194634:
/* 80194634 00191574  38 00 FF FF */	li r0, -1
/* 80194638 00191578  B0 1E 02 A4 */	sth r0, 0x2a4(r30)
.L_8019463C:
/* 8019463C 0019157C  38 00 00 01 */	li r0, 1
/* 80194640 00191580  7F C4 F3 78 */	mr r4, r30
/* 80194644 00191584  B0 01 00 08 */	sth r0, 8(r1)
/* 80194648 00191588  38 C1 00 08 */	addi r6, r1, 8
/* 8019464C 0019158C  38 A0 00 15 */	li r5, 0x15
/* 80194650 00191590  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80194654 00191594  81 83 00 00 */	lwz r12, 0(r3)
/* 80194658 00191598  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8019465C 0019159C  7D 89 03 A6 */	mtctr r12
/* 80194660 001915A0  4E 80 04 21 */	bctrl 
/* 80194664 001915A4  38 60 00 01 */	li r3, 1
/* 80194668 001915A8  48 00 00 08 */	b .L_80194670
.L_8019466C:
/* 8019466C 001915AC  38 60 00 00 */	li r3, 0
.L_80194670:
/* 80194670 001915B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80194674 001915B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80194678 001915B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8019467C 001915BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80194680 001915C0  7C 08 03 A6 */	mtlr r0
/* 80194684 001915C4  38 21 00 20 */	addi r1, r1, 0x20
/* 80194688 001915C8  4E 80 00 20 */	blr 

.global actPiki__Q24Game11InteractGasFPQ24Game4Piki
actPiki__Q24Game11InteractGasFPQ24Game4Piki:
/* 8019468C 001915CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80194690 001915D0  7C 08 02 A6 */	mflr r0
/* 80194694 001915D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80194698 001915D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8019469C 001915DC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801946A0 001915E0  7C 9E 23 78 */	mr r30, r4
/* 801946A4 001915E4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 801946A8 001915E8  7C 7D 1B 78 */	mr r29, r3
/* 801946AC 001915EC  7F C3 F3 78 */	mr r3, r30
/* 801946B0 001915F0  4B FB 4E 09 */	bl gasInvicible__Q24Game4PikiFv
/* 801946B4 001915F4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801946B8 001915F8  41 82 00 0C */	beq .L_801946C4
/* 801946BC 001915FC  38 60 00 00 */	li r3, 0
/* 801946C0 00191600  48 00 00 EC */	b .L_801947AC
.L_801946C4:
/* 801946C4 00191604  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 801946C8 00191608  7F C4 F3 78 */	mr r4, r30
/* 801946CC 0019160C  81 83 00 00 */	lwz r12, 0(r3)
/* 801946D0 00191610  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801946D4 00191614  7D 89 03 A6 */	mtctr r12
/* 801946D8 00191618  4E 80 04 21 */	bctrl 
/* 801946DC 0019161C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801946E0 00191620  41 82 00 0C */	beq .L_801946EC
/* 801946E4 00191624  38 60 00 00 */	li r3, 0
/* 801946E8 00191628  48 00 00 C4 */	b .L_801947AC
.L_801946EC:
/* 801946EC 0019162C  80 7E 02 90 */	lwz r3, 0x290(r30)
/* 801946F0 00191630  8B FE 02 B8 */	lbz r31, 0x2b8(r30)
/* 801946F4 00191634  28 03 00 00 */	cmplwi r3, 0
/* 801946F8 00191638  41 82 00 B0 */	beq .L_801947A8
/* 801946FC 0019163C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194700 00191640  38 80 00 15 */	li r4, 0x15
/* 80194704 00191644  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80194708 00191648  7D 89 03 A6 */	mtctr r12
/* 8019470C 0019164C  4E 80 04 21 */	bctrl 
/* 80194710 00191650  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194714 00191654  41 82 00 94 */	beq .L_801947A8
/* 80194718 00191658  2C 1F 00 04 */	cmpwi r31, 4
/* 8019471C 0019165C  41 82 00 8C */	beq .L_801947A8
/* 80194720 00191660  2C 1F 00 05 */	cmpwi r31, 5
/* 80194724 00191664  41 82 00 84 */	beq .L_801947A8
/* 80194728 00191668  80 7D 00 04 */	lwz r3, 4(r29)
/* 8019472C 0019166C  28 03 00 00 */	cmplwi r3, 0
/* 80194730 00191670  41 82 00 40 */	beq .L_80194770
/* 80194734 00191674  81 83 00 00 */	lwz r12, 0(r3)
/* 80194738 00191678  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8019473C 0019167C  7D 89 03 A6 */	mtctr r12
/* 80194740 00191680  4E 80 04 21 */	bctrl 
/* 80194744 00191684  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194748 00191688  41 82 00 28 */	beq .L_80194770
/* 8019474C 0019168C  80 7D 00 04 */	lwz r3, 4(r29)
/* 80194750 00191690  81 83 00 00 */	lwz r12, 0(r3)
/* 80194754 00191694  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80194758 00191698  7D 89 03 A6 */	mtctr r12
/* 8019475C 0019169C  4E 80 04 21 */	bctrl 
/* 80194760 001916A0  7C 64 1B 78 */	mr r4, r3
/* 80194764 001916A4  7F C3 F3 78 */	mr r3, r30
/* 80194768 001916A8  4B FB 63 55 */	bl setTekiKillID__Q24Game4PikiFi
/* 8019476C 001916AC  48 00 00 0C */	b .L_80194778
.L_80194770:
/* 80194770 001916B0  38 00 FF FF */	li r0, -1
/* 80194774 001916B4  B0 1E 02 A4 */	sth r0, 0x2a4(r30)
.L_80194778:
/* 80194778 001916B8  38 00 00 02 */	li r0, 2
/* 8019477C 001916BC  7F C4 F3 78 */	mr r4, r30
/* 80194780 001916C0  B0 01 00 08 */	sth r0, 8(r1)
/* 80194784 001916C4  38 C1 00 08 */	addi r6, r1, 8
/* 80194788 001916C8  38 A0 00 15 */	li r5, 0x15
/* 8019478C 001916CC  80 7E 02 8C */	lwz r3, 0x28c(r30)
/* 80194790 001916D0  81 83 00 00 */	lwz r12, 0(r3)
/* 80194794 001916D4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80194798 001916D8  7D 89 03 A6 */	mtctr r12
/* 8019479C 001916DC  4E 80 04 21 */	bctrl 
/* 801947A0 001916E0  38 60 00 01 */	li r3, 1
/* 801947A4 001916E4  48 00 00 08 */	b .L_801947AC
.L_801947A8:
/* 801947A8 001916E8  38 60 00 00 */	li r3, 0
.L_801947AC:
/* 801947AC 001916EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801947B0 001916F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801947B4 001916F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801947B8 001916F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801947BC 001916FC  7C 08 03 A6 */	mtlr r0
/* 801947C0 00191700  38 21 00 20 */	addi r1, r1, 0x20
/* 801947C4 00191704  4E 80 00 20 */	blr 

.global actPiki__Q24Game14InteractBattleFPQ24Game4Piki
actPiki__Q24Game14InteractBattleFPQ24Game4Piki:
/* 801947C8 00191708  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801947CC 0019170C  7C 08 02 A6 */	mflr r0
/* 801947D0 00191710  90 01 00 24 */	stw r0, 0x24(r1)
/* 801947D4 00191714  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801947D8 00191718  7C 9F 23 78 */	mr r31, r4
/* 801947DC 0019171C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 801947E0 00191720  7C 7E 1B 78 */	mr r30, r3
/* 801947E4 00191724  7F E3 FB 78 */	mr r3, r31
/* 801947E8 00191728  4B FB 36 61 */	bl getCurrActionID__Q24Game4PikiFv
/* 801947EC 0019172C  2C 03 00 0D */	cmpwi r3, 0xd
/* 801947F0 00191730  41 82 00 7C */	beq .L_8019486C
/* 801947F4 00191734  80 7E 00 04 */	lwz r3, 4(r30)
/* 801947F8 00191738  81 83 00 00 */	lwz r12, 0(r3)
/* 801947FC 0019173C  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80194800 00191740  7D 89 03 A6 */	mtctr r12
/* 80194804 00191744  4E 80 04 21 */	bctrl 
/* 80194808 00191748  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019480C 0019174C  40 82 00 20 */	bne .L_8019482C
/* 80194810 00191750  3C 60 80 48 */	lis r3, lbl_8047EF20@ha
/* 80194814 00191754  3C A0 80 48 */	lis r5, lbl_8047EF34@ha
/* 80194818 00191758  38 63 EF 20 */	addi r3, r3, lbl_8047EF20@l
/* 8019481C 0019175C  38 80 04 31 */	li r4, 0x431
/* 80194820 00191760  38 A5 EF 34 */	addi r5, r5, lbl_8047EF34@l
/* 80194824 00191764  4C C6 31 82 */	crclr 6
/* 80194828 00191768  4B E9 5E 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019482C:
/* 8019482C 0019176C  80 DE 00 04 */	lwz r6, 4(r30)
/* 80194830 00191770  3C 60 80 4B */	lis r3, __vt__Q26PikiAI9ActionArg@ha
/* 80194834 00191774  38 03 05 30 */	addi r0, r3, __vt__Q26PikiAI9ActionArg@l
/* 80194838 00191778  3C 60 80 4B */	lis r3, __vt__Q26PikiAI12ActBattleArg@ha
/* 8019483C 0019177C  90 01 00 08 */	stw r0, 8(r1)
/* 80194840 00191780  38 63 47 DC */	addi r3, r3, __vt__Q26PikiAI12ActBattleArg@l
/* 80194844 00191784  38 00 00 01 */	li r0, 1
/* 80194848 00191788  38 A1 00 08 */	addi r5, r1, 8
/* 8019484C 0019178C  90 61 00 08 */	stw r3, 8(r1)
/* 80194850 00191790  38 80 00 0D */	li r4, 0xd
/* 80194854 00191794  90 C1 00 0C */	stw r6, 0xc(r1)
/* 80194858 00191798  98 01 00 10 */	stb r0, 0x10(r1)
/* 8019485C 0019179C  80 7F 02 94 */	lwz r3, 0x294(r31)
/* 80194860 001917A0  48 00 27 35 */	bl start__Q26PikiAI5BrainFiPQ26PikiAI9ActionArg
/* 80194864 001917A4  38 60 00 01 */	li r3, 1
/* 80194868 001917A8  48 00 00 08 */	b .L_80194870
.L_8019486C:
/* 8019486C 001917AC  38 60 00 00 */	li r3, 0
.L_80194870:
/* 80194870 001917B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80194874 001917B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80194878 001917B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8019487C 001917BC  7C 08 03 A6 */	mtlr r0
/* 80194880 001917C0  38 21 00 20 */	addi r1, r1, 0x20
/* 80194884 001917C4  4E 80 00 20 */	blr 

.global actPiki__Q24Game13InteractPressFPQ24Game4Piki
actPiki__Q24Game13InteractPressFPQ24Game4Piki:
/* 80194888 001917C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019488C 001917CC  7C 08 02 A6 */	mflr r0
/* 80194890 001917D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80194894 001917D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80194898 001917D8  7C 9F 23 78 */	mr r31, r4
/* 8019489C 001917DC  93 C1 00 08 */	stw r30, 8(r1)
/* 801948A0 001917E0  7C 7E 1B 78 */	mr r30, r3
/* 801948A4 001917E4  80 AD 93 E8 */	lwz r5, gameSystem__4Game@sda21(r13)
/* 801948A8 001917E8  88 05 00 3C */	lbz r0, 0x3c(r5)
/* 801948AC 001917EC  54 00 06 B5 */	rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 801948B0 001917F0  40 82 00 18 */	bne .L_801948C8
/* 801948B4 001917F4  88 05 00 48 */	lbz r0, 0x48(r5)
/* 801948B8 001917F8  28 00 00 00 */	cmplwi r0, 0
/* 801948BC 001917FC  41 82 00 0C */	beq .L_801948C8
/* 801948C0 00191800  38 60 00 00 */	li r3, 0
/* 801948C4 00191804  48 00 00 CC */	b .L_80194990
.L_801948C8:
/* 801948C8 00191808  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 801948CC 0019180C  7F E4 FB 78 */	mr r4, r31
/* 801948D0 00191810  81 83 00 00 */	lwz r12, 0(r3)
/* 801948D4 00191814  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801948D8 00191818  7D 89 03 A6 */	mtctr r12
/* 801948DC 0019181C  4E 80 04 21 */	bctrl 
/* 801948E0 00191820  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801948E4 00191824  41 82 00 0C */	beq .L_801948F0
/* 801948E8 00191828  38 60 00 00 */	li r3, 0
/* 801948EC 0019182C  48 00 00 A4 */	b .L_80194990
.L_801948F0:
/* 801948F0 00191830  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 801948F4 00191834  81 83 00 00 */	lwz r12, 0(r3)
/* 801948F8 00191838  81 8C 00 60 */	lwz r12, 0x60(r12)
/* 801948FC 0019183C  7D 89 03 A6 */	mtctr r12
/* 80194900 00191840  4E 80 04 21 */	bctrl 
/* 80194904 00191844  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194908 00191848  41 82 00 84 */	beq .L_8019498C
/* 8019490C 0019184C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80194910 00191850  81 83 00 00 */	lwz r12, 0(r3)
/* 80194914 00191854  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80194918 00191858  7D 89 03 A6 */	mtctr r12
/* 8019491C 0019185C  4E 80 04 21 */	bctrl 
/* 80194920 00191860  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194924 00191864  41 82 00 28 */	beq .L_8019494C
/* 80194928 00191868  80 7E 00 04 */	lwz r3, 4(r30)
/* 8019492C 0019186C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194930 00191870  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80194934 00191874  7D 89 03 A6 */	mtctr r12
/* 80194938 00191878  4E 80 04 21 */	bctrl 
/* 8019493C 0019187C  7C 64 1B 78 */	mr r4, r3
/* 80194940 00191880  7F E3 FB 78 */	mr r3, r31
/* 80194944 00191884  4B FB 61 79 */	bl setTekiKillID__Q24Game4PikiFi
/* 80194948 00191888  48 00 00 0C */	b .L_80194954
.L_8019494C:
/* 8019494C 0019188C  38 00 FF FF */	li r0, -1
/* 80194950 00191890  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
.L_80194954:
/* 80194954 00191894  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80194958 00191898  7F E4 FB 78 */	mr r4, r31
/* 8019495C 0019189C  38 A0 00 14 */	li r5, 0x14
/* 80194960 001918A0  38 C0 00 00 */	li r6, 0
/* 80194964 001918A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80194968 001918A8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8019496C 001918AC  7D 89 03 A6 */	mtctr r12
/* 80194970 001918B0  4E 80 04 21 */	bctrl 
/* 80194974 001918B4  7F E3 FB 78 */	mr r3, r31
/* 80194978 001918B8  38 80 28 0B */	li r4, 0x280b
/* 8019497C 001918BC  38 A0 00 00 */	li r5, 0
/* 80194980 001918C0  4B FB 3F 4D */	bl startSound__Q24Game4PikiFUlb
/* 80194984 001918C4  38 60 00 01 */	li r3, 1
/* 80194988 001918C8  48 00 00 08 */	b .L_80194990
.L_8019498C:
/* 8019498C 001918CC  38 60 00 00 */	li r3, 0
.L_80194990:
/* 80194990 001918D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80194994 001918D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80194998 001918D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8019499C 001918DC  7C 08 03 A6 */	mtlr r0
/* 801949A0 001918E0  38 21 00 10 */	addi r1, r1, 0x10
/* 801949A4 001918E4  4E 80 00 20 */	blr 

.global actPiki__Q24Game13InteractFlickFPQ24Game4Piki
actPiki__Q24Game13InteractFlickFPQ24Game4Piki:
/* 801949A8 001918E8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 801949AC 001918EC  7C 08 02 A6 */	mflr r0
/* 801949B0 001918F0  90 01 00 94 */	stw r0, 0x94(r1)
/* 801949B4 001918F4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 801949B8 001918F8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 801949BC 001918FC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 801949C0 00191900  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 801949C4 00191904  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 801949C8 00191908  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 801949CC 0019190C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 801949D0 00191910  93 C1 00 58 */	stw r30, 0x58(r1)
/* 801949D4 00191914  93 A1 00 54 */	stw r29, 0x54(r1)
/* 801949D8 00191918  7C 9F 23 78 */	mr r31, r4
/* 801949DC 0019191C  7C 7E 1B 78 */	mr r30, r3
/* 801949E0 00191920  80 64 02 90 */	lwz r3, 0x290(r4)
/* 801949E4 00191924  81 83 00 00 */	lwz r12, 0(r3)
/* 801949E8 00191928  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 801949EC 0019192C  7D 89 03 A6 */	mtctr r12
/* 801949F0 00191930  4E 80 04 21 */	bctrl 
/* 801949F4 00191934  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801949F8 00191938  41 82 00 0C */	beq .L_80194A04
/* 801949FC 0019193C  38 60 00 00 */	li r3, 0
/* 80194A00 00191940  48 00 01 D4 */	b .L_80194BD4
.L_80194A04:
/* 80194A04 00191944  7F E3 FB 78 */	mr r3, r31
/* 80194A08 00191948  4B FB 45 2D */	bl getStateID__Q24Game4PikiFv
/* 80194A0C 0019194C  2C 03 00 09 */	cmpwi r3, 9
/* 80194A10 00191950  40 82 00 0C */	bne .L_80194A1C
/* 80194A14 00191954  38 60 00 00 */	li r3, 0
/* 80194A18 00191958  48 00 01 BC */	b .L_80194BD4
.L_80194A1C:
/* 80194A1C 0019195C  83 BF 02 90 */	lwz r29, 0x290(r31)
/* 80194A20 00191960  7F A3 EB 78 */	mr r3, r29
/* 80194A24 00191964  81 9D 00 00 */	lwz r12, 0(r29)
/* 80194A28 00191968  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80194A2C 0019196C  7D 89 03 A6 */	mtctr r12
/* 80194A30 00191970  4E 80 04 21 */	bctrl 
/* 80194A34 00191974  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194A38 00191978  40 82 00 10 */	bne .L_80194A48
/* 80194A3C 0019197C  80 1D 00 04 */	lwz r0, 4(r29)
/* 80194A40 00191980  2C 00 00 15 */	cmpwi r0, 0x15
/* 80194A44 00191984  40 82 00 0C */	bne .L_80194A50
.L_80194A48:
/* 80194A48 00191988  38 60 00 00 */	li r3, 0
/* 80194A4C 0019198C  48 00 01 88 */	b .L_80194BD4
.L_80194A50:
/* 80194A50 00191990  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 80194A54 00191994  C0 02 AB 68 */	lfs f0, lbl_80518EC8@sda21(r2)
/* 80194A58 00191998  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80194A5C 0019199C  40 80 00 18 */	bge .L_80194A74
/* 80194A60 001919A0  7F E3 FB 78 */	mr r3, r31
/* 80194A64 001919A4  81 9F 00 00 */	lwz r12, 0(r31)
/* 80194A68 001919A8  81 8C 00 64 */	lwz r12, 0x64(r12)
/* 80194A6C 001919AC  7D 89 03 A6 */	mtctr r12
/* 80194A70 001919B0  4E 80 04 21 */	bctrl 
.L_80194A74:
/* 80194A74 001919B4  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80194A78 001919B8  FC 40 08 90 */	fmr f2, f1
/* 80194A7C 001919BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80194A80 001919C0  40 80 00 08 */	bge .L_80194A88
/* 80194A84 001919C4  FC 40 08 50 */	fneg f2, f1
.L_80194A88:
/* 80194A88 001919C8  C0 62 AB 6C */	lfs f3, lbl_80518ECC@sda21(r2)
/* 80194A8C 001919CC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 80194A90 001919D0  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80194A94 001919D4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 80194A98 001919D8  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80194A9C 001919DC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80194AA0 001919E0  FC 00 10 1E */	fctiwz f0, f2
/* 80194AA4 001919E4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80194AA8 001919E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80194AAC 001919EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80194AB0 001919F0  7C 64 02 14 */	add r3, r4, r0
/* 80194AB4 001919F4  C0 03 00 04 */	lfs f0, 4(r3)
/* 80194AB8 001919F8  FF E0 00 50 */	fneg f31, f0
/* 80194ABC 001919FC  40 80 00 28 */	bge .L_80194AE4
/* 80194AC0 00191A00  C0 02 AB 70 */	lfs f0, lbl_80518ED0@sda21(r2)
/* 80194AC4 00191A04  EC 01 00 32 */	fmuls f0, f1, f0
/* 80194AC8 00191A08  FC 00 00 1E */	fctiwz f0, f0
/* 80194ACC 00191A0C  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80194AD0 00191A10  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80194AD4 00191A14  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80194AD8 00191A18  7C 04 04 2E */	lfsx f0, r4, r0
/* 80194ADC 00191A1C  FF C0 00 50 */	fneg f30, f0
/* 80194AE0 00191A20  48 00 00 1C */	b .L_80194AFC
.L_80194AE4:
/* 80194AE4 00191A24  EC 01 00 F2 */	fmuls f0, f1, f3
/* 80194AE8 00191A28  FC 00 00 1E */	fctiwz f0, f0
/* 80194AEC 00191A2C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 80194AF0 00191A30  80 01 00 34 */	lwz r0, 0x34(r1)
/* 80194AF4 00191A34  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80194AF8 00191A38  7F C4 04 2E */	lfsx f30, r4, r0
.L_80194AFC:
/* 80194AFC 00191A3C  4B F3 4A A5 */	bl rand
/* 80194B00 00191A40  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80194B04 00191A44  3C 00 43 30 */	lis r0, 0x4330
/* 80194B08 00191A48  90 61 00 3C */	stw r3, 0x3c(r1)
/* 80194B0C 00191A4C  C8 42 AB 88 */	lfd f2, lbl_80518EE8@sda21(r2)
/* 80194B10 00191A50  90 01 00 38 */	stw r0, 0x38(r1)
/* 80194B14 00191A54  C0 22 AB 74 */	lfs f1, lbl_80518ED4@sda21(r2)
/* 80194B18 00191A58  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 80194B1C 00191A5C  C0 7E 00 08 */	lfs f3, 8(r30)
/* 80194B20 00191A60  EC 40 10 28 */	fsubs f2, f0, f2
/* 80194B24 00191A64  C0 02 AB 78 */	lfs f0, lbl_80518ED8@sda21(r2)
/* 80194B28 00191A68  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80194B2C 00191A6C  EC 22 08 24 */	fdivs f1, f2, f1
/* 80194B30 00191A70  EF A0 18 7A */	fmadds f29, f0, f1, f3
/* 80194B34 00191A74  4B F3 4A 6D */	bl rand
/* 80194B38 00191A78  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 80194B3C 00191A7C  3C 00 43 30 */	lis r0, 0x4330
/* 80194B40 00191A80  90 61 00 44 */	stw r3, 0x44(r1)
/* 80194B44 00191A84  FC 00 F0 50 */	fneg f0, f30
/* 80194B48 00191A88  80 FE 00 04 */	lwz r7, 4(r30)
/* 80194B4C 00191A8C  EC 3F 07 72 */	fmuls f1, f31, f29
/* 80194B50 00191A90  90 01 00 40 */	stw r0, 0x40(r1)
/* 80194B54 00191A94  38 C0 00 00 */	li r6, 0
/* 80194B58 00191A98  C8 62 AB 88 */	lfd f3, lbl_80518EE8@sda21(r2)
/* 80194B5C 00191A9C  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 80194B60 00191AA0  EC 80 07 72 */	fmuls f4, f0, f29
/* 80194B64 00191AA4  C0 A2 AB 74 */	lfs f5, lbl_80518ED4@sda21(r2)
/* 80194B68 00191AA8  38 00 00 01 */	li r0, 1
/* 80194B6C 00191AAC  EC C2 18 28 */	fsubs f6, f2, f3
/* 80194B70 00191AB0  C0 02 AB 78 */	lfs f0, lbl_80518ED8@sda21(r2)
/* 80194B74 00191AB4  C0 62 AB 80 */	lfs f3, lbl_80518EE0@sda21(r2)
/* 80194B78 00191AB8  C0 42 AB 7C */	lfs f2, lbl_80518EDC@sda21(r2)
/* 80194B7C 00191ABC  7F E3 FB 78 */	mr r3, r31
/* 80194B80 00191AC0  EC A6 28 24 */	fdivs f5, f6, f5
/* 80194B84 00191AC4  D0 81 00 08 */	stfs f4, 8(r1)
/* 80194B88 00191AC8  38 80 28 54 */	li r4, 0x2854
/* 80194B8C 00191ACC  38 A0 00 00 */	li r5, 0
/* 80194B90 00191AD0  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80194B94 00191AD4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 80194B98 00191AD8  EC 03 11 7A */	fmadds f0, f3, f5, f2
/* 80194B9C 00191ADC  98 C1 00 18 */	stb r6, 0x18(r1)
/* 80194BA0 00191AE0  B0 01 00 1A */	sth r0, 0x1a(r1)
/* 80194BA4 00191AE4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80194BA8 00191AE8  90 E1 00 1C */	stw r7, 0x1c(r1)
/* 80194BAC 00191AEC  4B FB 3D 21 */	bl startSound__Q24Game4PikiFUlb
/* 80194BB0 00191AF0  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80194BB4 00191AF4  7F E4 FB 78 */	mr r4, r31
/* 80194BB8 00191AF8  38 C1 00 08 */	addi r6, r1, 8
/* 80194BBC 00191AFC  38 A0 00 08 */	li r5, 8
/* 80194BC0 00191B00  81 83 00 00 */	lwz r12, 0(r3)
/* 80194BC4 00191B04  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80194BC8 00191B08  7D 89 03 A6 */	mtctr r12
/* 80194BCC 00191B0C  4E 80 04 21 */	bctrl 
/* 80194BD0 00191B10  38 60 00 01 */	li r3, 1
.L_80194BD4:
/* 80194BD4 00191B14  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 80194BD8 00191B18  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 80194BDC 00191B1C  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 80194BE0 00191B20  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 80194BE4 00191B24  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 80194BE8 00191B28  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 80194BEC 00191B2C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 80194BF0 00191B30  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 80194BF4 00191B34  80 01 00 94 */	lwz r0, 0x94(r1)
/* 80194BF8 00191B38  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 80194BFC 00191B3C  7C 08 03 A6 */	mtlr r0
/* 80194C00 00191B40  38 21 00 90 */	addi r1, r1, 0x90
/* 80194C04 00191B44  4E 80 00 20 */	blr 

.global actPiki__Q24Game15InteractSwallowFPQ24Game4Piki
actPiki__Q24Game15InteractSwallowFPQ24Game4Piki:
/* 80194C08 00191B48  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 80194C0C 00191B4C  7C 08 02 A6 */	mflr r0
/* 80194C10 00191B50  90 01 00 84 */	stw r0, 0x84(r1)
/* 80194C14 00191B54  DB E1 00 70 */	stfd f31, 0x70(r1)
/* 80194C18 00191B58  F3 E1 00 78 */	psq_st f31, 120(r1), 0, qr0
/* 80194C1C 00191B5C  DB C1 00 60 */	stfd f30, 0x60(r1)
/* 80194C20 00191B60  F3 C1 00 68 */	psq_st f30, 104(r1), 0, qr0
/* 80194C24 00191B64  DB A1 00 50 */	stfd f29, 0x50(r1)
/* 80194C28 00191B68  F3 A1 00 58 */	psq_st f29, 88(r1), 0, qr0
/* 80194C2C 00191B6C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 80194C30 00191B70  93 C1 00 48 */	stw r30, 0x48(r1)
/* 80194C34 00191B74  93 A1 00 44 */	stw r29, 0x44(r1)
/* 80194C38 00191B78  7C 9F 23 78 */	mr r31, r4
/* 80194C3C 00191B7C  7C 7E 1B 78 */	mr r30, r3
/* 80194C40 00191B80  7F E3 FB 78 */	mr r3, r31
/* 80194C44 00191B84  81 9F 00 00 */	lwz r12, 0(r31)
/* 80194C48 00191B88  81 8C 01 F4 */	lwz r12, 0x1f4(r12)
/* 80194C4C 00191B8C  7D 89 03 A6 */	mtctr r12
/* 80194C50 00191B90  4E 80 04 21 */	bctrl 
/* 80194C54 00191B94  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194C58 00191B98  40 82 00 18 */	bne .L_80194C70
/* 80194C5C 00191B9C  80 6D 94 90 */	lwz r3, playData__4Game@sda21(r13)
/* 80194C60 00191BA0  38 80 00 27 */	li r4, 0x27
/* 80194C64 00191BA4  48 05 27 7D */	bl isDemoFlag__Q24Game8PlayDataFi
/* 80194C68 00191BA8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194C6C 00191BAC  40 82 01 04 */	bne .L_80194D70
.L_80194C70:
/* 80194C70 00191BB0  7F E4 FB 78 */	mr r4, r31
/* 80194C74 00191BB4  38 61 00 18 */	addi r3, r1, 0x18
/* 80194C78 00191BB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80194C7C 00191BBC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194C80 00191BC0  7D 89 03 A6 */	mtctr r12
/* 80194C84 00191BC4  4E 80 04 21 */	bctrl 
/* 80194C88 00191BC8  80 9E 00 04 */	lwz r4, 4(r30)
/* 80194C8C 00191BCC  38 61 00 0C */	addi r3, r1, 0xc
/* 80194C90 00191BD0  C3 E1 00 18 */	lfs f31, 0x18(r1)
/* 80194C94 00191BD4  81 84 00 00 */	lwz r12, 0(r4)
/* 80194C98 00191BD8  C3 C1 00 1C */	lfs f30, 0x1c(r1)
/* 80194C9C 00191BDC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80194CA0 00191BE0  C3 A1 00 20 */	lfs f29, 0x20(r1)
/* 80194CA4 00191BE4  7D 89 03 A6 */	mtctr r12
/* 80194CA8 00191BE8  4E 80 04 21 */	bctrl 
/* 80194CAC 00191BEC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80194CB0 00191BF0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 80194CB4 00191BF4  EC 7E 00 28 */	fsubs f3, f30, f0
/* 80194CB8 00191BF8  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 80194CBC 00191BFC  EC 3F 08 28 */	fsubs f1, f31, f1
/* 80194CC0 00191C00  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80194CC4 00191C04  EC 5D 10 28 */	fsubs f2, f29, f2
/* 80194CC8 00191C08  EC 63 00 F2 */	fmuls f3, f3, f3
/* 80194CCC 00191C0C  EC 82 00 B2 */	fmuls f4, f2, f2
/* 80194CD0 00191C10  EC 61 18 7A */	fmadds f3, f1, f1, f3
/* 80194CD4 00191C14  EC 64 18 2A */	fadds f3, f4, f3
/* 80194CD8 00191C18  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80194CDC 00191C1C  40 81 00 14 */	ble .L_80194CF0
/* 80194CE0 00191C20  40 81 00 14 */	ble .L_80194CF4
/* 80194CE4 00191C24  FC 00 18 34 */	frsqrte f0, f3
/* 80194CE8 00191C28  EC 60 00 F2 */	fmuls f3, f0, f3
/* 80194CEC 00191C2C  48 00 00 08 */	b .L_80194CF4
.L_80194CF0:
/* 80194CF0 00191C30  FC 60 00 90 */	fmr f3, f0
.L_80194CF4:
/* 80194CF4 00191C34  C0 02 AB 54 */	lfs f0, lbl_80518EB4@sda21(r2)
/* 80194CF8 00191C38  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 80194CFC 00191C3C  40 81 00 14 */	ble .L_80194D10
/* 80194D00 00191C40  C0 02 AB 5C */	lfs f0, lbl_80518EBC@sda21(r2)
/* 80194D04 00191C44  EC 00 18 24 */	fdivs f0, f0, f3
/* 80194D08 00191C48  EC 21 00 32 */	fmuls f1, f1, f0
/* 80194D0C 00191C4C  EC 42 00 32 */	fmuls f2, f2, f0
.L_80194D10:
/* 80194D10 00191C50  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 80194D14 00191C54  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 80194D18 00191C58  4B EA 03 F1 */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 80194D1C 00191C5C  80 BE 00 04 */	lwz r5, 4(r30)
/* 80194D20 00191C60  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 80194D24 00191C64  38 83 A3 00 */	addi r4, r3, __vt__Q24Game11Interaction@l
/* 80194D28 00191C68  FC 00 08 50 */	fneg f0, f1
/* 80194D2C 00191C6C  C0 42 AB 80 */	lfs f2, lbl_80518EE0@sda21(r2)
/* 80194D30 00191C70  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 80194D34 00191C74  C0 22 AB 54 */	lfs f1, lbl_80518EB4@sda21(r2)
/* 80194D38 00191C78  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 80194D3C 00191C7C  90 81 00 24 */	stw r4, 0x24(r1)
/* 80194D40 00191C80  7F E3 FB 78 */	mr r3, r31
/* 80194D44 00191C84  38 81 00 24 */	addi r4, r1, 0x24
/* 80194D48 00191C88  90 A1 00 28 */	stw r5, 0x28(r1)
/* 80194D4C 00191C8C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80194D50 00191C90  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 80194D54 00191C94  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 80194D58 00191C98  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80194D5C 00191C9C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80194D60 00191CA0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 80194D64 00191CA4  7D 89 03 A6 */	mtctr r12
/* 80194D68 00191CA8  4E 80 04 21 */	bctrl 
/* 80194D6C 00191CAC  48 00 01 54 */	b .L_80194EC0
.L_80194D70:
/* 80194D70 00191CB0  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80194D74 00191CB4  7F E4 FB 78 */	mr r4, r31
/* 80194D78 00191CB8  81 83 00 00 */	lwz r12, 0(r3)
/* 80194D7C 00191CBC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 80194D80 00191CC0  7D 89 03 A6 */	mtctr r12
/* 80194D84 00191CC4  4E 80 04 21 */	bctrl 
/* 80194D88 00191CC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194D8C 00191CCC  41 82 00 0C */	beq .L_80194D98
/* 80194D90 00191CD0  38 60 00 00 */	li r3, 0
/* 80194D94 00191CD4  48 00 01 2C */	b .L_80194EC0
.L_80194D98:
/* 80194D98 00191CD8  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80194D9C 00191CDC  3B A0 00 00 */	li r29, 0
/* 80194DA0 00191CE0  28 03 00 00 */	cmplwi r3, 0
/* 80194DA4 00191CE4  41 82 00 20 */	beq .L_80194DC4
/* 80194DA8 00191CE8  81 83 00 00 */	lwz r12, 0(r3)
/* 80194DAC 00191CEC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80194DB0 00191CF0  7D 89 03 A6 */	mtctr r12
/* 80194DB4 00191CF4  4E 80 04 21 */	bctrl 
/* 80194DB8 00191CF8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194DBC 00191CFC  41 82 00 08 */	beq .L_80194DC4
/* 80194DC0 00191D00  3B A0 00 01 */	li r29, 1
.L_80194DC4:
/* 80194DC4 00191D04  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 80194DC8 00191D08  40 82 00 20 */	bne .L_80194DE8
/* 80194DCC 00191D0C  3C 60 80 48 */	lis r3, lbl_8047EF20@ha
/* 80194DD0 00191D10  3C A0 80 48 */	lis r5, lbl_8047EF34@ha
/* 80194DD4 00191D14  38 63 EF 20 */	addi r3, r3, lbl_8047EF20@l
/* 80194DD8 00191D18  38 80 04 9C */	li r4, 0x49c
/* 80194DDC 00191D1C  38 A5 EF 34 */	addi r5, r5, lbl_8047EF34@l
/* 80194DE0 00191D20  4C C6 31 82 */	crclr 6
/* 80194DE4 00191D24  4B E9 58 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_80194DE8:
/* 80194DE8 00191D28  80 7F 02 90 */	lwz r3, 0x290(r31)
/* 80194DEC 00191D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194DF0 00191D30  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 80194DF4 00191D34  7D 89 03 A6 */	mtctr r12
/* 80194DF8 00191D38  4E 80 04 21 */	bctrl 
/* 80194DFC 00191D3C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194E00 00191D40  40 82 00 BC */	bne .L_80194EBC
/* 80194E04 00191D44  80 9E 00 04 */	lwz r4, 4(r30)
/* 80194E08 00191D48  7F E3 FB 78 */	mr r3, r31
/* 80194E0C 00191D4C  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 80194E10 00191D50  48 00 A2 59 */	bl startStickMouth__Q24Game8CreatureFPQ24Game8CreatureP8CollPart
/* 80194E14 00191D54  80 1E 00 10 */	lwz r0, 0x10(r30)
/* 80194E18 00191D58  3B A0 00 08 */	li r29, 8
/* 80194E1C 00191D5C  2C 00 00 01 */	cmpwi r0, 1
/* 80194E20 00191D60  40 82 00 18 */	bne .L_80194E38
/* 80194E24 00191D64  7F E3 FB 78 */	mr r3, r31
/* 80194E28 00191D68  3B A0 00 3F */	li r29, 0x3f
/* 80194E2C 00191D6C  38 80 28 2B */	li r4, 0x282b
/* 80194E30 00191D70  38 A0 00 00 */	li r5, 0
/* 80194E34 00191D74  4B FB 3A 99 */	bl startSound__Q24Game4PikiFUlb
.L_80194E38:
/* 80194E38 00191D78  80 7E 00 04 */	lwz r3, 4(r30)
/* 80194E3C 00191D7C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194E40 00191D80  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80194E44 00191D84  7D 89 03 A6 */	mtctr r12
/* 80194E48 00191D88  4E 80 04 21 */	bctrl 
/* 80194E4C 00191D8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194E50 00191D90  41 82 00 28 */	beq .L_80194E78
/* 80194E54 00191D94  80 7E 00 04 */	lwz r3, 4(r30)
/* 80194E58 00191D98  81 83 00 00 */	lwz r12, 0(r3)
/* 80194E5C 00191D9C  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80194E60 00191DA0  7D 89 03 A6 */	mtctr r12
/* 80194E64 00191DA4  4E 80 04 21 */	bctrl 
/* 80194E68 00191DA8  7C 64 1B 78 */	mr r4, r3
/* 80194E6C 00191DAC  7F E3 FB 78 */	mr r3, r31
/* 80194E70 00191DB0  4B FB 5C 4D */	bl setTekiKillID__Q24Game4PikiFi
/* 80194E74 00191DB4  48 00 00 0C */	b .L_80194E80
.L_80194E78:
/* 80194E78 00191DB8  38 00 FF FF */	li r0, -1
/* 80194E7C 00191DBC  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
.L_80194E80:
/* 80194E80 00191DC0  93 A1 00 08 */	stw r29, 8(r1)
/* 80194E84 00191DC4  7F E3 FB 78 */	mr r3, r31
/* 80194E88 00191DC8  38 80 28 09 */	li r4, 0x2809
/* 80194E8C 00191DCC  38 A0 00 00 */	li r5, 0
/* 80194E90 00191DD0  4B FB 3A 3D */	bl startSound__Q24Game4PikiFUlb
/* 80194E94 00191DD4  80 7F 02 8C */	lwz r3, 0x28c(r31)
/* 80194E98 00191DD8  7F E4 FB 78 */	mr r4, r31
/* 80194E9C 00191DDC  38 C1 00 08 */	addi r6, r1, 8
/* 80194EA0 00191DE0  38 A0 00 0B */	li r5, 0xb
/* 80194EA4 00191DE4  81 83 00 00 */	lwz r12, 0(r3)
/* 80194EA8 00191DE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80194EAC 00191DEC  7D 89 03 A6 */	mtctr r12
/* 80194EB0 00191DF0  4E 80 04 21 */	bctrl 
/* 80194EB4 00191DF4  38 60 00 01 */	li r3, 1
/* 80194EB8 00191DF8  48 00 00 08 */	b .L_80194EC0
.L_80194EBC:
/* 80194EBC 00191DFC  38 60 00 00 */	li r3, 0
.L_80194EC0:
/* 80194EC0 00191E00  E3 E1 00 78 */	psq_l f31, 120(r1), 0, qr0
/* 80194EC4 00191E04  CB E1 00 70 */	lfd f31, 0x70(r1)
/* 80194EC8 00191E08  E3 C1 00 68 */	psq_l f30, 104(r1), 0, qr0
/* 80194ECC 00191E0C  CB C1 00 60 */	lfd f30, 0x60(r1)
/* 80194ED0 00191E10  E3 A1 00 58 */	psq_l f29, 88(r1), 0, qr0
/* 80194ED4 00191E14  CB A1 00 50 */	lfd f29, 0x50(r1)
/* 80194ED8 00191E18  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 80194EDC 00191E1C  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 80194EE0 00191E20  80 01 00 84 */	lwz r0, 0x84(r1)
/* 80194EE4 00191E24  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 80194EE8 00191E28  7C 08 03 A6 */	mtlr r0
/* 80194EEC 00191E2C  38 21 00 80 */	addi r1, r1, 0x80
/* 80194EF0 00191E30  4E 80 00 20 */	blr 

.global actPiki__Q24Game12InteractKillFPQ24Game4Piki
actPiki__Q24Game12InteractKillFPQ24Game4Piki:
/* 80194EF4 00191E34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80194EF8 00191E38  7C 08 02 A6 */	mflr r0
/* 80194EFC 00191E3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80194F00 00191E40  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80194F04 00191E44  7C 9F 23 78 */	mr r31, r4
/* 80194F08 00191E48  93 C1 00 08 */	stw r30, 8(r1)
/* 80194F0C 00191E4C  7C 7E 1B 78 */	mr r30, r3
/* 80194F10 00191E50  80 63 00 08 */	lwz r3, 8(r3)
/* 80194F14 00191E54  28 03 00 00 */	cmplwi r3, 0
/* 80194F18 00191E58  41 82 00 14 */	beq .L_80194F2C
/* 80194F1C 00191E5C  41 82 00 7C */	beq .L_80194F98
/* 80194F20 00191E60  80 03 00 04 */	lwz r0, 4(r3)
/* 80194F24 00191E64  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 80194F28 00191E68  40 82 00 70 */	bne .L_80194F98
.L_80194F2C:
/* 80194F2C 00191E6C  80 7E 00 04 */	lwz r3, 4(r30)
/* 80194F30 00191E70  81 83 00 00 */	lwz r12, 0(r3)
/* 80194F34 00191E74  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 80194F38 00191E78  7D 89 03 A6 */	mtctr r12
/* 80194F3C 00191E7C  4E 80 04 21 */	bctrl 
/* 80194F40 00191E80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194F44 00191E84  41 82 00 28 */	beq .L_80194F6C
/* 80194F48 00191E88  80 7E 00 04 */	lwz r3, 4(r30)
/* 80194F4C 00191E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 80194F50 00191E90  81 8C 02 58 */	lwz r12, 0x258(r12)
/* 80194F54 00191E94  7D 89 03 A6 */	mtctr r12
/* 80194F58 00191E98  4E 80 04 21 */	bctrl 
/* 80194F5C 00191E9C  7C 64 1B 78 */	mr r4, r3
/* 80194F60 00191EA0  7F E3 FB 78 */	mr r3, r31
/* 80194F64 00191EA4  4B FB 5B 59 */	bl setTekiKillID__Q24Game4PikiFi
/* 80194F68 00191EA8  48 00 00 0C */	b .L_80194F74
.L_80194F6C:
/* 80194F6C 00191EAC  38 00 FF FF */	li r0, -1
/* 80194F70 00191EB0  B0 1F 02 A4 */	sth r0, 0x2a4(r31)
.L_80194F74:
/* 80194F74 00191EB4  7F E3 FB 78 */	mr r3, r31
/* 80194F78 00191EB8  81 9F 00 00 */	lwz r12, 0(r31)
/* 80194F7C 00191EBC  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 80194F80 00191EC0  7D 89 03 A6 */	mtctr r12
/* 80194F84 00191EC4  4E 80 04 21 */	bctrl 
/* 80194F88 00191EC8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80194F8C 00191ECC  41 82 00 0C */	beq .L_80194F98
/* 80194F90 00191ED0  38 60 00 00 */	li r3, 0
/* 80194F94 00191ED4  48 09 B7 85 */	bl inc__Q24Game8DeathMgrFi
.L_80194F98:
/* 80194F98 00191ED8  80 9E 00 08 */	lwz r4, 8(r30)
/* 80194F9C 00191EDC  7F E3 FB 78 */	mr r3, r31
/* 80194FA0 00191EE0  4B FA 61 51 */	bl kill__Q24Game8CreatureFPQ24Game15CreatureKillArg
/* 80194FA4 00191EE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80194FA8 00191EE8  38 60 00 01 */	li r3, 1
/* 80194FAC 00191EEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80194FB0 00191EF0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80194FB4 00191EF4  7C 08 03 A6 */	mtlr r0
/* 80194FB8 00191EF8  38 21 00 10 */	addi r1, r1, 0x10
/* 80194FBC 00191EFC  4E 80 00 20 */	blr 

.global getName__Q26PikiAI12ActBattleArgFv
getName__Q26PikiAI12ActBattleArgFv: # weak function
/* 80194FC0 00191F00  3C 60 80 48 */	lis r3, lbl_8047EF40@ha
/* 80194FC4 00191F04  38 63 EF 40 */	addi r3, r3, lbl_8047EF40@l
/* 80194FC8 00191F08  4E 80 00 20 */	blr 

__sinit_interactPiki_cpp: # static initializer
/* 80194FCC 00191F0C  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80194FD0 00191F10  38 00 FF FF */	li r0, -1
/* 80194FD4 00191F14  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80194FD8 00191F18  3C 60 80 4B */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80194FDC 00191F1C  90 0D 93 48 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80194FE0 00191F20  D4 03 47 D0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80194FE4 00191F24  D0 0D 93 4C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80194FE8 00191F28  D0 03 00 04 */	stfs f0, 4(r3)
/* 80194FEC 00191F2C  D0 03 00 08 */	stfs f0, 8(r3)
/* 80194FF0 00191F30  4E 80 00 20 */	blr 
