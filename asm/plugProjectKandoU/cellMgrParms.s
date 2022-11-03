.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_804837E8:
	.asciz "CellMgrParms"
.balign 4
lbl_804837F8: # Shift-JIS
	.4byte 0x836F8362
	.4byte 0x83748340
	.4byte 0x82F08E67
	.4byte 0x82A40000
.balign 4
lbl_80483808: # Shift-JIS
	.4byte 0x837D8357
	.4byte 0x8362834E
	.4byte 0x83698393
	.4byte 0x836F815B
	.4byte 0x00000000
.balign 4
lbl_8048381C: # Shift-JIS
	.asciz "UpdateMgr"

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__12CellMgrParms
__vt__12CellMgrParms:
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte 0
	.4byte "@12@__dt__12CellMgrParmsFv"
	.4byte __dt__12CellMgrParmsFv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global mInstance__12CellMgrParms
mInstance__12CellMgrParms:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_8051A2F0:
	.asciz "CellMgr"
.balign 4
lbl_8051A2F8:
	.asciz "G-Half"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __dt__12CellMgrParmsFv
__dt__12CellMgrParmsFv:
/* 8022E188 0022B0C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022E18C 0022B0CC  7C 08 02 A6 */	mflr r0
/* 8022E190 0022B0D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022E194 0022B0D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8022E198 0022B0D8  7C 9F 23 78 */	mr r31, r4
/* 8022E19C 0022B0DC  93 C1 00 08 */	stw r30, 8(r1)
/* 8022E1A0 0022B0E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 8022E1A4 0022B0E4  41 82 00 3C */	beq .L_8022E1E0
/* 8022E1A8 0022B0E8  3C 60 80 4C */	lis r3, __vt__12CellMgrParms@ha
/* 8022E1AC 0022B0EC  38 00 00 00 */	li r0, 0
/* 8022E1B0 0022B0F0  38 83 11 40 */	addi r4, r3, __vt__12CellMgrParms@l
/* 8022E1B4 0022B0F4  38 7E 00 0C */	addi r3, r30, 0xc
/* 8022E1B8 0022B0F8  90 9E 00 94 */	stw r4, 0x94(r30)
/* 8022E1BC 0022B0FC  38 A4 00 08 */	addi r5, r4, 8
/* 8022E1C0 0022B100  38 80 00 00 */	li r4, 0
/* 8022E1C4 0022B104  90 BE 00 0C */	stw r5, 0xc(r30)
/* 8022E1C8 0022B108  90 0D 96 08 */	stw r0, mInstance__12CellMgrParms@sda21(r13)
/* 8022E1CC 0022B10C  4B DE EE 69 */	bl __dt__11JKRDisposerFv
/* 8022E1D0 0022B110  7F E0 07 35 */	extsh. r0, r31
/* 8022E1D4 0022B114  40 81 00 0C */	ble .L_8022E1E0
/* 8022E1D8 0022B118  7F C3 F3 78 */	mr r3, r30
/* 8022E1DC 0022B11C  4B DF 5E D9 */	bl __dl__FPv
.L_8022E1E0:
/* 8022E1E0 0022B120  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022E1E4 0022B124  7F C3 F3 78 */	mr r3, r30
/* 8022E1E8 0022B128  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8022E1EC 0022B12C  83 C1 00 08 */	lwz r30, 8(r1)
/* 8022E1F0 0022B130  7C 08 03 A6 */	mtlr r0
/* 8022E1F4 0022B134  38 21 00 10 */	addi r1, r1, 0x10
/* 8022E1F8 0022B138  4E 80 00 20 */	blr 

.global globalInstance__12CellMgrParmsFv
globalInstance__12CellMgrParmsFv:
/* 8022E1FC 0022B13C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8022E200 0022B140  7C 08 02 A6 */	mflr r0
/* 8022E204 0022B144  3C 60 80 48 */	lis r3, lbl_804837E8@ha
/* 8022E208 0022B148  90 01 00 14 */	stw r0, 0x14(r1)
/* 8022E20C 0022B14C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8022E210 0022B150  3B E3 37 E8 */	addi r31, r3, lbl_804837E8@l
/* 8022E214 0022B154  93 C1 00 08 */	stw r30, 8(r1)
/* 8022E218 0022B158  80 0D 96 08 */	lwz r0, mInstance__12CellMgrParms@sda21(r13)
/* 8022E21C 0022B15C  28 00 00 00 */	cmplwi r0, 0
/* 8022E220 0022B160  40 82 01 2C */	bne .L_8022E34C
/* 8022E224 0022B164  38 60 00 9C */	li r3, 0x9c
/* 8022E228 0022B168  4B DF 5C 7D */	bl __nw__FUl
/* 8022E22C 0022B16C  7C 7E 1B 79 */	or. r30, r3, r3
/* 8022E230 0022B170  41 82 01 18 */	beq .L_8022E348
/* 8022E234 0022B174  38 1E 00 98 */	addi r0, r30, 0x98
/* 8022E238 0022B178  38 80 00 00 */	li r4, 0
/* 8022E23C 0022B17C  90 1E 00 00 */	stw r0, 0(r30)
/* 8022E240 0022B180  38 02 BF 90 */	addi r0, r2, lbl_8051A2F0@sda21
/* 8022E244 0022B184  38 7E 00 0C */	addi r3, r30, 0xc
/* 8022E248 0022B188  90 9E 00 04 */	stw r4, 4(r30)
/* 8022E24C 0022B18C  90 1E 00 08 */	stw r0, 8(r30)
/* 8022E250 0022B190  4B DE ED 7D */	bl __ct__11JKRDisposerFv
/* 8022E254 0022B194  3C 60 80 4C */	lis r3, __vt__12CellMgrParms@ha
/* 8022E258 0022B198  3C A0 70 30 */	lis r5, 0x70303030@ha
/* 8022E25C 0022B19C  38 63 11 40 */	addi r3, r3, __vt__12CellMgrParms@l
/* 8022E260 0022B1A0  7F C4 F3 78 */	mr r4, r30
/* 8022E264 0022B1A4  90 7E 00 94 */	stw r3, 0x94(r30)
/* 8022E268 0022B1A8  38 03 00 08 */	addi r0, r3, 8
/* 8022E26C 0022B1AC  38 7E 00 24 */	addi r3, r30, 0x24
/* 8022E270 0022B1B0  38 A5 30 30 */	addi r5, r5, 0x70303030@l
/* 8022E274 0022B1B4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8022E278 0022B1B8  38 DF 00 10 */	addi r6, r31, 0x10
/* 8022E27C 0022B1BC  48 1E 53 DD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8022E280 0022B1C0  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 8022E284 0022B1C4  3C A0 70 30 */	lis r5, 0x70303031@ha
/* 8022E288 0022B1C8  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 8022E28C 0022B1CC  38 E0 00 00 */	li r7, 0
/* 8022E290 0022B1D0  90 1E 00 24 */	stw r0, 0x24(r30)
/* 8022E294 0022B1D4  38 00 00 01 */	li r0, 1
/* 8022E298 0022B1D8  7F C4 F3 78 */	mr r4, r30
/* 8022E29C 0022B1DC  38 7E 00 40 */	addi r3, r30, 0x40
/* 8022E2A0 0022B1E0  98 FE 00 3C */	stb r7, 0x3c(r30)
/* 8022E2A4 0022B1E4  38 A5 30 31 */	addi r5, r5, 0x70303031@l
/* 8022E2A8 0022B1E8  38 DF 00 20 */	addi r6, r31, 0x20
/* 8022E2AC 0022B1EC  98 FE 00 3E */	stb r7, 0x3e(r30)
/* 8022E2B0 0022B1F0  98 1E 00 3F */	stb r0, 0x3f(r30)
/* 8022E2B4 0022B1F4  48 1E 53 A5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8022E2B8 0022B1F8  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 8022E2BC 0022B1FC  3C A0 70 30 */	lis r5, 0x70303032@ha
/* 8022E2C0 0022B200  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 8022E2C4 0022B204  38 E0 00 01 */	li r7, 1
/* 8022E2C8 0022B208  90 1E 00 40 */	stw r0, 0x40(r30)
/* 8022E2CC 0022B20C  38 00 00 00 */	li r0, 0
/* 8022E2D0 0022B210  7F C4 F3 78 */	mr r4, r30
/* 8022E2D4 0022B214  38 7E 00 5C */	addi r3, r30, 0x5c
/* 8022E2D8 0022B218  98 FE 00 58 */	stb r7, 0x58(r30)
/* 8022E2DC 0022B21C  38 A5 30 32 */	addi r5, r5, 0x70303032@l
/* 8022E2E0 0022B220  38 C2 BF 98 */	addi r6, r2, lbl_8051A2F8@sda21
/* 8022E2E4 0022B224  98 1E 00 5A */	stb r0, 0x5a(r30)
/* 8022E2E8 0022B228  98 FE 00 5B */	stb r7, 0x5b(r30)
/* 8022E2EC 0022B22C  48 1E 53 6D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8022E2F0 0022B230  3C 60 80 4B */	lis r3, "__vt__7Parm<b>"@ha
/* 8022E2F4 0022B234  3C A0 70 30 */	lis r5, 0x70303033@ha
/* 8022E2F8 0022B238  38 03 00 80 */	addi r0, r3, "__vt__7Parm<b>"@l
/* 8022E2FC 0022B23C  38 E0 00 00 */	li r7, 0
/* 8022E300 0022B240  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 8022E304 0022B244  38 00 00 01 */	li r0, 1
/* 8022E308 0022B248  7F C4 F3 78 */	mr r4, r30
/* 8022E30C 0022B24C  38 7E 00 78 */	addi r3, r30, 0x78
/* 8022E310 0022B250  98 FE 00 74 */	stb r7, 0x74(r30)
/* 8022E314 0022B254  38 A5 30 33 */	addi r5, r5, 0x70303033@l
/* 8022E318 0022B258  38 DF 00 34 */	addi r6, r31, 0x34
/* 8022E31C 0022B25C  98 FE 00 76 */	stb r7, 0x76(r30)
/* 8022E320 0022B260  98 1E 00 77 */	stb r0, 0x77(r30)
/* 8022E324 0022B264  48 1E 53 35 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 8022E328 0022B268  3C 80 80 4B */	lis r4, "__vt__7Parm<b>"@ha
/* 8022E32C 0022B26C  38 60 00 00 */	li r3, 0
/* 8022E330 0022B270  38 84 00 80 */	addi r4, r4, "__vt__7Parm<b>"@l
/* 8022E334 0022B274  38 00 00 01 */	li r0, 1
/* 8022E338 0022B278  90 9E 00 78 */	stw r4, 0x78(r30)
/* 8022E33C 0022B27C  98 7E 00 90 */	stb r3, 0x90(r30)
/* 8022E340 0022B280  98 7E 00 92 */	stb r3, 0x92(r30)
/* 8022E344 0022B284  98 1E 00 93 */	stb r0, 0x93(r30)
.L_8022E348:
/* 8022E348 0022B288  93 CD 96 08 */	stw r30, mInstance__12CellMgrParms@sda21(r13)
.L_8022E34C:
/* 8022E34C 0022B28C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8022E350 0022B290  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8022E354 0022B294  83 C1 00 08 */	lwz r30, 8(r1)
/* 8022E358 0022B298  7C 08 03 A6 */	mtlr r0
/* 8022E35C 0022B29C  38 21 00 10 */	addi r1, r1, 0x10
/* 8022E360 0022B2A0  4E 80 00 20 */	blr 

.global "@12@__dt__12CellMgrParmsFv"
"@12@__dt__12CellMgrParmsFv":
/* 8022E364 0022B2A4  38 63 FF F4 */	addi r3, r3, -12
/* 8022E368 0022B2A8  4B FF FE 20 */	b __dt__12CellMgrParmsFv
