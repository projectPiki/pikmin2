.include "macros.inc"
.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj initOnCodeFxScene__Q27JAInter2Fx, global
	.skip 0x4
.endobj initOnCodeFxScene__Q27JAInter2Fx
.obj mSceneMax__Q27JAInter2Fx, global
	.skip 0x1
.endobj mSceneMax__Q27JAInter2Fx
.balign 4
.obj mBufferSizeMax__Q27JAInter2Fx, global
	.skip 0x4
.endobj mBufferSizeMax__Q27JAInter2Fx
.obj mBufferPointer__Q27JAInter2Fx, global
	.skip 0x4
.endobj mBufferPointer__Q27JAInter2Fx
.obj mFxconfigTable__Q27JAInter2Fx, global
	.skip 0x4
.endobj mFxconfigTable__Q27JAInter2Fx

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn init__Q27JAInter2FxFv, global
/* 800AD6CC 000AA60C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800AD6D0 000AA610  7C 08 02 A6 */	mflr r0
/* 800AD6D4 000AA614  90 01 00 24 */	stw r0, 0x24(r1)
/* 800AD6D8 000AA618  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 800AD6DC 000AA61C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 800AD6E0 000AA620  93 A1 00 14 */	stw r29, 0x14(r1)
/* 800AD6E4 000AA624  80 0D 8B A0 */	lwz r0, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
/* 800AD6E8 000AA628  28 00 00 00 */	cmplwi r0, 0
/* 800AD6EC 000AA62C  41 82 01 24 */	beq .L_800AD810
/* 800AD6F0 000AA630  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AD6F4 000AA634  38 60 00 10 */	li r3, 0x10
/* 800AD6F8 000AA638  38 A0 00 04 */	li r5, 4
/* 800AD6FC 000AA63C  4B F7 69 4D */	bl __nwa__FUlP7JKRHeapi
/* 800AD700 000AA640  90 6D 8B A8 */	stw r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
/* 800AD704 000AA644  38 60 00 10 */	li r3, 0x10
/* 800AD708 000AA648  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AD70C 000AA64C  38 A0 00 04 */	li r5, 4
/* 800AD710 000AA650  4B F7 69 39 */	bl __nwa__FUlP7JKRHeapi
/* 800AD714 000AA654  90 6D 8B AC */	stw r3, mBufferPointer__Q27JAInter2Fx@sda21(r13)
/* 800AD718 000AA658  83 ED 8B A0 */	lwz r31, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
/* 800AD71C 000AA65C  80 1F 00 00 */	lwz r0, 0(r31)
/* 800AD720 000AA660  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 800AD724 000AA664  48 00 01 09 */	bl setSceneMax__Q27JAInter2FxFUc
/* 800AD728 000AA668  80 7F 00 04 */	lwz r3, 4(r31)
/* 800AD72C 000AA66C  80 9F 00 08 */	lwz r4, 8(r31)
/* 800AD730 000AA670  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 800AD734 000AA674  80 DF 00 10 */	lwz r6, 0x10(r31)
/* 800AD738 000AA678  48 00 00 FD */	bl setBufferMax__Q27JAInter2FxFUlUlUlUl
/* 800AD73C 000AA67C  83 CD 8B 6C */	lwz r30, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AD740 000AA680  48 00 01 41 */	bl getSceneMax__Q27JAInter2FxFv
/* 800AD744 000AA684  54 63 15 BA */	rlwinm r3, r3, 2, 0x16, 0x1d
/* 800AD748 000AA688  7F C4 F3 78 */	mr r4, r30
/* 800AD74C 000AA68C  38 A0 00 20 */	li r5, 0x20
/* 800AD750 000AA690  4B F7 68 F9 */	bl __nwa__FUlP7JKRHeapi
/* 800AD754 000AA694  48 00 01 05 */	bl setTablePointer__Q27JAInter2FxFPPv
/* 800AD758 000AA698  3B C0 00 00 */	li r30, 0
/* 800AD75C 000AA69C  48 00 00 24 */	b .L_800AD780
.L_800AD760:
/* 800AD760 000AA6A0  57 C3 15 BA */	rlwinm r3, r30, 2, 0x16, 0x1d
/* 800AD764 000AA6A4  80 8D 8B A0 */	lwz r4, initOnCodeFxScene__Q27JAInter2Fx@sda21(r13)
/* 800AD768 000AA6A8  38 03 00 14 */	addi r0, r3, 0x14
/* 800AD76C 000AA6AC  7C 1F 00 2E */	lwzx r0, r31, r0
/* 800AD770 000AA6B0  7F C3 F3 78 */	mr r3, r30
/* 800AD774 000AA6B4  7C 84 02 14 */	add r4, r4, r0
/* 800AD778 000AA6B8  48 00 00 F9 */	bl setScenePointer__Q27JAInter2FxFUcPv
/* 800AD77C 000AA6BC  3B DE 00 01 */	addi r30, r30, 1
.L_800AD780:
/* 800AD780 000AA6C0  48 00 01 01 */	bl getSceneMax__Q27JAInter2FxFv
/* 800AD784 000AA6C4  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 800AD788 000AA6C8  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 800AD78C 000AA6CC  7C 00 18 40 */	cmplw r0, r3
/* 800AD790 000AA6D0  41 80 FF D0 */	blt .L_800AD760
/* 800AD794 000AA6D4  3B A0 00 00 */	li r29, 0
/* 800AD798 000AA6D8  48 00 00 6C */	b .L_800AD804
.L_800AD79C:
/* 800AD79C 000AA6DC  7F A3 EB 78 */	mr r3, r29
/* 800AD7A0 000AA6E0  48 00 00 E9 */	bl getBufferSizeMax__Q27JAInter2FxFUc
/* 800AD7A4 000AA6E4  28 03 00 00 */	cmplwi r3, 0
/* 800AD7A8 000AA6E8  41 82 00 58 */	beq .L_800AD800
/* 800AD7AC 000AA6EC  83 CD 8B 6C */	lwz r30, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800AD7B0 000AA6F0  7F A3 EB 78 */	mr r3, r29
/* 800AD7B4 000AA6F4  48 00 00 D5 */	bl getBufferSizeMax__Q27JAInter2FxFUc
/* 800AD7B8 000AA6F8  1C 03 00 A0 */	mulli r0, r3, 0xa0
/* 800AD7BC 000AA6FC  7F C4 F3 78 */	mr r4, r30
/* 800AD7C0 000AA700  38 A0 00 20 */	li r5, 0x20
/* 800AD7C4 000AA704  54 03 00 3C */	rlwinm r3, r0, 0, 0, 0x1e
/* 800AD7C8 000AA708  4B F7 68 81 */	bl __nwa__FUlP7JKRHeapi
/* 800AD7CC 000AA70C  7C 60 1B 78 */	mr r0, r3
/* 800AD7D0 000AA710  7F A3 EB 78 */	mr r3, r29
/* 800AD7D4 000AA714  7C 04 03 78 */	mr r4, r0
/* 800AD7D8 000AA718  48 00 00 89 */	bl setBufferPointer__Q27JAInter2FxFUcPs
/* 800AD7DC 000AA71C  48 00 00 CD */	bl getFxconfigTable__Q27JAInter2FxFv
/* 800AD7E0 000AA720  83 C3 00 00 */	lwz r30, 0(r3)
/* 800AD7E4 000AA724  7F A3 EB 78 */	mr r3, r29
/* 800AD7E8 000AA728  57 BF 2C F4 */	rlwinm r31, r29, 5, 0x13, 0x1a
/* 800AD7EC 000AA72C  48 00 00 AD */	bl getBufferPointer__Q27JAInter2FxFUc
/* 800AD7F0 000AA730  7C 64 1B 78 */	mr r4, r3
/* 800AD7F4 000AA734  7F A3 EB 78 */	mr r3, r29
/* 800AD7F8 000AA738  7C BE FA 14 */	add r5, r30, r31
/* 800AD7FC 000AA73C  4B FF 7C E9 */	bl setFXLine__6JASDspFUcPsPQ26JASDsp13FxlineConfig_
.L_800AD800:
/* 800AD800 000AA740  3B BD 00 01 */	addi r29, r29, 1
.L_800AD804:
/* 800AD804 000AA744  57 A0 06 3E */	clrlwi r0, r29, 0x18
/* 800AD808 000AA748  28 00 00 04 */	cmplwi r0, 4
/* 800AD80C 000AA74C  41 80 FF 90 */	blt .L_800AD79C
.L_800AD810:
/* 800AD810 000AA750  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800AD814 000AA754  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800AD818 000AA758  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800AD81C 000AA75C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 800AD820 000AA760  7C 08 03 A6 */	mtlr r0
/* 800AD824 000AA764  38 21 00 20 */	addi r1, r1, 0x20
/* 800AD828 000AA768  4E 80 00 20 */	blr 
.endfn init__Q27JAInter2FxFv

.fn setSceneMax__Q27JAInter2FxFUc, global
/* 800AD82C 000AA76C  98 6D 8B A4 */	stb r3, mSceneMax__Q27JAInter2Fx@sda21(r13)
/* 800AD830 000AA770  4E 80 00 20 */	blr 
.endfn setSceneMax__Q27JAInter2FxFUc

.fn setBufferMax__Q27JAInter2FxFUlUlUlUl, global
/* 800AD834 000AA774  80 ED 8B A8 */	lwz r7, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
/* 800AD838 000AA778  90 67 00 00 */	stw r3, 0(r7)
/* 800AD83C 000AA77C  80 6D 8B A8 */	lwz r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
/* 800AD840 000AA780  90 83 00 04 */	stw r4, 4(r3)
/* 800AD844 000AA784  80 6D 8B A8 */	lwz r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
/* 800AD848 000AA788  90 A3 00 08 */	stw r5, 8(r3)
/* 800AD84C 000AA78C  80 6D 8B A8 */	lwz r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
/* 800AD850 000AA790  90 C3 00 0C */	stw r6, 0xc(r3)
/* 800AD854 000AA794  4E 80 00 20 */	blr 
.endfn setBufferMax__Q27JAInter2FxFUlUlUlUl

.fn setTablePointer__Q27JAInter2FxFPPv, global
/* 800AD858 000AA798  90 6D 8B B0 */	stw r3, mFxconfigTable__Q27JAInter2Fx@sda21(r13)
/* 800AD85C 000AA79C  4E 80 00 20 */	blr 
.endfn setTablePointer__Q27JAInter2FxFPPv

.fn setBufferPointer__Q27JAInter2FxFUcPs, global
/* 800AD860 000AA7A0  80 AD 8B AC */	lwz r5, mBufferPointer__Q27JAInter2Fx@sda21(r13)
/* 800AD864 000AA7A4  54 60 15 BA */	rlwinm r0, r3, 2, 0x16, 0x1d
/* 800AD868 000AA7A8  7C 85 01 2E */	stwx r4, r5, r0
/* 800AD86C 000AA7AC  4E 80 00 20 */	blr 
.endfn setBufferPointer__Q27JAInter2FxFUcPs

.fn setScenePointer__Q27JAInter2FxFUcPv, global
/* 800AD870 000AA7B0  80 AD 8B B0 */	lwz r5, mFxconfigTable__Q27JAInter2Fx@sda21(r13)
/* 800AD874 000AA7B4  54 60 15 BA */	rlwinm r0, r3, 2, 0x16, 0x1d
/* 800AD878 000AA7B8  7C 85 01 2E */	stwx r4, r5, r0
/* 800AD87C 000AA7BC  4E 80 00 20 */	blr 
.endfn setScenePointer__Q27JAInter2FxFUcPv

.fn getSceneMax__Q27JAInter2FxFv, global
/* 800AD880 000AA7C0  88 6D 8B A4 */	lbz r3, mSceneMax__Q27JAInter2Fx@sda21(r13)
/* 800AD884 000AA7C4  4E 80 00 20 */	blr 
.endfn getSceneMax__Q27JAInter2FxFv

.fn getBufferSizeMax__Q27JAInter2FxFUc, global
/* 800AD888 000AA7C8  80 8D 8B A8 */	lwz r4, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
/* 800AD88C 000AA7CC  54 60 15 BA */	rlwinm r0, r3, 2, 0x16, 0x1d
/* 800AD890 000AA7D0  7C 64 00 2E */	lwzx r3, r4, r0
/* 800AD894 000AA7D4  4E 80 00 20 */	blr 
.endfn getBufferSizeMax__Q27JAInter2FxFUc

.fn getBufferPointer__Q27JAInter2FxFUc, global
/* 800AD898 000AA7D8  80 8D 8B AC */	lwz r4, mBufferPointer__Q27JAInter2Fx@sda21(r13)
/* 800AD89C 000AA7DC  54 60 15 BA */	rlwinm r0, r3, 2, 0x16, 0x1d
/* 800AD8A0 000AA7E0  7C 64 00 2E */	lwzx r3, r4, r0
/* 800AD8A4 000AA7E4  4E 80 00 20 */	blr 
.endfn getBufferPointer__Q27JAInter2FxFUc

.fn getFxconfigTable__Q27JAInter2FxFv, global
/* 800AD8A8 000AA7E8  80 6D 8B B0 */	lwz r3, mFxconfigTable__Q27JAInter2Fx@sda21(r13)
/* 800AD8AC 000AA7EC  4E 80 00 20 */	blr 
.endfn getFxconfigTable__Q27JAInter2FxFv

.fn clearAllBuffer__Q27JAInter2FxFv, global
/* 800AD8B0 000AA7F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AD8B4 000AA7F4  7C 08 02 A6 */	mflr r0
/* 800AD8B8 000AA7F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AD8BC 000AA7FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AD8C0 000AA800  3B E0 00 00 */	li r31, 0
/* 800AD8C4 000AA804  48 00 00 6C */	b .L_800AD930
.L_800AD8C8:
/* 800AD8C8 000AA808  80 0D 8B AC */	lwz r0, mBufferPointer__Q27JAInter2Fx@sda21(r13)
/* 800AD8CC 000AA80C  28 00 00 00 */	cmplwi r0, 0
/* 800AD8D0 000AA810  41 82 00 5C */	beq .L_800AD92C
/* 800AD8D4 000AA814  38 A0 00 00 */	li r5, 0
/* 800AD8D8 000AA818  57 E7 15 BA */	rlwinm r7, r31, 2, 0x16, 0x1d
/* 800AD8DC 000AA81C  7C A6 2B 78 */	mr r6, r5
/* 800AD8E0 000AA820  7C A4 2B 78 */	mr r4, r5
/* 800AD8E4 000AA824  48 00 00 18 */	b .L_800AD8FC
.L_800AD8E8:
/* 800AD8E8 000AA828  80 0D 8B AC */	lwz r0, mBufferPointer__Q27JAInter2Fx@sda21(r13)
/* 800AD8EC 000AA82C  38 A5 00 01 */	addi r5, r5, 1
/* 800AD8F0 000AA830  7C 67 00 2E */	lwzx r3, r7, r0
/* 800AD8F4 000AA834  7C 83 33 2E */	sthx r4, r3, r6
/* 800AD8F8 000AA838  38 C6 00 02 */	addi r6, r6, 2
.L_800AD8FC:
/* 800AD8FC 000AA83C  80 6D 8B A8 */	lwz r3, mBufferSizeMax__Q27JAInter2Fx@sda21(r13)
/* 800AD900 000AA840  7C 07 18 2E */	lwzx r0, r7, r3
/* 800AD904 000AA844  1C 00 00 A0 */	mulli r0, r0, 0xa0
/* 800AD908 000AA848  54 00 F8 7E */	srwi r0, r0, 1
/* 800AD90C 000AA84C  7C 05 00 40 */	cmplw r5, r0
/* 800AD910 000AA850  41 80 FF D8 */	blt .L_800AD8E8
/* 800AD914 000AA854  7C 03 38 2E */	lwzx r0, r3, r7
/* 800AD918 000AA858  80 6D 8B AC */	lwz r3, mBufferPointer__Q27JAInter2Fx@sda21(r13)
/* 800AD91C 000AA85C  1C 00 00 A0 */	mulli r0, r0, 0xa0
/* 800AD920 000AA860  7C 63 38 2E */	lwzx r3, r3, r7
/* 800AD924 000AA864  54 04 F8 7E */	srwi r4, r0, 1
/* 800AD928 000AA868  48 03 ED F1 */	bl DCFlushRange
.L_800AD92C:
/* 800AD92C 000AA86C  3B FF 00 01 */	addi r31, r31, 1
.L_800AD930:
/* 800AD930 000AA870  57 E0 06 3E */	clrlwi r0, r31, 0x18
/* 800AD934 000AA874  28 00 00 04 */	cmplwi r0, 4
/* 800AD938 000AA878  41 80 FF 90 */	blt .L_800AD8C8
/* 800AD93C 000AA87C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AD940 000AA880  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AD944 000AA884  7C 08 03 A6 */	mtlr r0
/* 800AD948 000AA888  38 21 00 10 */	addi r1, r1, 0x10
/* 800AD94C 000AA88C  4E 80 00 20 */	blr 
.endfn clearAllBuffer__Q27JAInter2FxFv
