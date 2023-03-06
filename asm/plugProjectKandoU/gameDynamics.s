.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8047C648, local
	.asciz "Dynamics"
.endobj lbl_8047C648
.balign 4
.obj lbl_8047C654, local # Shift-JIS
	.4byte 0x90568374
	.4byte 0x838A834E
	.4byte 0x83568387
	.4byte 0x83930000
.endobj lbl_8047C654
.balign 4
.obj lbl_8047C664, local
	.asciz "Sta-Parm"
.endobj lbl_8047C664
.balign 4
.obj lbl_8047C670, local
	.asciz "micro collision"
.endobj lbl_8047C670
.balign 4
.obj lbl_8047C680, local # Shift-JIS
	.4byte 0x5265736F
	.4byte 0x6C76658E
	.4byte 0x9E82CC96
	.4byte 0x808E4300
.endobj lbl_8047C680
.balign 4
.obj lbl_8047C690, local
	.asciz "elasticity"
.endobj lbl_8047C690
.balign 4
.obj lbl_8047C69C, local # Shift-JIS
	.4byte 0x96808E43
	.4byte 0x3A74616E
	.4byte 0x76656C00
.endobj lbl_8047C69C
.balign 4
.obj lbl_8047C6A8, local # Shift-JIS
	.4byte 0x8CC592E8
	.4byte 0x96808E43
	.4byte 0x00000000
.endobj lbl_8047C6A8
.balign 4
.obj lbl_8047C6B4, local # Shift-JIS
	.4byte 0x8CC592E8
	.4byte 0x96808E43
	.4byte 0x926C0000
.endobj lbl_8047C6B4
.balign 4
.obj lbl_8047C6C0, local # Shift-JIS
	.4byte 0x89F1935D
	.4byte 0x89658BBF
	.4byte 0x82C882B5
	.4byte 0x82C982B7
	.4byte 0x82E90000
.endobj lbl_8047C6C0
.balign 4
.obj lbl_8047C6D4, local # Shift-JIS
	.4byte 0x89F1935D
	.4byte 0x8382815B
	.4byte 0x83818393
	.4byte 0x83672044
	.4byte 0x616D7000
.endobj lbl_8047C6D4

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__13DynamicsParms, global
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "@12@__dt__13DynamicsParmsFv"
	.4byte __dt__13DynamicsParmsFv
.endobj __vt__13DynamicsParms
.obj "__vt__7Parm<b>", weak
	.4byte 0
	.4byte 0
	.4byte "size__7Parm<b>Fv"
	.4byte "write__7Parm<b>FR6Stream"
	.4byte "read__7Parm<b>FR6Stream"
.endobj "__vt__7Parm<b>"

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mInstance__13DynamicsParms, global
	.skip 4
.endobj mInstance__13DynamicsParms

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80518238, local
	.float 140.0
.endobj lbl_80518238
.obj lbl_8051823C, local
	.float 0.0
.endobj lbl_8051823C
.obj lbl_80518240, local
	.float 5000.0
.endobj lbl_80518240
.balign 4
.obj lbl_80518244, local
	.asciz "Static"
.endobj lbl_80518244
.balign 4
.obj lbl_8051824C, local
	.float 10.0
.endobj lbl_8051824C
.obj lbl_80518250, local
	.float 0.015
.endobj lbl_80518250
.obj lbl_80518254, local
	.float 0.3
.endobj lbl_80518254
.obj lbl_80518258, local
	.float 1.0
.endobj lbl_80518258
.balign 4
.obj lbl_8051825C, local # Shift-JIS
	.4byte 0x96808E43
	.byte 0
.endobj lbl_8051825C
.balign 4
.obj lbl_80518264, local
	.float 100.0
.endobj lbl_80518264
.obj lbl_80518268, local
	.float 10000.0
.endobj lbl_80518268
.obj lbl_8051826C, local
	.float 0.05
.endobj lbl_8051826C
.obj lbl_80518270, local
	.float 0.5
.endobj lbl_80518270
.obj lbl_80518274, local
	.float 1000.0
.endobj lbl_80518274
.obj lbl_80518278, local
	.float 1120.0
.endobj lbl_80518278

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn __ct__13DynamicsParmsFv, global
/* 80139C60 00136BA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139C64 00136BA4  7C 08 02 A6 */	mflr r0
/* 80139C68 00136BA8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139C6C 00136BAC  7C 80 07 35 */	extsh. r0, r4
/* 80139C70 00136BB0  3C 80 80 48 */	lis r4, lbl_8047C648@ha
/* 80139C74 00136BB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80139C78 00136BB8  3B E4 C6 48 */	addi r31, r4, lbl_8047C648@l
/* 80139C7C 00136BBC  93 C1 00 08 */	stw r30, 8(r1)
/* 80139C80 00136BC0  7C 7E 1B 78 */	mr r30, r3
/* 80139C84 00136BC4  41 82 00 0C */	beq .L_80139C90
/* 80139C88 00136BC8  38 1E 01 C0 */	addi r0, r30, 0x1c0
/* 80139C8C 00136BCC  90 1E 00 00 */	stw r0, 0(r30)
.L_80139C90:
/* 80139C90 00136BD0  38 60 00 00 */	li r3, 0
/* 80139C94 00136BD4  38 1F 00 00 */	addi r0, r31, 0
/* 80139C98 00136BD8  90 7E 00 04 */	stw r3, 4(r30)
/* 80139C9C 00136BDC  38 7E 00 0C */	addi r3, r30, 0xc
/* 80139CA0 00136BE0  90 1E 00 08 */	stw r0, 8(r30)
/* 80139CA4 00136BE4  4B EE 33 29 */	bl __ct__11JKRDisposerFv
/* 80139CA8 00136BE8  3C 60 80 4B */	lis r3, __vt__13DynamicsParms@ha
/* 80139CAC 00136BEC  3C A0 64 30 */	lis r5, 0x64303039@ha
/* 80139CB0 00136BF0  38 63 00 68 */	addi r3, r3, __vt__13DynamicsParms@l
/* 80139CB4 00136BF4  7F C4 F3 78 */	mr r4, r30
/* 80139CB8 00136BF8  90 7E 01 BC */	stw r3, 0x1bc(r30)
/* 80139CBC 00136BFC  38 03 00 08 */	addi r0, r3, 8
/* 80139CC0 00136C00  38 7E 00 24 */	addi r3, r30, 0x24
/* 80139CC4 00136C04  38 A5 30 39 */	addi r5, r5, 0x64303039@l
/* 80139CC8 00136C08  90 1E 00 0C */	stw r0, 0xc(r30)
/* 80139CCC 00136C0C  38 DF 00 0C */	addi r6, r31, 0xc
/* 80139CD0 00136C10  48 2D 99 89 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139CD4 00136C14  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 80139CD8 00136C18  3C A0 64 30 */	lis r5, 0x64303131@ha
/* 80139CDC 00136C1C  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 80139CE0 00136C20  38 E0 00 01 */	li r7, 1
/* 80139CE4 00136C24  90 1E 00 24 */	stw r0, 0x24(r30)
/* 80139CE8 00136C28  38 00 00 00 */	li r0, 0
/* 80139CEC 00136C2C  7F C4 F3 78 */	mr r4, r30
/* 80139CF0 00136C30  38 7E 00 40 */	addi r3, r30, 0x40
/* 80139CF4 00136C34  98 FE 00 3C */	stb r7, 0x3c(r30)
/* 80139CF8 00136C38  38 A5 31 31 */	addi r5, r5, 0x64303131@l
/* 80139CFC 00136C3C  38 DF 00 1C */	addi r6, r31, 0x1c
/* 80139D00 00136C40  98 1E 00 3E */	stb r0, 0x3e(r30)
/* 80139D04 00136C44  98 FE 00 3F */	stb r7, 0x3f(r30)
/* 80139D08 00136C48  48 2D 99 51 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139D0C 00136C4C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80139D10 00136C50  3C A0 64 30 */	lis r5, 0x64303130@ha
/* 80139D14 00136C54  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80139D18 00136C58  C0 02 9E D8 */	lfs f0, lbl_80518238@sda21(r2)
/* 80139D1C 00136C5C  90 1E 00 40 */	stw r0, 0x40(r30)
/* 80139D20 00136C60  7F C4 F3 78 */	mr r4, r30
/* 80139D24 00136C64  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 80139D28 00136C68  38 7E 00 68 */	addi r3, r30, 0x68
/* 80139D2C 00136C6C  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 80139D30 00136C70  38 A5 31 30 */	addi r5, r5, 0x64303130@l
/* 80139D34 00136C74  C0 02 9E E0 */	lfs f0, lbl_80518240@sda21(r2)
/* 80139D38 00136C78  38 C2 9E E4 */	addi r6, r2, lbl_80518244@sda21
/* 80139D3C 00136C7C  D0 3E 00 60 */	stfs f1, 0x60(r30)
/* 80139D40 00136C80  D0 1E 00 64 */	stfs f0, 0x64(r30)
/* 80139D44 00136C84  48 2D 99 15 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139D48 00136C88  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80139D4C 00136C8C  3C A0 64 30 */	lis r5, 0x64303030@ha
/* 80139D50 00136C90  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80139D54 00136C94  C0 02 9E EC */	lfs f0, lbl_8051824C@sda21(r2)
/* 80139D58 00136C98  90 1E 00 68 */	stw r0, 0x68(r30)
/* 80139D5C 00136C9C  7F C4 F3 78 */	mr r4, r30
/* 80139D60 00136CA0  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 80139D64 00136CA4  38 7E 00 90 */	addi r3, r30, 0x90
/* 80139D68 00136CA8  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 80139D6C 00136CAC  38 A5 30 30 */	addi r5, r5, 0x64303030@l
/* 80139D70 00136CB0  C0 02 9E E0 */	lfs f0, lbl_80518240@sda21(r2)
/* 80139D74 00136CB4  38 DF 00 28 */	addi r6, r31, 0x28
/* 80139D78 00136CB8  D0 3E 00 88 */	stfs f1, 0x88(r30)
/* 80139D7C 00136CBC  D0 1E 00 8C */	stfs f0, 0x8c(r30)
/* 80139D80 00136CC0  48 2D 98 D9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139D84 00136CC4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80139D88 00136CC8  3C A0 64 30 */	lis r5, 0x64303031@ha
/* 80139D8C 00136CCC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80139D90 00136CD0  C0 02 9E F0 */	lfs f0, lbl_80518250@sda21(r2)
/* 80139D94 00136CD4  90 1E 00 90 */	stw r0, 0x90(r30)
/* 80139D98 00136CD8  7F C4 F3 78 */	mr r4, r30
/* 80139D9C 00136CDC  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 80139DA0 00136CE0  38 7E 00 B8 */	addi r3, r30, 0xb8
/* 80139DA4 00136CE4  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 80139DA8 00136CE8  38 A5 30 31 */	addi r5, r5, 0x64303031@l
/* 80139DAC 00136CEC  C0 02 9E EC */	lfs f0, lbl_8051824C@sda21(r2)
/* 80139DB0 00136CF0  38 DF 00 38 */	addi r6, r31, 0x38
/* 80139DB4 00136CF4  D0 3E 00 B0 */	stfs f1, 0xb0(r30)
/* 80139DB8 00136CF8  D0 1E 00 B4 */	stfs f0, 0xb4(r30)
/* 80139DBC 00136CFC  48 2D 98 9D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139DC0 00136D00  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 80139DC4 00136D04  3C A0 64 30 */	lis r5, 0x64303032@ha
/* 80139DC8 00136D08  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 80139DCC 00136D0C  38 E0 00 00 */	li r7, 0
/* 80139DD0 00136D10  90 1E 00 B8 */	stw r0, 0xb8(r30)
/* 80139DD4 00136D14  38 00 00 01 */	li r0, 1
/* 80139DD8 00136D18  7F C4 F3 78 */	mr r4, r30
/* 80139DDC 00136D1C  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 80139DE0 00136D20  98 FE 00 D0 */	stb r7, 0xd0(r30)
/* 80139DE4 00136D24  38 A5 30 32 */	addi r5, r5, 0x64303032@l
/* 80139DE8 00136D28  38 DF 00 48 */	addi r6, r31, 0x48
/* 80139DEC 00136D2C  98 FE 00 D2 */	stb r7, 0xd2(r30)
/* 80139DF0 00136D30  98 1E 00 D3 */	stb r0, 0xd3(r30)
/* 80139DF4 00136D34  48 2D 98 65 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139DF8 00136D38  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80139DFC 00136D3C  3C A0 64 30 */	lis r5, 0x64303033@ha
/* 80139E00 00136D40  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80139E04 00136D44  C0 02 9E F4 */	lfs f0, lbl_80518254@sda21(r2)
/* 80139E08 00136D48  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 80139E0C 00136D4C  7F C4 F3 78 */	mr r4, r30
/* 80139E10 00136D50  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 80139E14 00136D54  38 7E 00 FC */	addi r3, r30, 0xfc
/* 80139E18 00136D58  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 80139E1C 00136D5C  38 A5 30 33 */	addi r5, r5, 0x64303033@l
/* 80139E20 00136D60  C0 02 9E F8 */	lfs f0, lbl_80518258@sda21(r2)
/* 80139E24 00136D64  38 C2 9E FC */	addi r6, r2, lbl_8051825C@sda21
/* 80139E28 00136D68  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 80139E2C 00136D6C  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 80139E30 00136D70  48 2D 98 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139E34 00136D74  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 80139E38 00136D78  3C A0 64 30 */	lis r5, 0x64303034@ha
/* 80139E3C 00136D7C  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 80139E40 00136D80  38 E0 00 01 */	li r7, 1
/* 80139E44 00136D84  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 80139E48 00136D88  38 00 00 00 */	li r0, 0
/* 80139E4C 00136D8C  7F C4 F3 78 */	mr r4, r30
/* 80139E50 00136D90  38 7E 01 18 */	addi r3, r30, 0x118
/* 80139E54 00136D94  98 FE 01 14 */	stb r7, 0x114(r30)
/* 80139E58 00136D98  38 A5 30 34 */	addi r5, r5, 0x64303034@l
/* 80139E5C 00136D9C  38 DF 00 54 */	addi r6, r31, 0x54
/* 80139E60 00136DA0  98 1E 01 16 */	stb r0, 0x116(r30)
/* 80139E64 00136DA4  98 FE 01 17 */	stb r7, 0x117(r30)
/* 80139E68 00136DA8  48 2D 97 F1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139E6C 00136DAC  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 80139E70 00136DB0  3C A0 64 30 */	lis r5, 0x64303035@ha
/* 80139E74 00136DB4  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 80139E78 00136DB8  38 E0 00 01 */	li r7, 1
/* 80139E7C 00136DBC  90 1E 01 18 */	stw r0, 0x118(r30)
/* 80139E80 00136DC0  38 00 00 00 */	li r0, 0
/* 80139E84 00136DC4  7F C4 F3 78 */	mr r4, r30
/* 80139E88 00136DC8  38 7E 01 34 */	addi r3, r30, 0x134
/* 80139E8C 00136DCC  98 FE 01 30 */	stb r7, 0x130(r30)
/* 80139E90 00136DD0  38 A5 30 35 */	addi r5, r5, 0x64303035@l
/* 80139E94 00136DD4  38 DF 00 60 */	addi r6, r31, 0x60
/* 80139E98 00136DD8  98 1E 01 32 */	stb r0, 0x132(r30)
/* 80139E9C 00136DDC  98 FE 01 33 */	stb r7, 0x133(r30)
/* 80139EA0 00136DE0  48 2D 97 B9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139EA4 00136DE4  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 80139EA8 00136DE8  3C A0 64 30 */	lis r5, 0x64303036@ha
/* 80139EAC 00136DEC  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 80139EB0 00136DF0  38 E0 00 01 */	li r7, 1
/* 80139EB4 00136DF4  90 1E 01 34 */	stw r0, 0x134(r30)
/* 80139EB8 00136DF8  38 00 00 00 */	li r0, 0
/* 80139EBC 00136DFC  7F C4 F3 78 */	mr r4, r30
/* 80139EC0 00136E00  38 7E 01 50 */	addi r3, r30, 0x150
/* 80139EC4 00136E04  98 FE 01 4C */	stb r7, 0x14c(r30)
/* 80139EC8 00136E08  38 A5 30 36 */	addi r5, r5, 0x64303036@l
/* 80139ECC 00136E0C  38 DF 00 6C */	addi r6, r31, 0x6c
/* 80139ED0 00136E10  98 1E 01 4E */	stb r0, 0x14e(r30)
/* 80139ED4 00136E14  98 FE 01 4F */	stb r7, 0x14f(r30)
/* 80139ED8 00136E18  48 2D 97 81 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139EDC 00136E1C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80139EE0 00136E20  3C A0 64 30 */	lis r5, 0x64303037@ha
/* 80139EE4 00136E24  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80139EE8 00136E28  C0 02 9F 04 */	lfs f0, lbl_80518264@sda21(r2)
/* 80139EEC 00136E2C  90 1E 01 50 */	stw r0, 0x150(r30)
/* 80139EF0 00136E30  7F C4 F3 78 */	mr r4, r30
/* 80139EF4 00136E34  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 80139EF8 00136E38  38 7E 01 78 */	addi r3, r30, 0x178
/* 80139EFC 00136E3C  D0 1E 01 68 */	stfs f0, 0x168(r30)
/* 80139F00 00136E40  38 A5 30 37 */	addi r5, r5, 0x64303037@l
/* 80139F04 00136E44  C0 02 9F 08 */	lfs f0, lbl_80518268@sda21(r2)
/* 80139F08 00136E48  38 DF 00 78 */	addi r6, r31, 0x78
/* 80139F0C 00136E4C  D0 3E 01 70 */	stfs f1, 0x170(r30)
/* 80139F10 00136E50  D0 1E 01 74 */	stfs f0, 0x174(r30)
/* 80139F14 00136E54  48 2D 97 45 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139F18 00136E58  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 80139F1C 00136E5C  3C A0 64 30 */	lis r5, 0x64303038@ha
/* 80139F20 00136E60  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 80139F24 00136E64  38 E0 00 01 */	li r7, 1
/* 80139F28 00136E68  90 1E 01 78 */	stw r0, 0x178(r30)
/* 80139F2C 00136E6C  38 00 00 00 */	li r0, 0
/* 80139F30 00136E70  7F C4 F3 78 */	mr r4, r30
/* 80139F34 00136E74  38 7E 01 94 */	addi r3, r30, 0x194
/* 80139F38 00136E78  98 FE 01 90 */	stb r7, 0x190(r30)
/* 80139F3C 00136E7C  38 A5 30 38 */	addi r5, r5, 0x64303038@l
/* 80139F40 00136E80  38 DF 00 8C */	addi r6, r31, 0x8c
/* 80139F44 00136E84  98 1E 01 92 */	stb r0, 0x192(r30)
/* 80139F48 00136E88  98 FE 01 93 */	stb r7, 0x193(r30)
/* 80139F4C 00136E8C  48 2D 97 0D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 80139F50 00136E90  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 80139F54 00136E94  C0 42 9F 0C */	lfs f2, lbl_8051826C@sda21(r2)
/* 80139F58 00136E98  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 80139F5C 00136E9C  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 80139F60 00136EA0  90 1E 01 94 */	stw r0, 0x194(r30)
/* 80139F64 00136EA4  7F C3 F3 78 */	mr r3, r30
/* 80139F68 00136EA8  C0 02 9E F8 */	lfs f0, lbl_80518258@sda21(r2)
/* 80139F6C 00136EAC  D0 5E 01 AC */	stfs f2, 0x1ac(r30)
/* 80139F70 00136EB0  D0 3E 01 B4 */	stfs f1, 0x1b4(r30)
/* 80139F74 00136EB4  D0 1E 01 B8 */	stfs f0, 0x1b8(r30)
/* 80139F78 00136EB8  93 CD 92 68 */	stw r30, mInstance__13DynamicsParms@sda21(r13)
/* 80139F7C 00136EBC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80139F80 00136EC0  83 C1 00 08 */	lwz r30, 8(r1)
/* 80139F84 00136EC4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139F88 00136EC8  7C 08 03 A6 */	mtlr r0
/* 80139F8C 00136ECC  38 21 00 10 */	addi r1, r1, 0x10
/* 80139F90 00136ED0  4E 80 00 20 */	blr 
.endfn __ct__13DynamicsParmsFv

.fn __dt__13DynamicsParmsFv, weak
/* 80139F94 00136ED4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80139F98 00136ED8  7C 08 02 A6 */	mflr r0
/* 80139F9C 00136EDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 80139FA0 00136EE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80139FA4 00136EE4  7C 9F 23 78 */	mr r31, r4
/* 80139FA8 00136EE8  93 C1 00 08 */	stw r30, 8(r1)
/* 80139FAC 00136EEC  7C 7E 1B 79 */	or. r30, r3, r3
/* 80139FB0 00136EF0  41 82 00 3C */	beq .L_80139FEC
/* 80139FB4 00136EF4  3C 60 80 4B */	lis r3, __vt__13DynamicsParms@ha
/* 80139FB8 00136EF8  38 00 00 00 */	li r0, 0
/* 80139FBC 00136EFC  38 83 00 68 */	addi r4, r3, __vt__13DynamicsParms@l
/* 80139FC0 00136F00  38 7E 00 0C */	addi r3, r30, 0xc
/* 80139FC4 00136F04  90 9E 01 BC */	stw r4, 0x1bc(r30)
/* 80139FC8 00136F08  38 A4 00 08 */	addi r5, r4, 8
/* 80139FCC 00136F0C  38 80 00 00 */	li r4, 0
/* 80139FD0 00136F10  90 BE 00 0C */	stw r5, 0xc(r30)
/* 80139FD4 00136F14  90 0D 92 68 */	stw r0, mInstance__13DynamicsParms@sda21(r13)
/* 80139FD8 00136F18  4B EE 30 5D */	bl __dt__11JKRDisposerFv
/* 80139FDC 00136F1C  7F E0 07 35 */	extsh. r0, r31
/* 80139FE0 00136F20  40 81 00 0C */	ble .L_80139FEC
/* 80139FE4 00136F24  7F C3 F3 78 */	mr r3, r30
/* 80139FE8 00136F28  4B EE A0 CD */	bl __dl__FPv
.L_80139FEC:
/* 80139FEC 00136F2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80139FF0 00136F30  7F C3 F3 78 */	mr r3, r30
/* 80139FF4 00136F34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80139FF8 00136F38  83 C1 00 08 */	lwz r30, 8(r1)
/* 80139FFC 00136F3C  7C 08 03 A6 */	mtlr r0
/* 8013A000 00136F40  38 21 00 10 */	addi r1, r1, 0x10
/* 8013A004 00136F44  4E 80 00 20 */	blr 
.endfn __dt__13DynamicsParmsFv

.fn globalInstance__13DynamicsParmsFv, global
/* 8013A008 00136F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013A00C 00136F4C  7C 08 02 A6 */	mflr r0
/* 8013A010 00136F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013A014 00136F54  80 0D 92 68 */	lwz r0, mInstance__13DynamicsParms@sda21(r13)
/* 8013A018 00136F58  28 00 00 00 */	cmplwi r0, 0
/* 8013A01C 00136F5C  40 82 00 24 */	bne .L_8013A040
/* 8013A020 00136F60  38 60 01 C4 */	li r3, 0x1c4
/* 8013A024 00136F64  4B EE 9E 81 */	bl __nw__FUl
/* 8013A028 00136F68  7C 60 1B 79 */	or. r0, r3, r3
/* 8013A02C 00136F6C  41 82 00 10 */	beq .L_8013A03C
/* 8013A030 00136F70  38 80 00 01 */	li r4, 1
/* 8013A034 00136F74  4B FF FC 2D */	bl __ct__13DynamicsParmsFv
/* 8013A038 00136F78  7C 60 1B 78 */	mr r0, r3
.L_8013A03C:
/* 8013A03C 00136F7C  90 0D 92 68 */	stw r0, mInstance__13DynamicsParms@sda21(r13)
.L_8013A040:
/* 8013A040 00136F80  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013A044 00136F84  7C 08 03 A6 */	mtlr r0
/* 8013A048 00136F88  38 21 00 10 */	addi r1, r1, 0x10
/* 8013A04C 00136F8C  4E 80 00 20 */	blr 
.endfn globalInstance__13DynamicsParmsFv

.fn __ct__Q24Game5RigidFv, global
/* 8013A050 00136F90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013A054 00136F94  7C 08 02 A6 */	mflr r0
/* 8013A058 00136F98  3C 80 80 14 */	lis r4, __ct__Q24Game11RigidConfigFv@ha
/* 8013A05C 00136F9C  38 A0 00 00 */	li r5, 0
/* 8013A060 00136FA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013A064 00136FA4  38 84 A0 A4 */	addi r4, r4, __ct__Q24Game11RigidConfigFv@l
/* 8013A068 00136FA8  38 C0 00 88 */	li r6, 0x88
/* 8013A06C 00136FAC  38 E0 00 02 */	li r7, 2
/* 8013A070 00136FB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013A074 00136FB4  7C 7F 1B 78 */	mr r31, r3
/* 8013A078 00136FB8  38 7F 00 34 */	addi r3, r31, 0x34
/* 8013A07C 00136FBC  4B F8 77 C1 */	bl __construct_array
/* 8013A080 00136FC0  38 00 00 00 */	li r0, 0
/* 8013A084 00136FC4  7F E3 FB 78 */	mr r3, r31
/* 8013A088 00136FC8  98 1F 01 75 */	stb r0, 0x175(r31)
/* 8013A08C 00136FCC  98 1F 01 75 */	stb r0, 0x175(r31)
/* 8013A090 00136FD0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013A094 00136FD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013A098 00136FD8  7C 08 03 A6 */	mtlr r0
/* 8013A09C 00136FDC  38 21 00 10 */	addi r1, r1, 0x10
/* 8013A0A0 00136FE0  4E 80 00 20 */	blr 
.endfn __ct__Q24Game5RigidFv

.fn __ct__Q24Game11RigidConfigFv, weak
/* 8013A0A4 00136FE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013A0A8 00136FE8  7C 08 02 A6 */	mflr r0
/* 8013A0AC 00136FEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013A0B0 00136FF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8013A0B4 00136FF4  7C 7F 1B 78 */	mr r31, r3
/* 8013A0B8 00136FF8  38 7F 00 48 */	addi r3, r31, 0x48
/* 8013A0BC 00136FFC  48 2D 83 0D */	bl __ct__4QuatFv
/* 8013A0C0 00137000  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013A0C4 00137004  7F E3 FB 78 */	mr r3, r31
/* 8013A0C8 00137008  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8013A0CC 0013700C  7C 08 03 A6 */	mtlr r0
/* 8013A0D0 00137010  38 21 00 10 */	addi r1, r1, 0x10
/* 8013A0D4 00137014  4E 80 00 20 */	blr 
.endfn __ct__Q24Game11RigidConfigFv

.fn "initPosition__Q24Game5RigidFR10Vector3<f>R10Vector3<f>", global
/* 8013A0D8 00137018  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8013A0DC 0013701C  7C 08 02 A6 */	mflr r0
/* 8013A0E0 00137020  90 01 00 24 */	stw r0, 0x24(r1)
/* 8013A0E4 00137024  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8013A0E8 00137028  7C BF 2B 78 */	mr r31, r5
/* 8013A0EC 0013702C  38 A0 00 00 */	li r5, 0
/* 8013A0F0 00137030  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8013A0F4 00137034  7C 9E 23 78 */	mr r30, r4
/* 8013A0F8 00137038  7F E6 FB 78 */	mr r6, r31
/* 8013A0FC 0013703C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8013A100 00137040  7C 7D 1B 78 */	mr r29, r3
/* 8013A104 00137044  48 00 00 61 */	bl "initPositionIndex__Q24Game5RigidFR10Vector3<f>iR10Vector3<f>"
/* 8013A108 00137048  7F A3 EB 78 */	mr r3, r29
/* 8013A10C 0013704C  7F C4 F3 78 */	mr r4, r30
/* 8013A110 00137050  7F E6 FB 78 */	mr r6, r31
/* 8013A114 00137054  38 A0 00 01 */	li r5, 1
/* 8013A118 00137058  48 00 00 4D */	bl "initPositionIndex__Q24Game5RigidFR10Vector3<f>iR10Vector3<f>"
/* 8013A11C 0013705C  38 7D 00 8C */	addi r3, r29, 0x8c
/* 8013A120 00137060  4B FB 01 81 */	bl PSMTXIdentity
/* 8013A124 00137064  38 7D 01 14 */	addi r3, r29, 0x114
/* 8013A128 00137068  4B FB 01 79 */	bl PSMTXIdentity
/* 8013A12C 0013706C  38 7D 01 44 */	addi r3, r29, 0x144
/* 8013A130 00137070  4B FB 01 71 */	bl PSMTXIdentity
/* 8013A134 00137074  C0 02 9E F8 */	lfs f0, lbl_80518258@sda21(r2)
/* 8013A138 00137078  7F A3 EB 78 */	mr r3, r29
/* 8013A13C 0013707C  38 80 00 00 */	li r4, 0
/* 8013A140 00137080  D0 1D 00 00 */	stfs f0, 0(r29)
/* 8013A144 00137084  48 00 00 AD */	bl updateMatrix__Q24Game5RigidFi
/* 8013A148 00137088  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8013A14C 0013708C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8013A150 00137090  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8013A154 00137094  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8013A158 00137098  7C 08 03 A6 */	mtlr r0
/* 8013A15C 0013709C  38 21 00 20 */	addi r1, r1, 0x20
/* 8013A160 001370A0  4E 80 00 20 */	blr 
.endfn "initPosition__Q24Game5RigidFR10Vector3<f>R10Vector3<f>"

.fn "initPositionIndex__Q24Game5RigidFR10Vector3<f>iR10Vector3<f>", global
/* 8013A164 001370A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013A168 001370A8  7C 08 02 A6 */	mflr r0
/* 8013A16C 001370AC  1C A5 00 88 */	mulli r5, r5, 0x88
/* 8013A170 001370B0  C0 02 9E DC */	lfs f0, lbl_8051823C@sda21(r2)
/* 8013A174 001370B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013A178 001370B8  38 A5 00 34 */	addi r5, r5, 0x34
/* 8013A17C 001370BC  C0 24 00 00 */	lfs f1, 0(r4)
/* 8013A180 001370C0  7C A3 2A 14 */	add r5, r3, r5
/* 8013A184 001370C4  D0 25 00 00 */	stfs f1, 0(r5)
/* 8013A188 001370C8  38 65 00 48 */	addi r3, r5, 0x48
/* 8013A18C 001370CC  C0 24 00 04 */	lfs f1, 4(r4)
/* 8013A190 001370D0  D0 25 00 04 */	stfs f1, 4(r5)
/* 8013A194 001370D4  C0 24 00 08 */	lfs f1, 8(r4)
/* 8013A198 001370D8  7C C4 33 78 */	mr r4, r6
/* 8013A19C 001370DC  D0 25 00 08 */	stfs f1, 8(r5)
/* 8013A1A0 001370E0  D0 05 00 18 */	stfs f0, 0x18(r5)
/* 8013A1A4 001370E4  D0 05 00 1C */	stfs f0, 0x1c(r5)
/* 8013A1A8 001370E8  D0 05 00 20 */	stfs f0, 0x20(r5)
/* 8013A1AC 001370EC  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 8013A1B0 001370F0  D0 05 00 10 */	stfs f0, 0x10(r5)
/* 8013A1B4 001370F4  D0 05 00 14 */	stfs f0, 0x14(r5)
/* 8013A1B8 001370F8  D0 05 00 24 */	stfs f0, 0x24(r5)
/* 8013A1BC 001370FC  D0 05 00 28 */	stfs f0, 0x28(r5)
/* 8013A1C0 00137100  D0 05 00 2C */	stfs f0, 0x2c(r5)
/* 8013A1C4 00137104  D0 05 00 30 */	stfs f0, 0x30(r5)
/* 8013A1C8 00137108  D0 05 00 34 */	stfs f0, 0x34(r5)
/* 8013A1CC 0013710C  D0 05 00 38 */	stfs f0, 0x38(r5)
/* 8013A1D0 00137110  D0 05 00 3C */	stfs f0, 0x3c(r5)
/* 8013A1D4 00137114  D0 05 00 40 */	stfs f0, 0x40(r5)
/* 8013A1D8 00137118  D0 05 00 44 */	stfs f0, 0x44(r5)
/* 8013A1DC 0013711C  48 2D 83 21 */	bl "set__4QuatFR10Vector3<f>"
/* 8013A1E0 00137120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013A1E4 00137124  7C 08 03 A6 */	mtlr r0
/* 8013A1E8 00137128  38 21 00 10 */	addi r1, r1, 0x10
/* 8013A1EC 0013712C  4E 80 00 20 */	blr 
.endfn "initPositionIndex__Q24Game5RigidFR10Vector3<f>iR10Vector3<f>"

.fn updateMatrix__Q24Game5RigidFi, global
/* 8013A1F0 00137130  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8013A1F4 00137134  7C 08 02 A6 */	mflr r0
/* 8013A1F8 00137138  1C 84 00 88 */	mulli r4, r4, 0x88
/* 8013A1FC 0013713C  7C 65 1B 78 */	mr r5, r3
/* 8013A200 00137140  90 01 00 14 */	stw r0, 0x14(r1)
/* 8013A204 00137144  38 65 00 04 */	addi r3, r5, 4
/* 8013A208 00137148  38 84 00 34 */	addi r4, r4, 0x34
/* 8013A20C 0013714C  7C 85 22 14 */	add r4, r5, r4
/* 8013A210 00137150  38 A4 00 48 */	addi r5, r4, 0x48
/* 8013A214 00137154  48 2E E8 A5 */	bl "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
/* 8013A218 00137158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013A21C 0013715C  7C 08 03 A6 */	mtlr r0
/* 8013A220 00137160  38 21 00 10 */	addi r1, r1, 0x10
/* 8013A224 00137164  4E 80 00 20 */	blr 
.endfn updateMatrix__Q24Game5RigidFi

.fn computeForces__Q24Game5RigidFi, global
/* 8013A228 00137168  1C 84 00 88 */	mulli r4, r4, 0x88
/* 8013A22C 0013716C  C0 02 9E DC */	lfs f0, lbl_8051823C@sda21(r2)
/* 8013A230 00137170  38 84 00 34 */	addi r4, r4, 0x34
/* 8013A234 00137174  7C 83 22 14 */	add r4, r3, r4
/* 8013A238 00137178  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 8013A23C 0013717C  D0 04 00 1C */	stfs f0, 0x1c(r4)
/* 8013A240 00137180  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 8013A244 00137184  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 8013A248 00137188  D0 04 00 40 */	stfs f0, 0x40(r4)
/* 8013A24C 0013718C  D0 04 00 44 */	stfs f0, 0x44(r4)
/* 8013A250 00137190  80 6D 92 68 */	lwz r3, mInstance__13DynamicsParms@sda21(r13)
/* 8013A254 00137194  C0 63 01 AC */	lfs f3, 0x1ac(r3)
/* 8013A258 00137198  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8013A25C 0013719C  4C 81 00 20 */	blelr 
/* 8013A260 001371A0  C0 44 00 30 */	lfs f2, 0x30(r4)
/* 8013A264 001371A4  C0 A4 00 34 */	lfs f5, 0x34(r4)
/* 8013A268 001371A8  EC 02 00 F2 */	fmuls f0, f2, f3
/* 8013A26C 001371AC  C0 84 00 38 */	lfs f4, 0x38(r4)
/* 8013A270 001371B0  EC 25 00 F2 */	fmuls f1, f5, f3
/* 8013A274 001371B4  EC 64 00 F2 */	fmuls f3, f4, f3
/* 8013A278 001371B8  EC 42 00 28 */	fsubs f2, f2, f0
/* 8013A27C 001371BC  EC 25 08 28 */	fsubs f1, f5, f1
/* 8013A280 001371C0  EC 04 18 28 */	fsubs f0, f4, f3
/* 8013A284 001371C4  D0 44 00 30 */	stfs f2, 0x30(r4)
/* 8013A288 001371C8  D0 24 00 34 */	stfs f1, 0x34(r4)
/* 8013A28C 001371CC  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 8013A290 001371D0  4E 80 00 20 */	blr 
.endfn computeForces__Q24Game5RigidFi

.fn "getYDegree__FR4QuatR10Vector3<f>", local
/* 8013A294 001371D4  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8013A298 001371D8  7C 08 02 A6 */	mflr r0
/* 8013A29C 001371DC  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 8013A2A0 001371E0  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8013A2A4 001371E4  C0 02 9E F8 */	lfs f0, lbl_80518258@sda21(r2)
/* 8013A2A8 001371E8  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 8013A2AC 001371EC  7C 9F 23 78 */	mr r31, r4
/* 8013A2B0 001371F0  38 81 00 70 */	addi r4, r1, 0x70
/* 8013A2B4 001371F4  D0 21 00 AC */	stfs f1, 0xac(r1)
/* 8013A2B8 001371F8  D0 01 00 B0 */	stfs f0, 0xb0(r1)
/* 8013A2BC 001371FC  80 C1 00 AC */	lwz r6, 0xac(r1)
/* 8013A2C0 00137200  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 8013A2C4 00137204  7C 7E 1B 78 */	mr r30, r3
/* 8013A2C8 00137208  80 A1 00 B0 */	lwz r5, 0xb0(r1)
/* 8013A2CC 0013720C  38 61 00 9C */	addi r3, r1, 0x9c
/* 8013A2D0 00137210  D0 21 00 B4 */	stfs f1, 0xb4(r1)
/* 8013A2D4 00137214  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8013A2D8 00137218  90 C1 00 70 */	stw r6, 0x70(r1)
/* 8013A2DC 0013721C  90 A1 00 74 */	stw r5, 0x74(r1)
/* 8013A2E0 00137220  90 01 00 78 */	stw r0, 0x78(r1)
/* 8013A2E4 00137224  48 2D 80 FD */	bl "__ct__4QuatFf10Vector3<f>"
/* 8013A2E8 00137228  38 61 00 8C */	addi r3, r1, 0x8c
/* 8013A2EC 0013722C  48 2D 80 DD */	bl __ct__4QuatFv
/* 8013A2F0 00137230  38 61 00 7C */	addi r3, r1, 0x7c
/* 8013A2F4 00137234  48 2D 80 D5 */	bl __ct__4QuatFv
/* 8013A2F8 00137238  7F C4 F3 78 */	mr r4, r30
/* 8013A2FC 0013723C  38 61 00 60 */	addi r3, r1, 0x60
/* 8013A300 00137240  48 2D 84 99 */	bl inverse__4QuatFv
/* 8013A304 00137244  C0 61 00 60 */	lfs f3, 0x60(r1)
/* 8013A308 00137248  38 61 00 24 */	addi r3, r1, 0x24
/* 8013A30C 0013724C  C0 41 00 64 */	lfs f2, 0x64(r1)
/* 8013A310 00137250  C0 21 00 68 */	lfs f1, 0x68(r1)
/* 8013A314 00137254  C0 01 00 6C */	lfs f0, 0x6c(r1)
/* 8013A318 00137258  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 8013A31C 0013725C  D0 41 00 80 */	stfs f2, 0x80(r1)
/* 8013A320 00137260  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 8013A324 00137264  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 8013A328 00137268  48 2D 80 A1 */	bl __ct__4QuatFv
/* 8013A32C 0013726C  C1 3E 00 0C */	lfs f9, 0xc(r30)
/* 8013A330 00137270  38 61 00 50 */	addi r3, r1, 0x50
/* 8013A334 00137274  C1 A1 00 A4 */	lfs f13, 0xa4(r1)
/* 8013A338 00137278  38 81 00 34 */	addi r4, r1, 0x34
/* 8013A33C 0013727C  C0 FE 00 08 */	lfs f7, 8(r30)
/* 8013A340 00137280  C0 61 00 A0 */	lfs f3, 0xa0(r1)
/* 8013A344 00137284  EC 29 03 72 */	fmuls f1, f9, f13
/* 8013A348 00137288  C1 81 00 A8 */	lfs f12, 0xa8(r1)
/* 8013A34C 0013728C  EC 47 03 72 */	fmuls f2, f7, f13
/* 8013A350 00137290  C1 1E 00 04 */	lfs f8, 4(r30)
/* 8013A354 00137294  EC 07 00 F2 */	fmuls f0, f7, f3
/* 8013A358 00137298  EC C7 0B 38 */	fmsubs f6, f7, f12, f1
/* 8013A35C 0013729C  EC 28 03 32 */	fmuls f1, f8, f12
/* 8013A360 001372A0  C1 5E 00 00 */	lfs f10, 0(r30)
/* 8013A364 001372A4  EC 48 10 FA */	fmadds f2, f8, f3, f2
/* 8013A368 001372A8  C1 61 00 9C */	lfs f11, 0x9c(r1)
/* 8013A36C 001372AC  EC A3 02 B2 */	fmuls f5, f3, f10
/* 8013A370 001372B0  EC 89 08 F8 */	fmsubs f4, f9, f3, f1
/* 8013A374 001372B4  EC 29 13 3A */	fmadds f1, f9, f12, f2
/* 8013A378 001372B8  EC 48 03 78 */	fmsubs f2, f8, f13, f0
/* 8013A37C 001372BC  EC 0C 02 B2 */	fmuls f0, f12, f10
/* 8013A380 001372C0  EC 6D 02 B2 */	fmuls f3, f13, f10
/* 8013A384 001372C4  ED 29 02 F2 */	fmuls f9, f9, f11
/* 8013A388 001372C8  EC 02 00 2A */	fadds f0, f2, f0
/* 8013A38C 001372CC  EC 44 18 2A */	fadds f2, f4, f3
/* 8013A390 001372D0  EC E7 02 F2 */	fmuls f7, f7, f11
/* 8013A394 001372D4  EC 00 48 2A */	fadds f0, f0, f9
/* 8013A398 001372D8  EC 88 02 F2 */	fmuls f4, f8, f11
/* 8013A39C 001372DC  EC 42 38 2A */	fadds f2, f2, f7
/* 8013A3A0 001372E0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8013A3A4 001372E4  EC 66 28 2A */	fadds f3, f6, f5
/* 8013A3A8 001372E8  EC 2A 0A F8 */	fmsubs f1, f10, f11, f1
/* 8013A3AC 001372EC  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8013A3B0 001372F0  EC 03 20 2A */	fadds f0, f3, f4
/* 8013A3B4 001372F4  80 01 00 30 */	lwz r0, 0x30(r1)
/* 8013A3B8 001372F8  80 A1 00 2C */	lwz r5, 0x2c(r1)
/* 8013A3BC 001372FC  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8013A3C0 00137300  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8013A3C4 00137304  80 C1 00 28 */	lwz r6, 0x28(r1)
/* 8013A3C8 00137308  90 A1 00 38 */	stw r5, 0x38(r1)
/* 8013A3CC 0013730C  90 C1 00 34 */	stw r6, 0x34(r1)
/* 8013A3D0 00137310  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8013A3D4 00137314  48 2D 80 0D */	bl "__ct__4QuatFf10Vector3<f>"
/* 8013A3D8 00137318  C0 61 00 50 */	lfs f3, 0x50(r1)
/* 8013A3DC 0013731C  38 61 00 08 */	addi r3, r1, 8
/* 8013A3E0 00137320  C0 41 00 54 */	lfs f2, 0x54(r1)
/* 8013A3E4 00137324  C0 21 00 58 */	lfs f1, 0x58(r1)
/* 8013A3E8 00137328  C0 01 00 5C */	lfs f0, 0x5c(r1)
/* 8013A3EC 0013732C  D0 61 00 8C */	stfs f3, 0x8c(r1)
/* 8013A3F0 00137330  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 8013A3F4 00137334  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 8013A3F8 00137338  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 8013A3FC 0013733C  48 2D 7F CD */	bl __ct__4QuatFv
/* 8013A400 00137340  C1 01 00 98 */	lfs f8, 0x98(r1)
/* 8013A404 00137344  38 61 00 40 */	addi r3, r1, 0x40
/* 8013A408 00137348  C1 A1 00 84 */	lfs f13, 0x84(r1)
/* 8013A40C 0013734C  38 81 00 18 */	addi r4, r1, 0x18
/* 8013A410 00137350  C1 21 00 94 */	lfs f9, 0x94(r1)
/* 8013A414 00137354  C0 61 00 80 */	lfs f3, 0x80(r1)
/* 8013A418 00137358  EC 28 03 72 */	fmuls f1, f8, f13
/* 8013A41C 0013735C  C1 81 00 88 */	lfs f12, 0x88(r1)
/* 8013A420 00137360  EC 49 03 72 */	fmuls f2, f9, f13
/* 8013A424 00137364  C1 41 00 90 */	lfs f10, 0x90(r1)
/* 8013A428 00137368  EC 09 00 F2 */	fmuls f0, f9, f3
/* 8013A42C 0013736C  EC C9 0B 38 */	fmsubs f6, f9, f12, f1
/* 8013A430 00137370  EC 2A 03 32 */	fmuls f1, f10, f12
/* 8013A434 00137374  C1 61 00 8C */	lfs f11, 0x8c(r1)
/* 8013A438 00137378  EC 4A 10 FA */	fmadds f2, f10, f3, f2
/* 8013A43C 0013737C  C0 E1 00 7C */	lfs f7, 0x7c(r1)
/* 8013A440 00137380  EC A3 02 F2 */	fmuls f5, f3, f11
/* 8013A444 00137384  EC 88 08 F8 */	fmsubs f4, f8, f3, f1
/* 8013A448 00137388  EC 28 13 3A */	fmadds f1, f8, f12, f2
/* 8013A44C 0013738C  EC 6D 02 F2 */	fmuls f3, f13, f11
/* 8013A450 00137390  EC 4A 03 78 */	fmsubs f2, f10, f13, f0
/* 8013A454 00137394  EC 0C 02 F2 */	fmuls f0, f12, f11
/* 8013A458 00137398  EC C6 28 2A */	fadds f6, f6, f5
/* 8013A45C 0013739C  EC AA 01 F2 */	fmuls f5, f10, f7
/* 8013A460 001373A0  EC 84 18 2A */	fadds f4, f4, f3
/* 8013A464 001373A4  EC 69 01 F2 */	fmuls f3, f9, f7
/* 8013A468 001373A8  EC 42 00 2A */	fadds f2, f2, f0
/* 8013A46C 001373AC  EC 08 01 F2 */	fmuls f0, f8, f7
/* 8013A470 001373B0  EC A6 28 2A */	fadds f5, f6, f5
/* 8013A474 001373B4  EC 64 18 2A */	fadds f3, f4, f3
/* 8013A478 001373B8  EC 02 00 2A */	fadds f0, f2, f0
/* 8013A47C 001373BC  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 8013A480 001373C0  EC 2B 09 F8 */	fmsubs f1, f11, f7, f1
/* 8013A484 001373C4  D0 61 00 10 */	stfs f3, 0x10(r1)
/* 8013A488 001373C8  80 C1 00 0C */	lwz r6, 0xc(r1)
/* 8013A48C 001373CC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8013A490 001373D0  80 A1 00 10 */	lwz r5, 0x10(r1)
/* 8013A494 001373D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8013A498 001373D8  D0 21 00 08 */	stfs f1, 8(r1)
/* 8013A49C 001373DC  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8013A4A0 001373E0  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8013A4A4 001373E4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8013A4A8 001373E8  48 2D 7F 39 */	bl "__ct__4QuatFf10Vector3<f>"
/* 8013A4AC 001373EC  C0 61 00 40 */	lfs f3, 0x40(r1)
/* 8013A4B0 001373F0  C0 41 00 44 */	lfs f2, 0x44(r1)
/* 8013A4B4 001373F4  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 8013A4B8 001373F8  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 8013A4BC 001373FC  D0 61 00 8C */	stfs f3, 0x8c(r1)
/* 8013A4C0 00137400  D0 41 00 90 */	stfs f2, 0x90(r1)
/* 8013A4C4 00137404  D0 21 00 94 */	stfs f1, 0x94(r1)
/* 8013A4C8 00137408  D0 01 00 98 */	stfs f0, 0x98(r1)
/* 8013A4CC 0013740C  D0 5F 00 00 */	stfs f2, 0(r31)
/* 8013A4D0 00137410  C0 01 00 94 */	lfs f0, 0x94(r1)
/* 8013A4D4 00137414  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8013A4D8 00137418  C0 01 00 98 */	lfs f0, 0x98(r1)
/* 8013A4DC 0013741C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8013A4E0 00137420  C0 21 00 94 */	lfs f1, 0x94(r1)
/* 8013A4E4 00137424  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 8013A4E8 00137428  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 8013A4EC 0013742C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8013A4F0 00137430  7C 08 03 A6 */	mtlr r0
/* 8013A4F4 00137434  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8013A4F8 00137438  4E 80 00 20 */	blr 
.endfn "getYDegree__FR4QuatR10Vector3<f>"

.fn integrate__Q24Game5RigidFfi, global
/* 8013A4FC 0013743C  94 21 FD C0 */	stwu r1, -0x240(r1)
/* 8013A500 00137440  7C 08 02 A6 */	mflr r0
/* 8013A504 00137444  90 01 02 44 */	stw r0, 0x244(r1)
/* 8013A508 00137448  DB E1 02 30 */	stfd f31, 0x230(r1)
/* 8013A50C 0013744C  F3 E1 02 38 */	psq_st f31, 568(r1), 0, qr0
/* 8013A510 00137450  DB C1 02 20 */	stfd f30, 0x220(r1)
/* 8013A514 00137454  F3 C1 02 28 */	psq_st f30, 552(r1), 0, qr0
/* 8013A518 00137458  DB A1 02 10 */	stfd f29, 0x210(r1)
/* 8013A51C 0013745C  F3 A1 02 18 */	psq_st f29, 536(r1), 0, qr0
/* 8013A520 00137460  93 E1 02 0C */	stw r31, 0x20c(r1)
/* 8013A524 00137464  93 C1 02 08 */	stw r30, 0x208(r1)
/* 8013A528 00137468  1C A4 00 88 */	mulli r5, r4, 0x88
/* 8013A52C 0013746C  20 04 00 01 */	subfic r0, r4, 1
/* 8013A530 00137470  7C 7E 1B 78 */	mr r30, r3
/* 8013A534 00137474  FF E0 08 90 */	fmr f31, f1
/* 8013A538 00137478  38 61 01 D0 */	addi r3, r1, 0x1d0
/* 8013A53C 0013747C  1C 80 00 88 */	mulli r4, r0, 0x88
/* 8013A540 00137480  3B E5 00 34 */	addi r31, r5, 0x34
/* 8013A544 00137484  7F FE FA 14 */	add r31, r30, r31
/* 8013A548 00137488  38 A4 00 34 */	addi r5, r4, 0x34
/* 8013A54C 0013748C  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8013A550 00137490  7C BE 2A 14 */	add r5, r30, r5
/* 8013A554 00137494  38 9F 00 48 */	addi r4, r31, 0x48
/* 8013A558 00137498  D0 05 00 00 */	stfs f0, 0(r5)
/* 8013A55C 0013749C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8013A560 001374A0  D0 05 00 04 */	stfs f0, 4(r5)
/* 8013A564 001374A4  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8013A568 001374A8  D0 05 00 08 */	stfs f0, 8(r5)
/* 8013A56C 001374AC  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 8013A570 001374B0  D0 05 00 48 */	stfs f0, 0x48(r5)
/* 8013A574 001374B4  C0 1F 00 4C */	lfs f0, 0x4c(r31)
/* 8013A578 001374B8  D0 05 00 4C */	stfs f0, 0x4c(r5)
/* 8013A57C 001374BC  C0 1F 00 50 */	lfs f0, 0x50(r31)
/* 8013A580 001374C0  D0 05 00 50 */	stfs f0, 0x50(r5)
/* 8013A584 001374C4  C0 1F 00 54 */	lfs f0, 0x54(r31)
/* 8013A588 001374C8  D0 05 00 54 */	stfs f0, 0x54(r5)
/* 8013A58C 001374CC  48 2E E5 FD */	bl makeQ__7MatrixfFR4Quat
/* 8013A590 001374D0  38 61 01 D0 */	addi r3, r1, 0x1d0
/* 8013A594 001374D4  38 81 01 70 */	addi r4, r1, 0x170
/* 8013A598 001374D8  4B FA FE 35 */	bl PSMTXTranspose
/* 8013A59C 001374DC  38 61 01 D0 */	addi r3, r1, 0x1d0
/* 8013A5A0 001374E0  38 9E 01 44 */	addi r4, r30, 0x144
/* 8013A5A4 001374E4  38 A1 01 A0 */	addi r5, r1, 0x1a0
/* 8013A5A8 001374E8  4B FA FD 59 */	bl PSMTXConcat
/* 8013A5AC 001374EC  38 61 01 A0 */	addi r3, r1, 0x1a0
/* 8013A5B0 001374F0  38 81 01 70 */	addi r4, r1, 0x170
/* 8013A5B4 001374F4  38 BF 00 58 */	addi r5, r31, 0x58
/* 8013A5B8 001374F8  4B FA FD 49 */	bl PSMTXConcat
/* 8013A5BC 001374FC  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 8013A5C0 00137500  38 7F 00 58 */	addi r3, r31, 0x58
/* 8013A5C4 00137504  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 8013A5C8 00137508  38 9F 00 30 */	addi r4, r31, 0x30
/* 8013A5CC 0013750C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8013A5D0 00137510  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8013A5D4 00137514  C0 9F 00 14 */	lfs f4, 0x14(r31)
/* 8013A5D8 00137518  EC 42 07 F2 */	fmuls f2, f2, f31
/* 8013A5DC 0013751C  C0 7F 00 04 */	lfs f3, 4(r31)
/* 8013A5E0 00137520  38 A1 00 90 */	addi r5, r1, 0x90
/* 8013A5E4 00137524  EC 01 00 2A */	fadds f0, f1, f0
/* 8013A5E8 00137528  C0 BF 00 08 */	lfs f5, 8(r31)
/* 8013A5EC 0013752C  EC 24 07 F2 */	fmuls f1, f4, f31
/* 8013A5F0 00137530  EC 43 10 2A */	fadds f2, f3, f2
/* 8013A5F4 00137534  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8013A5F8 00137538  EC 05 08 2A */	fadds f0, f5, f1
/* 8013A5FC 0013753C  D0 5F 00 04 */	stfs f2, 4(r31)
/* 8013A600 00137540  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8013A604 00137544  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 8013A608 00137548  C0 5F 00 40 */	lfs f2, 0x40(r31)
/* 8013A60C 0013754C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8013A610 00137550  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8013A614 00137554  C0 9F 00 44 */	lfs f4, 0x44(r31)
/* 8013A618 00137558  EC 42 07 F2 */	fmuls f2, f2, f31
/* 8013A61C 0013755C  C0 7F 00 34 */	lfs f3, 0x34(r31)
/* 8013A620 00137560  EC 01 00 2A */	fadds f0, f1, f0
/* 8013A624 00137564  C0 BF 00 38 */	lfs f5, 0x38(r31)
/* 8013A628 00137568  EC 24 07 F2 */	fmuls f1, f4, f31
/* 8013A62C 0013756C  EC 43 10 2A */	fadds f2, f3, f2
/* 8013A630 00137570  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8013A634 00137574  EC 05 08 2A */	fadds f0, f5, f1
/* 8013A638 00137578  D0 5F 00 34 */	stfs f2, 0x34(r31)
/* 8013A63C 0013757C  D0 1F 00 38 */	stfs f0, 0x38(r31)
/* 8013A640 00137580  C0 3E 00 00 */	lfs f1, 0(r30)
/* 8013A644 00137584  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 8013A648 00137588  EC DF 00 72 */	fmuls f6, f31, f1
/* 8013A64C 0013758C  C0 5F 00 1C */	lfs f2, 0x1c(r31)
/* 8013A650 00137590  C0 9F 00 20 */	lfs f4, 0x20(r31)
/* 8013A654 00137594  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8013A658 00137598  EC 00 01 B2 */	fmuls f0, f0, f6
/* 8013A65C 0013759C  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 8013A660 001375A0  EC 42 01 B2 */	fmuls f2, f2, f6
/* 8013A664 001375A4  C0 BF 00 14 */	lfs f5, 0x14(r31)
/* 8013A668 001375A8  EC 84 01 B2 */	fmuls f4, f4, f6
/* 8013A66C 001375AC  EC 01 00 2A */	fadds f0, f1, f0
/* 8013A670 001375B0  EC 23 10 2A */	fadds f1, f3, f2
/* 8013A674 001375B4  EC 45 20 2A */	fadds f2, f5, f4
/* 8013A678 001375B8  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8013A67C 001375BC  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 8013A680 001375C0  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 8013A684 001375C4  4B FB 05 55 */	bl PSMTXMultVec
/* 8013A688 001375C8  C0 21 00 94 */	lfs f1, 0x94(r1)
/* 8013A68C 001375CC  38 61 01 60 */	addi r3, r1, 0x160
/* 8013A690 001375D0  C0 41 00 98 */	lfs f2, 0x98(r1)
/* 8013A694 001375D4  C0 01 00 90 */	lfs f0, 0x90(r1)
/* 8013A698 001375D8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8013A69C 001375DC  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 8013A6A0 001375E0  D0 5F 00 2C */	stfs f2, 0x2c(r31)
/* 8013A6A4 001375E4  48 2D 7D 25 */	bl __ct__4QuatFv
/* 8013A6A8 001375E8  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 8013A6AC 001375EC  38 61 01 50 */	addi r3, r1, 0x150
/* 8013A6B0 001375F0  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 8013A6B4 001375F4  38 81 00 FC */	addi r4, r1, 0xfc
/* 8013A6B8 001375F8  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 8013A6BC 001375FC  90 A1 00 FC */	stw r5, 0xfc(r1)
/* 8013A6C0 00137600  90 01 01 00 */	stw r0, 0x100(r1)
/* 8013A6C4 00137604  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 8013A6C8 00137608  90 01 01 04 */	stw r0, 0x104(r1)
/* 8013A6CC 0013760C  48 2D 7D 15 */	bl "__ct__4QuatFf10Vector3<f>"
/* 8013A6D0 00137610  38 61 00 74 */	addi r3, r1, 0x74
/* 8013A6D4 00137614  48 2D 7C F5 */	bl __ct__4QuatFv
/* 8013A6D8 00137618  C0 BF 00 50 */	lfs f5, 0x50(r31)
/* 8013A6DC 0013761C  38 61 00 EC */	addi r3, r1, 0xec
/* 8013A6E0 00137620  C1 81 01 58 */	lfs f12, 0x158(r1)
/* 8013A6E4 00137624  38 81 00 84 */	addi r4, r1, 0x84
/* 8013A6E8 00137628  C1 61 01 5C */	lfs f11, 0x15c(r1)
/* 8013A6EC 0013762C  C0 DF 00 4C */	lfs f6, 0x4c(r31)
/* 8013A6F0 00137630  EC 4C 01 72 */	fmuls f2, f12, f5
/* 8013A6F4 00137634  C1 A1 01 54 */	lfs f13, 0x154(r1)
/* 8013A6F8 00137638  EC 6B 01 72 */	fmuls f3, f11, f5
/* 8013A6FC 0013763C  C0 FF 00 54 */	lfs f7, 0x54(r31)
/* 8013A700 00137640  EC 0C 01 B2 */	fmuls f0, f12, f6
/* 8013A704 00137644  C3 A1 01 50 */	lfs f29, 0x150(r1)
/* 8013A708 00137648  EC 2D 01 F2 */	fmuls f1, f13, f7
/* 8013A70C 0013764C  C1 1F 00 48 */	lfs f8, 0x48(r31)
/* 8013A710 00137650  EC 8D 11 BA */	fmadds f4, f13, f6, f2
/* 8013A714 00137654  ED 47 07 72 */	fmuls f10, f7, f29
/* 8013A718 00137658  EC 4B 09 B8 */	fmsubs f2, f11, f6, f1
/* 8013A71C 0013765C  EC 2B 21 FA */	fmadds f1, f11, f7, f4
/* 8013A720 00137660  EC 0D 01 78 */	fmsubs f0, f13, f5, f0
/* 8013A724 00137664  ED 25 07 72 */	fmuls f9, f5, f29
/* 8013A728 00137668  EC 86 07 72 */	fmuls f4, f6, f29
/* 8013A72C 0013766C  EC 6C 19 F8 */	fmsubs f3, f12, f7, f3
/* 8013A730 00137670  EC AD 02 32 */	fmuls f5, f13, f8
/* 8013A734 00137674  EC 3D 0A 38 */	fmsubs f1, f29, f8, f1
/* 8013A738 00137678  EC C3 20 2A */	fadds f6, f3, f4
/* 8013A73C 0013767C  EC 82 48 2A */	fadds f4, f2, f9
/* 8013A740 00137680  EC 6C 02 32 */	fmuls f3, f12, f8
/* 8013A744 00137684  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 8013A748 00137688  EC 40 50 2A */	fadds f2, f0, f10
/* 8013A74C 0013768C  EC 0B 02 32 */	fmuls f0, f11, f8
/* 8013A750 00137690  EC A6 28 2A */	fadds f5, f6, f5
/* 8013A754 00137694  EC 64 18 2A */	fadds f3, f4, f3
/* 8013A758 00137698  EC 02 00 2A */	fadds f0, f2, f0
/* 8013A75C 0013769C  D0 A1 00 78 */	stfs f5, 0x78(r1)
/* 8013A760 001376A0  D0 61 00 7C */	stfs f3, 0x7c(r1)
/* 8013A764 001376A4  80 C1 00 78 */	lwz r6, 0x78(r1)
/* 8013A768 001376A8  D0 01 00 80 */	stfs f0, 0x80(r1)
/* 8013A76C 001376AC  80 A1 00 7C */	lwz r5, 0x7c(r1)
/* 8013A770 001376B0  80 01 00 80 */	lwz r0, 0x80(r1)
/* 8013A774 001376B4  90 C1 00 84 */	stw r6, 0x84(r1)
/* 8013A778 001376B8  90 A1 00 88 */	stw r5, 0x88(r1)
/* 8013A77C 001376BC  90 01 00 8C */	stw r0, 0x8c(r1)
/* 8013A780 001376C0  48 2D 7C 61 */	bl "__ct__4QuatFf10Vector3<f>"
/* 8013A784 001376C4  C0 61 00 EC */	lfs f3, 0xec(r1)
/* 8013A788 001376C8  C0 41 00 F0 */	lfs f2, 0xf0(r1)
/* 8013A78C 001376CC  C0 21 00 F4 */	lfs f1, 0xf4(r1)
/* 8013A790 001376D0  C0 01 00 F8 */	lfs f0, 0xf8(r1)
/* 8013A794 001376D4  D0 61 01 60 */	stfs f3, 0x160(r1)
/* 8013A798 001376D8  D0 41 01 64 */	stfs f2, 0x164(r1)
/* 8013A79C 001376DC  D0 21 01 68 */	stfs f1, 0x168(r1)
/* 8013A7A0 001376E0  D0 01 01 6C */	stfs f0, 0x16c(r1)
/* 8013A7A4 001376E4  88 1E 01 75 */	lbz r0, 0x175(r30)
/* 8013A7A8 001376E8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8013A7AC 001376EC  41 82 02 8C */	beq .L_8013AA38
/* 8013A7B0 001376F0  38 61 01 40 */	addi r3, r1, 0x140
/* 8013A7B4 001376F4  48 2D 7C 15 */	bl __ct__4QuatFv
/* 8013A7B8 001376F8  C0 02 9F 10 */	lfs f0, lbl_80518270@sda21(r2)
/* 8013A7BC 001376FC  38 61 00 DC */	addi r3, r1, 0xdc
/* 8013A7C0 00137700  C0 61 01 64 */	lfs f3, 0x164(r1)
/* 8013A7C4 00137704  38 81 00 5C */	addi r4, r1, 0x5c
/* 8013A7C8 00137708  EC A0 07 F2 */	fmuls f5, f0, f31
/* 8013A7CC 0013770C  C0 41 01 68 */	lfs f2, 0x168(r1)
/* 8013A7D0 00137710  C0 21 01 6C */	lfs f1, 0x16c(r1)
/* 8013A7D4 00137714  C0 01 01 60 */	lfs f0, 0x160(r1)
/* 8013A7D8 00137718  EC 83 01 72 */	fmuls f4, f3, f5
/* 8013A7DC 0013771C  EC 62 01 72 */	fmuls f3, f2, f5
/* 8013A7E0 00137720  EC 41 01 72 */	fmuls f2, f1, f5
/* 8013A7E4 00137724  D0 81 00 68 */	stfs f4, 0x68(r1)
/* 8013A7E8 00137728  EC 25 00 32 */	fmuls f1, f5, f0
/* 8013A7EC 0013772C  D0 61 00 6C */	stfs f3, 0x6c(r1)
/* 8013A7F0 00137730  80 C1 00 68 */	lwz r6, 0x68(r1)
/* 8013A7F4 00137734  D0 41 00 70 */	stfs f2, 0x70(r1)
/* 8013A7F8 00137738  80 A1 00 6C */	lwz r5, 0x6c(r1)
/* 8013A7FC 0013773C  80 01 00 70 */	lwz r0, 0x70(r1)
/* 8013A800 00137740  90 C1 00 5C */	stw r6, 0x5c(r1)
/* 8013A804 00137744  90 A1 00 60 */	stw r5, 0x60(r1)
/* 8013A808 00137748  90 01 00 64 */	stw r0, 0x64(r1)
/* 8013A80C 0013774C  48 2D 7B D5 */	bl "__ct__4QuatFf10Vector3<f>"
/* 8013A810 00137750  C0 61 00 DC */	lfs f3, 0xdc(r1)
/* 8013A814 00137754  38 61 01 30 */	addi r3, r1, 0x130
/* 8013A818 00137758  C0 41 00 E0 */	lfs f2, 0xe0(r1)
/* 8013A81C 0013775C  C0 21 00 E4 */	lfs f1, 0xe4(r1)
/* 8013A820 00137760  C0 01 00 E8 */	lfs f0, 0xe8(r1)
/* 8013A824 00137764  D0 61 01 40 */	stfs f3, 0x140(r1)
/* 8013A828 00137768  D0 41 01 44 */	stfs f2, 0x144(r1)
/* 8013A82C 0013776C  D0 21 01 48 */	stfs f1, 0x148(r1)
/* 8013A830 00137770  D0 01 01 4C */	stfs f0, 0x14c(r1)
/* 8013A834 00137774  48 2D 7B 95 */	bl __ct__4QuatFv
/* 8013A838 00137778  38 61 00 4C */	addi r3, r1, 0x4c
/* 8013A83C 0013777C  48 2D 7B 8D */	bl __ct__4QuatFv
/* 8013A840 00137780  C0 3F 00 48 */	lfs f1, 0x48(r31)
/* 8013A844 00137784  38 61 00 CC */	addi r3, r1, 0xcc
/* 8013A848 00137788  C0 01 01 40 */	lfs f0, 0x140(r1)
/* 8013A84C 0013778C  38 81 00 4C */	addi r4, r1, 0x4c
/* 8013A850 00137790  C0 81 01 4C */	lfs f4, 0x14c(r1)
/* 8013A854 00137794  EC 21 00 2A */	fadds f1, f1, f0
/* 8013A858 00137798  C0 41 01 48 */	lfs f2, 0x148(r1)
/* 8013A85C 0013779C  C0 01 01 44 */	lfs f0, 0x144(r1)
/* 8013A860 001377A0  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 8013A864 001377A4  C0 BF 00 54 */	lfs f5, 0x54(r31)
/* 8013A868 001377A8  C0 7F 00 50 */	lfs f3, 0x50(r31)
/* 8013A86C 001377AC  C0 3F 00 4C */	lfs f1, 0x4c(r31)
/* 8013A870 001377B0  EC 85 20 2A */	fadds f4, f5, f4
/* 8013A874 001377B4  EC 43 10 2A */	fadds f2, f3, f2
/* 8013A878 001377B8  EC 01 00 2A */	fadds f0, f1, f0
/* 8013A87C 001377BC  D0 81 00 58 */	stfs f4, 0x58(r1)
/* 8013A880 001377C0  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8013A884 001377C4  D0 41 00 54 */	stfs f2, 0x54(r1)
/* 8013A888 001377C8  48 2D 7E D9 */	bl __ct__4QuatFR4Quat
/* 8013A88C 001377CC  C0 61 00 CC */	lfs f3, 0xcc(r1)
/* 8013A890 001377D0  38 7F 00 48 */	addi r3, r31, 0x48
/* 8013A894 001377D4  C0 41 00 D0 */	lfs f2, 0xd0(r1)
/* 8013A898 001377D8  38 81 01 24 */	addi r4, r1, 0x124
/* 8013A89C 001377DC  C0 21 00 D4 */	lfs f1, 0xd4(r1)
/* 8013A8A0 001377E0  C0 01 00 D8 */	lfs f0, 0xd8(r1)
/* 8013A8A4 001377E4  D0 61 01 30 */	stfs f3, 0x130(r1)
/* 8013A8A8 001377E8  D0 41 01 34 */	stfs f2, 0x134(r1)
/* 8013A8AC 001377EC  D0 21 01 38 */	stfs f1, 0x138(r1)
/* 8013A8B0 001377F0  D0 01 01 3C */	stfs f0, 0x13c(r1)
/* 8013A8B4 001377F4  4B FF F9 E1 */	bl "getYDegree__FR4QuatR10Vector3<f>"
/* 8013A8B8 001377F8  FF C0 08 90 */	fmr f30, f1
/* 8013A8BC 001377FC  38 61 01 30 */	addi r3, r1, 0x130
/* 8013A8C0 00137800  38 81 01 18 */	addi r4, r1, 0x118
/* 8013A8C4 00137804  4B FF F9 D1 */	bl "getYDegree__FR4QuatR10Vector3<f>"
/* 8013A8C8 00137808  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8013A8CC 0013780C  FF E0 08 90 */	fmr f31, f1
/* 8013A8D0 00137810  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8013A8D4 00137814  C0 03 0A A8 */	lfs f0, 0xaa8(r3)
/* 8013A8D8 00137818  C3 A3 08 00 */	lfs f29, 0x800(r3)
/* 8013A8DC 0013781C  FC 1E 00 40 */	fcmpo cr0, f30, f0
/* 8013A8E0 00137820  40 80 00 E0 */	bge .L_8013A9C0
/* 8013A8E4 00137824  FC 1F F0 40 */	fcmpo cr0, f31, f30
/* 8013A8E8 00137828  40 80 00 B4 */	bge .L_8013A99C
/* 8013A8EC 0013782C  C0 01 01 28 */	lfs f0, 0x128(r1)
/* 8013A8F0 00137830  38 7F 00 58 */	addi r3, r31, 0x58
/* 8013A8F4 00137834  C0 22 9E DC */	lfs f1, lbl_8051823C@sda21(r2)
/* 8013A8F8 00137838  38 9F 00 30 */	addi r4, r31, 0x30
/* 8013A8FC 0013783C  C1 01 01 24 */	lfs f8, 0x124(r1)
/* 8013A900 00137840  38 A1 00 40 */	addi r5, r1, 0x40
/* 8013A904 00137844  EC A0 00 72 */	fmuls f5, f0, f1
/* 8013A908 00137848  C0 42 9E F8 */	lfs f2, lbl_80518258@sda21(r2)
/* 8013A90C 0013784C  C0 61 01 2C */	lfs f3, 0x12c(r1)
/* 8013A910 00137850  EC 08 00 72 */	fmuls f0, f8, f1
/* 8013A914 00137854  C0 82 9F 14 */	lfs f4, lbl_80518274@sda21(r2)
/* 8013A918 00137858  EC C3 28 BC */	fnmsubs f6, f3, f2, f5
/* 8013A91C 0013785C  EC E3 00 78 */	fmsubs f7, f3, f1, f0
/* 8013A920 00137860  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 8013A924 00137864  EC A8 28 B8 */	fmsubs f5, f8, f2, f5
/* 8013A928 00137868  C0 7F 00 34 */	lfs f3, 0x34(r31)
/* 8013A92C 0013786C  EC 06 01 32 */	fmuls f0, f6, f4
/* 8013A930 00137870  EC 47 01 32 */	fmuls f2, f7, f4
/* 8013A934 00137874  EC 85 01 32 */	fmuls f4, f5, f4
/* 8013A938 00137878  C0 BF 00 38 */	lfs f5, 0x38(r31)
/* 8013A93C 0013787C  EC 01 00 2A */	fadds f0, f1, f0
/* 8013A940 00137880  EC 23 10 2A */	fadds f1, f3, f2
/* 8013A944 00137884  EC 45 20 2A */	fadds f2, f5, f4
/* 8013A948 00137888  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8013A94C 0013788C  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 8013A950 00137890  D0 5F 00 38 */	stfs f2, 0x38(r31)
/* 8013A954 00137894  4B FB 02 85 */	bl PSMTXMultVec
/* 8013A958 00137898  C0 21 00 44 */	lfs f1, 0x44(r1)
/* 8013A95C 0013789C  FC 1F E8 40 */	fcmpo cr0, f31, f29
/* 8013A960 001378A0  C0 41 00 48 */	lfs f2, 0x48(r1)
/* 8013A964 001378A4  C0 01 00 40 */	lfs f0, 0x40(r1)
/* 8013A968 001378A8  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8013A96C 001378AC  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 8013A970 001378B0  D0 5F 00 2C */	stfs f2, 0x2c(r31)
/* 8013A974 001378B4  41 80 01 B8 */	blt .L_8013AB2C
/* 8013A978 001378B8  C0 01 01 30 */	lfs f0, 0x130(r1)
/* 8013A97C 001378BC  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8013A980 001378C0  C0 01 01 34 */	lfs f0, 0x134(r1)
/* 8013A984 001378C4  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8013A988 001378C8  C0 01 01 38 */	lfs f0, 0x138(r1)
/* 8013A98C 001378CC  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8013A990 001378D0  C0 01 01 3C */	lfs f0, 0x13c(r1)
/* 8013A994 001378D4  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 8013A998 001378D8  48 00 01 94 */	b .L_8013AB2C
.L_8013A99C:
/* 8013A99C 001378DC  C0 01 01 30 */	lfs f0, 0x130(r1)
/* 8013A9A0 001378E0  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8013A9A4 001378E4  C0 01 01 34 */	lfs f0, 0x134(r1)
/* 8013A9A8 001378E8  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8013A9AC 001378EC  C0 01 01 38 */	lfs f0, 0x138(r1)
/* 8013A9B0 001378F0  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8013A9B4 001378F4  C0 01 01 3C */	lfs f0, 0x13c(r1)
/* 8013A9B8 001378F8  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 8013A9BC 001378FC  48 00 01 70 */	b .L_8013AB2C
.L_8013A9C0:
/* 8013A9C0 00137900  38 61 00 30 */	addi r3, r1, 0x30
/* 8013A9C4 00137904  48 2D 7A 05 */	bl __ct__4QuatFv
/* 8013A9C8 00137908  C0 3F 00 48 */	lfs f1, 0x48(r31)
/* 8013A9CC 0013790C  38 61 00 BC */	addi r3, r1, 0xbc
/* 8013A9D0 00137910  C0 01 01 40 */	lfs f0, 0x140(r1)
/* 8013A9D4 00137914  38 81 00 30 */	addi r4, r1, 0x30
/* 8013A9D8 00137918  C0 81 01 4C */	lfs f4, 0x14c(r1)
/* 8013A9DC 0013791C  EC 21 00 2A */	fadds f1, f1, f0
/* 8013A9E0 00137920  C0 41 01 48 */	lfs f2, 0x148(r1)
/* 8013A9E4 00137924  C0 01 01 44 */	lfs f0, 0x144(r1)
/* 8013A9E8 00137928  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8013A9EC 0013792C  C0 BF 00 54 */	lfs f5, 0x54(r31)
/* 8013A9F0 00137930  C0 7F 00 50 */	lfs f3, 0x50(r31)
/* 8013A9F4 00137934  C0 3F 00 4C */	lfs f1, 0x4c(r31)
/* 8013A9F8 00137938  EC 85 20 2A */	fadds f4, f5, f4
/* 8013A9FC 0013793C  EC 43 10 2A */	fadds f2, f3, f2
/* 8013AA00 00137940  EC 01 00 2A */	fadds f0, f1, f0
/* 8013AA04 00137944  D0 81 00 3C */	stfs f4, 0x3c(r1)
/* 8013AA08 00137948  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8013AA0C 0013794C  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8013AA10 00137950  48 2D 7D 51 */	bl __ct__4QuatFR4Quat
/* 8013AA14 00137954  C0 01 00 BC */	lfs f0, 0xbc(r1)
/* 8013AA18 00137958  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8013AA1C 0013795C  C0 01 00 C0 */	lfs f0, 0xc0(r1)
/* 8013AA20 00137960  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8013AA24 00137964  C0 01 00 C4 */	lfs f0, 0xc4(r1)
/* 8013AA28 00137968  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8013AA2C 0013796C  C0 01 00 C8 */	lfs f0, 0xc8(r1)
/* 8013AA30 00137970  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 8013AA34 00137974  48 00 00 F8 */	b .L_8013AB2C
.L_8013AA38:
/* 8013AA38 00137978  38 61 01 08 */	addi r3, r1, 0x108
/* 8013AA3C 0013797C  48 2D 79 8D */	bl __ct__4QuatFv
/* 8013AA40 00137980  C0 02 9F 10 */	lfs f0, lbl_80518270@sda21(r2)
/* 8013AA44 00137984  38 61 00 AC */	addi r3, r1, 0xac
/* 8013AA48 00137988  C0 61 01 64 */	lfs f3, 0x164(r1)
/* 8013AA4C 0013798C  38 81 00 18 */	addi r4, r1, 0x18
/* 8013AA50 00137990  EC A0 07 F2 */	fmuls f5, f0, f31
/* 8013AA54 00137994  C0 41 01 68 */	lfs f2, 0x168(r1)
/* 8013AA58 00137998  C0 21 01 6C */	lfs f1, 0x16c(r1)
/* 8013AA5C 0013799C  C0 01 01 60 */	lfs f0, 0x160(r1)
/* 8013AA60 001379A0  EC 83 01 72 */	fmuls f4, f3, f5
/* 8013AA64 001379A4  EC 62 01 72 */	fmuls f3, f2, f5
/* 8013AA68 001379A8  EC 41 01 72 */	fmuls f2, f1, f5
/* 8013AA6C 001379AC  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 8013AA70 001379B0  EC 25 00 32 */	fmuls f1, f5, f0
/* 8013AA74 001379B4  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8013AA78 001379B8  80 C1 00 24 */	lwz r6, 0x24(r1)
/* 8013AA7C 001379BC  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 8013AA80 001379C0  80 A1 00 28 */	lwz r5, 0x28(r1)
/* 8013AA84 001379C4  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8013AA88 001379C8  90 C1 00 18 */	stw r6, 0x18(r1)
/* 8013AA8C 001379CC  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8013AA90 001379D0  90 01 00 20 */	stw r0, 0x20(r1)
/* 8013AA94 001379D4  48 2D 79 4D */	bl "__ct__4QuatFf10Vector3<f>"
/* 8013AA98 001379D8  C0 61 00 AC */	lfs f3, 0xac(r1)
/* 8013AA9C 001379DC  38 61 00 08 */	addi r3, r1, 8
/* 8013AAA0 001379E0  C0 41 00 B0 */	lfs f2, 0xb0(r1)
/* 8013AAA4 001379E4  C0 21 00 B4 */	lfs f1, 0xb4(r1)
/* 8013AAA8 001379E8  C0 01 00 B8 */	lfs f0, 0xb8(r1)
/* 8013AAAC 001379EC  D0 61 01 08 */	stfs f3, 0x108(r1)
/* 8013AAB0 001379F0  D0 41 01 0C */	stfs f2, 0x10c(r1)
/* 8013AAB4 001379F4  D0 21 01 10 */	stfs f1, 0x110(r1)
/* 8013AAB8 001379F8  D0 01 01 14 */	stfs f0, 0x114(r1)
/* 8013AABC 001379FC  48 2D 79 0D */	bl __ct__4QuatFv
/* 8013AAC0 00137A00  C0 3F 00 48 */	lfs f1, 0x48(r31)
/* 8013AAC4 00137A04  38 61 00 9C */	addi r3, r1, 0x9c
/* 8013AAC8 00137A08  C0 01 01 08 */	lfs f0, 0x108(r1)
/* 8013AACC 00137A0C  38 81 00 08 */	addi r4, r1, 8
/* 8013AAD0 00137A10  C0 81 01 14 */	lfs f4, 0x114(r1)
/* 8013AAD4 00137A14  EC 21 00 2A */	fadds f1, f1, f0
/* 8013AAD8 00137A18  C0 41 01 10 */	lfs f2, 0x110(r1)
/* 8013AADC 00137A1C  C0 01 01 0C */	lfs f0, 0x10c(r1)
/* 8013AAE0 00137A20  D0 21 00 08 */	stfs f1, 8(r1)
/* 8013AAE4 00137A24  C0 BF 00 54 */	lfs f5, 0x54(r31)
/* 8013AAE8 00137A28  C0 7F 00 50 */	lfs f3, 0x50(r31)
/* 8013AAEC 00137A2C  C0 3F 00 4C */	lfs f1, 0x4c(r31)
/* 8013AAF0 00137A30  EC 85 20 2A */	fadds f4, f5, f4
/* 8013AAF4 00137A34  EC 43 10 2A */	fadds f2, f3, f2
/* 8013AAF8 00137A38  EC 01 00 2A */	fadds f0, f1, f0
/* 8013AAFC 00137A3C  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 8013AB00 00137A40  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8013AB04 00137A44  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 8013AB08 00137A48  48 2D 7C 59 */	bl __ct__4QuatFR4Quat
/* 8013AB0C 00137A4C  C0 01 00 9C */	lfs f0, 0x9c(r1)
/* 8013AB10 00137A50  D0 1F 00 48 */	stfs f0, 0x48(r31)
/* 8013AB14 00137A54  C0 01 00 A0 */	lfs f0, 0xa0(r1)
/* 8013AB18 00137A58  D0 1F 00 4C */	stfs f0, 0x4c(r31)
/* 8013AB1C 00137A5C  C0 01 00 A4 */	lfs f0, 0xa4(r1)
/* 8013AB20 00137A60  D0 1F 00 50 */	stfs f0, 0x50(r31)
/* 8013AB24 00137A64  C0 01 00 A8 */	lfs f0, 0xa8(r1)
/* 8013AB28 00137A68  D0 1F 00 54 */	stfs f0, 0x54(r31)
.L_8013AB2C:
/* 8013AB2C 00137A6C  38 7F 00 48 */	addi r3, r31, 0x48
/* 8013AB30 00137A70  48 2D 7D 1D */	bl normalise__4QuatFv
/* 8013AB34 00137A74  7F E4 FB 78 */	mr r4, r31
/* 8013AB38 00137A78  38 7E 00 04 */	addi r3, r30, 4
/* 8013AB3C 00137A7C  38 BF 00 48 */	addi r5, r31, 0x48
/* 8013AB40 00137A80  48 2E DF 79 */	bl "makeTQ__7MatrixfFR10Vector3<f>R4Quat"
/* 8013AB44 00137A84  E3 E1 02 38 */	psq_l f31, 568(r1), 0, qr0
/* 8013AB48 00137A88  CB E1 02 30 */	lfd f31, 0x230(r1)
/* 8013AB4C 00137A8C  E3 C1 02 28 */	psq_l f30, 552(r1), 0, qr0
/* 8013AB50 00137A90  CB C1 02 20 */	lfd f30, 0x220(r1)
/* 8013AB54 00137A94  E3 A1 02 18 */	psq_l f29, 536(r1), 0, qr0
/* 8013AB58 00137A98  CB A1 02 10 */	lfd f29, 0x210(r1)
/* 8013AB5C 00137A9C  83 E1 02 0C */	lwz r31, 0x20c(r1)
/* 8013AB60 00137AA0  80 01 02 44 */	lwz r0, 0x244(r1)
/* 8013AB64 00137AA4  83 C1 02 08 */	lwz r30, 0x208(r1)
/* 8013AB68 00137AA8  7C 08 03 A6 */	mtlr r0
/* 8013AB6C 00137AAC  38 21 02 40 */	addi r1, r1, 0x240
/* 8013AB70 00137AB0  4E 80 00 20 */	blr 
.endfn integrate__Q24Game5RigidFfi

.fn "resolveCollision__Q24Game5RigidFiR10Vector3<f>R10Vector3<f>f", global
/* 8013AB74 00137AB4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 8013AB78 00137AB8  7C 08 02 A6 */	mflr r0
/* 8013AB7C 00137ABC  90 01 00 94 */	stw r0, 0x94(r1)
/* 8013AB80 00137AC0  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 8013AB84 00137AC4  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 8013AB88 00137AC8  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 8013AB8C 00137ACC  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 8013AB90 00137AD0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 8013AB94 00137AD4  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 8013AB98 00137AD8  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 8013AB9C 00137ADC  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 8013ABA0 00137AE0  DB 61 00 40 */	stfd f27, 0x40(r1)
/* 8013ABA4 00137AE4  F3 61 00 48 */	psq_st f27, 72(r1), 0, qr0
/* 8013ABA8 00137AE8  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8013ABAC 00137AEC  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8013ABB0 00137AF0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8013ABB4 00137AF4  80 ED 92 68 */	lwz r7, mInstance__13DynamicsParms@sda21(r13)
/* 8013ABB8 00137AF8  7C 7D 1B 78 */	mr r29, r3
/* 8013ABBC 00137AFC  C0 62 9F 18 */	lfs f3, lbl_80518278@sda21(r2)
/* 8013ABC0 00137B00  7C DE 33 78 */	mr r30, r6
/* 8013ABC4 00137B04  C0 47 00 A8 */	lfs f2, 0xa8(r7)
/* 8013ABC8 00137B08  C0 02 9E DC */	lfs f0, lbl_8051823C@sda21(r2)
/* 8013ABCC 00137B0C  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8013ABD0 00137B10  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8013ABD4 00137B14  1C 64 00 88 */	mulli r3, r4, 0x88
/* 8013ABD8 00137B18  C0 42 9E DC */	lfs f2, lbl_8051823C@sda21(r2)
/* 8013ABDC 00137B1C  C1 05 00 08 */	lfs f8, 8(r5)
/* 8013ABE0 00137B20  C0 C5 00 04 */	lfs f6, 4(r5)
/* 8013ABE4 00137B24  FC 00 10 50 */	fneg f0, f2
/* 8013ABE8 00137B28  3B E3 00 34 */	addi r31, r3, 0x34
/* 8013ABEC 00137B2C  7F FD FA 14 */	add r31, r29, r31
/* 8013ABF0 00137B30  C0 85 00 00 */	lfs f4, 0(r5)
/* 8013ABF4 00137B34  C0 FF 00 08 */	lfs f7, 8(r31)
/* 8013ABF8 00137B38  C0 BF 00 04 */	lfs f5, 4(r31)
/* 8013ABFC 00137B3C  C0 7F 00 00 */	lfs f3, 0(r31)
/* 8013AC00 00137B40  EF A8 38 28 */	fsubs f29, f8, f7
/* 8013AC04 00137B44  C0 FF 00 24 */	lfs f7, 0x24(r31)
/* 8013AC08 00137B48  EF C6 28 28 */	fsubs f30, f6, f5
/* 8013AC0C 00137B4C  EF E4 18 28 */	fsubs f31, f4, f3
/* 8013AC10 00137B50  D0 E1 00 20 */	stfs f7, 0x20(r1)
/* 8013AC14 00137B54  EC 87 07 72 */	fmuls f4, f7, f29
/* 8013AC18 00137B58  C0 DF 00 28 */	lfs f6, 0x28(r31)
/* 8013AC1C 00137B5C  D0 C1 00 24 */	stfs f6, 0x24(r1)
/* 8013AC20 00137B60  EC 66 07 F2 */	fmuls f3, f6, f31
/* 8013AC24 00137B64  C0 BF 00 2C */	lfs f5, 0x2c(r31)
/* 8013AC28 00137B68  ED 07 1F B8 */	fmsubs f8, f7, f30, f3
/* 8013AC2C 00137B6C  EC 65 07 B2 */	fmuls f3, f5, f30
/* 8013AC30 00137B70  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 8013AC34 00137B74  EC 85 27 F8 */	fmsubs f4, f5, f31, f4
/* 8013AC38 00137B78  D1 01 00 28 */	stfs f8, 0x28(r1)
/* 8013AC3C 00137B7C  EC C6 1F 78 */	fmsubs f6, f6, f29, f3
/* 8013AC40 00137B80  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 8013AC44 00137B84  D0 C1 00 20 */	stfs f6, 0x20(r1)
/* 8013AC48 00137B88  C0 7F 00 10 */	lfs f3, 0x10(r31)
/* 8013AC4C 00137B8C  C0 BF 00 0C */	lfs f5, 0xc(r31)
/* 8013AC50 00137B90  EC 83 20 2A */	fadds f4, f3, f4
/* 8013AC54 00137B94  C0 FF 00 14 */	lfs f7, 0x14(r31)
/* 8013AC58 00137B98  EC C5 30 2A */	fadds f6, f5, f6
/* 8013AC5C 00137B9C  C0 7E 00 04 */	lfs f3, 4(r30)
/* 8013AC60 00137BA0  ED 07 40 2A */	fadds f8, f7, f8
/* 8013AC64 00137BA4  C0 BE 00 00 */	lfs f5, 0(r30)
/* 8013AC68 00137BA8  FC 80 20 50 */	fneg f4, f4
/* 8013AC6C 00137BAC  C0 FE 00 08 */	lfs f7, 8(r30)
/* 8013AC70 00137BB0  FC C0 30 50 */	fneg f6, f6
/* 8013AC74 00137BB4  FD 00 40 50 */	fneg f8, f8
/* 8013AC78 00137BB8  EC 64 00 F2 */	fmuls f3, f4, f3
/* 8013AC7C 00137BBC  EC 66 19 7A */	fmadds f3, f6, f5, f3
/* 8013AC80 00137BC0  EC 68 19 FA */	fmadds f3, f8, f7, f3
/* 8013AC84 00137BC4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 8013AC88 00137BC8  40 80 00 0C */	bge .L_8013AC94
/* 8013AC8C 00137BCC  38 60 00 00 */	li r3, 0
/* 8013AC90 00137BD0  48 00 01 A0 */	b .L_8013AE30
.L_8013AC94:
/* 8013AC94 00137BD4  FC 00 1A 10 */	fabs f0, f3
/* 8013AC98 00137BD8  FC 00 00 18 */	frsp f0, f0
/* 8013AC9C 00137BDC  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 8013ACA0 00137BE0  4C 40 13 82 */	cror 2, 0, 2
/* 8013ACA4 00137BE4  40 82 00 0C */	bne .L_8013ACB0
/* 8013ACA8 00137BE8  C0 22 9E F8 */	lfs f1, lbl_80518258@sda21(r2)
/* 8013ACAC 00137BEC  FC 60 10 90 */	fmr f3, f2
.L_8013ACB0:
/* 8013ACB0 00137BF0  C3 7D 00 00 */	lfs f27, 0(r29)
/* 8013ACB4 00137BF4  38 7F 00 58 */	addi r3, r31, 0x58
/* 8013ACB8 00137BF8  C0 02 9E F8 */	lfs f0, lbl_80518258@sda21(r2)
/* 8013ACBC 00137BFC  38 81 00 20 */	addi r4, r1, 0x20
/* 8013ACC0 00137C00  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 8013ACC4 00137C04  38 A1 00 14 */	addi r5, r1, 0x14
/* 8013ACC8 00137C08  EC 00 08 2A */	fadds f0, f0, f1
/* 8013ACCC 00137C0C  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8013ACD0 00137C10  D3 A1 00 28 */	stfs f29, 0x28(r1)
/* 8013ACD4 00137C14  FC 00 00 50 */	fneg f0, f0
/* 8013ACD8 00137C18  C0 9E 00 00 */	lfs f4, 0(r30)
/* 8013ACDC 00137C1C  C0 BE 00 08 */	lfs f5, 8(r30)
/* 8013ACE0 00137C20  EF 80 00 F2 */	fmuls f28, f0, f3
/* 8013ACE4 00137C24  C0 7E 00 04 */	lfs f3, 4(r30)
/* 8013ACE8 00137C28  EC 3E 01 32 */	fmuls f1, f30, f4
/* 8013ACEC 00137C2C  EC 5F 01 72 */	fmuls f2, f31, f5
/* 8013ACF0 00137C30  EC 1D 00 F2 */	fmuls f0, f29, f3
/* 8013ACF4 00137C34  EC 7F 08 F8 */	fmsubs f3, f31, f3, f1
/* 8013ACF8 00137C38  EC 3D 11 38 */	fmsubs f1, f29, f4, f2
/* 8013ACFC 00137C3C  EC 1E 01 78 */	fmsubs f0, f30, f5, f0
/* 8013AD00 00137C40  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8013AD04 00137C44  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8013AD08 00137C48  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 8013AD0C 00137C4C  4B FA FE CD */	bl PSMTXMultVec
/* 8013AD10 00137C50  C0 A1 00 14 */	lfs f5, 0x14(r1)
/* 8013AD14 00137C54  38 7F 00 58 */	addi r3, r31, 0x58
/* 8013AD18 00137C58  C0 81 00 18 */	lfs f4, 0x18(r1)
/* 8013AD1C 00137C5C  38 9F 00 30 */	addi r4, r31, 0x30
/* 8013AD20 00137C60  C0 61 00 1C */	lfs f3, 0x1c(r1)
/* 8013AD24 00137C64  EC 45 07 72 */	fmuls f2, f5, f29
/* 8013AD28 00137C68  EC 24 07 F2 */	fmuls f1, f4, f31
/* 8013AD2C 00137C6C  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 8013AD30 00137C70  EC 03 07 B2 */	fmuls f0, f3, f30
/* 8013AD34 00137C74  38 A1 00 08 */	addi r5, r1, 8
/* 8013AD38 00137C78  EC C3 17 F8 */	fmsubs f6, f3, f31, f2
/* 8013AD3C 00137C7C  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 8013AD40 00137C80  EC 44 07 78 */	fmsubs f2, f4, f29, f0
/* 8013AD44 00137C84  EC 85 0F B8 */	fmsubs f4, f5, f30, f1
/* 8013AD48 00137C88  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8013AD4C 00137C8C  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8013AD50 00137C90  D0 C1 00 24 */	stfs f6, 0x24(r1)
/* 8013AD54 00137C94  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8013AD58 00137C98  C1 3E 00 04 */	lfs f9, 4(r30)
/* 8013AD5C 00137C9C  C1 1E 00 00 */	lfs f8, 0(r30)
/* 8013AD60 00137CA0  EC 09 01 B2 */	fmuls f0, f9, f6
/* 8013AD64 00137CA4  C0 DE 00 08 */	lfs f6, 8(r30)
/* 8013AD68 00137CA8  C0 7D 00 00 */	lfs f3, 0(r29)
/* 8013AD6C 00137CAC  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 8013AD70 00137CB0  EC 08 00 BA */	fmadds f0, f8, f2, f0
/* 8013AD74 00137CB4  C0 BF 00 10 */	lfs f5, 0x10(r31)
/* 8013AD78 00137CB8  C0 FF 00 14 */	lfs f7, 0x14(r31)
/* 8013AD7C 00137CBC  EC 06 01 3A */	fmadds f0, f6, f4, f0
/* 8013AD80 00137CC0  EF 7B 00 2A */	fadds f27, f27, f0
/* 8013AD84 00137CC4  EC 1C D8 24 */	fdivs f0, f28, f27
/* 8013AD88 00137CC8  FC 00 00 50 */	fneg f0, f0
/* 8013AD8C 00137CCC  ED 08 00 32 */	fmuls f8, f8, f0
/* 8013AD90 00137CD0  ED 29 00 32 */	fmuls f9, f9, f0
/* 8013AD94 00137CD4  ED 46 00 32 */	fmuls f10, f6, f0
/* 8013AD98 00137CD8  EC 08 00 F2 */	fmuls f0, f8, f3
/* 8013AD9C 00137CDC  EC 89 00 F2 */	fmuls f4, f9, f3
/* 8013ADA0 00137CE0  EC CA 00 F2 */	fmuls f6, f10, f3
/* 8013ADA4 00137CE4  EC 61 00 2A */	fadds f3, f1, f0
/* 8013ADA8 00137CE8  EC 5F 02 B2 */	fmuls f2, f31, f10
/* 8013ADAC 00137CEC  EC 3E 02 32 */	fmuls f1, f30, f8
/* 8013ADB0 00137CF0  EC 1D 02 72 */	fmuls f0, f29, f9
/* 8013ADB4 00137CF4  D0 7F 00 0C */	stfs f3, 0xc(r31)
/* 8013ADB8 00137CF8  EC 65 20 2A */	fadds f3, f5, f4
/* 8013ADBC 00137CFC  EC 87 30 2A */	fadds f4, f7, f6
/* 8013ADC0 00137D00  EC BD 12 38 */	fmsubs f5, f29, f8, f2
/* 8013ADC4 00137D04  D0 7F 00 10 */	stfs f3, 0x10(r31)
/* 8013ADC8 00137D08  EC DF 0A 78 */	fmsubs f6, f31, f9, f1
/* 8013ADCC 00137D0C  EC 7E 02 B8 */	fmsubs f3, f30, f10, f0
/* 8013ADD0 00137D10  D0 9F 00 14 */	stfs f4, 0x14(r31)
/* 8013ADD4 00137D14  D3 E1 00 20 */	stfs f31, 0x20(r1)
/* 8013ADD8 00137D18  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8013ADDC 00137D1C  D3 A1 00 28 */	stfs f29, 0x28(r1)
/* 8013ADE0 00137D20  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 8013ADE4 00137D24  D0 A1 00 24 */	stfs f5, 0x24(r1)
/* 8013ADE8 00137D28  D0 C1 00 28 */	stfs f6, 0x28(r1)
/* 8013ADEC 00137D2C  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 8013ADF0 00137D30  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 8013ADF4 00137D34  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 8013ADF8 00137D38  EC 00 18 2A */	fadds f0, f0, f3
/* 8013ADFC 00137D3C  EC 21 28 2A */	fadds f1, f1, f5
/* 8013AE00 00137D40  EC 42 30 2A */	fadds f2, f2, f6
/* 8013AE04 00137D44  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 8013AE08 00137D48  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 8013AE0C 00137D4C  D0 5F 00 38 */	stfs f2, 0x38(r31)
/* 8013AE10 00137D50  4B FA FD C9 */	bl PSMTXMultVec
/* 8013AE14 00137D54  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8013AE18 00137D58  38 60 00 01 */	li r3, 1
/* 8013AE1C 00137D5C  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 8013AE20 00137D60  C0 01 00 08 */	lfs f0, 8(r1)
/* 8013AE24 00137D64  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 8013AE28 00137D68  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 8013AE2C 00137D6C  D0 5F 00 2C */	stfs f2, 0x2c(r31)
.L_8013AE30:
/* 8013AE30 00137D70  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 8013AE34 00137D74  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 8013AE38 00137D78  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 8013AE3C 00137D7C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 8013AE40 00137D80  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 8013AE44 00137D84  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 8013AE48 00137D88  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 8013AE4C 00137D8C  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 8013AE50 00137D90  E3 61 00 48 */	psq_l f27, 72(r1), 0, qr0
/* 8013AE54 00137D94  CB 61 00 40 */	lfd f27, 0x40(r1)
/* 8013AE58 00137D98  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8013AE5C 00137D9C  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8013AE60 00137DA0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8013AE64 00137DA4  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8013AE68 00137DA8  7C 08 03 A6 */	mtlr r0
/* 8013AE6C 00137DAC  38 21 00 90 */	addi r1, r1, 0x90
/* 8013AE70 00137DB0  4E 80 00 20 */	blr 
.endfn "resolveCollision__Q24Game5RigidFiR10Vector3<f>R10Vector3<f>f"

.fn "size__7Parm<b>Fv", weak
/* 8013AE74 00137DB4  38 60 00 01 */	li r3, 1
/* 8013AE78 00137DB8  4E 80 00 20 */	blr 
.endfn "size__7Parm<b>Fv"

.fn "@12@__dt__13DynamicsParmsFv", weak
/* 8013AE7C 00137DBC  38 63 FF F4 */	addi r3, r3, -12
/* 8013AE80 00137DC0  4B FF F1 14 */	b __dt__13DynamicsParmsFv
.endfn "@12@__dt__13DynamicsParmsFv"
