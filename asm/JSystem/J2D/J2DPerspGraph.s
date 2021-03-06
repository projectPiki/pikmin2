.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__13J2DPerspGraph
__vt__13J2DPerspGraph:
	.4byte 0
	.4byte 0
	.4byte __dt__13J2DPerspGraphFv
	.4byte "place__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
	.4byte place__14J2DGrafContextFffff
	.4byte setPort__13J2DPerspGraphFv
	.4byte setup2D__14J2DGrafContextFv
	.4byte setScissor__14J2DGrafContextFv
	.4byte getGrafType__13J2DPerspGraphCFv
	.4byte setLookat__13J2DPerspGraphFv

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80516788:
	.float 0.0
lbl_8051678C:
	.float 1.0
lbl_80516790:
	.float 179.0
lbl_80516794: # pi
	.float 3.1415927
lbl_80516798:
	.float 360.0
lbl_8051679C:
	.float 0.5
lbl_805167A0:
	.float -1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__13J2DPerspGraphFv
__ct__13J2DPerspGraphFv:
/* 80035DC8 00032D08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80035DCC 00032D0C  7C 08 02 A6 */	mflr r0
/* 80035DD0 00032D10  C0 22 84 28 */	lfs f1, lbl_80516788@sda21(r2)
/* 80035DD4 00032D14  90 01 00 14 */	stw r0, 0x14(r1)
/* 80035DD8 00032D18  FC 40 08 90 */	fmr f2, f1
/* 80035DDC 00032D1C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80035DE0 00032D20  FC 60 08 90 */	fmr f3, f1
/* 80035DE4 00032D24  FC 80 08 90 */	fmr f4, f1
/* 80035DE8 00032D28  7C 7F 1B 78 */	mr r31, r3
/* 80035DEC 00032D2C  48 00 02 89 */	bl __ct__14J2DGrafContextFffff
/* 80035DF0 00032D30  3C 80 80 4A */	lis r4, __vt__13J2DPerspGraph@ha
/* 80035DF4 00032D34  7F E3 FB 78 */	mr r3, r31
/* 80035DF8 00032D38  38 04 06 28 */	addi r0, r4, __vt__13J2DPerspGraph@l
/* 80035DFC 00032D3C  90 1F 00 00 */	stw r0, 0(r31)
/* 80035E00 00032D40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80035E04 00032D44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80035E08 00032D48  7C 08 03 A6 */	mtlr r0
/* 80035E0C 00032D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 80035E10 00032D50  4E 80 00 20 */	blr 

.global set__13J2DPerspGraphFfff
set__13J2DPerspGraphFfff:
/* 80035E14 00032D54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80035E18 00032D58  7C 08 02 A6 */	mflr r0
/* 80035E1C 00032D5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80035E20 00032D60  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 80035E24 00032D64  FF E0 18 90 */	fmr f31, f3
/* 80035E28 00032D68  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 80035E2C 00032D6C  FF C0 10 90 */	fmr f30, f2
/* 80035E30 00032D70  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80035E34 00032D74  7C 7F 1B 78 */	mr r31, r3
/* 80035E38 00032D78  48 00 00 3D */	bl setFovy__13J2DPerspGraphFf
/* 80035E3C 00032D7C  D3 DF 00 C0 */	stfs f30, 0xc0(r31)
/* 80035E40 00032D80  7F E3 FB 78 */	mr r3, r31
/* 80035E44 00032D84  D3 FF 00 C4 */	stfs f31, 0xc4(r31)
/* 80035E48 00032D88  81 9F 00 00 */	lwz r12, 0(r31)
/* 80035E4C 00032D8C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 80035E50 00032D90  7D 89 03 A6 */	mtctr r12
/* 80035E54 00032D94  4E 80 04 21 */	bctrl 
/* 80035E58 00032D98  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80035E5C 00032D9C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80035E60 00032DA0  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80035E64 00032DA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80035E68 00032DA8  7C 08 03 A6 */	mtlr r0
/* 80035E6C 00032DAC  38 21 00 20 */	addi r1, r1, 0x20
/* 80035E70 00032DB0  4E 80 00 20 */	blr 

.global setFovy__13J2DPerspGraphFf
setFovy__13J2DPerspGraphFf:
/* 80035E74 00032DB4  C0 02 84 2C */	lfs f0, lbl_8051678C@sda21(r2)
/* 80035E78 00032DB8  D0 23 00 BC */	stfs f1, 0xbc(r3)
/* 80035E7C 00032DBC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80035E80 00032DC0  40 80 00 0C */	bge lbl_80035E8C
/* 80035E84 00032DC4  D0 03 00 BC */	stfs f0, 0xbc(r3)
/* 80035E88 00032DC8  4E 80 00 20 */	blr 
lbl_80035E8C:
/* 80035E8C 00032DCC  C0 02 84 30 */	lfs f0, lbl_80516790@sda21(r2)
/* 80035E90 00032DD0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80035E94 00032DD4  4C 81 00 20 */	blelr 
/* 80035E98 00032DD8  D0 03 00 BC */	stfs f0, 0xbc(r3)
/* 80035E9C 00032DDC  4E 80 00 20 */	blr 

.global setPort__13J2DPerspGraphFv
setPort__13J2DPerspGraphFv:
/* 80035EA0 00032DE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80035EA4 00032DE4  7C 08 02 A6 */	mflr r0
/* 80035EA8 00032DE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80035EAC 00032DEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80035EB0 00032DF0  7C 7F 1B 78 */	mr r31, r3
/* 80035EB4 00032DF4  48 00 02 6D */	bl setPort__14J2DGrafContextFv
/* 80035EB8 00032DF8  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 80035EBC 00032DFC  38 7F 00 40 */	addi r3, r31, 0x40
/* 80035EC0 00032E00  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80035EC4 00032E04  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 80035EC8 00032E08  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80035ECC 00032E0C  EC A3 08 28 */	fsubs f5, f3, f1
/* 80035ED0 00032E10  C0 3F 00 BC */	lfs f1, 0xbc(r31)
/* 80035ED4 00032E14  EC 02 00 28 */	fsubs f0, f2, f0
/* 80035ED8 00032E18  C0 7F 00 C0 */	lfs f3, 0xc0(r31)
/* 80035EDC 00032E1C  C0 9F 00 C4 */	lfs f4, 0xc4(r31)
/* 80035EE0 00032E20  EC 45 00 24 */	fdivs f2, f5, f0
/* 80035EE4 00032E24  48 0B 4E 25 */	bl C_MTXPerspective
/* 80035EE8 00032E28  38 7F 00 40 */	addi r3, r31, 0x40
/* 80035EEC 00032E2C  38 80 00 00 */	li r4, 0
/* 80035EF0 00032E30  48 0B 35 59 */	bl GXSetProjection
/* 80035EF4 00032E34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80035EF8 00032E38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80035EFC 00032E3C  7C 08 03 A6 */	mtlr r0
/* 80035F00 00032E40  38 21 00 10 */	addi r1, r1, 0x10
/* 80035F04 00032E44  4E 80 00 20 */	blr 

.global setLookat__13J2DPerspGraphFv
setLookat__13J2DPerspGraphFv:
/* 80035F08 00032E48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80035F0C 00032E4C  7C 08 02 A6 */	mflr r0
/* 80035F10 00032E50  C0 42 84 34 */	lfs f2, lbl_80516794@sda21(r2)
/* 80035F14 00032E54  90 01 00 14 */	stw r0, 0x14(r1)
/* 80035F18 00032E58  C0 02 84 38 */	lfs f0, lbl_80516798@sda21(r2)
/* 80035F1C 00032E5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80035F20 00032E60  7C 7F 1B 78 */	mr r31, r3
/* 80035F24 00032E64  C0 23 00 BC */	lfs f1, 0xbc(r3)
/* 80035F28 00032E68  EC 22 00 72 */	fmuls f1, f2, f1
/* 80035F2C 00032E6C  EC 21 00 24 */	fdivs f1, f1, f0
/* 80035F30 00032E70  48 09 99 C5 */	bl tan
/* 80035F34 00032E74  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 80035F38 00032E78  FC 60 08 18 */	frsp f3, f1
/* 80035F3C 00032E7C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 80035F40 00032E80  7F E3 FB 78 */	mr r3, r31
/* 80035F44 00032E84  C0 02 84 3C */	lfs f0, lbl_8051679C@sda21(r2)
/* 80035F48 00032E88  EC 22 08 28 */	fsubs f1, f2, f1
/* 80035F4C 00032E8C  EC 01 00 32 */	fmuls f0, f1, f0
/* 80035F50 00032E90  EC 00 18 24 */	fdivs f0, f0, f3
/* 80035F54 00032E94  D0 1F 00 C8 */	stfs f0, 0xc8(r31)
/* 80035F58 00032E98  48 00 00 19 */	bl makeLookat__13J2DPerspGraphFv
/* 80035F5C 00032E9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80035F60 00032EA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80035F64 00032EA4  7C 08 03 A6 */	mtlr r0
/* 80035F68 00032EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 80035F6C 00032EAC  4E 80 00 20 */	blr 

.global makeLookat__13J2DPerspGraphFv
makeLookat__13J2DPerspGraphFv:
/* 80035F70 00032EB0  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80035F74 00032EB4  7C 08 02 A6 */	mflr r0
/* 80035F78 00032EB8  C0 62 84 3C */	lfs f3, lbl_8051679C@sda21(r2)
/* 80035F7C 00032EBC  90 01 00 44 */	stw r0, 0x44(r1)
/* 80035F80 00032EC0  38 81 00 20 */	addi r4, r1, 0x20
/* 80035F84 00032EC4  38 A1 00 08 */	addi r5, r1, 8
/* 80035F88 00032EC8  38 C1 00 14 */	addi r6, r1, 0x14
/* 80035F8C 00032ECC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 80035F90 00032ED0  7C 7F 1B 78 */	mr r31, r3
/* 80035F94 00032ED4  C0 83 00 0C */	lfs f4, 0xc(r3)
/* 80035F98 00032ED8  38 7F 00 80 */	addi r3, r31, 0x80
/* 80035F9C 00032EDC  C0 3F 00 04 */	lfs f1, 4(r31)
/* 80035FA0 00032EE0  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 80035FA4 00032EE4  EC 84 08 2A */	fadds f4, f4, f1
/* 80035FA8 00032EE8  C0 1F 00 08 */	lfs f0, 8(r31)
/* 80035FAC 00032EEC  C0 22 84 28 */	lfs f1, lbl_80516788@sda21(r2)
/* 80035FB0 00032EF0  EC 42 00 2A */	fadds f2, f2, f0
/* 80035FB4 00032EF4  C0 02 84 40 */	lfs f0, lbl_805167A0@sda21(r2)
/* 80035FB8 00032EF8  EC 84 00 F2 */	fmuls f4, f4, f3
/* 80035FBC 00032EFC  EC 62 00 F2 */	fmuls f3, f2, f3
/* 80035FC0 00032F00  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 80035FC4 00032F04  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 80035FC8 00032F08  C0 5F 00 C8 */	lfs f2, 0xc8(r31)
/* 80035FCC 00032F0C  FC 40 10 50 */	fneg f2, f2
/* 80035FD0 00032F10  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 80035FD4 00032F14  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 80035FD8 00032F18  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 80035FDC 00032F1C  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 80035FE0 00032F20  D0 21 00 08 */	stfs f1, 8(r1)
/* 80035FE4 00032F24  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80035FE8 00032F28  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 80035FEC 00032F2C  48 0B 49 0D */	bl C_MTXLookAt
/* 80035FF0 00032F30  38 7F 00 80 */	addi r3, r31, 0x80
/* 80035FF4 00032F34  38 80 00 00 */	li r4, 0
/* 80035FF8 00032F38  48 0B 35 81 */	bl GXLoadPosMtxImm
/* 80035FFC 00032F3C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80036000 00032F40  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 80036004 00032F44  7C 08 03 A6 */	mtlr r0
/* 80036008 00032F48  38 21 00 40 */	addi r1, r1, 0x40
/* 8003600C 00032F4C  4E 80 00 20 */	blr 

.global __dt__13J2DPerspGraphFv
__dt__13J2DPerspGraphFv: # weak function
/* 80036010 00032F50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80036014 00032F54  7C 08 02 A6 */	mflr r0
/* 80036018 00032F58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8003601C 00032F5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80036020 00032F60  7C 7F 1B 79 */	or. r31, r3, r3
/* 80036024 00032F64  41 82 00 30 */	beq lbl_80036054
/* 80036028 00032F68  3C 60 80 4A */	lis r3, __vt__13J2DPerspGraph@ha
/* 8003602C 00032F6C  38 03 06 28 */	addi r0, r3, __vt__13J2DPerspGraph@l
/* 80036030 00032F70  90 1F 00 00 */	stw r0, 0(r31)
/* 80036034 00032F74  41 82 00 10 */	beq lbl_80036044
/* 80036038 00032F78  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 8003603C 00032F7C  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 80036040 00032F80  90 1F 00 00 */	stw r0, 0(r31)
lbl_80036044:
/* 80036044 00032F84  7C 80 07 35 */	extsh. r0, r4
/* 80036048 00032F88  40 81 00 0C */	ble lbl_80036054
/* 8003604C 00032F8C  7F E3 FB 78 */	mr r3, r31
/* 80036050 00032F90  4B FE E0 65 */	bl __dl__FPv
lbl_80036054:
/* 80036054 00032F94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80036058 00032F98  7F E3 FB 78 */	mr r3, r31
/* 8003605C 00032F9C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80036060 00032FA0  7C 08 03 A6 */	mtlr r0
/* 80036064 00032FA4  38 21 00 10 */	addi r1, r1, 0x10
/* 80036068 00032FA8  4E 80 00 20 */	blr 

.global getGrafType__13J2DPerspGraphCFv
getGrafType__13J2DPerspGraphCFv: # weak function
/* 8003606C 00032FAC  38 60 00 02 */	li r3, 2
/* 80036070 00032FB0  4E 80 00 20 */	blr 
