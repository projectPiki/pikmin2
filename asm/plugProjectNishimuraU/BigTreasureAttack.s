.include "macros.inc"
.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_8048D1F0, local
	.asciz "otakara_elec_eff"
.endobj lbl_8048D1F0
.balign 4
.obj lbl_8048D204, local
	.asciz "otakara_fire_eff"
.endobj lbl_8048D204
.balign 4
.obj lbl_8048D218, local
	.asciz "otakara_gas_eff"
.endobj lbl_8048D218
.balign 4
.obj lbl_8048D228, local
	.asciz "otakara_water_eff"
.endobj lbl_8048D228

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx12TOootaWbShot, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx12TOootaWbShot
.obj "__vt__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
.endobj "__vt__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>"
.obj __vt__Q23efx10TChaseMtx6, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"
.endobj __vt__Q23efx10TChaseMtx6
.obj __vt__Q23efx17TOootaElecAttack2, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx17TOootaElecAttack2
.obj __vt__Q23efx17TOootaElecAttack1, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx17TOootaElecAttack1Fv"
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
	.4byte __dt__Q23efx17TOootaElecAttack1Fv
.endobj __vt__Q23efx17TOootaElecAttack1
.obj __vt__Q23efx13TOootaElecLeg, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx13TOootaElecLegFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx13TOootaElecLegFv
.endobj __vt__Q23efx13TOootaElecLeg
.obj __vt__Q23efx9TOootaGas, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
	.4byte "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"
.endobj __vt__Q23efx9TOootaGas
.obj __vt__Q23efx11TOootaPdead, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx11TOootaPdead
.obj "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
.endobj "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>"
.obj __vt__Q23efx24TChasePosPosLocalZScale3, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
.endobj __vt__Q23efx24TChasePosPosLocalZScale3
.obj __vt__Q23efx13TOootaPhouden, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx13TOootaPhouden
.obj __vt__Q23efx15TOootaElecparts, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx15TOootaElecpartsFv"
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
	.4byte __dt__Q23efx15TOootaElecpartsFv
.endobj __vt__Q23efx15TOootaElecparts
.obj __vt__Q23efx10TOootaElec, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
	.4byte "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"
.endobj __vt__Q23efx10TOootaElec
.obj __vt__Q34Game11BigTreasure21BigTreasureElecAttack, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game11BigTreasure21BigTreasureElecAttackFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game11BigTreasure21BigTreasureElecAttack
.obj __vt__Q23efx11TOootaWbHit, weak
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple4FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx11TOootaWbHit
.obj "__vt__Q23efx29TSyncGroup4<Q23efx9TChasePos>", weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
.endobj "__vt__Q23efx29TSyncGroup4<Q23efx9TChasePos>"
.obj __vt__Q23efx10TChasePos4, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx10TChasePos4
.obj __vt__Q23efx11TOootaWbomb, weak
	.4byte 0
	.4byte 0
	.4byte "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"
	.4byte "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
	.4byte "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"
.endobj __vt__Q23efx11TOootaWbomb
.obj __vt__Q34Game11BigTreasure22BigTreasureWaterAttack, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game11BigTreasure22BigTreasureWaterAttackFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game11BigTreasure22BigTreasureWaterAttack
.obj __vt__Q34Game11BigTreasure20BigTreasureGasAttack, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game11BigTreasure20BigTreasureGasAttackFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game11BigTreasure20BigTreasureGasAttack
.obj __vt__Q34Game11BigTreasure21BigTreasureFireAttack, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game11BigTreasure21BigTreasureFireAttackFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game11BigTreasure21BigTreasureFireAttack
.obj __vt__Q34Game11BigTreasure16AttackShadowNode, weak
	.4byte 0
	.4byte 0
	.4byte __dt__Q34Game11BigTreasure16AttackShadowNodeFv
	.4byte getChildCount__5CNodeFv
.endobj __vt__Q34Game11BigTreasure16AttackShadowNode

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051D200, local
	.float 0.0
.endobj lbl_8051D200
.obj lbl_8051D204, local
	.float 15.0
.endobj lbl_8051D204
.obj lbl_8051D208, local
	.float 2.5
.endobj lbl_8051D208
.obj lbl_8051D20C, local
	.float -25.0
.endobj lbl_8051D20C
.obj lbl_8051D210, local
	.float 1.0
.endobj lbl_8051D210
.obj lbl_8051D214, local
	.float 3.0
.endobj lbl_8051D214
.obj lbl_8051D218, local
	.float 200.0
.endobj lbl_8051D218
.obj lbl_8051D21C, local
	.float 40.0
.endobj lbl_8051D21C
.obj lbl_8051D220, local
	.float 25.0
.endobj lbl_8051D220
.obj lbl_8051D224, local
	.float 32768.0
.endobj lbl_8051D224
.obj lbl_8051D228, local
	.float 0.33
.endobj lbl_8051D228
.obj lbl_8051D22C, local
	.float -1000.0
.endobj lbl_8051D22C
.balign 8
.obj lbl_8051D230, local
	.8byte 0x4330000080000000
.endobj lbl_8051D230
.obj lbl_8051D238, local
	.float 325.9493
.endobj lbl_8051D238
.obj lbl_8051D23C, local
	.float -325.9493
.endobj lbl_8051D23C
.obj lbl_8051D240, local
	.float -15.0
.endobj lbl_8051D240
.obj lbl_8051D244, local
	.float 0.27
.endobj lbl_8051D244
.obj lbl_8051D248, local
	.float 10.0
.endobj lbl_8051D248
.obj lbl_8051D24C, local
	.float 0.5
.endobj lbl_8051D24C
.obj lbl_8051D250, local
	.float 480.0
.endobj lbl_8051D250
.obj lbl_8051D254, local
	.float 30.0
.endobj lbl_8051D254
.obj lbl_8051D258, local
	.float 0.67
.endobj lbl_8051D258
.obj lbl_8051D25C, local
	.float 20.0
.endobj lbl_8051D25C
.obj lbl_8051D260, local
	.float 300.0
.endobj lbl_8051D260
.obj lbl_8051D264, local
	.float 0.6
.endobj lbl_8051D264
.obj lbl_8051D268, local
	.float 150.0
.endobj lbl_8051D268
.obj lbl_8051D26C, local
	.float 0.75
.endobj lbl_8051D26C
.obj lbl_8051D270, local
	.float 0.65
.endobj lbl_8051D270
.obj lbl_8051D274, local
	.float 100.0
.endobj lbl_8051D274
.obj lbl_8051D278, local
	.float 220.0
.endobj lbl_8051D278
.obj lbl_8051D27C, local
	.float 170.0
.endobj lbl_8051D27C
.obj lbl_8051D280, local
	.float 2.7
.endobj lbl_8051D280
.obj lbl_8051D284, local
	.float 0.1
.endobj lbl_8051D284
.obj lbl_8051D288, local
	.float 0.02
.endobj lbl_8051D288
.obj lbl_8051D28C, local
	.float 0.25
.endobj lbl_8051D28C
.obj lbl_8051D290, local
	.float 50.0
.endobj lbl_8051D290
.obj lbl_8051D294, local
	.float 0.55
.endobj lbl_8051D294
.obj lbl_8051D298, local # tau
	.float 6.2831855
.endobj lbl_8051D298
.obj lbl_8051D29C, local # four individual bytes, loaded as one word?
	.4byte 0x01010101
.endobj lbl_8051D29C
.obj lbl_8051D2A0, local
	.float 500.0
.endobj lbl_8051D2A0
.obj lbl_8051D2A4, local
	.float 2.0
.endobj lbl_8051D2A4
.obj lbl_8051D2A8, local
	.float 350.0
.endobj lbl_8051D2A8
.obj lbl_8051D2AC, local
	.float 180.0
.endobj lbl_8051D2AC
.obj lbl_8051D2B0, local
	.float 1280.0
.endobj lbl_8051D2B0
.obj lbl_8051D2B4, local
	.float 0.2
.endobj lbl_8051D2B4
.obj lbl_8051D2B8, local
	.float 12.5
.endobj lbl_8051D2B8
.obj lbl_8051D2BC, local
	.float 7.5
.endobj lbl_8051D2BC

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn makeShadowSRT__Q34Game11BigTreasure16AttackShadowNodeFv, global
/* 802F39A8 002F08E8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F39AC 002F08EC  7C 08 02 A6 */	mflr r0
/* 802F39B0 002F08F0  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F39B4 002F08F4  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F39B8 002F08F8  38 81 00 2C */	addi r4, r1, 0x2c
/* 802F39BC 002F08FC  C0 02 EE A4 */	lfs f0, lbl_8051D204@sda21(r2)
/* 802F39C0 002F0900  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 802F39C4 002F0904  7C 7F 1B 78 */	mr r31, r3
/* 802F39C8 002F0908  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 802F39CC 002F090C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802F39D0 002F0910  D0 41 00 08 */	stfs f2, 8(r1)
/* 802F39D4 002F0914  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 802F39D8 002F0918  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 802F39DC 002F091C  D0 21 00 14 */	stfs f1, 0x14(r1)
/* 802F39E0 002F0920  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 802F39E4 002F0924  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802F39E8 002F0928  D0 21 00 20 */	stfs f1, 0x20(r1)
/* 802F39EC 002F092C  D0 21 00 24 */	stfs f1, 0x24(r1)
/* 802F39F0 002F0930  D0 41 00 28 */	stfs f2, 0x28(r1)
/* 802F39F4 002F0934  80 BF 00 24 */	lwz r5, 0x24(r31)
/* 802F39F8 002F0938  C0 45 00 08 */	lfs f2, 8(r5)
/* 802F39FC 002F093C  C0 25 00 04 */	lfs f1, 4(r5)
/* 802F3A00 002F0940  C0 05 00 00 */	lfs f0, 0(r5)
/* 802F3A04 002F0944  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802F3A08 002F0948  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802F3A0C 002F094C  D0 41 00 34 */	stfs f2, 0x34(r1)
/* 802F3A10 002F0950  81 83 00 04 */	lwz r12, 4(r3)
/* 802F3A14 002F0954  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802F3A18 002F0958  7D 89 03 A6 */	mtctr r12
/* 802F3A1C 002F095C  4E 80 04 21 */	bctrl 
/* 802F3A20 002F0960  C0 42 EE A8 */	lfs f2, lbl_8051D208@sda21(r2)
/* 802F3A24 002F0964  C0 01 00 08 */	lfs f0, 8(r1)
/* 802F3A28 002F0968  EC 22 08 2A */	fadds f1, f2, f1
/* 802F3A2C 002F096C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802F3A30 002F0970  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 802F3A34 002F0974  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F3A38 002F0978  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802F3A3C 002F097C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F3A40 002F0980  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802F3A44 002F0984  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802F3A48 002F0988  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 802F3A4C 002F098C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 802F3A50 002F0990  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F3A54 002F0994  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 802F3A58 002F0998  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802F3A5C 002F099C  C0 01 00 1C */	lfs f0, 0x1c(r1)
/* 802F3A60 002F09A0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802F3A64 002F09A4  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 802F3A68 002F09A8  C0 01 00 20 */	lfs f0, 0x20(r1)
/* 802F3A6C 002F09AC  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F3A70 002F09B0  C0 01 00 24 */	lfs f0, 0x24(r1)
/* 802F3A74 002F09B4  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F3A78 002F09B8  C0 01 00 28 */	lfs f0, 0x28(r1)
/* 802F3A7C 002F09BC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F3A80 002F09C0  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 802F3A84 002F09C4  C0 01 00 2C */	lfs f0, 0x2c(r1)
/* 802F3A88 002F09C8  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F3A8C 002F09CC  C0 01 00 30 */	lfs f0, 0x30(r1)
/* 802F3A90 002F09D0  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802F3A94 002F09D4  C0 01 00 34 */	lfs f0, 0x34(r1)
/* 802F3A98 002F09D8  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802F3A9C 002F09DC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802F3AA0 002F09E0  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F3AA4 002F09E4  7C 08 03 A6 */	mtlr r0
/* 802F3AA8 002F09E8  38 21 00 40 */	addi r1, r1, 0x40
/* 802F3AAC 002F09EC  4E 80 00 20 */	blr 
.endfn makeShadowSRT__Q34Game11BigTreasure16AttackShadowNodeFv

.fn update__Q34Game11BigTreasure21BigTreasureFireAttackFv, global
/* 802F3AB0 002F09F0  94 21 FE E0 */	stwu r1, -0x120(r1)
/* 802F3AB4 002F09F4  7C 08 02 A6 */	mflr r0
/* 802F3AB8 002F09F8  90 01 01 24 */	stw r0, 0x124(r1)
/* 802F3ABC 002F09FC  DB E1 01 10 */	stfd f31, 0x110(r1)
/* 802F3AC0 002F0A00  F3 E1 01 18 */	psq_st f31, 280(r1), 0, qr0
/* 802F3AC4 002F0A04  DB C1 01 00 */	stfd f30, 0x100(r1)
/* 802F3AC8 002F0A08  F3 C1 01 08 */	psq_st f30, 264(r1), 0, qr0
/* 802F3ACC 002F0A0C  DB A1 00 F0 */	stfd f29, 0xf0(r1)
/* 802F3AD0 002F0A10  F3 A1 00 F8 */	psq_st f29, 248(r1), 0, qr0
/* 802F3AD4 002F0A14  DB 81 00 E0 */	stfd f28, 0xe0(r1)
/* 802F3AD8 002F0A18  F3 81 00 E8 */	psq_st f28, 232(r1), 0, qr0
/* 802F3ADC 002F0A1C  DB 61 00 D0 */	stfd f27, 0xd0(r1)
/* 802F3AE0 002F0A20  F3 61 00 D8 */	psq_st f27, 216(r1), 0, qr0
/* 802F3AE4 002F0A24  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 802F3AE8 002F0A28  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 802F3AEC 002F0A2C  7C 7E 1B 78 */	mr r30, r3
/* 802F3AF0 002F0A30  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F3AF4 002F0A34  C0 63 00 20 */	lfs f3, 0x20(r3)
/* 802F3AF8 002F0A38  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802F3AFC 002F0A3C  40 80 00 28 */	bge .L_802F3B24
/* 802F3B00 002F0A40  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F3B04 002F0A44  C0 22 EE B4 */	lfs f1, lbl_8051D214@sda21(r2)
/* 802F3B08 002F0A48  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F3B0C 002F0A4C  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 802F3B10 002F0A50  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 802F3B14 002F0A54  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 802F3B18 002F0A58  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802F3B1C 002F0A5C  40 81 00 08 */	ble .L_802F3B24
/* 802F3B20 002F0A60  D0 5E 00 20 */	stfs f2, 0x20(r30)
.L_802F3B24:
/* 802F3B24 002F0A64  80 BE 00 1C */	lwz r5, 0x1c(r30)
/* 802F3B28 002F0A68  38 61 00 54 */	addi r3, r1, 0x54
/* 802F3B2C 002F0A6C  C0 02 EE B8 */	lfs f0, lbl_8051D218@sda21(r2)
/* 802F3B30 002F0A70  38 81 00 30 */	addi r4, r1, 0x30
/* 802F3B34 002F0A74  C0 85 00 28 */	lfs f4, 0x28(r5)
/* 802F3B38 002F0A78  C0 62 EE C0 */	lfs f3, lbl_8051D220@sda21(r2)
/* 802F3B3C 002F0A7C  EC 20 01 32 */	fmuls f1, f0, f4
/* 802F3B40 002F0A80  C0 5E 00 20 */	lfs f2, 0x20(r30)
/* 802F3B44 002F0A84  EC A3 01 32 */	fmuls f5, f3, f4
/* 802F3B48 002F0A88  C0 02 EE BC */	lfs f0, lbl_8051D21C@sda21(r2)
/* 802F3B4C 002F0A8C  C3 FE 00 24 */	lfs f31, 0x24(r30)
/* 802F3B50 002F0A90  EC C2 00 72 */	fmuls f6, f2, f1
/* 802F3B54 002F0A94  C3 DE 00 28 */	lfs f30, 0x28(r30)
/* 802F3B58 002F0A98  EF 80 01 32 */	fmuls f28, f0, f4
/* 802F3B5C 002F0A9C  C3 BE 00 2C */	lfs f29, 0x2c(r30)
/* 802F3B60 002F0AA0  EF 65 01 72 */	fmuls f27, f5, f5
/* 802F3B64 002F0AA4  EF FF 01 B2 */	fmuls f31, f31, f6
/* 802F3B68 002F0AA8  C0 5E 00 30 */	lfs f2, 0x30(r30)
/* 802F3B6C 002F0AAC  EF DE 01 B2 */	fmuls f30, f30, f6
/* 802F3B70 002F0AB0  C0 3E 00 34 */	lfs f1, 0x34(r30)
/* 802F3B74 002F0AB4  EF BD 01 B2 */	fmuls f29, f29, f6
/* 802F3B78 002F0AB8  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 802F3B7C 002F0ABC  EF FF 10 2A */	fadds f31, f31, f2
/* 802F3B80 002F0AC0  EF DE 08 2A */	fadds f30, f30, f1
/* 802F3B84 002F0AC4  D0 61 00 3C */	stfs f3, 0x3c(r1)
/* 802F3B88 002F0AC8  EF BD 00 2A */	fadds f29, f29, f0
/* 802F3B8C 002F0ACC  D3 E1 00 30 */	stfs f31, 0x30(r1)
/* 802F3B90 002F0AD0  D3 C1 00 34 */	stfs f30, 0x34(r1)
/* 802F3B94 002F0AD4  D3 A1 00 38 */	stfs f29, 0x38(r1)
/* 802F3B98 002F0AD8  4B F3 A8 09 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802F3B9C 002F0ADC  38 00 00 01 */	li r0, 1
/* 802F3BA0 002F0AE0  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3BA4 002F0AE4  98 01 00 70 */	stb r0, 0x70(r1)
/* 802F3BA8 002F0AE8  38 81 00 54 */	addi r4, r1, 0x54
/* 802F3BAC 002F0AEC  4B F3 A8 35 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802F3BB0 002F0AF0  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3BB4 002F0AF4  4B F3 A8 A9 */	bl first__Q24Game12CellIteratorFv
/* 802F3BB8 002F0AF8  48 00 02 00 */	b .L_802F3DB8
.L_802F3BBC:
/* 802F3BBC 002F0AFC  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3BC0 002F0B00  4B F3 A9 85 */	bl __ml__Q24Game12CellIteratorFv
/* 802F3BC4 002F0B04  81 83 00 00 */	lwz r12, 0(r3)
/* 802F3BC8 002F0B08  7C 7F 1B 78 */	mr r31, r3
/* 802F3BCC 002F0B0C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F3BD0 002F0B10  7D 89 03 A6 */	mtctr r12
/* 802F3BD4 002F0B14  4E 80 04 21 */	bctrl 
/* 802F3BD8 002F0B18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3BDC 002F0B1C  41 82 01 D4 */	beq .L_802F3DB0
/* 802F3BE0 002F0B20  7F E4 FB 78 */	mr r4, r31
/* 802F3BE4 002F0B24  38 61 00 08 */	addi r3, r1, 8
/* 802F3BE8 002F0B28  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3BEC 002F0B2C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F3BF0 002F0B30  7D 89 03 A6 */	mtctr r12
/* 802F3BF4 002F0B34  4E 80 04 21 */	bctrl 
/* 802F3BF8 002F0B38  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802F3BFC 002F0B3C  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F3C00 002F0B40  EC 3E 08 28 */	fsubs f1, f30, f1
/* 802F3C04 002F0B44  C0 41 00 08 */	lfs f2, 8(r1)
/* 802F3C08 002F0B48  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 802F3C0C 002F0B4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F3C10 002F0B50  40 81 00 08 */	ble .L_802F3C18
/* 802F3C14 002F0B54  48 00 00 08 */	b .L_802F3C1C
.L_802F3C18:
/* 802F3C18 002F0B58  FC 20 08 50 */	fneg f1, f1
.L_802F3C1C:
/* 802F3C1C 002F0B5C  FC 01 E0 40 */	fcmpo cr0, f1, f28
/* 802F3C20 002F0B60  40 80 01 90 */	bge .L_802F3DB0
/* 802F3C24 002F0B64  EC 1D 18 28 */	fsubs f0, f29, f3
/* 802F3C28 002F0B68  EC 3F 10 28 */	fsubs f1, f31, f2
/* 802F3C2C 002F0B6C  EC 00 00 32 */	fmuls f0, f0, f0
/* 802F3C30 002F0B70  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802F3C34 002F0B74  FC 00 D8 40 */	fcmpo cr0, f0, f27
/* 802F3C38 002F0B78  40 80 01 78 */	bge .L_802F3DB0
/* 802F3C3C 002F0B7C  80 FE 00 18 */	lwz r7, 0x18(r30)
/* 802F3C40 002F0B80  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802F3C44 002F0B84  3C 80 80 4B */	lis r4, __vt__Q24Game12InteractFire@ha
/* 802F3C48 002F0B88  7F E3 FB 78 */	mr r3, r31
/* 802F3C4C 002F0B8C  80 C7 00 C0 */	lwz r6, 0xc0(r7)
/* 802F3C50 002F0B90  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 802F3C54 002F0B94  38 04 48 78 */	addi r0, r4, __vt__Q24Game12InteractFire@l
/* 802F3C58 002F0B98  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 802F3C5C 002F0B9C  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802F3C60 002F0BA0  90 E1 00 28 */	stw r7, 0x28(r1)
/* 802F3C64 002F0BA4  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F3C68 002F0BA8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802F3C6C 002F0BAC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3C70 002F0BB0  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F3C74 002F0BB4  7D 89 03 A6 */	mtctr r12
/* 802F3C78 002F0BB8  4E 80 04 21 */	bctrl 
/* 802F3C7C 002F0BBC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3C80 002F0BC0  41 82 00 FC */	beq .L_802F3D7C
/* 802F3C84 002F0BC4  7F E3 FB 78 */	mr r3, r31
/* 802F3C88 002F0BC8  38 81 00 24 */	addi r4, r1, 0x24
/* 802F3C8C 002F0BCC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3C90 002F0BD0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F3C94 002F0BD4  7D 89 03 A6 */	mtctr r12
/* 802F3C98 002F0BD8  4E 80 04 21 */	bctrl 
/* 802F3C9C 002F0BDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3CA0 002F0BE0  40 82 01 10 */	bne .L_802F3DB0
/* 802F3CA4 002F0BE4  4B DD 58 FD */	bl rand
/* 802F3CA8 002F0BE8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F3CAC 002F0BEC  3C 00 43 30 */	lis r0, 0x4330
/* 802F3CB0 002F0BF0  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 802F3CB4 002F0BF4  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F3CB8 002F0BF8  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 802F3CBC 002F0BFC  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F3CC0 002F0C00  C8 01 00 C0 */	lfd f0, 0xc0(r1)
/* 802F3CC4 002F0C04  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F3CC8 002F0C08  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F3CCC 002F0C0C  C0 02 EE C8 */	lfs f0, lbl_8051D228@sda21(r2)
/* 802F3CD0 002F0C10  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F3CD4 002F0C14  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F3CD8 002F0C18  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F3CDC 002F0C1C  40 80 00 54 */	bge .L_802F3D30
/* 802F3CE0 002F0C20  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 802F3CE4 002F0C24  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F3CE8 002F0C28  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F3CEC 002F0C2C  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F3CF0 002F0C30  C0 02 EE CC */	lfs f0, lbl_8051D22C@sda21(r2)
/* 802F3CF4 002F0C34  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 802F3CF8 002F0C38  90 01 00 40 */	stw r0, 0x40(r1)
/* 802F3CFC 002F0C3C  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 802F3D00 002F0C40  7F E3 FB 78 */	mr r3, r31
/* 802F3D04 002F0C44  38 81 00 40 */	addi r4, r1, 0x40
/* 802F3D08 002F0C48  90 A1 00 44 */	stw r5, 0x44(r1)
/* 802F3D0C 002F0C4C  90 01 00 40 */	stw r0, 0x40(r1)
/* 802F3D10 002F0C50  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802F3D14 002F0C54  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 802F3D18 002F0C58  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 802F3D1C 002F0C5C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3D20 002F0C60  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F3D24 002F0C64  7D 89 03 A6 */	mtctr r12
/* 802F3D28 002F0C68  4E 80 04 21 */	bctrl 
/* 802F3D2C 002F0C6C  48 00 00 84 */	b .L_802F3DB0
.L_802F3D30:
/* 802F3D30 002F0C70  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 802F3D34 002F0C74  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F3D38 002F0C78  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F3D3C 002F0C7C  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F3D40 002F0C80  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 802F3D44 002F0C84  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F3D48 002F0C88  38 A3 4D E0 */	addi r5, r3, __vt__Q24Game14InteractAttack@l
/* 802F3D4C 002F0C8C  38 00 00 00 */	li r0, 0
/* 802F3D50 002F0C90  90 81 00 18 */	stw r4, 0x18(r1)
/* 802F3D54 002F0C94  7F E3 FB 78 */	mr r3, r31
/* 802F3D58 002F0C98  38 81 00 14 */	addi r4, r1, 0x14
/* 802F3D5C 002F0C9C  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802F3D60 002F0CA0  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802F3D64 002F0CA4  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F3D68 002F0CA8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3D6C 002F0CAC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F3D70 002F0CB0  7D 89 03 A6 */	mtctr r12
/* 802F3D74 002F0CB4  4E 80 04 21 */	bctrl 
/* 802F3D78 002F0CB8  48 00 00 38 */	b .L_802F3DB0
.L_802F3D7C:
/* 802F3D7C 002F0CBC  7F E3 FB 78 */	mr r3, r31
/* 802F3D80 002F0CC0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3D84 002F0CC4  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F3D88 002F0CC8  7D 89 03 A6 */	mtctr r12
/* 802F3D8C 002F0CCC  4E 80 04 21 */	bctrl 
/* 802F3D90 002F0CD0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3D94 002F0CD4  41 82 00 1C */	beq .L_802F3DB0
/* 802F3D98 002F0CD8  7F E3 FB 78 */	mr r3, r31
/* 802F3D9C 002F0CDC  38 81 00 24 */	addi r4, r1, 0x24
/* 802F3DA0 002F0CE0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3DA4 002F0CE4  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F3DA8 002F0CE8  7D 89 03 A6 */	mtctr r12
/* 802F3DAC 002F0CEC  4E 80 04 21 */	bctrl 
.L_802F3DB0:
/* 802F3DB0 002F0CF0  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3DB4 002F0CF4  4B F3 A7 4D */	bl next__Q24Game12CellIteratorFv
.L_802F3DB8:
/* 802F3DB8 002F0CF8  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3DBC 002F0CFC  4B F3 A7 79 */	bl isDone__Q24Game12CellIteratorFv
/* 802F3DC0 002F0D00  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3DC4 002F0D04  41 82 FD F8 */	beq .L_802F3BBC
/* 802F3DC8 002F0D08  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 802F3DCC 002F0D0C  C0 02 EE B0 */	lfs f0, lbl_8051D210@sda21(r2)
/* 802F3DD0 002F0D10  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F3DD4 002F0D14  7C 00 00 26 */	mfcr r0
/* 802F3DD8 002F0D18  54 00 0F FE */	srwi r0, r0, 0x1f
/* 802F3DDC 002F0D1C  7C 00 00 34 */	cntlzw r0, r0
/* 802F3DE0 002F0D20  54 03 D9 7E */	srwi r3, r0, 5
/* 802F3DE4 002F0D24  E3 E1 01 18 */	psq_l f31, 280(r1), 0, qr0
/* 802F3DE8 002F0D28  CB E1 01 10 */	lfd f31, 0x110(r1)
/* 802F3DEC 002F0D2C  E3 C1 01 08 */	psq_l f30, 264(r1), 0, qr0
/* 802F3DF0 002F0D30  CB C1 01 00 */	lfd f30, 0x100(r1)
/* 802F3DF4 002F0D34  E3 A1 00 F8 */	psq_l f29, 248(r1), 0, qr0
/* 802F3DF8 002F0D38  CB A1 00 F0 */	lfd f29, 0xf0(r1)
/* 802F3DFC 002F0D3C  E3 81 00 E8 */	psq_l f28, 232(r1), 0, qr0
/* 802F3E00 002F0D40  CB 81 00 E0 */	lfd f28, 0xe0(r1)
/* 802F3E04 002F0D44  E3 61 00 D8 */	psq_l f27, 216(r1), 0, qr0
/* 802F3E08 002F0D48  CB 61 00 D0 */	lfd f27, 0xd0(r1)
/* 802F3E0C 002F0D4C  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 802F3E10 002F0D50  80 01 01 24 */	lwz r0, 0x124(r1)
/* 802F3E14 002F0D54  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 802F3E18 002F0D58  7C 08 03 A6 */	mtlr r0
/* 802F3E1C 002F0D5C  38 21 01 20 */	addi r1, r1, 0x120
/* 802F3E20 002F0D60  4E 80 00 20 */	blr 
.endfn update__Q34Game11BigTreasure21BigTreasureFireAttackFv

.fn update__Q34Game11BigTreasure20BigTreasureGasAttackFv, global
/* 802F3E24 002F0D64  94 21 FE F0 */	stwu r1, -0x110(r1)
/* 802F3E28 002F0D68  7C 08 02 A6 */	mflr r0
/* 802F3E2C 002F0D6C  90 01 01 14 */	stw r0, 0x114(r1)
/* 802F3E30 002F0D70  DB E1 01 00 */	stfd f31, 0x100(r1)
/* 802F3E34 002F0D74  F3 E1 01 08 */	psq_st f31, 264(r1), 0, qr0
/* 802F3E38 002F0D78  DB C1 00 F0 */	stfd f30, 0xf0(r1)
/* 802F3E3C 002F0D7C  F3 C1 00 F8 */	psq_st f30, 248(r1), 0, qr0
/* 802F3E40 002F0D80  DB A1 00 E0 */	stfd f29, 0xe0(r1)
/* 802F3E44 002F0D84  F3 A1 00 E8 */	psq_st f29, 232(r1), 0, qr0
/* 802F3E48 002F0D88  DB 81 00 D0 */	stfd f28, 0xd0(r1)
/* 802F3E4C 002F0D8C  F3 81 00 D8 */	psq_st f28, 216(r1), 0, qr0
/* 802F3E50 002F0D90  93 E1 00 CC */	stw r31, 0xcc(r1)
/* 802F3E54 002F0D94  93 C1 00 C8 */	stw r30, 0xc8(r1)
/* 802F3E58 002F0D98  7C 7E 1B 78 */	mr r30, r3
/* 802F3E5C 002F0D9C  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F3E60 002F0DA0  C0 63 00 20 */	lfs f3, 0x20(r3)
/* 802F3E64 002F0DA4  FC 03 10 40 */	fcmpo cr0, f3, f2
/* 802F3E68 002F0DA8  40 80 00 28 */	bge .L_802F3E90
/* 802F3E6C 002F0DAC  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F3E70 002F0DB0  C0 22 EE E4 */	lfs f1, lbl_8051D244@sda21(r2)
/* 802F3E74 002F0DB4  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F3E78 002F0DB8  EC 01 18 3A */	fmadds f0, f1, f0, f3
/* 802F3E7C 002F0DBC  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 802F3E80 002F0DC0  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 802F3E84 002F0DC4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802F3E88 002F0DC8  40 81 00 08 */	ble .L_802F3E90
/* 802F3E8C 002F0DCC  D0 5E 00 20 */	stfs f2, 0x20(r30)
.L_802F3E90:
/* 802F3E90 002F0DD0  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 802F3E94 002F0DD4  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F3E98 002F0DD8  C3 82 EE E8 */	lfs f28, lbl_8051D248@sda21(r2)
/* 802F3E9C 002F0DDC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F3EA0 002F0DE0  40 81 00 08 */	ble .L_802F3EA8
/* 802F3EA4 002F0DE4  C3 82 EE A4 */	lfs f28, lbl_8051D204@sda21(r2)
.L_802F3EA8:
/* 802F3EA8 002F0DE8  C0 02 EE F0 */	lfs f0, lbl_8051D250@sda21(r2)
/* 802F3EAC 002F0DEC  EF 9C 07 32 */	fmuls f28, f28, f28
/* 802F3EB0 002F0DF0  C3 FE 00 24 */	lfs f31, 0x24(r30)
/* 802F3EB4 002F0DF4  38 61 00 54 */	addi r3, r1, 0x54
/* 802F3EB8 002F0DF8  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F3EBC 002F0DFC  C3 DE 00 28 */	lfs f30, 0x28(r30)
/* 802F3EC0 002F0E00  C3 BE 00 2C */	lfs f29, 0x2c(r30)
/* 802F3EC4 002F0E04  C0 5E 00 30 */	lfs f2, 0x30(r30)
/* 802F3EC8 002F0E08  38 81 00 30 */	addi r4, r1, 0x30
/* 802F3ECC 002F0E0C  EF FF 00 32 */	fmuls f31, f31, f0
/* 802F3ED0 002F0E10  EF DE 00 32 */	fmuls f30, f30, f0
/* 802F3ED4 002F0E14  C0 3E 00 34 */	lfs f1, 0x34(r30)
/* 802F3ED8 002F0E18  EF BD 00 32 */	fmuls f29, f29, f0
/* 802F3EDC 002F0E1C  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 802F3EE0 002F0E20  EF FF 10 2A */	fadds f31, f31, f2
/* 802F3EE4 002F0E24  EF DE 08 2A */	fadds f30, f30, f1
/* 802F3EE8 002F0E28  EF BD 00 2A */	fadds f29, f29, f0
/* 802F3EEC 002F0E2C  C0 02 EE A4 */	lfs f0, lbl_8051D204@sda21(r2)
/* 802F3EF0 002F0E30  D3 E1 00 30 */	stfs f31, 0x30(r1)
/* 802F3EF4 002F0E34  D3 C1 00 34 */	stfs f30, 0x34(r1)
/* 802F3EF8 002F0E38  D3 A1 00 38 */	stfs f29, 0x38(r1)
/* 802F3EFC 002F0E3C  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 802F3F00 002F0E40  4B F3 A4 A1 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802F3F04 002F0E44  38 00 00 01 */	li r0, 1
/* 802F3F08 002F0E48  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3F0C 002F0E4C  98 01 00 70 */	stb r0, 0x70(r1)
/* 802F3F10 002F0E50  38 81 00 54 */	addi r4, r1, 0x54
/* 802F3F14 002F0E54  4B F3 A4 CD */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802F3F18 002F0E58  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3F1C 002F0E5C  4B F3 A5 41 */	bl first__Q24Game12CellIteratorFv
/* 802F3F20 002F0E60  48 00 02 04 */	b .L_802F4124
.L_802F3F24:
/* 802F3F24 002F0E64  38 61 00 74 */	addi r3, r1, 0x74
/* 802F3F28 002F0E68  4B F3 A6 1D */	bl __ml__Q24Game12CellIteratorFv
/* 802F3F2C 002F0E6C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F3F30 002F0E70  7C 7F 1B 78 */	mr r31, r3
/* 802F3F34 002F0E74  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F3F38 002F0E78  7D 89 03 A6 */	mtctr r12
/* 802F3F3C 002F0E7C  4E 80 04 21 */	bctrl 
/* 802F3F40 002F0E80  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3F44 002F0E84  41 82 01 D8 */	beq .L_802F411C
/* 802F3F48 002F0E88  7F E4 FB 78 */	mr r4, r31
/* 802F3F4C 002F0E8C  38 61 00 08 */	addi r3, r1, 8
/* 802F3F50 002F0E90  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3F54 002F0E94  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F3F58 002F0E98  7D 89 03 A6 */	mtctr r12
/* 802F3F5C 002F0E9C  4E 80 04 21 */	bctrl 
/* 802F3F60 002F0EA0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802F3F64 002F0EA4  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F3F68 002F0EA8  EC 3E 08 28 */	fsubs f1, f30, f1
/* 802F3F6C 002F0EAC  C0 41 00 08 */	lfs f2, 8(r1)
/* 802F3F70 002F0EB0  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 802F3F74 002F0EB4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F3F78 002F0EB8  40 81 00 08 */	ble .L_802F3F80
/* 802F3F7C 002F0EBC  48 00 00 08 */	b .L_802F3F84
.L_802F3F80:
/* 802F3F80 002F0EC0  FC 20 08 50 */	fneg f1, f1
.L_802F3F84:
/* 802F3F84 002F0EC4  C0 02 EE F4 */	lfs f0, lbl_8051D254@sda21(r2)
/* 802F3F88 002F0EC8  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F3F8C 002F0ECC  40 80 01 90 */	bge .L_802F411C
/* 802F3F90 002F0ED0  EC 1D 18 28 */	fsubs f0, f29, f3
/* 802F3F94 002F0ED4  EC 3F 10 28 */	fsubs f1, f31, f2
/* 802F3F98 002F0ED8  EC 00 00 32 */	fmuls f0, f0, f0
/* 802F3F9C 002F0EDC  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802F3FA0 002F0EE0  FC 00 E0 40 */	fcmpo cr0, f0, f28
/* 802F3FA4 002F0EE4  40 80 01 78 */	bge .L_802F411C
/* 802F3FA8 002F0EE8  80 FE 00 18 */	lwz r7, 0x18(r30)
/* 802F3FAC 002F0EEC  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802F3FB0 002F0EF0  3C 80 80 4B */	lis r4, __vt__Q24Game11InteractGas@ha
/* 802F3FB4 002F0EF4  7F E3 FB 78 */	mr r3, r31
/* 802F3FB8 002F0EF8  80 C7 00 C0 */	lwz r6, 0xc0(r7)
/* 802F3FBC 002F0EFC  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 802F3FC0 002F0F00  38 04 48 0C */	addi r0, r4, __vt__Q24Game11InteractGas@l
/* 802F3FC4 002F0F04  C0 06 06 04 */	lfs f0, 0x604(r6)
/* 802F3FC8 002F0F08  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802F3FCC 002F0F0C  90 E1 00 28 */	stw r7, 0x28(r1)
/* 802F3FD0 002F0F10  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F3FD4 002F0F14  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802F3FD8 002F0F18  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3FDC 002F0F1C  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F3FE0 002F0F20  7D 89 03 A6 */	mtctr r12
/* 802F3FE4 002F0F24  4E 80 04 21 */	bctrl 
/* 802F3FE8 002F0F28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F3FEC 002F0F2C  41 82 00 FC */	beq .L_802F40E8
/* 802F3FF0 002F0F30  7F E3 FB 78 */	mr r3, r31
/* 802F3FF4 002F0F34  38 81 00 24 */	addi r4, r1, 0x24
/* 802F3FF8 002F0F38  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F3FFC 002F0F3C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4000 002F0F40  7D 89 03 A6 */	mtctr r12
/* 802F4004 002F0F44  4E 80 04 21 */	bctrl 
/* 802F4008 002F0F48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F400C 002F0F4C  40 82 01 10 */	bne .L_802F411C
/* 802F4010 002F0F50  4B DD 55 91 */	bl rand
/* 802F4014 002F0F54  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F4018 002F0F58  3C 00 43 30 */	lis r0, 0x4330
/* 802F401C 002F0F5C  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 802F4020 002F0F60  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F4024 002F0F64  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 802F4028 002F0F68  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F402C 002F0F6C  C8 01 00 C0 */	lfd f0, 0xc0(r1)
/* 802F4030 002F0F70  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F4034 002F0F74  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F4038 002F0F78  C0 02 EE F8 */	lfs f0, lbl_8051D258@sda21(r2)
/* 802F403C 002F0F7C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F4040 002F0F80  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F4044 002F0F84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F4048 002F0F88  40 80 00 54 */	bge .L_802F409C
/* 802F404C 002F0F8C  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 802F4050 002F0F90  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F4054 002F0F94  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F4058 002F0F98  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F405C 002F0F9C  C0 02 EE CC */	lfs f0, lbl_8051D22C@sda21(r2)
/* 802F4060 002F0FA0  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 802F4064 002F0FA4  90 01 00 40 */	stw r0, 0x40(r1)
/* 802F4068 002F0FA8  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 802F406C 002F0FAC  7F E3 FB 78 */	mr r3, r31
/* 802F4070 002F0FB0  38 81 00 40 */	addi r4, r1, 0x40
/* 802F4074 002F0FB4  90 A1 00 44 */	stw r5, 0x44(r1)
/* 802F4078 002F0FB8  90 01 00 40 */	stw r0, 0x40(r1)
/* 802F407C 002F0FBC  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802F4080 002F0FC0  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 802F4084 002F0FC4  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 802F4088 002F0FC8  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F408C 002F0FCC  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4090 002F0FD0  7D 89 03 A6 */	mtctr r12
/* 802F4094 002F0FD4  4E 80 04 21 */	bctrl 
/* 802F4098 002F0FD8  48 00 00 84 */	b .L_802F411C
.L_802F409C:
/* 802F409C 002F0FDC  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 802F40A0 002F0FE0  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F40A4 002F0FE4  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F40A8 002F0FE8  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F40AC 002F0FEC  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 802F40B0 002F0FF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F40B4 002F0FF4  38 A3 4D E0 */	addi r5, r3, __vt__Q24Game14InteractAttack@l
/* 802F40B8 002F0FF8  38 00 00 00 */	li r0, 0
/* 802F40BC 002F0FFC  90 81 00 18 */	stw r4, 0x18(r1)
/* 802F40C0 002F1000  7F E3 FB 78 */	mr r3, r31
/* 802F40C4 002F1004  38 81 00 14 */	addi r4, r1, 0x14
/* 802F40C8 002F1008  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802F40CC 002F100C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802F40D0 002F1010  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F40D4 002F1014  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F40D8 002F1018  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F40DC 002F101C  7D 89 03 A6 */	mtctr r12
/* 802F40E0 002F1020  4E 80 04 21 */	bctrl 
/* 802F40E4 002F1024  48 00 00 38 */	b .L_802F411C
.L_802F40E8:
/* 802F40E8 002F1028  7F E3 FB 78 */	mr r3, r31
/* 802F40EC 002F102C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F40F0 002F1030  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F40F4 002F1034  7D 89 03 A6 */	mtctr r12
/* 802F40F8 002F1038  4E 80 04 21 */	bctrl 
/* 802F40FC 002F103C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4100 002F1040  41 82 00 1C */	beq .L_802F411C
/* 802F4104 002F1044  7F E3 FB 78 */	mr r3, r31
/* 802F4108 002F1048  38 81 00 24 */	addi r4, r1, 0x24
/* 802F410C 002F104C  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4110 002F1050  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4114 002F1054  7D 89 03 A6 */	mtctr r12
/* 802F4118 002F1058  4E 80 04 21 */	bctrl 
.L_802F411C:
/* 802F411C 002F105C  38 61 00 74 */	addi r3, r1, 0x74
/* 802F4120 002F1060  4B F3 A3 E1 */	bl next__Q24Game12CellIteratorFv
.L_802F4124:
/* 802F4124 002F1064  38 61 00 74 */	addi r3, r1, 0x74
/* 802F4128 002F1068  4B F3 A4 0D */	bl isDone__Q24Game12CellIteratorFv
/* 802F412C 002F106C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4130 002F1070  41 82 FD F4 */	beq .L_802F3F24
/* 802F4134 002F1074  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 802F4138 002F1078  C0 02 EE B0 */	lfs f0, lbl_8051D210@sda21(r2)
/* 802F413C 002F107C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F4140 002F1080  7C 00 00 26 */	mfcr r0
/* 802F4144 002F1084  54 00 0F FE */	srwi r0, r0, 0x1f
/* 802F4148 002F1088  7C 00 00 34 */	cntlzw r0, r0
/* 802F414C 002F108C  54 03 D9 7E */	srwi r3, r0, 5
/* 802F4150 002F1090  E3 E1 01 08 */	psq_l f31, 264(r1), 0, qr0
/* 802F4154 002F1094  CB E1 01 00 */	lfd f31, 0x100(r1)
/* 802F4158 002F1098  E3 C1 00 F8 */	psq_l f30, 248(r1), 0, qr0
/* 802F415C 002F109C  CB C1 00 F0 */	lfd f30, 0xf0(r1)
/* 802F4160 002F10A0  E3 A1 00 E8 */	psq_l f29, 232(r1), 0, qr0
/* 802F4164 002F10A4  CB A1 00 E0 */	lfd f29, 0xe0(r1)
/* 802F4168 002F10A8  E3 81 00 D8 */	psq_l f28, 216(r1), 0, qr0
/* 802F416C 002F10AC  CB 81 00 D0 */	lfd f28, 0xd0(r1)
/* 802F4170 002F10B0  83 E1 00 CC */	lwz r31, 0xcc(r1)
/* 802F4174 002F10B4  80 01 01 14 */	lwz r0, 0x114(r1)
/* 802F4178 002F10B8  83 C1 00 C8 */	lwz r30, 0xc8(r1)
/* 802F417C 002F10BC  7C 08 03 A6 */	mtlr r0
/* 802F4180 002F10C0  38 21 01 10 */	addi r1, r1, 0x110
/* 802F4184 002F10C4  4E 80 00 20 */	blr 
.endfn update__Q34Game11BigTreasure20BigTreasureGasAttackFv

.fn update__Q34Game11BigTreasure22BigTreasureWaterAttackFv, global
/* 802F4188 002F10C8  94 21 FF 10 */	stwu r1, -0xf0(r1)
/* 802F418C 002F10CC  7C 08 02 A6 */	mflr r0
/* 802F4190 002F10D0  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 802F4194 002F10D4  DB E1 00 E0 */	stfd f31, 0xe0(r1)
/* 802F4198 002F10D8  F3 E1 00 E8 */	psq_st f31, 232(r1), 0, qr0
/* 802F419C 002F10DC  93 E1 00 DC */	stw r31, 0xdc(r1)
/* 802F41A0 002F10E0  93 C1 00 D8 */	stw r30, 0xd8(r1)
/* 802F41A4 002F10E4  93 A1 00 D4 */	stw r29, 0xd4(r1)
/* 802F41A8 002F10E8  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802F41AC 002F10EC  7C 7D 1B 78 */	mr r29, r3
/* 802F41B0 002F10F0  C0 02 EE FC */	lfs f0, lbl_8051D25C@sda21(r2)
/* 802F41B4 002F10F4  38 9D 00 2C */	addi r4, r29, 0x2c
/* 802F41B8 002F10F8  C0 63 00 20 */	lfs f3, 0x20(r3)
/* 802F41BC 002F10FC  3B E0 00 00 */	li r31, 0
/* 802F41C0 002F1100  C0 45 00 54 */	lfs f2, 0x54(r5)
/* 802F41C4 002F1104  FF E0 00 90 */	fmr f31, f0
/* 802F41C8 002F1108  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 802F41CC 002F110C  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802F41D0 002F1110  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 802F41D4 002F1114  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F41D8 002F1118  C0 7D 00 24 */	lfs f3, 0x24(r29)
/* 802F41DC 002F111C  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 802F41E0 002F1120  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 802F41E4 002F1124  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802F41E8 002F1128  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 802F41EC 002F112C  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F41F0 002F1130  C0 7D 00 28 */	lfs f3, 0x28(r29)
/* 802F41F4 002F1134  C0 43 00 54 */	lfs f2, 0x54(r3)
/* 802F41F8 002F1138  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 802F41FC 002F113C  EC 23 08 BA */	fmadds f1, f3, f2, f1
/* 802F4200 002F1140  D0 3D 00 34 */	stfs f1, 0x34(r29)
/* 802F4204 002F1144  C0 3D 00 24 */	lfs f1, 0x24(r29)
/* 802F4208 002F1148  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F420C 002F114C  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 802F4210 002F1150  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802F4214 002F1154  81 83 00 04 */	lwz r12, 4(r3)
/* 802F4218 002F1158  81 8C 00 28 */	lwz r12, 0x28(r12)
/* 802F421C 002F115C  7D 89 03 A6 */	mtctr r12
/* 802F4220 002F1160  4E 80 04 21 */	bctrl 
/* 802F4224 002F1164  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 802F4228 002F1168  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802F422C 002F116C  40 80 00 10 */	bge .L_802F423C
/* 802F4230 002F1170  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 802F4234 002F1174  3B E0 00 01 */	li r31, 1
/* 802F4238 002F1178  C3 E2 EE F4 */	lfs f31, lbl_8051D254@sda21(r2)
.L_802F423C:
/* 802F423C 002F117C  C0 3D 00 2C */	lfs f1, 0x2c(r29)
/* 802F4240 002F1180  EF FF 07 F2 */	fmuls f31, f31, f31
/* 802F4244 002F1184  C0 02 EE F4 */	lfs f0, lbl_8051D254@sda21(r2)
/* 802F4248 002F1188  38 61 00 54 */	addi r3, r1, 0x54
/* 802F424C 002F118C  D0 21 00 30 */	stfs f1, 0x30(r1)
/* 802F4250 002F1190  38 81 00 30 */	addi r4, r1, 0x30
/* 802F4254 002F1194  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 802F4258 002F1198  D0 21 00 34 */	stfs f1, 0x34(r1)
/* 802F425C 002F119C  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 802F4260 002F11A0  D0 21 00 38 */	stfs f1, 0x38(r1)
/* 802F4264 002F11A4  D0 01 00 3C */	stfs f0, 0x3c(r1)
/* 802F4268 002F11A8  4B F3 A1 39 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802F426C 002F11AC  38 00 00 01 */	li r0, 1
/* 802F4270 002F11B0  38 61 00 74 */	addi r3, r1, 0x74
/* 802F4274 002F11B4  98 01 00 70 */	stb r0, 0x70(r1)
/* 802F4278 002F11B8  38 81 00 54 */	addi r4, r1, 0x54
/* 802F427C 002F11BC  4B F3 A1 65 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802F4280 002F11C0  38 61 00 74 */	addi r3, r1, 0x74
/* 802F4284 002F11C4  4B F3 A1 D9 */	bl first__Q24Game12CellIteratorFv
/* 802F4288 002F11C8  48 00 01 EC */	b .L_802F4474
.L_802F428C:
/* 802F428C 002F11CC  38 61 00 74 */	addi r3, r1, 0x74
/* 802F4290 002F11D0  4B F3 A2 B5 */	bl __ml__Q24Game12CellIteratorFv
/* 802F4294 002F11D4  81 83 00 00 */	lwz r12, 0(r3)
/* 802F4298 002F11D8  7C 7E 1B 78 */	mr r30, r3
/* 802F429C 002F11DC  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F42A0 002F11E0  7D 89 03 A6 */	mtctr r12
/* 802F42A4 002F11E4  4E 80 04 21 */	bctrl 
/* 802F42A8 002F11E8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F42AC 002F11EC  41 82 01 C0 */	beq .L_802F446C
/* 802F42B0 002F11F0  7F C4 F3 78 */	mr r4, r30
/* 802F42B4 002F11F4  38 61 00 08 */	addi r3, r1, 8
/* 802F42B8 002F11F8  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F42BC 002F11FC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F42C0 002F1200  7D 89 03 A6 */	mtctr r12
/* 802F42C4 002F1204  4E 80 04 21 */	bctrl 
/* 802F42C8 002F1208  C0 3D 00 30 */	lfs f1, 0x30(r29)
/* 802F42CC 002F120C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 802F42D0 002F1210  C0 7D 00 2C */	lfs f3, 0x2c(r29)
/* 802F42D4 002F1214  EC 81 00 28 */	fsubs f4, f1, f0
/* 802F42D8 002F1218  C0 01 00 08 */	lfs f0, 8(r1)
/* 802F42DC 002F121C  C0 5D 00 34 */	lfs f2, 0x34(r29)
/* 802F42E0 002F1220  EC 63 00 28 */	fsubs f3, f3, f0
/* 802F42E4 002F1224  C0 21 00 10 */	lfs f1, 0x10(r1)
/* 802F42E8 002F1228  EC 04 01 32 */	fmuls f0, f4, f4
/* 802F42EC 002F122C  EC 22 08 28 */	fsubs f1, f2, f1
/* 802F42F0 002F1230  EC 03 00 FA */	fmadds f0, f3, f3, f0
/* 802F42F4 002F1234  EC 01 00 7A */	fmadds f0, f1, f1, f0
/* 802F42F8 002F1238  FC 00 F8 40 */	fcmpo cr0, f0, f31
/* 802F42FC 002F123C  40 80 01 70 */	bge .L_802F446C
/* 802F4300 002F1240  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 802F4304 002F1244  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F4308 002F1248  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F430C 002F124C  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F4310 002F1250  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractBubble@ha
/* 802F4314 002F1254  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F4318 002F1258  38 03 48 30 */	addi r0, r3, __vt__Q24Game14InteractBubble@l
/* 802F431C 002F125C  7F C3 F3 78 */	mr r3, r30
/* 802F4320 002F1260  90 81 00 28 */	stw r4, 0x28(r1)
/* 802F4324 002F1264  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F4328 002F1268  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 802F432C 002F126C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F4330 002F1270  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F4334 002F1274  7D 89 03 A6 */	mtctr r12
/* 802F4338 002F1278  4E 80 04 21 */	bctrl 
/* 802F433C 002F127C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4340 002F1280  41 82 00 F8 */	beq .L_802F4438
/* 802F4344 002F1284  7F C3 F3 78 */	mr r3, r30
/* 802F4348 002F1288  38 81 00 24 */	addi r4, r1, 0x24
/* 802F434C 002F128C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F4350 002F1290  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4354 002F1294  7D 89 03 A6 */	mtctr r12
/* 802F4358 002F1298  4E 80 04 21 */	bctrl 
/* 802F435C 002F129C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4360 002F12A0  40 82 01 0C */	bne .L_802F446C
/* 802F4364 002F12A4  4B DD 52 3D */	bl rand
/* 802F4368 002F12A8  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F436C 002F12AC  3C 00 43 30 */	lis r0, 0x4330
/* 802F4370 002F12B0  90 61 00 C4 */	stw r3, 0xc4(r1)
/* 802F4374 002F12B4  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F4378 002F12B8  90 01 00 C0 */	stw r0, 0xc0(r1)
/* 802F437C 002F12BC  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F4380 002F12C0  C8 21 00 C0 */	lfd f1, 0xc0(r1)
/* 802F4384 002F12C4  C0 02 EE C4 */	lfs f0, lbl_8051D224@sda21(r2)
/* 802F4388 002F12C8  EC 21 18 28 */	fsubs f1, f1, f3
/* 802F438C 002F12CC  EC 22 00 72 */	fmuls f1, f2, f1
/* 802F4390 002F12D0  EC 01 00 24 */	fdivs f0, f1, f0
/* 802F4394 002F12D4  FC 00 10 40 */	fcmpo cr0, f0, f2
/* 802F4398 002F12D8  40 80 00 54 */	bge .L_802F43EC
/* 802F439C 002F12DC  80 BD 00 18 */	lwz r5, 0x18(r29)
/* 802F43A0 002F12E0  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F43A4 002F12E4  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F43A8 002F12E8  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F43AC 002F12EC  C0 02 EE CC */	lfs f0, lbl_8051D22C@sda21(r2)
/* 802F43B0 002F12F0  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 802F43B4 002F12F4  90 01 00 40 */	stw r0, 0x40(r1)
/* 802F43B8 002F12F8  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 802F43BC 002F12FC  7F C3 F3 78 */	mr r3, r30
/* 802F43C0 002F1300  38 81 00 40 */	addi r4, r1, 0x40
/* 802F43C4 002F1304  90 A1 00 44 */	stw r5, 0x44(r1)
/* 802F43C8 002F1308  90 01 00 40 */	stw r0, 0x40(r1)
/* 802F43CC 002F130C  D0 21 00 48 */	stfs f1, 0x48(r1)
/* 802F43D0 002F1310  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 802F43D4 002F1314  D0 01 00 50 */	stfs f0, 0x50(r1)
/* 802F43D8 002F1318  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F43DC 002F131C  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F43E0 002F1320  7D 89 03 A6 */	mtctr r12
/* 802F43E4 002F1324  4E 80 04 21 */	bctrl 
/* 802F43E8 002F1328  48 00 00 84 */	b .L_802F446C
.L_802F43EC:
/* 802F43EC 002F132C  80 9D 00 18 */	lwz r4, 0x18(r29)
/* 802F43F0 002F1330  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F43F4 002F1334  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F43F8 002F1338  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F43FC 002F133C  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 802F4400 002F1340  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F4404 002F1344  38 A3 4D E0 */	addi r5, r3, __vt__Q24Game14InteractAttack@l
/* 802F4408 002F1348  38 00 00 00 */	li r0, 0
/* 802F440C 002F134C  90 81 00 18 */	stw r4, 0x18(r1)
/* 802F4410 002F1350  7F C3 F3 78 */	mr r3, r30
/* 802F4414 002F1354  38 81 00 14 */	addi r4, r1, 0x14
/* 802F4418 002F1358  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802F441C 002F135C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802F4420 002F1360  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F4424 002F1364  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F4428 002F1368  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F442C 002F136C  7D 89 03 A6 */	mtctr r12
/* 802F4430 002F1370  4E 80 04 21 */	bctrl 
/* 802F4434 002F1374  48 00 00 38 */	b .L_802F446C
.L_802F4438:
/* 802F4438 002F1378  7F C3 F3 78 */	mr r3, r30
/* 802F443C 002F137C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F4440 002F1380  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F4444 002F1384  7D 89 03 A6 */	mtctr r12
/* 802F4448 002F1388  4E 80 04 21 */	bctrl 
/* 802F444C 002F138C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4450 002F1390  41 82 00 1C */	beq .L_802F446C
/* 802F4454 002F1394  7F C3 F3 78 */	mr r3, r30
/* 802F4458 002F1398  38 81 00 24 */	addi r4, r1, 0x24
/* 802F445C 002F139C  81 9E 00 00 */	lwz r12, 0(r30)
/* 802F4460 002F13A0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4464 002F13A4  7D 89 03 A6 */	mtctr r12
/* 802F4468 002F13A8  4E 80 04 21 */	bctrl 
.L_802F446C:
/* 802F446C 002F13AC  38 61 00 74 */	addi r3, r1, 0x74
/* 802F4470 002F13B0  4B F3 A0 91 */	bl next__Q24Game12CellIteratorFv
.L_802F4474:
/* 802F4474 002F13B4  38 61 00 74 */	addi r3, r1, 0x74
/* 802F4478 002F13B8  4B F3 A0 BD */	bl isDone__Q24Game12CellIteratorFv
/* 802F447C 002F13BC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4480 002F13C0  41 82 FE 0C */	beq .L_802F428C
/* 802F4484 002F13C4  7F E3 FB 78 */	mr r3, r31
/* 802F4488 002F13C8  E3 E1 00 E8 */	psq_l f31, 232(r1), 0, qr0
/* 802F448C 002F13CC  80 01 00 F4 */	lwz r0, 0xf4(r1)
/* 802F4490 002F13D0  CB E1 00 E0 */	lfd f31, 0xe0(r1)
/* 802F4494 002F13D4  83 E1 00 DC */	lwz r31, 0xdc(r1)
/* 802F4498 002F13D8  83 C1 00 D8 */	lwz r30, 0xd8(r1)
/* 802F449C 002F13DC  83 A1 00 D4 */	lwz r29, 0xd4(r1)
/* 802F44A0 002F13E0  7C 08 03 A6 */	mtlr r0
/* 802F44A4 002F13E4  38 21 00 F0 */	addi r1, r1, 0xf0
/* 802F44A8 002F13E8  4E 80 00 20 */	blr 
.endfn update__Q34Game11BigTreasure22BigTreasureWaterAttackFv

.fn __dt__Q23efx23TChasePosPosLocalZScaleFv, weak
/* 802F44AC 002F13EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F44B0 002F13F0  7C 08 02 A6 */	mflr r0
/* 802F44B4 002F13F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F44B8 002F13F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F44BC 002F13FC  7C 9F 23 78 */	mr r31, r4
/* 802F44C0 002F1400  93 C1 00 08 */	stw r30, 8(r1)
/* 802F44C4 002F1404  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F44C8 002F1408  41 82 00 4C */	beq .L_802F4514
/* 802F44CC 002F140C  3C 60 80 4E */	lis r3, __vt__Q23efx23TChasePosPosLocalZScale@ha
/* 802F44D0 002F1410  38 63 67 C4 */	addi r3, r3, __vt__Q23efx23TChasePosPosLocalZScale@l
/* 802F44D4 002F1414  90 7E 00 00 */	stw r3, 0(r30)
/* 802F44D8 002F1418  38 03 00 14 */	addi r0, r3, 0x14
/* 802F44DC 002F141C  90 1E 00 04 */	stw r0, 4(r30)
/* 802F44E0 002F1420  41 82 00 24 */	beq .L_802F4504
/* 802F44E4 002F1424  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802F44E8 002F1428  38 7E 00 04 */	addi r3, r30, 4
/* 802F44EC 002F142C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802F44F0 002F1430  38 80 00 00 */	li r4, 0
/* 802F44F4 002F1434  90 BE 00 00 */	stw r5, 0(r30)
/* 802F44F8 002F1438  38 05 00 14 */	addi r0, r5, 0x14
/* 802F44FC 002F143C  90 1E 00 04 */	stw r0, 4(r30)
/* 802F4500 002F1440  4B D9 B7 9D */	bl __dt__18JPAEmitterCallBackFv
.L_802F4504:
/* 802F4504 002F1444  7F E0 07 35 */	extsh. r0, r31
/* 802F4508 002F1448  40 81 00 0C */	ble .L_802F4514
/* 802F450C 002F144C  7F C3 F3 78 */	mr r3, r30
/* 802F4510 002F1450  4B D2 FB A5 */	bl __dl__FPv
.L_802F4514:
/* 802F4514 002F1454  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F4518 002F1458  7F C3 F3 78 */	mr r3, r30
/* 802F451C 002F145C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F4520 002F1460  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F4524 002F1464  7C 08 03 A6 */	mtlr r0
/* 802F4528 002F1468  38 21 00 10 */	addi r1, r1, 0x10
/* 802F452C 002F146C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx23TChasePosPosLocalZScaleFv

.fn update__Q34Game11BigTreasure21BigTreasureElecAttackFv, global
/* 802F4530 002F1470  94 21 FD D0 */	stwu r1, -0x230(r1)
/* 802F4534 002F1474  7C 08 02 A6 */	mflr r0
/* 802F4538 002F1478  90 01 02 34 */	stw r0, 0x234(r1)
/* 802F453C 002F147C  DB E1 02 20 */	stfd f31, 0x220(r1)
/* 802F4540 002F1480  F3 E1 02 28 */	psq_st f31, 552(r1), 0, qr0
/* 802F4544 002F1484  DB C1 02 10 */	stfd f30, 0x210(r1)
/* 802F4548 002F1488  F3 C1 02 18 */	psq_st f30, 536(r1), 0, qr0
/* 802F454C 002F148C  DB A1 02 00 */	stfd f29, 0x200(r1)
/* 802F4550 002F1490  F3 A1 02 08 */	psq_st f29, 520(r1), 0, qr0
/* 802F4554 002F1494  DB 81 01 F0 */	stfd f28, 0x1f0(r1)
/* 802F4558 002F1498  F3 81 01 F8 */	psq_st f28, 504(r1), 0, qr0
/* 802F455C 002F149C  DB 61 01 E0 */	stfd f27, 0x1e0(r1)
/* 802F4560 002F14A0  F3 61 01 E8 */	psq_st f27, 488(r1), 0, qr0
/* 802F4564 002F14A4  DB 41 01 D0 */	stfd f26, 0x1d0(r1)
/* 802F4568 002F14A8  F3 41 01 D8 */	psq_st f26, 472(r1), 0, qr0
/* 802F456C 002F14AC  DB 21 01 C0 */	stfd f25, 0x1c0(r1)
/* 802F4570 002F14B0  F3 21 01 C8 */	psq_st f25, 456(r1), 0, qr0
/* 802F4574 002F14B4  DB 01 01 B0 */	stfd f24, 0x1b0(r1)
/* 802F4578 002F14B8  F3 01 01 B8 */	psq_st f24, 440(r1), 0, qr0
/* 802F457C 002F14BC  DA E1 01 A0 */	stfd f23, 0x1a0(r1)
/* 802F4580 002F14C0  F2 E1 01 A8 */	psq_st f23, 424(r1), 0, qr0
/* 802F4584 002F14C4  DA C1 01 90 */	stfd f22, 0x190(r1)
/* 802F4588 002F14C8  F2 C1 01 98 */	psq_st f22, 408(r1), 0, qr0
/* 802F458C 002F14CC  93 E1 01 8C */	stw r31, 0x18c(r1)
/* 802F4590 002F14D0  93 C1 01 88 */	stw r30, 0x188(r1)
/* 802F4594 002F14D4  7C 7E 1B 78 */	mr r30, r3
/* 802F4598 002F14D8  88 03 00 20 */	lbz r0, 0x20(r3)
/* 802F459C 002F14DC  28 00 00 00 */	cmplwi r0, 0
/* 802F45A0 002F14E0  41 82 01 60 */	beq .L_802F4700
/* 802F45A4 002F14E4  C0 9E 00 38 */	lfs f4, 0x38(r30)
/* 802F45A8 002F14E8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F45AC 002F14EC  C0 62 EE FC */	lfs f3, lbl_8051D25C@sda21(r2)
/* 802F45B0 002F14F0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802F45B4 002F14F4  C0 BE 00 3C */	lfs f5, 0x3c(r30)
/* 802F45B8 002F14F8  39 01 00 34 */	addi r8, r1, 0x34
/* 802F45BC 002F14FC  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 802F45C0 002F1500  EC 84 18 2A */	fadds f4, f4, f3
/* 802F45C4 002F1504  C0 42 EE A0 */	lfs f2, lbl_8051D200@sda21(r2)
/* 802F45C8 002F1508  38 FE 00 28 */	addi r7, r30, 0x28
/* 802F45CC 002F150C  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 802F45D0 002F1510  38 C0 00 00 */	li r6, 0
/* 802F45D4 002F1514  C0 23 08 00 */	lfs f1, 0x800(r3)
/* 802F45D8 002F1518  D0 81 00 38 */	stfs f4, 0x38(r1)
/* 802F45DC 002F151C  38 00 FF FF */	li r0, -1
/* 802F45E0 002F1520  C0 02 EF 04 */	lfs f0, lbl_8051D264@sda21(r2)
/* 802F45E4 002F1524  38 81 00 D8 */	addi r4, r1, 0xd8
/* 802F45E8 002F1528  D0 A1 00 3C */	stfs f5, 0x3c(r1)
/* 802F45EC 002F152C  80 6D 93 08 */	lwz r3, mapMgr__4Game@sda21(r13)
/* 802F45F0 002F1530  D0 61 00 40 */	stfs f3, 0x40(r1)
/* 802F45F4 002F1534  80 AD 9A EC */	lwz r5, sys@sda21(r13)
/* 802F45F8 002F1538  81 3E 00 1C */	lwz r9, 0x1c(r30)
/* 802F45FC 002F153C  C0 69 00 00 */	lfs f3, 0(r9)
/* 802F4600 002F1540  91 01 00 D8 */	stw r8, 0xd8(r1)
/* 802F4604 002F1544  90 E1 00 DC */	stw r7, 0xdc(r1)
/* 802F4608 002F1548  D0 61 00 E0 */	stfs f3, 0xe0(r1)
/* 802F460C 002F154C  D0 41 00 E4 */	stfs f2, 0xe4(r1)
/* 802F4610 002F1550  90 C1 00 E8 */	stw r6, 0xe8(r1)
/* 802F4614 002F1554  90 C1 01 1C */	stw r6, 0x11c(r1)
/* 802F4618 002F1558  98 C1 01 4C */	stb r6, 0x14c(r1)
/* 802F461C 002F155C  98 C1 00 F1 */	stb r6, 0xf1(r1)
/* 802F4620 002F1560  98 C1 00 F0 */	stb r6, 0xf0(r1)
/* 802F4624 002F1564  90 C1 01 20 */	stw r6, 0x120(r1)
/* 802F4628 002F1568  90 C1 00 EC */	stw r6, 0xec(r1)
/* 802F462C 002F156C  98 C1 01 68 */	stb r6, 0x168(r1)
/* 802F4630 002F1570  90 C1 01 6C */	stw r6, 0x16c(r1)
/* 802F4634 002F1574  D0 21 01 04 */	stfs f1, 0x104(r1)
/* 802F4638 002F1578  D0 01 01 08 */	stfs f0, 0x108(r1)
/* 802F463C 002F157C  90 01 01 70 */	stw r0, 0x170(r1)
/* 802F4640 002F1580  90 C1 01 24 */	stw r6, 0x124(r1)
/* 802F4644 002F1584  98 C1 00 F2 */	stb r6, 0xf2(r1)
/* 802F4648 002F1588  80 1E 00 18 */	lwz r0, 0x18(r30)
/* 802F464C 002F158C  90 01 00 EC */	stw r0, 0xec(r1)
/* 802F4650 002F1590  81 83 00 04 */	lwz r12, 4(r3)
/* 802F4654 002F1594  C0 25 00 54 */	lfs f1, 0x54(r5)
/* 802F4658 002F1598  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802F465C 002F159C  7D 89 03 A6 */	mtctr r12
/* 802F4660 002F15A0  4E 80 04 21 */	bctrl 
/* 802F4664 002F15A4  C0 21 00 34 */	lfs f1, 0x34(r1)
/* 802F4668 002F15A8  C0 02 EE FC */	lfs f0, lbl_8051D25C@sda21(r2)
/* 802F466C 002F15AC  D0 3E 00 34 */	stfs f1, 0x34(r30)
/* 802F4670 002F15B0  C0 21 00 38 */	lfs f1, 0x38(r1)
/* 802F4674 002F15B4  D0 3E 00 38 */	stfs f1, 0x38(r30)
/* 802F4678 002F15B8  C0 21 00 3C */	lfs f1, 0x3c(r1)
/* 802F467C 002F15BC  D0 3E 00 3C */	stfs f1, 0x3c(r30)
/* 802F4680 002F15C0  C0 3E 00 38 */	lfs f1, 0x38(r30)
/* 802F4684 002F15C4  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F4688 002F15C8  D0 1E 00 38 */	stfs f0, 0x38(r30)
/* 802F468C 002F15CC  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 802F4690 002F15D0  28 00 00 00 */	cmplwi r0, 0
/* 802F4694 002F15D4  41 82 00 50 */	beq .L_802F46E4
/* 802F4698 002F15D8  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F469C 002F15DC  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 802F46A0 002F15E0  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F46A4 002F15E4  EC 01 00 32 */	fmuls f0, f1, f0
/* 802F46A8 002F15E8  D0 1E 00 28 */	stfs f0, 0x28(r30)
/* 802F46AC 002F15EC  80 7E 00 1C */	lwz r3, 0x1c(r30)
/* 802F46B0 002F15F0  C0 3E 00 30 */	lfs f1, 0x30(r30)
/* 802F46B4 002F15F4  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F46B8 002F15F8  EC 01 00 32 */	fmuls f0, f1, f0
/* 802F46BC 002F15FC  D0 1E 00 30 */	stfs f0, 0x30(r30)
/* 802F46C0 002F1600  80 1E 00 24 */	lwz r0, 0x24(r30)
/* 802F46C4 002F1604  28 00 00 00 */	cmplwi r0, 0
/* 802F46C8 002F1608  40 82 00 10 */	bne .L_802F46D8
/* 802F46CC 002F160C  38 9E 00 34 */	addi r4, r30, 0x34
/* 802F46D0 002F1610  38 60 59 5C */	li r3, 0x595c
/* 802F46D4 002F1614  48 17 99 E1 */	bl PSStartSoundVec__FUlP3Vec
.L_802F46D8:
/* 802F46D8 002F1618  80 01 01 1C */	lwz r0, 0x11c(r1)
/* 802F46DC 002F161C  90 1E 00 24 */	stw r0, 0x24(r30)
/* 802F46E0 002F1620  48 00 00 0C */	b .L_802F46EC
.L_802F46E4:
/* 802F46E4 002F1624  38 00 00 00 */	li r0, 0
/* 802F46E8 002F1628  90 1E 00 24 */	stw r0, 0x24(r30)
.L_802F46EC:
/* 802F46EC 002F162C  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 802F46F0 002F1630  C0 02 EE FC */	lfs f0, lbl_8051D25C@sda21(r2)
/* 802F46F4 002F1634  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F46F8 002F1638  D0 1E 00 2C */	stfs f0, 0x2c(r30)
/* 802F46FC 002F163C  48 00 00 34 */	b .L_802F4730
.L_802F4700:
/* 802F4700 002F1640  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 802F4704 002F1644  3C 60 80 49 */	lis r3, lbl_8048D1F0@ha
/* 802F4708 002F1648  38 83 D1 F0 */	addi r4, r3, lbl_8048D1F0@l
/* 802F470C 002F164C  80 65 01 74 */	lwz r3, 0x174(r5)
/* 802F4710 002F1650  48 14 A8 D5 */	bl getJoint__Q28SysShape5ModelFPc
/* 802F4714 002F1654  48 13 51 8D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F4718 002F1658  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F471C 002F165C  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802F4720 002F1660  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F4724 002F1664  D0 1E 00 34 */	stfs f0, 0x34(r30)
/* 802F4728 002F1668  D0 3E 00 38 */	stfs f1, 0x38(r30)
/* 802F472C 002F166C  D0 5E 00 3C */	stfs f2, 0x3c(r30)
.L_802F4730:
/* 802F4730 002F1670  80 7E 00 40 */	lwz r3, 0x40(r30)
/* 802F4734 002F1674  28 03 00 00 */	cmplwi r3, 0
/* 802F4738 002F1678  41 82 04 C4 */	beq .L_802F4BFC
/* 802F473C 002F167C  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 802F4740 002F1680  C0 3E 00 38 */	lfs f1, 0x38(r30)
/* 802F4744 002F1684  C0 83 00 3C */	lfs f4, 0x3c(r3)
/* 802F4748 002F1688  EF 40 08 28 */	fsubs f26, f0, f1
/* 802F474C 002F168C  C0 5E 00 3C */	lfs f2, 0x3c(r30)
/* 802F4750 002F1690  C0 63 00 34 */	lfs f3, 0x34(r3)
/* 802F4754 002F1694  EF E4 10 28 */	fsubs f31, f4, f2
/* 802F4758 002F1698  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 802F475C 002F169C  EC 9A 06 B2 */	fmuls f4, f26, f26
/* 802F4760 002F16A0  EF C3 00 28 */	fsubs f30, f3, f0
/* 802F4764 002F16A4  C0 62 EE A0 */	lfs f3, lbl_8051D200@sda21(r2)
/* 802F4768 002F16A8  EC BF 07 F2 */	fmuls f5, f31, f31
/* 802F476C 002F16AC  EC 9E 27 BA */	fmadds f4, f30, f30, f4
/* 802F4770 002F16B0  EF A5 20 2A */	fadds f29, f5, f4
/* 802F4774 002F16B4  FC 1D 18 40 */	fcmpo cr0, f29, f3
/* 802F4778 002F16B8  40 81 00 14 */	ble .L_802F478C
/* 802F477C 002F16BC  40 81 00 14 */	ble .L_802F4790
/* 802F4780 002F16C0  FC 60 E8 34 */	frsqrte f3, f29
/* 802F4784 002F16C4  EF A3 07 72 */	fmuls f29, f3, f29
/* 802F4788 002F16C8  48 00 00 08 */	b .L_802F4790
.L_802F478C:
/* 802F478C 002F16CC  FF A0 18 90 */	fmr f29, f3
.L_802F4790:
/* 802F4790 002F16D0  C0 62 EE A0 */	lfs f3, lbl_8051D200@sda21(r2)
/* 802F4794 002F16D4  FC 1D 18 40 */	fcmpo cr0, f29, f3
/* 802F4798 002F16D8  40 81 00 1C */	ble .L_802F47B4
/* 802F479C 002F16DC  C0 62 EE B0 */	lfs f3, lbl_8051D210@sda21(r2)
/* 802F47A0 002F16E0  EC 63 E8 24 */	fdivs f3, f3, f29
/* 802F47A4 002F16E4  EF DE 00 F2 */	fmuls f30, f30, f3
/* 802F47A8 002F16E8  EF 5A 00 F2 */	fmuls f26, f26, f3
/* 802F47AC 002F16EC  EF FF 00 F2 */	fmuls f31, f31, f3
/* 802F47B0 002F16F0  48 00 00 08 */	b .L_802F47B8
.L_802F47B4:
/* 802F47B4 002F16F4  FF A0 18 90 */	fmr f29, f3
.L_802F47B8:
/* 802F47B8 002F16F8  C0 82 EE A0 */	lfs f4, lbl_8051D200@sda21(r2)
/* 802F47BC 002F16FC  C0 A2 EE B0 */	lfs f5, lbl_8051D210@sda21(r2)
/* 802F47C0 002F1700  EC 7E 01 32 */	fmuls f3, f30, f4
/* 802F47C4 002F1704  EC DA 01 32 */	fmuls f6, f26, f4
/* 802F47C8 002F1708  EF 3F 19 38 */	fmsubs f25, f31, f4, f3
/* 802F47CC 002F170C  EF 7E 31 78 */	fmsubs f27, f30, f5, f6
/* 802F47D0 002F1710  EF 9F 31 7C */	fnmsubs f28, f31, f5, f6
/* 802F47D4 002F1714  EC 79 06 72 */	fmuls f3, f25, f25
/* 802F47D8 002F1718  EC BB 06 F2 */	fmuls f5, f27, f27
/* 802F47DC 002F171C  EC 7C 1F 3A */	fmadds f3, f28, f28, f3
/* 802F47E0 002F1720  EC A5 18 2A */	fadds f5, f5, f3
/* 802F47E4 002F1724  FC 05 20 40 */	fcmpo cr0, f5, f4
/* 802F47E8 002F1728  40 81 00 14 */	ble .L_802F47FC
/* 802F47EC 002F172C  40 81 00 14 */	ble .L_802F4800
/* 802F47F0 002F1730  FC 60 28 34 */	frsqrte f3, f5
/* 802F47F4 002F1734  EC A3 01 72 */	fmuls f5, f3, f5
/* 802F47F8 002F1738  48 00 00 08 */	b .L_802F4800
.L_802F47FC:
/* 802F47FC 002F173C  FC A0 20 90 */	fmr f5, f4
.L_802F4800:
/* 802F4800 002F1740  C0 62 EE A0 */	lfs f3, lbl_8051D200@sda21(r2)
/* 802F4804 002F1744  FC 05 18 40 */	fcmpo cr0, f5, f3
/* 802F4808 002F1748  40 81 00 18 */	ble .L_802F4820
/* 802F480C 002F174C  C0 62 EE B0 */	lfs f3, lbl_8051D210@sda21(r2)
/* 802F4810 002F1750  EC 63 28 24 */	fdivs f3, f3, f5
/* 802F4814 002F1754  EF 9C 00 F2 */	fmuls f28, f28, f3
/* 802F4818 002F1758  EF 39 00 F2 */	fmuls f25, f25, f3
/* 802F481C 002F175C  EF 7B 00 F2 */	fmuls f27, f27, f3
.L_802F4820:
/* 802F4820 002F1760  EC BC 07 F2 */	fmuls f5, f28, f31
/* 802F4824 002F1764  C0 62 EE A0 */	lfs f3, lbl_8051D200@sda21(r2)
/* 802F4828 002F1768  EC D9 07 B2 */	fmuls f6, f25, f30
/* 802F482C 002F176C  EC 9B 06 B2 */	fmuls f4, f27, f26
/* 802F4830 002F1770  EE FB 2F B8 */	fmsubs f23, f27, f30, f5
/* 802F4834 002F1774  EF 1C 36 B8 */	fmsubs f24, f28, f26, f6
/* 802F4838 002F1778  EE D9 27 F8 */	fmsubs f22, f25, f31, f4
/* 802F483C 002F177C  EC 97 05 F2 */	fmuls f4, f23, f23
/* 802F4840 002F1780  EC B8 06 32 */	fmuls f5, f24, f24
/* 802F4844 002F1784  EC 96 25 BA */	fmadds f4, f22, f22, f4
/* 802F4848 002F1788  EC 85 20 2A */	fadds f4, f5, f4
/* 802F484C 002F178C  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802F4850 002F1790  40 81 00 14 */	ble .L_802F4864
/* 802F4854 002F1794  40 81 00 14 */	ble .L_802F4868
/* 802F4858 002F1798  FC 60 20 34 */	frsqrte f3, f4
/* 802F485C 002F179C  EC 83 01 32 */	fmuls f4, f3, f4
/* 802F4860 002F17A0  48 00 00 08 */	b .L_802F4868
.L_802F4864:
/* 802F4864 002F17A4  FC 80 18 90 */	fmr f4, f3
.L_802F4868:
/* 802F4868 002F17A8  C0 62 EE A0 */	lfs f3, lbl_8051D200@sda21(r2)
/* 802F486C 002F17AC  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 802F4870 002F17B0  40 81 00 18 */	ble .L_802F4888
/* 802F4874 002F17B4  C0 62 EE B0 */	lfs f3, lbl_8051D210@sda21(r2)
/* 802F4878 002F17B8  EC 63 20 24 */	fdivs f3, f3, f4
/* 802F487C 002F17BC  EE D6 00 F2 */	fmuls f22, f22, f3
/* 802F4880 002F17C0  EE F7 00 F2 */	fmuls f23, f23, f3
/* 802F4884 002F17C4  EF 18 00 F2 */	fmuls f24, f24, f3
.L_802F4888:
/* 802F4888 002F17C8  C0 82 EE EC */	lfs f4, lbl_8051D24C@sda21(r2)
/* 802F488C 002F17CC  38 61 00 70 */	addi r3, r1, 0x70
/* 802F4890 002F17D0  C0 62 EE A4 */	lfs f3, lbl_8051D204@sda21(r2)
/* 802F4894 002F17D4  38 81 00 24 */	addi r4, r1, 0x24
/* 802F4898 002F17D8  EC E4 07 72 */	fmuls f7, f4, f29
/* 802F489C 002F17DC  EC 9E 01 F2 */	fmuls f4, f30, f7
/* 802F48A0 002F17E0  EC BA 01 F2 */	fmuls f5, f26, f7
/* 802F48A4 002F17E4  EC DF 01 F2 */	fmuls f6, f31, f7
/* 802F48A8 002F17E8  EC 84 00 2A */	fadds f4, f4, f0
/* 802F48AC 002F17EC  EC A5 08 2A */	fadds f5, f5, f1
/* 802F48B0 002F17F0  EC C6 10 2A */	fadds f6, f6, f2
/* 802F48B4 002F17F4  EC 03 38 2A */	fadds f0, f3, f7
/* 802F48B8 002F17F8  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 802F48BC 002F17FC  D0 A1 00 28 */	stfs f5, 0x28(r1)
/* 802F48C0 002F1800  D0 C1 00 2C */	stfs f6, 0x2c(r1)
/* 802F48C4 002F1804  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 802F48C8 002F1808  4B F3 9A D9 */	bl __ct__Q24Game15CellIteratorArgFRQ23Sys6Sphere
/* 802F48CC 002F180C  38 00 00 01 */	li r0, 1
/* 802F48D0 002F1810  38 61 00 90 */	addi r3, r1, 0x90
/* 802F48D4 002F1814  98 01 00 8C */	stb r0, 0x8c(r1)
/* 802F48D8 002F1818  38 81 00 70 */	addi r4, r1, 0x70
/* 802F48DC 002F181C  4B F3 9B 05 */	bl __ct__Q24Game12CellIteratorFRQ24Game15CellIteratorArg
/* 802F48E0 002F1820  38 61 00 90 */	addi r3, r1, 0x90
/* 802F48E4 002F1824  4B F3 9B 79 */	bl first__Q24Game12CellIteratorFv
/* 802F48E8 002F1828  48 00 03 04 */	b .L_802F4BEC
.L_802F48EC:
/* 802F48EC 002F182C  38 61 00 90 */	addi r3, r1, 0x90
/* 802F48F0 002F1830  4B F3 9C 55 */	bl __ml__Q24Game12CellIteratorFv
/* 802F48F4 002F1834  81 83 00 00 */	lwz r12, 0(r3)
/* 802F48F8 002F1838  7C 7F 1B 78 */	mr r31, r3
/* 802F48FC 002F183C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F4900 002F1840  7D 89 03 A6 */	mtctr r12
/* 802F4904 002F1844  4E 80 04 21 */	bctrl 
/* 802F4908 002F1848  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F490C 002F184C  41 82 02 D8 */	beq .L_802F4BE4
/* 802F4910 002F1850  7F E3 FB 78 */	mr r3, r31
/* 802F4914 002F1854  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4918 002F1858  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F491C 002F185C  7D 89 03 A6 */	mtctr r12
/* 802F4920 002F1860  4E 80 04 21 */	bctrl 
/* 802F4924 002F1864  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4928 002F1868  40 82 00 20 */	bne .L_802F4948
/* 802F492C 002F186C  7F E3 FB 78 */	mr r3, r31
/* 802F4930 002F1870  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4934 002F1874  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F4938 002F1878  7D 89 03 A6 */	mtctr r12
/* 802F493C 002F187C  4E 80 04 21 */	bctrl 
/* 802F4940 002F1880  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4944 002F1884  41 82 02 A0 */	beq .L_802F4BE4
.L_802F4948:
/* 802F4948 002F1888  7F E4 FB 78 */	mr r4, r31
/* 802F494C 002F188C  38 61 00 08 */	addi r3, r1, 8
/* 802F4950 002F1890  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4954 002F1894  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F4958 002F1898  7D 89 03 A6 */	mtctr r12
/* 802F495C 002F189C  4E 80 04 21 */	bctrl 
/* 802F4960 002F18A0  C0 41 00 0C */	lfs f2, 0xc(r1)
/* 802F4964 002F18A4  C0 1E 00 38 */	lfs f0, 0x38(r30)
/* 802F4968 002F18A8  C0 21 00 08 */	lfs f1, 8(r1)
/* 802F496C 002F18AC  EC 82 00 28 */	fsubs f4, f2, f0
/* 802F4970 002F18B0  C0 1E 00 34 */	lfs f0, 0x34(r30)
/* 802F4974 002F18B4  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 802F4978 002F18B8  EC 61 00 28 */	fsubs f3, f1, f0
/* 802F497C 002F18BC  C0 1E 00 3C */	lfs f0, 0x3c(r30)
/* 802F4980 002F18C0  EC 39 01 32 */	fmuls f1, f25, f4
/* 802F4984 002F18C4  EC 42 00 28 */	fsubs f2, f2, f0
/* 802F4988 002F18C8  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F498C 002F18CC  EC 3C 08 FA */	fmadds f1, f28, f3, f1
/* 802F4990 002F18D0  EC BB 08 BA */	fmadds f5, f27, f2, f1
/* 802F4994 002F18D4  FC 05 00 40 */	fcmpo cr0, f5, f0
/* 802F4998 002F18D8  40 81 00 0C */	ble .L_802F49A4
/* 802F499C 002F18DC  FC 20 28 90 */	fmr f1, f5
/* 802F49A0 002F18E0  48 00 00 08 */	b .L_802F49A8
.L_802F49A4:
/* 802F49A4 002F18E4  FC 20 28 50 */	fneg f1, f5
.L_802F49A8:
/* 802F49A8 002F18E8  C0 02 EE E8 */	lfs f0, lbl_8051D248@sda21(r2)
/* 802F49AC 002F18EC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F49B0 002F18F0  40 80 02 34 */	bge .L_802F4BE4
/* 802F49B4 002F18F4  EC 37 01 32 */	fmuls f1, f23, f4
/* 802F49B8 002F18F8  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F49BC 002F18FC  EC 36 08 FA */	fmadds f1, f22, f3, f1
/* 802F49C0 002F1900  EC 38 08 BA */	fmadds f1, f24, f2, f1
/* 802F49C4 002F1904  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F49C8 002F1908  40 81 00 08 */	ble .L_802F49D0
/* 802F49CC 002F190C  48 00 00 08 */	b .L_802F49D4
.L_802F49D0:
/* 802F49D0 002F1910  FC 20 08 50 */	fneg f1, f1
.L_802F49D4:
/* 802F49D4 002F1914  C0 02 EE FC */	lfs f0, lbl_8051D25C@sda21(r2)
/* 802F49D8 002F1918  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F49DC 002F191C  40 80 02 08 */	bge .L_802F4BE4
/* 802F49E0 002F1920  EC 1A 01 32 */	fmuls f0, f26, f4
/* 802F49E4 002F1924  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F49E8 002F1928  EC 1E 00 FA */	fmadds f0, f30, f3, f0
/* 802F49EC 002F192C  EC 1F 00 BA */	fmadds f0, f31, f2, f0
/* 802F49F0 002F1930  FC 00 08 40 */	fcmpo cr0, f0, f1
/* 802F49F4 002F1934  40 81 01 F0 */	ble .L_802F4BE4
/* 802F49F8 002F1938  FC 00 E8 40 */	fcmpo cr0, f0, f29
/* 802F49FC 002F193C  40 80 01 E8 */	bge .L_802F4BE4
/* 802F4A00 002F1940  EC 85 06 F2 */	fmuls f4, f5, f27
/* 802F4A04 002F1944  EC 65 07 32 */	fmuls f3, f5, f28
/* 802F4A08 002F1948  EC 44 01 32 */	fmuls f2, f4, f4
/* 802F4A0C 002F194C  EC 03 08 FA */	fmadds f0, f3, f3, f1
/* 802F4A10 002F1950  EC 42 00 2A */	fadds f2, f2, f0
/* 802F4A14 002F1954  FC 02 08 40 */	fcmpo cr0, f2, f1
/* 802F4A18 002F1958  40 81 00 14 */	ble .L_802F4A2C
/* 802F4A1C 002F195C  40 81 00 14 */	ble .L_802F4A30
/* 802F4A20 002F1960  FC 00 10 34 */	frsqrte f0, f2
/* 802F4A24 002F1964  EC 40 00 B2 */	fmuls f2, f0, f2
/* 802F4A28 002F1968  48 00 00 08 */	b .L_802F4A30
.L_802F4A2C:
/* 802F4A2C 002F196C  FC 40 08 90 */	fmr f2, f1
.L_802F4A30:
/* 802F4A30 002F1970  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F4A34 002F1974  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802F4A38 002F1978  40 81 00 14 */	ble .L_802F4A4C
/* 802F4A3C 002F197C  C0 02 EE B0 */	lfs f0, lbl_8051D210@sda21(r2)
/* 802F4A40 002F1980  EC 00 10 24 */	fdivs f0, f0, f2
/* 802F4A44 002F1984  EC 63 00 32 */	fmuls f3, f3, f0
/* 802F4A48 002F1988  EC 84 00 32 */	fmuls f4, f4, f0
.L_802F4A4C:
/* 802F4A4C 002F198C  80 FE 00 18 */	lwz r7, 0x18(r30)
/* 802F4A50 002F1990  3C A0 80 4B */	lis r5, __vt__Q24Game11Interaction@ha
/* 802F4A54 002F1994  C0 02 EF 08 */	lfs f0, lbl_8051D268@sda21(r2)
/* 802F4A58 002F1998  3C 80 80 4B */	lis r4, __vt__Q24Game12InteractWind@ha
/* 802F4A5C 002F199C  80 C7 00 C0 */	lwz r6, 0xc0(r7)
/* 802F4A60 002F19A0  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractDenki@ha
/* 802F4A64 002F19A4  38 A5 A3 00 */	addi r5, r5, __vt__Q24Game11Interaction@l
/* 802F4A68 002F19A8  EC 63 00 32 */	fmuls f3, f3, f0
/* 802F4A6C 002F19AC  C0 26 06 04 */	lfs f1, 0x604(r6)
/* 802F4A70 002F19B0  EC 84 00 32 */	fmuls f4, f4, f0
/* 802F4A74 002F19B4  38 84 49 74 */	addi r4, r4, __vt__Q24Game12InteractWind@l
/* 802F4A78 002F19B8  38 03 49 08 */	addi r0, r3, __vt__Q24Game13InteractDenki@l
/* 802F4A7C 002F19BC  90 A1 00 58 */	stw r5, 0x58(r1)
/* 802F4A80 002F19C0  7F E3 FB 78 */	mr r3, r31
/* 802F4A84 002F19C4  90 81 00 58 */	stw r4, 0x58(r1)
/* 802F4A88 002F19C8  90 E1 00 5C */	stw r7, 0x5c(r1)
/* 802F4A8C 002F19CC  D0 21 00 60 */	stfs f1, 0x60(r1)
/* 802F4A90 002F19D0  D0 61 00 64 */	stfs f3, 0x64(r1)
/* 802F4A94 002F19D4  D0 01 00 68 */	stfs f0, 0x68(r1)
/* 802F4A98 002F19D8  D0 81 00 6C */	stfs f4, 0x6c(r1)
/* 802F4A9C 002F19DC  90 01 00 58 */	stw r0, 0x58(r1)
/* 802F4AA0 002F19E0  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4AA4 002F19E4  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F4AA8 002F19E8  7D 89 03 A6 */	mtctr r12
/* 802F4AAC 002F19EC  4E 80 04 21 */	bctrl 
/* 802F4AB0 002F19F0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4AB4 002F19F4  41 82 00 FC */	beq .L_802F4BB0
/* 802F4AB8 002F19F8  7F E3 FB 78 */	mr r3, r31
/* 802F4ABC 002F19FC  38 81 00 58 */	addi r4, r1, 0x58
/* 802F4AC0 002F1A00  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4AC4 002F1A04  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4AC8 002F1A08  7D 89 03 A6 */	mtctr r12
/* 802F4ACC 002F1A0C  4E 80 04 21 */	bctrl 
/* 802F4AD0 002F1A10  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4AD4 002F1A14  40 82 01 10 */	bne .L_802F4BE4
/* 802F4AD8 002F1A18  4B DD 4A C9 */	bl rand
/* 802F4ADC 002F1A1C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F4AE0 002F1A20  3C 00 43 30 */	lis r0, 0x4330
/* 802F4AE4 002F1A24  90 61 01 7C */	stw r3, 0x17c(r1)
/* 802F4AE8 002F1A28  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F4AEC 002F1A2C  90 01 01 78 */	stw r0, 0x178(r1)
/* 802F4AF0 002F1A30  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F4AF4 002F1A34  C8 01 01 78 */	lfd f0, 0x178(r1)
/* 802F4AF8 002F1A38  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F4AFC 002F1A3C  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F4B00 002F1A40  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F4B04 002F1A44  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F4B08 002F1A48  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F4B0C 002F1A4C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F4B10 002F1A50  40 80 00 54 */	bge .L_802F4B64
/* 802F4B14 002F1A54  80 BE 00 18 */	lwz r5, 0x18(r30)
/* 802F4B18 002F1A58  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F4B1C 002F1A5C  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F4B20 002F1A60  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F4B24 002F1A64  C0 02 EE CC */	lfs f0, lbl_8051D22C@sda21(r2)
/* 802F4B28 002F1A68  3C 60 80 4B */	lis r3, __vt__Q24Game13InteractFlick@ha
/* 802F4B2C 002F1A6C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F4B30 002F1A70  38 03 4E 04 */	addi r0, r3, __vt__Q24Game13InteractFlick@l
/* 802F4B34 002F1A74  7F E3 FB 78 */	mr r3, r31
/* 802F4B38 002F1A78  38 81 00 44 */	addi r4, r1, 0x44
/* 802F4B3C 002F1A7C  90 A1 00 48 */	stw r5, 0x48(r1)
/* 802F4B40 002F1A80  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F4B44 002F1A84  D0 21 00 4C */	stfs f1, 0x4c(r1)
/* 802F4B48 002F1A88  D0 21 00 50 */	stfs f1, 0x50(r1)
/* 802F4B4C 002F1A8C  D0 01 00 54 */	stfs f0, 0x54(r1)
/* 802F4B50 002F1A90  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4B54 002F1A94  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4B58 002F1A98  7D 89 03 A6 */	mtctr r12
/* 802F4B5C 002F1A9C  4E 80 04 21 */	bctrl 
/* 802F4B60 002F1AA0  48 00 00 84 */	b .L_802F4BE4
.L_802F4B64:
/* 802F4B64 002F1AA4  80 9E 00 18 */	lwz r4, 0x18(r30)
/* 802F4B68 002F1AA8  3C 60 80 4B */	lis r3, __vt__Q24Game11Interaction@ha
/* 802F4B6C 002F1AAC  38 03 A3 00 */	addi r0, r3, __vt__Q24Game11Interaction@l
/* 802F4B70 002F1AB0  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F4B74 002F1AB4  3C 60 80 4B */	lis r3, __vt__Q24Game14InteractAttack@ha
/* 802F4B78 002F1AB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F4B7C 002F1ABC  38 A3 4D E0 */	addi r5, r3, __vt__Q24Game14InteractAttack@l
/* 802F4B80 002F1AC0  38 00 00 00 */	li r0, 0
/* 802F4B84 002F1AC4  90 81 00 18 */	stw r4, 0x18(r1)
/* 802F4B88 002F1AC8  7F E3 FB 78 */	mr r3, r31
/* 802F4B8C 002F1ACC  38 81 00 14 */	addi r4, r1, 0x14
/* 802F4B90 002F1AD0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802F4B94 002F1AD4  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 802F4B98 002F1AD8  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F4B9C 002F1ADC  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4BA0 002F1AE0  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4BA4 002F1AE4  7D 89 03 A6 */	mtctr r12
/* 802F4BA8 002F1AE8  4E 80 04 21 */	bctrl 
/* 802F4BAC 002F1AEC  48 00 00 38 */	b .L_802F4BE4
.L_802F4BB0:
/* 802F4BB0 002F1AF0  7F E3 FB 78 */	mr r3, r31
/* 802F4BB4 002F1AF4  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4BB8 002F1AF8  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F4BBC 002F1AFC  7D 89 03 A6 */	mtctr r12
/* 802F4BC0 002F1B00  4E 80 04 21 */	bctrl 
/* 802F4BC4 002F1B04  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4BC8 002F1B08  41 82 00 1C */	beq .L_802F4BE4
/* 802F4BCC 002F1B0C  7F E3 FB 78 */	mr r3, r31
/* 802F4BD0 002F1B10  38 81 00 58 */	addi r4, r1, 0x58
/* 802F4BD4 002F1B14  81 9F 00 00 */	lwz r12, 0(r31)
/* 802F4BD8 002F1B18  81 8C 01 A4 */	lwz r12, 0x1a4(r12)
/* 802F4BDC 002F1B1C  7D 89 03 A6 */	mtctr r12
/* 802F4BE0 002F1B20  4E 80 04 21 */	bctrl 
.L_802F4BE4:
/* 802F4BE4 002F1B24  38 61 00 90 */	addi r3, r1, 0x90
/* 802F4BE8 002F1B28  4B F3 99 19 */	bl next__Q24Game12CellIteratorFv
.L_802F4BEC:
/* 802F4BEC 002F1B2C  38 61 00 90 */	addi r3, r1, 0x90
/* 802F4BF0 002F1B30  4B F3 99 45 */	bl isDone__Q24Game12CellIteratorFv
/* 802F4BF4 002F1B34  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F4BF8 002F1B38  41 82 FC F4 */	beq .L_802F48EC
.L_802F4BFC:
/* 802F4BFC 002F1B3C  38 60 00 00 */	li r3, 0
/* 802F4C00 002F1B40  E3 E1 02 28 */	psq_l f31, 552(r1), 0, qr0
/* 802F4C04 002F1B44  CB E1 02 20 */	lfd f31, 0x220(r1)
/* 802F4C08 002F1B48  E3 C1 02 18 */	psq_l f30, 536(r1), 0, qr0
/* 802F4C0C 002F1B4C  CB C1 02 10 */	lfd f30, 0x210(r1)
/* 802F4C10 002F1B50  E3 A1 02 08 */	psq_l f29, 520(r1), 0, qr0
/* 802F4C14 002F1B54  CB A1 02 00 */	lfd f29, 0x200(r1)
/* 802F4C18 002F1B58  E3 81 01 F8 */	psq_l f28, 504(r1), 0, qr0
/* 802F4C1C 002F1B5C  CB 81 01 F0 */	lfd f28, 0x1f0(r1)
/* 802F4C20 002F1B60  E3 61 01 E8 */	psq_l f27, 488(r1), 0, qr0
/* 802F4C24 002F1B64  CB 61 01 E0 */	lfd f27, 0x1e0(r1)
/* 802F4C28 002F1B68  E3 41 01 D8 */	psq_l f26, 472(r1), 0, qr0
/* 802F4C2C 002F1B6C  CB 41 01 D0 */	lfd f26, 0x1d0(r1)
/* 802F4C30 002F1B70  E3 21 01 C8 */	psq_l f25, 456(r1), 0, qr0
/* 802F4C34 002F1B74  CB 21 01 C0 */	lfd f25, 0x1c0(r1)
/* 802F4C38 002F1B78  E3 01 01 B8 */	psq_l f24, 440(r1), 0, qr0
/* 802F4C3C 002F1B7C  CB 01 01 B0 */	lfd f24, 0x1b0(r1)
/* 802F4C40 002F1B80  E2 E1 01 A8 */	psq_l f23, 424(r1), 0, qr0
/* 802F4C44 002F1B84  CA E1 01 A0 */	lfd f23, 0x1a0(r1)
/* 802F4C48 002F1B88  E2 C1 01 98 */	psq_l f22, 408(r1), 0, qr0
/* 802F4C4C 002F1B8C  CA C1 01 90 */	lfd f22, 0x190(r1)
/* 802F4C50 002F1B90  83 E1 01 8C */	lwz r31, 0x18c(r1)
/* 802F4C54 002F1B94  80 01 02 34 */	lwz r0, 0x234(r1)
/* 802F4C58 002F1B98  83 C1 01 88 */	lwz r30, 0x188(r1)
/* 802F4C5C 002F1B9C  7C 08 03 A6 */	mtlr r0
/* 802F4C60 002F1BA0  38 21 02 30 */	addi r1, r1, 0x230
/* 802F4C64 002F1BA4  4E 80 00 20 */	blr 
.endfn update__Q34Game11BigTreasure21BigTreasureElecAttackFv

.fn __ct__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure3Obj, global
/* 802F4C68 002F1BA8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F4C6C 002F1BAC  7C 08 02 A6 */	mflr r0
/* 802F4C70 002F1BB0  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F4C74 002F1BB4  DB E1 00 30 */	stfd f31, 0x30(r1)
/* 802F4C78 002F1BB8  F3 E1 00 38 */	psq_st f31, 56(r1), 0, qr0
/* 802F4C7C 002F1BBC  BE C1 00 08 */	stmw r22, 8(r1)
/* 802F4C80 002F1BC0  3C A0 80 12 */	lis r5, "__ct__10Vector3<f>Fv"@ha
/* 802F4C84 002F1BC4  7C 7F 1B 78 */	mr r31, r3
/* 802F4C88 002F1BC8  38 05 F3 48 */	addi r0, r5, "__ct__10Vector3<f>Fv"@l
/* 802F4C8C 002F1BCC  7C 96 23 78 */	mr r22, r4
/* 802F4C90 002F1BD0  7C 04 03 78 */	mr r4, r0
/* 802F4C94 002F1BD4  38 7F 00 28 */	addi r3, r31, 0x28
/* 802F4C98 002F1BD8  38 A0 00 00 */	li r5, 0
/* 802F4C9C 002F1BDC  38 C0 00 0C */	li r6, 0xc
/* 802F4CA0 002F1BE0  38 E0 00 03 */	li r7, 3
/* 802F4CA4 002F1BE4  4B DC CB 99 */	bl __construct_array
/* 802F4CA8 002F1BE8  3C 80 80 12 */	lis r4, "__ct__10Vector3<f>Fv"@ha
/* 802F4CAC 002F1BEC  38 7F 00 70 */	addi r3, r31, 0x70
/* 802F4CB0 002F1BF0  38 84 F3 48 */	addi r4, r4, "__ct__10Vector3<f>Fv"@l
/* 802F4CB4 002F1BF4  38 A0 00 00 */	li r5, 0
/* 802F4CB8 002F1BF8  38 C0 00 0C */	li r6, 0xc
/* 802F4CBC 002F1BFC  38 E0 00 04 */	li r7, 4
/* 802F4CC0 002F1C00  4B DC CB 7D */	bl __construct_array
/* 802F4CC4 002F1C04  38 00 00 00 */	li r0, 0
/* 802F4CC8 002F1C08  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F4CCC 002F1C0C  98 1F 00 00 */	stb r0, 0(r31)
/* 802F4CD0 002F1C10  38 60 00 48 */	li r3, 0x48
/* 802F4CD4 002F1C14  98 1F 00 01 */	stb r0, 1(r31)
/* 802F4CD8 002F1C18  98 1F 00 02 */	stb r0, 2(r31)
/* 802F4CDC 002F1C1C  98 1F 00 03 */	stb r0, 3(r31)
/* 802F4CE0 002F1C20  92 DF 00 04 */	stw r22, 4(r31)
/* 802F4CE4 002F1C24  D0 1F 00 54 */	stfs f0, 0x54(r31)
/* 802F4CE8 002F1C28  D0 1F 00 58 */	stfs f0, 0x58(r31)
/* 802F4CEC 002F1C2C  D0 1F 00 5C */	stfs f0, 0x5c(r31)
/* 802F4CF0 002F1C30  D0 1F 00 60 */	stfs f0, 0x60(r31)
/* 802F4CF4 002F1C34  4B D2 F1 B1 */	bl __nw__FUl
/* 802F4CF8 002F1C38  28 03 00 00 */	cmplwi r3, 0
/* 802F4CFC 002F1C3C  41 82 00 94 */	beq .L_802F4D90
/* 802F4D00 002F1C40  C0 02 EF 0C */	lfs f0, lbl_8051D26C@sda21(r2)
/* 802F4D04 002F1C44  38 C0 00 0F */	li r6, 0xf
/* 802F4D08 002F1C48  C0 22 EF 10 */	lfs f1, lbl_8051D270@sda21(r2)
/* 802F4D0C 002F1C4C  38 A0 00 00 */	li r5, 0
/* 802F4D10 002F1C50  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F4D14 002F1C54  38 80 00 01 */	li r4, 1
/* 802F4D18 002F1C58  C0 02 EF 14 */	lfs f0, lbl_8051D274@sda21(r2)
/* 802F4D1C 002F1C5C  38 00 00 03 */	li r0, 3
/* 802F4D20 002F1C60  D0 23 00 04 */	stfs f1, 4(r3)
/* 802F4D24 002F1C64  C0 22 EF 18 */	lfs f1, lbl_8051D278@sda21(r2)
/* 802F4D28 002F1C68  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F4D2C 002F1C6C  C0 02 EF 1C */	lfs f0, lbl_8051D27C@sda21(r2)
/* 802F4D30 002F1C70  D0 23 00 0C */	stfs f1, 0xc(r3)
/* 802F4D34 002F1C74  C0 22 EE B8 */	lfs f1, lbl_8051D218@sda21(r2)
/* 802F4D38 002F1C78  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F4D3C 002F1C7C  C0 02 EF 20 */	lfs f0, lbl_8051D280@sda21(r2)
/* 802F4D40 002F1C80  D0 23 00 14 */	stfs f1, 0x14(r3)
/* 802F4D44 002F1C84  C0 22 EF 24 */	lfs f1, lbl_8051D284@sda21(r2)
/* 802F4D48 002F1C88  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F4D4C 002F1C8C  C0 02 EE B0 */	lfs f0, lbl_8051D210@sda21(r2)
/* 802F4D50 002F1C90  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 802F4D54 002F1C94  C0 82 EF 28 */	lfs f4, lbl_8051D288@sda21(r2)
/* 802F4D58 002F1C98  90 C3 00 20 */	stw r6, 0x20(r3)
/* 802F4D5C 002F1C9C  C0 62 EE F4 */	lfs f3, lbl_8051D254@sda21(r2)
/* 802F4D60 002F1CA0  90 A3 00 24 */	stw r5, 0x24(r3)
/* 802F4D64 002F1CA4  C0 42 EE EC */	lfs f2, lbl_8051D24C@sda21(r2)
/* 802F4D68 002F1CA8  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F4D6C 002F1CAC  C0 22 EF 2C */	lfs f1, lbl_8051D28C@sda21(r2)
/* 802F4D70 002F1CB0  98 83 00 2C */	stb r4, 0x2c(r3)
/* 802F4D74 002F1CB4  C0 02 EF 30 */	lfs f0, lbl_8051D290@sda21(r2)
/* 802F4D78 002F1CB8  90 03 00 30 */	stw r0, 0x30(r3)
/* 802F4D7C 002F1CBC  D0 83 00 34 */	stfs f4, 0x34(r3)
/* 802F4D80 002F1CC0  D0 63 00 38 */	stfs f3, 0x38(r3)
/* 802F4D84 002F1CC4  D0 43 00 3C */	stfs f2, 0x3c(r3)
/* 802F4D88 002F1CC8  D0 23 00 40 */	stfs f1, 0x40(r3)
/* 802F4D8C 002F1CCC  D0 03 00 44 */	stfs f0, 0x44(r3)
.L_802F4D90:
/* 802F4D90 002F1CD0  90 7F 01 1C */	stw r3, 0x11c(r31)
/* 802F4D94 002F1CD4  38 60 00 18 */	li r3, 0x18
/* 802F4D98 002F1CD8  4B D2 F1 0D */	bl __nw__FUl
/* 802F4D9C 002F1CDC  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4DA0 002F1CE0  41 82 00 0C */	beq .L_802F4DAC
/* 802F4DA4 002F1CE4  48 11 C5 ED */	bl __ct__5CNodeFv
/* 802F4DA8 002F1CE8  7C 60 1B 78 */	mr r0, r3
.L_802F4DAC:
/* 802F4DAC 002F1CEC  90 1F 00 10 */	stw r0, 0x10(r31)
/* 802F4DB0 002F1CF0  38 60 00 18 */	li r3, 0x18
/* 802F4DB4 002F1CF4  4B D2 F0 F1 */	bl __nw__FUl
/* 802F4DB8 002F1CF8  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4DBC 002F1CFC  41 82 00 0C */	beq .L_802F4DC8
/* 802F4DC0 002F1D00  48 11 C5 D1 */	bl __ct__5CNodeFv
/* 802F4DC4 002F1D04  7C 60 1B 78 */	mr r0, r3
.L_802F4DC8:
/* 802F4DC8 002F1D08  90 1F 00 14 */	stw r0, 0x14(r31)
/* 802F4DCC 002F1D0C  3B 20 00 00 */	li r25, 0
.L_802F4DD0:
/* 802F4DD0 002F1D10  38 60 00 3C */	li r3, 0x3c
/* 802F4DD4 002F1D14  4B D2 F0 D1 */	bl __nw__FUl
/* 802F4DD8 002F1D18  7C 76 1B 79 */	or. r22, r3, r3
/* 802F4DDC 002F1D1C  41 82 00 44 */	beq .L_802F4E20
/* 802F4DE0 002F1D20  83 1F 01 1C */	lwz r24, 0x11c(r31)
/* 802F4DE4 002F1D24  82 FF 00 04 */	lwz r23, 4(r31)
/* 802F4DE8 002F1D28  48 11 C5 A9 */	bl __ct__5CNodeFv
/* 802F4DEC 002F1D2C  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure21BigTreasureFireAttack@ha
/* 802F4DF0 002F1D30  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F4DF4 002F1D34  38 03 59 BC */	addi r0, r3, __vt__Q34Game11BigTreasure21BigTreasureFireAttack@l
/* 802F4DF8 002F1D38  90 16 00 00 */	stw r0, 0(r22)
/* 802F4DFC 002F1D3C  92 F6 00 18 */	stw r23, 0x18(r22)
/* 802F4E00 002F1D40  93 16 00 1C */	stw r24, 0x1c(r22)
/* 802F4E04 002F1D44  D0 16 00 20 */	stfs f0, 0x20(r22)
/* 802F4E08 002F1D48  D0 16 00 2C */	stfs f0, 0x2c(r22)
/* 802F4E0C 002F1D4C  D0 16 00 28 */	stfs f0, 0x28(r22)
/* 802F4E10 002F1D50  D0 16 00 24 */	stfs f0, 0x24(r22)
/* 802F4E14 002F1D54  D0 16 00 38 */	stfs f0, 0x38(r22)
/* 802F4E18 002F1D58  D0 16 00 34 */	stfs f0, 0x34(r22)
/* 802F4E1C 002F1D5C  D0 16 00 30 */	stfs f0, 0x30(r22)
.L_802F4E20:
/* 802F4E20 002F1D60  80 7F 00 14 */	lwz r3, 0x14(r31)
/* 802F4E24 002F1D64  7E C4 B3 78 */	mr r4, r22
/* 802F4E28 002F1D68  48 11 C5 E1 */	bl add__5CNodeFP5CNode
/* 802F4E2C 002F1D6C  3B 39 00 01 */	addi r25, r25, 1
/* 802F4E30 002F1D70  2C 19 00 08 */	cmpwi r25, 8
/* 802F4E34 002F1D74  41 80 FF 9C */	blt .L_802F4DD0
/* 802F4E38 002F1D78  38 60 00 18 */	li r3, 0x18
/* 802F4E3C 002F1D7C  4B D2 F0 69 */	bl __nw__FUl
/* 802F4E40 002F1D80  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4E44 002F1D84  41 82 00 0C */	beq .L_802F4E50
/* 802F4E48 002F1D88  48 11 C5 49 */	bl __ct__5CNodeFv
/* 802F4E4C 002F1D8C  7C 60 1B 78 */	mr r0, r3
.L_802F4E50:
/* 802F4E50 002F1D90  90 1F 00 4C */	stw r0, 0x4c(r31)
/* 802F4E54 002F1D94  38 60 00 18 */	li r3, 0x18
/* 802F4E58 002F1D98  4B D2 F0 4D */	bl __nw__FUl
/* 802F4E5C 002F1D9C  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4E60 002F1DA0  41 82 00 0C */	beq .L_802F4E6C
/* 802F4E64 002F1DA4  48 11 C5 2D */	bl __ct__5CNodeFv
/* 802F4E68 002F1DA8  7C 60 1B 78 */	mr r0, r3
.L_802F4E6C:
/* 802F4E6C 002F1DAC  90 1F 00 50 */	stw r0, 0x50(r31)
/* 802F4E70 002F1DB0  3B 20 00 00 */	li r25, 0
.L_802F4E74:
/* 802F4E74 002F1DB4  38 60 00 3C */	li r3, 0x3c
/* 802F4E78 002F1DB8  4B D2 F0 2D */	bl __nw__FUl
/* 802F4E7C 002F1DBC  7C 76 1B 79 */	or. r22, r3, r3
/* 802F4E80 002F1DC0  41 82 00 44 */	beq .L_802F4EC4
/* 802F4E84 002F1DC4  83 1F 01 1C */	lwz r24, 0x11c(r31)
/* 802F4E88 002F1DC8  82 FF 00 04 */	lwz r23, 4(r31)
/* 802F4E8C 002F1DCC  48 11 C5 05 */	bl __ct__5CNodeFv
/* 802F4E90 002F1DD0  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure20BigTreasureGasAttack@ha
/* 802F4E94 002F1DD4  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F4E98 002F1DD8  38 03 59 AC */	addi r0, r3, __vt__Q34Game11BigTreasure20BigTreasureGasAttack@l
/* 802F4E9C 002F1DDC  90 16 00 00 */	stw r0, 0(r22)
/* 802F4EA0 002F1DE0  92 F6 00 18 */	stw r23, 0x18(r22)
/* 802F4EA4 002F1DE4  93 16 00 1C */	stw r24, 0x1c(r22)
/* 802F4EA8 002F1DE8  D0 16 00 20 */	stfs f0, 0x20(r22)
/* 802F4EAC 002F1DEC  D0 16 00 2C */	stfs f0, 0x2c(r22)
/* 802F4EB0 002F1DF0  D0 16 00 28 */	stfs f0, 0x28(r22)
/* 802F4EB4 002F1DF4  D0 16 00 24 */	stfs f0, 0x24(r22)
/* 802F4EB8 002F1DF8  D0 16 00 38 */	stfs f0, 0x38(r22)
/* 802F4EBC 002F1DFC  D0 16 00 34 */	stfs f0, 0x34(r22)
/* 802F4EC0 002F1E00  D0 16 00 30 */	stfs f0, 0x30(r22)
.L_802F4EC4:
/* 802F4EC4 002F1E04  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 802F4EC8 002F1E08  7E C4 B3 78 */	mr r4, r22
/* 802F4ECC 002F1E0C  48 11 C5 3D */	bl add__5CNodeFP5CNode
/* 802F4ED0 002F1E10  3B 39 00 01 */	addi r25, r25, 1
/* 802F4ED4 002F1E14  2C 19 00 C8 */	cmpwi r25, 0xc8
/* 802F4ED8 002F1E18  41 80 FF 9C */	blt .L_802F4E74
/* 802F4EDC 002F1E1C  38 60 00 18 */	li r3, 0x18
/* 802F4EE0 002F1E20  4B D2 EF C5 */	bl __nw__FUl
/* 802F4EE4 002F1E24  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4EE8 002F1E28  41 82 00 0C */	beq .L_802F4EF4
/* 802F4EEC 002F1E2C  48 11 C4 A5 */	bl __ct__5CNodeFv
/* 802F4EF0 002F1E30  7C 60 1B 78 */	mr r0, r3
.L_802F4EF4:
/* 802F4EF4 002F1E34  90 1F 00 B0 */	stw r0, 0xb0(r31)
/* 802F4EF8 002F1E38  38 60 00 18 */	li r3, 0x18
/* 802F4EFC 002F1E3C  4B D2 EF A9 */	bl __nw__FUl
/* 802F4F00 002F1E40  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4F04 002F1E44  41 82 00 0C */	beq .L_802F4F10
/* 802F4F08 002F1E48  48 11 C4 89 */	bl __ct__5CNodeFv
/* 802F4F0C 002F1E4C  7C 60 1B 78 */	mr r0, r3
.L_802F4F10:
/* 802F4F10 002F1E50  90 1F 00 B4 */	stw r0, 0xb4(r31)
/* 802F4F14 002F1E54  3B 00 00 00 */	li r24, 0
.L_802F4F18:
/* 802F4F18 002F1E58  38 60 00 3C */	li r3, 0x3c
/* 802F4F1C 002F1E5C  4B D2 EF 89 */	bl __nw__FUl
/* 802F4F20 002F1E60  7C 64 1B 79 */	or. r4, r3, r3
/* 802F4F24 002F1E64  41 82 00 80 */	beq .L_802F4FA4
/* 802F4F28 002F1E68  82 FF 01 1C */	lwz r23, 0x11c(r31)
/* 802F4F2C 002F1E6C  7C 99 23 78 */	mr r25, r4
/* 802F4F30 002F1E70  82 DF 00 04 */	lwz r22, 4(r31)
/* 802F4F34 002F1E74  48 11 C4 5D */	bl __ct__5CNodeFv
/* 802F4F38 002F1E78  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure22BigTreasureWaterAttack@ha
/* 802F4F3C 002F1E7C  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F4F40 002F1E80  38 03 59 9C */	addi r0, r3, __vt__Q34Game11BigTreasure22BigTreasureWaterAttack@l
/* 802F4F44 002F1E84  38 60 00 54 */	li r3, 0x54
/* 802F4F48 002F1E88  90 19 00 00 */	stw r0, 0(r25)
/* 802F4F4C 002F1E8C  92 D9 00 18 */	stw r22, 0x18(r25)
/* 802F4F50 002F1E90  92 F9 00 1C */	stw r23, 0x1c(r25)
/* 802F4F54 002F1E94  D0 19 00 28 */	stfs f0, 0x28(r25)
/* 802F4F58 002F1E98  D0 19 00 24 */	stfs f0, 0x24(r25)
/* 802F4F5C 002F1E9C  D0 19 00 20 */	stfs f0, 0x20(r25)
/* 802F4F60 002F1EA0  D0 19 00 34 */	stfs f0, 0x34(r25)
/* 802F4F64 002F1EA4  D0 19 00 30 */	stfs f0, 0x30(r25)
/* 802F4F68 002F1EA8  D0 19 00 2C */	stfs f0, 0x2c(r25)
/* 802F4F6C 002F1EAC  4B D2 EF 39 */	bl __nw__FUl
/* 802F4F70 002F1EB0  7C 76 1B 79 */	or. r22, r3, r3
/* 802F4F74 002F1EB4  41 82 00 28 */	beq .L_802F4F9C
/* 802F4F78 002F1EB8  38 99 00 2C */	addi r4, r25, 0x2c
/* 802F4F7C 002F1EBC  38 A0 01 17 */	li r5, 0x117
/* 802F4F80 002F1EC0  38 C0 01 18 */	li r6, 0x118
/* 802F4F84 002F1EC4  38 E0 01 19 */	li r7, 0x119
/* 802F4F88 002F1EC8  39 00 01 1A */	li r8, 0x11a
/* 802F4F8C 002F1ECC  48 0B B4 65 */	bl "__ct__Q23efx10TChasePos4FP10Vector3<f>UsUsUsUs"
/* 802F4F90 002F1ED0  3C 60 80 4D */	lis r3, __vt__Q23efx11TOootaWbomb@ha
/* 802F4F94 002F1ED4  38 03 59 80 */	addi r0, r3, __vt__Q23efx11TOootaWbomb@l
/* 802F4F98 002F1ED8  90 16 00 00 */	stw r0, 0(r22)
.L_802F4F9C:
/* 802F4F9C 002F1EDC  92 D9 00 38 */	stw r22, 0x38(r25)
/* 802F4FA0 002F1EE0  7F 24 CB 78 */	mr r4, r25
.L_802F4FA4:
/* 802F4FA4 002F1EE4  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 802F4FA8 002F1EE8  48 11 C4 61 */	bl add__5CNodeFP5CNode
/* 802F4FAC 002F1EEC  3B 18 00 01 */	addi r24, r24, 1
/* 802F4FB0 002F1EF0  2C 18 00 10 */	cmpwi r24, 0x10
/* 802F4FB4 002F1EF4  41 80 FF 64 */	blt .L_802F4F18
/* 802F4FB8 002F1EF8  38 60 00 18 */	li r3, 0x18
/* 802F4FBC 002F1EFC  4B D2 EE E9 */	bl __nw__FUl
/* 802F4FC0 002F1F00  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4FC4 002F1F04  41 82 00 0C */	beq .L_802F4FD0
/* 802F4FC8 002F1F08  48 11 C3 C9 */	bl __ct__5CNodeFv
/* 802F4FCC 002F1F0C  7C 60 1B 78 */	mr r0, r3
.L_802F4FD0:
/* 802F4FD0 002F1F10  90 1F 00 C8 */	stw r0, 0xc8(r31)
/* 802F4FD4 002F1F14  38 60 00 18 */	li r3, 0x18
/* 802F4FD8 002F1F18  4B D2 EE CD */	bl __nw__FUl
/* 802F4FDC 002F1F1C  7C 60 1B 79 */	or. r0, r3, r3
/* 802F4FE0 002F1F20  41 82 00 0C */	beq .L_802F4FEC
/* 802F4FE4 002F1F24  48 11 C3 AD */	bl __ct__5CNodeFv
/* 802F4FE8 002F1F28  7C 60 1B 78 */	mr r0, r3
.L_802F4FEC:
/* 802F4FEC 002F1F2C  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 802F4FF0 002F1F30  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 802F4FF4 002F1F34  3C 60 80 4D */	lis r3, __vt__Q23efx15TOootaElecparts@ha
/* 802F4FF8 002F1F38  90 1F 00 CC */	stw r0, 0xcc(r31)
/* 802F4FFC 002F1F3C  38 A5 69 8C */	addi r5, r5, __vt__Q23efx5TSync@l
/* 802F5000 002F1F40  38 84 69 40 */	addi r4, r4, __vt__Q23efx9TChasePos@l
/* 802F5004 002F1F44  38 63 58 BC */	addi r3, r3, __vt__Q23efx15TOootaElecparts@l
/* 802F5008 002F1F48  3B 40 00 00 */	li r26, 0
/* 802F500C 002F1F4C  3B 25 00 14 */	addi r25, r5, 0x14
/* 802F5010 002F1F50  3B 04 00 14 */	addi r24, r4, 0x14
/* 802F5014 002F1F54  3B C3 00 14 */	addi r30, r3, 0x14
.L_802F5018:
/* 802F5018 002F1F58  38 60 00 50 */	li r3, 0x50
/* 802F501C 002F1F5C  4B D2 EE 89 */	bl __nw__FUl
/* 802F5020 002F1F60  7C 64 1B 79 */	or. r4, r3, r3
/* 802F5024 002F1F64  41 82 01 48 */	beq .L_802F516C
/* 802F5028 002F1F68  83 7F 01 1C */	lwz r27, 0x11c(r31)
/* 802F502C 002F1F6C  7C 96 23 78 */	mr r22, r4
/* 802F5030 002F1F70  82 FF 00 04 */	lwz r23, 4(r31)
/* 802F5034 002F1F74  48 11 C3 5D */	bl __ct__5CNodeFv
/* 802F5038 002F1F78  3C 60 80 4D */	lis r3, __vt__Q34Game11BigTreasure21BigTreasureElecAttack@ha
/* 802F503C 002F1F7C  38 80 00 01 */	li r4, 1
/* 802F5040 002F1F80  38 63 59 24 */	addi r3, r3, __vt__Q34Game11BigTreasure21BigTreasureElecAttack@l
/* 802F5044 002F1F84  38 00 00 00 */	li r0, 0
/* 802F5048 002F1F88  90 76 00 00 */	stw r3, 0(r22)
/* 802F504C 002F1F8C  38 60 00 58 */	li r3, 0x58
/* 802F5050 002F1F90  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F5054 002F1F94  92 F6 00 18 */	stw r23, 0x18(r22)
/* 802F5058 002F1F98  93 76 00 1C */	stw r27, 0x1c(r22)
/* 802F505C 002F1F9C  98 96 00 20 */	stb r4, 0x20(r22)
/* 802F5060 002F1FA0  90 16 00 24 */	stw r0, 0x24(r22)
/* 802F5064 002F1FA4  D0 16 00 30 */	stfs f0, 0x30(r22)
/* 802F5068 002F1FA8  D0 16 00 2C */	stfs f0, 0x2c(r22)
/* 802F506C 002F1FAC  D0 16 00 28 */	stfs f0, 0x28(r22)
/* 802F5070 002F1FB0  D0 16 00 3C */	stfs f0, 0x3c(r22)
/* 802F5074 002F1FB4  D0 16 00 38 */	stfs f0, 0x38(r22)
/* 802F5078 002F1FB8  D0 16 00 34 */	stfs f0, 0x34(r22)
/* 802F507C 002F1FBC  90 16 00 40 */	stw r0, 0x40(r22)
/* 802F5080 002F1FC0  4B D2 EE 25 */	bl __nw__FUl
/* 802F5084 002F1FC4  7C 77 1B 79 */	or. r23, r3, r3
/* 802F5088 002F1FC8  41 82 00 2C */	beq .L_802F50B4
/* 802F508C 002F1FCC  C0 22 EF 00 */	lfs f1, lbl_8051D260@sda21(r2)
/* 802F5090 002F1FD0  38 80 00 00 */	li r4, 0
/* 802F5094 002F1FD4  38 A0 00 00 */	li r5, 0
/* 802F5098 002F1FD8  38 C0 01 08 */	li r6, 0x108
/* 802F509C 002F1FDC  38 E0 01 09 */	li r7, 0x109
/* 802F50A0 002F1FE0  39 00 01 0A */	li r8, 0x10a
/* 802F50A4 002F1FE4  48 0B BC 65 */	bl "__ct__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>fUsUsUs"
/* 802F50A8 002F1FE8  3C 60 80 4D */	lis r3, __vt__Q23efx10TOootaElec@ha
/* 802F50AC 002F1FEC  38 03 59 08 */	addi r0, r3, __vt__Q23efx10TOootaElec@l
/* 802F50B0 002F1FF0  90 17 00 00 */	stw r0, 0(r23)
.L_802F50B4:
/* 802F50B4 002F1FF4  92 F6 00 44 */	stw r23, 0x44(r22)
/* 802F50B8 002F1FF8  38 60 00 14 */	li r3, 0x14
/* 802F50BC 002F1FFC  4B D2 ED E9 */	bl __nw__FUl
/* 802F50C0 002F2000  28 03 00 00 */	cmplwi r3, 0
/* 802F50C4 002F2004  41 82 00 70 */	beq .L_802F5134
/* 802F50C8 002F2008  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802F50CC 002F200C  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802F50D0 002F2010  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802F50D4 002F2014  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802F50D8 002F2018  90 03 00 00 */	stw r0, 0(r3)
/* 802F50DC 002F201C  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802F50E0 002F2020  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802F50E4 002F2024  3C 80 80 4D */	lis r4, __vt__Q23efx15TOootaElecparts@ha
/* 802F50E8 002F2028  90 03 00 04 */	stw r0, 4(r3)
/* 802F50EC 002F202C  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802F50F0 002F2030  39 20 00 00 */	li r9, 0
/* 802F50F4 002F2034  39 00 02 B2 */	li r8, 0x2b2
/* 802F50F8 002F2038  90 03 00 00 */	stw r0, 0(r3)
/* 802F50FC 002F203C  38 E5 69 40 */	addi r7, r5, __vt__Q23efx9TChasePos@l
/* 802F5100 002F2040  38 D6 00 34 */	addi r6, r22, 0x34
/* 802F5104 002F2044  38 A0 02 48 */	li r5, 0x248
/* 802F5108 002F2048  93 23 00 04 */	stw r25, 4(r3)
/* 802F510C 002F204C  38 04 58 BC */	addi r0, r4, __vt__Q23efx15TOootaElecparts@l
/* 802F5110 002F2050  91 23 00 08 */	stw r9, 8(r3)
/* 802F5114 002F2054  B1 03 00 0C */	sth r8, 0xc(r3)
/* 802F5118 002F2058  99 23 00 0E */	stb r9, 0xe(r3)
/* 802F511C 002F205C  90 E3 00 00 */	stw r7, 0(r3)
/* 802F5120 002F2060  93 03 00 04 */	stw r24, 4(r3)
/* 802F5124 002F2064  90 C3 00 10 */	stw r6, 0x10(r3)
/* 802F5128 002F2068  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802F512C 002F206C  90 03 00 00 */	stw r0, 0(r3)
/* 802F5130 002F2070  93 C3 00 04 */	stw r30, 4(r3)
.L_802F5134:
/* 802F5134 002F2074  90 76 00 48 */	stw r3, 0x48(r22)
/* 802F5138 002F2078  38 60 00 2C */	li r3, 0x2c
/* 802F513C 002F207C  4B D2 ED 69 */	bl __nw__FUl
/* 802F5140 002F2080  7C 77 1B 79 */	or. r23, r3, r3
/* 802F5144 002F2084  41 82 00 20 */	beq .L_802F5164
/* 802F5148 002F2088  38 96 00 34 */	addi r4, r22, 0x34
/* 802F514C 002F208C  38 A0 02 4A */	li r5, 0x24a
/* 802F5150 002F2090  38 C0 02 4B */	li r6, 0x24b
/* 802F5154 002F2094  48 0B B0 ED */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 802F5158 002F2098  3C 60 80 4D */	lis r3, __vt__Q23efx13TOootaPhouden@ha
/* 802F515C 002F209C  38 03 58 A0 */	addi r0, r3, __vt__Q23efx13TOootaPhouden@l
/* 802F5160 002F20A0  90 17 00 00 */	stw r0, 0(r23)
.L_802F5164:
/* 802F5164 002F20A4  92 F6 00 4C */	stw r23, 0x4c(r22)
/* 802F5168 002F20A8  7E C4 B3 78 */	mr r4, r22
.L_802F516C:
/* 802F516C 002F20AC  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 802F5170 002F20B0  48 11 C2 99 */	bl add__5CNodeFP5CNode
/* 802F5174 002F20B4  3B 5A 00 01 */	addi r26, r26, 1
/* 802F5178 002F20B8  2C 1A 00 11 */	cmpwi r26, 0x11
/* 802F517C 002F20BC  41 80 FE 9C */	blt .L_802F5018
/* 802F5180 002F20C0  38 60 00 7C */	li r3, 0x7c
/* 802F5184 002F20C4  4B D2 ED 21 */	bl __nw__FUl
/* 802F5188 002F20C8  7C 76 1B 79 */	or. r22, r3, r3
/* 802F518C 002F20CC  41 82 00 30 */	beq .L_802F51BC
/* 802F5190 002F20D0  38 80 00 00 */	li r4, 0
/* 802F5194 002F20D4  38 A0 01 0C */	li r5, 0x10c
/* 802F5198 002F20D8  38 C0 01 0D */	li r6, 0x10d
/* 802F519C 002F20DC  38 E0 01 0E */	li r7, 0x10e
/* 802F51A0 002F20E0  39 00 01 0F */	li r8, 0x10f
/* 802F51A4 002F20E4  39 20 02 57 */	li r9, 0x257
/* 802F51A8 002F20E8  39 40 01 10 */	li r10, 0x110
/* 802F51AC 002F20EC  48 0B B5 71 */	bl __ct__Q23efx10TChaseMtx6FPA4_fUsUsUsUsUsUs
/* 802F51B0 002F20F0  3C 60 80 4F */	lis r3, __vt__Q23efx10TOootaFire@ha
/* 802F51B4 002F20F4  38 03 A1 1C */	addi r0, r3, __vt__Q23efx10TOootaFire@l
/* 802F51B8 002F20F8  90 16 00 00 */	stw r0, 0(r22)
.L_802F51BC:
/* 802F51BC 002F20FC  3C 80 80 4E */	lis r4, __vt__Q23efx23TChasePosPosLocalZScale@ha
/* 802F51C0 002F2100  3C 60 80 4D */	lis r3, __vt__Q23efx13TOootaElecLeg@ha
/* 802F51C4 002F2104  38 84 67 C4 */	addi r4, r4, __vt__Q23efx23TChasePosPosLocalZScale@l
/* 802F51C8 002F2108  92 DF 00 18 */	stw r22, 0x18(r31)
/* 802F51CC 002F210C  38 63 57 EC */	addi r3, r3, __vt__Q23efx13TOootaElecLeg@l
/* 802F51D0 002F2110  7F FD FB 78 */	mr r29, r31
/* 802F51D4 002F2114  7F FC FB 78 */	mr r28, r31
/* 802F51D8 002F2118  3B 64 00 14 */	addi r27, r4, 0x14
/* 802F51DC 002F211C  3B 43 00 14 */	addi r26, r3, 0x14
/* 802F51E0 002F2120  3A E0 00 00 */	li r23, 0
.L_802F51E4:
/* 802F51E4 002F2124  38 60 00 34 */	li r3, 0x34
/* 802F51E8 002F2128  4B D2 EC BD */	bl __nw__FUl
/* 802F51EC 002F212C  7C 76 1B 79 */	or. r22, r3, r3
/* 802F51F0 002F2130  41 82 00 24 */	beq .L_802F5214
/* 802F51F4 002F2134  38 9F 00 64 */	addi r4, r31, 0x64
/* 802F51F8 002F2138  38 BD 00 54 */	addi r5, r29, 0x54
/* 802F51FC 002F213C  38 C0 01 13 */	li r6, 0x113
/* 802F5200 002F2140  38 E0 01 14 */	li r7, 0x114
/* 802F5204 002F2144  48 0B B7 C9 */	bl "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"
/* 802F5208 002F2148  3C 60 80 4D */	lis r3, __vt__Q23efx9TOootaGas@ha
/* 802F520C 002F214C  38 03 58 38 */	addi r0, r3, __vt__Q23efx9TOootaGas@l
/* 802F5210 002F2150  90 16 00 00 */	stw r0, 0(r22)
.L_802F5214:
/* 802F5214 002F2154  92 DD 00 A0 */	stw r22, 0xa0(r29)
/* 802F5218 002F2158  7F 9E E3 78 */	mr r30, r28
/* 802F521C 002F215C  3A C0 00 00 */	li r22, 0
.L_802F5220:
/* 802F5220 002F2160  38 60 00 1C */	li r3, 0x1c
/* 802F5224 002F2164  4B D2 EC 81 */	bl __nw__FUl
/* 802F5228 002F2168  28 03 00 00 */	cmplwi r3, 0
/* 802F522C 002F216C  41 82 00 78 */	beq .L_802F52A4
/* 802F5230 002F2170  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802F5234 002F2174  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802F5238 002F2178  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802F523C 002F217C  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802F5240 002F2180  90 03 00 00 */	stw r0, 0(r3)
/* 802F5244 002F2184  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802F5248 002F2188  3C A0 80 4E */	lis r5, __vt__Q23efx23TChasePosPosLocalZScale@ha
/* 802F524C 002F218C  3C 80 80 4D */	lis r4, __vt__Q23efx13TOootaElecLeg@ha
/* 802F5250 002F2190  90 03 00 04 */	stw r0, 4(r3)
/* 802F5254 002F2194  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802F5258 002F2198  39 00 00 00 */	li r8, 0
/* 802F525C 002F219C  38 E0 02 B2 */	li r7, 0x2b2
/* 802F5260 002F21A0  90 03 00 00 */	stw r0, 0(r3)
/* 802F5264 002F21A4  38 C5 67 C4 */	addi r6, r5, __vt__Q23efx23TChasePosPosLocalZScale@l
/* 802F5268 002F21A8  C0 02 EF 14 */	lfs f0, lbl_8051D274@sda21(r2)
/* 802F526C 002F21AC  38 A0 01 0B */	li r5, 0x10b
/* 802F5270 002F21B0  93 23 00 04 */	stw r25, 4(r3)
/* 802F5274 002F21B4  38 04 57 EC */	addi r0, r4, __vt__Q23efx13TOootaElecLeg@l
/* 802F5278 002F21B8  91 03 00 08 */	stw r8, 8(r3)
/* 802F527C 002F21BC  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802F5280 002F21C0  99 03 00 0E */	stb r8, 0xe(r3)
/* 802F5284 002F21C4  90 C3 00 00 */	stw r6, 0(r3)
/* 802F5288 002F21C8  93 63 00 04 */	stw r27, 4(r3)
/* 802F528C 002F21CC  91 03 00 10 */	stw r8, 0x10(r3)
/* 802F5290 002F21D0  91 03 00 14 */	stw r8, 0x14(r3)
/* 802F5294 002F21D4  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F5298 002F21D8  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802F529C 002F21DC  90 03 00 00 */	stw r0, 0(r3)
/* 802F52A0 002F21E0  93 43 00 04 */	stw r26, 4(r3)
.L_802F52A4:
/* 802F52A4 002F21E4  3A D6 00 01 */	addi r22, r22, 1
/* 802F52A8 002F21E8  90 7E 00 D0 */	stw r3, 0xd0(r30)
/* 802F52AC 002F21EC  2C 16 00 03 */	cmpwi r22, 3
/* 802F52B0 002F21F0  3B DE 00 04 */	addi r30, r30, 4
/* 802F52B4 002F21F4  41 80 FF 6C */	blt .L_802F5220
/* 802F52B8 002F21F8  3A F7 00 01 */	addi r23, r23, 1
/* 802F52BC 002F21FC  3B 9C 00 0C */	addi r28, r28, 0xc
/* 802F52C0 002F2200  2C 17 00 04 */	cmpwi r23, 4
/* 802F52C4 002F2204  3B BD 00 04 */	addi r29, r29, 4
/* 802F52C8 002F2208  41 80 FF 1C */	blt .L_802F51E4
/* 802F52CC 002F220C  38 60 00 14 */	li r3, 0x14
/* 802F52D0 002F2210  4B D2 EB D5 */	bl __nw__FUl
/* 802F52D4 002F2214  28 03 00 00 */	cmplwi r3, 0
/* 802F52D8 002F2218  41 82 00 70 */	beq .L_802F5348
/* 802F52DC 002F221C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802F52E0 002F2220  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 802F52E4 002F2224  38 05 A7 F8 */	addi r0, r5, __vt__Q23efx5TBase@l
/* 802F52E8 002F2228  3C C0 80 4E */	lis r6, __vt__Q23efx5TSync@ha
/* 802F52EC 002F222C  90 03 00 00 */	stw r0, 0(r3)
/* 802F52F0 002F2230  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 802F52F4 002F2234  3C A0 80 4E */	lis r5, __vt__Q23efx9TChasePos@ha
/* 802F52F8 002F2238  3C 80 80 4D */	lis r4, __vt__Q23efx17TOootaElecAttack1@ha
/* 802F52FC 002F223C  90 03 00 04 */	stw r0, 4(r3)
/* 802F5300 002F2240  38 06 69 8C */	addi r0, r6, __vt__Q23efx5TSync@l
/* 802F5304 002F2244  38 84 57 A0 */	addi r4, r4, __vt__Q23efx17TOootaElecAttack1@l
/* 802F5308 002F2248  39 00 00 00 */	li r8, 0
/* 802F530C 002F224C  90 03 00 00 */	stw r0, 0(r3)
/* 802F5310 002F2250  38 E0 02 B2 */	li r7, 0x2b2
/* 802F5314 002F2254  38 C5 69 40 */	addi r6, r5, __vt__Q23efx9TChasePos@l
/* 802F5318 002F2258  38 A0 02 4F */	li r5, 0x24f
/* 802F531C 002F225C  93 23 00 04 */	stw r25, 4(r3)
/* 802F5320 002F2260  38 04 00 14 */	addi r0, r4, 0x14
/* 802F5324 002F2264  91 03 00 08 */	stw r8, 8(r3)
/* 802F5328 002F2268  B0 E3 00 0C */	sth r7, 0xc(r3)
/* 802F532C 002F226C  99 03 00 0E */	stb r8, 0xe(r3)
/* 802F5330 002F2270  90 C3 00 00 */	stw r6, 0(r3)
/* 802F5334 002F2274  93 03 00 04 */	stw r24, 4(r3)
/* 802F5338 002F2278  91 03 00 10 */	stw r8, 0x10(r3)
/* 802F533C 002F227C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 802F5340 002F2280  90 83 00 00 */	stw r4, 0(r3)
/* 802F5344 002F2284  90 03 00 04 */	stw r0, 4(r3)
.L_802F5348:
/* 802F5348 002F2288  90 7F 01 00 */	stw r3, 0x100(r31)
/* 802F534C 002F228C  38 60 00 2C */	li r3, 0x2c
/* 802F5350 002F2290  4B D2 EB 55 */	bl __nw__FUl
/* 802F5354 002F2294  7C 76 1B 79 */	or. r22, r3, r3
/* 802F5358 002F2298  41 82 00 20 */	beq .L_802F5378
/* 802F535C 002F229C  38 80 00 00 */	li r4, 0
/* 802F5360 002F22A0  38 A0 02 50 */	li r5, 0x250
/* 802F5364 002F22A4  38 C0 02 51 */	li r6, 0x251
/* 802F5368 002F22A8  48 0B AE D9 */	bl "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"
/* 802F536C 002F22AC  3C 60 80 4D */	lis r3, __vt__Q23efx17TOootaElecAttack2@ha
/* 802F5370 002F22B0  38 03 57 84 */	addi r0, r3, __vt__Q23efx17TOootaElecAttack2@l
/* 802F5374 002F22B4  90 16 00 00 */	stw r0, 0(r22)
.L_802F5378:
/* 802F5378 002F22B8  92 DF 01 04 */	stw r22, 0x104(r31)
/* 802F537C 002F22BC  38 60 00 20 */	li r3, 0x20
/* 802F5380 002F22C0  4B D2 EB 25 */	bl __nw__FUl
/* 802F5384 002F22C4  7C 60 1B 79 */	or. r0, r3, r3
/* 802F5388 002F22C8  41 82 00 10 */	beq .L_802F5398
/* 802F538C 002F22CC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F5390 002F22D0  4B F4 BE ED */	bl __ct__Q24Game19JointShadowRootNodeFPQ24Game8Creature
/* 802F5394 002F22D4  7C 60 1B 78 */	mr r0, r3
.L_802F5398:
/* 802F5398 002F22D8  90 1F 01 14 */	stw r0, 0x114(r31)
/* 802F539C 002F22DC  38 60 00 40 */	li r3, 0x40
/* 802F53A0 002F22E0  4B D2 EC 0D */	bl __nwa__FUl
/* 802F53A4 002F22E4  3B 20 00 00 */	li r25, 0
/* 802F53A8 002F22E8  3C 80 80 4D */	lis r4, __vt__Q34Game11BigTreasure16AttackShadowNode@ha
/* 802F53AC 002F22EC  90 7F 01 18 */	stw r3, 0x118(r31)
/* 802F53B0 002F22F0  7F 36 CB 78 */	mr r22, r25
/* 802F53B4 002F22F4  C3 E2 EE A0 */	lfs f31, lbl_8051D200@sda21(r2)
/* 802F53B8 002F22F8  3A E4 59 CC */	addi r23, r4, __vt__Q34Game11BigTreasure16AttackShadowNode@l
/* 802F53BC 002F22FC  3B 40 00 00 */	li r26, 0
.L_802F53C0:
/* 802F53C0 002F2300  38 60 00 2C */	li r3, 0x2c
/* 802F53C4 002F2304  4B D2 EA E1 */	bl __nw__FUl
/* 802F53C8 002F2308  7C 78 1B 79 */	or. r24, r3, r3
/* 802F53CC 002F230C  41 82 00 18 */	beq .L_802F53E4
/* 802F53D0 002F2310  38 80 00 02 */	li r4, 2
/* 802F53D4 002F2314  4B F4 BF 09 */	bl __ct__Q24Game15JointShadowNodeFi
/* 802F53D8 002F2318  92 F8 00 00 */	stw r23, 0(r24)
/* 802F53DC 002F231C  92 D8 00 24 */	stw r22, 0x24(r24)
/* 802F53E0 002F2320  D3 F8 00 28 */	stfs f31, 0x28(r24)
.L_802F53E4:
/* 802F53E4 002F2324  80 7F 01 18 */	lwz r3, 0x118(r31)
/* 802F53E8 002F2328  3B 5A 00 01 */	addi r26, r26, 1
/* 802F53EC 002F232C  2C 1A 00 10 */	cmpwi r26, 0x10
/* 802F53F0 002F2330  7F 03 C9 2E */	stwx r24, r3, r25
/* 802F53F4 002F2334  3B 39 00 04 */	addi r25, r25, 4
/* 802F53F8 002F2338  41 80 FF C8 */	blt .L_802F53C0
/* 802F53FC 002F233C  7F E3 FB 78 */	mr r3, r31
/* 802F5400 002F2340  E3 E1 00 38 */	psq_l f31, 56(r1), 0, qr0
/* 802F5404 002F2344  CB E1 00 30 */	lfd f31, 0x30(r1)
/* 802F5408 002F2348  BA C1 00 08 */	lmw r22, 8(r1)
/* 802F540C 002F234C  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F5410 002F2350  7C 08 03 A6 */	mtlr r0
/* 802F5414 002F2354  38 21 00 40 */	addi r1, r1, 0x40
/* 802F5418 002F2358  4E 80 00 20 */	blr 
.endfn __ct__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure3Obj

.fn init__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F541C 002F235C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F5420 002F2360  7C 08 02 A6 */	mflr r0
/* 802F5424 002F2364  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F5428 002F2368  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F542C 002F236C  38 00 00 00 */	li r0, 0
/* 802F5430 002F2370  BF 41 00 08 */	stmw r26, 8(r1)
/* 802F5434 002F2374  7C 7F 1B 78 */	mr r31, r3
/* 802F5438 002F2378  98 03 00 00 */	stb r0, 0(r3)
/* 802F543C 002F237C  98 03 00 01 */	stb r0, 1(r3)
/* 802F5440 002F2380  98 03 00 02 */	stb r0, 2(r3)
/* 802F5444 002F2384  98 03 00 03 */	stb r0, 3(r3)
/* 802F5448 002F2388  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F544C 002F238C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F5450 002F2390  D0 03 00 54 */	stfs f0, 0x54(r3)
/* 802F5454 002F2394  D0 03 00 58 */	stfs f0, 0x58(r3)
/* 802F5458 002F2398  D0 03 00 5C */	stfs f0, 0x5c(r3)
/* 802F545C 002F239C  D0 03 00 60 */	stfs f0, 0x60(r3)
/* 802F5460 002F23A0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 802F5464 002F23A4  80 63 00 10 */	lwz r3, 0x10(r3)
/* 802F5468 002F23A8  48 00 00 24 */	b .L_802F548C
.L_802F546C:
/* 802F546C 002F23AC  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802F5470 002F23B0  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802F5474 002F23B4  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F5478 002F23B8  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802F547C 002F23BC  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 802F5480 002F23C0  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802F5484 002F23C4  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 802F5488 002F23C8  80 63 00 04 */	lwz r3, 4(r3)
.L_802F548C:
/* 802F548C 002F23CC  28 03 00 00 */	cmplwi r3, 0
/* 802F5490 002F23D0  40 82 FF DC */	bne .L_802F546C
/* 802F5494 002F23D4  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 802F5498 002F23D8  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F549C 002F23DC  80 63 00 10 */	lwz r3, 0x10(r3)
/* 802F54A0 002F23E0  48 00 00 24 */	b .L_802F54C4
.L_802F54A4:
/* 802F54A4 002F23E4  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802F54A8 002F23E8  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802F54AC 002F23EC  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F54B0 002F23F0  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802F54B4 002F23F4  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 802F54B8 002F23F8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802F54BC 002F23FC  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 802F54C0 002F2400  80 63 00 04 */	lwz r3, 4(r3)
.L_802F54C4:
/* 802F54C4 002F2404  28 03 00 00 */	cmplwi r3, 0
/* 802F54C8 002F2408  40 82 FF DC */	bne .L_802F54A4
/* 802F54CC 002F240C  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 802F54D0 002F2410  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F54D4 002F2414  80 63 00 10 */	lwz r3, 0x10(r3)
/* 802F54D8 002F2418  48 00 00 20 */	b .L_802F54F8
.L_802F54DC:
/* 802F54DC 002F241C  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F54E0 002F2420  D0 03 00 24 */	stfs f0, 0x24(r3)
/* 802F54E4 002F2424  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 802F54E8 002F2428  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802F54EC 002F242C  D0 03 00 30 */	stfs f0, 0x30(r3)
/* 802F54F0 002F2430  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802F54F4 002F2434  80 63 00 04 */	lwz r3, 4(r3)
.L_802F54F8:
/* 802F54F8 002F2438  28 03 00 00 */	cmplwi r3, 0
/* 802F54FC 002F243C  40 82 FF E0 */	bne .L_802F54DC
/* 802F5500 002F2440  80 9F 00 CC */	lwz r4, 0xcc(r31)
/* 802F5504 002F2444  38 60 00 01 */	li r3, 1
/* 802F5508 002F2448  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F550C 002F244C  38 00 00 00 */	li r0, 0
/* 802F5510 002F2450  80 84 00 10 */	lwz r4, 0x10(r4)
/* 802F5514 002F2454  48 00 00 2C */	b .L_802F5540
.L_802F5518:
/* 802F5518 002F2458  98 64 00 20 */	stb r3, 0x20(r4)
/* 802F551C 002F245C  90 04 00 24 */	stw r0, 0x24(r4)
/* 802F5520 002F2460  D0 04 00 30 */	stfs f0, 0x30(r4)
/* 802F5524 002F2464  D0 04 00 2C */	stfs f0, 0x2c(r4)
/* 802F5528 002F2468  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 802F552C 002F246C  D0 04 00 3C */	stfs f0, 0x3c(r4)
/* 802F5530 002F2470  D0 04 00 38 */	stfs f0, 0x38(r4)
/* 802F5534 002F2474  D0 04 00 34 */	stfs f0, 0x34(r4)
/* 802F5538 002F2478  90 04 00 40 */	stw r0, 0x40(r4)
/* 802F553C 002F247C  80 84 00 04 */	lwz r4, 4(r4)
.L_802F5540:
/* 802F5540 002F2480  28 04 00 00 */	cmplwi r4, 0
/* 802F5544 002F2484  40 82 FF D4 */	bne .L_802F5518
/* 802F5548 002F2488  80 BF 00 04 */	lwz r5, 4(r31)
/* 802F554C 002F248C  3C 60 80 49 */	lis r3, lbl_8048D204@ha
/* 802F5550 002F2490  38 83 D2 04 */	addi r4, r3, lbl_8048D204@l
/* 802F5554 002F2494  80 65 01 74 */	lwz r3, 0x174(r5)
/* 802F5558 002F2498  48 14 9A 8D */	bl getJoint__Q28SysShape5ModelFPc
/* 802F555C 002F249C  48 13 43 45 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F5560 002F24A0  7C 60 1B 78 */	mr r0, r3
/* 802F5564 002F24A4  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 802F5568 002F24A8  7C 04 03 78 */	mr r4, r0
/* 802F556C 002F24AC  48 0B B2 75 */	bl setMtxptr__Q23efx10TChaseMtx6FPA4_f
/* 802F5570 002F24B0  3B 60 00 00 */	li r27, 0
/* 802F5574 002F24B4  7F FC FB 78 */	mr r28, r31
.L_802F5578:
/* 802F5578 002F24B8  3B 40 00 00 */	li r26, 0
/* 802F557C 002F24BC  7F 9D E3 78 */	mr r29, r28
.L_802F5580:
/* 802F5580 002F24C0  80 7F 00 04 */	lwz r3, 4(r31)
/* 802F5584 002F24C4  7F 64 DB 78 */	mr r4, r27
/* 802F5588 002F24C8  38 BA 00 01 */	addi r5, r26, 1
/* 802F558C 002F24CC  4B FE 79 A9 */	bl getJointPositionPtr__Q34Game11BigTreasure3ObjFii
/* 802F5590 002F24D0  7C 7E 1B 78 */	mr r30, r3
/* 802F5594 002F24D4  80 7F 00 04 */	lwz r3, 4(r31)
/* 802F5598 002F24D8  7F 64 DB 78 */	mr r4, r27
/* 802F559C 002F24DC  7F 45 D3 78 */	mr r5, r26
/* 802F55A0 002F24E0  4B FE 79 95 */	bl getJointPositionPtr__Q34Game11BigTreasure3ObjFii
/* 802F55A4 002F24E4  80 9D 00 D0 */	lwz r4, 0xd0(r29)
/* 802F55A8 002F24E8  3B 5A 00 01 */	addi r26, r26, 1
/* 802F55AC 002F24EC  2C 1A 00 03 */	cmpwi r26, 3
/* 802F55B0 002F24F0  3B BD 00 04 */	addi r29, r29, 4
/* 802F55B4 002F24F4  90 64 00 10 */	stw r3, 0x10(r4)
/* 802F55B8 002F24F8  93 C4 00 14 */	stw r30, 0x14(r4)
/* 802F55BC 002F24FC  41 80 FF C4 */	blt .L_802F5580
/* 802F55C0 002F2500  3B 7B 00 01 */	addi r27, r27, 1
/* 802F55C4 002F2504  3B 9C 00 0C */	addi r28, r28, 0xc
/* 802F55C8 002F2508  2C 1B 00 04 */	cmpwi r27, 4
/* 802F55CC 002F250C  41 80 FF AC */	blt .L_802F5578
/* 802F55D0 002F2510  BB 41 00 08 */	lmw r26, 8(r1)
/* 802F55D4 002F2514  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F55D8 002F2518  7C 08 03 A6 */	mtlr r0
/* 802F55DC 002F251C  38 21 00 20 */	addi r1, r1, 0x20
/* 802F55E0 002F2520  4E 80 00 20 */	blr 
.endfn init__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn update__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F55E4 002F2524  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F55E8 002F2528  7C 08 02 A6 */	mflr r0
/* 802F55EC 002F252C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F55F0 002F2530  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F55F4 002F2534  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802F55F8 002F2538  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802F55FC 002F253C  93 81 00 10 */	stw r28, 0x10(r1)
/* 802F5600 002F2540  7C 7C 1B 78 */	mr r28, r3
/* 802F5604 002F2544  48 00 02 95 */	bl updateFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5608 002F2548  7F 83 E3 78 */	mr r3, r28
/* 802F560C 002F254C  48 00 09 39 */	bl updateGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5610 002F2550  7F 83 E3 78 */	mr r3, r28
/* 802F5614 002F2554  48 00 12 F5 */	bl updateWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5618 002F2558  7F 83 E3 78 */	mr r3, r28
/* 802F561C 002F255C  48 00 20 11 */	bl updateElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5620 002F2560  7F 83 E3 78 */	mr r3, r28
/* 802F5624 002F2564  48 00 26 4D */	bl updateAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5628 002F2568  7F 9F E3 78 */	mr r31, r28
/* 802F562C 002F256C  3B C0 00 00 */	li r30, 0
/* 802F5630 002F2570  3B A0 00 00 */	li r29, 0
.L_802F5634:
/* 802F5634 002F2574  88 1F 00 00 */	lbz r0, 0(r31)
/* 802F5638 002F2578  28 00 00 00 */	cmplwi r0, 0
/* 802F563C 002F257C  41 82 00 30 */	beq .L_802F566C
/* 802F5640 002F2580  80 7C 00 04 */	lwz r3, 4(r28)
/* 802F5644 002F2584  3B C0 00 01 */	li r30, 1
/* 802F5648 002F2588  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802F564C 002F258C  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802F5650 002F2590  41 82 00 1C */	beq .L_802F566C
/* 802F5654 002F2594  7F A4 EB 78 */	mr r4, r29
/* 802F5658 002F2598  4B FE 81 DD */	bl isCapturedTreasure__Q34Game11BigTreasure3ObjFi
/* 802F565C 002F259C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F5660 002F25A0  40 82 00 0C */	bne .L_802F566C
/* 802F5664 002F25A4  7F 83 E3 78 */	mr r3, r28
/* 802F5668 002F25A8  48 00 22 4D */	bl finishAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv
.L_802F566C:
/* 802F566C 002F25AC  3B BD 00 01 */	addi r29, r29, 1
/* 802F5670 002F25B0  3B FF 00 01 */	addi r31, r31, 1
/* 802F5674 002F25B4  2C 1D 00 04 */	cmpwi r29, 4
/* 802F5678 002F25B8  41 80 FF BC */	blt .L_802F5634
/* 802F567C 002F25BC  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 802F5680 002F25C0  41 82 00 2C */	beq .L_802F56AC
/* 802F5684 002F25C4  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F5688 002F25C8  C0 3C 00 08 */	lfs f1, 8(r28)
/* 802F568C 002F25CC  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F5690 002F25D0  EC 01 00 2A */	fadds f0, f1, f0
/* 802F5694 002F25D4  D0 1C 00 08 */	stfs f0, 8(r28)
/* 802F5698 002F25D8  80 6D 9A EC */	lwz r3, sys@sda21(r13)
/* 802F569C 002F25DC  C0 3C 00 0C */	lfs f1, 0xc(r28)
/* 802F56A0 002F25E0  C0 03 00 54 */	lfs f0, 0x54(r3)
/* 802F56A4 002F25E4  EC 01 00 2A */	fadds f0, f1, f0
/* 802F56A8 002F25E8  D0 1C 00 0C */	stfs f0, 0xc(r28)
.L_802F56AC:
/* 802F56AC 002F25EC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F56B0 002F25F0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F56B4 002F25F4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802F56B8 002F25F8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802F56BC 002F25FC  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802F56C0 002F2600  7C 08 03 A6 */	mtlr r0
/* 802F56C4 002F2604  38 21 00 20 */	addi r1, r1, 0x20
/* 802F56C8 002F2608  4E 80 00 20 */	blr 
.endfn update__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn startFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F56CC 002F260C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F56D0 002F2610  7C 08 02 A6 */	mflr r0
/* 802F56D4 002F2614  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F56D8 002F2618  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802F56DC 002F261C  7C 7F 1B 78 */	mr r31, r3
/* 802F56E0 002F2620  88 03 00 01 */	lbz r0, 1(r3)
/* 802F56E4 002F2624  28 00 00 00 */	cmplwi r0, 0
/* 802F56E8 002F2628  40 82 01 00 */	bne .L_802F57E8
/* 802F56EC 002F262C  38 00 00 01 */	li r0, 1
/* 802F56F0 002F2630  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F56F4 002F2634  98 1F 00 01 */	stb r0, 1(r31)
/* 802F56F8 002F2638  38 80 00 01 */	li r4, 1
/* 802F56FC 002F263C  D0 1F 00 08 */	stfs f0, 8(r31)
/* 802F5700 002F2640  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 802F5704 002F2644  80 7F 00 04 */	lwz r3, 4(r31)
/* 802F5708 002F2648  4B FE 8B D5 */	bl isNormalAttack__Q34Game11BigTreasure3ObjFi
/* 802F570C 002F264C  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 802F5710 002F2650  7C 03 00 D0 */	neg r0, r3
/* 802F5714 002F2654  7C 00 1B 78 */	or r0, r0, r3
/* 802F5718 002F2658  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 802F571C 002F265C  38 03 00 02 */	addi r0, r3, 2
/* 802F5720 002F2660  2C 00 00 02 */	cmpwi r0, 2
/* 802F5724 002F2664  41 82 00 2C */	beq .L_802F5750
/* 802F5728 002F2668  40 80 00 3C */	bge .L_802F5764
/* 802F572C 002F266C  2C 00 00 01 */	cmpwi r0, 1
/* 802F5730 002F2670  40 80 00 08 */	bge .L_802F5738
/* 802F5734 002F2674  48 00 00 30 */	b .L_802F5764
.L_802F5738:
/* 802F5738 002F2678  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F573C 002F267C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5740 002F2680  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F5744 002F2684  C0 04 10 3C */	lfs f0, 0x103c(r4)
/* 802F5748 002F2688  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F574C 002F268C  48 00 00 18 */	b .L_802F5764
.L_802F5750:
/* 802F5750 002F2690  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F5754 002F2694  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5758 002F2698  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F575C 002F269C  C0 04 10 64 */	lfs f0, 0x1064(r4)
/* 802F5760 002F26A0  D0 03 00 28 */	stfs f0, 0x28(r3)
.L_802F5764:
/* 802F5764 002F26A4  7F E3 FB 78 */	mr r3, r31
/* 802F5768 002F26A8  48 00 02 BD */	bl updateFireEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F576C 002F26AC  7F E3 FB 78 */	mr r3, r31
/* 802F5770 002F26B0  48 00 00 8D */	bl startNewFireList__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5774 002F26B4  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 802F5778 002F26B8  81 3F 01 1C */	lwz r9, 0x11c(r31)
/* 802F577C 002F26BC  39 03 41 E4 */	addi r8, r3, "zero__10Vector3<f>"@l
/* 802F5780 002F26C0  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 802F5784 002F26C4  80 E8 00 00 */	lwz r7, 0(r8)
/* 802F5788 002F26C8  3C 60 80 4B */	lis r3, __vt__Q23efx8ArgScale@ha
/* 802F578C 002F26CC  80 C8 00 04 */	lwz r6, 4(r8)
/* 802F5790 002F26D0  38 A4 A7 EC */	addi r5, r4, __vt__Q23efx3Arg@l
/* 802F5794 002F26D4  C0 69 00 28 */	lfs f3, 0x28(r9)
/* 802F5798 002F26D8  38 03 A2 DC */	addi r0, r3, __vt__Q23efx8ArgScale@l
/* 802F579C 002F26DC  80 68 00 08 */	lwz r3, 8(r8)
/* 802F57A0 002F26E0  38 81 00 14 */	addi r4, r1, 0x14
/* 802F57A4 002F26E4  90 E1 00 08 */	stw r7, 8(r1)
/* 802F57A8 002F26E8  90 C1 00 0C */	stw r6, 0xc(r1)
/* 802F57AC 002F26EC  C0 41 00 08 */	lfs f2, 8(r1)
/* 802F57B0 002F26F0  90 61 00 10 */	stw r3, 0x10(r1)
/* 802F57B4 002F26F4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 802F57B8 002F26F8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802F57BC 002F26FC  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 802F57C0 002F2700  D0 41 00 18 */	stfs f2, 0x18(r1)
/* 802F57C4 002F2704  D0 21 00 1C */	stfs f1, 0x1c(r1)
/* 802F57C8 002F2708  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 802F57CC 002F270C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F57D0 002F2710  D0 61 00 24 */	stfs f3, 0x24(r1)
/* 802F57D4 002F2714  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 802F57D8 002F2718  81 83 00 00 */	lwz r12, 0(r3)
/* 802F57DC 002F271C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F57E0 002F2720  7D 89 03 A6 */	mtctr r12
/* 802F57E4 002F2724  4E 80 04 21 */	bctrl 
.L_802F57E8:
/* 802F57E8 002F2728  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F57EC 002F272C  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802F57F0 002F2730  7C 08 03 A6 */	mtlr r0
/* 802F57F4 002F2734  38 21 00 30 */	addi r1, r1, 0x30
/* 802F57F8 002F2738  4E 80 00 20 */	blr 
.endfn startFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn startNewFireList__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F57FC 002F273C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F5800 002F2740  7C 08 02 A6 */	mflr r0
/* 802F5804 002F2744  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F5808 002F2748  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F580C 002F274C  93 C1 00 08 */	stw r30, 8(r1)
/* 802F5810 002F2750  7C 7E 1B 78 */	mr r30, r3
/* 802F5814 002F2754  80 63 00 14 */	lwz r3, 0x14(r3)
/* 802F5818 002F2758  80 63 00 10 */	lwz r3, 0x10(r3)
/* 802F581C 002F275C  28 03 00 00 */	cmplwi r3, 0
/* 802F5820 002F2760  41 82 00 60 */	beq .L_802F5880
/* 802F5824 002F2764  7C 7F 1B 78 */	mr r31, r3
/* 802F5828 002F2768  48 11 BD A9 */	bl del__5CNodeFv
/* 802F582C 002F276C  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F5830 002F2770  7F E4 FB 78 */	mr r4, r31
/* 802F5834 002F2774  C0 02 EE AC */	lfs f0, lbl_8051D20C@sda21(r2)
/* 802F5838 002F2778  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 802F583C 002F277C  C0 3E 00 1C */	lfs f1, 0x1c(r30)
/* 802F5840 002F2780  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 802F5844 002F2784  C0 3E 00 20 */	lfs f1, 0x20(r30)
/* 802F5848 002F2788  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 802F584C 002F278C  C0 3E 00 24 */	lfs f1, 0x24(r30)
/* 802F5850 002F2790  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 802F5854 002F2794  C0 3E 00 28 */	lfs f1, 0x28(r30)
/* 802F5858 002F2798  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 802F585C 002F279C  C0 3E 00 2C */	lfs f1, 0x2c(r30)
/* 802F5860 002F27A0  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 802F5864 002F27A4  C0 3E 00 30 */	lfs f1, 0x30(r30)
/* 802F5868 002F27A8  D0 3F 00 38 */	stfs f1, 0x38(r31)
/* 802F586C 002F27AC  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 802F5870 002F27B0  EC 01 00 2A */	fadds f0, f1, f0
/* 802F5874 002F27B4  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 802F5878 002F27B8  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 802F587C 002F27BC  48 11 BB 8D */	bl add__5CNodeFP5CNode
.L_802F5880:
/* 802F5880 002F27C0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F5884 002F27C4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F5888 002F27C8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F588C 002F27CC  7C 08 03 A6 */	mtlr r0
/* 802F5890 002F27D0  38 21 00 10 */	addi r1, r1, 0x10
/* 802F5894 002F27D4  4E 80 00 20 */	blr 
.endfn startNewFireList__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F5898 002F27D8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F589C 002F27DC  7C 08 02 A6 */	mflr r0
/* 802F58A0 002F27E0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F58A4 002F27E4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F58A8 002F27E8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 802F58AC 002F27EC  3B C0 00 01 */	li r30, 1
/* 802F58B0 002F27F0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 802F58B4 002F27F4  93 81 00 10 */	stw r28, 0x10(r1)
/* 802F58B8 002F27F8  7C 7C 1B 78 */	mr r28, r3
/* 802F58BC 002F27FC  80 63 00 10 */	lwz r3, 0x10(r3)
/* 802F58C0 002F2800  83 A3 00 10 */	lwz r29, 0x10(r3)
/* 802F58C4 002F2804  48 00 00 94 */	b .L_802F5958
.L_802F58C8:
/* 802F58C8 002F2808  83 FD 00 04 */	lwz r31, 4(r29)
/* 802F58CC 002F280C  7F A3 EB 78 */	mr r3, r29
/* 802F58D0 002F2810  4B FF E1 E1 */	bl update__Q34Game11BigTreasure21BigTreasureFireAttackFv
/* 802F58D4 002F2814  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F58D8 002F2818  41 82 00 18 */	beq .L_802F58F0
/* 802F58DC 002F281C  7F A3 EB 78 */	mr r3, r29
/* 802F58E0 002F2820  48 11 BC F1 */	bl del__5CNodeFv
/* 802F58E4 002F2824  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 802F58E8 002F2828  7F A4 EB 78 */	mr r4, r29
/* 802F58EC 002F282C  48 11 BB 1D */	bl add__5CNodeFP5CNode
.L_802F58F0:
/* 802F58F0 002F2830  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 802F58F4 002F2834  80 03 00 10 */	lwz r0, 0x10(r3)
/* 802F58F8 002F2838  7C 1D 00 40 */	cmplw r29, r0
/* 802F58FC 002F283C  40 82 00 20 */	bne .L_802F591C
/* 802F5900 002F2840  7F 83 E3 78 */	mr r3, r28
/* 802F5904 002F2844  7F A4 EB 78 */	mr r4, r29
/* 802F5908 002F2848  38 A0 00 02 */	li r5, 2
/* 802F590C 002F284C  48 00 01 89 */	bl updateFireSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureFireAttacki
/* 802F5910 002F2850  38 9C 00 40 */	addi r4, r28, 0x40
/* 802F5914 002F2854  38 60 51 52 */	li r3, 0x5152
/* 802F5918 002F2858  48 17 87 9D */	bl PSStartSoundVec__FUlP3Vec
.L_802F591C:
/* 802F591C 002F285C  57 C0 06 3F */	clrlwi. r0, r30, 0x18
/* 802F5920 002F2860  41 82 00 34 */	beq .L_802F5954
/* 802F5924 002F2864  C0 3D 00 20 */	lfs f1, 0x20(r29)
/* 802F5928 002F2868  C0 02 EF 34 */	lfs f0, lbl_8051D294@sda21(r2)
/* 802F592C 002F286C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F5930 002F2870  40 80 00 24 */	bge .L_802F5954
/* 802F5934 002F2874  7F 83 E3 78 */	mr r3, r28
/* 802F5938 002F2878  7F A4 EB 78 */	mr r4, r29
/* 802F593C 002F287C  3B C0 00 00 */	li r30, 0
/* 802F5940 002F2880  38 A0 00 01 */	li r5, 1
/* 802F5944 002F2884  48 00 01 51 */	bl updateFireSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureFireAttacki
/* 802F5948 002F2888  38 9C 00 34 */	addi r4, r28, 0x34
/* 802F594C 002F288C  38 60 51 51 */	li r3, 0x5151
/* 802F5950 002F2890  48 17 87 65 */	bl PSStartSoundVec__FUlP3Vec
.L_802F5954:
/* 802F5954 002F2894  7F FD FB 78 */	mr r29, r31
.L_802F5958:
/* 802F5958 002F2898  28 1D 00 00 */	cmplwi r29, 0
/* 802F595C 002F289C  40 82 FF 6C */	bne .L_802F58C8
/* 802F5960 002F28A0  88 1C 00 01 */	lbz r0, 1(r28)
/* 802F5964 002F28A4  28 00 00 00 */	cmplwi r0, 0
/* 802F5968 002F28A8  41 82 00 9C */	beq .L_802F5A04
/* 802F596C 002F28AC  7F 83 E3 78 */	mr r3, r28
/* 802F5970 002F28B0  48 00 00 B5 */	bl updateFireEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5974 002F28B4  C0 3C 00 08 */	lfs f1, 8(r28)
/* 802F5978 002F28B8  C0 02 EF 24 */	lfs f0, lbl_8051D284@sda21(r2)
/* 802F597C 002F28BC  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F5980 002F28C0  40 81 00 78 */	ble .L_802F59F8
/* 802F5984 002F28C4  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F5988 002F28C8  D0 1C 00 08 */	stfs f0, 8(r28)
/* 802F598C 002F28CC  80 7C 00 14 */	lwz r3, 0x14(r28)
/* 802F5990 002F28D0  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 802F5994 002F28D4  28 1F 00 00 */	cmplwi r31, 0
/* 802F5998 002F28D8  41 82 00 60 */	beq .L_802F59F8
/* 802F599C 002F28DC  7F E3 FB 78 */	mr r3, r31
/* 802F59A0 002F28E0  48 11 BC 31 */	bl del__5CNodeFv
/* 802F59A4 002F28E4  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F59A8 002F28E8  7F E4 FB 78 */	mr r4, r31
/* 802F59AC 002F28EC  C0 02 EE AC */	lfs f0, lbl_8051D20C@sda21(r2)
/* 802F59B0 002F28F0  D0 3F 00 20 */	stfs f1, 0x20(r31)
/* 802F59B4 002F28F4  C0 3C 00 1C */	lfs f1, 0x1c(r28)
/* 802F59B8 002F28F8  D0 3F 00 24 */	stfs f1, 0x24(r31)
/* 802F59BC 002F28FC  C0 3C 00 20 */	lfs f1, 0x20(r28)
/* 802F59C0 002F2900  D0 3F 00 28 */	stfs f1, 0x28(r31)
/* 802F59C4 002F2904  C0 3C 00 24 */	lfs f1, 0x24(r28)
/* 802F59C8 002F2908  D0 3F 00 2C */	stfs f1, 0x2c(r31)
/* 802F59CC 002F290C  C0 3C 00 28 */	lfs f1, 0x28(r28)
/* 802F59D0 002F2910  D0 3F 00 30 */	stfs f1, 0x30(r31)
/* 802F59D4 002F2914  C0 3C 00 2C */	lfs f1, 0x2c(r28)
/* 802F59D8 002F2918  D0 3F 00 34 */	stfs f1, 0x34(r31)
/* 802F59DC 002F291C  C0 3C 00 30 */	lfs f1, 0x30(r28)
/* 802F59E0 002F2920  D0 3F 00 38 */	stfs f1, 0x38(r31)
/* 802F59E4 002F2924  C0 3F 00 34 */	lfs f1, 0x34(r31)
/* 802F59E8 002F2928  EC 01 00 2A */	fadds f0, f1, f0
/* 802F59EC 002F292C  D0 1F 00 34 */	stfs f0, 0x34(r31)
/* 802F59F0 002F2930  80 7C 00 10 */	lwz r3, 0x10(r28)
/* 802F59F4 002F2934  48 11 BA 15 */	bl add__5CNodeFP5CNode
.L_802F59F8:
/* 802F59F8 002F2938  38 9C 00 28 */	addi r4, r28, 0x28
/* 802F59FC 002F293C  38 60 51 50 */	li r3, 0x5150
/* 802F5A00 002F2940  48 17 86 B5 */	bl PSStartSoundVec__FUlP3Vec
.L_802F5A04:
/* 802F5A04 002F2944  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F5A08 002F2948  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F5A0C 002F294C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 802F5A10 002F2950  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 802F5A14 002F2954  83 81 00 10 */	lwz r28, 0x10(r1)
/* 802F5A18 002F2958  7C 08 03 A6 */	mtlr r0
/* 802F5A1C 002F295C  38 21 00 20 */	addi r1, r1, 0x20
/* 802F5A20 002F2960  4E 80 00 20 */	blr 
.endfn updateFireAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateFireEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F5A24 002F2964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F5A28 002F2968  7C 08 02 A6 */	mflr r0
/* 802F5A2C 002F296C  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F5A30 002F2970  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F5A34 002F2974  7C 7F 1B 78 */	mr r31, r3
/* 802F5A38 002F2978  3C 60 80 49 */	lis r3, lbl_8048D204@ha
/* 802F5A3C 002F297C  80 BF 00 04 */	lwz r5, 4(r31)
/* 802F5A40 002F2980  38 83 D2 04 */	addi r4, r3, lbl_8048D204@l
/* 802F5A44 002F2984  80 65 01 74 */	lwz r3, 0x174(r5)
/* 802F5A48 002F2988  48 14 95 9D */	bl getJoint__Q28SysShape5ModelFPc
/* 802F5A4C 002F298C  48 13 3E 55 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F5A50 002F2990  C0 03 00 00 */	lfs f0, 0(r3)
/* 802F5A54 002F2994  D0 1F 00 1C */	stfs f0, 0x1c(r31)
/* 802F5A58 002F2998  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 802F5A5C 002F299C  D0 1F 00 20 */	stfs f0, 0x20(r31)
/* 802F5A60 002F29A0  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 802F5A64 002F29A4  D0 1F 00 24 */	stfs f0, 0x24(r31)
/* 802F5A68 002F29A8  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F5A6C 002F29AC  D0 1F 00 28 */	stfs f0, 0x28(r31)
/* 802F5A70 002F29B0  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 802F5A74 002F29B4  D0 1F 00 2C */	stfs f0, 0x2c(r31)
/* 802F5A78 002F29B8  C0 03 00 2C */	lfs f0, 0x2c(r3)
/* 802F5A7C 002F29BC  D0 1F 00 30 */	stfs f0, 0x30(r31)
/* 802F5A80 002F29C0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F5A84 002F29C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F5A88 002F29C8  7C 08 03 A6 */	mtlr r0
/* 802F5A8C 002F29CC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F5A90 002F29D0  4E 80 00 20 */	blr 
.endfn updateFireEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateFireSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureFireAttacki, global
/* 802F5A94 002F29D4  1C 05 00 0C */	mulli r0, r5, 0xc
/* 802F5A98 002F29D8  80 A3 01 1C */	lwz r5, 0x11c(r3)
/* 802F5A9C 002F29DC  C0 64 00 20 */	lfs f3, 0x20(r4)
/* 802F5AA0 002F29E0  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 802F5AA4 002F29E4  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 802F5AA8 002F29E8  7C 63 02 14 */	add r3, r3, r0
/* 802F5AAC 002F29EC  C0 42 EE B8 */	lfs f2, lbl_8051D218@sda21(r2)
/* 802F5AB0 002F29F0  D0 03 00 28 */	stfs f0, 0x28(r3)
/* 802F5AB4 002F29F4  EC 42 00 72 */	fmuls f2, f2, f1
/* 802F5AB8 002F29F8  C0 02 EE AC */	lfs f0, lbl_8051D20C@sda21(r2)
/* 802F5ABC 002F29FC  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 802F5AC0 002F2A00  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 802F5AC4 002F2A04  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802F5AC8 002F2A08  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 802F5ACC 002F2A0C  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 802F5AD0 002F2A10  C0 23 00 28 */	lfs f1, 0x28(r3)
/* 802F5AD4 002F2A14  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F5AD8 002F2A18  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 802F5ADC 002F2A1C  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 802F5AE0 002F2A20  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F5AE4 002F2A24  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 802F5AE8 002F2A28  C0 23 00 30 */	lfs f1, 0x30(r3)
/* 802F5AEC 002F2A2C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F5AF0 002F2A30  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 802F5AF4 002F2A34  C0 43 00 28 */	lfs f2, 0x28(r3)
/* 802F5AF8 002F2A38  C0 24 00 30 */	lfs f1, 0x30(r4)
/* 802F5AFC 002F2A3C  EC 22 08 2A */	fadds f1, f2, f1
/* 802F5B00 002F2A40  D0 23 00 28 */	stfs f1, 0x28(r3)
/* 802F5B04 002F2A44  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F5B08 002F2A48  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 802F5B0C 002F2A4C  EC 22 08 2A */	fadds f1, f2, f1
/* 802F5B10 002F2A50  D0 23 00 2C */	stfs f1, 0x2c(r3)
/* 802F5B14 002F2A54  C0 43 00 30 */	lfs f2, 0x30(r3)
/* 802F5B18 002F2A58  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 802F5B1C 002F2A5C  EC 22 08 2A */	fadds f1, f2, f1
/* 802F5B20 002F2A60  D0 23 00 30 */	stfs f1, 0x30(r3)
/* 802F5B24 002F2A64  C0 23 00 2C */	lfs f1, 0x2c(r3)
/* 802F5B28 002F2A68  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F5B2C 002F2A6C  D0 03 00 2C */	stfs f0, 0x2c(r3)
/* 802F5B30 002F2A70  4E 80 00 20 */	blr 
.endfn updateFireSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureFireAttacki

.fn startGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F5B34 002F2A74  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 802F5B38 002F2A78  7C 08 02 A6 */	mflr r0
/* 802F5B3C 002F2A7C  90 01 00 64 */	stw r0, 0x64(r1)
/* 802F5B40 002F2A80  DB E1 00 50 */	stfd f31, 0x50(r1)
/* 802F5B44 002F2A84  F3 E1 00 58 */	psq_st f31, 88(r1), 0, qr0
/* 802F5B48 002F2A88  DB C1 00 40 */	stfd f30, 0x40(r1)
/* 802F5B4C 002F2A8C  F3 C1 00 48 */	psq_st f30, 72(r1), 0, qr0
/* 802F5B50 002F2A90  DB A1 00 30 */	stfd f29, 0x30(r1)
/* 802F5B54 002F2A94  F3 A1 00 38 */	psq_st f29, 56(r1), 0, qr0
/* 802F5B58 002F2A98  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802F5B5C 002F2A9C  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802F5B60 002F2AA0  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802F5B64 002F2AA4  93 81 00 20 */	stw r28, 0x20(r1)
/* 802F5B68 002F2AA8  7C 7F 1B 78 */	mr r31, r3
/* 802F5B6C 002F2AAC  88 03 00 02 */	lbz r0, 2(r3)
/* 802F5B70 002F2AB0  28 00 00 00 */	cmplwi r0, 0
/* 802F5B74 002F2AB4  40 82 02 4C */	bne .L_802F5DC0
/* 802F5B78 002F2AB8  38 00 00 01 */	li r0, 1
/* 802F5B7C 002F2ABC  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F5B80 002F2AC0  98 1F 00 02 */	stb r0, 2(r31)
/* 802F5B84 002F2AC4  38 80 00 02 */	li r4, 2
/* 802F5B88 002F2AC8  D0 1F 00 08 */	stfs f0, 8(r31)
/* 802F5B8C 002F2ACC  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 802F5B90 002F2AD0  80 7F 00 04 */	lwz r3, 4(r31)
/* 802F5B94 002F2AD4  4B FE 87 49 */	bl isNormalAttack__Q34Game11BigTreasure3ObjFi
/* 802F5B98 002F2AD8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F5B9C 002F2ADC  41 82 00 0C */	beq .L_802F5BA8
/* 802F5BA0 002F2AE0  38 00 00 01 */	li r0, 1
/* 802F5BA4 002F2AE4  48 00 00 4C */	b .L_802F5BF0
.L_802F5BA8:
/* 802F5BA8 002F2AE8  4B DD 39 F9 */	bl rand
/* 802F5BAC 002F2AEC  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F5BB0 002F2AF0  3C 00 43 30 */	lis r0, 0x4330
/* 802F5BB4 002F2AF4  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F5BB8 002F2AF8  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F5BBC 002F2AFC  90 01 00 08 */	stw r0, 8(r1)
/* 802F5BC0 002F2B00  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F5BC4 002F2B04  C8 01 00 08 */	lfd f0, 8(r1)
/* 802F5BC8 002F2B08  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F5BCC 002F2B0C  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F5BD0 002F2B10  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F5BD4 002F2B14  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F5BD8 002F2B18  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F5BDC 002F2B1C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F5BE0 002F2B20  40 80 00 0C */	bge .L_802F5BEC
/* 802F5BE4 002F2B24  38 00 00 02 */	li r0, 2
/* 802F5BE8 002F2B28  48 00 00 08 */	b .L_802F5BF0
.L_802F5BEC:
/* 802F5BEC 002F2B2C  38 00 00 03 */	li r0, 3
.L_802F5BF0:
/* 802F5BF0 002F2B30  2C 00 00 02 */	cmpwi r0, 2
/* 802F5BF4 002F2B34  41 82 00 50 */	beq .L_802F5C44
/* 802F5BF8 002F2B38  40 80 00 10 */	bge .L_802F5C08
/* 802F5BFC 002F2B3C  2C 00 00 01 */	cmpwi r0, 1
/* 802F5C00 002F2B40  40 80 00 14 */	bge .L_802F5C14
/* 802F5C04 002F2B44  48 00 00 AC */	b .L_802F5CB0
.L_802F5C08:
/* 802F5C08 002F2B48  2C 00 00 04 */	cmpwi r0, 4
/* 802F5C0C 002F2B4C  40 80 00 A4 */	bge .L_802F5CB0
/* 802F5C10 002F2B50  48 00 00 6C */	b .L_802F5C7C
.L_802F5C14:
/* 802F5C14 002F2B54  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C18 002F2B58  38 00 00 03 */	li r0, 3
/* 802F5C1C 002F2B5C  C0 02 EE F4 */	lfs f0, lbl_8051D254@sda21(r2)
/* 802F5C20 002F2B60  90 03 00 30 */	stw r0, 0x30(r3)
/* 802F5C24 002F2B64  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F5C28 002F2B68  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C2C 002F2B6C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F5C30 002F2B70  C0 24 10 B4 */	lfs f1, 0x10b4(r4)
/* 802F5C34 002F2B74  D0 23 00 34 */	stfs f1, 0x34(r3)
/* 802F5C38 002F2B78  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C3C 002F2B7C  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 802F5C40 002F2B80  48 00 00 70 */	b .L_802F5CB0
.L_802F5C44:
/* 802F5C44 002F2B84  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C48 002F2B88  38 00 00 04 */	li r0, 4
/* 802F5C4C 002F2B8C  90 03 00 30 */	stw r0, 0x30(r3)
/* 802F5C50 002F2B90  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F5C54 002F2B94  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C58 002F2B98  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F5C5C 002F2B9C  C0 04 10 DC */	lfs f0, 0x10dc(r4)
/* 802F5C60 002F2BA0  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802F5C64 002F2BA4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F5C68 002F2BA8  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C6C 002F2BAC  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F5C70 002F2BB0  C0 04 11 04 */	lfs f0, 0x1104(r4)
/* 802F5C74 002F2BB4  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 802F5C78 002F2BB8  48 00 00 38 */	b .L_802F5CB0
.L_802F5C7C:
/* 802F5C7C 002F2BBC  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C80 002F2BC0  38 00 00 04 */	li r0, 4
/* 802F5C84 002F2BC4  90 03 00 30 */	stw r0, 0x30(r3)
/* 802F5C88 002F2BC8  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F5C8C 002F2BCC  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5C90 002F2BD0  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F5C94 002F2BD4  C0 04 10 DC */	lfs f0, 0x10dc(r4)
/* 802F5C98 002F2BD8  D0 03 00 34 */	stfs f0, 0x34(r3)
/* 802F5C9C 002F2BDC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F5CA0 002F2BE0  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5CA4 002F2BE4  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F5CA8 002F2BE8  C0 04 11 2C */	lfs f0, 0x112c(r4)
/* 802F5CAC 002F2BEC  D0 03 00 38 */	stfs f0, 0x38(r3)
.L_802F5CB0:
/* 802F5CB0 002F2BF0  4B DD 38 F1 */	bl rand
/* 802F5CB4 002F2BF4  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F5CB8 002F2BF8  3C 00 43 30 */	lis r0, 0x4330
/* 802F5CBC 002F2BFC  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F5CC0 002F2C00  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F5CC4 002F2C04  90 01 00 08 */	stw r0, 8(r1)
/* 802F5CC8 002F2C08  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F5CCC 002F2C0C  C8 01 00 08 */	lfd f0, 8(r1)
/* 802F5CD0 002F2C10  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F5CD4 002F2C14  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F5CD8 002F2C18  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F5CDC 002F2C1C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F5CE0 002F2C20  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F5CE4 002F2C24  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F5CE8 002F2C28  40 80 00 14 */	bge .L_802F5CFC
/* 802F5CEC 002F2C2C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5CF0 002F2C30  38 00 00 01 */	li r0, 1
/* 802F5CF4 002F2C34  98 03 00 2C */	stb r0, 0x2c(r3)
/* 802F5CF8 002F2C38  48 00 00 10 */	b .L_802F5D08
.L_802F5CFC:
/* 802F5CFC 002F2C3C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5D00 002F2C40  38 00 00 00 */	li r0, 0
/* 802F5D04 002F2C44  98 03 00 2C */	stb r0, 0x2c(r3)
.L_802F5D08:
/* 802F5D08 002F2C48  7F E3 FB 78 */	mr r3, r31
/* 802F5D0C 002F2C4C  48 00 05 7D */	bl updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F5D10 002F2C50  4B DD 38 91 */	bl rand
/* 802F5D14 002F2C54  80 9F 01 1C */	lwz r4, 0x11c(r31)
/* 802F5D18 002F2C58  3F C0 43 30 */	lis r30, 0x4330
/* 802F5D1C 002F2C5C  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F5D20 002F2C60  93 C1 00 08 */	stw r30, 8(r1)
/* 802F5D24 002F2C64  80 04 00 30 */	lwz r0, 0x30(r4)
/* 802F5D28 002F2C68  7F FD FB 78 */	mr r29, r31
/* 802F5D2C 002F2C6C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F5D30 002F2C70  3B 80 00 00 */	li r28, 0
/* 802F5D34 002F2C74  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802F5D38 002F2C78  CB E2 EE D0 */	lfd f31, lbl_8051D230@sda21(r2)
/* 802F5D3C 002F2C7C  C8 01 00 08 */	lfd f0, 8(r1)
/* 802F5D40 002F2C80  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F5D44 002F2C84  EC 40 F8 28 */	fsubs f2, f0, f31
/* 802F5D48 002F2C88  C0 62 EF 38 */	lfs f3, lbl_8051D298@sda21(r2)
/* 802F5D4C 002F2C8C  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802F5D50 002F2C90  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F5D54 002F2C94  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802F5D58 002F2C98  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802F5D5C 002F2C9C  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802F5D60 002F2CA0  EF C2 08 24 */	fdivs f30, f2, f1
/* 802F5D64 002F2CA4  EF A3 00 24 */	fdivs f29, f3, f0
/* 802F5D68 002F2CA8  48 00 00 40 */	b .L_802F5DA8
.L_802F5D6C:
/* 802F5D6C 002F2CAC  6F 80 80 00 */	xoris r0, r28, 0x8000
/* 802F5D70 002F2CB0  93 C1 00 10 */	stw r30, 0x10(r1)
/* 802F5D74 002F2CB4  38 80 00 00 */	li r4, 0
/* 802F5D78 002F2CB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F5D7C 002F2CBC  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802F5D80 002F2CC0  EC 00 F8 28 */	fsubs f0, f0, f31
/* 802F5D84 002F2CC4  EC 1D F0 3A */	fmadds f0, f29, f0, f30
/* 802F5D88 002F2CC8  D0 1D 00 54 */	stfs f0, 0x54(r29)
/* 802F5D8C 002F2CCC  80 7D 00 A0 */	lwz r3, 0xa0(r29)
/* 802F5D90 002F2CD0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F5D94 002F2CD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F5D98 002F2CD8  7D 89 03 A6 */	mtctr r12
/* 802F5D9C 002F2CDC  4E 80 04 21 */	bctrl 
/* 802F5DA0 002F2CE0  3B BD 00 04 */	addi r29, r29, 4
/* 802F5DA4 002F2CE4  3B 9C 00 01 */	addi r28, r28, 1
.L_802F5DA8:
/* 802F5DA8 002F2CE8  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5DAC 002F2CEC  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802F5DB0 002F2CF0  7C 1C 00 00 */	cmpw r28, r0
/* 802F5DB4 002F2CF4  41 80 FF B8 */	blt .L_802F5D6C
/* 802F5DB8 002F2CF8  7F E3 FB 78 */	mr r3, r31
/* 802F5DBC 002F2CFC  48 00 00 3D */	bl startNewGasList__Q34Game11BigTreasure20BigTreasureAttackMgrFv
.L_802F5DC0:
/* 802F5DC0 002F2D00  E3 E1 00 58 */	psq_l f31, 88(r1), 0, qr0
/* 802F5DC4 002F2D04  CB E1 00 50 */	lfd f31, 0x50(r1)
/* 802F5DC8 002F2D08  E3 C1 00 48 */	psq_l f30, 72(r1), 0, qr0
/* 802F5DCC 002F2D0C  CB C1 00 40 */	lfd f30, 0x40(r1)
/* 802F5DD0 002F2D10  E3 A1 00 38 */	psq_l f29, 56(r1), 0, qr0
/* 802F5DD4 002F2D14  CB A1 00 30 */	lfd f29, 0x30(r1)
/* 802F5DD8 002F2D18  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802F5DDC 002F2D1C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802F5DE0 002F2D20  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802F5DE4 002F2D24  80 01 00 64 */	lwz r0, 0x64(r1)
/* 802F5DE8 002F2D28  83 81 00 20 */	lwz r28, 0x20(r1)
/* 802F5DEC 002F2D2C  7C 08 03 A6 */	mtlr r0
/* 802F5DF0 002F2D30  38 21 00 60 */	addi r1, r1, 0x60
/* 802F5DF4 002F2D34  4E 80 00 20 */	blr 
.endfn startGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn startNewGasList__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F5DF8 002F2D38  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 802F5DFC 002F2D3C  7C 08 02 A6 */	mflr r0
/* 802F5E00 002F2D40  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F5E04 002F2D44  93 E1 00 2C */	stw r31, 0x2c(r1)
/* 802F5E08 002F2D48  93 C1 00 28 */	stw r30, 0x28(r1)
/* 802F5E0C 002F2D4C  3B C0 00 00 */	li r30, 0
/* 802F5E10 002F2D50  93 A1 00 24 */	stw r29, 0x24(r1)
/* 802F5E14 002F2D54  93 81 00 20 */	stw r28, 0x20(r1)
/* 802F5E18 002F2D58  7C 7C 1B 78 */	mr r28, r3
/* 802F5E1C 002F2D5C  7F 9F E3 78 */	mr r31, r28
/* 802F5E20 002F2D60  48 00 00 F4 */	b .L_802F5F14
.L_802F5E24:
/* 802F5E24 002F2D64  80 7C 00 50 */	lwz r3, 0x50(r28)
/* 802F5E28 002F2D68  80 63 00 10 */	lwz r3, 0x10(r3)
/* 802F5E2C 002F2D6C  28 03 00 00 */	cmplwi r3, 0
/* 802F5E30 002F2D70  41 82 00 DC */	beq .L_802F5F0C
/* 802F5E34 002F2D74  7C 7D 1B 78 */	mr r29, r3
/* 802F5E38 002F2D78  48 11 B7 99 */	bl del__5CNodeFv
/* 802F5E3C 002F2D7C  C0 7F 00 54 */	lfs f3, 0x54(r31)
/* 802F5E40 002F2D80  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F5E44 002F2D84  FC 20 18 90 */	fmr f1, f3
/* 802F5E48 002F2D88  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F5E4C 002F2D8C  D0 1D 00 20 */	stfs f0, 0x20(r29)
/* 802F5E50 002F2D90  40 80 00 08 */	bge .L_802F5E58
/* 802F5E54 002F2D94  FC 20 18 50 */	fneg f1, f3
.L_802F5E58:
/* 802F5E58 002F2D98  C0 42 EE D8 */	lfs f2, lbl_8051D238@sda21(r2)
/* 802F5E5C 002F2D9C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F5E60 002F2DA0  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F5E64 002F2DA4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802F5E68 002F2DA8  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F5E6C 002F2DAC  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F5E70 002F2DB0  FC 00 08 1E */	fctiwz f0, f1
/* 802F5E74 002F2DB4  D8 01 00 08 */	stfd f0, 8(r1)
/* 802F5E78 002F2DB8  80 01 00 0C */	lwz r0, 0xc(r1)
/* 802F5E7C 002F2DBC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F5E80 002F2DC0  7C 64 02 14 */	add r3, r4, r0
/* 802F5E84 002F2DC4  C0 83 00 04 */	lfs f4, 4(r3)
/* 802F5E88 002F2DC8  40 80 00 28 */	bge .L_802F5EB0
/* 802F5E8C 002F2DCC  C0 02 EE DC */	lfs f0, lbl_8051D23C@sda21(r2)
/* 802F5E90 002F2DD0  EC 03 00 32 */	fmuls f0, f3, f0
/* 802F5E94 002F2DD4  FC 00 00 1E */	fctiwz f0, f0
/* 802F5E98 002F2DD8  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802F5E9C 002F2DDC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F5EA0 002F2DE0  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F5EA4 002F2DE4  7C 04 04 2E */	lfsx f0, r4, r0
/* 802F5EA8 002F2DE8  FC 00 00 50 */	fneg f0, f0
/* 802F5EAC 002F2DEC  48 00 00 1C */	b .L_802F5EC8
.L_802F5EB0:
/* 802F5EB0 002F2DF0  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802F5EB4 002F2DF4  FC 00 00 1E */	fctiwz f0, f0
/* 802F5EB8 002F2DF8  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802F5EBC 002F2DFC  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802F5EC0 002F2E00  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F5EC4 002F2E04  7C 04 04 2E */	lfsx f0, r4, r0
.L_802F5EC8:
/* 802F5EC8 002F2E08  D0 1D 00 24 */	stfs f0, 0x24(r29)
/* 802F5ECC 002F2E0C  7F A4 EB 78 */	mr r4, r29
/* 802F5ED0 002F2E10  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F5ED4 002F2E14  C0 02 EE E0 */	lfs f0, lbl_8051D240@sda21(r2)
/* 802F5ED8 002F2E18  D0 3D 00 28 */	stfs f1, 0x28(r29)
/* 802F5EDC 002F2E1C  D0 9D 00 2C */	stfs f4, 0x2c(r29)
/* 802F5EE0 002F2E20  C0 3C 00 64 */	lfs f1, 0x64(r28)
/* 802F5EE4 002F2E24  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 802F5EE8 002F2E28  C0 3C 00 68 */	lfs f1, 0x68(r28)
/* 802F5EEC 002F2E2C  D0 3D 00 34 */	stfs f1, 0x34(r29)
/* 802F5EF0 002F2E30  C0 3C 00 6C */	lfs f1, 0x6c(r28)
/* 802F5EF4 002F2E34  D0 3D 00 38 */	stfs f1, 0x38(r29)
/* 802F5EF8 002F2E38  C0 3D 00 34 */	lfs f1, 0x34(r29)
/* 802F5EFC 002F2E3C  EC 01 00 2A */	fadds f0, f1, f0
/* 802F5F00 002F2E40  D0 1D 00 34 */	stfs f0, 0x34(r29)
/* 802F5F04 002F2E44  80 7C 00 4C */	lwz r3, 0x4c(r28)
/* 802F5F08 002F2E48  48 11 B5 01 */	bl add__5CNodeFP5CNode
.L_802F5F0C:
/* 802F5F0C 002F2E4C  3B FF 00 04 */	addi r31, r31, 4
/* 802F5F10 002F2E50  3B DE 00 01 */	addi r30, r30, 1
.L_802F5F14:
/* 802F5F14 002F2E54  80 7C 01 1C */	lwz r3, 0x11c(r28)
/* 802F5F18 002F2E58  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802F5F1C 002F2E5C  7C 1E 00 00 */	cmpw r30, r0
/* 802F5F20 002F2E60  41 80 FF 04 */	blt .L_802F5E24
/* 802F5F24 002F2E64  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F5F28 002F2E68  83 E1 00 2C */	lwz r31, 0x2c(r1)
/* 802F5F2C 002F2E6C  83 C1 00 28 */	lwz r30, 0x28(r1)
/* 802F5F30 002F2E70  83 A1 00 24 */	lwz r29, 0x24(r1)
/* 802F5F34 002F2E74  83 81 00 20 */	lwz r28, 0x20(r1)
/* 802F5F38 002F2E78  7C 08 03 A6 */	mtlr r0
/* 802F5F3C 002F2E7C  38 21 00 30 */	addi r1, r1, 0x30
/* 802F5F40 002F2E80  4E 80 00 20 */	blr 
.endfn startNewGasList__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F5F44 002F2E84  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F5F48 002F2E88  7C 08 02 A6 */	mflr r0
/* 802F5F4C 002F2E8C  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F5F50 002F2E90  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 802F5F54 002F2E94  7C 7F 1B 78 */	mr r31, r3
/* 802F5F58 002F2E98  3B A1 00 08 */	addi r29, r1, 8
/* 802F5F5C 002F2E9C  3B C0 00 00 */	li r30, 0
/* 802F5F60 002F2EA0  80 02 EF 3C */	lwz r0, lbl_8051D29C@sda21(r2)
/* 802F5F64 002F2EA4  80 63 00 4C */	lwz r3, 0x4c(r3)
/* 802F5F68 002F2EA8  90 01 00 08 */	stw r0, 8(r1)
/* 802F5F6C 002F2EAC  83 63 00 10 */	lwz r27, 0x10(r3)
/* 802F5F70 002F2EB0  48 00 00 F8 */	b .L_802F6068
.L_802F5F74:
/* 802F5F74 002F2EB4  83 9B 00 04 */	lwz r28, 4(r27)
/* 802F5F78 002F2EB8  7F 63 DB 78 */	mr r3, r27
/* 802F5F7C 002F2EBC  4B FF DE A9 */	bl update__Q34Game11BigTreasure20BigTreasureGasAttackFv
/* 802F5F80 002F2EC0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F5F84 002F2EC4  41 82 00 18 */	beq .L_802F5F9C
/* 802F5F88 002F2EC8  7F 63 DB 78 */	mr r3, r27
/* 802F5F8C 002F2ECC  48 11 B6 45 */	bl del__5CNodeFv
/* 802F5F90 002F2ED0  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 802F5F94 002F2ED4  7F 64 DB 78 */	mr r4, r27
/* 802F5F98 002F2ED8  48 11 B4 71 */	bl add__5CNodeFP5CNode
.L_802F5F9C:
/* 802F5F9C 002F2EDC  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F5FA0 002F2EE0  80 63 00 30 */	lwz r3, 0x30(r3)
/* 802F5FA4 002F2EE4  7C 1E 1B D6 */	divw r0, r30, r3
/* 802F5FA8 002F2EE8  7C 00 19 D6 */	mullw r0, r0, r3
/* 802F5FAC 002F2EEC  7F 40 F0 50 */	subf r26, r0, r30
/* 802F5FB0 002F2EF0  7C 1D D0 AE */	lbzx r0, r29, r26
/* 802F5FB4 002F2EF4  28 00 00 00 */	cmplwi r0, 0
/* 802F5FB8 002F2EF8  41 82 00 A8 */	beq .L_802F6060
/* 802F5FBC 002F2EFC  C0 3B 00 20 */	lfs f1, 0x20(r27)
/* 802F5FC0 002F2F00  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F5FC4 002F2F04  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F5FC8 002F2F08  40 80 00 98 */	bge .L_802F6060
/* 802F5FCC 002F2F0C  38 00 00 00 */	li r0, 0
/* 802F5FD0 002F2F10  7F E3 FB 78 */	mr r3, r31
/* 802F5FD4 002F2F14  7C 1D D1 AE */	stbx r0, r29, r26
/* 802F5FD8 002F2F18  7F 64 DB 78 */	mr r4, r27
/* 802F5FDC 002F2F1C  7F 45 D3 78 */	mr r5, r26
/* 802F5FE0 002F2F20  48 00 03 01 */	bl updateGasSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure20BigTreasureGasAttacki
/* 802F5FE4 002F2F24  2C 1A 00 00 */	cmpwi r26, 0
/* 802F5FE8 002F2F28  40 82 00 1C */	bne .L_802F6004
/* 802F5FEC 002F2F2C  1C 9A 00 0C */	mulli r4, r26, 0xc
/* 802F5FF0 002F2F30  38 60 51 56 */	li r3, 0x5156
/* 802F5FF4 002F2F34  38 84 00 70 */	addi r4, r4, 0x70
/* 802F5FF8 002F2F38  7C 9F 22 14 */	add r4, r31, r4
/* 802F5FFC 002F2F3C  48 17 80 B9 */	bl PSStartSoundVec__FUlP3Vec
/* 802F6000 002F2F40  48 00 00 60 */	b .L_802F6060
.L_802F6004:
/* 802F6004 002F2F44  2C 1A 00 01 */	cmpwi r26, 1
/* 802F6008 002F2F48  40 82 00 1C */	bne .L_802F6024
/* 802F600C 002F2F4C  1C 9A 00 0C */	mulli r4, r26, 0xc
/* 802F6010 002F2F50  38 60 51 57 */	li r3, 0x5157
/* 802F6014 002F2F54  38 84 00 70 */	addi r4, r4, 0x70
/* 802F6018 002F2F58  7C 9F 22 14 */	add r4, r31, r4
/* 802F601C 002F2F5C  48 17 80 99 */	bl PSStartSoundVec__FUlP3Vec
/* 802F6020 002F2F60  48 00 00 40 */	b .L_802F6060
.L_802F6024:
/* 802F6024 002F2F64  2C 1A 00 02 */	cmpwi r26, 2
/* 802F6028 002F2F68  40 82 00 1C */	bne .L_802F6044
/* 802F602C 002F2F6C  1C 9A 00 0C */	mulli r4, r26, 0xc
/* 802F6030 002F2F70  38 60 51 58 */	li r3, 0x5158
/* 802F6034 002F2F74  38 84 00 70 */	addi r4, r4, 0x70
/* 802F6038 002F2F78  7C 9F 22 14 */	add r4, r31, r4
/* 802F603C 002F2F7C  48 17 80 79 */	bl PSStartSoundVec__FUlP3Vec
/* 802F6040 002F2F80  48 00 00 20 */	b .L_802F6060
.L_802F6044:
/* 802F6044 002F2F84  2C 1A 00 03 */	cmpwi r26, 3
/* 802F6048 002F2F88  40 82 00 18 */	bne .L_802F6060
/* 802F604C 002F2F8C  1C 9A 00 0C */	mulli r4, r26, 0xc
/* 802F6050 002F2F90  38 60 51 59 */	li r3, 0x5159
/* 802F6054 002F2F94  38 84 00 70 */	addi r4, r4, 0x70
/* 802F6058 002F2F98  7C 9F 22 14 */	add r4, r31, r4
/* 802F605C 002F2F9C  48 17 80 59 */	bl PSStartSoundVec__FUlP3Vec
.L_802F6060:
/* 802F6060 002F2FA0  7F 9B E3 78 */	mr r27, r28
/* 802F6064 002F2FA4  3B DE 00 01 */	addi r30, r30, 1
.L_802F6068:
/* 802F6068 002F2FA8  28 1B 00 00 */	cmplwi r27, 0
/* 802F606C 002F2FAC  40 82 FF 08 */	bne .L_802F5F74
/* 802F6070 002F2FB0  88 1F 00 02 */	lbz r0, 2(r31)
/* 802F6074 002F2FB4  28 00 00 00 */	cmplwi r0, 0
/* 802F6078 002F2FB8  41 82 01 FC */	beq .L_802F6274
/* 802F607C 002F2FBC  7F E3 FB 78 */	mr r3, r31
/* 802F6080 002F2FC0  48 00 02 09 */	bl updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F6084 002F2FC4  7F E4 FB 78 */	mr r4, r31
/* 802F6088 002F2FC8  38 C0 00 00 */	li r6, 0
/* 802F608C 002F2FCC  48 00 00 80 */	b .L_802F610C
.L_802F6090:
/* 802F6090 002F2FD0  80 7F 00 04 */	lwz r3, 4(r31)
/* 802F6094 002F2FD4  80 03 01 E0 */	lwz r0, 0x1e0(r3)
/* 802F6098 002F2FD8  54 00 05 AD */	rlwinm. r0, r0, 0, 0x16, 0x16
/* 802F609C 002F2FDC  40 82 00 68 */	bne .L_802F6104
/* 802F60A0 002F2FE0  88 05 00 2C */	lbz r0, 0x2c(r5)
/* 802F60A4 002F2FE4  28 00 00 00 */	cmplwi r0, 0
/* 802F60A8 002F2FE8  41 82 00 30 */	beq .L_802F60D8
/* 802F60AC 002F2FEC  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802F60B0 002F2FF0  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 802F60B4 002F2FF4  C0 02 EF 38 */	lfs f0, lbl_8051D298@sda21(r2)
/* 802F60B8 002F2FF8  EC 22 08 2A */	fadds f1, f2, f1
/* 802F60BC 002F2FFC  D0 24 00 54 */	stfs f1, 0x54(r4)
/* 802F60C0 002F3000  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 802F60C4 002F3004  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F60C8 002F3008  40 81 00 3C */	ble .L_802F6104
/* 802F60CC 002F300C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F60D0 002F3010  D0 04 00 54 */	stfs f0, 0x54(r4)
/* 802F60D4 002F3014  48 00 00 30 */	b .L_802F6104
.L_802F60D8:
/* 802F60D8 002F3018  C0 44 00 54 */	lfs f2, 0x54(r4)
/* 802F60DC 002F301C  C0 25 00 34 */	lfs f1, 0x34(r5)
/* 802F60E0 002F3020  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F60E4 002F3024  EC 22 08 28 */	fsubs f1, f2, f1
/* 802F60E8 002F3028  D0 24 00 54 */	stfs f1, 0x54(r4)
/* 802F60EC 002F302C  C0 24 00 54 */	lfs f1, 0x54(r4)
/* 802F60F0 002F3030  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F60F4 002F3034  40 80 00 10 */	bge .L_802F6104
/* 802F60F8 002F3038  C0 02 EF 38 */	lfs f0, lbl_8051D298@sda21(r2)
/* 802F60FC 002F303C  EC 01 00 2A */	fadds f0, f1, f0
/* 802F6100 002F3040  D0 04 00 54 */	stfs f0, 0x54(r4)
.L_802F6104:
/* 802F6104 002F3044  38 84 00 04 */	addi r4, r4, 4
/* 802F6108 002F3048  38 C6 00 01 */	addi r6, r6, 1
.L_802F610C:
/* 802F610C 002F304C  80 BF 01 1C */	lwz r5, 0x11c(r31)
/* 802F6110 002F3050  80 05 00 30 */	lwz r0, 0x30(r5)
/* 802F6114 002F3054  7C 06 00 00 */	cmpw r6, r0
/* 802F6118 002F3058  41 80 FF 78 */	blt .L_802F6090
/* 802F611C 002F305C  C0 3F 00 08 */	lfs f1, 8(r31)
/* 802F6120 002F3060  C0 02 EF 24 */	lfs f0, lbl_8051D284@sda21(r2)
/* 802F6124 002F3064  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F6128 002F3068  40 81 01 18 */	ble .L_802F6240
/* 802F612C 002F306C  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F6130 002F3070  7F FD FB 78 */	mr r29, r31
/* 802F6134 002F3074  3B C0 00 00 */	li r30, 0
/* 802F6138 002F3078  D0 1F 00 08 */	stfs f0, 8(r31)
/* 802F613C 002F307C  48 00 00 F4 */	b .L_802F6230
.L_802F6140:
/* 802F6140 002F3080  80 7F 00 50 */	lwz r3, 0x50(r31)
/* 802F6144 002F3084  83 83 00 10 */	lwz r28, 0x10(r3)
/* 802F6148 002F3088  28 1C 00 00 */	cmplwi r28, 0
/* 802F614C 002F308C  41 82 00 DC */	beq .L_802F6228
/* 802F6150 002F3090  7F 83 E3 78 */	mr r3, r28
/* 802F6154 002F3094  48 11 B4 7D */	bl del__5CNodeFv
/* 802F6158 002F3098  C0 7D 00 54 */	lfs f3, 0x54(r29)
/* 802F615C 002F309C  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F6160 002F30A0  FC 20 18 90 */	fmr f1, f3
/* 802F6164 002F30A4  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F6168 002F30A8  D0 1C 00 20 */	stfs f0, 0x20(r28)
/* 802F616C 002F30AC  40 80 00 08 */	bge .L_802F6174
/* 802F6170 002F30B0  FC 20 18 50 */	fneg f1, f3
.L_802F6174:
/* 802F6174 002F30B4  C0 42 EE D8 */	lfs f2, lbl_8051D238@sda21(r2)
/* 802F6178 002F30B8  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F617C 002F30BC  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F6180 002F30C0  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802F6184 002F30C4  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F6188 002F30C8  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F618C 002F30CC  FC 00 08 1E */	fctiwz f0, f1
/* 802F6190 002F30D0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 802F6194 002F30D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F6198 002F30D8  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F619C 002F30DC  7C 64 02 14 */	add r3, r4, r0
/* 802F61A0 002F30E0  C0 83 00 04 */	lfs f4, 4(r3)
/* 802F61A4 002F30E4  40 80 00 28 */	bge .L_802F61CC
/* 802F61A8 002F30E8  C0 02 EE DC */	lfs f0, lbl_8051D23C@sda21(r2)
/* 802F61AC 002F30EC  EC 03 00 32 */	fmuls f0, f3, f0
/* 802F61B0 002F30F0  FC 00 00 1E */	fctiwz f0, f0
/* 802F61B4 002F30F4  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802F61B8 002F30F8  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802F61BC 002F30FC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F61C0 002F3100  7C 04 04 2E */	lfsx f0, r4, r0
/* 802F61C4 002F3104  FC 00 00 50 */	fneg f0, f0
/* 802F61C8 002F3108  48 00 00 1C */	b .L_802F61E4
.L_802F61CC:
/* 802F61CC 002F310C  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802F61D0 002F3110  FC 00 00 1E */	fctiwz f0, f0
/* 802F61D4 002F3114  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802F61D8 002F3118  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F61DC 002F311C  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F61E0 002F3120  7C 04 04 2E */	lfsx f0, r4, r0
.L_802F61E4:
/* 802F61E4 002F3124  D0 1C 00 24 */	stfs f0, 0x24(r28)
/* 802F61E8 002F3128  7F 84 E3 78 */	mr r4, r28
/* 802F61EC 002F312C  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F61F0 002F3130  C0 02 EE E0 */	lfs f0, lbl_8051D240@sda21(r2)
/* 802F61F4 002F3134  D0 3C 00 28 */	stfs f1, 0x28(r28)
/* 802F61F8 002F3138  D0 9C 00 2C */	stfs f4, 0x2c(r28)
/* 802F61FC 002F313C  C0 3F 00 64 */	lfs f1, 0x64(r31)
/* 802F6200 002F3140  D0 3C 00 30 */	stfs f1, 0x30(r28)
/* 802F6204 002F3144  C0 3F 00 68 */	lfs f1, 0x68(r31)
/* 802F6208 002F3148  D0 3C 00 34 */	stfs f1, 0x34(r28)
/* 802F620C 002F314C  C0 3F 00 6C */	lfs f1, 0x6c(r31)
/* 802F6210 002F3150  D0 3C 00 38 */	stfs f1, 0x38(r28)
/* 802F6214 002F3154  C0 3C 00 34 */	lfs f1, 0x34(r28)
/* 802F6218 002F3158  EC 01 00 2A */	fadds f0, f1, f0
/* 802F621C 002F315C  D0 1C 00 34 */	stfs f0, 0x34(r28)
/* 802F6220 002F3160  80 7F 00 4C */	lwz r3, 0x4c(r31)
/* 802F6224 002F3164  48 11 B1 E5 */	bl add__5CNodeFP5CNode
.L_802F6228:
/* 802F6228 002F3168  3B BD 00 04 */	addi r29, r29, 4
/* 802F622C 002F316C  3B DE 00 01 */	addi r30, r30, 1
.L_802F6230:
/* 802F6230 002F3170  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6234 002F3174  80 03 00 30 */	lwz r0, 0x30(r3)
/* 802F6238 002F3178  7C 1E 00 00 */	cmpw r30, r0
/* 802F623C 002F317C  41 80 FF 04 */	blt .L_802F6140
.L_802F6240:
/* 802F6240 002F3180  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6244 002F3184  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 802F6248 002F3188  C0 03 00 38 */	lfs f0, 0x38(r3)
/* 802F624C 002F318C  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F6250 002F3190  40 81 00 18 */	ble .L_802F6268
/* 802F6254 002F3194  88 03 00 2C */	lbz r0, 0x2c(r3)
/* 802F6258 002F3198  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F625C 002F319C  68 00 00 01 */	xori r0, r0, 1
/* 802F6260 002F31A0  98 03 00 2C */	stb r0, 0x2c(r3)
/* 802F6264 002F31A4  D0 1F 00 0C */	stfs f0, 0xc(r31)
.L_802F6268:
/* 802F6268 002F31A8  38 9F 00 64 */	addi r4, r31, 0x64
/* 802F626C 002F31AC  38 60 51 55 */	li r3, 0x5155
/* 802F6270 002F31B0  48 17 7E 45 */	bl PSStartSoundVec__FUlP3Vec
.L_802F6274:
/* 802F6274 002F31B4  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 802F6278 002F31B8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F627C 002F31BC  7C 08 03 A6 */	mtlr r0
/* 802F6280 002F31C0  38 21 00 40 */	addi r1, r1, 0x40
/* 802F6284 002F31C4  4E 80 00 20 */	blr 
.endfn updateGasAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F6288 002F31C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F628C 002F31CC  7C 08 02 A6 */	mflr r0
/* 802F6290 002F31D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F6294 002F31D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F6298 002F31D8  7C 7F 1B 78 */	mr r31, r3
/* 802F629C 002F31DC  3C 60 80 49 */	lis r3, lbl_8048D218@ha
/* 802F62A0 002F31E0  80 BF 00 04 */	lwz r5, 4(r31)
/* 802F62A4 002F31E4  38 83 D2 18 */	addi r4, r3, lbl_8048D218@l
/* 802F62A8 002F31E8  80 65 01 74 */	lwz r3, 0x174(r5)
/* 802F62AC 002F31EC  48 14 8D 39 */	bl getJoint__Q28SysShape5ModelFPc
/* 802F62B0 002F31F0  48 13 35 F1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F62B4 002F31F4  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F62B8 002F31F8  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802F62BC 002F31FC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F62C0 002F3200  D0 1F 00 64 */	stfs f0, 0x64(r31)
/* 802F62C4 002F3204  D0 3F 00 68 */	stfs f1, 0x68(r31)
/* 802F62C8 002F3208  D0 5F 00 6C */	stfs f2, 0x6c(r31)
/* 802F62CC 002F320C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F62D0 002F3210  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F62D4 002F3214  7C 08 03 A6 */	mtlr r0
/* 802F62D8 002F3218  38 21 00 10 */	addi r1, r1, 0x10
/* 802F62DC 002F321C  4E 80 00 20 */	blr 
.endfn updateGasEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateGasSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure20BigTreasureGasAttacki, global
/* 802F62E0 002F3220  1C 05 00 0C */	mulli r0, r5, 0xc
/* 802F62E4 002F3224  80 A3 01 1C */	lwz r5, 0x11c(r3)
/* 802F62E8 002F3228  C0 64 00 20 */	lfs f3, 0x20(r4)
/* 802F62EC 002F322C  C0 25 00 28 */	lfs f1, 0x28(r5)
/* 802F62F0 002F3230  C0 04 00 24 */	lfs f0, 0x24(r4)
/* 802F62F4 002F3234  7C 63 02 14 */	add r3, r3, r0
/* 802F62F8 002F3238  C0 42 EE F0 */	lfs f2, lbl_8051D250@sda21(r2)
/* 802F62FC 002F323C  D0 03 00 70 */	stfs f0, 0x70(r3)
/* 802F6300 002F3240  EC 42 00 72 */	fmuls f2, f2, f1
/* 802F6304 002F3244  C0 02 EE E0 */	lfs f0, lbl_8051D240@sda21(r2)
/* 802F6308 002F3248  C0 24 00 28 */	lfs f1, 0x28(r4)
/* 802F630C 002F324C  D0 23 00 74 */	stfs f1, 0x74(r3)
/* 802F6310 002F3250  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802F6314 002F3254  C0 24 00 2C */	lfs f1, 0x2c(r4)
/* 802F6318 002F3258  D0 23 00 78 */	stfs f1, 0x78(r3)
/* 802F631C 002F325C  C0 23 00 70 */	lfs f1, 0x70(r3)
/* 802F6320 002F3260  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F6324 002F3264  D0 23 00 70 */	stfs f1, 0x70(r3)
/* 802F6328 002F3268  C0 23 00 74 */	lfs f1, 0x74(r3)
/* 802F632C 002F326C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F6330 002F3270  D0 23 00 74 */	stfs f1, 0x74(r3)
/* 802F6334 002F3274  C0 23 00 78 */	lfs f1, 0x78(r3)
/* 802F6338 002F3278  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F633C 002F327C  D0 23 00 78 */	stfs f1, 0x78(r3)
/* 802F6340 002F3280  C0 43 00 70 */	lfs f2, 0x70(r3)
/* 802F6344 002F3284  C0 24 00 30 */	lfs f1, 0x30(r4)
/* 802F6348 002F3288  EC 22 08 2A */	fadds f1, f2, f1
/* 802F634C 002F328C  D0 23 00 70 */	stfs f1, 0x70(r3)
/* 802F6350 002F3290  C0 43 00 74 */	lfs f2, 0x74(r3)
/* 802F6354 002F3294  C0 24 00 34 */	lfs f1, 0x34(r4)
/* 802F6358 002F3298  EC 22 08 2A */	fadds f1, f2, f1
/* 802F635C 002F329C  D0 23 00 74 */	stfs f1, 0x74(r3)
/* 802F6360 002F32A0  C0 43 00 78 */	lfs f2, 0x78(r3)
/* 802F6364 002F32A4  C0 24 00 38 */	lfs f1, 0x38(r4)
/* 802F6368 002F32A8  EC 22 08 2A */	fadds f1, f2, f1
/* 802F636C 002F32AC  D0 23 00 78 */	stfs f1, 0x78(r3)
/* 802F6370 002F32B0  C0 23 00 74 */	lfs f1, 0x74(r3)
/* 802F6374 002F32B4  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F6378 002F32B8  D0 03 00 74 */	stfs f0, 0x74(r3)
/* 802F637C 002F32BC  4E 80 00 20 */	blr 
.endfn updateGasSePosition__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure20BigTreasureGasAttacki

.fn startWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F6380 002F32C0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F6384 002F32C4  7C 08 02 A6 */	mflr r0
/* 802F6388 002F32C8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F638C 002F32CC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F6390 002F32D0  7C 7F 1B 78 */	mr r31, r3
/* 802F6394 002F32D4  88 03 00 03 */	lbz r0, 3(r3)
/* 802F6398 002F32D8  28 00 00 00 */	cmplwi r0, 0
/* 802F639C 002F32DC  40 82 00 DC */	bne .L_802F6478
/* 802F63A0 002F32E0  38 00 00 01 */	li r0, 1
/* 802F63A4 002F32E4  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F63A8 002F32E8  98 1F 00 03 */	stb r0, 3(r31)
/* 802F63AC 002F32EC  38 80 00 03 */	li r4, 3
/* 802F63B0 002F32F0  D0 1F 00 08 */	stfs f0, 8(r31)
/* 802F63B4 002F32F4  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 802F63B8 002F32F8  80 7F 00 04 */	lwz r3, 4(r31)
/* 802F63BC 002F32FC  4B FE 7F 21 */	bl isNormalAttack__Q34Game11BigTreasure3ObjFi
/* 802F63C0 002F3300  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 802F63C4 002F3304  7C 03 00 D0 */	neg r0, r3
/* 802F63C8 002F3308  7C 00 1B 78 */	or r0, r0, r3
/* 802F63CC 002F330C  7C 03 FE 70 */	srawi r3, r0, 0x1f
/* 802F63D0 002F3310  38 03 00 02 */	addi r0, r3, 2
/* 802F63D4 002F3314  2C 00 00 02 */	cmpwi r0, 2
/* 802F63D8 002F3318  41 82 00 54 */	beq .L_802F642C
/* 802F63DC 002F331C  40 80 00 8C */	bge .L_802F6468
/* 802F63E0 002F3320  2C 00 00 01 */	cmpwi r0, 1
/* 802F63E4 002F3324  40 80 00 08 */	bge .L_802F63EC
/* 802F63E8 002F3328  48 00 00 80 */	b .L_802F6468
.L_802F63EC:
/* 802F63EC 002F332C  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F63F0 002F3330  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F63F4 002F3334  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F63F8 002F3338  C0 04 11 7C */	lfs f0, 0x117c(r4)
/* 802F63FC 002F333C  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 802F6400 002F3340  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6404 002F3344  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6408 002F3348  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F640C 002F334C  C0 04 11 A4 */	lfs f0, 0x11a4(r4)
/* 802F6410 002F3350  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 802F6414 002F3354  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6418 002F3358  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F641C 002F335C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6420 002F3360  C0 04 11 CC */	lfs f0, 0x11cc(r4)
/* 802F6424 002F3364  D0 03 00 44 */	stfs f0, 0x44(r3)
/* 802F6428 002F3368  48 00 00 40 */	b .L_802F6468
.L_802F642C:
/* 802F642C 002F336C  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6430 002F3370  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6434 002F3374  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6438 002F3378  C0 04 11 F4 */	lfs f0, 0x11f4(r4)
/* 802F643C 002F337C  D0 03 00 3C */	stfs f0, 0x3c(r3)
/* 802F6440 002F3380  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6444 002F3384  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6448 002F3388  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F644C 002F338C  C0 04 12 1C */	lfs f0, 0x121c(r4)
/* 802F6450 002F3390  D0 03 00 40 */	stfs f0, 0x40(r3)
/* 802F6454 002F3394  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6458 002F3398  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F645C 002F339C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6460 002F33A0  C0 04 12 44 */	lfs f0, 0x1244(r4)
/* 802F6464 002F33A4  D0 03 00 44 */	stfs f0, 0x44(r3)
.L_802F6468:
/* 802F6468 002F33A8  7F E3 FB 78 */	mr r3, r31
/* 802F646C 002F33AC  48 00 06 01 */	bl updateWaterEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F6470 002F33B0  7F E3 FB 78 */	mr r3, r31
/* 802F6474 002F33B4  48 00 00 19 */	bl startNewWaterList__Q34Game11BigTreasure20BigTreasureAttackMgrFv
.L_802F6478:
/* 802F6478 002F33B8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F647C 002F33BC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F6480 002F33C0  7C 08 03 A6 */	mtlr r0
/* 802F6484 002F33C4  38 21 00 10 */	addi r1, r1, 0x10
/* 802F6488 002F33C8  4E 80 00 20 */	blr 
.endfn startWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn startNewWaterList__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F648C 002F33CC  94 21 FF 20 */	stwu r1, -0xe0(r1)
/* 802F6490 002F33D0  7C 08 02 A6 */	mflr r0
/* 802F6494 002F33D4  90 01 00 E4 */	stw r0, 0xe4(r1)
/* 802F6498 002F33D8  DB E1 00 D0 */	stfd f31, 0xd0(r1)
/* 802F649C 002F33DC  F3 E1 00 D8 */	psq_st f31, 216(r1), 0, qr0
/* 802F64A0 002F33E0  DB C1 00 C0 */	stfd f30, 0xc0(r1)
/* 802F64A4 002F33E4  F3 C1 00 C8 */	psq_st f30, 200(r1), 0, qr0
/* 802F64A8 002F33E8  DB A1 00 B0 */	stfd f29, 0xb0(r1)
/* 802F64AC 002F33EC  F3 A1 00 B8 */	psq_st f29, 184(r1), 0, qr0
/* 802F64B0 002F33F0  DB 81 00 A0 */	stfd f28, 0xa0(r1)
/* 802F64B4 002F33F4  F3 81 00 A8 */	psq_st f28, 168(r1), 0, qr0
/* 802F64B8 002F33F8  DB 61 00 90 */	stfd f27, 0x90(r1)
/* 802F64BC 002F33FC  F3 61 00 98 */	psq_st f27, 152(r1), 0, qr0
/* 802F64C0 002F3400  DB 41 00 80 */	stfd f26, 0x80(r1)
/* 802F64C4 002F3404  F3 41 00 88 */	psq_st f26, 136(r1), 0, qr0
/* 802F64C8 002F3408  DB 21 00 70 */	stfd f25, 0x70(r1)
/* 802F64CC 002F340C  F3 21 00 78 */	psq_st f25, 120(r1), 0, qr0
/* 802F64D0 002F3410  93 E1 00 6C */	stw r31, 0x6c(r1)
/* 802F64D4 002F3414  93 C1 00 68 */	stw r30, 0x68(r1)
/* 802F64D8 002F3418  7C 7F 1B 78 */	mr r31, r3
/* 802F64DC 002F341C  80 63 00 B4 */	lwz r3, 0xb4(r3)
/* 802F64E0 002F3420  80 03 00 10 */	lwz r0, 0x10(r3)
/* 802F64E4 002F3424  28 00 00 00 */	cmplwi r0, 0
/* 802F64E8 002F3428  41 82 03 D0 */	beq .L_802F68B8
/* 802F64EC 002F342C  80 BF 00 04 */	lwz r5, 4(r31)
/* 802F64F0 002F3430  3C 60 80 49 */	lis r3, lbl_8048D228@ha
/* 802F64F4 002F3434  38 83 D2 28 */	addi r4, r3, lbl_8048D228@l
/* 802F64F8 002F3438  80 65 01 74 */	lwz r3, 0x174(r5)
/* 802F64FC 002F343C  48 14 8A E9 */	bl getJoint__Q28SysShape5ModelFPc
/* 802F6500 002F3440  48 13 33 A1 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F6504 002F3444  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 802F6508 002F3448  38 C0 00 00 */	li r6, 0
/* 802F650C 002F344C  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 802F6510 002F3450  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple2@ha
/* 802F6514 002F3454  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F6518 002F3458  38 04 6A 64 */	addi r0, r4, __vt__Q23efx8TSimple2@l
/* 802F651C 002F345C  3C A0 80 4E */	lis r5, __vt__Q23efx11TSimpleMtx2@ha
/* 802F6520 002F3460  3C 80 80 4D */	lis r4, __vt__Q23efx12TOootaWbShot@ha
/* 802F6524 002F3464  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F6528 002F3468  38 05 6A 00 */	addi r0, r5, __vt__Q23efx11TSimpleMtx2@l
/* 802F652C 002F346C  38 E0 01 1F */	li r7, 0x11f
/* 802F6530 002F3470  38 A0 01 20 */	li r5, 0x120
/* 802F6534 002F3474  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F6538 002F3478  38 04 57 38 */	addi r0, r4, __vt__Q23efx12TOootaWbShot@l
/* 802F653C 002F347C  38 80 00 00 */	li r4, 0
/* 802F6540 002F3480  90 61 00 30 */	stw r3, 0x30(r1)
/* 802F6544 002F3484  38 61 00 20 */	addi r3, r1, 0x20
/* 802F6548 002F3488  B0 E1 00 24 */	sth r7, 0x24(r1)
/* 802F654C 002F348C  B0 A1 00 26 */	sth r5, 0x26(r1)
/* 802F6550 002F3490  90 C1 00 28 */	stw r6, 0x28(r1)
/* 802F6554 002F3494  90 C1 00 2C */	stw r6, 0x2c(r1)
/* 802F6558 002F3498  90 01 00 20 */	stw r0, 0x20(r1)
/* 802F655C 002F349C  48 0B 8E 3D */	bl create__Q23efx11TSimpleMtx2FPQ23efx3Arg
/* 802F6560 002F34A0  C3 DF 00 BC */	lfs f30, 0xbc(r31)
/* 802F6564 002F34A4  7F E3 FB 78 */	mr r3, r31
/* 802F6568 002F34A8  C3 BF 00 C0 */	lfs f29, 0xc0(r31)
/* 802F656C 002F34AC  C3 9F 00 C4 */	lfs f28, 0xc4(r31)
/* 802F6570 002F34B0  48 00 05 55 */	bl getWaterTargetCreature__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F6574 002F34B4  28 03 00 00 */	cmplwi r3, 0
/* 802F6578 002F34B8  41 82 00 28 */	beq .L_802F65A0
/* 802F657C 002F34BC  7C 64 1B 78 */	mr r4, r3
/* 802F6580 002F34C0  38 61 00 14 */	addi r3, r1, 0x14
/* 802F6584 002F34C4  81 84 00 00 */	lwz r12, 0(r4)
/* 802F6588 002F34C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F658C 002F34CC  7D 89 03 A6 */	mtctr r12
/* 802F6590 002F34D0  4E 80 04 21 */	bctrl 
/* 802F6594 002F34D4  C3 61 00 14 */	lfs f27, 0x14(r1)
/* 802F6598 002F34D8  C3 41 00 1C */	lfs f26, 0x1c(r1)
/* 802F659C 002F34DC  48 00 01 20 */	b .L_802F66BC
.L_802F65A0:
/* 802F65A0 002F34E0  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F65A4 002F34E4  38 61 00 08 */	addi r3, r1, 8
/* 802F65A8 002F34E8  81 84 00 00 */	lwz r12, 0(r4)
/* 802F65AC 002F34EC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F65B0 002F34F0  7D 89 03 A6 */	mtctr r12
/* 802F65B4 002F34F4  4E 80 04 21 */	bctrl 
/* 802F65B8 002F34F8  C3 61 00 08 */	lfs f27, 8(r1)
/* 802F65BC 002F34FC  C3 41 00 10 */	lfs f26, 0x10(r1)
/* 802F65C0 002F3500  4B DD 2F E1 */	bl rand
/* 802F65C4 002F3504  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F65C8 002F3508  3C 00 43 30 */	lis r0, 0x4330
/* 802F65CC 002F350C  90 61 00 3C */	stw r3, 0x3c(r1)
/* 802F65D0 002F3510  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F65D4 002F3514  90 01 00 38 */	stw r0, 0x38(r1)
/* 802F65D8 002F3518  C0 22 EF 40 */	lfs f1, lbl_8051D2A0@sda21(r2)
/* 802F65DC 002F351C  C8 41 00 38 */	lfd f2, 0x38(r1)
/* 802F65E0 002F3520  C0 02 EE C4 */	lfs f0, lbl_8051D224@sda21(r2)
/* 802F65E4 002F3524  EC 42 18 28 */	fsubs f2, f2, f3
/* 802F65E8 002F3528  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F65EC 002F352C  EF E1 00 24 */	fdivs f31, f1, f0
/* 802F65F0 002F3530  4B DD 2F B1 */	bl rand
/* 802F65F4 002F3534  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F65F8 002F3538  3C 00 43 30 */	lis r0, 0x4330
/* 802F65FC 002F353C  90 61 00 44 */	stw r3, 0x44(r1)
/* 802F6600 002F3540  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F6604 002F3544  90 01 00 40 */	stw r0, 0x40(r1)
/* 802F6608 002F3548  C0 42 EF 38 */	lfs f2, lbl_8051D298@sda21(r2)
/* 802F660C 002F354C  C8 01 00 40 */	lfd f0, 0x40(r1)
/* 802F6610 002F3550  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F6614 002F3554  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F6618 002F3558  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F661C 002F355C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F6620 002F3560  EC 42 08 24 */	fdivs f2, f2, f1
/* 802F6624 002F3564  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802F6628 002F3568  40 80 00 30 */	bge .L_802F6658
/* 802F662C 002F356C  C0 02 EE DC */	lfs f0, lbl_8051D23C@sda21(r2)
/* 802F6630 002F3570  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F6634 002F3574  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802F6638 002F3578  EC 02 00 32 */	fmuls f0, f2, f0
/* 802F663C 002F357C  FC 00 00 1E */	fctiwz f0, f0
/* 802F6640 002F3580  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 802F6644 002F3584  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 802F6648 002F3588  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F664C 002F358C  7C 03 04 2E */	lfsx f0, r3, r0
/* 802F6650 002F3590  FC 20 00 50 */	fneg f1, f0
/* 802F6654 002F3594  48 00 00 28 */	b .L_802F667C
.L_802F6658:
/* 802F6658 002F3598  C0 02 EE D8 */	lfs f0, lbl_8051D238@sda21(r2)
/* 802F665C 002F359C  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F6660 002F35A0  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802F6664 002F35A4  EC 02 00 32 */	fmuls f0, f2, f0
/* 802F6668 002F35A8  FC 00 00 1E */	fctiwz f0, f0
/* 802F666C 002F35AC  D8 01 00 50 */	stfd f0, 0x50(r1)
/* 802F6670 002F35B0  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802F6674 002F35B4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F6678 002F35B8  7C 23 04 2E */	lfsx f1, r3, r0
.L_802F667C:
/* 802F667C 002F35BC  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F6680 002F35C0  EF 7F D8 7A */	fmadds f27, f31, f1, f27
/* 802F6684 002F35C4  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802F6688 002F35C8  40 80 00 08 */	bge .L_802F6690
/* 802F668C 002F35CC  FC 40 10 50 */	fneg f2, f2
.L_802F6690:
/* 802F6690 002F35D0  C0 02 EE D8 */	lfs f0, lbl_8051D238@sda21(r2)
/* 802F6694 002F35D4  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F6698 002F35D8  38 63 71 A0 */	addi r3, r3, sincosTable___5JMath@l
/* 802F669C 002F35DC  EC 02 00 32 */	fmuls f0, f2, f0
/* 802F66A0 002F35E0  FC 00 00 1E */	fctiwz f0, f0
/* 802F66A4 002F35E4  D8 01 00 58 */	stfd f0, 0x58(r1)
/* 802F66A8 002F35E8  80 01 00 5C */	lwz r0, 0x5c(r1)
/* 802F66AC 002F35EC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F66B0 002F35F0  7C 63 02 14 */	add r3, r3, r0
/* 802F66B4 002F35F4  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F66B8 002F35F8  EF 5F D0 3A */	fmadds f26, f31, f0, f26
.L_802F66BC:
/* 802F66BC 002F35FC  EC 3A E0 28 */	fsubs f1, f26, f28
/* 802F66C0 002F3600  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F66C4 002F3604  EC 5B F0 28 */	fsubs f2, f27, f30
/* 802F66C8 002F3608  EC 21 00 72 */	fmuls f1, f1, f1
/* 802F66CC 002F360C  EF 22 08 BA */	fmadds f25, f2, f2, f1
/* 802F66D0 002F3610  FC 19 00 40 */	fcmpo cr0, f25, f0
/* 802F66D4 002F3614  40 81 00 14 */	ble .L_802F66E8
/* 802F66D8 002F3618  40 81 00 14 */	ble .L_802F66EC
/* 802F66DC 002F361C  FC 00 C8 34 */	frsqrte f0, f25
/* 802F66E0 002F3620  EF 20 06 72 */	fmuls f25, f0, f25
/* 802F66E4 002F3624  48 00 00 08 */	b .L_802F66EC
.L_802F66E8:
/* 802F66E8 002F3628  FF 20 00 90 */	fmr f25, f0
.L_802F66EC:
/* 802F66EC 002F362C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F66F0 002F3630  C3 E3 00 44 */	lfs f31, 0x44(r3)
/* 802F66F4 002F3634  4B DD 2E AD */	bl rand
/* 802F66F8 002F3638  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F66FC 002F363C  3C 00 43 30 */	lis r0, 0x4330
/* 802F6700 002F3640  90 61 00 5C */	stw r3, 0x5c(r1)
/* 802F6704 002F3644  C0 02 EF 44 */	lfs f0, lbl_8051D2A4@sda21(r2)
/* 802F6708 002F3648  90 01 00 58 */	stw r0, 0x58(r1)
/* 802F670C 002F364C  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F6710 002F3650  EC 40 07 F2 */	fmuls f2, f0, f31
/* 802F6714 002F3654  C8 01 00 58 */	lfd f0, 0x58(r1)
/* 802F6718 002F3658  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F671C 002F365C  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F6720 002F3660  C0 02 EE B0 */	lfs f0, lbl_8051D210@sda21(r2)
/* 802F6724 002F3664  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F6728 002F3668  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F672C 002F366C  EC 21 F8 28 */	fsubs f1, f1, f31
/* 802F6730 002F3670  EC 59 08 2A */	fadds f2, f25, f1
/* 802F6734 002F3674  FC 02 00 40 */	fcmpo cr0, f2, f0
/* 802F6738 002F3678  40 80 00 08 */	bge .L_802F6740
/* 802F673C 002F367C  FC 40 00 90 */	fmr f2, f0
.L_802F6740:
/* 802F6740 002F3680  80 8D 9A EC */	lwz r4, sys@sda21(r13)
/* 802F6744 002F3684  3C 60 80 51 */	lis r3, atanTable___5JMath@ha
/* 802F6748 002F3688  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F674C 002F368C  EC 3B F0 28 */	fsubs f1, f27, f30
/* 802F6750 002F3690  C0 A4 00 54 */	lfs f5, 0x54(r4)
/* 802F6754 002F3694  38 63 D1 E0 */	addi r3, r3, atanTable___5JMath@l
/* 802F6758 002F3698  C0 82 EF 48 */	lfs f4, lbl_8051D2A8@sda21(r2)
/* 802F675C 002F369C  EC 60 00 B2 */	fmuls f3, f0, f2
/* 802F6760 002F36A0  C0 02 EE FC */	lfs f0, lbl_8051D25C@sda21(r2)
/* 802F6764 002F36A4  EC 84 28 24 */	fdivs f4, f4, f5
/* 802F6768 002F36A8  EF 64 00 24 */	fdivs f27, f4, f0
/* 802F676C 002F36AC  EC 1B 00 24 */	fdivs f0, f27, f0
/* 802F6770 002F36B0  EC 03 00 24 */	fdivs f0, f3, f0
/* 802F6774 002F36B4  EC 5A E0 28 */	fsubs f2, f26, f28
/* 802F6778 002F36B8  EF 40 28 24 */	fdivs f26, f0, f5
/* 802F677C 002F36BC  4B D3 E9 8D */	bl "atan2___Q25JMath18TAtanTable<1024,f>CFff"
/* 802F6780 002F36C0  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6784 002F36C4  FF E0 08 90 */	fmr f31, f1
/* 802F6788 002F36C8  C3 23 00 40 */	lfs f25, 0x40(r3)
/* 802F678C 002F36CC  4B DD 2E 15 */	bl rand
/* 802F6790 002F36D0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F6794 002F36D4  3C 00 43 30 */	lis r0, 0x4330
/* 802F6798 002F36D8  90 61 00 54 */	stw r3, 0x54(r1)
/* 802F679C 002F36DC  C0 02 EF 44 */	lfs f0, lbl_8051D2A4@sda21(r2)
/* 802F67A0 002F36E0  90 01 00 50 */	stw r0, 0x50(r1)
/* 802F67A4 002F36E4  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F67A8 002F36E8  EC 40 06 72 */	fmuls f2, f0, f25
/* 802F67AC 002F36EC  C8 01 00 50 */	lfd f0, 0x50(r1)
/* 802F67B0 002F36F0  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F67B4 002F36F4  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F67B8 002F36F8  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F67BC 002F36FC  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F67C0 002F3700  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F67C4 002F3704  EC 21 C8 28 */	fsubs f1, f1, f25
/* 802F67C8 002F3708  EC 7F 08 2A */	fadds f3, f31, f1
/* 802F67CC 002F370C  FC 20 18 90 */	fmr f1, f3
/* 802F67D0 002F3710  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F67D4 002F3714  40 80 00 08 */	bge .L_802F67DC
/* 802F67D8 002F3718  FC 20 18 50 */	fneg f1, f3
.L_802F67DC:
/* 802F67DC 002F371C  C0 42 EE D8 */	lfs f2, lbl_8051D238@sda21(r2)
/* 802F67E0 002F3720  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F67E4 002F3724  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F67E8 002F3728  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802F67EC 002F372C  EC 21 00 B2 */	fmuls f1, f1, f2
/* 802F67F0 002F3730  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 802F67F4 002F3734  FC 00 08 1E */	fctiwz f0, f1
/* 802F67F8 002F3738  D8 01 00 48 */	stfd f0, 0x48(r1)
/* 802F67FC 002F373C  80 01 00 4C */	lwz r0, 0x4c(r1)
/* 802F6800 002F3740  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F6804 002F3744  7C 64 02 14 */	add r3, r4, r0
/* 802F6808 002F3748  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F680C 002F374C  EF FA 00 32 */	fmuls f31, f26, f0
/* 802F6810 002F3750  40 80 00 28 */	bge .L_802F6838
/* 802F6814 002F3754  C0 02 EE DC */	lfs f0, lbl_8051D23C@sda21(r2)
/* 802F6818 002F3758  EC 03 00 32 */	fmuls f0, f3, f0
/* 802F681C 002F375C  FC 00 00 1E */	fctiwz f0, f0
/* 802F6820 002F3760  D8 01 00 40 */	stfd f0, 0x40(r1)
/* 802F6824 002F3764  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F6828 002F3768  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F682C 002F376C  7C 04 04 2E */	lfsx f0, r4, r0
/* 802F6830 002F3770  FF 20 00 50 */	fneg f25, f0
/* 802F6834 002F3774  48 00 00 1C */	b .L_802F6850
.L_802F6838:
/* 802F6838 002F3778  EC 03 00 B2 */	fmuls f0, f3, f2
/* 802F683C 002F377C  FC 00 00 1E */	fctiwz f0, f0
/* 802F6840 002F3780  D8 01 00 38 */	stfd f0, 0x38(r1)
/* 802F6844 002F3784  80 01 00 3C */	lwz r0, 0x3c(r1)
/* 802F6848 002F3788  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F684C 002F378C  7F 24 04 2E */	lfsx f25, r4, r0
.L_802F6850:
/* 802F6850 002F3790  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 802F6854 002F3794  83 C3 00 10 */	lwz r30, 0x10(r3)
/* 802F6858 002F3798  7F C3 F3 78 */	mr r3, r30
/* 802F685C 002F379C  48 11 AD 75 */	bl del__5CNodeFv
/* 802F6860 002F37A0  EC 1A 06 72 */	fmuls f0, f26, f25
/* 802F6864 002F37A4  38 80 00 00 */	li r4, 0
/* 802F6868 002F37A8  D0 1E 00 20 */	stfs f0, 0x20(r30)
/* 802F686C 002F37AC  D3 7E 00 24 */	stfs f27, 0x24(r30)
/* 802F6870 002F37B0  D3 FE 00 28 */	stfs f31, 0x28(r30)
/* 802F6874 002F37B4  D3 DE 00 2C */	stfs f30, 0x2c(r30)
/* 802F6878 002F37B8  D3 BE 00 30 */	stfs f29, 0x30(r30)
/* 802F687C 002F37BC  D3 9E 00 34 */	stfs f28, 0x34(r30)
/* 802F6880 002F37C0  80 7E 00 38 */	lwz r3, 0x38(r30)
/* 802F6884 002F37C4  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6888 002F37C8  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F688C 002F37CC  7D 89 03 A6 */	mtctr r12
/* 802F6890 002F37D0  4E 80 04 21 */	bctrl 
/* 802F6894 002F37D4  80 7F 00 B0 */	lwz r3, 0xb0(r31)
/* 802F6898 002F37D8  7F C4 F3 78 */	mr r4, r30
/* 802F689C 002F37DC  48 11 AB 6D */	bl add__5CNodeFP5CNode
/* 802F68A0 002F37E0  7F E3 FB 78 */	mr r3, r31
/* 802F68A4 002F37E4  7F C4 F3 78 */	mr r4, r30
/* 802F68A8 002F37E8  48 00 11 F1 */	bl addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack
/* 802F68AC 002F37EC  38 9F 00 BC */	addi r4, r31, 0xbc
/* 802F68B0 002F37F0  38 60 59 54 */	li r3, 0x5954
/* 802F68B4 002F37F4  48 17 78 01 */	bl PSStartSoundVec__FUlP3Vec
.L_802F68B8:
/* 802F68B8 002F37F8  E3 E1 00 D8 */	psq_l f31, 216(r1), 0, qr0
/* 802F68BC 002F37FC  CB E1 00 D0 */	lfd f31, 0xd0(r1)
/* 802F68C0 002F3800  E3 C1 00 C8 */	psq_l f30, 200(r1), 0, qr0
/* 802F68C4 002F3804  CB C1 00 C0 */	lfd f30, 0xc0(r1)
/* 802F68C8 002F3808  E3 A1 00 B8 */	psq_l f29, 184(r1), 0, qr0
/* 802F68CC 002F380C  CB A1 00 B0 */	lfd f29, 0xb0(r1)
/* 802F68D0 002F3810  E3 81 00 A8 */	psq_l f28, 168(r1), 0, qr0
/* 802F68D4 002F3814  CB 81 00 A0 */	lfd f28, 0xa0(r1)
/* 802F68D8 002F3818  E3 61 00 98 */	psq_l f27, 152(r1), 0, qr0
/* 802F68DC 002F381C  CB 61 00 90 */	lfd f27, 0x90(r1)
/* 802F68E0 002F3820  E3 41 00 88 */	psq_l f26, 136(r1), 0, qr0
/* 802F68E4 002F3824  CB 41 00 80 */	lfd f26, 0x80(r1)
/* 802F68E8 002F3828  E3 21 00 78 */	psq_l f25, 120(r1), 0, qr0
/* 802F68EC 002F382C  CB 21 00 70 */	lfd f25, 0x70(r1)
/* 802F68F0 002F3830  83 E1 00 6C */	lwz r31, 0x6c(r1)
/* 802F68F4 002F3834  80 01 00 E4 */	lwz r0, 0xe4(r1)
/* 802F68F8 002F3838  83 C1 00 68 */	lwz r30, 0x68(r1)
/* 802F68FC 002F383C  7C 08 03 A6 */	mtlr r0
/* 802F6900 002F3840  38 21 00 E0 */	addi r1, r1, 0xe0
/* 802F6904 002F3844  4E 80 00 20 */	blr 
.endfn startNewWaterList__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F6908 002F3848  94 21 FF B0 */	stwu r1, -0x50(r1)
/* 802F690C 002F384C  7C 08 02 A6 */	mflr r0
/* 802F6910 002F3850  90 01 00 54 */	stw r0, 0x54(r1)
/* 802F6914 002F3854  93 E1 00 4C */	stw r31, 0x4c(r1)
/* 802F6918 002F3858  7C 7F 1B 78 */	mr r31, r3
/* 802F691C 002F385C  93 C1 00 48 */	stw r30, 0x48(r1)
/* 802F6920 002F3860  93 A1 00 44 */	stw r29, 0x44(r1)
/* 802F6924 002F3864  80 63 00 B0 */	lwz r3, 0xb0(r3)
/* 802F6928 002F3868  83 A3 00 10 */	lwz r29, 0x10(r3)
/* 802F692C 002F386C  48 00 00 E4 */	b .L_802F6A10
.L_802F6930:
/* 802F6930 002F3870  83 DD 00 04 */	lwz r30, 4(r29)
/* 802F6934 002F3874  7F A3 EB 78 */	mr r3, r29
/* 802F6938 002F3878  4B FF D8 51 */	bl update__Q34Game11BigTreasure22BigTreasureWaterAttackFv
/* 802F693C 002F387C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6940 002F3880  41 82 00 CC */	beq .L_802F6A0C
/* 802F6944 002F3884  80 7D 00 38 */	lwz r3, 0x38(r29)
/* 802F6948 002F3888  81 83 00 00 */	lwz r12, 0(r3)
/* 802F694C 002F388C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F6950 002F3890  7D 89 03 A6 */	mtctr r12
/* 802F6954 002F3894  4E 80 04 21 */	bctrl 
/* 802F6958 002F3898  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802F695C 002F389C  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802F6960 002F38A0  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 802F6964 002F38A4  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple4@ha
/* 802F6968 002F38A8  90 01 00 08 */	stw r0, 8(r1)
/* 802F696C 002F38AC  3C 60 80 4D */	lis r3, __vt__Q23efx11TOootaWbHit@ha
/* 802F6970 002F38B0  39 65 A7 F8 */	addi r11, r5, __vt__Q23efx5TBase@l
/* 802F6974 002F38B4  39 44 6A 3C */	addi r10, r4, __vt__Q23efx8TSimple4@l
/* 802F6978 002F38B8  C0 1D 00 2C */	lfs f0, 0x2c(r29)
/* 802F697C 002F38BC  38 03 59 34 */	addi r0, r3, __vt__Q23efx11TOootaWbHit@l
/* 802F6980 002F38C0  39 20 01 1B */	li r9, 0x11b
/* 802F6984 002F38C4  39 00 01 1C */	li r8, 0x11c
/* 802F6988 002F38C8  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802F698C 002F38CC  38 E0 01 1D */	li r7, 0x11d
/* 802F6990 002F38D0  38 C0 01 1E */	li r6, 0x11e
/* 802F6994 002F38D4  38 A0 00 00 */	li r5, 0
/* 802F6998 002F38D8  C0 1D 00 30 */	lfs f0, 0x30(r29)
/* 802F699C 002F38DC  38 61 00 18 */	addi r3, r1, 0x18
/* 802F69A0 002F38E0  38 81 00 08 */	addi r4, r1, 8
/* 802F69A4 002F38E4  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802F69A8 002F38E8  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 802F69AC 002F38EC  91 61 00 18 */	stw r11, 0x18(r1)
/* 802F69B0 002F38F0  91 41 00 18 */	stw r10, 0x18(r1)
/* 802F69B4 002F38F4  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802F69B8 002F38F8  B1 21 00 1C */	sth r9, 0x1c(r1)
/* 802F69BC 002F38FC  B1 01 00 1E */	sth r8, 0x1e(r1)
/* 802F69C0 002F3900  B0 E1 00 20 */	sth r7, 0x20(r1)
/* 802F69C4 002F3904  B0 C1 00 22 */	sth r6, 0x22(r1)
/* 802F69C8 002F3908  90 A1 00 24 */	stw r5, 0x24(r1)
/* 802F69CC 002F390C  90 A1 00 28 */	stw r5, 0x28(r1)
/* 802F69D0 002F3910  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 802F69D4 002F3914  90 A1 00 30 */	stw r5, 0x30(r1)
/* 802F69D8 002F3918  90 01 00 18 */	stw r0, 0x18(r1)
/* 802F69DC 002F391C  48 0B 87 89 */	bl create__Q23efx8TSimple4FPQ23efx3Arg
/* 802F69E0 002F3920  38 9D 00 2C */	addi r4, r29, 0x2c
/* 802F69E4 002F3924  38 60 59 53 */	li r3, 0x5953
/* 802F69E8 002F3928  48 17 76 CD */	bl PSStartSoundVec__FUlP3Vec
/* 802F69EC 002F392C  7F A3 EB 78 */	mr r3, r29
/* 802F69F0 002F3930  48 11 AB E1 */	bl del__5CNodeFv
/* 802F69F4 002F3934  80 7F 00 B4 */	lwz r3, 0xb4(r31)
/* 802F69F8 002F3938  7F A4 EB 78 */	mr r4, r29
/* 802F69FC 002F393C  48 11 AA 0D */	bl add__5CNodeFP5CNode
/* 802F6A00 002F3940  7F E3 FB 78 */	mr r3, r31
/* 802F6A04 002F3944  7F A4 EB 78 */	mr r4, r29
/* 802F6A08 002F3948  48 00 11 91 */	bl delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack
.L_802F6A0C:
/* 802F6A0C 002F394C  7F DD F3 78 */	mr r29, r30
.L_802F6A10:
/* 802F6A10 002F3950  28 1D 00 00 */	cmplwi r29, 0
/* 802F6A14 002F3954  40 82 FF 1C */	bne .L_802F6930
/* 802F6A18 002F3958  88 1F 00 03 */	lbz r0, 3(r31)
/* 802F6A1C 002F395C  28 00 00 00 */	cmplwi r0, 0
/* 802F6A20 002F3960  41 82 00 30 */	beq .L_802F6A50
/* 802F6A24 002F3964  7F E3 FB 78 */	mr r3, r31
/* 802F6A28 002F3968  48 00 00 45 */	bl updateWaterEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F6A2C 002F396C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6A30 002F3970  C0 3F 00 08 */	lfs f1, 8(r31)
/* 802F6A34 002F3974  C0 03 00 3C */	lfs f0, 0x3c(r3)
/* 802F6A38 002F3978  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F6A3C 002F397C  40 81 00 14 */	ble .L_802F6A50
/* 802F6A40 002F3980  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F6A44 002F3984  7F E3 FB 78 */	mr r3, r31
/* 802F6A48 002F3988  D0 1F 00 08 */	stfs f0, 8(r31)
/* 802F6A4C 002F398C  4B FF FA 41 */	bl startNewWaterList__Q34Game11BigTreasure20BigTreasureAttackMgrFv
.L_802F6A50:
/* 802F6A50 002F3990  80 01 00 54 */	lwz r0, 0x54(r1)
/* 802F6A54 002F3994  83 E1 00 4C */	lwz r31, 0x4c(r1)
/* 802F6A58 002F3998  83 C1 00 48 */	lwz r30, 0x48(r1)
/* 802F6A5C 002F399C  83 A1 00 44 */	lwz r29, 0x44(r1)
/* 802F6A60 002F39A0  7C 08 03 A6 */	mtlr r0
/* 802F6A64 002F39A4  38 21 00 50 */	addi r1, r1, 0x50
/* 802F6A68 002F39A8  4E 80 00 20 */	blr 
.endfn updateWaterAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateWaterEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F6A6C 002F39AC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F6A70 002F39B0  7C 08 02 A6 */	mflr r0
/* 802F6A74 002F39B4  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F6A78 002F39B8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F6A7C 002F39BC  7C 7F 1B 78 */	mr r31, r3
/* 802F6A80 002F39C0  3C 60 80 49 */	lis r3, lbl_8048D228@ha
/* 802F6A84 002F39C4  80 BF 00 04 */	lwz r5, 4(r31)
/* 802F6A88 002F39C8  38 83 D2 28 */	addi r4, r3, lbl_8048D228@l
/* 802F6A8C 002F39CC  80 65 01 74 */	lwz r3, 0x174(r5)
/* 802F6A90 002F39D0  48 14 85 55 */	bl getJoint__Q28SysShape5ModelFPc
/* 802F6A94 002F39D4  48 13 2E 0D */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F6A98 002F39D8  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 802F6A9C 002F39DC  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 802F6AA0 002F39E0  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 802F6AA4 002F39E4  D0 1F 00 BC */	stfs f0, 0xbc(r31)
/* 802F6AA8 002F39E8  D0 3F 00 C0 */	stfs f1, 0xc0(r31)
/* 802F6AAC 002F39EC  D0 5F 00 C4 */	stfs f2, 0xc4(r31)
/* 802F6AB0 002F39F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F6AB4 002F39F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F6AB8 002F39F8  7C 08 03 A6 */	mtlr r0
/* 802F6ABC 002F39FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F6AC0 002F3A00  4E 80 00 20 */	blr 
.endfn updateWaterEmitPosition__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn getWaterTargetCreature__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F6AC4 002F3A04  94 21 FB C0 */	stwu r1, -0x440(r1)
/* 802F6AC8 002F3A08  7C 08 02 A6 */	mflr r0
/* 802F6ACC 002F3A0C  38 80 00 00 */	li r4, 0
/* 802F6AD0 002F3A10  3C A0 80 4B */	lis r5, "__vt__22Iterator<Q24Game4Piki>"@ha
/* 802F6AD4 002F3A14  90 01 04 44 */	stw r0, 0x444(r1)
/* 802F6AD8 002F3A18  38 A5 BC 9C */	addi r5, r5, "__vt__22Iterator<Q24Game4Piki>"@l
/* 802F6ADC 002F3A1C  28 04 00 00 */	cmplwi r4, 0
/* 802F6AE0 002F3A20  93 E1 04 3C */	stw r31, 0x43c(r1)
/* 802F6AE4 002F3A24  3B E0 00 00 */	li r31, 0
/* 802F6AE8 002F3A28  93 C1 04 38 */	stw r30, 0x438(r1)
/* 802F6AEC 002F3A2C  7C 7E 1B 78 */	mr r30, r3
/* 802F6AF0 002F3A30  93 A1 04 34 */	stw r29, 0x434(r1)
/* 802F6AF4 002F3A34  93 81 04 30 */	stw r28, 0x430(r1)
/* 802F6AF8 002F3A38  80 0D 92 F4 */	lwz r0, pikiMgr__4Game@sda21(r13)
/* 802F6AFC 002F3A3C  90 81 00 14 */	stw r4, 0x14(r1)
/* 802F6B00 002F3A40  90 A1 00 08 */	stw r5, 8(r1)
/* 802F6B04 002F3A44  90 81 00 0C */	stw r4, 0xc(r1)
/* 802F6B08 002F3A48  90 01 00 10 */	stw r0, 0x10(r1)
/* 802F6B0C 002F3A4C  40 82 00 20 */	bne .L_802F6B2C
/* 802F6B10 002F3A50  7C 03 03 78 */	mr r3, r0
/* 802F6B14 002F3A54  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6B18 002F3A58  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F6B1C 002F3A5C  7D 89 03 A6 */	mtctr r12
/* 802F6B20 002F3A60  4E 80 04 21 */	bctrl 
/* 802F6B24 002F3A64  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F6B28 002F3A68  48 00 00 90 */	b .L_802F6BB8
.L_802F6B2C:
/* 802F6B2C 002F3A6C  7C 03 03 78 */	mr r3, r0
/* 802F6B30 002F3A70  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6B34 002F3A74  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 802F6B38 002F3A78  7D 89 03 A6 */	mtctr r12
/* 802F6B3C 002F3A7C  4E 80 04 21 */	bctrl 
/* 802F6B40 002F3A80  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F6B44 002F3A84  48 00 00 58 */	b .L_802F6B9C
.L_802F6B48:
/* 802F6B48 002F3A88  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6B4C 002F3A8C  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802F6B50 002F3A90  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6B54 002F3A94  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802F6B58 002F3A98  7D 89 03 A6 */	mtctr r12
/* 802F6B5C 002F3A9C  4E 80 04 21 */	bctrl 
/* 802F6B60 002F3AA0  7C 64 1B 78 */	mr r4, r3
/* 802F6B64 002F3AA4  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802F6B68 002F3AA8  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6B6C 002F3AAC  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F6B70 002F3AB0  7D 89 03 A6 */	mtctr r12
/* 802F6B74 002F3AB4  4E 80 04 21 */	bctrl 
/* 802F6B78 002F3AB8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6B7C 002F3ABC  40 82 00 3C */	bne .L_802F6BB8
/* 802F6B80 002F3AC0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6B84 002F3AC4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802F6B88 002F3AC8  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6B8C 002F3ACC  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F6B90 002F3AD0  7D 89 03 A6 */	mtctr r12
/* 802F6B94 002F3AD4  4E 80 04 21 */	bctrl 
/* 802F6B98 002F3AD8  90 61 00 0C */	stw r3, 0xc(r1)
.L_802F6B9C:
/* 802F6B9C 002F3ADC  81 81 00 08 */	lwz r12, 8(r1)
/* 802F6BA0 002F3AE0  38 61 00 08 */	addi r3, r1, 8
/* 802F6BA4 002F3AE4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F6BA8 002F3AE8  7D 89 03 A6 */	mtctr r12
/* 802F6BAC 002F3AEC  4E 80 04 21 */	bctrl 
/* 802F6BB0 002F3AF0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6BB4 002F3AF4  41 82 FF 94 */	beq .L_802F6B48
.L_802F6BB8:
/* 802F6BB8 002F3AF8  3B 81 00 18 */	addi r28, r1, 0x18
/* 802F6BBC 002F3AFC  48 00 01 24 */	b .L_802F6CE0
.L_802F6BC0:
/* 802F6BC0 002F3B00  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6BC4 002F3B04  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6BC8 002F3B08  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802F6BCC 002F3B0C  7D 89 03 A6 */	mtctr r12
/* 802F6BD0 002F3B10  4E 80 04 21 */	bctrl 
/* 802F6BD4 002F3B14  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6BD8 002F3B18  7C 7D 1B 78 */	mr r29, r3
/* 802F6BDC 002F3B1C  81 8C 00 A8 */	lwz r12, 0xa8(r12)
/* 802F6BE0 002F3B20  7D 89 03 A6 */	mtctr r12
/* 802F6BE4 002F3B24  4E 80 04 21 */	bctrl 
/* 802F6BE8 002F3B28  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6BEC 002F3B2C  41 82 00 38 */	beq .L_802F6C24
/* 802F6BF0 002F3B30  7F A3 EB 78 */	mr r3, r29
/* 802F6BF4 002F3B34  81 9D 00 00 */	lwz r12, 0(r29)
/* 802F6BF8 002F3B38  81 8C 01 C0 */	lwz r12, 0x1c0(r12)
/* 802F6BFC 002F3B3C  7D 89 03 A6 */	mtctr r12
/* 802F6C00 002F3B40  4E 80 04 21 */	bctrl 
/* 802F6C04 002F3B44  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6C08 002F3B48  41 82 00 1C */	beq .L_802F6C24
/* 802F6C0C 002F3B4C  88 1D 02 B8 */	lbz r0, 0x2b8(r29)
/* 802F6C10 002F3B50  2C 00 00 00 */	cmpwi r0, 0
/* 802F6C14 002F3B54  41 82 00 10 */	beq .L_802F6C24
/* 802F6C18 002F3B58  93 BC 00 00 */	stw r29, 0(r28)
/* 802F6C1C 002F3B5C  3B 9C 00 04 */	addi r28, r28, 4
/* 802F6C20 002F3B60  3B FF 00 01 */	addi r31, r31, 1
.L_802F6C24:
/* 802F6C24 002F3B64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F6C28 002F3B68  28 00 00 00 */	cmplwi r0, 0
/* 802F6C2C 002F3B6C  40 82 00 24 */	bne .L_802F6C50
/* 802F6C30 002F3B70  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6C34 002F3B74  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802F6C38 002F3B78  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6C3C 002F3B7C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F6C40 002F3B80  7D 89 03 A6 */	mtctr r12
/* 802F6C44 002F3B84  4E 80 04 21 */	bctrl 
/* 802F6C48 002F3B88  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F6C4C 002F3B8C  48 00 00 94 */	b .L_802F6CE0
.L_802F6C50:
/* 802F6C50 002F3B90  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6C54 002F3B94  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802F6C58 002F3B98  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6C5C 002F3B9C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F6C60 002F3BA0  7D 89 03 A6 */	mtctr r12
/* 802F6C64 002F3BA4  4E 80 04 21 */	bctrl 
/* 802F6C68 002F3BA8  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F6C6C 002F3BAC  48 00 00 58 */	b .L_802F6CC4
.L_802F6C70:
/* 802F6C70 002F3BB0  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6C74 002F3BB4  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802F6C78 002F3BB8  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6C7C 002F3BBC  81 8C 00 20 */	lwz r12, 0x20(r12)
/* 802F6C80 002F3BC0  7D 89 03 A6 */	mtctr r12
/* 802F6C84 002F3BC4  4E 80 04 21 */	bctrl 
/* 802F6C88 002F3BC8  7C 64 1B 78 */	mr r4, r3
/* 802F6C8C 002F3BCC  80 61 00 14 */	lwz r3, 0x14(r1)
/* 802F6C90 002F3BD0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6C94 002F3BD4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F6C98 002F3BD8  7D 89 03 A6 */	mtctr r12
/* 802F6C9C 002F3BDC  4E 80 04 21 */	bctrl 
/* 802F6CA0 002F3BE0  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6CA4 002F3BE4  40 82 00 3C */	bne .L_802F6CE0
/* 802F6CA8 002F3BE8  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6CAC 002F3BEC  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802F6CB0 002F3BF0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6CB4 002F3BF4  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802F6CB8 002F3BF8  7D 89 03 A6 */	mtctr r12
/* 802F6CBC 002F3BFC  4E 80 04 21 */	bctrl 
/* 802F6CC0 002F3C00  90 61 00 0C */	stw r3, 0xc(r1)
.L_802F6CC4:
/* 802F6CC4 002F3C04  81 81 00 08 */	lwz r12, 8(r1)
/* 802F6CC8 002F3C08  38 61 00 08 */	addi r3, r1, 8
/* 802F6CCC 002F3C0C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F6CD0 002F3C10  7D 89 03 A6 */	mtctr r12
/* 802F6CD4 002F3C14  4E 80 04 21 */	bctrl 
/* 802F6CD8 002F3C18  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6CDC 002F3C1C  41 82 FF 94 */	beq .L_802F6C70
.L_802F6CE0:
/* 802F6CE0 002F3C20  80 61 00 10 */	lwz r3, 0x10(r1)
/* 802F6CE4 002F3C24  81 83 00 00 */	lwz r12, 0(r3)
/* 802F6CE8 002F3C28  81 8C 00 1C */	lwz r12, 0x1c(r12)
/* 802F6CEC 002F3C2C  7D 89 03 A6 */	mtctr r12
/* 802F6CF0 002F3C30  4E 80 04 21 */	bctrl 
/* 802F6CF4 002F3C34  80 81 00 0C */	lwz r4, 0xc(r1)
/* 802F6CF8 002F3C38  7C 04 18 40 */	cmplw r4, r3
/* 802F6CFC 002F3C3C  40 82 FE C4 */	bne .L_802F6BC0
/* 802F6D00 002F3C40  2C 1F 00 00 */	cmpwi r31, 0
/* 802F6D04 002F3C44  41 82 00 60 */	beq .L_802F6D64
/* 802F6D08 002F3C48  4B DD 28 99 */	bl rand
/* 802F6D0C 002F3C4C  3C 80 43 30 */	lis r4, 0x4330
/* 802F6D10 002F3C50  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802F6D14 002F3C54  90 01 04 1C */	stw r0, 0x41c(r1)
/* 802F6D18 002F3C58  6F E0 80 00 */	xoris r0, r31, 0x8000
/* 802F6D1C 002F3C5C  C8 42 EE D0 */	lfd f2, lbl_8051D230@sda21(r2)
/* 802F6D20 002F3C60  38 61 00 18 */	addi r3, r1, 0x18
/* 802F6D24 002F3C64  90 81 04 18 */	stw r4, 0x418(r1)
/* 802F6D28 002F3C68  C0 02 EE C4 */	lfs f0, lbl_8051D224@sda21(r2)
/* 802F6D2C 002F3C6C  C8 21 04 18 */	lfd f1, 0x418(r1)
/* 802F6D30 002F3C70  90 01 04 24 */	stw r0, 0x424(r1)
/* 802F6D34 002F3C74  EC 21 10 28 */	fsubs f1, f1, f2
/* 802F6D38 002F3C78  90 81 04 20 */	stw r4, 0x420(r1)
/* 802F6D3C 002F3C7C  EC 21 00 24 */	fdivs f1, f1, f0
/* 802F6D40 002F3C80  C8 01 04 20 */	lfd f0, 0x420(r1)
/* 802F6D44 002F3C84  EC 00 10 28 */	fsubs f0, f0, f2
/* 802F6D48 002F3C88  EC 00 00 72 */	fmuls f0, f0, f1
/* 802F6D4C 002F3C8C  FC 00 00 1E */	fctiwz f0, f0
/* 802F6D50 002F3C90  D8 01 04 28 */	stfd f0, 0x428(r1)
/* 802F6D54 002F3C94  80 01 04 2C */	lwz r0, 0x42c(r1)
/* 802F6D58 002F3C98  54 00 10 3A */	slwi r0, r0, 2
/* 802F6D5C 002F3C9C  7C 63 00 2E */	lwzx r3, r3, r0
/* 802F6D60 002F3CA0  48 00 00 1C */	b .L_802F6D7C
.L_802F6D64:
/* 802F6D64 002F3CA4  80 7E 00 04 */	lwz r3, 4(r30)
/* 802F6D68 002F3CA8  38 80 00 00 */	li r4, 0
/* 802F6D6C 002F3CAC  C0 22 EF 4C */	lfs f1, lbl_8051D2AC@sda21(r2)
/* 802F6D70 002F3CB0  38 A0 00 00 */	li r5, 0
/* 802F6D74 002F3CB4  C0 42 EF 50 */	lfs f2, lbl_8051D2B0@sda21(r2)
/* 802F6D78 002F3CB8  4B E1 B9 7D */	bl "getNearestNavi__Q24Game9EnemyFuncFPQ24Game8CreatureffPfP23Condition<Q24Game4Navi>"
.L_802F6D7C:
/* 802F6D7C 002F3CBC  80 01 04 44 */	lwz r0, 0x444(r1)
/* 802F6D80 002F3CC0  83 E1 04 3C */	lwz r31, 0x43c(r1)
/* 802F6D84 002F3CC4  83 C1 04 38 */	lwz r30, 0x438(r1)
/* 802F6D88 002F3CC8  83 A1 04 34 */	lwz r29, 0x434(r1)
/* 802F6D8C 002F3CCC  83 81 04 30 */	lwz r28, 0x430(r1)
/* 802F6D90 002F3CD0  7C 08 03 A6 */	mtlr r0
/* 802F6D94 002F3CD4  38 21 04 40 */	addi r1, r1, 0x440
/* 802F6D98 002F3CD8  4E 80 00 20 */	blr 
.endfn getWaterTargetCreature__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn setElecAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F6D9C 002F3CDC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F6DA0 002F3CE0  7C 08 02 A6 */	mflr r0
/* 802F6DA4 002F3CE4  38 80 00 00 */	li r4, 0
/* 802F6DA8 002F3CE8  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F6DAC 002F3CEC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802F6DB0 002F3CF0  7C 7F 1B 78 */	mr r31, r3
/* 802F6DB4 002F3CF4  80 63 00 04 */	lwz r3, 4(r3)
/* 802F6DB8 002F3CF8  4B FE 75 25 */	bl isNormalAttack__Q34Game11BigTreasure3ObjFi
/* 802F6DBC 002F3CFC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 802F6DC0 002F3D00  41 82 00 50 */	beq .L_802F6E10
/* 802F6DC4 002F3D04  4B DD 27 DD */	bl rand
/* 802F6DC8 002F3D08  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F6DCC 002F3D0C  3C 00 43 30 */	lis r0, 0x4330
/* 802F6DD0 002F3D10  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F6DD4 002F3D14  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F6DD8 002F3D18  90 01 00 08 */	stw r0, 8(r1)
/* 802F6DDC 002F3D1C  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F6DE0 002F3D20  C8 01 00 08 */	lfd f0, 8(r1)
/* 802F6DE4 002F3D24  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F6DE8 002F3D28  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F6DEC 002F3D2C  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F6DF0 002F3D30  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F6DF4 002F3D34  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F6DF8 002F3D38  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F6DFC 002F3D3C  40 80 00 0C */	bge .L_802F6E08
/* 802F6E00 002F3D40  38 00 00 01 */	li r0, 1
/* 802F6E04 002F3D44  48 00 00 54 */	b .L_802F6E58
.L_802F6E08:
/* 802F6E08 002F3D48  38 00 00 02 */	li r0, 2
/* 802F6E0C 002F3D4C  48 00 00 4C */	b .L_802F6E58
.L_802F6E10:
/* 802F6E10 002F3D50  4B DD 27 91 */	bl rand
/* 802F6E14 002F3D54  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F6E18 002F3D58  3C 00 43 30 */	lis r0, 0x4330
/* 802F6E1C 002F3D5C  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F6E20 002F3D60  C8 62 EE D0 */	lfd f3, lbl_8051D230@sda21(r2)
/* 802F6E24 002F3D64  90 01 00 08 */	stw r0, 8(r1)
/* 802F6E28 002F3D68  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F6E2C 002F3D6C  C8 01 00 08 */	lfd f0, 8(r1)
/* 802F6E30 002F3D70  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F6E34 002F3D74  EC 60 18 28 */	fsubs f3, f0, f3
/* 802F6E38 002F3D78  C0 02 EE EC */	lfs f0, lbl_8051D24C@sda21(r2)
/* 802F6E3C 002F3D7C  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F6E40 002F3D80  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F6E44 002F3D84  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F6E48 002F3D88  40 80 00 0C */	bge .L_802F6E54
/* 802F6E4C 002F3D8C  38 00 00 03 */	li r0, 3
/* 802F6E50 002F3D90  48 00 00 08 */	b .L_802F6E58
.L_802F6E54:
/* 802F6E54 002F3D94  38 00 00 04 */	li r0, 4
.L_802F6E58:
/* 802F6E58 002F3D98  2C 00 00 03 */	cmpwi r0, 3
/* 802F6E5C 002F3D9C  41 82 01 94 */	beq .L_802F6FF0
/* 802F6E60 002F3DA0  40 80 00 14 */	bge .L_802F6E74
/* 802F6E64 002F3DA4  2C 00 00 01 */	cmpwi r0, 1
/* 802F6E68 002F3DA8  41 82 00 18 */	beq .L_802F6E80
/* 802F6E6C 002F3DAC  40 80 00 CC */	bge .L_802F6F38
/* 802F6E70 002F3DB0  48 00 02 EC */	b .L_802F715C
.L_802F6E74:
/* 802F6E74 002F3DB4  2C 00 00 05 */	cmpwi r0, 5
/* 802F6E78 002F3DB8  40 80 02 E4 */	bge .L_802F715C
/* 802F6E7C 002F3DBC  48 00 02 2C */	b .L_802F70A8
.L_802F6E80:
/* 802F6E80 002F3DC0  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6E84 002F3DC4  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6E88 002F3DC8  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6E8C 002F3DCC  C0 04 0A 74 */	lfs f0, 0xa74(r4)
/* 802F6E90 002F3DD0  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F6E94 002F3DD4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6E98 002F3DD8  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6E9C 002F3DDC  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6EA0 002F3DE0  C0 04 0A 9C */	lfs f0, 0xa9c(r4)
/* 802F6EA4 002F3DE4  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F6EA8 002F3DE8  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6EAC 002F3DEC  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6EB0 002F3DF0  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6EB4 002F3DF4  C0 04 0A C4 */	lfs f0, 0xac4(r4)
/* 802F6EB8 002F3DF8  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F6EBC 002F3DFC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6EC0 002F3E00  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6EC4 002F3E04  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6EC8 002F3E08  C0 04 0A EC */	lfs f0, 0xaec(r4)
/* 802F6ECC 002F3E0C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F6ED0 002F3E10  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6ED4 002F3E14  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6ED8 002F3E18  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6EDC 002F3E1C  C0 04 0B 14 */	lfs f0, 0xb14(r4)
/* 802F6EE0 002F3E20  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F6EE4 002F3E24  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6EE8 002F3E28  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6EEC 002F3E2C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6EF0 002F3E30  C0 04 0B 3C */	lfs f0, 0xb3c(r4)
/* 802F6EF4 002F3E34  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802F6EF8 002F3E38  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6EFC 002F3E3C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F00 002F3E40  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F04 002F3E44  C0 04 0B 64 */	lfs f0, 0xb64(r4)
/* 802F6F08 002F3E48  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F6F0C 002F3E4C  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6F10 002F3E50  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F14 002F3E54  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F18 002F3E58  C0 04 0B 8C */	lfs f0, 0xb8c(r4)
/* 802F6F1C 002F3E5C  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802F6F20 002F3E60  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6F24 002F3E64  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F28 002F3E68  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F2C 002F3E6C  80 04 0B B4 */	lwz r0, 0xbb4(r4)
/* 802F6F30 002F3E70  90 03 00 20 */	stw r0, 0x20(r3)
/* 802F6F34 002F3E74  48 00 02 28 */	b .L_802F715C
.L_802F6F38:
/* 802F6F38 002F3E78  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6F3C 002F3E7C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F40 002F3E80  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F44 002F3E84  C0 04 0B DC */	lfs f0, 0xbdc(r4)
/* 802F6F48 002F3E88  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F6F4C 002F3E8C  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6F50 002F3E90  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F54 002F3E94  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F58 002F3E98  C0 04 0C 04 */	lfs f0, 0xc04(r4)
/* 802F6F5C 002F3E9C  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F6F60 002F3EA0  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6F64 002F3EA4  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F68 002F3EA8  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F6C 002F3EAC  C0 04 0C 2C */	lfs f0, 0xc2c(r4)
/* 802F6F70 002F3EB0  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F6F74 002F3EB4  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6F78 002F3EB8  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F7C 002F3EBC  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F80 002F3EC0  C0 04 0C 54 */	lfs f0, 0xc54(r4)
/* 802F6F84 002F3EC4  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F6F88 002F3EC8  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6F8C 002F3ECC  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6F90 002F3ED0  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6F94 002F3ED4  C0 04 0C 7C */	lfs f0, 0xc7c(r4)
/* 802F6F98 002F3ED8  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F6F9C 002F3EDC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6FA0 002F3EE0  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6FA4 002F3EE4  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6FA8 002F3EE8  C0 04 0C A4 */	lfs f0, 0xca4(r4)
/* 802F6FAC 002F3EEC  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802F6FB0 002F3EF0  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6FB4 002F3EF4  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6FB8 002F3EF8  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6FBC 002F3EFC  C0 04 0C CC */	lfs f0, 0xccc(r4)
/* 802F6FC0 002F3F00  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F6FC4 002F3F04  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6FC8 002F3F08  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6FCC 002F3F0C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6FD0 002F3F10  C0 04 0C F4 */	lfs f0, 0xcf4(r4)
/* 802F6FD4 002F3F14  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802F6FD8 002F3F18  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6FDC 002F3F1C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6FE0 002F3F20  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6FE4 002F3F24  80 04 0D 1C */	lwz r0, 0xd1c(r4)
/* 802F6FE8 002F3F28  90 03 00 20 */	stw r0, 0x20(r3)
/* 802F6FEC 002F3F2C  48 00 01 70 */	b .L_802F715C
.L_802F6FF0:
/* 802F6FF0 002F3F30  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F6FF4 002F3F34  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F6FF8 002F3F38  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F6FFC 002F3F3C  C0 04 0D 44 */	lfs f0, 0xd44(r4)
/* 802F7000 002F3F40  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F7004 002F3F44  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7008 002F3F48  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F700C 002F3F4C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7010 002F3F50  C0 04 0D 6C */	lfs f0, 0xd6c(r4)
/* 802F7014 002F3F54  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F7018 002F3F58  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F701C 002F3F5C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7020 002F3F60  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7024 002F3F64  C0 04 0D 94 */	lfs f0, 0xd94(r4)
/* 802F7028 002F3F68  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F702C 002F3F6C  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7030 002F3F70  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7034 002F3F74  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7038 002F3F78  C0 04 0D BC */	lfs f0, 0xdbc(r4)
/* 802F703C 002F3F7C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F7040 002F3F80  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7044 002F3F84  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7048 002F3F88  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F704C 002F3F8C  C0 04 0D E4 */	lfs f0, 0xde4(r4)
/* 802F7050 002F3F90  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F7054 002F3F94  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7058 002F3F98  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F705C 002F3F9C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7060 002F3FA0  C0 04 0E 0C */	lfs f0, 0xe0c(r4)
/* 802F7064 002F3FA4  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802F7068 002F3FA8  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F706C 002F3FAC  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7070 002F3FB0  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7074 002F3FB4  C0 04 0E 34 */	lfs f0, 0xe34(r4)
/* 802F7078 002F3FB8  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F707C 002F3FBC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7080 002F3FC0  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7084 002F3FC4  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7088 002F3FC8  C0 04 0E 5C */	lfs f0, 0xe5c(r4)
/* 802F708C 002F3FCC  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802F7090 002F3FD0  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7094 002F3FD4  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7098 002F3FD8  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F709C 002F3FDC  80 04 0E 84 */	lwz r0, 0xe84(r4)
/* 802F70A0 002F3FE0  90 03 00 20 */	stw r0, 0x20(r3)
/* 802F70A4 002F3FE4  48 00 00 B8 */	b .L_802F715C
.L_802F70A8:
/* 802F70A8 002F3FE8  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F70AC 002F3FEC  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F70B0 002F3FF0  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F70B4 002F3FF4  C0 04 0E AC */	lfs f0, 0xeac(r4)
/* 802F70B8 002F3FF8  D0 03 00 00 */	stfs f0, 0(r3)
/* 802F70BC 002F3FFC  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F70C0 002F4000  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F70C4 002F4004  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F70C8 002F4008  C0 04 0E D4 */	lfs f0, 0xed4(r4)
/* 802F70CC 002F400C  D0 03 00 04 */	stfs f0, 4(r3)
/* 802F70D0 002F4010  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F70D4 002F4014  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F70D8 002F4018  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F70DC 002F401C  C0 04 0E FC */	lfs f0, 0xefc(r4)
/* 802F70E0 002F4020  D0 03 00 08 */	stfs f0, 8(r3)
/* 802F70E4 002F4024  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F70E8 002F4028  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F70EC 002F402C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F70F0 002F4030  C0 04 0F 24 */	lfs f0, 0xf24(r4)
/* 802F70F4 002F4034  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 802F70F8 002F4038  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F70FC 002F403C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7100 002F4040  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7104 002F4044  C0 04 0F 4C */	lfs f0, 0xf4c(r4)
/* 802F7108 002F4048  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 802F710C 002F404C  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7110 002F4050  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7114 002F4054  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7118 002F4058  C0 04 0F 74 */	lfs f0, 0xf74(r4)
/* 802F711C 002F405C  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 802F7120 002F4060  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7124 002F4064  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7128 002F4068  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F712C 002F406C  C0 04 0F 9C */	lfs f0, 0xf9c(r4)
/* 802F7130 002F4070  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 802F7134 002F4074  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F7138 002F4078  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F713C 002F407C  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7140 002F4080  C0 04 0F C4 */	lfs f0, 0xfc4(r4)
/* 802F7144 002F4084  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 802F7148 002F4088  80 9F 00 04 */	lwz r4, 4(r31)
/* 802F714C 002F408C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7150 002F4090  80 84 00 C0 */	lwz r4, 0xc0(r4)
/* 802F7154 002F4094  80 04 0F EC */	lwz r0, 0xfec(r4)
/* 802F7158 002F4098  90 03 00 20 */	stw r0, 0x20(r3)
.L_802F715C:
/* 802F715C 002F409C  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F7160 002F40A0  C0 22 EE A0 */	lfs f1, lbl_8051D200@sda21(r2)
/* 802F7164 002F40A4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 802F7168 002F40A8  FC 01 00 00 */	fcmpu cr0, f1, f0
/* 802F716C 002F40AC  40 82 00 10 */	bne .L_802F717C
/* 802F7170 002F40B0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802F7174 002F40B4  90 03 00 24 */	stw r0, 0x24(r3)
/* 802F7178 002F40B8  48 00 00 0C */	b .L_802F7184
.L_802F717C:
/* 802F717C 002F40BC  38 00 00 00 */	li r0, 0
/* 802F7180 002F40C0  90 03 00 24 */	stw r0, 0x24(r3)
.L_802F7184:
/* 802F7184 002F40C4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F7188 002F40C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 802F718C 002F40CC  7C 08 03 A6 */	mtlr r0
/* 802F7190 002F40D0  38 21 00 20 */	addi r1, r1, 0x20
/* 802F7194 002F40D4  4E 80 00 20 */	blr 
.endfn setElecAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn startElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F7198 002F40D8  94 21 FF 30 */	stwu r1, -0xd0(r1)
/* 802F719C 002F40DC  7C 08 02 A6 */	mflr r0
/* 802F71A0 002F40E0  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 802F71A4 002F40E4  DB E1 00 C0 */	stfd f31, 0xc0(r1)
/* 802F71A8 002F40E8  F3 E1 00 C8 */	psq_st f31, 200(r1), 0, qr0
/* 802F71AC 002F40EC  DB C1 00 B0 */	stfd f30, 0xb0(r1)
/* 802F71B0 002F40F0  F3 C1 00 B8 */	psq_st f30, 184(r1), 0, qr0
/* 802F71B4 002F40F4  DB A1 00 A0 */	stfd f29, 0xa0(r1)
/* 802F71B8 002F40F8  F3 A1 00 A8 */	psq_st f29, 168(r1), 0, qr0
/* 802F71BC 002F40FC  DB 81 00 90 */	stfd f28, 0x90(r1)
/* 802F71C0 002F4100  F3 81 00 98 */	psq_st f28, 152(r1), 0, qr0
/* 802F71C4 002F4104  DB 61 00 80 */	stfd f27, 0x80(r1)
/* 802F71C8 002F4108  F3 61 00 88 */	psq_st f27, 136(r1), 0, qr0
/* 802F71CC 002F410C  DB 41 00 70 */	stfd f26, 0x70(r1)
/* 802F71D0 002F4110  F3 41 00 78 */	psq_st f26, 120(r1), 0, qr0
/* 802F71D4 002F4114  DB 21 00 60 */	stfd f25, 0x60(r1)
/* 802F71D8 002F4118  F3 21 00 68 */	psq_st f25, 104(r1), 0, qr0
/* 802F71DC 002F411C  DB 01 00 50 */	stfd f24, 0x50(r1)
/* 802F71E0 002F4120  F3 01 00 58 */	psq_st f24, 88(r1), 0, qr0
/* 802F71E4 002F4124  BF 61 00 3C */	stmw r27, 0x3c(r1)
/* 802F71E8 002F4128  7C 7C 1B 78 */	mr r28, r3
/* 802F71EC 002F412C  88 03 00 00 */	lbz r0, 0(r3)
/* 802F71F0 002F4130  28 00 00 00 */	cmplwi r0, 0
/* 802F71F4 002F4134  40 82 03 E4 */	bne .L_802F75D8
/* 802F71F8 002F4138  38 00 00 01 */	li r0, 1
/* 802F71FC 002F413C  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F7200 002F4140  98 1C 00 00 */	stb r0, 0(r28)
/* 802F7204 002F4144  D0 1C 00 08 */	stfs f0, 8(r28)
/* 802F7208 002F4148  D0 1C 00 0C */	stfs f0, 0xc(r28)
/* 802F720C 002F414C  4B FF FB 91 */	bl setElecAttackParameter__Q34Game11BigTreasure20BigTreasureAttackMgrFv
/* 802F7210 002F4150  3B E0 00 00 */	li r31, 0
/* 802F7214 002F4154  7F 9E E3 78 */	mr r30, r28
.L_802F7218:
/* 802F7218 002F4158  3B 60 00 00 */	li r27, 0
/* 802F721C 002F415C  7F DD F3 78 */	mr r29, r30
.L_802F7220:
/* 802F7220 002F4160  80 7D 00 D0 */	lwz r3, 0xd0(r29)
/* 802F7224 002F4164  38 80 00 00 */	li r4, 0
/* 802F7228 002F4168  81 83 00 00 */	lwz r12, 0(r3)
/* 802F722C 002F416C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F7230 002F4170  7D 89 03 A6 */	mtctr r12
/* 802F7234 002F4174  4E 80 04 21 */	bctrl 
/* 802F7238 002F4178  3B 7B 00 01 */	addi r27, r27, 1
/* 802F723C 002F417C  3B BD 00 04 */	addi r29, r29, 4
/* 802F7240 002F4180  2C 1B 00 03 */	cmpwi r27, 3
/* 802F7244 002F4184  41 80 FF DC */	blt .L_802F7220
/* 802F7248 002F4188  3B FF 00 01 */	addi r31, r31, 1
/* 802F724C 002F418C  3B DE 00 0C */	addi r30, r30, 0xc
/* 802F7250 002F4190  2C 1F 00 04 */	cmpwi r31, 4
/* 802F7254 002F4194  41 80 FF C4 */	blt .L_802F7218
/* 802F7258 002F4198  80 BC 00 04 */	lwz r5, 4(r28)
/* 802F725C 002F419C  3C 60 80 49 */	lis r3, lbl_8048D1F0@ha
/* 802F7260 002F41A0  38 83 D1 F0 */	addi r4, r3, lbl_8048D1F0@l
/* 802F7264 002F41A4  80 65 01 74 */	lwz r3, 0x174(r5)
/* 802F7268 002F41A8  48 14 7D 7D */	bl getJoint__Q28SysShape5ModelFPc
/* 802F726C 002F41AC  48 13 26 35 */	bl getWorldMatrix__Q28SysShape5JointFv
/* 802F7270 002F41B0  80 9C 00 CC */	lwz r4, 0xcc(r28)
/* 802F7274 002F41B4  C3 A3 00 2C */	lfs f29, 0x2c(r3)
/* 802F7278 002F41B8  83 64 00 10 */	lwz r27, 0x10(r4)
/* 802F727C 002F41BC  C3 C3 00 1C */	lfs f30, 0x1c(r3)
/* 802F7280 002F41C0  28 1B 00 00 */	cmplwi r27, 0
/* 802F7284 002F41C4  C3 E3 00 0C */	lfs f31, 0xc(r3)
/* 802F7288 002F41C8  41 82 00 98 */	beq .L_802F7320
/* 802F728C 002F41CC  38 00 00 00 */	li r0, 0
/* 802F7290 002F41D0  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 802F7294 002F41D4  90 1B 00 24 */	stw r0, 0x24(r27)
/* 802F7298 002F41D8  C4 03 41 E4 */	lfsu f0, "zero__10Vector3<f>"@l(r3)
/* 802F729C 002F41DC  D0 1B 00 28 */	stfs f0, 0x28(r27)
/* 802F72A0 002F41E0  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F72A4 002F41E4  D0 1B 00 2C */	stfs f0, 0x2c(r27)
/* 802F72A8 002F41E8  C0 03 00 08 */	lfs f0, 8(r3)
/* 802F72AC 002F41EC  D0 1B 00 30 */	stfs f0, 0x30(r27)
/* 802F72B0 002F41F0  D3 FB 00 34 */	stfs f31, 0x34(r27)
/* 802F72B4 002F41F4  D3 DB 00 38 */	stfs f30, 0x38(r27)
/* 802F72B8 002F41F8  D3 BB 00 3C */	stfs f29, 0x3c(r27)
/* 802F72BC 002F41FC  98 1B 00 20 */	stb r0, 0x20(r27)
/* 802F72C0 002F4200  90 1B 00 40 */	stw r0, 0x40(r27)
/* 802F72C4 002F4204  88 1B 00 20 */	lbz r0, 0x20(r27)
/* 802F72C8 002F4208  28 00 00 00 */	cmplwi r0, 0
/* 802F72CC 002F420C  41 82 00 1C */	beq .L_802F72E8
/* 802F72D0 002F4210  80 7B 00 48 */	lwz r3, 0x48(r27)
/* 802F72D4 002F4214  38 80 00 00 */	li r4, 0
/* 802F72D8 002F4218  81 83 00 00 */	lwz r12, 0(r3)
/* 802F72DC 002F421C  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F72E0 002F4220  7D 89 03 A6 */	mtctr r12
/* 802F72E4 002F4224  4E 80 04 21 */	bctrl 
.L_802F72E8:
/* 802F72E8 002F4228  7F 63 DB 78 */	mr r3, r27
/* 802F72EC 002F422C  48 11 A2 E5 */	bl del__5CNodeFv
/* 802F72F0 002F4230  80 7C 00 C8 */	lwz r3, 0xc8(r28)
/* 802F72F4 002F4234  7F 64 DB 78 */	mr r4, r27
/* 802F72F8 002F4238  48 11 A1 11 */	bl add__5CNodeFP5CNode
/* 802F72FC 002F423C  80 7C 01 00 */	lwz r3, 0x100(r28)
/* 802F7300 002F4240  38 1B 00 34 */	addi r0, r27, 0x34
/* 802F7304 002F4244  38 80 00 00 */	li r4, 0
/* 802F7308 002F4248  90 03 00 10 */	stw r0, 0x10(r3)
/* 802F730C 002F424C  80 7C 01 00 */	lwz r3, 0x100(r28)
/* 802F7310 002F4250  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7314 002F4254  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F7318 002F4258  7D 89 03 A6 */	mtctr r12
/* 802F731C 002F425C  4E 80 04 21 */	bctrl 
.L_802F7320:
/* 802F7320 002F4260  4B DD 22 81 */	bl rand
/* 802F7324 002F4264  3C 80 43 30 */	lis r4, 0x4330
/* 802F7328 002F4268  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 802F732C 002F426C  90 01 00 0C */	stw r0, 0xc(r1)
/* 802F7330 002F4270  3B E0 00 00 */	li r31, 0
/* 802F7334 002F4274  80 7C 01 1C */	lwz r3, 0x11c(r28)
/* 802F7338 002F4278  90 81 00 08 */	stw r4, 8(r1)
/* 802F733C 002F427C  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802F7340 002F4280  C8 82 EE D0 */	lfd f4, lbl_8051D230@sda21(r2)
/* 802F7344 002F4284  C8 01 00 08 */	lfd f0, 8(r1)
/* 802F7348 002F4288  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802F734C 002F428C  C0 62 EF 38 */	lfs f3, lbl_8051D298@sda21(r2)
/* 802F7350 002F4290  EC 00 20 28 */	fsubs f0, f0, f4
/* 802F7354 002F4294  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7358 002F4298  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F735C 002F429C  90 81 00 10 */	stw r4, 0x10(r1)
/* 802F7360 002F42A0  EC 43 00 32 */	fmuls f2, f3, f0
/* 802F7364 002F42A4  80 7C 00 CC */	lwz r3, 0xcc(r28)
/* 802F7368 002F42A8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802F736C 002F42AC  80 83 00 10 */	lwz r4, 0x10(r3)
/* 802F7370 002F42B0  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F7374 002F42B4  EC 00 20 28 */	fsubs f0, f0, f4
/* 802F7378 002F42B8  FF 80 08 90 */	fmr f28, f1
/* 802F737C 002F42BC  EF 63 00 24 */	fdivs f27, f3, f0
/* 802F7380 002F42C0  48 00 01 DC */	b .L_802F755C
.L_802F7384:
/* 802F7384 002F42C4  80 7C 01 1C */	lwz r3, 0x11c(r28)
/* 802F7388 002F42C8  83 C4 00 04 */	lwz r30, 4(r4)
/* 802F738C 002F42CC  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802F7390 002F42D0  7C 1F 00 00 */	cmpw r31, r0
/* 802F7394 002F42D4  40 80 01 C0 */	bge .L_802F7554
/* 802F7398 002F42D8  7C 9D 23 78 */	mr r29, r4
/* 802F739C 002F42DC  4B DD 22 05 */	bl rand
/* 802F73A0 002F42E0  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F73A4 002F42E4  3C 00 43 30 */	lis r0, 0x4330
/* 802F73A8 002F42E8  90 61 00 14 */	stw r3, 0x14(r1)
/* 802F73AC 002F42EC  80 7C 01 1C */	lwz r3, 0x11c(r28)
/* 802F73B0 002F42F0  90 01 00 10 */	stw r0, 0x10(r1)
/* 802F73B4 002F42F4  C8 22 EE D0 */	lfd f1, lbl_8051D230@sda21(r2)
/* 802F73B8 002F42F8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802F73BC 002F42FC  C0 42 EF 54 */	lfs f2, lbl_8051D2B4@sda21(r2)
/* 802F73C0 002F4300  EC 60 08 28 */	fsubs f3, f0, f1
/* 802F73C4 002F4304  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F73C8 002F4308  C0 02 EF 24 */	lfs f0, lbl_8051D284@sda21(r2)
/* 802F73CC 002F430C  C3 23 00 0C */	lfs f25, 0xc(r3)
/* 802F73D0 002F4310  EC 42 00 F2 */	fmuls f2, f2, f3
/* 802F73D4 002F4314  C3 03 00 14 */	lfs f24, 0x14(r3)
/* 802F73D8 002F4318  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F73DC 002F431C  EC 01 00 28 */	fsubs f0, f1, f0
/* 802F73E0 002F4320  EF 5C 00 2A */	fadds f26, f28, f0
/* 802F73E4 002F4324  4B DD 21 BD */	bl rand
/* 802F73E8 002F4328  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F73EC 002F432C  3C 00 43 30 */	lis r0, 0x4330
/* 802F73F0 002F4330  90 61 00 0C */	stw r3, 0xc(r1)
/* 802F73F4 002F4334  80 7C 01 1C */	lwz r3, 0x11c(r28)
/* 802F73F8 002F4338  90 01 00 08 */	stw r0, 8(r1)
/* 802F73FC 002F433C  C8 42 EE D0 */	lfd f2, lbl_8051D230@sda21(r2)
/* 802F7400 002F4340  C8 01 00 08 */	lfd f0, 8(r1)
/* 802F7404 002F4344  C0 22 EE C4 */	lfs f1, lbl_8051D224@sda21(r2)
/* 802F7408 002F4348  EC 40 10 28 */	fsubs f2, f0, f2
/* 802F740C 002F434C  C0 03 00 08 */	lfs f0, 8(r3)
/* 802F7410 002F4350  EC 59 00 B2 */	fmuls f2, f25, f2
/* 802F7414 002F4354  EC 22 08 24 */	fdivs f1, f2, f1
/* 802F7418 002F4358  EF 20 08 2A */	fadds f25, f0, f1
/* 802F741C 002F435C  4B DD 21 85 */	bl rand
/* 802F7420 002F4360  6C 63 80 00 */	xoris r3, r3, 0x8000
/* 802F7424 002F4364  3C 00 43 30 */	lis r0, 0x4330
/* 802F7428 002F4368  90 61 00 1C */	stw r3, 0x1c(r1)
/* 802F742C 002F436C  FC 80 D0 90 */	fmr f4, f26
/* 802F7430 002F4370  80 7C 01 1C */	lwz r3, 0x11c(r28)
/* 802F7434 002F4374  90 01 00 18 */	stw r0, 0x18(r1)
/* 802F7438 002F4378  C8 42 EE D0 */	lfd f2, lbl_8051D230@sda21(r2)
/* 802F743C 002F437C  C8 21 00 18 */	lfd f1, 0x18(r1)
/* 802F7440 002F4380  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F7444 002F4384  EC 61 10 28 */	fsubs f3, f1, f2
/* 802F7448 002F4388  C0 42 EE C4 */	lfs f2, lbl_8051D224@sda21(r2)
/* 802F744C 002F438C  C0 23 00 10 */	lfs f1, 0x10(r3)
/* 802F7450 002F4390  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 802F7454 002F4394  EC 18 00 F2 */	fmuls f0, f24, f3
/* 802F7458 002F4398  EC 00 10 24 */	fdivs f0, f0, f2
/* 802F745C 002F439C  EC 61 00 2A */	fadds f3, f1, f0
/* 802F7460 002F43A0  40 80 00 08 */	bge .L_802F7468
/* 802F7464 002F43A4  FC 80 D0 50 */	fneg f4, f26
.L_802F7468:
/* 802F7468 002F43A8  C0 42 EE D8 */	lfs f2, lbl_8051D238@sda21(r2)
/* 802F746C 002F43AC  3C 60 80 50 */	lis r3, sincosTable___5JMath@ha
/* 802F7470 002F43B0  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F7474 002F43B4  38 83 71 A0 */	addi r4, r3, sincosTable___5JMath@l
/* 802F7478 002F43B8  EC 24 00 B2 */	fmuls f1, f4, f2
/* 802F747C 002F43BC  FC 1A 00 40 */	fcmpo cr0, f26, f0
/* 802F7480 002F43C0  FC 00 08 1E */	fctiwz f0, f1
/* 802F7484 002F43C4  D8 01 00 20 */	stfd f0, 0x20(r1)
/* 802F7488 002F43C8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F748C 002F43CC  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F7490 002F43D0  7C 64 02 14 */	add r3, r4, r0
/* 802F7494 002F43D4  C0 03 00 04 */	lfs f0, 4(r3)
/* 802F7498 002F43D8  EC 39 00 32 */	fmuls f1, f25, f0
/* 802F749C 002F43DC  40 80 00 28 */	bge .L_802F74C4
/* 802F74A0 002F43E0  C0 02 EE DC */	lfs f0, lbl_8051D23C@sda21(r2)
/* 802F74A4 002F43E4  EC 1A 00 32 */	fmuls f0, f26, f0
/* 802F74A8 002F43E8  FC 00 00 1E */	fctiwz f0, f0
/* 802F74AC 002F43EC  D8 01 00 28 */	stfd f0, 0x28(r1)
/* 802F74B0 002F43F0  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802F74B4 002F43F4  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F74B8 002F43F8  7C 04 04 2E */	lfsx f0, r4, r0
/* 802F74BC 002F43FC  FC 00 00 50 */	fneg f0, f0
/* 802F74C0 002F4400  48 00 00 1C */	b .L_802F74DC
.L_802F74C4:
/* 802F74C4 002F4404  EC 1A 00 B2 */	fmuls f0, f26, f2
/* 802F74C8 002F4408  FC 00 00 1E */	fctiwz f0, f0
/* 802F74CC 002F440C  D8 01 00 30 */	stfd f0, 0x30(r1)
/* 802F74D0 002F4410  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802F74D4 002F4414  54 00 1C B8 */	rlwinm r0, r0, 3, 0x12, 0x1c
/* 802F74D8 002F4418  7C 04 04 2E */	lfsx f0, r4, r0
.L_802F74DC:
/* 802F74DC 002F441C  38 60 00 00 */	li r3, 0
/* 802F74E0 002F4420  EC 19 00 32 */	fmuls f0, f25, f0
/* 802F74E4 002F4424  90 7D 00 24 */	stw r3, 0x24(r29)
/* 802F74E8 002F4428  38 00 00 01 */	li r0, 1
/* 802F74EC 002F442C  EF 9C D8 2A */	fadds f28, f28, f27
/* 802F74F0 002F4430  D0 1D 00 28 */	stfs f0, 0x28(r29)
/* 802F74F4 002F4434  D0 7D 00 2C */	stfs f3, 0x2c(r29)
/* 802F74F8 002F4438  D0 3D 00 30 */	stfs f1, 0x30(r29)
/* 802F74FC 002F443C  D3 FD 00 34 */	stfs f31, 0x34(r29)
/* 802F7500 002F4440  D3 DD 00 38 */	stfs f30, 0x38(r29)
/* 802F7504 002F4444  D3 BD 00 3C */	stfs f29, 0x3c(r29)
/* 802F7508 002F4448  98 1D 00 20 */	stb r0, 0x20(r29)
/* 802F750C 002F444C  90 7D 00 40 */	stw r3, 0x40(r29)
/* 802F7510 002F4450  88 1D 00 20 */	lbz r0, 0x20(r29)
/* 802F7514 002F4454  28 00 00 00 */	cmplwi r0, 0
/* 802F7518 002F4458  41 82 00 1C */	beq .L_802F7534
/* 802F751C 002F445C  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 802F7520 002F4460  38 80 00 00 */	li r4, 0
/* 802F7524 002F4464  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7528 002F4468  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F752C 002F446C  7D 89 03 A6 */	mtctr r12
/* 802F7530 002F4470  4E 80 04 21 */	bctrl 
.L_802F7534:
/* 802F7534 002F4474  7F A3 EB 78 */	mr r3, r29
/* 802F7538 002F4478  48 11 A0 99 */	bl del__5CNodeFv
/* 802F753C 002F447C  80 7C 00 C8 */	lwz r3, 0xc8(r28)
/* 802F7540 002F4480  7F A4 EB 78 */	mr r4, r29
/* 802F7544 002F4484  48 11 9E C5 */	bl add__5CNodeFP5CNode
/* 802F7548 002F4488  7F 83 E3 78 */	mr r3, r28
/* 802F754C 002F448C  7F A4 EB 78 */	mr r4, r29
/* 802F7550 002F4490  48 00 05 C9 */	bl addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack
.L_802F7554:
/* 802F7554 002F4494  7F C4 F3 78 */	mr r4, r30
/* 802F7558 002F4498  3B FF 00 01 */	addi r31, r31, 1
.L_802F755C:
/* 802F755C 002F449C  28 04 00 00 */	cmplwi r4, 0
/* 802F7560 002F44A0  40 82 FE 24 */	bne .L_802F7384
/* 802F7564 002F44A4  80 7C 01 1C */	lwz r3, 0x11c(r28)
/* 802F7568 002F44A8  3C 00 43 30 */	lis r0, 0x4330
/* 802F756C 002F44AC  90 01 00 30 */	stw r0, 0x30(r1)
/* 802F7570 002F44B0  80 03 00 20 */	lwz r0, 0x20(r3)
/* 802F7574 002F44B4  C8 82 EE D0 */	lfd f4, lbl_8051D230@sda21(r2)
/* 802F7578 002F44B8  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 802F757C 002F44BC  C0 62 EF 2C */	lfs f3, lbl_8051D28C@sda21(r2)
/* 802F7580 002F44C0  90 01 00 34 */	stw r0, 0x34(r1)
/* 802F7584 002F44C4  C0 42 EE B0 */	lfs f2, lbl_8051D210@sda21(r2)
/* 802F7588 002F44C8  C8 01 00 30 */	lfd f0, 0x30(r1)
/* 802F758C 002F44CC  C0 22 EF 44 */	lfs f1, lbl_8051D2A4@sda21(r2)
/* 802F7590 002F44D0  EC 80 20 28 */	fsubs f4, f0, f4
/* 802F7594 002F44D4  C0 02 EE B4 */	lfs f0, lbl_8051D214@sda21(r2)
/* 802F7598 002F44D8  EC 64 00 F2 */	fmuls f3, f4, f3
/* 802F759C 002F44DC  EC 43 00 B2 */	fmuls f2, f3, f2
/* 802F75A0 002F44E0  EC 23 00 72 */	fmuls f1, f3, f1
/* 802F75A4 002F44E4  EC 03 00 32 */	fmuls f0, f3, f0
/* 802F75A8 002F44E8  FC 40 10 1E */	fctiwz f2, f2
/* 802F75AC 002F44EC  FC 20 08 1E */	fctiwz f1, f1
/* 802F75B0 002F44F0  FC 00 00 1E */	fctiwz f0, f0
/* 802F75B4 002F44F4  D8 41 00 28 */	stfd f2, 0x28(r1)
/* 802F75B8 002F44F8  D8 21 00 20 */	stfd f1, 0x20(r1)
/* 802F75BC 002F44FC  80 01 00 2C */	lwz r0, 0x2c(r1)
/* 802F75C0 002F4500  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 802F75C4 002F4504  80 61 00 24 */	lwz r3, 0x24(r1)
/* 802F75C8 002F4508  90 1C 01 08 */	stw r0, 0x108(r28)
/* 802F75CC 002F450C  80 01 00 1C */	lwz r0, 0x1c(r1)
/* 802F75D0 002F4510  90 7C 01 0C */	stw r3, 0x10c(r28)
/* 802F75D4 002F4514  90 1C 01 10 */	stw r0, 0x110(r28)
.L_802F75D8:
/* 802F75D8 002F4518  E3 E1 00 C8 */	psq_l f31, 200(r1), 0, qr0
/* 802F75DC 002F451C  CB E1 00 C0 */	lfd f31, 0xc0(r1)
/* 802F75E0 002F4520  E3 C1 00 B8 */	psq_l f30, 184(r1), 0, qr0
/* 802F75E4 002F4524  CB C1 00 B0 */	lfd f30, 0xb0(r1)
/* 802F75E8 002F4528  E3 A1 00 A8 */	psq_l f29, 168(r1), 0, qr0
/* 802F75EC 002F452C  CB A1 00 A0 */	lfd f29, 0xa0(r1)
/* 802F75F0 002F4530  E3 81 00 98 */	psq_l f28, 152(r1), 0, qr0
/* 802F75F4 002F4534  CB 81 00 90 */	lfd f28, 0x90(r1)
/* 802F75F8 002F4538  E3 61 00 88 */	psq_l f27, 136(r1), 0, qr0
/* 802F75FC 002F453C  CB 61 00 80 */	lfd f27, 0x80(r1)
/* 802F7600 002F4540  E3 41 00 78 */	psq_l f26, 120(r1), 0, qr0
/* 802F7604 002F4544  CB 41 00 70 */	lfd f26, 0x70(r1)
/* 802F7608 002F4548  E3 21 00 68 */	psq_l f25, 104(r1), 0, qr0
/* 802F760C 002F454C  CB 21 00 60 */	lfd f25, 0x60(r1)
/* 802F7610 002F4550  E3 01 00 58 */	psq_l f24, 88(r1), 0, qr0
/* 802F7614 002F4554  CB 01 00 50 */	lfd f24, 0x50(r1)
/* 802F7618 002F4558  BB 61 00 3C */	lmw r27, 0x3c(r1)
/* 802F761C 002F455C  80 01 00 D4 */	lwz r0, 0xd4(r1)
/* 802F7620 002F4560  7C 08 03 A6 */	mtlr r0
/* 802F7624 002F4564  38 21 00 D0 */	addi r1, r1, 0xd0
/* 802F7628 002F4568  4E 80 00 20 */	blr 
.endfn startElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn updateElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F762C 002F456C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F7630 002F4570  7C 08 02 A6 */	mflr r0
/* 802F7634 002F4574  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F7638 002F4578  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802F763C 002F457C  7C 7F 1B 78 */	mr r31, r3
/* 802F7640 002F4580  3B A0 00 00 */	li r29, 0
/* 802F7644 002F4584  80 63 00 C8 */	lwz r3, 0xc8(r3)
/* 802F7648 002F4588  83 C3 00 10 */	lwz r30, 0x10(r3)
/* 802F764C 002F458C  48 00 00 B4 */	b .L_802F7700
.L_802F7650:
/* 802F7650 002F4590  83 9E 00 04 */	lwz r28, 4(r30)
/* 802F7654 002F4594  7F C3 F3 78 */	mr r3, r30
/* 802F7658 002F4598  83 7E 00 08 */	lwz r27, 8(r30)
/* 802F765C 002F459C  4B FF CE D5 */	bl update__Q34Game11BigTreasure21BigTreasureElecAttackFv
/* 802F7660 002F45A0  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 802F7664 002F45A4  80 03 00 10 */	lwz r0, 0x10(r3)
/* 802F7668 002F45A8  7C 1E 00 40 */	cmplw r30, r0
/* 802F766C 002F45AC  40 82 00 20 */	bne .L_802F768C
/* 802F7670 002F45B0  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 802F7674 002F45B4  28 00 00 00 */	cmplwi r0, 0
/* 802F7678 002F45B8  41 82 00 14 */	beq .L_802F768C
/* 802F767C 002F45BC  38 9E 00 34 */	addi r4, r30, 0x34
/* 802F7680 002F45C0  38 60 51 5B */	li r3, 0x515b
/* 802F7684 002F45C4  48 17 6A 31 */	bl PSStartSoundVec__FUlP3Vec
/* 802F7688 002F45C8  48 00 00 70 */	b .L_802F76F8
.L_802F768C:
/* 802F768C 002F45CC  28 1B 00 00 */	cmplwi r27, 0
/* 802F7690 002F45D0  41 82 00 2C */	beq .L_802F76BC
/* 802F7694 002F45D4  80 1B 00 40 */	lwz r0, 0x40(r27)
/* 802F7698 002F45D8  28 00 00 00 */	cmplwi r0, 0
/* 802F769C 002F45DC  41 82 00 20 */	beq .L_802F76BC
/* 802F76A0 002F45E0  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 802F76A4 002F45E4  28 00 00 00 */	cmplwi r0, 0
/* 802F76A8 002F45E8  40 82 00 14 */	bne .L_802F76BC
/* 802F76AC 002F45EC  38 9E 00 34 */	addi r4, r30, 0x34
/* 802F76B0 002F45F0  38 60 51 5B */	li r3, 0x515b
/* 802F76B4 002F45F4  48 17 6A 01 */	bl PSStartSoundVec__FUlP3Vec
/* 802F76B8 002F45F8  48 00 00 40 */	b .L_802F76F8
.L_802F76BC:
/* 802F76BC 002F45FC  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 802F76C0 002F4600  28 00 00 00 */	cmplwi r0, 0
/* 802F76C4 002F4604  41 82 00 34 */	beq .L_802F76F8
/* 802F76C8 002F4608  38 00 00 03 */	li r0, 3
/* 802F76CC 002F460C  7F E3 FB 78 */	mr r3, r31
/* 802F76D0 002F4610  7C 09 03 A6 */	mtctr r0
.L_802F76D4:
/* 802F76D4 002F4614  80 03 01 08 */	lwz r0, 0x108(r3)
/* 802F76D8 002F4618  7C 1D 00 00 */	cmpw r29, r0
/* 802F76DC 002F461C  40 82 00 14 */	bne .L_802F76F0
/* 802F76E0 002F4620  38 9E 00 34 */	addi r4, r30, 0x34
/* 802F76E4 002F4624  38 60 51 5A */	li r3, 0x515a
/* 802F76E8 002F4628  48 17 69 CD */	bl PSStartSoundVec__FUlP3Vec
/* 802F76EC 002F462C  48 00 00 0C */	b .L_802F76F8
.L_802F76F0:
/* 802F76F0 002F4630  38 63 00 04 */	addi r3, r3, 4
/* 802F76F4 002F4634  42 00 FF E0 */	bdnz .L_802F76D4
.L_802F76F8:
/* 802F76F8 002F4638  7F 9E E3 78 */	mr r30, r28
/* 802F76FC 002F463C  3B BD 00 01 */	addi r29, r29, 1
.L_802F7700:
/* 802F7700 002F4640  28 1E 00 00 */	cmplwi r30, 0
/* 802F7704 002F4644  40 82 FF 4C */	bne .L_802F7650
/* 802F7708 002F4648  88 1F 00 00 */	lbz r0, 0(r31)
/* 802F770C 002F464C  28 00 00 00 */	cmplwi r0, 0
/* 802F7710 002F4650  41 82 01 90 */	beq .L_802F78A0
/* 802F7714 002F4654  80 9F 01 1C */	lwz r4, 0x11c(r31)
/* 802F7718 002F4658  C0 3F 00 08 */	lfs f1, 8(r31)
/* 802F771C 002F465C  C0 04 00 18 */	lfs f0, 0x18(r4)
/* 802F7720 002F4660  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F7724 002F4664  40 81 01 7C */	ble .L_802F78A0
/* 802F7728 002F4668  C0 3F 00 0C */	lfs f1, 0xc(r31)
/* 802F772C 002F466C  C0 04 00 1C */	lfs f0, 0x1c(r4)
/* 802F7730 002F4670  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 802F7734 002F4674  40 81 01 6C */	ble .L_802F78A0
/* 802F7738 002F4678  80 64 00 24 */	lwz r3, 0x24(r4)
/* 802F773C 002F467C  80 04 00 20 */	lwz r0, 0x20(r4)
/* 802F7740 002F4680  7C 03 00 00 */	cmpw r3, r0
/* 802F7744 002F4684  41 81 01 5C */	bgt .L_802F78A0
/* 802F7748 002F4688  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 802F774C 002F468C  83 C3 00 10 */	lwz r30, 0x10(r3)
/* 802F7750 002F4690  28 1E 00 00 */	cmplwi r30, 0
/* 802F7754 002F4694  41 82 01 34 */	beq .L_802F7888
/* 802F7758 002F4698  80 7F 01 00 */	lwz r3, 0x100(r31)
/* 802F775C 002F469C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7760 002F46A0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7764 002F46A4  7D 89 03 A6 */	mtctr r12
/* 802F7768 002F46A8  4E 80 04 21 */	bctrl 
/* 802F776C 002F46AC  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 802F7770 002F46B0  38 9E 00 34 */	addi r4, r30, 0x34
/* 802F7774 002F46B4  48 0B 8B D1 */	bl "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"
/* 802F7778 002F46B8  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 802F777C 002F46BC  38 80 00 00 */	li r4, 0
/* 802F7780 002F46C0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7784 002F46C4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F7788 002F46C8  7D 89 03 A6 */	mtctr r12
/* 802F778C 002F46CC  4E 80 04 21 */	bctrl 
/* 802F7790 002F46D0  83 BE 00 04 */	lwz r29, 4(r30)
/* 802F7794 002F46D4  28 1D 00 00 */	cmplwi r29, 0
/* 802F7798 002F46D8  41 82 00 64 */	beq .L_802F77FC
/* 802F779C 002F46DC  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 802F77A0 002F46E0  28 00 00 00 */	cmplwi r0, 0
/* 802F77A4 002F46E4  40 82 00 58 */	bne .L_802F77FC
/* 802F77A8 002F46E8  93 BE 00 40 */	stw r29, 0x40(r30)
/* 802F77AC 002F46EC  80 1E 00 40 */	lwz r0, 0x40(r30)
/* 802F77B0 002F46F0  28 00 00 00 */	cmplwi r0, 0
/* 802F77B4 002F46F4  41 82 00 48 */	beq .L_802F77FC
/* 802F77B8 002F46F8  80 7E 00 4C */	lwz r3, 0x4c(r30)
/* 802F77BC 002F46FC  38 80 00 00 */	li r4, 0
/* 802F77C0 002F4700  81 83 00 00 */	lwz r12, 0(r3)
/* 802F77C4 002F4704  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F77C8 002F4708  7D 89 03 A6 */	mtctr r12
/* 802F77CC 002F470C  4E 80 04 21 */	bctrl 
/* 802F77D0 002F4710  80 BE 00 40 */	lwz r5, 0x40(r30)
/* 802F77D4 002F4714  38 9E 00 34 */	addi r4, r30, 0x34
/* 802F77D8 002F4718  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 802F77DC 002F471C  38 A5 00 34 */	addi r5, r5, 0x34
/* 802F77E0 002F4720  48 0B 95 F1 */	bl "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>"
/* 802F77E4 002F4724  80 7E 00 44 */	lwz r3, 0x44(r30)
/* 802F77E8 002F4728  38 80 00 00 */	li r4, 0
/* 802F77EC 002F472C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F77F0 002F4730  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F77F4 002F4734  7D 89 03 A6 */	mtctr r12
/* 802F77F8 002F4738  4E 80 04 21 */	bctrl 
.L_802F77FC:
/* 802F77FC 002F473C  3B C0 00 00 */	li r30, 0
/* 802F7800 002F4740  48 00 00 78 */	b .L_802F7878
.L_802F7804:
/* 802F7804 002F4744  83 9D 00 04 */	lwz r28, 4(r29)
/* 802F7808 002F4748  28 1C 00 00 */	cmplwi r28, 0
/* 802F780C 002F474C  41 82 00 64 */	beq .L_802F7870
/* 802F7810 002F4750  80 1D 00 40 */	lwz r0, 0x40(r29)
/* 802F7814 002F4754  28 00 00 00 */	cmplwi r0, 0
/* 802F7818 002F4758  40 82 00 58 */	bne .L_802F7870
/* 802F781C 002F475C  93 9D 00 40 */	stw r28, 0x40(r29)
/* 802F7820 002F4760  80 1D 00 40 */	lwz r0, 0x40(r29)
/* 802F7824 002F4764  28 00 00 00 */	cmplwi r0, 0
/* 802F7828 002F4768  41 82 00 48 */	beq .L_802F7870
/* 802F782C 002F476C  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 802F7830 002F4770  38 80 00 00 */	li r4, 0
/* 802F7834 002F4774  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7838 002F4778  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F783C 002F477C  7D 89 03 A6 */	mtctr r12
/* 802F7840 002F4780  4E 80 04 21 */	bctrl 
/* 802F7844 002F4784  80 BD 00 40 */	lwz r5, 0x40(r29)
/* 802F7848 002F4788  38 9D 00 34 */	addi r4, r29, 0x34
/* 802F784C 002F478C  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 802F7850 002F4790  38 A5 00 34 */	addi r5, r5, 0x34
/* 802F7854 002F4794  48 0B 95 7D */	bl "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>"
/* 802F7858 002F4798  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 802F785C 002F479C  38 80 00 00 */	li r4, 0
/* 802F7860 002F47A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7864 002F47A4  81 8C 00 08 */	lwz r12, 8(r12)
/* 802F7868 002F47A8  7D 89 03 A6 */	mtctr r12
/* 802F786C 002F47AC  4E 80 04 21 */	bctrl 
.L_802F7870:
/* 802F7870 002F47B0  7F 9D E3 78 */	mr r29, r28
/* 802F7874 002F47B4  3B DE 00 01 */	addi r30, r30, 1
.L_802F7878:
/* 802F7878 002F47B8  80 7F 01 1C */	lwz r3, 0x11c(r31)
/* 802F787C 002F47BC  80 03 00 24 */	lwz r0, 0x24(r3)
/* 802F7880 002F47C0  7C 1E 00 00 */	cmpw r30, r0
/* 802F7884 002F47C4  41 80 FF 80 */	blt .L_802F7804
.L_802F7888:
/* 802F7888 002F47C8  C0 02 EE A0 */	lfs f0, lbl_8051D200@sda21(r2)
/* 802F788C 002F47CC  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 802F7890 002F47D0  80 9F 01 1C */	lwz r4, 0x11c(r31)
/* 802F7894 002F47D4  80 64 00 24 */	lwz r3, 0x24(r4)
/* 802F7898 002F47D8  38 03 00 01 */	addi r0, r3, 1
/* 802F789C 002F47DC  90 04 00 24 */	stw r0, 0x24(r4)
.L_802F78A0:
/* 802F78A0 002F47E0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802F78A4 002F47E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F78A8 002F47E8  7C 08 03 A6 */	mtlr r0
/* 802F78AC 002F47EC  38 21 00 20 */	addi r1, r1, 0x20
/* 802F78B0 002F47F0  4E 80 00 20 */	blr 
.endfn updateElecAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn finishAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F78B4 002F47F4  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802F78B8 002F47F8  7C 08 02 A6 */	mflr r0
/* 802F78BC 002F47FC  90 01 00 44 */	stw r0, 0x44(r1)
/* 802F78C0 002F4800  38 00 00 00 */	li r0, 0
/* 802F78C4 002F4804  BF 61 00 2C */	stmw r27, 0x2c(r1)
/* 802F78C8 002F4808  7C 7F 1B 78 */	mr r31, r3
/* 802F78CC 002F480C  98 03 00 00 */	stb r0, 0(r3)
/* 802F78D0 002F4810  98 03 00 01 */	stb r0, 1(r3)
/* 802F78D4 002F4814  98 03 00 02 */	stb r0, 2(r3)
/* 802F78D8 002F4818  98 03 00 03 */	stb r0, 3(r3)
/* 802F78DC 002F481C  80 63 00 18 */	lwz r3, 0x18(r3)
/* 802F78E0 002F4820  81 83 00 00 */	lwz r12, 0(r3)
/* 802F78E4 002F4824  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F78E8 002F4828  7D 89 03 A6 */	mtctr r12
/* 802F78EC 002F482C  4E 80 04 21 */	bctrl 
/* 802F78F0 002F4830  3B C0 00 00 */	li r30, 0
/* 802F78F4 002F4834  7F FD FB 78 */	mr r29, r31
.L_802F78F8:
/* 802F78F8 002F4838  80 7D 00 A0 */	lwz r3, 0xa0(r29)
/* 802F78FC 002F483C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7900 002F4840  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7904 002F4844  7D 89 03 A6 */	mtctr r12
/* 802F7908 002F4848  4E 80 04 21 */	bctrl 
/* 802F790C 002F484C  3B DE 00 01 */	addi r30, r30, 1
/* 802F7910 002F4850  3B BD 00 04 */	addi r29, r29, 4
/* 802F7914 002F4854  2C 1E 00 04 */	cmpwi r30, 4
/* 802F7918 002F4858  41 80 FF E0 */	blt .L_802F78F8
/* 802F791C 002F485C  80 7F 00 C8 */	lwz r3, 0xc8(r31)
/* 802F7920 002F4860  83 A3 00 10 */	lwz r29, 0x10(r3)
/* 802F7924 002F4864  48 00 00 EC */	b .L_802F7A10
.L_802F7928:
/* 802F7928 002F4868  83 DD 00 04 */	lwz r30, 4(r29)
/* 802F792C 002F486C  38 00 00 00 */	li r0, 0
/* 802F7930 002F4870  90 1D 00 40 */	stw r0, 0x40(r29)
/* 802F7934 002F4874  80 7D 00 48 */	lwz r3, 0x48(r29)
/* 802F7938 002F4878  81 83 00 00 */	lwz r12, 0(r3)
/* 802F793C 002F487C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7940 002F4880  7D 89 03 A6 */	mtctr r12
/* 802F7944 002F4884  4E 80 04 21 */	bctrl 
/* 802F7948 002F4888  80 7D 00 44 */	lwz r3, 0x44(r29)
/* 802F794C 002F488C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7950 002F4890  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7954 002F4894  7D 89 03 A6 */	mtctr r12
/* 802F7958 002F4898  4E 80 04 21 */	bctrl 
/* 802F795C 002F489C  80 7D 00 4C */	lwz r3, 0x4c(r29)
/* 802F7960 002F48A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7964 002F48A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7968 002F48A8  7D 89 03 A6 */	mtctr r12
/* 802F796C 002F48AC  4E 80 04 21 */	bctrl 
/* 802F7970 002F48B0  88 1D 00 20 */	lbz r0, 0x20(r29)
/* 802F7974 002F48B4  28 00 00 00 */	cmplwi r0, 0
/* 802F7978 002F48B8  41 82 00 68 */	beq .L_802F79E0
/* 802F797C 002F48BC  3C 60 80 4B */	lis r3, __vt__Q23efx3Arg@ha
/* 802F7980 002F48C0  3C A0 80 4B */	lis r5, __vt__Q23efx5TBase@ha
/* 802F7984 002F48C4  38 03 A7 EC */	addi r0, r3, __vt__Q23efx3Arg@l
/* 802F7988 002F48C8  3C 80 80 4E */	lis r4, __vt__Q23efx8TSimple1@ha
/* 802F798C 002F48CC  90 01 00 08 */	stw r0, 8(r1)
/* 802F7990 002F48D0  3C 60 80 4D */	lis r3, __vt__Q23efx11TOootaPdead@ha
/* 802F7994 002F48D4  39 05 A7 F8 */	addi r8, r5, __vt__Q23efx5TBase@l
/* 802F7998 002F48D8  38 E4 6A 78 */	addi r7, r4, __vt__Q23efx8TSimple1@l
/* 802F799C 002F48DC  C0 1D 00 34 */	lfs f0, 0x34(r29)
/* 802F79A0 002F48E0  38 03 58 54 */	addi r0, r3, __vt__Q23efx11TOootaPdead@l
/* 802F79A4 002F48E4  38 C0 02 49 */	li r6, 0x249
/* 802F79A8 002F48E8  38 A0 00 00 */	li r5, 0
/* 802F79AC 002F48EC  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 802F79B0 002F48F0  38 61 00 18 */	addi r3, r1, 0x18
/* 802F79B4 002F48F4  38 81 00 08 */	addi r4, r1, 8
/* 802F79B8 002F48F8  C0 1D 00 38 */	lfs f0, 0x38(r29)
/* 802F79BC 002F48FC  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 802F79C0 002F4900  C0 1D 00 3C */	lfs f0, 0x3c(r29)
/* 802F79C4 002F4904  91 01 00 18 */	stw r8, 0x18(r1)
/* 802F79C8 002F4908  90 E1 00 18 */	stw r7, 0x18(r1)
/* 802F79CC 002F490C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 802F79D0 002F4910  B0 C1 00 1C */	sth r6, 0x1c(r1)
/* 802F79D4 002F4914  90 A1 00 20 */	stw r5, 0x20(r1)
/* 802F79D8 002F4918  90 01 00 18 */	stw r0, 0x18(r1)
/* 802F79DC 002F491C  48 0B 75 A9 */	bl create__Q23efx8TSimple1FPQ23efx3Arg
.L_802F79E0:
/* 802F79E0 002F4920  38 9D 00 34 */	addi r4, r29, 0x34
/* 802F79E4 002F4924  38 60 59 5D */	li r3, 0x595d
/* 802F79E8 002F4928  48 17 66 CD */	bl PSStartSoundVec__FUlP3Vec
/* 802F79EC 002F492C  7F A3 EB 78 */	mr r3, r29
/* 802F79F0 002F4930  48 11 9B E1 */	bl del__5CNodeFv
/* 802F79F4 002F4934  80 7F 00 CC */	lwz r3, 0xcc(r31)
/* 802F79F8 002F4938  7F A4 EB 78 */	mr r4, r29
/* 802F79FC 002F493C  48 11 9A 0D */	bl add__5CNodeFP5CNode
/* 802F7A00 002F4940  7F E3 FB 78 */	mr r3, r31
/* 802F7A04 002F4944  7F A4 EB 78 */	mr r4, r29
/* 802F7A08 002F4948  48 00 01 FD */	bl delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack
/* 802F7A0C 002F494C  7F DD F3 78 */	mr r29, r30
.L_802F7A10:
/* 802F7A10 002F4950  28 1D 00 00 */	cmplwi r29, 0
/* 802F7A14 002F4954  40 82 FF 14 */	bne .L_802F7928
/* 802F7A18 002F4958  3B A0 00 00 */	li r29, 0
/* 802F7A1C 002F495C  7F FB FB 78 */	mr r27, r31
.L_802F7A20:
/* 802F7A20 002F4960  3B C0 00 00 */	li r30, 0
/* 802F7A24 002F4964  7F 7C DB 78 */	mr r28, r27
.L_802F7A28:
/* 802F7A28 002F4968  80 7C 00 D0 */	lwz r3, 0xd0(r28)
/* 802F7A2C 002F496C  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7A30 002F4970  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7A34 002F4974  7D 89 03 A6 */	mtctr r12
/* 802F7A38 002F4978  4E 80 04 21 */	bctrl 
/* 802F7A3C 002F497C  3B DE 00 01 */	addi r30, r30, 1
/* 802F7A40 002F4980  3B 9C 00 04 */	addi r28, r28, 4
/* 802F7A44 002F4984  2C 1E 00 03 */	cmpwi r30, 3
/* 802F7A48 002F4988  41 80 FF E0 */	blt .L_802F7A28
/* 802F7A4C 002F498C  3B BD 00 01 */	addi r29, r29, 1
/* 802F7A50 002F4990  3B 7B 00 0C */	addi r27, r27, 0xc
/* 802F7A54 002F4994  2C 1D 00 04 */	cmpwi r29, 4
/* 802F7A58 002F4998  41 80 FF C8 */	blt .L_802F7A20
/* 802F7A5C 002F499C  80 7F 01 00 */	lwz r3, 0x100(r31)
/* 802F7A60 002F49A0  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7A64 002F49A4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7A68 002F49A8  7D 89 03 A6 */	mtctr r12
/* 802F7A6C 002F49AC  4E 80 04 21 */	bctrl 
/* 802F7A70 002F49B0  80 7F 01 04 */	lwz r3, 0x104(r31)
/* 802F7A74 002F49B4  81 83 00 00 */	lwz r12, 0(r3)
/* 802F7A78 002F49B8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 802F7A7C 002F49BC  7D 89 03 A6 */	mtctr r12
/* 802F7A80 002F49C0  4E 80 04 21 */	bctrl 
/* 802F7A84 002F49C4  BB 61 00 2C */	lmw r27, 0x2c(r1)
/* 802F7A88 002F49C8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802F7A8C 002F49CC  7C 08 03 A6 */	mtlr r0
/* 802F7A90 002F49D0  38 21 00 40 */	addi r1, r1, 0x40
/* 802F7A94 002F49D4  4E 80 00 20 */	blr 
.endfn finishAttack__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack, global
/* 802F7A98 002F49D8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7A9C 002F49DC  7C 08 02 A6 */	mflr r0
/* 802F7AA0 002F49E0  39 00 00 00 */	li r8, 0
/* 802F7AA4 002F49E4  38 C0 00 00 */	li r6, 0
/* 802F7AA8 002F49E8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7AAC 002F49EC  38 00 00 10 */	li r0, 0x10
/* 802F7AB0 002F49F0  7C 09 03 A6 */	mtctr r0
.L_802F7AB4:
/* 802F7AB4 002F49F4  80 E3 01 18 */	lwz r7, 0x118(r3)
/* 802F7AB8 002F49F8  7C A7 30 2E */	lwzx r5, r7, r6
/* 802F7ABC 002F49FC  80 05 00 24 */	lwz r0, 0x24(r5)
/* 802F7AC0 002F4A00  28 00 00 00 */	cmplwi r0, 0
/* 802F7AC4 002F4A04  40 82 00 38 */	bne .L_802F7AFC
/* 802F7AC8 002F4A08  55 05 10 3A */	slwi r5, r8, 2
/* 802F7ACC 002F4A0C  38 04 00 2C */	addi r0, r4, 0x2c
/* 802F7AD0 002F4A10  7C 87 28 2E */	lwzx r4, r7, r5
/* 802F7AD4 002F4A14  C0 02 EF 58 */	lfs f0, lbl_8051D2B8@sda21(r2)
/* 802F7AD8 002F4A18  90 04 00 24 */	stw r0, 0x24(r4)
/* 802F7ADC 002F4A1C  80 83 01 18 */	lwz r4, 0x118(r3)
/* 802F7AE0 002F4A20  7C 84 28 2E */	lwzx r4, r4, r5
/* 802F7AE4 002F4A24  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 802F7AE8 002F4A28  80 83 01 18 */	lwz r4, 0x118(r3)
/* 802F7AEC 002F4A2C  80 63 01 14 */	lwz r3, 0x114(r3)
/* 802F7AF0 002F4A30  7C 84 28 2E */	lwzx r4, r4, r5
/* 802F7AF4 002F4A34  48 11 99 15 */	bl add__5CNodeFP5CNode
/* 802F7AF8 002F4A38  48 00 00 10 */	b .L_802F7B08
.L_802F7AFC:
/* 802F7AFC 002F4A3C  38 C6 00 04 */	addi r6, r6, 4
/* 802F7B00 002F4A40  39 08 00 01 */	addi r8, r8, 1
/* 802F7B04 002F4A44  42 00 FF B0 */	bdnz .L_802F7AB4
.L_802F7B08:
/* 802F7B08 002F4A48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7B0C 002F4A4C  7C 08 03 A6 */	mtlr r0
/* 802F7B10 002F4A50  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7B14 002F4A54  4E 80 00 20 */	blr 
.endfn addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack

.fn addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack, global
/* 802F7B18 002F4A58  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7B1C 002F4A5C  7C 08 02 A6 */	mflr r0
/* 802F7B20 002F4A60  39 00 00 00 */	li r8, 0
/* 802F7B24 002F4A64  38 C0 00 00 */	li r6, 0
/* 802F7B28 002F4A68  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7B2C 002F4A6C  38 00 00 10 */	li r0, 0x10
/* 802F7B30 002F4A70  7C 09 03 A6 */	mtctr r0
.L_802F7B34:
/* 802F7B34 002F4A74  80 E3 01 18 */	lwz r7, 0x118(r3)
/* 802F7B38 002F4A78  7C A7 30 2E */	lwzx r5, r7, r6
/* 802F7B3C 002F4A7C  80 05 00 24 */	lwz r0, 0x24(r5)
/* 802F7B40 002F4A80  28 00 00 00 */	cmplwi r0, 0
/* 802F7B44 002F4A84  40 82 00 38 */	bne .L_802F7B7C
/* 802F7B48 002F4A88  55 05 10 3A */	slwi r5, r8, 2
/* 802F7B4C 002F4A8C  38 04 00 34 */	addi r0, r4, 0x34
/* 802F7B50 002F4A90  7C 87 28 2E */	lwzx r4, r7, r5
/* 802F7B54 002F4A94  C0 02 EF 5C */	lfs f0, lbl_8051D2BC@sda21(r2)
/* 802F7B58 002F4A98  90 04 00 24 */	stw r0, 0x24(r4)
/* 802F7B5C 002F4A9C  80 83 01 18 */	lwz r4, 0x118(r3)
/* 802F7B60 002F4AA0  7C 84 28 2E */	lwzx r4, r4, r5
/* 802F7B64 002F4AA4  D0 04 00 28 */	stfs f0, 0x28(r4)
/* 802F7B68 002F4AA8  80 83 01 18 */	lwz r4, 0x118(r3)
/* 802F7B6C 002F4AAC  80 63 01 14 */	lwz r3, 0x114(r3)
/* 802F7B70 002F4AB0  7C 84 28 2E */	lwzx r4, r4, r5
/* 802F7B74 002F4AB4  48 11 98 95 */	bl add__5CNodeFP5CNode
/* 802F7B78 002F4AB8  48 00 00 10 */	b .L_802F7B88
.L_802F7B7C:
/* 802F7B7C 002F4ABC  38 C6 00 04 */	addi r6, r6, 4
/* 802F7B80 002F4AC0  39 08 00 01 */	addi r8, r8, 1
/* 802F7B84 002F4AC4  42 00 FF B0 */	bdnz .L_802F7B34
.L_802F7B88:
/* 802F7B88 002F4AC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7B8C 002F4ACC  7C 08 03 A6 */	mtlr r0
/* 802F7B90 002F4AD0  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7B94 002F4AD4  4E 80 00 20 */	blr 
.endfn addAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack

.fn delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack, global
/* 802F7B98 002F4AD8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F7B9C 002F4ADC  7C 08 02 A6 */	mflr r0
/* 802F7BA0 002F4AE0  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F7BA4 002F4AE4  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802F7BA8 002F4AE8  3B A0 00 00 */	li r29, 0
/* 802F7BAC 002F4AEC  7C 7B 1B 78 */	mr r27, r3
/* 802F7BB0 002F4AF0  3B C4 00 2C */	addi r30, r4, 0x2c
/* 802F7BB4 002F4AF4  7F BF EB 78 */	mr r31, r29
/* 802F7BB8 002F4AF8  3B 80 00 00 */	li r28, 0
.L_802F7BBC:
/* 802F7BBC 002F4AFC  80 7B 01 18 */	lwz r3, 0x118(r27)
/* 802F7BC0 002F4B00  7C 63 E8 2E */	lwzx r3, r3, r29
/* 802F7BC4 002F4B04  80 03 00 24 */	lwz r0, 0x24(r3)
/* 802F7BC8 002F4B08  7C 00 F0 40 */	cmplw r0, r30
/* 802F7BCC 002F4B0C  40 82 00 14 */	bne .L_802F7BE0
/* 802F7BD0 002F4B10  93 E3 00 24 */	stw r31, 0x24(r3)
/* 802F7BD4 002F4B14  80 7B 01 18 */	lwz r3, 0x118(r27)
/* 802F7BD8 002F4B18  7C 63 E8 2E */	lwzx r3, r3, r29
/* 802F7BDC 002F4B1C  48 11 99 F5 */	bl del__5CNodeFv
.L_802F7BE0:
/* 802F7BE0 002F4B20  3B 9C 00 01 */	addi r28, r28, 1
/* 802F7BE4 002F4B24  3B BD 00 04 */	addi r29, r29, 4
/* 802F7BE8 002F4B28  2C 1C 00 10 */	cmpwi r28, 0x10
/* 802F7BEC 002F4B2C  41 80 FF D0 */	blt .L_802F7BBC
/* 802F7BF0 002F4B30  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802F7BF4 002F4B34  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F7BF8 002F4B38  7C 08 03 A6 */	mtlr r0
/* 802F7BFC 002F4B3C  38 21 00 20 */	addi r1, r1, 0x20
/* 802F7C00 002F4B40  4E 80 00 20 */	blr 
.endfn delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure22BigTreasureWaterAttack

.fn delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack, global
/* 802F7C04 002F4B44  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802F7C08 002F4B48  7C 08 02 A6 */	mflr r0
/* 802F7C0C 002F4B4C  90 01 00 24 */	stw r0, 0x24(r1)
/* 802F7C10 002F4B50  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 802F7C14 002F4B54  3B A0 00 00 */	li r29, 0
/* 802F7C18 002F4B58  7C 7B 1B 78 */	mr r27, r3
/* 802F7C1C 002F4B5C  3B C4 00 34 */	addi r30, r4, 0x34
/* 802F7C20 002F4B60  7F BF EB 78 */	mr r31, r29
/* 802F7C24 002F4B64  3B 80 00 00 */	li r28, 0
.L_802F7C28:
/* 802F7C28 002F4B68  80 7B 01 18 */	lwz r3, 0x118(r27)
/* 802F7C2C 002F4B6C  7C 63 E8 2E */	lwzx r3, r3, r29
/* 802F7C30 002F4B70  80 03 00 24 */	lwz r0, 0x24(r3)
/* 802F7C34 002F4B74  7C 00 F0 40 */	cmplw r0, r30
/* 802F7C38 002F4B78  40 82 00 14 */	bne .L_802F7C4C
/* 802F7C3C 002F4B7C  93 E3 00 24 */	stw r31, 0x24(r3)
/* 802F7C40 002F4B80  80 7B 01 18 */	lwz r3, 0x118(r27)
/* 802F7C44 002F4B84  7C 63 E8 2E */	lwzx r3, r3, r29
/* 802F7C48 002F4B88  48 11 99 89 */	bl del__5CNodeFv
.L_802F7C4C:
/* 802F7C4C 002F4B8C  3B 9C 00 01 */	addi r28, r28, 1
/* 802F7C50 002F4B90  3B BD 00 04 */	addi r29, r29, 4
/* 802F7C54 002F4B94  2C 1C 00 10 */	cmpwi r28, 0x10
/* 802F7C58 002F4B98  41 80 FF D0 */	blt .L_802F7C28
/* 802F7C5C 002F4B9C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 802F7C60 002F4BA0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 802F7C64 002F4BA4  7C 08 03 A6 */	mtlr r0
/* 802F7C68 002F4BA8  38 21 00 20 */	addi r1, r1, 0x20
/* 802F7C6C 002F4BAC  4E 80 00 20 */	blr 
.endfn delAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFPQ34Game11BigTreasure21BigTreasureElecAttack

.fn updateAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFv, global
/* 802F7C70 002F4BB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7C74 002F4BB4  7C 08 02 A6 */	mflr r0
/* 802F7C78 002F4BB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7C7C 002F4BBC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7C80 002F4BC0  80 63 01 14 */	lwz r3, 0x114(r3)
/* 802F7C84 002F4BC4  83 E3 00 10 */	lwz r31, 0x10(r3)
/* 802F7C88 002F4BC8  48 00 00 10 */	b .L_802F7C98
.L_802F7C8C:
/* 802F7C8C 002F4BCC  7F E3 FB 78 */	mr r3, r31
/* 802F7C90 002F4BD0  4B FF BD 19 */	bl makeShadowSRT__Q34Game11BigTreasure16AttackShadowNodeFv
/* 802F7C94 002F4BD4  83 FF 00 04 */	lwz r31, 4(r31)
.L_802F7C98:
/* 802F7C98 002F4BD8  28 1F 00 00 */	cmplwi r31, 0
/* 802F7C9C 002F4BDC  40 82 FF F0 */	bne .L_802F7C8C
/* 802F7CA0 002F4BE0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7CA4 002F4BE4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7CA8 002F4BE8  7C 08 03 A6 */	mtlr r0
/* 802F7CAC 002F4BEC  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7CB0 002F4BF0  4E 80 00 20 */	blr 
.endfn updateAttackShadow__Q34Game11BigTreasure20BigTreasureAttackMgrFv

.fn __dt__Q23efx17TOootaElecAttack1Fv, weak
/* 802F7CB4 002F4BF4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7CB8 002F4BF8  7C 08 02 A6 */	mflr r0
/* 802F7CBC 002F4BFC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7CC0 002F4C00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7CC4 002F4C04  7C 9F 23 78 */	mr r31, r4
/* 802F7CC8 002F4C08  93 C1 00 08 */	stw r30, 8(r1)
/* 802F7CCC 002F4C0C  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F7CD0 002F4C10  41 82 00 64 */	beq .L_802F7D34
/* 802F7CD4 002F4C14  3C 60 80 4D */	lis r3, __vt__Q23efx17TOootaElecAttack1@ha
/* 802F7CD8 002F4C18  38 63 57 A0 */	addi r3, r3, __vt__Q23efx17TOootaElecAttack1@l
/* 802F7CDC 002F4C1C  90 7E 00 00 */	stw r3, 0(r30)
/* 802F7CE0 002F4C20  38 03 00 14 */	addi r0, r3, 0x14
/* 802F7CE4 002F4C24  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7CE8 002F4C28  41 82 00 3C */	beq .L_802F7D24
/* 802F7CEC 002F4C2C  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802F7CF0 002F4C30  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802F7CF4 002F4C34  90 7E 00 00 */	stw r3, 0(r30)
/* 802F7CF8 002F4C38  38 03 00 14 */	addi r0, r3, 0x14
/* 802F7CFC 002F4C3C  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7D00 002F4C40  41 82 00 24 */	beq .L_802F7D24
/* 802F7D04 002F4C44  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802F7D08 002F4C48  38 7E 00 04 */	addi r3, r30, 4
/* 802F7D0C 002F4C4C  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802F7D10 002F4C50  38 80 00 00 */	li r4, 0
/* 802F7D14 002F4C54  90 BE 00 00 */	stw r5, 0(r30)
/* 802F7D18 002F4C58  38 05 00 14 */	addi r0, r5, 0x14
/* 802F7D1C 002F4C5C  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7D20 002F4C60  4B D9 7F 7D */	bl __dt__18JPAEmitterCallBackFv
.L_802F7D24:
/* 802F7D24 002F4C64  7F E0 07 35 */	extsh. r0, r31
/* 802F7D28 002F4C68  40 81 00 0C */	ble .L_802F7D34
/* 802F7D2C 002F4C6C  7F C3 F3 78 */	mr r3, r30
/* 802F7D30 002F4C70  4B D2 C3 85 */	bl __dl__FPv
.L_802F7D34:
/* 802F7D34 002F4C74  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7D38 002F4C78  7F C3 F3 78 */	mr r3, r30
/* 802F7D3C 002F4C7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7D40 002F4C80  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F7D44 002F4C84  7C 08 03 A6 */	mtlr r0
/* 802F7D48 002F4C88  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7D4C 002F4C8C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx17TOootaElecAttack1Fv

.fn __dt__Q23efx13TOootaElecLegFv, weak
/* 802F7D50 002F4C90  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7D54 002F4C94  7C 08 02 A6 */	mflr r0
/* 802F7D58 002F4C98  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7D5C 002F4C9C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7D60 002F4CA0  7C 9F 23 78 */	mr r31, r4
/* 802F7D64 002F4CA4  93 C1 00 08 */	stw r30, 8(r1)
/* 802F7D68 002F4CA8  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F7D6C 002F4CAC  41 82 00 64 */	beq .L_802F7DD0
/* 802F7D70 002F4CB0  3C 60 80 4D */	lis r3, __vt__Q23efx13TOootaElecLeg@ha
/* 802F7D74 002F4CB4  38 63 57 EC */	addi r3, r3, __vt__Q23efx13TOootaElecLeg@l
/* 802F7D78 002F4CB8  90 7E 00 00 */	stw r3, 0(r30)
/* 802F7D7C 002F4CBC  38 03 00 14 */	addi r0, r3, 0x14
/* 802F7D80 002F4CC0  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7D84 002F4CC4  41 82 00 3C */	beq .L_802F7DC0
/* 802F7D88 002F4CC8  3C 60 80 4E */	lis r3, __vt__Q23efx23TChasePosPosLocalZScale@ha
/* 802F7D8C 002F4CCC  38 63 67 C4 */	addi r3, r3, __vt__Q23efx23TChasePosPosLocalZScale@l
/* 802F7D90 002F4CD0  90 7E 00 00 */	stw r3, 0(r30)
/* 802F7D94 002F4CD4  38 03 00 14 */	addi r0, r3, 0x14
/* 802F7D98 002F4CD8  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7D9C 002F4CDC  41 82 00 24 */	beq .L_802F7DC0
/* 802F7DA0 002F4CE0  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802F7DA4 002F4CE4  38 7E 00 04 */	addi r3, r30, 4
/* 802F7DA8 002F4CE8  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802F7DAC 002F4CEC  38 80 00 00 */	li r4, 0
/* 802F7DB0 002F4CF0  90 BE 00 00 */	stw r5, 0(r30)
/* 802F7DB4 002F4CF4  38 05 00 14 */	addi r0, r5, 0x14
/* 802F7DB8 002F4CF8  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7DBC 002F4CFC  4B D9 7E E1 */	bl __dt__18JPAEmitterCallBackFv
.L_802F7DC0:
/* 802F7DC0 002F4D00  7F E0 07 35 */	extsh. r0, r31
/* 802F7DC4 002F4D04  40 81 00 0C */	ble .L_802F7DD0
/* 802F7DC8 002F4D08  7F C3 F3 78 */	mr r3, r30
/* 802F7DCC 002F4D0C  4B D2 C2 E9 */	bl __dl__FPv
.L_802F7DD0:
/* 802F7DD0 002F4D10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7DD4 002F4D14  7F C3 F3 78 */	mr r3, r30
/* 802F7DD8 002F4D18  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7DDC 002F4D1C  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F7DE0 002F4D20  7C 08 03 A6 */	mtlr r0
/* 802F7DE4 002F4D24  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7DE8 002F4D28  4E 80 00 20 */	blr 
.endfn __dt__Q23efx13TOootaElecLegFv

.fn __dt__Q23efx15TOootaElecpartsFv, weak
/* 802F7DEC 002F4D2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7DF0 002F4D30  7C 08 02 A6 */	mflr r0
/* 802F7DF4 002F4D34  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7DF8 002F4D38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7DFC 002F4D3C  7C 9F 23 78 */	mr r31, r4
/* 802F7E00 002F4D40  93 C1 00 08 */	stw r30, 8(r1)
/* 802F7E04 002F4D44  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F7E08 002F4D48  41 82 00 64 */	beq .L_802F7E6C
/* 802F7E0C 002F4D4C  3C 60 80 4D */	lis r3, __vt__Q23efx15TOootaElecparts@ha
/* 802F7E10 002F4D50  38 63 58 BC */	addi r3, r3, __vt__Q23efx15TOootaElecparts@l
/* 802F7E14 002F4D54  90 7E 00 00 */	stw r3, 0(r30)
/* 802F7E18 002F4D58  38 03 00 14 */	addi r0, r3, 0x14
/* 802F7E1C 002F4D5C  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7E20 002F4D60  41 82 00 3C */	beq .L_802F7E5C
/* 802F7E24 002F4D64  3C 60 80 4E */	lis r3, __vt__Q23efx9TChasePos@ha
/* 802F7E28 002F4D68  38 63 69 40 */	addi r3, r3, __vt__Q23efx9TChasePos@l
/* 802F7E2C 002F4D6C  90 7E 00 00 */	stw r3, 0(r30)
/* 802F7E30 002F4D70  38 03 00 14 */	addi r0, r3, 0x14
/* 802F7E34 002F4D74  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7E38 002F4D78  41 82 00 24 */	beq .L_802F7E5C
/* 802F7E3C 002F4D7C  3C 80 80 4E */	lis r4, __vt__Q23efx5TSync@ha
/* 802F7E40 002F4D80  38 7E 00 04 */	addi r3, r30, 4
/* 802F7E44 002F4D84  38 A4 69 8C */	addi r5, r4, __vt__Q23efx5TSync@l
/* 802F7E48 002F4D88  38 80 00 00 */	li r4, 0
/* 802F7E4C 002F4D8C  90 BE 00 00 */	stw r5, 0(r30)
/* 802F7E50 002F4D90  38 05 00 14 */	addi r0, r5, 0x14
/* 802F7E54 002F4D94  90 1E 00 04 */	stw r0, 4(r30)
/* 802F7E58 002F4D98  4B D9 7E 45 */	bl __dt__18JPAEmitterCallBackFv
.L_802F7E5C:
/* 802F7E5C 002F4D9C  7F E0 07 35 */	extsh. r0, r31
/* 802F7E60 002F4DA0  40 81 00 0C */	ble .L_802F7E6C
/* 802F7E64 002F4DA4  7F C3 F3 78 */	mr r3, r30
/* 802F7E68 002F4DA8  4B D2 C2 4D */	bl __dl__FPv
.L_802F7E6C:
/* 802F7E6C 002F4DAC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7E70 002F4DB0  7F C3 F3 78 */	mr r3, r30
/* 802F7E74 002F4DB4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7E78 002F4DB8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F7E7C 002F4DBC  7C 08 03 A6 */	mtlr r0
/* 802F7E80 002F4DC0  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7E84 002F4DC4  4E 80 00 20 */	blr 
.endfn __dt__Q23efx15TOootaElecpartsFv

.fn __dt__Q34Game11BigTreasure21BigTreasureElecAttackFv, weak
/* 802F7E88 002F4DC8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7E8C 002F4DCC  7C 08 02 A6 */	mflr r0
/* 802F7E90 002F4DD0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7E94 002F4DD4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7E98 002F4DD8  7C 9F 23 78 */	mr r31, r4
/* 802F7E9C 002F4DDC  93 C1 00 08 */	stw r30, 8(r1)
/* 802F7EA0 002F4DE0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F7EA4 002F4DE4  41 82 00 28 */	beq .L_802F7ECC
/* 802F7EA8 002F4DE8  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure21BigTreasureElecAttack@ha
/* 802F7EAC 002F4DEC  38 80 00 00 */	li r4, 0
/* 802F7EB0 002F4DF0  38 05 59 24 */	addi r0, r5, __vt__Q34Game11BigTreasure21BigTreasureElecAttack@l
/* 802F7EB4 002F4DF4  90 1E 00 00 */	stw r0, 0(r30)
/* 802F7EB8 002F4DF8  48 11 96 D1 */	bl __dt__5CNodeFv
/* 802F7EBC 002F4DFC  7F E0 07 35 */	extsh. r0, r31
/* 802F7EC0 002F4E00  40 81 00 0C */	ble .L_802F7ECC
/* 802F7EC4 002F4E04  7F C3 F3 78 */	mr r3, r30
/* 802F7EC8 002F4E08  4B D2 C1 ED */	bl __dl__FPv
.L_802F7ECC:
/* 802F7ECC 002F4E0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7ED0 002F4E10  7F C3 F3 78 */	mr r3, r30
/* 802F7ED4 002F4E14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7ED8 002F4E18  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F7EDC 002F4E1C  7C 08 03 A6 */	mtlr r0
/* 802F7EE0 002F4E20  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7EE4 002F4E24  4E 80 00 20 */	blr 
.endfn __dt__Q34Game11BigTreasure21BigTreasureElecAttackFv

.fn __dt__Q34Game11BigTreasure22BigTreasureWaterAttackFv, weak
/* 802F7EE8 002F4E28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7EEC 002F4E2C  7C 08 02 A6 */	mflr r0
/* 802F7EF0 002F4E30  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7EF4 002F4E34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7EF8 002F4E38  7C 9F 23 78 */	mr r31, r4
/* 802F7EFC 002F4E3C  93 C1 00 08 */	stw r30, 8(r1)
/* 802F7F00 002F4E40  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F7F04 002F4E44  41 82 00 28 */	beq .L_802F7F2C
/* 802F7F08 002F4E48  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure22BigTreasureWaterAttack@ha
/* 802F7F0C 002F4E4C  38 80 00 00 */	li r4, 0
/* 802F7F10 002F4E50  38 05 59 9C */	addi r0, r5, __vt__Q34Game11BigTreasure22BigTreasureWaterAttack@l
/* 802F7F14 002F4E54  90 1E 00 00 */	stw r0, 0(r30)
/* 802F7F18 002F4E58  48 11 96 71 */	bl __dt__5CNodeFv
/* 802F7F1C 002F4E5C  7F E0 07 35 */	extsh. r0, r31
/* 802F7F20 002F4E60  40 81 00 0C */	ble .L_802F7F2C
/* 802F7F24 002F4E64  7F C3 F3 78 */	mr r3, r30
/* 802F7F28 002F4E68  4B D2 C1 8D */	bl __dl__FPv
.L_802F7F2C:
/* 802F7F2C 002F4E6C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7F30 002F4E70  7F C3 F3 78 */	mr r3, r30
/* 802F7F34 002F4E74  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7F38 002F4E78  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F7F3C 002F4E7C  7C 08 03 A6 */	mtlr r0
/* 802F7F40 002F4E80  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7F44 002F4E84  4E 80 00 20 */	blr 
.endfn __dt__Q34Game11BigTreasure22BigTreasureWaterAttackFv

.fn __dt__Q34Game11BigTreasure20BigTreasureGasAttackFv, weak
/* 802F7F48 002F4E88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7F4C 002F4E8C  7C 08 02 A6 */	mflr r0
/* 802F7F50 002F4E90  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7F54 002F4E94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7F58 002F4E98  7C 9F 23 78 */	mr r31, r4
/* 802F7F5C 002F4E9C  93 C1 00 08 */	stw r30, 8(r1)
/* 802F7F60 002F4EA0  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F7F64 002F4EA4  41 82 00 28 */	beq .L_802F7F8C
/* 802F7F68 002F4EA8  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure20BigTreasureGasAttack@ha
/* 802F7F6C 002F4EAC  38 80 00 00 */	li r4, 0
/* 802F7F70 002F4EB0  38 05 59 AC */	addi r0, r5, __vt__Q34Game11BigTreasure20BigTreasureGasAttack@l
/* 802F7F74 002F4EB4  90 1E 00 00 */	stw r0, 0(r30)
/* 802F7F78 002F4EB8  48 11 96 11 */	bl __dt__5CNodeFv
/* 802F7F7C 002F4EBC  7F E0 07 35 */	extsh. r0, r31
/* 802F7F80 002F4EC0  40 81 00 0C */	ble .L_802F7F8C
/* 802F7F84 002F4EC4  7F C3 F3 78 */	mr r3, r30
/* 802F7F88 002F4EC8  4B D2 C1 2D */	bl __dl__FPv
.L_802F7F8C:
/* 802F7F8C 002F4ECC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7F90 002F4ED0  7F C3 F3 78 */	mr r3, r30
/* 802F7F94 002F4ED4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7F98 002F4ED8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F7F9C 002F4EDC  7C 08 03 A6 */	mtlr r0
/* 802F7FA0 002F4EE0  38 21 00 10 */	addi r1, r1, 0x10
/* 802F7FA4 002F4EE4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game11BigTreasure20BigTreasureGasAttackFv

.fn __dt__Q34Game11BigTreasure21BigTreasureFireAttackFv, weak
/* 802F7FA8 002F4EE8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F7FAC 002F4EEC  7C 08 02 A6 */	mflr r0
/* 802F7FB0 002F4EF0  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F7FB4 002F4EF4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F7FB8 002F4EF8  7C 9F 23 78 */	mr r31, r4
/* 802F7FBC 002F4EFC  93 C1 00 08 */	stw r30, 8(r1)
/* 802F7FC0 002F4F00  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F7FC4 002F4F04  41 82 00 28 */	beq .L_802F7FEC
/* 802F7FC8 002F4F08  3C A0 80 4D */	lis r5, __vt__Q34Game11BigTreasure21BigTreasureFireAttack@ha
/* 802F7FCC 002F4F0C  38 80 00 00 */	li r4, 0
/* 802F7FD0 002F4F10  38 05 59 BC */	addi r0, r5, __vt__Q34Game11BigTreasure21BigTreasureFireAttack@l
/* 802F7FD4 002F4F14  90 1E 00 00 */	stw r0, 0(r30)
/* 802F7FD8 002F4F18  48 11 95 B1 */	bl __dt__5CNodeFv
/* 802F7FDC 002F4F1C  7F E0 07 35 */	extsh. r0, r31
/* 802F7FE0 002F4F20  40 81 00 0C */	ble .L_802F7FEC
/* 802F7FE4 002F4F24  7F C3 F3 78 */	mr r3, r30
/* 802F7FE8 002F4F28  4B D2 C0 CD */	bl __dl__FPv
.L_802F7FEC:
/* 802F7FEC 002F4F2C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F7FF0 002F4F30  7F C3 F3 78 */	mr r3, r30
/* 802F7FF4 002F4F34  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F7FF8 002F4F38  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F7FFC 002F4F3C  7C 08 03 A6 */	mtlr r0
/* 802F8000 002F4F40  38 21 00 10 */	addi r1, r1, 0x10
/* 802F8004 002F4F44  4E 80 00 20 */	blr 
.endfn __dt__Q34Game11BigTreasure21BigTreasureFireAttackFv

.fn __dt__Q34Game11BigTreasure16AttackShadowNodeFv, weak
/* 802F8008 002F4F48  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802F800C 002F4F4C  7C 08 02 A6 */	mflr r0
/* 802F8010 002F4F50  90 01 00 14 */	stw r0, 0x14(r1)
/* 802F8014 002F4F54  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802F8018 002F4F58  7C 9F 23 78 */	mr r31, r4
/* 802F801C 002F4F5C  93 C1 00 08 */	stw r30, 8(r1)
/* 802F8020 002F4F60  7C 7E 1B 79 */	or. r30, r3, r3
/* 802F8024 002F4F64  41 82 00 38 */	beq .L_802F805C
/* 802F8028 002F4F68  3C 80 80 4D */	lis r4, __vt__Q34Game11BigTreasure16AttackShadowNode@ha
/* 802F802C 002F4F6C  38 04 59 CC */	addi r0, r4, __vt__Q34Game11BigTreasure16AttackShadowNode@l
/* 802F8030 002F4F70  90 1E 00 00 */	stw r0, 0(r30)
/* 802F8034 002F4F74  41 82 00 18 */	beq .L_802F804C
/* 802F8038 002F4F78  3C A0 80 4C */	lis r5, __vt__Q24Game15JointShadowNode@ha
/* 802F803C 002F4F7C  38 80 00 00 */	li r4, 0
/* 802F8040 002F4F80  38 05 1A 34 */	addi r0, r5, __vt__Q24Game15JointShadowNode@l
/* 802F8044 002F4F84  90 1E 00 00 */	stw r0, 0(r30)
/* 802F8048 002F4F88  48 11 95 41 */	bl __dt__5CNodeFv
.L_802F804C:
/* 802F804C 002F4F8C  7F E0 07 35 */	extsh. r0, r31
/* 802F8050 002F4F90  40 81 00 0C */	ble .L_802F805C
/* 802F8054 002F4F94  7F C3 F3 78 */	mr r3, r30
/* 802F8058 002F4F98  4B D2 C0 5D */	bl __dl__FPv
.L_802F805C:
/* 802F805C 002F4F9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802F8060 002F4FA0  7F C3 F3 78 */	mr r3, r30
/* 802F8064 002F4FA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802F8068 002F4FA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 802F806C 002F4FAC  7C 08 03 A6 */	mtlr r0
/* 802F8070 002F4FB0  38 21 00 10 */	addi r1, r1, 0x10
/* 802F8074 002F4FB4  4E 80 00 20 */	blr 
.endfn __dt__Q34Game11BigTreasure16AttackShadowNodeFv

.fn "@4@__dt__Q23efx15TOootaElecpartsFv", weak
/* 802F8078 002F4FB8  38 63 FF FC */	addi r3, r3, -4
/* 802F807C 002F4FBC  4B FF FD 70 */	b __dt__Q23efx15TOootaElecpartsFv
.endfn "@4@__dt__Q23efx15TOootaElecpartsFv"

.fn "@4@__dt__Q23efx13TOootaElecLegFv", weak
/* 802F8080 002F4FC0  38 63 FF FC */	addi r3, r3, -4
/* 802F8084 002F4FC4  4B FF FC CC */	b __dt__Q23efx13TOootaElecLegFv
.endfn "@4@__dt__Q23efx13TOootaElecLegFv"

.fn "@4@__dt__Q23efx17TOootaElecAttack1Fv", weak
/* 802F8088 002F4FC8  38 63 FF FC */	addi r3, r3, -4
/* 802F808C 002F4FCC  4B FF FC 28 */	b __dt__Q23efx17TOootaElecAttack1Fv
.endfn "@4@__dt__Q23efx17TOootaElecAttack1Fv"
