.include "macros.inc"
.section .ctors, "wa"  # 0x80472F00 - 0x804732C0
lbl_constructor:
	.4byte __sinit_efxBase_cpp

.section .rodata  # 0x804732E0 - 0x8049E220
.balign 8
.obj lbl_80495880, local
	.asciz "efxBase.cpp"
.endobj lbl_80495880
.balign 4
.obj lbl_8049588C, local
	.asciz "P2Assert"
.endobj lbl_8049588C

.section .data, "wa"  # 0x8049E220 - 0x804EFC20
.balign 8
.obj __vt__Q23efx23TChasePosPosLocalYScale, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx23TChasePosPosLocalYScaleFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx23TChasePosPosLocalYScaleFv
.endobj __vt__Q23efx23TChasePosPosLocalYScale
.obj __vt__Q23efx23TChasePosPosLocalZScale, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx23TChasePosPosLocalZScaleFv"
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
	.4byte __dt__Q23efx23TChasePosPosLocalZScaleFv
.endobj __vt__Q23efx23TChasePosPosLocalZScale
.obj __vt__Q23efx12TChasePosPos, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx12TChasePosPosFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx12TChasePosPosFv
.endobj __vt__Q23efx12TChasePosPos
.obj __vt__Q23efx10TChaseMtxT, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx10TChaseMtxTFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx10TChaseMtxTFv
.endobj __vt__Q23efx10TChaseMtxT
.obj __vt__Q23efx9TChaseMtx, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TChaseMtxFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx9TChaseMtxFv
.endobj __vt__Q23efx9TChaseMtx
.obj __vt__Q23efx13TChasePosYRot, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx13TChasePosYRotFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx13TChasePosYRotFv
.endobj __vt__Q23efx13TChasePosYRot
.obj __vt__Q23efx9TChasePos, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx9TChasePosFv"
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
	.4byte __dt__Q23efx9TChasePosFv
.endobj __vt__Q23efx9TChasePos
.obj __vt__Q23efx5TSync, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx5TSyncFPQ23efx3Arg
	.4byte forceKill__Q23efx5TSyncFv
	.4byte fade__Q23efx5TSyncFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx5TSyncFv"
	.4byte "@4@execute__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte "@4@executeAfter__Q23efx5TSyncFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte execute__Q23efx5TSyncFP14JPABaseEmitter
	.4byte executeAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte 0
	.4byte doExecuteAfter__Q23efx5TSyncFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx5TSyncFv
	.4byte endDemoDrawOn__Q23efx5TSyncFv
	.4byte __dt__Q23efx5TSyncFv
.endobj __vt__Q23efx5TSync
.obj __vt__Q23efx11TSimpleMtx4, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx4FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx11TSimpleMtx4
.obj __vt__Q23efx11TSimpleMtx3, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx11TSimpleMtx3
.obj __vt__Q23efx11TSimpleMtx2, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx11TSimpleMtx2
.obj __vt__Q23efx11TSimpleMtx1, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TSimpleMtx1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx11TSimpleMtx1
.obj __vt__Q23efx8TSimple5, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple5FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple5Fv
	.4byte fade__Q23efx8TSimple5Fv
.endobj __vt__Q23efx8TSimple5
.obj __vt__Q23efx8TSimple4, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple4FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple4Fv
	.4byte fade__Q23efx8TSimple4Fv
.endobj __vt__Q23efx8TSimple4
.obj __vt__Q23efx8TSimple3, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple3FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple3Fv
	.4byte fade__Q23efx8TSimple3Fv
.endobj __vt__Q23efx8TSimple3
.obj __vt__Q23efx8TSimple2, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple2FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple2Fv
	.4byte fade__Q23efx8TSimple2Fv
.endobj __vt__Q23efx8TSimple2
.obj __vt__Q23efx8TSimple1, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx8TSimple1FPQ23efx3Arg
	.4byte forceKill__Q23efx8TSimple1Fv
	.4byte fade__Q23efx8TSimple1Fv
.endobj __vt__Q23efx8TSimple1
.obj __vt__Q23efx17TOneEmitterSimple, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg
	.4byte forceKill__Q23efx17TOneEmitterSimpleFv
	.4byte fade__Q23efx17TOneEmitterSimpleFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx17TOneEmitterSimpleFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte "@4@executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx17TOneEmitterSimpleFv
	.4byte endDemoDrawOn__Q23efx17TOneEmitterSimpleFv
	.4byte __dt__Q23efx17TOneEmitterSimpleFv
.endobj __vt__Q23efx17TOneEmitterSimple
.obj __vt__Q23efx19TOneEmitterChasePos, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx19TOneEmitterChasePosFPQ23efx3Arg
	.4byte forceKill__Q23efx19TOneEmitterChasePosFv
	.4byte fade__Q23efx19TOneEmitterChasePosFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx19TOneEmitterChasePosFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte "@4@executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx19TOneEmitterChasePosFv
	.4byte endDemoDrawOn__Q23efx19TOneEmitterChasePosFv
	.4byte __dt__Q23efx19TOneEmitterChasePosFv
.endobj __vt__Q23efx19TOneEmitterChasePos
.obj __vt__Q23efx11TOneEmitter, global
	.4byte 0
	.4byte 0
	.4byte create__Q23efx11TOneEmitterFPQ23efx3Arg
	.4byte forceKill__Q23efx11TOneEmitterFv
	.4byte fade__Q23efx11TOneEmitterFv
	.4byte 0
	.4byte 0
	.4byte "@4@__dt__Q23efx11TOneEmitterFv"
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte "@4@executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter"
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter
	.4byte startDemoDrawOff__Q23efx11TOneEmitterFv
	.4byte endDemoDrawOn__Q23efx11TOneEmitterFv
	.4byte __dt__Q23efx11TOneEmitterFv
.endobj __vt__Q23efx11TOneEmitter
.obj __vt__Q23efx24TCallBack_StaticClipping, global
	.4byte 0
	.4byte 0
	.4byte __dt__Q23efx24TCallBack_StaticClippingFv
	.4byte execute__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte executeAfter__Q23efx24TCallBack_StaticClippingFP14JPABaseEmitter
	.4byte draw__18JPAEmitterCallBackFP14JPABaseEmitter
	.4byte drawAfter__18JPAEmitterCallBackFP14JPABaseEmitter
.endobj __vt__Q23efx24TCallBack_StaticClipping

.section .bss  # 0x804EFC20 - 0x8051467C
.balign 8
.lcomm lbl_804F7C10, 0xC, 4

.section .sbss # 0x80514D80 - 0x80516360
.balign 8
.obj mCallBack_StaticClipping__Q23efx5TBase, global
	.skip 0x4
.endobj mCallBack_StaticClipping__Q23efx5TBase

.section .sdata2, "a"     # 0x80516360 - 0x80520E40
.balign 8
.obj lbl_8051F610, local
	.float 0.5
.endobj lbl_8051F610
.obj lbl_8051F614, local
	.float 0.0
.endobj lbl_8051F614
.obj lbl_8051F618, local
	.float 1.0
.endobj lbl_8051F618

.section .text, "ax"  # 0x800056C0 - 0x80472F00
.fn executeAfter__Q23efx24TCallBack_StaticClippingFP14JPABaseEmitter, global
/* 803AE8B0 003AB7F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AE8B4 003AB7F4  7C 08 02 A6 */	mflr r0
/* 803AE8B8 003AB7F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AE8BC 003AB7FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AE8C0 003AB800  7C 9F 23 78 */	mr r31, r4
/* 803AE8C4 003AB804  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AE8C8 003AB808  48 00 D1 11 */	bl setGlobalColor__11ParticleMgrFP14JPABaseEmitter
/* 803AE8CC 003AB80C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AE8D0 003AB810  7F E4 FB 78 */	mr r4, r31
/* 803AE8D4 003AB814  48 00 D4 11 */	bl cullByResFlg__11ParticleMgrFP14JPABaseEmitter
/* 803AE8D8 003AB818  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AE8DC 003AB81C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AE8E0 003AB820  7C 08 03 A6 */	mtlr r0
/* 803AE8E4 003AB824  38 21 00 10 */	addi r1, r1, 0x10
/* 803AE8E8 003AB828  4E 80 00 20 */	blr 
.endfn executeAfter__Q23efx24TCallBack_StaticClippingFP14JPABaseEmitter

.fn add__Q23efx11TOneEmitterFPQ23efx7Context, global
/* 803AE8EC 003AB82C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AE8F0 003AB830  7C 08 02 A6 */	mflr r0
/* 803AE8F4 003AB834  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AE8F8 003AB838  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AE8FC 003AB83C  7C 9F 23 78 */	mr r31, r4
/* 803AE900 003AB840  93 C1 00 08 */	stw r30, 8(r1)
/* 803AE904 003AB844  7C 7E 1B 78 */	mr r30, r3
/* 803AE908 003AB848  7F E3 FB 78 */	mr r3, r31
/* 803AE90C 003AB84C  48 06 2C C5 */	bl del__5CNodeFv
/* 803AE910 003AB850  7F E4 FB 78 */	mr r4, r31
/* 803AE914 003AB854  38 7E 00 10 */	addi r3, r30, 0x10
/* 803AE918 003AB858  48 06 2A F1 */	bl add__5CNodeFP5CNode
/* 803AE91C 003AB85C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AE920 003AB860  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AE924 003AB864  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AE928 003AB868  7C 08 03 A6 */	mtlr r0
/* 803AE92C 003AB86C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AE930 003AB870  4E 80 00 20 */	blr 
.endfn add__Q23efx11TOneEmitterFPQ23efx7Context

.fn executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter, global
/* 803AE934 003AB874  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803AE938 003AB878  7C 08 02 A6 */	mflr r0
/* 803AE93C 003AB87C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803AE940 003AB880  BF 61 00 1C */	stmw r27, 0x1c(r1)
/* 803AE944 003AB884  7C 7B 1B 78 */	mr r27, r3
/* 803AE948 003AB888  7C 9C 23 78 */	mr r28, r4
/* 803AE94C 003AB88C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AE950 003AB890  48 00 D0 89 */	bl setGlobalColor__11ParticleMgrFP14JPABaseEmitter
/* 803AE954 003AB894  83 DB 00 20 */	lwz r30, 0x20(r27)
/* 803AE958 003AB898  48 00 00 80 */	b .L_803AE9D8
.L_803AE95C:
/* 803AE95C 003AB89C  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803AE960 003AB8A0  38 81 00 08 */	addi r4, r1, 8
/* 803AE964 003AB8A4  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AE968 003AB8A8  D0 01 00 08 */	stfs f0, 8(r1)
/* 803AE96C 003AB8AC  C0 1E 00 1C */	lfs f0, 0x1c(r30)
/* 803AE970 003AB8B0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AE974 003AB8B4  C0 1E 00 20 */	lfs f0, 0x20(r30)
/* 803AE978 003AB8B8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AE97C 003AB8BC  A0 BB 00 0C */	lhz r5, 0xc(r27)
/* 803AE980 003AB8C0  48 00 D2 51 */	bl "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"
/* 803AE984 003AB8C4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AE988 003AB8C8  40 82 00 4C */	bne .L_803AE9D4
/* 803AE98C 003AB8CC  7F 83 E3 78 */	mr r3, r28
/* 803AE990 003AB8D0  4B CE 1B 99 */	bl getCurrentCreateNumber__14JPABaseEmitterCFv
/* 803AE994 003AB8D4  7C 7F 1B 78 */	mr r31, r3
/* 803AE998 003AB8D8  3B A0 00 00 */	li r29, 0
/* 803AE99C 003AB8DC  48 00 00 30 */	b .L_803AE9CC
.L_803AE9A0:
/* 803AE9A0 003AB8E0  7F 83 E3 78 */	mr r3, r28
/* 803AE9A4 003AB8E4  4B CE 16 9D */	bl createParticle__14JPABaseEmitterFv
/* 803AE9A8 003AB8E8  28 03 00 00 */	cmplwi r3, 0
/* 803AE9AC 003AB8EC  41 82 00 1C */	beq .L_803AE9C8
/* 803AE9B0 003AB8F0  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 803AE9B4 003AB8F4  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803AE9B8 003AB8F8  C0 01 00 08 */	lfs f0, 8(r1)
/* 803AE9BC 003AB8FC  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 803AE9C0 003AB900  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 803AE9C4 003AB904  D0 43 00 20 */	stfs f2, 0x20(r3)
.L_803AE9C8:
/* 803AE9C8 003AB908  3B BD 00 01 */	addi r29, r29, 1
.L_803AE9CC:
/* 803AE9CC 003AB90C  7C 1D F8 00 */	cmpw r29, r31
/* 803AE9D0 003AB910  41 80 FF D0 */	blt .L_803AE9A0
.L_803AE9D4:
/* 803AE9D4 003AB914  83 DE 00 04 */	lwz r30, 4(r30)
.L_803AE9D8:
/* 803AE9D8 003AB918  28 1E 00 00 */	cmplwi r30, 0
/* 803AE9DC 003AB91C  40 82 FF 80 */	bne .L_803AE95C
/* 803AE9E0 003AB920  BB 61 00 1C */	lmw r27, 0x1c(r1)
/* 803AE9E4 003AB924  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803AE9E8 003AB928  7C 08 03 A6 */	mtlr r0
/* 803AE9EC 003AB92C  38 21 00 30 */	addi r1, r1, 0x30
/* 803AE9F0 003AB930  4E 80 00 20 */	blr 
.endfn executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter

.fn create__Q23efx11TOneEmitterFPQ23efx3Arg, global
/* 803AE9F4 003AB934  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AE9F8 003AB938  7C 08 02 A6 */	mflr r0
/* 803AE9FC 003AB93C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEA00 003AB940  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AEA04 003AB944  7C 7F 1B 78 */	mr r31, r3
/* 803AEA08 003AB948  80 03 00 08 */	lwz r0, 8(r3)
/* 803AEA0C 003AB94C  28 00 00 00 */	cmplwi r0, 0
/* 803AEA10 003AB950  41 82 00 0C */	beq .L_803AEA1C
/* 803AEA14 003AB954  38 60 00 00 */	li r3, 0
/* 803AEA18 003AB958  48 00 00 70 */	b .L_803AEA88
.L_803AEA1C:
/* 803AEA1C 003AB95C  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803AEA20 003AB960  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEA24 003AB964  38 A4 41 E4 */	addi r5, r4, "zero__10Vector3<f>"@l
/* 803AEA28 003AB968  A0 9F 00 0C */	lhz r4, 0xc(r31)
/* 803AEA2C 003AB96C  38 C0 00 00 */	li r6, 0
/* 803AEA30 003AB970  48 00 CE 85 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AEA34 003AB974  90 7F 00 08 */	stw r3, 8(r31)
/* 803AEA38 003AB978  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AEA3C 003AB97C  28 03 00 00 */	cmplwi r3, 0
/* 803AEA40 003AB980  41 82 00 38 */	beq .L_803AEA78
/* 803AEA44 003AB984  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 803AEA48 003AB988  28 1F 00 00 */	cmplwi r31, 0
/* 803AEA4C 003AB98C  7F E4 FB 78 */	mr r4, r31
/* 803AEA50 003AB990  60 00 00 40 */	ori r0, r0, 0x40
/* 803AEA54 003AB994  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 803AEA58 003AB998  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AEA5C 003AB99C  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 803AEA60 003AB9A0  60 00 00 01 */	ori r0, r0, 1
/* 803AEA64 003AB9A4  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 803AEA68 003AB9A8  41 82 00 08 */	beq .L_803AEA70
/* 803AEA6C 003AB9AC  38 9F 00 04 */	addi r4, r31, 4
.L_803AEA70:
/* 803AEA70 003AB9B0  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AEA74 003AB9B4  90 83 00 EC */	stw r4, 0xec(r3)
.L_803AEA78:
/* 803AEA78 003AB9B8  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AEA7C 003AB9BC  7C 03 00 D0 */	neg r0, r3
/* 803AEA80 003AB9C0  7C 00 1B 78 */	or r0, r0, r3
/* 803AEA84 003AB9C4  54 03 0F FE */	srwi r3, r0, 0x1f
.L_803AEA88:
/* 803AEA88 003AB9C8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEA8C 003AB9CC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AEA90 003AB9D0  7C 08 03 A6 */	mtlr r0
/* 803AEA94 003AB9D4  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEA98 003AB9D8  4E 80 00 20 */	blr 
.endfn create__Q23efx11TOneEmitterFPQ23efx3Arg

.fn fade__Q23efx11TOneEmitterFv, global
/* 803AEA9C 003AB9DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AEAA0 003AB9E0  7C 08 02 A6 */	mflr r0
/* 803AEAA4 003AB9E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEAA8 003AB9E8  38 00 00 00 */	li r0, 0
/* 803AEAAC 003AB9EC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AEAB0 003AB9F0  7C 7F 1B 78 */	mr r31, r3
/* 803AEAB4 003AB9F4  90 03 00 20 */	stw r0, 0x20(r3)
/* 803AEAB8 003AB9F8  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803AEABC 003AB9FC  90 03 00 18 */	stw r0, 0x18(r3)
/* 803AEAC0 003ABA00  90 03 00 14 */	stw r0, 0x14(r3)
/* 803AEAC4 003ABA04  80 83 00 08 */	lwz r4, 8(r3)
/* 803AEAC8 003ABA08  28 04 00 00 */	cmplwi r4, 0
/* 803AEACC 003ABA0C  41 82 00 14 */	beq .L_803AEAE0
/* 803AEAD0 003ABA10  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEAD4 003ABA14  48 00 CF D9 */	bl fade__11ParticleMgrFP14JPABaseEmitter
/* 803AEAD8 003ABA18  38 00 00 00 */	li r0, 0
/* 803AEADC 003ABA1C  90 1F 00 08 */	stw r0, 8(r31)
.L_803AEAE0:
/* 803AEAE0 003ABA20  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEAE4 003ABA24  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AEAE8 003ABA28  7C 08 03 A6 */	mtlr r0
/* 803AEAEC 003ABA2C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEAF0 003ABA30  4E 80 00 20 */	blr 
.endfn fade__Q23efx11TOneEmitterFv

.fn forceKill__Q23efx11TOneEmitterFv, global
/* 803AEAF4 003ABA34  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AEAF8 003ABA38  7C 08 02 A6 */	mflr r0
/* 803AEAFC 003ABA3C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEB00 003ABA40  38 00 00 00 */	li r0, 0
/* 803AEB04 003ABA44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AEB08 003ABA48  7C 7F 1B 78 */	mr r31, r3
/* 803AEB0C 003ABA4C  90 03 00 20 */	stw r0, 0x20(r3)
/* 803AEB10 003ABA50  90 03 00 1C */	stw r0, 0x1c(r3)
/* 803AEB14 003ABA54  90 03 00 18 */	stw r0, 0x18(r3)
/* 803AEB18 003ABA58  90 03 00 14 */	stw r0, 0x14(r3)
/* 803AEB1C 003ABA5C  80 83 00 08 */	lwz r4, 8(r3)
/* 803AEB20 003ABA60  28 04 00 00 */	cmplwi r4, 0
/* 803AEB24 003ABA64  41 82 00 14 */	beq .L_803AEB38
/* 803AEB28 003ABA68  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEB2C 003ABA6C  48 00 CF 55 */	bl forceKill__11ParticleMgrFP14JPABaseEmitter
/* 803AEB30 003ABA70  38 00 00 00 */	li r0, 0
/* 803AEB34 003ABA74  90 1F 00 08 */	stw r0, 8(r31)
.L_803AEB38:
/* 803AEB38 003ABA78  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEB3C 003ABA7C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AEB40 003ABA80  7C 08 03 A6 */	mtlr r0
/* 803AEB44 003ABA84  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEB48 003ABA88  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx11TOneEmitterFv

.fn add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos, global
/* 803AEB4C 003ABA8C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AEB50 003ABA90  7C 08 02 A6 */	mflr r0
/* 803AEB54 003ABA94  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEB58 003ABA98  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AEB5C 003ABA9C  7C 9F 23 78 */	mr r31, r4
/* 803AEB60 003ABAA0  93 C1 00 08 */	stw r30, 8(r1)
/* 803AEB64 003ABAA4  7C 7E 1B 78 */	mr r30, r3
/* 803AEB68 003ABAA8  7F E3 FB 78 */	mr r3, r31
/* 803AEB6C 003ABAAC  48 06 2A 65 */	bl del__5CNodeFv
/* 803AEB70 003ABAB0  7F E4 FB 78 */	mr r4, r31
/* 803AEB74 003ABAB4  38 7E 00 08 */	addi r3, r30, 8
/* 803AEB78 003ABAB8  48 06 28 91 */	bl add__5CNodeFP5CNode
/* 803AEB7C 003ABABC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEB80 003ABAC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AEB84 003ABAC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AEB88 003ABAC8  7C 08 03 A6 */	mtlr r0
/* 803AEB8C 003ABACC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEB90 003ABAD0  4E 80 00 20 */	blr 
.endfn add__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos

.fn del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos, global
/* 803AEB94 003ABAD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AEB98 003ABAD8  7C 08 02 A6 */	mflr r0
/* 803AEB9C 003ABADC  7C 83 23 78 */	mr r3, r4
/* 803AEBA0 003ABAE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEBA4 003ABAE4  48 06 2A 2D */	bl del__5CNodeFv
/* 803AEBA8 003ABAE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEBAC 003ABAEC  7C 08 03 A6 */	mtlr r0
/* 803AEBB0 003ABAF0  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEBB4 003ABAF4  4E 80 00 20 */	blr 
.endfn del__Q23efx19TOneEmitterChasePosFPQ23efx15ContextChasePos

.fn create__Q23efx19TOneEmitterChasePosFPQ23efx3Arg, global
/* 803AEBB8 003ABAF8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AEBBC 003ABAFC  7C 08 02 A6 */	mflr r0
/* 803AEBC0 003ABB00  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEBC4 003ABB04  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AEBC8 003ABB08  7C 7F 1B 78 */	mr r31, r3
/* 803AEBCC 003ABB0C  80 03 00 24 */	lwz r0, 0x24(r3)
/* 803AEBD0 003ABB10  28 00 00 00 */	cmplwi r0, 0
/* 803AEBD4 003ABB14  41 82 00 0C */	beq .L_803AEBE0
/* 803AEBD8 003ABB18  38 60 00 00 */	li r3, 0
/* 803AEBDC 003ABB1C  48 00 00 70 */	b .L_803AEC4C
.L_803AEBE0:
/* 803AEBE0 003ABB20  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803AEBE4 003ABB24  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEBE8 003ABB28  38 A4 41 E4 */	addi r5, r4, "zero__10Vector3<f>"@l
/* 803AEBEC 003ABB2C  A0 9F 00 28 */	lhz r4, 0x28(r31)
/* 803AEBF0 003ABB30  38 C0 00 00 */	li r6, 0
/* 803AEBF4 003ABB34  48 00 CC C1 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AEBF8 003ABB38  90 7F 00 24 */	stw r3, 0x24(r31)
/* 803AEBFC 003ABB3C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 803AEC00 003ABB40  28 03 00 00 */	cmplwi r3, 0
/* 803AEC04 003ABB44  41 82 00 38 */	beq .L_803AEC3C
/* 803AEC08 003ABB48  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 803AEC0C 003ABB4C  28 1F 00 00 */	cmplwi r31, 0
/* 803AEC10 003ABB50  7F E4 FB 78 */	mr r4, r31
/* 803AEC14 003ABB54  60 00 00 40 */	ori r0, r0, 0x40
/* 803AEC18 003ABB58  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 803AEC1C 003ABB5C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 803AEC20 003ABB60  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 803AEC24 003ABB64  60 00 00 01 */	ori r0, r0, 1
/* 803AEC28 003ABB68  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 803AEC2C 003ABB6C  41 82 00 08 */	beq .L_803AEC34
/* 803AEC30 003ABB70  38 9F 00 04 */	addi r4, r31, 4
.L_803AEC34:
/* 803AEC34 003ABB74  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 803AEC38 003ABB78  90 83 00 EC */	stw r4, 0xec(r3)
.L_803AEC3C:
/* 803AEC3C 003ABB7C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 803AEC40 003ABB80  7C 03 00 D0 */	neg r0, r3
/* 803AEC44 003ABB84  7C 00 1B 78 */	or r0, r0, r3
/* 803AEC48 003ABB88  54 03 0F FE */	srwi r3, r0, 0x1f
.L_803AEC4C:
/* 803AEC4C 003ABB8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEC50 003ABB90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AEC54 003ABB94  7C 08 03 A6 */	mtlr r0
/* 803AEC58 003ABB98  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEC5C 003ABB9C  4E 80 00 20 */	blr 
.endfn create__Q23efx19TOneEmitterChasePosFPQ23efx3Arg

.fn executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter, global
/* 803AEC60 003ABBA0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AEC64 003ABBA4  7C 08 02 A6 */	mflr r0
/* 803AEC68 003ABBA8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AEC6C 003ABBAC  BF 41 00 08 */	stmw r26, 8(r1)
/* 803AEC70 003ABBB0  7C 7A 1B 78 */	mr r26, r3
/* 803AEC74 003ABBB4  7C 9B 23 78 */	mr r27, r4
/* 803AEC78 003ABBB8  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEC7C 003ABBBC  48 00 CD 5D */	bl setGlobalColor__11ParticleMgrFP14JPABaseEmitter
/* 803AEC80 003ABBC0  83 DA 00 18 */	lwz r30, 0x18(r26)
/* 803AEC84 003ABBC4  48 00 00 6C */	b .L_803AECF0
.L_803AEC88:
/* 803AEC88 003ABBC8  83 BE 00 18 */	lwz r29, 0x18(r30)
/* 803AEC8C 003ABBCC  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEC90 003ABBD0  A0 BA 00 28 */	lhz r5, 0x28(r26)
/* 803AEC94 003ABBD4  7F A4 EB 78 */	mr r4, r29
/* 803AEC98 003ABBD8  48 00 CF 39 */	bl "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"
/* 803AEC9C 003ABBDC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AECA0 003ABBE0  40 82 00 4C */	bne .L_803AECEC
/* 803AECA4 003ABBE4  7F 63 DB 78 */	mr r3, r27
/* 803AECA8 003ABBE8  4B CE 18 81 */	bl getCurrentCreateNumber__14JPABaseEmitterCFv
/* 803AECAC 003ABBEC  7C 7F 1B 78 */	mr r31, r3
/* 803AECB0 003ABBF0  3B 80 00 00 */	li r28, 0
/* 803AECB4 003ABBF4  48 00 00 30 */	b .L_803AECE4
.L_803AECB8:
/* 803AECB8 003ABBF8  7F 63 DB 78 */	mr r3, r27
/* 803AECBC 003ABBFC  4B CE 13 85 */	bl createParticle__14JPABaseEmitterFv
/* 803AECC0 003ABC00  28 03 00 00 */	cmplwi r3, 0
/* 803AECC4 003ABC04  41 82 00 1C */	beq .L_803AECE0
/* 803AECC8 003ABC08  C0 5D 00 08 */	lfs f2, 8(r29)
/* 803AECCC 003ABC0C  C0 3D 00 04 */	lfs f1, 4(r29)
/* 803AECD0 003ABC10  C0 1D 00 00 */	lfs f0, 0(r29)
/* 803AECD4 003ABC14  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 803AECD8 003ABC18  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 803AECDC 003ABC1C  D0 43 00 20 */	stfs f2, 0x20(r3)
.L_803AECE0:
/* 803AECE0 003ABC20  3B 9C 00 01 */	addi r28, r28, 1
.L_803AECE4:
/* 803AECE4 003ABC24  7C 1C F8 00 */	cmpw r28, r31
/* 803AECE8 003ABC28  41 80 FF D0 */	blt .L_803AECB8
.L_803AECEC:
/* 803AECEC 003ABC2C  83 DE 00 04 */	lwz r30, 4(r30)
.L_803AECF0:
/* 803AECF0 003ABC30  28 1E 00 00 */	cmplwi r30, 0
/* 803AECF4 003ABC34  40 82 FF 94 */	bne .L_803AEC88
/* 803AECF8 003ABC38  BB 41 00 08 */	lmw r26, 8(r1)
/* 803AECFC 003ABC3C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AED00 003ABC40  7C 08 03 A6 */	mtlr r0
/* 803AED04 003ABC44  38 21 00 20 */	addi r1, r1, 0x20
/* 803AED08 003ABC48  4E 80 00 20 */	blr 
.endfn executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter

.fn fade__Q23efx19TOneEmitterChasePosFv, global
/* 803AED0C 003ABC4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AED10 003ABC50  7C 08 02 A6 */	mflr r0
/* 803AED14 003ABC54  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AED18 003ABC58  38 00 00 00 */	li r0, 0
/* 803AED1C 003ABC5C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AED20 003ABC60  7C 7F 1B 78 */	mr r31, r3
/* 803AED24 003ABC64  90 03 00 18 */	stw r0, 0x18(r3)
/* 803AED28 003ABC68  90 03 00 14 */	stw r0, 0x14(r3)
/* 803AED2C 003ABC6C  90 03 00 10 */	stw r0, 0x10(r3)
/* 803AED30 003ABC70  90 03 00 0C */	stw r0, 0xc(r3)
/* 803AED34 003ABC74  80 83 00 24 */	lwz r4, 0x24(r3)
/* 803AED38 003ABC78  28 04 00 00 */	cmplwi r4, 0
/* 803AED3C 003ABC7C  41 82 00 14 */	beq .L_803AED50
/* 803AED40 003ABC80  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AED44 003ABC84  48 00 CD 69 */	bl fade__11ParticleMgrFP14JPABaseEmitter
/* 803AED48 003ABC88  38 00 00 00 */	li r0, 0
/* 803AED4C 003ABC8C  90 1F 00 24 */	stw r0, 0x24(r31)
.L_803AED50:
/* 803AED50 003ABC90  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AED54 003ABC94  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AED58 003ABC98  7C 08 03 A6 */	mtlr r0
/* 803AED5C 003ABC9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AED60 003ABCA0  4E 80 00 20 */	blr 
.endfn fade__Q23efx19TOneEmitterChasePosFv

.fn forceKill__Q23efx19TOneEmitterChasePosFv, global
/* 803AED64 003ABCA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AED68 003ABCA8  7C 08 02 A6 */	mflr r0
/* 803AED6C 003ABCAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AED70 003ABCB0  38 00 00 00 */	li r0, 0
/* 803AED74 003ABCB4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AED78 003ABCB8  7C 7F 1B 78 */	mr r31, r3
/* 803AED7C 003ABCBC  90 03 00 18 */	stw r0, 0x18(r3)
/* 803AED80 003ABCC0  90 03 00 14 */	stw r0, 0x14(r3)
/* 803AED84 003ABCC4  90 03 00 10 */	stw r0, 0x10(r3)
/* 803AED88 003ABCC8  90 03 00 0C */	stw r0, 0xc(r3)
/* 803AED8C 003ABCCC  80 83 00 24 */	lwz r4, 0x24(r3)
/* 803AED90 003ABCD0  28 04 00 00 */	cmplwi r4, 0
/* 803AED94 003ABCD4  41 82 00 14 */	beq .L_803AEDA8
/* 803AED98 003ABCD8  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AED9C 003ABCDC  48 00 CC E5 */	bl forceKill__11ParticleMgrFP14JPABaseEmitter
/* 803AEDA0 003ABCE0  38 00 00 00 */	li r0, 0
/* 803AEDA4 003ABCE4  90 1F 00 24 */	stw r0, 0x24(r31)
.L_803AEDA8:
/* 803AEDA8 003ABCE8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEDAC 003ABCEC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AEDB0 003ABCF0  7C 08 03 A6 */	mtlr r0
/* 803AEDB4 003ABCF4  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEDB8 003ABCF8  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx19TOneEmitterChasePosFv

.fn create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg, global
/* 803AEDBC 003ABCFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AEDC0 003ABD00  7C 08 02 A6 */	mflr r0
/* 803AEDC4 003ABD04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEDC8 003ABD08  38 00 00 00 */	li r0, 0
/* 803AEDCC 003ABD0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AEDD0 003ABD10  7C 7F 1B 78 */	mr r31, r3
/* 803AEDD4 003ABD14  90 03 00 14 */	stw r0, 0x14(r3)
/* 803AEDD8 003ABD18  80 03 00 08 */	lwz r0, 8(r3)
/* 803AEDDC 003ABD1C  28 00 00 00 */	cmplwi r0, 0
/* 803AEDE0 003ABD20  41 82 00 0C */	beq .L_803AEDEC
/* 803AEDE4 003ABD24  38 60 00 00 */	li r3, 0
/* 803AEDE8 003ABD28  48 00 00 7C */	b .L_803AEE64
.L_803AEDEC:
/* 803AEDEC 003ABD2C  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803AEDF0 003ABD30  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEDF4 003ABD34  38 A4 41 E4 */	addi r5, r4, "zero__10Vector3<f>"@l
/* 803AEDF8 003ABD38  A0 9F 00 0C */	lhz r4, 0xc(r31)
/* 803AEDFC 003ABD3C  38 C0 00 00 */	li r6, 0
/* 803AEE00 003ABD40  48 00 CA B5 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AEE04 003ABD44  90 7F 00 08 */	stw r3, 8(r31)
/* 803AEE08 003ABD48  80 9F 00 08 */	lwz r4, 8(r31)
/* 803AEE0C 003ABD4C  28 04 00 00 */	cmplwi r4, 0
/* 803AEE10 003ABD50  41 82 00 44 */	beq .L_803AEE54
/* 803AEE14 003ABD54  80 64 00 F4 */	lwz r3, 0xf4(r4)
/* 803AEE18 003ABD58  28 1F 00 00 */	cmplwi r31, 0
/* 803AEE1C 003ABD5C  38 00 00 00 */	li r0, 0
/* 803AEE20 003ABD60  7F E5 FB 78 */	mr r5, r31
/* 803AEE24 003ABD64  60 63 00 40 */	ori r3, r3, 0x40
/* 803AEE28 003ABD68  90 64 00 F4 */	stw r3, 0xf4(r4)
/* 803AEE2C 003ABD6C  80 9F 00 08 */	lwz r4, 8(r31)
/* 803AEE30 003ABD70  80 64 00 F4 */	lwz r3, 0xf4(r4)
/* 803AEE34 003ABD74  60 63 00 01 */	ori r3, r3, 1
/* 803AEE38 003ABD78  90 64 00 F4 */	stw r3, 0xf4(r4)
/* 803AEE3C 003ABD7C  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AEE40 003ABD80  90 03 00 24 */	stw r0, 0x24(r3)
/* 803AEE44 003ABD84  41 82 00 08 */	beq .L_803AEE4C
/* 803AEE48 003ABD88  38 BF 00 04 */	addi r5, r31, 4
.L_803AEE4C:
/* 803AEE4C 003ABD8C  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AEE50 003ABD90  90 A3 00 EC */	stw r5, 0xec(r3)
.L_803AEE54:
/* 803AEE54 003ABD94  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AEE58 003ABD98  7C 03 00 D0 */	neg r0, r3
/* 803AEE5C 003ABD9C  7C 00 1B 78 */	or r0, r0, r3
/* 803AEE60 003ABDA0  54 03 0F FE */	srwi r3, r0, 0x1f
.L_803AEE64:
/* 803AEE64 003ABDA4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AEE68 003ABDA8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AEE6C 003ABDAC  7C 08 03 A6 */	mtlr r0
/* 803AEE70 003ABDB0  38 21 00 10 */	addi r1, r1, 0x10
/* 803AEE74 003ABDB4  4E 80 00 20 */	blr 
.endfn create__Q23efx17TOneEmitterSimpleFPQ23efx3Arg

.fn executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter, global
/* 803AEE78 003ABDB8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803AEE7C 003ABDBC  7C 08 02 A6 */	mflr r0
/* 803AEE80 003ABDC0  90 01 00 44 */	stw r0, 0x44(r1)
/* 803AEE84 003ABDC4  BF 41 00 28 */	stmw r26, 0x28(r1)
/* 803AEE88 003ABDC8  7C 7A 1B 78 */	mr r26, r3
/* 803AEE8C 003ABDCC  7C 9B 23 78 */	mr r27, r4
/* 803AEE90 003ABDD0  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEE94 003ABDD4  48 00 CB 45 */	bl setGlobalColor__11ParticleMgrFP14JPABaseEmitter
/* 803AEE98 003ABDD8  80 7A 00 14 */	lwz r3, 0x14(r26)
/* 803AEE9C 003ABDDC  80 1A 00 18 */	lwz r0, 0x18(r26)
/* 803AEEA0 003ABDE0  7C 03 00 00 */	cmpw r3, r0
/* 803AEEA4 003ABDE4  40 81 00 20 */	ble .L_803AEEC4
/* 803AEEA8 003ABDE8  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AEEAC 003ABDEC  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AEEB0 003ABDF0  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AEEB4 003ABDF4  38 80 01 BF */	li r4, 0x1bf
/* 803AEEB8 003ABDF8  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AEEBC 003ABDFC  4C C6 31 82 */	crclr 6
/* 803AEEC0 003ABE00  4B C7 B7 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AEEC4:
/* 803AEEC4 003ABE04  3B C0 00 00 */	li r30, 0
/* 803AEEC8 003ABE08  3B E0 00 00 */	li r31, 0
/* 803AEECC 003ABE0C  48 00 00 90 */	b .L_803AEF5C
.L_803AEED0:
/* 803AEED0 003ABE10  80 1A 00 10 */	lwz r0, 0x10(r26)
/* 803AEED4 003ABE14  38 81 00 08 */	addi r4, r1, 8
/* 803AEED8 003ABE18  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEEDC 003ABE1C  7C A0 FA 14 */	add r5, r0, r31
/* 803AEEE0 003ABE20  C0 05 00 00 */	lfs f0, 0(r5)
/* 803AEEE4 003ABE24  D0 01 00 08 */	stfs f0, 8(r1)
/* 803AEEE8 003ABE28  C0 05 00 04 */	lfs f0, 4(r5)
/* 803AEEEC 003ABE2C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AEEF0 003ABE30  C0 05 00 08 */	lfs f0, 8(r5)
/* 803AEEF4 003ABE34  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AEEF8 003ABE38  A0 BA 00 0C */	lhz r5, 0xc(r26)
/* 803AEEFC 003ABE3C  48 00 CC D5 */	bl "cullByResFlg__11ParticleMgrFR10Vector3<f>Us"
/* 803AEF00 003ABE40  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AEF04 003ABE44  40 82 00 50 */	bne .L_803AEF54
/* 803AEF08 003ABE48  C0 1B 00 28 */	lfs f0, 0x28(r27)
/* 803AEF0C 003ABE4C  3B 80 00 00 */	li r28, 0
/* 803AEF10 003ABE50  FC 00 00 1E */	fctiwz f0, f0
/* 803AEF14 003ABE54  D8 01 00 18 */	stfd f0, 0x18(r1)
/* 803AEF18 003ABE58  83 A1 00 1C */	lwz r29, 0x1c(r1)
/* 803AEF1C 003ABE5C  48 00 00 30 */	b .L_803AEF4C
.L_803AEF20:
/* 803AEF20 003ABE60  7F 63 DB 78 */	mr r3, r27
/* 803AEF24 003ABE64  4B CE 11 1D */	bl createParticle__14JPABaseEmitterFv
/* 803AEF28 003ABE68  28 03 00 00 */	cmplwi r3, 0
/* 803AEF2C 003ABE6C  41 82 00 1C */	beq .L_803AEF48
/* 803AEF30 003ABE70  C0 41 00 10 */	lfs f2, 0x10(r1)
/* 803AEF34 003ABE74  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803AEF38 003ABE78  C0 01 00 08 */	lfs f0, 8(r1)
/* 803AEF3C 003ABE7C  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 803AEF40 003ABE80  D0 23 00 1C */	stfs f1, 0x1c(r3)
/* 803AEF44 003ABE84  D0 43 00 20 */	stfs f2, 0x20(r3)
.L_803AEF48:
/* 803AEF48 003ABE88  3B 9C 00 01 */	addi r28, r28, 1
.L_803AEF4C:
/* 803AEF4C 003ABE8C  7C 1C E8 00 */	cmpw r28, r29
/* 803AEF50 003ABE90  41 80 FF D0 */	blt .L_803AEF20
.L_803AEF54:
/* 803AEF54 003ABE94  3B FF 00 0C */	addi r31, r31, 0xc
/* 803AEF58 003ABE98  3B DE 00 01 */	addi r30, r30, 1
.L_803AEF5C:
/* 803AEF5C 003ABE9C  80 1A 00 14 */	lwz r0, 0x14(r26)
/* 803AEF60 003ABEA0  7C 1E 00 00 */	cmpw r30, r0
/* 803AEF64 003ABEA4  41 80 FF 6C */	blt .L_803AEED0
/* 803AEF68 003ABEA8  38 00 00 00 */	li r0, 0
/* 803AEF6C 003ABEAC  90 1A 00 14 */	stw r0, 0x14(r26)
/* 803AEF70 003ABEB0  BB 41 00 28 */	lmw r26, 0x28(r1)
/* 803AEF74 003ABEB4  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803AEF78 003ABEB8  7C 08 03 A6 */	mtlr r0
/* 803AEF7C 003ABEBC  38 21 00 40 */	addi r1, r1, 0x40
/* 803AEF80 003ABEC0  4E 80 00 20 */	blr 
.endfn executeAfter__Q23efx17TOneEmitterSimpleFP14JPABaseEmitter

.fn create__Q23efx8TSimple1FPQ23efx3Arg, global
/* 803AEF84 003ABEC4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AEF88 003ABEC8  7C 08 02 A6 */	mflr r0
/* 803AEF8C 003ABECC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AEF90 003ABED0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AEF94 003ABED4  7C 9F 23 79 */	or. r31, r4, r4
/* 803AEF98 003ABED8  93 C1 00 08 */	stw r30, 8(r1)
/* 803AEF9C 003ABEDC  7C 7E 1B 78 */	mr r30, r3
/* 803AEFA0 003ABEE0  40 82 00 20 */	bne .L_803AEFC0
/* 803AEFA4 003ABEE4  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AEFA8 003ABEE8  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AEFAC 003ABEEC  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AEFB0 003ABEF0  38 80 02 2E */	li r4, 0x22e
/* 803AEFB4 003ABEF4  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AEFB8 003ABEF8  4C C6 31 82 */	crclr 6
/* 803AEFBC 003ABEFC  4B C7 B6 85 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AEFC0:
/* 803AEFC0 003ABF00  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AEFC4 003ABF04  38 BF 00 04 */	addi r5, r31, 4
/* 803AEFC8 003ABF08  A0 9E 00 04 */	lhz r4, 4(r30)
/* 803AEFCC 003ABF0C  3B ED 99 F8 */	addi r31, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803AEFD0 003ABF10  38 C0 00 00 */	li r6, 0
/* 803AEFD4 003ABF14  48 00 C8 E1 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AEFD8 003ABF18  90 7E 00 08 */	stw r3, 8(r30)
/* 803AEFDC 003ABF1C  80 7E 00 08 */	lwz r3, 8(r30)
/* 803AEFE0 003ABF20  28 03 00 00 */	cmplwi r3, 0
/* 803AEFE4 003ABF24  41 82 00 0C */	beq .L_803AEFF0
/* 803AEFE8 003ABF28  93 E3 00 EC */	stw r31, 0xec(r3)
/* 803AEFEC 003ABF2C  48 00 00 0C */	b .L_803AEFF8
.L_803AEFF0:
/* 803AEFF0 003ABF30  38 60 00 00 */	li r3, 0
/* 803AEFF4 003ABF34  48 00 00 08 */	b .L_803AEFFC
.L_803AEFF8:
/* 803AEFF8 003ABF38  38 60 00 01 */	li r3, 1
.L_803AEFFC:
/* 803AEFFC 003ABF3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AF000 003ABF40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AF004 003ABF44  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AF008 003ABF48  7C 08 03 A6 */	mtlr r0
/* 803AF00C 003ABF4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AF010 003ABF50  4E 80 00 20 */	blr 
.endfn create__Q23efx8TSimple1FPQ23efx3Arg

.fn create__Q23efx8TSimple2FPQ23efx3Arg, global
/* 803AF014 003ABF54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AF018 003ABF58  7C 08 02 A6 */	mflr r0
/* 803AF01C 003ABF5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AF020 003ABF60  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803AF024 003ABF64  7C 9B 23 79 */	or. r27, r4, r4
/* 803AF028 003ABF68  7C 7C 1B 78 */	mr r28, r3
/* 803AF02C 003ABF6C  40 82 00 20 */	bne .L_803AF04C
/* 803AF030 003ABF70  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF034 003ABF74  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF038 003ABF78  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF03C 003ABF7C  38 80 02 3E */	li r4, 0x23e
/* 803AF040 003ABF80  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF044 003ABF84  4C C6 31 82 */	crclr 6
/* 803AF048 003ABF88  4B C7 B5 F9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF04C:
/* 803AF04C 003ABF8C  7F 9E E3 78 */	mr r30, r28
/* 803AF050 003ABF90  7F 9D E3 78 */	mr r29, r28
/* 803AF054 003ABF94  3B 80 00 00 */	li r28, 0
/* 803AF058 003ABF98  3B ED 99 F8 */	addi r31, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
.L_803AF05C:
/* 803AF05C 003ABF9C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF060 003ABFA0  38 BB 00 04 */	addi r5, r27, 4
/* 803AF064 003ABFA4  A0 9E 00 04 */	lhz r4, 4(r30)
/* 803AF068 003ABFA8  38 C0 00 00 */	li r6, 0
/* 803AF06C 003ABFAC  48 00 C8 49 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF070 003ABFB0  90 7D 00 08 */	stw r3, 8(r29)
/* 803AF074 003ABFB4  80 7D 00 08 */	lwz r3, 8(r29)
/* 803AF078 003ABFB8  28 03 00 00 */	cmplwi r3, 0
/* 803AF07C 003ABFBC  41 82 00 0C */	beq .L_803AF088
/* 803AF080 003ABFC0  93 E3 00 EC */	stw r31, 0xec(r3)
/* 803AF084 003ABFC4  48 00 00 0C */	b .L_803AF090
.L_803AF088:
/* 803AF088 003ABFC8  38 60 00 00 */	li r3, 0
/* 803AF08C 003ABFCC  48 00 00 1C */	b .L_803AF0A8
.L_803AF090:
/* 803AF090 003ABFD0  3B 9C 00 01 */	addi r28, r28, 1
/* 803AF094 003ABFD4  3B BD 00 04 */	addi r29, r29, 4
/* 803AF098 003ABFD8  2C 1C 00 02 */	cmpwi r28, 2
/* 803AF09C 003ABFDC  3B DE 00 02 */	addi r30, r30, 2
/* 803AF0A0 003ABFE0  41 80 FF BC */	blt .L_803AF05C
/* 803AF0A4 003ABFE4  38 60 00 01 */	li r3, 1
.L_803AF0A8:
/* 803AF0A8 003ABFE8  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803AF0AC 003ABFEC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AF0B0 003ABFF0  7C 08 03 A6 */	mtlr r0
/* 803AF0B4 003ABFF4  38 21 00 20 */	addi r1, r1, 0x20
/* 803AF0B8 003ABFF8  4E 80 00 20 */	blr 
.endfn create__Q23efx8TSimple2FPQ23efx3Arg

.fn create__Q23efx8TSimple3FPQ23efx3Arg, global
/* 803AF0BC 003ABFFC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AF0C0 003AC000  7C 08 02 A6 */	mflr r0
/* 803AF0C4 003AC004  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AF0C8 003AC008  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803AF0CC 003AC00C  7C 9B 23 79 */	or. r27, r4, r4
/* 803AF0D0 003AC010  7C 7C 1B 78 */	mr r28, r3
/* 803AF0D4 003AC014  40 82 00 20 */	bne .L_803AF0F4
/* 803AF0D8 003AC018  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF0DC 003AC01C  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF0E0 003AC020  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF0E4 003AC024  38 80 02 4F */	li r4, 0x24f
/* 803AF0E8 003AC028  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF0EC 003AC02C  4C C6 31 82 */	crclr 6
/* 803AF0F0 003AC030  4B C7 B5 51 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF0F4:
/* 803AF0F4 003AC034  7F 9E E3 78 */	mr r30, r28
/* 803AF0F8 003AC038  7F 9D E3 78 */	mr r29, r28
/* 803AF0FC 003AC03C  3B 80 00 00 */	li r28, 0
/* 803AF100 003AC040  3B ED 99 F8 */	addi r31, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
.L_803AF104:
/* 803AF104 003AC044  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF108 003AC048  38 BB 00 04 */	addi r5, r27, 4
/* 803AF10C 003AC04C  A0 9E 00 04 */	lhz r4, 4(r30)
/* 803AF110 003AC050  38 C0 00 00 */	li r6, 0
/* 803AF114 003AC054  48 00 C7 A1 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF118 003AC058  90 7D 00 0C */	stw r3, 0xc(r29)
/* 803AF11C 003AC05C  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 803AF120 003AC060  28 03 00 00 */	cmplwi r3, 0
/* 803AF124 003AC064  41 82 00 0C */	beq .L_803AF130
/* 803AF128 003AC068  93 E3 00 EC */	stw r31, 0xec(r3)
/* 803AF12C 003AC06C  48 00 00 0C */	b .L_803AF138
.L_803AF130:
/* 803AF130 003AC070  38 60 00 00 */	li r3, 0
/* 803AF134 003AC074  48 00 00 1C */	b .L_803AF150
.L_803AF138:
/* 803AF138 003AC078  3B 9C 00 01 */	addi r28, r28, 1
/* 803AF13C 003AC07C  3B BD 00 04 */	addi r29, r29, 4
/* 803AF140 003AC080  2C 1C 00 03 */	cmpwi r28, 3
/* 803AF144 003AC084  3B DE 00 02 */	addi r30, r30, 2
/* 803AF148 003AC088  41 80 FF BC */	blt .L_803AF104
/* 803AF14C 003AC08C  38 60 00 01 */	li r3, 1
.L_803AF150:
/* 803AF150 003AC090  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803AF154 003AC094  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AF158 003AC098  7C 08 03 A6 */	mtlr r0
/* 803AF15C 003AC09C  38 21 00 20 */	addi r1, r1, 0x20
/* 803AF160 003AC0A0  4E 80 00 20 */	blr 
.endfn create__Q23efx8TSimple3FPQ23efx3Arg

.fn create__Q23efx8TSimple4FPQ23efx3Arg, global
/* 803AF164 003AC0A4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AF168 003AC0A8  7C 08 02 A6 */	mflr r0
/* 803AF16C 003AC0AC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AF170 003AC0B0  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803AF174 003AC0B4  7C 9B 23 79 */	or. r27, r4, r4
/* 803AF178 003AC0B8  7C 7C 1B 78 */	mr r28, r3
/* 803AF17C 003AC0BC  40 82 00 20 */	bne .L_803AF19C
/* 803AF180 003AC0C0  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF184 003AC0C4  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF188 003AC0C8  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF18C 003AC0CC  38 80 02 60 */	li r4, 0x260
/* 803AF190 003AC0D0  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF194 003AC0D4  4C C6 31 82 */	crclr 6
/* 803AF198 003AC0D8  4B C7 B4 A9 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF19C:
/* 803AF19C 003AC0DC  7F 9E E3 78 */	mr r30, r28
/* 803AF1A0 003AC0E0  7F 9D E3 78 */	mr r29, r28
/* 803AF1A4 003AC0E4  3B 80 00 00 */	li r28, 0
/* 803AF1A8 003AC0E8  3B ED 99 F8 */	addi r31, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
.L_803AF1AC:
/* 803AF1AC 003AC0EC  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF1B0 003AC0F0  38 BB 00 04 */	addi r5, r27, 4
/* 803AF1B4 003AC0F4  A0 9E 00 04 */	lhz r4, 4(r30)
/* 803AF1B8 003AC0F8  38 C0 00 00 */	li r6, 0
/* 803AF1BC 003AC0FC  48 00 C6 F9 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF1C0 003AC100  90 7D 00 0C */	stw r3, 0xc(r29)
/* 803AF1C4 003AC104  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 803AF1C8 003AC108  28 03 00 00 */	cmplwi r3, 0
/* 803AF1CC 003AC10C  41 82 00 0C */	beq .L_803AF1D8
/* 803AF1D0 003AC110  93 E3 00 EC */	stw r31, 0xec(r3)
/* 803AF1D4 003AC114  48 00 00 0C */	b .L_803AF1E0
.L_803AF1D8:
/* 803AF1D8 003AC118  38 60 00 00 */	li r3, 0
/* 803AF1DC 003AC11C  48 00 00 1C */	b .L_803AF1F8
.L_803AF1E0:
/* 803AF1E0 003AC120  3B 9C 00 01 */	addi r28, r28, 1
/* 803AF1E4 003AC124  3B BD 00 04 */	addi r29, r29, 4
/* 803AF1E8 003AC128  2C 1C 00 04 */	cmpwi r28, 4
/* 803AF1EC 003AC12C  3B DE 00 02 */	addi r30, r30, 2
/* 803AF1F0 003AC130  41 80 FF BC */	blt .L_803AF1AC
/* 803AF1F4 003AC134  38 60 00 01 */	li r3, 1
.L_803AF1F8:
/* 803AF1F8 003AC138  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803AF1FC 003AC13C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AF200 003AC140  7C 08 03 A6 */	mtlr r0
/* 803AF204 003AC144  38 21 00 20 */	addi r1, r1, 0x20
/* 803AF208 003AC148  4E 80 00 20 */	blr 
.endfn create__Q23efx8TSimple4FPQ23efx3Arg

.fn create__Q23efx8TSimple5FPQ23efx3Arg, global
/* 803AF20C 003AC14C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AF210 003AC150  7C 08 02 A6 */	mflr r0
/* 803AF214 003AC154  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AF218 003AC158  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803AF21C 003AC15C  7C 9B 23 79 */	or. r27, r4, r4
/* 803AF220 003AC160  7C 7C 1B 78 */	mr r28, r3
/* 803AF224 003AC164  40 82 00 20 */	bne .L_803AF244
/* 803AF228 003AC168  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF22C 003AC16C  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF230 003AC170  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF234 003AC174  38 80 02 71 */	li r4, 0x271
/* 803AF238 003AC178  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF23C 003AC17C  4C C6 31 82 */	crclr 6
/* 803AF240 003AC180  4B C7 B4 01 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF244:
/* 803AF244 003AC184  7F 9E E3 78 */	mr r30, r28
/* 803AF248 003AC188  7F 9D E3 78 */	mr r29, r28
/* 803AF24C 003AC18C  3B 80 00 00 */	li r28, 0
/* 803AF250 003AC190  3B ED 99 F8 */	addi r31, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
.L_803AF254:
/* 803AF254 003AC194  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF258 003AC198  38 BB 00 04 */	addi r5, r27, 4
/* 803AF25C 003AC19C  A0 9E 00 04 */	lhz r4, 4(r30)
/* 803AF260 003AC1A0  38 C0 00 00 */	li r6, 0
/* 803AF264 003AC1A4  48 00 C6 51 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF268 003AC1A8  90 7D 00 10 */	stw r3, 0x10(r29)
/* 803AF26C 003AC1AC  80 7D 00 10 */	lwz r3, 0x10(r29)
/* 803AF270 003AC1B0  28 03 00 00 */	cmplwi r3, 0
/* 803AF274 003AC1B4  41 82 00 0C */	beq .L_803AF280
/* 803AF278 003AC1B8  93 E3 00 EC */	stw r31, 0xec(r3)
/* 803AF27C 003AC1BC  48 00 00 0C */	b .L_803AF288
.L_803AF280:
/* 803AF280 003AC1C0  38 60 00 00 */	li r3, 0
/* 803AF284 003AC1C4  48 00 00 1C */	b .L_803AF2A0
.L_803AF288:
/* 803AF288 003AC1C8  3B 9C 00 01 */	addi r28, r28, 1
/* 803AF28C 003AC1CC  3B BD 00 04 */	addi r29, r29, 4
/* 803AF290 003AC1D0  2C 1C 00 05 */	cmpwi r28, 5
/* 803AF294 003AC1D4  3B DE 00 02 */	addi r30, r30, 2
/* 803AF298 003AC1D8  41 80 FF BC */	blt .L_803AF254
/* 803AF29C 003AC1DC  38 60 00 01 */	li r3, 1
.L_803AF2A0:
/* 803AF2A0 003AC1E0  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803AF2A4 003AC1E4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AF2A8 003AC1E8  7C 08 03 A6 */	mtlr r0
/* 803AF2AC 003AC1EC  38 21 00 20 */	addi r1, r1, 0x20
/* 803AF2B0 003AC1F0  4E 80 00 20 */	blr 
.endfn create__Q23efx8TSimple5FPQ23efx3Arg

.fn create__Q23efx11TSimpleMtx1FPQ23efx3Arg, global
/* 803AF2B4 003AC1F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AF2B8 003AC1F8  7C 08 02 A6 */	mflr r0
/* 803AF2BC 003AC1FC  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803AF2C0 003AC200  3C A0 80 4B */	lis r5, __vt__Q23efx3Arg@ha
/* 803AF2C4 003AC204  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AF2C8 003AC208  38 05 A7 EC */	addi r0, r5, __vt__Q23efx3Arg@l
/* 803AF2CC 003AC20C  38 A1 00 0C */	addi r5, r1, 0xc
/* 803AF2D0 003AC210  38 C0 00 00 */	li r6, 0
/* 803AF2D4 003AC214  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803AF2D8 003AC218  3B ED 99 F8 */	addi r31, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803AF2DC 003AC21C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803AF2E0 003AC220  7C 7E 1B 78 */	mr r30, r3
/* 803AF2E4 003AC224  C4 44 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r4)
/* 803AF2E8 003AC228  90 01 00 08 */	stw r0, 8(r1)
/* 803AF2EC 003AC22C  C0 24 00 04 */	lfs f1, 4(r4)
/* 803AF2F0 003AC230  C0 04 00 08 */	lfs f0, 8(r4)
/* 803AF2F4 003AC234  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803AF2F8 003AC238  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF2FC 003AC23C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803AF300 003AC240  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AF304 003AC244  A0 9E 00 04 */	lhz r4, 4(r30)
/* 803AF308 003AC248  48 00 C5 AD */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF30C 003AC24C  90 7E 00 08 */	stw r3, 8(r30)
/* 803AF310 003AC250  80 7E 00 08 */	lwz r3, 8(r30)
/* 803AF314 003AC254  28 03 00 00 */	cmplwi r3, 0
/* 803AF318 003AC258  41 82 00 0C */	beq .L_803AF324
/* 803AF31C 003AC25C  93 E3 00 EC */	stw r31, 0xec(r3)
/* 803AF320 003AC260  48 00 00 0C */	b .L_803AF32C
.L_803AF324:
/* 803AF324 003AC264  38 00 00 00 */	li r0, 0
/* 803AF328 003AC268  48 00 00 08 */	b .L_803AF330
.L_803AF32C:
/* 803AF32C 003AC26C  38 00 00 01 */	li r0, 1
.L_803AF330:
/* 803AF330 003AC270  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803AF334 003AC274  41 82 00 48 */	beq .L_803AF37C
/* 803AF338 003AC278  80 1E 00 0C */	lwz r0, 0xc(r30)
/* 803AF33C 003AC27C  28 00 00 00 */	cmplwi r0, 0
/* 803AF340 003AC280  40 82 00 20 */	bne .L_803AF360
/* 803AF344 003AC284  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF348 003AC288  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF34C 003AC28C  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF350 003AC290  38 80 02 86 */	li r4, 0x286
/* 803AF354 003AC294  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF358 003AC298  4C C6 31 82 */	crclr 6
/* 803AF35C 003AC29C  4B C7 B2 E5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF360:
/* 803AF360 003AC2A0  80 BE 00 08 */	lwz r5, 8(r30)
/* 803AF364 003AC2A4  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 803AF368 003AC2A8  38 85 00 68 */	addi r4, r5, 0x68
/* 803AF36C 003AC2AC  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803AF370 003AC2B0  4B CE 49 AD */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AF374 003AC2B4  38 60 00 01 */	li r3, 1
/* 803AF378 003AC2B8  48 00 00 08 */	b .L_803AF380
.L_803AF37C:
/* 803AF37C 003AC2BC  38 60 00 00 */	li r3, 0
.L_803AF380:
/* 803AF380 003AC2C0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AF384 003AC2C4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803AF388 003AC2C8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803AF38C 003AC2CC  7C 08 03 A6 */	mtlr r0
/* 803AF390 003AC2D0  38 21 00 20 */	addi r1, r1, 0x20
/* 803AF394 003AC2D4  4E 80 00 20 */	blr 
.endfn create__Q23efx11TSimpleMtx1FPQ23efx3Arg

.fn create__Q23efx11TSimpleMtx2FPQ23efx3Arg, global
/* 803AF398 003AC2D8  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803AF39C 003AC2DC  7C 08 02 A6 */	mflr r0
/* 803AF3A0 003AC2E0  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803AF3A4 003AC2E4  90 01 00 34 */	stw r0, 0x34(r1)
/* 803AF3A8 003AC2E8  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 803AF3AC 003AC2EC  7C 7F 1B 78 */	mr r31, r3
/* 803AF3B0 003AC2F0  38 64 41 E4 */	addi r3, r4, "zero__10Vector3<f>"@l
/* 803AF3B4 003AC2F4  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803AF3B8 003AC2F8  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803AF3BC 003AC2FC  3B 41 00 0C */	addi r26, r1, 0xc
/* 803AF3C0 003AC300  7F FC FB 78 */	mr r28, r31
/* 803AF3C4 003AC304  7F FB FB 78 */	mr r27, r31
/* 803AF3C8 003AC308  3B A0 00 00 */	li r29, 0
/* 803AF3CC 003AC30C  3B CD 99 F8 */	addi r30, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803AF3D0 003AC310  C0 43 00 00 */	lfs f2, 0(r3)
/* 803AF3D4 003AC314  C0 23 00 04 */	lfs f1, 4(r3)
/* 803AF3D8 003AC318  C0 03 00 08 */	lfs f0, 8(r3)
/* 803AF3DC 003AC31C  90 01 00 08 */	stw r0, 8(r1)
/* 803AF3E0 003AC320  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803AF3E4 003AC324  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803AF3E8 003AC328  D0 01 00 14 */	stfs f0, 0x14(r1)
.L_803AF3EC:
/* 803AF3EC 003AC32C  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF3F0 003AC330  7F 45 D3 78 */	mr r5, r26
/* 803AF3F4 003AC334  A0 9C 00 04 */	lhz r4, 4(r28)
/* 803AF3F8 003AC338  38 C0 00 00 */	li r6, 0
/* 803AF3FC 003AC33C  48 00 C4 B9 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF400 003AC340  90 7B 00 08 */	stw r3, 8(r27)
/* 803AF404 003AC344  80 7B 00 08 */	lwz r3, 8(r27)
/* 803AF408 003AC348  28 03 00 00 */	cmplwi r3, 0
/* 803AF40C 003AC34C  41 82 00 0C */	beq .L_803AF418
/* 803AF410 003AC350  93 C3 00 EC */	stw r30, 0xec(r3)
/* 803AF414 003AC354  48 00 00 0C */	b .L_803AF420
.L_803AF418:
/* 803AF418 003AC358  38 00 00 00 */	li r0, 0
/* 803AF41C 003AC35C  48 00 00 1C */	b .L_803AF438
.L_803AF420:
/* 803AF420 003AC360  3B BD 00 01 */	addi r29, r29, 1
/* 803AF424 003AC364  3B 7B 00 04 */	addi r27, r27, 4
/* 803AF428 003AC368  2C 1D 00 02 */	cmpwi r29, 2
/* 803AF42C 003AC36C  3B 9C 00 02 */	addi r28, r28, 2
/* 803AF430 003AC370  41 80 FF BC */	blt .L_803AF3EC
/* 803AF434 003AC374  38 00 00 01 */	li r0, 1
.L_803AF438:
/* 803AF438 003AC378  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803AF43C 003AC37C  41 82 00 60 */	beq .L_803AF49C
/* 803AF440 003AC380  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 803AF444 003AC384  28 00 00 00 */	cmplwi r0, 0
/* 803AF448 003AC388  40 82 00 20 */	bne .L_803AF468
/* 803AF44C 003AC38C  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF450 003AC390  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF454 003AC394  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF458 003AC398  38 80 02 94 */	li r4, 0x294
/* 803AF45C 003AC39C  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF460 003AC3A0  4C C6 31 82 */	crclr 6
/* 803AF464 003AC3A4  4B C7 B1 DD */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF468:
/* 803AF468 003AC3A8  3B 40 00 00 */	li r26, 0
/* 803AF46C 003AC3AC  7F FB FB 78 */	mr r27, r31
.L_803AF470:
/* 803AF470 003AC3B0  80 BB 00 08 */	lwz r5, 8(r27)
/* 803AF474 003AC3B4  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 803AF478 003AC3B8  38 85 00 68 */	addi r4, r5, 0x68
/* 803AF47C 003AC3BC  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803AF480 003AC3C0  4B CE 48 9D */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AF484 003AC3C4  3B 5A 00 01 */	addi r26, r26, 1
/* 803AF488 003AC3C8  3B 7B 00 04 */	addi r27, r27, 4
/* 803AF48C 003AC3CC  2C 1A 00 02 */	cmpwi r26, 2
/* 803AF490 003AC3D0  41 80 FF E0 */	blt .L_803AF470
/* 803AF494 003AC3D4  38 60 00 01 */	li r3, 1
/* 803AF498 003AC3D8  48 00 00 08 */	b .L_803AF4A0
.L_803AF49C:
/* 803AF49C 003AC3DC  38 60 00 00 */	li r3, 0
.L_803AF4A0:
/* 803AF4A0 003AC3E0  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 803AF4A4 003AC3E4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803AF4A8 003AC3E8  7C 08 03 A6 */	mtlr r0
/* 803AF4AC 003AC3EC  38 21 00 30 */	addi r1, r1, 0x30
/* 803AF4B0 003AC3F0  4E 80 00 20 */	blr 
.endfn create__Q23efx11TSimpleMtx2FPQ23efx3Arg

.fn create__Q23efx11TSimpleMtx3FPQ23efx3Arg, global
/* 803AF4B4 003AC3F4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803AF4B8 003AC3F8  7C 08 02 A6 */	mflr r0
/* 803AF4BC 003AC3FC  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803AF4C0 003AC400  90 01 00 34 */	stw r0, 0x34(r1)
/* 803AF4C4 003AC404  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 803AF4C8 003AC408  7C 7F 1B 78 */	mr r31, r3
/* 803AF4CC 003AC40C  38 64 41 E4 */	addi r3, r4, "zero__10Vector3<f>"@l
/* 803AF4D0 003AC410  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803AF4D4 003AC414  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803AF4D8 003AC418  3B 41 00 0C */	addi r26, r1, 0xc
/* 803AF4DC 003AC41C  7F FC FB 78 */	mr r28, r31
/* 803AF4E0 003AC420  7F FB FB 78 */	mr r27, r31
/* 803AF4E4 003AC424  3B A0 00 00 */	li r29, 0
/* 803AF4E8 003AC428  3B CD 99 F8 */	addi r30, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803AF4EC 003AC42C  C0 43 00 00 */	lfs f2, 0(r3)
/* 803AF4F0 003AC430  C0 23 00 04 */	lfs f1, 4(r3)
/* 803AF4F4 003AC434  C0 03 00 08 */	lfs f0, 8(r3)
/* 803AF4F8 003AC438  90 01 00 08 */	stw r0, 8(r1)
/* 803AF4FC 003AC43C  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803AF500 003AC440  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803AF504 003AC444  D0 01 00 14 */	stfs f0, 0x14(r1)
.L_803AF508:
/* 803AF508 003AC448  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF50C 003AC44C  7F 45 D3 78 */	mr r5, r26
/* 803AF510 003AC450  A0 9C 00 04 */	lhz r4, 4(r28)
/* 803AF514 003AC454  38 C0 00 00 */	li r6, 0
/* 803AF518 003AC458  48 00 C3 9D */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF51C 003AC45C  90 7B 00 0C */	stw r3, 0xc(r27)
/* 803AF520 003AC460  80 7B 00 0C */	lwz r3, 0xc(r27)
/* 803AF524 003AC464  28 03 00 00 */	cmplwi r3, 0
/* 803AF528 003AC468  41 82 00 0C */	beq .L_803AF534
/* 803AF52C 003AC46C  93 C3 00 EC */	stw r30, 0xec(r3)
/* 803AF530 003AC470  48 00 00 0C */	b .L_803AF53C
.L_803AF534:
/* 803AF534 003AC474  38 00 00 00 */	li r0, 0
/* 803AF538 003AC478  48 00 00 1C */	b .L_803AF554
.L_803AF53C:
/* 803AF53C 003AC47C  3B BD 00 01 */	addi r29, r29, 1
/* 803AF540 003AC480  3B 7B 00 04 */	addi r27, r27, 4
/* 803AF544 003AC484  2C 1D 00 03 */	cmpwi r29, 3
/* 803AF548 003AC488  3B 9C 00 02 */	addi r28, r28, 2
/* 803AF54C 003AC48C  41 80 FF BC */	blt .L_803AF508
/* 803AF550 003AC490  38 00 00 01 */	li r0, 1
.L_803AF554:
/* 803AF554 003AC494  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803AF558 003AC498  41 82 00 60 */	beq .L_803AF5B8
/* 803AF55C 003AC49C  80 1F 00 18 */	lwz r0, 0x18(r31)
/* 803AF560 003AC4A0  28 00 00 00 */	cmplwi r0, 0
/* 803AF564 003AC4A4  40 82 00 20 */	bne .L_803AF584
/* 803AF568 003AC4A8  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF56C 003AC4AC  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF570 003AC4B0  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF574 003AC4B4  38 80 02 A2 */	li r4, 0x2a2
/* 803AF578 003AC4B8  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF57C 003AC4BC  4C C6 31 82 */	crclr 6
/* 803AF580 003AC4C0  4B C7 B0 C1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF584:
/* 803AF584 003AC4C4  3B 40 00 00 */	li r26, 0
/* 803AF588 003AC4C8  7F FB FB 78 */	mr r27, r31
.L_803AF58C:
/* 803AF58C 003AC4CC  80 BB 00 0C */	lwz r5, 0xc(r27)
/* 803AF590 003AC4D0  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 803AF594 003AC4D4  38 85 00 68 */	addi r4, r5, 0x68
/* 803AF598 003AC4D8  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803AF59C 003AC4DC  4B CE 47 81 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AF5A0 003AC4E0  3B 5A 00 01 */	addi r26, r26, 1
/* 803AF5A4 003AC4E4  3B 7B 00 04 */	addi r27, r27, 4
/* 803AF5A8 003AC4E8  2C 1A 00 03 */	cmpwi r26, 3
/* 803AF5AC 003AC4EC  41 80 FF E0 */	blt .L_803AF58C
/* 803AF5B0 003AC4F0  38 60 00 01 */	li r3, 1
/* 803AF5B4 003AC4F4  48 00 00 08 */	b .L_803AF5BC
.L_803AF5B8:
/* 803AF5B8 003AC4F8  38 60 00 00 */	li r3, 0
.L_803AF5BC:
/* 803AF5BC 003AC4FC  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 803AF5C0 003AC500  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803AF5C4 003AC504  7C 08 03 A6 */	mtlr r0
/* 803AF5C8 003AC508  38 21 00 30 */	addi r1, r1, 0x30
/* 803AF5CC 003AC50C  4E 80 00 20 */	blr 
.endfn create__Q23efx11TSimpleMtx3FPQ23efx3Arg

.fn create__Q23efx11TSimpleMtx4FPQ23efx3Arg, global
/* 803AF5D0 003AC510  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803AF5D4 003AC514  7C 08 02 A6 */	mflr r0
/* 803AF5D8 003AC518  3C 80 80 51 */	lis r4, "zero__10Vector3<f>"@ha
/* 803AF5DC 003AC51C  90 01 00 34 */	stw r0, 0x34(r1)
/* 803AF5E0 003AC520  BF 41 00 18 */	stmw r26, 0x18(r1)
/* 803AF5E4 003AC524  7C 7F 1B 78 */	mr r31, r3
/* 803AF5E8 003AC528  38 64 41 E4 */	addi r3, r4, "zero__10Vector3<f>"@l
/* 803AF5EC 003AC52C  3C 80 80 4B */	lis r4, __vt__Q23efx3Arg@ha
/* 803AF5F0 003AC530  38 04 A7 EC */	addi r0, r4, __vt__Q23efx3Arg@l
/* 803AF5F4 003AC534  3B 41 00 0C */	addi r26, r1, 0xc
/* 803AF5F8 003AC538  7F FC FB 78 */	mr r28, r31
/* 803AF5FC 003AC53C  7F FB FB 78 */	mr r27, r31
/* 803AF600 003AC540  3B A0 00 00 */	li r29, 0
/* 803AF604 003AC544  3B CD 99 F8 */	addi r30, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803AF608 003AC548  C0 43 00 00 */	lfs f2, 0(r3)
/* 803AF60C 003AC54C  C0 23 00 04 */	lfs f1, 4(r3)
/* 803AF610 003AC550  C0 03 00 08 */	lfs f0, 8(r3)
/* 803AF614 003AC554  90 01 00 08 */	stw r0, 8(r1)
/* 803AF618 003AC558  D0 41 00 0C */	stfs f2, 0xc(r1)
/* 803AF61C 003AC55C  D0 21 00 10 */	stfs f1, 0x10(r1)
/* 803AF620 003AC560  D0 01 00 14 */	stfs f0, 0x14(r1)
.L_803AF624:
/* 803AF624 003AC564  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF628 003AC568  7F 45 D3 78 */	mr r5, r26
/* 803AF62C 003AC56C  A0 9C 00 04 */	lhz r4, 4(r28)
/* 803AF630 003AC570  38 C0 00 00 */	li r6, 0
/* 803AF634 003AC574  48 00 C2 81 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF638 003AC578  90 7B 00 0C */	stw r3, 0xc(r27)
/* 803AF63C 003AC57C  80 7B 00 0C */	lwz r3, 0xc(r27)
/* 803AF640 003AC580  28 03 00 00 */	cmplwi r3, 0
/* 803AF644 003AC584  41 82 00 0C */	beq .L_803AF650
/* 803AF648 003AC588  93 C3 00 EC */	stw r30, 0xec(r3)
/* 803AF64C 003AC58C  48 00 00 0C */	b .L_803AF658
.L_803AF650:
/* 803AF650 003AC590  38 00 00 00 */	li r0, 0
/* 803AF654 003AC594  48 00 00 1C */	b .L_803AF670
.L_803AF658:
/* 803AF658 003AC598  3B BD 00 01 */	addi r29, r29, 1
/* 803AF65C 003AC59C  3B 7B 00 04 */	addi r27, r27, 4
/* 803AF660 003AC5A0  2C 1D 00 04 */	cmpwi r29, 4
/* 803AF664 003AC5A4  3B 9C 00 02 */	addi r28, r28, 2
/* 803AF668 003AC5A8  41 80 FF BC */	blt .L_803AF624
/* 803AF66C 003AC5AC  38 00 00 01 */	li r0, 1
.L_803AF670:
/* 803AF670 003AC5B0  54 00 06 3F */	clrlwi. r0, r0, 0x18
/* 803AF674 003AC5B4  41 82 00 60 */	beq .L_803AF6D4
/* 803AF678 003AC5B8  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 803AF67C 003AC5BC  28 00 00 00 */	cmplwi r0, 0
/* 803AF680 003AC5C0  40 82 00 20 */	bne .L_803AF6A0
/* 803AF684 003AC5C4  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF688 003AC5C8  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF68C 003AC5CC  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF690 003AC5D0  38 80 02 B0 */	li r4, 0x2b0
/* 803AF694 003AC5D4  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF698 003AC5D8  4C C6 31 82 */	crclr 6
/* 803AF69C 003AC5DC  4B C7 AF A5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF6A0:
/* 803AF6A0 003AC5E0  3B 40 00 00 */	li r26, 0
/* 803AF6A4 003AC5E4  7F FB FB 78 */	mr r27, r31
.L_803AF6A8:
/* 803AF6A8 003AC5E8  80 BB 00 0C */	lwz r5, 0xc(r27)
/* 803AF6AC 003AC5EC  80 7F 00 1C */	lwz r3, 0x1c(r31)
/* 803AF6B0 003AC5F0  38 85 00 68 */	addi r4, r5, 0x68
/* 803AF6B4 003AC5F4  38 A5 00 A4 */	addi r5, r5, 0xa4
/* 803AF6B8 003AC5F8  4B CE 46 65 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AF6BC 003AC5FC  3B 5A 00 01 */	addi r26, r26, 1
/* 803AF6C0 003AC600  3B 7B 00 04 */	addi r27, r27, 4
/* 803AF6C4 003AC604  2C 1A 00 04 */	cmpwi r26, 4
/* 803AF6C8 003AC608  41 80 FF E0 */	blt .L_803AF6A8
/* 803AF6CC 003AC60C  38 60 00 01 */	li r3, 1
/* 803AF6D0 003AC610  48 00 00 08 */	b .L_803AF6D8
.L_803AF6D4:
/* 803AF6D4 003AC614  38 60 00 00 */	li r3, 0
.L_803AF6D8:
/* 803AF6D8 003AC618  BB 41 00 18 */	lmw r26, 0x18(r1)
/* 803AF6DC 003AC61C  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803AF6E0 003AC620  7C 08 03 A6 */	mtlr r0
/* 803AF6E4 003AC624  38 21 00 30 */	addi r1, r1, 0x30
/* 803AF6E8 003AC628  4E 80 00 20 */	blr 
.endfn create__Q23efx11TSimpleMtx4FPQ23efx3Arg

.fn create__Q23efx5TSyncFPQ23efx3Arg, global
/* 803AF6EC 003AC62C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803AF6F0 003AC630  7C 08 02 A6 */	mflr r0
/* 803AF6F4 003AC634  90 01 00 24 */	stw r0, 0x24(r1)
/* 803AF6F8 003AC638  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803AF6FC 003AC63C  7C 7F 1B 78 */	mr r31, r3
/* 803AF700 003AC640  80 03 00 08 */	lwz r0, 8(r3)
/* 803AF704 003AC644  28 00 00 00 */	cmplwi r0, 0
/* 803AF708 003AC648  41 82 00 0C */	beq .L_803AF714
/* 803AF70C 003AC64C  38 60 00 00 */	li r3, 0
/* 803AF710 003AC650  48 00 00 A4 */	b .L_803AF7B4
.L_803AF714:
/* 803AF714 003AC654  28 04 00 00 */	cmplwi r4, 0
/* 803AF718 003AC658  41 82 00 20 */	beq .L_803AF738
/* 803AF71C 003AC65C  C0 04 00 04 */	lfs f0, 4(r4)
/* 803AF720 003AC660  D0 01 00 08 */	stfs f0, 8(r1)
/* 803AF724 003AC664  C0 04 00 08 */	lfs f0, 8(r4)
/* 803AF728 003AC668  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AF72C 003AC66C  C0 04 00 0C */	lfs f0, 0xc(r4)
/* 803AF730 003AC670  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AF734 003AC674  48 00 00 20 */	b .L_803AF754
.L_803AF738:
/* 803AF738 003AC678  3C 60 80 51 */	lis r3, "zero__10Vector3<f>"@ha
/* 803AF73C 003AC67C  C4 43 41 E4 */	lfsu f2, "zero__10Vector3<f>"@l(r3)
/* 803AF740 003AC680  C0 23 00 04 */	lfs f1, 4(r3)
/* 803AF744 003AC684  C0 03 00 08 */	lfs f0, 8(r3)
/* 803AF748 003AC688  D0 41 00 08 */	stfs f2, 8(r1)
/* 803AF74C 003AC68C  D0 21 00 0C */	stfs f1, 0xc(r1)
/* 803AF750 003AC690  D0 01 00 10 */	stfs f0, 0x10(r1)
.L_803AF754:
/* 803AF754 003AC694  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF758 003AC698  38 A1 00 08 */	addi r5, r1, 8
/* 803AF75C 003AC69C  A0 9F 00 0C */	lhz r4, 0xc(r31)
/* 803AF760 003AC6A0  38 C0 00 00 */	li r6, 0
/* 803AF764 003AC6A4  48 00 C1 51 */	bl "create__11ParticleMgrFUsR10Vector3<f>Uc"
/* 803AF768 003AC6A8  90 7F 00 08 */	stw r3, 8(r31)
/* 803AF76C 003AC6AC  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AF770 003AC6B0  28 03 00 00 */	cmplwi r3, 0
/* 803AF774 003AC6B4  41 82 00 2C */	beq .L_803AF7A0
/* 803AF778 003AC6B8  28 1F 00 00 */	cmplwi r31, 0
/* 803AF77C 003AC6BC  7F E0 FB 78 */	mr r0, r31
/* 803AF780 003AC6C0  41 82 00 08 */	beq .L_803AF788
/* 803AF784 003AC6C4  38 1F 00 04 */	addi r0, r31, 4
.L_803AF788:
/* 803AF788 003AC6C8  90 03 00 EC */	stw r0, 0xec(r3)
/* 803AF78C 003AC6CC  80 7F 00 08 */	lwz r3, 8(r31)
/* 803AF790 003AC6D0  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 803AF794 003AC6D4  60 00 00 40 */	ori r0, r0, 0x40
/* 803AF798 003AC6D8  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 803AF79C 003AC6DC  48 00 00 0C */	b .L_803AF7A8
.L_803AF7A0:
/* 803AF7A0 003AC6E0  38 60 00 00 */	li r3, 0
/* 803AF7A4 003AC6E4  48 00 00 10 */	b .L_803AF7B4
.L_803AF7A8:
/* 803AF7A8 003AC6E8  38 00 00 00 */	li r0, 0
/* 803AF7AC 003AC6EC  38 60 00 01 */	li r3, 1
/* 803AF7B0 003AC6F0  98 1F 00 0E */	stb r0, 0xe(r31)
.L_803AF7B4:
/* 803AF7B4 003AC6F4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803AF7B8 003AC6F8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803AF7BC 003AC6FC  7C 08 03 A6 */	mtlr r0
/* 803AF7C0 003AC700  38 21 00 20 */	addi r1, r1, 0x20
/* 803AF7C4 003AC704  4E 80 00 20 */	blr 
.endfn create__Q23efx5TSyncFPQ23efx3Arg

.fn execute__Q23efx5TSyncFP14JPABaseEmitter, global
/* 803AF7C8 003AC708  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AF7CC 003AC70C  7C 08 02 A6 */	mflr r0
/* 803AF7D0 003AC710  38 C0 00 00 */	li r6, 0
/* 803AF7D4 003AC714  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AF7D8 003AC718  80 04 00 F4 */	lwz r0, 0xf4(r4)
/* 803AF7DC 003AC71C  54 00 07 39 */	rlwinm. r0, r0, 0, 0x1c, 0x1c
/* 803AF7E0 003AC720  41 82 00 18 */	beq .L_803AF7F8
/* 803AF7E4 003AC724  80 A4 00 D0 */	lwz r5, 0xd0(r4)
/* 803AF7E8 003AC728  80 04 00 DC */	lwz r0, 0xdc(r4)
/* 803AF7EC 003AC72C  7C 05 02 15 */	add. r0, r5, r0
/* 803AF7F0 003AC730  40 82 00 08 */	bne .L_803AF7F8
/* 803AF7F4 003AC734  38 C0 00 01 */	li r6, 1
.L_803AF7F8:
/* 803AF7F8 003AC738  54 C0 06 3F */	clrlwi. r0, r6, 0x18
/* 803AF7FC 003AC73C  41 82 00 18 */	beq .L_803AF814
/* 803AF800 003AC740  81 83 00 00 */	lwz r12, 0(r3)
/* 803AF804 003AC744  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803AF808 003AC748  7D 89 03 A6 */	mtctr r12
/* 803AF80C 003AC74C  4E 80 04 21 */	bctrl 
/* 803AF810 003AC750  48 00 00 14 */	b .L_803AF824
.L_803AF814:
/* 803AF814 003AC754  81 83 00 00 */	lwz r12, 0(r3)
/* 803AF818 003AC758  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 803AF81C 003AC75C  7D 89 03 A6 */	mtctr r12
/* 803AF820 003AC760  4E 80 04 21 */	bctrl 
.L_803AF824:
/* 803AF824 003AC764  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AF828 003AC768  7C 08 03 A6 */	mtlr r0
/* 803AF82C 003AC76C  38 21 00 10 */	addi r1, r1, 0x10
/* 803AF830 003AC770  4E 80 00 20 */	blr 
.endfn execute__Q23efx5TSyncFP14JPABaseEmitter

.fn executeAfter__Q23efx5TSyncFP14JPABaseEmitter, global
/* 803AF834 003AC774  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AF838 003AC778  7C 08 02 A6 */	mflr r0
/* 803AF83C 003AC77C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AF840 003AC780  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AF844 003AC784  7C 9F 23 78 */	mr r31, r4
/* 803AF848 003AC788  93 C1 00 08 */	stw r30, 8(r1)
/* 803AF84C 003AC78C  7C 7E 1B 78 */	mr r30, r3
/* 803AF850 003AC790  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF854 003AC794  48 00 C1 85 */	bl setGlobalColor__11ParticleMgrFP14JPABaseEmitter
/* 803AF858 003AC798  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF85C 003AC79C  7F E4 FB 78 */	mr r4, r31
/* 803AF860 003AC7A0  48 00 C4 85 */	bl cullByResFlg__11ParticleMgrFP14JPABaseEmitter
/* 803AF864 003AC7A4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803AF868 003AC7A8  40 82 00 2C */	bne .L_803AF894
/* 803AF86C 003AC7AC  88 1E 00 0E */	lbz r0, 0xe(r30)
/* 803AF870 003AC7B0  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803AF874 003AC7B4  41 82 00 14 */	beq .L_803AF888
/* 803AF878 003AC7B8  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803AF87C 003AC7BC  60 00 00 04 */	ori r0, r0, 4
/* 803AF880 003AC7C0  90 1F 00 F4 */	stw r0, 0xf4(r31)
/* 803AF884 003AC7C4  48 00 00 10 */	b .L_803AF894
.L_803AF888:
/* 803AF888 003AC7C8  80 1F 00 F4 */	lwz r0, 0xf4(r31)
/* 803AF88C 003AC7CC  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 803AF890 003AC7D0  90 1F 00 F4 */	stw r0, 0xf4(r31)
.L_803AF894:
/* 803AF894 003AC7D4  7F C3 F3 78 */	mr r3, r30
/* 803AF898 003AC7D8  7F E4 FB 78 */	mr r4, r31
/* 803AF89C 003AC7DC  81 9E 00 00 */	lwz r12, 0(r30)
/* 803AF8A0 003AC7E0  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 803AF8A4 003AC7E4  7D 89 03 A6 */	mtctr r12
/* 803AF8A8 003AC7E8  4E 80 04 21 */	bctrl 
/* 803AF8AC 003AC7EC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AF8B0 003AC7F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AF8B4 003AC7F4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AF8B8 003AC7F8  7C 08 03 A6 */	mtlr r0
/* 803AF8BC 003AC7FC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AF8C0 003AC800  4E 80 00 20 */	blr 
.endfn executeAfter__Q23efx5TSyncFP14JPABaseEmitter

.fn forceKill__Q23efx5TSyncFv, global
/* 803AF8C4 003AC804  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AF8C8 003AC808  7C 08 02 A6 */	mflr r0
/* 803AF8CC 003AC80C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AF8D0 003AC810  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AF8D4 003AC814  7C 7F 1B 78 */	mr r31, r3
/* 803AF8D8 003AC818  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF8DC 003AC81C  80 9F 00 08 */	lwz r4, 8(r31)
/* 803AF8E0 003AC820  48 00 C1 A1 */	bl forceKill__11ParticleMgrFP14JPABaseEmitter
/* 803AF8E4 003AC824  38 00 00 00 */	li r0, 0
/* 803AF8E8 003AC828  90 1F 00 08 */	stw r0, 8(r31)
/* 803AF8EC 003AC82C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AF8F0 003AC830  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AF8F4 003AC834  7C 08 03 A6 */	mtlr r0
/* 803AF8F8 003AC838  38 21 00 10 */	addi r1, r1, 0x10
/* 803AF8FC 003AC83C  4E 80 00 20 */	blr 
.endfn forceKill__Q23efx5TSyncFv

.fn fade__Q23efx5TSyncFv, global
/* 803AF900 003AC840  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AF904 003AC844  7C 08 02 A6 */	mflr r0
/* 803AF908 003AC848  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AF90C 003AC84C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AF910 003AC850  7C 7F 1B 78 */	mr r31, r3
/* 803AF914 003AC854  80 83 00 08 */	lwz r4, 8(r3)
/* 803AF918 003AC858  28 04 00 00 */	cmplwi r4, 0
/* 803AF91C 003AC85C  41 82 00 40 */	beq .L_803AF95C
/* 803AF920 003AC860  88 1F 00 0E */	lbz r0, 0xe(r31)
/* 803AF924 003AC864  54 00 07 FF */	clrlwi. r0, r0, 0x1f
/* 803AF928 003AC868  41 82 00 18 */	beq .L_803AF940
/* 803AF92C 003AC86C  81 83 00 00 */	lwz r12, 0(r3)
/* 803AF930 003AC870  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803AF934 003AC874  7D 89 03 A6 */	mtctr r12
/* 803AF938 003AC878  4E 80 04 21 */	bctrl 
/* 803AF93C 003AC87C  48 00 00 20 */	b .L_803AF95C
.L_803AF940:
/* 803AF940 003AC880  38 0D 99 F8 */	addi r0, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803AF944 003AC884  90 04 00 EC */	stw r0, 0xec(r4)
/* 803AF948 003AC888  80 6D 9A 18 */	lwz r3, particleMgr@sda21(r13)
/* 803AF94C 003AC88C  80 9F 00 08 */	lwz r4, 8(r31)
/* 803AF950 003AC890  48 00 C1 5D */	bl fade__11ParticleMgrFP14JPABaseEmitter
/* 803AF954 003AC894  38 00 00 00 */	li r0, 0
/* 803AF958 003AC898  90 1F 00 08 */	stw r0, 8(r31)
.L_803AF95C:
/* 803AF95C 003AC89C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AF960 003AC8A0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AF964 003AC8A4  7C 08 03 A6 */	mtlr r0
/* 803AF968 003AC8A8  38 21 00 10 */	addi r1, r1, 0x10
/* 803AF96C 003AC8AC  4E 80 00 20 */	blr 
.endfn fade__Q23efx5TSyncFv

.fn doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter, global
/* 803AF970 003AC8B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AF974 003AC8B4  7C 08 02 A6 */	mflr r0
/* 803AF978 003AC8B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AF97C 003AC8BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AF980 003AC8C0  7C 9F 23 78 */	mr r31, r4
/* 803AF984 003AC8C4  93 C1 00 08 */	stw r30, 8(r1)
/* 803AF988 003AC8C8  7C 7E 1B 78 */	mr r30, r3
/* 803AF98C 003AC8CC  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803AF990 003AC8D0  28 00 00 00 */	cmplwi r0, 0
/* 803AF994 003AC8D4  40 82 00 20 */	bne .L_803AF9B4
/* 803AF998 003AC8D8  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AF99C 003AC8DC  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AF9A0 003AC8E0  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AF9A4 003AC8E4  38 80 03 11 */	li r4, 0x311
/* 803AF9A8 003AC8E8  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AF9AC 003AC8EC  4C C6 31 82 */	crclr 6
/* 803AF9B0 003AC8F0  4B C7 AC 91 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AF9B4:
/* 803AF9B4 003AC8F4  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803AF9B8 003AC8F8  C0 03 00 00 */	lfs f0, 0(r3)
/* 803AF9BC 003AC8FC  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 803AF9C0 003AC900  C0 03 00 04 */	lfs f0, 4(r3)
/* 803AF9C4 003AC904  D0 1F 00 A8 */	stfs f0, 0xa8(r31)
/* 803AF9C8 003AC908  C0 03 00 08 */	lfs f0, 8(r3)
/* 803AF9CC 003AC90C  D0 1F 00 AC */	stfs f0, 0xac(r31)
/* 803AF9D0 003AC910  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AF9D4 003AC914  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AF9D8 003AC918  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AF9DC 003AC91C  7C 08 03 A6 */	mtlr r0
/* 803AF9E0 003AC920  38 21 00 10 */	addi r1, r1, 0x10
/* 803AF9E4 003AC924  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx9TChasePosFP14JPABaseEmitter

.fn doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter, global
/* 803AF9E8 003AC928  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 803AF9EC 003AC92C  7C 08 02 A6 */	mflr r0
/* 803AF9F0 003AC930  90 01 00 44 */	stw r0, 0x44(r1)
/* 803AF9F4 003AC934  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 803AF9F8 003AC938  7C 7F 1B 78 */	mr r31, r3
/* 803AF9FC 003AC93C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 803AFA00 003AC940  7C 9E 23 78 */	mr r30, r4
/* 803AFA04 003AC944  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803AFA08 003AC948  28 00 00 00 */	cmplwi r0, 0
/* 803AFA0C 003AC94C  40 82 00 20 */	bne .L_803AFA2C
/* 803AFA10 003AC950  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFA14 003AC954  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFA18 003AC958  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFA1C 003AC95C  38 80 03 1A */	li r4, 0x31a
/* 803AFA20 003AC960  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFA24 003AC964  4C C6 31 82 */	crclr 6
/* 803AFA28 003AC968  4B C7 AC 19 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFA2C:
/* 803AFA2C 003AC96C  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 803AFA30 003AC970  28 00 00 00 */	cmplwi r0, 0
/* 803AFA34 003AC974  40 82 00 20 */	bne .L_803AFA54
/* 803AFA38 003AC978  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFA3C 003AC97C  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFA40 003AC980  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFA44 003AC984  38 80 03 1B */	li r4, 0x31b
/* 803AFA48 003AC988  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFA4C 003AC98C  4C C6 31 82 */	crclr 6
/* 803AFA50 003AC990  4B C7 AB F1 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFA54:
/* 803AFA54 003AC994  80 BF 00 14 */	lwz r5, 0x14(r31)
/* 803AFA58 003AC998  38 61 00 08 */	addi r3, r1, 8
/* 803AFA5C 003AC99C  38 80 00 79 */	li r4, 0x79
/* 803AFA60 003AC9A0  C0 25 00 00 */	lfs f1, 0(r5)
/* 803AFA64 003AC9A4  4B D3 AA B1 */	bl PSMTXRotRad
/* 803AFA68 003AC9A8  80 BF 00 14 */	lwz r5, 0x14(r31)
/* 803AFA6C 003AC9AC  38 61 00 08 */	addi r3, r1, 8
/* 803AFA70 003AC9B0  83 FF 00 10 */	lwz r31, 0x10(r31)
/* 803AFA74 003AC9B4  38 80 00 79 */	li r4, 0x79
/* 803AFA78 003AC9B8  C0 25 00 00 */	lfs f1, 0(r5)
/* 803AFA7C 003AC9BC  4B D3 AA 99 */	bl PSMTXRotRad
/* 803AFA80 003AC9C0  C0 1F 00 00 */	lfs f0, 0(r31)
/* 803AFA84 003AC9C4  38 61 00 08 */	addi r3, r1, 8
/* 803AFA88 003AC9C8  38 9E 00 68 */	addi r4, r30, 0x68
/* 803AFA8C 003AC9CC  38 BE 00 A4 */	addi r5, r30, 0xa4
/* 803AFA90 003AC9D0  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AFA94 003AC9D4  C0 1F 00 04 */	lfs f0, 4(r31)
/* 803AFA98 003AC9D8  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 803AFA9C 003AC9DC  C0 1F 00 08 */	lfs f0, 8(r31)
/* 803AFAA0 003AC9E0  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 803AFAA4 003AC9E4  4B CE 42 79 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AFAA8 003AC9E8  80 01 00 44 */	lwz r0, 0x44(r1)
/* 803AFAAC 003AC9EC  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 803AFAB0 003AC9F0  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 803AFAB4 003AC9F4  7C 08 03 A6 */	mtlr r0
/* 803AFAB8 003AC9F8  38 21 00 40 */	addi r1, r1, 0x40
/* 803AFABC 003AC9FC  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx13TChasePosYRotFP14JPABaseEmitter

.fn doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter, global
/* 803AFAC0 003ACA00  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AFAC4 003ACA04  7C 08 02 A6 */	mflr r0
/* 803AFAC8 003ACA08  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AFACC 003ACA0C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AFAD0 003ACA10  7C 9F 23 78 */	mr r31, r4
/* 803AFAD4 003ACA14  93 C1 00 08 */	stw r30, 8(r1)
/* 803AFAD8 003ACA18  7C 7E 1B 78 */	mr r30, r3
/* 803AFADC 003ACA1C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803AFAE0 003ACA20  28 00 00 00 */	cmplwi r0, 0
/* 803AFAE4 003ACA24  40 82 00 20 */	bne .L_803AFB04
/* 803AFAE8 003ACA28  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFAEC 003ACA2C  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFAF0 003ACA30  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFAF4 003ACA34  38 80 03 29 */	li r4, 0x329
/* 803AFAF8 003ACA38  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFAFC 003ACA3C  4C C6 31 82 */	crclr 6
/* 803AFB00 003ACA40  4B C7 AB 41 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFB04:
/* 803AFB04 003ACA44  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803AFB08 003ACA48  38 9F 00 68 */	addi r4, r31, 0x68
/* 803AFB0C 003ACA4C  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 803AFB10 003ACA50  4B CE 42 0D */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AFB14 003ACA54  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AFB18 003ACA58  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AFB1C 003ACA5C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AFB20 003ACA60  7C 08 03 A6 */	mtlr r0
/* 803AFB24 003ACA64  38 21 00 10 */	addi r1, r1, 0x10
/* 803AFB28 003ACA68  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx9TChaseMtxFP14JPABaseEmitter

.fn doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter, global
/* 803AFB2C 003ACA6C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803AFB30 003ACA70  7C 08 02 A6 */	mflr r0
/* 803AFB34 003ACA74  90 01 00 14 */	stw r0, 0x14(r1)
/* 803AFB38 003ACA78  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803AFB3C 003ACA7C  7C 9F 23 78 */	mr r31, r4
/* 803AFB40 003ACA80  93 C1 00 08 */	stw r30, 8(r1)
/* 803AFB44 003ACA84  7C 7E 1B 78 */	mr r30, r3
/* 803AFB48 003ACA88  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803AFB4C 003ACA8C  28 00 00 00 */	cmplwi r0, 0
/* 803AFB50 003ACA90  40 82 00 20 */	bne .L_803AFB70
/* 803AFB54 003ACA94  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFB58 003ACA98  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFB5C 003ACA9C  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFB60 003ACAA0  38 80 03 32 */	li r4, 0x332
/* 803AFB64 003ACAA4  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFB68 003ACAA8  4C C6 31 82 */	crclr 6
/* 803AFB6C 003ACAAC  4B C7 AA D5 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFB70:
/* 803AFB70 003ACAB0  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 803AFB74 003ACAB4  C0 23 00 1C */	lfs f1, 0x1c(r3)
/* 803AFB78 003ACAB8  C0 43 00 2C */	lfs f2, 0x2c(r3)
/* 803AFB7C 003ACABC  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 803AFB80 003ACAC0  D0 1F 00 A4 */	stfs f0, 0xa4(r31)
/* 803AFB84 003ACAC4  D0 3F 00 A8 */	stfs f1, 0xa8(r31)
/* 803AFB88 003ACAC8  D0 5F 00 AC */	stfs f2, 0xac(r31)
/* 803AFB8C 003ACACC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803AFB90 003ACAD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803AFB94 003ACAD4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803AFB98 003ACAD8  7C 08 03 A6 */	mtlr r0
/* 803AFB9C 003ACADC  38 21 00 10 */	addi r1, r1, 0x10
/* 803AFBA0 003ACAE0  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx10TChaseMtxTFP14JPABaseEmitter

.fn doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter, global
/* 803AFBA4 003ACAE4  94 21 FF A0 */	stwu r1, -0x60(r1)
/* 803AFBA8 003ACAE8  7C 08 02 A6 */	mflr r0
/* 803AFBAC 003ACAEC  90 01 00 64 */	stw r0, 0x64(r1)
/* 803AFBB0 003ACAF0  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803AFBB4 003ACAF4  7C 9F 23 78 */	mr r31, r4
/* 803AFBB8 003ACAF8  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803AFBBC 003ACAFC  7C 7E 1B 78 */	mr r30, r3
/* 803AFBC0 003ACB00  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803AFBC4 003ACB04  28 00 00 00 */	cmplwi r0, 0
/* 803AFBC8 003ACB08  40 82 00 20 */	bne .L_803AFBE8
/* 803AFBCC 003ACB0C  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFBD0 003ACB10  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFBD4 003ACB14  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFBD8 003ACB18  38 80 03 3D */	li r4, 0x33d
/* 803AFBDC 003ACB1C  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFBE0 003ACB20  4C C6 31 82 */	crclr 6
/* 803AFBE4 003ACB24  4B C7 AA 5D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFBE8:
/* 803AFBE8 003ACB28  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803AFBEC 003ACB2C  28 00 00 00 */	cmplwi r0, 0
/* 803AFBF0 003ACB30  40 82 00 20 */	bne .L_803AFC10
/* 803AFBF4 003ACB34  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFBF8 003ACB38  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFBFC 003ACB3C  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFC00 003ACB40  38 80 03 3E */	li r4, 0x33e
/* 803AFC04 003ACB44  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFC08 003ACB48  4C C6 31 82 */	crclr 6
/* 803AFC0C 003ACB4C  4B C7 AA 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFC10:
/* 803AFC10 003ACB50  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 803AFC14 003ACB54  38 61 00 20 */	addi r3, r1, 0x20
/* 803AFC18 003ACB58  38 81 00 14 */	addi r4, r1, 0x14
/* 803AFC1C 003ACB5C  38 A1 00 08 */	addi r5, r1, 8
/* 803AFC20 003ACB60  C0 06 00 00 */	lfs f0, 0(r6)
/* 803AFC24 003ACB64  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AFC28 003ACB68  C0 06 00 04 */	lfs f0, 4(r6)
/* 803AFC2C 003ACB6C  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803AFC30 003ACB70  C0 06 00 08 */	lfs f0, 8(r6)
/* 803AFC34 003ACB74  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803AFC38 003ACB78  80 DE 00 14 */	lwz r6, 0x14(r30)
/* 803AFC3C 003ACB7C  C0 06 00 00 */	lfs f0, 0(r6)
/* 803AFC40 003ACB80  D0 01 00 08 */	stfs f0, 8(r1)
/* 803AFC44 003ACB84  C0 06 00 04 */	lfs f0, 4(r6)
/* 803AFC48 003ACB88  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AFC4C 003ACB8C  C0 06 00 08 */	lfs f0, 8(r6)
/* 803AFC50 003ACB90  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AFC54 003ACB94  48 00 00 2D */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803AFC58 003ACB98  38 61 00 20 */	addi r3, r1, 0x20
/* 803AFC5C 003ACB9C  38 9F 00 68 */	addi r4, r31, 0x68
/* 803AFC60 003ACBA0  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 803AFC64 003ACBA4  4B CE 40 B9 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AFC68 003ACBA8  80 01 00 64 */	lwz r0, 0x64(r1)
/* 803AFC6C 003ACBAC  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803AFC70 003ACBB0  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803AFC74 003ACBB4  7C 08 03 A6 */	mtlr r0
/* 803AFC78 003ACBB8  38 21 00 60 */	addi r1, r1, 0x60
/* 803AFC7C 003ACBBC  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx12TChasePosPosFP14JPABaseEmitter

.fn "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>", weak
/* 803AFC80 003ACBC0  C0 04 00 04 */	lfs f0, 4(r4)
/* 803AFC84 003ACBC4  C0 45 00 04 */	lfs f2, 4(r5)
/* 803AFC88 003ACBC8  C0 84 00 08 */	lfs f4, 8(r4)
/* 803AFC8C 003ACBCC  EC 22 00 28 */	fsubs f1, f2, f0
/* 803AFC90 003ACBD0  C0 E5 00 08 */	lfs f7, 8(r5)
/* 803AFC94 003ACBD4  C1 04 00 00 */	lfs f8, 0(r4)
/* 803AFC98 003ACBD8  EC C0 10 2A */	fadds f6, f0, f2
/* 803AFC9C 003ACBDC  EC 47 20 28 */	fsubs f2, f7, f4
/* 803AFCA0 003ACBE0  C1 25 00 00 */	lfs f9, 0(r5)
/* 803AFCA4 003ACBE4  EC 09 40 28 */	fsubs f0, f9, f8
/* 803AFCA8 003ACBE8  C0 A2 12 B0 */	lfs f5, lbl_8051F610@sda21(r2)
/* 803AFCAC 003ACBEC  EC E4 38 2A */	fadds f7, f4, f7
/* 803AFCB0 003ACBF0  C0 62 12 B4 */	lfs f3, lbl_8051F614@sda21(r2)
/* 803AFCB4 003ACBF4  ED 41 00 72 */	fmuls f10, f1, f1
/* 803AFCB8 003ACBF8  ED 62 00 B2 */	fmuls f11, f2, f2
/* 803AFCBC 003ACBFC  ED 08 48 2A */	fadds f8, f8, f9
/* 803AFCC0 003ACC00  EC 80 50 3A */	fmadds f4, f0, f0, f10
/* 803AFCC4 003ACC04  EC E7 01 72 */	fmuls f7, f7, f5
/* 803AFCC8 003ACC08  EC C6 01 72 */	fmuls f6, f6, f5
/* 803AFCCC 003ACC0C  EC 8B 20 2A */	fadds f4, f11, f4
/* 803AFCD0 003ACC10  ED 68 01 72 */	fmuls f11, f8, f5
/* 803AFCD4 003ACC14  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 803AFCD8 003ACC18  40 81 00 14 */	ble .L_803AFCEC
/* 803AFCDC 003ACC1C  40 81 00 14 */	ble .L_803AFCF0
/* 803AFCE0 003ACC20  FC 60 20 34 */	frsqrte f3, f4
/* 803AFCE4 003ACC24  EC 83 01 32 */	fmuls f4, f3, f4
/* 803AFCE8 003ACC28  48 00 00 08 */	b .L_803AFCF0
.L_803AFCEC:
/* 803AFCEC 003ACC2C  FC 80 18 90 */	fmr f4, f3
.L_803AFCF0:
/* 803AFCF0 003ACC30  C0 62 12 B4 */	lfs f3, lbl_8051F614@sda21(r2)
/* 803AFCF4 003ACC34  FC 04 18 40 */	fcmpo cr0, f4, f3
/* 803AFCF8 003ACC38  40 81 00 18 */	ble .L_803AFD10
/* 803AFCFC 003ACC3C  C0 62 12 B8 */	lfs f3, lbl_8051F618@sda21(r2)
/* 803AFD00 003ACC40  EC 63 20 24 */	fdivs f3, f3, f4
/* 803AFD04 003ACC44  EC 00 00 F2 */	fmuls f0, f0, f3
/* 803AFD08 003ACC48  EC 21 00 F2 */	fmuls f1, f1, f3
/* 803AFD0C 003ACC4C  EC 42 00 F2 */	fmuls f2, f2, f3
.L_803AFD10:
/* 803AFD10 003ACC50  C0 82 12 B4 */	lfs f4, lbl_8051F614@sda21(r2)
/* 803AFD14 003ACC54  C0 A2 12 B8 */	lfs f5, lbl_8051F618@sda21(r2)
/* 803AFD18 003ACC58  EC 64 00 B2 */	fmuls f3, f4, f2
/* 803AFD1C 003ACC5C  ED 44 00 72 */	fmuls f10, f4, f1
/* 803AFD20 003ACC60  ED 24 18 38 */	fmsubs f9, f4, f0, f3
/* 803AFD24 003ACC64  ED 05 50 B8 */	fmsubs f8, f5, f2, f10
/* 803AFD28 003ACC68  ED 45 50 3C */	fnmsubs f10, f5, f0, f10
/* 803AFD2C 003ACC6C  EC A2 02 72 */	fmuls f5, f2, f9
/* 803AFD30 003ACC70  EC 61 02 32 */	fmuls f3, f1, f8
/* 803AFD34 003ACC74  D1 03 00 00 */	stfs f8, 0(r3)
/* 803AFD38 003ACC78  EC 80 02 B2 */	fmuls f4, f0, f10
/* 803AFD3C 003ACC7C  EC A1 2A B8 */	fmsubs f5, f1, f10, f5
/* 803AFD40 003ACC80  EC 60 1A 78 */	fmsubs f3, f0, f9, f3
/* 803AFD44 003ACC84  EC 82 22 38 */	fmsubs f4, f2, f8, f4
/* 803AFD48 003ACC88  D0 A3 00 04 */	stfs f5, 4(r3)
/* 803AFD4C 003ACC8C  D0 03 00 08 */	stfs f0, 8(r3)
/* 803AFD50 003ACC90  D1 63 00 0C */	stfs f11, 0xc(r3)
/* 803AFD54 003ACC94  D1 23 00 10 */	stfs f9, 0x10(r3)
/* 803AFD58 003ACC98  D0 83 00 14 */	stfs f4, 0x14(r3)
/* 803AFD5C 003ACC9C  D0 23 00 18 */	stfs f1, 0x18(r3)
/* 803AFD60 003ACCA0  D0 C3 00 1C */	stfs f6, 0x1c(r3)
/* 803AFD64 003ACCA4  D1 43 00 20 */	stfs f10, 0x20(r3)
/* 803AFD68 003ACCA8  D0 63 00 24 */	stfs f3, 0x24(r3)
/* 803AFD6C 003ACCAC  D0 43 00 28 */	stfs f2, 0x28(r3)
/* 803AFD70 003ACCB0  D0 E3 00 2C */	stfs f7, 0x2c(r3)
/* 803AFD74 003ACCB4  4E 80 00 20 */	blr 
.endfn "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"

.fn doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter, global
/* 803AFD78 003ACCB8  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803AFD7C 003ACCBC  7C 08 02 A6 */	mflr r0
/* 803AFD80 003ACCC0  90 01 00 74 */	stw r0, 0x74(r1)
/* 803AFD84 003ACCC4  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803AFD88 003ACCC8  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803AFD8C 003ACCCC  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803AFD90 003ACCD0  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803AFD94 003ACCD4  7C 7E 1B 78 */	mr r30, r3
/* 803AFD98 003ACCD8  7C 9F 23 78 */	mr r31, r4
/* 803AFD9C 003ACCDC  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803AFDA0 003ACCE0  28 00 00 00 */	cmplwi r0, 0
/* 803AFDA4 003ACCE4  40 82 00 20 */	bne .L_803AFDC4
/* 803AFDA8 003ACCE8  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFDAC 003ACCEC  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFDB0 003ACCF0  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFDB4 003ACCF4  38 80 03 50 */	li r4, 0x350
/* 803AFDB8 003ACCF8  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFDBC 003ACCFC  4C C6 31 82 */	crclr 6
/* 803AFDC0 003ACD00  4B C7 A8 81 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFDC4:
/* 803AFDC4 003ACD04  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803AFDC8 003ACD08  28 00 00 00 */	cmplwi r0, 0
/* 803AFDCC 003ACD0C  40 82 00 20 */	bne .L_803AFDEC
/* 803AFDD0 003ACD10  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFDD4 003ACD14  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFDD8 003ACD18  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFDDC 003ACD1C  38 80 03 51 */	li r4, 0x351
/* 803AFDE0 003ACD20  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFDE4 003ACD24  4C C6 31 82 */	crclr 6
/* 803AFDE8 003ACD28  4B C7 A8 59 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFDEC:
/* 803AFDEC 003ACD2C  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 803AFDF0 003ACD30  38 61 00 20 */	addi r3, r1, 0x20
/* 803AFDF4 003ACD34  38 81 00 14 */	addi r4, r1, 0x14
/* 803AFDF8 003ACD38  38 A1 00 08 */	addi r5, r1, 8
/* 803AFDFC 003ACD3C  C0 06 00 00 */	lfs f0, 0(r6)
/* 803AFE00 003ACD40  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AFE04 003ACD44  C0 06 00 04 */	lfs f0, 4(r6)
/* 803AFE08 003ACD48  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803AFE0C 003ACD4C  C0 06 00 08 */	lfs f0, 8(r6)
/* 803AFE10 003ACD50  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803AFE14 003ACD54  80 DE 00 14 */	lwz r6, 0x14(r30)
/* 803AFE18 003ACD58  C0 06 00 00 */	lfs f0, 0(r6)
/* 803AFE1C 003ACD5C  D0 01 00 08 */	stfs f0, 8(r1)
/* 803AFE20 003ACD60  C0 06 00 04 */	lfs f0, 4(r6)
/* 803AFE24 003ACD64  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AFE28 003ACD68  C0 06 00 08 */	lfs f0, 8(r6)
/* 803AFE2C 003ACD6C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AFE30 003ACD70  4B FF FE 51 */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803AFE34 003ACD74  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803AFE38 003ACD78  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803AFE3C 003ACD7C  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 803AFE40 003ACD80  EC 81 00 28 */	fsubs f4, f1, f0
/* 803AFE44 003ACD84  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803AFE48 003ACD88  C0 21 00 08 */	lfs f1, 8(r1)
/* 803AFE4C 003ACD8C  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803AFE50 003ACD90  EC 43 10 28 */	fsubs f2, f3, f2
/* 803AFE54 003ACD94  EC 64 01 32 */	fmuls f3, f4, f4
/* 803AFE58 003ACD98  EC 21 00 28 */	fsubs f1, f1, f0
/* 803AFE5C 003ACD9C  C0 02 12 B4 */	lfs f0, lbl_8051F614@sda21(r2)
/* 803AFE60 003ACDA0  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803AFE64 003ACDA4  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 803AFE68 003ACDA8  EF E2 08 2A */	fadds f31, f2, f1
/* 803AFE6C 003ACDAC  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803AFE70 003ACDB0  40 81 00 14 */	ble .L_803AFE84
/* 803AFE74 003ACDB4  40 81 00 14 */	ble .L_803AFE88
/* 803AFE78 003ACDB8  FC 00 F8 34 */	frsqrte f0, f31
/* 803AFE7C 003ACDBC  EF E0 07 F2 */	fmuls f31, f0, f31
/* 803AFE80 003ACDC0  48 00 00 08 */	b .L_803AFE88
.L_803AFE84:
/* 803AFE84 003ACDC4  FF E0 00 90 */	fmr f31, f0
.L_803AFE88:
/* 803AFE88 003ACDC8  38 61 00 20 */	addi r3, r1, 0x20
/* 803AFE8C 003ACDCC  38 9F 00 68 */	addi r4, r31, 0x68
/* 803AFE90 003ACDD0  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 803AFE94 003ACDD4  4B CE 3E 89 */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AFE98 003ACDD8  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803AFE9C 003ACDDC  EC 5F 00 24 */	fdivs f2, f31, f0
/* 803AFEA0 003ACDE0  D0 5F 00 08 */	stfs f2, 8(r31)
/* 803AFEA4 003ACDE4  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803AFEA8 003ACDE8  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803AFEAC 003ACDEC  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803AFEB0 003ACDF0  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803AFEB4 003ACDF4  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803AFEB8 003ACDF8  7C 08 03 A6 */	mtlr r0
/* 803AFEBC 003ACDFC  38 21 00 70 */	addi r1, r1, 0x70
/* 803AFEC0 003ACE00  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx23TChasePosPosLocalZScaleFP14JPABaseEmitter

.fn doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter, global
/* 803AFEC4 003ACE04  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 803AFEC8 003ACE08  7C 08 02 A6 */	mflr r0
/* 803AFECC 003ACE0C  90 01 00 74 */	stw r0, 0x74(r1)
/* 803AFED0 003ACE10  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 803AFED4 003ACE14  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 803AFED8 003ACE18  93 E1 00 5C */	stw r31, 0x5c(r1)
/* 803AFEDC 003ACE1C  93 C1 00 58 */	stw r30, 0x58(r1)
/* 803AFEE0 003ACE20  7C 7E 1B 78 */	mr r30, r3
/* 803AFEE4 003ACE24  7C 9F 23 78 */	mr r31, r4
/* 803AFEE8 003ACE28  80 03 00 10 */	lwz r0, 0x10(r3)
/* 803AFEEC 003ACE2C  28 00 00 00 */	cmplwi r0, 0
/* 803AFEF0 003ACE30  40 82 00 20 */	bne .L_803AFF10
/* 803AFEF4 003ACE34  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFEF8 003ACE38  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFEFC 003ACE3C  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFF00 003ACE40  38 80 03 70 */	li r4, 0x370
/* 803AFF04 003ACE44  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFF08 003ACE48  4C C6 31 82 */	crclr 6
/* 803AFF0C 003ACE4C  4B C7 A7 35 */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFF10:
/* 803AFF10 003ACE50  80 1E 00 14 */	lwz r0, 0x14(r30)
/* 803AFF14 003ACE54  28 00 00 00 */	cmplwi r0, 0
/* 803AFF18 003ACE58  40 82 00 20 */	bne .L_803AFF38
/* 803AFF1C 003ACE5C  3C 60 80 49 */	lis r3, lbl_80495880@ha
/* 803AFF20 003ACE60  3C A0 80 49 */	lis r5, lbl_8049588C@ha
/* 803AFF24 003ACE64  38 63 58 80 */	addi r3, r3, lbl_80495880@l
/* 803AFF28 003ACE68  38 80 03 71 */	li r4, 0x371
/* 803AFF2C 003ACE6C  38 A5 58 8C */	addi r5, r5, lbl_8049588C@l
/* 803AFF30 003ACE70  4C C6 31 82 */	crclr 6
/* 803AFF34 003ACE74  4B C7 A7 0D */	bl panic_f__12JUTExceptionFPCciPCce
.L_803AFF38:
/* 803AFF38 003ACE78  80 DE 00 10 */	lwz r6, 0x10(r30)
/* 803AFF3C 003ACE7C  38 61 00 20 */	addi r3, r1, 0x20
/* 803AFF40 003ACE80  38 81 00 14 */	addi r4, r1, 0x14
/* 803AFF44 003ACE84  38 A1 00 08 */	addi r5, r1, 8
/* 803AFF48 003ACE88  C0 06 00 00 */	lfs f0, 0(r6)
/* 803AFF4C 003ACE8C  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 803AFF50 003ACE90  C0 06 00 04 */	lfs f0, 4(r6)
/* 803AFF54 003ACE94  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 803AFF58 003ACE98  C0 06 00 08 */	lfs f0, 8(r6)
/* 803AFF5C 003ACE9C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 803AFF60 003ACEA0  80 DE 00 14 */	lwz r6, 0x14(r30)
/* 803AFF64 003ACEA4  C0 06 00 00 */	lfs f0, 0(r6)
/* 803AFF68 003ACEA8  D0 01 00 08 */	stfs f0, 8(r1)
/* 803AFF6C 003ACEAC  C0 06 00 04 */	lfs f0, 4(r6)
/* 803AFF70 003ACEB0  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 803AFF74 003ACEB4  C0 06 00 08 */	lfs f0, 8(r6)
/* 803AFF78 003ACEB8  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 803AFF7C 003ACEBC  4B FF FD 05 */	bl "makeMtxZAxisAlongPosPos__3efxFPA4_fR10Vector3<f>R10Vector3<f>"
/* 803AFF80 003ACEC0  C0 21 00 0C */	lfs f1, 0xc(r1)
/* 803AFF84 003ACEC4  C0 01 00 18 */	lfs f0, 0x18(r1)
/* 803AFF88 003ACEC8  C0 61 00 10 */	lfs f3, 0x10(r1)
/* 803AFF8C 003ACECC  EC 81 00 28 */	fsubs f4, f1, f0
/* 803AFF90 003ACED0  C0 41 00 1C */	lfs f2, 0x1c(r1)
/* 803AFF94 003ACED4  C0 21 00 08 */	lfs f1, 8(r1)
/* 803AFF98 003ACED8  C0 01 00 14 */	lfs f0, 0x14(r1)
/* 803AFF9C 003ACEDC  EC 43 10 28 */	fsubs f2, f3, f2
/* 803AFFA0 003ACEE0  EC 64 01 32 */	fmuls f3, f4, f4
/* 803AFFA4 003ACEE4  EC 21 00 28 */	fsubs f1, f1, f0
/* 803AFFA8 003ACEE8  C0 02 12 B4 */	lfs f0, lbl_8051F614@sda21(r2)
/* 803AFFAC 003ACEEC  EC 42 00 B2 */	fmuls f2, f2, f2
/* 803AFFB0 003ACEF0  EC 21 18 7A */	fmadds f1, f1, f1, f3
/* 803AFFB4 003ACEF4  EF E2 08 2A */	fadds f31, f2, f1
/* 803AFFB8 003ACEF8  FC 1F 00 40 */	fcmpo cr0, f31, f0
/* 803AFFBC 003ACEFC  40 81 00 14 */	ble .L_803AFFD0
/* 803AFFC0 003ACF00  40 81 00 14 */	ble .L_803AFFD4
/* 803AFFC4 003ACF04  FC 00 F8 34 */	frsqrte f0, f31
/* 803AFFC8 003ACF08  EF E0 07 F2 */	fmuls f31, f0, f31
/* 803AFFCC 003ACF0C  48 00 00 08 */	b .L_803AFFD4
.L_803AFFD0:
/* 803AFFD0 003ACF10  FF E0 00 90 */	fmr f31, f0
.L_803AFFD4:
/* 803AFFD4 003ACF14  38 61 00 20 */	addi r3, r1, 0x20
/* 803AFFD8 003ACF18  38 9F 00 68 */	addi r4, r31, 0x68
/* 803AFFDC 003ACF1C  38 BF 00 A4 */	addi r5, r31, 0xa4
/* 803AFFE0 003ACF20  4B CE 3D 3D */	bl "JPASetRMtxTVecfromMtx__FPA4_CfPA4_fPQ29JGeometry8TVec3<f>"
/* 803AFFE4 003ACF24  C0 1E 00 18 */	lfs f0, 0x18(r30)
/* 803AFFE8 003ACF28  EC 5F 00 24 */	fdivs f2, f31, f0
/* 803AFFEC 003ACF2C  D0 5F 00 04 */	stfs f2, 4(r31)
/* 803AFFF0 003ACF30  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 803AFFF4 003ACF34  80 01 00 74 */	lwz r0, 0x74(r1)
/* 803AFFF8 003ACF38  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 803AFFFC 003ACF3C  83 E1 00 5C */	lwz r31, 0x5c(r1)
/* 803B0000 003ACF40  83 C1 00 58 */	lwz r30, 0x58(r1)
/* 803B0004 003ACF44  7C 08 03 A6 */	mtlr r0
/* 803B0008 003ACF48  38 21 00 70 */	addi r1, r1, 0x70
/* 803B000C 003ACF4C  4E 80 00 20 */	blr 
.endfn doExecuteEmitterOperation__Q23efx23TChasePosPosLocalYScaleFP14JPABaseEmitter

.fn __ct__Q23efx9TForever2FUsUs, global
/* 803B0010 003ACF50  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0014 003ACF54  7C 08 02 A6 */	mflr r0
/* 803B0018 003ACF58  3C C0 80 4B */	lis r6, __vt__Q23efx5TBase@ha
/* 803B001C 003ACF5C  38 E0 00 02 */	li r7, 2
/* 803B0020 003ACF60  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B0024 003ACF64  38 06 A7 F8 */	addi r0, r6, __vt__Q23efx5TBase@l
/* 803B0028 003ACF68  3C C0 80 3B */	lis r6, __ct__Q23efx8TForeverFv@ha
/* 803B002C 003ACF6C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B0030 003ACF70  38 C6 00 A8 */	addi r6, r6, __ct__Q23efx8TForeverFv@l
/* 803B0034 003ACF74  7C BF 2B 78 */	mr r31, r5
/* 803B0038 003ACF78  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B003C 003ACF7C  7C 9E 23 78 */	mr r30, r4
/* 803B0040 003ACF80  7C C4 33 78 */	mr r4, r6
/* 803B0044 003ACF84  38 C0 00 10 */	li r6, 0x10
/* 803B0048 003ACF88  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B004C 003ACF8C  7C 7D 1B 78 */	mr r29, r3
/* 803B0050 003ACF90  3C 60 80 4B */	lis r3, "__vt__Q23efx28TSyncGroup2<Q23efx8TForever>"@ha
/* 803B0054 003ACF94  90 1D 00 00 */	stw r0, 0(r29)
/* 803B0058 003ACF98  38 03 29 7C */	addi r0, r3, "__vt__Q23efx28TSyncGroup2<Q23efx8TForever>"@l
/* 803B005C 003ACF9C  3C 60 80 17 */	lis r3, __dt__Q23efx8TForeverFv@ha
/* 803B0060 003ACFA0  90 1D 00 00 */	stw r0, 0(r29)
/* 803B0064 003ACFA4  38 03 5C C8 */	addi r0, r3, __dt__Q23efx8TForeverFv@l
/* 803B0068 003ACFA8  7C 05 03 78 */	mr r5, r0
/* 803B006C 003ACFAC  38 7D 00 04 */	addi r3, r29, 4
/* 803B0070 003ACFB0  4B D1 17 CD */	bl __construct_array
/* 803B0074 003ACFB4  3C 80 80 4B */	lis r4, __vt__Q23efx9TForever2@ha
/* 803B0078 003ACFB8  7F A3 EB 78 */	mr r3, r29
/* 803B007C 003ACFBC  38 04 29 98 */	addi r0, r4, __vt__Q23efx9TForever2@l
/* 803B0080 003ACFC0  90 1D 00 00 */	stw r0, 0(r29)
/* 803B0084 003ACFC4  B3 DD 00 10 */	sth r30, 0x10(r29)
/* 803B0088 003ACFC8  B3 FD 00 20 */	sth r31, 0x20(r29)
/* 803B008C 003ACFCC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B0090 003ACFD0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B0094 003ACFD4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B0098 003ACFD8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B009C 003ACFDC  7C 08 03 A6 */	mtlr r0
/* 803B00A0 003ACFE0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B00A4 003ACFE4  4E 80 00 20 */	blr 
.endfn __ct__Q23efx9TForever2FUsUs

.fn __ct__Q23efx8TForeverFv, weak
/* 803B00A8 003ACFE8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B00AC 003ACFEC  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803B00B0 003ACFF0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B00B4 003ACFF4  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803B00B8 003ACFF8  90 03 00 00 */	stw r0, 0(r3)
/* 803B00BC 003ACFFC  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803B00C0 003AD000  39 05 69 8C */	addi r8, r5, __vt__Q23efx5TSync@l
/* 803B00C4 003AD004  3C 80 80 4B */	lis r4, __vt__Q23efx8TForever@ha
/* 803B00C8 003AD008  90 03 00 04 */	stw r0, 4(r3)
/* 803B00CC 003AD00C  38 84 2C 24 */	addi r4, r4, __vt__Q23efx8TForever@l
/* 803B00D0 003AD010  38 E8 00 14 */	addi r7, r8, 0x14
/* 803B00D4 003AD014  38 C0 00 00 */	li r6, 0
/* 803B00D8 003AD018  91 03 00 00 */	stw r8, 0(r3)
/* 803B00DC 003AD01C  38 A0 02 B2 */	li r5, 0x2b2
/* 803B00E0 003AD020  38 04 00 14 */	addi r0, r4, 0x14
/* 803B00E4 003AD024  90 E3 00 04 */	stw r7, 4(r3)
/* 803B00E8 003AD028  90 C3 00 08 */	stw r6, 8(r3)
/* 803B00EC 003AD02C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803B00F0 003AD030  98 C3 00 0E */	stb r6, 0xe(r3)
/* 803B00F4 003AD034  90 83 00 00 */	stw r4, 0(r3)
/* 803B00F8 003AD038  90 03 00 04 */	stw r0, 4(r3)
/* 803B00FC 003AD03C  4E 80 00 20 */	blr 
.endfn __ct__Q23efx8TForeverFv

.fn __ct__Q23efx9TForever3FUsUsUs, global
/* 803B0100 003AD040  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0104 003AD044  7C 08 02 A6 */	mflr r0
/* 803B0108 003AD048  3C E0 80 4B */	lis r7, __vt__Q23efx5TBase@ha
/* 803B010C 003AD04C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B0110 003AD050  38 07 A7 F8 */	addi r0, r7, __vt__Q23efx5TBase@l
/* 803B0114 003AD054  3C E0 80 3B */	lis r7, __ct__Q23efx8TForeverFv@ha
/* 803B0118 003AD058  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B011C 003AD05C  7C DF 33 78 */	mr r31, r6
/* 803B0120 003AD060  38 E7 00 A8 */	addi r7, r7, __ct__Q23efx8TForeverFv@l
/* 803B0124 003AD064  38 C0 00 10 */	li r6, 0x10
/* 803B0128 003AD068  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B012C 003AD06C  7C BE 2B 78 */	mr r30, r5
/* 803B0130 003AD070  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B0134 003AD074  7C 9D 23 78 */	mr r29, r4
/* 803B0138 003AD078  7C E4 3B 78 */	mr r4, r7
/* 803B013C 003AD07C  38 E0 00 03 */	li r7, 3
/* 803B0140 003AD080  93 81 00 10 */	stw r28, 0x10(r1)
/* 803B0144 003AD084  7C 7C 1B 78 */	mr r28, r3
/* 803B0148 003AD088  3C 60 80 4C */	lis r3, "__vt__Q23efx28TSyncGroup3<Q23efx8TForever>"@ha
/* 803B014C 003AD08C  90 1C 00 00 */	stw r0, 0(r28)
/* 803B0150 003AD090  38 03 AA DC */	addi r0, r3, "__vt__Q23efx28TSyncGroup3<Q23efx8TForever>"@l
/* 803B0154 003AD094  3C 60 80 17 */	lis r3, __dt__Q23efx8TForeverFv@ha
/* 803B0158 003AD098  90 1C 00 00 */	stw r0, 0(r28)
/* 803B015C 003AD09C  38 03 5C C8 */	addi r0, r3, __dt__Q23efx8TForeverFv@l
/* 803B0160 003AD0A0  38 7C 00 04 */	addi r3, r28, 4
/* 803B0164 003AD0A4  7C 05 03 78 */	mr r5, r0
/* 803B0168 003AD0A8  4B D1 16 D5 */	bl __construct_array
/* 803B016C 003AD0AC  3C 80 80 4C */	lis r4, __vt__Q23efx9TForever3@ha
/* 803B0170 003AD0B0  7F 83 E3 78 */	mr r3, r28
/* 803B0174 003AD0B4  38 04 AA F8 */	addi r0, r4, __vt__Q23efx9TForever3@l
/* 803B0178 003AD0B8  90 1C 00 00 */	stw r0, 0(r28)
/* 803B017C 003AD0BC  B3 BC 00 10 */	sth r29, 0x10(r28)
/* 803B0180 003AD0C0  B3 DC 00 20 */	sth r30, 0x20(r28)
/* 803B0184 003AD0C4  B3 FC 00 30 */	sth r31, 0x30(r28)
/* 803B0188 003AD0C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B018C 003AD0CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B0190 003AD0D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B0194 003AD0D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803B0198 003AD0D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B019C 003AD0DC  7C 08 03 A6 */	mtlr r0
/* 803B01A0 003AD0E0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B01A4 003AD0E4  4E 80 00 20 */	blr 
.endfn __ct__Q23efx9TForever3FUsUsUs

.fn __ct__Q23efx9TForever4FUsUsUsUs, global
/* 803B01A8 003AD0E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B01AC 003AD0EC  7C 08 02 A6 */	mflr r0
/* 803B01B0 003AD0F0  3D 00 80 4B */	lis r8, __vt__Q23efx5TBase@ha
/* 803B01B4 003AD0F4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B01B8 003AD0F8  38 08 A7 F8 */	addi r0, r8, __vt__Q23efx5TBase@l
/* 803B01BC 003AD0FC  3D 00 80 3B */	lis r8, __ct__Q23efx8TForeverFv@ha
/* 803B01C0 003AD100  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803B01C4 003AD104  7C 7B 1B 78 */	mr r27, r3
/* 803B01C8 003AD108  7C DE 33 78 */	mr r30, r6
/* 803B01CC 003AD10C  7C FF 3B 78 */	mr r31, r7
/* 803B01D0 003AD110  3C 60 80 4B */	lis r3, "__vt__Q23efx28TSyncGroup4<Q23efx8TForever>"@ha
/* 803B01D4 003AD114  39 08 00 A8 */	addi r8, r8, __ct__Q23efx8TForeverFv@l
/* 803B01D8 003AD118  7C 9C 23 78 */	mr r28, r4
/* 803B01DC 003AD11C  7C BD 2B 78 */	mr r29, r5
/* 803B01E0 003AD120  7D 04 43 78 */	mr r4, r8
/* 803B01E4 003AD124  38 C0 00 10 */	li r6, 0x10
/* 803B01E8 003AD128  38 E0 00 04 */	li r7, 4
/* 803B01EC 003AD12C  90 1B 00 00 */	stw r0, 0(r27)
/* 803B01F0 003AD130  38 03 7C 90 */	addi r0, r3, "__vt__Q23efx28TSyncGroup4<Q23efx8TForever>"@l
/* 803B01F4 003AD134  3C 60 80 17 */	lis r3, __dt__Q23efx8TForeverFv@ha
/* 803B01F8 003AD138  90 1B 00 00 */	stw r0, 0(r27)
/* 803B01FC 003AD13C  38 03 5C C8 */	addi r0, r3, __dt__Q23efx8TForeverFv@l
/* 803B0200 003AD140  7C 05 03 78 */	mr r5, r0
/* 803B0204 003AD144  38 7B 00 04 */	addi r3, r27, 4
/* 803B0208 003AD148  4B D1 16 35 */	bl __construct_array
/* 803B020C 003AD14C  3C 80 80 4B */	lis r4, __vt__Q23efx9TForever4@ha
/* 803B0210 003AD150  7F 63 DB 78 */	mr r3, r27
/* 803B0214 003AD154  38 04 7C AC */	addi r0, r4, __vt__Q23efx9TForever4@l
/* 803B0218 003AD158  90 1B 00 00 */	stw r0, 0(r27)
/* 803B021C 003AD15C  B3 9B 00 10 */	sth r28, 0x10(r27)
/* 803B0220 003AD160  B3 BB 00 20 */	sth r29, 0x20(r27)
/* 803B0224 003AD164  B3 DB 00 30 */	sth r30, 0x30(r27)
/* 803B0228 003AD168  B3 FB 00 40 */	sth r31, 0x40(r27)
/* 803B022C 003AD16C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803B0230 003AD170  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B0234 003AD174  7C 08 03 A6 */	mtlr r0
/* 803B0238 003AD178  38 21 00 20 */	addi r1, r1, 0x20
/* 803B023C 003AD17C  4E 80 00 20 */	blr 
.endfn __ct__Q23efx9TForever4FUsUsUsUs

.fn "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs", global
/* 803B0240 003AD180  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0244 003AD184  7C 08 02 A6 */	mflr r0
/* 803B0248 003AD188  3C E0 80 4B */	lis r7, __vt__Q23efx5TBase@ha
/* 803B024C 003AD18C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B0250 003AD190  38 07 A7 F8 */	addi r0, r7, __vt__Q23efx5TBase@l
/* 803B0254 003AD194  3C E0 80 3B */	lis r7, __ct__Q23efx9TChasePosFv@ha
/* 803B0258 003AD198  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B025C 003AD19C  7C DF 33 78 */	mr r31, r6
/* 803B0260 003AD1A0  38 E7 02 EC */	addi r7, r7, __ct__Q23efx9TChasePosFv@l
/* 803B0264 003AD1A4  38 C0 00 14 */	li r6, 0x14
/* 803B0268 003AD1A8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B026C 003AD1AC  7C BE 2B 78 */	mr r30, r5
/* 803B0270 003AD1B0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B0274 003AD1B4  7C 9D 23 78 */	mr r29, r4
/* 803B0278 003AD1B8  7C E4 3B 78 */	mr r4, r7
/* 803B027C 003AD1BC  38 E0 00 02 */	li r7, 2
/* 803B0280 003AD1C0  93 81 00 10 */	stw r28, 0x10(r1)
/* 803B0284 003AD1C4  7C 7C 1B 78 */	mr r28, r3
/* 803B0288 003AD1C8  3C 60 80 4D */	lis r3, "__vt__Q23efx29TSyncGroup2<Q23efx9TChasePos>"@ha
/* 803B028C 003AD1CC  90 1C 00 00 */	stw r0, 0(r28)
/* 803B0290 003AD1D0  38 03 D8 60 */	addi r0, r3, "__vt__Q23efx29TSyncGroup2<Q23efx9TChasePos>"@l
/* 803B0294 003AD1D4  3C 60 80 10 */	lis r3, __dt__Q23efx9TChasePosFv@ha
/* 803B0298 003AD1D8  90 1C 00 00 */	stw r0, 0(r28)
/* 803B029C 003AD1DC  38 03 12 14 */	addi r0, r3, __dt__Q23efx9TChasePosFv@l
/* 803B02A0 003AD1E0  38 7C 00 04 */	addi r3, r28, 4
/* 803B02A4 003AD1E4  7C 05 03 78 */	mr r5, r0
/* 803B02A8 003AD1E8  4B D1 15 95 */	bl __construct_array
/* 803B02AC 003AD1EC  3C 80 80 4D */	lis r4, __vt__Q23efx10TChasePos2@ha
/* 803B02B0 003AD1F0  7F 83 E3 78 */	mr r3, r28
/* 803B02B4 003AD1F4  38 04 D8 7C */	addi r0, r4, __vt__Q23efx10TChasePos2@l
/* 803B02B8 003AD1F8  90 1C 00 00 */	stw r0, 0(r28)
/* 803B02BC 003AD1FC  93 BC 00 14 */	stw r29, 0x14(r28)
/* 803B02C0 003AD200  B3 DC 00 10 */	sth r30, 0x10(r28)
/* 803B02C4 003AD204  93 BC 00 28 */	stw r29, 0x28(r28)
/* 803B02C8 003AD208  B3 FC 00 24 */	sth r31, 0x24(r28)
/* 803B02CC 003AD20C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B02D0 003AD210  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B02D4 003AD214  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B02D8 003AD218  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803B02DC 003AD21C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B02E0 003AD220  7C 08 03 A6 */	mtlr r0
/* 803B02E4 003AD224  38 21 00 20 */	addi r1, r1, 0x20
/* 803B02E8 003AD228  4E 80 00 20 */	blr 
.endfn "__ct__Q23efx10TChasePos2FP10Vector3<f>UsUs"

.fn __ct__Q23efx9TChasePosFv, weak
/* 803B02EC 003AD22C  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B02F0 003AD230  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803B02F4 003AD234  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B02F8 003AD238  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803B02FC 003AD23C  90 03 00 00 */	stw r0, 0(r3)
/* 803B0300 003AD240  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803B0304 003AD244  39 05 69 8C */	addi r8, r5, __vt__Q23efx5TSync@l
/* 803B0308 003AD248  3C 80 80 4E */	lis r4, __vt__Q23efx9TChasePos@ha
/* 803B030C 003AD24C  90 03 00 04 */	stw r0, 4(r3)
/* 803B0310 003AD250  38 84 69 40 */	addi r4, r4, __vt__Q23efx9TChasePos@l
/* 803B0314 003AD254  38 E8 00 14 */	addi r7, r8, 0x14
/* 803B0318 003AD258  38 C0 00 00 */	li r6, 0
/* 803B031C 003AD25C  91 03 00 00 */	stw r8, 0(r3)
/* 803B0320 003AD260  38 A0 02 B2 */	li r5, 0x2b2
/* 803B0324 003AD264  38 04 00 14 */	addi r0, r4, 0x14
/* 803B0328 003AD268  90 E3 00 04 */	stw r7, 4(r3)
/* 803B032C 003AD26C  90 C3 00 08 */	stw r6, 8(r3)
/* 803B0330 003AD270  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803B0334 003AD274  98 C3 00 0E */	stb r6, 0xe(r3)
/* 803B0338 003AD278  90 83 00 00 */	stw r4, 0(r3)
/* 803B033C 003AD27C  90 03 00 04 */	stw r0, 4(r3)
/* 803B0340 003AD280  4E 80 00 20 */	blr 
.endfn __ct__Q23efx9TChasePosFv

.fn "setPosptr__Q23efx10TChasePos2FP10Vector3<f>", global
/* 803B0344 003AD284  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B0348 003AD288  90 83 00 28 */	stw r4, 0x28(r3)
/* 803B034C 003AD28C  4E 80 00 20 */	blr 
.endfn "setPosptr__Q23efx10TChasePos2FP10Vector3<f>"

.fn "__ct__Q23efx10TChasePos3FP10Vector3<f>UsUsUs", global
/* 803B0350 003AD290  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0354 003AD294  7C 08 02 A6 */	mflr r0
/* 803B0358 003AD298  3D 00 80 4B */	lis r8, __vt__Q23efx5TBase@ha
/* 803B035C 003AD29C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B0360 003AD2A0  38 08 A7 F8 */	addi r0, r8, __vt__Q23efx5TBase@l
/* 803B0364 003AD2A4  3D 00 80 3B */	lis r8, __ct__Q23efx9TChasePosFv@ha
/* 803B0368 003AD2A8  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803B036C 003AD2AC  7C 7B 1B 78 */	mr r27, r3
/* 803B0370 003AD2B0  7C DE 33 78 */	mr r30, r6
/* 803B0374 003AD2B4  7C FF 3B 78 */	mr r31, r7
/* 803B0378 003AD2B8  3C 60 80 4C */	lis r3, "__vt__Q23efx29TSyncGroup3<Q23efx9TChasePos>"@ha
/* 803B037C 003AD2BC  39 08 02 EC */	addi r8, r8, __ct__Q23efx9TChasePosFv@l
/* 803B0380 003AD2C0  7C 9C 23 78 */	mr r28, r4
/* 803B0384 003AD2C4  7C BD 2B 78 */	mr r29, r5
/* 803B0388 003AD2C8  7D 04 43 78 */	mr r4, r8
/* 803B038C 003AD2CC  38 C0 00 14 */	li r6, 0x14
/* 803B0390 003AD2D0  38 E0 00 03 */	li r7, 3
/* 803B0394 003AD2D4  90 1B 00 00 */	stw r0, 0(r27)
/* 803B0398 003AD2D8  38 03 41 34 */	addi r0, r3, "__vt__Q23efx29TSyncGroup3<Q23efx9TChasePos>"@l
/* 803B039C 003AD2DC  3C 60 80 10 */	lis r3, __dt__Q23efx9TChasePosFv@ha
/* 803B03A0 003AD2E0  90 1B 00 00 */	stw r0, 0(r27)
/* 803B03A4 003AD2E4  38 03 12 14 */	addi r0, r3, __dt__Q23efx9TChasePosFv@l
/* 803B03A8 003AD2E8  7C 05 03 78 */	mr r5, r0
/* 803B03AC 003AD2EC  38 7B 00 04 */	addi r3, r27, 4
/* 803B03B0 003AD2F0  4B D1 14 8D */	bl __construct_array
/* 803B03B4 003AD2F4  3C 80 80 4C */	lis r4, __vt__Q23efx10TChasePos3@ha
/* 803B03B8 003AD2F8  7F 63 DB 78 */	mr r3, r27
/* 803B03BC 003AD2FC  38 04 41 50 */	addi r0, r4, __vt__Q23efx10TChasePos3@l
/* 803B03C0 003AD300  90 1B 00 00 */	stw r0, 0(r27)
/* 803B03C4 003AD304  93 9B 00 14 */	stw r28, 0x14(r27)
/* 803B03C8 003AD308  B3 BB 00 10 */	sth r29, 0x10(r27)
/* 803B03CC 003AD30C  93 9B 00 28 */	stw r28, 0x28(r27)
/* 803B03D0 003AD310  B3 DB 00 24 */	sth r30, 0x24(r27)
/* 803B03D4 003AD314  93 9B 00 3C */	stw r28, 0x3c(r27)
/* 803B03D8 003AD318  B3 FB 00 38 */	sth r31, 0x38(r27)
/* 803B03DC 003AD31C  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803B03E0 003AD320  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B03E4 003AD324  7C 08 03 A6 */	mtlr r0
/* 803B03E8 003AD328  38 21 00 20 */	addi r1, r1, 0x20
/* 803B03EC 003AD32C  4E 80 00 20 */	blr 
.endfn "__ct__Q23efx10TChasePos3FP10Vector3<f>UsUsUs"

.fn "__ct__Q23efx10TChasePos4FP10Vector3<f>UsUsUsUs", global
/* 803B03F0 003AD330  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B03F4 003AD334  7C 08 02 A6 */	mflr r0
/* 803B03F8 003AD338  3D 20 80 4B */	lis r9, __vt__Q23efx5TBase@ha
/* 803B03FC 003AD33C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B0400 003AD340  38 09 A7 F8 */	addi r0, r9, __vt__Q23efx5TBase@l
/* 803B0404 003AD344  3D 20 80 3B */	lis r9, __ct__Q23efx9TChasePosFv@ha
/* 803B0408 003AD348  BF 41 00 08 */	stmw r26, 8(r1)
/* 803B040C 003AD34C  7C 7A 1B 78 */	mr r26, r3
/* 803B0410 003AD350  7C DD 33 78 */	mr r29, r6
/* 803B0414 003AD354  7C FE 3B 78 */	mr r30, r7
/* 803B0418 003AD358  3C 60 80 4D */	lis r3, "__vt__Q23efx29TSyncGroup4<Q23efx9TChasePos>"@ha
/* 803B041C 003AD35C  39 29 02 EC */	addi r9, r9, __ct__Q23efx9TChasePosFv@l
/* 803B0420 003AD360  7C 9B 23 78 */	mr r27, r4
/* 803B0424 003AD364  7C BC 2B 78 */	mr r28, r5
/* 803B0428 003AD368  7D 1F 43 78 */	mr r31, r8
/* 803B042C 003AD36C  7D 24 4B 78 */	mr r4, r9
/* 803B0430 003AD370  38 C0 00 14 */	li r6, 0x14
/* 803B0434 003AD374  38 E0 00 04 */	li r7, 4
/* 803B0438 003AD378  90 1A 00 00 */	stw r0, 0(r26)
/* 803B043C 003AD37C  38 03 59 48 */	addi r0, r3, "__vt__Q23efx29TSyncGroup4<Q23efx9TChasePos>"@l
/* 803B0440 003AD380  3C 60 80 10 */	lis r3, __dt__Q23efx9TChasePosFv@ha
/* 803B0444 003AD384  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0448 003AD388  38 03 12 14 */	addi r0, r3, __dt__Q23efx9TChasePosFv@l
/* 803B044C 003AD38C  7C 05 03 78 */	mr r5, r0
/* 803B0450 003AD390  38 7A 00 04 */	addi r3, r26, 4
/* 803B0454 003AD394  4B D1 13 E9 */	bl __construct_array
/* 803B0458 003AD398  3C 80 80 4D */	lis r4, __vt__Q23efx10TChasePos4@ha
/* 803B045C 003AD39C  7F 43 D3 78 */	mr r3, r26
/* 803B0460 003AD3A0  38 04 59 64 */	addi r0, r4, __vt__Q23efx10TChasePos4@l
/* 803B0464 003AD3A4  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0468 003AD3A8  93 7A 00 14 */	stw r27, 0x14(r26)
/* 803B046C 003AD3AC  B3 9A 00 10 */	sth r28, 0x10(r26)
/* 803B0470 003AD3B0  93 7A 00 28 */	stw r27, 0x28(r26)
/* 803B0474 003AD3B4  B3 BA 00 24 */	sth r29, 0x24(r26)
/* 803B0478 003AD3B8  93 7A 00 3C */	stw r27, 0x3c(r26)
/* 803B047C 003AD3BC  B3 DA 00 38 */	sth r30, 0x38(r26)
/* 803B0480 003AD3C0  93 7A 00 50 */	stw r27, 0x50(r26)
/* 803B0484 003AD3C4  B3 FA 00 4C */	sth r31, 0x4c(r26)
/* 803B0488 003AD3C8  BB 41 00 08 */	lmw r26, 8(r1)
/* 803B048C 003AD3CC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B0490 003AD3D0  7C 08 03 A6 */	mtlr r0
/* 803B0494 003AD3D4  38 21 00 20 */	addi r1, r1, 0x20
/* 803B0498 003AD3D8  4E 80 00 20 */	blr 
.endfn "__ct__Q23efx10TChasePos4FP10Vector3<f>UsUsUsUs"

.fn __ct__Q23efx10TChaseMtx2FPA4_fUsUs, global
/* 803B049C 003AD3DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B04A0 003AD3E0  7C 08 02 A6 */	mflr r0
/* 803B04A4 003AD3E4  3C E0 80 4B */	lis r7, __vt__Q23efx5TBase@ha
/* 803B04A8 003AD3E8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B04AC 003AD3EC  38 07 A7 F8 */	addi r0, r7, __vt__Q23efx5TBase@l
/* 803B04B0 003AD3F0  3C E0 80 3B */	lis r7, __ct__Q23efx9TChaseMtxFv@ha
/* 803B04B4 003AD3F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B04B8 003AD3F8  7C DF 33 78 */	mr r31, r6
/* 803B04BC 003AD3FC  38 E7 05 48 */	addi r7, r7, __ct__Q23efx9TChaseMtxFv@l
/* 803B04C0 003AD400  38 C0 00 14 */	li r6, 0x14
/* 803B04C4 003AD404  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B04C8 003AD408  7C BE 2B 78 */	mr r30, r5
/* 803B04CC 003AD40C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B04D0 003AD410  7C 9D 23 78 */	mr r29, r4
/* 803B04D4 003AD414  7C E4 3B 78 */	mr r4, r7
/* 803B04D8 003AD418  38 E0 00 02 */	li r7, 2
/* 803B04DC 003AD41C  93 81 00 10 */	stw r28, 0x10(r1)
/* 803B04E0 003AD420  7C 7C 1B 78 */	mr r28, r3
/* 803B04E4 003AD424  3C 60 80 4B */	lis r3, "__vt__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>"@ha
/* 803B04E8 003AD428  90 1C 00 00 */	stw r0, 0(r28)
/* 803B04EC 003AD42C  38 03 08 2C */	addi r0, r3, "__vt__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>"@l
/* 803B04F0 003AD430  3C 60 80 13 */	lis r3, __dt__Q23efx9TChaseMtxFv@ha
/* 803B04F4 003AD434  90 1C 00 00 */	stw r0, 0(r28)
/* 803B04F8 003AD438  38 03 B6 9C */	addi r0, r3, __dt__Q23efx9TChaseMtxFv@l
/* 803B04FC 003AD43C  38 7C 00 04 */	addi r3, r28, 4
/* 803B0500 003AD440  7C 05 03 78 */	mr r5, r0
/* 803B0504 003AD444  4B D1 13 39 */	bl __construct_array
/* 803B0508 003AD448  3C 80 80 4B */	lis r4, __vt__Q23efx10TChaseMtx2@ha
/* 803B050C 003AD44C  7F 83 E3 78 */	mr r3, r28
/* 803B0510 003AD450  38 04 08 48 */	addi r0, r4, __vt__Q23efx10TChaseMtx2@l
/* 803B0514 003AD454  90 1C 00 00 */	stw r0, 0(r28)
/* 803B0518 003AD458  93 BC 00 14 */	stw r29, 0x14(r28)
/* 803B051C 003AD45C  B3 DC 00 10 */	sth r30, 0x10(r28)
/* 803B0520 003AD460  93 BC 00 28 */	stw r29, 0x28(r28)
/* 803B0524 003AD464  B3 FC 00 24 */	sth r31, 0x24(r28)
/* 803B0528 003AD468  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B052C 003AD46C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B0530 003AD470  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B0534 003AD474  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803B0538 003AD478  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B053C 003AD47C  7C 08 03 A6 */	mtlr r0
/* 803B0540 003AD480  38 21 00 20 */	addi r1, r1, 0x20
/* 803B0544 003AD484  4E 80 00 20 */	blr 
.endfn __ct__Q23efx10TChaseMtx2FPA4_fUsUs

.fn __ct__Q23efx9TChaseMtxFv, weak
/* 803B0548 003AD488  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B054C 003AD48C  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803B0550 003AD490  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B0554 003AD494  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803B0558 003AD498  90 03 00 00 */	stw r0, 0(r3)
/* 803B055C 003AD49C  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803B0560 003AD4A0  39 05 69 8C */	addi r8, r5, __vt__Q23efx5TSync@l
/* 803B0564 003AD4A4  3C 80 80 4E */	lis r4, __vt__Q23efx9TChaseMtx@ha
/* 803B0568 003AD4A8  90 03 00 04 */	stw r0, 4(r3)
/* 803B056C 003AD4AC  38 84 68 A8 */	addi r4, r4, __vt__Q23efx9TChaseMtx@l
/* 803B0570 003AD4B0  38 E8 00 14 */	addi r7, r8, 0x14
/* 803B0574 003AD4B4  38 C0 00 00 */	li r6, 0
/* 803B0578 003AD4B8  91 03 00 00 */	stw r8, 0(r3)
/* 803B057C 003AD4BC  38 A0 02 B2 */	li r5, 0x2b2
/* 803B0580 003AD4C0  38 04 00 14 */	addi r0, r4, 0x14
/* 803B0584 003AD4C4  90 E3 00 04 */	stw r7, 4(r3)
/* 803B0588 003AD4C8  90 C3 00 08 */	stw r6, 8(r3)
/* 803B058C 003AD4CC  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803B0590 003AD4D0  98 C3 00 0E */	stb r6, 0xe(r3)
/* 803B0594 003AD4D4  90 83 00 00 */	stw r4, 0(r3)
/* 803B0598 003AD4D8  90 03 00 04 */	stw r0, 4(r3)
/* 803B059C 003AD4DC  4E 80 00 20 */	blr 
.endfn __ct__Q23efx9TChaseMtxFv

.fn setMtxptr__Q23efx10TChaseMtx2FPA4_f, global
/* 803B05A0 003AD4E0  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B05A4 003AD4E4  90 83 00 28 */	stw r4, 0x28(r3)
/* 803B05A8 003AD4E8  4E 80 00 20 */	blr 
.endfn setMtxptr__Q23efx10TChaseMtx2FPA4_f

.fn __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs, global
/* 803B05AC 003AD4EC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B05B0 003AD4F0  7C 08 02 A6 */	mflr r0
/* 803B05B4 003AD4F4  3D 00 80 4B */	lis r8, __vt__Q23efx5TBase@ha
/* 803B05B8 003AD4F8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B05BC 003AD4FC  38 08 A7 F8 */	addi r0, r8, __vt__Q23efx5TBase@l
/* 803B05C0 003AD500  3D 00 80 3B */	lis r8, __ct__Q23efx9TChaseMtxFv@ha
/* 803B05C4 003AD504  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803B05C8 003AD508  7C 7B 1B 78 */	mr r27, r3
/* 803B05CC 003AD50C  7C DE 33 78 */	mr r30, r6
/* 803B05D0 003AD510  7C FF 3B 78 */	mr r31, r7
/* 803B05D4 003AD514  3C 60 80 4B */	lis r3, "__vt__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>"@ha
/* 803B05D8 003AD518  39 08 05 48 */	addi r8, r8, __ct__Q23efx9TChaseMtxFv@l
/* 803B05DC 003AD51C  7C 9C 23 78 */	mr r28, r4
/* 803B05E0 003AD520  7C BD 2B 78 */	mr r29, r5
/* 803B05E4 003AD524  7D 04 43 78 */	mr r4, r8
/* 803B05E8 003AD528  38 C0 00 14 */	li r6, 0x14
/* 803B05EC 003AD52C  38 E0 00 03 */	li r7, 3
/* 803B05F0 003AD530  90 1B 00 00 */	stw r0, 0(r27)
/* 803B05F4 003AD534  38 03 E7 E8 */	addi r0, r3, "__vt__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>"@l
/* 803B05F8 003AD538  3C 60 80 13 */	lis r3, __dt__Q23efx9TChaseMtxFv@ha
/* 803B05FC 003AD53C  90 1B 00 00 */	stw r0, 0(r27)
/* 803B0600 003AD540  38 03 B6 9C */	addi r0, r3, __dt__Q23efx9TChaseMtxFv@l
/* 803B0604 003AD544  7C 05 03 78 */	mr r5, r0
/* 803B0608 003AD548  38 7B 00 04 */	addi r3, r27, 4
/* 803B060C 003AD54C  4B D1 12 31 */	bl __construct_array
/* 803B0610 003AD550  3C 80 80 4B */	lis r4, __vt__Q23efx10TChaseMtx3@ha
/* 803B0614 003AD554  7F 63 DB 78 */	mr r3, r27
/* 803B0618 003AD558  38 04 E8 04 */	addi r0, r4, __vt__Q23efx10TChaseMtx3@l
/* 803B061C 003AD55C  90 1B 00 00 */	stw r0, 0(r27)
/* 803B0620 003AD560  93 9B 00 14 */	stw r28, 0x14(r27)
/* 803B0624 003AD564  B3 BB 00 10 */	sth r29, 0x10(r27)
/* 803B0628 003AD568  93 9B 00 28 */	stw r28, 0x28(r27)
/* 803B062C 003AD56C  B3 DB 00 24 */	sth r30, 0x24(r27)
/* 803B0630 003AD570  93 9B 00 3C */	stw r28, 0x3c(r27)
/* 803B0634 003AD574  B3 FB 00 38 */	sth r31, 0x38(r27)
/* 803B0638 003AD578  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803B063C 003AD57C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B0640 003AD580  7C 08 03 A6 */	mtlr r0
/* 803B0644 003AD584  38 21 00 20 */	addi r1, r1, 0x20
/* 803B0648 003AD588  4E 80 00 20 */	blr 
.endfn __ct__Q23efx10TChaseMtx3FPA4_fUsUsUs

.fn setMtxptr__Q23efx10TChaseMtx3FPA4_f, global
/* 803B064C 003AD58C  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B0650 003AD590  90 83 00 28 */	stw r4, 0x28(r3)
/* 803B0654 003AD594  90 83 00 3C */	stw r4, 0x3c(r3)
/* 803B0658 003AD598  4E 80 00 20 */	blr 
.endfn setMtxptr__Q23efx10TChaseMtx3FPA4_f

.fn __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs, global
/* 803B065C 003AD59C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0660 003AD5A0  7C 08 02 A6 */	mflr r0
/* 803B0664 003AD5A4  3D 20 80 4B */	lis r9, __vt__Q23efx5TBase@ha
/* 803B0668 003AD5A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B066C 003AD5AC  38 09 A7 F8 */	addi r0, r9, __vt__Q23efx5TBase@l
/* 803B0670 003AD5B0  3D 20 80 3B */	lis r9, __ct__Q23efx9TChaseMtxFv@ha
/* 803B0674 003AD5B4  BF 41 00 08 */	stmw r26, 8(r1)
/* 803B0678 003AD5B8  7C 7A 1B 78 */	mr r26, r3
/* 803B067C 003AD5BC  7C DD 33 78 */	mr r29, r6
/* 803B0680 003AD5C0  7C FE 3B 78 */	mr r30, r7
/* 803B0684 003AD5C4  3C 60 80 4C */	lis r3, "__vt__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>"@ha
/* 803B0688 003AD5C8  39 29 05 48 */	addi r9, r9, __ct__Q23efx9TChaseMtxFv@l
/* 803B068C 003AD5CC  7C 9B 23 78 */	mr r27, r4
/* 803B0690 003AD5D0  7C BC 2B 78 */	mr r28, r5
/* 803B0694 003AD5D4  7D 1F 43 78 */	mr r31, r8
/* 803B0698 003AD5D8  7D 24 4B 78 */	mr r4, r9
/* 803B069C 003AD5DC  38 C0 00 14 */	li r6, 0x14
/* 803B06A0 003AD5E0  38 E0 00 04 */	li r7, 4
/* 803B06A4 003AD5E4  90 1A 00 00 */	stw r0, 0(r26)
/* 803B06A8 003AD5E8  38 03 7F D0 */	addi r0, r3, "__vt__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>"@l
/* 803B06AC 003AD5EC  3C 60 80 13 */	lis r3, __dt__Q23efx9TChaseMtxFv@ha
/* 803B06B0 003AD5F0  90 1A 00 00 */	stw r0, 0(r26)
/* 803B06B4 003AD5F4  38 03 B6 9C */	addi r0, r3, __dt__Q23efx9TChaseMtxFv@l
/* 803B06B8 003AD5F8  7C 05 03 78 */	mr r5, r0
/* 803B06BC 003AD5FC  38 7A 00 04 */	addi r3, r26, 4
/* 803B06C0 003AD600  4B D1 11 7D */	bl __construct_array
/* 803B06C4 003AD604  3C 80 80 4C */	lis r4, __vt__Q23efx10TChaseMtx4@ha
/* 803B06C8 003AD608  7F 43 D3 78 */	mr r3, r26
/* 803B06CC 003AD60C  38 04 7F EC */	addi r0, r4, __vt__Q23efx10TChaseMtx4@l
/* 803B06D0 003AD610  90 1A 00 00 */	stw r0, 0(r26)
/* 803B06D4 003AD614  93 7A 00 14 */	stw r27, 0x14(r26)
/* 803B06D8 003AD618  B3 9A 00 10 */	sth r28, 0x10(r26)
/* 803B06DC 003AD61C  93 7A 00 28 */	stw r27, 0x28(r26)
/* 803B06E0 003AD620  B3 BA 00 24 */	sth r29, 0x24(r26)
/* 803B06E4 003AD624  93 7A 00 3C */	stw r27, 0x3c(r26)
/* 803B06E8 003AD628  B3 DA 00 38 */	sth r30, 0x38(r26)
/* 803B06EC 003AD62C  93 7A 00 50 */	stw r27, 0x50(r26)
/* 803B06F0 003AD630  B3 FA 00 4C */	sth r31, 0x4c(r26)
/* 803B06F4 003AD634  BB 41 00 08 */	lmw r26, 8(r1)
/* 803B06F8 003AD638  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B06FC 003AD63C  7C 08 03 A6 */	mtlr r0
/* 803B0700 003AD640  38 21 00 20 */	addi r1, r1, 0x20
/* 803B0704 003AD644  4E 80 00 20 */	blr 
.endfn __ct__Q23efx10TChaseMtx4FPA4_fUsUsUsUs

.fn setMtxptr__Q23efx10TChaseMtx4FPA4_f, global
/* 803B0708 003AD648  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B070C 003AD64C  90 83 00 28 */	stw r4, 0x28(r3)
/* 803B0710 003AD650  90 83 00 3C */	stw r4, 0x3c(r3)
/* 803B0714 003AD654  90 83 00 50 */	stw r4, 0x50(r3)
/* 803B0718 003AD658  4E 80 00 20 */	blr 
.endfn setMtxptr__Q23efx10TChaseMtx4FPA4_f

.fn __ct__Q23efx10TChaseMtx6FPA4_fUsUsUsUsUsUs, global
/* 803B071C 003AD65C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B0720 003AD660  7C 08 02 A6 */	mflr r0
/* 803B0724 003AD664  3D 60 80 4B */	lis r11, __vt__Q23efx5TBase@ha
/* 803B0728 003AD668  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B072C 003AD66C  38 0B A7 F8 */	addi r0, r11, __vt__Q23efx5TBase@l
/* 803B0730 003AD670  3D 60 80 3B */	lis r11, __ct__Q23efx9TChaseMtxFv@ha
/* 803B0734 003AD674  BF 01 00 10 */	stmw r24, 0x10(r1)
/* 803B0738 003AD678  7C 78 1B 78 */	mr r24, r3
/* 803B073C 003AD67C  7C DB 33 78 */	mr r27, r6
/* 803B0740 003AD680  7C FC 3B 78 */	mr r28, r7
/* 803B0744 003AD684  3C 60 80 4D */	lis r3, "__vt__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>"@ha
/* 803B0748 003AD688  39 6B 05 48 */	addi r11, r11, __ct__Q23efx9TChaseMtxFv@l
/* 803B074C 003AD68C  7C 99 23 78 */	mr r25, r4
/* 803B0750 003AD690  7C BA 2B 78 */	mr r26, r5
/* 803B0754 003AD694  7D 1D 43 78 */	mr r29, r8
/* 803B0758 003AD698  7D 3E 4B 78 */	mr r30, r9
/* 803B075C 003AD69C  7D 5F 53 78 */	mr r31, r10
/* 803B0760 003AD6A0  7D 64 5B 78 */	mr r4, r11
/* 803B0764 003AD6A4  38 C0 00 14 */	li r6, 0x14
/* 803B0768 003AD6A8  38 E0 00 06 */	li r7, 6
/* 803B076C 003AD6AC  90 18 00 00 */	stw r0, 0(r24)
/* 803B0770 003AD6B0  38 03 57 4C */	addi r0, r3, "__vt__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>"@l
/* 803B0774 003AD6B4  3C 60 80 13 */	lis r3, __dt__Q23efx9TChaseMtxFv@ha
/* 803B0778 003AD6B8  90 18 00 00 */	stw r0, 0(r24)
/* 803B077C 003AD6BC  38 03 B6 9C */	addi r0, r3, __dt__Q23efx9TChaseMtxFv@l
/* 803B0780 003AD6C0  7C 05 03 78 */	mr r5, r0
/* 803B0784 003AD6C4  38 78 00 04 */	addi r3, r24, 4
/* 803B0788 003AD6C8  4B D1 10 B5 */	bl __construct_array
/* 803B078C 003AD6CC  3C 80 80 4D */	lis r4, __vt__Q23efx10TChaseMtx6@ha
/* 803B0790 003AD6D0  7F 03 C3 78 */	mr r3, r24
/* 803B0794 003AD6D4  38 04 57 68 */	addi r0, r4, __vt__Q23efx10TChaseMtx6@l
/* 803B0798 003AD6D8  90 18 00 00 */	stw r0, 0(r24)
/* 803B079C 003AD6DC  93 38 00 14 */	stw r25, 0x14(r24)
/* 803B07A0 003AD6E0  B3 58 00 10 */	sth r26, 0x10(r24)
/* 803B07A4 003AD6E4  93 38 00 28 */	stw r25, 0x28(r24)
/* 803B07A8 003AD6E8  B3 78 00 24 */	sth r27, 0x24(r24)
/* 803B07AC 003AD6EC  93 38 00 3C */	stw r25, 0x3c(r24)
/* 803B07B0 003AD6F0  B3 98 00 38 */	sth r28, 0x38(r24)
/* 803B07B4 003AD6F4  93 38 00 50 */	stw r25, 0x50(r24)
/* 803B07B8 003AD6F8  B3 B8 00 4C */	sth r29, 0x4c(r24)
/* 803B07BC 003AD6FC  93 38 00 64 */	stw r25, 0x64(r24)
/* 803B07C0 003AD700  B3 D8 00 60 */	sth r30, 0x60(r24)
/* 803B07C4 003AD704  93 38 00 78 */	stw r25, 0x78(r24)
/* 803B07C8 003AD708  B3 F8 00 74 */	sth r31, 0x74(r24)
/* 803B07CC 003AD70C  BB 01 00 10 */	lmw r24, 0x10(r1)
/* 803B07D0 003AD710  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B07D4 003AD714  7C 08 03 A6 */	mtlr r0
/* 803B07D8 003AD718  38 21 00 30 */	addi r1, r1, 0x30
/* 803B07DC 003AD71C  4E 80 00 20 */	blr 
.endfn __ct__Q23efx10TChaseMtx6FPA4_fUsUsUsUsUsUs

.fn setMtxptr__Q23efx10TChaseMtx6FPA4_f, global
/* 803B07E0 003AD720  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B07E4 003AD724  90 83 00 28 */	stw r4, 0x28(r3)
/* 803B07E8 003AD728  90 83 00 3C */	stw r4, 0x3c(r3)
/* 803B07EC 003AD72C  90 83 00 50 */	stw r4, 0x50(r3)
/* 803B07F0 003AD730  90 83 00 64 */	stw r4, 0x64(r3)
/* 803B07F4 003AD734  90 83 00 78 */	stw r4, 0x78(r3)
/* 803B07F8 003AD738  4E 80 00 20 */	blr 
.endfn setMtxptr__Q23efx10TChaseMtx6FPA4_f

.fn __ct__Q23efx11TChaseMtxT2FPA4_fUsUs, global
/* 803B07FC 003AD73C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0800 003AD740  7C 08 02 A6 */	mflr r0
/* 803B0804 003AD744  3C E0 80 4B */	lis r7, __vt__Q23efx5TBase@ha
/* 803B0808 003AD748  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B080C 003AD74C  38 07 A7 F8 */	addi r0, r7, __vt__Q23efx5TBase@l
/* 803B0810 003AD750  3C E0 80 3B */	lis r7, __ct__Q23efx10TChaseMtxTFv@ha
/* 803B0814 003AD754  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B0818 003AD758  7C DF 33 78 */	mr r31, r6
/* 803B081C 003AD75C  38 E7 08 A8 */	addi r7, r7, __ct__Q23efx10TChaseMtxTFv@l
/* 803B0820 003AD760  38 C0 00 14 */	li r6, 0x14
/* 803B0824 003AD764  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B0828 003AD768  7C BE 2B 78 */	mr r30, r5
/* 803B082C 003AD76C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B0830 003AD770  7C 9D 23 78 */	mr r29, r4
/* 803B0834 003AD774  7C E4 3B 78 */	mr r4, r7
/* 803B0838 003AD778  38 E0 00 02 */	li r7, 2
/* 803B083C 003AD77C  93 81 00 10 */	stw r28, 0x10(r1)
/* 803B0840 003AD780  7C 7C 1B 78 */	mr r28, r3
/* 803B0844 003AD784  3C 60 80 4B */	lis r3, "__vt__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>"@ha
/* 803B0848 003AD788  90 1C 00 00 */	stw r0, 0(r28)
/* 803B084C 003AD78C  38 03 08 64 */	addi r0, r3, "__vt__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>"@l
/* 803B0850 003AD790  3C 60 80 14 */	lis r3, __dt__Q23efx10TChaseMtxTFv@ha
/* 803B0854 003AD794  90 1C 00 00 */	stw r0, 0(r28)
/* 803B0858 003AD798  38 03 FC 00 */	addi r0, r3, __dt__Q23efx10TChaseMtxTFv@l
/* 803B085C 003AD79C  38 7C 00 04 */	addi r3, r28, 4
/* 803B0860 003AD7A0  7C 05 03 78 */	mr r5, r0
/* 803B0864 003AD7A4  4B D1 0F D9 */	bl __construct_array
/* 803B0868 003AD7A8  3C 80 80 4B */	lis r4, __vt__Q23efx11TChaseMtxT2@ha
/* 803B086C 003AD7AC  7F 83 E3 78 */	mr r3, r28
/* 803B0870 003AD7B0  38 04 08 80 */	addi r0, r4, __vt__Q23efx11TChaseMtxT2@l
/* 803B0874 003AD7B4  90 1C 00 00 */	stw r0, 0(r28)
/* 803B0878 003AD7B8  93 BC 00 14 */	stw r29, 0x14(r28)
/* 803B087C 003AD7BC  B3 DC 00 10 */	sth r30, 0x10(r28)
/* 803B0880 003AD7C0  93 BC 00 28 */	stw r29, 0x28(r28)
/* 803B0884 003AD7C4  B3 FC 00 24 */	sth r31, 0x24(r28)
/* 803B0888 003AD7C8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B088C 003AD7CC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B0890 003AD7D0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B0894 003AD7D4  83 81 00 10 */	lwz r28, 0x10(r1)
/* 803B0898 003AD7D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B089C 003AD7DC  7C 08 03 A6 */	mtlr r0
/* 803B08A0 003AD7E0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B08A4 003AD7E4  4E 80 00 20 */	blr 
.endfn __ct__Q23efx11TChaseMtxT2FPA4_fUsUs

.fn __ct__Q23efx10TChaseMtxTFv, weak
/* 803B08A8 003AD7E8  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B08AC 003AD7EC  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803B08B0 003AD7F0  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B08B4 003AD7F4  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803B08B8 003AD7F8  90 03 00 00 */	stw r0, 0(r3)
/* 803B08BC 003AD7FC  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803B08C0 003AD800  39 05 69 8C */	addi r8, r5, __vt__Q23efx5TSync@l
/* 803B08C4 003AD804  3C 80 80 4E */	lis r4, __vt__Q23efx10TChaseMtxT@ha
/* 803B08C8 003AD808  90 03 00 04 */	stw r0, 4(r3)
/* 803B08CC 003AD80C  38 84 68 5C */	addi r4, r4, __vt__Q23efx10TChaseMtxT@l
/* 803B08D0 003AD810  38 E8 00 14 */	addi r7, r8, 0x14
/* 803B08D4 003AD814  38 C0 00 00 */	li r6, 0
/* 803B08D8 003AD818  91 03 00 00 */	stw r8, 0(r3)
/* 803B08DC 003AD81C  38 A0 02 B2 */	li r5, 0x2b2
/* 803B08E0 003AD820  38 04 00 14 */	addi r0, r4, 0x14
/* 803B08E4 003AD824  90 E3 00 04 */	stw r7, 4(r3)
/* 803B08E8 003AD828  90 C3 00 08 */	stw r6, 8(r3)
/* 803B08EC 003AD82C  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803B08F0 003AD830  98 C3 00 0E */	stb r6, 0xe(r3)
/* 803B08F4 003AD834  90 83 00 00 */	stw r4, 0(r3)
/* 803B08F8 003AD838  90 03 00 04 */	stw r0, 4(r3)
/* 803B08FC 003AD83C  4E 80 00 20 */	blr 
.endfn __ct__Q23efx10TChaseMtxTFv

.fn setMtxptr__Q23efx11TChaseMtxT2FPA4_f, global
/* 803B0900 003AD840  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B0904 003AD844  90 83 00 28 */	stw r4, 0x28(r3)
/* 803B0908 003AD848  4E 80 00 20 */	blr 
.endfn setMtxptr__Q23efx11TChaseMtxT2FPA4_f

.fn __ct__Q23efx11TChaseMtxT4FPA4_fUsUsUsUs, global
/* 803B090C 003AD84C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0910 003AD850  7C 08 02 A6 */	mflr r0
/* 803B0914 003AD854  3D 20 80 4B */	lis r9, __vt__Q23efx5TBase@ha
/* 803B0918 003AD858  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B091C 003AD85C  38 09 A7 F8 */	addi r0, r9, __vt__Q23efx5TBase@l
/* 803B0920 003AD860  3D 20 80 3B */	lis r9, __ct__Q23efx10TChaseMtxTFv@ha
/* 803B0924 003AD864  BF 41 00 08 */	stmw r26, 8(r1)
/* 803B0928 003AD868  7C 7A 1B 78 */	mr r26, r3
/* 803B092C 003AD86C  7C DD 33 78 */	mr r29, r6
/* 803B0930 003AD870  7C FE 3B 78 */	mr r30, r7
/* 803B0934 003AD874  3C 60 80 4D */	lis r3, "__vt__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>"@ha
/* 803B0938 003AD878  39 29 08 A8 */	addi r9, r9, __ct__Q23efx10TChaseMtxTFv@l
/* 803B093C 003AD87C  7C 9B 23 78 */	mr r27, r4
/* 803B0940 003AD880  7C BC 2B 78 */	mr r28, r5
/* 803B0944 003AD884  7D 1F 43 78 */	mr r31, r8
/* 803B0948 003AD888  7D 24 4B 78 */	mr r4, r9
/* 803B094C 003AD88C  38 C0 00 14 */	li r6, 0x14
/* 803B0950 003AD890  38 E0 00 04 */	li r7, 4
/* 803B0954 003AD894  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0958 003AD898  38 03 B5 CC */	addi r0, r3, "__vt__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>"@l
/* 803B095C 003AD89C  3C 60 80 14 */	lis r3, __dt__Q23efx10TChaseMtxTFv@ha
/* 803B0960 003AD8A0  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0964 003AD8A4  38 03 FC 00 */	addi r0, r3, __dt__Q23efx10TChaseMtxTFv@l
/* 803B0968 003AD8A8  7C 05 03 78 */	mr r5, r0
/* 803B096C 003AD8AC  38 7A 00 04 */	addi r3, r26, 4
/* 803B0970 003AD8B0  4B D1 0E CD */	bl __construct_array
/* 803B0974 003AD8B4  3C 80 80 4D */	lis r4, __vt__Q23efx11TChaseMtxT4@ha
/* 803B0978 003AD8B8  7F 43 D3 78 */	mr r3, r26
/* 803B097C 003AD8BC  38 04 B5 E8 */	addi r0, r4, __vt__Q23efx11TChaseMtxT4@l
/* 803B0980 003AD8C0  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0984 003AD8C4  93 7A 00 14 */	stw r27, 0x14(r26)
/* 803B0988 003AD8C8  B3 9A 00 10 */	sth r28, 0x10(r26)
/* 803B098C 003AD8CC  93 7A 00 28 */	stw r27, 0x28(r26)
/* 803B0990 003AD8D0  B3 BA 00 24 */	sth r29, 0x24(r26)
/* 803B0994 003AD8D4  93 7A 00 3C */	stw r27, 0x3c(r26)
/* 803B0998 003AD8D8  B3 DA 00 38 */	sth r30, 0x38(r26)
/* 803B099C 003AD8DC  93 7A 00 50 */	stw r27, 0x50(r26)
/* 803B09A0 003AD8E0  B3 FA 00 4C */	sth r31, 0x4c(r26)
/* 803B09A4 003AD8E4  BB 41 00 08 */	lmw r26, 8(r1)
/* 803B09A8 003AD8E8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B09AC 003AD8EC  7C 08 03 A6 */	mtlr r0
/* 803B09B0 003AD8F0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B09B4 003AD8F4  4E 80 00 20 */	blr 
.endfn __ct__Q23efx11TChaseMtxT4FPA4_fUsUsUsUs

.fn setMtxptr__Q23efx11TChaseMtxT4FPA4_f, global
/* 803B09B8 003AD8F8  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B09BC 003AD8FC  90 83 00 28 */	stw r4, 0x28(r3)
/* 803B09C0 003AD900  90 83 00 3C */	stw r4, 0x3c(r3)
/* 803B09C4 003AD904  90 83 00 50 */	stw r4, 0x50(r3)
/* 803B09C8 003AD908  4E 80 00 20 */	blr 
.endfn setMtxptr__Q23efx11TChaseMtxT4FPA4_f

.fn "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs", global
/* 803B09CC 003AD90C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B09D0 003AD910  7C 08 02 A6 */	mflr r0
/* 803B09D4 003AD914  3D 00 80 4B */	lis r8, __vt__Q23efx5TBase@ha
/* 803B09D8 003AD918  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B09DC 003AD91C  38 08 A7 F8 */	addi r0, r8, __vt__Q23efx5TBase@l
/* 803B09E0 003AD920  3D 00 80 3B */	lis r8, __ct__Q23efx13TChasePosYRotFv@ha
/* 803B09E4 003AD924  BF 61 00 0C */	stmw r27, 0xc(r1)
/* 803B09E8 003AD928  7C 7B 1B 78 */	mr r27, r3
/* 803B09EC 003AD92C  7C DE 33 78 */	mr r30, r6
/* 803B09F0 003AD930  7C FF 3B 78 */	mr r31, r7
/* 803B09F4 003AD934  3C 60 80 4B */	lis r3, "__vt__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>"@ha
/* 803B09F8 003AD938  39 08 0A 6C */	addi r8, r8, __ct__Q23efx13TChasePosYRotFv@l
/* 803B09FC 003AD93C  7C 9C 23 78 */	mr r28, r4
/* 803B0A00 003AD940  7C BD 2B 78 */	mr r29, r5
/* 803B0A04 003AD944  7D 04 43 78 */	mr r4, r8
/* 803B0A08 003AD948  38 C0 00 18 */	li r6, 0x18
/* 803B0A0C 003AD94C  38 E0 00 02 */	li r7, 2
/* 803B0A10 003AD950  90 1B 00 00 */	stw r0, 0(r27)
/* 803B0A14 003AD954  38 03 29 B4 */	addi r0, r3, "__vt__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>"@l
/* 803B0A18 003AD958  3C 60 80 17 */	lis r3, __dt__Q23efx13TChasePosYRotFv@ha
/* 803B0A1C 003AD95C  90 1B 00 00 */	stw r0, 0(r27)
/* 803B0A20 003AD960  38 03 5C 44 */	addi r0, r3, __dt__Q23efx13TChasePosYRotFv@l
/* 803B0A24 003AD964  7C 05 03 78 */	mr r5, r0
/* 803B0A28 003AD968  38 7B 00 04 */	addi r3, r27, 4
/* 803B0A2C 003AD96C  4B D1 0E 11 */	bl __construct_array
/* 803B0A30 003AD970  3C 80 80 4B */	lis r4, __vt__Q23efx14TChasePosYRot2@ha
/* 803B0A34 003AD974  7F 63 DB 78 */	mr r3, r27
/* 803B0A38 003AD978  38 04 29 D0 */	addi r0, r4, __vt__Q23efx14TChasePosYRot2@l
/* 803B0A3C 003AD97C  90 1B 00 00 */	stw r0, 0(r27)
/* 803B0A40 003AD980  93 9B 00 14 */	stw r28, 0x14(r27)
/* 803B0A44 003AD984  93 BB 00 18 */	stw r29, 0x18(r27)
/* 803B0A48 003AD988  B3 DB 00 10 */	sth r30, 0x10(r27)
/* 803B0A4C 003AD98C  93 9B 00 2C */	stw r28, 0x2c(r27)
/* 803B0A50 003AD990  93 BB 00 30 */	stw r29, 0x30(r27)
/* 803B0A54 003AD994  B3 FB 00 28 */	sth r31, 0x28(r27)
/* 803B0A58 003AD998  BB 61 00 0C */	lmw r27, 0xc(r1)
/* 803B0A5C 003AD99C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B0A60 003AD9A0  7C 08 03 A6 */	mtlr r0
/* 803B0A64 003AD9A4  38 21 00 20 */	addi r1, r1, 0x20
/* 803B0A68 003AD9A8  4E 80 00 20 */	blr 
.endfn "__ct__Q23efx14TChasePosYRot2FP10Vector3<f>PfUsUs"

.fn __ct__Q23efx13TChasePosYRotFv, weak
/* 803B0A6C 003AD9AC  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B0A70 003AD9B0  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803B0A74 003AD9B4  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B0A78 003AD9B8  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803B0A7C 003AD9BC  90 03 00 00 */	stw r0, 0(r3)
/* 803B0A80 003AD9C0  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803B0A84 003AD9C4  39 05 69 8C */	addi r8, r5, __vt__Q23efx5TSync@l
/* 803B0A88 003AD9C8  3C 80 80 4E */	lis r4, __vt__Q23efx13TChasePosYRot@ha
/* 803B0A8C 003AD9CC  90 03 00 04 */	stw r0, 4(r3)
/* 803B0A90 003AD9D0  38 84 68 F4 */	addi r4, r4, __vt__Q23efx13TChasePosYRot@l
/* 803B0A94 003AD9D4  38 E8 00 14 */	addi r7, r8, 0x14
/* 803B0A98 003AD9D8  38 C0 00 00 */	li r6, 0
/* 803B0A9C 003AD9DC  91 03 00 00 */	stw r8, 0(r3)
/* 803B0AA0 003AD9E0  38 A0 02 B2 */	li r5, 0x2b2
/* 803B0AA4 003AD9E4  38 04 00 14 */	addi r0, r4, 0x14
/* 803B0AA8 003AD9E8  90 E3 00 04 */	stw r7, 4(r3)
/* 803B0AAC 003AD9EC  90 C3 00 08 */	stw r6, 8(r3)
/* 803B0AB0 003AD9F0  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803B0AB4 003AD9F4  98 C3 00 0E */	stb r6, 0xe(r3)
/* 803B0AB8 003AD9F8  90 83 00 00 */	stw r4, 0(r3)
/* 803B0ABC 003AD9FC  90 03 00 04 */	stw r0, 4(r3)
/* 803B0AC0 003ADA00  4E 80 00 20 */	blr 
.endfn __ct__Q23efx13TChasePosYRotFv

.fn "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs", global
/* 803B0AC4 003ADA04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0AC8 003ADA08  7C 08 02 A6 */	mflr r0
/* 803B0ACC 003ADA0C  3D 20 80 4B */	lis r9, __vt__Q23efx5TBase@ha
/* 803B0AD0 003ADA10  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B0AD4 003ADA14  38 09 A7 F8 */	addi r0, r9, __vt__Q23efx5TBase@l
/* 803B0AD8 003ADA18  3D 20 80 3B */	lis r9, __ct__Q23efx13TChasePosYRotFv@ha
/* 803B0ADC 003ADA1C  BF 41 00 08 */	stmw r26, 8(r1)
/* 803B0AE0 003ADA20  7C 7A 1B 78 */	mr r26, r3
/* 803B0AE4 003ADA24  7C DD 33 78 */	mr r29, r6
/* 803B0AE8 003ADA28  7C FE 3B 78 */	mr r30, r7
/* 803B0AEC 003ADA2C  3C 60 80 4D */	lis r3, "__vt__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>"@ha
/* 803B0AF0 003ADA30  39 29 0A 6C */	addi r9, r9, __ct__Q23efx13TChasePosYRotFv@l
/* 803B0AF4 003ADA34  7C 9B 23 78 */	mr r27, r4
/* 803B0AF8 003ADA38  7C BC 2B 78 */	mr r28, r5
/* 803B0AFC 003ADA3C  7D 1F 43 78 */	mr r31, r8
/* 803B0B00 003ADA40  7D 24 4B 78 */	mr r4, r9
/* 803B0B04 003ADA44  38 C0 00 18 */	li r6, 0x18
/* 803B0B08 003ADA48  38 E0 00 03 */	li r7, 3
/* 803B0B0C 003ADA4C  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0B10 003ADA50  38 03 9D 2C */	addi r0, r3, "__vt__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>"@l
/* 803B0B14 003ADA54  3C 60 80 17 */	lis r3, __dt__Q23efx13TChasePosYRotFv@ha
/* 803B0B18 003ADA58  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0B1C 003ADA5C  38 03 5C 44 */	addi r0, r3, __dt__Q23efx13TChasePosYRotFv@l
/* 803B0B20 003ADA60  7C 05 03 78 */	mr r5, r0
/* 803B0B24 003ADA64  38 7A 00 04 */	addi r3, r26, 4
/* 803B0B28 003ADA68  4B D1 0D 15 */	bl __construct_array
/* 803B0B2C 003ADA6C  3C 80 80 4D */	lis r4, __vt__Q23efx14TChasePosYRot3@ha
/* 803B0B30 003ADA70  7F 43 D3 78 */	mr r3, r26
/* 803B0B34 003ADA74  38 04 9D 48 */	addi r0, r4, __vt__Q23efx14TChasePosYRot3@l
/* 803B0B38 003ADA78  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0B3C 003ADA7C  93 7A 00 14 */	stw r27, 0x14(r26)
/* 803B0B40 003ADA80  93 9A 00 18 */	stw r28, 0x18(r26)
/* 803B0B44 003ADA84  B3 BA 00 10 */	sth r29, 0x10(r26)
/* 803B0B48 003ADA88  93 7A 00 2C */	stw r27, 0x2c(r26)
/* 803B0B4C 003ADA8C  93 9A 00 30 */	stw r28, 0x30(r26)
/* 803B0B50 003ADA90  B3 DA 00 28 */	sth r30, 0x28(r26)
/* 803B0B54 003ADA94  93 7A 00 44 */	stw r27, 0x44(r26)
/* 803B0B58 003ADA98  93 9A 00 48 */	stw r28, 0x48(r26)
/* 803B0B5C 003ADA9C  B3 FA 00 40 */	sth r31, 0x40(r26)
/* 803B0B60 003ADAA0  BB 41 00 08 */	lmw r26, 8(r1)
/* 803B0B64 003ADAA4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B0B68 003ADAA8  7C 08 03 A6 */	mtlr r0
/* 803B0B6C 003ADAAC  38 21 00 20 */	addi r1, r1, 0x20
/* 803B0B70 003ADAB0  4E 80 00 20 */	blr 
.endfn "__ct__Q23efx14TChasePosYRot3FP10Vector3<f>PfUsUsUs"

.fn __ct__Q23efx23TChasePosPosLocalYScaleFv, weak
/* 803B0B74 003ADAB4  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B0B78 003ADAB8  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803B0B7C 003ADABC  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B0B80 003ADAC0  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803B0B84 003ADAC4  90 03 00 00 */	stw r0, 0(r3)
/* 803B0B88 003ADAC8  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803B0B8C 003ADACC  39 05 69 8C */	addi r8, r5, __vt__Q23efx5TSync@l
/* 803B0B90 003ADAD0  3C 80 80 4E */	lis r4, __vt__Q23efx23TChasePosPosLocalYScale@ha
/* 803B0B94 003ADAD4  90 03 00 04 */	stw r0, 4(r3)
/* 803B0B98 003ADAD8  38 84 67 78 */	addi r4, r4, __vt__Q23efx23TChasePosPosLocalYScale@l
/* 803B0B9C 003ADADC  38 E8 00 14 */	addi r7, r8, 0x14
/* 803B0BA0 003ADAE0  38 C0 00 00 */	li r6, 0
/* 803B0BA4 003ADAE4  91 03 00 00 */	stw r8, 0(r3)
/* 803B0BA8 003ADAE8  38 A0 02 B2 */	li r5, 0x2b2
/* 803B0BAC 003ADAEC  38 04 00 14 */	addi r0, r4, 0x14
/* 803B0BB0 003ADAF0  90 E3 00 04 */	stw r7, 4(r3)
/* 803B0BB4 003ADAF4  90 C3 00 08 */	stw r6, 8(r3)
/* 803B0BB8 003ADAF8  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803B0BBC 003ADAFC  98 C3 00 0E */	stb r6, 0xe(r3)
/* 803B0BC0 003ADB00  90 83 00 00 */	stw r4, 0(r3)
/* 803B0BC4 003ADB04  90 03 00 04 */	stw r0, 4(r3)
/* 803B0BC8 003ADB08  4E 80 00 20 */	blr 
.endfn __ct__Q23efx23TChasePosPosLocalYScaleFv

.fn "__ct__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>fUsUsUs", global
/* 803B0BCC 003ADB0C  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B0BD0 003ADB10  7C 08 02 A6 */	mflr r0
/* 803B0BD4 003ADB14  3D 20 80 4B */	lis r9, __vt__Q23efx5TBase@ha
/* 803B0BD8 003ADB18  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B0BDC 003ADB1C  38 09 A7 F8 */	addi r0, r9, __vt__Q23efx5TBase@l
/* 803B0BE0 003ADB20  3D 20 80 3B */	lis r9, __ct__Q23efx23TChasePosPosLocalYScaleFv@ha
/* 803B0BE4 003ADB24  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 803B0BE8 003ADB28  FF E0 08 90 */	fmr f31, f1
/* 803B0BEC 003ADB2C  BF 41 00 10 */	stmw r26, 0x10(r1)
/* 803B0BF0 003ADB30  7C 7A 1B 78 */	mr r26, r3
/* 803B0BF4 003ADB34  7C DD 33 78 */	mr r29, r6
/* 803B0BF8 003ADB38  7C FE 3B 78 */	mr r30, r7
/* 803B0BFC 003ADB3C  3C 60 80 4D */	lis r3, "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>"@ha
/* 803B0C00 003ADB40  38 C9 0B 74 */	addi r6, r9, __ct__Q23efx23TChasePosPosLocalYScaleFv@l
/* 803B0C04 003ADB44  7C 9B 23 78 */	mr r27, r4
/* 803B0C08 003ADB48  7C BC 2B 78 */	mr r28, r5
/* 803B0C0C 003ADB4C  7C C4 33 78 */	mr r4, r6
/* 803B0C10 003ADB50  7D 1F 43 78 */	mr r31, r8
/* 803B0C14 003ADB54  38 C0 00 1C */	li r6, 0x1c
/* 803B0C18 003ADB58  38 E0 00 03 */	li r7, 3
/* 803B0C1C 003ADB5C  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0C20 003ADB60  38 03 32 E0 */	addi r0, r3, "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>"@l
/* 803B0C24 003ADB64  3C 60 80 2E */	lis r3, __dt__Q23efx23TChasePosPosLocalYScaleFv@ha
/* 803B0C28 003ADB68  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0C2C 003ADB6C  38 03 00 54 */	addi r0, r3, __dt__Q23efx23TChasePosPosLocalYScaleFv@l
/* 803B0C30 003ADB70  7C 05 03 78 */	mr r5, r0
/* 803B0C34 003ADB74  38 7A 00 04 */	addi r3, r26, 4
/* 803B0C38 003ADB78  4B D1 0C 05 */	bl __construct_array
/* 803B0C3C 003ADB7C  3C 80 80 4D */	lis r4, __vt__Q23efx24TChasePosPosLocalYScale3@ha
/* 803B0C40 003ADB80  7F 43 D3 78 */	mr r3, r26
/* 803B0C44 003ADB84  38 04 32 FC */	addi r0, r4, __vt__Q23efx24TChasePosPosLocalYScale3@l
/* 803B0C48 003ADB88  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0C4C 003ADB8C  93 7A 00 14 */	stw r27, 0x14(r26)
/* 803B0C50 003ADB90  93 9A 00 18 */	stw r28, 0x18(r26)
/* 803B0C54 003ADB94  D3 FA 00 1C */	stfs f31, 0x1c(r26)
/* 803B0C58 003ADB98  B3 BA 00 10 */	sth r29, 0x10(r26)
/* 803B0C5C 003ADB9C  93 7A 00 30 */	stw r27, 0x30(r26)
/* 803B0C60 003ADBA0  93 9A 00 34 */	stw r28, 0x34(r26)
/* 803B0C64 003ADBA4  D3 FA 00 38 */	stfs f31, 0x38(r26)
/* 803B0C68 003ADBA8  B3 DA 00 2C */	sth r30, 0x2c(r26)
/* 803B0C6C 003ADBAC  93 7A 00 4C */	stw r27, 0x4c(r26)
/* 803B0C70 003ADBB0  93 9A 00 50 */	stw r28, 0x50(r26)
/* 803B0C74 003ADBB4  D3 FA 00 54 */	stfs f31, 0x54(r26)
/* 803B0C78 003ADBB8  B3 FA 00 48 */	sth r31, 0x48(r26)
/* 803B0C7C 003ADBBC  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 803B0C80 003ADBC0  BB 41 00 10 */	lmw r26, 0x10(r1)
/* 803B0C84 003ADBC4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B0C88 003ADBC8  7C 08 03 A6 */	mtlr r0
/* 803B0C8C 003ADBCC  38 21 00 30 */	addi r1, r1, 0x30
/* 803B0C90 003ADBD0  4E 80 00 20 */	blr 
.endfn "__ct__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>fUsUsUs"

.fn "setPosptr__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>", global
/* 803B0C94 003ADBD4  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B0C98 003ADBD8  90 A3 00 18 */	stw r5, 0x18(r3)
/* 803B0C9C 003ADBDC  90 83 00 30 */	stw r4, 0x30(r3)
/* 803B0CA0 003ADBE0  90 A3 00 34 */	stw r5, 0x34(r3)
/* 803B0CA4 003ADBE4  90 83 00 4C */	stw r4, 0x4c(r3)
/* 803B0CA8 003ADBE8  90 A3 00 50 */	stw r5, 0x50(r3)
/* 803B0CAC 003ADBEC  4E 80 00 20 */	blr 
.endfn "setPosptr__Q23efx24TChasePosPosLocalYScale3FP10Vector3<f>P10Vector3<f>"

.fn __ct__Q23efx23TChasePosPosLocalZScaleFv, weak
/* 803B0CB0 003ADBF0  3C 80 80 4B */	lis r4, __vt__Q23efx5TBase@ha
/* 803B0CB4 003ADBF4  3C A0 80 4E */	lis r5, __vt__Q23efx5TSync@ha
/* 803B0CB8 003ADBF8  38 04 A7 F8 */	addi r0, r4, __vt__Q23efx5TBase@l
/* 803B0CBC 003ADBFC  3C C0 80 4A */	lis r6, __vt__18JPAEmitterCallBack@ha
/* 803B0CC0 003ADC00  90 03 00 00 */	stw r0, 0(r3)
/* 803B0CC4 003ADC04  38 06 E2 7C */	addi r0, r6, __vt__18JPAEmitterCallBack@l
/* 803B0CC8 003ADC08  39 05 69 8C */	addi r8, r5, __vt__Q23efx5TSync@l
/* 803B0CCC 003ADC0C  3C 80 80 4E */	lis r4, __vt__Q23efx23TChasePosPosLocalZScale@ha
/* 803B0CD0 003ADC10  90 03 00 04 */	stw r0, 4(r3)
/* 803B0CD4 003ADC14  38 84 67 C4 */	addi r4, r4, __vt__Q23efx23TChasePosPosLocalZScale@l
/* 803B0CD8 003ADC18  38 E8 00 14 */	addi r7, r8, 0x14
/* 803B0CDC 003ADC1C  38 C0 00 00 */	li r6, 0
/* 803B0CE0 003ADC20  91 03 00 00 */	stw r8, 0(r3)
/* 803B0CE4 003ADC24  38 A0 02 B2 */	li r5, 0x2b2
/* 803B0CE8 003ADC28  38 04 00 14 */	addi r0, r4, 0x14
/* 803B0CEC 003ADC2C  90 E3 00 04 */	stw r7, 4(r3)
/* 803B0CF0 003ADC30  90 C3 00 08 */	stw r6, 8(r3)
/* 803B0CF4 003ADC34  B0 A3 00 0C */	sth r5, 0xc(r3)
/* 803B0CF8 003ADC38  98 C3 00 0E */	stb r6, 0xe(r3)
/* 803B0CFC 003ADC3C  90 83 00 00 */	stw r4, 0(r3)
/* 803B0D00 003ADC40  90 03 00 04 */	stw r0, 4(r3)
/* 803B0D04 003ADC44  4E 80 00 20 */	blr 
.endfn __ct__Q23efx23TChasePosPosLocalZScaleFv

.fn "__ct__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>fUsUsUs", global
/* 803B0D08 003ADC48  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 803B0D0C 003ADC4C  7C 08 02 A6 */	mflr r0
/* 803B0D10 003ADC50  3D 20 80 4B */	lis r9, __vt__Q23efx5TBase@ha
/* 803B0D14 003ADC54  90 01 00 34 */	stw r0, 0x34(r1)
/* 803B0D18 003ADC58  38 09 A7 F8 */	addi r0, r9, __vt__Q23efx5TBase@l
/* 803B0D1C 003ADC5C  3D 20 80 3B */	lis r9, __ct__Q23efx23TChasePosPosLocalZScaleFv@ha
/* 803B0D20 003ADC60  DB E1 00 28 */	stfd f31, 0x28(r1)
/* 803B0D24 003ADC64  FF E0 08 90 */	fmr f31, f1
/* 803B0D28 003ADC68  BF 41 00 10 */	stmw r26, 0x10(r1)
/* 803B0D2C 003ADC6C  7C 7A 1B 78 */	mr r26, r3
/* 803B0D30 003ADC70  7C DD 33 78 */	mr r29, r6
/* 803B0D34 003ADC74  7C FE 3B 78 */	mr r30, r7
/* 803B0D38 003ADC78  3C 60 80 4D */	lis r3, "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>"@ha
/* 803B0D3C 003ADC7C  38 C9 0C B0 */	addi r6, r9, __ct__Q23efx23TChasePosPosLocalZScaleFv@l
/* 803B0D40 003ADC80  7C 9B 23 78 */	mr r27, r4
/* 803B0D44 003ADC84  7C BC 2B 78 */	mr r28, r5
/* 803B0D48 003ADC88  7C C4 33 78 */	mr r4, r6
/* 803B0D4C 003ADC8C  7D 1F 43 78 */	mr r31, r8
/* 803B0D50 003ADC90  38 C0 00 1C */	li r6, 0x1c
/* 803B0D54 003ADC94  38 E0 00 03 */	li r7, 3
/* 803B0D58 003ADC98  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0D5C 003ADC9C  38 03 58 68 */	addi r0, r3, "__vt__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>"@l
/* 803B0D60 003ADCA0  3C 60 80 2F */	lis r3, __dt__Q23efx23TChasePosPosLocalZScaleFv@ha
/* 803B0D64 003ADCA4  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0D68 003ADCA8  38 03 44 AC */	addi r0, r3, __dt__Q23efx23TChasePosPosLocalZScaleFv@l
/* 803B0D6C 003ADCAC  7C 05 03 78 */	mr r5, r0
/* 803B0D70 003ADCB0  38 7A 00 04 */	addi r3, r26, 4
/* 803B0D74 003ADCB4  4B D1 0A C9 */	bl __construct_array
/* 803B0D78 003ADCB8  3C 80 80 4D */	lis r4, __vt__Q23efx24TChasePosPosLocalZScale3@ha
/* 803B0D7C 003ADCBC  7F 43 D3 78 */	mr r3, r26
/* 803B0D80 003ADCC0  38 04 58 84 */	addi r0, r4, __vt__Q23efx24TChasePosPosLocalZScale3@l
/* 803B0D84 003ADCC4  90 1A 00 00 */	stw r0, 0(r26)
/* 803B0D88 003ADCC8  93 7A 00 14 */	stw r27, 0x14(r26)
/* 803B0D8C 003ADCCC  93 9A 00 18 */	stw r28, 0x18(r26)
/* 803B0D90 003ADCD0  D3 FA 00 1C */	stfs f31, 0x1c(r26)
/* 803B0D94 003ADCD4  B3 BA 00 10 */	sth r29, 0x10(r26)
/* 803B0D98 003ADCD8  93 7A 00 30 */	stw r27, 0x30(r26)
/* 803B0D9C 003ADCDC  93 9A 00 34 */	stw r28, 0x34(r26)
/* 803B0DA0 003ADCE0  D3 FA 00 38 */	stfs f31, 0x38(r26)
/* 803B0DA4 003ADCE4  B3 DA 00 2C */	sth r30, 0x2c(r26)
/* 803B0DA8 003ADCE8  93 7A 00 4C */	stw r27, 0x4c(r26)
/* 803B0DAC 003ADCEC  93 9A 00 50 */	stw r28, 0x50(r26)
/* 803B0DB0 003ADCF0  D3 FA 00 54 */	stfs f31, 0x54(r26)
/* 803B0DB4 003ADCF4  B3 FA 00 48 */	sth r31, 0x48(r26)
/* 803B0DB8 003ADCF8  CB E1 00 28 */	lfd f31, 0x28(r1)
/* 803B0DBC 003ADCFC  BB 41 00 10 */	lmw r26, 0x10(r1)
/* 803B0DC0 003ADD00  80 01 00 34 */	lwz r0, 0x34(r1)
/* 803B0DC4 003ADD04  7C 08 03 A6 */	mtlr r0
/* 803B0DC8 003ADD08  38 21 00 30 */	addi r1, r1, 0x30
/* 803B0DCC 003ADD0C  4E 80 00 20 */	blr 
.endfn "__ct__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>fUsUsUs"

.fn "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>", global
/* 803B0DD0 003ADD10  90 83 00 14 */	stw r4, 0x14(r3)
/* 803B0DD4 003ADD14  90 A3 00 18 */	stw r5, 0x18(r3)
/* 803B0DD8 003ADD18  90 83 00 30 */	stw r4, 0x30(r3)
/* 803B0DDC 003ADD1C  90 A3 00 34 */	stw r5, 0x34(r3)
/* 803B0DE0 003ADD20  90 83 00 4C */	stw r4, 0x4c(r3)
/* 803B0DE4 003ADD24  90 A3 00 50 */	stw r5, 0x50(r3)
/* 803B0DE8 003ADD28  4E 80 00 20 */	blr 
.endfn "setPosptr__Q23efx24TChasePosPosLocalZScale3FP10Vector3<f>P10Vector3<f>"

.fn __dt__Q23efx19TOneEmitterChasePosFv, weak
/* 803B0DEC 003ADD2C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B0DF0 003ADD30  7C 08 02 A6 */	mflr r0
/* 803B0DF4 003ADD34  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B0DF8 003ADD38  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B0DFC 003ADD3C  7C 9F 23 78 */	mr r31, r4
/* 803B0E00 003ADD40  93 C1 00 08 */	stw r30, 8(r1)
/* 803B0E04 003ADD44  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B0E08 003ADD48  41 82 00 54 */	beq .L_803B0E5C
/* 803B0E0C 003ADD4C  3C 60 80 4E */	lis r3, __vt__Q23efx19TOneEmitterChasePos@ha
/* 803B0E10 003ADD50  34 1E 00 08 */	addic. r0, r30, 8
/* 803B0E14 003ADD54  38 63 6A CC */	addi r3, r3, __vt__Q23efx19TOneEmitterChasePos@l
/* 803B0E18 003ADD58  90 7E 00 00 */	stw r3, 0(r30)
/* 803B0E1C 003ADD5C  38 03 00 14 */	addi r0, r3, 0x14
/* 803B0E20 003ADD60  90 1E 00 04 */	stw r0, 4(r30)
/* 803B0E24 003ADD64  41 82 00 1C */	beq .L_803B0E40
/* 803B0E28 003ADD68  3C 80 80 4B */	lis r4, __vt__Q23efx15ContextChasePos@ha
/* 803B0E2C 003ADD6C  38 7E 00 08 */	addi r3, r30, 8
/* 803B0E30 003ADD70  38 04 08 1C */	addi r0, r4, __vt__Q23efx15ContextChasePos@l
/* 803B0E34 003ADD74  38 80 00 00 */	li r4, 0
/* 803B0E38 003ADD78  90 1E 00 08 */	stw r0, 8(r30)
/* 803B0E3C 003ADD7C  48 06 07 4D */	bl __dt__5CNodeFv
.L_803B0E40:
/* 803B0E40 003ADD80  38 7E 00 04 */	addi r3, r30, 4
/* 803B0E44 003ADD84  38 80 00 00 */	li r4, 0
/* 803B0E48 003ADD88  4B CD EE 55 */	bl __dt__18JPAEmitterCallBackFv
/* 803B0E4C 003ADD8C  7F E0 07 35 */	extsh. r0, r31
/* 803B0E50 003ADD90  40 81 00 0C */	ble .L_803B0E5C
/* 803B0E54 003ADD94  7F C3 F3 78 */	mr r3, r30
/* 803B0E58 003ADD98  4B C7 32 5D */	bl __dl__FPv
.L_803B0E5C:
/* 803B0E5C 003ADD9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B0E60 003ADDA0  7F C3 F3 78 */	mr r3, r30
/* 803B0E64 003ADDA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B0E68 003ADDA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B0E6C 003ADDAC  7C 08 03 A6 */	mtlr r0
/* 803B0E70 003ADDB0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B0E74 003ADDB4  4E 80 00 20 */	blr 
.endfn __dt__Q23efx19TOneEmitterChasePosFv

.fn startDemoDrawOff__Q23efx19TOneEmitterChasePosFv, weak
/* 803B0E78 003ADDB8  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803B0E7C 003ADDBC  28 03 00 00 */	cmplwi r3, 0
/* 803B0E80 003ADDC0  4D 82 00 20 */	beqlr 
/* 803B0E84 003ADDC4  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 803B0E88 003ADDC8  60 00 00 04 */	ori r0, r0, 4
/* 803B0E8C 003ADDCC  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 803B0E90 003ADDD0  4E 80 00 20 */	blr 
.endfn startDemoDrawOff__Q23efx19TOneEmitterChasePosFv

.fn endDemoDrawOn__Q23efx19TOneEmitterChasePosFv, weak
/* 803B0E94 003ADDD4  80 63 00 24 */	lwz r3, 0x24(r3)
/* 803B0E98 003ADDD8  28 03 00 00 */	cmplwi r3, 0
/* 803B0E9C 003ADDDC  4D 82 00 20 */	beqlr 
/* 803B0EA0 003ADDE0  80 03 00 F4 */	lwz r0, 0xf4(r3)
/* 803B0EA4 003ADDE4  54 00 07 B8 */	rlwinm r0, r0, 0, 0x1e, 0x1c
/* 803B0EA8 003ADDE8  90 03 00 F4 */	stw r0, 0xf4(r3)
/* 803B0EAC 003ADDEC  4E 80 00 20 */	blr 
.endfn endDemoDrawOn__Q23efx19TOneEmitterChasePosFv

.fn __dt__Q23efx24TCallBack_StaticClippingFv, weak
/* 803B0EB0 003ADDF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B0EB4 003ADDF4  7C 08 02 A6 */	mflr r0
/* 803B0EB8 003ADDF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B0EBC 003ADDFC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B0EC0 003ADE00  7C 9F 23 78 */	mr r31, r4
/* 803B0EC4 003ADE04  93 C1 00 08 */	stw r30, 8(r1)
/* 803B0EC8 003ADE08  7C 7E 1B 79 */	or. r30, r3, r3
/* 803B0ECC 003ADE0C  41 82 00 28 */	beq .L_803B0EF4
/* 803B0ED0 003ADE10  3C A0 80 4E */	lis r5, __vt__Q23efx24TCallBack_StaticClipping@ha
/* 803B0ED4 003ADE14  38 80 00 00 */	li r4, 0
/* 803B0ED8 003ADE18  38 05 6B 4C */	addi r0, r5, __vt__Q23efx24TCallBack_StaticClipping@l
/* 803B0EDC 003ADE1C  90 1E 00 00 */	stw r0, 0(r30)
/* 803B0EE0 003ADE20  4B CD ED BD */	bl __dt__18JPAEmitterCallBackFv
/* 803B0EE4 003ADE24  7F E0 07 35 */	extsh. r0, r31
/* 803B0EE8 003ADE28  40 81 00 0C */	ble .L_803B0EF4
/* 803B0EEC 003ADE2C  7F C3 F3 78 */	mr r3, r30
/* 803B0EF0 003ADE30  4B C7 31 C5 */	bl __dl__FPv
.L_803B0EF4:
/* 803B0EF4 003ADE34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B0EF8 003ADE38  7F C3 F3 78 */	mr r3, r30
/* 803B0EFC 003ADE3C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B0F00 003ADE40  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B0F04 003ADE44  7C 08 03 A6 */	mtlr r0
/* 803B0F08 003ADE48  38 21 00 10 */	addi r1, r1, 0x10
/* 803B0F0C 003ADE4C  4E 80 00 20 */	blr 
.endfn __dt__Q23efx24TCallBack_StaticClippingFv

.fn "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg", weak
/* 803B0F10 003ADE50  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B0F14 003ADE54  7C 08 02 A6 */	mflr r0
/* 803B0F18 003ADE58  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B0F1C 003ADE5C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B0F20 003ADE60  7C 7F 1B 78 */	mr r31, r3
/* 803B0F24 003ADE64  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B0F28 003ADE68  3B C0 00 00 */	li r30, 0
/* 803B0F2C 003ADE6C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B0F30 003ADE70  7C 9D 23 78 */	mr r29, r4
.L_803B0F34:
/* 803B0F34 003ADE74  38 7F 00 04 */	addi r3, r31, 4
/* 803B0F38 003ADE78  7F A4 EB 78 */	mr r4, r29
/* 803B0F3C 003ADE7C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B0F40 003ADE80  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B0F44 003ADE84  7D 89 03 A6 */	mtctr r12
/* 803B0F48 003ADE88  4E 80 04 21 */	bctrl 
/* 803B0F4C 003ADE8C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B0F50 003ADE90  40 82 00 0C */	bne .L_803B0F5C
/* 803B0F54 003ADE94  38 60 00 00 */	li r3, 0
/* 803B0F58 003ADE98  48 00 00 18 */	b .L_803B0F70
.L_803B0F5C:
/* 803B0F5C 003ADE9C  3B DE 00 01 */	addi r30, r30, 1
/* 803B0F60 003ADEA0  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B0F64 003ADEA4  28 1E 00 06 */	cmplwi r30, 6
/* 803B0F68 003ADEA8  41 80 FF CC */	blt .L_803B0F34
/* 803B0F6C 003ADEAC  38 60 00 01 */	li r3, 1
.L_803B0F70:
/* 803B0F70 003ADEB0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B0F74 003ADEB4  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B0F78 003ADEB8  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B0F7C 003ADEBC  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B0F80 003ADEC0  7C 08 03 A6 */	mtlr r0
/* 803B0F84 003ADEC4  38 21 00 20 */	addi r1, r1, 0x20
/* 803B0F88 003ADEC8  4E 80 00 20 */	blr 
.endfn "create__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>FPQ23efx3Arg"

.fn "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv", weak
/* 803B0F8C 003ADECC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B0F90 003ADED0  7C 08 02 A6 */	mflr r0
/* 803B0F94 003ADED4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B0F98 003ADED8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B0F9C 003ADEDC  7C 7F 1B 78 */	mr r31, r3
/* 803B0FA0 003ADEE0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B0FA4 003ADEE4  3B C0 00 00 */	li r30, 0
.L_803B0FA8:
/* 803B0FA8 003ADEE8  38 7F 00 04 */	addi r3, r31, 4
/* 803B0FAC 003ADEEC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B0FB0 003ADEF0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B0FB4 003ADEF4  7D 89 03 A6 */	mtctr r12
/* 803B0FB8 003ADEF8  4E 80 04 21 */	bctrl 
/* 803B0FBC 003ADEFC  3B DE 00 01 */	addi r30, r30, 1
/* 803B0FC0 003ADF00  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B0FC4 003ADF04  28 1E 00 06 */	cmplwi r30, 6
/* 803B0FC8 003ADF08  41 80 FF E0 */	blt .L_803B0FA8
/* 803B0FCC 003ADF0C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B0FD0 003ADF10  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B0FD4 003ADF14  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B0FD8 003ADF18  7C 08 03 A6 */	mtlr r0
/* 803B0FDC 003ADF1C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B0FE0 003ADF20  4E 80 00 20 */	blr 
.endfn "fade__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"

.fn "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv", weak
/* 803B0FE4 003ADF24  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B0FE8 003ADF28  7C 08 02 A6 */	mflr r0
/* 803B0FEC 003ADF2C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B0FF0 003ADF30  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B0FF4 003ADF34  7C 7F 1B 78 */	mr r31, r3
/* 803B0FF8 003ADF38  93 C1 00 08 */	stw r30, 8(r1)
/* 803B0FFC 003ADF3C  3B C0 00 00 */	li r30, 0
.L_803B1000:
/* 803B1000 003ADF40  38 7F 00 04 */	addi r3, r31, 4
/* 803B1004 003ADF44  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1008 003ADF48  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B100C 003ADF4C  7D 89 03 A6 */	mtctr r12
/* 803B1010 003ADF50  4E 80 04 21 */	bctrl 
/* 803B1014 003ADF54  3B DE 00 01 */	addi r30, r30, 1
/* 803B1018 003ADF58  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B101C 003ADF5C  28 1E 00 06 */	cmplwi r30, 6
/* 803B1020 003ADF60  41 80 FF E0 */	blt .L_803B1000
/* 803B1024 003ADF64  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1028 003ADF68  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B102C 003ADF6C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1030 003ADF70  7C 08 03 A6 */	mtlr r0
/* 803B1034 003ADF74  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1038 003ADF78  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"

.fn "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv", weak
/* 803B103C 003ADF7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1040 003ADF80  7C 08 02 A6 */	mflr r0
/* 803B1044 003ADF84  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1048 003ADF88  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B104C 003ADF8C  7C 7F 1B 78 */	mr r31, r3
/* 803B1050 003ADF90  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1054 003ADF94  3B C0 00 00 */	li r30, 0
.L_803B1058:
/* 803B1058 003ADF98  38 7F 00 04 */	addi r3, r31, 4
/* 803B105C 003ADF9C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1060 003ADFA0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B1064 003ADFA4  7D 89 03 A6 */	mtctr r12
/* 803B1068 003ADFA8  4E 80 04 21 */	bctrl 
/* 803B106C 003ADFAC  3B DE 00 01 */	addi r30, r30, 1
/* 803B1070 003ADFB0  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1074 003ADFB4  28 1E 00 06 */	cmplwi r30, 6
/* 803B1078 003ADFB8  41 80 FF E0 */	blt .L_803B1058
/* 803B107C 003ADFBC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1080 003ADFC0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1084 003ADFC4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1088 003ADFC8  7C 08 03 A6 */	mtlr r0
/* 803B108C 003ADFCC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1090 003ADFD0  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"

.fn "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv", weak
/* 803B1094 003ADFD4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1098 003ADFD8  7C 08 02 A6 */	mflr r0
/* 803B109C 003ADFDC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B10A0 003ADFE0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B10A4 003ADFE4  7C 7F 1B 78 */	mr r31, r3
/* 803B10A8 003ADFE8  93 C1 00 08 */	stw r30, 8(r1)
/* 803B10AC 003ADFEC  3B C0 00 00 */	li r30, 0
.L_803B10B0:
/* 803B10B0 003ADFF0  38 7F 00 04 */	addi r3, r31, 4
/* 803B10B4 003ADFF4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B10B8 003ADFF8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B10BC 003ADFFC  7D 89 03 A6 */	mtctr r12
/* 803B10C0 003AE000  4E 80 04 21 */	bctrl 
/* 803B10C4 003AE004  3B DE 00 01 */	addi r30, r30, 1
/* 803B10C8 003AE008  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B10CC 003AE00C  28 1E 00 06 */	cmplwi r30, 6
/* 803B10D0 003AE010  41 80 FF E0 */	blt .L_803B10B0
/* 803B10D4 003AE014  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B10D8 003AE018  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B10DC 003AE01C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B10E0 003AE020  7C 08 03 A6 */	mtlr r0
/* 803B10E4 003AE024  38 21 00 10 */	addi r1, r1, 0x10
/* 803B10E8 003AE028  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx29TSyncGroup6<Q23efx9TChaseMtx>Fv"

.fn "create__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>FPQ23efx3Arg", weak
/* 803B10EC 003AE02C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B10F0 003AE030  7C 08 02 A6 */	mflr r0
/* 803B10F4 003AE034  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B10F8 003AE038  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B10FC 003AE03C  7C 7F 1B 78 */	mr r31, r3
/* 803B1100 003AE040  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B1104 003AE044  3B C0 00 00 */	li r30, 0
/* 803B1108 003AE048  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B110C 003AE04C  7C 9D 23 78 */	mr r29, r4
.L_803B1110:
/* 803B1110 003AE050  38 7F 00 04 */	addi r3, r31, 4
/* 803B1114 003AE054  7F A4 EB 78 */	mr r4, r29
/* 803B1118 003AE058  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B111C 003AE05C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B1120 003AE060  7D 89 03 A6 */	mtctr r12
/* 803B1124 003AE064  4E 80 04 21 */	bctrl 
/* 803B1128 003AE068  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B112C 003AE06C  40 82 00 0C */	bne .L_803B1138
/* 803B1130 003AE070  38 60 00 00 */	li r3, 0
/* 803B1134 003AE074  48 00 00 18 */	b .L_803B114C
.L_803B1138:
/* 803B1138 003AE078  3B DE 00 01 */	addi r30, r30, 1
/* 803B113C 003AE07C  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1140 003AE080  28 1E 00 04 */	cmplwi r30, 4
/* 803B1144 003AE084  41 80 FF CC */	blt .L_803B1110
/* 803B1148 003AE088  38 60 00 01 */	li r3, 1
.L_803B114C:
/* 803B114C 003AE08C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B1150 003AE090  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B1154 003AE094  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B1158 003AE098  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B115C 003AE09C  7C 08 03 A6 */	mtlr r0
/* 803B1160 003AE0A0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B1164 003AE0A4  4E 80 00 20 */	blr 
.endfn "create__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>FPQ23efx3Arg"

.fn "fade__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv", weak
/* 803B1168 003AE0A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B116C 003AE0AC  7C 08 02 A6 */	mflr r0
/* 803B1170 003AE0B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1174 003AE0B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1178 003AE0B8  7C 7F 1B 78 */	mr r31, r3
/* 803B117C 003AE0BC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1180 003AE0C0  3B C0 00 00 */	li r30, 0
.L_803B1184:
/* 803B1184 003AE0C4  38 7F 00 04 */	addi r3, r31, 4
/* 803B1188 003AE0C8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B118C 003AE0CC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B1190 003AE0D0  7D 89 03 A6 */	mtctr r12
/* 803B1194 003AE0D4  4E 80 04 21 */	bctrl 
/* 803B1198 003AE0D8  3B DE 00 01 */	addi r30, r30, 1
/* 803B119C 003AE0DC  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B11A0 003AE0E0  28 1E 00 04 */	cmplwi r30, 4
/* 803B11A4 003AE0E4  41 80 FF E0 */	blt .L_803B1184
/* 803B11A8 003AE0E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B11AC 003AE0EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B11B0 003AE0F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B11B4 003AE0F4  7C 08 03 A6 */	mtlr r0
/* 803B11B8 003AE0F8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B11BC 003AE0FC  4E 80 00 20 */	blr 
.endfn "fade__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"

.fn "forceKill__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv", weak
/* 803B11C0 003AE100  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B11C4 003AE104  7C 08 02 A6 */	mflr r0
/* 803B11C8 003AE108  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B11CC 003AE10C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B11D0 003AE110  7C 7F 1B 78 */	mr r31, r3
/* 803B11D4 003AE114  93 C1 00 08 */	stw r30, 8(r1)
/* 803B11D8 003AE118  3B C0 00 00 */	li r30, 0
.L_803B11DC:
/* 803B11DC 003AE11C  38 7F 00 04 */	addi r3, r31, 4
/* 803B11E0 003AE120  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B11E4 003AE124  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B11E8 003AE128  7D 89 03 A6 */	mtctr r12
/* 803B11EC 003AE12C  4E 80 04 21 */	bctrl 
/* 803B11F0 003AE130  3B DE 00 01 */	addi r30, r30, 1
/* 803B11F4 003AE134  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B11F8 003AE138  28 1E 00 04 */	cmplwi r30, 4
/* 803B11FC 003AE13C  41 80 FF E0 */	blt .L_803B11DC
/* 803B1200 003AE140  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1204 003AE144  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1208 003AE148  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B120C 003AE14C  7C 08 03 A6 */	mtlr r0
/* 803B1210 003AE150  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1214 003AE154  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"

.fn "startDemoDrawOff__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv", weak
/* 803B1218 003AE158  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B121C 003AE15C  7C 08 02 A6 */	mflr r0
/* 803B1220 003AE160  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1224 003AE164  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1228 003AE168  7C 7F 1B 78 */	mr r31, r3
/* 803B122C 003AE16C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1230 003AE170  3B C0 00 00 */	li r30, 0
.L_803B1234:
/* 803B1234 003AE174  38 7F 00 04 */	addi r3, r31, 4
/* 803B1238 003AE178  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B123C 003AE17C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B1240 003AE180  7D 89 03 A6 */	mtctr r12
/* 803B1244 003AE184  4E 80 04 21 */	bctrl 
/* 803B1248 003AE188  3B DE 00 01 */	addi r30, r30, 1
/* 803B124C 003AE18C  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1250 003AE190  28 1E 00 04 */	cmplwi r30, 4
/* 803B1254 003AE194  41 80 FF E0 */	blt .L_803B1234
/* 803B1258 003AE198  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B125C 003AE19C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1260 003AE1A0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1264 003AE1A4  7C 08 03 A6 */	mtlr r0
/* 803B1268 003AE1A8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B126C 003AE1AC  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"

.fn "endDemoDrawOn__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv", weak
/* 803B1270 003AE1B0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1274 003AE1B4  7C 08 02 A6 */	mflr r0
/* 803B1278 003AE1B8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B127C 003AE1BC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1280 003AE1C0  7C 7F 1B 78 */	mr r31, r3
/* 803B1284 003AE1C4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1288 003AE1C8  3B C0 00 00 */	li r30, 0
.L_803B128C:
/* 803B128C 003AE1CC  38 7F 00 04 */	addi r3, r31, 4
/* 803B1290 003AE1D0  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1294 003AE1D4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B1298 003AE1D8  7D 89 03 A6 */	mtctr r12
/* 803B129C 003AE1DC  4E 80 04 21 */	bctrl 
/* 803B12A0 003AE1E0  3B DE 00 01 */	addi r30, r30, 1
/* 803B12A4 003AE1E4  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B12A8 003AE1E8  28 1E 00 04 */	cmplwi r30, 4
/* 803B12AC 003AE1EC  41 80 FF E0 */	blt .L_803B128C
/* 803B12B0 003AE1F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B12B4 003AE1F4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B12B8 003AE1F8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B12BC 003AE1FC  7C 08 03 A6 */	mtlr r0
/* 803B12C0 003AE200  38 21 00 10 */	addi r1, r1, 0x10
/* 803B12C4 003AE204  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx31TSyncGroup4<Q23efx10TChaseMtxT>Fv"

.fn "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg", weak
/* 803B12C8 003AE208  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B12CC 003AE20C  7C 08 02 A6 */	mflr r0
/* 803B12D0 003AE210  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B12D4 003AE214  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B12D8 003AE218  7C 7F 1B 78 */	mr r31, r3
/* 803B12DC 003AE21C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B12E0 003AE220  3B C0 00 00 */	li r30, 0
/* 803B12E4 003AE224  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B12E8 003AE228  7C 9D 23 78 */	mr r29, r4
.L_803B12EC:
/* 803B12EC 003AE22C  38 7F 00 04 */	addi r3, r31, 4
/* 803B12F0 003AE230  7F A4 EB 78 */	mr r4, r29
/* 803B12F4 003AE234  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B12F8 003AE238  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B12FC 003AE23C  7D 89 03 A6 */	mtctr r12
/* 803B1300 003AE240  4E 80 04 21 */	bctrl 
/* 803B1304 003AE244  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B1308 003AE248  40 82 00 0C */	bne .L_803B1314
/* 803B130C 003AE24C  38 60 00 00 */	li r3, 0
/* 803B1310 003AE250  48 00 00 18 */	b .L_803B1328
.L_803B1314:
/* 803B1314 003AE254  3B DE 00 01 */	addi r30, r30, 1
/* 803B1318 003AE258  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B131C 003AE25C  28 1E 00 04 */	cmplwi r30, 4
/* 803B1320 003AE260  41 80 FF CC */	blt .L_803B12EC
/* 803B1324 003AE264  38 60 00 01 */	li r3, 1
.L_803B1328:
/* 803B1328 003AE268  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B132C 003AE26C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B1330 003AE270  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B1334 003AE274  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B1338 003AE278  7C 08 03 A6 */	mtlr r0
/* 803B133C 003AE27C  38 21 00 20 */	addi r1, r1, 0x20
/* 803B1340 003AE280  4E 80 00 20 */	blr 
.endfn "create__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>FPQ23efx3Arg"

.fn "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv", weak
/* 803B1344 003AE284  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1348 003AE288  7C 08 02 A6 */	mflr r0
/* 803B134C 003AE28C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1350 003AE290  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1354 003AE294  7C 7F 1B 78 */	mr r31, r3
/* 803B1358 003AE298  93 C1 00 08 */	stw r30, 8(r1)
/* 803B135C 003AE29C  3B C0 00 00 */	li r30, 0
.L_803B1360:
/* 803B1360 003AE2A0  38 7F 00 04 */	addi r3, r31, 4
/* 803B1364 003AE2A4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1368 003AE2A8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B136C 003AE2AC  7D 89 03 A6 */	mtctr r12
/* 803B1370 003AE2B0  4E 80 04 21 */	bctrl 
/* 803B1374 003AE2B4  3B DE 00 01 */	addi r30, r30, 1
/* 803B1378 003AE2B8  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B137C 003AE2BC  28 1E 00 04 */	cmplwi r30, 4
/* 803B1380 003AE2C0  41 80 FF E0 */	blt .L_803B1360
/* 803B1384 003AE2C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1388 003AE2C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B138C 003AE2CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1390 003AE2D0  7C 08 03 A6 */	mtlr r0
/* 803B1394 003AE2D4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1398 003AE2D8  4E 80 00 20 */	blr 
.endfn "fade__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"

.fn "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv", weak
/* 803B139C 003AE2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B13A0 003AE2E0  7C 08 02 A6 */	mflr r0
/* 803B13A4 003AE2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B13A8 003AE2E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B13AC 003AE2EC  7C 7F 1B 78 */	mr r31, r3
/* 803B13B0 003AE2F0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B13B4 003AE2F4  3B C0 00 00 */	li r30, 0
.L_803B13B8:
/* 803B13B8 003AE2F8  38 7F 00 04 */	addi r3, r31, 4
/* 803B13BC 003AE2FC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B13C0 003AE300  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B13C4 003AE304  7D 89 03 A6 */	mtctr r12
/* 803B13C8 003AE308  4E 80 04 21 */	bctrl 
/* 803B13CC 003AE30C  3B DE 00 01 */	addi r30, r30, 1
/* 803B13D0 003AE310  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B13D4 003AE314  28 1E 00 04 */	cmplwi r30, 4
/* 803B13D8 003AE318  41 80 FF E0 */	blt .L_803B13B8
/* 803B13DC 003AE31C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B13E0 003AE320  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B13E4 003AE324  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B13E8 003AE328  7C 08 03 A6 */	mtlr r0
/* 803B13EC 003AE32C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B13F0 003AE330  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"

.fn "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv", weak
/* 803B13F4 003AE334  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B13F8 003AE338  7C 08 02 A6 */	mflr r0
/* 803B13FC 003AE33C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1400 003AE340  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1404 003AE344  7C 7F 1B 78 */	mr r31, r3
/* 803B1408 003AE348  93 C1 00 08 */	stw r30, 8(r1)
/* 803B140C 003AE34C  3B C0 00 00 */	li r30, 0
.L_803B1410:
/* 803B1410 003AE350  38 7F 00 04 */	addi r3, r31, 4
/* 803B1414 003AE354  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1418 003AE358  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B141C 003AE35C  7D 89 03 A6 */	mtctr r12
/* 803B1420 003AE360  4E 80 04 21 */	bctrl 
/* 803B1424 003AE364  3B DE 00 01 */	addi r30, r30, 1
/* 803B1428 003AE368  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B142C 003AE36C  28 1E 00 04 */	cmplwi r30, 4
/* 803B1430 003AE370  41 80 FF E0 */	blt .L_803B1410
/* 803B1434 003AE374  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1438 003AE378  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B143C 003AE37C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1440 003AE380  7C 08 03 A6 */	mtlr r0
/* 803B1444 003AE384  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1448 003AE388  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"

.fn "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv", weak
/* 803B144C 003AE38C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1450 003AE390  7C 08 02 A6 */	mflr r0
/* 803B1454 003AE394  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1458 003AE398  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B145C 003AE39C  7C 7F 1B 78 */	mr r31, r3
/* 803B1460 003AE3A0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1464 003AE3A4  3B C0 00 00 */	li r30, 0
.L_803B1468:
/* 803B1468 003AE3A8  38 7F 00 04 */	addi r3, r31, 4
/* 803B146C 003AE3AC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1470 003AE3B0  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B1474 003AE3B4  7D 89 03 A6 */	mtctr r12
/* 803B1478 003AE3B8  4E 80 04 21 */	bctrl 
/* 803B147C 003AE3BC  3B DE 00 01 */	addi r30, r30, 1
/* 803B1480 003AE3C0  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1484 003AE3C4  28 1E 00 04 */	cmplwi r30, 4
/* 803B1488 003AE3C8  41 80 FF E0 */	blt .L_803B1468
/* 803B148C 003AE3CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1490 003AE3D0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1494 003AE3D4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1498 003AE3D8  7C 08 03 A6 */	mtlr r0
/* 803B149C 003AE3DC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B14A0 003AE3E0  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChaseMtx>Fv"

.fn "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg", weak
/* 803B14A4 003AE3E4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B14A8 003AE3E8  7C 08 02 A6 */	mflr r0
/* 803B14AC 003AE3EC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B14B0 003AE3F0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B14B4 003AE3F4  7C 7F 1B 78 */	mr r31, r3
/* 803B14B8 003AE3F8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B14BC 003AE3FC  3B C0 00 00 */	li r30, 0
/* 803B14C0 003AE400  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B14C4 003AE404  7C 9D 23 78 */	mr r29, r4
.L_803B14C8:
/* 803B14C8 003AE408  38 7F 00 04 */	addi r3, r31, 4
/* 803B14CC 003AE40C  7F A4 EB 78 */	mr r4, r29
/* 803B14D0 003AE410  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B14D4 003AE414  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B14D8 003AE418  7D 89 03 A6 */	mtctr r12
/* 803B14DC 003AE41C  4E 80 04 21 */	bctrl 
/* 803B14E0 003AE420  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B14E4 003AE424  40 82 00 0C */	bne .L_803B14F0
/* 803B14E8 003AE428  38 60 00 00 */	li r3, 0
/* 803B14EC 003AE42C  48 00 00 18 */	b .L_803B1504
.L_803B14F0:
/* 803B14F0 003AE430  3B DE 00 01 */	addi r30, r30, 1
/* 803B14F4 003AE434  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B14F8 003AE438  28 1E 00 04 */	cmplwi r30, 4
/* 803B14FC 003AE43C  41 80 FF CC */	blt .L_803B14C8
/* 803B1500 003AE440  38 60 00 01 */	li r3, 1
.L_803B1504:
/* 803B1504 003AE444  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B1508 003AE448  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B150C 003AE44C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B1510 003AE450  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B1514 003AE454  7C 08 03 A6 */	mtlr r0
/* 803B1518 003AE458  38 21 00 20 */	addi r1, r1, 0x20
/* 803B151C 003AE45C  4E 80 00 20 */	blr 
.endfn "create__Q23efx29TSyncGroup4<Q23efx9TChasePos>FPQ23efx3Arg"

.fn "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv", weak
/* 803B1520 003AE460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1524 003AE464  7C 08 02 A6 */	mflr r0
/* 803B1528 003AE468  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B152C 003AE46C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1530 003AE470  7C 7F 1B 78 */	mr r31, r3
/* 803B1534 003AE474  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1538 003AE478  3B C0 00 00 */	li r30, 0
.L_803B153C:
/* 803B153C 003AE47C  38 7F 00 04 */	addi r3, r31, 4
/* 803B1540 003AE480  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1544 003AE484  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B1548 003AE488  7D 89 03 A6 */	mtctr r12
/* 803B154C 003AE48C  4E 80 04 21 */	bctrl 
/* 803B1550 003AE490  3B DE 00 01 */	addi r30, r30, 1
/* 803B1554 003AE494  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1558 003AE498  28 1E 00 04 */	cmplwi r30, 4
/* 803B155C 003AE49C  41 80 FF E0 */	blt .L_803B153C
/* 803B1560 003AE4A0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1564 003AE4A4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1568 003AE4A8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B156C 003AE4AC  7C 08 03 A6 */	mtlr r0
/* 803B1570 003AE4B0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1574 003AE4B4  4E 80 00 20 */	blr 
.endfn "fade__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"

.fn "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv", weak
/* 803B1578 003AE4B8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B157C 003AE4BC  7C 08 02 A6 */	mflr r0
/* 803B1580 003AE4C0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1584 003AE4C4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1588 003AE4C8  7C 7F 1B 78 */	mr r31, r3
/* 803B158C 003AE4CC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1590 003AE4D0  3B C0 00 00 */	li r30, 0
.L_803B1594:
/* 803B1594 003AE4D4  38 7F 00 04 */	addi r3, r31, 4
/* 803B1598 003AE4D8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B159C 003AE4DC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B15A0 003AE4E0  7D 89 03 A6 */	mtctr r12
/* 803B15A4 003AE4E4  4E 80 04 21 */	bctrl 
/* 803B15A8 003AE4E8  3B DE 00 01 */	addi r30, r30, 1
/* 803B15AC 003AE4EC  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B15B0 003AE4F0  28 1E 00 04 */	cmplwi r30, 4
/* 803B15B4 003AE4F4  41 80 FF E0 */	blt .L_803B1594
/* 803B15B8 003AE4F8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B15BC 003AE4FC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B15C0 003AE500  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B15C4 003AE504  7C 08 03 A6 */	mtlr r0
/* 803B15C8 003AE508  38 21 00 10 */	addi r1, r1, 0x10
/* 803B15CC 003AE50C  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"

.fn "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv", weak
/* 803B15D0 003AE510  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B15D4 003AE514  7C 08 02 A6 */	mflr r0
/* 803B15D8 003AE518  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B15DC 003AE51C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B15E0 003AE520  7C 7F 1B 78 */	mr r31, r3
/* 803B15E4 003AE524  93 C1 00 08 */	stw r30, 8(r1)
/* 803B15E8 003AE528  3B C0 00 00 */	li r30, 0
.L_803B15EC:
/* 803B15EC 003AE52C  38 7F 00 04 */	addi r3, r31, 4
/* 803B15F0 003AE530  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B15F4 003AE534  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B15F8 003AE538  7D 89 03 A6 */	mtctr r12
/* 803B15FC 003AE53C  4E 80 04 21 */	bctrl 
/* 803B1600 003AE540  3B DE 00 01 */	addi r30, r30, 1
/* 803B1604 003AE544  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1608 003AE548  28 1E 00 04 */	cmplwi r30, 4
/* 803B160C 003AE54C  41 80 FF E0 */	blt .L_803B15EC
/* 803B1610 003AE550  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1614 003AE554  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1618 003AE558  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B161C 003AE55C  7C 08 03 A6 */	mtlr r0
/* 803B1620 003AE560  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1624 003AE564  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"

.fn "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv", weak
/* 803B1628 003AE568  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B162C 003AE56C  7C 08 02 A6 */	mflr r0
/* 803B1630 003AE570  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1634 003AE574  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1638 003AE578  7C 7F 1B 78 */	mr r31, r3
/* 803B163C 003AE57C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1640 003AE580  3B C0 00 00 */	li r30, 0
.L_803B1644:
/* 803B1644 003AE584  38 7F 00 04 */	addi r3, r31, 4
/* 803B1648 003AE588  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B164C 003AE58C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B1650 003AE590  7D 89 03 A6 */	mtctr r12
/* 803B1654 003AE594  4E 80 04 21 */	bctrl 
/* 803B1658 003AE598  3B DE 00 01 */	addi r30, r30, 1
/* 803B165C 003AE59C  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1660 003AE5A0  28 1E 00 04 */	cmplwi r30, 4
/* 803B1664 003AE5A4  41 80 FF E0 */	blt .L_803B1644
/* 803B1668 003AE5A8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B166C 003AE5AC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1670 003AE5B0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1674 003AE5B4  7C 08 03 A6 */	mtlr r0
/* 803B1678 003AE5B8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B167C 003AE5BC  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx29TSyncGroup4<Q23efx9TChasePos>Fv"

.fn "create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg", weak
/* 803B1680 003AE5C0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B1684 003AE5C4  7C 08 02 A6 */	mflr r0
/* 803B1688 003AE5C8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B168C 003AE5CC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B1690 003AE5D0  7C 7F 1B 78 */	mr r31, r3
/* 803B1694 003AE5D4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B1698 003AE5D8  3B C0 00 00 */	li r30, 0
/* 803B169C 003AE5DC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B16A0 003AE5E0  7C 9D 23 78 */	mr r29, r4
.L_803B16A4:
/* 803B16A4 003AE5E4  38 7F 00 04 */	addi r3, r31, 4
/* 803B16A8 003AE5E8  7F A4 EB 78 */	mr r4, r29
/* 803B16AC 003AE5EC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B16B0 003AE5F0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B16B4 003AE5F4  7D 89 03 A6 */	mtctr r12
/* 803B16B8 003AE5F8  4E 80 04 21 */	bctrl 
/* 803B16BC 003AE5FC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B16C0 003AE600  40 82 00 0C */	bne .L_803B16CC
/* 803B16C4 003AE604  38 60 00 00 */	li r3, 0
/* 803B16C8 003AE608  48 00 00 18 */	b .L_803B16E0
.L_803B16CC:
/* 803B16CC 003AE60C  3B DE 00 01 */	addi r30, r30, 1
/* 803B16D0 003AE610  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B16D4 003AE614  28 1E 00 04 */	cmplwi r30, 4
/* 803B16D8 003AE618  41 80 FF CC */	blt .L_803B16A4
/* 803B16DC 003AE61C  38 60 00 01 */	li r3, 1
.L_803B16E0:
/* 803B16E0 003AE620  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B16E4 003AE624  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B16E8 003AE628  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B16EC 003AE62C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B16F0 003AE630  7C 08 03 A6 */	mtlr r0
/* 803B16F4 003AE634  38 21 00 20 */	addi r1, r1, 0x20
/* 803B16F8 003AE638  4E 80 00 20 */	blr 
.endfn "create__Q23efx28TSyncGroup4<Q23efx8TForever>FPQ23efx3Arg"

.fn "fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv", weak
/* 803B16FC 003AE63C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1700 003AE640  7C 08 02 A6 */	mflr r0
/* 803B1704 003AE644  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1708 003AE648  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B170C 003AE64C  7C 7F 1B 78 */	mr r31, r3
/* 803B1710 003AE650  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1714 003AE654  3B C0 00 00 */	li r30, 0
.L_803B1718:
/* 803B1718 003AE658  38 7F 00 04 */	addi r3, r31, 4
/* 803B171C 003AE65C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1720 003AE660  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B1724 003AE664  7D 89 03 A6 */	mtctr r12
/* 803B1728 003AE668  4E 80 04 21 */	bctrl 
/* 803B172C 003AE66C  3B DE 00 01 */	addi r30, r30, 1
/* 803B1730 003AE670  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B1734 003AE674  28 1E 00 04 */	cmplwi r30, 4
/* 803B1738 003AE678  41 80 FF E0 */	blt .L_803B1718
/* 803B173C 003AE67C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1740 003AE680  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1744 003AE684  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1748 003AE688  7C 08 03 A6 */	mtlr r0
/* 803B174C 003AE68C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1750 003AE690  4E 80 00 20 */	blr 
.endfn "fade__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"

.fn "forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv", weak
/* 803B1754 003AE694  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1758 003AE698  7C 08 02 A6 */	mflr r0
/* 803B175C 003AE69C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1760 003AE6A0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1764 003AE6A4  7C 7F 1B 78 */	mr r31, r3
/* 803B1768 003AE6A8  93 C1 00 08 */	stw r30, 8(r1)
/* 803B176C 003AE6AC  3B C0 00 00 */	li r30, 0
.L_803B1770:
/* 803B1770 003AE6B0  38 7F 00 04 */	addi r3, r31, 4
/* 803B1774 003AE6B4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1778 003AE6B8  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B177C 003AE6BC  7D 89 03 A6 */	mtctr r12
/* 803B1780 003AE6C0  4E 80 04 21 */	bctrl 
/* 803B1784 003AE6C4  3B DE 00 01 */	addi r30, r30, 1
/* 803B1788 003AE6C8  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B178C 003AE6CC  28 1E 00 04 */	cmplwi r30, 4
/* 803B1790 003AE6D0  41 80 FF E0 */	blt .L_803B1770
/* 803B1794 003AE6D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1798 003AE6D8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B179C 003AE6DC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B17A0 003AE6E0  7C 08 03 A6 */	mtlr r0
/* 803B17A4 003AE6E4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B17A8 003AE6E8  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"

.fn "startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv", weak
/* 803B17AC 003AE6EC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B17B0 003AE6F0  7C 08 02 A6 */	mflr r0
/* 803B17B4 003AE6F4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B17B8 003AE6F8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B17BC 003AE6FC  7C 7F 1B 78 */	mr r31, r3
/* 803B17C0 003AE700  93 C1 00 08 */	stw r30, 8(r1)
/* 803B17C4 003AE704  3B C0 00 00 */	li r30, 0
.L_803B17C8:
/* 803B17C8 003AE708  38 7F 00 04 */	addi r3, r31, 4
/* 803B17CC 003AE70C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B17D0 003AE710  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B17D4 003AE714  7D 89 03 A6 */	mtctr r12
/* 803B17D8 003AE718  4E 80 04 21 */	bctrl 
/* 803B17DC 003AE71C  3B DE 00 01 */	addi r30, r30, 1
/* 803B17E0 003AE720  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B17E4 003AE724  28 1E 00 04 */	cmplwi r30, 4
/* 803B17E8 003AE728  41 80 FF E0 */	blt .L_803B17C8
/* 803B17EC 003AE72C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B17F0 003AE730  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B17F4 003AE734  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B17F8 003AE738  7C 08 03 A6 */	mtlr r0
/* 803B17FC 003AE73C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1800 003AE740  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"

.fn "endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv", weak
/* 803B1804 003AE744  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1808 003AE748  7C 08 02 A6 */	mflr r0
/* 803B180C 003AE74C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1810 003AE750  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1814 003AE754  7C 7F 1B 78 */	mr r31, r3
/* 803B1818 003AE758  93 C1 00 08 */	stw r30, 8(r1)
/* 803B181C 003AE75C  3B C0 00 00 */	li r30, 0
.L_803B1820:
/* 803B1820 003AE760  38 7F 00 04 */	addi r3, r31, 4
/* 803B1824 003AE764  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1828 003AE768  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B182C 003AE76C  7D 89 03 A6 */	mtctr r12
/* 803B1830 003AE770  4E 80 04 21 */	bctrl 
/* 803B1834 003AE774  3B DE 00 01 */	addi r30, r30, 1
/* 803B1838 003AE778  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B183C 003AE77C  28 1E 00 04 */	cmplwi r30, 4
/* 803B1840 003AE780  41 80 FF E0 */	blt .L_803B1820
/* 803B1844 003AE784  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1848 003AE788  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B184C 003AE78C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1850 003AE790  7C 08 03 A6 */	mtlr r0
/* 803B1854 003AE794  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1858 003AE798  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx28TSyncGroup4<Q23efx8TForever>Fv"

.fn "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg", weak
/* 803B185C 003AE79C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B1860 003AE7A0  7C 08 02 A6 */	mflr r0
/* 803B1864 003AE7A4  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B1868 003AE7A8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B186C 003AE7AC  7C 7F 1B 78 */	mr r31, r3
/* 803B1870 003AE7B0  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B1874 003AE7B4  3B C0 00 00 */	li r30, 0
/* 803B1878 003AE7B8  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B187C 003AE7BC  7C 9D 23 78 */	mr r29, r4
.L_803B1880:
/* 803B1880 003AE7C0  38 7F 00 04 */	addi r3, r31, 4
/* 803B1884 003AE7C4  7F A4 EB 78 */	mr r4, r29
/* 803B1888 003AE7C8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B188C 003AE7CC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B1890 003AE7D0  7D 89 03 A6 */	mtctr r12
/* 803B1894 003AE7D4  4E 80 04 21 */	bctrl 
/* 803B1898 003AE7D8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B189C 003AE7DC  40 82 00 0C */	bne .L_803B18A8
/* 803B18A0 003AE7E0  38 60 00 00 */	li r3, 0
/* 803B18A4 003AE7E4  48 00 00 18 */	b .L_803B18BC
.L_803B18A8:
/* 803B18A8 003AE7E8  3B DE 00 01 */	addi r30, r30, 1
/* 803B18AC 003AE7EC  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B18B0 003AE7F0  28 1E 00 03 */	cmplwi r30, 3
/* 803B18B4 003AE7F4  41 80 FF CC */	blt .L_803B1880
/* 803B18B8 003AE7F8  38 60 00 01 */	li r3, 1
.L_803B18BC:
/* 803B18BC 003AE7FC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B18C0 003AE800  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B18C4 003AE804  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B18C8 003AE808  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B18CC 003AE80C  7C 08 03 A6 */	mtlr r0
/* 803B18D0 003AE810  38 21 00 20 */	addi r1, r1, 0x20
/* 803B18D4 003AE814  4E 80 00 20 */	blr 
.endfn "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>FPQ23efx3Arg"

.fn "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv", weak
/* 803B18D8 003AE818  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B18DC 003AE81C  7C 08 02 A6 */	mflr r0
/* 803B18E0 003AE820  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B18E4 003AE824  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B18E8 003AE828  7C 7F 1B 78 */	mr r31, r3
/* 803B18EC 003AE82C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B18F0 003AE830  3B C0 00 00 */	li r30, 0
.L_803B18F4:
/* 803B18F4 003AE834  38 7F 00 04 */	addi r3, r31, 4
/* 803B18F8 003AE838  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B18FC 003AE83C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B1900 003AE840  7D 89 03 A6 */	mtctr r12
/* 803B1904 003AE844  4E 80 04 21 */	bctrl 
/* 803B1908 003AE848  3B DE 00 01 */	addi r30, r30, 1
/* 803B190C 003AE84C  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1910 003AE850  28 1E 00 03 */	cmplwi r30, 3
/* 803B1914 003AE854  41 80 FF E0 */	blt .L_803B18F4
/* 803B1918 003AE858  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B191C 003AE85C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1920 003AE860  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1924 003AE864  7C 08 03 A6 */	mtlr r0
/* 803B1928 003AE868  38 21 00 10 */	addi r1, r1, 0x10
/* 803B192C 003AE86C  4E 80 00 20 */	blr 
.endfn "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"

.fn "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv", weak
/* 803B1930 003AE870  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1934 003AE874  7C 08 02 A6 */	mflr r0
/* 803B1938 003AE878  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B193C 003AE87C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1940 003AE880  7C 7F 1B 78 */	mr r31, r3
/* 803B1944 003AE884  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1948 003AE888  3B C0 00 00 */	li r30, 0
.L_803B194C:
/* 803B194C 003AE88C  38 7F 00 04 */	addi r3, r31, 4
/* 803B1950 003AE890  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1954 003AE894  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B1958 003AE898  7D 89 03 A6 */	mtctr r12
/* 803B195C 003AE89C  4E 80 04 21 */	bctrl 
/* 803B1960 003AE8A0  3B DE 00 01 */	addi r30, r30, 1
/* 803B1964 003AE8A4  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1968 003AE8A8  28 1E 00 03 */	cmplwi r30, 3
/* 803B196C 003AE8AC  41 80 FF E0 */	blt .L_803B194C
/* 803B1970 003AE8B0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1974 003AE8B4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1978 003AE8B8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B197C 003AE8BC  7C 08 03 A6 */	mtlr r0
/* 803B1980 003AE8C0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1984 003AE8C4  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"

.fn "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv", weak
/* 803B1988 003AE8C8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B198C 003AE8CC  7C 08 02 A6 */	mflr r0
/* 803B1990 003AE8D0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1994 003AE8D4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1998 003AE8D8  7C 7F 1B 78 */	mr r31, r3
/* 803B199C 003AE8DC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B19A0 003AE8E0  3B C0 00 00 */	li r30, 0
.L_803B19A4:
/* 803B19A4 003AE8E4  38 7F 00 04 */	addi r3, r31, 4
/* 803B19A8 003AE8E8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B19AC 003AE8EC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B19B0 003AE8F0  7D 89 03 A6 */	mtctr r12
/* 803B19B4 003AE8F4  4E 80 04 21 */	bctrl 
/* 803B19B8 003AE8F8  3B DE 00 01 */	addi r30, r30, 1
/* 803B19BC 003AE8FC  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B19C0 003AE900  28 1E 00 03 */	cmplwi r30, 3
/* 803B19C4 003AE904  41 80 FF E0 */	blt .L_803B19A4
/* 803B19C8 003AE908  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B19CC 003AE90C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B19D0 003AE910  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B19D4 003AE914  7C 08 03 A6 */	mtlr r0
/* 803B19D8 003AE918  38 21 00 10 */	addi r1, r1, 0x10
/* 803B19DC 003AE91C  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"

.fn "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv", weak
/* 803B19E0 003AE920  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B19E4 003AE924  7C 08 02 A6 */	mflr r0
/* 803B19E8 003AE928  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B19EC 003AE92C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B19F0 003AE930  7C 7F 1B 78 */	mr r31, r3
/* 803B19F4 003AE934  93 C1 00 08 */	stw r30, 8(r1)
/* 803B19F8 003AE938  3B C0 00 00 */	li r30, 0
.L_803B19FC:
/* 803B19FC 003AE93C  38 7F 00 04 */	addi r3, r31, 4
/* 803B1A00 003AE940  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1A04 003AE944  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B1A08 003AE948  7D 89 03 A6 */	mtctr r12
/* 803B1A0C 003AE94C  4E 80 04 21 */	bctrl 
/* 803B1A10 003AE950  3B DE 00 01 */	addi r30, r30, 1
/* 803B1A14 003AE954  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1A18 003AE958  28 1E 00 03 */	cmplwi r30, 3
/* 803B1A1C 003AE95C  41 80 FF E0 */	blt .L_803B19FC
/* 803B1A20 003AE960  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1A24 003AE964  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1A28 003AE968  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1A2C 003AE96C  7C 08 03 A6 */	mtlr r0
/* 803B1A30 003AE970  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1A34 003AE974  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalZScale>Fv"

.fn "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>FPQ23efx3Arg", weak
/* 803B1A38 003AE978  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B1A3C 003AE97C  7C 08 02 A6 */	mflr r0
/* 803B1A40 003AE980  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B1A44 003AE984  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B1A48 003AE988  7C 7F 1B 78 */	mr r31, r3
/* 803B1A4C 003AE98C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B1A50 003AE990  3B C0 00 00 */	li r30, 0
/* 803B1A54 003AE994  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B1A58 003AE998  7C 9D 23 78 */	mr r29, r4
.L_803B1A5C:
/* 803B1A5C 003AE99C  38 7F 00 04 */	addi r3, r31, 4
/* 803B1A60 003AE9A0  7F A4 EB 78 */	mr r4, r29
/* 803B1A64 003AE9A4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1A68 003AE9A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B1A6C 003AE9AC  7D 89 03 A6 */	mtctr r12
/* 803B1A70 003AE9B0  4E 80 04 21 */	bctrl 
/* 803B1A74 003AE9B4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B1A78 003AE9B8  40 82 00 0C */	bne .L_803B1A84
/* 803B1A7C 003AE9BC  38 60 00 00 */	li r3, 0
/* 803B1A80 003AE9C0  48 00 00 18 */	b .L_803B1A98
.L_803B1A84:
/* 803B1A84 003AE9C4  3B DE 00 01 */	addi r30, r30, 1
/* 803B1A88 003AE9C8  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1A8C 003AE9CC  28 1E 00 03 */	cmplwi r30, 3
/* 803B1A90 003AE9D0  41 80 FF CC */	blt .L_803B1A5C
/* 803B1A94 003AE9D4  38 60 00 01 */	li r3, 1
.L_803B1A98:
/* 803B1A98 003AE9D8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B1A9C 003AE9DC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B1AA0 003AE9E0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B1AA4 003AE9E4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B1AA8 003AE9E8  7C 08 03 A6 */	mtlr r0
/* 803B1AAC 003AE9EC  38 21 00 20 */	addi r1, r1, 0x20
/* 803B1AB0 003AE9F0  4E 80 00 20 */	blr 
.endfn "create__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>FPQ23efx3Arg"

.fn "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv", weak
/* 803B1AB4 003AE9F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1AB8 003AE9F8  7C 08 02 A6 */	mflr r0
/* 803B1ABC 003AE9FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1AC0 003AEA00  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1AC4 003AEA04  7C 7F 1B 78 */	mr r31, r3
/* 803B1AC8 003AEA08  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1ACC 003AEA0C  3B C0 00 00 */	li r30, 0
.L_803B1AD0:
/* 803B1AD0 003AEA10  38 7F 00 04 */	addi r3, r31, 4
/* 803B1AD4 003AEA14  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1AD8 003AEA18  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B1ADC 003AEA1C  7D 89 03 A6 */	mtctr r12
/* 803B1AE0 003AEA20  4E 80 04 21 */	bctrl 
/* 803B1AE4 003AEA24  3B DE 00 01 */	addi r30, r30, 1
/* 803B1AE8 003AEA28  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1AEC 003AEA2C  28 1E 00 03 */	cmplwi r30, 3
/* 803B1AF0 003AEA30  41 80 FF E0 */	blt .L_803B1AD0
/* 803B1AF4 003AEA34  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1AF8 003AEA38  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1AFC 003AEA3C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1B00 003AEA40  7C 08 03 A6 */	mtlr r0
/* 803B1B04 003AEA44  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1B08 003AEA48  4E 80 00 20 */	blr 
.endfn "fade__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"

.fn "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv", weak
/* 803B1B0C 003AEA4C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1B10 003AEA50  7C 08 02 A6 */	mflr r0
/* 803B1B14 003AEA54  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1B18 003AEA58  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1B1C 003AEA5C  7C 7F 1B 78 */	mr r31, r3
/* 803B1B20 003AEA60  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1B24 003AEA64  3B C0 00 00 */	li r30, 0
.L_803B1B28:
/* 803B1B28 003AEA68  38 7F 00 04 */	addi r3, r31, 4
/* 803B1B2C 003AEA6C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1B30 003AEA70  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B1B34 003AEA74  7D 89 03 A6 */	mtctr r12
/* 803B1B38 003AEA78  4E 80 04 21 */	bctrl 
/* 803B1B3C 003AEA7C  3B DE 00 01 */	addi r30, r30, 1
/* 803B1B40 003AEA80  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1B44 003AEA84  28 1E 00 03 */	cmplwi r30, 3
/* 803B1B48 003AEA88  41 80 FF E0 */	blt .L_803B1B28
/* 803B1B4C 003AEA8C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1B50 003AEA90  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1B54 003AEA94  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1B58 003AEA98  7C 08 03 A6 */	mtlr r0
/* 803B1B5C 003AEA9C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1B60 003AEAA0  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"

.fn "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv", weak
/* 803B1B64 003AEAA4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1B68 003AEAA8  7C 08 02 A6 */	mflr r0
/* 803B1B6C 003AEAAC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1B70 003AEAB0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1B74 003AEAB4  7C 7F 1B 78 */	mr r31, r3
/* 803B1B78 003AEAB8  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1B7C 003AEABC  3B C0 00 00 */	li r30, 0
.L_803B1B80:
/* 803B1B80 003AEAC0  38 7F 00 04 */	addi r3, r31, 4
/* 803B1B84 003AEAC4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1B88 003AEAC8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B1B8C 003AEACC  7D 89 03 A6 */	mtctr r12
/* 803B1B90 003AEAD0  4E 80 04 21 */	bctrl 
/* 803B1B94 003AEAD4  3B DE 00 01 */	addi r30, r30, 1
/* 803B1B98 003AEAD8  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1B9C 003AEADC  28 1E 00 03 */	cmplwi r30, 3
/* 803B1BA0 003AEAE0  41 80 FF E0 */	blt .L_803B1B80
/* 803B1BA4 003AEAE4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1BA8 003AEAE8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1BAC 003AEAEC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1BB0 003AEAF0  7C 08 03 A6 */	mtlr r0
/* 803B1BB4 003AEAF4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1BB8 003AEAF8  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"

.fn "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv", weak
/* 803B1BBC 003AEAFC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1BC0 003AEB00  7C 08 02 A6 */	mflr r0
/* 803B1BC4 003AEB04  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1BC8 003AEB08  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1BCC 003AEB0C  7C 7F 1B 78 */	mr r31, r3
/* 803B1BD0 003AEB10  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1BD4 003AEB14  3B C0 00 00 */	li r30, 0
.L_803B1BD8:
/* 803B1BD8 003AEB18  38 7F 00 04 */	addi r3, r31, 4
/* 803B1BDC 003AEB1C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1BE0 003AEB20  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B1BE4 003AEB24  7D 89 03 A6 */	mtctr r12
/* 803B1BE8 003AEB28  4E 80 04 21 */	bctrl 
/* 803B1BEC 003AEB2C  3B DE 00 01 */	addi r30, r30, 1
/* 803B1BF0 003AEB30  3B FF 00 1C */	addi r31, r31, 0x1c
/* 803B1BF4 003AEB34  28 1E 00 03 */	cmplwi r30, 3
/* 803B1BF8 003AEB38  41 80 FF E0 */	blt .L_803B1BD8
/* 803B1BFC 003AEB3C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1C00 003AEB40  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1C04 003AEB44  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1C08 003AEB48  7C 08 03 A6 */	mtlr r0
/* 803B1C0C 003AEB4C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1C10 003AEB50  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx44TSyncGroup3<Q23efx23TChasePosPosLocalYScale>Fv"

.fn "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg", weak
/* 803B1C14 003AEB54  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B1C18 003AEB58  7C 08 02 A6 */	mflr r0
/* 803B1C1C 003AEB5C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B1C20 003AEB60  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B1C24 003AEB64  7C 7F 1B 78 */	mr r31, r3
/* 803B1C28 003AEB68  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B1C2C 003AEB6C  3B C0 00 00 */	li r30, 0
/* 803B1C30 003AEB70  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B1C34 003AEB74  7C 9D 23 78 */	mr r29, r4
.L_803B1C38:
/* 803B1C38 003AEB78  38 7F 00 04 */	addi r3, r31, 4
/* 803B1C3C 003AEB7C  7F A4 EB 78 */	mr r4, r29
/* 803B1C40 003AEB80  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1C44 003AEB84  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B1C48 003AEB88  7D 89 03 A6 */	mtctr r12
/* 803B1C4C 003AEB8C  4E 80 04 21 */	bctrl 
/* 803B1C50 003AEB90  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B1C54 003AEB94  40 82 00 0C */	bne .L_803B1C60
/* 803B1C58 003AEB98  38 60 00 00 */	li r3, 0
/* 803B1C5C 003AEB9C  48 00 00 18 */	b .L_803B1C74
.L_803B1C60:
/* 803B1C60 003AEBA0  3B DE 00 01 */	addi r30, r30, 1
/* 803B1C64 003AEBA4  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B1C68 003AEBA8  28 1E 00 03 */	cmplwi r30, 3
/* 803B1C6C 003AEBAC  41 80 FF CC */	blt .L_803B1C38
/* 803B1C70 003AEBB0  38 60 00 01 */	li r3, 1
.L_803B1C74:
/* 803B1C74 003AEBB4  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B1C78 003AEBB8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B1C7C 003AEBBC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B1C80 003AEBC0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B1C84 003AEBC4  7C 08 03 A6 */	mtlr r0
/* 803B1C88 003AEBC8  38 21 00 20 */	addi r1, r1, 0x20
/* 803B1C8C 003AEBCC  4E 80 00 20 */	blr 
.endfn "create__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>FPQ23efx3Arg"

.fn "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv", weak
/* 803B1C90 003AEBD0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1C94 003AEBD4  7C 08 02 A6 */	mflr r0
/* 803B1C98 003AEBD8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1C9C 003AEBDC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1CA0 003AEBE0  7C 7F 1B 78 */	mr r31, r3
/* 803B1CA4 003AEBE4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1CA8 003AEBE8  3B C0 00 00 */	li r30, 0
.L_803B1CAC:
/* 803B1CAC 003AEBEC  38 7F 00 04 */	addi r3, r31, 4
/* 803B1CB0 003AEBF0  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1CB4 003AEBF4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B1CB8 003AEBF8  7D 89 03 A6 */	mtctr r12
/* 803B1CBC 003AEBFC  4E 80 04 21 */	bctrl 
/* 803B1CC0 003AEC00  3B DE 00 01 */	addi r30, r30, 1
/* 803B1CC4 003AEC04  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B1CC8 003AEC08  28 1E 00 03 */	cmplwi r30, 3
/* 803B1CCC 003AEC0C  41 80 FF E0 */	blt .L_803B1CAC
/* 803B1CD0 003AEC10  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1CD4 003AEC14  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1CD8 003AEC18  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1CDC 003AEC1C  7C 08 03 A6 */	mtlr r0
/* 803B1CE0 003AEC20  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1CE4 003AEC24  4E 80 00 20 */	blr 
.endfn "fade__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"

.fn "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv", weak
/* 803B1CE8 003AEC28  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1CEC 003AEC2C  7C 08 02 A6 */	mflr r0
/* 803B1CF0 003AEC30  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1CF4 003AEC34  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1CF8 003AEC38  7C 7F 1B 78 */	mr r31, r3
/* 803B1CFC 003AEC3C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1D00 003AEC40  3B C0 00 00 */	li r30, 0
.L_803B1D04:
/* 803B1D04 003AEC44  38 7F 00 04 */	addi r3, r31, 4
/* 803B1D08 003AEC48  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1D0C 003AEC4C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B1D10 003AEC50  7D 89 03 A6 */	mtctr r12
/* 803B1D14 003AEC54  4E 80 04 21 */	bctrl 
/* 803B1D18 003AEC58  3B DE 00 01 */	addi r30, r30, 1
/* 803B1D1C 003AEC5C  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B1D20 003AEC60  28 1E 00 03 */	cmplwi r30, 3
/* 803B1D24 003AEC64  41 80 FF E0 */	blt .L_803B1D04
/* 803B1D28 003AEC68  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1D2C 003AEC6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1D30 003AEC70  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1D34 003AEC74  7C 08 03 A6 */	mtlr r0
/* 803B1D38 003AEC78  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1D3C 003AEC7C  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"

.fn "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv", weak
/* 803B1D40 003AEC80  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1D44 003AEC84  7C 08 02 A6 */	mflr r0
/* 803B1D48 003AEC88  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1D4C 003AEC8C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1D50 003AEC90  7C 7F 1B 78 */	mr r31, r3
/* 803B1D54 003AEC94  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1D58 003AEC98  3B C0 00 00 */	li r30, 0
.L_803B1D5C:
/* 803B1D5C 003AEC9C  38 7F 00 04 */	addi r3, r31, 4
/* 803B1D60 003AECA0  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1D64 003AECA4  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B1D68 003AECA8  7D 89 03 A6 */	mtctr r12
/* 803B1D6C 003AECAC  4E 80 04 21 */	bctrl 
/* 803B1D70 003AECB0  3B DE 00 01 */	addi r30, r30, 1
/* 803B1D74 003AECB4  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B1D78 003AECB8  28 1E 00 03 */	cmplwi r30, 3
/* 803B1D7C 003AECBC  41 80 FF E0 */	blt .L_803B1D5C
/* 803B1D80 003AECC0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1D84 003AECC4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1D88 003AECC8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1D8C 003AECCC  7C 08 03 A6 */	mtlr r0
/* 803B1D90 003AECD0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1D94 003AECD4  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"

.fn "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv", weak
/* 803B1D98 003AECD8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1D9C 003AECDC  7C 08 02 A6 */	mflr r0
/* 803B1DA0 003AECE0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1DA4 003AECE4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1DA8 003AECE8  7C 7F 1B 78 */	mr r31, r3
/* 803B1DAC 003AECEC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1DB0 003AECF0  3B C0 00 00 */	li r30, 0
.L_803B1DB4:
/* 803B1DB4 003AECF4  38 7F 00 04 */	addi r3, r31, 4
/* 803B1DB8 003AECF8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1DBC 003AECFC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B1DC0 003AED00  7D 89 03 A6 */	mtctr r12
/* 803B1DC4 003AED04  4E 80 04 21 */	bctrl 
/* 803B1DC8 003AED08  3B DE 00 01 */	addi r30, r30, 1
/* 803B1DCC 003AED0C  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B1DD0 003AED10  28 1E 00 03 */	cmplwi r30, 3
/* 803B1DD4 003AED14  41 80 FF E0 */	blt .L_803B1DB4
/* 803B1DD8 003AED18  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1DDC 003AED1C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1DE0 003AED20  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1DE4 003AED24  7C 08 03 A6 */	mtlr r0
/* 803B1DE8 003AED28  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1DEC 003AED2C  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx34TSyncGroup3<Q23efx13TChasePosYRot>Fv"

.fn "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg", weak
/* 803B1DF0 003AED30  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B1DF4 003AED34  7C 08 02 A6 */	mflr r0
/* 803B1DF8 003AED38  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B1DFC 003AED3C  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B1E00 003AED40  7C 7F 1B 78 */	mr r31, r3
/* 803B1E04 003AED44  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B1E08 003AED48  3B C0 00 00 */	li r30, 0
/* 803B1E0C 003AED4C  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B1E10 003AED50  7C 9D 23 78 */	mr r29, r4
.L_803B1E14:
/* 803B1E14 003AED54  38 7F 00 04 */	addi r3, r31, 4
/* 803B1E18 003AED58  7F A4 EB 78 */	mr r4, r29
/* 803B1E1C 003AED5C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1E20 003AED60  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B1E24 003AED64  7D 89 03 A6 */	mtctr r12
/* 803B1E28 003AED68  4E 80 04 21 */	bctrl 
/* 803B1E2C 003AED6C  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B1E30 003AED70  40 82 00 0C */	bne .L_803B1E3C
/* 803B1E34 003AED74  38 60 00 00 */	li r3, 0
/* 803B1E38 003AED78  48 00 00 18 */	b .L_803B1E50
.L_803B1E3C:
/* 803B1E3C 003AED7C  3B DE 00 01 */	addi r30, r30, 1
/* 803B1E40 003AED80  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1E44 003AED84  28 1E 00 03 */	cmplwi r30, 3
/* 803B1E48 003AED88  41 80 FF CC */	blt .L_803B1E14
/* 803B1E4C 003AED8C  38 60 00 01 */	li r3, 1
.L_803B1E50:
/* 803B1E50 003AED90  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B1E54 003AED94  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B1E58 003AED98  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B1E5C 003AED9C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B1E60 003AEDA0  7C 08 03 A6 */	mtlr r0
/* 803B1E64 003AEDA4  38 21 00 20 */	addi r1, r1, 0x20
/* 803B1E68 003AEDA8  4E 80 00 20 */	blr 
.endfn "create__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>FPQ23efx3Arg"

.fn "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv", weak
/* 803B1E6C 003AEDAC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1E70 003AEDB0  7C 08 02 A6 */	mflr r0
/* 803B1E74 003AEDB4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1E78 003AEDB8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1E7C 003AEDBC  7C 7F 1B 78 */	mr r31, r3
/* 803B1E80 003AEDC0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1E84 003AEDC4  3B C0 00 00 */	li r30, 0
.L_803B1E88:
/* 803B1E88 003AEDC8  38 7F 00 04 */	addi r3, r31, 4
/* 803B1E8C 003AEDCC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1E90 003AEDD0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B1E94 003AEDD4  7D 89 03 A6 */	mtctr r12
/* 803B1E98 003AEDD8  4E 80 04 21 */	bctrl 
/* 803B1E9C 003AEDDC  3B DE 00 01 */	addi r30, r30, 1
/* 803B1EA0 003AEDE0  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1EA4 003AEDE4  28 1E 00 03 */	cmplwi r30, 3
/* 803B1EA8 003AEDE8  41 80 FF E0 */	blt .L_803B1E88
/* 803B1EAC 003AEDEC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1EB0 003AEDF0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1EB4 003AEDF4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1EB8 003AEDF8  7C 08 03 A6 */	mtlr r0
/* 803B1EBC 003AEDFC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1EC0 003AEE00  4E 80 00 20 */	blr 
.endfn "fade__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"

.fn "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv", weak
/* 803B1EC4 003AEE04  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1EC8 003AEE08  7C 08 02 A6 */	mflr r0
/* 803B1ECC 003AEE0C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1ED0 003AEE10  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1ED4 003AEE14  7C 7F 1B 78 */	mr r31, r3
/* 803B1ED8 003AEE18  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1EDC 003AEE1C  3B C0 00 00 */	li r30, 0
.L_803B1EE0:
/* 803B1EE0 003AEE20  38 7F 00 04 */	addi r3, r31, 4
/* 803B1EE4 003AEE24  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1EE8 003AEE28  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B1EEC 003AEE2C  7D 89 03 A6 */	mtctr r12
/* 803B1EF0 003AEE30  4E 80 04 21 */	bctrl 
/* 803B1EF4 003AEE34  3B DE 00 01 */	addi r30, r30, 1
/* 803B1EF8 003AEE38  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1EFC 003AEE3C  28 1E 00 03 */	cmplwi r30, 3
/* 803B1F00 003AEE40  41 80 FF E0 */	blt .L_803B1EE0
/* 803B1F04 003AEE44  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1F08 003AEE48  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1F0C 003AEE4C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1F10 003AEE50  7C 08 03 A6 */	mtlr r0
/* 803B1F14 003AEE54  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1F18 003AEE58  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"

.fn "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv", weak
/* 803B1F1C 003AEE5C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1F20 003AEE60  7C 08 02 A6 */	mflr r0
/* 803B1F24 003AEE64  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1F28 003AEE68  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1F2C 003AEE6C  7C 7F 1B 78 */	mr r31, r3
/* 803B1F30 003AEE70  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1F34 003AEE74  3B C0 00 00 */	li r30, 0
.L_803B1F38:
/* 803B1F38 003AEE78  38 7F 00 04 */	addi r3, r31, 4
/* 803B1F3C 003AEE7C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1F40 003AEE80  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B1F44 003AEE84  7D 89 03 A6 */	mtctr r12
/* 803B1F48 003AEE88  4E 80 04 21 */	bctrl 
/* 803B1F4C 003AEE8C  3B DE 00 01 */	addi r30, r30, 1
/* 803B1F50 003AEE90  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1F54 003AEE94  28 1E 00 03 */	cmplwi r30, 3
/* 803B1F58 003AEE98  41 80 FF E0 */	blt .L_803B1F38
/* 803B1F5C 003AEE9C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1F60 003AEEA0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1F64 003AEEA4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1F68 003AEEA8  7C 08 03 A6 */	mtlr r0
/* 803B1F6C 003AEEAC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1F70 003AEEB0  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"

.fn "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv", weak
/* 803B1F74 003AEEB4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B1F78 003AEEB8  7C 08 02 A6 */	mflr r0
/* 803B1F7C 003AEEBC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B1F80 003AEEC0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B1F84 003AEEC4  7C 7F 1B 78 */	mr r31, r3
/* 803B1F88 003AEEC8  93 C1 00 08 */	stw r30, 8(r1)
/* 803B1F8C 003AEECC  3B C0 00 00 */	li r30, 0
.L_803B1F90:
/* 803B1F90 003AEED0  38 7F 00 04 */	addi r3, r31, 4
/* 803B1F94 003AEED4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1F98 003AEED8  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B1F9C 003AEEDC  7D 89 03 A6 */	mtctr r12
/* 803B1FA0 003AEEE0  4E 80 04 21 */	bctrl 
/* 803B1FA4 003AEEE4  3B DE 00 01 */	addi r30, r30, 1
/* 803B1FA8 003AEEE8  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B1FAC 003AEEEC  28 1E 00 03 */	cmplwi r30, 3
/* 803B1FB0 003AEEF0  41 80 FF E0 */	blt .L_803B1F90
/* 803B1FB4 003AEEF4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B1FB8 003AEEF8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B1FBC 003AEEFC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B1FC0 003AEF00  7C 08 03 A6 */	mtlr r0
/* 803B1FC4 003AEF04  38 21 00 10 */	addi r1, r1, 0x10
/* 803B1FC8 003AEF08  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChaseMtx>Fv"

.fn "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg", weak
/* 803B1FCC 003AEF0C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B1FD0 003AEF10  7C 08 02 A6 */	mflr r0
/* 803B1FD4 003AEF14  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B1FD8 003AEF18  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B1FDC 003AEF1C  7C 7F 1B 78 */	mr r31, r3
/* 803B1FE0 003AEF20  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B1FE4 003AEF24  3B C0 00 00 */	li r30, 0
/* 803B1FE8 003AEF28  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B1FEC 003AEF2C  7C 9D 23 78 */	mr r29, r4
.L_803B1FF0:
/* 803B1FF0 003AEF30  38 7F 00 04 */	addi r3, r31, 4
/* 803B1FF4 003AEF34  7F A4 EB 78 */	mr r4, r29
/* 803B1FF8 003AEF38  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B1FFC 003AEF3C  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B2000 003AEF40  7D 89 03 A6 */	mtctr r12
/* 803B2004 003AEF44  4E 80 04 21 */	bctrl 
/* 803B2008 003AEF48  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B200C 003AEF4C  40 82 00 0C */	bne .L_803B2018
/* 803B2010 003AEF50  38 60 00 00 */	li r3, 0
/* 803B2014 003AEF54  48 00 00 18 */	b .L_803B202C
.L_803B2018:
/* 803B2018 003AEF58  3B DE 00 01 */	addi r30, r30, 1
/* 803B201C 003AEF5C  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2020 003AEF60  28 1E 00 03 */	cmplwi r30, 3
/* 803B2024 003AEF64  41 80 FF CC */	blt .L_803B1FF0
/* 803B2028 003AEF68  38 60 00 01 */	li r3, 1
.L_803B202C:
/* 803B202C 003AEF6C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B2030 003AEF70  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B2034 003AEF74  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B2038 003AEF78  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B203C 003AEF7C  7C 08 03 A6 */	mtlr r0
/* 803B2040 003AEF80  38 21 00 20 */	addi r1, r1, 0x20
/* 803B2044 003AEF84  4E 80 00 20 */	blr 
.endfn "create__Q23efx29TSyncGroup3<Q23efx9TChasePos>FPQ23efx3Arg"

.fn "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv", weak
/* 803B2048 003AEF88  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B204C 003AEF8C  7C 08 02 A6 */	mflr r0
/* 803B2050 003AEF90  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2054 003AEF94  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2058 003AEF98  7C 7F 1B 78 */	mr r31, r3
/* 803B205C 003AEF9C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2060 003AEFA0  3B C0 00 00 */	li r30, 0
.L_803B2064:
/* 803B2064 003AEFA4  38 7F 00 04 */	addi r3, r31, 4
/* 803B2068 003AEFA8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B206C 003AEFAC  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B2070 003AEFB0  7D 89 03 A6 */	mtctr r12
/* 803B2074 003AEFB4  4E 80 04 21 */	bctrl 
/* 803B2078 003AEFB8  3B DE 00 01 */	addi r30, r30, 1
/* 803B207C 003AEFBC  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2080 003AEFC0  28 1E 00 03 */	cmplwi r30, 3
/* 803B2084 003AEFC4  41 80 FF E0 */	blt .L_803B2064
/* 803B2088 003AEFC8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B208C 003AEFCC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2090 003AEFD0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2094 003AEFD4  7C 08 03 A6 */	mtlr r0
/* 803B2098 003AEFD8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B209C 003AEFDC  4E 80 00 20 */	blr 
.endfn "fade__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"

.fn "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv", weak
/* 803B20A0 003AEFE0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B20A4 003AEFE4  7C 08 02 A6 */	mflr r0
/* 803B20A8 003AEFE8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B20AC 003AEFEC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B20B0 003AEFF0  7C 7F 1B 78 */	mr r31, r3
/* 803B20B4 003AEFF4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B20B8 003AEFF8  3B C0 00 00 */	li r30, 0
.L_803B20BC:
/* 803B20BC 003AEFFC  38 7F 00 04 */	addi r3, r31, 4
/* 803B20C0 003AF000  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B20C4 003AF004  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B20C8 003AF008  7D 89 03 A6 */	mtctr r12
/* 803B20CC 003AF00C  4E 80 04 21 */	bctrl 
/* 803B20D0 003AF010  3B DE 00 01 */	addi r30, r30, 1
/* 803B20D4 003AF014  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B20D8 003AF018  28 1E 00 03 */	cmplwi r30, 3
/* 803B20DC 003AF01C  41 80 FF E0 */	blt .L_803B20BC
/* 803B20E0 003AF020  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B20E4 003AF024  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B20E8 003AF028  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B20EC 003AF02C  7C 08 03 A6 */	mtlr r0
/* 803B20F0 003AF030  38 21 00 10 */	addi r1, r1, 0x10
/* 803B20F4 003AF034  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"

.fn "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv", weak
/* 803B20F8 003AF038  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B20FC 003AF03C  7C 08 02 A6 */	mflr r0
/* 803B2100 003AF040  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2104 003AF044  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2108 003AF048  7C 7F 1B 78 */	mr r31, r3
/* 803B210C 003AF04C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2110 003AF050  3B C0 00 00 */	li r30, 0
.L_803B2114:
/* 803B2114 003AF054  38 7F 00 04 */	addi r3, r31, 4
/* 803B2118 003AF058  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B211C 003AF05C  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B2120 003AF060  7D 89 03 A6 */	mtctr r12
/* 803B2124 003AF064  4E 80 04 21 */	bctrl 
/* 803B2128 003AF068  3B DE 00 01 */	addi r30, r30, 1
/* 803B212C 003AF06C  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2130 003AF070  28 1E 00 03 */	cmplwi r30, 3
/* 803B2134 003AF074  41 80 FF E0 */	blt .L_803B2114
/* 803B2138 003AF078  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B213C 003AF07C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2140 003AF080  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2144 003AF084  7C 08 03 A6 */	mtlr r0
/* 803B2148 003AF088  38 21 00 10 */	addi r1, r1, 0x10
/* 803B214C 003AF08C  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"

.fn "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv", weak
/* 803B2150 003AF090  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2154 003AF094  7C 08 02 A6 */	mflr r0
/* 803B2158 003AF098  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B215C 003AF09C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2160 003AF0A0  7C 7F 1B 78 */	mr r31, r3
/* 803B2164 003AF0A4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2168 003AF0A8  3B C0 00 00 */	li r30, 0
.L_803B216C:
/* 803B216C 003AF0AC  38 7F 00 04 */	addi r3, r31, 4
/* 803B2170 003AF0B0  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2174 003AF0B4  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B2178 003AF0B8  7D 89 03 A6 */	mtctr r12
/* 803B217C 003AF0BC  4E 80 04 21 */	bctrl 
/* 803B2180 003AF0C0  3B DE 00 01 */	addi r30, r30, 1
/* 803B2184 003AF0C4  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2188 003AF0C8  28 1E 00 03 */	cmplwi r30, 3
/* 803B218C 003AF0CC  41 80 FF E0 */	blt .L_803B216C
/* 803B2190 003AF0D0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2194 003AF0D4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2198 003AF0D8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B219C 003AF0DC  7C 08 03 A6 */	mtlr r0
/* 803B21A0 003AF0E0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B21A4 003AF0E4  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx29TSyncGroup3<Q23efx9TChasePos>Fv"

.fn "create__Q23efx28TSyncGroup3<Q23efx8TForever>FPQ23efx3Arg", weak
/* 803B21A8 003AF0E8  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B21AC 003AF0EC  7C 08 02 A6 */	mflr r0
/* 803B21B0 003AF0F0  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B21B4 003AF0F4  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B21B8 003AF0F8  7C 7F 1B 78 */	mr r31, r3
/* 803B21BC 003AF0FC  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B21C0 003AF100  3B C0 00 00 */	li r30, 0
/* 803B21C4 003AF104  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B21C8 003AF108  7C 9D 23 78 */	mr r29, r4
.L_803B21CC:
/* 803B21CC 003AF10C  38 7F 00 04 */	addi r3, r31, 4
/* 803B21D0 003AF110  7F A4 EB 78 */	mr r4, r29
/* 803B21D4 003AF114  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B21D8 003AF118  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B21DC 003AF11C  7D 89 03 A6 */	mtctr r12
/* 803B21E0 003AF120  4E 80 04 21 */	bctrl 
/* 803B21E4 003AF124  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B21E8 003AF128  40 82 00 0C */	bne .L_803B21F4
/* 803B21EC 003AF12C  38 60 00 00 */	li r3, 0
/* 803B21F0 003AF130  48 00 00 18 */	b .L_803B2208
.L_803B21F4:
/* 803B21F4 003AF134  3B DE 00 01 */	addi r30, r30, 1
/* 803B21F8 003AF138  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B21FC 003AF13C  28 1E 00 03 */	cmplwi r30, 3
/* 803B2200 003AF140  41 80 FF CC */	blt .L_803B21CC
/* 803B2204 003AF144  38 60 00 01 */	li r3, 1
.L_803B2208:
/* 803B2208 003AF148  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B220C 003AF14C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B2210 003AF150  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B2214 003AF154  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B2218 003AF158  7C 08 03 A6 */	mtlr r0
/* 803B221C 003AF15C  38 21 00 20 */	addi r1, r1, 0x20
/* 803B2220 003AF160  4E 80 00 20 */	blr 
.endfn "create__Q23efx28TSyncGroup3<Q23efx8TForever>FPQ23efx3Arg"

.fn "fade__Q23efx28TSyncGroup3<Q23efx8TForever>Fv", weak
/* 803B2224 003AF164  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2228 003AF168  7C 08 02 A6 */	mflr r0
/* 803B222C 003AF16C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2230 003AF170  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2234 003AF174  7C 7F 1B 78 */	mr r31, r3
/* 803B2238 003AF178  93 C1 00 08 */	stw r30, 8(r1)
/* 803B223C 003AF17C  3B C0 00 00 */	li r30, 0
.L_803B2240:
/* 803B2240 003AF180  38 7F 00 04 */	addi r3, r31, 4
/* 803B2244 003AF184  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2248 003AF188  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B224C 003AF18C  7D 89 03 A6 */	mtctr r12
/* 803B2250 003AF190  4E 80 04 21 */	bctrl 
/* 803B2254 003AF194  3B DE 00 01 */	addi r30, r30, 1
/* 803B2258 003AF198  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B225C 003AF19C  28 1E 00 03 */	cmplwi r30, 3
/* 803B2260 003AF1A0  41 80 FF E0 */	blt .L_803B2240
/* 803B2264 003AF1A4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2268 003AF1A8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B226C 003AF1AC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2270 003AF1B0  7C 08 03 A6 */	mtlr r0
/* 803B2274 003AF1B4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2278 003AF1B8  4E 80 00 20 */	blr 
.endfn "fade__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"

.fn "forceKill__Q23efx28TSyncGroup3<Q23efx8TForever>Fv", weak
/* 803B227C 003AF1BC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2280 003AF1C0  7C 08 02 A6 */	mflr r0
/* 803B2284 003AF1C4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2288 003AF1C8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B228C 003AF1CC  7C 7F 1B 78 */	mr r31, r3
/* 803B2290 003AF1D0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2294 003AF1D4  3B C0 00 00 */	li r30, 0
.L_803B2298:
/* 803B2298 003AF1D8  38 7F 00 04 */	addi r3, r31, 4
/* 803B229C 003AF1DC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B22A0 003AF1E0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B22A4 003AF1E4  7D 89 03 A6 */	mtctr r12
/* 803B22A8 003AF1E8  4E 80 04 21 */	bctrl 
/* 803B22AC 003AF1EC  3B DE 00 01 */	addi r30, r30, 1
/* 803B22B0 003AF1F0  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B22B4 003AF1F4  28 1E 00 03 */	cmplwi r30, 3
/* 803B22B8 003AF1F8  41 80 FF E0 */	blt .L_803B2298
/* 803B22BC 003AF1FC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B22C0 003AF200  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B22C4 003AF204  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B22C8 003AF208  7C 08 03 A6 */	mtlr r0
/* 803B22CC 003AF20C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B22D0 003AF210  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"

.fn "startDemoDrawOff__Q23efx28TSyncGroup3<Q23efx8TForever>Fv", weak
/* 803B22D4 003AF214  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B22D8 003AF218  7C 08 02 A6 */	mflr r0
/* 803B22DC 003AF21C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B22E0 003AF220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B22E4 003AF224  7C 7F 1B 78 */	mr r31, r3
/* 803B22E8 003AF228  93 C1 00 08 */	stw r30, 8(r1)
/* 803B22EC 003AF22C  3B C0 00 00 */	li r30, 0
.L_803B22F0:
/* 803B22F0 003AF230  38 7F 00 04 */	addi r3, r31, 4
/* 803B22F4 003AF234  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B22F8 003AF238  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B22FC 003AF23C  7D 89 03 A6 */	mtctr r12
/* 803B2300 003AF240  4E 80 04 21 */	bctrl 
/* 803B2304 003AF244  3B DE 00 01 */	addi r30, r30, 1
/* 803B2308 003AF248  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B230C 003AF24C  28 1E 00 03 */	cmplwi r30, 3
/* 803B2310 003AF250  41 80 FF E0 */	blt .L_803B22F0
/* 803B2314 003AF254  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2318 003AF258  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B231C 003AF25C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2320 003AF260  7C 08 03 A6 */	mtlr r0
/* 803B2324 003AF264  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2328 003AF268  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"

.fn "endDemoDrawOn__Q23efx28TSyncGroup3<Q23efx8TForever>Fv", weak
/* 803B232C 003AF26C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2330 003AF270  7C 08 02 A6 */	mflr r0
/* 803B2334 003AF274  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2338 003AF278  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B233C 003AF27C  7C 7F 1B 78 */	mr r31, r3
/* 803B2340 003AF280  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2344 003AF284  3B C0 00 00 */	li r30, 0
.L_803B2348:
/* 803B2348 003AF288  38 7F 00 04 */	addi r3, r31, 4
/* 803B234C 003AF28C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2350 003AF290  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B2354 003AF294  7D 89 03 A6 */	mtctr r12
/* 803B2358 003AF298  4E 80 04 21 */	bctrl 
/* 803B235C 003AF29C  3B DE 00 01 */	addi r30, r30, 1
/* 803B2360 003AF2A0  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B2364 003AF2A4  28 1E 00 03 */	cmplwi r30, 3
/* 803B2368 003AF2A8  41 80 FF E0 */	blt .L_803B2348
/* 803B236C 003AF2AC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2370 003AF2B0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2374 003AF2B4  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2378 003AF2B8  7C 08 03 A6 */	mtlr r0
/* 803B237C 003AF2BC  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2380 003AF2C0  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx28TSyncGroup3<Q23efx8TForever>Fv"

.fn "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg", weak
/* 803B2384 003AF2C4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B2388 003AF2C8  7C 08 02 A6 */	mflr r0
/* 803B238C 003AF2CC  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B2390 003AF2D0  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B2394 003AF2D4  7C 7F 1B 78 */	mr r31, r3
/* 803B2398 003AF2D8  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B239C 003AF2DC  3B C0 00 00 */	li r30, 0
/* 803B23A0 003AF2E0  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B23A4 003AF2E4  7C 9D 23 78 */	mr r29, r4
.L_803B23A8:
/* 803B23A8 003AF2E8  38 7F 00 04 */	addi r3, r31, 4
/* 803B23AC 003AF2EC  7F A4 EB 78 */	mr r4, r29
/* 803B23B0 003AF2F0  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B23B4 003AF2F4  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B23B8 003AF2F8  7D 89 03 A6 */	mtctr r12
/* 803B23BC 003AF2FC  4E 80 04 21 */	bctrl 
/* 803B23C0 003AF300  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B23C4 003AF304  40 82 00 0C */	bne .L_803B23D0
/* 803B23C8 003AF308  38 60 00 00 */	li r3, 0
/* 803B23CC 003AF30C  48 00 00 18 */	b .L_803B23E4
.L_803B23D0:
/* 803B23D0 003AF310  3B DE 00 01 */	addi r30, r30, 1
/* 803B23D4 003AF314  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B23D8 003AF318  28 1E 00 02 */	cmplwi r30, 2
/* 803B23DC 003AF31C  41 80 FF CC */	blt .L_803B23A8
/* 803B23E0 003AF320  38 60 00 01 */	li r3, 1
.L_803B23E4:
/* 803B23E4 003AF324  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B23E8 003AF328  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B23EC 003AF32C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B23F0 003AF330  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B23F4 003AF334  7C 08 03 A6 */	mtlr r0
/* 803B23F8 003AF338  38 21 00 20 */	addi r1, r1, 0x20
/* 803B23FC 003AF33C  4E 80 00 20 */	blr 
.endfn "create__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>FPQ23efx3Arg"

.fn "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv", weak
/* 803B2400 003AF340  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2404 003AF344  7C 08 02 A6 */	mflr r0
/* 803B2408 003AF348  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B240C 003AF34C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2410 003AF350  7C 7F 1B 78 */	mr r31, r3
/* 803B2414 003AF354  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2418 003AF358  3B C0 00 00 */	li r30, 0
.L_803B241C:
/* 803B241C 003AF35C  38 7F 00 04 */	addi r3, r31, 4
/* 803B2420 003AF360  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2424 003AF364  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B2428 003AF368  7D 89 03 A6 */	mtctr r12
/* 803B242C 003AF36C  4E 80 04 21 */	bctrl 
/* 803B2430 003AF370  3B DE 00 01 */	addi r30, r30, 1
/* 803B2434 003AF374  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B2438 003AF378  28 1E 00 02 */	cmplwi r30, 2
/* 803B243C 003AF37C  41 80 FF E0 */	blt .L_803B241C
/* 803B2440 003AF380  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2444 003AF384  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2448 003AF388  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B244C 003AF38C  7C 08 03 A6 */	mtlr r0
/* 803B2450 003AF390  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2454 003AF394  4E 80 00 20 */	blr 
.endfn "fade__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"

.fn "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv", weak
/* 803B2458 003AF398  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B245C 003AF39C  7C 08 02 A6 */	mflr r0
/* 803B2460 003AF3A0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2464 003AF3A4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2468 003AF3A8  7C 7F 1B 78 */	mr r31, r3
/* 803B246C 003AF3AC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2470 003AF3B0  3B C0 00 00 */	li r30, 0
.L_803B2474:
/* 803B2474 003AF3B4  38 7F 00 04 */	addi r3, r31, 4
/* 803B2478 003AF3B8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B247C 003AF3BC  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B2480 003AF3C0  7D 89 03 A6 */	mtctr r12
/* 803B2484 003AF3C4  4E 80 04 21 */	bctrl 
/* 803B2488 003AF3C8  3B DE 00 01 */	addi r30, r30, 1
/* 803B248C 003AF3CC  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B2490 003AF3D0  28 1E 00 02 */	cmplwi r30, 2
/* 803B2494 003AF3D4  41 80 FF E0 */	blt .L_803B2474
/* 803B2498 003AF3D8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B249C 003AF3DC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B24A0 003AF3E0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B24A4 003AF3E4  7C 08 03 A6 */	mtlr r0
/* 803B24A8 003AF3E8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B24AC 003AF3EC  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"

.fn "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv", weak
/* 803B24B0 003AF3F0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B24B4 003AF3F4  7C 08 02 A6 */	mflr r0
/* 803B24B8 003AF3F8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B24BC 003AF3FC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B24C0 003AF400  7C 7F 1B 78 */	mr r31, r3
/* 803B24C4 003AF404  93 C1 00 08 */	stw r30, 8(r1)
/* 803B24C8 003AF408  3B C0 00 00 */	li r30, 0
.L_803B24CC:
/* 803B24CC 003AF40C  38 7F 00 04 */	addi r3, r31, 4
/* 803B24D0 003AF410  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B24D4 003AF414  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B24D8 003AF418  7D 89 03 A6 */	mtctr r12
/* 803B24DC 003AF41C  4E 80 04 21 */	bctrl 
/* 803B24E0 003AF420  3B DE 00 01 */	addi r30, r30, 1
/* 803B24E4 003AF424  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B24E8 003AF428  28 1E 00 02 */	cmplwi r30, 2
/* 803B24EC 003AF42C  41 80 FF E0 */	blt .L_803B24CC
/* 803B24F0 003AF430  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B24F4 003AF434  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B24F8 003AF438  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B24FC 003AF43C  7C 08 03 A6 */	mtlr r0
/* 803B2500 003AF440  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2504 003AF444  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"

.fn "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv", weak
/* 803B2508 003AF448  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B250C 003AF44C  7C 08 02 A6 */	mflr r0
/* 803B2510 003AF450  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2514 003AF454  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2518 003AF458  7C 7F 1B 78 */	mr r31, r3
/* 803B251C 003AF45C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2520 003AF460  3B C0 00 00 */	li r30, 0
.L_803B2524:
/* 803B2524 003AF464  38 7F 00 04 */	addi r3, r31, 4
/* 803B2528 003AF468  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B252C 003AF46C  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B2530 003AF470  7D 89 03 A6 */	mtctr r12
/* 803B2534 003AF474  4E 80 04 21 */	bctrl 
/* 803B2538 003AF478  3B DE 00 01 */	addi r30, r30, 1
/* 803B253C 003AF47C  3B FF 00 18 */	addi r31, r31, 0x18
/* 803B2540 003AF480  28 1E 00 02 */	cmplwi r30, 2
/* 803B2544 003AF484  41 80 FF E0 */	blt .L_803B2524
/* 803B2548 003AF488  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B254C 003AF48C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2550 003AF490  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2554 003AF494  7C 08 03 A6 */	mtlr r0
/* 803B2558 003AF498  38 21 00 10 */	addi r1, r1, 0x10
/* 803B255C 003AF49C  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx34TSyncGroup2<Q23efx13TChasePosYRot>Fv"

.fn "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg", weak
/* 803B2560 003AF4A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B2564 003AF4A4  7C 08 02 A6 */	mflr r0
/* 803B2568 003AF4A8  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B256C 003AF4AC  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B2570 003AF4B0  7C 7F 1B 78 */	mr r31, r3
/* 803B2574 003AF4B4  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B2578 003AF4B8  3B C0 00 00 */	li r30, 0
/* 803B257C 003AF4BC  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B2580 003AF4C0  7C 9D 23 78 */	mr r29, r4
.L_803B2584:
/* 803B2584 003AF4C4  38 7F 00 04 */	addi r3, r31, 4
/* 803B2588 003AF4C8  7F A4 EB 78 */	mr r4, r29
/* 803B258C 003AF4CC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2590 003AF4D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B2594 003AF4D4  7D 89 03 A6 */	mtctr r12
/* 803B2598 003AF4D8  4E 80 04 21 */	bctrl 
/* 803B259C 003AF4DC  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B25A0 003AF4E0  40 82 00 0C */	bne .L_803B25AC
/* 803B25A4 003AF4E4  38 60 00 00 */	li r3, 0
/* 803B25A8 003AF4E8  48 00 00 18 */	b .L_803B25C0
.L_803B25AC:
/* 803B25AC 003AF4EC  3B DE 00 01 */	addi r30, r30, 1
/* 803B25B0 003AF4F0  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B25B4 003AF4F4  28 1E 00 02 */	cmplwi r30, 2
/* 803B25B8 003AF4F8  41 80 FF CC */	blt .L_803B2584
/* 803B25BC 003AF4FC  38 60 00 01 */	li r3, 1
.L_803B25C0:
/* 803B25C0 003AF500  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B25C4 003AF504  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B25C8 003AF508  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B25CC 003AF50C  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B25D0 003AF510  7C 08 03 A6 */	mtlr r0
/* 803B25D4 003AF514  38 21 00 20 */	addi r1, r1, 0x20
/* 803B25D8 003AF518  4E 80 00 20 */	blr 
.endfn "create__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>FPQ23efx3Arg"

.fn "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv", weak
/* 803B25DC 003AF51C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B25E0 003AF520  7C 08 02 A6 */	mflr r0
/* 803B25E4 003AF524  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B25E8 003AF528  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B25EC 003AF52C  7C 7F 1B 78 */	mr r31, r3
/* 803B25F0 003AF530  93 C1 00 08 */	stw r30, 8(r1)
/* 803B25F4 003AF534  3B C0 00 00 */	li r30, 0
.L_803B25F8:
/* 803B25F8 003AF538  38 7F 00 04 */	addi r3, r31, 4
/* 803B25FC 003AF53C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2600 003AF540  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B2604 003AF544  7D 89 03 A6 */	mtctr r12
/* 803B2608 003AF548  4E 80 04 21 */	bctrl 
/* 803B260C 003AF54C  3B DE 00 01 */	addi r30, r30, 1
/* 803B2610 003AF550  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2614 003AF554  28 1E 00 02 */	cmplwi r30, 2
/* 803B2618 003AF558  41 80 FF E0 */	blt .L_803B25F8
/* 803B261C 003AF55C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2620 003AF560  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2624 003AF564  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2628 003AF568  7C 08 03 A6 */	mtlr r0
/* 803B262C 003AF56C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2630 003AF570  4E 80 00 20 */	blr 
.endfn "fade__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"

.fn "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv", weak
/* 803B2634 003AF574  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2638 003AF578  7C 08 02 A6 */	mflr r0
/* 803B263C 003AF57C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2640 003AF580  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2644 003AF584  7C 7F 1B 78 */	mr r31, r3
/* 803B2648 003AF588  93 C1 00 08 */	stw r30, 8(r1)
/* 803B264C 003AF58C  3B C0 00 00 */	li r30, 0
.L_803B2650:
/* 803B2650 003AF590  38 7F 00 04 */	addi r3, r31, 4
/* 803B2654 003AF594  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2658 003AF598  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B265C 003AF59C  7D 89 03 A6 */	mtctr r12
/* 803B2660 003AF5A0  4E 80 04 21 */	bctrl 
/* 803B2664 003AF5A4  3B DE 00 01 */	addi r30, r30, 1
/* 803B2668 003AF5A8  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B266C 003AF5AC  28 1E 00 02 */	cmplwi r30, 2
/* 803B2670 003AF5B0  41 80 FF E0 */	blt .L_803B2650
/* 803B2674 003AF5B4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2678 003AF5B8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B267C 003AF5BC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2680 003AF5C0  7C 08 03 A6 */	mtlr r0
/* 803B2684 003AF5C4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2688 003AF5C8  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"

.fn "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv", weak
/* 803B268C 003AF5CC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2690 003AF5D0  7C 08 02 A6 */	mflr r0
/* 803B2694 003AF5D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2698 003AF5D8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B269C 003AF5DC  7C 7F 1B 78 */	mr r31, r3
/* 803B26A0 003AF5E0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B26A4 003AF5E4  3B C0 00 00 */	li r30, 0
.L_803B26A8:
/* 803B26A8 003AF5E8  38 7F 00 04 */	addi r3, r31, 4
/* 803B26AC 003AF5EC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B26B0 003AF5F0  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B26B4 003AF5F4  7D 89 03 A6 */	mtctr r12
/* 803B26B8 003AF5F8  4E 80 04 21 */	bctrl 
/* 803B26BC 003AF5FC  3B DE 00 01 */	addi r30, r30, 1
/* 803B26C0 003AF600  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B26C4 003AF604  28 1E 00 02 */	cmplwi r30, 2
/* 803B26C8 003AF608  41 80 FF E0 */	blt .L_803B26A8
/* 803B26CC 003AF60C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B26D0 003AF610  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B26D4 003AF614  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B26D8 003AF618  7C 08 03 A6 */	mtlr r0
/* 803B26DC 003AF61C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B26E0 003AF620  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"

.fn "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv", weak
/* 803B26E4 003AF624  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B26E8 003AF628  7C 08 02 A6 */	mflr r0
/* 803B26EC 003AF62C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B26F0 003AF630  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B26F4 003AF634  7C 7F 1B 78 */	mr r31, r3
/* 803B26F8 003AF638  93 C1 00 08 */	stw r30, 8(r1)
/* 803B26FC 003AF63C  3B C0 00 00 */	li r30, 0
.L_803B2700:
/* 803B2700 003AF640  38 7F 00 04 */	addi r3, r31, 4
/* 803B2704 003AF644  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2708 003AF648  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B270C 003AF64C  7D 89 03 A6 */	mtctr r12
/* 803B2710 003AF650  4E 80 04 21 */	bctrl 
/* 803B2714 003AF654  3B DE 00 01 */	addi r30, r30, 1
/* 803B2718 003AF658  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B271C 003AF65C  28 1E 00 02 */	cmplwi r30, 2
/* 803B2720 003AF660  41 80 FF E0 */	blt .L_803B2700
/* 803B2724 003AF664  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2728 003AF668  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B272C 003AF66C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2730 003AF670  7C 08 03 A6 */	mtlr r0
/* 803B2734 003AF674  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2738 003AF678  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx31TSyncGroup2<Q23efx10TChaseMtxT>Fv"

.fn "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg", weak
/* 803B273C 003AF67C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B2740 003AF680  7C 08 02 A6 */	mflr r0
/* 803B2744 003AF684  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B2748 003AF688  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B274C 003AF68C  7C 7F 1B 78 */	mr r31, r3
/* 803B2750 003AF690  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B2754 003AF694  3B C0 00 00 */	li r30, 0
/* 803B2758 003AF698  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B275C 003AF69C  7C 9D 23 78 */	mr r29, r4
.L_803B2760:
/* 803B2760 003AF6A0  38 7F 00 04 */	addi r3, r31, 4
/* 803B2764 003AF6A4  7F A4 EB 78 */	mr r4, r29
/* 803B2768 003AF6A8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B276C 003AF6AC  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B2770 003AF6B0  7D 89 03 A6 */	mtctr r12
/* 803B2774 003AF6B4  4E 80 04 21 */	bctrl 
/* 803B2778 003AF6B8  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B277C 003AF6BC  40 82 00 0C */	bne .L_803B2788
/* 803B2780 003AF6C0  38 60 00 00 */	li r3, 0
/* 803B2784 003AF6C4  48 00 00 18 */	b .L_803B279C
.L_803B2788:
/* 803B2788 003AF6C8  3B DE 00 01 */	addi r30, r30, 1
/* 803B278C 003AF6CC  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2790 003AF6D0  28 1E 00 02 */	cmplwi r30, 2
/* 803B2794 003AF6D4  41 80 FF CC */	blt .L_803B2760
/* 803B2798 003AF6D8  38 60 00 01 */	li r3, 1
.L_803B279C:
/* 803B279C 003AF6DC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B27A0 003AF6E0  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B27A4 003AF6E4  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B27A8 003AF6E8  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B27AC 003AF6EC  7C 08 03 A6 */	mtlr r0
/* 803B27B0 003AF6F0  38 21 00 20 */	addi r1, r1, 0x20
/* 803B27B4 003AF6F4  4E 80 00 20 */	blr 
.endfn "create__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>FPQ23efx3Arg"

.fn "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv", weak
/* 803B27B8 003AF6F8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B27BC 003AF6FC  7C 08 02 A6 */	mflr r0
/* 803B27C0 003AF700  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B27C4 003AF704  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B27C8 003AF708  7C 7F 1B 78 */	mr r31, r3
/* 803B27CC 003AF70C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B27D0 003AF710  3B C0 00 00 */	li r30, 0
.L_803B27D4:
/* 803B27D4 003AF714  38 7F 00 04 */	addi r3, r31, 4
/* 803B27D8 003AF718  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B27DC 003AF71C  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B27E0 003AF720  7D 89 03 A6 */	mtctr r12
/* 803B27E4 003AF724  4E 80 04 21 */	bctrl 
/* 803B27E8 003AF728  3B DE 00 01 */	addi r30, r30, 1
/* 803B27EC 003AF72C  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B27F0 003AF730  28 1E 00 02 */	cmplwi r30, 2
/* 803B27F4 003AF734  41 80 FF E0 */	blt .L_803B27D4
/* 803B27F8 003AF738  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B27FC 003AF73C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2800 003AF740  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2804 003AF744  7C 08 03 A6 */	mtlr r0
/* 803B2808 003AF748  38 21 00 10 */	addi r1, r1, 0x10
/* 803B280C 003AF74C  4E 80 00 20 */	blr 
.endfn "fade__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"

.fn "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv", weak
/* 803B2810 003AF750  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2814 003AF754  7C 08 02 A6 */	mflr r0
/* 803B2818 003AF758  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B281C 003AF75C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2820 003AF760  7C 7F 1B 78 */	mr r31, r3
/* 803B2824 003AF764  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2828 003AF768  3B C0 00 00 */	li r30, 0
.L_803B282C:
/* 803B282C 003AF76C  38 7F 00 04 */	addi r3, r31, 4
/* 803B2830 003AF770  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2834 003AF774  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B2838 003AF778  7D 89 03 A6 */	mtctr r12
/* 803B283C 003AF77C  4E 80 04 21 */	bctrl 
/* 803B2840 003AF780  3B DE 00 01 */	addi r30, r30, 1
/* 803B2844 003AF784  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2848 003AF788  28 1E 00 02 */	cmplwi r30, 2
/* 803B284C 003AF78C  41 80 FF E0 */	blt .L_803B282C
/* 803B2850 003AF790  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2854 003AF794  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2858 003AF798  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B285C 003AF79C  7C 08 03 A6 */	mtlr r0
/* 803B2860 003AF7A0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2864 003AF7A4  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"

.fn "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv", weak
/* 803B2868 003AF7A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B286C 003AF7AC  7C 08 02 A6 */	mflr r0
/* 803B2870 003AF7B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2874 003AF7B4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2878 003AF7B8  7C 7F 1B 78 */	mr r31, r3
/* 803B287C 003AF7BC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2880 003AF7C0  3B C0 00 00 */	li r30, 0
.L_803B2884:
/* 803B2884 003AF7C4  38 7F 00 04 */	addi r3, r31, 4
/* 803B2888 003AF7C8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B288C 003AF7CC  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B2890 003AF7D0  7D 89 03 A6 */	mtctr r12
/* 803B2894 003AF7D4  4E 80 04 21 */	bctrl 
/* 803B2898 003AF7D8  3B DE 00 01 */	addi r30, r30, 1
/* 803B289C 003AF7DC  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B28A0 003AF7E0  28 1E 00 02 */	cmplwi r30, 2
/* 803B28A4 003AF7E4  41 80 FF E0 */	blt .L_803B2884
/* 803B28A8 003AF7E8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B28AC 003AF7EC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B28B0 003AF7F0  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B28B4 003AF7F4  7C 08 03 A6 */	mtlr r0
/* 803B28B8 003AF7F8  38 21 00 10 */	addi r1, r1, 0x10
/* 803B28BC 003AF7FC  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"

.fn "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv", weak
/* 803B28C0 003AF800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B28C4 003AF804  7C 08 02 A6 */	mflr r0
/* 803B28C8 003AF808  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B28CC 003AF80C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B28D0 003AF810  7C 7F 1B 78 */	mr r31, r3
/* 803B28D4 003AF814  93 C1 00 08 */	stw r30, 8(r1)
/* 803B28D8 003AF818  3B C0 00 00 */	li r30, 0
.L_803B28DC:
/* 803B28DC 003AF81C  38 7F 00 04 */	addi r3, r31, 4
/* 803B28E0 003AF820  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B28E4 003AF824  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B28E8 003AF828  7D 89 03 A6 */	mtctr r12
/* 803B28EC 003AF82C  4E 80 04 21 */	bctrl 
/* 803B28F0 003AF830  3B DE 00 01 */	addi r30, r30, 1
/* 803B28F4 003AF834  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B28F8 003AF838  28 1E 00 02 */	cmplwi r30, 2
/* 803B28FC 003AF83C  41 80 FF E0 */	blt .L_803B28DC
/* 803B2900 003AF840  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2904 003AF844  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2908 003AF848  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B290C 003AF84C  7C 08 03 A6 */	mtlr r0
/* 803B2910 003AF850  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2914 003AF854  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChaseMtx>Fv"

.fn "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg", weak
/* 803B2918 003AF858  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B291C 003AF85C  7C 08 02 A6 */	mflr r0
/* 803B2920 003AF860  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B2924 003AF864  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B2928 003AF868  7C 7F 1B 78 */	mr r31, r3
/* 803B292C 003AF86C  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B2930 003AF870  3B C0 00 00 */	li r30, 0
/* 803B2934 003AF874  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B2938 003AF878  7C 9D 23 78 */	mr r29, r4
.L_803B293C:
/* 803B293C 003AF87C  38 7F 00 04 */	addi r3, r31, 4
/* 803B2940 003AF880  7F A4 EB 78 */	mr r4, r29
/* 803B2944 003AF884  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2948 003AF888  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B294C 003AF88C  7D 89 03 A6 */	mtctr r12
/* 803B2950 003AF890  4E 80 04 21 */	bctrl 
/* 803B2954 003AF894  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B2958 003AF898  40 82 00 0C */	bne .L_803B2964
/* 803B295C 003AF89C  38 60 00 00 */	li r3, 0
/* 803B2960 003AF8A0  48 00 00 18 */	b .L_803B2978
.L_803B2964:
/* 803B2964 003AF8A4  3B DE 00 01 */	addi r30, r30, 1
/* 803B2968 003AF8A8  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B296C 003AF8AC  28 1E 00 02 */	cmplwi r30, 2
/* 803B2970 003AF8B0  41 80 FF CC */	blt .L_803B293C
/* 803B2974 003AF8B4  38 60 00 01 */	li r3, 1
.L_803B2978:
/* 803B2978 003AF8B8  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B297C 003AF8BC  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B2980 003AF8C0  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B2984 003AF8C4  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B2988 003AF8C8  7C 08 03 A6 */	mtlr r0
/* 803B298C 003AF8CC  38 21 00 20 */	addi r1, r1, 0x20
/* 803B2990 003AF8D0  4E 80 00 20 */	blr 
.endfn "create__Q23efx29TSyncGroup2<Q23efx9TChasePos>FPQ23efx3Arg"

.fn "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv", weak
/* 803B2994 003AF8D4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2998 003AF8D8  7C 08 02 A6 */	mflr r0
/* 803B299C 003AF8DC  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B29A0 003AF8E0  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B29A4 003AF8E4  7C 7F 1B 78 */	mr r31, r3
/* 803B29A8 003AF8E8  93 C1 00 08 */	stw r30, 8(r1)
/* 803B29AC 003AF8EC  3B C0 00 00 */	li r30, 0
.L_803B29B0:
/* 803B29B0 003AF8F0  38 7F 00 04 */	addi r3, r31, 4
/* 803B29B4 003AF8F4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B29B8 003AF8F8  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B29BC 003AF8FC  7D 89 03 A6 */	mtctr r12
/* 803B29C0 003AF900  4E 80 04 21 */	bctrl 
/* 803B29C4 003AF904  3B DE 00 01 */	addi r30, r30, 1
/* 803B29C8 003AF908  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B29CC 003AF90C  28 1E 00 02 */	cmplwi r30, 2
/* 803B29D0 003AF910  41 80 FF E0 */	blt .L_803B29B0
/* 803B29D4 003AF914  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B29D8 003AF918  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B29DC 003AF91C  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B29E0 003AF920  7C 08 03 A6 */	mtlr r0
/* 803B29E4 003AF924  38 21 00 10 */	addi r1, r1, 0x10
/* 803B29E8 003AF928  4E 80 00 20 */	blr 
.endfn "fade__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"

.fn "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv", weak
/* 803B29EC 003AF92C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B29F0 003AF930  7C 08 02 A6 */	mflr r0
/* 803B29F4 003AF934  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B29F8 003AF938  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B29FC 003AF93C  7C 7F 1B 78 */	mr r31, r3
/* 803B2A00 003AF940  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2A04 003AF944  3B C0 00 00 */	li r30, 0
.L_803B2A08:
/* 803B2A08 003AF948  38 7F 00 04 */	addi r3, r31, 4
/* 803B2A0C 003AF94C  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2A10 003AF950  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B2A14 003AF954  7D 89 03 A6 */	mtctr r12
/* 803B2A18 003AF958  4E 80 04 21 */	bctrl 
/* 803B2A1C 003AF95C  3B DE 00 01 */	addi r30, r30, 1
/* 803B2A20 003AF960  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2A24 003AF964  28 1E 00 02 */	cmplwi r30, 2
/* 803B2A28 003AF968  41 80 FF E0 */	blt .L_803B2A08
/* 803B2A2C 003AF96C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2A30 003AF970  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2A34 003AF974  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2A38 003AF978  7C 08 03 A6 */	mtlr r0
/* 803B2A3C 003AF97C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2A40 003AF980  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"

.fn "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv", weak
/* 803B2A44 003AF984  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2A48 003AF988  7C 08 02 A6 */	mflr r0
/* 803B2A4C 003AF98C  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2A50 003AF990  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2A54 003AF994  7C 7F 1B 78 */	mr r31, r3
/* 803B2A58 003AF998  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2A5C 003AF99C  3B C0 00 00 */	li r30, 0
.L_803B2A60:
/* 803B2A60 003AF9A0  38 7F 00 04 */	addi r3, r31, 4
/* 803B2A64 003AF9A4  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2A68 003AF9A8  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B2A6C 003AF9AC  7D 89 03 A6 */	mtctr r12
/* 803B2A70 003AF9B0  4E 80 04 21 */	bctrl 
/* 803B2A74 003AF9B4  3B DE 00 01 */	addi r30, r30, 1
/* 803B2A78 003AF9B8  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2A7C 003AF9BC  28 1E 00 02 */	cmplwi r30, 2
/* 803B2A80 003AF9C0  41 80 FF E0 */	blt .L_803B2A60
/* 803B2A84 003AF9C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2A88 003AF9C8  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2A8C 003AF9CC  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2A90 003AF9D0  7C 08 03 A6 */	mtlr r0
/* 803B2A94 003AF9D4  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2A98 003AF9D8  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"

.fn "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv", weak
/* 803B2A9C 003AF9DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2AA0 003AF9E0  7C 08 02 A6 */	mflr r0
/* 803B2AA4 003AF9E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2AA8 003AF9E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2AAC 003AF9EC  7C 7F 1B 78 */	mr r31, r3
/* 803B2AB0 003AF9F0  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2AB4 003AF9F4  3B C0 00 00 */	li r30, 0
.L_803B2AB8:
/* 803B2AB8 003AF9F8  38 7F 00 04 */	addi r3, r31, 4
/* 803B2ABC 003AF9FC  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2AC0 003AFA00  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B2AC4 003AFA04  7D 89 03 A6 */	mtctr r12
/* 803B2AC8 003AFA08  4E 80 04 21 */	bctrl 
/* 803B2ACC 003AFA0C  3B DE 00 01 */	addi r30, r30, 1
/* 803B2AD0 003AFA10  3B FF 00 14 */	addi r31, r31, 0x14
/* 803B2AD4 003AFA14  28 1E 00 02 */	cmplwi r30, 2
/* 803B2AD8 003AFA18  41 80 FF E0 */	blt .L_803B2AB8
/* 803B2ADC 003AFA1C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2AE0 003AFA20  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2AE4 003AFA24  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2AE8 003AFA28  7C 08 03 A6 */	mtlr r0
/* 803B2AEC 003AFA2C  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2AF0 003AFA30  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx29TSyncGroup2<Q23efx9TChasePos>Fv"

.fn "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg", weak
/* 803B2AF4 003AFA34  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 803B2AF8 003AFA38  7C 08 02 A6 */	mflr r0
/* 803B2AFC 003AFA3C  90 01 00 24 */	stw r0, 0x24(r1)
/* 803B2B00 003AFA40  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 803B2B04 003AFA44  7C 7F 1B 78 */	mr r31, r3
/* 803B2B08 003AFA48  93 C1 00 18 */	stw r30, 0x18(r1)
/* 803B2B0C 003AFA4C  3B C0 00 00 */	li r30, 0
/* 803B2B10 003AFA50  93 A1 00 14 */	stw r29, 0x14(r1)
/* 803B2B14 003AFA54  7C 9D 23 78 */	mr r29, r4
.L_803B2B18:
/* 803B2B18 003AFA58  38 7F 00 04 */	addi r3, r31, 4
/* 803B2B1C 003AFA5C  7F A4 EB 78 */	mr r4, r29
/* 803B2B20 003AFA60  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2B24 003AFA64  81 8C 00 08 */	lwz r12, 8(r12)
/* 803B2B28 003AFA68  7D 89 03 A6 */	mtctr r12
/* 803B2B2C 003AFA6C  4E 80 04 21 */	bctrl 
/* 803B2B30 003AFA70  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 803B2B34 003AFA74  40 82 00 0C */	bne .L_803B2B40
/* 803B2B38 003AFA78  38 60 00 00 */	li r3, 0
/* 803B2B3C 003AFA7C  48 00 00 18 */	b .L_803B2B54
.L_803B2B40:
/* 803B2B40 003AFA80  3B DE 00 01 */	addi r30, r30, 1
/* 803B2B44 003AFA84  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B2B48 003AFA88  28 1E 00 02 */	cmplwi r30, 2
/* 803B2B4C 003AFA8C  41 80 FF CC */	blt .L_803B2B18
/* 803B2B50 003AFA90  38 60 00 01 */	li r3, 1
.L_803B2B54:
/* 803B2B54 003AFA94  80 01 00 24 */	lwz r0, 0x24(r1)
/* 803B2B58 003AFA98  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 803B2B5C 003AFA9C  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 803B2B60 003AFAA0  83 A1 00 14 */	lwz r29, 0x14(r1)
/* 803B2B64 003AFAA4  7C 08 03 A6 */	mtlr r0
/* 803B2B68 003AFAA8  38 21 00 20 */	addi r1, r1, 0x20
/* 803B2B6C 003AFAAC  4E 80 00 20 */	blr 
.endfn "create__Q23efx28TSyncGroup2<Q23efx8TForever>FPQ23efx3Arg"

.fn "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv", weak
/* 803B2B70 003AFAB0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2B74 003AFAB4  7C 08 02 A6 */	mflr r0
/* 803B2B78 003AFAB8  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2B7C 003AFABC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2B80 003AFAC0  7C 7F 1B 78 */	mr r31, r3
/* 803B2B84 003AFAC4  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2B88 003AFAC8  3B C0 00 00 */	li r30, 0
.L_803B2B8C:
/* 803B2B8C 003AFACC  38 7F 00 04 */	addi r3, r31, 4
/* 803B2B90 003AFAD0  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2B94 003AFAD4  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 803B2B98 003AFAD8  7D 89 03 A6 */	mtctr r12
/* 803B2B9C 003AFADC  4E 80 04 21 */	bctrl 
/* 803B2BA0 003AFAE0  3B DE 00 01 */	addi r30, r30, 1
/* 803B2BA4 003AFAE4  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B2BA8 003AFAE8  28 1E 00 02 */	cmplwi r30, 2
/* 803B2BAC 003AFAEC  41 80 FF E0 */	blt .L_803B2B8C
/* 803B2BB0 003AFAF0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2BB4 003AFAF4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2BB8 003AFAF8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2BBC 003AFAFC  7C 08 03 A6 */	mtlr r0
/* 803B2BC0 003AFB00  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2BC4 003AFB04  4E 80 00 20 */	blr 
.endfn "fade__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"

.fn "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv", weak
/* 803B2BC8 003AFB08  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2BCC 003AFB0C  7C 08 02 A6 */	mflr r0
/* 803B2BD0 003AFB10  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2BD4 003AFB14  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2BD8 003AFB18  7C 7F 1B 78 */	mr r31, r3
/* 803B2BDC 003AFB1C  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2BE0 003AFB20  3B C0 00 00 */	li r30, 0
.L_803B2BE4:
/* 803B2BE4 003AFB24  38 7F 00 04 */	addi r3, r31, 4
/* 803B2BE8 003AFB28  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2BEC 003AFB2C  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 803B2BF0 003AFB30  7D 89 03 A6 */	mtctr r12
/* 803B2BF4 003AFB34  4E 80 04 21 */	bctrl 
/* 803B2BF8 003AFB38  3B DE 00 01 */	addi r30, r30, 1
/* 803B2BFC 003AFB3C  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B2C00 003AFB40  28 1E 00 02 */	cmplwi r30, 2
/* 803B2C04 003AFB44  41 80 FF E0 */	blt .L_803B2BE4
/* 803B2C08 003AFB48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2C0C 003AFB4C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2C10 003AFB50  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2C14 003AFB54  7C 08 03 A6 */	mtlr r0
/* 803B2C18 003AFB58  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2C1C 003AFB5C  4E 80 00 20 */	blr 
.endfn "forceKill__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"

.fn "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv", weak
/* 803B2C20 003AFB60  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2C24 003AFB64  7C 08 02 A6 */	mflr r0
/* 803B2C28 003AFB68  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2C2C 003AFB6C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2C30 003AFB70  7C 7F 1B 78 */	mr r31, r3
/* 803B2C34 003AFB74  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2C38 003AFB78  3B C0 00 00 */	li r30, 0
.L_803B2C3C:
/* 803B2C3C 003AFB7C  38 7F 00 04 */	addi r3, r31, 4
/* 803B2C40 003AFB80  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2C44 003AFB84  81 8C 00 40 */	lwz r12, 0x40(r12)
/* 803B2C48 003AFB88  7D 89 03 A6 */	mtctr r12
/* 803B2C4C 003AFB8C  4E 80 04 21 */	bctrl 
/* 803B2C50 003AFB90  3B DE 00 01 */	addi r30, r30, 1
/* 803B2C54 003AFB94  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B2C58 003AFB98  28 1E 00 02 */	cmplwi r30, 2
/* 803B2C5C 003AFB9C  41 80 FF E0 */	blt .L_803B2C3C
/* 803B2C60 003AFBA0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2C64 003AFBA4  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2C68 003AFBA8  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2C6C 003AFBAC  7C 08 03 A6 */	mtlr r0
/* 803B2C70 003AFBB0  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2C74 003AFBB4  4E 80 00 20 */	blr 
.endfn "startDemoDrawOff__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"

.fn "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv", weak
/* 803B2C78 003AFBB8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2C7C 003AFBBC  7C 08 02 A6 */	mflr r0
/* 803B2C80 003AFBC0  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2C84 003AFBC4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 803B2C88 003AFBC8  7C 7F 1B 78 */	mr r31, r3
/* 803B2C8C 003AFBCC  93 C1 00 08 */	stw r30, 8(r1)
/* 803B2C90 003AFBD0  3B C0 00 00 */	li r30, 0
.L_803B2C94:
/* 803B2C94 003AFBD4  38 7F 00 04 */	addi r3, r31, 4
/* 803B2C98 003AFBD8  81 9F 00 04 */	lwz r12, 4(r31)
/* 803B2C9C 003AFBDC  81 8C 00 44 */	lwz r12, 0x44(r12)
/* 803B2CA0 003AFBE0  7D 89 03 A6 */	mtctr r12
/* 803B2CA4 003AFBE4  4E 80 04 21 */	bctrl 
/* 803B2CA8 003AFBE8  3B DE 00 01 */	addi r30, r30, 1
/* 803B2CAC 003AFBEC  3B FF 00 10 */	addi r31, r31, 0x10
/* 803B2CB0 003AFBF0  28 1E 00 02 */	cmplwi r30, 2
/* 803B2CB4 003AFBF4  41 80 FF E0 */	blt .L_803B2C94
/* 803B2CB8 003AFBF8  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2CBC 003AFBFC  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 803B2CC0 003AFC00  83 C1 00 08 */	lwz r30, 8(r1)
/* 803B2CC4 003AFC04  7C 08 03 A6 */	mtlr r0
/* 803B2CC8 003AFC08  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2CCC 003AFC0C  4E 80 00 20 */	blr 
.endfn "endDemoDrawOn__Q23efx28TSyncGroup2<Q23efx8TForever>Fv"

.fn __sinit_efxBase_cpp, local
/* 803B2CD0 003AFC10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 803B2CD4 003AFC14  7C 08 02 A6 */	mflr r0
/* 803B2CD8 003AFC18  3C 80 80 4A */	lis r4, __vt__18JPAEmitterCallBack@ha
/* 803B2CDC 003AFC1C  3C 60 80 4E */	lis r3, __vt__Q23efx24TCallBack_StaticClipping@ha
/* 803B2CE0 003AFC20  90 01 00 14 */	stw r0, 0x14(r1)
/* 803B2CE4 003AFC24  38 04 E2 7C */	addi r0, r4, __vt__18JPAEmitterCallBack@l
/* 803B2CE8 003AFC28  3C 80 80 3B */	lis r4, __dt__Q23efx24TCallBack_StaticClippingFv@ha
/* 803B2CEC 003AFC2C  90 0D 99 F8 */	stw r0, mCallBack_StaticClipping__Q23efx5TBase@sda21(r13)
/* 803B2CF0 003AFC30  38 03 6B 4C */	addi r0, r3, __vt__Q23efx24TCallBack_StaticClipping@l
/* 803B2CF4 003AFC34  3C 60 80 4F */	lis r3, lbl_804F7C10@ha
/* 803B2CF8 003AFC38  38 84 0E B0 */	addi r4, r4, __dt__Q23efx24TCallBack_StaticClippingFv@l
/* 803B2CFC 003AFC3C  90 0D 99 F8 */	stw r0, mCallBack_StaticClipping__Q23efx5TBase@sda21(r13)
/* 803B2D00 003AFC40  38 A3 7C 10 */	addi r5, r3, lbl_804F7C10@l
/* 803B2D04 003AFC44  38 6D 99 F8 */	addi r3, r13, mCallBack_StaticClipping__Q23efx5TBase@sda21
/* 803B2D08 003AFC48  4B D0 E9 F9 */	bl __register_global_object
/* 803B2D0C 003AFC4C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 803B2D10 003AFC50  7C 08 03 A6 */	mtlr r0
/* 803B2D14 003AFC54  38 21 00 10 */	addi r1, r1, 0x10
/* 803B2D18 003AFC58  4E 80 00 20 */	blr 
.endfn __sinit_efxBase_cpp

.fn "@4@executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter", weak
/* 803B2D1C 003AFC5C  38 63 FF FC */	addi r3, r3, -4
/* 803B2D20 003AFC60  4B FF BC 14 */	b executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter
.endfn "@4@executeAfter__Q23efx11TOneEmitterFP14JPABaseEmitter"

.fn "@4@__dt__Q23efx11TOneEmitterFv", weak
/* 803B2D24 003AFC64  38 63 FF FC */	addi r3, r3, -4
/* 803B2D28 003AFC68  4B D8 CF AC */	b __dt__Q23efx11TOneEmitterFv
.endfn "@4@__dt__Q23efx11TOneEmitterFv"

.fn "@4@executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter", weak
/* 803B2D2C 003AFC6C  38 63 FF FC */	addi r3, r3, -4
/* 803B2D30 003AFC70  4B FF BF 30 */	b executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter
.endfn "@4@executeAfter__Q23efx19TOneEmitterChasePosFP14JPABaseEmitter"

.fn "@4@__dt__Q23efx19TOneEmitterChasePosFv", weak
/* 803B2D34 003AFC74  38 63 FF FC */	addi r3, r3, -4
/* 803B2D38 003AFC78  4B FF E0 B4 */	b __dt__Q23efx19TOneEmitterChasePosFv
.endfn "@4@__dt__Q23efx19TOneEmitterChasePosFv"

.fn "@4@__dt__Q23efx17TOneEmitterSimpleFv", weak
/* 803B2D3C 003AFC7C  38 63 FF FC */	addi r3, r3, -4
/* 803B2D40 003AFC80  4B EC 9F D0 */	b __dt__Q23efx17TOneEmitterSimpleFv
.endfn "@4@__dt__Q23efx17TOneEmitterSimpleFv"

.fn "@4@__dt__Q23efx5TSyncFv", weak
/* 803B2D44 003AFC84  38 63 FF FC */	addi r3, r3, -4
/* 803B2D48 003AFC88  4B D4 E5 50 */	b __dt__Q23efx5TSyncFv
.endfn "@4@__dt__Q23efx5TSyncFv"

.fn "@4@__dt__Q23efx9TChasePosFv", weak
/* 803B2D4C 003AFC8C  38 63 FF FC */	addi r3, r3, -4
/* 803B2D50 003AFC90  4B D4 E4 C4 */	b __dt__Q23efx9TChasePosFv
.endfn "@4@__dt__Q23efx9TChasePosFv"

.fn "@4@__dt__Q23efx13TChasePosYRotFv", weak
/* 803B2D54 003AFC94  38 63 FF FC */	addi r3, r3, -4
/* 803B2D58 003AFC98  4B DC 2E EC */	b __dt__Q23efx13TChasePosYRotFv
.endfn "@4@__dt__Q23efx13TChasePosYRotFv"

.fn "@4@__dt__Q23efx9TChaseMtxFv", weak
/* 803B2D5C 003AFC9C  38 63 FF FC */	addi r3, r3, -4
/* 803B2D60 003AFCA0  4B D7 89 3C */	b __dt__Q23efx9TChaseMtxFv
.endfn "@4@__dt__Q23efx9TChaseMtxFv"

.fn "@4@__dt__Q23efx10TChaseMtxTFv", weak
/* 803B2D64 003AFCA4  38 63 FF FC */	addi r3, r3, -4
/* 803B2D68 003AFCA8  4B D8 CE 98 */	b __dt__Q23efx10TChaseMtxTFv
.endfn "@4@__dt__Q23efx10TChaseMtxTFv"

.fn "@4@__dt__Q23efx12TChasePosPosFv", weak
/* 803B2D6C 003AFCAC  38 63 FF FC */	addi r3, r3, -4
/* 803B2D70 003AFCB0  4B EF 47 78 */	b __dt__Q23efx12TChasePosPosFv
.endfn "@4@__dt__Q23efx12TChasePosPosFv"

.fn "@4@__dt__Q23efx23TChasePosPosLocalZScaleFv", weak
/* 803B2D74 003AFCB4  38 63 FF FC */	addi r3, r3, -4
/* 803B2D78 003AFCB8  4B F4 17 34 */	b __dt__Q23efx23TChasePosPosLocalZScaleFv
.endfn "@4@__dt__Q23efx23TChasePosPosLocalZScaleFv"

.fn "@4@__dt__Q23efx23TChasePosPosLocalYScaleFv", weak
/* 803B2D7C 003AFCBC  38 63 FF FC */	addi r3, r3, -4
/* 803B2D80 003AFCC0  4B F2 D2 D4 */	b __dt__Q23efx23TChasePosPosLocalYScaleFv
.endfn "@4@__dt__Q23efx23TChasePosPosLocalYScaleFv"
