.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_moviePlayerAudio_cpp

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0
.global __vt__27Pikmin_TCreateObject_JAudio
__vt__27Pikmin_TCreateObject_JAudio:
	.4byte 0
	.4byte 0
	.4byte __dt__27Pikmin_TCreateObject_JAudioFv
	.4byte create__27Pikmin_TCreateObject_JAudioFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 0x4
gfNAN___Q24Game5P2JST:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__27Pikmin_TCreateObject_JAudioFP8JAIBasicPCQ26JStage7TSystem
__ct__27Pikmin_TCreateObject_JAudioFP8JAIBasicPCQ26JStage7TSystem:
/* 80454D30 00451C70  3D 00 80 4A */	lis r8, __vt__Q27JStudio13TCreateObject@ha
/* 80454D34 00451C74  3C E0 80 4A */	lis r7, __vt__Q214JStudio_JAudio13TCreateObject@ha
/* 80454D38 00451C78  38 08 E6 7C */	addi r0, r8, __vt__Q27JStudio13TCreateObject@l
/* 80454D3C 00451C7C  3C C0 80 4F */	lis r6, __vt__27Pikmin_TCreateObject_JAudio@ha
/* 80454D40 00451C80  90 03 00 00 */	stw r0, 0(r3)
/* 80454D44 00451C84  39 00 00 00 */	li r8, 0
/* 80454D48 00451C88  38 E7 F9 F8 */	addi r7, r7, __vt__Q214JStudio_JAudio13TCreateObject@l
/* 80454D4C 00451C8C  38 06 D8 D4 */	addi r0, r6, __vt__27Pikmin_TCreateObject_JAudio@l
/* 80454D50 00451C90  91 03 00 04 */	stw r8, 4(r3)
/* 80454D54 00451C94  91 03 00 08 */	stw r8, 8(r3)
/* 80454D58 00451C98  90 E3 00 00 */	stw r7, 0(r3)
/* 80454D5C 00451C9C  90 83 00 0C */	stw r4, 0xc(r3)
/* 80454D60 00451CA0  90 A3 00 10 */	stw r5, 0x10(r3)
/* 80454D64 00451CA4  90 03 00 00 */	stw r0, 0(r3)
/* 80454D68 00451CA8  4E 80 00 20 */	blr 

.global create__27Pikmin_TCreateObject_JAudioFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
create__27Pikmin_TCreateObject_JAudioFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object:
/* 80454D6C 00451CAC  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 80454D70 00451CB0  7C 08 02 A6 */	mflr r0
/* 80454D74 00451CB4  90 01 01 24 */	stw r0, 0x124(r1)
/* 80454D78 00451CB8  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 80454D7C 00451CBC  93 C1 01 18 */	stw r30, 0x118(r1)
/* 80454D80 00451CC0  7C BE 2B 78 */	mr r30, r5
/* 80454D84 00451CC4  93 A1 01 14 */	stw r29, 0x114(r1)
/* 80454D88 00451CC8  7C 9D 23 78 */	mr r29, r4
/* 80454D8C 00451CCC  93 81 01 10 */	stw r28, 0x110(r1)
/* 80454D90 00451CD0  7C 7C 1B 78 */	mr r28, r3
/* 80454D94 00451CD4  80 65 00 00 */	lwz r3, 0(r5)
/* 80454D98 00451CD8  88 03 00 0C */	lbz r0, 0xc(r3)
/* 80454D9C 00451CDC  3B E3 00 0C */	addi r31, r3, 0xc
/* 80454DA0 00451CE0  2C 00 00 23 */	cmpwi r0, 0x23
/* 80454DA4 00451CE4  41 82 00 0C */	beq .L_80454DB0
/* 80454DA8 00451CE8  38 60 00 00 */	li r3, 0
/* 80454DAC 00451CEC  48 00 01 34 */	b .L_80454EE0
.L_80454DB0:
/* 80454DB0 00451CF0  7F E3 FB 78 */	mr r3, r31
/* 80454DB4 00451CF4  4B C7 5B 5D */	bl strlen
/* 80454DB8 00451CF8  2C 03 00 64 */	cmpwi r3, 0x64
/* 80454DBC 00451CFC  40 81 00 08 */	ble .L_80454DC4
/* 80454DC0 00451D00  38 60 00 64 */	li r3, 0x64
.L_80454DC4:
/* 80454DC4 00451D04  7C 65 1B 78 */	mr r5, r3
/* 80454DC8 00451D08  7C 9F 1A 14 */	add r4, r31, r3
/* 80454DCC 00451D0C  7C 69 03 A6 */	mtctr r3
/* 80454DD0 00451D10  2C 03 00 00 */	cmpwi r3, 0
/* 80454DD4 00451D14  40 81 00 24 */	ble .L_80454DF8
.L_80454DD8:
/* 80454DD8 00451D18  88 04 00 00 */	lbz r0, 0(r4)
/* 80454DDC 00451D1C  2C 00 00 5F */	cmpwi r0, 0x5f
/* 80454DE0 00451D20  40 82 00 0C */	bne .L_80454DEC
/* 80454DE4 00451D24  7C A3 2B 78 */	mr r3, r5
/* 80454DE8 00451D28  48 00 00 10 */	b .L_80454DF8
.L_80454DEC:
/* 80454DEC 00451D2C  38 A5 FF FF */	addi r5, r5, -1
/* 80454DF0 00451D30  38 84 FF FF */	addi r4, r4, -1
/* 80454DF4 00451D34  42 00 FF E4 */	bdnz .L_80454DD8
.L_80454DF8:
/* 80454DF8 00451D38  34 03 FF FF */	addic. r0, r3, -1
/* 80454DFC 00451D3C  38 80 00 2A */	li r4, 0x2a
/* 80454E00 00451D40  98 81 00 08 */	stb r4, 8(r1)
/* 80454E04 00451D44  38 C1 00 08 */	addi r6, r1, 8
/* 80454E08 00451D48  38 E0 00 00 */	li r7, 0
/* 80454E0C 00451D4C  7C 04 03 78 */	mr r4, r0
/* 80454E10 00451D50  40 81 00 98 */	ble .L_80454EA8
/* 80454E14 00451D54  54 00 E8 FF */	rlwinm. r0, r0, 0x1d, 3, 0x1f
/* 80454E18 00451D58  7C 09 03 A6 */	mtctr r0
/* 80454E1C 00451D5C  41 82 00 74 */	beq .L_80454E90
.L_80454E20:
/* 80454E20 00451D60  38 A7 00 01 */	addi r5, r7, 1
/* 80454E24 00451D64  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E28 00451D68  38 A7 00 02 */	addi r5, r7, 2
/* 80454E2C 00451D6C  98 06 00 01 */	stb r0, 1(r6)
/* 80454E30 00451D70  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E34 00451D74  38 A7 00 03 */	addi r5, r7, 3
/* 80454E38 00451D78  98 06 00 02 */	stb r0, 2(r6)
/* 80454E3C 00451D7C  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E40 00451D80  38 A7 00 04 */	addi r5, r7, 4
/* 80454E44 00451D84  98 06 00 03 */	stb r0, 3(r6)
/* 80454E48 00451D88  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E4C 00451D8C  38 A7 00 05 */	addi r5, r7, 5
/* 80454E50 00451D90  98 06 00 04 */	stb r0, 4(r6)
/* 80454E54 00451D94  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E58 00451D98  38 A7 00 06 */	addi r5, r7, 6
/* 80454E5C 00451D9C  98 06 00 05 */	stb r0, 5(r6)
/* 80454E60 00451DA0  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E64 00451DA4  38 A7 00 07 */	addi r5, r7, 7
/* 80454E68 00451DA8  98 06 00 06 */	stb r0, 6(r6)
/* 80454E6C 00451DAC  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E70 00451DB0  38 A7 00 08 */	addi r5, r7, 8
/* 80454E74 00451DB4  38 E7 00 08 */	addi r7, r7, 8
/* 80454E78 00451DB8  98 06 00 07 */	stb r0, 7(r6)
/* 80454E7C 00451DBC  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454E80 00451DC0  9C 06 00 08 */	stbu r0, 8(r6)
/* 80454E84 00451DC4  42 00 FF 9C */	bdnz .L_80454E20
/* 80454E88 00451DC8  70 84 00 07 */	andi. r4, r4, 7
/* 80454E8C 00451DCC  41 82 00 1C */	beq .L_80454EA8
.L_80454E90:
/* 80454E90 00451DD0  7C 89 03 A6 */	mtctr r4
.L_80454E94:
/* 80454E94 00451DD4  38 A7 00 01 */	addi r5, r7, 1
/* 80454E98 00451DD8  38 E7 00 01 */	addi r7, r7, 1
/* 80454E9C 00451DDC  7C 1F 28 AE */	lbzx r0, r31, r5
/* 80454EA0 00451DE0  9C 06 00 01 */	stbu r0, 1(r6)
/* 80454EA4 00451DE4  42 00 FF F0 */	bdnz .L_80454E94
.L_80454EA8:
/* 80454EA8 00451DE8  38 81 00 08 */	addi r4, r1, 8
/* 80454EAC 00451DEC  38 00 00 00 */	li r0, 0
/* 80454EB0 00451DF0  7C 04 19 AE */	stbx r0, r4, r3
/* 80454EB4 00451DF4  80 6D 9B 54 */	lwz r3, moviePlayer__4Game@sda21(r13)
/* 80454EB8 00451DF8  80 63 01 CC */	lwz r3, 0x1cc(r3)
/* 80454EBC 00451DFC  4B FD C4 FD */	bl findCreature__Q34Game5P2JST12ObjectSystemCFPCc
/* 80454EC0 00451E00  28 03 00 00 */	cmplwi r3, 0
/* 80454EC4 00451E04  41 82 00 18 */	beq .L_80454EDC
/* 80454EC8 00451E08  7F 83 E3 78 */	mr r3, r28
/* 80454ECC 00451E0C  7F A4 EB 78 */	mr r4, r29
/* 80454ED0 00451E10  7F C5 F3 78 */	mr r5, r30
/* 80454ED4 00451E14  4B BC 0E 9D */	bl create__Q214JStudio_JAudio13TCreateObjectFPPQ27JStudio7TObjectRCQ47JStudio3stb4data20TParse_TBlock_object
/* 80454ED8 00451E18  48 00 00 08 */	b .L_80454EE0
.L_80454EDC:
/* 80454EDC 00451E1C  38 60 00 00 */	li r3, 0
.L_80454EE0:
/* 80454EE0 00451E20  80 01 01 24 */	lwz r0, 0x124(r1)
/* 80454EE4 00451E24  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 80454EE8 00451E28  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 80454EEC 00451E2C  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 80454EF0 00451E30  83 81 01 10 */	lwz r28, 0x110(r1)
/* 80454EF4 00451E34  7C 08 03 A6 */	mtlr r0
/* 80454EF8 00451E38  38 21 01 20 */	addi r1, r1, 0x120
/* 80454EFC 00451E3C  4E 80 00 20 */	blr 

.global __dt__27Pikmin_TCreateObject_JAudioFv
__dt__27Pikmin_TCreateObject_JAudioFv: # weak function
/* 80454F00 00451E40  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80454F04 00451E44  7C 08 02 A6 */	mflr r0
/* 80454F08 00451E48  90 01 00 14 */	stw r0, 0x14(r1)
/* 80454F0C 00451E4C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80454F10 00451E50  7C 9F 23 78 */	mr r31, r4
/* 80454F14 00451E54  93 C1 00 08 */	stw r30, 8(r1)
/* 80454F18 00451E58  7C 7E 1B 79 */	or. r30, r3, r3
/* 80454F1C 00451E5C  41 82 00 28 */	beq .L_80454F44
/* 80454F20 00451E60  3C A0 80 4F */	lis r5, __vt__27Pikmin_TCreateObject_JAudio@ha
/* 80454F24 00451E64  38 80 00 00 */	li r4, 0
/* 80454F28 00451E68  38 05 D8 D4 */	addi r0, r5, __vt__27Pikmin_TCreateObject_JAudio@l
/* 80454F2C 00451E6C  90 1E 00 00 */	stw r0, 0(r30)
/* 80454F30 00451E70  4B BC 0D E1 */	bl __dt__Q214JStudio_JAudio13TCreateObjectFv
/* 80454F34 00451E74  7F E0 07 35 */	extsh. r0, r31
/* 80454F38 00451E78  40 81 00 0C */	ble .L_80454F44
/* 80454F3C 00451E7C  7F C3 F3 78 */	mr r3, r30
/* 80454F40 00451E80  4B BC F1 75 */	bl __dl__FPv
.L_80454F44:
/* 80454F44 00451E84  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80454F48 00451E88  7F C3 F3 78 */	mr r3, r30
/* 80454F4C 00451E8C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80454F50 00451E90  83 C1 00 08 */	lwz r30, 8(r1)
/* 80454F54 00451E94  7C 08 03 A6 */	mtlr r0
/* 80454F58 00451E98  38 21 00 10 */	addi r1, r1, 0x10
/* 80454F5C 00451E9C  4E 80 00 20 */	blr 

__sinit_moviePlayerAudio_cpp: # static initializer
/* 80454F60 00451EA0  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80454F64 00451EA4  38 00 FF FF */	li r0, -1
/* 80454F68 00451EA8  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80454F6C 00451EAC  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80454F70 00451EB0  90 0D 9C 78 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80454F74 00451EB4  D4 03 D8 C8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80454F78 00451EB8  D0 0D 9C 7C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80454F7C 00451EBC  D0 03 00 04 */	stfs f0, 4(r3)
/* 80454F80 00451EC0  D0 03 00 08 */	stfs f0, 8(r3)
/* 80454F84 00451EC4  4E 80 00 20 */	blr 
