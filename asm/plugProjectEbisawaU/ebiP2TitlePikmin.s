.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_ebiP2TitlePikmin_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80497158, local
	.4byte 0x00000000
	.4byte 0x00000000
	.4byte 0x00000000
.endobj lbl_80497158
.balign 4
.obj lbl_80497164, local
	.asciz "ebiP2TitlePikmin"
.endobj lbl_80497164
.balign 4
.obj lbl_80497178, local
	.asciz "TBoidParamMgr"
.endobj lbl_80497178
.balign 4
.obj lbl_80497188, local
	.asciz "TTitleStateParameters"
.endobj lbl_80497188
.balign 4
.obj lbl_804971A0, local # Shift-JIS
	.4byte 0x8CFC82AB
	.4byte 0x95CF82A6
	.4byte 0x8378834E
	.4byte 0x8367838B
	.4byte 0x82CC91E5
	.4byte 0x82AB82B3
	.byte 0
.endobj lbl_804971A0
.balign 4
.obj lbl_804971BC, local # Shift-JIS
	.4byte 0x8CFC82AB
	.4byte 0x95CF82A6
	.4byte 0x8378834E
	.4byte 0x8367838B
	.4byte 0x8DC591E5
	.byte 0
.endobj lbl_804971BC
.balign 4
.obj lbl_804971D4, local # Shift-JIS
	.4byte 0x8DC591E5
	.4byte 0x95E082AD
	.4byte 0x91AC9378
	.byte 0
.endobj lbl_804971D4
.balign 4
.obj lbl_804971E4, local # Shift-JIS
	.4byte 0x424F4944
	.4byte 0x8FD593CB
	.4byte 0x89F194F0
	.4byte 0x8C579094
	.byte 0
.endobj lbl_804971E4
.balign 4
.obj lbl_804971F8, local # Shift-JIS
	.4byte 0x424F4944
	.4byte 0x91AC9378
	.4byte 0x8D8782ED
	.4byte 0x82B98C57
	.4byte 0x90940000
.endobj lbl_804971F8
.balign 4
.obj lbl_8049720C, local # Shift-JIS
	.4byte 0x424F4944
	.4byte 0x92869053
	.4byte 0x8F578D87
	.4byte 0x8C579094
	.4byte 0x00000000
.endobj lbl_8049720C
.balign 4
.obj lbl_80497220, local # Shift-JIS
	.4byte 0x424F4944
	.4byte 0x8CC291CC
	.4byte 0x82CC8BDF
	.4byte 0x8F8A8354
	.4byte 0x815B8360
	.4byte 0x94BC8C61
	.4byte 0x00000000
.endobj lbl_80497220
.balign 4
.obj lbl_8049723C, local # Shift-JIS
	.4byte 0x8C5182CC
	.4byte 0x92869053
	.4byte 0x82C68CC2
	.4byte 0x91CC82CC
	.4byte 0x96DA9349
	.4byte 0x926E82CC
	.4byte 0x8A848D87
	.4byte 0x00000000
.endobj lbl_8049723C
.balign 4
.obj lbl_8049725C, local
	.asciz "pikmin/title_red_piki.bmd"
.endobj lbl_8049725C
.balign 4
.obj lbl_80497278, local
	.asciz "ebiP2TitlePikmin.cpp"
.endobj lbl_80497278
.balign 4
.obj lbl_80497290, local
	.asciz "P2Assert"
.endobj lbl_80497290
.balign 4
.obj lbl_8049729C, local
	.asciz "pikmin/title_yellow_piki.bmd"
.endobj lbl_8049729C
.balign 4
.obj lbl_804972BC, local
	.asciz "pikmin/title_blue_piki.bmd"
.endobj lbl_804972BC
.balign 4
.obj lbl_804972D8, local
	.asciz "pikmin/title_black_piki.bmd"
.endobj lbl_804972D8
.balign 4
.obj lbl_804972F4, local
	.asciz "pikmin/title_white_piki.bmd"
.endobj lbl_804972F4
.balign 4
.obj lbl_80497310, local
	.asciz "pikmin/wait.bck"
.endobj lbl_80497310
.balign 4
.obj lbl_80497320, local
	.asciz "pikmin/wave.bck"
.endobj lbl_80497320
.balign 4
.obj lbl_80497330, local
	.asciz "PikminMgr"
.endobj lbl_80497330
.balign 4
.obj lbl_8049733C, local # Shift-JIS
	.4byte 0x8A438A4F
	.4byte 0x94C58358
	.4byte 0x8350815B
	.4byte 0x838B0000
.endobj lbl_8049733C
.balign 4
.obj lbl_8049734C, local # Shift-JIS
	.4byte 0x93FA967B
	.4byte 0x8CEA94C5
	.4byte 0x83588350
	.4byte 0x815B838B
	.4byte 0x00000000
.endobj lbl_8049734C
.balign 4
.obj lbl_80497360, local # Shift-JIS
	.4byte 0x8352838A
	.4byte 0x83578387
	.4byte 0x839394BC
	.4byte 0x8C610000
.endobj lbl_80497360
.balign 4
.obj lbl_80497370, local # Shift-JIS
	.4byte 0x92E28E7E
	.4byte 0x8B9797A3
	.4byte 0x00000000
.endobj lbl_80497370
.balign 4
.obj lbl_8049737C, local # Shift-JIS
	.4byte 0x8EFB91A9
	.4byte 0x8B9797A3
	.4byte 0x00000000
.endobj lbl_8049737C
.balign 4
.obj lbl_80497388, local # Shift-JIS
	.4byte 0x896582B8
	.4byte 0x82E782B5
	.4byte 0x58000000
.endobj lbl_80497388
.balign 4
.obj lbl_80497394, local # Shift-JIS
	.4byte 0x896582B8
	.4byte 0x82E782B5
	.4byte 0x5A000000
.endobj lbl_80497394
.balign 4
.obj lbl_804973A0, local # Shift-JIS
	.4byte 0x8341836A
	.4byte 0x83818358
	.4byte 0x8373815B
	.4byte 0x836895E0
	.4byte 0x82AD8169
	.4byte 0x91AC9378
	.4byte 0x94E497E1
	.4byte 0x816A0000
.endobj lbl_804973A0
.balign 4
.obj lbl_804973C0, local # Shift-JIS
	.4byte 0x8341836A
	.4byte 0x83818358
	.4byte 0x8373815B
	.4byte 0x83689597
	.4byte 0x00000000
.endobj lbl_804973C0
.balign 4
.obj lbl_804973D4, local # Shift-JIS
	.4byte 0x8341836A
	.4byte 0x83818358
	.4byte 0x8373815B
	.4byte 0x83685741
	.4byte 0x49548DC5
	.4byte 0x91E50000
.endobj lbl_804973D4
.balign 4
.obj lbl_804973EC, local # Shift-JIS
	.4byte 0x8341836A
	.4byte 0x83818358
	.4byte 0x8373815B
	.4byte 0x83685741
	.4byte 0x49548DC5
	.4byte 0x8FAC0000
.endobj lbl_804973EC
.balign 4
.obj lbl_80497404, local # Shift-JIS
	.4byte 0x8352834B
	.4byte 0x836C8D44
	.4byte 0x82AB8D44
	.4byte 0x82AB8C57
	.4byte 0x90940000
.endobj lbl_80497404
.balign 4
.obj lbl_80497418, local # Shift-JIS
	.4byte 0x83608383
	.4byte 0x83628373
	.4byte 0x815B82A9
	.4byte 0x82E793A6
	.4byte 0x82B082E9
	.4byte 0x8C579094
	.4byte 0x00000000
.endobj lbl_80497418
.balign 4
.obj lbl_80497434, local # Shift-JIS
	.4byte 0x92C782A2
	.4byte 0x82A982AF
	.4byte 0x82A082AB
	.4byte 0x82E782DF
	.4byte 0x94BC8C61
	.4byte 0x00000000
.endobj lbl_80497434
.balign 4
.obj lbl_8049744C, local # Shift-JIS
	.4byte 0x9597835E
	.4byte 0x8343837D
	.4byte 0x815B2895
	.4byte 0x62290000
.endobj lbl_8049744C
.balign 4
.obj lbl_8049745C, local # Shift-JIS
	.4byte 0x8B9797A3
	.4byte 0x94E497E1
	.4byte 0x91AC9378
	.4byte 0x8C579094
	.4byte 0x00000000
.endobj lbl_8049745C
.balign 4
.obj lbl_80497470, local
	.asciz "param/param_pikmin.txt"
.endobj lbl_80497470
.balign 4
.obj lbl_80497488, local
	.asciz "param/param_boid.txt"
.endobj lbl_80497488

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj govNAN___Q24Game5P2JST, local
	.float 0.0
	.float 0.0
	.float 0.0
.endobj govNAN___Q24Game5P2JST
.obj __vt__Q43ebi5title6Pikmin5TUnit, global
	.4byte 0
	.4byte 0
	.4byte getCreatureType__Q43ebi5title6Pikmin5TUnitFv
	.4byte isCalc__Q43ebi5title6Pikmin5TUnitFv
.endobj __vt__Q43ebi5title6Pikmin5TUnit

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj gu32NAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gu32NAN___Q24Game5P2JST
.obj gfNAN___Q24Game5P2JST, local
	.skip 0x4
.endobj gfNAN___Q24Game5P2JST
.obj boidCalcTimer$4026, local
	.skip 0x4
.endobj boidCalcTimer$4026
.obj init$4027, local
	.skip 0x1
.endobj init$4027

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051FC60, local
	.float 0.0
.endobj lbl_8051FC60
.obj lbl_8051FC64, local
	.float 0.2
.endobj lbl_8051FC64
.obj lbl_8051FC68, local
	.float 10.0
.endobj lbl_8051FC68
.obj lbl_8051FC6C, local
	.float 0.4
.endobj lbl_8051FC6C
.obj lbl_8051FC70, local
	.float 2.0
.endobj lbl_8051FC70
.obj lbl_8051FC74, local
	.float 800.0
.endobj lbl_8051FC74
.obj lbl_8051FC78, local
	.float 10000.0
.endobj lbl_8051FC78
.obj lbl_8051FC7C, local
	.float 4.5
.endobj lbl_8051FC7C
.obj lbl_8051FC80, local
	.float 100.0
.endobj lbl_8051FC80
.obj lbl_8051FC84, local
	.float 0.005
.endobj lbl_8051FC84
.obj lbl_8051FC88, local
	.float 30.0
.endobj lbl_8051FC88
.obj lbl_8051FC8C, local
	.float 500.0
.endobj lbl_8051FC8C
.obj lbl_8051FC90, local
	.float 1.0
.endobj lbl_8051FC90
.balign 8
.obj lbl_8051FC98, local
	.8byte 0x4330000000000000
.endobj lbl_8051FC98
.obj lbl_8051FCA0, local
	.float -1.0
.endobj lbl_8051FCA0
.balign 4
.obj lbl_8051FCA4, local
	.asciz "Parms"
.endobj lbl_8051FCA4
.balign 4
.obj lbl_8051FCAC, local
	.float 2.4
.endobj lbl_8051FCAC
.obj lbl_8051FCB0, local
	.float 2.6
.endobj lbl_8051FCB0
.obj lbl_8051FCB4, local
	.float 5.0
.endobj lbl_8051FCB4
.obj lbl_8051FCB8, local
	.float 20.0
.endobj lbl_8051FCB8
.obj lbl_8051FCBC, local
	.float 50.0
.endobj lbl_8051FCBC
.obj lbl_8051FCC0, local
	.float 0.5
.endobj lbl_8051FCC0
.obj lbl_8051FCC4, local
	.float -10.0
.endobj lbl_8051FCC4
.obj lbl_8051FCC8, local
	.float -5.0
.endobj lbl_8051FCC8
.obj lbl_8051FCCC, local
	.float 400.0
.endobj lbl_8051FCCC
.obj lbl_8051FCD0, local
	.float 6.0
.endobj lbl_8051FCD0
.balign 8
.obj lbl_8051FCD8, local
	.8byte 0x4330000080000000
.endobj lbl_8051FCD8
.obj lbl_8051FCE0, local
	.float 32767.0
.endobj lbl_8051FCE0
.obj lbl_8051FCE4, local
	.float 0.8
.endobj lbl_8051FCE4
.obj lbl_8051FCE8, local
	.float 0.40000004
.endobj lbl_8051FCE8
.obj lbl_8051FCEC, local
	.float 60.0
.endobj lbl_8051FCEC
.obj lbl_8051FCF0, local
	.float 0.1
.endobj lbl_8051FCF0
.obj lbl_8051FCF4, local
	.float -2.0
.endobj lbl_8051FCF4
.balign 4
.obj lbl_8051FCF8, local
	.asciz "shadow1"
.endobj lbl_8051FCF8

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn setArchive__Q43ebi5title6Pikmin9TAnimatorFP10JKRArchive, global
/* 803E3DE8 003E0D28  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E3DEC 003E0D2C  7C 08 02 A6 */	mflr r0
/* 803E3DF0 003E0D30  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E3DF4 003E0D34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E3DF8 003E0D38  7C 7F 1B 78 */	mr r31, r3
/* 803E3DFC 003E0D3C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E3E00 003E0D40  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E3E04 003E0D44  93 81 00 10 */	stw r28, 0x10(r1)
/* 803E3E08 003E0D48  7C 9C 23 78 */	mr r28, r4
/* 803E3E0C 003E0D4C  3C 80 80 49 */	lis r4, lbl_80497158@ha
/* 803E3E10 003E0D50  81 9C 00 00 */	lwz r12, 0(r28)
/* 803E3E14 003E0D54  3B C4 71 58 */	addi r30, r4, lbl_80497158@l
/* 803E3E18 003E0D58  7F 83 E3 78 */	mr r3, r28
/* 803E3E1C 003E0D5C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E3E20 003E0D60  38 9E 01 04 */	addi r4, r30, 0x104
/* 803E3E24 003E0D64  7D 89 03 A6 */	mtctr r12
/* 803E3E28 003E0D68  4E 80 04 21 */	bctrl 
/* 803E3E2C 003E0D6C  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E3E30 003E0D70  40 82 00 18 */	bne .L_803E3E48
/* 803E3E34 003E0D74  38 7E 01 20 */	addi r3, r30, 0x120
/* 803E3E38 003E0D78  38 BE 01 38 */	addi r5, r30, 0x138
/* 803E3E3C 003E0D7C  38 80 00 B0 */	li r4, 0xb0
/* 803E3E40 003E0D80  4C C6 31 82 */	crclr 6
/* 803E3E44 003E0D84  4B C4 67 FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3E48:
/* 803E3E48 003E0D88  7F A3 EB 78 */	mr r3, r29
/* 803E3E4C 003E0D8C  3C 80 20 10 */	lis r4, 0x2010
/* 803E3E50 003E0D90  4B C8 BA 45 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 803E3E54 003E0D94  90 7F 00 00 */	stw r3, 0(r31)
/* 803E3E58 003E0D98  7F 83 E3 78 */	mr r3, r28
/* 803E3E5C 003E0D9C  38 9E 01 44 */	addi r4, r30, 0x144
/* 803E3E60 003E0DA0  81 9C 00 00 */	lwz r12, 0(r28)
/* 803E3E64 003E0DA4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E3E68 003E0DA8  7D 89 03 A6 */	mtctr r12
/* 803E3E6C 003E0DAC  4E 80 04 21 */	bctrl 
/* 803E3E70 003E0DB0  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E3E74 003E0DB4  40 82 00 18 */	bne .L_803E3E8C
/* 803E3E78 003E0DB8  38 7E 01 20 */	addi r3, r30, 0x120
/* 803E3E7C 003E0DBC  38 BE 01 38 */	addi r5, r30, 0x138
/* 803E3E80 003E0DC0  38 80 00 BA */	li r4, 0xba
/* 803E3E84 003E0DC4  4C C6 31 82 */	crclr 6
/* 803E3E88 003E0DC8  4B C4 67 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3E8C:
/* 803E3E8C 003E0DCC  7F A3 EB 78 */	mr r3, r29
/* 803E3E90 003E0DD0  3C 80 20 10 */	lis r4, 0x2010
/* 803E3E94 003E0DD4  4B C8 BA 01 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 803E3E98 003E0DD8  90 7F 00 04 */	stw r3, 4(r31)
/* 803E3E9C 003E0DDC  7F 83 E3 78 */	mr r3, r28
/* 803E3EA0 003E0DE0  38 9E 01 64 */	addi r4, r30, 0x164
/* 803E3EA4 003E0DE4  81 9C 00 00 */	lwz r12, 0(r28)
/* 803E3EA8 003E0DE8  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E3EAC 003E0DEC  7D 89 03 A6 */	mtctr r12
/* 803E3EB0 003E0DF0  4E 80 04 21 */	bctrl 
/* 803E3EB4 003E0DF4  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E3EB8 003E0DF8  40 82 00 18 */	bne .L_803E3ED0
/* 803E3EBC 003E0DFC  38 7E 01 20 */	addi r3, r30, 0x120
/* 803E3EC0 003E0E00  38 BE 01 38 */	addi r5, r30, 0x138
/* 803E3EC4 003E0E04  38 80 00 C4 */	li r4, 0xc4
/* 803E3EC8 003E0E08  4C C6 31 82 */	crclr 6
/* 803E3ECC 003E0E0C  4B C4 67 75 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3ED0:
/* 803E3ED0 003E0E10  7F A3 EB 78 */	mr r3, r29
/* 803E3ED4 003E0E14  3C 80 20 10 */	lis r4, 0x2010
/* 803E3ED8 003E0E18  4B C8 B9 BD */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 803E3EDC 003E0E1C  90 7F 00 08 */	stw r3, 8(r31)
/* 803E3EE0 003E0E20  7F 83 E3 78 */	mr r3, r28
/* 803E3EE4 003E0E24  38 9E 01 80 */	addi r4, r30, 0x180
/* 803E3EE8 003E0E28  81 9C 00 00 */	lwz r12, 0(r28)
/* 803E3EEC 003E0E2C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E3EF0 003E0E30  7D 89 03 A6 */	mtctr r12
/* 803E3EF4 003E0E34  4E 80 04 21 */	bctrl 
/* 803E3EF8 003E0E38  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E3EFC 003E0E3C  40 82 00 18 */	bne .L_803E3F14
/* 803E3F00 003E0E40  38 7E 01 20 */	addi r3, r30, 0x120
/* 803E3F04 003E0E44  38 BE 01 38 */	addi r5, r30, 0x138
/* 803E3F08 003E0E48  38 80 00 CE */	li r4, 0xce
/* 803E3F0C 003E0E4C  4C C6 31 82 */	crclr 6
/* 803E3F10 003E0E50  4B C4 67 31 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3F14:
/* 803E3F14 003E0E54  7F A3 EB 78 */	mr r3, r29
/* 803E3F18 003E0E58  3C 80 20 10 */	lis r4, 0x2010
/* 803E3F1C 003E0E5C  4B C8 B9 79 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 803E3F20 003E0E60  90 7F 00 0C */	stw r3, 0xc(r31)
/* 803E3F24 003E0E64  7F 83 E3 78 */	mr r3, r28
/* 803E3F28 003E0E68  38 9E 01 9C */	addi r4, r30, 0x19c
/* 803E3F2C 003E0E6C  81 9C 00 00 */	lwz r12, 0(r28)
/* 803E3F30 003E0E70  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E3F34 003E0E74  7D 89 03 A6 */	mtctr r12
/* 803E3F38 003E0E78  4E 80 04 21 */	bctrl 
/* 803E3F3C 003E0E7C  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E3F40 003E0E80  40 82 00 18 */	bne .L_803E3F58
/* 803E3F44 003E0E84  38 7E 01 20 */	addi r3, r30, 0x120
/* 803E3F48 003E0E88  38 BE 01 38 */	addi r5, r30, 0x138
/* 803E3F4C 003E0E8C  38 80 00 D8 */	li r4, 0xd8
/* 803E3F50 003E0E90  4C C6 31 82 */	crclr 6
/* 803E3F54 003E0E94  4B C4 66 ED */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3F58:
/* 803E3F58 003E0E98  7F A3 EB 78 */	mr r3, r29
/* 803E3F5C 003E0E9C  3C 80 20 10 */	lis r4, 0x2010
/* 803E3F60 003E0EA0  4B C8 B9 35 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 803E3F64 003E0EA4  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803E3F68 003E0EA8  7F 83 E3 78 */	mr r3, r28
/* 803E3F6C 003E0EAC  38 9E 01 B8 */	addi r4, r30, 0x1b8
/* 803E3F70 003E0EB0  81 9C 00 00 */	lwz r12, 0(r28)
/* 803E3F74 003E0EB4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E3F78 003E0EB8  7D 89 03 A6 */	mtctr r12
/* 803E3F7C 003E0EBC  4E 80 04 21 */	bctrl 
/* 803E3F80 003E0EC0  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E3F84 003E0EC4  40 82 00 18 */	bne .L_803E3F9C
/* 803E3F88 003E0EC8  38 7E 01 20 */	addi r3, r30, 0x120
/* 803E3F8C 003E0ECC  38 BE 01 38 */	addi r5, r30, 0x138
/* 803E3F90 003E0ED0  38 80 00 E4 */	li r4, 0xe4
/* 803E3F94 003E0ED4  4C C6 31 82 */	crclr 6
/* 803E3F98 003E0ED8  4B C4 66 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3F9C:
/* 803E3F9C 003E0EDC  7F A3 EB 78 */	mr r3, r29
/* 803E3FA0 003E0EE0  4B C8 E6 01 */	bl load__20J3DAnmLoaderDataBaseFPCv
/* 803E3FA4 003E0EE4  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803E3FA8 003E0EE8  7F 83 E3 78 */	mr r3, r28
/* 803E3FAC 003E0EEC  38 9E 01 C8 */	addi r4, r30, 0x1c8
/* 803E3FB0 003E0EF0  81 9C 00 00 */	lwz r12, 0(r28)
/* 803E3FB4 003E0EF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E3FB8 003E0EF8  7D 89 03 A6 */	mtctr r12
/* 803E3FBC 003E0EFC  4E 80 04 21 */	bctrl 
/* 803E3FC0 003E0F00  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E3FC4 003E0F04  40 82 00 18 */	bne .L_803E3FDC
/* 803E3FC8 003E0F08  38 7E 01 20 */	addi r3, r30, 0x120
/* 803E3FCC 003E0F0C  38 BE 01 38 */	addi r5, r30, 0x138
/* 803E3FD0 003E0F10  38 80 00 E9 */	li r4, 0xe9
/* 803E3FD4 003E0F14  4C C6 31 82 */	crclr 6
/* 803E3FD8 003E0F18  4B C4 66 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E3FDC:
/* 803E3FDC 003E0F1C  7F A3 EB 78 */	mr r3, r29
/* 803E3FE0 003E0F20  4B C8 E5 C1 */	bl load__20J3DAnmLoaderDataBaseFPCv
/* 803E3FE4 003E0F24  90 7F 00 18 */	stw r3, 0x18(r31)
/* 803E3FE8 003E0F28  80 7F 00 00 */	lwz r3, 0(r31)
/* 803E3FEC 003E0F2C  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 803E3FF0 003E0F30  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803E3FF4 003E0F34  54 03 07 3E */	clrlwi r3, r0, 0x1c
/* 803E3FF8 003E0F38  4B C8 77 31 */	bl J3DNewMtxCalcAnm__FUlP15J3DAnmTransform
/* 803E3FFC 003E0F3C  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 803E4000 003E0F40  38 C0 00 00 */	li r6, 0
/* 803E4004 003E0F44  38 E0 00 00 */	li r7, 0
/* 803E4008 003E0F48  39 00 00 00 */	li r8, 0
/* 803E400C 003E0F4C  80 7F 00 00 */	lwz r3, 0(r31)
/* 803E4010 003E0F50  80 9F 00 14 */	lwz r4, 0x14(r31)
/* 803E4014 003E0F54  80 03 00 18 */	lwz r0, 0x18(r3)
/* 803E4018 003E0F58  80 BF 00 18 */	lwz r5, 0x18(r31)
/* 803E401C 003E0F5C  54 03 07 3E */	clrlwi r3, r0, 0x1c
/* 803E4020 003E0F60  4B C3 1D D1 */	bl J3DUNewMtxCalcAnm__FUlP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransformP15J3DAnmTransform14J3DMtxCalcFlag
/* 803E4024 003E0F64  90 7F 00 20 */	stw r3, 0x20(r31)
/* 803E4028 003E0F68  3C 80 00 04 */	lis r4, 4
/* 803E402C 003E0F6C  83 BF 00 08 */	lwz r29, 8(r31)
/* 803E4030 003E0F70  7F A3 EB 78 */	mr r3, r29
/* 803E4034 003E0F74  4B C9 F8 A5 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 803E4038 003E0F78  7F A3 EB 78 */	mr r3, r29
/* 803E403C 003E0F7C  4B C9 F9 F5 */	bl makeSharedDL__12J3DModelDataFv
/* 803E4040 003E0F80  83 DF 00 00 */	lwz r30, 0(r31)
/* 803E4044 003E0F84  3C 80 00 04 */	lis r4, 4
/* 803E4048 003E0F88  7F C3 F3 78 */	mr r3, r30
/* 803E404C 003E0F8C  4B C9 F8 8D */	bl newSharedDisplayList__12J3DModelDataFUl
/* 803E4050 003E0F90  7F C3 F3 78 */	mr r3, r30
/* 803E4054 003E0F94  4B C9 F9 DD */	bl makeSharedDL__12J3DModelDataFv
/* 803E4058 003E0F98  83 DF 00 04 */	lwz r30, 4(r31)
/* 803E405C 003E0F9C  3C 80 00 04 */	lis r4, 4
/* 803E4060 003E0FA0  7F C3 F3 78 */	mr r3, r30
/* 803E4064 003E0FA4  4B C9 F8 75 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 803E4068 003E0FA8  7F C3 F3 78 */	mr r3, r30
/* 803E406C 003E0FAC  4B C9 F9 C5 */	bl makeSharedDL__12J3DModelDataFv
/* 803E4070 003E0FB0  83 DF 00 0C */	lwz r30, 0xc(r31)
/* 803E4074 003E0FB4  3C 80 00 04 */	lis r4, 4
/* 803E4078 003E0FB8  7F C3 F3 78 */	mr r3, r30
/* 803E407C 003E0FBC  4B C9 F8 5D */	bl newSharedDisplayList__12J3DModelDataFUl
/* 803E4080 003E0FC0  7F C3 F3 78 */	mr r3, r30
/* 803E4084 003E0FC4  4B C9 F9 AD */	bl makeSharedDL__12J3DModelDataFv
/* 803E4088 003E0FC8  83 DF 00 10 */	lwz r30, 0x10(r31)
/* 803E408C 003E0FCC  3C 80 00 04 */	lis r4, 4
/* 803E4090 003E0FD0  7F C3 F3 78 */	mr r3, r30
/* 803E4094 003E0FD4  4B C9 F8 45 */	bl newSharedDisplayList__12J3DModelDataFUl
/* 803E4098 003E0FD8  7F C3 F3 78 */	mr r3, r30
/* 803E409C 003E0FDC  4B C9 F9 95 */	bl makeSharedDL__12J3DModelDataFv
/* 803E40A0 003E0FE0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E40A4 003E0FE4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E40A8 003E0FE8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E40AC 003E0FEC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E40B0 003E0FF0  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803E40B4 003E0FF4  7C 08 03 A6 */	mtlr r0
/* 803E40B8 003E0FF8  38 21 00 20 */	addi r1, r1, 0x20
/* 803E40BC 003E0FFC  4E 80 00 20 */	blr 
.endfn setArchive__Q43ebi5title6Pikmin9TAnimatorFP10JKRArchive

.fn __ct__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E40C0 003E1000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E40C4 003E1004  7C 08 02 A6 */	mflr r0
/* 803E40C8 003E1008  3C 80 80 4F */	lis r4, __vt__5CNode@ha
/* 803E40CC 003E100C  38 C0 00 00 */	li r6, 0
/* 803E40D0 003E1010  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E40D4 003E1014  38 04 B5 28 */	addi r0, r4, __vt__5CNode@l
/* 803E40D8 003E1018  3C 80 80 49 */	lis r4, lbl_80497330@ha
/* 803E40DC 003E101C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E40E0 003E1020  38 A4 73 30 */	addi r5, r4, lbl_80497330@l
/* 803E40E4 003E1024  7C 7F 1B 78 */	mr r31, r3
/* 803E40E8 003E1028  38 80 00 01 */	li r4, 1
/* 803E40EC 003E102C  90 03 00 00 */	stw r0, 0(r3)
/* 803E40F0 003E1030  3C 60 80 4E */	lis r3, __vt__Q43ebi5title6Pikmin4TMgr@ha
/* 803E40F4 003E1034  38 03 78 7C */	addi r0, r3, __vt__Q43ebi5title6Pikmin4TMgr@l
/* 803E40F8 003E1038  90 DF 00 10 */	stw r6, 0x10(r31)
/* 803E40FC 003E103C  38 7F 00 1C */	addi r3, r31, 0x1c
/* 803E4100 003E1040  90 DF 00 0C */	stw r6, 0xc(r31)
/* 803E4104 003E1044  90 DF 00 08 */	stw r6, 8(r31)
/* 803E4108 003E1048  90 DF 00 04 */	stw r6, 4(r31)
/* 803E410C 003E104C  90 BF 00 14 */	stw r5, 0x14(r31)
/* 803E4110 003E1050  90 1F 00 00 */	stw r0, 0(r31)
/* 803E4114 003E1054  48 00 2D FD */	bl __ct__Q43ebi5title6Pikmin6TParamFv
/* 803E4118 003E1058  3C 60 80 4F */	lis r3, __vt__5CNode@ha
/* 803E411C 003E105C  3C 80 80 49 */	lis r4, lbl_80497178@ha
/* 803E4120 003E1060  38 03 B5 28 */	addi r0, r3, __vt__5CNode@l
/* 803E4124 003E1064  39 20 00 00 */	li r9, 0
/* 803E4128 003E1068  90 1F 02 B0 */	stw r0, 0x2b0(r31)
/* 803E412C 003E106C  3C A0 80 4E */	lis r5, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@ha
/* 803E4130 003E1070  38 05 78 6C */	addi r0, r5, __vt__Q43ebi5title6Pikmin13TBoidParamMgr@l
/* 803E4134 003E1074  39 04 71 78 */	addi r8, r4, lbl_80497178@l
/* 803E4138 003E1078  91 3F 02 C0 */	stw r9, 0x2c0(r31)
/* 803E413C 003E107C  3C 60 80 3E */	lis r3, __ct__Q43ebi5title6Pikmin10TBoidParamFv@ha
/* 803E4140 003E1080  38 83 6B DC */	addi r4, r3, __ct__Q43ebi5title6Pikmin10TBoidParamFv@l
/* 803E4144 003E1084  38 A0 00 00 */	li r5, 0
/* 803E4148 003E1088  91 3F 02 BC */	stw r9, 0x2bc(r31)
/* 803E414C 003E108C  38 7F 02 D0 */	addi r3, r31, 0x2d0
/* 803E4150 003E1090  38 C0 01 50 */	li r6, 0x150
/* 803E4154 003E1094  38 E0 00 05 */	li r7, 5
/* 803E4158 003E1098  91 3F 02 B8 */	stw r9, 0x2b8(r31)
/* 803E415C 003E109C  91 3F 02 B4 */	stw r9, 0x2b4(r31)
/* 803E4160 003E10A0  91 1F 02 C4 */	stw r8, 0x2c4(r31)
/* 803E4164 003E10A4  90 1F 02 B0 */	stw r0, 0x2b0(r31)
/* 803E4168 003E10A8  4B CD D6 D5 */	bl __construct_array
/* 803E416C 003E10AC  38 00 00 00 */	li r0, 0
/* 803E4170 003E10B0  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E4174 003E10B4  90 1F 09 80 */	stw r0, 0x980(r31)
/* 803E4178 003E10B8  90 1F 09 84 */	stw r0, 0x984(r31)
/* 803E417C 003E10BC  D0 3F 09 60 */	stfs f1, 0x960(r31)
/* 803E4180 003E10C0  D0 3F 09 64 */	stfs f1, 0x964(r31)
/* 803E4184 003E10C4  D0 3F 09 68 */	stfs f1, 0x968(r31)
/* 803E4188 003E10C8  D0 3F 09 6C */	stfs f1, 0x96c(r31)
/* 803E418C 003E10CC  D0 3F 09 70 */	stfs f1, 0x970(r31)
/* 803E4190 003E10D0  D0 3F 09 74 */	stfs f1, 0x974(r31)
/* 803E4194 003E10D4  D0 3F 09 78 */	stfs f1, 0x978(r31)
/* 803E4198 003E10D8  D0 3F 09 7C */	stfs f1, 0x97c(r31)
/* 803E419C 003E10DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E41A0 003E10E0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E41A4 003E10E4  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E41A8 003E10E8  4B CD D9 A5 */	bl __cvt_fp2unsigned
/* 803E41AC 003E10EC  90 7F 09 80 */	stw r3, 0x980(r31)
/* 803E41B0 003E10F0  38 00 00 00 */	li r0, 0
/* 803E41B4 003E10F4  90 7F 09 84 */	stw r3, 0x984(r31)
/* 803E41B8 003E10F8  38 60 00 24 */	li r3, 0x24
/* 803E41BC 003E10FC  90 1F 02 CC */	stw r0, 0x2cc(r31)
/* 803E41C0 003E1100  90 1F 02 C8 */	stw r0, 0x2c8(r31)
/* 803E41C4 003E1104  4B C3 FC E1 */	bl __nw__FUl
/* 803E41C8 003E1108  28 03 00 00 */	cmplwi r3, 0
/* 803E41CC 003E110C  41 82 00 2C */	beq .L_803E41F8
/* 803E41D0 003E1110  38 00 00 00 */	li r0, 0
/* 803E41D4 003E1114  90 03 00 00 */	stw r0, 0(r3)
/* 803E41D8 003E1118  90 03 00 04 */	stw r0, 4(r3)
/* 803E41DC 003E111C  90 03 00 08 */	stw r0, 8(r3)
/* 803E41E0 003E1120  90 03 00 0C */	stw r0, 0xc(r3)
/* 803E41E4 003E1124  90 03 00 10 */	stw r0, 0x10(r3)
/* 803E41E8 003E1128  90 03 00 14 */	stw r0, 0x14(r3)
/* 803E41EC 003E112C  90 03 00 18 */	stw r0, 0x18(r3)
/* 803E41F0 003E1130  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803E41F4 003E1134  90 03 00 20 */	stw r0, 0x20(r3)
.L_803E41F8:
/* 803E41F8 003E1138  90 7F 00 18 */	stw r3, 0x18(r31)
/* 803E41FC 003E113C  3C 60 00 01 */	lis r3, 0x000128F0@ha
/* 803E4200 003E1140  38 63 28 F0 */	addi r3, r3, 0x000128F0@l
/* 803E4204 003E1144  4B C3 FD A9 */	bl __nwa__FUl
/* 803E4208 003E1148  3C 80 80 3E */	lis r4, __ct__Q43ebi5title6Pikmin5TUnitFv@ha
/* 803E420C 003E114C  3C A0 80 3E */	lis r5, __dt__Q43ebi5title6Pikmin5TUnitFv@ha
/* 803E4210 003E1150  38 84 6E 14 */	addi r4, r4, __ct__Q43ebi5title6Pikmin5TUnitFv@l
/* 803E4214 003E1154  38 C0 00 98 */	li r6, 0x98
/* 803E4218 003E1158  38 A5 42 58 */	addi r5, r5, __dt__Q43ebi5title6Pikmin5TUnitFv@l
/* 803E421C 003E115C  38 E0 01 F4 */	li r7, 0x1f4
/* 803E4220 003E1160  4B CD D7 D1 */	bl __construct_new_array
/* 803E4224 003E1164  90 7F 02 AC */	stw r3, 0x2ac(r31)
/* 803E4228 003E1168  7F E3 FB 78 */	mr r3, r31
/* 803E422C 003E116C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E4230 003E1170  38 9F 02 B0 */	addi r4, r31, 0x2b0
/* 803E4234 003E1174  D0 1F 09 88 */	stfs f0, 0x988(r31)
/* 803E4238 003E1178  D0 1F 09 8C */	stfs f0, 0x98c(r31)
/* 803E423C 003E117C  48 02 D1 CD */	bl add__5CNodeFP5CNode
/* 803E4240 003E1180  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E4244 003E1184  7F E3 FB 78 */	mr r3, r31
/* 803E4248 003E1188  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E424C 003E118C  7C 08 03 A6 */	mtlr r0
/* 803E4250 003E1190  38 21 00 10 */	addi r1, r1, 0x10
/* 803E4254 003E1194  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi5title6Pikmin4TMgrFv

.fn __dt__Q43ebi5title6Pikmin5TUnitFv, weak
/* 803E4258 003E1198  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E425C 003E119C  7C 08 02 A6 */	mflr r0
/* 803E4260 003E11A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E4264 003E11A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E4268 003E11A8  7C 7F 1B 79 */	or. r31, r3, r3
/* 803E426C 003E11AC  41 82 00 48 */	beq .L_803E42B4
/* 803E4270 003E11B0  3C 60 80 4F */	lis r3, __vt__Q43ebi5title6Pikmin5TUnit@ha
/* 803E4274 003E11B4  34 1F 00 4C */	addic. r0, r31, 0x4c
/* 803E4278 003E11B8  38 03 9D FC */	addi r0, r3, __vt__Q43ebi5title6Pikmin5TUnit@l
/* 803E427C 003E11BC  90 1F 00 00 */	stw r0, 0(r31)
/* 803E4280 003E11C0  41 82 00 10 */	beq .L_803E4290
/* 803E4284 003E11C4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E4288 003E11C8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E428C 003E11CC  90 1F 00 4C */	stw r0, 0x4c(r31)
.L_803E4290:
/* 803E4290 003E11D0  34 1F 00 38 */	addic. r0, r31, 0x38
/* 803E4294 003E11D4  41 82 00 10 */	beq .L_803E42A4
/* 803E4298 003E11D8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E429C 003E11DC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E42A0 003E11E0  90 1F 00 38 */	stw r0, 0x38(r31)
.L_803E42A4:
/* 803E42A4 003E11E4  7C 80 07 35 */	extsh. r0, r4
/* 803E42A8 003E11E8  40 81 00 0C */	ble .L_803E42B4
/* 803E42AC 003E11EC  7F E3 FB 78 */	mr r3, r31
/* 803E42B0 003E11F0  4B C3 FE 05 */	bl __dl__FPv
.L_803E42B4:
/* 803E42B4 003E11F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E42B8 003E11F8  7F E3 FB 78 */	mr r3, r31
/* 803E42BC 003E11FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E42C0 003E1200  7C 08 03 A6 */	mtlr r0
/* 803E42C4 003E1204  38 21 00 10 */	addi r1, r1, 0x10
/* 803E42C8 003E1208  4E 80 00 20 */	blr 
.endfn __dt__Q43ebi5title6Pikmin5TUnitFv

.fn setArchive__Q43ebi5title6Pikmin4TMgrFP10JKRArchive, global
/* 803E42CC 003E120C  94 21 FB D0 */	stwu r1, -0x430(r1)
/* 803E42D0 003E1210  7C 08 02 A6 */	mflr r0
/* 803E42D4 003E1214  3C A0 80 49 */	lis r5, lbl_80497470@ha
/* 803E42D8 003E1218  90 01 04 34 */	stw r0, 0x434(r1)
/* 803E42DC 003E121C  38 A5 74 70 */	addi r5, r5, lbl_80497470@l
/* 803E42E0 003E1220  93 E1 04 2C */	stw r31, 0x42c(r1)
/* 803E42E4 003E1224  7C 9F 23 78 */	mr r31, r4
/* 803E42E8 003E1228  93 C1 04 28 */	stw r30, 0x428(r1)
/* 803E42EC 003E122C  7C 7E 1B 78 */	mr r30, r3
/* 803E42F0 003E1230  38 7E 00 1C */	addi r3, r30, 0x1c
/* 803E42F4 003E1234  4B FD C8 05 */	bl loadSettingFile__Q33ebi5title10TParamBaseFP10JKRArchivePc
/* 803E42F8 003E1238  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 803E42FC 003E123C  7F E4 FB 78 */	mr r4, r31
/* 803E4300 003E1240  4B FF FA E9 */	bl setArchive__Q43ebi5title6Pikmin9TAnimatorFP10JKRArchive
/* 803E4304 003E1244  81 9F 00 00 */	lwz r12, 0(r31)
/* 803E4308 003E1248  3C 80 80 49 */	lis r4, lbl_80497488@ha
/* 803E430C 003E124C  7F E3 FB 78 */	mr r3, r31
/* 803E4310 003E1250  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803E4314 003E1254  38 84 74 88 */	addi r4, r4, lbl_80497488@l
/* 803E4318 003E1258  7D 89 03 A6 */	mtctr r12
/* 803E431C 003E125C  4E 80 04 21 */	bctrl 
/* 803E4320 003E1260  28 03 00 00 */	cmplwi r3, 0
/* 803E4324 003E1264  41 82 00 68 */	beq .L_803E438C
/* 803E4328 003E1268  7C 64 1B 78 */	mr r4, r3
/* 803E432C 003E126C  38 61 00 08 */	addi r3, r1, 8
/* 803E4330 003E1270  38 A0 FF FF */	li r5, -1
/* 803E4334 003E1274  48 03 15 C5 */	bl __ct__9RamStreamFPvi
/* 803E4338 003E1278  38 00 00 01 */	li r0, 1
/* 803E433C 003E127C  2C 00 00 01 */	cmpwi r0, 1
/* 803E4340 003E1280  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E4344 003E1284  40 82 00 0C */	bne .L_803E4350
/* 803E4348 003E1288  38 00 00 00 */	li r0, 0
/* 803E434C 003E128C  90 01 04 1C */	stw r0, 0x41c(r1)
.L_803E4350:
/* 803E4350 003E1290  38 7E 02 D0 */	addi r3, r30, 0x2d0
/* 803E4354 003E1294  38 81 00 08 */	addi r4, r1, 8
/* 803E4358 003E1298  48 02 F4 9D */	bl read__10ParametersFR6Stream
/* 803E435C 003E129C  38 7E 04 20 */	addi r3, r30, 0x420
/* 803E4360 003E12A0  38 81 00 08 */	addi r4, r1, 8
/* 803E4364 003E12A4  48 02 F4 91 */	bl read__10ParametersFR6Stream
/* 803E4368 003E12A8  38 7E 05 70 */	addi r3, r30, 0x570
/* 803E436C 003E12AC  38 81 00 08 */	addi r4, r1, 8
/* 803E4370 003E12B0  48 02 F4 85 */	bl read__10ParametersFR6Stream
/* 803E4374 003E12B4  38 7E 06 C0 */	addi r3, r30, 0x6c0
/* 803E4378 003E12B8  38 81 00 08 */	addi r4, r1, 8
/* 803E437C 003E12BC  48 02 F4 79 */	bl read__10ParametersFR6Stream
/* 803E4380 003E12C0  38 7E 08 10 */	addi r3, r30, 0x810
/* 803E4384 003E12C4  38 81 00 08 */	addi r4, r1, 8
/* 803E4388 003E12C8  48 02 F4 6D */	bl read__10ParametersFR6Stream
.L_803E438C:
/* 803E438C 003E12CC  80 01 04 34 */	lwz r0, 0x434(r1)
/* 803E4390 003E12D0  83 E1 04 2C */	lwz r31, 0x42c(r1)
/* 803E4394 003E12D4  83 C1 04 28 */	lwz r30, 0x428(r1)
/* 803E4398 003E12D8  7C 08 03 A6 */	mtlr r0
/* 803E439C 003E12DC  38 21 04 30 */	addi r1, r1, 0x430
/* 803E43A0 003E12E0  4E 80 00 20 */	blr 
.endfn setArchive__Q43ebi5title6Pikmin4TMgrFP10JKRArchive

.fn initUnit__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E43A4 003E12E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E43A8 003E12E8  7C 08 02 A6 */	mflr r0
/* 803E43AC 003E12EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E43B0 003E12F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E43B4 003E12F4  3B E0 00 00 */	li r31, 0
/* 803E43B8 003E12F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E43BC 003E12FC  3B C0 00 00 */	li r30, 0
/* 803E43C0 003E1300  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E43C4 003E1304  7C 7D 1B 78 */	mr r29, r3
.L_803E43C8:
/* 803E43C8 003E1308  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E43CC 003E130C  7F A4 EB 78 */	mr r4, r29
/* 803E43D0 003E1310  38 A0 00 00 */	li r5, 0
/* 803E43D4 003E1314  7C 60 FA 14 */	add r3, r0, r31
/* 803E43D8 003E1318  48 00 0E C5 */	bl init__Q43ebi5title6Pikmin5TUnitFPQ43ebi5title6Pikmin4TMgrl
/* 803E43DC 003E131C  3B DE 00 01 */	addi r30, r30, 1
/* 803E43E0 003E1320  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E43E4 003E1324  2C 1E 00 64 */	cmpwi r30, 0x64
/* 803E43E8 003E1328  41 80 FF E0 */	blt .L_803E43C8
/* 803E43EC 003E132C  3B C0 00 64 */	li r30, 0x64
/* 803E43F0 003E1330  3B E0 3B 60 */	li r31, 0x3b60
.L_803E43F4:
/* 803E43F4 003E1334  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E43F8 003E1338  7F A4 EB 78 */	mr r4, r29
/* 803E43FC 003E133C  38 A0 00 01 */	li r5, 1
/* 803E4400 003E1340  7C 60 FA 14 */	add r3, r0, r31
/* 803E4404 003E1344  48 00 0E 99 */	bl init__Q43ebi5title6Pikmin5TUnitFPQ43ebi5title6Pikmin4TMgrl
/* 803E4408 003E1348  3B DE 00 01 */	addi r30, r30, 1
/* 803E440C 003E134C  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4410 003E1350  2C 1E 00 C8 */	cmpwi r30, 0xc8
/* 803E4414 003E1354  41 80 FF E0 */	blt .L_803E43F4
/* 803E4418 003E1358  3B C0 00 C8 */	li r30, 0xc8
/* 803E441C 003E135C  3B E0 76 C0 */	li r31, 0x76c0
.L_803E4420:
/* 803E4420 003E1360  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4424 003E1364  7F A4 EB 78 */	mr r4, r29
/* 803E4428 003E1368  38 A0 00 02 */	li r5, 2
/* 803E442C 003E136C  7C 60 FA 14 */	add r3, r0, r31
/* 803E4430 003E1370  48 00 0E 6D */	bl init__Q43ebi5title6Pikmin5TUnitFPQ43ebi5title6Pikmin4TMgrl
/* 803E4434 003E1374  3B DE 00 01 */	addi r30, r30, 1
/* 803E4438 003E1378  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E443C 003E137C  2C 1E 01 2C */	cmpwi r30, 0x12c
/* 803E4440 003E1380  41 80 FF E0 */	blt .L_803E4420
/* 803E4444 003E1384  3C 60 00 01 */	lis r3, 0x0000B220@ha
/* 803E4448 003E1388  3B C0 01 2C */	li r30, 0x12c
/* 803E444C 003E138C  3B E3 B2 20 */	addi r31, r3, 0x0000B220@l
.L_803E4450:
/* 803E4450 003E1390  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4454 003E1394  7F A4 EB 78 */	mr r4, r29
/* 803E4458 003E1398  38 A0 00 03 */	li r5, 3
/* 803E445C 003E139C  7C 60 FA 14 */	add r3, r0, r31
/* 803E4460 003E13A0  48 00 0E 3D */	bl init__Q43ebi5title6Pikmin5TUnitFPQ43ebi5title6Pikmin4TMgrl
/* 803E4464 003E13A4  3B DE 00 01 */	addi r30, r30, 1
/* 803E4468 003E13A8  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E446C 003E13AC  2C 1E 01 90 */	cmpwi r30, 0x190
/* 803E4470 003E13B0  41 80 FF E0 */	blt .L_803E4450
/* 803E4474 003E13B4  3C 60 00 01 */	lis r3, 0x0000ED80@ha
/* 803E4478 003E13B8  3B C0 01 90 */	li r30, 0x190
/* 803E447C 003E13BC  3B E3 ED 80 */	addi r31, r3, 0x0000ED80@l
.L_803E4480:
/* 803E4480 003E13C0  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4484 003E13C4  7F A4 EB 78 */	mr r4, r29
/* 803E4488 003E13C8  38 A0 00 04 */	li r5, 4
/* 803E448C 003E13CC  7C 60 FA 14 */	add r3, r0, r31
/* 803E4490 003E13D0  48 00 0E 0D */	bl init__Q43ebi5title6Pikmin5TUnitFPQ43ebi5title6Pikmin4TMgrl
/* 803E4494 003E13D4  3B DE 00 01 */	addi r30, r30, 1
/* 803E4498 003E13D8  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E449C 003E13DC  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E44A0 003E13E0  41 80 FF E0 */	blt .L_803E4480
/* 803E44A4 003E13E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E44A8 003E13E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E44AC 003E13EC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E44B0 003E13F0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E44B4 003E13F4  7C 08 03 A6 */	mtlr r0
/* 803E44B8 003E13F8  38 21 00 20 */	addi r1, r1, 0x20
/* 803E44BC 003E13FC  4E 80 00 20 */	blr 
.endfn initUnit__Q43ebi5title6Pikmin4TMgrFv

.fn update__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E44C0 003E1400  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803E44C4 003E1404  7C 08 02 A6 */	mflr r0
/* 803E44C8 003E1408  90 01 00 34 */	stw r0, 0x34(r1)
/* 803E44CC 003E140C  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803E44D0 003E1410  7C 7F 1B 78 */	mr r31, r3
/* 803E44D4 003E1414  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803E44D8 003E1418  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803E44DC 003E141C  80 63 09 80 */	lwz r3, 0x980(r3)
/* 803E44E0 003E1420  28 03 00 00 */	cmplwi r3, 0
/* 803E44E4 003E1424  41 82 00 0C */	beq .L_803E44F0
/* 803E44E8 003E1428  38 03 FF FF */	addi r0, r3, -1
/* 803E44EC 003E142C  90 1F 09 80 */	stw r0, 0x980(r31)
.L_803E44F0:
/* 803E44F0 003E1430  80 7F 02 CC */	lwz r3, 0x2cc(r31)
/* 803E44F4 003E1434  80 1F 02 C8 */	lwz r0, 0x2c8(r31)
/* 803E44F8 003E1438  80 DF 09 84 */	lwz r6, 0x984(r31)
/* 803E44FC 003E143C  1C 63 01 50 */	mulli r3, r3, 0x150
/* 803E4500 003E1440  28 06 00 00 */	cmplwi r6, 0
/* 803E4504 003E1444  1C 00 01 50 */	mulli r0, r0, 0x150
/* 803E4508 003E1448  7C BF 1A 14 */	add r5, r31, r3
/* 803E450C 003E144C  7C 9F 02 14 */	add r4, r31, r0
/* 803E4510 003E1450  41 82 00 38 */	beq .L_803E4548
/* 803E4514 003E1454  80 7F 09 80 */	lwz r3, 0x980(r31)
/* 803E4518 003E1458  3C 00 43 30 */	lis r0, 0x4330
/* 803E451C 003E145C  90 01 00 08 */	stw r0, 8(r1)
/* 803E4520 003E1460  C8 42 19 38 */	lfd f2, lbl_8051FC98@sda21(r2)
/* 803E4524 003E1464  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E4528 003E1468  C8 01 00 08 */	lfd f0, 8(r1)
/* 803E452C 003E146C  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803E4530 003E1470  EC 20 10 28 */	fsubs f1, f0, f2
/* 803E4534 003E1474  90 01 00 10 */	stw r0, 0x10(r1)
/* 803E4538 003E1478  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 803E453C 003E147C  EC 00 10 28 */	fsubs f0, f0, f2
/* 803E4540 003E1480  EC 01 00 24 */	fdivs f0, f1, f0
/* 803E4544 003E1484  48 00 00 08 */	b .L_803E454C
.L_803E4548:
/* 803E4548 003E1488  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
.L_803E454C:
/* 803E454C 003E148C  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E4550 003E1490  7F E3 FB 78 */	mr r3, r31
/* 803E4554 003E1494  C0 44 03 44 */	lfs f2, 0x344(r4)
/* 803E4558 003E1498  EC 01 00 28 */	fsubs f0, f1, f0
/* 803E455C 003E149C  C0 65 03 44 */	lfs f3, 0x344(r5)
/* 803E4560 003E14A0  EC 21 00 28 */	fsubs f1, f1, f0
/* 803E4564 003E14A4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E4568 003E14A8  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 803E456C 003E14AC  D0 5F 09 60 */	stfs f2, 0x960(r31)
/* 803E4570 003E14B0  C0 44 03 1C */	lfs f2, 0x31c(r4)
/* 803E4574 003E14B4  C0 65 03 1C */	lfs f3, 0x31c(r5)
/* 803E4578 003E14B8  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E457C 003E14BC  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 803E4580 003E14C0  D0 5F 09 64 */	stfs f2, 0x964(r31)
/* 803E4584 003E14C4  C0 44 02 F4 */	lfs f2, 0x2f4(r4)
/* 803E4588 003E14C8  C0 65 02 F4 */	lfs f3, 0x2f4(r5)
/* 803E458C 003E14CC  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E4590 003E14D0  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 803E4594 003E14D4  D0 5F 09 68 */	stfs f2, 0x968(r31)
/* 803E4598 003E14D8  C0 44 03 BC */	lfs f2, 0x3bc(r4)
/* 803E459C 003E14DC  C0 65 03 BC */	lfs f3, 0x3bc(r5)
/* 803E45A0 003E14E0  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E45A4 003E14E4  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 803E45A8 003E14E8  D0 5F 09 6C */	stfs f2, 0x96c(r31)
/* 803E45AC 003E14EC  C0 44 03 94 */	lfs f2, 0x394(r4)
/* 803E45B0 003E14F0  C0 65 03 94 */	lfs f3, 0x394(r5)
/* 803E45B4 003E14F4  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E45B8 003E14F8  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 803E45BC 003E14FC  D0 5F 09 70 */	stfs f2, 0x970(r31)
/* 803E45C0 003E1500  C0 44 03 6C */	lfs f2, 0x36c(r4)
/* 803E45C4 003E1504  C0 65 03 6C */	lfs f3, 0x36c(r5)
/* 803E45C8 003E1508  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E45CC 003E150C  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 803E45D0 003E1510  D0 5F 09 74 */	stfs f2, 0x974(r31)
/* 803E45D4 003E1514  C0 44 04 0C */	lfs f2, 0x40c(r4)
/* 803E45D8 003E1518  C0 65 04 0C */	lfs f3, 0x40c(r5)
/* 803E45DC 003E151C  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E45E0 003E1520  EC 41 10 FA */	fmadds f2, f1, f3, f2
/* 803E45E4 003E1524  D0 5F 09 78 */	stfs f2, 0x978(r31)
/* 803E45E8 003E1528  C0 44 03 E4 */	lfs f2, 0x3e4(r4)
/* 803E45EC 003E152C  C0 65 03 E4 */	lfs f3, 0x3e4(r5)
/* 803E45F0 003E1530  EC 00 00 B2 */	fmuls f0, f0, f2
/* 803E45F4 003E1534  EC 01 00 FA */	fmadds f0, f1, f3, f0
/* 803E45F8 003E1538  D0 1F 09 7C */	stfs f0, 0x97c(r31)
/* 803E45FC 003E153C  48 00 08 69 */	bl updateCalcBoid___Q43ebi5title6Pikmin4TMgrFv
/* 803E4600 003E1540  3B A0 00 00 */	li r29, 0
/* 803E4604 003E1544  3B C0 00 00 */	li r30, 0
.L_803E4608:
/* 803E4608 003E1548  80 1F 02 AC */	lwz r0, 0x2ac(r31)
/* 803E460C 003E154C  7C 60 F2 14 */	add r3, r0, r30
/* 803E4610 003E1550  48 00 12 A9 */	bl update__Q43ebi5title6Pikmin5TUnitFv
/* 803E4614 003E1554  3B BD 00 01 */	addi r29, r29, 1
/* 803E4618 003E1558  3B DE 00 98 */	addi r30, r30, 0x98
/* 803E461C 003E155C  2C 1D 01 F4 */	cmpwi r29, 0x1f4
/* 803E4620 003E1560  41 80 FF E8 */	blt .L_803E4608
/* 803E4624 003E1564  3B A0 00 00 */	li r29, 0
/* 803E4628 003E1568  3B C0 00 00 */	li r30, 0
.L_803E462C:
/* 803E462C 003E156C  80 1F 02 AC */	lwz r0, 0x2ac(r31)
/* 803E4630 003E1570  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803E4634 003E1574  7C 80 F2 14 */	add r4, r0, r30
/* 803E4638 003E1578  4B FD A7 F5 */	bl inField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase
/* 803E463C 003E157C  3B BD 00 01 */	addi r29, r29, 1
/* 803E4640 003E1580  3B DE 00 98 */	addi r30, r30, 0x98
/* 803E4644 003E1584  2C 1D 01 F4 */	cmpwi r29, 0x1f4
/* 803E4648 003E1588  41 80 FF E4 */	blt .L_803E462C
/* 803E464C 003E158C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803E4650 003E1590  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803E4654 003E1594  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803E4658 003E1598  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803E465C 003E159C  7C 08 03 A6 */	mtlr r0
/* 803E4660 003E15A0  38 21 00 30 */	addi r1, r1, 0x30
/* 803E4664 003E15A4  4E 80 00 20 */	blr 
.endfn update__Q43ebi5title6Pikmin4TMgrFv

.fn "setStartPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>", global
/* 803E4668 003E15A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E466C 003E15AC  38 00 00 3E */	li r0, 0x3e
/* 803E4670 003E15B0  7C 87 23 78 */	mr r7, r4
/* 803E4674 003E15B4  38 C0 00 00 */	li r6, 0
/* 803E4678 003E15B8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E467C 003E15BC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4680 003E15C0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4684 003E15C4  3B A0 00 00 */	li r29, 0
/* 803E4688 003E15C8  7C 09 03 A6 */	mtctr r0
.L_803E468C:
/* 803E468C 003E15CC  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4690 003E15D0  3B C6 00 98 */	addi r30, r6, 0x98
/* 803E4694 003E15D4  C0 07 00 00 */	lfs f0, 0(r7)
/* 803E4698 003E15D8  3B E6 01 30 */	addi r31, r6, 0x130
/* 803E469C 003E15DC  7C A0 32 14 */	add r5, r0, r6
/* 803E46A0 003E15E0  39 86 01 C8 */	addi r12, r6, 0x1c8
/* 803E46A4 003E15E4  D0 05 00 04 */	stfs f0, 4(r5)
/* 803E46A8 003E15E8  39 66 02 60 */	addi r11, r6, 0x260
/* 803E46AC 003E15EC  39 46 02 F8 */	addi r10, r6, 0x2f8
/* 803E46B0 003E15F0  39 26 03 90 */	addi r9, r6, 0x390
/* 803E46B4 003E15F4  C0 07 00 04 */	lfs f0, 4(r7)
/* 803E46B8 003E15F8  39 06 04 28 */	addi r8, r6, 0x428
/* 803E46BC 003E15FC  38 C6 04 C0 */	addi r6, r6, 0x4c0
/* 803E46C0 003E1600  3B BD 00 08 */	addi r29, r29, 8
/* 803E46C4 003E1604  D0 05 00 08 */	stfs f0, 8(r5)
/* 803E46C8 003E1608  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E46CC 003E160C  C0 07 00 08 */	lfs f0, 8(r7)
/* 803E46D0 003E1610  7F C0 F2 14 */	add r30, r0, r30
/* 803E46D4 003E1614  D0 1E 00 04 */	stfs f0, 4(r30)
/* 803E46D8 003E1618  C0 07 00 0C */	lfs f0, 0xc(r7)
/* 803E46DC 003E161C  D0 1E 00 08 */	stfs f0, 8(r30)
/* 803E46E0 003E1620  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E46E4 003E1624  C0 07 00 10 */	lfs f0, 0x10(r7)
/* 803E46E8 003E1628  7F E0 FA 14 */	add r31, r0, r31
/* 803E46EC 003E162C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E46F0 003E1630  C0 07 00 14 */	lfs f0, 0x14(r7)
/* 803E46F4 003E1634  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E46F8 003E1638  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E46FC 003E163C  C0 07 00 18 */	lfs f0, 0x18(r7)
/* 803E4700 003E1640  7D 80 62 14 */	add r12, r0, r12
/* 803E4704 003E1644  D0 0C 00 04 */	stfs f0, 4(r12)
/* 803E4708 003E1648  C0 07 00 1C */	lfs f0, 0x1c(r7)
/* 803E470C 003E164C  D0 0C 00 08 */	stfs f0, 8(r12)
/* 803E4710 003E1650  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4714 003E1654  C0 07 00 20 */	lfs f0, 0x20(r7)
/* 803E4718 003E1658  7D 60 5A 14 */	add r11, r0, r11
/* 803E471C 003E165C  D0 0B 00 04 */	stfs f0, 4(r11)
/* 803E4720 003E1660  C0 07 00 24 */	lfs f0, 0x24(r7)
/* 803E4724 003E1664  D0 0B 00 08 */	stfs f0, 8(r11)
/* 803E4728 003E1668  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E472C 003E166C  C0 07 00 28 */	lfs f0, 0x28(r7)
/* 803E4730 003E1670  7D 40 52 14 */	add r10, r0, r10
/* 803E4734 003E1674  D0 0A 00 04 */	stfs f0, 4(r10)
/* 803E4738 003E1678  C0 07 00 2C */	lfs f0, 0x2c(r7)
/* 803E473C 003E167C  D0 0A 00 08 */	stfs f0, 8(r10)
/* 803E4740 003E1680  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4744 003E1684  C0 07 00 30 */	lfs f0, 0x30(r7)
/* 803E4748 003E1688  7D 20 4A 14 */	add r9, r0, r9
/* 803E474C 003E168C  D0 09 00 04 */	stfs f0, 4(r9)
/* 803E4750 003E1690  C0 07 00 34 */	lfs f0, 0x34(r7)
/* 803E4754 003E1694  D0 09 00 08 */	stfs f0, 8(r9)
/* 803E4758 003E1698  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E475C 003E169C  C0 07 00 38 */	lfs f0, 0x38(r7)
/* 803E4760 003E16A0  7D 00 42 14 */	add r8, r0, r8
/* 803E4764 003E16A4  D0 08 00 04 */	stfs f0, 4(r8)
/* 803E4768 003E16A8  C0 07 00 3C */	lfs f0, 0x3c(r7)
/* 803E476C 003E16AC  38 E7 00 40 */	addi r7, r7, 0x40
/* 803E4770 003E16B0  D0 08 00 08 */	stfs f0, 8(r8)
/* 803E4774 003E16B4  42 00 FF 18 */	bdnz .L_803E468C
/* 803E4778 003E16B8  57 A5 18 38 */	slwi r5, r29, 3
/* 803E477C 003E16BC  20 1D 01 F4 */	subfic r0, r29, 0x1f4
/* 803E4780 003E16C0  1C DD 00 98 */	mulli r6, r29, 0x98
/* 803E4784 003E16C4  7C 84 2A 14 */	add r4, r4, r5
/* 803E4788 003E16C8  7C 09 03 A6 */	mtctr r0
/* 803E478C 003E16CC  2C 1D 01 F4 */	cmpwi r29, 0x1f4
/* 803E4790 003E16D0  40 80 00 28 */	bge .L_803E47B8
.L_803E4794:
/* 803E4794 003E16D4  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4798 003E16D8  C0 04 00 00 */	lfs f0, 0(r4)
/* 803E479C 003E16DC  7C A0 32 14 */	add r5, r0, r6
/* 803E47A0 003E16E0  38 C6 00 98 */	addi r6, r6, 0x98
/* 803E47A4 003E16E4  D0 05 00 04 */	stfs f0, 4(r5)
/* 803E47A8 003E16E8  C0 04 00 04 */	lfs f0, 4(r4)
/* 803E47AC 003E16EC  38 84 00 08 */	addi r4, r4, 8
/* 803E47B0 003E16F0  D0 05 00 08 */	stfs f0, 8(r5)
/* 803E47B4 003E16F4  42 00 FF E0 */	bdnz .L_803E4794
.L_803E47B8:
/* 803E47B8 003E16F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E47BC 003E16FC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E47C0 003E1700  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E47C4 003E1704  38 21 00 20 */	addi r1, r1, 0x20
/* 803E47C8 003E1708  4E 80 00 20 */	blr 
.endfn "setStartPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>"

.fn "setDestPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>", global
/* 803E47CC 003E170C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E47D0 003E1710  38 00 00 3E */	li r0, 0x3e
/* 803E47D4 003E1714  7C 87 23 78 */	mr r7, r4
/* 803E47D8 003E1718  38 C0 00 00 */	li r6, 0
/* 803E47DC 003E171C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E47E0 003E1720  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E47E4 003E1724  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E47E8 003E1728  3B A0 00 00 */	li r29, 0
/* 803E47EC 003E172C  7C 09 03 A6 */	mtctr r0
.L_803E47F0:
/* 803E47F0 003E1730  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E47F4 003E1734  3B C6 00 98 */	addi r30, r6, 0x98
/* 803E47F8 003E1738  C0 07 00 00 */	lfs f0, 0(r7)
/* 803E47FC 003E173C  3B E6 01 30 */	addi r31, r6, 0x130
/* 803E4800 003E1740  7C A0 32 14 */	add r5, r0, r6
/* 803E4804 003E1744  39 86 01 C8 */	addi r12, r6, 0x1c8
/* 803E4808 003E1748  D0 05 00 2C */	stfs f0, 0x2c(r5)
/* 803E480C 003E174C  39 66 02 60 */	addi r11, r6, 0x260
/* 803E4810 003E1750  39 46 02 F8 */	addi r10, r6, 0x2f8
/* 803E4814 003E1754  39 26 03 90 */	addi r9, r6, 0x390
/* 803E4818 003E1758  C0 07 00 04 */	lfs f0, 4(r7)
/* 803E481C 003E175C  39 06 04 28 */	addi r8, r6, 0x428
/* 803E4820 003E1760  38 C6 04 C0 */	addi r6, r6, 0x4c0
/* 803E4824 003E1764  3B BD 00 08 */	addi r29, r29, 8
/* 803E4828 003E1768  D0 05 00 30 */	stfs f0, 0x30(r5)
/* 803E482C 003E176C  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4830 003E1770  C0 07 00 08 */	lfs f0, 8(r7)
/* 803E4834 003E1774  7F C0 F2 14 */	add r30, r0, r30
/* 803E4838 003E1778  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 803E483C 003E177C  C0 07 00 0C */	lfs f0, 0xc(r7)
/* 803E4840 003E1780  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 803E4844 003E1784  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4848 003E1788  C0 07 00 10 */	lfs f0, 0x10(r7)
/* 803E484C 003E178C  7F E0 FA 14 */	add r31, r0, r31
/* 803E4850 003E1790  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 803E4854 003E1794  C0 07 00 14 */	lfs f0, 0x14(r7)
/* 803E4858 003E1798  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 803E485C 003E179C  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4860 003E17A0  C0 07 00 18 */	lfs f0, 0x18(r7)
/* 803E4864 003E17A4  7D 80 62 14 */	add r12, r0, r12
/* 803E4868 003E17A8  D0 0C 00 2C */	stfs f0, 0x2c(r12)
/* 803E486C 003E17AC  C0 07 00 1C */	lfs f0, 0x1c(r7)
/* 803E4870 003E17B0  D0 0C 00 30 */	stfs f0, 0x30(r12)
/* 803E4874 003E17B4  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4878 003E17B8  C0 07 00 20 */	lfs f0, 0x20(r7)
/* 803E487C 003E17BC  7D 60 5A 14 */	add r11, r0, r11
/* 803E4880 003E17C0  D0 0B 00 2C */	stfs f0, 0x2c(r11)
/* 803E4884 003E17C4  C0 07 00 24 */	lfs f0, 0x24(r7)
/* 803E4888 003E17C8  D0 0B 00 30 */	stfs f0, 0x30(r11)
/* 803E488C 003E17CC  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E4890 003E17D0  C0 07 00 28 */	lfs f0, 0x28(r7)
/* 803E4894 003E17D4  7D 40 52 14 */	add r10, r0, r10
/* 803E4898 003E17D8  D0 0A 00 2C */	stfs f0, 0x2c(r10)
/* 803E489C 003E17DC  C0 07 00 2C */	lfs f0, 0x2c(r7)
/* 803E48A0 003E17E0  D0 0A 00 30 */	stfs f0, 0x30(r10)
/* 803E48A4 003E17E4  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E48A8 003E17E8  C0 07 00 30 */	lfs f0, 0x30(r7)
/* 803E48AC 003E17EC  7D 20 4A 14 */	add r9, r0, r9
/* 803E48B0 003E17F0  D0 09 00 2C */	stfs f0, 0x2c(r9)
/* 803E48B4 003E17F4  C0 07 00 34 */	lfs f0, 0x34(r7)
/* 803E48B8 003E17F8  D0 09 00 30 */	stfs f0, 0x30(r9)
/* 803E48BC 003E17FC  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E48C0 003E1800  C0 07 00 38 */	lfs f0, 0x38(r7)
/* 803E48C4 003E1804  7D 00 42 14 */	add r8, r0, r8
/* 803E48C8 003E1808  D0 08 00 2C */	stfs f0, 0x2c(r8)
/* 803E48CC 003E180C  C0 07 00 3C */	lfs f0, 0x3c(r7)
/* 803E48D0 003E1810  38 E7 00 40 */	addi r7, r7, 0x40
/* 803E48D4 003E1814  D0 08 00 30 */	stfs f0, 0x30(r8)
/* 803E48D8 003E1818  42 00 FF 18 */	bdnz .L_803E47F0
/* 803E48DC 003E181C  57 A5 18 38 */	slwi r5, r29, 3
/* 803E48E0 003E1820  20 1D 01 F4 */	subfic r0, r29, 0x1f4
/* 803E48E4 003E1824  1C DD 00 98 */	mulli r6, r29, 0x98
/* 803E48E8 003E1828  7C 84 2A 14 */	add r4, r4, r5
/* 803E48EC 003E182C  7C 09 03 A6 */	mtctr r0
/* 803E48F0 003E1830  2C 1D 01 F4 */	cmpwi r29, 0x1f4
/* 803E48F4 003E1834  40 80 00 28 */	bge .L_803E491C
.L_803E48F8:
/* 803E48F8 003E1838  80 03 02 AC */	lwz r0, 0x2ac(r3)
/* 803E48FC 003E183C  C0 04 00 00 */	lfs f0, 0(r4)
/* 803E4900 003E1840  7C A0 32 14 */	add r5, r0, r6
/* 803E4904 003E1844  38 C6 00 98 */	addi r6, r6, 0x98
/* 803E4908 003E1848  D0 05 00 2C */	stfs f0, 0x2c(r5)
/* 803E490C 003E184C  C0 04 00 04 */	lfs f0, 4(r4)
/* 803E4910 003E1850  38 84 00 08 */	addi r4, r4, 8
/* 803E4914 003E1854  D0 05 00 30 */	stfs f0, 0x30(r5)
/* 803E4918 003E1858  42 00 FF E0 */	bdnz .L_803E48F8
.L_803E491C:
/* 803E491C 003E185C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4920 003E1860  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4924 003E1864  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4928 003E1868  38 21 00 20 */	addi r1, r1, 0x20
/* 803E492C 003E186C  4E 80 00 20 */	blr 
.endfn "setDestPos__Q43ebi5title6Pikmin4TMgrFP10Vector2<f>"

.fn forceArriveDest__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E4930 003E1870  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E4934 003E1874  7C 08 02 A6 */	mflr r0
/* 803E4938 003E1878  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E493C 003E187C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4940 003E1880  3B E0 00 00 */	li r31, 0
/* 803E4944 003E1884  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4948 003E1888  3B C0 00 00 */	li r30, 0
/* 803E494C 003E188C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4950 003E1890  7C 7D 1B 78 */	mr r29, r3
.L_803E4954:
/* 803E4954 003E1894  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4958 003E1898  7C 60 FA 14 */	add r3, r0, r31
/* 803E495C 003E189C  48 00 0D A5 */	bl alive__Q43ebi5title6Pikmin5TUnitFv
/* 803E4960 003E18A0  3B DE 00 01 */	addi r30, r30, 1
/* 803E4964 003E18A4  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4968 003E18A8  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E496C 003E18AC  41 80 FF E8 */	blt .L_803E4954
/* 803E4970 003E18B0  80 7D 02 C8 */	lwz r3, 0x2c8(r29)
/* 803E4974 003E18B4  38 00 00 00 */	li r0, 0
/* 803E4978 003E18B8  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E497C 003E18BC  90 7D 02 CC */	stw r3, 0x2cc(r29)
/* 803E4980 003E18C0  90 1D 02 C8 */	stw r0, 0x2c8(r29)
/* 803E4984 003E18C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E4988 003E18C8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E498C 003E18CC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E4990 003E18D0  4B CD D1 BD */	bl __cvt_fp2unsigned
/* 803E4994 003E18D4  90 7D 09 80 */	stw r3, 0x980(r29)
/* 803E4998 003E18D8  3B C0 00 00 */	li r30, 0
/* 803E499C 003E18DC  3B E0 00 00 */	li r31, 0
/* 803E49A0 003E18E0  90 7D 09 84 */	stw r3, 0x984(r29)
.L_803E49A4:
/* 803E49A4 003E18E4  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E49A8 003E18E8  38 80 00 01 */	li r4, 1
/* 803E49AC 003E18EC  7C 60 FA 14 */	add r3, r0, r31
/* 803E49B0 003E18F0  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 803E49B4 003E18F4  D0 03 00 04 */	stfs f0, 4(r3)
/* 803E49B8 003E18F8  C0 03 00 30 */	lfs f0, 0x30(r3)
/* 803E49BC 003E18FC  D0 03 00 08 */	stfs f0, 8(r3)
/* 803E49C0 003E1900  48 00 0D A9 */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
/* 803E49C4 003E1904  3B DE 00 01 */	addi r30, r30, 1
/* 803E49C8 003E1908  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E49CC 003E190C  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E49D0 003E1910  41 80 FF D4 */	blt .L_803E49A4
/* 803E49D4 003E1914  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E49D8 003E1918  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E49DC 003E191C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E49E0 003E1920  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E49E4 003E1924  7C 08 03 A6 */	mtlr r0
/* 803E49E8 003E1928  38 21 00 20 */	addi r1, r1, 0x20
/* 803E49EC 003E192C  4E 80 00 20 */	blr 
.endfn forceArriveDest__Q43ebi5title6Pikmin4TMgrFv

.fn assemble__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E49F0 003E1930  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E49F4 003E1934  7C 08 02 A6 */	mflr r0
/* 803E49F8 003E1938  C0 22 19 10 */	lfs f1, lbl_8051FC70@sda21(r2)
/* 803E49FC 003E193C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E4A00 003E1940  38 00 00 00 */	li r0, 0
/* 803E4A04 003E1944  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4A08 003E1948  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4A0C 003E194C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4A10 003E1950  7C 7D 1B 78 */	mr r29, r3
/* 803E4A14 003E1954  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 803E4A18 003E1958  90 7D 02 CC */	stw r3, 0x2cc(r29)
/* 803E4A1C 003E195C  90 1D 02 C8 */	stw r0, 0x2c8(r29)
/* 803E4A20 003E1960  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E4A24 003E1964  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E4A28 003E1968  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E4A2C 003E196C  4B CD D1 21 */	bl __cvt_fp2unsigned
/* 803E4A30 003E1970  90 7D 09 80 */	stw r3, 0x980(r29)
/* 803E4A34 003E1974  3B C0 00 00 */	li r30, 0
/* 803E4A38 003E1978  3B E0 00 00 */	li r31, 0
/* 803E4A3C 003E197C  90 7D 09 84 */	stw r3, 0x984(r29)
.L_803E4A40:
/* 803E4A40 003E1980  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4A44 003E1984  7C 60 FA 14 */	add r3, r0, r31
/* 803E4A48 003E1988  48 00 0B B5 */	bl goDestination__Q43ebi5title6Pikmin5TUnitFv
/* 803E4A4C 003E198C  3B DE 00 01 */	addi r30, r30, 1
/* 803E4A50 003E1990  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4A54 003E1994  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4A58 003E1998  41 80 FF E8 */	blt .L_803E4A40
/* 803E4A5C 003E199C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E4A60 003E19A0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4A64 003E19A4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4A68 003E19A8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4A6C 003E19AC  7C 08 03 A6 */	mtlr r0
/* 803E4A70 003E19B0  38 21 00 20 */	addi r1, r1, 0x20
/* 803E4A74 003E19B4  4E 80 00 20 */	blr 
.endfn assemble__Q43ebi5title6Pikmin4TMgrFv

.fn quickAssemble__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E4A78 003E19B8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E4A7C 003E19BC  7C 08 02 A6 */	mflr r0
/* 803E4A80 003E19C0  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E4A84 003E19C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E4A88 003E19C8  38 00 00 01 */	li r0, 1
/* 803E4A8C 003E19CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4A90 003E19D0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4A94 003E19D4  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4A98 003E19D8  7C 7D 1B 78 */	mr r29, r3
/* 803E4A9C 003E19DC  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 803E4AA0 003E19E0  90 7D 02 CC */	stw r3, 0x2cc(r29)
/* 803E4AA4 003E19E4  90 1D 02 C8 */	stw r0, 0x2c8(r29)
/* 803E4AA8 003E19E8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E4AAC 003E19EC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E4AB0 003E19F0  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E4AB4 003E19F4  4B CD D0 99 */	bl __cvt_fp2unsigned
/* 803E4AB8 003E19F8  90 7D 09 80 */	stw r3, 0x980(r29)
/* 803E4ABC 003E19FC  3B C0 00 00 */	li r30, 0
/* 803E4AC0 003E1A00  3B E0 00 00 */	li r31, 0
/* 803E4AC4 003E1A04  90 7D 09 84 */	stw r3, 0x984(r29)
.L_803E4AC8:
/* 803E4AC8 003E1A08  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4ACC 003E1A0C  7C 60 FA 14 */	add r3, r0, r31
/* 803E4AD0 003E1A10  48 00 0B 2D */	bl goDestination__Q43ebi5title6Pikmin5TUnitFv
/* 803E4AD4 003E1A14  3B DE 00 01 */	addi r30, r30, 1
/* 803E4AD8 003E1A18  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4ADC 003E1A1C  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4AE0 003E1A20  41 80 FF E8 */	blt .L_803E4AC8
/* 803E4AE4 003E1A24  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E4AE8 003E1A28  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4AEC 003E1A2C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4AF0 003E1A30  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4AF4 003E1A34  7C 08 03 A6 */	mtlr r0
/* 803E4AF8 003E1A38  38 21 00 20 */	addi r1, r1, 0x20
/* 803E4AFC 003E1A3C  4E 80 00 20 */	blr 
.endfn quickAssemble__Q43ebi5title6Pikmin4TMgrFv

.fn startBoid1__Q43ebi5title6Pikmin4TMgrFf, global
/* 803E4B00 003E1A40  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E4B04 003E1A44  7C 08 02 A6 */	mflr r0
/* 803E4B08 003E1A48  C0 02 19 60 */	lfs f0, lbl_8051FCC0@sda21(r2)
/* 803E4B0C 003E1A4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E4B10 003E1A50  38 00 00 02 */	li r0, 2
/* 803E4B14 003E1A54  EC 21 00 32 */	fmuls f1, f1, f0
/* 803E4B18 003E1A58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4B1C 003E1A5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4B20 003E1A60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4B24 003E1A64  7C 7D 1B 78 */	mr r29, r3
/* 803E4B28 003E1A68  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 803E4B2C 003E1A6C  90 7D 02 CC */	stw r3, 0x2cc(r29)
/* 803E4B30 003E1A70  90 1D 02 C8 */	stw r0, 0x2c8(r29)
/* 803E4B34 003E1A74  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E4B38 003E1A78  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E4B3C 003E1A7C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E4B40 003E1A80  4B CD D0 0D */	bl __cvt_fp2unsigned
/* 803E4B44 003E1A84  90 7D 09 80 */	stw r3, 0x980(r29)
/* 803E4B48 003E1A88  3B C0 00 00 */	li r30, 0
/* 803E4B4C 003E1A8C  3B E0 00 00 */	li r31, 0
/* 803E4B50 003E1A90  90 7D 09 84 */	stw r3, 0x984(r29)
.L_803E4B54:
/* 803E4B54 003E1A94  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4B58 003E1A98  38 80 00 04 */	li r4, 4
/* 803E4B5C 003E1A9C  7C 60 FA 14 */	add r3, r0, r31
/* 803E4B60 003E1AA0  48 00 0C 09 */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
/* 803E4B64 003E1AA4  3B DE 00 01 */	addi r30, r30, 1
/* 803E4B68 003E1AA8  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4B6C 003E1AAC  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4B70 003E1AB0  41 80 FF E4 */	blt .L_803E4B54
/* 803E4B74 003E1AB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E4B78 003E1AB8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4B7C 003E1ABC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4B80 003E1AC0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4B84 003E1AC4  7C 08 03 A6 */	mtlr r0
/* 803E4B88 003E1AC8  38 21 00 20 */	addi r1, r1, 0x20
/* 803E4B8C 003E1ACC  4E 80 00 20 */	blr 
.endfn startBoid1__Q43ebi5title6Pikmin4TMgrFf

.fn startBoid2__Q43ebi5title6Pikmin4TMgrFf, global
/* 803E4B90 003E1AD0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E4B94 003E1AD4  7C 08 02 A6 */	mflr r0
/* 803E4B98 003E1AD8  C0 02 19 60 */	lfs f0, lbl_8051FCC0@sda21(r2)
/* 803E4B9C 003E1ADC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E4BA0 003E1AE0  38 00 00 03 */	li r0, 3
/* 803E4BA4 003E1AE4  EC 21 00 32 */	fmuls f1, f1, f0
/* 803E4BA8 003E1AE8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4BAC 003E1AEC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4BB0 003E1AF0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4BB4 003E1AF4  7C 7D 1B 78 */	mr r29, r3
/* 803E4BB8 003E1AF8  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 803E4BBC 003E1AFC  90 7D 02 CC */	stw r3, 0x2cc(r29)
/* 803E4BC0 003E1B00  90 1D 02 C8 */	stw r0, 0x2c8(r29)
/* 803E4BC4 003E1B04  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E4BC8 003E1B08  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E4BCC 003E1B0C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E4BD0 003E1B10  4B CD CF 7D */	bl __cvt_fp2unsigned
/* 803E4BD4 003E1B14  90 7D 09 80 */	stw r3, 0x980(r29)
/* 803E4BD8 003E1B18  3B C0 00 00 */	li r30, 0
/* 803E4BDC 003E1B1C  3B E0 00 00 */	li r31, 0
/* 803E4BE0 003E1B20  90 7D 09 84 */	stw r3, 0x984(r29)
.L_803E4BE4:
/* 803E4BE4 003E1B24  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4BE8 003E1B28  38 80 00 04 */	li r4, 4
/* 803E4BEC 003E1B2C  7C 60 FA 14 */	add r3, r0, r31
/* 803E4BF0 003E1B30  48 00 0B 79 */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
/* 803E4BF4 003E1B34  3B DE 00 01 */	addi r30, r30, 1
/* 803E4BF8 003E1B38  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4BFC 003E1B3C  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4C00 003E1B40  41 80 FF E4 */	blt .L_803E4BE4
/* 803E4C04 003E1B44  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E4C08 003E1B48  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4C0C 003E1B4C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4C10 003E1B50  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4C14 003E1B54  7C 08 03 A6 */	mtlr r0
/* 803E4C18 003E1B58  38 21 00 20 */	addi r1, r1, 0x20
/* 803E4C1C 003E1B5C  4E 80 00 20 */	blr 
.endfn startBoid2__Q43ebi5title6Pikmin4TMgrFf

.fn startBoid3__Q43ebi5title6Pikmin4TMgrFf, global
/* 803E4C20 003E1B60  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E4C24 003E1B64  7C 08 02 A6 */	mflr r0
/* 803E4C28 003E1B68  C0 02 19 60 */	lfs f0, lbl_8051FCC0@sda21(r2)
/* 803E4C2C 003E1B6C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E4C30 003E1B70  38 00 00 04 */	li r0, 4
/* 803E4C34 003E1B74  EC 21 00 32 */	fmuls f1, f1, f0
/* 803E4C38 003E1B78  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4C3C 003E1B7C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4C40 003E1B80  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4C44 003E1B84  7C 7D 1B 78 */	mr r29, r3
/* 803E4C48 003E1B88  80 63 02 C8 */	lwz r3, 0x2c8(r3)
/* 803E4C4C 003E1B8C  90 7D 02 CC */	stw r3, 0x2cc(r29)
/* 803E4C50 003E1B90  90 1D 02 C8 */	stw r0, 0x2c8(r29)
/* 803E4C54 003E1B94  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E4C58 003E1B98  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E4C5C 003E1B9C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E4C60 003E1BA0  4B CD CE ED */	bl __cvt_fp2unsigned
/* 803E4C64 003E1BA4  90 7D 09 80 */	stw r3, 0x980(r29)
/* 803E4C68 003E1BA8  3B C0 00 00 */	li r30, 0
/* 803E4C6C 003E1BAC  3B E0 00 00 */	li r31, 0
/* 803E4C70 003E1BB0  90 7D 09 84 */	stw r3, 0x984(r29)
.L_803E4C74:
/* 803E4C74 003E1BB4  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4C78 003E1BB8  38 80 00 04 */	li r4, 4
/* 803E4C7C 003E1BBC  7C 60 FA 14 */	add r3, r0, r31
/* 803E4C80 003E1BC0  48 00 0A E9 */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
/* 803E4C84 003E1BC4  3B DE 00 01 */	addi r30, r30, 1
/* 803E4C88 003E1BC8  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4C8C 003E1BCC  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4C90 003E1BD0  41 80 FF E4 */	blt .L_803E4C74
/* 803E4C94 003E1BD4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E4C98 003E1BD8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4C9C 003E1BDC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4CA0 003E1BE0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4CA4 003E1BE4  7C 08 03 A6 */	mtlr r0
/* 803E4CA8 003E1BE8  38 21 00 20 */	addi r1, r1, 0x20
/* 803E4CAC 003E1BEC  4E 80 00 20 */	blr 
.endfn startBoid3__Q43ebi5title6Pikmin4TMgrFf

.fn startWindBlow__Q43ebi5title6Pikmin4TMgrFRQ23ebi8EGEBox2f, global
/* 803E4CB0 003E1BF0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803E4CB4 003E1BF4  7C 08 02 A6 */	mflr r0
/* 803E4CB8 003E1BF8  90 01 00 34 */	stw r0, 0x34(r1)
/* 803E4CBC 003E1BFC  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 803E4CC0 003E1C00  7C 7B 1B 78 */	mr r27, r3
/* 803E4CC4 003E1C04  7C 9C 23 78 */	mr r28, r4
/* 803E4CC8 003E1C08  3B C0 00 00 */	li r30, 0
/* 803E4CCC 003E1C0C  3B E0 00 00 */	li r31, 0
.L_803E4CD0:
/* 803E4CD0 003E1C10  80 1B 02 AC */	lwz r0, 0x2ac(r27)
/* 803E4CD4 003E1C14  7F A0 FA 14 */	add r29, r0, r31
/* 803E4CD8 003E1C18  7F A3 EB 78 */	mr r3, r29
/* 803E4CDC 003E1C1C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803E4CE0 003E1C20  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E4CE4 003E1C24  7D 89 03 A6 */	mtctr r12
/* 803E4CE8 003E1C28  4E 80 04 21 */	bctrl 
/* 803E4CEC 003E1C2C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E4CF0 003E1C30  41 82 00 38 */	beq .L_803E4D28
/* 803E4CF4 003E1C34  C0 3D 00 08 */	lfs f1, 8(r29)
/* 803E4CF8 003E1C38  7F 83 E3 78 */	mr r3, r28
/* 803E4CFC 003E1C3C  C0 1D 00 04 */	lfs f0, 4(r29)
/* 803E4D00 003E1C40  38 81 00 08 */	addi r4, r1, 8
/* 803E4D04 003E1C44  D0 01 00 08 */	stfs f0, 8(r1)
/* 803E4D08 003E1C48  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803E4D0C 003E1C4C  4B FE 52 E9 */	bl "isOut__Q23ebi8EGEBox2fFR10Vector2<f>"
/* 803E4D10 003E1C50  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E4D14 003E1C54  40 82 00 14 */	bne .L_803E4D28
/* 803E4D18 003E1C58  80 1B 02 AC */	lwz r0, 0x2ac(r27)
/* 803E4D1C 003E1C5C  38 80 00 03 */	li r4, 3
/* 803E4D20 003E1C60  7C 60 FA 14 */	add r3, r0, r31
/* 803E4D24 003E1C64  48 00 0A 45 */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
.L_803E4D28:
/* 803E4D28 003E1C68  3B DE 00 01 */	addi r30, r30, 1
/* 803E4D2C 003E1C6C  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4D30 003E1C70  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4D34 003E1C74  41 80 FF 9C */	blt .L_803E4CD0
/* 803E4D38 003E1C78  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 803E4D3C 003E1C7C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803E4D40 003E1C80  7C 08 03 A6 */	mtlr r0
/* 803E4D44 003E1C84  38 21 00 30 */	addi r1, r1, 0x30
/* 803E4D48 003E1C88  4E 80 00 20 */	blr 
.endfn startWindBlow__Q43ebi5title6Pikmin4TMgrFRQ23ebi8EGEBox2f

.fn startDemo__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E4D4C 003E1C8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E4D50 003E1C90  7C 08 02 A6 */	mflr r0
/* 803E4D54 003E1C94  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E4D58 003E1C98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4D5C 003E1C9C  3B E0 00 00 */	li r31, 0
/* 803E4D60 003E1CA0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4D64 003E1CA4  3B C0 00 00 */	li r30, 0
/* 803E4D68 003E1CA8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4D6C 003E1CAC  7C 7D 1B 78 */	mr r29, r3
.L_803E4D70:
/* 803E4D70 003E1CB0  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4D74 003E1CB4  7C 60 FA 14 */	add r3, r0, r31
/* 803E4D78 003E1CB8  48 00 09 89 */	bl alive__Q43ebi5title6Pikmin5TUnitFv
/* 803E4D7C 003E1CBC  3B DE 00 01 */	addi r30, r30, 1
/* 803E4D80 003E1CC0  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4D84 003E1CC4  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4D88 003E1CC8  41 80 FF E8 */	blt .L_803E4D70
/* 803E4D8C 003E1CCC  80 7D 02 C8 */	lwz r3, 0x2c8(r29)
/* 803E4D90 003E1CD0  38 00 00 01 */	li r0, 1
/* 803E4D94 003E1CD4  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E4D98 003E1CD8  90 7D 02 CC */	stw r3, 0x2cc(r29)
/* 803E4D9C 003E1CDC  90 1D 02 C8 */	stw r0, 0x2c8(r29)
/* 803E4DA0 003E1CE0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E4DA4 003E1CE4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E4DA8 003E1CE8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E4DAC 003E1CEC  4B CD CD A1 */	bl __cvt_fp2unsigned
/* 803E4DB0 003E1CF0  90 7D 09 80 */	stw r3, 0x980(r29)
/* 803E4DB4 003E1CF4  3B E0 00 00 */	li r31, 0
/* 803E4DB8 003E1CF8  7F FE FB 78 */	mr r30, r31
/* 803E4DBC 003E1CFC  90 7D 09 84 */	stw r3, 0x984(r29)
.L_803E4DC0:
/* 803E4DC0 003E1D00  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E4DC4 003E1D04  7C 60 F2 14 */	add r3, r0, r30
/* 803E4DC8 003E1D08  48 00 08 35 */	bl goDestination__Q43ebi5title6Pikmin5TUnitFv
/* 803E4DCC 003E1D0C  3B FF 00 01 */	addi r31, r31, 1
/* 803E4DD0 003E1D10  3B DE 00 98 */	addi r30, r30, 0x98
/* 803E4DD4 003E1D14  2C 1F 01 F4 */	cmpwi r31, 0x1f4
/* 803E4DD8 003E1D18  41 80 FF E8 */	blt .L_803E4DC0
/* 803E4DDC 003E1D1C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E4DE0 003E1D20  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4DE4 003E1D24  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4DE8 003E1D28  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4DEC 003E1D2C  7C 08 03 A6 */	mtlr r0
/* 803E4DF0 003E1D30  38 21 00 20 */	addi r1, r1, 0x20
/* 803E4DF4 003E1D34  4E 80 00 20 */	blr 
.endfn startDemo__Q43ebi5title6Pikmin4TMgrFv

.fn enemyPushOut__Q43ebi5title6Pikmin4TMgrFPQ33ebi5title8TObjBase, global
/* 803E4DF8 003E1D38  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E4DFC 003E1D3C  7C 08 02 A6 */	mflr r0
/* 803E4E00 003E1D40  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E4E04 003E1D44  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E4E08 003E1D48  3B E0 00 00 */	li r31, 0
/* 803E4E0C 003E1D4C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E4E10 003E1D50  3B C0 00 00 */	li r30, 0
/* 803E4E14 003E1D54  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E4E18 003E1D58  7C 9D 23 78 */	mr r29, r4
/* 803E4E1C 003E1D5C  93 81 00 10 */	stw r28, 0x10(r1)
/* 803E4E20 003E1D60  7C 7C 1B 78 */	mr r28, r3
.L_803E4E24:
/* 803E4E24 003E1D64  80 1C 02 AC */	lwz r0, 0x2ac(r28)
/* 803E4E28 003E1D68  7F A3 EB 78 */	mr r3, r29
/* 803E4E2C 003E1D6C  7C 80 FA 14 */	add r4, r0, r31
/* 803E4E30 003E1D70  4B FD BE 01 */	bl pushOut__Q33ebi5title8TObjBaseFPQ33ebi5title8TObjBase
/* 803E4E34 003E1D74  3B DE 00 01 */	addi r30, r30, 1
/* 803E4E38 003E1D78  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E4E3C 003E1D7C  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E4E40 003E1D80  41 80 FF E4 */	blt .L_803E4E24
/* 803E4E44 003E1D84  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E4E48 003E1D88  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E4E4C 003E1D8C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E4E50 003E1D90  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E4E54 003E1D94  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803E4E58 003E1D98  7C 08 03 A6 */	mtlr r0
/* 803E4E5C 003E1D9C  38 21 00 20 */	addi r1, r1, 0x20
/* 803E4E60 003E1DA0  4E 80 00 20 */	blr 
.endfn enemyPushOut__Q43ebi5title6Pikmin4TMgrFPQ33ebi5title8TObjBase

.fn updateCalcBoid___Q43ebi5title6Pikmin4TMgrFv, global
/* 803E4E64 003E1DA4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 803E4E68 003E1DA8  7C 08 02 A6 */	mflr r0
/* 803E4E6C 003E1DAC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803E4E70 003E1DB0  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 803E4E74 003E1DB4  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 803E4E78 003E1DB8  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 803E4E7C 003E1DBC  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 803E4E80 003E1DC0  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 803E4E84 003E1DC4  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 803E4E88 003E1DC8  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 803E4E8C 003E1DCC  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 803E4E90 003E1DD0  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 803E4E94 003E1DD4  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 803E4E98 003E1DD8  DB 41 00 40 */	stfd f26, 0x40(r1)
/* 803E4E9C 003E1DDC  F3 41 00 48 */	psq_st f26, 72(r1), 0, qr0
/* 803E4EA0 003E1DE0  BE E1 00 1C */	stmw r23, 0x1c(r1)
/* 803E4EA4 003E1DE4  88 0D 9A 74 */	lbz r0, init$4027@sda21(r13)
/* 803E4EA8 003E1DE8  7C 7F 1B 78 */	mr r31, r3
/* 803E4EAC 003E1DEC  7C 00 07 75 */	extsb. r0, r0
/* 803E4EB0 003E1DF0  40 82 00 14 */	bne .L_803E4EC4
/* 803E4EB4 003E1DF4  38 60 00 00 */	li r3, 0
/* 803E4EB8 003E1DF8  38 00 00 01 */	li r0, 1
/* 803E4EBC 003E1DFC  90 6D 9A 70 */	stw r3, boidCalcTimer$4026@sda21(r13)
/* 803E4EC0 003E1E00  98 0D 9A 74 */	stb r0, init$4027@sda21(r13)
.L_803E4EC4:
/* 803E4EC4 003E1E04  80 6D 9A 70 */	lwz r3, boidCalcTimer$4026@sda21(r13)
/* 803E4EC8 003E1E08  38 03 00 01 */	addi r0, r3, 1
/* 803E4ECC 003E1E0C  2C 00 00 0A */	cmpwi r0, 0xa
/* 803E4ED0 003E1E10  90 0D 9A 70 */	stw r0, boidCalcTimer$4026@sda21(r13)
/* 803E4ED4 003E1E14  41 80 00 C0 */	blt .L_803E4F94
/* 803E4ED8 003E1E18  3B C0 00 00 */	li r30, 0
/* 803E4EDC 003E1E1C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E4EE0 003E1E20  93 CD 9A 70 */	stw r30, boidCalcTimer$4026@sda21(r13)
/* 803E4EE4 003E1E24  3B A0 00 00 */	li r29, 0
/* 803E4EE8 003E1E28  3B 80 00 00 */	li r28, 0
/* 803E4EEC 003E1E2C  D0 1F 09 88 */	stfs f0, 0x988(r31)
/* 803E4EF0 003E1E30  D0 1F 09 8C */	stfs f0, 0x98c(r31)
.L_803E4EF4:
/* 803E4EF4 003E1E34  80 1F 02 AC */	lwz r0, 0x2ac(r31)
/* 803E4EF8 003E1E38  7C 60 F2 14 */	add r3, r0, r30
/* 803E4EFC 003E1E3C  81 83 00 00 */	lwz r12, 0(r3)
/* 803E4F00 003E1E40  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E4F04 003E1E44  7D 89 03 A6 */	mtctr r12
/* 803E4F08 003E1E48  4E 80 04 21 */	bctrl 
/* 803E4F0C 003E1E4C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E4F10 003E1E50  41 82 00 30 */	beq .L_803E4F40
/* 803E4F14 003E1E54  80 1F 02 AC */	lwz r0, 0x2ac(r31)
/* 803E4F18 003E1E58  3B BD 00 01 */	addi r29, r29, 1
/* 803E4F1C 003E1E5C  C0 3F 09 88 */	lfs f1, 0x988(r31)
/* 803E4F20 003E1E60  7C 60 F2 14 */	add r3, r0, r30
/* 803E4F24 003E1E64  C0 7F 09 8C */	lfs f3, 0x98c(r31)
/* 803E4F28 003E1E68  C0 03 00 04 */	lfs f0, 4(r3)
/* 803E4F2C 003E1E6C  C0 43 00 08 */	lfs f2, 8(r3)
/* 803E4F30 003E1E70  EC 01 00 2A */	fadds f0, f1, f0
/* 803E4F34 003E1E74  EC 23 10 2A */	fadds f1, f3, f2
/* 803E4F38 003E1E78  D0 1F 09 88 */	stfs f0, 0x988(r31)
/* 803E4F3C 003E1E7C  D0 3F 09 8C */	stfs f1, 0x98c(r31)
.L_803E4F40:
/* 803E4F40 003E1E80  3B 9C 00 01 */	addi r28, r28, 1
/* 803E4F44 003E1E84  3B DE 00 98 */	addi r30, r30, 0x98
/* 803E4F48 003E1E88  2C 1C 01 F4 */	cmpwi r28, 0x1f4
/* 803E4F4C 003E1E8C  41 80 FF A8 */	blt .L_803E4EF4
/* 803E4F50 003E1E90  2C 1D 00 00 */	cmpwi r29, 0
/* 803E4F54 003E1E94  41 82 00 40 */	beq .L_803E4F94
/* 803E4F58 003E1E98  6F A3 80 00 */	xoris r3, r29, 0x8000
/* 803E4F5C 003E1E9C  3C 00 43 30 */	lis r0, 0x4330
/* 803E4F60 003E1EA0  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E4F64 003E1EA4  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E4F68 003E1EA8  90 01 00 08 */	stw r0, 8(r1)
/* 803E4F6C 003E1EAC  C0 62 19 30 */	lfs f3, lbl_8051FC90@sda21(r2)
/* 803E4F70 003E1EB0  C8 21 00 08 */	lfd f1, 8(r1)
/* 803E4F74 003E1EB4  C0 1F 09 88 */	lfs f0, 0x988(r31)
/* 803E4F78 003E1EB8  EC 21 10 28 */	fsubs f1, f1, f2
/* 803E4F7C 003E1EBC  EC 23 08 24 */	fdivs f1, f3, f1
/* 803E4F80 003E1EC0  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E4F84 003E1EC4  D0 1F 09 88 */	stfs f0, 0x988(r31)
/* 803E4F88 003E1EC8  C0 1F 09 8C */	lfs f0, 0x98c(r31)
/* 803E4F8C 003E1ECC  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E4F90 003E1ED0  D0 1F 09 8C */	stfs f0, 0x98c(r31)
.L_803E4F94:
/* 803E4F94 003E1ED4  80 AD 9A 70 */	lwz r5, boidCalcTimer$4026@sda21(r13)
/* 803E4F98 003E1ED8  3C 60 66 66 */	lis r3, 0x66666667@ha
/* 803E4F9C 003E1EDC  38 83 66 67 */	addi r4, r3, 0x66666667@l
/* 803E4FA0 003E1EE0  1C 05 01 F4 */	mulli r0, r5, 0x1f4
/* 803E4FA4 003E1EE4  2C 05 00 09 */	cmpwi r5, 9
/* 803E4FA8 003E1EE8  7C 04 00 96 */	mulhw r0, r4, r0
/* 803E4FAC 003E1EEC  7C 00 16 70 */	srawi r0, r0, 2
/* 803E4FB0 003E1EF0  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803E4FB4 003E1EF4  7C C0 1A 14 */	add r6, r0, r3
/* 803E4FB8 003E1EF8  40 82 00 0C */	bne .L_803E4FC4
/* 803E4FBC 003E1EFC  3B 80 01 F4 */	li r28, 0x1f4
/* 803E4FC0 003E1F00  48 00 00 1C */	b .L_803E4FDC
.L_803E4FC4:
/* 803E4FC4 003E1F04  38 05 00 01 */	addi r0, r5, 1
/* 803E4FC8 003E1F08  1C 00 01 F4 */	mulli r0, r0, 0x1f4
/* 803E4FCC 003E1F0C  7C 04 00 96 */	mulhw r0, r4, r0
/* 803E4FD0 003E1F10  7C 00 16 70 */	srawi r0, r0, 2
/* 803E4FD4 003E1F14  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803E4FD8 003E1F18  7F 80 1A 14 */	add r28, r0, r3
.L_803E4FDC:
/* 803E4FDC 003E1F1C  1F A6 00 98 */	mulli r29, r6, 0x98
/* 803E4FE0 003E1F20  7C DB 33 78 */	mr r27, r6
/* 803E4FE4 003E1F24  48 00 01 EC */	b .L_803E51D0
.L_803E4FE8:
/* 803E4FE8 003E1F28  80 1F 02 AC */	lwz r0, 0x2ac(r31)
/* 803E4FEC 003E1F2C  7F 40 EA 14 */	add r26, r0, r29
/* 803E4FF0 003E1F30  7F 43 D3 78 */	mr r3, r26
/* 803E4FF4 003E1F34  48 00 07 51 */	bl isWalk__Q43ebi5title6Pikmin5TUnitFv
/* 803E4FF8 003E1F38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E4FFC 003E1F3C  41 82 01 CC */	beq .L_803E51C8
/* 803E5000 003E1F40  C0 9F 09 78 */	lfs f4, 0x978(r31)
/* 803E5004 003E1F44  3B 20 00 00 */	li r25, 0
/* 803E5008 003E1F48  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E500C 003E1F4C  3B 00 00 00 */	li r24, 0
/* 803E5010 003E1F50  C3 A2 19 00 */	lfs f29, lbl_8051FC60@sda21(r2)
/* 803E5014 003E1F54  3B C0 00 00 */	li r30, 0
/* 803E5018 003E1F58  C0 1F 09 8C */	lfs f0, 0x98c(r31)
/* 803E501C 003E1F5C  EC A1 20 28 */	fsubs f5, f1, f4
/* 803E5020 003E1F60  C0 5A 00 30 */	lfs f2, 0x30(r26)
/* 803E5024 003E1F64  FF 80 E8 90 */	fmr f28, f29
/* 803E5028 003E1F68  C0 3F 09 88 */	lfs f1, 0x988(r31)
/* 803E502C 003E1F6C  EC 60 01 32 */	fmuls f3, f0, f4
/* 803E5030 003E1F70  C0 1A 00 2C */	lfs f0, 0x2c(r26)
/* 803E5034 003E1F74  EC 42 01 72 */	fmuls f2, f2, f5
/* 803E5038 003E1F78  EC 21 01 32 */	fmuls f1, f1, f4
/* 803E503C 003E1F7C  EC 00 01 72 */	fmuls f0, f0, f5
/* 803E5040 003E1F80  FF 60 E8 90 */	fmr f27, f29
/* 803E5044 003E1F84  FF 40 E8 90 */	fmr f26, f29
/* 803E5048 003E1F88  EF E3 10 2A */	fadds f31, f3, f2
/* 803E504C 003E1F8C  EF C1 00 2A */	fadds f30, f1, f0
.L_803E5050:
/* 803E5050 003E1F90  80 1F 02 AC */	lwz r0, 0x2ac(r31)
/* 803E5054 003E1F94  7E E0 F2 14 */	add r23, r0, r30
/* 803E5058 003E1F98  7E E3 BB 78 */	mr r3, r23
/* 803E505C 003E1F9C  81 97 00 00 */	lwz r12, 0(r23)
/* 803E5060 003E1FA0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E5064 003E1FA4  7D 89 03 A6 */	mtctr r12
/* 803E5068 003E1FA8  4E 80 04 21 */	bctrl 
/* 803E506C 003E1FAC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E5070 003E1FB0  41 82 00 E0 */	beq .L_803E5150
/* 803E5074 003E1FB4  C0 5A 00 08 */	lfs f2, 8(r26)
/* 803E5078 003E1FB8  C0 17 00 08 */	lfs f0, 8(r23)
/* 803E507C 003E1FBC  C0 3A 00 04 */	lfs f1, 4(r26)
/* 803E5080 003E1FC0  EC C2 00 28 */	fsubs f6, f2, f0
/* 803E5084 003E1FC4  C0 17 00 04 */	lfs f0, 4(r23)
/* 803E5088 003E1FC8  C0 62 19 00 */	lfs f3, lbl_8051FC60@sda21(r2)
/* 803E508C 003E1FCC  EC A1 00 28 */	fsubs f5, f1, f0
/* 803E5090 003E1FD0  EC E6 01 B2 */	fmuls f7, f6, f6
/* 803E5094 003E1FD4  ED 05 39 7A */	fmadds f8, f5, f5, f7
/* 803E5098 003E1FD8  FC 08 18 40 */	fcmpo cr0, f8, f3
/* 803E509C 003E1FDC  40 81 00 18 */	ble .L_803E50B4
/* 803E50A0 003E1FE0  40 81 00 10 */	ble .L_803E50B0
/* 803E50A4 003E1FE4  FC 00 40 34 */	frsqrte f0, f8
/* 803E50A8 003E1FE8  EC 60 02 32 */	fmuls f3, f0, f8
/* 803E50AC 003E1FEC  48 00 00 08 */	b .L_803E50B4
.L_803E50B0:
/* 803E50B0 003E1FF0  FC 60 40 90 */	fmr f3, f8
.L_803E50B4:
/* 803E50B4 003E1FF4  C0 1F 09 7C */	lfs f0, 0x97c(r31)
/* 803E50B8 003E1FF8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803E50BC 003E1FFC  40 80 00 94 */	bge .L_803E5150
/* 803E50C0 003E2000  C0 97 00 14 */	lfs f4, 0x14(r23)
/* 803E50C4 003E2004  C0 17 00 0C */	lfs f0, 0xc(r23)
/* 803E50C8 003E2008  C0 37 00 10 */	lfs f1, 0x10(r23)
/* 803E50CC 003E200C  EC 40 01 32 */	fmuls f2, f0, f4
/* 803E50D0 003E2010  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E50D4 003E2014  EC 21 01 32 */	fmuls f1, f1, f4
/* 803E50D8 003E2018  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803E50DC 003E201C  EF BD 10 2A */	fadds f29, f29, f2
/* 803E50E0 003E2020  EF 9C 08 2A */	fadds f28, f28, f1
/* 803E50E4 003E2024  40 80 00 08 */	bge .L_803E50EC
/* 803E50E8 003E2028  FC 60 00 90 */	fmr f3, f0
.L_803E50EC:
/* 803E50EC 003E202C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E50F0 003E2030  FC 08 00 40 */	fcmpo cr0, f8, f0
/* 803E50F4 003E2034  40 81 00 1C */	ble .L_803E5110
/* 803E50F8 003E2038  EC 25 39 7A */	fmadds f1, f5, f5, f7
/* 803E50FC 003E203C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E5100 003E2040  40 81 00 14 */	ble .L_803E5114
/* 803E5104 003E2044  FC 00 08 34 */	frsqrte f0, f1
/* 803E5108 003E2048  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E510C 003E204C  48 00 00 08 */	b .L_803E5114
.L_803E5110:
/* 803E5110 003E2050  FC 20 00 90 */	fmr f1, f0
.L_803E5114:
/* 803E5114 003E2054  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5118 003E2058  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803E511C 003E205C  41 82 00 14 */	beq .L_803E5130
/* 803E5120 003E2060  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E5124 003E2064  EC 00 08 24 */	fdivs f0, f0, f1
/* 803E5128 003E2068  EC A5 00 32 */	fmuls f5, f5, f0
/* 803E512C 003E206C  EC C6 00 32 */	fmuls f6, f6, f0
.L_803E5130:
/* 803E5130 003E2070  EC 03 00 F2 */	fmuls f0, f3, f3
/* 803E5134 003E2074  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E5138 003E2078  3B 39 00 01 */	addi r25, r25, 1
/* 803E513C 003E207C  EC 01 00 24 */	fdivs f0, f1, f0
/* 803E5140 003E2080  EC 26 00 32 */	fmuls f1, f6, f0
/* 803E5144 003E2084  EC 05 00 32 */	fmuls f0, f5, f0
/* 803E5148 003E2088  EF 5A 08 2A */	fadds f26, f26, f1
/* 803E514C 003E208C  EF 7B 00 2A */	fadds f27, f27, f0
.L_803E5150:
/* 803E5150 003E2090  3B 18 00 01 */	addi r24, r24, 1
/* 803E5154 003E2094  3B DE 00 98 */	addi r30, r30, 0x98
/* 803E5158 003E2098  2C 18 01 F4 */	cmpwi r24, 0x1f4
/* 803E515C 003E209C  41 80 FE F4 */	blt .L_803E5050
/* 803E5160 003E20A0  2C 19 00 00 */	cmpwi r25, 0
/* 803E5164 003E20A4  40 82 00 18 */	bne .L_803E517C
/* 803E5168 003E20A8  C0 42 19 00 */	lfs f2, lbl_8051FC60@sda21(r2)
/* 803E516C 003E20AC  FC 60 10 90 */	fmr f3, f2
/* 803E5170 003E20B0  FC 20 10 90 */	fmr f1, f2
/* 803E5174 003E20B4  FC 00 10 90 */	fmr f0, f2
/* 803E5178 003E20B8  48 00 00 38 */	b .L_803E51B0
.L_803E517C:
/* 803E517C 003E20BC  6F 23 80 00 */	xoris r3, r25, 0x8000
/* 803E5180 003E20C0  3C 00 43 30 */	lis r0, 0x4330
/* 803E5184 003E20C4  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E5188 003E20C8  C8 22 19 78 */	lfd f1, lbl_8051FCD8@sda21(r2)
/* 803E518C 003E20CC  90 01 00 08 */	stw r0, 8(r1)
/* 803E5190 003E20D0  C0 42 19 30 */	lfs f2, lbl_8051FC90@sda21(r2)
/* 803E5194 003E20D4  C8 01 00 08 */	lfd f0, 8(r1)
/* 803E5198 003E20D8  EC 00 08 28 */	fsubs f0, f0, f1
/* 803E519C 003E20DC  EC 02 00 24 */	fdivs f0, f2, f0
/* 803E51A0 003E20E0  EC 7A 00 32 */	fmuls f3, f26, f0
/* 803E51A4 003E20E4  EC 5B 00 32 */	fmuls f2, f27, f0
/* 803E51A8 003E20E8  EC 3D 00 32 */	fmuls f1, f29, f0
/* 803E51AC 003E20EC  EC 1C 00 32 */	fmuls f0, f28, f0
.L_803E51B0:
/* 803E51B0 003E20F0  D3 DA 00 6C */	stfs f30, 0x6c(r26)
/* 803E51B4 003E20F4  D3 FA 00 70 */	stfs f31, 0x70(r26)
/* 803E51B8 003E20F8  D0 3A 00 74 */	stfs f1, 0x74(r26)
/* 803E51BC 003E20FC  D0 1A 00 78 */	stfs f0, 0x78(r26)
/* 803E51C0 003E2100  D0 5A 00 7C */	stfs f2, 0x7c(r26)
/* 803E51C4 003E2104  D0 7A 00 80 */	stfs f3, 0x80(r26)
.L_803E51C8:
/* 803E51C8 003E2108  3B BD 00 98 */	addi r29, r29, 0x98
/* 803E51CC 003E210C  3B 7B 00 01 */	addi r27, r27, 1
.L_803E51D0:
/* 803E51D0 003E2110  7C 1B E0 00 */	cmpw r27, r28
/* 803E51D4 003E2114  41 80 FE 14 */	blt .L_803E4FE8
/* 803E51D8 003E2118  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 803E51DC 003E211C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 803E51E0 003E2120  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 803E51E4 003E2124  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 803E51E8 003E2128  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 803E51EC 003E212C  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 803E51F0 003E2130  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 803E51F4 003E2134  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 803E51F8 003E2138  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 803E51FC 003E213C  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 803E5200 003E2140  E3 41 00 48 */	psq_l f26, 72(r1), 0, qr0
/* 803E5204 003E2144  CB 41 00 40 */	lfd f26, 0x40(r1)
/* 803E5208 003E2148  BA E1 00 1C */	lmw r23, 0x1c(r1)
/* 803E520C 003E214C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 803E5210 003E2150  7C 08 03 A6 */	mtlr r0
/* 803E5214 003E2154  38 21 00 A0 */	addi r1, r1, 0xa0
/* 803E5218 003E2158  4E 80 00 20 */	blr 
.endfn updateCalcBoid___Q43ebi5title6Pikmin4TMgrFv

.fn isAssemble__Q43ebi5title6Pikmin4TMgrFv, global
/* 803E521C 003E215C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E5220 003E2160  7C 08 02 A6 */	mflr r0
/* 803E5224 003E2164  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E5228 003E2168  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E522C 003E216C  3B E0 00 00 */	li r31, 0
/* 803E5230 003E2170  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803E5234 003E2174  3B C0 00 00 */	li r30, 0
/* 803E5238 003E2178  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803E523C 003E217C  7C 7D 1B 78 */	mr r29, r3
.L_803E5240:
/* 803E5240 003E2180  80 1D 02 AC */	lwz r0, 0x2ac(r29)
/* 803E5244 003E2184  7C 60 FA 14 */	add r3, r0, r31
/* 803E5248 003E2188  48 00 04 D9 */	bl isAssemble__Q43ebi5title6Pikmin5TUnitFv
/* 803E524C 003E218C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E5250 003E2190  40 82 00 0C */	bne .L_803E525C
/* 803E5254 003E2194  38 60 00 00 */	li r3, 0
/* 803E5258 003E2198  48 00 00 18 */	b .L_803E5270
.L_803E525C:
/* 803E525C 003E219C  3B DE 00 01 */	addi r30, r30, 1
/* 803E5260 003E21A0  3B FF 00 98 */	addi r31, r31, 0x98
/* 803E5264 003E21A4  2C 1E 01 F4 */	cmpwi r30, 0x1f4
/* 803E5268 003E21A8  41 80 FF D8 */	blt .L_803E5240
/* 803E526C 003E21AC  38 60 00 01 */	li r3, 1
.L_803E5270:
/* 803E5270 003E21B0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E5274 003E21B4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E5278 003E21B8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803E527C 003E21BC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803E5280 003E21C0  7C 08 03 A6 */	mtlr r0
/* 803E5284 003E21C4  38 21 00 20 */	addi r1, r1, 0x20
/* 803E5288 003E21C8  4E 80 00 20 */	blr 
.endfn isAssemble__Q43ebi5title6Pikmin4TMgrFv

.fn getUnit__Q43ebi5title6Pikmin4TMgrFl, global
/* 803E528C 003E21CC  1C 04 00 98 */	mulli r0, r4, 0x98
/* 803E5290 003E21D0  80 63 02 AC */	lwz r3, 0x2ac(r3)
/* 803E5294 003E21D4  7C 63 02 14 */	add r3, r3, r0
/* 803E5298 003E21D8  4E 80 00 20 */	blr 
.endfn getUnit__Q43ebi5title6Pikmin4TMgrFl

.fn init__Q43ebi5title6Pikmin5TUnitFPQ43ebi5title6Pikmin4TMgrl, global
/* 803E529C 003E21DC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803E52A0 003E21E0  7C 08 02 A6 */	mflr r0
/* 803E52A4 003E21E4  90 01 00 54 */	stw r0, 0x54(r1)
/* 803E52A8 003E21E8  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803E52AC 003E21EC  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803E52B0 003E21F0  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803E52B4 003E21F4  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803E52B8 003E21F8  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803E52BC 003E21FC  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803E52C0 003E2200  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803E52C4 003E2204  7C 7E 1B 78 */	mr r30, r3
/* 803E52C8 003E2208  7C BD 2B 78 */	mr r29, r5
/* 803E52CC 003E220C  90 83 00 34 */	stw r4, 0x34(r3)
/* 803E52D0 003E2210  80 63 00 34 */	lwz r3, 0x34(r3)
/* 803E52D4 003E2214  C3 C3 01 A8 */	lfs f30, 0x1a8(r3)
/* 803E52D8 003E2218  C3 E3 01 D0 */	lfs f31, 0x1d0(r3)
/* 803E52DC 003E221C  4B CE 42 C5 */	bl rand
/* 803E52E0 003E2220  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E52E4 003E2224  3C 00 43 30 */	lis r0, 0x4330
/* 803E52E8 003E2228  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E52EC 003E222C  EC 1E F8 28 */	fsubs f0, f30, f31
/* 803E52F0 003E2230  C8 62 19 78 */	lfd f3, lbl_8051FCD8@sda21(r2)
/* 803E52F4 003E2234  2C 1D 00 00 */	cmpwi r29, 0
/* 803E52F8 003E2238  90 01 00 08 */	stw r0, 8(r1)
/* 803E52FC 003E223C  38 00 00 00 */	li r0, 0
/* 803E5300 003E2240  C0 22 19 80 */	lfs f1, lbl_8051FCE0@sda21(r2)
/* 803E5304 003E2244  C8 41 00 08 */	lfd f2, 8(r1)
/* 803E5308 003E2248  EC 42 18 28 */	fsubs f2, f2, f3
/* 803E530C 003E224C  EC 22 08 24 */	fdivs f1, f2, f1
/* 803E5310 003E2250  EC 00 F8 7A */	fmadds f0, f0, f1, f31
/* 803E5314 003E2254  D0 1E 00 60 */	stfs f0, 0x60(r30)
/* 803E5318 003E2258  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 803E531C 003E225C  83 E3 00 18 */	lwz r31, 0x18(r3)
/* 803E5320 003E2260  41 80 00 10 */	blt .L_803E5330
/* 803E5324 003E2264  2C 1D 00 05 */	cmpwi r29, 5
/* 803E5328 003E2268  40 80 00 08 */	bge .L_803E5330
/* 803E532C 003E226C  38 00 00 01 */	li r0, 1
.L_803E5330:
/* 803E5330 003E2270  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803E5334 003E2274  40 82 00 20 */	bne .L_803E5354
/* 803E5338 003E2278  3C 60 80 49 */	lis r3, lbl_80497278@ha
/* 803E533C 003E227C  3C A0 80 49 */	lis r5, lbl_80497290@ha
/* 803E5340 003E2280  38 63 72 78 */	addi r3, r3, lbl_80497278@l
/* 803E5344 003E2284  38 80 01 24 */	li r4, 0x124
/* 803E5348 003E2288  38 A5 72 90 */	addi r5, r5, lbl_80497290@l
/* 803E534C 003E228C  4C C6 31 82 */	crclr 6
/* 803E5350 003E2290  4B C4 52 F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803E5354:
/* 803E5354 003E2294  2C 1D 00 02 */	cmpwi r29, 2
/* 803E5358 003E2298  41 82 00 70 */	beq .L_803E53C8
/* 803E535C 003E229C  40 80 00 14 */	bge .L_803E5370
/* 803E5360 003E22A0  2C 1D 00 00 */	cmpwi r29, 0
/* 803E5364 003E22A4  41 82 00 AC */	beq .L_803E5410
/* 803E5368 003E22A8  40 80 00 18 */	bge .L_803E5380
/* 803E536C 003E22AC  48 00 01 7C */	b .L_803E54E8
.L_803E5370:
/* 803E5370 003E22B0  2C 1D 00 04 */	cmpwi r29, 4
/* 803E5374 003E22B4  41 82 01 2C */	beq .L_803E54A0
/* 803E5378 003E22B8  40 80 01 70 */	bge .L_803E54E8
/* 803E537C 003E22BC  48 00 00 DC */	b .L_803E5458
.L_803E5380:
/* 803E5380 003E22C0  38 60 00 DC */	li r3, 0xdc
/* 803E5384 003E22C4  4B C3 EB 21 */	bl __nw__FUl
/* 803E5388 003E22C8  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E538C 003E22CC  41 82 01 60 */	beq .L_803E54EC
/* 803E5390 003E22D0  3C 60 80 4A */	lis r3, __vt__8J3DModel@ha
/* 803E5394 003E22D4  83 FF 00 00 */	lwz r31, 0(r31)
/* 803E5398 003E22D8  38 03 19 F0 */	addi r0, r3, __vt__8J3DModel@l
/* 803E539C 003E22DC  90 1D 00 00 */	stw r0, 0(r29)
/* 803E53A0 003E22E0  38 7D 00 88 */	addi r3, r29, 0x88
/* 803E53A4 003E22E4  4B C7 98 A5 */	bl init__15J3DVertexBufferFv
/* 803E53A8 003E22E8  7F A3 EB 78 */	mr r3, r29
/* 803E53AC 003E22EC  4B C8 0F 51 */	bl initialize__8J3DModelFv
/* 803E53B0 003E22F0  7F A3 EB 78 */	mr r3, r29
/* 803E53B4 003E22F4  7F E4 FB 78 */	mr r4, r31
/* 803E53B8 003E22F8  3C A0 00 02 */	lis r5, 2
/* 803E53BC 003E22FC  38 C0 00 01 */	li r6, 1
/* 803E53C0 003E2300  4B C8 0F C1 */	bl entryModelData__8J3DModelFP12J3DModelDataUlUl
/* 803E53C4 003E2304  48 00 01 28 */	b .L_803E54EC
.L_803E53C8:
/* 803E53C8 003E2308  38 60 00 DC */	li r3, 0xdc
/* 803E53CC 003E230C  4B C3 EA D9 */	bl __nw__FUl
/* 803E53D0 003E2310  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E53D4 003E2314  41 82 01 18 */	beq .L_803E54EC
/* 803E53D8 003E2318  3C 60 80 4A */	lis r3, __vt__8J3DModel@ha
/* 803E53DC 003E231C  83 FF 00 04 */	lwz r31, 4(r31)
/* 803E53E0 003E2320  38 03 19 F0 */	addi r0, r3, __vt__8J3DModel@l
/* 803E53E4 003E2324  90 1D 00 00 */	stw r0, 0(r29)
/* 803E53E8 003E2328  38 7D 00 88 */	addi r3, r29, 0x88
/* 803E53EC 003E232C  4B C7 98 5D */	bl init__15J3DVertexBufferFv
/* 803E53F0 003E2330  7F A3 EB 78 */	mr r3, r29
/* 803E53F4 003E2334  4B C8 0F 09 */	bl initialize__8J3DModelFv
/* 803E53F8 003E2338  7F A3 EB 78 */	mr r3, r29
/* 803E53FC 003E233C  7F E4 FB 78 */	mr r4, r31
/* 803E5400 003E2340  3C A0 00 02 */	lis r5, 2
/* 803E5404 003E2344  38 C0 00 01 */	li r6, 1
/* 803E5408 003E2348  4B C8 0F 79 */	bl entryModelData__8J3DModelFP12J3DModelDataUlUl
/* 803E540C 003E234C  48 00 00 E0 */	b .L_803E54EC
.L_803E5410:
/* 803E5410 003E2350  38 60 00 DC */	li r3, 0xdc
/* 803E5414 003E2354  4B C3 EA 91 */	bl __nw__FUl
/* 803E5418 003E2358  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E541C 003E235C  41 82 00 D0 */	beq .L_803E54EC
/* 803E5420 003E2360  3C 60 80 4A */	lis r3, __vt__8J3DModel@ha
/* 803E5424 003E2364  83 FF 00 08 */	lwz r31, 8(r31)
/* 803E5428 003E2368  38 03 19 F0 */	addi r0, r3, __vt__8J3DModel@l
/* 803E542C 003E236C  90 1D 00 00 */	stw r0, 0(r29)
/* 803E5430 003E2370  38 7D 00 88 */	addi r3, r29, 0x88
/* 803E5434 003E2374  4B C7 98 15 */	bl init__15J3DVertexBufferFv
/* 803E5438 003E2378  7F A3 EB 78 */	mr r3, r29
/* 803E543C 003E237C  4B C8 0E C1 */	bl initialize__8J3DModelFv
/* 803E5440 003E2380  7F A3 EB 78 */	mr r3, r29
/* 803E5444 003E2384  7F E4 FB 78 */	mr r4, r31
/* 803E5448 003E2388  3C A0 00 02 */	lis r5, 2
/* 803E544C 003E238C  38 C0 00 01 */	li r6, 1
/* 803E5450 003E2390  4B C8 0F 31 */	bl entryModelData__8J3DModelFP12J3DModelDataUlUl
/* 803E5454 003E2394  48 00 00 98 */	b .L_803E54EC
.L_803E5458:
/* 803E5458 003E2398  38 60 00 DC */	li r3, 0xdc
/* 803E545C 003E239C  4B C3 EA 49 */	bl __nw__FUl
/* 803E5460 003E23A0  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E5464 003E23A4  41 82 00 88 */	beq .L_803E54EC
/* 803E5468 003E23A8  3C 60 80 4A */	lis r3, __vt__8J3DModel@ha
/* 803E546C 003E23AC  83 FF 00 0C */	lwz r31, 0xc(r31)
/* 803E5470 003E23B0  38 03 19 F0 */	addi r0, r3, __vt__8J3DModel@l
/* 803E5474 003E23B4  90 1D 00 00 */	stw r0, 0(r29)
/* 803E5478 003E23B8  38 7D 00 88 */	addi r3, r29, 0x88
/* 803E547C 003E23BC  4B C7 97 CD */	bl init__15J3DVertexBufferFv
/* 803E5480 003E23C0  7F A3 EB 78 */	mr r3, r29
/* 803E5484 003E23C4  4B C8 0E 79 */	bl initialize__8J3DModelFv
/* 803E5488 003E23C8  7F A3 EB 78 */	mr r3, r29
/* 803E548C 003E23CC  7F E4 FB 78 */	mr r4, r31
/* 803E5490 003E23D0  3C A0 00 02 */	lis r5, 2
/* 803E5494 003E23D4  38 C0 00 01 */	li r6, 1
/* 803E5498 003E23D8  4B C8 0E E9 */	bl entryModelData__8J3DModelFP12J3DModelDataUlUl
/* 803E549C 003E23DC  48 00 00 50 */	b .L_803E54EC
.L_803E54A0:
/* 803E54A0 003E23E0  38 60 00 DC */	li r3, 0xdc
/* 803E54A4 003E23E4  4B C3 EA 01 */	bl __nw__FUl
/* 803E54A8 003E23E8  7C 7D 1B 79 */	or. r29, r3, r3
/* 803E54AC 003E23EC  41 82 00 40 */	beq .L_803E54EC
/* 803E54B0 003E23F0  3C 60 80 4A */	lis r3, __vt__8J3DModel@ha
/* 803E54B4 003E23F4  83 FF 00 10 */	lwz r31, 0x10(r31)
/* 803E54B8 003E23F8  38 03 19 F0 */	addi r0, r3, __vt__8J3DModel@l
/* 803E54BC 003E23FC  90 1D 00 00 */	stw r0, 0(r29)
/* 803E54C0 003E2400  38 7D 00 88 */	addi r3, r29, 0x88
/* 803E54C4 003E2404  4B C7 97 85 */	bl init__15J3DVertexBufferFv
/* 803E54C8 003E2408  7F A3 EB 78 */	mr r3, r29
/* 803E54CC 003E240C  4B C8 0E 31 */	bl initialize__8J3DModelFv
/* 803E54D0 003E2410  7F A3 EB 78 */	mr r3, r29
/* 803E54D4 003E2414  7F E4 FB 78 */	mr r4, r31
/* 803E54D8 003E2418  3C A0 00 02 */	lis r5, 2
/* 803E54DC 003E241C  38 C0 00 01 */	li r6, 1
/* 803E54E0 003E2420  4B C8 0E A1 */	bl entryModelData__8J3DModelFP12J3DModelDataUlUl
/* 803E54E4 003E2424  48 00 00 08 */	b .L_803E54EC
.L_803E54E8:
/* 803E54E8 003E2428  3B A0 00 00 */	li r29, 0
.L_803E54EC:
/* 803E54EC 003E242C  93 BE 00 28 */	stw r29, 0x28(r30)
/* 803E54F0 003E2430  38 7E 00 38 */	addi r3, r30, 0x38
/* 803E54F4 003E2434  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 803E54F8 003E2438  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803E54FC 003E243C  80 84 00 14 */	lwz r4, 0x14(r4)
/* 803E5500 003E2440  A8 84 00 06 */	lha r4, 6(r4)
/* 803E5504 003E2444  4B C8 21 75 */	bl init__12J3DFrameCtrlFs
/* 803E5508 003E2448  80 9E 00 34 */	lwz r4, 0x34(r30)
/* 803E550C 003E244C  38 7E 00 4C */	addi r3, r30, 0x4c
/* 803E5510 003E2450  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803E5514 003E2454  80 84 00 18 */	lwz r4, 0x18(r4)
/* 803E5518 003E2458  A8 84 00 06 */	lha r4, 6(r4)
/* 803E551C 003E245C  4B C8 21 5D */	bl init__12J3DFrameCtrlFs
/* 803E5520 003E2460  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5524 003E2464  80 03 00 D4 */	lwz r0, 0xd4(r3)
/* 803E5528 003E2468  2C 00 00 05 */	cmpwi r0, 5
/* 803E552C 003E246C  41 82 00 08 */	beq .L_803E5534
/* 803E5530 003E2470  48 00 00 14 */	b .L_803E5544
.L_803E5534:
/* 803E5534 003E2474  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 803E5538 003E2478  C0 03 00 68 */	lfs f0, 0x68(r3)
/* 803E553C 003E247C  D0 1E 00 18 */	stfs f0, 0x18(r30)
/* 803E5540 003E2480  48 00 00 10 */	b .L_803E5550
.L_803E5544:
/* 803E5544 003E2484  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 803E5548 003E2488  C0 03 00 40 */	lfs f0, 0x40(r3)
/* 803E554C 003E248C  D0 1E 00 18 */	stfs f0, 0x18(r30)
.L_803E5550:
/* 803E5550 003E2490  80 7E 00 34 */	lwz r3, 0x34(r30)
/* 803E5554 003E2494  C0 03 00 90 */	lfs f0, 0x90(r3)
/* 803E5558 003E2498  D0 1E 00 1C */	stfs f0, 0x1c(r30)
/* 803E555C 003E249C  4B CE 40 45 */	bl rand
/* 803E5560 003E24A0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E5564 003E24A4  3C 00 43 30 */	lis r0, 0x4330
/* 803E5568 003E24A8  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E556C 003E24AC  C8 62 19 78 */	lfd f3, lbl_8051FCD8@sda21(r2)
/* 803E5570 003E24B0  90 01 00 08 */	stw r0, 8(r1)
/* 803E5574 003E24B4  C0 22 19 80 */	lfs f1, lbl_8051FCE0@sda21(r2)
/* 803E5578 003E24B8  C8 41 00 08 */	lfd f2, 8(r1)
/* 803E557C 003E24BC  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E5580 003E24C0  EC 42 18 28 */	fsubs f2, f2, f3
/* 803E5584 003E24C4  EC 22 08 24 */	fdivs f1, f2, f1
/* 803E5588 003E24C8  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E558C 003E24CC  D0 1E 00 48 */	stfs f0, 0x48(r30)
/* 803E5590 003E24D0  4B CE 40 11 */	bl rand
/* 803E5594 003E24D4  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 803E5598 003E24D8  3C 60 43 30 */	lis r3, 0x43300030@ha
/* 803E559C 003E24DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E55A0 003E24E0  38 00 00 00 */	li r0, 0
/* 803E55A4 003E24E4  C8 62 19 78 */	lfd f3, lbl_8051FCD8@sda21(r2)
/* 803E55A8 003E24E8  90 61 00 10 */	stw r3, 0x10(r1)
/* 803E55AC 003E24EC  C0 42 19 80 */	lfs f2, lbl_8051FCE0@sda21(r2)
/* 803E55B0 003E24F0  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 803E55B4 003E24F4  C0 22 19 88 */	lfs f1, lbl_8051FCE8@sda21(r2)
/* 803E55B8 003E24F8  EC 60 18 28 */	fsubs f3, f0, f3
/* 803E55BC 003E24FC  C0 02 19 84 */	lfs f0, lbl_8051FCE4@sda21(r2)
/* 803E55C0 003E2500  EC 43 10 24 */	fdivs f2, f3, f2
/* 803E55C4 003E2504  EC 01 00 BA */	fmadds f0, f1, f2, f0
/* 803E55C8 003E2508  D0 1E 00 64 */	stfs f0, 0x64(r30)
/* 803E55CC 003E250C  98 1E 00 94 */	stb r0, 0x94(r30)
/* 803E55D0 003E2510  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803E55D4 003E2514  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803E55D8 003E2518  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803E55DC 003E251C  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803E55E0 003E2520  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803E55E4 003E2524  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803E55E8 003E2528  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803E55EC 003E252C  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803E55F0 003E2530  7C 08 03 A6 */	mtlr r0
/* 803E55F4 003E2534  38 21 00 50 */	addi r1, r1, 0x50
/* 803E55F8 003E2538  4E 80 00 20 */	blr 
.endfn init__Q43ebi5title6Pikmin5TUnitFPQ43ebi5title6Pikmin4TMgrl

.fn goDestination__Q43ebi5title6Pikmin5TUnitFv, global
/* 803E55FC 003E253C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E5600 003E2540  7C 08 02 A6 */	mflr r0
/* 803E5604 003E2544  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5608 003E2548  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E560C 003E254C  C0 63 00 30 */	lfs f3, 0x43300030@l(r3)
/* 803E5610 003E2550  C0 23 00 08 */	lfs f1, 8(r3)
/* 803E5614 003E2554  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803E5618 003E2558  EC 63 08 28 */	fsubs f3, f3, f1
/* 803E561C 003E255C  C0 23 00 04 */	lfs f1, 4(r3)
/* 803E5620 003E2560  EC 22 08 28 */	fsubs f1, f2, f1
/* 803E5624 003E2564  EC 43 00 F2 */	fmuls f2, f3, f3
/* 803E5628 003E2568  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 803E562C 003E256C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E5630 003E2570  40 81 00 14 */	ble .L_803E5644
/* 803E5634 003E2574  40 81 00 14 */	ble .L_803E5648
/* 803E5638 003E2578  FC 00 08 34 */	frsqrte f0, f1
/* 803E563C 003E257C  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E5640 003E2580  48 00 00 08 */	b .L_803E5648
.L_803E5644:
/* 803E5644 003E2584  FC 20 00 90 */	fmr f1, f0
.L_803E5648:
/* 803E5648 003E2588  80 83 00 34 */	lwz r4, 0x34(r3)
/* 803E564C 003E258C  C0 04 00 B8 */	lfs f0, 0xb8(r4)
/* 803E5650 003E2590  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E5654 003E2594  40 80 00 10 */	bge .L_803E5664
/* 803E5658 003E2598  38 80 00 01 */	li r4, 1
/* 803E565C 003E259C  48 00 01 0D */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
/* 803E5660 003E25A0  48 00 00 24 */	b .L_803E5684
.L_803E5664:
/* 803E5664 003E25A4  C0 04 00 E0 */	lfs f0, 0xe0(r4)
/* 803E5668 003E25A8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E566C 003E25AC  40 80 00 10 */	bge .L_803E567C
/* 803E5670 003E25B0  38 80 00 02 */	li r4, 2
/* 803E5674 003E25B4  48 00 00 F5 */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
/* 803E5678 003E25B8  48 00 00 0C */	b .L_803E5684
.L_803E567C:
/* 803E567C 003E25BC  38 80 00 02 */	li r4, 2
/* 803E5680 003E25C0  48 00 00 E9 */	bl startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState
.L_803E5684:
/* 803E5684 003E25C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E5688 003E25C8  7C 08 03 A6 */	mtlr r0
/* 803E568C 003E25CC  38 21 00 10 */	addi r1, r1, 0x10
/* 803E5690 003E25D0  4E 80 00 20 */	blr 
.endfn goDestination__Q43ebi5title6Pikmin5TUnitFv

.fn beAttacked__Q43ebi5title6Pikmin5TUnitFv, global
/* 803E5694 003E25D4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E5698 003E25D8  7C 08 02 A6 */	mflr r0
/* 803E569C 003E25DC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E56A0 003E25E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E56A4 003E25E4  7C 7F 1B 78 */	mr r31, r3
/* 803E56A8 003E25E8  88 03 00 94 */	lbz r0, 0x94(r3)
/* 803E56AC 003E25EC  28 00 00 00 */	cmplwi r0, 0
/* 803E56B0 003E25F0  41 82 00 0C */	beq .L_803E56BC
/* 803E56B4 003E25F4  38 60 00 00 */	li r3, 0
/* 803E56B8 003E25F8  48 00 00 34 */	b .L_803E56EC
.L_803E56BC:
/* 803E56BC 003E25FC  38 60 00 01 */	li r3, 1
/* 803E56C0 003E2600  38 00 00 00 */	li r0, 0
/* 803E56C4 003E2604  98 7F 00 94 */	stb r3, 0x94(r31)
/* 803E56C8 003E2608  38 61 00 08 */	addi r3, r1, 8
/* 803E56CC 003E260C  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E56D0 003E2610  80 8D 9A 28 */	lwz r4, titleMgr__Q23ebi5title@sda21(r13)
/* 803E56D4 003E2614  4B FD 99 A5 */	bl getPosOutOfViewField__Q33ebi5title9TTitleMgrFv
/* 803E56D8 003E2618  C0 01 00 08 */	lfs f0, 8(r1)
/* 803E56DC 003E261C  38 60 00 01 */	li r3, 1
/* 803E56E0 003E2620  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E56E4 003E2624  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803E56E8 003E2628  D0 1F 00 08 */	stfs f0, 8(r31)
.L_803E56EC:
/* 803E56EC 003E262C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E56F0 003E2630  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E56F4 003E2634  7C 08 03 A6 */	mtlr r0
/* 803E56F8 003E2638  38 21 00 20 */	addi r1, r1, 0x20
/* 803E56FC 003E263C  4E 80 00 20 */	blr 
.endfn beAttacked__Q43ebi5title6Pikmin5TUnitFv

.fn alive__Q43ebi5title6Pikmin5TUnitFv, global
/* 803E5700 003E2640  38 00 00 00 */	li r0, 0
/* 803E5704 003E2644  98 03 00 94 */	stb r0, 0x94(r3)
/* 803E5708 003E2648  4E 80 00 20 */	blr 
.endfn alive__Q43ebi5title6Pikmin5TUnitFv

.fn isCalc__Q43ebi5title6Pikmin5TUnitFv, global
/* 803E570C 003E264C  80 63 00 84 */	lwz r3, 0x84(r3)
/* 803E5710 003E2650  7C 03 00 D0 */	neg r0, r3
/* 803E5714 003E2654  7C 00 1B 78 */	or r0, r0, r3
/* 803E5718 003E2658  54 03 0F FE */	srwi r3, r0, 0x1f
/* 803E571C 003E265C  4E 80 00 20 */	blr 
.endfn isCalc__Q43ebi5title6Pikmin5TUnitFv

.fn isAssemble__Q43ebi5title6Pikmin5TUnitFv, global
/* 803E5720 003E2660  80 03 00 84 */	lwz r0, 0x84(r3)
/* 803E5724 003E2664  2C 00 00 00 */	cmpwi r0, 0
/* 803E5728 003E2668  41 82 00 0C */	beq .L_803E5734
/* 803E572C 003E266C  2C 00 00 01 */	cmpwi r0, 1
/* 803E5730 003E2670  40 82 00 0C */	bne .L_803E573C
.L_803E5734:
/* 803E5734 003E2674  38 60 00 01 */	li r3, 1
/* 803E5738 003E2678  4E 80 00 20 */	blr 
.L_803E573C:
/* 803E573C 003E267C  38 60 00 00 */	li r3, 0
/* 803E5740 003E2680  4E 80 00 20 */	blr 
.endfn isAssemble__Q43ebi5title6Pikmin5TUnitFv

.fn isWalk__Q43ebi5title6Pikmin5TUnitFv, global
/* 803E5744 003E2684  80 03 00 84 */	lwz r0, 0x84(r3)
/* 803E5748 003E2688  2C 00 00 02 */	cmpwi r0, 2
/* 803E574C 003E268C  41 82 00 0C */	beq .L_803E5758
/* 803E5750 003E2690  2C 00 00 04 */	cmpwi r0, 4
/* 803E5754 003E2694  40 82 00 0C */	bne .L_803E5760
.L_803E5758:
/* 803E5758 003E2698  38 60 00 01 */	li r3, 1
/* 803E575C 003E269C  4E 80 00 20 */	blr 
.L_803E5760:
/* 803E5760 003E26A0  38 60 00 00 */	li r3, 0
/* 803E5764 003E26A4  4E 80 00 20 */	blr 
.endfn isWalk__Q43ebi5title6Pikmin5TUnitFv

.fn startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState, global
/* 803E5768 003E26A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803E576C 003E26AC  7C 08 02 A6 */	mflr r0
/* 803E5770 003E26B0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803E5774 003E26B4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E5778 003E26B8  7C 7F 1B 78 */	mr r31, r3
/* 803E577C 003E26BC  80 63 00 84 */	lwz r3, 0x84(r3)
/* 803E5780 003E26C0  7C 04 18 00 */	cmpw r4, r3
/* 803E5784 003E26C4  41 82 01 20 */	beq .L_803E58A4
/* 803E5788 003E26C8  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E578C 003E26CC  28 00 00 01 */	cmplwi r0, 1
/* 803E5790 003E26D0  40 82 00 10 */	bne .L_803E57A0
/* 803E5794 003E26D4  38 00 00 00 */	li r0, 0
/* 803E5798 003E26D8  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E579C 003E26DC  48 00 00 0C */	b .L_803E57A8
.L_803E57A0:
/* 803E57A0 003E26E0  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E57A4 003E26E4  90 9F 00 84 */	stw r4, 0x84(r31)
.L_803E57A8:
/* 803E57A8 003E26E8  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E57AC 003E26EC  2C 00 00 02 */	cmpwi r0, 2
/* 803E57B0 003E26F0  41 82 00 F4 */	beq .L_803E58A4
/* 803E57B4 003E26F4  40 80 00 14 */	bge .L_803E57C8
/* 803E57B8 003E26F8  2C 00 00 00 */	cmpwi r0, 0
/* 803E57BC 003E26FC  41 82 00 18 */	beq .L_803E57D4
/* 803E57C0 003E2700  40 80 00 B8 */	bge .L_803E5878
/* 803E57C4 003E2704  48 00 00 E0 */	b .L_803E58A4
.L_803E57C8:
/* 803E57C8 003E2708  2C 00 00 04 */	cmpwi r0, 4
/* 803E57CC 003E270C  40 80 00 D8 */	bge .L_803E58A4
/* 803E57D0 003E2710  48 00 00 18 */	b .L_803E57E8
.L_803E57D4:
/* 803E57D4 003E2714  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E57D8 003E2718  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E57DC 003E271C  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E57E0 003E2720  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E57E4 003E2724  48 00 00 C0 */	b .L_803E58A4
.L_803E57E8:
/* 803E57E8 003E2728  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E57EC 003E272C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E57F0 003E2730  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E57F4 003E2734  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E57F8 003E2738  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E57FC 003E273C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5800 003E2740  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E5804 003E2744  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5808 003E2748  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E580C 003E274C  4B CD C3 41 */	bl __cvt_fp2unsigned
/* 803E5810 003E2750  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E5814 003E2754  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E5818 003E2758  4B CE 3D 89 */	bl rand
/* 803E581C 003E275C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E5820 003E2760  3C 00 43 30 */	lis r0, 0x4330
/* 803E5824 003E2764  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E5828 003E2768  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E582C 003E276C  90 01 00 08 */	stw r0, 8(r1)
/* 803E5830 003E2770  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E5834 003E2774  C8 21 00 08 */	lfd f1, 8(r1)
/* 803E5838 003E2778  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E583C 003E277C  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E5840 003E2780  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5844 003E2784  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5848 003E2788  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E584C 003E278C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E5850 003E2790  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E5854 003E2794  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5858 003E2798  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E585C 003E279C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5860 003E27A0  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E5864 003E27A4  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5868 003E27A8  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E586C 003E27AC  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5870 003E27B0  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E5874 003E27B4  48 00 00 30 */	b .L_803E58A4
.L_803E5878:
/* 803E5878 003E27B8  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E587C 003E27BC  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5880 003E27C0  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E5884 003E27C4  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5888 003E27C8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E588C 003E27CC  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E5890 003E27D0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5894 003E27D4  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5898 003E27D8  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E589C 003E27DC  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E58A0 003E27E0  D0 1F 00 44 */	stfs f0, 0x44(r31)
.L_803E58A4:
/* 803E58A4 003E27E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803E58A8 003E27E8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E58AC 003E27EC  7C 08 03 A6 */	mtlr r0
/* 803E58B0 003E27F0  38 21 00 20 */	addi r1, r1, 0x20
/* 803E58B4 003E27F4  4E 80 00 20 */	blr 
.endfn startState__Q43ebi5title6Pikmin5TUnitFQ53ebi5title6Pikmin5TUnit9enumState

.fn update__Q43ebi5title6Pikmin5TUnitFv, global
/* 803E58B8 003E27F8  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 803E58BC 003E27FC  7C 08 02 A6 */	mflr r0
/* 803E58C0 003E2800  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803E58C4 003E2804  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 803E58C8 003E2808  F3 E1 00 98 */	psq_st f31, 152(r1), 0, qr0
/* 803E58CC 003E280C  DB C1 00 80 */	stfd f30, 0x80(r1)
/* 803E58D0 003E2810  F3 C1 00 88 */	psq_st f30, 136(r1), 0, qr0
/* 803E58D4 003E2814  DB A1 00 70 */	stfd f29, 0x70(r1)
/* 803E58D8 003E2818  F3 A1 00 78 */	psq_st f29, 120(r1), 0, qr0
/* 803E58DC 003E281C  DB 81 00 60 */	stfd f28, 0x60(r1)
/* 803E58E0 003E2820  F3 81 00 68 */	psq_st f28, 104(r1), 0, qr0
/* 803E58E4 003E2824  DB 61 00 50 */	stfd f27, 0x50(r1)
/* 803E58E8 003E2828  F3 61 00 58 */	psq_st f27, 88(r1), 0, qr0
/* 803E58EC 003E282C  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803E58F0 003E2830  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803E58F4 003E2834  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803E58F8 003E2838  7C 7F 1B 78 */	mr r31, r3
/* 803E58FC 003E283C  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803E5900 003E2840  7F E4 FB 78 */	mr r4, r31
/* 803E5904 003E2844  4B FD 96 ED */	bl isOutViewField__Q33ebi5title9TTitleMgrFPQ33ebi5title8TObjBase
/* 803E5908 003E2848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E590C 003E284C  41 82 01 48 */	beq .L_803E5A54
/* 803E5910 003E2850  80 6D 9A 28 */	lwz r3, titleMgr__Q23ebi5title@sda21(r13)
/* 803E5914 003E2854  38 9F 00 2C */	addi r4, r31, 0x2c
/* 803E5918 003E2858  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E591C 003E285C  4B FD 96 91 */	bl "isOutViewField__Q33ebi5title9TTitleMgrFR10Vector2<f>f"
/* 803E5920 003E2860  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E5924 003E2864  41 82 01 30 */	beq .L_803E5A54
/* 803E5928 003E2868  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803E592C 003E286C  2C 03 00 00 */	cmpwi r3, 0
/* 803E5930 003E2870  41 82 01 24 */	beq .L_803E5A54
/* 803E5934 003E2874  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E5938 003E2878  28 00 00 01 */	cmplwi r0, 1
/* 803E593C 003E287C  40 82 00 10 */	bne .L_803E594C
/* 803E5940 003E2880  38 00 00 00 */	li r0, 0
/* 803E5944 003E2884  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E5948 003E2888  48 00 00 10 */	b .L_803E5958
.L_803E594C:
/* 803E594C 003E288C  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E5950 003E2890  38 00 00 00 */	li r0, 0
/* 803E5954 003E2894  90 1F 00 84 */	stw r0, 0x84(r31)
.L_803E5958:
/* 803E5958 003E2898  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E595C 003E289C  2C 00 00 02 */	cmpwi r0, 2
/* 803E5960 003E28A0  41 82 00 F4 */	beq .L_803E5A54
/* 803E5964 003E28A4  40 80 00 14 */	bge .L_803E5978
/* 803E5968 003E28A8  2C 00 00 00 */	cmpwi r0, 0
/* 803E596C 003E28AC  41 82 00 18 */	beq .L_803E5984
/* 803E5970 003E28B0  40 80 00 B8 */	bge .L_803E5A28
/* 803E5974 003E28B4  48 00 00 E0 */	b .L_803E5A54
.L_803E5978:
/* 803E5978 003E28B8  2C 00 00 04 */	cmpwi r0, 4
/* 803E597C 003E28BC  40 80 00 D8 */	bge .L_803E5A54
/* 803E5980 003E28C0  48 00 00 18 */	b .L_803E5998
.L_803E5984:
/* 803E5984 003E28C4  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E5988 003E28C8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E598C 003E28CC  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E5990 003E28D0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E5994 003E28D4  48 00 00 C0 */	b .L_803E5A54
.L_803E5998:
/* 803E5998 003E28D8  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E599C 003E28DC  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E59A0 003E28E0  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E59A4 003E28E4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E59A8 003E28E8  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E59AC 003E28EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E59B0 003E28F0  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E59B4 003E28F4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E59B8 003E28F8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E59BC 003E28FC  4B CD C1 91 */	bl __cvt_fp2unsigned
/* 803E59C0 003E2900  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E59C4 003E2904  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E59C8 003E2908  4B CE 3B D9 */	bl rand
/* 803E59CC 003E290C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E59D0 003E2910  3C 00 43 30 */	lis r0, 0x4330
/* 803E59D4 003E2914  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803E59D8 003E2918  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E59DC 003E291C  90 01 00 28 */	stw r0, 0x28(r1)
/* 803E59E0 003E2920  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E59E4 003E2924  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 803E59E8 003E2928  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E59EC 003E292C  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E59F0 003E2930  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E59F4 003E2934  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E59F8 003E2938  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E59FC 003E293C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E5A00 003E2940  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E5A04 003E2944  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5A08 003E2948  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E5A0C 003E294C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5A10 003E2950  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E5A14 003E2954  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5A18 003E2958  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5A1C 003E295C  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5A20 003E2960  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E5A24 003E2964  48 00 00 30 */	b .L_803E5A54
.L_803E5A28:
/* 803E5A28 003E2968  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5A2C 003E296C  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5A30 003E2970  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E5A34 003E2974  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5A38 003E2978  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5A3C 003E297C  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E5A40 003E2980  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5A44 003E2984  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5A48 003E2988  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5A4C 003E298C  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5A50 003E2990  D0 1F 00 44 */	stfs f0, 0x44(r31)
.L_803E5A54:
/* 803E5A54 003E2994  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E5A58 003E2998  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803E5A5C 003E299C  2C 00 00 03 */	cmpwi r0, 3
/* 803E5A60 003E29A0  C0 E3 09 6C */	lfs f7, 0x96c(r3)
/* 803E5A64 003E29A4  C1 23 09 70 */	lfs f9, 0x970(r3)
/* 803E5A68 003E29A8  C3 E3 09 74 */	lfs f31, 0x974(r3)
/* 803E5A6C 003E29AC  41 82 00 28 */	beq .L_803E5A94
/* 803E5A70 003E29B0  40 80 00 14 */	bge .L_803E5A84
/* 803E5A74 003E29B4  2C 00 00 01 */	cmpwi r0, 1
/* 803E5A78 003E29B8  41 82 01 6C */	beq .L_803E5BE4
/* 803E5A7C 003E29BC  40 80 02 2C */	bge .L_803E5CA8
/* 803E5A80 003E29C0  48 00 09 48 */	b .L_803E63C8
.L_803E5A84:
/* 803E5A84 003E29C4  2C 00 00 05 */	cmpwi r0, 5
/* 803E5A88 003E29C8  41 82 05 4C */	beq .L_803E5FD4
/* 803E5A8C 003E29CC  40 80 09 3C */	bge .L_803E63C8
/* 803E5A90 003E29D0  48 00 08 B8 */	b .L_803E6348
.L_803E5A94:
/* 803E5A94 003E29D4  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 803E5A98 003E29D8  28 03 00 00 */	cmplwi r3, 0
/* 803E5A9C 003E29DC  41 82 00 0C */	beq .L_803E5AA8
/* 803E5AA0 003E29E0  38 03 FF FF */	addi r0, r3, -1
/* 803E5AA4 003E29E4  90 1F 00 8C */	stw r0, 0x8c(r31)
.L_803E5AA8:
/* 803E5AA8 003E29E8  80 1F 00 8C */	lwz r0, 0x8c(r31)
/* 803E5AAC 003E29EC  28 00 00 00 */	cmplwi r0, 0
/* 803E5AB0 003E29F0  40 82 09 18 */	bne .L_803E63C8
/* 803E5AB4 003E29F4  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803E5AB8 003E29F8  2C 03 00 01 */	cmpwi r3, 1
/* 803E5ABC 003E29FC  41 82 09 0C */	beq .L_803E63C8
/* 803E5AC0 003E2A00  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E5AC4 003E2A04  28 00 00 01 */	cmplwi r0, 1
/* 803E5AC8 003E2A08  40 82 00 10 */	bne .L_803E5AD8
/* 803E5ACC 003E2A0C  38 00 00 00 */	li r0, 0
/* 803E5AD0 003E2A10  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E5AD4 003E2A14  48 00 00 10 */	b .L_803E5AE4
.L_803E5AD8:
/* 803E5AD8 003E2A18  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E5ADC 003E2A1C  38 00 00 01 */	li r0, 1
/* 803E5AE0 003E2A20  90 1F 00 84 */	stw r0, 0x84(r31)
.L_803E5AE4:
/* 803E5AE4 003E2A24  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E5AE8 003E2A28  2C 00 00 02 */	cmpwi r0, 2
/* 803E5AEC 003E2A2C  41 82 08 DC */	beq .L_803E63C8
/* 803E5AF0 003E2A30  40 80 00 14 */	bge .L_803E5B04
/* 803E5AF4 003E2A34  2C 00 00 00 */	cmpwi r0, 0
/* 803E5AF8 003E2A38  41 82 00 18 */	beq .L_803E5B10
/* 803E5AFC 003E2A3C  40 80 00 B8 */	bge .L_803E5BB4
/* 803E5B00 003E2A40  48 00 08 C8 */	b .L_803E63C8
.L_803E5B04:
/* 803E5B04 003E2A44  2C 00 00 04 */	cmpwi r0, 4
/* 803E5B08 003E2A48  40 80 08 C0 */	bge .L_803E63C8
/* 803E5B0C 003E2A4C  48 00 00 18 */	b .L_803E5B24
.L_803E5B10:
/* 803E5B10 003E2A50  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E5B14 003E2A54  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E5B18 003E2A58  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E5B1C 003E2A5C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E5B20 003E2A60  48 00 08 A8 */	b .L_803E63C8
.L_803E5B24:
/* 803E5B24 003E2A64  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E5B28 003E2A68  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5B2C 003E2A6C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E5B30 003E2A70  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E5B34 003E2A74  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E5B38 003E2A78  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5B3C 003E2A7C  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E5B40 003E2A80  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5B44 003E2A84  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E5B48 003E2A88  4B CD C0 05 */	bl __cvt_fp2unsigned
/* 803E5B4C 003E2A8C  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E5B50 003E2A90  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E5B54 003E2A94  4B CE 3A 4D */	bl rand
/* 803E5B58 003E2A98  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E5B5C 003E2A9C  3C 00 43 30 */	lis r0, 0x4330
/* 803E5B60 003E2AA0  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803E5B64 003E2AA4  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E5B68 003E2AA8  90 01 00 28 */	stw r0, 0x28(r1)
/* 803E5B6C 003E2AAC  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E5B70 003E2AB0  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 803E5B74 003E2AB4  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E5B78 003E2AB8  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E5B7C 003E2ABC  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5B80 003E2AC0  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5B84 003E2AC4  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E5B88 003E2AC8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E5B8C 003E2ACC  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E5B90 003E2AD0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5B94 003E2AD4  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E5B98 003E2AD8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5B9C 003E2ADC  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E5BA0 003E2AE0  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5BA4 003E2AE4  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5BA8 003E2AE8  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5BAC 003E2AEC  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E5BB0 003E2AF0  48 00 08 18 */	b .L_803E63C8
.L_803E5BB4:
/* 803E5BB4 003E2AF4  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5BB8 003E2AF8  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5BBC 003E2AFC  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E5BC0 003E2B00  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5BC4 003E2B04  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5BC8 003E2B08  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E5BCC 003E2B0C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5BD0 003E2B10  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5BD4 003E2B14  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5BD8 003E2B18  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5BDC 003E2B1C  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 803E5BE0 003E2B20  48 00 07 E8 */	b .L_803E63C8
.L_803E5BE4:
/* 803E5BE4 003E2B24  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 803E5BE8 003E2B28  C0 02 19 04 */	lfs f0, lbl_8051FC64@sda21(r2)
/* 803E5BEC 003E2B2C  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 803E5BF0 003E2B30  EC 01 00 2A */	fadds f0, f1, f0
/* 803E5BF4 003E2B34  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E5BF8 003E2B38  EC 42 08 2A */	fadds f2, f2, f1
/* 803E5BFC 003E2B3C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 803E5C00 003E2B40  D0 5F 00 10 */	stfs f2, 0x10(r31)
/* 803E5C04 003E2B44  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 803E5C08 003E2B48  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 803E5C0C 003E2B4C  EC 03 00 F2 */	fmuls f0, f3, f3
/* 803E5C10 003E2B50  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803E5C14 003E2B54  EC 00 10 2A */	fadds f0, f0, f2
/* 803E5C18 003E2B58  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803E5C1C 003E2B5C  40 81 00 1C */	ble .L_803E5C38
/* 803E5C20 003E2B60  EC 43 10 FA */	fmadds f2, f3, f3, f2
/* 803E5C24 003E2B64  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 803E5C28 003E2B68  40 81 00 14 */	ble .L_803E5C3C
/* 803E5C2C 003E2B6C  FC 00 10 34 */	frsqrte f0, f2
/* 803E5C30 003E2B70  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E5C34 003E2B74  48 00 00 08 */	b .L_803E5C3C
.L_803E5C38:
/* 803E5C38 003E2B78  FC 40 08 90 */	fmr f2, f1
.L_803E5C3C:
/* 803E5C3C 003E2B7C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5C40 003E2B80  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 803E5C44 003E2B84  41 82 00 24 */	beq .L_803E5C68
/* 803E5C48 003E2B88  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E5C4C 003E2B8C  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 803E5C50 003E2B90  EC 21 10 24 */	fdivs f1, f1, f2
/* 803E5C54 003E2B94  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E5C58 003E2B98  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 803E5C5C 003E2B9C  C0 1F 00 10 */	lfs f0, 0x10(r31)
/* 803E5C60 003E2BA0  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E5C64 003E2BA4  D0 1F 00 10 */	stfs f0, 0x10(r31)
.L_803E5C68:
/* 803E5C68 003E2BA8  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E5C6C 003E2BAC  7F E3 FB 78 */	mr r3, r31
/* 803E5C70 003E2BB0  C0 BF 00 04 */	lfs f5, 4(r31)
/* 803E5C74 003E2BB4  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 803E5C78 003E2BB8  C0 9F 00 08 */	lfs f4, 8(r31)
/* 803E5C7C 003E2BBC  EC 40 28 28 */	fsubs f2, f0, f5
/* 803E5C80 003E2BC0  C0 02 19 90 */	lfs f0, lbl_8051FCF0@sda21(r2)
/* 803E5C84 003E2BC4  EC 61 20 28 */	fsubs f3, f1, f4
/* 803E5C88 003E2BC8  EC 22 00 32 */	fmuls f1, f2, f0
/* 803E5C8C 003E2BCC  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5C90 003E2BD0  EC 25 08 2A */	fadds f1, f5, f1
/* 803E5C94 003E2BD4  EC 04 00 2A */	fadds f0, f4, f0
/* 803E5C98 003E2BD8  D0 3F 00 04 */	stfs f1, 4(r31)
/* 803E5C9C 003E2BDC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E5CA0 003E2BE0  48 00 0B ED */	bl updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv
/* 803E5CA4 003E2BE4  48 00 07 24 */	b .L_803E63C8
.L_803E5CA8:
/* 803E5CA8 003E2BE8  C0 5F 00 30 */	lfs f2, 0x30(r31)
/* 803E5CAC 003E2BEC  C0 1F 00 08 */	lfs f0, 8(r31)
/* 803E5CB0 003E2BF0  C0 3F 00 2C */	lfs f1, 0x2c(r31)
/* 803E5CB4 003E2BF4  EF A2 00 28 */	fsubs f29, f2, f0
/* 803E5CB8 003E2BF8  C0 1F 00 04 */	lfs f0, 4(r31)
/* 803E5CBC 003E2BFC  C3 E2 19 00 */	lfs f31, lbl_8051FC60@sda21(r2)
/* 803E5CC0 003E2C00  EF C1 00 28 */	fsubs f30, f1, f0
/* 803E5CC4 003E2C04  EF 9D 07 72 */	fmuls f28, f29, f29
/* 803E5CC8 003E2C08  EF 7E E7 BA */	fmadds f27, f30, f30, f28
/* 803E5CCC 003E2C0C  FC 1B F8 40 */	fcmpo cr0, f27, f31
/* 803E5CD0 003E2C10  40 81 00 18 */	ble .L_803E5CE8
/* 803E5CD4 003E2C14  40 81 00 10 */	ble .L_803E5CE4
/* 803E5CD8 003E2C18  FC 00 D8 34 */	frsqrte f0, f27
/* 803E5CDC 003E2C1C  EF E0 06 F2 */	fmuls f31, f0, f27
/* 803E5CE0 003E2C20  48 00 00 08 */	b .L_803E5CE8
.L_803E5CE4:
/* 803E5CE4 003E2C24  FF E0 D8 90 */	fmr f31, f27
.L_803E5CE8:
/* 803E5CE8 003E2C28  C0 03 00 B8 */	lfs f0, 0xb8(r3)
/* 803E5CEC 003E2C2C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803E5CF0 003E2C30  40 80 01 34 */	bge .L_803E5E24
/* 803E5CF4 003E2C34  2C 00 00 01 */	cmpwi r0, 1
/* 803E5CF8 003E2C38  41 82 02 64 */	beq .L_803E5F5C
/* 803E5CFC 003E2C3C  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E5D00 003E2C40  28 00 00 01 */	cmplwi r0, 1
/* 803E5D04 003E2C44  40 82 00 10 */	bne .L_803E5D14
/* 803E5D08 003E2C48  38 00 00 00 */	li r0, 0
/* 803E5D0C 003E2C4C  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E5D10 003E2C50  48 00 00 14 */	b .L_803E5D24
.L_803E5D14:
/* 803E5D14 003E2C54  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803E5D18 003E2C58  38 00 00 01 */	li r0, 1
/* 803E5D1C 003E2C5C  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E5D20 003E2C60  90 1F 00 84 */	stw r0, 0x84(r31)
.L_803E5D24:
/* 803E5D24 003E2C64  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E5D28 003E2C68  2C 00 00 02 */	cmpwi r0, 2
/* 803E5D2C 003E2C6C  41 82 02 30 */	beq .L_803E5F5C
/* 803E5D30 003E2C70  40 80 00 14 */	bge .L_803E5D44
/* 803E5D34 003E2C74  2C 00 00 00 */	cmpwi r0, 0
/* 803E5D38 003E2C78  41 82 00 18 */	beq .L_803E5D50
/* 803E5D3C 003E2C7C  40 80 00 B8 */	bge .L_803E5DF4
/* 803E5D40 003E2C80  48 00 02 1C */	b .L_803E5F5C
.L_803E5D44:
/* 803E5D44 003E2C84  2C 00 00 04 */	cmpwi r0, 4
/* 803E5D48 003E2C88  40 80 02 14 */	bge .L_803E5F5C
/* 803E5D4C 003E2C8C  48 00 00 18 */	b .L_803E5D64
.L_803E5D50:
/* 803E5D50 003E2C90  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E5D54 003E2C94  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E5D58 003E2C98  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E5D5C 003E2C9C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E5D60 003E2CA0  48 00 01 FC */	b .L_803E5F5C
.L_803E5D64:
/* 803E5D64 003E2CA4  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E5D68 003E2CA8  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5D6C 003E2CAC  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E5D70 003E2CB0  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E5D74 003E2CB4  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E5D78 003E2CB8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5D7C 003E2CBC  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E5D80 003E2CC0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5D84 003E2CC4  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E5D88 003E2CC8  4B CD BD C5 */	bl __cvt_fp2unsigned
/* 803E5D8C 003E2CCC  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E5D90 003E2CD0  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E5D94 003E2CD4  4B CE 38 0D */	bl rand
/* 803E5D98 003E2CD8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E5D9C 003E2CDC  3C 00 43 30 */	lis r0, 0x4330
/* 803E5DA0 003E2CE0  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803E5DA4 003E2CE4  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E5DA8 003E2CE8  90 01 00 28 */	stw r0, 0x28(r1)
/* 803E5DAC 003E2CEC  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E5DB0 003E2CF0  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 803E5DB4 003E2CF4  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E5DB8 003E2CF8  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E5DBC 003E2CFC  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5DC0 003E2D00  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5DC4 003E2D04  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E5DC8 003E2D08  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E5DCC 003E2D0C  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E5DD0 003E2D10  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5DD4 003E2D14  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E5DD8 003E2D18  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5DDC 003E2D1C  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E5DE0 003E2D20  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5DE4 003E2D24  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5DE8 003E2D28  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5DEC 003E2D2C  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E5DF0 003E2D30  48 00 01 6C */	b .L_803E5F5C
.L_803E5DF4:
/* 803E5DF4 003E2D34  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5DF8 003E2D38  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5DFC 003E2D3C  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E5E00 003E2D40  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5E04 003E2D44  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5E08 003E2D48  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E5E0C 003E2D4C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5E10 003E2D50  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5E14 003E2D54  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5E18 003E2D58  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5E1C 003E2D5C  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 803E5E20 003E2D60  48 00 01 3C */	b .L_803E5F5C
.L_803E5E24:
/* 803E5E24 003E2D64  C0 03 00 E0 */	lfs f0, 0xe0(r3)
/* 803E5E28 003E2D68  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803E5E2C 003E2D6C  40 80 01 30 */	bge .L_803E5F5C
/* 803E5E30 003E2D70  2C 00 00 02 */	cmpwi r0, 2
/* 803E5E34 003E2D74  41 82 01 28 */	beq .L_803E5F5C
/* 803E5E38 003E2D78  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E5E3C 003E2D7C  28 00 00 01 */	cmplwi r0, 1
/* 803E5E40 003E2D80  40 82 00 10 */	bne .L_803E5E50
/* 803E5E44 003E2D84  38 00 00 00 */	li r0, 0
/* 803E5E48 003E2D88  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E5E4C 003E2D8C  48 00 00 14 */	b .L_803E5E60
.L_803E5E50:
/* 803E5E50 003E2D90  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803E5E54 003E2D94  38 00 00 02 */	li r0, 2
/* 803E5E58 003E2D98  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E5E5C 003E2D9C  90 1F 00 84 */	stw r0, 0x84(r31)
.L_803E5E60:
/* 803E5E60 003E2DA0  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E5E64 003E2DA4  2C 00 00 02 */	cmpwi r0, 2
/* 803E5E68 003E2DA8  41 82 00 F4 */	beq .L_803E5F5C
/* 803E5E6C 003E2DAC  40 80 00 14 */	bge .L_803E5E80
/* 803E5E70 003E2DB0  2C 00 00 00 */	cmpwi r0, 0
/* 803E5E74 003E2DB4  41 82 00 18 */	beq .L_803E5E8C
/* 803E5E78 003E2DB8  40 80 00 B8 */	bge .L_803E5F30
/* 803E5E7C 003E2DBC  48 00 00 E0 */	b .L_803E5F5C
.L_803E5E80:
/* 803E5E80 003E2DC0  2C 00 00 04 */	cmpwi r0, 4
/* 803E5E84 003E2DC4  40 80 00 D8 */	bge .L_803E5F5C
/* 803E5E88 003E2DC8  48 00 00 18 */	b .L_803E5EA0
.L_803E5E8C:
/* 803E5E8C 003E2DCC  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E5E90 003E2DD0  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E5E94 003E2DD4  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E5E98 003E2DD8  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E5E9C 003E2DDC  48 00 00 C0 */	b .L_803E5F5C
.L_803E5EA0:
/* 803E5EA0 003E2DE0  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E5EA4 003E2DE4  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5EA8 003E2DE8  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E5EAC 003E2DEC  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E5EB0 003E2DF0  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E5EB4 003E2DF4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5EB8 003E2DF8  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E5EBC 003E2DFC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5EC0 003E2E00  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E5EC4 003E2E04  4B CD BC 89 */	bl __cvt_fp2unsigned
/* 803E5EC8 003E2E08  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E5ECC 003E2E0C  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E5ED0 003E2E10  4B CE 36 D1 */	bl rand
/* 803E5ED4 003E2E14  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E5ED8 003E2E18  3C 00 43 30 */	lis r0, 0x4330
/* 803E5EDC 003E2E1C  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803E5EE0 003E2E20  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E5EE4 003E2E24  90 01 00 28 */	stw r0, 0x28(r1)
/* 803E5EE8 003E2E28  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E5EEC 003E2E2C  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 803E5EF0 003E2E30  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E5EF4 003E2E34  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E5EF8 003E2E38  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5EFC 003E2E3C  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5F00 003E2E40  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E5F04 003E2E44  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E5F08 003E2E48  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E5F0C 003E2E4C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5F10 003E2E50  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E5F14 003E2E54  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5F18 003E2E58  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E5F1C 003E2E5C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5F20 003E2E60  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5F24 003E2E64  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5F28 003E2E68  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E5F2C 003E2E6C  48 00 00 30 */	b .L_803E5F5C
.L_803E5F30:
/* 803E5F30 003E2E70  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5F34 003E2E74  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E5F38 003E2E78  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E5F3C 003E2E7C  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E5F40 003E2E80  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E5F44 003E2E84  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E5F48 003E2E88  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E5F4C 003E2E8C  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E5F50 003E2E90  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E5F54 003E2E94  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E5F58 003E2E98  D0 1F 00 44 */	stfs f0, 0x44(r31)
.L_803E5F5C:
/* 803E5F5C 003E2E9C  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803E5F60 003E2EA0  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5F64 003E2EA4  C0 23 02 98 */	lfs f1, 0x298(r3)
/* 803E5F68 003E2EA8  FC 1B 00 40 */	fcmpo cr0, f27, f0
/* 803E5F6C 003E2EAC  EC 5F 00 72 */	fmuls f2, f31, f1
/* 803E5F70 003E2EB0  40 81 00 1C */	ble .L_803E5F8C
/* 803E5F74 003E2EB4  EC 3E E7 BA */	fmadds f1, f30, f30, f28
/* 803E5F78 003E2EB8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E5F7C 003E2EBC  40 81 00 14 */	ble .L_803E5F90
/* 803E5F80 003E2EC0  FC 00 08 34 */	frsqrte f0, f1
/* 803E5F84 003E2EC4  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E5F88 003E2EC8  48 00 00 08 */	b .L_803E5F90
.L_803E5F8C:
/* 803E5F8C 003E2ECC  FC 20 00 90 */	fmr f1, f0
.L_803E5F90:
/* 803E5F90 003E2ED0  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5F94 003E2ED4  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803E5F98 003E2ED8  41 82 00 14 */	beq .L_803E5FAC
/* 803E5F9C 003E2EDC  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E5FA0 003E2EE0  EC 00 08 24 */	fdivs f0, f0, f1
/* 803E5FA4 003E2EE4  EF DE 00 32 */	fmuls f30, f30, f0
/* 803E5FA8 003E2EE8  EF BD 00 32 */	fmuls f29, f29, f0
.L_803E5FAC:
/* 803E5FAC 003E2EEC  EC 3E 00 B2 */	fmuls f1, f30, f2
/* 803E5FB0 003E2EF0  7F E3 FB 78 */	mr r3, r31
/* 803E5FB4 003E2EF4  EC 1D 00 B2 */	fmuls f0, f29, f2
/* 803E5FB8 003E2EF8  38 81 00 20 */	addi r4, r1, 0x20
/* 803E5FBC 003E2EFC  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803E5FC0 003E2F00  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803E5FC4 003E2F04  48 00 06 C9 */	bl "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
/* 803E5FC8 003E2F08  7F E3 FB 78 */	mr r3, r31
/* 803E5FCC 003E2F0C  48 00 08 C1 */	bl updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv
/* 803E5FD0 003E2F10  48 00 03 F8 */	b .L_803E63C8
.L_803E5FD4:
/* 803E5FD4 003E2F14  C0 3F 00 30 */	lfs f1, 0x30(r31)
/* 803E5FD8 003E2F18  C0 1F 00 08 */	lfs f0, 8(r31)
/* 803E5FDC 003E2F1C  C0 5F 00 2C */	lfs f2, 0x2c(r31)
/* 803E5FE0 003E2F20  EC 61 00 28 */	fsubs f3, f1, f0
/* 803E5FE4 003E2F24  C0 3F 00 04 */	lfs f1, 4(r31)
/* 803E5FE8 003E2F28  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E5FEC 003E2F2C  EC 22 08 28 */	fsubs f1, f2, f1
/* 803E5FF0 003E2F30  EC 43 00 F2 */	fmuls f2, f3, f3
/* 803E5FF4 003E2F34  EC 21 10 7A */	fmadds f1, f1, f1, f2
/* 803E5FF8 003E2F38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E5FFC 003E2F3C  40 81 00 14 */	ble .L_803E6010
/* 803E6000 003E2F40  40 81 00 14 */	ble .L_803E6014
/* 803E6004 003E2F44  FC 00 08 34 */	frsqrte f0, f1
/* 803E6008 003E2F48  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E600C 003E2F4C  48 00 00 08 */	b .L_803E6014
.L_803E6010:
/* 803E6010 003E2F50  FC 20 00 90 */	fmr f1, f0
.L_803E6014:
/* 803E6014 003E2F54  C0 03 02 48 */	lfs f0, 0x248(r3)
/* 803E6018 003E2F58  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E601C 003E2F5C  40 81 00 0C */	ble .L_803E6028
/* 803E6020 003E2F60  38 00 00 00 */	li r0, 0
/* 803E6024 003E2F64  90 1F 00 68 */	stw r0, 0x68(r31)
.L_803E6028:
/* 803E6028 003E2F68  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803E602C 003E2F6C  28 03 00 00 */	cmplwi r3, 0
/* 803E6030 003E2F70  41 82 01 E8 */	beq .L_803E6218
/* 803E6034 003E2F74  81 83 00 00 */	lwz r12, 0(r3)
/* 803E6038 003E2F78  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E603C 003E2F7C  7D 89 03 A6 */	mtctr r12
/* 803E6040 003E2F80  4E 80 04 21 */	bctrl 
/* 803E6044 003E2F84  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E6048 003E2F88  41 82 01 C4 */	beq .L_803E620C
/* 803E604C 003E2F8C  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803E6050 003E2F90  81 83 00 00 */	lwz r12, 0(r3)
/* 803E6054 003E2F94  81 8C 00 08 */	lwz r12, 8(r12)
/* 803E6058 003E2F98  7D 89 03 A6 */	mtctr r12
/* 803E605C 003E2F9C  4E 80 04 21 */	bctrl 
/* 803E6060 003E2FA0  2C 03 00 05 */	cmpwi r3, 5
/* 803E6064 003E2FA4  41 82 00 20 */	beq .L_803E6084
/* 803E6068 003E2FA8  40 80 00 10 */	bge .L_803E6078
/* 803E606C 003E2FAC  2C 03 FF FF */	cmpwi r3, -1
/* 803E6070 003E2FB0  41 82 03 58 */	beq .L_803E63C8
/* 803E6074 003E2FB4  48 00 03 54 */	b .L_803E63C8
.L_803E6078:
/* 803E6078 003E2FB8  2C 03 00 07 */	cmpwi r3, 7
/* 803E607C 003E2FBC  40 80 03 4C */	bge .L_803E63C8
/* 803E6080 003E2FC0  48 00 00 C8 */	b .L_803E6148
.L_803E6084:
/* 803E6084 003E2FC4  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803E6088 003E2FC8  C0 1F 00 08 */	lfs f0, 8(r31)
/* 803E608C 003E2FCC  C0 23 00 08 */	lfs f1, 8(r3)
/* 803E6090 003E2FD0  C0 43 00 04 */	lfs f2, 4(r3)
/* 803E6094 003E2FD4  EC 61 00 28 */	fsubs f3, f1, f0
/* 803E6098 003E2FD8  C0 3F 00 04 */	lfs f1, 4(r31)
/* 803E609C 003E2FDC  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E60A0 003E2FE0  EC C2 08 28 */	fsubs f6, f2, f1
/* 803E60A4 003E2FE4  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803E60A8 003E2FE8  EC 26 09 BA */	fmadds f1, f6, f6, f1
/* 803E60AC 003E2FEC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E60B0 003E2FF0  40 81 00 14 */	ble .L_803E60C4
/* 803E60B4 003E2FF4  40 81 00 14 */	ble .L_803E60C8
/* 803E60B8 003E2FF8  FC 00 08 34 */	frsqrte f0, f1
/* 803E60BC 003E2FFC  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E60C0 003E3000  48 00 00 08 */	b .L_803E60C8
.L_803E60C4:
/* 803E60C4 003E3004  FC 20 00 90 */	fmr f1, f0
.L_803E60C8:
/* 803E60C8 003E3008  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E60CC 003E300C  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803E60D0 003E3010  41 82 00 14 */	beq .L_803E60E4
/* 803E60D4 003E3014  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E60D8 003E3018  EC 00 08 24 */	fdivs f0, f0, f1
/* 803E60DC 003E301C  EC C6 00 32 */	fmuls f6, f6, f0
/* 803E60E0 003E3020  EC 63 00 32 */	fmuls f3, f3, f0
.L_803E60E4:
/* 803E60E4 003E3024  80 BF 00 34 */	lwz r5, 0x34(r31)
/* 803E60E8 003E3028  7F E3 FB 78 */	mr r3, r31
/* 803E60EC 003E302C  C0 BF 00 14 */	lfs f5, 0x14(r31)
/* 803E60F0 003E3030  38 81 00 18 */	addi r4, r1, 0x18
/* 803E60F4 003E3034  C0 85 01 F8 */	lfs f4, 0x1f8(r5)
/* 803E60F8 003E3038  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 803E60FC 003E303C  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 803E6100 003E3040  EC 43 01 32 */	fmuls f2, f3, f4
/* 803E6104 003E3044  EC 61 01 72 */	fmuls f3, f1, f5
/* 803E6108 003E3048  EC 20 01 72 */	fmuls f1, f0, f5
/* 803E610C 003E304C  EC 06 01 32 */	fmuls f0, f6, f4
/* 803E6110 003E3050  EC 63 10 2A */	fadds f3, f3, f2
/* 803E6114 003E3054  EC 41 00 2A */	fadds f2, f1, f0
/* 803E6118 003E3058  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 803E611C 003E305C  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 803E6120 003E3060  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 803E6124 003E3064  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 803E6128 003E3068  EC 21 07 F2 */	fmuls f1, f1, f31
/* 803E612C 003E306C  EC 00 07 F2 */	fmuls f0, f0, f31
/* 803E6130 003E3070  EC 23 08 2A */	fadds f1, f3, f1
/* 803E6134 003E3074  EC 02 00 2A */	fadds f0, f2, f0
/* 803E6138 003E3078  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 803E613C 003E307C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803E6140 003E3080  48 00 05 4D */	bl "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
/* 803E6144 003E3084  48 00 02 84 */	b .L_803E63C8
.L_803E6148:
/* 803E6148 003E3088  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803E614C 003E308C  C0 1F 00 08 */	lfs f0, 8(r31)
/* 803E6150 003E3090  C0 23 00 08 */	lfs f1, 8(r3)
/* 803E6154 003E3094  C0 43 00 04 */	lfs f2, 4(r3)
/* 803E6158 003E3098  EC 61 00 28 */	fsubs f3, f1, f0
/* 803E615C 003E309C  C0 3F 00 04 */	lfs f1, 4(r31)
/* 803E6160 003E30A0  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6164 003E30A4  EC C2 08 28 */	fsubs f6, f2, f1
/* 803E6168 003E30A8  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803E616C 003E30AC  EC 26 09 BA */	fmadds f1, f6, f6, f1
/* 803E6170 003E30B0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E6174 003E30B4  40 81 00 14 */	ble .L_803E6188
/* 803E6178 003E30B8  40 81 00 14 */	ble .L_803E618C
/* 803E617C 003E30BC  FC 00 08 34 */	frsqrte f0, f1
/* 803E6180 003E30C0  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E6184 003E30C4  48 00 00 08 */	b .L_803E618C
.L_803E6188:
/* 803E6188 003E30C8  FC 20 00 90 */	fmr f1, f0
.L_803E618C:
/* 803E618C 003E30CC  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6190 003E30D0  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803E6194 003E30D4  41 82 00 14 */	beq .L_803E61A8
/* 803E6198 003E30D8  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E619C 003E30DC  EC 00 08 24 */	fdivs f0, f0, f1
/* 803E61A0 003E30E0  EC C6 00 32 */	fmuls f6, f6, f0
/* 803E61A4 003E30E4  EC 63 00 32 */	fmuls f3, f3, f0
.L_803E61A8:
/* 803E61A8 003E30E8  80 BF 00 34 */	lwz r5, 0x34(r31)
/* 803E61AC 003E30EC  7F E3 FB 78 */	mr r3, r31
/* 803E61B0 003E30F0  C0 BF 00 14 */	lfs f5, 0x14(r31)
/* 803E61B4 003E30F4  38 81 00 10 */	addi r4, r1, 0x10
/* 803E61B8 003E30F8  C0 85 02 20 */	lfs f4, 0x220(r5)
/* 803E61BC 003E30FC  C0 3F 00 10 */	lfs f1, 0x10(r31)
/* 803E61C0 003E3100  C0 1F 00 0C */	lfs f0, 0xc(r31)
/* 803E61C4 003E3104  EC 43 01 32 */	fmuls f2, f3, f4
/* 803E61C8 003E3108  EC 61 01 72 */	fmuls f3, f1, f5
/* 803E61CC 003E310C  EC 20 01 72 */	fmuls f1, f0, f5
/* 803E61D0 003E3110  EC 06 01 32 */	fmuls f0, f6, f4
/* 803E61D4 003E3114  EC 63 10 2A */	fadds f3, f3, f2
/* 803E61D8 003E3118  EC 41 00 2A */	fadds f2, f1, f0
/* 803E61DC 003E311C  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 803E61E0 003E3120  D0 41 00 10 */	stfs f2, 0x10(r1)
/* 803E61E4 003E3124  C0 3F 00 80 */	lfs f1, 0x80(r31)
/* 803E61E8 003E3128  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 803E61EC 003E312C  EC 21 07 F2 */	fmuls f1, f1, f31
/* 803E61F0 003E3130  EC 00 07 F2 */	fmuls f0, f0, f31
/* 803E61F4 003E3134  EC 23 08 2A */	fadds f1, f3, f1
/* 803E61F8 003E3138  EC 02 00 2A */	fadds f0, f2, f0
/* 803E61FC 003E313C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 803E6200 003E3140  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803E6204 003E3144  48 00 04 89 */	bl "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
/* 803E6208 003E3148  48 00 01 C0 */	b .L_803E63C8
.L_803E620C:
/* 803E620C 003E314C  38 00 00 00 */	li r0, 0
/* 803E6210 003E3150  90 1F 00 68 */	stw r0, 0x68(r31)
/* 803E6214 003E3154  48 00 01 B4 */	b .L_803E63C8
.L_803E6218:
/* 803E6218 003E3158  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803E621C 003E315C  2C 03 00 02 */	cmpwi r3, 2
/* 803E6220 003E3160  41 82 01 A8 */	beq .L_803E63C8
/* 803E6224 003E3164  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E6228 003E3168  28 00 00 01 */	cmplwi r0, 1
/* 803E622C 003E316C  40 82 00 10 */	bne .L_803E623C
/* 803E6230 003E3170  38 00 00 00 */	li r0, 0
/* 803E6234 003E3174  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E6238 003E3178  48 00 00 10 */	b .L_803E6248
.L_803E623C:
/* 803E623C 003E317C  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E6240 003E3180  38 00 00 02 */	li r0, 2
/* 803E6244 003E3184  90 1F 00 84 */	stw r0, 0x84(r31)
.L_803E6248:
/* 803E6248 003E3188  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E624C 003E318C  2C 00 00 02 */	cmpwi r0, 2
/* 803E6250 003E3190  41 82 01 78 */	beq .L_803E63C8
/* 803E6254 003E3194  40 80 00 14 */	bge .L_803E6268
/* 803E6258 003E3198  2C 00 00 00 */	cmpwi r0, 0
/* 803E625C 003E319C  41 82 00 18 */	beq .L_803E6274
/* 803E6260 003E31A0  40 80 00 B8 */	bge .L_803E6318
/* 803E6264 003E31A4  48 00 01 64 */	b .L_803E63C8
.L_803E6268:
/* 803E6268 003E31A8  2C 00 00 04 */	cmpwi r0, 4
/* 803E626C 003E31AC  40 80 01 5C */	bge .L_803E63C8
/* 803E6270 003E31B0  48 00 00 18 */	b .L_803E6288
.L_803E6274:
/* 803E6274 003E31B4  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E6278 003E31B8  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E627C 003E31BC  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E6280 003E31C0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E6284 003E31C4  48 00 01 44 */	b .L_803E63C8
.L_803E6288:
/* 803E6288 003E31C8  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E628C 003E31CC  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6290 003E31D0  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E6294 003E31D4  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E6298 003E31D8  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E629C 003E31DC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E62A0 003E31E0  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E62A4 003E31E4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E62A8 003E31E8  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E62AC 003E31EC  4B CD B8 A1 */	bl __cvt_fp2unsigned
/* 803E62B0 003E31F0  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E62B4 003E31F4  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E62B8 003E31F8  4B CE 32 E9 */	bl rand
/* 803E62BC 003E31FC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E62C0 003E3200  3C 00 43 30 */	lis r0, 0x4330
/* 803E62C4 003E3204  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803E62C8 003E3208  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E62CC 003E320C  90 01 00 28 */	stw r0, 0x28(r1)
/* 803E62D0 003E3210  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E62D4 003E3214  C8 21 00 28 */	lfd f1, 0x28(r1)
/* 803E62D8 003E3218  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E62DC 003E321C  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E62E0 003E3220  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E62E4 003E3224  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E62E8 003E3228  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E62EC 003E322C  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E62F0 003E3230  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E62F4 003E3234  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E62F8 003E3238  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E62FC 003E323C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E6300 003E3240  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E6304 003E3244  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6308 003E3248  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E630C 003E324C  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E6310 003E3250  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E6314 003E3254  48 00 00 B4 */	b .L_803E63C8
.L_803E6318:
/* 803E6318 003E3258  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E631C 003E325C  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E6320 003E3260  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E6324 003E3264  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E6328 003E3268  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E632C 003E326C  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E6330 003E3270  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E6334 003E3274  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6338 003E3278  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E633C 003E327C  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E6340 003E3280  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 803E6344 003E3284  48 00 00 84 */	b .L_803E63C8
.L_803E6348:
/* 803E6348 003E3288  C0 7F 00 70 */	lfs f3, 0x70(r31)
/* 803E634C 003E328C  7F E3 FB 78 */	mr r3, r31
/* 803E6350 003E3290  C0 5F 00 08 */	lfs f2, 8(r31)
/* 803E6354 003E3294  38 81 00 08 */	addi r4, r1, 8
/* 803E6358 003E3298  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 803E635C 003E329C  C0 1F 00 04 */	lfs f0, 4(r31)
/* 803E6360 003E32A0  EC A3 10 28 */	fsubs f5, f3, f2
/* 803E6364 003E32A4  C0 7F 00 78 */	lfs f3, 0x78(r31)
/* 803E6368 003E32A8  EC 41 00 28 */	fsubs f2, f1, f0
/* 803E636C 003E32AC  C0 3F 00 74 */	lfs f1, 0x74(r31)
/* 803E6370 003E32B0  C0 9F 00 80 */	lfs f4, 0x80(r31)
/* 803E6374 003E32B4  EC C5 01 F2 */	fmuls f6, f5, f7
/* 803E6378 003E32B8  EC A3 02 72 */	fmuls f5, f3, f9
/* 803E637C 003E32BC  C0 1F 00 7C */	lfs f0, 0x7c(r31)
/* 803E6380 003E32C0  EC 42 01 F2 */	fmuls f2, f2, f7
/* 803E6384 003E32C4  C1 1F 00 14 */	lfs f8, 0x14(r31)
/* 803E6388 003E32C8  EC 21 02 72 */	fmuls f1, f1, f9
/* 803E638C 003E32CC  C0 FF 00 10 */	lfs f7, 0x10(r31)
/* 803E6390 003E32D0  C0 7F 00 0C */	lfs f3, 0xc(r31)
/* 803E6394 003E32D4  EC A6 28 2A */	fadds f5, f6, f5
/* 803E6398 003E32D8  EC 84 07 F2 */	fmuls f4, f4, f31
/* 803E639C 003E32DC  EC 22 08 2A */	fadds f1, f2, f1
/* 803E63A0 003E32E0  EC 00 07 F2 */	fmuls f0, f0, f31
/* 803E63A4 003E32E4  EC C7 02 32 */	fmuls f6, f7, f8
/* 803E63A8 003E32E8  EC 85 20 2A */	fadds f4, f5, f4
/* 803E63AC 003E32EC  EC 43 02 32 */	fmuls f2, f3, f8
/* 803E63B0 003E32F0  EC 01 00 2A */	fadds f0, f1, f0
/* 803E63B4 003E32F4  EC 26 20 2A */	fadds f1, f6, f4
/* 803E63B8 003E32F8  EC 02 00 2A */	fadds f0, f2, f0
/* 803E63BC 003E32FC  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803E63C0 003E3300  D0 01 00 08 */	stfs f0, 8(r1)
/* 803E63C4 003E3304  48 00 02 C9 */	bl "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"
.L_803E63C8:
/* 803E63C8 003E3308  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E63CC 003E330C  2C 00 00 00 */	cmpwi r0, 0
/* 803E63D0 003E3310  41 82 02 78 */	beq .L_803E6648
/* 803E63D4 003E3314  7F E3 FB 78 */	mr r3, r31
/* 803E63D8 003E3318  4B FD A7 A9 */	bl calcModelBaseMtx___Q33ebi5title8TObjBaseFv
/* 803E63DC 003E331C  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E63E0 003E3320  2C 00 00 02 */	cmpwi r0, 2
/* 803E63E4 003E3324  41 82 01 6C */	beq .L_803E6550
/* 803E63E8 003E3328  40 80 00 14 */	bge .L_803E63FC
/* 803E63EC 003E332C  2C 00 00 00 */	cmpwi r0, 0
/* 803E63F0 003E3330  41 82 01 CC */	beq .L_803E65BC
/* 803E63F4 003E3334  40 80 01 24 */	bge .L_803E6518
/* 803E63F8 003E3338  48 00 01 C4 */	b .L_803E65BC
.L_803E63FC:
/* 803E63FC 003E333C  2C 00 00 06 */	cmpwi r0, 6
/* 803E6400 003E3340  40 80 01 BC */	bge .L_803E65BC
/* 803E6404 003E3344  2C 00 00 04 */	cmpwi r0, 4
/* 803E6408 003E3348  40 80 01 48 */	bge .L_803E6550
/* 803E640C 003E334C  38 7F 00 4C */	addi r3, r31, 0x4c
/* 803E6410 003E3350  4B C8 12 99 */	bl update__12J3DFrameCtrlFv
/* 803E6414 003E3354  38 7F 00 38 */	addi r3, r31, 0x38
/* 803E6418 003E3358  4B C8 12 91 */	bl update__12J3DFrameCtrlFv
/* 803E641C 003E335C  80 9F 00 90 */	lwz r4, 0x90(r31)
/* 803E6420 003E3360  28 04 00 00 */	cmplwi r4, 0
/* 803E6424 003E3364  41 82 00 38 */	beq .L_803E645C
/* 803E6428 003E3368  80 7F 00 8C */	lwz r3, 0x8c(r31)
/* 803E642C 003E336C  3C 00 43 30 */	lis r0, 0x4330
/* 803E6430 003E3370  90 01 00 28 */	stw r0, 0x28(r1)
/* 803E6434 003E3374  C8 42 19 38 */	lfd f2, lbl_8051FC98@sda21(r2)
/* 803E6438 003E3378  90 61 00 2C */	stw r3, 0x2c(r1)
/* 803E643C 003E337C  C8 01 00 28 */	lfd f0, 0x28(r1)
/* 803E6440 003E3380  90 81 00 34 */	stw r4, 0x34(r1)
/* 803E6444 003E3384  EC 20 10 28 */	fsubs f1, f0, f2
/* 803E6448 003E3388  90 01 00 30 */	stw r0, 0x30(r1)
/* 803E644C 003E338C  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803E6450 003E3390  EC 00 10 28 */	fsubs f0, f0, f2
/* 803E6454 003E3394  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E6458 003E3398  48 00 00 08 */	b .L_803E6460
.L_803E645C:
/* 803E645C 003E339C  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
.L_803E6460:
/* 803E6460 003E33A0  C3 62 19 30 */	lfs f27, lbl_8051FC90@sda21(r2)
/* 803E6464 003E33A4  C0 02 19 04 */	lfs f0, lbl_8051FC64@sda21(r2)
/* 803E6468 003E33A8  EC 5B 08 28 */	fsubs f2, f27, f1
/* 803E646C 003E33AC  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803E6470 003E33B0  4C 40 13 82 */	cror 2, 0, 2
/* 803E6474 003E33B4  40 82 00 0C */	bne .L_803E6480
/* 803E6478 003E33B8  EF 62 00 24 */	fdivs f27, f2, f0
/* 803E647C 003E33BC  48 00 00 24 */	b .L_803E64A0
.L_803E6480:
/* 803E6480 003E33C0  C0 02 19 60 */	lfs f0, lbl_8051FCC0@sda21(r2)
/* 803E6484 003E33C4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803E6488 003E33C8  4C 40 13 82 */	cror 2, 0, 2
/* 803E648C 003E33CC  40 82 00 08 */	bne .L_803E6494
/* 803E6490 003E33D0  48 00 00 10 */	b .L_803E64A0
.L_803E6494:
/* 803E6494 003E33D4  C0 22 19 94 */	lfs f1, lbl_8051FCF4@sda21(r2)
/* 803E6498 003E33D8  FC 00 08 50 */	fneg f0, f1
/* 803E649C 003E33DC  EF 61 00 BA */	fmadds f27, f1, f2, f0
.L_803E64A0:
/* 803E64A0 003E33E0  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803E64A4 003E33E4  38 80 00 00 */	li r4, 0
/* 803E64A8 003E33E8  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E64AC 003E33EC  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 803E64B0 003E33F0  C0 5F 00 48 */	lfs f2, 0x48(r31)
/* 803E64B4 003E33F4  EC 20 D8 28 */	fsubs f1, f0, f27
/* 803E64B8 003E33F8  83 BF 00 28 */	lwz r29, 0x28(r31)
/* 803E64BC 003E33FC  C0 1F 00 5C */	lfs f0, 0x5c(r31)
/* 803E64C0 003E3400  80 65 00 18 */	lwz r3, 0x18(r5)
/* 803E64C4 003E3404  D0 03 00 08 */	stfs f0, 8(r3)
/* 803E64C8 003E3408  80 65 00 14 */	lwz r3, 0x14(r5)
/* 803E64CC 003E340C  D0 43 00 08 */	stfs f2, 8(r3)
/* 803E64D0 003E3410  83 C5 00 20 */	lwz r30, 0x20(r5)
/* 803E64D4 003E3414  7F C3 F3 78 */	mr r3, r30
/* 803E64D8 003E3418  81 9E 00 00 */	lwz r12, 0(r30)
/* 803E64DC 003E341C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E64E0 003E3420  7D 89 03 A6 */	mtctr r12
/* 803E64E4 003E3424  4E 80 04 21 */	bctrl 
/* 803E64E8 003E3428  7F C3 F3 78 */	mr r3, r30
/* 803E64EC 003E342C  FC 20 D8 90 */	fmr f1, f27
/* 803E64F0 003E3430  81 9E 00 00 */	lwz r12, 0(r30)
/* 803E64F4 003E3434  38 80 00 01 */	li r4, 1
/* 803E64F8 003E3438  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E64FC 003E343C  7D 89 03 A6 */	mtctr r12
/* 803E6500 003E3440  4E 80 04 21 */	bctrl 
/* 803E6504 003E3444  80 7D 00 04 */	lwz r3, 4(r29)
/* 803E6508 003E3448  80 63 00 28 */	lwz r3, 0x28(r3)
/* 803E650C 003E344C  80 63 00 00 */	lwz r3, 0(r3)
/* 803E6510 003E3450  93 C3 00 54 */	stw r30, 0x54(r3)
/* 803E6514 003E3454  48 00 00 A8 */	b .L_803E65BC
.L_803E6518:
/* 803E6518 003E3458  38 7F 00 38 */	addi r3, r31, 0x38
/* 803E651C 003E345C  4B C8 11 8D */	bl update__12J3DFrameCtrlFv
/* 803E6520 003E3460  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803E6524 003E3464  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 803E6528 003E3468  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 803E652C 003E346C  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 803E6530 003E3470  80 65 00 14 */	lwz r3, 0x14(r5)
/* 803E6534 003E3474  D0 03 00 08 */	stfs f0, 8(r3)
/* 803E6538 003E3478  80 64 00 04 */	lwz r3, 4(r4)
/* 803E653C 003E347C  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 803E6540 003E3480  80 63 00 28 */	lwz r3, 0x28(r3)
/* 803E6544 003E3484  80 63 00 00 */	lwz r3, 0(r3)
/* 803E6548 003E3488  90 03 00 54 */	stw r0, 0x54(r3)
/* 803E654C 003E348C  48 00 00 70 */	b .L_803E65BC
.L_803E6550:
/* 803E6550 003E3490  80 BF 00 34 */	lwz r5, 0x34(r31)
/* 803E6554 003E3494  38 7F 00 38 */	addi r3, r31, 0x38
/* 803E6558 003E3498  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803E655C 003E349C  C0 7F 00 14 */	lfs f3, 0x14(r31)
/* 803E6560 003E34A0  C0 45 01 58 */	lfs f2, 0x158(r5)
/* 803E6564 003E34A4  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E6568 003E34A8  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803E656C 003E34AC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 803E6570 003E34B0  C0 7F 00 64 */	lfs f3, 0x64(r31)
/* 803E6574 003E34B4  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6578 003E34B8  C0 22 19 60 */	lfs f1, lbl_8051FCC0@sda21(r2)
/* 803E657C 003E34BC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 803E6580 003E34C0  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6584 003E34C4  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E6588 003E34C8  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 803E658C 003E34CC  4B C8 11 1D */	bl update__12J3DFrameCtrlFv
/* 803E6590 003E34D0  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803E6594 003E34D4  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 803E6598 003E34D8  80 A3 00 18 */	lwz r5, 0x18(r3)
/* 803E659C 003E34DC  C0 1F 00 48 */	lfs f0, 0x48(r31)
/* 803E65A0 003E34E0  80 65 00 14 */	lwz r3, 0x14(r5)
/* 803E65A4 003E34E4  D0 03 00 08 */	stfs f0, 8(r3)
/* 803E65A8 003E34E8  80 64 00 04 */	lwz r3, 4(r4)
/* 803E65AC 003E34EC  80 05 00 1C */	lwz r0, 0x1c(r5)
/* 803E65B0 003E34F0  80 63 00 28 */	lwz r3, 0x28(r3)
/* 803E65B4 003E34F4  80 63 00 00 */	lwz r3, 0(r3)
/* 803E65B8 003E34F8  90 03 00 54 */	stw r0, 0x54(r3)
.L_803E65BC:
/* 803E65BC 003E34FC  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 803E65C0 003E3500  81 83 00 00 */	lwz r12, 0(r3)
/* 803E65C4 003E3504  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803E65C8 003E3508  7D 89 03 A6 */	mtctr r12
/* 803E65CC 003E350C  4E 80 04 21 */	bctrl 
/* 803E65D0 003E3510  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 803E65D4 003E3514  38 82 19 98 */	addi r4, r2, lbl_8051FCF8@sda21
/* 803E65D8 003E3518  80 63 00 04 */	lwz r3, 4(r3)
/* 803E65DC 003E351C  80 63 00 54 */	lwz r3, 0x54(r3)
/* 803E65E0 003E3520  4B C4 87 A5 */	bl getIndex__10JUTNameTabCFPCc
/* 803E65E4 003E3524  80 9F 00 28 */	lwz r4, 0x28(r31)
/* 803E65E8 003E3528  1C 03 00 30 */	mulli r0, r3, 0x30
/* 803E65EC 003E352C  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803E65F0 003E3530  80 84 00 84 */	lwz r4, 0x84(r4)
/* 803E65F4 003E3534  C0 03 01 08 */	lfs f0, 0x108(r3)
/* 803E65F8 003E3538  80 64 00 0C */	lwz r3, 0xc(r4)
/* 803E65FC 003E353C  7C 83 02 14 */	add r4, r3, r0
/* 803E6600 003E3540  C0 24 00 0C */	lfs f1, 0xc(r4)
/* 803E6604 003E3544  EC 01 00 2A */	fadds f0, f1, f0
/* 803E6608 003E3548  D0 04 00 0C */	stfs f0, 0xc(r4)
/* 803E660C 003E354C  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803E6610 003E3550  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 803E6614 003E3554  C0 03 01 30 */	lfs f0, 0x130(r3)
/* 803E6618 003E3558  EC 01 00 2A */	fadds f0, f1, f0
/* 803E661C 003E355C  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 803E6620 003E3560  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 803E6624 003E3564  81 83 00 00 */	lwz r12, 0(r3)
/* 803E6628 003E3568  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E662C 003E356C  7D 89 03 A6 */	mtctr r12
/* 803E6630 003E3570  4E 80 04 21 */	bctrl 
/* 803E6634 003E3574  80 7F 00 28 */	lwz r3, 0x28(r31)
/* 803E6638 003E3578  81 83 00 00 */	lwz r12, 0(r3)
/* 803E663C 003E357C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 803E6640 003E3580  7D 89 03 A6 */	mtctr r12
/* 803E6644 003E3584  4E 80 04 21 */	bctrl 
.L_803E6648:
/* 803E6648 003E3588  E3 E1 00 98 */	psq_l f31, 152(r1), 0, qr0
/* 803E664C 003E358C  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 803E6650 003E3590  E3 C1 00 88 */	psq_l f30, 136(r1), 0, qr0
/* 803E6654 003E3594  CB C1 00 80 */	lfd f30, 0x80(r1)
/* 803E6658 003E3598  E3 A1 00 78 */	psq_l f29, 120(r1), 0, qr0
/* 803E665C 003E359C  CB A1 00 70 */	lfd f29, 0x70(r1)
/* 803E6660 003E35A0  E3 81 00 68 */	psq_l f28, 104(r1), 0, qr0
/* 803E6664 003E35A4  CB 81 00 60 */	lfd f28, 0x60(r1)
/* 803E6668 003E35A8  E3 61 00 58 */	psq_l f27, 88(r1), 0, qr0
/* 803E666C 003E35AC  CB 61 00 50 */	lfd f27, 0x50(r1)
/* 803E6670 003E35B0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803E6674 003E35B4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803E6678 003E35B8  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 803E667C 003E35BC  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803E6680 003E35C0  7C 08 03 A6 */	mtlr r0
/* 803E6684 003E35C4  38 21 00 A0 */	addi r1, r1, 0xa0
/* 803E6688 003E35C8  4E 80 00 20 */	blr 
.endfn update__Q43ebi5title6Pikmin5TUnitFv

.fn "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>", global
/* 803E668C 003E35CC  C0 A4 00 00 */	lfs f5, 0(r4)
/* 803E6690 003E35D0  C0 04 00 04 */	lfs f0, 4(r4)
/* 803E6694 003E35D4  EC 25 01 72 */	fmuls f1, f5, f5
/* 803E6698 003E35D8  80 A3 00 34 */	lwz r5, 0x34(r3)
/* 803E669C 003E35DC  EC C0 00 32 */	fmuls f6, f0, f0
/* 803E66A0 003E35E0  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E66A4 003E35E4  C0 45 09 64 */	lfs f2, 0x964(r5)
/* 803E66A8 003E35E8  C0 65 09 68 */	lfs f3, 0x968(r5)
/* 803E66AC 003E35EC  EC 21 30 2A */	fadds f1, f1, f6
/* 803E66B0 003E35F0  C0 85 09 60 */	lfs f4, 0x960(r5)
/* 803E66B4 003E35F4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E66B8 003E35F8  40 81 00 1C */	ble .L_803E66D4
/* 803E66BC 003E35FC  EC 25 31 7A */	fmadds f1, f5, f5, f6
/* 803E66C0 003E3600  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E66C4 003E3604  40 81 00 14 */	ble .L_803E66D8
/* 803E66C8 003E3608  FC 00 08 34 */	frsqrte f0, f1
/* 803E66CC 003E360C  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E66D0 003E3610  48 00 00 08 */	b .L_803E66D8
.L_803E66D4:
/* 803E66D4 003E3614  FC 20 00 90 */	fmr f1, f0
.L_803E66D8:
/* 803E66D8 003E3618  FC 01 20 40 */	fcmpo cr0, f1, f4
/* 803E66DC 003E361C  40 81 00 0C */	ble .L_803E66E8
/* 803E66E0 003E3620  FC 20 20 90 */	fmr f1, f4
/* 803E66E4 003E3624  48 00 00 14 */	b .L_803E66F8
.L_803E66E8:
/* 803E66E8 003E3628  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E66EC 003E362C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E66F0 003E3630  40 80 00 08 */	bge .L_803E66F8
/* 803E66F4 003E3634  FC 20 00 90 */	fmr f1, f0
.L_803E66F8:
/* 803E66F8 003E3638  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 803E66FC 003E363C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6700 003E3640  C0 A4 00 04 */	lfs f5, 4(r4)
/* 803E6704 003E3644  C0 84 00 00 */	lfs f4, 0(r4)
/* 803E6708 003E3648  EC 25 01 72 */	fmuls f1, f5, f5
/* 803E670C 003E364C  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 803E6710 003E3650  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E6714 003E3654  40 81 00 14 */	ble .L_803E6728
/* 803E6718 003E3658  40 81 00 14 */	ble .L_803E672C
/* 803E671C 003E365C  FC 00 08 34 */	frsqrte f0, f1
/* 803E6720 003E3660  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E6724 003E3664  48 00 00 08 */	b .L_803E672C
.L_803E6728:
/* 803E6728 003E3668  FC 20 00 90 */	fmr f1, f0
.L_803E672C:
/* 803E672C 003E366C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6730 003E3670  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803E6734 003E3674  41 82 00 14 */	beq .L_803E6748
/* 803E6738 003E3678  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E673C 003E367C  EC 00 08 24 */	fdivs f0, f0, f1
/* 803E6740 003E3680  EC 84 00 32 */	fmuls f4, f4, f0
/* 803E6744 003E3684  EC A5 00 32 */	fmuls f5, f5, f0
.L_803E6748:
/* 803E6748 003E3688  EC E5 00 B2 */	fmuls f7, f5, f2
/* 803E674C 003E368C  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6750 003E3690  EC C4 00 B2 */	fmuls f6, f4, f2
/* 803E6754 003E3694  EC 27 01 F2 */	fmuls f1, f7, f7
/* 803E6758 003E3698  FC 40 30 90 */	fmr f2, f6
/* 803E675C 003E369C  FC 80 38 90 */	fmr f4, f7
/* 803E6760 003E36A0  EC A6 09 BA */	fmadds f5, f6, f6, f1
/* 803E6764 003E36A4  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803E6768 003E36A8  40 81 00 18 */	ble .L_803E6780
/* 803E676C 003E36AC  40 81 00 10 */	ble .L_803E677C
/* 803E6770 003E36B0  FC 00 28 34 */	frsqrte f0, f5
/* 803E6774 003E36B4  EC 00 01 72 */	fmuls f0, f0, f5
/* 803E6778 003E36B8  48 00 00 08 */	b .L_803E6780
.L_803E677C:
/* 803E677C 003E36BC  FC 00 28 90 */	fmr f0, f5
.L_803E6780:
/* 803E6780 003E36C0  FC 00 18 40 */	fcmpo cr0, f0, f3
/* 803E6784 003E36C4  40 81 00 58 */	ble .L_803E67DC
/* 803E6788 003E36C8  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E678C 003E36CC  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803E6790 003E36D0  40 81 00 1C */	ble .L_803E67AC
/* 803E6794 003E36D4  EC 26 09 BA */	fmadds f1, f6, f6, f1
/* 803E6798 003E36D8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E679C 003E36DC  40 81 00 14 */	ble .L_803E67B0
/* 803E67A0 003E36E0  FC 00 08 34 */	frsqrte f0, f1
/* 803E67A4 003E36E4  EC 20 00 72 */	fmuls f1, f0, f1
/* 803E67A8 003E36E8  48 00 00 08 */	b .L_803E67B0
.L_803E67AC:
/* 803E67AC 003E36EC  FC 20 00 90 */	fmr f1, f0
.L_803E67B0:
/* 803E67B0 003E36F0  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E67B4 003E36F4  FC 00 08 00 */	fcmpu cr0, f0, f1
/* 803E67B8 003E36F8  41 82 00 14 */	beq .L_803E67CC
/* 803E67BC 003E36FC  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E67C0 003E3700  EC 00 08 24 */	fdivs f0, f0, f1
/* 803E67C4 003E3704  EC 42 00 32 */	fmuls f2, f2, f0
/* 803E67C8 003E3708  EC 84 00 32 */	fmuls f4, f4, f0
.L_803E67CC:
/* 803E67CC 003E370C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803E67D0 003E3710  EC 84 00 F2 */	fmuls f4, f4, f3
/* 803E67D4 003E3714  FC C0 10 90 */	fmr f6, f2
/* 803E67D8 003E3718  FC E0 20 90 */	fmr f7, f4
.L_803E67DC:
/* 803E67DC 003E371C  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803E67E0 003E3720  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 803E67E4 003E3724  EC 20 30 2A */	fadds f1, f0, f6
/* 803E67E8 003E3728  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E67EC 003E372C  EC 42 38 2A */	fadds f2, f2, f7
/* 803E67F0 003E3730  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 803E67F4 003E3734  D0 43 00 10 */	stfs f2, 0x10(r3)
/* 803E67F8 003E3738  C0 63 00 0C */	lfs f3, 0xc(r3)
/* 803E67FC 003E373C  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 803E6800 003E3740  EC 23 00 F2 */	fmuls f1, f3, f3
/* 803E6804 003E3744  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803E6808 003E3748  EC 21 10 2A */	fadds f1, f1, f2
/* 803E680C 003E374C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803E6810 003E3750  40 81 00 1C */	ble .L_803E682C
/* 803E6814 003E3754  EC 43 10 FA */	fmadds f2, f3, f3, f2
/* 803E6818 003E3758  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 803E681C 003E375C  40 81 00 14 */	ble .L_803E6830
/* 803E6820 003E3760  FC 00 10 34 */	frsqrte f0, f2
/* 803E6824 003E3764  EC 40 00 B2 */	fmuls f2, f0, f2
/* 803E6828 003E3768  48 00 00 08 */	b .L_803E6830
.L_803E682C:
/* 803E682C 003E376C  FC 40 00 90 */	fmr f2, f0
.L_803E6830:
/* 803E6830 003E3770  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6834 003E3774  FC 00 10 00 */	fcmpu cr0, f0, f2
/* 803E6838 003E3778  41 82 00 24 */	beq .L_803E685C
/* 803E683C 003E377C  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E6840 003E3780  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803E6844 003E3784  EC 21 10 24 */	fdivs f1, f1, f2
/* 803E6848 003E3788  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E684C 003E378C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 803E6850 003E3790  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 803E6854 003E3794  EC 00 00 72 */	fmuls f0, f0, f1
/* 803E6858 003E3798  D0 03 00 10 */	stfs f0, 0x10(r3)
.L_803E685C:
/* 803E685C 003E379C  C0 63 00 14 */	lfs f3, 0x14(r3)
/* 803E6860 003E37A0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803E6864 003E37A4  C0 43 00 10 */	lfs f2, 0x10(r3)
/* 803E6868 003E37A8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E686C 003E37AC  C0 23 00 04 */	lfs f1, 4(r3)
/* 803E6870 003E37B0  EC 42 00 F2 */	fmuls f2, f2, f3
/* 803E6874 003E37B4  C0 63 00 08 */	lfs f3, 8(r3)
/* 803E6878 003E37B8  EC 01 00 2A */	fadds f0, f1, f0
/* 803E687C 003E37BC  EC 23 10 2A */	fadds f1, f3, f2
/* 803E6880 003E37C0  D0 03 00 04 */	stfs f0, 4(r3)
/* 803E6884 003E37C4  D0 23 00 08 */	stfs f1, 8(r3)
/* 803E6888 003E37C8  4E 80 00 20 */	blr 
.endfn "updateSmoothWalk___Q43ebi5title6Pikmin5TUnitFR10Vector2<f>"

.fn updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv, global
/* 803E688C 003E37CC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803E6890 003E37D0  7C 08 02 A6 */	mflr r0
/* 803E6894 003E37D4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803E6898 003E37D8  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803E689C 003E37DC  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803E68A0 003E37E0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803E68A4 003E37E4  7C 7F 1B 78 */	mr r31, r3
/* 803E68A8 003E37E8  80 63 00 68 */	lwz r3, 0x68(r3)
/* 803E68AC 003E37EC  28 03 00 00 */	cmplwi r3, 0
/* 803E68B0 003E37F0  41 82 03 10 */	beq .L_803E6BC0
/* 803E68B4 003E37F4  81 83 00 00 */	lwz r12, 0(r3)
/* 803E68B8 003E37F8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803E68BC 003E37FC  7D 89 03 A6 */	mtctr r12
/* 803E68C0 003E3800  4E 80 04 21 */	bctrl 
/* 803E68C4 003E3804  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803E68C8 003E3808  41 82 02 F8 */	beq .L_803E6BC0
/* 803E68CC 003E380C  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803E68D0 003E3810  C0 1F 00 08 */	lfs f0, 8(r31)
/* 803E68D4 003E3814  C0 23 00 08 */	lfs f1, 8(r3)
/* 803E68D8 003E3818  C0 43 00 04 */	lfs f2, 4(r3)
/* 803E68DC 003E381C  EC 61 00 28 */	fsubs f3, f1, f0
/* 803E68E0 003E3820  C0 3F 00 04 */	lfs f1, 4(r31)
/* 803E68E4 003E3824  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E68E8 003E3828  EC 22 08 28 */	fsubs f1, f2, f1
/* 803E68EC 003E382C  EC 43 00 F2 */	fmuls f2, f3, f3
/* 803E68F0 003E3830  EF E1 10 7A */	fmadds f31, f1, f1, f2
/* 803E68F4 003E3834  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803E68F8 003E3838  40 81 00 14 */	ble .L_803E690C
/* 803E68FC 003E383C  40 81 00 14 */	ble .L_803E6910
/* 803E6900 003E3840  FC 00 F8 34 */	frsqrte f0, f31
/* 803E6904 003E3844  EF E0 07 F2 */	fmuls f31, f0, f31
/* 803E6908 003E3848  48 00 00 08 */	b .L_803E6910
.L_803E690C:
/* 803E690C 003E384C  FF E0 00 90 */	fmr f31, f0
.L_803E6910:
/* 803E6910 003E3850  81 83 00 00 */	lwz r12, 0(r3)
/* 803E6914 003E3854  81 8C 00 08 */	lwz r12, 8(r12)
/* 803E6918 003E3858  7D 89 03 A6 */	mtctr r12
/* 803E691C 003E385C  4E 80 04 21 */	bctrl 
/* 803E6920 003E3860  2C 03 00 05 */	cmpwi r3, 5
/* 803E6924 003E3864  41 82 00 20 */	beq .L_803E6944
/* 803E6928 003E3868  40 80 00 10 */	bge .L_803E6938
/* 803E692C 003E386C  2C 03 FF FF */	cmpwi r3, -1
/* 803E6930 003E3870  41 82 02 90 */	beq .L_803E6BC0
/* 803E6934 003E3874  48 00 02 8C */	b .L_803E6BC0
.L_803E6938:
/* 803E6938 003E3878  2C 03 00 07 */	cmpwi r3, 7
/* 803E693C 003E387C  40 80 02 84 */	bge .L_803E6BC0
/* 803E6940 003E3880  48 00 01 44 */	b .L_803E6A84
.L_803E6944:
/* 803E6944 003E3884  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803E6948 003E3888  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 803E694C 003E388C  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803E6950 003E3890  40 80 02 70 */	bge .L_803E6BC0
/* 803E6954 003E3894  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803E6958 003E3898  2C 03 00 05 */	cmpwi r3, 5
/* 803E695C 003E389C  41 82 02 64 */	beq .L_803E6BC0
/* 803E6960 003E38A0  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E6964 003E38A4  28 00 00 01 */	cmplwi r0, 1
/* 803E6968 003E38A8  40 82 00 10 */	bne .L_803E6978
/* 803E696C 003E38AC  38 00 00 00 */	li r0, 0
/* 803E6970 003E38B0  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E6974 003E38B4  48 00 00 10 */	b .L_803E6984
.L_803E6978:
/* 803E6978 003E38B8  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E697C 003E38BC  38 00 00 05 */	li r0, 5
/* 803E6980 003E38C0  90 1F 00 84 */	stw r0, 0x84(r31)
.L_803E6984:
/* 803E6984 003E38C4  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E6988 003E38C8  2C 00 00 02 */	cmpwi r0, 2
/* 803E698C 003E38CC  41 82 02 34 */	beq .L_803E6BC0
/* 803E6990 003E38D0  40 80 00 14 */	bge .L_803E69A4
/* 803E6994 003E38D4  2C 00 00 00 */	cmpwi r0, 0
/* 803E6998 003E38D8  41 82 00 18 */	beq .L_803E69B0
/* 803E699C 003E38DC  40 80 00 B8 */	bge .L_803E6A54
/* 803E69A0 003E38E0  48 00 02 20 */	b .L_803E6BC0
.L_803E69A4:
/* 803E69A4 003E38E4  2C 00 00 04 */	cmpwi r0, 4
/* 803E69A8 003E38E8  40 80 02 18 */	bge .L_803E6BC0
/* 803E69AC 003E38EC  48 00 00 18 */	b .L_803E69C4
.L_803E69B0:
/* 803E69B0 003E38F0  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E69B4 003E38F4  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E69B8 003E38F8  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E69BC 003E38FC  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E69C0 003E3900  48 00 02 00 */	b .L_803E6BC0
.L_803E69C4:
/* 803E69C4 003E3904  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E69C8 003E3908  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E69CC 003E390C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E69D0 003E3910  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E69D4 003E3914  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E69D8 003E3918  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E69DC 003E391C  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E69E0 003E3920  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E69E4 003E3924  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E69E8 003E3928  4B CD B1 65 */	bl __cvt_fp2unsigned
/* 803E69EC 003E392C  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E69F0 003E3930  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E69F4 003E3934  4B CE 2B AD */	bl rand
/* 803E69F8 003E3938  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E69FC 003E393C  3C 00 43 30 */	lis r0, 0x4330
/* 803E6A00 003E3940  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E6A04 003E3944  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E6A08 003E3948  90 01 00 08 */	stw r0, 8(r1)
/* 803E6A0C 003E394C  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E6A10 003E3950  C8 21 00 08 */	lfd f1, 8(r1)
/* 803E6A14 003E3954  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E6A18 003E3958  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E6A1C 003E395C  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E6A20 003E3960  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E6A24 003E3964  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E6A28 003E3968  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E6A2C 003E396C  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E6A30 003E3970  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E6A34 003E3974  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E6A38 003E3978  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E6A3C 003E397C  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E6A40 003E3980  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6A44 003E3984  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E6A48 003E3988  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E6A4C 003E398C  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E6A50 003E3990  48 00 01 70 */	b .L_803E6BC0
.L_803E6A54:
/* 803E6A54 003E3994  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6A58 003E3998  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E6A5C 003E399C  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E6A60 003E39A0  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E6A64 003E39A4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E6A68 003E39A8  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E6A6C 003E39AC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E6A70 003E39B0  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6A74 003E39B4  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E6A78 003E39B8  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E6A7C 003E39BC  D0 1F 00 44 */	stfs f0, 0x44(r31)
/* 803E6A80 003E39C0  48 00 01 40 */	b .L_803E6BC0
.L_803E6A84:
/* 803E6A84 003E39C4  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803E6A88 003E39C8  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 803E6A8C 003E39CC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803E6A90 003E39D0  40 80 01 30 */	bge .L_803E6BC0
/* 803E6A94 003E39D4  80 7F 00 84 */	lwz r3, 0x84(r31)
/* 803E6A98 003E39D8  2C 03 00 05 */	cmpwi r3, 5
/* 803E6A9C 003E39DC  41 82 01 24 */	beq .L_803E6BC0
/* 803E6AA0 003E39E0  88 1F 00 94 */	lbz r0, 0x94(r31)
/* 803E6AA4 003E39E4  28 00 00 01 */	cmplwi r0, 1
/* 803E6AA8 003E39E8  40 82 00 10 */	bne .L_803E6AB8
/* 803E6AAC 003E39EC  38 00 00 00 */	li r0, 0
/* 803E6AB0 003E39F0  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E6AB4 003E39F4  48 00 00 10 */	b .L_803E6AC4
.L_803E6AB8:
/* 803E6AB8 003E39F8  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803E6ABC 003E39FC  38 00 00 05 */	li r0, 5
/* 803E6AC0 003E3A00  90 1F 00 84 */	stw r0, 0x84(r31)
.L_803E6AC4:
/* 803E6AC4 003E3A04  80 1F 00 84 */	lwz r0, 0x84(r31)
/* 803E6AC8 003E3A08  2C 00 00 02 */	cmpwi r0, 2
/* 803E6ACC 003E3A0C  41 82 00 F4 */	beq .L_803E6BC0
/* 803E6AD0 003E3A10  40 80 00 14 */	bge .L_803E6AE4
/* 803E6AD4 003E3A14  2C 00 00 00 */	cmpwi r0, 0
/* 803E6AD8 003E3A18  41 82 00 18 */	beq .L_803E6AF0
/* 803E6ADC 003E3A1C  40 80 00 B8 */	bge .L_803E6B94
/* 803E6AE0 003E3A20  48 00 00 E0 */	b .L_803E6BC0
.L_803E6AE4:
/* 803E6AE4 003E3A24  2C 00 00 04 */	cmpwi r0, 4
/* 803E6AE8 003E3A28  40 80 00 D8 */	bge .L_803E6BC0
/* 803E6AEC 003E3A2C  48 00 00 18 */	b .L_803E6B04
.L_803E6AF0:
/* 803E6AF0 003E3A30  C0 1F 00 2C */	lfs f0, 0x2c(r31)
/* 803E6AF4 003E3A34  D0 1F 00 04 */	stfs f0, 4(r31)
/* 803E6AF8 003E3A38  C0 1F 00 30 */	lfs f0, 0x30(r31)
/* 803E6AFC 003E3A3C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 803E6B00 003E3A40  48 00 00 C0 */	b .L_803E6BC0
.L_803E6B04:
/* 803E6B04 003E3A44  C0 22 19 30 */	lfs f1, lbl_8051FC90@sda21(r2)
/* 803E6B08 003E3A48  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6B0C 003E3A4C  D0 3F 00 0C */	stfs f1, 0xc(r31)
/* 803E6B10 003E3A50  D0 1F 00 10 */	stfs f0, 0x10(r31)
/* 803E6B14 003E3A54  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E6B18 003E3A58  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E6B1C 003E3A5C  C0 24 02 70 */	lfs f1, 0x270(r4)
/* 803E6B20 003E3A60  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E6B24 003E3A64  EC 21 00 24 */	fdivs f1, f1, f0
/* 803E6B28 003E3A68  4B CD B0 25 */	bl __cvt_fp2unsigned
/* 803E6B2C 003E3A6C  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803E6B30 003E3A70  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803E6B34 003E3A74  4B CE 2A 6D */	bl rand
/* 803E6B38 003E3A78  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 803E6B3C 003E3A7C  3C 00 43 30 */	lis r0, 0x4330
/* 803E6B40 003E3A80  90 61 00 0C */	stw r3, 0xc(r1)
/* 803E6B44 003E3A84  C8 42 19 78 */	lfd f2, lbl_8051FCD8@sda21(r2)
/* 803E6B48 003E3A88  90 01 00 08 */	stw r0, 8(r1)
/* 803E6B4C 003E3A8C  C0 62 19 80 */	lfs f3, lbl_8051FCE0@sda21(r2)
/* 803E6B50 003E3A90  C8 21 00 08 */	lfd f1, 8(r1)
/* 803E6B54 003E3A94  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E6B58 003E3A98  EC 81 10 28 */	fsubs f4, f1, f2
/* 803E6B5C 003E3A9C  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E6B60 003E3AA0  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E6B64 003E3AA4  EC 64 18 24 */	fdivs f3, f4, f3
/* 803E6B68 003E3AA8  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803E6B6C 003E3AAC  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 803E6B70 003E3AB0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E6B74 003E3AB4  80 9F 00 34 */	lwz r4, 0x34(r31)
/* 803E6B78 003E3AB8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E6B7C 003E3ABC  C0 64 01 80 */	lfs f3, 0x180(r4)
/* 803E6B80 003E3AC0  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6B84 003E3AC4  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E6B88 003E3AC8  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E6B8C 003E3ACC  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 803E6B90 003E3AD0  48 00 00 30 */	b .L_803E6BC0
.L_803E6B94:
/* 803E6B94 003E3AD4  C0 02 19 00 */	lfs f0, lbl_8051FC60@sda21(r2)
/* 803E6B98 003E3AD8  C0 22 19 8C */	lfs f1, lbl_8051FCEC@sda21(r2)
/* 803E6B9C 003E3ADC  D0 1F 00 14 */	stfs f0, 0x14(r31)
/* 803E6BA0 003E3AE0  C0 42 19 60 */	lfs f2, lbl_8051FCC0@sda21(r2)
/* 803E6BA4 003E3AE4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803E6BA8 003E3AE8  C0 7F 00 60 */	lfs f3, 0x60(r31)
/* 803E6BAC 003E3AEC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803E6BB0 003E3AF0  EC 01 00 32 */	fmuls f0, f1, f0
/* 803E6BB4 003E3AF4  EC 02 00 32 */	fmuls f0, f2, f0
/* 803E6BB8 003E3AF8  EC 03 00 32 */	fmuls f0, f3, f0
/* 803E6BBC 003E3AFC  D0 1F 00 44 */	stfs f0, 0x44(r31)
.L_803E6BC0:
/* 803E6BC0 003E3B00  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803E6BC4 003E3B04  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803E6BC8 003E3B08  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803E6BCC 003E3B0C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803E6BD0 003E3B10  7C 08 03 A6 */	mtlr r0
/* 803E6BD4 003E3B14  38 21 00 30 */	addi r1, r1, 0x30
/* 803E6BD8 003E3B18  4E 80 00 20 */	blr 
.endfn updateEnemyReaction___Q43ebi5title6Pikmin5TUnitFv

.section .text, "ax", unique, 1
.fn __ct__Q43ebi5title6Pikmin10TBoidParamFv, weak
/* 803E6BDC 003E3B1C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E6BE0 003E3B20  7C 08 02 A6 */	mflr r0
/* 803E6BE4 003E3B24  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E6BE8 003E3B28  7C 80 07 35 */	extsh. r0, r4
/* 803E6BEC 003E3B2C  3C 80 80 49 */	lis r4, lbl_80497158@ha
/* 803E6BF0 003E3B30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E6BF4 003E3B34  3B E4 71 58 */	addi r31, r4, lbl_80497158@l
/* 803E6BF8 003E3B38  93 C1 00 08 */	stw r30, 8(r1)
/* 803E6BFC 003E3B3C  7C 7E 1B 78 */	mr r30, r3
/* 803E6C00 003E3B40  41 82 00 0C */	beq .L_803E6C0C
/* 803E6C04 003E3B44  38 1E 01 4C */	addi r0, r30, 0x14c
/* 803E6C08 003E3B48  90 1E 00 00 */	stw r0, 0(r30)
.L_803E6C0C:
/* 803E6C0C 003E3B4C  38 00 00 00 */	li r0, 0
/* 803E6C10 003E3B50  3C A0 74 73 */	lis r5, 0x74737030@ha
/* 803E6C14 003E3B54  90 1E 00 04 */	stw r0, 4(r30)
/* 803E6C18 003E3B58  38 1F 00 30 */	addi r0, r31, 0x30
/* 803E6C1C 003E3B5C  7F C4 F3 78 */	mr r4, r30
/* 803E6C20 003E3B60  38 7E 00 0C */	addi r3, r30, 0xc
/* 803E6C24 003E3B64  90 1E 00 08 */	stw r0, 8(r30)
/* 803E6C28 003E3B68  38 A5 70 30 */	addi r5, r5, 0x74737030@l
/* 803E6C2C 003E3B6C  38 DF 00 48 */	addi r6, r31, 0x48
/* 803E6C30 003E3B70  48 02 CA 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6C34 003E3B74  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6C38 003E3B78  3C A0 74 73 */	lis r5, 0x74737031@ha
/* 803E6C3C 003E3B7C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6C40 003E3B80  C0 02 19 04 */	lfs f0, lbl_8051FC64@sda21(r2)
/* 803E6C44 003E3B84  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803E6C48 003E3B88  7F C4 F3 78 */	mr r4, r30
/* 803E6C4C 003E3B8C  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6C50 003E3B90  38 7E 00 34 */	addi r3, r30, 0x34
/* 803E6C54 003E3B94  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 803E6C58 003E3B98  38 A5 70 31 */	addi r5, r5, 0x74737031@l
/* 803E6C5C 003E3B9C  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E6C60 003E3BA0  38 DF 00 64 */	addi r6, r31, 0x64
/* 803E6C64 003E3BA4  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 803E6C68 003E3BA8  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 803E6C6C 003E3BAC  48 02 C9 ED */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6C70 003E3BB0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6C74 003E3BB4  3C A0 74 73 */	lis r5, 0x74737032@ha
/* 803E6C78 003E3BB8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6C7C 003E3BBC  C0 02 19 0C */	lfs f0, lbl_8051FC6C@sda21(r2)
/* 803E6C80 003E3BC0  90 1E 00 34 */	stw r0, 0x34(r30)
/* 803E6C84 003E3BC4  7F C4 F3 78 */	mr r4, r30
/* 803E6C88 003E3BC8  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6C8C 003E3BCC  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803E6C90 003E3BD0  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 803E6C94 003E3BD4  38 A5 70 32 */	addi r5, r5, 0x74737032@l
/* 803E6C98 003E3BD8  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E6C9C 003E3BDC  38 DF 00 7C */	addi r6, r31, 0x7c
/* 803E6CA0 003E3BE0  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 803E6CA4 003E3BE4  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 803E6CA8 003E3BE8  48 02 C9 B1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6CAC 003E3BEC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6CB0 003E3BF0  3C A0 74 73 */	lis r5, 0x74737035@ha
/* 803E6CB4 003E3BF4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6CB8 003E3BF8  C0 02 19 10 */	lfs f0, lbl_8051FC70@sda21(r2)
/* 803E6CBC 003E3BFC  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803E6CC0 003E3C00  7F C4 F3 78 */	mr r4, r30
/* 803E6CC4 003E3C04  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6CC8 003E3C08  38 7E 00 84 */	addi r3, r30, 0x84
/* 803E6CCC 003E3C0C  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 803E6CD0 003E3C10  38 A5 70 35 */	addi r5, r5, 0x74737035@l
/* 803E6CD4 003E3C14  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E6CD8 003E3C18  38 DF 00 8C */	addi r6, r31, 0x8c
/* 803E6CDC 003E3C1C  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 803E6CE0 003E3C20  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 803E6CE4 003E3C24  48 02 C9 75 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6CE8 003E3C28  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6CEC 003E3C2C  3C A0 74 73 */	lis r5, 0x74737036@ha
/* 803E6CF0 003E3C30  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6CF4 003E3C34  C0 02 19 14 */	lfs f0, lbl_8051FC74@sda21(r2)
/* 803E6CF8 003E3C38  90 1E 00 84 */	stw r0, 0x84(r30)
/* 803E6CFC 003E3C3C  7F C4 F3 78 */	mr r4, r30
/* 803E6D00 003E3C40  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6D04 003E3C44  38 7E 00 AC */	addi r3, r30, 0xac
/* 803E6D08 003E3C48  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 803E6D0C 003E3C4C  38 A5 70 36 */	addi r5, r5, 0x74737036@l
/* 803E6D10 003E3C50  C0 02 19 18 */	lfs f0, lbl_8051FC78@sda21(r2)
/* 803E6D14 003E3C54  38 DF 00 A0 */	addi r6, r31, 0xa0
/* 803E6D18 003E3C58  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 803E6D1C 003E3C5C  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 803E6D20 003E3C60  48 02 C9 39 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6D24 003E3C64  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6D28 003E3C68  3C A0 74 73 */	lis r5, 0x74737037@ha
/* 803E6D2C 003E3C6C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6D30 003E3C70  C0 02 19 1C */	lfs f0, lbl_8051FC7C@sda21(r2)
/* 803E6D34 003E3C74  90 1E 00 AC */	stw r0, 0xac(r30)
/* 803E6D38 003E3C78  7F C4 F3 78 */	mr r4, r30
/* 803E6D3C 003E3C7C  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6D40 003E3C80  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803E6D44 003E3C84  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 803E6D48 003E3C88  38 A5 70 37 */	addi r5, r5, 0x74737037@l
/* 803E6D4C 003E3C8C  C0 02 19 20 */	lfs f0, lbl_8051FC80@sda21(r2)
/* 803E6D50 003E3C90  38 DF 00 B4 */	addi r6, r31, 0xb4
/* 803E6D54 003E3C94  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 803E6D58 003E3C98  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 803E6D5C 003E3C9C  48 02 C8 FD */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6D60 003E3CA0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6D64 003E3CA4  3C A0 74 73 */	lis r5, 0x74737038@ha
/* 803E6D68 003E3CA8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6D6C 003E3CAC  C0 02 19 24 */	lfs f0, lbl_8051FC84@sda21(r2)
/* 803E6D70 003E3CB0  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803E6D74 003E3CB4  7F C4 F3 78 */	mr r4, r30
/* 803E6D78 003E3CB8  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6D7C 003E3CBC  38 7E 00 FC */	addi r3, r30, 0xfc
/* 803E6D80 003E3CC0  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 803E6D84 003E3CC4  38 A5 70 38 */	addi r5, r5, 0x74737038@l
/* 803E6D88 003E3CC8  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E6D8C 003E3CCC  38 DF 00 C8 */	addi r6, r31, 0xc8
/* 803E6D90 003E3CD0  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 803E6D94 003E3CD4  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 803E6D98 003E3CD8  48 02 C8 C1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6D9C 003E3CDC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6DA0 003E3CE0  3C A0 74 73 */	lis r5, 0x74737039@ha
/* 803E6DA4 003E3CE4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6DA8 003E3CE8  C0 02 19 28 */	lfs f0, lbl_8051FC88@sda21(r2)
/* 803E6DAC 003E3CEC  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 803E6DB0 003E3CF0  7F C4 F3 78 */	mr r4, r30
/* 803E6DB4 003E3CF4  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6DB8 003E3CF8  38 7E 01 24 */	addi r3, r30, 0x124
/* 803E6DBC 003E3CFC  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 803E6DC0 003E3D00  38 A5 70 39 */	addi r5, r5, 0x74737039@l
/* 803E6DC4 003E3D04  C0 02 19 2C */	lfs f0, lbl_8051FC8C@sda21(r2)
/* 803E6DC8 003E3D08  38 DF 00 E4 */	addi r6, r31, 0xe4
/* 803E6DCC 003E3D0C  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 803E6DD0 003E3D10  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 803E6DD4 003E3D14  48 02 C8 85 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6DD8 003E3D18  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6DDC 003E3D1C  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6DE0 003E3D20  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6DE4 003E3D24  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E6DE8 003E3D28  90 1E 01 24 */	stw r0, 0x124(r30)
/* 803E6DEC 003E3D2C  7F C3 F3 78 */	mr r3, r30
/* 803E6DF0 003E3D30  D0 3E 01 3C */	stfs f1, 0x13c(r30)
/* 803E6DF4 003E3D34  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 803E6DF8 003E3D38  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 803E6DFC 003E3D3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E6E00 003E3D40  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E6E04 003E3D44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E6E08 003E3D48  7C 08 03 A6 */	mtlr r0
/* 803E6E0C 003E3D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803E6E10 003E3D50  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi5title6Pikmin10TBoidParamFv

.fn __ct__Q43ebi5title6Pikmin5TUnitFv, weak
/* 803E6E14 003E3D54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E6E18 003E3D58  7C 08 02 A6 */	mflr r0
/* 803E6E1C 003E3D5C  3C 80 80 4E */	lis r4, __vt__Q33ebi5title8TObjBase@ha
/* 803E6E20 003E3D60  C0 42 19 00 */	lfs f2, lbl_8051FC60@sda21(r2)
/* 803E6E24 003E3D64  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E6E28 003E3D68  38 04 79 A8 */	addi r0, r4, __vt__Q33ebi5title8TObjBase@l
/* 803E6E2C 003E3D6C  3C 80 80 4F */	lis r4, __vt__Q43ebi5title6Pikmin5TUnit@ha
/* 803E6E30 003E3D70  C0 22 19 40 */	lfs f1, lbl_8051FCA0@sda21(r2)
/* 803E6E34 003E3D74  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E6E38 003E3D78  38 A4 9D FC */	addi r5, r4, __vt__Q43ebi5title6Pikmin5TUnit@l
/* 803E6E3C 003E3D7C  7C 7F 1B 78 */	mr r31, r3
/* 803E6E40 003E3D80  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E6E44 003E3D84  90 03 00 00 */	stw r0, 0(r3)
/* 803E6E48 003E3D88  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803E6E4C 003E3D8C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803E6E50 003E3D90  38 C0 00 00 */	li r6, 0
/* 803E6E54 003E3D94  D0 5F 00 04 */	stfs f2, 4(r31)
/* 803E6E58 003E3D98  38 7F 00 38 */	addi r3, r31, 0x38
/* 803E6E5C 003E3D9C  38 80 00 00 */	li r4, 0
/* 803E6E60 003E3DA0  D0 5F 00 08 */	stfs f2, 8(r31)
/* 803E6E64 003E3DA4  D0 5F 00 0C */	stfs f2, 0xc(r31)
/* 803E6E68 003E3DA8  D0 3F 00 10 */	stfs f1, 0x10(r31)
/* 803E6E6C 003E3DAC  D0 5F 00 14 */	stfs f2, 0x14(r31)
/* 803E6E70 003E3DB0  D0 1F 00 18 */	stfs f0, 0x18(r31)
/* 803E6E74 003E3DB4  D0 5F 00 1C */	stfs f2, 0x1c(r31)
/* 803E6E78 003E3DB8  D0 5F 00 20 */	stfs f2, 0x20(r31)
/* 803E6E7C 003E3DBC  D0 5F 00 24 */	stfs f2, 0x24(r31)
/* 803E6E80 003E3DC0  90 DF 00 28 */	stw r6, 0x28(r31)
/* 803E6E84 003E3DC4  90 BF 00 00 */	stw r5, 0(r31)
/* 803E6E88 003E3DC8  90 1F 00 38 */	stw r0, 0x38(r31)
/* 803E6E8C 003E3DCC  4B C8 07 ED */	bl init__12J3DFrameCtrlFs
/* 803E6E90 003E3DD0  3C 80 80 4E */	lis r4, __vt__12J3DFrameCtrl@ha
/* 803E6E94 003E3DD4  38 7F 00 4C */	addi r3, r31, 0x4c
/* 803E6E98 003E3DD8  38 04 79 8C */	addi r0, r4, __vt__12J3DFrameCtrl@l
/* 803E6E9C 003E3DDC  38 80 00 00 */	li r4, 0
/* 803E6EA0 003E3DE0  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 803E6EA4 003E3DE4  4B C8 07 D5 */	bl init__12J3DFrameCtrlFs
/* 803E6EA8 003E3DE8  38 00 00 00 */	li r0, 0
/* 803E6EAC 003E3DEC  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6EB0 003E3DF0  90 1F 00 8C */	stw r0, 0x8c(r31)
/* 803E6EB4 003E3DF4  7F E3 FB 78 */	mr r3, r31
/* 803E6EB8 003E3DF8  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E6EBC 003E3DFC  90 1F 00 90 */	stw r0, 0x90(r31)
/* 803E6EC0 003E3E00  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 803E6EC4 003E3E04  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 803E6EC8 003E3E08  90 1F 00 34 */	stw r0, 0x34(r31)
/* 803E6ECC 003E3E0C  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 803E6ED0 003E3E10  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 803E6ED4 003E3E14  90 1F 00 68 */	stw r0, 0x68(r31)
/* 803E6ED8 003E3E18  D0 3F 00 6C */	stfs f1, 0x6c(r31)
/* 803E6EDC 003E3E1C  D0 3F 00 70 */	stfs f1, 0x70(r31)
/* 803E6EE0 003E3E20  D0 3F 00 74 */	stfs f1, 0x74(r31)
/* 803E6EE4 003E3E24  D0 3F 00 78 */	stfs f1, 0x78(r31)
/* 803E6EE8 003E3E28  D0 3F 00 7C */	stfs f1, 0x7c(r31)
/* 803E6EEC 003E3E2C  D0 3F 00 80 */	stfs f1, 0x80(r31)
/* 803E6EF0 003E3E30  90 1F 00 84 */	stw r0, 0x84(r31)
/* 803E6EF4 003E3E34  90 1F 00 88 */	stw r0, 0x88(r31)
/* 803E6EF8 003E3E38  98 1F 00 94 */	stb r0, 0x94(r31)
/* 803E6EFC 003E3E3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E6F00 003E3E40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E6F04 003E3E44  7C 08 03 A6 */	mtlr r0
/* 803E6F08 003E3E48  38 21 00 10 */	addi r1, r1, 0x10
/* 803E6F0C 003E3E4C  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi5title6Pikmin5TUnitFv

.fn __ct__Q43ebi5title6Pikmin6TParamFv, weak
/* 803E6F10 003E3E50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803E6F14 003E3E54  7C 08 02 A6 */	mflr r0
/* 803E6F18 003E3E58  90 01 00 14 */	stw r0, 0x14(r1)
/* 803E6F1C 003E3E5C  7C 80 07 35 */	extsh. r0, r4
/* 803E6F20 003E3E60  3C 80 80 49 */	lis r4, lbl_80497158@ha
/* 803E6F24 003E3E64  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803E6F28 003E3E68  3B E4 71 58 */	addi r31, r4, lbl_80497158@l
/* 803E6F2C 003E3E6C  93 C1 00 08 */	stw r30, 8(r1)
/* 803E6F30 003E3E70  7C 7E 1B 78 */	mr r30, r3
/* 803E6F34 003E3E74  41 82 00 0C */	beq .L_803E6F40
/* 803E6F38 003E3E78  38 1E 02 8C */	addi r0, r30, 0x28c
/* 803E6F3C 003E3E7C  90 1E 00 00 */	stw r0, 0(r30)
.L_803E6F40:
/* 803E6F40 003E3E80  38 00 00 00 */	li r0, 0
/* 803E6F44 003E3E84  3C A0 70 6B */	lis r5, 0x706B3030@ha
/* 803E6F48 003E3E88  90 1E 00 04 */	stw r0, 4(r30)
/* 803E6F4C 003E3E8C  38 02 19 44 */	addi r0, r2, lbl_8051FCA4@sda21
/* 803E6F50 003E3E90  7F C4 F3 78 */	mr r4, r30
/* 803E6F54 003E3E94  38 7E 00 0C */	addi r3, r30, 0xc
/* 803E6F58 003E3E98  90 1E 00 08 */	stw r0, 8(r30)
/* 803E6F5C 003E3E9C  38 A5 30 30 */	addi r5, r5, 0x706B3030@l
/* 803E6F60 003E3EA0  38 DF 01 E4 */	addi r6, r31, 0x1e4
/* 803E6F64 003E3EA4  48 02 C6 F5 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6F68 003E3EA8  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6F6C 003E3EAC  3C A0 70 6B */	lis r5, 0x706B3939@ha
/* 803E6F70 003E3EB0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6F74 003E3EB4  C0 02 19 4C */	lfs f0, lbl_8051FCAC@sda21(r2)
/* 803E6F78 003E3EB8  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803E6F7C 003E3EBC  7F C4 F3 78 */	mr r4, r30
/* 803E6F80 003E3EC0  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6F84 003E3EC4  38 7E 00 34 */	addi r3, r30, 0x34
/* 803E6F88 003E3EC8  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 803E6F8C 003E3ECC  38 A5 39 39 */	addi r5, r5, 0x706B3939@l
/* 803E6F90 003E3ED0  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E6F94 003E3ED4  38 DF 01 F4 */	addi r6, r31, 0x1f4
/* 803E6F98 003E3ED8  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 803E6F9C 003E3EDC  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 803E6FA0 003E3EE0  48 02 C6 B9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6FA4 003E3EE4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6FA8 003E3EE8  3C A0 70 6B */	lis r5, 0x706B3031@ha
/* 803E6FAC 003E3EEC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6FB0 003E3EF0  C0 02 19 50 */	lfs f0, lbl_8051FCB0@sda21(r2)
/* 803E6FB4 003E3EF4  90 1E 00 34 */	stw r0, 0x34(r30)
/* 803E6FB8 003E3EF8  7F C4 F3 78 */	mr r4, r30
/* 803E6FBC 003E3EFC  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6FC0 003E3F00  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803E6FC4 003E3F04  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 803E6FC8 003E3F08  38 A5 30 31 */	addi r5, r5, 0x706B3031@l
/* 803E6FCC 003E3F0C  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E6FD0 003E3F10  38 DF 02 08 */	addi r6, r31, 0x208
/* 803E6FD4 003E3F14  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 803E6FD8 003E3F18  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 803E6FDC 003E3F1C  48 02 C6 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E6FE0 003E3F20  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E6FE4 003E3F24  3C A0 70 6B */	lis r5, 0x706B3032@ha
/* 803E6FE8 003E3F28  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E6FEC 003E3F2C  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E6FF0 003E3F30  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803E6FF4 003E3F34  7F C4 F3 78 */	mr r4, r30
/* 803E6FF8 003E3F38  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E6FFC 003E3F3C  38 7E 00 84 */	addi r3, r30, 0x84
/* 803E7000 003E3F40  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 803E7004 003E3F44  38 A5 30 32 */	addi r5, r5, 0x706B3032@l
/* 803E7008 003E3F48  C0 02 19 20 */	lfs f0, lbl_8051FC80@sda21(r2)
/* 803E700C 003E3F4C  38 DF 02 18 */	addi r6, r31, 0x218
/* 803E7010 003E3F50  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 803E7014 003E3F54  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 803E7018 003E3F58  48 02 C6 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E701C 003E3F5C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E7020 003E3F60  3C A0 70 6B */	lis r5, 0x706B3033@ha
/* 803E7024 003E3F64  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E7028 003E3F68  C0 02 19 58 */	lfs f0, lbl_8051FCB8@sda21(r2)
/* 803E702C 003E3F6C  90 1E 00 84 */	stw r0, 0x84(r30)
/* 803E7030 003E3F70  7F C4 F3 78 */	mr r4, r30
/* 803E7034 003E3F74  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E7038 003E3F78  38 7E 00 AC */	addi r3, r30, 0xac
/* 803E703C 003E3F7C  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 803E7040 003E3F80  38 A5 30 33 */	addi r5, r5, 0x706B3033@l
/* 803E7044 003E3F84  C0 02 19 20 */	lfs f0, lbl_8051FC80@sda21(r2)
/* 803E7048 003E3F88  38 DF 02 24 */	addi r6, r31, 0x224
/* 803E704C 003E3F8C  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 803E7050 003E3F90  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 803E7054 003E3F94  48 02 C6 05 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E7058 003E3F98  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E705C 003E3F9C  3C A0 70 6B */	lis r5, 0x706B3035@ha
/* 803E7060 003E3FA0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E7064 003E3FA4  C0 02 19 5C */	lfs f0, lbl_8051FCBC@sda21(r2)
/* 803E7068 003E3FA8  90 1E 00 AC */	stw r0, 0xac(r30)
/* 803E706C 003E3FAC  7F C4 F3 78 */	mr r4, r30
/* 803E7070 003E3FB0  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E7074 003E3FB4  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803E7078 003E3FB8  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 803E707C 003E3FBC  38 A5 30 35 */	addi r5, r5, 0x706B3035@l
/* 803E7080 003E3FC0  C0 02 19 20 */	lfs f0, lbl_8051FC80@sda21(r2)
/* 803E7084 003E3FC4  38 DF 02 30 */	addi r6, r31, 0x230
/* 803E7088 003E3FC8  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 803E708C 003E3FCC  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 803E7090 003E3FD0  48 02 C5 C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E7094 003E3FD4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E7098 003E3FD8  3C A0 70 6B */	lis r5, 0x706B3036@ha
/* 803E709C 003E3FDC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E70A0 003E3FE0  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E70A4 003E3FE4  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803E70A8 003E3FE8  7F C4 F3 78 */	mr r4, r30
/* 803E70AC 003E3FEC  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E70B0 003E3FF0  38 7E 00 FC */	addi r3, r30, 0xfc
/* 803E70B4 003E3FF4  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 803E70B8 003E3FF8  38 A5 30 36 */	addi r5, r5, 0x706B3036@l
/* 803E70BC 003E3FFC  C0 02 19 20 */	lfs f0, lbl_8051FC80@sda21(r2)
/* 803E70C0 003E4000  38 DF 02 3C */	addi r6, r31, 0x23c
/* 803E70C4 003E4004  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 803E70C8 003E4008  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 803E70CC 003E400C  48 02 C5 8D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E70D0 003E4010  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E70D4 003E4014  3C A0 70 6B */	lis r5, 0x706B3037@ha
/* 803E70D8 003E4018  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E70DC 003E401C  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E70E0 003E4020  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 803E70E4 003E4024  7F C4 F3 78 */	mr r4, r30
/* 803E70E8 003E4028  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E70EC 003E402C  38 7E 01 24 */	addi r3, r30, 0x124
/* 803E70F0 003E4030  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 803E70F4 003E4034  38 A5 30 37 */	addi r5, r5, 0x706B3037@l
/* 803E70F8 003E4038  C0 02 19 20 */	lfs f0, lbl_8051FC80@sda21(r2)
/* 803E70FC 003E403C  38 DF 02 48 */	addi r6, r31, 0x248
/* 803E7100 003E4040  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 803E7104 003E4044  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 803E7108 003E4048  48 02 C5 51 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E710C 003E404C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E7110 003E4050  3C A0 70 6B */	lis r5, 0x706B3038@ha
/* 803E7114 003E4054  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E7118 003E4058  C0 02 19 60 */	lfs f0, lbl_8051FCC0@sda21(r2)
/* 803E711C 003E405C  90 1E 01 24 */	stw r0, 0x124(r30)
/* 803E7120 003E4060  7F C4 F3 78 */	mr r4, r30
/* 803E7124 003E4064  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E7128 003E4068  38 7E 01 4C */	addi r3, r30, 0x14c
/* 803E712C 003E406C  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 803E7130 003E4070  38 A5 30 38 */	addi r5, r5, 0x706B3038@l
/* 803E7134 003E4074  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E7138 003E4078  38 DF 02 68 */	addi r6, r31, 0x268
/* 803E713C 003E407C  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 803E7140 003E4080  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 803E7144 003E4084  48 02 C5 15 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E7148 003E4088  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E714C 003E408C  3C A0 70 6B */	lis r5, 0x706B3130@ha
/* 803E7150 003E4090  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E7154 003E4094  C0 02 19 60 */	lfs f0, lbl_8051FCC0@sda21(r2)
/* 803E7158 003E4098  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803E715C 003E409C  7F C4 F3 78 */	mr r4, r30
/* 803E7160 003E40A0  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E7164 003E40A4  38 7E 01 74 */	addi r3, r30, 0x174
/* 803E7168 003E40A8  D0 1E 01 64 */	stfs f0, 0x164(r30)
/* 803E716C 003E40AC  38 A5 31 30 */	addi r5, r5, 0x706B3130@l
/* 803E7170 003E40B0  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E7174 003E40B4  38 DF 02 7C */	addi r6, r31, 0x27c
/* 803E7178 003E40B8  D0 3E 01 6C */	stfs f1, 0x16c(r30)
/* 803E717C 003E40BC  D0 1E 01 70 */	stfs f0, 0x170(r30)
/* 803E7180 003E40C0  48 02 C4 D9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E7184 003E40C4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E7188 003E40C8  3C A0 70 6B */	lis r5, 0x706B3039@ha
/* 803E718C 003E40CC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E7190 003E40D0  C0 02 19 60 */	lfs f0, lbl_8051FCC0@sda21(r2)
/* 803E7194 003E40D4  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803E7198 003E40D8  7F C4 F3 78 */	mr r4, r30
/* 803E719C 003E40DC  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E71A0 003E40E0  38 7E 01 9C */	addi r3, r30, 0x19c
/* 803E71A4 003E40E4  D0 1E 01 8C */	stfs f0, 0x18c(r30)
/* 803E71A8 003E40E8  38 A5 30 39 */	addi r5, r5, 0x706B3039@l
/* 803E71AC 003E40EC  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E71B0 003E40F0  38 DF 02 94 */	addi r6, r31, 0x294
/* 803E71B4 003E40F4  D0 3E 01 94 */	stfs f1, 0x194(r30)
/* 803E71B8 003E40F8  D0 1E 01 98 */	stfs f0, 0x198(r30)
/* 803E71BC 003E40FC  48 02 C4 9D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E71C0 003E4100  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E71C4 003E4104  3C A0 70 6B */	lis r5, 0x706B3132@ha
/* 803E71C8 003E4108  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E71CC 003E410C  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E71D0 003E4110  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 803E71D4 003E4114  7F C4 F3 78 */	mr r4, r30
/* 803E71D8 003E4118  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E71DC 003E411C  38 7E 01 C4 */	addi r3, r30, 0x1c4
/* 803E71E0 003E4120  D0 3E 01 B4 */	stfs f1, 0x1b4(r30)
/* 803E71E4 003E4124  38 A5 31 32 */	addi r5, r5, 0x706B3132@l
/* 803E71E8 003E4128  38 DF 02 AC */	addi r6, r31, 0x2ac
/* 803E71EC 003E412C  D0 3E 01 BC */	stfs f1, 0x1bc(r30)
/* 803E71F0 003E4130  D0 1E 01 C0 */	stfs f0, 0x1c0(r30)
/* 803E71F4 003E4134  48 02 C4 65 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E71F8 003E4138  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E71FC 003E413C  3C A0 70 6B */	lis r5, 0x706B3133@ha
/* 803E7200 003E4140  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E7204 003E4144  C0 02 19 54 */	lfs f0, lbl_8051FCB4@sda21(r2)
/* 803E7208 003E4148  90 1E 01 C4 */	stw r0, 0x1c4(r30)
/* 803E720C 003E414C  7F C4 F3 78 */	mr r4, r30
/* 803E7210 003E4150  C0 22 19 64 */	lfs f1, lbl_8051FCC4@sda21(r2)
/* 803E7214 003E4154  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 803E7218 003E4158  D0 1E 01 DC */	stfs f0, 0x1dc(r30)
/* 803E721C 003E415C  38 A5 31 33 */	addi r5, r5, 0x706B3133@l
/* 803E7220 003E4160  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E7224 003E4164  38 DF 02 C0 */	addi r6, r31, 0x2c0
/* 803E7228 003E4168  D0 3E 01 E4 */	stfs f1, 0x1e4(r30)
/* 803E722C 003E416C  D0 1E 01 E8 */	stfs f0, 0x1e8(r30)
/* 803E7230 003E4170  48 02 C4 29 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E7234 003E4174  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E7238 003E4178  3C A0 70 6B */	lis r5, 0x706B3134@ha
/* 803E723C 003E417C  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E7240 003E4180  C0 02 19 68 */	lfs f0, lbl_8051FCC8@sda21(r2)
/* 803E7244 003E4184  90 1E 01 EC */	stw r0, 0x1ec(r30)
/* 803E7248 003E4188  7F C4 F3 78 */	mr r4, r30
/* 803E724C 003E418C  C0 22 19 64 */	lfs f1, lbl_8051FCC4@sda21(r2)
/* 803E7250 003E4190  38 7E 02 14 */	addi r3, r30, 0x214
/* 803E7254 003E4194  D0 1E 02 04 */	stfs f0, 0x204(r30)
/* 803E7258 003E4198  38 A5 31 34 */	addi r5, r5, 0x706B3134@l
/* 803E725C 003E419C  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E7260 003E41A0  38 DF 02 DC */	addi r6, r31, 0x2dc
/* 803E7264 003E41A4  D0 3E 02 0C */	stfs f1, 0x20c(r30)
/* 803E7268 003E41A8  D0 1E 02 10 */	stfs f0, 0x210(r30)
/* 803E726C 003E41AC  48 02 C3 ED */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E7270 003E41B0  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E7274 003E41B4  3C A0 70 6B */	lis r5, 0x706B3131@ha
/* 803E7278 003E41B8  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E727C 003E41BC  C0 02 19 6C */	lfs f0, lbl_8051FCCC@sda21(r2)
/* 803E7280 003E41C0  90 1E 02 14 */	stw r0, 0x214(r30)
/* 803E7284 003E41C4  7F C4 F3 78 */	mr r4, r30
/* 803E7288 003E41C8  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E728C 003E41CC  38 7E 02 3C */	addi r3, r30, 0x23c
/* 803E7290 003E41D0  D0 1E 02 2C */	stfs f0, 0x22c(r30)
/* 803E7294 003E41D4  38 A5 31 31 */	addi r5, r5, 0x706B3131@l
/* 803E7298 003E41D8  C0 02 19 2C */	lfs f0, lbl_8051FC8C@sda21(r2)
/* 803E729C 003E41DC  38 DF 02 F4 */	addi r6, r31, 0x2f4
/* 803E72A0 003E41E0  D0 3E 02 34 */	stfs f1, 0x234(r30)
/* 803E72A4 003E41E4  D0 1E 02 38 */	stfs f0, 0x238(r30)
/* 803E72A8 003E41E8  48 02 C3 B1 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E72AC 003E41EC  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E72B0 003E41F0  3C A0 70 6B */	lis r5, 0x706B3034@ha
/* 803E72B4 003E41F4  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E72B8 003E41F8  C0 02 19 70 */	lfs f0, lbl_8051FCD0@sda21(r2)
/* 803E72BC 003E41FC  90 1E 02 3C */	stw r0, 0x23c(r30)
/* 803E72C0 003E4200  7F C4 F3 78 */	mr r4, r30
/* 803E72C4 003E4204  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E72C8 003E4208  38 7E 02 64 */	addi r3, r30, 0x264
/* 803E72CC 003E420C  D0 1E 02 54 */	stfs f0, 0x254(r30)
/* 803E72D0 003E4210  38 A5 30 34 */	addi r5, r5, 0x706B3034@l
/* 803E72D4 003E4214  C0 02 19 08 */	lfs f0, lbl_8051FC68@sda21(r2)
/* 803E72D8 003E4218  38 DF 03 04 */	addi r6, r31, 0x304
/* 803E72DC 003E421C  D0 3E 02 5C */	stfs f1, 0x25c(r30)
/* 803E72E0 003E4220  D0 1E 02 60 */	stfs f0, 0x260(r30)
/* 803E72E4 003E4224  48 02 C3 75 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803E72E8 003E4228  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803E72EC 003E422C  C0 42 19 04 */	lfs f2, lbl_8051FC64@sda21(r2)
/* 803E72F0 003E4230  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803E72F4 003E4234  C0 22 19 00 */	lfs f1, lbl_8051FC60@sda21(r2)
/* 803E72F8 003E4238  90 1E 02 64 */	stw r0, 0x264(r30)
/* 803E72FC 003E423C  7F C3 F3 78 */	mr r3, r30
/* 803E7300 003E4240  C0 02 19 30 */	lfs f0, lbl_8051FC90@sda21(r2)
/* 803E7304 003E4244  D0 5E 02 7C */	stfs f2, 0x27c(r30)
/* 803E7308 003E4248  D0 3E 02 84 */	stfs f1, 0x284(r30)
/* 803E730C 003E424C  D0 1E 02 88 */	stfs f0, 0x288(r30)
/* 803E7310 003E4250  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803E7314 003E4254  83 C1 00 08 */	lwz r30, 8(r1)
/* 803E7318 003E4258  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803E731C 003E425C  7C 08 03 A6 */	mtlr r0
/* 803E7320 003E4260  38 21 00 10 */	addi r1, r1, 0x10
/* 803E7324 003E4264  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi5title6Pikmin6TParamFv

.fn getCreatureType__Q43ebi5title6Pikmin5TUnitFv, weak
/* 803E7328 003E4268  38 60 00 00 */	li r3, 0
/* 803E732C 003E426C  4E 80 00 20 */	blr 
.endfn getCreatureType__Q43ebi5title6Pikmin5TUnitFv

.section .text, "ax", unique, 2
.fn __sinit_ebiP2TitlePikmin_cpp, local
/* 803E7330 003E4270  3C 80 80 51 */	lis r4, __float_nan@ha
/* 803E7334 003E4274  38 00 FF FF */	li r0, -1
/* 803E7338 003E4278  C0 04 48 B0 */	lfs f0, __float_nan@l(r4)
/* 803E733C 003E427C  3C 60 80 4F */	lis r3, govNAN___Q24Game5P2JST@ha
/* 803E7340 003E4280  90 0D 9A 68 */	stw r0, gu32NAN___Q24Game5P2JST@sda21(r13)
/* 803E7344 003E4284  D4 03 9D F0 */	stfsu f0, govNAN___Q24Game5P2JST@l(r3)
/* 803E7348 003E4288  D0 0D 9A 6C */	stfs f0, gfNAN___Q24Game5P2JST@sda21(r13)
/* 803E734C 003E428C  D0 03 00 04 */	stfs f0, 4(r3)
/* 803E7350 003E4290  D0 03 00 08 */	stfs f0, 8(r3)
/* 803E7354 003E4294  4E 80 00 20 */	blr 
.endfn __sinit_ebiP2TitlePikmin_cpp
