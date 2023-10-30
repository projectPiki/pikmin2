.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80497910, local
	.asciz "efxEnemyBoss.cpp"
.endobj lbl_80497910
.balign 4
.obj lbl_80497924, local
	.asciz "P2Assert"
.endobj lbl_80497924
.balign 4
.obj lbl_80497930, local
	.asciz "ArgPrmColor"
.endobj lbl_80497930
.balign 4
.obj lbl_8049793C, local
	.asciz "ArgPosPos"
.endobj lbl_8049793C
.balign 4
.obj lbl_80497948, local
	.asciz "ArgScale"
.endobj lbl_80497948
.balign 4
.obj lbl_80497954, local
	.asciz "ArgRotYScale"
.endobj lbl_80497954
.balign 4
.obj lbl_80497964, local
	.asciz "ArgKchYodare"
.endobj lbl_80497964

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx16THdamaDeadHahen2, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx16THdamaDeadHahen2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx16THdamaDeadHahen2
.obj __vt__Q23efx16THdamaDeadHahen1, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx16THdamaDeadHahen1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx16THdamaDeadHahen1
.obj __vt__Q23efx12THdamaShootA, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx12THdamaShootA
.obj __vt__Q23efx11THdamaHit2W, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11THdamaHit2WFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx11THdamaHit2W
.obj __vt__Q23efx11THdamaShell, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11THdamaShellFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11THdamaShellFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx11THdamaShellFv
.endobj __vt__Q23efx11THdamaShell
.obj __vt__Q23efx22TKchYodareBaseChaseMtx, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx22TKchYodareBaseChaseMtxFPQ23efx3Arg
	.4byte forceKill__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte fade__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx22TKchYodareBaseChaseMtxFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte endDemoDrawOn__Q23efx22TKchYodareBaseChaseMtxFv
	.4byte __dt__Q23efx22TKchYodareBaseChaseMtxFv
.endobj __vt__Q23efx22TKchYodareBaseChaseMtx
.obj __vt__Q23efx27TParticleCallBack_KchYodare, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23efx27TParticleCallBack_KchYodareFv
	.4byte execute__Q23efx27TParticleCallBack_KchYodareFP14JPABaseEmitterP15JPABaseParticle
	.4byte draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle
	.4byte init__Q23efx27TParticleCallBack_KchYodareFP14JPABaseEmitterP15JPABaseParticle
.endobj __vt__Q23efx27TParticleCallBack_KchYodare
.obj __vt__Q23efx13TKchDownsmoke, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx13TKchDownsmokeFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx13TKchDownsmoke
.obj __vt__Q23efx10TKchDamage, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TKchDamageFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx10TKchDamage
.obj __vt__Q23efx9TKchApWat, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx9TKchApWatFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple5Fv
	.4byte fade__Q23efx8TSimple5Fv
.endobj __vt__Q23efx9TKchApWat
.obj __vt__Q23efx10TKchApSand, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TKchApSandFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx10TKchApSand
.obj __vt__Q23efx13TKchFlickSand, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx13TKchFlickSandFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx13TKchFlickSand
.obj __vt__Q23efx10TOootaFire, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TOootaFireFPQ23efx3Arg
	.4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx10TOootaFire
.obj __vt__Q23efx13TOootaBombLeg, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx13TOootaBombLegFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx13TOootaBombLeg
.obj __vt__Q23efx10TKageDead2, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TKageDead2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx10TKageDead2
.obj __vt__Q23efx10TDangoTurn, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx10TDangoTurnFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx10TDangoTurn
.obj __vt__Q23efx11TDangoCrash, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TDangoCrashFPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx11TDangoCrash

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051FE38, local
	.asciz "ArgDir"
.endobj lbl_8051FE38
.balign 4
.obj lbl_8051FE40, local
	.float 0.0
.endobj lbl_8051FE40
.obj lbl_8051FE44, local
	.float 1.0
.endobj lbl_8051FE44
.balign 4
.obj lbl_8051FE48, local
	.asciz "ArgRotY"
.endobj lbl_8051FE48
.balign 4
.obj lbl_8051FE50, local
	.float 100.0
.endobj lbl_8051FE50

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn create__Q23efx11TDangoCrashFPQ23efx3Arg, global
/* 803EB360 003E82A0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803EB364 003E82A4  7C 08 02 A6 */	mflr r0
/* 803EB368 003E82A8  90 01 00 74 */	stw r0, 0x74(r1)
/* 803EB36C 003E82AC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803EB370 003E82B0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803EB374 003E82B4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 803EB378 003E82B8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 803EB37C 003E82BC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 803EB380 003E82C0  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 803EB384 003E82C4  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803EB388 003E82C8  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803EB38C 003E82CC  7C 9E 23 78 */	mr r30, r4
/* 803EB390 003E82D0  7C 7F 1B 78 */	mr r31, r3
/* 803EB394 003E82D4  7F C3 F3 78 */	mr r3, r30
/* 803EB398 003E82D8  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EB39C 003E82DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EB3A0 003E82E0  7D 89 03 A6 */	mtctr r12
/* 803EB3A4 003E82E4  4E 80 04 21 */	bctrl 
/* 803EB3A8 003E82E8  7C 64 1B 78 */	mr r4, r3
/* 803EB3AC 003E82EC  38 62 1A D8 */	addi r3, r2, lbl_8051FE38@sda21
/* 803EB3B0 003E82F0  4B CD F3 11 */	bl strcmp
/* 803EB3B4 003E82F4  7C 60 00 34 */	cntlzw r0, r3
/* 803EB3B8 003E82F8  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EB3BC 003E82FC  40 82 00 20 */	bne .L_803EB3DC
/* 803EB3C0 003E8300  3C 60 80 49 */	lis r3, lbl_80497910@ha
/* 803EB3C4 003E8304  3C A0 80 49 */	lis r5, lbl_80497924@ha
/* 803EB3C8 003E8308  38 63 79 10 */	addi r3, r3, lbl_80497910@l
/* 803EB3CC 003E830C  38 80 00 10 */	li r4, 0x10
/* 803EB3D0 003E8310  38 A5 79 24 */	addi r5, r5, lbl_80497924@l
/* 803EB3D4 003E8314  4C C6 31 82 */	crclr 6
/* 803EB3D8 003E8318  4B C3 F2 69 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EB3DC:
/* 803EB3DC 003E831C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803EB3E0 003E8320  7F E3 FB 78 */	mr r3, r31
/* 803EB3E4 003E8324  C3 DE 00 14 */	lfs f30, 0x14(r30)
/* 803EB3E8 003E8328  7F C4 F3 78 */	mr r4, r30
/* 803EB3EC 003E832C  C3 BE 00 18 */	lfs f29, 0x18(r30)
/* 803EB3F0 003E8330  4B FC 3C 25 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803EB3F4 003E8334  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EB3F8 003E8338  41 82 00 DC */	beq .L_803EB4D4
/* 803EB3FC 003E833C  EC 3E 07 B2 */	fmuls f1, f30, f30
/* 803EB400 003E8340  C0 02 1A E0 */	lfs f0, lbl_8051FE40@sda21(r2)
/* 803EB404 003E8344  EC 5D 07 72 */	fmuls f2, f29, f29
/* 803EB408 003E8348  EC 3F 0F FA */	fmadds f1, f31, f31, f1
/* 803EB40C 003E834C  EC 22 08 2A */	fadds f1, f2, f1
/* 803EB410 003E8350  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EB414 003E8354  40 81 00 14 */	ble .L_803EB428
/* 803EB418 003E8358  40 81 00 14 */	ble .L_803EB42C
/* 803EB41C 003E835C  FC 00 08 34 */	frsqrte f0, f1
/* 803EB420 003E8360  EC 20 00 72 */	fmuls f1, f0, f1
/* 803EB424 003E8364  48 00 00 08 */	b .L_803EB42C
.L_803EB428:
/* 803EB428 003E8368  FC 20 00 90 */	fmr f1, f0
.L_803EB42C:
/* 803EB42C 003E836C  C0 02 1A E0 */	lfs f0, lbl_8051FE40@sda21(r2)
/* 803EB430 003E8370  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EB434 003E8374  40 81 00 18 */	ble .L_803EB44C
/* 803EB438 003E8378  C0 02 1A E4 */	lfs f0, lbl_8051FE44@sda21(r2)
/* 803EB43C 003E837C  EC 00 08 24 */	fdivs f0, f0, f1
/* 803EB440 003E8380  EF FF 00 32 */	fmuls f31, f31, f0
/* 803EB444 003E8384  EF DE 00 32 */	fmuls f30, f30, f0
/* 803EB448 003E8388  EF BD 00 32 */	fmuls f29, f29, f0
.L_803EB44C:
/* 803EB44C 003E838C  C0 A2 1A E0 */	lfs f5, lbl_8051FE40@sda21(r2)
/* 803EB450 003E8390  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 803EB454 003E8394  C4 63 41 E4 */	lfsu f3, "zero__10Vector3<f>"@l(r3)
/* 803EB458 003E8398  3B C0 00 00 */	li r30, 0
/* 803EB45C 003E839C  EC 45 07 72 */	fmuls f2, f5, f29
/* 803EB460 003E83A0  C0 C2 1A E4 */	lfs f6, lbl_8051FE44@sda21(r2)
/* 803EB464 003E83A4  EC 85 07 B2 */	fmuls f4, f5, f30
/* 803EB468 003E83A8  C0 23 00 04 */	lfs f1, 4(r3)
/* 803EB46C 003E83AC  C0 03 00 08 */	lfs f0, 8(r3)
/* 803EB470 003E83B0  EC 45 17 F8 */	fmsubs f2, f5, f31, f2
/* 803EB474 003E83B4  EC E6 27 FC */	fnmsubs f7, f6, f31, f4
/* 803EB478 003E83B8  D0 A1 00 0C */	stfs f5, 0xc(r1)
/* 803EB47C 003E83BC  EC 86 27 78 */	fmsubs f4, f6, f29, f4
/* 803EB480 003E83C0  D3 E1 00 10 */	stfs f31, 0x10(r1)
/* 803EB484 003E83C4  D0 81 00 08 */	stfs f4, 8(r1)
/* 803EB488 003E83C8  D0 61 00 14 */	stfs f3, 0x14(r1)
/* 803EB48C 003E83CC  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 803EB490 003E83D0  D0 C1 00 1C */	stfs f6, 0x1c(r1)
/* 803EB494 003E83D4  D3 C1 00 20 */	stfs f30, 0x20(r1)
/* 803EB498 003E83D8  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803EB49C 003E83DC  D0 E1 00 28 */	stfs f7, 0x28(r1)
/* 803EB4A0 003E83E0  D0 A1 00 2C */	stfs f5, 0x2c(r1)
/* 803EB4A4 003E83E4  D3 A1 00 30 */	stfs f29, 0x30(r1)
/* 803EB4A8 003E83E8  D0 01 00 34 */	stfs f0, 0x34(r1)
.L_803EB4AC:
/* 803EB4AC 003E83EC  80 9F 00 08 */	lwz r4, 8(r31)
/* 803EB4B0 003E83F0  38 61 00 08 */	addi r3, r1, 8
/* 803EB4B4 003E83F4  38 84 00 68 */	addi r4, r4, 0x68
/* 803EB4B8 003E83F8  4B CA 88 3D */	bl JPASetRMtxfromMtx__FPA4_CfPA4_f
/* 803EB4BC 003E83FC  3B DE 00 01 */	addi r30, r30, 1
/* 803EB4C0 003E8400  3B FF 00 04 */	addi r31, r31, 4
/* 803EB4C4 003E8404  2C 1E 00 02 */	cmpwi r30, 2
/* 803EB4C8 003E8408  41 80 FF E4 */	blt .L_803EB4AC
/* 803EB4CC 003E840C  38 60 00 01 */	li r3, 1
/* 803EB4D0 003E8410  48 00 00 08 */	b .L_803EB4D8
.L_803EB4D4:
/* 803EB4D4 003E8414  38 60 00 00 */	li r3, 0
.L_803EB4D8:
/* 803EB4D8 003E8418  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803EB4DC 003E841C  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803EB4E0 003E8420  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 803EB4E4 003E8424  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 803EB4E8 003E8428  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 803EB4EC 003E842C  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 803EB4F0 003E8430  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803EB4F4 003E8434  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803EB4F8 003E8438  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803EB4FC 003E843C  7C 08 03 A6 */	mtlr r0
/* 803EB500 003E8440  38 21 00 70 */	addi r1, r1, 0x70
/* 803EB504 003E8444  4E 80 00 20 */	blr 
.endfn create__Q23efx11TDangoCrashFPQ23efx3Arg

.fn create__Q23efx10TDangoTurnFPQ23efx3Arg, global
/* 803EB508 003E8448  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803EB50C 003E844C  7C 08 02 A6 */	mflr r0
/* 803EB510 003E8450  90 01 00 74 */	stw r0, 0x74(r1)
/* 803EB514 003E8454  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803EB518 003E8458  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803EB51C 003E845C  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 803EB520 003E8460  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 803EB524 003E8464  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 803EB528 003E8468  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 803EB52C 003E846C  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803EB530 003E8470  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803EB534 003E8474  7C 9E 23 78 */	mr r30, r4
/* 803EB538 003E8478  7C 7F 1B 78 */	mr r31, r3
/* 803EB53C 003E847C  7F C3 F3 78 */	mr r3, r30
/* 803EB540 003E8480  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EB544 003E8484  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EB548 003E8488  7D 89 03 A6 */	mtctr r12
/* 803EB54C 003E848C  4E 80 04 21 */	bctrl 
/* 803EB550 003E8490  7C 64 1B 78 */	mr r4, r3
/* 803EB554 003E8494  38 62 1A E8 */	addi r3, r2, lbl_8051FE48@sda21
/* 803EB558 003E8498  4B CD F1 69 */	bl strcmp
/* 803EB55C 003E849C  7C 60 00 34 */	cntlzw r0, r3
/* 803EB560 003E84A0  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EB564 003E84A4  40 82 00 20 */	bne .L_803EB584
/* 803EB568 003E84A8  3C 60 80 49 */	lis r3, lbl_80497910@ha
/* 803EB56C 003E84AC  3C A0 80 49 */	lis r5, lbl_80497924@ha
/* 803EB570 003E84B0  38 63 79 10 */	addi r3, r3, lbl_80497910@l
/* 803EB574 003E84B4  38 80 00 2F */	li r4, 0x2f
/* 803EB578 003E84B8  38 A5 79 24 */	addi r5, r5, lbl_80497924@l
/* 803EB57C 003E84BC  4C C6 31 82 */	crclr 6
/* 803EB580 003E84C0  4B C3 F0 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EB584:
/* 803EB584 003E84C4  C3 FE 00 04 */	lfs f31, 4(r30)
/* 803EB588 003E84C8  38 61 00 08 */	addi r3, r1, 8
/* 803EB58C 003E84CC  C3 DE 00 08 */	lfs f30, 8(r30)
/* 803EB590 003E84D0  38 80 00 79 */	li r4, 0x79
/* 803EB594 003E84D4  C3 BE 00 0C */	lfs f29, 0xc(r30)
/* 803EB598 003E84D8  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 803EB59C 003E84DC  4B CF EF 79 */	bl PSMTXRotRad
/* 803EB5A0 003E84E0  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 803EB5A4 003E84E4  7F E3 FB 78 */	mr r3, r31
/* 803EB5A8 003E84E8  7F C4 F3 78 */	mr r4, r30
/* 803EB5AC 003E84EC  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 803EB5B0 003E84F0  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 803EB5B4 003E84F4  4B FC 3A 61 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803EB5B8 003E84F8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EB5BC 003E84FC  41 82 00 34 */	beq .L_803EB5F0
/* 803EB5C0 003E8500  3B C0 00 00 */	li r30, 0
.L_803EB5C4:
/* 803EB5C4 003E8504  80 BF 00 08 */	lwz r5, 8(r31)
/* 803EB5C8 003E8508  38 61 00 08 */	addi r3, r1, 8
/* 803EB5CC 003E850C  38 85 00 68 */	addi r4, r5, 0x68
/* 803EB5D0 003E8510  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803EB5D4 003E8514  4B CA 87 49 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803EB5D8 003E8518  3B DE 00 01 */	addi r30, r30, 1
/* 803EB5DC 003E851C  3B FF 00 04 */	addi r31, r31, 4
/* 803EB5E0 003E8520  2C 1E 00 02 */	cmpwi r30, 2
/* 803EB5E4 003E8524  41 80 FF E0 */	blt .L_803EB5C4
/* 803EB5E8 003E8528  38 60 00 01 */	li r3, 1
/* 803EB5EC 003E852C  48 00 00 08 */	b .L_803EB5F4
.L_803EB5F0:
/* 803EB5F0 003E8530  38 60 00 00 */	li r3, 0
.L_803EB5F4:
/* 803EB5F4 003E8534  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803EB5F8 003E8538  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803EB5FC 003E853C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 803EB600 003E8540  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 803EB604 003E8544  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 803EB608 003E8548  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 803EB60C 003E854C  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803EB610 003E8550  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803EB614 003E8554  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803EB618 003E8558  7C 08 03 A6 */	mtlr r0
/* 803EB61C 003E855C  38 21 00 70 */	addi r1, r1, 0x70
/* 803EB620 003E8560  4E 80 00 20 */	blr 
.endfn create__Q23efx10TDangoTurnFPQ23efx3Arg

.fn setGlobalPrmColor__Q23efx9TKageMoveFR6Color4, global
/* 803EB624 003E8564  80 C3 00 08 */	lwz r6, 8(r3)
/* 803EB628 003E8568  28 06 00 00 */	cmplwi r6, 0
/* 803EB62C 003E856C  4D 82 00 20 */	beqlr 
/* 803EB630 003E8570  88 A4 00 02 */	lbz r5, 2(r4)
/* 803EB634 003E8574  88 64 00 01 */	lbz r3, 1(r4)
/* 803EB638 003E8578  88 04 00 00 */	lbz r0, 0(r4)
/* 803EB63C 003E857C  98 06 00 B8 */	stb r0, 0xb8(r6)
/* 803EB640 003E8580  98 66 00 B9 */	stb r3, 0xb9(r6)
/* 803EB644 003E8584  98 A6 00 BA */	stb r5, 0xba(r6)
/* 803EB648 003E8588  88 04 00 03 */	lbz r0, 3(r4)
/* 803EB64C 003E858C  98 06 00 BB */	stb r0, 0xbb(r6)
/* 803EB650 003E8590  4E 80 00 20 */	blr 
.endfn setGlobalPrmColor__Q23efx9TKageMoveFR6Color4

.fn setGlobalPrmColor__Q23efx8TKageRunFR6Color4, global
/* 803EB654 003E8594  80 C3 00 08 */	lwz r6, 8(r3)
/* 803EB658 003E8598  28 06 00 00 */	cmplwi r6, 0
/* 803EB65C 003E859C  4D 82 00 20 */	beqlr 
/* 803EB660 003E85A0  88 A4 00 02 */	lbz r5, 2(r4)
/* 803EB664 003E85A4  88 64 00 01 */	lbz r3, 1(r4)
/* 803EB668 003E85A8  88 04 00 00 */	lbz r0, 0(r4)
/* 803EB66C 003E85AC  98 06 00 B8 */	stb r0, 0xb8(r6)
/* 803EB670 003E85B0  98 66 00 B9 */	stb r3, 0xb9(r6)
/* 803EB674 003E85B4  98 A6 00 BA */	stb r5, 0xba(r6)
/* 803EB678 003E85B8  88 04 00 03 */	lbz r0, 3(r4)
/* 803EB67C 003E85BC  98 06 00 BB */	stb r0, 0xbb(r6)
/* 803EB680 003E85C0  4E 80 00 20 */	blr 
.endfn setGlobalPrmColor__Q23efx8TKageRunFR6Color4

.fn setGlobalPrmColor__Q23efx10TKageDead1FR6Color4, global
/* 803EB684 003E85C4  80 C3 00 08 */	lwz r6, 8(r3)
/* 803EB688 003E85C8  28 06 00 00 */	cmplwi r6, 0
/* 803EB68C 003E85CC  4D 82 00 20 */	beqlr 
/* 803EB690 003E85D0  88 A4 00 02 */	lbz r5, 2(r4)
/* 803EB694 003E85D4  88 64 00 01 */	lbz r3, 1(r4)
/* 803EB698 003E85D8  88 04 00 00 */	lbz r0, 0(r4)
/* 803EB69C 003E85DC  98 06 00 B8 */	stb r0, 0xb8(r6)
/* 803EB6A0 003E85E0  98 66 00 B9 */	stb r3, 0xb9(r6)
/* 803EB6A4 003E85E4  98 A6 00 BA */	stb r5, 0xba(r6)
/* 803EB6A8 003E85E8  88 04 00 03 */	lbz r0, 3(r4)
/* 803EB6AC 003E85EC  98 06 00 BB */	stb r0, 0xbb(r6)
/* 803EB6B0 003E85F0  4E 80 00 20 */	blr 
.endfn setGlobalPrmColor__Q23efx10TKageDead1FR6Color4

.fn create__Q23efx10TKageDead2FPQ23efx3Arg, global
/* 803EB6B4 003E85F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803EB6B8 003E85F8  7C 08 02 A6 */	mflr r0
/* 803EB6BC 003E85FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803EB6C0 003E8600  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EB6C4 003E8604  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EB6C8 003E8608  7C 9E 23 78 */	mr r30, r4
/* 803EB6CC 003E860C  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EB6D0 003E8610  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803EB6D4 003E8614  7C 7D 1B 78 */	mr r29, r3
/* 803EB6D8 003E8618  7F C3 F3 78 */	mr r3, r30
/* 803EB6DC 003E861C  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EB6E0 003E8620  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EB6E4 003E8624  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EB6E8 003E8628  7D 89 03 A6 */	mtctr r12
/* 803EB6EC 003E862C  4E 80 04 21 */	bctrl 
/* 803EB6F0 003E8630  7C 64 1B 78 */	mr r4, r3
/* 803EB6F4 003E8634  38 7F 00 20 */	addi r3, r31, 0x20
/* 803EB6F8 003E8638  4B CD EF C9 */	bl strcmp
/* 803EB6FC 003E863C  7C 60 00 34 */	cntlzw r0, r3
/* 803EB700 003E8640  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EB704 003E8644  40 82 00 18 */	bne .L_803EB71C
/* 803EB708 003E8648  38 7F 00 00 */	addi r3, r31, 0
/* 803EB70C 003E864C  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EB710 003E8650  38 80 00 67 */	li r4, 0x67
/* 803EB714 003E8654  4C C6 31 82 */	crclr 6
/* 803EB718 003E8658  4B C3 EF 29 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EB71C:
/* 803EB71C 003E865C  7F A3 EB 78 */	mr r3, r29
/* 803EB720 003E8660  7F C4 F3 78 */	mr r4, r30
/* 803EB724 003E8664  4B FC 38 61 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803EB728 003E8668  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EB72C 003E866C  41 82 00 34 */	beq .L_803EB760
/* 803EB730 003E8670  88 DE 00 12 */	lbz r6, 0x12(r30)
/* 803EB734 003E8674  38 60 00 01 */	li r3, 1
/* 803EB738 003E8678  88 BE 00 11 */	lbz r5, 0x11(r30)
/* 803EB73C 003E867C  80 9D 00 08 */	lwz r4, 8(r29)
/* 803EB740 003E8680  88 1E 00 10 */	lbz r0, 0x10(r30)
/* 803EB744 003E8684  98 04 00 B8 */	stb r0, 0xb8(r4)
/* 803EB748 003E8688  98 A4 00 B9 */	stb r5, 0xb9(r4)
/* 803EB74C 003E868C  98 C4 00 BA */	stb r6, 0xba(r4)
/* 803EB750 003E8690  88 1E 00 13 */	lbz r0, 0x13(r30)
/* 803EB754 003E8694  80 9D 00 08 */	lwz r4, 8(r29)
/* 803EB758 003E8698  98 04 00 BB */	stb r0, 0xbb(r4)
/* 803EB75C 003E869C  48 00 00 08 */	b .L_803EB764
.L_803EB760:
/* 803EB760 003E86A0  38 60 00 00 */	li r3, 0
.L_803EB764:
/* 803EB764 003E86A4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803EB768 003E86A8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EB76C 003E86AC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EB770 003E86B0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EB774 003E86B4  7C 08 03 A6 */	mtlr r0
/* 803EB778 003E86B8  38 21 00 20 */	addi r1, r1, 0x20
/* 803EB77C 003E86BC  4E 80 00 20 */	blr 
.endfn create__Q23efx10TKageDead2FPQ23efx3Arg

.fn create__Q23efx13TOootaBombLegFPQ23efx3Arg, global
/* 803EB780 003E86C0  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803EB784 003E86C4  7C 08 02 A6 */	mflr r0
/* 803EB788 003E86C8  90 01 00 74 */	stw r0, 0x74(r1)
/* 803EB78C 003E86CC  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803EB790 003E86D0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803EB794 003E86D4  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803EB798 003E86D8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803EB79C 003E86DC  93 A1 00 54 */	stw r29, 0x54(r1)
/* 803EB7A0 003E86E0  7C 9E 23 78 */	mr r30, r4
/* 803EB7A4 003E86E4  7C 7D 1B 78 */	mr r29, r3
/* 803EB7A8 003E86E8  7F C3 F3 78 */	mr r3, r30
/* 803EB7AC 003E86EC  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EB7B0 003E86F0  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EB7B4 003E86F4  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EB7B8 003E86F8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EB7BC 003E86FC  7D 89 03 A6 */	mtctr r12
/* 803EB7C0 003E8700  4E 80 04 21 */	bctrl 
/* 803EB7C4 003E8704  7C 64 1B 78 */	mr r4, r3
/* 803EB7C8 003E8708  38 7F 00 2C */	addi r3, r31, 0x2c
/* 803EB7CC 003E870C  4B CD EE F5 */	bl strcmp
/* 803EB7D0 003E8710  7C 60 00 34 */	cntlzw r0, r3
/* 803EB7D4 003E8714  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EB7D8 003E8718  40 82 00 18 */	bne .L_803EB7F0
/* 803EB7DC 003E871C  38 7F 00 00 */	addi r3, r31, 0
/* 803EB7E0 003E8720  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EB7E4 003E8724  38 80 00 84 */	li r4, 0x84
/* 803EB7E8 003E8728  4C C6 31 82 */	crclr 6
/* 803EB7EC 003E872C  4B C3 EE 55 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EB7F0:
/* 803EB7F0 003E8730  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 803EB7F4 003E8734  7F A3 EB 78 */	mr r3, r29
/* 803EB7F8 003E8738  7F C4 F3 78 */	mr r4, r30
/* 803EB7FC 003E873C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803EB800 003E8740  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 803EB804 003E8744  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803EB808 003E8748  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803EB80C 003E874C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803EB810 003E8750  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 803EB814 003E8754  D0 01 00 08 */	stfs f0, 8(r1)
/* 803EB818 003E8758  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 803EB81C 003E875C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803EB820 003E8760  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 803EB824 003E8764  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803EB828 003E8768  4B FC 37 5D */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803EB82C 003E876C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EB830 003E8770  41 82 00 9C */	beq .L_803EB8CC
/* 803EB834 003E8774  38 61 00 20 */	addi r3, r1, 0x20
/* 803EB838 003E8778  38 81 00 14 */	addi r4, r1, 0x14
/* 803EB83C 003E877C  38 A1 00 08 */	addi r5, r1, 8
/* 803EB840 003E8780  4B FC 44 41 */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803EB844 003E8784  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803EB848 003E8788  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803EB84C 003E878C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 803EB850 003E8790  EC 81 00 28 */	fsubs f4, f1, f0
/* 803EB854 003E8794  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803EB858 003E8798  C0 21 00 08 */	lfs f1, 8(r1)
/* 803EB85C 003E879C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803EB860 003E87A0  EC 43 10 28 */	fsubs f2, f3, f2
/* 803EB864 003E87A4  EC 64 01 32 */	fmuls f3, f4, f4
/* 803EB868 003E87A8  EC 21 00 28 */	fsubs f1, f1, f0
/* 803EB86C 003E87AC  C0 02 1A E0 */	lfs f0, lbl_8051FE40@sda21(r2)
/* 803EB870 003E87B0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803EB874 003E87B4  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 803EB878 003E87B8  EC 22 08 2A */	fadds f1, f2, f1
/* 803EB87C 003E87BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EB880 003E87C0  40 81 00 14 */	ble .L_803EB894
/* 803EB884 003E87C4  40 81 00 14 */	ble .L_803EB898
/* 803EB888 003E87C8  FC 00 08 34 */	frsqrte f0, f1
/* 803EB88C 003E87CC  EC 20 00 72 */	fmuls f1, f0, f1
/* 803EB890 003E87D0  48 00 00 08 */	b .L_803EB898
.L_803EB894:
/* 803EB894 003E87D4  FC 20 00 90 */	fmr f1, f0
.L_803EB898:
/* 803EB898 003E87D8  C0 02 1A F0 */	lfs f0, lbl_8051FE50@sda21(r2)
/* 803EB89C 003E87DC  38 61 00 20 */	addi r3, r1, 0x20
/* 803EB8A0 003E87E0  80 BD 00 08 */	lwz r5, 8(r29)
/* 803EB8A4 003E87E4  EF E1 00 24 */	fdivs f31, f1, f0
/* 803EB8A8 003E87E8  38 85 00 68 */	addi r4, r5, 0x68
/* 803EB8AC 003E87EC  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803EB8B0 003E87F0  4B CA 84 6D */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803EB8B4 003E87F4  80 9D 00 08 */	lwz r4, 8(r29)
/* 803EB8B8 003E87F8  38 60 00 01 */	li r3, 1
/* 803EB8BC 003E87FC  C0 24 00 04 */	lfs f1, 4(r4)
/* 803EB8C0 003E8800  EC 21 07 F2 */	fmuls f1, f1, f31
/* 803EB8C4 003E8804  D0 24 00 04 */	stfs f1, 4(r4)
/* 803EB8C8 003E8808  48 00 00 08 */	b .L_803EB8D0
.L_803EB8CC:
/* 803EB8CC 003E880C  38 60 00 00 */	li r3, 0
.L_803EB8D0:
/* 803EB8D0 003E8810  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803EB8D4 003E8814  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803EB8D8 003E8818  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803EB8DC 003E881C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803EB8E0 003E8820  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803EB8E4 003E8824  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 803EB8E8 003E8828  7C 08 03 A6 */	mtlr r0
/* 803EB8EC 003E882C  38 21 00 70 */	addi r1, r1, 0x70
/* 803EB8F0 003E8830  4E 80 00 20 */	blr 
.endfn create__Q23efx13TOootaBombLegFPQ23efx3Arg

.fn create__Q23efx10TOootaFireFPQ23efx3Arg, global
/* 803EB8F4 003E8834  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803EB8F8 003E8838  7C 08 02 A6 */	mflr r0
/* 803EB8FC 003E883C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803EB900 003E8840  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EB904 003E8844  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EB908 003E8848  7C 9E 23 79 */	or. r30, r4, r4
/* 803EB90C 003E884C  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EB910 003E8850  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803EB914 003E8854  7C 7D 1B 78 */	mr r29, r3
/* 803EB918 003E8858  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EB91C 003E885C  40 82 00 18 */	bne .L_803EB934
/* 803EB920 003E8860  38 7F 00 00 */	addi r3, r31, 0
/* 803EB924 003E8864  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EB928 003E8868  38 80 00 A1 */	li r4, 0xa1
/* 803EB92C 003E886C  4C C6 31 82 */	crclr 6
/* 803EB930 003E8870  4B C3 ED 11 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EB934:
/* 803EB934 003E8874  7F C3 F3 78 */	mr r3, r30
/* 803EB938 003E8878  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EB93C 003E887C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EB940 003E8880  7D 89 03 A6 */	mtctr r12
/* 803EB944 003E8884  4E 80 04 21 */	bctrl 
/* 803EB948 003E8888  7C 64 1B 78 */	mr r4, r3
/* 803EB94C 003E888C  38 7F 00 38 */	addi r3, r31, 0x38
/* 803EB950 003E8890  4B CD ED 71 */	bl strcmp
/* 803EB954 003E8894  7C 60 00 34 */	cntlzw r0, r3
/* 803EB958 003E8898  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EB95C 003E889C  40 82 00 18 */	bne .L_803EB974
/* 803EB960 003E88A0  38 7F 00 00 */	addi r3, r31, 0
/* 803EB964 003E88A4  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EB968 003E88A8  38 80 00 A2 */	li r4, 0xa2
/* 803EB96C 003E88AC  4C C6 31 82 */	crclr 6
/* 803EB970 003E88B0  4B C3 EC D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EB974:
/* 803EB974 003E88B4  7F A3 EB 78 */	mr r3, r29
/* 803EB978 003E88B8  7F C4 F3 78 */	mr r4, r30
/* 803EB97C 003E88BC  4B FC 55 95 */	bl "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"
/* 803EB980 003E88C0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EB984 003E88C4  41 82 00 A0 */	beq .L_803EBA24
/* 803EB988 003E88C8  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 803EB98C 003E88CC  38 60 00 01 */	li r3, 1
/* 803EB990 003E88D0  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803EB994 003E88D4  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803EB998 003E88D8  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803EB99C 003E88DC  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803EB9A0 003E88E0  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803EB9A4 003E88E4  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803EB9A8 003E88E8  80 9D 00 20 */	lwz r4, 0x20(r29)
/* 803EB9AC 003E88EC  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803EB9B0 003E88F0  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803EB9B4 003E88F4  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803EB9B8 003E88F8  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803EB9BC 003E88FC  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803EB9C0 003E8900  80 9D 00 34 */	lwz r4, 0x34(r29)
/* 803EB9C4 003E8904  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803EB9C8 003E8908  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803EB9CC 003E890C  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803EB9D0 003E8910  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803EB9D4 003E8914  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803EB9D8 003E8918  80 9D 00 48 */	lwz r4, 0x48(r29)
/* 803EB9DC 003E891C  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803EB9E0 003E8920  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803EB9E4 003E8924  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803EB9E8 003E8928  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803EB9EC 003E892C  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803EB9F0 003E8930  80 9D 00 5C */	lwz r4, 0x5c(r29)
/* 803EB9F4 003E8934  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803EB9F8 003E8938  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803EB9FC 003E893C  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803EBA00 003E8940  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803EBA04 003E8944  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803EBA08 003E8948  80 9D 00 70 */	lwz r4, 0x70(r29)
/* 803EBA0C 003E894C  D0 04 00 98 */	stfs f0, 0x98(r4)
/* 803EBA10 003E8950  D0 04 00 9C */	stfs f0, 0x9c(r4)
/* 803EBA14 003E8954  D0 04 00 A0 */	stfs f0, 0xa0(r4)
/* 803EBA18 003E8958  D0 04 00 B0 */	stfs f0, 0xb0(r4)
/* 803EBA1C 003E895C  D0 04 00 B4 */	stfs f0, 0xb4(r4)
/* 803EBA20 003E8960  48 00 00 08 */	b .L_803EBA28
.L_803EBA24:
/* 803EBA24 003E8964  38 60 00 00 */	li r3, 0
.L_803EBA28:
/* 803EBA28 003E8968  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803EBA2C 003E896C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EBA30 003E8970  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EBA34 003E8974  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EBA38 003E8978  7C 08 03 A6 */	mtlr r0
/* 803EBA3C 003E897C  38 21 00 20 */	addi r1, r1, 0x20
/* 803EBA40 003E8980  4E 80 00 20 */	blr 
.endfn create__Q23efx10TOootaFireFPQ23efx3Arg

.fn create__Q23efx13TKchFlickSandFPQ23efx3Arg, global
/* 803EBA44 003E8984  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803EBA48 003E8988  7C 08 02 A6 */	mflr r0
/* 803EBA4C 003E898C  90 01 00 94 */	stw r0, 0x94(r1)
/* 803EBA50 003E8990  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803EBA54 003E8994  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803EBA58 003E8998  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803EBA5C 003E899C  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803EBA60 003E89A0  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 803EBA64 003E89A4  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 803EBA68 003E89A8  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 803EBA6C 003E89AC  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 803EBA70 003E89B0  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803EBA74 003E89B4  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803EBA78 003E89B8  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803EBA7C 003E89BC  7C 9E 23 78 */	mr r30, r4
/* 803EBA80 003E89C0  7C 7D 1B 78 */	mr r29, r3
/* 803EBA84 003E89C4  7F C3 F3 78 */	mr r3, r30
/* 803EBA88 003E89C8  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EBA8C 003E89CC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EBA90 003E89D0  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EBA94 003E89D4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EBA98 003E89D8  7D 89 03 A6 */	mtctr r12
/* 803EBA9C 003E89DC  4E 80 04 21 */	bctrl 
/* 803EBAA0 003E89E0  7C 64 1B 78 */	mr r4, r3
/* 803EBAA4 003E89E4  38 7F 00 44 */	addi r3, r31, 0x44
/* 803EBAA8 003E89E8  4B CD EC 19 */	bl strcmp
/* 803EBAAC 003E89EC  7C 60 00 34 */	cntlzw r0, r3
/* 803EBAB0 003E89F0  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EBAB4 003E89F4  40 82 00 18 */	bne .L_803EBACC
/* 803EBAB8 003E89F8  38 7F 00 00 */	addi r3, r31, 0
/* 803EBABC 003E89FC  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EBAC0 003E8A00  38 80 00 B5 */	li r4, 0xb5
/* 803EBAC4 003E8A04  4C C6 31 82 */	crclr 6
/* 803EBAC8 003E8A08  4B C3 EB 79 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EBACC:
/* 803EBACC 003E8A0C  C3 9E 00 14 */	lfs f28, 0x14(r30)
/* 803EBAD0 003E8A10  38 61 00 08 */	addi r3, r1, 8
/* 803EBAD4 003E8A14  C3 FE 00 04 */	lfs f31, 4(r30)
/* 803EBAD8 003E8A18  38 80 00 79 */	li r4, 0x79
/* 803EBADC 003E8A1C  C3 DE 00 08 */	lfs f30, 8(r30)
/* 803EBAE0 003E8A20  C3 BE 00 0C */	lfs f29, 0xc(r30)
/* 803EBAE4 003E8A24  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 803EBAE8 003E8A28  4B CF EA 2D */	bl PSMTXRotRad
/* 803EBAEC 003E8A2C  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 803EBAF0 003E8A30  7F A3 EB 78 */	mr r3, r29
/* 803EBAF4 003E8A34  7F C4 F3 78 */	mr r4, r30
/* 803EBAF8 003E8A38  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 803EBAFC 003E8A3C  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 803EBB00 003E8A40  4B FC 35 15 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803EBB04 003E8A44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EBB08 003E8A48  41 82 00 50 */	beq .L_803EBB58
/* 803EBB0C 003E8A4C  3B C0 00 00 */	li r30, 0
/* 803EBB10 003E8A50  7F BF EB 78 */	mr r31, r29
.L_803EBB14:
/* 803EBB14 003E8A54  80 BF 00 08 */	lwz r5, 8(r31)
/* 803EBB18 003E8A58  38 61 00 08 */	addi r3, r1, 8
/* 803EBB1C 003E8A5C  38 85 00 68 */	addi r4, r5, 0x68
/* 803EBB20 003E8A60  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803EBB24 003E8A64  4B CA 81 F9 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803EBB28 003E8A68  80 7F 00 08 */	lwz r3, 8(r31)
/* 803EBB2C 003E8A6C  3B DE 00 01 */	addi r30, r30, 1
/* 803EBB30 003E8A70  2C 1E 00 02 */	cmpwi r30, 2
/* 803EBB34 003E8A74  3B FF 00 04 */	addi r31, r31, 4
/* 803EBB38 003E8A78  D3 83 00 98 */	stfs f28, 0x98(r3)
/* 803EBB3C 003E8A7C  D3 83 00 9C */	stfs f28, 0x9c(r3)
/* 803EBB40 003E8A80  D3 83 00 A0 */	stfs f28, 0xa0(r3)
/* 803EBB44 003E8A84  D3 83 00 B0 */	stfs f28, 0xb0(r3)
/* 803EBB48 003E8A88  D3 83 00 B4 */	stfs f28, 0xb4(r3)
/* 803EBB4C 003E8A8C  41 80 FF C8 */	blt .L_803EBB14
/* 803EBB50 003E8A90  38 60 00 01 */	li r3, 1
/* 803EBB54 003E8A94  48 00 00 08 */	b .L_803EBB5C
.L_803EBB58:
/* 803EBB58 003E8A98  38 60 00 00 */	li r3, 0
.L_803EBB5C:
/* 803EBB5C 003E8A9C  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803EBB60 003E8AA0  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803EBB64 003E8AA4  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803EBB68 003E8AA8  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803EBB6C 003E8AAC  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803EBB70 003E8AB0  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803EBB74 003E8AB4  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 803EBB78 003E8AB8  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 803EBB7C 003E8ABC  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803EBB80 003E8AC0  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803EBB84 003E8AC4  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803EBB88 003E8AC8  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803EBB8C 003E8ACC  7C 08 03 A6 */	mtlr r0
/* 803EBB90 003E8AD0  38 21 00 90 */	addi r1, r1, 0x90
/* 803EBB94 003E8AD4  4E 80 00 20 */	blr 
.endfn create__Q23efx13TKchFlickSandFPQ23efx3Arg

.fn create__Q23efx10TKchApSandFPQ23efx3Arg, global
/* 803EBB98 003E8AD8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803EBB9C 003E8ADC  7C 08 02 A6 */	mflr r0
/* 803EBBA0 003E8AE0  90 01 00 94 */	stw r0, 0x94(r1)
/* 803EBBA4 003E8AE4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803EBBA8 003E8AE8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803EBBAC 003E8AEC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803EBBB0 003E8AF0  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803EBBB4 003E8AF4  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 803EBBB8 003E8AF8  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 803EBBBC 003E8AFC  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 803EBBC0 003E8B00  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 803EBBC4 003E8B04  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803EBBC8 003E8B08  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803EBBCC 003E8B0C  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803EBBD0 003E8B10  7C 9E 23 78 */	mr r30, r4
/* 803EBBD4 003E8B14  7C 7D 1B 78 */	mr r29, r3
/* 803EBBD8 003E8B18  7F C3 F3 78 */	mr r3, r30
/* 803EBBDC 003E8B1C  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EBBE0 003E8B20  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EBBE4 003E8B24  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EBBE8 003E8B28  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EBBEC 003E8B2C  7D 89 03 A6 */	mtctr r12
/* 803EBBF0 003E8B30  4E 80 04 21 */	bctrl 
/* 803EBBF4 003E8B34  7C 64 1B 78 */	mr r4, r3
/* 803EBBF8 003E8B38  38 7F 00 44 */	addi r3, r31, 0x44
/* 803EBBFC 003E8B3C  4B CD EA C5 */	bl strcmp
/* 803EBC00 003E8B40  7C 60 00 34 */	cntlzw r0, r3
/* 803EBC04 003E8B44  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EBC08 003E8B48  40 82 00 18 */	bne .L_803EBC20
/* 803EBC0C 003E8B4C  38 7F 00 00 */	addi r3, r31, 0
/* 803EBC10 003E8B50  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EBC14 003E8B54  38 80 00 CC */	li r4, 0xcc
/* 803EBC18 003E8B58  4C C6 31 82 */	crclr 6
/* 803EBC1C 003E8B5C  4B C3 EA 25 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EBC20:
/* 803EBC20 003E8B60  C3 9E 00 14 */	lfs f28, 0x14(r30)
/* 803EBC24 003E8B64  38 61 00 08 */	addi r3, r1, 8
/* 803EBC28 003E8B68  C3 FE 00 04 */	lfs f31, 4(r30)
/* 803EBC2C 003E8B6C  38 80 00 79 */	li r4, 0x79
/* 803EBC30 003E8B70  C3 DE 00 08 */	lfs f30, 8(r30)
/* 803EBC34 003E8B74  C3 BE 00 0C */	lfs f29, 0xc(r30)
/* 803EBC38 003E8B78  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 803EBC3C 003E8B7C  4B CF E8 D9 */	bl PSMTXRotRad
/* 803EBC40 003E8B80  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 803EBC44 003E8B84  7F A3 EB 78 */	mr r3, r29
/* 803EBC48 003E8B88  7F C4 F3 78 */	mr r4, r30
/* 803EBC4C 003E8B8C  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 803EBC50 003E8B90  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 803EBC54 003E8B94  4B FC 34 69 */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 803EBC58 003E8B98  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EBC5C 003E8B9C  41 82 00 50 */	beq .L_803EBCAC
/* 803EBC60 003E8BA0  3B C0 00 00 */	li r30, 0
/* 803EBC64 003E8BA4  7F BF EB 78 */	mr r31, r29
.L_803EBC68:
/* 803EBC68 003E8BA8  80 BF 00 0C */	lwz r5, 0xc(r31)
/* 803EBC6C 003E8BAC  38 61 00 08 */	addi r3, r1, 8
/* 803EBC70 003E8BB0  38 85 00 68 */	addi r4, r5, 0x68
/* 803EBC74 003E8BB4  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803EBC78 003E8BB8  4B CA 80 A5 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803EBC7C 003E8BBC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 803EBC80 003E8BC0  3B DE 00 01 */	addi r30, r30, 1
/* 803EBC84 003E8BC4  2C 1E 00 03 */	cmpwi r30, 3
/* 803EBC88 003E8BC8  3B FF 00 04 */	addi r31, r31, 4
/* 803EBC8C 003E8BCC  D3 83 00 98 */	stfs f28, 0x98(r3)
/* 803EBC90 003E8BD0  D3 83 00 9C */	stfs f28, 0x9c(r3)
/* 803EBC94 003E8BD4  D3 83 00 A0 */	stfs f28, 0xa0(r3)
/* 803EBC98 003E8BD8  D3 83 00 B0 */	stfs f28, 0xb0(r3)
/* 803EBC9C 003E8BDC  D3 83 00 B4 */	stfs f28, 0xb4(r3)
/* 803EBCA0 003E8BE0  41 80 FF C8 */	blt .L_803EBC68
/* 803EBCA4 003E8BE4  38 60 00 01 */	li r3, 1
/* 803EBCA8 003E8BE8  48 00 00 08 */	b .L_803EBCB0
.L_803EBCAC:
/* 803EBCAC 003E8BEC  38 60 00 00 */	li r3, 0
.L_803EBCB0:
/* 803EBCB0 003E8BF0  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803EBCB4 003E8BF4  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803EBCB8 003E8BF8  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803EBCBC 003E8BFC  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803EBCC0 003E8C00  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803EBCC4 003E8C04  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803EBCC8 003E8C08  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 803EBCCC 003E8C0C  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 803EBCD0 003E8C10  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803EBCD4 003E8C14  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803EBCD8 003E8C18  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803EBCDC 003E8C1C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803EBCE0 003E8C20  7C 08 03 A6 */	mtlr r0
/* 803EBCE4 003E8C24  38 21 00 90 */	addi r1, r1, 0x90
/* 803EBCE8 003E8C28  4E 80 00 20 */	blr 
.endfn create__Q23efx10TKchApSandFPQ23efx3Arg

.fn create__Q23efx9TKchApWatFPQ23efx3Arg, global
/* 803EBCEC 003E8C2C  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803EBCF0 003E8C30  7C 08 02 A6 */	mflr r0
/* 803EBCF4 003E8C34  90 01 00 94 */	stw r0, 0x94(r1)
/* 803EBCF8 003E8C38  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803EBCFC 003E8C3C  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803EBD00 003E8C40  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803EBD04 003E8C44  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803EBD08 003E8C48  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 803EBD0C 003E8C4C  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 803EBD10 003E8C50  DB 81 00 50 */	stfd f28, 0x50(r1)
/* 803EBD14 003E8C54  F3 81 00 58 */	psq_st f28, 88(r1), 0, qr0
/* 803EBD18 003E8C58  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 803EBD1C 003E8C5C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 803EBD20 003E8C60  93 A1 00 44 */	stw r29, 0x44(r1)
/* 803EBD24 003E8C64  7C 9E 23 78 */	mr r30, r4
/* 803EBD28 003E8C68  7C 7D 1B 78 */	mr r29, r3
/* 803EBD2C 003E8C6C  7F C3 F3 78 */	mr r3, r30
/* 803EBD30 003E8C70  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EBD34 003E8C74  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EBD38 003E8C78  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EBD3C 003E8C7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EBD40 003E8C80  7D 89 03 A6 */	mtctr r12
/* 803EBD44 003E8C84  4E 80 04 21 */	bctrl 
/* 803EBD48 003E8C88  7C 64 1B 78 */	mr r4, r3
/* 803EBD4C 003E8C8C  38 7F 00 44 */	addi r3, r31, 0x44
/* 803EBD50 003E8C90  4B CD E9 71 */	bl strcmp
/* 803EBD54 003E8C94  7C 60 00 34 */	cntlzw r0, r3
/* 803EBD58 003E8C98  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EBD5C 003E8C9C  40 82 00 18 */	bne .L_803EBD74
/* 803EBD60 003E8CA0  38 7F 00 00 */	addi r3, r31, 0
/* 803EBD64 003E8CA4  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EBD68 003E8CA8  38 80 00 E3 */	li r4, 0xe3
/* 803EBD6C 003E8CAC  4C C6 31 82 */	crclr 6
/* 803EBD70 003E8CB0  4B C3 E8 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EBD74:
/* 803EBD74 003E8CB4  C3 9E 00 14 */	lfs f28, 0x14(r30)
/* 803EBD78 003E8CB8  38 61 00 08 */	addi r3, r1, 8
/* 803EBD7C 003E8CBC  C3 FE 00 04 */	lfs f31, 4(r30)
/* 803EBD80 003E8CC0  38 80 00 79 */	li r4, 0x79
/* 803EBD84 003E8CC4  C3 DE 00 08 */	lfs f30, 8(r30)
/* 803EBD88 003E8CC8  C3 BE 00 0C */	lfs f29, 0xc(r30)
/* 803EBD8C 003E8CCC  C0 3E 00 10 */	lfs f1, 0x10(r30)
/* 803EBD90 003E8CD0  4B CF E7 85 */	bl PSMTXRotRad
/* 803EBD94 003E8CD4  D3 E1 00 14 */	stfs f31, 0x14(r1)
/* 803EBD98 003E8CD8  7F A3 EB 78 */	mr r3, r29
/* 803EBD9C 003E8CDC  7F C4 F3 78 */	mr r4, r30
/* 803EBDA0 003E8CE0  D3 C1 00 24 */	stfs f30, 0x24(r1)
/* 803EBDA4 003E8CE4  D3 A1 00 34 */	stfs f29, 0x34(r1)
/* 803EBDA8 003E8CE8  4B FC 34 65 */	bl create__Q23efx8TSimple5FPQ23efx3Arg
/* 803EBDAC 003E8CEC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EBDB0 003E8CF0  41 82 00 50 */	beq .L_803EBE00
/* 803EBDB4 003E8CF4  3B C0 00 00 */	li r30, 0
/* 803EBDB8 003E8CF8  7F BF EB 78 */	mr r31, r29
.L_803EBDBC:
/* 803EBDBC 003E8CFC  80 BF 00 10 */	lwz r5, 0x10(r31)
/* 803EBDC0 003E8D00  38 61 00 08 */	addi r3, r1, 8
/* 803EBDC4 003E8D04  38 85 00 68 */	addi r4, r5, 0x68
/* 803EBDC8 003E8D08  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803EBDCC 003E8D0C  4B CA 7F 51 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803EBDD0 003E8D10  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 803EBDD4 003E8D14  3B DE 00 01 */	addi r30, r30, 1
/* 803EBDD8 003E8D18  2C 1E 00 05 */	cmpwi r30, 5
/* 803EBDDC 003E8D1C  3B FF 00 04 */	addi r31, r31, 4
/* 803EBDE0 003E8D20  D3 83 00 98 */	stfs f28, 0x98(r3)
/* 803EBDE4 003E8D24  D3 83 00 9C */	stfs f28, 0x9c(r3)
/* 803EBDE8 003E8D28  D3 83 00 A0 */	stfs f28, 0xa0(r3)
/* 803EBDEC 003E8D2C  D3 83 00 B0 */	stfs f28, 0xb0(r3)
/* 803EBDF0 003E8D30  D3 83 00 B4 */	stfs f28, 0xb4(r3)
/* 803EBDF4 003E8D34  41 80 FF C8 */	blt .L_803EBDBC
/* 803EBDF8 003E8D38  38 60 00 01 */	li r3, 1
/* 803EBDFC 003E8D3C  48 00 00 08 */	b .L_803EBE04
.L_803EBE00:
/* 803EBE00 003E8D40  38 60 00 00 */	li r3, 0
.L_803EBE04:
/* 803EBE04 003E8D44  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803EBE08 003E8D48  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803EBE0C 003E8D4C  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803EBE10 003E8D50  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803EBE14 003E8D54  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803EBE18 003E8D58  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803EBE1C 003E8D5C  E3 81 00 58 */	psq_l f28, 88(r1), 0, qr0
/* 803EBE20 003E8D60  CB 81 00 50 */	lfd f28, 0x50(r1)
/* 803EBE24 003E8D64  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 803EBE28 003E8D68  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 803EBE2C 003E8D6C  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803EBE30 003E8D70  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 803EBE34 003E8D74  7C 08 03 A6 */	mtlr r0
/* 803EBE38 003E8D78  38 21 00 90 */	addi r1, r1, 0x90
/* 803EBE3C 003E8D7C  4E 80 00 20 */	blr 
.endfn create__Q23efx9TKchApWatFPQ23efx3Arg

.fn setGlobalScale__Q23efx12TKchDiveSandFf, global
/* 803EBE40 003E8D80  80 83 00 0C */	lwz r4, 0xc(r3)
/* 803EBE44 003E8D84  28 04 00 00 */	cmplwi r4, 0
/* 803EBE48 003E8D88  41 82 00 0C */	beq .L_803EBE54
/* 803EBE4C 003E8D8C  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBE50 003E8D90  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803EBE54:
/* 803EBE54 003E8D94  80 83 00 24 */	lwz r4, 0x24(r3)
/* 803EBE58 003E8D98  28 04 00 00 */	cmplwi r4, 0
/* 803EBE5C 003E8D9C  41 82 00 0C */	beq .L_803EBE68
/* 803EBE60 003E8DA0  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBE64 003E8DA4  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803EBE68:
/* 803EBE68 003E8DA8  80 83 00 3C */	lwz r4, 0x3c(r3)
/* 803EBE6C 003E8DAC  28 04 00 00 */	cmplwi r4, 0
/* 803EBE70 003E8DB0  4D 82 00 20 */	beqlr 
/* 803EBE74 003E8DB4  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBE78 003E8DB8  D0 24 00 B4 */	stfs f1, 0xb4(r4)
/* 803EBE7C 003E8DBC  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx12TKchDiveSandFf

.fn setGlobalScale__Q23efx11TKchDiveWatFf, global
/* 803EBE80 003E8DC0  80 83 00 0C */	lwz r4, 0xc(r3)
/* 803EBE84 003E8DC4  28 04 00 00 */	cmplwi r4, 0
/* 803EBE88 003E8DC8  41 82 00 0C */	beq .L_803EBE94
/* 803EBE8C 003E8DCC  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBE90 003E8DD0  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803EBE94:
/* 803EBE94 003E8DD4  80 83 00 24 */	lwz r4, 0x24(r3)
/* 803EBE98 003E8DD8  28 04 00 00 */	cmplwi r4, 0
/* 803EBE9C 003E8DDC  41 82 00 0C */	beq .L_803EBEA8
/* 803EBEA0 003E8DE0  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBEA4 003E8DE4  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803EBEA8:
/* 803EBEA8 003E8DE8  80 83 00 3C */	lwz r4, 0x3c(r3)
/* 803EBEAC 003E8DEC  28 04 00 00 */	cmplwi r4, 0
/* 803EBEB0 003E8DF0  4D 82 00 20 */	beqlr 
/* 803EBEB4 003E8DF4  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBEB8 003E8DF8  D0 24 00 B4 */	stfs f1, 0xb4(r4)
/* 803EBEBC 003E8DFC  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx11TKchDiveWatFf

.fn setGlobalScale__Q23efx9TKchCryABFf, global
/* 803EBEC0 003E8E00  80 83 00 0C */	lwz r4, 0xc(r3)
/* 803EBEC4 003E8E04  28 04 00 00 */	cmplwi r4, 0
/* 803EBEC8 003E8E08  41 82 00 0C */	beq .L_803EBED4
/* 803EBECC 003E8E0C  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBED0 003E8E10  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803EBED4:
/* 803EBED4 003E8E14  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803EBED8 003E8E18  28 04 00 00 */	cmplwi r4, 0
/* 803EBEDC 003E8E1C  4D 82 00 20 */	beqlr 
/* 803EBEE0 003E8E20  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EBEE4 003E8E24  D0 24 00 B4 */	stfs f1, 0xb4(r4)
/* 803EBEE8 003E8E28  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx9TKchCryABFf

.fn setGlobalScale__Q23efx10TKchCryIndFf, global
/* 803EBEEC 003E8E2C  80 63 00 08 */	lwz r3, 8(r3)
/* 803EBEF0 003E8E30  28 03 00 00 */	cmplwi r3, 0
/* 803EBEF4 003E8E34  4D 82 00 20 */	beqlr 
/* 803EBEF8 003E8E38  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803EBEFC 003E8E3C  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803EBF00 003E8E40  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx10TKchCryIndFf

.fn create__Q23efx10TKchDamageFPQ23efx3Arg, global
/* 803EBF04 003E8E44  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803EBF08 003E8E48  7C 08 02 A6 */	mflr r0
/* 803EBF0C 003E8E4C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803EBF10 003E8E50  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803EBF14 003E8E54  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803EBF18 003E8E58  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EBF1C 003E8E5C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EBF20 003E8E60  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803EBF24 003E8E64  7C 9E 23 78 */	mr r30, r4
/* 803EBF28 003E8E68  7C 7D 1B 78 */	mr r29, r3
/* 803EBF2C 003E8E6C  7F C3 F3 78 */	mr r3, r30
/* 803EBF30 003E8E70  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EBF34 003E8E74  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EBF38 003E8E78  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EBF3C 003E8E7C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EBF40 003E8E80  7D 89 03 A6 */	mtctr r12
/* 803EBF44 003E8E84  4E 80 04 21 */	bctrl 
/* 803EBF48 003E8E88  7C 64 1B 78 */	mr r4, r3
/* 803EBF4C 003E8E8C  38 7F 00 38 */	addi r3, r31, 0x38
/* 803EBF50 003E8E90  4B CD E7 71 */	bl strcmp
/* 803EBF54 003E8E94  7C 60 00 34 */	cntlzw r0, r3
/* 803EBF58 003E8E98  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EBF5C 003E8E9C  40 82 00 18 */	bne .L_803EBF74
/* 803EBF60 003E8EA0  38 7F 00 00 */	addi r3, r31, 0
/* 803EBF64 003E8EA4  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EBF68 003E8EA8  38 80 01 28 */	li r4, 0x128
/* 803EBF6C 003E8EAC  4C C6 31 82 */	crclr 6
/* 803EBF70 003E8EB0  4B C3 E6 D1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EBF74:
/* 803EBF74 003E8EB4  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803EBF78 003E8EB8  7F A3 EB 78 */	mr r3, r29
/* 803EBF7C 003E8EBC  7F C4 F3 78 */	mr r4, r30
/* 803EBF80 003E8EC0  4B FC 36 51 */	bl create__Q23efx11TSimpleMtx4FPQ23efx3Arg
/* 803EBF84 003E8EC4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EBF88 003E8EC8  41 82 00 6C */	beq .L_803EBFF4
/* 803EBF8C 003E8ECC  80 9D 00 0C */	lwz r4, 0xc(r29)
/* 803EBF90 003E8ED0  38 60 00 01 */	li r3, 1
/* 803EBF94 003E8ED4  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803EBF98 003E8ED8  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803EBF9C 003E8EDC  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803EBFA0 003E8EE0  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803EBFA4 003E8EE4  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803EBFA8 003E8EE8  80 9D 00 10 */	lwz r4, 0x10(r29)
/* 803EBFAC 003E8EEC  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803EBFB0 003E8EF0  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803EBFB4 003E8EF4  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803EBFB8 003E8EF8  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803EBFBC 003E8EFC  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803EBFC0 003E8F00  80 9D 00 14 */	lwz r4, 0x14(r29)
/* 803EBFC4 003E8F04  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803EBFC8 003E8F08  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803EBFCC 003E8F0C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803EBFD0 003E8F10  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803EBFD4 003E8F14  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803EBFD8 003E8F18  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 803EBFDC 003E8F1C  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803EBFE0 003E8F20  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803EBFE4 003E8F24  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803EBFE8 003E8F28  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803EBFEC 003E8F2C  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803EBFF0 003E8F30  48 00 00 08 */	b .L_803EBFF8
.L_803EBFF4:
/* 803EBFF4 003E8F34  38 60 00 00 */	li r3, 0
.L_803EBFF8:
/* 803EBFF8 003E8F38  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803EBFFC 003E8F3C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803EC000 003E8F40  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803EC004 003E8F44  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EC008 003E8F48  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EC00C 003E8F4C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EC010 003E8F50  7C 08 03 A6 */	mtlr r0
/* 803EC014 003E8F54  38 21 00 30 */	addi r1, r1, 0x30
/* 803EC018 003E8F58  4E 80 00 20 */	blr 
.endfn create__Q23efx10TKchDamageFPQ23efx3Arg

.fn setGlobalScale__Q23efx13TKchSmokeHanaFf, global
/* 803EC01C 003E8F5C  80 63 00 08 */	lwz r3, 8(r3)
/* 803EC020 003E8F60  28 03 00 00 */	cmplwi r3, 0
/* 803EC024 003E8F64  4D 82 00 20 */	beqlr 
/* 803EC028 003E8F68  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803EC02C 003E8F6C  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803EC030 003E8F70  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx13TKchSmokeHanaFf

.fn create__Q23efx13TKchDownsmokeFPQ23efx3Arg, global
/* 803EC034 003E8F74  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803EC038 003E8F78  7C 08 02 A6 */	mflr r0
/* 803EC03C 003E8F7C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803EC040 003E8F80  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803EC044 003E8F84  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803EC048 003E8F88  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EC04C 003E8F8C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EC050 003E8F90  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803EC054 003E8F94  7C 9E 23 78 */	mr r30, r4
/* 803EC058 003E8F98  7C 7D 1B 78 */	mr r29, r3
/* 803EC05C 003E8F9C  7F C3 F3 78 */	mr r3, r30
/* 803EC060 003E8FA0  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EC064 003E8FA4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EC068 003E8FA8  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EC06C 003E8FAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC070 003E8FB0  7D 89 03 A6 */	mtctr r12
/* 803EC074 003E8FB4  4E 80 04 21 */	bctrl 
/* 803EC078 003E8FB8  7C 64 1B 78 */	mr r4, r3
/* 803EC07C 003E8FBC  38 7F 00 38 */	addi r3, r31, 0x38
/* 803EC080 003E8FC0  4B CD E6 41 */	bl strcmp
/* 803EC084 003E8FC4  7C 60 00 34 */	cntlzw r0, r3
/* 803EC088 003E8FC8  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EC08C 003E8FCC  40 82 00 18 */	bne .L_803EC0A4
/* 803EC090 003E8FD0  38 7F 00 00 */	addi r3, r31, 0
/* 803EC094 003E8FD4  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EC098 003E8FD8  38 80 01 43 */	li r4, 0x143
/* 803EC09C 003E8FDC  4C C6 31 82 */	crclr 6
/* 803EC0A0 003E8FE0  4B C3 E5 A1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EC0A4:
/* 803EC0A4 003E8FE4  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803EC0A8 003E8FE8  7F A3 EB 78 */	mr r3, r29
/* 803EC0AC 003E8FEC  7F C4 F3 78 */	mr r4, r30
/* 803EC0B0 003E8FF0  4B FC 2E D5 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803EC0B4 003E8FF4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EC0B8 003E8FF8  41 82 00 24 */	beq .L_803EC0DC
/* 803EC0BC 003E8FFC  80 9D 00 08 */	lwz r4, 8(r29)
/* 803EC0C0 003E9000  38 60 00 01 */	li r3, 1
/* 803EC0C4 003E9004  D3 E4 00 98 */	stfs f31, 0x98(r4)
/* 803EC0C8 003E9008  D3 E4 00 9C */	stfs f31, 0x9c(r4)
/* 803EC0CC 003E900C  D3 E4 00 A0 */	stfs f31, 0xa0(r4)
/* 803EC0D0 003E9010  D3 E4 00 B0 */	stfs f31, 0xb0(r4)
/* 803EC0D4 003E9014  D3 E4 00 B4 */	stfs f31, 0xb4(r4)
/* 803EC0D8 003E9018  48 00 00 08 */	b .L_803EC0E0
.L_803EC0DC:
/* 803EC0DC 003E901C  38 60 00 00 */	li r3, 0
.L_803EC0E0:
/* 803EC0E0 003E9020  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803EC0E4 003E9024  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803EC0E8 003E9028  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803EC0EC 003E902C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EC0F0 003E9030  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EC0F4 003E9034  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EC0F8 003E9038  7C 08 03 A6 */	mtlr r0
/* 803EC0FC 003E903C  38 21 00 30 */	addi r1, r1, 0x30
/* 803EC100 003E9040  4E 80 00 20 */	blr 
.endfn create__Q23efx13TKchDownsmokeFPQ23efx3Arg

.fn setGlobalScale__Q23efx12TKchDeadHanaFf, global
/* 803EC104 003E9044  80 83 00 0C */	lwz r4, 0xc(r3)
/* 803EC108 003E9048  28 04 00 00 */	cmplwi r4, 0
/* 803EC10C 003E904C  41 82 00 0C */	beq .L_803EC118
/* 803EC110 003E9050  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EC114 003E9054  D0 24 00 B4 */	stfs f1, 0xb4(r4)
.L_803EC118:
/* 803EC118 003E9058  80 83 00 20 */	lwz r4, 0x20(r3)
/* 803EC11C 003E905C  28 04 00 00 */	cmplwi r4, 0
/* 803EC120 003E9060  4D 82 00 20 */	beqlr 
/* 803EC124 003E9064  D0 24 00 B0 */	stfs f1, 0xb0(r4)
/* 803EC128 003E9068  D0 24 00 B4 */	stfs f1, 0xb4(r4)
/* 803EC12C 003E906C  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx12TKchDeadHanaFf

.fn init__Q23efx27TParticleCallBack_KchYodareFP14JPABaseEmitterP15JPABaseParticle, global
/* 803EC130 003E9070  4E 80 00 20 */	blr 
.endfn init__Q23efx27TParticleCallBack_KchYodareFP14JPABaseEmitterP15JPABaseParticle

.fn execute__Q23efx27TParticleCallBack_KchYodareFP14JPABaseEmitterP15JPABaseParticle, global
/* 803EC134 003E9074  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 803EC138 003E9078  7C 08 02 A6 */	mflr r0
/* 803EC13C 003E907C  90 01 00 54 */	stw r0, 0x54(r1)
/* 803EC140 003E9080  DB E1 00 40 */	stfd f31, 0x40(r1)
/* 803EC144 003E9084  F3 E1 00 48 */	psq_st f31, 72(r1), 0, qr0
/* 803EC148 003E9088  DB C1 00 30 */	stfd f30, 0x30(r1)
/* 803EC14C 003E908C  F3 C1 00 38 */	psq_st f30, 56(r1), 0, qr0
/* 803EC150 003E9090  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 803EC154 003E9094  93 C1 00 28 */	stw r30, 0x28(r1)
/* 803EC158 003E9098  93 A1 00 24 */	stw r29, 0x24(r1)
/* 803EC15C 003E909C  7C BE 2B 78 */	mr r30, r5
/* 803EC160 003E90A0  7C 7F 1B 78 */	mr r31, r3
/* 803EC164 003E90A4  7C 9D 23 78 */	mr r29, r4
/* 803EC168 003E90A8  7F C3 F3 78 */	mr r3, r30
/* 803EC16C 003E90AC  4B CA 94 5D */	bl getCalcCurrentPositionZ__15JPABaseParticleCFPC14JPABaseEmitter
/* 803EC170 003E90B0  FF C0 08 90 */	fmr f30, f1
/* 803EC174 003E90B4  7F C3 F3 78 */	mr r3, r30
/* 803EC178 003E90B8  7F A4 EB 78 */	mr r4, r29
/* 803EC17C 003E90BC  4B CA 94 29 */	bl getCalcCurrentPositionY__15JPABaseParticleCFPC14JPABaseEmitter
/* 803EC180 003E90C0  FF E0 08 90 */	fmr f31, f1
/* 803EC184 003E90C4  7F C3 F3 78 */	mr r3, r30
/* 803EC188 003E90C8  7F A4 EB 78 */	mr r4, r29
/* 803EC18C 003E90CC  4B CA 93 F5 */	bl getCalcCurrentPositionX__15JPABaseParticleCFPC14JPABaseEmitter
/* 803EC190 003E90D0  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 803EC194 003E90D4  D0 21 00 08 */	stfs f1, 8(r1)
/* 803EC198 003E90D8  28 03 00 00 */	cmplwi r3, 0
/* 803EC19C 003E90DC  D3 E1 00 0C */	stfs f31, 0xc(r1)
/* 803EC1A0 003E90E0  D3 C1 00 10 */	stfs f30, 0x10(r1)
/* 803EC1A4 003E90E4  41 82 00 1C */	beq .L_803EC1C0
/* 803EC1A8 003E90E8  81 83 00 04 */	lwz r12, 4(r3)
/* 803EC1AC 003E90EC  38 81 00 08 */	addi r4, r1, 8
/* 803EC1B0 003E90F0  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 803EC1B4 003E90F4  7D 89 03 A6 */	mtctr r12
/* 803EC1B8 003E90F8  4E 80 04 21 */	bctrl 
/* 803EC1BC 003E90FC  48 00 00 08 */	b .L_803EC1C4
.L_803EC1C0:
/* 803EC1C0 003E9100  C0 22 1A E0 */	lfs f1, lbl_8051FE40@sda21(r2)
.L_803EC1C4:
/* 803EC1C4 003E9104  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803EC1C8 003E9108  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 803EC1CC 003E910C  40 80 00 54 */	bge .L_803EC220
/* 803EC1D0 003E9110  80 1E 00 7C */	lwz r0, 0x7c(r30)
/* 803EC1D4 003E9114  60 00 00 02 */	ori r0, r0, 2
/* 803EC1D8 003E9118  90 1E 00 7C */	stw r0, 0x7c(r30)
/* 803EC1DC 003E911C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803EC1E0 003E9120  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 803EC1E4 003E9124  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 803EC1E8 003E9128  7C 03 00 00 */	cmpw r3, r0
/* 803EC1EC 003E912C  40 80 00 34 */	bge .L_803EC220
/* 803EC1F0 003E9130  1C 03 00 0C */	mulli r0, r3, 0xc
/* 803EC1F4 003E9134  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 803EC1F8 003E9138  C0 01 00 08 */	lfs f0, 8(r1)
/* 803EC1FC 003E913C  7C 63 02 14 */	add r3, r3, r0
/* 803EC200 003E9140  D0 03 00 00 */	stfs f0, 0(r3)
/* 803EC204 003E9144  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803EC208 003E9148  D0 03 00 04 */	stfs f0, 4(r3)
/* 803EC20C 003E914C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803EC210 003E9150  D0 03 00 08 */	stfs f0, 8(r3)
/* 803EC214 003E9154  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 803EC218 003E9158  38 03 00 01 */	addi r0, r3, 1
/* 803EC21C 003E915C  90 1F 00 18 */	stw r0, 0x18(r31)
.L_803EC220:
/* 803EC220 003E9160  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803EC224 003E9164  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 803EC228 003E9168  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EC22C 003E916C  40 80 00 58 */	bge .L_803EC284
/* 803EC230 003E9170  80 1E 00 7C */	lwz r0, 0x7c(r30)
/* 803EC234 003E9174  60 00 00 02 */	ori r0, r0, 2
/* 803EC238 003E9178  90 1E 00 7C */	stw r0, 0x7c(r30)
/* 803EC23C 003E917C  C0 1F 00 3C */	lfs f0, 0x3c(r31)
/* 803EC240 003E9180  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803EC244 003E9184  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803EC248 003E9188  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 803EC24C 003E918C  7C 03 00 00 */	cmpw r3, r0
/* 803EC250 003E9190  40 80 00 34 */	bge .L_803EC284
/* 803EC254 003E9194  1C 03 00 0C */	mulli r0, r3, 0xc
/* 803EC258 003E9198  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 803EC25C 003E919C  C0 01 00 08 */	lfs f0, 8(r1)
/* 803EC260 003E91A0  7C 63 02 14 */	add r3, r3, r0
/* 803EC264 003E91A4  D0 03 00 00 */	stfs f0, 0(r3)
/* 803EC268 003E91A8  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 803EC26C 003E91AC  D0 03 00 04 */	stfs f0, 4(r3)
/* 803EC270 003E91B0  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803EC274 003E91B4  D0 03 00 08 */	stfs f0, 8(r3)
/* 803EC278 003E91B8  80 7F 00 34 */	lwz r3, 0x34(r31)
/* 803EC27C 003E91BC  38 03 00 01 */	addi r0, r3, 1
/* 803EC280 003E91C0  90 1F 00 34 */	stw r0, 0x34(r31)
.L_803EC284:
/* 803EC284 003E91C4  E3 E1 00 48 */	psq_l f31, 72(r1), 0, qr0
/* 803EC288 003E91C8  CB E1 00 40 */	lfd f31, 0x40(r1)
/* 803EC28C 003E91CC  E3 C1 00 38 */	psq_l f30, 56(r1), 0, qr0
/* 803EC290 003E91D0  CB C1 00 30 */	lfd f30, 0x30(r1)
/* 803EC294 003E91D4  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 803EC298 003E91D8  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 803EC29C 003E91DC  80 01 00 54 */	lwz r0, 0x54(r1)
/* 803EC2A0 003E91E0  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 803EC2A4 003E91E4  7C 08 03 A6 */	mtlr r0
/* 803EC2A8 003E91E8  38 21 00 50 */	addi r1, r1, 0x50
/* 803EC2AC 003E91EC  4E 80 00 20 */	blr 
.endfn execute__Q23efx27TParticleCallBack_KchYodareFP14JPABaseEmitterP15JPABaseParticle

.fn create__Q23efx22TKchYodareBaseChaseMtxFPQ23efx3Arg, global
/* 803EC2B0 003E91F0  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803EC2B4 003E91F4  7C 08 02 A6 */	mflr r0
/* 803EC2B8 003E91F8  90 01 00 34 */	stw r0, 0x34(r1)
/* 803EC2BC 003E91FC  DB E1 00 20 */	stfd f31, 0x20(r1)
/* 803EC2C0 003E9200  F3 E1 00 28 */	psq_st f31, 40(r1), 0, qr0
/* 803EC2C4 003E9204  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EC2C8 003E9208  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EC2CC 003E920C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803EC2D0 003E9210  7C 9E 23 79 */	or. r30, r4, r4
/* 803EC2D4 003E9214  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EC2D8 003E9218  7C 7D 1B 78 */	mr r29, r3
/* 803EC2DC 003E921C  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EC2E0 003E9220  40 82 00 18 */	bne .L_803EC2F8
/* 803EC2E4 003E9224  38 7F 00 00 */	addi r3, r31, 0
/* 803EC2E8 003E9228  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EC2EC 003E922C  38 80 01 84 */	li r4, 0x184
/* 803EC2F0 003E9230  4C C6 31 82 */	crclr 6
/* 803EC2F4 003E9234  4B C3 E3 4D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EC2F8:
/* 803EC2F8 003E9238  7F C3 F3 78 */	mr r3, r30
/* 803EC2FC 003E923C  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EC300 003E9240  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC304 003E9244  7D 89 03 A6 */	mtctr r12
/* 803EC308 003E9248  4E 80 04 21 */	bctrl 
/* 803EC30C 003E924C  7C 64 1B 78 */	mr r4, r3
/* 803EC310 003E9250  38 7F 00 54 */	addi r3, r31, 0x54
/* 803EC314 003E9254  4B CD E3 AD */	bl strcmp
/* 803EC318 003E9258  7C 60 00 34 */	cntlzw r0, r3
/* 803EC31C 003E925C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EC320 003E9260  40 82 00 18 */	bne .L_803EC338
/* 803EC324 003E9264  38 7F 00 00 */	addi r3, r31, 0
/* 803EC328 003E9268  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EC32C 003E926C  38 80 01 85 */	li r4, 0x185
/* 803EC330 003E9270  4C C6 31 82 */	crclr 6
/* 803EC334 003E9274  4B C3 E3 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EC338:
/* 803EC338 003E9278  38 7D 00 18 */	addi r3, r29, 0x18
/* 803EC33C 003E927C  C3 FE 00 10 */	lfs f31, 0x10(r30)
/* 803EC340 003E9280  81 9D 00 18 */	lwz r12, 0x18(r29)
/* 803EC344 003E9284  38 80 00 00 */	li r4, 0
/* 803EC348 003E9288  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC34C 003E928C  7D 89 03 A6 */	mtctr r12
/* 803EC350 003E9290  4E 80 04 21 */	bctrl 
/* 803EC354 003E9294  38 7D 00 34 */	addi r3, r29, 0x34
/* 803EC358 003E9298  38 80 00 00 */	li r4, 0
/* 803EC35C 003E929C  81 9D 00 34 */	lwz r12, 0x34(r29)
/* 803EC360 003E92A0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC364 003E92A4  7D 89 03 A6 */	mtctr r12
/* 803EC368 003E92A8  4E 80 04 21 */	bctrl 
/* 803EC36C 003E92AC  D3 FD 00 50 */	stfs f31, 0x50(r29)
/* 803EC370 003E92B0  7F A3 EB 78 */	mr r3, r29
/* 803EC374 003E92B4  7F C4 F3 78 */	mr r4, r30
/* 803EC378 003E92B8  4B FC 33 75 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803EC37C 003E92BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EC380 003E92C0  41 82 00 10 */	beq .L_803EC390
/* 803EC384 003E92C4  80 7D 00 08 */	lwz r3, 8(r29)
/* 803EC388 003E92C8  38 1D 00 14 */	addi r0, r29, 0x14
/* 803EC38C 003E92CC  90 03 00 F0 */	stw r0, 0xf0(r3)
.L_803EC390:
/* 803EC390 003E92D0  38 60 00 01 */	li r3, 1
/* 803EC394 003E92D4  E3 E1 00 28 */	psq_l f31, 40(r1), 0, qr0
/* 803EC398 003E92D8  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803EC39C 003E92DC  CB E1 00 20 */	lfd f31, 0x20(r1)
/* 803EC3A0 003E92E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EC3A4 003E92E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EC3A8 003E92E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803EC3AC 003E92EC  7C 08 03 A6 */	mtlr r0
/* 803EC3B0 003E92F0  38 21 00 30 */	addi r1, r1, 0x30
/* 803EC3B4 003E92F4  4E 80 00 20 */	blr 
.endfn create__Q23efx22TKchYodareBaseChaseMtxFPQ23efx3Arg

.fn setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf, global
/* 803EC3B8 003E92F8  80 63 00 08 */	lwz r3, 8(r3)
/* 803EC3BC 003E92FC  28 03 00 00 */	cmplwi r3, 0
/* 803EC3C0 003E9300  4D 82 00 20 */	beqlr 
/* 803EC3C4 003E9304  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803EC3C8 003E9308  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803EC3CC 003E930C  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx22TKchYodareBaseChaseMtxFf

.fn "setPosNrm__Q23efx11THdamaSightFR10Vector3<f>R10Vector3<f>", global
/* 803EC3D0 003E9310  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803EC3D4 003E9314  7C 08 02 A6 */	mflr r0
/* 803EC3D8 003E9318  90 01 00 44 */	stw r0, 0x44(r1)
/* 803EC3DC 003E931C  80 03 00 08 */	lwz r0, 8(r3)
/* 803EC3E0 003E9320  28 00 00 00 */	cmplwi r0, 0
/* 803EC3E4 003E9324  41 82 00 E4 */	beq .L_803EC4C8
/* 803EC3E8 003E9328  C0 A5 00 04 */	lfs f5, 4(r5)
/* 803EC3EC 003E932C  C0 C5 00 08 */	lfs f6, 8(r5)
/* 803EC3F0 003E9330  EC 25 01 72 */	fmuls f1, f5, f5
/* 803EC3F4 003E9334  C0 85 00 00 */	lfs f4, 0(r5)
/* 803EC3F8 003E9338  EC 46 01 B2 */	fmuls f2, f6, f6
/* 803EC3FC 003E933C  C0 02 1A E0 */	lfs f0, lbl_8051FE40@sda21(r2)
/* 803EC400 003E9340  EC 24 09 3A */	fmadds f1, f4, f4, f1
/* 803EC404 003E9344  EC 22 08 2A */	fadds f1, f2, f1
/* 803EC408 003E9348  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EC40C 003E934C  40 81 00 14 */	ble .L_803EC420
/* 803EC410 003E9350  40 81 00 14 */	ble .L_803EC424
/* 803EC414 003E9354  FC 00 08 34 */	frsqrte f0, f1
/* 803EC418 003E9358  EC 20 00 72 */	fmuls f1, f0, f1
/* 803EC41C 003E935C  48 00 00 08 */	b .L_803EC424
.L_803EC420:
/* 803EC420 003E9360  FC 20 00 90 */	fmr f1, f0
.L_803EC424:
/* 803EC424 003E9364  C0 02 1A E0 */	lfs f0, lbl_8051FE40@sda21(r2)
/* 803EC428 003E9368  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EC42C 003E936C  40 81 00 18 */	ble .L_803EC444
/* 803EC430 003E9370  C0 02 1A E4 */	lfs f0, lbl_8051FE44@sda21(r2)
/* 803EC434 003E9374  EC 00 08 24 */	fdivs f0, f0, f1
/* 803EC438 003E9378  EC 84 00 32 */	fmuls f4, f4, f0
/* 803EC43C 003E937C  EC A5 00 32 */	fmuls f5, f5, f0
/* 803EC440 003E9380  EC C6 00 32 */	fmuls f6, f6, f0
.L_803EC444:
/* 803EC444 003E9384  C0 22 1A E0 */	lfs f1, lbl_8051FE40@sda21(r2)
/* 803EC448 003E9388  C0 42 1A E4 */	lfs f2, lbl_8051FE44@sda21(r2)
/* 803EC44C 003E938C  EC 61 01 32 */	fmuls f3, f1, f4
/* 803EC450 003E9390  D0 81 00 0C */	stfs f4, 0xc(r1)
/* 803EC454 003E9394  EC 01 01 72 */	fmuls f0, f1, f5
/* 803EC458 003E9398  ED 02 19 BC */	fnmsubs f8, f2, f6, f3
/* 803EC45C 003E939C  EC E1 01 B8 */	fmsubs f7, f1, f6, f0
/* 803EC460 003E93A0  EC 62 19 78 */	fmsubs f3, f2, f5, f3
/* 803EC464 003E93A4  EC 46 02 32 */	fmuls f2, f6, f8
/* 803EC468 003E93A8  EC 05 01 F2 */	fmuls f0, f5, f7
/* 803EC46C 003E93AC  D0 E1 00 10 */	stfs f7, 0x10(r1)
/* 803EC470 003E93B0  EC 24 00 F2 */	fmuls f1, f4, f3
/* 803EC474 003E93B4  EC 45 10 F8 */	fmsubs f2, f5, f3, f2
/* 803EC478 003E93B8  EC 04 02 38 */	fmsubs f0, f4, f8, f0
/* 803EC47C 003E93BC  EC 26 09 F8 */	fmsubs f1, f6, f7, f1
/* 803EC480 003E93C0  D0 41 00 08 */	stfs f2, 8(r1)
/* 803EC484 003E93C4  C0 44 00 00 */	lfs f2, 0(r4)
/* 803EC488 003E93C8  D0 41 00 14 */	stfs f2, 0x14(r1)
/* 803EC48C 003E93CC  D0 21 00 18 */	stfs f1, 0x18(r1)
/* 803EC490 003E93D0  D0 A1 00 1C */	stfs f5, 0x1c(r1)
/* 803EC494 003E93D4  D1 01 00 20 */	stfs f8, 0x20(r1)
/* 803EC498 003E93D8  C0 24 00 04 */	lfs f1, 4(r4)
/* 803EC49C 003E93DC  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 803EC4A0 003E93E0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803EC4A4 003E93E4  D0 C1 00 2C */	stfs f6, 0x2c(r1)
/* 803EC4A8 003E93E8  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 803EC4AC 003E93EC  C0 04 00 08 */	lfs f0, 8(r4)
/* 803EC4B0 003E93F0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 803EC4B4 003E93F4  80 A3 00 08 */	lwz r5, 8(r3)
/* 803EC4B8 003E93F8  38 61 00 08 */	addi r3, r1, 8
/* 803EC4BC 003E93FC  38 85 00 68 */	addi r4, r5, 0x68
/* 803EC4C0 003E9400  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803EC4C4 003E9404  4B CA 78 59 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
.L_803EC4C8:
/* 803EC4C8 003E9408  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803EC4CC 003E940C  7C 08 03 A6 */	mtlr r0
/* 803EC4D0 003E9410  38 21 00 40 */	addi r1, r1, 0x40
/* 803EC4D4 003E9414  4E 80 00 20 */	blr 
.endfn "setPosNrm__Q23efx11THdamaSightFR10Vector3<f>R10Vector3<f>"

.fn create__Q23efx11THdamaShellFPQ23efx3Arg, global
/* 803EC4D8 003E9418  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803EC4DC 003E941C  7C 08 02 A6 */	mflr r0
/* 803EC4E0 003E9420  90 01 00 24 */	stw r0, 0x24(r1)
/* 803EC4E4 003E9424  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803EC4E8 003E9428  7C 9F 23 78 */	mr r31, r4
/* 803EC4EC 003E942C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803EC4F0 003E9430  7C 7E 1B 78 */	mr r30, r3
/* 803EC4F4 003E9434  7F E3 FB 78 */	mr r3, r31
/* 803EC4F8 003E9438  81 9F 00 00 */	lwz r12, 0(r31)
/* 803EC4FC 003E943C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC500 003E9440  7D 89 03 A6 */	mtctr r12
/* 803EC504 003E9444  4E 80 04 21 */	bctrl 
/* 803EC508 003E9448  7C 64 1B 78 */	mr r4, r3
/* 803EC50C 003E944C  38 62 1A D8 */	addi r3, r2, lbl_8051FE38@sda21
/* 803EC510 003E9450  4B CD E1 B1 */	bl strcmp
/* 803EC514 003E9454  7C 60 00 34 */	cntlzw r0, r3
/* 803EC518 003E9458  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EC51C 003E945C  40 82 00 20 */	bne .L_803EC53C
/* 803EC520 003E9460  3C 60 80 49 */	lis r3, lbl_80497910@ha
/* 803EC524 003E9464  3C A0 80 49 */	lis r5, lbl_80497924@ha
/* 803EC528 003E9468  38 63 79 10 */	addi r3, r3, lbl_80497910@l
/* 803EC52C 003E946C  38 80 01 B8 */	li r4, 0x1b8
/* 803EC530 003E9470  38 A5 79 24 */	addi r5, r5, lbl_80497924@l
/* 803EC534 003E9474  4C C6 31 82 */	crclr 6
/* 803EC538 003E9478  4B C3 E1 09 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EC53C:
/* 803EC53C 003E947C  C0 5F 00 10 */	lfs f2, 0x10(r31)
/* 803EC540 003E9480  7F C3 F3 78 */	mr r3, r30
/* 803EC544 003E9484  C0 3F 00 14 */	lfs f1, 0x14(r31)
/* 803EC548 003E9488  7F E4 FB 78 */	mr r4, r31
/* 803EC54C 003E948C  C0 1F 00 18 */	lfs f0, 0x18(r31)
/* 803EC550 003E9490  D0 41 00 08 */	stfs f2, 8(r1)
/* 803EC554 003E9494  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803EC558 003E9498  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803EC55C 003E949C  4B FC 31 91 */	bl create__Q23efx5TSyncFPQ23efx3Arg
/* 803EC560 003E94A0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EC564 003E94A4  41 82 00 28 */	beq .L_803EC58C
/* 803EC568 003E94A8  80 9E 00 08 */	lwz r4, 8(r30)
/* 803EC56C 003E94AC  38 60 00 01 */	li r3, 1
/* 803EC570 003E94B0  C0 01 00 08 */	lfs f0, 8(r1)
/* 803EC574 003E94B4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803EC578 003E94B8  D0 04 00 18 */	stfs f0, 0x18(r4)
/* 803EC57C 003E94BC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 803EC580 003E94C0  D0 24 00 1C */	stfs f1, 0x1c(r4)
/* 803EC584 003E94C4  D0 04 00 20 */	stfs f0, 0x20(r4)
/* 803EC588 003E94C8  48 00 00 08 */	b .L_803EC590
.L_803EC58C:
/* 803EC58C 003E94CC  38 60 00 00 */	li r3, 0
.L_803EC590:
/* 803EC590 003E94D0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803EC594 003E94D4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803EC598 003E94D8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803EC59C 003E94DC  7C 08 03 A6 */	mtlr r0
/* 803EC5A0 003E94E0  38 21 00 20 */	addi r1, r1, 0x20
/* 803EC5A4 003E94E4  4E 80 00 20 */	blr 
.endfn create__Q23efx11THdamaShellFPQ23efx3Arg

.fn create__Q23efx11THdamaHit2WFPQ23efx3Arg, global
/* 803EC5A8 003E94E8  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 803EC5AC 003E94EC  7C 08 02 A6 */	mflr r0
/* 803EC5B0 003E94F0  90 01 00 94 */	stw r0, 0x94(r1)
/* 803EC5B4 003E94F4  DB E1 00 80 */	stfd f31, 0x80(r1)
/* 803EC5B8 003E94F8  F3 E1 00 88 */	psq_st f31, 136(r1), 0, qr0
/* 803EC5BC 003E94FC  DB C1 00 70 */	stfd f30, 0x70(r1)
/* 803EC5C0 003E9500  F3 C1 00 78 */	psq_st f30, 120(r1), 0, qr0
/* 803EC5C4 003E9504  DB A1 00 60 */	stfd f29, 0x60(r1)
/* 803EC5C8 003E9508  F3 A1 00 68 */	psq_st f29, 104(r1), 0, qr0
/* 803EC5CC 003E950C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803EC5D0 003E9510  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803EC5D4 003E9514  93 A1 00 54 */	stw r29, 0x54(r1)
/* 803EC5D8 003E9518  7C 9D 23 78 */	mr r29, r4
/* 803EC5DC 003E951C  7C 7F 1B 78 */	mr r31, r3
/* 803EC5E0 003E9520  7F A3 EB 78 */	mr r3, r29
/* 803EC5E4 003E9524  81 9D 00 00 */	lwz r12, 0(r29)
/* 803EC5E8 003E9528  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC5EC 003E952C  7D 89 03 A6 */	mtctr r12
/* 803EC5F0 003E9530  4E 80 04 21 */	bctrl 
/* 803EC5F4 003E9534  7C 64 1B 78 */	mr r4, r3
/* 803EC5F8 003E9538  38 62 1A D8 */	addi r3, r2, lbl_8051FE38@sda21
/* 803EC5FC 003E953C  4B CD E0 C5 */	bl strcmp
/* 803EC600 003E9540  7C 60 00 34 */	cntlzw r0, r3
/* 803EC604 003E9544  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EC608 003E9548  40 82 00 20 */	bne .L_803EC628
/* 803EC60C 003E954C  3C 60 80 49 */	lis r3, lbl_80497910@ha
/* 803EC610 003E9550  3C A0 80 49 */	lis r5, lbl_80497924@ha
/* 803EC614 003E9554  38 63 79 10 */	addi r3, r3, lbl_80497910@l
/* 803EC618 003E9558  38 80 01 C5 */	li r4, 0x1c5
/* 803EC61C 003E955C  38 A5 79 24 */	addi r5, r5, lbl_80497924@l
/* 803EC620 003E9560  4C C6 31 82 */	crclr 6
/* 803EC624 003E9564  4B C3 E0 1D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EC628:
/* 803EC628 003E9568  C3 FD 00 10 */	lfs f31, 0x10(r29)
/* 803EC62C 003E956C  7F BE EB 78 */	mr r30, r29
/* 803EC630 003E9570  C3 DD 00 14 */	lfs f30, 0x14(r29)
/* 803EC634 003E9574  7F E3 FB 78 */	mr r3, r31
/* 803EC638 003E9578  C3 BD 00 18 */	lfs f29, 0x18(r29)
/* 803EC63C 003E957C  7F A4 EB 78 */	mr r4, r29
/* 803EC640 003E9580  4B FC 2A 7D */	bl create__Q23efx8TSimple3FPQ23efx3Arg
/* 803EC644 003E9584  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EC648 003E9588  41 82 00 E4 */	beq .L_803EC72C
/* 803EC64C 003E958C  C0 82 1A E0 */	lfs f4, lbl_8051FE40@sda21(r2)
/* 803EC650 003E9590  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 803EC654 003E9594  C4 23 41 E4 */	lfsu f1, "zero__10Vector3<f>"@l(r3)
/* 803EC658 003E9598  3B A0 00 00 */	li r29, 0
/* 803EC65C 003E959C  EC 64 07 B2 */	fmuls f3, f4, f30
/* 803EC660 003E95A0  C0 A2 1A E4 */	lfs f5, lbl_8051FE44@sda21(r2)
/* 803EC664 003E95A4  ED 04 07 F2 */	fmuls f8, f4, f31
/* 803EC668 003E95A8  C0 43 00 04 */	lfs f2, 4(r3)
/* 803EC66C 003E95AC  C0 03 00 08 */	lfs f0, 8(r3)
/* 803EC670 003E95B0  EC E4 1F 78 */	fmsubs f7, f4, f29, f3
/* 803EC674 003E95B4  EC C5 47 B8 */	fmsubs f6, f5, f30, f8
/* 803EC678 003E95B8  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 803EC67C 003E95BC  EC A5 47 7C */	fnmsubs f5, f5, f29, f8
/* 803EC680 003E95C0  EC 3E 01 F2 */	fmuls f1, f30, f7
/* 803EC684 003E95C4  D3 E1 00 18 */	stfs f31, 0x18(r1)
/* 803EC688 003E95C8  EC 7F 01 B2 */	fmuls f3, f31, f6
/* 803EC68C 003E95CC  EC 9D 01 72 */	fmuls f4, f29, f5
/* 803EC690 003E95D0  D0 E1 00 1C */	stfs f7, 0x1c(r1)
/* 803EC694 003E95D4  EC 3F 09 78 */	fmsubs f1, f31, f5, f1
/* 803EC698 003E95D8  EC 7D 19 F8 */	fmsubs f3, f29, f7, f3
/* 803EC69C 003E95DC  D3 C1 00 28 */	stfs f30, 0x28(r1)
/* 803EC6A0 003E95E0  EC 9E 21 B8 */	fmsubs f4, f30, f6, f4
/* 803EC6A4 003E95E4  D0 A1 00 2C */	stfs f5, 0x2c(r1)
/* 803EC6A8 003E95E8  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 803EC6AC 003E95EC  D0 81 00 14 */	stfs f4, 0x14(r1)
/* 803EC6B0 003E95F0  D0 41 00 30 */	stfs f2, 0x30(r1)
/* 803EC6B4 003E95F4  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 803EC6B8 003E95F8  D3 A1 00 38 */	stfs f29, 0x38(r1)
/* 803EC6BC 003E95FC  D0 C1 00 3C */	stfs f6, 0x3c(r1)
/* 803EC6C0 003E9600  D0 01 00 40 */	stfs f0, 0x40(r1)
.L_803EC6C4:
/* 803EC6C4 003E9604  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 803EC6C8 003E9608  38 61 00 14 */	addi r3, r1, 0x14
/* 803EC6CC 003E960C  38 84 00 68 */	addi r4, r4, 0x68
/* 803EC6D0 003E9610  4B CA 76 25 */	bl JPASetRMtxfromMtx__FPA4_CfPA4_f
/* 803EC6D4 003E9614  3B BD 00 01 */	addi r29, r29, 1
/* 803EC6D8 003E9618  3B FF 00 04 */	addi r31, r31, 4
/* 803EC6DC 003E961C  2C 1D 00 03 */	cmpwi r29, 3
/* 803EC6E0 003E9620  41 80 FF E4 */	blt .L_803EC6C4
/* 803EC6E4 003E9624  3C 60 80 4B */	lis r3, __vt__Q23efx5TBase@ha
/* 803EC6E8 003E9628  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 803EC6EC 003E962C  38 03 A7 F8 */	addi r0, r3, __vt__Q23efx5TBase@l
/* 803EC6F0 003E9630  3C 60 80 4F */	lis r3, __vt__Q23efx12THdamaShootA@ha
/* 803EC6F4 003E9634  90 01 00 08 */	stw r0, 8(r1)
/* 803EC6F8 003E9638  38 04 6A 78 */	addi r0, r4, __vt__Q23efx8TSimple1@l
/* 803EC6FC 003E963C  38 C0 00 9C */	li r6, 0x9c
/* 803EC700 003E9640  38 A0 00 00 */	li r5, 0
/* 803EC704 003E9644  90 01 00 08 */	stw r0, 8(r1)
/* 803EC708 003E9648  38 03 9F E0 */	addi r0, r3, __vt__Q23efx12THdamaShootA@l
/* 803EC70C 003E964C  7F C4 F3 78 */	mr r4, r30
/* 803EC710 003E9650  38 61 00 08 */	addi r3, r1, 8
/* 803EC714 003E9654  B0 C1 00 0C */	sth r6, 0xc(r1)
/* 803EC718 003E9658  90 A1 00 10 */	stw r5, 0x10(r1)
/* 803EC71C 003E965C  90 01 00 08 */	stw r0, 8(r1)
/* 803EC720 003E9660  4B FC 28 65 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803EC724 003E9664  38 60 00 01 */	li r3, 1
/* 803EC728 003E9668  48 00 00 08 */	b .L_803EC730
.L_803EC72C:
/* 803EC72C 003E966C  38 60 00 00 */	li r3, 0
.L_803EC730:
/* 803EC730 003E9670  E3 E1 00 88 */	psq_l f31, 136(r1), 0, qr0
/* 803EC734 003E9674  CB E1 00 80 */	lfd f31, 0x80(r1)
/* 803EC738 003E9678  E3 C1 00 78 */	psq_l f30, 120(r1), 0, qr0
/* 803EC73C 003E967C  CB C1 00 70 */	lfd f30, 0x70(r1)
/* 803EC740 003E9680  E3 A1 00 68 */	psq_l f29, 104(r1), 0, qr0
/* 803EC744 003E9684  CB A1 00 60 */	lfd f29, 0x60(r1)
/* 803EC748 003E9688  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803EC74C 003E968C  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803EC750 003E9690  80 01 00 94 */	lwz r0, 0x94(r1)
/* 803EC754 003E9694  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 803EC758 003E9698  7C 08 03 A6 */	mtlr r0
/* 803EC75C 003E969C  38 21 00 90 */	addi r1, r1, 0x90
/* 803EC760 003E96A0  4E 80 00 20 */	blr 
.endfn create__Q23efx11THdamaHit2WFPQ23efx3Arg

.fn create__Q23efx16THdamaDeadHahen1FPQ23efx3Arg, global
/* 803EC764 003E96A4  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803EC768 003E96A8  7C 08 02 A6 */	mflr r0
/* 803EC76C 003E96AC  90 01 00 74 */	stw r0, 0x74(r1)
/* 803EC770 003E96B0  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803EC774 003E96B4  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803EC778 003E96B8  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803EC77C 003E96BC  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803EC780 003E96C0  93 A1 00 54 */	stw r29, 0x54(r1)
/* 803EC784 003E96C4  7C 9E 23 78 */	mr r30, r4
/* 803EC788 003E96C8  7C 7D 1B 78 */	mr r29, r3
/* 803EC78C 003E96CC  7F C3 F3 78 */	mr r3, r30
/* 803EC790 003E96D0  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EC794 003E96D4  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EC798 003E96D8  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EC79C 003E96DC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC7A0 003E96E0  7D 89 03 A6 */	mtctr r12
/* 803EC7A4 003E96E4  4E 80 04 21 */	bctrl 
/* 803EC7A8 003E96E8  7C 64 1B 78 */	mr r4, r3
/* 803EC7AC 003E96EC  38 7F 00 2C */	addi r3, r31, 0x2c
/* 803EC7B0 003E96F0  4B CD DF 11 */	bl strcmp
/* 803EC7B4 003E96F4  7C 60 00 34 */	cntlzw r0, r3
/* 803EC7B8 003E96F8  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EC7BC 003E96FC  40 82 00 18 */	bne .L_803EC7D4
/* 803EC7C0 003E9700  38 7F 00 00 */	addi r3, r31, 0
/* 803EC7C4 003E9704  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EC7C8 003E9708  38 80 01 E4 */	li r4, 0x1e4
/* 803EC7CC 003E970C  4C C6 31 82 */	crclr 6
/* 803EC7D0 003E9710  4B C3 DE 71 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EC7D4:
/* 803EC7D4 003E9714  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 803EC7D8 003E9718  7F A3 EB 78 */	mr r3, r29
/* 803EC7DC 003E971C  7F C4 F3 78 */	mr r4, r30
/* 803EC7E0 003E9720  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803EC7E4 003E9724  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 803EC7E8 003E9728  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803EC7EC 003E972C  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803EC7F0 003E9730  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803EC7F4 003E9734  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 803EC7F8 003E9738  D0 01 00 08 */	stfs f0, 8(r1)
/* 803EC7FC 003E973C  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 803EC800 003E9740  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803EC804 003E9744  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 803EC808 003E9748  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803EC80C 003E974C  4B FC 27 79 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
/* 803EC810 003E9750  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EC814 003E9754  41 82 00 9C */	beq .L_803EC8B0
/* 803EC818 003E9758  38 61 00 20 */	addi r3, r1, 0x20
/* 803EC81C 003E975C  38 81 00 14 */	addi r4, r1, 0x14
/* 803EC820 003E9760  38 A1 00 08 */	addi r5, r1, 8
/* 803EC824 003E9764  4B FC 34 5D */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803EC828 003E9768  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803EC82C 003E976C  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803EC830 003E9770  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 803EC834 003E9774  EC 81 00 28 */	fsubs f4, f1, f0
/* 803EC838 003E9778  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803EC83C 003E977C  C0 21 00 08 */	lfs f1, 8(r1)
/* 803EC840 003E9780  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803EC844 003E9784  EC 43 10 28 */	fsubs f2, f3, f2
/* 803EC848 003E9788  EC 64 01 32 */	fmuls f3, f4, f4
/* 803EC84C 003E978C  EC 21 00 28 */	fsubs f1, f1, f0
/* 803EC850 003E9790  C0 02 1A E0 */	lfs f0, lbl_8051FE40@sda21(r2)
/* 803EC854 003E9794  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803EC858 003E9798  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 803EC85C 003E979C  EC 22 08 2A */	fadds f1, f2, f1
/* 803EC860 003E97A0  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EC864 003E97A4  40 81 00 14 */	ble .L_803EC878
/* 803EC868 003E97A8  40 81 00 14 */	ble .L_803EC87C
/* 803EC86C 003E97AC  FC 00 08 34 */	frsqrte f0, f1
/* 803EC870 003E97B0  EC 20 00 72 */	fmuls f1, f0, f1
/* 803EC874 003E97B4  48 00 00 08 */	b .L_803EC87C
.L_803EC878:
/* 803EC878 003E97B8  FC 20 00 90 */	fmr f1, f0
.L_803EC87C:
/* 803EC87C 003E97BC  C0 02 1A F0 */	lfs f0, lbl_8051FE50@sda21(r2)
/* 803EC880 003E97C0  38 61 00 20 */	addi r3, r1, 0x20
/* 803EC884 003E97C4  80 BD 00 08 */	lwz r5, 8(r29)
/* 803EC888 003E97C8  EF E1 00 24 */	fdivs f31, f1, f0
/* 803EC88C 003E97CC  38 85 00 68 */	addi r4, r5, 0x68
/* 803EC890 003E97D0  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803EC894 003E97D4  4B CA 74 89 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803EC898 003E97D8  80 9D 00 08 */	lwz r4, 8(r29)
/* 803EC89C 003E97DC  38 60 00 01 */	li r3, 1
/* 803EC8A0 003E97E0  C0 24 00 04 */	lfs f1, 4(r4)
/* 803EC8A4 003E97E4  EC 21 07 F2 */	fmuls f1, f1, f31
/* 803EC8A8 003E97E8  D0 24 00 04 */	stfs f1, 4(r4)
/* 803EC8AC 003E97EC  48 00 00 08 */	b .L_803EC8B4
.L_803EC8B0:
/* 803EC8B0 003E97F0  38 60 00 00 */	li r3, 0
.L_803EC8B4:
/* 803EC8B4 003E97F4  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803EC8B8 003E97F8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803EC8BC 003E97FC  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803EC8C0 003E9800  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803EC8C4 003E9804  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803EC8C8 003E9808  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 803EC8CC 003E980C  7C 08 03 A6 */	mtlr r0
/* 803EC8D0 003E9810  38 21 00 70 */	addi r1, r1, 0x70
/* 803EC8D4 003E9814  4E 80 00 20 */	blr 
.endfn create__Q23efx16THdamaDeadHahen1FPQ23efx3Arg

.fn create__Q23efx16THdamaDeadHahen2FPQ23efx3Arg, global
/* 803EC8D8 003E9818  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803EC8DC 003E981C  7C 08 02 A6 */	mflr r0
/* 803EC8E0 003E9820  90 01 00 74 */	stw r0, 0x74(r1)
/* 803EC8E4 003E9824  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803EC8E8 003E9828  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803EC8EC 003E982C  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803EC8F0 003E9830  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803EC8F4 003E9834  93 A1 00 54 */	stw r29, 0x54(r1)
/* 803EC8F8 003E9838  7C 9E 23 78 */	mr r30, r4
/* 803EC8FC 003E983C  7C 7D 1B 78 */	mr r29, r3
/* 803EC900 003E9840  7F C3 F3 78 */	mr r3, r30
/* 803EC904 003E9844  3C 80 80 49 */	lis r4, lbl_80497910@ha
/* 803EC908 003E9848  81 9E 00 00 */	lwz r12, 0(r30)
/* 803EC90C 003E984C  3B E4 79 10 */	addi r31, r4, lbl_80497910@l
/* 803EC910 003E9850  81 8C 00 08 */	lwz r12, 8(r12)
/* 803EC914 003E9854  7D 89 03 A6 */	mtctr r12
/* 803EC918 003E9858  4E 80 04 21 */	bctrl 
/* 803EC91C 003E985C  7C 64 1B 78 */	mr r4, r3
/* 803EC920 003E9860  38 7F 00 2C */	addi r3, r31, 0x2c
/* 803EC924 003E9864  4B CD DD 9D */	bl strcmp
/* 803EC928 003E9868  7C 60 00 34 */	cntlzw r0, r3
/* 803EC92C 003E986C  54 00 DE 3F */	rlwinm. r0, r0, 0x1b, 0x18, 0x1f
/* 803EC930 003E9870  40 82 00 18 */	bne .L_803EC948
/* 803EC934 003E9874  38 7F 00 00 */	addi r3, r31, 0
/* 803EC938 003E9878  38 BF 00 14 */	addi r5, r31, 0x14
/* 803EC93C 003E987C  38 80 02 00 */	li r4, 0x200
/* 803EC940 003E9880  4C C6 31 82 */	crclr 6
/* 803EC944 003E9884  4B C3 DC FD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803EC948:
/* 803EC948 003E9888  C0 1E 00 10 */	lfs f0, 0x10(r30)
/* 803EC94C 003E988C  7F A3 EB 78 */	mr r3, r29
/* 803EC950 003E9890  7F C4 F3 78 */	mr r4, r30
/* 803EC954 003E9894  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803EC958 003E9898  C0 1E 00 14 */	lfs f0, 0x14(r30)
/* 803EC95C 003E989C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803EC960 003E98A0  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803EC964 003E98A4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803EC968 003E98A8  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 803EC96C 003E98AC  D0 01 00 08 */	stfs f0, 8(r1)
/* 803EC970 003E98B0  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 803EC974 003E98B4  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803EC978 003E98B8  C0 1E 00 24 */	lfs f0, 0x24(r30)
/* 803EC97C 003E98BC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803EC980 003E98C0  4B FC 26 95 */	bl create__Q23efx8TSimple2FPQ23efx3Arg
/* 803EC984 003E98C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803EC988 003E98C8  41 82 00 B4 */	beq .L_803ECA3C
/* 803EC98C 003E98CC  38 61 00 20 */	addi r3, r1, 0x20
/* 803EC990 003E98D0  38 81 00 14 */	addi r4, r1, 0x14
/* 803EC994 003E98D4  38 A1 00 08 */	addi r5, r1, 8
/* 803EC998 003E98D8  4B FC 32 E9 */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803EC99C 003E98DC  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803EC9A0 003E98E0  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803EC9A4 003E98E4  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 803EC9A8 003E98E8  EC 81 00 28 */	fsubs f4, f1, f0
/* 803EC9AC 003E98EC  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803EC9B0 003E98F0  C0 21 00 08 */	lfs f1, 8(r1)
/* 803EC9B4 003E98F4  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803EC9B8 003E98F8  EC 43 10 28 */	fsubs f2, f3, f2
/* 803EC9BC 003E98FC  EC 64 01 32 */	fmuls f3, f4, f4
/* 803EC9C0 003E9900  EC 21 00 28 */	fsubs f1, f1, f0
/* 803EC9C4 003E9904  C0 02 1A E0 */	lfs f0, lbl_8051FE40@sda21(r2)
/* 803EC9C8 003E9908  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803EC9CC 003E990C  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 803EC9D0 003E9910  EC 22 08 2A */	fadds f1, f2, f1
/* 803EC9D4 003E9914  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 803EC9D8 003E9918  40 81 00 14 */	ble .L_803EC9EC
/* 803EC9DC 003E991C  40 81 00 14 */	ble .L_803EC9F0
/* 803EC9E0 003E9920  FC 00 08 34 */	frsqrte f0, f1
/* 803EC9E4 003E9924  EC 20 00 72 */	fmuls f1, f0, f1
/* 803EC9E8 003E9928  48 00 00 08 */	b .L_803EC9F0
.L_803EC9EC:
/* 803EC9EC 003E992C  FC 20 00 90 */	fmr f1, f0
.L_803EC9F0:
/* 803EC9F0 003E9930  C0 02 1A F0 */	lfs f0, lbl_8051FE50@sda21(r2)
/* 803EC9F4 003E9934  7F BF EB 78 */	mr r31, r29
/* 803EC9F8 003E9938  3B C0 00 00 */	li r30, 0
/* 803EC9FC 003E993C  EF E1 00 24 */	fdivs f31, f1, f0
.L_803ECA00:
/* 803ECA00 003E9940  80 BF 00 08 */	lwz r5, 8(r31)
/* 803ECA04 003E9944  38 61 00 20 */	addi r3, r1, 0x20
/* 803ECA08 003E9948  38 85 00 68 */	addi r4, r5, 0x68
/* 803ECA0C 003E994C  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803ECA10 003E9950  4B CA 73 0D */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803ECA14 003E9954  80 7F 00 08 */	lwz r3, 8(r31)
/* 803ECA18 003E9958  3B DE 00 01 */	addi r30, r30, 1
/* 803ECA1C 003E995C  2C 1E 00 02 */	cmpwi r30, 2
/* 803ECA20 003E9960  3B FF 00 04 */	addi r31, r31, 4
/* 803ECA24 003E9964  C0 23 00 04 */	lfs f1, 4(r3)
/* 803ECA28 003E9968  EC 21 07 F2 */	fmuls f1, f1, f31
/* 803ECA2C 003E996C  D0 23 00 04 */	stfs f1, 4(r3)
/* 803ECA30 003E9970  41 80 FF D0 */	blt .L_803ECA00
/* 803ECA34 003E9974  38 60 00 01 */	li r3, 1
/* 803ECA38 003E9978  48 00 00 08 */	b .L_803ECA40
.L_803ECA3C:
/* 803ECA3C 003E997C  38 60 00 00 */	li r3, 0
.L_803ECA40:
/* 803ECA40 003E9980  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803ECA44 003E9984  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803ECA48 003E9988  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803ECA4C 003E998C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803ECA50 003E9990  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803ECA54 003E9994  83 A1 00 54 */	lwz r29, 0x54(r1)
/* 803ECA58 003E9998  7C 08 03 A6 */	mtlr r0
/* 803ECA5C 003E999C  38 21 00 70 */	addi r1, r1, 0x70
/* 803ECA60 003E99A0  4E 80 00 20 */	blr 
.endfn create__Q23efx16THdamaDeadHahen2FPQ23efx3Arg

.fn setGlobalScale__Q23efx10TOdamaFur1Ff, global
/* 803ECA64 003E99A4  80 63 00 08 */	lwz r3, 8(r3)
/* 803ECA68 003E99A8  28 03 00 00 */	cmplwi r3, 0
/* 803ECA6C 003E99AC  4D 82 00 20 */	beqlr 
/* 803ECA70 003E99B0  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803ECA74 003E99B4  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803ECA78 003E99B8  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx10TOdamaFur1Ff

.fn setGlobalScale__Q23efx10TOdamaFur2Ff, global
/* 803ECA7C 003E99BC  80 63 00 08 */	lwz r3, 8(r3)
/* 803ECA80 003E99C0  28 03 00 00 */	cmplwi r3, 0
/* 803ECA84 003E99C4  4D 82 00 20 */	beqlr 
/* 803ECA88 003E99C8  D0 23 00 B0 */	stfs f1, 0xb0(r3)
/* 803ECA8C 003E99CC  D0 23 00 B4 */	stfs f1, 0xb4(r3)
/* 803ECA90 003E99D0  4E 80 00 20 */	blr 
.endfn setGlobalScale__Q23efx10TOdamaFur2Ff

.section .text, "ax", unique, 1
.fn __dt__Q23efx11THdamaShellFv, weak
/* 803ECA94 003E99D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803ECA98 003E99D8  7C 08 02 A6 */	mflr r0
/* 803ECA9C 003E99DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803ECAA0 003E99E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803ECAA4 003E99E4  7C 9F 23 78 */	mr r31, r4
/* 803ECAA8 003E99E8  93 C1 00 08 */	stw r30, 8(r1)
/* 803ECAAC 003E99EC  7C 7E 1B 79 */	or. r30, r3, r3
/* 803ECAB0 003E99F0  41 82 00 64 */	beq .L_803ECB14
/* 803ECAB4 003E99F4  3C 60 80 4F */	lis r3, __vt__Q23efx11THdamaShell@ha
/* 803ECAB8 003E99F8  38 63 A0 08 */	addi r3, r3, __vt__Q23efx11THdamaShell@l
/* 803ECABC 003E99FC  90 7E 00 00 */	stw r3, 0(r30)
/* 803ECAC0 003E9A00  38 03 00 14 */	addi r0, r3, 0x14
/* 803ECAC4 003E9A04  90 1E 00 04 */	stw r0, 4(r30)
/* 803ECAC8 003E9A08  41 82 00 3C */	beq .L_803ECB04
/* 803ECACC 003E9A0C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 803ECAD0 003E9A10  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 803ECAD4 003E9A14  90 7E 00 00 */	stw r3, 0(r30)
/* 803ECAD8 003E9A18  38 03 00 14 */	addi r0, r3, 0x14
/* 803ECADC 003E9A1C  90 1E 00 04 */	stw r0, 4(r30)
/* 803ECAE0 003E9A20  41 82 00 24 */	beq .L_803ECB04
/* 803ECAE4 003E9A24  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 803ECAE8 003E9A28  38 7E 00 04 */	addi r3, r30, 4
/* 803ECAEC 003E9A2C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 803ECAF0 003E9A30  38 80 00 00 */	li r4, 0
/* 803ECAF4 003E9A34  90 BE 00 00 */	stw r5, 0(r30)
/* 803ECAF8 003E9A38  38 05 00 14 */	addi r0, r5, 0x14
/* 803ECAFC 003E9A3C  90 1E 00 04 */	stw r0, 4(r30)
/* 803ECB00 003E9A40  4B CA 31 9D */	bl __dt__18JPAEmitterCallBackFv
.L_803ECB04:
/* 803ECB04 003E9A44  7F E0 07 35 */	extsh. r0, r31
/* 803ECB08 003E9A48  40 81 00 0C */	ble .L_803ECB14
/* 803ECB0C 003E9A4C  7F C3 F3 78 */	mr r3, r30
/* 803ECB10 003E9A50  4B C3 75 A5 */	bl __dl__FPv
.L_803ECB14:
/* 803ECB14 003E9A54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803ECB18 003E9A58  7F C3 F3 78 */	mr r3, r30
/* 803ECB1C 003E9A5C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803ECB20 003E9A60  83 C1 00 08 */	lwz r30, 8(r1)
/* 803ECB24 003E9A64  7C 08 03 A6 */	mtlr r0
/* 803ECB28 003E9A68  38 21 00 10 */	addi r1, r1, 0x10
/* 803ECB2C 003E9A6C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx11THdamaShellFv

.fn "@4@__dt__Q23efx22TKchYodareBaseChaseMtxFv", weak
/* 803ECB30 003E9A70  38 63 FF FC */	addi r3, r3, -4
/* 803ECB34 003E9A74  4B F7 0E B4 */	b __dt__Q23efx22TKchYodareBaseChaseMtxFv
.endfn "@4@__dt__Q23efx22TKchYodareBaseChaseMtxFv"

.fn "@4@__dt__Q23efx11THdamaShellFv", weak
/* 803ECB38 003E9A78  38 63 FF FC */	addi r3, r3, -4
/* 803ECB3C 003E9A7C  4B FF FF 58 */	b __dt__Q23efx11THdamaShellFv
.endfn "@4@__dt__Q23efx11THdamaShellFv"
