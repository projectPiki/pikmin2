.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.global __vt__Q217JASSimpleWaveBank11TWaveHandle
__vt__Q217JASSimpleWaveBank11TWaveHandle:
	.4byte 0
	.4byte 0
	.4byte __dt__Q217JASSimpleWaveBank11TWaveHandleFv
	.4byte getWaveInfo__Q217JASSimpleWaveBank11TWaveHandleCFv
	.4byte getWavePtr__Q217JASSimpleWaveBank11TWaveHandleCFv
.global __vt__17JASSimpleWaveBank
__vt__17JASSimpleWaveBank:
	.4byte 0
	.4byte 0
	.4byte __dt__17JASSimpleWaveBankFv
	.4byte getWaveHandle__17JASSimpleWaveBankCFUl
	.4byte getWaveArc__17JASSimpleWaveBankFi
	.4byte 0
	.4byte 0
	.4byte onDispose__10JASWaveArcFv
	.4byte onLoadDone__10JASWaveArcFv
	.4byte onEraseDone__10JASWaveArcFv
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__17JASSimpleWaveBankFv
__ct__17JASSimpleWaveBankFv:
/* 8009B6C4 00098604  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B6C8 00098608  7C 08 02 A6 */	mflr r0
/* 8009B6CC 0009860C  3C 80 80 4A */	lis r4, __vt__11JASWaveBank@ha
/* 8009B6D0 00098610  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B6D4 00098614  38 04 37 F8 */	addi r0, r4, __vt__11JASWaveBank@l
/* 8009B6D8 00098618  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009B6DC 0009861C  7C 7F 1B 78 */	mr r31, r3
/* 8009B6E0 00098620  90 03 00 00 */	stw r0, 0(r3)
/* 8009B6E4 00098624  38 7F 00 04 */	addi r3, r31, 4
/* 8009B6E8 00098628  48 00 03 AD */	bl __ct__10JASWaveArcFv
/* 8009B6EC 0009862C  3C 60 80 4A */	lis r3, __vt__17JASSimpleWaveBank@ha
/* 8009B6F0 00098630  38 00 00 00 */	li r0, 0
/* 8009B6F4 00098634  38 83 38 6C */	addi r4, r3, __vt__17JASSimpleWaveBank@l
/* 8009B6F8 00098638  7F E3 FB 78 */	mr r3, r31
/* 8009B6FC 0009863C  90 9F 00 00 */	stw r4, 0(r31)
/* 8009B700 00098640  38 84 00 14 */	addi r4, r4, 0x14
/* 8009B704 00098644  90 9F 00 04 */	stw r4, 4(r31)
/* 8009B708 00098648  90 1F 00 60 */	stw r0, 0x60(r31)
/* 8009B70C 0009864C  90 1F 00 64 */	stw r0, 0x64(r31)
/* 8009B710 00098650  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009B714 00098654  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B718 00098658  7C 08 03 A6 */	mtlr r0
/* 8009B71C 0009865C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B720 00098660  4E 80 00 20 */	blr 

.global __dt__17JASSimpleWaveBankFv
__dt__17JASSimpleWaveBankFv:
/* 8009B724 00098664  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009B728 00098668  7C 08 02 A6 */	mflr r0
/* 8009B72C 0009866C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009B730 00098670  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009B734 00098674  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8009B738 00098678  7C 9E 23 78 */	mr r30, r4
/* 8009B73C 0009867C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 8009B740 00098680  7C 7D 1B 79 */	or. r29, r3, r3
/* 8009B744 00098684  41 82 00 94 */	beq .L_8009B7D8
/* 8009B748 00098688  3C 80 80 4A */	lis r4, __vt__17JASSimpleWaveBank@ha
/* 8009B74C 0009868C  3C 60 80 0A */	lis r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@ha
/* 8009B750 00098690  38 84 38 6C */	addi r4, r4, __vt__17JASSimpleWaveBank@l
/* 8009B754 00098694  90 9D 00 00 */	stw r4, 0(r29)
/* 8009B758 00098698  38 04 00 14 */	addi r0, r4, 0x14
/* 8009B75C 0009869C  38 83 B7 F8 */	addi r4, r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@l
/* 8009B760 000986A0  90 1D 00 04 */	stw r0, 4(r29)
/* 8009B764 000986A4  80 7D 00 60 */	lwz r3, 0x60(r29)
/* 8009B768 000986A8  48 02 5F E1 */	bl __destroy_new_array
/* 8009B76C 000986AC  34 1D 00 04 */	addic. r0, r29, 4
/* 8009B770 000986B0  41 82 00 44 */	beq .L_8009B7B4
/* 8009B774 000986B4  3C 60 80 4A */	lis r3, __vt__10JASWaveArc@ha
/* 8009B778 000986B8  37 FD 00 08 */	addic. r31, r29, 8
/* 8009B77C 000986BC  38 03 38 D8 */	addi r0, r3, __vt__10JASWaveArc@l
/* 8009B780 000986C0  90 1D 00 04 */	stw r0, 4(r29)
/* 8009B784 000986C4  41 82 00 30 */	beq .L_8009B7B4
/* 8009B788 000986C8  28 1F 00 00 */	cmplwi r31, 0
/* 8009B78C 000986CC  41 82 00 28 */	beq .L_8009B7B4
/* 8009B790 000986D0  34 7D 00 14 */	addic. r3, r29, 0x14
/* 8009B794 000986D4  41 82 00 0C */	beq .L_8009B7A0
/* 8009B798 000986D8  38 80 00 00 */	li r4, 0
/* 8009B79C 000986DC  4B F8 B0 35 */	bl __dt__10JSUPtrLinkFv
.L_8009B7A0:
/* 8009B7A0 000986E0  28 1F 00 00 */	cmplwi r31, 0
/* 8009B7A4 000986E4  41 82 00 10 */	beq .L_8009B7B4
/* 8009B7A8 000986E8  7F E3 FB 78 */	mr r3, r31
/* 8009B7AC 000986EC  38 80 00 00 */	li r4, 0
/* 8009B7B0 000986F0  4B F8 B0 B9 */	bl __dt__10JSUPtrListFv
.L_8009B7B4:
/* 8009B7B4 000986F4  28 1D 00 00 */	cmplwi r29, 0
/* 8009B7B8 000986F8  41 82 00 10 */	beq .L_8009B7C8
/* 8009B7BC 000986FC  3C 60 80 4A */	lis r3, __vt__11JASWaveBank@ha
/* 8009B7C0 00098700  38 03 37 F8 */	addi r0, r3, __vt__11JASWaveBank@l
/* 8009B7C4 00098704  90 1D 00 00 */	stw r0, 0(r29)
.L_8009B7C8:
/* 8009B7C8 00098708  7F C0 07 35 */	extsh. r0, r30
/* 8009B7CC 0009870C  40 81 00 0C */	ble .L_8009B7D8
/* 8009B7D0 00098710  7F A3 EB 78 */	mr r3, r29
/* 8009B7D4 00098714  4B F8 88 E1 */	bl __dl__FPv
.L_8009B7D8:
/* 8009B7D8 00098718  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009B7DC 0009871C  7F A3 EB 78 */	mr r3, r29
/* 8009B7E0 00098720  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009B7E4 00098724  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 8009B7E8 00098728  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 8009B7EC 0009872C  7C 08 03 A6 */	mtlr r0
/* 8009B7F0 00098730  38 21 00 20 */	addi r1, r1, 0x20
/* 8009B7F4 00098734  4E 80 00 20 */	blr 

.global __dt__Q217JASSimpleWaveBank11TWaveHandleFv
__dt__Q217JASSimpleWaveBank11TWaveHandleFv:
/* 8009B7F8 00098738  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B7FC 0009873C  7C 08 02 A6 */	mflr r0
/* 8009B800 00098740  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B804 00098744  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009B808 00098748  7C 7F 1B 79 */	or. r31, r3, r3
/* 8009B80C 0009874C  41 82 00 30 */	beq .L_8009B83C
/* 8009B810 00098750  3C 60 80 4A */	lis r3, __vt__Q217JASSimpleWaveBank11TWaveHandle@ha
/* 8009B814 00098754  38 03 38 58 */	addi r0, r3, __vt__Q217JASSimpleWaveBank11TWaveHandle@l
/* 8009B818 00098758  90 1F 00 00 */	stw r0, 0(r31)
/* 8009B81C 0009875C  41 82 00 10 */	beq .L_8009B82C
/* 8009B820 00098760  3C 60 80 4A */	lis r3, __vt__13JASWaveHandle@ha
/* 8009B824 00098764  38 03 37 BC */	addi r0, r3, __vt__13JASWaveHandle@l
/* 8009B828 00098768  90 1F 00 00 */	stw r0, 0(r31)
.L_8009B82C:
/* 8009B82C 0009876C  7C 80 07 35 */	extsh. r0, r4
/* 8009B830 00098770  40 81 00 0C */	ble .L_8009B83C
/* 8009B834 00098774  7F E3 FB 78 */	mr r3, r31
/* 8009B838 00098778  4B F8 88 7D */	bl __dl__FPv
.L_8009B83C:
/* 8009B83C 0009877C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B840 00098780  7F E3 FB 78 */	mr r3, r31
/* 8009B844 00098784  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009B848 00098788  7C 08 03 A6 */	mtlr r0
/* 8009B84C 0009878C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B850 00098790  4E 80 00 20 */	blr 

.global setWaveTableSize__17JASSimpleWaveBankFUl
setWaveTableSize__17JASSimpleWaveBankFUl:
/* 8009B854 00098794  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009B858 00098798  7C 08 02 A6 */	mflr r0
/* 8009B85C 0009879C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009B860 000987A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009B864 000987A4  7C 9F 23 78 */	mr r31, r4
/* 8009B868 000987A8  93 C1 00 08 */	stw r30, 8(r1)
/* 8009B86C 000987AC  7C 7E 1B 78 */	mr r30, r3
/* 8009B870 000987B0  3C 60 80 0A */	lis r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@ha
/* 8009B874 000987B4  38 03 B7 F8 */	addi r0, r3, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@l
/* 8009B878 000987B8  80 7E 00 60 */	lwz r3, 0x60(r30)
/* 8009B87C 000987BC  7C 04 03 78 */	mr r4, r0
/* 8009B880 000987C0  48 02 5E C9 */	bl __destroy_new_array
/* 8009B884 000987C4  48 00 07 AD */	bl getCurrentHeap__11JASWaveBankFv
/* 8009B888 000987C8  1C DF 00 30 */	mulli r6, r31, 0x30
/* 8009B88C 000987CC  7C 64 1B 78 */	mr r4, r3
/* 8009B890 000987D0  38 A0 00 00 */	li r5, 0
/* 8009B894 000987D4  38 66 00 10 */	addi r3, r6, 0x10
/* 8009B898 000987D8  4B F8 87 B1 */	bl __nwa__FUlP7JKRHeapi
/* 8009B89C 000987DC  3C 80 80 0A */	lis r4, __ct__Q217JASSimpleWaveBank11TWaveHandleFv@ha
/* 8009B8A0 000987E0  3C A0 80 0A */	lis r5, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@ha
/* 8009B8A4 000987E4  38 84 B8 D8 */	addi r4, r4, __ct__Q217JASSimpleWaveBank11TWaveHandleFv@l
/* 8009B8A8 000987E8  7F E7 FB 78 */	mr r7, r31
/* 8009B8AC 000987EC  38 A5 B7 F8 */	addi r5, r5, __dt__Q217JASSimpleWaveBank11TWaveHandleFv@l
/* 8009B8B0 000987F0  38 C0 00 30 */	li r6, 0x30
/* 8009B8B4 000987F4  48 02 61 3D */	bl __construct_new_array
/* 8009B8B8 000987F8  90 7E 00 60 */	stw r3, 0x60(r30)
/* 8009B8BC 000987FC  93 FE 00 64 */	stw r31, 0x64(r30)
/* 8009B8C0 00098800  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009B8C4 00098804  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009B8C8 00098808  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009B8CC 0009880C  7C 08 03 A6 */	mtlr r0
/* 8009B8D0 00098810  38 21 00 10 */	addi r1, r1, 0x10
/* 8009B8D4 00098814  4E 80 00 20 */	blr 

.global __ct__Q217JASSimpleWaveBank11TWaveHandleFv
__ct__Q217JASSimpleWaveBank11TWaveHandleFv:
/* 8009B8D8 00098818  3C A0 80 4A */	lis r5, __vt__13JASWaveHandle@ha
/* 8009B8DC 0009881C  3C 80 80 4A */	lis r4, __vt__Q217JASSimpleWaveBank11TWaveHandle@ha
/* 8009B8E0 00098820  38 A5 37 BC */	addi r5, r5, __vt__13JASWaveHandle@l
/* 8009B8E4 00098824  38 00 00 00 */	li r0, 0
/* 8009B8E8 00098828  90 A3 00 00 */	stw r5, 0(r3)
/* 8009B8EC 0009882C  38 84 38 58 */	addi r4, r4, __vt__Q217JASSimpleWaveBank11TWaveHandle@l
/* 8009B8F0 00098830  90 83 00 00 */	stw r4, 0(r3)
/* 8009B8F4 00098834  90 03 00 2C */	stw r0, 0x2c(r3)
/* 8009B8F8 00098838  4E 80 00 20 */	blr 

.global getWaveHandle__17JASSimpleWaveBankCFUl
getWaveHandle__17JASSimpleWaveBankCFUl:
/* 8009B8FC 0009883C  80 03 00 64 */	lwz r0, 0x64(r3)
/* 8009B900 00098840  7C 04 00 40 */	cmplw r4, r0
/* 8009B904 00098844  41 80 00 0C */	blt .L_8009B910
/* 8009B908 00098848  38 60 00 00 */	li r3, 0
/* 8009B90C 0009884C  4E 80 00 20 */	blr 
.L_8009B910:
/* 8009B910 00098850  1C 04 00 30 */	mulli r0, r4, 0x30
/* 8009B914 00098854  80 63 00 60 */	lwz r3, 0x60(r3)
/* 8009B918 00098858  7C 63 02 14 */	add r3, r3, r0
/* 8009B91C 0009885C  4E 80 00 20 */	blr 

.global setWaveInfo__17JASSimpleWaveBankFUlRC11JASWaveInfo
setWaveInfo__17JASSimpleWaveBankFUlRC11JASWaveInfo:
/* 8009B920 00098860  1D 64 00 30 */	mulli r11, r4, 0x30
/* 8009B924 00098864  80 03 00 60 */	lwz r0, 0x60(r3)
/* 8009B928 00098868  89 05 00 00 */	lbz r8, 0(r5)
/* 8009B92C 0009886C  38 C3 00 4C */	addi r6, r3, 0x4c
/* 8009B930 00098870  88 E5 00 01 */	lbz r7, 1(r5)
/* 8009B934 00098874  38 83 00 08 */	addi r4, r3, 8
/* 8009B938 00098878  39 4B 00 04 */	addi r10, r11, 4
/* 8009B93C 0009887C  C0 05 00 04 */	lfs f0, 4(r5)
/* 8009B940 00098880  7D 40 52 14 */	add r10, r0, r10
/* 8009B944 00098884  80 05 00 08 */	lwz r0, 8(r5)
/* 8009B948 00098888  99 0A 00 00 */	stb r8, 0(r10)
/* 8009B94C 0009888C  81 25 00 0C */	lwz r9, 0xc(r5)
/* 8009B950 00098890  98 EA 00 01 */	stb r7, 1(r10)
/* 8009B954 00098894  81 05 00 10 */	lwz r8, 0x10(r5)
/* 8009B958 00098898  D0 0A 00 04 */	stfs f0, 4(r10)
/* 8009B95C 0009889C  80 E5 00 14 */	lwz r7, 0x14(r5)
/* 8009B960 000988A0  90 0A 00 08 */	stw r0, 8(r10)
/* 8009B964 000988A4  80 05 00 18 */	lwz r0, 0x18(r5)
/* 8009B968 000988A8  91 2A 00 0C */	stw r9, 0xc(r10)
/* 8009B96C 000988AC  81 25 00 1C */	lwz r9, 0x1c(r5)
/* 8009B970 000988B0  91 0A 00 10 */	stw r8, 0x10(r10)
/* 8009B974 000988B4  A9 05 00 20 */	lha r8, 0x20(r5)
/* 8009B978 000988B8  90 EA 00 14 */	stw r7, 0x14(r10)
/* 8009B97C 000988BC  A8 E5 00 22 */	lha r7, 0x22(r5)
/* 8009B980 000988C0  90 0A 00 18 */	stw r0, 0x18(r10)
/* 8009B984 000988C4  80 05 00 24 */	lwz r0, 0x24(r5)
/* 8009B988 000988C8  91 2A 00 1C */	stw r9, 0x1c(r10)
/* 8009B98C 000988CC  B1 0A 00 20 */	sth r8, 0x20(r10)
/* 8009B990 000988D0  B0 EA 00 22 */	sth r7, 0x22(r10)
/* 8009B994 000988D4  90 0A 00 24 */	stw r0, 0x24(r10)
/* 8009B998 000988D8  80 03 00 60 */	lwz r0, 0x60(r3)
/* 8009B99C 000988DC  7C A0 5A 14 */	add r5, r0, r11
/* 8009B9A0 000988E0  90 C5 00 28 */	stw r6, 0x28(r5)
/* 8009B9A4 000988E4  80 03 00 60 */	lwz r0, 0x60(r3)
/* 8009B9A8 000988E8  7C 60 5A 14 */	add r3, r0, r11
/* 8009B9AC 000988EC  90 83 00 2C */	stw r4, 0x2c(r3)
/* 8009B9B0 000988F0  4E 80 00 20 */	blr 

.global getWaveArc__17JASSimpleWaveBankFi
getWaveArc__17JASSimpleWaveBankFi:
/* 8009B9B4 000988F4  2C 04 00 00 */	cmpwi r4, 0
/* 8009B9B8 000988F8  41 82 00 0C */	beq .L_8009B9C4
/* 8009B9BC 000988FC  38 60 00 00 */	li r3, 0
/* 8009B9C0 00098900  4E 80 00 20 */	blr 
.L_8009B9C4:
/* 8009B9C4 00098904  28 03 00 00 */	cmplwi r3, 0
/* 8009B9C8 00098908  4D 82 00 20 */	beqlr 
/* 8009B9CC 0009890C  38 63 00 04 */	addi r3, r3, 4
/* 8009B9D0 00098910  4E 80 00 20 */	blr 

.global getWaveInfo__Q217JASSimpleWaveBank11TWaveHandleCFv
getWaveInfo__Q217JASSimpleWaveBank11TWaveHandleCFv:
/* 8009B9D4 00098914  38 63 00 04 */	addi r3, r3, 4
/* 8009B9D8 00098918  4E 80 00 20 */	blr 

.global getWavePtr__Q217JASSimpleWaveBank11TWaveHandleCFv
getWavePtr__Q217JASSimpleWaveBank11TWaveHandleCFv:
/* 8009B9DC 0009891C  80 83 00 2C */	lwz r4, 0x2c(r3)
/* 8009B9E0 00098920  80 84 00 38 */	lwz r4, 0x38(r4)
/* 8009B9E4 00098924  28 04 00 00 */	cmplwi r4, 0
/* 8009B9E8 00098928  40 82 00 0C */	bne .L_8009B9F4
/* 8009B9EC 0009892C  38 60 00 00 */	li r3, 0
/* 8009B9F0 00098930  4E 80 00 20 */	blr 
.L_8009B9F4:
/* 8009B9F4 00098934  80 03 00 0C */	lwz r0, 0xc(r3)
/* 8009B9F8 00098938  7C 64 02 14 */	add r3, r4, r0
/* 8009B9FC 0009893C  4E 80 00 20 */	blr 

.global onLoadDone__10JASWaveArcFv
onLoadDone__10JASWaveArcFv:
/* 8009BA00 00098940  4E 80 00 20 */	blr 

.global onEraseDone__10JASWaveArcFv
onEraseDone__10JASWaveArcFv:
/* 8009BA04 00098944  4E 80 00 20 */	blr 
