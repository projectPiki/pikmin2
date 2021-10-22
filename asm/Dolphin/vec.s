.include "macros.inc"
.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 0x8
.global lbl_80517748
lbl_80517748:
	.float 0.5
.global lbl_8051774C
lbl_8051774C:
	.4byte 0x40400000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global PSVECAdd
PSVECAdd:
/* 800EAEB4 000E7DF4  E0 43 00 00 */	psq_l f2, 0(r3), 0, qr0
/* 800EAEB8 000E7DF8  E0 84 00 00 */	psq_l f4, 0(r4), 0, qr0
/* 800EAEBC 000E7DFC  10 C2 20 2A */	ps_add f6, f2, f4
/* 800EAEC0 000E7E00  F0 C5 00 00 */	psq_st f6, 0(r5), 0, qr0
/* 800EAEC4 000E7E04  E0 63 80 08 */	psq_l f3, 8(r3), 1, qr0
/* 800EAEC8 000E7E08  E0 A4 80 08 */	psq_l f5, 8(r4), 1, qr0
/* 800EAECC 000E7E0C  10 E3 28 2A */	ps_add f7, f3, f5
/* 800EAED0 000E7E10  F0 E5 80 08 */	psq_st f7, 8(r5), 1, qr0
/* 800EAED4 000E7E14  4E 80 00 20 */	blr 

.global PSVECSubtract
PSVECSubtract:
/* 800EAED8 000E7E18  E0 43 00 00 */	psq_l f2, 0(r3), 0, qr0
/* 800EAEDC 000E7E1C  E0 84 00 00 */	psq_l f4, 0(r4), 0, qr0
/* 800EAEE0 000E7E20  10 C2 20 28 */	ps_sub f6, f2, f4
/* 800EAEE4 000E7E24  F0 C5 00 00 */	psq_st f6, 0(r5), 0, qr0
/* 800EAEE8 000E7E28  E0 63 80 08 */	psq_l f3, 8(r3), 1, qr0
/* 800EAEEC 000E7E2C  E0 A4 80 08 */	psq_l f5, 8(r4), 1, qr0
/* 800EAEF0 000E7E30  10 E3 28 28 */	ps_sub f7, f3, f5
/* 800EAEF4 000E7E34  F0 E5 80 08 */	psq_st f7, 8(r5), 1, qr0
/* 800EAEF8 000E7E38  4E 80 00 20 */	blr 

.global PSVECNormalize
PSVECNormalize:
/* 800EAEFC 000E7E3C  C0 02 93 E8 */	lfs f0, lbl_80517748@sda21(r2)
/* 800EAF00 000E7E40  C0 22 93 EC */	lfs f1, lbl_8051774C@sda21(r2)
/* 800EAF04 000E7E44  E0 43 00 00 */	psq_l f2, 0(r3), 0, qr0
/* 800EAF08 000E7E48  10 A2 00 B2 */	ps_mul f5, f2, f2
/* 800EAF0C 000E7E4C  E0 63 80 08 */	psq_l f3, 8(r3), 1, qr0
/* 800EAF10 000E7E50  10 83 28 FA */	ps_madd f4, f3, f3, f5
/* 800EAF14 000E7E54  10 84 28 D4 */	ps_sum0 f4, f4, f3, f5
/* 800EAF18 000E7E58  FC A0 20 34 */	frsqrte f5, f4
/* 800EAF1C 000E7E5C  EC C5 01 72 */	fmuls f6, f5, f5
/* 800EAF20 000E7E60  EC 05 00 32 */	fmuls f0, f5, f0
/* 800EAF24 000E7E64  EC C6 09 3C */	fnmsubs f6, f6, f4, f1
/* 800EAF28 000E7E68  EC A6 00 32 */	fmuls f5, f6, f0
/* 800EAF2C 000E7E6C  10 42 01 58 */	ps_muls0 f2, f2, f5
/* 800EAF30 000E7E70  F0 44 00 00 */	psq_st f2, 0(r4), 0, qr0
/* 800EAF34 000E7E74  10 63 01 58 */	ps_muls0 f3, f3, f5
/* 800EAF38 000E7E78  F0 64 80 08 */	psq_st f3, 8(r4), 1, qr0
/* 800EAF3C 000E7E7C  4E 80 00 20 */	blr 

.global PSVECMag
PSVECMag:
/* 800EAF40 000E7E80  C0 82 93 E8 */	lfs f4, lbl_80517748@sda21(r2)
/* 800EAF44 000E7E84  E0 03 00 00 */	psq_l f0, 0(r3), 0, qr0
/* 800EAF48 000E7E88  10 00 00 32 */	ps_mul f0, f0, f0
/* 800EAF4C 000E7E8C  C0 23 00 08 */	lfs f1, 8(r3)
/* 800EAF50 000E7E90  EC 44 20 28 */	fsubs f2, f4, f4
/* 800EAF54 000E7E94  10 21 00 7A */	ps_madd f1, f1, f1, f0
/* 800EAF58 000E7E98  10 21 00 14 */	ps_sum0 f1, f1, f0, f0
/* 800EAF5C 000E7E9C  FC 01 10 00 */	fcmpu cr0, f1, f2
/* 800EAF60 000E7EA0  41 82 00 20 */	beq lbl_800EAF80
/* 800EAF64 000E7EA4  FC 00 08 34 */	frsqrte f0, f1
/* 800EAF68 000E7EA8  C0 62 93 EC */	lfs f3, lbl_8051774C@sda21(r2)
/* 800EAF6C 000E7EAC  EC 40 00 32 */	fmuls f2, f0, f0
/* 800EAF70 000E7EB0  EC 00 01 32 */	fmuls f0, f0, f4
/* 800EAF74 000E7EB4  EC 42 18 7C */	fnmsubs f2, f2, f1, f3
/* 800EAF78 000E7EB8  EC 02 00 32 */	fmuls f0, f2, f0
/* 800EAF7C 000E7EBC  EC 21 00 32 */	fmuls f1, f1, f0
lbl_800EAF80:
/* 800EAF80 000E7EC0  4E 80 00 20 */	blr 

.global PSVECCrossProduct
PSVECCrossProduct:
/* 800EAF84 000E7EC4  E0 24 00 00 */	psq_l f1, 0(r4), 0, qr0
/* 800EAF88 000E7EC8  C0 43 00 08 */	lfs f2, 8(r3)
/* 800EAF8C 000E7ECC  E0 03 00 00 */	psq_l f0, 0(r3), 0, qr0
/* 800EAF90 000E7ED0  10 C1 0C A0 */	ps_merge10 f6, f1, f1
/* 800EAF94 000E7ED4  C0 64 00 08 */	lfs f3, 8(r4)
/* 800EAF98 000E7ED8  10 81 00 B2 */	ps_mul f4, f1, f2
/* 800EAF9C 000E7EDC  10 E1 00 18 */	ps_muls0 f7, f1, f0
/* 800EAFA0 000E7EE0  10 A0 20 F8 */	ps_msub f5, f0, f3, f4
/* 800EAFA4 000E7EE4  11 00 39 B8 */	ps_msub f8, f0, f6, f7
/* 800EAFA8 000E7EE8  11 25 2C E0 */	ps_merge11 f9, f5, f5
/* 800EAFAC 000E7EEC  11 45 44 60 */	ps_merge01 f10, f5, f8
/* 800EAFB0 000E7EF0  F1 25 80 00 */	psq_st f9, 0(r5), 1, qr0
/* 800EAFB4 000E7EF4  11 40 50 50 */	ps_neg f10, f10
/* 800EAFB8 000E7EF8  F1 45 00 04 */	psq_st f10, 4(r5), 0, qr0
/* 800EAFBC 000E7EFC  4E 80 00 20 */	blr 
