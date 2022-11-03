.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.global lbl_80479688
lbl_80479688:
	.asciz "JaiInit.aaf"
.global lbl_80479694
lbl_80479694:
	.asciz "AudioRes/"
	.skip 2
.global lbl_804796A0
lbl_804796A0:
	.asciz "JaiSeqs.arc"

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 8
.global distanceParameterMoveTime__18JAIGlobalParameter
distanceParameterMoveTime__18JAIGlobalParameter:
	.byte 0x3
.global audioSystemThreadPriority__18JAIGlobalParameter
audioSystemThreadPriority__18JAIGlobalParameter:
	.byte 0x2
.global audioDvdThreadPriority__18JAIGlobalParameter
audioDvdThreadPriority__18JAIGlobalParameter:
	.byte 0x3
.global seqMuteVolumeSePlay__18JAIGlobalParameter
seqMuteVolumeSePlay__18JAIGlobalParameter:
	.byte 0x28
.global seqParameterLines__18JAIGlobalParameter
seqParameterLines__18JAIGlobalParameter:
	.byte 0x7
.global streamParameterLines__18JAIGlobalParameter
streamParameterLines__18JAIGlobalParameter:
	.byte 0x7
.global seDistanceFxParameter__18JAIGlobalParameter
seDistanceFxParameter__18JAIGlobalParameter:
	.byte 0x0
	.byte 0x96
.global soundSceneMax__18JAIGlobalParameter
soundSceneMax__18JAIGlobalParameter:
	.4byte 0x00000002
.global seRegistMax__18JAIGlobalParameter
seRegistMax__18JAIGlobalParameter:
	.4byte 0x00000014
.global seTrackMax__18JAIGlobalParameter
seTrackMax__18JAIGlobalParameter:
	.4byte 0x00000020
.global seqTrackMax__18JAIGlobalParameter
seqTrackMax__18JAIGlobalParameter:
	.4byte 0x00000020
.global seqPlayTrackMax__18JAIGlobalParameter
seqPlayTrackMax__18JAIGlobalParameter:
	.4byte 0x00000008
.global seqControlBufferMax__18JAIGlobalParameter
seqControlBufferMax__18JAIGlobalParameter:
	.4byte 0x00000008
.global autoHeapMax__18JAIGlobalParameter
autoHeapMax__18JAIGlobalParameter:
	.4byte 0x00000002
.global stayHeapMax__18JAIGlobalParameter
stayHeapMax__18JAIGlobalParameter:
	.4byte 0x00000002
.global autoHeapRoomSize__18JAIGlobalParameter
autoHeapRoomSize__18JAIGlobalParameter:
	.4byte 0x0000C000
.global stayHeapSize__18JAIGlobalParameter
stayHeapSize__18JAIGlobalParameter:
	.4byte 0x00010000
.global initDataFileName__18JAIGlobalParameter
initDataFileName__18JAIGlobalParameter:
	.4byte lbl_80479688
.global wavePath__18JAIGlobalParameter
wavePath__18JAIGlobalParameter:
	.4byte lbl_80516F28
.global sequenceArchivesPath__18JAIGlobalParameter
sequenceArchivesPath__18JAIGlobalParameter:
	.4byte lbl_80516F30
.global streamPath__18JAIGlobalParameter
streamPath__18JAIGlobalParameter:
	.4byte lbl_80516F38
.global audioResPath__18JAIGlobalParameter
audioResPath__18JAIGlobalParameter:
	.4byte lbl_80479694
.global sequenceArchivesFileName__18JAIGlobalParameter
sequenceArchivesFileName__18JAIGlobalParameter:
	.4byte lbl_804796A0
.global inputGainDown__18JAIGlobalParameter
inputGainDown__18JAIGlobalParameter:
	.float 0.5
.global outputGainUp__18JAIGlobalParameter
outputGainUp__18JAIGlobalParameter:
	.float 1.2
.global distanceMax__18JAIGlobalParameter
distanceMax__18JAIGlobalParameter:
	.float 5000.0
.global maxVolumeDistance__18JAIGlobalParameter
maxVolumeDistance__18JAIGlobalParameter:
	.float 1000.0
.global seDolbyCenterValue__18JAIGlobalParameter
seDolbyCenterValue__18JAIGlobalParameter:
	.float 30.0
.global seDolbyFrontDistanceMax__18JAIGlobalParameter
seDolbyFrontDistanceMax__18JAIGlobalParameter:
	.float -300.0
.global seDolbyBehindDistanceMax__18JAIGlobalParameter
seDolbyBehindDistanceMax__18JAIGlobalParameter:
	.float 1000.0
.global dopplarMoveTime__18JAIGlobalParameter
dopplarMoveTime__18JAIGlobalParameter:
	.4byte 0x0000000F
.global dummyObjectLifeTime__18JAIGlobalParameter
dummyObjectLifeTime__18JAIGlobalParameter:
	.4byte 0x00000258
.global dummyObjectMax__18JAIGlobalParameter
dummyObjectMax__18JAIGlobalParameter:
	.4byte 0x0000000A
.global seqMuteMoveSpeedSePlay__18JAIGlobalParameter
seqMuteMoveSpeedSePlay__18JAIGlobalParameter:
	.4byte 0x00000003
.global audioCameraMax__18JAIGlobalParameter
audioCameraMax__18JAIGlobalParameter:
	.4byte 0x00000001
.global systemTrackMax__18JAIGlobalParameter
systemTrackMax__18JAIGlobalParameter:
	.4byte 0x00000100
.global systemRootTrackMax__18JAIGlobalParameter
systemRootTrackMax__18JAIGlobalParameter:
	.4byte 0x00000010
.global panDistanceMax__18JAIGlobalParameter
panDistanceMax__18JAIGlobalParameter:
	.float 500.0
.global panDistance2Max__18JAIGlobalParameter
panDistance2Max__18JAIGlobalParameter:
	.float 1000.0
.global panAngleParameter__18JAIGlobalParameter
panAngleParameter__18JAIGlobalParameter:
	.float 12.0
.global panAngleParameter2__18JAIGlobalParameter
panAngleParameter2__18JAIGlobalParameter:
	.float 2.4
.global dopplarParameter__18JAIGlobalParameter
dopplarParameter__18JAIGlobalParameter:
	.float 3200.0
.global seDistanceWaitMax__18JAIGlobalParameter
seDistanceWaitMax__18JAIGlobalParameter:
	.4byte 0x000C0000
.global seDistancepitchMax__18JAIGlobalParameter
seDistancepitchMax__18JAIGlobalParameter:
	.float 0.2

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.global seDefaultFx__18JAIGlobalParameter
seDefaultFx__18JAIGlobalParameter:
	.skip 0x4
.global interfaceHeapSize__18JAIGlobalParameter
interfaceHeapSize__18JAIGlobalParameter:
	.skip 0x4
.global minDistanceVolume__18JAIGlobalParameter
minDistanceVolume__18JAIGlobalParameter:
	.skip 0x8

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.global lbl_80516F28
lbl_80516F28:
	.asciz "Banks/"
	.skip 1
.global lbl_80516F30
lbl_80516F30:
	.asciz "Seqs/"
	.skip 2
.global lbl_80516F38
lbl_80516F38:
	.asciz "Stream/"

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global setParamInitDataPointer__18JAIGlobalParameterFPv
setParamInitDataPointer__18JAIGlobalParameterFPv:
/* 800AD950 000AA890  90 6D 8B C8 */	stw r3, aafPointer__Q27JAInter8InitData@sda21(r13)
/* 800AD954 000AA894  38 00 00 04 */	li r0, 4
/* 800AD958 000AA898  80 6D 8B 68 */	lwz r3, msBasic__8JAIBasic@sda21(r13)
/* 800AD95C 000AA89C  98 03 00 0C */	stb r0, 0xc(r3)
/* 800AD960 000AA8A0  4E 80 00 20 */	blr 

.global setParamSoundSceneMax__18JAIGlobalParameterFUl
setParamSoundSceneMax__18JAIGlobalParameterFUl:
/* 800AD964 000AA8A4  90 6D 81 68 */	stw r3, soundSceneMax__18JAIGlobalParameter@sda21(r13)
/* 800AD968 000AA8A8  4E 80 00 20 */	blr 

.global setParamSeTrackMax__18JAIGlobalParameterFUl
setParamSeTrackMax__18JAIGlobalParameterFUl:
/* 800AD96C 000AA8AC  90 6D 81 70 */	stw r3, seTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800AD970 000AA8B0  4E 80 00 20 */	blr 

.global setParamSeqPlayTrackMax__18JAIGlobalParameterFUl
setParamSeqPlayTrackMax__18JAIGlobalParameterFUl:
/* 800AD974 000AA8B4  54 60 08 3C */	slwi r0, r3, 1
/* 800AD978 000AA8B8  90 6D 81 78 */	stw r3, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800AD97C 000AA8BC  90 0D 81 7C */	stw r0, seqControlBufferMax__18JAIGlobalParameter@sda21(r13)
/* 800AD980 000AA8C0  4E 80 00 20 */	blr 

.global setParamSeqControlBufferMax__18JAIGlobalParameterFUl
setParamSeqControlBufferMax__18JAIGlobalParameterFUl:
/* 800AD984 000AA8C4  90 6D 81 7C */	stw r3, seqControlBufferMax__18JAIGlobalParameter@sda21(r13)
/* 800AD988 000AA8C8  4E 80 00 20 */	blr 

.global setParamAutoHeapMax__18JAIGlobalParameterFUl
setParamAutoHeapMax__18JAIGlobalParameterFUl:
/* 800AD98C 000AA8CC  90 6D 81 80 */	stw r3, autoHeapMax__18JAIGlobalParameter@sda21(r13)
/* 800AD990 000AA8D0  4E 80 00 20 */	blr 

.global setParamStayHeapMax__18JAIGlobalParameterFUl
setParamStayHeapMax__18JAIGlobalParameterFUl:
/* 800AD994 000AA8D4  90 6D 81 84 */	stw r3, stayHeapMax__18JAIGlobalParameter@sda21(r13)
/* 800AD998 000AA8D8  4E 80 00 20 */	blr 

.global setParamDistanceMax__18JAIGlobalParameterFf
setParamDistanceMax__18JAIGlobalParameterFf:
/* 800AD99C 000AA8DC  D0 2D 81 B0 */	stfs f1, distanceMax__18JAIGlobalParameter@sda21(r13)
/* 800AD9A0 000AA8E0  4E 80 00 20 */	blr 

.global setParamMaxVolumeDistance__18JAIGlobalParameterFf
setParamMaxVolumeDistance__18JAIGlobalParameterFf:
/* 800AD9A4 000AA8E4  D0 2D 81 B4 */	stfs f1, maxVolumeDistance__18JAIGlobalParameter@sda21(r13)
/* 800AD9A8 000AA8E8  4E 80 00 20 */	blr 

.global setParamMinDistanceVolume__18JAIGlobalParameterFf
setParamMinDistanceVolume__18JAIGlobalParameterFf:
/* 800AD9AC 000AA8EC  D0 2D 8B C0 */	stfs f1, minDistanceVolume__18JAIGlobalParameter@sda21(r13)
/* 800AD9B0 000AA8F0  4E 80 00 20 */	blr 

.global setParamStreamInsideBufferCut__18JAIGlobalParameterFb
setParamStreamInsideBufferCut__18JAIGlobalParameterFb:
/* 800AD9B4 000AA8F4  80 8D 8B 68 */	lwz r4, msBasic__8JAIBasic@sda21(r13)
/* 800AD9B8 000AA8F8  88 04 00 0E */	lbz r0, 0xe(r4)
/* 800AD9BC 000AA8FC  50 60 1F 38 */	rlwimi r0, r3, 3, 0x1c, 0x1c
/* 800AD9C0 000AA900  98 04 00 0E */	stb r0, 0xe(r4)
/* 800AD9C4 000AA904  4E 80 00 20 */	blr 

.global setParamAutoHeapRoomSize__18JAIGlobalParameterFUl
setParamAutoHeapRoomSize__18JAIGlobalParameterFUl:
/* 800AD9C8 000AA908  90 6D 81 88 */	stw r3, autoHeapRoomSize__18JAIGlobalParameter@sda21(r13)
/* 800AD9CC 000AA90C  4E 80 00 20 */	blr 

.global setParamStayHeapSize__18JAIGlobalParameterFUl
setParamStayHeapSize__18JAIGlobalParameterFUl:
/* 800AD9D0 000AA910  90 6D 81 8C */	stw r3, stayHeapSize__18JAIGlobalParameter@sda21(r13)
/* 800AD9D4 000AA914  4E 80 00 20 */	blr 

.global setParamInitDataFileName__18JAIGlobalParameterFPc
setParamInitDataFileName__18JAIGlobalParameterFPc:
/* 800AD9D8 000AA918  90 6D 81 90 */	stw r3, initDataFileName__18JAIGlobalParameter@sda21(r13)
/* 800AD9DC 000AA91C  4E 80 00 20 */	blr 

.global setParamSequenceArchivesFileName__18JAIGlobalParameterFPc
setParamSequenceArchivesFileName__18JAIGlobalParameterFPc:
/* 800AD9E0 000AA920  90 6D 81 A4 */	stw r3, sequenceArchivesFileName__18JAIGlobalParameter@sda21(r13)
/* 800AD9E4 000AA924  4E 80 00 20 */	blr 

.global setParamDistanceParameterMoveTime__18JAIGlobalParameterFUc
setParamDistanceParameterMoveTime__18JAIGlobalParameterFUc:
/* 800AD9E8 000AA928  98 6D 81 60 */	stb r3, distanceParameterMoveTime__18JAIGlobalParameter@sda21(r13)
/* 800AD9EC 000AA92C  4E 80 00 20 */	blr 

.global setParamAudioCameraMax__18JAIGlobalParameterFUl
setParamAudioCameraMax__18JAIGlobalParameterFUl:
/* 800AD9F0 000AA930  90 6D 81 D4 */	stw r3, audioCameraMax__18JAIGlobalParameter@sda21(r13)
/* 800AD9F4 000AA934  4E 80 00 20 */	blr 

.global setParamSystemTrackMax__18JAIGlobalParameterFl
setParamSystemTrackMax__18JAIGlobalParameterFl:
/* 800AD9F8 000AA938  90 6D 81 D8 */	stw r3, systemTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800AD9FC 000AA93C  4E 80 00 20 */	blr 

.global setParamSystemRootTrackMax__18JAIGlobalParameterFl
setParamSystemRootTrackMax__18JAIGlobalParameterFl:
/* 800ADA00 000AA940  90 6D 81 DC */	stw r3, systemRootTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800ADA04 000AA944  4E 80 00 20 */	blr 

.global setParamSoundOutputMode__18JAIGlobalParameterFUl
setParamSoundOutputMode__18JAIGlobalParameterFUl:
/* 800ADA08 000AA948  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ADA0C 000AA94C  7C 08 02 A6 */	mflr r0
/* 800ADA10 000AA950  2C 03 00 01 */	cmpwi r3, 1
/* 800ADA14 000AA954  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ADA18 000AA958  38 00 00 01 */	li r0, 1
/* 800ADA1C 000AA95C  41 82 00 28 */	beq .L_800ADA44
/* 800ADA20 000AA960  40 80 00 10 */	bge .L_800ADA30
/* 800ADA24 000AA964  2C 03 00 00 */	cmpwi r3, 0
/* 800ADA28 000AA968  40 80 00 14 */	bge .L_800ADA3C
/* 800ADA2C 000AA96C  48 00 00 24 */	b .L_800ADA50
.L_800ADA30:
/* 800ADA30 000AA970  2C 03 00 03 */	cmpwi r3, 3
/* 800ADA34 000AA974  40 80 00 1C */	bge .L_800ADA50
/* 800ADA38 000AA978  48 00 00 14 */	b .L_800ADA4C
.L_800ADA3C:
/* 800ADA3C 000AA97C  38 00 00 00 */	li r0, 0
/* 800ADA40 000AA980  48 00 00 10 */	b .L_800ADA50
.L_800ADA44:
/* 800ADA44 000AA984  38 00 00 01 */	li r0, 1
/* 800ADA48 000AA988  48 00 00 08 */	b .L_800ADA50
.L_800ADA4C:
/* 800ADA4C 000AA98C  38 00 00 02 */	li r0, 2
.L_800ADA50:
/* 800ADA50 000AA990  80 8D 8B 68 */	lwz r4, msBasic__8JAIBasic@sda21(r13)
/* 800ADA54 000AA994  98 64 00 0D */	stb r3, 0xd(r4)
/* 800ADA58 000AA998  7C 03 03 78 */	mr r3, r0
/* 800ADA5C 000AA99C  4B FF 6E DD */	bl setOutputMode__9JASDriverFUl
/* 800ADA60 000AA9A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ADA64 000AA9A4  7C 08 03 A6 */	mtlr r0
/* 800ADA68 000AA9A8  38 21 00 10 */	addi r1, r1, 0x10
/* 800ADA6C 000AA9AC  4E 80 00 20 */	blr 

.global getParamSeCategoryMax__18JAIGlobalParameterFv
getParamSeCategoryMax__18JAIGlobalParameterFv:
/* 800ADA70 000AA9B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ADA74 000AA9B4  7C 08 02 A6 */	mflr r0
/* 800ADA78 000AA9B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ADA7C 000AA9BC  48 00 9B B9 */	bl getCategotyMax__Q27JAInter10SoundTableFv
/* 800ADA80 000AA9C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ADA84 000AA9C4  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 800ADA88 000AA9C8  7C 08 03 A6 */	mtlr r0
/* 800ADA8C 000AA9CC  38 21 00 10 */	addi r1, r1, 0x10
/* 800ADA90 000AA9D0  4E 80 00 20 */	blr 

.global getParamSoundSceneMax__18JAIGlobalParameterFv
getParamSoundSceneMax__18JAIGlobalParameterFv:
/* 800ADA94 000AA9D4  80 6D 81 68 */	lwz r3, soundSceneMax__18JAIGlobalParameter@sda21(r13)
/* 800ADA98 000AA9D8  4E 80 00 20 */	blr 

.global getParamSeRegistMax__18JAIGlobalParameterFv
getParamSeRegistMax__18JAIGlobalParameterFv:
/* 800ADA9C 000AA9DC  80 6D 81 6C */	lwz r3, seRegistMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAA0 000AA9E0  4E 80 00 20 */	blr 

.global getParamSeTrackMax__18JAIGlobalParameterFv
getParamSeTrackMax__18JAIGlobalParameterFv:
/* 800ADAA4 000AA9E4  80 6D 81 70 */	lwz r3, seTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAA8 000AA9E8  4E 80 00 20 */	blr 

.global getParamSeqTrackMax__18JAIGlobalParameterFv
getParamSeqTrackMax__18JAIGlobalParameterFv:
/* 800ADAAC 000AA9EC  80 6D 81 74 */	lwz r3, seqTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAB0 000AA9F0  4E 80 00 20 */	blr 

.global getParamSeqControlBufferMax__18JAIGlobalParameterFv
getParamSeqControlBufferMax__18JAIGlobalParameterFv:
/* 800ADAB4 000AA9F4  80 6D 81 7C */	lwz r3, seqControlBufferMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAB8 000AA9F8  4E 80 00 20 */	blr 

.global getParamAutoHeapMax__18JAIGlobalParameterFv
getParamAutoHeapMax__18JAIGlobalParameterFv:
/* 800ADABC 000AA9FC  80 6D 81 80 */	lwz r3, autoHeapMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAC0 000AAA00  4E 80 00 20 */	blr 

.global getParamStayHeapMax__18JAIGlobalParameterFv
getParamStayHeapMax__18JAIGlobalParameterFv:
/* 800ADAC4 000AAA04  80 6D 81 84 */	lwz r3, stayHeapMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAC8 000AAA08  4E 80 00 20 */	blr 

.global getParamSeqPlayTrackMax__18JAIGlobalParameterFv
getParamSeqPlayTrackMax__18JAIGlobalParameterFv:
/* 800ADACC 000AAA0C  80 6D 81 78 */	lwz r3, seqPlayTrackMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAD0 000AAA10  4E 80 00 20 */	blr 

.global getParamDistanceMax__18JAIGlobalParameterFv
getParamDistanceMax__18JAIGlobalParameterFv:
/* 800ADAD4 000AAA14  C0 2D 81 B0 */	lfs f1, distanceMax__18JAIGlobalParameter@sda21(r13)
/* 800ADAD8 000AAA18  4E 80 00 20 */	blr 

.global getParamMaxVolumeDistance__18JAIGlobalParameterFv
getParamMaxVolumeDistance__18JAIGlobalParameterFv:
/* 800ADADC 000AAA1C  C0 2D 81 B4 */	lfs f1, maxVolumeDistance__18JAIGlobalParameter@sda21(r13)
/* 800ADAE0 000AAA20  4E 80 00 20 */	blr 

.global getParamMinDistanceVolume__18JAIGlobalParameterFv
getParamMinDistanceVolume__18JAIGlobalParameterFv:
/* 800ADAE4 000AAA24  C0 2D 8B C0 */	lfs f1, minDistanceVolume__18JAIGlobalParameter@sda21(r13)
/* 800ADAE8 000AAA28  4E 80 00 20 */	blr 

.global getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv
getParamStreamDecodedBufferBlocks__18JAIGlobalParameterFv:
/* 800ADAEC 000AAA2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800ADAF0 000AAA30  7C 08 02 A6 */	mflr r0
/* 800ADAF4 000AAA34  90 01 00 14 */	stw r0, 0x14(r1)
/* 800ADAF8 000AAA38  48 00 B3 C5 */	bl getDecodedBufferBlocks__Q27JAInter9StreamMgrFv
/* 800ADAFC 000AAA3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800ADB00 000AAA40  7C 08 03 A6 */	mtlr r0
/* 800ADB04 000AAA44  38 21 00 10 */	addi r1, r1, 0x10
/* 800ADB08 000AAA48  4E 80 00 20 */	blr 

.global getParamAutoHeapRoomSize__18JAIGlobalParameterFv
getParamAutoHeapRoomSize__18JAIGlobalParameterFv:
/* 800ADB0C 000AAA4C  80 6D 81 88 */	lwz r3, autoHeapRoomSize__18JAIGlobalParameter@sda21(r13)
/* 800ADB10 000AAA50  4E 80 00 20 */	blr 

.global getParamStayHeapSize__18JAIGlobalParameterFv
getParamStayHeapSize__18JAIGlobalParameterFv:
/* 800ADB14 000AAA54  80 6D 81 8C */	lwz r3, stayHeapSize__18JAIGlobalParameter@sda21(r13)
/* 800ADB18 000AAA58  4E 80 00 20 */	blr 

.global getParamSeDolbyCenterValue__18JAIGlobalParameterFv
getParamSeDolbyCenterValue__18JAIGlobalParameterFv:
/* 800ADB1C 000AAA5C  C0 2D 81 B8 */	lfs f1, seDolbyCenterValue__18JAIGlobalParameter@sda21(r13)
/* 800ADB20 000AAA60  4E 80 00 20 */	blr 

.global getParamInitDataFileName__18JAIGlobalParameterFv
getParamInitDataFileName__18JAIGlobalParameterFv:
/* 800ADB24 000AAA64  80 6D 81 90 */	lwz r3, initDataFileName__18JAIGlobalParameter@sda21(r13)
/* 800ADB28 000AAA68  4E 80 00 20 */	blr 

.global getParamWavePath__18JAIGlobalParameterFv
getParamWavePath__18JAIGlobalParameterFv:
/* 800ADB2C 000AAA6C  80 6D 81 94 */	lwz r3, wavePath__18JAIGlobalParameter@sda21(r13)
/* 800ADB30 000AAA70  4E 80 00 20 */	blr 

.global getParamSequenceArchivesPath__18JAIGlobalParameterFv
getParamSequenceArchivesPath__18JAIGlobalParameterFv:
/* 800ADB34 000AAA74  80 6D 81 98 */	lwz r3, sequenceArchivesPath__18JAIGlobalParameter@sda21(r13)
/* 800ADB38 000AAA78  4E 80 00 20 */	blr 

.global getParamStreamPath__18JAIGlobalParameterFv
getParamStreamPath__18JAIGlobalParameterFv:
/* 800ADB3C 000AAA7C  80 6D 81 9C */	lwz r3, streamPath__18JAIGlobalParameter@sda21(r13)
/* 800ADB40 000AAA80  4E 80 00 20 */	blr 

.global getParamAudioResPath__18JAIGlobalParameterFv
getParamAudioResPath__18JAIGlobalParameterFv:
/* 800ADB44 000AAA84  80 6D 81 A0 */	lwz r3, audioResPath__18JAIGlobalParameter@sda21(r13)
/* 800ADB48 000AAA88  4E 80 00 20 */	blr 

.global getParamSequenceArchivesFileName__18JAIGlobalParameterFv
getParamSequenceArchivesFileName__18JAIGlobalParameterFv:
/* 800ADB4C 000AAA8C  80 6D 81 A4 */	lwz r3, sequenceArchivesFileName__18JAIGlobalParameter@sda21(r13)
/* 800ADB50 000AAA90  4E 80 00 20 */	blr 

.global getParamDopplarMoveTime__18JAIGlobalParameterFv
getParamDopplarMoveTime__18JAIGlobalParameterFv:
/* 800ADB54 000AAA94  80 6D 81 C4 */	lwz r3, dopplarMoveTime__18JAIGlobalParameter@sda21(r13)
/* 800ADB58 000AAA98  4E 80 00 20 */	blr 

.global getParamDistanceParameterMoveTime__18JAIGlobalParameterFv
getParamDistanceParameterMoveTime__18JAIGlobalParameterFv:
/* 800ADB5C 000AAA9C  88 6D 81 60 */	lbz r3, distanceParameterMoveTime__18JAIGlobalParameter@sda21(r13)
/* 800ADB60 000AAAA0  4E 80 00 20 */	blr 

.global getParamDummyObjectLifeTime__18JAIGlobalParameterFv
getParamDummyObjectLifeTime__18JAIGlobalParameterFv:
/* 800ADB64 000AAAA4  80 6D 81 C8 */	lwz r3, dummyObjectLifeTime__18JAIGlobalParameter@sda21(r13)
/* 800ADB68 000AAAA8  4E 80 00 20 */	blr 

.global getParamDummyObjectMax__18JAIGlobalParameterFv
getParamDummyObjectMax__18JAIGlobalParameterFv:
/* 800ADB6C 000AAAAC  80 6D 81 CC */	lwz r3, dummyObjectMax__18JAIGlobalParameter@sda21(r13)
/* 800ADB70 000AAAB0  4E 80 00 20 */	blr 

.global getParamSeqMuteVolumeSePlay__18JAIGlobalParameterFv
getParamSeqMuteVolumeSePlay__18JAIGlobalParameterFv:
/* 800ADB74 000AAAB4  88 6D 81 63 */	lbz r3, seqMuteVolumeSePlay__18JAIGlobalParameter@sda21(r13)
/* 800ADB78 000AAAB8  4E 80 00 20 */	blr 

.global getParamSeqMuteMoveSpeedSePlay__18JAIGlobalParameterFv
getParamSeqMuteMoveSpeedSePlay__18JAIGlobalParameterFv:
/* 800ADB7C 000AAABC  80 6D 81 D0 */	lwz r3, seqMuteMoveSpeedSePlay__18JAIGlobalParameter@sda21(r13)
/* 800ADB80 000AAAC0  4E 80 00 20 */	blr 

.global getParamAudioCameraMax__18JAIGlobalParameterFv
getParamAudioCameraMax__18JAIGlobalParameterFv:
/* 800ADB84 000AAAC4  80 6D 81 D4 */	lwz r3, audioCameraMax__18JAIGlobalParameter@sda21(r13)
/* 800ADB88 000AAAC8  4E 80 00 20 */	blr 

.global getParamSeqParameterLines__18JAIGlobalParameterFv
getParamSeqParameterLines__18JAIGlobalParameterFv:
/* 800ADB8C 000AAACC  88 6D 81 64 */	lbz r3, seqParameterLines__18JAIGlobalParameter@sda21(r13)
/* 800ADB90 000AAAD0  4E 80 00 20 */	blr 

.global getParamStreamParameterLines__18JAIGlobalParameterFv
getParamStreamParameterLines__18JAIGlobalParameterFv:
/* 800ADB94 000AAAD4  88 6D 81 65 */	lbz r3, streamParameterLines__18JAIGlobalParameter@sda21(r13)
/* 800ADB98 000AAAD8  4E 80 00 20 */	blr 

.global getParamSeDistanceWaitMax__18JAIGlobalParameterFv
getParamSeDistanceWaitMax__18JAIGlobalParameterFv:
/* 800ADB9C 000AAADC  A0 6D 81 F4 */	lhz r3, seDistanceWaitMax__18JAIGlobalParameter@sda21(r13)
/* 800ADBA0 000AAAE0  4E 80 00 20 */	blr 
