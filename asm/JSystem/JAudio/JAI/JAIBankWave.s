.include "macros.inc"
.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global flags__Q27JAInter8BankWave
flags__Q27JAInter8BankWave:
	.4byte 0x00000000
.global SceneSetFlag__Q27JAInter8BankWave
SceneSetFlag__Q27JAInter8BankWave:
	.4byte 0xFFFFFFFF
.global initCallback__Q27JAInter8BankWave
initCallback__Q27JAInter8BankWave:
	.4byte init__Q27JAInter8BankWaveFv
.global firstLoadCallback__Q27JAInter8BankWave
firstLoadCallback__Q27JAInter8BankWave:
	.4byte loadFirstStayWave__Q27JAInter8BankWaveFv
.global secondLoadCallback__Q27JAInter8BankWave
secondLoadCallback__Q27JAInter8BankWave:
	.4byte loadSecondStayWave__Q27JAInter8BankWaveFv

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global initOnCodeBnk__Q27JAInter8BankWave
initOnCodeBnk__Q27JAInter8BankWave:
	.skip 0x4
.global initOnCodeWs__Q27JAInter8BankWave
initOnCodeWs__Q27JAInter8BankWave:
	.skip 0x4
.global wsGroupNumber__Q27JAInter8BankWave
wsGroupNumber__Q27JAInter8BankWave:
	.skip 0x4
.global wsLoadStatus__Q27JAInter8BankWave
wsLoadStatus__Q27JAInter8BankWave:
	.skip 0x4
.global wsMax__Q27JAInter8BankWave
wsMax__Q27JAInter8BankWave:
	.skip 0x4

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setInitCallback__Q27JAInter8BankWaveFPFv_v
setInitCallback__Q27JAInter8BankWaveFPFv_v:
/* 800ABE44 000A8D84  90 6D 81 48 */	stw r3, initCallback__Q27JAInter8BankWave@sda21(r13)
/* 800ABE48 000A8D88  4E 80 00 20 */	blr 

.global setFirstLoadCallback__Q27JAInter8BankWaveFPFv_v
setFirstLoadCallback__Q27JAInter8BankWaveFPFv_v:
/* 800ABE4C 000A8D8C  90 6D 81 4C */	stw r3, firstLoadCallback__Q27JAInter8BankWave@sda21(r13)
/* 800ABE50 000A8D90  4E 80 00 20 */	blr 

.global setSecondLoadCallback__Q27JAInter8BankWaveFPFv_v
setSecondLoadCallback__Q27JAInter8BankWaveFPFv_v:
/* 800ABE54 000A8D94  90 6D 81 50 */	stw r3, secondLoadCallback__Q27JAInter8BankWave@sda21(r13)
/* 800ABE58 000A8D98  4E 80 00 20 */	blr 

.global init__Q27JAInter8BankWaveFv
init__Q27JAInter8BankWaveFv:
/* 800ABE5C 000A8D9C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800ABE60 000A8DA0  7C 08 02 A6 */	mflr r0
/* 800ABE64 000A8DA4  38 A0 00 20 */	li r5, 0x20
/* 800ABE68 000A8DA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 800ABE6C 000A8DAC  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 800ABE70 000A8DB0  80 0D 8B 60 */	lwz r0, wsMax__Q27JAInter8BankWave@sda21(r13)
/* 800ABE74 000A8DB4  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800ABE78 000A8DB8  54 03 10 3A */	slwi r3, r0, 2
/* 800ABE7C 000A8DBC  4B F7 81 CD */	bl __nwa__FUlP7JKRHeapi
/* 800ABE80 000A8DC0  80 0D 8B 60 */	lwz r0, wsMax__Q27JAInter8BankWave@sda21(r13)
/* 800ABE84 000A8DC4  38 A0 00 20 */	li r5, 0x20
/* 800ABE88 000A8DC8  90 6D 8B 58 */	stw r3, wsGroupNumber__Q27JAInter8BankWave@sda21(r13)
/* 800ABE8C 000A8DCC  80 8D 8B 6C */	lwz r4, msCurrentHeap__8JAIBasic@sda21(r13)
/* 800ABE90 000A8DD0  54 03 10 3A */	slwi r3, r0, 2
/* 800ABE94 000A8DD4  4B F7 81 B5 */	bl __nwa__FUlP7JKRHeapi
/* 800ABE98 000A8DD8  90 6D 8B 5C */	stw r3, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
/* 800ABE9C 000A8DDC  48 00 1C 91 */	bl getParamWavePath__18JAIGlobalParameterFv
/* 800ABEA0 000A8DE0  4B FE FB 95 */	bl setCurrentDir__16JASWaveArcLoaderFPCc
/* 800ABEA4 000A8DE4  38 60 01 00 */	li r3, 0x100
/* 800ABEA8 000A8DE8  4B FF 01 9D */	bl init__14JASWaveBankMgrFi
/* 800ABEAC 000A8DEC  38 60 00 00 */	li r3, 0
/* 800ABEB0 000A8DF0  4B FE FB 59 */	bl init__16JASWaveArcLoaderFP7JASHeap
/* 800ABEB4 000A8DF4  80 0D 8B 54 */	lwz r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
/* 800ABEB8 000A8DF8  28 00 00 00 */	cmplwi r0, 0
/* 800ABEBC 000A8DFC  41 82 00 58 */	beq .L_800ABF14
/* 800ABEC0 000A8E00  3B A0 00 00 */	li r29, 0
/* 800ABEC4 000A8E04  3B 60 00 00 */	li r27, 0
/* 800ABEC8 000A8E08  7F BC EB 78 */	mr r28, r29
/* 800ABECC 000A8E0C  3B C0 FF FF */	li r30, -1
/* 800ABED0 000A8E10  7F BF EB 78 */	mr r31, r29
/* 800ABED4 000A8E14  48 00 00 30 */	b .L_800ABF04
.L_800ABED8:
/* 800ABED8 000A8E18  28 04 00 00 */	cmplwi r4, 0
/* 800ABEDC 000A8E1C  41 82 00 1C */	beq .L_800ABEF8
/* 800ABEE0 000A8E20  7F 63 DB 78 */	mr r3, r27
/* 800ABEE4 000A8E24  4B FF 01 E9 */	bl registWaveBankWS__14JASWaveBankMgrFiPv
/* 800ABEE8 000A8E28  80 6D 8B 58 */	lwz r3, wsGroupNumber__Q27JAInter8BankWave@sda21(r13)
/* 800ABEEC 000A8E2C  7F C3 E1 2E */	stwx r30, r3, r28
/* 800ABEF0 000A8E30  80 6D 8B 5C */	lwz r3, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
/* 800ABEF4 000A8E34  7F E3 E1 2E */	stwx r31, r3, r28
.L_800ABEF8:
/* 800ABEF8 000A8E38  3B BD 00 0C */	addi r29, r29, 0xc
/* 800ABEFC 000A8E3C  3B 9C 00 04 */	addi r28, r28, 4
/* 800ABF00 000A8E40  3B 7B 00 01 */	addi r27, r27, 1
.L_800ABF04:
/* 800ABF04 000A8E44  80 6D 8B 54 */	lwz r3, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
/* 800ABF08 000A8E48  7C 83 E8 2E */	lwzx r4, r3, r29
/* 800ABF0C 000A8E4C  28 04 00 00 */	cmplwi r4, 0
/* 800ABF10 000A8E50  40 82 FF C8 */	bne .L_800ABED8
.L_800ABF14:
/* 800ABF14 000A8E54  38 60 01 00 */	li r3, 0x100
/* 800ABF18 000A8E58  4B FE D0 1D */	bl init__10JASBankMgrFi
/* 800ABF1C 000A8E5C  80 0D 8B 50 */	lwz r0, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
/* 800ABF20 000A8E60  28 00 00 00 */	cmplwi r0, 0
/* 800ABF24 000A8E64  41 82 00 6C */	beq .L_800ABF90
/* 800ABF28 000A8E68  3B 60 00 00 */	li r27, 0
/* 800ABF2C 000A8E6C  3B 80 00 00 */	li r28, 0
/* 800ABF30 000A8E70  48 00 00 1C */	b .L_800ABF4C
.L_800ABF34:
/* 800ABF34 000A8E74  28 04 00 00 */	cmplwi r4, 0
/* 800ABF38 000A8E78  41 82 00 0C */	beq .L_800ABF44
/* 800ABF3C 000A8E7C  7F 63 DB 78 */	mr r3, r27
/* 800ABF40 000A8E80  4B FE D1 2D */	bl registBankBNK__10JASBankMgrFiPv
.L_800ABF44:
/* 800ABF44 000A8E84  3B 9C 00 0C */	addi r28, r28, 0xc
/* 800ABF48 000A8E88  3B 7B 00 01 */	addi r27, r27, 1
.L_800ABF4C:
/* 800ABF4C 000A8E8C  80 6D 8B 50 */	lwz r3, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
/* 800ABF50 000A8E90  7C 83 E0 2E */	lwzx r4, r3, r28
/* 800ABF54 000A8E94  28 04 00 00 */	cmplwi r4, 0
/* 800ABF58 000A8E98  40 82 FF DC */	bne .L_800ABF34
/* 800ABF5C 000A8E9C  3B A0 00 00 */	li r29, 0
/* 800ABF60 000A8EA0  7F BC EB 78 */	mr r28, r29
/* 800ABF64 000A8EA4  48 00 00 18 */	b .L_800ABF7C
.L_800ABF68:
/* 800ABF68 000A8EA8  80 83 00 08 */	lwz r4, 8(r3)
/* 800ABF6C 000A8EAC  7F A3 EB 78 */	mr r3, r29
/* 800ABF70 000A8EB0  4B FE D1 8D */	bl assignWaveBank__10JASBankMgrFii
/* 800ABF74 000A8EB4  3B 9C 00 0C */	addi r28, r28, 0xc
/* 800ABF78 000A8EB8  3B BD 00 01 */	addi r29, r29, 1
.L_800ABF7C:
/* 800ABF7C 000A8EBC  80 0D 8B 50 */	lwz r0, initOnCodeBnk__Q27JAInter8BankWave@sda21(r13)
/* 800ABF80 000A8EC0  7C 60 E2 14 */	add r3, r0, r28
/* 800ABF84 000A8EC4  80 03 00 00 */	lwz r0, 0(r3)
/* 800ABF88 000A8EC8  28 00 00 00 */	cmplwi r0, 0
/* 800ABF8C 000A8ECC  40 82 FF DC */	bne .L_800ABF68
.L_800ABF90:
/* 800ABF90 000A8ED0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 800ABF94 000A8ED4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800ABF98 000A8ED8  7C 08 03 A6 */	mtlr r0
/* 800ABF9C 000A8EDC  38 21 00 20 */	addi r1, r1, 0x20
/* 800ABFA0 000A8EE0  4E 80 00 20 */	blr 

.global loadFirstStayWave__Q27JAInter8BankWaveFv
loadFirstStayWave__Q27JAInter8BankWaveFv:
/* 800ABFA4 000A8EE4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ABFA8 000A8EE8  7C 08 02 A6 */	mflr r0
/* 800ABFAC 000A8EEC  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ABFB0 000A8EF0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800ABFB4 000A8EF4  93 C1 00 08 */	stw r30, 8(r1)
/* 800ABFB8 000A8EF8  80 0D 8B 54 */	lwz r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
/* 800ABFBC 000A8EFC  28 00 00 00 */	cmplwi r0, 0
/* 800ABFC0 000A8F00  41 82 00 60 */	beq .L_800AC020
/* 800ABFC4 000A8F04  88 0D 81 40 */	lbz r0, flags__Q27JAInter8BankWave@sda21(r13)
/* 800ABFC8 000A8F08  54 00 CF FF */	rlwinm. r0, r0, 0x19, 0x1f, 0x1f
/* 800ABFCC 000A8F0C  40 82 00 54 */	bne .L_800AC020
/* 800ABFD0 000A8F10  3B C0 00 00 */	li r30, 0
/* 800ABFD4 000A8F14  3B E0 00 00 */	li r31, 0
/* 800ABFD8 000A8F18  48 00 00 24 */	b .L_800ABFFC
.L_800ABFDC:
/* 800ABFDC 000A8F1C  80 03 00 08 */	lwz r0, 8(r3)
/* 800ABFE0 000A8F20  28 00 00 00 */	cmplwi r0, 0
/* 800ABFE4 000A8F24  40 82 00 10 */	bne .L_800ABFF4
/* 800ABFE8 000A8F28  7F C3 F3 78 */	mr r3, r30
/* 800ABFEC 000A8F2C  38 80 00 00 */	li r4, 0
/* 800ABFF0 000A8F30  48 00 00 F5 */	bl loadGroupWave__Q27JAInter8BankWaveFll
.L_800ABFF4:
/* 800ABFF4 000A8F34  3B FF 00 0C */	addi r31, r31, 0xc
/* 800ABFF8 000A8F38  3B DE 00 01 */	addi r30, r30, 1
.L_800ABFFC:
/* 800ABFFC 000A8F3C  80 0D 8B 54 */	lwz r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
/* 800AC000 000A8F40  7C 60 FA 14 */	add r3, r0, r31
/* 800AC004 000A8F44  80 03 00 00 */	lwz r0, 0(r3)
/* 800AC008 000A8F48  28 00 00 00 */	cmplwi r0, 0
/* 800AC00C 000A8F4C  40 82 FF D0 */	bne .L_800ABFDC
/* 800AC010 000A8F50  88 0D 81 40 */	lbz r0, flags__Q27JAInter8BankWave@sda21(r13)
/* 800AC014 000A8F54  38 60 00 01 */	li r3, 1
/* 800AC018 000A8F58  50 60 3E 30 */	rlwimi r0, r3, 7, 0x18, 0x18
/* 800AC01C 000A8F5C  98 0D 81 40 */	stb r0, flags__Q27JAInter8BankWave@sda21(r13)
.L_800AC020:
/* 800AC020 000A8F60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC024 000A8F64  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC028 000A8F68  83 C1 00 08 */	lwz r30, 8(r1)
/* 800AC02C 000A8F6C  7C 08 03 A6 */	mtlr r0
/* 800AC030 000A8F70  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC034 000A8F74  4E 80 00 20 */	blr 

.global loadSecondStayWave__Q27JAInter8BankWaveFv
loadSecondStayWave__Q27JAInter8BankWaveFv:
/* 800AC038 000A8F78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC03C 000A8F7C  7C 08 02 A6 */	mflr r0
/* 800AC040 000A8F80  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC044 000A8F84  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC048 000A8F88  93 C1 00 08 */	stw r30, 8(r1)
/* 800AC04C 000A8F8C  88 0D 81 40 */	lbz r0, flags__Q27JAInter8BankWave@sda21(r13)
/* 800AC050 000A8F90  54 00 D7 FF */	rlwinm. r0, r0, 0x1a, 0x1f, 0x1f
/* 800AC054 000A8F94  40 82 00 60 */	bne .L_800AC0B4
/* 800AC058 000A8F98  80 0D 8B 54 */	lwz r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
/* 800AC05C 000A8F9C  28 00 00 00 */	cmplwi r0, 0
/* 800AC060 000A8FA0  41 82 00 54 */	beq .L_800AC0B4
/* 800AC064 000A8FA4  3B C0 00 00 */	li r30, 0
/* 800AC068 000A8FA8  3B E0 00 00 */	li r31, 0
/* 800AC06C 000A8FAC  48 00 00 24 */	b .L_800AC090
.L_800AC070:
/* 800AC070 000A8FB0  80 03 00 08 */	lwz r0, 8(r3)
/* 800AC074 000A8FB4  28 00 00 01 */	cmplwi r0, 1
/* 800AC078 000A8FB8  40 82 00 10 */	bne .L_800AC088
/* 800AC07C 000A8FBC  7F C3 F3 78 */	mr r3, r30
/* 800AC080 000A8FC0  38 80 00 00 */	li r4, 0
/* 800AC084 000A8FC4  48 00 00 61 */	bl loadGroupWave__Q27JAInter8BankWaveFll
.L_800AC088:
/* 800AC088 000A8FC8  3B FF 00 0C */	addi r31, r31, 0xc
/* 800AC08C 000A8FCC  3B DE 00 01 */	addi r30, r30, 1
.L_800AC090:
/* 800AC090 000A8FD0  80 0D 8B 54 */	lwz r0, initOnCodeWs__Q27JAInter8BankWave@sda21(r13)
/* 800AC094 000A8FD4  7C 60 FA 14 */	add r3, r0, r31
/* 800AC098 000A8FD8  80 03 00 00 */	lwz r0, 0(r3)
/* 800AC09C 000A8FDC  28 00 00 00 */	cmplwi r0, 0
/* 800AC0A0 000A8FE0  40 82 FF D0 */	bne .L_800AC070
/* 800AC0A4 000A8FE4  88 0D 81 40 */	lbz r0, flags__Q27JAInter8BankWave@sda21(r13)
/* 800AC0A8 000A8FE8  38 60 00 01 */	li r3, 1
/* 800AC0AC 000A8FEC  50 60 36 72 */	rlwimi r0, r3, 6, 0x19, 0x19
/* 800AC0B0 000A8FF0  98 0D 81 40 */	stb r0, flags__Q27JAInter8BankWave@sda21(r13)
.L_800AC0B4:
/* 800AC0B4 000A8FF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC0B8 000A8FF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC0BC 000A8FFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 800AC0C0 000A9000  7C 08 03 A6 */	mtlr r0
/* 800AC0C4 000A9004  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC0C8 000A9008  4E 80 00 20 */	blr 

.global finishSceneSet__Q27JAInter8BankWaveFUl
finishSceneSet__Q27JAInter8BankWaveFUl:
/* 800AC0CC 000A900C  90 6D 81 44 */	stw r3, SceneSetFlag__Q27JAInter8BankWave@sda21(r13)
/* 800AC0D0 000A9010  54 60 93 BA */	rlwinm r0, r3, 0x12, 0xe, 0x1d
/* 800AC0D4 000A9014  80 6D 8B 5C */	lwz r3, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
/* 800AC0D8 000A9018  38 80 00 02 */	li r4, 2
/* 800AC0DC 000A901C  7C 83 01 2E */	stwx r4, r3, r0
/* 800AC0E0 000A9020  4E 80 00 20 */	blr 

.global loadGroupWave__Q27JAInter8BankWaveFll
loadGroupWave__Q27JAInter8BankWaveFll:
/* 800AC0E4 000A9024  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800AC0E8 000A9028  7C 08 02 A6 */	mflr r0
/* 800AC0EC 000A902C  38 A0 00 00 */	li r5, 0
/* 800AC0F0 000A9030  90 01 00 14 */	stw r0, 0x14(r1)
/* 800AC0F4 000A9034  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800AC0F8 000A9038  7C 7F 1B 78 */	mr r31, r3
/* 800AC0FC 000A903C  93 C1 00 08 */	stw r30, 8(r1)
/* 800AC100 000A9040  7C 9E 23 78 */	mr r30, r4
/* 800AC104 000A9044  4B FF 00 49 */	bl loadWave__14JASWaveBankMgrFiiP7JASHeap
/* 800AC108 000A9048  38 00 FF FF */	li r0, -1
/* 800AC10C 000A904C  3C 60 80 0B */	lis r3, finishSceneSet__Q27JAInter8BankWaveFUl@ha
/* 800AC110 000A9050  90 0D 81 44 */	stw r0, SceneSetFlag__Q27JAInter8BankWave@sda21(r13)
/* 800AC114 000A9054  57 E0 80 1E */	slwi r0, r31, 0x10
/* 800AC118 000A9058  80 8D 8B 5C */	lwz r4, wsLoadStatus__Q27JAInter8BankWave@sda21(r13)
/* 800AC11C 000A905C  57 FF 10 3A */	slwi r31, r31, 2
/* 800AC120 000A9060  38 C0 00 01 */	li r6, 1
/* 800AC124 000A9064  38 A3 C0 CC */	addi r5, r3, finishSceneSet__Q27JAInter8BankWaveFUl@l
/* 800AC128 000A9068  7C C4 F9 2E */	stwx r6, r4, r31
/* 800AC12C 000A906C  7C 60 F2 14 */	add r3, r0, r30
/* 800AC130 000A9070  38 80 00 00 */	li r4, 0
/* 800AC134 000A9074  4B FF A8 DD */	bl checkPassDvdT__6JASDvdFUlPUlPFUl_v
/* 800AC138 000A9078  80 6D 8B 58 */	lwz r3, wsGroupNumber__Q27JAInter8BankWave@sda21(r13)
/* 800AC13C 000A907C  7F C3 F9 2E */	stwx r30, r3, r31
/* 800AC140 000A9080  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800AC144 000A9084  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800AC148 000A9088  83 C1 00 08 */	lwz r30, 8(r1)
/* 800AC14C 000A908C  7C 08 03 A6 */	mtlr r0
/* 800AC150 000A9090  38 21 00 10 */	addi r1, r1, 0x10
/* 800AC154 000A9094  4E 80 00 20 */	blr 
