.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
	.4byte __sinit_fogMgr_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
lbl_8049A610: #Shift-JIS
	.4byte 0x83748348
	.4byte 0x834F837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
govNAN___Q24Game5P2JST:
	.float 0.0
	.float 0.0
	.float 0.0

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
gu32NAN___Q24Game5P2JST:
	.skip 4
gfNAN___Q24Game5P2JST:
	.skip 4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80520760:
	.float 640.0
lbl_80520764:
	.float 3024.0
lbl_80520768:
	.float 0.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__6FogMgrFv
__ct__6FogMgrFv:
/* 80432948 0042F888  3C C0 80 4F */	lis r6, __vt__5CNode@ha
/* 8043294C 0042F88C  3C A0 80 4A */	lis r5, lbl_8049A610@ha
/* 80432950 0042F890  38 06 B5 28 */	addi r0, r6, __vt__5CNode@l
/* 80432954 0042F894  3C 80 80 4E */	lis r4, __vt__6FogMgr@ha
/* 80432958 0042F898  90 03 00 00 */	stw r0, 0(r3)
/* 8043295C 0042F89C  39 40 00 00 */	li r10, 0
/* 80432960 0042F8A0  39 25 A6 10 */	addi r9, r5, lbl_8049A610@l
/* 80432964 0042F8A4  39 04 78 CC */	addi r8, r4, __vt__6FogMgr@l
/* 80432968 0042F8A8  91 43 00 10 */	stw r10, 0x10(r3)
/* 8043296C 0042F8AC  38 E0 00 02 */	li r7, 2
/* 80432970 0042F8B0  C0 22 24 00 */	lfs f1, lbl_80520760@sda21(r2)
/* 80432974 0042F8B4  38 C0 00 AD */	li r6, 0xad
/* 80432978 0042F8B8  91 43 00 0C */	stw r10, 0xc(r3)
/* 8043297C 0042F8BC  38 A0 00 B1 */	li r5, 0xb1
/* 80432980 0042F8C0  C0 02 24 04 */	lfs f0, lbl_80520764@sda21(r2)
/* 80432984 0042F8C4  38 80 00 FC */	li r4, 0xfc
/* 80432988 0042F8C8  91 43 00 08 */	stw r10, 8(r3)
/* 8043298C 0042F8CC  38 00 00 FF */	li r0, 0xff
/* 80432990 0042F8D0  91 43 00 04 */	stw r10, 4(r3)
/* 80432994 0042F8D4  91 23 00 14 */	stw r9, 0x14(r3)
/* 80432998 0042F8D8  91 03 00 00 */	stw r8, 0(r3)
/* 8043299C 0042F8DC  90 E3 00 18 */	stw r7, 0x18(r3)
/* 804329A0 0042F8E0  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 804329A4 0042F8E4  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 804329A8 0042F8E8  98 C3 00 24 */	stb r6, 0x24(r3)
/* 804329AC 0042F8EC  98 A3 00 25 */	stb r5, 0x25(r3)
/* 804329B0 0042F8F0  98 83 00 26 */	stb r4, 0x26(r3)
/* 804329B4 0042F8F4  98 03 00 27 */	stb r0, 0x27(r3)
/* 804329B8 0042F8F8  4E 80 00 20 */	blr 

.global off__6FogMgrFR8Graphics
off__6FogMgrFR8Graphics:
/* 804329BC 0042F8FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804329C0 0042F900  7C 08 02 A6 */	mflr r0
/* 804329C4 0042F904  C0 22 24 08 */	lfs f1, lbl_80520768@sda21(r2)
/* 804329C8 0042F908  90 01 00 14 */	stw r0, 0x14(r1)
/* 804329CC 0042F90C  38 81 00 08 */	addi r4, r1, 8
/* 804329D0 0042F910  FC 40 08 90 */	fmr f2, f1
/* 804329D4 0042F914  80 03 00 24 */	lwz r0, 0x24(r3)
/* 804329D8 0042F918  FC 60 08 90 */	fmr f3, f1
/* 804329DC 0042F91C  FC 80 08 90 */	fmr f4, f1
/* 804329E0 0042F920  38 60 00 00 */	li r3, 0
/* 804329E4 0042F924  90 01 00 08 */	stw r0, 8(r1)
/* 804329E8 0042F928  4B CB 61 F9 */	bl GXSetFog
/* 804329EC 0042F92C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804329F0 0042F930  7C 08 03 A6 */	mtlr r0
/* 804329F4 0042F934  38 21 00 10 */	addi r1, r1, 0x10
/* 804329F8 0042F938  4E 80 00 20 */	blr 

.global set__6FogMgrFR8Graphics
set__6FogMgrFR8Graphics:
/* 804329FC 0042F93C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80432A00 0042F940  7C 08 02 A6 */	mflr r0
/* 80432A04 0042F944  90 01 00 44 */	stw r0, 0x44(r1)
/* 80432A08 0042F948  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 80432A0C 0042F94C  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 80432A10 0042F950  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 80432A14 0042F954  93 C1 00 28 */	stw r30, 0x28(r1)
/* 80432A18 0042F958  80 84 02 5C */	lwz r4, 0x25c(r4)
/* 80432A1C 0042F95C  7C 7E 1B 78 */	mr r30, r3
/* 80432A20 0042F960  80 03 00 24 */	lwz r0, 0x24(r3)
/* 80432A24 0042F964  83 E4 00 44 */	lwz r31, 0x44(r4)
/* 80432A28 0042F968  90 01 00 08 */	stw r0, 8(r1)
/* 80432A2C 0042F96C  7F E3 FB 78 */	mr r3, r31
/* 80432A30 0042F970  4B FE 82 F9 */	bl getFar__6CameraFv
/* 80432A34 0042F974  FF E0 08 90 */	fmr f31, f1
/* 80432A38 0042F978  7F E3 FB 78 */	mr r3, r31
/* 80432A3C 0042F97C  4B FE 82 D1 */	bl getNear__6CameraFv
/* 80432A40 0042F980  FC 60 08 90 */	fmr f3, f1
/* 80432A44 0042F984  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80432A48 0042F988  FC 80 F8 90 */	fmr f4, f31
/* 80432A4C 0042F98C  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 80432A50 0042F990  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 80432A54 0042F994  38 81 00 08 */	addi r4, r1, 8
/* 80432A58 0042F998  4B CB 61 89 */	bl GXSetFog
/* 80432A5C 0042F99C  4B FF 07 C9 */	bl getRenderModeObj__6SystemFv
/* 80432A60 0042F9A0  A0 83 00 04 */	lhz r4, 4(r3)
/* 80432A64 0042F9A4  38 61 00 0C */	addi r3, r1, 0xc
/* 80432A68 0042F9A8  38 BF 00 B4 */	addi r5, r31, 0xb4
/* 80432A6C 0042F9AC  4B CB 63 99 */	bl GXInitFogAdjTable
/* 80432A70 0042F9B0  4B FF 07 B5 */	bl getRenderModeObj__6SystemFv
/* 80432A74 0042F9B4  A0 03 00 04 */	lhz r0, 4(r3)
/* 80432A78 0042F9B8  38 A1 00 0C */	addi r5, r1, 0xc
/* 80432A7C 0042F9BC  38 60 00 01 */	li r3, 1
/* 80432A80 0042F9C0  54 04 FC 7E */	rlwinm r4, r0, 0x1f, 0x11, 0x1f
/* 80432A84 0042F9C4  4B CB 65 31 */	bl GXSetFogRangeAdj
/* 80432A88 0042F9C8  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 80432A8C 0042F9CC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80432A90 0042F9D0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 80432A94 0042F9D4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 80432A98 0042F9D8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 80432A9C 0042F9DC  7C 08 03 A6 */	mtlr r0
/* 80432AA0 0042F9E0  38 21 00 40 */	addi r1, r1, 0x40
/* 80432AA4 0042F9E4  4E 80 00 20 */	blr 

.global setColor__6FogMgrFR6Color4
setColor__6FogMgrFR6Color4:
/* 80432AA8 0042F9E8  88 04 00 00 */	lbz r0, 0(r4)
/* 80432AAC 0042F9EC  98 03 00 24 */	stb r0, 0x24(r3)
/* 80432AB0 0042F9F0  88 04 00 01 */	lbz r0, 1(r4)
/* 80432AB4 0042F9F4  98 03 00 25 */	stb r0, 0x25(r3)
/* 80432AB8 0042F9F8  88 04 00 02 */	lbz r0, 2(r4)
/* 80432ABC 0042F9FC  98 03 00 26 */	stb r0, 0x26(r3)
/* 80432AC0 0042FA00  88 04 00 03 */	lbz r0, 3(r4)
/* 80432AC4 0042FA04  98 03 00 27 */	stb r0, 0x27(r3)
/* 80432AC8 0042FA08  4E 80 00 20 */	blr 

.global getColor__6FogMgrFR6Color4
getColor__6FogMgrFR6Color4:
/* 80432ACC 0042FA0C  88 03 00 24 */	lbz r0, 0x24(r3)
/* 80432AD0 0042FA10  98 04 00 00 */	stb r0, 0(r4)
/* 80432AD4 0042FA14  88 03 00 25 */	lbz r0, 0x25(r3)
/* 80432AD8 0042FA18  98 04 00 01 */	stb r0, 1(r4)
/* 80432ADC 0042FA1C  88 03 00 26 */	lbz r0, 0x26(r3)
/* 80432AE0 0042FA20  98 04 00 02 */	stb r0, 2(r4)
/* 80432AE4 0042FA24  88 03 00 27 */	lbz r0, 0x27(r3)
/* 80432AE8 0042FA28  98 04 00 03 */	stb r0, 3(r4)
/* 80432AEC 0042FA2C  4E 80 00 20 */	blr 

__sinit_fogMgr_cpp:
/* 80432AF0 0042FA30  3C 80 80 51 */	lis r4, __float_nan@ha
/* 80432AF4 0042FA34  38 00 FF FF */	li r0, -1
/* 80432AF8 0042FA38  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 80432AFC 0042FA3C  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 80432B00 0042FA40  90 0D 9B A0 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 80432B04 0042FA44  D4 03 C3 B8 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 80432B08 0042FA48  D0 0D 9B A4 */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 80432B0C 0042FA4C  D0 03 00 04 */	stfs f0, 4(r3)
/* 80432B10 0042FA50  D0 03 00 08 */	stfs f0, 8(r3)
/* 80432B14 0042FA54  4E 80 00 20 */	blr 
