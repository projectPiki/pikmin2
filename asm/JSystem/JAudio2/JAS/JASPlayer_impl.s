.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global s_key_table
s_key_table:
	.float 1.0
	.4byte 0x3F801DD2
	.4byte 0x3F803BAC
	.4byte 0x3F80598E
	.4byte 0x3F807770
	.4byte 0x3F809564
	.4byte 0x3F80B357
	.4byte 0x3F80D152
	.4byte 0x3F80EF56
	.4byte 0x3F810D5A
	.4byte 0x3F812B6F
	.4byte 0x3F814984
	.4byte 0x3F8167A1
	.4byte 0x3F8185CF
	.4byte 0x3F81A3F4
	.4byte 0x3F81C22B
	.4byte 0x3F81E069
	.4byte 0x3F81FEA8
	.4byte 0x3F821CEF
	.4byte 0x3F823B3F
	.4byte 0x3F825996
	.4byte 0x3F8277F7
	.4byte 0x3F82965F
	.4byte 0x3F82B4C8
	.4byte 0x3F82D339
	.4byte 0x3F82F1BB
	.4byte 0x3F83103D
	.4byte 0x3F832EBE
	.4byte 0x3F834D51
	.4byte 0x3F836BEC
	.4byte 0x3F838A87
	.4byte 0x3F83A92A
	.4byte 0x3F83C7D6
	.4byte 0x3F83E68A
	.4byte 0x3F840547
	.4byte 0x3F84240B
	.4byte 0x3F8442D0
	.4byte 0x3F8461A6
	.4byte 0x3F84807C
	.4byte 0x3F849F5A
	.4byte 0x3F84BE40
	.4byte 0x3F84DD2F
	.4byte 0x3F84FC1E
	.4byte 0x3F851B1E
	.4byte 0x3F853A1D
	.4byte 0x3F855925
	.4byte 0x3F857836
	.4byte 0x3F85974E
	.4byte 0x3F85B670
	.4byte 0x3F85D599
	.4byte 0x3F85F4C3
	.4byte 0x3F8613FD
	.4byte 0x3F863337
	.4byte 0x3F86527A
	.4byte 0x3F8671C5
	.4byte 0x3F869119
	.4byte 0x3F86B075
	.4byte 0x3F86CFD1
	.4byte 0x3F86EF3D
	.4byte 0x3F870EAA
	.4byte 0x3F872E1F
	.4byte 0x3F874D9C
	.4byte 0x3F876D22
	.4byte 0x3F878CB0
.global sAdsrDef__9JASPlayer
sAdsrDef__9JASPlayer:
	.4byte 0x00000000
	.float 1.0
	.4byte 0x00000000
	.4byte 0x00000000
	.float 1.0
	.4byte 0x00000000
.global sEnvelopeDef__9JASPlayer
sEnvelopeDef__9JASPlayer:
	.4byte 0x00000000
	.float 1.0
	.4byte 0x00000000
	.4byte sRelTable__9JASPlayer
	.float 1.0
	.4byte 0x00000000
.global sVibratoDef__9JASPlayer
sVibratoDef__9JASPlayer:
	.4byte 0x00000001
	.float 0.5
	.4byte sVibTable__9JASPlayer
	.4byte sVibTable__9JASPlayer
	.4byte 0x00000000
	.float 1.0
.global sTremoroDef__9JASPlayer
sTremoroDef__9JASPlayer:
	.4byte 0x00000000
	.float 0.5
	.4byte sTreTable__9JASPlayer
	.4byte sTreTable__9JASPlayer
	.4byte 0x00000000
	.float 1.0

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global CUTOFF_TO_IIR_TABLE__9JASPlayer
CUTOFF_TO_IIR_TABLE__9JASPlayer:
	.4byte 0x0F5C0A3D
	.4byte 0x46653999
	.4byte 0x103F0A28
	.4byte 0x45D73925
	.4byte 0x11220A14
	.4byte 0x454A38B0
	.4byte 0x120509FF
	.4byte 0x44BC383C
	.4byte 0x12E809EA
	.4byte 0x442E37C8
	.4byte 0x13CB09D6
	.4byte 0x43A03754
	.4byte 0x14AE09C1
	.4byte 0x431236E0
	.4byte 0x159109AC
	.4byte 0x4284366C
	.4byte 0x16740998
	.4byte 0x41F635F8
	.4byte 0x17570983
	.4byte 0x41683584
	.4byte 0x183A096E
	.4byte 0x40DA3510
	.4byte 0x191D095A
	.4byte 0x404C349C
	.4byte 0x1A000945
	.4byte 0x3FBE3427
	.4byte 0x1AE30931
	.4byte 0x3F3133B3
	.4byte 0x1BC6091C
	.4byte 0x3EA3333F
	.4byte 0x1CA90907
	.4byte 0x3E1532CB
	.4byte 0x1D8C08F3
	.4byte 0x3D873257
	.4byte 0x1E6F08DE
	.4byte 0x3CF931E3
	.4byte 0x1F5208C9
	.4byte 0x3C6B316F
	.4byte 0x203508B5
	.4byte 0x3BDD30FB
	.4byte 0x211808A0
	.4byte 0x3B4F3087
	.4byte 0x21FC088B
	.4byte 0x3AC13012
	.4byte 0x22DF0877
	.4byte 0x3A332F9E
	.4byte 0x23C20862
	.4byte 0x39A62F2A
	.4byte 0x24A5084D
	.4byte 0x39182EB6
	.4byte 0x25880839
	.4byte 0x388A2E42
	.4byte 0x266B0824
	.4byte 0x37FC2DCE
	.4byte 0x274E0810
	.4byte 0x376E2D5A
	.4byte 0x283107FB
	.4byte 0x36E02CE6
	.4byte 0x291407E6
	.4byte 0x36522C72
	.4byte 0x29F707D2
	.4byte 0x35C42BFE
	.4byte 0x2ADA07BD
	.4byte 0x35362B89
	.4byte 0x2BBD07A8
	.4byte 0x34A82B15
	.4byte 0x2CA00794
	.4byte 0x341B2AA1
	.4byte 0x2D83077F
	.4byte 0x338D2A2D
	.4byte 0x2E66076A
	.4byte 0x32FF29B9
	.4byte 0x2F490756
	.4byte 0x32712945
	.4byte 0x302C0741
	.4byte 0x31E328D1
	.4byte 0x310F072D
	.4byte 0x3155285D
	.4byte 0x31F20718
	.4byte 0x30C727E9
	.4byte 0x32D50703
	.4byte 0x30392775
	.4byte 0x33B806EF
	.4byte 0x2FAB2700
	.4byte 0x349C06DA
	.4byte 0x2F1D268C
	.4byte 0x357F06C5
	.4byte 0x2E8F2618
	.4byte 0x366206B1
	.4byte 0x2E0225A4
	.4byte 0x3745069C
	.4byte 0x2D742530
	.4byte 0x38280687
	.4byte 0x2CE624BC
	.4byte 0x390B0673
	.4byte 0x2C582448
	.4byte 0x39EE065E
	.4byte 0x2BCA23D4
	.4byte 0x3AD10649
	.4byte 0x2B3C2360
	.4byte 0x3BB40635
	.4byte 0x2AAE22EB
	.4byte 0x3C970620
	.4byte 0x2A202277
	.4byte 0x3D7A060C
	.4byte 0x29922203
	.4byte 0x3E5D05F7
	.4byte 0x2904218F
	.4byte 0x3F4005E2
	.4byte 0x2877211B
	.4byte 0x402305CE
	.4byte 0x27E920A7
	.4byte 0x410605B9
	.4byte 0x275B2033
	.4byte 0x41E905A4
	.4byte 0x26CD1FBF
	.4byte 0x42CC0590
	.4byte 0x263F1F4B
	.4byte 0x43AF057B
	.4byte 0x25B11ED7
	.4byte 0x44920566
	.4byte 0x25231E62
	.4byte 0x45750552
	.4byte 0x24951DEE
	.4byte 0x4658053D
	.4byte 0x24071D7A
	.4byte 0x473B0529
	.4byte 0x23791D06
	.4byte 0x481F0514
	.4byte 0x22EB1C92
	.4byte 0x490204FF
	.4byte 0x225E1C1E
	.4byte 0x49E504EB
	.4byte 0x21D01BAA
	.4byte 0x4AC804D6
	.4byte 0x21421B36
	.4byte 0x4BAB04C1
	.4byte 0x20B41AC2
	.4byte 0x4C8E04AD
	.4byte 0x20261A4E
	.4byte 0x4D710498
	.4byte 0x1F9819D9
	.4byte 0x4E540483
	.4byte 0x1F0A1965
	.4byte 0x4F37046F
	.4byte 0x1E7C18F1
	.4byte 0x501A045A
	.4byte 0x1DEE187D
	.4byte 0x50FD0445
	.4byte 0x1D601809
	.4byte 0x51E00431
	.4byte 0x1CD31795
	.4byte 0x52C3041C
	.4byte 0x1C451721
	.4byte 0x53A60408
	.4byte 0x1BB716AD
	.4byte 0x548903F3
	.4byte 0x1B291639
	.4byte 0x556C03DE
	.4byte 0x1A9B15C4
	.4byte 0x564F03CA
	.4byte 0x1A0D1550
	.4byte 0x573203B5
	.4byte 0x197F14DC
	.4byte 0x581503A0
	.4byte 0x18F11468
	.4byte 0x58F8038C
	.4byte 0x186313F4
	.4byte 0x59DB0377
	.4byte 0x17D51380
	.4byte 0x5ABF0362
	.4byte 0x1747130C
	.4byte 0x5BA2034E
	.4byte 0x16BA1298
	.4byte 0x5C850339
	.4byte 0x162C1224
	.4byte 0x5D680324
	.4byte 0x159E11B0
	.4byte 0x5E4B0310
	.4byte 0x1510113B
	.4byte 0x5F2E02FB
	.4byte 0x148210C7
	.4byte 0x601102E7
	.4byte 0x13F41053
	.4byte 0x60F402D2
	.4byte 0x13660FDF
	.4byte 0x61D702BD
	.4byte 0x12D80F6B
	.4byte 0x62BA02A9
	.4byte 0x124A0EF7
	.4byte 0x639D0294
	.4byte 0x11BC0E83
	.4byte 0x6480027F
	.4byte 0x112F0E0F
	.4byte 0x6563026B
	.4byte 0x10A10D9B
	.4byte 0x66460256
	.4byte 0x10130D27
	.4byte 0x67290241
	.4byte 0x0F850CB2
	.4byte 0x680C022D
	.4byte 0x0EF70C3E
	.4byte 0x68EF0218
	.4byte 0x0E690BCA
	.4byte 0x69D20204
	.4byte 0x0DDB0B56
	.4byte 0x6AB501EF
	.4byte 0x0D4D0AE2
	.4byte 0x6B9801DA
	.4byte 0x0CBF0A6E
	.4byte 0x6C7B01C6
	.4byte 0x0C3109FA
	.4byte 0x6D5F01B1
	.4byte 0x0BA30986
	.4byte 0x6E42019C
	.4byte 0x0B160912
	.4byte 0x6F250188
	.4byte 0x0A88089D
	.4byte 0x70080173
	.4byte 0x09FA0829
	.4byte 0x70EB015E
	.4byte 0x096C07B5
	.4byte 0x71CE014A
	.4byte 0x08DE0741
	.4byte 0x72B10135
	.4byte 0x085006CD
	.4byte 0x73940120
	.4byte 0x07C20659
	.4byte 0x7477010C
	.4byte 0x073405E5
	.4byte 0x755A00F7
	.4byte 0x06A60571
	.4byte 0x763D00E3
	.4byte 0x061804FD
	.4byte 0x772000CE
	.4byte 0x058B0489
	.4byte 0x780300B9
	.4byte 0x04FD0414
	.4byte 0x78E600A5
	.4byte 0x046F03A0
	.4byte 0x79C90090
	.4byte 0x03E1032C
	.4byte 0x7AAC007B
	.4byte 0x035302B8
	.4byte 0x7B8F0067
	.4byte 0x02C50244
	.4byte 0x7C720052
	.4byte 0x023701D0
	.4byte 0x7D55003D
	.4byte 0x01A9015C
	.4byte 0x7E380029
	.4byte 0x011B00E8
	.4byte 0x7F1B0014
	.4byte 0x008D0074
	.4byte 0x7FFF0000
	.4byte 0x00000000
.global sAdsTable__9JASPlayer
sAdsTable__9JASPlayer:
	.4byte 0x00000000
	.4byte 0x7FFF0000
	.4byte 0x00007FFF
	.4byte 0x00000000
	.4byte 0x0000000E
	.4byte 0x00000000
.global sRelTable__9JASPlayer
sRelTable__9JASPlayer:
	.4byte 0x0000000A
	.4byte 0x0000000F
	.4byte 0x00010000
.global sVibTable__9JASPlayer
sVibTable__9JASPlayer:
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x000C7FFF
	.4byte 0x0000000C
	.4byte 0x00000000
	.4byte 0x000CC000
	.4byte 0x0000000C
	.4byte 0x0000000D
	.4byte 0x00000001
.global sTreTable__9JASPlayer
sTreTable__9JASPlayer:
	.4byte 0x00000000
	.4byte 0x7FFF0000
	.4byte 0x00140000
	.4byte 0x00000014
	.4byte 0x80010000
	.4byte 0x00140000
	.4byte 0x00000014
	.4byte 0x7FFF000D
	.4byte 0x00000001
	.4byte 0x00000000

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global sV0$663
sV0$663:
	.skip 0x4
.global init$664
init$664:
	.skip 0x4
.global sV1$666
sV1$666:
	.skip 0x4
.global init$667
init$667:
	.skip 0x4

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80516D18
lbl_80516D18:
	.4byte 0x40800000
.global lbl_80516D1C
lbl_80516D1C:
	.4byte 0x00000000
.global lbl_80516D20
lbl_80516D20:
	.float 1.0
.global lbl_80516D24
lbl_80516D24:
	.4byte 0x42800000
.global lbl_80516D28
lbl_80516D28:
	.4byte 0x43300000
	.4byte 0x80000000

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global extend8to16__9JASPlayerFUc
extend8to16__9JASPlayerFUc:
/* 8009C5B4 000994F4  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8009C5B8 000994F8  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009C5BC 000994FC  4D 82 00 20 */	beqlr 
/* 8009C5C0 00099500  3C 63 00 01 */	addis r3, r3, 1
/* 8009C5C4 00099504  38 03 FF 00 */	addi r0, r3, -256
/* 8009C5C8 00099508  7C 03 07 34 */	extsh r3, r0
/* 8009C5CC 0009950C  4E 80 00 20 */	blr 

.global pitchToCent__9JASPlayerFff
pitchToCent__9JASPlayerFff:
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

.global getRandomS32__9JASPlayerFv
getRandomS32__9JASPlayerFv:
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
