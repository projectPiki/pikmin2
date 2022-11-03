.include "macros.inc"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global PSMTXMultVec
PSMTXMultVec:
/* 800EABD8 000E7B18  E0 04 00 00 */	psq_l f0, 0(r4), 0, qr0
/* 800EABDC 000E7B1C  E0 43 00 00 */	psq_l f2, 0(r3), 0, qr0
/* 800EABE0 000E7B20  E0 24 80 08 */	psq_l f1, 8(r4), 1, qr0
/* 800EABE4 000E7B24  10 82 00 32 */	ps_mul f4, f2, f0
/* 800EABE8 000E7B28  E0 63 00 08 */	psq_l f3, 8(r3), 0, qr0
/* 800EABEC 000E7B2C  10 A3 20 7A */	ps_madd f5, f3, f1, f4
/* 800EABF0 000E7B30  E1 03 00 10 */	psq_l f8, 16(r3), 0, qr0
/* 800EABF4 000E7B34  10 C5 29 94 */	ps_sum0 f6, f5, f6, f5
/* 800EABF8 000E7B38  E1 23 00 18 */	psq_l f9, 24(r3), 0, qr0
/* 800EABFC 000E7B3C  11 48 00 32 */	ps_mul f10, f8, f0
/* 800EAC00 000E7B40  F0 C5 80 00 */	psq_st f6, 0(r5), 1, qr0
/* 800EAC04 000E7B44  11 69 50 7A */	ps_madd f11, f9, f1, f10
/* 800EAC08 000E7B48  E0 43 00 20 */	psq_l f2, 32(r3), 0, qr0
/* 800EAC0C 000E7B4C  11 8B 5B 14 */	ps_sum0 f12, f11, f12, f11
/* 800EAC10 000E7B50  E0 63 00 28 */	psq_l f3, 40(r3), 0, qr0
/* 800EAC14 000E7B54  10 82 00 32 */	ps_mul f4, f2, f0
/* 800EAC18 000E7B58  F1 85 80 04 */	psq_st f12, 4(r5), 1, qr0
/* 800EAC1C 000E7B5C  10 A3 20 7A */	ps_madd f5, f3, f1, f4
/* 800EAC20 000E7B60  10 C5 29 94 */	ps_sum0 f6, f5, f6, f5
/* 800EAC24 000E7B64  F0 C5 80 08 */	psq_st f6, 8(r5), 1, qr0
/* 800EAC28 000E7B68  4E 80 00 20 */	blr 

.global PSMTXMultVecSR
PSMTXMultVecSR:
/* 800EAC2C 000E7B6C  E0 03 00 00 */	psq_l f0, 0(r3), 0, qr0
/* 800EAC30 000E7B70  E0 C4 00 00 */	psq_l f6, 0(r4), 0, qr0
/* 800EAC34 000E7B74  E0 43 00 10 */	psq_l f2, 16(r3), 0, qr0
/* 800EAC38 000E7B78  11 00 01 B2 */	ps_mul f8, f0, f6
/* 800EAC3C 000E7B7C  E0 83 00 20 */	psq_l f4, 32(r3), 0, qr0
/* 800EAC40 000E7B80  11 42 01 B2 */	ps_mul f10, f2, f6
/* 800EAC44 000E7B84  E0 E4 80 08 */	psq_l f7, 8(r4), 1, qr0
/* 800EAC48 000E7B88  11 84 01 B2 */	ps_mul f12, f4, f6
/* 800EAC4C 000E7B8C  E0 63 00 18 */	psq_l f3, 24(r3), 0, qr0
/* 800EAC50 000E7B90  11 08 42 14 */	ps_sum0 f8, f8, f8, f8
/* 800EAC54 000E7B94  E0 A3 00 28 */	psq_l f5, 40(r3), 0, qr0
/* 800EAC58 000E7B98  11 4A 52 94 */	ps_sum0 f10, f10, f10, f10
/* 800EAC5C 000E7B9C  E0 23 00 08 */	psq_l f1, 8(r3), 0, qr0
/* 800EAC60 000E7BA0  11 8C 63 14 */	ps_sum0 f12, f12, f12, f12
/* 800EAC64 000E7BA4  11 21 41 FA */	ps_madd f9, f1, f7, f8
/* 800EAC68 000E7BA8  F1 25 80 00 */	psq_st f9, 0(r5), 1, qr0
/* 800EAC6C 000E7BAC  11 63 51 FA */	ps_madd f11, f3, f7, f10
/* 800EAC70 000E7BB0  F1 65 80 04 */	psq_st f11, 4(r5), 1, qr0
/* 800EAC74 000E7BB4  11 A5 61 FA */	ps_madd f13, f5, f7, f12
/* 800EAC78 000E7BB8  F1 A5 80 08 */	psq_st f13, 8(r5), 1, qr0
/* 800EAC7C 000E7BBC  4E 80 00 20 */	blr 

.global PSMTXMultVecArraySR
PSMTXMultVecArraySR:
/* 800EAC80 000E7BC0  E1 A3 00 00 */	psq_l f13, 0(r3), 0, qr0
/* 800EAC84 000E7BC4  E1 83 00 10 */	psq_l f12, 16(r3), 0, qr0
/* 800EAC88 000E7BC8  38 C6 FF FF */	addi r6, r6, -1
/* 800EAC8C 000E7BCC  E1 63 80 08 */	psq_l f11, 8(r3), 1, qr0
/* 800EAC90 000E7BD0  10 0D 64 20 */	ps_merge00 f0, f13, f12
/* 800EAC94 000E7BD4  38 A5 FF FC */	addi r5, r5, -4
/* 800EAC98 000E7BD8  E1 43 80 18 */	psq_l f10, 24(r3), 1, qr0
/* 800EAC9C 000E7BDC  10 2D 64 E0 */	ps_merge11 f1, f13, f12
/* 800EACA0 000E7BE0  7C C9 03 A6 */	mtctr r6
/* 800EACA4 000E7BE4  E0 63 00 20 */	psq_l f3, 32(r3), 0, qr0
/* 800EACA8 000E7BE8  10 4B 54 20 */	ps_merge00 f2, f11, f10
/* 800EACAC 000E7BEC  E0 83 80 28 */	psq_l f4, 40(r3), 1, qr0
/* 800EACB0 000E7BF0  E0 C4 00 00 */	psq_l f6, 0(r4), 0, qr0
/* 800EACB4 000E7BF4  E4 E4 80 08 */	psq_lu f7, 8(r4), 1, qr0
/* 800EACB8 000E7BF8  11 00 01 98 */	ps_muls0 f8, f0, f6
/* 800EACBC 000E7BFC  11 23 01 B2 */	ps_mul f9, f3, f6
/* 800EACC0 000E7C00  11 01 41 9E */	ps_madds1 f8, f1, f6, f8
/* 800EACC4 000E7C04  11 44 49 FA */	ps_madd f10, f4, f7, f9
.L_800EACC8:
/* 800EACC8 000E7C08  E4 C4 00 04 */	psq_lu f6, 4(r4), 0, qr0
/* 800EACCC 000E7C0C  11 82 41 DC */	ps_madds0 f12, f2, f7, f8
/* 800EACD0 000E7C10  E4 E4 80 08 */	psq_lu f7, 8(r4), 1, qr0
/* 800EACD4 000E7C14  11 AA 4A 54 */	ps_sum0 f13, f10, f9, f9
/* 800EACD8 000E7C18  11 00 01 98 */	ps_muls0 f8, f0, f6
/* 800EACDC 000E7C1C  11 23 01 B2 */	ps_mul f9, f3, f6
/* 800EACE0 000E7C20  F5 85 00 04 */	psq_stu f12, 4(r5), 0, qr0
/* 800EACE4 000E7C24  11 01 41 9E */	ps_madds1 f8, f1, f6, f8
/* 800EACE8 000E7C28  F5 A5 80 08 */	psq_stu f13, 8(r5), 1, qr0
/* 800EACEC 000E7C2C  11 44 49 FA */	ps_madd f10, f4, f7, f9
/* 800EACF0 000E7C30  42 00 FF D8 */	bdnz .L_800EACC8
/* 800EACF4 000E7C34  11 82 41 DC */	ps_madds0 f12, f2, f7, f8
/* 800EACF8 000E7C38  11 AA 4A 54 */	ps_sum0 f13, f10, f9, f9
/* 800EACFC 000E7C3C  F5 85 00 04 */	psq_stu f12, 4(r5), 0, qr0
/* 800EAD00 000E7C40  F5 A5 80 08 */	psq_stu f13, 8(r5), 1, qr0
/* 800EAD04 000E7C44  4E 80 00 20 */	blr 
