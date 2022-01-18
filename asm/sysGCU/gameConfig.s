.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_gameConfig_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_8049A428
lbl_8049A428:
	.4byte 0x67616D65
	.4byte 0x436F6E66
	.4byte 0x69670000
	.4byte 0x47616D65
	.4byte 0x436F6E66
	.4byte 0x69670000
	.4byte 0x67616D65
	.4byte 0x5072696E
	.4byte 0x74000000
	.4byte 0x6F676177
	.4byte 0x61507269
	.4byte 0x6E740000
	.4byte 0x7368696D
	.4byte 0x697A7550
	.4byte 0x72696E74
	.4byte 0x00000000
	.4byte 0x79616D61
	.4byte 0x73686974
	.4byte 0x61507269
	.4byte 0x6E740000
	.4byte 0x6B616E64
	.4byte 0x6F507269
	.4byte 0x6E740000
	.4byte 0x6E697368
	.4byte 0x696D7572
	.4byte 0x61507269
	.4byte 0x6E740000
	.4byte 0x65626973
	.4byte 0x61776150
	.4byte 0x72696E74
	.4byte 0x00000000
	.4byte 0x6D6F7269
	.4byte 0x6D757261
	.4byte 0x5072696E
	.4byte 0x74000000
	.4byte 0x6B6F6E6F
	.4byte 0x5072696E
	.4byte 0x74000000
	.4byte 0x66756A69
	.4byte 0x6E6F5072
	.4byte 0x696E7400
	.4byte 0x70736F75
	.4byte 0x6E645072
	.4byte 0x696E7400
	.4byte 0x73686F72
	.4byte 0x74437574
	.4byte 0x55700000
	.4byte 0x73686F72
	.4byte 0x74437574
	.4byte 0x446F776E
	.4byte 0x00000000
	.4byte 0x73686F72
	.4byte 0x74437574
	.4byte 0x4C656674
	.4byte 0x00000000
	.4byte 0x73686F72
	.4byte 0x74437574
	.4byte 0x52696768
	.4byte 0x74000000
	.4byte 0x616C6C6F
	.4byte 0x63416C6C
	.4byte 0x456E656D
	.4byte 0x79000000
	.4byte 0x6D617070
	.4byte 0x61727473
	.4byte 0x5F706174
	.4byte 0x68000000
	.4byte 0x7075626C
	.4byte 0x69636974
	.4byte 0x79000000
	.4byte 0x70656C6C
	.4byte 0x65744D75
	.4byte 0x6C74694C
	.4byte 0x616E6700
	.4byte 0x76734465
	.4byte 0x61746854
	.4byte 0x79706500
	.4byte 0x45337665
	.4byte 0x7273696F
	.4byte 0x6E000000
	.4byte 0x6D756B6B
	.4byte 0x695F6368
	.4byte 0x65727279
	.4byte 0x00000000
	.4byte 0x6D617269
	.4byte 0x6F436C75
	.4byte 0x62446576
	.4byte 0x656C6F70
	.4byte 0x00000000
	.4byte 0x68656170
	.4byte 0x53746174
	.4byte 0x75735072
	.4byte 0x696E7400
	.4byte 0x68656170
	.4byte 0x46726565
	.4byte 0x53697A65
	.4byte 0x00000000
	.4byte 0x62617365
	.4byte 0x47616D65
	.4byte 0x4E657743
	.4byte 0x6865636B
	.4byte 0x00000000
	.4byte 0x4B466573
	.4byte 0x56657273
	.4byte 0x696F6E00
	.4byte 0x6E696E74
	.4byte 0x656E646F
	.4byte 0x56657273
	.4byte 0x696F6E00
	.4byte 0x6C616E67
	.4byte 0x75616765
	.4byte 0x00000000
	.4byte 0x6175746F
	.4byte 0x73617665
	.4byte 0x4F666600
	.4byte 0x76734465
	.4byte 0x62756753
	.4byte 0x656C6563
	.4byte 0x74506174
	.4byte 0x7465726E
	.4byte 0x00000000
	.4byte 0x00000000

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q34Game10GameConfig5Parms
__vt__Q34Game10GameConfig5Parms:
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game10GameConfig5ParmsFv
	.4byte getChildCount__5CNodeFv

.section .bss  # 0x804EFC20 - 0x8051467C
.global gGameConfig__4Game
gGameConfig__4Game:
	.skip 0x27C

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80520710
lbl_80520710:
	.4byte 0x00000000
.global lbl_80520714
lbl_80520714:
	.4byte 0x5072696E
	.4byte 0x74000000
.global lbl_8052071C
lbl_8052071C:
	.4byte 0x41490000
.global lbl_80520720
lbl_80520720:
	.4byte 0x74696D65
	.4byte 0x72730000
.global lbl_80520728
lbl_80520728:
	.4byte 0x76735465
	.4byte 0x73740000
.global lbl_80520730
lbl_80520730:
	.4byte 0x76734869
	.4byte 0x62610000
.global lbl_80520738
lbl_80520738:
	.4byte 0x76735900
.global lbl_8052073C
lbl_8052073C:
	.4byte 0x76734669
	.4byte 0x666F0000
.global lbl_80520744
lbl_80520744:
	.4byte 0x656E6700
.global lbl_80520748
lbl_80520748:
	.4byte 0x66726100
.global lbl_8052074C
lbl_8052074C:
	.4byte 0x67657200
.global lbl_80520750
lbl_80520750:
	.4byte 0x686F6C00
.global lbl_80520754
lbl_80520754:
	.4byte 0x69746100
.global lbl_80520758
lbl_80520758:
	.4byte 0x6A706E00
.global lbl_8052075C
lbl_8052075C:
	.4byte 0x73706100

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q24Game10GameConfigFv
__ct__Q24Game10GameConfigFv:
/* 80432170 0042F0B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80432174 0042F0B4  7C 08 02 A6 */	mflr r0
/* 80432178 0042F0B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8043217C 0042F0BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80432180 0042F0C0  7C 7F 1B 78 */	mr r31, r3
/* 80432184 0042F0C4  48 00 01 8D */	bl __ct__Q34Game10GameConfig5ParmsFv
/* 80432188 0042F0C8  38 C0 00 00 */	li r6, 0
/* 8043218C 0042F0CC  38 A0 FF FF */	li r5, -1
/* 80432190 0042F0D0  90 DF 00 28 */	stw r6, 0x28(r31)
/* 80432194 0042F0D4  38 80 00 01 */	li r4, 1
/* 80432198 0042F0D8  38 02 23 B0 */	addi r0, r2, lbl_80520710@sda21
/* 8043219C 0042F0DC  7F E3 FB 78 */	mr r3, r31
/* 804321A0 0042F0E0  90 DF 00 38 */	stw r6, 0x38(r31)
/* 804321A4 0042F0E4  90 DF 00 48 */	stw r6, 0x48(r31)
/* 804321A8 0042F0E8  90 DF 00 58 */	stw r6, 0x58(r31)
/* 804321AC 0042F0EC  90 DF 00 68 */	stw r6, 0x68(r31)
/* 804321B0 0042F0F0  90 DF 00 78 */	stw r6, 0x78(r31)
/* 804321B4 0042F0F4  90 DF 00 88 */	stw r6, 0x88(r31)
/* 804321B8 0042F0F8  90 DF 00 A8 */	stw r6, 0xa8(r31)
/* 804321BC 0042F0FC  90 DF 00 98 */	stw r6, 0x98(r31)
/* 804321C0 0042F100  90 DF 00 D8 */	stw r6, 0xd8(r31)
/* 804321C4 0042F104  90 BF 00 E8 */	stw r5, 0xe8(r31)
/* 804321C8 0042F108  90 BF 00 F8 */	stw r5, 0xf8(r31)
/* 804321CC 0042F10C  90 BF 01 08 */	stw r5, 0x108(r31)
/* 804321D0 0042F110  90 BF 01 18 */	stw r5, 0x118(r31)
/* 804321D4 0042F114  90 DF 01 28 */	stw r6, 0x128(r31)
/* 804321D8 0042F118  90 DF 01 68 */	stw r6, 0x168(r31)
/* 804321DC 0042F11C  90 DF 01 78 */	stw r6, 0x178(r31)
/* 804321E0 0042F120  90 DF 01 D8 */	stw r6, 0x1d8(r31)
/* 804321E4 0042F124  90 DF 01 E8 */	stw r6, 0x1e8(r31)
/* 804321E8 0042F128  90 DF 01 F8 */	stw r6, 0x1f8(r31)
/* 804321EC 0042F12C  90 9F 01 48 */	stw r4, 0x148(r31)
/* 804321F0 0042F130  90 1F 01 38 */	stw r0, 0x138(r31)
/* 804321F4 0042F134  90 9F 01 58 */	stw r4, 0x158(r31)
/* 804321F8 0042F138  90 DF 01 88 */	stw r6, 0x188(r31)
/* 804321FC 0042F13C  90 DF 02 58 */	stw r6, 0x258(r31)
/* 80432200 0042F140  90 DF 00 28 */	stw r6, 0x28(r31)
/* 80432204 0042F144  90 DF 00 38 */	stw r6, 0x38(r31)
/* 80432208 0042F148  90 DF 00 48 */	stw r6, 0x48(r31)
/* 8043220C 0042F14C  90 DF 00 58 */	stw r6, 0x58(r31)
/* 80432210 0042F150  90 DF 00 68 */	stw r6, 0x68(r31)
/* 80432214 0042F154  90 DF 00 78 */	stw r6, 0x78(r31)
/* 80432218 0042F158  90 DF 00 88 */	stw r6, 0x88(r31)
/* 8043221C 0042F15C  90 DF 00 A8 */	stw r6, 0xa8(r31)
/* 80432220 0042F160  90 DF 00 98 */	stw r6, 0x98(r31)
/* 80432224 0042F164  90 DF 00 D8 */	stw r6, 0xd8(r31)
/* 80432228 0042F168  90 BF 00 E8 */	stw r5, 0xe8(r31)
/* 8043222C 0042F16C  90 BF 00 F8 */	stw r5, 0xf8(r31)
/* 80432230 0042F170  90 BF 01 08 */	stw r5, 0x108(r31)
/* 80432234 0042F174  90 BF 01 18 */	stw r5, 0x118(r31)
/* 80432238 0042F178  90 DF 01 28 */	stw r6, 0x128(r31)
/* 8043223C 0042F17C  90 DF 01 68 */	stw r6, 0x168(r31)
/* 80432240 0042F180  90 DF 01 C8 */	stw r6, 0x1c8(r31)
/* 80432244 0042F184  90 DF 01 78 */	stw r6, 0x178(r31)
/* 80432248 0042F188  90 DF 01 D8 */	stw r6, 0x1d8(r31)
/* 8043224C 0042F18C  90 DF 01 E8 */	stw r6, 0x1e8(r31)
/* 80432250 0042F190  90 DF 01 F8 */	stw r6, 0x1f8(r31)
/* 80432254 0042F194  90 9F 01 48 */	stw r4, 0x148(r31)
/* 80432258 0042F198  90 1F 01 38 */	stw r0, 0x138(r31)
/* 8043225C 0042F19C  90 1F 02 48 */	stw r0, 0x248(r31)
/* 80432260 0042F1A0  90 9F 01 58 */	stw r4, 0x158(r31)
/* 80432264 0042F1A4  90 DF 01 88 */	stw r6, 0x188(r31)
/* 80432268 0042F1A8  90 9F 02 08 */	stw r4, 0x208(r31)
/* 8043226C 0042F1AC  90 DF 02 28 */	stw r6, 0x228(r31)
/* 80432270 0042F1B0  90 DF 02 38 */	stw r6, 0x238(r31)
/* 80432274 0042F1B4  90 9F 01 98 */	stw r4, 0x198(r31)
/* 80432278 0042F1B8  90 DF 01 A8 */	stw r6, 0x1a8(r31)
/* 8043227C 0042F1BC  90 DF 01 B8 */	stw r6, 0x1b8(r31)
/* 80432280 0042F1C0  90 DF 02 18 */	stw r6, 0x218(r31)
/* 80432284 0042F1C4  90 DF 02 68 */	stw r6, 0x268(r31)
/* 80432288 0042F1C8  90 DF 02 78 */	stw r6, 0x278(r31)
/* 8043228C 0042F1CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80432290 0042F1D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80432294 0042F1D4  7C 08 03 A6 */	mtlr r0
/* 80432298 0042F1D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8043229C 0042F1DC  4E 80 00 20 */	blr 

.global __dt__Q34Game10GameConfig5ParmsFv
__dt__Q34Game10GameConfig5ParmsFv:
/* 804322A0 0042F1E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804322A4 0042F1E4  7C 08 02 A6 */	mflr r0
/* 804322A8 0042F1E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 804322AC 0042F1EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804322B0 0042F1F0  7C 9F 23 78 */	mr r31, r4
/* 804322B4 0042F1F4  93 C1 00 08 */	stw r30, 8(r1)
/* 804322B8 0042F1F8  7C 7E 1B 79 */	or. r30, r3, r3
/* 804322BC 0042F1FC  41 82 00 38 */	beq lbl_804322F4
/* 804322C0 0042F200  3C 80 80 4F */	lis r4, __vt__Q34Game10GameConfig5Parms@ha
/* 804322C4 0042F204  38 04 C3 A8 */	addi r0, r4, __vt__Q34Game10GameConfig5Parms@l
/* 804322C8 0042F208  90 1E 00 00 */	stw r0, 0(r30)
/* 804322CC 0042F20C  41 82 00 18 */	beq lbl_804322E4
/* 804322D0 0042F210  3C A0 80 4B */	lis r5, __vt__13TagParameters@ha
/* 804322D4 0042F214  38 80 00 00 */	li r4, 0
/* 804322D8 0042F218  38 05 5B 10 */	addi r0, r5, __vt__13TagParameters@l
/* 804322DC 0042F21C  90 1E 00 00 */	stw r0, 0(r30)
/* 804322E0 0042F220  4B FD F2 A9 */	bl __dt__5CNodeFv
lbl_804322E4:
/* 804322E4 0042F224  7F E0 07 35 */	extsh. r0, r31
/* 804322E8 0042F228  40 81 00 0C */	ble lbl_804322F4
/* 804322EC 0042F22C  7F C3 F3 78 */	mr r3, r30
/* 804322F0 0042F230  4B BF 1D C5 */	bl __dl__FPv
lbl_804322F4:
/* 804322F4 0042F234  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804322F8 0042F238  7F C3 F3 78 */	mr r3, r30
/* 804322FC 0042F23C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80432300 0042F240  83 C1 00 08 */	lwz r30, 8(r1)
/* 80432304 0042F244  7C 08 03 A6 */	mtlr r0
/* 80432308 0042F248  38 21 00 10 */	addi r1, r1, 0x10
/* 8043230C 0042F24C  4E 80 00 20 */	blr 

.global __ct__Q34Game10GameConfig5ParmsFv
__ct__Q34Game10GameConfig5ParmsFv:
/* 80432310 0042F250  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80432314 0042F254  7C 08 02 A6 */	mflr r0
/* 80432318 0042F258  3C 80 80 4A */	lis r4, lbl_8049A428@ha
/* 8043231C 0042F25C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80432320 0042F260  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80432324 0042F264  3B E4 A4 28 */	addi r31, r4, lbl_8049A428@l
/* 80432328 0042F268  38 9F 00 0C */	addi r4, r31, 0xc
/* 8043232C 0042F26C  93 C1 00 08 */	stw r30, 8(r1)
/* 80432330 0042F270  7C 7E 1B 78 */	mr r30, r3
/* 80432334 0042F274  4B FE 9D 15 */	bl __ct__13TagParametersFPc
/* 80432338 0042F278  3C 60 80 4F */	lis r3, __vt__Q34Game10GameConfig5Parms@ha
/* 8043233C 0042F27C  7F C4 F3 78 */	mr r4, r30
/* 80432340 0042F280  38 03 C3 A8 */	addi r0, r3, __vt__Q34Game10GameConfig5Parms@l
/* 80432344 0042F284  38 7E 00 1C */	addi r3, r30, 0x1c
/* 80432348 0042F288  90 1E 00 00 */	stw r0, 0(r30)
/* 8043234C 0042F28C  38 BF 00 18 */	addi r5, r31, 0x18
/* 80432350 0042F290  4B FE 9D 4D */	bl __ct__7TagParmFP13TagParametersPc
/* 80432354 0042F294  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432358 0042F298  7F C4 F3 78 */	mr r4, r30
/* 8043235C 0042F29C  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432360 0042F2A0  38 7E 00 2C */	addi r3, r30, 0x2c
/* 80432364 0042F2A4  90 1E 00 1C */	stw r0, 0x1c(r30)
/* 80432368 0042F2A8  38 A2 23 B4 */	addi r5, r2, lbl_80520714@sda21
/* 8043236C 0042F2AC  4B FE 9D 31 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432370 0042F2B0  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432374 0042F2B4  7F C4 F3 78 */	mr r4, r30
/* 80432378 0042F2B8  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 8043237C 0042F2BC  38 7E 00 3C */	addi r3, r30, 0x3c
/* 80432380 0042F2C0  90 1E 00 2C */	stw r0, 0x2c(r30)
/* 80432384 0042F2C4  38 BF 00 24 */	addi r5, r31, 0x24
/* 80432388 0042F2C8  4B FE 9D 15 */	bl __ct__7TagParmFP13TagParametersPc
/* 8043238C 0042F2CC  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432390 0042F2D0  7F C4 F3 78 */	mr r4, r30
/* 80432394 0042F2D4  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432398 0042F2D8  38 7E 00 4C */	addi r3, r30, 0x4c
/* 8043239C 0042F2DC  90 1E 00 3C */	stw r0, 0x3c(r30)
/* 804323A0 0042F2E0  38 BF 00 30 */	addi r5, r31, 0x30
/* 804323A4 0042F2E4  4B FE 9C F9 */	bl __ct__7TagParmFP13TagParametersPc
/* 804323A8 0042F2E8  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804323AC 0042F2EC  7F C4 F3 78 */	mr r4, r30
/* 804323B0 0042F2F0  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804323B4 0042F2F4  38 7E 00 5C */	addi r3, r30, 0x5c
/* 804323B8 0042F2F8  90 1E 00 4C */	stw r0, 0x4c(r30)
/* 804323BC 0042F2FC  38 BF 00 40 */	addi r5, r31, 0x40
/* 804323C0 0042F300  4B FE 9C DD */	bl __ct__7TagParmFP13TagParametersPc
/* 804323C4 0042F304  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804323C8 0042F308  7F C4 F3 78 */	mr r4, r30
/* 804323CC 0042F30C  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804323D0 0042F310  38 7E 00 6C */	addi r3, r30, 0x6c
/* 804323D4 0042F314  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 804323D8 0042F318  38 BF 00 50 */	addi r5, r31, 0x50
/* 804323DC 0042F31C  4B FE 9C C1 */	bl __ct__7TagParmFP13TagParametersPc
/* 804323E0 0042F320  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804323E4 0042F324  7F C4 F3 78 */	mr r4, r30
/* 804323E8 0042F328  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804323EC 0042F32C  38 7E 00 7C */	addi r3, r30, 0x7c
/* 804323F0 0042F330  90 1E 00 6C */	stw r0, 0x6c(r30)
/* 804323F4 0042F334  38 BF 00 5C */	addi r5, r31, 0x5c
/* 804323F8 0042F338  4B FE 9C A5 */	bl __ct__7TagParmFP13TagParametersPc
/* 804323FC 0042F33C  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432400 0042F340  7F C4 F3 78 */	mr r4, r30
/* 80432404 0042F344  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432408 0042F348  38 7E 00 8C */	addi r3, r30, 0x8c
/* 8043240C 0042F34C  90 1E 00 7C */	stw r0, 0x7c(r30)
/* 80432410 0042F350  38 BF 00 6C */	addi r5, r31, 0x6c
/* 80432414 0042F354  4B FE 9C 89 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432418 0042F358  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 8043241C 0042F35C  7F C4 F3 78 */	mr r4, r30
/* 80432420 0042F360  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432424 0042F364  38 7E 00 9C */	addi r3, r30, 0x9c
/* 80432428 0042F368  90 1E 00 8C */	stw r0, 0x8c(r30)
/* 8043242C 0042F36C  38 BF 00 7C */	addi r5, r31, 0x7c
/* 80432430 0042F370  4B FE 9C 6D */	bl __ct__7TagParmFP13TagParametersPc
/* 80432434 0042F374  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432438 0042F378  7F C4 F3 78 */	mr r4, r30
/* 8043243C 0042F37C  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432440 0042F380  38 7E 00 AC */	addi r3, r30, 0xac
/* 80432444 0042F384  90 1E 00 9C */	stw r0, 0x9c(r30)
/* 80432448 0042F388  38 BF 00 8C */	addi r5, r31, 0x8c
/* 8043244C 0042F38C  4B FE 9C 51 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432450 0042F390  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432454 0042F394  7F C4 F3 78 */	mr r4, r30
/* 80432458 0042F398  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 8043245C 0042F39C  38 7E 00 BC */	addi r3, r30, 0xbc
/* 80432460 0042F3A0  90 1E 00 AC */	stw r0, 0xac(r30)
/* 80432464 0042F3A4  38 BF 00 98 */	addi r5, r31, 0x98
/* 80432468 0042F3A8  4B FE 9C 35 */	bl __ct__7TagParmFP13TagParametersPc
/* 8043246C 0042F3AC  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432470 0042F3B0  7F C4 F3 78 */	mr r4, r30
/* 80432474 0042F3B4  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432478 0042F3B8  38 7E 00 CC */	addi r3, r30, 0xcc
/* 8043247C 0042F3BC  90 1E 00 BC */	stw r0, 0xbc(r30)
/* 80432480 0042F3C0  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 80432484 0042F3C4  4B FE 9C 19 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432488 0042F3C8  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 8043248C 0042F3CC  7F C4 F3 78 */	mr r4, r30
/* 80432490 0042F3D0  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432494 0042F3D4  38 7E 00 DC */	addi r3, r30, 0xdc
/* 80432498 0042F3D8  90 1E 00 CC */	stw r0, 0xcc(r30)
/* 8043249C 0042F3DC  38 BF 00 B0 */	addi r5, r31, 0xb0
/* 804324A0 0042F3E0  4B FE 9B FD */	bl __ct__7TagParmFP13TagParametersPc
/* 804324A4 0042F3E4  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804324A8 0042F3E8  7F C4 F3 78 */	mr r4, r30
/* 804324AC 0042F3EC  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804324B0 0042F3F0  38 7E 00 EC */	addi r3, r30, 0xec
/* 804324B4 0042F3F4  90 1E 00 DC */	stw r0, 0xdc(r30)
/* 804324B8 0042F3F8  38 BF 00 BC */	addi r5, r31, 0xbc
/* 804324BC 0042F3FC  4B FE 9B E1 */	bl __ct__7TagParmFP13TagParametersPc
/* 804324C0 0042F400  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804324C4 0042F404  7F C4 F3 78 */	mr r4, r30
/* 804324C8 0042F408  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804324CC 0042F40C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 804324D0 0042F410  90 1E 00 EC */	stw r0, 0xec(r30)
/* 804324D4 0042F414  38 BF 00 CC */	addi r5, r31, 0xcc
/* 804324D8 0042F418  4B FE 9B C5 */	bl __ct__7TagParmFP13TagParametersPc
/* 804324DC 0042F41C  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804324E0 0042F420  7F C4 F3 78 */	mr r4, r30
/* 804324E4 0042F424  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804324E8 0042F428  38 7E 01 0C */	addi r3, r30, 0x10c
/* 804324EC 0042F42C  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 804324F0 0042F430  38 BF 00 DC */	addi r5, r31, 0xdc
/* 804324F4 0042F434  4B FE 9B A9 */	bl __ct__7TagParmFP13TagParametersPc
/* 804324F8 0042F438  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804324FC 0042F43C  7F C4 F3 78 */	mr r4, r30
/* 80432500 0042F440  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432504 0042F444  38 7E 01 1C */	addi r3, r30, 0x11c
/* 80432508 0042F448  90 1E 01 0C */	stw r0, 0x10c(r30)
/* 8043250C 0042F44C  38 BF 00 EC */	addi r5, r31, 0xec
/* 80432510 0042F450  4B FE 9B 8D */	bl __ct__7TagParmFP13TagParametersPc
/* 80432514 0042F454  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432518 0042F458  7F C4 F3 78 */	mr r4, r30
/* 8043251C 0042F45C  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432520 0042F460  38 7E 01 2C */	addi r3, r30, 0x12c
/* 80432524 0042F464  90 1E 01 1C */	stw r0, 0x11c(r30)
/* 80432528 0042F468  38 BF 00 FC */	addi r5, r31, 0xfc
/* 8043252C 0042F46C  4B FE 9A 69 */	bl __ct__13StringTagParmFP13TagParametersPc
/* 80432530 0042F470  7F C4 F3 78 */	mr r4, r30
/* 80432534 0042F474  38 7E 01 3C */	addi r3, r30, 0x13c
/* 80432538 0042F478  38 BF 01 0C */	addi r5, r31, 0x10c
/* 8043253C 0042F47C  4B FE 9B 61 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432540 0042F480  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432544 0042F484  7F C4 F3 78 */	mr r4, r30
/* 80432548 0042F488  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 8043254C 0042F48C  38 7E 01 4C */	addi r3, r30, 0x14c
/* 80432550 0042F490  90 1E 01 3C */	stw r0, 0x13c(r30)
/* 80432554 0042F494  38 BF 01 18 */	addi r5, r31, 0x118
/* 80432558 0042F498  4B FE 9B 45 */	bl __ct__7TagParmFP13TagParametersPc
/* 8043255C 0042F49C  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432560 0042F4A0  7F C4 F3 78 */	mr r4, r30
/* 80432564 0042F4A4  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432568 0042F4A8  38 7E 01 5C */	addi r3, r30, 0x15c
/* 8043256C 0042F4AC  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 80432570 0042F4B0  38 A2 23 BC */	addi r5, r2, lbl_8052071C@sda21
/* 80432574 0042F4B4  4B FE 9B 29 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432578 0042F4B8  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 8043257C 0042F4BC  7F C4 F3 78 */	mr r4, r30
/* 80432580 0042F4C0  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432584 0042F4C4  38 7E 01 6C */	addi r3, r30, 0x16c
/* 80432588 0042F4C8  90 1E 01 5C */	stw r0, 0x15c(r30)
/* 8043258C 0042F4CC  38 A2 23 C0 */	addi r5, r2, lbl_80520720@sda21
/* 80432590 0042F4D0  4B FE 9B 0D */	bl __ct__7TagParmFP13TagParametersPc
/* 80432594 0042F4D4  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432598 0042F4D8  7F C4 F3 78 */	mr r4, r30
/* 8043259C 0042F4DC  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804325A0 0042F4E0  38 7E 01 7C */	addi r3, r30, 0x17c
/* 804325A4 0042F4E4  90 1E 01 6C */	stw r0, 0x16c(r30)
/* 804325A8 0042F4E8  38 A2 23 C8 */	addi r5, r2, lbl_80520728@sda21
/* 804325AC 0042F4EC  4B FE 9A F1 */	bl __ct__7TagParmFP13TagParametersPc
/* 804325B0 0042F4F0  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804325B4 0042F4F4  7F C4 F3 78 */	mr r4, r30
/* 804325B8 0042F4F8  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804325BC 0042F4FC  38 7E 01 8C */	addi r3, r30, 0x18c
/* 804325C0 0042F500  90 1E 01 7C */	stw r0, 0x17c(r30)
/* 804325C4 0042F504  38 BF 01 28 */	addi r5, r31, 0x128
/* 804325C8 0042F508  4B FE 9A D5 */	bl __ct__7TagParmFP13TagParametersPc
/* 804325CC 0042F50C  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804325D0 0042F510  7F C4 F3 78 */	mr r4, r30
/* 804325D4 0042F514  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804325D8 0042F518  38 7E 01 9C */	addi r3, r30, 0x19c
/* 804325DC 0042F51C  90 1E 01 8C */	stw r0, 0x18c(r30)
/* 804325E0 0042F520  38 A2 23 D0 */	addi r5, r2, lbl_80520730@sda21
/* 804325E4 0042F524  4B FE 9A B9 */	bl __ct__7TagParmFP13TagParametersPc
/* 804325E8 0042F528  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804325EC 0042F52C  7F C4 F3 78 */	mr r4, r30
/* 804325F0 0042F530  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804325F4 0042F534  38 7E 01 AC */	addi r3, r30, 0x1ac
/* 804325F8 0042F538  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 804325FC 0042F53C  38 A2 23 D8 */	addi r5, r2, lbl_80520738@sda21
/* 80432600 0042F540  4B FE 9A 9D */	bl __ct__7TagParmFP13TagParametersPc
/* 80432604 0042F544  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432608 0042F548  7F C4 F3 78 */	mr r4, r30
/* 8043260C 0042F54C  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432610 0042F550  38 7E 01 BC */	addi r3, r30, 0x1bc
/* 80432614 0042F554  90 1E 01 AC */	stw r0, 0x1ac(r30)
/* 80432618 0042F558  38 BF 01 34 */	addi r5, r31, 0x134
/* 8043261C 0042F55C  4B FE 9A 81 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432620 0042F560  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432624 0042F564  7F C4 F3 78 */	mr r4, r30
/* 80432628 0042F568  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 8043262C 0042F56C  38 7E 01 CC */	addi r3, r30, 0x1cc
/* 80432630 0042F570  90 1E 01 BC */	stw r0, 0x1bc(r30)
/* 80432634 0042F574  38 BF 01 40 */	addi r5, r31, 0x140
/* 80432638 0042F578  4B FE 9A 65 */	bl __ct__7TagParmFP13TagParametersPc
/* 8043263C 0042F57C  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432640 0042F580  7F C4 F3 78 */	mr r4, r30
/* 80432644 0042F584  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432648 0042F588  38 7E 01 DC */	addi r3, r30, 0x1dc
/* 8043264C 0042F58C  90 1E 01 CC */	stw r0, 0x1cc(r30)
/* 80432650 0042F590  38 BF 01 50 */	addi r5, r31, 0x150
/* 80432654 0042F594  4B FE 9A 49 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432658 0042F598  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 8043265C 0042F59C  7F C4 F3 78 */	mr r4, r30
/* 80432660 0042F5A0  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432664 0042F5A4  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 80432668 0042F5A8  90 1E 01 DC */	stw r0, 0x1dc(r30)
/* 8043266C 0042F5AC  38 BF 01 64 */	addi r5, r31, 0x164
/* 80432670 0042F5B0  4B FE 9A 2D */	bl __ct__7TagParmFP13TagParametersPc
/* 80432674 0042F5B4  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432678 0042F5B8  7F C4 F3 78 */	mr r4, r30
/* 8043267C 0042F5BC  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432680 0042F5C0  38 7E 01 FC */	addi r3, r30, 0x1fc
/* 80432684 0042F5C4  90 1E 01 EC */	stw r0, 0x1ec(r30)
/* 80432688 0042F5C8  38 BF 01 74 */	addi r5, r31, 0x174
/* 8043268C 0042F5CC  4B FE 9A 11 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432690 0042F5D0  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432694 0042F5D4  7F C4 F3 78 */	mr r4, r30
/* 80432698 0042F5D8  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 8043269C 0042F5DC  38 7E 02 0C */	addi r3, r30, 0x20c
/* 804326A0 0042F5E0  90 1E 01 FC */	stw r0, 0x1fc(r30)
/* 804326A4 0042F5E4  38 BF 01 84 */	addi r5, r31, 0x184
/* 804326A8 0042F5E8  4B FE 99 F5 */	bl __ct__7TagParmFP13TagParametersPc
/* 804326AC 0042F5EC  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804326B0 0042F5F0  7F C4 F3 78 */	mr r4, r30
/* 804326B4 0042F5F4  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804326B8 0042F5F8  38 7E 02 1C */	addi r3, r30, 0x21c
/* 804326BC 0042F5FC  90 1E 02 0C */	stw r0, 0x20c(r30)
/* 804326C0 0042F600  38 BF 01 98 */	addi r5, r31, 0x198
/* 804326C4 0042F604  4B FE 99 D9 */	bl __ct__7TagParmFP13TagParametersPc
/* 804326C8 0042F608  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804326CC 0042F60C  7F C4 F3 78 */	mr r4, r30
/* 804326D0 0042F610  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804326D4 0042F614  38 7E 02 2C */	addi r3, r30, 0x22c
/* 804326D8 0042F618  90 1E 02 1C */	stw r0, 0x21c(r30)
/* 804326DC 0042F61C  38 BF 01 A4 */	addi r5, r31, 0x1a4
/* 804326E0 0042F620  4B FE 99 BD */	bl __ct__7TagParmFP13TagParametersPc
/* 804326E4 0042F624  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 804326E8 0042F628  7F C4 F3 78 */	mr r4, r30
/* 804326EC 0042F62C  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 804326F0 0042F630  38 7E 02 3C */	addi r3, r30, 0x23c
/* 804326F4 0042F634  90 1E 02 2C */	stw r0, 0x22c(r30)
/* 804326F8 0042F638  38 BF 01 B4 */	addi r5, r31, 0x1b4
/* 804326FC 0042F63C  4B FE 98 99 */	bl __ct__13StringTagParmFP13TagParametersPc
/* 80432700 0042F640  7F C4 F3 78 */	mr r4, r30
/* 80432704 0042F644  38 7E 02 4C */	addi r3, r30, 0x24c
/* 80432708 0042F648  38 BF 01 C0 */	addi r5, r31, 0x1c0
/* 8043270C 0042F64C  4B FE 99 91 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432710 0042F650  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432714 0042F654  7F C4 F3 78 */	mr r4, r30
/* 80432718 0042F658  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 8043271C 0042F65C  38 7E 02 5C */	addi r3, r30, 0x25c
/* 80432720 0042F660  90 1E 02 4C */	stw r0, 0x24c(r30)
/* 80432724 0042F664  38 BF 01 CC */	addi r5, r31, 0x1cc
/* 80432728 0042F668  4B FE 99 75 */	bl __ct__7TagParmFP13TagParametersPc
/* 8043272C 0042F66C  3C 60 80 4B */	lis r3, "__vt__14PrimTagParm<i>"@ha
/* 80432730 0042F670  7F C4 F3 78 */	mr r4, r30
/* 80432734 0042F674  38 03 5A E0 */	addi r0, r3, "__vt__14PrimTagParm<i>"@l
/* 80432738 0042F678  38 7E 02 6C */	addi r3, r30, 0x26c
/* 8043273C 0042F67C  90 1E 02 5C */	stw r0, 0x25c(r30)
/* 80432740 0042F680  38 A2 23 DC */	addi r5, r2, lbl_8052073C@sda21
/* 80432744 0042F684  4B FE 99 59 */	bl __ct__7TagParmFP13TagParametersPc
/* 80432748 0042F688  3C 80 80 4B */	lis r4, "__vt__14PrimTagParm<i>"@ha
/* 8043274C 0042F68C  7F C3 F3 78 */	mr r3, r30
/* 80432750 0042F690  38 04 5A E0 */	addi r0, r4, "__vt__14PrimTagParm<i>"@l
/* 80432754 0042F694  90 1E 02 6C */	stw r0, 0x26c(r30)
/* 80432758 0042F698  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043275C 0042F69C  83 C1 00 08 */	lwz r30, 8(r1)
/* 80432760 0042F6A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80432764 0042F6A4  7C 08 03 A6 */	mtlr r0
/* 80432768 0042F6A8  38 21 00 10 */	addi r1, r1, 0x10
/* 8043276C 0042F6AC  4E 80 00 20 */	blr 

.global load__Q24Game10GameConfigFPc
load__Q24Game10GameConfigFPc:
/* 80432770 0042F6B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80432774 0042F6B4  7C 08 02 A6 */	mflr r0
/* 80432778 0042F6B8  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 8043277C 0042F6BC  38 82 23 E4 */	addi r4, r2, lbl_80520744@sda21
/* 80432780 0042F6C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80432784 0042F6C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80432788 0042F6C8  3B E3 41 FC */	addi r31, r3, gGameConfig__4Game@l
/* 8043278C 0042F6CC  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80432790 0042F6D0  4B C9 7F 31 */	bl strcmp
/* 80432794 0042F6D4  2C 03 00 00 */	cmpwi r3, 0
/* 80432798 0042F6D8  40 82 00 14 */	bne lbl_804327AC
/* 8043279C 0042F6DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804327A0 0042F6E0  38 00 00 00 */	li r0, 0
/* 804327A4 0042F6E4  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 804327A8 0042F6E8  48 00 00 D8 */	b lbl_80432880
lbl_804327AC:
/* 804327AC 0042F6EC  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 804327B0 0042F6F0  38 82 23 E8 */	addi r4, r2, lbl_80520748@sda21
/* 804327B4 0042F6F4  4B C9 7F 0D */	bl strcmp
/* 804327B8 0042F6F8  2C 03 00 00 */	cmpwi r3, 0
/* 804327BC 0042F6FC  40 82 00 14 */	bne lbl_804327D0
/* 804327C0 0042F700  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804327C4 0042F704  38 00 00 01 */	li r0, 1
/* 804327C8 0042F708  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 804327CC 0042F70C  48 00 00 B4 */	b lbl_80432880
lbl_804327D0:
/* 804327D0 0042F710  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 804327D4 0042F714  38 82 23 EC */	addi r4, r2, lbl_8052074C@sda21
/* 804327D8 0042F718  4B C9 7E E9 */	bl strcmp
/* 804327DC 0042F71C  2C 03 00 00 */	cmpwi r3, 0
/* 804327E0 0042F720  40 82 00 14 */	bne lbl_804327F4
/* 804327E4 0042F724  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 804327E8 0042F728  38 00 00 02 */	li r0, 2
/* 804327EC 0042F72C  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 804327F0 0042F730  48 00 00 90 */	b lbl_80432880
lbl_804327F4:
/* 804327F4 0042F734  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 804327F8 0042F738  38 82 23 F0 */	addi r4, r2, lbl_80520750@sda21
/* 804327FC 0042F73C  4B C9 7E C5 */	bl strcmp
/* 80432800 0042F740  2C 03 00 00 */	cmpwi r3, 0
/* 80432804 0042F744  40 82 00 14 */	bne lbl_80432818
/* 80432808 0042F748  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 8043280C 0042F74C  38 00 00 00 */	li r0, 0
/* 80432810 0042F750  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 80432814 0042F754  48 00 00 6C */	b lbl_80432880
lbl_80432818:
/* 80432818 0042F758  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 8043281C 0042F75C  38 82 23 F4 */	addi r4, r2, lbl_80520754@sda21
/* 80432820 0042F760  4B C9 7E A1 */	bl strcmp
/* 80432824 0042F764  2C 03 00 00 */	cmpwi r3, 0
/* 80432828 0042F768  40 82 00 14 */	bne lbl_8043283C
/* 8043282C 0042F76C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80432830 0042F770  38 00 00 04 */	li r0, 4
/* 80432834 0042F774  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 80432838 0042F778  48 00 00 48 */	b lbl_80432880
lbl_8043283C:
/* 8043283C 0042F77C  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80432840 0042F780  38 82 23 F8 */	addi r4, r2, lbl_80520758@sda21
/* 80432844 0042F784  4B C9 7E 7D */	bl strcmp
/* 80432848 0042F788  2C 03 00 00 */	cmpwi r3, 0
/* 8043284C 0042F78C  40 82 00 14 */	bne lbl_80432860
/* 80432850 0042F790  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80432854 0042F794  38 00 00 05 */	li r0, 5
/* 80432858 0042F798  90 03 00 D4 */	stw r0, 0xd4(r3)
/* 8043285C 0042F79C  48 00 00 24 */	b lbl_80432880
lbl_80432860:
/* 80432860 0042F7A0  80 7F 02 48 */	lwz r3, 0x248(r31)
/* 80432864 0042F7A4  38 82 23 FC */	addi r4, r2, lbl_8052075C@sda21
/* 80432868 0042F7A8  4B C9 7E 59 */	bl strcmp
/* 8043286C 0042F7AC  2C 03 00 00 */	cmpwi r3, 0
/* 80432870 0042F7B0  40 82 00 10 */	bne lbl_80432880
/* 80432874 0042F7B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 80432878 0042F7B8  38 00 00 06 */	li r0, 6
/* 8043287C 0042F7BC  90 03 00 D4 */	stw r0, 0xd4(r3)
lbl_80432880:
/* 80432880 0042F7C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80432884 0042F7C4  38 60 00 00 */	li r3, 0
/* 80432888 0042F7C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8043288C 0042F7CC  7C 08 03 A6 */	mtlr r0
/* 80432890 0042F7D0  38 21 00 10 */	addi r1, r1, 0x10
/* 80432894 0042F7D4  4E 80 00 20 */	blr 

__sinit_gameConfig_cpp:
/* 80432898 0042F7D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8043289C 0042F7DC  7C 08 02 A6 */	mflr r0
/* 804328A0 0042F7E0  3C 60 80 51 */	lis r3, gGameConfig__4Game@ha
/* 804328A4 0042F7E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 804328A8 0042F7E8  38 63 41 FC */	addi r3, r3, gGameConfig__4Game@l
/* 804328AC 0042F7EC  4B FF F8 C5 */	bl __ct__Q24Game10GameConfigFv
/* 804328B0 0042F7F0  3C 80 80 43 */	lis r4, __dt__Q24Game10GameConfigFv@ha
/* 804328B4 0042F7F4  3C A0 80 4F */	lis r5, lbl_804F7C38@ha
/* 804328B8 0042F7F8  38 84 28 D4 */	addi r4, r4, __dt__Q24Game10GameConfigFv@l
/* 804328BC 0042F7FC  38 A5 7C 38 */	addi r5, r5, lbl_804F7C38@l
/* 804328C0 0042F800  4B C8 EE 41 */	bl __register_global_object
/* 804328C4 0042F804  80 01 00 14 */	lwz r0, 0x14(r1)
/* 804328C8 0042F808  7C 08 03 A6 */	mtlr r0
/* 804328CC 0042F80C  38 21 00 10 */	addi r1, r1, 0x10
/* 804328D0 0042F810  4E 80 00 20 */	blr 

.global __dt__Q24Game10GameConfigFv
__dt__Q24Game10GameConfigFv:
/* 804328D4 0042F814  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 804328D8 0042F818  7C 08 02 A6 */	mflr r0
/* 804328DC 0042F81C  90 01 00 14 */	stw r0, 0x14(r1)
/* 804328E0 0042F820  93 E1 00 0C */	stw r31, 0xc(r1)
/* 804328E4 0042F824  7C 9F 23 78 */	mr r31, r4
/* 804328E8 0042F828  93 C1 00 08 */	stw r30, 8(r1)
/* 804328EC 0042F82C  7C 7E 1B 79 */	or. r30, r3, r3
/* 804328F0 0042F830  41 82 00 3C */	beq lbl_8043292C
/* 804328F4 0042F834  41 82 00 28 */	beq lbl_8043291C
/* 804328F8 0042F838  3C 80 80 4F */	lis r4, __vt__Q34Game10GameConfig5Parms@ha
/* 804328FC 0042F83C  38 04 C3 A8 */	addi r0, r4, __vt__Q34Game10GameConfig5Parms@l
/* 80432900 0042F840  90 1E 00 00 */	stw r0, 0(r30)
/* 80432904 0042F844  41 82 00 18 */	beq lbl_8043291C
/* 80432908 0042F848  3C A0 80 4B */	lis r5, __vt__13TagParameters@ha
/* 8043290C 0042F84C  38 80 00 00 */	li r4, 0
/* 80432910 0042F850  38 05 5B 10 */	addi r0, r5, __vt__13TagParameters@l
/* 80432914 0042F854  90 1E 00 00 */	stw r0, 0(r30)
/* 80432918 0042F858  4B FD EC 71 */	bl __dt__5CNodeFv
lbl_8043291C:
/* 8043291C 0042F85C  7F E0 07 35 */	extsh. r0, r31
/* 80432920 0042F860  40 81 00 0C */	ble lbl_8043292C
/* 80432924 0042F864  7F C3 F3 78 */	mr r3, r30
/* 80432928 0042F868  4B BF 17 8D */	bl __dl__FPv
lbl_8043292C:
/* 8043292C 0042F86C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80432930 0042F870  7F C3 F3 78 */	mr r3, r30
/* 80432934 0042F874  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80432938 0042F878  83 C1 00 08 */	lwz r30, 8(r1)
/* 8043293C 0042F87C  7C 08 03 A6 */	mtlr r0
/* 80432940 0042F880  38 21 00 10 */	addi r1, r1, 0x10
/* 80432944 0042F884  4E 80 00 20 */	blr 
