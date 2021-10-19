.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8048A760
lbl_8048A760:
	.asciz "/enemy/data/WaterOtakara/otakara_blue_s3tc.bti"
	.skip 1
.global lbl_8048A790
lbl_8048A790:
	.4byte 0x90858349
	.4byte 0x835E834A
	.4byte 0x83898380
	.4byte 0x8356837D
	.4byte 0x836C815B
	.4byte 0x83578383
	.4byte 0x00000000
.global lbl_8048A7AC
lbl_8048A7AC:
	.asciz "WaterOtakaraMgr.cpp"
.global lbl_8048A7C0
lbl_8048A7C0:
	.asciz "P2Assert"
	.skip 3

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global "cOtakaraChangeTexName__Q34Game12WaterOtakara29@unnamed@WaterOtakaraMgr_cpp@"
"cOtakaraChangeTexName__Q34Game12WaterOtakara29@unnamed@WaterOtakaraMgr_cpp@":
	.4byte lbl_8048A760

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game12WaterOtakara3MgrFiUc
__ct__Q34Game12WaterOtakara3MgrFiUc:
/* 802B86E0 002B5620  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B86E4 002B5624  7C 08 02 A6 */	mflr r0
/* 802B86E8 002B5628  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B86EC 002B562C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B86F0 002B5630  7C 7F 1B 78 */	mr r31, r3
/* 802B86F4 002B5634  4B FF D7 A5 */	bl __ct__Q34Game11OtakaraBase3MgrFiUc
/* 802B86F8 002B5638  3C 60 80 4D */	lis r3, __vt__Q34Game12WaterOtakara3Mgr@ha
/* 802B86FC 002B563C  3C 80 80 49 */	lis r4, lbl_8048A790@ha
/* 802B8700 002B5640  38 A3 F8 50 */	addi r5, r3, __vt__Q34Game12WaterOtakara3Mgr@l
/* 802B8704 002B5644  7F E3 FB 78 */	mr r3, r31
/* 802B8708 002B5648  90 BF 00 00 */	stw r5, 0(r31)
/* 802B870C 002B564C  38 A5 00 38 */	addi r5, r5, 0x38
/* 802B8710 002B5650  38 04 A7 90 */	addi r0, r4, lbl_8048A790@l
/* 802B8714 002B5654  90 BF 00 04 */	stw r5, 4(r31)
/* 802B8718 002B5658  90 1F 00 18 */	stw r0, 0x18(r31)
/* 802B871C 002B565C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8720 002B5660  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8724 002B5664  7C 08 03 A6 */	mtlr r0
/* 802B8728 002B5668  38 21 00 10 */	addi r1, r1, 0x10
/* 802B872C 002B566C  4E 80 00 20 */	blr 

.global doAlloc__Q34Game12WaterOtakara3MgrFv
doAlloc__Q34Game12WaterOtakara3MgrFv:
/* 802B8730 002B5670  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B8734 002B5674  7C 08 02 A6 */	mflr r0
/* 802B8738 002B5678  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B873C 002B567C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8740 002B5680  7C 7F 1B 78 */	mr r31, r3
/* 802B8744 002B5684  38 60 08 A8 */	li r3, 0x8a8
/* 802B8748 002B5688  4B D6 B7 5D */	bl __nw__FUl
/* 802B874C 002B568C  7C 64 1B 79 */	or. r4, r3, r3
/* 802B8750 002B5690  41 82 00 0C */	beq lbl_802B875C
/* 802B8754 002B5694  4B FF F6 11 */	bl __ct__Q34Game11OtakaraBase5ParmsFv
/* 802B8758 002B5698  7C 64 1B 78 */	mr r4, r3
lbl_802B875C:
/* 802B875C 002B569C  7F E3 FB 78 */	mr r3, r31
/* 802B8760 002B56A0  4B E7 71 3D */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 802B8764 002B56A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8768 002B56A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B876C 002B56AC  7C 08 03 A6 */	mtlr r0
/* 802B8770 002B56B0  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8774 002B56B4  4E 80 00 20 */	blr 

.global createObj__Q34Game12WaterOtakara3MgrFi
createObj__Q34Game12WaterOtakara3MgrFi:
/* 802B8778 002B56B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B877C 002B56BC  7C 08 02 A6 */	mflr r0
/* 802B8780 002B56C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8784 002B56C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8788 002B56C8  7C 9F 23 78 */	mr r31, r4
/* 802B878C 002B56CC  93 C1 00 08 */	stw r30, 8(r1)
/* 802B8790 002B56D0  7C 7E 1B 78 */	mr r30, r3
/* 802B8794 002B56D4  1C 7F 03 08 */	mulli r3, r31, 0x308
/* 802B8798 002B56D8  38 63 00 10 */	addi r3, r3, 0x10
/* 802B879C 002B56DC  4B D6 B8 11 */	bl __nwa__FUl
/* 802B87A0 002B56E0  3C 80 80 2C */	lis r4, __ct__Q34Game12WaterOtakara3ObjFv@ha
/* 802B87A4 002B56E4  3C A0 80 2C */	lis r5, __dt__Q34Game12WaterOtakara3ObjFv@ha
/* 802B87A8 002B56E8  38 84 8A 38 */	addi r4, r4, __ct__Q34Game12WaterOtakara3ObjFv@l
/* 802B87AC 002B56EC  7F E7 FB 78 */	mr r7, r31
/* 802B87B0 002B56F0  38 A5 87 D8 */	addi r5, r5, __dt__Q34Game12WaterOtakara3ObjFv@l
/* 802B87B4 002B56F4  38 C0 03 08 */	li r6, 0x308
/* 802B87B8 002B56F8  4B E0 92 39 */	bl __construct_new_array
/* 802B87BC 002B56FC  90 7E 00 48 */	stw r3, 0x48(r30)
/* 802B87C0 002B5700  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B87C4 002B5704  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B87C8 002B5708  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B87CC 002B570C  7C 08 03 A6 */	mtlr r0
/* 802B87D0 002B5710  38 21 00 10 */	addi r1, r1, 0x10
/* 802B87D4 002B5714  4E 80 00 20 */	blr 

.global __dt__Q34Game12WaterOtakara3ObjFv
__dt__Q34Game12WaterOtakara3ObjFv:
/* 802B87D8 002B5718  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B87DC 002B571C  7C 08 02 A6 */	mflr r0
/* 802B87E0 002B5720  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B87E4 002B5724  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B87E8 002B5728  7C 9F 23 78 */	mr r31, r4
/* 802B87EC 002B572C  93 C1 00 08 */	stw r30, 8(r1)
/* 802B87F0 002B5730  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B87F4 002B5734  41 82 00 B8 */	beq lbl_802B88AC
/* 802B87F8 002B5738  3C 60 80 4D */	lis r3, __vt__Q34Game12WaterOtakara3Obj@ha
/* 802B87FC 002B573C  38 1E 02 F8 */	addi r0, r30, 0x2f8
/* 802B8800 002B5740  38 83 F9 68 */	addi r4, r3, __vt__Q34Game12WaterOtakara3Obj@l
/* 802B8804 002B5744  90 9E 00 00 */	stw r4, 0(r30)
/* 802B8808 002B5748  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802B880C 002B574C  38 84 03 24 */	addi r4, r4, 0x324
/* 802B8810 002B5750  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802B8814 002B5754  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B8818 002B5758  90 83 00 00 */	stw r4, 0(r3)
/* 802B881C 002B575C  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B8820 002B5760  7C 03 00 50 */	subf r0, r3, r0
/* 802B8824 002B5764  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B8828 002B5768  41 82 00 74 */	beq lbl_802B889C
/* 802B882C 002B576C  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Obj@ha
/* 802B8830 002B5770  38 1E 02 F4 */	addi r0, r30, 0x2f4
/* 802B8834 002B5774  38 83 F0 84 */	addi r4, r3, __vt__Q34Game11OtakaraBase3Obj@l
/* 802B8838 002B5778  90 9E 00 00 */	stw r4, 0(r30)
/* 802B883C 002B577C  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 802B8840 002B5780  38 84 03 24 */	addi r4, r4, 0x324
/* 802B8844 002B5784  90 7E 01 78 */	stw r3, 0x178(r30)
/* 802B8848 002B5788  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B884C 002B578C  90 83 00 00 */	stw r4, 0(r3)
/* 802B8850 002B5790  80 7E 01 7C */	lwz r3, 0x17c(r30)
/* 802B8854 002B5794  7C 03 00 50 */	subf r0, r3, r0
/* 802B8858 002B5798  90 03 00 0C */	stw r0, 0xc(r3)
/* 802B885C 002B579C  41 82 00 40 */	beq lbl_802B889C
/* 802B8860 002B57A0  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 802B8864 002B57A4  38 1E 02 BC */	addi r0, r30, 0x2bc
/* 802B8868 002B57A8  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 802B886C 002B57AC  38 7E 02 90 */	addi r3, r30, 0x290
/* 802B8870 002B57B0  90 9E 00 00 */	stw r4, 0(r30)
/* 802B8874 002B57B4  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 802B8878 002B57B8  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 802B887C 002B57BC  38 80 FF FF */	li r4, -1
/* 802B8880 002B57C0  90 BE 01 78 */	stw r5, 0x178(r30)
/* 802B8884 002B57C4  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802B8888 002B57C8  90 C5 00 00 */	stw r6, 0(r5)
/* 802B888C 002B57CC  80 BE 01 7C */	lwz r5, 0x17c(r30)
/* 802B8890 002B57D0  7C 05 00 50 */	subf r0, r5, r0
/* 802B8894 002B57D4  90 05 00 0C */	stw r0, 0xc(r5)
/* 802B8898 002B57D8  48 15 8C F1 */	bl __dt__5CNodeFv
lbl_802B889C:
/* 802B889C 002B57DC  7F E0 07 35 */	extsh. r0, r31
/* 802B88A0 002B57E0  40 81 00 0C */	ble lbl_802B88AC
/* 802B88A4 002B57E4  7F C3 F3 78 */	mr r3, r30
/* 802B88A8 002B57E8  4B D6 B8 0D */	bl __dl__FPv
lbl_802B88AC:
/* 802B88AC 002B57EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B88B0 002B57F0  7F C3 F3 78 */	mr r3, r30
/* 802B88B4 002B57F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B88B8 002B57F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B88BC 002B57FC  7C 08 03 A6 */	mtlr r0
/* 802B88C0 002B5800  38 21 00 10 */	addi r1, r1, 0x10
/* 802B88C4 002B5804  4E 80 00 20 */	blr 

.global getEnemy__Q34Game12WaterOtakara3MgrFi
getEnemy__Q34Game12WaterOtakara3MgrFi:
/* 802B88C8 002B5808  1C 04 03 08 */	mulli r0, r4, 0x308
/* 802B88CC 002B580C  80 63 00 48 */	lwz r3, 0x48(r3)
/* 802B88D0 002B5810  7C 63 02 14 */	add r3, r3, r0
/* 802B88D4 002B5814  4E 80 00 20 */	blr 

.global loadTexData__Q34Game12WaterOtakara3MgrFv
loadTexData__Q34Game12WaterOtakara3MgrFv:
/* 802B88D8 002B5818  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802B88DC 002B581C  7C 08 02 A6 */	mflr r0
/* 802B88E0 002B5820  90 01 00 44 */	stw r0, 0x44(r1)
/* 802B88E4 002B5824  38 00 00 00 */	li r0, 0
/* 802B88E8 002B5828  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802B88EC 002B582C  7C 7F 1B 78 */	mr r31, r3
/* 802B88F0 002B5830  90 03 00 44 */	stw r0, 0x44(r3)
/* 802B88F4 002B5834  38 61 00 08 */	addi r3, r1, 8
/* 802B88F8 002B5838  80 8D 84 E8 */	lwz r4, "cOtakaraChangeTexName__Q34Game12WaterOtakara29@unnamed@WaterOtakaraMgr_cpp@"@sda21(r13)
/* 802B88FC 002B583C  48 19 3C DD */	bl __ct__Q212LoadResource3ArgFPCc
/* 802B8900 002B5840  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 802B8904 002B5844  38 81 00 08 */	addi r4, r1, 8
/* 802B8908 002B5848  48 19 3E 99 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 802B890C 002B584C  28 03 00 00 */	cmplwi r3, 0
/* 802B8910 002B5850  41 82 00 0C */	beq lbl_802B891C
/* 802B8914 002B5854  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802B8918 002B5858  90 1F 00 44 */	stw r0, 0x44(r31)
lbl_802B891C:
/* 802B891C 002B585C  80 1F 00 44 */	lwz r0, 0x44(r31)
/* 802B8920 002B5860  28 00 00 00 */	cmplwi r0, 0
/* 802B8924 002B5864  40 82 00 20 */	bne lbl_802B8944
/* 802B8928 002B5868  3C 60 80 49 */	lis r3, lbl_8048A7AC@ha
/* 802B892C 002B586C  3C A0 80 49 */	lis r5, lbl_8048A7C0@ha
/* 802B8930 002B5870  38 63 A7 AC */	addi r3, r3, lbl_8048A7AC@l
/* 802B8934 002B5874  38 80 00 53 */	li r4, 0x53
/* 802B8938 002B5878  38 A5 A7 C0 */	addi r5, r5, lbl_8048A7C0@l
/* 802B893C 002B587C  4C C6 31 82 */	crclr 6
/* 802B8940 002B5880  4B D7 1D 01 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_802B8944:
/* 802B8944 002B5884  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802B8948 002B5888  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802B894C 002B588C  7C 08 03 A6 */	mtlr r0
/* 802B8950 002B5890  38 21 00 40 */	addi r1, r1, 0x40
/* 802B8954 002B5894  4E 80 00 20 */	blr 

.global __dt__Q34Game12WaterOtakara3MgrFv
__dt__Q34Game12WaterOtakara3MgrFv:
/* 802B8958 002B5898  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802B895C 002B589C  7C 08 02 A6 */	mflr r0
/* 802B8960 002B58A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802B8964 002B58A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802B8968 002B58A8  7C 9F 23 78 */	mr r31, r4
/* 802B896C 002B58AC  93 C1 00 08 */	stw r30, 8(r1)
/* 802B8970 002B58B0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802B8974 002B58B4  41 82 00 90 */	beq lbl_802B8A04
/* 802B8978 002B58B8  3C 60 80 4D */	lis r3, __vt__Q34Game12WaterOtakara3Mgr@ha
/* 802B897C 002B58BC  38 63 F8 50 */	addi r3, r3, __vt__Q34Game12WaterOtakara3Mgr@l
/* 802B8980 002B58C0  90 7E 00 00 */	stw r3, 0(r30)
/* 802B8984 002B58C4  38 03 00 38 */	addi r0, r3, 0x38
/* 802B8988 002B58C8  90 1E 00 04 */	stw r0, 4(r30)
/* 802B898C 002B58CC  41 82 00 68 */	beq lbl_802B89F4
/* 802B8990 002B58D0  3C 60 80 4D */	lis r3, __vt__Q34Game11OtakaraBase3Mgr@ha
/* 802B8994 002B58D4  38 63 EF 90 */	addi r3, r3, __vt__Q34Game11OtakaraBase3Mgr@l
/* 802B8998 002B58D8  90 7E 00 00 */	stw r3, 0(r30)
/* 802B899C 002B58DC  38 03 00 38 */	addi r0, r3, 0x38
/* 802B89A0 002B58E0  90 1E 00 04 */	stw r0, 4(r30)
/* 802B89A4 002B58E4  41 82 00 50 */	beq lbl_802B89F4
/* 802B89A8 002B58E8  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 802B89AC 002B58EC  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 802B89B0 002B58F0  90 7E 00 00 */	stw r3, 0(r30)
/* 802B89B4 002B58F4  38 03 00 38 */	addi r0, r3, 0x38
/* 802B89B8 002B58F8  90 1E 00 04 */	stw r0, 4(r30)
/* 802B89BC 002B58FC  41 82 00 38 */	beq lbl_802B89F4
/* 802B89C0 002B5900  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 802B89C4 002B5904  34 1E 00 04 */	addic. r0, r30, 4
/* 802B89C8 002B5908  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 802B89CC 002B590C  90 7E 00 00 */	stw r3, 0(r30)
/* 802B89D0 002B5910  38 03 00 38 */	addi r0, r3, 0x38
/* 802B89D4 002B5914  90 1E 00 04 */	stw r0, 4(r30)
/* 802B89D8 002B5918  41 82 00 1C */	beq lbl_802B89F4
/* 802B89DC 002B591C  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 802B89E0 002B5920  38 7E 00 04 */	addi r3, r30, 4
/* 802B89E4 002B5924  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 802B89E8 002B5928  38 80 00 00 */	li r4, 0
/* 802B89EC 002B592C  90 1E 00 04 */	stw r0, 4(r30)
/* 802B89F0 002B5930  48 15 8B 99 */	bl __dt__5CNodeFv
lbl_802B89F4:
/* 802B89F4 002B5934  7F E0 07 35 */	extsh. r0, r31
/* 802B89F8 002B5938  40 81 00 0C */	ble lbl_802B8A04
/* 802B89FC 002B593C  7F C3 F3 78 */	mr r3, r30
/* 802B8A00 002B5940  4B D6 B6 B5 */	bl __dl__FPv
lbl_802B8A04:
/* 802B8A04 002B5944  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802B8A08 002B5948  7F C3 F3 78 */	mr r3, r30
/* 802B8A0C 002B594C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802B8A10 002B5950  83 C1 00 08 */	lwz r30, 8(r1)
/* 802B8A14 002B5954  7C 08 03 A6 */	mtlr r0
/* 802B8A18 002B5958  38 21 00 10 */	addi r1, r1, 0x10
/* 802B8A1C 002B595C  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game12WaterOtakara3MgrFv
getEnemyTypeID__Q34Game12WaterOtakara3MgrFv:
/* 802B8A20 002B5960  38 60 00 3C */	li r3, 0x3c
/* 802B8A24 002B5964  4E 80 00 20 */	blr 

.global getChangeTexture__Q34Game12WaterOtakara3MgrFv
getChangeTexture__Q34Game12WaterOtakara3MgrFv:
/* 802B8A28 002B5968  80 63 00 44 */	lwz r3, 0x44(r3)
/* 802B8A2C 002B596C  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game12WaterOtakara3MgrFv"
"@4@__dt__Q34Game12WaterOtakara3MgrFv":
/* 802B8A30 002B5970  38 63 FF FC */	addi r3, r3, -4
/* 802B8A34 002B5974  4B FF FF 24 */	b __dt__Q34Game12WaterOtakara3MgrFv
