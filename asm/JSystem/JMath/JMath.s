.include "macros.inc"
.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
lbl_80516728:
	.double 0.0
lbl_80516730:
	.float 1.0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global JMAEulerToQuat__FsssP10Quaternion
JMAEulerToQuat__FsssP10Quaternion:
/* 80034F08 00031E48  7C 68 07 34 */	extsh r8, r3
/* 80034F0C 00031E4C  7C 87 07 34 */	extsh r7, r4
/* 80034F10 00031E50  55 00 0F FE */	srwi r0, r8, 0x1f
/* 80034F14 00031E54  7C A3 07 34 */	extsh r3, r5
/* 80034F18 00031E58  7C 00 42 14 */	add r0, r0, r8
/* 80034F1C 00031E5C  54 E4 0F FE */	srwi r4, r7, 0x1f
/* 80034F20 00031E60  7C 05 0E 70 */	srawi r5, r0, 1
/* 80034F24 00031E64  3D 00 80 50 */	lis r8, sincosTable___5JMath@ha
/* 80034F28 00031E68  54 A5 04 3E */	clrlwi r5, r5, 0x10
/* 80034F2C 00031E6C  7C 84 3A 14 */	add r4, r4, r7
/* 80034F30 00031E70  7C A5 2E 70 */	srawi r5, r5, 5
/* 80034F34 00031E74  54 60 0F FE */	srwi r0, r3, 0x1f
/* 80034F38 00031E78  7C 84 0E 70 */	srawi r4, r4, 1
/* 80034F3C 00031E7C  38 E8 71 A0 */	addi r7, r8, sincosTable___5JMath@l
/* 80034F40 00031E80  7C 00 1A 14 */	add r0, r0, r3
/* 80034F44 00031E84  54 A5 18 38 */	slwi r5, r5, 3
/* 80034F48 00031E88  54 83 04 3E */	clrlwi r3, r4, 0x10
/* 80034F4C 00031E8C  38 87 00 04 */	addi r4, r7, 4
/* 80034F50 00031E90  7C 63 2E 70 */	srawi r3, r3, 5
/* 80034F54 00031E94  7D 27 2C 2E */	lfsx f9, r7, r5
/* 80034F58 00031E98  54 63 18 38 */	slwi r3, r3, 3
/* 80034F5C 00031E9C  7C 00 0E 70 */	srawi r0, r0, 1
/* 80034F60 00031EA0  54 00 F4 B8 */	rlwinm r0, r0, 0x1e, 0x12, 0x1c
/* 80034F64 00031EA4  7C 67 1C 2E */	lfsx f3, r7, r3
/* 80034F68 00031EA8  7D 47 04 2E */	lfsx f10, r7, r0
/* 80034F6C 00031EAC  7C E4 1C 2E */	lfsx f7, r4, r3
/* 80034F70 00031EB0  EC 09 00 F2 */	fmuls f0, f9, f3
/* 80034F74 00031EB4  7D 04 04 2E */	lfsx f8, r4, r0
/* 80034F78 00031EB8  EC 83 02 B2 */	fmuls f4, f3, f10
/* 80034F7C 00031EBC  7C C4 2C 2E */	lfsx f6, r4, r5
/* 80034F80 00031EC0  EC 29 01 F2 */	fmuls f1, f9, f7
/* 80034F84 00031EC4  ED 67 02 32 */	fmuls f11, f7, f8
/* 80034F88 00031EC8  EC 49 01 32 */	fmuls f2, f9, f4
/* 80034F8C 00031ECC  EC 86 01 32 */	fmuls f4, f6, f4
/* 80034F90 00031ED0  EC 66 00 F2 */	fmuls f3, f6, f3
/* 80034F94 00031ED4  EC A6 12 FA */	fmadds f5, f6, f11, f2
/* 80034F98 00031ED8  EC 4A 00 72 */	fmuls f2, f10, f1
/* 80034F9C 00031EDC  EC 89 22 F8 */	fmsubs f4, f9, f11, f4
/* 80034FA0 00031EE0  D0 A6 00 0C */	stfs f5, 0xc(r6)
/* 80034FA4 00031EE4  EC 26 01 F2 */	fmuls f1, f6, f7
/* 80034FA8 00031EE8  EC 08 00 32 */	fmuls f0, f8, f0
/* 80034FAC 00031EEC  EC 48 10 FA */	fmadds f2, f8, f3, f2
/* 80034FB0 00031EF0  D0 86 00 00 */	stfs f4, 0(r6)
/* 80034FB4 00031EF4  EC 0A 00 78 */	fmsubs f0, f10, f1, f0
/* 80034FB8 00031EF8  D0 46 00 04 */	stfs f2, 4(r6)
/* 80034FBC 00031EFC  D0 06 00 08 */	stfs f0, 8(r6)
/* 80034FC0 00031F00  4E 80 00 20 */	blr 

.global JMAQuatLerp__FPC10QuaternionPC10QuaternionfP10Quaternion
JMAQuatLerp__FPC10QuaternionPC10QuaternionfP10Quaternion:
/* 80034FC4 00031F04  E0 03 00 00 */	psq_l f0, 0(r3), 0, qr0
/* 80034FC8 00031F08  E0 64 00 00 */	psq_l f3, 0(r4), 0, qr0
/* 80034FCC 00031F0C  E0 43 00 08 */	psq_l f2, 8(r3), 0, qr0
/* 80034FD0 00031F10  10 80 00 F2 */	ps_mul f4, f0, f3
/* 80034FD4 00031F14  E0 64 00 08 */	psq_l f3, 8(r4), 0, qr0
/* 80034FD8 00031F18  C8 02 83 C8 */	lfd f0, lbl_80516728@sda21(r2)
/* 80034FDC 00031F1C  10 82 20 FA */	ps_madd f4, f2, f3, f4
/* 80034FE0 00031F20  10 84 21 14 */	ps_sum0 f4, f4, f4, f4
/* 80034FE4 00031F24  FC 04 00 40 */	fcmpo cr0, f4, f0
/* 80034FE8 00031F28  40 80 00 5C */	bge .L_80035044
/* 80034FEC 00031F2C  C0 63 00 00 */	lfs f3, 0(r3)
/* 80034FF0 00031F30  FC 80 08 50 */	fneg f4, f1
/* 80034FF4 00031F34  C0 04 00 00 */	lfs f0, 0(r4)
/* 80034FF8 00031F38  C0 A3 00 04 */	lfs f5, 4(r3)
/* 80034FFC 00031F3C  EC 23 00 2A */	fadds f1, f3, f0
/* 80035000 00031F40  C0 04 00 04 */	lfs f0, 4(r4)
/* 80035004 00031F44  C0 C3 00 08 */	lfs f6, 8(r3)
/* 80035008 00031F48  EC 45 00 2A */	fadds f2, f5, f0
/* 8003500C 00031F4C  C0 04 00 08 */	lfs f0, 8(r4)
/* 80035010 00031F50  EC 64 18 7A */	fmadds f3, f4, f1, f3
/* 80035014 00031F54  EC 26 00 2A */	fadds f1, f6, f0
/* 80035018 00031F58  C0 E3 00 0C */	lfs f7, 0xc(r3)
/* 8003501C 00031F5C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80035020 00031F60  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 80035024 00031F64  D0 65 00 00 */	stfs f3, 0(r5)
/* 80035028 00031F68  EC 07 00 2A */	fadds f0, f7, f0
/* 8003502C 00031F6C  EC 24 30 7A */	fmadds f1, f4, f1, f6
/* 80035030 00031F70  D0 45 00 04 */	stfs f2, 4(r5)
/* 80035034 00031F74  EC 04 38 3A */	fmadds f0, f4, f0, f7
/* 80035038 00031F78  D0 25 00 08 */	stfs f1, 8(r5)
/* 8003503C 00031F7C  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 80035040 00031F80  4E 80 00 20 */	blr 
.L_80035044:
/* 80035044 00031F84  C0 63 00 00 */	lfs f3, 0(r3)
/* 80035048 00031F88  FC 80 08 50 */	fneg f4, f1
/* 8003504C 00031F8C  C0 04 00 00 */	lfs f0, 0(r4)
/* 80035050 00031F90  C0 A3 00 04 */	lfs f5, 4(r3)
/* 80035054 00031F94  EC 23 00 28 */	fsubs f1, f3, f0
/* 80035058 00031F98  C0 04 00 04 */	lfs f0, 4(r4)
/* 8003505C 00031F9C  C0 C3 00 08 */	lfs f6, 8(r3)
/* 80035060 00031FA0  EC 45 00 28 */	fsubs f2, f5, f0
/* 80035064 00031FA4  C0 04 00 08 */	lfs f0, 8(r4)
/* 80035068 00031FA8  EC 64 18 7A */	fmadds f3, f4, f1, f3
/* 8003506C 00031FAC  EC 26 00 28 */	fsubs f1, f6, f0
/* 80035070 00031FB0  C0 E3 00 0C */	lfs f7, 0xc(r3)
/* 80035074 00031FB4  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 80035078 00031FB8  EC 44 28 BA */	fmadds f2, f4, f2, f5
/* 8003507C 00031FBC  D0 65 00 00 */	stfs f3, 0(r5)
/* 80035080 00031FC0  EC 07 00 28 */	fsubs f0, f7, f0
/* 80035084 00031FC4  EC 24 30 7A */	fmadds f1, f4, f1, f6
/* 80035088 00031FC8  D0 45 00 04 */	stfs f2, 4(r5)
/* 8003508C 00031FCC  EC 04 38 3A */	fmadds f0, f4, f0, f7
/* 80035090 00031FD0  D0 25 00 08 */	stfs f1, 8(r5)
/* 80035094 00031FD4  D0 05 00 0C */	stfs f0, 0xc(r5)
/* 80035098 00031FD8  4E 80 00 20 */	blr 

.global JMAMTXApplyScale__FPA4_CfPA4_ffff
JMAMTXApplyScale__FPA4_CfPA4_ffff:
/* 8003509C 00031FDC  FC C0 08 90 */	fmr f6, f1
/* 800350A0 00031FE0  E0 23 00 00 */	psq_l f1, 0(r3), 0, qr0
/* 800350A4 00031FE4  FC 00 10 90 */	fmr f0, f2
/* 800350A8 00031FE8  E0 43 00 10 */	psq_l f2, 16(r3), 0, qr0
/* 800350AC 00031FEC  FC A0 18 90 */	fmr f5, f3
/* 800350B0 00031FF0  C0 82 83 D0 */	lfs f4, lbl_80516730@sda21(r2)
/* 800350B4 00031FF4  10 06 04 20 */	ps_merge00 f0, f6, f0
/* 800350B8 00031FF8  E0 63 00 20 */	psq_l f3, 32(r3), 0, qr0
/* 800350BC 00031FFC  10 21 00 32 */	ps_mul f1, f1, f0
/* 800350C0 00032000  10 42 00 32 */	ps_mul f2, f2, f0
/* 800350C4 00032004  10 63 00 32 */	ps_mul f3, f3, f0
/* 800350C8 00032008  F0 24 00 00 */	psq_st f1, 0(r4), 0, qr0
/* 800350CC 0003200C  10 05 24 20 */	ps_merge00 f0, f5, f4
/* 800350D0 00032010  E0 23 00 08 */	psq_l f1, 8(r3), 0, qr0
/* 800350D4 00032014  F0 44 00 10 */	psq_st f2, 16(r4), 0, qr0
/* 800350D8 00032018  E0 43 00 18 */	psq_l f2, 24(r3), 0, qr0
/* 800350DC 0003201C  10 21 00 32 */	ps_mul f1, f1, f0
/* 800350E0 00032020  F0 64 00 20 */	psq_st f3, 32(r4), 0, qr0
/* 800350E4 00032024  E0 63 00 28 */	psq_l f3, 40(r3), 0, qr0
/* 800350E8 00032028  10 42 00 32 */	ps_mul f2, f2, f0
/* 800350EC 0003202C  F0 24 00 08 */	psq_st f1, 8(r4), 0, qr0
/* 800350F0 00032030  10 63 00 32 */	ps_mul f3, f3, f0
/* 800350F4 00032034  F0 44 00 18 */	psq_st f2, 24(r4), 0, qr0
/* 800350F8 00032038  F0 64 00 28 */	psq_st f3, 40(r4), 0, qr0
/* 800350FC 0003203C  4E 80 00 20 */	blr 
