.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00

.global actCommon__Q24Game14InteractAttackFPQ24Game8Creature
actCommon__Q24Game14InteractAttackFPQ24Game8Creature:
/* 8019FEBC 0019CDFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019FEC0 0019CE00  7C 08 02 A6 */	mflr r0
/* 8019FEC4 0019CE04  90 01 00 14 */	stw r0, 0x14(r1)
/* 8019FEC8 0019CE08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019FECC 0019CE0C  7C 9F 23 78 */	mr r31, r4
/* 8019FED0 0019CE10  80 63 00 04 */	lwz r3, 4(r3)
/* 8019FED4 0019CE14  81 83 00 00 */	lwz r12, 0(r3)
/* 8019FED8 0019CE18  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8019FEDC 0019CE1C  7D 89 03 A6 */	mtctr r12
/* 8019FEE0 0019CE20  4E 80 04 21 */	bctrl 
/* 8019FEE4 0019CE24  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019FEE8 0019CE28  41 82 00 28 */	beq lbl_8019FF10
/* 8019FEEC 0019CE2C  7F E3 FB 78 */	mr r3, r31
/* 8019FEF0 0019CE30  81 9F 00 00 */	lwz r12, 0(r31)
/* 8019FEF4 0019CE34  81 8C 00 7C */	lwz r12, 0x7c(r12)
/* 8019FEF8 0019CE38  7D 89 03 A6 */	mtctr r12
/* 8019FEFC 0019CE3C  4E 80 04 21 */	bctrl 
/* 8019FF00 0019CE40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8019FF04 0019CE44  40 82 00 0C */	bne lbl_8019FF10
/* 8019FF08 0019CE48  38 60 00 00 */	li r3, 0
/* 8019FF0C 0019CE4C  48 00 00 08 */	b lbl_8019FF14
lbl_8019FF10:
/* 8019FF10 0019CE50  38 60 00 01 */	li r3, 1
lbl_8019FF14:
/* 8019FF14 0019CE54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019FF18 0019CE58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8019FF1C 0019CE5C  7C 08 03 A6 */	mtlr r0
/* 8019FF20 0019CE60  38 21 00 10 */	addi r1, r1, 0x10
/* 8019FF24 0019CE64  4E 80 00 20 */	blr 

.global actCommon__Q24Game15InteractSwallowFPQ24Game8Creature
actCommon__Q24Game15InteractSwallowFPQ24Game8Creature:
/* 8019FF28 0019CE68  38 60 00 01 */	li r3, 1
/* 8019FF2C 0019CE6C  4E 80 00 20 */	blr 

.global actCommon__Q24Game12InteractKillFPQ24Game8Creature
actCommon__Q24Game12InteractKillFPQ24Game8Creature:
/* 8019FF30 0019CE70  38 60 00 01 */	li r3, 1
/* 8019FF34 0019CE74  4E 80 00 20 */	blr 
