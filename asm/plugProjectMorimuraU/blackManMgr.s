.include "macros.inc"
.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 0x8
.global __vt__Q34Game8BlackMan3Mgr
__vt__Q34Game8BlackMan3Mgr:
	.4byte 0
	.4byte 0
	.4byte doAnimation__Q24Game12EnemyMgrBaseFv
	.4byte doEntry__Q24Game12EnemyMgrBaseFv
	.4byte doSetView__Q24Game12EnemyMgrBaseFi
	.4byte doViewCalc__Q24Game12EnemyMgrBaseFv
	.4byte doSimulation__Q24Game12EnemyMgrBaseFf
	.4byte doDirectDraw__Q24Game12EnemyMgrBaseFR8Graphics
	.4byte doSimpleDraw__16GenericObjectMgrFP8Viewport
	.4byte loadResources__16GenericObjectMgrFv
	.4byte resetMgr__16GenericObjectMgrFv
	.4byte pausable__16GenericObjectMgrFv
	.4byte frozenable__16GenericObjectMgrFv
	.4byte getMatrixLoadType__16GenericObjectMgrFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q34Game8BlackMan3MgrFv"
	.4byte getChildCount__5CNodeFv
	.4byte "@4@getObject__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getNext__Q24Game12EnemyMgrBaseFPv"
	.4byte "@4@getStart__Q24Game12EnemyMgrBaseFv"
	.4byte "@4@getEnd__Q24Game12EnemyMgrBaseFv"
	.4byte __dt__Q34Game8BlackMan3MgrFv
	.4byte getObject__Q24Game12EnemyMgrBaseFPv
	.4byte getNext__Q24Game12EnemyMgrBaseFPv
	.4byte getStart__Q24Game12EnemyMgrBaseFv
	.4byte getEnd__Q24Game12EnemyMgrBaseFv
	.4byte alloc__Q24Game12EnemyMgrBaseFv
	.4byte birth__Q34Game8BlackMan3MgrFRQ24Game13EnemyBirthArg
	.4byte getJ3DModelData__Q24Game12EnemyMgrBaseCFv
	.4byte getGenerator__Q24Game12EnemyMgrBaseCFv
	.4byte killAll__Q24Game12EnemyMgrBaseFPQ24Game15CreatureKillArg
	.4byte setupSoundViewerAndBas__Q24Game12EnemyMgrBaseFv
	.4byte setDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte resetDebugParm__Q24Game12EnemyMgrBaseFUl
	.4byte getMaxObjects__Q24Game12EnemyMgrBaseCFv
	.4byte startMovie__Q24Game12EnemyMgrBaseFv
	.4byte endMovie__Q24Game12EnemyMgrBaseFv
	.4byte get__Q24Game12EnemyMgrBaseFPv
	.4byte isAlwaysMovieActor__Q24Game12EnemyMgrBaseFv
	.4byte createObj__Q34Game8BlackMan3MgrFi
	.4byte getEnemy__Q34Game8BlackMan3MgrFi
	.4byte doAlloc__Q34Game8BlackMan3MgrFv
	.4byte getEnemyTypeID__Q34Game8BlackMan3MgrFv
	.4byte createModel__Q34Game8BlackMan3MgrFv
	.4byte initParms__Q24Game12EnemyMgrBaseFv
	.4byte loadResource__Q24Game12EnemyMgrBaseFv
	.4byte initObjects__Q24Game12EnemyMgrBaseFv
	.4byte initStoneSetting__Q24Game12EnemyMgrBaseFv
	.4byte loadModelData__Q24Game12EnemyMgrBaseFP10JKRArchive
	.4byte loadModelData__Q34Game8BlackMan3MgrFv
	.4byte loadAnimData__Q24Game12EnemyMgrBaseFv
	.4byte loadTexData__Q34Game8BlackMan3MgrFv
	.4byte doLoadBmd__Q34Game8BlackMan3MgrFPv
	.4byte doLoadBdl__Q24Game12EnemyMgrBaseFPv
	.4byte initGenerator__Q24Game12EnemyMgrBaseFv
.global __vt__Q34Game8BlackMan5Parms
__vt__Q34Game8BlackMan5Parms:
	.4byte 0
	.4byte 0
	.4byte read__Q34Game8BlackMan5ParmsFR6Stream
	.4byte 0

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.global __ct__Q34Game8BlackMan3MgrFiUc
__ct__Q34Game8BlackMan3MgrFiUc:
/* 803A53C8 003A2308  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A53CC 003A230C  7C 08 02 A6 */	mflr r0
/* 803A53D0 003A2310  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A53D4 003A2314  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A53D8 003A2318  7C 7F 1B 78 */	mr r31, r3
/* 803A53DC 003A231C  4B D8 98 B9 */	bl __ct__Q24Game12EnemyMgrBaseFiUc
/* 803A53E0 003A2320  3C 60 80 4E */	lis r3, __vt__Q34Game8BlackMan3Mgr@ha
/* 803A53E4 003A2324  3C 80 80 49 */	lis r4, lbl_80495264@ha
/* 803A53E8 003A2328  38 A3 5C 10 */	addi r5, r3, __vt__Q34Game8BlackMan3Mgr@l
/* 803A53EC 003A232C  7F E3 FB 78 */	mr r3, r31
/* 803A53F0 003A2330  90 BF 00 00 */	stw r5, 0(r31)
/* 803A53F4 003A2334  38 A5 00 38 */	addi r5, r5, 0x38
/* 803A53F8 003A2338  38 04 52 64 */	addi r0, r4, lbl_80495264@l
/* 803A53FC 003A233C  90 BF 00 04 */	stw r5, 4(r31)
/* 803A5400 003A2340  90 1F 00 18 */	stw r0, 0x18(r31)
/* 803A5404 003A2344  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5408 003A2348  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A540C 003A234C  7C 08 03 A6 */	mtlr r0
/* 803A5410 003A2350  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5414 003A2354  4E 80 00 20 */	blr 

.global doAlloc__Q34Game8BlackMan3MgrFv
doAlloc__Q34Game8BlackMan3MgrFv:
/* 803A5418 003A2358  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A541C 003A235C  7C 08 02 A6 */	mflr r0
/* 803A5420 003A2360  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5424 003A2364  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5428 003A2368  7C 7F 1B 78 */	mr r31, r3
/* 803A542C 003A236C  38 60 0A 5C */	li r3, 0xa5c
/* 803A5430 003A2370  4B C7 EA 75 */	bl __nw__FUl
/* 803A5434 003A2374  7C 64 1B 79 */	or. r4, r3, r3
/* 803A5438 003A2378  41 82 00 0C */	beq lbl_803A5444
/* 803A543C 003A237C  48 00 00 25 */	bl __ct__Q34Game8BlackMan5ParmsFv
/* 803A5440 003A2380  7C 64 1B 78 */	mr r4, r3
lbl_803A5444:
/* 803A5444 003A2384  7F E3 FB 78 */	mr r3, r31
/* 803A5448 003A2388  4B D8 A4 55 */	bl init__Q24Game12EnemyMgrBaseFPQ24Game14EnemyParmsBase
/* 803A544C 003A238C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5450 003A2390  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5454 003A2394  7C 08 03 A6 */	mtlr r0
/* 803A5458 003A2398  38 21 00 10 */	addi r1, r1, 0x10
/* 803A545C 003A239C  4E 80 00 20 */	blr 

.global __ct__Q34Game8BlackMan5ParmsFv
__ct__Q34Game8BlackMan5ParmsFv:
/* 803A5460 003A23A0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5464 003A23A4  7C 08 02 A6 */	mflr r0
/* 803A5468 003A23A8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A546C 003A23AC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5470 003A23B0  7C 7F 1B 78 */	mr r31, r3
/* 803A5474 003A23B4  4B D6 43 29 */	bl __ct__Q24Game14EnemyParmsBaseFv
/* 803A5478 003A23B8  3C 80 80 4E */	lis r4, __vt__Q34Game8BlackMan5Parms@ha
/* 803A547C 003A23BC  38 7F 07 F8 */	addi r3, r31, 0x7f8
/* 803A5480 003A23C0  38 04 5C F0 */	addi r0, r4, __vt__Q34Game8BlackMan5Parms@l
/* 803A5484 003A23C4  38 80 00 01 */	li r4, 1
/* 803A5488 003A23C8  90 1F 00 D8 */	stw r0, 0xd8(r31)
/* 803A548C 003A23CC  48 00 00 C1 */	bl __ct__Q44Game8BlackMan5Parms11ProperParmsFv
/* 803A5490 003A23D0  38 A0 00 01 */	li r5, 1
/* 803A5494 003A23D4  38 80 00 00 */	li r4, 0
/* 803A5498 003A23D8  98 BF 0A 10 */	stb r5, 0xa10(r31)
/* 803A549C 003A23DC  38 00 FF FF */	li r0, -1
/* 803A54A0 003A23E0  C0 22 10 88 */	lfs f1, lbl_8051F3E8@sda21(r2)
/* 803A54A4 003A23E4  7F E3 FB 78 */	mr r3, r31
/* 803A54A8 003A23E8  98 9F 0A 11 */	stb r4, 0xa11(r31)
/* 803A54AC 003A23EC  C1 42 10 8C */	lfs f10, lbl_8051F3EC@sda21(r2)
/* 803A54B0 003A23F0  98 BF 0A 12 */	stb r5, 0xa12(r31)
/* 803A54B4 003A23F4  C1 22 10 90 */	lfs f9, lbl_8051F3F0@sda21(r2)
/* 803A54B8 003A23F8  98 BF 0A 14 */	stb r5, 0xa14(r31)
/* 803A54BC 003A23FC  C0 02 10 94 */	lfs f0, lbl_8051F3F4@sda21(r2)
/* 803A54C0 003A2400  98 9F 0A 15 */	stb r4, 0xa15(r31)
/* 803A54C4 003A2404  C1 02 10 98 */	lfs f8, lbl_8051F3F8@sda21(r2)
/* 803A54C8 003A2408  98 BF 0A 16 */	stb r5, 0xa16(r31)
/* 803A54CC 003A240C  C0 E2 10 9C */	lfs f7, lbl_8051F3FC@sda21(r2)
/* 803A54D0 003A2410  98 BF 0A 17 */	stb r5, 0xa17(r31)
/* 803A54D4 003A2414  C0 C2 10 A0 */	lfs f6, lbl_8051F400@sda21(r2)
/* 803A54D8 003A2418  98 BF 0A 18 */	stb r5, 0xa18(r31)
/* 803A54DC 003A241C  C0 A2 10 A4 */	lfs f5, lbl_8051F404@sda21(r2)
/* 803A54E0 003A2420  B0 1F 0A 1A */	sth r0, 0xa1a(r31)
/* 803A54E4 003A2424  C0 82 10 A8 */	lfs f4, lbl_8051F408@sda21(r2)
/* 803A54E8 003A2428  D0 3F 0A 1C */	stfs f1, 0xa1c(r31)
/* 803A54EC 003A242C  C0 62 10 AC */	lfs f3, lbl_8051F40C@sda21(r2)
/* 803A54F0 003A2430  D1 5F 0A 20 */	stfs f10, 0xa20(r31)
/* 803A54F4 003A2434  C0 42 10 B0 */	lfs f2, lbl_8051F410@sda21(r2)
/* 803A54F8 003A2438  D1 3F 0A 24 */	stfs f9, 0xa24(r31)
/* 803A54FC 003A243C  C0 22 10 B4 */	lfs f1, lbl_8051F414@sda21(r2)
/* 803A5500 003A2440  D0 1F 0A 28 */	stfs f0, 0xa28(r31)
/* 803A5504 003A2444  C0 02 10 B8 */	lfs f0, lbl_8051F418@sda21(r2)
/* 803A5508 003A2448  D1 3F 0A 2C */	stfs f9, 0xa2c(r31)
/* 803A550C 003A244C  D1 1F 0A 30 */	stfs f8, 0xa30(r31)
/* 803A5510 003A2450  D0 FF 0A 34 */	stfs f7, 0xa34(r31)
/* 803A5514 003A2454  D0 DF 0A 38 */	stfs f6, 0xa38(r31)
/* 803A5518 003A2458  D0 BF 0A 3C */	stfs f5, 0xa3c(r31)
/* 803A551C 003A245C  D1 5F 0A 40 */	stfs f10, 0xa40(r31)
/* 803A5520 003A2460  D0 9F 0A 44 */	stfs f4, 0xa44(r31)
/* 803A5524 003A2464  D0 7F 0A 48 */	stfs f3, 0xa48(r31)
/* 803A5528 003A2468  D0 5F 0A 4C */	stfs f2, 0xa4c(r31)
/* 803A552C 003A246C  D0 3F 0A 50 */	stfs f1, 0xa50(r31)
/* 803A5530 003A2470  D0 1F 0A 54 */	stfs f0, 0xa54(r31)
/* 803A5534 003A2474  D1 3F 0A 58 */	stfs f9, 0xa58(r31)
/* 803A5538 003A2478  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A553C 003A247C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5540 003A2480  7C 08 03 A6 */	mtlr r0
/* 803A5544 003A2484  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5548 003A2488  4E 80 00 20 */	blr 

.global __ct__Q44Game8BlackMan5Parms11ProperParmsFv
__ct__Q44Game8BlackMan5Parms11ProperParmsFv:
/* 803A554C 003A248C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5550 003A2490  7C 08 02 A6 */	mflr r0
/* 803A5554 003A2494  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5558 003A2498  7C 80 07 35 */	extsh. r0, r4
/* 803A555C 003A249C  3C 80 80 49 */	lis r4, lbl_80495258@ha
/* 803A5560 003A24A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5564 003A24A4  3B E4 52 58 */	addi r31, r4, lbl_80495258@l
/* 803A5568 003A24A8  93 C1 00 08 */	stw r30, 8(r1)
/* 803A556C 003A24AC  7C 7E 1B 78 */	mr r30, r3
/* 803A5570 003A24B0  41 82 00 0C */	beq lbl_803A557C
/* 803A5574 003A24B4  38 1E 02 14 */	addi r0, r30, 0x214
/* 803A5578 003A24B8  90 1E 00 00 */	stw r0, 0(r30)
lbl_803A557C:
/* 803A557C 003A24BC  38 00 00 00 */	li r0, 0
/* 803A5580 003A24C0  3C A0 66 70 */	lis r5, 0x66703031@ha
/* 803A5584 003A24C4  90 1E 00 04 */	stw r0, 4(r30)
/* 803A5588 003A24C8  38 1F 00 20 */	addi r0, r31, 0x20
/* 803A558C 003A24CC  7F C4 F3 78 */	mr r4, r30
/* 803A5590 003A24D0  38 7E 00 0C */	addi r3, r30, 0xc
/* 803A5594 003A24D4  90 1E 00 08 */	stw r0, 8(r30)
/* 803A5598 003A24D8  38 A5 30 31 */	addi r5, r5, 0x66703031@l
/* 803A559C 003A24DC  38 DF 00 30 */	addi r6, r31, 0x30
/* 803A55A0 003A24E0  48 06 E0 B9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A55A4 003A24E4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A55A8 003A24E8  3C A0 66 70 */	lis r5, 0x66703032@ha
/* 803A55AC 003A24EC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A55B0 003A24F0  C0 02 10 AC */	lfs f0, lbl_8051F40C@sda21(r2)
/* 803A55B4 003A24F4  90 1E 00 0C */	stw r0, 0xc(r30)
/* 803A55B8 003A24F8  7F C4 F3 78 */	mr r4, r30
/* 803A55BC 003A24FC  C0 22 10 BC */	lfs f1, lbl_8051F41C@sda21(r2)
/* 803A55C0 003A2500  38 7E 00 34 */	addi r3, r30, 0x34
/* 803A55C4 003A2504  D0 1E 00 24 */	stfs f0, 0x24(r30)
/* 803A55C8 003A2508  38 A5 30 32 */	addi r5, r5, 0x66703032@l
/* 803A55CC 003A250C  C0 02 10 C0 */	lfs f0, lbl_8051F420@sda21(r2)
/* 803A55D0 003A2510  38 DF 00 40 */	addi r6, r31, 0x40
/* 803A55D4 003A2514  D0 3E 00 2C */	stfs f1, 0x2c(r30)
/* 803A55D8 003A2518  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 803A55DC 003A251C  48 06 E0 7D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A55E0 003A2520  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A55E4 003A2524  3C A0 66 70 */	lis r5, 0x66703033@ha
/* 803A55E8 003A2528  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A55EC 003A252C  C0 02 10 AC */	lfs f0, lbl_8051F40C@sda21(r2)
/* 803A55F0 003A2530  90 1E 00 34 */	stw r0, 0x34(r30)
/* 803A55F4 003A2534  7F C4 F3 78 */	mr r4, r30
/* 803A55F8 003A2538  C0 22 10 BC */	lfs f1, lbl_8051F41C@sda21(r2)
/* 803A55FC 003A253C  38 7E 00 5C */	addi r3, r30, 0x5c
/* 803A5600 003A2540  D0 1E 00 4C */	stfs f0, 0x4c(r30)
/* 803A5604 003A2544  38 A5 30 33 */	addi r5, r5, 0x66703033@l
/* 803A5608 003A2548  C0 02 10 C4 */	lfs f0, lbl_8051F424@sda21(r2)
/* 803A560C 003A254C  38 DF 00 4C */	addi r6, r31, 0x4c
/* 803A5610 003A2550  D0 3E 00 54 */	stfs f1, 0x54(r30)
/* 803A5614 003A2554  D0 1E 00 58 */	stfs f0, 0x58(r30)
/* 803A5618 003A2558  48 06 E0 41 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A561C 003A255C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A5620 003A2560  3C A0 66 70 */	lis r5, 0x66703034@ha
/* 803A5624 003A2564  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A5628 003A2568  C0 02 10 C8 */	lfs f0, lbl_8051F428@sda21(r2)
/* 803A562C 003A256C  90 1E 00 5C */	stw r0, 0x5c(r30)
/* 803A5630 003A2570  7F C4 F3 78 */	mr r4, r30
/* 803A5634 003A2574  C0 22 10 BC */	lfs f1, lbl_8051F41C@sda21(r2)
/* 803A5638 003A2578  38 7E 00 84 */	addi r3, r30, 0x84
/* 803A563C 003A257C  D0 1E 00 74 */	stfs f0, 0x74(r30)
/* 803A5640 003A2580  38 A5 30 34 */	addi r5, r5, 0x66703034@l
/* 803A5644 003A2584  C0 02 10 90 */	lfs f0, lbl_8051F3F0@sda21(r2)
/* 803A5648 003A2588  38 DF 00 5C */	addi r6, r31, 0x5c
/* 803A564C 003A258C  D0 3E 00 7C */	stfs f1, 0x7c(r30)
/* 803A5650 003A2590  D0 1E 00 80 */	stfs f0, 0x80(r30)
/* 803A5654 003A2594  48 06 E0 05 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A5658 003A2598  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A565C 003A259C  3C A0 66 70 */	lis r5, 0x66703035@ha
/* 803A5660 003A25A0  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A5664 003A25A4  C0 02 10 AC */	lfs f0, lbl_8051F40C@sda21(r2)
/* 803A5668 003A25A8  90 1E 00 84 */	stw r0, 0x84(r30)
/* 803A566C 003A25AC  7F C4 F3 78 */	mr r4, r30
/* 803A5670 003A25B0  C0 22 10 BC */	lfs f1, lbl_8051F41C@sda21(r2)
/* 803A5674 003A25B4  38 7E 00 AC */	addi r3, r30, 0xac
/* 803A5678 003A25B8  D0 1E 00 9C */	stfs f0, 0x9c(r30)
/* 803A567C 003A25BC  38 A5 30 35 */	addi r5, r5, 0x66703035@l
/* 803A5680 003A25C0  C0 02 10 CC */	lfs f0, lbl_8051F42C@sda21(r2)
/* 803A5684 003A25C4  38 DF 00 70 */	addi r6, r31, 0x70
/* 803A5688 003A25C8  D0 3E 00 A4 */	stfs f1, 0xa4(r30)
/* 803A568C 003A25CC  D0 1E 00 A8 */	stfs f0, 0xa8(r30)
/* 803A5690 003A25D0  48 06 DF C9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A5694 003A25D4  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A5698 003A25D8  3C A0 66 70 */	lis r5, 0x66703036@ha
/* 803A569C 003A25DC  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A56A0 003A25E0  C0 02 10 D0 */	lfs f0, lbl_8051F430@sda21(r2)
/* 803A56A4 003A25E4  90 1E 00 AC */	stw r0, 0xac(r30)
/* 803A56A8 003A25E8  7F C4 F3 78 */	mr r4, r30
/* 803A56AC 003A25EC  C0 22 10 AC */	lfs f1, lbl_8051F40C@sda21(r2)
/* 803A56B0 003A25F0  38 7E 00 D4 */	addi r3, r30, 0xd4
/* 803A56B4 003A25F4  D0 1E 00 C4 */	stfs f0, 0xc4(r30)
/* 803A56B8 003A25F8  38 A5 30 36 */	addi r5, r5, 0x66703036@l
/* 803A56BC 003A25FC  C0 02 10 D4 */	lfs f0, lbl_8051F434@sda21(r2)
/* 803A56C0 003A2600  38 DF 00 7C */	addi r6, r31, 0x7c
/* 803A56C4 003A2604  D0 3E 00 CC */	stfs f1, 0xcc(r30)
/* 803A56C8 003A2608  D0 1E 00 D0 */	stfs f0, 0xd0(r30)
/* 803A56CC 003A260C  48 06 DF 8D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A56D0 003A2610  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A56D4 003A2614  3C A0 66 70 */	lis r5, 0x66703037@ha
/* 803A56D8 003A2618  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A56DC 003A261C  C0 02 10 C8 */	lfs f0, lbl_8051F428@sda21(r2)
/* 803A56E0 003A2620  90 1E 00 D4 */	stw r0, 0xd4(r30)
/* 803A56E4 003A2624  7F C4 F3 78 */	mr r4, r30
/* 803A56E8 003A2628  C0 22 10 BC */	lfs f1, lbl_8051F41C@sda21(r2)
/* 803A56EC 003A262C  38 7E 00 FC */	addi r3, r30, 0xfc
/* 803A56F0 003A2630  D0 1E 00 EC */	stfs f0, 0xec(r30)
/* 803A56F4 003A2634  38 A5 30 37 */	addi r5, r5, 0x66703037@l
/* 803A56F8 003A2638  C0 02 10 90 */	lfs f0, lbl_8051F3F0@sda21(r2)
/* 803A56FC 003A263C  38 DF 00 8C */	addi r6, r31, 0x8c
/* 803A5700 003A2640  D0 3E 00 F4 */	stfs f1, 0xf4(r30)
/* 803A5704 003A2644  D0 1E 00 F8 */	stfs f0, 0xf8(r30)
/* 803A5708 003A2648  48 06 DF 51 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A570C 003A264C  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A5710 003A2650  3C A0 66 70 */	lis r5, 0x66703131@ha
/* 803A5714 003A2654  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A5718 003A2658  C0 02 10 AC */	lfs f0, lbl_8051F40C@sda21(r2)
/* 803A571C 003A265C  90 1E 00 FC */	stw r0, 0xfc(r30)
/* 803A5720 003A2660  7F C4 F3 78 */	mr r4, r30
/* 803A5724 003A2664  C0 22 10 BC */	lfs f1, lbl_8051F41C@sda21(r2)
/* 803A5728 003A2668  38 7E 01 24 */	addi r3, r30, 0x124
/* 803A572C 003A266C  D0 1E 01 14 */	stfs f0, 0x114(r30)
/* 803A5730 003A2670  38 A5 31 31 */	addi r5, r5, 0x66703131@l
/* 803A5734 003A2674  C0 02 10 CC */	lfs f0, lbl_8051F42C@sda21(r2)
/* 803A5738 003A2678  38 DF 00 A0 */	addi r6, r31, 0xa0
/* 803A573C 003A267C  D0 3E 01 1C */	stfs f1, 0x11c(r30)
/* 803A5740 003A2680  D0 1E 01 20 */	stfs f0, 0x120(r30)
/* 803A5744 003A2684  48 06 DF 15 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A5748 003A2688  3C 60 80 4B */	lis r3, "__vt__7Parm<f>"@ha
/* 803A574C 003A268C  3C A0 69 70 */	lis r5, 0x69703031@ha
/* 803A5750 003A2690  38 03 AC BC */	addi r0, r3, "__vt__7Parm<f>"@l
/* 803A5754 003A2694  C0 02 10 AC */	lfs f0, lbl_8051F40C@sda21(r2)
/* 803A5758 003A2698  90 1E 01 24 */	stw r0, 0x124(r30)
/* 803A575C 003A269C  7F C4 F3 78 */	mr r4, r30
/* 803A5760 003A26A0  C0 22 10 BC */	lfs f1, lbl_8051F41C@sda21(r2)
/* 803A5764 003A26A4  38 7E 01 4C */	addi r3, r30, 0x14c
/* 803A5768 003A26A8  D0 1E 01 3C */	stfs f0, 0x13c(r30)
/* 803A576C 003A26AC  38 A5 30 31 */	addi r5, r5, 0x69703031@l
/* 803A5770 003A26B0  C0 02 10 C0 */	lfs f0, lbl_8051F420@sda21(r2)
/* 803A5774 003A26B4  38 DF 00 AC */	addi r6, r31, 0xac
/* 803A5778 003A26B8  D0 3E 01 44 */	stfs f1, 0x144(r30)
/* 803A577C 003A26BC  D0 1E 01 48 */	stfs f0, 0x148(r30)
/* 803A5780 003A26C0  48 06 DE D9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A5784 003A26C4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803A5788 003A26C8  3C A0 69 70 */	lis r5, 0x69703033@ha
/* 803A578C 003A26CC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803A5790 003A26D0  38 60 01 2C */	li r3, 0x12c
/* 803A5794 003A26D4  90 1E 01 4C */	stw r0, 0x14c(r30)
/* 803A5798 003A26D8  38 E0 00 00 */	li r7, 0
/* 803A579C 003A26DC  38 00 0B B8 */	li r0, 0xbb8
/* 803A57A0 003A26E0  7F C4 F3 78 */	mr r4, r30
/* 803A57A4 003A26E4  90 7E 01 64 */	stw r3, 0x164(r30)
/* 803A57A8 003A26E8  38 7E 01 74 */	addi r3, r30, 0x174
/* 803A57AC 003A26EC  38 A5 30 33 */	addi r5, r5, 0x69703033@l
/* 803A57B0 003A26F0  38 DF 00 C0 */	addi r6, r31, 0xc0
/* 803A57B4 003A26F4  90 FE 01 6C */	stw r7, 0x16c(r30)
/* 803A57B8 003A26F8  90 1E 01 70 */	stw r0, 0x170(r30)
/* 803A57BC 003A26FC  48 06 DE 9D */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A57C0 003A2700  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803A57C4 003A2704  3C A0 69 70 */	lis r5, 0x69703034@ha
/* 803A57C8 003A2708  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803A57CC 003A270C  38 60 00 C8 */	li r3, 0xc8
/* 803A57D0 003A2710  90 1E 01 74 */	stw r0, 0x174(r30)
/* 803A57D4 003A2714  38 E0 00 00 */	li r7, 0
/* 803A57D8 003A2718  38 00 02 58 */	li r0, 0x258
/* 803A57DC 003A271C  7F C4 F3 78 */	mr r4, r30
/* 803A57E0 003A2720  90 7E 01 8C */	stw r3, 0x18c(r30)
/* 803A57E4 003A2724  38 7E 01 9C */	addi r3, r30, 0x19c
/* 803A57E8 003A2728  38 A5 30 34 */	addi r5, r5, 0x69703034@l
/* 803A57EC 003A272C  38 DF 00 D4 */	addi r6, r31, 0xd4
/* 803A57F0 003A2730  90 FE 01 94 */	stw r7, 0x194(r30)
/* 803A57F4 003A2734  90 1E 01 98 */	stw r0, 0x198(r30)
/* 803A57F8 003A2738  48 06 DE 61 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A57FC 003A273C  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803A5800 003A2740  3C A0 69 70 */	lis r5, 0x69703035@ha
/* 803A5804 003A2744  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803A5808 003A2748  38 60 00 C8 */	li r3, 0xc8
/* 803A580C 003A274C  90 1E 01 9C */	stw r0, 0x19c(r30)
/* 803A5810 003A2750  38 E0 00 00 */	li r7, 0
/* 803A5814 003A2754  38 00 02 58 */	li r0, 0x258
/* 803A5818 003A2758  7F C4 F3 78 */	mr r4, r30
/* 803A581C 003A275C  90 7E 01 B4 */	stw r3, 0x1b4(r30)
/* 803A5820 003A2760  38 7E 01 C4 */	addi r3, r30, 0x1c4
/* 803A5824 003A2764  38 A5 30 35 */	addi r5, r5, 0x69703035@l
/* 803A5828 003A2768  38 DF 00 E8 */	addi r6, r31, 0xe8
/* 803A582C 003A276C  90 FE 01 BC */	stw r7, 0x1bc(r30)
/* 803A5830 003A2770  90 1E 01 C0 */	stw r0, 0x1c0(r30)
/* 803A5834 003A2774  48 06 DE 25 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A5838 003A2778  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803A583C 003A277C  3C A0 69 70 */	lis r5, 0x69703036@ha
/* 803A5840 003A2780  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803A5844 003A2784  38 60 00 C8 */	li r3, 0xc8
/* 803A5848 003A2788  90 1E 01 C4 */	stw r0, 0x1c4(r30)
/* 803A584C 003A278C  38 E0 00 00 */	li r7, 0
/* 803A5850 003A2790  38 00 02 58 */	li r0, 0x258
/* 803A5854 003A2794  7F C4 F3 78 */	mr r4, r30
/* 803A5858 003A2798  90 7E 01 DC */	stw r3, 0x1dc(r30)
/* 803A585C 003A279C  38 7E 01 EC */	addi r3, r30, 0x1ec
/* 803A5860 003A27A0  38 A5 30 36 */	addi r5, r5, 0x69703036@l
/* 803A5864 003A27A4  38 DF 00 FC */	addi r6, r31, 0xfc
/* 803A5868 003A27A8  90 FE 01 E4 */	stw r7, 0x1e4(r30)
/* 803A586C 003A27AC  90 1E 01 E8 */	stw r0, 0x1e8(r30)
/* 803A5870 003A27B0  48 06 DD E9 */	bl __ct__8BaseParmFP10ParametersUlPc
/* 803A5874 003A27B4  3C 60 80 4B */	lis r3, "__vt__7Parm<i>"@ha
/* 803A5878 003A27B8  38 A0 00 C8 */	li r5, 0xc8
/* 803A587C 003A27BC  38 03 AC 90 */	addi r0, r3, "__vt__7Parm<i>"@l
/* 803A5880 003A27C0  38 80 00 00 */	li r4, 0
/* 803A5884 003A27C4  90 1E 01 EC */	stw r0, 0x1ec(r30)
/* 803A5888 003A27C8  38 00 02 58 */	li r0, 0x258
/* 803A588C 003A27CC  7F C3 F3 78 */	mr r3, r30
/* 803A5890 003A27D0  90 BE 02 04 */	stw r5, 0x204(r30)
/* 803A5894 003A27D4  90 9E 02 0C */	stw r4, 0x20c(r30)
/* 803A5898 003A27D8  90 1E 02 10 */	stw r0, 0x210(r30)
/* 803A589C 003A27DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A58A0 003A27E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A58A4 003A27E4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A58A8 003A27E8  7C 08 03 A6 */	mtlr r0
/* 803A58AC 003A27EC  38 21 00 10 */	addi r1, r1, 0x10
/* 803A58B0 003A27F0  4E 80 00 20 */	blr 

.global birth__Q34Game8BlackMan3MgrFRQ24Game13EnemyBirthArg
birth__Q34Game8BlackMan3MgrFRQ24Game13EnemyBirthArg:
/* 803A58B4 003A27F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A58B8 003A27F8  7C 08 02 A6 */	mflr r0
/* 803A58BC 003A27FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A58C0 003A2800  4B D8 9B 09 */	bl birth__Q24Game12EnemyMgrBaseFRQ24Game13EnemyBirthArg
/* 803A58C4 003A2804  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A58C8 003A2808  7C 08 03 A6 */	mtlr r0
/* 803A58CC 003A280C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A58D0 003A2810  4E 80 00 20 */	blr 

.global loadModelData__Q34Game8BlackMan3MgrFv
loadModelData__Q34Game8BlackMan3MgrFv:
/* 803A58D4 003A2814  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803A58D8 003A2818  7C 08 02 A6 */	mflr r0
/* 803A58DC 003A281C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803A58E0 003A2820  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803A58E4 003A2824  7C 7B 1B 78 */	mr r27, r3
/* 803A58E8 003A2828  4B D8 A8 25 */	bl loadModelData__Q24Game12EnemyMgrBaseFv
/* 803A58EC 003A282C  3C 80 80 49 */	lis r4, lbl_80495620@ha
/* 803A58F0 003A2830  3C 60 80 49 */	lis r3, lbl_80495630@ha
/* 803A58F4 003A2834  3B C4 56 20 */	addi r30, r4, lbl_80495620@l
/* 803A58F8 003A2838  3B 80 00 00 */	li r28, 0
/* 803A58FC 003A283C  3B E3 56 30 */	addi r31, r3, lbl_80495630@l
/* 803A5900 003A2840  48 00 00 40 */	b lbl_803A5940
lbl_803A5904:
/* 803A5904 003A2844  80 64 00 80 */	lwz r3, 0x80(r4)
/* 803A5908 003A2848  57 80 13 BA */	rlwinm r0, r28, 2, 0xe, 0x1d
/* 803A590C 003A284C  7F A3 00 2E */	lwzx r29, r3, r0
/* 803A5910 003A2850  28 1D 00 00 */	cmplwi r29, 0
/* 803A5914 003A2854  40 82 00 18 */	bne lbl_803A592C
/* 803A5918 003A2858  7F C3 F3 78 */	mr r3, r30
/* 803A591C 003A285C  7F E5 FB 78 */	mr r5, r31
/* 803A5920 003A2860  38 80 00 38 */	li r4, 0x38
/* 803A5924 003A2864  4C C6 31 82 */	crclr 6
/* 803A5928 003A2868  4B C8 4D 19 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A592C:
/* 803A592C 003A286C  80 1D 00 0C */	lwz r0, 0xc(r29)
/* 803A5930 003A2870  3B 9C 00 01 */	addi r28, r28, 1
/* 803A5934 003A2874  54 00 05 1E */	rlwinm r0, r0, 0, 0x14, 0xf
/* 803A5938 003A2878  60 00 20 00 */	ori r0, r0, 0x2000
/* 803A593C 003A287C  90 1D 00 0C */	stw r0, 0xc(r29)
lbl_803A5940:
/* 803A5940 003A2880  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 803A5944 003A2884  57 80 04 3E */	clrlwi r0, r28, 0x10
/* 803A5948 003A2888  A0 64 00 7C */	lhz r3, 0x7c(r4)
/* 803A594C 003A288C  7C 00 18 40 */	cmplw r0, r3
/* 803A5950 003A2890  41 80 FF B4 */	blt lbl_803A5904
/* 803A5954 003A2894  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803A5958 003A2898  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803A595C 003A289C  7C 08 03 A6 */	mtlr r0
/* 803A5960 003A28A0  38 21 00 20 */	addi r1, r1, 0x20
/* 803A5964 003A28A4  4E 80 00 20 */	blr 

.global loadTexData__Q34Game8BlackMan3MgrFv
loadTexData__Q34Game8BlackMan3MgrFv:
/* 803A5968 003A28A8  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803A596C 003A28AC  7C 08 02 A6 */	mflr r0
/* 803A5970 003A28B0  3C 80 80 49 */	lis r4, lbl_80495258@ha
/* 803A5974 003A28B4  90 01 00 54 */	stw r0, 0x54(r1)
/* 803A5978 003A28B8  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803A597C 003A28BC  3B E4 52 58 */	addi r31, r4, lbl_80495258@l
/* 803A5980 003A28C0  38 80 00 00 */	li r4, 0
/* 803A5984 003A28C4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803A5988 003A28C8  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803A598C 003A28CC  7C 7D 1B 78 */	mr r29, r3
/* 803A5990 003A28D0  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 803A5994 003A28D4  48 09 89 09 */	bl enableMaterialAnim__Q28SysShape5ModelFP12J3DModelDatai
/* 803A5998 003A28D8  38 61 00 08 */	addi r3, r1, 8
/* 803A599C 003A28DC  38 9F 03 E4 */	addi r4, r31, 0x3e4
/* 803A59A0 003A28E0  3B C0 00 00 */	li r30, 0
/* 803A59A4 003A28E4  48 0A 6C 35 */	bl __ct__Q212LoadResource3ArgFPCc
/* 803A59A8 003A28E8  80 6D 9C 28 */	lwz r3, gLoadResourceMgr@sda21(r13)
/* 803A59AC 003A28EC  38 81 00 08 */	addi r4, r1, 8
/* 803A59B0 003A28F0  48 0A 6D F1 */	bl load__Q212LoadResource3MgrFRQ212LoadResource3Arg
/* 803A59B4 003A28F4  28 03 00 00 */	cmplwi r3, 0
/* 803A59B8 003A28F8  41 82 00 08 */	beq lbl_803A59C0
/* 803A59BC 003A28FC  83 C3 00 30 */	lwz r30, 0x30(r3)
lbl_803A59C0:
/* 803A59C0 003A2900  28 1E 00 00 */	cmplwi r30, 0
/* 803A59C4 003A2904  40 82 00 18 */	bne lbl_803A59DC
/* 803A59C8 003A2908  38 7F 03 C8 */	addi r3, r31, 0x3c8
/* 803A59CC 003A290C  38 BF 03 D8 */	addi r5, r31, 0x3d8
/* 803A59D0 003A2910  38 80 00 53 */	li r4, 0x53
/* 803A59D4 003A2914  4C C6 31 82 */	crclr 6
/* 803A59D8 003A2918  4B C8 4C 69 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A59DC:
/* 803A59DC 003A291C  38 60 00 10 */	li r3, 0x10
/* 803A59E0 003A2920  4B C7 E4 C5 */	bl __nw__FUl
/* 803A59E4 003A2924  7C 60 1B 79 */	or. r0, r3, r3
/* 803A59E8 003A2928  41 82 00 0C */	beq lbl_803A59F4
/* 803A59EC 003A292C  48 08 E7 49 */	bl __ct__Q23Sys15MatTexAnimationFv
/* 803A59F0 003A2930  7C 60 1B 78 */	mr r0, r3
lbl_803A59F4:
/* 803A59F4 003A2934  90 1D 00 44 */	stw r0, 0x44(r29)
/* 803A59F8 003A2938  7F C4 F3 78 */	mr r4, r30
/* 803A59FC 003A293C  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 803A5A00 003A2940  80 BD 00 1C */	lwz r5, 0x1c(r29)
/* 803A5A04 003A2944  48 08 E6 1D */	bl attachResource__Q23Sys16MatBaseAnimationFPvP12J3DModelData
/* 803A5A08 003A2948  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803A5A0C 003A294C  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803A5A10 003A2950  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803A5A14 003A2954  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803A5A18 003A2958  7C 08 03 A6 */	mtlr r0
/* 803A5A1C 003A295C  38 21 00 50 */	addi r1, r1, 0x50
/* 803A5A20 003A2960  4E 80 00 20 */	blr 

.global doLoadBmd__Q34Game8BlackMan3MgrFPv
doLoadBmd__Q34Game8BlackMan3MgrFPv:
/* 803A5A24 003A2964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5A28 003A2968  7C 08 02 A6 */	mflr r0
/* 803A5A2C 003A296C  3C A0 21 30 */	lis r5, 0x21300030@ha
/* 803A5A30 003A2970  7C 83 23 78 */	mr r3, r4
/* 803A5A34 003A2974  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5A38 003A2978  38 85 00 30 */	addi r4, r5, 0x21300030@l
/* 803A5A3C 003A297C  4B CC 9E 59 */	bl load__22J3DModelLoaderDataBaseFPCvUl
/* 803A5A40 003A2980  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5A44 003A2984  7C 08 03 A6 */	mtlr r0
/* 803A5A48 003A2988  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5A4C 003A298C  4E 80 00 20 */	blr 

.global createModel__Q34Game8BlackMan3MgrFv
createModel__Q34Game8BlackMan3MgrFv:
/* 803A5A50 003A2990  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803A5A54 003A2994  7C 08 02 A6 */	mflr r0
/* 803A5A58 003A2998  3C 80 80 49 */	lis r4, lbl_80495258@ha
/* 803A5A5C 003A299C  90 01 00 54 */	stw r0, 0x54(r1)
/* 803A5A60 003A29A0  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 803A5A64 003A29A4  7C 7B 1B 78 */	mr r27, r3
/* 803A5A68 003A29A8  3B C4 52 58 */	addi r30, r4, lbl_80495258@l
/* 803A5A6C 003A29AC  38 60 00 14 */	li r3, 0x14
/* 803A5A70 003A29B0  4B C7 E4 35 */	bl __nw__FUl
/* 803A5A74 003A29B4  7C 7D 1B 79 */	or. r29, r3, r3
/* 803A5A78 003A29B8  41 82 00 18 */	beq lbl_803A5A90
/* 803A5A7C 003A29BC  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 803A5A80 003A29C0  3C A0 00 08 */	lis r5, 8
/* 803A5A84 003A29C4  88 DB 00 24 */	lbz r6, 0x24(r27)
/* 803A5A88 003A29C8  48 09 87 51 */	bl __ct__Q28SysShape5ModelFP12J3DModelDataUlUl
/* 803A5A8C 003A29CC  7C 7D 1B 78 */	mr r29, r3
lbl_803A5A90:
/* 803A5A90 003A29D0  28 1D 00 00 */	cmplwi r29, 0
/* 803A5A94 003A29D4  40 82 00 18 */	bne lbl_803A5AAC
/* 803A5A98 003A29D8  38 7E 03 C8 */	addi r3, r30, 0x3c8
/* 803A5A9C 003A29DC  38 BE 03 D8 */	addi r5, r30, 0x3d8
/* 803A5AA0 003A29E0  38 80 00 80 */	li r4, 0x80
/* 803A5AA4 003A29E4  4C C6 31 82 */	crclr 6
/* 803A5AA8 003A29E8  4B C8 4B 99 */	bl panic_f__12JUTExceptionFPCciPCce
lbl_803A5AAC:
/* 803A5AAC 003A29EC  3B 80 00 00 */	li r28, 0
/* 803A5AB0 003A29F0  3F E0 05 02 */	lis r31, 0x502
/* 803A5AB4 003A29F4  48 00 00 40 */	b lbl_803A5AF4
lbl_803A5AB8:
/* 803A5AB8 003A29F8  80 64 00 64 */	lwz r3, 0x64(r4)
/* 803A5ABC 003A29FC  7F 84 E3 78 */	mr r4, r28
/* 803A5AC0 003A2A00  4B C8 93 5D */	bl getName__10JUTNameTabCFUs
/* 803A5AC4 003A2A04  38 9E 04 0C */	addi r4, r30, 0x40c
/* 803A5AC8 003A2A08  4B D2 4B F9 */	bl strcmp
/* 803A5ACC 003A2A0C  2C 03 00 00 */	cmpwi r3, 0
/* 803A5AD0 003A2A10  40 82 00 20 */	bne lbl_803A5AF0
/* 803A5AD4 003A2A14  80 9D 00 08 */	lwz r4, 8(r29)
/* 803A5AD8 003A2A18  57 83 32 B2 */	rlwinm r3, r28, 6, 0xa, 0x19
/* 803A5ADC 003A2A1C  38 03 00 2C */	addi r0, r3, 0x2c
/* 803A5AE0 003A2A20  80 64 00 C0 */	lwz r3, 0xc0(r4)
/* 803A5AE4 003A2A24  38 9F 12 00 */	addi r4, r31, 0x1200
/* 803A5AE8 003A2A28  7C 63 00 2E */	lwzx r3, r3, r0
/* 803A5AEC 003A2A2C  4B CB A7 ED */	bl newDifferedDisplayList__14J3DShapePacketFUl
lbl_803A5AF0:
/* 803A5AF0 003A2A30  3B 9C 00 01 */	addi r28, r28, 1
lbl_803A5AF4:
/* 803A5AF4 003A2A34  80 9B 00 1C */	lwz r4, 0x1c(r27)
/* 803A5AF8 003A2A38  57 80 04 3E */	clrlwi r0, r28, 0x10
/* 803A5AFC 003A2A3C  A0 64 00 5C */	lhz r3, 0x5c(r4)
/* 803A5B00 003A2A40  7C 00 18 40 */	cmplw r0, r3
/* 803A5B04 003A2A44  41 80 FF B4 */	blt lbl_803A5AB8
/* 803A5B08 003A2A48  38 61 00 08 */	addi r3, r1, 8
/* 803A5B0C 003A2A4C  4B D4 47 95 */	bl PSMTXIdentity
/* 803A5B10 003A2A50  3C 80 80 51 */	lis r4, j3dSys@ha
/* 803A5B14 003A2A54  38 61 00 08 */	addi r3, r1, 8
/* 803A5B18 003A2A58  38 84 F2 30 */	addi r4, r4, j3dSys@l
/* 803A5B1C 003A2A5C  4B D4 47 B1 */	bl PSMTXCopy
/* 803A5B20 003A2A60  83 DD 00 08 */	lwz r30, 8(r29)
/* 803A5B24 003A2A64  7F C3 F3 78 */	mr r3, r30
/* 803A5B28 003A2A68  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A5B2C 003A2A6C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803A5B30 003A2A70  7D 89 03 A6 */	mtctr r12
/* 803A5B34 003A2A74  4E 80 04 21 */	bctrl 
/* 803A5B38 003A2A78  7F C3 F3 78 */	mr r3, r30
/* 803A5B3C 003A2A7C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803A5B40 003A2A80  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 803A5B44 003A2A84  7D 89 03 A6 */	mtctr r12
/* 803A5B48 003A2A88  4E 80 04 21 */	bctrl 
/* 803A5B4C 003A2A8C  7F C3 F3 78 */	mr r3, r30
/* 803A5B50 003A2A90  4B CC 0D D5 */	bl makeDL__8J3DModelFv
/* 803A5B54 003A2A94  7F C3 F3 78 */	mr r3, r30
/* 803A5B58 003A2A98  4B CC 0C 9D */	bl lock__8J3DModelFv
/* 803A5B5C 003A2A9C  7F A3 EB 78 */	mr r3, r29
/* 803A5B60 003A2AA0  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 803A5B64 003A2AA4  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803A5B68 003A2AA8  7C 08 03 A6 */	mtlr r0
/* 803A5B6C 003A2AAC  38 21 00 50 */	addi r1, r1, 0x50
/* 803A5B70 003A2AB0  4E 80 00 20 */	blr 

.global __dt__Q34Game8BlackMan3MgrFv
__dt__Q34Game8BlackMan3MgrFv:
/* 803A5B74 003A2AB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5B78 003A2AB8  7C 08 02 A6 */	mflr r0
/* 803A5B7C 003A2ABC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5B80 003A2AC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5B84 003A2AC4  7C 9F 23 78 */	mr r31, r4
/* 803A5B88 003A2AC8  93 C1 00 08 */	stw r30, 8(r1)
/* 803A5B8C 003A2ACC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803A5B90 003A2AD0  41 82 00 78 */	beq lbl_803A5C08
/* 803A5B94 003A2AD4  3C 60 80 4E */	lis r3, __vt__Q34Game8BlackMan3Mgr@ha
/* 803A5B98 003A2AD8  38 63 5C 10 */	addi r3, r3, __vt__Q34Game8BlackMan3Mgr@l
/* 803A5B9C 003A2ADC  90 7E 00 00 */	stw r3, 0(r30)
/* 803A5BA0 003A2AE0  38 03 00 38 */	addi r0, r3, 0x38
/* 803A5BA4 003A2AE4  90 1E 00 04 */	stw r0, 4(r30)
/* 803A5BA8 003A2AE8  41 82 00 50 */	beq lbl_803A5BF8
/* 803A5BAC 003A2AEC  3C 60 80 4B */	lis r3, __vt__Q24Game12EnemyMgrBase@ha
/* 803A5BB0 003A2AF0  38 63 F8 A0 */	addi r3, r3, __vt__Q24Game12EnemyMgrBase@l
/* 803A5BB4 003A2AF4  90 7E 00 00 */	stw r3, 0(r30)
/* 803A5BB8 003A2AF8  38 03 00 38 */	addi r0, r3, 0x38
/* 803A5BBC 003A2AFC  90 1E 00 04 */	stw r0, 4(r30)
/* 803A5BC0 003A2B00  41 82 00 38 */	beq lbl_803A5BF8
/* 803A5BC4 003A2B04  3C 60 80 4B */	lis r3, __vt__Q24Game13IEnemyMgrBase@ha
/* 803A5BC8 003A2B08  34 1E 00 04 */	addic. r0, r30, 4
/* 803A5BCC 003A2B0C  38 63 AC FC */	addi r3, r3, __vt__Q24Game13IEnemyMgrBase@l
/* 803A5BD0 003A2B10  90 7E 00 00 */	stw r3, 0(r30)
/* 803A5BD4 003A2B14  38 03 00 38 */	addi r0, r3, 0x38
/* 803A5BD8 003A2B18  90 1E 00 04 */	stw r0, 4(r30)
/* 803A5BDC 003A2B1C  41 82 00 1C */	beq lbl_803A5BF8
/* 803A5BE0 003A2B20  3C 80 80 4B */	lis r4, __vt__16GenericContainer@ha
/* 803A5BE4 003A2B24  38 7E 00 04 */	addi r3, r30, 4
/* 803A5BE8 003A2B28  38 04 AC DC */	addi r0, r4, __vt__16GenericContainer@l
/* 803A5BEC 003A2B2C  38 80 00 00 */	li r4, 0
/* 803A5BF0 003A2B30  90 1E 00 04 */	stw r0, 4(r30)
/* 803A5BF4 003A2B34  48 06 B9 95 */	bl __dt__5CNodeFv
lbl_803A5BF8:
/* 803A5BF8 003A2B38  7F E0 07 35 */	extsh. r0, r31
/* 803A5BFC 003A2B3C  40 81 00 0C */	ble lbl_803A5C08
/* 803A5C00 003A2B40  7F C3 F3 78 */	mr r3, r30
/* 803A5C04 003A2B44  4B C7 E4 B1 */	bl __dl__FPv
lbl_803A5C08:
/* 803A5C08 003A2B48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5C0C 003A2B4C  7F C3 F3 78 */	mr r3, r30
/* 803A5C10 003A2B50  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5C14 003A2B54  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A5C18 003A2B58  7C 08 03 A6 */	mtlr r0
/* 803A5C1C 003A2B5C  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5C20 003A2B60  4E 80 00 20 */	blr 

.global getEnemyTypeID__Q34Game8BlackMan3MgrFv
getEnemyTypeID__Q34Game8BlackMan3MgrFv:
/* 803A5C24 003A2B64  38 60 00 63 */	li r3, 0x63
/* 803A5C28 003A2B68  4E 80 00 20 */	blr 

.global createObj__Q34Game8BlackMan3MgrFi
createObj__Q34Game8BlackMan3MgrFi:
/* 803A5C2C 003A2B6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5C30 003A2B70  7C 08 02 A6 */	mflr r0
/* 803A5C34 003A2B74  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5C38 003A2B78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5C3C 003A2B7C  7C 9F 23 78 */	mr r31, r4
/* 803A5C40 003A2B80  93 C1 00 08 */	stw r30, 8(r1)
/* 803A5C44 003A2B84  7C 7E 1B 78 */	mr r30, r3
/* 803A5C48 003A2B88  1C 7F 03 BC */	mulli r3, r31, 0x3bc
/* 803A5C4C 003A2B8C  38 63 00 10 */	addi r3, r3, 0x10
/* 803A5C50 003A2B90  4B C7 E3 5D */	bl __nwa__FUl
/* 803A5C54 003A2B94  3C 80 80 3A */	lis r4, __ct__Q34Game8BlackMan3ObjFv@ha
/* 803A5C58 003A2B98  3C A0 80 3A */	lis r5, __dt__Q34Game8BlackMan3ObjFv@ha
/* 803A5C5C 003A2B9C  38 84 66 9C */	addi r4, r4, __ct__Q34Game8BlackMan3ObjFv@l
/* 803A5C60 003A2BA0  7F E7 FB 78 */	mr r7, r31
/* 803A5C64 003A2BA4  38 A5 5C 8C */	addi r5, r5, __dt__Q34Game8BlackMan3ObjFv@l
/* 803A5C68 003A2BA8  38 C0 03 BC */	li r6, 0x3bc
/* 803A5C6C 003A2BAC  4B D1 BD 85 */	bl __construct_new_array
/* 803A5C70 003A2BB0  90 7E 00 48 */	stw r3, 0x48(r30)
/* 803A5C74 003A2BB4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5C78 003A2BB8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5C7C 003A2BBC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A5C80 003A2BC0  7C 08 03 A6 */	mtlr r0
/* 803A5C84 003A2BC4  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5C88 003A2BC8  4E 80 00 20 */	blr 

.global __dt__Q34Game8BlackMan3ObjFv
__dt__Q34Game8BlackMan3ObjFv:
/* 803A5C8C 003A2BCC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5C90 003A2BD0  7C 08 02 A6 */	mflr r0
/* 803A5C94 003A2BD4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5C98 003A2BD8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5C9C 003A2BDC  7C 7F 1B 79 */	or. r31, r3, r3
/* 803A5CA0 003A2BE0  93 C1 00 08 */	stw r30, 8(r1)
/* 803A5CA4 003A2BE4  7C 9E 23 78 */	mr r30, r4
/* 803A5CA8 003A2BE8  41 82 00 84 */	beq lbl_803A5D2C
/* 803A5CAC 003A2BEC  3C 60 80 4E */	lis r3, __vt__Q34Game8BlackMan3Obj@ha
/* 803A5CB0 003A2BF0  38 1F 03 AC */	addi r0, r31, 0x3ac
/* 803A5CB4 003A2BF4  38 83 5E A8 */	addi r4, r3, __vt__Q34Game8BlackMan3Obj@l
/* 803A5CB8 003A2BF8  90 9F 00 00 */	stw r4, 0(r31)
/* 803A5CBC 003A2BFC  38 64 01 B0 */	addi r3, r4, 0x1b0
/* 803A5CC0 003A2C00  38 84 02 FC */	addi r4, r4, 0x2fc
/* 803A5CC4 003A2C04  90 7F 01 78 */	stw r3, 0x178(r31)
/* 803A5CC8 003A2C08  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803A5CCC 003A2C0C  90 83 00 00 */	stw r4, 0(r3)
/* 803A5CD0 003A2C10  80 7F 01 7C */	lwz r3, 0x17c(r31)
/* 803A5CD4 003A2C14  7C 03 00 50 */	subf r0, r3, r0
/* 803A5CD8 003A2C18  90 03 00 0C */	stw r0, 0xc(r3)
/* 803A5CDC 003A2C1C  41 82 00 40 */	beq lbl_803A5D1C
/* 803A5CE0 003A2C20  3C 60 80 4B */	lis r3, __vt__Q24Game9EnemyBase@ha
/* 803A5CE4 003A2C24  38 1F 02 BC */	addi r0, r31, 0x2bc
/* 803A5CE8 003A2C28  38 83 A3 24 */	addi r4, r3, __vt__Q24Game9EnemyBase@l
/* 803A5CEC 003A2C2C  38 7F 02 90 */	addi r3, r31, 0x290
/* 803A5CF0 003A2C30  90 9F 00 00 */	stw r4, 0(r31)
/* 803A5CF4 003A2C34  38 A4 01 B0 */	addi r5, r4, 0x1b0
/* 803A5CF8 003A2C38  38 C4 02 F8 */	addi r6, r4, 0x2f8
/* 803A5CFC 003A2C3C  38 80 FF FF */	li r4, -1
/* 803A5D00 003A2C40  90 BF 01 78 */	stw r5, 0x178(r31)
/* 803A5D04 003A2C44  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 803A5D08 003A2C48  90 C5 00 00 */	stw r6, 0(r5)
/* 803A5D0C 003A2C4C  80 BF 01 7C */	lwz r5, 0x17c(r31)
/* 803A5D10 003A2C50  7C 05 00 50 */	subf r0, r5, r0
/* 803A5D14 003A2C54  90 05 00 0C */	stw r0, 0xc(r5)
/* 803A5D18 003A2C58  48 06 B8 71 */	bl __dt__5CNodeFv
lbl_803A5D1C:
/* 803A5D1C 003A2C5C  7F C0 07 35 */	extsh. r0, r30
/* 803A5D20 003A2C60  40 81 00 0C */	ble lbl_803A5D2C
/* 803A5D24 003A2C64  7F E3 FB 78 */	mr r3, r31
/* 803A5D28 003A2C68  4B C7 E3 8D */	bl __dl__FPv
lbl_803A5D2C:
/* 803A5D2C 003A2C6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5D30 003A2C70  7F E3 FB 78 */	mr r3, r31
/* 803A5D34 003A2C74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5D38 003A2C78  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A5D3C 003A2C7C  7C 08 03 A6 */	mtlr r0
/* 803A5D40 003A2C80  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5D44 003A2C84  4E 80 00 20 */	blr 

.global getEnemy__Q34Game8BlackMan3MgrFi
getEnemy__Q34Game8BlackMan3MgrFi:
/* 803A5D48 003A2C88  1C 04 03 BC */	mulli r0, r4, 0x3bc
/* 803A5D4C 003A2C8C  80 63 00 48 */	lwz r3, 0x48(r3)
/* 803A5D50 003A2C90  7C 63 02 14 */	add r3, r3, r0
/* 803A5D54 003A2C94  4E 80 00 20 */	blr 

.global read__Q34Game8BlackMan5ParmsFR6Stream
read__Q34Game8BlackMan5ParmsFR6Stream:
/* 803A5D58 003A2C98  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803A5D5C 003A2C9C  7C 08 02 A6 */	mflr r0
/* 803A5D60 003A2CA0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803A5D64 003A2CA4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803A5D68 003A2CA8  7C 9F 23 78 */	mr r31, r4
/* 803A5D6C 003A2CAC  93 C1 00 08 */	stw r30, 8(r1)
/* 803A5D70 003A2CB0  7C 7E 1B 78 */	mr r30, r3
/* 803A5D74 003A2CB4  48 06 DA 81 */	bl read__10ParametersFR6Stream
/* 803A5D78 003A2CB8  7F E4 FB 78 */	mr r4, r31
/* 803A5D7C 003A2CBC  38 7E 00 E0 */	addi r3, r30, 0xe0
/* 803A5D80 003A2CC0  48 06 DA 75 */	bl read__10ParametersFR6Stream
/* 803A5D84 003A2CC4  7F E4 FB 78 */	mr r4, r31
/* 803A5D88 003A2CC8  38 7E 07 F8 */	addi r3, r30, 0x7f8
/* 803A5D8C 003A2CCC  48 06 DA 69 */	bl read__10ParametersFR6Stream
/* 803A5D90 003A2CD0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803A5D94 003A2CD4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803A5D98 003A2CD8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803A5D9C 003A2CDC  7C 08 03 A6 */	mtlr r0
/* 803A5DA0 003A2CE0  38 21 00 10 */	addi r1, r1, 0x10
/* 803A5DA4 003A2CE4  4E 80 00 20 */	blr 

.global "@4@__dt__Q34Game8BlackMan3MgrFv"
"@4@__dt__Q34Game8BlackMan3MgrFv":
/* 803A5DA8 003A2CE8  38 63 FF FC */	addi r3, r3, -4
/* 803A5DAC 003A2CEC  4B FF FD C8 */	b __dt__Q34Game8BlackMan3MgrFv
