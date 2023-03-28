.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047EFA8, local
	.asciz "Navi::Parms"
.endobj lbl_8047EFA8
.balign 4
.obj lbl_8047EFB4, local # Shift-JIS
	.4byte 0x90E693AA
	.4byte 0x83498374
	.4byte 0x835A8362
	.4byte 0x83670000
.endobj lbl_8047EFB4
.balign 4
.obj lbl_8047EFC4, local # Shift-JIS
	.4byte 0x92B782B3
	.4byte 0x838A837E
	.4byte 0x83628367
	.byte 0
.endobj lbl_8047EFC4
.balign 4
.obj lbl_8047EFD4, local # Shift-JIS
	.4byte 0x837C8357
	.4byte 0x83568387
	.4byte 0x839382CC
	.4byte 0x91E582AB
	.4byte 0x82B3288D
	.4byte 0xC591E529
	.byte 0
.endobj lbl_8047EFD4
.balign 4
.obj lbl_8047EFF0, local
	.asciz "gameCPlate.cpp"
.endobj lbl_8047EFF0
.balign 4
.obj lbl_8047F000, local
	.asciz "P2Assert"
.endobj lbl_8047F000
.balign 4
.obj lbl_8047F00C, local
	.asciz " sorry ...\n"
.endobj lbl_8047F00C
.balign 4
.obj lbl_8047F018, local
	.asciz "col %d : sort failed !\n"
.endobj lbl_8047F018
.balign 4
.obj lbl_8047F030, local
	.asciz "invalid slot idx %d\n"
.endobj lbl_8047F030

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj "__vt__27Container<Q24Game8Creature>", weak
	.4byte 0
	.4byte 0
	.4byte "__dt__27Container<Q24Game8Creature>Fv"
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8Creature>FPv"
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "getAt__27Container<Q24Game8Creature>Fi"
	.4byte "getTo__27Container<Q24Game8Creature>Fv"
.endobj "__vt__27Container<Q24Game8Creature>"
.obj __vt__Q24Game6CPlate, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q24Game6CPlateFv
	.4byte getChildCount__5CNodeFv
	.4byte "getObject__27Container<Q24Game8Creature>FPv"
	.4byte getNext__Q24Game6CPlateFPv
	.4byte getStart__Q24Game6CPlateFv
	.4byte getEnd__Q24Game6CPlateFv
	.4byte get__Q24Game6CPlateFPv
	.4byte "getAt__27Container<Q24Game8Creature>Fi"
	.4byte "getTo__27Container<Q24Game8Creature>Fv"
.endobj __vt__Q24Game6CPlate

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518EF0, local
	.float 17.5
.endobj lbl_80518EF0
.obj lbl_80518EF4, local
	.float 0.0
.endobj lbl_80518EF4
.obj lbl_80518EF8, local
	.float 100.0
.endobj lbl_80518EF8
.obj lbl_80518EFC, local
	.float 130.0
.endobj lbl_80518EFC
.obj lbl_80518F00, local
	.float 10.0
.endobj lbl_80518F00
.obj lbl_80518F04, local
	.float 1000.0
.endobj lbl_80518F04
.obj lbl_80518F08, local
	.float 6.0
.endobj lbl_80518F08
.obj lbl_80518F0C, local
	.float 1.0
.endobj lbl_80518F0C
.obj lbl_80518F10, local
	.float 50.0
.endobj lbl_80518F10
.obj lbl_80518F14, local
	.float 5.0
.endobj lbl_80518F14
.obj lbl_80518F18, local
	.float 325.9493
.endobj lbl_80518F18
.obj lbl_80518F1C, local
	.float -325.9493
.endobj lbl_80518F1C
.obj lbl_80518F20, local
	.float 0.5
.endobj lbl_80518F20
.obj lbl_80518F24, local # pi
	.float 3.1415927
.endobj lbl_80518F24
.obj lbl_80518F28, local
	.float 2.1
.endobj lbl_80518F28
.obj lbl_80518F2C, local
	.float 1.9
.endobj lbl_80518F2C
.obj lbl_80518F30, local
	.float 4.0
.endobj lbl_80518F30
.balign 8
.obj lbl_80518F38, local
	.8byte 0x4330000080000000
.endobj lbl_80518F38
.obj lbl_80518F40, local
	.float 2.0
.endobj lbl_80518F40
.obj lbl_80518F44, local
	.float 0.1
.endobj lbl_80518F44

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn get__Q24Game6CPlateFPv, global
/* 80194FF4 00191F34  80 63 00 C0 */	lwz r3, 0xc0(r3)
/* 80194FF8 00191F38  54 80 28 34 */	slwi r0, r4, 5
/* 80194FFC 00191F3C  7C 63 02 14 */	add r3, r3, r0
/* 80195000 00191F40  80 63 00 18 */	lwz r3, 0x18(r3)
/* 80195004 00191F44  4E 80 00 20 */	blr 
.endfn get__Q24Game6CPlateFPv

.fn getNext__Q24Game6CPlateFPv, global
/* 80195008 00191F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8019500C 00191F4C  7C 08 02 A6 */	mflr r0
/* 80195010 00191F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 80195014 00191F54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80195018 00191F58  7C 9F 23 78 */	mr r31, r4
/* 8019501C 00191F5C  81 83 00 00 */	lwz r12, 0(r3)
/* 80195020 00191F60  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 80195024 00191F64  7D 89 03 A6 */	mtctr r12
/* 80195028 00191F68  4E 80 04 21 */	bctrl 
/* 8019502C 00191F6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80195030 00191F70  38 7F 00 01 */	addi r3, r31, 1
/* 80195034 00191F74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80195038 00191F78  7C 08 03 A6 */	mtlr r0
/* 8019503C 00191F7C  38 21 00 10 */	addi r1, r1, 0x10
/* 80195040 00191F80  4E 80 00 20 */	blr 
.endfn getNext__Q24Game6CPlateFPv

.fn getStart__Q24Game6CPlateFv, global
/* 80195044 00191F84  38 60 00 00 */	li r3, 0
/* 80195048 00191F88  4E 80 00 20 */	blr 
.endfn getStart__Q24Game6CPlateFv

.fn getEnd__Q24Game6CPlateFv, global
/* 8019504C 00191F8C  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80195050 00191F90  4E 80 00 20 */	blr 
.endfn getEnd__Q24Game6CPlateFv

.fn shrink__Q24Game6CPlateFv, global
/* 80195054 00191F94  38 00 00 0A */	li r0, 0xa
/* 80195058 00191F98  98 03 01 00 */	stb r0, 0x100(r3)
/* 8019505C 00191F9C  4E 80 00 20 */	blr 
.endfn shrink__Q24Game6CPlateFv

.fn __ct__Q24Game6CPlateFi, global
/* 80195060 00191FA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80195064 00191FA4  7C 08 02 A6 */	mflr r0
/* 80195068 00191FA8  3C A0 80 48 */	lis r5, lbl_8047EFA8@ha
/* 8019506C 00191FAC  90 01 00 24 */	stw r0, 0x24(r1)
/* 80195070 00191FB0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80195074 00191FB4  3B E5 EF A8 */	addi r31, r5, lbl_8047EFA8@l
/* 80195078 00191FB8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019507C 00191FBC  7C 9E 23 78 */	mr r30, r4
/* 80195080 00191FC0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80195084 00191FC4  7C 7D 1B 78 */	mr r29, r3
/* 80195088 00191FC8  7F A0 EB 78 */	mr r0, r29
/* 8019508C 00191FCC  93 81 00 10 */	stw r28, 0x10(r1)
/* 80195090 00191FD0  7C 1C 03 78 */	mr r28, r0
/* 80195094 00191FD4  48 27 C2 FD */	bl __ct__5CNodeFv
/* 80195098 00191FD8  3C 60 80 4B */	lis r3, __vt__16GenericContainer@ha
/* 8019509C 00191FDC  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 801950A0 00191FE0  38 03 AC DC */	addi r0, r3, __vt__16GenericContainer@l
/* 801950A4 00191FE4  39 00 00 00 */	li r8, 0
/* 801950A8 00191FE8  3C 60 80 4B */	lis r3, "__vt__27Container<Q24Game8Creature>"@ha
/* 801950AC 00191FEC  90 1C 00 00 */	stw r0, 0(r28)
/* 801950B0 00191FF0  38 03 4A 08 */	addi r0, r3, "__vt__27Container<Q24Game8Creature>"@l
/* 801950B4 00191FF4  38 FD 00 A0 */	addi r7, r29, 0xa0
/* 801950B8 00191FF8  90 1C 00 00 */	stw r0, 0(r28)
/* 801950BC 00191FFC  3C 60 80 4B */	lis r3, __vt__Q24Game6CPlate@ha
/* 801950C0 00192000  38 C3 4A 34 */	addi r6, r3, __vt__Q24Game6CPlate@l
/* 801950C4 00192004  38 9D 00 1C */	addi r4, r29, 0x1c
/* 801950C8 00192008  99 1C 00 18 */	stb r8, 0x18(r28)
/* 801950CC 0019200C  38 1F 00 00 */	addi r0, r31, 0
/* 801950D0 00192010  38 64 00 0C */	addi r3, r4, 0xc
/* 801950D4 00192014  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 801950D8 00192018  90 DD 00 00 */	stw r6, 0(r29)
/* 801950DC 0019201C  38 DF 00 0C */	addi r6, r31, 0xc
/* 801950E0 00192020  90 FD 00 1C */	stw r7, 0x1c(r29)
/* 801950E4 00192024  91 1D 00 20 */	stw r8, 0x20(r29)
/* 801950E8 00192028  90 1D 00 24 */	stw r0, 0x24(r29)
/* 801950EC 0019202C  48 27 E5 6D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 801950F0 00192030  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 801950F4 00192034  3C A0 70 30 */	lis r5, 0x70303031@ha
/* 801950F8 00192038  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 801950FC 0019203C  38 9D 00 1C */	addi r4, r29, 0x1c
/* 80195100 00192040  90 1D 00 28 */	stw r0, 0x28(r29)
/* 80195104 00192044  38 64 00 34 */	addi r3, r4, 0x34
/* 80195108 00192048  C0 02 AB 90 */	lfs f0, lbl_80518EF0@sda21(r2)
/* 8019510C 0019204C  38 A5 30 31 */	addi r5, r5, 0x70303031@l
/* 80195110 00192050  C0 22 AB 94 */	lfs f1, lbl_80518EF4@sda21(r2)
/* 80195114 00192054  38 DF 00 1C */	addi r6, r31, 0x1c
/* 80195118 00192058  D0 1D 00 40 */	stfs f0, 0x40(r29)
/* 8019511C 0019205C  C0 02 AB 98 */	lfs f0, lbl_80518EF8@sda21(r2)
/* 80195120 00192060  D0 3D 00 48 */	stfs f1, 0x48(r29)
/* 80195124 00192064  D0 1D 00 4C */	stfs f0, 0x4c(r29)
/* 80195128 00192068  48 27 E5 31 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8019512C 0019206C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80195130 00192070  3C A0 70 30 */	lis r5, 0x70303032@ha
/* 80195134 00192074  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80195138 00192078  38 9D 00 1C */	addi r4, r29, 0x1c
/* 8019513C 0019207C  90 1D 00 50 */	stw r0, 0x50(r29)
/* 80195140 00192080  38 64 00 5C */	addi r3, r4, 0x5c
/* 80195144 00192084  C0 02 AB 9C */	lfs f0, lbl_80518EFC@sda21(r2)
/* 80195148 00192088  38 A5 30 32 */	addi r5, r5, 0x70303032@l
/* 8019514C 0019208C  C0 22 AB A0 */	lfs f1, lbl_80518F00@sda21(r2)
/* 80195150 00192090  38 DF 00 2C */	addi r6, r31, 0x2c
/* 80195154 00192094  D0 1D 00 68 */	stfs f0, 0x68(r29)
/* 80195158 00192098  C0 02 AB A4 */	lfs f0, lbl_80518F04@sda21(r2)
/* 8019515C 0019209C  D0 3D 00 70 */	stfs f1, 0x70(r29)
/* 80195160 001920A0  D0 1D 00 74 */	stfs f0, 0x74(r29)
/* 80195164 001920A4  48 27 E4 F5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80195168 001920A8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 8019516C 001920AC  C0 22 AB A8 */	lfs f1, lbl_80518F08@sda21(r2)
/* 80195170 001920B0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80195174 001920B4  C0 02 AB AC */	lfs f0, lbl_80518F0C@sda21(r2)
/* 80195178 001920B8  90 1D 00 78 */	stw r0, 0x78(r29)
/* 8019517C 001920BC  C0 42 AB B0 */	lfs f2, lbl_80518F10@sda21(r2)
/* 80195180 001920C0  D0 3D 00 90 */	stfs f1, 0x90(r29)
/* 80195184 001920C4  C0 22 AB A0 */	lfs f1, lbl_80518F00@sda21(r2)
/* 80195188 001920C8  D0 1D 00 98 */	stfs f0, 0x98(r29)
/* 8019518C 001920CC  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195190 001920D0  D0 5D 00 9C */	stfs f2, 0x9c(r29)
/* 80195194 001920D4  93 DD 00 C4 */	stw r30, 0xc4(r29)
/* 80195198 001920D8  D0 3D 00 B4 */	stfs f1, 0xb4(r29)
/* 8019519C 001920DC  D0 3D 00 B0 */	stfs f1, 0xb0(r29)
/* 801951A0 001920E0  D0 1D 00 CC */	stfs f0, 0xcc(r29)
/* 801951A4 001920E4  D0 1D 00 D0 */	stfs f0, 0xd0(r29)
/* 801951A8 001920E8  D0 1D 00 D4 */	stfs f0, 0xd4(r29)
/* 801951AC 001920EC  D0 1D 00 F0 */	stfs f0, 0xf0(r29)
/* 801951B0 001920F0  83 DD 00 C4 */	lwz r30, 0xc4(r29)
/* 801951B4 001920F4  57 C3 28 34 */	slwi r3, r30, 5
/* 801951B8 001920F8  38 63 00 10 */	addi r3, r3, 0x10
/* 801951BC 001920FC  4B E8 ED F1 */	bl __nwa__FUl
/* 801951C0 00192100  3C 80 80 19 */	lis r4, __ct__Q34Game6CPlate4SlotFv@ha
/* 801951C4 00192104  7F C7 F3 78 */	mr r7, r30
/* 801951C8 00192108  38 84 52 50 */	addi r4, r4, __ct__Q34Game6CPlate4SlotFv@l
/* 801951CC 0019210C  38 A0 00 00 */	li r5, 0
/* 801951D0 00192110  38 C0 00 20 */	li r6, 0x20
/* 801951D4 00192114  4B F2 C8 1D */	bl __construct_new_array
/* 801951D8 00192118  90 7D 00 C0 */	stw r3, 0xc0(r29)
/* 801951DC 0019211C  38 80 00 00 */	li r4, 0
/* 801951E0 00192120  38 00 00 01 */	li r0, 1
/* 801951E4 00192124  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 801951E8 00192128  90 9D 00 BC */	stw r4, 0xbc(r29)
/* 801951EC 0019212C  7F A3 EB 78 */	mr r3, r29
/* 801951F0 00192130  90 9D 00 C8 */	stw r4, 0xc8(r29)
/* 801951F4 00192134  98 9D 01 10 */	stb r4, 0x110(r29)
/* 801951F8 00192138  98 1D 01 11 */	stb r0, 0x111(r29)
/* 801951FC 0019213C  D0 1D 00 F4 */	stfs f0, 0xf4(r29)
/* 80195200 00192140  D0 1D 00 F8 */	stfs f0, 0xf8(r29)
/* 80195204 00192144  D0 1D 00 FC */	stfs f0, 0xfc(r29)
/* 80195208 00192148  90 9D 01 04 */	stw r4, 0x104(r29)
/* 8019520C 0019214C  90 9D 01 08 */	stw r4, 0x108(r29)
/* 80195210 00192150  90 9D 01 0C */	stw r4, 0x10c(r29)
/* 80195214 00192154  D0 1D 00 E4 */	stfs f0, 0xe4(r29)
/* 80195218 00192158  D0 1D 00 E8 */	stfs f0, 0xe8(r29)
/* 8019521C 0019215C  D0 1D 00 EC */	stfs f0, 0xec(r29)
/* 80195220 00192160  D0 1D 00 D8 */	stfs f0, 0xd8(r29)
/* 80195224 00192164  D0 1D 00 DC */	stfs f0, 0xdc(r29)
/* 80195228 00192168  D0 1D 00 E0 */	stfs f0, 0xe0(r29)
/* 8019522C 0019216C  98 9D 01 00 */	stb r4, 0x100(r29)
/* 80195230 00192170  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80195234 00192174  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 80195238 00192178  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8019523C 0019217C  83 81 00 10 */	lwz r28, 0x10(r1)
/* 80195240 00192180  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195244 00192184  7C 08 03 A6 */	mtlr r0
/* 80195248 00192188  38 21 00 20 */	addi r1, r1, 0x20
/* 8019524C 0019218C  4E 80 00 20 */	blr 
.endfn __ct__Q24Game6CPlateFi

.fn __ct__Q34Game6CPlate4SlotFv, weak
/* 80195250 00192190  38 00 00 00 */	li r0, 0
/* 80195254 00192194  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195258 00192198  90 03 00 18 */	stw r0, 0x18(r3)
/* 8019525C 0019219C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 80195260 001921A0  D0 03 00 00 */	stfs f0, 0(r3)
/* 80195264 001921A4  D0 03 00 04 */	stfs f0, 4(r3)
/* 80195268 001921A8  D0 03 00 08 */	stfs f0, 8(r3)
/* 8019526C 001921AC  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80195270 001921B0  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 80195274 001921B4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 80195278 001921B8  4E 80 00 20 */	blr 
.endfn __ct__Q34Game6CPlate4SlotFv

.fn "__dt__27Container<Q24Game8Creature>Fv", weak
/* 8019527C 001921BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80195280 001921C0  7C 08 02 A6 */	mflr r0
/* 80195284 001921C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80195288 001921C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8019528C 001921CC  7C 9F 23 78 */	mr r31, r4
/* 80195290 001921D0  93 C1 00 08 */	stw r30, 8(r1)
/* 80195294 001921D4  7C 7E 1B 79 */	or. r30, r3, r3
/* 80195298 001921D8  41 82 00 38 */	beq .L_801952D0
/* 8019529C 001921DC  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8Creature>"@ha
/* 801952A0 001921E0  38 04 4A 08 */	addi r0, r4, "__vt__27Container<Q24Game8Creature>"@l
/* 801952A4 001921E4  90 1E 00 00 */	stw r0, 0(r30)
/* 801952A8 001921E8  41 82 00 18 */	beq .L_801952C0
/* 801952AC 001921EC  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801952B0 001921F0  38 80 00 00 */	li r4, 0
/* 801952B4 001921F4  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 801952B8 001921F8  90 1E 00 00 */	stw r0, 0(r30)
/* 801952BC 001921FC  48 27 C2 CD */	bl __dt__5CNodeFv
.L_801952C0:
/* 801952C0 00192200  7F E0 07 35 */	extsh. r0, r31
/* 801952C4 00192204  40 81 00 0C */	ble .L_801952D0
/* 801952C8 00192208  7F C3 F3 78 */	mr r3, r30
/* 801952CC 0019220C  4B E8 ED E9 */	bl __dl__FPv
.L_801952D0:
/* 801952D0 00192210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801952D4 00192214  7F C3 F3 78 */	mr r3, r30
/* 801952D8 00192218  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 801952DC 0019221C  83 C1 00 08 */	lwz r30, 8(r1)
/* 801952E0 00192220  7C 08 03 A6 */	mtlr r0
/* 801952E4 00192224  38 21 00 10 */	addi r1, r1, 0x10
/* 801952E8 00192228  4E 80 00 20 */	blr 
.endfn "__dt__27Container<Q24Game8Creature>Fv"

.fn "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f", global
/* 801952EC 0019222C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 801952F0 00192230  C0 83 00 E4 */	lfs f4, 0xe4(r3)
/* 801952F4 00192234  C0 03 00 EC */	lfs f0, 0xec(r3)
/* 801952F8 00192238  EC 64 01 32 */	fmuls f3, f4, f4
/* 801952FC 0019223C  C0 C3 00 40 */	lfs f6, 0x40(r3)
/* 80195300 00192240  EC A0 00 32 */	fmuls f5, f0, f0
/* 80195304 00192244  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195308 00192248  EC C6 00 B2 */	fmuls f6, f6, f2
/* 8019530C 0019224C  EC 43 28 2A */	fadds f2, f3, f5
/* 80195310 00192250  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80195314 00192254  40 81 00 1C */	ble .L_80195330
/* 80195318 00192258  EC 44 29 3A */	fmadds f2, f4, f4, f5
/* 8019531C 0019225C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80195320 00192260  40 81 00 14 */	ble .L_80195334
/* 80195324 00192264  FC 00 10 34 */	frsqrte f0, f2
/* 80195328 00192268  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8019532C 0019226C  48 00 00 08 */	b .L_80195334
.L_80195330:
/* 80195330 00192270  FC 40 00 90 */	fmr f2, f0
.L_80195334:
/* 80195334 00192274  C0 02 AB B4 */	lfs f0, lbl_80518F14@sda21(r2)
/* 80195338 00192278  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019533C 0019227C  40 81 00 08 */	ble .L_80195344
/* 80195340 00192280  C0 C2 AB 94 */	lfs f6, lbl_80518EF4@sda21(r2)
.L_80195344:
/* 80195344 00192284  C0 43 00 B0 */	lfs f2, 0xb0(r3)
/* 80195348 00192288  FC 80 08 90 */	fmr f4, f1
/* 8019534C 0019228C  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195350 00192290  D0 23 00 F0 */	stfs f1, 0xf0(r3)
/* 80195354 00192294  EC C2 30 2A */	fadds f6, f2, f6
/* 80195358 00192298  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019535C 0019229C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80195360 001922A0  D0 03 00 CC */	stfs f0, 0xcc(r3)
/* 80195364 001922A4  C0 04 00 04 */	lfs f0, 4(r4)
/* 80195368 001922A8  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 8019536C 001922AC  C0 04 00 08 */	lfs f0, 8(r4)
/* 80195370 001922B0  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80195374 001922B4  40 80 00 08 */	bge .L_8019537C
/* 80195378 001922B8  FC 80 08 50 */	fneg f4, f1
.L_8019537C:
/* 8019537C 001922BC  C0 62 AB B8 */	lfs f3, lbl_80518F18@sda21(r2)
/* 80195380 001922C0  3C C0 80 50 */	lis r6, sincosTable___5JMath@ha
/* 80195384 001922C4  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195388 001922C8  38 C6 71 A0 */	addi r6, r6, sincosTable___5JMath@l
/* 8019538C 001922CC  EC 44 00 F2 */	fmuls f2, f4, f3
/* 80195390 001922D0  38 E6 00 04 */	addi r7, r6, 4
/* 80195394 001922D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195398 001922D8  FC 00 10 1E */	fctiwz f0, f2
/* 8019539C 001922DC  D8 01 00 08 */	stfd f0, 8(r1)
/* 801953A0 001922E0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801953A4 001922E4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801953A8 001922E8  7C 07 04 2E */	lfsx f0, r7, r0
/* 801953AC 001922EC  EC A6 00 32 */	fmuls f5, f6, f0
/* 801953B0 001922F0  40 80 00 28 */	bge .L_801953D8
/* 801953B4 001922F4  C0 02 AB BC */	lfs f0, lbl_80518F1C@sda21(r2)
/* 801953B8 001922F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 801953BC 001922FC  FC 00 00 1E */	fctiwz f0, f0
/* 801953C0 00192300  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801953C4 00192304  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801953C8 00192308  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801953CC 0019230C  7C 06 04 2E */	lfsx f0, r6, r0
/* 801953D0 00192310  FC 00 00 50 */	fneg f0, f0
/* 801953D4 00192314  48 00 00 1C */	b .L_801953F0
.L_801953D8:
/* 801953D8 00192318  EC 01 00 F2 */	fmuls f0, f1, f3
/* 801953DC 0019231C  FC 00 00 1E */	fctiwz f0, f0
/* 801953E0 00192320  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 801953E4 00192324  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801953E8 00192328  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801953EC 0019232C  7C 06 04 2E */	lfsx f0, r6, r0
.L_801953F0:
/* 801953F0 00192330  EC 06 00 32 */	fmuls f0, f6, f0
/* 801953F4 00192334  C0 43 00 CC */	lfs f2, 0xcc(r3)
/* 801953F8 00192338  C0 62 AB 94 */	lfs f3, lbl_80518EF4@sda21(r2)
/* 801953FC 0019233C  FC C0 08 90 */	fmr f6, f1
/* 80195400 00192340  C0 83 00 D0 */	lfs f4, 0xd0(r3)
/* 80195404 00192344  EC 02 00 2A */	fadds f0, f2, f0
/* 80195408 00192348  C0 43 00 D4 */	lfs f2, 0xd4(r3)
/* 8019540C 0019234C  EC 84 18 2A */	fadds f4, f4, f3
/* 80195410 00192350  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80195414 00192354  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80195418 00192358  EC 02 28 2A */	fadds f0, f2, f5
/* 8019541C 0019235C  D0 83 00 DC */	stfs f4, 0xdc(r3)
/* 80195420 00192360  D0 03 00 E0 */	stfs f0, 0xe0(r3)
/* 80195424 00192364  C0 05 00 00 */	lfs f0, 0(r5)
/* 80195428 00192368  D0 03 00 E4 */	stfs f0, 0xe4(r3)
/* 8019542C 0019236C  C0 05 00 04 */	lfs f0, 4(r5)
/* 80195430 00192370  D0 03 00 E8 */	stfs f0, 0xe8(r3)
/* 80195434 00192374  C0 05 00 08 */	lfs f0, 8(r5)
/* 80195438 00192378  D0 03 00 EC */	stfs f0, 0xec(r3)
/* 8019543C 0019237C  40 80 00 08 */	bge .L_80195444
/* 80195440 00192380  FC C0 08 50 */	fneg f6, f1
.L_80195444:
/* 80195444 00192384  C0 62 AB B8 */	lfs f3, lbl_80518F18@sda21(r2)
/* 80195448 00192388  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 8019544C 0019238C  EC 46 00 F2 */	fmuls f2, f6, f3
/* 80195450 00192390  C0 A3 00 B8 */	lfs f5, 0xb8(r3)
/* 80195454 00192394  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195458 00192398  FC 00 10 1E */	fctiwz f0, f2
/* 8019545C 0019239C  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 80195460 001923A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195464 001923A4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80195468 001923A8  7C 07 04 2E */	lfsx f0, r7, r0
/* 8019546C 001923AC  EC 85 00 32 */	fmuls f4, f5, f0
/* 80195470 001923B0  40 80 00 30 */	bge .L_801954A0
/* 80195474 001923B4  C0 02 AB BC */	lfs f0, lbl_80518F1C@sda21(r2)
/* 80195478 001923B8  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8019547C 001923BC  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 80195480 001923C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 80195484 001923C4  FC 00 00 1E */	fctiwz f0, f0
/* 80195488 001923C8  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 8019548C 001923CC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80195490 001923D0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80195494 001923D4  7C 05 04 2E */	lfsx f0, r5, r0
/* 80195498 001923D8  FC 00 00 50 */	fneg f0, f0
/* 8019549C 001923DC  48 00 00 24 */	b .L_801954C0
.L_801954A0:
/* 801954A0 001923E0  EC 01 00 F2 */	fmuls f0, f1, f3
/* 801954A4 001923E4  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 801954A8 001923E8  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 801954AC 001923EC  FC 00 00 1E */	fctiwz f0, f0
/* 801954B0 001923F0  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 801954B4 001923F4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801954B8 001923F8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801954BC 001923FC  7C 05 04 2E */	lfsx f0, r5, r0
.L_801954C0:
/* 801954C0 00192400  EC 05 00 32 */	fmuls f0, f5, f0
/* 801954C4 00192404  C0 24 00 00 */	lfs f1, 0(r4)
/* 801954C8 00192408  C0 64 00 08 */	lfs f3, 8(r4)
/* 801954CC 0019240C  38 00 00 00 */	li r0, 0
/* 801954D0 00192410  C0 44 00 04 */	lfs f2, 4(r4)
/* 801954D4 00192414  EC 01 00 2A */	fadds f0, f1, f0
/* 801954D8 00192418  C0 22 AB 94 */	lfs f1, lbl_80518EF4@sda21(r2)
/* 801954DC 0019241C  EC 63 20 2A */	fadds f3, f3, f4
/* 801954E0 00192420  EC 22 08 2A */	fadds f1, f2, f1
/* 801954E4 00192424  D0 03 00 A4 */	stfs f0, 0xa4(r3)
/* 801954E8 00192428  D0 23 00 A8 */	stfs f1, 0xa8(r3)
/* 801954EC 0019242C  D0 63 00 AC */	stfs f3, 0xac(r3)
/* 801954F0 00192430  98 03 01 11 */	stb r0, 0x111(r3)
/* 801954F4 00192434  38 21 00 40 */	addi r1, r1, 0x40
/* 801954F8 00192438  4E 80 00 20 */	blr 
.endfn "setPos__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"

.fn "setPosGray__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f", global
/* 801954FC 0019243C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80195500 00192440  C0 83 00 E4 */	lfs f4, 0xe4(r3)
/* 80195504 00192444  C0 03 00 EC */	lfs f0, 0xec(r3)
/* 80195508 00192448  EC 64 01 32 */	fmuls f3, f4, f4
/* 8019550C 0019244C  C0 C3 00 40 */	lfs f6, 0x40(r3)
/* 80195510 00192450  EC A0 00 32 */	fmuls f5, f0, f0
/* 80195514 00192454  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195518 00192458  EC C6 00 B2 */	fmuls f6, f6, f2
/* 8019551C 0019245C  EC 43 28 2A */	fadds f2, f3, f5
/* 80195520 00192460  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80195524 00192464  40 81 00 1C */	ble .L_80195540
/* 80195528 00192468  EC 44 29 3A */	fmadds f2, f4, f4, f5
/* 8019552C 0019246C  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 80195530 00192470  40 81 00 14 */	ble .L_80195544
/* 80195534 00192474  FC 00 10 34 */	frsqrte f0, f2
/* 80195538 00192478  EC 40 00 B2 */	fmuls f2, f0, f2
/* 8019553C 0019247C  48 00 00 08 */	b .L_80195544
.L_80195540:
/* 80195540 00192480  FC 40 00 90 */	fmr f2, f0
.L_80195544:
/* 80195544 00192484  C0 02 AB B4 */	lfs f0, lbl_80518F14@sda21(r2)
/* 80195548 00192488  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8019554C 0019248C  40 81 00 08 */	ble .L_80195554
/* 80195550 00192490  C0 C2 AB 94 */	lfs f6, lbl_80518EF4@sda21(r2)
.L_80195554:
/* 80195554 00192494  C0 63 00 B0 */	lfs f3, 0xb0(r3)
/* 80195558 00192498  FC 80 08 90 */	fmr f4, f1
/* 8019555C 0019249C  C0 44 00 00 */	lfs f2, 0(r4)
/* 80195560 001924A0  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195564 001924A4  EC C3 30 2A */	fadds f6, f3, f6
/* 80195568 001924A8  D0 43 00 CC */	stfs f2, 0xcc(r3)
/* 8019556C 001924AC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195570 001924B0  C0 04 00 04 */	lfs f0, 4(r4)
/* 80195574 001924B4  D0 03 00 D0 */	stfs f0, 0xd0(r3)
/* 80195578 001924B8  C0 04 00 08 */	lfs f0, 8(r4)
/* 8019557C 001924BC  D0 03 00 D4 */	stfs f0, 0xd4(r3)
/* 80195580 001924C0  40 80 00 08 */	bge .L_80195588
/* 80195584 001924C4  FC 80 08 50 */	fneg f4, f1
.L_80195588:
/* 80195588 001924C8  C0 62 AB B8 */	lfs f3, lbl_80518F18@sda21(r2)
/* 8019558C 001924CC  3C C0 80 50 */	lis r6, sincosTable___5JMath@ha
/* 80195590 001924D0  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195594 001924D4  38 C6 71 A0 */	addi r6, r6, sincosTable___5JMath@l
/* 80195598 001924D8  EC 44 00 F2 */	fmuls f2, f4, f3
/* 8019559C 001924DC  38 E6 00 04 */	addi r7, r6, 4
/* 801955A0 001924E0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 801955A4 001924E4  FC 00 10 1E */	fctiwz f0, f2
/* 801955A8 001924E8  D8 01 00 08 */	stfd f0, 8(r1)
/* 801955AC 001924EC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 801955B0 001924F0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801955B4 001924F4  7C 07 04 2E */	lfsx f0, r7, r0
/* 801955B8 001924F8  EC A6 00 32 */	fmuls f5, f6, f0
/* 801955BC 001924FC  40 80 00 28 */	bge .L_801955E4
/* 801955C0 00192500  C0 02 AB BC */	lfs f0, lbl_80518F1C@sda21(r2)
/* 801955C4 00192504  EC 01 00 32 */	fmuls f0, f1, f0
/* 801955C8 00192508  FC 00 00 1E */	fctiwz f0, f0
/* 801955CC 0019250C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 801955D0 00192510  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801955D4 00192514  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801955D8 00192518  7C 06 04 2E */	lfsx f0, r6, r0
/* 801955DC 0019251C  FC 00 00 50 */	fneg f0, f0
/* 801955E0 00192520  48 00 00 1C */	b .L_801955FC
.L_801955E4:
/* 801955E4 00192524  EC 01 00 F2 */	fmuls f0, f1, f3
/* 801955E8 00192528  FC 00 00 1E */	fctiwz f0, f0
/* 801955EC 0019252C  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 801955F0 00192530  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 801955F4 00192534  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801955F8 00192538  7C 06 04 2E */	lfsx f0, r6, r0
.L_801955FC:
/* 801955FC 0019253C  EC 06 00 32 */	fmuls f0, f6, f0
/* 80195600 00192540  C0 43 00 CC */	lfs f2, 0xcc(r3)
/* 80195604 00192544  C0 62 AB 94 */	lfs f3, lbl_80518EF4@sda21(r2)
/* 80195608 00192548  FC C0 08 90 */	fmr f6, f1
/* 8019560C 0019254C  C0 83 00 D0 */	lfs f4, 0xd0(r3)
/* 80195610 00192550  EC 02 00 2A */	fadds f0, f2, f0
/* 80195614 00192554  C0 43 00 D4 */	lfs f2, 0xd4(r3)
/* 80195618 00192558  EC 84 18 2A */	fadds f4, f4, f3
/* 8019561C 0019255C  FC 01 18 40 */	fcmpo cr0, f1, f3
/* 80195620 00192560  D0 03 00 D8 */	stfs f0, 0xd8(r3)
/* 80195624 00192564  EC 02 28 2A */	fadds f0, f2, f5
/* 80195628 00192568  D0 83 00 DC */	stfs f4, 0xdc(r3)
/* 8019562C 0019256C  D0 03 00 E0 */	stfs f0, 0xe0(r3)
/* 80195630 00192570  C0 05 00 00 */	lfs f0, 0(r5)
/* 80195634 00192574  D0 03 00 E4 */	stfs f0, 0xe4(r3)
/* 80195638 00192578  C0 05 00 04 */	lfs f0, 4(r5)
/* 8019563C 0019257C  D0 03 00 E8 */	stfs f0, 0xe8(r3)
/* 80195640 00192580  C0 05 00 08 */	lfs f0, 8(r5)
/* 80195644 00192584  D0 03 00 EC */	stfs f0, 0xec(r3)
/* 80195648 00192588  40 80 00 08 */	bge .L_80195650
/* 8019564C 0019258C  FC C0 08 50 */	fneg f6, f1
.L_80195650:
/* 80195650 00192590  C0 62 AB B8 */	lfs f3, lbl_80518F18@sda21(r2)
/* 80195654 00192594  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80195658 00192598  EC 46 00 F2 */	fmuls f2, f6, f3
/* 8019565C 0019259C  C0 A3 00 B8 */	lfs f5, 0xb8(r3)
/* 80195660 001925A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80195664 001925A4  FC 00 10 1E */	fctiwz f0, f2
/* 80195668 001925A8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8019566C 001925AC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195670 001925B0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 80195674 001925B4  7C 07 04 2E */	lfsx f0, r7, r0
/* 80195678 001925B8  EC 85 00 32 */	fmuls f4, f5, f0
/* 8019567C 001925BC  40 80 00 30 */	bge .L_801956AC
/* 80195680 001925C0  C0 02 AB BC */	lfs f0, lbl_80518F1C@sda21(r2)
/* 80195684 001925C4  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 80195688 001925C8  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 8019568C 001925CC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80195690 001925D0  FC 00 00 1E */	fctiwz f0, f0
/* 80195694 001925D4  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 80195698 001925D8  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8019569C 001925DC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801956A0 001925E0  7C 05 04 2E */	lfsx f0, r5, r0
/* 801956A4 001925E4  FC 00 00 50 */	fneg f0, f0
/* 801956A8 001925E8  48 00 00 24 */	b .L_801956CC
.L_801956AC:
/* 801956AC 001925EC  EC 01 00 F2 */	fmuls f0, f1, f3
/* 801956B0 001925F0  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 801956B4 001925F4  38 A5 71 A0 */	addi r5, r5, sincosTable___5JMath@l
/* 801956B8 001925F8  FC 00 00 1E */	fctiwz f0, f0
/* 801956BC 001925FC  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 801956C0 00192600  80 01 00 34 */	lwz r0, 0x34(r1)
/* 801956C4 00192604  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 801956C8 00192608  7C 05 04 2E */	lfsx f0, r5, r0
.L_801956CC:
/* 801956CC 0019260C  EC 05 00 32 */	fmuls f0, f5, f0
/* 801956D0 00192610  C0 24 00 00 */	lfs f1, 0(r4)
/* 801956D4 00192614  C0 64 00 08 */	lfs f3, 8(r4)
/* 801956D8 00192618  38 00 00 00 */	li r0, 0
/* 801956DC 0019261C  C0 44 00 04 */	lfs f2, 4(r4)
/* 801956E0 00192620  EC 01 00 2A */	fadds f0, f1, f0
/* 801956E4 00192624  C0 22 AB 94 */	lfs f1, lbl_80518EF4@sda21(r2)
/* 801956E8 00192628  EC 63 20 2A */	fadds f3, f3, f4
/* 801956EC 0019262C  EC 22 08 2A */	fadds f1, f2, f1
/* 801956F0 00192630  D0 03 00 A4 */	stfs f0, 0xa4(r3)
/* 801956F4 00192634  D0 23 00 A8 */	stfs f1, 0xa8(r3)
/* 801956F8 00192638  D0 63 00 AC */	stfs f3, 0xac(r3)
/* 801956FC 0019263C  98 03 01 11 */	stb r0, 0x111(r3)
/* 80195700 00192640  38 21 00 40 */	addi r1, r1, 0x40
/* 80195704 00192644  4E 80 00 20 */	blr 
.endfn "setPosGray__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>f"

.fn getSlot__Q24Game6CPlateFPQ24Game8CreaturePQ24Game18SlotChangeListenerb, global
/* 80195708 00192648  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019570C 0019264C  7C 08 02 A6 */	mflr r0
/* 80195710 00192650  90 01 00 24 */	stw r0, 0x24(r1)
/* 80195714 00192654  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 80195718 00192658  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8019571C 0019265C  7C BF 2B 78 */	mr r31, r5
/* 80195720 00192660  93 C1 00 18 */	stw r30, 0x18(r1)
/* 80195724 00192664  7C 9E 23 78 */	mr r30, r4
/* 80195728 00192668  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8019572C 0019266C  7C 7D 1B 78 */	mr r29, r3
/* 80195730 00192670  40 82 00 20 */	bne .L_80195750
/* 80195734 00192674  80 7E 02 C4 */	lwz r3, 0x2c4(r30)
/* 80195738 00192678  4B FA BD 6D */	bl getOlimarData__Q24Game4NaviFv
/* 8019573C 0019267C  80 1D 00 C8 */	lwz r0, 0xc8(r29)
/* 80195740 00192680  2C 00 00 64 */	cmpwi r0, 0x64
/* 80195744 00192684  41 80 00 0C */	blt .L_80195750
/* 80195748 00192688  38 60 FF FF */	li r3, -1
/* 8019574C 0019268C  48 00 00 48 */	b .L_80195794
.L_80195750:
/* 80195750 00192690  88 1E 02 B9 */	lbz r0, 0x2b9(r30)
/* 80195754 00192694  54 00 10 3A */	slwi r0, r0, 2
/* 80195758 00192698  7C 9D 02 14 */	add r4, r29, r0
/* 8019575C 0019269C  80 64 01 04 */	lwz r3, 0x104(r4)
/* 80195760 001926A0  38 03 00 01 */	addi r0, r3, 1
/* 80195764 001926A4  90 04 01 04 */	stw r0, 0x104(r4)
/* 80195768 001926A8  80 7D 00 C8 */	lwz r3, 0xc8(r29)
/* 8019576C 001926AC  80 1D 00 C0 */	lwz r0, 0xc0(r29)
/* 80195770 001926B0  54 65 28 34 */	slwi r5, r3, 5
/* 80195774 001926B4  7C 80 2A 14 */	add r4, r0, r5
/* 80195778 001926B8  93 C4 00 18 */	stw r30, 0x18(r4)
/* 8019577C 001926BC  80 1D 00 C0 */	lwz r0, 0xc0(r29)
/* 80195780 001926C0  7C 80 2A 14 */	add r4, r0, r5
/* 80195784 001926C4  93 E4 00 1C */	stw r31, 0x1c(r4)
/* 80195788 001926C8  80 9D 00 C8 */	lwz r4, 0xc8(r29)
/* 8019578C 001926CC  38 04 00 01 */	addi r0, r4, 1
/* 80195790 001926D0  90 1D 00 C8 */	stw r0, 0xc8(r29)
.L_80195794:
/* 80195794 001926D4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195798 001926D8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8019579C 001926DC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801957A0 001926E0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801957A4 001926E4  7C 08 03 A6 */	mtlr r0
/* 801957A8 001926E8  38 21 00 20 */	addi r1, r1, 0x20
/* 801957AC 001926EC  4E 80 00 20 */	blr 
.endfn getSlot__Q24Game6CPlateFPQ24Game8CreaturePQ24Game18SlotChangeListenerb

.fn changeFlower__Q24Game6CPlateFPQ24Game8Creature, global
/* 801957B0 001926F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801957B4 001926F4  7C 08 02 A6 */	mflr r0
/* 801957B8 001926F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 801957BC 001926FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801957C0 00192700  7C 7F 1B 78 */	mr r31, r3
/* 801957C4 00192704  93 C1 00 08 */	stw r30, 8(r1)
/* 801957C8 00192708  7C 9E 23 78 */	mr r30, r4
/* 801957CC 0019270C  7F C3 F3 78 */	mr r3, r30
/* 801957D0 00192710  81 9E 00 00 */	lwz r12, 0(r30)
/* 801957D4 00192714  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 801957D8 00192718  7D 89 03 A6 */	mtctr r12
/* 801957DC 0019271C  4E 80 04 21 */	bctrl 
/* 801957E0 00192720  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801957E4 00192724  40 82 00 20 */	bne .L_80195804
/* 801957E8 00192728  3C 60 80 48 */	lis r3, lbl_8047EFF0@ha
/* 801957EC 0019272C  3C A0 80 48 */	lis r5, lbl_8047F000@ha
/* 801957F0 00192730  38 63 EF F0 */	addi r3, r3, lbl_8047EFF0@l
/* 801957F4 00192734  38 80 01 38 */	li r4, 0x138
/* 801957F8 00192738  38 A5 F0 00 */	addi r5, r5, lbl_8047F000@l
/* 801957FC 0019273C  4C C6 31 82 */	crclr 6
/* 80195800 00192740  4B E9 4E 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_80195804:
/* 80195804 00192744  88 BE 02 B9 */	lbz r5, 0x2b9(r30)
/* 80195808 00192748  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 8019580C 0019274C  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 80195810 00192750  38 85 00 02 */	addi r4, r5, 2
/* 80195814 00192754  54 A5 10 3A */	slwi r5, r5, 2
/* 80195818 00192758  7C 60 20 96 */	mulhw r3, r0, r4
/* 8019581C 0019275C  7C DF 2A 14 */	add r6, r31, r5
/* 80195820 00192760  80 A6 01 04 */	lwz r5, 0x104(r6)
/* 80195824 00192764  38 A5 00 01 */	addi r5, r5, 1
/* 80195828 00192768  54 60 0F FE */	srwi r0, r3, 0x1f
/* 8019582C 0019276C  90 A6 01 04 */	stw r5, 0x104(r6)
/* 80195830 00192770  7C 03 02 14 */	add r0, r3, r0
/* 80195834 00192774  1C 00 00 03 */	mulli r0, r0, 3
/* 80195838 00192778  7C 00 20 50 */	subf r0, r0, r4
/* 8019583C 0019277C  54 00 10 3A */	slwi r0, r0, 2
/* 80195840 00192780  7C 9F 02 14 */	add r4, r31, r0
/* 80195844 00192784  80 64 01 04 */	lwz r3, 0x104(r4)
/* 80195848 00192788  38 03 FF FF */	addi r0, r3, -1
/* 8019584C 0019278C  90 04 01 04 */	stw r0, 0x104(r4)
/* 80195850 00192790  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80195854 00192794  83 C1 00 08 */	lwz r30, 8(r1)
/* 80195858 00192798  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019585C 0019279C  7C 08 03 A6 */	mtlr r0
/* 80195860 001927A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80195864 001927A4  4E 80 00 20 */	blr 
.endfn changeFlower__Q24Game6CPlateFPQ24Game8Creature

.fn releaseSlot__Q24Game6CPlateFPQ24Game8Creaturei, global
/* 80195868 001927A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8019586C 001927AC  7C 08 02 A6 */	mflr r0
/* 80195870 001927B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 80195874 001927B4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 80195878 001927B8  54 BF 28 34 */	slwi r31, r5, 5
/* 8019587C 001927BC  7C 9D 23 78 */	mr r29, r4
/* 80195880 001927C0  7C 7C 1B 78 */	mr r28, r3
/* 80195884 001927C4  7C BE 2B 78 */	mr r30, r5
/* 80195888 001927C8  80 03 00 C0 */	lwz r0, 0xc0(r3)
/* 8019588C 001927CC  7F 60 FA 14 */	add r27, r0, r31
/* 80195890 001927D0  80 1B 00 18 */	lwz r0, 0x18(r27)
/* 80195894 001927D4  7C 00 E8 40 */	cmplw r0, r29
/* 80195898 001927D8  41 82 00 20 */	beq .L_801958B8
/* 8019589C 001927DC  3C 60 80 48 */	lis r3, lbl_8047EFF0@ha
/* 801958A0 001927E0  3C A0 80 48 */	lis r5, lbl_8047F00C@ha
/* 801958A4 001927E4  38 63 EF F0 */	addi r3, r3, lbl_8047EFF0@l
/* 801958A8 001927E8  38 80 01 4B */	li r4, 0x14b
/* 801958AC 001927EC  38 A5 F0 0C */	addi r5, r5, lbl_8047F00C@l
/* 801958B0 001927F0  4C C6 31 82 */	crclr 6
/* 801958B4 001927F4  4B E9 4D 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_801958B8:
/* 801958B8 001927F8  88 7D 02 B9 */	lbz r3, 0x2b9(r29)
/* 801958BC 001927FC  38 00 00 00 */	li r0, 0
/* 801958C0 00192800  54 63 10 3A */	slwi r3, r3, 2
/* 801958C4 00192804  7C 9C 1A 14 */	add r4, r28, r3
/* 801958C8 00192808  80 64 01 04 */	lwz r3, 0x104(r4)
/* 801958CC 0019280C  38 63 FF FF */	addi r3, r3, -1
/* 801958D0 00192810  90 64 01 04 */	stw r3, 0x104(r4)
/* 801958D4 00192814  90 1B 00 18 */	stw r0, 0x18(r27)
/* 801958D8 00192818  80 7C 00 C8 */	lwz r3, 0xc8(r28)
/* 801958DC 0019281C  38 03 FF FF */	addi r0, r3, -1
/* 801958E0 00192820  90 1C 00 C8 */	stw r0, 0xc8(r28)
/* 801958E4 00192824  80 7C 00 BC */	lwz r3, 0xbc(r28)
/* 801958E8 00192828  38 03 FF FF */	addi r0, r3, -1
/* 801958EC 0019282C  90 1C 00 BC */	stw r0, 0xbc(r28)
/* 801958F0 00192830  80 1C 00 C8 */	lwz r0, 0xc8(r28)
/* 801958F4 00192834  2C 00 00 00 */	cmpwi r0, 0
/* 801958F8 00192838  40 80 00 18 */	bge .L_80195910
/* 801958FC 0019283C  7F A3 EB 78 */	mr r3, r29
/* 80195900 00192840  81 9D 00 00 */	lwz r12, 0(r29)
/* 80195904 00192844  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80195908 00192848  7D 89 03 A6 */	mtctr r12
/* 8019590C 0019284C  4E 80 04 21 */	bctrl 
.L_80195910:
/* 80195910 00192850  7F DB F3 78 */	mr r27, r30
/* 80195914 00192854  3B A0 00 00 */	li r29, 0
/* 80195918 00192858  48 00 00 58 */	b .L_80195970
.L_8019591C:
/* 8019591C 0019285C  80 BC 00 C0 */	lwz r5, 0xc0(r28)
/* 80195920 00192860  38 7F 00 18 */	addi r3, r31, 0x18
/* 80195924 00192864  38 1F 00 1C */	addi r0, r31, 0x1c
/* 80195928 00192868  7F 64 DB 78 */	mr r4, r27
/* 8019592C 0019286C  7F A5 19 2E */	stwx r29, r5, r3
/* 80195930 00192870  80 7C 00 C0 */	lwz r3, 0xc0(r28)
/* 80195934 00192874  7C A3 FA 14 */	add r5, r3, r31
/* 80195938 00192878  80 65 00 38 */	lwz r3, 0x38(r5)
/* 8019593C 0019287C  90 65 00 18 */	stw r3, 0x18(r5)
/* 80195940 00192880  80 7C 00 C0 */	lwz r3, 0xc0(r28)
/* 80195944 00192884  7C A3 FA 14 */	add r5, r3, r31
/* 80195948 00192888  80 65 00 3C */	lwz r3, 0x3c(r5)
/* 8019594C 0019288C  90 65 00 1C */	stw r3, 0x1c(r5)
/* 80195950 00192890  80 7C 00 C0 */	lwz r3, 0xc0(r28)
/* 80195954 00192894  7C 63 00 2E */	lwzx r3, r3, r0
/* 80195958 00192898  81 83 00 00 */	lwz r12, 0(r3)
/* 8019595C 0019289C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195960 001928A0  7D 89 03 A6 */	mtctr r12
/* 80195964 001928A4  4E 80 04 21 */	bctrl 
/* 80195968 001928A8  3B FF 00 20 */	addi r31, r31, 0x20
/* 8019596C 001928AC  3B 7B 00 01 */	addi r27, r27, 1
.L_80195970:
/* 80195970 001928B0  80 1C 00 C8 */	lwz r0, 0xc8(r28)
/* 80195974 001928B4  7C 1B 00 00 */	cmpw r27, r0
/* 80195978 001928B8  41 80 FF A4 */	blt .L_8019591C
/* 8019597C 001928BC  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 80195980 001928C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195984 001928C4  7C 08 03 A6 */	mtlr r0
/* 80195988 001928C8  38 21 00 20 */	addi r1, r1, 0x20
/* 8019598C 001928CC  4E 80 00 20 */	blr 
.endfn releaseSlot__Q24Game6CPlateFPQ24Game8Creaturei

.fn validSlot__Q24Game6CPlateFi, global
/* 80195990 001928D0  2C 04 00 00 */	cmpwi r4, 0
/* 80195994 001928D4  41 80 00 10 */	blt .L_801959A4
/* 80195998 001928D8  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 8019599C 001928DC  7C 04 00 00 */	cmpw r4, r0
/* 801959A0 001928E0  41 80 00 0C */	blt .L_801959AC
.L_801959A4:
/* 801959A4 001928E4  38 60 00 00 */	li r3, 0
/* 801959A8 001928E8  4E 80 00 20 */	blr 
.L_801959AC:
/* 801959AC 001928EC  38 60 00 01 */	li r3, 1
/* 801959B0 001928F0  4E 80 00 20 */	blr 
.endfn validSlot__Q24Game6CPlateFi

.fn sortByColor__Q24Game6CPlateFPQ24Game8Creaturei, global
/* 801959B4 001928F4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 801959B8 001928F8  7C 08 02 A6 */	mflr r0
/* 801959BC 001928FC  3C C0 92 49 */	lis r6, 0x92492493@ha
/* 801959C0 00192900  90 01 00 64 */	stw r0, 0x64(r1)
/* 801959C4 00192904  39 46 24 93 */	addi r10, r6, 0x92492493@l
/* 801959C8 00192908  BE C1 00 38 */	stmw r22, 0x38(r1)
/* 801959CC 0019290C  7C BE 2B 78 */	mr r30, r5
/* 801959D0 00192910  7C 7D 1B 78 */	mr r29, r3
/* 801959D4 00192914  2C 1E FF FF */	cmpwi r30, -1
/* 801959D8 00192918  89 64 02 B8 */	lbz r11, 0x2b8(r4)
/* 801959DC 0019291C  8B E4 02 B9 */	lbz r31, 0x2b9(r4)
/* 801959E0 00192920  7C EA 58 96 */	mulhw r7, r10, r11
/* 801959E4 00192924  39 0B 00 01 */	addi r8, r11, 1
/* 801959E8 00192928  38 0B 00 04 */	addi r0, r11, 4
/* 801959EC 0019292C  38 CB 00 02 */	addi r6, r11, 2
/* 801959F0 00192930  38 8B 00 03 */	addi r4, r11, 3
/* 801959F4 00192934  3B 6B 00 05 */	addi r27, r11, 5
/* 801959F8 00192938  7C AA 40 96 */	mulhw r5, r10, r8
/* 801959FC 0019293C  7C E7 5A 14 */	add r7, r7, r11
/* 80195A00 00192940  3B 0B 00 06 */	addi r24, r11, 6
/* 80195A04 00192944  7C E9 16 70 */	srawi r9, r7, 2
/* 80195A08 00192948  55 2C 0F FE */	srwi r12, r9, 0x1f
/* 80195A0C 0019294C  7C A5 42 14 */	add r5, r5, r8
/* 80195A10 00192950  7C B9 16 70 */	srawi r25, r5, 2
/* 80195A14 00192954  7D 29 62 14 */	add r9, r9, r12
/* 80195A18 00192958  7C EA 30 96 */	mulhw r7, r10, r6
/* 80195A1C 0019295C  57 3A 0F FE */	srwi r26, r25, 0x1f
/* 80195A20 00192960  7D 87 32 14 */	add r12, r7, r6
/* 80195A24 00192964  7C F9 D2 14 */	add r7, r25, r26
/* 80195A28 00192968  7D 99 16 70 */	srawi r25, r12, 2
/* 80195A2C 0019296C  7C AA 20 96 */	mulhw r5, r10, r4
/* 80195A30 00192970  57 3A 0F FE */	srwi r26, r25, 0x1f
/* 80195A34 00192974  7D 85 22 14 */	add r12, r5, r4
/* 80195A38 00192978  7C B9 D2 14 */	add r5, r25, r26
/* 80195A3C 0019297C  7D 9A 16 70 */	srawi r26, r12, 2
/* 80195A40 00192980  7C 6A 00 96 */	mulhw r3, r10, r0
/* 80195A44 00192984  57 5C 0F FE */	srwi r28, r26, 0x1f
/* 80195A48 00192988  7D 8A D8 96 */	mulhw r12, r10, r27
/* 80195A4C 0019298C  7F 23 02 14 */	add r25, r3, r0
/* 80195A50 00192990  7C 7A E2 14 */	add r3, r26, r28
/* 80195A54 00192994  7F 39 16 70 */	srawi r25, r25, 2
/* 80195A58 00192998  7D 4A C0 96 */	mulhw r10, r10, r24
/* 80195A5C 0019299C  57 3A 0F FE */	srwi r26, r25, 0x1f
/* 80195A60 001929A0  7D 8C DA 14 */	add r12, r12, r27
/* 80195A64 001929A4  7F 99 D2 14 */	add r28, r25, r26
/* 80195A68 001929A8  7D 99 16 70 */	srawi r25, r12, 2
/* 80195A6C 001929AC  1C A5 00 07 */	mulli r5, r5, 7
/* 80195A70 001929B0  7D 4A C2 14 */	add r10, r10, r24
/* 80195A74 001929B4  57 3A 0F FE */	srwi r26, r25, 0x1f
/* 80195A78 001929B8  7C A5 30 50 */	subf r5, r5, r6
/* 80195A7C 001929BC  7D 4A 16 70 */	srawi r10, r10, 2
/* 80195A80 001929C0  1C 63 00 07 */	mulli r3, r3, 7
/* 80195A84 001929C4  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 80195A88 001929C8  55 4C 0F FE */	srwi r12, r10, 0x1f
/* 80195A8C 001929CC  7F 39 D2 14 */	add r25, r25, r26
/* 80195A90 001929D0  1C BC 00 07 */	mulli r5, r28, 7
/* 80195A94 001929D4  7D 4A 62 14 */	add r10, r10, r12
/* 80195A98 001929D8  7C 63 20 50 */	subf r3, r3, r4
/* 80195A9C 001929DC  90 61 00 20 */	stw r3, 0x20(r1)
/* 80195AA0 001929E0  7C 05 00 50 */	subf r0, r5, r0
/* 80195AA4 001929E4  1D 29 00 07 */	mulli r9, r9, 7
/* 80195AA8 001929E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80195AAC 001929EC  1C E7 00 07 */	mulli r7, r7, 7
/* 80195AB0 001929F0  7D 29 58 50 */	subf r9, r9, r11
/* 80195AB4 001929F4  91 21 00 14 */	stw r9, 0x14(r1)
/* 80195AB8 001929F8  1C 79 00 07 */	mulli r3, r25, 7
/* 80195ABC 001929FC  7C E7 40 50 */	subf r7, r7, r8
/* 80195AC0 00192A00  90 E1 00 18 */	stw r7, 0x18(r1)
/* 80195AC4 00192A04  1C 0A 00 07 */	mulli r0, r10, 7
/* 80195AC8 00192A08  7C 63 D8 50 */	subf r3, r3, r27
/* 80195ACC 00192A0C  90 61 00 28 */	stw r3, 0x28(r1)
/* 80195AD0 00192A10  7C 00 C0 50 */	subf r0, r0, r24
/* 80195AD4 00192A14  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80195AD8 00192A18  41 82 00 64 */	beq .L_80195B3C
/* 80195ADC 00192A1C  3C 60 55 55 */	lis r3, 0x55555556@ha
/* 80195AE0 00192A20  38 FE 00 01 */	addi r7, r30, 1
/* 80195AE4 00192A24  38 03 55 56 */	addi r0, r3, 0x55555556@l
/* 80195AE8 00192A28  38 9E 00 02 */	addi r4, r30, 2
/* 80195AEC 00192A2C  7C C0 38 96 */	mulhw r6, r0, r7
/* 80195AF0 00192A30  57 C3 10 3A */	slwi r3, r30, 2
/* 80195AF4 00192A34  39 21 00 08 */	addi r9, r1, 8
/* 80195AF8 00192A38  38 A0 00 00 */	li r5, 0
/* 80195AFC 00192A3C  7C A9 19 2E */	stwx r5, r9, r3
/* 80195B00 00192A40  39 00 00 01 */	li r8, 1
/* 80195B04 00192A44  7C 60 20 96 */	mulhw r3, r0, r4
/* 80195B08 00192A48  54 C0 0F FE */	srwi r0, r6, 0x1f
/* 80195B0C 00192A4C  38 A0 00 02 */	li r5, 2
/* 80195B10 00192A50  7C 06 02 14 */	add r0, r6, r0
/* 80195B14 00192A54  1C C0 00 03 */	mulli r6, r0, 3
/* 80195B18 00192A58  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80195B1C 00192A5C  7C 03 02 14 */	add r0, r3, r0
/* 80195B20 00192A60  1C 00 00 03 */	mulli r0, r0, 3
/* 80195B24 00192A64  7C 66 38 50 */	subf r3, r6, r7
/* 80195B28 00192A68  54 63 10 3A */	slwi r3, r3, 2
/* 80195B2C 00192A6C  7C 00 20 50 */	subf r0, r0, r4
/* 80195B30 00192A70  7D 09 19 2E */	stwx r8, r9, r3
/* 80195B34 00192A74  54 00 10 3A */	slwi r0, r0, 2
/* 80195B38 00192A78  7C A9 01 2E */	stwx r5, r9, r0
.L_80195B3C:
/* 80195B3C 00192A7C  3B 20 00 00 */	li r25, 0
/* 80195B40 00192A80  3B 40 00 00 */	li r26, 0
/* 80195B44 00192A84  48 00 02 F0 */	b .L_80195E34
.L_80195B48:
/* 80195B48 00192A88  3B 00 00 00 */	li r24, 0
/* 80195B4C 00192A8C  3B 60 00 00 */	li r27, 0
/* 80195B50 00192A90  48 00 02 D0 */	b .L_80195E20
.L_80195B54:
/* 80195B54 00192A94  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80195B58 00192A98  38 03 00 18 */	addi r0, r3, 0x18
/* 80195B5C 00192A9C  7C A3 DA 14 */	add r5, r3, r27
/* 80195B60 00192AA0  7C 9A 00 2E */	lwzx r4, r26, r0
/* 80195B64 00192AA4  80 E5 00 18 */	lwz r7, 0x18(r5)
/* 80195B68 00192AA8  88 C4 02 B8 */	lbz r6, 0x2b8(r4)
/* 80195B6C 00192AAC  8B 87 02 B8 */	lbz r28, 0x2b8(r7)
/* 80195B70 00192AB0  7C 06 E0 00 */	cmpw r6, r28
/* 80195B74 00192AB4  41 82 01 E0 */	beq .L_80195D54
/* 80195B78 00192AB8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80195B7C 00192ABC  7C 06 00 00 */	cmpw r6, r0
/* 80195B80 00192AC0  40 82 00 0C */	bne .L_80195B8C
/* 80195B84 00192AC4  3A E0 00 00 */	li r23, 0
/* 80195B88 00192AC8  48 00 00 9C */	b .L_80195C24
.L_80195B8C:
/* 80195B8C 00192ACC  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80195B90 00192AD0  7C 06 00 00 */	cmpw r6, r0
/* 80195B94 00192AD4  40 82 00 0C */	bne .L_80195BA0
/* 80195B98 00192AD8  3A E0 00 01 */	li r23, 1
/* 80195B9C 00192ADC  48 00 00 88 */	b .L_80195C24
.L_80195BA0:
/* 80195BA0 00192AE0  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80195BA4 00192AE4  7C 06 00 00 */	cmpw r6, r0
/* 80195BA8 00192AE8  40 82 00 0C */	bne .L_80195BB4
/* 80195BAC 00192AEC  3A E0 00 02 */	li r23, 2
/* 80195BB0 00192AF0  48 00 00 74 */	b .L_80195C24
.L_80195BB4:
/* 80195BB4 00192AF4  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80195BB8 00192AF8  7C 06 00 00 */	cmpw r6, r0
/* 80195BBC 00192AFC  40 82 00 0C */	bne .L_80195BC8
/* 80195BC0 00192B00  3A E0 00 03 */	li r23, 3
/* 80195BC4 00192B04  48 00 00 60 */	b .L_80195C24
.L_80195BC8:
/* 80195BC8 00192B08  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195BCC 00192B0C  7C 06 00 00 */	cmpw r6, r0
/* 80195BD0 00192B10  40 82 00 0C */	bne .L_80195BDC
/* 80195BD4 00192B14  3A E0 00 04 */	li r23, 4
/* 80195BD8 00192B18  48 00 00 4C */	b .L_80195C24
.L_80195BDC:
/* 80195BDC 00192B1C  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80195BE0 00192B20  7C 06 00 00 */	cmpw r6, r0
/* 80195BE4 00192B24  40 82 00 0C */	bne .L_80195BF0
/* 80195BE8 00192B28  3A E0 00 05 */	li r23, 5
/* 80195BEC 00192B2C  48 00 00 38 */	b .L_80195C24
.L_80195BF0:
/* 80195BF0 00192B30  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80195BF4 00192B34  7C 06 00 00 */	cmpw r6, r0
/* 80195BF8 00192B38  40 82 00 0C */	bne .L_80195C04
/* 80195BFC 00192B3C  3A E0 00 06 */	li r23, 6
/* 80195C00 00192B40  48 00 00 24 */	b .L_80195C24
.L_80195C04:
/* 80195C04 00192B44  3C 60 80 48 */	lis r3, lbl_8047EFF0@ha
/* 80195C08 00192B48  3C 80 80 48 */	lis r4, lbl_8047F018@ha
/* 80195C0C 00192B4C  38 A4 F0 18 */	addi r5, r4, lbl_8047F018@l
/* 80195C10 00192B50  38 63 EF F0 */	addi r3, r3, lbl_8047EFF0@l
/* 80195C14 00192B54  38 80 01 95 */	li r4, 0x195
/* 80195C18 00192B58  4C C6 31 82 */	crclr 6
/* 80195C1C 00192B5C  4B E9 4A 25 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80195C20 00192B60  3A E0 00 80 */	li r23, 0x80
.L_80195C24:
/* 80195C24 00192B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80195C28 00192B68  7C 1C 00 00 */	cmpw r28, r0
/* 80195C2C 00192B6C  40 82 00 0C */	bne .L_80195C38
/* 80195C30 00192B70  38 00 00 00 */	li r0, 0
/* 80195C34 00192B74  48 00 00 A0 */	b .L_80195CD4
.L_80195C38:
/* 80195C38 00192B78  80 01 00 18 */	lwz r0, 0x18(r1)
/* 80195C3C 00192B7C  7C 1C 00 00 */	cmpw r28, r0
/* 80195C40 00192B80  40 82 00 0C */	bne .L_80195C4C
/* 80195C44 00192B84  38 00 00 01 */	li r0, 1
/* 80195C48 00192B88  48 00 00 8C */	b .L_80195CD4
.L_80195C4C:
/* 80195C4C 00192B8C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 80195C50 00192B90  7C 1C 00 00 */	cmpw r28, r0
/* 80195C54 00192B94  40 82 00 0C */	bne .L_80195C60
/* 80195C58 00192B98  38 00 00 02 */	li r0, 2
/* 80195C5C 00192B9C  48 00 00 78 */	b .L_80195CD4
.L_80195C60:
/* 80195C60 00192BA0  80 01 00 20 */	lwz r0, 0x20(r1)
/* 80195C64 00192BA4  7C 1C 00 00 */	cmpw r28, r0
/* 80195C68 00192BA8  40 82 00 0C */	bne .L_80195C74
/* 80195C6C 00192BAC  38 00 00 03 */	li r0, 3
/* 80195C70 00192BB0  48 00 00 64 */	b .L_80195CD4
.L_80195C74:
/* 80195C74 00192BB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195C78 00192BB8  7C 1C 00 00 */	cmpw r28, r0
/* 80195C7C 00192BBC  40 82 00 0C */	bne .L_80195C88
/* 80195C80 00192BC0  38 00 00 04 */	li r0, 4
/* 80195C84 00192BC4  48 00 00 50 */	b .L_80195CD4
.L_80195C88:
/* 80195C88 00192BC8  80 01 00 28 */	lwz r0, 0x28(r1)
/* 80195C8C 00192BCC  7C 1C 00 00 */	cmpw r28, r0
/* 80195C90 00192BD0  40 82 00 0C */	bne .L_80195C9C
/* 80195C94 00192BD4  38 00 00 05 */	li r0, 5
/* 80195C98 00192BD8  48 00 00 3C */	b .L_80195CD4
.L_80195C9C:
/* 80195C9C 00192BDC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 80195CA0 00192BE0  7C 1C 00 00 */	cmpw r28, r0
/* 80195CA4 00192BE4  40 82 00 0C */	bne .L_80195CB0
/* 80195CA8 00192BE8  38 00 00 06 */	li r0, 6
/* 80195CAC 00192BEC  48 00 00 28 */	b .L_80195CD4
.L_80195CB0:
/* 80195CB0 00192BF0  3C 60 80 48 */	lis r3, lbl_8047EFF0@ha
/* 80195CB4 00192BF4  3C 80 80 48 */	lis r4, lbl_8047F018@ha
/* 80195CB8 00192BF8  38 A4 F0 18 */	addi r5, r4, lbl_8047F018@l
/* 80195CBC 00192BFC  7F 86 E3 78 */	mr r6, r28
/* 80195CC0 00192C00  38 63 EF F0 */	addi r3, r3, lbl_8047EFF0@l
/* 80195CC4 00192C04  38 80 01 95 */	li r4, 0x195
/* 80195CC8 00192C08  4C C6 31 82 */	crclr 6
/* 80195CCC 00192C0C  4B E9 49 75 */	bl panic_f__12JUTExceptionFPCciPCce
/* 80195CD0 00192C10  38 00 00 80 */	li r0, 0x80
.L_80195CD4:
/* 80195CD4 00192C14  7C 18 C8 00 */	cmpw r24, r25
/* 80195CD8 00192C18  40 81 01 40 */	ble .L_80195E18
/* 80195CDC 00192C1C  7C 00 B8 00 */	cmpw r0, r23
/* 80195CE0 00192C20  40 80 01 38 */	bge .L_80195E18
/* 80195CE4 00192C24  80 7D 00 C0 */	lwz r3, 0xc0(r29)
/* 80195CE8 00192C28  38 00 00 00 */	li r0, 0
/* 80195CEC 00192C2C  7F 04 C3 78 */	mr r4, r24
/* 80195CF0 00192C30  7C C3 DA 14 */	add r6, r3, r27
/* 80195CF4 00192C34  7E C3 D2 14 */	add r22, r3, r26
/* 80195CF8 00192C38  83 86 00 18 */	lwz r28, 0x18(r6)
/* 80195CFC 00192C3C  82 E6 00 1C */	lwz r23, 0x1c(r6)
/* 80195D00 00192C40  80 B6 00 18 */	lwz r5, 0x18(r22)
/* 80195D04 00192C44  80 76 00 1C */	lwz r3, 0x1c(r22)
/* 80195D08 00192C48  90 06 00 18 */	stw r0, 0x18(r6)
/* 80195D0C 00192C4C  90 A6 00 18 */	stw r5, 0x18(r6)
/* 80195D10 00192C50  90 66 00 1C */	stw r3, 0x1c(r6)
/* 80195D14 00192C54  80 66 00 1C */	lwz r3, 0x1c(r6)
/* 80195D18 00192C58  81 83 00 00 */	lwz r12, 0(r3)
/* 80195D1C 00192C5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195D20 00192C60  7D 89 03 A6 */	mtctr r12
/* 80195D24 00192C64  4E 80 04 21 */	bctrl 
/* 80195D28 00192C68  38 00 00 00 */	li r0, 0
/* 80195D2C 00192C6C  7F 24 CB 78 */	mr r4, r25
/* 80195D30 00192C70  90 16 00 18 */	stw r0, 0x18(r22)
/* 80195D34 00192C74  93 96 00 18 */	stw r28, 0x18(r22)
/* 80195D38 00192C78  92 F6 00 1C */	stw r23, 0x1c(r22)
/* 80195D3C 00192C7C  80 76 00 1C */	lwz r3, 0x1c(r22)
/* 80195D40 00192C80  81 83 00 00 */	lwz r12, 0(r3)
/* 80195D44 00192C84  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195D48 00192C88  7D 89 03 A6 */	mtctr r12
/* 80195D4C 00192C8C  4E 80 04 21 */	bctrl 
/* 80195D50 00192C90  48 00 00 C8 */	b .L_80195E18
.L_80195D54:
/* 80195D54 00192C94  2C 1E FF FF */	cmpwi r30, -1
/* 80195D58 00192C98  40 82 00 30 */	bne .L_80195D88
/* 80195D5C 00192C9C  88 84 02 B9 */	lbz r4, 0x2b9(r4)
/* 80195D60 00192CA0  88 07 02 B9 */	lbz r0, 0x2b9(r7)
/* 80195D64 00192CA4  7C DF 20 50 */	subf r6, r31, r4
/* 80195D68 00192CA8  7C 84 F8 50 */	subf r4, r4, r31
/* 80195D6C 00192CAC  7C C6 23 78 */	or r6, r6, r4
/* 80195D70 00192CB0  7C 9F 00 50 */	subf r4, r31, r0
/* 80195D74 00192CB4  7C 00 F8 50 */	subf r0, r0, r31
/* 80195D78 00192CB8  7C 80 03 78 */	or r0, r4, r0
/* 80195D7C 00192CBC  54 C4 0F FE */	srwi r4, r6, 0x1f
/* 80195D80 00192CC0  54 00 0F FE */	srwi r0, r0, 0x1f
/* 80195D84 00192CC4  48 00 00 20 */	b .L_80195DA4
.L_80195D88:
/* 80195D88 00192CC8  88 84 02 B9 */	lbz r4, 0x2b9(r4)
/* 80195D8C 00192CCC  38 C1 00 08 */	addi r6, r1, 8
/* 80195D90 00192CD0  88 07 02 B9 */	lbz r0, 0x2b9(r7)
/* 80195D94 00192CD4  54 84 10 3A */	slwi r4, r4, 2
/* 80195D98 00192CD8  54 00 10 3A */	slwi r0, r0, 2
/* 80195D9C 00192CDC  7C 86 20 2E */	lwzx r4, r6, r4
/* 80195DA0 00192CE0  7C 06 00 2E */	lwzx r0, r6, r0
.L_80195DA4:
/* 80195DA4 00192CE4  7C 18 C8 00 */	cmpw r24, r25
/* 80195DA8 00192CE8  40 81 00 70 */	ble .L_80195E18
/* 80195DAC 00192CEC  7C 00 20 00 */	cmpw r0, r4
/* 80195DB0 00192CF0  40 80 00 68 */	bge .L_80195E18
/* 80195DB4 00192CF4  7F 83 D2 14 */	add r28, r3, r26
/* 80195DB8 00192CF8  82 E5 00 18 */	lwz r23, 0x18(r5)
/* 80195DBC 00192CFC  82 C5 00 1C */	lwz r22, 0x1c(r5)
/* 80195DC0 00192D00  38 00 00 00 */	li r0, 0
/* 80195DC4 00192D04  80 DC 00 18 */	lwz r6, 0x18(r28)
/* 80195DC8 00192D08  7F 04 C3 78 */	mr r4, r24
/* 80195DCC 00192D0C  80 7C 00 1C */	lwz r3, 0x1c(r28)
/* 80195DD0 00192D10  90 05 00 18 */	stw r0, 0x18(r5)
/* 80195DD4 00192D14  90 C5 00 18 */	stw r6, 0x18(r5)
/* 80195DD8 00192D18  90 65 00 1C */	stw r3, 0x1c(r5)
/* 80195DDC 00192D1C  80 65 00 1C */	lwz r3, 0x1c(r5)
/* 80195DE0 00192D20  81 83 00 00 */	lwz r12, 0(r3)
/* 80195DE4 00192D24  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195DE8 00192D28  7D 89 03 A6 */	mtctr r12
/* 80195DEC 00192D2C  4E 80 04 21 */	bctrl 
/* 80195DF0 00192D30  38 00 00 00 */	li r0, 0
/* 80195DF4 00192D34  7F 24 CB 78 */	mr r4, r25
/* 80195DF8 00192D38  90 1C 00 18 */	stw r0, 0x18(r28)
/* 80195DFC 00192D3C  92 FC 00 18 */	stw r23, 0x18(r28)
/* 80195E00 00192D40  92 DC 00 1C */	stw r22, 0x1c(r28)
/* 80195E04 00192D44  80 7C 00 1C */	lwz r3, 0x1c(r28)
/* 80195E08 00192D48  81 83 00 00 */	lwz r12, 0(r3)
/* 80195E0C 00192D4C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195E10 00192D50  7D 89 03 A6 */	mtctr r12
/* 80195E14 00192D54  4E 80 04 21 */	bctrl 
.L_80195E18:
/* 80195E18 00192D58  3B 7B 00 20 */	addi r27, r27, 0x20
/* 80195E1C 00192D5C  3B 18 00 01 */	addi r24, r24, 1
.L_80195E20:
/* 80195E20 00192D60  80 1D 00 C8 */	lwz r0, 0xc8(r29)
/* 80195E24 00192D64  7C 18 00 00 */	cmpw r24, r0
/* 80195E28 00192D68  41 80 FD 2C */	blt .L_80195B54
/* 80195E2C 00192D6C  3B 5A 00 20 */	addi r26, r26, 0x20
/* 80195E30 00192D70  3B 39 00 01 */	addi r25, r25, 1
.L_80195E34:
/* 80195E34 00192D74  80 1D 00 C8 */	lwz r0, 0xc8(r29)
/* 80195E38 00192D78  7C 19 00 00 */	cmpw r25, r0
/* 80195E3C 00192D7C  41 80 FD 0C */	blt .L_80195B48
/* 80195E40 00192D80  BA C1 00 38 */	lmw r22, 0x38(r1)
/* 80195E44 00192D84  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80195E48 00192D88  7C 08 03 A6 */	mtlr r0
/* 80195E4C 00192D8C  38 21 00 60 */	addi r1, r1, 0x60
/* 80195E50 00192D90  4E 80 00 20 */	blr 
.endfn sortByColor__Q24Game6CPlateFPQ24Game8Creaturei

.fn "rearrangeSlot__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>", global
/* 80195E54 00192D94  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 80195E58 00192D98  7C 08 02 A6 */	mflr r0
/* 80195E5C 00192D9C  90 01 00 64 */	stw r0, 0x64(r1)
/* 80195E60 00192DA0  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 80195E64 00192DA4  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 80195E68 00192DA8  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 80195E6C 00192DAC  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 80195E70 00192DB0  BF 01 00 20 */	stmw r24, 0x20(r1)
/* 80195E74 00192DB4  7C 7B 1B 78 */	mr r27, r3
/* 80195E78 00192DB8  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 80195E7C 00192DBC  C3 E2 AB 94 */	lfs f31, lbl_80518EF4@sda21(r2)
/* 80195E80 00192DC0  7C 9C 23 78 */	mr r28, r4
/* 80195E84 00192DC4  3B C3 FF FF */	addi r30, r3, -1
/* 80195E88 00192DC8  48 00 01 80 */	b .L_80196008
.L_80195E8C:
/* 80195E8C 00192DCC  7F DD F3 78 */	mr r29, r30
/* 80195E90 00192DD0  57 DF 28 34 */	slwi r31, r30, 5
/* 80195E94 00192DD4  48 00 01 68 */	b .L_80195FFC
.L_80195E98:
/* 80195E98 00192DD8  80 9B 00 C0 */	lwz r4, 0xc0(r27)
/* 80195E9C 00192DDC  38 1F 00 18 */	addi r0, r31, 0x18
/* 80195EA0 00192DE0  38 61 00 14 */	addi r3, r1, 0x14
/* 80195EA4 00192DE4  7C 84 00 2E */	lwzx r4, r4, r0
/* 80195EA8 00192DE8  81 84 00 00 */	lwz r12, 0(r4)
/* 80195EAC 00192DEC  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195EB0 00192DF0  7D 89 03 A6 */	mtctr r12
/* 80195EB4 00192DF4  4E 80 04 21 */	bctrl 
/* 80195EB8 00192DF8  C0 3C 00 04 */	lfs f1, 4(r28)
/* 80195EBC 00192DFC  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 80195EC0 00192E00  C0 7C 00 08 */	lfs f3, 8(r28)
/* 80195EC4 00192E04  EC 81 00 28 */	fsubs f4, f1, f0
/* 80195EC8 00192E08  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 80195ECC 00192E0C  C0 3C 00 00 */	lfs f1, 0(r28)
/* 80195ED0 00192E10  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 80195ED4 00192E14  EC 43 10 28 */	fsubs f2, f3, f2
/* 80195ED8 00192E18  EC 64 01 32 */	fmuls f3, f4, f4
/* 80195EDC 00192E1C  EC 01 00 28 */	fsubs f0, f1, f0
/* 80195EE0 00192E20  EC 22 00 B2 */	fmuls f1, f2, f2
/* 80195EE4 00192E24  EC 00 18 3A */	fmadds f0, f0, f0, f3
/* 80195EE8 00192E28  EF C1 00 2A */	fadds f30, f1, f0
/* 80195EEC 00192E2C  FC 1E F8 40 */	fcmpo cr0, f30, f31
/* 80195EF0 00192E30  40 81 00 14 */	ble .L_80195F04
/* 80195EF4 00192E34  40 81 00 14 */	ble .L_80195F08
/* 80195EF8 00192E38  FC 00 F0 34 */	frsqrte f0, f30
/* 80195EFC 00192E3C  EF C0 07 B2 */	fmuls f30, f0, f30
/* 80195F00 00192E40  48 00 00 08 */	b .L_80195F08
.L_80195F04:
/* 80195F04 00192E44  FF C0 F8 90 */	fmr f30, f31
.L_80195F08:
/* 80195F08 00192E48  80 9B 00 C0 */	lwz r4, 0xc0(r27)
/* 80195F0C 00192E4C  38 1F FF F8 */	addi r0, r31, -8
/* 80195F10 00192E50  38 61 00 08 */	addi r3, r1, 8
/* 80195F14 00192E54  7C 84 00 2E */	lwzx r4, r4, r0
/* 80195F18 00192E58  81 84 00 00 */	lwz r12, 0(r4)
/* 80195F1C 00192E5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195F20 00192E60  7D 89 03 A6 */	mtctr r12
/* 80195F24 00192E64  4E 80 04 21 */	bctrl 
/* 80195F28 00192E68  C0 3C 00 04 */	lfs f1, 4(r28)
/* 80195F2C 00192E6C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80195F30 00192E70  C0 7C 00 00 */	lfs f3, 0(r28)
/* 80195F34 00192E74  EC 81 00 28 */	fsubs f4, f1, f0
/* 80195F38 00192E78  C0 41 00 08 */	lfs f2, 8(r1)
/* 80195F3C 00192E7C  C0 3C 00 08 */	lfs f1, 8(r28)
/* 80195F40 00192E80  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80195F44 00192E84  EC 43 10 28 */	fsubs f2, f3, f2
/* 80195F48 00192E88  EC 64 01 32 */	fmuls f3, f4, f4
/* 80195F4C 00192E8C  EC 21 00 28 */	fsubs f1, f1, f0
/* 80195F50 00192E90  EC 02 18 BA */	fmadds f0, f2, f2, f3
/* 80195F54 00192E94  EC 21 00 72 */	fmuls f1, f1, f1
/* 80195F58 00192E98  EC 01 00 2A */	fadds f0, f1, f0
/* 80195F5C 00192E9C  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 80195F60 00192EA0  40 81 00 14 */	ble .L_80195F74
/* 80195F64 00192EA4  40 81 00 14 */	ble .L_80195F78
/* 80195F68 00192EA8  FC 20 00 34 */	frsqrte f1, f0
/* 80195F6C 00192EAC  EC 01 00 32 */	fmuls f0, f1, f0
/* 80195F70 00192EB0  48 00 00 08 */	b .L_80195F78
.L_80195F74:
/* 80195F74 00192EB4  FC 00 F8 90 */	fmr f0, f31
.L_80195F78:
/* 80195F78 00192EB8  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 80195F7C 00192EBC  40 80 00 78 */	bge .L_80195FF4
/* 80195F80 00192EC0  38 1D FF FF */	addi r0, r29, -1
/* 80195F84 00192EC4  80 BB 00 C0 */	lwz r5, 0xc0(r27)
/* 80195F88 00192EC8  54 03 28 34 */	slwi r3, r0, 5
/* 80195F8C 00192ECC  38 00 00 00 */	li r0, 0
/* 80195F90 00192ED0  7C C5 FA 14 */	add r6, r5, r31
/* 80195F94 00192ED4  7F A4 EB 78 */	mr r4, r29
/* 80195F98 00192ED8  7F 05 1A 14 */	add r24, r5, r3
/* 80195F9C 00192EDC  83 26 00 18 */	lwz r25, 0x18(r6)
/* 80195FA0 00192EE0  83 46 00 1C */	lwz r26, 0x1c(r6)
/* 80195FA4 00192EE4  80 B8 00 18 */	lwz r5, 0x18(r24)
/* 80195FA8 00192EE8  80 78 00 1C */	lwz r3, 0x1c(r24)
/* 80195FAC 00192EEC  90 06 00 18 */	stw r0, 0x18(r6)
/* 80195FB0 00192EF0  90 A6 00 18 */	stw r5, 0x18(r6)
/* 80195FB4 00192EF4  90 66 00 1C */	stw r3, 0x1c(r6)
/* 80195FB8 00192EF8  80 66 00 1C */	lwz r3, 0x1c(r6)
/* 80195FBC 00192EFC  81 83 00 00 */	lwz r12, 0(r3)
/* 80195FC0 00192F00  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195FC4 00192F04  7D 89 03 A6 */	mtctr r12
/* 80195FC8 00192F08  4E 80 04 21 */	bctrl 
/* 80195FCC 00192F0C  38 00 00 00 */	li r0, 0
/* 80195FD0 00192F10  38 9D FF FF */	addi r4, r29, -1
/* 80195FD4 00192F14  90 18 00 18 */	stw r0, 0x18(r24)
/* 80195FD8 00192F18  93 38 00 18 */	stw r25, 0x18(r24)
/* 80195FDC 00192F1C  93 58 00 1C */	stw r26, 0x1c(r24)
/* 80195FE0 00192F20  80 78 00 1C */	lwz r3, 0x1c(r24)
/* 80195FE4 00192F24  81 83 00 00 */	lwz r12, 0(r3)
/* 80195FE8 00192F28  81 8C 00 08 */	lwz r12, 8(r12)
/* 80195FEC 00192F2C  7D 89 03 A6 */	mtctr r12
/* 80195FF0 00192F30  4E 80 04 21 */	bctrl 
.L_80195FF4:
/* 80195FF4 00192F34  3B FF FF E0 */	addi r31, r31, -32
/* 80195FF8 00192F38  3B BD FF FF */	addi r29, r29, -1
.L_80195FFC:
/* 80195FFC 00192F3C  2C 1D 00 01 */	cmpwi r29, 1
/* 80196000 00192F40  40 80 FE 98 */	bge .L_80195E98
/* 80196004 00192F44  3B DE FF FF */	addi r30, r30, -1
.L_80196008:
/* 80196008 00192F48  2C 1E 00 01 */	cmpwi r30, 1
/* 8019600C 00192F4C  40 80 FE 80 */	bge .L_80195E8C
/* 80196010 00192F50  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 80196014 00192F54  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 80196018 00192F58  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 8019601C 00192F5C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 80196020 00192F60  BB 01 00 20 */	lmw r24, 0x20(r1)
/* 80196024 00192F64  80 01 00 64 */	lwz r0, 0x64(r1)
/* 80196028 00192F68  7C 08 03 A6 */	mtlr r0
/* 8019602C 00192F6C  38 21 00 60 */	addi r1, r1, 0x60
/* 80196030 00192F70  4E 80 00 20 */	blr 
.endfn "rearrangeSlot__Q24Game6CPlateFR10Vector3<f>fR10Vector3<f>"

.fn "getSlotPosition__Q24Game6CPlateFiR10Vector3<f>", global
/* 80196034 00192F74  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80196038 00192F78  7C 08 02 A6 */	mflr r0
/* 8019603C 00192F7C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80196040 00192F80  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80196044 00192F84  7C BF 2B 78 */	mr r31, r5
/* 80196048 00192F88  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8019604C 00192F8C  7C 9E 23 79 */	or. r30, r4, r4
/* 80196050 00192F90  93 A1 00 14 */	stw r29, 0x14(r1)
/* 80196054 00192F94  7C 7D 1B 78 */	mr r29, r3
/* 80196058 00192F98  41 80 00 10 */	blt .L_80196068
/* 8019605C 00192F9C  80 1D 00 C8 */	lwz r0, 0xc8(r29)
/* 80196060 00192FA0  7C 1E 00 00 */	cmpw r30, r0
/* 80196064 00192FA4  41 80 00 0C */	blt .L_80196070
.L_80196068:
/* 80196068 00192FA8  38 00 00 00 */	li r0, 0
/* 8019606C 00192FAC  48 00 00 08 */	b .L_80196074
.L_80196070:
/* 80196070 00192FB0  38 00 00 01 */	li r0, 1
.L_80196074:
/* 80196074 00192FB4  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 80196078 00192FB8  40 82 00 24 */	bne .L_8019609C
/* 8019607C 00192FBC  3C 60 80 48 */	lis r3, lbl_8047EFF0@ha
/* 80196080 00192FC0  3C 80 80 48 */	lis r4, lbl_8047F030@ha
/* 80196084 00192FC4  38 A4 F0 30 */	addi r5, r4, lbl_8047F030@l
/* 80196088 00192FC8  7F C6 F3 78 */	mr r6, r30
/* 8019608C 00192FCC  38 63 EF F0 */	addi r3, r3, lbl_8047EFF0@l
/* 80196090 00192FD0  38 80 02 73 */	li r4, 0x273
/* 80196094 00192FD4  4C C6 31 82 */	crclr 6
/* 80196098 00192FD8  4B E9 45 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_8019609C:
/* 8019609C 00192FDC  57 C3 28 34 */	slwi r3, r30, 5
/* 801960A0 00192FE0  80 1D 00 C0 */	lwz r0, 0xc0(r29)
/* 801960A4 00192FE4  38 63 00 0C */	addi r3, r3, 0xc
/* 801960A8 00192FE8  C0 1D 00 D8 */	lfs f0, 0xd8(r29)
/* 801960AC 00192FEC  7C 60 1A 14 */	add r3, r0, r3
/* 801960B0 00192FF0  C0 5D 00 DC */	lfs f2, 0xdc(r29)
/* 801960B4 00192FF4  C0 23 00 00 */	lfs f1, 0(r3)
/* 801960B8 00192FF8  C0 63 00 04 */	lfs f3, 4(r3)
/* 801960BC 00192FFC  EC 01 00 2A */	fadds f0, f1, f0
/* 801960C0 00193000  C0 83 00 08 */	lfs f4, 8(r3)
/* 801960C4 00193004  C0 3D 00 E0 */	lfs f1, 0xe0(r29)
/* 801960C8 00193008  EC 43 10 2A */	fadds f2, f3, f2
/* 801960CC 0019300C  D0 1F 00 00 */	stfs f0, 0(r31)
/* 801960D0 00193010  EC 04 08 2A */	fadds f0, f4, f1
/* 801960D4 00193014  D0 5F 00 04 */	stfs f2, 4(r31)
/* 801960D8 00193018  D0 1F 00 08 */	stfs f0, 8(r31)
/* 801960DC 0019301C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 801960E0 00193020  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 801960E4 00193024  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 801960E8 00193028  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801960EC 0019302C  7C 08 03 A6 */	mtlr r0
/* 801960F0 00193030  38 21 00 20 */	addi r1, r1, 0x20
/* 801960F4 00193034  4E 80 00 20 */	blr 
.endfn "getSlotPosition__Q24Game6CPlateFiR10Vector3<f>"

.fn refresh__Q24Game6CPlateFif, global
/* 801960F8 00193038  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801960FC 0019303C  7C 08 02 A6 */	mflr r0
/* 80196100 00193040  C0 02 AB AC */	lfs f0, lbl_80518F0C@sda21(r2)
/* 80196104 00193044  90 01 00 14 */	stw r0, 0x14(r1)
/* 80196108 00193048  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 8019610C 0019304C  40 81 00 0C */	ble .L_80196118
/* 80196110 00193050  FC 20 00 90 */	fmr f1, f0
/* 80196114 00193054  48 00 00 14 */	b .L_80196128
.L_80196118:
/* 80196118 00193058  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 8019611C 0019305C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80196120 00193060  40 80 00 08 */	bge .L_80196128
/* 80196124 00193064  FC 20 00 90 */	fmr f1, f0
.L_80196128:
/* 80196128 00193068  80 A3 00 BC */	lwz r5, 0xbc(r3)
/* 8019612C 0019306C  7C 04 28 00 */	cmpw r4, r5
/* 80196130 00193070  40 80 00 14 */	bge .L_80196144
/* 80196134 00193074  80 03 00 C8 */	lwz r0, 0xc8(r3)
/* 80196138 00193078  7C A4 28 50 */	subf r5, r4, r5
/* 8019613C 0019307C  7C 05 00 50 */	subf r0, r5, r0
/* 80196140 00193080  90 03 00 C8 */	stw r0, 0xc8(r3)
.L_80196144:
/* 80196144 00193084  90 83 00 BC */	stw r4, 0xbc(r3)
/* 80196148 00193088  88 03 01 00 */	lbz r0, 0x100(r3)
/* 8019614C 0019308C  C0 43 00 90 */	lfs f2, 0x90(r3)
/* 80196150 00193090  28 00 00 00 */	cmplwi r0, 0
/* 80196154 00193094  41 82 00 0C */	beq .L_80196160
/* 80196158 00193098  C0 02 AB C0 */	lfs f0, lbl_80518F20@sda21(r2)
/* 8019615C 0019309C  48 00 00 08 */	b .L_80196164
.L_80196160:
/* 80196160 001930A0  C0 02 AB AC */	lfs f0, lbl_80518F0C@sda21(r2)
.L_80196164:
/* 80196164 001930A4  6C 85 80 00 */	xoris r5, r4, 0x8000
/* 80196168 001930A8  3C 00 43 30 */	lis r0, 0x4330
/* 8019616C 001930AC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80196170 001930B0  EC 02 00 32 */	fmuls f0, f2, f0
/* 80196174 001930B4  C8 A2 AB D8 */	lfd f5, lbl_80518F38@sda21(r2)
/* 80196178 001930B8  90 01 00 08 */	stw r0, 8(r1)
/* 8019617C 001930BC  C0 62 AB C4 */	lfs f3, lbl_80518F24@sda21(r2)
/* 80196180 001930C0  C8 81 00 08 */	lfd f4, 8(r1)
/* 80196184 001930C4  C0 42 AB 94 */	lfs f2, lbl_80518EF4@sda21(r2)
/* 80196188 001930C8  EC 84 28 28 */	fsubs f4, f4, f5
/* 8019618C 001930CC  EC 84 18 24 */	fdivs f4, f4, f3
/* 80196190 001930D0  FC 04 10 40 */	fcmpo cr0, f4, f2
/* 80196194 001930D4  40 81 00 14 */	ble .L_801961A8
/* 80196198 001930D8  40 81 00 14 */	ble .L_801961AC
/* 8019619C 001930DC  FC 40 20 34 */	frsqrte f2, f4
/* 801961A0 001930E0  EC 82 01 32 */	fmuls f4, f2, f4
/* 801961A4 001930E4  48 00 00 08 */	b .L_801961AC
.L_801961A8:
/* 801961A8 001930E8  FC 80 10 90 */	fmr f4, f2
.L_801961AC:
/* 801961AC 001930EC  C0 62 AB C8 */	lfs f3, lbl_80518F28@sda21(r2)
/* 801961B0 001930F0  C0 42 AB CC */	lfs f2, lbl_80518F2C@sda21(r2)
/* 801961B4 001930F4  EC 63 00 32 */	fmuls f3, f3, f0
/* 801961B8 001930F8  EC A2 00 32 */	fmuls f5, f2, f0
/* 801961BC 001930FC  EC 43 01 32 */	fmuls f2, f3, f4
/* 801961C0 00193100  D0 43 00 B8 */	stfs f2, 0xb8(r3)
/* 801961C4 00193104  C0 43 00 B8 */	lfs f2, 0xb8(r3)
/* 801961C8 00193108  FC 05 10 40 */	fcmpo cr0, f5, f2
/* 801961CC 0019310C  40 81 00 0C */	ble .L_801961D8
/* 801961D0 00193110  FC 80 28 90 */	fmr f4, f5
/* 801961D4 00193114  48 00 00 0C */	b .L_801961E0
.L_801961D8:
/* 801961D8 00193118  FC 80 10 90 */	fmr f4, f2
/* 801961DC 0019311C  FC 40 28 90 */	fmr f2, f5
.L_801961E0:
/* 801961E0 00193120  EC 64 10 28 */	fsubs f3, f4, f2
/* 801961E4 00193124  C0 42 AB 94 */	lfs f2, lbl_80518EF4@sda21(r2)
/* 801961E8 00193128  FC 60 18 50 */	fneg f3, f3
/* 801961EC 0019312C  EC 61 20 FA */	fmadds f3, f1, f3, f4
/* 801961F0 00193130  D0 63 00 B4 */	stfs f3, 0xb4(r3)
/* 801961F4 00193134  C0 63 00 B4 */	lfs f3, 0xb4(r3)
/* 801961F8 00193138  FC 02 18 00 */	fcmpu cr0, f2, f3
/* 801961FC 0019313C  40 82 00 10 */	bne .L_8019620C
/* 80196200 00193140  C0 42 AB A0 */	lfs f2, lbl_80518F00@sda21(r2)
/* 80196204 00193144  D0 43 00 B0 */	stfs f2, 0xb0(r3)
/* 80196208 00193148  48 00 00 40 */	b .L_80196248
.L_8019620C:
/* 8019620C 0019314C  6C 85 80 00 */	xoris r5, r4, 0x8000
/* 80196210 00193150  3C 00 43 30 */	lis r0, 0x4330
/* 80196214 00193154  90 A1 00 0C */	stw r5, 0xc(r1)
/* 80196218 00193158  C0 42 AB C4 */	lfs f2, lbl_80518F24@sda21(r2)
/* 8019621C 0019315C  90 01 00 08 */	stw r0, 8(r1)
/* 80196220 00193160  C8 82 AB D8 */	lfd f4, lbl_80518F38@sda21(r2)
/* 80196224 00193164  EC 42 00 F2 */	fmuls f2, f2, f3
/* 80196228 00193168  C8 61 00 08 */	lfd f3, 8(r1)
/* 8019622C 0019316C  C0 A2 AB D0 */	lfs f5, lbl_80518F30@sda21(r2)
/* 80196230 00193170  EC 63 20 28 */	fsubs f3, f3, f4
/* 80196234 00193174  EC 65 00 F2 */	fmuls f3, f5, f3
/* 80196238 00193178  EC 63 00 32 */	fmuls f3, f3, f0
/* 8019623C 0019317C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 80196240 00193180  EC 43 10 24 */	fdivs f2, f3, f2
/* 80196244 00193184  D0 43 00 B0 */	stfs f2, 0xb0(r3)
.L_80196248:
/* 80196248 00193188  C0 83 00 68 */	lfs f4, 0x68(r3)
/* 8019624C 0019318C  C0 43 00 B0 */	lfs f2, 0xb0(r3)
/* 80196250 00193190  FC 02 20 40 */	fcmpo cr0, f2, f4
/* 80196254 00193194  40 81 00 48 */	ble .L_8019629C
/* 80196258 00193198  6C 84 80 00 */	xoris r4, r4, 0x8000
/* 8019625C 0019319C  3C 00 43 30 */	lis r0, 0x4330
/* 80196260 001931A0  90 81 00 0C */	stw r4, 0xc(r1)
/* 80196264 001931A4  C8 62 AB D8 */	lfd f3, lbl_80518F38@sda21(r2)
/* 80196268 001931A8  90 01 00 08 */	stw r0, 8(r1)
/* 8019626C 001931AC  C0 A2 AB D0 */	lfs f5, lbl_80518F30@sda21(r2)
/* 80196270 001931B0  C8 41 00 08 */	lfd f2, 8(r1)
/* 80196274 001931B4  D0 83 00 B0 */	stfs f4, 0xb0(r3)
/* 80196278 001931B8  EC 82 18 28 */	fsubs f4, f2, f3
/* 8019627C 001931BC  C0 62 AB C4 */	lfs f3, lbl_80518F24@sda21(r2)
/* 80196280 001931C0  C0 43 00 B0 */	lfs f2, 0xb0(r3)
/* 80196284 001931C4  EC 85 01 32 */	fmuls f4, f5, f4
/* 80196288 001931C8  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8019628C 001931CC  EC 64 00 32 */	fmuls f3, f4, f0
/* 80196290 001931D0  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80196294 001931D4  EC 00 10 24 */	fdivs f0, f0, f2
/* 80196298 001931D8  D0 03 00 B4 */	stfs f0, 0xb4(r3)
.L_8019629C:
/* 8019629C 001931DC  48 00 00 15 */	bl refreshSlot__Q24Game6CPlateFf
/* 801962A0 001931E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 801962A4 001931E4  7C 08 03 A6 */	mtlr r0
/* 801962A8 001931E8  38 21 00 10 */	addi r1, r1, 0x10
/* 801962AC 001931EC  4E 80 00 20 */	blr 
.endfn refresh__Q24Game6CPlateFif

.fn refreshSlot__Q24Game6CPlateFf, global
/* 801962B0 001931F0  94 21 FE B0 */	stwu r1, -0x150(r1)
/* 801962B4 001931F4  7C 08 02 A6 */	mflr r0
/* 801962B8 001931F8  90 01 01 54 */	stw r0, 0x154(r1)
/* 801962BC 001931FC  DB E1 01 40 */	stfd f31, 0x140(r1)
/* 801962C0 00193200  F3 E1 01 48 */	psq_st f31, 328(r1), 0, qr0
/* 801962C4 00193204  DB C1 01 30 */	stfd f30, 0x130(r1)
/* 801962C8 00193208  F3 C1 01 38 */	psq_st f30, 312(r1), 0, qr0
/* 801962CC 0019320C  DB A1 01 20 */	stfd f29, 0x120(r1)
/* 801962D0 00193210  F3 A1 01 28 */	psq_st f29, 296(r1), 0, qr0
/* 801962D4 00193214  DB 81 01 10 */	stfd f28, 0x110(r1)
/* 801962D8 00193218  F3 81 01 18 */	psq_st f28, 280(r1), 0, qr0
/* 801962DC 0019321C  DB 61 01 00 */	stfd f27, 0x100(r1)
/* 801962E0 00193220  F3 61 01 08 */	psq_st f27, 264(r1), 0, qr0
/* 801962E4 00193224  DB 41 00 F0 */	stfd f26, 0xf0(r1)
/* 801962E8 00193228  F3 41 00 F8 */	psq_st f26, 248(r1), 0, qr0
/* 801962EC 0019322C  DB 21 00 E0 */	stfd f25, 0xe0(r1)
/* 801962F0 00193230  F3 21 00 E8 */	psq_st f25, 232(r1), 0, qr0
/* 801962F4 00193234  DB 01 00 D0 */	stfd f24, 0xd0(r1)
/* 801962F8 00193238  F3 01 00 D8 */	psq_st f24, 216(r1), 0, qr0
/* 801962FC 0019323C  DA E1 00 C0 */	stfd f23, 0xc0(r1)
/* 80196300 00193240  F2 E1 00 C8 */	psq_st f23, 200(r1), 0, qr0
/* 80196304 00193244  DA C1 00 B0 */	stfd f22, 0xb0(r1)
/* 80196308 00193248  F2 C1 00 B8 */	psq_st f22, 184(r1), 0, qr0
/* 8019630C 0019324C  BF 21 00 94 */	stmw r25, 0x94(r1)
/* 80196310 00193250  7C 7D 1B 78 */	mr r29, r3
/* 80196314 00193254  C0 42 AB 94 */	lfs f2, lbl_80518EF4@sda21(r2)
/* 80196318 00193258  C0 63 00 B0 */	lfs f3, 0xb0(r3)
/* 8019631C 0019325C  FF 00 08 90 */	fmr f24, f1
/* 80196320 00193260  C0 23 00 F0 */	lfs f1, 0xf0(r3)
/* 80196324 00193264  38 61 00 44 */	addi r3, r1, 0x44
/* 80196328 00193268  C0 02 AB AC */	lfs f0, lbl_80518F0C@sda21(r2)
/* 8019632C 0019326C  FF 40 18 50 */	fneg f26, f3
/* 80196330 00193270  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 80196334 00193274  38 81 00 2C */	addi r4, r1, 0x2c
/* 80196338 00193278  38 A1 00 38 */	addi r5, r1, 0x38
/* 8019633C 0019327C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 80196340 00193280  3B E0 00 00 */	li r31, 0
/* 80196344 00193284  D0 41 00 40 */	stfs f2, 0x40(r1)
/* 80196348 00193288  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8019634C 0019328C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 80196350 00193290  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80196354 00193294  48 29 22 5D */	bl "makeSR__7MatrixfFR10Vector3<f>R10Vector3<f>"
/* 80196358 00193298  88 1D 01 00 */	lbz r0, 0x100(r29)
/* 8019635C 0019329C  C0 5D 00 90 */	lfs f2, 0x90(r29)
/* 80196360 001932A0  28 00 00 00 */	cmplwi r0, 0
/* 80196364 001932A4  41 82 00 0C */	beq .L_80196370
/* 80196368 001932A8  C0 22 AB C0 */	lfs f1, lbl_80518F20@sda21(r2)
/* 8019636C 001932AC  48 00 00 08 */	b .L_80196374
.L_80196370:
/* 80196370 001932B0  C0 22 AB AC */	lfs f1, lbl_80518F0C@sda21(r2)
.L_80196374:
/* 80196374 001932B4  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 80196378 001932B8  EF 22 00 72 */	fmuls f25, f2, f1
/* 8019637C 001932BC  38 61 00 44 */	addi r3, r1, 0x44
/* 80196380 001932C0  38 81 00 20 */	addi r4, r1, 0x20
/* 80196384 001932C4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80196388 001932C8  38 A1 00 14 */	addi r5, r1, 0x14
/* 8019638C 001932CC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 80196390 001932D0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 80196394 001932D4  4B F5 48 45 */	bl PSMTXMultVec
/* 80196398 001932D8  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8019639C 001932DC  3B C0 00 01 */	li r30, 1
/* 801963A0 001932E0  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 801963A4 001932E4  3B 40 00 00 */	li r26, 0
/* 801963A8 001932E8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 801963AC 001932EC  3F 80 43 30 */	lis r28, 0x4330
/* 801963B0 001932F0  C3 82 AB E0 */	lfs f28, lbl_80518F40@sda21(r2)
/* 801963B4 001932F4  D0 1D 00 F4 */	stfs f0, 0xf4(r29)
/* 801963B8 001932F8  EF 7C 06 72 */	fmuls f27, f28, f25
/* 801963BC 001932FC  C3 A2 AB 94 */	lfs f29, lbl_80518EF4@sda21(r2)
/* 801963C0 00193300  D0 3D 00 F8 */	stfs f1, 0xf8(r29)
/* 801963C4 00193304  C3 C2 AB E4 */	lfs f30, lbl_80518F44@sda21(r2)
/* 801963C8 00193308  D0 5D 00 FC */	stfs f2, 0xfc(r29)
/* 801963CC 0019330C  CB E2 AB D8 */	lfd f31, lbl_80518F38@sda21(r2)
/* 801963D0 00193310  48 00 01 5C */	b .L_8019652C
.L_801963D4:
/* 801963D4 00193314  C0 5D 00 B0 */	lfs f2, 0xb0(r29)
/* 801963D8 00193318  EC 3A 06 B2 */	fmuls f1, f26, f26
/* 801963DC 0019331C  EC 02 00 B2 */	fmuls f0, f2, f2
/* 801963E0 00193320  EC 00 08 28 */	fsubs f0, f0, f1
/* 801963E4 00193324  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 801963E8 00193328  40 81 00 1C */	ble .L_80196404
/* 801963EC 0019332C  EC 22 08 B8 */	fmsubs f1, f2, f2, f1
/* 801963F0 00193330  FC 01 E8 40 */	fcmpo cr0, f1, f29
/* 801963F4 00193334  40 81 00 14 */	ble .L_80196408
/* 801963F8 00193338  FC 00 08 34 */	frsqrte f0, f1
/* 801963FC 0019333C  EC 20 00 72 */	fmuls f1, f0, f1
/* 80196400 00193340  48 00 00 08 */	b .L_80196408
.L_80196404:
/* 80196404 00193344  FC 20 E8 90 */	fmr f1, f29
.L_80196408:
/* 80196408 00193348  C0 1D 00 B4 */	lfs f0, 0xb4(r29)
/* 8019640C 0019334C  EC 00 00 72 */	fmuls f0, f0, f1
/* 80196410 00193350  EC 00 10 24 */	fdivs f0, f0, f2
/* 80196414 00193354  EC 00 D8 24 */	fdivs f0, f0, f27
/* 80196418 00193358  FC 00 00 1E */	fctiwz f0, f0
/* 8019641C 0019335C  D8 01 00 78 */	stfd f0, 0x78(r1)
/* 80196420 00193360  80 61 00 7C */	lwz r3, 0x7c(r1)
/* 80196424 00193364  2C 03 00 00 */	cmpwi r3, 0
/* 80196428 00193368  40 80 00 08 */	bge .L_80196430
/* 8019642C 0019336C  38 60 00 00 */	li r3, 0
.L_80196430:
/* 80196430 00193370  FC 18 F0 40 */	fcmpo cr0, f24, f30
/* 80196434 00193374  40 80 00 1C */	bge .L_80196450
/* 80196438 00193378  2C 03 00 00 */	cmpwi r3, 0
/* 8019643C 0019337C  40 82 00 14 */	bne .L_80196450
/* 80196440 00193380  7C 1F 00 50 */	subf r0, r31, r0
/* 80196444 00193384  2C 00 00 01 */	cmpwi r0, 1
/* 80196448 00193388  40 81 00 08 */	ble .L_80196450
/* 8019644C 0019338C  38 60 00 01 */	li r3, 1
.L_80196450:
/* 80196450 00193390  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 80196454 00193394  6F C4 80 00 */	xoris r4, r30, 0x8000
/* 80196458 00193398  90 01 00 84 */	stw r0, 0x84(r1)
/* 8019645C 0019339C  54 63 08 3C */	slwi r3, r3, 1
/* 80196460 001933A0  7F 5B D3 78 */	mr r27, r26
/* 80196464 001933A4  93 81 00 80 */	stw r28, 0x80(r1)
/* 80196468 001933A8  3B 23 00 01 */	addi r25, r3, 1
/* 8019646C 001933AC  C8 01 00 80 */	lfd f0, 0x80(r1)
/* 80196470 001933B0  90 81 00 8C */	stw r4, 0x8c(r1)
/* 80196474 001933B4  EC 20 F8 28 */	fsubs f1, f0, f31
/* 80196478 001933B8  93 81 00 88 */	stw r28, 0x88(r1)
/* 8019647C 001933BC  C8 01 00 88 */	lfd f0, 0x88(r1)
/* 80196480 001933C0  EC 21 06 72 */	fmuls f1, f1, f25
/* 80196484 001933C4  90 81 00 7C */	stw r4, 0x7c(r1)
/* 80196488 001933C8  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8019648C 001933CC  93 81 00 78 */	stw r28, 0x78(r1)
/* 80196490 001933D0  EC 3C 00 72 */	fmuls f1, f28, f1
/* 80196494 001933D4  C8 41 00 78 */	lfd f2, 0x78(r1)
/* 80196498 001933D8  EC 00 06 72 */	fmuls f0, f0, f25
/* 8019649C 001933DC  EC 42 F8 28 */	fsubs f2, f2, f31
/* 801964A0 001933E0  EE FC 00 32 */	fmuls f23, f28, f0
/* 801964A4 001933E4  EE C2 00 72 */	fmuls f22, f2, f1
/* 801964A8 001933E8  48 00 00 74 */	b .L_8019651C
.L_801964AC:
/* 801964AC 001933EC  80 1D 00 BC */	lwz r0, 0xbc(r29)
/* 801964B0 001933F0  7C 1F 00 00 */	cmpw r31, r0
/* 801964B4 001933F4  40 80 00 60 */	bge .L_80196514
/* 801964B8 001933F8  80 1D 00 C0 */	lwz r0, 0xc0(r29)
/* 801964BC 001933FC  38 61 00 44 */	addi r3, r1, 0x44
/* 801964C0 00193400  C0 02 AB 94 */	lfs f0, lbl_80518EF4@sda21(r2)
/* 801964C4 00193404  38 A1 00 08 */	addi r5, r1, 8
/* 801964C8 00193408  7C 80 DA 14 */	add r4, r0, r27
/* 801964CC 0019340C  D2 C4 00 00 */	stfs f22, 0(r4)
/* 801964D0 00193410  D0 04 00 04 */	stfs f0, 4(r4)
/* 801964D4 00193414  D3 44 00 08 */	stfs f26, 8(r4)
/* 801964D8 00193418  80 1D 00 C0 */	lwz r0, 0xc0(r29)
/* 801964DC 0019341C  7C 80 DA 14 */	add r4, r0, r27
/* 801964E0 00193420  4B F5 46 F9 */	bl PSMTXMultVec
/* 801964E4 00193424  80 1D 00 C0 */	lwz r0, 0xc0(r29)
/* 801964E8 00193428  38 7B 00 0C */	addi r3, r27, 0xc
/* 801964EC 0019342C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 801964F0 00193430  3B 5A 00 20 */	addi r26, r26, 0x20
/* 801964F4 00193434  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 801964F8 00193438  7C 60 1A 14 */	add r3, r0, r3
/* 801964FC 0019343C  C0 01 00 08 */	lfs f0, 8(r1)
/* 80196500 00193440  3B 7B 00 20 */	addi r27, r27, 0x20
/* 80196504 00193444  3B FF 00 01 */	addi r31, r31, 1
/* 80196508 00193448  D0 03 00 00 */	stfs f0, 0(r3)
/* 8019650C 0019344C  D0 23 00 04 */	stfs f1, 4(r3)
/* 80196510 00193450  D0 43 00 08 */	stfs f2, 8(r3)
.L_80196514:
/* 80196514 00193454  EE D6 B8 28 */	fsubs f22, f22, f23
/* 80196518 00193458  3B 39 FF FF */	addi r25, r25, -1
.L_8019651C:
/* 8019651C 0019345C  2C 19 00 00 */	cmpwi r25, 0
/* 80196520 00193460  41 81 FF 8C */	bgt .L_801964AC
/* 80196524 00193464  EF 5A D8 2A */	fadds f26, f26, f27
/* 80196528 00193468  1F DE FF FF */	mulli r30, r30, -1
.L_8019652C:
/* 8019652C 0019346C  80 1D 00 BC */	lwz r0, 0xbc(r29)
/* 80196530 00193470  7C 1F 00 00 */	cmpw r31, r0
/* 80196534 00193474  41 80 FE A0 */	blt .L_801963D4
/* 80196538 00193478  E3 E1 01 48 */	psq_l f31, 328(r1), 0, qr0
/* 8019653C 0019347C  CB E1 01 40 */	lfd f31, 0x140(r1)
/* 80196540 00193480  E3 C1 01 38 */	psq_l f30, 312(r1), 0, qr0
/* 80196544 00193484  CB C1 01 30 */	lfd f30, 0x130(r1)
/* 80196548 00193488  E3 A1 01 28 */	psq_l f29, 296(r1), 0, qr0
/* 8019654C 0019348C  CB A1 01 20 */	lfd f29, 0x120(r1)
/* 80196550 00193490  E3 81 01 18 */	psq_l f28, 280(r1), 0, qr0
/* 80196554 00193494  CB 81 01 10 */	lfd f28, 0x110(r1)
/* 80196558 00193498  E3 61 01 08 */	psq_l f27, 264(r1), 0, qr0
/* 8019655C 0019349C  CB 61 01 00 */	lfd f27, 0x100(r1)
/* 80196560 001934A0  E3 41 00 F8 */	psq_l f26, 248(r1), 0, qr0
/* 80196564 001934A4  CB 41 00 F0 */	lfd f26, 0xf0(r1)
/* 80196568 001934A8  E3 21 00 E8 */	psq_l f25, 232(r1), 0, qr0
/* 8019656C 001934AC  CB 21 00 E0 */	lfd f25, 0xe0(r1)
/* 80196570 001934B0  E3 01 00 D8 */	psq_l f24, 216(r1), 0, qr0
/* 80196574 001934B4  CB 01 00 D0 */	lfd f24, 0xd0(r1)
/* 80196578 001934B8  E2 E1 00 C8 */	psq_l f23, 200(r1), 0, qr0
/* 8019657C 001934BC  CA E1 00 C0 */	lfd f23, 0xc0(r1)
/* 80196580 001934C0  E2 C1 00 B8 */	psq_l f22, 184(r1), 0, qr0
/* 80196584 001934C4  CA C1 00 B0 */	lfd f22, 0xb0(r1)
/* 80196588 001934C8  BB 21 00 94 */	lmw r25, 0x94(r1)
/* 8019658C 001934CC  80 01 01 54 */	lwz r0, 0x154(r1)
/* 80196590 001934D0  7C 08 03 A6 */	mtlr r0
/* 80196594 001934D4  38 21 01 50 */	addi r1, r1, 0x150
/* 80196598 001934D8  4E 80 00 20 */	blr 
.endfn refreshSlot__Q24Game6CPlateFf

.fn update__Q24Game6CPlateFv, global
/* 8019659C 001934DC  88 83 01 00 */	lbz r4, 0x100(r3)
/* 801965A0 001934E0  28 04 00 00 */	cmplwi r4, 0
/* 801965A4 001934E4  4D 82 00 20 */	beqlr 
/* 801965A8 001934E8  38 04 FF FF */	addi r0, r4, -1
/* 801965AC 001934EC  98 03 01 00 */	stb r0, 0x100(r3)
/* 801965B0 001934F0  4E 80 00 20 */	blr 
.endfn update__Q24Game6CPlateFv

.fn __dt__Q24Game6CPlateFv, weak
/* 801965B4 001934F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 801965B8 001934F8  7C 08 02 A6 */	mflr r0
/* 801965BC 001934FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 801965C0 00193500  93 E1 00 0C */	stw r31, 0xc(r1)
/* 801965C4 00193504  7C 9F 23 78 */	mr r31, r4
/* 801965C8 00193508  93 C1 00 08 */	stw r30, 8(r1)
/* 801965CC 0019350C  7C 7E 1B 79 */	or. r30, r3, r3
/* 801965D0 00193510  41 82 00 48 */	beq .L_80196618
/* 801965D4 00193514  3C 80 80 4B */	lis r4, __vt__Q24Game6CPlate@ha
/* 801965D8 00193518  38 04 4A 34 */	addi r0, r4, __vt__Q24Game6CPlate@l
/* 801965DC 0019351C  90 1E 00 00 */	stw r0, 0(r30)
/* 801965E0 00193520  41 82 00 28 */	beq .L_80196608
/* 801965E4 00193524  3C 80 80 4B */	lis r4, "__vt__27Container<Q24Game8Creature>"@ha
/* 801965E8 00193528  38 04 4A 08 */	addi r0, r4, "__vt__27Container<Q24Game8Creature>"@l
/* 801965EC 0019352C  90 1E 00 00 */	stw r0, 0(r30)
/* 801965F0 00193530  41 82 00 18 */	beq .L_80196608
/* 801965F4 00193534  3C A0 80 4B */	lis r5, __vt__16GenericContainer@ha
/* 801965F8 00193538  38 80 00 00 */	li r4, 0
/* 801965FC 0019353C  38 05 AC DC */	addi r0, r5, __vt__16GenericContainer@l
/* 80196600 00193540  90 1E 00 00 */	stw r0, 0(r30)
/* 80196604 00193544  48 27 AF 85 */	bl __dt__5CNodeFv
.L_80196608:
/* 80196608 00193548  7F E0 07 35 */	extsh. r0, r31
/* 8019660C 0019354C  40 81 00 0C */	ble .L_80196618
/* 80196610 00193550  7F C3 F3 78 */	mr r3, r30
/* 80196614 00193554  4B E8 DA A1 */	bl __dl__FPv
.L_80196618:
/* 80196618 00193558  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8019661C 0019355C  7F C3 F3 78 */	mr r3, r30
/* 80196620 00193560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80196624 00193564  83 C1 00 08 */	lwz r30, 8(r1)
/* 80196628 00193568  7C 08 03 A6 */	mtlr r0
/* 8019662C 0019356C  38 21 00 10 */	addi r1, r1, 0x10
/* 80196630 00193570  4E 80 00 20 */	blr 
.endfn __dt__Q24Game6CPlateFv

.fn "getObject__27Container<Q24Game8Creature>FPv", weak
/* 80196634 00193574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80196638 00193578  7C 08 02 A6 */	mflr r0
/* 8019663C 0019357C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80196640 00193580  81 83 00 00 */	lwz r12, 0(r3)
/* 80196644 00193584  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 80196648 00193588  7D 89 03 A6 */	mtctr r12
/* 8019664C 0019358C  4E 80 04 21 */	bctrl 
/* 80196650 00193590  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80196654 00193594  7C 08 03 A6 */	mtlr r0
/* 80196658 00193598  38 21 00 10 */	addi r1, r1, 0x10
/* 8019665C 0019359C  4E 80 00 20 */	blr 
.endfn "getObject__27Container<Q24Game8Creature>FPv"

.fn "getAt__27Container<Q24Game8Creature>Fi", weak
/* 80196660 001935A0  38 60 00 00 */	li r3, 0
/* 80196664 001935A4  4E 80 00 20 */	blr 
.endfn "getAt__27Container<Q24Game8Creature>Fi"

.fn "getTo__27Container<Q24Game8Creature>Fv", weak
/* 80196668 001935A8  38 60 00 00 */	li r3, 0
/* 8019666C 001935AC  4E 80 00 20 */	blr 
.endfn "getTo__27Container<Q24Game8Creature>Fv"
