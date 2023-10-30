.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80496AE8, local
	.asciz "ebiScreenFileSelect"
.endobj lbl_80496AE8
.balign 4
.obj lbl_80496AFC, local
	.asciz "TScreenDataWindow::setArchive--set__blo"
.endobj lbl_80496AFC
.balign 4
.obj lbl_80496B24, local
	.asciz "file_select_dw_new.blo"
.endobj lbl_80496B24
.balign 4
.obj lbl_80496B3C, local
	.asciz "TScreen_FS_scene_open::setArchive--callback_message"
.endobj lbl_80496B3C
.balign 4
.obj lbl_80496B70, local
	.asciz "ebiScreenFileSelect.cpp"
.endobj lbl_80496B70
.balign 4
.obj lbl_80496B88, local
	.asciz "P2Assert"
.endobj lbl_80496B88
.balign 4
.obj lbl_80496B94, local
	.asciz "file_select_dw_data.blo"
.endobj lbl_80496B94
.balign 4
.obj lbl_80496BAC, local
	.asciz "TScreenFileSelect::loadResource"
.endobj lbl_80496BAC
.balign 4
.obj lbl_80496BCC, local
	.asciz "file_select.szs"
.endobj lbl_80496BCC
.balign 4
.obj lbl_80496BDC, local
	.asciz "TScreenFileSelect::setArchive"
.endobj lbl_80496BDC
.balign 4
.obj lbl_80496BFC, local
	.asciz "TScreenFileSelect::setArchive--set__blo"
.endobj lbl_80496BFC
.balign 4
.obj lbl_80496C24, local
	.asciz "file_select.blo"
.endobj lbl_80496C24
.balign 4
.obj lbl_80496C34, local
	.asciz "file_select.bck"
.endobj lbl_80496C34
.balign 4
.obj lbl_80496C44, local
	.asciz "file_select.bpk"
.endobj lbl_80496C44
.balign 4
.obj lbl_80496C54, local
	.asciz "file_select_03.btk"
.endobj lbl_80496C54
.balign 4
.obj lbl_80496C68, local
	.asciz "file_select_02.btk"
.endobj lbl_80496C68
.balign 4
.obj lbl_80496C7C, local
	.asciz "file_select.btk"
.endobj lbl_80496C7C
.balign 4
.obj lbl_80496C8C, local
	.asciz "file_select_04.btk"
.endobj lbl_80496C8C
.balign 4
.obj lbl_80496CA0, local
	.asciz "file_select.brk"
.endobj lbl_80496CA0
.balign 4
.obj lbl_80496CB0, local
	.asciz "user/Ebisawa/effect/eff2d_file_select.jpc"
.endobj lbl_80496CB0
.balign 4
.obj lbl_80496CDC, local
	.asciz "break_new_icon.bti"
.endobj lbl_80496CDC
.balign 4
.obj lbl_80496CF0, local
	.asciz "new_icon.bti"
.endobj lbl_80496CF0
.balign 4
.obj lbl_80496D00, local
	.asciz "dicon_icon.bti"
.endobj lbl_80496D00
.balign 4
.obj lbl_80496D10, local
	.asciz "ArgColor"
.endobj lbl_80496D10
.balign 4
.obj lbl_80496D1C, local
	.asciz "ArgFilecopy"
.endobj lbl_80496D1C
.balign 4
.obj lbl_80496D28, local
	.asciz "TFileSelect"
.endobj lbl_80496D28

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj lbl_804E8D30, local
	.4byte .L_803D828C
	.4byte .L_803D82B8
	.4byte .L_803D82F4
	.4byte .L_803D8320
	.4byte .L_803D835C
	.4byte .L_803D838C
	.4byte .L_803D83BC
	.4byte .L_803D83EC
	.4byte .L_803D8428
	.4byte .L_803D8458
	.4byte .L_803D8488
.endobj lbl_804E8D30
.obj __vt__Q25efx2d8ArgColor, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q25efx2d8ArgColorFv
.endobj __vt__Q25efx2d8ArgColor
.obj __vt__Q35efx2d10FileSelect11ArgFilecopy, weak
	.4byte 0
	.4byte 0
	.4byte getName__Q35efx2d10FileSelect11ArgFilecopyFv
.endobj __vt__Q35efx2d10FileSelect11ArgFilecopy
.obj __vt__Q35efx2d10FileSelect13T2DFiledecide, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TSimple2FPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TSimple2Fv
	.4byte fade__Q25efx2d8TSimple2Fv
	.4byte setGroup__Q25efx2d5TBaseFUc
.endobj __vt__Q35efx2d10FileSelect13T2DFiledecide
.obj __vt__Q43ebi6Screen10FileSelect11TMainScreen, global
	.4byte 0
	.4byte 0
	.4byte setArchive__Q33ebi6Screen11TScreenBaseFP10JKRArchive
	.4byte openScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen7ArgOpen
	.4byte closeScreen__Q33ebi6Screen11TScreenBaseFPQ33ebi6Screen8ArgClose
	.4byte killScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte update__Q33ebi6Screen11TScreenBaseFv
	.4byte draw__Q33ebi6Screen11TScreenBaseFv
	.4byte isFinishScreen__Q33ebi6Screen11TScreenBaseFv
	.4byte doSetArchive__Q43ebi6Screen10FileSelect11TMainScreenFP10JKRArchive
	.4byte doOpenScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen7ArgOpen
	.4byte doCloseScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen8ArgClose
	.4byte doKillScreen__Q43ebi6Screen10FileSelect11TMainScreenFv
	.4byte doInitWaitState__Q43ebi6Screen10FileSelect11TMainScreenFv
	.4byte doUpdateStateOpen__Q43ebi6Screen10FileSelect11TMainScreenFv
	.4byte doUpdateStateWait__Q43ebi6Screen10FileSelect11TMainScreenFv
	.4byte doUpdateStateClose__Q43ebi6Screen10FileSelect11TMainScreenFv
	.4byte doDraw__Q43ebi6Screen10FileSelect11TMainScreenFv
	.4byte getName__Q43ebi6Screen10FileSelect11TMainScreenFv
.endobj __vt__Q43ebi6Screen10FileSelect11TMainScreen
.obj __vt__Q35efx2d10FileSelect11T2DFileselM, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d9TChasePosFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d10FileSelect11T2DFileselMFv"
	.4byte "@8@execute__Q25efx2d9TChasePosFP14JPABaseEmitter"
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d10FileSelect11T2DFileselMFv
	.4byte execute__Q25efx2d9TChasePosFP14JPABaseEmitter
.endobj __vt__Q35efx2d10FileSelect11T2DFileselM
.obj __vt__Q35efx2d10FileSelect10T2DFilesel, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d9TChasePosFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d10FileSelect10T2DFileselFv"
	.4byte "@8@execute__Q25efx2d9TChasePosFP14JPABaseEmitter"
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d10FileSelect10T2DFileselFv
	.4byte execute__Q25efx2d9TChasePosFP14JPABaseEmitter
.endobj __vt__Q35efx2d10FileSelect10T2DFilesel
.obj __vt__Q35efx2d10FileSelect16T2DFiledeletingM, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TForeverFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d10FileSelect16T2DFiledeletingMFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d10FileSelect16T2DFiledeletingMFv
.endobj __vt__Q35efx2d10FileSelect16T2DFiledeletingM
.obj __vt__Q35efx2d10FileSelect15T2DFiledeleting, weak
	.4byte 0
	.4byte 0
	.4byte create__Q25efx2d8TForeverFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d10FileSelect15T2DFiledeletingFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d10FileSelect15T2DFiledeletingFv
.endobj __vt__Q35efx2d10FileSelect15T2DFiledeleting
.obj __vt__Q35efx2d10FileSelect12T2DFilecopyM, weak
	.4byte 0
	.4byte 0
	.4byte create__Q35efx2d10FileSelect15T2DFilecopyBaseFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d10FileSelect12T2DFilecopyMFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d10FileSelect12T2DFilecopyMFv
.endobj __vt__Q35efx2d10FileSelect12T2DFilecopyM
.obj __vt__Q35efx2d10FileSelect11T2DFilecopy, weak
	.4byte 0
	.4byte 0
	.4byte create__Q35efx2d10FileSelect15T2DFilecopyBaseFPQ25efx2d3Arg
	.4byte kill__Q25efx2d8TForeverFv
	.4byte fade__Q25efx2d8TForeverFv
	.4byte setGroup__Q25efx2d5TBaseFUc
	.4byte 0
	.4byte 0
	.4byte "@8@__dt__Q35efx2d10FileSelect11T2DFilecopyFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte __dt__Q35efx2d10FileSelect11T2DFilecopyFv
.endobj __vt__Q35efx2d10FileSelect11T2DFilecopy

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051FB18, local
	.float 50.0
.endobj lbl_8051FB18
.obj lbl_8051FB1C, local
	.float 0.0
.endobj lbl_8051FB1C
.obj lbl_8051FB20, local
	.float 0.03333
.endobj lbl_8051FB20
.obj lbl_8051FB24, local
	.float 1.0
.endobj lbl_8051FB24
.obj lbl_8051FB28, local
	.float 5.0
.endobj lbl_8051FB28
.obj lbl_8051FB2C, local
	.float 60.0
.endobj lbl_8051FB2C
.obj lbl_8051FB30, local
	.float 0.5
.endobj lbl_8051FB30
.obj lbl_8051FB34, local
	.float 0.25
.endobj lbl_8051FB34
.obj lbl_8051FB38, local
	.float 0.4
.endobj lbl_8051FB38
.obj lbl_8051FB3C, local
	.float 255.0
.endobj lbl_8051FB3C
.obj lbl_8051FB40, local
	.float 1.2
.endobj lbl_8051FB40
.balign 8
.obj lbl_8051FB48, local
	.8byte 0x4330000000000000
.endobj lbl_8051FB48
.obj lbl_8051FB50, local
	.float 0.2
.endobj lbl_8051FB50
.obj lbl_8051FB54, local
	.float 3.3333333
.endobj lbl_8051FB54
.obj lbl_8051FB58, local
	.float 30.0
.endobj lbl_8051FB58
.obj lbl_8051FB5C, local
	.float 0.6
.endobj lbl_8051FB5C
.obj lbl_8051FB60, local
	.float 1023.0
.endobj lbl_8051FB60
.obj lbl_8051FB64, local
	.float 190.0
.endobj lbl_8051FB64

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn setData__Q43ebi6Screen10FileSelect22TScreenDataWindow_dataFlUlUlUlUlUlUl, global
/* 803D4244 003D1184  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803D4248 003D1188  7C 08 02 A6 */	mflr r0
/* 803D424C 003D118C  90 01 00 54 */	stw r0, 0x54(r1)
/* 803D4250 003D1190  38 00 00 00 */	li r0, 0
/* 803D4254 003D1194  BF 01 00 30 */	stmw r24, 0x30(r1)
/* 803D4258 003D1198  7C 99 23 79 */	or. r25, r4, r4
/* 803D425C 003D119C  7C 78 1B 78 */	mr r24, r3
/* 803D4260 003D11A0  7C BA 2B 78 */	mr r26, r5
/* 803D4264 003D11A4  7C DB 33 78 */	mr r27, r6
/* 803D4268 003D11A8  7C FC 3B 78 */	mr r28, r7
/* 803D426C 003D11AC  7D 1D 43 78 */	mr r29, r8
/* 803D4270 003D11B0  7D 3E 4B 78 */	mr r30, r9
/* 803D4274 003D11B4  7D 5F 53 78 */	mr r31, r10
/* 803D4278 003D11B8  41 80 00 10 */	blt .L_803D4288
/* 803D427C 003D11BC  2C 19 00 03 */	cmpwi r25, 3
/* 803D4280 003D11C0  40 80 00 08 */	bge .L_803D4288
/* 803D4284 003D11C4  38 00 00 01 */	li r0, 1
.L_803D4288:
/* 803D4288 003D11C8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D428C 003D11CC  40 82 00 20 */	bne .L_803D42AC
/* 803D4290 003D11D0  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D4294 003D11D4  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D4298 003D11D8  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D429C 003D11DC  38 80 00 81 */	li r4, 0x81
/* 803D42A0 003D11E0  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D42A4 003D11E4  4C C6 31 82 */	crclr 6
/* 803D42A8 003D11E8  4B C5 63 99 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D42AC:
/* 803D42AC 003D11EC  3C 80 61 74 */	lis r4, 0x61746131@ha
/* 803D42B0 003D11F0  80 78 00 00 */	lwz r3, 0(r24)
/* 803D42B4 003D11F4  38 C4 61 31 */	addi r6, r4, 0x61746131@l
/* 803D42B8 003D11F8  38 A0 50 64 */	li r5, 0x5064
/* 803D42BC 003D11FC  4B FF 60 9D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D42C0 003D1200  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803D42C4 003D1204  3C 80 61 74 */	lis r4, 0x61746132@ha
/* 803D42C8 003D1208  80 78 00 00 */	lwz r3, 0(r24)
/* 803D42CC 003D120C  38 C4 61 32 */	addi r6, r4, 0x61746132@l
/* 803D42D0 003D1210  38 A0 50 64 */	li r5, 0x5064
/* 803D42D4 003D1214  4B FF 60 85 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D42D8 003D1218  90 61 00 20 */	stw r3, 0x20(r1)
/* 803D42DC 003D121C  3C 80 61 74 */	lis r4, 0x61746133@ha
/* 803D42E0 003D1220  80 78 00 00 */	lwz r3, 0(r24)
/* 803D42E4 003D1224  38 C4 61 33 */	addi r6, r4, 0x61746133@l
/* 803D42E8 003D1228  38 A0 50 64 */	li r5, 0x5064
/* 803D42EC 003D122C  4B FF 60 6D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D42F0 003D1230  80 81 00 1C */	lwz r4, 0x1c(r1)
/* 803D42F4 003D1234  38 E0 00 00 */	li r7, 0
/* 803D42F8 003D1238  80 C1 00 20 */	lwz r6, 0x20(r1)
/* 803D42FC 003D123C  57 20 10 3A */	slwi r0, r25, 2
/* 803D4300 003D1240  98 E4 00 B0 */	stb r7, 0xb0(r4)
/* 803D4304 003D1244  38 81 00 1C */	addi r4, r1, 0x1c
/* 803D4308 003D1248  38 A0 00 01 */	li r5, 1
/* 803D430C 003D124C  90 61 00 24 */	stw r3, 0x24(r1)
/* 803D4310 003D1250  98 E6 00 B0 */	stb r7, 0xb0(r6)
/* 803D4314 003D1254  7C 84 00 2E */	lwzx r4, r4, r0
/* 803D4318 003D1258  98 E3 00 B0 */	stb r7, 0xb0(r3)
/* 803D431C 003D125C  98 A4 00 B0 */	stb r5, 0xb0(r4)
/* 803D4320 003D1260  93 58 00 10 */	stw r26, 0x10(r24)
/* 803D4324 003D1264  93 78 00 14 */	stw r27, 0x14(r24)
/* 803D4328 003D1268  80 18 00 10 */	lwz r0, 0x10(r24)
/* 803D432C 003D126C  28 00 27 10 */	cmplwi r0, 0x2710
/* 803D4330 003D1270  40 80 00 58 */	bge .L_803D4388
/* 803D4334 003D1274  3C 80 72 73 */	lis r4, 0x72736C61@ha
/* 803D4338 003D1278  80 78 00 00 */	lwz r3, 0(r24)
/* 803D433C 003D127C  38 C4 6C 61 */	addi r6, r4, 0x72736C61@l
/* 803D4340 003D1280  38 A0 50 74 */	li r5, 0x5074
/* 803D4344 003D1284  4B FF 60 15 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D4348 003D1288  38 00 00 00 */	li r0, 0
/* 803D434C 003D128C  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D4350 003D1290  80 78 00 08 */	lwz r3, 8(r24)
/* 803D4354 003D1294  81 83 00 00 */	lwz r12, 0(r3)
/* 803D4358 003D1298  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D435C 003D129C  7D 89 03 A6 */	mtctr r12
/* 803D4360 003D12A0  4E 80 04 21 */	bctrl 
/* 803D4364 003D12A4  80 78 00 04 */	lwz r3, 4(r24)
/* 803D4368 003D12A8  4B F3 74 59 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803D436C 003D12AC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D4370 003D12B0  C0 22 17 B8 */	lfs f1, lbl_8051FB18@sda21(r2)
/* 803D4374 003D12B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D4378 003D12B8  C0 42 17 BC */	lfs f2, lbl_8051FB1C@sda21(r2)
/* 803D437C 003D12BC  7D 89 03 A6 */	mtctr r12
/* 803D4380 003D12C0  4E 80 04 21 */	bctrl 
/* 803D4384 003D12C4  48 00 00 54 */	b .L_803D43D8
.L_803D4388:
/* 803D4388 003D12C8  3C 80 72 73 */	lis r4, 0x72736C61@ha
/* 803D438C 003D12CC  80 78 00 00 */	lwz r3, 0(r24)
/* 803D4390 003D12D0  38 C4 6C 61 */	addi r6, r4, 0x72736C61@l
/* 803D4394 003D12D4  38 A0 50 74 */	li r5, 0x5074
/* 803D4398 003D12D8  4B FF 5F C1 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D439C 003D12DC  38 00 00 01 */	li r0, 1
/* 803D43A0 003D12E0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D43A4 003D12E4  80 78 00 08 */	lwz r3, 8(r24)
/* 803D43A8 003D12E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D43AC 003D12EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803D43B0 003D12F0  7D 89 03 A6 */	mtctr r12
/* 803D43B4 003D12F4  4E 80 04 21 */	bctrl 
/* 803D43B8 003D12F8  80 78 00 04 */	lwz r3, 4(r24)
/* 803D43BC 003D12FC  4B F3 74 05 */	bl getMotherPane__Q32og6Screen18CallBack_CounterRVFv
/* 803D43C0 003D1300  81 83 00 00 */	lwz r12, 0(r3)
/* 803D43C4 003D1304  C0 22 17 BC */	lfs f1, lbl_8051FB1C@sda21(r2)
/* 803D43C8 003D1308  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D43CC 003D130C  FC 40 08 90 */	fmr f2, f1
/* 803D43D0 003D1310  7D 89 03 A6 */	mtctr r12
/* 803D43D4 003D1314  4E 80 04 21 */	bctrl 
.L_803D43D8:
/* 803D43D8 003D1318  93 98 00 24 */	stw r28, 0x24(r24)
/* 803D43DC 003D131C  3C 60 61 6E */	lis r3, 0x616E6163@ha
/* 803D43E0 003D1320  38 C3 61 63 */	addi r6, r3, 0x616E6163@l
/* 803D43E4 003D1324  38 A0 00 50 */	li r5, 0x50
/* 803D43E8 003D1328  93 B8 00 28 */	stw r29, 0x28(r24)
/* 803D43EC 003D132C  93 D8 00 1C */	stw r30, 0x1c(r24)
/* 803D43F0 003D1330  93 F8 00 20 */	stw r31, 0x20(r24)
/* 803D43F4 003D1334  80 78 00 00 */	lwz r3, 0(r24)
/* 803D43F8 003D1338  4B FF 5F 61 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D43FC 003D133C  7C 7A 1B 78 */	mr r26, r3
/* 803D4400 003D1340  3C A0 6E 61 */	lis r5, 0x6E616D65@ha
/* 803D4404 003D1344  3C 80 54 61 */	lis r4, 0x54616E61@ha
/* 803D4408 003D1348  80 78 00 00 */	lwz r3, 0(r24)
/* 803D440C 003D134C  38 C5 6D 65 */	addi r6, r5, 0x6E616D65@l
/* 803D4410 003D1350  38 A4 6E 61 */	addi r5, r4, 0x54616E61@l
/* 803D4414 003D1354  4B FF 5F 45 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D4418 003D1358  7C 79 1B 78 */	mr r25, r3
/* 803D441C 003D135C  80 78 00 24 */	lwz r3, 0x24(r24)
/* 803D4420 003D1360  4B F4 89 61 */	bl caveIDtoMsgID__Q22og9newScreenFUl
/* 803D4424 003D1364  7C 60 1B 78 */	mr r0, r3
/* 803D4428 003D1368  80 78 00 24 */	lwz r3, 0x24(r24)
/* 803D442C 003D136C  7C 9B 23 78 */	mr r27, r4
/* 803D4430 003D1370  38 81 00 08 */	addi r4, r1, 8
/* 803D4434 003D1374  7C 18 03 78 */	mr r24, r0
/* 803D4438 003D1378  4B FE DA 81 */	bl EUTDebug_Tag32ToName__3ebiFUlPc
/* 803D443C 003D137C  7F 64 DB 78 */	mr r4, r27
/* 803D4440 003D1380  7F 03 C3 78 */	mr r3, r24
/* 803D4444 003D1384  38 A1 00 10 */	addi r5, r1, 0x10
/* 803D4448 003D1388  4B FE DA 6D */	bl EUTDebug_Tag64ToName__3ebiFUxPc
/* 803D444C 003D138C  38 80 00 00 */	li r4, 0
/* 803D4450 003D1390  7F 63 22 78 */	xor r3, r27, r4
/* 803D4454 003D1394  7F 00 22 78 */	xor r0, r24, r4
/* 803D4458 003D1398  7C 60 03 79 */	or. r0, r3, r0
/* 803D445C 003D139C  40 82 00 0C */	bne .L_803D4468
/* 803D4460 003D13A0  98 9A 00 B0 */	stb r4, 0xb0(r26)
/* 803D4464 003D13A4  48 00 00 20 */	b .L_803D4484
.L_803D4468:
/* 803D4468 003D13A8  38 60 00 01 */	li r3, 1
/* 803D446C 003D13AC  38 00 00 02 */	li r0, 2
/* 803D4470 003D13B0  98 7A 00 B0 */	stb r3, 0xb0(r26)
/* 803D4474 003D13B4  7C 7B 00 14 */	addc r3, r27, r0
/* 803D4478 003D13B8  7C 18 21 14 */	adde r0, r24, r4
/* 803D447C 003D13BC  90 79 00 1C */	stw r3, 0x1c(r25)
/* 803D4480 003D13C0  90 19 00 18 */	stw r0, 0x18(r25)
.L_803D4484:
/* 803D4484 003D13C4  BB 01 00 30 */	lmw r24, 0x30(r1)
/* 803D4488 003D13C8  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803D448C 003D13CC  7C 08 03 A6 */	mtlr r0
/* 803D4490 003D13D0  38 21 00 50 */	addi r1, r1, 0x50
/* 803D4494 003D13D4  4E 80 00 20 */	blr 
.endfn setData__Q43ebi6Screen10FileSelect22TScreenDataWindow_dataFlUlUlUlUlUlUl

.fn __ct__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D4498 003D13D8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803D449C 003D13DC  7C 08 02 A6 */	mflr r0
/* 803D44A0 003D13E0  3C 80 80 4F */	lis r4, __vt__Q33ebi6Screen20TScreenBaseInterface@ha
/* 803D44A4 003D13E4  38 A0 00 00 */	li r5, 0
/* 803D44A8 003D13E8  90 01 00 54 */	stw r0, 0x54(r1)
/* 803D44AC 003D13EC  38 04 87 E8 */	addi r0, r4, __vt__Q33ebi6Screen20TScreenBaseInterface@l
/* 803D44B0 003D13F0  BE 21 00 14 */	stmw r17, 0x14(r1)
/* 803D44B4 003D13F4  7C 7F 1B 78 */	mr r31, r3
/* 803D44B8 003D13F8  3B 1F 00 E0 */	addi r24, r31, 0xe0
/* 803D44BC 003D13FC  3C 60 80 4F */	lis r3, __vt__Q33ebi6Screen11TScreenBase@ha
/* 803D44C0 003D1400  7F 11 C3 78 */	mr r17, r24
/* 803D44C4 003D1404  90 1F 00 00 */	stw r0, 0(r31)
/* 803D44C8 003D1408  38 03 8C 90 */	addi r0, r3, __vt__Q33ebi6Screen11TScreenBase@l
/* 803D44CC 003D140C  3C 60 80 4F */	lis r3, __vt__Q43ebi6Screen10FileSelect11TMainScreen@ha
/* 803D44D0 003D1410  90 1F 00 00 */	stw r0, 0(r31)
/* 803D44D4 003D1414  38 83 8D 8C */	addi r4, r3, __vt__Q43ebi6Screen10FileSelect11TMainScreen@l
/* 803D44D8 003D1418  38 00 FF FF */	li r0, -1
/* 803D44DC 003D141C  7F 03 C3 78 */	mr r3, r24
/* 803D44E0 003D1420  90 BF 00 04 */	stw r5, 4(r31)
/* 803D44E4 003D1424  90 BF 00 08 */	stw r5, 8(r31)
/* 803D44E8 003D1428  90 9F 00 00 */	stw r4, 0(r31)
/* 803D44EC 003D142C  90 1F 00 C0 */	stw r0, 0xc0(r31)
/* 803D44F0 003D1430  90 1F 00 C4 */	stw r0, 0xc4(r31)
/* 803D44F4 003D1434  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 803D44F8 003D1438  90 1F 00 CC */	stw r0, 0xcc(r31)
/* 803D44FC 003D143C  90 1F 00 D0 */	stw r0, 0xd0(r31)
/* 803D4500 003D1440  90 1F 00 D4 */	stw r0, 0xd4(r31)
/* 803D4504 003D1444  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 803D4508 003D1448  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 803D450C 003D144C  48 03 CE 85 */	bl __ct__5CNodeFv
/* 803D4510 003D1450  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4514 003D1454  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4518 003D1458  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D451C 003D145C  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4520 003D1460  90 18 00 00 */	stw r0, 0(r24)
/* 803D4524 003D1464  38 00 00 00 */	li r0, 0
/* 803D4528 003D1468  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D452C 003D146C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4530 003D1470  90 18 00 18 */	stw r0, 0x18(r24)
/* 803D4534 003D1474  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4538 003D1478  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D453C 003D147C  38 C0 00 01 */	li r6, 1
/* 803D4540 003D1480  90 11 00 00 */	stw r0, 0(r17)
/* 803D4544 003D1484  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4548 003D1488  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D454C 003D148C  38 78 00 20 */	addi r3, r24, 0x20
/* 803D4550 003D1490  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4554 003D1494  38 80 00 00 */	li r4, 0
/* 803D4558 003D1498  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D455C 003D149C  90 B8 00 00 */	stw r5, 0(r24)
/* 803D4560 003D14A0  90 18 00 20 */	stw r0, 0x20(r24)
/* 803D4564 003D14A4  4B C9 31 15 */	bl init__12J3DFrameCtrlFs
/* 803D4568 003D14A8  3A 3F 01 1C */	addi r17, r31, 0x11c
/* 803D456C 003D14AC  7E 23 8B 78 */	mr r3, r17
/* 803D4570 003D14B0  48 03 CE 21 */	bl __ct__5CNodeFv
/* 803D4574 003D14B4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4578 003D14B8  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D457C 003D14BC  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4580 003D14C0  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4584 003D14C4  90 11 00 00 */	stw r0, 0(r17)
/* 803D4588 003D14C8  38 00 00 00 */	li r0, 0
/* 803D458C 003D14CC  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4590 003D14D0  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4594 003D14D4  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4598 003D14D8  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D459C 003D14DC  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D45A0 003D14E0  38 C0 00 01 */	li r6, 1
/* 803D45A4 003D14E4  90 11 00 00 */	stw r0, 0(r17)
/* 803D45A8 003D14E8  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D45AC 003D14EC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D45B0 003D14F0  38 71 00 20 */	addi r3, r17, 0x20
/* 803D45B4 003D14F4  90 F1 00 00 */	stw r7, 0(r17)
/* 803D45B8 003D14F8  38 80 00 00 */	li r4, 0
/* 803D45BC 003D14FC  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D45C0 003D1500  90 B1 00 00 */	stw r5, 0(r17)
/* 803D45C4 003D1504  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D45C8 003D1508  4B C9 30 B1 */	bl init__12J3DFrameCtrlFs
/* 803D45CC 003D150C  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D45D0 003D1510  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D45D4 003D1514  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D45D8 003D1518  38 C0 00 3C */	li r6, 0x3c
/* 803D45DC 003D151C  38 7F 01 58 */	addi r3, r31, 0x158
/* 803D45E0 003D1520  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D45E4 003D1524  38 E0 00 03 */	li r7, 3
/* 803D45E8 003D1528  4B CE D2 55 */	bl __construct_array
/* 803D45EC 003D152C  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D45F0 003D1530  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D45F4 003D1534  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D45F8 003D1538  38 C0 00 3C */	li r6, 0x3c
/* 803D45FC 003D153C  38 7F 02 0C */	addi r3, r31, 0x20c
/* 803D4600 003D1540  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D4604 003D1544  38 E0 00 03 */	li r7, 3
/* 803D4608 003D1548  4B CE D2 35 */	bl __construct_array
/* 803D460C 003D154C  3A 3F 02 C0 */	addi r17, r31, 0x2c0
/* 803D4610 003D1550  7E 23 8B 78 */	mr r3, r17
/* 803D4614 003D1554  48 03 CD 7D */	bl __ct__5CNodeFv
/* 803D4618 003D1558  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D461C 003D155C  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4620 003D1560  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4624 003D1564  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4628 003D1568  90 11 00 00 */	stw r0, 0(r17)
/* 803D462C 003D156C  38 00 00 00 */	li r0, 0
/* 803D4630 003D1570  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4634 003D1574  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4638 003D1578  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D463C 003D157C  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4640 003D1580  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4644 003D1584  38 C0 00 01 */	li r6, 1
/* 803D4648 003D1588  90 11 00 00 */	stw r0, 0(r17)
/* 803D464C 003D158C  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4650 003D1590  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4654 003D1594  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4658 003D1598  90 F1 00 00 */	stw r7, 0(r17)
/* 803D465C 003D159C  38 80 00 00 */	li r4, 0
/* 803D4660 003D15A0  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4664 003D15A4  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4668 003D15A8  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D466C 003D15AC  4B C9 30 0D */	bl init__12J3DFrameCtrlFs
/* 803D4670 003D15B0  3A 3F 02 FC */	addi r17, r31, 0x2fc
/* 803D4674 003D15B4  7E 23 8B 78 */	mr r3, r17
/* 803D4678 003D15B8  48 03 CD 19 */	bl __ct__5CNodeFv
/* 803D467C 003D15BC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4680 003D15C0  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4684 003D15C4  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4688 003D15C8  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D468C 003D15CC  90 11 00 00 */	stw r0, 0(r17)
/* 803D4690 003D15D0  38 00 00 00 */	li r0, 0
/* 803D4694 003D15D4  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4698 003D15D8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D469C 003D15DC  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D46A0 003D15E0  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D46A4 003D15E4  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D46A8 003D15E8  38 C0 00 01 */	li r6, 1
/* 803D46AC 003D15EC  90 11 00 00 */	stw r0, 0(r17)
/* 803D46B0 003D15F0  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D46B4 003D15F4  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D46B8 003D15F8  38 71 00 20 */	addi r3, r17, 0x20
/* 803D46BC 003D15FC  90 F1 00 00 */	stw r7, 0(r17)
/* 803D46C0 003D1600  38 80 00 00 */	li r4, 0
/* 803D46C4 003D1604  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D46C8 003D1608  90 B1 00 00 */	stw r5, 0(r17)
/* 803D46CC 003D160C  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D46D0 003D1610  4B C9 2F A9 */	bl init__12J3DFrameCtrlFs
/* 803D46D4 003D1614  3A 3F 03 38 */	addi r17, r31, 0x338
/* 803D46D8 003D1618  7E 23 8B 78 */	mr r3, r17
/* 803D46DC 003D161C  48 03 CC B5 */	bl __ct__5CNodeFv
/* 803D46E0 003D1620  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D46E4 003D1624  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D46E8 003D1628  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D46EC 003D162C  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D46F0 003D1630  90 11 00 00 */	stw r0, 0(r17)
/* 803D46F4 003D1634  38 00 00 00 */	li r0, 0
/* 803D46F8 003D1638  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D46FC 003D163C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4700 003D1640  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4704 003D1644  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4708 003D1648  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D470C 003D164C  38 C0 00 01 */	li r6, 1
/* 803D4710 003D1650  90 11 00 00 */	stw r0, 0(r17)
/* 803D4714 003D1654  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4718 003D1658  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D471C 003D165C  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4720 003D1660  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4724 003D1664  38 80 00 00 */	li r4, 0
/* 803D4728 003D1668  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D472C 003D166C  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4730 003D1670  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4734 003D1674  4B C9 2F 45 */	bl init__12J3DFrameCtrlFs
/* 803D4738 003D1678  3A 3F 03 74 */	addi r17, r31, 0x374
/* 803D473C 003D167C  7E 23 8B 78 */	mr r3, r17
/* 803D4740 003D1680  48 03 CC 51 */	bl __ct__5CNodeFv
/* 803D4744 003D1684  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4748 003D1688  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D474C 003D168C  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4750 003D1690  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4754 003D1694  90 11 00 00 */	stw r0, 0(r17)
/* 803D4758 003D1698  38 00 00 00 */	li r0, 0
/* 803D475C 003D169C  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4760 003D16A0  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4764 003D16A4  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4768 003D16A8  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D476C 003D16AC  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4770 003D16B0  38 C0 00 01 */	li r6, 1
/* 803D4774 003D16B4  90 11 00 00 */	stw r0, 0(r17)
/* 803D4778 003D16B8  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D477C 003D16BC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4780 003D16C0  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4784 003D16C4  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4788 003D16C8  38 80 00 00 */	li r4, 0
/* 803D478C 003D16CC  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4790 003D16D0  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4794 003D16D4  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4798 003D16D8  4B C9 2E E1 */	bl init__12J3DFrameCtrlFs
/* 803D479C 003D16DC  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D47A0 003D16E0  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D47A4 003D16E4  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D47A8 003D16E8  38 C0 00 3C */	li r6, 0x3c
/* 803D47AC 003D16EC  38 7F 03 B0 */	addi r3, r31, 0x3b0
/* 803D47B0 003D16F0  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D47B4 003D16F4  38 E0 00 03 */	li r7, 3
/* 803D47B8 003D16F8  4B CE D0 85 */	bl __construct_array
/* 803D47BC 003D16FC  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D47C0 003D1700  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D47C4 003D1704  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D47C8 003D1708  38 C0 00 3C */	li r6, 0x3c
/* 803D47CC 003D170C  38 7F 04 64 */	addi r3, r31, 0x464
/* 803D47D0 003D1710  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D47D4 003D1714  38 E0 00 03 */	li r7, 3
/* 803D47D8 003D1718  4B CE D0 65 */	bl __construct_array
/* 803D47DC 003D171C  3C 60 80 3E */	lis r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D47E0 003D1720  3C A0 80 3D */	lis r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@ha
/* 803D47E4 003D1724  38 83 9A 64 */	addi r4, r3, __ct__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D47E8 003D1728  38 C0 00 3C */	li r6, 0x3c
/* 803D47EC 003D172C  38 7F 05 18 */	addi r3, r31, 0x518
/* 803D47F0 003D1730  38 A5 FF 94 */	addi r5, r5, __dt__Q23ebi19E2DCallBack_AnmBaseFv@l
/* 803D47F4 003D1734  38 E0 00 03 */	li r7, 3
/* 803D47F8 003D1738  4B CE D0 45 */	bl __construct_array
/* 803D47FC 003D173C  3A 3F 05 CC */	addi r17, r31, 0x5cc
/* 803D4800 003D1740  7E 23 8B 78 */	mr r3, r17
/* 803D4804 003D1744  48 03 CB 8D */	bl __ct__5CNodeFv
/* 803D4808 003D1748  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D480C 003D174C  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4810 003D1750  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4814 003D1754  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4818 003D1758  90 11 00 00 */	stw r0, 0(r17)
/* 803D481C 003D175C  38 00 00 00 */	li r0, 0
/* 803D4820 003D1760  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4824 003D1764  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4828 003D1768  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D482C 003D176C  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4830 003D1770  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4834 003D1774  38 C0 00 01 */	li r6, 1
/* 803D4838 003D1778  90 11 00 00 */	stw r0, 0(r17)
/* 803D483C 003D177C  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4840 003D1780  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4844 003D1784  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4848 003D1788  90 F1 00 00 */	stw r7, 0(r17)
/* 803D484C 003D178C  38 80 00 00 */	li r4, 0
/* 803D4850 003D1790  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4854 003D1794  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4858 003D1798  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D485C 003D179C  4B C9 2E 1D */	bl init__12J3DFrameCtrlFs
/* 803D4860 003D17A0  3A 3F 06 08 */	addi r17, r31, 0x608
/* 803D4864 003D17A4  7E 23 8B 78 */	mr r3, r17
/* 803D4868 003D17A8  48 03 CB 29 */	bl __ct__5CNodeFv
/* 803D486C 003D17AC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4870 003D17B0  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4874 003D17B4  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4878 003D17B8  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D487C 003D17BC  90 11 00 00 */	stw r0, 0(r17)
/* 803D4880 003D17C0  38 00 00 00 */	li r0, 0
/* 803D4884 003D17C4  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4888 003D17C8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D488C 003D17CC  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4890 003D17D0  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4894 003D17D4  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4898 003D17D8  38 C0 00 01 */	li r6, 1
/* 803D489C 003D17DC  90 11 00 00 */	stw r0, 0(r17)
/* 803D48A0 003D17E0  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D48A4 003D17E4  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D48A8 003D17E8  38 71 00 20 */	addi r3, r17, 0x20
/* 803D48AC 003D17EC  90 F1 00 00 */	stw r7, 0(r17)
/* 803D48B0 003D17F0  38 80 00 00 */	li r4, 0
/* 803D48B4 003D17F4  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D48B8 003D17F8  90 B1 00 00 */	stw r5, 0(r17)
/* 803D48BC 003D17FC  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D48C0 003D1800  4B C9 2D B9 */	bl init__12J3DFrameCtrlFs
/* 803D48C4 003D1804  3A 3F 06 44 */	addi r17, r31, 0x644
/* 803D48C8 003D1808  7E 23 8B 78 */	mr r3, r17
/* 803D48CC 003D180C  48 03 CA C5 */	bl __ct__5CNodeFv
/* 803D48D0 003D1810  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D48D4 003D1814  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D48D8 003D1818  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D48DC 003D181C  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D48E0 003D1820  90 11 00 00 */	stw r0, 0(r17)
/* 803D48E4 003D1824  38 00 00 00 */	li r0, 0
/* 803D48E8 003D1828  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D48EC 003D182C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D48F0 003D1830  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D48F4 003D1834  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D48F8 003D1838  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D48FC 003D183C  38 C0 00 01 */	li r6, 1
/* 803D4900 003D1840  90 11 00 00 */	stw r0, 0(r17)
/* 803D4904 003D1844  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4908 003D1848  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D490C 003D184C  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4910 003D1850  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4914 003D1854  38 80 00 00 */	li r4, 0
/* 803D4918 003D1858  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D491C 003D185C  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4920 003D1860  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4924 003D1864  4B C9 2D 55 */	bl init__12J3DFrameCtrlFs
/* 803D4928 003D1868  3A 3F 06 80 */	addi r17, r31, 0x680
/* 803D492C 003D186C  7E 23 8B 78 */	mr r3, r17
/* 803D4930 003D1870  48 03 CA 61 */	bl __ct__5CNodeFv
/* 803D4934 003D1874  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4938 003D1878  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D493C 003D187C  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4940 003D1880  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4944 003D1884  90 11 00 00 */	stw r0, 0(r17)
/* 803D4948 003D1888  38 00 00 00 */	li r0, 0
/* 803D494C 003D188C  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4950 003D1890  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4954 003D1894  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4958 003D1898  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D495C 003D189C  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4960 003D18A0  38 C0 00 01 */	li r6, 1
/* 803D4964 003D18A4  90 11 00 00 */	stw r0, 0(r17)
/* 803D4968 003D18A8  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D496C 003D18AC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4970 003D18B0  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4974 003D18B4  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4978 003D18B8  38 80 00 00 */	li r4, 0
/* 803D497C 003D18BC  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4980 003D18C0  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4984 003D18C4  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4988 003D18C8  4B C9 2C F1 */	bl init__12J3DFrameCtrlFs
/* 803D498C 003D18CC  3A 3F 06 BC */	addi r17, r31, 0x6bc
/* 803D4990 003D18D0  7E 23 8B 78 */	mr r3, r17
/* 803D4994 003D18D4  48 03 C9 FD */	bl __ct__5CNodeFv
/* 803D4998 003D18D8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D499C 003D18DC  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D49A0 003D18E0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D49A4 003D18E4  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D49A8 003D18E8  90 11 00 00 */	stw r0, 0(r17)
/* 803D49AC 003D18EC  38 00 00 00 */	li r0, 0
/* 803D49B0 003D18F0  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D49B4 003D18F4  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D49B8 003D18F8  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D49BC 003D18FC  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D49C0 003D1900  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D49C4 003D1904  38 C0 00 01 */	li r6, 1
/* 803D49C8 003D1908  90 11 00 00 */	stw r0, 0(r17)
/* 803D49CC 003D190C  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D49D0 003D1910  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D49D4 003D1914  38 71 00 20 */	addi r3, r17, 0x20
/* 803D49D8 003D1918  90 F1 00 00 */	stw r7, 0(r17)
/* 803D49DC 003D191C  38 80 00 00 */	li r4, 0
/* 803D49E0 003D1920  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D49E4 003D1924  90 B1 00 00 */	stw r5, 0(r17)
/* 803D49E8 003D1928  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D49EC 003D192C  4B C9 2C 8D */	bl init__12J3DFrameCtrlFs
/* 803D49F0 003D1930  3A 3F 06 F8 */	addi r17, r31, 0x6f8
/* 803D49F4 003D1934  7E 23 8B 78 */	mr r3, r17
/* 803D49F8 003D1938  48 03 C9 99 */	bl __ct__5CNodeFv
/* 803D49FC 003D193C  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4A00 003D1940  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4A04 003D1944  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4A08 003D1948  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4A0C 003D194C  90 11 00 00 */	stw r0, 0(r17)
/* 803D4A10 003D1950  38 00 00 00 */	li r0, 0
/* 803D4A14 003D1954  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4A18 003D1958  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4A1C 003D195C  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4A20 003D1960  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4A24 003D1964  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4A28 003D1968  38 C0 00 01 */	li r6, 1
/* 803D4A2C 003D196C  90 11 00 00 */	stw r0, 0(r17)
/* 803D4A30 003D1970  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4A34 003D1974  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4A38 003D1978  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4A3C 003D197C  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4A40 003D1980  38 80 00 00 */	li r4, 0
/* 803D4A44 003D1984  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4A48 003D1988  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4A4C 003D198C  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4A50 003D1990  4B C9 2C 29 */	bl init__12J3DFrameCtrlFs
/* 803D4A54 003D1994  3A 3F 07 34 */	addi r17, r31, 0x734
/* 803D4A58 003D1998  7E 23 8B 78 */	mr r3, r17
/* 803D4A5C 003D199C  48 03 C9 35 */	bl __ct__5CNodeFv
/* 803D4A60 003D19A0  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4A64 003D19A4  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4A68 003D19A8  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4A6C 003D19AC  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4A70 003D19B0  90 11 00 00 */	stw r0, 0(r17)
/* 803D4A74 003D19B4  38 00 00 00 */	li r0, 0
/* 803D4A78 003D19B8  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4A7C 003D19BC  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4A80 003D19C0  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4A84 003D19C4  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4A88 003D19C8  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4A8C 003D19CC  38 C0 00 01 */	li r6, 1
/* 803D4A90 003D19D0  90 11 00 00 */	stw r0, 0(r17)
/* 803D4A94 003D19D4  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4A98 003D19D8  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4A9C 003D19DC  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4AA0 003D19E0  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4AA4 003D19E4  38 80 00 00 */	li r4, 0
/* 803D4AA8 003D19E8  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4AAC 003D19EC  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4AB0 003D19F0  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4AB4 003D19F4  4B C9 2B C5 */	bl init__12J3DFrameCtrlFs
/* 803D4AB8 003D19F8  3A 3F 07 70 */	addi r17, r31, 0x770
/* 803D4ABC 003D19FC  7E 23 8B 78 */	mr r3, r17
/* 803D4AC0 003D1A00  48 03 C8 D1 */	bl __ct__5CNodeFv
/* 803D4AC4 003D1A04  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4AC8 003D1A08  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4ACC 003D1A0C  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4AD0 003D1A10  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4AD4 003D1A14  90 11 00 00 */	stw r0, 0(r17)
/* 803D4AD8 003D1A18  38 00 00 00 */	li r0, 0
/* 803D4ADC 003D1A1C  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4AE0 003D1A20  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4AE4 003D1A24  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4AE8 003D1A28  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4AEC 003D1A2C  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4AF0 003D1A30  38 C0 00 01 */	li r6, 1
/* 803D4AF4 003D1A34  90 11 00 00 */	stw r0, 0(r17)
/* 803D4AF8 003D1A38  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4AFC 003D1A3C  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4B00 003D1A40  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4B04 003D1A44  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4B08 003D1A48  38 80 00 00 */	li r4, 0
/* 803D4B0C 003D1A4C  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4B10 003D1A50  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4B14 003D1A54  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4B18 003D1A58  4B C9 2B 61 */	bl init__12J3DFrameCtrlFs
/* 803D4B1C 003D1A5C  3A 3F 07 AC */	addi r17, r31, 0x7ac
/* 803D4B20 003D1A60  7E 23 8B 78 */	mr r3, r17
/* 803D4B24 003D1A64  48 03 C8 6D */	bl __ct__5CNodeFv
/* 803D4B28 003D1A68  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4B2C 003D1A6C  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4B30 003D1A70  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4B34 003D1A74  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4B38 003D1A78  90 11 00 00 */	stw r0, 0(r17)
/* 803D4B3C 003D1A7C  38 00 00 00 */	li r0, 0
/* 803D4B40 003D1A80  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4B44 003D1A84  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4B48 003D1A88  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4B4C 003D1A8C  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4B50 003D1A90  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4B54 003D1A94  38 C0 00 01 */	li r6, 1
/* 803D4B58 003D1A98  90 11 00 00 */	stw r0, 0(r17)
/* 803D4B5C 003D1A9C  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4B60 003D1AA0  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4B64 003D1AA4  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4B68 003D1AA8  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4B6C 003D1AAC  38 80 00 00 */	li r4, 0
/* 803D4B70 003D1AB0  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4B74 003D1AB4  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4B78 003D1AB8  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4B7C 003D1ABC  4B C9 2A FD */	bl init__12J3DFrameCtrlFs
/* 803D4B80 003D1AC0  3A 3F 07 E8 */	addi r17, r31, 0x7e8
/* 803D4B84 003D1AC4  7E 23 8B 78 */	mr r3, r17
/* 803D4B88 003D1AC8  48 03 C8 09 */	bl __ct__5CNodeFv
/* 803D4B8C 003D1ACC  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4B90 003D1AD0  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4B94 003D1AD4  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4B98 003D1AD8  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4B9C 003D1ADC  90 11 00 00 */	stw r0, 0(r17)
/* 803D4BA0 003D1AE0  38 00 00 00 */	li r0, 0
/* 803D4BA4 003D1AE4  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4BA8 003D1AE8  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4BAC 003D1AEC  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4BB0 003D1AF0  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4BB4 003D1AF4  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4BB8 003D1AF8  38 C0 00 01 */	li r6, 1
/* 803D4BBC 003D1AFC  90 11 00 00 */	stw r0, 0(r17)
/* 803D4BC0 003D1B00  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4BC4 003D1B04  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4BC8 003D1B08  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4BCC 003D1B0C  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4BD0 003D1B10  38 80 00 00 */	li r4, 0
/* 803D4BD4 003D1B14  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4BD8 003D1B18  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4BDC 003D1B1C  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4BE0 003D1B20  4B C9 2A 99 */	bl init__12J3DFrameCtrlFs
/* 803D4BE4 003D1B24  3A 3F 08 24 */	addi r17, r31, 0x824
/* 803D4BE8 003D1B28  7E 23 8B 78 */	mr r3, r17
/* 803D4BEC 003D1B2C  48 03 C7 A5 */	bl __ct__5CNodeFv
/* 803D4BF0 003D1B30  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4BF4 003D1B34  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4BF8 003D1B38  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4BFC 003D1B3C  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4C00 003D1B40  90 11 00 00 */	stw r0, 0(r17)
/* 803D4C04 003D1B44  38 00 00 00 */	li r0, 0
/* 803D4C08 003D1B48  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4C0C 003D1B4C  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4C10 003D1B50  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4C14 003D1B54  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4C18 003D1B58  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4C1C 003D1B5C  38 C0 00 01 */	li r6, 1
/* 803D4C20 003D1B60  90 11 00 00 */	stw r0, 0(r17)
/* 803D4C24 003D1B64  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4C28 003D1B68  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4C2C 003D1B6C  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4C30 003D1B70  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4C34 003D1B74  38 80 00 00 */	li r4, 0
/* 803D4C38 003D1B78  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4C3C 003D1B7C  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4C40 003D1B80  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4C44 003D1B84  4B C9 2A 35 */	bl init__12J3DFrameCtrlFs
/* 803D4C48 003D1B88  3A 3F 08 60 */	addi r17, r31, 0x860
/* 803D4C4C 003D1B8C  7E 23 8B 78 */	mr r3, r17
/* 803D4C50 003D1B90  48 03 C7 41 */	bl __ct__5CNodeFv
/* 803D4C54 003D1B94  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4C58 003D1B98  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4C5C 003D1B9C  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4C60 003D1BA0  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4C64 003D1BA4  90 11 00 00 */	stw r0, 0(r17)
/* 803D4C68 003D1BA8  38 00 00 00 */	li r0, 0
/* 803D4C6C 003D1BAC  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D4C70 003D1BB0  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D4C74 003D1BB4  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4C78 003D1BB8  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4C7C 003D1BBC  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4C80 003D1BC0  38 C0 00 01 */	li r6, 1
/* 803D4C84 003D1BC4  90 11 00 00 */	stw r0, 0(r17)
/* 803D4C88 003D1BC8  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D4C8C 003D1BCC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D4C90 003D1BD0  38 71 00 20 */	addi r3, r17, 0x20
/* 803D4C94 003D1BD4  90 F1 00 00 */	stw r7, 0(r17)
/* 803D4C98 003D1BD8  38 80 00 00 */	li r4, 0
/* 803D4C9C 003D1BDC  98 D1 00 1C */	stb r6, 0x1c(r17)
/* 803D4CA0 003D1BE0  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4CA4 003D1BE4  90 11 00 20 */	stw r0, 0x20(r17)
/* 803D4CA8 003D1BE8  4B C9 29 D1 */	bl init__12J3DFrameCtrlFs
/* 803D4CAC 003D1BEC  3A 3F 08 9C */	addi r17, r31, 0x89c
/* 803D4CB0 003D1BF0  7E 23 8B 78 */	mr r3, r17
/* 803D4CB4 003D1BF4  48 03 C6 DD */	bl __ct__5CNodeFv
/* 803D4CB8 003D1BF8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4CBC 003D1BFC  3B 1F 08 BC */	addi r24, r31, 0x8bc
/* 803D4CC0 003D1C00  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4CC4 003D1C04  3C A0 80 4D */	lis r5, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4CC8 003D1C08  90 11 00 00 */	stw r0, 0(r17)
/* 803D4CCC 003D1C0C  38 00 00 00 */	li r0, 0
/* 803D4CD0 003D1C10  3C 80 80 4F */	lis r4, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4CD4 003D1C14  3C 60 80 4F */	lis r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@ha
/* 803D4CD8 003D1C18  90 11 00 18 */	stw r0, 0x18(r17)
/* 803D4CDC 003D1C1C  38 05 7F 2C */	addi r0, r5, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4CE0 003D1C20  38 A4 88 30 */	addi r5, r4, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4CE4 003D1C24  38 80 00 01 */	li r4, 1
/* 803D4CE8 003D1C28  90 11 00 00 */	stw r0, 0(r17)
/* 803D4CEC 003D1C2C  38 03 88 0C */	addi r0, r3, __vt__Q23ebi25E2DCallBack_CalcAnimation@l
/* 803D4CF0 003D1C30  7F 12 C3 78 */	mr r18, r24
/* 803D4CF4 003D1C34  7F 03 C3 78 */	mr r3, r24
/* 803D4CF8 003D1C38  90 B1 00 00 */	stw r5, 0(r17)
/* 803D4CFC 003D1C3C  98 91 00 1C */	stb r4, 0x1c(r17)
/* 803D4D00 003D1C40  90 11 00 00 */	stw r0, 0(r17)
/* 803D4D04 003D1C44  48 03 C6 8D */	bl __ct__5CNodeFv
/* 803D4D08 003D1C48  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4D0C 003D1C4C  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4D10 003D1C50  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4D14 003D1C54  3C C0 80 4F */	lis r6, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4D18 003D1C58  90 18 00 00 */	stw r0, 0(r24)
/* 803D4D1C 003D1C5C  38 00 00 00 */	li r0, 0
/* 803D4D20 003D1C60  3C 60 80 3D */	lis r3, __ct__Q23ebi16E2DFullFontColorFv@ha
/* 803D4D24 003D1C64  38 E0 00 01 */	li r7, 1
/* 803D4D28 003D1C68  90 18 00 18 */	stw r0, 0x18(r24)
/* 803D4D2C 003D1C6C  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4D30 003D1C70  38 83 FE EC */	addi r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
/* 803D4D34 003D1C74  38 66 88 30 */	addi r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4D38 003D1C78  90 12 00 00 */	stw r0, 0(r18)
/* 803D4D3C 003D1C7C  3C A0 80 4F */	lis r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803D4D40 003D1C80  38 05 8A 54 */	addi r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803D4D44 003D1C84  38 C0 00 10 */	li r6, 0x10
/* 803D4D48 003D1C88  90 72 00 00 */	stw r3, 0(r18)
/* 803D4D4C 003D1C8C  38 78 00 20 */	addi r3, r24, 0x20
/* 803D4D50 003D1C90  38 A0 00 00 */	li r5, 0
/* 803D4D54 003D1C94  98 F2 00 1C */	stb r7, 0x1c(r18)
/* 803D4D58 003D1C98  38 E0 00 02 */	li r7, 2
/* 803D4D5C 003D1C9C  90 18 00 00 */	stw r0, 0(r24)
/* 803D4D60 003D1CA0  4B CE CA DD */	bl __construct_array
/* 803D4D64 003D1CA4  C0 22 17 BC */	lfs f1, lbl_8051FB1C@sda21(r2)
/* 803D4D68 003D1CA8  3B 3F 09 08 */	addi r25, r31, 0x908
/* 803D4D6C 003D1CAC  C0 02 17 C0 */	lfs f0, lbl_8051FB20@sda21(r2)
/* 803D4D70 003D1CB0  38 80 00 01 */	li r4, 1
/* 803D4D74 003D1CB4  D0 38 00 40 */	stfs f1, 0x40(r24)
/* 803D4D78 003D1CB8  38 00 00 00 */	li r0, 0
/* 803D4D7C 003D1CBC  7F 31 CB 78 */	mr r17, r25
/* 803D4D80 003D1CC0  7F 23 CB 78 */	mr r3, r25
/* 803D4D84 003D1CC4  D0 18 00 44 */	stfs f0, 0x44(r24)
/* 803D4D88 003D1CC8  98 98 00 48 */	stb r4, 0x48(r24)
/* 803D4D8C 003D1CCC  98 18 00 49 */	stb r0, 0x49(r24)
/* 803D4D90 003D1CD0  98 18 00 1C */	stb r0, 0x1c(r24)
/* 803D4D94 003D1CD4  48 03 C5 FD */	bl __ct__5CNodeFv
/* 803D4D98 003D1CD8  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D4D9C 003D1CDC  3C 80 80 4D */	lis r4, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D4DA0 003D1CE0  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D4DA4 003D1CE4  3C C0 80 4F */	lis r6, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D4DA8 003D1CE8  90 19 00 00 */	stw r0, 0(r25)
/* 803D4DAC 003D1CEC  38 00 00 00 */	li r0, 0
/* 803D4DB0 003D1CF0  3C 60 80 3D */	lis r3, __ct__Q23ebi16E2DFullFontColorFv@ha
/* 803D4DB4 003D1CF4  38 E0 00 01 */	li r7, 1
/* 803D4DB8 003D1CF8  90 19 00 18 */	stw r0, 0x18(r25)
/* 803D4DBC 003D1CFC  38 04 7F 2C */	addi r0, r4, __vt__Q29P2DScreen12CallBackNode@l
/* 803D4DC0 003D1D00  38 83 FE EC */	addi r4, r3, __ct__Q23ebi16E2DFullFontColorFv@l
/* 803D4DC4 003D1D04  38 66 88 30 */	addi r3, r6, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D4DC8 003D1D08  90 11 00 00 */	stw r0, 0(r17)
/* 803D4DCC 003D1D0C  3C A0 80 4F */	lis r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@ha
/* 803D4DD0 003D1D10  38 05 8A 54 */	addi r0, r5, __vt__Q23ebi26E2DCallBack_BlinkFontColor@l
/* 803D4DD4 003D1D14  38 C0 00 10 */	li r6, 0x10
/* 803D4DD8 003D1D18  90 71 00 00 */	stw r3, 0(r17)
/* 803D4DDC 003D1D1C  38 79 00 20 */	addi r3, r25, 0x20
/* 803D4DE0 003D1D20  38 A0 00 00 */	li r5, 0
/* 803D4DE4 003D1D24  98 F1 00 1C */	stb r7, 0x1c(r17)
/* 803D4DE8 003D1D28  38 E0 00 02 */	li r7, 2
/* 803D4DEC 003D1D2C  90 19 00 00 */	stw r0, 0(r25)
/* 803D4DF0 003D1D30  4B CE CA 4D */	bl __construct_array
/* 803D4DF4 003D1D34  C0 22 17 BC */	lfs f1, lbl_8051FB1C@sda21(r2)
/* 803D4DF8 003D1D38  3C 60 80 3D */	lis r3, __dt__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803D4DFC 003D1D3C  38 A3 F7 E4 */	addi r5, r3, __dt__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803D4E00 003D1D40  3C 80 80 3D */	lis r4, __ct__Q23ebi20E2DCallBack_PurupuruFv@ha
/* 803D4E04 003D1D44  C0 02 17 C0 */	lfs f0, lbl_8051FB20@sda21(r2)
/* 803D4E08 003D1D48  38 60 00 01 */	li r3, 1
/* 803D4E0C 003D1D4C  D0 39 00 40 */	stfs f1, 0x40(r25)
/* 803D4E10 003D1D50  38 00 00 00 */	li r0, 0
/* 803D4E14 003D1D54  38 84 FD 40 */	addi r4, r4, __ct__Q23ebi20E2DCallBack_PurupuruFv@l
/* 803D4E18 003D1D58  38 C0 00 40 */	li r6, 0x40
/* 803D4E1C 003D1D5C  D0 19 00 44 */	stfs f0, 0x44(r25)
/* 803D4E20 003D1D60  38 E0 00 02 */	li r7, 2
/* 803D4E24 003D1D64  98 79 00 48 */	stb r3, 0x48(r25)
/* 803D4E28 003D1D68  38 7F 09 54 */	addi r3, r31, 0x954
/* 803D4E2C 003D1D6C  98 19 00 49 */	stb r0, 0x49(r25)
/* 803D4E30 003D1D70  98 19 00 1C */	stb r0, 0x1c(r25)
/* 803D4E34 003D1D74  4B CE CA 09 */	bl __construct_array
/* 803D4E38 003D1D78  3C 80 80 4C */	lis r4, __vt__Q25efx2d7TBaseIF@ha
/* 803D4E3C 003D1D7C  3C 60 80 4C */	lis r3, __vt__Q25efx2d5TBase@ha
/* 803D4E40 003D1D80  3B 84 14 F0 */	addi r28, r4, __vt__Q25efx2d7TBaseIF@l
/* 803D4E44 003D1D84  3C E0 80 4A */	lis r7, __vt__18JPAEmitterCallBack@ha
/* 803D4E48 003D1D88  93 9F 09 EC */	stw r28, 0x9ec(r31)
/* 803D4E4C 003D1D8C  39 83 14 D8 */	addi r12, r3, __vt__Q25efx2d5TBase@l
/* 803D4E50 003D1D90  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D4E54 003D1D94  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803D4E58 003D1D98  91 9F 09 EC */	stw r12, 0x9ec(r31)
/* 803D4E5C 003D1D9C  39 60 00 00 */	li r11, 0
/* 803D4E60 003D1DA0  39 44 74 20 */	addi r10, r4, __vt__Q25efx2d8TForever@l
/* 803D4E64 003D1DA4  38 C3 73 CC */	addi r6, r3, __vt__Q25efx2d9TChasePos@l
/* 803D4E68 003D1DA8  99 7F 09 F0 */	stb r11, 0x9f0(r31)
/* 803D4E6C 003D1DAC  3C 60 80 4E */	lis r3, __vt__Q25efx2d9T2DCursor@ha
/* 803D4E70 003D1DB0  38 A3 76 48 */	addi r5, r3, __vt__Q25efx2d9T2DCursor@l
/* 803D4E74 003D1DB4  38 07 E2 7C */	addi r0, r7, __vt__18JPAEmitterCallBack@l
/* 803D4E78 003D1DB8  99 7F 09 F1 */	stb r11, 0x9f1(r31)
/* 803D4E7C 003D1DBC  3B CA 00 18 */	addi r30, r10, 0x18
/* 803D4E80 003D1DC0  3B A6 00 18 */	addi r29, r6, 0x18
/* 803D4E84 003D1DC4  38 9F 0A 08 */	addi r4, r31, 0xa08
/* 803D4E88 003D1DC8  90 1F 09 F4 */	stw r0, 0x9f4(r31)
/* 803D4E8C 003D1DCC  38 E5 00 18 */	addi r7, r5, 0x18
/* 803D4E90 003D1DD0  C0 62 17 C4 */	lfs f3, lbl_8051FB24@sda21(r2)
/* 803D4E94 003D1DD4  38 7F 0A 40 */	addi r3, r31, 0xa40
/* 803D4E98 003D1DD8  91 5F 09 EC */	stw r10, 0x9ec(r31)
/* 803D4E9C 003D1DDC  C0 42 17 C8 */	lfs f2, lbl_8051FB28@sda21(r2)
/* 803D4EA0 003D1DE0  93 DF 09 F4 */	stw r30, 0x9f4(r31)
/* 803D4EA4 003D1DE4  C0 22 17 BC */	lfs f1, lbl_8051FB1C@sda21(r2)
/* 803D4EA8 003D1DE8  B1 7F 09 F8 */	sth r11, 0x9f8(r31)
/* 803D4EAC 003D1DEC  91 7F 09 FC */	stw r11, 0x9fc(r31)
/* 803D4EB0 003D1DF0  90 DF 09 EC */	stw r6, 0x9ec(r31)
/* 803D4EB4 003D1DF4  93 BF 09 F4 */	stw r29, 0x9f4(r31)
/* 803D4EB8 003D1DF8  90 9F 0A 00 */	stw r4, 0xa00(r31)
/* 803D4EBC 003D1DFC  90 BF 09 EC */	stw r5, 0x9ec(r31)
/* 803D4EC0 003D1E00  90 FF 09 F4 */	stw r7, 0x9f4(r31)
/* 803D4EC4 003D1E04  D0 7F 0A 04 */	stfs f3, 0xa04(r31)
/* 803D4EC8 003D1E08  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D4ECC 003D1E0C  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803D4ED0 003D1E10  EC 02 00 32 */	fmuls f0, f2, f0
/* 803D4ED4 003D1E14  D0 1F 0A 10 */	stfs f0, 0xa10(r31)
/* 803D4ED8 003D1E18  D0 3F 0A 14 */	stfs f1, 0xa14(r31)
/* 803D4EDC 003D1E1C  91 7F 0A 1C */	stw r11, 0xa1c(r31)
/* 803D4EE0 003D1E20  91 7F 0A 20 */	stw r11, 0xa20(r31)
/* 803D4EE4 003D1E24  93 9F 0A 24 */	stw r28, 0xa24(r31)
/* 803D4EE8 003D1E28  91 9F 0A 24 */	stw r12, 0xa24(r31)
/* 803D4EEC 003D1E2C  99 7F 0A 28 */	stb r11, 0xa28(r31)
/* 803D4EF0 003D1E30  99 7F 0A 29 */	stb r11, 0xa29(r31)
/* 803D4EF4 003D1E34  90 1F 0A 2C */	stw r0, 0xa2c(r31)
/* 803D4EF8 003D1E38  91 5F 0A 24 */	stw r10, 0xa24(r31)
/* 803D4EFC 003D1E3C  93 DF 0A 2C */	stw r30, 0xa2c(r31)
/* 803D4F00 003D1E40  B1 7F 0A 30 */	sth r11, 0xa30(r31)
/* 803D4F04 003D1E44  91 7F 0A 34 */	stw r11, 0xa34(r31)
/* 803D4F08 003D1E48  90 DF 0A 24 */	stw r6, 0xa24(r31)
/* 803D4F0C 003D1E4C  93 BF 0A 2C */	stw r29, 0xa2c(r31)
/* 803D4F10 003D1E50  90 7F 0A 38 */	stw r3, 0xa38(r31)
/* 803D4F14 003D1E54  90 BF 0A 24 */	stw r5, 0xa24(r31)
/* 803D4F18 003D1E58  90 FF 0A 2C */	stw r7, 0xa2c(r31)
/* 803D4F1C 003D1E5C  D0 7F 0A 3C */	stfs f3, 0xa3c(r31)
/* 803D4F20 003D1E60  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D4F24 003D1E64  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D4F28 003D1E68  EC 02 00 32 */	fmuls f0, f2, f0
/* 803D4F2C 003D1E6C  D0 1F 0A 48 */	stfs f0, 0xa48(r31)
/* 803D4F30 003D1E70  D0 3F 0A 4C */	stfs f1, 0xa4c(r31)
/* 803D4F34 003D1E74  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@ha
/* 803D4F38 003D1E78  39 23 75 60 */	addi r9, r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@l
/* 803D4F3C 003D1E7C  3C 80 80 4F */	lis r4, __vt__Q35efx2d10FileSelect12T2DFilecopyM@ha
/* 803D4F40 003D1E80  91 7F 0A 54 */	stw r11, 0xa54(r31)
/* 803D4F44 003D1E84  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect11T2DFilecopy@ha
/* 803D4F48 003D1E88  39 03 8E F8 */	addi r8, r3, __vt__Q35efx2d10FileSelect11T2DFilecopy@l
/* 803D4F4C 003D1E8C  3A 84 8E C0 */	addi r20, r4, __vt__Q35efx2d10FileSelect12T2DFilecopyM@l
/* 803D4F50 003D1E90  91 7F 0A 58 */	stw r11, 0xa58(r31)
/* 803D4F54 003D1E94  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect15T2DFiledeleting@ha
/* 803D4F58 003D1E98  3A E3 8E 88 */	addi r23, r3, __vt__Q35efx2d10FileSelect15T2DFiledeleting@l
/* 803D4F5C 003D1E9C  3A 29 00 18 */	addi r17, r9, 0x18
/* 803D4F60 003D1EA0  93 9F 0A 5C */	stw r28, 0xa5c(r31)
/* 803D4F64 003D1EA4  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect16T2DFiledeletingM@ha
/* 803D4F68 003D1EA8  3B 23 8E 50 */	addi r25, r3, __vt__Q35efx2d10FileSelect16T2DFiledeletingM@l
/* 803D4F6C 003D1EAC  3A 40 00 01 */	li r18, 1
/* 803D4F70 003D1EB0  91 9F 0A 5C */	stw r12, 0xa5c(r31)
/* 803D4F74 003D1EB4  3C 60 80 38 */	lis r3, "__ct__10Vector2<f>Fv"@ha
/* 803D4F78 003D1EB8  38 83 D0 B8 */	addi r4, r3, "__ct__10Vector2<f>Fv"@l
/* 803D4F7C 003D1EBC  3A 68 00 18 */	addi r19, r8, 0x18
/* 803D4F80 003D1EC0  99 7F 0A 60 */	stb r11, 0xa60(r31)
/* 803D4F84 003D1EC4  3A B4 00 18 */	addi r21, r20, 0x18
/* 803D4F88 003D1EC8  3A C0 00 0A */	li r22, 0xa
/* 803D4F8C 003D1ECC  3B 77 00 18 */	addi r27, r23, 0x18
/* 803D4F90 003D1ED0  99 7F 0A 61 */	stb r11, 0xa61(r31)
/* 803D4F94 003D1ED4  3B 40 00 0B */	li r26, 0xb
/* 803D4F98 003D1ED8  3B 19 00 18 */	addi r24, r25, 0x18
/* 803D4F9C 003D1EDC  38 7F 0A C4 */	addi r3, r31, 0xac4
/* 803D4FA0 003D1EE0  90 1F 0A 64 */	stw r0, 0xa64(r31)
/* 803D4FA4 003D1EE4  38 A0 00 00 */	li r5, 0
/* 803D4FA8 003D1EE8  38 C0 00 08 */	li r6, 8
/* 803D4FAC 003D1EEC  38 E0 00 03 */	li r7, 3
/* 803D4FB0 003D1EF0  91 5F 0A 5C */	stw r10, 0xa5c(r31)
/* 803D4FB4 003D1EF4  93 DF 0A 64 */	stw r30, 0xa64(r31)
/* 803D4FB8 003D1EF8  B1 7F 0A 68 */	sth r11, 0xa68(r31)
/* 803D4FBC 003D1EFC  91 7F 0A 6C */	stw r11, 0xa6c(r31)
/* 803D4FC0 003D1F00  91 3F 0A 5C */	stw r9, 0xa5c(r31)
/* 803D4FC4 003D1F04  92 3F 0A 64 */	stw r17, 0xa64(r31)
/* 803D4FC8 003D1F08  9A 5F 0A 60 */	stb r18, 0xa60(r31)
/* 803D4FCC 003D1F0C  91 1F 0A 5C */	stw r8, 0xa5c(r31)
/* 803D4FD0 003D1F10  92 7F 0A 64 */	stw r19, 0xa64(r31)
/* 803D4FD4 003D1F14  9A 5F 0A 60 */	stb r18, 0xa60(r31)
/* 803D4FD8 003D1F18  93 9F 0A 70 */	stw r28, 0xa70(r31)
/* 803D4FDC 003D1F1C  91 9F 0A 70 */	stw r12, 0xa70(r31)
/* 803D4FE0 003D1F20  99 7F 0A 74 */	stb r11, 0xa74(r31)
/* 803D4FE4 003D1F24  99 7F 0A 75 */	stb r11, 0xa75(r31)
/* 803D4FE8 003D1F28  90 1F 0A 78 */	stw r0, 0xa78(r31)
/* 803D4FEC 003D1F2C  91 5F 0A 70 */	stw r10, 0xa70(r31)
/* 803D4FF0 003D1F30  93 DF 0A 78 */	stw r30, 0xa78(r31)
/* 803D4FF4 003D1F34  B2 5F 0A 7C */	sth r18, 0xa7c(r31)
/* 803D4FF8 003D1F38  91 7F 0A 80 */	stw r11, 0xa80(r31)
/* 803D4FFC 003D1F3C  91 3F 0A 70 */	stw r9, 0xa70(r31)
/* 803D5000 003D1F40  92 3F 0A 78 */	stw r17, 0xa78(r31)
/* 803D5004 003D1F44  9A 5F 0A 74 */	stb r18, 0xa74(r31)
/* 803D5008 003D1F48  92 9F 0A 70 */	stw r20, 0xa70(r31)
/* 803D500C 003D1F4C  92 BF 0A 78 */	stw r21, 0xa78(r31)
/* 803D5010 003D1F50  9A 5F 0A 74 */	stb r18, 0xa74(r31)
/* 803D5014 003D1F54  93 9F 0A 9C */	stw r28, 0xa9c(r31)
/* 803D5018 003D1F58  91 9F 0A 9C */	stw r12, 0xa9c(r31)
/* 803D501C 003D1F5C  99 7F 0A A0 */	stb r11, 0xaa0(r31)
/* 803D5020 003D1F60  99 7F 0A A1 */	stb r11, 0xaa1(r31)
/* 803D5024 003D1F64  90 1F 0A A4 */	stw r0, 0xaa4(r31)
/* 803D5028 003D1F68  91 5F 0A 9C */	stw r10, 0xa9c(r31)
/* 803D502C 003D1F6C  93 DF 0A A4 */	stw r30, 0xaa4(r31)
/* 803D5030 003D1F70  B2 DF 0A A8 */	sth r22, 0xaa8(r31)
/* 803D5034 003D1F74  91 7F 0A AC */	stw r11, 0xaac(r31)
/* 803D5038 003D1F78  92 FF 0A 9C */	stw r23, 0xa9c(r31)
/* 803D503C 003D1F7C  93 7F 0A A4 */	stw r27, 0xaa4(r31)
/* 803D5040 003D1F80  9A 5F 0A A0 */	stb r18, 0xaa0(r31)
/* 803D5044 003D1F84  93 9F 0A B0 */	stw r28, 0xab0(r31)
/* 803D5048 003D1F88  91 9F 0A B0 */	stw r12, 0xab0(r31)
/* 803D504C 003D1F8C  99 7F 0A B4 */	stb r11, 0xab4(r31)
/* 803D5050 003D1F90  99 7F 0A B5 */	stb r11, 0xab5(r31)
/* 803D5054 003D1F94  90 1F 0A B8 */	stw r0, 0xab8(r31)
/* 803D5058 003D1F98  91 5F 0A B0 */	stw r10, 0xab0(r31)
/* 803D505C 003D1F9C  93 DF 0A B8 */	stw r30, 0xab8(r31)
/* 803D5060 003D1FA0  B3 5F 0A BC */	sth r26, 0xabc(r31)
/* 803D5064 003D1FA4  91 7F 0A C0 */	stw r11, 0xac0(r31)
/* 803D5068 003D1FA8  93 3F 0A B0 */	stw r25, 0xab0(r31)
/* 803D506C 003D1FAC  93 1F 0A B8 */	stw r24, 0xab8(r31)
/* 803D5070 003D1FB0  9A 5F 0A B4 */	stb r18, 0xab4(r31)
/* 803D5074 003D1FB4  4B CE C7 C9 */	bl __construct_array
/* 803D5078 003D1FB8  3C 80 80 38 */	lis r4, "__ct__10Vector2<f>Fv"@ha
/* 803D507C 003D1FBC  38 7F 0A DC */	addi r3, r31, 0xadc
/* 803D5080 003D1FC0  38 84 D0 B8 */	addi r4, r4, "__ct__10Vector2<f>Fv"@l
/* 803D5084 003D1FC4  38 A0 00 00 */	li r5, 0
/* 803D5088 003D1FC8  38 C0 00 08 */	li r6, 8
/* 803D508C 003D1FCC  38 E0 00 03 */	li r7, 3
/* 803D5090 003D1FD0  4B CE C7 AD */	bl __construct_array
/* 803D5094 003D1FD4  38 00 00 00 */	li r0, 0
/* 803D5098 003D1FD8  3C 60 80 3E */	lis r3, __ct__Q43ebi6Screen10FileSelect9TFileDataFv@ha
/* 803D509C 003D1FDC  98 1F 0A FC */	stb r0, 0xafc(r31)
/* 803D50A0 003D1FE0  38 83 97 24 */	addi r4, r3, __ct__Q43ebi6Screen10FileSelect9TFileDataFv@l
/* 803D50A4 003D1FE4  38 7F 0B 00 */	addi r3, r31, 0xb00
/* 803D50A8 003D1FE8  38 A0 00 00 */	li r5, 0
/* 803D50AC 003D1FEC  98 1F 0A FD */	stb r0, 0xafd(r31)
/* 803D50B0 003D1FF0  38 C0 00 34 */	li r6, 0x34
/* 803D50B4 003D1FF4  38 E0 00 03 */	li r7, 3
/* 803D50B8 003D1FF8  98 1F 0A FE */	stb r0, 0xafe(r31)
/* 803D50BC 003D1FFC  98 1F 0A FF */	stb r0, 0xaff(r31)
/* 803D50C0 003D2000  4B CE C7 7D */	bl __construct_array
/* 803D50C4 003D2004  39 00 00 00 */	li r8, 0
/* 803D50C8 003D2008  38 60 00 FF */	li r3, 0xff
/* 803D50CC 003D200C  91 1F 0B A0 */	stw r8, 0xba0(r31)
/* 803D50D0 003D2010  38 00 00 03 */	li r0, 3
/* 803D50D4 003D2014  99 1F 0B A4 */	stb r8, 0xba4(r31)
/* 803D50D8 003D2018  91 1F 0B A8 */	stw r8, 0xba8(r31)
/* 803D50DC 003D201C  99 1F 0B B4 */	stb r8, 0xbb4(r31)
/* 803D50E0 003D2020  91 1F 0B B8 */	stw r8, 0xbb8(r31)
/* 803D50E4 003D2024  91 1F 0B BC */	stw r8, 0xbbc(r31)
/* 803D50E8 003D2028  91 1F 0B C0 */	stw r8, 0xbc0(r31)
/* 803D50EC 003D202C  91 1F 0B CC */	stw r8, 0xbcc(r31)
/* 803D50F0 003D2030  91 1F 0B D0 */	stw r8, 0xbd0(r31)
/* 803D50F4 003D2034  99 1F 0B D4 */	stb r8, 0xbd4(r31)
/* 803D50F8 003D2038  99 1F 0B D5 */	stb r8, 0xbd5(r31)
/* 803D50FC 003D203C  99 1F 0B D6 */	stb r8, 0xbd6(r31)
/* 803D5100 003D2040  98 7F 0B D7 */	stb r3, 0xbd7(r31)
/* 803D5104 003D2044  98 7F 0B D8 */	stb r3, 0xbd8(r31)
/* 803D5108 003D2048  91 1F 0B DC */	stw r8, 0xbdc(r31)
/* 803D510C 003D204C  91 1F 0B E0 */	stw r8, 0xbe0(r31)
/* 803D5110 003D2050  91 1F 0B E4 */	stw r8, 0xbe4(r31)
/* 803D5114 003D2054  91 1F 0B E8 */	stw r8, 0xbe8(r31)
/* 803D5118 003D2058  91 1F 0B EC */	stw r8, 0xbec(r31)
/* 803D511C 003D205C  91 1F 0B F0 */	stw r8, 0xbf0(r31)
/* 803D5120 003D2060  91 1F 0B F4 */	stw r8, 0xbf4(r31)
/* 803D5124 003D2064  91 1F 00 0C */	stw r8, 0xc(r31)
/* 803D5128 003D2068  91 1F 00 10 */	stw r8, 0x10(r31)
/* 803D512C 003D206C  91 1F 00 14 */	stw r8, 0x14(r31)
/* 803D5130 003D2070  91 1F 00 18 */	stw r8, 0x18(r31)
/* 803D5134 003D2074  91 1F 00 1C */	stw r8, 0x1c(r31)
/* 803D5138 003D2078  7C 09 03 A6 */	mtctr r0
/* 803D513C 003D207C  7D 1C 43 78 */	mr r28, r8
.L_803D5140:
/* 803D5140 003D2080  38 68 00 38 */	addi r3, r8, 0x38
/* 803D5144 003D2084  38 08 00 44 */	addi r0, r8, 0x44
/* 803D5148 003D2088  7F 9F 19 2E */	stwx r28, r31, r3
/* 803D514C 003D208C  38 E8 00 50 */	addi r7, r8, 0x50
/* 803D5150 003D2090  38 C8 00 5C */	addi r6, r8, 0x5c
/* 803D5154 003D2094  38 A8 00 68 */	addi r5, r8, 0x68
/* 803D5158 003D2098  7F 9F 01 2E */	stwx r28, r31, r0
/* 803D515C 003D209C  38 88 00 74 */	addi r4, r8, 0x74
/* 803D5160 003D20A0  38 68 00 80 */	addi r3, r8, 0x80
/* 803D5164 003D20A4  38 08 00 8C */	addi r0, r8, 0x8c
/* 803D5168 003D20A8  7F 9F 39 2E */	stwx r28, r31, r7
/* 803D516C 003D20AC  39 08 00 04 */	addi r8, r8, 4
/* 803D5170 003D20B0  7F 9F 31 2E */	stwx r28, r31, r6
/* 803D5174 003D20B4  7F 9F 29 2E */	stwx r28, r31, r5
/* 803D5178 003D20B8  7F 9F 21 2E */	stwx r28, r31, r4
/* 803D517C 003D20BC  7F 9F 19 2E */	stwx r28, r31, r3
/* 803D5180 003D20C0  7F 9F 01 2E */	stwx r28, r31, r0
/* 803D5184 003D20C4  42 00 FF BC */	bdnz .L_803D5140
/* 803D5188 003D20C8  93 9F 00 98 */	stw r28, 0x98(r31)
/* 803D518C 003D20CC  3C 80 80 4F */	lis r4, __vt__Q35efx2d10FileSelect10T2DFilesel@ha
/* 803D5190 003D20D0  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect11T2DFileselM@ha
/* 803D5194 003D20D4  7F 9B E3 78 */	mr r27, r28
/* 803D5198 003D20D8  93 9F 00 9C */	stw r28, 0x9c(r31)
/* 803D519C 003D20DC  38 84 8E 14 */	addi r4, r4, __vt__Q35efx2d10FileSelect10T2DFilesel@l
/* 803D51A0 003D20E0  38 63 8D D8 */	addi r3, r3, __vt__Q35efx2d10FileSelect11T2DFileselM@l
/* 803D51A4 003D20E4  3B 00 00 00 */	li r24, 0
/* 803D51A8 003D20E8  93 9F 00 A0 */	stw r28, 0xa0(r31)
/* 803D51AC 003D20EC  3B 44 00 18 */	addi r26, r4, 0x18
/* 803D51B0 003D20F0  3B 23 00 18 */	addi r25, r3, 0x18
/* 803D51B4 003D20F4  93 9F 00 A4 */	stw r28, 0xa4(r31)
/* 803D51B8 003D20F8  93 9F 00 A8 */	stw r28, 0xa8(r31)
/* 803D51BC 003D20FC  93 9F 00 AC */	stw r28, 0xac(r31)
/* 803D51C0 003D2100  93 9F 00 B0 */	stw r28, 0xb0(r31)
/* 803D51C4 003D2104  93 9F 00 B4 */	stw r28, 0xb4(r31)
/* 803D51C8 003D2108  93 9F 00 B8 */	stw r28, 0xb8(r31)
/* 803D51CC 003D210C  93 9F 00 BC */	stw r28, 0xbc(r31)
/* 803D51D0 003D2110  9B 9F 0A FC */	stb r28, 0xafc(r31)
/* 803D51D4 003D2114  9B 9F 0A FD */	stb r28, 0xafd(r31)
/* 803D51D8 003D2118  9B 9F 0A FE */	stb r28, 0xafe(r31)
/* 803D51DC 003D211C  9B 9F 0A FF */	stb r28, 0xaff(r31)
/* 803D51E0 003D2120  93 9F 0B 9C */	stw r28, 0xb9c(r31)
.L_803D51E4:
/* 803D51E4 003D2124  38 60 00 18 */	li r3, 0x18
/* 803D51E8 003D2128  4B C4 EC BD */	bl __nw__FUl
/* 803D51EC 003D212C  28 03 00 00 */	cmplwi r3, 0
/* 803D51F0 003D2130  41 82 00 84 */	beq .L_803D5274
/* 803D51F4 003D2134  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803D51F8 003D2138  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803D51FC 003D213C  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803D5200 003D2140  3C E0 80 4A */	lis r7, __vt__18JPAEmitterCallBack@ha
/* 803D5204 003D2144  90 03 00 00 */	stw r0, 0(r3)
/* 803D5208 003D2148  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803D520C 003D214C  3C C0 80 4E */	lis r6, __vt__Q25efx2d8TForever@ha
/* 803D5210 003D2150  3C A0 80 4E */	lis r5, __vt__Q25efx2d9TChasePos@ha
/* 803D5214 003D2154  90 03 00 00 */	stw r0, 0(r3)
/* 803D5218 003D2158  39 40 00 00 */	li r10, 0
/* 803D521C 003D215C  38 1C 0A C4 */	addi r0, r28, 0xac4
/* 803D5220 003D2160  3C 80 80 4F */	lis r4, __vt__Q35efx2d10FileSelect10T2DFilesel@ha
/* 803D5224 003D2164  99 43 00 04 */	stb r10, 4(r3)
/* 803D5228 003D2168  39 27 E2 7C */	addi r9, r7, __vt__18JPAEmitterCallBack@l
/* 803D522C 003D216C  39 06 74 20 */	addi r8, r6, __vt__Q25efx2d8TForever@l
/* 803D5230 003D2170  38 E0 00 06 */	li r7, 6
/* 803D5234 003D2174  99 43 00 05 */	stb r10, 5(r3)
/* 803D5238 003D2178  38 C5 73 CC */	addi r6, r5, __vt__Q25efx2d9TChasePos@l
/* 803D523C 003D217C  7C BF 02 14 */	add r5, r31, r0
/* 803D5240 003D2180  38 84 8E 14 */	addi r4, r4, __vt__Q35efx2d10FileSelect10T2DFilesel@l
/* 803D5244 003D2184  91 23 00 08 */	stw r9, 8(r3)
/* 803D5248 003D2188  38 00 00 01 */	li r0, 1
/* 803D524C 003D218C  91 03 00 00 */	stw r8, 0(r3)
/* 803D5250 003D2190  93 C3 00 08 */	stw r30, 8(r3)
/* 803D5254 003D2194  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 803D5258 003D2198  91 43 00 10 */	stw r10, 0x10(r3)
/* 803D525C 003D219C  90 C3 00 00 */	stw r6, 0(r3)
/* 803D5260 003D21A0  93 A3 00 08 */	stw r29, 8(r3)
/* 803D5264 003D21A4  90 A3 00 14 */	stw r5, 0x14(r3)
/* 803D5268 003D21A8  90 83 00 00 */	stw r4, 0(r3)
/* 803D526C 003D21AC  93 43 00 08 */	stw r26, 8(r3)
/* 803D5270 003D21B0  98 03 00 04 */	stb r0, 4(r3)
.L_803D5274:
/* 803D5274 003D21B4  38 1B 0A 84 */	addi r0, r27, 0xa84
/* 803D5278 003D21B8  7C 7F 01 2E */	stwx r3, r31, r0
/* 803D527C 003D21BC  38 60 00 18 */	li r3, 0x18
/* 803D5280 003D21C0  4B C4 EC 25 */	bl __nw__FUl
/* 803D5284 003D21C4  28 03 00 00 */	cmplwi r3, 0
/* 803D5288 003D21C8  41 82 00 84 */	beq .L_803D530C
/* 803D528C 003D21CC  3C A0 80 4C */	lis r5, __vt__Q25efx2d7TBaseIF@ha
/* 803D5290 003D21D0  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803D5294 003D21D4  38 05 14 F0 */	addi r0, r5, __vt__Q25efx2d7TBaseIF@l
/* 803D5298 003D21D8  3C E0 80 4A */	lis r7, __vt__18JPAEmitterCallBack@ha
/* 803D529C 003D21DC  90 03 00 00 */	stw r0, 0(r3)
/* 803D52A0 003D21E0  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803D52A4 003D21E4  3C C0 80 4E */	lis r6, __vt__Q25efx2d8TForever@ha
/* 803D52A8 003D21E8  3C A0 80 4E */	lis r5, __vt__Q25efx2d9TChasePos@ha
/* 803D52AC 003D21EC  90 03 00 00 */	stw r0, 0(r3)
/* 803D52B0 003D21F0  39 40 00 00 */	li r10, 0
/* 803D52B4 003D21F4  38 1C 0A DC */	addi r0, r28, 0xadc
/* 803D52B8 003D21F8  3C 80 80 4F */	lis r4, __vt__Q35efx2d10FileSelect11T2DFileselM@ha
/* 803D52BC 003D21FC  99 43 00 04 */	stb r10, 4(r3)
/* 803D52C0 003D2200  39 27 E2 7C */	addi r9, r7, __vt__18JPAEmitterCallBack@l
/* 803D52C4 003D2204  39 06 74 20 */	addi r8, r6, __vt__Q25efx2d8TForever@l
/* 803D52C8 003D2208  38 E0 00 07 */	li r7, 7
/* 803D52CC 003D220C  99 43 00 05 */	stb r10, 5(r3)
/* 803D52D0 003D2210  38 C5 73 CC */	addi r6, r5, __vt__Q25efx2d9TChasePos@l
/* 803D52D4 003D2214  7C BF 02 14 */	add r5, r31, r0
/* 803D52D8 003D2218  38 84 8D D8 */	addi r4, r4, __vt__Q35efx2d10FileSelect11T2DFileselM@l
/* 803D52DC 003D221C  91 23 00 08 */	stw r9, 8(r3)
/* 803D52E0 003D2220  38 00 00 01 */	li r0, 1
/* 803D52E4 003D2224  91 03 00 00 */	stw r8, 0(r3)
/* 803D52E8 003D2228  93 C3 00 08 */	stw r30, 8(r3)
/* 803D52EC 003D222C  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 803D52F0 003D2230  91 43 00 10 */	stw r10, 0x10(r3)
/* 803D52F4 003D2234  90 C3 00 00 */	stw r6, 0(r3)
/* 803D52F8 003D2238  93 A3 00 08 */	stw r29, 8(r3)
/* 803D52FC 003D223C  90 A3 00 14 */	stw r5, 0x14(r3)
/* 803D5300 003D2240  90 83 00 00 */	stw r4, 0(r3)
/* 803D5304 003D2244  93 23 00 08 */	stw r25, 8(r3)
/* 803D5308 003D2248  98 03 00 04 */	stb r0, 4(r3)
.L_803D530C:
/* 803D530C 003D224C  3B 18 00 01 */	addi r24, r24, 1
/* 803D5310 003D2250  38 1B 0A 90 */	addi r0, r27, 0xa90
/* 803D5314 003D2254  2C 18 00 03 */	cmpwi r24, 3
/* 803D5318 003D2258  7C 7F 01 2E */	stwx r3, r31, r0
/* 803D531C 003D225C  3B 9C 00 08 */	addi r28, r28, 8
/* 803D5320 003D2260  3B 7B 00 04 */	addi r27, r27, 4
/* 803D5324 003D2264  41 80 FE C0 */	blt .L_803D51E4
/* 803D5328 003D2268  38 00 00 00 */	li r0, 0
/* 803D532C 003D226C  7F E3 FB 78 */	mr r3, r31
/* 803D5330 003D2270  90 1F 0A F4 */	stw r0, 0xaf4(r31)
/* 803D5334 003D2274  BA 21 00 14 */	lmw r17, 0x14(r1)
/* 803D5338 003D2278  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803D533C 003D227C  7C 08 03 A6 */	mtlr r0
/* 803D5340 003D2280  38 21 00 50 */	addi r1, r1, 0x50
/* 803D5344 003D2284  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn loadResource__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D5348 003D2288  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 803D534C 003D228C  7C 08 02 A6 */	mflr r0
/* 803D5350 003D2290  3C 80 80 49 */	lis r4, lbl_80496AE8@ha
/* 803D5354 003D2294  38 A0 00 00 */	li r5, 0
/* 803D5358 003D2298  90 01 01 24 */	stw r0, 0x124(r1)
/* 803D535C 003D229C  93 E1 01 1C */	stw r31, 0x11c(r1)
/* 803D5360 003D22A0  3B E4 6A E8 */	addi r31, r4, lbl_80496AE8@l
/* 803D5364 003D22A4  38 9F 00 C4 */	addi r4, r31, 0xc4
/* 803D5368 003D22A8  93 C1 01 18 */	stw r30, 0x118(r1)
/* 803D536C 003D22AC  93 A1 01 14 */	stw r29, 0x114(r1)
/* 803D5370 003D22B0  7C 7D 1B 78 */	mr r29, r3
/* 803D5374 003D22B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D5378 003D22B8  48 04 DF E5 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D537C 003D22BC  38 61 00 08 */	addi r3, r1, 8
/* 803D5380 003D22C0  38 9F 00 E4 */	addi r4, r31, 0xe4
/* 803D5384 003D22C4  4B F4 2B C9 */	bl makeLanguageResName__Q22og9newScreenFPcPCc
/* 803D5388 003D22C8  38 61 00 08 */	addi r3, r1, 8
/* 803D538C 003D22CC  38 80 00 01 */	li r4, 1
/* 803D5390 003D22D0  38 A0 00 00 */	li r5, 0
/* 803D5394 003D22D4  38 C0 00 01 */	li r6, 1
/* 803D5398 003D22D8  4B C4 5D 99 */	bl mount__10JKRArchiveFPCcQ210JKRArchive10EMountModeP7JKRHeapQ210JKRArchive15EMountDirection
/* 803D539C 003D22DC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D53A0 003D22E0  40 82 00 18 */	bne .L_803D53B8
/* 803D53A4 003D22E4  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D53A8 003D22E8  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D53AC 003D22EC  38 80 00 FF */	li r4, 0xff
/* 803D53B0 003D22F0  4C C6 31 82 */	crclr 6
/* 803D53B4 003D22F4  4B C5 52 8D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D53B8:
/* 803D53B8 003D22F8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D53BC 003D22FC  38 9F 00 C4 */	addi r4, r31, 0xc4
/* 803D53C0 003D2300  48 04 DF A5 */	bl heapStatusEnd__6SystemFPc
/* 803D53C4 003D2304  7F A3 EB 78 */	mr r3, r29
/* 803D53C8 003D2308  7F C4 F3 78 */	mr r4, r30
/* 803D53CC 003D230C  81 9D 00 00 */	lwz r12, 0(r29)
/* 803D53D0 003D2310  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D53D4 003D2314  7D 89 03 A6 */	mtctr r12
/* 803D53D8 003D2318  4E 80 04 21 */	bctrl 
/* 803D53DC 003D231C  80 01 01 24 */	lwz r0, 0x124(r1)
/* 803D53E0 003D2320  83 E1 01 1C */	lwz r31, 0x11c(r1)
/* 803D53E4 003D2324  83 C1 01 18 */	lwz r30, 0x118(r1)
/* 803D53E8 003D2328  83 A1 01 14 */	lwz r29, 0x114(r1)
/* 803D53EC 003D232C  7C 08 03 A6 */	mtlr r0
/* 803D53F0 003D2330  38 21 01 20 */	addi r1, r1, 0x120
/* 803D53F4 003D2334  4E 80 00 20 */	blr 
.endfn loadResource__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn doSetArchive__Q43ebi6Screen10FileSelect11TMainScreenFP10JKRArchive, global
/* 803D53F8 003D2338  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803D53FC 003D233C  7C 08 02 A6 */	mflr r0
/* 803D5400 003D2340  3C A0 80 49 */	lis r5, lbl_80496AE8@ha
/* 803D5404 003D2344  90 01 00 64 */	stw r0, 0x64(r1)
/* 803D5408 003D2348  BF 41 00 48 */	stmw r26, 0x48(r1)
/* 803D540C 003D234C  7C 7F 1B 78 */	mr r31, r3
/* 803D5410 003D2350  3B A5 6A E8 */	addi r29, r5, lbl_80496AE8@l
/* 803D5414 003D2354  7C 9E 23 78 */	mr r30, r4
/* 803D5418 003D2358  38 A0 00 00 */	li r5, 0
/* 803D541C 003D235C  38 9D 00 F4 */	addi r4, r29, 0xf4
/* 803D5420 003D2360  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D5424 003D2364  48 04 DF 39 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D5428 003D2368  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D542C 003D236C  38 9D 01 14 */	addi r4, r29, 0x114
/* 803D5430 003D2370  38 A0 00 00 */	li r5, 0
/* 803D5434 003D2374  48 04 DF 29 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D5438 003D2378  38 60 01 48 */	li r3, 0x148
/* 803D543C 003D237C  4B C4 EA 69 */	bl __nw__FUl
/* 803D5440 003D2380  7C 60 1B 79 */	or. r0, r3, r3
/* 803D5444 003D2384  41 82 00 0C */	beq .L_803D5450
/* 803D5448 003D2388  48 05 F9 65 */	bl __ct__Q29P2DScreen10Mgr_tuningFv
/* 803D544C 003D238C  7C 60 1B 78 */	mr r0, r3
.L_803D5450:
/* 803D5450 003D2390  90 1F 00 0C */	stw r0, 0xc(r31)
/* 803D5454 003D2394  7F C6 F3 78 */	mr r6, r30
/* 803D5458 003D2398  38 9D 01 3C */	addi r4, r29, 0x13c
/* 803D545C 003D239C  3C A0 01 10 */	lis r5, 0x110
/* 803D5460 003D23A0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5464 003D23A4  4B C6 A1 C1 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803D5468 003D23A8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D546C 003D23AC  38 9D 01 14 */	addi r4, r29, 0x114
/* 803D5470 003D23B0  48 04 DE F5 */	bl heapStatusEnd__6SystemFPc
/* 803D5474 003D23B4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D5478 003D23B8  38 9D 00 14 */	addi r4, r29, 0x14
/* 803D547C 003D23BC  38 A0 00 00 */	li r5, 0
/* 803D5480 003D23C0  48 04 DE DD */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D5484 003D23C4  38 60 01 38 */	li r3, 0x138
/* 803D5488 003D23C8  4B C4 EA 1D */	bl __nw__FUl
/* 803D548C 003D23CC  7C 60 1B 79 */	or. r0, r3, r3
/* 803D5490 003D23D0  41 82 00 0C */	beq .L_803D549C
/* 803D5494 003D23D4  48 05 F6 2D */	bl __ct__Q29P2DScreen3MgrFv
/* 803D5498 003D23D8  7C 60 1B 78 */	mr r0, r3
.L_803D549C:
/* 803D549C 003D23DC  90 1F 0B A0 */	stw r0, 0xba0(r31)
/* 803D54A0 003D23E0  7F C6 F3 78 */	mr r6, r30
/* 803D54A4 003D23E4  38 9D 00 3C */	addi r4, r29, 0x3c
/* 803D54A8 003D23E8  3C A0 01 10 */	lis r5, 0x110
/* 803D54AC 003D23EC  80 7F 0B A0 */	lwz r3, 0xba0(r31)
/* 803D54B0 003D23F0  4B C6 A1 75 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803D54B4 003D23F4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D54B8 003D23F8  38 9D 00 14 */	addi r4, r29, 0x14
/* 803D54BC 003D23FC  48 04 DE A9 */	bl heapStatusEnd__6SystemFPc
/* 803D54C0 003D2400  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D54C4 003D2404  38 9D 00 54 */	addi r4, r29, 0x54
/* 803D54C8 003D2408  38 A0 00 00 */	li r5, 0
/* 803D54CC 003D240C  48 04 DE 91 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D54D0 003D2410  80 7F 0B A0 */	lwz r3, 0xba0(r31)
/* 803D54D4 003D2414  7C 64 1B 78 */	mr r4, r3
/* 803D54D8 003D2418  4B FF 54 45 */	bl E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
/* 803D54DC 003D241C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D54E0 003D2420  38 9D 00 54 */	addi r4, r29, 0x54
/* 803D54E4 003D2424  48 04 DE 81 */	bl heapStatusEnd__6SystemFPc
/* 803D54E8 003D2428  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D54EC 003D242C  38 9D 00 14 */	addi r4, r29, 0x14
/* 803D54F0 003D2430  38 A0 00 00 */	li r5, 0
/* 803D54F4 003D2434  48 04 DE 69 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D54F8 003D2438  38 60 01 38 */	li r3, 0x138
/* 803D54FC 003D243C  4B C4 E9 A9 */	bl __nw__FUl
/* 803D5500 003D2440  7C 60 1B 79 */	or. r0, r3, r3
/* 803D5504 003D2444  41 82 00 0C */	beq .L_803D5510
/* 803D5508 003D2448  48 05 F5 B9 */	bl __ct__Q29P2DScreen3MgrFv
/* 803D550C 003D244C  7C 60 1B 78 */	mr r0, r3
.L_803D5510:
/* 803D5510 003D2450  90 1F 0B A8 */	stw r0, 0xba8(r31)
/* 803D5514 003D2454  7F C6 F3 78 */	mr r6, r30
/* 803D5518 003D2458  38 9D 00 AC */	addi r4, r29, 0xac
/* 803D551C 003D245C  3C A0 01 10 */	lis r5, 0x110
/* 803D5520 003D2460  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D5524 003D2464  4B C6 A1 01 */	bl set__9J2DScreenFPCcUlP10JKRArchive
/* 803D5528 003D2468  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D552C 003D246C  38 9D 00 14 */	addi r4, r29, 0x14
/* 803D5530 003D2470  48 04 DE 35 */	bl heapStatusEnd__6SystemFPc
/* 803D5534 003D2474  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D5538 003D2478  38 9D 00 54 */	addi r4, r29, 0x54
/* 803D553C 003D247C  38 A0 00 00 */	li r5, 0
/* 803D5540 003D2480  48 04 DE 1D */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D5544 003D2484  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D5548 003D2488  7C 64 1B 78 */	mr r4, r3
/* 803D554C 003D248C  4B FF 53 D1 */	bl E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
/* 803D5550 003D2490  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D5554 003D2494  38 9D 00 54 */	addi r4, r29, 0x54
/* 803D5558 003D2498  48 04 DE 0D */	bl heapStatusEnd__6SystemFPc
/* 803D555C 003D249C  38 1F 0B B8 */	addi r0, r31, 0xbb8
/* 803D5560 003D24A0  3C 60 6C 6E */	lis r3, 0x6C6E3031@ha
/* 803D5564 003D24A4  90 01 00 08 */	stw r0, 8(r1)
/* 803D5568 003D24A8  38 A0 00 0A */	li r5, 0xa
/* 803D556C 003D24AC  38 80 00 01 */	li r4, 1
/* 803D5570 003D24B0  38 00 00 00 */	li r0, 0
/* 803D5574 003D24B4  90 A1 00 0C */	stw r5, 0xc(r1)
/* 803D5578 003D24B8  38 C3 30 31 */	addi r6, r3, 0x6C6E3031@l
/* 803D557C 003D24BC  39 03 30 32 */	addi r8, r3, 0x3032
/* 803D5580 003D24C0  39 43 30 35 */	addi r10, r3, 0x3035
/* 803D5584 003D24C4  90 81 00 10 */	stw r4, 0x10(r1)
/* 803D5588 003D24C8  38 A0 00 50 */	li r5, 0x50
/* 803D558C 003D24CC  38 E0 00 50 */	li r7, 0x50
/* 803D5590 003D24D0  39 20 00 50 */	li r9, 0x50
/* 803D5594 003D24D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D5598 003D24D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D559C 003D24DC  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D55A0 003D24E0  4B F3 6F 91 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 803D55A4 003D24E4  38 1F 0B BC */	addi r0, r31, 0xbbc
/* 803D55A8 003D24E8  3C 60 74 72 */	lis r3, 0x74723031@ha
/* 803D55AC 003D24EC  90 01 00 08 */	stw r0, 8(r1)
/* 803D55B0 003D24F0  38 A0 00 03 */	li r5, 3
/* 803D55B4 003D24F4  38 80 00 01 */	li r4, 1
/* 803D55B8 003D24F8  38 00 00 00 */	li r0, 0
/* 803D55BC 003D24FC  90 A1 00 0C */	stw r5, 0xc(r1)
/* 803D55C0 003D2500  38 C3 30 31 */	addi r6, r3, 0x74723031@l
/* 803D55C4 003D2504  39 03 30 32 */	addi r8, r3, 0x3032
/* 803D55C8 003D2508  39 43 30 33 */	addi r10, r3, 0x3033
/* 803D55CC 003D250C  90 81 00 10 */	stw r4, 0x10(r1)
/* 803D55D0 003D2510  38 A0 00 50 */	li r5, 0x50
/* 803D55D4 003D2514  38 E0 00 50 */	li r7, 0x50
/* 803D55D8 003D2518  39 20 00 50 */	li r9, 0x50
/* 803D55DC 003D251C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D55E0 003D2520  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D55E4 003D2524  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D55E8 003D2528  4B F3 6F 49 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 803D55EC 003D252C  90 7F 0B AC */	stw r3, 0xbac(r31)
/* 803D55F0 003D2530  3C 60 72 74 */	lis r3, 0x72743031@ha
/* 803D55F4 003D2534  38 1F 0B C0 */	addi r0, r31, 0xbc0
/* 803D55F8 003D2538  38 A0 00 03 */	li r5, 3
/* 803D55FC 003D253C  90 01 00 08 */	stw r0, 8(r1)
/* 803D5600 003D2540  38 80 00 01 */	li r4, 1
/* 803D5604 003D2544  38 00 00 00 */	li r0, 0
/* 803D5608 003D2548  38 C3 30 31 */	addi r6, r3, 0x72743031@l
/* 803D560C 003D254C  90 A1 00 0C */	stw r5, 0xc(r1)
/* 803D5610 003D2550  39 03 30 32 */	addi r8, r3, 0x3032
/* 803D5614 003D2554  39 43 30 33 */	addi r10, r3, 0x3033
/* 803D5618 003D2558  38 A0 50 74 */	li r5, 0x5074
/* 803D561C 003D255C  90 81 00 10 */	stw r4, 0x10(r1)
/* 803D5620 003D2560  38 E0 50 74 */	li r7, 0x5074
/* 803D5624 003D2564  39 20 50 74 */	li r9, 0x5074
/* 803D5628 003D2568  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D562C 003D256C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D5630 003D2570  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D5634 003D2574  4B F3 6E FD */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 803D5638 003D2578  90 7F 0B B0 */	stw r3, 0xbb0(r31)
/* 803D563C 003D257C  3C 80 72 32 */	lis r4, 0x72325F31@ha
/* 803D5640 003D2580  38 1F 0B D0 */	addi r0, r31, 0xbd0
/* 803D5644 003D2584  3C 60 50 66 */	lis r3, 0x50667231@ha
/* 803D5648 003D2588  90 01 00 08 */	stw r0, 8(r1)
/* 803D564C 003D258C  38 00 00 03 */	li r0, 3
/* 803D5650 003D2590  38 C4 5F 31 */	addi r6, r4, 0x72325F31@l
/* 803D5654 003D2594  39 04 5F 32 */	addi r8, r4, 0x5f32
/* 803D5658 003D2598  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D565C 003D259C  39 43 72 31 */	addi r10, r3, 0x50667231@l
/* 803D5660 003D25A0  38 A0 50 66 */	li r5, 0x5066
/* 803D5664 003D25A4  38 E0 50 66 */	li r7, 0x5066
/* 803D5668 003D25A8  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803D566C 003D25AC  39 20 00 00 */	li r9, 0
/* 803D5670 003D25B0  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D5674 003D25B4  4B F3 7F B1 */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803D5678 003D25B8  38 1F 0B C4 */	addi r0, r31, 0xbc4
/* 803D567C 003D25BC  3C 80 6D 65 */	lis r4, 0x6D653031@ha
/* 803D5680 003D25C0  90 01 00 08 */	stw r0, 8(r1)
/* 803D5684 003D25C4  38 00 00 05 */	li r0, 5
/* 803D5688 003D25C8  3C 60 00 50 */	lis r3, 0x00507469@ha
/* 803D568C 003D25CC  38 E0 00 01 */	li r7, 1
/* 803D5690 003D25D0  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D5694 003D25D4  38 A3 74 69 */	addi r5, r3, 0x00507469@l
/* 803D5698 003D25D8  38 00 00 00 */	li r0, 0
/* 803D569C 003D25DC  38 C4 30 31 */	addi r6, r4, 0x6D653031@l
/* 803D56A0 003D25E0  90 E1 00 10 */	stw r7, 0x10(r1)
/* 803D56A4 003D25E4  7C A7 2B 78 */	mr r7, r5
/* 803D56A8 003D25E8  7C A9 2B 78 */	mr r9, r5
/* 803D56AC 003D25EC  39 04 30 32 */	addi r8, r4, 0x3032
/* 803D56B0 003D25F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D56B4 003D25F4  39 44 30 33 */	addi r10, r4, 0x3033
/* 803D56B8 003D25F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D56BC 003D25FC  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D56C0 003D2600  4B F3 6E 71 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 803D56C4 003D2604  38 1F 0B C8 */	addi r0, r31, 0xbc8
/* 803D56C8 003D2608  3C 80 65 6D */	lis r4, 0x656D3032@ha
/* 803D56CC 003D260C  90 01 00 08 */	stw r0, 8(r1)
/* 803D56D0 003D2610  38 C0 00 02 */	li r6, 2
/* 803D56D4 003D2614  3C 60 50 74 */	lis r3, 0x5074696D@ha
/* 803D56D8 003D2618  39 04 30 32 */	addi r8, r4, 0x656D3032@l
/* 803D56DC 003D261C  90 C1 00 0C */	stw r6, 0xc(r1)
/* 803D56E0 003D2620  38 A3 69 6D */	addi r5, r3, 0x5074696D@l
/* 803D56E4 003D2624  38 00 00 00 */	li r0, 0
/* 803D56E8 003D2628  7D 0A 43 78 */	mr r10, r8
/* 803D56EC 003D262C  90 C1 00 10 */	stw r6, 0x10(r1)
/* 803D56F0 003D2630  7C A7 2B 78 */	mr r7, r5
/* 803D56F4 003D2634  7C A9 2B 78 */	mr r9, r5
/* 803D56F8 003D2638  38 C4 30 31 */	addi r6, r4, 0x3031
/* 803D56FC 003D263C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D5700 003D2640  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D5704 003D2644  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D5708 003D2648  4B F3 6E 29 */	bl setCallBack_CounterRV__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsUsbP10JKRArchive
/* 803D570C 003D264C  38 80 00 FF */	li r4, 0xff
/* 803D5710 003D2650  4B F3 60 E1 */	bl setZeroAlpha__Q32og6Screen18CallBack_CounterRVFUc
/* 803D5714 003D2654  3C 80 6C 6E */	lis r4, 0x6C6E3033@ha
/* 803D5718 003D2658  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D571C 003D265C  38 C4 30 33 */	addi r6, r4, 0x6C6E3033@l
/* 803D5720 003D2660  38 A0 00 50 */	li r5, 0x50
/* 803D5724 003D2664  4B FF 4C 35 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5728 003D2668  81 83 00 00 */	lwz r12, 0(r3)
/* 803D572C 003D266C  38 80 00 00 */	li r4, 0
/* 803D5730 003D2670  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D5734 003D2674  7D 89 03 A6 */	mtctr r12
/* 803D5738 003D2678  4E 80 04 21 */	bctrl 
/* 803D573C 003D267C  3C 80 6C 6E */	lis r4, 0x6C6E3034@ha
/* 803D5740 003D2680  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D5744 003D2684  38 C4 30 34 */	addi r6, r4, 0x6C6E3034@l
/* 803D5748 003D2688  38 A0 00 50 */	li r5, 0x50
/* 803D574C 003D268C  4B FF 4C 0D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5750 003D2690  81 83 00 00 */	lwz r12, 0(r3)
/* 803D5754 003D2694  38 80 00 00 */	li r4, 0
/* 803D5758 003D2698  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D575C 003D269C  7D 89 03 A6 */	mtctr r12
/* 803D5760 003D26A0  4E 80 04 21 */	bctrl 
/* 803D5764 003D26A4  3B 80 00 00 */	li r28, 0
/* 803D5768 003D26A8  38 00 00 C9 */	li r0, 0xc9
/* 803D576C 003D26AC  93 9F 0B B8 */	stw r28, 0xbb8(r31)
/* 803D5770 003D26B0  93 9F 0B BC */	stw r28, 0xbbc(r31)
/* 803D5774 003D26B4  90 1F 0B C0 */	stw r0, 0xbc0(r31)
/* 803D5778 003D26B8  93 9F 0B C4 */	stw r28, 0xbc4(r31)
/* 803D577C 003D26BC  93 9F 0B C8 */	stw r28, 0xbc8(r31)
/* 803D5780 003D26C0  93 9F 0B CC */	stw r28, 0xbcc(r31)
/* 803D5784 003D26C4  93 9F 0B D0 */	stw r28, 0xbd0(r31)
/* 803D5788 003D26C8  83 7F 00 0C */	lwz r27, 0xc(r31)
/* 803D578C 003D26CC  A3 5B 01 02 */	lhz r26, 0x102(r27)
/* 803D5790 003D26D0  48 00 00 18 */	b .L_803D57A8
.L_803D5794:
/* 803D5794 003D26D4  7F 63 DB 78 */	mr r3, r27
/* 803D5798 003D26D8  7F 84 E3 78 */	mr r4, r28
/* 803D579C 003D26DC  4B C6 B2 C9 */	bl getMaterial__9J2DScreenFUs
/* 803D57A0 003D26E0  4B C7 CF 29 */	bl makeAnmPointer__11J2DMaterialFv
/* 803D57A4 003D26E4  3B 9C 00 01 */	addi r28, r28, 1
.L_803D57A8:
/* 803D57A8 003D26E8  57 80 04 3E */	clrlwi r0, r28, 0x10
/* 803D57AC 003D26EC  7C 00 D0 40 */	cmplw r0, r26
/* 803D57B0 003D26F0  41 80 FF E4 */	blt .L_803D5794
/* 803D57B4 003D26F4  3C 80 00 54 */	lis r4, 0x00545F79@ha
/* 803D57B8 003D26F8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D57BC 003D26FC  38 C4 5F 79 */	addi r6, r4, 0x00545F79@l
/* 803D57C0 003D2700  38 A0 00 00 */	li r5, 0
/* 803D57C4 003D2704  4B FF 4B 95 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D57C8 003D2708  90 7F 00 98 */	stw r3, 0x98(r31)
/* 803D57CC 003D270C  3C 60 54 73 */	lis r3, 0x54735F79@ha
/* 803D57D0 003D2710  38 C3 5F 79 */	addi r6, r3, 0x54735F79@l
/* 803D57D4 003D2714  38 A0 00 00 */	li r5, 0
/* 803D57D8 003D2718  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D57DC 003D271C  4B FF 4B 7D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D57E0 003D2720  90 7F 00 9C */	stw r3, 0x9c(r31)
/* 803D57E4 003D2724  3C 60 00 54 */	lis r3, 0x00545F6E@ha
/* 803D57E8 003D2728  38 C3 5F 6E */	addi r6, r3, 0x00545F6E@l
/* 803D57EC 003D272C  38 A0 00 00 */	li r5, 0
/* 803D57F0 003D2730  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D57F4 003D2734  4B FF 4B 65 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D57F8 003D2738  90 7F 00 A0 */	stw r3, 0xa0(r31)
/* 803D57FC 003D273C  3C 60 54 73 */	lis r3, 0x54735F6E@ha
/* 803D5800 003D2740  38 C3 5F 6E */	addi r6, r3, 0x54735F6E@l
/* 803D5804 003D2744  38 A0 00 00 */	li r5, 0
/* 803D5808 003D2748  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D580C 003D274C  4B FF 4B 4D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5810 003D2750  90 7F 00 A4 */	stw r3, 0xa4(r31)
/* 803D5814 003D2754  3C 60 54 62 */	lis r3, 0x54627430@ha
/* 803D5818 003D2758  38 C3 74 30 */	addi r6, r3, 0x54627430@l
/* 803D581C 003D275C  38 A0 00 00 */	li r5, 0
/* 803D5820 003D2760  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5824 003D2764  4B FF 4B 35 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5828 003D2768  90 7F 00 A8 */	stw r3, 0xa8(r31)
/* 803D582C 003D276C  3C 60 62 74 */	lis r3, 0x62743073@ha
/* 803D5830 003D2770  38 C3 30 73 */	addi r6, r3, 0x62743073@l
/* 803D5834 003D2774  38 A0 00 54 */	li r5, 0x54
/* 803D5838 003D2778  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D583C 003D277C  4B FF 4B 1D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5840 003D2780  90 7F 00 AC */	stw r3, 0xac(r31)
/* 803D5844 003D2784  3C 60 54 62 */	lis r3, 0x54627431@ha
/* 803D5848 003D2788  38 C3 74 31 */	addi r6, r3, 0x54627431@l
/* 803D584C 003D278C  38 A0 00 00 */	li r5, 0
/* 803D5850 003D2790  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5854 003D2794  4B FF 4B 05 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5858 003D2798  90 7F 00 B0 */	stw r3, 0xb0(r31)
/* 803D585C 003D279C  3C 60 62 74 */	lis r3, 0x62743173@ha
/* 803D5860 003D27A0  38 C3 31 73 */	addi r6, r3, 0x62743173@l
/* 803D5864 003D27A4  38 A0 00 54 */	li r5, 0x54
/* 803D5868 003D27A8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D586C 003D27AC  4B FF 4A ED */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5870 003D27B0  90 7F 00 B4 */	stw r3, 0xb4(r31)
/* 803D5874 003D27B4  3C 60 54 6D */	lis r3, 0x546D7367@ha
/* 803D5878 003D27B8  38 C3 73 67 */	addi r6, r3, 0x546D7367@l
/* 803D587C 003D27BC  38 A0 00 00 */	li r5, 0
/* 803D5880 003D27C0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5884 003D27C4  4B FF 4A D5 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5888 003D27C8  90 7F 00 B8 */	stw r3, 0xb8(r31)
/* 803D588C 003D27CC  3C 60 6D 73 */	lis r3, 0x6D736773@ha
/* 803D5890 003D27D0  38 C3 67 73 */	addi r6, r3, 0x6D736773@l
/* 803D5894 003D27D4  38 A0 00 54 */	li r5, 0x54
/* 803D5898 003D27D8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D589C 003D27DC  4B FF 4A BD */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D58A0 003D27E0  90 7F 00 BC */	stw r3, 0xbc(r31)
/* 803D58A4 003D27E4  3C 60 00 4E */	lis r3, 0x004E4431@ha
/* 803D58A8 003D27E8  38 C3 44 31 */	addi r6, r3, 0x004E4431@l
/* 803D58AC 003D27EC  38 A0 00 00 */	li r5, 0
/* 803D58B0 003D27F0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D58B4 003D27F4  4B FF 4A A5 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D58B8 003D27F8  90 7F 00 10 */	stw r3, 0x10(r31)
/* 803D58BC 003D27FC  3C 60 00 4E */	lis r3, 0x004E4432@ha
/* 803D58C0 003D2800  38 C3 44 32 */	addi r6, r3, 0x004E4432@l
/* 803D58C4 003D2804  38 A0 00 00 */	li r5, 0
/* 803D58C8 003D2808  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D58CC 003D280C  4B FF 4A 8D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D58D0 003D2810  90 7F 00 14 */	stw r3, 0x14(r31)
/* 803D58D4 003D2814  3C 60 00 4E */	lis r3, 0x004E4433@ha
/* 803D58D8 003D2818  38 C3 44 33 */	addi r6, r3, 0x004E4433@l
/* 803D58DC 003D281C  38 A0 00 00 */	li r5, 0
/* 803D58E0 003D2820  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D58E4 003D2824  4B FF 4A 75 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D58E8 003D2828  90 7F 00 18 */	stw r3, 0x18(r31)
/* 803D58EC 003D282C  3C 60 61 74 */	lis r3, 0x61746177@ha
/* 803D58F0 003D2830  38 C3 61 77 */	addi r6, r3, 0x61746177@l
/* 803D58F4 003D2834  38 A0 4E 64 */	li r5, 0x4e64
/* 803D58F8 003D2838  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D58FC 003D283C  4B FF 4A 5D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5900 003D2840  90 7F 00 1C */	stw r3, 0x1c(r31)
/* 803D5904 003D2844  3C A0 65 6C */	lis r5, 0x656C4530@ha
/* 803D5908 003D2848  3C 80 50 64 */	lis r4, 0x50643173@ha
/* 803D590C 003D284C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5910 003D2850  38 C5 45 30 */	addi r6, r5, 0x656C4530@l
/* 803D5914 003D2854  38 A4 31 73 */	addi r5, r4, 0x50643173@l
/* 803D5918 003D2858  4B FF 4A 41 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D591C 003D285C  90 7F 00 38 */	stw r3, 0x38(r31)
/* 803D5920 003D2860  3C A0 65 6C */	lis r5, 0x656C4530@ha
/* 803D5924 003D2864  3C 80 50 64 */	lis r4, 0x50643273@ha
/* 803D5928 003D2868  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D592C 003D286C  38 C5 45 30 */	addi r6, r5, 0x656C4530@l
/* 803D5930 003D2870  38 A4 32 73 */	addi r5, r4, 0x50643273@l
/* 803D5934 003D2874  4B FF 4A 25 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5938 003D2878  90 7F 00 3C */	stw r3, 0x3c(r31)
/* 803D593C 003D287C  3C A0 65 6C */	lis r5, 0x656C4530@ha
/* 803D5940 003D2880  3C 80 50 64 */	lis r4, 0x50643373@ha
/* 803D5944 003D2884  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5948 003D2888  38 C5 45 30 */	addi r6, r5, 0x656C4530@l
/* 803D594C 003D288C  38 A4 33 73 */	addi r5, r4, 0x50643373@l
/* 803D5950 003D2890  4B FF 4A 09 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5954 003D2894  90 7F 00 40 */	stw r3, 0x40(r31)
/* 803D5958 003D2898  3C A0 73 65 */	lis r5, 0x73654531@ha
/* 803D595C 003D289C  3C 80 50 6D */	lis r4, 0x506D6431@ha
/* 803D5960 003D28A0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5964 003D28A4  38 C5 45 31 */	addi r6, r5, 0x73654531@l
/* 803D5968 003D28A8  38 A4 64 31 */	addi r5, r4, 0x506D6431@l
/* 803D596C 003D28AC  4B FF 49 ED */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5970 003D28B0  90 7F 00 44 */	stw r3, 0x44(r31)
/* 803D5974 003D28B4  3C A0 73 65 */	lis r5, 0x73654531@ha
/* 803D5978 003D28B8  3C 80 50 6D */	lis r4, 0x506D6432@ha
/* 803D597C 003D28BC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5980 003D28C0  38 C5 45 31 */	addi r6, r5, 0x73654531@l
/* 803D5984 003D28C4  38 A4 64 32 */	addi r5, r4, 0x506D6432@l
/* 803D5988 003D28C8  4B FF 49 D1 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D598C 003D28CC  90 7F 00 48 */	stw r3, 0x48(r31)
/* 803D5990 003D28D0  3C A0 73 65 */	lis r5, 0x73654531@ha
/* 803D5994 003D28D4  3C 80 50 6D */	lis r4, 0x506D6433@ha
/* 803D5998 003D28D8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D599C 003D28DC  38 C5 45 31 */	addi r6, r5, 0x73654531@l
/* 803D59A0 003D28E0  38 A4 64 33 */	addi r5, r4, 0x506D6433@l
/* 803D59A4 003D28E4  4B FF 49 B5 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D59A8 003D28E8  90 7F 00 4C */	stw r3, 0x4c(r31)
/* 803D59AC 003D28EC  3C 60 50 64 */	lis r3, 0x50643163@ha
/* 803D59B0 003D28F0  38 C3 31 63 */	addi r6, r3, 0x50643163@l
/* 803D59B4 003D28F4  38 A0 00 00 */	li r5, 0
/* 803D59B8 003D28F8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D59BC 003D28FC  4B FF 49 9D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D59C0 003D2900  90 7F 00 50 */	stw r3, 0x50(r31)
/* 803D59C4 003D2904  3C 60 50 64 */	lis r3, 0x50643263@ha
/* 803D59C8 003D2908  38 C3 32 63 */	addi r6, r3, 0x50643263@l
/* 803D59CC 003D290C  38 A0 00 00 */	li r5, 0
/* 803D59D0 003D2910  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D59D4 003D2914  4B FF 49 85 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D59D8 003D2918  90 7F 00 54 */	stw r3, 0x54(r31)
/* 803D59DC 003D291C  3C 60 50 64 */	lis r3, 0x50643363@ha
/* 803D59E0 003D2920  38 C3 33 63 */	addi r6, r3, 0x50643363@l
/* 803D59E4 003D2924  38 A0 00 00 */	li r5, 0
/* 803D59E8 003D2928  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D59EC 003D292C  4B FF 49 6D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D59F0 003D2930  90 7F 00 58 */	stw r3, 0x58(r31)
/* 803D59F4 003D2934  3C 60 6D 64 */	lis r3, 0x6D643163@ha
/* 803D59F8 003D2938  38 C3 31 63 */	addi r6, r3, 0x6D643163@l
/* 803D59FC 003D293C  38 A0 00 50 */	li r5, 0x50
/* 803D5A00 003D2940  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5A04 003D2944  4B FF 49 55 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5A08 003D2948  90 7F 00 5C */	stw r3, 0x5c(r31)
/* 803D5A0C 003D294C  3C 60 6D 64 */	lis r3, 0x6D643263@ha
/* 803D5A10 003D2950  38 C3 32 63 */	addi r6, r3, 0x6D643263@l
/* 803D5A14 003D2954  38 A0 00 50 */	li r5, 0x50
/* 803D5A18 003D2958  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5A1C 003D295C  4B FF 49 3D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5A20 003D2960  90 7F 00 60 */	stw r3, 0x60(r31)
/* 803D5A24 003D2964  3C 60 6D 64 */	lis r3, 0x6D643363@ha
/* 803D5A28 003D2968  38 C3 33 63 */	addi r6, r3, 0x6D643363@l
/* 803D5A2C 003D296C  38 A0 00 50 */	li r5, 0x50
/* 803D5A30 003D2970  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5A34 003D2974  4B FF 49 25 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5A38 003D2978  90 7F 00 64 */	stw r3, 0x64(r31)
/* 803D5A3C 003D297C  3C A0 70 69 */	lis r5, 0x70696B61@ha
/* 803D5A40 003D2980  3C 80 00 50 */	lis r4, 0x00506431@ha
/* 803D5A44 003D2984  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5A48 003D2988  38 C5 6B 61 */	addi r6, r5, 0x70696B61@l
/* 803D5A4C 003D298C  38 A4 64 31 */	addi r5, r4, 0x00506431@l
/* 803D5A50 003D2990  4B FF 49 09 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5A54 003D2994  90 7F 00 68 */	stw r3, 0x68(r31)
/* 803D5A58 003D2998  3C A0 70 69 */	lis r5, 0x70696B61@ha
/* 803D5A5C 003D299C  3C 80 00 50 */	lis r4, 0x00506432@ha
/* 803D5A60 003D29A0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5A64 003D29A4  38 C5 6B 61 */	addi r6, r5, 0x70696B61@l
/* 803D5A68 003D29A8  38 A4 64 32 */	addi r5, r4, 0x00506432@l
/* 803D5A6C 003D29AC  4B FF 48 ED */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5A70 003D29B0  90 7F 00 6C */	stw r3, 0x6c(r31)
/* 803D5A74 003D29B4  3C A0 70 69 */	lis r5, 0x70696B61@ha
/* 803D5A78 003D29B8  3C 80 50 64 */	lis r4, 0x5064335F@ha
/* 803D5A7C 003D29BC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5A80 003D29C0  38 C5 6B 61 */	addi r6, r5, 0x70696B61@l
/* 803D5A84 003D29C4  38 A4 33 5F */	addi r5, r4, 0x5064335F@l
/* 803D5A88 003D29C8  4B FF 48 D1 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5A8C 003D29CC  90 7F 00 70 */	stw r3, 0x70(r31)
/* 803D5A90 003D29D0  3C A0 70 69 */	lis r5, 0x70696B61@ha
/* 803D5A94 003D29D4  3C 80 50 6D */	lis r4, 0x506D6431@ha
/* 803D5A98 003D29D8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5A9C 003D29DC  38 C5 6B 61 */	addi r6, r5, 0x70696B61@l
/* 803D5AA0 003D29E0  38 A4 64 31 */	addi r5, r4, 0x506D6431@l
/* 803D5AA4 003D29E4  4B FF 48 B5 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5AA8 003D29E8  90 7F 00 74 */	stw r3, 0x74(r31)
/* 803D5AAC 003D29EC  3C A0 70 69 */	lis r5, 0x70696B61@ha
/* 803D5AB0 003D29F0  3C 80 50 6D */	lis r4, 0x506D6432@ha
/* 803D5AB4 003D29F4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5AB8 003D29F8  38 C5 6B 61 */	addi r6, r5, 0x70696B61@l
/* 803D5ABC 003D29FC  38 A4 64 32 */	addi r5, r4, 0x506D6432@l
/* 803D5AC0 003D2A00  4B FF 48 99 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5AC4 003D2A04  90 7F 00 78 */	stw r3, 0x78(r31)
/* 803D5AC8 003D2A08  3C A0 70 69 */	lis r5, 0x70696B61@ha
/* 803D5ACC 003D2A0C  3C 80 50 6D */	lis r4, 0x506D6433@ha
/* 803D5AD0 003D2A10  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5AD4 003D2A14  38 C5 6B 61 */	addi r6, r5, 0x70696B61@l
/* 803D5AD8 003D2A18  38 A4 64 33 */	addi r5, r4, 0x506D6433@l
/* 803D5ADC 003D2A1C  4B FF 48 7D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5AE0 003D2A20  90 7F 00 7C */	stw r3, 0x7c(r31)
/* 803D5AE4 003D2A24  3C 60 31 73 */	lis r3, 0x3173656C@ha
/* 803D5AE8 003D2A28  38 C3 65 6C */	addi r6, r3, 0x3173656C@l
/* 803D5AEC 003D2A2C  38 A0 50 64 */	li r5, 0x5064
/* 803D5AF0 003D2A30  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5AF4 003D2A34  4B FF 48 65 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5AF8 003D2A38  90 7F 00 20 */	stw r3, 0x20(r31)
/* 803D5AFC 003D2A3C  3C A0 31 73 */	lis r5, 0x3173656C@ha
/* 803D5B00 003D2A40  3C 80 00 50 */	lis r4, 0x00506D64@ha
/* 803D5B04 003D2A44  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5B08 003D2A48  38 C5 65 6C */	addi r6, r5, 0x3173656C@l
/* 803D5B0C 003D2A4C  38 A4 6D 64 */	addi r5, r4, 0x00506D64@l
/* 803D5B10 003D2A50  4B FF 48 49 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5B14 003D2A54  90 7F 00 2C */	stw r3, 0x2c(r31)
/* 803D5B18 003D2A58  3C 60 32 73 */	lis r3, 0x3273656C@ha
/* 803D5B1C 003D2A5C  38 C3 65 6C */	addi r6, r3, 0x3273656C@l
/* 803D5B20 003D2A60  38 A0 50 64 */	li r5, 0x5064
/* 803D5B24 003D2A64  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5B28 003D2A68  4B FF 48 31 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5B2C 003D2A6C  90 7F 00 24 */	stw r3, 0x24(r31)
/* 803D5B30 003D2A70  3C A0 32 73 */	lis r5, 0x3273656C@ha
/* 803D5B34 003D2A74  3C 80 00 50 */	lis r4, 0x00506D64@ha
/* 803D5B38 003D2A78  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5B3C 003D2A7C  38 C5 65 6C */	addi r6, r5, 0x3273656C@l
/* 803D5B40 003D2A80  38 A4 6D 64 */	addi r5, r4, 0x00506D64@l
/* 803D5B44 003D2A84  4B FF 48 15 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5B48 003D2A88  90 7F 00 30 */	stw r3, 0x30(r31)
/* 803D5B4C 003D2A8C  3C 60 33 73 */	lis r3, 0x3373656C@ha
/* 803D5B50 003D2A90  38 C3 65 6C */	addi r6, r3, 0x3373656C@l
/* 803D5B54 003D2A94  38 A0 50 64 */	li r5, 0x5064
/* 803D5B58 003D2A98  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5B5C 003D2A9C  4B FF 47 FD */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5B60 003D2AA0  90 7F 00 28 */	stw r3, 0x28(r31)
/* 803D5B64 003D2AA4  3C A0 33 73 */	lis r5, 0x3373656C@ha
/* 803D5B68 003D2AA8  3C 80 00 50 */	lis r4, 0x00506D64@ha
/* 803D5B6C 003D2AAC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5B70 003D2AB0  38 C5 65 6C */	addi r6, r5, 0x3373656C@l
/* 803D5B74 003D2AB4  38 A4 6D 64 */	addi r5, r4, 0x00506D64@l
/* 803D5B78 003D2AB8  4B FF 47 E1 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5B7C 003D2ABC  90 7F 00 34 */	stw r3, 0x34(r31)
/* 803D5B80 003D2AC0  3C A0 73 64 */	lis r5, 0x7364316C@ha
/* 803D5B84 003D2AC4  3C 80 00 50 */	lis r4, 0x0050706F@ha
/* 803D5B88 003D2AC8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5B8C 003D2ACC  38 C5 31 6C */	addi r6, r5, 0x7364316C@l
/* 803D5B90 003D2AD0  38 A4 70 6F */	addi r5, r4, 0x0050706F@l
/* 803D5B94 003D2AD4  4B FF 47 C5 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5B98 003D2AD8  90 7F 00 80 */	stw r3, 0x80(r31)
/* 803D5B9C 003D2ADC  3C A0 73 64 */	lis r5, 0x73643172@ha
/* 803D5BA0 003D2AE0  3C 80 00 50 */	lis r4, 0x0050706F@ha
/* 803D5BA4 003D2AE4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5BA8 003D2AE8  38 C5 31 72 */	addi r6, r5, 0x73643172@l
/* 803D5BAC 003D2AEC  38 A4 70 6F */	addi r5, r4, 0x0050706F@l
/* 803D5BB0 003D2AF0  4B FF 47 A9 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5BB4 003D2AF4  90 7F 00 8C */	stw r3, 0x8c(r31)
/* 803D5BB8 003D2AF8  3C A0 73 64 */	lis r5, 0x7364326C@ha
/* 803D5BBC 003D2AFC  3C 80 00 50 */	lis r4, 0x0050706F@ha
/* 803D5BC0 003D2B00  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5BC4 003D2B04  38 C5 32 6C */	addi r6, r5, 0x7364326C@l
/* 803D5BC8 003D2B08  38 A4 70 6F */	addi r5, r4, 0x0050706F@l
/* 803D5BCC 003D2B0C  4B FF 47 8D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5BD0 003D2B10  90 7F 00 84 */	stw r3, 0x84(r31)
/* 803D5BD4 003D2B14  3C A0 73 64 */	lis r5, 0x73643272@ha
/* 803D5BD8 003D2B18  3C 80 00 50 */	lis r4, 0x0050706F@ha
/* 803D5BDC 003D2B1C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5BE0 003D2B20  38 C5 32 72 */	addi r6, r5, 0x73643272@l
/* 803D5BE4 003D2B24  38 A4 70 6F */	addi r5, r4, 0x0050706F@l
/* 803D5BE8 003D2B28  4B FF 47 71 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5BEC 003D2B2C  90 7F 00 90 */	stw r3, 0x90(r31)
/* 803D5BF0 003D2B30  3C A0 73 64 */	lis r5, 0x7364336C@ha
/* 803D5BF4 003D2B34  3C 80 00 50 */	lis r4, 0x0050706F@ha
/* 803D5BF8 003D2B38  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5BFC 003D2B3C  38 C5 33 6C */	addi r6, r5, 0x7364336C@l
/* 803D5C00 003D2B40  38 A4 70 6F */	addi r5, r4, 0x0050706F@l
/* 803D5C04 003D2B44  4B FF 47 55 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5C08 003D2B48  90 7F 00 88 */	stw r3, 0x88(r31)
/* 803D5C0C 003D2B4C  3C A0 73 64 */	lis r5, 0x73643372@ha
/* 803D5C10 003D2B50  3C 80 00 50 */	lis r4, 0x0050706F@ha
/* 803D5C14 003D2B54  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5C18 003D2B58  38 C5 33 72 */	addi r6, r5, 0x73643372@l
/* 803D5C1C 003D2B5C  38 A4 70 6F */	addi r5, r4, 0x0050706F@l
/* 803D5C20 003D2B60  4B FF 47 39 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5C24 003D2B64  90 7F 00 94 */	stw r3, 0x94(r31)
/* 803D5C28 003D2B68  3C 60 54 63 */	lis r3, 0x54636F6C@ha
/* 803D5C2C 003D2B6C  38 C3 6F 6C */	addi r6, r3, 0x54636F6C@l
/* 803D5C30 003D2B70  38 A0 00 00 */	li r5, 0
/* 803D5C34 003D2B74  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5C38 003D2B78  4B FF 47 21 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5C3C 003D2B7C  7C 7B 1B 78 */	mr r27, r3
/* 803D5C40 003D2B80  38 61 00 38 */	addi r3, r1, 0x38
/* 803D5C44 003D2B84  80 1B 01 04 */	lwz r0, 0x104(r27)
/* 803D5C48 003D2B88  7F 64 DB 78 */	mr r4, r27
/* 803D5C4C 003D2B8C  90 01 00 30 */	stw r0, 0x30(r1)
/* 803D5C50 003D2B90  88 A1 00 30 */	lbz r5, 0x30(r1)
/* 803D5C54 003D2B94  88 01 00 31 */	lbz r0, 0x31(r1)
/* 803D5C58 003D2B98  98 BF 00 C0 */	stb r5, 0xc0(r31)
/* 803D5C5C 003D2B9C  88 A1 00 32 */	lbz r5, 0x32(r1)
/* 803D5C60 003D2BA0  98 1F 00 C1 */	stb r0, 0xc1(r31)
/* 803D5C64 003D2BA4  88 01 00 33 */	lbz r0, 0x33(r1)
/* 803D5C68 003D2BA8  98 BF 00 C2 */	stb r5, 0xc2(r31)
/* 803D5C6C 003D2BAC  98 1F 00 C3 */	stb r0, 0xc3(r31)
/* 803D5C70 003D2BB0  80 1B 01 08 */	lwz r0, 0x108(r27)
/* 803D5C74 003D2BB4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803D5C78 003D2BB8  88 A1 00 34 */	lbz r5, 0x34(r1)
/* 803D5C7C 003D2BBC  88 01 00 35 */	lbz r0, 0x35(r1)
/* 803D5C80 003D2BC0  98 BF 00 C4 */	stb r5, 0xc4(r31)
/* 803D5C84 003D2BC4  88 A1 00 36 */	lbz r5, 0x36(r1)
/* 803D5C88 003D2BC8  98 1F 00 C5 */	stb r0, 0xc5(r31)
/* 803D5C8C 003D2BCC  88 01 00 37 */	lbz r0, 0x37(r1)
/* 803D5C90 003D2BD0  98 BF 00 C6 */	stb r5, 0xc6(r31)
/* 803D5C94 003D2BD4  98 1F 00 C7 */	stb r0, 0xc7(r31)
/* 803D5C98 003D2BD8  81 9B 00 00 */	lwz r12, 0(r27)
/* 803D5C9C 003D2BDC  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 803D5CA0 003D2BE0  7D 89 03 A6 */	mtctr r12
/* 803D5CA4 003D2BE4  4E 80 04 21 */	bctrl 
/* 803D5CA8 003D2BE8  88 01 00 38 */	lbz r0, 0x38(r1)
/* 803D5CAC 003D2BEC  7F 64 DB 78 */	mr r4, r27
/* 803D5CB0 003D2BF0  38 61 00 3C */	addi r3, r1, 0x3c
/* 803D5CB4 003D2BF4  98 1F 00 C8 */	stb r0, 0xc8(r31)
/* 803D5CB8 003D2BF8  88 01 00 39 */	lbz r0, 0x39(r1)
/* 803D5CBC 003D2BFC  98 1F 00 C9 */	stb r0, 0xc9(r31)
/* 803D5CC0 003D2C00  88 01 00 3A */	lbz r0, 0x3a(r1)
/* 803D5CC4 003D2C04  98 1F 00 CA */	stb r0, 0xca(r31)
/* 803D5CC8 003D2C08  88 01 00 3B */	lbz r0, 0x3b(r1)
/* 803D5CCC 003D2C0C  98 1F 00 CB */	stb r0, 0xcb(r31)
/* 803D5CD0 003D2C10  81 9B 00 00 */	lwz r12, 0(r27)
/* 803D5CD4 003D2C14  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 803D5CD8 003D2C18  7D 89 03 A6 */	mtctr r12
/* 803D5CDC 003D2C1C  4E 80 04 21 */	bctrl 
/* 803D5CE0 003D2C20  88 01 00 3C */	lbz r0, 0x3c(r1)
/* 803D5CE4 003D2C24  38 61 00 28 */	addi r3, r1, 0x28
/* 803D5CE8 003D2C28  98 1F 00 CC */	stb r0, 0xcc(r31)
/* 803D5CEC 003D2C2C  88 01 00 3D */	lbz r0, 0x3d(r1)
/* 803D5CF0 003D2C30  98 1F 00 CD */	stb r0, 0xcd(r31)
/* 803D5CF4 003D2C34  88 01 00 3E */	lbz r0, 0x3e(r1)
/* 803D5CF8 003D2C38  98 1F 00 CE */	stb r0, 0xce(r31)
/* 803D5CFC 003D2C3C  88 01 00 3F */	lbz r0, 0x3f(r1)
/* 803D5D00 003D2C40  98 1F 00 CF */	stb r0, 0xcf(r31)
/* 803D5D04 003D2C44  83 7F 00 A0 */	lwz r27, 0xa0(r31)
/* 803D5D08 003D2C48  80 1B 01 04 */	lwz r0, 0x104(r27)
/* 803D5D0C 003D2C4C  7F 64 DB 78 */	mr r4, r27
/* 803D5D10 003D2C50  90 01 00 20 */	stw r0, 0x20(r1)
/* 803D5D14 003D2C54  88 A1 00 20 */	lbz r5, 0x20(r1)
/* 803D5D18 003D2C58  88 01 00 21 */	lbz r0, 0x21(r1)
/* 803D5D1C 003D2C5C  98 BF 00 D0 */	stb r5, 0xd0(r31)
/* 803D5D20 003D2C60  88 A1 00 22 */	lbz r5, 0x22(r1)
/* 803D5D24 003D2C64  98 1F 00 D1 */	stb r0, 0xd1(r31)
/* 803D5D28 003D2C68  88 01 00 23 */	lbz r0, 0x23(r1)
/* 803D5D2C 003D2C6C  98 BF 00 D2 */	stb r5, 0xd2(r31)
/* 803D5D30 003D2C70  98 1F 00 D3 */	stb r0, 0xd3(r31)
/* 803D5D34 003D2C74  80 1B 01 08 */	lwz r0, 0x108(r27)
/* 803D5D38 003D2C78  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D5D3C 003D2C7C  88 A1 00 24 */	lbz r5, 0x24(r1)
/* 803D5D40 003D2C80  88 01 00 25 */	lbz r0, 0x25(r1)
/* 803D5D44 003D2C84  98 BF 00 D4 */	stb r5, 0xd4(r31)
/* 803D5D48 003D2C88  88 A1 00 26 */	lbz r5, 0x26(r1)
/* 803D5D4C 003D2C8C  98 1F 00 D5 */	stb r0, 0xd5(r31)
/* 803D5D50 003D2C90  88 01 00 27 */	lbz r0, 0x27(r1)
/* 803D5D54 003D2C94  98 BF 00 D6 */	stb r5, 0xd6(r31)
/* 803D5D58 003D2C98  98 1F 00 D7 */	stb r0, 0xd7(r31)
/* 803D5D5C 003D2C9C  81 9B 00 00 */	lwz r12, 0(r27)
/* 803D5D60 003D2CA0  81 8C 00 B4 */	lwz r12, 0xb4(r12)
/* 803D5D64 003D2CA4  7D 89 03 A6 */	mtctr r12
/* 803D5D68 003D2CA8  4E 80 04 21 */	bctrl 
/* 803D5D6C 003D2CAC  88 01 00 28 */	lbz r0, 0x28(r1)
/* 803D5D70 003D2CB0  7F 64 DB 78 */	mr r4, r27
/* 803D5D74 003D2CB4  38 61 00 2C */	addi r3, r1, 0x2c
/* 803D5D78 003D2CB8  98 1F 00 D8 */	stb r0, 0xd8(r31)
/* 803D5D7C 003D2CBC  88 01 00 29 */	lbz r0, 0x29(r1)
/* 803D5D80 003D2CC0  98 1F 00 D9 */	stb r0, 0xd9(r31)
/* 803D5D84 003D2CC4  88 01 00 2A */	lbz r0, 0x2a(r1)
/* 803D5D88 003D2CC8  98 1F 00 DA */	stb r0, 0xda(r31)
/* 803D5D8C 003D2CCC  88 01 00 2B */	lbz r0, 0x2b(r1)
/* 803D5D90 003D2CD0  98 1F 00 DB */	stb r0, 0xdb(r31)
/* 803D5D94 003D2CD4  81 9B 00 00 */	lwz r12, 0(r27)
/* 803D5D98 003D2CD8  81 8C 00 B0 */	lwz r12, 0xb0(r12)
/* 803D5D9C 003D2CDC  7D 89 03 A6 */	mtctr r12
/* 803D5DA0 003D2CE0  4E 80 04 21 */	bctrl 
/* 803D5DA4 003D2CE4  88 01 00 2C */	lbz r0, 0x2c(r1)
/* 803D5DA8 003D2CE8  7F FA FB 78 */	mr r26, r31
/* 803D5DAC 003D2CEC  3B 60 00 00 */	li r27, 0
/* 803D5DB0 003D2CF0  98 1F 00 DC */	stb r0, 0xdc(r31)
/* 803D5DB4 003D2CF4  88 01 00 2D */	lbz r0, 0x2d(r1)
/* 803D5DB8 003D2CF8  98 1F 00 DD */	stb r0, 0xdd(r31)
/* 803D5DBC 003D2CFC  88 01 00 2E */	lbz r0, 0x2e(r1)
/* 803D5DC0 003D2D00  98 1F 00 DE */	stb r0, 0xde(r31)
/* 803D5DC4 003D2D04  88 01 00 2F */	lbz r0, 0x2f(r1)
/* 803D5DC8 003D2D08  98 1F 00 DF */	stb r0, 0xdf(r31)
.L_803D5DCC:
/* 803D5DCC 003D2D0C  80 7A 00 80 */	lwz r3, 0x80(r26)
/* 803D5DD0 003D2D10  38 80 00 00 */	li r4, 0
/* 803D5DD4 003D2D14  81 83 00 00 */	lwz r12, 0(r3)
/* 803D5DD8 003D2D18  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D5DDC 003D2D1C  7D 89 03 A6 */	mtctr r12
/* 803D5DE0 003D2D20  4E 80 04 21 */	bctrl 
/* 803D5DE4 003D2D24  80 7A 00 8C */	lwz r3, 0x8c(r26)
/* 803D5DE8 003D2D28  38 80 00 00 */	li r4, 0
/* 803D5DEC 003D2D2C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D5DF0 003D2D30  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D5DF4 003D2D34  7D 89 03 A6 */	mtctr r12
/* 803D5DF8 003D2D38  4E 80 04 21 */	bctrl 
/* 803D5DFC 003D2D3C  3B 7B 00 01 */	addi r27, r27, 1
/* 803D5E00 003D2D40  3B 5A 00 04 */	addi r26, r26, 4
/* 803D5E04 003D2D44  2C 1B 00 03 */	cmpwi r27, 3
/* 803D5E08 003D2D48  41 80 FF C4 */	blt .L_803D5DCC
/* 803D5E0C 003D2D4C  3C 80 70 65 */	lis r4, 0x70656E31@ha
/* 803D5E10 003D2D50  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5E14 003D2D54  38 C4 6E 31 */	addi r6, r4, 0x70656E31@l
/* 803D5E18 003D2D58  38 A0 50 6F */	li r5, 0x506f
/* 803D5E1C 003D2D5C  4B FF 45 3D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5E20 003D2D60  38 00 00 01 */	li r0, 1
/* 803D5E24 003D2D64  3C A0 65 6E */	lis r5, 0x656E7031@ha
/* 803D5E28 003D2D68  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D5E2C 003D2D6C  3C 80 00 50 */	lis r4, 0x00506F70@ha
/* 803D5E30 003D2D70  38 C5 70 31 */	addi r6, r5, 0x656E7031@l
/* 803D5E34 003D2D74  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5E38 003D2D78  38 A4 6F 70 */	addi r5, r4, 0x00506F70@l
/* 803D5E3C 003D2D7C  4B FF 45 1D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D5E40 003D2D80  38 00 00 01 */	li r0, 1
/* 803D5E44 003D2D84  3C 80 39 5F */	lis r4, 0x395F3030@ha
/* 803D5E48 003D2D88  38 C4 30 30 */	addi r6, r4, 0x395F3030@l
/* 803D5E4C 003D2D8C  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D5E50 003D2D90  38 A4 34 37 */	addi r5, r4, 0x00353437@l
/* 803D5E54 003D2D94  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D5E58 003D2D98  7F E3 FB 78 */	mr r3, r31
/* 803D5E5C 003D2D9C  7C C8 33 78 */	mr r8, r6
/* 803D5E60 003D2DA0  7C A7 2B 78 */	mr r7, r5
/* 803D5E64 003D2DA4  7C CA 33 78 */	mr r10, r6
/* 803D5E68 003D2DA8  7C A9 2B 78 */	mr r9, r5
/* 803D5E6C 003D2DAC  48 00 28 ED */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D5E70 003D2DB0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D5E74 003D2DB4  38 9D 00 54 */	addi r4, r29, 0x54
/* 803D5E78 003D2DB8  38 A0 00 00 */	li r5, 0
/* 803D5E7C 003D2DBC  48 04 D4 E1 */	bl heapStatusStart__6SystemFPcP7JKRHeap
/* 803D5E80 003D2DC0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5E84 003D2DC4  7C 64 1B 78 */	mr r4, r3
/* 803D5E88 003D2DC8  4B FF 4A 95 */	bl E2DPane_setTreeCallBackMessage__3ebiFPQ29P2DScreen3MgrP7J2DPane
/* 803D5E8C 003D2DCC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D5E90 003D2DD0  38 9D 00 54 */	addi r4, r29, 0x54
/* 803D5E94 003D2DD4  48 04 D4 D1 */	bl heapStatusEnd__6SystemFPc
/* 803D5E98 003D2DD8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5E9C 003D2DDC  38 BF 00 E0 */	addi r5, r31, 0xe0
/* 803D5EA0 003D2DE0  7C 64 1B 78 */	mr r4, r3
/* 803D5EA4 003D2DE4  48 05 ED B9 */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5EA8 003D2DE8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5EAC 003D2DEC  38 BF 01 1C */	addi r5, r31, 0x11c
/* 803D5EB0 003D2DF0  7C 64 1B 78 */	mr r4, r3
/* 803D5EB4 003D2DF4  48 05 ED A9 */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5EB8 003D2DF8  7F FA FB 78 */	mr r26, r31
/* 803D5EBC 003D2DFC  7F FB FB 78 */	mr r27, r31
/* 803D5EC0 003D2E00  3B 80 00 00 */	li r28, 0
.L_803D5EC4:
/* 803D5EC4 003D2E04  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5EC8 003D2E08  38 BA 01 58 */	addi r5, r26, 0x158
/* 803D5ECC 003D2E0C  80 9B 00 38 */	lwz r4, 0x38(r27)
/* 803D5ED0 003D2E10  48 05 ED 8D */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5ED4 003D2E14  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5ED8 003D2E18  38 BA 02 0C */	addi r5, r26, 0x20c
/* 803D5EDC 003D2E1C  80 9B 00 44 */	lwz r4, 0x44(r27)
/* 803D5EE0 003D2E20  48 05 ED 7D */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5EE4 003D2E24  3B 9C 00 01 */	addi r28, r28, 1
/* 803D5EE8 003D2E28  3B 7B 00 04 */	addi r27, r27, 4
/* 803D5EEC 003D2E2C  2C 1C 00 03 */	cmpwi r28, 3
/* 803D5EF0 003D2E30  3B 5A 00 3C */	addi r26, r26, 0x3c
/* 803D5EF4 003D2E34  41 80 FF D0 */	blt .L_803D5EC4
/* 803D5EF8 003D2E38  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5EFC 003D2E3C  38 BF 02 C0 */	addi r5, r31, 0x2c0
/* 803D5F00 003D2E40  7C 64 1B 78 */	mr r4, r3
/* 803D5F04 003D2E44  48 05 ED 59 */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5F08 003D2E48  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5F0C 003D2E4C  38 BF 02 FC */	addi r5, r31, 0x2fc
/* 803D5F10 003D2E50  7C 64 1B 78 */	mr r4, r3
/* 803D5F14 003D2E54  48 05 ED 49 */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5F18 003D2E58  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5F1C 003D2E5C  38 BF 03 38 */	addi r5, r31, 0x338
/* 803D5F20 003D2E60  7C 64 1B 78 */	mr r4, r3
/* 803D5F24 003D2E64  48 05 ED 39 */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5F28 003D2E68  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5F2C 003D2E6C  38 BF 03 74 */	addi r5, r31, 0x374
/* 803D5F30 003D2E70  7C 64 1B 78 */	mr r4, r3
/* 803D5F34 003D2E74  48 05 ED 29 */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5F38 003D2E78  7F FA FB 78 */	mr r26, r31
/* 803D5F3C 003D2E7C  7F FB FB 78 */	mr r27, r31
/* 803D5F40 003D2E80  3B 80 00 00 */	li r28, 0
.L_803D5F44:
/* 803D5F44 003D2E84  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5F48 003D2E88  38 BA 03 B0 */	addi r5, r26, 0x3b0
/* 803D5F4C 003D2E8C  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 803D5F50 003D2E90  48 05 ED 0D */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5F54 003D2E94  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5F58 003D2E98  38 BA 04 64 */	addi r5, r26, 0x464
/* 803D5F5C 003D2E9C  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 803D5F60 003D2EA0  48 05 EC FD */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5F64 003D2EA4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5F68 003D2EA8  38 BA 05 18 */	addi r5, r26, 0x518
/* 803D5F6C 003D2EAC  80 9B 00 10 */	lwz r4, 0x10(r27)
/* 803D5F70 003D2EB0  48 05 EC ED */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D5F74 003D2EB4  3B 9C 00 01 */	addi r28, r28, 1
/* 803D5F78 003D2EB8  3B 7B 00 04 */	addi r27, r27, 4
/* 803D5F7C 003D2EBC  2C 1C 00 03 */	cmpwi r28, 3
/* 803D5F80 003D2EC0  3B 5A 00 3C */	addi r26, r26, 0x3c
/* 803D5F84 003D2EC4  41 80 FF C0 */	blt .L_803D5F44
/* 803D5F88 003D2EC8  3C A0 70 62 */	lis r5, 0x70627430@ha
/* 803D5F8C 003D2ECC  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803D5F90 003D2ED0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5F94 003D2ED4  38 C5 74 30 */	addi r6, r5, 0x70627430@l
/* 803D5F98 003D2ED8  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803D5F9C 003D2EDC  38 FF 05 CC */	addi r7, r31, 0x5cc
/* 803D5FA0 003D2EE0  48 05 EB 85 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D5FA4 003D2EE4  3C A0 70 62 */	lis r5, 0x70627430@ha
/* 803D5FA8 003D2EE8  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803D5FAC 003D2EEC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5FB0 003D2EF0  38 C5 74 30 */	addi r6, r5, 0x70627430@l
/* 803D5FB4 003D2EF4  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803D5FB8 003D2EF8  38 FF 06 44 */	addi r7, r31, 0x644
/* 803D5FBC 003D2EFC  48 05 EB 69 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D5FC0 003D2F00  3C A0 70 62 */	lis r5, 0x70627431@ha
/* 803D5FC4 003D2F04  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803D5FC8 003D2F08  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5FCC 003D2F0C  38 C5 74 31 */	addi r6, r5, 0x70627431@l
/* 803D5FD0 003D2F10  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803D5FD4 003D2F14  38 FF 06 08 */	addi r7, r31, 0x608
/* 803D5FD8 003D2F18  48 05 EB 4D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D5FDC 003D2F1C  3C A0 70 62 */	lis r5, 0x70627431@ha
/* 803D5FE0 003D2F20  3C 80 00 4E */	lis r4, 0x004E6772@ha
/* 803D5FE4 003D2F24  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D5FE8 003D2F28  38 C5 74 31 */	addi r6, r5, 0x70627431@l
/* 803D5FEC 003D2F2C  38 A4 67 72 */	addi r5, r4, 0x004E6772@l
/* 803D5FF0 003D2F30  38 FF 06 80 */	addi r7, r31, 0x680
/* 803D5FF4 003D2F34  48 05 EB 31 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D5FF8 003D2F38  3C 80 00 4E */	lis r4, 0x004E5F79@ha
/* 803D5FFC 003D2F3C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6000 003D2F40  38 C4 5F 79 */	addi r6, r4, 0x004E5F79@l
/* 803D6004 003D2F44  38 FF 06 BC */	addi r7, r31, 0x6bc
/* 803D6008 003D2F48  38 A0 00 00 */	li r5, 0
/* 803D600C 003D2F4C  48 05 EB 19 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D6010 003D2F50  3C 80 00 4E */	lis r4, 0x004E5F79@ha
/* 803D6014 003D2F54  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6018 003D2F58  38 C4 5F 79 */	addi r6, r4, 0x004E5F79@l
/* 803D601C 003D2F5C  38 FF 07 34 */	addi r7, r31, 0x734
/* 803D6020 003D2F60  38 A0 00 00 */	li r5, 0
/* 803D6024 003D2F64  48 05 EB 01 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D6028 003D2F68  3C 80 00 4E */	lis r4, 0x004E5F6E@ha
/* 803D602C 003D2F6C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6030 003D2F70  38 C4 5F 6E */	addi r6, r4, 0x004E5F6E@l
/* 803D6034 003D2F74  38 FF 06 F8 */	addi r7, r31, 0x6f8
/* 803D6038 003D2F78  38 A0 00 00 */	li r5, 0
/* 803D603C 003D2F7C  48 05 EA E9 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D6040 003D2F80  3C 80 00 4E */	lis r4, 0x004E5F6E@ha
/* 803D6044 003D2F84  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6048 003D2F88  38 C4 5F 6E */	addi r6, r4, 0x004E5F6E@l
/* 803D604C 003D2F8C  38 FF 07 70 */	addi r7, r31, 0x770
/* 803D6050 003D2F90  38 A0 00 00 */	li r5, 0
/* 803D6054 003D2F94  48 05 EA D1 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D6058 003D2F98  3C A0 69 6E */	lis r5, 0x696E4D47@ha
/* 803D605C 003D2F9C  3C 80 00 4E */	lis r4, 0x004E6D61@ha
/* 803D6060 003D2FA0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6064 003D2FA4  38 C5 4D 47 */	addi r6, r5, 0x696E4D47@l
/* 803D6068 003D2FA8  38 A4 6D 61 */	addi r5, r4, 0x004E6D61@l
/* 803D606C 003D2FAC  38 FF 07 AC */	addi r7, r31, 0x7ac
/* 803D6070 003D2FB0  48 05 EA B5 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D6074 003D2FB4  3C 80 61 74 */	lis r4, 0x61746177@ha
/* 803D6078 003D2FB8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D607C 003D2FBC  38 C4 61 77 */	addi r6, r4, 0x61746177@l
/* 803D6080 003D2FC0  38 FF 07 E8 */	addi r7, r31, 0x7e8
/* 803D6084 003D2FC4  38 A0 4E 64 */	li r5, 0x4e64
/* 803D6088 003D2FC8  48 05 EA 9D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D608C 003D2FCC  3C 80 61 74 */	lis r4, 0x61746177@ha
/* 803D6090 003D2FD0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6094 003D2FD4  38 C4 61 77 */	addi r6, r4, 0x61746177@l
/* 803D6098 003D2FD8  38 FF 08 24 */	addi r7, r31, 0x824
/* 803D609C 003D2FDC  38 A0 4E 64 */	li r5, 0x4e64
/* 803D60A0 003D2FE0  48 05 EA 85 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D60A4 003D2FE4  3C 80 61 74 */	lis r4, 0x61746177@ha
/* 803D60A8 003D2FE8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D60AC 003D2FEC  38 C4 61 77 */	addi r6, r4, 0x61746177@l
/* 803D60B0 003D2FF0  38 FF 08 60 */	addi r7, r31, 0x860
/* 803D60B4 003D2FF4  38 A0 4E 64 */	li r5, 0x4e64
/* 803D60B8 003D2FF8  48 05 EA 6D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D60BC 003D2FFC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D60C0 003D3000  38 BF 08 9C */	addi r5, r31, 0x89c
/* 803D60C4 003D3004  7C 64 1B 78 */	mr r4, r3
/* 803D60C8 003D3008  48 05 EB 95 */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D60CC 003D300C  3B 5F 0B 04 */	addi r26, r31, 0xb04
/* 803D60D0 003D3010  3C 60 31 6E */	lis r3, 0x316E6F72@ha
/* 803D60D4 003D3014  93 41 00 08 */	stw r26, 8(r1)
/* 803D60D8 003D3018  38 00 00 06 */	li r0, 6
/* 803D60DC 003D301C  38 C3 6F 72 */	addi r6, r3, 0x316E6F72@l
/* 803D60E0 003D3020  39 03 6F 6C */	addi r8, r3, 0x6f6c
/* 803D60E4 003D3024  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D60E8 003D3028  39 43 6F 63 */	addi r10, r3, 0x6f63
/* 803D60EC 003D302C  38 A0 50 64 */	li r5, 0x5064
/* 803D60F0 003D3030  38 E0 50 64 */	li r7, 0x5064
/* 803D60F4 003D3034  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803D60F8 003D3038  39 20 50 64 */	li r9, 0x5064
/* 803D60FC 003D303C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6100 003D3040  4B F3 75 25 */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803D6104 003D3044  90 7F 09 D4 */	stw r3, 0x9d4(r31)
/* 803D6108 003D3048  3C 80 31 6E */	lis r4, 0x316E6F72@ha
/* 803D610C 003D304C  3C 60 00 50 */	lis r3, 0x00506D64@ha
/* 803D6110 003D3050  38 00 00 06 */	li r0, 6
/* 803D6114 003D3054  93 41 00 08 */	stw r26, 8(r1)
/* 803D6118 003D3058  38 A3 6D 64 */	addi r5, r3, 0x00506D64@l
/* 803D611C 003D305C  7C A7 2B 78 */	mr r7, r5
/* 803D6120 003D3060  38 C4 6F 72 */	addi r6, r4, 0x316E6F72@l
/* 803D6124 003D3064  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D6128 003D3068  7C A9 2B 78 */	mr r9, r5
/* 803D612C 003D306C  39 04 6F 6C */	addi r8, r4, 0x6f6c
/* 803D6130 003D3070  39 44 6F 63 */	addi r10, r4, 0x6f63
/* 803D6134 003D3074  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803D6138 003D3078  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D613C 003D307C  4B F3 74 E9 */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803D6140 003D3080  90 7F 09 E0 */	stw r3, 0x9e0(r31)
/* 803D6144 003D3084  3C 60 32 6E */	lis r3, 0x326E6F72@ha
/* 803D6148 003D3088  3B 5F 0B 38 */	addi r26, r31, 0xb38
/* 803D614C 003D308C  38 00 00 06 */	li r0, 6
/* 803D6150 003D3090  93 41 00 08 */	stw r26, 8(r1)
/* 803D6154 003D3094  38 C3 6F 72 */	addi r6, r3, 0x326E6F72@l
/* 803D6158 003D3098  39 03 6F 6C */	addi r8, r3, 0x6f6c
/* 803D615C 003D309C  39 43 6F 63 */	addi r10, r3, 0x6f63
/* 803D6160 003D30A0  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D6164 003D30A4  38 A0 50 64 */	li r5, 0x5064
/* 803D6168 003D30A8  38 E0 50 64 */	li r7, 0x5064
/* 803D616C 003D30AC  39 20 50 64 */	li r9, 0x5064
/* 803D6170 003D30B0  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803D6174 003D30B4  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6178 003D30B8  4B F3 74 AD */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803D617C 003D30BC  90 7F 09 D8 */	stw r3, 0x9d8(r31)
/* 803D6180 003D30C0  3C 80 32 6E */	lis r4, 0x326E6F72@ha
/* 803D6184 003D30C4  3C 60 00 50 */	lis r3, 0x00506D64@ha
/* 803D6188 003D30C8  38 00 00 06 */	li r0, 6
/* 803D618C 003D30CC  93 41 00 08 */	stw r26, 8(r1)
/* 803D6190 003D30D0  38 A3 6D 64 */	addi r5, r3, 0x00506D64@l
/* 803D6194 003D30D4  7C A7 2B 78 */	mr r7, r5
/* 803D6198 003D30D8  38 C4 6F 72 */	addi r6, r4, 0x326E6F72@l
/* 803D619C 003D30DC  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D61A0 003D30E0  7C A9 2B 78 */	mr r9, r5
/* 803D61A4 003D30E4  39 04 6F 6C */	addi r8, r4, 0x6f6c
/* 803D61A8 003D30E8  39 44 6F 63 */	addi r10, r4, 0x6f63
/* 803D61AC 003D30EC  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803D61B0 003D30F0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D61B4 003D30F4  4B F3 74 71 */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803D61B8 003D30F8  90 7F 09 E4 */	stw r3, 0x9e4(r31)
/* 803D61BC 003D30FC  3C 60 33 6E */	lis r3, 0x336E6F72@ha
/* 803D61C0 003D3100  3B 5F 0B 6C */	addi r26, r31, 0xb6c
/* 803D61C4 003D3104  38 00 00 06 */	li r0, 6
/* 803D61C8 003D3108  93 41 00 08 */	stw r26, 8(r1)
/* 803D61CC 003D310C  38 C3 6F 72 */	addi r6, r3, 0x336E6F72@l
/* 803D61D0 003D3110  39 03 6F 6C */	addi r8, r3, 0x6f6c
/* 803D61D4 003D3114  39 43 6F 63 */	addi r10, r3, 0x6f63
/* 803D61D8 003D3118  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D61DC 003D311C  38 A0 50 64 */	li r5, 0x5064
/* 803D61E0 003D3120  38 E0 50 64 */	li r7, 0x5064
/* 803D61E4 003D3124  39 20 50 64 */	li r9, 0x5064
/* 803D61E8 003D3128  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803D61EC 003D312C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D61F0 003D3130  4B F3 74 35 */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803D61F4 003D3134  90 7F 09 DC */	stw r3, 0x9dc(r31)
/* 803D61F8 003D3138  3C 80 33 6E */	lis r4, 0x336E6F72@ha
/* 803D61FC 003D313C  3C 60 00 50 */	lis r3, 0x00506D64@ha
/* 803D6200 003D3140  38 00 00 06 */	li r0, 6
/* 803D6204 003D3144  93 41 00 08 */	stw r26, 8(r1)
/* 803D6208 003D3148  38 A3 6D 64 */	addi r5, r3, 0x00506D64@l
/* 803D620C 003D314C  7C A7 2B 78 */	mr r7, r5
/* 803D6210 003D3150  38 C4 6F 72 */	addi r6, r4, 0x336E6F72@l
/* 803D6214 003D3154  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D6218 003D3158  7C A9 2B 78 */	mr r9, r5
/* 803D621C 003D315C  39 04 6F 6C */	addi r8, r4, 0x6f6c
/* 803D6220 003D3160  39 44 6F 63 */	addi r10, r4, 0x6f63
/* 803D6224 003D3164  93 C1 00 10 */	stw r30, 0x10(r1)
/* 803D6228 003D3168  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D622C 003D316C  4B F3 73 F9 */	bl setCallBack_CounterDay__Q22og6ScreenFPQ29P2DScreen3MgrUxUxUxPUlUsP10JKRArchive
/* 803D6230 003D3170  90 7F 09 E8 */	stw r3, 0x9e8(r31)
/* 803D6234 003D3174  38 BF 08 BC */	addi r5, r31, 0x8bc
/* 803D6238 003D3178  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D623C 003D317C  80 9F 00 98 */	lwz r4, 0x98(r31)
/* 803D6240 003D3180  48 05 EA 1D */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D6244 003D3184  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6248 003D3188  38 BF 09 08 */	addi r5, r31, 0x908
/* 803D624C 003D318C  80 9F 00 A0 */	lwz r4, 0xa0(r31)
/* 803D6250 003D3190  48 05 EA 0D */	bl addCallBackPane__Q29P2DScreen3MgrFP7J2DPanePQ29P2DScreen4Node
/* 803D6254 003D3194  38 7F 08 BC */	addi r3, r31, 0x8bc
/* 803D6258 003D3198  38 9F 00 D0 */	addi r4, r31, 0xd0
/* 803D625C 003D319C  38 BF 00 C0 */	addi r5, r31, 0xc0
/* 803D6260 003D31A0  48 00 38 99 */	bl set__Q23ebi26E2DCallBack_BlinkFontColorFRQ23ebi16E2DFullFontColorRQ23ebi16E2DFullFontColor
/* 803D6264 003D31A4  38 7F 09 08 */	addi r3, r31, 0x908
/* 803D6268 003D31A8  38 9F 00 D0 */	addi r4, r31, 0xd0
/* 803D626C 003D31AC  38 BF 00 C0 */	addi r5, r31, 0xc0
/* 803D6270 003D31B0  48 00 38 89 */	bl set__Q23ebi26E2DCallBack_BlinkFontColorFRQ23ebi16E2DFullFontColorRQ23ebi16E2DFullFontColor
/* 803D6274 003D31B4  3C 80 00 4E */	lis r4, 0x004E5F79@ha
/* 803D6278 003D31B8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D627C 003D31BC  38 C4 5F 79 */	addi r6, r4, 0x004E5F79@l
/* 803D6280 003D31C0  38 FF 09 54 */	addi r7, r31, 0x954
/* 803D6284 003D31C4  38 A0 00 00 */	li r5, 0
/* 803D6288 003D31C8  48 05 E8 9D */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D628C 003D31CC  3C 80 00 4E */	lis r4, 0x004E5F6E@ha
/* 803D6290 003D31D0  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6294 003D31D4  38 C4 5F 6E */	addi r6, r4, 0x004E5F6E@l
/* 803D6298 003D31D8  38 FF 09 94 */	addi r7, r31, 0x994
/* 803D629C 003D31DC  38 A0 00 00 */	li r5, 0
/* 803D62A0 003D31E0  48 05 E8 85 */	bl addCallBack__Q29P2DScreen3MgrFUxPQ29P2DScreen4Node
/* 803D62A4 003D31E4  7F C5 F3 78 */	mr r5, r30
/* 803D62A8 003D31E8  38 7F 00 E0 */	addi r3, r31, 0xe0
/* 803D62AC 003D31EC  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D62B0 003D31F0  38 C0 00 00 */	li r6, 0
/* 803D62B4 003D31F4  38 E0 00 50 */	li r7, 0x50
/* 803D62B8 003D31F8  4B FF A8 19 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D62BC 003D31FC  7F C5 F3 78 */	mr r5, r30
/* 803D62C0 003D3200  38 7F 03 B0 */	addi r3, r31, 0x3b0
/* 803D62C4 003D3204  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D62C8 003D3208  38 C0 00 50 */	li r6, 0x50
/* 803D62CC 003D320C  38 E0 00 6A */	li r7, 0x6a
/* 803D62D0 003D3210  4B FF A8 01 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D62D4 003D3214  7F C5 F3 78 */	mr r5, r30
/* 803D62D8 003D3218  38 7F 04 64 */	addi r3, r31, 0x464
/* 803D62DC 003D321C  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D62E0 003D3220  38 C0 00 82 */	li r6, 0x82
/* 803D62E4 003D3224  38 E0 00 A4 */	li r7, 0xa4
/* 803D62E8 003D3228  4B FF A7 E9 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D62EC 003D322C  7F C5 F3 78 */	mr r5, r30
/* 803D62F0 003D3230  38 7F 05 18 */	addi r3, r31, 0x518
/* 803D62F4 003D3234  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D62F8 003D3238  38 C0 01 A4 */	li r6, 0x1a4
/* 803D62FC 003D323C  38 E0 01 C8 */	li r7, 0x1c8
/* 803D6300 003D3240  4B FF A7 D1 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6304 003D3244  7F C5 F3 78 */	mr r5, r30
/* 803D6308 003D3248  38 7F 03 EC */	addi r3, r31, 0x3ec
/* 803D630C 003D324C  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6310 003D3250  38 C0 00 88 */	li r6, 0x88
/* 803D6314 003D3254  38 E0 00 A9 */	li r7, 0xa9
/* 803D6318 003D3258  4B FF A7 B9 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D631C 003D325C  7F C5 F3 78 */	mr r5, r30
/* 803D6320 003D3260  38 7F 04 A0 */	addi r3, r31, 0x4a0
/* 803D6324 003D3264  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6328 003D3268  38 C0 00 D1 */	li r6, 0xd1
/* 803D632C 003D326C  38 E0 00 EB */	li r7, 0xeb
/* 803D6330 003D3270  4B FF A7 A1 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6334 003D3274  7F C5 F3 78 */	mr r5, r30
/* 803D6338 003D3278  38 7F 05 54 */	addi r3, r31, 0x554
/* 803D633C 003D327C  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6340 003D3280  38 C0 01 A4 */	li r6, 0x1a4
/* 803D6344 003D3284  38 E0 01 C8 */	li r7, 0x1c8
/* 803D6348 003D3288  4B FF A7 89 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D634C 003D328C  7F C5 F3 78 */	mr r5, r30
/* 803D6350 003D3290  38 7F 04 28 */	addi r3, r31, 0x428
/* 803D6354 003D3294  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6358 003D3298  38 C0 00 D7 */	li r6, 0xd7
/* 803D635C 003D329C  38 E0 00 F8 */	li r7, 0xf8
/* 803D6360 003D32A0  4B FF A7 71 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6364 003D32A4  7F C5 F3 78 */	mr r5, r30
/* 803D6368 003D32A8  38 7F 04 DC */	addi r3, r31, 0x4dc
/* 803D636C 003D32AC  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6370 003D32B0  38 C0 01 35 */	li r6, 0x135
/* 803D6374 003D32B4  38 E0 01 4C */	li r7, 0x14c
/* 803D6378 003D32B8  4B FF A7 59 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D637C 003D32BC  7F C5 F3 78 */	mr r5, r30
/* 803D6380 003D32C0  38 7F 05 90 */	addi r3, r31, 0x590
/* 803D6384 003D32C4  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6388 003D32C8  38 C0 01 A4 */	li r6, 0x1a4
/* 803D638C 003D32CC  38 E0 01 C8 */	li r7, 0x1c8
/* 803D6390 003D32D0  4B FF A7 41 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6394 003D32D4  7F C5 F3 78 */	mr r5, r30
/* 803D6398 003D32D8  38 7F 05 CC */	addi r3, r31, 0x5cc
/* 803D639C 003D32DC  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D63A0 003D32E0  38 C0 00 5A */	li r6, 0x5a
/* 803D63A4 003D32E4  38 E0 00 6A */	li r7, 0x6a
/* 803D63A8 003D32E8  4B FF A7 29 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D63AC 003D32EC  7F C5 F3 78 */	mr r5, r30
/* 803D63B0 003D32F0  38 7F 06 08 */	addi r3, r31, 0x608
/* 803D63B4 003D32F4  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D63B8 003D32F8  38 C0 00 5A */	li r6, 0x5a
/* 803D63BC 003D32FC  38 E0 00 6A */	li r7, 0x6a
/* 803D63C0 003D3300  4B FF A7 11 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D63C4 003D3304  7F C5 F3 78 */	mr r5, r30
/* 803D63C8 003D3308  38 7F 06 44 */	addi r3, r31, 0x644
/* 803D63CC 003D330C  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D63D0 003D3310  38 C0 01 21 */	li r6, 0x121
/* 803D63D4 003D3314  38 E0 01 30 */	li r7, 0x130
/* 803D63D8 003D3318  4B FF A6 F9 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D63DC 003D331C  7F C5 F3 78 */	mr r5, r30
/* 803D63E0 003D3320  38 7F 06 80 */	addi r3, r31, 0x680
/* 803D63E4 003D3324  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D63E8 003D3328  38 C0 01 21 */	li r6, 0x121
/* 803D63EC 003D332C  38 E0 01 30 */	li r7, 0x130
/* 803D63F0 003D3330  4B FF A6 E1 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D63F4 003D3334  7F C5 F3 78 */	mr r5, r30
/* 803D63F8 003D3338  38 7F 06 BC */	addi r3, r31, 0x6bc
/* 803D63FC 003D333C  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6400 003D3340  38 C0 02 08 */	li r6, 0x208
/* 803D6404 003D3344  38 E0 02 1F */	li r7, 0x21f
/* 803D6408 003D3348  4B FF A6 C9 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D640C 003D334C  7F C5 F3 78 */	mr r5, r30
/* 803D6410 003D3350  38 7F 06 F8 */	addi r3, r31, 0x6f8
/* 803D6414 003D3354  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6418 003D3358  38 C0 02 08 */	li r6, 0x208
/* 803D641C 003D335C  38 E0 02 1F */	li r7, 0x21f
/* 803D6420 003D3360  4B FF A6 B1 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6424 003D3364  7F C5 F3 78 */	mr r5, r30
/* 803D6428 003D3368  38 7F 07 34 */	addi r3, r31, 0x734
/* 803D642C 003D336C  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6430 003D3370  38 C0 01 A4 */	li r6, 0x1a4
/* 803D6434 003D3374  38 E0 01 C8 */	li r7, 0x1c8
/* 803D6438 003D3378  4B FF A6 99 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D643C 003D337C  7F C5 F3 78 */	mr r5, r30
/* 803D6440 003D3380  38 7F 07 70 */	addi r3, r31, 0x770
/* 803D6444 003D3384  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6448 003D3388  38 C0 02 D0 */	li r6, 0x2d0
/* 803D644C 003D338C  38 E0 02 DD */	li r7, 0x2dd
/* 803D6450 003D3390  4B FF A6 81 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6454 003D3394  7F C5 F3 78 */	mr r5, r30
/* 803D6458 003D3398  38 7F 07 AC */	addi r3, r31, 0x7ac
/* 803D645C 003D339C  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6460 003D33A0  38 C0 00 50 */	li r6, 0x50
/* 803D6464 003D33A4  38 E0 00 5C */	li r7, 0x5c
/* 803D6468 003D33A8  4B FF A6 69 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D646C 003D33AC  7F C5 F3 78 */	mr r5, r30
/* 803D6470 003D33B0  38 7F 07 E8 */	addi r3, r31, 0x7e8
/* 803D6474 003D33B4  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6478 003D33B8  38 C0 00 50 */	li r6, 0x50
/* 803D647C 003D33BC  38 E0 00 5A */	li r7, 0x5a
/* 803D6480 003D33C0  4B FF A6 51 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6484 003D33C4  7F C5 F3 78 */	mr r5, r30
/* 803D6488 003D33C8  38 7F 08 24 */	addi r3, r31, 0x824
/* 803D648C 003D33CC  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D6490 003D33D0  38 C0 00 8A */	li r6, 0x8a
/* 803D6494 003D33D4  38 E0 00 92 */	li r7, 0x92
/* 803D6498 003D33D8  4B FF A6 39 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D649C 003D33DC  7F C5 F3 78 */	mr r5, r30
/* 803D64A0 003D33E0  38 7F 08 60 */	addi r3, r31, 0x860
/* 803D64A4 003D33E4  38 9D 01 4C */	addi r4, r29, 0x14c
/* 803D64A8 003D33E8  38 C0 01 B6 */	li r6, 0x1b6
/* 803D64AC 003D33EC  38 E0 01 D4 */	li r7, 0x1d4
/* 803D64B0 003D33F0  4B FF A6 21 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D64B4 003D33F4  7F C5 F3 78 */	mr r5, r30
/* 803D64B8 003D33F8  38 7F 01 1C */	addi r3, r31, 0x11c
/* 803D64BC 003D33FC  38 9D 01 5C */	addi r4, r29, 0x15c
/* 803D64C0 003D3400  38 C0 00 00 */	li r6, 0
/* 803D64C4 003D3404  38 E0 00 50 */	li r7, 0x50
/* 803D64C8 003D3408  4B FF A6 09 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D64CC 003D340C  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D64D0 003D3410  7F C5 F3 78 */	mr r5, r30
/* 803D64D4 003D3414  38 7F 01 58 */	addi r3, r31, 0x158
/* 803D64D8 003D3418  38 9D 01 6C */	addi r4, r29, 0x16c
/* 803D64DC 003D341C  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D64E0 003D3420  38 C0 00 00 */	li r6, 0
/* 803D64E4 003D3424  4B FF A5 ED */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D64E8 003D3428  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D64EC 003D342C  7F C5 F3 78 */	mr r5, r30
/* 803D64F0 003D3430  38 7F 01 94 */	addi r3, r31, 0x194
/* 803D64F4 003D3434  38 9D 01 6C */	addi r4, r29, 0x16c
/* 803D64F8 003D3438  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D64FC 003D343C  38 C0 00 00 */	li r6, 0
/* 803D6500 003D3440  4B FF A5 D1 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6504 003D3444  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D6508 003D3448  7F C5 F3 78 */	mr r5, r30
/* 803D650C 003D344C  38 7F 01 D0 */	addi r3, r31, 0x1d0
/* 803D6510 003D3450  38 9D 01 6C */	addi r4, r29, 0x16c
/* 803D6514 003D3454  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D6518 003D3458  38 C0 00 00 */	li r6, 0
/* 803D651C 003D345C  4B FF A5 B5 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6520 003D3460  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D6524 003D3464  7F C5 F3 78 */	mr r5, r30
/* 803D6528 003D3468  38 7F 02 0C */	addi r3, r31, 0x20c
/* 803D652C 003D346C  38 9D 01 6C */	addi r4, r29, 0x16c
/* 803D6530 003D3470  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D6534 003D3474  38 C0 00 00 */	li r6, 0
/* 803D6538 003D3478  4B FF A5 99 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D653C 003D347C  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D6540 003D3480  7F C5 F3 78 */	mr r5, r30
/* 803D6544 003D3484  38 7F 02 48 */	addi r3, r31, 0x248
/* 803D6548 003D3488  38 9D 01 6C */	addi r4, r29, 0x16c
/* 803D654C 003D348C  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D6550 003D3490  38 C0 00 00 */	li r6, 0
/* 803D6554 003D3494  4B FF A5 7D */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6558 003D3498  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D655C 003D349C  7F C5 F3 78 */	mr r5, r30
/* 803D6560 003D34A0  38 7F 02 84 */	addi r3, r31, 0x284
/* 803D6564 003D34A4  38 9D 01 6C */	addi r4, r29, 0x16c
/* 803D6568 003D34A8  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D656C 003D34AC  38 C0 00 00 */	li r6, 0
/* 803D6570 003D34B0  4B FF A5 61 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6574 003D34B4  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D6578 003D34B8  7F C5 F3 78 */	mr r5, r30
/* 803D657C 003D34BC  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 803D6580 003D34C0  38 9D 01 80 */	addi r4, r29, 0x180
/* 803D6584 003D34C4  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D6588 003D34C8  38 C0 00 00 */	li r6, 0
/* 803D658C 003D34CC  4B FF A5 45 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D6590 003D34D0  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D6594 003D34D4  7F C5 F3 78 */	mr r5, r30
/* 803D6598 003D34D8  38 7F 02 FC */	addi r3, r31, 0x2fc
/* 803D659C 003D34DC  38 9D 01 94 */	addi r4, r29, 0x194
/* 803D65A0 003D34E0  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D65A4 003D34E4  38 C0 00 00 */	li r6, 0
/* 803D65A8 003D34E8  4B FF A5 29 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D65AC 003D34EC  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D65B0 003D34F0  7F C5 F3 78 */	mr r5, r30
/* 803D65B4 003D34F4  38 7F 03 38 */	addi r3, r31, 0x338
/* 803D65B8 003D34F8  38 9D 01 A4 */	addi r4, r29, 0x1a4
/* 803D65BC 003D34FC  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D65C0 003D3500  38 C0 00 00 */	li r6, 0
/* 803D65C4 003D3504  4B FF A5 0D */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D65C8 003D3508  3C C0 00 02 */	lis r6, 0x0001869F@ha
/* 803D65CC 003D350C  7F C5 F3 78 */	mr r5, r30
/* 803D65D0 003D3510  38 7F 03 74 */	addi r3, r31, 0x374
/* 803D65D4 003D3514  38 9D 01 B8 */	addi r4, r29, 0x1b8
/* 803D65D8 003D3518  38 E6 86 9F */	addi r7, r6, 0x0001869F@l
/* 803D65DC 003D351C  38 C0 00 00 */	li r6, 0
/* 803D65E0 003D3520  4B FF A4 F1 */	bl loadAnm__Q23ebi19E2DCallBack_AnmBaseFPcP10JKRArchivell
/* 803D65E4 003D3524  3B 60 00 00 */	li r27, 0
/* 803D65E8 003D3528  7F FA FB 78 */	mr r26, r31
.L_803D65EC:
/* 803D65EC 003D352C  80 7A 01 8C */	lwz r3, 0x18c(r26)
/* 803D65F0 003D3530  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 803D65F4 003D3534  81 83 00 00 */	lwz r12, 0(r3)
/* 803D65F8 003D3538  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D65FC 003D353C  7D 89 03 A6 */	mtctr r12
/* 803D6600 003D3540  4E 80 04 21 */	bctrl 
/* 803D6604 003D3544  80 7A 02 40 */	lwz r3, 0x240(r26)
/* 803D6608 003D3548  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 803D660C 003D354C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6610 003D3550  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D6614 003D3554  7D 89 03 A6 */	mtctr r12
/* 803D6618 003D3558  4E 80 04 21 */	bctrl 
/* 803D661C 003D355C  3B 7B 00 01 */	addi r27, r27, 1
/* 803D6620 003D3560  3B 5A 00 3C */	addi r26, r26, 0x3c
/* 803D6624 003D3564  2C 1B 00 03 */	cmpwi r27, 3
/* 803D6628 003D3568  41 80 FF C4 */	blt .L_803D65EC
/* 803D662C 003D356C  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803D6630 003D3570  38 80 00 01 */	li r4, 1
/* 803D6634 003D3574  4B FF 3D B1 */	bl E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
/* 803D6638 003D3578  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803D663C 003D357C  38 80 00 00 */	li r4, 0
/* 803D6640 003D3580  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6644 003D3584  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D6648 003D3588  7D 89 03 A6 */	mtctr r12
/* 803D664C 003D358C  4E 80 04 21 */	bctrl 
/* 803D6650 003D3590  38 00 00 00 */	li r0, 0
/* 803D6654 003D3594  38 7D 01 C8 */	addi r3, r29, 0x1c8
/* 803D6658 003D3598  90 01 00 08 */	stw r0, 8(r1)
/* 803D665C 003D359C  38 80 00 00 */	li r4, 0
/* 803D6660 003D35A0  38 A0 00 00 */	li r5, 0
/* 803D6664 003D35A4  38 C0 00 00 */	li r6, 0
/* 803D6668 003D35A8  38 E0 00 00 */	li r7, 0
/* 803D666C 003D35AC  39 00 00 01 */	li r8, 1
/* 803D6670 003D35B0  39 20 00 00 */	li r9, 0
/* 803D6674 003D35B4  39 40 00 00 */	li r10, 0
/* 803D6678 003D35B8  4B C4 8B 11 */	bl loadToMainRAM__12JKRDvdRipperFPCcPUc15JKRExpandSwitchUlP7JKRHeapQ212JKRDvdRipper15EAllocDirectionUlPiPUl
/* 803D667C 003D35BC  7C 7A 1B 79 */	or. r26, r3, r3
/* 803D6680 003D35C0  40 82 00 18 */	bne .L_803D6698
/* 803D6684 003D35C4  38 7D 00 88 */	addi r3, r29, 0x88
/* 803D6688 003D35C8  38 BD 00 A0 */	addi r5, r29, 0xa0
/* 803D668C 003D35CC  38 80 02 06 */	li r4, 0x206
/* 803D6690 003D35D0  4C C6 31 82 */	crclr 6
/* 803D6694 003D35D4  4B C5 3F AD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D6698:
/* 803D6698 003D35D8  38 60 00 14 */	li r3, 0x14
/* 803D669C 003D35DC  4B C4 D8 09 */	bl __nw__FUl
/* 803D66A0 003D35E0  7C 60 1B 79 */	or. r0, r3, r3
/* 803D66A4 003D35E4  41 82 00 14 */	beq .L_803D66B8
/* 803D66A8 003D35E8  80 AD 88 2C */	lwz r5, sCurrentHeap__7JKRHeap@sda21(r13)
/* 803D66AC 003D35EC  7F 44 D3 78 */	mr r4, r26
/* 803D66B0 003D35F0  4B CC 1E 21 */	bl __ct__18JPAResourceManagerFPCvP7JKRHeap
/* 803D66B4 003D35F4  7C 60 1B 78 */	mr r0, r3
.L_803D66B8:
/* 803D66B8 003D35F8  90 1F 0A F4 */	stw r0, 0xaf4(r31)
/* 803D66BC 003D35FC  38 9D 00 F4 */	addi r4, r29, 0xf4
/* 803D66C0 003D3600  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D66C4 003D3604  48 04 CC A1 */	bl heapStatusEnd__6SystemFPc
/* 803D66C8 003D3608  BB 41 00 48 */	lmw r26, 0x48(r1)
/* 803D66CC 003D360C  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803D66D0 003D3610  7C 08 03 A6 */	mtlr r0
/* 803D66D4 003D3614  38 21 00 60 */	addi r1, r1, 0x60
/* 803D66D8 003D3618  4E 80 00 20 */	blr 
.endfn doSetArchive__Q43ebi6Screen10FileSelect11TMainScreenFP10JKRArchive

.fn doKillScreen__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D66DC 003D361C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D66E0 003D3620  7C 08 02 A6 */	mflr r0
/* 803D66E4 003D3624  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D66E8 003D3628  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D66EC 003D362C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D66F0 003D3630  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803D66F4 003D3634  7C 7D 1B 78 */	mr r29, r3
/* 803D66F8 003D3638  38 7D 09 EC */	addi r3, r29, 0x9ec
/* 803D66FC 003D363C  81 9D 09 EC */	lwz r12, 0x9ec(r29)
/* 803D6700 003D3640  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D6704 003D3644  7D 89 03 A6 */	mtctr r12
/* 803D6708 003D3648  4E 80 04 21 */	bctrl 
/* 803D670C 003D364C  38 7D 0A 24 */	addi r3, r29, 0xa24
/* 803D6710 003D3650  81 9D 0A 24 */	lwz r12, 0xa24(r29)
/* 803D6714 003D3654  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D6718 003D3658  7D 89 03 A6 */	mtctr r12
/* 803D671C 003D365C  4E 80 04 21 */	bctrl 
/* 803D6720 003D3660  38 7D 0A 5C */	addi r3, r29, 0xa5c
/* 803D6724 003D3664  81 9D 0A 5C */	lwz r12, 0xa5c(r29)
/* 803D6728 003D3668  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D672C 003D366C  7D 89 03 A6 */	mtctr r12
/* 803D6730 003D3670  4E 80 04 21 */	bctrl 
/* 803D6734 003D3674  38 7D 0A 70 */	addi r3, r29, 0xa70
/* 803D6738 003D3678  81 9D 0A 70 */	lwz r12, 0xa70(r29)
/* 803D673C 003D367C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D6740 003D3680  7D 89 03 A6 */	mtctr r12
/* 803D6744 003D3684  4E 80 04 21 */	bctrl 
/* 803D6748 003D3688  3B C0 00 00 */	li r30, 0
/* 803D674C 003D368C  7F BF EB 78 */	mr r31, r29
.L_803D6750:
/* 803D6750 003D3690  80 7F 0A 84 */	lwz r3, 0xa84(r31)
/* 803D6754 003D3694  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6758 003D3698  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D675C 003D369C  7D 89 03 A6 */	mtctr r12
/* 803D6760 003D36A0  4E 80 04 21 */	bctrl 
/* 803D6764 003D36A4  80 7F 0A 90 */	lwz r3, 0xa90(r31)
/* 803D6768 003D36A8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D676C 003D36AC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D6770 003D36B0  7D 89 03 A6 */	mtctr r12
/* 803D6774 003D36B4  4E 80 04 21 */	bctrl 
/* 803D6778 003D36B8  3B DE 00 01 */	addi r30, r30, 1
/* 803D677C 003D36BC  3B FF 00 04 */	addi r31, r31, 4
/* 803D6780 003D36C0  2C 1E 00 03 */	cmpwi r30, 3
/* 803D6784 003D36C4  41 80 FF CC */	blt .L_803D6750
/* 803D6788 003D36C8  38 7D 0A 9C */	addi r3, r29, 0xa9c
/* 803D678C 003D36CC  81 9D 0A 9C */	lwz r12, 0xa9c(r29)
/* 803D6790 003D36D0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D6794 003D36D4  7D 89 03 A6 */	mtctr r12
/* 803D6798 003D36D8  4E 80 04 21 */	bctrl 
/* 803D679C 003D36DC  38 7D 0A B0 */	addi r3, r29, 0xab0
/* 803D67A0 003D36E0  81 9D 0A B0 */	lwz r12, 0xab0(r29)
/* 803D67A4 003D36E4  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803D67A8 003D36E8  7D 89 03 A6 */	mtctr r12
/* 803D67AC 003D36EC  4E 80 04 21 */	bctrl 
/* 803D67B0 003D36F0  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 803D67B4 003D36F4  4B FE 2D D5 */	bl clearSceneResourceManager__14TParticle2dMgrFv
/* 803D67B8 003D36F8  38 00 00 00 */	li r0, 0
/* 803D67BC 003D36FC  98 1D 0A F8 */	stb r0, 0xaf8(r29)
/* 803D67C0 003D3700  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D67C4 003D3704  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D67C8 003D3708  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D67CC 003D370C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803D67D0 003D3710  7C 08 03 A6 */	mtlr r0
/* 803D67D4 003D3714  38 21 00 20 */	addi r1, r1, 0x20
/* 803D67D8 003D3718  4E 80 00 20 */	blr 
.endfn doKillScreen__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn doOpenScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen7ArgOpen, global
/* 803D67DC 003D371C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D67E0 003D3720  7C 08 02 A6 */	mflr r0
/* 803D67E4 003D3724  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D67E8 003D3728  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D67EC 003D372C  7C 7F 1B 78 */	mr r31, r3
/* 803D67F0 003D3730  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D67F4 003D3734  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803D67F8 003D3738  80 03 0A F4 */	lwz r0, 0xaf4(r3)
/* 803D67FC 003D373C  28 00 00 00 */	cmplwi r0, 0
/* 803D6800 003D3740  40 82 00 20 */	bne .L_803D6820
/* 803D6804 003D3744  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D6808 003D3748  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D680C 003D374C  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D6810 003D3750  38 80 02 31 */	li r4, 0x231
/* 803D6814 003D3754  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D6818 003D3758  4C C6 31 82 */	crclr 6
/* 803D681C 003D375C  4B C5 3E 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D6820:
/* 803D6820 003D3760  80 6D 9A 08 */	lwz r3, particle2dMgr@sda21(r13)
/* 803D6824 003D3764  80 9F 0A F4 */	lwz r4, 0xaf4(r31)
/* 803D6828 003D3768  4B FE 2D 11 */	bl setSceneResourceManager__14TParticle2dMgrFP18JPAResourceManager
/* 803D682C 003D376C  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D6830 003D3770  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6834 003D3774  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 803D6838 003D3778  7D 89 03 A6 */	mtctr r12
/* 803D683C 003D377C  4E 80 04 21 */	bctrl 
/* 803D6840 003D3780  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D6844 003D3784  38 7F 00 E0 */	addi r3, r31, 0xe0
/* 803D6848 003D3788  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D684C 003D378C  38 80 00 00 */	li r4, 0
/* 803D6850 003D3790  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D6854 003D3794  38 A0 00 01 */	li r5, 1
/* 803D6858 003D3798  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D685C 003D379C  4B FF A3 3D */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D6860 003D37A0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D6864 003D37A4  38 7F 01 1C */	addi r3, r31, 0x11c
/* 803D6868 003D37A8  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D686C 003D37AC  38 80 00 00 */	li r4, 0
/* 803D6870 003D37B0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D6874 003D37B4  38 A0 00 01 */	li r5, 1
/* 803D6878 003D37B8  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D687C 003D37BC  4B FF A3 1D */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D6880 003D37C0  3B A0 00 00 */	li r29, 0
/* 803D6884 003D37C4  7F FE FB 78 */	mr r30, r31
.L_803D6888:
/* 803D6888 003D37C8  38 7E 01 58 */	addi r3, r30, 0x158
/* 803D688C 003D37CC  4B FF A5 B5 */	bl setRandFrame__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D6890 003D37D0  38 7E 02 0C */	addi r3, r30, 0x20c
/* 803D6894 003D37D4  4B FF A5 AD */	bl setRandFrame__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D6898 003D37D8  3B BD 00 01 */	addi r29, r29, 1
/* 803D689C 003D37DC  3B DE 00 3C */	addi r30, r30, 0x3c
/* 803D68A0 003D37E0  2C 1D 00 03 */	cmpwi r29, 3
/* 803D68A4 003D37E4  41 80 FF E4 */	blt .L_803D6888
/* 803D68A8 003D37E8  C0 22 17 D0 */	lfs f1, lbl_8051FB30@sda21(r2)
/* 803D68AC 003D37EC  38 7F 01 58 */	addi r3, r31, 0x158
/* 803D68B0 003D37F0  38 80 00 02 */	li r4, 2
/* 803D68B4 003D37F4  38 A0 00 00 */	li r5, 0
/* 803D68B8 003D37F8  4B FF A2 E1 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D68BC 003D37FC  C0 22 17 D4 */	lfs f1, lbl_8051FB34@sda21(r2)
/* 803D68C0 003D3800  38 7F 01 94 */	addi r3, r31, 0x194
/* 803D68C4 003D3804  38 80 00 02 */	li r4, 2
/* 803D68C8 003D3808  38 A0 00 00 */	li r5, 0
/* 803D68CC 003D380C  4B FF A2 CD */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D68D0 003D3810  C0 22 17 D8 */	lfs f1, lbl_8051FB38@sda21(r2)
/* 803D68D4 003D3814  38 7F 01 D0 */	addi r3, r31, 0x1d0
/* 803D68D8 003D3818  38 80 00 02 */	li r4, 2
/* 803D68DC 003D381C  38 A0 00 00 */	li r5, 0
/* 803D68E0 003D3820  4B FF A2 B9 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D68E4 003D3824  C0 22 17 D0 */	lfs f1, lbl_8051FB30@sda21(r2)
/* 803D68E8 003D3828  38 7F 02 0C */	addi r3, r31, 0x20c
/* 803D68EC 003D382C  38 80 00 02 */	li r4, 2
/* 803D68F0 003D3830  38 A0 00 00 */	li r5, 0
/* 803D68F4 003D3834  4B FF A2 A5 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D68F8 003D3838  C0 22 17 D4 */	lfs f1, lbl_8051FB34@sda21(r2)
/* 803D68FC 003D383C  38 7F 02 48 */	addi r3, r31, 0x248
/* 803D6900 003D3840  38 80 00 02 */	li r4, 2
/* 803D6904 003D3844  38 A0 00 00 */	li r5, 0
/* 803D6908 003D3848  4B FF A2 91 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D690C 003D384C  C0 22 17 D8 */	lfs f1, lbl_8051FB38@sda21(r2)
/* 803D6910 003D3850  38 7F 02 84 */	addi r3, r31, 0x284
/* 803D6914 003D3854  38 80 00 02 */	li r4, 2
/* 803D6918 003D3858  38 A0 00 00 */	li r5, 0
/* 803D691C 003D385C  4B FF A2 7D */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D6920 003D3860  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D6924 003D3864  38 7F 02 C0 */	addi r3, r31, 0x2c0
/* 803D6928 003D3868  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D692C 003D386C  38 80 00 02 */	li r4, 2
/* 803D6930 003D3870  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D6934 003D3874  38 A0 00 01 */	li r5, 1
/* 803D6938 003D3878  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D693C 003D387C  4B FF A2 5D */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D6940 003D3880  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D6944 003D3884  38 7F 02 FC */	addi r3, r31, 0x2fc
/* 803D6948 003D3888  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D694C 003D388C  38 80 00 02 */	li r4, 2
/* 803D6950 003D3890  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D6954 003D3894  38 A0 00 01 */	li r5, 1
/* 803D6958 003D3898  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D695C 003D389C  4B FF A2 3D */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D6960 003D38A0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D6964 003D38A4  38 7F 03 38 */	addi r3, r31, 0x338
/* 803D6968 003D38A8  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D696C 003D38AC  38 80 00 02 */	li r4, 2
/* 803D6970 003D38B0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D6974 003D38B4  38 A0 00 01 */	li r5, 1
/* 803D6978 003D38B8  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D697C 003D38BC  4B FF A2 1D */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D6980 003D38C0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D6984 003D38C4  38 7F 03 74 */	addi r3, r31, 0x374
/* 803D6988 003D38C8  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D698C 003D38CC  38 80 00 02 */	li r4, 2
/* 803D6990 003D38D0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D6994 003D38D4  38 A0 00 01 */	li r5, 1
/* 803D6998 003D38D8  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D699C 003D38DC  4B FF A1 FD */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D69A0 003D38E0  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D69A4 003D38E4  C0 22 16 98 */	lfs f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
/* 803D69A8 003D38E8  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D69AC 003D38EC  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D69B0 003D38F0  4B CE B1 9D */	bl __cvt_fp2unsigned
/* 803D69B4 003D38F4  90 7F 0B E0 */	stw r3, 0xbe0(r31)
/* 803D69B8 003D38F8  38 00 00 01 */	li r0, 1
/* 803D69BC 003D38FC  7F FE FB 78 */	mr r30, r31
/* 803D69C0 003D3900  3B A0 00 00 */	li r29, 0
/* 803D69C4 003D3904  90 7F 0B E4 */	stw r3, 0xbe4(r31)
/* 803D69C8 003D3908  90 1F 0B DC */	stw r0, 0xbdc(r31)
.L_803D69CC:
/* 803D69CC 003D390C  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 803D69D0 003D3910  38 80 00 FF */	li r4, 0xff
/* 803D69D4 003D3914  81 83 00 00 */	lwz r12, 0(r3)
/* 803D69D8 003D3918  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D69DC 003D391C  7D 89 03 A6 */	mtctr r12
/* 803D69E0 003D3920  4E 80 04 21 */	bctrl 
/* 803D69E4 003D3924  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 803D69E8 003D3928  38 80 00 FF */	li r4, 0xff
/* 803D69EC 003D392C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D69F0 003D3930  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D69F4 003D3934  7D 89 03 A6 */	mtctr r12
/* 803D69F8 003D3938  4E 80 04 21 */	bctrl 
/* 803D69FC 003D393C  3B BD 00 01 */	addi r29, r29, 1
/* 803D6A00 003D3940  3B DE 00 04 */	addi r30, r30, 4
/* 803D6A04 003D3944  2C 1D 00 03 */	cmpwi r29, 3
/* 803D6A08 003D3948  41 80 FF C4 */	blt .L_803D69CC
/* 803D6A0C 003D394C  38 00 00 00 */	li r0, 0
/* 803D6A10 003D3950  7F E3 FB 78 */	mr r3, r31
/* 803D6A14 003D3954  98 1F 0B A4 */	stb r0, 0xba4(r31)
/* 803D6A18 003D3958  98 1F 0B B4 */	stb r0, 0xbb4(r31)
/* 803D6A1C 003D395C  48 00 24 61 */	bl initDataBalls___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D6A20 003D3960  7F E3 FB 78 */	mr r3, r31
/* 803D6A24 003D3964  38 80 00 1E */	li r4, 0x1e
/* 803D6A28 003D3968  48 00 2C 7D */	bl setIconColorAlpha___Q43ebi6Screen10FileSelect11TMainScreenFUc
/* 803D6A2C 003D396C  38 00 00 00 */	li r0, 0
/* 803D6A30 003D3970  98 1F 0A FC */	stb r0, 0xafc(r31)
/* 803D6A34 003D3974  98 1F 0A FD */	stb r0, 0xafd(r31)
/* 803D6A38 003D3978  98 1F 0A FE */	stb r0, 0xafe(r31)
/* 803D6A3C 003D397C  98 1F 0A FF */	stb r0, 0xaff(r31)
/* 803D6A40 003D3980  98 1F 0A F8 */	stb r0, 0xaf8(r31)
/* 803D6A44 003D3984  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D6A48 003D3988  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D6A4C 003D398C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803D6A50 003D3990  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D6A54 003D3994  7C 08 03 A6 */	mtlr r0
/* 803D6A58 003D3998  38 21 00 20 */	addi r1, r1, 0x20
/* 803D6A5C 003D399C  4E 80 00 20 */	blr 
.endfn doOpenScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen7ArgOpen

.fn doInitWaitState__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D6A60 003D39A0  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803D6A64 003D39A4  7C 08 02 A6 */	mflr r0
/* 803D6A68 003D39A8  90 01 00 54 */	stw r0, 0x54(r1)
/* 803D6A6C 003D39AC  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803D6A70 003D39B0  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803D6A74 003D39B4  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803D6A78 003D39B8  93 81 00 40 */	stw r28, 0x40(r1)
/* 803D6A7C 003D39BC  7C 7C 1B 78 */	mr r28, r3
/* 803D6A80 003D39C0  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803D6A84 003D39C4  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6A88 003D39C8  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 803D6A8C 003D39CC  7D 89 03 A6 */	mtctr r12
/* 803D6A90 003D39D0  4E 80 04 21 */	bctrl 
/* 803D6A94 003D39D4  38 7C 00 E0 */	addi r3, r28, 0xe0
/* 803D6A98 003D39D8  4B FF A3 1D */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D6A9C 003D39DC  38 7C 01 1C */	addi r3, r28, 0x11c
/* 803D6AA0 003D39E0  4B FF A3 15 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D6AA4 003D39E4  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D6AA8 003D39E8  38 7C 07 AC */	addi r3, r28, 0x7ac
/* 803D6AAC 003D39EC  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D6AB0 003D39F0  38 80 00 00 */	li r4, 0
/* 803D6AB4 003D39F4  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D6AB8 003D39F8  38 A0 00 01 */	li r5, 1
/* 803D6ABC 003D39FC  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D6AC0 003D3A00  4B FF A0 D9 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D6AC4 003D3A04  3B C0 00 00 */	li r30, 0
/* 803D6AC8 003D3A08  7F 9F E3 78 */	mr r31, r28
.L_803D6ACC:
/* 803D6ACC 003D3A0C  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 803D6AD0 003D3A10  38 80 00 FF */	li r4, 0xff
/* 803D6AD4 003D3A14  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6AD8 003D3A18  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D6ADC 003D3A1C  7D 89 03 A6 */	mtctr r12
/* 803D6AE0 003D3A20  4E 80 04 21 */	bctrl 
/* 803D6AE4 003D3A24  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 803D6AE8 003D3A28  38 80 00 FF */	li r4, 0xff
/* 803D6AEC 003D3A2C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6AF0 003D3A30  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D6AF4 003D3A34  7D 89 03 A6 */	mtctr r12
/* 803D6AF8 003D3A38  4E 80 04 21 */	bctrl 
/* 803D6AFC 003D3A3C  3B DE 00 01 */	addi r30, r30, 1
/* 803D6B00 003D3A40  3B FF 00 04 */	addi r31, r31, 4
/* 803D6B04 003D3A44  2C 1E 00 03 */	cmpwi r30, 3
/* 803D6B08 003D3A48  41 80 FF C4 */	blt .L_803D6ACC
/* 803D6B0C 003D3A4C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D6B10 003D3A50  C0 22 17 D0 */	lfs f1, lbl_8051FB30@sda21(r2)
/* 803D6B14 003D3A54  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D6B18 003D3A58  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D6B1C 003D3A5C  4B CE B0 31 */	bl __cvt_fp2unsigned
/* 803D6B20 003D3A60  90 7C 0B E8 */	stw r3, 0xbe8(r28)
/* 803D6B24 003D3A64  3C 80 80 4C */	lis r4, __vt__Q25efx2d3Arg@ha
/* 803D6B28 003D3A68  7F 9E E3 78 */	mr r30, r28
/* 803D6B2C 003D3A6C  3B A0 00 00 */	li r29, 0
/* 803D6B30 003D3A70  90 7C 0B EC */	stw r3, 0xbec(r28)
/* 803D6B34 003D3A74  3B E4 15 14 */	addi r31, r4, __vt__Q25efx2d3Arg@l
.L_803D6B38:
/* 803D6B38 003D3A78  7F 84 E3 78 */	mr r4, r28
/* 803D6B3C 003D3A7C  7F A5 EB 78 */	mr r5, r29
/* 803D6B40 003D3A80  38 61 00 08 */	addi r3, r1, 8
/* 803D6B44 003D3A84  48 00 28 D5 */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D6B48 003D3A88  80 01 00 08 */	lwz r0, 8(r1)
/* 803D6B4C 003D3A8C  38 61 00 18 */	addi r3, r1, 0x18
/* 803D6B50 003D3A90  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D6B54 003D3A94  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 803D6B58 003D3A98  4B FF 41 A1 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D6B5C 003D3A9C  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803D6B60 003D3AA0  38 81 00 28 */	addi r4, r1, 0x28
/* 803D6B64 003D3AA4  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803D6B68 003D3AA8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803D6B6C 003D3AAC  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803D6B70 003D3AB0  80 61 00 20 */	lwz r3, 0x20(r1)
/* 803D6B74 003D3AB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D6B78 003D3AB8  90 61 00 10 */	stw r3, 0x10(r1)
/* 803D6B7C 003D3ABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D6B80 003D3AC0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803D6B84 003D3AC4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803D6B88 003D3AC8  93 E1 00 30 */	stw r31, 0x30(r1)
/* 803D6B8C 003D3ACC  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 803D6B90 003D3AD0  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803D6B94 003D3AD4  80 7E 0A 84 */	lwz r3, 0xa84(r30)
/* 803D6B98 003D3AD8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6B9C 003D3ADC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D6BA0 003D3AE0  7D 89 03 A6 */	mtctr r12
/* 803D6BA4 003D3AE4  4E 80 04 21 */	bctrl 
/* 803D6BA8 003D3AE8  80 7E 0A 84 */	lwz r3, 0xa84(r30)
/* 803D6BAC 003D3AEC  38 81 00 0C */	addi r4, r1, 0xc
/* 803D6BB0 003D3AF0  4B FE 2F B9 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D6BB4 003D3AF4  80 7E 0A 90 */	lwz r3, 0xa90(r30)
/* 803D6BB8 003D3AF8  38 81 00 28 */	addi r4, r1, 0x28
/* 803D6BBC 003D3AFC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6BC0 003D3B00  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D6BC4 003D3B04  7D 89 03 A6 */	mtctr r12
/* 803D6BC8 003D3B08  4E 80 04 21 */	bctrl 
/* 803D6BCC 003D3B0C  80 7E 0A 90 */	lwz r3, 0xa90(r30)
/* 803D6BD0 003D3B10  38 81 00 0C */	addi r4, r1, 0xc
/* 803D6BD4 003D3B14  4B FE 2F 95 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D6BD8 003D3B18  3B BD 00 01 */	addi r29, r29, 1
/* 803D6BDC 003D3B1C  3B DE 00 04 */	addi r30, r30, 4
/* 803D6BE0 003D3B20  2C 1D 00 03 */	cmpwi r29, 3
/* 803D6BE4 003D3B24  41 80 FF 54 */	blt .L_803D6B38
/* 803D6BE8 003D3B28  38 00 00 00 */	li r0, 0
/* 803D6BEC 003D3B2C  90 1C 0B DC */	stw r0, 0xbdc(r28)
/* 803D6BF0 003D3B30  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803D6BF4 003D3B34  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803D6BF8 003D3B38  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803D6BFC 003D3B3C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803D6C00 003D3B40  83 81 00 40 */	lwz r28, 0x40(r1)
/* 803D6C04 003D3B44  7C 08 03 A6 */	mtlr r0
/* 803D6C08 003D3B48  38 21 00 50 */	addi r1, r1, 0x50
/* 803D6C0C 003D3B4C  4E 80 00 20 */	blr 
.endfn doInitWaitState__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn doCloseScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen8ArgClose, global
/* 803D6C10 003D3B50  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D6C14 003D3B54  7C 08 02 A6 */	mflr r0
/* 803D6C18 003D3B58  C0 22 16 98 */	lfs f1, kFadeTime__Q23ebi8E2DFader@sda21(r2)
/* 803D6C1C 003D3B5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D6C20 003D3B60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D6C24 003D3B64  7C 7F 1B 78 */	mr r31, r3
/* 803D6C28 003D3B68  93 C1 00 08 */	stw r30, 8(r1)
/* 803D6C2C 003D3B6C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D6C30 003D3B70  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803D6C34 003D3B74  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D6C38 003D3B78  4B CE AF 15 */	bl __cvt_fp2unsigned
/* 803D6C3C 003D3B7C  90 7F 0B E0 */	stw r3, 0xbe0(r31)
/* 803D6C40 003D3B80  38 00 00 02 */	li r0, 2
/* 803D6C44 003D3B84  3B C0 00 00 */	li r30, 0
/* 803D6C48 003D3B88  90 7F 0B E4 */	stw r3, 0xbe4(r31)
/* 803D6C4C 003D3B8C  90 1F 0B DC */	stw r0, 0xbdc(r31)
.L_803D6C50:
/* 803D6C50 003D3B90  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 803D6C54 003D3B94  38 80 00 00 */	li r4, 0
/* 803D6C58 003D3B98  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6C5C 003D3B9C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D6C60 003D3BA0  7D 89 03 A6 */	mtctr r12
/* 803D6C64 003D3BA4  4E 80 04 21 */	bctrl 
/* 803D6C68 003D3BA8  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 803D6C6C 003D3BAC  38 80 00 00 */	li r4, 0
/* 803D6C70 003D3BB0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6C74 003D3BB4  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D6C78 003D3BB8  7D 89 03 A6 */	mtctr r12
/* 803D6C7C 003D3BBC  4E 80 04 21 */	bctrl 
/* 803D6C80 003D3BC0  3B DE 00 01 */	addi r30, r30, 1
/* 803D6C84 003D3BC4  3B FF 00 04 */	addi r31, r31, 4
/* 803D6C88 003D3BC8  2C 1E 00 03 */	cmpwi r30, 3
/* 803D6C8C 003D3BCC  41 80 FF C4 */	blt .L_803D6C50
/* 803D6C90 003D3BD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D6C94 003D3BD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D6C98 003D3BD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D6C9C 003D3BDC  7C 08 03 A6 */	mtlr r0
/* 803D6CA0 003D3BE0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D6CA4 003D3BE4  4E 80 00 20 */	blr 
.endfn doCloseScreen__Q43ebi6Screen10FileSelect11TMainScreenFPQ33ebi6Screen8ArgClose

.fn doUpdateStateOpen__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D6CA8 003D3BE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D6CAC 003D3BEC  7C 08 02 A6 */	mflr r0
/* 803D6CB0 003D3BF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D6CB4 003D3BF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D6CB8 003D3BF8  7C 7F 1B 78 */	mr r31, r3
/* 803D6CBC 003D3BFC  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803D6CC0 003D3C00  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6CC4 003D3C04  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D6CC8 003D3C08  7D 89 03 A6 */	mtctr r12
/* 803D6CCC 003D3C0C  4E 80 04 21 */	bctrl 
/* 803D6CD0 003D3C10  80 1F 0B DC */	lwz r0, 0xbdc(r31)
/* 803D6CD4 003D3C14  2C 00 00 00 */	cmpwi r0, 0
/* 803D6CD8 003D3C18  41 82 00 18 */	beq .L_803D6CF0
/* 803D6CDC 003D3C1C  80 7F 0B E0 */	lwz r3, 0xbe0(r31)
/* 803D6CE0 003D3C20  28 03 00 00 */	cmplwi r3, 0
/* 803D6CE4 003D3C24  41 82 00 0C */	beq .L_803D6CF0
/* 803D6CE8 003D3C28  38 03 FF FF */	addi r0, r3, -1
/* 803D6CEC 003D3C2C  90 1F 0B E0 */	stw r0, 0xbe0(r31)
.L_803D6CF0:
/* 803D6CF0 003D3C30  38 7F 00 E0 */	addi r3, r31, 0xe0
/* 803D6CF4 003D3C34  4B FF A2 BD */	bl isFinish__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D6CF8 003D3C38  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D6CFC 003D3C3C  41 82 00 1C */	beq .L_803D6D18
/* 803D6D00 003D3C40  38 7F 01 1C */	addi r3, r31, 0x11c
/* 803D6D04 003D3C44  4B FF A2 AD */	bl isFinish__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D6D08 003D3C48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803D6D0C 003D3C4C  41 82 00 0C */	beq .L_803D6D18
/* 803D6D10 003D3C50  38 60 00 01 */	li r3, 1
/* 803D6D14 003D3C54  48 00 00 08 */	b .L_803D6D1C
.L_803D6D18:
/* 803D6D18 003D3C58  38 60 00 00 */	li r3, 0
.L_803D6D1C:
/* 803D6D1C 003D3C5C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D6D20 003D3C60  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D6D24 003D3C64  7C 08 03 A6 */	mtlr r0
/* 803D6D28 003D3C68  38 21 00 10 */	addi r1, r1, 0x10
/* 803D6D2C 003D3C6C  4E 80 00 20 */	blr 
.endfn doUpdateStateOpen__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn doUpdateStateWait__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D6D30 003D3C70  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803D6D34 003D3C74  7C 08 02 A6 */	mflr r0
/* 803D6D38 003D3C78  90 01 00 74 */	stw r0, 0x74(r1)
/* 803D6D3C 003D3C7C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803D6D40 003D3C80  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803D6D44 003D3C84  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803D6D48 003D3C88  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803D6D4C 003D3C8C  93 A1 00 54 */	stw r29, 0x54(r1)
/* 803D6D50 003D3C90  93 81 00 50 */	stw r28, 0x50(r1)
/* 803D6D54 003D3C94  7C 7F 1B 78 */	mr r31, r3
/* 803D6D58 003D3C98  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803D6D5C 003D3C9C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6D60 003D3CA0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D6D64 003D3CA4  7D 89 03 A6 */	mtctr r12
/* 803D6D68 003D3CA8  4E 80 04 21 */	bctrl 
/* 803D6D6C 003D3CAC  38 7F 09 EC */	addi r3, r31, 0x9ec
/* 803D6D70 003D3CB0  4B FE D1 19 */	bl update__Q23ebi12TYesNoCursorFv
/* 803D6D74 003D3CB4  38 7F 0A 24 */	addi r3, r31, 0xa24
/* 803D6D78 003D3CB8  4B FE D1 11 */	bl update__Q23ebi12TYesNoCursorFv
/* 803D6D7C 003D3CBC  80 1F 0B DC */	lwz r0, 0xbdc(r31)
/* 803D6D80 003D3CC0  2C 00 00 00 */	cmpwi r0, 0
/* 803D6D84 003D3CC4  41 82 00 18 */	beq .L_803D6D9C
/* 803D6D88 003D3CC8  80 7F 0B E0 */	lwz r3, 0xbe0(r31)
/* 803D6D8C 003D3CCC  28 03 00 00 */	cmplwi r3, 0
/* 803D6D90 003D3CD0  41 82 00 0C */	beq .L_803D6D9C
/* 803D6D94 003D3CD4  38 03 FF FF */	addi r0, r3, -1
/* 803D6D98 003D3CD8  90 1F 0B E0 */	stw r0, 0xbe0(r31)
.L_803D6D9C:
/* 803D6D9C 003D3CDC  80 7F 0B E8 */	lwz r3, 0xbe8(r31)
/* 803D6DA0 003D3CE0  28 03 00 00 */	cmplwi r3, 0
/* 803D6DA4 003D3CE4  41 82 00 0C */	beq .L_803D6DB0
/* 803D6DA8 003D3CE8  38 03 FF FF */	addi r0, r3, -1
/* 803D6DAC 003D3CEC  90 1F 0B E8 */	stw r0, 0xbe8(r31)
.L_803D6DB0:
/* 803D6DB0 003D3CF0  80 1F 0B 9C */	lwz r0, 0xb9c(r31)
/* 803D6DB4 003D3CF4  80 9F 00 1C */	lwz r4, 0x1c(r31)
/* 803D6DB8 003D3CF8  1C 60 00 34 */	mulli r3, r0, 0x34
/* 803D6DBC 003D3CFC  3B A4 00 80 */	addi r29, r4, 0x80
/* 803D6DC0 003D3D00  38 63 0B 00 */	addi r3, r3, 0xb00
/* 803D6DC4 003D3D04  7C 7F 1A 14 */	add r3, r31, r3
/* 803D6DC8 003D3D08  88 03 00 00 */	lbz r0, 0(r3)
/* 803D6DCC 003D3D0C  28 00 00 00 */	cmplwi r0, 0
/* 803D6DD0 003D3D10  40 82 00 10 */	bne .L_803D6DE0
/* 803D6DD4 003D3D14  88 03 00 01 */	lbz r0, 1(r3)
/* 803D6DD8 003D3D18  28 00 00 00 */	cmplwi r0, 0
/* 803D6DDC 003D3D1C  41 82 00 5C */	beq .L_803D6E38
.L_803D6DE0:
/* 803D6DE0 003D3D20  38 00 00 01 */	li r0, 1
/* 803D6DE4 003D3D24  3C 60 61 74 */	lis r3, 0x61746177@ha
/* 803D6DE8 003D3D28  98 1F 0B A4 */	stb r0, 0xba4(r31)
/* 803D6DEC 003D3D2C  38 00 00 00 */	li r0, 0
/* 803D6DF0 003D3D30  38 C3 61 77 */	addi r6, r3, 0x61746177@l
/* 803D6DF4 003D3D34  38 A0 4E 64 */	li r5, 0x4e64
/* 803D6DF8 003D3D38  98 1F 0B B4 */	stb r0, 0xbb4(r31)
/* 803D6DFC 003D3D3C  80 7F 0B A0 */	lwz r3, 0xba0(r31)
/* 803D6E00 003D3D40  4B FF 35 59 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D6E04 003D3D44  7C 64 1B 78 */	mr r4, r3
/* 803D6E08 003D3D48  7F A3 EB 78 */	mr r3, r29
/* 803D6E0C 003D3D4C  38 84 00 50 */	addi r4, r4, 0x50
/* 803D6E10 003D3D50  4B D1 34 BD */	bl PSMTXCopy
/* 803D6E14 003D3D54  88 1F 0B A4 */	lbz r0, 0xba4(r31)
/* 803D6E18 003D3D58  28 00 00 00 */	cmplwi r0, 0
/* 803D6E1C 003D3D5C  41 82 00 70 */	beq .L_803D6E8C
/* 803D6E20 003D3D60  80 7F 0B A0 */	lwz r3, 0xba0(r31)
/* 803D6E24 003D3D64  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6E28 003D3D68  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D6E2C 003D3D6C  7D 89 03 A6 */	mtctr r12
/* 803D6E30 003D3D70  4E 80 04 21 */	bctrl 
/* 803D6E34 003D3D74  48 00 00 58 */	b .L_803D6E8C
.L_803D6E38:
/* 803D6E38 003D3D78  38 00 00 01 */	li r0, 1
/* 803D6E3C 003D3D7C  3C 60 61 74 */	lis r3, 0x61746177@ha
/* 803D6E40 003D3D80  98 1F 0B B4 */	stb r0, 0xbb4(r31)
/* 803D6E44 003D3D84  38 00 00 00 */	li r0, 0
/* 803D6E48 003D3D88  38 C3 61 77 */	addi r6, r3, 0x61746177@l
/* 803D6E4C 003D3D8C  38 A0 4E 64 */	li r5, 0x4e64
/* 803D6E50 003D3D90  98 1F 0B A4 */	stb r0, 0xba4(r31)
/* 803D6E54 003D3D94  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D6E58 003D3D98  4B FF 35 01 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D6E5C 003D3D9C  7C 64 1B 78 */	mr r4, r3
/* 803D6E60 003D3DA0  7F A3 EB 78 */	mr r3, r29
/* 803D6E64 003D3DA4  38 84 00 50 */	addi r4, r4, 0x50
/* 803D6E68 003D3DA8  4B D1 34 65 */	bl PSMTXCopy
/* 803D6E6C 003D3DAC  88 1F 0B B4 */	lbz r0, 0xbb4(r31)
/* 803D6E70 003D3DB0  28 00 00 00 */	cmplwi r0, 0
/* 803D6E74 003D3DB4  41 82 00 18 */	beq .L_803D6E8C
/* 803D6E78 003D3DB8  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D6E7C 003D3DBC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6E80 003D3DC0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D6E84 003D3DC4  7D 89 03 A6 */	mtctr r12
/* 803D6E88 003D3DC8  4E 80 04 21 */	bctrl 
.L_803D6E8C:
/* 803D6E8C 003D3DCC  C3 E2 17 DC */	lfs f31, lbl_8051FB3C@sda21(r2)
/* 803D6E90 003D3DD0  7F FE FB 78 */	mr r30, r31
/* 803D6E94 003D3DD4  3B A0 00 00 */	li r29, 0
.L_803D6E98:
/* 803D6E98 003D3DD8  80 9F 0B EC */	lwz r4, 0xbec(r31)
/* 803D6E9C 003D3DDC  28 04 00 00 */	cmplwi r4, 0
/* 803D6EA0 003D3DE0  41 82 00 38 */	beq .L_803D6ED8
/* 803D6EA4 003D3DE4  80 7F 0B E8 */	lwz r3, 0xbe8(r31)
/* 803D6EA8 003D3DE8  3C 00 43 30 */	lis r0, 0x4330
/* 803D6EAC 003D3DEC  90 01 00 18 */	stw r0, 0x18(r1)
/* 803D6EB0 003D3DF0  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D6EB4 003D3DF4  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803D6EB8 003D3DF8  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803D6EBC 003D3DFC  90 81 00 24 */	stw r4, 0x24(r1)
/* 803D6EC0 003D3E00  EC 20 10 28 */	fsubs f1, f0, f2
/* 803D6EC4 003D3E04  90 01 00 20 */	stw r0, 0x20(r1)
/* 803D6EC8 003D3E08  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 803D6ECC 003D3E0C  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D6ED0 003D3E10  EC 01 00 24 */	fdivs f0, f1, f0
/* 803D6ED4 003D3E14  48 00 00 08 */	b .L_803D6EDC
.L_803D6ED8:
/* 803D6ED8 003D3E18  C0 02 17 BC */	lfs f0, lbl_8051FB1C@sda21(r2)
.L_803D6EDC:
/* 803D6EDC 003D3E1C  EC 1F 00 32 */	fmuls f0, f31, f0
/* 803D6EE0 003D3E20  80 7E 00 20 */	lwz r3, 0x20(r30)
/* 803D6EE4 003D3E24  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6EE8 003D3E28  FC 00 00 1E */	fctiwz f0, f0
/* 803D6EEC 003D3E2C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D6EF0 003D3E30  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 803D6EF4 003D3E34  80 81 00 2C */	lwz r4, 0x2c(r1)
/* 803D6EF8 003D3E38  7D 89 03 A6 */	mtctr r12
/* 803D6EFC 003D3E3C  4E 80 04 21 */	bctrl 
/* 803D6F00 003D3E40  80 9F 0B EC */	lwz r4, 0xbec(r31)
/* 803D6F04 003D3E44  28 04 00 00 */	cmplwi r4, 0
/* 803D6F08 003D3E48  41 82 00 38 */	beq .L_803D6F40
/* 803D6F0C 003D3E4C  80 7F 0B E8 */	lwz r3, 0xbe8(r31)
/* 803D6F10 003D3E50  3C 00 43 30 */	lis r0, 0x4330
/* 803D6F14 003D3E54  90 01 00 30 */	stw r0, 0x30(r1)
/* 803D6F18 003D3E58  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D6F1C 003D3E5C  90 61 00 34 */	stw r3, 0x34(r1)
/* 803D6F20 003D3E60  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803D6F24 003D3E64  90 81 00 3C */	stw r4, 0x3c(r1)
/* 803D6F28 003D3E68  EC 20 10 28 */	fsubs f1, f0, f2
/* 803D6F2C 003D3E6C  90 01 00 38 */	stw r0, 0x38(r1)
/* 803D6F30 003D3E70  C8 01 00 38 */	lfd f0, 0x38(r1)
/* 803D6F34 003D3E74  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D6F38 003D3E78  EC 01 00 24 */	fdivs f0, f1, f0
/* 803D6F3C 003D3E7C  48 00 00 08 */	b .L_803D6F44
.L_803D6F40:
/* 803D6F40 003D3E80  C0 02 17 BC */	lfs f0, lbl_8051FB1C@sda21(r2)
.L_803D6F44:
/* 803D6F44 003D3E84  EC 1F 00 32 */	fmuls f0, f31, f0
/* 803D6F48 003D3E88  80 7E 00 2C */	lwz r3, 0x2c(r30)
/* 803D6F4C 003D3E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D6F50 003D3E90  FC 00 00 1E */	fctiwz f0, f0
/* 803D6F54 003D3E94  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D6F58 003D3E98  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 803D6F5C 003D3E9C  80 81 00 44 */	lwz r4, 0x44(r1)
/* 803D6F60 003D3EA0  7D 89 03 A6 */	mtctr r12
/* 803D6F64 003D3EA4  4E 80 04 21 */	bctrl 
/* 803D6F68 003D3EA8  3B BD 00 01 */	addi r29, r29, 1
/* 803D6F6C 003D3EAC  3B DE 00 04 */	addi r30, r30, 4
/* 803D6F70 003D3EB0  2C 1D 00 03 */	cmpwi r29, 3
/* 803D6F74 003D3EB4  41 80 FF 24 */	blt .L_803D6E98
/* 803D6F78 003D3EB8  7F E3 FB 78 */	mr r3, r31
/* 803D6F7C 003D3EBC  48 00 16 99 */	bl updateMsg___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D6F80 003D3EC0  C3 E2 17 E0 */	lfs f31, lbl_8051FB40@sda21(r2)
/* 803D6F84 003D3EC4  7F FE FB 78 */	mr r30, r31
/* 803D6F88 003D3EC8  7F FD FB 78 */	mr r29, r31
/* 803D6F8C 003D3ECC  3B 80 00 00 */	li r28, 0
.L_803D6F90:
/* 803D6F90 003D3ED0  80 9E 00 20 */	lwz r4, 0x20(r30)
/* 803D6F94 003D3ED4  38 61 00 10 */	addi r3, r1, 0x10
/* 803D6F98 003D3ED8  4B FF 3D 61 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D6F9C 003D3EDC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803D6FA0 003D3EE0  38 61 00 08 */	addi r3, r1, 8
/* 803D6FA4 003D3EE4  D0 1D 0A C4 */	stfs f0, 0xac4(r29)
/* 803D6FA8 003D3EE8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803D6FAC 003D3EEC  D0 1D 0A C8 */	stfs f0, 0xac8(r29)
/* 803D6FB0 003D3EF0  80 9E 00 2C */	lwz r4, 0x2c(r30)
/* 803D6FB4 003D3EF4  4B FF 3D 45 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D6FB8 003D3EF8  C0 01 00 08 */	lfs f0, 8(r1)
/* 803D6FBC 003D3EFC  D0 1D 0A DC */	stfs f0, 0xadc(r29)
/* 803D6FC0 003D3F00  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803D6FC4 003D3F04  D0 1D 0A E0 */	stfs f0, 0xae0(r29)
/* 803D6FC8 003D3F08  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 803D6FCC 003D3F0C  80 7E 0A 84 */	lwz r3, 0xa84(r30)
/* 803D6FD0 003D3F10  C0 04 00 CC */	lfs f0, 0xcc(r4)
/* 803D6FD4 003D3F14  EC 20 F8 24 */	fdivs f1, f0, f31
/* 803D6FD8 003D3F18  4B FE 2B 6D */	bl setGlobalScale__Q25efx2d8TForeverFf
/* 803D6FDC 003D3F1C  80 9E 00 10 */	lwz r4, 0x10(r30)
/* 803D6FE0 003D3F20  80 7E 0A 90 */	lwz r3, 0xa90(r30)
/* 803D6FE4 003D3F24  C0 04 00 CC */	lfs f0, 0xcc(r4)
/* 803D6FE8 003D3F28  EC 20 F8 24 */	fdivs f1, f0, f31
/* 803D6FEC 003D3F2C  4B FE 2B 59 */	bl setGlobalScale__Q25efx2d8TForeverFf
/* 803D6FF0 003D3F30  3B 9C 00 01 */	addi r28, r28, 1
/* 803D6FF4 003D3F34  3B BD 00 08 */	addi r29, r29, 8
/* 803D6FF8 003D3F38  2C 1C 00 03 */	cmpwi r28, 3
/* 803D6FFC 003D3F3C  3B DE 00 04 */	addi r30, r30, 4
/* 803D7000 003D3F40  41 80 FF 90 */	blt .L_803D6F90
/* 803D7004 003D3F44  88 1F 0A F8 */	lbz r0, 0xaf8(r31)
/* 803D7008 003D3F48  28 00 00 00 */	cmplwi r0, 0
/* 803D700C 003D3F4C  41 82 00 14 */	beq .L_803D7020
/* 803D7010 003D3F50  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803D7014 003D3F54  38 80 10 0B */	li r4, 0x100b
/* 803D7018 003D3F58  38 A0 00 00 */	li r5, 0
/* 803D701C 003D3F5C  4B F6 16 15 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
.L_803D7020:
/* 803D7020 003D3F60  38 60 00 00 */	li r3, 0
/* 803D7024 003D3F64  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803D7028 003D3F68  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803D702C 003D3F6C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803D7030 003D3F70  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803D7034 003D3F74  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803D7038 003D3F78  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 803D703C 003D3F7C  83 81 00 50 */	lwz r28, 0x50(r1)
/* 803D7040 003D3F80  7C 08 03 A6 */	mtlr r0
/* 803D7044 003D3F84  38 21 00 70 */	addi r1, r1, 0x70
/* 803D7048 003D3F88  4E 80 00 20 */	blr 
.endfn doUpdateStateWait__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn doUpdateStateClose__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D704C 003D3F8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D7050 003D3F90  7C 08 02 A6 */	mflr r0
/* 803D7054 003D3F94  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D7058 003D3F98  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D705C 003D3F9C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D7060 003D3FA0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803D7064 003D3FA4  7C 7D 1B 78 */	mr r29, r3
/* 803D7068 003D3FA8  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803D706C 003D3FAC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D7070 003D3FB0  81 8C 00 30 */	lwz r12, 0x30(r12)
/* 803D7074 003D3FB4  7D 89 03 A6 */	mtctr r12
/* 803D7078 003D3FB8  4E 80 04 21 */	bctrl 
/* 803D707C 003D3FBC  80 1D 0B DC */	lwz r0, 0xbdc(r29)
/* 803D7080 003D3FC0  2C 00 00 00 */	cmpwi r0, 0
/* 803D7084 003D3FC4  41 82 00 18 */	beq .L_803D709C
/* 803D7088 003D3FC8  80 7D 0B E0 */	lwz r3, 0xbe0(r29)
/* 803D708C 003D3FCC  28 03 00 00 */	cmplwi r3, 0
/* 803D7090 003D3FD0  41 82 00 0C */	beq .L_803D709C
/* 803D7094 003D3FD4  38 03 FF FF */	addi r0, r3, -1
/* 803D7098 003D3FD8  90 1D 0B E0 */	stw r0, 0xbe0(r29)
.L_803D709C:
/* 803D709C 003D3FDC  3B C0 00 00 */	li r30, 0
/* 803D70A0 003D3FE0  7F BF EB 78 */	mr r31, r29
.L_803D70A4:
/* 803D70A4 003D3FE4  80 7F 00 20 */	lwz r3, 0x20(r31)
/* 803D70A8 003D3FE8  38 80 00 00 */	li r4, 0
/* 803D70AC 003D3FEC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D70B0 003D3FF0  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D70B4 003D3FF4  7D 89 03 A6 */	mtctr r12
/* 803D70B8 003D3FF8  4E 80 04 21 */	bctrl 
/* 803D70BC 003D3FFC  80 7F 00 2C */	lwz r3, 0x2c(r31)
/* 803D70C0 003D4000  38 80 00 00 */	li r4, 0
/* 803D70C4 003D4004  81 83 00 00 */	lwz r12, 0(r3)
/* 803D70C8 003D4008  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D70CC 003D400C  7D 89 03 A6 */	mtctr r12
/* 803D70D0 003D4010  4E 80 04 21 */	bctrl 
/* 803D70D4 003D4014  3B DE 00 01 */	addi r30, r30, 1
/* 803D70D8 003D4018  3B FF 00 04 */	addi r31, r31, 4
/* 803D70DC 003D401C  2C 1E 00 03 */	cmpwi r30, 3
/* 803D70E0 003D4020  41 80 FF C4 */	blt .L_803D70A4
/* 803D70E4 003D4024  80 1D 0B E0 */	lwz r0, 0xbe0(r29)
/* 803D70E8 003D4028  28 00 00 00 */	cmplwi r0, 0
/* 803D70EC 003D402C  40 82 00 0C */	bne .L_803D70F8
/* 803D70F0 003D4030  38 60 00 01 */	li r3, 1
/* 803D70F4 003D4034  48 00 00 08 */	b .L_803D70FC
.L_803D70F8:
/* 803D70F8 003D4038  38 60 00 00 */	li r3, 0
.L_803D70FC:
/* 803D70FC 003D403C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D7100 003D4040  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D7104 003D4044  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D7108 003D4048  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803D710C 003D404C  7C 08 03 A6 */	mtlr r0
/* 803D7110 003D4050  38 21 00 20 */	addi r1, r1, 0x20
/* 803D7114 003D4054  4E 80 00 20 */	blr 
.endfn doUpdateStateClose__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn doDraw__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D7118 003D4058  94 21 FA 60 */	stwu r1, -0x5a0(r1)
/* 803D711C 003D405C  7C 08 02 A6 */	mflr r0
/* 803D7120 003D4060  90 01 05 A4 */	stw r0, 0x5a4(r1)
/* 803D7124 003D4064  93 E1 05 9C */	stw r31, 0x59c(r1)
/* 803D7128 003D4068  7C 7F 1B 78 */	mr r31, r3
/* 803D712C 003D406C  93 C1 05 98 */	stw r30, 0x598(r1)
/* 803D7130 003D4070  93 A1 05 94 */	stw r29, 0x594(r1)
/* 803D7134 003D4074  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D7138 003D4078  83 C4 00 24 */	lwz r30, 0x24(r4)
/* 803D713C 003D407C  3B BE 01 90 */	addi r29, r30, 0x190
/* 803D7140 003D4080  81 9D 00 00 */	lwz r12, 0(r29)
/* 803D7144 003D4084  7F A3 EB 78 */	mr r3, r29
/* 803D7148 003D4088  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D714C 003D408C  7D 89 03 A6 */	mtctr r12
/* 803D7150 003D4090  4E 80 04 21 */	bctrl 
/* 803D7154 003D4094  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803D7158 003D4098  7F C4 F3 78 */	mr r4, r30
/* 803D715C 003D409C  7F A5 EB 78 */	mr r5, r29
/* 803D7160 003D40A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D7164 003D40A4  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803D7168 003D40A8  7D 89 03 A6 */	mtctr r12
/* 803D716C 003D40AC  4E 80 04 21 */	bctrl 
/* 803D7170 003D40B0  88 1F 0B A4 */	lbz r0, 0xba4(r31)
/* 803D7174 003D40B4  28 00 00 00 */	cmplwi r0, 0
/* 803D7178 003D40B8  41 82 00 90 */	beq .L_803D7208
/* 803D717C 003D40BC  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D7180 003D40C0  38 61 02 CC */	addi r3, r1, 0x2cc
/* 803D7184 003D40C4  80 84 00 24 */	lwz r4, 0x24(r4)
/* 803D7188 003D40C8  3B C4 01 90 */	addi r30, r4, 0x190
/* 803D718C 003D40CC  48 05 02 39 */	bl __ct__8GraphicsFv
/* 803D7190 003D40D0  80 7F 0B A0 */	lwz r3, 0xba0(r31)
/* 803D7194 003D40D4  7F C5 F3 78 */	mr r5, r30
/* 803D7198 003D40D8  38 81 02 CC */	addi r4, r1, 0x2cc
/* 803D719C 003D40DC  81 83 00 00 */	lwz r12, 0(r3)
/* 803D71A0 003D40E0  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803D71A4 003D40E4  7D 89 03 A6 */	mtctr r12
/* 803D71A8 003D40E8  4E 80 04 21 */	bctrl 
/* 803D71AC 003D40EC  3C 60 80 4E */	lis r3, __vt__8Graphics@ha
/* 803D71B0 003D40F0  34 81 04 5C */	addic. r4, r1, 0x45c
/* 803D71B4 003D40F4  38 03 83 60 */	addi r0, r3, __vt__8Graphics@l
/* 803D71B8 003D40F8  90 01 05 38 */	stw r0, 0x538(r1)
/* 803D71BC 003D40FC  41 82 00 24 */	beq .L_803D71E0
/* 803D71C0 003D4100  3C 60 80 4A */	lis r3, __vt__13J2DPerspGraph@ha
/* 803D71C4 003D4104  28 04 00 00 */	cmplwi r4, 0
/* 803D71C8 003D4108  38 03 06 28 */	addi r0, r3, __vt__13J2DPerspGraph@l
/* 803D71CC 003D410C  90 04 00 00 */	stw r0, 0(r4)
/* 803D71D0 003D4110  41 82 00 10 */	beq .L_803D71E0
/* 803D71D4 003D4114  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 803D71D8 003D4118  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 803D71DC 003D411C  90 04 00 00 */	stw r0, 0(r4)
.L_803D71E0:
/* 803D71E0 003D4120  34 81 03 88 */	addic. r4, r1, 0x388
/* 803D71E4 003D4124  41 82 00 24 */	beq .L_803D7208
/* 803D71E8 003D4128  3C 60 80 4A */	lis r3, __vt__13J2DOrthoGraph@ha
/* 803D71EC 003D412C  28 04 00 00 */	cmplwi r4, 0
/* 803D71F0 003D4130  38 03 06 00 */	addi r0, r3, __vt__13J2DOrthoGraph@l
/* 803D71F4 003D4134  90 04 00 00 */	stw r0, 0(r4)
/* 803D71F8 003D4138  41 82 00 10 */	beq .L_803D7208
/* 803D71FC 003D413C  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 803D7200 003D4140  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 803D7204 003D4144  90 04 00 00 */	stw r0, 0(r4)
.L_803D7208:
/* 803D7208 003D4148  88 1F 0B B4 */	lbz r0, 0xbb4(r31)
/* 803D720C 003D414C  28 00 00 00 */	cmplwi r0, 0
/* 803D7210 003D4150  41 82 00 90 */	beq .L_803D72A0
/* 803D7214 003D4154  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D7218 003D4158  38 61 00 2C */	addi r3, r1, 0x2c
/* 803D721C 003D415C  80 84 00 24 */	lwz r4, 0x24(r4)
/* 803D7220 003D4160  3B C4 01 90 */	addi r30, r4, 0x190
/* 803D7224 003D4164  48 05 01 A1 */	bl __ct__8GraphicsFv
/* 803D7228 003D4168  80 7F 0B A8 */	lwz r3, 0xba8(r31)
/* 803D722C 003D416C  7F C5 F3 78 */	mr r5, r30
/* 803D7230 003D4170  38 81 00 2C */	addi r4, r1, 0x2c
/* 803D7234 003D4174  81 83 00 00 */	lwz r12, 0(r3)
/* 803D7238 003D4178  81 8C 00 9C */	lwz r12, 0x9c(r12)
/* 803D723C 003D417C  7D 89 03 A6 */	mtctr r12
/* 803D7240 003D4180  4E 80 04 21 */	bctrl 
/* 803D7244 003D4184  3C 60 80 4E */	lis r3, __vt__8Graphics@ha
/* 803D7248 003D4188  34 81 01 BC */	addic. r4, r1, 0x1bc
/* 803D724C 003D418C  38 03 83 60 */	addi r0, r3, __vt__8Graphics@l
/* 803D7250 003D4190  90 01 02 98 */	stw r0, 0x298(r1)
/* 803D7254 003D4194  41 82 00 24 */	beq .L_803D7278
/* 803D7258 003D4198  3C 60 80 4A */	lis r3, __vt__13J2DPerspGraph@ha
/* 803D725C 003D419C  28 04 00 00 */	cmplwi r4, 0
/* 803D7260 003D41A0  38 03 06 28 */	addi r0, r3, __vt__13J2DPerspGraph@l
/* 803D7264 003D41A4  90 04 00 00 */	stw r0, 0(r4)
/* 803D7268 003D41A8  41 82 00 10 */	beq .L_803D7278
/* 803D726C 003D41AC  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 803D7270 003D41B0  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 803D7274 003D41B4  90 04 00 00 */	stw r0, 0(r4)
.L_803D7278:
/* 803D7278 003D41B8  34 81 00 E8 */	addic. r4, r1, 0xe8
/* 803D727C 003D41BC  41 82 00 24 */	beq .L_803D72A0
/* 803D7280 003D41C0  3C 60 80 4A */	lis r3, __vt__13J2DOrthoGraph@ha
/* 803D7284 003D41C4  28 04 00 00 */	cmplwi r4, 0
/* 803D7288 003D41C8  38 03 06 00 */	addi r0, r3, __vt__13J2DOrthoGraph@l
/* 803D728C 003D41CC  90 04 00 00 */	stw r0, 0(r4)
/* 803D7290 003D41D0  41 82 00 10 */	beq .L_803D72A0
/* 803D7294 003D41D4  3C 60 80 4A */	lis r3, __vt__14J2DGrafContext@ha
/* 803D7298 003D41D8  38 03 06 50 */	addi r0, r3, __vt__14J2DGrafContext@l
/* 803D729C 003D41DC  90 04 00 00 */	stw r0, 0(r4)
.L_803D72A0:
/* 803D72A0 003D41E0  80 1F 0B DC */	lwz r0, 0xbdc(r31)
/* 803D72A4 003D41E4  2C 00 00 00 */	cmpwi r0, 0
/* 803D72A8 003D41E8  41 82 01 C8 */	beq .L_803D7470
/* 803D72AC 003D41EC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D72B0 003D41F0  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803D72B4 003D41F4  3B C3 01 90 */	addi r30, r3, 0x190
/* 803D72B8 003D41F8  7F C3 F3 78 */	mr r3, r30
/* 803D72BC 003D41FC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D72C0 003D4200  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803D72C4 003D4204  7D 89 03 A6 */	mtctr r12
/* 803D72C8 003D4208  4E 80 04 21 */	bctrl 
/* 803D72CC 003D420C  80 1F 0B DC */	lwz r0, 0xbdc(r31)
/* 803D72D0 003D4210  80 7F 0B D4 */	lwz r3, 0xbd4(r31)
/* 803D72D4 003D4214  2C 00 00 02 */	cmpwi r0, 2
/* 803D72D8 003D4218  90 61 00 18 */	stw r3, 0x18(r1)
/* 803D72DC 003D421C  41 82 00 8C */	beq .L_803D7368
/* 803D72E0 003D4220  40 80 01 04 */	bge .L_803D73E4
/* 803D72E4 003D4224  2C 00 00 01 */	cmpwi r0, 1
/* 803D72E8 003D4228  40 80 00 08 */	bge .L_803D72F0
/* 803D72EC 003D422C  48 00 00 F8 */	b .L_803D73E4
.L_803D72F0:
/* 803D72F0 003D4230  80 9F 0B E4 */	lwz r4, 0xbe4(r31)
/* 803D72F4 003D4234  28 04 00 00 */	cmplwi r4, 0
/* 803D72F8 003D4238  41 82 00 38 */	beq .L_803D7330
/* 803D72FC 003D423C  80 7F 0B E0 */	lwz r3, 0xbe0(r31)
/* 803D7300 003D4240  3C 00 43 30 */	lis r0, 0x4330
/* 803D7304 003D4244  90 01 05 70 */	stw r0, 0x570(r1)
/* 803D7308 003D4248  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D730C 003D424C  90 61 05 74 */	stw r3, 0x574(r1)
/* 803D7310 003D4250  C8 01 05 70 */	lfd f0, 0x570(r1)
/* 803D7314 003D4254  90 81 05 7C */	stw r4, 0x57c(r1)
/* 803D7318 003D4258  EC 20 10 28 */	fsubs f1, f0, f2
/* 803D731C 003D425C  90 01 05 78 */	stw r0, 0x578(r1)
/* 803D7320 003D4260  C8 01 05 78 */	lfd f0, 0x578(r1)
/* 803D7324 003D4264  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D7328 003D4268  EC 41 00 24 */	fdivs f2, f1, f0
/* 803D732C 003D426C  48 00 00 08 */	b .L_803D7334
.L_803D7330:
/* 803D7330 003D4270  C0 42 17 BC */	lfs f2, lbl_8051FB1C@sda21(r2)
.L_803D7334:
/* 803D7334 003D4274  88 7F 0B D8 */	lbz r3, 0xbd8(r31)
/* 803D7338 003D4278  3C 00 43 30 */	lis r0, 0x4330
/* 803D733C 003D427C  90 01 05 80 */	stw r0, 0x580(r1)
/* 803D7340 003D4280  C8 22 17 E8 */	lfd f1, lbl_8051FB48@sda21(r2)
/* 803D7344 003D4284  90 61 05 84 */	stw r3, 0x584(r1)
/* 803D7348 003D4288  C8 01 05 80 */	lfd f0, 0x580(r1)
/* 803D734C 003D428C  EC 00 08 28 */	fsubs f0, f0, f1
/* 803D7350 003D4290  EC 00 00 B2 */	fmuls f0, f0, f2
/* 803D7354 003D4294  FC 00 00 1E */	fctiwz f0, f0
/* 803D7358 003D4298  D8 01 05 88 */	stfd f0, 0x588(r1)
/* 803D735C 003D429C  80 01 05 8C */	lwz r0, 0x58c(r1)
/* 803D7360 003D42A0  98 01 00 1B */	stb r0, 0x1b(r1)
/* 803D7364 003D42A4  48 00 00 80 */	b .L_803D73E4
.L_803D7368:
/* 803D7368 003D42A8  80 9F 0B E4 */	lwz r4, 0xbe4(r31)
/* 803D736C 003D42AC  28 04 00 00 */	cmplwi r4, 0
/* 803D7370 003D42B0  41 82 00 38 */	beq .L_803D73A8
/* 803D7374 003D42B4  80 7F 0B E0 */	lwz r3, 0xbe0(r31)
/* 803D7378 003D42B8  3C 00 43 30 */	lis r0, 0x4330
/* 803D737C 003D42BC  90 01 05 88 */	stw r0, 0x588(r1)
/* 803D7380 003D42C0  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D7384 003D42C4  90 61 05 8C */	stw r3, 0x58c(r1)
/* 803D7388 003D42C8  C8 01 05 88 */	lfd f0, 0x588(r1)
/* 803D738C 003D42CC  90 81 05 84 */	stw r4, 0x584(r1)
/* 803D7390 003D42D0  EC 20 10 28 */	fsubs f1, f0, f2
/* 803D7394 003D42D4  90 01 05 80 */	stw r0, 0x580(r1)
/* 803D7398 003D42D8  C8 01 05 80 */	lfd f0, 0x580(r1)
/* 803D739C 003D42DC  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D73A0 003D42E0  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D73A4 003D42E4  48 00 00 08 */	b .L_803D73AC
.L_803D73A8:
/* 803D73A8 003D42E8  C0 22 17 BC */	lfs f1, lbl_8051FB1C@sda21(r2)
.L_803D73AC:
/* 803D73AC 003D42EC  88 7F 0B D8 */	lbz r3, 0xbd8(r31)
/* 803D73B0 003D42F0  3C 00 43 30 */	lis r0, 0x4330
/* 803D73B4 003D42F4  C0 02 17 C4 */	lfs f0, lbl_8051FB24@sda21(r2)
/* 803D73B8 003D42F8  90 61 05 7C */	stw r3, 0x57c(r1)
/* 803D73BC 003D42FC  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D73C0 003D4300  EC 00 08 28 */	fsubs f0, f0, f1
/* 803D73C4 003D4304  90 01 05 78 */	stw r0, 0x578(r1)
/* 803D73C8 003D4308  C8 21 05 78 */	lfd f1, 0x578(r1)
/* 803D73CC 003D430C  EC 21 10 28 */	fsubs f1, f1, f2
/* 803D73D0 003D4310  EC 01 00 32 */	fmuls f0, f1, f0
/* 803D73D4 003D4314  FC 00 00 1E */	fctiwz f0, f0
/* 803D73D8 003D4318  D8 01 05 70 */	stfd f0, 0x570(r1)
/* 803D73DC 003D431C  80 01 05 74 */	lwz r0, 0x574(r1)
/* 803D73E0 003D4320  98 01 00 1B */	stb r0, 0x1b(r1)
.L_803D73E4:
/* 803D73E4 003D4324  80 01 00 18 */	lwz r0, 0x18(r1)
/* 803D73E8 003D4328  7F C3 F3 78 */	mr r3, r30
/* 803D73EC 003D432C  38 81 00 08 */	addi r4, r1, 8
/* 803D73F0 003D4330  38 A1 00 0C */	addi r5, r1, 0xc
/* 803D73F4 003D4334  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D73F8 003D4338  38 C1 00 10 */	addi r6, r1, 0x10
/* 803D73FC 003D433C  38 E1 00 14 */	addi r7, r1, 0x14
/* 803D7400 003D4340  90 01 00 10 */	stw r0, 0x10(r1)
/* 803D7404 003D4344  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D7408 003D4348  90 01 00 08 */	stw r0, 8(r1)
/* 803D740C 003D434C  4B C5 F2 81 */	bl setColor__14J2DGrafContextFQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColorQ28JUtility6TColor
/* 803D7410 003D4350  48 04 BE 15 */	bl getRenderModeObj__6SystemFv
/* 803D7414 003D4354  A3 E3 00 06 */	lhz r31, 6(r3)
/* 803D7418 003D4358  48 04 BE 0D */	bl getRenderModeObj__6SystemFv
/* 803D741C 003D435C  A0 83 00 04 */	lhz r4, 4(r3)
/* 803D7420 003D4360  3C 00 43 30 */	lis r0, 0x4330
/* 803D7424 003D4364  C0 62 17 BC */	lfs f3, lbl_8051FB1C@sda21(r2)
/* 803D7428 003D4368  7F C3 F3 78 */	mr r3, r30
/* 803D742C 003D436C  90 81 05 8C */	stw r4, 0x58c(r1)
/* 803D7430 003D4370  38 81 00 1C */	addi r4, r1, 0x1c
/* 803D7434 003D4374  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D7438 003D4378  90 01 05 88 */	stw r0, 0x588(r1)
/* 803D743C 003D437C  C8 01 05 88 */	lfd f0, 0x588(r1)
/* 803D7440 003D4380  93 E1 05 84 */	stw r31, 0x584(r1)
/* 803D7444 003D4384  EC 20 10 28 */	fsubs f1, f0, f2
/* 803D7448 003D4388  90 01 05 80 */	stw r0, 0x580(r1)
/* 803D744C 003D438C  C8 01 05 80 */	lfd f0, 0x580(r1)
/* 803D7450 003D4390  EC 23 08 2A */	fadds f1, f3, f1
/* 803D7454 003D4394  D0 61 00 1C */	stfs f3, 0x1c(r1)
/* 803D7458 003D4398  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D745C 003D439C  D0 61 00 20 */	stfs f3, 0x20(r1)
/* 803D7460 003D43A0  EC 03 00 2A */	fadds f0, f3, f0
/* 803D7464 003D43A4  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803D7468 003D43A8  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803D746C 003D43AC  4B C5 F3 69 */	bl "fillBox__14J2DGrafContextFRCQ29JGeometry8TBox2<f>"
.L_803D7470:
/* 803D7470 003D43B0  80 01 05 A4 */	lwz r0, 0x5a4(r1)
/* 803D7474 003D43B4  83 E1 05 9C */	lwz r31, 0x59c(r1)
/* 803D7478 003D43B8  83 C1 05 98 */	lwz r30, 0x598(r1)
/* 803D747C 003D43BC  83 A1 05 94 */	lwz r29, 0x594(r1)
/* 803D7480 003D43C0  7C 08 03 A6 */	mtlr r0
/* 803D7484 003D43C4  38 21 05 A0 */	addi r1, r1, 0x5a0
/* 803D7488 003D43C8  4E 80 00 20 */	blr 
.endfn doDraw__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D748C 003D43CC  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803D7490 003D43D0  7C 08 02 A6 */	mflr r0
/* 803D7494 003D43D4  90 01 00 54 */	stw r0, 0x54(r1)
/* 803D7498 003D43D8  38 00 00 00 */	li r0, 0
/* 803D749C 003D43DC  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 803D74A0 003D43E0  7C 9F 23 79 */	or. r31, r4, r4
/* 803D74A4 003D43E4  7C 7E 1B 78 */	mr r30, r3
/* 803D74A8 003D43E8  41 80 00 10 */	blt .L_803D74B8
/* 803D74AC 003D43EC  2C 1F 00 03 */	cmpwi r31, 3
/* 803D74B0 003D43F0  40 80 00 08 */	bge .L_803D74B8
/* 803D74B4 003D43F4  38 00 00 01 */	li r0, 1
.L_803D74B8:
/* 803D74B8 003D43F8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D74BC 003D43FC  40 82 00 20 */	bne .L_803D74DC
/* 803D74C0 003D4400  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D74C4 003D4404  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D74C8 003D4408  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D74CC 003D440C  38 80 02 F7 */	li r4, 0x2f7
/* 803D74D0 003D4410  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D74D4 003D4414  4C C6 31 82 */	crclr 6
/* 803D74D8 003D4418  4B C5 31 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D74DC:
/* 803D74DC 003D441C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D74E0 003D4420  1C 1F 00 3C */	mulli r0, r31, 0x3c
/* 803D74E4 003D4424  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D74E8 003D4428  38 80 00 00 */	li r4, 0
/* 803D74EC 003D442C  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D74F0 003D4430  38 A0 00 01 */	li r5, 1
/* 803D74F4 003D4434  7F 9E 02 14 */	add r28, r30, r0
/* 803D74F8 003D4438  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D74FC 003D443C  38 7C 03 B0 */	addi r3, r28, 0x3b0
/* 803D7500 003D4440  4B FF 96 99 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D7504 003D4444  38 7C 04 64 */	addi r3, r28, 0x464
/* 803D7508 003D4448  4B FF 98 AD */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D750C 003D444C  38 7C 05 18 */	addi r3, r28, 0x518
/* 803D7510 003D4450  4B FF 98 A5 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D7514 003D4454  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803D7518 003D4458  7F DC F3 78 */	mr r28, r30
/* 803D751C 003D445C  3B A3 15 14 */	addi r29, r3, __vt__Q25efx2d3Arg@l
/* 803D7520 003D4460  3B 60 00 00 */	li r27, 0
.L_803D7524:
/* 803D7524 003D4464  7F C4 F3 78 */	mr r4, r30
/* 803D7528 003D4468  7F 65 DB 78 */	mr r5, r27
/* 803D752C 003D446C  38 61 00 08 */	addi r3, r1, 8
/* 803D7530 003D4470  48 00 1E E9 */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D7534 003D4474  80 01 00 08 */	lwz r0, 8(r1)
/* 803D7538 003D4478  38 61 00 18 */	addi r3, r1, 0x18
/* 803D753C 003D447C  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D7540 003D4480  80 9C 00 20 */	lwz r4, 0x20(r28)
/* 803D7544 003D4484  4B FF 37 B5 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D7548 003D4488  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803D754C 003D448C  38 81 00 28 */	addi r4, r1, 0x28
/* 803D7550 003D4490  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803D7554 003D4494  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803D7558 003D4498  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803D755C 003D449C  80 61 00 20 */	lwz r3, 0x20(r1)
/* 803D7560 003D44A0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D7564 003D44A4  90 61 00 10 */	stw r3, 0x10(r1)
/* 803D7568 003D44A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D756C 003D44AC  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803D7570 003D44B0  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803D7574 003D44B4  93 A1 00 30 */	stw r29, 0x30(r1)
/* 803D7578 003D44B8  D0 21 00 28 */	stfs f1, 0x28(r1)
/* 803D757C 003D44BC  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803D7580 003D44C0  80 7C 0A 84 */	lwz r3, 0xa84(r28)
/* 803D7584 003D44C4  81 83 00 00 */	lwz r12, 0(r3)
/* 803D7588 003D44C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D758C 003D44CC  7D 89 03 A6 */	mtctr r12
/* 803D7590 003D44D0  4E 80 04 21 */	bctrl 
/* 803D7594 003D44D4  80 7C 0A 84 */	lwz r3, 0xa84(r28)
/* 803D7598 003D44D8  38 81 00 0C */	addi r4, r1, 0xc
/* 803D759C 003D44DC  4B FE 25 CD */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D75A0 003D44E0  80 7C 0A 90 */	lwz r3, 0xa90(r28)
/* 803D75A4 003D44E4  38 81 00 28 */	addi r4, r1, 0x28
/* 803D75A8 003D44E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D75AC 003D44EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D75B0 003D44F0  7D 89 03 A6 */	mtctr r12
/* 803D75B4 003D44F4  4E 80 04 21 */	bctrl 
/* 803D75B8 003D44F8  80 7C 0A 90 */	lwz r3, 0xa90(r28)
/* 803D75BC 003D44FC  38 81 00 0C */	addi r4, r1, 0xc
/* 803D75C0 003D4500  4B FE 25 A9 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D75C4 003D4504  3B 7B 00 01 */	addi r27, r27, 1
/* 803D75C8 003D4508  3B 9C 00 04 */	addi r28, r28, 4
/* 803D75CC 003D450C  2C 1B 00 03 */	cmpwi r27, 3
/* 803D75D0 003D4510  41 80 FF 54 */	blt .L_803D7524
/* 803D75D4 003D4514  3B 60 00 00 */	li r27, 0
/* 803D75D8 003D4518  7F DC F3 78 */	mr r28, r30
.L_803D75DC:
/* 803D75DC 003D451C  7C 1F D8 00 */	cmpw r31, r27
/* 803D75E0 003D4520  40 82 00 20 */	bne .L_803D7600
/* 803D75E4 003D4524  80 7C 0A 84 */	lwz r3, 0xa84(r28)
/* 803D75E8 003D4528  38 80 00 FF */	li r4, 0xff
/* 803D75EC 003D452C  4B FE 25 A5 */	bl setGlobalAlpha__Q25efx2d8TForeverFUc
/* 803D75F0 003D4530  80 7C 0A 90 */	lwz r3, 0xa90(r28)
/* 803D75F4 003D4534  38 80 00 FF */	li r4, 0xff
/* 803D75F8 003D4538  4B FE 25 99 */	bl setGlobalAlpha__Q25efx2d8TForeverFUc
/* 803D75FC 003D453C  48 00 00 1C */	b .L_803D7618
.L_803D7600:
/* 803D7600 003D4540  80 7C 0A 84 */	lwz r3, 0xa84(r28)
/* 803D7604 003D4544  38 80 00 50 */	li r4, 0x50
/* 803D7608 003D4548  4B FE 25 89 */	bl setGlobalAlpha__Q25efx2d8TForeverFUc
/* 803D760C 003D454C  80 7C 0A 90 */	lwz r3, 0xa90(r28)
/* 803D7610 003D4550  38 80 00 50 */	li r4, 0x50
/* 803D7614 003D4554  4B FE 25 7D */	bl setGlobalAlpha__Q25efx2d8TForeverFUc
.L_803D7618:
/* 803D7618 003D4558  3B 7B 00 01 */	addi r27, r27, 1
/* 803D761C 003D455C  3B 9C 00 04 */	addi r28, r28, 4
/* 803D7620 003D4560  2C 1B 00 03 */	cmpwi r27, 3
/* 803D7624 003D4564  41 80 FF B8 */	blt .L_803D75DC
/* 803D7628 003D4568  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 803D762C 003D456C  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803D7630 003D4570  7C 08 03 A6 */	mtlr r0
/* 803D7634 003D4574  38 21 00 50 */	addi r1, r1, 0x50
/* 803D7638 003D4578  4E 80 00 20 */	blr 
.endfn inDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn outDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D763C 003D457C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D7640 003D4580  7C 08 02 A6 */	mflr r0
/* 803D7644 003D4584  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D7648 003D4588  38 00 00 00 */	li r0, 0
/* 803D764C 003D458C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D7650 003D4590  7C 9F 23 79 */	or. r31, r4, r4
/* 803D7654 003D4594  93 C1 00 08 */	stw r30, 8(r1)
/* 803D7658 003D4598  7C 7E 1B 78 */	mr r30, r3
/* 803D765C 003D459C  41 80 00 10 */	blt .L_803D766C
/* 803D7660 003D45A0  2C 1F 00 03 */	cmpwi r31, 3
/* 803D7664 003D45A4  40 80 00 08 */	bge .L_803D766C
/* 803D7668 003D45A8  38 00 00 01 */	li r0, 1
.L_803D766C:
/* 803D766C 003D45AC  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D7670 003D45B0  40 82 00 20 */	bne .L_803D7690
/* 803D7674 003D45B4  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D7678 003D45B8  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D767C 003D45BC  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D7680 003D45C0  38 80 03 1C */	li r4, 0x31c
/* 803D7684 003D45C4  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D7688 003D45C8  4C C6 31 82 */	crclr 6
/* 803D768C 003D45CC  4B C5 2F B5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D7690:
/* 803D7690 003D45D0  1C 1F 00 3C */	mulli r0, r31, 0x3c
/* 803D7694 003D45D4  7F FE 02 14 */	add r31, r30, r0
/* 803D7698 003D45D8  38 7F 03 B0 */	addi r3, r31, 0x3b0
/* 803D769C 003D45DC  4B FF 97 19 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D76A0 003D45E0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D76A4 003D45E4  38 7F 04 64 */	addi r3, r31, 0x464
/* 803D76A8 003D45E8  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D76AC 003D45EC  38 80 00 00 */	li r4, 0
/* 803D76B0 003D45F0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D76B4 003D45F4  38 A0 00 01 */	li r5, 1
/* 803D76B8 003D45F8  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D76BC 003D45FC  4B FF 94 DD */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D76C0 003D4600  38 7F 05 18 */	addi r3, r31, 0x518
/* 803D76C4 003D4604  4B FF 96 F1 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D76C8 003D4608  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D76CC 003D460C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D76D0 003D4610  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D76D4 003D4614  7C 08 03 A6 */	mtlr r0
/* 803D76D8 003D4618  38 21 00 10 */	addi r1, r1, 0x10
/* 803D76DC 003D461C  4E 80 00 20 */	blr 
.endfn outDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn decideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D76E0 003D4620  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D76E4 003D4624  7C 08 02 A6 */	mflr r0
/* 803D76E8 003D4628  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D76EC 003D462C  38 00 00 00 */	li r0, 0
/* 803D76F0 003D4630  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D76F4 003D4634  7C 9F 23 79 */	or. r31, r4, r4
/* 803D76F8 003D4638  93 C1 00 08 */	stw r30, 8(r1)
/* 803D76FC 003D463C  7C 7E 1B 78 */	mr r30, r3
/* 803D7700 003D4640  41 80 00 10 */	blt .L_803D7710
/* 803D7704 003D4644  2C 1F 00 03 */	cmpwi r31, 3
/* 803D7708 003D4648  40 80 00 08 */	bge .L_803D7710
/* 803D770C 003D464C  38 00 00 01 */	li r0, 1
.L_803D7710:
/* 803D7710 003D4650  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D7714 003D4654  40 82 00 20 */	bne .L_803D7734
/* 803D7718 003D4658  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D771C 003D465C  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D7720 003D4660  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D7724 003D4664  38 80 03 27 */	li r4, 0x327
/* 803D7728 003D4668  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D772C 003D466C  4C C6 31 82 */	crclr 6
/* 803D7730 003D4670  4B C5 2F 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D7734:
/* 803D7734 003D4674  1C 1F 00 3C */	mulli r0, r31, 0x3c
/* 803D7738 003D4678  7F FE 02 14 */	add r31, r30, r0
/* 803D773C 003D467C  38 7F 03 B0 */	addi r3, r31, 0x3b0
/* 803D7740 003D4680  4B FF 96 75 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D7744 003D4684  38 7F 04 64 */	addi r3, r31, 0x464
/* 803D7748 003D4688  4B FF 96 6D */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D774C 003D468C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D7750 003D4690  38 7F 05 18 */	addi r3, r31, 0x518
/* 803D7754 003D4694  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D7758 003D4698  38 80 00 00 */	li r4, 0
/* 803D775C 003D469C  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D7760 003D46A0  38 A0 00 01 */	li r5, 1
/* 803D7764 003D46A4  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D7768 003D46A8  4B FF 94 31 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D776C 003D46AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D7770 003D46B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D7774 003D46B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D7778 003D46B8  7C 08 03 A6 */	mtlr r0
/* 803D777C 003D46BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803D7780 003D46C0  4E 80 00 20 */	blr 
.endfn decideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn createFiledecide__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D7784 003D46C4  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803D7788 003D46C8  7C 08 02 A6 */	mflr r0
/* 803D778C 003D46CC  90 01 00 54 */	stw r0, 0x54(r1)
/* 803D7790 003D46D0  54 80 10 3A */	slwi r0, r4, 2
/* 803D7794 003D46D4  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803D7798 003D46D8  7C 7F 1B 78 */	mr r31, r3
/* 803D779C 003D46DC  7C 9F 02 14 */	add r4, r31, r0
/* 803D77A0 003D46E0  38 61 00 10 */	addi r3, r1, 0x10
/* 803D77A4 003D46E4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803D77A8 003D46E8  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803D77AC 003D46EC  4B FF 35 4D */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D77B0 003D46F0  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803D77B4 003D46F4  39 20 00 00 */	li r9, 0
/* 803D77B8 003D46F8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803D77BC 003D46FC  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803D77C0 003D4700  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803D77C4 003D4704  38 03 14 F0 */	addi r0, r3, __vt__Q25efx2d7TBaseIF@l
/* 803D77C8 003D4708  3C 60 80 4C */	lis r3, __vt__Q25efx2d5TBase@ha
/* 803D77CC 003D470C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TSimple2@ha
/* 803D77D0 003D4710  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803D77D4 003D4714  3C A0 80 4C */	lis r5, __vt__Q25efx2d3Arg@ha
/* 803D77D8 003D4718  80 C1 00 18 */	lwz r6, 0x18(r1)
/* 803D77DC 003D471C  39 43 14 D8 */	addi r10, r3, __vt__Q25efx2d5TBase@l
/* 803D77E0 003D4720  90 01 00 2C */	stw r0, 0x2c(r1)
/* 803D77E4 003D4724  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect13T2DFiledecide@ha
/* 803D77E8 003D4728  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 803D77EC 003D472C  39 04 74 70 */	addi r8, r4, __vt__Q25efx2d8TSimple2@l
/* 803D77F0 003D4730  90 C1 00 08 */	stw r6, 8(r1)
/* 803D77F4 003D4734  39 65 15 14 */	addi r11, r5, __vt__Q25efx2d3Arg@l
/* 803D77F8 003D4738  38 E0 00 02 */	li r7, 2
/* 803D77FC 003D473C  38 C0 00 03 */	li r6, 3
/* 803D7800 003D4740  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D7804 003D4744  38 A3 8D 74 */	addi r5, r3, __vt__Q35efx2d10FileSelect13T2DFiledecide@l
/* 803D7808 003D4748  C0 21 00 08 */	lfs f1, 8(r1)
/* 803D780C 003D474C  38 00 00 01 */	li r0, 1
/* 803D7810 003D4750  91 41 00 2C */	stw r10, 0x2c(r1)
/* 803D7814 003D4754  38 61 00 2C */	addi r3, r1, 0x2c
/* 803D7818 003D4758  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803D781C 003D475C  38 81 00 20 */	addi r4, r1, 0x20
/* 803D7820 003D4760  99 21 00 30 */	stb r9, 0x30(r1)
/* 803D7824 003D4764  91 01 00 2C */	stw r8, 0x2c(r1)
/* 803D7828 003D4768  91 61 00 28 */	stw r11, 0x28(r1)
/* 803D782C 003D476C  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803D7830 003D4770  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803D7834 003D4774  99 21 00 31 */	stb r9, 0x31(r1)
/* 803D7838 003D4778  B0 E1 00 34 */	sth r7, 0x34(r1)
/* 803D783C 003D477C  B0 C1 00 36 */	sth r6, 0x36(r1)
/* 803D7840 003D4780  91 21 00 38 */	stw r9, 0x38(r1)
/* 803D7844 003D4784  91 21 00 3C */	stw r9, 0x3c(r1)
/* 803D7848 003D4788  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 803D784C 003D478C  98 01 00 30 */	stb r0, 0x30(r1)
/* 803D7850 003D4790  4B FE 20 79 */	bl create__Q25efx2d8TSimple2FPQ25efx2d3Arg
/* 803D7854 003D4794  3B C0 00 00 */	li r30, 0
.L_803D7858:
/* 803D7858 003D4798  80 7F 0A 84 */	lwz r3, 0xa84(r31)
/* 803D785C 003D479C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D7860 003D47A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7864 003D47A4  7D 89 03 A6 */	mtctr r12
/* 803D7868 003D47A8  4E 80 04 21 */	bctrl 
/* 803D786C 003D47AC  80 7F 0A 90 */	lwz r3, 0xa90(r31)
/* 803D7870 003D47B0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D7874 003D47B4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7878 003D47B8  7D 89 03 A6 */	mtctr r12
/* 803D787C 003D47BC  4E 80 04 21 */	bctrl 
/* 803D7880 003D47C0  3B DE 00 01 */	addi r30, r30, 1
/* 803D7884 003D47C4  3B FF 00 04 */	addi r31, r31, 4
/* 803D7888 003D47C8  2C 1E 00 03 */	cmpwi r30, 3
/* 803D788C 003D47CC  41 80 FF CC */	blt .L_803D7858
/* 803D7890 003D47D0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803D7894 003D47D4  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803D7898 003D47D8  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803D789C 003D47DC  7C 08 03 A6 */	mtlr r0
/* 803D78A0 003D47E0  38 21 00 50 */	addi r1, r1, 0x50
/* 803D78A4 003D47E4  4E 80 00 20 */	blr 
.endfn createFiledecide__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn isFinishOutDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D78A8 003D47E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D78AC 003D47EC  7C 08 02 A6 */	mflr r0
/* 803D78B0 003D47F0  1C 84 00 3C */	mulli r4, r4, 0x3c
/* 803D78B4 003D47F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D78B8 003D47F8  7C 60 1B 78 */	mr r0, r3
/* 803D78BC 003D47FC  38 64 04 64 */	addi r3, r4, 0x464
/* 803D78C0 003D4800  7C 60 1A 14 */	add r3, r0, r3
/* 803D78C4 003D4804  4B FF 96 ED */	bl isFinish__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D78C8 003D4808  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D78CC 003D480C  7C 08 03 A6 */	mtlr r0
/* 803D78D0 003D4810  38 21 00 10 */	addi r1, r1, 0x10
/* 803D78D4 003D4814  4E 80 00 20 */	blr 
.endfn isFinishOutDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn isFinishDecideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D78D8 003D4818  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D78DC 003D481C  7C 08 02 A6 */	mflr r0
/* 803D78E0 003D4820  1C 84 00 3C */	mulli r4, r4, 0x3c
/* 803D78E4 003D4824  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D78E8 003D4828  7C 60 1B 78 */	mr r0, r3
/* 803D78EC 003D482C  38 64 05 18 */	addi r3, r4, 0x518
/* 803D78F0 003D4830  7C 60 1A 14 */	add r3, r0, r3
/* 803D78F4 003D4834  4B FF 96 BD */	bl isFinish__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D78F8 003D4838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D78FC 003D483C  7C 08 03 A6 */	mtlr r0
/* 803D7900 003D4840  38 21 00 10 */	addi r1, r1, 0x10
/* 803D7904 003D4844  4E 80 00 20 */	blr 
.endfn isFinishDecideDataBall__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn createCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D7908 003D4848  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D790C 003D484C  7C 08 02 A6 */	mflr r0
/* 803D7910 003D4850  2C 04 00 01 */	cmpwi r4, 1
/* 803D7914 003D4854  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D7918 003D4858  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D791C 003D485C  7C 7F 1B 78 */	mr r31, r3
/* 803D7920 003D4860  41 82 00 2C */	beq .L_803D794C
/* 803D7924 003D4864  40 80 00 10 */	bge .L_803D7934
/* 803D7928 003D4868  2C 04 00 00 */	cmpwi r4, 0
/* 803D792C 003D486C  40 80 00 14 */	bge .L_803D7940
/* 803D7930 003D4870  48 00 00 30 */	b .L_803D7960
.L_803D7934:
/* 803D7934 003D4874  2C 04 00 03 */	cmpwi r4, 3
/* 803D7938 003D4878  40 80 00 28 */	bge .L_803D7960
/* 803D793C 003D487C  48 00 00 1C */	b .L_803D7958
.L_803D7940:
/* 803D7940 003D4880  38 60 00 01 */	li r3, 1
/* 803D7944 003D4884  38 00 00 02 */	li r0, 2
/* 803D7948 003D4888  48 00 00 18 */	b .L_803D7960
.L_803D794C:
/* 803D794C 003D488C  38 60 00 00 */	li r3, 0
/* 803D7950 003D4890  38 00 00 02 */	li r0, 2
/* 803D7954 003D4894  48 00 00 0C */	b .L_803D7960
.L_803D7958:
/* 803D7958 003D4898  38 60 00 00 */	li r3, 0
/* 803D795C 003D489C  38 00 00 01 */	li r0, 1
.L_803D7960:
/* 803D7960 003D48A0  54 00 10 3A */	slwi r0, r0, 2
/* 803D7964 003D48A4  54 63 10 3A */	slwi r3, r3, 2
/* 803D7968 003D48A8  7C DF 02 14 */	add r6, r31, r0
/* 803D796C 003D48AC  C0 02 17 C4 */	lfs f0, lbl_8051FB24@sda21(r2)
/* 803D7970 003D48B0  7C BF 1A 14 */	add r5, r31, r3
/* 803D7974 003D48B4  80 E6 00 80 */	lwz r7, 0x80(r6)
/* 803D7978 003D48B8  80 85 00 80 */	lwz r4, 0x80(r5)
/* 803D797C 003D48BC  38 00 00 01 */	li r0, 1
/* 803D7980 003D48C0  38 7F 09 EC */	addi r3, r31, 0x9ec
/* 803D7984 003D48C4  90 9F 0A 1C */	stw r4, 0xa1c(r31)
/* 803D7988 003D48C8  90 FF 0A 20 */	stw r7, 0xa20(r31)
/* 803D798C 003D48CC  80 C6 00 8C */	lwz r6, 0x8c(r6)
/* 803D7990 003D48D0  80 85 00 8C */	lwz r4, 0x8c(r5)
/* 803D7994 003D48D4  90 9F 0A 54 */	stw r4, 0xa54(r31)
/* 803D7998 003D48D8  90 DF 0A 58 */	stw r6, 0xa58(r31)
/* 803D799C 003D48DC  D0 1F 0A 14 */	stfs f0, 0xa14(r31)
/* 803D79A0 003D48E0  98 1F 0A 18 */	stb r0, 0xa18(r31)
/* 803D79A4 003D48E4  D0 1F 0A 4C */	stfs f0, 0xa4c(r31)
/* 803D79A8 003D48E8  98 1F 0A 50 */	stb r0, 0xa50(r31)
/* 803D79AC 003D48EC  4B FE C4 DD */	bl update__Q23ebi12TYesNoCursorFv
/* 803D79B0 003D48F0  38 7F 0A 24 */	addi r3, r31, 0xa24
/* 803D79B4 003D48F4  4B FE C4 D5 */	bl update__Q23ebi12TYesNoCursorFv
/* 803D79B8 003D48F8  38 7F 09 EC */	addi r3, r31, 0x9ec
/* 803D79BC 003D48FC  38 80 00 00 */	li r4, 0
/* 803D79C0 003D4900  81 9F 09 EC */	lwz r12, 0x9ec(r31)
/* 803D79C4 003D4904  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D79C8 003D4908  7D 89 03 A6 */	mtctr r12
/* 803D79CC 003D490C  4E 80 04 21 */	bctrl 
/* 803D79D0 003D4910  38 7F 0A 24 */	addi r3, r31, 0xa24
/* 803D79D4 003D4914  38 80 00 00 */	li r4, 0
/* 803D79D8 003D4918  81 9F 0A 24 */	lwz r12, 0xa24(r31)
/* 803D79DC 003D491C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D79E0 003D4920  7D 89 03 A6 */	mtctr r12
/* 803D79E4 003D4924  4E 80 04 21 */	bctrl 
/* 803D79E8 003D4928  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D79EC 003D492C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D79F0 003D4930  7C 08 03 A6 */	mtlr r0
/* 803D79F4 003D4934  38 21 00 10 */	addi r1, r1, 0x10
/* 803D79F8 003D4938  4E 80 00 20 */	blr 
.endfn createCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn fadeCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D79FC 003D493C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D7A00 003D4940  7C 08 02 A6 */	mflr r0
/* 803D7A04 003D4944  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D7A08 003D4948  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D7A0C 003D494C  7C 7F 1B 78 */	mr r31, r3
/* 803D7A10 003D4950  38 7F 09 EC */	addi r3, r31, 0x9ec
/* 803D7A14 003D4954  81 9F 09 EC */	lwz r12, 0x9ec(r31)
/* 803D7A18 003D4958  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7A1C 003D495C  7D 89 03 A6 */	mtctr r12
/* 803D7A20 003D4960  4E 80 04 21 */	bctrl 
/* 803D7A24 003D4964  38 7F 0A 24 */	addi r3, r31, 0xa24
/* 803D7A28 003D4968  81 9F 0A 24 */	lwz r12, 0xa24(r31)
/* 803D7A2C 003D496C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7A30 003D4970  7D 89 03 A6 */	mtctr r12
/* 803D7A34 003D4974  4E 80 04 21 */	bctrl 
/* 803D7A38 003D4978  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D7A3C 003D497C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D7A40 003D4980  7C 08 03 A6 */	mtlr r0
/* 803D7A44 003D4984  38 21 00 10 */	addi r1, r1, 0x10
/* 803D7A48 003D4988  4E 80 00 20 */	blr 
.endfn fadeCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn moveLeftCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D7A4C 003D498C  38 00 00 01 */	li r0, 1
/* 803D7A50 003D4990  98 03 0A 18 */	stb r0, 0xa18(r3)
/* 803D7A54 003D4994  98 03 0A 50 */	stb r0, 0xa50(r3)
/* 803D7A58 003D4998  4E 80 00 20 */	blr 
.endfn moveLeftCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn moveRightCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D7A5C 003D499C  38 00 00 00 */	li r0, 0
/* 803D7A60 003D49A0  98 03 0A 18 */	stb r0, 0xa18(r3)
/* 803D7A64 003D49A4  98 03 0A 50 */	stb r0, 0xa50(r3)
/* 803D7A68 003D49A8  4E 80 00 20 */	blr 
.endfn moveRightCopyCursor__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn createFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFll, global
/* 803D7A6C 003D49AC  94 21 FF 40 */	stwu r1, -0xc0(r1)
/* 803D7A70 003D49B0  7C 08 02 A6 */	mflr r0
/* 803D7A74 003D49B4  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 803D7A78 003D49B8  93 E1 00 BC */	stw r31, 0xbc(r1)
/* 803D7A7C 003D49BC  7C 7F 1B 78 */	mr r31, r3
/* 803D7A80 003D49C0  38 61 00 10 */	addi r3, r1, 0x10
/* 803D7A84 003D49C4  93 C1 00 B8 */	stw r30, 0xb8(r1)
/* 803D7A88 003D49C8  7C 9E 23 78 */	mr r30, r4
/* 803D7A8C 003D49CC  7F E4 FB 78 */	mr r4, r31
/* 803D7A90 003D49D0  93 A1 00 B4 */	stw r29, 0xb4(r1)
/* 803D7A94 003D49D4  7C BD 2B 78 */	mr r29, r5
/* 803D7A98 003D49D8  7F C5 F3 78 */	mr r5, r30
/* 803D7A9C 003D49DC  48 00 19 7D */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D7AA0 003D49E0  57 DE 10 3A */	slwi r30, r30, 2
/* 803D7AA4 003D49E4  80 01 00 10 */	lwz r0, 0x10(r1)
/* 803D7AA8 003D49E8  7C 9F F2 14 */	add r4, r31, r30
/* 803D7AAC 003D49EC  38 61 00 50 */	addi r3, r1, 0x50
/* 803D7AB0 003D49F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D7AB4 003D49F4  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803D7AB8 003D49F8  4B FF 32 41 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D7ABC 003D49FC  57 BD 10 3A */	slwi r29, r29, 2
/* 803D7AC0 003D4A00  C0 21 00 50 */	lfs f1, 0x50(r1)
/* 803D7AC4 003D4A04  C0 01 00 54 */	lfs f0, 0x54(r1)
/* 803D7AC8 003D4A08  7C 9F EA 14 */	add r4, r31, r29
/* 803D7ACC 003D4A0C  D0 21 00 70 */	stfs f1, 0x70(r1)
/* 803D7AD0 003D4A10  38 61 00 48 */	addi r3, r1, 0x48
/* 803D7AD4 003D4A14  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803D7AD8 003D4A18  D0 01 00 74 */	stfs f0, 0x74(r1)
/* 803D7ADC 003D4A1C  4B FF 32 1D */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D7AE0 003D4A20  C0 21 00 48 */	lfs f1, 0x48(r1)
/* 803D7AE4 003D4A24  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803D7AE8 003D4A28  C0 01 00 4C */	lfs f0, 0x4c(r1)
/* 803D7AEC 003D4A2C  38 A3 15 14 */	addi r5, r3, __vt__Q25efx2d3Arg@l
/* 803D7AF0 003D4A30  D0 21 00 68 */	stfs f1, 0x68(r1)
/* 803D7AF4 003D4A34  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect11ArgFilecopy@ha
/* 803D7AF8 003D4A38  81 41 00 14 */	lwz r10, 0x14(r1)
/* 803D7AFC 003D4A3C  38 03 8D 68 */	addi r0, r3, __vt__Q35efx2d10FileSelect11ArgFilecopy@l
/* 803D7B00 003D4A40  D0 01 00 6C */	stfs f0, 0x6c(r1)
/* 803D7B04 003D4A44  38 7F 0A 5C */	addi r3, r31, 0xa5c
/* 803D7B08 003D4A48  81 21 00 68 */	lwz r9, 0x68(r1)
/* 803D7B0C 003D4A4C  38 81 00 90 */	addi r4, r1, 0x90
/* 803D7B10 003D4A50  81 01 00 6C */	lwz r8, 0x6c(r1)
/* 803D7B14 003D4A54  80 E1 00 70 */	lwz r7, 0x70(r1)
/* 803D7B18 003D4A58  80 C1 00 74 */	lwz r6, 0x74(r1)
/* 803D7B1C 003D4A5C  91 21 00 40 */	stw r9, 0x40(r1)
/* 803D7B20 003D4A60  91 01 00 44 */	stw r8, 0x44(r1)
/* 803D7B24 003D4A64  C0 21 00 40 */	lfs f1, 0x40(r1)
/* 803D7B28 003D4A68  90 E1 00 20 */	stw r7, 0x20(r1)
/* 803D7B2C 003D4A6C  C0 01 00 44 */	lfs f0, 0x44(r1)
/* 803D7B30 003D4A70  90 C1 00 24 */	stw r6, 0x24(r1)
/* 803D7B34 003D4A74  C0 61 00 20 */	lfs f3, 0x20(r1)
/* 803D7B38 003D4A78  90 A1 00 98 */	stw r5, 0x98(r1)
/* 803D7B3C 003D4A7C  C0 41 00 24 */	lfs f2, 0x24(r1)
/* 803D7B40 003D4A80  D0 61 00 90 */	stfs f3, 0x90(r1)
/* 803D7B44 003D4A84  D0 41 00 94 */	stfs f2, 0x94(r1)
/* 803D7B48 003D4A88  90 01 00 98 */	stw r0, 0x98(r1)
/* 803D7B4C 003D4A8C  D0 21 00 9C */	stfs f1, 0x9c(r1)
/* 803D7B50 003D4A90  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 803D7B54 003D4A94  91 41 00 A4 */	stw r10, 0xa4(r1)
/* 803D7B58 003D4A98  81 9F 0A 5C */	lwz r12, 0xa5c(r31)
/* 803D7B5C 003D4A9C  91 41 00 0C */	stw r10, 0xc(r1)
/* 803D7B60 003D4AA0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D7B64 003D4AA4  7D 89 03 A6 */	mtctr r12
/* 803D7B68 003D4AA8  4E 80 04 21 */	bctrl 
/* 803D7B6C 003D4AAC  7C 9F F2 14 */	add r4, r31, r30
/* 803D7B70 003D4AB0  38 61 00 38 */	addi r3, r1, 0x38
/* 803D7B74 003D4AB4  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 803D7B78 003D4AB8  4B FF 31 81 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D7B7C 003D4ABC  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 803D7B80 003D4AC0  7C 9F EA 14 */	add r4, r31, r29
/* 803D7B84 003D4AC4  C0 01 00 3C */	lfs f0, 0x3c(r1)
/* 803D7B88 003D4AC8  38 61 00 30 */	addi r3, r1, 0x30
/* 803D7B8C 003D4ACC  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 803D7B90 003D4AD0  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 803D7B94 003D4AD4  D0 01 00 64 */	stfs f0, 0x64(r1)
/* 803D7B98 003D4AD8  4B FF 31 61 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D7B9C 003D4ADC  C0 21 00 30 */	lfs f1, 0x30(r1)
/* 803D7BA0 003D4AE0  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803D7BA4 003D4AE4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 803D7BA8 003D4AE8  38 A3 15 14 */	addi r5, r3, __vt__Q25efx2d3Arg@l
/* 803D7BAC 003D4AEC  D0 21 00 58 */	stfs f1, 0x58(r1)
/* 803D7BB0 003D4AF0  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect11ArgFilecopy@ha
/* 803D7BB4 003D4AF4  81 41 00 14 */	lwz r10, 0x14(r1)
/* 803D7BB8 003D4AF8  38 03 8D 68 */	addi r0, r3, __vt__Q35efx2d10FileSelect11ArgFilecopy@l
/* 803D7BBC 003D4AFC  D0 01 00 5C */	stfs f0, 0x5c(r1)
/* 803D7BC0 003D4B00  38 7F 0A 70 */	addi r3, r31, 0xa70
/* 803D7BC4 003D4B04  81 21 00 58 */	lwz r9, 0x58(r1)
/* 803D7BC8 003D4B08  38 81 00 78 */	addi r4, r1, 0x78
/* 803D7BCC 003D4B0C  81 01 00 5C */	lwz r8, 0x5c(r1)
/* 803D7BD0 003D4B10  80 E1 00 60 */	lwz r7, 0x60(r1)
/* 803D7BD4 003D4B14  80 C1 00 64 */	lwz r6, 0x64(r1)
/* 803D7BD8 003D4B18  91 21 00 28 */	stw r9, 0x28(r1)
/* 803D7BDC 003D4B1C  91 01 00 2C */	stw r8, 0x2c(r1)
/* 803D7BE0 003D4B20  C0 21 00 28 */	lfs f1, 0x28(r1)
/* 803D7BE4 003D4B24  90 E1 00 18 */	stw r7, 0x18(r1)
/* 803D7BE8 003D4B28  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 803D7BEC 003D4B2C  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 803D7BF0 003D4B30  C0 61 00 18 */	lfs f3, 0x18(r1)
/* 803D7BF4 003D4B34  90 A1 00 80 */	stw r5, 0x80(r1)
/* 803D7BF8 003D4B38  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803D7BFC 003D4B3C  D0 61 00 78 */	stfs f3, 0x78(r1)
/* 803D7C00 003D4B40  D0 41 00 7C */	stfs f2, 0x7c(r1)
/* 803D7C04 003D4B44  90 01 00 80 */	stw r0, 0x80(r1)
/* 803D7C08 003D4B48  D0 21 00 84 */	stfs f1, 0x84(r1)
/* 803D7C0C 003D4B4C  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 803D7C10 003D4B50  91 41 00 8C */	stw r10, 0x8c(r1)
/* 803D7C14 003D4B54  81 9F 0A 70 */	lwz r12, 0xa70(r31)
/* 803D7C18 003D4B58  91 41 00 08 */	stw r10, 8(r1)
/* 803D7C1C 003D4B5C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D7C20 003D4B60  7D 89 03 A6 */	mtctr r12
/* 803D7C24 003D4B64  4E 80 04 21 */	bctrl 
/* 803D7C28 003D4B68  38 00 00 01 */	li r0, 1
/* 803D7C2C 003D4B6C  98 1F 0A F8 */	stb r0, 0xaf8(r31)
/* 803D7C30 003D4B70  80 01 00 C4 */	lwz r0, 0xc4(r1)
/* 803D7C34 003D4B74  83 E1 00 BC */	lwz r31, 0xbc(r1)
/* 803D7C38 003D4B78  83 C1 00 B8 */	lwz r30, 0xb8(r1)
/* 803D7C3C 003D4B7C  83 A1 00 B4 */	lwz r29, 0xb4(r1)
/* 803D7C40 003D4B80  7C 08 03 A6 */	mtlr r0
/* 803D7C44 003D4B84  38 21 00 C0 */	addi r1, r1, 0xc0
/* 803D7C48 003D4B88  4E 80 00 20 */	blr 
.endfn createFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFll

.fn fadeFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D7C4C 003D4B8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D7C50 003D4B90  7C 08 02 A6 */	mflr r0
/* 803D7C54 003D4B94  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D7C58 003D4B98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D7C5C 003D4B9C  7C 7F 1B 78 */	mr r31, r3
/* 803D7C60 003D4BA0  38 7F 0A 5C */	addi r3, r31, 0xa5c
/* 803D7C64 003D4BA4  81 9F 0A 5C */	lwz r12, 0xa5c(r31)
/* 803D7C68 003D4BA8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7C6C 003D4BAC  7D 89 03 A6 */	mtctr r12
/* 803D7C70 003D4BB0  4E 80 04 21 */	bctrl 
/* 803D7C74 003D4BB4  38 7F 0A 70 */	addi r3, r31, 0xa70
/* 803D7C78 003D4BB8  81 9F 0A 70 */	lwz r12, 0xa70(r31)
/* 803D7C7C 003D4BBC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7C80 003D4BC0  7D 89 03 A6 */	mtctr r12
/* 803D7C84 003D4BC4  4E 80 04 21 */	bctrl 
/* 803D7C88 003D4BC8  38 00 00 00 */	li r0, 0
/* 803D7C8C 003D4BCC  98 1F 0A F8 */	stb r0, 0xaf8(r31)
/* 803D7C90 003D4BD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D7C94 003D4BD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D7C98 003D4BD8  7C 08 03 A6 */	mtlr r0
/* 803D7C9C 003D4BDC  38 21 00 10 */	addi r1, r1, 0x10
/* 803D7CA0 003D4BE0  4E 80 00 20 */	blr 
.endfn fadeFilecopyEffect__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn createFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D7CA4 003D4BE4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803D7CA8 003D4BE8  7C 08 02 A6 */	mflr r0
/* 803D7CAC 003D4BEC  90 01 00 64 */	stw r0, 0x64(r1)
/* 803D7CB0 003D4BF0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803D7CB4 003D4BF4  7C 9F 23 78 */	mr r31, r4
/* 803D7CB8 003D4BF8  7F E5 FB 78 */	mr r5, r31
/* 803D7CBC 003D4BFC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803D7CC0 003D4C00  7C 7E 1B 78 */	mr r30, r3
/* 803D7CC4 003D4C04  7F C4 F3 78 */	mr r4, r30
/* 803D7CC8 003D4C08  38 61 00 08 */	addi r3, r1, 8
/* 803D7CCC 003D4C0C  48 00 17 4D */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D7CD0 003D4C10  57 FF 10 3A */	slwi r31, r31, 2
/* 803D7CD4 003D4C14  38 61 00 24 */	addi r3, r1, 0x24
/* 803D7CD8 003D4C18  7C 9E FA 14 */	add r4, r30, r31
/* 803D7CDC 003D4C1C  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803D7CE0 003D4C20  4B FF 30 19 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D7CE4 003D4C24  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 803D7CE8 003D4C28  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803D7CEC 003D4C2C  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 803D7CF0 003D4C30  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 803D7CF4 003D4C34  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 803D7CF8 003D4C38  38 7E 0A 9C */	addi r3, r30, 0xa9c
/* 803D7CFC 003D4C3C  38 81 00 48 */	addi r4, r1, 0x48
/* 803D7D00 003D4C40  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 803D7D04 003D4C44  80 C1 00 34 */	lwz r6, 0x34(r1)
/* 803D7D08 003D4C48  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 803D7D0C 003D4C4C  90 C1 00 1C */	stw r6, 0x1c(r1)
/* 803D7D10 003D4C50  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803D7D14 003D4C54  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 803D7D18 003D4C58  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 803D7D1C 003D4C5C  90 01 00 50 */	stw r0, 0x50(r1)
/* 803D7D20 003D4C60  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 803D7D24 003D4C64  D0 01 00 4C */	stfs f0, 0x4c(r1)
/* 803D7D28 003D4C68  81 9E 0A 9C */	lwz r12, 0xa9c(r30)
/* 803D7D2C 003D4C6C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D7D30 003D4C70  7D 89 03 A6 */	mtctr r12
/* 803D7D34 003D4C74  4E 80 04 21 */	bctrl 
/* 803D7D38 003D4C78  7C 9E FA 14 */	add r4, r30, r31
/* 803D7D3C 003D4C7C  38 61 00 14 */	addi r3, r1, 0x14
/* 803D7D40 003D4C80  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 803D7D44 003D4C84  4B FF 2F B5 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D7D48 003D4C88  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 803D7D4C 003D4C8C  3C 60 80 4C */	lis r3, __vt__Q25efx2d3Arg@ha
/* 803D7D50 003D4C90  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803D7D54 003D4C94  38 03 15 14 */	addi r0, r3, __vt__Q25efx2d3Arg@l
/* 803D7D58 003D4C98  D0 21 00 2C */	stfs f1, 0x2c(r1)
/* 803D7D5C 003D4C9C  38 7E 0A B0 */	addi r3, r30, 0xab0
/* 803D7D60 003D4CA0  38 81 00 3C */	addi r4, r1, 0x3c
/* 803D7D64 003D4CA4  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 803D7D68 003D4CA8  80 C1 00 2C */	lwz r6, 0x2c(r1)
/* 803D7D6C 003D4CAC  80 A1 00 30 */	lwz r5, 0x30(r1)
/* 803D7D70 003D4CB0  90 C1 00 0C */	stw r6, 0xc(r1)
/* 803D7D74 003D4CB4  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803D7D78 003D4CB8  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803D7D7C 003D4CBC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803D7D80 003D4CC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 803D7D84 003D4CC4  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 803D7D88 003D4CC8  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 803D7D8C 003D4CCC  81 9E 0A B0 */	lwz r12, 0xab0(r30)
/* 803D7D90 003D4CD0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803D7D94 003D4CD4  7D 89 03 A6 */	mtctr r12
/* 803D7D98 003D4CD8  4E 80 04 21 */	bctrl 
/* 803D7D9C 003D4CDC  38 00 00 01 */	li r0, 1
/* 803D7DA0 003D4CE0  98 1E 0A F8 */	stb r0, 0xaf8(r30)
/* 803D7DA4 003D4CE4  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803D7DA8 003D4CE8  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803D7DAC 003D4CEC  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803D7DB0 003D4CF0  7C 08 03 A6 */	mtlr r0
/* 803D7DB4 003D4CF4  38 21 00 60 */	addi r1, r1, 0x60
/* 803D7DB8 003D4CF8  4E 80 00 20 */	blr 
.endfn createFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn fadeFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D7DBC 003D4CFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D7DC0 003D4D00  7C 08 02 A6 */	mflr r0
/* 803D7DC4 003D4D04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D7DC8 003D4D08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D7DCC 003D4D0C  7C 7F 1B 78 */	mr r31, r3
/* 803D7DD0 003D4D10  38 7F 0A 9C */	addi r3, r31, 0xa9c
/* 803D7DD4 003D4D14  81 9F 0A 9C */	lwz r12, 0xa9c(r31)
/* 803D7DD8 003D4D18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7DDC 003D4D1C  7D 89 03 A6 */	mtctr r12
/* 803D7DE0 003D4D20  4E 80 04 21 */	bctrl 
/* 803D7DE4 003D4D24  38 7F 0A B0 */	addi r3, r31, 0xab0
/* 803D7DE8 003D4D28  81 9F 0A B0 */	lwz r12, 0xab0(r31)
/* 803D7DEC 003D4D2C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803D7DF0 003D4D30  7D 89 03 A6 */	mtctr r12
/* 803D7DF4 003D4D34  4E 80 04 21 */	bctrl 
/* 803D7DF8 003D4D38  38 00 00 00 */	li r0, 0
/* 803D7DFC 003D4D3C  98 1F 0A F8 */	stb r0, 0xaf8(r31)
/* 803D7E00 003D4D40  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D7E04 003D4D44  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D7E08 003D4D48  7C 08 03 A6 */	mtlr r0
/* 803D7E0C 003D4D4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D7E10 003D4D50  4E 80 00 20 */	blr 
.endfn fadeFiledeletingEffect__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D7E14 003D4D54  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803D7E18 003D4D58  7C 08 02 A6 */	mflr r0
/* 803D7E1C 003D4D5C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803D7E20 003D4D60  38 00 00 00 */	li r0, 0
/* 803D7E24 003D4D64  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803D7E28 003D4D68  7C 9F 23 79 */	or. r31, r4, r4
/* 803D7E2C 003D4D6C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803D7E30 003D4D70  7C 7E 1B 78 */	mr r30, r3
/* 803D7E34 003D4D74  41 80 00 10 */	blt .L_803D7E44
/* 803D7E38 003D4D78  2C 1F 00 03 */	cmpwi r31, 3
/* 803D7E3C 003D4D7C  40 80 00 08 */	bge .L_803D7E44
/* 803D7E40 003D4D80  38 00 00 01 */	li r0, 1
.L_803D7E44:
/* 803D7E44 003D4D84  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D7E48 003D4D88  40 82 00 20 */	bne .L_803D7E68
/* 803D7E4C 003D4D8C  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D7E50 003D4D90  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D7E54 003D4D94  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D7E58 003D4D98  38 80 03 F0 */	li r4, 0x3f0
/* 803D7E5C 003D4D9C  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D7E60 003D4DA0  4C C6 31 82 */	crclr 6
/* 803D7E64 003D4DA4  4B C5 27 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D7E68:
/* 803D7E68 003D4DA8  93 FE 0B 9C */	stw r31, 0xb9c(r30)
/* 803D7E6C 003D4DAC  83 FE 0B 9C */	lwz r31, 0xb9c(r30)
/* 803D7E70 003D4DB0  1C 7F 00 34 */	mulli r3, r31, 0x34
/* 803D7E74 003D4DB4  39 43 0B 00 */	addi r10, r3, 0xb00
/* 803D7E78 003D4DB8  7D 5E 52 14 */	add r10, r30, r10
/* 803D7E7C 003D4DBC  88 0A 00 00 */	lbz r0, 0(r10)
/* 803D7E80 003D4DC0  28 00 00 00 */	cmplwi r0, 0
/* 803D7E84 003D4DC4  41 82 01 10 */	beq .L_803D7F94
/* 803D7E88 003D4DC8  2C 1F 00 00 */	cmpwi r31, 0
/* 803D7E8C 003D4DCC  38 00 00 00 */	li r0, 0
/* 803D7E90 003D4DD0  41 80 00 10 */	blt .L_803D7EA0
/* 803D7E94 003D4DD4  2C 1F 00 03 */	cmpwi r31, 3
/* 803D7E98 003D4DD8  40 80 00 08 */	bge .L_803D7EA0
/* 803D7E9C 003D4DDC  38 00 00 01 */	li r0, 1
.L_803D7EA0:
/* 803D7EA0 003D4DE0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D7EA4 003D4DE4  40 82 00 20 */	bne .L_803D7EC4
/* 803D7EA8 003D4DE8  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D7EAC 003D4DEC  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D7EB0 003D4DF0  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D7EB4 003D4DF4  38 80 00 39 */	li r4, 0x39
/* 803D7EB8 003D4DF8  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D7EBC 003D4DFC  4C C6 31 82 */	crclr 6
/* 803D7EC0 003D4E00  4B C5 27 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D7EC4:
/* 803D7EC4 003D4E04  3C 80 61 74 */	lis r4, 0x61746131@ha
/* 803D7EC8 003D4E08  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D7ECC 003D4E0C  38 C4 61 31 */	addi r6, r4, 0x61746131@l
/* 803D7ED0 003D4E10  38 A0 50 64 */	li r5, 0x5064
/* 803D7ED4 003D4E14  4B FF 24 85 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D7ED8 003D4E18  90 61 00 14 */	stw r3, 0x14(r1)
/* 803D7EDC 003D4E1C  3C 80 61 74 */	lis r4, 0x61746132@ha
/* 803D7EE0 003D4E20  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D7EE4 003D4E24  38 C4 61 32 */	addi r6, r4, 0x61746132@l
/* 803D7EE8 003D4E28  38 A0 50 64 */	li r5, 0x5064
/* 803D7EEC 003D4E2C  4B FF 24 6D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D7EF0 003D4E30  90 61 00 18 */	stw r3, 0x18(r1)
/* 803D7EF4 003D4E34  3C 80 61 74 */	lis r4, 0x61746133@ha
/* 803D7EF8 003D4E38  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D7EFC 003D4E3C  38 C4 61 33 */	addi r6, r4, 0x61746133@l
/* 803D7F00 003D4E40  38 A0 50 64 */	li r5, 0x5064
/* 803D7F04 003D4E44  4B FF 24 55 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D7F08 003D4E48  80 A1 00 14 */	lwz r5, 0x14(r1)
/* 803D7F0C 003D4E4C  39 40 00 00 */	li r10, 0
/* 803D7F10 003D4E50  3C 80 6E 65 */	lis r4, 0x6E657764@ha
/* 803D7F14 003D4E54  81 21 00 18 */	lwz r9, 0x18(r1)
/* 803D7F18 003D4E58  99 45 00 B0 */	stb r10, 0xb0(r5)
/* 803D7F1C 003D4E5C  57 E0 10 3A */	slwi r0, r31, 2
/* 803D7F20 003D4E60  38 E1 00 14 */	addi r7, r1, 0x14
/* 803D7F24 003D4E64  39 00 00 01 */	li r8, 1
/* 803D7F28 003D4E68  90 61 00 1C */	stw r3, 0x1c(r1)
/* 803D7F2C 003D4E6C  38 C4 77 64 */	addi r6, r4, 0x6E657764@l
/* 803D7F30 003D4E70  38 A0 00 54 */	li r5, 0x54
/* 803D7F34 003D4E74  99 49 00 B0 */	stb r10, 0xb0(r9)
/* 803D7F38 003D4E78  7C 87 00 2E */	lwzx r4, r7, r0
/* 803D7F3C 003D4E7C  99 43 00 B0 */	stb r10, 0xb0(r3)
/* 803D7F40 003D4E80  99 04 00 B0 */	stb r8, 0xb0(r4)
/* 803D7F44 003D4E84  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D7F48 003D4E88  4B FF 24 11 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D7F4C 003D4E8C  3C 80 38 5F */	lis r4, 0x385F3030@ha
/* 803D7F50 003D4E90  3C A0 00 35 */	lis r5, 0x00353530@ha
/* 803D7F54 003D4E94  38 04 30 30 */	addi r0, r4, 0x385F3030@l
/* 803D7F58 003D4E98  3C 80 65 77 */	lis r4, 0x65776473@ha
/* 803D7F5C 003D4E9C  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803D7F60 003D4EA0  38 05 35 30 */	addi r0, r5, 0x00353530@l
/* 803D7F64 003D4EA4  38 C4 64 73 */	addi r6, r4, 0x65776473@l
/* 803D7F68 003D4EA8  38 A0 54 6E */	li r5, 0x546e
/* 803D7F6C 003D4EAC  90 03 00 18 */	stw r0, 0x18(r3)
/* 803D7F70 003D4EB0  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D7F74 003D4EB4  4B FF 23 E5 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D7F78 003D4EB8  3C A0 38 5F */	lis r5, 0x385F3030@ha
/* 803D7F7C 003D4EBC  3C 80 00 35 */	lis r4, 0x00353530@ha
/* 803D7F80 003D4EC0  38 05 30 30 */	addi r0, r5, 0x385F3030@l
/* 803D7F84 003D4EC4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803D7F88 003D4EC8  38 04 35 30 */	addi r0, r4, 0x00353530@l
/* 803D7F8C 003D4ECC  90 03 00 18 */	stw r0, 0x18(r3)
/* 803D7F90 003D4ED0  48 00 01 40 */	b .L_803D80D0
.L_803D7F94:
/* 803D7F94 003D4ED4  88 0A 00 01 */	lbz r0, 1(r10)
/* 803D7F98 003D4ED8  28 00 00 00 */	cmplwi r0, 0
/* 803D7F9C 003D4EDC  41 82 01 10 */	beq .L_803D80AC
/* 803D7FA0 003D4EE0  2C 1F 00 00 */	cmpwi r31, 0
/* 803D7FA4 003D4EE4  38 00 00 00 */	li r0, 0
/* 803D7FA8 003D4EE8  41 80 00 10 */	blt .L_803D7FB8
/* 803D7FAC 003D4EEC  2C 1F 00 03 */	cmpwi r31, 3
/* 803D7FB0 003D4EF0  40 80 00 08 */	bge .L_803D7FB8
/* 803D7FB4 003D4EF4  38 00 00 01 */	li r0, 1
.L_803D7FB8:
/* 803D7FB8 003D4EF8  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D7FBC 003D4EFC  40 82 00 20 */	bne .L_803D7FDC
/* 803D7FC0 003D4F00  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D7FC4 003D4F04  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D7FC8 003D4F08  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D7FCC 003D4F0C  38 80 00 39 */	li r4, 0x39
/* 803D7FD0 003D4F10  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D7FD4 003D4F14  4C C6 31 82 */	crclr 6
/* 803D7FD8 003D4F18  4B C5 26 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D7FDC:
/* 803D7FDC 003D4F1C  3C 80 61 74 */	lis r4, 0x61746131@ha
/* 803D7FE0 003D4F20  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D7FE4 003D4F24  38 C4 61 31 */	addi r6, r4, 0x61746131@l
/* 803D7FE8 003D4F28  38 A0 50 64 */	li r5, 0x5064
/* 803D7FEC 003D4F2C  4B FF 23 6D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D7FF0 003D4F30  90 61 00 08 */	stw r3, 8(r1)
/* 803D7FF4 003D4F34  3C 80 61 74 */	lis r4, 0x61746132@ha
/* 803D7FF8 003D4F38  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D7FFC 003D4F3C  38 C4 61 32 */	addi r6, r4, 0x61746132@l
/* 803D8000 003D4F40  38 A0 50 64 */	li r5, 0x5064
/* 803D8004 003D4F44  4B FF 23 55 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D8008 003D4F48  90 61 00 0C */	stw r3, 0xc(r1)
/* 803D800C 003D4F4C  3C 80 61 74 */	lis r4, 0x61746133@ha
/* 803D8010 003D4F50  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D8014 003D4F54  38 C4 61 33 */	addi r6, r4, 0x61746133@l
/* 803D8018 003D4F58  38 A0 50 64 */	li r5, 0x5064
/* 803D801C 003D4F5C  4B FF 23 3D */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D8020 003D4F60  80 A1 00 08 */	lwz r5, 8(r1)
/* 803D8024 003D4F64  39 40 00 00 */	li r10, 0
/* 803D8028 003D4F68  3C 80 6E 65 */	lis r4, 0x6E657764@ha
/* 803D802C 003D4F6C  81 21 00 0C */	lwz r9, 0xc(r1)
/* 803D8030 003D4F70  99 45 00 B0 */	stb r10, 0xb0(r5)
/* 803D8034 003D4F74  57 E0 10 3A */	slwi r0, r31, 2
/* 803D8038 003D4F78  38 E1 00 08 */	addi r7, r1, 8
/* 803D803C 003D4F7C  39 00 00 01 */	li r8, 1
/* 803D8040 003D4F80  90 61 00 10 */	stw r3, 0x10(r1)
/* 803D8044 003D4F84  38 C4 77 64 */	addi r6, r4, 0x6E657764@l
/* 803D8048 003D4F88  38 A0 00 54 */	li r5, 0x54
/* 803D804C 003D4F8C  99 49 00 B0 */	stb r10, 0xb0(r9)
/* 803D8050 003D4F90  7C 87 00 2E */	lwzx r4, r7, r0
/* 803D8054 003D4F94  99 43 00 B0 */	stb r10, 0xb0(r3)
/* 803D8058 003D4F98  99 04 00 B0 */	stb r8, 0xb0(r4)
/* 803D805C 003D4F9C  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D8060 003D4FA0  4B FF 22 F9 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D8064 003D4FA4  3C 80 34 5F */	lis r4, 0x345F3030@ha
/* 803D8068 003D4FA8  3C A0 00 35 */	lis r5, 0x00353438@ha
/* 803D806C 003D4FAC  38 04 30 30 */	addi r0, r4, 0x345F3030@l
/* 803D8070 003D4FB0  3C 80 65 77 */	lis r4, 0x65776473@ha
/* 803D8074 003D4FB4  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803D8078 003D4FB8  38 05 34 38 */	addi r0, r5, 0x00353438@l
/* 803D807C 003D4FBC  38 C4 64 73 */	addi r6, r4, 0x65776473@l
/* 803D8080 003D4FC0  38 A0 54 6E */	li r5, 0x546e
/* 803D8084 003D4FC4  90 03 00 18 */	stw r0, 0x18(r3)
/* 803D8088 003D4FC8  80 7E 0B A0 */	lwz r3, 0xba0(r30)
/* 803D808C 003D4FCC  4B FF 22 CD */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D8090 003D4FD0  3C A0 34 5F */	lis r5, 0x345F3030@ha
/* 803D8094 003D4FD4  3C 80 00 35 */	lis r4, 0x00353438@ha
/* 803D8098 003D4FD8  38 05 30 30 */	addi r0, r5, 0x345F3030@l
/* 803D809C 003D4FDC  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803D80A0 003D4FE0  38 04 34 38 */	addi r0, r4, 0x00353438@l
/* 803D80A4 003D4FE4  90 03 00 18 */	stw r0, 0x18(r3)
/* 803D80A8 003D4FE8  48 00 00 28 */	b .L_803D80D0
.L_803D80AC:
/* 803D80AC 003D4FEC  80 AA 00 1C */	lwz r5, 0x1c(r10)
/* 803D80B0 003D4FF0  7F E4 FB 78 */	mr r4, r31
/* 803D80B4 003D4FF4  80 CA 00 20 */	lwz r6, 0x20(r10)
/* 803D80B8 003D4FF8  38 7E 0B A8 */	addi r3, r30, 0xba8
/* 803D80BC 003D4FFC  80 EA 00 24 */	lwz r7, 0x24(r10)
/* 803D80C0 003D5000  81 0A 00 28 */	lwz r8, 0x28(r10)
/* 803D80C4 003D5004  81 2A 00 2C */	lwz r9, 0x2c(r10)
/* 803D80C8 003D5008  81 4A 00 30 */	lwz r10, 0x30(r10)
/* 803D80CC 003D500C  4B FF C1 79 */	bl setData__Q43ebi6Screen10FileSelect22TScreenDataWindow_dataFlUlUlUlUlUlUl
.L_803D80D0:
/* 803D80D0 003D5010  80 7E 0A FC */	lwz r3, 0xafc(r30)
/* 803D80D4 003D5014  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 803D80D8 003D5018  40 82 00 3C */	bne .L_803D8114
/* 803D80DC 003D501C  60 60 00 08 */	ori r0, r3, 8
/* 803D80E0 003D5020  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D80E4 003D5024  90 1E 0A FC */	stw r0, 0xafc(r30)
/* 803D80E8 003D5028  38 7E 07 E8 */	addi r3, r30, 0x7e8
/* 803D80EC 003D502C  38 80 00 00 */	li r4, 0
/* 803D80F0 003D5030  38 A0 00 01 */	li r5, 1
/* 803D80F4 003D5034  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 803D80F8 003D5038  C0 06 00 54 */	lfs f0, 0x54(r6)
/* 803D80FC 003D503C  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D8100 003D5040  4B FF 8A 99 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D8104 003D5044  38 7E 08 24 */	addi r3, r30, 0x824
/* 803D8108 003D5048  4B FF 8C AD */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D810C 003D504C  38 7E 08 60 */	addi r3, r30, 0x860
/* 803D8110 003D5050  4B FF 8C A5 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
.L_803D8114:
/* 803D8114 003D5054  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803D8118 003D5058  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803D811C 003D505C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803D8120 003D5060  7C 08 03 A6 */	mtlr r0
/* 803D8124 003D5064  38 21 00 30 */	addi r1, r1, 0x30
/* 803D8128 003D5068  4E 80 00 20 */	blr 
.endfn openDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D812C 003D506C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D8130 003D5070  7C 08 02 A6 */	mflr r0
/* 803D8134 003D5074  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D8138 003D5078  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D813C 003D507C  7C 7F 1B 78 */	mr r31, r3
/* 803D8140 003D5080  80 63 0A FC */	lwz r3, 0xafc(r3)
/* 803D8144 003D5084  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 803D8148 003D5088  41 82 00 3C */	beq .L_803D8184
/* 803D814C 003D508C  54 60 07 76 */	rlwinm r0, r3, 0, 0x1d, 0x1b
/* 803D8150 003D5090  38 7F 07 E8 */	addi r3, r31, 0x7e8
/* 803D8154 003D5094  90 1F 0A FC */	stw r0, 0xafc(r31)
/* 803D8158 003D5098  4B FF 8C 5D */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D815C 003D509C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D8160 003D50A0  38 7F 08 24 */	addi r3, r31, 0x824
/* 803D8164 003D50A4  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D8168 003D50A8  38 80 00 00 */	li r4, 0
/* 803D816C 003D50AC  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D8170 003D50B0  38 A0 00 01 */	li r5, 1
/* 803D8174 003D50B4  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D8178 003D50B8  4B FF 8A 21 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D817C 003D50BC  38 7F 08 60 */	addi r3, r31, 0x860
/* 803D8180 003D50C0  4B FF 8C 35 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
.L_803D8184:
/* 803D8184 003D50C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D8188 003D50C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D818C 003D50CC  7C 08 03 A6 */	mtlr r0
/* 803D8190 003D50D0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D8194 003D50D4  4E 80 00 20 */	blr 
.endfn closeDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn decideDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D8198 003D50D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D819C 003D50DC  7C 08 02 A6 */	mflr r0
/* 803D81A0 003D50E0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D81A4 003D50E4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D81A8 003D50E8  7C 7F 1B 78 */	mr r31, r3
/* 803D81AC 003D50EC  80 63 0A FC */	lwz r3, 0xafc(r3)
/* 803D81B0 003D50F0  54 60 07 39 */	rlwinm. r0, r3, 0, 0x1c, 0x1c
/* 803D81B4 003D50F4  41 82 00 3C */	beq .L_803D81F0
/* 803D81B8 003D50F8  54 60 07 76 */	rlwinm r0, r3, 0, 0x1d, 0x1b
/* 803D81BC 003D50FC  38 7F 07 E8 */	addi r3, r31, 0x7e8
/* 803D81C0 003D5100  90 1F 0A FC */	stw r0, 0xafc(r31)
/* 803D81C4 003D5104  4B FF 8B F1 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D81C8 003D5108  38 7F 08 24 */	addi r3, r31, 0x824
/* 803D81CC 003D510C  4B FF 8B E9 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D81D0 003D5110  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D81D4 003D5114  38 7F 08 60 */	addi r3, r31, 0x860
/* 803D81D8 003D5118  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D81DC 003D511C  38 80 00 00 */	li r4, 0
/* 803D81E0 003D5120  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D81E4 003D5124  38 A0 00 01 */	li r5, 1
/* 803D81E8 003D5128  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D81EC 003D512C  4B FF 89 AD */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
.L_803D81F0:
/* 803D81F0 003D5130  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D81F4 003D5134  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D81F8 003D5138  7C 08 03 A6 */	mtlr r0
/* 803D81FC 003D513C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D8200 003D5140  4E 80 00 20 */	blr 
.endfn decideDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn isFinishCloseDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D8204 003D5144  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D8208 003D5148  7C 08 02 A6 */	mflr r0
/* 803D820C 003D514C  38 63 08 24 */	addi r3, r3, 0x824
/* 803D8210 003D5150  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D8214 003D5154  4B FF 8D 9D */	bl isFinish__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D8218 003D5158  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D821C 003D515C  7C 08 03 A6 */	mtlr r0
/* 803D8220 003D5160  38 21 00 10 */	addi r1, r1, 0x10
/* 803D8224 003D5164  4E 80 00 20 */	blr 
.endfn isFinishCloseDataWindow__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D8228 003D5168  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D822C 003D516C  7C 08 02 A6 */	mflr r0
/* 803D8230 003D5170  C0 22 17 F0 */	lfs f1, lbl_8051FB50@sda21(r2)
/* 803D8234 003D5174  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D8238 003D5178  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D823C 003D517C  7C 7F 1B 78 */	mr r31, r3
/* 803D8240 003D5180  93 C1 00 08 */	stw r30, 8(r1)
/* 803D8244 003D5184  7C 9E 23 78 */	mr r30, r4
/* 803D8248 003D5188  80 03 0A FC */	lwz r0, 0xafc(r3)
/* 803D824C 003D518C  60 00 00 04 */	ori r0, r0, 4
/* 803D8250 003D5190  90 03 0A FC */	stw r0, 0xafc(r3)
/* 803D8254 003D5194  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D8258 003D5198  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D825C 003D519C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D8260 003D51A0  4B CE 98 ED */	bl __cvt_fp2unsigned
/* 803D8264 003D51A4  90 7F 0B F0 */	stw r3, 0xbf0(r31)
/* 803D8268 003D51A8  28 1E 00 0A */	cmplwi r30, 0xa
/* 803D826C 003D51AC  90 7F 0B F4 */	stw r3, 0xbf4(r31)
/* 803D8270 003D51B0  41 81 02 40 */	bgt .L_803D84B0
/* 803D8274 003D51B4  3C 60 80 4F */	lis r3, lbl_804E8D30@ha
/* 803D8278 003D51B8  57 C0 10 3A */	slwi r0, r30, 2
/* 803D827C 003D51BC  38 63 8D 30 */	addi r3, r3, lbl_804E8D30@l
/* 803D8280 003D51C0  7C 03 00 2E */	lwzx r0, r3, r0
/* 803D8284 003D51C4  7C 09 03 A6 */	mtctr r0
/* 803D8288 003D51C8  4E 80 04 20 */	bctr 
.L_803D828C:
/* 803D828C 003D51CC  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D8290 003D51D0  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D8294 003D51D4  38 C3 30 30 */	addi r6, r3, 0x395F3030@l
/* 803D8298 003D51D8  7F E3 FB 78 */	mr r3, r31
/* 803D829C 003D51DC  38 A4 34 37 */	addi r5, r4, 0x00353437@l
/* 803D82A0 003D51E0  7C C8 33 78 */	mr r8, r6
/* 803D82A4 003D51E4  7C CA 33 78 */	mr r10, r6
/* 803D82A8 003D51E8  7C A7 2B 78 */	mr r7, r5
/* 803D82AC 003D51EC  7C A9 2B 78 */	mr r9, r5
/* 803D82B0 003D51F0  48 00 04 A9 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D82B4 003D51F4  48 00 01 FC */	b .L_803D84B0
.L_803D82B8:
/* 803D82B8 003D51F8  3C 60 00 35 */	lis r3, 0x00353438@ha
/* 803D82BC 003D51FC  3C C0 35 5F */	lis r6, 0x355F3030@ha
/* 803D82C0 003D5200  38 A3 34 38 */	addi r5, r3, 0x00353438@l
/* 803D82C4 003D5204  3D 00 36 5F */	lis r8, 0x365F3030@ha
/* 803D82C8 003D5208  3C 80 37 5F */	lis r4, 0x375F3030@ha
/* 803D82CC 003D520C  7F E3 FB 78 */	mr r3, r31
/* 803D82D0 003D5210  7C A7 2B 78 */	mr r7, r5
/* 803D82D4 003D5214  7C A9 2B 78 */	mr r9, r5
/* 803D82D8 003D5218  38 C6 30 30 */	addi r6, r6, 0x355F3030@l
/* 803D82DC 003D521C  39 08 30 30 */	addi r8, r8, 0x365F3030@l
/* 803D82E0 003D5220  39 44 30 30 */	addi r10, r4, 0x375F3030@l
/* 803D82E4 003D5224  48 00 04 75 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D82E8 003D5228  7F E3 FB 78 */	mr r3, r31
/* 803D82EC 003D522C  48 00 05 D1 */	bl inYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D82F0 003D5230  48 00 01 C0 */	b .L_803D84B0
.L_803D82F4:
/* 803D82F4 003D5234  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D82F8 003D5238  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D82FC 003D523C  38 C3 30 30 */	addi r6, r3, 0x395F3030@l
/* 803D8300 003D5240  7F E3 FB 78 */	mr r3, r31
/* 803D8304 003D5244  38 E4 34 37 */	addi r7, r4, 0x00353437@l
/* 803D8308 003D5248  38 A4 34 38 */	addi r5, r4, 0x3438
/* 803D830C 003D524C  7C C8 33 78 */	mr r8, r6
/* 803D8310 003D5250  7C CA 33 78 */	mr r10, r6
/* 803D8314 003D5254  7C E9 3B 78 */	mr r9, r7
/* 803D8318 003D5258  48 00 04 41 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D831C 003D525C  48 00 01 94 */	b .L_803D84B0
.L_803D8320:
/* 803D8320 003D5260  3C 60 00 35 */	lis r3, 0x00353439@ha
/* 803D8324 003D5264  3C C0 32 5F */	lis r6, 0x325F3030@ha
/* 803D8328 003D5268  38 A3 34 39 */	addi r5, r3, 0x00353439@l
/* 803D832C 003D526C  3D 00 33 5F */	lis r8, 0x335F3030@ha
/* 803D8330 003D5270  3C 80 34 5F */	lis r4, 0x345F3030@ha
/* 803D8334 003D5274  7F E3 FB 78 */	mr r3, r31
/* 803D8338 003D5278  7C A7 2B 78 */	mr r7, r5
/* 803D833C 003D527C  7C A9 2B 78 */	mr r9, r5
/* 803D8340 003D5280  38 C6 30 30 */	addi r6, r6, 0x325F3030@l
/* 803D8344 003D5284  39 08 30 30 */	addi r8, r8, 0x335F3030@l
/* 803D8348 003D5288  39 44 30 30 */	addi r10, r4, 0x345F3030@l
/* 803D834C 003D528C  48 00 04 0D */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D8350 003D5290  7F E3 FB 78 */	mr r3, r31
/* 803D8354 003D5294  48 00 05 69 */	bl inYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D8358 003D5298  48 00 01 58 */	b .L_803D84B0
.L_803D835C:
/* 803D835C 003D529C  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D8360 003D52A0  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D8364 003D52A4  39 03 30 30 */	addi r8, r3, 0x395F3030@l
/* 803D8368 003D52A8  3C A0 35 5F */	lis r5, 0x355F3030@ha
/* 803D836C 003D52AC  38 E4 34 37 */	addi r7, r4, 0x00353437@l
/* 803D8370 003D52B0  7F E3 FB 78 */	mr r3, r31
/* 803D8374 003D52B4  7D 0A 43 78 */	mr r10, r8
/* 803D8378 003D52B8  38 C5 30 30 */	addi r6, r5, 0x355F3030@l
/* 803D837C 003D52BC  7C E9 3B 78 */	mr r9, r7
/* 803D8380 003D52C0  38 A4 35 30 */	addi r5, r4, 0x3530
/* 803D8384 003D52C4  48 00 03 D5 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D8388 003D52C8  48 00 01 28 */	b .L_803D84B0
.L_803D838C:
/* 803D838C 003D52CC  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D8390 003D52D0  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D8394 003D52D4  39 03 30 30 */	addi r8, r3, 0x395F3030@l
/* 803D8398 003D52D8  3C A0 38 5F */	lis r5, 0x385F3030@ha
/* 803D839C 003D52DC  38 E4 34 37 */	addi r7, r4, 0x00353437@l
/* 803D83A0 003D52E0  7F E3 FB 78 */	mr r3, r31
/* 803D83A4 003D52E4  7D 0A 43 78 */	mr r10, r8
/* 803D83A8 003D52E8  38 C5 30 30 */	addi r6, r5, 0x385F3030@l
/* 803D83AC 003D52EC  7C E9 3B 78 */	mr r9, r7
/* 803D83B0 003D52F0  38 A4 34 38 */	addi r5, r4, 0x3438
/* 803D83B4 003D52F4  48 00 03 A5 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D83B8 003D52F8  48 00 00 F8 */	b .L_803D84B0
.L_803D83BC:
/* 803D83BC 003D52FC  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D83C0 003D5300  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D83C4 003D5304  39 03 30 30 */	addi r8, r3, 0x395F3030@l
/* 803D83C8 003D5308  3C A0 30 5F */	lis r5, 0x305F3030@ha
/* 803D83CC 003D530C  38 E4 34 37 */	addi r7, r4, 0x00353437@l
/* 803D83D0 003D5310  7F E3 FB 78 */	mr r3, r31
/* 803D83D4 003D5314  7D 0A 43 78 */	mr r10, r8
/* 803D83D8 003D5318  38 C5 30 30 */	addi r6, r5, 0x305F3030@l
/* 803D83DC 003D531C  7C E9 3B 78 */	mr r9, r7
/* 803D83E0 003D5320  38 A4 34 39 */	addi r5, r4, 0x3439
/* 803D83E4 003D5324  48 00 03 75 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D83E8 003D5328  48 00 00 C8 */	b .L_803D84B0
.L_803D83EC:
/* 803D83EC 003D532C  3C 60 00 35 */	lis r3, 0x00353439@ha
/* 803D83F0 003D5330  3C C0 35 5F */	lis r6, 0x355F3030@ha
/* 803D83F4 003D5334  38 A3 34 39 */	addi r5, r3, 0x00353439@l
/* 803D83F8 003D5338  3D 00 36 5F */	lis r8, 0x365F3030@ha
/* 803D83FC 003D533C  3C 80 37 5F */	lis r4, 0x375F3030@ha
/* 803D8400 003D5340  7F E3 FB 78 */	mr r3, r31
/* 803D8404 003D5344  7C A7 2B 78 */	mr r7, r5
/* 803D8408 003D5348  7C A9 2B 78 */	mr r9, r5
/* 803D840C 003D534C  38 C6 30 30 */	addi r6, r6, 0x355F3030@l
/* 803D8410 003D5350  39 08 30 30 */	addi r8, r8, 0x365F3030@l
/* 803D8414 003D5354  39 44 30 30 */	addi r10, r4, 0x375F3030@l
/* 803D8418 003D5358  48 00 03 41 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D841C 003D535C  7F E3 FB 78 */	mr r3, r31
/* 803D8420 003D5360  48 00 04 9D */	bl inYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D8424 003D5364  48 00 00 8C */	b .L_803D84B0
.L_803D8428:
/* 803D8428 003D5368  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D842C 003D536C  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D8430 003D5370  39 03 30 30 */	addi r8, r3, 0x395F3030@l
/* 803D8434 003D5374  3C A0 31 5F */	lis r5, 0x315F3030@ha
/* 803D8438 003D5378  38 E4 34 37 */	addi r7, r4, 0x00353437@l
/* 803D843C 003D537C  7F E3 FB 78 */	mr r3, r31
/* 803D8440 003D5380  7D 0A 43 78 */	mr r10, r8
/* 803D8444 003D5384  38 C5 30 30 */	addi r6, r5, 0x315F3030@l
/* 803D8448 003D5388  7C E9 3B 78 */	mr r9, r7
/* 803D844C 003D538C  38 A4 34 39 */	addi r5, r4, 0x3439
/* 803D8450 003D5390  48 00 03 09 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D8454 003D5394  48 00 00 5C */	b .L_803D84B0
.L_803D8458:
/* 803D8458 003D5398  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D845C 003D539C  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D8460 003D53A0  39 03 30 30 */	addi r8, r3, 0x395F3030@l
/* 803D8464 003D53A4  3C A0 38 5F */	lis r5, 0x385F3030@ha
/* 803D8468 003D53A8  38 E4 34 37 */	addi r7, r4, 0x00353437@l
/* 803D846C 003D53AC  7F E3 FB 78 */	mr r3, r31
/* 803D8470 003D53B0  7D 0A 43 78 */	mr r10, r8
/* 803D8474 003D53B4  38 C5 30 30 */	addi r6, r5, 0x385F3030@l
/* 803D8478 003D53B8  7C E9 3B 78 */	mr r9, r7
/* 803D847C 003D53BC  38 A4 34 39 */	addi r5, r4, 0x3439
/* 803D8480 003D53C0  48 00 02 D9 */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
/* 803D8484 003D53C4  48 00 00 2C */	b .L_803D84B0
.L_803D8488:
/* 803D8488 003D53C8  3C 80 00 35 */	lis r4, 0x00353437@ha
/* 803D848C 003D53CC  3C 60 39 5F */	lis r3, 0x395F3030@ha
/* 803D8490 003D53D0  38 C3 30 30 */	addi r6, r3, 0x395F3030@l
/* 803D8494 003D53D4  7F E3 FB 78 */	mr r3, r31
/* 803D8498 003D53D8  38 E4 34 37 */	addi r7, r4, 0x00353437@l
/* 803D849C 003D53DC  38 A4 34 39 */	addi r5, r4, 0x3439
/* 803D84A0 003D53E0  7C C8 33 78 */	mr r8, r6
/* 803D84A4 003D53E4  7C CA 33 78 */	mr r10, r6
/* 803D84A8 003D53E8  7C E9 3B 78 */	mr r9, r7
/* 803D84AC 003D53EC  48 00 02 AD */	bl setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx
.L_803D84B0:
/* 803D84B0 003D53F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D84B4 003D53F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D84B8 003D53F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D84BC 003D53FC  7C 08 03 A6 */	mtlr r0
/* 803D84C0 003D5400  38 21 00 10 */	addi r1, r1, 0x10
/* 803D84C4 003D5404  4E 80 00 20 */	blr 
.endfn openMSG__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D84C8 003D5408  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D84CC 003D540C  7C 08 02 A6 */	mflr r0
/* 803D84D0 003D5410  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D84D4 003D5414  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D84D8 003D5418  7C 7F 1B 78 */	mr r31, r3
/* 803D84DC 003D541C  80 63 0A FC */	lwz r3, 0xafc(r3)
/* 803D84E0 003D5420  54 60 07 7B */	rlwinm. r0, r3, 0, 0x1d, 0x1d
/* 803D84E4 003D5424  41 82 00 28 */	beq .L_803D850C
/* 803D84E8 003D5428  54 60 07 B8 */	rlwinm r0, r3, 0, 0x1e, 0x1c
/* 803D84EC 003D542C  C0 22 17 F0 */	lfs f1, lbl_8051FB50@sda21(r2)
/* 803D84F0 003D5430  90 1F 0A FC */	stw r0, 0xafc(r31)
/* 803D84F4 003D5434  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 803D84F8 003D5438  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 803D84FC 003D543C  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D8500 003D5440  4B CE 96 4D */	bl __cvt_fp2unsigned
/* 803D8504 003D5444  90 7F 0B F0 */	stw r3, 0xbf0(r31)
/* 803D8508 003D5448  90 7F 0B F4 */	stw r3, 0xbf4(r31)
.L_803D850C:
/* 803D850C 003D544C  7F E3 FB 78 */	mr r3, r31
/* 803D8510 003D5450  48 00 04 39 */	bl outYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D8514 003D5454  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D8518 003D5458  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D851C 003D545C  7C 08 03 A6 */	mtlr r0
/* 803D8520 003D5460  38 21 00 10 */	addi r1, r1, 0x10
/* 803D8524 003D5464  4E 80 00 20 */	blr 
.endfn closeMSG__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D8528 003D5468  80 03 0A FC */	lwz r0, 0xafc(r3)
/* 803D852C 003D546C  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 803D8530 003D5470  40 82 00 18 */	bne .L_803D8548
/* 803D8534 003D5474  80 03 0B F0 */	lwz r0, 0xbf0(r3)
/* 803D8538 003D5478  28 00 00 00 */	cmplwi r0, 0
/* 803D853C 003D547C  40 82 00 0C */	bne .L_803D8548
/* 803D8540 003D5480  38 60 00 01 */	li r3, 1
/* 803D8544 003D5484  4E 80 00 20 */	blr 
.L_803D8548:
/* 803D8548 003D5488  38 60 00 00 */	li r3, 0
/* 803D854C 003D548C  4E 80 00 20 */	blr 
.endfn isFinishCloseMSG__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb, global
/* 803D8550 003D5490  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D8554 003D5494  7C 08 02 A6 */	mflr r0
/* 803D8558 003D5498  7C 66 1B 78 */	mr r6, r3
/* 803D855C 003D549C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D8560 003D54A0  54 80 06 3F */	clrlwi. r0, r4, 0x18
/* 803D8564 003D54A4  41 82 00 54 */	beq .L_803D85B8
/* 803D8568 003D54A8  38 A0 00 01 */	li r5, 1
/* 803D856C 003D54AC  C0 62 17 F4 */	lfs f3, lbl_8051FB54@sda21(r2)
/* 803D8570 003D54B0  98 A6 08 D8 */	stb r5, 0x8d8(r6)
/* 803D8574 003D54B4  38 00 00 00 */	li r0, 0
/* 803D8578 003D54B8  C0 82 17 BC */	lfs f4, lbl_8051FB1C@sda21(r2)
/* 803D857C 003D54BC  38 66 09 74 */	addi r3, r6, 0x974
/* 803D8580 003D54C0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D8584 003D54C4  C0 22 17 F0 */	lfs f1, lbl_8051FB50@sda21(r2)
/* 803D8588 003D54C8  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803D858C 003D54CC  C0 42 17 F8 */	lfs f2, lbl_8051FB58@sda21(r2)
/* 803D8590 003D54D0  EC 03 00 32 */	fmuls f0, f3, f0
/* 803D8594 003D54D4  C0 62 17 FC */	lfs f3, lbl_8051FB5C@sda21(r2)
/* 803D8598 003D54D8  D0 06 09 00 */	stfs f0, 0x900(r6)
/* 803D859C 003D54DC  D0 86 08 FC */	stfs f4, 0x8fc(r6)
/* 803D85A0 003D54E0  98 A6 09 04 */	stb r5, 0x904(r6)
/* 803D85A4 003D54E4  98 06 09 05 */	stb r0, 0x905(r6)
/* 803D85A8 003D54E8  98 06 09 50 */	stb r0, 0x950(r6)
/* 803D85AC 003D54EC  98 A6 09 51 */	stb r5, 0x951(r6)
/* 803D85B0 003D54F0  4B F5 09 29 */	bl up__Q32og6Screen8ScaleMgrFffff
/* 803D85B4 003D54F4  48 00 00 50 */	b .L_803D8604
.L_803D85B8:
/* 803D85B8 003D54F8  38 A0 00 00 */	li r5, 0
/* 803D85BC 003D54FC  38 00 00 01 */	li r0, 1
/* 803D85C0 003D5500  98 A6 09 04 */	stb r5, 0x904(r6)
/* 803D85C4 003D5504  38 66 09 B4 */	addi r3, r6, 0x9b4
/* 803D85C8 003D5508  C0 A2 17 F4 */	lfs f5, lbl_8051FB54@sda21(r2)
/* 803D85CC 003D550C  98 06 09 05 */	stb r0, 0x905(r6)
/* 803D85D0 003D5510  C0 82 17 BC */	lfs f4, lbl_8051FB1C@sda21(r2)
/* 803D85D4 003D5514  98 06 09 24 */	stb r0, 0x924(r6)
/* 803D85D8 003D5518  C0 22 17 F0 */	lfs f1, lbl_8051FB50@sda21(r2)
/* 803D85DC 003D551C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 803D85E0 003D5520  C0 42 17 F8 */	lfs f2, lbl_8051FB58@sda21(r2)
/* 803D85E4 003D5524  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 803D85E8 003D5528  C0 62 17 FC */	lfs f3, lbl_8051FB5C@sda21(r2)
/* 803D85EC 003D552C  EC 05 00 32 */	fmuls f0, f5, f0
/* 803D85F0 003D5530  D0 06 09 4C */	stfs f0, 0x94c(r6)
/* 803D85F4 003D5534  D0 86 09 48 */	stfs f4, 0x948(r6)
/* 803D85F8 003D5538  98 06 09 50 */	stb r0, 0x950(r6)
/* 803D85FC 003D553C  98 A6 09 51 */	stb r5, 0x951(r6)
/* 803D8600 003D5540  4B F5 08 D9 */	bl up__Q32og6Screen8ScaleMgrFffff
.L_803D8604:
/* 803D8604 003D5544  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D8608 003D5548  7C 08 03 A6 */	mtlr r0
/* 803D860C 003D554C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D8610 003D5550  4E 80 00 20 */	blr 
.endfn setYesNo__Q43ebi6Screen10FileSelect11TMainScreenFb

.fn updateMsg___Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D8614 003D5554  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803D8618 003D5558  7C 08 02 A6 */	mflr r0
/* 803D861C 003D555C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803D8620 003D5560  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803D8624 003D5564  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803D8628 003D5568  80 83 0B F0 */	lwz r4, 0xbf0(r3)
/* 803D862C 003D556C  28 04 00 00 */	cmplwi r4, 0
/* 803D8630 003D5570  41 82 00 0C */	beq .L_803D863C
/* 803D8634 003D5574  38 04 FF FF */	addi r0, r4, -1
/* 803D8638 003D5578  90 03 0B F0 */	stw r0, 0xbf0(r3)
.L_803D863C:
/* 803D863C 003D557C  80 03 0A FC */	lwz r0, 0xafc(r3)
/* 803D8640 003D5580  54 00 07 7B */	rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 803D8644 003D5584  41 82 00 68 */	beq .L_803D86AC
/* 803D8648 003D5588  80 A3 0B F4 */	lwz r5, 0xbf4(r3)
/* 803D864C 003D558C  28 05 00 00 */	cmplwi r5, 0
/* 803D8650 003D5590  41 82 00 38 */	beq .L_803D8688
/* 803D8654 003D5594  80 83 0B F0 */	lwz r4, 0xbf0(r3)
/* 803D8658 003D5598  3C 00 43 30 */	lis r0, 0x4330
/* 803D865C 003D559C  90 01 00 08 */	stw r0, 8(r1)
/* 803D8660 003D55A0  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D8664 003D55A4  90 81 00 0C */	stw r4, 0xc(r1)
/* 803D8668 003D55A8  C8 01 00 08 */	lfd f0, 8(r1)
/* 803D866C 003D55AC  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803D8670 003D55B0  EC 20 10 28 */	fsubs f1, f0, f2
/* 803D8674 003D55B4  90 01 00 10 */	stw r0, 0x10(r1)
/* 803D8678 003D55B8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 803D867C 003D55BC  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D8680 003D55C0  EC 41 00 24 */	fdivs f2, f1, f0
/* 803D8684 003D55C4  48 00 00 08 */	b .L_803D868C
.L_803D8688:
/* 803D8688 003D55C8  C0 42 17 BC */	lfs f2, lbl_8051FB1C@sda21(r2)
.L_803D868C:
/* 803D868C 003D55CC  C0 02 17 C4 */	lfs f0, lbl_8051FB24@sda21(r2)
/* 803D8690 003D55D0  C0 22 17 DC */	lfs f1, lbl_8051FB3C@sda21(r2)
/* 803D8694 003D55D4  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D8698 003D55D8  EC 01 00 32 */	fmuls f0, f1, f0
/* 803D869C 003D55DC  FC 00 00 1E */	fctiwz f0, f0
/* 803D86A0 003D55E0  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803D86A4 003D55E4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D86A8 003D55E8  48 00 00 5C */	b .L_803D8704
.L_803D86AC:
/* 803D86AC 003D55EC  80 A3 0B F4 */	lwz r5, 0xbf4(r3)
/* 803D86B0 003D55F0  28 05 00 00 */	cmplwi r5, 0
/* 803D86B4 003D55F4  41 82 00 38 */	beq .L_803D86EC
/* 803D86B8 003D55F8  80 83 0B F0 */	lwz r4, 0xbf0(r3)
/* 803D86BC 003D55FC  3C 00 43 30 */	lis r0, 0x4330
/* 803D86C0 003D5600  90 01 00 18 */	stw r0, 0x18(r1)
/* 803D86C4 003D5604  C8 42 17 E8 */	lfd f2, lbl_8051FB48@sda21(r2)
/* 803D86C8 003D5608  90 81 00 1C */	stw r4, 0x1c(r1)
/* 803D86CC 003D560C  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 803D86D0 003D5610  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803D86D4 003D5614  EC 20 10 28 */	fsubs f1, f0, f2
/* 803D86D8 003D5618  90 01 00 10 */	stw r0, 0x10(r1)
/* 803D86DC 003D561C  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 803D86E0 003D5620  EC 00 10 28 */	fsubs f0, f0, f2
/* 803D86E4 003D5624  EC 21 00 24 */	fdivs f1, f1, f0
/* 803D86E8 003D5628  48 00 00 08 */	b .L_803D86F0
.L_803D86EC:
/* 803D86EC 003D562C  C0 22 17 BC */	lfs f1, lbl_8051FB1C@sda21(r2)
.L_803D86F0:
/* 803D86F0 003D5630  C0 02 17 DC */	lfs f0, lbl_8051FB3C@sda21(r2)
/* 803D86F4 003D5634  EC 00 00 72 */	fmuls f0, f0, f1
/* 803D86F8 003D5638  FC 00 00 1E */	fctiwz f0, f0
/* 803D86FC 003D563C  D8 01 00 08 */	stfd f0, 8(r1)
/* 803D8700 003D5640  83 E1 00 0C */	lwz r31, 0xc(r1)
.L_803D8704:
/* 803D8704 003D5644  3C A0 69 6E */	lis r5, 0x696E4D47@ha
/* 803D8708 003D5648  3C 80 00 4E */	lis r4, 0x004E6D61@ha
/* 803D870C 003D564C  80 63 00 0C */	lwz r3, 0xc(r3)
/* 803D8710 003D5650  38 C5 4D 47 */	addi r6, r5, 0x696E4D47@l
/* 803D8714 003D5654  38 A4 6D 61 */	addi r5, r4, 0x004E6D61@l
/* 803D8718 003D5658  4B FF 1C 41 */	bl E2DScreen_searchAssert__3ebiFP9J2DScreenUx
/* 803D871C 003D565C  38 80 00 01 */	li r4, 1
/* 803D8720 003D5660  7C 7E 1B 78 */	mr r30, r3
/* 803D8724 003D5664  4B FF 1C C1 */	bl E2DPane_setTreeInfluencedAlpha__3ebiFP7J2DPaneb
/* 803D8728 003D5668  7F C3 F3 78 */	mr r3, r30
/* 803D872C 003D566C  7F E4 FB 78 */	mr r4, r31
/* 803D8730 003D5670  81 9E 00 00 */	lwz r12, 0(r30)
/* 803D8734 003D5674  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D8738 003D5678  7D 89 03 A6 */	mtctr r12
/* 803D873C 003D567C  4E 80 04 21 */	bctrl 
/* 803D8740 003D5680  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803D8744 003D5684  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803D8748 003D5688  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803D874C 003D568C  7C 08 03 A6 */	mtlr r0
/* 803D8750 003D5690  38 21 00 30 */	addi r1, r1, 0x30
/* 803D8754 003D5694  4E 80 00 20 */	blr 
.endfn updateMsg___Q43ebi6Screen10FileSelect11TMainScreenFv

.fn setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx, global
/* 803D8758 003D5698  80 83 00 98 */	lwz r4, 0x98(r3)
/* 803D875C 003D569C  91 04 00 1C */	stw r8, 0x1c(r4)
/* 803D8760 003D56A0  90 E4 00 18 */	stw r7, 0x18(r4)
/* 803D8764 003D56A4  80 83 00 9C */	lwz r4, 0x9c(r3)
/* 803D8768 003D56A8  91 04 00 1C */	stw r8, 0x1c(r4)
/* 803D876C 003D56AC  90 E4 00 18 */	stw r7, 0x18(r4)
/* 803D8770 003D56B0  80 83 00 A0 */	lwz r4, 0xa0(r3)
/* 803D8774 003D56B4  91 44 00 1C */	stw r10, 0x1c(r4)
/* 803D8778 003D56B8  91 24 00 18 */	stw r9, 0x18(r4)
/* 803D877C 003D56BC  80 83 00 A4 */	lwz r4, 0xa4(r3)
/* 803D8780 003D56C0  91 44 00 1C */	stw r10, 0x1c(r4)
/* 803D8784 003D56C4  91 24 00 18 */	stw r9, 0x18(r4)
/* 803D8788 003D56C8  80 83 00 B8 */	lwz r4, 0xb8(r3)
/* 803D878C 003D56CC  90 C4 00 1C */	stw r6, 0x1c(r4)
/* 803D8790 003D56D0  90 A4 00 18 */	stw r5, 0x18(r4)
/* 803D8794 003D56D4  80 63 00 BC */	lwz r3, 0xbc(r3)
/* 803D8798 003D56D8  90 C3 00 1C */	stw r6, 0x1c(r3)
/* 803D879C 003D56DC  90 A3 00 18 */	stw r5, 0x18(r3)
/* 803D87A0 003D56E0  4E 80 00 20 */	blr 
.endfn setMsgID___Q43ebi6Screen10FileSelect11TMainScreenFUxUxUx

.fn inCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D87A4 003D56E4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D87A8 003D56E8  7C 08 02 A6 */	mflr r0
/* 803D87AC 003D56EC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D87B0 003D56F0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D87B4 003D56F4  7C 7F 1B 78 */	mr r31, r3
/* 803D87B8 003D56F8  80 63 0A FC */	lwz r3, 0xafc(r3)
/* 803D87BC 003D56FC  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 803D87C0 003D5700  40 82 00 5C */	bne .L_803D881C
/* 803D87C4 003D5704  60 60 00 02 */	ori r0, r3, 2
/* 803D87C8 003D5708  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D87CC 003D570C  90 1F 0A FC */	stw r0, 0xafc(r31)
/* 803D87D0 003D5710  38 7F 05 CC */	addi r3, r31, 0x5cc
/* 803D87D4 003D5714  38 80 00 00 */	li r4, 0
/* 803D87D8 003D5718  38 A0 00 01 */	li r5, 1
/* 803D87DC 003D571C  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 803D87E0 003D5720  C0 06 00 54 */	lfs f0, 0x54(r6)
/* 803D87E4 003D5724  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D87E8 003D5728  4B FF 83 B1 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D87EC 003D572C  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D87F0 003D5730  38 7F 06 08 */	addi r3, r31, 0x608
/* 803D87F4 003D5734  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D87F8 003D5738  38 80 00 00 */	li r4, 0
/* 803D87FC 003D573C  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D8800 003D5740  38 A0 00 01 */	li r5, 1
/* 803D8804 003D5744  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D8808 003D5748  4B FF 83 91 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D880C 003D574C  38 7F 06 44 */	addi r3, r31, 0x644
/* 803D8810 003D5750  4B FF 85 A5 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D8814 003D5754  38 7F 06 80 */	addi r3, r31, 0x680
/* 803D8818 003D5758  4B FF 85 9D */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
.L_803D881C:
/* 803D881C 003D575C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D8820 003D5760  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D8824 003D5764  7C 08 03 A6 */	mtlr r0
/* 803D8828 003D5768  38 21 00 10 */	addi r1, r1, 0x10
/* 803D882C 003D576C  4E 80 00 20 */	blr 
.endfn inCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D8830 003D5770  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D8834 003D5774  7C 08 02 A6 */	mflr r0
/* 803D8838 003D5778  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D883C 003D577C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D8840 003D5780  7C 7F 1B 78 */	mr r31, r3
/* 803D8844 003D5784  80 63 0A FC */	lwz r3, 0xafc(r3)
/* 803D8848 003D5788  54 60 07 BD */	rlwinm. r0, r3, 0, 0x1e, 0x1e
/* 803D884C 003D578C  41 82 00 5C */	beq .L_803D88A8
/* 803D8850 003D5790  54 60 07 FA */	rlwinm r0, r3, 0, 0x1f, 0x1d
/* 803D8854 003D5794  38 7F 05 CC */	addi r3, r31, 0x5cc
/* 803D8858 003D5798  90 1F 0A FC */	stw r0, 0xafc(r31)
/* 803D885C 003D579C  4B FF 85 59 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D8860 003D57A0  38 7F 06 08 */	addi r3, r31, 0x608
/* 803D8864 003D57A4  4B FF 85 51 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D8868 003D57A8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D886C 003D57AC  38 7F 06 44 */	addi r3, r31, 0x644
/* 803D8870 003D57B0  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D8874 003D57B4  38 80 00 00 */	li r4, 0
/* 803D8878 003D57B8  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D887C 003D57BC  38 A0 00 01 */	li r5, 1
/* 803D8880 003D57C0  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D8884 003D57C4  4B FF 83 15 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D8888 003D57C8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D888C 003D57CC  38 7F 06 80 */	addi r3, r31, 0x680
/* 803D8890 003D57D0  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D8894 003D57D4  38 80 00 00 */	li r4, 0
/* 803D8898 003D57D8  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D889C 003D57DC  38 A0 00 01 */	li r5, 1
/* 803D88A0 003D57E0  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D88A4 003D57E4  4B FF 82 F5 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
.L_803D88A8:
/* 803D88A8 003D57E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D88AC 003D57EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D88B0 003D57F0  7C 08 03 A6 */	mtlr r0
/* 803D88B4 003D57F4  38 21 00 10 */	addi r1, r1, 0x10
/* 803D88B8 003D57F8  4E 80 00 20 */	blr 
.endfn outCopyErase__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn inYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D88BC 003D57FC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D88C0 003D5800  7C 08 02 A6 */	mflr r0
/* 803D88C4 003D5804  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D88C8 003D5808  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D88CC 003D580C  7C 7F 1B 78 */	mr r31, r3
/* 803D88D0 003D5810  80 63 0A FC */	lwz r3, 0xafc(r3)
/* 803D88D4 003D5814  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 803D88D8 003D5818  40 82 00 5C */	bne .L_803D8934
/* 803D88DC 003D581C  60 60 00 01 */	ori r0, r3, 1
/* 803D88E0 003D5820  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D88E4 003D5824  90 1F 0A FC */	stw r0, 0xafc(r31)
/* 803D88E8 003D5828  38 7F 06 BC */	addi r3, r31, 0x6bc
/* 803D88EC 003D582C  38 80 00 00 */	li r4, 0
/* 803D88F0 003D5830  38 A0 00 01 */	li r5, 1
/* 803D88F4 003D5834  80 CD 9A EC */	lwz r6, sys@sda21(r13)
/* 803D88F8 003D5838  C0 06 00 54 */	lfs f0, 0x54(r6)
/* 803D88FC 003D583C  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D8900 003D5840  4B FF 82 99 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D8904 003D5844  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D8908 003D5848  38 7F 06 F8 */	addi r3, r31, 0x6f8
/* 803D890C 003D584C  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D8910 003D5850  38 80 00 00 */	li r4, 0
/* 803D8914 003D5854  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D8918 003D5858  38 A0 00 01 */	li r5, 1
/* 803D891C 003D585C  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D8920 003D5860  4B FF 82 79 */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D8924 003D5864  38 7F 07 34 */	addi r3, r31, 0x734
/* 803D8928 003D5868  4B FF 84 8D */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D892C 003D586C  38 7F 07 70 */	addi r3, r31, 0x770
/* 803D8930 003D5870  4B FF 84 85 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
.L_803D8934:
/* 803D8934 003D5874  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D8938 003D5878  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D893C 003D587C  7C 08 03 A6 */	mtlr r0
/* 803D8940 003D5880  38 21 00 10 */	addi r1, r1, 0x10
/* 803D8944 003D5884  4E 80 00 20 */	blr 
.endfn inYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv

.fn outYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D8948 003D5888  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D894C 003D588C  7C 08 02 A6 */	mflr r0
/* 803D8950 003D5890  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D8954 003D5894  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D8958 003D5898  7C 7F 1B 78 */	mr r31, r3
/* 803D895C 003D589C  80 63 0A FC */	lwz r3, 0xafc(r3)
/* 803D8960 003D58A0  54 60 07 FF */	clrlwi. r0, r3, 0x1f
/* 803D8964 003D58A4  41 82 00 5C */	beq .L_803D89C0
/* 803D8968 003D58A8  54 60 00 3C */	rlwinm r0, r3, 0, 0, 0x1e
/* 803D896C 003D58AC  38 7F 06 BC */	addi r3, r31, 0x6bc
/* 803D8970 003D58B0  90 1F 0A FC */	stw r0, 0xafc(r31)
/* 803D8974 003D58B4  4B FF 84 41 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D8978 003D58B8  38 7F 06 F8 */	addi r3, r31, 0x6f8
/* 803D897C 003D58BC  4B FF 84 39 */	bl stop__Q23ebi19E2DCallBack_AnmBaseFv
/* 803D8980 003D58C0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D8984 003D58C4  38 7F 07 34 */	addi r3, r31, 0x734
/* 803D8988 003D58C8  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D898C 003D58CC  38 80 00 00 */	li r4, 0
/* 803D8990 003D58D0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D8994 003D58D4  38 A0 00 01 */	li r5, 1
/* 803D8998 003D58D8  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D899C 003D58DC  4B FF 81 FD */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
/* 803D89A0 003D58E0  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 803D89A4 003D58E4  38 7F 07 70 */	addi r3, r31, 0x770
/* 803D89A8 003D58E8  C0 22 17 CC */	lfs f1, lbl_8051FB2C@sda21(r2)
/* 803D89AC 003D58EC  38 80 00 00 */	li r4, 0
/* 803D89B0 003D58F0  C0 05 00 54 */	lfs f0, 0x54(r5)
/* 803D89B4 003D58F4  38 A0 00 01 */	li r5, 1
/* 803D89B8 003D58F8  EC 21 00 32 */	fmuls f1, f1, f0
/* 803D89BC 003D58FC  4B FF 81 DD */	bl play__Q23ebi19E2DCallBack_AnmBaseFf10J3DAnmAttrb
.L_803D89C0:
/* 803D89C0 003D5900  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D89C4 003D5904  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D89C8 003D5908  7C 08 03 A6 */	mtlr r0
/* 803D89CC 003D590C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D89D0 003D5910  4E 80 00 20 */	blr 
.endfn outYesNo___Q43ebi6Screen10FileSelect11TMainScreenFv

.fn setDataBallCopyResult__Q43ebi6Screen10FileSelect11TMainScreenFll, global
/* 803D89D4 003D5914  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803D89D8 003D5918  7C 08 02 A6 */	mflr r0
/* 803D89DC 003D591C  90 01 00 54 */	stw r0, 0x54(r1)
/* 803D89E0 003D5920  1C 04 00 34 */	mulli r0, r4, 0x34
/* 803D89E4 003D5924  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803D89E8 003D5928  7C BF 2B 78 */	mr r31, r5
/* 803D89EC 003D592C  1C 9F 00 34 */	mulli r4, r31, 0x34
/* 803D89F0 003D5930  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803D89F4 003D5934  7C 7E 1B 78 */	mr r30, r3
/* 803D89F8 003D5938  7C BE 02 14 */	add r5, r30, r0
/* 803D89FC 003D593C  88 05 0B 00 */	lbz r0, 0xb00(r5)
/* 803D8A00 003D5940  7C 9E 22 14 */	add r4, r30, r4
/* 803D8A04 003D5944  98 04 0B 00 */	stb r0, 0xb00(r4)
/* 803D8A08 003D5948  88 05 0B 01 */	lbz r0, 0xb01(r5)
/* 803D8A0C 003D594C  98 04 0B 01 */	stb r0, 0xb01(r4)
/* 803D8A10 003D5950  80 05 0B 04 */	lwz r0, 0xb04(r5)
/* 803D8A14 003D5954  90 04 0B 04 */	stw r0, 0xb04(r4)
/* 803D8A18 003D5958  80 05 0B 08 */	lwz r0, 0xb08(r5)
/* 803D8A1C 003D595C  90 04 0B 08 */	stw r0, 0xb08(r4)
/* 803D8A20 003D5960  80 05 0B 0C */	lwz r0, 0xb0c(r5)
/* 803D8A24 003D5964  90 04 0B 0C */	stw r0, 0xb0c(r4)
/* 803D8A28 003D5968  80 05 0B 10 */	lwz r0, 0xb10(r5)
/* 803D8A2C 003D596C  90 04 0B 10 */	stw r0, 0xb10(r4)
/* 803D8A30 003D5970  80 05 0B 14 */	lwz r0, 0xb14(r5)
/* 803D8A34 003D5974  90 04 0B 14 */	stw r0, 0xb14(r4)
/* 803D8A38 003D5978  80 05 0B 18 */	lwz r0, 0xb18(r5)
/* 803D8A3C 003D597C  90 04 0B 18 */	stw r0, 0xb18(r4)
/* 803D8A40 003D5980  80 05 0B 1C */	lwz r0, 0xb1c(r5)
/* 803D8A44 003D5984  90 04 0B 1C */	stw r0, 0xb1c(r4)
/* 803D8A48 003D5988  80 05 0B 20 */	lwz r0, 0xb20(r5)
/* 803D8A4C 003D598C  90 04 0B 20 */	stw r0, 0xb20(r4)
/* 803D8A50 003D5990  80 05 0B 24 */	lwz r0, 0xb24(r5)
/* 803D8A54 003D5994  90 04 0B 24 */	stw r0, 0xb24(r4)
/* 803D8A58 003D5998  80 05 0B 28 */	lwz r0, 0xb28(r5)
/* 803D8A5C 003D599C  90 04 0B 28 */	stw r0, 0xb28(r4)
/* 803D8A60 003D59A0  80 05 0B 2C */	lwz r0, 0xb2c(r5)
/* 803D8A64 003D59A4  90 04 0B 2C */	stw r0, 0xb2c(r4)
/* 803D8A68 003D59A8  80 05 0B 30 */	lwz r0, 0xb30(r5)
/* 803D8A6C 003D59AC  90 04 0B 30 */	stw r0, 0xb30(r4)
/* 803D8A70 003D59B0  48 00 04 0D */	bl initDataBalls___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D8A74 003D59B4  7F C4 F3 78 */	mr r4, r30
/* 803D8A78 003D59B8  7F E5 FB 78 */	mr r5, r31
/* 803D8A7C 003D59BC  38 61 00 08 */	addi r3, r1, 8
/* 803D8A80 003D59C0  48 00 09 99 */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D8A84 003D59C4  80 01 00 08 */	lwz r0, 8(r1)
/* 803D8A88 003D59C8  57 FF 10 3A */	slwi r31, r31, 2
/* 803D8A8C 003D59CC  7C 9E FA 14 */	add r4, r30, r31
/* 803D8A90 003D59D0  38 61 00 18 */	addi r3, r1, 0x18
/* 803D8A94 003D59D4  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D8A98 003D59D8  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803D8A9C 003D59DC  4B FF 22 5D */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D8AA0 003D59E0  C0 21 00 18 */	lfs f1, 0x18(r1)
/* 803D8AA4 003D59E4  39 00 00 00 */	li r8, 0
/* 803D8AA8 003D59E8  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 803D8AAC 003D59EC  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803D8AB0 003D59F0  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803D8AB4 003D59F4  38 A3 14 F0 */	addi r5, r3, __vt__Q25efx2d7TBaseIF@l
/* 803D8AB8 003D59F8  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803D8ABC 003D59FC  3C C0 80 4C */	lis r6, __vt__Q25efx2d3Arg@ha
/* 803D8AC0 003D5A00  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803D8AC4 003D5A04  3C 60 80 4E */	lis r3, __vt__Q25efx2d8TSimple1@ha
/* 803D8AC8 003D5A08  81 21 00 20 */	lwz r9, 0x20(r1)
/* 803D8ACC 003D5A0C  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803D8AD0 003D5A10  90 A1 00 28 */	stw r5, 0x28(r1)
/* 803D8AD4 003D5A14  39 66 15 14 */	addi r11, r6, __vt__Q25efx2d3Arg@l
/* 803D8AD8 003D5A18  80 A1 00 24 */	lwz r5, 0x24(r1)
/* 803D8ADC 003D5A1C  38 E3 74 88 */	addi r7, r3, __vt__Q25efx2d8TSimple1@l
/* 803D8AE0 003D5A20  91 21 00 10 */	stw r9, 0x10(r1)
/* 803D8AE4 003D5A24  3C 80 80 4F */	lis r4, __vt__Q25efx2d8ArgColor@ha
/* 803D8AE8 003D5A28  81 21 00 0C */	lwz r9, 0xc(r1)
/* 803D8AEC 003D5A2C  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect13T2DFilecopied@ha
/* 803D8AF0 003D5A30  90 A1 00 14 */	stw r5, 0x14(r1)
/* 803D8AF4 003D5A34  38 C0 00 09 */	li r6, 9
/* 803D8AF8 003D5A38  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 803D8AFC 003D5A3C  39 44 8D 5C */	addi r10, r4, __vt__Q25efx2d8ArgColor@l
/* 803D8B00 003D5A40  90 01 00 28 */	stw r0, 0x28(r1)
/* 803D8B04 003D5A44  38 A3 75 C8 */	addi r5, r3, __vt__Q35efx2d10FileSelect13T2DFilecopied@l
/* 803D8B08 003D5A48  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803D8B0C 003D5A4C  38 00 00 01 */	li r0, 1
/* 803D8B10 003D5A50  91 61 00 40 */	stw r11, 0x40(r1)
/* 803D8B14 003D5A54  38 61 00 28 */	addi r3, r1, 0x28
/* 803D8B18 003D5A58  38 81 00 38 */	addi r4, r1, 0x38
/* 803D8B1C 003D5A5C  99 01 00 2C */	stb r8, 0x2c(r1)
/* 803D8B20 003D5A60  90 E1 00 28 */	stw r7, 0x28(r1)
/* 803D8B24 003D5A64  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 803D8B28 003D5A68  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 803D8B2C 003D5A6C  91 41 00 40 */	stw r10, 0x40(r1)
/* 803D8B30 003D5A70  91 21 00 44 */	stw r9, 0x44(r1)
/* 803D8B34 003D5A74  99 01 00 2D */	stb r8, 0x2d(r1)
/* 803D8B38 003D5A78  B0 C1 00 30 */	sth r6, 0x30(r1)
/* 803D8B3C 003D5A7C  91 01 00 34 */	stw r8, 0x34(r1)
/* 803D8B40 003D5A80  90 A1 00 28 */	stw r5, 0x28(r1)
/* 803D8B44 003D5A84  98 01 00 2C */	stb r0, 0x2c(r1)
/* 803D8B48 003D5A88  4B FE 19 35 */	bl create__Q35efx2d10FileSelect13T2DFilecopiedFPQ25efx2d3Arg
/* 803D8B4C 003D5A8C  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803D8B50 003D5A90  38 80 18 0C */	li r4, 0x180c
/* 803D8B54 003D5A94  38 A0 00 00 */	li r5, 0
/* 803D8B58 003D5A98  4B F5 FA D9 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803D8B5C 003D5A9C  7C 7E FA 14 */	add r3, r30, r31
/* 803D8B60 003D5AA0  38 81 00 0C */	addi r4, r1, 0xc
/* 803D8B64 003D5AA4  80 63 0A 84 */	lwz r3, 0xa84(r3)
/* 803D8B68 003D5AA8  4B FE 10 01 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D8B6C 003D5AAC  7C 7E FA 14 */	add r3, r30, r31
/* 803D8B70 003D5AB0  38 81 00 0C */	addi r4, r1, 0xc
/* 803D8B74 003D5AB4  80 63 0A 90 */	lwz r3, 0xa90(r3)
/* 803D8B78 003D5AB8  4B FE 0F F1 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D8B7C 003D5ABC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803D8B80 003D5AC0  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803D8B84 003D5AC4  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803D8B88 003D5AC8  7C 08 03 A6 */	mtlr r0
/* 803D8B8C 003D5ACC  38 21 00 50 */	addi r1, r1, 0x50
/* 803D8B90 003D5AD0  4E 80 00 20 */	blr 
.endfn setDataBallCopyResult__Q43ebi6Screen10FileSelect11TMainScreenFll

.fn setDataBallNew__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D8B94 003D5AD4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 803D8B98 003D5AD8  7C 08 02 A6 */	mflr r0
/* 803D8B9C 003D5ADC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803D8BA0 003D5AE0  93 E1 00 9C */	stw r31, 0x9c(r1)
/* 803D8BA4 003D5AE4  93 C1 00 98 */	stw r30, 0x98(r1)
/* 803D8BA8 003D5AE8  7C 9E 23 78 */	mr r30, r4
/* 803D8BAC 003D5AEC  7F C5 F3 78 */	mr r5, r30
/* 803D8BB0 003D5AF0  93 A1 00 94 */	stw r29, 0x94(r1)
/* 803D8BB4 003D5AF4  7C 7D 1B 78 */	mr r29, r3
/* 803D8BB8 003D5AF8  7F A4 EB 78 */	mr r4, r29
/* 803D8BBC 003D5AFC  38 61 00 0C */	addi r3, r1, 0xc
/* 803D8BC0 003D5B00  48 00 08 59 */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D8BC4 003D5B04  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803D8BC8 003D5B08  57 DF 10 3A */	slwi r31, r30, 2
/* 803D8BCC 003D5B0C  7C 9D FA 14 */	add r4, r29, r31
/* 803D8BD0 003D5B10  38 61 00 2C */	addi r3, r1, 0x2c
/* 803D8BD4 003D5B14  90 01 00 10 */	stw r0, 0x10(r1)
/* 803D8BD8 003D5B18  80 84 00 20 */	lwz r4, 0x20(r4)
/* 803D8BDC 003D5B1C  4B FF 21 1D */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D8BE0 003D5B20  C0 21 00 2C */	lfs f1, 0x2c(r1)
/* 803D8BE4 003D5B24  39 00 00 00 */	li r8, 0
/* 803D8BE8 003D5B28  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 803D8BEC 003D5B2C  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803D8BF0 003D5B30  D0 21 00 3C */	stfs f1, 0x3c(r1)
/* 803D8BF4 003D5B34  38 A3 14 F0 */	addi r5, r3, __vt__Q25efx2d7TBaseIF@l
/* 803D8BF8 003D5B38  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803D8BFC 003D5B3C  3C C0 80 4C */	lis r6, __vt__Q25efx2d3Arg@ha
/* 803D8C00 003D5B40  D0 01 00 40 */	stfs f0, 0x40(r1)
/* 803D8C04 003D5B44  3C 60 80 4E */	lis r3, __vt__Q25efx2d8TSimple1@ha
/* 803D8C08 003D5B48  81 21 00 3C */	lwz r9, 0x3c(r1)
/* 803D8C0C 003D5B4C  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803D8C10 003D5B50  90 A1 00 64 */	stw r5, 0x64(r1)
/* 803D8C14 003D5B54  39 66 15 14 */	addi r11, r6, __vt__Q25efx2d3Arg@l
/* 803D8C18 003D5B58  80 A1 00 40 */	lwz r5, 0x40(r1)
/* 803D8C1C 003D5B5C  38 E3 74 88 */	addi r7, r3, __vt__Q25efx2d8TSimple1@l
/* 803D8C20 003D5B60  91 21 00 1C */	stw r9, 0x1c(r1)
/* 803D8C24 003D5B64  3C 80 80 4F */	lis r4, __vt__Q25efx2d8ArgColor@ha
/* 803D8C28 003D5B68  81 21 00 10 */	lwz r9, 0x10(r1)
/* 803D8C2C 003D5B6C  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect13T2DFiledelete@ha
/* 803D8C30 003D5B70  90 A1 00 20 */	stw r5, 0x20(r1)
/* 803D8C34 003D5B74  38 C0 00 04 */	li r6, 4
/* 803D8C38 003D5B78  C0 21 00 1C */	lfs f1, 0x1c(r1)
/* 803D8C3C 003D5B7C  39 44 8D 5C */	addi r10, r4, __vt__Q25efx2d8ArgColor@l
/* 803D8C40 003D5B80  90 01 00 64 */	stw r0, 0x64(r1)
/* 803D8C44 003D5B84  38 A3 75 B0 */	addi r5, r3, __vt__Q35efx2d10FileSelect13T2DFiledelete@l
/* 803D8C48 003D5B88  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 803D8C4C 003D5B8C  38 00 00 01 */	li r0, 1
/* 803D8C50 003D5B90  91 61 00 7C */	stw r11, 0x7c(r1)
/* 803D8C54 003D5B94  38 61 00 64 */	addi r3, r1, 0x64
/* 803D8C58 003D5B98  38 81 00 74 */	addi r4, r1, 0x74
/* 803D8C5C 003D5B9C  99 01 00 68 */	stb r8, 0x68(r1)
/* 803D8C60 003D5BA0  90 E1 00 64 */	stw r7, 0x64(r1)
/* 803D8C64 003D5BA4  D0 21 00 74 */	stfs f1, 0x74(r1)
/* 803D8C68 003D5BA8  D0 01 00 78 */	stfs f0, 0x78(r1)
/* 803D8C6C 003D5BAC  91 41 00 7C */	stw r10, 0x7c(r1)
/* 803D8C70 003D5BB0  91 21 00 80 */	stw r9, 0x80(r1)
/* 803D8C74 003D5BB4  99 01 00 69 */	stb r8, 0x69(r1)
/* 803D8C78 003D5BB8  B0 C1 00 6C */	sth r6, 0x6c(r1)
/* 803D8C7C 003D5BBC  91 01 00 70 */	stw r8, 0x70(r1)
/* 803D8C80 003D5BC0  90 A1 00 64 */	stw r5, 0x64(r1)
/* 803D8C84 003D5BC4  98 01 00 68 */	stb r0, 0x68(r1)
/* 803D8C88 003D5BC8  4B FE 18 BD */	bl create__Q35efx2d10FileSelect13T2DFiledeleteFPQ25efx2d3Arg
/* 803D8C8C 003D5BCC  7C 9D FA 14 */	add r4, r29, r31
/* 803D8C90 003D5BD0  38 61 00 24 */	addi r3, r1, 0x24
/* 803D8C94 003D5BD4  80 84 00 2C */	lwz r4, 0x2c(r4)
/* 803D8C98 003D5BD8  4B FF 20 61 */	bl E2DPane_getGlbCenter__3ebiFP7J2DPane
/* 803D8C9C 003D5BDC  C0 21 00 24 */	lfs f1, 0x24(r1)
/* 803D8CA0 003D5BE0  39 00 00 00 */	li r8, 0
/* 803D8CA4 003D5BE4  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 803D8CA8 003D5BE8  3C 60 80 4C */	lis r3, __vt__Q25efx2d7TBaseIF@ha
/* 803D8CAC 003D5BEC  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 803D8CB0 003D5BF0  38 A3 14 F0 */	addi r5, r3, __vt__Q25efx2d7TBaseIF@l
/* 803D8CB4 003D5BF4  3C 80 80 4C */	lis r4, __vt__Q25efx2d5TBase@ha
/* 803D8CB8 003D5BF8  3C C0 80 4C */	lis r6, __vt__Q25efx2d3Arg@ha
/* 803D8CBC 003D5BFC  D0 01 00 38 */	stfs f0, 0x38(r1)
/* 803D8CC0 003D5C00  3C 60 80 4E */	lis r3, __vt__Q25efx2d8TSimple1@ha
/* 803D8CC4 003D5C04  81 21 00 34 */	lwz r9, 0x34(r1)
/* 803D8CC8 003D5C08  38 04 14 D8 */	addi r0, r4, __vt__Q25efx2d5TBase@l
/* 803D8CCC 003D5C0C  90 A1 00 44 */	stw r5, 0x44(r1)
/* 803D8CD0 003D5C10  39 66 15 14 */	addi r11, r6, __vt__Q25efx2d3Arg@l
/* 803D8CD4 003D5C14  80 A1 00 38 */	lwz r5, 0x38(r1)
/* 803D8CD8 003D5C18  38 E3 74 88 */	addi r7, r3, __vt__Q25efx2d8TSimple1@l
/* 803D8CDC 003D5C1C  91 21 00 14 */	stw r9, 0x14(r1)
/* 803D8CE0 003D5C20  3C 80 80 4F */	lis r4, __vt__Q25efx2d8ArgColor@ha
/* 803D8CE4 003D5C24  81 21 00 10 */	lwz r9, 0x10(r1)
/* 803D8CE8 003D5C28  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect14T2DFiledeleteM@ha
/* 803D8CEC 003D5C2C  90 A1 00 18 */	stw r5, 0x18(r1)
/* 803D8CF0 003D5C30  38 C0 00 05 */	li r6, 5
/* 803D8CF4 003D5C34  C0 21 00 14 */	lfs f1, 0x14(r1)
/* 803D8CF8 003D5C38  39 44 8D 5C */	addi r10, r4, __vt__Q25efx2d8ArgColor@l
/* 803D8CFC 003D5C3C  90 01 00 44 */	stw r0, 0x44(r1)
/* 803D8D00 003D5C40  38 A3 75 98 */	addi r5, r3, __vt__Q35efx2d10FileSelect14T2DFiledeleteM@l
/* 803D8D04 003D5C44  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803D8D08 003D5C48  38 00 00 01 */	li r0, 1
/* 803D8D0C 003D5C4C  91 61 00 5C */	stw r11, 0x5c(r1)
/* 803D8D10 003D5C50  38 61 00 44 */	addi r3, r1, 0x44
/* 803D8D14 003D5C54  38 81 00 54 */	addi r4, r1, 0x54
/* 803D8D18 003D5C58  99 01 00 48 */	stb r8, 0x48(r1)
/* 803D8D1C 003D5C5C  90 E1 00 44 */	stw r7, 0x44(r1)
/* 803D8D20 003D5C60  D0 21 00 54 */	stfs f1, 0x54(r1)
/* 803D8D24 003D5C64  D0 01 00 58 */	stfs f0, 0x58(r1)
/* 803D8D28 003D5C68  91 41 00 5C */	stw r10, 0x5c(r1)
/* 803D8D2C 003D5C6C  91 21 00 60 */	stw r9, 0x60(r1)
/* 803D8D30 003D5C70  99 01 00 49 */	stb r8, 0x49(r1)
/* 803D8D34 003D5C74  B0 C1 00 4C */	sth r6, 0x4c(r1)
/* 803D8D38 003D5C78  91 01 00 50 */	stw r8, 0x50(r1)
/* 803D8D3C 003D5C7C  90 A1 00 44 */	stw r5, 0x44(r1)
/* 803D8D40 003D5C80  98 01 00 48 */	stb r0, 0x48(r1)
/* 803D8D44 003D5C84  4B FE 18 C9 */	bl create__Q35efx2d10FileSelect14T2DFiledeleteMFPQ25efx2d3Arg
/* 803D8D48 003D5C88  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803D8D4C 003D5C8C  38 80 18 0C */	li r4, 0x180c
/* 803D8D50 003D5C90  38 A0 00 00 */	li r5, 0
/* 803D8D54 003D5C94  4B F5 F8 DD */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803D8D58 003D5C98  1C 9E 00 34 */	mulli r4, r30, 0x34
/* 803D8D5C 003D5C9C  38 A0 00 01 */	li r5, 1
/* 803D8D60 003D5CA0  38 00 00 00 */	li r0, 0
/* 803D8D64 003D5CA4  7F A3 EB 78 */	mr r3, r29
/* 803D8D68 003D5CA8  7C 9D 22 14 */	add r4, r29, r4
/* 803D8D6C 003D5CAC  98 A4 0B 01 */	stb r5, 0xb01(r4)
/* 803D8D70 003D5CB0  98 04 0B 00 */	stb r0, 0xb00(r4)
/* 803D8D74 003D5CB4  48 00 01 09 */	bl initDataBalls___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D8D78 003D5CB8  7F A4 EB 78 */	mr r4, r29
/* 803D8D7C 003D5CBC  7F C5 F3 78 */	mr r5, r30
/* 803D8D80 003D5CC0  38 61 00 08 */	addi r3, r1, 8
/* 803D8D84 003D5CC4  48 00 06 95 */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D8D88 003D5CC8  88 E1 00 08 */	lbz r7, 8(r1)
/* 803D8D8C 003D5CCC  7C 7D FA 14 */	add r3, r29, r31
/* 803D8D90 003D5CD0  88 C1 00 09 */	lbz r6, 9(r1)
/* 803D8D94 003D5CD4  38 81 00 10 */	addi r4, r1, 0x10
/* 803D8D98 003D5CD8  88 A1 00 0A */	lbz r5, 0xa(r1)
/* 803D8D9C 003D5CDC  88 01 00 0B */	lbz r0, 0xb(r1)
/* 803D8DA0 003D5CE0  98 E1 00 10 */	stb r7, 0x10(r1)
/* 803D8DA4 003D5CE4  98 C1 00 11 */	stb r6, 0x11(r1)
/* 803D8DA8 003D5CE8  98 A1 00 12 */	stb r5, 0x12(r1)
/* 803D8DAC 003D5CEC  98 01 00 13 */	stb r0, 0x13(r1)
/* 803D8DB0 003D5CF0  80 63 0A 84 */	lwz r3, 0xa84(r3)
/* 803D8DB4 003D5CF4  4B FE 0D B5 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D8DB8 003D5CF8  7C 7D FA 14 */	add r3, r29, r31
/* 803D8DBC 003D5CFC  38 81 00 10 */	addi r4, r1, 0x10
/* 803D8DC0 003D5D00  80 63 0A 90 */	lwz r3, 0xa90(r3)
/* 803D8DC4 003D5D04  4B FE 0D A5 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D8DC8 003D5D08  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 803D8DCC 003D5D0C  83 E1 00 9C */	lwz r31, 0x9c(r1)
/* 803D8DD0 003D5D10  83 C1 00 98 */	lwz r30, 0x98(r1)
/* 803D8DD4 003D5D14  83 A1 00 94 */	lwz r29, 0x94(r1)
/* 803D8DD8 003D5D18  7C 08 03 A6 */	mtlr r0
/* 803D8DDC 003D5D1C  38 21 00 A0 */	addi r1, r1, 0xa0
/* 803D8DE0 003D5D20  4E 80 00 20 */	blr 
.endfn setDataBallNew__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn setDataBallBroken__Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D8DE4 003D5D24  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D8DE8 003D5D28  7C 08 02 A6 */	mflr r0
/* 803D8DEC 003D5D2C  38 A0 00 00 */	li r5, 0
/* 803D8DF0 003D5D30  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D8DF4 003D5D34  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D8DF8 003D5D38  7C 9F 23 78 */	mr r31, r4
/* 803D8DFC 003D5D3C  38 80 18 0D */	li r4, 0x180d
/* 803D8E00 003D5D40  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D8E04 003D5D44  7C 7E 1B 78 */	mr r30, r3
/* 803D8E08 003D5D48  80 6D 98 58 */	lwz r3, spSysIF__8PSSystem@sda21(r13)
/* 803D8E0C 003D5D4C  4B F5 F8 25 */	bl playSystemSe__Q28PSSystem5SysIFFUlUl
/* 803D8E10 003D5D50  1C 1F 00 34 */	mulli r0, r31, 0x34
/* 803D8E14 003D5D54  38 A0 00 01 */	li r5, 1
/* 803D8E18 003D5D58  7F C3 F3 78 */	mr r3, r30
/* 803D8E1C 003D5D5C  7C 9E 02 14 */	add r4, r30, r0
/* 803D8E20 003D5D60  98 A4 0B 00 */	stb r5, 0xb00(r4)
/* 803D8E24 003D5D64  48 00 00 59 */	bl initDataBalls___Q43ebi6Screen10FileSelect11TMainScreenFv
/* 803D8E28 003D5D68  7F C4 F3 78 */	mr r4, r30
/* 803D8E2C 003D5D6C  7F E5 FB 78 */	mr r5, r31
/* 803D8E30 003D5D70  38 61 00 08 */	addi r3, r1, 8
/* 803D8E34 003D5D74  48 00 05 E5 */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D8E38 003D5D78  80 01 00 08 */	lwz r0, 8(r1)
/* 803D8E3C 003D5D7C  57 FF 10 3A */	slwi r31, r31, 2
/* 803D8E40 003D5D80  7C 7E FA 14 */	add r3, r30, r31
/* 803D8E44 003D5D84  38 81 00 0C */	addi r4, r1, 0xc
/* 803D8E48 003D5D88  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D8E4C 003D5D8C  80 63 0A 84 */	lwz r3, 0xa84(r3)
/* 803D8E50 003D5D90  4B FE 0D 19 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D8E54 003D5D94  7C 7E FA 14 */	add r3, r30, r31
/* 803D8E58 003D5D98  38 81 00 0C */	addi r4, r1, 0xc
/* 803D8E5C 003D5D9C  80 63 0A 90 */	lwz r3, 0xa90(r3)
/* 803D8E60 003D5DA0  4B FE 0D 09 */	bl setGlobalEnvColor__Q25efx2d8TForeverFRQ28JUtility6TColor
/* 803D8E64 003D5DA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D8E68 003D5DA8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D8E6C 003D5DAC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D8E70 003D5DB0  7C 08 03 A6 */	mtlr r0
/* 803D8E74 003D5DB4  38 21 00 20 */	addi r1, r1, 0x20
/* 803D8E78 003D5DB8  4E 80 00 20 */	blr 
.endfn setDataBallBroken__Q43ebi6Screen10FileSelect11TMainScreenFl

.fn initDataBalls___Q43ebi6Screen10FileSelect11TMainScreenFv, global
/* 803D8E7C 003D5DBC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D8E80 003D5DC0  7C 08 02 A6 */	mflr r0
/* 803D8E84 003D5DC4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D8E88 003D5DC8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D8E8C 003D5DCC  3B E0 00 00 */	li r31, 0
/* 803D8E90 003D5DD0  93 C1 00 08 */	stw r30, 8(r1)
/* 803D8E94 003D5DD4  7C 7E 1B 78 */	mr r30, r3
.L_803D8E98:
/* 803D8E98 003D5DD8  7F C3 F3 78 */	mr r3, r30
/* 803D8E9C 003D5DDC  7F E4 FB 78 */	mr r4, r31
/* 803D8EA0 003D5DE0  48 00 00 29 */	bl setColorTimgDataBall___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D8EA4 003D5DE4  3B FF 00 01 */	addi r31, r31, 1
/* 803D8EA8 003D5DE8  2C 1F 00 03 */	cmpwi r31, 3
/* 803D8EAC 003D5DEC  41 80 FF EC */	blt .L_803D8E98
/* 803D8EB0 003D5DF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D8EB4 003D5DF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D8EB8 003D5DF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D8EBC 003D5DFC  7C 08 03 A6 */	mtlr r0
/* 803D8EC0 003D5E00  38 21 00 10 */	addi r1, r1, 0x10
/* 803D8EC4 003D5E04  4E 80 00 20 */	blr 
.endfn initDataBalls___Q43ebi6Screen10FileSelect11TMainScreenFv

.fn setColorTimgDataBall___Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D8EC8 003D5E08  94 21 FF 80 */	stwu r1, -0x80(r1)
/* 803D8ECC 003D5E0C  7C 08 02 A6 */	mflr r0
/* 803D8ED0 003D5E10  90 01 00 84 */	stw r0, 0x84(r1)
/* 803D8ED4 003D5E14  BF 41 00 68 */	stmw r26, 0x68(r1)
/* 803D8ED8 003D5E18  7C 9E 23 78 */	mr r30, r4
/* 803D8EDC 003D5E1C  3C 80 80 49 */	lis r4, lbl_80496AE8@ha
/* 803D8EE0 003D5E20  7C 7D 1B 78 */	mr r29, r3
/* 803D8EE4 003D5E24  1C 1E 00 34 */	mulli r0, r30, 0x34
/* 803D8EE8 003D5E28  3B E4 6A E8 */	addi r31, r4, lbl_80496AE8@l
/* 803D8EEC 003D5E2C  7C 7D 02 14 */	add r3, r29, r0
/* 803D8EF0 003D5E30  88 03 0B 00 */	lbz r0, 0xb00(r3)
/* 803D8EF4 003D5E34  28 00 00 00 */	cmplwi r0, 0
/* 803D8EF8 003D5E38  41 82 01 08 */	beq .L_803D9000
/* 803D8EFC 003D5E3C  57 DB 10 3A */	slwi r27, r30, 2
/* 803D8F00 003D5E40  38 9F 01 F4 */	addi r4, r31, 0x1f4
/* 803D8F04 003D5E44  7C 7D DA 14 */	add r3, r29, r27
/* 803D8F08 003D5E48  38 A0 00 00 */	li r5, 0
/* 803D8F0C 003D5E4C  80 63 00 50 */	lwz r3, 0x50(r3)
/* 803D8F10 003D5E50  81 83 00 00 */	lwz r12, 0(r3)
/* 803D8F14 003D5E54  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 803D8F18 003D5E58  7D 89 03 A6 */	mtctr r12
/* 803D8F1C 003D5E5C  4E 80 04 21 */	bctrl 
/* 803D8F20 003D5E60  28 03 00 00 */	cmplwi r3, 0
/* 803D8F24 003D5E64  40 82 00 18 */	bne .L_803D8F3C
/* 803D8F28 003D5E68  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D8F2C 003D5E6C  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D8F30 003D5E70  38 80 05 53 */	li r4, 0x553
/* 803D8F34 003D5E74  4C C6 31 82 */	crclr 6
/* 803D8F38 003D5E78  4B C5 17 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D8F3C:
/* 803D8F3C 003D5E7C  7C 7D DA 14 */	add r3, r29, r27
/* 803D8F40 003D5E80  38 9F 01 F4 */	addi r4, r31, 0x1f4
/* 803D8F44 003D5E84  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D8F48 003D5E88  38 A0 00 00 */	li r5, 0
/* 803D8F4C 003D5E8C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D8F50 003D5E90  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 803D8F54 003D5E94  7D 89 03 A6 */	mtctr r12
/* 803D8F58 003D5E98  4E 80 04 21 */	bctrl 
/* 803D8F5C 003D5E9C  28 03 00 00 */	cmplwi r3, 0
/* 803D8F60 003D5EA0  40 82 00 18 */	bne .L_803D8F78
/* 803D8F64 003D5EA4  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D8F68 003D5EA8  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D8F6C 003D5EAC  38 80 05 57 */	li r4, 0x557
/* 803D8F70 003D5EB0  4C C6 31 82 */	crclr 6
/* 803D8F74 003D5EB4  4B C5 16 CD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D8F78:
/* 803D8F78 003D5EB8  7F 9D DA 14 */	add r28, r29, r27
/* 803D8F7C 003D5EBC  38 00 00 00 */	li r0, 0
/* 803D8F80 003D5EC0  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 803D8F84 003D5EC4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D8F88 003D5EC8  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 803D8F8C 003D5ECC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D8F90 003D5ED0  80 1C 09 D4 */	lwz r0, 0x9d4(r28)
/* 803D8F94 003D5ED4  28 00 00 00 */	cmplwi r0, 0
/* 803D8F98 003D5ED8  40 82 00 18 */	bne .L_803D8FB0
/* 803D8F9C 003D5EDC  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D8FA0 003D5EE0  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D8FA4 003D5EE4  38 80 05 5D */	li r4, 0x55d
/* 803D8FA8 003D5EE8  4C C6 31 82 */	crclr 6
/* 803D8FAC 003D5EEC  4B C5 16 95 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D8FB0:
/* 803D8FB0 003D5EF0  80 7C 09 D4 */	lwz r3, 0x9d4(r28)
/* 803D8FB4 003D5EF4  81 83 00 00 */	lwz r12, 0(r3)
/* 803D8FB8 003D5EF8  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D8FBC 003D5EFC  7D 89 03 A6 */	mtctr r12
/* 803D8FC0 003D5F00  4E 80 04 21 */	bctrl 
/* 803D8FC4 003D5F04  7F 7D DA 14 */	add r27, r29, r27
/* 803D8FC8 003D5F08  80 1B 09 E0 */	lwz r0, 0x9e0(r27)
/* 803D8FCC 003D5F0C  28 00 00 00 */	cmplwi r0, 0
/* 803D8FD0 003D5F10  40 82 00 18 */	bne .L_803D8FE8
/* 803D8FD4 003D5F14  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D8FD8 003D5F18  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D8FDC 003D5F1C  38 80 05 5F */	li r4, 0x55f
/* 803D8FE0 003D5F20  4C C6 31 82 */	crclr 6
/* 803D8FE4 003D5F24  4B C5 16 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D8FE8:
/* 803D8FE8 003D5F28  80 7B 09 E0 */	lwz r3, 0x9e0(r27)
/* 803D8FEC 003D5F2C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D8FF0 003D5F30  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D8FF4 003D5F34  7D 89 03 A6 */	mtctr r12
/* 803D8FF8 003D5F38  4E 80 04 21 */	bctrl 
/* 803D8FFC 003D5F3C  48 00 01 D4 */	b .L_803D91D0
.L_803D9000:
/* 803D9000 003D5F40  88 03 0B 01 */	lbz r0, 0xb01(r3)
/* 803D9004 003D5F44  28 00 00 00 */	cmplwi r0, 0
/* 803D9008 003D5F48  41 82 01 08 */	beq .L_803D9110
/* 803D900C 003D5F4C  57 DB 10 3A */	slwi r27, r30, 2
/* 803D9010 003D5F50  38 9F 02 08 */	addi r4, r31, 0x208
/* 803D9014 003D5F54  7C 7D DA 14 */	add r3, r29, r27
/* 803D9018 003D5F58  38 A0 00 00 */	li r5, 0
/* 803D901C 003D5F5C  80 63 00 50 */	lwz r3, 0x50(r3)
/* 803D9020 003D5F60  81 83 00 00 */	lwz r12, 0(r3)
/* 803D9024 003D5F64  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 803D9028 003D5F68  7D 89 03 A6 */	mtctr r12
/* 803D902C 003D5F6C  4E 80 04 21 */	bctrl 
/* 803D9030 003D5F70  28 03 00 00 */	cmplwi r3, 0
/* 803D9034 003D5F74  40 82 00 18 */	bne .L_803D904C
/* 803D9038 003D5F78  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D903C 003D5F7C  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D9040 003D5F80  38 80 05 66 */	li r4, 0x566
/* 803D9044 003D5F84  4C C6 31 82 */	crclr 6
/* 803D9048 003D5F88  4B C5 15 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D904C:
/* 803D904C 003D5F8C  7C 7D DA 14 */	add r3, r29, r27
/* 803D9050 003D5F90  38 9F 02 08 */	addi r4, r31, 0x208
/* 803D9054 003D5F94  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D9058 003D5F98  38 A0 00 00 */	li r5, 0
/* 803D905C 003D5F9C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D9060 003D5FA0  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 803D9064 003D5FA4  7D 89 03 A6 */	mtctr r12
/* 803D9068 003D5FA8  4E 80 04 21 */	bctrl 
/* 803D906C 003D5FAC  28 03 00 00 */	cmplwi r3, 0
/* 803D9070 003D5FB0  40 82 00 18 */	bne .L_803D9088
/* 803D9074 003D5FB4  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D9078 003D5FB8  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D907C 003D5FBC  38 80 05 6A */	li r4, 0x56a
/* 803D9080 003D5FC0  4C C6 31 82 */	crclr 6
/* 803D9084 003D5FC4  4B C5 15 BD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D9088:
/* 803D9088 003D5FC8  7F 9D DA 14 */	add r28, r29, r27
/* 803D908C 003D5FCC  38 00 00 00 */	li r0, 0
/* 803D9090 003D5FD0  80 7C 00 38 */	lwz r3, 0x38(r28)
/* 803D9094 003D5FD4  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D9098 003D5FD8  80 7C 00 44 */	lwz r3, 0x44(r28)
/* 803D909C 003D5FDC  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D90A0 003D5FE0  80 1C 09 D4 */	lwz r0, 0x9d4(r28)
/* 803D90A4 003D5FE4  28 00 00 00 */	cmplwi r0, 0
/* 803D90A8 003D5FE8  40 82 00 18 */	bne .L_803D90C0
/* 803D90AC 003D5FEC  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D90B0 003D5FF0  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D90B4 003D5FF4  38 80 05 70 */	li r4, 0x570
/* 803D90B8 003D5FF8  4C C6 31 82 */	crclr 6
/* 803D90BC 003D5FFC  4B C5 15 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D90C0:
/* 803D90C0 003D6000  80 7C 09 D4 */	lwz r3, 0x9d4(r28)
/* 803D90C4 003D6004  81 83 00 00 */	lwz r12, 0(r3)
/* 803D90C8 003D6008  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D90CC 003D600C  7D 89 03 A6 */	mtctr r12
/* 803D90D0 003D6010  4E 80 04 21 */	bctrl 
/* 803D90D4 003D6014  7F 7D DA 14 */	add r27, r29, r27
/* 803D90D8 003D6018  80 1B 09 E0 */	lwz r0, 0x9e0(r27)
/* 803D90DC 003D601C  28 00 00 00 */	cmplwi r0, 0
/* 803D90E0 003D6020  40 82 00 18 */	bne .L_803D90F8
/* 803D90E4 003D6024  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D90E8 003D6028  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D90EC 003D602C  38 80 05 72 */	li r4, 0x572
/* 803D90F0 003D6030  4C C6 31 82 */	crclr 6
/* 803D90F4 003D6034  4B C5 15 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D90F8:
/* 803D90F8 003D6038  80 7B 09 E0 */	lwz r3, 0x9e0(r27)
/* 803D90FC 003D603C  81 83 00 00 */	lwz r12, 0(r3)
/* 803D9100 003D6040  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D9104 003D6044  7D 89 03 A6 */	mtctr r12
/* 803D9108 003D6048  4E 80 04 21 */	bctrl 
/* 803D910C 003D604C  48 00 00 C4 */	b .L_803D91D0
.L_803D9110:
/* 803D9110 003D6050  57 DB 10 3A */	slwi r27, r30, 2
/* 803D9114 003D6054  38 9F 02 18 */	addi r4, r31, 0x218
/* 803D9118 003D6058  7C 7D DA 14 */	add r3, r29, r27
/* 803D911C 003D605C  38 A0 00 00 */	li r5, 0
/* 803D9120 003D6060  80 63 00 50 */	lwz r3, 0x50(r3)
/* 803D9124 003D6064  81 83 00 00 */	lwz r12, 0(r3)
/* 803D9128 003D6068  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 803D912C 003D606C  7D 89 03 A6 */	mtctr r12
/* 803D9130 003D6070  4E 80 04 21 */	bctrl 
/* 803D9134 003D6074  28 03 00 00 */	cmplwi r3, 0
/* 803D9138 003D6078  40 82 00 18 */	bne .L_803D9150
/* 803D913C 003D607C  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D9140 003D6080  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D9144 003D6084  38 80 05 78 */	li r4, 0x578
/* 803D9148 003D6088  4C C6 31 82 */	crclr 6
/* 803D914C 003D608C  4B C5 14 F5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D9150:
/* 803D9150 003D6090  7C 7D DA 14 */	add r3, r29, r27
/* 803D9154 003D6094  38 9F 02 18 */	addi r4, r31, 0x218
/* 803D9158 003D6098  80 63 00 5C */	lwz r3, 0x5c(r3)
/* 803D915C 003D609C  38 A0 00 00 */	li r5, 0
/* 803D9160 003D60A0  81 83 00 00 */	lwz r12, 0(r3)
/* 803D9164 003D60A4  81 8C 01 14 */	lwz r12, 0x114(r12)
/* 803D9168 003D60A8  7D 89 03 A6 */	mtctr r12
/* 803D916C 003D60AC  4E 80 04 21 */	bctrl 
/* 803D9170 003D60B0  28 03 00 00 */	cmplwi r3, 0
/* 803D9174 003D60B4  40 82 00 18 */	bne .L_803D918C
/* 803D9178 003D60B8  38 7F 00 88 */	addi r3, r31, 0x88
/* 803D917C 003D60BC  38 BF 00 A0 */	addi r5, r31, 0xa0
/* 803D9180 003D60C0  38 80 05 7C */	li r4, 0x57c
/* 803D9184 003D60C4  4C C6 31 82 */	crclr 6
/* 803D9188 003D60C8  4B C5 14 B9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D918C:
/* 803D918C 003D60CC  7C 9D DA 14 */	add r4, r29, r27
/* 803D9190 003D60D0  38 00 00 01 */	li r0, 1
/* 803D9194 003D60D4  80 64 00 38 */	lwz r3, 0x38(r4)
/* 803D9198 003D60D8  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D919C 003D60DC  80 64 00 44 */	lwz r3, 0x44(r4)
/* 803D91A0 003D60E0  98 03 00 B0 */	stb r0, 0xb0(r3)
/* 803D91A4 003D60E4  80 64 09 D4 */	lwz r3, 0x9d4(r4)
/* 803D91A8 003D60E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D91AC 003D60EC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803D91B0 003D60F0  7D 89 03 A6 */	mtctr r12
/* 803D91B4 003D60F4  4E 80 04 21 */	bctrl 
/* 803D91B8 003D60F8  7C 7D DA 14 */	add r3, r29, r27
/* 803D91BC 003D60FC  80 63 09 E0 */	lwz r3, 0x9e0(r3)
/* 803D91C0 003D6100  81 83 00 00 */	lwz r12, 0(r3)
/* 803D91C4 003D6104  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 803D91C8 003D6108  7D 89 03 A6 */	mtctr r12
/* 803D91CC 003D610C  4E 80 04 21 */	bctrl 
.L_803D91D0:
/* 803D91D0 003D6110  7F A4 EB 78 */	mr r4, r29
/* 803D91D4 003D6114  7F C5 F3 78 */	mr r5, r30
/* 803D91D8 003D6118  38 61 00 08 */	addi r3, r1, 8
/* 803D91DC 003D611C  48 00 02 3D */	bl getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl
/* 803D91E0 003D6120  80 01 00 08 */	lwz r0, 8(r1)
/* 803D91E4 003D6124  3C A0 43 30 */	lis r5, 0x4330
/* 803D91E8 003D6128  57 DA 10 3A */	slwi r26, r30, 2
/* 803D91EC 003D612C  90 A1 00 30 */	stw r5, 0x30(r1)
/* 803D91F0 003D6130  7C 7D D2 14 */	add r3, r29, r26
/* 803D91F4 003D6134  C8 82 17 E8 */	lfd f4, lbl_8051FB48@sda21(r2)
/* 803D91F8 003D6138  90 01 00 0C */	stw r0, 0xc(r1)
/* 803D91FC 003D613C  80 63 00 68 */	lwz r3, 0x68(r3)
/* 803D9200 003D6140  88 C1 00 0C */	lbz r6, 0xc(r1)
/* 803D9204 003D6144  88 81 00 0D */	lbz r4, 0xd(r1)
/* 803D9208 003D6148  88 01 00 0E */	lbz r0, 0xe(r1)
/* 803D920C 003D614C  90 C1 00 34 */	stw r6, 0x34(r1)
/* 803D9210 003D6150  81 83 00 00 */	lwz r12, 0(r3)
/* 803D9214 003D6154  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 803D9218 003D6158  90 81 00 44 */	stw r4, 0x44(r1)
/* 803D921C 003D615C  EC 20 20 28 */	fsubs f1, f0, f4
/* 803D9220 003D6160  C0 A2 18 00 */	lfs f5, lbl_8051FB60@sda21(r2)
/* 803D9224 003D6164  90 A1 00 40 */	stw r5, 0x40(r1)
/* 803D9228 003D6168  C0 62 17 DC */	lfs f3, lbl_8051FB3C@sda21(r2)
/* 803D922C 003D616C  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 803D9230 003D6170  EC 45 00 72 */	fmuls f2, f5, f1
/* 803D9234 003D6174  90 01 00 54 */	stw r0, 0x54(r1)
/* 803D9238 003D6178  EC 20 20 28 */	fsubs f1, f0, f4
/* 803D923C 003D617C  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 803D9240 003D6180  90 A1 00 50 */	stw r5, 0x50(r1)
/* 803D9244 003D6184  EC 42 18 24 */	fdivs f2, f2, f3
/* 803D9248 003D6188  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 803D924C 003D618C  EC 00 20 28 */	fsubs f0, f0, f4
/* 803D9250 003D6190  EC 25 00 72 */	fmuls f1, f5, f1
/* 803D9254 003D6194  FC 40 10 1E */	fctiwz f2, f2
/* 803D9258 003D6198  EC 05 00 32 */	fmuls f0, f5, f0
/* 803D925C 003D619C  EC 21 18 24 */	fdivs f1, f1, f3
/* 803D9260 003D61A0  D8 41 00 38 */	stfd f2, 0x38(r1)
/* 803D9264 003D61A4  83 C1 00 3C */	lwz r30, 0x3c(r1)
/* 803D9268 003D61A8  EC 00 18 24 */	fdivs f0, f0, f3
/* 803D926C 003D61AC  FC 20 08 1E */	fctiwz f1, f1
/* 803D9270 003D61B0  FC 00 00 1E */	fctiwz f0, f0
/* 803D9274 003D61B4  D8 21 00 48 */	stfd f1, 0x48(r1)
/* 803D9278 003D61B8  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 803D927C 003D61BC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803D9280 003D61C0  83 61 00 5C */	lwz r27, 0x5c(r1)
/* 803D9284 003D61C4  7D 89 03 A6 */	mtctr r12
/* 803D9288 003D61C8  4E 80 04 21 */	bctrl 
/* 803D928C 003D61CC  83 83 00 70 */	lwz r28, 0x70(r3)
/* 803D9290 003D61D0  38 80 00 00 */	li r4, 0
/* 803D9294 003D61D4  7F 83 E3 78 */	mr r3, r28
/* 803D9298 003D61D8  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D929C 003D61DC  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803D92A0 003D61E0  7D 89 03 A6 */	mtctr r12
/* 803D92A4 003D61E4  4E 80 04 21 */	bctrl 
/* 803D92A8 003D61E8  A8 03 00 06 */	lha r0, 6(r3)
/* 803D92AC 003D61EC  7F 83 E3 78 */	mr r3, r28
/* 803D92B0 003D61F0  38 A1 00 28 */	addi r5, r1, 0x28
/* 803D92B4 003D61F4  38 80 00 00 */	li r4, 0
/* 803D92B8 003D61F8  B3 C1 00 28 */	sth r30, 0x28(r1)
/* 803D92BC 003D61FC  B3 E1 00 2A */	sth r31, 0x2a(r1)
/* 803D92C0 003D6200  B3 61 00 2C */	sth r27, 0x2c(r1)
/* 803D92C4 003D6204  B0 01 00 2E */	sth r0, 0x2e(r1)
/* 803D92C8 003D6208  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D92CC 003D620C  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803D92D0 003D6210  7D 89 03 A6 */	mtctr r12
/* 803D92D4 003D6214  4E 80 04 21 */	bctrl 
/* 803D92D8 003D6218  7C 7D D2 14 */	add r3, r29, r26
/* 803D92DC 003D621C  80 63 00 74 */	lwz r3, 0x74(r3)
/* 803D92E0 003D6220  81 83 00 00 */	lwz r12, 0(r3)
/* 803D92E4 003D6224  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 803D92E8 003D6228  7D 89 03 A6 */	mtctr r12
/* 803D92EC 003D622C  4E 80 04 21 */	bctrl 
/* 803D92F0 003D6230  83 83 00 70 */	lwz r28, 0x70(r3)
/* 803D92F4 003D6234  38 80 00 00 */	li r4, 0
/* 803D92F8 003D6238  7F 83 E3 78 */	mr r3, r28
/* 803D92FC 003D623C  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D9300 003D6240  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803D9304 003D6244  7D 89 03 A6 */	mtctr r12
/* 803D9308 003D6248  4E 80 04 21 */	bctrl 
/* 803D930C 003D624C  A8 03 00 06 */	lha r0, 6(r3)
/* 803D9310 003D6250  7F 83 E3 78 */	mr r3, r28
/* 803D9314 003D6254  38 A1 00 20 */	addi r5, r1, 0x20
/* 803D9318 003D6258  38 80 00 00 */	li r4, 0
/* 803D931C 003D625C  B3 C1 00 20 */	sth r30, 0x20(r1)
/* 803D9320 003D6260  B3 E1 00 22 */	sth r31, 0x22(r1)
/* 803D9324 003D6264  B3 61 00 24 */	sth r27, 0x24(r1)
/* 803D9328 003D6268  B0 01 00 26 */	sth r0, 0x26(r1)
/* 803D932C 003D626C  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D9330 003D6270  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803D9334 003D6274  7D 89 03 A6 */	mtctr r12
/* 803D9338 003D6278  4E 80 04 21 */	bctrl 
/* 803D933C 003D627C  7C 7D D2 14 */	add r3, r29, r26
/* 803D9340 003D6280  80 63 00 38 */	lwz r3, 0x38(r3)
/* 803D9344 003D6284  81 83 00 00 */	lwz r12, 0(r3)
/* 803D9348 003D6288  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 803D934C 003D628C  7D 89 03 A6 */	mtctr r12
/* 803D9350 003D6290  4E 80 04 21 */	bctrl 
/* 803D9354 003D6294  83 83 00 70 */	lwz r28, 0x70(r3)
/* 803D9358 003D6298  38 80 00 00 */	li r4, 0
/* 803D935C 003D629C  7F 83 E3 78 */	mr r3, r28
/* 803D9360 003D62A0  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D9364 003D62A4  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803D9368 003D62A8  7D 89 03 A6 */	mtctr r12
/* 803D936C 003D62AC  4E 80 04 21 */	bctrl 
/* 803D9370 003D62B0  A8 03 00 06 */	lha r0, 6(r3)
/* 803D9374 003D62B4  7F 83 E3 78 */	mr r3, r28
/* 803D9378 003D62B8  38 A1 00 18 */	addi r5, r1, 0x18
/* 803D937C 003D62BC  38 80 00 00 */	li r4, 0
/* 803D9380 003D62C0  B3 C1 00 18 */	sth r30, 0x18(r1)
/* 803D9384 003D62C4  B3 E1 00 1A */	sth r31, 0x1a(r1)
/* 803D9388 003D62C8  B3 61 00 1C */	sth r27, 0x1c(r1)
/* 803D938C 003D62CC  B0 01 00 1E */	sth r0, 0x1e(r1)
/* 803D9390 003D62D0  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D9394 003D62D4  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803D9398 003D62D8  7D 89 03 A6 */	mtctr r12
/* 803D939C 003D62DC  4E 80 04 21 */	bctrl 
/* 803D93A0 003D62E0  7C 7D D2 14 */	add r3, r29, r26
/* 803D93A4 003D62E4  80 63 00 44 */	lwz r3, 0x44(r3)
/* 803D93A8 003D62E8  81 83 00 00 */	lwz r12, 0(r3)
/* 803D93AC 003D62EC  81 8C 01 3C */	lwz r12, 0x13c(r12)
/* 803D93B0 003D62F0  7D 89 03 A6 */	mtctr r12
/* 803D93B4 003D62F4  4E 80 04 21 */	bctrl 
/* 803D93B8 003D62F8  83 83 00 70 */	lwz r28, 0x70(r3)
/* 803D93BC 003D62FC  38 80 00 00 */	li r4, 0
/* 803D93C0 003D6300  7F 83 E3 78 */	mr r3, r28
/* 803D93C4 003D6304  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D93C8 003D6308  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803D93CC 003D630C  7D 89 03 A6 */	mtctr r12
/* 803D93D0 003D6310  4E 80 04 21 */	bctrl 
/* 803D93D4 003D6314  A8 03 00 06 */	lha r0, 6(r3)
/* 803D93D8 003D6318  7F 83 E3 78 */	mr r3, r28
/* 803D93DC 003D631C  38 A1 00 10 */	addi r5, r1, 0x10
/* 803D93E0 003D6320  38 80 00 00 */	li r4, 0
/* 803D93E4 003D6324  B3 C1 00 10 */	sth r30, 0x10(r1)
/* 803D93E8 003D6328  B3 E1 00 12 */	sth r31, 0x12(r1)
/* 803D93EC 003D632C  B3 61 00 14 */	sth r27, 0x14(r1)
/* 803D93F0 003D6330  B0 01 00 16 */	sth r0, 0x16(r1)
/* 803D93F4 003D6334  81 9C 00 00 */	lwz r12, 0(r28)
/* 803D93F8 003D6338  81 8C 00 34 */	lwz r12, 0x34(r12)
/* 803D93FC 003D633C  7D 89 03 A6 */	mtctr r12
/* 803D9400 003D6340  4E 80 04 21 */	bctrl 
/* 803D9404 003D6344  BB 41 00 68 */	lmw r26, 0x68(r1)
/* 803D9408 003D6348  80 01 00 84 */	lwz r0, 0x84(r1)
/* 803D940C 003D634C  7C 08 03 A6 */	mtlr r0
/* 803D9410 003D6350  38 21 00 80 */	addi r1, r1, 0x80
/* 803D9414 003D6354  4E 80 00 20 */	blr 
.endfn setColorTimgDataBall___Q43ebi6Screen10FileSelect11TMainScreenFl

.fn getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl, global
/* 803D9418 003D6358  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D941C 003D635C  7C 08 02 A6 */	mflr r0
/* 803D9420 003D6360  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D9424 003D6364  38 00 00 00 */	li r0, 0
/* 803D9428 003D6368  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D942C 003D636C  7C BF 2B 79 */	or. r31, r5, r5
/* 803D9430 003D6370  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D9434 003D6374  7C 9E 23 78 */	mr r30, r4
/* 803D9438 003D6378  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803D943C 003D637C  7C 7D 1B 78 */	mr r29, r3
/* 803D9440 003D6380  41 80 00 10 */	blt .L_803D9450
/* 803D9444 003D6384  2C 1F 00 03 */	cmpwi r31, 3
/* 803D9448 003D6388  40 80 00 08 */	bge .L_803D9450
/* 803D944C 003D638C  38 00 00 01 */	li r0, 1
.L_803D9450:
/* 803D9450 003D6390  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803D9454 003D6394  40 82 00 20 */	bne .L_803D9474
/* 803D9458 003D6398  3C 60 80 49 */	lis r3, lbl_80496B70@ha
/* 803D945C 003D639C  3C A0 80 49 */	lis r5, lbl_80496B88@ha
/* 803D9460 003D63A0  38 63 6B 70 */	addi r3, r3, lbl_80496B70@l
/* 803D9464 003D63A4  38 80 05 A5 */	li r4, 0x5a5
/* 803D9468 003D63A8  38 A5 6B 88 */	addi r5, r5, lbl_80496B88@l
/* 803D946C 003D63AC  4C C6 31 82 */	crclr 6
/* 803D9470 003D63B0  4B C5 11 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803D9474:
/* 803D9474 003D63B4  1C 1F 00 34 */	mulli r0, r31, 0x34
/* 803D9478 003D63B8  7C 7E 02 14 */	add r3, r30, r0
/* 803D947C 003D63BC  88 03 0B 01 */	lbz r0, 0xb01(r3)
/* 803D9480 003D63C0  80 A3 0B 08 */	lwz r5, 0xb08(r3)
/* 803D9484 003D63C4  28 00 00 00 */	cmplwi r0, 0
/* 803D9488 003D63C8  80 C3 0B 0C */	lwz r6, 0xb0c(r3)
/* 803D948C 003D63CC  80 E3 0B 10 */	lwz r7, 0xb10(r3)
/* 803D9490 003D63D0  81 03 0B 18 */	lwz r8, 0xb18(r3)
/* 803D9494 003D63D4  81 23 0B 14 */	lwz r9, 0xb14(r3)
/* 803D9498 003D63D8  40 82 00 10 */	bne .L_803D94A8
/* 803D949C 003D63DC  88 03 0B 00 */	lbz r0, 0xb00(r3)
/* 803D94A0 003D63E0  28 00 00 00 */	cmplwi r0, 0
/* 803D94A4 003D63E4  41 82 00 18 */	beq .L_803D94BC
.L_803D94A8:
/* 803D94A8 003D63E8  38 A0 00 00 */	li r5, 0
/* 803D94AC 003D63EC  38 C0 00 00 */	li r6, 0
/* 803D94B0 003D63F0  38 E0 00 00 */	li r7, 0
/* 803D94B4 003D63F4  39 00 00 00 */	li r8, 0
/* 803D94B8 003D63F8  39 20 00 00 */	li r9, 0
.L_803D94BC:
/* 803D94BC 003D63FC  7F A3 EB 78 */	mr r3, r29
/* 803D94C0 003D6400  7F C4 F3 78 */	mr r4, r30
/* 803D94C4 003D6404  48 00 00 21 */	bl calcDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFUlUlUlUlUl
/* 803D94C8 003D6408  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D94CC 003D640C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D94D0 003D6410  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D94D4 003D6414  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803D94D8 003D6418  7C 08 03 A6 */	mtlr r0
/* 803D94DC 003D641C  38 21 00 20 */	addi r1, r1, 0x20
/* 803D94E0 003D6420  4E 80 00 20 */	blr 
.endfn getDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFl

.fn calcDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFUlUlUlUlUl, global
/* 803D94E4 003D6424  7C 06 3A 14 */	add r0, r6, r7
/* 803D94E8 003D6428  28 06 00 01 */	cmplwi r6, 1
/* 803D94EC 003D642C  7C 00 42 14 */	add r0, r0, r8
/* 803D94F0 003D6430  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803D94F4 003D6434  7C 80 4A 14 */	add r4, r0, r9
/* 803D94F8 003D6438  39 40 00 01 */	li r10, 1
/* 803D94FC 003D643C  38 84 00 01 */	addi r4, r4, 1
/* 803D9500 003D6440  7C 85 22 14 */	add r4, r5, r4
/* 803D9504 003D6444  40 81 00 08 */	ble .L_803D950C
/* 803D9508 003D6448  7C CA 33 78 */	mr r10, r6
.L_803D950C:
/* 803D950C 003D644C  7C 0A 28 40 */	cmplw r10, r5
/* 803D9510 003D6450  40 80 00 08 */	bge .L_803D9518
/* 803D9514 003D6454  7C AA 2B 78 */	mr r10, r5
.L_803D9518:
/* 803D9518 003D6458  7C 0A 38 40 */	cmplw r10, r7
/* 803D951C 003D645C  40 80 00 08 */	bge .L_803D9524
/* 803D9520 003D6460  7C EA 3B 78 */	mr r10, r7
.L_803D9524:
/* 803D9524 003D6464  3C 00 43 30 */	lis r0, 0x4330
/* 803D9528 003D6468  91 21 00 44 */	stw r9, 0x44(r1)
/* 803D952C 003D646C  C8 E2 17 E8 */	lfd f7, lbl_8051FB48@sda21(r2)
/* 803D9530 003D6470  90 01 00 40 */	stw r0, 0x40(r1)
/* 803D9534 003D6474  C0 62 17 CC */	lfs f3, lbl_8051FB2C@sda21(r2)
/* 803D9538 003D6478  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 803D953C 003D647C  91 01 00 4C */	stw r8, 0x4c(r1)
/* 803D9540 003D6480  EC 40 38 28 */	fsubs f2, f0, f7
/* 803D9544 003D6484  C1 02 18 04 */	lfs f8, lbl_8051FB64@sda21(r2)
/* 803D9548 003D6488  90 01 00 48 */	stw r0, 0x48(r1)
/* 803D954C 003D648C  C0 02 17 DC */	lfs f0, lbl_8051FB3C@sda21(r2)
/* 803D9550 003D6490  C8 21 00 48 */	lfd f1, 0x48(r1)
/* 803D9554 003D6494  90 C1 00 14 */	stw r6, 0x14(r1)
/* 803D9558 003D6498  EC 21 38 28 */	fsubs f1, f1, f7
/* 803D955C 003D649C  90 01 00 10 */	stw r0, 0x10(r1)
/* 803D9560 003D64A0  C8 81 00 10 */	lfd f4, 0x10(r1)
/* 803D9564 003D64A4  EC 22 08 28 */	fsubs f1, f2, f1
/* 803D9568 003D64A8  91 41 00 1C */	stw r10, 0x1c(r1)
/* 803D956C 003D64AC  EC A4 38 28 */	fsubs f5, f4, f7
/* 803D9570 003D64B0  90 01 00 18 */	stw r0, 0x18(r1)
/* 803D9574 003D64B4  EC 43 00 72 */	fmuls f2, f3, f1
/* 803D9578 003D64B8  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 803D957C 003D64BC  90 E1 00 24 */	stw r7, 0x24(r1)
/* 803D9580 003D64C0  EC 21 38 28 */	fsubs f1, f1, f7
/* 803D9584 003D64C4  90 01 00 20 */	stw r0, 0x20(r1)
/* 803D9588 003D64C8  C8 81 00 20 */	lfd f4, 0x20(r1)
/* 803D958C 003D64CC  EC C5 08 24 */	fdivs f6, f5, f1
/* 803D9590 003D64D0  91 41 00 2C */	stw r10, 0x2c(r1)
/* 803D9594 003D64D4  90 01 00 28 */	stw r0, 0x28(r1)
/* 803D9598 003D64D8  C8 61 00 28 */	lfd f3, 0x28(r1)
/* 803D959C 003D64DC  90 A1 00 34 */	stw r5, 0x34(r1)
/* 803D95A0 003D64E0  90 01 00 30 */	stw r0, 0x30(r1)
/* 803D95A4 003D64E4  C8 21 00 30 */	lfd f1, 0x30(r1)
/* 803D95A8 003D64E8  EC A4 38 28 */	fsubs f5, f4, f7
/* 803D95AC 003D64EC  EC 63 38 28 */	fsubs f3, f3, f7
/* 803D95B0 003D64F0  91 41 00 3C */	stw r10, 0x3c(r1)
/* 803D95B4 003D64F4  EC 81 38 28 */	fsubs f4, f1, f7
/* 803D95B8 003D64F8  90 01 00 38 */	stw r0, 0x38(r1)
/* 803D95BC 003D64FC  EC C8 01 B2 */	fmuls f6, f8, f6
/* 803D95C0 003D6500  EC A5 18 24 */	fdivs f5, f5, f3
/* 803D95C4 003D6504  C8 61 00 38 */	lfd f3, 0x38(r1)
/* 803D95C8 003D6508  90 81 00 54 */	stw r4, 0x54(r1)
/* 803D95CC 003D650C  90 01 00 50 */	stw r0, 0x50(r1)
/* 803D95D0 003D6510  C8 21 00 50 */	lfd f1, 0x50(r1)
/* 803D95D4 003D6514  EC 63 38 28 */	fsubs f3, f3, f7
/* 803D95D8 003D6518  EC 21 38 28 */	fsubs f1, f1, f7
/* 803D95DC 003D651C  EC A8 01 72 */	fmuls f5, f8, f5
/* 803D95E0 003D6520  EC 64 18 24 */	fdivs f3, f4, f3
/* 803D95E4 003D6524  EC 22 08 24 */	fdivs f1, f2, f1
/* 803D95E8 003D6528  EC 68 00 F2 */	fmuls f3, f8, f3
/* 803D95EC 003D652C  EC C6 08 2A */	fadds f6, f6, f1
/* 803D95F0 003D6530  EC A5 08 2A */	fadds f5, f5, f1
/* 803D95F4 003D6534  EC 63 08 2A */	fadds f3, f3, f1
/* 803D95F8 003D6538  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 803D95FC 003D653C  40 81 00 08 */	ble .L_803D9604
/* 803D9600 003D6540  FC C0 00 90 */	fmr f6, f0
.L_803D9604:
/* 803D9604 003D6544  C0 02 17 DC */	lfs f0, lbl_8051FB3C@sda21(r2)
/* 803D9608 003D6548  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803D960C 003D654C  40 81 00 08 */	ble .L_803D9614
/* 803D9610 003D6550  FC A0 00 90 */	fmr f5, f0
.L_803D9614:
/* 803D9614 003D6554  C0 02 17 DC */	lfs f0, lbl_8051FB3C@sda21(r2)
/* 803D9618 003D6558  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803D961C 003D655C  40 81 00 08 */	ble .L_803D9624
/* 803D9620 003D6560  FC 60 00 90 */	fmr f3, f0
.L_803D9624:
/* 803D9624 003D6564  C0 02 17 BC */	lfs f0, lbl_8051FB1C@sda21(r2)
/* 803D9628 003D6568  FC 06 00 40 */	fcmpo cr0, f6, f0
/* 803D962C 003D656C  40 80 00 08 */	bge .L_803D9634
/* 803D9630 003D6570  FC C0 00 90 */	fmr f6, f0
.L_803D9634:
/* 803D9634 003D6574  C0 02 17 BC */	lfs f0, lbl_8051FB1C@sda21(r2)
/* 803D9638 003D6578  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 803D963C 003D657C  40 80 00 08 */	bge .L_803D9644
/* 803D9640 003D6580  FC A0 00 90 */	fmr f5, f0
.L_803D9644:
/* 803D9644 003D6584  C0 02 17 BC */	lfs f0, lbl_8051FB1C@sda21(r2)
/* 803D9648 003D6588  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 803D964C 003D658C  40 80 00 08 */	bge .L_803D9654
/* 803D9650 003D6590  FC 60 00 90 */	fmr f3, f0
.L_803D9654:
/* 803D9654 003D6594  FC 40 30 1E */	fctiwz f2, f6
/* 803D9658 003D6598  38 00 FF FF */	li r0, -1
/* 803D965C 003D659C  FC 20 28 1E */	fctiwz f1, f5
/* 803D9660 003D65A0  90 01 00 08 */	stw r0, 8(r1)
/* 803D9664 003D65A4  FC 00 18 1E */	fctiwz f0, f3
/* 803D9668 003D65A8  38 00 00 FF */	li r0, 0xff
/* 803D966C 003D65AC  D8 41 00 58 */	stfd f2, 0x58(r1)
/* 803D9670 003D65B0  D8 21 00 60 */	stfd f1, 0x60(r1)
/* 803D9674 003D65B4  80 C1 00 5C */	lwz r6, 0x5c(r1)
/* 803D9678 003D65B8  D8 01 00 68 */	stfd f0, 0x68(r1)
/* 803D967C 003D65BC  80 A1 00 64 */	lwz r5, 0x64(r1)
/* 803D9680 003D65C0  80 81 00 6C */	lwz r4, 0x6c(r1)
/* 803D9684 003D65C4  98 C1 00 08 */	stb r6, 8(r1)
/* 803D9688 003D65C8  98 A1 00 09 */	stb r5, 9(r1)
/* 803D968C 003D65CC  98 81 00 0A */	stb r4, 0xa(r1)
/* 803D9690 003D65D0  98 01 00 0B */	stb r0, 0xb(r1)
/* 803D9694 003D65D4  80 01 00 08 */	lwz r0, 8(r1)
/* 803D9698 003D65D8  90 03 00 00 */	stw r0, 0(r3)
/* 803D969C 003D65DC  38 21 00 70 */	addi r1, r1, 0x70
/* 803D96A0 003D65E0  4E 80 00 20 */	blr 
.endfn calcDataBallColor___Q43ebi6Screen10FileSelect11TMainScreenFUlUlUlUlUl

.fn setIconColorAlpha___Q43ebi6Screen10FileSelect11TMainScreenFUc, global
/* 803D96A4 003D65E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803D96A8 003D65E8  7C 08 02 A6 */	mflr r0
/* 803D96AC 003D65EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803D96B0 003D65F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803D96B4 003D65F4  7C 7F 1B 78 */	mr r31, r3
/* 803D96B8 003D65F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803D96BC 003D65FC  3B C0 00 00 */	li r30, 0
/* 803D96C0 003D6600  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803D96C4 003D6604  7C 9D 23 78 */	mr r29, r4
.L_803D96C8:
/* 803D96C8 003D6608  80 7F 00 68 */	lwz r3, 0x68(r31)
/* 803D96CC 003D660C  7F A4 EB 78 */	mr r4, r29
/* 803D96D0 003D6610  81 83 00 00 */	lwz r12, 0(r3)
/* 803D96D4 003D6614  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D96D8 003D6618  7D 89 03 A6 */	mtctr r12
/* 803D96DC 003D661C  4E 80 04 21 */	bctrl 
/* 803D96E0 003D6620  80 7F 00 74 */	lwz r3, 0x74(r31)
/* 803D96E4 003D6624  7F A4 EB 78 */	mr r4, r29
/* 803D96E8 003D6628  81 83 00 00 */	lwz r12, 0(r3)
/* 803D96EC 003D662C  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 803D96F0 003D6630  7D 89 03 A6 */	mtctr r12
/* 803D96F4 003D6634  4E 80 04 21 */	bctrl 
/* 803D96F8 003D6638  3B DE 00 01 */	addi r30, r30, 1
/* 803D96FC 003D663C  3B FF 00 04 */	addi r31, r31, 4
/* 803D9700 003D6640  2C 1E 00 03 */	cmpwi r30, 3
/* 803D9704 003D6644  41 80 FF C4 */	blt .L_803D96C8
/* 803D9708 003D6648  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803D970C 003D664C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803D9710 003D6650  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803D9714 003D6654  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803D9718 003D6658  7C 08 03 A6 */	mtlr r0
/* 803D971C 003D665C  38 21 00 20 */	addi r1, r1, 0x20
/* 803D9720 003D6660  4E 80 00 20 */	blr 
.endfn setIconColorAlpha___Q43ebi6Screen10FileSelect11TMainScreenFUc

.section .text, "ax", unique, 1
.fn __ct__Q43ebi6Screen10FileSelect9TFileDataFv, weak
/* 803D9724 003D6664  38 E0 00 00 */	li r7, 0
/* 803D9728 003D6668  3C 80 00 01 */	lis r4, 0x00012FD1@ha
/* 803D972C 003D666C  98 E3 00 01 */	stb r7, 1(r3)
/* 803D9730 003D6670  38 04 2F D1 */	addi r0, r4, 0x00012FD1@l
/* 803D9734 003D6674  38 C0 02 9A */	li r6, 0x29a
/* 803D9738 003D6678  38 A4 5B 38 */	addi r5, r4, 0x5b38
/* 803D973C 003D667C  90 03 00 04 */	stw r0, 4(r3)
/* 803D9740 003D6680  38 80 00 58 */	li r4, 0x58
/* 803D9744 003D6684  38 00 00 0B */	li r0, 0xb
/* 803D9748 003D6688  90 C3 00 0C */	stw r6, 0xc(r3)
/* 803D974C 003D668C  90 C3 00 08 */	stw r6, 8(r3)
/* 803D9750 003D6690  90 C3 00 10 */	stw r6, 0x10(r3)
/* 803D9754 003D6694  90 C3 00 14 */	stw r6, 0x14(r3)
/* 803D9758 003D6698  90 C3 00 18 */	stw r6, 0x18(r3)
/* 803D975C 003D669C  90 A3 00 1C */	stw r5, 0x1c(r3)
/* 803D9760 003D66A0  90 83 00 20 */	stw r4, 0x20(r3)
/* 803D9764 003D66A4  90 E3 00 24 */	stw r7, 0x24(r3)
/* 803D9768 003D66A8  90 C3 00 28 */	stw r6, 0x28(r3)
/* 803D976C 003D66AC  90 03 00 2C */	stw r0, 0x2c(r3)
/* 803D9770 003D66B0  90 03 00 30 */	stw r0, 0x30(r3)
/* 803D9774 003D66B4  98 E3 00 00 */	stb r7, 0(r3)
/* 803D9778 003D66B8  4E 80 00 20 */	blr 
.endfn __ct__Q43ebi6Screen10FileSelect9TFileDataFv

.fn getName__Q43ebi6Screen10FileSelect11TMainScreenFv, weak
/* 803D977C 003D66BC  3C 60 80 49 */	lis r3, lbl_80496D28@ha
/* 803D9780 003D66C0  38 63 6D 28 */	addi r3, r3, lbl_80496D28@l
/* 803D9784 003D66C4  4E 80 00 20 */	blr 
.endfn getName__Q43ebi6Screen10FileSelect11TMainScreenFv

.fn __dt__Q35efx2d10FileSelect11T2DFileselMFv, weak
/* 803D9788 003D66C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D978C 003D66CC  7C 08 02 A6 */	mflr r0
/* 803D9790 003D66D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D9794 003D66D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D9798 003D66D8  7C 9F 23 78 */	mr r31, r4
/* 803D979C 003D66DC  93 C1 00 08 */	stw r30, 8(r1)
/* 803D97A0 003D66E0  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D97A4 003D66E4  41 82 00 64 */	beq .L_803D9808
/* 803D97A8 003D66E8  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect11T2DFileselM@ha
/* 803D97AC 003D66EC  38 63 8D D8 */	addi r3, r3, __vt__Q35efx2d10FileSelect11T2DFileselM@l
/* 803D97B0 003D66F0  90 7E 00 00 */	stw r3, 0(r30)
/* 803D97B4 003D66F4  38 03 00 18 */	addi r0, r3, 0x18
/* 803D97B8 003D66F8  90 1E 00 08 */	stw r0, 8(r30)
/* 803D97BC 003D66FC  41 82 00 3C */	beq .L_803D97F8
/* 803D97C0 003D6700  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803D97C4 003D6704  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803D97C8 003D6708  90 7E 00 00 */	stw r3, 0(r30)
/* 803D97CC 003D670C  38 03 00 18 */	addi r0, r3, 0x18
/* 803D97D0 003D6710  90 1E 00 08 */	stw r0, 8(r30)
/* 803D97D4 003D6714  41 82 00 24 */	beq .L_803D97F8
/* 803D97D8 003D6718  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D97DC 003D671C  38 7E 00 08 */	addi r3, r30, 8
/* 803D97E0 003D6720  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D97E4 003D6724  38 80 00 00 */	li r4, 0
/* 803D97E8 003D6728  90 BE 00 00 */	stw r5, 0(r30)
/* 803D97EC 003D672C  38 05 00 18 */	addi r0, r5, 0x18
/* 803D97F0 003D6730  90 1E 00 08 */	stw r0, 8(r30)
/* 803D97F4 003D6734  4B CB 64 A9 */	bl __dt__18JPAEmitterCallBackFv
.L_803D97F8:
/* 803D97F8 003D6738  7F E0 07 35 */	extsh. r0, r31
/* 803D97FC 003D673C  40 81 00 0C */	ble .L_803D9808
/* 803D9800 003D6740  7F C3 F3 78 */	mr r3, r30
/* 803D9804 003D6744  4B C4 A8 B1 */	bl __dl__FPv
.L_803D9808:
/* 803D9808 003D6748  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D980C 003D674C  7F C3 F3 78 */	mr r3, r30
/* 803D9810 003D6750  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D9814 003D6754  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D9818 003D6758  7C 08 03 A6 */	mtlr r0
/* 803D981C 003D675C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D9820 003D6760  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d10FileSelect11T2DFileselMFv

.section .text, "ax", unique, 2
.fn __dt__Q35efx2d10FileSelect16T2DFiledeletingMFv, weak
/* 803D9824 003D6764  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D9828 003D6768  7C 08 02 A6 */	mflr r0
/* 803D982C 003D676C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D9830 003D6770  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D9834 003D6774  7C 9F 23 78 */	mr r31, r4
/* 803D9838 003D6778  93 C1 00 08 */	stw r30, 8(r1)
/* 803D983C 003D677C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D9840 003D6780  41 82 00 4C */	beq .L_803D988C
/* 803D9844 003D6784  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect16T2DFiledeletingM@ha
/* 803D9848 003D6788  38 63 8E 50 */	addi r3, r3, __vt__Q35efx2d10FileSelect16T2DFiledeletingM@l
/* 803D984C 003D678C  90 7E 00 00 */	stw r3, 0(r30)
/* 803D9850 003D6790  38 03 00 18 */	addi r0, r3, 0x18
/* 803D9854 003D6794  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9858 003D6798  41 82 00 24 */	beq .L_803D987C
/* 803D985C 003D679C  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D9860 003D67A0  38 7E 00 08 */	addi r3, r30, 8
/* 803D9864 003D67A4  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D9868 003D67A8  38 80 00 00 */	li r4, 0
/* 803D986C 003D67AC  90 BE 00 00 */	stw r5, 0(r30)
/* 803D9870 003D67B0  38 05 00 18 */	addi r0, r5, 0x18
/* 803D9874 003D67B4  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9878 003D67B8  4B CB 64 25 */	bl __dt__18JPAEmitterCallBackFv
.L_803D987C:
/* 803D987C 003D67BC  7F E0 07 35 */	extsh. r0, r31
/* 803D9880 003D67C0  40 81 00 0C */	ble .L_803D988C
/* 803D9884 003D67C4  7F C3 F3 78 */	mr r3, r30
/* 803D9888 003D67C8  4B C4 A8 2D */	bl __dl__FPv
.L_803D988C:
/* 803D988C 003D67CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D9890 003D67D0  7F C3 F3 78 */	mr r3, r30
/* 803D9894 003D67D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D9898 003D67D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D989C 003D67DC  7C 08 03 A6 */	mtlr r0
/* 803D98A0 003D67E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803D98A4 003D67E4  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d10FileSelect16T2DFiledeletingMFv

.fn __dt__Q35efx2d10FileSelect15T2DFiledeletingFv, weak
/* 803D98A8 003D67E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D98AC 003D67EC  7C 08 02 A6 */	mflr r0
/* 803D98B0 003D67F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D98B4 003D67F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D98B8 003D67F8  7C 9F 23 78 */	mr r31, r4
/* 803D98BC 003D67FC  93 C1 00 08 */	stw r30, 8(r1)
/* 803D98C0 003D6800  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D98C4 003D6804  41 82 00 4C */	beq .L_803D9910
/* 803D98C8 003D6808  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect15T2DFiledeleting@ha
/* 803D98CC 003D680C  38 63 8E 88 */	addi r3, r3, __vt__Q35efx2d10FileSelect15T2DFiledeleting@l
/* 803D98D0 003D6810  90 7E 00 00 */	stw r3, 0(r30)
/* 803D98D4 003D6814  38 03 00 18 */	addi r0, r3, 0x18
/* 803D98D8 003D6818  90 1E 00 08 */	stw r0, 8(r30)
/* 803D98DC 003D681C  41 82 00 24 */	beq .L_803D9900
/* 803D98E0 003D6820  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D98E4 003D6824  38 7E 00 08 */	addi r3, r30, 8
/* 803D98E8 003D6828  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D98EC 003D682C  38 80 00 00 */	li r4, 0
/* 803D98F0 003D6830  90 BE 00 00 */	stw r5, 0(r30)
/* 803D98F4 003D6834  38 05 00 18 */	addi r0, r5, 0x18
/* 803D98F8 003D6838  90 1E 00 08 */	stw r0, 8(r30)
/* 803D98FC 003D683C  4B CB 63 A1 */	bl __dt__18JPAEmitterCallBackFv
.L_803D9900:
/* 803D9900 003D6840  7F E0 07 35 */	extsh. r0, r31
/* 803D9904 003D6844  40 81 00 0C */	ble .L_803D9910
/* 803D9908 003D6848  7F C3 F3 78 */	mr r3, r30
/* 803D990C 003D684C  4B C4 A7 A9 */	bl __dl__FPv
.L_803D9910:
/* 803D9910 003D6850  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D9914 003D6854  7F C3 F3 78 */	mr r3, r30
/* 803D9918 003D6858  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D991C 003D685C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D9920 003D6860  7C 08 03 A6 */	mtlr r0
/* 803D9924 003D6864  38 21 00 10 */	addi r1, r1, 0x10
/* 803D9928 003D6868  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d10FileSelect15T2DFiledeletingFv

.fn __dt__Q35efx2d10FileSelect12T2DFilecopyMFv, weak
/* 803D992C 003D686C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D9930 003D6870  7C 08 02 A6 */	mflr r0
/* 803D9934 003D6874  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D9938 003D6878  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D993C 003D687C  7C 9F 23 78 */	mr r31, r4
/* 803D9940 003D6880  93 C1 00 08 */	stw r30, 8(r1)
/* 803D9944 003D6884  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D9948 003D6888  41 82 00 64 */	beq .L_803D99AC
/* 803D994C 003D688C  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect12T2DFilecopyM@ha
/* 803D9950 003D6890  38 63 8E C0 */	addi r3, r3, __vt__Q35efx2d10FileSelect12T2DFilecopyM@l
/* 803D9954 003D6894  90 7E 00 00 */	stw r3, 0(r30)
/* 803D9958 003D6898  38 03 00 18 */	addi r0, r3, 0x18
/* 803D995C 003D689C  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9960 003D68A0  41 82 00 3C */	beq .L_803D999C
/* 803D9964 003D68A4  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@ha
/* 803D9968 003D68A8  38 63 75 60 */	addi r3, r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@l
/* 803D996C 003D68AC  90 7E 00 00 */	stw r3, 0(r30)
/* 803D9970 003D68B0  38 03 00 18 */	addi r0, r3, 0x18
/* 803D9974 003D68B4  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9978 003D68B8  41 82 00 24 */	beq .L_803D999C
/* 803D997C 003D68BC  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D9980 003D68C0  38 7E 00 08 */	addi r3, r30, 8
/* 803D9984 003D68C4  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D9988 003D68C8  38 80 00 00 */	li r4, 0
/* 803D998C 003D68CC  90 BE 00 00 */	stw r5, 0(r30)
/* 803D9990 003D68D0  38 05 00 18 */	addi r0, r5, 0x18
/* 803D9994 003D68D4  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9998 003D68D8  4B CB 63 05 */	bl __dt__18JPAEmitterCallBackFv
.L_803D999C:
/* 803D999C 003D68DC  7F E0 07 35 */	extsh. r0, r31
/* 803D99A0 003D68E0  40 81 00 0C */	ble .L_803D99AC
/* 803D99A4 003D68E4  7F C3 F3 78 */	mr r3, r30
/* 803D99A8 003D68E8  4B C4 A7 0D */	bl __dl__FPv
.L_803D99AC:
/* 803D99AC 003D68EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D99B0 003D68F0  7F C3 F3 78 */	mr r3, r30
/* 803D99B4 003D68F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D99B8 003D68F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D99BC 003D68FC  7C 08 03 A6 */	mtlr r0
/* 803D99C0 003D6900  38 21 00 10 */	addi r1, r1, 0x10
/* 803D99C4 003D6904  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d10FileSelect12T2DFilecopyMFv

.fn __dt__Q35efx2d10FileSelect11T2DFilecopyFv, weak
/* 803D99C8 003D6908  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D99CC 003D690C  7C 08 02 A6 */	mflr r0
/* 803D99D0 003D6910  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D99D4 003D6914  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D99D8 003D6918  7C 9F 23 78 */	mr r31, r4
/* 803D99DC 003D691C  93 C1 00 08 */	stw r30, 8(r1)
/* 803D99E0 003D6920  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D99E4 003D6924  41 82 00 64 */	beq .L_803D9A48
/* 803D99E8 003D6928  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect11T2DFilecopy@ha
/* 803D99EC 003D692C  38 63 8E F8 */	addi r3, r3, __vt__Q35efx2d10FileSelect11T2DFilecopy@l
/* 803D99F0 003D6930  90 7E 00 00 */	stw r3, 0(r30)
/* 803D99F4 003D6934  38 03 00 18 */	addi r0, r3, 0x18
/* 803D99F8 003D6938  90 1E 00 08 */	stw r0, 8(r30)
/* 803D99FC 003D693C  41 82 00 3C */	beq .L_803D9A38
/* 803D9A00 003D6940  3C 60 80 4E */	lis r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@ha
/* 803D9A04 003D6944  38 63 75 60 */	addi r3, r3, __vt__Q35efx2d10FileSelect15T2DFilecopyBase@l
/* 803D9A08 003D6948  90 7E 00 00 */	stw r3, 0(r30)
/* 803D9A0C 003D694C  38 03 00 18 */	addi r0, r3, 0x18
/* 803D9A10 003D6950  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9A14 003D6954  41 82 00 24 */	beq .L_803D9A38
/* 803D9A18 003D6958  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D9A1C 003D695C  38 7E 00 08 */	addi r3, r30, 8
/* 803D9A20 003D6960  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D9A24 003D6964  38 80 00 00 */	li r4, 0
/* 803D9A28 003D6968  90 BE 00 00 */	stw r5, 0(r30)
/* 803D9A2C 003D696C  38 05 00 18 */	addi r0, r5, 0x18
/* 803D9A30 003D6970  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9A34 003D6974  4B CB 62 69 */	bl __dt__18JPAEmitterCallBackFv
.L_803D9A38:
/* 803D9A38 003D6978  7F E0 07 35 */	extsh. r0, r31
/* 803D9A3C 003D697C  40 81 00 0C */	ble .L_803D9A48
/* 803D9A40 003D6980  7F C3 F3 78 */	mr r3, r30
/* 803D9A44 003D6984  4B C4 A6 71 */	bl __dl__FPv
.L_803D9A48:
/* 803D9A48 003D6988  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D9A4C 003D698C  7F C3 F3 78 */	mr r3, r30
/* 803D9A50 003D6990  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D9A54 003D6994  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D9A58 003D6998  7C 08 03 A6 */	mtlr r0
/* 803D9A5C 003D699C  38 21 00 10 */	addi r1, r1, 0x10
/* 803D9A60 003D69A0  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d10FileSelect11T2DFilecopyFv

.section .text, "ax", unique, 3
.fn __ct__Q23ebi19E2DCallBack_AnmBaseFv, weak
/* 803D9A64 003D69A4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D9A68 003D69A8  7C 08 02 A6 */	mflr r0
/* 803D9A6C 003D69AC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D9A70 003D69B0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D9A74 003D69B4  93 C1 00 08 */	stw r30, 8(r1)
/* 803D9A78 003D69B8  7C 7E 1B 78 */	mr r30, r3
/* 803D9A7C 003D69BC  7F DF F3 78 */	mr r31, r30
/* 803D9A80 003D69C0  48 03 79 11 */	bl __ct__5CNodeFv
/* 803D9A84 003D69C4  3C 60 80 4D */	lis r3, __vt__Q29P2DScreen4Node@ha
/* 803D9A88 003D69C8  3C C0 80 4D */	lis r6, __vt__Q29P2DScreen12CallBackNode@ha
/* 803D9A8C 003D69CC  38 03 7B 0C */	addi r0, r3, __vt__Q29P2DScreen4Node@l
/* 803D9A90 003D69D0  3C A0 80 4F */	lis r5, __vt__Q23ebi16E2DCallBack_Base@ha
/* 803D9A94 003D69D4  90 1F 00 00 */	stw r0, 0(r31)
/* 803D9A98 003D69D8  38 00 00 00 */	li r0, 0
/* 803D9A9C 003D69DC  3C 80 80 4F */	lis r4, __vt__Q23ebi19E2DCallBack_AnmBase@ha
/* 803D9AA0 003D69E0  3C 60 80 4E */	lis r3, __vt__12J3DFrameCtrl@ha
/* 803D9AA4 003D69E4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803D9AA8 003D69E8  38 06 7F 2C */	addi r0, r6, __vt__Q29P2DScreen12CallBackNode@l
/* 803D9AAC 003D69EC  38 E5 88 30 */	addi r7, r5, __vt__Q23ebi16E2DCallBack_Base@l
/* 803D9AB0 003D69F0  38 C0 00 01 */	li r6, 1
/* 803D9AB4 003D69F4  90 1F 00 00 */	stw r0, 0(r31)
/* 803D9AB8 003D69F8  38 A4 8A 0C */	addi r5, r4, __vt__Q23ebi19E2DCallBack_AnmBase@l
/* 803D9ABC 003D69FC  38 03 79 8C */	addi r0, r3, __vt__12J3DFrameCtrl@l
/* 803D9AC0 003D6A00  38 7E 00 20 */	addi r3, r30, 0x20
/* 803D9AC4 003D6A04  90 FF 00 00 */	stw r7, 0(r31)
/* 803D9AC8 003D6A08  38 80 00 00 */	li r4, 0
/* 803D9ACC 003D6A0C  98 DF 00 1C */	stb r6, 0x1c(r31)
/* 803D9AD0 003D6A10  90 BE 00 00 */	stw r5, 0(r30)
/* 803D9AD4 003D6A14  90 1E 00 20 */	stw r0, 0x20(r30)
/* 803D9AD8 003D6A18  4B C8 DB A1 */	bl init__12J3DFrameCtrlFs
/* 803D9ADC 003D6A1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D9AE0 003D6A20  7F C3 F3 78 */	mr r3, r30
/* 803D9AE4 003D6A24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D9AE8 003D6A28  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D9AEC 003D6A2C  7C 08 03 A6 */	mtlr r0
/* 803D9AF0 003D6A30  38 21 00 10 */	addi r1, r1, 0x10
/* 803D9AF4 003D6A34  4E 80 00 20 */	blr 
.endfn __ct__Q23ebi19E2DCallBack_AnmBaseFv

.fn set__Q23ebi26E2DCallBack_BlinkFontColorFRQ23ebi16E2DFullFontColorRQ23ebi16E2DFullFontColor, weak
/* 803D9AF8 003D6A38  88 04 00 00 */	lbz r0, 0(r4)
/* 803D9AFC 003D6A3C  98 03 00 20 */	stb r0, 0x20(r3)
/* 803D9B00 003D6A40  88 04 00 01 */	lbz r0, 1(r4)
/* 803D9B04 003D6A44  98 03 00 21 */	stb r0, 0x21(r3)
/* 803D9B08 003D6A48  88 04 00 02 */	lbz r0, 2(r4)
/* 803D9B0C 003D6A4C  98 03 00 22 */	stb r0, 0x22(r3)
/* 803D9B10 003D6A50  88 04 00 03 */	lbz r0, 3(r4)
/* 803D9B14 003D6A54  98 03 00 23 */	stb r0, 0x23(r3)
/* 803D9B18 003D6A58  88 04 00 04 */	lbz r0, 4(r4)
/* 803D9B1C 003D6A5C  98 03 00 24 */	stb r0, 0x24(r3)
/* 803D9B20 003D6A60  88 04 00 05 */	lbz r0, 5(r4)
/* 803D9B24 003D6A64  98 03 00 25 */	stb r0, 0x25(r3)
/* 803D9B28 003D6A68  88 04 00 06 */	lbz r0, 6(r4)
/* 803D9B2C 003D6A6C  98 03 00 26 */	stb r0, 0x26(r3)
/* 803D9B30 003D6A70  88 04 00 07 */	lbz r0, 7(r4)
/* 803D9B34 003D6A74  98 03 00 27 */	stb r0, 0x27(r3)
/* 803D9B38 003D6A78  88 04 00 08 */	lbz r0, 8(r4)
/* 803D9B3C 003D6A7C  98 03 00 28 */	stb r0, 0x28(r3)
/* 803D9B40 003D6A80  88 04 00 09 */	lbz r0, 9(r4)
/* 803D9B44 003D6A84  98 03 00 29 */	stb r0, 0x29(r3)
/* 803D9B48 003D6A88  88 04 00 0A */	lbz r0, 0xa(r4)
/* 803D9B4C 003D6A8C  98 03 00 2A */	stb r0, 0x2a(r3)
/* 803D9B50 003D6A90  88 04 00 0B */	lbz r0, 0xb(r4)
/* 803D9B54 003D6A94  98 03 00 2B */	stb r0, 0x2b(r3)
/* 803D9B58 003D6A98  88 04 00 0C */	lbz r0, 0xc(r4)
/* 803D9B5C 003D6A9C  98 03 00 2C */	stb r0, 0x2c(r3)
/* 803D9B60 003D6AA0  88 04 00 0D */	lbz r0, 0xd(r4)
/* 803D9B64 003D6AA4  98 03 00 2D */	stb r0, 0x2d(r3)
/* 803D9B68 003D6AA8  88 04 00 0E */	lbz r0, 0xe(r4)
/* 803D9B6C 003D6AAC  98 03 00 2E */	stb r0, 0x2e(r3)
/* 803D9B70 003D6AB0  88 04 00 0F */	lbz r0, 0xf(r4)
/* 803D9B74 003D6AB4  98 03 00 2F */	stb r0, 0x2f(r3)
/* 803D9B78 003D6AB8  88 05 00 00 */	lbz r0, 0(r5)
/* 803D9B7C 003D6ABC  98 03 00 30 */	stb r0, 0x30(r3)
/* 803D9B80 003D6AC0  88 05 00 01 */	lbz r0, 1(r5)
/* 803D9B84 003D6AC4  98 03 00 31 */	stb r0, 0x31(r3)
/* 803D9B88 003D6AC8  88 05 00 02 */	lbz r0, 2(r5)
/* 803D9B8C 003D6ACC  98 03 00 32 */	stb r0, 0x32(r3)
/* 803D9B90 003D6AD0  88 05 00 03 */	lbz r0, 3(r5)
/* 803D9B94 003D6AD4  98 03 00 33 */	stb r0, 0x33(r3)
/* 803D9B98 003D6AD8  88 05 00 04 */	lbz r0, 4(r5)
/* 803D9B9C 003D6ADC  98 03 00 34 */	stb r0, 0x34(r3)
/* 803D9BA0 003D6AE0  88 05 00 05 */	lbz r0, 5(r5)
/* 803D9BA4 003D6AE4  98 03 00 35 */	stb r0, 0x35(r3)
/* 803D9BA8 003D6AE8  88 05 00 06 */	lbz r0, 6(r5)
/* 803D9BAC 003D6AEC  98 03 00 36 */	stb r0, 0x36(r3)
/* 803D9BB0 003D6AF0  88 05 00 07 */	lbz r0, 7(r5)
/* 803D9BB4 003D6AF4  98 03 00 37 */	stb r0, 0x37(r3)
/* 803D9BB8 003D6AF8  88 05 00 08 */	lbz r0, 8(r5)
/* 803D9BBC 003D6AFC  98 03 00 38 */	stb r0, 0x38(r3)
/* 803D9BC0 003D6B00  88 05 00 09 */	lbz r0, 9(r5)
/* 803D9BC4 003D6B04  98 03 00 39 */	stb r0, 0x39(r3)
/* 803D9BC8 003D6B08  88 05 00 0A */	lbz r0, 0xa(r5)
/* 803D9BCC 003D6B0C  98 03 00 3A */	stb r0, 0x3a(r3)
/* 803D9BD0 003D6B10  88 05 00 0B */	lbz r0, 0xb(r5)
/* 803D9BD4 003D6B14  98 03 00 3B */	stb r0, 0x3b(r3)
/* 803D9BD8 003D6B18  88 05 00 0C */	lbz r0, 0xc(r5)
/* 803D9BDC 003D6B1C  98 03 00 3C */	stb r0, 0x3c(r3)
/* 803D9BE0 003D6B20  88 05 00 0D */	lbz r0, 0xd(r5)
/* 803D9BE4 003D6B24  98 03 00 3D */	stb r0, 0x3d(r3)
/* 803D9BE8 003D6B28  88 05 00 0E */	lbz r0, 0xe(r5)
/* 803D9BEC 003D6B2C  98 03 00 3E */	stb r0, 0x3e(r3)
/* 803D9BF0 003D6B30  88 05 00 0F */	lbz r0, 0xf(r5)
/* 803D9BF4 003D6B34  98 03 00 3F */	stb r0, 0x3f(r3)
/* 803D9BF8 003D6B38  4E 80 00 20 */	blr 
.endfn set__Q23ebi26E2DCallBack_BlinkFontColorFRQ23ebi16E2DFullFontColorRQ23ebi16E2DFullFontColor

.section .text, "ax", unique, 4
.fn getName__Q25efx2d8ArgColorFv, weak
/* 803D9BFC 003D6B3C  3C 60 80 49 */	lis r3, lbl_80496D10@ha
/* 803D9C00 003D6B40  38 63 6D 10 */	addi r3, r3, lbl_80496D10@l
/* 803D9C04 003D6B44  4E 80 00 20 */	blr 
.endfn getName__Q25efx2d8ArgColorFv

.fn getName__Q35efx2d10FileSelect11ArgFilecopyFv, weak
/* 803D9C08 003D6B48  3C 60 80 49 */	lis r3, lbl_80496D1C@ha
/* 803D9C0C 003D6B4C  38 63 6D 1C */	addi r3, r3, lbl_80496D1C@l
/* 803D9C10 003D6B50  4E 80 00 20 */	blr 
.endfn getName__Q35efx2d10FileSelect11ArgFilecopyFv

.section .text, "ax", unique, 5
.fn __dt__Q35efx2d10FileSelect10T2DFileselFv, weak
/* 803D9C14 003D6B54  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803D9C18 003D6B58  7C 08 02 A6 */	mflr r0
/* 803D9C1C 003D6B5C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803D9C20 003D6B60  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803D9C24 003D6B64  7C 9F 23 78 */	mr r31, r4
/* 803D9C28 003D6B68  93 C1 00 08 */	stw r30, 8(r1)
/* 803D9C2C 003D6B6C  7C 7E 1B 79 */	or. r30, r3, r3
/* 803D9C30 003D6B70  41 82 00 64 */	beq .L_803D9C94
/* 803D9C34 003D6B74  3C 60 80 4F */	lis r3, __vt__Q35efx2d10FileSelect10T2DFilesel@ha
/* 803D9C38 003D6B78  38 63 8E 14 */	addi r3, r3, __vt__Q35efx2d10FileSelect10T2DFilesel@l
/* 803D9C3C 003D6B7C  90 7E 00 00 */	stw r3, 0(r30)
/* 803D9C40 003D6B80  38 03 00 18 */	addi r0, r3, 0x18
/* 803D9C44 003D6B84  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9C48 003D6B88  41 82 00 3C */	beq .L_803D9C84
/* 803D9C4C 003D6B8C  3C 60 80 4E */	lis r3, __vt__Q25efx2d9TChasePos@ha
/* 803D9C50 003D6B90  38 63 73 CC */	addi r3, r3, __vt__Q25efx2d9TChasePos@l
/* 803D9C54 003D6B94  90 7E 00 00 */	stw r3, 0(r30)
/* 803D9C58 003D6B98  38 03 00 18 */	addi r0, r3, 0x18
/* 803D9C5C 003D6B9C  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9C60 003D6BA0  41 82 00 24 */	beq .L_803D9C84
/* 803D9C64 003D6BA4  3C 80 80 4E */	lis r4, __vt__Q25efx2d8TForever@ha
/* 803D9C68 003D6BA8  38 7E 00 08 */	addi r3, r30, 8
/* 803D9C6C 003D6BAC  38 A4 74 20 */	addi r5, r4, __vt__Q25efx2d8TForever@l
/* 803D9C70 003D6BB0  38 80 00 00 */	li r4, 0
/* 803D9C74 003D6BB4  90 BE 00 00 */	stw r5, 0(r30)
/* 803D9C78 003D6BB8  38 05 00 18 */	addi r0, r5, 0x18
/* 803D9C7C 003D6BBC  90 1E 00 08 */	stw r0, 8(r30)
/* 803D9C80 003D6BC0  4B CB 60 1D */	bl __dt__18JPAEmitterCallBackFv
.L_803D9C84:
/* 803D9C84 003D6BC4  7F E0 07 35 */	extsh. r0, r31
/* 803D9C88 003D6BC8  40 81 00 0C */	ble .L_803D9C94
/* 803D9C8C 003D6BCC  7F C3 F3 78 */	mr r3, r30
/* 803D9C90 003D6BD0  4B C4 A4 25 */	bl __dl__FPv
.L_803D9C94:
/* 803D9C94 003D6BD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803D9C98 003D6BD8  7F C3 F3 78 */	mr r3, r30
/* 803D9C9C 003D6BDC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803D9CA0 003D6BE0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803D9CA4 003D6BE4  7C 08 03 A6 */	mtlr r0
/* 803D9CA8 003D6BE8  38 21 00 10 */	addi r1, r1, 0x10
/* 803D9CAC 003D6BEC  4E 80 00 20 */	blr 
.endfn __dt__Q35efx2d10FileSelect10T2DFileselFv

.section .text, "ax", unique, 6
.fn "@8@__dt__Q35efx2d10FileSelect11T2DFilecopyFv", weak
/* 803D9CB0 003D6BF0  38 63 FF F8 */	addi r3, r3, -8
/* 803D9CB4 003D6BF4  4B FF FD 14 */	b __dt__Q35efx2d10FileSelect11T2DFilecopyFv
.endfn "@8@__dt__Q35efx2d10FileSelect11T2DFilecopyFv"

.fn "@8@__dt__Q35efx2d10FileSelect12T2DFilecopyMFv", weak
/* 803D9CB8 003D6BF8  38 63 FF F8 */	addi r3, r3, -8
/* 803D9CBC 003D6BFC  4B FF FC 70 */	b __dt__Q35efx2d10FileSelect12T2DFilecopyMFv
.endfn "@8@__dt__Q35efx2d10FileSelect12T2DFilecopyMFv"

.fn "@8@__dt__Q35efx2d10FileSelect15T2DFiledeletingFv", weak
/* 803D9CC0 003D6C00  38 63 FF F8 */	addi r3, r3, -8
/* 803D9CC4 003D6C04  4B FF FB E4 */	b __dt__Q35efx2d10FileSelect15T2DFiledeletingFv
.endfn "@8@__dt__Q35efx2d10FileSelect15T2DFiledeletingFv"

.fn "@8@__dt__Q35efx2d10FileSelect16T2DFiledeletingMFv", weak
/* 803D9CC8 003D6C08  38 63 FF F8 */	addi r3, r3, -8
/* 803D9CCC 003D6C0C  4B FF FB 58 */	b __dt__Q35efx2d10FileSelect16T2DFiledeletingMFv
.endfn "@8@__dt__Q35efx2d10FileSelect16T2DFiledeletingMFv"

.fn "@8@__dt__Q35efx2d10FileSelect10T2DFileselFv", weak
/* 803D9CD0 003D6C10  38 63 FF F8 */	addi r3, r3, -8
/* 803D9CD4 003D6C14  4B FF FF 40 */	b __dt__Q35efx2d10FileSelect10T2DFileselFv
.endfn "@8@__dt__Q35efx2d10FileSelect10T2DFileselFv"

.fn "@8@__dt__Q35efx2d10FileSelect11T2DFileselMFv", weak
/* 803D9CD8 003D6C18  38 63 FF F8 */	addi r3, r3, -8
/* 803D9CDC 003D6C1C  4B FF FA AC */	b __dt__Q35efx2d10FileSelect11T2DFileselMFv
.endfn "@8@__dt__Q35efx2d10FileSelect11T2DFileselMFv"
