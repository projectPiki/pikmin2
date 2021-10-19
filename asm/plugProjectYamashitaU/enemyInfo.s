.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 0x8
.global lbl_8047B448
lbl_8047B448:
	.asciz "Pelplant"
	.skip 3
.global lbl_8047B454
lbl_8047B454:
	.asciz "Kochappy"
	.skip 3
.global lbl_8047B460
lbl_8047B460:
	.asciz "BlueKochappy"
	.skip 3
.global lbl_8047B470
lbl_8047B470:
	.asciz "YellowKochappy"
	.skip 1
.global lbl_8047B480
lbl_8047B480:
	.asciz "KumaKochappy"
	.skip 3
.global lbl_8047B490
lbl_8047B490:
	.asciz "BlueChappy"
	.skip 1
.global lbl_8047B49C
lbl_8047B49C:
	.asciz "YellowChappy"
	.skip 3
.global lbl_8047B4AC
lbl_8047B4AC:
	.asciz "YellowPom"
	.skip 2
.global lbl_8047B4B8
lbl_8047B4B8:
	.asciz "BlackPom"
	.skip 3
.global lbl_8047B4C4
lbl_8047B4C4:
	.asciz "WhitePom"
	.skip 3
.global lbl_8047B4D0
lbl_8047B4D0:
	.asciz "MaroFrog"
	.skip 3
.global lbl_8047B4DC
lbl_8047B4DC:
	.asciz "Imomushi"
	.skip 3
.global lbl_8047B4E8
lbl_8047B4E8:
	.asciz "ElecHiba"
	.skip 3
.global lbl_8047B4F4
lbl_8047B4F4:
	.asciz "BombSarai"
	.skip 2
.global lbl_8047B500
lbl_8047B500:
	.asciz "Hanachirashi"
	.skip 3
.global lbl_8047B510
lbl_8047B510:
	.asciz "OniKurage"
	.skip 2
.global lbl_8047B51C
lbl_8047B51C:
	.asciz "FireChappy"
	.skip 1
.global lbl_8047B528
lbl_8047B528:
	.asciz "KumaChappy"
	.skip 1
.global lbl_8047B534
lbl_8047B534:
	.asciz "LeafChappy"
	.skip 1
.global lbl_8047B540
lbl_8047B540:
	.asciz "SnakeCrow"
	.skip 2
.global lbl_8047B54C
lbl_8047B54C:
	.asciz "SnakeWhole"
	.skip 1
.global lbl_8047B558
lbl_8047B558:
	.asciz "PanModoki"
	.skip 2
.global lbl_8047B564
lbl_8047B564:
	.asciz "OoPanModoki"
.global lbl_8047B570
lbl_8047B570:
	.asciz "PanHouse"
	.skip 3
.global lbl_8047B57C
lbl_8047B57C:
	.asciz "HikariKinoko"
	.skip 3
.global lbl_8047B58C
lbl_8047B58C:
	.asciz "KareOoinu_s"
.global lbl_8047B598
lbl_8047B598:
	.asciz "KareOoinu_l"
.global lbl_8047B5A4
lbl_8047B5A4:
	.asciz "Wakame_s"
	.skip 3
.global lbl_8047B5B0
lbl_8047B5B0:
	.asciz "Wakame_l"
	.skip 3
.global lbl_8047B5BC
lbl_8047B5BC:
	.asciz "DaiodoRed"
	.skip 2
.global lbl_8047B5C8
lbl_8047B5C8:
	.asciz "DaiodoGreen"
.global lbl_8047B5D4
lbl_8047B5D4:
	.asciz "Nekojarashi"
.global lbl_8047B5E0
lbl_8047B5E0:
	.asciz "Chiyogami"
	.skip 2
.global lbl_8047B5EC
lbl_8047B5EC:
	.asciz "KingChappy"
	.skip 1
.global lbl_8047B5F8
lbl_8047B5F8:
	.asciz "Damagumo"
	.skip 3
.global lbl_8047B604
lbl_8047B604:
	.asciz "FireOtakara"
.global lbl_8047B610
lbl_8047B610:
	.asciz "WaterOtakara"
	.skip 3
.global lbl_8047B620
lbl_8047B620:
	.asciz "GasOtakara"
	.skip 1
.global lbl_8047B62C
lbl_8047B62C:
	.asciz "ElecOtakara"
.global lbl_8047B638
lbl_8047B638:
	.asciz "TamagoMushi"
.global lbl_8047B644
lbl_8047B644:
	.asciz "UmiMushiBase"
	.skip 3
.global lbl_8047B654
lbl_8047B654:
	.asciz "UmiMushi"
	.skip 3
.global lbl_8047B660
lbl_8047B660:
	.asciz "UmiMushiBlind"
	.skip 2
.global lbl_8047B670
lbl_8047B670:
	.asciz "BigTreasure"
.global lbl_8047B67C
lbl_8047B67C:
	.asciz "ShijimiChou"
.global lbl_8047B688
lbl_8047B688:
	.asciz "MiniHoudai"
	.skip 1
.global lbl_8047B694
lbl_8047B694:
	.asciz "FminiHoudai"
.global lbl_8047B6A0
lbl_8047B6A0:
	.asciz "BombOtakara"
.global lbl_8047B6AC
lbl_8047B6AC:
	.asciz "BlackMan"
	.skip 3
.global lbl_8047B6B8
lbl_8047B6B8:
	.asciz "DangoMushi"
	.skip 1

.section .sdata, "wa"  # 0x80514680 - 0x80514D80
.balign 0x8
.global gEnemyInfoNum__4Game #Number of elements in gEnemyInfo.
gEnemyInfoNum__4Game:
	.4byte 100

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global getEnemyInfo__Q24Game13EnemyInfoFuncFii
getEnemyInfo__Q24Game13EnemyInfoFuncFii:
/* 80123278 001201B8  80 0D 83 D0 */	lwz r0, gEnemyInfoNum__4Game@sda21(r13)
/* 8012327C 001201BC  3C A0 80 4B */	lis r5, gEnemyInfo__4Game@ha
/* 80123280 001201C0  38 A5 C5 38 */	addi r5, r5, gEnemyInfo__4Game@l
/* 80123284 001201C4  38 C0 00 00 */	li r6, 0
/* 80123288 001201C8  38 E0 00 00 */	li r7, 0
/* 8012328C 001201CC  7C 09 03 A6 */	mtctr r0
/* 80123290 001201D0  2C 00 00 00 */	cmpwi r0, 0
/* 80123294 001201D4  40 81 00 40 */	ble lbl_801232D4
lbl_80123298:
/* 80123298 001201D8  88 05 00 04 */	lbz r0, 4(r5)
/* 8012329C 001201DC  7C 00 07 74 */	extsb r0, r0
/* 801232A0 001201E0  7C 03 00 00 */	cmpw r3, r0
/* 801232A4 001201E4  40 82 00 24 */	bne lbl_801232C8
/* 801232A8 001201E8  A0 05 00 08 */	lhz r0, 8(r5)
/* 801232AC 001201EC  7C 80 00 39 */	and. r0, r4, r0
/* 801232B0 001201F0  41 82 00 18 */	beq lbl_801232C8
/* 801232B4 001201F4  1C 87 00 34 */	mulli r4, r7, 0x34
/* 801232B8 001201F8  3C 60 80 4B */	lis r3, gEnemyInfo__4Game@ha
/* 801232BC 001201FC  38 03 C5 38 */	addi r0, r3, gEnemyInfo__4Game@l
/* 801232C0 00120200  7C C0 22 14 */	add r6, r0, r4
/* 801232C4 00120204  48 00 00 10 */	b lbl_801232D4
lbl_801232C8:
/* 801232C8 00120208  38 A5 00 34 */	addi r5, r5, 0x34
/* 801232CC 0012020C  38 E7 00 01 */	addi r7, r7, 1
/* 801232D0 00120210  42 00 FF C8 */	bdnz lbl_80123298
lbl_801232D4:
/* 801232D4 00120214  7C C3 33 78 */	mr r3, r6
/* 801232D8 00120218  4E 80 00 20 */	blr 

.global getEnemyName__Q24Game13EnemyInfoFuncFii
getEnemyName__Q24Game13EnemyInfoFuncFii:
/* 801232DC 0012021C  80 0D 83 D0 */	lwz r0, gEnemyInfoNum__4Game@sda21(r13)
/* 801232E0 00120220  3C A0 80 4B */	lis r5, gEnemyInfo__4Game@ha
/* 801232E4 00120224  38 C0 00 00 */	li r6, 0
/* 801232E8 00120228  38 E5 C5 38 */	addi r7, r5, gEnemyInfo__4Game@l
/* 801232EC 0012022C  7C C5 33 78 */	mr r5, r6
/* 801232F0 00120230  7C 09 03 A6 */	mtctr r0
/* 801232F4 00120234  2C 00 00 00 */	cmpwi r0, 0
/* 801232F8 00120238  40 81 00 40 */	ble lbl_80123338
lbl_801232FC:
/* 801232FC 0012023C  88 07 00 04 */	lbz r0, 4(r7)
/* 80123300 00120240  7C 00 07 74 */	extsb r0, r0
/* 80123304 00120244  7C 03 00 00 */	cmpw r3, r0
/* 80123308 00120248  40 82 00 24 */	bne lbl_8012332C
/* 8012330C 0012024C  A0 07 00 08 */	lhz r0, 8(r7)
/* 80123310 00120250  7C 80 00 39 */	and. r0, r4, r0
/* 80123314 00120254  41 82 00 18 */	beq lbl_8012332C
/* 80123318 00120258  1C 85 00 34 */	mulli r4, r5, 0x34
/* 8012331C 0012025C  3C 60 80 4B */	lis r3, gEnemyInfo__4Game@ha
/* 80123320 00120260  38 03 C5 38 */	addi r0, r3, gEnemyInfo__4Game@l
/* 80123324 00120264  7C C0 22 14 */	add r6, r0, r4
/* 80123328 00120268  48 00 00 10 */	b lbl_80123338
lbl_8012332C:
/* 8012332C 0012026C  38 E7 00 34 */	addi r7, r7, 0x34
/* 80123330 00120270  38 A5 00 01 */	addi r5, r5, 1
/* 80123334 00120274  42 00 FF C8 */	bdnz lbl_801232FC
lbl_80123338:
/* 80123338 00120278  28 06 00 00 */	cmplwi r6, 0
/* 8012333C 0012027C  41 82 00 0C */	beq lbl_80123348
/* 80123340 00120280  80 66 00 00 */	lwz r3, 0(r6)
/* 80123344 00120284  4E 80 00 20 */	blr 
lbl_80123348:
/* 80123348 00120288  38 60 00 00 */	li r3, 0
/* 8012334C 0012028C  4E 80 00 20 */	blr 

.global getEnemyResName__Q24Game13EnemyInfoFuncFii
getEnemyResName__Q24Game13EnemyInfoFuncFii:
/* 80123350 00120290  2C 03 00 3F */	cmpwi r3, 0x3f
/* 80123354 00120294  40 80 00 18 */	bge lbl_8012336C
/* 80123358 00120298  2C 03 00 3B */	cmpwi r3, 0x3b
/* 8012335C 0012029C  40 80 00 08 */	bge lbl_80123364
/* 80123360 001202A0  48 00 00 0C */	b lbl_8012336C
lbl_80123364:
/* 80123364 001202A4  38 62 9A F8 */	addi r3, r2, lbl_80517E58@sda21
/* 80123368 001202A8  4E 80 00 20 */	blr 
lbl_8012336C:
/* 8012336C 001202AC  2C 03 00 27 */	cmpwi r3, 0x27
/* 80123370 001202B0  41 82 00 0C */	beq lbl_8012337C
/* 80123374 001202B4  2C 03 00 40 */	cmpwi r3, 0x40
/* 80123378 001202B8  40 82 00 08 */	bne lbl_80123380
lbl_8012337C:
/* 8012337C 001202BC  38 60 00 53 */	li r3, 0x53
lbl_80123380:
/* 80123380 001202C0  80 0D 83 D0 */	lwz r0, gEnemyInfoNum__4Game@sda21(r13)
/* 80123384 001202C4  3C A0 80 4B */	lis r5, gEnemyInfo__4Game@ha
/* 80123388 001202C8  38 C0 00 00 */	li r6, 0
/* 8012338C 001202CC  38 E5 C5 38 */	addi r7, r5, gEnemyInfo__4Game@l
/* 80123390 001202D0  7C C5 33 78 */	mr r5, r6
/* 80123394 001202D4  7C 09 03 A6 */	mtctr r0
/* 80123398 001202D8  2C 00 00 00 */	cmpwi r0, 0
/* 8012339C 001202DC  40 81 00 40 */	ble lbl_801233DC
lbl_801233A0:
/* 801233A0 001202E0  88 07 00 04 */	lbz r0, 4(r7)
/* 801233A4 001202E4  7C 00 07 74 */	extsb r0, r0
/* 801233A8 001202E8  7C 03 00 00 */	cmpw r3, r0
/* 801233AC 001202EC  40 82 00 24 */	bne lbl_801233D0
/* 801233B0 001202F0  A0 07 00 08 */	lhz r0, 8(r7)
/* 801233B4 001202F4  7C 80 00 39 */	and. r0, r4, r0
/* 801233B8 001202F8  41 82 00 18 */	beq lbl_801233D0
/* 801233BC 001202FC  1C 85 00 34 */	mulli r4, r5, 0x34
/* 801233C0 00120300  3C 60 80 4B */	lis r3, gEnemyInfo__4Game@ha
/* 801233C4 00120304  38 03 C5 38 */	addi r0, r3, gEnemyInfo__4Game@l
/* 801233C8 00120308  7C C0 22 14 */	add r6, r0, r4
/* 801233CC 0012030C  48 00 00 10 */	b lbl_801233DC
lbl_801233D0:
/* 801233D0 00120310  38 E7 00 34 */	addi r7, r7, 0x34
/* 801233D4 00120314  38 A5 00 01 */	addi r5, r5, 1
/* 801233D8 00120318  42 00 FF C8 */	bdnz lbl_801233A0
lbl_801233DC:
/* 801233DC 0012031C  80 66 00 10 */	lwz r3, 0x10(r6)
/* 801233E0 00120320  38 02 99 88 */	addi r0, r2, lbl_80517CE8@sda21
/* 801233E4 00120324  7C 03 00 40 */	cmplw r3, r0
/* 801233E8 00120328  4C 82 00 20 */	bnelr 
/* 801233EC 0012032C  80 66 00 00 */	lwz r3, 0(r6)
/* 801233F0 00120330  4E 80 00 20 */	blr 

.global getEnemyMember__Q24Game13EnemyInfoFuncFii
getEnemyMember__Q24Game13EnemyInfoFuncFii:
/* 801233F4 00120334  80 0D 83 D0 */	lwz r0, gEnemyInfoNum__4Game@sda21(r13)
/* 801233F8 00120338  3C A0 80 4B */	lis r5, gEnemyInfo__4Game@ha
/* 801233FC 0012033C  38 C0 00 00 */	li r6, 0
/* 80123400 00120340  38 E5 C5 38 */	addi r7, r5, gEnemyInfo__4Game@l
/* 80123404 00120344  7C C5 33 78 */	mr r5, r6
/* 80123408 00120348  7C 09 03 A6 */	mtctr r0
/* 8012340C 0012034C  2C 00 00 00 */	cmpwi r0, 0
/* 80123410 00120350  40 81 00 40 */	ble lbl_80123450
lbl_80123414:
/* 80123414 00120354  88 07 00 04 */	lbz r0, 4(r7)
/* 80123418 00120358  7C 00 07 74 */	extsb r0, r0
/* 8012341C 0012035C  7C 03 00 00 */	cmpw r3, r0
/* 80123420 00120360  40 82 00 24 */	bne lbl_80123444
/* 80123424 00120364  A0 07 00 08 */	lhz r0, 8(r7)
/* 80123428 00120368  7C 80 00 39 */	and. r0, r4, r0
/* 8012342C 0012036C  41 82 00 18 */	beq lbl_80123444
/* 80123430 00120370  1C 85 00 34 */	mulli r4, r5, 0x34
/* 80123434 00120374  3C 60 80 4B */	lis r3, gEnemyInfo__4Game@ha
/* 80123438 00120378  38 03 C5 38 */	addi r0, r3, gEnemyInfo__4Game@l
/* 8012343C 0012037C  7C C0 22 14 */	add r6, r0, r4
/* 80123440 00120380  48 00 00 10 */	b lbl_80123450
lbl_80123444:
/* 80123444 00120384  38 E7 00 34 */	addi r7, r7, 0x34
/* 80123448 00120388  38 A5 00 01 */	addi r5, r5, 1
/* 8012344C 0012038C  42 00 FF C8 */	bdnz lbl_80123414
lbl_80123450:
/* 80123450 00120390  28 06 00 00 */	cmplwi r6, 0
/* 80123454 00120394  41 82 00 0C */	beq lbl_80123460
/* 80123458 00120398  88 66 00 06 */	lbz r3, 6(r6)
/* 8012345C 0012039C  4E 80 00 20 */	blr 
lbl_80123460:
/* 80123460 001203A0  38 60 00 00 */	li r3, 0
/* 80123464 001203A4  4E 80 00 20 */	blr 

.global getEnemyID__Q24Game13EnemyInfoFuncFPci
getEnemyID__Q24Game13EnemyInfoFuncFPci:
/* 80123468 001203A8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8012346C 001203AC  7C 08 02 A6 */	mflr r0
/* 80123470 001203B0  3C A0 80 4B */	lis r5, gEnemyInfo__4Game@ha
/* 80123474 001203B4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80123478 001203B8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 8012347C 001203BC  7C 7B 1B 78 */	mr r27, r3
/* 80123480 001203C0  3B E5 C5 38 */	addi r31, r5, gEnemyInfo__4Game@l
/* 80123484 001203C4  7C 9C 23 78 */	mr r28, r4
/* 80123488 001203C8  3B C0 00 00 */	li r30, 0
/* 8012348C 001203CC  3B A0 00 00 */	li r29, 0
/* 80123490 001203D0  48 00 00 40 */	b lbl_801234D0
lbl_80123494:
/* 80123494 001203D4  80 7F 00 00 */	lwz r3, 0(r31)
/* 80123498 001203D8  7F 64 DB 78 */	mr r4, r27
/* 8012349C 001203DC  4B FA C8 41 */	bl stricmp
/* 801234A0 001203E0  2C 03 00 00 */	cmpwi r3, 0
/* 801234A4 001203E4  40 82 00 24 */	bne lbl_801234C8
/* 801234A8 001203E8  A0 1F 00 08 */	lhz r0, 8(r31)
/* 801234AC 001203EC  7F 80 00 39 */	and. r0, r28, r0
/* 801234B0 001203F0  41 82 00 18 */	beq lbl_801234C8
/* 801234B4 001203F4  1C 9D 00 34 */	mulli r4, r29, 0x34
/* 801234B8 001203F8  3C 60 80 4B */	lis r3, gEnemyInfo__4Game@ha
/* 801234BC 001203FC  38 03 C5 38 */	addi r0, r3, gEnemyInfo__4Game@l
/* 801234C0 00120400  7F C0 22 14 */	add r30, r0, r4
/* 801234C4 00120404  48 00 00 18 */	b lbl_801234DC
lbl_801234C8:
/* 801234C8 00120408  3B FF 00 34 */	addi r31, r31, 0x34
/* 801234CC 0012040C  3B BD 00 01 */	addi r29, r29, 1
lbl_801234D0:
/* 801234D0 00120410  80 0D 83 D0 */	lwz r0, gEnemyInfoNum__4Game@sda21(r13)
/* 801234D4 00120414  7C 1D 00 00 */	cmpw r29, r0
/* 801234D8 00120418  41 80 FF BC */	blt lbl_80123494
lbl_801234DC:
/* 801234DC 0012041C  88 7E 00 04 */	lbz r3, 4(r30)
/* 801234E0 00120420  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 801234E4 00120424  80 01 00 24 */	lwz r0, 0x24(r1)
/* 801234E8 00120428  7C 63 07 74 */	extsb r3, r3
/* 801234EC 0012042C  7C 08 03 A6 */	mtlr r0
/* 801234F0 00120430  38 21 00 20 */	addi r1, r1, 0x20
/* 801234F4 00120434  4E 80 00 20 */	blr 
