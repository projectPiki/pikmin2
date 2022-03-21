.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
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

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global actEnemy__Q24Game15InteractHipdropFPQ24Game9EnemyBase
actEnemy__Q24Game15InteractHipdropFPQ24Game9EnemyBase:
/* 8010BA00 00108940  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010BA04 00108944  7C 08 02 A6 */	mflr r0
/* 8010BA08 00108948  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010BA0C 0010894C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8010BA10 00108950  7C 9F 23 78 */	mr r31, r4
/* 8010BA14 00108954  93 C1 00 08 */	stw r30, 8(r1)
/* 8010BA18 00108958  7C 7E 1B 78 */	mr r30, r3
/* 8010BA1C 0010895C  7F E3 FB 78 */	mr r3, r31
/* 8010BA20 00108960  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010BA24 00108964  80 9E 00 04 */	lwz r4, 4(r30)
/* 8010BA28 00108968  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 8010BA2C 0010896C  C0 3E 00 08 */	lfs f1, 8(r30)
/* 8010BA30 00108970  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8010BA34 00108974  7D 89 03 A6 */	mtctr r12
/* 8010BA38 00108978  4E 80 04 21 */	bctrl 
/* 8010BA3C 0010897C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8010BA40 00108980  40 82 00 24 */	bne lbl_8010BA64
/* 8010BA44 00108984  7F E3 FB 78 */	mr r3, r31
/* 8010BA48 00108988  80 9E 00 04 */	lwz r4, 4(r30)
/* 8010BA4C 0010898C  81 9F 00 00 */	lwz r12, 0(r31)
/* 8010BA50 00108990  C0 3E 00 08 */	lfs f1, 8(r30)
/* 8010BA54 00108994  81 8C 02 84 */	lwz r12, 0x284(r12)
/* 8010BA58 00108998  80 BE 00 0C */	lwz r5, 0xc(r30)
/* 8010BA5C 0010899C  7D 89 03 A6 */	mtctr r12
/* 8010BA60 001089A0  4E 80 04 21 */	bctrl 
lbl_8010BA64:
/* 8010BA64 001089A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010BA68 001089A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8010BA6C 001089AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 8010BA70 001089B0  7C 08 03 A6 */	mtlr r0
/* 8010BA74 001089B4  38 21 00 10 */	addi r1, r1, 0x10
/* 8010BA78 001089B8  4E 80 00 20 */	blr 

.global actEnemy__Q24Game18InteractEarthquakeFPQ24Game9EnemyBase
actEnemy__Q24Game18InteractEarthquakeFPQ24Game9EnemyBase:
/* 8010BA7C 001089BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8010BA80 001089C0  7C 08 02 A6 */	mflr r0
/* 8010BA84 001089C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010BA88 001089C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010BA8C 001089CC  3B E0 00 00 */	li r31, 0
/* 8010BA90 001089D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8010BA94 001089D4  7C 9E 23 78 */	mr r30, r4
/* 8010BA98 001089D8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8010BA9C 001089DC  7C 7D 1B 78 */	mr r29, r3
/* 8010BAA0 001089E0  7F C3 F3 78 */	mr r3, r30
/* 8010BAA4 001089E4  4B FF A8 B1 */	bl checkBirthTypeDropEarthquake__Q24Game9EnemyBaseFv
/* 8010BAA8 001089E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8010BAAC 001089EC  40 82 00 24 */	bne lbl_8010BAD0
/* 8010BAB0 001089F0  7F C3 F3 78 */	mr r3, r30
/* 8010BAB4 001089F4  80 9D 00 04 */	lwz r4, 4(r29)
/* 8010BAB8 001089F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010BABC 001089FC  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8010BAC0 00108A00  81 8C 02 8C */	lwz r12, 0x28c(r12)
/* 8010BAC4 00108A04  7D 89 03 A6 */	mtctr r12
/* 8010BAC8 00108A08  4E 80 04 21 */	bctrl 
/* 8010BACC 00108A0C  7C 7F 1B 78 */	mr r31, r3
lbl_8010BAD0:
/* 8010BAD0 00108A10  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010BAD4 00108A14  7F E3 FB 78 */	mr r3, r31
/* 8010BAD8 00108A18  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010BADC 00108A1C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8010BAE0 00108A20  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8010BAE4 00108A24  7C 08 03 A6 */	mtlr r0
/* 8010BAE8 00108A28  38 21 00 20 */	addi r1, r1, 0x20
/* 8010BAEC 00108A2C  4E 80 00 20 */	blr 

.global actEnemy__Q24Game13InteractPressFPQ24Game9EnemyBase
actEnemy__Q24Game13InteractPressFPQ24Game9EnemyBase:
/* 8010BAF0 00108A30  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010BAF4 00108A34  7C 08 02 A6 */	mflr r0
/* 8010BAF8 00108A38  7C 65 1B 78 */	mr r5, r3
/* 8010BAFC 00108A3C  7C 83 23 78 */	mr r3, r4
/* 8010BB00 00108A40  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010BB04 00108A44  81 83 00 00 */	lwz r12, 0(r3)
/* 8010BB08 00108A48  80 85 00 04 */	lwz r4, 4(r5)
/* 8010BB0C 00108A4C  81 8C 02 7C */	lwz r12, 0x27c(r12)
/* 8010BB10 00108A50  C0 25 00 08 */	lfs f1, 8(r5)
/* 8010BB14 00108A54  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8010BB18 00108A58  7D 89 03 A6 */	mtctr r12
/* 8010BB1C 00108A5C  4E 80 04 21 */	bctrl 
/* 8010BB20 00108A60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010BB24 00108A64  7C 08 03 A6 */	mtlr r0
/* 8010BB28 00108A68  38 21 00 10 */	addi r1, r1, 0x10
/* 8010BB2C 00108A6C  4E 80 00 20 */	blr 

.global actEnemy__Q24Game20InteractFlyCollisionFPQ24Game9EnemyBase
actEnemy__Q24Game20InteractFlyCollisionFPQ24Game9EnemyBase:
/* 8010BB30 00108A70  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010BB34 00108A74  7C 08 02 A6 */	mflr r0
/* 8010BB38 00108A78  7C 65 1B 78 */	mr r5, r3
/* 8010BB3C 00108A7C  7C 83 23 78 */	mr r3, r4
/* 8010BB40 00108A80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010BB44 00108A84  81 83 00 00 */	lwz r12, 0(r3)
/* 8010BB48 00108A88  80 85 00 04 */	lwz r4, 4(r5)
/* 8010BB4C 00108A8C  81 8C 02 80 */	lwz r12, 0x280(r12)
/* 8010BB50 00108A90  C0 25 00 08 */	lfs f1, 8(r5)
/* 8010BB54 00108A94  80 A5 00 0C */	lwz r5, 0xc(r5)
/* 8010BB58 00108A98  7D 89 03 A6 */	mtctr r12
/* 8010BB5C 00108A9C  4E 80 04 21 */	bctrl 
/* 8010BB60 00108AA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010BB64 00108AA4  7C 08 03 A6 */	mtlr r0
/* 8010BB68 00108AA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8010BB6C 00108AAC  4E 80 00 20 */	blr 

.global actEnemy__Q24Game14InteractAttackFPQ24Game9EnemyBase
actEnemy__Q24Game14InteractAttackFPQ24Game9EnemyBase:
/* 8010BB70 00108AB0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8010BB74 00108AB4  7C 08 02 A6 */	mflr r0
/* 8010BB78 00108AB8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010BB7C 00108ABC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010BB80 00108AC0  3B E0 00 00 */	li r31, 0
/* 8010BB84 00108AC4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8010BB88 00108AC8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8010BB8C 00108ACC  7C 9D 23 78 */	mr r29, r4
/* 8010BB90 00108AD0  93 81 00 10 */	stw r28, 0x10(r1)
/* 8010BB94 00108AD4  7C 7C 1B 78 */	mr r28, r3
/* 8010BB98 00108AD8  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 8010BB9C 00108ADC  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8010BBA0 00108AE0  40 82 00 C8 */	bne lbl_8010BC68
/* 8010BBA4 00108AE4  80 7C 00 04 */	lwz r3, 4(r28)
/* 8010BBA8 00108AE8  3B C0 00 00 */	li r30, 0
/* 8010BBAC 00108AEC  81 83 00 00 */	lwz r12, 0(r3)
/* 8010BBB0 00108AF0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 8010BBB4 00108AF4  7D 89 03 A6 */	mtctr r12
/* 8010BBB8 00108AF8  4E 80 04 21 */	bctrl 
/* 8010BBBC 00108AFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8010BBC0 00108B00  41 82 00 4C */	beq lbl_8010BC0C
/* 8010BBC4 00108B04  80 7C 00 04 */	lwz r3, 4(r28)
/* 8010BBC8 00108B08  A0 03 02 DC */	lhz r0, 0x2dc(r3)
/* 8010BBCC 00108B0C  28 00 00 00 */	cmplwi r0, 0
/* 8010BBD0 00108B10  40 82 00 20 */	bne lbl_8010BBF0
/* 8010BBD4 00108B14  80 7D 01 E0 */	lwz r3, 0x1e0(r29)
/* 8010BBD8 00108B18  54 60 03 DF */	rlwinm. r0, r3, 0, 0xf, 0xf
/* 8010BBDC 00108B1C  40 82 00 34 */	bne lbl_8010BC10
/* 8010BBE0 00108B20  64 60 00 01 */	oris r0, r3, 1
/* 8010BBE4 00108B24  3B C0 00 01 */	li r30, 1
/* 8010BBE8 00108B28  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 8010BBEC 00108B2C  48 00 00 24 */	b lbl_8010BC10
lbl_8010BBF0:
/* 8010BBF0 00108B30  80 7D 01 E0 */	lwz r3, 0x1e0(r29)
/* 8010BBF4 00108B34  54 60 03 9D */	rlwinm. r0, r3, 0, 0xe, 0xe
/* 8010BBF8 00108B38  40 82 00 18 */	bne lbl_8010BC10
/* 8010BBFC 00108B3C  64 60 00 02 */	oris r0, r3, 2
/* 8010BC00 00108B40  3B C0 00 01 */	li r30, 1
/* 8010BC04 00108B44  90 1D 01 E0 */	stw r0, 0x1e0(r29)
/* 8010BC08 00108B48  48 00 00 08 */	b lbl_8010BC10
lbl_8010BC0C:
/* 8010BC0C 00108B4C  3B C0 00 01 */	li r30, 1
lbl_8010BC10:
/* 8010BC10 00108B50  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 8010BC14 00108B54  41 82 00 54 */	beq lbl_8010BC68
/* 8010BC18 00108B58  80 1D 01 E0 */	lwz r0, 0x1e0(r29)
/* 8010BC1C 00108B5C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 8010BC20 00108B60  41 82 00 24 */	beq lbl_8010BC44
/* 8010BC24 00108B64  7F A3 EB 78 */	mr r3, r29
/* 8010BC28 00108B68  81 9D 00 00 */	lwz r12, 0(r29)
/* 8010BC2C 00108B6C  81 8C 02 AC */	lwz r12, 0x2ac(r12)
/* 8010BC30 00108B70  7D 89 03 A6 */	mtctr r12
/* 8010BC34 00108B74  4E 80 04 21 */	bctrl 
/* 8010BC38 00108B78  C0 1C 00 08 */	lfs f0, 8(r28)
/* 8010BC3C 00108B7C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8010BC40 00108B80  D0 1C 00 08 */	stfs f0, 8(r28)
lbl_8010BC44:
/* 8010BC44 00108B84  7F A3 EB 78 */	mr r3, r29
/* 8010BC48 00108B88  80 9C 00 04 */	lwz r4, 4(r28)
/* 8010BC4C 00108B8C  81 9D 00 00 */	lwz r12, 0(r29)
/* 8010BC50 00108B90  C0 3C 00 08 */	lfs f1, 8(r28)
/* 8010BC54 00108B94  81 8C 02 78 */	lwz r12, 0x278(r12)
/* 8010BC58 00108B98  80 BC 00 0C */	lwz r5, 0xc(r28)
/* 8010BC5C 00108B9C  7D 89 03 A6 */	mtctr r12
/* 8010BC60 00108BA0  4E 80 04 21 */	bctrl 
/* 8010BC64 00108BA4  7C 7F 1B 78 */	mr r31, r3
lbl_8010BC68:
/* 8010BC68 00108BA8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010BC6C 00108BAC  7F E3 FB 78 */	mr r3, r31
/* 8010BC70 00108BB0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010BC74 00108BB4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8010BC78 00108BB8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8010BC7C 00108BBC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8010BC80 00108BC0  7C 08 03 A6 */	mtlr r0
/* 8010BC84 00108BC4  38 21 00 20 */	addi r1, r1, 0x20
/* 8010BC88 00108BC8  4E 80 00 20 */	blr 

.global actEnemy__Q24Game12InteractDropFPQ24Game9EnemyBase
actEnemy__Q24Game12InteractDropFPQ24Game9EnemyBase:
/* 8010BC8C 00108BCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8010BC90 00108BD0  7C 08 02 A6 */	mflr r0
/* 8010BC94 00108BD4  7C 65 1B 78 */	mr r5, r3
/* 8010BC98 00108BD8  7C 83 23 78 */	mr r3, r4
/* 8010BC9C 00108BDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8010BCA0 00108BE0  81 83 00 00 */	lwz r12, 0(r3)
/* 8010BCA4 00108BE4  80 85 00 04 */	lwz r4, 4(r5)
/* 8010BCA8 00108BE8  81 8C 02 88 */	lwz r12, 0x288(r12)
/* 8010BCAC 00108BEC  7D 89 03 A6 */	mtctr r12
/* 8010BCB0 00108BF0  4E 80 04 21 */	bctrl 
/* 8010BCB4 00108BF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8010BCB8 00108BF8  7C 08 03 A6 */	mtlr r0
/* 8010BCBC 00108BFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8010BCC0 00108C00  4E 80 00 20 */	blr 

.global actEnemy__Q24Game12InteractBombFPQ24Game9EnemyBase
actEnemy__Q24Game12InteractBombFPQ24Game9EnemyBase:
/* 8010BCC4 00108C04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8010BCC8 00108C08  7C 08 02 A6 */	mflr r0
/* 8010BCCC 00108C0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8010BCD0 00108C10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8010BCD4 00108C14  3B E0 00 00 */	li r31, 0
/* 8010BCD8 00108C18  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8010BCDC 00108C1C  7C 9E 23 78 */	mr r30, r4
/* 8010BCE0 00108C20  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8010BCE4 00108C24  7C 7D 1B 78 */	mr r29, r3
/* 8010BCE8 00108C28  7F C3 F3 78 */	mr r3, r30
/* 8010BCEC 00108C2C  4B FF A6 29 */	bl isBeforeAppearState__Q24Game9EnemyBaseFv
/* 8010BCF0 00108C30  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8010BCF4 00108C34  40 82 00 28 */	bne lbl_8010BD1C
/* 8010BCF8 00108C38  7F C3 F3 78 */	mr r3, r30
/* 8010BCFC 00108C3C  38 BD 00 0C */	addi r5, r29, 0xc
/* 8010BD00 00108C40  81 9E 00 00 */	lwz r12, 0(r30)
/* 8010BD04 00108C44  80 9D 00 04 */	lwz r4, 4(r29)
/* 8010BD08 00108C48  81 8C 02 94 */	lwz r12, 0x294(r12)
/* 8010BD0C 00108C4C  C0 3D 00 08 */	lfs f1, 8(r29)
/* 8010BD10 00108C50  7D 89 03 A6 */	mtctr r12
/* 8010BD14 00108C54  4E 80 04 21 */	bctrl 
/* 8010BD18 00108C58  7C 7F 1B 78 */	mr r31, r3
lbl_8010BD1C:
/* 8010BD1C 00108C5C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8010BD20 00108C60  7F E3 FB 78 */	mr r3, r31
/* 8010BD24 00108C64  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8010BD28 00108C68  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8010BD2C 00108C6C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8010BD30 00108C70  7C 08 03 A6 */	mtlr r0
/* 8010BD34 00108C74  38 21 00 20 */	addi r1, r1, 0x20
/* 8010BD38 00108C78  4E 80 00 20 */	blr 
