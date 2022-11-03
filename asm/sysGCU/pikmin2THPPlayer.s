.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8049B510:
	.asciz "/thp/opening1.thp"
.balign 4
lbl_8049B524:
	.asciz "/thp/opening1.ini"
.balign 4
lbl_8049B538:
	.asciz "/thp/opening2.thp"
.balign 4
lbl_8049B54C:
	.asciz "/thp/opening2.ini"
.balign 4
lbl_8049B560:
	.asciz "/thp/ending1.thp"
.balign 4
lbl_8049B574:
	.asciz "/thp/ending1.ini"
.balign 4
lbl_8049B588:
	.asciz "/thp/ending2.thp"
.balign 4
lbl_8049B59C:
	.asciz "/thp/staffroll.thp"
.balign 4
.if version == 1
lbl_8049B5B0:
	.asciz "/thp/play1.thp"
.balign 4
lbl_8049B5C0:
	.asciz "/thp/play1.ini"
.balign 4
lbl_8049B5D0:
	.asciz "/thp/play2.thp"
.balign 4
lbl_8049B5E0:
	.asciz "/thp/play2.ini"
.balign 4
lbl_8049B5F0:
	.asciz "/thp/play3.thp"
.balign 4
lbl_8049B600:
	.asciz "/thp/play3.ini"
.balign 4
lbl_8049B610:
	.asciz "/thp/play4.thp"
.balign 4
lbl_8049B620:
	.asciz "/thp/play4.ini"
.balign 4
lbl_demoPlay5thp:
	.asciz "/thp/play5.thp"
.balign 4
lbl_demoPlay5ini:
	.asciz "/thp/play5.ini"
.balign 4
lbl_demoPlay6thp:
	.asciz "/thp/play6.thp"
.balign 4
lbl_demoPlay6ini:
	.asciz "/thp/play6.ini"
.balign 4
lbl_demoCrimethp:
	.asciz "/thp/crime.thp"
.balign 4
lbl_demoCrimeini:
	.asciz "/thp/crime.ini"
.balign 4
"sTHPFileSettingTable__Q24Game30@unnamed@pikmin2THPPlayer_cpp@":
	.4byte lbl_8049B510
	.4byte lbl_8049B524
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte lbl_8049B538
	.4byte lbl_8049B54C
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte lbl_8049B560
	.4byte lbl_8049B574
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte lbl_8049B588
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte lbl_8049B59C
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000004
	.4byte lbl_8049B5B0
	.4byte lbl_8049B5C0
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte lbl_8049B5D0
	.4byte lbl_8049B5E0
	.4byte 0x00000000
	.4byte 0x00000006
	.4byte lbl_8049B5F0
	.4byte lbl_8049B600
	.4byte 0x00000000
	.4byte 0x00000007
	.4byte lbl_8049B610
	.4byte lbl_8049B620
	.4byte 0x00000000
	.4byte 0x00000008
	.4byte lbl_demoPlay5thp
	.4byte lbl_demoPlay5ini
	.4byte 0x00000000
	.4byte 0x00000009
	.4byte lbl_demoPlay6thp
	.4byte lbl_demoPlay6ini
	.4byte 0x00000000
	.4byte 0x0000000A
	.4byte lbl_demoCrimethp
	.4byte lbl_demoCrimeini
	.4byte 0x00000000
	.4byte 0x0000000B
.else
lbl_8049B5B0:
	.asciz "/thp/play1.thp"
.balign 4
lbl_8049B5C0:
	.asciz "/thp/play2.thp"
.balign 4
lbl_8049B5D0:
	.asciz "/thp/play3.thp"
.balign 4
lbl_8049B5E0:
	.asciz "/thp/play4.thp"
.balign 4
lbl_8049B5F0:
	.asciz "/thp/play5.thp"
.balign 4
lbl_8049B600:
	.asciz "/thp/play6.thp"
.balign 4
lbl_8049B610:
	.asciz "/thp/crime.thp"
.balign 4
lbl_8049B620:
	.asciz "/thp/crime.ini"
.balign 4
"sTHPFileSettingTable__Q24Game30@unnamed@pikmin2THPPlayer_cpp@":
	.4byte lbl_8049B510
	.4byte lbl_8049B524
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte lbl_8049B538
	.4byte lbl_8049B54C
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte lbl_8049B560
	.4byte lbl_8049B574
	.4byte 0x00000000
	.4byte 0x00000002
	.4byte lbl_8049B588
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000003
	.4byte lbl_8049B59C
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000004
	.4byte lbl_8049B5B0
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000005
	.4byte lbl_8049B5C0
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000006
	.4byte lbl_8049B5D0
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000007
	.4byte lbl_8049B5E0
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000008
	.4byte lbl_8049B5F0
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x00000009
	.4byte lbl_8049B600
	.4byte lbl_80520B10
	.4byte 0x00000000
	.4byte 0x0000000A
	.4byte lbl_8049B610
	.4byte lbl_8049B620
	.4byte 0x00000000
	.4byte 0x0000000B
.endif
lbl_8049B6F0:
	.asciz "THPPlayer"
.balign 4
lbl_8049B6FC:
	.asciz "pikmin2THPPlayer.cpp"
.balign 4
lbl_8049B714:
	.asciz "P2Assert"
.balign 4
lbl_8049B720:
	.asciz "THPPlayerInit failure."
.balign 4
lbl_8049B738:
	.asciz "THPPlayer::loadResource"
.balign 4
lbl_8049B750:
	.asciz "THPPlayer_Resource"
.balign 4
lbl_8049B764:
	.asciz "THPPlayr_caption"
.balign 4
lbl_8049B778:
	.asciz "fail to open the caption file\n[%s]\n"
.balign 4
lbl_8049B79C:
	.asciz "THPPlayerOpen"
.balign 4
lbl_8049B7AC:
	.asciz "Fail to open the thp file\n[%s]\n"
.balign 4
lbl_8049B7CC:
	.asciz "THPPlayer_prepare"
.balign 4
lbl_8049B7E0:
	.asciz "THPPlayer_work"
.balign 4
lbl_8049B7F0:
	.asciz "Can't allocate the memory"
.balign 4
lbl_8049B80C:
	.asciz "Fail to prepare\n"
.balign 4
lbl_8049B820:
	.asciz "PSSystemIF.h"
.balign 4
lbl_8049B830:
	.asciz "Unknown State : %d \n"

.section .data, "wa"	# 0x8049E220 - 0x804EFC20
.balign 8
lbl_804ED4C0:
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte loadResource__Q24Game9THPPlayerFv
.global __vt__Q24Game9THPPlayer
__vt__Q24Game9THPPlayer:
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game9THPPlayerFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q24Game9THPPlayerFv"
	.4byte getChildCount__5CNodeFv
	.4byte update__Q24Game9THPPlayerFv
	.4byte draw__Q24Game9THPPlayerFR8Graphics
	.4byte draw__Q24Game9THPPlayerFR8GraphicsllUlUl
	.4byte draw__Q24Game9THPPlayerFR8Graphicsllf
.global "__vt__27Delegate<Q24Game9THPPlayer>"
"__vt__27Delegate<Q24Game9THPPlayer>":
	.4byte 0
	.4byte 0
	.4byte "invoke__27Delegate<Q24Game9THPPlayer>Fv"

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520B10:
	.asciz ""
.balign 4
lbl_80520B14:
	.float 127.0
.balign 8
lbl_80520B18:
	.4byte 0x43300000
	.4byte 0x00000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q24Game9THPPlayerFv
__ct__Q24Game9THPPlayerFv:
/* 8044FDF0 0044CD30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044FDF4 0044CD34  7C 08 02 A6 */	mflr r0
/* 8044FDF8 0044CD38  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044FDFC 0044CD3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044FE00 0044CD40  7C 7F 1B 78 */	mr r31, r3
/* 8044FE04 0044CD44  4B BC D1 C9 */	bl __ct__11JKRDisposerFv
/* 8044FE08 0044CD48  3C 60 80 4F */	lis r3, __vt__5CNode@ha
/* 8044FE0C 0044CD4C  3C 80 80 4A */	lis r4, lbl_8049B6F0@ha
/* 8044FE10 0044CD50  38 03 B5 28 */	addi r0, r3, __vt__5CNode@l
/* 8044FE14 0044CD54  3C 60 80 4F */	lis r3, __vt__Q24Game9THPPlayer@ha
/* 8044FE18 0044CD58  90 1F 00 18 */	stw r0, 0x18(r31)
/* 8044FE1C 0044CD5C  38 E0 00 00 */	li r7, 0
/* 8044FE20 0044CD60  38 A3 D4 CC */	addi r5, r3, __vt__Q24Game9THPPlayer@l
/* 8044FE24 0044CD64  38 C4 B6 F0 */	addi r6, r4, lbl_8049B6F0@l
/* 8044FE28 0044CD68  90 FF 00 28 */	stw r7, 0x28(r31)
/* 8044FE2C 0044CD6C  38 85 00 0C */	addi r4, r5, 0xc
/* 8044FE30 0044CD70  38 00 FF FF */	li r0, -1
/* 8044FE34 0044CD74  38 7F 00 5C */	addi r3, r31, 0x5c
/* 8044FE38 0044CD78  90 FF 00 24 */	stw r7, 0x24(r31)
/* 8044FE3C 0044CD7C  90 FF 00 20 */	stw r7, 0x20(r31)
/* 8044FE40 0044CD80  90 FF 00 1C */	stw r7, 0x1c(r31)
/* 8044FE44 0044CD84  90 DF 00 2C */	stw r6, 0x2c(r31)
/* 8044FE48 0044CD88  90 BF 00 00 */	stw r5, 0(r31)
/* 8044FE4C 0044CD8C  90 9F 00 18 */	stw r4, 0x18(r31)
/* 8044FE50 0044CD90  90 FF 00 30 */	stw r7, 0x30(r31)
/* 8044FE54 0044CD94  90 1F 00 34 */	stw r0, 0x34(r31)
/* 8044FE58 0044CD98  90 FF 00 58 */	stw r7, 0x58(r31)
/* 8044FE5C 0044CD9C  4B FD 49 BD */	bl __ct__16DvdThreadCommandFv
/* 8044FE60 0044CDA0  3C 60 80 4F */	lis r3, lbl_804ED4C0@ha
/* 8044FE64 0044CDA4  3C 80 80 4B */	lis r4, __vt__9IDelegate@ha
/* 8044FE68 0044CDA8  38 E3 D4 C0 */	addi r7, r3, lbl_804ED4C0@l
/* 8044FE6C 0044CDAC  3C 60 80 4F */	lis r3, "__vt__27Delegate<Q24Game9THPPlayer>"@ha
/* 8044FE70 0044CDB0  81 27 00 00 */	lwz r9, 0(r7)
/* 8044FE74 0044CDB4  38 C4 0F 00 */	addi r6, r4, __vt__9IDelegate@l
/* 8044FE78 0044CDB8  81 07 00 04 */	lwz r8, 4(r7)
/* 8044FE7C 0044CDBC  38 A3 D4 F8 */	addi r5, r3, "__vt__27Delegate<Q24Game9THPPlayer>"@l
/* 8044FE80 0044CDC0  80 E7 00 08 */	lwz r7, 8(r7)
/* 8044FE84 0044CDC4  38 80 00 00 */	li r4, 0
/* 8044FE88 0044CDC8  38 00 00 01 */	li r0, 1
/* 8044FE8C 0044CDCC  91 21 00 08 */	stw r9, 8(r1)
/* 8044FE90 0044CDD0  38 60 00 24 */	li r3, 0x24
/* 8044FE94 0044CDD4  90 DF 00 C8 */	stw r6, 0xc8(r31)
/* 8044FE98 0044CDD8  90 BF 00 C8 */	stw r5, 0xc8(r31)
/* 8044FE9C 0044CDDC  93 FF 00 CC */	stw r31, 0xcc(r31)
/* 8044FEA0 0044CDE0  91 3F 00 D0 */	stw r9, 0xd0(r31)
/* 8044FEA4 0044CDE4  91 1F 00 D4 */	stw r8, 0xd4(r31)
/* 8044FEA8 0044CDE8  90 FF 00 D8 */	stw r7, 0xd8(r31)
/* 8044FEAC 0044CDEC  90 9F 00 DC */	stw r4, 0xdc(r31)
/* 8044FEB0 0044CDF0  90 9F 00 E0 */	stw r4, 0xe0(r31)
/* 8044FEB4 0044CDF4  98 9F 00 E4 */	stb r4, 0xe4(r31)
/* 8044FEB8 0044CDF8  91 01 00 0C */	stw r8, 0xc(r1)
/* 8044FEBC 0044CDFC  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8044FEC0 0044CE00  98 1F 00 E8 */	stb r0, 0xe8(r31)
/* 8044FEC4 0044CE04  4B BD 3F E1 */	bl __nw__FUl
/* 8044FEC8 0044CE08  7C 60 1B 79 */	or. r0, r3, r3
/* 8044FECC 0044CE0C  41 82 00 0C */	beq .L_8044FED8
/* 8044FED0 0044CE10  48 00 0A 7D */	bl __ct__Q27Caption3MgrFv
/* 8044FED4 0044CE14  7C 60 1B 78 */	mr r0, r3
.L_8044FED8:
/* 8044FED8 0044CE18  90 1F 00 54 */	stw r0, 0x54(r31)
/* 8044FEDC 0044CE1C  38 7F 00 18 */	addi r3, r31, 0x18
/* 8044FEE0 0044CE20  80 9F 00 54 */	lwz r4, 0x54(r31)
/* 8044FEE4 0044CE24  4B FC 15 25 */	bl add__5CNodeFP5CNode
/* 8044FEE8 0044CE28  38 00 00 00 */	li r0, 0
/* 8044FEEC 0044CE2C  7F E3 FB 78 */	mr r3, r31
/* 8044FEF0 0044CE30  98 1F 00 E8 */	stb r0, 0xe8(r31)
/* 8044FEF4 0044CE34  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8044FEF8 0044CE38  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8044FEFC 0044CE3C  7C 08 03 A6 */	mtlr r0
/* 8044FF00 0044CE40  38 21 00 20 */	addi r1, r1, 0x20
/* 8044FF04 0044CE44  4E 80 00 20 */	blr 

.global __dt__Q24Game9THPPlayerFv
__dt__Q24Game9THPPlayerFv:
/* 8044FF08 0044CE48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8044FF0C 0044CE4C  7C 08 02 A6 */	mflr r0
/* 8044FF10 0044CE50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8044FF14 0044CE54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8044FF18 0044CE58  7C 9F 23 78 */	mr r31, r4
/* 8044FF1C 0044CE5C  93 C1 00 08 */	stw r30, 8(r1)
/* 8044FF20 0044CE60  7C 7E 1B 79 */	or. r30, r3, r3
/* 8044FF24 0044CE64  41 82 00 60 */	beq .L_8044FF84
/* 8044FF28 0044CE68  3C 60 80 4F */	lis r3, __vt__Q24Game9THPPlayer@ha
/* 8044FF2C 0044CE6C  38 63 D4 CC */	addi r3, r3, __vt__Q24Game9THPPlayer@l
/* 8044FF30 0044CE70  90 7E 00 00 */	stw r3, 0(r30)
/* 8044FF34 0044CE74  38 03 00 0C */	addi r0, r3, 0xc
/* 8044FF38 0044CE78  90 1E 00 18 */	stw r0, 0x18(r30)
/* 8044FF3C 0044CE7C  4B FF EB 1D */	bl THPPlayerStop
/* 8044FF40 0044CE80  4B FF E0 79 */	bl THPPlayerQuit
/* 8044FF44 0044CE84  34 1E 00 5C */	addic. r0, r30, 0x5c
/* 8044FF48 0044CE88  41 82 00 14 */	beq .L_8044FF5C
/* 8044FF4C 0044CE8C  34 7E 00 B8 */	addic. r3, r30, 0xb8
/* 8044FF50 0044CE90  41 82 00 0C */	beq .L_8044FF5C
/* 8044FF54 0044CE94  38 80 00 00 */	li r4, 0
/* 8044FF58 0044CE98  4B BD 68 79 */	bl __dt__10JSUPtrLinkFv
.L_8044FF5C:
/* 8044FF5C 0044CE9C  38 7E 00 18 */	addi r3, r30, 0x18
/* 8044FF60 0044CEA0  38 80 00 00 */	li r4, 0
/* 8044FF64 0044CEA4  4B FC 16 25 */	bl __dt__5CNodeFv
/* 8044FF68 0044CEA8  7F C3 F3 78 */	mr r3, r30
/* 8044FF6C 0044CEAC  38 80 00 00 */	li r4, 0
/* 8044FF70 0044CEB0  4B BC D0 C5 */	bl __dt__11JKRDisposerFv
/* 8044FF74 0044CEB4  7F E0 07 35 */	extsh. r0, r31
/* 8044FF78 0044CEB8  40 81 00 0C */	ble .L_8044FF84
/* 8044FF7C 0044CEBC  7F C3 F3 78 */	mr r3, r30
/* 8044FF80 0044CEC0  4B BD 41 35 */	bl __dl__FPv
.L_8044FF84:
/* 8044FF84 0044CEC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8044FF88 0044CEC8  7F C3 F3 78 */	mr r3, r30
/* 8044FF8C 0044CECC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8044FF90 0044CED0  83 C1 00 08 */	lwz r30, 8(r1)
/* 8044FF94 0044CED4  7C 08 03 A6 */	mtlr r0
/* 8044FF98 0044CED8  38 21 00 10 */	addi r1, r1, 0x10
/* 8044FF9C 0044CEDC  4E 80 00 20 */	blr 

.if version == 1
.global load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex:
/* 8044FFA0 0044CEE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044FFA4 0044CEE4  7C 08 02 A6 */	mflr r0
/* 8044FFA8 0044CEE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044FFAC 0044CEEC  38 00 00 00 */	li r0, 0
/* 8044FFB0 0044CEF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044FFB4 0044CEF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044FFB8 0044CEF8  7C 9E 23 79 */	or. r30, r4, r4
/* 8044FFBC 0044CEFC  3C 80 80 4A */	lis r4, lbl_8049B510@ha
/* 8044FFC0 0044CF00  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044FFC4 0044CF04  7C 7D 1B 78 */	mr r29, r3
/* 8044FFC8 0044CF08  3B E4 B5 10 */	addi r31, r4, lbl_8049B510@l
/* 8044FFCC 0044CF0C  41 80 00 10 */	blt .L_8044FFDC
/* 8044FFD0 0044CF10  2C 1E 00 0C */	cmpwi r30, 0xc
/* 8044FFD4 0044CF14  40 80 00 08 */	bge .L_8044FFDC
/* 8044FFD8 0044CF18  38 00 00 01 */	li r0, 1
.L_8044FFDC:
/* 8044FFDC 0044CF1C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8044FFE0 0044CF20  40 82 00 18 */	bne .L_8044FFF8
/* 8044FFE4 0044CF24  38 7F 01 EC */	addi r3, r31, 0x24c
/* 8044FFE8 0044CF28  38 BF 02 04 */	addi r5, r31, 0x264
/* 8044FFEC 0044CF2C  38 80 00 E3 */	li r4, 0xe9
/* 8044FFF0 0044CF30  4C C6 31 82 */	crclr 6
/* 8044FFF4 0044CF34  4B BD A6 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044FFF8:
/* 8044FFF8 0044CF38  57 C0 20 36 */	slwi r0, r30, 4
/* 8044FFFC 0044CF3C  3B DF 01 20 */	addi r30, r31, 0x180
/* 80450000 0044CF40  7F DE 02 14 */	add r30, r30, r0
/* 80450004 0044CF44  7F A3 EB 78 */	mr r3, r29
/* 80450008 0044CF48  80 1E 00 00 */	lwz r0, 0(r30)
/* 8045000C 0044CF4C  80 9E 00 04 */	lwz r4, 4(r30)
/* 80450010 0044CF50  90 1D 00 DC */	stw r0, 0xdc(r29)
/* 80450014 0044CF54  88 1E 00 08 */	lbz r0, 8(r30)
/* 80450018 0044CF58  90 9D 00 E0 */	stw r4, 0xe0(r29)
/* 8045001C 0044CF5C  98 1D 00 E4 */	stb r0, 0xe4(r29)
/* 80450020 0044CF60  48 00 00 4D */	bl load__Q24Game9THPPlayerFv
/* 80450024 0044CF64  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 80450028 0044CF68  2C 00 00 0C */	cmpwi r0, 0xc
/* 8045002C 0044CF6C  41 80 00 18 */	blt .L_80450044
/* 80450030 0044CF70  38 7F 01 EC */	addi r3, r31, 0x24c
/* 80450034 0044CF74  38 BF 02 04 */	addi r5, r31, 0x264
/* 80450038 0044CF78  38 80 00 EB */	li r4, 0xf1
/* 8045003C 0044CF7C  4C C6 31 82 */	crclr 6
/* 80450040 0044CF80  4B BD A6 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80450044:
/* 80450044 0044CF84  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 80450048 0044CF88  38 6D 9C C0 */	addi r3, r13, sTHPDinamicsProc__3PSM@sda21
/* 8045004C 0044CF8C  48 02 24 55 */	bl setSetting__Q23PSM15THPDinamicsProcFQ23PSM6THP_ID
/* 80450050 0044CF90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80450054 0044CF94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80450058 0044CF98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8045005C 0044CF9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80450060 0044CFA0  7C 08 03 A6 */	mtlr r0
/* 80450064 0044CFA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80450068 0044CFA8  4E 80 00 20 */	blr 
.else
.global load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex
load__Q24Game9THPPlayerFQ34Game9THPPlayer11EMovieIndex:
/* 8044FFA0 0044CEE0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8044FFA4 0044CEE4  7C 08 02 A6 */	mflr r0
/* 8044FFA8 0044CEE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 8044FFAC 0044CEEC  38 00 00 00 */	li r0, 0
/* 8044FFB0 0044CEF0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8044FFB4 0044CEF4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8044FFB8 0044CEF8  7C 9E 23 79 */	or. r30, r4, r4
/* 8044FFBC 0044CEFC  3C 80 80 4A */	lis r4, lbl_8049B510@ha
/* 8044FFC0 0044CF00  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8044FFC4 0044CF04  7C 7D 1B 78 */	mr r29, r3
/* 8044FFC8 0044CF08  3B E4 B5 10 */	addi r31, r4, lbl_8049B510@l
/* 8044FFCC 0044CF0C  41 80 00 10 */	blt .L_8044FFDC
/* 8044FFD0 0044CF10  2C 1E 00 0C */	cmpwi r30, 0xc
/* 8044FFD4 0044CF14  40 80 00 08 */	bge .L_8044FFDC
/* 8044FFD8 0044CF18  38 00 00 01 */	li r0, 1
.L_8044FFDC:
/* 8044FFDC 0044CF1C  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 8044FFE0 0044CF20  40 82 00 18 */	bne .L_8044FFF8
/* 8044FFE4 0044CF24  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 8044FFE8 0044CF28  38 BF 02 04 */	addi r5, r31, 0x204
/* 8044FFEC 0044CF2C  38 80 00 E3 */	li r4, 0xe3
/* 8044FFF0 0044CF30  4C C6 31 82 */	crclr 6
/* 8044FFF4 0044CF34  4B BD A6 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_8044FFF8:
/* 8044FFF8 0044CF38  57 C0 20 36 */	slwi r0, r30, 4
/* 8044FFFC 0044CF3C  3B DF 01 20 */	addi r30, r31, 0x120
/* 80450000 0044CF40  7F DE 02 14 */	add r30, r30, r0
/* 80450004 0044CF44  7F A3 EB 78 */	mr r3, r29
/* 80450008 0044CF48  80 1E 00 00 */	lwz r0, 0(r30)
/* 8045000C 0044CF4C  80 9E 00 04 */	lwz r4, 4(r30)
/* 80450010 0044CF50  90 1D 00 DC */	stw r0, 0xdc(r29)
/* 80450014 0044CF54  88 1E 00 08 */	lbz r0, 8(r30)
/* 80450018 0044CF58  90 9D 00 E0 */	stw r4, 0xe0(r29)
/* 8045001C 0044CF5C  98 1D 00 E4 */	stb r0, 0xe4(r29)
/* 80450020 0044CF60  48 00 00 4D */	bl load__Q24Game9THPPlayerFv
/* 80450024 0044CF64  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 80450028 0044CF68  2C 00 00 0C */	cmpwi r0, 0xc
/* 8045002C 0044CF6C  41 80 00 18 */	blt .L_80450044
/* 80450030 0044CF70  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 80450034 0044CF74  38 BF 02 04 */	addi r5, r31, 0x204
/* 80450038 0044CF78  38 80 00 EB */	li r4, 0xeb
/* 8045003C 0044CF7C  4C C6 31 82 */	crclr 6
/* 80450040 0044CF80  4B BD A6 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80450044:
/* 80450044 0044CF84  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 80450048 0044CF88  38 6D 9C C0 */	addi r3, r13, sTHPDinamicsProc__3PSM@sda21
/* 8045004C 0044CF8C  48 02 24 55 */	bl setSetting__Q23PSM15THPDinamicsProcFQ23PSM6THP_ID
/* 80450050 0044CF90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80450054 0044CF94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80450058 0044CF98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8045005C 0044CF9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80450060 0044CFA0  7C 08 03 A6 */	mtlr r0
/* 80450064 0044CFA4  38 21 00 20 */	addi r1, r1, 0x20
/* 80450068 0044CFA8  4E 80 00 20 */	blr 
.endif

.if version == 1
.global load__Q24Game9THPPlayerFv
load__Q24Game9THPPlayerFv:
/* 8045006C 0044CFAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80450070 0044CFB0  7C 08 02 A6 */	mflr r0
/* 80450074 0044CFB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80450078 0044CFB8  38 00 00 01 */	li r0, 1
/* 8045007C 0044CFBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80450080 0044CFC0  7C 7F 1B 78 */	mr r31, r3
/* 80450084 0044CFC4  90 03 00 30 */	stw r0, 0x30(r3)
/* 80450088 0044CFC8  38 60 00 00 */	li r3, 0
/* 8045008C 0044CFCC  4B FF DE 55 */	bl THPPlayerInit
/* 80450090 0044CFD0  2C 03 00 00 */	cmpwi r3, 0
/* 80450094 0044CFD4  40 82 00 20 */	bne .L_804500B4
/* 80450098 0044CFD8  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 8045009C 0044CFDC  3C A0 80 4A */	lis r5, lbl_8049B720@ha
/* 804500A0 0044CFE0  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 804500A4 0044CFE4  38 80 00 F7 */	li r4, 0xfd
/* 804500A8 0044CFE8  38 A5 B7 20 */	addi r5, r5, lbl_8049B720@l
/* 804500AC 0044CFEC  4C C6 31 82 */	crclr 6
/* 804500B0 0044CFF0  4B BD A5 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804500B4:
/* 804500B4 0044CFF4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804500B8 0044CFF8  38 9F 00 5C */	addi r4, r31, 0x5c
/* 804500BC 0044CFFC  38 BF 00 C8 */	addi r5, r31, 0xc8
/* 804500C0 0044D000  4B FD 2E 79 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 804500C4 0044D004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804500C8 0044D008  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804500CC 0044D00C  7C 08 03 A6 */	mtlr r0
/* 804500D0 0044D010  38 21 00 10 */	addi r1, r1, 0x10
/* 804500D4 0044D014  4E 80 00 20 */	blr 
.else
.global load__Q24Game9THPPlayerFv
load__Q24Game9THPPlayerFv:
/* 8045006C 0044CFAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80450070 0044CFB0  7C 08 02 A6 */	mflr r0
/* 80450074 0044CFB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80450078 0044CFB8  38 00 00 01 */	li r0, 1
/* 8045007C 0044CFBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80450080 0044CFC0  7C 7F 1B 78 */	mr r31, r3
/* 80450084 0044CFC4  90 03 00 30 */	stw r0, 0x30(r3)
/* 80450088 0044CFC8  38 60 00 00 */	li r3, 0
/* 8045008C 0044CFCC  4B FF DE 55 */	bl THPPlayerInit
/* 80450090 0044CFD0  2C 03 00 00 */	cmpwi r3, 0
/* 80450094 0044CFD4  40 82 00 20 */	bne .L_804500B4
/* 80450098 0044CFD8  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 8045009C 0044CFDC  3C A0 80 4A */	lis r5, lbl_8049B720@ha
/* 804500A0 0044CFE0  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 804500A4 0044CFE4  38 80 00 F7 */	li r4, 0xf7
/* 804500A8 0044CFE8  38 A5 B7 20 */	addi r5, r5, lbl_8049B720@l
/* 804500AC 0044CFEC  4C C6 31 82 */	crclr 6
/* 804500B0 0044CFF0  4B BD A5 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804500B4:
/* 804500B4 0044CFF4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804500B8 0044CFF8  38 9F 00 5C */	addi r4, r31, 0x5c
/* 804500BC 0044CFFC  38 BF 00 C8 */	addi r5, r31, 0xc8
/* 804500C0 0044D000  4B FD 2E 79 */	bl dvdLoadUseCallBack__6SystemFP16DvdThreadCommandP9IDelegate
/* 804500C4 0044D004  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804500C8 0044D008  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 804500CC 0044D00C  7C 08 03 A6 */	mtlr r0
/* 804500D0 0044D010  38 21 00 10 */	addi r1, r1, 0x10
/* 804500D4 0044D014  4E 80 00 20 */	blr 
.endif

.global loadResource__Q24Game9THPPlayerFv
loadResource__Q24Game9THPPlayerFv:
/* 804500D8 0044D018  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804500DC 0044D01C  7C 08 02 A6 */	mflr r0
/* 804500E0 0044D020  38 83 00 DC */	addi r4, r3, 0xdc
/* 804500E4 0044D024  90 01 00 14 */	stw r0, 0x14(r1)
/* 804500E8 0044D028  48 00 00 15 */	bl loadResource__Q24Game9THPPlayerFRCQ24Game24THPPlayerLoadResourceArg
/* 804500EC 0044D02C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804500F0 0044D030  7C 08 03 A6 */	mtlr r0
/* 804500F4 0044D034  38 21 00 10 */	addi r1, r1, 0x10
/* 804500F8 0044D038  4E 80 00 20 */	blr 

.if version == 1
.global loadResource__Q24Game9THPPlayerFRCQ24Game24THPPlayerLoadResourceArg
loadResource__Q24Game9THPPlayerFRCQ24Game24THPPlayerLoadResourceArg:
/* 804500FC 0044D03C  94 21 FB B0 */	stwu r1, -0x450(r1)
/* 80450100 0044D040  7C 08 02 A6 */	mflr r0
/* 80450104 0044D044  3C A0 80 4A */	lis r5, lbl_8049B510@ha
/* 80450108 0044D048  90 01 04 54 */	stw r0, 0x454(r1)
/* 8045010C 0044D04C  BF 61 04 3C */	stmw r27, 0x43c(r1)
/* 80450110 0044D050  7C 7B 1B 78 */	mr r27, r3
/* 80450114 0044D054  7C 9C 23 78 */	mr r28, r4
/* 80450118 0044D058  3B E5 B5 10 */	addi r31, r5, lbl_8049B510@l
/* 8045011C 0044D05C  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80450120 0044D060  4B FF E9 39 */	bl THPPlayerStop
/* 80450124 0044D064  80 7B 00 54 */	lwz r3, 0x54(r27)
/* 80450128 0044D068  48 00 0A 81 */	bl reset__Q27Caption3MgrFv
/* 8045012C 0044D06C  80 7B 00 58 */	lwz r3, 0x58(r27)
/* 80450130 0044D070  4B BD 36 01 */	bl freeAll__7JKRHeapFv
/* 80450134 0044D074  80 7B 00 58 */	lwz r3, 0x58(r27)
/* 80450138 0044D078  4B BD 34 6D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8045013C 0044D07C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450140 0044D080  38 9F 02 28 */	addi r4, r31, 0x288
/* 80450144 0044D084  38 A0 00 00 */	li r5, 0
/* 80450148 0044D088  4B FD 32 15 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8045014C 0044D08C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450150 0044D090  38 9F 02 40 */	addi r4, r31, 0x2a0
/* 80450154 0044D094  38 A0 00 00 */	li r5, 0
/* 80450158 0044D098  4B FD 32 05 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8045015C 0044D09C  80 7C 00 04 */	lwz r3, 4(r28)
/* 80450160 0044D0A0  88 03 00 00 */	lbz r0, 0(r3)
/* 80450164 0044D0A4  7C 00 07 75 */	extsb. r0, r0
/* 80450168 0044D0A8  41 82 00 AC */	beq .L_80450214
/* 8045016C 0044D0AC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450170 0044D0B0  38 9F 02 54 */	addi r4, r31, 0x2b4
/* 80450174 0044D0B4  38 A0 00 00 */	li r5, 0
/* 80450178 0044D0B8  4B FD 31 E5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8045017C 0044D0BC  38 00 00 00 */	li r0, 0
/* 80450180 0044D0C0  80 7C 00 04 */	lwz r3, 4(r28)
/* 80450184 0044D0C4  90 01 00 08 */	stw r0, 8(r1)
/* 80450188 0044D0C8  38 80 00 00 */	li r4, 0
/* 8045018C 0044D0CC  38 A0 00 00 */	li r5, 0
/* 80450190 0044D0D0  38 C0 00 00 */	li r6, 0
/* 80450194 0044D0D4  38 E0 00 00 */	li r7, 0
/* 80450198 0044D0D8  39 00 00 01 */	li r8, 1
/* 8045019C 0044D0DC  39 20 00 00 */	li r9, 0
/* 804501A0 0044D0E0  39 40 00 00 */	li r10, 0
/* 804501A4 0044D0E4  4B BC EF E5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 804501A8 0044D0E8  7C 7D 1B 79 */	or. r29, r3, r3
/* 804501AC 0044D0EC  40 82 00 1C */	bne .L_804501C8
/* 804501B0 0044D0F0  80 DC 00 04 */	lwz r6, 4(r28)
/* 804501B4 0044D0F4  38 7F 01 EC */	addi r3, r31, 0x24c
/* 804501B8 0044D0F8  38 BF 02 68 */	addi r5, r31, 0x2c8
/* 804501BC 0044D0FC  38 80 01 37 */	li r4, 0x13d
/* 804501C0 0044D100  4C C6 31 82 */	crclr 6
/* 804501C4 0044D104  4B BD A4 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804501C8:
/* 804501C8 0044D108  7F A4 EB 78 */	mr r4, r29
/* 804501CC 0044D10C  38 61 00 10 */	addi r3, r1, 0x10
/* 804501D0 0044D110  38 A0 FF FF */	li r5, -1
/* 804501D4 0044D114  4B FC 57 25 */	bl __ct__9RamStreamFPvi
/* 804501D8 0044D118  38 00 00 01 */	li r0, 1
/* 804501DC 0044D11C  2C 00 00 01 */	cmpwi r0, 1
/* 804501E0 0044D120  90 01 00 1C */	stw r0, 0x1c(r1)
/* 804501E4 0044D124  40 82 00 0C */	bne .L_804501F0
/* 804501E8 0044D128  38 00 00 00 */	li r0, 0
/* 804501EC 0044D12C  90 01 04 24 */	stw r0, 0x424(r1)
.L_804501F0:
/* 804501F0 0044D130  80 7B 00 54 */	lwz r3, 0x54(r27)
/* 804501F4 0044D134  38 81 00 10 */	addi r4, r1, 0x10
/* 804501F8 0044D138  81 83 00 00 */	lwz r12, 0(r3)
/* 804501FC 0044D13C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80450200 0044D140  7D 89 03 A6 */	mtctr r12
/* 80450204 0044D144  4E 80 04 21 */	bctrl 
/* 80450208 0044D148  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045020C 0044D14C  38 9F 02 54 */	addi r4, r31, 0x2b4
/* 80450210 0044D150  4B FD 31 55 */	bl heapStatusEnd__6SystemFPc
.L_80450214:
/* 80450214 0044D154  80 1C 00 00 */	lwz r0, 0(r28)
/* 80450218 0044D158  28 00 00 00 */	cmplwi r0, 0
/* 8045021C 0044D15C  41 82 00 4C */	beq .L_80450268
/* 80450220 0044D160  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450224 0044D164  38 9F 02 8C */	addi r4, r31, 0x2ec
/* 80450228 0044D168  38 A0 00 00 */	li r5, 0
/* 8045022C 0044D16C  4B FD 31 31 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80450230 0044D170  80 7C 00 00 */	lwz r3, 0(r28)
/* 80450234 0044D174  38 80 00 00 */	li r4, 0
/* 80450238 0044D178  4B FF DD B5 */	bl THPPlayerOpen
/* 8045023C 0044D17C  2C 03 00 00 */	cmpwi r3, 0
/* 80450240 0044D180  40 82 00 1C */	bne .L_8045025C
/* 80450244 0044D184  80 DC 00 00 */	lwz r6, 0(r28)
/* 80450248 0044D188  38 7F 01 EC */	addi r3, r31, 0x24c
/* 8045024C 0044D18C  38 BF 02 9C */	addi r5, r31, 0x2fc
/* 80450250 0044D190  38 80 01 45 */	li r4, 0x14b
/* 80450254 0044D194  4C C6 31 82 */	crclr 6
/* 80450258 0044D198  4B BD A3 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045025C:
/* 8045025C 0044D19C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450260 0044D1A0  38 9F 02 8C */	addi r4, r31, 0x2ec
/* 80450264 0044D1A4  4B FD 31 01 */	bl heapStatusEnd__6SystemFPc
.L_80450268:
/* 80450268 0044D1A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045026C 0044D1AC  38 9F 02 40 */	addi r4, r31, 0x2a0
/* 80450270 0044D1B0  4B FD 30 F5 */	bl heapStatusEnd__6SystemFPc
/* 80450274 0044D1B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450278 0044D1B8  38 9F 02 BC */	addi r4, r31, 0x31c
/* 8045027C 0044D1BC  38 A0 00 00 */	li r5, 0
/* 80450280 0044D1C0  4B FD 30 DD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80450284 0044D1C4  7F 63 DB 78 */	mr r3, r27
/* 80450288 0044D1C8  48 00 00 41 */	bl prepare__Q24Game9THPPlayerFv
/* 8045028C 0044D1CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450290 0044D1D0  38 9F 02 BC */	addi r4, r31, 0x31c
/* 80450294 0044D1D4  4B FD 30 D1 */	bl heapStatusEnd__6SystemFPc
/* 80450298 0044D1D8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045029C 0044D1DC  38 9F 02 28 */	addi r4, r31, 0x288
/* 804502A0 0044D1E0  4B FD 30 C5 */	bl heapStatusEnd__6SystemFPc
/* 804502A4 0044D1E4  7F C3 F3 78 */	mr r3, r30
/* 804502A8 0044D1E8  4B BD 32 FD */	bl becomeCurrentHeap__7JKRHeapFv
/* 804502AC 0044D1EC  7F 63 DB 78 */	mr r3, r27
/* 804502B0 0044D1F0  48 00 02 75 */	bl pause__Q24Game9THPPlayerFv
/* 804502B4 0044D1F4  BB 61 04 3C */	lmw r27, 0x43c(r1)
/* 804502B8 0044D1F8  80 01 04 54 */	lwz r0, 0x454(r1)
/* 804502BC 0044D1FC  7C 08 03 A6 */	mtlr r0
/* 804502C0 0044D200  38 21 04 50 */	addi r1, r1, 0x450
/* 804502C4 0044D204  4E 80 00 20 */	blr 
.else
.global loadResource__Q24Game9THPPlayerFRCQ24Game24THPPlayerLoadResourceArg
loadResource__Q24Game9THPPlayerFRCQ24Game24THPPlayerLoadResourceArg:
/* 804500FC 0044D03C  94 21 FB B0 */	stwu r1, -0x450(r1)
/* 80450100 0044D040  7C 08 02 A6 */	mflr r0
/* 80450104 0044D044  3C A0 80 4A */	lis r5, lbl_8049B510@ha
/* 80450108 0044D048  90 01 04 54 */	stw r0, 0x454(r1)
/* 8045010C 0044D04C  BF 61 04 3C */	stmw r27, 0x43c(r1)
/* 80450110 0044D050  7C 7B 1B 78 */	mr r27, r3
/* 80450114 0044D054  7C 9C 23 78 */	mr r28, r4
/* 80450118 0044D058  3B E5 B5 10 */	addi r31, r5, lbl_8049B510@l
/* 8045011C 0044D05C  83 CD 88 2C */	lwz r30, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80450120 0044D060  4B FF E9 39 */	bl THPPlayerStop
/* 80450124 0044D064  80 7B 00 54 */	lwz r3, 0x54(r27)
/* 80450128 0044D068  48 00 0A 81 */	bl reset__Q27Caption3MgrFv
/* 8045012C 0044D06C  80 7B 00 58 */	lwz r3, 0x58(r27)
/* 80450130 0044D070  4B BD 36 01 */	bl freeAll__7JKRHeapFv
/* 80450134 0044D074  80 7B 00 58 */	lwz r3, 0x58(r27)
/* 80450138 0044D078  4B BD 34 6D */	bl becomeCurrentHeap__7JKRHeapFv
/* 8045013C 0044D07C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450140 0044D080  38 9F 02 28 */	addi r4, r31, 0x228
/* 80450144 0044D084  38 A0 00 00 */	li r5, 0
/* 80450148 0044D088  4B FD 32 15 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8045014C 0044D08C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450150 0044D090  38 9F 02 40 */	addi r4, r31, 0x240
/* 80450154 0044D094  38 A0 00 00 */	li r5, 0
/* 80450158 0044D098  4B FD 32 05 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8045015C 0044D09C  80 7C 00 04 */	lwz r3, 4(r28)
/* 80450160 0044D0A0  88 03 00 00 */	lbz r0, 0(r3)
/* 80450164 0044D0A4  7C 00 07 75 */	extsb. r0, r0
/* 80450168 0044D0A8  41 82 00 AC */	beq .L_80450214
/* 8045016C 0044D0AC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450170 0044D0B0  38 9F 02 54 */	addi r4, r31, 0x254
/* 80450174 0044D0B4  38 A0 00 00 */	li r5, 0
/* 80450178 0044D0B8  4B FD 31 E5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 8045017C 0044D0BC  38 00 00 00 */	li r0, 0
/* 80450180 0044D0C0  80 7C 00 04 */	lwz r3, 4(r28)
/* 80450184 0044D0C4  90 01 00 08 */	stw r0, 8(r1)
/* 80450188 0044D0C8  38 80 00 00 */	li r4, 0
/* 8045018C 0044D0CC  38 A0 00 00 */	li r5, 0
/* 80450190 0044D0D0  38 C0 00 00 */	li r6, 0
/* 80450194 0044D0D4  38 E0 00 00 */	li r7, 0
/* 80450198 0044D0D8  39 00 00 01 */	li r8, 1
/* 8045019C 0044D0DC  39 20 00 00 */	li r9, 0
/* 804501A0 0044D0E0  39 40 00 00 */	li r10, 0
/* 804501A4 0044D0E4  4B BC EF E5 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 804501A8 0044D0E8  7C 7D 1B 79 */	or. r29, r3, r3
/* 804501AC 0044D0EC  40 82 00 1C */	bne .L_804501C8
/* 804501B0 0044D0F0  80 DC 00 04 */	lwz r6, 4(r28)
/* 804501B4 0044D0F4  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 804501B8 0044D0F8  38 BF 02 68 */	addi r5, r31, 0x268
/* 804501BC 0044D0FC  38 80 01 37 */	li r4, 0x137
/* 804501C0 0044D100  4C C6 31 82 */	crclr 6
/* 804501C4 0044D104  4B BD A4 7D */	bl panic_f__12JUTExceptionFPCciPCce
.L_804501C8:
/* 804501C8 0044D108  7F A4 EB 78 */	mr r4, r29
/* 804501CC 0044D10C  38 61 00 10 */	addi r3, r1, 0x10
/* 804501D0 0044D110  38 A0 FF FF */	li r5, -1
/* 804501D4 0044D114  4B FC 57 25 */	bl __ct__9RamStreamFPvi
/* 804501D8 0044D118  38 00 00 01 */	li r0, 1
/* 804501DC 0044D11C  2C 00 00 01 */	cmpwi r0, 1
/* 804501E0 0044D120  90 01 00 1C */	stw r0, 0x1c(r1)
/* 804501E4 0044D124  40 82 00 0C */	bne .L_804501F0
/* 804501E8 0044D128  38 00 00 00 */	li r0, 0
/* 804501EC 0044D12C  90 01 04 24 */	stw r0, 0x424(r1)
.L_804501F0:
/* 804501F0 0044D130  80 7B 00 54 */	lwz r3, 0x54(r27)
/* 804501F4 0044D134  38 81 00 10 */	addi r4, r1, 0x10
/* 804501F8 0044D138  81 83 00 00 */	lwz r12, 0(r3)
/* 804501FC 0044D13C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80450200 0044D140  7D 89 03 A6 */	mtctr r12
/* 80450204 0044D144  4E 80 04 21 */	bctrl 
/* 80450208 0044D148  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045020C 0044D14C  38 9F 02 54 */	addi r4, r31, 0x254
/* 80450210 0044D150  4B FD 31 55 */	bl heapStatusEnd__6SystemFPc
.L_80450214:
/* 80450214 0044D154  80 1C 00 00 */	lwz r0, 0(r28)
/* 80450218 0044D158  28 00 00 00 */	cmplwi r0, 0
/* 8045021C 0044D15C  41 82 00 4C */	beq .L_80450268
/* 80450220 0044D160  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450224 0044D164  38 9F 02 8C */	addi r4, r31, 0x28c
/* 80450228 0044D168  38 A0 00 00 */	li r5, 0
/* 8045022C 0044D16C  4B FD 31 31 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80450230 0044D170  80 7C 00 00 */	lwz r3, 0(r28)
/* 80450234 0044D174  38 80 00 00 */	li r4, 0
/* 80450238 0044D178  4B FF DD B5 */	bl THPPlayerOpen
/* 8045023C 0044D17C  2C 03 00 00 */	cmpwi r3, 0
/* 80450240 0044D180  40 82 00 1C */	bne .L_8045025C
/* 80450244 0044D184  80 DC 00 00 */	lwz r6, 0(r28)
/* 80450248 0044D188  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 8045024C 0044D18C  38 BF 02 9C */	addi r5, r31, 0x29c
/* 80450250 0044D190  38 80 01 45 */	li r4, 0x145
/* 80450254 0044D194  4C C6 31 82 */	crclr 6
/* 80450258 0044D198  4B BD A3 E9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045025C:
/* 8045025C 0044D19C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450260 0044D1A0  38 9F 02 8C */	addi r4, r31, 0x28c
/* 80450264 0044D1A4  4B FD 31 01 */	bl heapStatusEnd__6SystemFPc
.L_80450268:
/* 80450268 0044D1A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045026C 0044D1AC  38 9F 02 40 */	addi r4, r31, 0x240
/* 80450270 0044D1B0  4B FD 30 F5 */	bl heapStatusEnd__6SystemFPc
/* 80450274 0044D1B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450278 0044D1B8  38 9F 02 BC */	addi r4, r31, 0x2bc
/* 8045027C 0044D1BC  38 A0 00 00 */	li r5, 0
/* 80450280 0044D1C0  4B FD 30 DD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80450284 0044D1C4  7F 63 DB 78 */	mr r3, r27
/* 80450288 0044D1C8  48 00 00 41 */	bl prepare__Q24Game9THPPlayerFv
/* 8045028C 0044D1CC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450290 0044D1D0  38 9F 02 BC */	addi r4, r31, 0x2bc
/* 80450294 0044D1D4  4B FD 30 D1 */	bl heapStatusEnd__6SystemFPc
/* 80450298 0044D1D8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045029C 0044D1DC  38 9F 02 28 */	addi r4, r31, 0x228
/* 804502A0 0044D1E0  4B FD 30 C5 */	bl heapStatusEnd__6SystemFPc
/* 804502A4 0044D1E4  7F C3 F3 78 */	mr r3, r30
/* 804502A8 0044D1E8  4B BD 32 FD */	bl becomeCurrentHeap__7JKRHeapFv
/* 804502AC 0044D1EC  7F 63 DB 78 */	mr r3, r27
/* 804502B0 0044D1F0  48 00 02 75 */	bl pause__Q24Game9THPPlayerFv
/* 804502B4 0044D1F4  BB 61 04 3C */	lmw r27, 0x43c(r1)
/* 804502B8 0044D1F8  80 01 04 54 */	lwz r0, 0x454(r1)
/* 804502BC 0044D1FC  7C 08 03 A6 */	mtlr r0
/* 804502C0 0044D200  38 21 04 50 */	addi r1, r1, 0x450
/* 804502C4 0044D204  4E 80 00 20 */	blr 
.endif

.if version == 1
.global prepare__Q24Game9THPPlayerFv
prepare__Q24Game9THPPlayerFv:
/* 804502C8 0044D208  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804502CC 0044D20C  7C 08 02 A6 */	mflr r0
/* 804502D0 0044D210  3C 80 80 4A */	lis r4, lbl_8049B510@ha
/* 804502D4 0044D214  90 01 00 24 */	stw r0, 0x24(r1)
/* 804502D8 0044D218  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804502DC 0044D21C  3B E4 B5 10 */	addi r31, r4, lbl_8049B510@l
/* 804502E0 0044D220  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804502E4 0044D224  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804502E8 0044D228  93 81 00 10 */	stw r28, 0x10(r1)
/* 804502EC 0044D22C  7C 7C 1B 78 */	mr r28, r3
/* 804502F0 0044D230  4B FD 2F 35 */	bl getRenderModeObj__6SystemFv
/* 804502F4 0044D234  38 7C 00 38 */	addi r3, r28, 0x38
/* 804502F8 0044D238  3B A0 00 00 */	li r29, 0
/* 804502FC 0044D23C  4B FF ED A5 */	bl THPPlayerGetVideoInfo
/* 80450300 0044D240  38 7C 00 44 */	addi r3, r28, 0x44
/* 80450304 0044D244  4B FF ED E5 */	bl THPPlayerGetAudioInfo
/* 80450308 0044D248  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045030C 0044D24C  38 9F 02 D0 */	addi r4, r31, 0x330
/* 80450310 0044D250  38 A0 00 00 */	li r5, 0
/* 80450314 0044D254  4B FD 30 49 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80450318 0044D258  4B FF E0 5D */	bl THPPlayerCalcNeedMemory
/* 8045031C 0044D25C  38 80 00 20 */	li r4, 0x20
/* 80450320 0044D260  4B BD 3C D9 */	bl __nwa__FUli
/* 80450324 0044D264  7C 7E 1B 79 */	or. r30, r3, r3
/* 80450328 0044D268  40 82 00 18 */	bne .L_80450340
/* 8045032C 0044D26C  38 7F 01 EC */	addi r3, r31, 0x24c
/* 80450330 0044D270  38 BF 02 E0 */	addi r5, r31, 0x340
/* 80450334 0044D274  38 80 01 6F */	li r4, 0x175
/* 80450338 0044D278  4C C6 31 82 */	crclr 6
/* 8045033C 0044D27C  4B C9 D4 31 */	bl OSPanic
.L_80450340:
/* 80450340 0044D280  7F C3 F3 78 */	mr r3, r30
/* 80450344 0044D284  4B FF E0 E1 */	bl THPPlayerSetBuffer
/* 80450348 0044D288  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045034C 0044D28C  38 9F 02 D0 */	addi r4, r31, 0x330
/* 80450350 0044D290  4B FD 30 15 */	bl heapStatusEnd__6SystemFPc
/* 80450354 0044D294  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 80450358 0044D298  28 00 00 01 */	cmplwi r0, 1
/* 8045035C 0044D29C  40 81 00 1C */	ble .L_80450378
/* 80450360 0044D2A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450364 0044D2A4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80450368 0044D2A8  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8045036C 0044D2AC  28 00 00 02 */	cmplwi r0, 2
/* 80450370 0044D2B0  40 82 00 08 */	bne .L_80450378
/* 80450374 0044D2B4  3B A0 00 01 */	li r29, 1
.L_80450378:
/* 80450378 0044D2B8  7F A5 EB 78 */	mr r5, r29
/* 8045037C 0044D2BC  38 60 00 00 */	li r3, 0
/* 80450380 0044D2C0  38 80 00 00 */	li r4, 0
/* 80450384 0044D2C4  4B FF E2 E1 */	bl THPPlayerPrepare
/* 80450388 0044D2C8  2C 03 00 00 */	cmpwi r3, 0
/* 8045038C 0044D2CC  40 82 00 18 */	bne .L_804503A4
/* 80450390 0044D2D0  38 7F 01 EC */	addi r3, r31, 0x24c
/* 80450394 0044D2D4  38 BF 02 FC */	addi r5, r31, 0x35c
/* 80450398 0044D2D8  38 80 01 8D */	li r4, 0x193
/* 8045039C 0044D2DC  4C C6 31 82 */	crclr 6
/* 804503A0 0044D2E0  4B BD A2 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804503A4:
/* 804503A4 0044D2E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804503A8 0044D2E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804503AC 0044D2EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804503B0 0044D2F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804503B4 0044D2F4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 804503B8 0044D2F8  7C 08 03 A6 */	mtlr r0
/* 804503BC 0044D2FC  38 21 00 20 */	addi r1, r1, 0x20
/* 804503C0 0044D300  4E 80 00 20 */	blr 
.else
.global prepare__Q24Game9THPPlayerFv
prepare__Q24Game9THPPlayerFv:
/* 804502C8 0044D208  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804502CC 0044D20C  7C 08 02 A6 */	mflr r0
/* 804502D0 0044D210  3C 80 80 4A */	lis r4, lbl_8049B510@ha
/* 804502D4 0044D214  90 01 00 24 */	stw r0, 0x24(r1)
/* 804502D8 0044D218  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804502DC 0044D21C  3B E4 B5 10 */	addi r31, r4, lbl_8049B510@l
/* 804502E0 0044D220  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804502E4 0044D224  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804502E8 0044D228  93 81 00 10 */	stw r28, 0x10(r1)
/* 804502EC 0044D22C  7C 7C 1B 78 */	mr r28, r3
/* 804502F0 0044D230  4B FD 2F 35 */	bl getRenderModeObj__6SystemFv
/* 804502F4 0044D234  38 7C 00 38 */	addi r3, r28, 0x38
/* 804502F8 0044D238  3B A0 00 00 */	li r29, 0
/* 804502FC 0044D23C  4B FF ED A5 */	bl THPPlayerGetVideoInfo
/* 80450300 0044D240  38 7C 00 44 */	addi r3, r28, 0x44
/* 80450304 0044D244  4B FF ED E5 */	bl THPPlayerGetAudioInfo
/* 80450308 0044D248  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045030C 0044D24C  38 9F 02 D0 */	addi r4, r31, 0x2d0
/* 80450310 0044D250  38 A0 00 00 */	li r5, 0
/* 80450314 0044D254  4B FD 30 49 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 80450318 0044D258  4B FF E0 5D */	bl THPPlayerCalcNeedMemory
/* 8045031C 0044D25C  38 80 00 20 */	li r4, 0x20
/* 80450320 0044D260  4B BD 3C D9 */	bl __nwa__FUli
/* 80450324 0044D264  7C 7E 1B 79 */	or. r30, r3, r3
/* 80450328 0044D268  40 82 00 18 */	bne .L_80450340
/* 8045032C 0044D26C  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 80450330 0044D270  38 BF 02 E0 */	addi r5, r31, 0x2e0
/* 80450334 0044D274  38 80 01 6F */	li r4, 0x16f
/* 80450338 0044D278  4C C6 31 82 */	crclr 6
/* 8045033C 0044D27C  4B C9 D4 31 */	bl OSPanic
.L_80450340:
/* 80450340 0044D280  7F C3 F3 78 */	mr r3, r30
/* 80450344 0044D284  4B FF E0 E1 */	bl THPPlayerSetBuffer
/* 80450348 0044D288  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045034C 0044D28C  38 9F 02 D0 */	addi r4, r31, 0x2d0
/* 80450350 0044D290  4B FD 30 15 */	bl heapStatusEnd__6SystemFPc
/* 80450354 0044D294  80 1C 00 50 */	lwz r0, 0x50(r28)
/* 80450358 0044D298  28 00 00 01 */	cmplwi r0, 1
/* 8045035C 0044D29C  40 81 00 1C */	ble .L_80450378
/* 80450360 0044D2A0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80450364 0044D2A4  80 63 00 60 */	lwz r3, 0x60(r3)
/* 80450368 0044D2A8  88 03 00 38 */	lbz r0, 0x38(r3)
/* 8045036C 0044D2AC  28 00 00 02 */	cmplwi r0, 2
/* 80450370 0044D2B0  40 82 00 08 */	bne .L_80450378
/* 80450374 0044D2B4  3B A0 00 01 */	li r29, 1
.L_80450378:
/* 80450378 0044D2B8  7F A5 EB 78 */	mr r5, r29
/* 8045037C 0044D2BC  38 60 00 00 */	li r3, 0
/* 80450380 0044D2C0  38 80 00 00 */	li r4, 0
/* 80450384 0044D2C4  4B FF E2 E1 */	bl THPPlayerPrepare
/* 80450388 0044D2C8  2C 03 00 00 */	cmpwi r3, 0
/* 8045038C 0044D2CC  40 82 00 18 */	bne .L_804503A4
/* 80450390 0044D2D0  38 7F 01 EC */	addi r3, r31, 0x1ec
/* 80450394 0044D2D4  38 BF 02 FC */	addi r5, r31, 0x2fc
/* 80450398 0044D2D8  38 80 01 8D */	li r4, 0x18d
/* 8045039C 0044D2DC  4C C6 31 82 */	crclr 6
/* 804503A0 0044D2E0  4B BD A2 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804503A4:
/* 804503A4 0044D2E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804503A8 0044D2E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804503AC 0044D2EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804503B0 0044D2F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804503B4 0044D2F4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 804503B8 0044D2F8  7C 08 03 A6 */	mtlr r0
/* 804503BC 0044D2FC  38 21 00 20 */	addi r1, r1, 0x20
/* 804503C0 0044D300  4E 80 00 20 */	blr 
.endif

.if version == 1
.global init__Q24Game9THPPlayerFP7JKRHeap
init__Q24Game9THPPlayerFP7JKRHeap:
/* 804503C4 0044D304  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804503C8 0044D308  7C 08 02 A6 */	mflr r0
/* 804503CC 0044D30C  90 01 00 24 */	stw r0, 0x24(r1)
/* 804503D0 0044D310  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804503D4 0044D314  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804503D8 0044D318  7C 9E 23 78 */	mr r30, r4
/* 804503DC 0044D31C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804503E0 0044D320  7C 7D 1B 78 */	mr r29, r3
/* 804503E4 0044D324  80 03 00 58 */	lwz r0, 0x58(r3)
/* 804503E8 0044D328  28 00 00 00 */	cmplwi r0, 0
/* 804503EC 0044D32C  41 82 00 20 */	beq .L_8045040C
/* 804503F0 0044D330  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 804503F4 0044D334  3C A0 80 4A */	lis r5, lbl_8049B714@ha
/* 804503F8 0044D338  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 804503FC 0044D33C  38 80 01 97 */	li r4, 0x19d
/* 80450400 0044D340  38 A5 B7 14 */	addi r5, r5, lbl_8049B714@l
/* 80450404 0044D344  4C C6 31 82 */	crclr 6
/* 80450408 0044D348  4B BD A2 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045040C:
/* 8045040C 0044D34C  28 1E 00 00 */	cmplwi r30, 0
/* 80450410 0044D350  83 ED 88 2C */	lwz r31, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80450414 0044D354  40 82 00 08 */	bne .L_8045041C
/* 80450418 0044D358  7F FE FB 78 */	mr r30, r31
.L_8045041C:
/* 8045041C 0044D35C  7F C3 F3 78 */	mr r3, r30
/* 80450420 0044D360  4B BD 31 85 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80450424 0044D364  7F C4 F3 78 */	mr r4, r30
/* 80450428 0044D368  3C 60 00 30 */	lis r3, 0x30
/* 8045042C 0044D36C  38 A0 00 01 */	li r5, 1
/* 80450430 0044D370  4B BD 49 41 */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 80450434 0044D374  90 7D 00 58 */	stw r3, 0x58(r29)
/* 80450438 0044D378  80 1D 00 58 */	lwz r0, 0x58(r29)
/* 8045043C 0044D37C  28 00 00 00 */	cmplwi r0, 0
/* 80450440 0044D380  40 82 00 20 */	bne .L_80450460
/* 80450444 0044D384  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 80450448 0044D388  3C A0 80 4A */	lis r5, lbl_8049B714@ha
/* 8045044C 0044D38C  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 80450450 0044D390  38 80 01 A2 */	li r4, 0x1a8
/* 80450454 0044D394  38 A5 B7 14 */	addi r5, r5, lbl_8049B714@l
/* 80450458 0044D398  4C C6 31 82 */	crclr 6
/* 8045045C 0044D39C  4B BD A1 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80450460:
/* 80450460 0044D3A0  7F E3 FB 78 */	mr r3, r31
/* 80450464 0044D3A4  4B BD 31 41 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80450468 0044D3A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045046C 0044D3AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80450470 0044D3B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80450474 0044D3B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80450478 0044D3B8  7C 08 03 A6 */	mtlr r0
/* 8045047C 0044D3BC  38 21 00 20 */	addi r1, r1, 0x20
/* 80450480 0044D3C0  4E 80 00 20 */	blr 
.else
.global init__Q24Game9THPPlayerFP7JKRHeap
init__Q24Game9THPPlayerFP7JKRHeap:
/* 804503C4 0044D304  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804503C8 0044D308  7C 08 02 A6 */	mflr r0
/* 804503CC 0044D30C  90 01 00 24 */	stw r0, 0x24(r1)
/* 804503D0 0044D310  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 804503D4 0044D314  93 C1 00 18 */	stw r30, 0x18(r1)
/* 804503D8 0044D318  7C 9E 23 78 */	mr r30, r4
/* 804503DC 0044D31C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 804503E0 0044D320  7C 7D 1B 78 */	mr r29, r3
/* 804503E4 0044D324  80 03 00 58 */	lwz r0, 0x58(r3)
/* 804503E8 0044D328  28 00 00 00 */	cmplwi r0, 0
/* 804503EC 0044D32C  41 82 00 20 */	beq .L_8045040C
/* 804503F0 0044D330  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 804503F4 0044D334  3C A0 80 4A */	lis r5, lbl_8049B714@ha
/* 804503F8 0044D338  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 804503FC 0044D33C  38 80 01 97 */	li r4, 0x197
/* 80450400 0044D340  38 A5 B7 14 */	addi r5, r5, lbl_8049B714@l
/* 80450404 0044D344  4C C6 31 82 */	crclr 6
/* 80450408 0044D348  4B BD A2 39 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8045040C:
/* 8045040C 0044D34C  28 1E 00 00 */	cmplwi r30, 0
/* 80450410 0044D350  83 ED 88 2C */	lwz r31, sCurrentHeap__7JKRHeap@sda21(r13)
/* 80450414 0044D354  40 82 00 08 */	bne .L_8045041C
/* 80450418 0044D358  7F FE FB 78 */	mr r30, r31
.L_8045041C:
/* 8045041C 0044D35C  7F C3 F3 78 */	mr r3, r30
/* 80450420 0044D360  4B BD 31 85 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80450424 0044D364  7F C4 F3 78 */	mr r4, r30
/* 80450428 0044D368  3C 60 00 30 */	lis r3, 0x30
/* 8045042C 0044D36C  38 A0 00 01 */	li r5, 1
/* 80450430 0044D370  4B BD 49 41 */	bl create__12JKRSolidHeapFUlP7JKRHeapb
/* 80450434 0044D374  90 7D 00 58 */	stw r3, 0x58(r29)
/* 80450438 0044D378  80 1D 00 58 */	lwz r0, 0x58(r29)
/* 8045043C 0044D37C  28 00 00 00 */	cmplwi r0, 0
/* 80450440 0044D380  40 82 00 20 */	bne .L_80450460
/* 80450444 0044D384  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 80450448 0044D388  3C A0 80 4A */	lis r5, lbl_8049B714@ha
/* 8045044C 0044D38C  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 80450450 0044D390  38 80 01 A2 */	li r4, 0x1a2
/* 80450454 0044D394  38 A5 B7 14 */	addi r5, r5, lbl_8049B714@l
/* 80450458 0044D398  4C C6 31 82 */	crclr 6
/* 8045045C 0044D39C  4B BD A1 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80450460:
/* 80450460 0044D3A0  7F E3 FB 78 */	mr r3, r31
/* 80450464 0044D3A4  4B BD 31 41 */	bl becomeCurrentHeap__7JKRHeapFv
/* 80450468 0044D3A8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045046C 0044D3AC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80450470 0044D3B0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80450474 0044D3B4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 80450478 0044D3B8  7C 08 03 A6 */	mtlr r0
/* 8045047C 0044D3BC  38 21 00 20 */	addi r1, r1, 0x20
/* 80450480 0044D3C0  4E 80 00 20 */	blr 
.endif

.global play__Q24Game9THPPlayerFv
play__Q24Game9THPPlayerFv:
/* 80450484 0044D3C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80450488 0044D3C8  7C 08 02 A6 */	mflr r0
/* 8045048C 0044D3CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80450490 0044D3D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80450494 0044D3D4  7C 7F 1B 78 */	mr r31, r3
/* 80450498 0044D3D8  48 01 B3 D9 */	bl PSStop2DStream__Fv
/* 8045049C 0044D3DC  80 1F 00 30 */	lwz r0, 0x30(r31)
/* 804504A0 0044D3E0  2C 00 00 02 */	cmpwi r0, 2
/* 804504A4 0044D3E4  40 82 00 68 */	bne .L_8045050C
/* 804504A8 0044D3E8  4B FF E5 51 */	bl THPPlayerPlay
/* 804504AC 0044D3EC  80 0D 98 58 */	lwz r0, spSysIF__8PSSystem@sda21(r13)
/* 804504B0 0044D3F0  28 00 00 00 */	cmplwi r0, 0
/* 804504B4 0044D3F4  40 82 00 20 */	bne .L_804504D4
/* 804504B8 0044D3F8  3C 60 80 4A */	lis r3, lbl_8049B820@ha
/* 804504BC 0044D3FC  3C A0 80 4A */	lis r5, lbl_8049B714@ha
/* 804504C0 0044D400  38 63 B8 20 */	addi r3, r3, lbl_8049B820@l
/* 804504C4 0044D404  38 80 01 8B */	li r4, 0x18b
/* 804504C8 0044D408  38 A5 B7 14 */	addi r5, r5, lbl_8049B714@l
/* 804504CC 0044D40C  4C C6 31 82 */	crclr 6
/* 804504D0 0044D410  4B BD A1 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_804504D4:
/* 804504D4 0044D414  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 804504D8 0044D418  C0 22 27 B4 */	lfs f1, lbl_80520B14@sda21(r2)
/* 804504DC 0044D41C  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 804504E0 0044D420  EC 01 00 32 */	fmuls f0, f1, f0
/* 804504E4 0044D424  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 804504E8 0044D428  40 81 00 08 */	ble .L_804504F0
/* 804504EC 0044D42C  FC 00 08 90 */	fmr f0, f1
.L_804504F0:
/* 804504F0 0044D430  FC 00 00 1E */	fctiwz f0, f0
/* 804504F4 0044D434  38 80 00 00 */	li r4, 0
/* 804504F8 0044D438  D8 01 00 08 */	stfd f0, 8(r1)
/* 804504FC 0044D43C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 80450500 0044D440  4B FF EF 65 */	bl THPPlayerSetVolume
/* 80450504 0044D444  38 60 00 01 */	li r3, 1
/* 80450508 0044D448  48 00 00 08 */	b .L_80450510
.L_8045050C:
/* 8045050C 0044D44C  38 60 00 00 */	li r3, 0
.L_80450510:
/* 80450510 0044D450  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80450514 0044D454  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80450518 0044D458  7C 08 03 A6 */	mtlr r0
/* 8045051C 0044D45C  38 21 00 20 */	addi r1, r1, 0x20
/* 80450520 0044D460  4E 80 00 20 */	blr 

.global pause__Q24Game9THPPlayerFv
pause__Q24Game9THPPlayerFv:
/* 80450524 0044D464  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80450528 0044D468  7C 08 02 A6 */	mflr r0
/* 8045052C 0044D46C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80450530 0044D470  80 03 00 30 */	lwz r0, 0x30(r3)
/* 80450534 0044D474  2C 00 00 02 */	cmpwi r0, 2
/* 80450538 0044D478  40 82 00 10 */	bne .L_80450548
/* 8045053C 0044D47C  4B FF E5 ED */	bl THPPlayerPause
/* 80450540 0044D480  38 60 00 01 */	li r3, 1
/* 80450544 0044D484  48 00 00 08 */	b .L_8045054C
.L_80450548:
/* 80450548 0044D488  38 60 00 00 */	li r3, 0
.L_8045054C:
/* 8045054C 0044D48C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80450550 0044D490  7C 08 03 A6 */	mtlr r0
/* 80450554 0044D494  38 21 00 10 */	addi r1, r1, 0x10
/* 80450558 0044D498  4E 80 00 20 */	blr 

.global stop__Q24Game9THPPlayerFv
stop__Q24Game9THPPlayerFv:
/* 8045055C 0044D49C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80450560 0044D4A0  7C 08 02 A6 */	mflr r0
/* 80450564 0044D4A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80450568 0044D4A8  4B FF E4 F1 */	bl THPPlayerStop
/* 8045056C 0044D4AC  4B FF DD B5 */	bl THPPlayerClose
/* 80450570 0044D4B0  4B FF DA 49 */	bl THPPlayerQuit
/* 80450574 0044D4B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80450578 0044D4B8  7C 08 03 A6 */	mtlr r0
/* 8045057C 0044D4BC  38 21 00 10 */	addi r1, r1, 0x10
/* 80450580 0044D4C0  4E 80 00 20 */	blr 

.if version == 1
.global update__Q24Game9THPPlayerFv
update__Q24Game9THPPlayerFv:
/* 80450584 0044D4C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80450588 0044D4C8  7C 08 02 A6 */	mflr r0
/* 8045058C 0044D4CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80450590 0044D4D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80450594 0044D4D4  7C 7F 1B 78 */	mr r31, r3
/* 80450598 0044D4D8  80 C3 00 30 */	lwz r6, 0x30(r3)
/* 8045059C 0044D4DC  2C 06 00 01 */	cmpwi r6, 1
/* 804505A0 0044D4E0  41 82 00 20 */	beq .L_804505C0
/* 804505A4 0044D4E4  40 80 00 10 */	bge .L_804505B4
/* 804505A8 0044D4E8  2C 06 00 00 */	cmpwi r6, 0
/* 804505AC 0044D4EC  40 80 00 58 */	bge .L_80450604
/* 804505B0 0044D4F0  48 00 00 38 */	b .L_804505E8
.L_804505B4:
/* 804505B4 0044D4F4  2C 06 00 03 */	cmpwi r6, 3
/* 804505B8 0044D4F8  40 80 00 30 */	bge .L_804505E8
/* 804505BC 0044D4FC  48 00 00 1C */	b .L_804505D8
.L_804505C0:
/* 804505C0 0044D500  48 00 02 79 */	bl isFinishLoading__Q24Game9THPPlayerFv
/* 804505C4 0044D504  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804505C8 0044D508  41 82 00 3C */	beq .L_80450604
/* 804505CC 0044D50C  38 00 00 02 */	li r0, 2
/* 804505D0 0044D510  90 1F 00 30 */	stw r0, 0x30(r31)
/* 804505D4 0044D514  48 00 00 30 */	b .L_80450604
.L_804505D8:
/* 804505D8 0044D518  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 804505DC 0044D51C  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 804505E0 0044D520  48 00 06 99 */	bl update__Q27Caption3MgrFl
/* 804505E4 0044D524  48 00 00 20 */	b .L_80450604
.L_804505E8:
/* 804505E8 0044D528  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 804505EC 0044D52C  3C 80 80 4A */	lis r4, lbl_8049B830@ha
/* 804505F0 0044D530  38 A4 B8 30 */	addi r5, r4, lbl_8049B830@l
/* 804505F4 0044D534  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 804505F8 0044D538  38 80 01 F8 */	li r4, 0x1fe
/* 804505FC 0044D53C  4C C6 31 82 */	crclr 6
/* 80450600 0044D540  4B BD A0 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80450604:
/* 80450604 0044D544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80450608 0044D548  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045060C 0044D54C  7C 08 03 A6 */	mtlr r0
/* 80450610 0044D550  38 21 00 10 */	addi r1, r1, 0x10
/* 80450614 0044D554  4E 80 00 20 */	blr 
.else
.global update__Q24Game9THPPlayerFv
update__Q24Game9THPPlayerFv:
/* 80450584 0044D4C4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80450588 0044D4C8  7C 08 02 A6 */	mflr r0
/* 8045058C 0044D4CC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80450590 0044D4D0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80450594 0044D4D4  7C 7F 1B 78 */	mr r31, r3
/* 80450598 0044D4D8  80 C3 00 30 */	lwz r6, 0x30(r3)
/* 8045059C 0044D4DC  2C 06 00 01 */	cmpwi r6, 1
/* 804505A0 0044D4E0  41 82 00 20 */	beq .L_804505C0
/* 804505A4 0044D4E4  40 80 00 10 */	bge .L_804505B4
/* 804505A8 0044D4E8  2C 06 00 00 */	cmpwi r6, 0
/* 804505AC 0044D4EC  40 80 00 58 */	bge .L_80450604
/* 804505B0 0044D4F0  48 00 00 38 */	b .L_804505E8
.L_804505B4:
/* 804505B4 0044D4F4  2C 06 00 03 */	cmpwi r6, 3
/* 804505B8 0044D4F8  40 80 00 30 */	bge .L_804505E8
/* 804505BC 0044D4FC  48 00 00 1C */	b .L_804505D8
.L_804505C0:
/* 804505C0 0044D500  48 00 02 79 */	bl isFinishLoading__Q24Game9THPPlayerFv
/* 804505C4 0044D504  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804505C8 0044D508  41 82 00 3C */	beq .L_80450604
/* 804505CC 0044D50C  38 00 00 02 */	li r0, 2
/* 804505D0 0044D510  90 1F 00 30 */	stw r0, 0x30(r31)
/* 804505D4 0044D514  48 00 00 30 */	b .L_80450604
.L_804505D8:
/* 804505D8 0044D518  80 7F 00 54 */	lwz r3, 0x54(r31)
/* 804505DC 0044D51C  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 804505E0 0044D520  48 00 06 99 */	bl update__Q27Caption3MgrFl
/* 804505E4 0044D524  48 00 00 20 */	b .L_80450604
.L_804505E8:
/* 804505E8 0044D528  3C 60 80 4A */	lis r3, lbl_8049B6FC@ha
/* 804505EC 0044D52C  3C 80 80 4A */	lis r4, lbl_8049B830@ha
/* 804505F0 0044D530  38 A4 B8 30 */	addi r5, r4, lbl_8049B830@l
/* 804505F4 0044D534  38 63 B6 FC */	addi r3, r3, lbl_8049B6FC@l
/* 804505F8 0044D538  38 80 01 F8 */	li r4, 0x1f8
/* 804505FC 0044D53C  4C C6 31 82 */	crclr 6
/* 80450600 0044D540  4B BD A0 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80450604:
/* 80450604 0044D544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80450608 0044D548  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8045060C 0044D54C  7C 08 03 A6 */	mtlr r0
/* 80450610 0044D550  38 21 00 10 */	addi r1, r1, 0x10
/* 80450614 0044D554  4E 80 00 20 */	blr 
.endif

.global draw__Q24Game9THPPlayerFR8Graphics
draw__Q24Game9THPPlayerFR8Graphics:
/* 80450618 0044D558  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8045061C 0044D55C  7C 08 02 A6 */	mflr r0
/* 80450620 0044D560  90 01 00 24 */	stw r0, 0x24(r1)
/* 80450624 0044D564  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80450628 0044D568  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8045062C 0044D56C  7C 9E 23 78 */	mr r30, r4
/* 80450630 0044D570  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80450634 0044D574  7C 7D 1B 78 */	mr r29, r3
/* 80450638 0044D578  88 03 00 E4 */	lbz r0, 0xe4(r3)
/* 8045063C 0044D57C  2C 00 00 01 */	cmpwi r0, 1
/* 80450640 0044D580  41 82 00 08 */	beq .L_80450648
/* 80450644 0044D584  48 00 00 44 */	b .L_80450688
.L_80450648:
/* 80450648 0044D588  4B FD 2B DD */	bl getRenderModeObj__6SystemFv
/* 8045064C 0044D58C  A0 03 00 04 */	lhz r0, 4(r3)
/* 80450650 0044D590  7F A3 EB 78 */	mr r3, r29
/* 80450654 0044D594  80 FD 00 38 */	lwz r7, 0x38(r29)
/* 80450658 0044D598  7F C4 F3 78 */	mr r4, r30
/* 8045065C 0044D59C  81 9D 00 00 */	lwz r12, 0(r29)
/* 80450660 0044D5A0  38 C0 00 14 */	li r6, 0x14
/* 80450664 0044D5A4  7C A7 00 50 */	subf r5, r7, r0
/* 80450668 0044D5A8  81 1D 00 3C */	lwz r8, 0x3c(r29)
/* 8045066C 0044D5AC  54 A0 0F FE */	srwi r0, r5, 0x1f
/* 80450670 0044D5B0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80450674 0044D5B4  7C 00 2A 14 */	add r0, r0, r5
/* 80450678 0044D5B8  7C 05 0E 70 */	srawi r5, r0, 1
/* 8045067C 0044D5BC  7D 89 03 A6 */	mtctr r12
/* 80450680 0044D5C0  4E 80 04 21 */	bctrl 
/* 80450684 0044D5C4  48 00 00 54 */	b .L_804506D8
.L_80450688:
/* 80450688 0044D5C8  4B FD 2B 9D */	bl getRenderModeObj__6SystemFv
/* 8045068C 0044D5CC  A3 E3 00 06 */	lhz r31, 6(r3)
/* 80450690 0044D5D0  4B FD 2B 95 */	bl getRenderModeObj__6SystemFv
/* 80450694 0044D5D4  A0 03 00 04 */	lhz r0, 4(r3)
/* 80450698 0044D5D8  7F A3 EB 78 */	mr r3, r29
/* 8045069C 0044D5DC  80 FD 00 38 */	lwz r7, 0x38(r29)
/* 804506A0 0044D5E0  7F C4 F3 78 */	mr r4, r30
/* 804506A4 0044D5E4  81 1D 00 3C */	lwz r8, 0x3c(r29)
/* 804506A8 0044D5E8  7C A7 00 50 */	subf r5, r7, r0
/* 804506AC 0044D5EC  81 9D 00 00 */	lwz r12, 0(r29)
/* 804506B0 0044D5F0  54 A0 0F FE */	srwi r0, r5, 0x1f
/* 804506B4 0044D5F4  7C C8 F8 50 */	subf r6, r8, r31
/* 804506B8 0044D5F8  7C A0 2A 14 */	add r5, r0, r5
/* 804506BC 0044D5FC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 804506C0 0044D600  54 C0 0F FE */	srwi r0, r6, 0x1f
/* 804506C4 0044D604  7C A5 0E 70 */	srawi r5, r5, 1
/* 804506C8 0044D608  7C 00 32 14 */	add r0, r0, r6
/* 804506CC 0044D60C  7C 06 0E 70 */	srawi r6, r0, 1
/* 804506D0 0044D610  7D 89 03 A6 */	mtctr r12
/* 804506D4 0044D614  4E 80 04 21 */	bctrl 
.L_804506D8:
/* 804506D8 0044D618  80 01 00 24 */	lwz r0, 0x24(r1)
/* 804506DC 0044D61C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 804506E0 0044D620  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 804506E4 0044D624  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 804506E8 0044D628  7C 08 03 A6 */	mtlr r0
/* 804506EC 0044D62C  38 21 00 20 */	addi r1, r1, 0x20
/* 804506F0 0044D630  4E 80 00 20 */	blr 

.global draw__Q24Game9THPPlayerFR8Graphicsllf
draw__Q24Game9THPPlayerFR8Graphicsllf:
/* 804506F4 0044D634  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 804506F8 0044D638  7C 08 02 A6 */	mflr r0
/* 804506FC 0044D63C  90 01 00 44 */	stw r0, 0x44(r1)
/* 80450700 0044D640  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80450704 0044D644  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80450708 0044D648  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8045070C 0044D64C  7C 7B 1B 78 */	mr r27, r3
/* 80450710 0044D650  3C 00 43 30 */	lis r0, 0x4330
/* 80450714 0044D654  80 63 00 3C */	lwz r3, 0x3c(r3)
/* 80450718 0044D658  FF E0 08 90 */	fmr f31, f1
/* 8045071C 0044D65C  90 01 00 08 */	stw r0, 8(r1)
/* 80450720 0044D660  7C 9C 23 78 */	mr r28, r4
/* 80450724 0044D664  C8 22 27 B8 */	lfd f1, lbl_80520B18@sda21(r2)
/* 80450728 0044D668  7C BD 2B 78 */	mr r29, r5
/* 8045072C 0044D66C  90 61 00 0C */	stw r3, 0xc(r1)
/* 80450730 0044D670  7C DE 33 78 */	mr r30, r6
/* 80450734 0044D674  C8 01 00 08 */	lfd f0, 8(r1)
/* 80450738 0044D678  EC 00 08 28 */	fsubs f0, f0, f1
/* 8045073C 0044D67C  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80450740 0044D680  4B C7 14 0D */	bl __cvt_fp2unsigned
/* 80450744 0044D684  80 9B 00 38 */	lwz r4, 0x38(r27)
/* 80450748 0044D688  3C 00 43 30 */	lis r0, 0x4330
/* 8045074C 0044D68C  90 01 00 10 */	stw r0, 0x10(r1)
/* 80450750 0044D690  7C 7F 1B 78 */	mr r31, r3
/* 80450754 0044D694  C8 22 27 B8 */	lfd f1, lbl_80520B18@sda21(r2)
/* 80450758 0044D698  90 81 00 14 */	stw r4, 0x14(r1)
/* 8045075C 0044D69C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80450760 0044D6A0  EC 00 08 28 */	fsubs f0, f0, f1
/* 80450764 0044D6A4  EC 3F 00 32 */	fmuls f1, f31, f0
/* 80450768 0044D6A8  4B C7 13 E5 */	bl __cvt_fp2unsigned
/* 8045076C 0044D6AC  81 9B 00 00 */	lwz r12, 0(r27)
/* 80450770 0044D6B0  7C 67 1B 78 */	mr r7, r3
/* 80450774 0044D6B4  7F 63 DB 78 */	mr r3, r27
/* 80450778 0044D6B8  7F 84 E3 78 */	mr r4, r28
/* 8045077C 0044D6BC  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80450780 0044D6C0  7F A5 EB 78 */	mr r5, r29
/* 80450784 0044D6C4  7F C6 F3 78 */	mr r6, r30
/* 80450788 0044D6C8  7F E8 FB 78 */	mr r8, r31
/* 8045078C 0044D6CC  7D 89 03 A6 */	mtctr r12
/* 80450790 0044D6D0  4E 80 04 21 */	bctrl 
/* 80450794 0044D6D4  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80450798 0044D6D8  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8045079C 0044D6DC  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 804507A0 0044D6E0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 804507A4 0044D6E4  7C 08 03 A6 */	mtlr r0
/* 804507A8 0044D6E8  38 21 00 40 */	addi r1, r1, 0x40
/* 804507AC 0044D6EC  4E 80 00 20 */	blr 

.global draw__Q24Game9THPPlayerFR8GraphicsllUlUl
draw__Q24Game9THPPlayerFR8GraphicsllUlUl:
/* 804507B0 0044D6F0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 804507B4 0044D6F4  7C 08 02 A6 */	mflr r0
/* 804507B8 0044D6F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 804507BC 0044D6FC  BF 41 00 08 */	stmw r26, 8(r1)
/* 804507C0 0044D700  7C 7A 1B 78 */	mr r26, r3
/* 804507C4 0044D704  7C 9B 23 78 */	mr r27, r4
/* 804507C8 0044D708  7C BC 2B 78 */	mr r28, r5
/* 804507CC 0044D70C  7C DD 33 78 */	mr r29, r6
/* 804507D0 0044D710  7C FE 3B 78 */	mr r30, r7
/* 804507D4 0044D714  7D 1F 43 78 */	mr r31, r8
/* 804507D8 0044D718  48 00 00 61 */	bl isFinishLoading__Q24Game9THPPlayerFv
/* 804507DC 0044D71C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 804507E0 0044D720  41 82 00 44 */	beq .L_80450824
/* 804507E4 0044D724  38 7B 00 BC */	addi r3, r27, 0xbc
/* 804507E8 0044D728  81 9B 00 BC */	lwz r12, 0xbc(r27)
/* 804507EC 0044D72C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 804507F0 0044D730  7D 89 03 A6 */	mtctr r12
/* 804507F4 0044D734  4E 80 04 21 */	bctrl 
/* 804507F8 0044D738  4B FD 2A 2D */	bl getRenderModeObj__6SystemFv
/* 804507FC 0044D73C  7F 84 E3 78 */	mr r4, r28
/* 80450800 0044D740  7F A5 EB 78 */	mr r5, r29
/* 80450804 0044D744  7F C6 F3 78 */	mr r6, r30
/* 80450808 0044D748  7F E7 FB 78 */	mr r7, r31
/* 8045080C 0044D74C  4B FF E7 BD */	bl THPPlayerDrawCurrentFrame
/* 80450810 0044D750  90 7A 00 34 */	stw r3, 0x34(r26)
/* 80450814 0044D754  4B FF E9 91 */	bl THPPlayerDrawDone
/* 80450818 0044D758  80 7A 00 54 */	lwz r3, 0x54(r26)
/* 8045081C 0044D75C  7F 64 DB 78 */	mr r4, r27
/* 80450820 0044D760  48 00 05 ED */	bl draw__Q27Caption3MgrFR8Graphics
.L_80450824:
/* 80450824 0044D764  BB 41 00 08 */	lmw r26, 8(r1)
/* 80450828 0044D768  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8045082C 0044D76C  7C 08 03 A6 */	mtlr r0
/* 80450830 0044D770  38 21 00 20 */	addi r1, r1, 0x20
/* 80450834 0044D774  4E 80 00 20 */	blr 

.global isFinishLoading__Q24Game9THPPlayerFv
isFinishLoading__Q24Game9THPPlayerFv:
/* 80450838 0044D778  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8045083C 0044D77C  7C 08 02 A6 */	mflr r0
/* 80450840 0044D780  90 01 00 14 */	stw r0, 0x14(r1)
/* 80450844 0044D784  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80450848 0044D788  3B E0 00 00 */	li r31, 0
/* 8045084C 0044D78C  93 C1 00 08 */	stw r30, 8(r1)
/* 80450850 0044D790  7C 7E 1B 78 */	mr r30, r3
/* 80450854 0044D794  38 9E 00 5C */	addi r4, r30, 0x5c
/* 80450858 0044D798  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8045085C 0044D79C  4B FD 2D 79 */	bl dvdLoadSyncNoBlock__6SystemFP16DvdThreadCommand
/* 80450860 0044D7A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 80450864 0044D7A4  40 82 00 10 */	bne .L_80450874
/* 80450868 0044D7A8  80 1E 00 30 */	lwz r0, 0x30(r30)
/* 8045086C 0044D7AC  2C 00 00 00 */	cmpwi r0, 0
/* 80450870 0044D7B0  40 82 00 08 */	bne .L_80450878
.L_80450874:
/* 80450874 0044D7B4  3B E0 00 01 */	li r31, 1
.L_80450878:
/* 80450878 0044D7B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8045087C 0044D7BC  7F E3 FB 78 */	mr r3, r31
/* 80450880 0044D7C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80450884 0044D7C4  83 C1 00 08 */	lwz r30, 8(r1)
/* 80450888 0044D7C8  7C 08 03 A6 */	mtlr r0
/* 8045088C 0044D7CC  38 21 00 10 */	addi r1, r1, 0x10
/* 80450890 0044D7D0  4E 80 00 20 */	blr 

.global isFinishPlaying__Q24Game9THPPlayerFv
isFinishPlaying__Q24Game9THPPlayerFv:
/* 80450894 0044D7D4  3C 60 80 51 */	lis r3, ActivePlayer@ha
/* 80450898 0044D7D8  38 63 44 90 */	addi r3, r3, ActivePlayer@l
/* 8045089C 0044D7DC  88 03 00 A4 */	lbz r0, 0xa4(r3)
/* 804508A0 0044D7E0  20 00 00 03 */	subfic r0, r0, 3
/* 804508A4 0044D7E4  7C 00 00 34 */	cntlzw r0, r0
/* 804508A8 0044D7E8  54 03 D9 7E */	srwi r3, r0, 5
/* 804508AC 0044D7EC  4E 80 00 20 */	blr 

.global "invoke__27Delegate<Q24Game9THPPlayer>Fv"
"invoke__27Delegate<Q24Game9THPPlayer>Fv":
/* 804508B0 0044D7F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804508B4 0044D7F4  7C 08 02 A6 */	mflr r0
/* 804508B8 0044D7F8  7C 64 1B 78 */	mr r4, r3
/* 804508BC 0044D7FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 804508C0 0044D800  39 84 00 08 */	addi r12, r4, 8
/* 804508C4 0044D804  80 63 00 04 */	lwz r3, 4(r3)
/* 804508C8 0044D808  4B C7 12 5D */	bl __ptmf_scall
/* 804508CC 0044D80C  60 00 00 00 */	nop 
/* 804508D0 0044D810  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804508D4 0044D814  7C 08 03 A6 */	mtlr r0
/* 804508D8 0044D818  38 21 00 10 */	addi r1, r1, 0x10
/* 804508DC 0044D81C  4E 80 00 20 */	blr 

.global "@24@__dt__Q24Game9THPPlayerFv"
"@24@__dt__Q24Game9THPPlayerFv": # weak function
/* 804508E0 0044D820  38 63 FF E8 */	addi r3, r3, -24
/* 804508E4 0044D824  4B FF F6 24 */	b __dt__Q24Game9THPPlayerFv
