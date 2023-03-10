.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj s_key_table, local
	.float 1.0
	.float 1.00091
	.float 1.001821
	.float 1.002733
	.float 1.003645
	.float 1.004559
	.float 1.005473
	.float 1.006388
	.float 1.007304
	.float 1.00822
	.float 1.009138
	.float 1.010056
	.float 1.010975
	.float 1.011896
	.float 1.012816
	.float 1.013738
	.float 1.014661
	.float 1.015584
	.float 1.016508
	.float 1.017433
	.float 1.018359
	.float 1.019286
	.float 1.020214
	.float 1.021142
	.float 1.022071
	.float 1.023002
	.float 1.023933
	.float 1.024864
	.float 1.025797
	.float 1.026731
	.float 1.027665
	.float 1.0286
	.float 1.029536
	.float 1.030473
	.float 1.031411
	.float 1.03235
	.float 1.033289
	.float 1.03423
	.float 1.035171
	.float 1.036113
	.float 1.037056
	.float 1.038
	.float 1.038944
	.float 1.03989
	.float 1.040836
	.float 1.041783
	.float 1.042731
	.float 1.04368
	.float 1.04463
	.float 1.045581
	.float 1.046532
	.float 1.047485
	.float 1.048438
	.float 1.049392
	.float 1.050347
	.float 1.051303
	.float 1.05226
	.float 1.053217
	.float 1.054176
	.float 1.055135
	.float 1.056095
	.float 1.057056
	.float 1.058018
	.float 1.058981
.endobj s_key_table
.obj sAdsrDef__9JASPlayer, global
	.4byte 0
	.float 1.0
	.4byte 0x00000000
	.4byte 0x00000000
	.float 1.0
	.float 0.0
.endobj sAdsrDef__9JASPlayer
.obj sEnvelopeDef__9JASPlayer, global
	.4byte 0
	.float 1.0
	.4byte 0x00000000
	.4byte sRelTable__9JASPlayer
	.float 1.0
	.float 0.0
.endobj sEnvelopeDef__9JASPlayer
.obj sVibratoDef__9JASPlayer, global
	.4byte 1
	.float 0.5
	.4byte sVibTable__9JASPlayer
	.4byte sVibTable__9JASPlayer
	.float 0.0
	.float 1.0
.endobj sVibratoDef__9JASPlayer
.obj sTremoroDef__9JASPlayer, global
	.4byte 0
	.float 0.5
	.4byte sTreTable__9JASPlayer
	.4byte sTreTable__9JASPlayer
	.float 0.0
	.float 1.0
.endobj sTremoroDef__9JASPlayer

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj CUTOFF_TO_IIR_TABLE__9JASPlayer, global
	.2byte 0x0F5C
	.2byte 0x0A3D
	.2byte 0x4665
	.2byte 0x3999
	.2byte 0x103F
	.2byte 0x0A28
	.2byte 0x45D7
	.2byte 0x3925
	.2byte 0x1122
	.2byte 0x0A14
	.2byte 0x454A
	.2byte 0x38B0
	.2byte 0x1205
	.2byte 0x09FF
	.2byte 0x44BC
	.2byte 0x383C
	.2byte 0x12E8
	.2byte 0x09EA
	.2byte 0x442E
	.2byte 0x37C8
	.2byte 0x13CB
	.2byte 0x09D6
	.2byte 0x43A0
	.2byte 0x3754
	.2byte 0x14AE
	.2byte 0x09C1
	.2byte 0x4312
	.2byte 0x36E0
	.2byte 0x1591
	.2byte 0x09AC
	.2byte 0x4284
	.2byte 0x366C
	.2byte 0x1674
	.2byte 0x0998
	.2byte 0x41F6
	.2byte 0x35F8
	.2byte 0x1757
	.2byte 0x0983
	.2byte 0x4168
	.2byte 0x3584
	.2byte 0x183A
	.2byte 0x096E
	.2byte 0x40DA
	.2byte 0x3510
	.2byte 0x191D
	.2byte 0x095A
	.2byte 0x404C
	.2byte 0x349C
	.2byte 0x1A00
	.2byte 0x0945
	.2byte 0x3FBE
	.2byte 0x3427
	.2byte 0x1AE3
	.2byte 0x0931
	.2byte 0x3F31
	.2byte 0x33B3
	.2byte 0x1BC6
	.2byte 0x091C
	.2byte 0x3EA3
	.2byte 0x333F
	.2byte 0x1CA9
	.2byte 0x0907
	.2byte 0x3E15
	.2byte 0x32CB
	.2byte 0x1D8C
	.2byte 0x08F3
	.2byte 0x3D87
	.2byte 0x3257
	.2byte 0x1E6F
	.2byte 0x08DE
	.2byte 0x3CF9
	.2byte 0x31E3
	.2byte 0x1F52
	.2byte 0x08C9
	.2byte 0x3C6B
	.2byte 0x316F
	.2byte 0x2035
	.2byte 0x08B5
	.2byte 0x3BDD
	.2byte 0x30FB
	.2byte 0x2118
	.2byte 0x08A0
	.2byte 0x3B4F
	.2byte 0x3087
	.2byte 0x21FC
	.2byte 0x088B
	.2byte 0x3AC1
	.2byte 0x3012
	.2byte 0x22DF
	.2byte 0x0877
	.2byte 0x3A33
	.2byte 0x2F9E
	.2byte 0x23C2
	.2byte 0x0862
	.2byte 0x39A6
	.2byte 0x2F2A
	.2byte 0x24A5
	.2byte 0x084D
	.2byte 0x3918
	.2byte 0x2EB6
	.2byte 0x2588
	.2byte 0x0839
	.2byte 0x388A
	.2byte 0x2E42
	.2byte 0x266B
	.2byte 0x0824
	.2byte 0x37FC
	.2byte 0x2DCE
	.2byte 0x274E
	.2byte 0x0810
	.2byte 0x376E
	.2byte 0x2D5A
	.2byte 0x2831
	.2byte 0x07FB
	.2byte 0x36E0
	.2byte 0x2CE6
	.2byte 0x2914
	.2byte 0x07E6
	.2byte 0x3652
	.2byte 0x2C72
	.2byte 0x29F7
	.2byte 0x07D2
	.2byte 0x35C4
	.2byte 0x2BFE
	.2byte 0x2ADA
	.2byte 0x07BD
	.2byte 0x3536
	.2byte 0x2B89
	.2byte 0x2BBD
	.2byte 0x07A8
	.2byte 0x34A8
	.2byte 0x2B15
	.2byte 0x2CA0
	.2byte 0x0794
	.2byte 0x341B
	.2byte 0x2AA1
	.2byte 0x2D83
	.2byte 0x077F
	.2byte 0x338D
	.2byte 0x2A2D
	.2byte 0x2E66
	.2byte 0x076A
	.2byte 0x32FF
	.2byte 0x29B9
	.2byte 0x2F49
	.2byte 0x0756
	.2byte 0x3271
	.2byte 0x2945
	.2byte 0x302C
	.2byte 0x0741
	.2byte 0x31E3
	.2byte 0x28D1
	.2byte 0x310F
	.2byte 0x072D
	.2byte 0x3155
	.2byte 0x285D
	.2byte 0x31F2
	.2byte 0x0718
	.2byte 0x30C7
	.2byte 0x27E9
	.2byte 0x32D5
	.2byte 0x0703
	.2byte 0x3039
	.2byte 0x2775
	.2byte 0x33B8
	.2byte 0x06EF
	.2byte 0x2FAB
	.2byte 0x2700
	.2byte 0x349C
	.2byte 0x06DA
	.2byte 0x2F1D
	.2byte 0x268C
	.2byte 0x357F
	.2byte 0x06C5
	.2byte 0x2E8F
	.2byte 0x2618
	.2byte 0x3662
	.2byte 0x06B1
	.2byte 0x2E02
	.2byte 0x25A4
	.2byte 0x3745
	.2byte 0x069C
	.2byte 0x2D74
	.2byte 0x2530
	.2byte 0x3828
	.2byte 0x0687
	.2byte 0x2CE6
	.2byte 0x24BC
	.2byte 0x390B
	.2byte 0x0673
	.2byte 0x2C58
	.2byte 0x2448
	.2byte 0x39EE
	.2byte 0x065E
	.2byte 0x2BCA
	.2byte 0x23D4
	.2byte 0x3AD1
	.2byte 0x0649
	.2byte 0x2B3C
	.2byte 0x2360
	.2byte 0x3BB4
	.2byte 0x0635
	.2byte 0x2AAE
	.2byte 0x22EB
	.2byte 0x3C97
	.2byte 0x0620
	.2byte 0x2A20
	.2byte 0x2277
	.2byte 0x3D7A
	.2byte 0x060C
	.2byte 0x2992
	.2byte 0x2203
	.2byte 0x3E5D
	.2byte 0x05F7
	.2byte 0x2904
	.2byte 0x218F
	.2byte 0x3F40
	.2byte 0x05E2
	.2byte 0x2877
	.2byte 0x211B
	.2byte 0x4023
	.2byte 0x05CE
	.2byte 0x27E9
	.2byte 0x20A7
	.2byte 0x4106
	.2byte 0x05B9
	.2byte 0x275B
	.2byte 0x2033
	.2byte 0x41E9
	.2byte 0x05A4
	.2byte 0x26CD
	.2byte 0x1FBF
	.2byte 0x42CC
	.2byte 0x0590
	.2byte 0x263F
	.2byte 0x1F4B
	.2byte 0x43AF
	.2byte 0x057B
	.2byte 0x25B1
	.2byte 0x1ED7
	.2byte 0x4492
	.2byte 0x0566
	.2byte 0x2523
	.2byte 0x1E62
	.2byte 0x4575
	.2byte 0x0552
	.2byte 0x2495
	.2byte 0x1DEE
	.2byte 0x4658
	.2byte 0x053D
	.2byte 0x2407
	.2byte 0x1D7A
	.2byte 0x473B
	.2byte 0x0529
	.2byte 0x2379
	.2byte 0x1D06
	.2byte 0x481F
	.2byte 0x0514
	.2byte 0x22EB
	.2byte 0x1C92
	.2byte 0x4902
	.2byte 0x04FF
	.2byte 0x225E
	.2byte 0x1C1E
	.2byte 0x49E5
	.2byte 0x04EB
	.2byte 0x21D0
	.2byte 0x1BAA
	.2byte 0x4AC8
	.2byte 0x04D6
	.2byte 0x2142
	.2byte 0x1B36
	.2byte 0x4BAB
	.2byte 0x04C1
	.2byte 0x20B4
	.2byte 0x1AC2
	.2byte 0x4C8E
	.2byte 0x04AD
	.2byte 0x2026
	.2byte 0x1A4E
	.2byte 0x4D71
	.2byte 0x0498
	.2byte 0x1F98
	.2byte 0x19D9
	.2byte 0x4E54
	.2byte 0x0483
	.2byte 0x1F0A
	.2byte 0x1965
	.2byte 0x4F37
	.2byte 0x046F
	.2byte 0x1E7C
	.2byte 0x18F1
	.2byte 0x501A
	.2byte 0x045A
	.2byte 0x1DEE
	.2byte 0x187D
	.2byte 0x50FD
	.2byte 0x0445
	.2byte 0x1D60
	.2byte 0x1809
	.2byte 0x51E0
	.2byte 0x0431
	.2byte 0x1CD3
	.2byte 0x1795
	.2byte 0x52C3
	.2byte 0x041C
	.2byte 0x1C45
	.2byte 0x1721
	.2byte 0x53A6
	.2byte 0x0408
	.2byte 0x1BB7
	.2byte 0x16AD
	.2byte 0x5489
	.2byte 0x03F3
	.2byte 0x1B29
	.2byte 0x1639
	.2byte 0x556C
	.2byte 0x03DE
	.2byte 0x1A9B
	.2byte 0x15C4
	.2byte 0x564F
	.2byte 0x03CA
	.2byte 0x1A0D
	.2byte 0x1550
	.2byte 0x5732
	.2byte 0x03B5
	.2byte 0x197F
	.2byte 0x14DC
	.2byte 0x5815
	.2byte 0x03A0
	.2byte 0x18F1
	.2byte 0x1468
	.2byte 0x58F8
	.2byte 0x038C
	.2byte 0x1863
	.2byte 0x13F4
	.2byte 0x59DB
	.2byte 0x0377
	.2byte 0x17D5
	.2byte 0x1380
	.2byte 0x5ABF
	.2byte 0x0362
	.2byte 0x1747
	.2byte 0x130C
	.2byte 0x5BA2
	.2byte 0x034E
	.2byte 0x16BA
	.2byte 0x1298
	.2byte 0x5C85
	.2byte 0x0339
	.2byte 0x162C
	.2byte 0x1224
	.2byte 0x5D68
	.2byte 0x0324
	.2byte 0x159E
	.2byte 0x11B0
	.2byte 0x5E4B
	.2byte 0x0310
	.2byte 0x1510
	.2byte 0x113B
	.2byte 0x5F2E
	.2byte 0x02FB
	.2byte 0x1482
	.2byte 0x10C7
	.2byte 0x6011
	.2byte 0x02E7
	.2byte 0x13F4
	.2byte 0x1053
	.2byte 0x60F4
	.2byte 0x02D2
	.2byte 0x1366
	.2byte 0x0FDF
	.2byte 0x61D7
	.2byte 0x02BD
	.2byte 0x12D8
	.2byte 0x0F6B
	.2byte 0x62BA
	.2byte 0x02A9
	.2byte 0x124A
	.2byte 0x0EF7
	.2byte 0x639D
	.2byte 0x0294
	.2byte 0x11BC
	.2byte 0x0E83
	.2byte 0x6480
	.2byte 0x027F
	.2byte 0x112F
	.2byte 0x0E0F
	.2byte 0x6563
	.2byte 0x026B
	.2byte 0x10A1
	.2byte 0x0D9B
	.2byte 0x6646
	.2byte 0x0256
	.2byte 0x1013
	.2byte 0x0D27
	.2byte 0x6729
	.2byte 0x0241
	.2byte 0x0F85
	.2byte 0x0CB2
	.2byte 0x680C
	.2byte 0x022D
	.2byte 0x0EF7
	.2byte 0x0C3E
	.2byte 0x68EF
	.2byte 0x0218
	.2byte 0x0E69
	.2byte 0x0BCA
	.2byte 0x69D2
	.2byte 0x0204
	.2byte 0x0DDB
	.2byte 0x0B56
	.2byte 0x6AB5
	.2byte 0x01EF
	.2byte 0x0D4D
	.2byte 0x0AE2
	.2byte 0x6B98
	.2byte 0x01DA
	.2byte 0x0CBF
	.2byte 0x0A6E
	.2byte 0x6C7B
	.2byte 0x01C6
	.2byte 0x0C31
	.2byte 0x09FA
	.2byte 0x6D5F
	.2byte 0x01B1
	.2byte 0x0BA3
	.2byte 0x0986
	.2byte 0x6E42
	.2byte 0x019C
	.2byte 0x0B16
	.2byte 0x0912
	.2byte 0x6F25
	.2byte 0x0188
	.2byte 0x0A88
	.2byte 0x089D
	.2byte 0x7008
	.2byte 0x0173
	.2byte 0x09FA
	.2byte 0x0829
	.2byte 0x70EB
	.2byte 0x015E
	.2byte 0x096C
	.2byte 0x07B5
	.2byte 0x71CE
	.2byte 0x014A
	.2byte 0x08DE
	.2byte 0x0741
	.2byte 0x72B1
	.2byte 0x0135
	.2byte 0x0850
	.2byte 0x06CD
	.2byte 0x7394
	.2byte 0x0120
	.2byte 0x07C2
	.2byte 0x0659
	.2byte 0x7477
	.2byte 0x010C
	.2byte 0x0734
	.2byte 0x05E5
	.2byte 0x755A
	.2byte 0x00F7
	.2byte 0x06A6
	.2byte 0x0571
	.2byte 0x763D
	.2byte 0x00E3
	.2byte 0x0618
	.2byte 0x04FD
	.2byte 0x7720
	.2byte 0x00CE
	.2byte 0x058B
	.2byte 0x0489
	.2byte 0x7803
	.2byte 0x00B9
	.2byte 0x04FD
	.2byte 0x0414
	.2byte 0x78E6
	.2byte 0x00A5
	.2byte 0x046F
	.2byte 0x03A0
	.2byte 0x79C9
	.2byte 0x0090
	.2byte 0x03E1
	.2byte 0x032C
	.2byte 0x7AAC
	.2byte 0x007B
	.2byte 0x0353
	.2byte 0x02B8
	.2byte 0x7B8F
	.2byte 0x0067
	.2byte 0x02C5
	.2byte 0x0244
	.2byte 0x7C72
	.2byte 0x0052
	.2byte 0x0237
	.2byte 0x01D0
	.2byte 0x7D55
	.2byte 0x003D
	.2byte 0x01A9
	.2byte 0x015C
	.2byte 0x7E38
	.2byte 0x0029
	.2byte 0x011B
	.2byte 0x00E8
	.2byte 0x7F1B
	.2byte 0x0014
	.2byte 0x008D
	.2byte 0x0074
	.2byte 0x7FFF
	.2byte 0x0000
	.2byte 0x0000
	.2byte 0x0000
.endobj CUTOFF_TO_IIR_TABLE__9JASPlayer
.obj sAdsTable__9JASPlayer, global
	.4byte 0x00000000
	.4byte 0x7FFF0000
	.4byte 0x00007FFF
	.4byte 0x00000000
	.4byte 0x0000000E
	.4byte 0x00000000
.endobj sAdsTable__9JASPlayer
.obj sRelTable__9JASPlayer, global
	.4byte 0x0000000A
	.4byte 0x0000000F
	.4byte 0x00010000
.endobj sRelTable__9JASPlayer
.obj sVibTable__9JASPlayer, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x000C7FFF
	.4byte 0x0000000C
	.4byte 0x00000000
	.4byte 0x000CC000
	.4byte 0x0000000C
	.4byte 0x0000000D
	.4byte 0x00000001
.endobj sVibTable__9JASPlayer
.obj sTreTable__9JASPlayer, global
	.4byte 0x00000000
	.4byte 0x7FFF0000
	.4byte 0x00140000
	.4byte 0x00000014
	.4byte 0x80010000
	.4byte 0x00140000
	.4byte 0x00000014
	.4byte 0x7FFF000D
	.4byte 0x00000001
.endobj sTreTable__9JASPlayer

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj sV0$663, local
	.skip 0x4
.endobj sV0$663
.obj init$664, local
	.skip 0x1
.endobj init$664
.balign 4
.obj sV1$666, local
	.skip 0x4
.endobj sV1$666
.obj init$667, local
	.skip 0x1
.endobj init$667

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516D18, local
	.float 4.0
.endobj lbl_80516D18
.obj lbl_80516D1C, local
	.float 0.0
.endobj lbl_80516D1C
.obj lbl_80516D20, local
	.float 1.0
.endobj lbl_80516D20
.obj lbl_80516D24, local
	.float 64.0
.endobj lbl_80516D24
.balign 8
.obj lbl_80516D28, local
	.8byte 0x4330000080000000
.endobj lbl_80516D28

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn extend8to16__9JASPlayerFUc, global
/* 8009C5B4 000994F4  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8009C5B8 000994F8  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009C5BC 000994FC  4D 82 00 20 */	beqlr 
/* 8009C5C0 00099500  3C 63 00 01 */	addis r3, r3, 1
/* 8009C5C4 00099504  38 03 FF 00 */	addi r0, r3, -256
/* 8009C5C8 00099508  7C 03 07 34 */	extsh r3, r0
/* 8009C5CC 0009950C  4E 80 00 20 */	blr 
.endfn extend8to16__9JASPlayerFUc

.fn pitchToCent__9JASPlayerFff, global
/* 8009C5D0 00099510  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009C5D4 00099514  7C 08 02 A6 */	mflr r0
/* 8009C5D8 00099518  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009C5DC 0009951C  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 8009C5E0 00099520  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 8009C5E4 00099524  C0 02 89 B8 */	lfs f0, lbl_80516D18@sda21(r2)
/* 8009C5E8 00099528  3C 00 43 30 */	lis r0, 0x4330
/* 8009C5EC 0009952C  90 01 00 10 */	stw r0, 0x10(r1)
/* 8009C5F0 00099530  EC 20 00 72 */	fmuls f1, f0, f1
/* 8009C5F4 00099534  C8 62 89 C8 */	lfd f3, lbl_80516D28@sda21(r2)
/* 8009C5F8 00099538  C0 02 89 BC */	lfs f0, lbl_80516D1C@sda21(r2)
/* 8009C5FC 0009953C  EC 41 00 B2 */	fmuls f2, f1, f2
/* 8009C600 00099540  FC 20 10 1E */	fctiwz f1, f2
/* 8009C604 00099544  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 8009C608 00099548  D8 21 00 08 */	stfd f1, 8(r1)
/* 8009C60C 0009954C  80 61 00 0C */	lwz r3, 0xc(r1)
/* 8009C610 00099550  7C 60 07 34 */	extsh r0, r3
/* 8009C614 00099554  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009C618 00099558  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009C61C 0009955C  C8 21 00 10 */	lfd f1, 0x10(r1)
/* 8009C620 00099560  EC 21 18 28 */	fsubs f1, f1, f3
/* 8009C624 00099564  EF E2 08 28 */	fsubs f31, f2, f1
/* 8009C628 00099568  40 80 00 18 */	bge .L_8009C640
/* 8009C62C 0009956C  FC 00 F8 00 */	fcmpu cr0, f0, f31
/* 8009C630 00099570  41 82 00 10 */	beq .L_8009C640
/* 8009C634 00099574  C0 02 89 C0 */	lfs f0, lbl_80516D20@sda21(r2)
/* 8009C638 00099578  38 63 FF FF */	addi r3, r3, -1
/* 8009C63C 0009957C  EF FF 00 2A */	fadds f31, f31, f0
.L_8009C640:
/* 8009C640 00099580  C0 02 89 C0 */	lfs f0, lbl_80516D20@sda21(r2)
/* 8009C644 00099584  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 8009C648 00099588  4C 41 13 82 */	cror 2, 1, 2
/* 8009C64C 0009958C  40 82 00 0C */	bne .L_8009C658
/* 8009C650 00099590  EF FF 00 28 */	fsubs f31, f31, f0
/* 8009C654 00099594  38 63 00 01 */	addi r3, r3, 1
.L_8009C658:
/* 8009C658 00099598  7C 63 07 34 */	extsh r3, r3
/* 8009C65C 0009959C  38 63 00 3C */	addi r3, r3, 0x3c
/* 8009C660 000995A0  48 00 81 79 */	bl key2pitch_c5__9JASDriverFi
/* 8009C664 000995A4  C0 02 89 C4 */	lfs f0, lbl_80516D24@sda21(r2)
/* 8009C668 000995A8  3C 60 80 48 */	lis r3, s_key_table@ha
/* 8009C66C 000995AC  38 63 8A E0 */	addi r3, r3, s_key_table@l
/* 8009C670 000995B0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 8009C674 000995B4  FC 00 00 1E */	fctiwz f0, f0
/* 8009C678 000995B8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8009C67C 000995BC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009C680 000995C0  54 00 13 BA */	rlwinm r0, r0, 2, 0xe, 0x1d
/* 8009C684 000995C4  7C 03 04 2E */	lfsx f0, r3, r0
/* 8009C688 000995C8  EC 20 00 72 */	fmuls f1, f0, f1
/* 8009C68C 000995CC  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 8009C690 000995D0  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009C694 000995D4  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 8009C698 000995D8  7C 08 03 A6 */	mtlr r0
/* 8009C69C 000995DC  38 21 00 30 */	addi r1, r1, 0x30
/* 8009C6A0 000995E0  4E 80 00 20 */	blr 
.endfn pitchToCent__9JASPlayerFff

.fn getRandomS32__9JASPlayerFv, global
/* 8009C6A4 000995E4  88 0D 8A 64 */	lbz r0, init$664@sda21(r13)
/* 8009C6A8 000995E8  7C 00 07 75 */	extsb. r0, r0
/* 8009C6AC 000995EC  40 82 00 14 */	bne .L_8009C6C0
/* 8009C6B0 000995F0  38 60 10 00 */	li r3, 0x1000
/* 8009C6B4 000995F4  38 00 00 01 */	li r0, 1
/* 8009C6B8 000995F8  90 6D 8A 60 */	stw r3, sV0$663@sda21(r13)
/* 8009C6BC 000995FC  98 0D 8A 64 */	stb r0, init$664@sda21(r13)
.L_8009C6C0:
/* 8009C6C0 00099600  88 0D 8A 6C */	lbz r0, init$667@sda21(r13)
/* 8009C6C4 00099604  7C 00 07 75 */	extsb. r0, r0
/* 8009C6C8 00099608  40 82 00 14 */	bne .L_8009C6DC
/* 8009C6CC 0009960C  38 60 55 55 */	li r3, 0x5555
/* 8009C6D0 00099610  38 00 00 01 */	li r0, 1
/* 8009C6D4 00099614  90 6D 8A 68 */	stw r3, sV1$666@sda21(r13)
/* 8009C6D8 00099618  98 0D 8A 6C */	stb r0, init$667@sda21(r13)
.L_8009C6DC:
/* 8009C6DC 0009961C  3C 60 13 58 */	lis r3, 0x13579BDE@ha
/* 8009C6E0 00099620  80 8D 8A 60 */	lwz r4, sV0$663@sda21(r13)
/* 8009C6E4 00099624  38 03 9B DE */	addi r0, r3, 0x13579BDE@l
/* 8009C6E8 00099628  80 AD 8A 68 */	lwz r5, sV1$666@sda21(r13)
/* 8009C6EC 0009962C  3C 60 98 76 */	lis r3, 0x98765432@ha
/* 8009C6F0 00099630  38 63 54 32 */	addi r3, r3, 0x98765432@l
/* 8009C6F4 00099634  90 AD 8A 60 */	stw r5, sV0$663@sda21(r13)
/* 8009C6F8 00099638  7C 04 01 D6 */	mullw r0, r4, r0
/* 8009C6FC 0009963C  7C 65 19 D6 */	mullw r3, r5, r3
/* 8009C700 00099640  7C 00 26 70 */	srawi r0, r0, 4
/* 8009C704 00099644  7C 63 02 14 */	add r3, r3, r0
/* 8009C708 00099648  38 63 00 01 */	addi r3, r3, 1
/* 8009C70C 0009964C  90 6D 8A 68 */	stw r3, sV1$666@sda21(r13)
/* 8009C710 00099650  4E 80 00 20 */	blr 
.endfn getRandomS32__9JASPlayerFv
