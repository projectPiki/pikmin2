.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
.4byte __sinit_JASSeqParser_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj Arglist, local
	.4byte 0x00000000
	.4byte 0x00020008
	.4byte 0x00020008
	.4byte 0x00010002
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00010000
	.4byte 0x00010002
	.4byte 0x00000000
	.4byte 0x00010001
	.4byte 0x00000000
	.4byte 0x00020000
	.4byte 0x0002000C
	.4byte 0x00010000
	.4byte 0x00010000
	.4byte 0x00010003
	.4byte 0x00000000
	.4byte 0x0002000C
	.4byte 0x0002000C
	.4byte 0x00000000
	.4byte 0x00010000
	.4byte 0x00010000
	.4byte 0x00010000
	.4byte 0x00020008
	.4byte 0x00050155
	.4byte 0x00010000
	.4byte 0x00010000
	.4byte 0x00010000
	.4byte 0x00010001
	.4byte 0x00020004
	.4byte 0x00010000
	.4byte 0x00020008
	.4byte 0x00010000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00020004
	.4byte 0x00010000
	.4byte 0x00010001
	.4byte 0x00010001
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00010002
	.4byte 0x00050000
	.4byte 0x00040055
	.4byte 0x00010002
	.4byte 0x00010002
	.4byte 0x00030000
	.4byte 0x00010000
	.4byte 0x00010000
	.4byte 0x00030028
	.4byte 0x00010000
	.4byte 0x00010000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00010001
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00010001
	.4byte 0x00010001
	.4byte 0x00000000
.endobj Arglist

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804A3D68, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdOpenTrack__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3D68
.obj lbl_804A3D74, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdOpenTrackBros__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3D74
.obj lbl_804A3D80, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdCall__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3D80
.obj lbl_804A3D8C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdRet__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3D8C
.obj lbl_804A3D98, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdJmp__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3D98
.obj lbl_804A3DA4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdLoopS__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DA4
.obj lbl_804A3DB0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdLoopE__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DB0
.obj lbl_804A3DBC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdReadPort__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DBC
.obj lbl_804A3DC8, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdWritePort__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DC8
.obj lbl_804A3DD4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdCheckPortImport__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DD4
.obj lbl_804A3DE0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdCheckPortExport__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DE0
.obj lbl_804A3DEC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdWait__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DEC
.obj lbl_804A3DF8, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdParentWritePort__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3DF8
.obj lbl_804A3E04, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdChildWritePort__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E04
.obj lbl_804A3E10, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdSetLastNote__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E10
.obj lbl_804A3E1C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdTimeRelate__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E1C
.obj lbl_804A3E28, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdSimpleOsc__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E28
.obj lbl_804A3E34, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdSimpleEnv__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E34
.obj lbl_804A3E40, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdSimpleADSR__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E40
.obj lbl_804A3E4C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdTranspose__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E4C
.obj lbl_804A3E58, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdCloseTrack__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E58
.obj lbl_804A3E64, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdOutSwitch__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E64
.obj lbl_804A3E70, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdUpdateSync__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E70
.obj lbl_804A3E7C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdBusConnect__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E7C
.obj lbl_804A3E88, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdPauseStatus__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E88
.obj lbl_804A3E94, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdSetInterrupt__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3E94
.obj lbl_804A3EA0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdDisInterrupt__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3EA0
.obj lbl_804A3EAC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdClrI__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3EAC
.obj lbl_804A3EB8, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdSetI__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3EB8
.obj lbl_804A3EC4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdRetI__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3EC4
.obj lbl_804A3ED0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdIntTimer__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3ED0
.obj lbl_804A3EDC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdVibDepth__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3EDC
.obj lbl_804A3EE8, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdVibDepthMidi__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3EE8
.obj lbl_804A3EF4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdSyncCPU__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3EF4
.obj lbl_804A3F00, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdFlushAll__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F00
.obj lbl_804A3F0C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdFlushRelease__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F0C
.obj lbl_804A3F18, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdWait__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F18
.obj lbl_804A3F24, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdPanPowSet__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F24
.obj lbl_804A3F30, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdIIRSet__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F30
.obj lbl_804A3F3C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdFIRSet__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F3C
.obj lbl_804A3F48, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdEXTSet__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F48
.obj lbl_804A3F54, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdPanSwSet__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F54
.obj lbl_804A3F60, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdOscRoute__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F60
.obj lbl_804A3F6C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdIIRCutOff__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F6C
.obj lbl_804A3F78, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdOscFull__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F78
.obj lbl_804A3F84, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdVolumeMode__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F84
.obj lbl_804A3F90, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdVibPitch__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F90
.obj lbl_804A3F9C, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdCheckWave__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3F9C
.obj lbl_804A3FA8, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdPrintf__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3FA8
.obj lbl_804A3FB4, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdNop__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3FB4
.obj lbl_804A3FC0, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdTempo__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3FC0
.obj lbl_804A3FCC, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdTimeBase__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3FCC
.obj lbl_804A3FD8, local
	.4byte 0x00000000
	.4byte 0xFFFFFFFF
	.4byte cmdFinish__12JASSeqParserFP8JASTrackPUl
.endobj lbl_804A3FD8
.obj sCmdPList__12JASSeqParser, global
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj sCmdPList__12JASSeqParser
.obj lbl_804A42E4, local
	.4byte .L_8009DBBC
	.4byte .L_8009DC34
	.4byte .L_8009DC34
	.4byte .L_8009DC34
	.4byte .L_8009DBDC
	.4byte .L_8009DC34
	.4byte .L_8009DC34
	.4byte .L_8009DC34
	.4byte .L_8009DBF0
	.4byte .L_8009DC34
	.4byte .L_8009DC34
	.4byte .L_8009DC34
	.4byte .L_8009DC28
.endobj lbl_804A42E4
.obj lbl_804A4318, local
	.4byte .L_8009E420
	.4byte .L_8009E498
	.4byte .L_8009E498
	.4byte .L_8009E498
	.4byte .L_8009E440
	.4byte .L_8009E498
	.4byte .L_8009E498
	.4byte .L_8009E498
	.4byte .L_8009E454
	.4byte .L_8009E498
	.4byte .L_8009E498
	.4byte .L_8009E498
	.4byte .L_8009E48C
.endobj lbl_804A4318

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_80516D30, local
	.float 327.67
.endobj lbl_80516D30
.balign 8
.obj lbl_80516D38, local
	.8byte 0x4330000000000000
.endobj lbl_80516D38
.obj lbl_80516D40, local
	.4byte 0x00000001
	.2byte 0x0102
	.byte 0x02
.endobj lbl_80516D40
.balign 4
.obj lbl_80516D48, local
	.4byte 0x00010200
	.2byte 0x0200
	.byte 0x02
.endobj lbl_80516D48
.balign 4
.obj lbl_80516D50, local
	.float 393204.0
.endobj lbl_80516D50
.balign 8
.obj lbl_80516D58, local
	.8byte 0x4330000080000000
.endobj lbl_80516D58
.obj lbl_80516D60, local
	.float 294903.0
.endobj lbl_80516D60
.obj lbl_80516D64, local
	.float 32768.0
.endobj lbl_80516D64
.obj lbl_80516D68, local
	.float 0.0
.endobj lbl_80516D68
.obj lbl_80516D6C, local
	.float 1.0
.endobj lbl_80516D6C
.obj lbl_80516D70, local
	.float 32767.0
.endobj lbl_80516D70

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn cmdOpenTrack__12JASSeqParserFP8JASTrackPUl, global
/* 8009CAB8 000999F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CABC 000999FC  7C 08 02 A6 */	mflr r0
/* 8009CAC0 00099A00  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CAC4 00099A04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009CAC8 00099A08  93 C1 00 08 */	stw r30, 8(r1)
/* 8009CACC 00099A0C  7C 9E 23 78 */	mr r30, r4
/* 8009CAD0 00099A10  7F C3 F3 78 */	mr r3, r30
/* 8009CAD4 00099A14  80 05 00 00 */	lwz r0, 0(r5)
/* 8009CAD8 00099A18  83 E5 00 04 */	lwz r31, 4(r5)
/* 8009CADC 00099A1C  54 04 07 3E */	clrlwi r4, r0, 0x1c
/* 8009CAE0 00099A20  54 05 D7 BE */	rlwinm r5, r0, 0x1a, 0x1e, 0x1f
/* 8009CAE4 00099A24  48 00 4A 79 */	bl openChild__8JASTrackFUcUc
/* 8009CAE8 00099A28  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8009CAEC 00099A2C  7F E5 FB 78 */	mr r5, r31
/* 8009CAF0 00099A30  48 00 4A 29 */	bl start__8JASTrackFPvUl
/* 8009CAF4 00099A34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CAF8 00099A38  38 60 00 00 */	li r3, 0
/* 8009CAFC 00099A3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009CB00 00099A40  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009CB04 00099A44  7C 08 03 A6 */	mtlr r0
/* 8009CB08 00099A48  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CB0C 00099A4C  4E 80 00 20 */	blr 
.endfn cmdOpenTrack__12JASSeqParserFP8JASTrackPUl

.fn cmdOpenTrackBros__12JASSeqParserFP8JASTrackPUl, global
/* 8009CB10 00099A50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CB14 00099A54  7C 08 02 A6 */	mflr r0
/* 8009CB18 00099A58  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CB1C 00099A5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009CB20 00099A60  93 C1 00 08 */	stw r30, 8(r1)
/* 8009CB24 00099A64  7C 9E 23 78 */	mr r30, r4
/* 8009CB28 00099A68  80 64 02 F8 */	lwz r3, 0x2f8(r4)
/* 8009CB2C 00099A6C  28 03 00 00 */	cmplwi r3, 0
/* 8009CB30 00099A70  40 82 00 0C */	bne .L_8009CB3C
/* 8009CB34 00099A74  38 60 00 00 */	li r3, 0
/* 8009CB38 00099A78  48 00 00 28 */	b .L_8009CB60
.L_8009CB3C:
/* 8009CB3C 00099A7C  80 05 00 00 */	lwz r0, 0(r5)
/* 8009CB40 00099A80  83 E5 00 04 */	lwz r31, 4(r5)
/* 8009CB44 00099A84  54 04 07 3E */	clrlwi r4, r0, 0x1c
/* 8009CB48 00099A88  54 05 D7 BE */	rlwinm r5, r0, 0x1a, 0x1e, 0x1f
/* 8009CB4C 00099A8C  48 00 4A 11 */	bl openChild__8JASTrackFUcUc
/* 8009CB50 00099A90  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 8009CB54 00099A94  7F E5 FB 78 */	mr r5, r31
/* 8009CB58 00099A98  48 00 49 C1 */	bl start__8JASTrackFPvUl
/* 8009CB5C 00099A9C  38 60 00 00 */	li r3, 0
.L_8009CB60:
/* 8009CB60 00099AA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CB64 00099AA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009CB68 00099AA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009CB6C 00099AAC  7C 08 03 A6 */	mtlr r0
/* 8009CB70 00099AB0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CB74 00099AB4  4E 80 00 20 */	blr 
.endfn cmdOpenTrackBros__12JASSeqParserFP8JASTrackPUl

.fn cmdCall__12JASSeqParserFP8JASTrackPUl, global
/* 8009CB78 00099AB8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009CB7C 00099ABC  7C 08 02 A6 */	mflr r0
/* 8009CB80 00099AC0  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009CB84 00099AC4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8009CB88 00099AC8  7C 7D 1B 78 */	mr r29, r3
/* 8009CB8C 00099ACC  7C 9E 23 78 */	mr r30, r4
/* 8009CB90 00099AD0  3B FE 00 0C */	addi r31, r30, 0xc
/* 8009CB94 00099AD4  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8009CB98 00099AD8  38 03 00 01 */	addi r0, r3, 1
/* 8009CB9C 00099ADC  90 04 00 10 */	stw r0, 0x10(r4)
/* 8009CBA0 00099AE0  8B 83 00 00 */	lbz r28, 0(r3)
/* 8009CBA4 00099AE4  57 80 06 31 */	rlwinm. r0, r28, 0, 0x18, 0x18
/* 8009CBA8 00099AE8  41 82 00 74 */	beq .L_8009CC1C
/* 8009CBAC 00099AEC  80 9F 00 04 */	lwz r4, 4(r31)
/* 8009CBB0 00099AF0  7F C3 F3 78 */	mr r3, r30
/* 8009CBB4 00099AF4  38 04 00 01 */	addi r0, r4, 1
/* 8009CBB8 00099AF8  90 1F 00 04 */	stw r0, 4(r31)
/* 8009CBBC 00099AFC  88 84 00 00 */	lbz r4, 0(r4)
/* 8009CBC0 00099B00  48 00 4C 4D */	bl readReg16__8JASTrackFUc
/* 8009CBC4 00099B04  57 80 06 73 */	rlwinm. r0, r28, 0, 0x19, 0x19
/* 8009CBC8 00099B08  54 7B 04 3E */	clrlwi r27, r3, 0x10
/* 8009CBCC 00099B0C  41 82 00 5C */	beq .L_8009CC28
/* 8009CBD0 00099B10  57 80 06 B5 */	rlwinm. r0, r28, 0, 0x1a, 0x1a
/* 8009CBD4 00099B14  41 82 00 24 */	beq .L_8009CBF8
/* 8009CBD8 00099B18  80 9F 00 04 */	lwz r4, 4(r31)
/* 8009CBDC 00099B1C  7F C3 F3 78 */	mr r3, r30
/* 8009CBE0 00099B20  38 04 00 01 */	addi r0, r4, 1
/* 8009CBE4 00099B24  90 1F 00 04 */	stw r0, 4(r31)
/* 8009CBE8 00099B28  88 84 00 00 */	lbz r4, 0(r4)
/* 8009CBEC 00099B2C  48 00 4C 21 */	bl readReg16__8JASTrackFUc
/* 8009CBF0 00099B30  54 64 04 3E */	clrlwi r4, r3, 0x10
/* 8009CBF4 00099B34  48 00 00 10 */	b .L_8009CC04
.L_8009CBF8:
/* 8009CBF8 00099B38  7F E3 FB 78 */	mr r3, r31
/* 8009CBFC 00099B3C  4B FF FE 79 */	bl read24__10JASSeqCtrlFv
/* 8009CC00 00099B40  7C 64 1B 78 */	mr r4, r3
.L_8009CC04:
/* 8009CC04 00099B44  1C 1B 00 03 */	mulli r0, r27, 3
/* 8009CC08 00099B48  7F E3 FB 78 */	mr r3, r31
/* 8009CC0C 00099B4C  7C 84 02 14 */	add r4, r4, r0
/* 8009CC10 00099B50  4B FF FD DD */	bl get24__10JASSeqCtrlCFUl
/* 8009CC14 00099B54  7C 7B 1B 78 */	mr r27, r3
/* 8009CC18 00099B58  48 00 00 10 */	b .L_8009CC28
.L_8009CC1C:
/* 8009CC1C 00099B5C  7F E3 FB 78 */	mr r3, r31
/* 8009CC20 00099B60  4B FF FE 55 */	bl read24__10JASSeqCtrlFv
/* 8009CC24 00099B64  7C 7B 1B 78 */	mr r27, r3
.L_8009CC28:
/* 8009CC28 00099B68  7F A3 EB 78 */	mr r3, r29
/* 8009CC2C 00099B6C  7F C4 F3 78 */	mr r4, r30
/* 8009CC30 00099B70  7F 85 E3 78 */	mr r5, r28
/* 8009CC34 00099B74  48 00 14 99 */	bl conditionCheck__12JASSeqParserFP8JASTrackUc
/* 8009CC38 00099B78  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8009CC3C 00099B7C  41 82 00 2C */	beq .L_8009CC68
/* 8009CC40 00099B80  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8009CC44 00099B84  80 BF 00 04 */	lwz r5, 4(r31)
/* 8009CC48 00099B88  38 64 00 01 */	addi r3, r4, 1
/* 8009CC4C 00099B8C  54 80 10 3A */	slwi r0, r4, 2
/* 8009CC50 00099B90  90 7F 00 0C */	stw r3, 0xc(r31)
/* 8009CC54 00099B94  7C 7F 02 14 */	add r3, r31, r0
/* 8009CC58 00099B98  90 A3 00 10 */	stw r5, 0x10(r3)
/* 8009CC5C 00099B9C  80 1F 00 00 */	lwz r0, 0(r31)
/* 8009CC60 00099BA0  7C 00 DA 14 */	add r0, r0, r27
/* 8009CC64 00099BA4  90 1F 00 04 */	stw r0, 4(r31)
.L_8009CC68:
/* 8009CC68 00099BA8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 8009CC6C 00099BAC  38 60 00 00 */	li r3, 0
/* 8009CC70 00099BB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009CC74 00099BB4  7C 08 03 A6 */	mtlr r0
/* 8009CC78 00099BB8  38 21 00 20 */	addi r1, r1, 0x20
/* 8009CC7C 00099BBC  4E 80 00 20 */	blr 
.endfn cmdCall__12JASSeqParserFP8JASTrackPUl

.fn cmdRet__12JASSeqParserFP8JASTrackPUl, global
/* 8009CC80 00099BC0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CC84 00099BC4  7C 08 02 A6 */	mflr r0
/* 8009CC88 00099BC8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CC8C 00099BCC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009CC90 00099BD0  7C 9F 23 78 */	mr r31, r4
/* 8009CC94 00099BD4  80 05 00 00 */	lwz r0, 0(r5)
/* 8009CC98 00099BD8  54 05 06 3E */	clrlwi r5, r0, 0x18
/* 8009CC9C 00099BDC  48 00 14 31 */	bl conditionCheck__12JASSeqParserFP8JASTrackUc
/* 8009CCA0 00099BE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8009CCA4 00099BE4  41 82 00 48 */	beq .L_8009CCEC
/* 8009CCA8 00099BE8  38 9F 00 0C */	addi r4, r31, 0xc
/* 8009CCAC 00099BEC  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8009CCB0 00099BF0  28 03 00 00 */	cmplwi r3, 0
/* 8009CCB4 00099BF4  40 82 00 0C */	bne .L_8009CCC0
/* 8009CCB8 00099BF8  38 A0 00 00 */	li r5, 0
/* 8009CCBC 00099BFC  48 00 00 20 */	b .L_8009CCDC
.L_8009CCC0:
/* 8009CCC0 00099C00  38 63 FF FF */	addi r3, r3, -1
/* 8009CCC4 00099C04  38 A0 00 01 */	li r5, 1
/* 8009CCC8 00099C08  54 60 10 3A */	slwi r0, r3, 2
/* 8009CCCC 00099C0C  90 64 00 0C */	stw r3, 0xc(r4)
/* 8009CCD0 00099C10  7C 64 02 14 */	add r3, r4, r0
/* 8009CCD4 00099C14  80 03 00 10 */	lwz r0, 0x10(r3)
/* 8009CCD8 00099C18  90 04 00 04 */	stw r0, 4(r4)
.L_8009CCDC:
/* 8009CCDC 00099C1C  54 A0 06 3F */	clrlwi. r0, r5, 0x18
/* 8009CCE0 00099C20  40 82 00 0C */	bne .L_8009CCEC
/* 8009CCE4 00099C24  38 60 00 03 */	li r3, 3
/* 8009CCE8 00099C28  48 00 00 08 */	b .L_8009CCF0
.L_8009CCEC:
/* 8009CCEC 00099C2C  38 60 00 00 */	li r3, 0
.L_8009CCF0:
/* 8009CCF0 00099C30  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CCF4 00099C34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009CCF8 00099C38  7C 08 03 A6 */	mtlr r0
/* 8009CCFC 00099C3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CD00 00099C40  4E 80 00 20 */	blr 
.endfn cmdRet__12JASSeqParserFP8JASTrackPUl

.fn cmdJmp__12JASSeqParserFP8JASTrackPUl, global
/* 8009CD04 00099C44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009CD08 00099C48  7C 08 02 A6 */	mflr r0
/* 8009CD0C 00099C4C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009CD10 00099C50  BF 21 00 14 */	stmw r25, 0x14(r1)
/* 8009CD14 00099C54  7C 7A 1B 78 */	mr r26, r3
/* 8009CD18 00099C58  7C 9B 23 78 */	mr r27, r4
/* 8009CD1C 00099C5C  3B A0 00 00 */	li r29, 0
/* 8009CD20 00099C60  3B FB 00 0C */	addi r31, r27, 0xc
/* 8009CD24 00099C64  3B 80 00 00 */	li r28, 0
/* 8009CD28 00099C68  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8009CD2C 00099C6C  38 03 00 01 */	addi r0, r3, 1
/* 8009CD30 00099C70  90 04 00 10 */	stw r0, 0x10(r4)
/* 8009CD34 00099C74  8B C3 00 00 */	lbz r30, 0(r3)
/* 8009CD38 00099C78  57 C0 06 31 */	rlwinm. r0, r30, 0, 0x18, 0x18
/* 8009CD3C 00099C7C  41 82 00 A8 */	beq .L_8009CDE4
/* 8009CD40 00099C80  80 7F 00 04 */	lwz r3, 4(r31)
/* 8009CD44 00099C84  57 C0 06 73 */	rlwinm. r0, r30, 0, 0x19, 0x19
/* 8009CD48 00099C88  38 03 00 01 */	addi r0, r3, 1
/* 8009CD4C 00099C8C  90 1F 00 04 */	stw r0, 4(r31)
/* 8009CD50 00099C90  88 83 00 00 */	lbz r4, 0(r3)
/* 8009CD54 00099C94  41 82 00 5C */	beq .L_8009CDB0
/* 8009CD58 00099C98  7F 63 DB 78 */	mr r3, r27
/* 8009CD5C 00099C9C  48 00 4A B1 */	bl readReg16__8JASTrackFUc
/* 8009CD60 00099CA0  57 C0 06 B5 */	rlwinm. r0, r30, 0, 0x1a, 0x1a
/* 8009CD64 00099CA4  54 79 04 3E */	clrlwi r25, r3, 0x10
/* 8009CD68 00099CA8  41 82 00 24 */	beq .L_8009CD8C
/* 8009CD6C 00099CAC  80 9F 00 04 */	lwz r4, 4(r31)
/* 8009CD70 00099CB0  7F 63 DB 78 */	mr r3, r27
/* 8009CD74 00099CB4  38 04 00 01 */	addi r0, r4, 1
/* 8009CD78 00099CB8  90 1F 00 04 */	stw r0, 4(r31)
/* 8009CD7C 00099CBC  88 84 00 00 */	lbz r4, 0(r4)
/* 8009CD80 00099CC0  48 00 4A 8D */	bl readReg16__8JASTrackFUc
/* 8009CD84 00099CC4  54 64 04 3E */	clrlwi r4, r3, 0x10
/* 8009CD88 00099CC8  48 00 00 10 */	b .L_8009CD98
.L_8009CD8C:
/* 8009CD8C 00099CCC  7F E3 FB 78 */	mr r3, r31
/* 8009CD90 00099CD0  4B FF FC E5 */	bl read24__10JASSeqCtrlFv
/* 8009CD94 00099CD4  7C 64 1B 78 */	mr r4, r3
.L_8009CD98:
/* 8009CD98 00099CD8  1C 19 00 03 */	mulli r0, r25, 3
/* 8009CD9C 00099CDC  7F E3 FB 78 */	mr r3, r31
/* 8009CDA0 00099CE0  7C 84 02 14 */	add r4, r4, r0
/* 8009CDA4 00099CE4  4B FF FC 49 */	bl get24__10JASSeqCtrlCFUl
/* 8009CDA8 00099CE8  7C 79 1B 78 */	mr r25, r3
/* 8009CDAC 00099CEC  48 00 00 44 */	b .L_8009CDF0
.L_8009CDB0:
/* 8009CDB0 00099CF0  28 04 00 28 */	cmplwi r4, 0x28
/* 8009CDB4 00099CF4  41 80 00 20 */	blt .L_8009CDD4
/* 8009CDB8 00099CF8  28 04 00 2B */	cmplwi r4, 0x2b
/* 8009CDBC 00099CFC  41 81 00 18 */	bgt .L_8009CDD4
/* 8009CDC0 00099D00  7F 63 DB 78 */	mr r3, r27
/* 8009CDC4 00099D04  48 00 49 B5 */	bl readReg32__8JASTrackFUc
/* 8009CDC8 00099D08  3B A0 00 01 */	li r29, 1
/* 8009CDCC 00099D0C  7C 7C 1B 78 */	mr r28, r3
/* 8009CDD0 00099D10  48 00 00 20 */	b .L_8009CDF0
.L_8009CDD4:
/* 8009CDD4 00099D14  7F 63 DB 78 */	mr r3, r27
/* 8009CDD8 00099D18  48 00 49 A1 */	bl readReg32__8JASTrackFUc
/* 8009CDDC 00099D1C  7C 79 1B 78 */	mr r25, r3
/* 8009CDE0 00099D20  48 00 00 10 */	b .L_8009CDF0
.L_8009CDE4:
/* 8009CDE4 00099D24  7F E3 FB 78 */	mr r3, r31
/* 8009CDE8 00099D28  4B FF FC 8D */	bl read24__10JASSeqCtrlFv
/* 8009CDEC 00099D2C  7C 79 1B 78 */	mr r25, r3
.L_8009CDF0:
/* 8009CDF0 00099D30  7F 43 D3 78 */	mr r3, r26
/* 8009CDF4 00099D34  7F 64 DB 78 */	mr r4, r27
/* 8009CDF8 00099D38  7F C5 F3 78 */	mr r5, r30
/* 8009CDFC 00099D3C  48 00 12 D1 */	bl conditionCheck__12JASSeqParserFP8JASTrackUc
/* 8009CE00 00099D40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 8009CE04 00099D44  41 82 00 2C */	beq .L_8009CE30
/* 8009CE08 00099D48  57 A0 06 3F */	clrlwi. r0, r29, 0x18
/* 8009CE0C 00099D4C  41 82 00 18 */	beq .L_8009CE24
/* 8009CE10 00099D50  7F E3 FB 78 */	mr r3, r31
/* 8009CE14 00099D54  7F 84 E3 78 */	mr r4, r28
/* 8009CE18 00099D58  38 A0 00 00 */	li r5, 0
/* 8009CE1C 00099D5C  4B FF FA 9D */	bl start__10JASSeqCtrlFPvUl
/* 8009CE20 00099D60  48 00 00 10 */	b .L_8009CE30
.L_8009CE24:
/* 8009CE24 00099D64  80 1F 00 00 */	lwz r0, 0(r31)
/* 8009CE28 00099D68  7C 00 CA 14 */	add r0, r0, r25
/* 8009CE2C 00099D6C  90 1F 00 04 */	stw r0, 4(r31)
.L_8009CE30:
/* 8009CE30 00099D70  BB 21 00 14 */	lmw r25, 0x14(r1)
/* 8009CE34 00099D74  38 60 00 00 */	li r3, 0
/* 8009CE38 00099D78  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009CE3C 00099D7C  7C 08 03 A6 */	mtlr r0
/* 8009CE40 00099D80  38 21 00 30 */	addi r1, r1, 0x30
/* 8009CE44 00099D84  4E 80 00 20 */	blr 
.endfn cmdJmp__12JASSeqParserFP8JASTrackPUl

.fn cmdLoopS__12JASSeqParserFP8JASTrackPUl, global
/* 8009CE48 00099D88  80 04 00 18 */	lwz r0, 0x18(r4)
/* 8009CE4C 00099D8C  38 E4 00 0C */	addi r7, r4, 0xc
/* 8009CE50 00099D90  80 C5 00 00 */	lwz r6, 0(r5)
/* 8009CE54 00099D94  38 60 00 00 */	li r3, 0
/* 8009CE58 00099D98  80 A4 00 10 */	lwz r5, 0x10(r4)
/* 8009CE5C 00099D9C  54 00 10 3A */	slwi r0, r0, 2
/* 8009CE60 00099DA0  7C 87 02 14 */	add r4, r7, r0
/* 8009CE64 00099DA4  90 A4 00 10 */	stw r5, 0x10(r4)
/* 8009CE68 00099DA8  80 A7 00 0C */	lwz r5, 0xc(r7)
/* 8009CE6C 00099DAC  38 85 00 01 */	addi r4, r5, 1
/* 8009CE70 00099DB0  54 A0 08 3C */	slwi r0, r5, 1
/* 8009CE74 00099DB4  90 87 00 0C */	stw r4, 0xc(r7)
/* 8009CE78 00099DB8  7C 87 02 14 */	add r4, r7, r0
/* 8009CE7C 00099DBC  B0 C4 00 30 */	sth r6, 0x30(r4)
/* 8009CE80 00099DC0  4E 80 00 20 */	blr 
.endfn cmdLoopS__12JASSeqParserFP8JASTrackPUl

.fn cmdLoopE__12JASSeqParserFP8JASTrackPUl, global
/* 8009CE84 00099DC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CE88 00099DC8  7C 08 02 A6 */	mflr r0
/* 8009CE8C 00099DCC  38 64 00 0C */	addi r3, r4, 0xc
/* 8009CE90 00099DD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CE94 00099DD4  4B FF FA 39 */	bl loopEnd__10JASSeqCtrlFv
/* 8009CE98 00099DD8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CE9C 00099DDC  38 60 00 00 */	li r3, 0
/* 8009CEA0 00099DE0  7C 08 03 A6 */	mtlr r0
/* 8009CEA4 00099DE4  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CEA8 00099DE8  4E 80 00 20 */	blr 
.endfn cmdLoopE__12JASSeqParserFP8JASTrackPUl

.fn cmdReadPort__12JASSeqParserFP8JASTrackPUl, global
/* 8009CEAC 00099DEC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CEB0 00099DF0  7C 08 02 A6 */	mflr r0
/* 8009CEB4 00099DF4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CEB8 00099DF8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009CEBC 00099DFC  7C BF 2B 78 */	mr r31, r5
/* 8009CEC0 00099E00  93 C1 00 08 */	stw r30, 8(r1)
/* 8009CEC4 00099E04  7C 9E 23 78 */	mr r30, r4
/* 8009CEC8 00099E08  7F C3 F3 78 */	mr r3, r30
/* 8009CECC 00099E0C  80 85 00 00 */	lwz r4, 0(r5)
/* 8009CED0 00099E10  48 00 51 D5 */	bl readSelfPort__8JASTrackFi
/* 8009CED4 00099E14  80 1F 00 04 */	lwz r0, 4(r31)
/* 8009CED8 00099E18  7C 65 1B 78 */	mr r5, r3
/* 8009CEDC 00099E1C  7F C3 F3 78 */	mr r3, r30
/* 8009CEE0 00099E20  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8009CEE4 00099E24  48 00 4B 41 */	bl writeRegDirect__8JASTrackFUcUs
/* 8009CEE8 00099E28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CEEC 00099E2C  38 60 00 00 */	li r3, 0
/* 8009CEF0 00099E30  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009CEF4 00099E34  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009CEF8 00099E38  7C 08 03 A6 */	mtlr r0
/* 8009CEFC 00099E3C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CF00 00099E40  4E 80 00 20 */	blr 
.endfn cmdReadPort__12JASSeqParserFP8JASTrackPUl

.fn cmdWritePort__12JASSeqParserFP8JASTrackPUl, global
/* 8009CF04 00099E44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CF08 00099E48  7C 08 02 A6 */	mflr r0
/* 8009CF0C 00099E4C  7C 83 23 78 */	mr r3, r4
/* 8009CF10 00099E50  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CF14 00099E54  80 05 00 04 */	lwz r0, 4(r5)
/* 8009CF18 00099E58  80 85 00 00 */	lwz r4, 0(r5)
/* 8009CF1C 00099E5C  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 8009CF20 00099E60  48 00 51 A9 */	bl writeSelfPort__8JASTrackFiUs
/* 8009CF24 00099E64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CF28 00099E68  38 60 00 00 */	li r3, 0
/* 8009CF2C 00099E6C  7C 08 03 A6 */	mtlr r0
/* 8009CF30 00099E70  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CF34 00099E74  4E 80 00 20 */	blr 
.endfn cmdWritePort__12JASSeqParserFP8JASTrackPUl

.fn cmdParentWritePort__12JASSeqParserFP8JASTrackPUl, global
/* 8009CF38 00099E78  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CF3C 00099E7C  7C 08 02 A6 */	mflr r0
/* 8009CF40 00099E80  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CF44 00099E84  80 C5 00 00 */	lwz r6, 0(r5)
/* 8009CF48 00099E88  80 05 00 04 */	lwz r0, 4(r5)
/* 8009CF4C 00099E8C  80 64 02 F8 */	lwz r3, 0x2f8(r4)
/* 8009CF50 00099E90  54 C4 07 3E */	clrlwi r4, r6, 0x1c
/* 8009CF54 00099E94  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 8009CF58 00099E98  48 00 51 95 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8009CF5C 00099E9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CF60 00099EA0  38 60 00 00 */	li r3, 0
/* 8009CF64 00099EA4  7C 08 03 A6 */	mtlr r0
/* 8009CF68 00099EA8  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CF6C 00099EAC  4E 80 00 20 */	blr 
.endfn cmdParentWritePort__12JASSeqParserFP8JASTrackPUl

.fn cmdChildWritePort__12JASSeqParserFP8JASTrackPUl, global
/* 8009CF70 00099EB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009CF74 00099EB4  7C 08 02 A6 */	mflr r0
/* 8009CF78 00099EB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009CF7C 00099EBC  80 C5 00 00 */	lwz r6, 0(r5)
/* 8009CF80 00099EC0  80 05 00 04 */	lwz r0, 4(r5)
/* 8009CF84 00099EC4  54 C3 F6 BA */	rlwinm r3, r6, 0x1e, 0x1a, 0x1d
/* 8009CF88 00099EC8  54 C5 07 3E */	clrlwi r5, r6, 0x1c
/* 8009CF8C 00099ECC  7C 64 1A 14 */	add r3, r4, r3
/* 8009CF90 00099ED0  80 63 02 FC */	lwz r3, 0x2fc(r3)
/* 8009CF94 00099ED4  7C A4 2B 78 */	mr r4, r5
/* 8009CF98 00099ED8  54 05 04 3E */	clrlwi r5, r0, 0x10
/* 8009CF9C 00099EDC  48 00 51 51 */	bl writePortAppDirect__8JASTrackFUlUs
/* 8009CFA0 00099EE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009CFA4 00099EE4  38 60 00 00 */	li r3, 0
/* 8009CFA8 00099EE8  7C 08 03 A6 */	mtlr r0
/* 8009CFAC 00099EEC  38 21 00 10 */	addi r1, r1, 0x10
/* 8009CFB0 00099EF0  4E 80 00 20 */	blr 
.endfn cmdChildWritePort__12JASSeqParserFP8JASTrackPUl

.fn cmdCheckPortImport__12JASSeqParserFP8JASTrackPUl, global
/* 8009CFB4 00099EF4  80 05 00 00 */	lwz r0, 0(r5)
/* 8009CFB8 00099EF8  38 60 00 00 */	li r3, 0
/* 8009CFBC 00099EFC  7C A4 02 14 */	add r5, r4, r0
/* 8009CFC0 00099F00  88 05 00 54 */	lbz r0, 0x54(r5)
/* 8009CFC4 00099F04  B0 04 02 6E */	sth r0, 0x26e(r4)
/* 8009CFC8 00099F08  4E 80 00 20 */	blr 
.endfn cmdCheckPortImport__12JASSeqParserFP8JASTrackPUl

.fn cmdCheckPortExport__12JASSeqParserFP8JASTrackPUl, global
/* 8009CFCC 00099F0C  80 05 00 00 */	lwz r0, 0(r5)
/* 8009CFD0 00099F10  38 60 00 00 */	li r3, 0
/* 8009CFD4 00099F14  7C A4 02 14 */	add r5, r4, r0
/* 8009CFD8 00099F18  88 05 00 64 */	lbz r0, 0x64(r5)
/* 8009CFDC 00099F1C  B0 04 02 6E */	sth r0, 0x26e(r4)
/* 8009CFE0 00099F20  4E 80 00 20 */	blr 
.endfn cmdCheckPortExport__12JASSeqParserFP8JASTrackPUl

.fn cmdWait__12JASSeqParserFP8JASTrackPUl, global
/* 8009CFE4 00099F24  80 65 00 00 */	lwz r3, 0(r5)
/* 8009CFE8 00099F28  7C 03 00 D0 */	neg r0, r3
/* 8009CFEC 00099F2C  90 64 00 14 */	stw r3, 0x14(r4)
/* 8009CFF0 00099F30  7C 00 1B 78 */	or r0, r0, r3
/* 8009CFF4 00099F34  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8009CFF8 00099F38  4E 80 00 20 */	blr 
.endfn cmdWait__12JASSeqParserFP8JASTrackPUl

.fn cmdSetLastNote__12JASSeqParserFP8JASTrackPUl, global
/* 8009CFFC 00099F3C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D000 00099F40  7C 08 02 A6 */	mflr r0
/* 8009D004 00099F44  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D008 00099F48  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009D00C 00099F4C  93 C1 00 08 */	stw r30, 8(r1)
/* 8009D010 00099F50  7C 9E 23 78 */	mr r30, r4
/* 8009D014 00099F54  7F C3 F3 78 */	mr r3, r30
/* 8009D018 00099F58  83 E5 00 00 */	lwz r31, 0(r5)
/* 8009D01C 00099F5C  48 00 54 11 */	bl getTranspose__8JASTrackCFv
/* 8009D020 00099F60  7F FF 1A 14 */	add r31, r31, r3
/* 8009D024 00099F64  38 60 00 00 */	li r3, 0
/* 8009D028 00099F68  9B FE 00 E5 */	stb r31, 0xe5(r30)
/* 8009D02C 00099F6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D030 00099F70  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009D034 00099F74  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009D038 00099F78  7C 08 03 A6 */	mtlr r0
/* 8009D03C 00099F7C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D040 00099F80  4E 80 00 20 */	blr 
.endfn cmdSetLastNote__12JASSeqParserFP8JASTrackPUl

.fn cmdTimeRelate__12JASSeqParserFP8JASTrackPUl, global
/* 8009D044 00099F84  80 A5 00 00 */	lwz r5, 0(r5)
/* 8009D048 00099F88  38 60 00 00 */	li r3, 0
/* 8009D04C 00099F8C  7C 05 00 D0 */	neg r0, r5
/* 8009D050 00099F90  7C 00 2B 78 */	or r0, r0, r5
/* 8009D054 00099F94  54 00 0F FE */	srwi r0, r0, 0x1f
/* 8009D058 00099F98  98 04 03 64 */	stb r0, 0x364(r4)
/* 8009D05C 00099F9C  4E 80 00 20 */	blr 
.endfn cmdTimeRelate__12JASSeqParserFP8JASTrackPUl

.fn cmdSimpleOsc__12JASSeqParserFP8JASTrackPUl, global
/* 8009D060 00099FA0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D064 00099FA4  7C 08 02 A6 */	mflr r0
/* 8009D068 00099FA8  7C 83 23 78 */	mr r3, r4
/* 8009D06C 00099FAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D070 00099FB0  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D074 00099FB4  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8009D078 00099FB8  48 00 2B CD */	bl oscSetupSimple__8JASTrackFUc
/* 8009D07C 00099FBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D080 00099FC0  38 60 00 00 */	li r3, 0
/* 8009D084 00099FC4  7C 08 03 A6 */	mtlr r0
/* 8009D088 00099FC8  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D08C 00099FCC  4E 80 00 20 */	blr 
.endfn cmdSimpleOsc__12JASSeqParserFP8JASTrackPUl

.fn cmdSimpleEnv__12JASSeqParserFP8JASTrackPUl, global
/* 8009D090 00099FD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D094 00099FD4  7C 08 02 A6 */	mflr r0
/* 8009D098 00099FD8  7C 83 23 78 */	mr r3, r4
/* 8009D09C 00099FDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D0A0 00099FE0  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D0A4 00099FE4  80 A5 00 04 */	lwz r5, 4(r5)
/* 8009D0A8 00099FE8  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8009D0AC 00099FEC  48 00 2B 29 */	bl oscSetupSimpleEnv__8JASTrackFUcUl
/* 8009D0B0 00099FF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D0B4 00099FF4  38 60 00 00 */	li r3, 0
/* 8009D0B8 00099FF8  7C 08 03 A6 */	mtlr r0
/* 8009D0BC 00099FFC  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D0C0 0009A000  4E 80 00 20 */	blr 
.endfn cmdSimpleEnv__12JASSeqParserFP8JASTrackPUl

.fn cmdSimpleADSR__12JASSeqParserFP8JASTrackPUl, global
/* 8009D0C4 0009A004  3C 60 80 48 */	lis r3, sAdsrDef__9JASPlayer@ha
/* 8009D0C8 0009A008  38 04 02 E0 */	addi r0, r4, 0x2e0
/* 8009D0CC 0009A00C  39 03 8B E0 */	addi r8, r3, sAdsrDef__9JASPlayer@l
/* 8009D0D0 0009A010  80 C8 00 00 */	lwz r6, 0(r8)
/* 8009D0D4 0009A014  38 60 00 00 */	li r3, 0
/* 8009D0D8 0009A018  C0 08 00 04 */	lfs f0, 4(r8)
/* 8009D0DC 0009A01C  90 C4 02 A8 */	stw r6, 0x2a8(r4)
/* 8009D0E0 0009A020  80 E8 00 08 */	lwz r7, 8(r8)
/* 8009D0E4 0009A024  D0 04 02 AC */	stfs f0, 0x2ac(r4)
/* 8009D0E8 0009A028  80 C8 00 0C */	lwz r6, 0xc(r8)
/* 8009D0EC 0009A02C  90 E4 02 B0 */	stw r7, 0x2b0(r4)
/* 8009D0F0 0009A030  C0 28 00 10 */	lfs f1, 0x10(r8)
/* 8009D0F4 0009A034  90 C4 02 B4 */	stw r6, 0x2b4(r4)
/* 8009D0F8 0009A038  C0 08 00 14 */	lfs f0, 0x14(r8)
/* 8009D0FC 0009A03C  D0 24 02 B8 */	stfs f1, 0x2b8(r4)
/* 8009D100 0009A040  D0 04 02 BC */	stfs f0, 0x2bc(r4)
/* 8009D104 0009A044  90 04 02 B0 */	stw r0, 0x2b0(r4)
/* 8009D108 0009A048  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D10C 0009A04C  B0 04 02 E2 */	sth r0, 0x2e2(r4)
/* 8009D110 0009A050  80 05 00 04 */	lwz r0, 4(r5)
/* 8009D114 0009A054  B0 04 02 E8 */	sth r0, 0x2e8(r4)
/* 8009D118 0009A058  80 05 00 08 */	lwz r0, 8(r5)
/* 8009D11C 0009A05C  B0 04 02 EE */	sth r0, 0x2ee(r4)
/* 8009D120 0009A060  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8009D124 0009A064  B0 04 02 F0 */	sth r0, 0x2f0(r4)
/* 8009D128 0009A068  80 05 00 10 */	lwz r0, 0x10(r5)
/* 8009D12C 0009A06C  B0 04 03 50 */	sth r0, 0x350(r4)
/* 8009D130 0009A070  4E 80 00 20 */	blr 
.endfn cmdSimpleADSR__12JASSeqParserFP8JASTrackPUl

.fn cmdTranspose__12JASSeqParserFP8JASTrackPUl, global
/* 8009D134 0009A074  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D138 0009A078  38 60 00 00 */	li r3, 0
/* 8009D13C 0009A07C  98 04 03 56 */	stb r0, 0x356(r4)
/* 8009D140 0009A080  4E 80 00 20 */	blr 
.endfn cmdTranspose__12JASSeqParserFP8JASTrackPUl

.fn cmdCloseTrack__12JASSeqParserFP8JASTrackPUl, global
/* 8009D144 0009A084  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D148 0009A088  7C 08 02 A6 */	mflr r0
/* 8009D14C 0009A08C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D150 0009A090  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009D154 0009A094  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D158 0009A098  54 00 15 BA */	rlwinm r0, r0, 2, 0x16, 0x1d
/* 8009D15C 0009A09C  7F E4 02 14 */	add r31, r4, r0
/* 8009D160 0009A0A0  80 7F 02 FC */	lwz r3, 0x2fc(r31)
/* 8009D164 0009A0A4  28 03 00 00 */	cmplwi r3, 0
/* 8009D168 0009A0A8  40 82 00 0C */	bne .L_8009D174
/* 8009D16C 0009A0AC  38 60 00 00 */	li r3, 0
/* 8009D170 0009A0B0  48 00 00 14 */	b .L_8009D184
.L_8009D174:
/* 8009D174 0009A0B4  48 00 3F 1D */	bl close__8JASTrackFv
/* 8009D178 0009A0B8  38 00 00 00 */	li r0, 0
/* 8009D17C 0009A0BC  38 60 00 00 */	li r3, 0
/* 8009D180 0009A0C0  90 1F 02 FC */	stw r0, 0x2fc(r31)
.L_8009D184:
/* 8009D184 0009A0C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D188 0009A0C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009D18C 0009A0CC  7C 08 03 A6 */	mtlr r0
/* 8009D190 0009A0D0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D194 0009A0D4  4E 80 00 20 */	blr 
.endfn cmdCloseTrack__12JASSeqParserFP8JASTrackPUl

.fn cmdOutSwitch__12JASSeqParserFP8JASTrackPUl, global
/* 8009D198 0009A0D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D19C 0009A0DC  7C 08 02 A6 */	mflr r0
/* 8009D1A0 0009A0E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D1A4 0009A0E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009D1A8 0009A0E8  83 E4 03 3C */	lwz r31, 0x33c(r4)
/* 8009D1AC 0009A0EC  28 1F 00 00 */	cmplwi r31, 0
/* 8009D1B0 0009A0F0  41 82 00 24 */	beq .L_8009D1D4
/* 8009D1B4 0009A0F4  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D1B8 0009A0F8  7F E3 FB 78 */	mr r3, r31
/* 8009D1BC 0009A0FC  54 04 04 3E */	clrlwi r4, r0, 0x10
/* 8009D1C0 0009A100  4B FF F2 9D */	bl setOuterSwitch__13JASOuterParamFUs
/* 8009D1C4 0009A104  3C 80 00 01 */	lis r4, 0x0000FFFF@ha
/* 8009D1C8 0009A108  7F E3 FB 78 */	mr r3, r31
/* 8009D1CC 0009A10C  38 84 FF FF */	addi r4, r4, 0x0000FFFF@l
/* 8009D1D0 0009A110  4B FF F2 B1 */	bl setOuterUpdate__13JASOuterParamFUs
.L_8009D1D4:
/* 8009D1D4 0009A114  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D1D8 0009A118  38 60 00 00 */	li r3, 0
/* 8009D1DC 0009A11C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009D1E0 0009A120  7C 08 03 A6 */	mtlr r0
/* 8009D1E4 0009A124  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D1E8 0009A128  4E 80 00 20 */	blr 
.endfn cmdOutSwitch__12JASSeqParserFP8JASTrackPUl

.fn cmdUpdateSync__12JASSeqParserFP8JASTrackPUl, global
/* 8009D1EC 0009A12C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D1F0 0009A130  7C 08 02 A6 */	mflr r0
/* 8009D1F4 0009A134  7C 83 23 78 */	mr r3, r4
/* 8009D1F8 0009A138  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D1FC 0009A13C  80 85 00 00 */	lwz r4, 0(r5)
/* 8009D200 0009A140  48 00 2F F1 */	bl updateTrack__8JASTrackFUl
/* 8009D204 0009A144  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D208 0009A148  38 60 00 00 */	li r3, 0
/* 8009D20C 0009A14C  7C 08 03 A6 */	mtlr r0
/* 8009D210 0009A150  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D214 0009A154  4E 80 00 20 */	blr 
.endfn cmdUpdateSync__12JASSeqParserFP8JASTrackPUl

.fn cmdBusConnect__12JASSeqParserFP8JASTrackPUl, global
/* 8009D218 0009A158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D21C 0009A15C  7C 08 02 A6 */	mflr r0
/* 8009D220 0009A160  7C 83 23 78 */	mr r3, r4
/* 8009D224 0009A164  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D228 0009A168  80 85 00 00 */	lwz r4, 0(r5)
/* 8009D22C 0009A16C  80 A5 00 04 */	lwz r5, 4(r5)
/* 8009D230 0009A170  48 00 25 75 */	bl connectBus__8JASTrackFii
/* 8009D234 0009A174  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D238 0009A178  38 60 00 00 */	li r3, 0
/* 8009D23C 0009A17C  7C 08 03 A6 */	mtlr r0
/* 8009D240 0009A180  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D244 0009A184  4E 80 00 20 */	blr 
.endfn cmdBusConnect__12JASSeqParserFP8JASTrackPUl

.fn cmdPauseStatus__12JASSeqParserFP8JASTrackPUl, global
/* 8009D248 0009A188  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D24C 0009A18C  38 60 00 00 */	li r3, 0
/* 8009D250 0009A190  98 04 03 58 */	stb r0, 0x358(r4)
/* 8009D254 0009A194  4E 80 00 20 */	blr 
.endfn cmdPauseStatus__12JASSeqParserFP8JASTrackPUl

.fn cmdVolumeMode__12JASSeqParserFP8JASTrackPUl, global
/* 8009D258 0009A198  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D25C 0009A19C  38 60 00 00 */	li r3, 0
/* 8009D260 0009A1A0  98 04 03 59 */	stb r0, 0x359(r4)
/* 8009D264 0009A1A4  4E 80 00 20 */	blr 
.endfn cmdVolumeMode__12JASSeqParserFP8JASTrackPUl

.fn cmdSetInterrupt__12JASSeqParserFP8JASTrackPUl, global
/* 8009D268 0009A1A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D26C 0009A1AC  7C 08 02 A6 */	mflr r0
/* 8009D270 0009A1B0  38 64 00 94 */	addi r3, r4, 0x94
/* 8009D274 0009A1B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D278 0009A1B8  80 C4 00 0C */	lwz r6, 0xc(r4)
/* 8009D27C 0009A1BC  80 05 00 04 */	lwz r0, 4(r5)
/* 8009D280 0009A1C0  80 85 00 00 */	lwz r4, 0(r5)
/* 8009D284 0009A1C4  7C A6 02 14 */	add r5, r6, r0
/* 8009D288 0009A1C8  48 00 57 D9 */	bl setIntr__10JASIntrMgrFUlPv
/* 8009D28C 0009A1CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D290 0009A1D0  38 60 00 00 */	li r3, 0
/* 8009D294 0009A1D4  7C 08 03 A6 */	mtlr r0
/* 8009D298 0009A1D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D29C 0009A1DC  4E 80 00 20 */	blr 
.endfn cmdSetInterrupt__12JASSeqParserFP8JASTrackPUl

.fn cmdDisInterrupt__12JASSeqParserFP8JASTrackPUl, global
/* 8009D2A0 0009A1E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D2A4 0009A1E4  7C 08 02 A6 */	mflr r0
/* 8009D2A8 0009A1E8  38 64 00 94 */	addi r3, r4, 0x94
/* 8009D2AC 0009A1EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D2B0 0009A1F0  80 85 00 00 */	lwz r4, 0(r5)
/* 8009D2B4 0009A1F4  48 00 57 D1 */	bl resetInter__10JASIntrMgrFUl
/* 8009D2B8 0009A1F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D2BC 0009A1FC  38 60 00 00 */	li r3, 0
/* 8009D2C0 0009A200  7C 08 03 A6 */	mtlr r0
/* 8009D2C4 0009A204  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D2C8 0009A208  4E 80 00 20 */	blr 
.endfn cmdDisInterrupt__12JASSeqParserFP8JASTrackPUl

.fn cmdClrI__12JASSeqParserFP8JASTrackPUl, global
/* 8009D2CC 0009A20C  38 60 00 01 */	li r3, 1
/* 8009D2D0 0009A210  38 00 00 00 */	li r0, 0
/* 8009D2D4 0009A214  98 64 00 94 */	stb r3, 0x94(r4)
/* 8009D2D8 0009A218  38 60 00 00 */	li r3, 0
/* 8009D2DC 0009A21C  90 04 00 50 */	stw r0, 0x50(r4)
/* 8009D2E0 0009A220  4E 80 00 20 */	blr 
.endfn cmdClrI__12JASSeqParserFP8JASTrackPUl

.fn cmdSetI__12JASSeqParserFP8JASTrackPUl, global
/* 8009D2E4 0009A224  38 00 00 00 */	li r0, 0
/* 8009D2E8 0009A228  38 60 00 00 */	li r3, 0
/* 8009D2EC 0009A22C  98 04 00 94 */	stb r0, 0x94(r4)
/* 8009D2F0 0009A230  4E 80 00 20 */	blr 
.endfn cmdSetI__12JASSeqParserFP8JASTrackPUl

.fn cmdRetI__12JASSeqParserFP8JASTrackPUl, global
/* 8009D2F4 0009A234  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D2F8 0009A238  7C 08 02 A6 */	mflr r0
/* 8009D2FC 0009A23C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D300 0009A240  38 00 00 01 */	li r0, 1
/* 8009D304 0009A244  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009D308 0009A248  7C 9F 23 78 */	mr r31, r4
/* 8009D30C 0009A24C  38 7F 00 0C */	addi r3, r31, 0xc
/* 8009D310 0009A250  98 04 00 94 */	stb r0, 0x94(r4)
/* 8009D314 0009A254  4B FF F6 8D */	bl retIntr__10JASSeqCtrlFv
/* 8009D318 0009A258  7F E3 FB 78 */	mr r3, r31
/* 8009D31C 0009A25C  48 00 23 55 */	bl tryInterrupt__8JASTrackFv
/* 8009D320 0009A260  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 8009D324 0009A264  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009D328 0009A268  7C 03 00 D0 */	neg r0, r3
/* 8009D32C 0009A26C  7C 00 18 78 */	andc r0, r0, r3
/* 8009D330 0009A270  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8009D334 0009A274  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D338 0009A278  7C 08 03 A6 */	mtlr r0
/* 8009D33C 0009A27C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D340 0009A280  4E 80 00 20 */	blr 
.endfn cmdRetI__12JASSeqParserFP8JASTrackPUl

.fn cmdIntTimer__12JASSeqParserFP8JASTrackPUl, global
/* 8009D344 0009A284  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D348 0009A288  38 60 00 00 */	li r3, 0
/* 8009D34C 0009A28C  80 A5 00 04 */	lwz r5, 4(r5)
/* 8009D350 0009A290  98 04 00 97 */	stb r0, 0x97(r4)
/* 8009D354 0009A294  90 A4 00 98 */	stw r5, 0x98(r4)
/* 8009D358 0009A298  90 A4 00 9C */	stw r5, 0x9c(r4)
/* 8009D35C 0009A29C  4E 80 00 20 */	blr 
.endfn cmdIntTimer__12JASSeqParserFP8JASTrackPUl

.fn cmdSyncCPU__12JASSeqParserFP8JASTrackPUl, global
/* 8009D360 0009A2A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D364 0009A2A4  7C 08 02 A6 */	mflr r0
/* 8009D368 0009A2A8  3C 60 00 01 */	lis r3, 0x0000FFFF@ha
/* 8009D36C 0009A2AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D370 0009A2B0  38 63 FF FF */	addi r3, r3, 0x0000FFFF@l
/* 8009D374 0009A2B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009D378 0009A2B8  7C 9F 23 78 */	mr r31, r4
/* 8009D37C 0009A2BC  81 8D 8A 70 */	lwz r12, sCallBackFunc__8JASTrack@sda21(r13)
/* 8009D380 0009A2C0  28 0C 00 00 */	cmplwi r12, 0
/* 8009D384 0009A2C4  41 82 00 18 */	beq .L_8009D39C
/* 8009D388 0009A2C8  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D38C 0009A2CC  7F E3 FB 78 */	mr r3, r31
/* 8009D390 0009A2D0  54 04 04 3E */	clrlwi r4, r0, 0x10
/* 8009D394 0009A2D4  7D 89 03 A6 */	mtctr r12
/* 8009D398 0009A2D8  4E 80 04 21 */	bctrl 
.L_8009D39C:
/* 8009D39C 0009A2DC  B0 7F 02 6E */	sth r3, 0x26e(r31)
/* 8009D3A0 0009A2E0  38 60 00 00 */	li r3, 0
/* 8009D3A4 0009A2E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D3A8 0009A2E8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009D3AC 0009A2EC  7C 08 03 A6 */	mtlr r0
/* 8009D3B0 0009A2F0  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D3B4 0009A2F4  4E 80 00 20 */	blr 
.endfn cmdSyncCPU__12JASSeqParserFP8JASTrackPUl

.fn cmdFlushAll__12JASSeqParserFP8JASTrackPUl, global
/* 8009D3B8 0009A2F8  38 60 00 00 */	li r3, 0
/* 8009D3BC 0009A2FC  4E 80 00 20 */	blr 
.endfn cmdFlushAll__12JASSeqParserFP8JASTrackPUl

.fn cmdFlushRelease__12JASSeqParserFP8JASTrackPUl, global
/* 8009D3C0 0009A300  38 60 00 00 */	li r3, 0
/* 8009D3C4 0009A304  4E 80 00 20 */	blr 
.endfn cmdFlushRelease__12JASSeqParserFP8JASTrackPUl

.fn cmdTimeBase__12JASSeqParserFP8JASTrackPUl, global
/* 8009D3C8 0009A308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D3CC 0009A30C  7C 08 02 A6 */	mflr r0
/* 8009D3D0 0009A310  7C 83 23 78 */	mr r3, r4
/* 8009D3D4 0009A314  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D3D8 0009A318  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D3DC 0009A31C  54 04 04 3E */	clrlwi r4, r0, 0x10
/* 8009D3E0 0009A320  48 00 51 F9 */	bl setTimebase__8JASTrackFUs
/* 8009D3E4 0009A324  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D3E8 0009A328  38 60 00 00 */	li r3, 0
/* 8009D3EC 0009A32C  7C 08 03 A6 */	mtlr r0
/* 8009D3F0 0009A330  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D3F4 0009A334  4E 80 00 20 */	blr 
.endfn cmdTimeBase__12JASSeqParserFP8JASTrackPUl

.fn cmdTempo__12JASSeqParserFP8JASTrackPUl, global
/* 8009D3F8 0009A338  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D3FC 0009A33C  7C 08 02 A6 */	mflr r0
/* 8009D400 0009A340  7C 83 23 78 */	mr r3, r4
/* 8009D404 0009A344  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D408 0009A348  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D40C 0009A34C  54 04 04 3E */	clrlwi r4, r0, 0x10
/* 8009D410 0009A350  48 00 51 8D */	bl setTempo__8JASTrackFUs
/* 8009D414 0009A354  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D418 0009A358  38 60 00 00 */	li r3, 0
/* 8009D41C 0009A35C  7C 08 03 A6 */	mtlr r0
/* 8009D420 0009A360  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D424 0009A364  4E 80 00 20 */	blr 
.endfn cmdTempo__12JASSeqParserFP8JASTrackPUl

.fn cmdFinish__12JASSeqParserFP8JASTrackPUl, global
/* 8009D428 0009A368  38 60 00 03 */	li r3, 3
/* 8009D42C 0009A36C  4E 80 00 20 */	blr 
.endfn cmdFinish__12JASSeqParserFP8JASTrackPUl

.fn cmdNop__12JASSeqParserFP8JASTrackPUl, global
/* 8009D430 0009A370  38 60 00 00 */	li r3, 0
/* 8009D434 0009A374  4E 80 00 20 */	blr 
.endfn cmdNop__12JASSeqParserFP8JASTrackPUl

.fn cmdPanPowSet__12JASSeqParserFP8JASTrackPUl, global
/* 8009D438 0009A378  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009D43C 0009A37C  3C 00 43 30 */	lis r0, 0x4330
/* 8009D440 0009A380  C8 22 89 D8 */	lfd f1, lbl_80516D38@sda21(r2)
/* 8009D444 0009A384  38 60 00 00 */	li r3, 0
/* 8009D448 0009A388  80 C5 00 00 */	lwz r6, 0(r5)
/* 8009D44C 0009A38C  90 01 00 08 */	stw r0, 8(r1)
/* 8009D450 0009A390  C0 42 89 D0 */	lfs f2, lbl_80516D30@sda21(r2)
/* 8009D454 0009A394  B0 C4 02 78 */	sth r6, 0x278(r4)
/* 8009D458 0009A398  80 C5 00 04 */	lwz r6, 4(r5)
/* 8009D45C 0009A39C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8009D460 0009A3A0  B0 C4 02 7A */	sth r6, 0x27a(r4)
/* 8009D464 0009A3A4  80 05 00 08 */	lwz r0, 8(r5)
/* 8009D468 0009A3A8  B0 04 02 7C */	sth r0, 0x27c(r4)
/* 8009D46C 0009A3AC  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8009D470 0009A3B0  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009D474 0009A3B4  C8 01 00 08 */	lfd f0, 8(r1)
/* 8009D478 0009A3B8  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009D47C 0009A3BC  EC 02 00 32 */	fmuls f0, f2, f0
/* 8009D480 0009A3C0  FC 00 00 1E */	fctiwz f0, f0
/* 8009D484 0009A3C4  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 8009D488 0009A3C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D48C 0009A3CC  B0 04 02 7E */	sth r0, 0x27e(r4)
/* 8009D490 0009A3D0  80 05 00 10 */	lwz r0, 0x10(r5)
/* 8009D494 0009A3D4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8009D498 0009A3D8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8009D49C 0009A3DC  EC 00 08 28 */	fsubs f0, f0, f1
/* 8009D4A0 0009A3E0  EC 02 00 32 */	fmuls f0, f2, f0
/* 8009D4A4 0009A3E4  FC 00 00 1E */	fctiwz f0, f0
/* 8009D4A8 0009A3E8  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 8009D4AC 0009A3EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009D4B0 0009A3F0  B0 04 02 80 */	sth r0, 0x280(r4)
/* 8009D4B4 0009A3F4  38 21 00 30 */	addi r1, r1, 0x30
/* 8009D4B8 0009A3F8  4E 80 00 20 */	blr 
.endfn cmdPanPowSet__12JASSeqParserFP8JASTrackPUl

.fn cmdFIRSet__12JASSeqParserFP8JASTrackPUl, global
/* 8009D4BC 0009A3FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D4C0 0009A400  7C 08 02 A6 */	mflr r0
/* 8009D4C4 0009A404  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D4C8 0009A408  80 C4 00 0C */	lwz r6, 0xc(r4)
/* 8009D4CC 0009A40C  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D4D0 0009A410  80 64 03 3C */	lwz r3, 0x33c(r4)
/* 8009D4D4 0009A414  7C 86 02 14 */	add r4, r6, r0
/* 8009D4D8 0009A418  4B FF F0 81 */	bl setFirFilter__13JASOuterParamFPs
/* 8009D4DC 0009A41C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D4E0 0009A420  38 60 00 00 */	li r3, 0
/* 8009D4E4 0009A424  7C 08 03 A6 */	mtlr r0
/* 8009D4E8 0009A428  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D4EC 0009A42C  4E 80 00 20 */	blr 
.endfn cmdFIRSet__12JASSeqParserFP8JASTrackPUl

.fn cmdEXTSet__12JASSeqParserFP8JASTrackPUl, global
/* 8009D4F0 0009A430  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D4F4 0009A434  7C 08 02 A6 */	mflr r0
/* 8009D4F8 0009A438  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D4FC 0009A43C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8009D500 0009A440  93 C1 00 08 */	stw r30, 8(r1)
/* 8009D504 0009A444  7C 9E 23 78 */	mr r30, r4
/* 8009D508 0009A448  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D50C 0009A44C  80 64 00 0C */	lwz r3, 0xc(r4)
/* 8009D510 0009A450  7F E3 02 14 */	add r31, r3, r0
/* 8009D514 0009A454  7F E3 FB 78 */	mr r3, r31
/* 8009D518 0009A458  4B FF EF 35 */	bl initExtBuffer__13JASOuterParamFv
/* 8009D51C 0009A45C  7F C3 F3 78 */	mr r3, r30
/* 8009D520 0009A460  7F E4 FB 78 */	mr r4, r31
/* 8009D524 0009A464  48 00 21 AD */	bl assignExtBuffer__8JASTrackFP13JASOuterParam
/* 8009D528 0009A468  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D52C 0009A46C  38 60 00 00 */	li r3, 0
/* 8009D530 0009A470  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8009D534 0009A474  83 C1 00 08 */	lwz r30, 8(r1)
/* 8009D538 0009A478  7C 08 03 A6 */	mtlr r0
/* 8009D53C 0009A47C  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D540 0009A480  4E 80 00 20 */	blr 
.endfn cmdEXTSet__12JASSeqParserFP8JASTrackPUl

.fn cmdPanSwSet__12JASSeqParserFP8JASTrackPUl, global
/* 8009D544 0009A484  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8009D548 0009A488  38 60 00 00 */	li r3, 0
/* 8009D54C 0009A48C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8009D550 0009A490  38 E1 00 10 */	addi r7, r1, 0x10
/* 8009D554 0009A494  38 C1 00 08 */	addi r6, r1, 8
/* 8009D558 0009A498  83 E2 89 E0 */	lwz r31, lbl_80516D40@sda21(r2)
/* 8009D55C 0009A49C  A1 82 89 E4 */	lhz r12, (lbl_80516D40+4)@sda21(r2)
/* 8009D560 0009A4A0  89 62 89 E6 */	lbz r11, (lbl_80516D40+6)@sda21(r2)
/* 8009D564 0009A4A4  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D568 0009A4A8  81 42 89 E8 */	lwz r10, lbl_80516D48@sda21(r2)
/* 8009D56C 0009A4AC  A1 22 89 EC */	lhz r9, (lbl_80516D48+4)@sda21(r2)
/* 8009D570 0009A4B0  54 00 D9 7E */	srwi r0, r0, 5
/* 8009D574 0009A4B4  89 02 89 EE */	lbz r8, (lbl_80516D48+6)@sda21(r2)
/* 8009D578 0009A4B8  93 E1 00 10 */	stw r31, 0x10(r1)
/* 8009D57C 0009A4BC  B1 81 00 14 */	sth r12, 0x14(r1)
/* 8009D580 0009A4C0  99 61 00 16 */	stb r11, 0x16(r1)
/* 8009D584 0009A4C4  7C 07 00 AE */	lbzx r0, r7, r0
/* 8009D588 0009A4C8  91 41 00 08 */	stw r10, 8(r1)
/* 8009D58C 0009A4CC  98 04 03 5C */	stb r0, 0x35c(r4)
/* 8009D590 0009A4D0  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D594 0009A4D4  B1 21 00 0C */	sth r9, 0xc(r1)
/* 8009D598 0009A4D8  54 00 D9 7E */	srwi r0, r0, 5
/* 8009D59C 0009A4DC  99 01 00 0E */	stb r8, 0xe(r1)
/* 8009D5A0 0009A4E0  7C 06 00 AE */	lbzx r0, r6, r0
/* 8009D5A4 0009A4E4  98 04 03 5F */	stb r0, 0x35f(r4)
/* 8009D5A8 0009A4E8  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D5AC 0009A4EC  54 00 06 FE */	clrlwi r0, r0, 0x1b
/* 8009D5B0 0009A4F0  98 04 01 3E */	stb r0, 0x13e(r4)
/* 8009D5B4 0009A4F4  80 04 03 4C */	lwz r0, 0x34c(r4)
/* 8009D5B8 0009A4F8  60 00 00 1C */	ori r0, r0, 0x1c
/* 8009D5BC 0009A4FC  90 04 03 4C */	stw r0, 0x34c(r4)
/* 8009D5C0 0009A500  80 05 00 04 */	lwz r0, 4(r5)
/* 8009D5C4 0009A504  54 00 D9 7E */	srwi r0, r0, 5
/* 8009D5C8 0009A508  7C 07 00 AE */	lbzx r0, r7, r0
/* 8009D5CC 0009A50C  98 04 03 5D */	stb r0, 0x35d(r4)
/* 8009D5D0 0009A510  80 05 00 04 */	lwz r0, 4(r5)
/* 8009D5D4 0009A514  54 00 D9 7E */	srwi r0, r0, 5
/* 8009D5D8 0009A518  7C 06 00 AE */	lbzx r0, r6, r0
/* 8009D5DC 0009A51C  98 04 03 60 */	stb r0, 0x360(r4)
/* 8009D5E0 0009A520  80 05 00 04 */	lwz r0, 4(r5)
/* 8009D5E4 0009A524  54 00 06 FE */	clrlwi r0, r0, 0x1b
/* 8009D5E8 0009A528  98 04 01 3F */	stb r0, 0x13f(r4)
/* 8009D5EC 0009A52C  80 04 03 4C */	lwz r0, 0x34c(r4)
/* 8009D5F0 0009A530  60 00 00 1C */	ori r0, r0, 0x1c
/* 8009D5F4 0009A534  90 04 03 4C */	stw r0, 0x34c(r4)
/* 8009D5F8 0009A538  80 05 00 08 */	lwz r0, 8(r5)
/* 8009D5FC 0009A53C  54 00 D9 7E */	srwi r0, r0, 5
/* 8009D600 0009A540  7C 07 00 AE */	lbzx r0, r7, r0
/* 8009D604 0009A544  98 04 03 5E */	stb r0, 0x35e(r4)
/* 8009D608 0009A548  80 05 00 08 */	lwz r0, 8(r5)
/* 8009D60C 0009A54C  54 00 D9 7E */	srwi r0, r0, 5
/* 8009D610 0009A550  7C 06 00 AE */	lbzx r0, r6, r0
/* 8009D614 0009A554  98 04 03 61 */	stb r0, 0x361(r4)
/* 8009D618 0009A558  80 05 00 08 */	lwz r0, 8(r5)
/* 8009D61C 0009A55C  54 00 06 FE */	clrlwi r0, r0, 0x1b
/* 8009D620 0009A560  98 04 01 40 */	stb r0, 0x140(r4)
/* 8009D624 0009A564  80 04 03 4C */	lwz r0, 0x34c(r4)
/* 8009D628 0009A568  60 00 00 1C */	ori r0, r0, 0x1c
/* 8009D62C 0009A56C  90 04 03 4C */	stw r0, 0x34c(r4)
/* 8009D630 0009A570  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 8009D634 0009A574  38 21 00 20 */	addi r1, r1, 0x20
/* 8009D638 0009A578  4E 80 00 20 */	blr 
.endfn cmdPanSwSet__12JASSeqParserFP8JASTrackPUl

.fn cmdOscRoute__12JASSeqParserFP8JASTrackPUl, global
/* 8009D63C 0009A57C  80 A5 00 00 */	lwz r5, 0(r5)
/* 8009D640 0009A580  38 60 00 00 */	li r3, 0
/* 8009D644 0009A584  54 A0 F6 BA */	rlwinm r0, r5, 0x1e, 0x1a, 0x1d
/* 8009D648 0009A588  54 A5 07 3E */	clrlwi r5, r5, 0x1c
/* 8009D64C 0009A58C  7C 84 02 14 */	add r4, r4, r0
/* 8009D650 0009A590  90 A4 02 D8 */	stw r5, 0x2d8(r4)
/* 8009D654 0009A594  4E 80 00 20 */	blr 
.endfn cmdOscRoute__12JASSeqParserFP8JASTrackPUl

.fn cmdVibDepth__12JASSeqParserFP8JASTrackPUl, global
/* 8009D658 0009A598  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D65C 0009A59C  3C 00 43 30 */	lis r0, 0x4330
/* 8009D660 0009A5A0  C8 42 89 F8 */	lfd f2, lbl_80516D58@sda21(r2)
/* 8009D664 0009A5A4  38 60 00 00 */	li r3, 0
/* 8009D668 0009A5A8  80 C5 00 00 */	lwz r6, 0(r5)
/* 8009D66C 0009A5AC  90 01 00 08 */	stw r0, 8(r1)
/* 8009D670 0009A5B0  54 C5 44 2E */	rlwinm r5, r6, 8, 0x10, 0x17
/* 8009D674 0009A5B4  54 C0 0D FC */	rlwinm r0, r6, 1, 0x17, 0x1e
/* 8009D678 0009A5B8  7C A0 03 78 */	or r0, r5, r0
/* 8009D67C 0009A5BC  C0 02 89 F0 */	lfs f0, lbl_80516D50@sda21(r2)
/* 8009D680 0009A5C0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009D684 0009A5C4  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009D688 0009A5C8  C8 21 00 08 */	lfd f1, 8(r1)
/* 8009D68C 0009A5CC  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009D690 0009A5D0  EC 21 00 24 */	fdivs f1, f1, f0
/* 8009D694 0009A5D4  D0 24 00 EC */	stfs f1, 0xec(r4)
/* 8009D698 0009A5D8  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D69C 0009A5DC  4E 80 00 20 */	blr 
.endfn cmdVibDepth__12JASSeqParserFP8JASTrackPUl

.fn cmdVibDepthMidi__12JASSeqParserFP8JASTrackPUl, global
/* 8009D6A0 0009A5E0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D6A4 0009A5E4  3C 00 43 30 */	lis r0, 0x4330
/* 8009D6A8 0009A5E8  C8 42 89 D8 */	lfd f2, lbl_80516D38@sda21(r2)
/* 8009D6AC 0009A5EC  38 60 00 00 */	li r3, 0
/* 8009D6B0 0009A5F0  80 A5 00 00 */	lwz r5, 0(r5)
/* 8009D6B4 0009A5F4  90 01 00 08 */	stw r0, 8(r1)
/* 8009D6B8 0009A5F8  C0 02 89 F0 */	lfs f0, lbl_80516D50@sda21(r2)
/* 8009D6BC 0009A5FC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8009D6C0 0009A600  C8 21 00 08 */	lfd f1, 8(r1)
/* 8009D6C4 0009A604  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009D6C8 0009A608  EC 21 00 24 */	fdivs f1, f1, f0
/* 8009D6CC 0009A60C  D0 24 00 EC */	stfs f1, 0xec(r4)
/* 8009D6D0 0009A610  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D6D4 0009A614  4E 80 00 20 */	blr 
.endfn cmdVibDepthMidi__12JASSeqParserFP8JASTrackPUl

.fn cmdVibPitch__12JASSeqParserFP8JASTrackPUl, global
/* 8009D6D8 0009A618  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D6DC 0009A61C  3C 00 43 30 */	lis r0, 0x4330
/* 8009D6E0 0009A620  C8 42 89 D8 */	lfd f2, lbl_80516D38@sda21(r2)
/* 8009D6E4 0009A624  38 60 00 00 */	li r3, 0
/* 8009D6E8 0009A628  80 C5 00 00 */	lwz r6, 0(r5)
/* 8009D6EC 0009A62C  90 01 00 08 */	stw r0, 8(r1)
/* 8009D6F0 0009A630  54 C5 44 2E */	rlwinm r5, r6, 8, 0x10, 0x17
/* 8009D6F4 0009A634  54 C0 0D FC */	rlwinm r0, r6, 1, 0x17, 0x1e
/* 8009D6F8 0009A638  7C A0 03 78 */	or r0, r5, r0
/* 8009D6FC 0009A63C  C0 02 8A 00 */	lfs f0, lbl_80516D60@sda21(r2)
/* 8009D700 0009A640  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8009D704 0009A644  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009D708 0009A648  C8 21 00 08 */	lfd f1, 8(r1)
/* 8009D70C 0009A64C  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009D710 0009A650  EC 21 00 24 */	fdivs f1, f1, f0
/* 8009D714 0009A654  D0 24 00 F0 */	stfs f1, 0xf0(r4)
/* 8009D718 0009A658  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D71C 0009A65C  4E 80 00 20 */	blr 
.endfn cmdVibPitch__12JASSeqParserFP8JASTrackPUl

.fn cmdIIRSet__12JASSeqParserFP8JASTrackPUl, global
/* 8009D720 0009A660  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009D724 0009A664  3C 00 43 30 */	lis r0, 0x4330
/* 8009D728 0009A668  C8 82 89 F8 */	lfd f4, lbl_80516D58@sda21(r2)
/* 8009D72C 0009A66C  38 60 00 00 */	li r3, 0
/* 8009D730 0009A670  80 C5 00 00 */	lwz r6, 0(r5)
/* 8009D734 0009A674  90 01 00 08 */	stw r0, 8(r1)
/* 8009D738 0009A678  7C C6 07 34 */	extsh r6, r6
/* 8009D73C 0009A67C  C0 62 8A 04 */	lfs f3, lbl_80516D64@sda21(r2)
/* 8009D740 0009A680  6C C6 80 00 */	xoris r6, r6, 0x8000
/* 8009D744 0009A684  C0 42 8A 08 */	lfs f2, lbl_80516D68@sda21(r2)
/* 8009D748 0009A688  90 C1 00 0C */	stw r6, 0xc(r1)
/* 8009D74C 0009A68C  C0 22 8A 0C */	lfs f1, lbl_80516D6C@sda21(r2)
/* 8009D750 0009A690  C8 01 00 08 */	lfd f0, 8(r1)
/* 8009D754 0009A694  90 01 00 10 */	stw r0, 0x10(r1)
/* 8009D758 0009A698  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D75C 0009A69C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8009D760 0009A6A0  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D764 0009A6A4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8009D768 0009A6A8  D0 04 02 0C */	stfs f0, 0x20c(r4)
/* 8009D76C 0009A6AC  C0 04 02 0C */	lfs f0, 0x20c(r4)
/* 8009D770 0009A6B0  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 8009D774 0009A6B4  D0 44 02 14 */	stfs f2, 0x214(r4)
/* 8009D778 0009A6B8  D0 24 02 10 */	stfs f1, 0x210(r4)
/* 8009D77C 0009A6BC  80 05 00 04 */	lwz r0, 4(r5)
/* 8009D780 0009A6C0  7C 00 07 34 */	extsh r0, r0
/* 8009D784 0009A6C4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009D788 0009A6C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D78C 0009A6CC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8009D790 0009A6D0  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D794 0009A6D4  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D798 0009A6D8  D0 04 02 1C */	stfs f0, 0x21c(r4)
/* 8009D79C 0009A6DC  C0 04 02 1C */	lfs f0, 0x21c(r4)
/* 8009D7A0 0009A6E0  D0 04 02 18 */	stfs f0, 0x218(r4)
/* 8009D7A4 0009A6E4  D0 44 02 24 */	stfs f2, 0x224(r4)
/* 8009D7A8 0009A6E8  D0 24 02 20 */	stfs f1, 0x220(r4)
/* 8009D7AC 0009A6EC  80 05 00 08 */	lwz r0, 8(r5)
/* 8009D7B0 0009A6F0  7C 00 07 34 */	extsh r0, r0
/* 8009D7B4 0009A6F4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009D7B8 0009A6F8  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8009D7BC 0009A6FC  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8009D7C0 0009A700  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D7C4 0009A704  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D7C8 0009A708  D0 04 02 2C */	stfs f0, 0x22c(r4)
/* 8009D7CC 0009A70C  C0 04 02 2C */	lfs f0, 0x22c(r4)
/* 8009D7D0 0009A710  D0 04 02 28 */	stfs f0, 0x228(r4)
/* 8009D7D4 0009A714  D0 44 02 34 */	stfs f2, 0x234(r4)
/* 8009D7D8 0009A718  D0 24 02 30 */	stfs f1, 0x230(r4)
/* 8009D7DC 0009A71C  80 05 00 0C */	lwz r0, 0xc(r5)
/* 8009D7E0 0009A720  7C 00 07 34 */	extsh r0, r0
/* 8009D7E4 0009A724  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009D7E8 0009A728  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009D7EC 0009A72C  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8009D7F0 0009A730  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D7F4 0009A734  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D7F8 0009A738  D0 04 02 3C */	stfs f0, 0x23c(r4)
/* 8009D7FC 0009A73C  C0 04 02 3C */	lfs f0, 0x23c(r4)
/* 8009D800 0009A740  D0 04 02 38 */	stfs f0, 0x238(r4)
/* 8009D804 0009A744  D0 44 02 44 */	stfs f2, 0x244(r4)
/* 8009D808 0009A748  D0 24 02 40 */	stfs f1, 0x240(r4)
/* 8009D80C 0009A74C  38 21 00 30 */	addi r1, r1, 0x30
/* 8009D810 0009A750  4E 80 00 20 */	blr 
.endfn cmdIIRSet__12JASSeqParserFP8JASTrackPUl

.fn cmdIIRCutOff__12JASSeqParserFP8JASTrackPUl, global
/* 8009D814 0009A754  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009D818 0009A758  3C 00 43 30 */	lis r0, 0x4330
/* 8009D81C 0009A75C  3C 60 80 4A */	lis r3, CUTOFF_TO_IIR_TABLE__9JASPlayer@ha
/* 8009D820 0009A760  C8 82 89 F8 */	lfd f4, lbl_80516D58@sda21(r2)
/* 8009D824 0009A764  80 A5 00 00 */	lwz r5, 0(r5)
/* 8009D828 0009A768  38 63 38 F8 */	addi r3, r3, CUTOFF_TO_IIR_TABLE__9JASPlayer@l
/* 8009D82C 0009A76C  90 01 00 08 */	stw r0, 8(r1)
/* 8009D830 0009A770  54 A5 1D 78 */	rlwinm r5, r5, 3, 0x15, 0x1c
/* 8009D834 0009A774  C0 62 8A 10 */	lfs f3, lbl_80516D70@sda21(r2)
/* 8009D838 0009A778  7C C3 2A 14 */	add r6, r3, r5
/* 8009D83C 0009A77C  C0 42 8A 08 */	lfs f2, lbl_80516D68@sda21(r2)
/* 8009D840 0009A780  A8 A6 00 00 */	lha r5, 0(r6)
/* 8009D844 0009A784  38 60 00 00 */	li r3, 0
/* 8009D848 0009A788  C0 22 8A 0C */	lfs f1, lbl_80516D6C@sda21(r2)
/* 8009D84C 0009A78C  6C A5 80 00 */	xoris r5, r5, 0x8000
/* 8009D850 0009A790  90 01 00 10 */	stw r0, 0x10(r1)
/* 8009D854 0009A794  90 A1 00 0C */	stw r5, 0xc(r1)
/* 8009D858 0009A798  C8 01 00 08 */	lfd f0, 8(r1)
/* 8009D85C 0009A79C  90 01 00 18 */	stw r0, 0x18(r1)
/* 8009D860 0009A7A0  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D864 0009A7A4  90 01 00 20 */	stw r0, 0x20(r1)
/* 8009D868 0009A7A8  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D86C 0009A7AC  D0 04 02 0C */	stfs f0, 0x20c(r4)
/* 8009D870 0009A7B0  C0 04 02 0C */	lfs f0, 0x20c(r4)
/* 8009D874 0009A7B4  D0 04 02 08 */	stfs f0, 0x208(r4)
/* 8009D878 0009A7B8  D0 44 02 14 */	stfs f2, 0x214(r4)
/* 8009D87C 0009A7BC  D0 24 02 10 */	stfs f1, 0x210(r4)
/* 8009D880 0009A7C0  A8 06 00 02 */	lha r0, 2(r6)
/* 8009D884 0009A7C4  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009D888 0009A7C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D88C 0009A7CC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 8009D890 0009A7D0  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D894 0009A7D4  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D898 0009A7D8  D0 04 02 1C */	stfs f0, 0x21c(r4)
/* 8009D89C 0009A7DC  C0 04 02 1C */	lfs f0, 0x21c(r4)
/* 8009D8A0 0009A7E0  D0 04 02 18 */	stfs f0, 0x218(r4)
/* 8009D8A4 0009A7E4  D0 44 02 24 */	stfs f2, 0x224(r4)
/* 8009D8A8 0009A7E8  D0 24 02 20 */	stfs f1, 0x220(r4)
/* 8009D8AC 0009A7EC  A8 06 00 04 */	lha r0, 4(r6)
/* 8009D8B0 0009A7F0  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009D8B4 0009A7F4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 8009D8B8 0009A7F8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 8009D8BC 0009A7FC  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D8C0 0009A800  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D8C4 0009A804  D0 04 02 2C */	stfs f0, 0x22c(r4)
/* 8009D8C8 0009A808  C0 04 02 2C */	lfs f0, 0x22c(r4)
/* 8009D8CC 0009A80C  D0 04 02 28 */	stfs f0, 0x228(r4)
/* 8009D8D0 0009A810  D0 44 02 34 */	stfs f2, 0x234(r4)
/* 8009D8D4 0009A814  D0 24 02 30 */	stfs f1, 0x230(r4)
/* 8009D8D8 0009A818  A8 06 00 06 */	lha r0, 6(r6)
/* 8009D8DC 0009A81C  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 8009D8E0 0009A820  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009D8E4 0009A824  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 8009D8E8 0009A828  EC 00 20 28 */	fsubs f0, f0, f4
/* 8009D8EC 0009A82C  EC 00 18 24 */	fdivs f0, f0, f3
/* 8009D8F0 0009A830  D0 04 02 3C */	stfs f0, 0x23c(r4)
/* 8009D8F4 0009A834  C0 04 02 3C */	lfs f0, 0x23c(r4)
/* 8009D8F8 0009A838  D0 04 02 38 */	stfs f0, 0x238(r4)
/* 8009D8FC 0009A83C  D0 44 02 44 */	stfs f2, 0x244(r4)
/* 8009D900 0009A840  D0 24 02 40 */	stfs f1, 0x240(r4)
/* 8009D904 0009A844  38 21 00 30 */	addi r1, r1, 0x30
/* 8009D908 0009A848  4E 80 00 20 */	blr 
.endfn cmdIIRCutOff__12JASSeqParserFP8JASTrackPUl

.fn cmdOscFull__12JASSeqParserFP8JASTrackPUl, global
/* 8009D90C 0009A84C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8009D910 0009A850  7C 08 02 A6 */	mflr r0
/* 8009D914 0009A854  7C A6 2B 78 */	mr r6, r5
/* 8009D918 0009A858  7C 83 23 78 */	mr r3, r4
/* 8009D91C 0009A85C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8009D920 0009A860  80 05 00 00 */	lwz r0, 0(r5)
/* 8009D924 0009A864  80 A5 00 04 */	lwz r5, 4(r5)
/* 8009D928 0009A868  80 C6 00 08 */	lwz r6, 8(r6)
/* 8009D92C 0009A86C  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8009D930 0009A870  48 00 21 C5 */	bl oscSetupFull__8JASTrackFUcUlUl
/* 8009D934 0009A874  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009D938 0009A878  38 60 00 00 */	li r3, 0
/* 8009D93C 0009A87C  7C 08 03 A6 */	mtlr r0
/* 8009D940 0009A880  38 21 00 10 */	addi r1, r1, 0x10
/* 8009D944 0009A884  4E 80 00 20 */	blr 
.endfn cmdOscFull__12JASSeqParserFP8JASTrackPUl

.fn cmdCheckWave__12JASSeqParserFP8JASTrackPUl, global
/* 8009D948 0009A888  38 00 00 00 */	li r0, 0
/* 8009D94C 0009A88C  38 60 00 00 */	li r3, 0
/* 8009D950 0009A890  B0 04 02 6E */	sth r0, 0x26e(r4)
/* 8009D954 0009A894  4E 80 00 20 */	blr 
.endfn cmdCheckWave__12JASSeqParserFP8JASTrackPUl

.fn cmdPrintf__12JASSeqParserFP8JASTrackPUl, global
/* 8009D958 0009A898  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 8009D95C 0009A89C  7C 08 02 A6 */	mflr r0
/* 8009D960 0009A8A0  38 A0 00 00 */	li r5, 0
/* 8009D964 0009A8A4  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 8009D968 0009A8A8  BF 61 00 AC */	stmw r27, 0xac(r1)
/* 8009D96C 0009A8AC  3B E1 00 08 */	addi r31, r1, 8
/* 8009D970 0009A8B0  7C 9D 23 78 */	mr r29, r4
/* 8009D974 0009A8B4  38 81 00 1C */	addi r4, r1, 0x1c
/* 8009D978 0009A8B8  7F E3 FB 78 */	mr r3, r31
/* 8009D97C 0009A8BC  3B C0 00 00 */	li r30, 0
/* 8009D980 0009A8C0  48 00 01 48 */	b .L_8009DAC8
.L_8009D984:
/* 8009D984 0009A8C4  80 DD 00 10 */	lwz r6, 0x10(r29)
/* 8009D988 0009A8C8  38 06 00 01 */	addi r0, r6, 1
/* 8009D98C 0009A8CC  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8009D990 0009A8D0  88 06 00 00 */	lbz r0, 0(r6)
/* 8009D994 0009A8D4  7C 04 29 AE */	stbx r0, r4, r5
/* 8009D998 0009A8D8  7C C4 28 AE */	lbzx r6, r4, r5
/* 8009D99C 0009A8DC  7C C0 07 75 */	extsb. r0, r6
/* 8009D9A0 0009A8E0  41 82 01 30 */	beq .L_8009DAD0
/* 8009D9A4 0009A8E4  7C C0 07 74 */	extsb r0, r6
/* 8009D9A8 0009A8E8  2C 00 00 5C */	cmpwi r0, 0x5c
/* 8009D9AC 0009A8EC  40 82 00 40 */	bne .L_8009D9EC
/* 8009D9B0 0009A8F0  80 DD 00 10 */	lwz r6, 0x10(r29)
/* 8009D9B4 0009A8F4  38 06 00 01 */	addi r0, r6, 1
/* 8009D9B8 0009A8F8  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8009D9BC 0009A8FC  88 06 00 00 */	lbz r0, 0(r6)
/* 8009D9C0 0009A900  7C 04 29 AE */	stbx r0, r4, r5
/* 8009D9C4 0009A904  7C C4 28 AE */	lbzx r6, r4, r5
/* 8009D9C8 0009A908  7C C0 07 75 */	extsb. r0, r6
/* 8009D9CC 0009A90C  41 82 01 04 */	beq .L_8009DAD0
/* 8009D9D0 0009A910  7C C0 07 74 */	extsb r0, r6
/* 8009D9D4 0009A914  2C 00 00 6E */	cmpwi r0, 0x6e
/* 8009D9D8 0009A918  41 82 00 08 */	beq .L_8009D9E0
/* 8009D9DC 0009A91C  48 00 00 E8 */	b .L_8009DAC4
.L_8009D9E0:
/* 8009D9E0 0009A920  38 00 00 0D */	li r0, 0xd
/* 8009D9E4 0009A924  7C 04 29 AE */	stbx r0, r4, r5
/* 8009D9E8 0009A928  48 00 00 DC */	b .L_8009DAC4
.L_8009D9EC:
/* 8009D9EC 0009A92C  2C 00 00 25 */	cmpwi r0, 0x25
/* 8009D9F0 0009A930  40 82 00 D4 */	bne .L_8009DAC4
/* 8009D9F4 0009A934  80 DD 00 10 */	lwz r6, 0x10(r29)
/* 8009D9F8 0009A938  38 E1 00 1C */	addi r7, r1, 0x1c
/* 8009D9FC 0009A93C  38 A5 00 01 */	addi r5, r5, 1
/* 8009DA00 0009A940  38 06 00 01 */	addi r0, r6, 1
/* 8009DA04 0009A944  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8009DA08 0009A948  88 06 00 00 */	lbz r0, 0(r6)
/* 8009DA0C 0009A94C  7C 07 29 AE */	stbx r0, r7, r5
/* 8009DA10 0009A950  7C C7 28 AE */	lbzx r6, r7, r5
/* 8009DA14 0009A954  7C C0 07 75 */	extsb. r0, r6
/* 8009DA18 0009A958  41 82 00 B8 */	beq .L_8009DAD0
/* 8009DA1C 0009A95C  7C C0 07 74 */	extsb r0, r6
/* 8009DA20 0009A960  2C 00 00 72 */	cmpwi r0, 0x72
/* 8009DA24 0009A964  41 82 00 60 */	beq .L_8009DA84
/* 8009DA28 0009A968  40 80 00 1C */	bge .L_8009DA44
/* 8009DA2C 0009A96C  2C 00 00 64 */	cmpwi r0, 0x64
/* 8009DA30 0009A970  41 82 00 30 */	beq .L_8009DA60
/* 8009DA34 0009A974  40 80 00 88 */	bge .L_8009DABC
/* 8009DA38 0009A978  2C 00 00 52 */	cmpwi r0, 0x52
/* 8009DA3C 0009A97C  41 82 00 5C */	beq .L_8009DA98
/* 8009DA40 0009A980  48 00 00 7C */	b .L_8009DABC
.L_8009DA44:
/* 8009DA44 0009A984  2C 00 00 78 */	cmpwi r0, 0x78
/* 8009DA48 0009A988  41 82 00 24 */	beq .L_8009DA6C
/* 8009DA4C 0009A98C  40 80 00 70 */	bge .L_8009DABC
/* 8009DA50 0009A990  2C 00 00 74 */	cmpwi r0, 0x74
/* 8009DA54 0009A994  41 82 00 58 */	beq .L_8009DAAC
/* 8009DA58 0009A998  40 80 00 64 */	bge .L_8009DABC
/* 8009DA5C 0009A99C  48 00 00 1C */	b .L_8009DA78
.L_8009DA60:
/* 8009DA60 0009A9A0  38 00 00 00 */	li r0, 0
/* 8009DA64 0009A9A4  98 03 00 00 */	stb r0, 0(r3)
/* 8009DA68 0009A9A8  48 00 00 54 */	b .L_8009DABC
.L_8009DA6C:
/* 8009DA6C 0009A9AC  38 00 00 01 */	li r0, 1
/* 8009DA70 0009A9B0  98 03 00 00 */	stb r0, 0(r3)
/* 8009DA74 0009A9B4  48 00 00 48 */	b .L_8009DABC
.L_8009DA78:
/* 8009DA78 0009A9B8  38 00 00 02 */	li r0, 2
/* 8009DA7C 0009A9BC  98 03 00 00 */	stb r0, 0(r3)
/* 8009DA80 0009A9C0  48 00 00 3C */	b .L_8009DABC
.L_8009DA84:
/* 8009DA84 0009A9C4  38 C0 00 03 */	li r6, 3
/* 8009DA88 0009A9C8  38 00 00 64 */	li r0, 0x64
/* 8009DA8C 0009A9CC  98 C3 00 00 */	stb r6, 0(r3)
/* 8009DA90 0009A9D0  7C 07 29 AE */	stbx r0, r7, r5
/* 8009DA94 0009A9D4  48 00 00 28 */	b .L_8009DABC
.L_8009DA98:
/* 8009DA98 0009A9D8  38 C0 00 04 */	li r6, 4
/* 8009DA9C 0009A9DC  38 00 00 78 */	li r0, 0x78
/* 8009DAA0 0009A9E0  98 C3 00 00 */	stb r6, 0(r3)
/* 8009DAA4 0009A9E4  7C 07 29 AE */	stbx r0, r7, r5
/* 8009DAA8 0009A9E8  48 00 00 14 */	b .L_8009DABC
.L_8009DAAC:
/* 8009DAAC 0009A9EC  38 C0 00 05 */	li r6, 5
/* 8009DAB0 0009A9F0  38 00 00 78 */	li r0, 0x78
/* 8009DAB4 0009A9F4  98 C3 00 00 */	stb r6, 0(r3)
/* 8009DAB8 0009A9F8  7C 07 29 AE */	stbx r0, r7, r5
.L_8009DABC:
/* 8009DABC 0009A9FC  38 63 00 01 */	addi r3, r3, 1
/* 8009DAC0 0009AA00  3B DE 00 01 */	addi r30, r30, 1
.L_8009DAC4:
/* 8009DAC4 0009AA04  38 A5 00 01 */	addi r5, r5, 1
.L_8009DAC8:
/* 8009DAC8 0009AA08  28 05 00 80 */	cmplwi r5, 0x80
/* 8009DACC 0009AA0C  41 80 FE B8 */	blt .L_8009D984
.L_8009DAD0:
/* 8009DAD0 0009AA10  3B 81 00 0C */	addi r28, r1, 0xc
/* 8009DAD4 0009AA14  3B 60 00 00 */	li r27, 0
/* 8009DAD8 0009AA18  48 00 00 74 */	b .L_8009DB4C
.L_8009DADC:
/* 8009DADC 0009AA1C  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 8009DAE0 0009AA20  88 9F 00 00 */	lbz r4, 0(r31)
/* 8009DAE4 0009AA24  38 03 00 01 */	addi r0, r3, 1
/* 8009DAE8 0009AA28  90 1D 00 10 */	stw r0, 0x10(r29)
/* 8009DAEC 0009AA2C  28 04 00 02 */	cmplwi r4, 2
/* 8009DAF0 0009AA30  88 03 00 00 */	lbz r0, 0(r3)
/* 8009DAF4 0009AA34  90 1C 00 00 */	stw r0, 0(r28)
/* 8009DAF8 0009AA38  40 82 00 18 */	bne .L_8009DB10
/* 8009DAFC 0009AA3C  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 8009DB00 0009AA40  80 1C 00 00 */	lwz r0, 0(r28)
/* 8009DB04 0009AA44  7C 03 02 14 */	add r0, r3, r0
/* 8009DB08 0009AA48  90 1C 00 00 */	stw r0, 0(r28)
/* 8009DB0C 0009AA4C  48 00 00 34 */	b .L_8009DB40
.L_8009DB10:
/* 8009DB10 0009AA50  28 04 00 05 */	cmplwi r4, 5
/* 8009DB14 0009AA54  40 82 00 10 */	bne .L_8009DB24
/* 8009DB18 0009AA58  80 1D 03 48 */	lwz r0, 0x348(r29)
/* 8009DB1C 0009AA5C  90 1C 00 00 */	stw r0, 0(r28)
/* 8009DB20 0009AA60  48 00 00 20 */	b .L_8009DB40
.L_8009DB24:
/* 8009DB24 0009AA64  28 04 00 03 */	cmplwi r4, 3
/* 8009DB28 0009AA68  41 80 00 18 */	blt .L_8009DB40
/* 8009DB2C 0009AA6C  80 1C 00 00 */	lwz r0, 0(r28)
/* 8009DB30 0009AA70  7F A3 EB 78 */	mr r3, r29
/* 8009DB34 0009AA74  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8009DB38 0009AA78  48 00 3C 01 */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009DB3C 0009AA7C  90 7C 00 00 */	stw r3, 0(r28)
.L_8009DB40:
/* 8009DB40 0009AA80  3B 9C 00 04 */	addi r28, r28, 4
/* 8009DB44 0009AA84  3B FF 00 01 */	addi r31, r31, 1
/* 8009DB48 0009AA88  3B 7B 00 01 */	addi r27, r27, 1
.L_8009DB4C:
/* 8009DB4C 0009AA8C  7C 1B F0 40 */	cmplw r27, r30
/* 8009DB50 0009AA90  41 80 FF 8C */	blt .L_8009DADC
/* 8009DB54 0009AA94  BB 61 00 AC */	lmw r27, 0xac(r1)
/* 8009DB58 0009AA98  38 60 00 00 */	li r3, 0
/* 8009DB5C 0009AA9C  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 8009DB60 0009AAA0  7C 08 03 A6 */	mtlr r0
/* 8009DB64 0009AAA4  38 21 00 C0 */	addi r1, r1, 0xc0
/* 8009DB68 0009AAA8  4E 80 00 20 */	blr 
.endfn cmdPrintf__12JASSeqParserFP8JASTrackPUl

.fn cmdSetParam__12JASSeqParserFP8JASTrackUc, global
/* 8009DB6C 0009AAAC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009DB70 0009AAB0  7C 08 02 A6 */	mflr r0
/* 8009DB74 0009AAB4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009DB78 0009AAB8  54 A0 07 3A */	rlwinm r0, r5, 0, 0x1c, 0x1d
/* 8009DB7C 0009AABC  28 00 00 0C */	cmplwi r0, 0xc
/* 8009DB80 0009AAC0  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 8009DB84 0009AAC4  7C 9B 23 78 */	mr r27, r4
/* 8009DB88 0009AAC8  3B FB 00 0C */	addi r31, r27, 0xc
/* 8009DB8C 0009AACC  54 BD 06 3E */	clrlwi r29, r5, 0x18
/* 8009DB90 0009AAD0  80 84 00 10 */	lwz r4, 0x10(r4)
/* 8009DB94 0009AAD4  38 64 00 01 */	addi r3, r4, 1
/* 8009DB98 0009AAD8  90 7B 00 10 */	stw r3, 0x10(r27)
/* 8009DB9C 0009AADC  8B C4 00 00 */	lbz r30, 0(r4)
/* 8009DBA0 0009AAE0  41 81 00 94 */	bgt .L_8009DC34
/* 8009DBA4 0009AAE4  3C 60 80 4A */	lis r3, lbl_804A42E4@ha
/* 8009DBA8 0009AAE8  54 00 10 3A */	slwi r0, r0, 2
/* 8009DBAC 0009AAEC  38 63 42 E4 */	addi r3, r3, lbl_804A42E4@l
/* 8009DBB0 0009AAF0  7C 03 00 2E */	lwzx r0, r3, r0
/* 8009DBB4 0009AAF4  7C 09 03 A6 */	mtctr r0
/* 8009DBB8 0009AAF8  4E 80 04 20 */	bctr 
.L_8009DBBC:
/* 8009DBBC 0009AAFC  80 9F 00 04 */	lwz r4, 4(r31)
/* 8009DBC0 0009AB00  7F 63 DB 78 */	mr r3, r27
/* 8009DBC4 0009AB04  38 04 00 01 */	addi r0, r4, 1
/* 8009DBC8 0009AB08  90 1F 00 04 */	stw r0, 4(r31)
/* 8009DBCC 0009AB0C  88 84 00 00 */	lbz r4, 0(r4)
/* 8009DBD0 0009AB10  48 00 3C 3D */	bl readReg16__8JASTrackFUc
/* 8009DBD4 0009AB14  7C 7C 07 34 */	extsh r28, r3
/* 8009DBD8 0009AB18  48 00 00 5C */	b .L_8009DC34
.L_8009DBDC:
/* 8009DBDC 0009AB1C  80 7F 00 04 */	lwz r3, 4(r31)
/* 8009DBE0 0009AB20  38 03 00 01 */	addi r0, r3, 1
/* 8009DBE4 0009AB24  90 1F 00 04 */	stw r0, 4(r31)
/* 8009DBE8 0009AB28  8B 83 00 00 */	lbz r28, 0(r3)
/* 8009DBEC 0009AB2C  48 00 00 48 */	b .L_8009DC34
.L_8009DBF0:
/* 8009DBF0 0009AB30  80 7F 00 04 */	lwz r3, 4(r31)
/* 8009DBF4 0009AB34  38 03 00 01 */	addi r0, r3, 1
/* 8009DBF8 0009AB38  90 1F 00 04 */	stw r0, 4(r31)
/* 8009DBFC 0009AB3C  88 83 00 00 */	lbz r4, 0(r3)
/* 8009DC00 0009AB40  54 80 06 31 */	rlwinm. r0, r4, 0, 0x18, 0x18
/* 8009DC04 0009AB44  41 82 00 10 */	beq .L_8009DC14
/* 8009DC08 0009AB48  54 80 40 2E */	slwi r0, r4, 8
/* 8009DC0C 0009AB4C  7C 1C 07 34 */	extsh r28, r0
/* 8009DC10 0009AB50  48 00 00 24 */	b .L_8009DC34
.L_8009DC14:
/* 8009DC14 0009AB54  54 83 40 2E */	slwi r3, r4, 8
/* 8009DC18 0009AB58  54 80 08 3C */	slwi r0, r4, 1
/* 8009DC1C 0009AB5C  7C 60 03 78 */	or r0, r3, r0
/* 8009DC20 0009AB60  7C 1C 07 34 */	extsh r28, r0
/* 8009DC24 0009AB64  48 00 00 10 */	b .L_8009DC34
.L_8009DC28:
/* 8009DC28 0009AB68  7F E3 FB 78 */	mr r3, r31
/* 8009DC2C 0009AB6C  4B FF EE 21 */	bl read16__10JASSeqCtrlFv
/* 8009DC30 0009AB70  7C 7C 07 34 */	extsh r28, r3
.L_8009DC34:
/* 8009DC34 0009AB74  57 A0 07 BE */	clrlwi r0, r29, 0x1e
/* 8009DC38 0009AB78  38 A0 00 00 */	li r5, 0
/* 8009DC3C 0009AB7C  2C 00 00 02 */	cmpwi r0, 2
/* 8009DC40 0009AB80  41 82 00 4C */	beq .L_8009DC8C
/* 8009DC44 0009AB84  40 80 00 14 */	bge .L_8009DC58
/* 8009DC48 0009AB88  2C 00 00 00 */	cmpwi r0, 0
/* 8009DC4C 0009AB8C  41 82 00 18 */	beq .L_8009DC64
/* 8009DC50 0009AB90  40 80 00 1C */	bge .L_8009DC6C
/* 8009DC54 0009AB94  48 00 00 58 */	b .L_8009DCAC
.L_8009DC58:
/* 8009DC58 0009AB98  2C 00 00 04 */	cmpwi r0, 4
/* 8009DC5C 0009AB9C  40 80 00 50 */	bge .L_8009DCAC
/* 8009DC60 0009ABA0  48 00 00 40 */	b .L_8009DCA0
.L_8009DC64:
/* 8009DC64 0009ABA4  38 A0 FF FF */	li r5, -1
/* 8009DC68 0009ABA8  48 00 00 44 */	b .L_8009DCAC
.L_8009DC6C:
/* 8009DC6C 0009ABAC  80 9F 00 04 */	lwz r4, 4(r31)
/* 8009DC70 0009ABB0  7F 63 DB 78 */	mr r3, r27
/* 8009DC74 0009ABB4  38 04 00 01 */	addi r0, r4, 1
/* 8009DC78 0009ABB8  90 1F 00 04 */	stw r0, 4(r31)
/* 8009DC7C 0009ABBC  88 84 00 00 */	lbz r4, 0(r4)
/* 8009DC80 0009ABC0  48 00 3B 8D */	bl readReg16__8JASTrackFUc
/* 8009DC84 0009ABC4  54 65 04 3E */	clrlwi r5, r3, 0x10
/* 8009DC88 0009ABC8  48 00 00 24 */	b .L_8009DCAC
.L_8009DC8C:
/* 8009DC8C 0009ABCC  80 7F 00 04 */	lwz r3, 4(r31)
/* 8009DC90 0009ABD0  38 03 00 01 */	addi r0, r3, 1
/* 8009DC94 0009ABD4  90 1F 00 04 */	stw r0, 4(r31)
/* 8009DC98 0009ABD8  88 A3 00 00 */	lbz r5, 0(r3)
/* 8009DC9C 0009ABDC  48 00 00 10 */	b .L_8009DCAC
.L_8009DCA0:
/* 8009DCA0 0009ABE0  7F E3 FB 78 */	mr r3, r31
/* 8009DCA4 0009ABE4  4B FF ED A9 */	bl read16__10JASSeqCtrlFv
/* 8009DCA8 0009ABE8  54 65 04 3E */	clrlwi r5, r3, 0x10
.L_8009DCAC:
/* 8009DCAC 0009ABEC  7F 83 07 34 */	extsh r3, r28
/* 8009DCB0 0009ABF0  3C 00 43 30 */	lis r0, 0x4330
/* 8009DCB4 0009ABF4  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 8009DCB8 0009ABF8  90 01 00 08 */	stw r0, 8(r1)
/* 8009DCBC 0009ABFC  C8 42 89 F8 */	lfd f2, lbl_80516D58@sda21(r2)
/* 8009DCC0 0009AC00  7F 63 DB 78 */	mr r3, r27
/* 8009DCC4 0009AC04  90 81 00 0C */	stw r4, 0xc(r1)
/* 8009DCC8 0009AC08  7F C4 F3 78 */	mr r4, r30
/* 8009DCCC 0009AC0C  C0 02 8A 10 */	lfs f0, lbl_80516D70@sda21(r2)
/* 8009DCD0 0009AC10  C8 21 00 08 */	lfd f1, 8(r1)
/* 8009DCD4 0009AC14  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009DCD8 0009AC18  EC 21 00 24 */	fdivs f1, f1, f0
/* 8009DCDC 0009AC1C  48 00 31 1D */	bl setParam__8JASTrackFifi
/* 8009DCE0 0009AC20  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 8009DCE4 0009AC24  38 60 00 00 */	li r3, 0
/* 8009DCE8 0009AC28  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009DCEC 0009AC2C  7C 08 03 A6 */	mtlr r0
/* 8009DCF0 0009AC30  38 21 00 30 */	addi r1, r1, 0x30
/* 8009DCF4 0009AC34  4E 80 00 20 */	blr 
.endfn cmdSetParam__12JASSeqParserFP8JASTrackUc

.fn cmdNoteOn__12JASSeqParserFP8JASTrackUc, global
/* 8009DCF8 0009AC38  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8009DCFC 0009AC3C  7C 08 02 A6 */	mflr r0
/* 8009DD00 0009AC40  90 01 00 34 */	stw r0, 0x34(r1)
/* 8009DD04 0009AC44  BE E1 00 0C */	stmw r23, 0xc(r1)
/* 8009DD08 0009AC48  7C 9E 23 78 */	mr r30, r4
/* 8009DD0C 0009AC4C  7C BF 2B 78 */	mr r31, r5
/* 8009DD10 0009AC50  80 64 00 10 */	lwz r3, 0x10(r4)
/* 8009DD14 0009AC54  38 03 00 01 */	addi r0, r3, 1
/* 8009DD18 0009AC58  90 04 00 10 */	stw r0, 0x10(r4)
/* 8009DD1C 0009AC5C  8B A3 00 00 */	lbz r29, 0(r3)
/* 8009DD20 0009AC60  57 A0 06 31 */	rlwinm. r0, r29, 0, 0x18, 0x18
/* 8009DD24 0009AC64  41 82 00 14 */	beq .L_8009DD38
/* 8009DD28 0009AC68  7F C3 F3 78 */	mr r3, r30
/* 8009DD2C 0009AC6C  7F E4 FB 78 */	mr r4, r31
/* 8009DD30 0009AC70  48 00 3A 09 */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009DD34 0009AC74  54 7F 06 3E */	clrlwi r31, r3, 0x18
.L_8009DD38:
/* 8009DD38 0009AC78  7F C3 F3 78 */	mr r3, r30
/* 8009DD3C 0009AC7C  48 00 46 F1 */	bl getTranspose__8JASTrackCFv
/* 8009DD40 0009AC80  57 A0 DF BD */	rlwinm. r0, r29, 0x1b, 0x1e, 0x1e
/* 8009DD44 0009AC84  7C 7F 1A 14 */	add r3, r31, r3
/* 8009DD48 0009AC88  57 A0 DF BE */	rlwinm r0, r29, 0x1b, 0x1e, 0x1f
/* 8009DD4C 0009AC8C  54 7F 06 3E */	clrlwi r31, r3, 0x18
/* 8009DD50 0009AC90  7C 1C 03 78 */	mr r28, r0
/* 8009DD54 0009AC94  41 82 00 0C */	beq .L_8009DD60
/* 8009DD58 0009AC98  7F FB FB 78 */	mr r27, r31
/* 8009DD5C 0009AC9C  8B FE 00 E5 */	lbz r31, 0xe5(r30)
.L_8009DD60:
/* 8009DD60 0009ACA0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8009DD64 0009ACA4  38 03 00 01 */	addi r0, r3, 1
/* 8009DD68 0009ACA8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DD6C 0009ACAC  88 63 00 00 */	lbz r3, 0(r3)
/* 8009DD70 0009ACB0  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8009DD74 0009ACB4  7C 7A 1B 78 */	mr r26, r3
/* 8009DD78 0009ACB8  41 82 00 14 */	beq .L_8009DD8C
/* 8009DD7C 0009ACBC  54 64 06 7E */	clrlwi r4, r3, 0x19
/* 8009DD80 0009ACC0  7F C3 F3 78 */	mr r3, r30
/* 8009DD84 0009ACC4  48 00 39 B5 */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009DD88 0009ACC8  54 7A 06 3E */	clrlwi r26, r3, 0x18
.L_8009DD8C:
/* 8009DD8C 0009ACCC  57 A3 07 7F */	clrlwi. r3, r29, 0x1d
/* 8009DD90 0009ACD0  3A E0 00 00 */	li r23, 0
/* 8009DD94 0009ACD4  7C 78 1B 78 */	mr r24, r3
/* 8009DD98 0009ACD8  40 82 01 78 */	bne .L_8009DF10
/* 8009DD9C 0009ACDC  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 8009DDA0 0009ACE0  38 03 00 01 */	addi r0, r3, 1
/* 8009DDA4 0009ACE4  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DDA8 0009ACE8  88 63 00 00 */	lbz r3, 0(r3)
/* 8009DDAC 0009ACEC  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8009DDB0 0009ACF0  7C 79 1B 78 */	mr r25, r3
/* 8009DDB4 0009ACF4  41 82 00 14 */	beq .L_8009DDC8
/* 8009DDB8 0009ACF8  54 64 06 7E */	clrlwi r4, r3, 0x19
/* 8009DDBC 0009ACFC  7F C3 F3 78 */	mr r3, r30
/* 8009DDC0 0009AD00  48 00 39 79 */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009DDC4 0009AD04  54 79 06 3E */	clrlwi r25, r3, 0x18
.L_8009DDC8:
/* 8009DDC8 0009AD08  57 A3 EF BF */	rlwinm. r3, r29, 0x1d, 0x1e, 0x1f
/* 8009DDCC 0009AD0C  3B A0 00 00 */	li r29, 0
/* 8009DDD0 0009AD10  38 80 00 00 */	li r4, 0
/* 8009DDD4 0009AD14  40 81 01 18 */	ble .L_8009DEEC
/* 8009DDD8 0009AD18  2C 03 00 08 */	cmpwi r3, 8
/* 8009DDDC 0009AD1C  38 A3 FF F8 */	addi r5, r3, -8
/* 8009DDE0 0009AD20  40 81 00 E0 */	ble .L_8009DEC0
/* 8009DDE4 0009AD24  38 05 00 07 */	addi r0, r5, 7
/* 8009DDE8 0009AD28  54 00 E8 FE */	srwi r0, r0, 3
/* 8009DDEC 0009AD2C  7C 09 03 A6 */	mtctr r0
/* 8009DDF0 0009AD30  2C 05 00 00 */	cmpwi r5, 0
/* 8009DDF4 0009AD34  40 81 00 CC */	ble .L_8009DEC0
.L_8009DDF8:
/* 8009DDF8 0009AD38  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 8009DDFC 0009AD3C  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DE00 0009AD40  38 84 00 08 */	addi r4, r4, 8
/* 8009DE04 0009AD44  38 06 00 01 */	addi r0, r6, 1
/* 8009DE08 0009AD48  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DE0C 0009AD4C  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8009DE10 0009AD50  88 C6 00 00 */	lbz r6, 0(r6)
/* 8009DE14 0009AD54  38 05 00 01 */	addi r0, r5, 1
/* 8009DE18 0009AD58  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DE1C 0009AD5C  7F BD 33 78 */	or r29, r29, r6
/* 8009DE20 0009AD60  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DE24 0009AD64  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 8009DE28 0009AD68  88 A5 00 00 */	lbz r5, 0(r5)
/* 8009DE2C 0009AD6C  38 06 00 01 */	addi r0, r6, 1
/* 8009DE30 0009AD70  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DE34 0009AD74  7F BD 2B 78 */	or r29, r29, r5
/* 8009DE38 0009AD78  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DE3C 0009AD7C  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8009DE40 0009AD80  88 C6 00 00 */	lbz r6, 0(r6)
/* 8009DE44 0009AD84  38 05 00 01 */	addi r0, r5, 1
/* 8009DE48 0009AD88  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DE4C 0009AD8C  7F BD 33 78 */	or r29, r29, r6
/* 8009DE50 0009AD90  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DE54 0009AD94  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 8009DE58 0009AD98  88 A5 00 00 */	lbz r5, 0(r5)
/* 8009DE5C 0009AD9C  38 06 00 01 */	addi r0, r6, 1
/* 8009DE60 0009ADA0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DE64 0009ADA4  7F BD 2B 78 */	or r29, r29, r5
/* 8009DE68 0009ADA8  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DE6C 0009ADAC  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8009DE70 0009ADB0  88 C6 00 00 */	lbz r6, 0(r6)
/* 8009DE74 0009ADB4  38 05 00 01 */	addi r0, r5, 1
/* 8009DE78 0009ADB8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DE7C 0009ADBC  7F BD 33 78 */	or r29, r29, r6
/* 8009DE80 0009ADC0  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DE84 0009ADC4  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 8009DE88 0009ADC8  88 A5 00 00 */	lbz r5, 0(r5)
/* 8009DE8C 0009ADCC  38 06 00 01 */	addi r0, r6, 1
/* 8009DE90 0009ADD0  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DE94 0009ADD4  7F BD 2B 78 */	or r29, r29, r5
/* 8009DE98 0009ADD8  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DE9C 0009ADDC  80 BE 00 10 */	lwz r5, 0x10(r30)
/* 8009DEA0 0009ADE0  88 C6 00 00 */	lbz r6, 0(r6)
/* 8009DEA4 0009ADE4  38 05 00 01 */	addi r0, r5, 1
/* 8009DEA8 0009ADE8  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DEAC 0009ADEC  7F BD 33 78 */	or r29, r29, r6
/* 8009DEB0 0009ADF0  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DEB4 0009ADF4  88 05 00 00 */	lbz r0, 0(r5)
/* 8009DEB8 0009ADF8  7F BD 03 78 */	or r29, r29, r0
/* 8009DEBC 0009ADFC  42 00 FF 3C */	bdnz .L_8009DDF8
.L_8009DEC0:
/* 8009DEC0 0009AE00  7C 04 18 50 */	subf r0, r4, r3
/* 8009DEC4 0009AE04  7C 09 03 A6 */	mtctr r0
/* 8009DEC8 0009AE08  7C 04 18 00 */	cmpw r4, r3
/* 8009DECC 0009AE0C  40 80 00 20 */	bge .L_8009DEEC
.L_8009DED0:
/* 8009DED0 0009AE10  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8009DED4 0009AE14  57 BD 40 2E */	slwi r29, r29, 8
/* 8009DED8 0009AE18  38 04 00 01 */	addi r0, r4, 1
/* 8009DEDC 0009AE1C  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DEE0 0009AE20  88 04 00 00 */	lbz r0, 0(r4)
/* 8009DEE4 0009AE24  7F BD 03 78 */	or r29, r29, r0
/* 8009DEE8 0009AE28  42 00 FF E8 */	bdnz .L_8009DED0
.L_8009DEEC:
/* 8009DEEC 0009AE2C  28 03 00 01 */	cmplwi r3, 1
/* 8009DEF0 0009AE30  40 82 00 70 */	bne .L_8009DF60
/* 8009DEF4 0009AE34  57 A0 06 31 */	rlwinm. r0, r29, 0, 0x18, 0x18
/* 8009DEF8 0009AE38  41 82 00 68 */	beq .L_8009DF60
/* 8009DEFC 0009AE3C  57 A4 06 7E */	clrlwi r4, r29, 0x19
/* 8009DF00 0009AE40  7F C3 F3 78 */	mr r3, r30
/* 8009DF04 0009AE44  48 00 38 35 */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009DF08 0009AE48  7C 7D 1B 78 */	mr r29, r3
/* 8009DF0C 0009AE4C  48 00 00 54 */	b .L_8009DF60
.L_8009DF10:
/* 8009DF10 0009AE50  57 A0 EF BF */	rlwinm. r0, r29, 0x1d, 0x1e, 0x1f
/* 8009DF14 0009AE54  41 82 00 18 */	beq .L_8009DF2C
/* 8009DF18 0009AE58  38 03 FF FF */	addi r0, r3, -1
/* 8009DF1C 0009AE5C  7F C3 F3 78 */	mr r3, r30
/* 8009DF20 0009AE60  54 04 06 3E */	clrlwi r4, r0, 0x18
/* 8009DF24 0009AE64  48 00 38 15 */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009DF28 0009AE68  54 78 06 3E */	clrlwi r24, r3, 0x18
.L_8009DF2C:
/* 8009DF2C 0009AE6C  57 80 07 FF */	clrlwi. r0, r28, 0x1f
/* 8009DF30 0009AE70  41 82 00 28 */	beq .L_8009DF58
/* 8009DF34 0009AE74  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 8009DF38 0009AE78  7F C3 F3 78 */	mr r3, r30
/* 8009DF3C 0009AE7C  38 04 00 01 */	addi r0, r4, 1
/* 8009DF40 0009AE80  90 1E 00 10 */	stw r0, 0x10(r30)
/* 8009DF44 0009AE84  88 84 00 00 */	lbz r4, 0(r4)
/* 8009DF48 0009AE88  48 00 37 F1 */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009DF4C 0009AE8C  6B 80 00 01 */	xori r0, r28, 1
/* 8009DF50 0009AE90  7C 77 1B 78 */	mr r23, r3
/* 8009DF54 0009AE94  54 1C 06 3E */	clrlwi r28, r0, 0x18
.L_8009DF58:
/* 8009DF58 0009AE98  3B A0 FF FF */	li r29, -1
/* 8009DF5C 0009AE9C  3B 20 00 64 */	li r25, 0x64
.L_8009DF60:
/* 8009DF60 0009AEA0  9B 9E 00 E4 */	stb r28, 0xe4(r30)
/* 8009DF64 0009AEA4  7F BC EB 78 */	mr r28, r29
/* 8009DF68 0009AEA8  88 1E 00 E6 */	lbz r0, 0xe6(r30)
/* 8009DF6C 0009AEAC  28 00 00 00 */	cmplwi r0, 0
/* 8009DF70 0009AEB0  41 82 00 64 */	beq .L_8009DFD4
/* 8009DF74 0009AEB4  88 1E 00 E4 */	lbz r0, 0xe4(r30)
/* 8009DF78 0009AEB8  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8009DF7C 0009AEBC  41 82 00 08 */	beq .L_8009DF84
/* 8009DF80 0009AEC0  3B 80 FF FF */	li r28, -1
.L_8009DF84:
/* 8009DF84 0009AEC4  2C 1C FF FF */	cmpwi r28, -1
/* 8009DF88 0009AEC8  41 82 00 18 */	beq .L_8009DFA0
/* 8009DF8C 0009AECC  7F C3 F3 78 */	mr r3, r30
/* 8009DF90 0009AED0  7F 84 E3 78 */	mr r4, r28
/* 8009DF94 0009AED4  7F 25 CB 78 */	mr r5, r25
/* 8009DF98 0009AED8  48 00 2D 89 */	bl seqTimeToDspTime__8JASTrackFlUc
/* 8009DF9C 0009AEDC  7C 7C 1B 78 */	mr r28, r3
.L_8009DFA0:
/* 8009DFA0 0009AEE0  88 1E 03 62 */	lbz r0, 0x362(r30)
/* 8009DFA4 0009AEE4  28 00 00 00 */	cmplwi r0, 0
/* 8009DFA8 0009AEE8  41 82 00 10 */	beq .L_8009DFB8
/* 8009DFAC 0009AEEC  88 1E 03 58 */	lbz r0, 0x358(r30)
/* 8009DFB0 0009AEF0  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8009DFB4 0009AEF4  40 82 00 80 */	bne .L_8009E034
.L_8009DFB8:
/* 8009DFB8 0009AEF8  7F C3 F3 78 */	mr r3, r30
/* 8009DFBC 0009AEFC  7F 04 C3 78 */	mr r4, r24
/* 8009DFC0 0009AF00  7F 87 E3 78 */	mr r7, r28
/* 8009DFC4 0009AF04  57 E5 06 3E */	clrlwi r5, r31, 0x18
/* 8009DFC8 0009AF08  57 46 06 3E */	clrlwi r6, r26, 0x18
/* 8009DFCC 0009AF0C  48 00 1A 99 */	bl gateOn__8JASTrackFUclll
/* 8009DFD0 0009AF10  48 00 00 64 */	b .L_8009E034
.L_8009DFD4:
/* 8009DFD4 0009AF14  2C 1D FF FF */	cmpwi r29, -1
/* 8009DFD8 0009AF18  41 82 00 18 */	beq .L_8009DFF0
/* 8009DFDC 0009AF1C  7F C3 F3 78 */	mr r3, r30
/* 8009DFE0 0009AF20  7F A4 EB 78 */	mr r4, r29
/* 8009DFE4 0009AF24  7F 25 CB 78 */	mr r5, r25
/* 8009DFE8 0009AF28  48 00 2D 39 */	bl seqTimeToDspTime__8JASTrackFlUc
/* 8009DFEC 0009AF2C  7C 7C 1B 78 */	mr r28, r3
.L_8009DFF0:
/* 8009DFF0 0009AF30  88 1E 00 E4 */	lbz r0, 0xe4(r30)
/* 8009DFF4 0009AF34  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 8009DFF8 0009AF38  41 82 00 08 */	beq .L_8009E000
/* 8009DFFC 0009AF3C  3B 80 FF FF */	li r28, -1
.L_8009E000:
/* 8009E000 0009AF40  88 1E 03 62 */	lbz r0, 0x362(r30)
/* 8009E004 0009AF44  28 00 00 00 */	cmplwi r0, 0
/* 8009E008 0009AF48  41 82 00 10 */	beq .L_8009E018
/* 8009E00C 0009AF4C  88 1E 03 58 */	lbz r0, 0x358(r30)
/* 8009E010 0009AF50  54 00 06 F7 */	rlwinm. r0, r0, 0, 0x1b, 0x1b
/* 8009E014 0009AF54  40 82 00 20 */	bne .L_8009E034
.L_8009E018:
/* 8009E018 0009AF58  7F C3 F3 78 */	mr r3, r30
/* 8009E01C 0009AF5C  7F 04 C3 78 */	mr r4, r24
/* 8009E020 0009AF60  7F 87 E3 78 */	mr r7, r28
/* 8009E024 0009AF64  7E E8 BB 78 */	mr r8, r23
/* 8009E028 0009AF68  57 E5 06 3E */	clrlwi r5, r31, 0x18
/* 8009E02C 0009AF6C  57 46 06 3E */	clrlwi r6, r26, 0x18
/* 8009E030 0009AF70  48 00 17 85 */	bl noteOn__8JASTrackFUclllUl
.L_8009E034:
/* 8009E034 0009AF74  93 BE 00 E0 */	stw r29, 0xe0(r30)
/* 8009E038 0009AF78  88 1E 00 E4 */	lbz r0, 0xe4(r30)
/* 8009E03C 0009AF7C  54 00 07 FE */	clrlwi r0, r0, 0x1f
/* 8009E040 0009AF80  98 1E 00 E6 */	stb r0, 0xe6(r30)
/* 8009E044 0009AF84  88 1E 00 E4 */	lbz r0, 0xe4(r30)
/* 8009E048 0009AF88  54 00 07 BD */	rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 8009E04C 0009AF8C  41 82 00 3C */	beq .L_8009E088
/* 8009E050 0009AF90  2C 1C FF FF */	cmpwi r28, -1
/* 8009E054 0009AF94  7F 85 E3 78 */	mr r5, r28
/* 8009E058 0009AF98  40 82 00 18 */	bne .L_8009E070
/* 8009E05C 0009AF9C  7F C3 F3 78 */	mr r3, r30
/* 8009E060 0009AFA0  7F A4 EB 78 */	mr r4, r29
/* 8009E064 0009AFA4  7F 25 CB 78 */	mr r5, r25
/* 8009E068 0009AFA8  48 00 2C B9 */	bl seqTimeToDspTime__8JASTrackFlUc
/* 8009E06C 0009AFAC  7C 65 1B 78 */	mr r5, r3
.L_8009E070:
/* 8009E070 0009AFB0  80 7E 00 C0 */	lwz r3, 0xc0(r30)
/* 8009E074 0009AFB4  28 03 00 00 */	cmplwi r3, 0
/* 8009E078 0009AFB8  41 82 00 0C */	beq .L_8009E084
/* 8009E07C 0009AFBC  7F 64 DB 78 */	mr r4, r27
/* 8009E080 0009AFC0  48 00 55 8D */	bl setKeySweepTarget__10JASChannelFUcUl
.L_8009E084:
/* 8009E084 0009AFC4  7F 7F DB 78 */	mr r31, r27
.L_8009E088:
/* 8009E088 0009AFC8  3C 1D 00 01 */	addis r0, r29, 1
/* 8009E08C 0009AFCC  9B FE 00 E5 */	stb r31, 0xe5(r30)
/* 8009E090 0009AFD0  28 00 FF FF */	cmplwi r0, 0xffff
/* 8009E094 0009AFD4  40 82 00 0C */	bne .L_8009E0A0
/* 8009E098 0009AFD8  38 60 00 00 */	li r3, 0
/* 8009E09C 0009AFDC  48 00 00 1C */	b .L_8009E0B8
.L_8009E0A0:
/* 8009E0A0 0009AFE0  28 1D 00 00 */	cmplwi r29, 0
/* 8009E0A4 0009AFE4  38 00 FF FF */	li r0, -1
/* 8009E0A8 0009AFE8  41 82 00 08 */	beq .L_8009E0B0
/* 8009E0AC 0009AFEC  7F A0 EB 78 */	mr r0, r29
.L_8009E0B0:
/* 8009E0B0 0009AFF0  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8009E0B4 0009AFF4  38 60 00 01 */	li r3, 1
.L_8009E0B8:
/* 8009E0B8 0009AFF8  BA E1 00 0C */	lmw r23, 0xc(r1)
/* 8009E0BC 0009AFFC  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009E0C0 0009B000  7C 08 03 A6 */	mtlr r0
/* 8009E0C4 0009B004  38 21 00 30 */	addi r1, r1, 0x30
/* 8009E0C8 0009B008  4E 80 00 20 */	blr 
.endfn cmdNoteOn__12JASSeqParserFP8JASTrackUc

.fn conditionCheck__12JASSeqParserFP8JASTrackUc, global
/* 8009E0CC 0009B00C  54 A0 07 3E */	clrlwi r0, r5, 0x1c
/* 8009E0D0 0009B010  A0 84 02 6E */	lhz r4, 0x26e(r4)
/* 8009E0D4 0009B014  2C 00 00 03 */	cmpwi r0, 3
/* 8009E0D8 0009B018  41 82 00 54 */	beq .L_8009E12C
/* 8009E0DC 0009B01C  40 80 00 1C */	bge .L_8009E0F8
/* 8009E0E0 0009B020  2C 00 00 01 */	cmpwi r0, 1
/* 8009E0E4 0009B024  41 82 00 2C */	beq .L_8009E110
/* 8009E0E8 0009B028  40 80 00 34 */	bge .L_8009E11C
/* 8009E0EC 0009B02C  2C 00 00 00 */	cmpwi r0, 0
/* 8009E0F0 0009B030  40 80 00 18 */	bge .L_8009E108
/* 8009E0F4 0009B034  48 00 00 84 */	b .L_8009E178
.L_8009E0F8:
/* 8009E0F8 0009B038  2C 00 00 05 */	cmpwi r0, 5
/* 8009E0FC 0009B03C  41 82 00 64 */	beq .L_8009E160
/* 8009E100 0009B040  40 80 00 78 */	bge .L_8009E178
/* 8009E104 0009B044  48 00 00 38 */	b .L_8009E13C
.L_8009E108:
/* 8009E108 0009B048  38 60 00 01 */	li r3, 1
/* 8009E10C 0009B04C  4E 80 00 20 */	blr 
.L_8009E110:
/* 8009E110 0009B050  7C 80 00 34 */	cntlzw r0, r4
/* 8009E114 0009B054  54 03 D9 7E */	srwi r3, r0, 5
/* 8009E118 0009B058  4E 80 00 20 */	blr 
.L_8009E11C:
/* 8009E11C 0009B05C  7C 04 00 D0 */	neg r0, r4
/* 8009E120 0009B060  7C 00 23 78 */	or r0, r0, r4
/* 8009E124 0009B064  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8009E128 0009B068  4E 80 00 20 */	blr 
.L_8009E12C:
/* 8009E12C 0009B06C  20 04 00 01 */	subfic r0, r4, 1
/* 8009E130 0009B070  7C 00 00 34 */	cntlzw r0, r0
/* 8009E134 0009B074  54 03 D9 7E */	srwi r3, r0, 5
/* 8009E138 0009B078  4E 80 00 20 */	blr 
.L_8009E13C:
/* 8009E13C 0009B07C  3C 60 00 01 */	lis r3, 0x00008000@ha
/* 8009E140 0009B080  38 03 80 00 */	addi r0, r3, 0x00008000@l
/* 8009E144 0009B084  54 03 04 3E */	clrlwi r3, r0, 0x10
/* 8009E148 0009B088  7C 03 20 50 */	subf r0, r3, r4
/* 8009E14C 0009B08C  7C 83 1B 38 */	orc r3, r4, r3
/* 8009E150 0009B090  54 00 F8 7E */	srwi r0, r0, 1
/* 8009E154 0009B094  7C 00 18 50 */	subf r0, r0, r3
/* 8009E158 0009B098  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8009E15C 0009B09C  4E 80 00 20 */	blr 
.L_8009E160:
/* 8009E160 0009B0A0  3C 60 00 01 */	lis r3, 0x00008000@ha
/* 8009E164 0009B0A4  38 03 80 00 */	addi r0, r3, 0x00008000@l
/* 8009E168 0009B0A8  54 00 04 3E */	clrlwi r0, r0, 0x10
/* 8009E16C 0009B0AC  7C 00 20 50 */	subf r0, r0, r4
/* 8009E170 0009B0B0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 8009E174 0009B0B4  4E 80 00 20 */	blr 
.L_8009E178:
/* 8009E178 0009B0B8  38 60 00 00 */	li r3, 0
/* 8009E17C 0009B0BC  4E 80 00 20 */	blr 
.endfn conditionCheck__12JASSeqParserFP8JASTrackUc

.fn parseSeq__12JASSeqParserFP8JASTrack, global
/* 8009E180 0009B0C0  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 8009E184 0009B0C4  7C 08 02 A6 */	mflr r0
/* 8009E188 0009B0C8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 8009E18C 0009B0CC  BE E1 00 7C */	stmw r23, 0x7c(r1)
/* 8009E190 0009B0D0  7C 7D 1B 78 */	mr r29, r3
/* 8009E194 0009B0D4  7C 9F 23 78 */	mr r31, r4
.L_8009E198:
/* 8009E198 0009B0D8  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8009E19C 0009B0DC  3A E0 00 00 */	li r23, 0
/* 8009E1A0 0009B0E0  38 03 00 01 */	addi r0, r3, 1
/* 8009E1A4 0009B0E4  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8009E1A8 0009B0E8  8B 43 00 00 */	lbz r26, 0(r3)
/* 8009E1AC 0009B0EC  57 40 06 31 */	rlwinm. r0, r26, 0, 0x18, 0x18
/* 8009E1B0 0009B0F0  40 82 00 1C */	bne .L_8009E1CC
/* 8009E1B4 0009B0F4  7F A3 EB 78 */	mr r3, r29
/* 8009E1B8 0009B0F8  7F E4 FB 78 */	mr r4, r31
/* 8009E1BC 0009B0FC  7F 45 D3 78 */	mr r5, r26
/* 8009E1C0 0009B100  4B FF FB 39 */	bl cmdNoteOn__12JASSeqParserFP8JASTrackUc
/* 8009E1C4 0009B104  7C 77 1B 78 */	mr r23, r3
/* 8009E1C8 0009B108  48 00 06 54 */	b .L_8009E81C
.L_8009E1CC:
/* 8009E1CC 0009B10C  57 43 06 36 */	rlwinm r3, r26, 0, 0x18, 0x1b
/* 8009E1D0 0009B110  2C 03 00 80 */	cmpwi r3, 0x80
/* 8009E1D4 0009B114  40 82 01 58 */	bne .L_8009E32C
/* 8009E1D8 0009B118  57 40 07 7F */	clrlwi. r0, r26, 0x1d
/* 8009E1DC 0009B11C  40 82 01 50 */	bne .L_8009E32C
/* 8009E1E0 0009B120  38 7A FF 80 */	addi r3, r26, -128
/* 8009E1E4 0009B124  20 1A 00 80 */	subfic r0, r26, 0x80
/* 8009E1E8 0009B128  7C 63 00 F8 */	nor r3, r3, r0
/* 8009E1EC 0009B12C  7C 63 FE 70 */	srawi r3, r3, 0x1f
/* 8009E1F0 0009B130  38 00 00 00 */	li r0, 0
/* 8009E1F4 0009B134  34 C3 00 02 */	addic. r6, r3, 2
/* 8009E1F8 0009B138  7C 07 03 78 */	mr r7, r0
/* 8009E1FC 0009B13C  40 81 01 1C */	ble .L_8009E318
/* 8009E200 0009B140  2C 06 00 08 */	cmpwi r6, 8
/* 8009E204 0009B144  38 86 FF F8 */	addi r4, r6, -8
/* 8009E208 0009B148  40 81 00 E0 */	ble .L_8009E2E8
/* 8009E20C 0009B14C  38 64 00 07 */	addi r3, r4, 7
/* 8009E210 0009B150  54 63 E8 FE */	srwi r3, r3, 3
/* 8009E214 0009B154  7C 69 03 A6 */	mtctr r3
/* 8009E218 0009B158  2C 04 00 00 */	cmpwi r4, 0
/* 8009E21C 0009B15C  40 81 00 CC */	ble .L_8009E2E8
.L_8009E220:
/* 8009E220 0009B160  80 BF 00 10 */	lwz r5, 0x10(r31)
/* 8009E224 0009B164  54 00 40 2E */	slwi r0, r0, 8
/* 8009E228 0009B168  38 E7 00 08 */	addi r7, r7, 8
/* 8009E22C 0009B16C  38 65 00 01 */	addi r3, r5, 1
/* 8009E230 0009B170  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E234 0009B174  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8009E238 0009B178  88 A5 00 00 */	lbz r5, 0(r5)
/* 8009E23C 0009B17C  38 64 00 01 */	addi r3, r4, 1
/* 8009E240 0009B180  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E244 0009B184  7C 00 2B 78 */	or r0, r0, r5
/* 8009E248 0009B188  54 00 40 2E */	slwi r0, r0, 8
/* 8009E24C 0009B18C  80 BF 00 10 */	lwz r5, 0x10(r31)
/* 8009E250 0009B190  88 84 00 00 */	lbz r4, 0(r4)
/* 8009E254 0009B194  38 65 00 01 */	addi r3, r5, 1
/* 8009E258 0009B198  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E25C 0009B19C  7C 00 23 78 */	or r0, r0, r4
/* 8009E260 0009B1A0  54 00 40 2E */	slwi r0, r0, 8
/* 8009E264 0009B1A4  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8009E268 0009B1A8  88 A5 00 00 */	lbz r5, 0(r5)
/* 8009E26C 0009B1AC  38 64 00 01 */	addi r3, r4, 1
/* 8009E270 0009B1B0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E274 0009B1B4  7C 00 2B 78 */	or r0, r0, r5
/* 8009E278 0009B1B8  54 00 40 2E */	slwi r0, r0, 8
/* 8009E27C 0009B1BC  80 BF 00 10 */	lwz r5, 0x10(r31)
/* 8009E280 0009B1C0  88 84 00 00 */	lbz r4, 0(r4)
/* 8009E284 0009B1C4  38 65 00 01 */	addi r3, r5, 1
/* 8009E288 0009B1C8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E28C 0009B1CC  7C 00 23 78 */	or r0, r0, r4
/* 8009E290 0009B1D0  54 00 40 2E */	slwi r0, r0, 8
/* 8009E294 0009B1D4  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8009E298 0009B1D8  88 A5 00 00 */	lbz r5, 0(r5)
/* 8009E29C 0009B1DC  38 64 00 01 */	addi r3, r4, 1
/* 8009E2A0 0009B1E0  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E2A4 0009B1E4  7C 00 2B 78 */	or r0, r0, r5
/* 8009E2A8 0009B1E8  54 00 40 2E */	slwi r0, r0, 8
/* 8009E2AC 0009B1EC  80 BF 00 10 */	lwz r5, 0x10(r31)
/* 8009E2B0 0009B1F0  88 84 00 00 */	lbz r4, 0(r4)
/* 8009E2B4 0009B1F4  38 65 00 01 */	addi r3, r5, 1
/* 8009E2B8 0009B1F8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E2BC 0009B1FC  7C 00 23 78 */	or r0, r0, r4
/* 8009E2C0 0009B200  54 00 40 2E */	slwi r0, r0, 8
/* 8009E2C4 0009B204  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8009E2C8 0009B208  88 A5 00 00 */	lbz r5, 0(r5)
/* 8009E2CC 0009B20C  38 64 00 01 */	addi r3, r4, 1
/* 8009E2D0 0009B210  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E2D4 0009B214  7C 00 2B 78 */	or r0, r0, r5
/* 8009E2D8 0009B218  54 00 40 2E */	slwi r0, r0, 8
/* 8009E2DC 0009B21C  88 64 00 00 */	lbz r3, 0(r4)
/* 8009E2E0 0009B220  7C 00 1B 78 */	or r0, r0, r3
/* 8009E2E4 0009B224  42 00 FF 3C */	bdnz .L_8009E220
.L_8009E2E8:
/* 8009E2E8 0009B228  7C 67 30 50 */	subf r3, r7, r6
/* 8009E2EC 0009B22C  7C 69 03 A6 */	mtctr r3
/* 8009E2F0 0009B230  7C 07 30 00 */	cmpw r7, r6
/* 8009E2F4 0009B234  40 80 00 24 */	bge .L_8009E318
.L_8009E2F8:
/* 8009E2F8 0009B238  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8009E2FC 0009B23C  54 00 40 2E */	slwi r0, r0, 8
/* 8009E300 0009B240  38 E7 00 01 */	addi r7, r7, 1
/* 8009E304 0009B244  38 64 00 01 */	addi r3, r4, 1
/* 8009E308 0009B248  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E30C 0009B24C  88 64 00 00 */	lbz r3, 0(r4)
/* 8009E310 0009B250  7C 00 1B 78 */	or r0, r0, r3
/* 8009E314 0009B254  42 00 FF E4 */	bdnz .L_8009E2F8
.L_8009E318:
/* 8009E318 0009B258  7C 60 00 D0 */	neg r3, r0
/* 8009E31C 0009B25C  90 1F 00 14 */	stw r0, 0x14(r31)
/* 8009E320 0009B260  7C 60 03 78 */	or r0, r3, r0
/* 8009E324 0009B264  54 17 0F FE */	srwi r23, r0, 0x1f
/* 8009E328 0009B268  48 00 04 F4 */	b .L_8009E81C
.L_8009E32C:
/* 8009E32C 0009B26C  2C 03 00 80 */	cmpwi r3, 0x80
/* 8009E330 0009B270  41 82 00 0C */	beq .L_8009E33C
/* 8009E334 0009B274  28 1A 00 F9 */	cmplwi r26, 0xf9
/* 8009E338 0009B278  40 82 00 84 */	bne .L_8009E3BC
.L_8009E33C:
/* 8009E33C 0009B27C  28 1A 00 F9 */	cmplwi r26, 0xf9
/* 8009E340 0009B280  40 82 00 38 */	bne .L_8009E378
/* 8009E344 0009B284  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8009E348 0009B288  7F E3 FB 78 */	mr r3, r31
/* 8009E34C 0009B28C  38 04 00 01 */	addi r0, r4, 1
/* 8009E350 0009B290  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8009E354 0009B294  8A E4 00 00 */	lbz r23, 0(r4)
/* 8009E358 0009B298  56 E4 07 7E */	clrlwi r4, r23, 0x1d
/* 8009E35C 0009B29C  48 00 33 DD */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009E360 0009B2A0  56 E0 06 31 */	rlwinm. r0, r23, 0, 0x18, 0x18
/* 8009E364 0009B2A4  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 8009E368 0009B2A8  3B 43 00 80 */	addi r26, r3, 0x80
/* 8009E36C 0009B2AC  41 82 00 0C */	beq .L_8009E378
/* 8009E370 0009B2B0  63 40 00 08 */	ori r0, r26, 8
/* 8009E374 0009B2B4  54 1A 06 3E */	clrlwi r26, r0, 0x18
.L_8009E378:
/* 8009E378 0009B2B8  57 40 07 39 */	rlwinm. r0, r26, 0, 0x1c, 0x1c
/* 8009E37C 0009B2BC  38 A0 00 00 */	li r5, 0
/* 8009E380 0009B2C0  41 82 00 24 */	beq .L_8009E3A4
/* 8009E384 0009B2C4  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8009E388 0009B2C8  38 03 00 01 */	addi r0, r3, 1
/* 8009E38C 0009B2CC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8009E390 0009B2D0  88 A3 00 00 */	lbz r5, 0(r3)
/* 8009E394 0009B2D4  2C 05 00 64 */	cmpwi r5, 0x64
/* 8009E398 0009B2D8  40 81 00 0C */	ble .L_8009E3A4
/* 8009E39C 0009B2DC  38 05 FF 9E */	addi r0, r5, -98
/* 8009E3A0 0009B2E0  1C A0 00 14 */	mulli r5, r0, 0x14
.L_8009E3A4:
/* 8009E3A4 0009B2E4  57 44 07 7E */	clrlwi r4, r26, 0x1d
/* 8009E3A8 0009B2E8  7F E3 FB 78 */	mr r3, r31
/* 8009E3AC 0009B2EC  54 A5 04 3E */	clrlwi r5, r5, 0x10
/* 8009E3B0 0009B2F0  48 00 16 4D */	bl noteOff__8JASTrackFUcUs
/* 8009E3B4 0009B2F4  3A E0 00 00 */	li r23, 0
/* 8009E3B8 0009B2F8  48 00 04 64 */	b .L_8009E81C
.L_8009E3BC:
/* 8009E3BC 0009B2FC  57 40 06 36 */	rlwinm r0, r26, 0, 0x18, 0x1b
/* 8009E3C0 0009B300  2C 00 00 A0 */	cmpwi r0, 0xa0
/* 8009E3C4 0009B304  41 82 01 88 */	beq .L_8009E54C
/* 8009E3C8 0009B308  40 80 00 10 */	bge .L_8009E3D8
/* 8009E3CC 0009B30C  2C 00 00 90 */	cmpwi r0, 0x90
/* 8009E3D0 0009B310  41 82 00 14 */	beq .L_8009E3E4
/* 8009E3D4 0009B314  48 00 03 2C */	b .L_8009E700
.L_8009E3D8:
/* 8009E3D8 0009B318  2C 00 00 B0 */	cmpwi r0, 0xb0
/* 8009E3DC 0009B31C  41 82 01 80 */	beq .L_8009E55C
/* 8009E3E0 0009B320  48 00 03 20 */	b .L_8009E700
.L_8009E3E4:
/* 8009E3E4 0009B324  3B 7F 00 0C */	addi r27, r31, 0xc
/* 8009E3E8 0009B328  57 40 07 3A */	rlwinm r0, r26, 0, 0x1c, 0x1d
/* 8009E3EC 0009B32C  80 9F 00 10 */	lwz r4, 0x10(r31)
/* 8009E3F0 0009B330  28 00 00 0C */	cmplwi r0, 0xc
/* 8009E3F4 0009B334  57 5C 07 3E */	clrlwi r28, r26, 0x1c
/* 8009E3F8 0009B338  38 64 00 01 */	addi r3, r4, 1
/* 8009E3FC 0009B33C  90 7F 00 10 */	stw r3, 0x10(r31)
/* 8009E400 0009B340  8B 44 00 00 */	lbz r26, 0(r4)
/* 8009E404 0009B344  41 81 00 94 */	bgt .L_8009E498
/* 8009E408 0009B348  3C 60 80 4A */	lis r3, lbl_804A4318@ha
/* 8009E40C 0009B34C  54 00 10 3A */	slwi r0, r0, 2
/* 8009E410 0009B350  38 63 43 18 */	addi r3, r3, lbl_804A4318@l
/* 8009E414 0009B354  7C 03 00 2E */	lwzx r0, r3, r0
/* 8009E418 0009B358  7C 09 03 A6 */	mtctr r0
/* 8009E41C 0009B35C  4E 80 04 20 */	bctr 
.L_8009E420:
/* 8009E420 0009B360  80 9B 00 04 */	lwz r4, 4(r27)
/* 8009E424 0009B364  7F E3 FB 78 */	mr r3, r31
/* 8009E428 0009B368  38 04 00 01 */	addi r0, r4, 1
/* 8009E42C 0009B36C  90 1B 00 04 */	stw r0, 4(r27)
/* 8009E430 0009B370  88 84 00 00 */	lbz r4, 0(r4)
/* 8009E434 0009B374  48 00 33 D9 */	bl readReg16__8JASTrackFUc
/* 8009E438 0009B378  7C 7E 07 34 */	extsh r30, r3
/* 8009E43C 0009B37C  48 00 00 5C */	b .L_8009E498
.L_8009E440:
/* 8009E440 0009B380  80 7B 00 04 */	lwz r3, 4(r27)
/* 8009E444 0009B384  38 03 00 01 */	addi r0, r3, 1
/* 8009E448 0009B388  90 1B 00 04 */	stw r0, 4(r27)
/* 8009E44C 0009B38C  8B C3 00 00 */	lbz r30, 0(r3)
/* 8009E450 0009B390  48 00 00 48 */	b .L_8009E498
.L_8009E454:
/* 8009E454 0009B394  80 7B 00 04 */	lwz r3, 4(r27)
/* 8009E458 0009B398  38 03 00 01 */	addi r0, r3, 1
/* 8009E45C 0009B39C  90 1B 00 04 */	stw r0, 4(r27)
/* 8009E460 0009B3A0  88 83 00 00 */	lbz r4, 0(r3)
/* 8009E464 0009B3A4  54 80 06 31 */	rlwinm. r0, r4, 0, 0x18, 0x18
/* 8009E468 0009B3A8  41 82 00 10 */	beq .L_8009E478
/* 8009E46C 0009B3AC  54 80 40 2E */	slwi r0, r4, 8
/* 8009E470 0009B3B0  7C 1E 07 34 */	extsh r30, r0
/* 8009E474 0009B3B4  48 00 00 24 */	b .L_8009E498
.L_8009E478:
/* 8009E478 0009B3B8  54 83 40 2E */	slwi r3, r4, 8
/* 8009E47C 0009B3BC  54 80 08 3C */	slwi r0, r4, 1
/* 8009E480 0009B3C0  7C 60 03 78 */	or r0, r3, r0
/* 8009E484 0009B3C4  7C 1E 07 34 */	extsh r30, r0
/* 8009E488 0009B3C8  48 00 00 10 */	b .L_8009E498
.L_8009E48C:
/* 8009E48C 0009B3CC  7F 63 DB 78 */	mr r3, r27
/* 8009E490 0009B3D0  4B FF E5 BD */	bl read16__10JASSeqCtrlFv
/* 8009E494 0009B3D4  7C 7E 07 34 */	extsh r30, r3
.L_8009E498:
/* 8009E498 0009B3D8  57 80 07 BE */	clrlwi r0, r28, 0x1e
/* 8009E49C 0009B3DC  38 A0 00 00 */	li r5, 0
/* 8009E4A0 0009B3E0  2C 00 00 02 */	cmpwi r0, 2
/* 8009E4A4 0009B3E4  41 82 00 4C */	beq .L_8009E4F0
/* 8009E4A8 0009B3E8  40 80 00 14 */	bge .L_8009E4BC
/* 8009E4AC 0009B3EC  2C 00 00 00 */	cmpwi r0, 0
/* 8009E4B0 0009B3F0  41 82 00 18 */	beq .L_8009E4C8
/* 8009E4B4 0009B3F4  40 80 00 1C */	bge .L_8009E4D0
/* 8009E4B8 0009B3F8  48 00 00 58 */	b .L_8009E510
.L_8009E4BC:
/* 8009E4BC 0009B3FC  2C 00 00 04 */	cmpwi r0, 4
/* 8009E4C0 0009B400  40 80 00 50 */	bge .L_8009E510
/* 8009E4C4 0009B404  48 00 00 40 */	b .L_8009E504
.L_8009E4C8:
/* 8009E4C8 0009B408  38 A0 FF FF */	li r5, -1
/* 8009E4CC 0009B40C  48 00 00 44 */	b .L_8009E510
.L_8009E4D0:
/* 8009E4D0 0009B410  80 9B 00 04 */	lwz r4, 4(r27)
/* 8009E4D4 0009B414  7F E3 FB 78 */	mr r3, r31
/* 8009E4D8 0009B418  38 04 00 01 */	addi r0, r4, 1
/* 8009E4DC 0009B41C  90 1B 00 04 */	stw r0, 4(r27)
/* 8009E4E0 0009B420  88 84 00 00 */	lbz r4, 0(r4)
/* 8009E4E4 0009B424  48 00 33 29 */	bl readReg16__8JASTrackFUc
/* 8009E4E8 0009B428  54 65 04 3E */	clrlwi r5, r3, 0x10
/* 8009E4EC 0009B42C  48 00 00 24 */	b .L_8009E510
.L_8009E4F0:
/* 8009E4F0 0009B430  80 7B 00 04 */	lwz r3, 4(r27)
/* 8009E4F4 0009B434  38 03 00 01 */	addi r0, r3, 1
/* 8009E4F8 0009B438  90 1B 00 04 */	stw r0, 4(r27)
/* 8009E4FC 0009B43C  88 A3 00 00 */	lbz r5, 0(r3)
/* 8009E500 0009B440  48 00 00 10 */	b .L_8009E510
.L_8009E504:
/* 8009E504 0009B444  7F 63 DB 78 */	mr r3, r27
/* 8009E508 0009B448  4B FF E5 45 */	bl read16__10JASSeqCtrlFv
/* 8009E50C 0009B44C  54 65 04 3E */	clrlwi r5, r3, 0x10
.L_8009E510:
/* 8009E510 0009B450  7F C3 07 34 */	extsh r3, r30
/* 8009E514 0009B454  3C 00 43 30 */	lis r0, 0x4330
/* 8009E518 0009B458  6C 64 80 00 */	xoris r4, r3, 0x8000
/* 8009E51C 0009B45C  90 01 00 68 */	stw r0, 0x68(r1)
/* 8009E520 0009B460  C8 42 89 F8 */	lfd f2, lbl_80516D58@sda21(r2)
/* 8009E524 0009B464  7F E3 FB 78 */	mr r3, r31
/* 8009E528 0009B468  90 81 00 6C */	stw r4, 0x6c(r1)
/* 8009E52C 0009B46C  7F 44 D3 78 */	mr r4, r26
/* 8009E530 0009B470  C0 02 8A 10 */	lfs f0, lbl_80516D70@sda21(r2)
/* 8009E534 0009B474  C8 21 00 68 */	lfd f1, 0x68(r1)
/* 8009E538 0009B478  EC 21 10 28 */	fsubs f1, f1, f2
/* 8009E53C 0009B47C  EC 21 00 24 */	fdivs f1, f1, f0
/* 8009E540 0009B480  48 00 28 B9 */	bl setParam__8JASTrackFifi
/* 8009E544 0009B484  3A E0 00 00 */	li r23, 0
/* 8009E548 0009B488  48 00 02 D4 */	b .L_8009E81C
.L_8009E54C:
/* 8009E54C 0009B48C  57 44 07 3E */	clrlwi r4, r26, 0x1c
/* 8009E550 0009B490  7F E3 FB 78 */	mr r3, r31
/* 8009E554 0009B494  48 00 35 A1 */	bl writeRegParam__8JASTrackFUc
/* 8009E558 0009B498  48 00 02 C4 */	b .L_8009E81C
.L_8009E55C:
/* 8009E55C 0009B49C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8009E560 0009B4A0  57 57 EF FF */	rlwinm. r23, r26, 0x1d, 0x1f, 0x1f
/* 8009E564 0009B4A4  57 58 07 7E */	clrlwi r24, r26, 0x1d
/* 8009E568 0009B4A8  38 03 00 01 */	addi r0, r3, 1
/* 8009E56C 0009B4AC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8009E570 0009B4B0  88 83 00 00 */	lbz r4, 0(r3)
/* 8009E574 0009B4B4  41 82 00 10 */	beq .L_8009E584
/* 8009E578 0009B4B8  7F E3 FB 78 */	mr r3, r31
/* 8009E57C 0009B4BC  48 00 31 BD */	bl exchangeRegisterValue__8JASTrackFUc
/* 8009E580 0009B4C0  54 64 06 3E */	clrlwi r4, r3, 0x18
.L_8009E584:
/* 8009E584 0009B4C4  2C 17 00 00 */	cmpwi r23, 0
/* 8009E588 0009B4C8  38 C0 00 00 */	li r6, 0
/* 8009E58C 0009B4CC  41 82 00 0C */	beq .L_8009E598
/* 8009E590 0009B4D0  2C 18 00 00 */	cmpwi r24, 0
/* 8009E594 0009B4D4  41 82 00 44 */	beq .L_8009E5D8
.L_8009E598:
/* 8009E598 0009B4D8  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 8009E59C 0009B4DC  38 F8 00 01 */	addi r7, r24, 1
/* 8009E5A0 0009B4E0  38 A0 00 03 */	li r5, 3
/* 8009E5A4 0009B4E4  38 03 00 01 */	addi r0, r3, 1
/* 8009E5A8 0009B4E8  90 1F 00 10 */	stw r0, 0x10(r31)
/* 8009E5AC 0009B4EC  88 63 00 00 */	lbz r3, 0(r3)
/* 8009E5B0 0009B4F0  7C E9 03 A6 */	mtctr r7
/* 8009E5B4 0009B4F4  28 07 00 00 */	cmplwi r7, 0
/* 8009E5B8 0009B4F8  40 81 00 20 */	ble .L_8009E5D8
.L_8009E5BC:
/* 8009E5BC 0009B4FC  54 60 06 31 */	rlwinm. r0, r3, 0, 0x18, 0x18
/* 8009E5C0 0009B500  41 82 00 0C */	beq .L_8009E5CC
/* 8009E5C4 0009B504  7C C0 2B 78 */	or r0, r6, r5
/* 8009E5C8 0009B508  54 06 04 3E */	clrlwi r6, r0, 0x10
.L_8009E5CC:
/* 8009E5CC 0009B50C  54 63 0E 3C */	rlwinm r3, r3, 1, 0x18, 0x1e
/* 8009E5D0 0009B510  54 A5 14 3A */	rlwinm r5, r5, 2, 0x10, 0x1d
/* 8009E5D4 0009B514  42 00 FF E8 */	bdnz .L_8009E5BC
.L_8009E5D8:
/* 8009E5D8 0009B518  3C 60 80 48 */	lis r3, Arglist@ha
/* 8009E5DC 0009B51C  54 85 15 BA */	rlwinm r5, r4, 2, 0x16, 0x1d
/* 8009E5E0 0009B520  38 03 8C 40 */	addi r0, r3, Arglist@l
/* 8009E5E4 0009B524  54 97 06 3E */	clrlwi r23, r4, 0x18
/* 8009E5E8 0009B528  7C 60 2A 14 */	add r3, r0, r5
/* 8009E5EC 0009B52C  3B 5F 00 0C */	addi r26, r31, 0xc
/* 8009E5F0 0009B530  80 03 FD 00 */	lwz r0, -0x300(r3)
/* 8009E5F4 0009B534  3B 21 00 28 */	addi r25, r1, 0x28
/* 8009E5F8 0009B538  3B 60 00 00 */	li r27, 0
/* 8009E5FC 0009B53C  90 01 00 08 */	stw r0, 8(r1)
/* 8009E600 0009B540  A3 81 00 0A */	lhz r28, 0xa(r1)
/* 8009E604 0009B544  A3 01 00 08 */	lhz r24, 8(r1)
/* 8009E608 0009B548  7F 9C 33 78 */	or r28, r28, r6
/* 8009E60C 0009B54C  48 00 00 8C */	b .L_8009E698
.L_8009E610:
/* 8009E610 0009B550  57 80 07 BE */	clrlwi r0, r28, 0x1e
/* 8009E614 0009B554  38 60 00 00 */	li r3, 0
/* 8009E618 0009B558  2C 00 00 02 */	cmpwi r0, 2
/* 8009E61C 0009B55C  41 82 00 48 */	beq .L_8009E664
/* 8009E620 0009B560  40 80 00 14 */	bge .L_8009E634
/* 8009E624 0009B564  2C 00 00 00 */	cmpwi r0, 0
/* 8009E628 0009B568  41 82 00 18 */	beq .L_8009E640
/* 8009E62C 0009B56C  40 80 00 28 */	bge .L_8009E654
/* 8009E630 0009B570  48 00 00 58 */	b .L_8009E688
.L_8009E634:
/* 8009E634 0009B574  2C 00 00 04 */	cmpwi r0, 4
/* 8009E638 0009B578  40 80 00 50 */	bge .L_8009E688
/* 8009E63C 0009B57C  48 00 00 34 */	b .L_8009E670
.L_8009E640:
/* 8009E640 0009B580  80 7A 00 04 */	lwz r3, 4(r26)
/* 8009E644 0009B584  38 03 00 01 */	addi r0, r3, 1
/* 8009E648 0009B588  90 1A 00 04 */	stw r0, 4(r26)
/* 8009E64C 0009B58C  88 63 00 00 */	lbz r3, 0(r3)
/* 8009E650 0009B590  48 00 00 38 */	b .L_8009E688
.L_8009E654:
/* 8009E654 0009B594  7F 43 D3 78 */	mr r3, r26
/* 8009E658 0009B598  4B FF E3 F5 */	bl read16__10JASSeqCtrlFv
/* 8009E65C 0009B59C  54 63 04 3E */	clrlwi r3, r3, 0x10
/* 8009E660 0009B5A0  48 00 00 28 */	b .L_8009E688
.L_8009E664:
/* 8009E664 0009B5A4  7F 43 D3 78 */	mr r3, r26
/* 8009E668 0009B5A8  4B FF E4 0D */	bl read24__10JASSeqCtrlFv
/* 8009E66C 0009B5AC  48 00 00 1C */	b .L_8009E688
.L_8009E670:
/* 8009E670 0009B5B0  80 9A 00 04 */	lwz r4, 4(r26)
/* 8009E674 0009B5B4  7F E3 FB 78 */	mr r3, r31
/* 8009E678 0009B5B8  38 04 00 01 */	addi r0, r4, 1
/* 8009E67C 0009B5BC  90 1A 00 04 */	stw r0, 4(r26)
/* 8009E680 0009B5C0  88 84 00 00 */	lbz r4, 0(r4)
/* 8009E684 0009B5C4  48 00 30 B5 */	bl exchangeRegisterValue__8JASTrackFUc
.L_8009E688:
/* 8009E688 0009B5C8  90 79 00 00 */	stw r3, 0(r25)
/* 8009E68C 0009B5CC  57 9C F4 BE */	rlwinm r28, r28, 0x1e, 0x12, 0x1f
/* 8009E690 0009B5D0  3B 39 00 04 */	addi r25, r25, 4
/* 8009E694 0009B5D4  3B 7B 00 01 */	addi r27, r27, 1
.L_8009E698:
/* 8009E698 0009B5D8  7C 1B C0 00 */	cmpw r27, r24
/* 8009E69C 0009B5DC  41 80 FF 74 */	blt .L_8009E610
/* 8009E6A0 0009B5E0  1C B7 00 0C */	mulli r5, r23, 0xc
/* 8009E6A4 0009B5E4  3C 80 80 4A */	lis r4, sCmdPList__12JASSeqParser@ha
/* 8009E6A8 0009B5E8  38 61 00 10 */	addi r3, r1, 0x10
/* 8009E6AC 0009B5EC  38 04 3F E4 */	addi r0, r4, sCmdPList__12JASSeqParser@l
/* 8009E6B0 0009B5F0  7C C0 2A 14 */	add r6, r0, r5
/* 8009E6B4 0009B5F4  80 A6 F7 00 */	lwz r5, -0x900(r6)
/* 8009E6B8 0009B5F8  80 86 F7 04 */	lwz r4, -0x8fc(r6)
/* 8009E6BC 0009B5FC  80 06 F7 08 */	lwz r0, -0x8f8(r6)
/* 8009E6C0 0009B600  90 A1 00 10 */	stw r5, 0x10(r1)
/* 8009E6C4 0009B604  90 81 00 14 */	stw r4, 0x14(r1)
/* 8009E6C8 0009B608  90 01 00 18 */	stw r0, 0x18(r1)
/* 8009E6CC 0009B60C  48 02 34 29 */	bl __ptmf_test
/* 8009E6D0 0009B610  2C 03 00 00 */	cmpwi r3, 0
/* 8009E6D4 0009B614  40 82 00 0C */	bne .L_8009E6E0
/* 8009E6D8 0009B618  38 60 00 00 */	li r3, 0
/* 8009E6DC 0009B61C  48 00 00 1C */	b .L_8009E6F8
.L_8009E6E0:
/* 8009E6E0 0009B620  7F A3 EB 78 */	mr r3, r29
/* 8009E6E4 0009B624  7F E4 FB 78 */	mr r4, r31
/* 8009E6E8 0009B628  38 A1 00 28 */	addi r5, r1, 0x28
/* 8009E6EC 0009B62C  39 81 00 10 */	addi r12, r1, 0x10
/* 8009E6F0 0009B630  48 02 34 35 */	bl __ptmf_scall
/* 8009E6F4 0009B634  60 00 00 00 */	nop 
.L_8009E6F8:
/* 8009E6F8 0009B638  7C 77 1B 78 */	mr r23, r3
/* 8009E6FC 0009B63C  48 00 01 20 */	b .L_8009E81C
.L_8009E700:
/* 8009E700 0009B640  3C 60 80 48 */	lis r3, Arglist@ha
/* 8009E704 0009B644  57 44 10 3A */	slwi r4, r26, 2
/* 8009E708 0009B648  38 03 8C 40 */	addi r0, r3, Arglist@l
/* 8009E70C 0009B64C  3B 3F 00 0C */	addi r25, r31, 0xc
/* 8009E710 0009B650  7C 60 22 14 */	add r3, r0, r4
/* 8009E714 0009B654  3B 01 00 48 */	addi r24, r1, 0x48
/* 8009E718 0009B658  80 03 FD 00 */	lwz r0, -0x300(r3)
/* 8009E71C 0009B65C  3B 80 00 00 */	li r28, 0
/* 8009E720 0009B660  90 01 00 0C */	stw r0, 0xc(r1)
/* 8009E724 0009B664  A3 61 00 0E */	lhz r27, 0xe(r1)
/* 8009E728 0009B668  A2 E1 00 0C */	lhz r23, 0xc(r1)
/* 8009E72C 0009B66C  48 00 00 8C */	b .L_8009E7B8
.L_8009E730:
/* 8009E730 0009B670  57 60 07 BE */	clrlwi r0, r27, 0x1e
/* 8009E734 0009B674  38 60 00 00 */	li r3, 0
/* 8009E738 0009B678  2C 00 00 02 */	cmpwi r0, 2
/* 8009E73C 0009B67C  41 82 00 48 */	beq .L_8009E784
/* 8009E740 0009B680  40 80 00 14 */	bge .L_8009E754
/* 8009E744 0009B684  2C 00 00 00 */	cmpwi r0, 0
/* 8009E748 0009B688  41 82 00 18 */	beq .L_8009E760
/* 8009E74C 0009B68C  40 80 00 28 */	bge .L_8009E774
/* 8009E750 0009B690  48 00 00 58 */	b .L_8009E7A8
.L_8009E754:
/* 8009E754 0009B694  2C 00 00 04 */	cmpwi r0, 4
/* 8009E758 0009B698  40 80 00 50 */	bge .L_8009E7A8
/* 8009E75C 0009B69C  48 00 00 34 */	b .L_8009E790
.L_8009E760:
/* 8009E760 0009B6A0  80 79 00 04 */	lwz r3, 4(r25)
/* 8009E764 0009B6A4  38 03 00 01 */	addi r0, r3, 1
/* 8009E768 0009B6A8  90 19 00 04 */	stw r0, 4(r25)
/* 8009E76C 0009B6AC  88 63 00 00 */	lbz r3, 0(r3)
/* 8009E770 0009B6B0  48 00 00 38 */	b .L_8009E7A8
.L_8009E774:
/* 8009E774 0009B6B4  7F 23 CB 78 */	mr r3, r25
/* 8009E778 0009B6B8  4B FF E2 D5 */	bl read16__10JASSeqCtrlFv
/* 8009E77C 0009B6BC  54 63 04 3E */	clrlwi r3, r3, 0x10
/* 8009E780 0009B6C0  48 00 00 28 */	b .L_8009E7A8
.L_8009E784:
/* 8009E784 0009B6C4  7F 23 CB 78 */	mr r3, r25
/* 8009E788 0009B6C8  4B FF E2 ED */	bl read24__10JASSeqCtrlFv
/* 8009E78C 0009B6CC  48 00 00 1C */	b .L_8009E7A8
.L_8009E790:
/* 8009E790 0009B6D0  80 99 00 04 */	lwz r4, 4(r25)
/* 8009E794 0009B6D4  7F E3 FB 78 */	mr r3, r31
/* 8009E798 0009B6D8  38 04 00 01 */	addi r0, r4, 1
/* 8009E79C 0009B6DC  90 19 00 04 */	stw r0, 4(r25)
/* 8009E7A0 0009B6E0  88 84 00 00 */	lbz r4, 0(r4)
/* 8009E7A4 0009B6E4  48 00 2F 95 */	bl exchangeRegisterValue__8JASTrackFUc
.L_8009E7A8:
/* 8009E7A8 0009B6E8  90 78 00 00 */	stw r3, 0(r24)
/* 8009E7AC 0009B6EC  57 7B F4 BE */	rlwinm r27, r27, 0x1e, 0x12, 0x1f
/* 8009E7B0 0009B6F0  3B 18 00 04 */	addi r24, r24, 4
/* 8009E7B4 0009B6F4  3B 9C 00 01 */	addi r28, r28, 1
.L_8009E7B8:
/* 8009E7B8 0009B6F8  7C 1C B8 00 */	cmpw r28, r23
/* 8009E7BC 0009B6FC  41 80 FF 74 */	blt .L_8009E730
/* 8009E7C0 0009B700  1C BA 00 0C */	mulli r5, r26, 0xc
/* 8009E7C4 0009B704  3C 80 80 4A */	lis r4, sCmdPList__12JASSeqParser@ha
/* 8009E7C8 0009B708  38 61 00 1C */	addi r3, r1, 0x1c
/* 8009E7CC 0009B70C  38 04 3F E4 */	addi r0, r4, sCmdPList__12JASSeqParser@l
/* 8009E7D0 0009B710  7C C0 2A 14 */	add r6, r0, r5
/* 8009E7D4 0009B714  80 A6 F7 00 */	lwz r5, -0x900(r6)
/* 8009E7D8 0009B718  80 86 F7 04 */	lwz r4, -0x8fc(r6)
/* 8009E7DC 0009B71C  80 06 F7 08 */	lwz r0, -0x8f8(r6)
/* 8009E7E0 0009B720  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8009E7E4 0009B724  90 81 00 20 */	stw r4, 0x20(r1)
/* 8009E7E8 0009B728  90 01 00 24 */	stw r0, 0x24(r1)
/* 8009E7EC 0009B72C  48 02 33 09 */	bl __ptmf_test
/* 8009E7F0 0009B730  2C 03 00 00 */	cmpwi r3, 0
/* 8009E7F4 0009B734  40 82 00 0C */	bne .L_8009E800
/* 8009E7F8 0009B738  38 60 00 00 */	li r3, 0
/* 8009E7FC 0009B73C  48 00 00 1C */	b .L_8009E818
.L_8009E800:
/* 8009E800 0009B740  7F A3 EB 78 */	mr r3, r29
/* 8009E804 0009B744  7F E4 FB 78 */	mr r4, r31
/* 8009E808 0009B748  38 A1 00 48 */	addi r5, r1, 0x48
/* 8009E80C 0009B74C  39 81 00 1C */	addi r12, r1, 0x1c
/* 8009E810 0009B750  48 02 33 15 */	bl __ptmf_scall
/* 8009E814 0009B754  60 00 00 00 */	nop 
.L_8009E818:
/* 8009E818 0009B758  7C 77 1B 78 */	mr r23, r3
.L_8009E81C:
/* 8009E81C 0009B75C  28 17 00 00 */	cmplwi r23, 0
/* 8009E820 0009B760  41 82 F9 78 */	beq .L_8009E198
/* 8009E824 0009B764  28 17 00 01 */	cmplwi r23, 1
/* 8009E828 0009B768  41 82 00 14 */	beq .L_8009E83C
/* 8009E82C 0009B76C  28 17 00 03 */	cmplwi r23, 3
/* 8009E830 0009B770  40 82 F9 68 */	bne .L_8009E198
/* 8009E834 0009B774  38 60 FF FF */	li r3, -1
/* 8009E838 0009B778  48 00 00 08 */	b .L_8009E840
.L_8009E83C:
/* 8009E83C 0009B77C  38 60 00 00 */	li r3, 0
.L_8009E840:
/* 8009E840 0009B780  BA E1 00 7C */	lmw r23, 0x7c(r1)
/* 8009E844 0009B784  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8009E848 0009B788  7C 08 03 A6 */	mtlr r0
/* 8009E84C 0009B78C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 8009E850 0009B790  4E 80 00 20 */	blr 
.endfn parseSeq__12JASSeqParserFP8JASTrack

.fn __sinit_JASSeqParser_cpp, local
/* 8009E854 0009B794  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 8009E858 0009B798  3C 80 80 4A */	lis r4, lbl_804A3D68@ha
/* 8009E85C 0009B79C  3C 60 80 48 */	lis r3, __ptmf_null@ha
/* 8009E860 0009B7A0  BD C1 00 D8 */	stmw r14, 0xd8(r1)
/* 8009E864 0009B7A4  3A 04 3D 68 */	addi r16, r4, lbl_804A3D68@l
/* 8009E868 0009B7A8  3A 90 02 7C */	addi r20, r16, 0x27c
/* 8009E86C 0009B7AC  86 23 9F 10 */	lwzu r17, __ptmf_null@l(r3)
/* 8009E870 0009B7B0  81 F0 00 5C */	lwz r15, 0x5c(r16)
/* 8009E874 0009B7B4  82 43 00 04 */	lwz r18, 4(r3)
/* 8009E878 0009B7B8  82 63 00 08 */	lwz r19, 8(r3)
/* 8009E87C 0009B7BC  80 10 00 54 */	lwz r0, 0x54(r16)
/* 8009E880 0009B7C0  91 E1 00 C8 */	stw r15, 0xc8(r1)
/* 8009E884 0009B7C4  81 F0 00 60 */	lwz r15, 0x60(r16)
/* 8009E888 0009B7C8  90 14 00 84 */	stw r0, 0x84(r20)
/* 8009E88C 0009B7CC  80 01 00 C8 */	lwz r0, 0xc8(r1)
/* 8009E890 0009B7D0  91 E1 00 14 */	stw r15, 0x14(r1)
/* 8009E894 0009B7D4  81 F0 00 64 */	lwz r15, 0x64(r16)
/* 8009E898 0009B7D8  90 14 00 8C */	stw r0, 0x8c(r20)
/* 8009E89C 0009B7DC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8009E8A0 0009B7E0  91 E1 00 18 */	stw r15, 0x18(r1)
/* 8009E8A4 0009B7E4  81 F0 00 68 */	lwz r15, 0x68(r16)
/* 8009E8A8 0009B7E8  90 14 00 90 */	stw r0, 0x90(r20)
/* 8009E8AC 0009B7EC  80 01 00 18 */	lwz r0, 0x18(r1)
/* 8009E8B0 0009B7F0  82 B0 00 00 */	lwz r21, 0(r16)
/* 8009E8B4 0009B7F4  82 D0 00 04 */	lwz r22, 4(r16)
/* 8009E8B8 0009B7F8  82 F0 00 08 */	lwz r23, 8(r16)
/* 8009E8BC 0009B7FC  83 10 00 0C */	lwz r24, 0xc(r16)
/* 8009E8C0 0009B800  83 30 00 10 */	lwz r25, 0x10(r16)
/* 8009E8C4 0009B804  83 50 00 14 */	lwz r26, 0x14(r16)
/* 8009E8C8 0009B808  83 70 00 18 */	lwz r27, 0x18(r16)
/* 8009E8CC 0009B80C  83 90 00 1C */	lwz r28, 0x1c(r16)
/* 8009E8D0 0009B810  83 B0 00 20 */	lwz r29, 0x20(r16)
/* 8009E8D4 0009B814  83 D0 00 24 */	lwz r30, 0x24(r16)
/* 8009E8D8 0009B818  83 F0 00 28 */	lwz r31, 0x28(r16)
/* 8009E8DC 0009B81C  81 90 00 2C */	lwz r12, 0x2c(r16)
/* 8009E8E0 0009B820  81 70 00 30 */	lwz r11, 0x30(r16)
/* 8009E8E4 0009B824  81 50 00 34 */	lwz r10, 0x34(r16)
/* 8009E8E8 0009B828  81 30 00 38 */	lwz r9, 0x38(r16)
/* 8009E8EC 0009B82C  81 10 00 3C */	lwz r8, 0x3c(r16)
/* 8009E8F0 0009B830  80 F0 00 40 */	lwz r7, 0x40(r16)
/* 8009E8F4 0009B834  80 D0 00 44 */	lwz r6, 0x44(r16)
/* 8009E8F8 0009B838  80 B0 00 48 */	lwz r5, 0x48(r16)
/* 8009E8FC 0009B83C  80 90 00 4C */	lwz r4, 0x4c(r16)
/* 8009E900 0009B840  80 70 00 50 */	lwz r3, 0x50(r16)
/* 8009E904 0009B844  81 D0 00 58 */	lwz r14, 0x58(r16)
/* 8009E908 0009B848  90 14 00 94 */	stw r0, 0x94(r20)
/* 8009E90C 0009B84C  7D E0 7B 78 */	mr r0, r15
/* 8009E910 0009B850  91 E1 00 1C */	stw r15, 0x1c(r1)
/* 8009E914 0009B854  92 21 00 08 */	stw r17, 8(r1)
/* 8009E918 0009B858  92 41 00 0C */	stw r18, 0xc(r1)
/* 8009E91C 0009B85C  92 61 00 10 */	stw r19, 0x10(r1)
/* 8009E920 0009B860  92 30 02 7C */	stw r17, 0x27c(r16)
/* 8009E924 0009B864  92 50 02 80 */	stw r18, 0x280(r16)
/* 8009E928 0009B868  92 70 02 84 */	stw r19, 0x284(r16)
/* 8009E92C 0009B86C  92 B4 00 0C */	stw r21, 0xc(r20)
/* 8009E930 0009B870  92 D4 00 10 */	stw r22, 0x10(r20)
/* 8009E934 0009B874  92 F4 00 14 */	stw r23, 0x14(r20)
/* 8009E938 0009B878  93 14 00 18 */	stw r24, 0x18(r20)
/* 8009E93C 0009B87C  93 34 00 1C */	stw r25, 0x1c(r20)
/* 8009E940 0009B880  93 54 00 20 */	stw r26, 0x20(r20)
/* 8009E944 0009B884  92 34 00 24 */	stw r17, 0x24(r20)
/* 8009E948 0009B888  92 54 00 28 */	stw r18, 0x28(r20)
/* 8009E94C 0009B88C  92 74 00 2C */	stw r19, 0x2c(r20)
/* 8009E950 0009B890  93 74 00 30 */	stw r27, 0x30(r20)
/* 8009E954 0009B894  93 94 00 34 */	stw r28, 0x34(r20)
/* 8009E958 0009B898  93 B4 00 38 */	stw r29, 0x38(r20)
/* 8009E95C 0009B89C  92 34 00 3C */	stw r17, 0x3c(r20)
/* 8009E960 0009B8A0  92 54 00 40 */	stw r18, 0x40(r20)
/* 8009E964 0009B8A4  92 74 00 44 */	stw r19, 0x44(r20)
/* 8009E968 0009B8A8  93 D4 00 48 */	stw r30, 0x48(r20)
/* 8009E96C 0009B8AC  93 F4 00 4C */	stw r31, 0x4c(r20)
/* 8009E970 0009B8B0  91 94 00 50 */	stw r12, 0x50(r20)
/* 8009E974 0009B8B4  92 34 00 54 */	stw r17, 0x54(r20)
/* 8009E978 0009B8B8  92 54 00 58 */	stw r18, 0x58(r20)
/* 8009E97C 0009B8BC  92 74 00 5C */	stw r19, 0x5c(r20)
/* 8009E980 0009B8C0  91 74 00 60 */	stw r11, 0x60(r20)
/* 8009E984 0009B8C4  91 54 00 64 */	stw r10, 0x64(r20)
/* 8009E988 0009B8C8  91 34 00 68 */	stw r9, 0x68(r20)
/* 8009E98C 0009B8CC  91 14 00 6C */	stw r8, 0x6c(r20)
/* 8009E990 0009B8D0  90 F4 00 70 */	stw r7, 0x70(r20)
/* 8009E994 0009B8D4  90 D4 00 74 */	stw r6, 0x74(r20)
/* 8009E998 0009B8D8  90 B4 00 78 */	stw r5, 0x78(r20)
/* 8009E99C 0009B8DC  90 94 00 7C */	stw r4, 0x7c(r20)
/* 8009E9A0 0009B8E0  90 74 00 80 */	stw r3, 0x80(r20)
/* 8009E9A4 0009B8E4  91 D4 00 88 */	stw r14, 0x88(r20)
/* 8009E9A8 0009B8E8  90 14 00 98 */	stw r0, 0x98(r20)
/* 8009E9AC 0009B8EC  83 D0 00 C8 */	lwz r30, 0xc8(r16)
/* 8009E9B0 0009B8F0  80 10 00 C0 */	lwz r0, 0xc0(r16)
/* 8009E9B4 0009B8F4  93 C1 00 CC */	stw r30, 0xcc(r1)
/* 8009E9B8 0009B8F8  83 D0 00 CC */	lwz r30, 0xcc(r16)
/* 8009E9BC 0009B8FC  90 14 01 08 */	stw r0, 0x108(r20)
/* 8009E9C0 0009B900  80 01 00 CC */	lwz r0, 0xcc(r1)
/* 8009E9C4 0009B904  93 C1 00 20 */	stw r30, 0x20(r1)
/* 8009E9C8 0009B908  83 D0 00 D0 */	lwz r30, 0xd0(r16)
/* 8009E9CC 0009B90C  90 14 01 10 */	stw r0, 0x110(r20)
/* 8009E9D0 0009B910  80 01 00 20 */	lwz r0, 0x20(r1)
/* 8009E9D4 0009B914  93 C1 00 24 */	stw r30, 0x24(r1)
/* 8009E9D8 0009B918  83 D0 00 D4 */	lwz r30, 0xd4(r16)
/* 8009E9DC 0009B91C  90 14 01 14 */	stw r0, 0x114(r20)
/* 8009E9E0 0009B920  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8009E9E4 0009B924  93 C1 00 28 */	stw r30, 0x28(r1)
/* 8009E9E8 0009B928  83 D0 00 D8 */	lwz r30, 0xd8(r16)
/* 8009E9EC 0009B92C  90 14 01 18 */	stw r0, 0x118(r20)
/* 8009E9F0 0009B930  80 01 00 28 */	lwz r0, 0x28(r1)
/* 8009E9F4 0009B934  93 C1 00 2C */	stw r30, 0x2c(r1)
/* 8009E9F8 0009B938  83 D0 00 DC */	lwz r30, 0xdc(r16)
/* 8009E9FC 0009B93C  90 14 01 1C */	stw r0, 0x11c(r20)
/* 8009EA00 0009B940  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 8009EA04 0009B944  93 C1 00 30 */	stw r30, 0x30(r1)
/* 8009EA08 0009B948  83 D0 00 E0 */	lwz r30, 0xe0(r16)
/* 8009EA0C 0009B94C  90 14 01 20 */	stw r0, 0x120(r20)
/* 8009EA10 0009B950  80 01 00 30 */	lwz r0, 0x30(r1)
/* 8009EA14 0009B954  93 C1 00 34 */	stw r30, 0x34(r1)
/* 8009EA18 0009B958  83 D0 00 E4 */	lwz r30, 0xe4(r16)
/* 8009EA1C 0009B95C  90 14 01 24 */	stw r0, 0x124(r20)
/* 8009EA20 0009B960  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8009EA24 0009B964  93 C1 00 38 */	stw r30, 0x38(r1)
/* 8009EA28 0009B968  83 D0 00 E8 */	lwz r30, 0xe8(r16)
/* 8009EA2C 0009B96C  90 14 01 28 */	stw r0, 0x128(r20)
/* 8009EA30 0009B970  80 01 00 38 */	lwz r0, 0x38(r1)
/* 8009EA34 0009B974  93 C1 00 3C */	stw r30, 0x3c(r1)
/* 8009EA38 0009B978  83 D0 00 EC */	lwz r30, 0xec(r16)
/* 8009EA3C 0009B97C  90 14 01 2C */	stw r0, 0x12c(r20)
/* 8009EA40 0009B980  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 8009EA44 0009B984  93 C1 00 40 */	stw r30, 0x40(r1)
/* 8009EA48 0009B988  83 D0 00 F0 */	lwz r30, 0xf0(r16)
/* 8009EA4C 0009B98C  90 14 01 30 */	stw r0, 0x130(r20)
/* 8009EA50 0009B990  80 01 00 40 */	lwz r0, 0x40(r1)
/* 8009EA54 0009B994  93 C1 00 44 */	stw r30, 0x44(r1)
/* 8009EA58 0009B998  83 D0 00 F4 */	lwz r30, 0xf4(r16)
/* 8009EA5C 0009B99C  90 14 01 34 */	stw r0, 0x134(r20)
/* 8009EA60 0009B9A0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 8009EA64 0009B9A4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 8009EA68 0009B9A8  83 D0 00 F8 */	lwz r30, 0xf8(r16)
/* 8009EA6C 0009B9AC  90 14 01 38 */	stw r0, 0x138(r20)
/* 8009EA70 0009B9B0  80 01 00 48 */	lwz r0, 0x48(r1)
/* 8009EA74 0009B9B4  93 C1 00 4C */	stw r30, 0x4c(r1)
/* 8009EA78 0009B9B8  83 D0 00 FC */	lwz r30, 0xfc(r16)
/* 8009EA7C 0009B9BC  90 14 01 3C */	stw r0, 0x13c(r20)
/* 8009EA80 0009B9C0  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 8009EA84 0009B9C4  93 C1 00 50 */	stw r30, 0x50(r1)
/* 8009EA88 0009B9C8  83 D0 01 00 */	lwz r30, 0x100(r16)
/* 8009EA8C 0009B9CC  90 14 01 40 */	stw r0, 0x140(r20)
/* 8009EA90 0009B9D0  80 01 00 50 */	lwz r0, 0x50(r1)
/* 8009EA94 0009B9D4  93 C1 00 54 */	stw r30, 0x54(r1)
/* 8009EA98 0009B9D8  83 D0 01 04 */	lwz r30, 0x104(r16)
/* 8009EA9C 0009B9DC  90 14 01 44 */	stw r0, 0x144(r20)
/* 8009EAA0 0009B9E0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 8009EAA4 0009B9E4  83 B0 00 6C */	lwz r29, 0x6c(r16)
/* 8009EAA8 0009B9E8  83 90 00 70 */	lwz r28, 0x70(r16)
/* 8009EAAC 0009B9EC  83 70 00 74 */	lwz r27, 0x74(r16)
/* 8009EAB0 0009B9F0  83 50 00 78 */	lwz r26, 0x78(r16)
/* 8009EAB4 0009B9F4  83 30 00 7C */	lwz r25, 0x7c(r16)
/* 8009EAB8 0009B9F8  83 10 00 80 */	lwz r24, 0x80(r16)
/* 8009EABC 0009B9FC  82 F0 00 84 */	lwz r23, 0x84(r16)
/* 8009EAC0 0009BA00  82 D0 00 88 */	lwz r22, 0x88(r16)
/* 8009EAC4 0009BA04  82 B0 00 8C */	lwz r21, 0x8c(r16)
/* 8009EAC8 0009BA08  81 F0 00 90 */	lwz r15, 0x90(r16)
/* 8009EACC 0009BA0C  81 D0 00 94 */	lwz r14, 0x94(r16)
/* 8009EAD0 0009BA10  81 90 00 98 */	lwz r12, 0x98(r16)
/* 8009EAD4 0009BA14  81 70 00 9C */	lwz r11, 0x9c(r16)
/* 8009EAD8 0009BA18  81 50 00 A0 */	lwz r10, 0xa0(r16)
/* 8009EADC 0009BA1C  81 30 00 A4 */	lwz r9, 0xa4(r16)
/* 8009EAE0 0009BA20  81 10 00 A8 */	lwz r8, 0xa8(r16)
/* 8009EAE4 0009BA24  80 F0 00 AC */	lwz r7, 0xac(r16)
/* 8009EAE8 0009BA28  80 D0 00 B0 */	lwz r6, 0xb0(r16)
/* 8009EAEC 0009BA2C  80 B0 00 B4 */	lwz r5, 0xb4(r16)
/* 8009EAF0 0009BA30  80 90 00 B8 */	lwz r4, 0xb8(r16)
/* 8009EAF4 0009BA34  80 70 00 BC */	lwz r3, 0xbc(r16)
/* 8009EAF8 0009BA38  83 F0 00 C4 */	lwz r31, 0xc4(r16)
/* 8009EAFC 0009BA3C  90 14 01 48 */	stw r0, 0x148(r20)
/* 8009EB00 0009BA40  7F C0 F3 78 */	mr r0, r30
/* 8009EB04 0009BA44  93 C1 00 58 */	stw r30, 0x58(r1)
/* 8009EB08 0009BA48  93 B4 00 9C */	stw r29, 0x9c(r20)
/* 8009EB0C 0009BA4C  93 94 00 A0 */	stw r28, 0xa0(r20)
/* 8009EB10 0009BA50  93 74 00 A4 */	stw r27, 0xa4(r20)
/* 8009EB14 0009BA54  93 54 00 A8 */	stw r26, 0xa8(r20)
/* 8009EB18 0009BA58  93 34 00 AC */	stw r25, 0xac(r20)
/* 8009EB1C 0009BA5C  93 14 00 B0 */	stw r24, 0xb0(r20)
/* 8009EB20 0009BA60  92 F4 00 B4 */	stw r23, 0xb4(r20)
/* 8009EB24 0009BA64  92 D4 00 B8 */	stw r22, 0xb8(r20)
/* 8009EB28 0009BA68  92 B4 00 BC */	stw r21, 0xbc(r20)
/* 8009EB2C 0009BA6C  92 34 00 C0 */	stw r17, 0xc0(r20)
/* 8009EB30 0009BA70  92 54 00 C4 */	stw r18, 0xc4(r20)
/* 8009EB34 0009BA74  92 74 00 C8 */	stw r19, 0xc8(r20)
/* 8009EB38 0009BA78  91 F4 00 CC */	stw r15, 0xcc(r20)
/* 8009EB3C 0009BA7C  91 D4 00 D0 */	stw r14, 0xd0(r20)
/* 8009EB40 0009BA80  91 94 00 D4 */	stw r12, 0xd4(r20)
/* 8009EB44 0009BA84  91 74 00 D8 */	stw r11, 0xd8(r20)
/* 8009EB48 0009BA88  91 54 00 DC */	stw r10, 0xdc(r20)
/* 8009EB4C 0009BA8C  91 34 00 E0 */	stw r9, 0xe0(r20)
/* 8009EB50 0009BA90  92 34 00 E4 */	stw r17, 0xe4(r20)
/* 8009EB54 0009BA94  92 54 00 E8 */	stw r18, 0xe8(r20)
/* 8009EB58 0009BA98  92 74 00 EC */	stw r19, 0xec(r20)
/* 8009EB5C 0009BA9C  91 14 00 F0 */	stw r8, 0xf0(r20)
/* 8009EB60 0009BAA0  90 F4 00 F4 */	stw r7, 0xf4(r20)
/* 8009EB64 0009BAA4  90 D4 00 F8 */	stw r6, 0xf8(r20)
/* 8009EB68 0009BAA8  90 B4 00 FC */	stw r5, 0xfc(r20)
/* 8009EB6C 0009BAAC  90 94 01 00 */	stw r4, 0x100(r20)
/* 8009EB70 0009BAB0  90 74 01 04 */	stw r3, 0x104(r20)
/* 8009EB74 0009BAB4  93 F4 01 0C */	stw r31, 0x10c(r20)
/* 8009EB78 0009BAB8  90 14 01 4C */	stw r0, 0x14c(r20)
/* 8009EB7C 0009BABC  83 D0 01 64 */	lwz r30, 0x164(r16)
/* 8009EB80 0009BAC0  80 10 01 5C */	lwz r0, 0x15c(r16)
/* 8009EB84 0009BAC4  93 C1 00 D0 */	stw r30, 0xd0(r1)
/* 8009EB88 0009BAC8  83 D0 01 68 */	lwz r30, 0x168(r16)
/* 8009EB8C 0009BACC  90 14 01 A4 */	stw r0, 0x1a4(r20)
/* 8009EB90 0009BAD0  80 01 00 D0 */	lwz r0, 0xd0(r1)
/* 8009EB94 0009BAD4  93 C1 00 5C */	stw r30, 0x5c(r1)
/* 8009EB98 0009BAD8  83 D0 01 6C */	lwz r30, 0x16c(r16)
/* 8009EB9C 0009BADC  90 14 01 AC */	stw r0, 0x1ac(r20)
/* 8009EBA0 0009BAE0  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 8009EBA4 0009BAE4  93 C1 00 60 */	stw r30, 0x60(r1)
/* 8009EBA8 0009BAE8  83 D0 01 70 */	lwz r30, 0x170(r16)
/* 8009EBAC 0009BAEC  90 14 01 B0 */	stw r0, 0x1b0(r20)
/* 8009EBB0 0009BAF0  80 01 00 60 */	lwz r0, 0x60(r1)
/* 8009EBB4 0009BAF4  93 C1 00 64 */	stw r30, 0x64(r1)
/* 8009EBB8 0009BAF8  83 D0 01 74 */	lwz r30, 0x174(r16)
/* 8009EBBC 0009BAFC  90 14 01 B4 */	stw r0, 0x1b4(r20)
/* 8009EBC0 0009BB00  80 01 00 64 */	lwz r0, 0x64(r1)
/* 8009EBC4 0009BB04  93 C1 00 68 */	stw r30, 0x68(r1)
/* 8009EBC8 0009BB08  83 D0 01 78 */	lwz r30, 0x178(r16)
/* 8009EBCC 0009BB0C  90 14 01 B8 */	stw r0, 0x1b8(r20)
/* 8009EBD0 0009BB10  80 01 00 68 */	lwz r0, 0x68(r1)
/* 8009EBD4 0009BB14  93 C1 00 6C */	stw r30, 0x6c(r1)
/* 8009EBD8 0009BB18  83 D0 01 7C */	lwz r30, 0x17c(r16)
/* 8009EBDC 0009BB1C  90 14 01 BC */	stw r0, 0x1bc(r20)
/* 8009EBE0 0009BB20  80 01 00 6C */	lwz r0, 0x6c(r1)
/* 8009EBE4 0009BB24  93 C1 00 70 */	stw r30, 0x70(r1)
/* 8009EBE8 0009BB28  83 D0 01 80 */	lwz r30, 0x180(r16)
/* 8009EBEC 0009BB2C  90 14 01 C0 */	stw r0, 0x1c0(r20)
/* 8009EBF0 0009BB30  80 01 00 70 */	lwz r0, 0x70(r1)
/* 8009EBF4 0009BB34  93 C1 00 74 */	stw r30, 0x74(r1)
/* 8009EBF8 0009BB38  83 D0 01 84 */	lwz r30, 0x184(r16)
/* 8009EBFC 0009BB3C  90 14 01 C4 */	stw r0, 0x1c4(r20)
/* 8009EC00 0009BB40  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8009EC04 0009BB44  93 C1 00 78 */	stw r30, 0x78(r1)
/* 8009EC08 0009BB48  83 D0 01 88 */	lwz r30, 0x188(r16)
/* 8009EC0C 0009BB4C  90 14 01 C8 */	stw r0, 0x1c8(r20)
/* 8009EC10 0009BB50  80 01 00 78 */	lwz r0, 0x78(r1)
/* 8009EC14 0009BB54  93 C1 00 7C */	stw r30, 0x7c(r1)
/* 8009EC18 0009BB58  83 D0 01 8C */	lwz r30, 0x18c(r16)
/* 8009EC1C 0009BB5C  90 14 01 CC */	stw r0, 0x1cc(r20)
/* 8009EC20 0009BB60  80 01 00 7C */	lwz r0, 0x7c(r1)
/* 8009EC24 0009BB64  93 C1 00 80 */	stw r30, 0x80(r1)
/* 8009EC28 0009BB68  83 D0 01 90 */	lwz r30, 0x190(r16)
/* 8009EC2C 0009BB6C  90 14 01 D0 */	stw r0, 0x1d0(r20)
/* 8009EC30 0009BB70  80 01 00 80 */	lwz r0, 0x80(r1)
/* 8009EC34 0009BB74  93 C1 00 84 */	stw r30, 0x84(r1)
/* 8009EC38 0009BB78  83 D0 01 94 */	lwz r30, 0x194(r16)
/* 8009EC3C 0009BB7C  90 14 01 D4 */	stw r0, 0x1d4(r20)
/* 8009EC40 0009BB80  80 01 00 84 */	lwz r0, 0x84(r1)
/* 8009EC44 0009BB84  93 C1 00 88 */	stw r30, 0x88(r1)
/* 8009EC48 0009BB88  83 D0 01 98 */	lwz r30, 0x198(r16)
/* 8009EC4C 0009BB8C  90 14 01 D8 */	stw r0, 0x1d8(r20)
/* 8009EC50 0009BB90  80 01 00 88 */	lwz r0, 0x88(r1)
/* 8009EC54 0009BB94  93 C1 00 8C */	stw r30, 0x8c(r1)
/* 8009EC58 0009BB98  83 D0 01 9C */	lwz r30, 0x19c(r16)
/* 8009EC5C 0009BB9C  90 14 01 DC */	stw r0, 0x1dc(r20)
/* 8009EC60 0009BBA0  80 01 00 8C */	lwz r0, 0x8c(r1)
/* 8009EC64 0009BBA4  93 C1 00 90 */	stw r30, 0x90(r1)
/* 8009EC68 0009BBA8  83 D0 01 A0 */	lwz r30, 0x1a0(r16)
/* 8009EC6C 0009BBAC  90 14 01 E0 */	stw r0, 0x1e0(r20)
/* 8009EC70 0009BBB0  80 01 00 90 */	lwz r0, 0x90(r1)
/* 8009EC74 0009BBB4  93 C1 00 94 */	stw r30, 0x94(r1)
/* 8009EC78 0009BBB8  83 D0 01 A4 */	lwz r30, 0x1a4(r16)
/* 8009EC7C 0009BBBC  90 14 01 E4 */	stw r0, 0x1e4(r20)
/* 8009EC80 0009BBC0  80 01 00 94 */	lwz r0, 0x94(r1)
/* 8009EC84 0009BBC4  93 C1 00 98 */	stw r30, 0x98(r1)
/* 8009EC88 0009BBC8  83 D0 01 A8 */	lwz r30, 0x1a8(r16)
/* 8009EC8C 0009BBCC  90 14 01 E8 */	stw r0, 0x1e8(r20)
/* 8009EC90 0009BBD0  80 01 00 98 */	lwz r0, 0x98(r1)
/* 8009EC94 0009BBD4  93 C1 00 9C */	stw r30, 0x9c(r1)
/* 8009EC98 0009BBD8  83 D0 01 AC */	lwz r30, 0x1ac(r16)
/* 8009EC9C 0009BBDC  90 14 01 EC */	stw r0, 0x1ec(r20)
/* 8009ECA0 0009BBE0  80 01 00 9C */	lwz r0, 0x9c(r1)
/* 8009ECA4 0009BBE4  93 C1 00 A0 */	stw r30, 0xa0(r1)
/* 8009ECA8 0009BBE8  83 D0 01 B0 */	lwz r30, 0x1b0(r16)
/* 8009ECAC 0009BBEC  90 14 01 F0 */	stw r0, 0x1f0(r20)
/* 8009ECB0 0009BBF0  80 01 00 A0 */	lwz r0, 0xa0(r1)
/* 8009ECB4 0009BBF4  93 C1 00 A4 */	stw r30, 0xa4(r1)
/* 8009ECB8 0009BBF8  83 D0 01 B4 */	lwz r30, 0x1b4(r16)
/* 8009ECBC 0009BBFC  90 14 01 F4 */	stw r0, 0x1f4(r20)
/* 8009ECC0 0009BC00  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 8009ECC4 0009BC04  93 C1 00 A8 */	stw r30, 0xa8(r1)
/* 8009ECC8 0009BC08  83 D0 01 B8 */	lwz r30, 0x1b8(r16)
/* 8009ECCC 0009BC0C  90 14 01 F8 */	stw r0, 0x1f8(r20)
/* 8009ECD0 0009BC10  80 01 00 A8 */	lwz r0, 0xa8(r1)
/* 8009ECD4 0009BC14  83 B0 01 08 */	lwz r29, 0x108(r16)
/* 8009ECD8 0009BC18  83 90 01 0C */	lwz r28, 0x10c(r16)
/* 8009ECDC 0009BC1C  83 70 01 10 */	lwz r27, 0x110(r16)
/* 8009ECE0 0009BC20  83 50 01 14 */	lwz r26, 0x114(r16)
/* 8009ECE4 0009BC24  83 30 01 18 */	lwz r25, 0x118(r16)
/* 8009ECE8 0009BC28  83 10 01 1C */	lwz r24, 0x11c(r16)
/* 8009ECEC 0009BC2C  82 F0 01 20 */	lwz r23, 0x120(r16)
/* 8009ECF0 0009BC30  82 D0 01 24 */	lwz r22, 0x124(r16)
/* 8009ECF4 0009BC34  82 B0 01 28 */	lwz r21, 0x128(r16)
/* 8009ECF8 0009BC38  81 F0 01 2C */	lwz r15, 0x12c(r16)
/* 8009ECFC 0009BC3C  81 D0 01 30 */	lwz r14, 0x130(r16)
/* 8009ED00 0009BC40  81 90 01 34 */	lwz r12, 0x134(r16)
/* 8009ED04 0009BC44  81 70 01 38 */	lwz r11, 0x138(r16)
/* 8009ED08 0009BC48  81 50 01 3C */	lwz r10, 0x13c(r16)
/* 8009ED0C 0009BC4C  81 30 01 40 */	lwz r9, 0x140(r16)
/* 8009ED10 0009BC50  81 10 01 44 */	lwz r8, 0x144(r16)
/* 8009ED14 0009BC54  80 F0 01 48 */	lwz r7, 0x148(r16)
/* 8009ED18 0009BC58  80 D0 01 4C */	lwz r6, 0x14c(r16)
/* 8009ED1C 0009BC5C  80 B0 01 50 */	lwz r5, 0x150(r16)
/* 8009ED20 0009BC60  80 90 01 54 */	lwz r4, 0x154(r16)
/* 8009ED24 0009BC64  80 70 01 58 */	lwz r3, 0x158(r16)
/* 8009ED28 0009BC68  83 F0 01 60 */	lwz r31, 0x160(r16)
/* 8009ED2C 0009BC6C  90 14 01 FC */	stw r0, 0x1fc(r20)
/* 8009ED30 0009BC70  7F C0 F3 78 */	mr r0, r30
/* 8009ED34 0009BC74  93 C1 00 AC */	stw r30, 0xac(r1)
/* 8009ED38 0009BC78  93 B4 01 50 */	stw r29, 0x150(r20)
/* 8009ED3C 0009BC7C  93 94 01 54 */	stw r28, 0x154(r20)
/* 8009ED40 0009BC80  93 74 01 58 */	stw r27, 0x158(r20)
/* 8009ED44 0009BC84  93 54 01 5C */	stw r26, 0x15c(r20)
/* 8009ED48 0009BC88  93 34 01 60 */	stw r25, 0x160(r20)
/* 8009ED4C 0009BC8C  93 14 01 64 */	stw r24, 0x164(r20)
/* 8009ED50 0009BC90  92 F4 01 68 */	stw r23, 0x168(r20)
/* 8009ED54 0009BC94  92 D4 01 6C */	stw r22, 0x16c(r20)
/* 8009ED58 0009BC98  92 B4 01 70 */	stw r21, 0x170(r20)
/* 8009ED5C 0009BC9C  91 F4 01 74 */	stw r15, 0x174(r20)
/* 8009ED60 0009BCA0  91 D4 01 78 */	stw r14, 0x178(r20)
/* 8009ED64 0009BCA4  91 94 01 7C */	stw r12, 0x17c(r20)
/* 8009ED68 0009BCA8  91 74 01 80 */	stw r11, 0x180(r20)
/* 8009ED6C 0009BCAC  91 54 01 84 */	stw r10, 0x184(r20)
/* 8009ED70 0009BCB0  91 34 01 88 */	stw r9, 0x188(r20)
/* 8009ED74 0009BCB4  91 14 01 8C */	stw r8, 0x18c(r20)
/* 8009ED78 0009BCB8  90 F4 01 90 */	stw r7, 0x190(r20)
/* 8009ED7C 0009BCBC  90 D4 01 94 */	stw r6, 0x194(r20)
/* 8009ED80 0009BCC0  90 B4 01 98 */	stw r5, 0x198(r20)
/* 8009ED84 0009BCC4  90 94 01 9C */	stw r4, 0x19c(r20)
/* 8009ED88 0009BCC8  90 74 01 A0 */	stw r3, 0x1a0(r20)
/* 8009ED8C 0009BCCC  93 F4 01 A8 */	stw r31, 0x1a8(r20)
/* 8009ED90 0009BCD0  90 14 02 00 */	stw r0, 0x200(r20)
/* 8009ED94 0009BCD4  83 D0 02 18 */	lwz r30, 0x218(r16)
/* 8009ED98 0009BCD8  80 10 02 10 */	lwz r0, 0x210(r16)
/* 8009ED9C 0009BCDC  93 C1 00 D4 */	stw r30, 0xd4(r1)
/* 8009EDA0 0009BCE0  83 D0 02 1C */	lwz r30, 0x21c(r16)
/* 8009EDA4 0009BCE4  90 14 02 58 */	stw r0, 0x258(r20)
/* 8009EDA8 0009BCE8  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 8009EDAC 0009BCEC  93 C1 00 B0 */	stw r30, 0xb0(r1)
/* 8009EDB0 0009BCF0  83 D0 02 20 */	lwz r30, 0x220(r16)
/* 8009EDB4 0009BCF4  90 14 02 60 */	stw r0, 0x260(r20)
/* 8009EDB8 0009BCF8  80 01 00 B0 */	lwz r0, 0xb0(r1)
/* 8009EDBC 0009BCFC  93 C1 00 B4 */	stw r30, 0xb4(r1)
/* 8009EDC0 0009BD00  83 D0 02 24 */	lwz r30, 0x224(r16)
/* 8009EDC4 0009BD04  90 14 02 64 */	stw r0, 0x264(r20)
/* 8009EDC8 0009BD08  80 01 00 B4 */	lwz r0, 0xb4(r1)
/* 8009EDCC 0009BD0C  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 8009EDD0 0009BD10  83 D0 02 28 */	lwz r30, 0x228(r16)
/* 8009EDD4 0009BD14  90 14 02 68 */	stw r0, 0x268(r20)
/* 8009EDD8 0009BD18  80 01 00 B8 */	lwz r0, 0xb8(r1)
/* 8009EDDC 0009BD1C  93 C1 00 BC */	stw r30, 0xbc(r1)
/* 8009EDE0 0009BD20  83 D0 02 2C */	lwz r30, 0x22c(r16)
/* 8009EDE4 0009BD24  90 14 02 6C */	stw r0, 0x26c(r20)
/* 8009EDE8 0009BD28  80 01 00 BC */	lwz r0, 0xbc(r1)
/* 8009EDEC 0009BD2C  93 C1 00 C0 */	stw r30, 0xc0(r1)
/* 8009EDF0 0009BD30  83 D0 02 30 */	lwz r30, 0x230(r16)
/* 8009EDF4 0009BD34  90 14 02 70 */	stw r0, 0x270(r20)
/* 8009EDF8 0009BD38  80 01 00 C0 */	lwz r0, 0xc0(r1)
/* 8009EDFC 0009BD3C  83 B0 01 BC */	lwz r29, 0x1bc(r16)
/* 8009EE00 0009BD40  83 90 01 C0 */	lwz r28, 0x1c0(r16)
/* 8009EE04 0009BD44  83 70 01 C4 */	lwz r27, 0x1c4(r16)
/* 8009EE08 0009BD48  83 50 01 C8 */	lwz r26, 0x1c8(r16)
/* 8009EE0C 0009BD4C  83 30 01 CC */	lwz r25, 0x1cc(r16)
/* 8009EE10 0009BD50  83 10 01 D0 */	lwz r24, 0x1d0(r16)
/* 8009EE14 0009BD54  82 F0 01 D4 */	lwz r23, 0x1d4(r16)
/* 8009EE18 0009BD58  82 D0 01 D8 */	lwz r22, 0x1d8(r16)
/* 8009EE1C 0009BD5C  82 B0 01 DC */	lwz r21, 0x1dc(r16)
/* 8009EE20 0009BD60  81 F0 01 E0 */	lwz r15, 0x1e0(r16)
/* 8009EE24 0009BD64  81 D0 01 E4 */	lwz r14, 0x1e4(r16)
/* 8009EE28 0009BD68  81 90 01 E8 */	lwz r12, 0x1e8(r16)
/* 8009EE2C 0009BD6C  81 70 01 EC */	lwz r11, 0x1ec(r16)
/* 8009EE30 0009BD70  81 50 01 F0 */	lwz r10, 0x1f0(r16)
/* 8009EE34 0009BD74  81 30 01 F4 */	lwz r9, 0x1f4(r16)
/* 8009EE38 0009BD78  81 10 01 F8 */	lwz r8, 0x1f8(r16)
/* 8009EE3C 0009BD7C  80 F0 01 FC */	lwz r7, 0x1fc(r16)
/* 8009EE40 0009BD80  80 D0 02 00 */	lwz r6, 0x200(r16)
/* 8009EE44 0009BD84  80 B0 02 04 */	lwz r5, 0x204(r16)
/* 8009EE48 0009BD88  80 90 02 08 */	lwz r4, 0x208(r16)
/* 8009EE4C 0009BD8C  80 70 02 0C */	lwz r3, 0x20c(r16)
/* 8009EE50 0009BD90  83 F0 02 14 */	lwz r31, 0x214(r16)
/* 8009EE54 0009BD94  90 14 02 74 */	stw r0, 0x274(r20)
/* 8009EE58 0009BD98  7F C0 F3 78 */	mr r0, r30
/* 8009EE5C 0009BD9C  93 C1 00 C4 */	stw r30, 0xc4(r1)
/* 8009EE60 0009BDA0  93 B4 02 04 */	stw r29, 0x204(r20)
/* 8009EE64 0009BDA4  93 94 02 08 */	stw r28, 0x208(r20)
/* 8009EE68 0009BDA8  93 74 02 0C */	stw r27, 0x20c(r20)
/* 8009EE6C 0009BDAC  93 54 02 10 */	stw r26, 0x210(r20)
/* 8009EE70 0009BDB0  93 34 02 14 */	stw r25, 0x214(r20)
/* 8009EE74 0009BDB4  93 14 02 18 */	stw r24, 0x218(r20)
/* 8009EE78 0009BDB8  92 F4 02 1C */	stw r23, 0x21c(r20)
/* 8009EE7C 0009BDBC  92 D4 02 20 */	stw r22, 0x220(r20)
/* 8009EE80 0009BDC0  92 B4 02 24 */	stw r21, 0x224(r20)
/* 8009EE84 0009BDC4  91 F4 02 28 */	stw r15, 0x228(r20)
/* 8009EE88 0009BDC8  91 D4 02 2C */	stw r14, 0x22c(r20)
/* 8009EE8C 0009BDCC  91 94 02 30 */	stw r12, 0x230(r20)
/* 8009EE90 0009BDD0  91 74 02 34 */	stw r11, 0x234(r20)
/* 8009EE94 0009BDD4  91 54 02 38 */	stw r10, 0x238(r20)
/* 8009EE98 0009BDD8  91 34 02 3C */	stw r9, 0x23c(r20)
/* 8009EE9C 0009BDDC  91 14 02 40 */	stw r8, 0x240(r20)
/* 8009EEA0 0009BDE0  90 F4 02 44 */	stw r7, 0x244(r20)
/* 8009EEA4 0009BDE4  90 D4 02 48 */	stw r6, 0x248(r20)
/* 8009EEA8 0009BDE8  90 B4 02 4C */	stw r5, 0x24c(r20)
/* 8009EEAC 0009BDEC  90 94 02 50 */	stw r4, 0x250(r20)
/* 8009EEB0 0009BDF0  90 74 02 54 */	stw r3, 0x254(r20)
/* 8009EEB4 0009BDF4  93 F4 02 5C */	stw r31, 0x25c(r20)
/* 8009EEB8 0009BDF8  90 14 02 78 */	stw r0, 0x278(r20)
/* 8009EEBC 0009BDFC  92 34 02 7C */	stw r17, 0x27c(r20)
/* 8009EEC0 0009BE00  92 54 02 80 */	stw r18, 0x280(r20)
/* 8009EEC4 0009BE04  92 74 02 84 */	stw r19, 0x284(r20)
/* 8009EEC8 0009BE08  92 34 02 88 */	stw r17, 0x288(r20)
/* 8009EECC 0009BE0C  92 54 02 8C */	stw r18, 0x28c(r20)
/* 8009EED0 0009BE10  92 74 02 90 */	stw r19, 0x290(r20)
/* 8009EED4 0009BE14  92 34 02 94 */	stw r17, 0x294(r20)
/* 8009EED8 0009BE18  92 54 02 98 */	stw r18, 0x298(r20)
/* 8009EEDC 0009BE1C  92 74 02 9C */	stw r19, 0x29c(r20)
/* 8009EEE0 0009BE20  92 34 02 A0 */	stw r17, 0x2a0(r20)
/* 8009EEE4 0009BE24  92 54 02 A4 */	stw r18, 0x2a4(r20)
/* 8009EEE8 0009BE28  92 74 02 A8 */	stw r19, 0x2a8(r20)
/* 8009EEEC 0009BE2C  92 34 02 AC */	stw r17, 0x2ac(r20)
/* 8009EEF0 0009BE30  92 54 02 B0 */	stw r18, 0x2b0(r20)
/* 8009EEF4 0009BE34  92 74 02 B4 */	stw r19, 0x2b4(r20)
/* 8009EEF8 0009BE38  82 D0 02 34 */	lwz r22, 0x234(r16)
/* 8009EEFC 0009BE3C  82 B0 02 38 */	lwz r21, 0x238(r16)
/* 8009EF00 0009BE40  82 70 02 3C */	lwz r19, 0x23c(r16)
/* 8009EF04 0009BE44  82 50 02 40 */	lwz r18, 0x240(r16)
/* 8009EF08 0009BE48  82 30 02 44 */	lwz r17, 0x244(r16)
/* 8009EF0C 0009BE4C  81 F0 02 48 */	lwz r15, 0x248(r16)
/* 8009EF10 0009BE50  81 D0 02 4C */	lwz r14, 0x24c(r16)
/* 8009EF14 0009BE54  81 90 02 50 */	lwz r12, 0x250(r16)
/* 8009EF18 0009BE58  81 70 02 54 */	lwz r11, 0x254(r16)
/* 8009EF1C 0009BE5C  81 50 02 58 */	lwz r10, 0x258(r16)
/* 8009EF20 0009BE60  81 30 02 5C */	lwz r9, 0x25c(r16)
/* 8009EF24 0009BE64  81 10 02 60 */	lwz r8, 0x260(r16)
/* 8009EF28 0009BE68  80 F0 02 64 */	lwz r7, 0x264(r16)
/* 8009EF2C 0009BE6C  80 D0 02 68 */	lwz r6, 0x268(r16)
/* 8009EF30 0009BE70  80 B0 02 6C */	lwz r5, 0x26c(r16)
/* 8009EF34 0009BE74  80 90 02 70 */	lwz r4, 0x270(r16)
/* 8009EF38 0009BE78  80 70 02 74 */	lwz r3, 0x274(r16)
/* 8009EF3C 0009BE7C  80 10 02 78 */	lwz r0, 0x278(r16)
/* 8009EF40 0009BE80  92 D4 02 B8 */	stw r22, 0x2b8(r20)
/* 8009EF44 0009BE84  92 B4 02 BC */	stw r21, 0x2bc(r20)
/* 8009EF48 0009BE88  92 74 02 C0 */	stw r19, 0x2c0(r20)
/* 8009EF4C 0009BE8C  92 54 02 C4 */	stw r18, 0x2c4(r20)
/* 8009EF50 0009BE90  92 34 02 C8 */	stw r17, 0x2c8(r20)
/* 8009EF54 0009BE94  91 F4 02 CC */	stw r15, 0x2cc(r20)
/* 8009EF58 0009BE98  91 D4 02 D0 */	stw r14, 0x2d0(r20)
/* 8009EF5C 0009BE9C  91 94 02 D4 */	stw r12, 0x2d4(r20)
/* 8009EF60 0009BEA0  91 74 02 D8 */	stw r11, 0x2d8(r20)
/* 8009EF64 0009BEA4  91 54 02 DC */	stw r10, 0x2dc(r20)
/* 8009EF68 0009BEA8  91 34 02 E0 */	stw r9, 0x2e0(r20)
/* 8009EF6C 0009BEAC  91 14 02 E4 */	stw r8, 0x2e4(r20)
/* 8009EF70 0009BEB0  90 F4 02 E8 */	stw r7, 0x2e8(r20)
/* 8009EF74 0009BEB4  90 D4 02 EC */	stw r6, 0x2ec(r20)
/* 8009EF78 0009BEB8  90 B4 02 F0 */	stw r5, 0x2f0(r20)
/* 8009EF7C 0009BEBC  90 94 02 F4 */	stw r4, 0x2f4(r20)
/* 8009EF80 0009BEC0  90 74 02 F8 */	stw r3, 0x2f8(r20)
/* 8009EF84 0009BEC4  90 14 02 FC */	stw r0, 0x2fc(r20)
/* 8009EF88 0009BEC8  B9 C1 00 D8 */	lmw r14, 0xd8(r1)
/* 8009EF8C 0009BECC  38 21 01 20 */	addi r1, r1, 0x120
/* 8009EF90 0009BED0  4E 80 00 20 */	blr 
.endfn __sinit_JASSeqParser_cpp
