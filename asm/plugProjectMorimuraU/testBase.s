.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q28Morimura9TTestBase
__vt__Q28Morimura9TTestBase:
	.4byte 0
	.4byte 0
	.4byte __dt__Q28Morimura9TTestBaseFv
	.4byte getChildCount__5CNodeFv
	.4byte 0
	.4byte 0
	.4byte "@24@__dt__Q28Morimura9TTestBaseFv"
	.4byte update__Q26Screen7ObjBaseFv
	.4byte draw__Q26Screen7ObjBaseFR8Graphics
	.4byte start__Q26Screen7ObjBaseFPCQ26Screen13StartSceneArg
	.4byte end__Q26Screen7ObjBaseFPCQ26Screen11EndSceneArg
	.4byte setOwner__Q26Screen7ObjBaseFPQ26Screen9SceneBase
	.4byte getOwner__Q26Screen7ObjBaseCFv
	.4byte create__Q26Screen7ObjBaseFP10JKRArchive
	.4byte confirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte confirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte confirmEndScene__Q26Screen7ObjBaseFPQ26Screen11EndSceneArg
	.4byte doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
	.4byte doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
	.4byte doCreate__Q26Screen7ObjBaseFP10JKRArchive
	.4byte doUpdateFadein__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeinFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdate__Q26Screen7ObjBaseFv
	.4byte doUpdateFinish__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeout__Q28Morimura9TTestBaseFv
	.4byte doUpdateFadeoutFinish__Q26Screen7ObjBaseFv
	.4byte doDraw__Q26Screen7ObjBaseFR8Graphics
	.4byte doConfirmSetScene__Q26Screen7ObjBaseFRQ26Screen11SetSceneArg
	.4byte doConfirmStartScene__Q26Screen7ObjBaseFPQ26Screen13StartSceneArg
	.4byte doConfirmEndScene__Q26Screen7ObjBaseFRPQ26Screen11EndSceneArg
	.4byte 0
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q28Morimura9TTestBaseFPc
__ct__Q28Morimura9TTestBaseFPc:
/* 803491C8 00346108  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803491CC 0034610C  7C 08 02 A6 */	mflr r0
/* 803491D0 00346110  90 01 00 14 */	stw r0, 0x14(r1)
/* 803491D4 00346114  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803491D8 00346118  7C 9F 23 78 */	mr r31, r4
/* 803491DC 0034611C  93 C1 00 08 */	stw r30, 8(r1)
/* 803491E0 00346120  7C 7E 1B 78 */	mr r30, r3
/* 803491E4 00346124  48 10 A9 05 */	bl __ct__Q26Screen7ObjBaseFv
/* 803491E8 00346128  3C 60 80 4E */	lis r3, __vt__Q28Morimura9TTestBase@ha
/* 803491EC 0034612C  C0 22 FF 90 */	lfs f1, lbl_8051E2F0@sda21(r2)
/* 803491F0 00346130  38 63 B8 F8 */	addi r3, r3, __vt__Q28Morimura9TTestBase@l
/* 803491F4 00346134  C0 02 FF 94 */	lfs f0, lbl_8051E2F4@sda21(r2)
/* 803491F8 00346138  90 7E 00 00 */	stw r3, 0(r30)
/* 803491FC 0034613C  38 63 00 10 */	addi r3, r3, 0x10
/* 80349200 00346140  38 00 00 00 */	li r0, 0
/* 80349204 00346144  7F E4 FB 78 */	mr r4, r31
/* 80349208 00346148  90 7E 00 18 */	stw r3, 0x18(r30)
/* 8034920C 0034614C  38 7E 00 46 */	addi r3, r30, 0x46
/* 80349210 00346150  D0 3E 00 38 */	stfs f1, 0x38(r30)
/* 80349214 00346154  D0 1E 00 3C */	stfs f0, 0x3c(r30)
/* 80349218 00346158  D0 3E 00 40 */	stfs f1, 0x40(r30)
/* 8034921C 0034615C  98 1E 00 44 */	stb r0, 0x44(r30)
/* 80349220 00346160  98 1E 00 45 */	stb r0, 0x45(r30)
/* 80349224 00346164  4B D8 16 35 */	bl strcpy
/* 80349228 00346168  38 1E 00 46 */	addi r0, r30, 0x46
/* 8034922C 0034616C  7F C3 F3 78 */	mr r3, r30
/* 80349230 00346170  90 1E 00 14 */	stw r0, 0x14(r30)
/* 80349234 00346174  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80349238 00346178  83 C1 00 08 */	lwz r30, 8(r1)
/* 8034923C 0034617C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80349240 00346180  7C 08 03 A6 */	mtlr r0
/* 80349244 00346184  38 21 00 10 */	addi r1, r1, 0x10
/* 80349248 00346188  4E 80 00 20 */	blr 

.global doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg
doStart__Q28Morimura9TTestBaseFPCQ26Screen13StartSceneArg:
/* 8034924C 0034618C  C0 02 FF 90 */	lfs f0, lbl_8051E2F0@sda21(r2)
/* 80349250 00346190  38 00 00 00 */	li r0, 0
/* 80349254 00346194  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 80349258 00346198  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 8034925C 0034619C  98 03 00 44 */	stb r0, 0x44(r3)
/* 80349260 003461A0  98 03 00 45 */	stb r0, 0x45(r3)
/* 80349264 003461A4  38 60 00 01 */	li r3, 1
/* 80349268 003461A8  4E 80 00 20 */	blr 

.global doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg
doEnd__Q28Morimura9TTestBaseFPCQ26Screen11EndSceneArg:
/* 8034926C 003461AC  C0 02 FF 90 */	lfs f0, lbl_8051E2F0@sda21(r2)
/* 80349270 003461B0  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80349274 003461B4  38 60 00 01 */	li r3, 1
/* 80349278 003461B8  4E 80 00 20 */	blr 

.global doUpdateFadein__Q28Morimura9TTestBaseFv
doUpdateFadein__Q28Morimura9TTestBaseFv:
/* 8034927C 003461BC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80349280 003461C0  7C 08 02 A6 */	mflr r0
/* 80349284 003461C4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80349288 003461C8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8034928C 003461CC  7C 7F 1B 78 */	mr r31, r3
/* 80349290 003461D0  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80349294 003461D4  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 80349298 003461D8  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 8034929C 003461DC  EC 01 00 2A */	fadds f0, f1, f0
/* 803492A0 003461E0  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 803492A4 003461E4  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 803492A8 003461E8  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 803492AC 003461EC  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803492B0 003461F0  40 81 00 08 */	ble lbl_803492B8
/* 803492B4 003461F4  D0 3F 00 38 */	stfs f1, 0x38(r31)
lbl_803492B8:
/* 803492B8 003461F8  C0 5F 00 38 */	lfs f2, 0x38(r31)
/* 803492BC 003461FC  7F E3 FB 78 */	mr r3, r31
/* 803492C0 00346200  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 803492C4 00346204  C0 22 FF 98 */	lfs f1, lbl_8051E2F8@sda21(r2)
/* 803492C8 00346208  EC 02 00 24 */	fdivs f0, f2, f0
/* 803492CC 0034620C  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 803492D0 00346210  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 803492D4 00346214  EC 01 00 32 */	fmuls f0, f1, f0
/* 803492D8 00346218  FC 00 00 1E */	fctiwz f0, f0
/* 803492DC 0034621C  D8 01 00 08 */	stfd f0, 8(r1)
/* 803492E0 00346220  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803492E4 00346224  98 1F 00 44 */	stb r0, 0x44(r31)
/* 803492E8 00346228  81 9F 00 00 */	lwz r12, 0(r31)
/* 803492EC 0034622C  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803492F0 00346230  7D 89 03 A6 */	mtctr r12
/* 803492F4 00346234  4E 80 04 21 */	bctrl 
/* 803492F8 00346238  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 803492FC 0034623C  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 80349300 00346240  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80349304 00346244  4C 41 13 82 */	cror 2, 1, 2
/* 80349308 00346248  40 82 00 0C */	bne lbl_80349314
/* 8034930C 0034624C  38 60 00 01 */	li r3, 1
/* 80349310 00346250  48 00 00 08 */	b lbl_80349318
lbl_80349314:
/* 80349314 00346254  38 60 00 00 */	li r3, 0
lbl_80349318:
/* 80349318 00346258  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8034931C 0034625C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80349320 00346260  7C 08 03 A6 */	mtlr r0
/* 80349324 00346264  38 21 00 20 */	addi r1, r1, 0x20
/* 80349328 00346268  4E 80 00 20 */	blr 

.global doUpdateFinish__Q28Morimura9TTestBaseFv
doUpdateFinish__Q28Morimura9TTestBaseFv:
/* 8034932C 0034626C  C0 02 FF 90 */	lfs f0, lbl_8051E2F0@sda21(r2)
/* 80349330 00346270  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80349334 00346274  4E 80 00 20 */	blr 

.global doUpdateFadeout__Q28Morimura9TTestBaseFv
doUpdateFadeout__Q28Morimura9TTestBaseFv:
/* 80349338 00346278  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8034933C 0034627C  7C 08 02 A6 */	mflr r0
/* 80349340 00346280  90 01 00 24 */	stw r0, 0x24(r1)
/* 80349344 00346284  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80349348 00346288  7C 7F 1B 78 */	mr r31, r3
/* 8034934C 0034628C  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 80349350 00346290  C0 23 00 38 */	lfs f1, 0x38(r3)
/* 80349354 00346294  C0 04 00 54 */	lfs f0, 0x54(r4)
/* 80349358 00346298  EC 01 00 2A */	fadds f0, f1, f0
/* 8034935C 0034629C  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80349360 003462A0  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 80349364 003462A4  C0 23 00 3C */	lfs f1, 0x3c(r3)
/* 80349368 003462A8  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 8034936C 003462AC  40 81 00 08 */	ble lbl_80349374
/* 80349370 003462B0  D0 3F 00 38 */	stfs f1, 0x38(r31)
lbl_80349374:
/* 80349374 003462B4  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 80349378 003462B8  7F E3 FB 78 */	mr r3, r31
/* 8034937C 003462BC  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 80349380 003462C0  C0 42 FF 9C */	lfs f2, lbl_8051E2FC@sda21(r2)
/* 80349384 003462C4  EC 01 00 24 */	fdivs f0, f1, f0
/* 80349388 003462C8  C0 22 FF 98 */	lfs f1, lbl_8051E2F8@sda21(r2)
/* 8034938C 003462CC  EC 02 00 28 */	fsubs f0, f2, f0
/* 80349390 003462D0  D0 1F 00 40 */	stfs f0, 0x40(r31)
/* 80349394 003462D4  C0 1F 00 40 */	lfs f0, 0x40(r31)
/* 80349398 003462D8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8034939C 003462DC  FC 00 00 1E */	fctiwz f0, f0
/* 803493A0 003462E0  D8 01 00 08 */	stfd f0, 8(r1)
/* 803493A4 003462E4  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803493A8 003462E8  98 1F 00 44 */	stb r0, 0x44(r31)
/* 803493AC 003462EC  81 9F 00 00 */	lwz r12, 0(r31)
/* 803493B0 003462F0  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 803493B4 003462F4  7D 89 03 A6 */	mtctr r12
/* 803493B8 003462F8  4E 80 04 21 */	bctrl 
/* 803493BC 003462FC  C0 3F 00 38 */	lfs f1, 0x38(r31)
/* 803493C0 00346300  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 803493C4 00346304  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803493C8 00346308  4C 41 13 82 */	cror 2, 1, 2
/* 803493CC 0034630C  40 82 00 0C */	bne lbl_803493D8
/* 803493D0 00346310  38 60 00 01 */	li r3, 1
/* 803493D4 00346314  48 00 00 08 */	b lbl_803493DC
lbl_803493D8:
/* 803493D8 00346318  38 60 00 00 */	li r3, 0
lbl_803493DC:
/* 803493DC 0034631C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803493E0 00346320  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803493E4 00346324  7C 08 03 A6 */	mtlr r0
/* 803493E8 00346328  38 21 00 20 */	addi r1, r1, 0x20
/* 803493EC 0034632C  4E 80 00 20 */	blr 

.global "@24@__dt__Q28Morimura9TTestBaseFv"
"@24@__dt__Q28Morimura9TTestBaseFv":
/* 803493F0 00346330  38 63 FF E8 */	addi r3, r3, -24
/* 803493F4 00346334  4B FF AD 74 */	b __dt__Q28Morimura9TTestBaseFv
