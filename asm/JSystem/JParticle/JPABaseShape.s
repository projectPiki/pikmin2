.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 32
.obj jpa_dl, local
	.4byte 0x80000400
	.4byte 0x00010102
	.4byte 0x02030300
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj jpa_dl
.balign 32
.obj jpa_dl_x, local
	.4byte 0x80000800
	.4byte 0x00010102
	.4byte 0x02030348
	.4byte 0x0049014A
	.4byte 0x024B0300
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj jpa_dl_x
.balign 4
.obj p_prj, local
	.4byte noLoadPrj__FPC18JPAEmitterWorkDataPA4_Cf
	.4byte loadPrj__FPC18JPAEmitterWorkDataPA4_Cf
	.4byte loadPrjAnm__FPC18JPAEmitterWorkDataPA4_Cf
.endobj p_prj
.obj p_direction, local
	.4byte "dirTypeVel__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
	.4byte "dirTypePos__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
	.4byte "dirTypePosInv__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
	.4byte "dirTypeEmtrDir__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
	.4byte "dirTypePrevPtcl__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"
.endobj p_direction
.obj p_rot, local
	.4byte rotTypeY__FffRA3_A4_f
	.4byte rotTypeX__FffRA3_A4_f
	.4byte rotTypeZ__FffRA3_A4_f
	.4byte rotTypeXYZ__FffRA3_A4_f
	.4byte rotTypeY__FffRA3_A4_f
.endobj p_rot
.obj p_plane, local
	.4byte basePlaneTypeXY__FPA4_fff
	.4byte basePlaneTypeXZ__FPA4_fff
	.4byte basePlaneTypeX__FPA4_fff
.endobj p_plane
.obj st_bm__12JPABaseShape, global
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000002
.endobj st_bm__12JPABaseShape
.obj st_bf__12JPABaseShape, global
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000002
	.4byte 0x00000003
	.4byte 0x00000004
	.4byte 0x00000005
	.4byte 0x00000006
	.4byte 0x00000007
.endobj st_bf__12JPABaseShape
.obj st_lo__12JPABaseShape, global
	.4byte 0x00000000
	.4byte 0x0000000F
	.4byte 0x00000003
	.4byte 0x0000000C
	.4byte 0x00000005
	.4byte 0x0000000A
	.4byte 0x00000001
	.4byte 0x0000000E
	.4byte 0x00000007
	.4byte 0x00000008
	.4byte 0x00000006
	.4byte 0x00000009
	.4byte 0x00000002
	.4byte 0x00000004
	.4byte 0x0000000B
	.4byte 0x0000000D
.endobj st_lo__12JPABaseShape
.obj st_c__12JPABaseShape, global
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000003
	.4byte 0x00000002
	.4byte 0x00000005
	.4byte 0x00000006
	.4byte 0x00000004
	.4byte 0x00000007
.endobj st_c__12JPABaseShape
.obj st_ao__12JPABaseShape, global
	.4byte 0x00000000
	.4byte 0x00000001
	.4byte 0x00000002
	.4byte 0x00000003
.endobj st_ao__12JPABaseShape
.obj st_ca__12JPABaseShape, global
	.4byte 0x0000000F
	.4byte 0x00000008
	.4byte 0x0000000C
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte 0x00000002
	.4byte 0x00000008
	.4byte 0x0000000F
	.4byte 0x00000002
	.4byte 0x0000000C
	.4byte 0x00000008
	.4byte 0x0000000F
	.4byte 0x00000004
	.4byte 0x00000002
	.4byte 0x00000008
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte 0x00000008
	.4byte 0x00000002
	.4byte 0x00000004
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte 0x0000000F
	.4byte 0x00000002
.endobj st_ca__12JPABaseShape
.obj st_aa__12JPABaseShape, global
	.4byte 0x00000007
	.4byte 0x00000004
	.4byte 0x00000001
	.4byte 0x00000007
	.4byte 0x00000007
	.4byte 0x00000007
	.4byte 0x00000007
	.4byte 0x00000001
.endobj st_aa__12JPABaseShape

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.obj p_dl, local
	.4byte jpa_dl
	.4byte jpa_dl_x
.endobj p_dl

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516B38, local
	.float 25.0
.endobj lbl_80516B38
.balign 8
.obj lbl_80516B40, local
	.8byte 0x4330000080000000
.endobj lbl_80516B40
.obj lbl_80516B48, local
	.float 0.5
.endobj lbl_80516B48
.obj lbl_80516B4C, local
	.float 1.0
.endobj lbl_80516B4C
.obj lbl_80516B50, local
	.float 0.0
.endobj lbl_80516B50
.balign 8
.obj lbl_80516B58, local
	.8byte 0x4330000000000000
.endobj lbl_80516B58
.obj lbl_80516B60, local
	.float 0.333333
.endobj lbl_80516B60
.obj lbl_80516B64, local
	.float 0.57735
.endobj lbl_80516B64
.obj lbl_80516B68, local
	.float 32.0
.endobj lbl_80516B68
.obj lbl_80516B6C, local
	.float 3.0
.endobj lbl_80516B6C

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn JPASetPointSize__FP18JPAEmitterWorkData, global
/* 8008B114 00088054  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B118 00088058  7C 08 02 A6 */	mflr r0
/* 8008B11C 0008805C  C0 22 87 D8 */	lfs f1, lbl_80516B38@sda21(r2)
/* 8008B120 00088060  38 80 00 05 */	li r4, 5
/* 8008B124 00088064  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B128 00088068  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 8008B12C 0008806C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008B130 00088070  FC 00 00 1E */	fctiwz f0, f0
/* 8008B134 00088074  D8 01 00 08 */	stfd f0, 8(r1)
/* 8008B138 00088078  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8008B13C 0008807C  48 05 A9 E5 */	bl GXSetPointSize
/* 8008B140 00088080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B144 00088084  7C 08 03 A6 */	mtlr r0
/* 8008B148 00088088  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B14C 0008808C  4E 80 00 20 */	blr 
.endfn JPASetPointSize__FP18JPAEmitterWorkData

.fn JPASetLineWidth__FP18JPAEmitterWorkData, global
/* 8008B150 00088090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B154 00088094  7C 08 02 A6 */	mflr r0
/* 8008B158 00088098  C0 22 87 D8 */	lfs f1, lbl_80516B38@sda21(r2)
/* 8008B15C 0008809C  38 80 00 05 */	li r4, 5
/* 8008B160 000880A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B164 000880A4  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 8008B168 000880A8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008B16C 000880AC  FC 00 00 1E */	fctiwz f0, f0
/* 8008B170 000880B0  D8 01 00 08 */	stfd f0, 8(r1)
/* 8008B174 000880B4  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8008B178 000880B8  48 05 A9 69 */	bl GXSetLineWidth
/* 8008B17C 000880BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B180 000880C0  7C 08 03 A6 */	mtlr r0
/* 8008B184 000880C4  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B188 000880C8  4E 80 00 20 */	blr 
.endfn JPASetLineWidth__FP18JPAEmitterWorkData

.fn JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B18C 000880CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B190 000880D0  7C 08 02 A6 */	mflr r0
/* 8008B194 000880D4  C0 22 87 D8 */	lfs f1, lbl_80516B38@sda21(r2)
/* 8008B198 000880D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B19C 000880DC  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 8008B1A0 000880E0  C0 44 00 60 */	lfs f2, 0x60(r4)
/* 8008B1A4 000880E4  38 80 00 05 */	li r4, 5
/* 8008B1A8 000880E8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008B1AC 000880EC  EC 02 00 32 */	fmuls f0, f2, f0
/* 8008B1B0 000880F0  FC 00 00 1E */	fctiwz f0, f0
/* 8008B1B4 000880F4  D8 01 00 08 */	stfd f0, 8(r1)
/* 8008B1B8 000880F8  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8008B1BC 000880FC  48 05 A9 65 */	bl GXSetPointSize
/* 8008B1C0 00088100  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B1C4 00088104  7C 08 03 A6 */	mtlr r0
/* 8008B1C8 00088108  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B1CC 0008810C  4E 80 00 20 */	blr 
.endfn JPASetPointSize__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B1D0 00088110  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B1D4 00088114  7C 08 02 A6 */	mflr r0
/* 8008B1D8 00088118  C0 22 87 D8 */	lfs f1, lbl_80516B38@sda21(r2)
/* 8008B1DC 0008811C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B1E0 00088120  C0 03 01 44 */	lfs f0, 0x144(r3)
/* 8008B1E4 00088124  C0 44 00 60 */	lfs f2, 0x60(r4)
/* 8008B1E8 00088128  38 80 00 05 */	li r4, 5
/* 8008B1EC 0008812C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008B1F0 00088130  EC 02 00 32 */	fmuls f0, f2, f0
/* 8008B1F4 00088134  FC 00 00 1E */	fctiwz f0, f0
/* 8008B1F8 00088138  D8 01 00 08 */	stfd f0, 8(r1)
/* 8008B1FC 0008813C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8008B200 00088140  48 05 A8 E1 */	bl GXSetLineWidth
/* 8008B204 00088144  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B208 00088148  7C 08 03 A6 */	mtlr r0
/* 8008B20C 0008814C  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B210 00088150  4E 80 00 20 */	blr 
.endfn JPASetLineWidth__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPARegistPrm__FP18JPAEmitterWorkData, global
/* 8008B214 00088154  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B218 00088158  7C 08 02 A6 */	mflr r0
/* 8008B21C 0008815C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B220 00088160  38 81 00 08 */	addi r4, r1, 8
/* 8008B224 00088164  81 03 00 00 */	lwz r8, 0(r3)
/* 8008B228 00088168  38 60 00 01 */	li r3, 1
/* 8008B22C 0008816C  80 08 01 08 */	lwz r0, 0x108(r8)
/* 8008B230 00088170  88 A8 00 B8 */	lbz r5, 0xb8(r8)
/* 8008B234 00088174  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008B238 00088178  88 E8 00 B9 */	lbz r7, 0xb9(r8)
/* 8008B23C 0008817C  39 45 00 01 */	addi r10, r5, 1
/* 8008B240 00088180  88 C8 00 BA */	lbz r6, 0xba(r8)
/* 8008B244 00088184  88 A8 00 BB */	lbz r5, 0xbb(r8)
/* 8008B248 00088188  39 07 00 01 */	addi r8, r7, 1
/* 8008B24C 0008818C  88 E1 00 0C */	lbz r7, 0xc(r1)
/* 8008B250 00088190  38 C6 00 01 */	addi r6, r6, 1
/* 8008B254 00088194  89 21 00 0D */	lbz r9, 0xd(r1)
/* 8008B258 00088198  38 05 00 01 */	addi r0, r5, 1
/* 8008B25C 0008819C  7D 47 51 D6 */	mullw r10, r7, r10
/* 8008B260 000881A0  88 E1 00 0E */	lbz r7, 0xe(r1)
/* 8008B264 000881A4  88 A1 00 0F */	lbz r5, 0xf(r1)
/* 8008B268 000881A8  7D 09 41 D6 */	mullw r8, r9, r8
/* 8008B26C 000881AC  55 49 C6 3E */	rlwinm r9, r10, 0x18, 0x18, 0x1f
/* 8008B270 000881B0  99 21 00 0C */	stb r9, 0xc(r1)
/* 8008B274 000881B4  7C C7 31 D6 */	mullw r6, r7, r6
/* 8008B278 000881B8  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 8008B27C 000881BC  98 E1 00 0D */	stb r7, 0xd(r1)
/* 8008B280 000881C0  7C 05 01 D6 */	mullw r0, r5, r0
/* 8008B284 000881C4  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8008B288 000881C8  98 A1 00 0E */	stb r5, 0xe(r1)
/* 8008B28C 000881CC  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8008B290 000881D0  98 01 00 0F */	stb r0, 0xf(r1)
/* 8008B294 000881D4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8008B298 000881D8  90 01 00 08 */	stw r0, 8(r1)
/* 8008B29C 000881DC  48 05 D3 C5 */	bl GXSetTevColor
/* 8008B2A0 000881E0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B2A4 000881E4  7C 08 03 A6 */	mtlr r0
/* 8008B2A8 000881E8  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B2AC 000881EC  4E 80 00 20 */	blr 
.endfn JPARegistPrm__FP18JPAEmitterWorkData

.fn JPARegistEnv__FP18JPAEmitterWorkData, global
/* 8008B2B0 000881F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B2B4 000881F4  7C 08 02 A6 */	mflr r0
/* 8008B2B8 000881F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B2BC 000881FC  38 81 00 08 */	addi r4, r1, 8
/* 8008B2C0 00088200  80 E3 00 00 */	lwz r7, 0(r3)
/* 8008B2C4 00088204  38 60 00 02 */	li r3, 2
/* 8008B2C8 00088208  80 07 01 0C */	lwz r0, 0x10c(r7)
/* 8008B2CC 0008820C  88 A7 00 BC */	lbz r5, 0xbc(r7)
/* 8008B2D0 00088210  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008B2D4 00088214  39 05 00 01 */	addi r8, r5, 1
/* 8008B2D8 00088218  88 A7 00 BE */	lbz r5, 0xbe(r7)
/* 8008B2DC 0008821C  88 C7 00 BD */	lbz r6, 0xbd(r7)
/* 8008B2E0 00088220  89 21 00 0C */	lbz r9, 0xc(r1)
/* 8008B2E4 00088224  38 05 00 01 */	addi r0, r5, 1
/* 8008B2E8 00088228  88 A1 00 0E */	lbz r5, 0xe(r1)
/* 8008B2EC 0008822C  38 C6 00 01 */	addi r6, r6, 1
/* 8008B2F0 00088230  88 E1 00 0D */	lbz r7, 0xd(r1)
/* 8008B2F4 00088234  7D 09 41 D6 */	mullw r8, r9, r8
/* 8008B2F8 00088238  7C C7 31 D6 */	mullw r6, r7, r6
/* 8008B2FC 0008823C  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 8008B300 00088240  98 E1 00 0C */	stb r7, 0xc(r1)
/* 8008B304 00088244  7C 05 01 D6 */	mullw r0, r5, r0
/* 8008B308 00088248  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8008B30C 0008824C  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8008B310 00088250  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8008B314 00088254  98 01 00 0E */	stb r0, 0xe(r1)
/* 8008B318 00088258  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8008B31C 0008825C  90 01 00 08 */	stw r0, 8(r1)
/* 8008B320 00088260  48 05 D3 41 */	bl GXSetTevColor
/* 8008B324 00088264  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B328 00088268  7C 08 03 A6 */	mtlr r0
/* 8008B32C 0008826C  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B330 00088270  4E 80 00 20 */	blr 
.endfn JPARegistEnv__FP18JPAEmitterWorkData

.fn JPARegistPrmEnv__FP18JPAEmitterWorkData, global
/* 8008B334 00088274  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8008B338 00088278  7C 08 02 A6 */	mflr r0
/* 8008B33C 0008827C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8008B340 00088280  38 81 00 0C */	addi r4, r1, 0xc
/* 8008B344 00088284  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8008B348 00088288  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8008B34C 0008828C  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8008B350 00088290  81 23 00 00 */	lwz r9, 0(r3)
/* 8008B354 00088294  38 60 00 01 */	li r3, 1
/* 8008B358 00088298  80 09 01 08 */	lwz r0, 0x108(r9)
/* 8008B35C 0008829C  88 A9 00 B8 */	lbz r5, 0xb8(r9)
/* 8008B360 000882A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B364 000882A4  39 05 00 01 */	addi r8, r5, 1
/* 8008B368 000882A8  88 C9 00 BA */	lbz r6, 0xba(r9)
/* 8008B36C 000882AC  88 A9 00 BB */	lbz r5, 0xbb(r9)
/* 8008B370 000882B0  88 E9 00 B9 */	lbz r7, 0xb9(r9)
/* 8008B374 000882B4  39 86 00 01 */	addi r12, r6, 1
/* 8008B378 000882B8  88 C1 00 14 */	lbz r6, 0x14(r1)
/* 8008B37C 000882BC  39 45 00 01 */	addi r10, r5, 1
/* 8008B380 000882C0  8B E1 00 16 */	lbz r31, 0x16(r1)
/* 8008B384 000882C4  38 07 00 01 */	addi r0, r7, 1
/* 8008B388 000882C8  7D 06 41 D6 */	mullw r8, r6, r8
/* 8008B38C 000882CC  88 A1 00 15 */	lbz r5, 0x15(r1)
/* 8008B390 000882D0  89 61 00 17 */	lbz r11, 0x17(r1)
/* 8008B394 000882D4  80 E9 01 0C */	lwz r7, 0x10c(r9)
/* 8008B398 000882D8  88 C9 00 BD */	lbz r6, 0xbd(r9)
/* 8008B39C 000882DC  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8008B3A0 000882E0  7F C5 01 D6 */	mullw r30, r5, r0
/* 8008B3A4 000882E4  55 1D C6 3E */	rlwinm r29, r8, 0x18, 0x18, 0x1f
/* 8008B3A8 000882E8  88 E9 00 BC */	lbz r7, 0xbc(r9)
/* 8008B3AC 000882EC  88 A9 00 BE */	lbz r5, 0xbe(r9)
/* 8008B3B0 000882F0  38 07 00 01 */	addi r0, r7, 1
/* 8008B3B4 000882F4  89 21 00 10 */	lbz r9, 0x10(r1)
/* 8008B3B8 000882F8  57 DE C6 3E */	rlwinm r30, r30, 0x18, 0x18, 0x1f
/* 8008B3BC 000882FC  38 E6 00 01 */	addi r7, r6, 1
/* 8008B3C0 00088300  89 01 00 11 */	lbz r8, 0x11(r1)
/* 8008B3C4 00088304  7D 9F 61 D6 */	mullw r12, r31, r12
/* 8008B3C8 00088308  9B A1 00 14 */	stb r29, 0x14(r1)
/* 8008B3CC 0008830C  38 A5 00 01 */	addi r5, r5, 1
/* 8008B3D0 00088310  88 C1 00 12 */	lbz r6, 0x12(r1)
/* 8008B3D4 00088314  9B C1 00 15 */	stb r30, 0x15(r1)
/* 8008B3D8 00088318  7D 4B 51 D6 */	mullw r10, r11, r10
/* 8008B3DC 0008831C  55 8B C6 3E */	rlwinm r11, r12, 0x18, 0x18, 0x1f
/* 8008B3E0 00088320  99 61 00 16 */	stb r11, 0x16(r1)
/* 8008B3E4 00088324  7D 29 01 D6 */	mullw r9, r9, r0
/* 8008B3E8 00088328  55 40 C6 3E */	rlwinm r0, r10, 0x18, 0x18, 0x1f
/* 8008B3EC 0008832C  98 01 00 17 */	stb r0, 0x17(r1)
/* 8008B3F0 00088330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B3F4 00088334  7C E8 39 D6 */	mullw r7, r8, r7
/* 8008B3F8 00088338  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008B3FC 0008833C  55 28 C6 3E */	rlwinm r8, r9, 0x18, 0x18, 0x1f
/* 8008B400 00088340  99 01 00 10 */	stb r8, 0x10(r1)
/* 8008B404 00088344  7C 06 29 D6 */	mullw r0, r6, r5
/* 8008B408 00088348  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 8008B40C 0008834C  98 A1 00 11 */	stb r5, 0x11(r1)
/* 8008B410 00088350  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8008B414 00088354  98 01 00 12 */	stb r0, 0x12(r1)
/* 8008B418 00088358  48 05 D2 49 */	bl GXSetTevColor
/* 8008B41C 0008835C  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8008B420 00088360  38 81 00 08 */	addi r4, r1, 8
/* 8008B424 00088364  38 60 00 02 */	li r3, 2
/* 8008B428 00088368  90 01 00 08 */	stw r0, 8(r1)
/* 8008B42C 0008836C  48 05 D2 35 */	bl GXSetTevColor
/* 8008B430 00088370  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8008B434 00088374  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8008B438 00088378  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8008B43C 0008837C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8008B440 00088380  7C 08 03 A6 */	mtlr r0
/* 8008B444 00088384  38 21 00 30 */	addi r1, r1, 0x30
/* 8008B448 00088388  4E 80 00 20 */	blr 
.endfn JPARegistPrmEnv__FP18JPAEmitterWorkData

.fn JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B44C 0008838C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B450 00088390  7C 08 02 A6 */	mflr r0
/* 8008B454 00088394  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B458 00088398  81 43 00 00 */	lwz r10, 0(r3)
/* 8008B45C 0008839C  38 60 00 01 */	li r3, 1
/* 8008B460 000883A0  88 A4 00 96 */	lbz r5, 0x96(r4)
/* 8008B464 000883A4  38 81 00 08 */	addi r4, r1, 8
/* 8008B468 000883A8  80 EA 01 08 */	lwz r7, 0x108(r10)
/* 8008B46C 000883AC  89 0A 00 B8 */	lbz r8, 0xb8(r10)
/* 8008B470 000883B0  38 05 00 01 */	addi r0, r5, 1
/* 8008B474 000883B4  88 CA 00 BB */	lbz r6, 0xbb(r10)
/* 8008B478 000883B8  90 E1 00 0C */	stw r7, 0xc(r1)
/* 8008B47C 000883BC  39 28 00 01 */	addi r9, r8, 1
/* 8008B480 000883C0  38 A6 00 01 */	addi r5, r6, 1
/* 8008B484 000883C4  88 EA 00 B9 */	lbz r7, 0xb9(r10)
/* 8008B488 000883C8  88 C1 00 0F */	lbz r6, 0xf(r1)
/* 8008B48C 000883CC  89 01 00 0D */	lbz r8, 0xd(r1)
/* 8008B490 000883D0  38 E7 00 01 */	addi r7, r7, 1
/* 8008B494 000883D4  7C A6 29 D6 */	mullw r5, r6, r5
/* 8008B498 000883D8  88 CA 00 BA */	lbz r6, 0xba(r10)
/* 8008B49C 000883DC  89 41 00 0C */	lbz r10, 0xc(r1)
/* 8008B4A0 000883E0  38 C6 00 01 */	addi r6, r6, 1
/* 8008B4A4 000883E4  54 AB C6 3E */	rlwinm r11, r5, 0x18, 0x18, 0x1f
/* 8008B4A8 000883E8  88 A1 00 0E */	lbz r5, 0xe(r1)
/* 8008B4AC 000883EC  7C 0B 01 D6 */	mullw r0, r11, r0
/* 8008B4B0 000883F0  99 61 00 0F */	stb r11, 0xf(r1)
/* 8008B4B4 000883F4  7C A5 31 D6 */	mullw r5, r5, r6
/* 8008B4B8 000883F8  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8008B4BC 000883FC  98 01 00 0F */	stb r0, 0xf(r1)
/* 8008B4C0 00088400  7C E8 39 D6 */	mullw r7, r8, r7
/* 8008B4C4 00088404  54 A5 C6 3E */	rlwinm r5, r5, 0x18, 0x18, 0x1f
/* 8008B4C8 00088408  98 A1 00 0E */	stb r5, 0xe(r1)
/* 8008B4CC 0008840C  7D 2A 49 D6 */	mullw r9, r10, r9
/* 8008B4D0 00088410  54 E6 C6 3E */	rlwinm r6, r7, 0x18, 0x18, 0x1f
/* 8008B4D4 00088414  98 C1 00 0D */	stb r6, 0xd(r1)
/* 8008B4D8 00088418  55 28 C6 3E */	rlwinm r8, r9, 0x18, 0x18, 0x1f
/* 8008B4DC 0008841C  99 01 00 0C */	stb r8, 0xc(r1)
/* 8008B4E0 00088420  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8008B4E4 00088424  90 01 00 08 */	stw r0, 8(r1)
/* 8008B4E8 00088428  48 05 D1 79 */	bl GXSetTevColor
/* 8008B4EC 0008842C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B4F0 00088430  7C 08 03 A6 */	mtlr r0
/* 8008B4F4 00088434  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B4F8 00088438  4E 80 00 20 */	blr 
.endfn JPARegistAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPARegistPrmAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B4FC 0008843C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B500 00088440  7C 08 02 A6 */	mflr r0
/* 8008B504 00088444  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B508 00088448  80 04 00 8C */	lwz r0, 0x8c(r4)
/* 8008B50C 0008844C  81 03 00 00 */	lwz r8, 0(r3)
/* 8008B510 00088450  38 60 00 01 */	li r3, 1
/* 8008B514 00088454  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008B518 00088458  88 A8 00 BB */	lbz r5, 0xbb(r8)
/* 8008B51C 0008845C  88 C1 00 0F */	lbz r6, 0xf(r1)
/* 8008B520 00088460  38 05 00 01 */	addi r0, r5, 1
/* 8008B524 00088464  88 E8 00 B8 */	lbz r7, 0xb8(r8)
/* 8008B528 00088468  7C A6 01 D6 */	mullw r5, r6, r0
/* 8008B52C 0008846C  88 84 00 96 */	lbz r4, 0x96(r4)
/* 8008B530 00088470  89 41 00 0C */	lbz r10, 0xc(r1)
/* 8008B534 00088474  39 27 00 01 */	addi r9, r7, 1
/* 8008B538 00088478  38 04 00 01 */	addi r0, r4, 1
/* 8008B53C 0008847C  88 C8 00 B9 */	lbz r6, 0xb9(r8)
/* 8008B540 00088480  54 AB C6 3E */	rlwinm r11, r5, 0x18, 0x18, 0x1f
/* 8008B544 00088484  88 88 00 BA */	lbz r4, 0xba(r8)
/* 8008B548 00088488  7C 0B 01 D6 */	mullw r0, r11, r0
/* 8008B54C 0008848C  38 E6 00 01 */	addi r7, r6, 1
/* 8008B550 00088490  89 01 00 0D */	lbz r8, 0xd(r1)
/* 8008B554 00088494  38 A4 00 01 */	addi r5, r4, 1
/* 8008B558 00088498  99 61 00 0F */	stb r11, 0xf(r1)
/* 8008B55C 0008849C  38 81 00 08 */	addi r4, r1, 8
/* 8008B560 000884A0  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8008B564 000884A4  88 C1 00 0E */	lbz r6, 0xe(r1)
/* 8008B568 000884A8  7D 2A 49 D6 */	mullw r9, r10, r9
/* 8008B56C 000884AC  98 01 00 0F */	stb r0, 0xf(r1)
/* 8008B570 000884B0  55 20 C6 3E */	rlwinm r0, r9, 0x18, 0x18, 0x1f
/* 8008B574 000884B4  98 01 00 0C */	stb r0, 0xc(r1)
/* 8008B578 000884B8  7C 06 29 D6 */	mullw r0, r6, r5
/* 8008B57C 000884BC  7C E8 39 D6 */	mullw r7, r8, r7
/* 8008B580 000884C0  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8008B584 000884C4  98 01 00 0E */	stb r0, 0xe(r1)
/* 8008B588 000884C8  54 E5 C6 3E */	rlwinm r5, r7, 0x18, 0x18, 0x1f
/* 8008B58C 000884CC  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8008B590 000884D0  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8008B594 000884D4  90 01 00 08 */	stw r0, 8(r1)
/* 8008B598 000884D8  48 05 D0 C9 */	bl GXSetTevColor
/* 8008B59C 000884DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B5A0 000884E0  7C 08 03 A6 */	mtlr r0
/* 8008B5A4 000884E4  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B5A8 000884E8  4E 80 00 20 */	blr 
.endfn JPARegistPrmAlpha__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B5AC 000884EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8008B5B0 000884F0  7C 08 02 A6 */	mflr r0
/* 8008B5B4 000884F4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8008B5B8 000884F8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 8008B5BC 000884FC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8008B5C0 00088500  93 A1 00 24 */	stw r29, 0x24(r1)
/* 8008B5C4 00088504  93 81 00 20 */	stw r28, 0x20(r1)
/* 8008B5C8 00088508  80 04 00 8C */	lwz r0, 0x8c(r4)
/* 8008B5CC 0008850C  83 83 00 00 */	lwz r28, 0(r3)
/* 8008B5D0 00088510  38 60 00 01 */	li r3, 1
/* 8008B5D4 00088514  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B5D8 00088518  88 BC 00 BB */	lbz r5, 0xbb(r28)
/* 8008B5DC 0008851C  88 C1 00 17 */	lbz r6, 0x17(r1)
/* 8008B5E0 00088520  38 05 00 01 */	addi r0, r5, 1
/* 8008B5E4 00088524  88 BC 00 B8 */	lbz r5, 0xb8(r28)
/* 8008B5E8 00088528  7C 06 01 D6 */	mullw r0, r6, r0
/* 8008B5EC 0008852C  88 FC 00 B9 */	lbz r7, 0xb9(r28)
/* 8008B5F0 00088530  88 DC 00 BA */	lbz r6, 0xba(r28)
/* 8008B5F4 00088534  39 05 00 01 */	addi r8, r5, 1
/* 8008B5F8 00088538  39 87 00 01 */	addi r12, r7, 1
/* 8008B5FC 0008853C  80 E4 00 90 */	lwz r7, 0x90(r4)
/* 8008B600 00088540  88 A4 00 96 */	lbz r5, 0x96(r4)
/* 8008B604 00088544  54 1D C6 3E */	rlwinm r29, r0, 0x18, 0x18, 0x1f
/* 8008B608 00088548  88 81 00 14 */	lbz r4, 0x14(r1)
/* 8008B60C 0008854C  39 46 00 01 */	addi r10, r6, 1
/* 8008B610 00088550  38 05 00 01 */	addi r0, r5, 1
/* 8008B614 00088554  8B E1 00 15 */	lbz r31, 0x15(r1)
/* 8008B618 00088558  89 61 00 16 */	lbz r11, 0x16(r1)
/* 8008B61C 0008855C  7D 3D 01 D6 */	mullw r9, r29, r0
/* 8008B620 00088560  88 BC 00 BD */	lbz r5, 0xbd(r28)
/* 8008B624 00088564  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8008B628 00088568  88 DC 00 BC */	lbz r6, 0xbc(r28)
/* 8008B62C 0008856C  38 05 00 01 */	addi r0, r5, 1
/* 8008B630 00088570  88 A1 00 12 */	lbz r5, 0x12(r1)
/* 8008B634 00088574  7F C4 41 D6 */	mullw r30, r4, r8
/* 8008B638 00088578  88 9C 00 BE */	lbz r4, 0xbe(r28)
/* 8008B63C 0008857C  38 E6 00 01 */	addi r7, r6, 1
/* 8008B640 00088580  89 01 00 10 */	lbz r8, 0x10(r1)
/* 8008B644 00088584  88 C1 00 11 */	lbz r6, 0x11(r1)
/* 8008B648 00088588  38 84 00 01 */	addi r4, r4, 1
/* 8008B64C 0008858C  7D 9F 61 D6 */	mullw r12, r31, r12
/* 8008B650 00088590  57 DF C6 3E */	rlwinm r31, r30, 0x18, 0x18, 0x1f
/* 8008B654 00088594  9B A1 00 17 */	stb r29, 0x17(r1)
/* 8008B658 00088598  55 29 C6 3E */	rlwinm r9, r9, 0x18, 0x18, 0x1f
/* 8008B65C 0008859C  9B E1 00 14 */	stb r31, 0x14(r1)
/* 8008B660 000885A0  7D 4B 51 D6 */	mullw r10, r11, r10
/* 8008B664 000885A4  55 8B C6 3E */	rlwinm r11, r12, 0x18, 0x18, 0x1f
/* 8008B668 000885A8  99 21 00 17 */	stb r9, 0x17(r1)
/* 8008B66C 000885AC  99 61 00 15 */	stb r11, 0x15(r1)
/* 8008B670 000885B0  7C E8 39 D6 */	mullw r7, r8, r7
/* 8008B674 000885B4  55 48 C6 3E */	rlwinm r8, r10, 0x18, 0x18, 0x1f
/* 8008B678 000885B8  99 01 00 16 */	stb r8, 0x16(r1)
/* 8008B67C 000885BC  7C C6 01 D6 */	mullw r6, r6, r0
/* 8008B680 000885C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B684 000885C4  54 E7 C6 3E */	rlwinm r7, r7, 0x18, 0x18, 0x1f
/* 8008B688 000885C8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008B68C 000885CC  98 E1 00 10 */	stb r7, 0x10(r1)
/* 8008B690 000885D0  7C A5 21 D6 */	mullw r5, r5, r4
/* 8008B694 000885D4  54 C4 C6 3E */	rlwinm r4, r6, 0x18, 0x18, 0x1f
/* 8008B698 000885D8  98 81 00 11 */	stb r4, 0x11(r1)
/* 8008B69C 000885DC  38 81 00 0C */	addi r4, r1, 0xc
/* 8008B6A0 000885E0  54 A0 C6 3E */	rlwinm r0, r5, 0x18, 0x18, 0x1f
/* 8008B6A4 000885E4  98 01 00 12 */	stb r0, 0x12(r1)
/* 8008B6A8 000885E8  48 05 CF B9 */	bl GXSetTevColor
/* 8008B6AC 000885EC  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8008B6B0 000885F0  38 81 00 08 */	addi r4, r1, 8
/* 8008B6B4 000885F4  38 60 00 02 */	li r3, 2
/* 8008B6B8 000885F8  90 01 00 08 */	stw r0, 8(r1)
/* 8008B6BC 000885FC  48 05 CF A5 */	bl GXSetTevColor
/* 8008B6C0 00088600  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8008B6C4 00088604  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 8008B6C8 00088608  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 8008B6CC 0008860C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 8008B6D0 00088610  83 81 00 20 */	lwz r28, 0x20(r1)
/* 8008B6D4 00088614  7C 08 03 A6 */	mtlr r0
/* 8008B6D8 00088618  38 21 00 30 */	addi r1, r1, 0x30
/* 8008B6DC 0008861C  4E 80 00 20 */	blr 
.endfn JPARegistPrmAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPARegistAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B6E0 00088620  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8008B6E4 00088624  7C 08 02 A6 */	mflr r0
/* 8008B6E8 00088628  90 01 00 24 */	stw r0, 0x24(r1)
/* 8008B6EC 0008862C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8008B6F0 00088630  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8008B6F4 00088634  83 E3 00 00 */	lwz r31, 0(r3)
/* 8008B6F8 00088638  38 60 00 01 */	li r3, 1
/* 8008B6FC 0008863C  88 A4 00 96 */	lbz r5, 0x96(r4)
/* 8008B700 00088640  80 1F 01 08 */	lwz r0, 0x108(r31)
/* 8008B704 00088644  80 E4 00 90 */	lwz r7, 0x90(r4)
/* 8008B708 00088648  39 45 00 01 */	addi r10, r5, 1
/* 8008B70C 0008864C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B710 00088650  38 81 00 0C */	addi r4, r1, 0xc
/* 8008B714 00088654  88 BF 00 BB */	lbz r5, 0xbb(r31)
/* 8008B718 00088658  88 C1 00 17 */	lbz r6, 0x17(r1)
/* 8008B71C 0008865C  38 05 00 01 */	addi r0, r5, 1
/* 8008B720 00088660  90 E1 00 10 */	stw r7, 0x10(r1)
/* 8008B724 00088664  7C 06 01 D6 */	mullw r0, r6, r0
/* 8008B728 00088668  88 FF 00 B8 */	lbz r7, 0xb8(r31)
/* 8008B72C 0008866C  88 DF 00 B9 */	lbz r6, 0xb9(r31)
/* 8008B730 00088670  89 21 00 14 */	lbz r9, 0x14(r1)
/* 8008B734 00088674  38 E7 00 01 */	addi r7, r7, 1
/* 8008B738 00088678  88 BF 00 BA */	lbz r5, 0xba(r31)
/* 8008B73C 0008867C  54 1E C6 3E */	rlwinm r30, r0, 0x18, 0x18, 0x1f
/* 8008B740 00088680  38 05 00 01 */	addi r0, r5, 1
/* 8008B744 00088684  7D 29 39 D6 */	mullw r9, r9, r7
/* 8008B748 00088688  89 61 00 16 */	lbz r11, 0x16(r1)
/* 8008B74C 0008868C  88 BF 00 BE */	lbz r5, 0xbe(r31)
/* 8008B750 00088690  38 C6 00 01 */	addi r6, r6, 1
/* 8008B754 00088694  89 01 00 15 */	lbz r8, 0x15(r1)
/* 8008B758 00088698  88 FF 00 BC */	lbz r7, 0xbc(r31)
/* 8008B75C 0008869C  7D 88 31 D6 */	mullw r12, r8, r6
/* 8008B760 000886A0  88 DF 00 BD */	lbz r6, 0xbd(r31)
/* 8008B764 000886A4  55 3F C6 3E */	rlwinm r31, r9, 0x18, 0x18, 0x1f
/* 8008B768 000886A8  89 21 00 10 */	lbz r9, 0x10(r1)
/* 8008B76C 000886AC  39 07 00 01 */	addi r8, r7, 1
/* 8008B770 000886B0  88 E1 00 11 */	lbz r7, 0x11(r1)
/* 8008B774 000886B4  7D 6B 01 D6 */	mullw r11, r11, r0
/* 8008B778 000886B8  38 06 00 01 */	addi r0, r6, 1
/* 8008B77C 000886BC  55 8C C6 3E */	rlwinm r12, r12, 0x18, 0x18, 0x1f
/* 8008B780 000886C0  88 C1 00 12 */	lbz r6, 0x12(r1)
/* 8008B784 000886C4  38 A5 00 01 */	addi r5, r5, 1
/* 8008B788 000886C8  9B C1 00 17 */	stb r30, 0x17(r1)
/* 8008B78C 000886CC  55 6B C6 3E */	rlwinm r11, r11, 0x18, 0x18, 0x1f
/* 8008B790 000886D0  9B E1 00 14 */	stb r31, 0x14(r1)
/* 8008B794 000886D4  7D 09 41 D6 */	mullw r8, r9, r8
/* 8008B798 000886D8  99 81 00 15 */	stb r12, 0x15(r1)
/* 8008B79C 000886DC  99 61 00 16 */	stb r11, 0x16(r1)
/* 8008B7A0 000886E0  7D 5E 51 D6 */	mullw r10, r30, r10
/* 8008B7A4 000886E4  55 08 C6 3E */	rlwinm r8, r8, 0x18, 0x18, 0x1f
/* 8008B7A8 000886E8  99 01 00 10 */	stb r8, 0x10(r1)
/* 8008B7AC 000886EC  55 49 C6 3E */	rlwinm r9, r10, 0x18, 0x18, 0x1f
/* 8008B7B0 000886F0  7C E7 01 D6 */	mullw r7, r7, r0
/* 8008B7B4 000886F4  99 21 00 17 */	stb r9, 0x17(r1)
/* 8008B7B8 000886F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B7BC 000886FC  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008B7C0 00088700  7C A6 29 D6 */	mullw r5, r6, r5
/* 8008B7C4 00088704  54 E6 C6 3E */	rlwinm r6, r7, 0x18, 0x18, 0x1f
/* 8008B7C8 00088708  98 C1 00 11 */	stb r6, 0x11(r1)
/* 8008B7CC 0008870C  54 A0 C6 3E */	rlwinm r0, r5, 0x18, 0x18, 0x1f
/* 8008B7D0 00088710  98 01 00 12 */	stb r0, 0x12(r1)
/* 8008B7D4 00088714  48 05 CE 8D */	bl GXSetTevColor
/* 8008B7D8 00088718  80 01 00 10 */	lwz r0, 0x10(r1)
/* 8008B7DC 0008871C  38 81 00 08 */	addi r4, r1, 8
/* 8008B7E0 00088720  38 60 00 02 */	li r3, 2
/* 8008B7E4 00088724  90 01 00 08 */	stw r0, 8(r1)
/* 8008B7E8 00088728  48 05 CE 79 */	bl GXSetTevColor
/* 8008B7EC 0008872C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8008B7F0 00088730  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8008B7F4 00088734  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8008B7F8 00088738  7C 08 03 A6 */	mtlr r0
/* 8008B7FC 0008873C  38 21 00 20 */	addi r1, r1, 0x20
/* 8008B800 00088740  4E 80 00 20 */	blr 
.endfn JPARegistAlphaEnv__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPARegistEnv__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B804 00088744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008B808 00088748  7C 08 02 A6 */	mflr r0
/* 8008B80C 0008874C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008B810 00088750  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008B814 00088754  38 60 00 02 */	li r3, 2
/* 8008B818 00088758  80 04 00 90 */	lwz r0, 0x90(r4)
/* 8008B81C 0008875C  38 81 00 08 */	addi r4, r1, 8
/* 8008B820 00088760  88 E5 00 BC */	lbz r7, 0xbc(r5)
/* 8008B824 00088764  88 C5 00 BD */	lbz r6, 0xbd(r5)
/* 8008B828 00088768  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008B82C 0008876C  39 07 00 01 */	addi r8, r7, 1
/* 8008B830 00088770  88 A5 00 BE */	lbz r5, 0xbe(r5)
/* 8008B834 00088774  38 C6 00 01 */	addi r6, r6, 1
/* 8008B838 00088778  89 21 00 0C */	lbz r9, 0xc(r1)
/* 8008B83C 0008877C  88 E1 00 0D */	lbz r7, 0xd(r1)
/* 8008B840 00088780  38 05 00 01 */	addi r0, r5, 1
/* 8008B844 00088784  88 A1 00 0E */	lbz r5, 0xe(r1)
/* 8008B848 00088788  7D 09 41 D6 */	mullw r8, r9, r8
/* 8008B84C 0008878C  7C C7 31 D6 */	mullw r6, r7, r6
/* 8008B850 00088790  55 07 C6 3E */	rlwinm r7, r8, 0x18, 0x18, 0x1f
/* 8008B854 00088794  98 E1 00 0C */	stb r7, 0xc(r1)
/* 8008B858 00088798  7C 05 01 D6 */	mullw r0, r5, r0
/* 8008B85C 0008879C  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8008B860 000887A0  98 A1 00 0D */	stb r5, 0xd(r1)
/* 8008B864 000887A4  54 00 C6 3E */	rlwinm r0, r0, 0x18, 0x18, 0x1f
/* 8008B868 000887A8  98 01 00 0E */	stb r0, 0xe(r1)
/* 8008B86C 000887AC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 8008B870 000887B0  90 01 00 08 */	stw r0, 8(r1)
/* 8008B874 000887B4  48 05 CD ED */	bl GXSetTevColor
/* 8008B878 000887B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008B87C 000887BC  7C 08 03 A6 */	mtlr r0
/* 8008B880 000887C0  38 21 00 10 */	addi r1, r1, 0x10
/* 8008B884 000887C4  4E 80 00 20 */	blr 
.endfn JPARegistEnv__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcClrIdxNormal__FP18JPAEmitterWorkData, global
/* 8008B888 000887C8  80 83 00 04 */	lwz r4, 4(r3)
/* 8008B88C 000887CC  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008B890 000887D0  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8008B894 000887D4  80 05 01 00 */	lwz r0, 0x100(r5)
/* 8008B898 000887D8  80 84 00 00 */	lwz r4, 0(r4)
/* 8008B89C 000887DC  A8 84 00 24 */	lha r4, 0x24(r4)
/* 8008B8A0 000887E0  7C 00 20 40 */	cmplw r0, r4
/* 8008B8A4 000887E4  40 80 00 08 */	bge .L_8008B8AC
/* 8008B8A8 000887E8  7C 04 07 34 */	extsh r4, r0
.L_8008B8AC:
/* 8008B8AC 000887EC  B0 83 02 14 */	sth r4, 0x214(r3)
/* 8008B8B0 000887F0  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxNormal__FP18JPAEmitterWorkData

.fn JPACalcClrIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B8B4 000887F4  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008B8B8 000887F8  A8 04 00 80 */	lha r0, 0x80(r4)
/* 8008B8BC 000887FC  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 8008B8C0 00088800  80 84 00 00 */	lwz r4, 0(r4)
/* 8008B8C4 00088804  A8 84 00 24 */	lha r4, 0x24(r4)
/* 8008B8C8 00088808  7C 00 20 00 */	cmpw r0, r4
/* 8008B8CC 0008880C  40 80 00 08 */	bge .L_8008B8D4
/* 8008B8D0 00088810  7C 04 03 78 */	mr r4, r0
.L_8008B8D4:
/* 8008B8D4 00088814  B0 83 02 14 */	sth r4, 0x214(r3)
/* 8008B8D8 00088818  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcClrIdxRepeat__FP18JPAEmitterWorkData, global
/* 8008B8DC 0008881C  80 83 00 04 */	lwz r4, 4(r3)
/* 8008B8E0 00088820  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008B8E4 00088824  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8008B8E8 00088828  80 A5 01 00 */	lwz r5, 0x100(r5)
/* 8008B8EC 0008882C  80 84 00 00 */	lwz r4, 0(r4)
/* 8008B8F0 00088830  A8 84 00 24 */	lha r4, 0x24(r4)
/* 8008B8F4 00088834  38 84 00 01 */	addi r4, r4, 1
/* 8008B8F8 00088838  7C 05 23 96 */	divwu r0, r5, r4
/* 8008B8FC 0008883C  7C 00 21 D6 */	mullw r0, r0, r4
/* 8008B900 00088840  7C 00 28 50 */	subf r0, r0, r5
/* 8008B904 00088844  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008B908 00088848  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxRepeat__FP18JPAEmitterWorkData

.fn JPACalcClrIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B90C 0008884C  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008B910 00088850  88 C4 00 95 */	lbz r6, 0x95(r4)
/* 8008B914 00088854  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8008B918 00088858  A8 04 00 80 */	lha r0, 0x80(r4)
/* 8008B91C 0008885C  80 85 00 00 */	lwz r4, 0(r5)
/* 8008B920 00088860  88 A4 00 2F */	lbz r5, 0x2f(r4)
/* 8008B924 00088864  A8 84 00 24 */	lha r4, 0x24(r4)
/* 8008B928 00088868  7C C5 28 38 */	and r5, r6, r5
/* 8008B92C 0008886C  7C A0 2A 14 */	add r5, r0, r5
/* 8008B930 00088870  38 84 00 01 */	addi r4, r4, 1
/* 8008B934 00088874  7C 05 23 D6 */	divw r0, r5, r4
/* 8008B938 00088878  7C 00 21 D6 */	mullw r0, r0, r4
/* 8008B93C 0008887C  7C 00 28 50 */	subf r0, r0, r5
/* 8008B940 00088880  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008B944 00088884  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcClrIdxReverse__FP18JPAEmitterWorkData, global
/* 8008B948 00088888  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008B94C 0008888C  80 83 00 00 */	lwz r4, 0(r3)
/* 8008B950 00088890  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8008B954 00088894  80 C4 01 00 */	lwz r6, 0x100(r4)
/* 8008B958 00088898  80 85 00 00 */	lwz r4, 0(r5)
/* 8008B95C 0008889C  A8 A4 00 24 */	lha r5, 0x24(r4)
/* 8008B960 000888A0  7C 86 2B 96 */	divwu r4, r6, r5
/* 8008B964 000888A4  7C 04 29 D6 */	mullw r0, r4, r5
/* 8008B968 000888A8  54 84 07 FE */	clrlwi r4, r4, 0x1f
/* 8008B96C 000888AC  7C C0 30 50 */	subf r6, r0, r6
/* 8008B970 000888B0  54 C0 08 3C */	slwi r0, r6, 1
/* 8008B974 000888B4  7C 00 28 50 */	subf r0, r0, r5
/* 8008B978 000888B8  7C 04 01 D6 */	mullw r0, r4, r0
/* 8008B97C 000888BC  7C 06 02 14 */	add r0, r6, r0
/* 8008B980 000888C0  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008B984 000888C4  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxReverse__FP18JPAEmitterWorkData

.fn JPACalcClrIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B988 000888C8  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008B98C 000888CC  88 C4 00 95 */	lbz r6, 0x95(r4)
/* 8008B990 000888D0  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8008B994 000888D4  A8 04 00 80 */	lha r0, 0x80(r4)
/* 8008B998 000888D8  80 A5 00 00 */	lwz r5, 0(r5)
/* 8008B99C 000888DC  88 85 00 2F */	lbz r4, 0x2f(r5)
/* 8008B9A0 000888E0  A8 E5 00 24 */	lha r7, 0x24(r5)
/* 8008B9A4 000888E4  7C C4 20 38 */	and r4, r6, r4
/* 8008B9A8 000888E8  7C A0 22 14 */	add r5, r0, r4
/* 8008B9AC 000888EC  7C 85 3B D6 */	divw r4, r5, r7
/* 8008B9B0 000888F0  7C 04 39 D6 */	mullw r0, r4, r7
/* 8008B9B4 000888F4  54 84 07 FE */	clrlwi r4, r4, 0x1f
/* 8008B9B8 000888F8  7C A0 28 50 */	subf r5, r0, r5
/* 8008B9BC 000888FC  54 A0 08 3C */	slwi r0, r5, 1
/* 8008B9C0 00088900  7C 00 38 50 */	subf r0, r0, r7
/* 8008B9C4 00088904  7C 04 01 D6 */	mullw r0, r4, r0
/* 8008B9C8 00088908  7C 05 02 14 */	add r0, r5, r0
/* 8008B9CC 0008890C  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008B9D0 00088910  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcClrIdxMerge__FP18JPAEmitterWorkData, global
/* 8008B9D4 00088914  38 00 00 00 */	li r0, 0
/* 8008B9D8 00088918  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008B9DC 0008891C  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxMerge__FP18JPAEmitterWorkData

.fn JPACalcClrIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008B9E0 00088920  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8008B9E4 00088924  3C 00 43 30 */	lis r0, 0x4330
/* 8008B9E8 00088928  C8 22 87 E0 */	lfd f1, lbl_80516B40@sda21(r2)
/* 8008B9EC 0008892C  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008B9F0 00088930  C0 44 00 84 */	lfs f2, 0x84(r4)
/* 8008B9F4 00088934  80 A5 00 1C */	lwz r5, 0x1c(r5)
/* 8008B9F8 00088938  90 01 00 08 */	stw r0, 8(r1)
/* 8008B9FC 0008893C  80 C5 00 00 */	lwz r6, 0(r5)
/* 8008BA00 00088940  88 84 00 95 */	lbz r4, 0x95(r4)
/* 8008BA04 00088944  A8 A6 00 24 */	lha r5, 0x24(r6)
/* 8008BA08 00088948  88 06 00 2F */	lbz r0, 0x2f(r6)
/* 8008BA0C 0008894C  38 E5 00 01 */	addi r7, r5, 1
/* 8008BA10 00088950  6C E5 80 00 */	xoris r5, r7, 0x8000
/* 8008BA14 00088954  7C 80 00 38 */	and r0, r4, r0
/* 8008BA18 00088958  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8008BA1C 0008895C  C8 01 00 08 */	lfd f0, 8(r1)
/* 8008BA20 00088960  EC 00 08 28 */	fsubs f0, f0, f1
/* 8008BA24 00088964  EC 02 00 32 */	fmuls f0, f2, f0
/* 8008BA28 00088968  FC 00 00 1E */	fctiwz f0, f0
/* 8008BA2C 0008896C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8008BA30 00088970  80 81 00 14 */	lwz r4, 0x14(r1)
/* 8008BA34 00088974  7C 84 02 14 */	add r4, r4, r0
/* 8008BA38 00088978  7C 04 3B D6 */	divw r0, r4, r7
/* 8008BA3C 0008897C  7C 00 39 D6 */	mullw r0, r0, r7
/* 8008BA40 00088980  7C 00 20 50 */	subf r0, r0, r4
/* 8008BA44 00088984  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008BA48 00088988  38 21 00 20 */	addi r1, r1, 0x20
/* 8008BA4C 0008898C  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcClrIdxRandom__FP18JPAEmitterWorkData, global
/* 8008BA50 00088990  38 00 00 00 */	li r0, 0
/* 8008BA54 00088994  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008BA58 00088998  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxRandom__FP18JPAEmitterWorkData

.fn JPACalcClrIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008BA5C 0008899C  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008BA60 000889A0  88 C4 00 95 */	lbz r6, 0x95(r4)
/* 8008BA64 000889A4  80 85 00 1C */	lwz r4, 0x1c(r5)
/* 8008BA68 000889A8  80 84 00 00 */	lwz r4, 0(r4)
/* 8008BA6C 000889AC  88 04 00 2F */	lbz r0, 0x2f(r4)
/* 8008BA70 000889B0  A8 84 00 24 */	lha r4, 0x24(r4)
/* 8008BA74 000889B4  7C C5 00 38 */	and r5, r6, r0
/* 8008BA78 000889B8  38 84 00 01 */	addi r4, r4, 1
/* 8008BA7C 000889BC  7C 05 23 D6 */	divw r0, r5, r4
/* 8008BA80 000889C0  7C 00 21 D6 */	mullw r0, r0, r4
/* 8008BA84 000889C4  7C 00 28 50 */	subf r0, r0, r5
/* 8008BA88 000889C8  B0 03 02 14 */	sth r0, 0x214(r3)
/* 8008BA8C 000889CC  4E 80 00 20 */	blr 
.endfn JPACalcClrIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcPrm__FP18JPAEmitterWorkData, global
/* 8008BA90 000889D0  80 83 00 04 */	lwz r4, 4(r3)
/* 8008BA94 000889D4  A8 03 02 14 */	lha r0, 0x214(r3)
/* 8008BA98 000889D8  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8008BA9C 000889DC  54 00 10 3A */	slwi r0, r0, 2
/* 8008BAA0 000889E0  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008BAA4 000889E4  80 64 00 0C */	lwz r3, 0xc(r4)
/* 8008BAA8 000889E8  7C 63 02 14 */	add r3, r3, r0
/* 8008BAAC 000889EC  88 03 00 00 */	lbz r0, 0(r3)
/* 8008BAB0 000889F0  98 05 01 08 */	stb r0, 0x108(r5)
/* 8008BAB4 000889F4  88 03 00 01 */	lbz r0, 1(r3)
/* 8008BAB8 000889F8  98 05 01 09 */	stb r0, 0x109(r5)
/* 8008BABC 000889FC  88 03 00 02 */	lbz r0, 2(r3)
/* 8008BAC0 00088A00  98 05 01 0A */	stb r0, 0x10a(r5)
/* 8008BAC4 00088A04  88 03 00 03 */	lbz r0, 3(r3)
/* 8008BAC8 00088A08  98 05 01 0B */	stb r0, 0x10b(r5)
/* 8008BACC 00088A0C  4E 80 00 20 */	blr 
.endfn JPACalcPrm__FP18JPAEmitterWorkData

.fn JPACalcPrm__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008BAD0 00088A10  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008BAD4 00088A14  A8 03 02 14 */	lha r0, 0x214(r3)
/* 8008BAD8 00088A18  80 65 00 1C */	lwz r3, 0x1c(r5)
/* 8008BADC 00088A1C  54 00 10 3A */	slwi r0, r0, 2
/* 8008BAE0 00088A20  80 63 00 0C */	lwz r3, 0xc(r3)
/* 8008BAE4 00088A24  7C 63 02 14 */	add r3, r3, r0
/* 8008BAE8 00088A28  88 03 00 00 */	lbz r0, 0(r3)
/* 8008BAEC 00088A2C  98 04 00 8C */	stb r0, 0x8c(r4)
/* 8008BAF0 00088A30  88 03 00 01 */	lbz r0, 1(r3)
/* 8008BAF4 00088A34  98 04 00 8D */	stb r0, 0x8d(r4)
/* 8008BAF8 00088A38  88 03 00 02 */	lbz r0, 2(r3)
/* 8008BAFC 00088A3C  98 04 00 8E */	stb r0, 0x8e(r4)
/* 8008BB00 00088A40  88 03 00 03 */	lbz r0, 3(r3)
/* 8008BB04 00088A44  98 04 00 8F */	stb r0, 0x8f(r4)
/* 8008BB08 00088A48  4E 80 00 20 */	blr 
.endfn JPACalcPrm__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcEnv__FP18JPAEmitterWorkData, global
/* 8008BB0C 00088A4C  80 83 00 04 */	lwz r4, 4(r3)
/* 8008BB10 00088A50  A8 03 02 14 */	lha r0, 0x214(r3)
/* 8008BB14 00088A54  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8008BB18 00088A58  54 00 10 3A */	slwi r0, r0, 2
/* 8008BB1C 00088A5C  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008BB20 00088A60  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8008BB24 00088A64  7C 63 02 14 */	add r3, r3, r0
/* 8008BB28 00088A68  88 03 00 00 */	lbz r0, 0(r3)
/* 8008BB2C 00088A6C  98 05 01 0C */	stb r0, 0x10c(r5)
/* 8008BB30 00088A70  88 03 00 01 */	lbz r0, 1(r3)
/* 8008BB34 00088A74  98 05 01 0D */	stb r0, 0x10d(r5)
/* 8008BB38 00088A78  88 03 00 02 */	lbz r0, 2(r3)
/* 8008BB3C 00088A7C  98 05 01 0E */	stb r0, 0x10e(r5)
/* 8008BB40 00088A80  88 03 00 03 */	lbz r0, 3(r3)
/* 8008BB44 00088A84  98 05 01 0F */	stb r0, 0x10f(r5)
/* 8008BB48 00088A88  4E 80 00 20 */	blr 
.endfn JPACalcEnv__FP18JPAEmitterWorkData

.fn JPACalcEnv__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008BB4C 00088A8C  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008BB50 00088A90  A8 03 02 14 */	lha r0, 0x214(r3)
/* 8008BB54 00088A94  80 65 00 1C */	lwz r3, 0x1c(r5)
/* 8008BB58 00088A98  54 00 10 3A */	slwi r0, r0, 2
/* 8008BB5C 00088A9C  80 63 00 10 */	lwz r3, 0x10(r3)
/* 8008BB60 00088AA0  7C 63 02 14 */	add r3, r3, r0
/* 8008BB64 00088AA4  88 03 00 00 */	lbz r0, 0(r3)
/* 8008BB68 00088AA8  98 04 00 90 */	stb r0, 0x90(r4)
/* 8008BB6C 00088AAC  88 03 00 01 */	lbz r0, 1(r3)
/* 8008BB70 00088AB0  98 04 00 91 */	stb r0, 0x91(r4)
/* 8008BB74 00088AB4  88 03 00 02 */	lbz r0, 2(r3)
/* 8008BB78 00088AB8  98 04 00 92 */	stb r0, 0x92(r4)
/* 8008BB7C 00088ABC  88 03 00 03 */	lbz r0, 3(r3)
/* 8008BB80 00088AC0  98 04 00 93 */	stb r0, 0x93(r4)
/* 8008BB84 00088AC4  4E 80 00 20 */	blr 
.endfn JPACalcEnv__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcColorCopy__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008BB88 00088AC8  80 63 00 00 */	lwz r3, 0(r3)
/* 8008BB8C 00088ACC  88 03 01 08 */	lbz r0, 0x108(r3)
/* 8008BB90 00088AD0  98 04 00 8C */	stb r0, 0x8c(r4)
/* 8008BB94 00088AD4  88 03 01 09 */	lbz r0, 0x109(r3)
/* 8008BB98 00088AD8  98 04 00 8D */	stb r0, 0x8d(r4)
/* 8008BB9C 00088ADC  88 03 01 0A */	lbz r0, 0x10a(r3)
/* 8008BBA0 00088AE0  98 04 00 8E */	stb r0, 0x8e(r4)
/* 8008BBA4 00088AE4  88 03 01 0B */	lbz r0, 0x10b(r3)
/* 8008BBA8 00088AE8  98 04 00 8F */	stb r0, 0x8f(r4)
/* 8008BBAC 00088AEC  88 03 01 0C */	lbz r0, 0x10c(r3)
/* 8008BBB0 00088AF0  98 04 00 90 */	stb r0, 0x90(r4)
/* 8008BBB4 00088AF4  88 03 01 0D */	lbz r0, 0x10d(r3)
/* 8008BBB8 00088AF8  98 04 00 91 */	stb r0, 0x91(r4)
/* 8008BBBC 00088AFC  88 03 01 0E */	lbz r0, 0x10e(r3)
/* 8008BBC0 00088B00  98 04 00 92 */	stb r0, 0x92(r4)
/* 8008BBC4 00088B04  88 03 01 0F */	lbz r0, 0x10f(r3)
/* 8008BBC8 00088B08  98 04 00 93 */	stb r0, 0x93(r4)
/* 8008BBCC 00088B0C  4E 80 00 20 */	blr 
.endfn JPACalcColorCopy__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData, global
/* 8008BBD0 00088B10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008BBD4 00088B14  7C 08 02 A6 */	mflr r0
/* 8008BBD8 00088B18  38 60 00 00 */	li r3, 0
/* 8008BBDC 00088B1C  38 80 00 01 */	li r4, 1
/* 8008BBE0 00088B20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008BBE4 00088B24  38 A0 00 04 */	li r5, 4
/* 8008BBE8 00088B28  38 C0 00 3C */	li r6, 0x3c
/* 8008BBEC 00088B2C  38 E0 00 00 */	li r7, 0
/* 8008BBF0 00088B30  39 00 00 7D */	li r8, 0x7d
/* 8008BBF4 00088B34  48 05 91 29 */	bl GXSetTexCoordGen2
/* 8008BBF8 00088B38  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008BBFC 00088B3C  7C 08 03 A6 */	mtlr r0
/* 8008BC00 00088B40  38 21 00 10 */	addi r1, r1, 0x10
/* 8008BC04 00088B44  4E 80 00 20 */	blr 
.endfn JPAGenTexCrdMtxIdt__FP18JPAEmitterWorkData

.fn JPAGenTexCrdMtxAnm__FP18JPAEmitterWorkData, global
/* 8008BC08 00088B48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008BC0C 00088B4C  7C 08 02 A6 */	mflr r0
/* 8008BC10 00088B50  38 60 00 00 */	li r3, 0
/* 8008BC14 00088B54  38 80 00 01 */	li r4, 1
/* 8008BC18 00088B58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008BC1C 00088B5C  38 A0 00 04 */	li r5, 4
/* 8008BC20 00088B60  38 C0 00 1E */	li r6, 0x1e
/* 8008BC24 00088B64  38 E0 00 00 */	li r7, 0
/* 8008BC28 00088B68  39 00 00 7D */	li r8, 0x7d
/* 8008BC2C 00088B6C  48 05 90 F1 */	bl GXSetTexCoordGen2
/* 8008BC30 00088B70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008BC34 00088B74  7C 08 03 A6 */	mtlr r0
/* 8008BC38 00088B78  38 21 00 10 */	addi r1, r1, 0x10
/* 8008BC3C 00088B7C  4E 80 00 20 */	blr 
.endfn JPAGenTexCrdMtxAnm__FP18JPAEmitterWorkData

.fn JPAGenTexCrdMtxPrj__FP18JPAEmitterWorkData, global
/* 8008BC40 00088B80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008BC44 00088B84  7C 08 02 A6 */	mflr r0
/* 8008BC48 00088B88  38 60 00 00 */	li r3, 0
/* 8008BC4C 00088B8C  38 80 00 00 */	li r4, 0
/* 8008BC50 00088B90  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008BC54 00088B94  38 A0 00 00 */	li r5, 0
/* 8008BC58 00088B98  38 C0 00 1E */	li r6, 0x1e
/* 8008BC5C 00088B9C  38 E0 00 00 */	li r7, 0
/* 8008BC60 00088BA0  39 00 00 7D */	li r8, 0x7d
/* 8008BC64 00088BA4  48 05 90 B9 */	bl GXSetTexCoordGen2
/* 8008BC68 00088BA8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008BC6C 00088BAC  7C 08 03 A6 */	mtlr r0
/* 8008BC70 00088BB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8008BC74 00088BB4  4E 80 00 20 */	blr 
.endfn JPAGenTexCrdMtxPrj__FP18JPAEmitterWorkData

.fn JPAGenCalcTexCrdMtxAnm__FP18JPAEmitterWorkData, global
/* 8008BC78 00088BB8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8008BC7C 00088BBC  7C 08 02 A6 */	mflr r0
/* 8008BC80 00088BC0  90 01 00 74 */	stw r0, 0x74(r1)
/* 8008BC84 00088BC4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8008BC88 00088BC8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8008BC8C 00088BCC  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008BC90 00088BD0  3D 00 43 30 */	lis r8, 0x4330
/* 8008BC94 00088BD4  80 83 00 00 */	lwz r4, 0(r3)
/* 8008BC98 00088BD8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8008BC9C 00088BDC  81 25 00 1C */	lwz r9, 0x1c(r5)
/* 8008BCA0 00088BE0  38 E3 71 A0 */	addi r7, r3, sincosTable___5JMath@l
/* 8008BCA4 00088BE4  80 04 01 00 */	lwz r0, 0x100(r4)
/* 8008BCA8 00088BE8  38 61 00 08 */	addi r3, r1, 8
/* 8008BCAC 00088BEC  80 C9 00 00 */	lwz r6, 0(r9)
/* 8008BCB0 00088BF0  38 80 00 1E */	li r4, 0x1e
/* 8008BCB4 00088BF4  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8008BCB8 00088BF8  38 A0 00 01 */	li r5, 1
/* 8008BCBC 00088BFC  80 06 00 08 */	lwz r0, 8(r6)
/* 8008BCC0 00088C00  91 01 00 38 */	stw r8, 0x38(r1)
/* 8008BCC4 00088C04  54 06 3F FE */	rlwinm r6, r0, 7, 0x1f, 0x1f
/* 8008BCC8 00088C08  C8 62 87 F8 */	lfd f3, lbl_80516B58@sda21(r2)
/* 8008BCCC 00088C0C  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8008BCD0 00088C10  54 00 37 FE */	rlwinm r0, r0, 6, 0x1f, 0x1f
/* 8008BCD4 00088C14  81 29 00 04 */	lwz r9, 4(r9)
/* 8008BCD8 00088C18  EC C0 18 28 */	fsubs f6, f0, f3
/* 8008BCDC 00088C1C  90 C1 00 44 */	stw r6, 0x44(r1)
/* 8008BCE0 00088C20  C0 29 00 24 */	lfs f1, 0x24(r9)
/* 8008BCE4 00088C24  91 01 00 40 */	stw r8, 0x40(r1)
/* 8008BCE8 00088C28  C0 09 00 10 */	lfs f0, 0x10(r9)
/* 8008BCEC 00088C2C  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 8008BCF0 00088C30  EC 06 00 7A */	fmadds f0, f6, f1, f0
/* 8008BCF4 00088C34  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8008BCF8 00088C38  EC 42 18 28 */	fsubs f2, f2, f3
/* 8008BCFC 00088C3C  C0 E2 87 EC */	lfs f7, lbl_80516B4C@sda21(r2)
/* 8008BD00 00088C40  91 01 00 48 */	stw r8, 0x48(r1)
/* 8008BD04 00088C44  FC 00 00 1E */	fctiwz f0, f0
/* 8008BD08 00088C48  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 8008BD0C 00088C4C  EC 47 10 2A */	fadds f2, f7, f2
/* 8008BD10 00088C50  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008BD14 00088C54  EC 21 18 28 */	fsubs f1, f1, f3
/* 8008BD18 00088C58  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8008BD1C 00088C5C  ED 65 00 B2 */	fmuls f11, f5, f2
/* 8008BD20 00088C60  C0 69 00 14 */	lfs f3, 0x14(r9)
/* 8008BD24 00088C64  C0 49 00 00 */	lfs f2, 0(r9)
/* 8008BD28 00088C68  EC 87 08 2A */	fadds f4, f7, f1
/* 8008BD2C 00088C6C  ED 06 10 FA */	fmadds f8, f6, f3, f2
/* 8008BD30 00088C70  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008BD34 00088C74  C0 29 00 18 */	lfs f1, 0x18(r9)
/* 8008BD38 00088C78  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008BD3C 00088C7C  ED 85 01 32 */	fmuls f12, f5, f4
/* 8008BD40 00088C80  C0 09 00 04 */	lfs f0, 4(r9)
/* 8008BD44 00088C84  7C C7 02 14 */	add r6, r7, r0
/* 8008BD48 00088C88  ED 4B 40 2A */	fadds f10, f11, f8
/* 8008BD4C 00088C8C  EC 86 00 7A */	fmadds f4, f6, f1, f0
/* 8008BD50 00088C90  C0 69 00 1C */	lfs f3, 0x1c(r9)
/* 8008BD54 00088C94  C0 49 00 08 */	lfs f2, 8(r9)
/* 8008BD58 00088C98  C0 29 00 20 */	lfs f1, 0x20(r9)
/* 8008BD5C 00088C9C  C0 09 00 0C */	lfs f0, 0xc(r9)
/* 8008BD60 00088CA0  ED A6 10 FA */	fmadds f13, f6, f3, f2
/* 8008BD64 00088CA4  C1 26 00 04 */	lfs f9, 4(r6)
/* 8008BD68 00088CA8  EC 6C 20 2A */	fadds f3, f12, f4
/* 8008BD6C 00088CAC  EF E6 00 7A */	fmadds f31, f6, f1, f0
/* 8008BD70 00088CB0  7D 07 04 2E */	lfsx f8, r7, r0
/* 8008BD74 00088CB4  C0 A2 87 F0 */	lfs f5, lbl_80516B50@sda21(r2)
/* 8008BD78 00088CB8  EC 29 02 B2 */	fmuls f1, f9, f10
/* 8008BD7C 00088CBC  D0 E1 00 30 */	stfs f7, 0x30(r1)
/* 8008BD80 00088CC0  EC 09 00 F2 */	fmuls f0, f9, f3
/* 8008BD84 00088CC4  EC 8D 02 72 */	fmuls f4, f13, f9
/* 8008BD88 00088CC8  D0 A1 00 10 */	stfs f5, 0x10(r1)
/* 8008BD8C 00088CCC  EC 28 08 F8 */	fmsubs f1, f8, f3, f1
/* 8008BD90 00088CD0  FC 40 68 50 */	fneg f2, f13
/* 8008BD94 00088CD4  D0 A1 00 20 */	stfs f5, 0x20(r1)
/* 8008BD98 00088CD8  EC 7F 02 32 */	fmuls f3, f31, f8
/* 8008BD9C 00088CDC  D0 81 00 08 */	stfs f4, 8(r1)
/* 8008BDA0 00088CE0  EC 8D 58 7A */	fmadds f4, f13, f1, f11
/* 8008BDA4 00088CE4  EC C2 02 32 */	fmuls f6, f2, f8
/* 8008BDA8 00088CE8  EC 5F 02 72 */	fmuls f2, f31, f9
/* 8008BDAC 00088CEC  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 8008BDB0 00088CF0  FC 20 F8 50 */	fneg f1, f31
/* 8008BDB4 00088CF4  EC 08 02 BA */	fmadds f0, f8, f10, f0
/* 8008BDB8 00088CF8  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 8008BDBC 00088CFC  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 8008BDC0 00088D00  EC 01 60 3A */	fmadds f0, f1, f0, f12
/* 8008BDC4 00088D04  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 8008BDC8 00088D08  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8008BDCC 00088D0C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008BDD0 00088D10  D0 A1 00 2C */	stfs f5, 0x2c(r1)
/* 8008BDD4 00088D14  D0 A1 00 34 */	stfs f5, 0x34(r1)
/* 8008BDD8 00088D18  48 05 D8 75 */	bl GXLoadTexMtxImm
/* 8008BDDC 00088D1C  38 60 00 00 */	li r3, 0
/* 8008BDE0 00088D20  38 80 00 01 */	li r4, 1
/* 8008BDE4 00088D24  38 A0 00 04 */	li r5, 4
/* 8008BDE8 00088D28  38 C0 00 1E */	li r6, 0x1e
/* 8008BDEC 00088D2C  38 E0 00 00 */	li r7, 0
/* 8008BDF0 00088D30  39 00 00 7D */	li r8, 0x7d
/* 8008BDF4 00088D34  48 05 8F 29 */	bl GXSetTexCoordGen2
/* 8008BDF8 00088D38  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8008BDFC 00088D3C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8008BE00 00088D40  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8008BE04 00088D44  7C 08 03 A6 */	mtlr r0
/* 8008BE08 00088D48  38 21 00 70 */	addi r1, r1, 0x70
/* 8008BE0C 00088D4C  4E 80 00 20 */	blr 
.endfn JPAGenCalcTexCrdMtxAnm__FP18JPAEmitterWorkData

.fn JPALoadCalcTexCrdMtxAnm__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008BE10 00088D50  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8008BE14 00088D54  7C 08 02 A6 */	mflr r0
/* 8008BE18 00088D58  3D 00 43 30 */	lis r8, 0x4330
/* 8008BE1C 00088D5C  C8 22 87 E0 */	lfd f1, lbl_80516B40@sda21(r2)
/* 8008BE20 00088D60  90 01 00 64 */	stw r0, 0x64(r1)
/* 8008BE24 00088D64  C8 62 87 F8 */	lfd f3, lbl_80516B58@sda21(r2)
/* 8008BE28 00088D68  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008BE2C 00088D6C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8008BE30 00088D70  A8 04 00 80 */	lha r0, 0x80(r4)
/* 8008BE34 00088D74  38 E3 71 A0 */	addi r7, r3, sincosTable___5JMath@l
/* 8008BE38 00088D78  80 C5 00 1C */	lwz r6, 0x1c(r5)
/* 8008BE3C 00088D7C  38 61 00 08 */	addi r3, r1, 8
/* 8008BE40 00088D80  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8008BE44 00088D84  91 01 00 38 */	stw r8, 0x38(r1)
/* 8008BE48 00088D88  80 A6 00 00 */	lwz r5, 0(r6)
/* 8008BE4C 00088D8C  38 80 00 1E */	li r4, 0x1e
/* 8008BE50 00088D90  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8008BE54 00088D94  80 05 00 08 */	lwz r0, 8(r5)
/* 8008BE58 00088D98  38 A0 00 01 */	li r5, 1
/* 8008BE5C 00088D9C  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8008BE60 00088DA0  81 26 00 04 */	lwz r9, 4(r6)
/* 8008BE64 00088DA4  54 06 3F FE */	rlwinm r6, r0, 7, 0x1f, 0x1f
/* 8008BE68 00088DA8  ED 40 08 28 */	fsubs f10, f0, f1
/* 8008BE6C 00088DAC  54 00 37 FE */	rlwinm r0, r0, 6, 0x1f, 0x1f
/* 8008BE70 00088DB0  90 C1 00 44 */	stw r6, 0x44(r1)
/* 8008BE74 00088DB4  C0 29 00 24 */	lfs f1, 0x24(r9)
/* 8008BE78 00088DB8  91 01 00 40 */	stw r8, 0x40(r1)
/* 8008BE7C 00088DBC  C0 09 00 10 */	lfs f0, 0x10(r9)
/* 8008BE80 00088DC0  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 8008BE84 00088DC4  EC 0A 00 7A */	fmadds f0, f10, f1, f0
/* 8008BE88 00088DC8  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8008BE8C 00088DCC  EC 42 18 28 */	fsubs f2, f2, f3
/* 8008BE90 00088DD0  C0 C2 87 EC */	lfs f6, lbl_80516B4C@sda21(r2)
/* 8008BE94 00088DD4  91 01 00 48 */	stw r8, 0x48(r1)
/* 8008BE98 00088DD8  FC 00 00 1E */	fctiwz f0, f0
/* 8008BE9C 00088DDC  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 8008BEA0 00088DE0  EC A6 10 2A */	fadds f5, f6, f2
/* 8008BEA4 00088DE4  C0 E2 87 E8 */	lfs f7, lbl_80516B48@sda21(r2)
/* 8008BEA8 00088DE8  EC 21 18 28 */	fsubs f1, f1, f3
/* 8008BEAC 00088DEC  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8008BEB0 00088DF0  C0 09 00 00 */	lfs f0, 0(r9)
/* 8008BEB4 00088DF4  ED 67 01 72 */	fmuls f11, f7, f5
/* 8008BEB8 00088DF8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008BEBC 00088DFC  EC 86 08 2A */	fadds f4, f6, f1
/* 8008BEC0 00088E00  C0 29 00 14 */	lfs f1, 0x14(r9)
/* 8008BEC4 00088E04  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008BEC8 00088E08  7C C7 02 14 */	add r6, r7, r0
/* 8008BECC 00088E0C  C0 69 00 18 */	lfs f3, 0x18(r9)
/* 8008BED0 00088E10  EC AA 00 7A */	fmadds f5, f10, f1, f0
/* 8008BED4 00088E14  ED 87 01 32 */	fmuls f12, f7, f4
/* 8008BED8 00088E18  C0 49 00 04 */	lfs f2, 4(r9)
/* 8008BEDC 00088E1C  C0 29 00 1C */	lfs f1, 0x1c(r9)
/* 8008BEE0 00088E20  C0 09 00 08 */	lfs f0, 8(r9)
/* 8008BEE4 00088E24  EC 4A 10 FA */	fmadds f2, f10, f3, f2
/* 8008BEE8 00088E28  ED 2B 28 2A */	fadds f9, f11, f5
/* 8008BEEC 00088E2C  ED AA 00 7A */	fmadds f13, f10, f1, f0
/* 8008BEF0 00088E30  C1 06 00 04 */	lfs f8, 4(r6)
/* 8008BEF4 00088E34  EC AC 10 2A */	fadds f5, f12, f2
/* 8008BEF8 00088E38  C0 29 00 20 */	lfs f1, 0x20(r9)
/* 8008BEFC 00088E3C  C0 09 00 0C */	lfs f0, 0xc(r9)
/* 8008BF00 00088E40  C0 82 87 F0 */	lfs f4, lbl_80516B50@sda21(r2)
/* 8008BF04 00088E44  ED 4A 00 7A */	fmadds f10, f10, f1, f0
/* 8008BF08 00088E48  7C E7 04 2E */	lfsx f7, r7, r0
/* 8008BF0C 00088E4C  EC 4D 02 32 */	fmuls f2, f13, f8
/* 8008BF10 00088E50  D0 81 00 10 */	stfs f4, 0x10(r1)
/* 8008BF14 00088E54  EC 08 01 72 */	fmuls f0, f8, f5
/* 8008BF18 00088E58  EC 28 02 72 */	fmuls f1, f8, f9
/* 8008BF1C 00088E5C  D0 41 00 08 */	stfs f2, 8(r1)
/* 8008BF20 00088E60  FC 60 68 50 */	fneg f3, f13
/* 8008BF24 00088E64  EC 07 02 7A */	fmadds f0, f7, f9, f0
/* 8008BF28 00088E68  EC 47 09 78 */	fmsubs f2, f7, f5, f1
/* 8008BF2C 00088E6C  D0 81 00 20 */	stfs f4, 0x20(r1)
/* 8008BF30 00088E70  EC A3 01 F2 */	fmuls f5, f3, f7
/* 8008BF34 00088E74  EC 2A 01 F2 */	fmuls f1, f10, f7
/* 8008BF38 00088E78  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8008BF3C 00088E7C  EC 6D 58 BA */	fmadds f3, f13, f2, f11
/* 8008BF40 00088E80  EC 4A 02 32 */	fmuls f2, f10, f8
/* 8008BF44 00088E84  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 8008BF48 00088E88  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8008BF4C 00088E8C  FC 20 50 50 */	fneg f1, f10
/* 8008BF50 00088E90  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 8008BF54 00088E94  EC 01 60 3A */	fmadds f0, f1, f0, f12
/* 8008BF58 00088E98  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8008BF5C 00088E9C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008BF60 00088EA0  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8008BF64 00088EA4  D0 C1 00 30 */	stfs f6, 0x30(r1)
/* 8008BF68 00088EA8  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8008BF6C 00088EAC  48 05 D6 E1 */	bl GXLoadTexMtxImm
/* 8008BF70 00088EB0  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8008BF74 00088EB4  7C 08 03 A6 */	mtlr r0
/* 8008BF78 00088EB8  38 21 00 60 */	addi r1, r1, 0x60
/* 8008BF7C 00088EBC  4E 80 00 20 */	blr 
.endfn JPALoadCalcTexCrdMtxAnm__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPALoadTex__FP18JPAEmitterWorkData, global
/* 8008BF80 00088EC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008BF84 00088EC4  7C 08 02 A6 */	mflr r0
/* 8008BF88 00088EC8  38 80 00 00 */	li r4, 0
/* 8008BF8C 00088ECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008BF90 00088ED0  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008BF94 00088ED4  80 C3 00 08 */	lwz r6, 8(r3)
/* 8008BF98 00088ED8  80 65 00 1C */	lwz r3, 0x1c(r5)
/* 8008BF9C 00088EDC  80 A5 00 38 */	lwz r5, 0x38(r5)
/* 8008BFA0 00088EE0  80 63 00 00 */	lwz r3, 0(r3)
/* 8008BFA4 00088EE4  80 C6 00 08 */	lwz r6, 8(r6)
/* 8008BFA8 00088EE8  88 03 00 20 */	lbz r0, 0x20(r3)
/* 8008BFAC 00088EEC  54 00 08 3C */	slwi r0, r0, 1
/* 8008BFB0 00088EF0  7C 05 02 2E */	lhzx r0, r5, r0
/* 8008BFB4 00088EF4  54 00 10 3A */	slwi r0, r0, 2
/* 8008BFB8 00088EF8  7C 66 00 2E */	lwzx r3, r6, r0
/* 8008BFBC 00088EFC  38 63 00 04 */	addi r3, r3, 4
/* 8008BFC0 00088F00  4B FA 76 71 */	bl load__10JUTTextureF11_GXTexMapID
/* 8008BFC4 00088F04  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008BFC8 00088F08  7C 08 03 A6 */	mtlr r0
/* 8008BFCC 00088F0C  38 21 00 10 */	addi r1, r1, 0x10
/* 8008BFD0 00088F10  4E 80 00 20 */	blr 
.endfn JPALoadTex__FP18JPAEmitterWorkData

.fn JPALoadTexAnm__FP18JPAEmitterWorkData, global
/* 8008BFD4 00088F14  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008BFD8 00088F18  7C 08 02 A6 */	mflr r0
/* 8008BFDC 00088F1C  38 80 00 00 */	li r4, 0
/* 8008BFE0 00088F20  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008BFE4 00088F24  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008BFE8 00088F28  80 C3 00 04 */	lwz r6, 4(r3)
/* 8008BFEC 00088F2C  88 05 01 11 */	lbz r0, 0x111(r5)
/* 8008BFF0 00088F30  80 A6 00 38 */	lwz r5, 0x38(r6)
/* 8008BFF4 00088F34  54 00 08 3C */	slwi r0, r0, 1
/* 8008BFF8 00088F38  80 63 00 08 */	lwz r3, 8(r3)
/* 8008BFFC 00088F3C  7C 05 02 2E */	lhzx r0, r5, r0
/* 8008C000 00088F40  80 63 00 08 */	lwz r3, 8(r3)
/* 8008C004 00088F44  54 00 10 3A */	slwi r0, r0, 2
/* 8008C008 00088F48  7C 63 00 2E */	lwzx r3, r3, r0
/* 8008C00C 00088F4C  38 63 00 04 */	addi r3, r3, 4
/* 8008C010 00088F50  4B FA 76 21 */	bl load__10JUTTextureF11_GXTexMapID
/* 8008C014 00088F54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008C018 00088F58  7C 08 03 A6 */	mtlr r0
/* 8008C01C 00088F5C  38 21 00 10 */	addi r1, r1, 0x10
/* 8008C020 00088F60  4E 80 00 20 */	blr 
.endfn JPALoadTexAnm__FP18JPAEmitterWorkData

.fn JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C024 00088F64  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008C028 00088F68  7C 08 02 A6 */	mflr r0
/* 8008C02C 00088F6C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008C030 00088F70  80 A3 00 04 */	lwz r5, 4(r3)
/* 8008C034 00088F74  88 04 00 94 */	lbz r0, 0x94(r4)
/* 8008C038 00088F78  38 80 00 00 */	li r4, 0
/* 8008C03C 00088F7C  80 A5 00 38 */	lwz r5, 0x38(r5)
/* 8008C040 00088F80  54 00 08 3C */	slwi r0, r0, 1
/* 8008C044 00088F84  80 63 00 08 */	lwz r3, 8(r3)
/* 8008C048 00088F88  7C 05 02 2E */	lhzx r0, r5, r0
/* 8008C04C 00088F8C  80 63 00 08 */	lwz r3, 8(r3)
/* 8008C050 00088F90  54 00 10 3A */	slwi r0, r0, 2
/* 8008C054 00088F94  7C 63 00 2E */	lwzx r3, r3, r0
/* 8008C058 00088F98  38 63 00 04 */	addi r3, r3, 4
/* 8008C05C 00088F9C  4B FA 75 D5 */	bl load__10JUTTextureF11_GXTexMapID
/* 8008C060 00088FA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008C064 00088FA4  7C 08 03 A6 */	mtlr r0
/* 8008C068 00088FA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8008C06C 00088FAC  4E 80 00 20 */	blr 
.endfn JPALoadTexAnm__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcTexIdxNormal__FP18JPAEmitterWorkData, global
/* 8008C070 00088FB0  80 83 00 04 */	lwz r4, 4(r3)
/* 8008C074 00088FB4  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008C078 00088FB8  80 C4 00 1C */	lwz r6, 0x1c(r4)
/* 8008C07C 00088FBC  80 85 01 00 */	lwz r4, 0x100(r5)
/* 8008C080 00088FC0  80 66 00 00 */	lwz r3, 0(r6)
/* 8008C084 00088FC4  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 8008C088 00088FC8  38 03 FF FF */	addi r0, r3, -1
/* 8008C08C 00088FCC  7C 00 20 40 */	cmplw r0, r4
/* 8008C090 00088FD0  40 80 00 08 */	bge .L_8008C098
/* 8008C094 00088FD4  7C 04 03 78 */	mr r4, r0
.L_8008C098:
/* 8008C098 00088FD8  80 66 00 08 */	lwz r3, 8(r6)
/* 8008C09C 00088FDC  54 80 06 3E */	clrlwi r0, r4, 0x18
/* 8008C0A0 00088FE0  7C 03 00 AE */	lbzx r0, r3, r0
/* 8008C0A4 00088FE4  98 05 01 11 */	stb r0, 0x111(r5)
/* 8008C0A8 00088FE8  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxNormal__FP18JPAEmitterWorkData

.fn JPACalcTexIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C0AC 00088FEC  80 63 00 04 */	lwz r3, 4(r3)
/* 8008C0B0 00088FF0  A8 A4 00 80 */	lha r5, 0x80(r4)
/* 8008C0B4 00088FF4  80 C3 00 1C */	lwz r6, 0x1c(r3)
/* 8008C0B8 00088FF8  80 66 00 00 */	lwz r3, 0(r6)
/* 8008C0BC 00088FFC  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 8008C0C0 00089000  38 03 FF FF */	addi r0, r3, -1
/* 8008C0C4 00089004  7C 00 28 00 */	cmpw r0, r5
/* 8008C0C8 00089008  40 80 00 08 */	bge .L_8008C0D0
/* 8008C0CC 0008900C  7C 05 03 78 */	mr r5, r0
.L_8008C0D0:
/* 8008C0D0 00089010  80 66 00 08 */	lwz r3, 8(r6)
/* 8008C0D4 00089014  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 8008C0D8 00089018  7C 03 00 AE */	lbzx r0, r3, r0
/* 8008C0DC 0008901C  98 04 00 94 */	stb r0, 0x94(r4)
/* 8008C0E0 00089020  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxNormal__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcTexIdxRepeat__FP18JPAEmitterWorkData, global
/* 8008C0E4 00089024  80 83 00 04 */	lwz r4, 4(r3)
/* 8008C0E8 00089028  80 C3 00 00 */	lwz r6, 0(r3)
/* 8008C0EC 0008902C  80 A4 00 1C */	lwz r5, 0x1c(r4)
/* 8008C0F0 00089030  80 86 01 00 */	lwz r4, 0x100(r6)
/* 8008C0F4 00089034  80 65 00 00 */	lwz r3, 0(r5)
/* 8008C0F8 00089038  80 A5 00 08 */	lwz r5, 8(r5)
/* 8008C0FC 0008903C  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 8008C100 00089040  7C 04 1B 96 */	divwu r0, r4, r3
/* 8008C104 00089044  7C 00 19 D6 */	mullw r0, r0, r3
/* 8008C108 00089048  7C 00 20 50 */	subf r0, r0, r4
/* 8008C10C 0008904C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8008C110 00089050  7C 05 00 AE */	lbzx r0, r5, r0
/* 8008C114 00089054  98 06 01 11 */	stb r0, 0x111(r6)
/* 8008C118 00089058  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxRepeat__FP18JPAEmitterWorkData

.fn JPACalcTexIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C11C 0008905C  80 63 00 04 */	lwz r3, 4(r3)
/* 8008C120 00089060  88 E4 00 95 */	lbz r7, 0x95(r4)
/* 8008C124 00089064  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 8008C128 00089068  A8 04 00 80 */	lha r0, 0x80(r4)
/* 8008C12C 0008906C  80 65 00 00 */	lwz r3, 0(r5)
/* 8008C130 00089070  80 C5 00 08 */	lwz r6, 8(r5)
/* 8008C134 00089074  88 A3 00 30 */	lbz r5, 0x30(r3)
/* 8008C138 00089078  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 8008C13C 0008907C  7C E5 28 38 */	and r5, r7, r5
/* 8008C140 00089080  7C A0 2A 14 */	add r5, r0, r5
/* 8008C144 00089084  7C 05 1B D6 */	divw r0, r5, r3
/* 8008C148 00089088  7C 00 19 D6 */	mullw r0, r0, r3
/* 8008C14C 0008908C  7C 00 28 50 */	subf r0, r0, r5
/* 8008C150 00089090  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8008C154 00089094  7C 06 00 AE */	lbzx r0, r6, r0
/* 8008C158 00089098  98 04 00 94 */	stb r0, 0x94(r4)
/* 8008C15C 0008909C  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxRepeat__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcTexIdxReverse__FP18JPAEmitterWorkData, global
/* 8008C160 000890A0  80 83 00 04 */	lwz r4, 4(r3)
/* 8008C164 000890A4  80 A3 00 00 */	lwz r5, 0(r3)
/* 8008C168 000890A8  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8008C16C 000890AC  80 C5 01 00 */	lwz r6, 0x100(r5)
/* 8008C170 000890B0  80 64 00 00 */	lwz r3, 0(r4)
/* 8008C174 000890B4  80 84 00 08 */	lwz r4, 8(r4)
/* 8008C178 000890B8  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 8008C17C 000890BC  38 E3 FF FF */	addi r7, r3, -1
/* 8008C180 000890C0  7C 66 3B D6 */	divw r3, r6, r7
/* 8008C184 000890C4  7C 03 39 D6 */	mullw r0, r3, r7
/* 8008C188 000890C8  54 63 07 FE */	clrlwi r3, r3, 0x1f
/* 8008C18C 000890CC  7C C0 30 50 */	subf r6, r0, r6
/* 8008C190 000890D0  54 C0 08 3C */	slwi r0, r6, 1
/* 8008C194 000890D4  7C 00 38 50 */	subf r0, r0, r7
/* 8008C198 000890D8  7C 03 01 D6 */	mullw r0, r3, r0
/* 8008C19C 000890DC  7C 06 02 14 */	add r0, r6, r0
/* 8008C1A0 000890E0  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8008C1A4 000890E4  7C 04 00 AE */	lbzx r0, r4, r0
/* 8008C1A8 000890E8  98 05 01 11 */	stb r0, 0x111(r5)
/* 8008C1AC 000890EC  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxReverse__FP18JPAEmitterWorkData

.fn JPACalcTexIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C1B0 000890F0  80 63 00 04 */	lwz r3, 4(r3)
/* 8008C1B4 000890F4  88 E4 00 95 */	lbz r7, 0x95(r4)
/* 8008C1B8 000890F8  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 8008C1BC 000890FC  A8 04 00 80 */	lha r0, 0x80(r4)
/* 8008C1C0 00089100  80 65 00 00 */	lwz r3, 0(r5)
/* 8008C1C4 00089104  80 A5 00 08 */	lwz r5, 8(r5)
/* 8008C1C8 00089108  88 C3 00 30 */	lbz r6, 0x30(r3)
/* 8008C1CC 0008910C  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 8008C1D0 00089110  7C E6 30 38 */	and r6, r7, r6
/* 8008C1D4 00089114  7C C0 32 14 */	add r6, r0, r6
/* 8008C1D8 00089118  38 E3 FF FF */	addi r7, r3, -1
/* 8008C1DC 0008911C  7C 66 3B D6 */	divw r3, r6, r7
/* 8008C1E0 00089120  7C 03 39 D6 */	mullw r0, r3, r7
/* 8008C1E4 00089124  54 63 07 FE */	clrlwi r3, r3, 0x1f
/* 8008C1E8 00089128  7C C0 30 50 */	subf r6, r0, r6
/* 8008C1EC 0008912C  54 C0 08 3C */	slwi r0, r6, 1
/* 8008C1F0 00089130  7C 00 38 50 */	subf r0, r0, r7
/* 8008C1F4 00089134  7C 03 01 D6 */	mullw r0, r3, r0
/* 8008C1F8 00089138  7C 06 02 14 */	add r0, r6, r0
/* 8008C1FC 0008913C  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8008C200 00089140  7C 05 00 AE */	lbzx r0, r5, r0
/* 8008C204 00089144  98 04 00 94 */	stb r0, 0x94(r4)
/* 8008C208 00089148  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxReverse__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcTexIdxMerge__FP18JPAEmitterWorkData, global
/* 8008C20C 0008914C  80 83 00 04 */	lwz r4, 4(r3)
/* 8008C210 00089150  80 63 00 00 */	lwz r3, 0(r3)
/* 8008C214 00089154  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8008C218 00089158  80 84 00 00 */	lwz r4, 0(r4)
/* 8008C21C 0008915C  88 04 00 20 */	lbz r0, 0x20(r4)
/* 8008C220 00089160  98 03 01 11 */	stb r0, 0x111(r3)
/* 8008C224 00089164  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxMerge__FP18JPAEmitterWorkData

.fn JPACalcTexIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C228 00089168  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8008C22C 0008916C  3C 00 43 30 */	lis r0, 0x4330
/* 8008C230 00089170  C8 42 87 E0 */	lfd f2, lbl_80516B40@sda21(r2)
/* 8008C234 00089174  80 63 00 04 */	lwz r3, 4(r3)
/* 8008C238 00089178  90 01 00 08 */	stw r0, 8(r1)
/* 8008C23C 0008917C  80 E3 00 1C */	lwz r7, 0x1c(r3)
/* 8008C240 00089180  C0 04 00 84 */	lfs f0, 0x84(r4)
/* 8008C244 00089184  80 C7 00 00 */	lwz r6, 0(r7)
/* 8008C248 00089188  88 64 00 95 */	lbz r3, 0x95(r4)
/* 8008C24C 0008918C  89 06 00 1F */	lbz r8, 0x1f(r6)
/* 8008C250 00089190  88 06 00 30 */	lbz r0, 0x30(r6)
/* 8008C254 00089194  6D 05 80 00 */	xoris r5, r8, 0x8000
/* 8008C258 00089198  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8008C25C 0008919C  7C 60 00 38 */	and r0, r3, r0
/* 8008C260 000891A0  80 A7 00 08 */	lwz r5, 8(r7)
/* 8008C264 000891A4  C8 21 00 08 */	lfd f1, 8(r1)
/* 8008C268 000891A8  EC 21 10 28 */	fsubs f1, f1, f2
/* 8008C26C 000891AC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008C270 000891B0  FC 00 00 1E */	fctiwz f0, f0
/* 8008C274 000891B4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8008C278 000891B8  80 61 00 14 */	lwz r3, 0x14(r1)
/* 8008C27C 000891BC  7C 63 02 14 */	add r3, r3, r0
/* 8008C280 000891C0  7C 03 43 D6 */	divw r0, r3, r8
/* 8008C284 000891C4  7C 00 41 D6 */	mullw r0, r0, r8
/* 8008C288 000891C8  7C 00 18 50 */	subf r0, r0, r3
/* 8008C28C 000891CC  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8008C290 000891D0  7C 05 00 AE */	lbzx r0, r5, r0
/* 8008C294 000891D4  98 04 00 94 */	stb r0, 0x94(r4)
/* 8008C298 000891D8  38 21 00 20 */	addi r1, r1, 0x20
/* 8008C29C 000891DC  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxMerge__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPACalcTexIdxRandom__FP18JPAEmitterWorkData, global
/* 8008C2A0 000891E0  80 83 00 04 */	lwz r4, 4(r3)
/* 8008C2A4 000891E4  80 63 00 00 */	lwz r3, 0(r3)
/* 8008C2A8 000891E8  80 84 00 1C */	lwz r4, 0x1c(r4)
/* 8008C2AC 000891EC  80 84 00 00 */	lwz r4, 0(r4)
/* 8008C2B0 000891F0  88 04 00 20 */	lbz r0, 0x20(r4)
/* 8008C2B4 000891F4  98 03 01 11 */	stb r0, 0x111(r3)
/* 8008C2B8 000891F8  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxRandom__FP18JPAEmitterWorkData

.fn JPACalcTexIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C2BC 000891FC  80 63 00 04 */	lwz r3, 4(r3)
/* 8008C2C0 00089200  88 C4 00 95 */	lbz r6, 0x95(r4)
/* 8008C2C4 00089204  80 A3 00 1C */	lwz r5, 0x1c(r3)
/* 8008C2C8 00089208  80 65 00 00 */	lwz r3, 0(r5)
/* 8008C2CC 0008920C  80 A5 00 08 */	lwz r5, 8(r5)
/* 8008C2D0 00089210  88 03 00 30 */	lbz r0, 0x30(r3)
/* 8008C2D4 00089214  88 63 00 1F */	lbz r3, 0x1f(r3)
/* 8008C2D8 00089218  7C C6 00 38 */	and r6, r6, r0
/* 8008C2DC 0008921C  7C 06 1B D6 */	divw r0, r6, r3
/* 8008C2E0 00089220  7C 00 19 D6 */	mullw r0, r0, r3
/* 8008C2E4 00089224  7C 00 30 50 */	subf r0, r0, r6
/* 8008C2E8 00089228  54 00 06 3E */	clrlwi r0, r0, 0x18
/* 8008C2EC 0008922C  7C 05 00 AE */	lbzx r0, r5, r0
/* 8008C2F0 00089230  98 04 00 94 */	stb r0, 0x94(r4)
/* 8008C2F4 00089234  4E 80 00 20 */	blr 
.endfn JPACalcTexIdxRandom__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPALoadPosMtxCam__FP18JPAEmitterWorkData, global
/* 8008C2F8 00089238  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008C2FC 0008923C  7C 08 02 A6 */	mflr r0
/* 8008C300 00089240  38 80 00 00 */	li r4, 0
/* 8008C304 00089244  38 63 01 84 */	addi r3, r3, 0x184
/* 8008C308 00089248  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008C30C 0008924C  48 05 D2 6D */	bl GXLoadPosMtxImm
/* 8008C310 00089250  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008C314 00089254  7C 08 03 A6 */	mtlr r0
/* 8008C318 00089258  38 21 00 10 */	addi r1, r1, 0x10
/* 8008C31C 0008925C  4E 80 00 20 */	blr 
.endfn JPALoadPosMtxCam__FP18JPAEmitterWorkData

.fn noLoadPrj__FPC18JPAEmitterWorkDataPA4_Cf, local
/* 8008C320 00089260  4E 80 00 20 */	blr 
.endfn noLoadPrj__FPC18JPAEmitterWorkDataPA4_Cf

.fn loadPrj__FPC18JPAEmitterWorkDataPA4_Cf, local
/* 8008C324 00089264  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8008C328 00089268  7C 08 02 A6 */	mflr r0
/* 8008C32C 0008926C  38 63 01 B4 */	addi r3, r3, 0x1b4
/* 8008C330 00089270  90 01 00 44 */	stw r0, 0x44(r1)
/* 8008C334 00089274  38 A1 00 08 */	addi r5, r1, 8
/* 8008C338 00089278  48 05 DF C9 */	bl PSMTXConcat
/* 8008C33C 0008927C  38 61 00 08 */	addi r3, r1, 8
/* 8008C340 00089280  38 80 00 1E */	li r4, 0x1e
/* 8008C344 00089284  38 A0 00 00 */	li r5, 0
/* 8008C348 00089288  48 05 D3 05 */	bl GXLoadTexMtxImm
/* 8008C34C 0008928C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8008C350 00089290  7C 08 03 A6 */	mtlr r0
/* 8008C354 00089294  38 21 00 40 */	addi r1, r1, 0x40
/* 8008C358 00089298  4E 80 00 20 */	blr 
.endfn loadPrj__FPC18JPAEmitterWorkDataPA4_Cf

.fn loadPrjAnm__FPC18JPAEmitterWorkDataPA4_Cf, local
/* 8008C35C 0008929C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8008C360 000892A0  7C 08 02 A6 */	mflr r0
/* 8008C364 000892A4  90 01 00 74 */	stw r0, 0x74(r1)
/* 8008C368 000892A8  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8008C36C 000892AC  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8008C370 000892B0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8008C374 000892B4  80 E3 00 04 */	lwz r7, 4(r3)
/* 8008C378 000892B8  3D 00 43 30 */	lis r8, 0x4330
/* 8008C37C 000892BC  80 C3 00 00 */	lwz r6, 0(r3)
/* 8008C380 000892C0  7C 6A 1B 78 */	mr r10, r3
/* 8008C384 000892C4  81 27 00 1C */	lwz r9, 0x1c(r7)
/* 8008C388 000892C8  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8008C38C 000892CC  80 06 01 00 */	lwz r0, 0x100(r6)
/* 8008C390 000892D0  7C 9F 23 78 */	mr r31, r4
/* 8008C394 000892D4  80 C9 00 00 */	lwz r6, 0(r9)
/* 8008C398 000892D8  38 E5 71 A0 */	addi r7, r5, sincosTable___5JMath@l
/* 8008C39C 000892DC  90 01 00 3C */	stw r0, 0x3c(r1)
/* 8008C3A0 000892E0  38 61 00 08 */	addi r3, r1, 8
/* 8008C3A4 000892E4  80 06 00 08 */	lwz r0, 8(r6)
/* 8008C3A8 000892E8  7C 65 1B 78 */	mr r5, r3
/* 8008C3AC 000892EC  91 01 00 38 */	stw r8, 0x38(r1)
/* 8008C3B0 000892F0  38 8A 01 B4 */	addi r4, r10, 0x1b4
/* 8008C3B4 000892F4  54 06 3F FE */	rlwinm r6, r0, 7, 0x1f, 0x1f
/* 8008C3B8 000892F8  C8 62 87 F8 */	lfd f3, lbl_80516B58@sda21(r2)
/* 8008C3BC 000892FC  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 8008C3C0 00089300  54 00 37 FE */	rlwinm r0, r0, 6, 0x1f, 0x1f
/* 8008C3C4 00089304  81 29 00 04 */	lwz r9, 4(r9)
/* 8008C3C8 00089308  EC C0 18 28 */	fsubs f6, f0, f3
/* 8008C3CC 0008930C  90 C1 00 44 */	stw r6, 0x44(r1)
/* 8008C3D0 00089310  C0 29 00 24 */	lfs f1, 0x24(r9)
/* 8008C3D4 00089314  91 01 00 40 */	stw r8, 0x40(r1)
/* 8008C3D8 00089318  C0 09 00 10 */	lfs f0, 0x10(r9)
/* 8008C3DC 0008931C  C8 41 00 40 */	lfd f2, 0x40(r1)
/* 8008C3E0 00089320  EC 06 00 7A */	fmadds f0, f6, f1, f0
/* 8008C3E4 00089324  90 01 00 4C */	stw r0, 0x4c(r1)
/* 8008C3E8 00089328  EC 42 18 28 */	fsubs f2, f2, f3
/* 8008C3EC 0008932C  C0 E2 87 EC */	lfs f7, lbl_80516B4C@sda21(r2)
/* 8008C3F0 00089330  91 01 00 48 */	stw r8, 0x48(r1)
/* 8008C3F4 00089334  FC 00 00 1E */	fctiwz f0, f0
/* 8008C3F8 00089338  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 8008C3FC 0008933C  EC 47 10 2A */	fadds f2, f7, f2
/* 8008C400 00089340  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008C404 00089344  EC 21 18 28 */	fsubs f1, f1, f3
/* 8008C408 00089348  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 8008C40C 0008934C  ED 65 00 B2 */	fmuls f11, f5, f2
/* 8008C410 00089350  C0 69 00 14 */	lfs f3, 0x14(r9)
/* 8008C414 00089354  C0 49 00 00 */	lfs f2, 0(r9)
/* 8008C418 00089358  EC 87 08 2A */	fadds f4, f7, f1
/* 8008C41C 0008935C  ED 06 10 FA */	fmadds f8, f6, f3, f2
/* 8008C420 00089360  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008C424 00089364  C0 29 00 18 */	lfs f1, 0x18(r9)
/* 8008C428 00089368  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008C42C 0008936C  ED 85 01 32 */	fmuls f12, f5, f4
/* 8008C430 00089370  C0 09 00 04 */	lfs f0, 4(r9)
/* 8008C434 00089374  7C C7 02 14 */	add r6, r7, r0
/* 8008C438 00089378  ED 4B 40 2A */	fadds f10, f11, f8
/* 8008C43C 0008937C  EC A6 00 7A */	fmadds f5, f6, f1, f0
/* 8008C440 00089380  C0 69 00 1C */	lfs f3, 0x1c(r9)
/* 8008C444 00089384  C0 49 00 08 */	lfs f2, 8(r9)
/* 8008C448 00089388  C0 29 00 20 */	lfs f1, 0x20(r9)
/* 8008C44C 0008938C  C0 09 00 0C */	lfs f0, 0xc(r9)
/* 8008C450 00089390  ED A6 10 FA */	fmadds f13, f6, f3, f2
/* 8008C454 00089394  C1 26 00 04 */	lfs f9, 4(r6)
/* 8008C458 00089398  EC 6C 28 2A */	fadds f3, f12, f5
/* 8008C45C 0008939C  EF E6 00 7A */	fmadds f31, f6, f1, f0
/* 8008C460 000893A0  7D 07 04 2E */	lfsx f8, r7, r0
/* 8008C464 000893A4  C0 82 87 F0 */	lfs f4, lbl_80516B50@sda21(r2)
/* 8008C468 000893A8  EC 29 02 B2 */	fmuls f1, f9, f10
/* 8008C46C 000893AC  D0 E1 00 30 */	stfs f7, 0x30(r1)
/* 8008C470 000893B0  EC 09 00 F2 */	fmuls f0, f9, f3
/* 8008C474 000893B4  EC AD 02 72 */	fmuls f5, f13, f9
/* 8008C478 000893B8  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 8008C47C 000893BC  EC 28 08 F8 */	fmsubs f1, f8, f3, f1
/* 8008C480 000893C0  FC 40 68 50 */	fneg f2, f13
/* 8008C484 000893C4  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 8008C488 000893C8  EC 7F 02 32 */	fmuls f3, f31, f8
/* 8008C48C 000893CC  D0 A1 00 08 */	stfs f5, 8(r1)
/* 8008C490 000893D0  EC AD 58 7A */	fmadds f5, f13, f1, f11
/* 8008C494 000893D4  EC C2 02 32 */	fmuls f6, f2, f8
/* 8008C498 000893D8  EC 5F 02 72 */	fmuls f2, f31, f9
/* 8008C49C 000893DC  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8008C4A0 000893E0  FC 20 F8 50 */	fneg f1, f31
/* 8008C4A4 000893E4  EC 08 02 BA */	fmadds f0, f8, f10, f0
/* 8008C4A8 000893E8  D0 C1 00 0C */	stfs f6, 0xc(r1)
/* 8008C4AC 000893EC  D0 A1 00 10 */	stfs f5, 0x10(r1)
/* 8008C4B0 000893F0  EC 01 60 3A */	fmadds f0, f1, f0, f12
/* 8008C4B4 000893F4  D0 61 00 18 */	stfs f3, 0x18(r1)
/* 8008C4B8 000893F8  D0 41 00 1C */	stfs f2, 0x1c(r1)
/* 8008C4BC 000893FC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8008C4C0 00089400  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8008C4C4 00089404  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8008C4C8 00089408  48 05 DE 39 */	bl PSMTXConcat
/* 8008C4CC 0008940C  38 61 00 08 */	addi r3, r1, 8
/* 8008C4D0 00089410  7F E4 FB 78 */	mr r4, r31
/* 8008C4D4 00089414  7C 65 1B 78 */	mr r5, r3
/* 8008C4D8 00089418  48 05 DE 29 */	bl PSMTXConcat
/* 8008C4DC 0008941C  38 61 00 08 */	addi r3, r1, 8
/* 8008C4E0 00089420  38 80 00 1E */	li r4, 0x1e
/* 8008C4E4 00089424  38 A0 00 00 */	li r5, 0
/* 8008C4E8 00089428  48 05 D1 65 */	bl GXLoadTexMtxImm
/* 8008C4EC 0008942C  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8008C4F0 00089430  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8008C4F4 00089434  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8008C4F8 00089438  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8008C4FC 0008943C  7C 08 03 A6 */	mtlr r0
/* 8008C500 00089440  38 21 00 70 */	addi r1, r1, 0x70
/* 8008C504 00089444  4E 80 00 20 */	blr 
.endfn loadPrjAnm__FPC18JPAEmitterWorkDataPA4_Cf

.fn JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C508 00089448  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8008C50C 0008944C  7C 08 02 A6 */	mflr r0
/* 8008C510 00089450  90 01 00 54 */	stw r0, 0x54(r1)
/* 8008C514 00089454  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8008C518 00089458  7C 9F 23 78 */	mr r31, r4
/* 8008C51C 0008945C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8008C520 00089460  7C 7E 1B 78 */	mr r30, r3
/* 8008C524 00089464  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008C528 00089468  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008C52C 0008946C  40 82 00 AC */	bne .L_8008C5D8
/* 8008C530 00089470  38 7E 01 84 */	addi r3, r30, 0x184
/* 8008C534 00089474  38 A1 00 08 */	addi r5, r1, 8
/* 8008C538 00089478  48 05 E6 A1 */	bl PSMTXMultVec
/* 8008C53C 0008947C  C0 5E 01 44 */	lfs f2, 0x144(r30)
/* 8008C540 00089480  38 61 00 14 */	addi r3, r1, 0x14
/* 8008C544 00089484  C0 3F 00 60 */	lfs f1, 0x60(r31)
/* 8008C548 00089488  38 80 00 00 */	li r4, 0
/* 8008C54C 0008948C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8008C550 00089490  EC 22 00 72 */	fmuls f1, f2, f1
/* 8008C554 00089494  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8008C558 00089498  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8008C55C 0008949C  C0 42 87 EC */	lfs f2, lbl_80516B4C@sda21(r2)
/* 8008C560 000894A0  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8008C564 000894A4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8008C568 000894A8  C0 BE 01 48 */	lfs f5, 0x148(r30)
/* 8008C56C 000894AC  C0 9F 00 64 */	lfs f4, 0x64(r31)
/* 8008C570 000894B0  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008C574 000894B4  EC 85 01 32 */	fmuls f4, f5, f4
/* 8008C578 000894B8  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8008C57C 000894BC  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8008C580 000894C0  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8008C584 000894C4  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8008C588 000894C8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8008C58C 000894CC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8008C590 000894D0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8008C594 000894D4  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008C598 000894D8  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8008C59C 000894DC  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8008C5A0 000894E0  48 05 CF D9 */	bl GXLoadPosMtxImm
/* 8008C5A4 000894E4  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 8008C5A8 000894E8  3C 60 80 4A */	lis r3, p_prj@ha
/* 8008C5AC 000894EC  38 A3 30 E0 */	addi r5, r3, p_prj@l
/* 8008C5B0 000894F0  7F C3 F3 78 */	mr r3, r30
/* 8008C5B4 000894F4  54 00 10 3A */	slwi r0, r0, 2
/* 8008C5B8 000894F8  38 81 00 14 */	addi r4, r1, 0x14
/* 8008C5BC 000894FC  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008C5C0 00089500  7D 89 03 A6 */	mtctr r12
/* 8008C5C4 00089504  4E 80 04 21 */	bctrl 
/* 8008C5C8 00089508  3C 60 80 4A */	lis r3, jpa_dl@ha
/* 8008C5CC 0008950C  38 80 00 20 */	li r4, 0x20
/* 8008C5D0 00089510  38 63 30 A0 */	addi r3, r3, jpa_dl@l
/* 8008C5D4 00089514  48 05 CE 05 */	bl GXCallDisplayList
.L_8008C5D8:
/* 8008C5D8 00089518  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008C5DC 0008951C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8008C5E0 00089520  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8008C5E4 00089524  7C 08 03 A6 */	mtlr r0
/* 8008C5E8 00089528  38 21 00 50 */	addi r1, r1, 0x50
/* 8008C5EC 0008952C  4E 80 00 20 */	blr 
.endfn JPADrawBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C5F0 00089530  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8008C5F4 00089534  7C 08 02 A6 */	mflr r0
/* 8008C5F8 00089538  90 01 00 54 */	stw r0, 0x54(r1)
/* 8008C5FC 0008953C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8008C600 00089540  7C 9F 23 78 */	mr r31, r4
/* 8008C604 00089544  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8008C608 00089548  7C 7E 1B 78 */	mr r30, r3
/* 8008C60C 0008954C  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008C610 00089550  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008C614 00089554  40 82 00 DC */	bne .L_8008C6F0
/* 8008C618 00089558  38 7E 01 84 */	addi r3, r30, 0x184
/* 8008C61C 0008955C  38 A1 00 08 */	addi r5, r1, 8
/* 8008C620 00089560  48 05 E5 B9 */	bl PSMTXMultVec
/* 8008C624 00089564  A0 1F 00 88 */	lhz r0, 0x88(r31)
/* 8008C628 00089568  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8008C62C 0008956C  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 8008C630 00089570  C0 3E 01 44 */	lfs f1, 0x144(r30)
/* 8008C634 00089574  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008C638 00089578  C0 1F 00 60 */	lfs f0, 0x60(r31)
/* 8008C63C 0008957C  7C 83 04 2E */	lfsx f4, r3, r0
/* 8008C640 00089580  7C 63 02 14 */	add r3, r3, r0
/* 8008C644 00089584  C0 7E 01 48 */	lfs f3, 0x148(r30)
/* 8008C648 00089588  EC C1 00 32 */	fmuls f6, f1, f0
/* 8008C64C 0008958C  C0 5F 00 64 */	lfs f2, 0x64(r31)
/* 8008C650 00089590  FC 20 20 50 */	fneg f1, f4
/* 8008C654 00089594  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008C658 00089598  38 80 00 00 */	li r4, 0
/* 8008C65C 0008959C  EC 63 00 B2 */	fmuls f3, f3, f2
/* 8008C660 000895A0  C0 43 00 04 */	lfs f2, 4(r3)
/* 8008C664 000895A4  EC A4 01 B2 */	fmuls f5, f4, f6
/* 8008C668 000895A8  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8008C66C 000895AC  38 61 00 14 */	addi r3, r1, 0x14
/* 8008C670 000895B0  ED 02 01 B2 */	fmuls f8, f2, f6
/* 8008C674 000895B4  EC E1 00 F2 */	fmuls f7, f1, f3
/* 8008C678 000895B8  C0 C1 00 08 */	lfs f6, 8(r1)
/* 8008C67C 000895BC  EC 82 00 F2 */	fmuls f4, f2, f3
/* 8008C680 000895C0  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8008C684 000895C4  C0 42 87 EC */	lfs f2, lbl_80516B4C@sda21(r2)
/* 8008C688 000895C8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8008C68C 000895CC  D1 01 00 14 */	stfs f8, 0x14(r1)
/* 8008C690 000895D0  D0 E1 00 18 */	stfs f7, 0x18(r1)
/* 8008C694 000895D4  D0 C1 00 20 */	stfs f6, 0x20(r1)
/* 8008C698 000895D8  D0 A1 00 24 */	stfs f5, 0x24(r1)
/* 8008C69C 000895DC  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8008C6A0 000895E0  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8008C6A4 000895E4  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8008C6A8 000895E8  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8008C6AC 000895EC  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8008C6B0 000895F0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8008C6B4 000895F4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8008C6B8 000895F8  48 05 CE C1 */	bl GXLoadPosMtxImm
/* 8008C6BC 000895FC  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 8008C6C0 00089600  3C 60 80 4A */	lis r3, p_prj@ha
/* 8008C6C4 00089604  38 A3 30 E0 */	addi r5, r3, p_prj@l
/* 8008C6C8 00089608  7F C3 F3 78 */	mr r3, r30
/* 8008C6CC 0008960C  54 00 10 3A */	slwi r0, r0, 2
/* 8008C6D0 00089610  38 81 00 14 */	addi r4, r1, 0x14
/* 8008C6D4 00089614  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008C6D8 00089618  7D 89 03 A6 */	mtctr r12
/* 8008C6DC 0008961C  4E 80 04 21 */	bctrl 
/* 8008C6E0 00089620  3C 60 80 4A */	lis r3, jpa_dl@ha
/* 8008C6E4 00089624  38 80 00 20 */	li r4, 0x20
/* 8008C6E8 00089628  38 63 30 A0 */	addi r3, r3, jpa_dl@l
/* 8008C6EC 0008962C  48 05 CC ED */	bl GXCallDisplayList
.L_8008C6F0:
/* 8008C6F0 00089630  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008C6F4 00089634  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8008C6F8 00089638  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8008C6FC 0008963C  7C 08 03 A6 */	mtlr r0
/* 8008C700 00089640  38 21 00 50 */	addi r1, r1, 0x50
/* 8008C704 00089644  4E 80 00 20 */	blr 
.endfn JPADrawRotBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C708 00089648  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8008C70C 0008964C  7C 08 02 A6 */	mflr r0
/* 8008C710 00089650  90 01 00 54 */	stw r0, 0x54(r1)
/* 8008C714 00089654  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8008C718 00089658  7C 9F 23 78 */	mr r31, r4
/* 8008C71C 0008965C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8008C720 00089660  7C 7E 1B 78 */	mr r30, r3
/* 8008C724 00089664  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008C728 00089668  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008C72C 0008966C  40 82 00 C0 */	bne .L_8008C7EC
/* 8008C730 00089670  38 7E 01 84 */	addi r3, r30, 0x184
/* 8008C734 00089674  38 A1 00 08 */	addi r5, r1, 8
/* 8008C738 00089678  48 05 E4 A1 */	bl PSMTXMultVec
/* 8008C73C 0008967C  C0 3E 01 44 */	lfs f1, 0x144(r30)
/* 8008C740 00089680  38 61 00 14 */	addi r3, r1, 0x14
/* 8008C744 00089684  C0 1F 00 60 */	lfs f0, 0x60(r31)
/* 8008C748 00089688  38 80 00 00 */	li r4, 0
/* 8008C74C 0008968C  C0 7E 01 48 */	lfs f3, 0x148(r30)
/* 8008C750 00089690  C0 5F 00 64 */	lfs f2, 0x64(r31)
/* 8008C754 00089694  EC 21 00 32 */	fmuls f1, f1, f0
/* 8008C758 00089698  C0 01 00 08 */	lfs f0, 8(r1)
/* 8008C75C 0008969C  EC 83 00 B2 */	fmuls f4, f3, f2
/* 8008C760 000896A0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 8008C764 000896A4  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8008C768 000896A8  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8008C76C 000896AC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8008C770 000896B0  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008C774 000896B4  C0 7E 01 68 */	lfs f3, 0x168(r30)
/* 8008C778 000896B8  EC 63 01 32 */	fmuls f3, f3, f4
/* 8008C77C 000896BC  D0 61 00 28 */	stfs f3, 0x28(r1)
/* 8008C780 000896C0  C0 7E 01 6C */	lfs f3, 0x16c(r30)
/* 8008C784 000896C4  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8008C788 000896C8  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 8008C78C 000896CC  C0 5E 01 78 */	lfs f2, 0x178(r30)
/* 8008C790 000896D0  EC 42 01 32 */	fmuls f2, f2, f4
/* 8008C794 000896D4  D0 41 00 38 */	stfs f2, 0x38(r1)
/* 8008C798 000896D8  C0 5E 01 7C */	lfs f2, 0x17c(r30)
/* 8008C79C 000896DC  D0 41 00 3C */	stfs f2, 0x3c(r1)
/* 8008C7A0 000896E0  D0 21 00 40 */	stfs f1, 0x40(r1)
/* 8008C7A4 000896E4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8008C7A8 000896E8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008C7AC 000896EC  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8008C7B0 000896F0  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8008C7B4 000896F4  48 05 CD C5 */	bl GXLoadPosMtxImm
/* 8008C7B8 000896F8  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 8008C7BC 000896FC  3C 60 80 4A */	lis r3, p_prj@ha
/* 8008C7C0 00089700  38 A3 30 E0 */	addi r5, r3, p_prj@l
/* 8008C7C4 00089704  7F C3 F3 78 */	mr r3, r30
/* 8008C7C8 00089708  54 00 10 3A */	slwi r0, r0, 2
/* 8008C7CC 0008970C  38 81 00 14 */	addi r4, r1, 0x14
/* 8008C7D0 00089710  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008C7D4 00089714  7D 89 03 A6 */	mtctr r12
/* 8008C7D8 00089718  4E 80 04 21 */	bctrl 
/* 8008C7DC 0008971C  3C 60 80 4A */	lis r3, jpa_dl@ha
/* 8008C7E0 00089720  38 80 00 20 */	li r4, 0x20
/* 8008C7E4 00089724  38 63 30 A0 */	addi r3, r3, jpa_dl@l
/* 8008C7E8 00089728  48 05 CB F1 */	bl GXCallDisplayList
.L_8008C7EC:
/* 8008C7EC 0008972C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008C7F0 00089730  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8008C7F4 00089734  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8008C7F8 00089738  7C 08 03 A6 */	mtlr r0
/* 8008C7FC 0008973C  38 21 00 50 */	addi r1, r1, 0x50
/* 8008C800 00089740  4E 80 00 20 */	blr 
.endfn JPADrawYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008C804 00089744  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 8008C808 00089748  7C 08 02 A6 */	mflr r0
/* 8008C80C 0008974C  90 01 00 54 */	stw r0, 0x54(r1)
/* 8008C810 00089750  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8008C814 00089754  7C 9F 23 78 */	mr r31, r4
/* 8008C818 00089758  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8008C81C 0008975C  7C 7E 1B 78 */	mr r30, r3
/* 8008C820 00089760  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008C824 00089764  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008C828 00089768  40 82 00 F4 */	bne .L_8008C91C
/* 8008C82C 0008976C  38 7E 01 84 */	addi r3, r30, 0x184
/* 8008C830 00089770  38 A1 00 08 */	addi r5, r1, 8
/* 8008C834 00089774  48 05 E3 A5 */	bl PSMTXMultVec
/* 8008C838 00089778  A0 1F 00 88 */	lhz r0, 0x88(r31)
/* 8008C83C 0008977C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8008C840 00089780  C0 7E 01 44 */	lfs f3, 0x144(r30)
/* 8008C844 00089784  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8008C848 00089788  C0 5F 00 60 */	lfs f2, 0x60(r31)
/* 8008C84C 0008978C  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008C850 00089790  7C 64 02 14 */	add r3, r4, r0
/* 8008C854 00089794  C0 3E 01 48 */	lfs f1, 0x148(r30)
/* 8008C858 00089798  EC C3 00 B2 */	fmuls f6, f3, f2
/* 8008C85C 0008979C  7C 44 04 2E */	lfsx f2, r4, r0
/* 8008C860 000897A0  C0 A3 00 04 */	lfs f5, 4(r3)
/* 8008C864 000897A4  38 61 00 14 */	addi r3, r1, 0x14
/* 8008C868 000897A8  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 8008C86C 000897AC  38 80 00 00 */	li r4, 0
/* 8008C870 000897B0  ED 01 00 32 */	fmuls f8, f1, f0
/* 8008C874 000897B4  C1 BE 01 78 */	lfs f13, 0x178(r30)
/* 8008C878 000897B8  ED 42 01 B2 */	fmuls f10, f2, f6
/* 8008C87C 000897BC  C1 9E 01 68 */	lfs f12, 0x168(r30)
/* 8008C880 000897C0  ED 25 01 B2 */	fmuls f9, f5, f6
/* 8008C884 000897C4  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008C888 000897C8  ED 65 02 32 */	fmuls f11, f5, f8
/* 8008C88C 000897CC  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 8008C890 000897D0  FC 40 10 50 */	fneg f2, f2
/* 8008C894 000897D4  C0 E1 00 08 */	lfs f7, 8(r1)
/* 8008C898 000897D8  FC 80 68 50 */	fneg f4, f13
/* 8008C89C 000897DC  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8008C8A0 000897E0  ED 02 02 32 */	fmuls f8, f2, f8
/* 8008C8A4 000897E4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008C8A8 000897E8  EC CA 03 32 */	fmuls f6, f10, f12
/* 8008C8AC 000897EC  D1 21 00 14 */	stfs f9, 0x14(r1)
/* 8008C8B0 000897F0  EC AB 03 32 */	fmuls f5, f11, f12
/* 8008C8B4 000897F4  EC 4A 03 72 */	fmuls f2, f10, f13
/* 8008C8B8 000897F8  EC 2B 03 72 */	fmuls f1, f11, f13
/* 8008C8BC 000897FC  D1 01 00 18 */	stfs f8, 0x18(r1)
/* 8008C8C0 00089800  D0 E1 00 20 */	stfs f7, 0x20(r1)
/* 8008C8C4 00089804  D0 C1 00 24 */	stfs f6, 0x24(r1)
/* 8008C8C8 00089808  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 8008C8CC 0008980C  D0 81 00 2C */	stfs f4, 0x2c(r1)
/* 8008C8D0 00089810  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 8008C8D4 00089814  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 8008C8D8 00089818  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 8008C8DC 0008981C  D1 81 00 3C */	stfs f12, 0x3c(r1)
/* 8008C8E0 00089820  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8008C8E4 00089824  48 05 CC 95 */	bl GXLoadPosMtxImm
/* 8008C8E8 00089828  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 8008C8EC 0008982C  3C 60 80 4A */	lis r3, p_prj@ha
/* 8008C8F0 00089830  38 A3 30 E0 */	addi r5, r3, p_prj@l
/* 8008C8F4 00089834  7F C3 F3 78 */	mr r3, r30
/* 8008C8F8 00089838  54 00 10 3A */	slwi r0, r0, 2
/* 8008C8FC 0008983C  38 81 00 14 */	addi r4, r1, 0x14
/* 8008C900 00089840  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008C904 00089844  7D 89 03 A6 */	mtctr r12
/* 8008C908 00089848  4E 80 04 21 */	bctrl 
/* 8008C90C 0008984C  3C 60 80 4A */	lis r3, jpa_dl@ha
/* 8008C910 00089850  38 80 00 20 */	li r4, 0x20
/* 8008C914 00089854  38 63 30 A0 */	addi r3, r3, jpa_dl@l
/* 8008C918 00089858  48 05 CA C1 */	bl GXCallDisplayList
.L_8008C91C:
/* 8008C91C 0008985C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8008C920 00089860  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8008C924 00089864  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8008C928 00089868  7C 08 03 A6 */	mtlr r0
/* 8008C92C 0008986C  38 21 00 50 */	addi r1, r1, 0x50
/* 8008C930 00089870  4E 80 00 20 */	blr 
.endfn JPADrawRotYBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn "dirTypeVel__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>", local
/* 8008C934 00089874  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 8008C938 00089878  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 8008C93C 0008987C  D0 05 00 00 */	stfs f0, 0(r5)
/* 8008C940 00089880  C0 04 00 2C */	lfs f0, 0x2c(r4)
/* 8008C944 00089884  D0 25 00 04 */	stfs f1, 4(r5)
/* 8008C948 00089888  D0 05 00 08 */	stfs f0, 8(r5)
/* 8008C94C 0008988C  4E 80 00 20 */	blr 
.endfn "dirTypeVel__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"

.fn "dirTypePos__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>", local
/* 8008C950 00089890  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8008C954 00089894  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8008C958 00089898  D0 05 00 00 */	stfs f0, 0(r5)
/* 8008C95C 0008989C  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8008C960 000898A0  D0 25 00 04 */	stfs f1, 4(r5)
/* 8008C964 000898A4  D0 05 00 08 */	stfs f0, 8(r5)
/* 8008C968 000898A8  4E 80 00 20 */	blr 
.endfn "dirTypePos__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"

.fn "dirTypePosInv__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>", local
/* 8008C96C 000898AC  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 8008C970 000898B0  C0 24 00 10 */	lfs f1, 0x10(r4)
/* 8008C974 000898B4  D0 05 00 00 */	stfs f0, 0(r5)
/* 8008C978 000898B8  C0 04 00 14 */	lfs f0, 0x14(r4)
/* 8008C97C 000898BC  D0 25 00 04 */	stfs f1, 4(r5)
/* 8008C980 000898C0  D0 05 00 08 */	stfs f0, 8(r5)
/* 8008C984 000898C4  C0 05 00 00 */	lfs f0, 0(r5)
/* 8008C988 000898C8  FC 00 00 50 */	fneg f0, f0
/* 8008C98C 000898CC  D0 05 00 00 */	stfs f0, 0(r5)
/* 8008C990 000898D0  C0 05 00 04 */	lfs f0, 4(r5)
/* 8008C994 000898D4  FC 00 00 50 */	fneg f0, f0
/* 8008C998 000898D8  D0 05 00 04 */	stfs f0, 4(r5)
/* 8008C99C 000898DC  C0 05 00 08 */	lfs f0, 8(r5)
/* 8008C9A0 000898E0  FC 00 00 50 */	fneg f0, f0
/* 8008C9A4 000898E4  D0 05 00 08 */	stfs f0, 8(r5)
/* 8008C9A8 000898E8  4E 80 00 20 */	blr 
.endfn "dirTypePosInv__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"

.fn "dirTypeEmtrDir__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>", local
/* 8008C9AC 000898EC  C0 03 01 20 */	lfs f0, 0x120(r3)
/* 8008C9B0 000898F0  C0 23 01 24 */	lfs f1, 0x124(r3)
/* 8008C9B4 000898F4  D0 05 00 00 */	stfs f0, 0(r5)
/* 8008C9B8 000898F8  C0 03 01 28 */	lfs f0, 0x128(r3)
/* 8008C9BC 000898FC  D0 25 00 04 */	stfs f1, 4(r5)
/* 8008C9C0 00089900  D0 05 00 08 */	stfs f0, 8(r5)
/* 8008C9C4 00089904  4E 80 00 20 */	blr 
.endfn "dirTypeEmtrDir__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"

.fn "dirTypePrevPtcl__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>", local
/* 8008C9C8 00089908  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8008C9CC 0008990C  7C 08 02 A6 */	mflr r0
/* 8008C9D0 00089910  90 01 00 44 */	stw r0, 0x44(r1)
/* 8008C9D4 00089914  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 8008C9D8 00089918  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 8008C9DC 0008991C  DB C1 00 20 */	stfd f30, 0x20(r1)
/* 8008C9E0 00089920  F3 C1 00 28 */	psq_st f30, 40(r1), 0, qr0
/* 8008C9E4 00089924  DB A1 00 10 */	stfd f29, 0x10(r1)
/* 8008C9E8 00089928  F3 A1 00 18 */	psq_st f29, 24(r1), 0, qr0
/* 8008C9EC 0008992C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8008C9F0 00089930  80 C3 01 E8 */	lwz r6, 0x1e8(r3)
/* 8008C9F4 00089934  7C BF 2B 78 */	mr r31, r5
/* 8008C9F8 00089938  C3 E4 00 00 */	lfs f31, 0(r4)
/* 8008C9FC 0008993C  80 A6 00 00 */	lwz r5, 0(r6)
/* 8008CA00 00089940  C3 C4 00 04 */	lfs f30, 4(r4)
/* 8008CA04 00089944  28 05 00 00 */	cmplwi r5, 0
/* 8008CA08 00089948  C3 A4 00 08 */	lfs f29, 8(r4)
/* 8008CA0C 0008994C  41 82 00 20 */	beq .L_8008CA2C
/* 8008CA10 00089950  C0 05 00 08 */	lfs f0, 8(r5)
/* 8008CA14 00089954  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8008CA18 00089958  C0 05 00 0C */	lfs f0, 0xc(r5)
/* 8008CA1C 0008995C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8008CA20 00089960  C0 05 00 10 */	lfs f0, 0x10(r5)
/* 8008CA24 00089964  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8008CA28 00089968  48 00 00 10 */	b .L_8008CA38
.L_8008CA2C:
/* 8008CA2C 0008996C  80 63 00 00 */	lwz r3, 0(r3)
/* 8008CA30 00089970  7F E4 FB 78 */	mr r4, r31
/* 8008CA34 00089974  48 00 3A 75 */	bl "calcEmitterGlobalPosition__14JPABaseEmitterCFPQ29JGeometry8TVec3<f>"
.L_8008CA38:
/* 8008CA38 00089978  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8008CA3C 0008997C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 8008CA40 00089980  D0 1F 00 00 */	stfs f0, 0(r31)
/* 8008CA44 00089984  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8008CA48 00089988  EC 00 F0 28 */	fsubs f0, f0, f30
/* 8008CA4C 0008998C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8008CA50 00089990  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8008CA54 00089994  EC 00 E8 28 */	fsubs f0, f0, f29
/* 8008CA58 00089998  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8008CA5C 0008999C  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 8008CA60 000899A0  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 8008CA64 000899A4  E3 C1 00 28 */	psq_l f30, 40(r1), 0, qr0
/* 8008CA68 000899A8  CB C1 00 20 */	lfd f30, 0x20(r1)
/* 8008CA6C 000899AC  E3 A1 00 18 */	psq_l f29, 24(r1), 0, qr0
/* 8008CA70 000899B0  CB A1 00 10 */	lfd f29, 0x10(r1)
/* 8008CA74 000899B4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8008CA78 000899B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8008CA7C 000899BC  7C 08 03 A6 */	mtlr r0
/* 8008CA80 000899C0  38 21 00 40 */	addi r1, r1, 0x40
/* 8008CA84 000899C4  4E 80 00 20 */	blr 
.endfn "dirTypePrevPtcl__FPC18JPAEmitterWorkDataPC15JPABaseParticlePQ29JGeometry8TVec3<f>"

.fn rotTypeY__FffRA3_A4_f, local
/* 8008CA88 000899C8  D0 43 00 00 */	stfs f2, 0(r3)
/* 8008CA8C 000899CC  FC 60 08 50 */	fneg f3, f1
/* 8008CA90 000899D0  C0 82 87 F0 */	lfs f4, lbl_80516B50@sda21(r2)
/* 8008CA94 000899D4  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008CA98 000899D8  D0 83 00 04 */	stfs f4, 4(r3)
/* 8008CA9C 000899DC  D0 63 00 08 */	stfs f3, 8(r3)
/* 8008CAA0 000899E0  D0 83 00 0C */	stfs f4, 0xc(r3)
/* 8008CAA4 000899E4  D0 83 00 10 */	stfs f4, 0x10(r3)
/* 8008CAA8 000899E8  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8008CAAC 000899EC  D0 83 00 18 */	stfs f4, 0x18(r3)
/* 8008CAB0 000899F0  D0 83 00 1C */	stfs f4, 0x1c(r3)
/* 8008CAB4 000899F4  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 8008CAB8 000899F8  D0 83 00 24 */	stfs f4, 0x24(r3)
/* 8008CABC 000899FC  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 8008CAC0 00089A00  D0 83 00 2C */	stfs f4, 0x2c(r3)
/* 8008CAC4 00089A04  4E 80 00 20 */	blr 
.endfn rotTypeY__FffRA3_A4_f

.fn rotTypeX__FffRA3_A4_f, local
/* 8008CAC8 00089A08  C0 82 87 EC */	lfs f4, lbl_80516B4C@sda21(r2)
/* 8008CACC 00089A0C  FC 00 08 50 */	fneg f0, f1
/* 8008CAD0 00089A10  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008CAD4 00089A14  D0 83 00 00 */	stfs f4, 0(r3)
/* 8008CAD8 00089A18  D0 63 00 04 */	stfs f3, 4(r3)
/* 8008CADC 00089A1C  D0 63 00 08 */	stfs f3, 8(r3)
/* 8008CAE0 00089A20  D0 63 00 0C */	stfs f3, 0xc(r3)
/* 8008CAE4 00089A24  D0 63 00 10 */	stfs f3, 0x10(r3)
/* 8008CAE8 00089A28  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 8008CAEC 00089A2C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8008CAF0 00089A30  D0 63 00 1C */	stfs f3, 0x1c(r3)
/* 8008CAF4 00089A34  D0 63 00 20 */	stfs f3, 0x20(r3)
/* 8008CAF8 00089A38  D0 23 00 24 */	stfs f1, 0x24(r3)
/* 8008CAFC 00089A3C  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 8008CB00 00089A40  D0 63 00 2C */	stfs f3, 0x2c(r3)
/* 8008CB04 00089A44  4E 80 00 20 */	blr 
.endfn rotTypeX__FffRA3_A4_f

.fn rotTypeZ__FffRA3_A4_f, local
/* 8008CB08 00089A48  FC 80 08 50 */	fneg f4, f1
/* 8008CB0C 00089A4C  D0 43 00 00 */	stfs f2, 0(r3)
/* 8008CB10 00089A50  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008CB14 00089A54  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008CB18 00089A58  D0 83 00 04 */	stfs f4, 4(r3)
/* 8008CB1C 00089A5C  D0 63 00 08 */	stfs f3, 8(r3)
/* 8008CB20 00089A60  D0 63 00 0C */	stfs f3, 0xc(r3)
/* 8008CB24 00089A64  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8008CB28 00089A68  D0 43 00 14 */	stfs f2, 0x14(r3)
/* 8008CB2C 00089A6C  D0 63 00 18 */	stfs f3, 0x18(r3)
/* 8008CB30 00089A70  D0 63 00 1C */	stfs f3, 0x1c(r3)
/* 8008CB34 00089A74  D0 63 00 20 */	stfs f3, 0x20(r3)
/* 8008CB38 00089A78  D0 63 00 24 */	stfs f3, 0x24(r3)
/* 8008CB3C 00089A7C  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8008CB40 00089A80  D0 63 00 2C */	stfs f3, 0x2c(r3)
/* 8008CB44 00089A84  4E 80 00 20 */	blr 
.endfn rotTypeZ__FffRA3_A4_f

.fn rotTypeXYZ__FffRA3_A4_f, local
/* 8008CB48 00089A88  C0 62 87 EC */	lfs f3, lbl_80516B4C@sda21(r2)
/* 8008CB4C 00089A8C  C0 02 88 04 */	lfs f0, lbl_80516B64@sda21(r2)
/* 8008CB50 00089A90  EC 63 10 28 */	fsubs f3, f3, f2
/* 8008CB54 00089A94  C0 82 88 00 */	lfs f4, lbl_80516B60@sda21(r2)
/* 8008CB58 00089A98  EC 20 00 72 */	fmuls f1, f0, f1
/* 8008CB5C 00089A9C  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008CB60 00089AA0  EC 64 00 F2 */	fmuls f3, f4, f3
/* 8008CB64 00089AA4  EC 83 08 2A */	fadds f4, f3, f1
/* 8008CB68 00089AA8  EC 23 08 28 */	fsubs f1, f3, f1
/* 8008CB6C 00089AAC  EC 63 10 2A */	fadds f3, f3, f2
/* 8008CB70 00089AB0  D0 63 00 00 */	stfs f3, 0(r3)
/* 8008CB74 00089AB4  D0 23 00 04 */	stfs f1, 4(r3)
/* 8008CB78 00089AB8  D0 83 00 08 */	stfs f4, 8(r3)
/* 8008CB7C 00089ABC  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8008CB80 00089AC0  D0 83 00 10 */	stfs f4, 0x10(r3)
/* 8008CB84 00089AC4  D0 63 00 14 */	stfs f3, 0x14(r3)
/* 8008CB88 00089AC8  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 8008CB8C 00089ACC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 8008CB90 00089AD0  D0 23 00 20 */	stfs f1, 0x20(r3)
/* 8008CB94 00089AD4  D0 83 00 24 */	stfs f4, 0x24(r3)
/* 8008CB98 00089AD8  D0 63 00 28 */	stfs f3, 0x28(r3)
/* 8008CB9C 00089ADC  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 8008CBA0 00089AE0  4E 80 00 20 */	blr 
.endfn rotTypeXYZ__FffRA3_A4_f

.fn basePlaneTypeXY__FPA4_fff, local
/* 8008CBA4 00089AE4  C0 03 00 00 */	lfs f0, 0(r3)
/* 8008CBA8 00089AE8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CBAC 00089AEC  D0 03 00 00 */	stfs f0, 0(r3)
/* 8008CBB0 00089AF0  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8008CBB4 00089AF4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CBB8 00089AF8  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8008CBBC 00089AFC  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8008CBC0 00089B00  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CBC4 00089B04  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8008CBC8 00089B08  C0 03 00 04 */	lfs f0, 4(r3)
/* 8008CBCC 00089B0C  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CBD0 00089B10  D0 03 00 04 */	stfs f0, 4(r3)
/* 8008CBD4 00089B14  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8008CBD8 00089B18  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CBDC 00089B1C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8008CBE0 00089B20  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8008CBE4 00089B24  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CBE8 00089B28  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8008CBEC 00089B2C  4E 80 00 20 */	blr 
.endfn basePlaneTypeXY__FPA4_fff

.fn basePlaneTypeXZ__FPA4_fff, local
/* 8008CBF0 00089B30  C0 03 00 00 */	lfs f0, 0(r3)
/* 8008CBF4 00089B34  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CBF8 00089B38  D0 03 00 00 */	stfs f0, 0(r3)
/* 8008CBFC 00089B3C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8008CC00 00089B40  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CC04 00089B44  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8008CC08 00089B48  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8008CC0C 00089B4C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CC10 00089B50  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8008CC14 00089B54  C0 03 00 08 */	lfs f0, 8(r3)
/* 8008CC18 00089B58  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CC1C 00089B5C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8008CC20 00089B60  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8008CC24 00089B64  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CC28 00089B68  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8008CC2C 00089B6C  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8008CC30 00089B70  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CC34 00089B74  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8008CC38 00089B78  4E 80 00 20 */	blr 
.endfn basePlaneTypeXZ__FPA4_fff

.fn basePlaneTypeX__FPA4_fff, local
/* 8008CC3C 00089B7C  C0 03 00 00 */	lfs f0, 0(r3)
/* 8008CC40 00089B80  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CC44 00089B84  D0 03 00 00 */	stfs f0, 0(r3)
/* 8008CC48 00089B88  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 8008CC4C 00089B8C  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CC50 00089B90  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8008CC54 00089B94  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 8008CC58 00089B98  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CC5C 00089B9C  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 8008CC60 00089BA0  C0 03 00 04 */	lfs f0, 4(r3)
/* 8008CC64 00089BA4  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CC68 00089BA8  D0 03 00 04 */	stfs f0, 4(r3)
/* 8008CC6C 00089BAC  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 8008CC70 00089BB0  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CC74 00089BB4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 8008CC78 00089BB8  C0 03 00 24 */	lfs f0, 0x24(r3)
/* 8008CC7C 00089BBC  EC 00 00 B2 */	fmuls f0, f0, f2
/* 8008CC80 00089BC0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 8008CC84 00089BC4  C0 03 00 08 */	lfs f0, 8(r3)
/* 8008CC88 00089BC8  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CC8C 00089BCC  D0 03 00 08 */	stfs f0, 8(r3)
/* 8008CC90 00089BD0  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 8008CC94 00089BD4  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CC98 00089BD8  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 8008CC9C 00089BDC  C0 03 00 28 */	lfs f0, 0x28(r3)
/* 8008CCA0 00089BE0  EC 00 00 72 */	fmuls f0, f0, f1
/* 8008CCA4 00089BE4  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 8008CCA8 00089BE8  4E 80 00 20 */	blr 
.endfn basePlaneTypeX__FPA4_fff

.fn JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008CCAC 00089BEC  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8008CCB0 00089BF0  7C 08 02 A6 */	mflr r0
/* 8008CCB4 00089BF4  3C A0 80 4A */	lis r5, jpa_dl@ha
/* 8008CCB8 00089BF8  90 01 00 64 */	stw r0, 0x64(r1)
/* 8008CCBC 00089BFC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8008CCC0 00089C00  7C 7F 1B 78 */	mr r31, r3
/* 8008CCC4 00089C04  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8008CCC8 00089C08  3B C5 30 A0 */	addi r30, r5, jpa_dl@l
/* 8008CCCC 00089C0C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8008CCD0 00089C10  7C 9D 23 78 */	mr r29, r4
/* 8008CCD4 00089C14  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008CCD8 00089C18  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008CCDC 00089C1C  40 82 03 04 */	bne .L_8008CFE0
/* 8008CCE0 00089C20  80 1F 02 00 */	lwz r0, 0x200(r31)
/* 8008CCE4 00089C24  38 DE 00 4C */	addi r6, r30, 0x4c
/* 8008CCE8 00089C28  38 A1 00 08 */	addi r5, r1, 8
/* 8008CCEC 00089C2C  54 00 10 3A */	slwi r0, r0, 2
/* 8008CCF0 00089C30  7D 86 00 2E */	lwzx r12, r6, r0
/* 8008CCF4 00089C34  7D 89 03 A6 */	mtctr r12
/* 8008CCF8 00089C38  4E 80 04 21 */	bctrl 
/* 8008CCFC 00089C3C  C0 21 00 08 */	lfs f1, 8(r1)
/* 8008CD00 00089C40  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008CD04 00089C44  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8008CD08 00089C48  EC 61 00 72 */	fmuls f3, f1, f1
/* 8008CD0C 00089C4C  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 8008CD10 00089C50  EC 40 00 32 */	fmuls f2, f0, f0
/* 8008CD14 00089C54  C0 22 88 08 */	lfs f1, lbl_80516B68@sda21(r2)
/* 8008CD18 00089C58  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 8008CD1C 00089C5C  EC 84 01 32 */	fmuls f4, f4, f4
/* 8008CD20 00089C60  EC 43 10 2A */	fadds f2, f3, f2
/* 8008CD24 00089C64  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008CD28 00089C68  EC 84 10 2A */	fadds f4, f4, f2
/* 8008CD2C 00089C6C  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008CD30 00089C70  4C 40 13 82 */	cror 2, 0, 2
/* 8008CD34 00089C74  41 82 02 AC */	beq .L_8008CFE0
/* 8008CD38 00089C78  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008CD3C 00089C7C  4C 40 13 82 */	cror 2, 0, 2
/* 8008CD40 00089C80  41 82 00 5C */	beq .L_8008CD9C
/* 8008CD44 00089C84  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008CD48 00089C88  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008CD4C 00089C8C  4C 40 13 82 */	cror 2, 0, 2
/* 8008CD50 00089C90  40 82 00 08 */	bne .L_8008CD58
/* 8008CD54 00089C94  48 00 00 24 */	b .L_8008CD78
.L_8008CD58:
/* 8008CD58 00089C98  FC 60 20 34 */	frsqrte f3, f4
/* 8008CD5C 00089C9C  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008CD60 00089CA0  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008CD64 00089CA4  FC 60 18 18 */	frsp f3, f3
/* 8008CD68 00089CA8  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008CD6C 00089CAC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008CD70 00089CB0  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 8008CD74 00089CB4  EC 82 00 32 */	fmuls f4, f2, f0
.L_8008CD78:
/* 8008CD78 00089CB8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008CD7C 00089CBC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8008CD80 00089CC0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008CD84 00089CC4  EC 42 01 32 */	fmuls f2, f2, f4
/* 8008CD88 00089CC8  EC 21 01 32 */	fmuls f1, f1, f4
/* 8008CD8C 00089CCC  EC 00 01 32 */	fmuls f0, f0, f4
/* 8008CD90 00089CD0  D0 41 00 08 */	stfs f2, 8(r1)
/* 8008CD94 00089CD4  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8008CD98 00089CD8  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8008CD9C:
/* 8008CD9C 00089CDC  C0 DD 00 54 */	lfs f6, 0x54(r29)
/* 8008CDA0 00089CE0  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008CDA4 00089CE4  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 8008CDA8 00089CE8  C0 E1 00 0C */	lfs f7, 0xc(r1)
/* 8008CDAC 00089CEC  C0 5D 00 5C */	lfs f2, 0x5c(r29)
/* 8008CDB0 00089CF0  EC 26 01 72 */	fmuls f1, f6, f5
/* 8008CDB4 00089CF4  C0 81 00 08 */	lfs f4, 8(r1)
/* 8008CDB8 00089CF8  EC 02 01 F2 */	fmuls f0, f2, f7
/* 8008CDBC 00089CFC  C1 1D 00 58 */	lfs f8, 0x58(r29)
/* 8008CDC0 00089D00  EC 62 09 38 */	fmsubs f3, f2, f4, f1
/* 8008CDC4 00089D04  C0 42 88 08 */	lfs f2, lbl_80516B68@sda21(r2)
/* 8008CDC8 00089D08  EC 88 01 32 */	fmuls f4, f8, f4
/* 8008CDCC 00089D0C  C0 23 48 DC */	lfs f1, __float_epsilon@l(r3)
/* 8008CDD0 00089D10  EC 08 01 78 */	fmsubs f0, f8, f5, f0
/* 8008CDD4 00089D14  EC A3 00 F2 */	fmuls f5, f3, f3
/* 8008CDD8 00089D18  EC 42 00 72 */	fmuls f2, f2, f1
/* 8008CDDC 00089D1C  EC 86 21 F8 */	fmsubs f4, f6, f7, f4
/* 8008CDE0 00089D20  EC 20 28 3A */	fmadds f1, f0, f0, f5
/* 8008CDE4 00089D24  EC E4 09 3A */	fmadds f7, f4, f4, f1
/* 8008CDE8 00089D28  FC 07 10 40 */	fcmpo cr0, f7, f2
/* 8008CDEC 00089D2C  4C 40 13 82 */	cror 2, 0, 2
/* 8008CDF0 00089D30  41 82 01 F0 */	beq .L_8008CFE0
/* 8008CDF4 00089D34  FC 07 10 40 */	fcmpo cr0, f7, f2
/* 8008CDF8 00089D38  4C 40 13 82 */	cror 2, 0, 2
/* 8008CDFC 00089D3C  41 82 00 44 */	beq .L_8008CE40
/* 8008CE00 00089D40  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008CE04 00089D44  FC 07 08 40 */	fcmpo cr0, f7, f1
/* 8008CE08 00089D48  4C 40 13 82 */	cror 2, 0, 2
/* 8008CE0C 00089D4C  40 82 00 08 */	bne .L_8008CE14
/* 8008CE10 00089D50  48 00 00 24 */	b .L_8008CE34
.L_8008CE14:
/* 8008CE14 00089D54  FC C0 38 34 */	frsqrte f6, f7
/* 8008CE18 00089D58  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008CE1C 00089D5C  C0 22 88 0C */	lfs f1, lbl_80516B6C@sda21(r2)
/* 8008CE20 00089D60  FC C0 30 18 */	frsp f6, f6
/* 8008CE24 00089D64  EC 46 01 B2 */	fmuls f2, f6, f6
/* 8008CE28 00089D68  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008CE2C 00089D6C  EC 27 08 BC */	fnmsubs f1, f7, f2, f1
/* 8008CE30 00089D70  EC E5 00 72 */	fmuls f7, f5, f1
.L_8008CE34:
/* 8008CE34 00089D74  EC 00 01 F2 */	fmuls f0, f0, f7
/* 8008CE38 00089D78  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008CE3C 00089D7C  EC 84 01 F2 */	fmuls f4, f4, f7
.L_8008CE40:
/* 8008CE40 00089D80  C1 01 00 10 */	lfs f8, 0x10(r1)
/* 8008CE44 00089D84  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008CE48 00089D88  C0 E1 00 08 */	lfs f7, 8(r1)
/* 8008CE4C 00089D8C  EC 28 00 F2 */	fmuls f1, f8, f3
/* 8008CE50 00089D90  C1 21 00 0C */	lfs f9, 0xc(r1)
/* 8008CE54 00089D94  EC A7 01 32 */	fmuls f5, f7, f4
/* 8008CE58 00089D98  C0 42 88 08 */	lfs f2, lbl_80516B68@sda21(r2)
/* 8008CE5C 00089D9C  EC C9 00 32 */	fmuls f6, f9, f0
/* 8008CE60 00089DA0  EC 29 09 38 */	fmsubs f1, f9, f4, f1
/* 8008CE64 00089DA4  EC A8 28 38 */	fmsubs f5, f8, f0, f5
/* 8008CE68 00089DA8  EC C7 30 F8 */	fmsubs f6, f7, f3, f6
/* 8008CE6C 00089DAC  D0 3D 00 54 */	stfs f1, 0x54(r29)
/* 8008CE70 00089DB0  D0 BD 00 58 */	stfs f5, 0x58(r29)
/* 8008CE74 00089DB4  D0 DD 00 5C */	stfs f6, 0x5c(r29)
/* 8008CE78 00089DB8  C0 BD 00 54 */	lfs f5, 0x54(r29)
/* 8008CE7C 00089DBC  C0 3D 00 58 */	lfs f1, 0x58(r29)
/* 8008CE80 00089DC0  EC C5 01 72 */	fmuls f6, f5, f5
/* 8008CE84 00089DC4  C0 FD 00 5C */	lfs f7, 0x5c(r29)
/* 8008CE88 00089DC8  EC A1 00 72 */	fmuls f5, f1, f1
/* 8008CE8C 00089DCC  C0 23 48 DC */	lfs f1, __float_epsilon@l(r3)
/* 8008CE90 00089DD0  EC E7 01 F2 */	fmuls f7, f7, f7
/* 8008CE94 00089DD4  EC 22 00 72 */	fmuls f1, f2, f1
/* 8008CE98 00089DD8  EC 46 28 2A */	fadds f2, f6, f5
/* 8008CE9C 00089DDC  EC E7 10 2A */	fadds f7, f7, f2
/* 8008CEA0 00089DE0  FC 07 08 40 */	fcmpo cr0, f7, f1
/* 8008CEA4 00089DE4  4C 40 13 82 */	cror 2, 0, 2
/* 8008CEA8 00089DE8  41 82 00 5C */	beq .L_8008CF04
/* 8008CEAC 00089DEC  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008CEB0 00089DF0  FC 07 08 40 */	fcmpo cr0, f7, f1
/* 8008CEB4 00089DF4  4C 40 13 82 */	cror 2, 0, 2
/* 8008CEB8 00089DF8  40 82 00 08 */	bne .L_8008CEC0
/* 8008CEBC 00089DFC  48 00 00 24 */	b .L_8008CEE0
.L_8008CEC0:
/* 8008CEC0 00089E00  FC C0 38 34 */	frsqrte f6, f7
/* 8008CEC4 00089E04  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008CEC8 00089E08  C0 22 88 0C */	lfs f1, lbl_80516B6C@sda21(r2)
/* 8008CECC 00089E0C  FC C0 30 18 */	frsp f6, f6
/* 8008CED0 00089E10  EC 46 01 B2 */	fmuls f2, f6, f6
/* 8008CED4 00089E14  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008CED8 00089E18  EC 27 08 BC */	fnmsubs f1, f7, f2, f1
/* 8008CEDC 00089E1C  EC E5 00 72 */	fmuls f7, f5, f1
.L_8008CEE0:
/* 8008CEE0 00089E20  C0 3D 00 54 */	lfs f1, 0x54(r29)
/* 8008CEE4 00089E24  EC 21 01 F2 */	fmuls f1, f1, f7
/* 8008CEE8 00089E28  D0 3D 00 54 */	stfs f1, 0x54(r29)
/* 8008CEEC 00089E2C  C0 3D 00 58 */	lfs f1, 0x58(r29)
/* 8008CEF0 00089E30  EC 21 01 F2 */	fmuls f1, f1, f7
/* 8008CEF4 00089E34  D0 3D 00 58 */	stfs f1, 0x58(r29)
/* 8008CEF8 00089E38  C0 3D 00 5C */	lfs f1, 0x5c(r29)
/* 8008CEFC 00089E3C  EC 21 01 F2 */	fmuls f1, f1, f7
/* 8008CF00 00089E40  D0 3D 00 5C */	stfs f1, 0x5c(r29)
.L_8008CF04:
/* 8008CF04 00089E44  C0 BF 01 44 */	lfs f5, 0x144(r31)
/* 8008CF08 00089E48  38 9E 00 74 */	addi r4, r30, 0x74
/* 8008CF0C 00089E4C  C0 3D 00 60 */	lfs f1, 0x60(r29)
/* 8008CF10 00089E50  38 61 00 14 */	addi r3, r1, 0x14
/* 8008CF14 00089E54  C0 FF 01 48 */	lfs f7, 0x148(r31)
/* 8008CF18 00089E58  C0 5D 00 64 */	lfs f2, 0x64(r29)
/* 8008CF1C 00089E5C  EC 25 00 72 */	fmuls f1, f5, f1
/* 8008CF20 00089E60  C0 DD 00 54 */	lfs f6, 0x54(r29)
/* 8008CF24 00089E64  C0 A1 00 08 */	lfs f5, 8(r1)
/* 8008CF28 00089E68  EC 47 00 B2 */	fmuls f2, f7, f2
/* 8008CF2C 00089E6C  D0 C1 00 14 */	stfs f6, 0x14(r1)
/* 8008CF30 00089E70  C0 C1 00 0C */	lfs f6, 0xc(r1)
/* 8008CF34 00089E74  D0 A1 00 18 */	stfs f5, 0x18(r1)
/* 8008CF38 00089E78  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 8008CF3C 00089E7C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8008CF40 00089E80  C0 1D 00 00 */	lfs f0, 0(r29)
/* 8008CF44 00089E84  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8008CF48 00089E88  C0 1D 00 58 */	lfs f0, 0x58(r29)
/* 8008CF4C 00089E8C  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008CF50 00089E90  D0 C1 00 28 */	stfs f6, 0x28(r1)
/* 8008CF54 00089E94  D0 61 00 2C */	stfs f3, 0x2c(r1)
/* 8008CF58 00089E98  C0 1D 00 04 */	lfs f0, 4(r29)
/* 8008CF5C 00089E9C  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 8008CF60 00089EA0  C0 1D 00 5C */	lfs f0, 0x5c(r29)
/* 8008CF64 00089EA4  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8008CF68 00089EA8  D0 A1 00 38 */	stfs f5, 0x38(r1)
/* 8008CF6C 00089EAC  D0 81 00 3C */	stfs f4, 0x3c(r1)
/* 8008CF70 00089EB0  C0 1D 00 08 */	lfs f0, 8(r29)
/* 8008CF74 00089EB4  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8008CF78 00089EB8  80 1F 02 08 */	lwz r0, 0x208(r31)
/* 8008CF7C 00089EBC  54 00 10 3A */	slwi r0, r0, 2
/* 8008CF80 00089EC0  7D 84 00 2E */	lwzx r12, r4, r0
/* 8008CF84 00089EC4  7D 89 03 A6 */	mtctr r12
/* 8008CF88 00089EC8  4E 80 04 21 */	bctrl 
/* 8008CF8C 00089ECC  38 81 00 14 */	addi r4, r1, 0x14
/* 8008CF90 00089ED0  38 7F 01 84 */	addi r3, r31, 0x184
/* 8008CF94 00089ED4  7C 85 23 78 */	mr r5, r4
/* 8008CF98 00089ED8  48 05 D3 69 */	bl PSMTXConcat
/* 8008CF9C 00089EDC  38 61 00 14 */	addi r3, r1, 0x14
/* 8008CFA0 00089EE0  38 80 00 00 */	li r4, 0
/* 8008CFA4 00089EE4  48 05 C5 D5 */	bl GXLoadPosMtxImm
/* 8008CFA8 00089EE8  80 1F 02 10 */	lwz r0, 0x210(r31)
/* 8008CFAC 00089EEC  38 BE 00 40 */	addi r5, r30, 0x40
/* 8008CFB0 00089EF0  7F E3 FB 78 */	mr r3, r31
/* 8008CFB4 00089EF4  38 81 00 14 */	addi r4, r1, 0x14
/* 8008CFB8 00089EF8  54 00 10 3A */	slwi r0, r0, 2
/* 8008CFBC 00089EFC  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008CFC0 00089F00  7D 89 03 A6 */	mtctr r12
/* 8008CFC4 00089F04  4E 80 04 21 */	bctrl 
/* 8008CFC8 00089F08  80 1F 02 0C */	lwz r0, 0x20c(r31)
/* 8008CFCC 00089F0C  38 6D 81 00 */	addi r3, r13, p_dl@sda21
/* 8008CFD0 00089F10  38 80 00 20 */	li r4, 0x20
/* 8008CFD4 00089F14  54 00 10 3A */	slwi r0, r0, 2
/* 8008CFD8 00089F18  7C 63 00 2E */	lwzx r3, r3, r0
/* 8008CFDC 00089F1C  48 05 C3 FD */	bl GXCallDisplayList
.L_8008CFE0:
/* 8008CFE0 00089F20  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8008CFE4 00089F24  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8008CFE8 00089F28  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8008CFEC 00089F2C  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8008CFF0 00089F30  7C 08 03 A6 */	mtlr r0
/* 8008CFF4 00089F34  38 21 00 60 */	addi r1, r1, 0x60
/* 8008CFF8 00089F38  4E 80 00 20 */	blr 
.endfn JPADrawDirection__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008CFFC 00089F3C  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 8008D000 00089F40  7C 08 02 A6 */	mflr r0
/* 8008D004 00089F44  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 8008D008 00089F48  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 8008D00C 00089F4C  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 8008D010 00089F50  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 8008D014 00089F54  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 8008D018 00089F58  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 8008D01C 00089F5C  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 8008D020 00089F60  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 8008D024 00089F64  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 8008D028 00089F68  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 8008D02C 00089F6C  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 8008D030 00089F70  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 8008D034 00089F74  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8008D038 00089F78  93 A1 00 84 */	stw r29, 0x84(r1)
/* 8008D03C 00089F7C  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008D040 00089F80  3C A0 80 4A */	lis r5, jpa_dl@ha
/* 8008D044 00089F84  7C 9E 23 78 */	mr r30, r4
/* 8008D048 00089F88  7C 7D 1B 78 */	mr r29, r3
/* 8008D04C 00089F8C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008D050 00089F90  3B E5 30 A0 */	addi r31, r5, jpa_dl@l
/* 8008D054 00089F94  40 82 03 60 */	bne .L_8008D3B4
/* 8008D058 00089F98  A0 FE 00 88 */	lhz r7, 0x88(r30)
/* 8008D05C 00089F9C  3C C0 80 50 */	lis r6, sincosTable___5JMath@ha
/* 8008D060 00089FA0  80 1D 02 00 */	lwz r0, 0x200(r29)
/* 8008D064 00089FA4  38 BF 00 4C */	addi r5, r31, 0x4c
/* 8008D068 00089FA8  7C E8 07 34 */	extsh r8, r7
/* 8008D06C 00089FAC  38 E6 71 A0 */	addi r7, r6, sincosTable___5JMath@l
/* 8008D070 00089FB0  55 08 F4 B8 */	rlwinm r8, r8, 0x1e, 0x12, 0x1c
/* 8008D074 00089FB4  54 00 10 3A */	slwi r0, r0, 2
/* 8008D078 00089FB8  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008D07C 00089FBC  7C C7 42 14 */	add r6, r7, r8
/* 8008D080 00089FC0  38 A1 00 08 */	addi r5, r1, 8
/* 8008D084 00089FC4  7F E7 44 2E */	lfsx f31, r7, r8
/* 8008D088 00089FC8  C3 C6 00 04 */	lfs f30, 4(r6)
/* 8008D08C 00089FCC  7D 89 03 A6 */	mtctr r12
/* 8008D090 00089FD0  4E 80 04 21 */	bctrl 
/* 8008D094 00089FD4  C0 21 00 08 */	lfs f1, 8(r1)
/* 8008D098 00089FD8  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008D09C 00089FDC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8008D0A0 00089FE0  EC 61 00 72 */	fmuls f3, f1, f1
/* 8008D0A4 00089FE4  C0 81 00 10 */	lfs f4, 0x10(r1)
/* 8008D0A8 00089FE8  EC 40 00 32 */	fmuls f2, f0, f0
/* 8008D0AC 00089FEC  C0 22 88 08 */	lfs f1, lbl_80516B68@sda21(r2)
/* 8008D0B0 00089FF0  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 8008D0B4 00089FF4  EC 84 01 32 */	fmuls f4, f4, f4
/* 8008D0B8 00089FF8  EC 43 10 2A */	fadds f2, f3, f2
/* 8008D0BC 00089FFC  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008D0C0 0008A000  EC 84 10 2A */	fadds f4, f4, f2
/* 8008D0C4 0008A004  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008D0C8 0008A008  4C 40 13 82 */	cror 2, 0, 2
/* 8008D0CC 0008A00C  41 82 02 E8 */	beq .L_8008D3B4
/* 8008D0D0 0008A010  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008D0D4 0008A014  4C 40 13 82 */	cror 2, 0, 2
/* 8008D0D8 0008A018  41 82 00 5C */	beq .L_8008D134
/* 8008D0DC 0008A01C  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008D0E0 0008A020  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008D0E4 0008A024  4C 40 13 82 */	cror 2, 0, 2
/* 8008D0E8 0008A028  40 82 00 08 */	bne .L_8008D0F0
/* 8008D0EC 0008A02C  48 00 00 24 */	b .L_8008D110
.L_8008D0F0:
/* 8008D0F0 0008A030  FC 60 20 34 */	frsqrte f3, f4
/* 8008D0F4 0008A034  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008D0F8 0008A038  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008D0FC 0008A03C  FC 60 18 18 */	frsp f3, f3
/* 8008D100 0008A040  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008D104 0008A044  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008D108 0008A048  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 8008D10C 0008A04C  EC 82 00 32 */	fmuls f4, f2, f0
.L_8008D110:
/* 8008D110 0008A050  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008D114 0008A054  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8008D118 0008A058  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008D11C 0008A05C  EC 42 01 32 */	fmuls f2, f2, f4
/* 8008D120 0008A060  EC 21 01 32 */	fmuls f1, f1, f4
/* 8008D124 0008A064  EC 00 01 32 */	fmuls f0, f0, f4
/* 8008D128 0008A068  D0 41 00 08 */	stfs f2, 8(r1)
/* 8008D12C 0008A06C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8008D130 0008A070  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8008D134:
/* 8008D134 0008A074  C0 9E 00 54 */	lfs f4, 0x54(r30)
/* 8008D138 0008A078  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008D13C 0008A07C  C0 C1 00 10 */	lfs f6, 0x10(r1)
/* 8008D140 0008A080  C0 A1 00 0C */	lfs f5, 0xc(r1)
/* 8008D144 0008A084  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 8008D148 0008A088  EC 04 01 B2 */	fmuls f0, f4, f6
/* 8008D14C 0008A08C  C0 61 00 08 */	lfs f3, 8(r1)
/* 8008D150 0008A090  EC 41 01 72 */	fmuls f2, f1, f5
/* 8008D154 0008A094  C0 FE 00 58 */	lfs f7, 0x58(r30)
/* 8008D158 0008A098  EF 81 00 F8 */	fmsubs f28, f1, f3, f0
/* 8008D15C 0008A09C  C0 22 88 08 */	lfs f1, lbl_80516B68@sda21(r2)
/* 8008D160 0008A0A0  EC 67 00 F2 */	fmuls f3, f7, f3
/* 8008D164 0008A0A4  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 8008D168 0008A0A8  EF A7 11 B8 */	fmsubs f29, f7, f6, f2
/* 8008D16C 0008A0AC  EC 5C 07 32 */	fmuls f2, f28, f28
/* 8008D170 0008A0B0  EC 21 00 32 */	fmuls f1, f1, f0
/* 8008D174 0008A0B4  EF 64 19 78 */	fmsubs f27, f4, f5, f3
/* 8008D178 0008A0B8  EC 1D 17 7A */	fmadds f0, f29, f29, f2
/* 8008D17C 0008A0BC  EC 9B 06 FA */	fmadds f4, f27, f27, f0
/* 8008D180 0008A0C0  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8008D184 0008A0C4  4C 40 13 82 */	cror 2, 0, 2
/* 8008D188 0008A0C8  41 82 02 2C */	beq .L_8008D3B4
/* 8008D18C 0008A0CC  FC 04 08 40 */	fcmpo cr0, f4, f1
/* 8008D190 0008A0D0  4C 40 13 82 */	cror 2, 0, 2
/* 8008D194 0008A0D4  41 82 00 44 */	beq .L_8008D1D8
/* 8008D198 0008A0D8  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008D19C 0008A0DC  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008D1A0 0008A0E0  4C 40 13 82 */	cror 2, 0, 2
/* 8008D1A4 0008A0E4  40 82 00 08 */	bne .L_8008D1AC
/* 8008D1A8 0008A0E8  48 00 00 24 */	b .L_8008D1CC
.L_8008D1AC:
/* 8008D1AC 0008A0EC  FC 60 20 34 */	frsqrte f3, f4
/* 8008D1B0 0008A0F0  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008D1B4 0008A0F4  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008D1B8 0008A0F8  FC 60 18 18 */	frsp f3, f3
/* 8008D1BC 0008A0FC  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008D1C0 0008A100  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008D1C4 0008A104  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 8008D1C8 0008A108  EC 82 00 32 */	fmuls f4, f2, f0
.L_8008D1CC:
/* 8008D1CC 0008A10C  EF BD 01 32 */	fmuls f29, f29, f4
/* 8008D1D0 0008A110  EF 9C 01 32 */	fmuls f28, f28, f4
/* 8008D1D4 0008A114  EF 7B 01 32 */	fmuls f27, f27, f4
.L_8008D1D8:
/* 8008D1D8 0008A118  C0 A1 00 10 */	lfs f5, 0x10(r1)
/* 8008D1DC 0008A11C  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008D1E0 0008A120  C0 81 00 08 */	lfs f4, 8(r1)
/* 8008D1E4 0008A124  EC 05 07 32 */	fmuls f0, f5, f28
/* 8008D1E8 0008A128  C0 C1 00 0C */	lfs f6, 0xc(r1)
/* 8008D1EC 0008A12C  EC 44 06 F2 */	fmuls f2, f4, f27
/* 8008D1F0 0008A130  C0 22 88 08 */	lfs f1, lbl_80516B68@sda21(r2)
/* 8008D1F4 0008A134  EC 66 07 72 */	fmuls f3, f6, f29
/* 8008D1F8 0008A138  EC 06 06 F8 */	fmsubs f0, f6, f27, f0
/* 8008D1FC 0008A13C  EC 45 17 78 */	fmsubs f2, f5, f29, f2
/* 8008D200 0008A140  EC 64 1F 38 */	fmsubs f3, f4, f28, f3
/* 8008D204 0008A144  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 8008D208 0008A148  D0 5E 00 58 */	stfs f2, 0x58(r30)
/* 8008D20C 0008A14C  D0 7E 00 5C */	stfs f3, 0x5c(r30)
/* 8008D210 0008A150  C0 5E 00 54 */	lfs f2, 0x54(r30)
/* 8008D214 0008A154  C0 1E 00 58 */	lfs f0, 0x58(r30)
/* 8008D218 0008A158  EC 62 00 B2 */	fmuls f3, f2, f2
/* 8008D21C 0008A15C  C0 9E 00 5C */	lfs f4, 0x5c(r30)
/* 8008D220 0008A160  EC 40 00 32 */	fmuls f2, f0, f0
/* 8008D224 0008A164  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 8008D228 0008A168  EC 84 01 32 */	fmuls f4, f4, f4
/* 8008D22C 0008A16C  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008D230 0008A170  EC 23 10 2A */	fadds f1, f3, f2
/* 8008D234 0008A174  EC 84 08 2A */	fadds f4, f4, f1
/* 8008D238 0008A178  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008D23C 0008A17C  4C 40 13 82 */	cror 2, 0, 2
/* 8008D240 0008A180  41 82 00 5C */	beq .L_8008D29C
/* 8008D244 0008A184  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008D248 0008A188  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008D24C 0008A18C  4C 40 13 82 */	cror 2, 0, 2
/* 8008D250 0008A190  40 82 00 08 */	bne .L_8008D258
/* 8008D254 0008A194  48 00 00 24 */	b .L_8008D278
.L_8008D258:
/* 8008D258 0008A198  FC 60 20 34 */	frsqrte f3, f4
/* 8008D25C 0008A19C  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008D260 0008A1A0  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008D264 0008A1A4  FC 60 18 18 */	frsp f3, f3
/* 8008D268 0008A1A8  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008D26C 0008A1AC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008D270 0008A1B0  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 8008D274 0008A1B4  EC 82 00 32 */	fmuls f4, f2, f0
.L_8008D278:
/* 8008D278 0008A1B8  C0 1E 00 54 */	lfs f0, 0x54(r30)
/* 8008D27C 0008A1BC  EC 00 01 32 */	fmuls f0, f0, f4
/* 8008D280 0008A1C0  D0 1E 00 54 */	stfs f0, 0x54(r30)
/* 8008D284 0008A1C4  C0 1E 00 58 */	lfs f0, 0x58(r30)
/* 8008D288 0008A1C8  EC 00 01 32 */	fmuls f0, f0, f4
/* 8008D28C 0008A1CC  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 8008D290 0008A1D0  C0 1E 00 5C */	lfs f0, 0x5c(r30)
/* 8008D294 0008A1D4  EC 00 01 32 */	fmuls f0, f0, f4
/* 8008D298 0008A1D8  D0 1E 00 5C */	stfs f0, 0x5c(r30)
.L_8008D29C:
/* 8008D29C 0008A1DC  80 1D 02 04 */	lwz r0, 0x204(r29)
/* 8008D2A0 0008A1E0  38 7F 00 60 */	addi r3, r31, 0x60
/* 8008D2A4 0008A1E4  C0 BD 01 44 */	lfs f5, 0x144(r29)
/* 8008D2A8 0008A1E8  FC 20 F8 90 */	fmr f1, f31
/* 8008D2AC 0008A1EC  54 00 10 3A */	slwi r0, r0, 2
/* 8008D2B0 0008A1F0  C0 9E 00 60 */	lfs f4, 0x60(r30)
/* 8008D2B4 0008A1F4  C0 7D 01 48 */	lfs f3, 0x148(r29)
/* 8008D2B8 0008A1F8  FC 40 F0 90 */	fmr f2, f30
/* 8008D2BC 0008A1FC  C0 1E 00 64 */	lfs f0, 0x64(r30)
/* 8008D2C0 0008A200  7D 83 00 2E */	lwzx r12, r3, r0
/* 8008D2C4 0008A204  EF C5 01 32 */	fmuls f30, f5, f4
/* 8008D2C8 0008A208  EF E3 00 32 */	fmuls f31, f3, f0
/* 8008D2CC 0008A20C  38 61 00 44 */	addi r3, r1, 0x44
/* 8008D2D0 0008A210  7D 89 03 A6 */	mtctr r12
/* 8008D2D4 0008A214  4E 80 04 21 */	bctrl 
/* 8008D2D8 0008A218  80 1D 02 08 */	lwz r0, 0x208(r29)
/* 8008D2DC 0008A21C  38 9F 00 74 */	addi r4, r31, 0x74
/* 8008D2E0 0008A220  FC 20 F0 90 */	fmr f1, f30
/* 8008D2E4 0008A224  38 61 00 44 */	addi r3, r1, 0x44
/* 8008D2E8 0008A228  54 00 10 3A */	slwi r0, r0, 2
/* 8008D2EC 0008A22C  FC 40 F8 90 */	fmr f2, f31
/* 8008D2F0 0008A230  7D 84 00 2E */	lwzx r12, r4, r0
/* 8008D2F4 0008A234  7D 89 03 A6 */	mtctr r12
/* 8008D2F8 0008A238  4E 80 04 21 */	bctrl 
/* 8008D2FC 0008A23C  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 8008D300 0008A240  38 81 00 44 */	addi r4, r1, 0x44
/* 8008D304 0008A244  C0 01 00 08 */	lfs f0, 8(r1)
/* 8008D308 0008A248  7C 85 23 78 */	mr r5, r4
/* 8008D30C 0008A24C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 8008D310 0008A250  38 61 00 14 */	addi r3, r1, 0x14
/* 8008D314 0008A254  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8008D318 0008A258  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 8008D31C 0008A25C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008D320 0008A260  D3 A1 00 1C */	stfs f29, 0x1c(r1)
/* 8008D324 0008A264  C0 5E 00 00 */	lfs f2, 0(r30)
/* 8008D328 0008A268  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 8008D32C 0008A26C  C0 5E 00 58 */	lfs f2, 0x58(r30)
/* 8008D330 0008A270  D0 41 00 24 */	stfs f2, 0x24(r1)
/* 8008D334 0008A274  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 8008D338 0008A278  D3 81 00 2C */	stfs f28, 0x2c(r1)
/* 8008D33C 0008A27C  C0 3E 00 04 */	lfs f1, 4(r30)
/* 8008D340 0008A280  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 8008D344 0008A284  C0 3E 00 5C */	lfs f1, 0x5c(r30)
/* 8008D348 0008A288  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 8008D34C 0008A28C  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 8008D350 0008A290  D3 61 00 3C */	stfs f27, 0x3c(r1)
/* 8008D354 0008A294  C0 1E 00 08 */	lfs f0, 8(r30)
/* 8008D358 0008A298  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8008D35C 0008A29C  48 05 CF A5 */	bl PSMTXConcat
/* 8008D360 0008A2A0  38 7D 01 84 */	addi r3, r29, 0x184
/* 8008D364 0008A2A4  38 81 00 44 */	addi r4, r1, 0x44
/* 8008D368 0008A2A8  38 A1 00 14 */	addi r5, r1, 0x14
/* 8008D36C 0008A2AC  48 05 CF 95 */	bl PSMTXConcat
/* 8008D370 0008A2B0  38 61 00 14 */	addi r3, r1, 0x14
/* 8008D374 0008A2B4  38 80 00 00 */	li r4, 0
/* 8008D378 0008A2B8  48 05 C2 01 */	bl GXLoadPosMtxImm
/* 8008D37C 0008A2BC  80 1D 02 10 */	lwz r0, 0x210(r29)
/* 8008D380 0008A2C0  38 BF 00 40 */	addi r5, r31, 0x40
/* 8008D384 0008A2C4  7F A3 EB 78 */	mr r3, r29
/* 8008D388 0008A2C8  38 81 00 14 */	addi r4, r1, 0x14
/* 8008D38C 0008A2CC  54 00 10 3A */	slwi r0, r0, 2
/* 8008D390 0008A2D0  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008D394 0008A2D4  7D 89 03 A6 */	mtctr r12
/* 8008D398 0008A2D8  4E 80 04 21 */	bctrl 
/* 8008D39C 0008A2DC  80 1D 02 0C */	lwz r0, 0x20c(r29)
/* 8008D3A0 0008A2E0  38 6D 81 00 */	addi r3, r13, p_dl@sda21
/* 8008D3A4 0008A2E4  38 80 00 20 */	li r4, 0x20
/* 8008D3A8 0008A2E8  54 00 10 3A */	slwi r0, r0, 2
/* 8008D3AC 0008A2EC  7C 63 00 2E */	lwzx r3, r3, r0
/* 8008D3B0 0008A2F0  48 05 C0 29 */	bl GXCallDisplayList
.L_8008D3B4:
/* 8008D3B4 0008A2F4  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 8008D3B8 0008A2F8  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 8008D3BC 0008A2FC  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 8008D3C0 0008A300  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 8008D3C4 0008A304  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 8008D3C8 0008A308  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 8008D3CC 0008A30C  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 8008D3D0 0008A310  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 8008D3D4 0008A314  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 8008D3D8 0008A318  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 8008D3DC 0008A31C  83 E1 00 8C */	lwz r31, 0x8c(r1)
/* 8008D3E0 0008A320  83 C1 00 88 */	lwz r30, 0x88(r1)
/* 8008D3E4 0008A324  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 8008D3E8 0008A328  83 A1 00 84 */	lwz r29, 0x84(r1)
/* 8008D3EC 0008A32C  7C 08 03 A6 */	mtlr r0
/* 8008D3F0 0008A330  38 21 00 E0 */	addi r1, r1, 0xe0
/* 8008D3F4 0008A334  4E 80 00 20 */	blr 
.endfn JPADrawRotDirection__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008D3F8 0008A338  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 8008D3FC 0008A33C  7C 08 02 A6 */	mflr r0
/* 8008D400 0008A340  3C A0 80 4A */	lis r5, jpa_dl@ha
/* 8008D404 0008A344  90 01 00 64 */	stw r0, 0x64(r1)
/* 8008D408 0008A348  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 8008D40C 0008A34C  3B E5 30 A0 */	addi r31, r5, jpa_dl@l
/* 8008D410 0008A350  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8008D414 0008A354  7C 9E 23 78 */	mr r30, r4
/* 8008D418 0008A358  93 A1 00 54 */	stw r29, 0x54(r1)
/* 8008D41C 0008A35C  7C 7D 1B 78 */	mr r29, r3
/* 8008D420 0008A360  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008D424 0008A364  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008D428 0008A368  40 82 01 BC */	bne .L_8008D5E4
/* 8008D42C 0008A36C  80 1D 02 00 */	lwz r0, 0x200(r29)
/* 8008D430 0008A370  38 DF 00 4C */	addi r6, r31, 0x4c
/* 8008D434 0008A374  38 A1 00 14 */	addi r5, r1, 0x14
/* 8008D438 0008A378  54 00 10 3A */	slwi r0, r0, 2
/* 8008D43C 0008A37C  7D 86 00 2E */	lwzx r12, r6, r0
/* 8008D440 0008A380  7D 89 03 A6 */	mtctr r12
/* 8008D444 0008A384  4E 80 04 21 */	bctrl 
/* 8008D448 0008A388  C0 9D 01 AC */	lfs f4, 0x1ac(r29)
/* 8008D44C 0008A38C  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008D450 0008A390  C0 E1 00 14 */	lfs f7, 0x14(r1)
/* 8008D454 0008A394  C0 BD 01 A8 */	lfs f5, 0x1a8(r29)
/* 8008D458 0008A398  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 8008D45C 0008A39C  EC 07 01 32 */	fmuls f0, f7, f4
/* 8008D460 0008A3A0  C0 7D 01 A4 */	lfs f3, 0x1a4(r29)
/* 8008D464 0008A3A4  EC 41 01 72 */	fmuls f2, f1, f5
/* 8008D468 0008A3A8  C1 01 00 18 */	lfs f8, 0x18(r1)
/* 8008D46C 0008A3AC  EC C1 00 F8 */	fmsubs f6, f1, f3, f0
/* 8008D470 0008A3B0  C0 22 88 08 */	lfs f1, lbl_80516B68@sda21(r2)
/* 8008D474 0008A3B4  EC 68 00 F2 */	fmuls f3, f8, f3
/* 8008D478 0008A3B8  C0 03 48 DC */	lfs f0, __float_epsilon@l(r3)
/* 8008D47C 0008A3BC  EC 88 11 38 */	fmsubs f4, f8, f4, f2
/* 8008D480 0008A3C0  D0 C1 00 18 */	stfs f6, 0x18(r1)
/* 8008D484 0008A3C4  EC A7 19 78 */	fmsubs f5, f7, f5, f3
/* 8008D488 0008A3C8  EC 46 01 B2 */	fmuls f2, f6, f6
/* 8008D48C 0008A3CC  EC C1 00 32 */	fmuls f6, f1, f0
/* 8008D490 0008A3D0  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 8008D494 0008A3D4  EC 64 01 32 */	fmuls f3, f4, f4
/* 8008D498 0008A3D8  EC 25 01 72 */	fmuls f1, f5, f5
/* 8008D49C 0008A3DC  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 8008D4A0 0008A3E0  EC 03 10 2A */	fadds f0, f3, f2
/* 8008D4A4 0008A3E4  EC 81 00 2A */	fadds f4, f1, f0
/* 8008D4A8 0008A3E8  FC 04 30 40 */	fcmpo cr0, f4, f6
/* 8008D4AC 0008A3EC  4C 40 13 82 */	cror 2, 0, 2
/* 8008D4B0 0008A3F0  41 82 01 34 */	beq .L_8008D5E4
/* 8008D4B4 0008A3F4  FC 04 30 40 */	fcmpo cr0, f4, f6
/* 8008D4B8 0008A3F8  4C 40 13 82 */	cror 2, 0, 2
/* 8008D4BC 0008A3FC  41 82 00 5C */	beq .L_8008D518
/* 8008D4C0 0008A400  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008D4C4 0008A404  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 8008D4C8 0008A408  4C 40 13 82 */	cror 2, 0, 2
/* 8008D4CC 0008A40C  40 82 00 08 */	bne .L_8008D4D4
/* 8008D4D0 0008A410  48 00 00 24 */	b .L_8008D4F4
.L_8008D4D4:
/* 8008D4D4 0008A414  FC 60 20 34 */	frsqrte f3, f4
/* 8008D4D8 0008A418  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008D4DC 0008A41C  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008D4E0 0008A420  FC 60 18 18 */	frsp f3, f3
/* 8008D4E4 0008A424  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008D4E8 0008A428  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008D4EC 0008A42C  EC 04 00 7C */	fnmsubs f0, f4, f1, f0
/* 8008D4F0 0008A430  EC 82 00 32 */	fmuls f4, f2, f0
.L_8008D4F4:
/* 8008D4F4 0008A434  C0 41 00 14 */	lfs f2, 0x14(r1)
/* 8008D4F8 0008A438  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 8008D4FC 0008A43C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8008D500 0008A440  EC 42 01 32 */	fmuls f2, f2, f4
/* 8008D504 0008A444  EC 21 01 32 */	fmuls f1, f1, f4
/* 8008D508 0008A448  EC 00 01 32 */	fmuls f0, f0, f4
/* 8008D50C 0008A44C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8008D510 0008A450  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 8008D514 0008A454  D0 01 00 1C */	stfs f0, 0x1c(r1)
.L_8008D518:
/* 8008D518 0008A458  38 81 00 14 */	addi r4, r1, 0x14
/* 8008D51C 0008A45C  38 7D 01 84 */	addi r3, r29, 0x184
/* 8008D520 0008A460  7C 85 23 78 */	mr r5, r4
/* 8008D524 0008A464  48 05 D7 09 */	bl PSMTXMultVecSR
/* 8008D528 0008A468  7F C4 F3 78 */	mr r4, r30
/* 8008D52C 0008A46C  38 7D 01 84 */	addi r3, r29, 0x184
/* 8008D530 0008A470  38 A1 00 08 */	addi r5, r1, 8
/* 8008D534 0008A474  48 05 D6 A5 */	bl PSMTXMultVec
/* 8008D538 0008A478  C0 A1 00 18 */	lfs f5, 0x18(r1)
/* 8008D53C 0008A47C  38 61 00 20 */	addi r3, r1, 0x20
/* 8008D540 0008A480  C0 9D 01 44 */	lfs f4, 0x144(r29)
/* 8008D544 0008A484  38 80 00 00 */	li r4, 0
/* 8008D548 0008A488  C0 1E 00 60 */	lfs f0, 0x60(r30)
/* 8008D54C 0008A48C  FC 20 28 50 */	fneg f1, f5
/* 8008D550 0008A490  C0 7D 01 48 */	lfs f3, 0x148(r29)
/* 8008D554 0008A494  C0 5E 00 64 */	lfs f2, 0x64(r30)
/* 8008D558 0008A498  EC E4 00 32 */	fmuls f7, f4, f0
/* 8008D55C 0008A49C  C0 81 00 14 */	lfs f4, 0x14(r1)
/* 8008D560 0008A4A0  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008D564 0008A4A4  EC 43 00 B2 */	fmuls f2, f3, f2
/* 8008D568 0008A4A8  ED 04 01 F2 */	fmuls f8, f4, f7
/* 8008D56C 0008A4AC  C0 C1 00 08 */	lfs f6, 8(r1)
/* 8008D570 0008A4B0  EC A5 01 F2 */	fmuls f5, f5, f7
/* 8008D574 0008A4B4  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8008D578 0008A4B8  EC E1 00 B2 */	fmuls f7, f1, f2
/* 8008D57C 0008A4BC  EC 84 00 B2 */	fmuls f4, f4, f2
/* 8008D580 0008A4C0  C0 42 87 EC */	lfs f2, lbl_80516B4C@sda21(r2)
/* 8008D584 0008A4C4  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 8008D588 0008A4C8  D1 01 00 20 */	stfs f8, 0x20(r1)
/* 8008D58C 0008A4CC  D0 E1 00 24 */	stfs f7, 0x24(r1)
/* 8008D590 0008A4D0  D0 C1 00 2C */	stfs f6, 0x2c(r1)
/* 8008D594 0008A4D4  D0 A1 00 30 */	stfs f5, 0x30(r1)
/* 8008D598 0008A4D8  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8008D59C 0008A4DC  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 8008D5A0 0008A4E0  D0 41 00 48 */	stfs f2, 0x48(r1)
/* 8008D5A4 0008A4E4  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 8008D5A8 0008A4E8  D0 01 00 44 */	stfs f0, 0x44(r1)
/* 8008D5AC 0008A4EC  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 8008D5B0 0008A4F0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8008D5B4 0008A4F4  48 05 BF C5 */	bl GXLoadPosMtxImm
/* 8008D5B8 0008A4F8  80 1D 02 10 */	lwz r0, 0x210(r29)
/* 8008D5BC 0008A4FC  38 BF 00 40 */	addi r5, r31, 0x40
/* 8008D5C0 0008A500  7F A3 EB 78 */	mr r3, r29
/* 8008D5C4 0008A504  38 81 00 20 */	addi r4, r1, 0x20
/* 8008D5C8 0008A508  54 00 10 3A */	slwi r0, r0, 2
/* 8008D5CC 0008A50C  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008D5D0 0008A510  7D 89 03 A6 */	mtctr r12
/* 8008D5D4 0008A514  4E 80 04 21 */	bctrl 
/* 8008D5D8 0008A518  38 7F 00 00 */	addi r3, r31, 0
/* 8008D5DC 0008A51C  38 80 00 20 */	li r4, 0x20
/* 8008D5E0 0008A520  48 05 BD F9 */	bl GXCallDisplayList
.L_8008D5E4:
/* 8008D5E4 0008A524  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8008D5E8 0008A528  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 8008D5EC 0008A52C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 8008D5F0 0008A530  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 8008D5F4 0008A534  7C 08 03 A6 */	mtlr r0
/* 8008D5F8 0008A538  38 21 00 60 */	addi r1, r1, 0x60
/* 8008D5FC 0008A53C  4E 80 00 20 */	blr 
.endfn JPADrawDBillboard__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008D600 0008A540  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8008D604 0008A544  7C 08 02 A6 */	mflr r0
/* 8008D608 0008A548  90 01 00 74 */	stw r0, 0x74(r1)
/* 8008D60C 0008A54C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8008D610 0008A550  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8008D614 0008A554  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8008D618 0008A558  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8008D61C 0008A55C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 8008D620 0008A560  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8008D624 0008A564  93 A1 00 44 */	stw r29, 0x44(r1)
/* 8008D628 0008A568  7C 9F 23 78 */	mr r31, r4
/* 8008D62C 0008A56C  3C 80 80 4A */	lis r4, jpa_dl@ha
/* 8008D630 0008A570  80 1F 00 7C */	lwz r0, 0x7c(r31)
/* 8008D634 0008A574  7C 7E 1B 78 */	mr r30, r3
/* 8008D638 0008A578  3B A4 30 A0 */	addi r29, r4, jpa_dl@l
/* 8008D63C 0008A57C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008D640 0008A580  40 82 00 E4 */	bne .L_8008D724
/* 8008D644 0008A584  80 1E 02 04 */	lwz r0, 0x204(r30)
/* 8008D648 0008A588  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 8008D64C 0008A58C  A0 BF 00 88 */	lhz r5, 0x88(r31)
/* 8008D650 0008A590  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 8008D654 0008A594  38 7D 00 60 */	addi r3, r29, 0x60
/* 8008D658 0008A598  54 00 10 3A */	slwi r0, r0, 2
/* 8008D65C 0008A59C  54 A5 F4 B8 */	rlwinm r5, r5, 0x1e, 0x12, 0x1c
/* 8008D660 0008A5A0  7D 83 00 2E */	lwzx r12, r3, r0
/* 8008D664 0008A5A4  7C 24 2C 2E */	lfsx f1, r4, r5
/* 8008D668 0008A5A8  7C 84 2A 14 */	add r4, r4, r5
/* 8008D66C 0008A5AC  C0 9E 01 44 */	lfs f4, 0x144(r30)
/* 8008D670 0008A5B0  38 61 00 08 */	addi r3, r1, 8
/* 8008D674 0008A5B4  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 8008D678 0008A5B8  C0 5E 01 48 */	lfs f2, 0x148(r30)
/* 8008D67C 0008A5BC  C0 1F 00 64 */	lfs f0, 0x64(r31)
/* 8008D680 0008A5C0  EF E4 00 F2 */	fmuls f31, f4, f3
/* 8008D684 0008A5C4  EF C2 00 32 */	fmuls f30, f2, f0
/* 8008D688 0008A5C8  C0 44 00 04 */	lfs f2, 4(r4)
/* 8008D68C 0008A5CC  7D 89 03 A6 */	mtctr r12
/* 8008D690 0008A5D0  4E 80 04 21 */	bctrl 
/* 8008D694 0008A5D4  80 1E 02 08 */	lwz r0, 0x208(r30)
/* 8008D698 0008A5D8  38 9D 00 74 */	addi r4, r29, 0x74
/* 8008D69C 0008A5DC  FC 20 F8 90 */	fmr f1, f31
/* 8008D6A0 0008A5E0  38 61 00 08 */	addi r3, r1, 8
/* 8008D6A4 0008A5E4  54 00 10 3A */	slwi r0, r0, 2
/* 8008D6A8 0008A5E8  FC 40 F0 90 */	fmr f2, f30
/* 8008D6AC 0008A5EC  7D 84 00 2E */	lwzx r12, r4, r0
/* 8008D6B0 0008A5F0  7D 89 03 A6 */	mtctr r12
/* 8008D6B4 0008A5F4  4E 80 04 21 */	bctrl 
/* 8008D6B8 0008A5F8  C0 1F 00 00 */	lfs f0, 0(r31)
/* 8008D6BC 0008A5FC  38 81 00 08 */	addi r4, r1, 8
/* 8008D6C0 0008A600  7C 85 23 78 */	mr r5, r4
/* 8008D6C4 0008A604  38 7E 01 84 */	addi r3, r30, 0x184
/* 8008D6C8 0008A608  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8008D6CC 0008A60C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 8008D6D0 0008A610  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8008D6D4 0008A614  C0 1F 00 08 */	lfs f0, 8(r31)
/* 8008D6D8 0008A618  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 8008D6DC 0008A61C  48 05 CC 25 */	bl PSMTXConcat
/* 8008D6E0 0008A620  38 61 00 08 */	addi r3, r1, 8
/* 8008D6E4 0008A624  38 80 00 00 */	li r4, 0
/* 8008D6E8 0008A628  48 05 BE 91 */	bl GXLoadPosMtxImm
/* 8008D6EC 0008A62C  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 8008D6F0 0008A630  38 BD 00 40 */	addi r5, r29, 0x40
/* 8008D6F4 0008A634  7F C3 F3 78 */	mr r3, r30
/* 8008D6F8 0008A638  38 81 00 08 */	addi r4, r1, 8
/* 8008D6FC 0008A63C  54 00 10 3A */	slwi r0, r0, 2
/* 8008D700 0008A640  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008D704 0008A644  7D 89 03 A6 */	mtctr r12
/* 8008D708 0008A648  4E 80 04 21 */	bctrl 
/* 8008D70C 0008A64C  80 1E 02 0C */	lwz r0, 0x20c(r30)
/* 8008D710 0008A650  38 6D 81 00 */	addi r3, r13, p_dl@sda21
/* 8008D714 0008A654  38 80 00 20 */	li r4, 0x20
/* 8008D718 0008A658  54 00 10 3A */	slwi r0, r0, 2
/* 8008D71C 0008A65C  7C 63 00 2E */	lwzx r3, r3, r0
/* 8008D720 0008A660  48 05 BC B9 */	bl GXCallDisplayList
.L_8008D724:
/* 8008D724 0008A664  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8008D728 0008A668  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8008D72C 0008A66C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8008D730 0008A670  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8008D734 0008A674  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 8008D738 0008A678  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 8008D73C 0008A67C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8008D740 0008A680  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 8008D744 0008A684  7C 08 03 A6 */	mtlr r0
/* 8008D748 0008A688  38 21 00 70 */	addi r1, r1, 0x70
/* 8008D74C 0008A68C  4E 80 00 20 */	blr 
.endfn JPADrawRotation__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008D750 0008A690  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008D754 0008A694  7C 08 02 A6 */	mflr r0
/* 8008D758 0008A698  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008D75C 0008A69C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8008D760 0008A6A0  7C 9F 23 78 */	mr r31, r4
/* 8008D764 0008A6A4  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008D768 0008A6A8  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008D76C 0008A6AC  40 82 00 6C */	bne .L_8008D7D8
/* 8008D770 0008A6B0  38 60 00 09 */	li r3, 9
/* 8008D774 0008A6B4  38 80 00 01 */	li r4, 1
/* 8008D778 0008A6B8  48 05 6B 0D */	bl GXSetVtxDesc
/* 8008D77C 0008A6BC  38 60 00 0D */	li r3, 0xd
/* 8008D780 0008A6C0  38 80 00 01 */	li r4, 1
/* 8008D784 0008A6C4  48 05 6B 01 */	bl GXSetVtxDesc
/* 8008D788 0008A6C8  38 60 00 B8 */	li r3, 0xb8
/* 8008D78C 0008A6CC  38 80 00 01 */	li r4, 1
/* 8008D790 0008A6D0  38 A0 00 01 */	li r5, 1
/* 8008D794 0008A6D4  48 05 81 F5 */	bl GXBegin
/* 8008D798 0008A6D8  C0 7F 00 08 */	lfs f3, 8(r31)
/* 8008D79C 0008A6DC  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 8008D7A0 0008A6E0  C0 5F 00 04 */	lfs f2, 4(r31)
/* 8008D7A4 0008A6E4  38 60 00 09 */	li r3, 9
/* 8008D7A8 0008A6E8  C0 3F 00 00 */	lfs f1, 0(r31)
/* 8008D7AC 0008A6EC  38 80 00 02 */	li r4, 2
/* 8008D7B0 0008A6F0  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008D7B4 0008A6F4  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 8008D7B8 0008A6F8  D0 45 80 00 */	stfs f2, 0xCC008000@l(r5)
/* 8008D7BC 0008A6FC  D0 65 80 00 */	stfs f3, 0xCC008000@l(r5)
/* 8008D7C0 0008A700  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 8008D7C4 0008A704  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 8008D7C8 0008A708  48 05 6A BD */	bl GXSetVtxDesc
/* 8008D7CC 0008A70C  38 60 00 0D */	li r3, 0xd
/* 8008D7D0 0008A710  38 80 00 02 */	li r4, 2
/* 8008D7D4 0008A714  48 05 6A B1 */	bl GXSetVtxDesc
.L_8008D7D8:
/* 8008D7D8 0008A718  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008D7DC 0008A71C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8008D7E0 0008A720  7C 08 03 A6 */	mtlr r0
/* 8008D7E4 0008A724  38 21 00 10 */	addi r1, r1, 0x10
/* 8008D7E8 0008A728  4E 80 00 20 */	blr 
.endfn JPADrawPoint__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008D7EC 0008A72C  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8008D7F0 0008A730  7C 08 02 A6 */	mflr r0
/* 8008D7F4 0008A734  90 01 00 74 */	stw r0, 0x74(r1)
/* 8008D7F8 0008A738  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8008D7FC 0008A73C  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8008D800 0008A740  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8008D804 0008A744  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8008D808 0008A748  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8008D80C 0008A74C  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8008D810 0008A750  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 8008D814 0008A754  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 8008D818 0008A758  DB 61 00 20 */	stfd f27, 0x20(r1)
/* 8008D81C 0008A75C  F3 61 00 28 */	psq_st f27, 40(r1), 0, qr0
/* 8008D820 0008A760  80 04 00 7C */	lwz r0, 0x7c(r4)
/* 8008D824 0008A764  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008D828 0008A768  40 82 01 44 */	bne .L_8008D96C
/* 8008D82C 0008A76C  C0 C4 00 28 */	lfs f6, 0x28(r4)
/* 8008D830 0008A770  3C A0 80 51 */	lis r5, __float_epsilon@ha
/* 8008D834 0008A774  80 E4 00 00 */	lwz r7, 0(r4)
/* 8008D838 0008A778  EC 06 01 B2 */	fmuls f0, f6, f6
/* 8008D83C 0008A77C  C0 A4 00 24 */	lfs f5, 0x24(r4)
/* 8008D840 0008A780  80 C4 00 04 */	lwz r6, 4(r4)
/* 8008D844 0008A784  80 04 00 08 */	lwz r0, 8(r4)
/* 8008D848 0008A788  EC 45 01 7A */	fmadds f2, f5, f5, f0
/* 8008D84C 0008A78C  C0 E4 00 2C */	lfs f7, 0x2c(r4)
/* 8008D850 0008A790  C0 22 88 08 */	lfs f1, lbl_80516B68@sda21(r2)
/* 8008D854 0008A794  C0 05 48 DC */	lfs f0, __float_epsilon@l(r5)
/* 8008D858 0008A798  ED 07 11 FA */	fmadds f8, f7, f7, f2
/* 8008D85C 0008A79C  90 E1 00 08 */	stw r7, 8(r1)
/* 8008D860 0008A7A0  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008D864 0008A7A4  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8008D868 0008A7A8  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 8008D86C 0008A7AC  90 01 00 10 */	stw r0, 0x10(r1)
/* 8008D870 0008A7B0  4C 40 13 82 */	cror 2, 0, 2
/* 8008D874 0008A7B4  41 82 00 F8 */	beq .L_8008D96C
/* 8008D878 0008A7B8  C0 22 87 D8 */	lfs f1, lbl_80516B38@sda21(r2)
/* 8008D87C 0008A7BC  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 8008D880 0008A7C0  C0 04 00 64 */	lfs f0, 0x64(r4)
/* 8008D884 0008A7C4  C0 43 01 48 */	lfs f2, 0x148(r3)
/* 8008D888 0008A7C8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8008D88C 0008A7CC  EC 62 00 32 */	fmuls f3, f2, f0
/* 8008D890 0008A7D0  4C 40 13 82 */	cror 2, 0, 2
/* 8008D894 0008A7D4  41 82 00 48 */	beq .L_8008D8DC
/* 8008D898 0008A7D8  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008D89C 0008A7DC  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 8008D8A0 0008A7E0  4C 40 13 82 */	cror 2, 0, 2
/* 8008D8A4 0008A7E4  40 82 00 08 */	bne .L_8008D8AC
/* 8008D8A8 0008A7E8  48 00 00 24 */	b .L_8008D8CC
.L_8008D8AC:
/* 8008D8AC 0008A7EC  FC 80 40 34 */	frsqrte f4, f8
/* 8008D8B0 0008A7F0  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008D8B4 0008A7F4  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008D8B8 0008A7F8  FC 80 20 18 */	frsp f4, f4
/* 8008D8BC 0008A7FC  EC 24 01 32 */	fmuls f1, f4, f4
/* 8008D8C0 0008A800  EC 42 01 32 */	fmuls f2, f2, f4
/* 8008D8C4 0008A804  EC 08 00 7C */	fnmsubs f0, f8, f1, f0
/* 8008D8C8 0008A808  ED 02 00 32 */	fmuls f8, f2, f0
.L_8008D8CC:
/* 8008D8CC 0008A80C  EC 08 00 F2 */	fmuls f0, f8, f3
/* 8008D8D0 0008A810  EC A5 00 32 */	fmuls f5, f5, f0
/* 8008D8D4 0008A814  EC C6 00 32 */	fmuls f6, f6, f0
/* 8008D8D8 0008A818  EC E7 00 32 */	fmuls f7, f7, f0
.L_8008D8DC:
/* 8008D8DC 0008A81C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8008D8E0 0008A820  38 60 00 09 */	li r3, 9
/* 8008D8E4 0008A824  C3 E1 00 0C */	lfs f31, 0xc(r1)
/* 8008D8E8 0008A828  38 80 00 01 */	li r4, 1
/* 8008D8EC 0008A82C  C3 C1 00 10 */	lfs f30, 0x10(r1)
/* 8008D8F0 0008A830  EF A0 28 28 */	fsubs f29, f0, f5
/* 8008D8F4 0008A834  EF 9F 30 28 */	fsubs f28, f31, f6
/* 8008D8F8 0008A838  EF 7E 38 28 */	fsubs f27, f30, f7
/* 8008D8FC 0008A83C  48 05 69 89 */	bl GXSetVtxDesc
/* 8008D900 0008A840  38 60 00 0D */	li r3, 0xd
/* 8008D904 0008A844  38 80 00 01 */	li r4, 1
/* 8008D908 0008A848  48 05 69 7D */	bl GXSetVtxDesc
/* 8008D90C 0008A84C  38 60 00 A8 */	li r3, 0xa8
/* 8008D910 0008A850  38 80 00 01 */	li r4, 1
/* 8008D914 0008A854  38 A0 00 02 */	li r5, 2
/* 8008D918 0008A858  48 05 80 71 */	bl GXBegin
/* 8008D91C 0008A85C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8008D920 0008A860  3C A0 CC 01 */	lis r5, 0xCC008000@ha
/* 8008D924 0008A864  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008D928 0008A868  38 60 00 09 */	li r3, 9
/* 8008D92C 0008A86C  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 8008D930 0008A870  38 80 00 02 */	li r4, 2
/* 8008D934 0008A874  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008D938 0008A878  D3 E5 80 00 */	stfs f31, 0xCC008000@l(r5)
/* 8008D93C 0008A87C  D3 C5 80 00 */	stfs f30, 0xCC008000@l(r5)
/* 8008D940 0008A880  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 8008D944 0008A884  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 8008D948 0008A888  D3 A5 80 00 */	stfs f29, 0xCC008000@l(r5)
/* 8008D94C 0008A88C  D3 85 80 00 */	stfs f28, 0xCC008000@l(r5)
/* 8008D950 0008A890  D3 65 80 00 */	stfs f27, 0xCC008000@l(r5)
/* 8008D954 0008A894  D0 25 80 00 */	stfs f1, 0xCC008000@l(r5)
/* 8008D958 0008A898  D0 05 80 00 */	stfs f0, 0xCC008000@l(r5)
/* 8008D95C 0008A89C  48 05 69 29 */	bl GXSetVtxDesc
/* 8008D960 0008A8A0  38 60 00 0D */	li r3, 0xd
/* 8008D964 0008A8A4  38 80 00 02 */	li r4, 2
/* 8008D968 0008A8A8  48 05 69 1D */	bl GXSetVtxDesc
.L_8008D96C:
/* 8008D96C 0008A8AC  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8008D970 0008A8B0  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8008D974 0008A8B4  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8008D978 0008A8B8  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8008D97C 0008A8BC  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 8008D980 0008A8C0  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8008D984 0008A8C4  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 8008D988 0008A8C8  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 8008D98C 0008A8CC  E3 61 00 28 */	psq_l f27, 40(r1), 0, qr0
/* 8008D990 0008A8D0  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8008D994 0008A8D4  CB 61 00 20 */	lfd f27, 0x20(r1)
/* 8008D998 0008A8D8  7C 08 03 A6 */	mtlr r0
/* 8008D99C 0008A8DC  38 21 00 70 */	addi r1, r1, 0x70
/* 8008D9A0 0008A8E0  4E 80 00 20 */	blr 
.endfn JPADrawLine__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn "getNext__FP26JPANode<15JPABaseParticle>", local
/* 8008D9A4 0008A8E4  80 63 00 04 */	lwz r3, 4(r3)
/* 8008D9A8 0008A8E8  4E 80 00 20 */	blr 
.endfn "getNext__FP26JPANode<15JPABaseParticle>"

.fn "getPrev__FP26JPANode<15JPABaseParticle>", local
/* 8008D9AC 0008A8EC  80 63 00 00 */	lwz r3, 0(r3)
/* 8008D9B0 0008A8F0  4E 80 00 20 */	blr 
.endfn "getPrev__FP26JPANode<15JPABaseParticle>"

.fn JPADrawStripe__FP18JPAEmitterWorkData, global
/* 8008D9B4 0008A8F4  94 21 FE D0 */	stwu r1, -0x130(r1)
/* 8008D9B8 0008A8F8  7C 08 02 A6 */	mflr r0
/* 8008D9BC 0008A8FC  90 01 01 34 */	stw r0, 0x134(r1)
/* 8008D9C0 0008A900  DB E1 01 20 */	stfd f31, 0x120(r1)
/* 8008D9C4 0008A904  F3 E1 01 28 */	psq_st f31, 296(r1), 0, qr0
/* 8008D9C8 0008A908  DB C1 01 10 */	stfd f30, 0x110(r1)
/* 8008D9CC 0008A90C  F3 C1 01 18 */	psq_st f30, 280(r1), 0, qr0
/* 8008D9D0 0008A910  DB A1 01 00 */	stfd f29, 0x100(r1)
/* 8008D9D4 0008A914  F3 A1 01 08 */	psq_st f29, 264(r1), 0, qr0
/* 8008D9D8 0008A918  DB 81 00 F0 */	stfd f28, 0xf0(r1)
/* 8008D9DC 0008A91C  F3 81 00 F8 */	psq_st f28, 248(r1), 0, qr0
/* 8008D9E0 0008A920  DB 61 00 E0 */	stfd f27, 0xe0(r1)
/* 8008D9E4 0008A924  F3 61 00 E8 */	psq_st f27, 232(r1), 0, qr0
/* 8008D9E8 0008A928  DB 41 00 D0 */	stfd f26, 0xd0(r1)
/* 8008D9EC 0008A92C  F3 41 00 D8 */	psq_st f26, 216(r1), 0, qr0
/* 8008D9F0 0008A930  DB 21 00 C0 */	stfd f25, 0xc0(r1)
/* 8008D9F4 0008A934  F3 21 00 C8 */	psq_st f25, 200(r1), 0, qr0
/* 8008D9F8 0008A938  DB 01 00 B0 */	stfd f24, 0xb0(r1)
/* 8008D9FC 0008A93C  F3 01 00 B8 */	psq_st f24, 184(r1), 0, qr0
/* 8008DA00 0008A940  DA E1 00 A0 */	stfd f23, 0xa0(r1)
/* 8008DA04 0008A944  F2 E1 00 A8 */	psq_st f23, 168(r1), 0, qr0
/* 8008DA08 0008A948  DA C1 00 90 */	stfd f22, 0x90(r1)
/* 8008DA0C 0008A94C  F2 C1 00 98 */	psq_st f22, 152(r1), 0, qr0
/* 8008DA10 0008A950  BF 01 00 70 */	stmw r24, 0x70(r1)
/* 8008DA14 0008A954  7C 7E 1B 78 */	mr r30, r3
/* 8008DA18 0008A958  80 A3 01 E4 */	lwz r5, 0x1e4(r3)
/* 8008DA1C 0008A95C  80 63 00 04 */	lwz r3, 4(r3)
/* 8008DA20 0008A960  83 45 00 08 */	lwz r26, 8(r5)
/* 8008DA24 0008A964  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8008DA28 0008A968  28 1A 00 02 */	cmplwi r26, 2
/* 8008DA2C 0008A96C  41 80 04 AC */	blt .L_8008DED8
/* 8008DA30 0008A970  3C 80 43 30 */	lis r4, 0x4330
/* 8008DA34 0008A974  80 63 00 00 */	lwz r3, 0(r3)
/* 8008DA38 0008A978  93 41 00 64 */	stw r26, 0x64(r1)
/* 8008DA3C 0008A97C  80 03 00 08 */	lwz r0, 8(r3)
/* 8008DA40 0008A980  90 81 00 60 */	stw r4, 0x60(r1)
/* 8008DA44 0008A984  C8 22 87 F8 */	lfd f1, lbl_80516B58@sda21(r2)
/* 8008DA48 0008A988  54 00 02 95 */	rlwinm. r0, r0, 0, 0xa, 0xa
/* 8008DA4C 0008A98C  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 8008DA50 0008A990  C0 82 87 EC */	lfs f4, lbl_80516B4C@sda21(r2)
/* 8008DA54 0008A994  EC 60 08 28 */	fsubs f3, f0, f1
/* 8008DA58 0008A998  C0 BE 01 4C */	lfs f5, 0x14c(r30)
/* 8008DA5C 0008A99C  C0 22 87 D8 */	lfs f1, lbl_80516B38@sda21(r2)
/* 8008DA60 0008A9A0  C0 1E 01 44 */	lfs f0, 0x144(r30)
/* 8008DA64 0008A9A4  EC 44 28 2A */	fadds f2, f4, f5
/* 8008DA68 0008A9A8  EC 63 20 28 */	fsubs f3, f3, f4
/* 8008DA6C 0008A9AC  EC 21 00 32 */	fmuls f1, f1, f0
/* 8008DA70 0008A9B0  C3 42 87 F0 */	lfs f26, lbl_80516B50@sda21(r2)
/* 8008DA74 0008A9B4  EC 04 28 28 */	fsubs f0, f4, f5
/* 8008DA78 0008A9B8  EF 24 18 24 */	fdivs f25, f4, f3
/* 8008DA7C 0008A9BC  EF 02 00 72 */	fmuls f24, f2, f1
/* 8008DA80 0008A9C0  EE E0 00 72 */	fmuls f23, f0, f1
/* 8008DA84 0008A9C4  41 82 00 20 */	beq .L_8008DAA4
/* 8008DA88 0008A9C8  3C 60 80 09 */	lis r3, "getPrev__FP26JPANode<15JPABaseParticle>"@ha
/* 8008DA8C 0008A9CC  FF 40 20 90 */	fmr f26, f4
/* 8008DA90 0008A9D0  38 03 D9 AC */	addi r0, r3, "getPrev__FP26JPANode<15JPABaseParticle>"@l
/* 8008DA94 0008A9D4  FF 20 C8 50 */	fneg f25, f25
/* 8008DA98 0008A9D8  83 25 00 04 */	lwz r25, 4(r5)
/* 8008DA9C 0008A9DC  7C 1F 03 78 */	mr r31, r0
/* 8008DAA0 0008A9E0  48 00 00 14 */	b .L_8008DAB4
.L_8008DAA4:
/* 8008DAA4 0008A9E4  3C 60 80 09 */	lis r3, "getNext__FP26JPANode<15JPABaseParticle>"@ha
/* 8008DAA8 0008A9E8  83 25 00 00 */	lwz r25, 0(r5)
/* 8008DAAC 0008A9EC  38 03 D9 A4 */	addi r0, r3, "getNext__FP26JPANode<15JPABaseParticle>"@l
/* 8008DAB0 0008A9F0  7C 1F 03 78 */	mr r31, r0
.L_8008DAB4:
/* 8008DAB4 0008A9F4  38 7E 01 84 */	addi r3, r30, 0x184
/* 8008DAB8 0008A9F8  38 80 00 00 */	li r4, 0
/* 8008DABC 0008A9FC  48 05 BA BD */	bl GXLoadPosMtxImm
/* 8008DAC0 0008AA00  80 1E 02 10 */	lwz r0, 0x210(r30)
/* 8008DAC4 0008AA04  3C 60 80 4A */	lis r3, p_prj@ha
/* 8008DAC8 0008AA08  38 A3 30 E0 */	addi r5, r3, p_prj@l
/* 8008DACC 0008AA0C  7F C3 F3 78 */	mr r3, r30
/* 8008DAD0 0008AA10  54 00 10 3A */	slwi r0, r0, 2
/* 8008DAD4 0008AA14  38 9E 01 84 */	addi r4, r30, 0x184
/* 8008DAD8 0008AA18  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008DADC 0008AA1C  7D 89 03 A6 */	mtctr r12
/* 8008DAE0 0008AA20  4E 80 04 21 */	bctrl 
/* 8008DAE4 0008AA24  38 60 00 09 */	li r3, 9
/* 8008DAE8 0008AA28  38 80 00 01 */	li r4, 1
/* 8008DAEC 0008AA2C  48 05 67 99 */	bl GXSetVtxDesc
/* 8008DAF0 0008AA30  38 60 00 0D */	li r3, 0xd
/* 8008DAF4 0008AA34  38 80 00 01 */	li r4, 1
/* 8008DAF8 0008AA38  48 05 67 8D */	bl GXSetVtxDesc
/* 8008DAFC 0008AA3C  57 45 0C 3C */	rlwinm r5, r26, 1, 0x10, 0x1e
/* 8008DB00 0008AA40  38 60 00 98 */	li r3, 0x98
/* 8008DB04 0008AA44  38 80 00 01 */	li r4, 1
/* 8008DB08 0008AA48  48 05 7E 81 */	bl GXBegin
/* 8008DB0C 0008AA4C  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8008DB10 0008AA50  3C 80 80 4A */	lis r4, p_direction@ha
/* 8008DB14 0008AA54  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008DB18 0008AA58  C3 C2 87 F0 */	lfs f30, lbl_80516B50@sda21(r2)
/* 8008DB1C 0008AA5C  C3 E2 88 08 */	lfs f31, lbl_80516B68@sda21(r2)
/* 8008DB20 0008AA60  7F 38 CB 78 */	mr r24, r25
/* 8008DB24 0008AA64  C2 C2 87 EC */	lfs f22, lbl_80516B4C@sda21(r2)
/* 8008DB28 0008AA68  3B 45 71 A0 */	addi r26, r5, sincosTable___5JMath@l
/* 8008DB2C 0008AA6C  3B 64 30 EC */	addi r27, r4, p_direction@l
/* 8008DB30 0008AA70  3B 83 48 DC */	addi r28, r3, __float_epsilon@l
/* 8008DB34 0008AA74  3F A0 CC 01 */	lis r29, 0xcc01
/* 8008DB38 0008AA78  48 00 03 80 */	b .L_8008DEB8
.L_8008DB3C:
/* 8008DB3C 0008AA7C  93 1E 01 E8 */	stw r24, 0x1e8(r30)
/* 8008DB40 0008AA80  3B 38 00 08 */	addi r25, r24, 8
/* 8008DB44 0008AA84  7F C3 F3 78 */	mr r3, r30
/* 8008DB48 0008AA88  38 A1 00 08 */	addi r5, r1, 8
/* 8008DB4C 0008AA8C  C0 38 00 68 */	lfs f1, 0x68(r24)
/* 8008DB50 0008AA90  7F 24 CB 78 */	mr r4, r25
/* 8008DB54 0008AA94  A0 18 00 90 */	lhz r0, 0x90(r24)
/* 8008DB58 0008AA98  FC 00 08 50 */	fneg f0, f1
/* 8008DB5C 0008AA9C  C3 B8 00 08 */	lfs f29, 8(r24)
/* 8008DB60 0008AAA0  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008DB64 0008AAA4  EC 21 05 F2 */	fmuls f1, f1, f23
/* 8008DB68 0008AAA8  7C DA 02 14 */	add r6, r26, r0
/* 8008DB6C 0008AAAC  C3 98 00 0C */	lfs f28, 0xc(r24)
/* 8008DB70 0008AAB0  C3 78 00 10 */	lfs f27, 0x10(r24)
/* 8008DB74 0008AAB4  EC 00 06 32 */	fmuls f0, f0, f24
/* 8008DB78 0008AAB8  C0 86 00 00 */	lfs f4, 0(r6)
/* 8008DB7C 0008AABC  C0 A6 00 04 */	lfs f5, 4(r6)
/* 8008DB80 0008AAC0  EC 60 01 32 */	fmuls f3, f0, f4
/* 8008DB84 0008AAC4  D3 C1 00 18 */	stfs f30, 0x18(r1)
/* 8008DB88 0008AAC8  EC 40 01 72 */	fmuls f2, f0, f5
/* 8008DB8C 0008AACC  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8008DB90 0008AAD0  EC 81 01 32 */	fmuls f4, f1, f4
/* 8008DB94 0008AAD4  EC 01 01 72 */	fmuls f0, f1, f5
/* 8008DB98 0008AAD8  D3 C1 00 1C */	stfs f30, 0x1c(r1)
/* 8008DB9C 0008AADC  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8008DBA0 0008AAE0  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8008DBA4 0008AAE4  D3 C1 00 28 */	stfs f30, 0x28(r1)
/* 8008DBA8 0008AAE8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8008DBAC 0008AAEC  D3 C1 00 18 */	stfs f30, 0x18(r1)
/* 8008DBB0 0008AAF0  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8008DBB4 0008AAF4  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8008DBB8 0008AAF8  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 8008DBBC 0008AAFC  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8008DBC0 0008AB00  80 1E 02 00 */	lwz r0, 0x200(r30)
/* 8008DBC4 0008AB04  54 00 10 3A */	slwi r0, r0, 2
/* 8008DBC8 0008AB08  7D 9B 00 2E */	lwzx r12, r27, r0
/* 8008DBCC 0008AB0C  7D 89 03 A6 */	mtctr r12
/* 8008DBD0 0008AB10  4E 80 04 21 */	bctrl 
/* 8008DBD4 0008AB14  C0 21 00 08 */	lfs f1, 8(r1)
/* 8008DBD8 0008AB18  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8008DBDC 0008AB1C  EC 41 00 72 */	fmuls f2, f1, f1
/* 8008DBE0 0008AB20  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8008DBE4 0008AB24  EC 20 00 32 */	fmuls f1, f0, f0
/* 8008DBE8 0008AB28  C0 1C 00 00 */	lfs f0, 0(r28)
/* 8008DBEC 0008AB2C  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8008DBF0 0008AB30  EC 9F 00 32 */	fmuls f4, f31, f0
/* 8008DBF4 0008AB34  EC 02 08 2A */	fadds f0, f2, f1
/* 8008DBF8 0008AB38  EC A3 00 2A */	fadds f5, f3, f0
/* 8008DBFC 0008AB3C  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 8008DC00 0008AB40  4C 40 13 82 */	cror 2, 0, 2
/* 8008DC04 0008AB44  40 82 00 1C */	bne .L_8008DC20
/* 8008DC08 0008AB48  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008DC0C 0008AB4C  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008DC10 0008AB50  D0 21 00 08 */	stfs f1, 8(r1)
/* 8008DC14 0008AB54  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8008DC18 0008AB58  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8008DC1C 0008AB5C  48 00 00 68 */	b .L_8008DC84
.L_8008DC20:
/* 8008DC20 0008AB60  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 8008DC24 0008AB64  4C 40 13 82 */	cror 2, 0, 2
/* 8008DC28 0008AB68  41 82 00 5C */	beq .L_8008DC84
/* 8008DC2C 0008AB6C  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008DC30 0008AB70  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8008DC34 0008AB74  4C 40 13 82 */	cror 2, 0, 2
/* 8008DC38 0008AB78  40 82 00 08 */	bne .L_8008DC40
/* 8008DC3C 0008AB7C  48 00 00 24 */	b .L_8008DC60
.L_8008DC40:
/* 8008DC40 0008AB80  FC 60 28 34 */	frsqrte f3, f5
/* 8008DC44 0008AB84  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008DC48 0008AB88  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008DC4C 0008AB8C  FC 60 18 18 */	frsp f3, f3
/* 8008DC50 0008AB90  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008DC54 0008AB94  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008DC58 0008AB98  EC 05 00 7C */	fnmsubs f0, f5, f1, f0
/* 8008DC5C 0008AB9C  EC A2 00 32 */	fmuls f5, f2, f0
.L_8008DC60:
/* 8008DC60 0008ABA0  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008DC64 0008ABA4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8008DC68 0008ABA8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008DC6C 0008ABAC  EC 42 01 72 */	fmuls f2, f2, f5
/* 8008DC70 0008ABB0  EC 21 01 72 */	fmuls f1, f1, f5
/* 8008DC74 0008ABB4  EC 00 01 72 */	fmuls f0, f0, f5
/* 8008DC78 0008ABB8  D0 41 00 08 */	stfs f2, 8(r1)
/* 8008DC7C 0008ABBC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8008DC80 0008ABC0  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8008DC84:
/* 8008DC84 0008ABC4  C0 99 00 54 */	lfs f4, 0x54(r25)
/* 8008DC88 0008ABC8  C0 C1 00 10 */	lfs f6, 0x10(r1)
/* 8008DC8C 0008ABCC  C0 1C 00 00 */	lfs f0, 0(r28)
/* 8008DC90 0008ABD0  EC 24 01 B2 */	fmuls f1, f4, f6
/* 8008DC94 0008ABD4  C0 A1 00 0C */	lfs f5, 0xc(r1)
/* 8008DC98 0008ABD8  C0 79 00 5C */	lfs f3, 0x5c(r25)
/* 8008DC9C 0008ABDC  ED 1F 00 32 */	fmuls f8, f31, f0
/* 8008DCA0 0008ABE0  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008DCA4 0008ABE4  EC 03 01 72 */	fmuls f0, f3, f5
/* 8008DCA8 0008ABE8  EC 23 08 B8 */	fmsubs f1, f3, f2, f1
/* 8008DCAC 0008ABEC  C0 F9 00 58 */	lfs f7, 0x58(r25)
/* 8008DCB0 0008ABF0  EC 47 00 B2 */	fmuls f2, f7, f2
/* 8008DCB4 0008ABF4  EC 61 00 72 */	fmuls f3, f1, f1
/* 8008DCB8 0008ABF8  EC 07 01 B8 */	fmsubs f0, f7, f6, f0
/* 8008DCBC 0008ABFC  EC 44 11 78 */	fmsubs f2, f4, f5, f2
/* 8008DCC0 0008AC00  EC 60 18 3A */	fmadds f3, f0, f0, f3
/* 8008DCC4 0008AC04  EC E2 18 BA */	fmadds f7, f2, f2, f3
/* 8008DCC8 0008AC08  FC 07 40 40 */	fcmpo cr0, f7, f8
/* 8008DCCC 0008AC0C  4C 40 13 82 */	cror 2, 0, 2
/* 8008DCD0 0008AC10  40 82 00 14 */	bne .L_8008DCE4
/* 8008DCD4 0008AC14  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008DCD8 0008AC18  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008DCDC 0008AC1C  FC 40 08 90 */	fmr f2, f1
/* 8008DCE0 0008AC20  48 00 00 50 */	b .L_8008DD30
.L_8008DCE4:
/* 8008DCE4 0008AC24  FC 07 40 40 */	fcmpo cr0, f7, f8
/* 8008DCE8 0008AC28  4C 40 13 82 */	cror 2, 0, 2
/* 8008DCEC 0008AC2C  41 82 00 44 */	beq .L_8008DD30
/* 8008DCF0 0008AC30  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008DCF4 0008AC34  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008DCF8 0008AC38  4C 40 13 82 */	cror 2, 0, 2
/* 8008DCFC 0008AC3C  40 82 00 08 */	bne .L_8008DD04
/* 8008DD00 0008AC40  48 00 00 24 */	b .L_8008DD24
.L_8008DD04:
/* 8008DD04 0008AC44  FC C0 38 34 */	frsqrte f6, f7
/* 8008DD08 0008AC48  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008DD0C 0008AC4C  C0 62 88 0C */	lfs f3, lbl_80516B6C@sda21(r2)
/* 8008DD10 0008AC50  FC C0 30 18 */	frsp f6, f6
/* 8008DD14 0008AC54  EC 86 01 B2 */	fmuls f4, f6, f6
/* 8008DD18 0008AC58  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008DD1C 0008AC5C  EC 67 19 3C */	fnmsubs f3, f7, f4, f3
/* 8008DD20 0008AC60  EC E5 00 F2 */	fmuls f7, f5, f3
.L_8008DD24:
/* 8008DD24 0008AC64  EC 00 01 F2 */	fmuls f0, f0, f7
/* 8008DD28 0008AC68  EC 21 01 F2 */	fmuls f1, f1, f7
/* 8008DD2C 0008AC6C  EC 42 01 F2 */	fmuls f2, f2, f7
.L_8008DD30:
/* 8008DD30 0008AC70  C0 E1 00 10 */	lfs f7, 0x10(r1)
/* 8008DD34 0008AC74  C0 C1 00 08 */	lfs f6, 8(r1)
/* 8008DD38 0008AC78  EC 67 00 72 */	fmuls f3, f7, f1
/* 8008DD3C 0008AC7C  C1 01 00 0C */	lfs f8, 0xc(r1)
/* 8008DD40 0008AC80  EC 86 00 B2 */	fmuls f4, f6, f2
/* 8008DD44 0008AC84  EC A8 00 32 */	fmuls f5, f8, f0
/* 8008DD48 0008AC88  EC 68 18 B8 */	fmsubs f3, f8, f2, f3
/* 8008DD4C 0008AC8C  EC 87 20 38 */	fmsubs f4, f7, f0, f4
/* 8008DD50 0008AC90  EC A6 28 78 */	fmsubs f5, f6, f1, f5
/* 8008DD54 0008AC94  D0 79 00 54 */	stfs f3, 0x54(r25)
/* 8008DD58 0008AC98  D0 99 00 58 */	stfs f4, 0x58(r25)
/* 8008DD5C 0008AC9C  D0 B9 00 5C */	stfs f5, 0x5c(r25)
/* 8008DD60 0008ACA0  C0 99 00 54 */	lfs f4, 0x54(r25)
/* 8008DD64 0008ACA4  C0 79 00 58 */	lfs f3, 0x58(r25)
/* 8008DD68 0008ACA8  EC A4 01 32 */	fmuls f5, f4, f4
/* 8008DD6C 0008ACAC  C0 D9 00 5C */	lfs f6, 0x5c(r25)
/* 8008DD70 0008ACB0  EC 83 00 F2 */	fmuls f4, f3, f3
/* 8008DD74 0008ACB4  C0 7C 00 00 */	lfs f3, 0(r28)
/* 8008DD78 0008ACB8  EC C6 01 B2 */	fmuls f6, f6, f6
/* 8008DD7C 0008ACBC  EC 7F 00 F2 */	fmuls f3, f31, f3
/* 8008DD80 0008ACC0  EC 85 20 2A */	fadds f4, f5, f4
/* 8008DD84 0008ACC4  EC E6 20 2A */	fadds f7, f6, f4
/* 8008DD88 0008ACC8  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008DD8C 0008ACCC  4C 40 13 82 */	cror 2, 0, 2
/* 8008DD90 0008ACD0  41 82 00 5C */	beq .L_8008DDEC
/* 8008DD94 0008ACD4  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008DD98 0008ACD8  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008DD9C 0008ACDC  4C 40 13 82 */	cror 2, 0, 2
/* 8008DDA0 0008ACE0  40 82 00 08 */	bne .L_8008DDA8
/* 8008DDA4 0008ACE4  48 00 00 24 */	b .L_8008DDC8
.L_8008DDA8:
/* 8008DDA8 0008ACE8  FC C0 38 34 */	frsqrte f6, f7
/* 8008DDAC 0008ACEC  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008DDB0 0008ACF0  C0 62 88 0C */	lfs f3, lbl_80516B6C@sda21(r2)
/* 8008DDB4 0008ACF4  FC C0 30 18 */	frsp f6, f6
/* 8008DDB8 0008ACF8  EC 86 01 B2 */	fmuls f4, f6, f6
/* 8008DDBC 0008ACFC  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008DDC0 0008AD00  EC 67 19 3C */	fnmsubs f3, f7, f4, f3
/* 8008DDC4 0008AD04  EC E5 00 F2 */	fmuls f7, f5, f3
.L_8008DDC8:
/* 8008DDC8 0008AD08  C0 79 00 54 */	lfs f3, 0x54(r25)
/* 8008DDCC 0008AD0C  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008DDD0 0008AD10  D0 79 00 54 */	stfs f3, 0x54(r25)
/* 8008DDD4 0008AD14  C0 79 00 58 */	lfs f3, 0x58(r25)
/* 8008DDD8 0008AD18  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008DDDC 0008AD1C  D0 79 00 58 */	stfs f3, 0x58(r25)
/* 8008DDE0 0008AD20  C0 79 00 5C */	lfs f3, 0x5c(r25)
/* 8008DDE4 0008AD24  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008DDE8 0008AD28  D0 79 00 5C */	stfs f3, 0x5c(r25)
.L_8008DDEC:
/* 8008DDEC 0008AD2C  C0 81 00 08 */	lfs f4, 8(r1)
/* 8008DDF0 0008AD30  38 81 00 14 */	addi r4, r1, 0x14
/* 8008DDF4 0008AD34  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8008DDF8 0008AD38  7C 85 23 78 */	mr r5, r4
/* 8008DDFC 0008AD3C  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8008DE00 0008AD40  38 61 00 2C */	addi r3, r1, 0x2c
/* 8008DE04 0008AD44  D0 81 00 30 */	stfs f4, 0x30(r1)
/* 8008DE08 0008AD48  38 C0 00 02 */	li r6, 2
/* 8008DE0C 0008AD4C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008DE10 0008AD50  C0 99 00 54 */	lfs f4, 0x54(r25)
/* 8008DE14 0008AD54  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8008DE18 0008AD58  D3 C1 00 38 */	stfs f30, 0x38(r1)
/* 8008DE1C 0008AD5C  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8008DE20 0008AD60  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 8008DE24 0008AD64  C0 39 00 58 */	lfs f1, 0x58(r25)
/* 8008DE28 0008AD68  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8008DE2C 0008AD6C  D3 C1 00 48 */	stfs f30, 0x48(r1)
/* 8008DE30 0008AD70  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 8008DE34 0008AD74  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8008DE38 0008AD78  C0 19 00 5C */	lfs f0, 0x5c(r25)
/* 8008DE3C 0008AD7C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8008DE40 0008AD80  D3 C1 00 58 */	stfs f30, 0x58(r1)
/* 8008DE44 0008AD84  48 05 CE 3D */	bl PSMTXMultVecArraySR
/* 8008DE48 0008AD88  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8008DE4C 0008AD8C  7F EC FB 78 */	mr r12, r31
/* 8008DE50 0008AD90  7F 03 C3 78 */	mr r3, r24
/* 8008DE54 0008AD94  EC 00 E8 2A */	fadds f0, f0, f29
/* 8008DE58 0008AD98  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008DE5C 0008AD9C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8008DE60 0008ADA0  EC 00 E0 2A */	fadds f0, f0, f28
/* 8008DE64 0008ADA4  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008DE68 0008ADA8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8008DE6C 0008ADAC  EC 00 D8 2A */	fadds f0, f0, f27
/* 8008DE70 0008ADB0  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008DE74 0008ADB4  D3 DD 80 00 */	stfs f30, 0xCC008000@l(r29)
/* 8008DE78 0008ADB8  D3 5D 80 00 */	stfs f26, 0xCC008000@l(r29)
/* 8008DE7C 0008ADBC  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8008DE80 0008ADC0  EC 00 E8 2A */	fadds f0, f0, f29
/* 8008DE84 0008ADC4  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008DE88 0008ADC8  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8008DE8C 0008ADCC  EC 00 E0 2A */	fadds f0, f0, f28
/* 8008DE90 0008ADD0  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008DE94 0008ADD4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8008DE98 0008ADD8  EC 00 D8 2A */	fadds f0, f0, f27
/* 8008DE9C 0008ADDC  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008DEA0 0008ADE0  D2 DD 80 00 */	stfs f22, 0xCC008000@l(r29)
/* 8008DEA4 0008ADE4  D3 5D 80 00 */	stfs f26, 0xCC008000@l(r29)
/* 8008DEA8 0008ADE8  7D 89 03 A6 */	mtctr r12
/* 8008DEAC 0008ADEC  4E 80 04 21 */	bctrl 
/* 8008DEB0 0008ADF0  EF 5A C8 2A */	fadds f26, f26, f25
/* 8008DEB4 0008ADF4  7C 78 1B 78 */	mr r24, r3
.L_8008DEB8:
/* 8008DEB8 0008ADF8  28 18 00 00 */	cmplwi r24, 0
/* 8008DEBC 0008ADFC  40 82 FC 80 */	bne .L_8008DB3C
/* 8008DEC0 0008AE00  38 60 00 09 */	li r3, 9
/* 8008DEC4 0008AE04  38 80 00 02 */	li r4, 2
/* 8008DEC8 0008AE08  48 05 63 BD */	bl GXSetVtxDesc
/* 8008DECC 0008AE0C  38 60 00 0D */	li r3, 0xd
/* 8008DED0 0008AE10  38 80 00 02 */	li r4, 2
/* 8008DED4 0008AE14  48 05 63 B1 */	bl GXSetVtxDesc
.L_8008DED8:
/* 8008DED8 0008AE18  E3 E1 01 28 */	psq_l f31, 296(r1), 0, qr0
/* 8008DEDC 0008AE1C  CB E1 01 20 */	lfd f31, 0x120(r1)
/* 8008DEE0 0008AE20  E3 C1 01 18 */	psq_l f30, 280(r1), 0, qr0
/* 8008DEE4 0008AE24  CB C1 01 10 */	lfd f30, 0x110(r1)
/* 8008DEE8 0008AE28  E3 A1 01 08 */	psq_l f29, 264(r1), 0, qr0
/* 8008DEEC 0008AE2C  CB A1 01 00 */	lfd f29, 0x100(r1)
/* 8008DEF0 0008AE30  E3 81 00 F8 */	psq_l f28, 248(r1), 0, qr0
/* 8008DEF4 0008AE34  CB 81 00 F0 */	lfd f28, 0xf0(r1)
/* 8008DEF8 0008AE38  E3 61 00 E8 */	psq_l f27, 232(r1), 0, qr0
/* 8008DEFC 0008AE3C  CB 61 00 E0 */	lfd f27, 0xe0(r1)
/* 8008DF00 0008AE40  E3 41 00 D8 */	psq_l f26, 216(r1), 0, qr0
/* 8008DF04 0008AE44  CB 41 00 D0 */	lfd f26, 0xd0(r1)
/* 8008DF08 0008AE48  E3 21 00 C8 */	psq_l f25, 200(r1), 0, qr0
/* 8008DF0C 0008AE4C  CB 21 00 C0 */	lfd f25, 0xc0(r1)
/* 8008DF10 0008AE50  E3 01 00 B8 */	psq_l f24, 184(r1), 0, qr0
/* 8008DF14 0008AE54  CB 01 00 B0 */	lfd f24, 0xb0(r1)
/* 8008DF18 0008AE58  E2 E1 00 A8 */	psq_l f23, 168(r1), 0, qr0
/* 8008DF1C 0008AE5C  CA E1 00 A0 */	lfd f23, 0xa0(r1)
/* 8008DF20 0008AE60  E2 C1 00 98 */	psq_l f22, 152(r1), 0, qr0
/* 8008DF24 0008AE64  CA C1 00 90 */	lfd f22, 0x90(r1)
/* 8008DF28 0008AE68  BB 01 00 70 */	lmw r24, 0x70(r1)
/* 8008DF2C 0008AE6C  80 01 01 34 */	lwz r0, 0x134(r1)
/* 8008DF30 0008AE70  7C 08 03 A6 */	mtlr r0
/* 8008DF34 0008AE74  38 21 01 30 */	addi r1, r1, 0x130
/* 8008DF38 0008AE78  4E 80 00 20 */	blr 
.endfn JPADrawStripe__FP18JPAEmitterWorkData

.fn JPADrawStripeX__FP18JPAEmitterWorkData, global
/* 8008DF3C 0008AE7C  94 21 FE A0 */	stwu r1, -0x160(r1)
/* 8008DF40 0008AE80  7C 08 02 A6 */	mflr r0
/* 8008DF44 0008AE84  90 01 01 64 */	stw r0, 0x164(r1)
/* 8008DF48 0008AE88  DB E1 01 50 */	stfd f31, 0x150(r1)
/* 8008DF4C 0008AE8C  F3 E1 01 58 */	psq_st f31, 344(r1), 0, qr0
/* 8008DF50 0008AE90  DB C1 01 40 */	stfd f30, 0x140(r1)
/* 8008DF54 0008AE94  F3 C1 01 48 */	psq_st f30, 328(r1), 0, qr0
/* 8008DF58 0008AE98  DB A1 01 30 */	stfd f29, 0x130(r1)
/* 8008DF5C 0008AE9C  F3 A1 01 38 */	psq_st f29, 312(r1), 0, qr0
/* 8008DF60 0008AEA0  DB 81 01 20 */	stfd f28, 0x120(r1)
/* 8008DF64 0008AEA4  F3 81 01 28 */	psq_st f28, 296(r1), 0, qr0
/* 8008DF68 0008AEA8  DB 61 01 10 */	stfd f27, 0x110(r1)
/* 8008DF6C 0008AEAC  F3 61 01 18 */	psq_st f27, 280(r1), 0, qr0
/* 8008DF70 0008AEB0  DB 41 01 00 */	stfd f26, 0x100(r1)
/* 8008DF74 0008AEB4  F3 41 01 08 */	psq_st f26, 264(r1), 0, qr0
/* 8008DF78 0008AEB8  DB 21 00 F0 */	stfd f25, 0xf0(r1)
/* 8008DF7C 0008AEBC  F3 21 00 F8 */	psq_st f25, 248(r1), 0, qr0
/* 8008DF80 0008AEC0  DB 01 00 E0 */	stfd f24, 0xe0(r1)
/* 8008DF84 0008AEC4  F3 01 00 E8 */	psq_st f24, 232(r1), 0, qr0
/* 8008DF88 0008AEC8  DA E1 00 D0 */	stfd f23, 0xd0(r1)
/* 8008DF8C 0008AECC  F2 E1 00 D8 */	psq_st f23, 216(r1), 0, qr0
/* 8008DF90 0008AED0  DA C1 00 C0 */	stfd f22, 0xc0(r1)
/* 8008DF94 0008AED4  F2 C1 00 C8 */	psq_st f22, 200(r1), 0, qr0
/* 8008DF98 0008AED8  DA A1 00 B0 */	stfd f21, 0xb0(r1)
/* 8008DF9C 0008AEDC  F2 A1 00 B8 */	psq_st f21, 184(r1), 0, qr0
/* 8008DFA0 0008AEE0  DA 81 00 A0 */	stfd f20, 0xa0(r1)
/* 8008DFA4 0008AEE4  F2 81 00 A8 */	psq_st f20, 168(r1), 0, qr0
/* 8008DFA8 0008AEE8  DA 61 00 90 */	stfd f19, 0x90(r1)
/* 8008DFAC 0008AEEC  F2 61 00 98 */	psq_st f19, 152(r1), 0, qr0
/* 8008DFB0 0008AEF0  BE C1 00 68 */	stmw r22, 0x68(r1)
/* 8008DFB4 0008AEF4  7C 7B 1B 78 */	mr r27, r3
/* 8008DFB8 0008AEF8  80 A3 01 E4 */	lwz r5, 0x1e4(r3)
/* 8008DFBC 0008AEFC  80 63 00 04 */	lwz r3, 4(r3)
/* 8008DFC0 0008AF00  83 E5 00 08 */	lwz r31, 8(r5)
/* 8008DFC4 0008AF04  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8008DFC8 0008AF08  28 1F 00 02 */	cmplwi r31, 2
/* 8008DFCC 0008AF0C  41 80 08 A0 */	blt .L_8008E86C
/* 8008DFD0 0008AF10  3C 80 43 30 */	lis r4, 0x4330
/* 8008DFD4 0008AF14  80 63 00 00 */	lwz r3, 0(r3)
/* 8008DFD8 0008AF18  93 E1 00 64 */	stw r31, 0x64(r1)
/* 8008DFDC 0008AF1C  80 03 00 08 */	lwz r0, 8(r3)
/* 8008DFE0 0008AF20  90 81 00 60 */	stw r4, 0x60(r1)
/* 8008DFE4 0008AF24  C8 22 87 F8 */	lfd f1, lbl_80516B58@sda21(r2)
/* 8008DFE8 0008AF28  54 00 02 95 */	rlwinm. r0, r0, 0, 0xa, 0xa
/* 8008DFEC 0008AF2C  C8 01 00 60 */	lfd f0, 0x60(r1)
/* 8008DFF0 0008AF30  C0 C2 87 EC */	lfs f6, lbl_80516B4C@sda21(r2)
/* 8008DFF4 0008AF34  EC 00 08 28 */	fsubs f0, f0, f1
/* 8008DFF8 0008AF38  C0 3B 01 4C */	lfs f1, 0x14c(r27)
/* 8008DFFC 0008AF3C  C2 62 87 F0 */	lfs f19, lbl_80516B50@sda21(r2)
/* 8008E000 0008AF40  C0 FB 01 50 */	lfs f7, 0x150(r27)
/* 8008E004 0008AF44  EC A6 08 2A */	fadds f5, f6, f1
/* 8008E008 0008AF48  EC 00 30 28 */	fsubs f0, f0, f6
/* 8008E00C 0008AF4C  EC 46 08 28 */	fsubs f2, f6, f1
/* 8008E010 0008AF50  C0 82 87 D8 */	lfs f4, lbl_80516B38@sda21(r2)
/* 8008E014 0008AF54  C0 7B 01 44 */	lfs f3, 0x144(r27)
/* 8008E018 0008AF58  EC 26 38 2A */	fadds f1, f6, f7
/* 8008E01C 0008AF5C  EF E6 00 24 */	fdivs f31, f6, f0
/* 8008E020 0008AF60  C0 1B 01 48 */	lfs f0, 0x148(r27)
/* 8008E024 0008AF64  EC 64 00 F2 */	fmuls f3, f4, f3
/* 8008E028 0008AF68  EC 84 00 32 */	fmuls f4, f4, f0
/* 8008E02C 0008AF6C  EC 06 38 28 */	fsubs f0, f6, f7
/* 8008E030 0008AF70  FF 20 98 90 */	fmr f25, f19
/* 8008E034 0008AF74  EF 05 00 F2 */	fmuls f24, f5, f3
/* 8008E038 0008AF78  EE E2 00 F2 */	fmuls f23, f2, f3
/* 8008E03C 0008AF7C  EE 81 01 32 */	fmuls f20, f1, f4
/* 8008E040 0008AF80  EE A0 01 32 */	fmuls f21, f0, f4
/* 8008E044 0008AF84  41 82 00 24 */	beq .L_8008E068
/* 8008E048 0008AF88  3C 60 80 09 */	lis r3, "getPrev__FP26JPANode<15JPABaseParticle>"@ha
/* 8008E04C 0008AF8C  FF 20 30 90 */	fmr f25, f6
/* 8008E050 0008AF90  38 03 D9 AC */	addi r0, r3, "getPrev__FP26JPANode<15JPABaseParticle>"@l
/* 8008E054 0008AF94  FE 60 30 90 */	fmr f19, f6
/* 8008E058 0008AF98  FF E0 F8 50 */	fneg f31, f31
/* 8008E05C 0008AF9C  83 A5 00 04 */	lwz r29, 4(r5)
/* 8008E060 0008AFA0  7C 1C 03 78 */	mr r28, r0
/* 8008E064 0008AFA4  48 00 00 14 */	b .L_8008E078
.L_8008E068:
/* 8008E068 0008AFA8  3C 60 80 09 */	lis r3, "getNext__FP26JPANode<15JPABaseParticle>"@ha
/* 8008E06C 0008AFAC  83 A5 00 00 */	lwz r29, 0(r5)
/* 8008E070 0008AFB0  38 03 D9 A4 */	addi r0, r3, "getNext__FP26JPANode<15JPABaseParticle>"@l
/* 8008E074 0008AFB4  7C 1C 03 78 */	mr r28, r0
.L_8008E078:
/* 8008E078 0008AFB8  38 7B 01 84 */	addi r3, r27, 0x184
/* 8008E07C 0008AFBC  38 80 00 00 */	li r4, 0
/* 8008E080 0008AFC0  48 05 B4 F9 */	bl GXLoadPosMtxImm
/* 8008E084 0008AFC4  80 1B 02 10 */	lwz r0, 0x210(r27)
/* 8008E088 0008AFC8  3C 60 80 4A */	lis r3, p_prj@ha
/* 8008E08C 0008AFCC  38 A3 30 E0 */	addi r5, r3, p_prj@l
/* 8008E090 0008AFD0  7F 63 DB 78 */	mr r3, r27
/* 8008E094 0008AFD4  54 00 10 3A */	slwi r0, r0, 2
/* 8008E098 0008AFD8  38 9B 01 84 */	addi r4, r27, 0x184
/* 8008E09C 0008AFDC  7D 85 00 2E */	lwzx r12, r5, r0
/* 8008E0A0 0008AFE0  7D 89 03 A6 */	mtctr r12
/* 8008E0A4 0008AFE4  4E 80 04 21 */	bctrl 
/* 8008E0A8 0008AFE8  38 60 00 09 */	li r3, 9
/* 8008E0AC 0008AFEC  38 80 00 01 */	li r4, 1
/* 8008E0B0 0008AFF0  48 05 61 D5 */	bl GXSetVtxDesc
/* 8008E0B4 0008AFF4  38 60 00 0D */	li r3, 0xd
/* 8008E0B8 0008AFF8  38 80 00 01 */	li r4, 1
/* 8008E0BC 0008AFFC  48 05 61 C9 */	bl GXSetVtxDesc
/* 8008E0C0 0008B000  57 FE 08 3C */	slwi r30, r31, 1
/* 8008E0C4 0008B004  57 E5 0C 3C */	rlwinm r5, r31, 1, 0x10, 0x1e
/* 8008E0C8 0008B008  38 60 00 98 */	li r3, 0x98
/* 8008E0CC 0008B00C  38 80 00 01 */	li r4, 1
/* 8008E0D0 0008B010  48 05 78 B9 */	bl GXBegin
/* 8008E0D4 0008B014  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8008E0D8 0008B018  3C 80 80 4A */	lis r4, p_direction@ha
/* 8008E0DC 0008B01C  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008E0E0 0008B020  C3 A2 87 F0 */	lfs f29, lbl_80516B50@sda21(r2)
/* 8008E0E4 0008B024  C3 C2 88 08 */	lfs f30, lbl_80516B68@sda21(r2)
/* 8008E0E8 0008B028  7F BF EB 78 */	mr r31, r29
/* 8008E0EC 0008B02C  C2 C2 87 EC */	lfs f22, lbl_80516B4C@sda21(r2)
/* 8008E0F0 0008B030  3A E5 71 A0 */	addi r23, r5, sincosTable___5JMath@l
/* 8008E0F4 0008B034  3B 04 30 EC */	addi r24, r4, p_direction@l
/* 8008E0F8 0008B038  3B 23 48 DC */	addi r25, r3, __float_epsilon@l
/* 8008E0FC 0008B03C  3F 40 CC 01 */	lis r26, 0xcc01
/* 8008E100 0008B040  48 00 03 80 */	b .L_8008E480
.L_8008E104:
/* 8008E104 0008B044  93 FB 01 E8 */	stw r31, 0x1e8(r27)
/* 8008E108 0008B048  3A DF 00 08 */	addi r22, r31, 8
/* 8008E10C 0008B04C  7F 63 DB 78 */	mr r3, r27
/* 8008E110 0008B050  38 A1 00 08 */	addi r5, r1, 8
/* 8008E114 0008B054  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 8008E118 0008B058  7E C4 B3 78 */	mr r4, r22
/* 8008E11C 0008B05C  A0 1F 00 90 */	lhz r0, 0x90(r31)
/* 8008E120 0008B060  FC 00 08 50 */	fneg f0, f1
/* 8008E124 0008B064  C3 9F 00 08 */	lfs f28, 8(r31)
/* 8008E128 0008B068  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008E12C 0008B06C  EC 21 05 F2 */	fmuls f1, f1, f23
/* 8008E130 0008B070  7C D7 02 14 */	add r6, r23, r0
/* 8008E134 0008B074  C3 7F 00 0C */	lfs f27, 0xc(r31)
/* 8008E138 0008B078  C3 5F 00 10 */	lfs f26, 0x10(r31)
/* 8008E13C 0008B07C  EC 00 06 32 */	fmuls f0, f0, f24
/* 8008E140 0008B080  C0 86 00 00 */	lfs f4, 0(r6)
/* 8008E144 0008B084  C0 A6 00 04 */	lfs f5, 4(r6)
/* 8008E148 0008B088  EC 60 01 32 */	fmuls f3, f0, f4
/* 8008E14C 0008B08C  D3 A1 00 18 */	stfs f29, 0x18(r1)
/* 8008E150 0008B090  EC 40 01 72 */	fmuls f2, f0, f5
/* 8008E154 0008B094  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8008E158 0008B098  EC 81 01 32 */	fmuls f4, f1, f4
/* 8008E15C 0008B09C  EC 01 01 72 */	fmuls f0, f1, f5
/* 8008E160 0008B0A0  D3 A1 00 1C */	stfs f29, 0x1c(r1)
/* 8008E164 0008B0A4  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8008E168 0008B0A8  D3 A1 00 24 */	stfs f29, 0x24(r1)
/* 8008E16C 0008B0AC  D3 A1 00 28 */	stfs f29, 0x28(r1)
/* 8008E170 0008B0B0  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8008E174 0008B0B4  D3 A1 00 18 */	stfs f29, 0x18(r1)
/* 8008E178 0008B0B8  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8008E17C 0008B0BC  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8008E180 0008B0C0  D3 A1 00 24 */	stfs f29, 0x24(r1)
/* 8008E184 0008B0C4  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8008E188 0008B0C8  80 1B 02 00 */	lwz r0, 0x200(r27)
/* 8008E18C 0008B0CC  54 00 10 3A */	slwi r0, r0, 2
/* 8008E190 0008B0D0  7D 98 00 2E */	lwzx r12, r24, r0
/* 8008E194 0008B0D4  7D 89 03 A6 */	mtctr r12
/* 8008E198 0008B0D8  4E 80 04 21 */	bctrl 
/* 8008E19C 0008B0DC  C0 21 00 08 */	lfs f1, 8(r1)
/* 8008E1A0 0008B0E0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8008E1A4 0008B0E4  EC 41 00 72 */	fmuls f2, f1, f1
/* 8008E1A8 0008B0E8  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8008E1AC 0008B0EC  EC 20 00 32 */	fmuls f1, f0, f0
/* 8008E1B0 0008B0F0  C0 19 00 00 */	lfs f0, 0(r25)
/* 8008E1B4 0008B0F4  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8008E1B8 0008B0F8  EC 9E 00 32 */	fmuls f4, f30, f0
/* 8008E1BC 0008B0FC  EC 02 08 2A */	fadds f0, f2, f1
/* 8008E1C0 0008B100  EC A3 00 2A */	fadds f5, f3, f0
/* 8008E1C4 0008B104  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 8008E1C8 0008B108  4C 40 13 82 */	cror 2, 0, 2
/* 8008E1CC 0008B10C  40 82 00 1C */	bne .L_8008E1E8
/* 8008E1D0 0008B110  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008E1D4 0008B114  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008E1D8 0008B118  D0 21 00 08 */	stfs f1, 8(r1)
/* 8008E1DC 0008B11C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8008E1E0 0008B120  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8008E1E4 0008B124  48 00 00 68 */	b .L_8008E24C
.L_8008E1E8:
/* 8008E1E8 0008B128  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 8008E1EC 0008B12C  4C 40 13 82 */	cror 2, 0, 2
/* 8008E1F0 0008B130  41 82 00 5C */	beq .L_8008E24C
/* 8008E1F4 0008B134  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008E1F8 0008B138  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8008E1FC 0008B13C  4C 40 13 82 */	cror 2, 0, 2
/* 8008E200 0008B140  40 82 00 08 */	bne .L_8008E208
/* 8008E204 0008B144  48 00 00 24 */	b .L_8008E228
.L_8008E208:
/* 8008E208 0008B148  FC 60 28 34 */	frsqrte f3, f5
/* 8008E20C 0008B14C  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008E210 0008B150  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008E214 0008B154  FC 60 18 18 */	frsp f3, f3
/* 8008E218 0008B158  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008E21C 0008B15C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008E220 0008B160  EC 05 00 7C */	fnmsubs f0, f5, f1, f0
/* 8008E224 0008B164  EC A2 00 32 */	fmuls f5, f2, f0
.L_8008E228:
/* 8008E228 0008B168  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008E22C 0008B16C  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8008E230 0008B170  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008E234 0008B174  EC 42 01 72 */	fmuls f2, f2, f5
/* 8008E238 0008B178  EC 21 01 72 */	fmuls f1, f1, f5
/* 8008E23C 0008B17C  EC 00 01 72 */	fmuls f0, f0, f5
/* 8008E240 0008B180  D0 41 00 08 */	stfs f2, 8(r1)
/* 8008E244 0008B184  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8008E248 0008B188  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8008E24C:
/* 8008E24C 0008B18C  C0 96 00 54 */	lfs f4, 0x54(r22)
/* 8008E250 0008B190  C0 C1 00 10 */	lfs f6, 0x10(r1)
/* 8008E254 0008B194  C0 19 00 00 */	lfs f0, 0(r25)
/* 8008E258 0008B198  EC 24 01 B2 */	fmuls f1, f4, f6
/* 8008E25C 0008B19C  C0 A1 00 0C */	lfs f5, 0xc(r1)
/* 8008E260 0008B1A0  C0 76 00 5C */	lfs f3, 0x5c(r22)
/* 8008E264 0008B1A4  ED 1E 00 32 */	fmuls f8, f30, f0
/* 8008E268 0008B1A8  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008E26C 0008B1AC  EC 03 01 72 */	fmuls f0, f3, f5
/* 8008E270 0008B1B0  EC 23 08 B8 */	fmsubs f1, f3, f2, f1
/* 8008E274 0008B1B4  C0 F6 00 58 */	lfs f7, 0x58(r22)
/* 8008E278 0008B1B8  EC 47 00 B2 */	fmuls f2, f7, f2
/* 8008E27C 0008B1BC  EC 61 00 72 */	fmuls f3, f1, f1
/* 8008E280 0008B1C0  EC 07 01 B8 */	fmsubs f0, f7, f6, f0
/* 8008E284 0008B1C4  EC 44 11 78 */	fmsubs f2, f4, f5, f2
/* 8008E288 0008B1C8  EC 60 18 3A */	fmadds f3, f0, f0, f3
/* 8008E28C 0008B1CC  EC E2 18 BA */	fmadds f7, f2, f2, f3
/* 8008E290 0008B1D0  FC 07 40 40 */	fcmpo cr0, f7, f8
/* 8008E294 0008B1D4  4C 40 13 82 */	cror 2, 0, 2
/* 8008E298 0008B1D8  40 82 00 14 */	bne .L_8008E2AC
/* 8008E29C 0008B1DC  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008E2A0 0008B1E0  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008E2A4 0008B1E4  FC 40 08 90 */	fmr f2, f1
/* 8008E2A8 0008B1E8  48 00 00 50 */	b .L_8008E2F8
.L_8008E2AC:
/* 8008E2AC 0008B1EC  FC 07 40 40 */	fcmpo cr0, f7, f8
/* 8008E2B0 0008B1F0  4C 40 13 82 */	cror 2, 0, 2
/* 8008E2B4 0008B1F4  41 82 00 44 */	beq .L_8008E2F8
/* 8008E2B8 0008B1F8  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008E2BC 0008B1FC  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008E2C0 0008B200  4C 40 13 82 */	cror 2, 0, 2
/* 8008E2C4 0008B204  40 82 00 08 */	bne .L_8008E2CC
/* 8008E2C8 0008B208  48 00 00 24 */	b .L_8008E2EC
.L_8008E2CC:
/* 8008E2CC 0008B20C  FC C0 38 34 */	frsqrte f6, f7
/* 8008E2D0 0008B210  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008E2D4 0008B214  C0 62 88 0C */	lfs f3, lbl_80516B6C@sda21(r2)
/* 8008E2D8 0008B218  FC C0 30 18 */	frsp f6, f6
/* 8008E2DC 0008B21C  EC 86 01 B2 */	fmuls f4, f6, f6
/* 8008E2E0 0008B220  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008E2E4 0008B224  EC 67 19 3C */	fnmsubs f3, f7, f4, f3
/* 8008E2E8 0008B228  EC E5 00 F2 */	fmuls f7, f5, f3
.L_8008E2EC:
/* 8008E2EC 0008B22C  EC 00 01 F2 */	fmuls f0, f0, f7
/* 8008E2F0 0008B230  EC 21 01 F2 */	fmuls f1, f1, f7
/* 8008E2F4 0008B234  EC 42 01 F2 */	fmuls f2, f2, f7
.L_8008E2F8:
/* 8008E2F8 0008B238  C0 E1 00 10 */	lfs f7, 0x10(r1)
/* 8008E2FC 0008B23C  C0 C1 00 08 */	lfs f6, 8(r1)
/* 8008E300 0008B240  EC 67 00 72 */	fmuls f3, f7, f1
/* 8008E304 0008B244  C1 01 00 0C */	lfs f8, 0xc(r1)
/* 8008E308 0008B248  EC 86 00 B2 */	fmuls f4, f6, f2
/* 8008E30C 0008B24C  EC A8 00 32 */	fmuls f5, f8, f0
/* 8008E310 0008B250  EC 68 18 B8 */	fmsubs f3, f8, f2, f3
/* 8008E314 0008B254  EC 87 20 38 */	fmsubs f4, f7, f0, f4
/* 8008E318 0008B258  EC A6 28 78 */	fmsubs f5, f6, f1, f5
/* 8008E31C 0008B25C  D0 76 00 54 */	stfs f3, 0x54(r22)
/* 8008E320 0008B260  D0 96 00 58 */	stfs f4, 0x58(r22)
/* 8008E324 0008B264  D0 B6 00 5C */	stfs f5, 0x5c(r22)
/* 8008E328 0008B268  C0 96 00 54 */	lfs f4, 0x54(r22)
/* 8008E32C 0008B26C  C0 76 00 58 */	lfs f3, 0x58(r22)
/* 8008E330 0008B270  EC A4 01 32 */	fmuls f5, f4, f4
/* 8008E334 0008B274  C0 D6 00 5C */	lfs f6, 0x5c(r22)
/* 8008E338 0008B278  EC 83 00 F2 */	fmuls f4, f3, f3
/* 8008E33C 0008B27C  C0 79 00 00 */	lfs f3, 0(r25)
/* 8008E340 0008B280  EC C6 01 B2 */	fmuls f6, f6, f6
/* 8008E344 0008B284  EC 7E 00 F2 */	fmuls f3, f30, f3
/* 8008E348 0008B288  EC 85 20 2A */	fadds f4, f5, f4
/* 8008E34C 0008B28C  EC E6 20 2A */	fadds f7, f6, f4
/* 8008E350 0008B290  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008E354 0008B294  4C 40 13 82 */	cror 2, 0, 2
/* 8008E358 0008B298  41 82 00 5C */	beq .L_8008E3B4
/* 8008E35C 0008B29C  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008E360 0008B2A0  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008E364 0008B2A4  4C 40 13 82 */	cror 2, 0, 2
/* 8008E368 0008B2A8  40 82 00 08 */	bne .L_8008E370
/* 8008E36C 0008B2AC  48 00 00 24 */	b .L_8008E390
.L_8008E370:
/* 8008E370 0008B2B0  FC C0 38 34 */	frsqrte f6, f7
/* 8008E374 0008B2B4  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008E378 0008B2B8  C0 62 88 0C */	lfs f3, lbl_80516B6C@sda21(r2)
/* 8008E37C 0008B2BC  FC C0 30 18 */	frsp f6, f6
/* 8008E380 0008B2C0  EC 86 01 B2 */	fmuls f4, f6, f6
/* 8008E384 0008B2C4  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008E388 0008B2C8  EC 67 19 3C */	fnmsubs f3, f7, f4, f3
/* 8008E38C 0008B2CC  EC E5 00 F2 */	fmuls f7, f5, f3
.L_8008E390:
/* 8008E390 0008B2D0  C0 76 00 54 */	lfs f3, 0x54(r22)
/* 8008E394 0008B2D4  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008E398 0008B2D8  D0 76 00 54 */	stfs f3, 0x54(r22)
/* 8008E39C 0008B2DC  C0 76 00 58 */	lfs f3, 0x58(r22)
/* 8008E3A0 0008B2E0  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008E3A4 0008B2E4  D0 76 00 58 */	stfs f3, 0x58(r22)
/* 8008E3A8 0008B2E8  C0 76 00 5C */	lfs f3, 0x5c(r22)
/* 8008E3AC 0008B2EC  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008E3B0 0008B2F0  D0 76 00 5C */	stfs f3, 0x5c(r22)
.L_8008E3B4:
/* 8008E3B4 0008B2F4  C0 81 00 08 */	lfs f4, 8(r1)
/* 8008E3B8 0008B2F8  38 81 00 14 */	addi r4, r1, 0x14
/* 8008E3BC 0008B2FC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8008E3C0 0008B300  7C 85 23 78 */	mr r5, r4
/* 8008E3C4 0008B304  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8008E3C8 0008B308  38 61 00 2C */	addi r3, r1, 0x2c
/* 8008E3CC 0008B30C  D0 81 00 30 */	stfs f4, 0x30(r1)
/* 8008E3D0 0008B310  38 C0 00 02 */	li r6, 2
/* 8008E3D4 0008B314  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008E3D8 0008B318  C0 96 00 54 */	lfs f4, 0x54(r22)
/* 8008E3DC 0008B31C  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8008E3E0 0008B320  D3 A1 00 38 */	stfs f29, 0x38(r1)
/* 8008E3E4 0008B324  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8008E3E8 0008B328  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 8008E3EC 0008B32C  C0 36 00 58 */	lfs f1, 0x58(r22)
/* 8008E3F0 0008B330  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8008E3F4 0008B334  D3 A1 00 48 */	stfs f29, 0x48(r1)
/* 8008E3F8 0008B338  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 8008E3FC 0008B33C  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8008E400 0008B340  C0 16 00 5C */	lfs f0, 0x5c(r22)
/* 8008E404 0008B344  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8008E408 0008B348  D3 A1 00 58 */	stfs f29, 0x58(r1)
/* 8008E40C 0008B34C  48 05 C8 75 */	bl PSMTXMultVecArraySR
/* 8008E410 0008B350  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8008E414 0008B354  7F 8C E3 78 */	mr r12, r28
/* 8008E418 0008B358  7F E3 FB 78 */	mr r3, r31
/* 8008E41C 0008B35C  EC 00 E0 2A */	fadds f0, f0, f28
/* 8008E420 0008B360  D0 1A 80 00 */	stfs f0, 0xCC008000@l(r26)
/* 8008E424 0008B364  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8008E428 0008B368  EC 00 D8 2A */	fadds f0, f0, f27
/* 8008E42C 0008B36C  D0 1A 80 00 */	stfs f0, 0xCC008000@l(r26)
/* 8008E430 0008B370  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8008E434 0008B374  EC 00 D0 2A */	fadds f0, f0, f26
/* 8008E438 0008B378  D0 1A 80 00 */	stfs f0, 0xCC008000@l(r26)
/* 8008E43C 0008B37C  D3 BA 80 00 */	stfs f29, 0xCC008000@l(r26)
/* 8008E440 0008B380  D3 3A 80 00 */	stfs f25, 0xCC008000@l(r26)
/* 8008E444 0008B384  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8008E448 0008B388  EC 00 E0 2A */	fadds f0, f0, f28
/* 8008E44C 0008B38C  D0 1A 80 00 */	stfs f0, 0xCC008000@l(r26)
/* 8008E450 0008B390  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8008E454 0008B394  EC 00 D8 2A */	fadds f0, f0, f27
/* 8008E458 0008B398  D0 1A 80 00 */	stfs f0, 0xCC008000@l(r26)
/* 8008E45C 0008B39C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8008E460 0008B3A0  EC 00 D0 2A */	fadds f0, f0, f26
/* 8008E464 0008B3A4  D0 1A 80 00 */	stfs f0, 0xCC008000@l(r26)
/* 8008E468 0008B3A8  D2 DA 80 00 */	stfs f22, 0xCC008000@l(r26)
/* 8008E46C 0008B3AC  D3 3A 80 00 */	stfs f25, 0xCC008000@l(r26)
/* 8008E470 0008B3B0  7D 89 03 A6 */	mtctr r12
/* 8008E474 0008B3B4  4E 80 04 21 */	bctrl 
/* 8008E478 0008B3B8  EF 39 F8 2A */	fadds f25, f25, f31
/* 8008E47C 0008B3BC  7C 7F 1B 78 */	mr r31, r3
.L_8008E480:
/* 8008E480 0008B3C0  28 1F 00 00 */	cmplwi r31, 0
/* 8008E484 0008B3C4  40 82 FC 80 */	bne .L_8008E104
/* 8008E488 0008B3C8  FF 20 98 90 */	fmr f25, f19
/* 8008E48C 0008B3CC  57 C5 04 3E */	clrlwi r5, r30, 0x10
/* 8008E490 0008B3D0  38 60 00 98 */	li r3, 0x98
/* 8008E494 0008B3D4  38 80 00 01 */	li r4, 1
/* 8008E498 0008B3D8  48 05 74 F1 */	bl GXBegin
/* 8008E49C 0008B3DC  3C A0 80 50 */	lis r5, sincosTable___5JMath@ha
/* 8008E4A0 0008B3E0  3C 80 80 4A */	lis r4, p_direction@ha
/* 8008E4A4 0008B3E4  3C 60 80 51 */	lis r3, __float_epsilon@ha
/* 8008E4A8 0008B3E8  C3 02 87 F0 */	lfs f24, lbl_80516B50@sda21(r2)
/* 8008E4AC 0008B3EC  C2 E2 88 08 */	lfs f23, lbl_80516B68@sda21(r2)
/* 8008E4B0 0008B3F0  7F B7 EB 78 */	mr r23, r29
/* 8008E4B4 0008B3F4  C2 C2 87 EC */	lfs f22, lbl_80516B4C@sda21(r2)
/* 8008E4B8 0008B3F8  3B 45 71 A0 */	addi r26, r5, sincosTable___5JMath@l
/* 8008E4BC 0008B3FC  3B E4 30 EC */	addi r31, r4, p_direction@l
/* 8008E4C0 0008B400  3B C3 48 DC */	addi r30, r3, __float_epsilon@l
/* 8008E4C4 0008B404  3F A0 CC 01 */	lis r29, 0xcc01
/* 8008E4C8 0008B408  48 00 03 84 */	b .L_8008E84C
.L_8008E4CC:
/* 8008E4CC 0008B40C  92 FB 01 E8 */	stw r23, 0x1e8(r27)
/* 8008E4D0 0008B410  3A D7 00 08 */	addi r22, r23, 8
/* 8008E4D4 0008B414  7F 63 DB 78 */	mr r3, r27
/* 8008E4D8 0008B418  38 A1 00 08 */	addi r5, r1, 8
/* 8008E4DC 0008B41C  A0 17 00 90 */	lhz r0, 0x90(r23)
/* 8008E4E0 0008B420  7E C4 B3 78 */	mr r4, r22
/* 8008E4E4 0008B424  C0 37 00 6C */	lfs f1, 0x6c(r23)
/* 8008E4E8 0008B428  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 8008E4EC 0008B42C  C3 57 00 08 */	lfs f26, 8(r23)
/* 8008E4F0 0008B430  FC 00 08 50 */	fneg f0, f1
/* 8008E4F4 0008B434  7C DA 02 14 */	add r6, r26, r0
/* 8008E4F8 0008B438  C0 46 00 00 */	lfs f2, 0(r6)
/* 8008E4FC 0008B43C  EC 21 05 72 */	fmuls f1, f1, f21
/* 8008E500 0008B440  C0 66 00 04 */	lfs f3, 4(r6)
/* 8008E504 0008B444  FC A0 10 50 */	fneg f5, f2
/* 8008E508 0008B448  EC 00 05 32 */	fmuls f0, f0, f20
/* 8008E50C 0008B44C  C3 77 00 0C */	lfs f27, 0xc(r23)
/* 8008E510 0008B450  C3 97 00 10 */	lfs f28, 0x10(r23)
/* 8008E514 0008B454  EC 81 00 F2 */	fmuls f4, f1, f3
/* 8008E518 0008B458  D3 01 00 18 */	stfs f24, 0x18(r1)
/* 8008E51C 0008B45C  EC 60 00 F2 */	fmuls f3, f0, f3
/* 8008E520 0008B460  EC 40 01 72 */	fmuls f2, f0, f5
/* 8008E524 0008B464  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8008E528 0008B468  EC 01 01 72 */	fmuls f0, f1, f5
/* 8008E52C 0008B46C  D3 01 00 1C */	stfs f24, 0x1c(r1)
/* 8008E530 0008B470  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 8008E534 0008B474  D3 01 00 24 */	stfs f24, 0x24(r1)
/* 8008E538 0008B478  D3 01 00 28 */	stfs f24, 0x28(r1)
/* 8008E53C 0008B47C  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 8008E540 0008B480  D3 01 00 18 */	stfs f24, 0x18(r1)
/* 8008E544 0008B484  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 8008E548 0008B488  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 8008E54C 0008B48C  D3 01 00 24 */	stfs f24, 0x24(r1)
/* 8008E550 0008B490  D0 81 00 28 */	stfs f4, 0x28(r1)
/* 8008E554 0008B494  80 1B 02 00 */	lwz r0, 0x200(r27)
/* 8008E558 0008B498  54 00 10 3A */	slwi r0, r0, 2
/* 8008E55C 0008B49C  7D 9F 00 2E */	lwzx r12, r31, r0
/* 8008E560 0008B4A0  7D 89 03 A6 */	mtctr r12
/* 8008E564 0008B4A4  4E 80 04 21 */	bctrl 
/* 8008E568 0008B4A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 8008E56C 0008B4AC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8008E570 0008B4B0  EC 41 00 72 */	fmuls f2, f1, f1
/* 8008E574 0008B4B4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 8008E578 0008B4B8  EC 20 00 32 */	fmuls f1, f0, f0
/* 8008E57C 0008B4BC  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8008E580 0008B4C0  EC 63 00 F2 */	fmuls f3, f3, f3
/* 8008E584 0008B4C4  EC 97 00 32 */	fmuls f4, f23, f0
/* 8008E588 0008B4C8  EC 02 08 2A */	fadds f0, f2, f1
/* 8008E58C 0008B4CC  EC A3 00 2A */	fadds f5, f3, f0
/* 8008E590 0008B4D0  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 8008E594 0008B4D4  4C 40 13 82 */	cror 2, 0, 2
/* 8008E598 0008B4D8  40 82 00 1C */	bne .L_8008E5B4
/* 8008E59C 0008B4DC  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008E5A0 0008B4E0  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008E5A4 0008B4E4  D0 21 00 08 */	stfs f1, 8(r1)
/* 8008E5A8 0008B4E8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8008E5AC 0008B4EC  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 8008E5B0 0008B4F0  48 00 00 68 */	b .L_8008E618
.L_8008E5B4:
/* 8008E5B4 0008B4F4  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 8008E5B8 0008B4F8  4C 40 13 82 */	cror 2, 0, 2
/* 8008E5BC 0008B4FC  41 82 00 5C */	beq .L_8008E618
/* 8008E5C0 0008B500  C0 02 87 F0 */	lfs f0, lbl_80516B50@sda21(r2)
/* 8008E5C4 0008B504  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 8008E5C8 0008B508  4C 40 13 82 */	cror 2, 0, 2
/* 8008E5CC 0008B50C  40 82 00 08 */	bne .L_8008E5D4
/* 8008E5D0 0008B510  48 00 00 24 */	b .L_8008E5F4
.L_8008E5D4:
/* 8008E5D4 0008B514  FC 60 28 34 */	frsqrte f3, f5
/* 8008E5D8 0008B518  C0 42 87 E8 */	lfs f2, lbl_80516B48@sda21(r2)
/* 8008E5DC 0008B51C  C0 02 88 0C */	lfs f0, lbl_80516B6C@sda21(r2)
/* 8008E5E0 0008B520  FC 60 18 18 */	frsp f3, f3
/* 8008E5E4 0008B524  EC 23 00 F2 */	fmuls f1, f3, f3
/* 8008E5E8 0008B528  EC 42 00 F2 */	fmuls f2, f2, f3
/* 8008E5EC 0008B52C  EC 05 00 7C */	fnmsubs f0, f5, f1, f0
/* 8008E5F0 0008B530  EC A2 00 32 */	fmuls f5, f2, f0
.L_8008E5F4:
/* 8008E5F4 0008B534  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008E5F8 0008B538  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 8008E5FC 0008B53C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008E600 0008B540  EC 42 01 72 */	fmuls f2, f2, f5
/* 8008E604 0008B544  EC 21 01 72 */	fmuls f1, f1, f5
/* 8008E608 0008B548  EC 00 01 72 */	fmuls f0, f0, f5
/* 8008E60C 0008B54C  D0 41 00 08 */	stfs f2, 8(r1)
/* 8008E610 0008B550  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 8008E614 0008B554  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_8008E618:
/* 8008E618 0008B558  C0 96 00 54 */	lfs f4, 0x54(r22)
/* 8008E61C 0008B55C  C0 C1 00 10 */	lfs f6, 0x10(r1)
/* 8008E620 0008B560  C0 1E 00 00 */	lfs f0, 0(r30)
/* 8008E624 0008B564  EC 24 01 B2 */	fmuls f1, f4, f6
/* 8008E628 0008B568  C0 A1 00 0C */	lfs f5, 0xc(r1)
/* 8008E62C 0008B56C  C0 76 00 5C */	lfs f3, 0x5c(r22)
/* 8008E630 0008B570  ED 17 00 32 */	fmuls f8, f23, f0
/* 8008E634 0008B574  C0 41 00 08 */	lfs f2, 8(r1)
/* 8008E638 0008B578  EC 03 01 72 */	fmuls f0, f3, f5
/* 8008E63C 0008B57C  EC 23 08 B8 */	fmsubs f1, f3, f2, f1
/* 8008E640 0008B580  C0 F6 00 58 */	lfs f7, 0x58(r22)
/* 8008E644 0008B584  EC 47 00 B2 */	fmuls f2, f7, f2
/* 8008E648 0008B588  EC 61 00 72 */	fmuls f3, f1, f1
/* 8008E64C 0008B58C  EC 07 01 B8 */	fmsubs f0, f7, f6, f0
/* 8008E650 0008B590  EC 44 11 78 */	fmsubs f2, f4, f5, f2
/* 8008E654 0008B594  EC 60 18 3A */	fmadds f3, f0, f0, f3
/* 8008E658 0008B598  EC E2 18 BA */	fmadds f7, f2, f2, f3
/* 8008E65C 0008B59C  FC 07 40 40 */	fcmpo cr0, f7, f8
/* 8008E660 0008B5A0  4C 40 13 82 */	cror 2, 0, 2
/* 8008E664 0008B5A4  40 82 00 14 */	bne .L_8008E678
/* 8008E668 0008B5A8  C0 22 87 F0 */	lfs f1, lbl_80516B50@sda21(r2)
/* 8008E66C 0008B5AC  C0 02 87 EC */	lfs f0, lbl_80516B4C@sda21(r2)
/* 8008E670 0008B5B0  FC 40 08 90 */	fmr f2, f1
/* 8008E674 0008B5B4  48 00 00 50 */	b .L_8008E6C4
.L_8008E678:
/* 8008E678 0008B5B8  FC 07 40 40 */	fcmpo cr0, f7, f8
/* 8008E67C 0008B5BC  4C 40 13 82 */	cror 2, 0, 2
/* 8008E680 0008B5C0  41 82 00 44 */	beq .L_8008E6C4
/* 8008E684 0008B5C4  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008E688 0008B5C8  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008E68C 0008B5CC  4C 40 13 82 */	cror 2, 0, 2
/* 8008E690 0008B5D0  40 82 00 08 */	bne .L_8008E698
/* 8008E694 0008B5D4  48 00 00 24 */	b .L_8008E6B8
.L_8008E698:
/* 8008E698 0008B5D8  FC C0 38 34 */	frsqrte f6, f7
/* 8008E69C 0008B5DC  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008E6A0 0008B5E0  C0 62 88 0C */	lfs f3, lbl_80516B6C@sda21(r2)
/* 8008E6A4 0008B5E4  FC C0 30 18 */	frsp f6, f6
/* 8008E6A8 0008B5E8  EC 86 01 B2 */	fmuls f4, f6, f6
/* 8008E6AC 0008B5EC  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008E6B0 0008B5F0  EC 67 19 3C */	fnmsubs f3, f7, f4, f3
/* 8008E6B4 0008B5F4  EC E5 00 F2 */	fmuls f7, f5, f3
.L_8008E6B8:
/* 8008E6B8 0008B5F8  EC 00 01 F2 */	fmuls f0, f0, f7
/* 8008E6BC 0008B5FC  EC 21 01 F2 */	fmuls f1, f1, f7
/* 8008E6C0 0008B600  EC 42 01 F2 */	fmuls f2, f2, f7
.L_8008E6C4:
/* 8008E6C4 0008B604  C0 E1 00 10 */	lfs f7, 0x10(r1)
/* 8008E6C8 0008B608  C0 C1 00 08 */	lfs f6, 8(r1)
/* 8008E6CC 0008B60C  EC 67 00 72 */	fmuls f3, f7, f1
/* 8008E6D0 0008B610  C1 01 00 0C */	lfs f8, 0xc(r1)
/* 8008E6D4 0008B614  EC 86 00 B2 */	fmuls f4, f6, f2
/* 8008E6D8 0008B618  EC A8 00 32 */	fmuls f5, f8, f0
/* 8008E6DC 0008B61C  EC 68 18 B8 */	fmsubs f3, f8, f2, f3
/* 8008E6E0 0008B620  EC 87 20 38 */	fmsubs f4, f7, f0, f4
/* 8008E6E4 0008B624  EC A6 28 78 */	fmsubs f5, f6, f1, f5
/* 8008E6E8 0008B628  D0 76 00 54 */	stfs f3, 0x54(r22)
/* 8008E6EC 0008B62C  D0 96 00 58 */	stfs f4, 0x58(r22)
/* 8008E6F0 0008B630  D0 B6 00 5C */	stfs f5, 0x5c(r22)
/* 8008E6F4 0008B634  C0 96 00 54 */	lfs f4, 0x54(r22)
/* 8008E6F8 0008B638  C0 76 00 58 */	lfs f3, 0x58(r22)
/* 8008E6FC 0008B63C  EC A4 01 32 */	fmuls f5, f4, f4
/* 8008E700 0008B640  C0 D6 00 5C */	lfs f6, 0x5c(r22)
/* 8008E704 0008B644  EC 83 00 F2 */	fmuls f4, f3, f3
/* 8008E708 0008B648  C0 7E 00 00 */	lfs f3, 0(r30)
/* 8008E70C 0008B64C  EC C6 01 B2 */	fmuls f6, f6, f6
/* 8008E710 0008B650  EC 77 00 F2 */	fmuls f3, f23, f3
/* 8008E714 0008B654  EC 85 20 2A */	fadds f4, f5, f4
/* 8008E718 0008B658  EC E6 20 2A */	fadds f7, f6, f4
/* 8008E71C 0008B65C  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008E720 0008B660  4C 40 13 82 */	cror 2, 0, 2
/* 8008E724 0008B664  41 82 00 5C */	beq .L_8008E780
/* 8008E728 0008B668  C0 62 87 F0 */	lfs f3, lbl_80516B50@sda21(r2)
/* 8008E72C 0008B66C  FC 07 18 40 */	fcmpo cr0, f7, f3
/* 8008E730 0008B670  4C 40 13 82 */	cror 2, 0, 2
/* 8008E734 0008B674  40 82 00 08 */	bne .L_8008E73C
/* 8008E738 0008B678  48 00 00 24 */	b .L_8008E75C
.L_8008E73C:
/* 8008E73C 0008B67C  FC C0 38 34 */	frsqrte f6, f7
/* 8008E740 0008B680  C0 A2 87 E8 */	lfs f5, lbl_80516B48@sda21(r2)
/* 8008E744 0008B684  C0 62 88 0C */	lfs f3, lbl_80516B6C@sda21(r2)
/* 8008E748 0008B688  FC C0 30 18 */	frsp f6, f6
/* 8008E74C 0008B68C  EC 86 01 B2 */	fmuls f4, f6, f6
/* 8008E750 0008B690  EC A5 01 B2 */	fmuls f5, f5, f6
/* 8008E754 0008B694  EC 67 19 3C */	fnmsubs f3, f7, f4, f3
/* 8008E758 0008B698  EC E5 00 F2 */	fmuls f7, f5, f3
.L_8008E75C:
/* 8008E75C 0008B69C  C0 76 00 54 */	lfs f3, 0x54(r22)
/* 8008E760 0008B6A0  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008E764 0008B6A4  D0 76 00 54 */	stfs f3, 0x54(r22)
/* 8008E768 0008B6A8  C0 76 00 58 */	lfs f3, 0x58(r22)
/* 8008E76C 0008B6AC  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008E770 0008B6B0  D0 76 00 58 */	stfs f3, 0x58(r22)
/* 8008E774 0008B6B4  C0 76 00 5C */	lfs f3, 0x5c(r22)
/* 8008E778 0008B6B8  EC 63 01 F2 */	fmuls f3, f3, f7
/* 8008E77C 0008B6BC  D0 76 00 5C */	stfs f3, 0x5c(r22)
.L_8008E780:
/* 8008E780 0008B6C0  C0 81 00 08 */	lfs f4, 8(r1)
/* 8008E784 0008B6C4  38 81 00 14 */	addi r4, r1, 0x14
/* 8008E788 0008B6C8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 8008E78C 0008B6CC  7C 85 23 78 */	mr r5, r4
/* 8008E790 0008B6D0  C0 61 00 0C */	lfs f3, 0xc(r1)
/* 8008E794 0008B6D4  38 61 00 2C */	addi r3, r1, 0x2c
/* 8008E798 0008B6D8  D0 81 00 30 */	stfs f4, 0x30(r1)
/* 8008E79C 0008B6DC  38 C0 00 02 */	li r6, 2
/* 8008E7A0 0008B6E0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8008E7A4 0008B6E4  C0 96 00 54 */	lfs f4, 0x54(r22)
/* 8008E7A8 0008B6E8  D0 81 00 34 */	stfs f4, 0x34(r1)
/* 8008E7AC 0008B6EC  D3 01 00 38 */	stfs f24, 0x38(r1)
/* 8008E7B0 0008B6F0  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 8008E7B4 0008B6F4  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 8008E7B8 0008B6F8  C0 36 00 58 */	lfs f1, 0x58(r22)
/* 8008E7BC 0008B6FC  D0 21 00 44 */	stfs f1, 0x44(r1)
/* 8008E7C0 0008B700  D3 01 00 48 */	stfs f24, 0x48(r1)
/* 8008E7C4 0008B704  D0 41 00 4C */	stfs f2, 0x4c(r1)
/* 8008E7C8 0008B708  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 8008E7CC 0008B70C  C0 16 00 5C */	lfs f0, 0x5c(r22)
/* 8008E7D0 0008B710  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 8008E7D4 0008B714  D3 01 00 58 */	stfs f24, 0x58(r1)
/* 8008E7D8 0008B718  48 05 C4 A9 */	bl PSMTXMultVecArraySR
/* 8008E7DC 0008B71C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 8008E7E0 0008B720  7F 8C E3 78 */	mr r12, r28
/* 8008E7E4 0008B724  7E E3 BB 78 */	mr r3, r23
/* 8008E7E8 0008B728  EC 00 D0 2A */	fadds f0, f0, f26
/* 8008E7EC 0008B72C  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008E7F0 0008B730  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 8008E7F4 0008B734  EC 00 D8 2A */	fadds f0, f0, f27
/* 8008E7F8 0008B738  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008E7FC 0008B73C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 8008E800 0008B740  EC 00 E0 2A */	fadds f0, f0, f28
/* 8008E804 0008B744  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008E808 0008B748  D3 1D 80 00 */	stfs f24, 0xCC008000@l(r29)
/* 8008E80C 0008B74C  D3 3D 80 00 */	stfs f25, 0xCC008000@l(r29)
/* 8008E810 0008B750  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 8008E814 0008B754  EC 00 D0 2A */	fadds f0, f0, f26
/* 8008E818 0008B758  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008E81C 0008B75C  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 8008E820 0008B760  EC 00 D8 2A */	fadds f0, f0, f27
/* 8008E824 0008B764  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008E828 0008B768  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 8008E82C 0008B76C  EC 00 E0 2A */	fadds f0, f0, f28
/* 8008E830 0008B770  D0 1D 80 00 */	stfs f0, 0xCC008000@l(r29)
/* 8008E834 0008B774  D2 DD 80 00 */	stfs f22, 0xCC008000@l(r29)
/* 8008E838 0008B778  D3 3D 80 00 */	stfs f25, 0xCC008000@l(r29)
/* 8008E83C 0008B77C  7D 89 03 A6 */	mtctr r12
/* 8008E840 0008B780  4E 80 04 21 */	bctrl 
/* 8008E844 0008B784  EF 39 F8 2A */	fadds f25, f25, f31
/* 8008E848 0008B788  7C 77 1B 78 */	mr r23, r3
.L_8008E84C:
/* 8008E84C 0008B78C  28 17 00 00 */	cmplwi r23, 0
/* 8008E850 0008B790  40 82 FC 7C */	bne .L_8008E4CC
/* 8008E854 0008B794  38 60 00 09 */	li r3, 9
/* 8008E858 0008B798  38 80 00 02 */	li r4, 2
/* 8008E85C 0008B79C  48 05 5A 29 */	bl GXSetVtxDesc
/* 8008E860 0008B7A0  38 60 00 0D */	li r3, 0xd
/* 8008E864 0008B7A4  38 80 00 02 */	li r4, 2
/* 8008E868 0008B7A8  48 05 5A 1D */	bl GXSetVtxDesc
.L_8008E86C:
/* 8008E86C 0008B7AC  E3 E1 01 58 */	psq_l f31, 344(r1), 0, qr0
/* 8008E870 0008B7B0  CB E1 01 50 */	lfd f31, 0x150(r1)
/* 8008E874 0008B7B4  E3 C1 01 48 */	psq_l f30, 328(r1), 0, qr0
/* 8008E878 0008B7B8  CB C1 01 40 */	lfd f30, 0x140(r1)
/* 8008E87C 0008B7BC  E3 A1 01 38 */	psq_l f29, 312(r1), 0, qr0
/* 8008E880 0008B7C0  CB A1 01 30 */	lfd f29, 0x130(r1)
/* 8008E884 0008B7C4  E3 81 01 28 */	psq_l f28, 296(r1), 0, qr0
/* 8008E888 0008B7C8  CB 81 01 20 */	lfd f28, 0x120(r1)
/* 8008E88C 0008B7CC  E3 61 01 18 */	psq_l f27, 280(r1), 0, qr0
/* 8008E890 0008B7D0  CB 61 01 10 */	lfd f27, 0x110(r1)
/* 8008E894 0008B7D4  E3 41 01 08 */	psq_l f26, 264(r1), 0, qr0
/* 8008E898 0008B7D8  CB 41 01 00 */	lfd f26, 0x100(r1)
/* 8008E89C 0008B7DC  E3 21 00 F8 */	psq_l f25, 248(r1), 0, qr0
/* 8008E8A0 0008B7E0  CB 21 00 F0 */	lfd f25, 0xf0(r1)
/* 8008E8A4 0008B7E4  E3 01 00 E8 */	psq_l f24, 232(r1), 0, qr0
/* 8008E8A8 0008B7E8  CB 01 00 E0 */	lfd f24, 0xe0(r1)
/* 8008E8AC 0008B7EC  E2 E1 00 D8 */	psq_l f23, 216(r1), 0, qr0
/* 8008E8B0 0008B7F0  CA E1 00 D0 */	lfd f23, 0xd0(r1)
/* 8008E8B4 0008B7F4  E2 C1 00 C8 */	psq_l f22, 200(r1), 0, qr0
/* 8008E8B8 0008B7F8  CA C1 00 C0 */	lfd f22, 0xc0(r1)
/* 8008E8BC 0008B7FC  E2 A1 00 B8 */	psq_l f21, 184(r1), 0, qr0
/* 8008E8C0 0008B800  CA A1 00 B0 */	lfd f21, 0xb0(r1)
/* 8008E8C4 0008B804  E2 81 00 A8 */	psq_l f20, 168(r1), 0, qr0
/* 8008E8C8 0008B808  CA 81 00 A0 */	lfd f20, 0xa0(r1)
/* 8008E8CC 0008B80C  E2 61 00 98 */	psq_l f19, 152(r1), 0, qr0
/* 8008E8D0 0008B810  CA 61 00 90 */	lfd f19, 0x90(r1)
/* 8008E8D4 0008B814  BA C1 00 68 */	lmw r22, 0x68(r1)
/* 8008E8D8 0008B818  80 01 01 64 */	lwz r0, 0x164(r1)
/* 8008E8DC 0008B81C  7C 08 03 A6 */	mtlr r0
/* 8008E8E0 0008B820  38 21 01 60 */	addi r1, r1, 0x160
/* 8008E8E4 0008B824  4E 80 00 20 */	blr 
.endfn JPADrawStripeX__FP18JPAEmitterWorkData

.fn JPADrawEmitterCallBackB__FP18JPAEmitterWorkData, global
/* 8008E8E8 0008B828  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008E8EC 0008B82C  7C 08 02 A6 */	mflr r0
/* 8008E8F0 0008B830  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008E8F4 0008B834  80 83 00 00 */	lwz r4, 0(r3)
/* 8008E8F8 0008B838  80 64 00 EC */	lwz r3, 0xec(r4)
/* 8008E8FC 0008B83C  28 03 00 00 */	cmplwi r3, 0
/* 8008E900 0008B840  41 82 00 14 */	beq .L_8008E914
/* 8008E904 0008B844  81 83 00 00 */	lwz r12, 0(r3)
/* 8008E908 0008B848  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 8008E90C 0008B84C  7D 89 03 A6 */	mtctr r12
/* 8008E910 0008B850  4E 80 04 21 */	bctrl 
.L_8008E914:
/* 8008E914 0008B854  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008E918 0008B858  7C 08 03 A6 */	mtlr r0
/* 8008E91C 0008B85C  38 21 00 10 */	addi r1, r1, 0x10
/* 8008E920 0008B860  4E 80 00 20 */	blr 
.endfn JPADrawEmitterCallBackB__FP18JPAEmitterWorkData

.fn JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle, global
/* 8008E924 0008B864  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8008E928 0008B868  7C 08 02 A6 */	mflr r0
/* 8008E92C 0008B86C  7C 85 23 78 */	mr r5, r4
/* 8008E930 0008B870  90 01 00 14 */	stw r0, 0x14(r1)
/* 8008E934 0008B874  80 C3 00 00 */	lwz r6, 0(r3)
/* 8008E938 0008B878  80 66 00 F0 */	lwz r3, 0xf0(r6)
/* 8008E93C 0008B87C  28 03 00 00 */	cmplwi r3, 0
/* 8008E940 0008B880  41 82 00 18 */	beq .L_8008E958
/* 8008E944 0008B884  81 83 00 00 */	lwz r12, 0(r3)
/* 8008E948 0008B888  7C C4 33 78 */	mr r4, r6
/* 8008E94C 0008B88C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 8008E950 0008B890  7D 89 03 A6 */	mtctr r12
/* 8008E954 0008B894  4E 80 04 21 */	bctrl 
.L_8008E958:
/* 8008E958 0008B898  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8008E95C 0008B89C  7C 08 03 A6 */	mtlr r0
/* 8008E960 0008B8A0  38 21 00 10 */	addi r1, r1, 0x10
/* 8008E964 0008B8A4  4E 80 00 20 */	blr 
.endfn JPADrawParticleCallBack__FP18JPAEmitterWorkDataP15JPABaseParticle

.fn draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle, weak
/* 8008E968 0008B8A8  4E 80 00 20 */	blr 
.endfn draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle

.fn makeColorTable__FPP8_GXColorPC16JPAClrAnmKeyDataUcsP7JKRHeap, local
/* 8008E96C 0008B8AC  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8008E970 0008B8B0  7C 08 02 A6 */	mflr r0
/* 8008E974 0008B8B4  7C C6 07 34 */	extsh r6, r6
/* 8008E978 0008B8B8  90 01 00 44 */	stw r0, 0x44(r1)
/* 8008E97C 0008B8BC  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8008E980 0008B8C0  3B E6 00 01 */	addi r31, r6, 1
/* 8008E984 0008B8C4  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8008E988 0008B8C8  7C 7E 1B 78 */	mr r30, r3
/* 8008E98C 0008B8CC  57 E3 10 3A */	slwi r3, r31, 2
/* 8008E990 0008B8D0  93 A1 00 34 */	stw r29, 0x34(r1)
/* 8008E994 0008B8D4  7C BD 2B 78 */	mr r29, r5
/* 8008E998 0008B8D8  7C E5 3B 78 */	mr r5, r7
/* 8008E99C 0008B8DC  93 81 00 30 */	stw r28, 0x30(r1)
/* 8008E9A0 0008B8E0  7C 9C 23 78 */	mr r28, r4
/* 8008E9A4 0008B8E4  38 80 00 04 */	li r4, 4
/* 8008E9A8 0008B8E8  4B F9 4C 39 */	bl alloc__7JKRHeapFUliP7JKRHeap
/* 8008E9AC 0008B8EC  88 FC 00 03 */	lbz r7, 3(r28)
/* 8008E9B0 0008B8F0  3D 40 43 30 */	lis r10, 0x4330
/* 8008E9B4 0008B8F4  C0 C2 87 F0 */	lfs f6, lbl_80516B50@sda21(r2)
/* 8008E9B8 0008B8F8  7F 84 E3 78 */	mr r4, r28
/* 8008E9BC 0008B8FC  89 3C 00 04 */	lbz r9, 4(r28)
/* 8008E9C0 0008B900  7C 65 1B 78 */	mr r5, r3
/* 8008E9C4 0008B904  90 E1 00 14 */	stw r7, 0x14(r1)
/* 8008E9C8 0008B908  FC A0 30 90 */	fmr f5, f6
/* 8008E9CC 0008B90C  88 1C 00 02 */	lbz r0, 2(r28)
/* 8008E9D0 0008B910  FC 60 30 90 */	fmr f3, f6
/* 8008E9D4 0008B914  91 41 00 10 */	stw r10, 0x10(r1)
/* 8008E9D8 0008B918  FC 80 30 90 */	fmr f4, f6
/* 8008E9DC 0008B91C  89 1C 00 05 */	lbz r8, 5(r28)
/* 8008E9E0 0008B920  90 01 00 0C */	stw r0, 0xc(r1)
/* 8008E9E4 0008B924  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 8008E9E8 0008B928  C8 42 87 F8 */	lfd f2, lbl_80516B58@sda21(r2)
/* 8008E9EC 0008B92C  38 C0 00 00 */	li r6, 0
/* 8008E9F0 0008B930  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8008E9F4 0008B934  38 E0 00 00 */	li r7, 0
/* 8008E9F8 0008B938  91 41 00 08 */	stw r10, 8(r1)
/* 8008E9FC 0008B93C  EC E1 10 28 */	fsubs f7, f1, f2
/* 8008EA00 0008B940  C8 01 00 08 */	lfd f0, 8(r1)
/* 8008EA04 0008B944  91 21 00 1C */	stw r9, 0x1c(r1)
/* 8008EA08 0008B948  EC 00 10 28 */	fsubs f0, f0, f2
/* 8008EA0C 0008B94C  91 41 00 18 */	stw r10, 0x18(r1)
/* 8008EA10 0008B950  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8008EA14 0008B954  91 01 00 24 */	stw r8, 0x24(r1)
/* 8008EA18 0008B958  ED 01 10 28 */	fsubs f8, f1, f2
/* 8008EA1C 0008B95C  91 41 00 20 */	stw r10, 0x20(r1)
/* 8008EA20 0008B960  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 8008EA24 0008B964  ED 21 10 28 */	fsubs f9, f1, f2
/* 8008EA28 0008B968  48 00 01 98 */	b .L_8008EBC0
.L_8008EA2C:
/* 8008EA2C 0008B96C  A9 04 00 00 */	lha r8, 0(r4)
/* 8008EA30 0008B970  7C E9 07 34 */	extsh r9, r7
/* 8008EA34 0008B974  7C 09 40 00 */	cmpw r9, r8
/* 8008EA38 0008B978  40 82 01 30 */	bne .L_8008EB68
/* 8008EA3C 0008B97C  89 44 00 03 */	lbz r10, 3(r4)
/* 8008EA40 0008B980  3D 80 43 30 */	lis r12, 0x4330
/* 8008EA44 0008B984  89 64 00 02 */	lbz r11, 2(r4)
/* 8008EA48 0008B988  38 C6 00 01 */	addi r6, r6, 1
/* 8008EA4C 0008B98C  89 24 00 04 */	lbz r9, 4(r4)
/* 8008EA50 0008B990  7C 06 00 00 */	cmpw r6, r0
/* 8008EA54 0008B994  91 41 00 1C */	stw r10, 0x1c(r1)
/* 8008EA58 0008B998  89 04 00 05 */	lbz r8, 5(r4)
/* 8008EA5C 0008B99C  38 84 00 06 */	addi r4, r4, 6
/* 8008EA60 0008B9A0  91 81 00 18 */	stw r12, 0x18(r1)
/* 8008EA64 0008B9A4  C8 A2 87 F8 */	lfd f5, lbl_80516B58@sda21(r2)
/* 8008EA68 0008B9A8  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 8008EA6C 0008B9AC  99 65 00 00 */	stb r11, 0(r5)
/* 8008EA70 0008B9B0  EC E1 28 28 */	fsubs f7, f1, f5
/* 8008EA74 0008B9B4  99 45 00 01 */	stb r10, 1(r5)
/* 8008EA78 0008B9B8  99 25 00 02 */	stb r9, 2(r5)
/* 8008EA7C 0008B9BC  91 21 00 14 */	stw r9, 0x14(r1)
/* 8008EA80 0008B9C0  91 81 00 10 */	stw r12, 0x10(r1)
/* 8008EA84 0008B9C4  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8008EA88 0008B9C8  91 61 00 24 */	stw r11, 0x24(r1)
/* 8008EA8C 0008B9CC  ED 01 28 28 */	fsubs f8, f1, f5
/* 8008EA90 0008B9D0  91 81 00 20 */	stw r12, 0x20(r1)
/* 8008EA94 0008B9D4  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8008EA98 0008B9D8  91 01 00 0C */	stw r8, 0xc(r1)
/* 8008EA9C 0008B9DC  EC 00 28 28 */	fsubs f0, f0, f5
/* 8008EAA0 0008B9E0  91 81 00 08 */	stw r12, 8(r1)
/* 8008EAA4 0008B9E4  C8 21 00 08 */	lfd f1, 8(r1)
/* 8008EAA8 0008B9E8  99 05 00 03 */	stb r8, 3(r5)
/* 8008EAAC 0008B9EC  ED 21 28 28 */	fsubs f9, f1, f5
/* 8008EAB0 0008B9F0  40 80 00 A4 */	bge .L_8008EB54
/* 8008EAB4 0008B9F4  A9 24 FF FA */	lha r9, -6(r4)
/* 8008EAB8 0008B9F8  A9 04 00 00 */	lha r8, 0(r4)
/* 8008EABC 0008B9FC  89 64 00 02 */	lbz r11, 2(r4)
/* 8008EAC0 0008BA00  7D 09 40 50 */	subf r8, r9, r8
/* 8008EAC4 0008BA04  89 44 00 03 */	lbz r10, 3(r4)
/* 8008EAC8 0008BA08  6D 08 80 00 */	xoris r8, r8, 0x8000
/* 8008EACC 0008BA0C  91 81 00 20 */	stw r12, 0x20(r1)
/* 8008EAD0 0008BA10  89 24 00 04 */	lbz r9, 4(r4)
/* 8008EAD4 0008BA14  91 01 00 24 */	stw r8, 0x24(r1)
/* 8008EAD8 0008BA18  C8 42 87 E0 */	lfd f2, lbl_80516B40@sda21(r2)
/* 8008EADC 0008BA1C  C8 21 00 20 */	lfd f1, 0x20(r1)
/* 8008EAE0 0008BA20  C0 62 87 EC */	lfs f3, lbl_80516B4C@sda21(r2)
/* 8008EAE4 0008BA24  EC 21 10 28 */	fsubs f1, f1, f2
/* 8008EAE8 0008BA28  89 04 00 05 */	lbz r8, 5(r4)
/* 8008EAEC 0008BA2C  91 61 00 1C */	stw r11, 0x1c(r1)
/* 8008EAF0 0008BA30  EC C3 08 24 */	fdivs f6, f3, f1
/* 8008EAF4 0008BA34  91 81 00 18 */	stw r12, 0x18(r1)
/* 8008EAF8 0008BA38  C8 41 00 18 */	lfd f2, 0x18(r1)
/* 8008EAFC 0008BA3C  91 41 00 14 */	stw r10, 0x14(r1)
/* 8008EB00 0008BA40  91 81 00 10 */	stw r12, 0x10(r1)
/* 8008EB04 0008BA44  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8008EB08 0008BA48  EC 62 28 28 */	fsubs f3, f2, f5
/* 8008EB0C 0008BA4C  91 21 00 0C */	stw r9, 0xc(r1)
/* 8008EB10 0008BA50  EC 41 28 28 */	fsubs f2, f1, f5
/* 8008EB14 0008BA54  91 81 00 08 */	stw r12, 8(r1)
/* 8008EB18 0008BA58  EC 83 00 28 */	fsubs f4, f3, f0
/* 8008EB1C 0008BA5C  C8 21 00 08 */	lfd f1, 8(r1)
/* 8008EB20 0008BA60  EC 62 38 28 */	fsubs f3, f2, f7
/* 8008EB24 0008BA64  91 01 00 2C */	stw r8, 0x2c(r1)
/* 8008EB28 0008BA68  EC 41 28 28 */	fsubs f2, f1, f5
/* 8008EB2C 0008BA6C  91 81 00 28 */	stw r12, 0x28(r1)
/* 8008EB30 0008BA70  EC 86 01 32 */	fmuls f4, f6, f4
/* 8008EB34 0008BA74  EC 66 00 F2 */	fmuls f3, f6, f3
/* 8008EB38 0008BA78  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 8008EB3C 0008BA7C  EC 42 40 28 */	fsubs f2, f2, f8
/* 8008EB40 0008BA80  EC 21 28 28 */	fsubs f1, f1, f5
/* 8008EB44 0008BA84  EC A6 00 B2 */	fmuls f5, f6, f2
/* 8008EB48 0008BA88  EC 21 48 28 */	fsubs f1, f1, f9
/* 8008EB4C 0008BA8C  EC C6 00 72 */	fmuls f6, f6, f1
/* 8008EB50 0008BA90  48 00 00 68 */	b .L_8008EBB8
.L_8008EB54:
/* 8008EB54 0008BA94  C0 C2 87 F0 */	lfs f6, lbl_80516B50@sda21(r2)
/* 8008EB58 0008BA98  FC A0 30 90 */	fmr f5, f6
/* 8008EB5C 0008BA9C  FC 60 30 90 */	fmr f3, f6
/* 8008EB60 0008BAA0  FC 80 30 90 */	fmr f4, f6
/* 8008EB64 0008BAA4  48 00 00 54 */	b .L_8008EBB8
.L_8008EB68:
/* 8008EB68 0008BAA8  EC 00 20 2A */	fadds f0, f0, f4
/* 8008EB6C 0008BAAC  EC E7 18 2A */	fadds f7, f7, f3
/* 8008EB70 0008BAB0  ED 08 28 2A */	fadds f8, f8, f5
/* 8008EB74 0008BAB4  FC 40 00 1E */	fctiwz f2, f0
/* 8008EB78 0008BAB8  FC 20 38 1E */	fctiwz f1, f7
/* 8008EB7C 0008BABC  ED 29 30 2A */	fadds f9, f9, f6
/* 8008EB80 0008BAC0  D8 41 00 28 */	stfd f2, 0x28(r1)
/* 8008EB84 0008BAC4  FC 40 40 1E */	fctiwz f2, f8
/* 8008EB88 0008BAC8  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 8008EB8C 0008BACC  FC 20 48 1E */	fctiwz f1, f9
/* 8008EB90 0008BAD0  81 01 00 2C */	lwz r8, 0x2c(r1)
/* 8008EB94 0008BAD4  D8 41 00 18 */	stfd f2, 0x18(r1)
/* 8008EB98 0008BAD8  81 21 00 24 */	lwz r9, 0x24(r1)
/* 8008EB9C 0008BADC  99 05 00 00 */	stb r8, 0(r5)
/* 8008EBA0 0008BAE0  81 01 00 1C */	lwz r8, 0x1c(r1)
/* 8008EBA4 0008BAE4  99 25 00 01 */	stb r9, 1(r5)
/* 8008EBA8 0008BAE8  D8 21 00 10 */	stfd f1, 0x10(r1)
/* 8008EBAC 0008BAEC  99 05 00 02 */	stb r8, 2(r5)
/* 8008EBB0 0008BAF0  81 01 00 14 */	lwz r8, 0x14(r1)
/* 8008EBB4 0008BAF4  99 05 00 03 */	stb r8, 3(r5)
.L_8008EBB8:
/* 8008EBB8 0008BAF8  38 A5 00 04 */	addi r5, r5, 4
/* 8008EBBC 0008BAFC  38 E7 00 01 */	addi r7, r7, 1
.L_8008EBC0:
/* 8008EBC0 0008BB00  7C E8 07 34 */	extsh r8, r7
/* 8008EBC4 0008BB04  7C 08 F8 00 */	cmpw r8, r31
/* 8008EBC8 0008BB08  41 80 FE 64 */	blt .L_8008EA2C
/* 8008EBCC 0008BB0C  90 7E 00 00 */	stw r3, 0(r30)
/* 8008EBD0 0008BB10  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8008EBD4 0008BB14  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 8008EBD8 0008BB18  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 8008EBDC 0008BB1C  83 A1 00 34 */	lwz r29, 0x34(r1)
/* 8008EBE0 0008BB20  83 81 00 30 */	lwz r28, 0x30(r1)
/* 8008EBE4 0008BB24  7C 08 03 A6 */	mtlr r0
/* 8008EBE8 0008BB28  38 21 00 40 */	addi r1, r1, 0x40
/* 8008EBEC 0008BB2C  4E 80 00 20 */	blr 
.endfn makeColorTable__FPP8_GXColorPC16JPAClrAnmKeyDataUcsP7JKRHeap

.fn __ct__12JPABaseShapeFPCUcP7JKRHeap, global
/* 8008EBF0 0008BB30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8008EBF4 0008BB34  7C 08 02 A6 */	mflr r0
/* 8008EBF8 0008BB38  90 01 00 24 */	stw r0, 0x24(r1)
/* 8008EBFC 0008BB3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8008EC00 0008BB40  7C BF 2B 78 */	mr r31, r5
/* 8008EC04 0008BB44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8008EC08 0008BB48  7C 9E 23 78 */	mr r30, r4
/* 8008EC0C 0008BB4C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8008EC10 0008BB50  7C 7D 1B 78 */	mr r29, r3
/* 8008EC14 0008BB54  93 C3 00 00 */	stw r30, 0(r3)
/* 8008EC18 0008BB58  80 63 00 00 */	lwz r3, 0(r3)
/* 8008EC1C 0008BB5C  80 03 00 08 */	lwz r0, 8(r3)
/* 8008EC20 0008BB60  54 00 01 CF */	rlwinm. r0, r0, 0, 7, 7
/* 8008EC24 0008BB64  41 82 00 10 */	beq .L_8008EC34
/* 8008EC28 0008BB68  38 1E 00 34 */	addi r0, r30, 0x34
/* 8008EC2C 0008BB6C  90 1D 00 04 */	stw r0, 4(r29)
/* 8008EC30 0008BB70  48 00 00 0C */	b .L_8008EC3C
.L_8008EC34:
/* 8008EC34 0008BB74  38 00 00 00 */	li r0, 0
/* 8008EC38 0008BB78  90 1D 00 04 */	stw r0, 4(r29)
.L_8008EC3C:
/* 8008EC3C 0008BB7C  80 7D 00 00 */	lwz r3, 0(r29)
/* 8008EC40 0008BB80  88 03 00 1E */	lbz r0, 0x1e(r3)
/* 8008EC44 0008BB84  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8008EC48 0008BB88  41 82 00 24 */	beq .L_8008EC6C
/* 8008EC4C 0008BB8C  80 03 00 08 */	lwz r0, 8(r3)
/* 8008EC50 0008BB90  38 60 00 34 */	li r3, 0x34
/* 8008EC54 0008BB94  54 00 01 CF */	rlwinm. r0, r0, 0, 7, 7
/* 8008EC58 0008BB98  41 82 00 08 */	beq .L_8008EC60
/* 8008EC5C 0008BB9C  38 60 00 5C */	li r3, 0x5c
.L_8008EC60:
/* 8008EC60 0008BBA0  7C 1E 1A 14 */	add r0, r30, r3
/* 8008EC64 0008BBA4  90 1D 00 08 */	stw r0, 8(r29)
/* 8008EC68 0008BBA8  48 00 00 0C */	b .L_8008EC74
.L_8008EC6C:
/* 8008EC6C 0008BBAC  38 00 00 00 */	li r0, 0
/* 8008EC70 0008BBB0  90 1D 00 08 */	stw r0, 8(r29)
.L_8008EC74:
/* 8008EC74 0008BBB4  80 9D 00 00 */	lwz r4, 0(r29)
/* 8008EC78 0008BBB8  88 04 00 21 */	lbz r0, 0x21(r4)
/* 8008EC7C 0008BBBC  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8008EC80 0008BBC0  41 82 00 24 */	beq .L_8008ECA4
/* 8008EC84 0008BBC4  A8 04 00 0C */	lha r0, 0xc(r4)
/* 8008EC88 0008BBC8  7F E7 FB 78 */	mr r7, r31
/* 8008EC8C 0008BBCC  88 A4 00 22 */	lbz r5, 0x22(r4)
/* 8008EC90 0008BBD0  38 7D 00 0C */	addi r3, r29, 0xc
/* 8008EC94 0008BBD4  A8 C4 00 24 */	lha r6, 0x24(r4)
/* 8008EC98 0008BBD8  7C 9E 02 14 */	add r4, r30, r0
/* 8008EC9C 0008BBDC  4B FF FC D1 */	bl makeColorTable__FPP8_GXColorPC16JPAClrAnmKeyDataUcsP7JKRHeap
/* 8008ECA0 0008BBE0  48 00 00 0C */	b .L_8008ECAC
.L_8008ECA4:
/* 8008ECA4 0008BBE4  38 00 00 00 */	li r0, 0
/* 8008ECA8 0008BBE8  90 1D 00 0C */	stw r0, 0xc(r29)
.L_8008ECAC:
/* 8008ECAC 0008BBEC  80 9D 00 00 */	lwz r4, 0(r29)
/* 8008ECB0 0008BBF0  88 04 00 21 */	lbz r0, 0x21(r4)
/* 8008ECB4 0008BBF4  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 8008ECB8 0008BBF8  41 82 00 24 */	beq .L_8008ECDC
/* 8008ECBC 0008BBFC  A8 04 00 0E */	lha r0, 0xe(r4)
/* 8008ECC0 0008BC00  7F E7 FB 78 */	mr r7, r31
/* 8008ECC4 0008BC04  88 A4 00 23 */	lbz r5, 0x23(r4)
/* 8008ECC8 0008BC08  38 7D 00 10 */	addi r3, r29, 0x10
/* 8008ECCC 0008BC0C  A8 C4 00 24 */	lha r6, 0x24(r4)
/* 8008ECD0 0008BC10  7C 9E 02 14 */	add r4, r30, r0
/* 8008ECD4 0008BC14  4B FF FC 99 */	bl makeColorTable__FPP8_GXColorPC16JPAClrAnmKeyDataUcsP7JKRHeap
/* 8008ECD8 0008BC18  48 00 00 0C */	b .L_8008ECE4
.L_8008ECDC:
/* 8008ECDC 0008BC1C  38 00 00 00 */	li r0, 0
/* 8008ECE0 0008BC20  90 1D 00 10 */	stw r0, 0x10(r29)
.L_8008ECE4:
/* 8008ECE4 0008BC24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8008ECE8 0008BC28  7F A3 EB 78 */	mr r3, r29
/* 8008ECEC 0008BC2C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8008ECF0 0008BC30  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8008ECF4 0008BC34  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8008ECF8 0008BC38  7C 08 03 A6 */	mtlr r0
/* 8008ECFC 0008BC3C  38 21 00 20 */	addi r1, r1, 0x20
/* 8008ED00 0008BC40  4E 80 00 20 */	blr 
.endfn __ct__12JPABaseShapeFPCUcP7JKRHeap

.fn setGX__12JPABaseShapeCFP18JPAEmitterWorkData, global
/* 8008ED04 0008BC44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8008ED08 0008BC48  7C 08 02 A6 */	mflr r0
/* 8008ED0C 0008BC4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8008ED10 0008BC50  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8008ED14 0008BC54  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8008ED18 0008BC58  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8008ED1C 0008BC5C  93 81 00 10 */	stw r28, 0x10(r1)
/* 8008ED20 0008BC60  7C 7C 1B 78 */	mr r28, r3
/* 8008ED24 0008BC64  80 9C 00 00 */	lwz r4, 0(r28)
/* 8008ED28 0008BC68  3C 60 80 4A */	lis r3, jpa_dl@ha
/* 8008ED2C 0008BC6C  3B E3 30 A0 */	addi r31, r3, jpa_dl@l
/* 8008ED30 0008BC70  A0 04 00 18 */	lhz r0, 0x18(r4)
/* 8008ED34 0008BC74  38 7F 00 80 */	addi r3, r31, 0x80
/* 8008ED38 0008BC78  81 24 00 08 */	lwz r9, 8(r4)
/* 8008ED3C 0008BC7C  38 FF 00 8C */	addi r7, r31, 0x8c
/* 8008ED40 0008BC80  54 08 17 3A */	rlwinm r8, r0, 2, 0x1c, 0x1d
/* 8008ED44 0008BC84  54 04 06 BA */	rlwinm r4, r0, 0, 0x1a, 0x1d
/* 8008ED48 0008BC88  54 05 E6 BA */	rlwinm r5, r0, 0x1c, 0x1a, 0x1d
/* 8008ED4C 0008BC8C  55 2A AE 76 */	rlwinm r10, r9, 0x15, 0x19, 0x1b
/* 8008ED50 0008BC90  3B DF 01 24 */	addi r30, r31, 0x124
/* 8008ED54 0008BC94  38 DF 00 B4 */	addi r6, r31, 0xb4
/* 8008ED58 0008BC98  54 00 C6 BA */	rlwinm r0, r0, 0x18, 0x1a, 0x1d
/* 8008ED5C 0008BC9C  55 29 96 F6 */	rlwinm r9, r9, 0x12, 0x1b, 0x1b
/* 8008ED60 0008BCA0  3B BF 01 84 */	addi r29, r31, 0x184
/* 8008ED64 0008BCA4  7C 63 40 2E */	lwzx r3, r3, r8
/* 8008ED68 0008BCA8  7C 87 20 2E */	lwzx r4, r7, r4
/* 8008ED6C 0008BCAC  7F DE 52 14 */	add r30, r30, r10
/* 8008ED70 0008BCB0  7C A7 28 2E */	lwzx r5, r7, r5
/* 8008ED74 0008BCB4  7F BD 4A 14 */	add r29, r29, r9
/* 8008ED78 0008BCB8  7C C6 00 2E */	lwzx r6, r6, r0
/* 8008ED7C 0008BCBC  48 05 A3 5D */	bl GXSetBlendMode
/* 8008ED80 0008BCC0  80 7C 00 00 */	lwz r3, 0(r28)
/* 8008ED84 0008BCC4  38 9F 00 F4 */	addi r4, r31, 0xf4
/* 8008ED88 0008BCC8  88 A3 00 1D */	lbz r5, 0x1d(r3)
/* 8008ED8C 0008BCCC  54 A0 0E FA */	rlwinm r0, r5, 1, 0x1b, 0x1d
/* 8008ED90 0008BCD0  54 A3 07 FE */	clrlwi r3, r5, 0x1f
/* 8008ED94 0008BCD4  7C 84 00 2E */	lwzx r4, r4, r0
/* 8008ED98 0008BCD8  54 A5 E7 FE */	rlwinm r5, r5, 0x1c, 0x1f, 0x1f
/* 8008ED9C 0008BCDC  48 05 A3 E9 */	bl GXSetZMode
/* 8008EDA0 0008BCE0  81 1C 00 00 */	lwz r8, 0(r28)
/* 8008EDA4 0008BCE4  38 FF 00 F4 */	addi r7, r31, 0xf4
/* 8008EDA8 0008BCE8  38 BF 01 14 */	addi r5, r31, 0x114
/* 8008EDAC 0008BCEC  88 08 00 1A */	lbz r0, 0x1a(r8)
/* 8008EDB0 0008BCF0  88 88 00 1B */	lbz r4, 0x1b(r8)
/* 8008EDB4 0008BCF4  54 03 16 FA */	rlwinm r3, r0, 2, 0x1b, 0x1d
/* 8008EDB8 0008BCF8  54 06 FF 3A */	rlwinm r6, r0, 0x1f, 0x1c, 0x1d
/* 8008EDBC 0008BCFC  54 00 EE FA */	rlwinm r0, r0, 0x1d, 0x1b, 0x1d
/* 8008EDC0 0008BD00  7C A5 30 2E */	lwzx r5, r5, r6
/* 8008EDC4 0008BD04  7C 67 18 2E */	lwzx r3, r7, r3
/* 8008EDC8 0008BD08  7C C7 00 2E */	lwzx r6, r7, r0
/* 8008EDCC 0008BD0C  88 E8 00 1C */	lbz r7, 0x1c(r8)
/* 8008EDD0 0008BD10  48 05 9B 7D */	bl GXSetAlphaCompare
/* 8008EDD4 0008BD14  80 9E 00 00 */	lwz r4, 0(r30)
/* 8008EDD8 0008BD18  38 60 00 00 */	li r3, 0
/* 8008EDDC 0008BD1C  80 BE 00 04 */	lwz r5, 4(r30)
/* 8008EDE0 0008BD20  80 DE 00 08 */	lwz r6, 8(r30)
/* 8008EDE4 0008BD24  80 FE 00 0C */	lwz r7, 0xc(r30)
/* 8008EDE8 0008BD28  48 05 97 21 */	bl GXSetTevColorIn
/* 8008EDEC 0008BD2C  80 9D 00 00 */	lwz r4, 0(r29)
/* 8008EDF0 0008BD30  38 60 00 00 */	li r3, 0
/* 8008EDF4 0008BD34  80 BD 00 04 */	lwz r5, 4(r29)
/* 8008EDF8 0008BD38  80 DD 00 08 */	lwz r6, 8(r29)
/* 8008EDFC 0008BD3C  80 FD 00 0C */	lwz r7, 0xc(r29)
/* 8008EE00 0008BD40  48 05 97 4D */	bl GXSetTevAlphaIn
/* 8008EE04 0008BD44  38 60 00 00 */	li r3, 0
/* 8008EE08 0008BD48  48 05 95 71 */	bl GXSetTevDirect
/* 8008EE0C 0008BD4C  38 60 00 01 */	li r3, 1
/* 8008EE10 0008BD50  48 05 95 69 */	bl GXSetTevDirect
/* 8008EE14 0008BD54  80 7C 00 00 */	lwz r3, 0(r28)
/* 8008EE18 0008BD58  88 03 00 1D */	lbz r0, 0x1d(r3)
/* 8008EE1C 0008BD5C  54 03 DF FE */	rlwinm r3, r0, 0x1b, 0x1f, 0x1f
/* 8008EE20 0008BD60  48 05 A3 99 */	bl GXSetZCompLoc
/* 8008EE24 0008BD64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8008EE28 0008BD68  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8008EE2C 0008BD6C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8008EE30 0008BD70  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8008EE34 0008BD74  83 81 00 10 */	lwz r28, 0x10(r1)
/* 8008EE38 0008BD78  7C 08 03 A6 */	mtlr r0
/* 8008EE3C 0008BD7C  38 21 00 20 */	addi r1, r1, 0x20
/* 8008EE40 0008BD80  4E 80 00 20 */	blr 
.endfn setGX__12JPABaseShapeCFP18JPAEmitterWorkData
